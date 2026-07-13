#include "recomp.h"

/* OnInit @ 0x11151005 (5 bytes, 1 insns) */
void f_11151005(void) {
  FTRACE(0x11151005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11151005 jmp 0x11151030 */
  f_11151030(); return;
}

/* thunk_FUN_10002310 @ 0x1115100a (5 bytes, 1 insns) */
void f_1115100a(void) {
  FTRACE(0x1115100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115100a jmp 0x11152310 */
  f_11152310(); return;
}

/* ProcessScenary @ 0x1115100f (5 bytes, 1 insns) */
void f_1115100f(void) {
  FTRACE(0x1115100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115100f jmp 0x11152370 */
  f_11152370(); return;
}

/* FUN_10001030 @ 0x11151030 (3866 bytes, 1020 insns) */
void f_11151030(void) {
  FTRACE(0x11151030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11151030 push ebp */
  push32((uint32_t)(EBP));
  /* 11151031 mov ebp, esp */
  EBP = (ESP);
  /* 11151033 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11151036 push ebx */
  push32((uint32_t)(EBX));
  /* 11151037 push esi */
  push32((uint32_t)(ESI));
  /* 11151038 push edi */
  push32((uint32_t)(EDI));
  /* 11151039 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1115103c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11151041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11151046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11151048 mov esi, esp */
  ESI = (ESP);
  /* 1115104a push 0x1117e470 */
  push32((uint32_t)(0x1117e470u));
  /* 1115104f push 0x11183468 */
  push32((uint32_t)(0x11183468u));
  /* 11151054 call dword ptr [0x11186514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186514))), 0x1115105au);
  /* 1115105a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115105d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115105f call 0x11156250 */
  push32(0x11151064u); f_11156250();
  /* 11151064 mov esi, esp */
  ESI = (ESP);
  /* 11151066 push 0x1117e468 */
  push32((uint32_t)(0x1117e468u));
  /* 1115106b push 0x111834b8 */
  push32((uint32_t)(0x111834b8u));
  /* 11151070 call dword ptr [0x11186514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186514))), 0x11151076u);
  /* 11151076 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151079 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115107b call 0x11156250 */
  push32(0x11151080u); f_11156250();
  /* 11151080 mov esi, esp */
  ESI = (ESP);
  /* 11151082 push 0x1117e460 */
  push32((uint32_t)(0x1117e460u));
  /* 11151087 push 0x111834b0 */
  push32((uint32_t)(0x111834b0u));
  /* 1115108c call dword ptr [0x11186514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186514))), 0x11151092u);
  /* 11151092 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151095 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151097 call 0x11156250 */
  push32(0x1115109cu); f_11156250();
  /* 1115109c mov esi, esp */
  ESI = (ESP);
  /* 1115109e push 0x1117e458 */
  push32((uint32_t)(0x1117e458u));
  /* 111510a3 push 0x111834c0 */
  push32((uint32_t)(0x111834c0u));
  /* 111510a8 call dword ptr [0x11186514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186514))), 0x111510aeu);
  /* 111510ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111510b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111510b3 call 0x11156250 */
  push32(0x111510b8u); f_11156250();
  /* 111510b8 mov esi, esp */
  ESI = (ESP);
  /* 111510ba push 0x1117e44c */
  push32((uint32_t)(0x1117e44cu));
  /* 111510bf push 0x111834e0 */
  push32((uint32_t)(0x111834e0u));
  /* 111510c4 call dword ptr [0x11186514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186514))), 0x111510cau);
  /* 111510ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111510cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111510cf call 0x11156250 */
  push32(0x111510d4u); f_11156250();
  /* 111510d4 mov esi, esp */
  ESI = (ESP);
  /* 111510d6 push 0x1117e440 */
  push32((uint32_t)(0x1117e440u));
  /* 111510db push 0x111834d8 */
  push32((uint32_t)(0x111834d8u));
  /* 111510e0 call dword ptr [0x11186514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186514))), 0x111510e6u);
  /* 111510e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111510e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111510eb call 0x11156250 */
  push32(0x111510f0u); f_11156250();
  /* 111510f0 mov esi, esp */
  ESI = (ESP);
  /* 111510f2 push 0x1117e434 */
  push32((uint32_t)(0x1117e434u));
  /* 111510f7 push 0x111834d0 */
  push32((uint32_t)(0x111834d0u));
  /* 111510fc call dword ptr [0x11186514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186514))), 0x11151102u);
  /* 11151102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151107 call 0x11156250 */
  push32(0x1115110cu); f_11156250();
  /* 1115110c mov esi, esp */
  ESI = (ESP);
  /* 1115110e push 0x1117e428 */
  push32((uint32_t)(0x1117e428u));
  /* 11151113 push 0x111836c0 */
  push32((uint32_t)(0x111836c0u));
  /* 11151118 call dword ptr [0x11186514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186514))), 0x1115111eu);
  /* 1115111e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151121 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151123 call 0x11156250 */
  push32(0x11151128u); f_11156250();
  /* 11151128 mov esi, esp */
  ESI = (ESP);
  /* 1115112a push 0x1117e420 */
  push32((uint32_t)(0x1117e420u));
  /* 1115112f push 0x11183698 */
  push32((uint32_t)(0x11183698u));
  /* 11151134 call dword ptr [0x11186514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186514))), 0x1115113au);
  /* 1115113a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115113d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115113f call 0x11156250 */
  push32(0x11151144u); f_11156250();
  /* 11151144 mov esi, esp */
  ESI = (ESP);
  /* 11151146 push 0x1117e414 */
  push32((uint32_t)(0x1117e414u));
  /* 1115114b push 0x11183668 */
  push32((uint32_t)(0x11183668u));
  /* 11151150 call dword ptr [0x11186514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186514))), 0x11151156u);
  /* 11151156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115115b call 0x11156250 */
  push32(0x11151160u); f_11156250();
  /* 11151160 mov esi, esp */
  ESI = (ESP);
  /* 11151162 push 0x1117e408 */
  push32((uint32_t)(0x1117e408u));
  /* 11151167 push 0x11183660 */
  push32((uint32_t)(0x11183660u));
  /* 1115116c call dword ptr [0x11186514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186514))), 0x11151172u);
  /* 11151172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151177 call 0x11156250 */
  push32(0x1115117cu); f_11156250();
  /* 1115117c mov esi, esp */
  ESI = (ESP);
  /* 1115117e push 0x1117e3fc */
  push32((uint32_t)(0x1117e3fcu));
  /* 11151183 push 0x11183678 */
  push32((uint32_t)(0x11183678u));
  /* 11151188 call dword ptr [0x11186514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186514))), 0x1115118eu);
  /* 1115118e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151191 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151193 call 0x11156250 */
  push32(0x11151198u); f_11156250();
  /* 11151198 mov esi, esp */
  ESI = (ESP);
  /* 1115119a push 0x1117e3f0 */
  push32((uint32_t)(0x1117e3f0u));
  /* 1115119f push 0x11183670 */
  push32((uint32_t)(0x11183670u));
  /* 111511a4 call dword ptr [0x11186514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186514))), 0x111511aau);
  /* 111511aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111511ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111511af call 0x11156250 */
  push32(0x111511b4u); f_11156250();
  /* 111511b4 mov esi, esp */
  ESI = (ESP);
  /* 111511b6 push 0x1117e3e8 */
  push32((uint32_t)(0x1117e3e8u));
  /* 111511bb push 0x11183718 */
  push32((uint32_t)(0x11183718u));
  /* 111511c0 call dword ptr [0x11186514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186514))), 0x111511c6u);
  /* 111511c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111511c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111511cb call 0x11156250 */
  push32(0x111511d0u); f_11156250();
  /* 111511d0 mov esi, esp */
  ESI = (ESP);
  /* 111511d2 push 0x1117e3e0 */
  push32((uint32_t)(0x1117e3e0u));
  /* 111511d7 push 0x11183680 */
  push32((uint32_t)(0x11183680u));
  /* 111511dc call dword ptr [0x11186514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186514))), 0x111511e2u);
  /* 111511e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111511e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111511e7 call 0x11156250 */
  push32(0x111511ecu); f_11156250();
  /* 111511ec mov esi, esp */
  ESI = (ESP);
  /* 111511ee push 0x1117e3d8 */
  push32((uint32_t)(0x1117e3d8u));
  /* 111511f3 push 0x11183688 */
  push32((uint32_t)(0x11183688u));
  /* 111511f8 call dword ptr [0x11186514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186514))), 0x111511feu);
  /* 111511fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151201 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151203 call 0x11156250 */
  push32(0x11151208u); f_11156250();
  /* 11151208 mov esi, esp */
  ESI = (ESP);
  /* 1115120a push 0x1117e3d0 */
  push32((uint32_t)(0x1117e3d0u));
  /* 1115120f push 0x11183570 */
  push32((uint32_t)(0x11183570u));
  /* 11151214 call dword ptr [0x11186514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186514))), 0x1115121au);
  /* 1115121a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115121d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115121f call 0x11156250 */
  push32(0x11151224u); f_11156250();
  /* 11151224 mov esi, esp */
  ESI = (ESP);
  /* 11151226 push 0x1117e3c8 */
  push32((uint32_t)(0x1117e3c8u));
  /* 1115122b push 0x11183578 */
  push32((uint32_t)(0x11183578u));
  /* 11151230 call dword ptr [0x11186514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186514))), 0x11151236u);
  /* 11151236 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151239 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115123b call 0x11156250 */
  push32(0x11151240u); f_11156250();
  /* 11151240 mov esi, esp */
  ESI = (ESP);
  /* 11151242 push 0x1117e3c0 */
  push32((uint32_t)(0x1117e3c0u));
  /* 11151247 push 0x11183580 */
  push32((uint32_t)(0x11183580u));
  /* 1115124c call dword ptr [0x11186514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186514))), 0x11151252u);
  /* 11151252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151257 call 0x11156250 */
  push32(0x1115125cu); f_11156250();
  /* 1115125c mov esi, esp */
  ESI = (ESP);
  /* 1115125e push 0x1117e3b8 */
  push32((uint32_t)(0x1117e3b8u));
  /* 11151263 push 0x11183588 */
  push32((uint32_t)(0x11183588u));
  /* 11151268 call dword ptr [0x11186514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186514))), 0x1115126eu);
  /* 1115126e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151271 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151273 call 0x11156250 */
  push32(0x11151278u); f_11156250();
  /* 11151278 mov esi, esp */
  ESI = (ESP);
  /* 1115127a push 0x1117e3b0 */
  push32((uint32_t)(0x1117e3b0u));
  /* 1115127f push 0x11183590 */
  push32((uint32_t)(0x11183590u));
  /* 11151284 call dword ptr [0x11186514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186514))), 0x1115128au);
  /* 1115128a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115128d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115128f call 0x11156250 */
  push32(0x11151294u); f_11156250();
  /* 11151294 mov esi, esp */
  ESI = (ESP);
  /* 11151296 push 0x1117e3a8 */
  push32((uint32_t)(0x1117e3a8u));
  /* 1115129b push 0x11183598 */
  push32((uint32_t)(0x11183598u));
  /* 111512a0 call dword ptr [0x11186514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186514))), 0x111512a6u);
  /* 111512a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111512a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111512ab call 0x11156250 */
  push32(0x111512b0u); f_11156250();
  /* 111512b0 mov esi, esp */
  ESI = (ESP);
  /* 111512b2 push 0x1117e3a0 */
  push32((uint32_t)(0x1117e3a0u));
  /* 111512b7 push 0x111835a0 */
  push32((uint32_t)(0x111835a0u));
  /* 111512bc call dword ptr [0x11186514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186514))), 0x111512c2u);
  /* 111512c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111512c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111512c7 call 0x11156250 */
  push32(0x111512ccu); f_11156250();
  /* 111512cc mov esi, esp */
  ESI = (ESP);
  /* 111512ce push 0x1117e398 */
  push32((uint32_t)(0x1117e398u));
  /* 111512d3 push 0x111835a8 */
  push32((uint32_t)(0x111835a8u));
  /* 111512d8 call dword ptr [0x11186514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186514))), 0x111512deu);
  /* 111512de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111512e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111512e3 call 0x11156250 */
  push32(0x111512e8u); f_11156250();
  /* 111512e8 mov esi, esp */
  ESI = (ESP);
  /* 111512ea push 0x1117e390 */
  push32((uint32_t)(0x1117e390u));
  /* 111512ef push 0x11183560 */
  push32((uint32_t)(0x11183560u));
  /* 111512f4 call dword ptr [0x11186514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186514))), 0x111512fau);
  /* 111512fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111512fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111512ff call 0x11156250 */
  push32(0x11151304u); f_11156250();
  /* 11151304 mov esi, esp */
  ESI = (ESP);
  /* 11151306 push 0x1117e388 */
  push32((uint32_t)(0x1117e388u));
  /* 1115130b push 0x11183548 */
  push32((uint32_t)(0x11183548u));
  /* 11151310 call dword ptr [0x11186514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186514))), 0x11151316u);
  /* 11151316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151319 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115131b call 0x11156250 */
  push32(0x11151320u); f_11156250();
  /* 11151320 mov esi, esp */
  ESI = (ESP);
  /* 11151322 push 0x1117e380 */
  push32((uint32_t)(0x1117e380u));
  /* 11151327 push 0x11183480 */
  push32((uint32_t)(0x11183480u));
  /* 1115132c call dword ptr [0x11186514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186514))), 0x11151332u);
  /* 11151332 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151335 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151337 call 0x11156250 */
  push32(0x1115133cu); f_11156250();
  /* 1115133c mov esi, esp */
  ESI = (ESP);
  /* 1115133e push 0x1117e378 */
  push32((uint32_t)(0x1117e378u));
  /* 11151343 push 0x11183488 */
  push32((uint32_t)(0x11183488u));
  /* 11151348 call dword ptr [0x11186514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186514))), 0x1115134eu);
  /* 1115134e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151351 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151353 call 0x11156250 */
  push32(0x11151358u); f_11156250();
  /* 11151358 mov esi, esp */
  ESI = (ESP);
  /* 1115135a push 0x1117e370 */
  push32((uint32_t)(0x1117e370u));
  /* 1115135f push 0x11183490 */
  push32((uint32_t)(0x11183490u));
  /* 11151364 call dword ptr [0x11186514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186514))), 0x1115136au);
  /* 1115136a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115136d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115136f call 0x11156250 */
  push32(0x11151374u); f_11156250();
  /* 11151374 mov esi, esp */
  ESI = (ESP);
  /* 11151376 push 0x1117e368 */
  push32((uint32_t)(0x1117e368u));
  /* 1115137b push 0x11183498 */
  push32((uint32_t)(0x11183498u));
  /* 11151380 call dword ptr [0x11186514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186514))), 0x11151386u);
  /* 11151386 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151389 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115138b call 0x11156250 */
  push32(0x11151390u); f_11156250();
  /* 11151390 mov esi, esp */
  ESI = (ESP);
  /* 11151392 push 0x1117e360 */
  push32((uint32_t)(0x1117e360u));
  /* 11151397 push 0x111834a0 */
  push32((uint32_t)(0x111834a0u));
  /* 1115139c call dword ptr [0x11186514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186514))), 0x111513a2u);
  /* 111513a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111513a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111513a7 call 0x11156250 */
  push32(0x111513acu); f_11156250();
  /* 111513ac mov esi, esp */
  ESI = (ESP);
  /* 111513ae push 0x1117e358 */
  push32((uint32_t)(0x1117e358u));
  /* 111513b3 push 0x11183500 */
  push32((uint32_t)(0x11183500u));
  /* 111513b8 call dword ptr [0x11186514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186514))), 0x111513beu);
  /* 111513be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111513c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111513c3 call 0x11156250 */
  push32(0x111513c8u); f_11156250();
  /* 111513c8 mov esi, esp */
  ESI = (ESP);
  /* 111513ca push 0x1117e350 */
  push32((uint32_t)(0x1117e350u));
  /* 111513cf push 0x111834e8 */
  push32((uint32_t)(0x111834e8u));
  /* 111513d4 call dword ptr [0x11186514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186514))), 0x111513dau);
  /* 111513da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111513dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111513df call 0x11156250 */
  push32(0x111513e4u); f_11156250();
  /* 111513e4 mov esi, esp */
  ESI = (ESP);
  /* 111513e6 push 0x1117e348 */
  push32((uint32_t)(0x1117e348u));
  /* 111513eb push 0x11183478 */
  push32((uint32_t)(0x11183478u));
  /* 111513f0 call dword ptr [0x11186514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186514))), 0x111513f6u);
  /* 111513f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111513f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111513fb call 0x11156250 */
  push32(0x11151400u); f_11156250();
  /* 11151400 mov esi, esp */
  ESI = (ESP);
  /* 11151402 push 0x1117e340 */
  push32((uint32_t)(0x1117e340u));
  /* 11151407 push 0x111836a8 */
  push32((uint32_t)(0x111836a8u));
  /* 1115140c call dword ptr [0x11186514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186514))), 0x11151412u);
  /* 11151412 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151415 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151417 call 0x11156250 */
  push32(0x1115141cu); f_11156250();
  /* 1115141c mov esi, esp */
  ESI = (ESP);
  /* 1115141e push 0x1117e338 */
  push32((uint32_t)(0x1117e338u));
  /* 11151423 push 0x11183658 */
  push32((uint32_t)(0x11183658u));
  /* 11151428 call dword ptr [0x11186514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186514))), 0x1115142eu);
  /* 1115142e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151431 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151433 call 0x11156250 */
  push32(0x11151438u); f_11156250();
  /* 11151438 mov esi, esp */
  ESI = (ESP);
  /* 1115143a push 0x1117e32c */
  push32((uint32_t)(0x1117e32cu));
  /* 1115143f push 0x111835c0 */
  push32((uint32_t)(0x111835c0u));
  /* 11151444 call dword ptr [0x11186514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186514))), 0x1115144au);
  /* 1115144a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115144d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115144f call 0x11156250 */
  push32(0x11151454u); f_11156250();
  /* 11151454 mov esi, esp */
  ESI = (ESP);
  /* 11151456 push 0x1117e320 */
  push32((uint32_t)(0x1117e320u));
  /* 1115145b push 0x111833f8 */
  push32((uint32_t)(0x111833f8u));
  /* 11151460 call dword ptr [0x11186514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186514))), 0x11151466u);
  /* 11151466 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151469 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115146b call 0x11156250 */
  push32(0x11151470u); f_11156250();
  /* 11151470 mov esi, esp */
  ESI = (ESP);
  /* 11151472 push 0x1117e314 */
  push32((uint32_t)(0x1117e314u));
  /* 11151477 push 0x111833e8 */
  push32((uint32_t)(0x111833e8u));
  /* 1115147c call dword ptr [0x11186514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186514))), 0x11151482u);
  /* 11151482 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151485 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151487 call 0x11156250 */
  push32(0x1115148cu); f_11156250();
  /* 1115148c mov esi, esp */
  ESI = (ESP);
  /* 1115148e push 0x1117e30c */
  push32((uint32_t)(0x1117e30cu));
  /* 11151493 push 0x111835d0 */
  push32((uint32_t)(0x111835d0u));
  /* 11151498 call dword ptr [0x11186518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186518))), 0x1115149eu);
  /* 1115149e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111514a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111514a3 call 0x11156250 */
  push32(0x111514a8u); f_11156250();
  /* 111514a8 mov esi, esp */
  ESI = (ESP);
  /* 111514aa push 0x1117e300 */
  push32((uint32_t)(0x1117e300u));
  /* 111514af push 0x111836e8 */
  push32((uint32_t)(0x111836e8u));
  /* 111514b4 call dword ptr [0x11186518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186518))), 0x111514bau);
  /* 111514ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111514bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111514bf call 0x11156250 */
  push32(0x111514c4u); f_11156250();
  /* 111514c4 mov esi, esp */
  ESI = (ESP);
  /* 111514c6 push 0x1117e2f4 */
  push32((uint32_t)(0x1117e2f4u));
  /* 111514cb push 0x111836f0 */
  push32((uint32_t)(0x111836f0u));
  /* 111514d0 call dword ptr [0x11186518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186518))), 0x111514d6u);
  /* 111514d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111514d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111514db call 0x11156250 */
  push32(0x111514e0u); f_11156250();
  /* 111514e0 mov esi, esp */
  ESI = (ESP);
  /* 111514e2 push 0x1117e2ec */
  push32((uint32_t)(0x1117e2ecu));
  /* 111514e7 push 0x111835d8 */
  push32((uint32_t)(0x111835d8u));
  /* 111514ec call dword ptr [0x11186518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186518))), 0x111514f2u);
  /* 111514f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111514f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111514f7 call 0x11156250 */
  push32(0x111514fcu); f_11156250();
  /* 111514fc mov esi, esp */
  ESI = (ESP);
  /* 111514fe push 0x1117e2e0 */
  push32((uint32_t)(0x1117e2e0u));
  /* 11151503 push 0x111836f8 */
  push32((uint32_t)(0x111836f8u));
  /* 11151508 call dword ptr [0x11186518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186518))), 0x1115150eu);
  /* 1115150e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151511 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151513 call 0x11156250 */
  push32(0x11151518u); f_11156250();
  /* 11151518 mov esi, esp */
  ESI = (ESP);
  /* 1115151a push 0x1117e2d4 */
  push32((uint32_t)(0x1117e2d4u));
  /* 1115151f push 0x11183700 */
  push32((uint32_t)(0x11183700u));
  /* 11151524 call dword ptr [0x11186518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186518))), 0x1115152au);
  /* 1115152a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115152d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115152f call 0x11156250 */
  push32(0x11151534u); f_11156250();
  /* 11151534 mov esi, esp */
  ESI = (ESP);
  /* 11151536 push 0x1117e2cc */
  push32((uint32_t)(0x1117e2ccu));
  /* 1115153b push 0x111835e0 */
  push32((uint32_t)(0x111835e0u));
  /* 11151540 call dword ptr [0x11186518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186518))), 0x11151546u);
  /* 11151546 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151549 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115154b call 0x11156250 */
  push32(0x11151550u); f_11156250();
  /* 11151550 mov esi, esp */
  ESI = (ESP);
  /* 11151552 push 0x1117e2c0 */
  push32((uint32_t)(0x1117e2c0u));
  /* 11151557 push 0x111836d8 */
  push32((uint32_t)(0x111836d8u));
  /* 1115155c call dword ptr [0x11186518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186518))), 0x11151562u);
  /* 11151562 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151565 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151567 call 0x11156250 */
  push32(0x1115156cu); f_11156250();
  /* 1115156c mov esi, esp */
  ESI = (ESP);
  /* 1115156e push 0x1117e2b4 */
  push32((uint32_t)(0x1117e2b4u));
  /* 11151573 push 0x111836e0 */
  push32((uint32_t)(0x111836e0u));
  /* 11151578 call dword ptr [0x11186518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186518))), 0x1115157eu);
  /* 1115157e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151581 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151583 call 0x11156250 */
  push32(0x11151588u); f_11156250();
  /* 11151588 mov esi, esp */
  ESI = (ESP);
  /* 1115158a push 0x1117e2ac */
  push32((uint32_t)(0x1117e2acu));
  /* 1115158f push 0x11183550 */
  push32((uint32_t)(0x11183550u));
  /* 11151594 call dword ptr [0x11186518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186518))), 0x1115159au);
  /* 1115159a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115159d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115159f call 0x11156250 */
  push32(0x111515a4u); f_11156250();
  /* 111515a4 mov esi, esp */
  ESI = (ESP);
  /* 111515a6 push 0x1117e2a0 */
  push32((uint32_t)(0x1117e2a0u));
  /* 111515ab push 0x11183458 */
  push32((uint32_t)(0x11183458u));
  /* 111515b0 call dword ptr [0x11186518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186518))), 0x111515b6u);
  /* 111515b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111515b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111515bb call 0x11156250 */
  push32(0x111515c0u); f_11156250();
  /* 111515c0 mov esi, esp */
  ESI = (ESP);
  /* 111515c2 push 0x1117e298 */
  push32((uint32_t)(0x1117e298u));
  /* 111515c7 push 0x11183618 */
  push32((uint32_t)(0x11183618u));
  /* 111515cc call dword ptr [0x11186518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186518))), 0x111515d2u);
  /* 111515d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111515d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111515d7 call 0x11156250 */
  push32(0x111515dcu); f_11156250();
  /* 111515dc mov esi, esp */
  ESI = (ESP);
  /* 111515de push 0x1117e290 */
  push32((uint32_t)(0x1117e290u));
  /* 111515e3 push 0x11183620 */
  push32((uint32_t)(0x11183620u));
  /* 111515e8 call dword ptr [0x11186518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186518))), 0x111515eeu);
  /* 111515ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111515f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111515f3 call 0x11156250 */
  push32(0x111515f8u); f_11156250();
  /* 111515f8 mov esi, esp */
  ESI = (ESP);
  /* 111515fa push 0x1117e288 */
  push32((uint32_t)(0x1117e288u));
  /* 111515ff push 0x11183628 */
  push32((uint32_t)(0x11183628u));
  /* 11151604 call dword ptr [0x11186518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186518))), 0x1115160au);
  /* 1115160a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115160d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115160f call 0x11156250 */
  push32(0x11151614u); f_11156250();
  /* 11151614 mov esi, esp */
  ESI = (ESP);
  /* 11151616 push 0x1117e280 */
  push32((uint32_t)(0x1117e280u));
  /* 1115161b push 0x11183630 */
  push32((uint32_t)(0x11183630u));
  /* 11151620 call dword ptr [0x11186518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186518))), 0x11151626u);
  /* 11151626 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151629 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115162b call 0x11156250 */
  push32(0x11151630u); f_11156250();
  /* 11151630 mov esi, esp */
  ESI = (ESP);
  /* 11151632 push 0x1117e274 */
  push32((uint32_t)(0x1117e274u));
  /* 11151637 push 0x11183610 */
  push32((uint32_t)(0x11183610u));
  /* 1115163c call dword ptr [0x11186518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186518))), 0x11151642u);
  /* 11151642 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151645 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151647 call 0x11156250 */
  push32(0x1115164cu); f_11156250();
  /* 1115164c mov esi, esp */
  ESI = (ESP);
  /* 1115164e push 0x1117e26c */
  push32((uint32_t)(0x1117e26cu));
  /* 11151653 push 0x11183708 */
  push32((uint32_t)(0x11183708u));
  /* 11151658 call dword ptr [0x11186518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186518))), 0x1115165eu);
  /* 1115165e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151661 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151663 call 0x11156250 */
  push32(0x11151668u); f_11156250();
  /* 11151668 mov esi, esp */
  ESI = (ESP);
  /* 1115166a push 0x1117e264 */
  push32((uint32_t)(0x1117e264u));
  /* 1115166f push 0x11183710 */
  push32((uint32_t)(0x11183710u));
  /* 11151674 call dword ptr [0x11186518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186518))), 0x1115167au);
  /* 1115167a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115167d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115167f call 0x11156250 */
  push32(0x11151684u); f_11156250();
  /* 11151684 mov esi, esp */
  ESI = (ESP);
  /* 11151686 push 0x1117e25c */
  push32((uint32_t)(0x1117e25cu));
  /* 1115168b push 0x11183558 */
  push32((uint32_t)(0x11183558u));
  /* 11151690 call dword ptr [0x11186518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186518))), 0x11151696u);
  /* 11151696 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151699 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115169b call 0x11156250 */
  push32(0x111516a0u); f_11156250();
  /* 111516a0 mov esi, esp */
  ESI = (ESP);
  /* 111516a2 push 0x1117e250 */
  push32((uint32_t)(0x1117e250u));
  /* 111516a7 push 0x111836a0 */
  push32((uint32_t)(0x111836a0u));
  /* 111516ac call dword ptr [0x11186518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186518))), 0x111516b2u);
  /* 111516b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111516b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111516b7 call 0x11156250 */
  push32(0x111516bcu); f_11156250();
  /* 111516bc mov esi, esp */
  ESI = (ESP);
  /* 111516be push 0x1117e244 */
  push32((uint32_t)(0x1117e244u));
  /* 111516c3 push 0x111836d0 */
  push32((uint32_t)(0x111836d0u));
  /* 111516c8 call dword ptr [0x11186518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186518))), 0x111516ceu);
  /* 111516ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111516d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111516d3 call 0x11156250 */
  push32(0x111516d8u); f_11156250();
  /* 111516d8 mov esi, esp */
  ESI = (ESP);
  /* 111516da push 0x1117e238 */
  push32((uint32_t)(0x1117e238u));
  /* 111516df push 0x111836c8 */
  push32((uint32_t)(0x111836c8u));
  /* 111516e4 call dword ptr [0x11186518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186518))), 0x111516eau);
  /* 111516ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111516ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111516ef call 0x11156250 */
  push32(0x111516f4u); f_11156250();
  /* 111516f4 mov esi, esp */
  ESI = (ESP);
  /* 111516f6 push 0x1117e22c */
  push32((uint32_t)(0x1117e22cu));
  /* 111516fb push 0x111836b8 */
  push32((uint32_t)(0x111836b8u));
  /* 11151700 call dword ptr [0x11186518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186518))), 0x11151706u);
  /* 11151706 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151709 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115170b call 0x11156250 */
  push32(0x11151710u); f_11156250();
  /* 11151710 mov esi, esp */
  ESI = (ESP);
  /* 11151712 push 0x1117e218 */
  push32((uint32_t)(0x1117e218u));
  /* 11151717 push 0x11183608 */
  push32((uint32_t)(0x11183608u));
  /* 1115171c call dword ptr [0x1118651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118651c))), 0x11151722u);
  /* 11151722 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151725 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151727 call 0x11156250 */
  push32(0x1115172cu); f_11156250();
  /* 1115172c mov esi, esp */
  ESI = (ESP);
  /* 1115172e push 0x1117e204 */
  push32((uint32_t)(0x1117e204u));
  /* 11151733 push 0x11183720 */
  push32((uint32_t)(0x11183720u));
  /* 11151738 call dword ptr [0x1118651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118651c))), 0x1115173eu);
  /* 1115173e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151741 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151743 call 0x11156250 */
  push32(0x11151748u); f_11156250();
  /* 11151748 mov esi, esp */
  ESI = (ESP);
  /* 1115174a push 0x1117e1f4 */
  push32((uint32_t)(0x1117e1f4u));
  /* 1115174f push 0x11183510 */
  push32((uint32_t)(0x11183510u));
  /* 11151754 call dword ptr [0x1118651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118651c))), 0x1115175au);
  /* 1115175a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115175d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115175f call 0x11156250 */
  push32(0x11151764u); f_11156250();
  /* 11151764 mov esi, esp */
  ESI = (ESP);
  /* 11151766 push 0x1117e1e4 */
  push32((uint32_t)(0x1117e1e4u));
  /* 1115176b push 0x111835b0 */
  push32((uint32_t)(0x111835b0u));
  /* 11151770 call dword ptr [0x1118651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118651c))), 0x11151776u);
  /* 11151776 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151779 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115177b call 0x11156250 */
  push32(0x11151780u); f_11156250();
  /* 11151780 mov esi, esp */
  ESI = (ESP);
  /* 11151782 push 0x1117e1d4 */
  push32((uint32_t)(0x1117e1d4u));
  /* 11151787 push 0x111835b8 */
  push32((uint32_t)(0x111835b8u));
  /* 1115178c call dword ptr [0x1118651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118651c))), 0x11151792u);
  /* 11151792 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151795 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151797 call 0x11156250 */
  push32(0x1115179cu); f_11156250();
  /* 1115179c mov esi, esp */
  ESI = (ESP);
  /* 1115179e push 0x1117e1c4 */
  push32((uint32_t)(0x1117e1c4u));
  /* 111517a3 push 0x111835f8 */
  push32((uint32_t)(0x111835f8u));
  /* 111517a8 call dword ptr [0x1118651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118651c))), 0x111517aeu);
  /* 111517ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111517b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111517b3 call 0x11156250 */
  push32(0x111517b8u); f_11156250();
  /* 111517b8 mov esi, esp */
  ESI = (ESP);
  /* 111517ba push 0x1117e1b4 */
  push32((uint32_t)(0x1117e1b4u));
  /* 111517bf push 0x11183600 */
  push32((uint32_t)(0x11183600u));
  /* 111517c4 call dword ptr [0x1118651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118651c))), 0x111517cau);
  /* 111517ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111517cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111517cf call 0x11156250 */
  push32(0x111517d4u); f_11156250();
  /* 111517d4 mov esi, esp */
  ESI = (ESP);
  /* 111517d6 push 0x1117e1a4 */
  push32((uint32_t)(0x1117e1a4u));
  /* 111517db push 0x111835c8 */
  push32((uint32_t)(0x111835c8u));
  /* 111517e0 call dword ptr [0x1118651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118651c))), 0x111517e6u);
  /* 111517e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111517e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111517eb call 0x11156250 */
  push32(0x111517f0u); f_11156250();
  /* 111517f0 mov esi, esp */
  ESI = (ESP);
  /* 111517f2 push 0x1117e198 */
  push32((uint32_t)(0x1117e198u));
  /* 111517f7 push 0x11183650 */
  push32((uint32_t)(0x11183650u));
  /* 111517fc call dword ptr [0x1118651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118651c))), 0x11151802u);
  /* 11151802 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151805 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151807 call 0x11156250 */
  push32(0x1115180cu); f_11156250();
  /* 1115180c mov esi, esp */
  ESI = (ESP);
  /* 1115180e push 0x1117e180 */
  push32((uint32_t)(0x1117e180u));
  /* 11151813 push 0x111834c8 */
  push32((uint32_t)(0x111834c8u));
  /* 11151818 call dword ptr [0x1118651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118651c))), 0x1115181eu);
  /* 1115181e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151821 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151823 call 0x11156250 */
  push32(0x11151828u); f_11156250();
  /* 11151828 mov esi, esp */
  ESI = (ESP);
  /* 1115182a push 0x1117e170 */
  push32((uint32_t)(0x1117e170u));
  /* 1115182f push 0x11183450 */
  push32((uint32_t)(0x11183450u));
  /* 11151834 call dword ptr [0x1118651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118651c))), 0x1115183au);
  /* 1115183a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115183d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115183f call 0x11156250 */
  push32(0x11151844u); f_11156250();
  /* 11151844 mov esi, esp */
  ESI = (ESP);
  /* 11151846 push 0x1117e160 */
  push32((uint32_t)(0x1117e160u));
  /* 1115184b push 0x11183400 */
  push32((uint32_t)(0x11183400u));
  /* 11151850 call dword ptr [0x1118651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118651c))), 0x11151856u);
  /* 11151856 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151859 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115185b call 0x11156250 */
  push32(0x11151860u); f_11156250();
  /* 11151860 mov esi, esp */
  ESI = (ESP);
  /* 11151862 push 0x1117e150 */
  push32((uint32_t)(0x1117e150u));
  /* 11151867 push 0x11183690 */
  push32((uint32_t)(0x11183690u));
  /* 1115186c call dword ptr [0x1118651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118651c))), 0x11151872u);
  /* 11151872 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151875 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151877 call 0x11156250 */
  push32(0x1115187cu); f_11156250();
  /* 1115187c mov esi, esp */
  ESI = (ESP);
  /* 1115187e push 0x1117e144 */
  push32((uint32_t)(0x1117e144u));
  /* 11151883 push 0x11183460 */
  push32((uint32_t)(0x11183460u));
  /* 11151888 call dword ptr [0x1118651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118651c))), 0x1115188eu);
  /* 1115188e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151891 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151893 call 0x11156250 */
  push32(0x11151898u); f_11156250();
  /* 11151898 mov esi, esp */
  ESI = (ESP);
  /* 1115189a push 0x1117e134 */
  push32((uint32_t)(0x1117e134u));
  /* 1115189f push 0x11183568 */
  push32((uint32_t)(0x11183568u));
  /* 111518a4 call dword ptr [0x1118651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118651c))), 0x111518aau);
  /* 111518aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111518ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111518af call 0x11156250 */
  push32(0x111518b4u); f_11156250();
  /* 111518b4 mov esi, esp */
  ESI = (ESP);
  /* 111518b6 push 0x1117e124 */
  push32((uint32_t)(0x1117e124u));
  /* 111518bb push 0x111836b0 */
  push32((uint32_t)(0x111836b0u));
  /* 111518c0 call dword ptr [0x1118651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118651c))), 0x111518c6u);
  /* 111518c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111518c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111518cb call 0x11156250 */
  push32(0x111518d0u); f_11156250();
  /* 111518d0 mov esi, esp */
  ESI = (ESP);
  /* 111518d2 push 0x1117e114 */
  push32((uint32_t)(0x1117e114u));
  /* 111518d7 push 0x11183508 */
  push32((uint32_t)(0x11183508u));
  /* 111518dc call dword ptr [0x1118651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118651c))), 0x111518e2u);
  /* 111518e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111518e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111518e7 call 0x11156250 */
  push32(0x111518ecu); f_11156250();
  /* 111518ec mov esi, esp */
  ESI = (ESP);
  /* 111518ee push 0x1117e100 */
  push32((uint32_t)(0x1117e100u));
  /* 111518f3 push 0x11183470 */
  push32((uint32_t)(0x11183470u));
  /* 111518f8 call dword ptr [0x1118651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118651c))), 0x111518feu);
  /* 111518fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151901 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151903 call 0x11156250 */
  push32(0x11151908u); f_11156250();
  /* 11151908 mov esi, esp */
  ESI = (ESP);
  /* 1115190a push 0x1117e0e8 */
  push32((uint32_t)(0x1117e0e8u));
  /* 1115190f push 0x11183520 */
  push32((uint32_t)(0x11183520u));
  /* 11151914 call dword ptr [0x1118651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118651c))), 0x1115191au);
  /* 1115191a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115191d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115191f call 0x11156250 */
  push32(0x11151924u); f_11156250();
  /* 11151924 mov esi, esp */
  ESI = (ESP);
  /* 11151926 push 0x1117e0dc */
  push32((uint32_t)(0x1117e0dcu));
  /* 1115192b push 0x111833f0 */
  push32((uint32_t)(0x111833f0u));
  /* 11151930 call dword ptr [0x1118651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118651c))), 0x11151936u);
  /* 11151936 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151939 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115193b call 0x11156250 */
  push32(0x11151940u); f_11156250();
  /* 11151940 mov esi, esp */
  ESI = (ESP);
  /* 11151942 push 0x1117e0cc */
  push32((uint32_t)(0x1117e0ccu));
  /* 11151947 push 0x111835e8 */
  push32((uint32_t)(0x111835e8u));
  /* 1115194c call dword ptr [0x1118651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118651c))), 0x11151952u);
  /* 11151952 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151955 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151957 call 0x11156250 */
  push32(0x1115195cu); f_11156250();
  /* 1115195c mov esi, esp */
  ESI = (ESP);
  /* 1115195e push 0x1117e0bc */
  push32((uint32_t)(0x1117e0bcu));
  /* 11151963 push 0x111835f0 */
  push32((uint32_t)(0x111835f0u));
  /* 11151968 call dword ptr [0x1118651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118651c))), 0x1115196eu);
  /* 1115196e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151971 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151973 call 0x11156250 */
  push32(0x11151978u); f_11156250();
  /* 11151978 mov esi, esp */
  ESI = (ESP);
  /* 1115197a push 8 */
  push32((uint32_t)(0x8u));
  /* 1115197c push 0x11183438 */
  push32((uint32_t)(0x11183438u));
  /* 11151981 call dword ptr [0x11186520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186520))), 0x11151987u);
  /* 11151987 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115198a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115198c call 0x11156250 */
  push32(0x11151991u); f_11156250();
  /* 11151991 mov esi, esp */
  ESI = (ESP);
  /* 11151993 push 8 */
  push32((uint32_t)(0x8u));
  /* 11151995 push 0x11183430 */
  push32((uint32_t)(0x11183430u));
  /* 1115199a call dword ptr [0x11186520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186520))), 0x111519a0u);
  /* 111519a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111519a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111519a5 call 0x11156250 */
  push32(0x111519aau); f_11156250();
  /* 111519aa mov esi, esp */
  ESI = (ESP);
  /* 111519ac push 8 */
  push32((uint32_t)(0x8u));
  /* 111519ae push 0x11183448 */
  push32((uint32_t)(0x11183448u));
  /* 111519b3 call dword ptr [0x11186520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186520))), 0x111519b9u);
  /* 111519b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111519bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111519be call 0x11156250 */
  push32(0x111519c3u); f_11156250();
  /* 111519c3 mov esi, esp */
  ESI = (ESP);
  /* 111519c5 push 8 */
  push32((uint32_t)(0x8u));
  /* 111519c7 push 0x11183440 */
  push32((uint32_t)(0x11183440u));
  /* 111519cc call dword ptr [0x11186520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186520))), 0x111519d2u);
  /* 111519d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111519d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111519d7 call 0x11156250 */
  push32(0x111519dcu); f_11156250();
  /* 111519dc mov esi, esp */
  ESI = (ESP);
  /* 111519de push 8 */
  push32((uint32_t)(0x8u));
  /* 111519e0 push 0x11183410 */
  push32((uint32_t)(0x11183410u));
  /* 111519e5 call dword ptr [0x11186520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186520))), 0x111519ebu);
  /* 111519eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111519ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111519f0 call 0x11156250 */
  push32(0x111519f5u); f_11156250();
  /* 111519f5 mov esi, esp */
  ESI = (ESP);
  /* 111519f7 push 8 */
  push32((uint32_t)(0x8u));
  /* 111519f9 push 0x11183408 */
  push32((uint32_t)(0x11183408u));
  /* 111519fe call dword ptr [0x11186520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186520))), 0x11151a04u);
  /* 11151a04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151a07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151a09 call 0x11156250 */
  push32(0x11151a0eu); f_11156250();
  /* 11151a0e mov esi, esp */
  ESI = (ESP);
  /* 11151a10 push 8 */
  push32((uint32_t)(0x8u));
  /* 11151a12 push 0x11183420 */
  push32((uint32_t)(0x11183420u));
  /* 11151a17 call dword ptr [0x11186520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186520))), 0x11151a1du);
  /* 11151a1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151a20 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151a22 call 0x11156250 */
  push32(0x11151a27u); f_11156250();
  /* 11151a27 mov esi, esp */
  ESI = (ESP);
  /* 11151a29 push 8 */
  push32((uint32_t)(0x8u));
  /* 11151a2b push 0x11183418 */
  push32((uint32_t)(0x11183418u));
  /* 11151a30 call dword ptr [0x11186520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186520))), 0x11151a36u);
  /* 11151a36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151a39 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151a3b call 0x11156250 */
  push32(0x11151a40u); f_11156250();
  /* 11151a40 mov esi, esp */
  ESI = (ESP);
  /* 11151a42 push 8 */
  push32((uint32_t)(0x8u));
  /* 11151a44 push 0x11183428 */
  push32((uint32_t)(0x11183428u));
  /* 11151a49 call dword ptr [0x11186520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186520))), 0x11151a4fu);
  /* 11151a4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151a52 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151a54 call 0x11156250 */
  push32(0x11151a59u); f_11156250();
  /* 11151a59 mov esi, esp */
  ESI = (ESP);
  /* 11151a5b push 8 */
  push32((uint32_t)(0x8u));
  /* 11151a5d push 0x111834f0 */
  push32((uint32_t)(0x111834f0u));
  /* 11151a62 call dword ptr [0x11186520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186520))), 0x11151a68u);
  /* 11151a68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151a6b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151a6d call 0x11156250 */
  push32(0x11151a72u); f_11156250();
  /* 11151a72 mov esi, esp */
  ESI = (ESP);
  /* 11151a74 push 8 */
  push32((uint32_t)(0x8u));
  /* 11151a76 push 0x111834f8 */
  push32((uint32_t)(0x111834f8u));
  /* 11151a7b call dword ptr [0x11186520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186520))), 0x11151a81u);
  /* 11151a81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151a84 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151a86 call 0x11156250 */
  push32(0x11151a8bu); f_11156250();
  /* 11151a8b mov esi, esp */
  ESI = (ESP);
  /* 11151a8d push 0x1117e0b4 */
  push32((uint32_t)(0x1117e0b4u));
  /* 11151a92 push 0x11183648 */
  push32((uint32_t)(0x11183648u));
  /* 11151a97 call dword ptr [0x11186524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186524))), 0x11151a9du);
  /* 11151a9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151aa0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151aa2 call 0x11156250 */
  push32(0x11151aa7u); f_11156250();
  /* 11151aa7 mov esi, esp */
  ESI = (ESP);
  /* 11151aa9 push 0x1117e0a4 */
  push32((uint32_t)(0x1117e0a4u));
  /* 11151aae push 0x11183528 */
  push32((uint32_t)(0x11183528u));
  /* 11151ab3 call dword ptr [0x11186524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186524))), 0x11151ab9u);
  /* 11151ab9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151abc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151abe call 0x11156250 */
  push32(0x11151ac3u); f_11156250();
  /* 11151ac3 mov esi, esp */
  ESI = (ESP);
  /* 11151ac5 push 0x1117e094 */
  push32((uint32_t)(0x1117e094u));
  /* 11151aca push 0x11183538 */
  push32((uint32_t)(0x11183538u));
  /* 11151acf call dword ptr [0x11186524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186524))), 0x11151ad5u);
  /* 11151ad5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151ad8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151ada call 0x11156250 */
  push32(0x11151adfu); f_11156250();
  /* 11151adf mov esi, esp */
  ESI = (ESP);
  /* 11151ae1 push 0x1117e084 */
  push32((uint32_t)(0x1117e084u));
  /* 11151ae6 push 0x11183540 */
  push32((uint32_t)(0x11183540u));
  /* 11151aeb call dword ptr [0x11186524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186524))), 0x11151af1u);
  /* 11151af1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151af4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151af6 call 0x11156250 */
  push32(0x11151afbu); f_11156250();
  /* 11151afb mov esi, esp */
  ESI = (ESP);
  /* 11151afd push 0x1117e074 */
  push32((uint32_t)(0x1117e074u));
  /* 11151b02 push 0x11183530 */
  push32((uint32_t)(0x11183530u));
  /* 11151b07 call dword ptr [0x11186524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186524))), 0x11151b0du);
  /* 11151b0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151b10 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151b12 call 0x11156250 */
  push32(0x11151b17u); f_11156250();
  /* 11151b17 mov esi, esp */
  ESI = (ESP);
  /* 11151b19 push 0x1117e064 */
  push32((uint32_t)(0x1117e064u));
  /* 11151b1e push 0x11183518 */
  push32((uint32_t)(0x11183518u));
  /* 11151b23 call dword ptr [0x11186524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186524))), 0x11151b29u);
  /* 11151b29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151b2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151b2e call 0x11156250 */
  push32(0x11151b33u); f_11156250();
  /* 11151b33 mov esi, esp */
  ESI = (ESP);
  /* 11151b35 push 0x1117e05c */
  push32((uint32_t)(0x1117e05cu));
  /* 11151b3a push 0x11183640 */
  push32((uint32_t)(0x11183640u));
  /* 11151b3f call dword ptr [0x11186524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186524))), 0x11151b45u);
  /* 11151b45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151b48 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151b4a call 0x11156250 */
  push32(0x11151b4fu); f_11156250();
  /* 11151b4f mov esi, esp */
  ESI = (ESP);
  /* 11151b51 push 0x1117e050 */
  push32((uint32_t)(0x1117e050u));
  /* 11151b56 push 0x111833e0 */
  push32((uint32_t)(0x111833e0u));
  /* 11151b5b call dword ptr [0x11186524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186524))), 0x11151b61u);
  /* 11151b61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151b64 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151b66 call 0x11156250 */
  push32(0x11151b6bu); f_11156250();
  /* 11151b6b mov esi, esp */
  ESI = (ESP);
  /* 11151b6d push 0x1117e048 */
  push32((uint32_t)(0x1117e048u));
  /* 11151b72 push 0x111834a8 */
  push32((uint32_t)(0x111834a8u));
  /* 11151b77 call dword ptr [0x11186524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186524))), 0x11151b7du);
  /* 11151b7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151b80 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151b82 call 0x11156250 */
  push32(0x11151b87u); f_11156250();
  /* 11151b87 mov esi, esp */
  ESI = (ESP);
  /* 11151b89 push 0x11183438 */
  push32((uint32_t)(0x11183438u));
  /* 11151b8e call dword ptr [0x11186528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186528))), 0x11151b94u);
  /* 11151b94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151b97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151b99 call 0x11156250 */
  push32(0x11151b9eu); f_11156250();
  /* 11151b9e mov esi, esp */
  ESI = (ESP);
  /* 11151ba0 push 0x11183430 */
  push32((uint32_t)(0x11183430u));
  /* 11151ba5 call dword ptr [0x11186528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186528))), 0x11151babu);
  /* 11151bab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151bae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151bb0 call 0x11156250 */
  push32(0x11151bb5u); f_11156250();
  /* 11151bb5 mov esi, esp */
  ESI = (ESP);
  /* 11151bb7 push 0x11183448 */
  push32((uint32_t)(0x11183448u));
  /* 11151bbc call dword ptr [0x11186528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186528))), 0x11151bc2u);
  /* 11151bc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151bc5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151bc7 call 0x11156250 */
  push32(0x11151bccu); f_11156250();
  /* 11151bcc mov esi, esp */
  ESI = (ESP);
  /* 11151bce push 0x11183440 */
  push32((uint32_t)(0x11183440u));
  /* 11151bd3 call dword ptr [0x11186528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186528))), 0x11151bd9u);
  /* 11151bd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151bdc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151bde call 0x11156250 */
  push32(0x11151be3u); f_11156250();
  /* 11151be3 mov esi, esp */
  ESI = (ESP);
  /* 11151be5 push 0x11183410 */
  push32((uint32_t)(0x11183410u));
  /* 11151bea call dword ptr [0x11186528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186528))), 0x11151bf0u);
  /* 11151bf0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151bf3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151bf5 call 0x11156250 */
  push32(0x11151bfau); f_11156250();
  /* 11151bfa mov esi, esp */
  ESI = (ESP);
  /* 11151bfc push 0x11183408 */
  push32((uint32_t)(0x11183408u));
  /* 11151c01 call dword ptr [0x11186528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186528))), 0x11151c07u);
  /* 11151c07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151c0a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151c0c call 0x11156250 */
  push32(0x11151c11u); f_11156250();
  /* 11151c11 mov esi, esp */
  ESI = (ESP);
  /* 11151c13 push 0x11183420 */
  push32((uint32_t)(0x11183420u));
  /* 11151c18 call dword ptr [0x11186528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186528))), 0x11151c1eu);
  /* 11151c1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151c21 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151c23 call 0x11156250 */
  push32(0x11151c28u); f_11156250();
  /* 11151c28 mov esi, esp */
  ESI = (ESP);
  /* 11151c2a push 0x11183418 */
  push32((uint32_t)(0x11183418u));
  /* 11151c2f call dword ptr [0x11186528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186528))), 0x11151c35u);
  /* 11151c35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151c38 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151c3a call 0x11156250 */
  push32(0x11151c3fu); f_11156250();
  /* 11151c3f mov esi, esp */
  ESI = (ESP);
  /* 11151c41 push 0x11183428 */
  push32((uint32_t)(0x11183428u));
  /* 11151c46 call dword ptr [0x11186528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186528))), 0x11151c4cu);
  /* 11151c4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151c4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151c51 call 0x11156250 */
  push32(0x11151c56u); f_11156250();
  /* 11151c56 mov esi, esp */
  ESI = (ESP);
  /* 11151c58 push 0x11183638 */
  push32((uint32_t)(0x11183638u));
  /* 11151c5d call dword ptr [0x11186528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186528))), 0x11151c63u);
  /* 11151c63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151c66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151c68 call 0x11156250 */
  push32(0x11151c6du); f_11156250();
  /* 11151c6d mov esi, esp */
  ESI = (ESP);
  /* 11151c6f push 0x1117e040 */
  push32((uint32_t)(0x1117e040u));
  /* 11151c74 push 1 */
  push32((uint32_t)(0x1u));
  /* 11151c76 call dword ptr [0x1118652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118652c))), 0x11151c7cu);
  /* 11151c7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151c7f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151c81 call 0x11156250 */
  push32(0x11151c86u); f_11156250();
  /* 11151c86 mov esi, esp */
  ESI = (ESP);
  /* 11151c88 push 0x1117e034 */
  push32((uint32_t)(0x1117e034u));
  /* 11151c8d push 2 */
  push32((uint32_t)(0x2u));
  /* 11151c8f call dword ptr [0x1118652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118652c))), 0x11151c95u);
  /* 11151c95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151c98 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151c9a call 0x11156250 */
  push32(0x11151c9fu); f_11156250();
  /* 11151c9f mov esi, esp */
  ESI = (ESP);
  /* 11151ca1 push 0x1117e028 */
  push32((uint32_t)(0x1117e028u));
  /* 11151ca6 push 3 */
  push32((uint32_t)(0x3u));
  /* 11151ca8 call dword ptr [0x1118652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118652c))), 0x11151caeu);
  /* 11151cae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151cb1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151cb3 call 0x11156250 */
  push32(0x11151cb8u); f_11156250();
  /* 11151cb8 mov esi, esp */
  ESI = (ESP);
  /* 11151cba push 0x1117e028 */
  push32((uint32_t)(0x1117e028u));
  /* 11151cbf push 4 */
  push32((uint32_t)(0x4u));
  /* 11151cc1 call dword ptr [0x1118652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118652c))), 0x11151cc7u);
  /* 11151cc7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151cca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151ccc call 0x11156250 */
  push32(0x11151cd1u); f_11156250();
  /* 11151cd1 mov esi, esp */
  ESI = (ESP);
  /* 11151cd3 push 0x1117e01c */
  push32((uint32_t)(0x1117e01cu));
  /* 11151cd8 push 5 */
  push32((uint32_t)(0x5u));
  /* 11151cda call dword ptr [0x1118652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118652c))), 0x11151ce0u);
  /* 11151ce0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151ce3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151ce5 call 0x11156250 */
  push32(0x11151ceau); f_11156250();
  /* 11151cea mov esi, esp */
  ESI = (ESP);
  /* 11151cec push 3 */
  push32((uint32_t)(0x3u));
  /* 11151cee push 0 */
  push32((uint32_t)(0x0u));
  /* 11151cf0 call dword ptr [0x11186530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186530))), 0x11151cf6u);
  /* 11151cf6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151cf9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151cfb call 0x11156250 */
  push32(0x11151d00u); f_11156250();
  /* 11151d00 mov esi, esp */
  ESI = (ESP);
  /* 11151d02 push 3 */
  push32((uint32_t)(0x3u));
  /* 11151d04 push 1 */
  push32((uint32_t)(0x1u));
  /* 11151d06 call dword ptr [0x11186530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186530))), 0x11151d0cu);
  /* 11151d0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151d0f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151d11 call 0x11156250 */
  push32(0x11151d16u); f_11156250();
  /* 11151d16 mov esi, esp */
  ESI = (ESP);
  /* 11151d18 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11151d1a push 2 */
  push32((uint32_t)(0x2u));
  /* 11151d1c call dword ptr [0x11186530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186530))), 0x11151d22u);
  /* 11151d22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151d25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151d27 call 0x11156250 */
  push32(0x11151d2cu); f_11156250();
  /* 11151d2c mov esi, esp */
  ESI = (ESP);
  /* 11151d2e push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11151d30 push 3 */
  push32((uint32_t)(0x3u));
  /* 11151d32 call dword ptr [0x11186530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186530))), 0x11151d38u);
  /* 11151d38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151d3b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151d3d call 0x11156250 */
  push32(0x11151d42u); f_11156250();
  /* 11151d42 mov esi, esp */
  ESI = (ESP);
  /* 11151d44 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11151d46 push 4 */
  push32((uint32_t)(0x4u));
  /* 11151d48 call dword ptr [0x11186530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186530))), 0x11151d4eu);
  /* 11151d4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151d51 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151d53 call 0x11156250 */
  push32(0x11151d58u); f_11156250();
  /* 11151d58 mov esi, esp */
  ESI = (ESP);
  /* 11151d5a push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11151d5c push 5 */
  push32((uint32_t)(0x5u));
  /* 11151d5e call dword ptr [0x11186530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186530))), 0x11151d64u);
  /* 11151d64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151d67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151d69 call 0x11156250 */
  push32(0x11151d6eu); f_11156250();
  /* 11151d6e mov esi, esp */
  ESI = (ESP);
  /* 11151d70 push 0 */
  push32((uint32_t)(0x0u));
  /* 11151d72 push 0x11183720 */
  push32((uint32_t)(0x11183720u));
  /* 11151d77 push 0 */
  push32((uint32_t)(0x0u));
  /* 11151d79 call dword ptr [0x11186534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186534))), 0x11151d7fu);
  /* 11151d7f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151d82 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151d84 call 0x11156250 */
  push32(0x11151d89u); f_11156250();
  /* 11151d89 mov esi, esp */
  ESI = (ESP);
  /* 11151d8b push 0 */
  push32((uint32_t)(0x0u));
  /* 11151d8d push 0x11183608 */
  push32((uint32_t)(0x11183608u));
  /* 11151d92 push 0 */
  push32((uint32_t)(0x0u));
  /* 11151d94 call dword ptr [0x11186534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186534))), 0x11151d9au);
  /* 11151d9a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151d9d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151d9f call 0x11156250 */
  push32(0x11151da4u); f_11156250();
  /* 11151da4 mov esi, esp */
  ESI = (ESP);
  /* 11151da6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11151da8 push 0x111835b8 */
  push32((uint32_t)(0x111835b8u));
  /* 11151dad push 0 */
  push32((uint32_t)(0x0u));
  /* 11151daf call dword ptr [0x11186534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186534))), 0x11151db5u);
  /* 11151db5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151db8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151dba call 0x11156250 */
  push32(0x11151dbfu); f_11156250();
  /* 11151dbf mov esi, esp */
  ESI = (ESP);
  /* 11151dc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11151dc3 push 0x111835b0 */
  push32((uint32_t)(0x111835b0u));
  /* 11151dc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11151dca call dword ptr [0x11186534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186534))), 0x11151dd0u);
  /* 11151dd0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151dd3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151dd5 call 0x11156250 */
  push32(0x11151ddau); f_11156250();
  /* 11151dda mov esi, esp */
  ESI = (ESP);
  /* 11151ddc push 0 */
  push32((uint32_t)(0x0u));
  /* 11151dde push 0x11183510 */
  push32((uint32_t)(0x11183510u));
  /* 11151de3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11151de5 call dword ptr [0x11186534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186534))), 0x11151debu);
  /* 11151deb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151dee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151df0 call 0x11156250 */
  push32(0x11151df5u); f_11156250();
  /* 11151df5 mov esi, esp */
  ESI = (ESP);
  /* 11151df7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11151df9 push 0x111835f8 */
  push32((uint32_t)(0x111835f8u));
  /* 11151dfe push 0 */
  push32((uint32_t)(0x0u));
  /* 11151e00 call dword ptr [0x11186534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186534))), 0x11151e06u);
  /* 11151e06 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151e09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151e0b call 0x11156250 */
  push32(0x11151e10u); f_11156250();
  /* 11151e10 mov esi, esp */
  ESI = (ESP);
  /* 11151e12 push 0 */
  push32((uint32_t)(0x0u));
  /* 11151e14 push 0x11183600 */
  push32((uint32_t)(0x11183600u));
  /* 11151e19 push 0 */
  push32((uint32_t)(0x0u));
  /* 11151e1b call dword ptr [0x11186534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186534))), 0x11151e21u);
  /* 11151e21 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151e24 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151e26 call 0x11156250 */
  push32(0x11151e2bu); f_11156250();
  /* 11151e2b mov esi, esp */
  ESI = (ESP);
  /* 11151e2d push 0 */
  push32((uint32_t)(0x0u));
  /* 11151e2f push 0x111835c8 */
  push32((uint32_t)(0x111835c8u));
  /* 11151e34 push 0 */
  push32((uint32_t)(0x0u));
  /* 11151e36 call dword ptr [0x11186534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186534))), 0x11151e3cu);
  /* 11151e3c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151e3f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151e41 call 0x11156250 */
  push32(0x11151e46u); f_11156250();
  /* 11151e46 mov esi, esp */
  ESI = (ESP);
  /* 11151e48 push 0 */
  push32((uint32_t)(0x0u));
  /* 11151e4a push 0x11183650 */
  push32((uint32_t)(0x11183650u));
  /* 11151e4f push 0 */
  push32((uint32_t)(0x0u));
  /* 11151e51 call dword ptr [0x11186534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186534))), 0x11151e57u);
  /* 11151e57 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151e5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151e5c call 0x11156250 */
  push32(0x11151e61u); f_11156250();
  /* 11151e61 mov esi, esp */
  ESI = (ESP);
  /* 11151e63 push 0 */
  push32((uint32_t)(0x0u));
  /* 11151e65 push 0x111834c8 */
  push32((uint32_t)(0x111834c8u));
  /* 11151e6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11151e6c call dword ptr [0x11186534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186534))), 0x11151e72u);
  /* 11151e72 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151e75 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151e77 call 0x11156250 */
  push32(0x11151e7cu); f_11156250();
  /* 11151e7c mov esi, esp */
  ESI = (ESP);
  /* 11151e7e push 0 */
  push32((uint32_t)(0x0u));
  /* 11151e80 push 0x11183450 */
  push32((uint32_t)(0x11183450u));
  /* 11151e85 push 0 */
  push32((uint32_t)(0x0u));
  /* 11151e87 call dword ptr [0x11186534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186534))), 0x11151e8du);
  /* 11151e8d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151e90 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151e92 call 0x11156250 */
  push32(0x11151e97u); f_11156250();
  /* 11151e97 mov esi, esp */
  ESI = (ESP);
  /* 11151e99 push 0 */
  push32((uint32_t)(0x0u));
  /* 11151e9b push 0x11183400 */
  push32((uint32_t)(0x11183400u));
  /* 11151ea0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11151ea2 call dword ptr [0x11186534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186534))), 0x11151ea8u);
  /* 11151ea8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151eab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151ead call 0x11156250 */
  push32(0x11151eb2u); f_11156250();
  /* 11151eb2 mov esi, esp */
  ESI = (ESP);
  /* 11151eb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11151eb6 push 0x11183690 */
  push32((uint32_t)(0x11183690u));
  /* 11151ebb push 0 */
  push32((uint32_t)(0x0u));
  /* 11151ebd call dword ptr [0x11186534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186534))), 0x11151ec3u);
  /* 11151ec3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151ec6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151ec8 call 0x11156250 */
  push32(0x11151ecdu); f_11156250();
  /* 11151ecd mov esi, esp */
  ESI = (ESP);
  /* 11151ecf push 0 */
  push32((uint32_t)(0x0u));
  /* 11151ed1 push 0x11183460 */
  push32((uint32_t)(0x11183460u));
  /* 11151ed6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11151ed8 call dword ptr [0x11186534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186534))), 0x11151edeu);
  /* 11151ede add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151ee1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151ee3 call 0x11156250 */
  push32(0x11151ee8u); f_11156250();
  /* 11151ee8 mov esi, esp */
  ESI = (ESP);
  /* 11151eea push 0 */
  push32((uint32_t)(0x0u));
  /* 11151eec push 0x11183568 */
  push32((uint32_t)(0x11183568u));
  /* 11151ef1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11151ef3 call dword ptr [0x11186534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186534))), 0x11151ef9u);
  /* 11151ef9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151efc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151efe call 0x11156250 */
  push32(0x11151f03u); f_11156250();
  /* 11151f03 mov esi, esp */
  ESI = (ESP);
  /* 11151f05 push 0 */
  push32((uint32_t)(0x0u));
  /* 11151f07 push 0x111836b0 */
  push32((uint32_t)(0x111836b0u));
  /* 11151f0c push 0 */
  push32((uint32_t)(0x0u));
  /* 11151f0e call dword ptr [0x11186534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186534))), 0x11151f14u);
  /* 11151f14 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151f17 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151f19 call 0x11156250 */
  push32(0x11151f1eu); f_11156250();
  /* 11151f1e mov esi, esp */
  ESI = (ESP);
  /* 11151f20 push 0 */
  push32((uint32_t)(0x0u));
  /* 11151f22 push 0x11183508 */
  push32((uint32_t)(0x11183508u));
  /* 11151f27 push 0 */
  push32((uint32_t)(0x0u));
  /* 11151f29 call dword ptr [0x11186534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186534))), 0x11151f2fu);
  /* 11151f2f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151f32 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151f34 call 0x11156250 */
  push32(0x11151f39u); f_11156250();
  /* 11151f39 pop edi */
  EDI = (pop32());
  /* 11151f3a pop esi */
  ESI = (pop32());
  /* 11151f3b pop ebx */
  EBX = (pop32());
  /* 11151f3c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11151f3f cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11151f41 call 0x11156250 */
  push32(0x11151f46u); f_11156250();
  /* 11151f46 mov esp, ebp */
  ESP = (EBP);
  /* 11151f48 pop ebp */
  EBP = (pop32());
  /* 11151f49 ret  */
  ESPCHK(0x11151030u, _esp0);
  ESP += 4; return;
}

/* FUN_10002310 @ 0x11152310 (67 bytes, 26 insns) */
void f_11152310(void) {
  FTRACE(0x11152310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11152310 push ebp */
  push32((uint32_t)(EBP));
  /* 11152311 mov ebp, esp */
  EBP = (ESP);
  /* 11152313 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11152316 push ebx */
  push32((uint32_t)(EBX));
  /* 11152317 push esi */
  push32((uint32_t)(ESI));
  /* 11152318 push edi */
  push32((uint32_t)(EDI));
  /* 11152319 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1115231c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11152321 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11152326 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11152328 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115232b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1115232e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152332 je 0x11152336 */
  if (C.zf) goto L_11152336;
  /* 11152334 jmp 0x1115233b */
  goto L_1115233b;
L_11152336:;
  /* 11152336 call 0x11151005 */
  push32(0x1115233bu); f_11151005();
L_1115233b:;
  /* 1115233b mov eax, 1 */
  EAX = (0x1u);
  /* 11152340 pop edi */
  EDI = (pop32());
  /* 11152341 pop esi */
  ESI = (pop32());
  /* 11152342 pop ebx */
  EBX = (pop32());
  /* 11152343 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152346 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152348 call 0x11156250 */
  push32(0x1115234du); f_11156250();
  /* 1115234d mov esp, ebp */
  ESP = (EBP);
  /* 1115234f pop ebp */
  EBP = (pop32());
  /* 11152350 ret 0xc */
  ESPCHK(0x11152310u, _esp0);
  ESP += 16; return;
}

/* FUN_10002370 @ 0x11152370 (12543 bytes, 3601 insns) [5 switch table(s)] */
void f_11152370(void) {
  FTRACE(0x11152370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11152370 push ebp */
  push32((uint32_t)(EBP));
  /* 11152371 mov ebp, esp */
  EBP = (ESP);
  /* 11152373 sub esp, 0x58 */
  { uint32_t _a=(ESP),_b=(0x58u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11152376 push ebx */
  push32((uint32_t)(EBX));
  /* 11152377 push esi */
  push32((uint32_t)(ESI));
  /* 11152378 push edi */
  push32((uint32_t)(EDI));
  /* 11152379 lea edi, [ebp - 0x58] */
  EDI = ((uint32_t)(EBP + -0x58));
  /* 1115237c mov ecx, 0x16 */
  ECX = (0x16u);
  /* 11152381 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11152386 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11152388 mov esi, esp */
  ESI = (ESP);
  /* 1115238a push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1115238c call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11152392u);
  /* 11152392 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152395 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152397 call 0x11156250 */
  push32(0x1115239cu); f_11156250();
  /* 1115239c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111523a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111523a3 je 0x11152cb9 */
  if (C.zf) goto L_11152cb9;
  /* 111523a9 mov esi, esp */
  ESI = (ESP);
  /* 111523ab push 0 */
  push32((uint32_t)(0x0u));
  /* 111523ad push 0x63 */
  push32((uint32_t)(0x63u));
  /* 111523af call dword ptr [0x1118646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118646c))), 0x111523b5u);
  /* 111523b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111523b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111523ba call 0x11156250 */
  push32(0x111523bfu); f_11156250();
  /* 111523bf mov esi, esp */
  ESI = (ESP);
  /* 111523c1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 111523c3 call dword ptr [0x11186470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186470))), 0x111523c9u);
  /* 111523c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111523cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111523ce call 0x11156250 */
  push32(0x111523d3u); f_11156250();
  /* 111523d3 mov esi, esp */
  ESI = (ESP);
  /* 111523d5 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 111523d7 call dword ptr [0x11186474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186474))), 0x111523ddu);
  /* 111523dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111523e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111523e2 call 0x11156250 */
  push32(0x111523e7u); f_11156250();
  /* 111523e7 mov esi, esp */
  ESI = (ESP);
  /* 111523e9 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 111523eb call dword ptr [0x11186474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186474))), 0x111523f1u);
  /* 111523f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111523f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111523f6 call 0x11156250 */
  push32(0x111523fbu); f_11156250();
  /* 111523fb mov esi, esp */
  ESI = (ESP);
  /* 111523fd push 0x45 */
  push32((uint32_t)(0x45u));
  /* 111523ff call dword ptr [0x11186474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186474))), 0x11152405u);
  /* 11152405 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152408 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115240a call 0x11156250 */
  push32(0x1115240fu); f_11156250();
  /* 1115240f mov esi, esp */
  ESI = (ESP);
  /* 11152411 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11152413 call dword ptr [0x11186474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186474))), 0x11152419u);
  /* 11152419 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115241c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115241e call 0x11156250 */
  push32(0x11152423u); f_11156250();
  /* 11152423 mov esi, esp */
  ESI = (ESP);
  /* 11152425 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11152427 call dword ptr [0x11186474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186474))), 0x1115242du);
  /* 1115242d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152430 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152432 call 0x11156250 */
  push32(0x11152437u); f_11156250();
  /* 11152437 mov esi, esp */
  ESI = (ESP);
  /* 11152439 push 0x53 */
  push32((uint32_t)(0x53u));
  /* 1115243b call dword ptr [0x11186474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186474))), 0x11152441u);
  /* 11152441 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152444 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152446 call 0x11156250 */
  push32(0x1115244bu); f_11156250();
  /* 1115244b mov esi, esp */
  ESI = (ESP);
  /* 1115244d push 0x54 */
  push32((uint32_t)(0x54u));
  /* 1115244f call dword ptr [0x11186474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186474))), 0x11152455u);
  /* 11152455 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152458 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115245a call 0x11156250 */
  push32(0x1115245fu); f_11156250();
  /* 1115245f mov esi, esp */
  ESI = (ESP);
  /* 11152461 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11152463 call dword ptr [0x11186474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186474))), 0x11152469u);
  /* 11152469 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115246c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115246e call 0x11156250 */
  push32(0x11152473u); f_11156250();
  /* 11152473 mov esi, esp */
  ESI = (ESP);
  /* 11152475 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11152477 call dword ptr [0x11186474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186474))), 0x1115247du);
  /* 1115247d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152480 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152482 call 0x11156250 */
  push32(0x11152487u); f_11156250();
  /* 11152487 mov esi, esp */
  ESI = (ESP);
  /* 11152489 push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1115248b call dword ptr [0x11186474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186474))), 0x11152491u);
  /* 11152491 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152494 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152496 call 0x11156250 */
  push32(0x1115249bu); f_11156250();
  /* 1115249b mov esi, esp */
  ESI = (ESP);
  /* 1115249d push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1115249f call dword ptr [0x11186474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186474))), 0x111524a5u);
  /* 111524a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111524a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111524aa call 0x11156250 */
  push32(0x111524afu); f_11156250();
  /* 111524af mov esi, esp */
  ESI = (ESP);
  /* 111524b1 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 111524b3 call dword ptr [0x11186474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186474))), 0x111524b9u);
  /* 111524b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111524bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111524be call 0x11156250 */
  push32(0x111524c3u); f_11156250();
  /* 111524c3 mov esi, esp */
  ESI = (ESP);
  /* 111524c5 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 111524c7 call dword ptr [0x11186474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186474))), 0x111524cdu);
  /* 111524cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111524d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111524d2 call 0x11156250 */
  push32(0x111524d7u); f_11156250();
  /* 111524d7 mov esi, esp */
  ESI = (ESP);
  /* 111524d9 push 0x111834e0 */
  push32((uint32_t)(0x111834e0u));
  /* 111524de call dword ptr [0x11186478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186478))), 0x111524e4u);
  /* 111524e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111524e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111524e9 call 0x11156250 */
  push32(0x111524eeu); f_11156250();
  /* 111524ee mov esi, esp */
  ESI = (ESP);
  /* 111524f0 push 0x111834d0 */
  push32((uint32_t)(0x111834d0u));
  /* 111524f5 call dword ptr [0x1118647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118647c))), 0x111524fbu);
  /* 111524fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111524fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152500 call 0x11156250 */
  push32(0x11152505u); f_11156250();
  /* 11152505 mov esi, esp */
  ESI = (ESP);
  /* 11152507 push 0x111834d8 */
  push32((uint32_t)(0x111834d8u));
  /* 1115250c call dword ptr [0x11186480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186480))), 0x11152512u);
  /* 11152512 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152515 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152517 call 0x11156250 */
  push32(0x1115251cu); f_11156250();
  /* 1115251c mov esi, esp */
  ESI = (ESP);
  /* 1115251e push 0 */
  push32((uint32_t)(0x0u));
  /* 11152520 push 0x11183698 */
  push32((uint32_t)(0x11183698u));
  /* 11152525 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x1115252bu);
  /* 1115252b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115252e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152530 call 0x11156250 */
  push32(0x11152535u); f_11156250();
  /* 11152535 mov esi, esp */
  ESI = (ESP);
  /* 11152537 push 1 */
  push32((uint32_t)(0x1u));
  /* 11152539 push 1 */
  push32((uint32_t)(0x1u));
  /* 1115253b call dword ptr [0x11186488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186488))), 0x11152541u);
  /* 11152541 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152544 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152546 call 0x11156250 */
  push32(0x1115254bu); f_11156250();
  /* 1115254b mov esi, esp */
  ESI = (ESP);
  /* 1115254d push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11152552 push 0xa */
  push32((uint32_t)(0xau));
  /* 11152554 call dword ptr [0x1118648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118648c))), 0x1115255au);
  /* 1115255a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115255d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115255f call 0x11156250 */
  push32(0x11152564u); f_11156250();
  /* 11152564 mov esi, esp */
  ESI = (ESP);
  /* 11152566 push 0 */
  push32((uint32_t)(0x0u));
  /* 11152568 call dword ptr [0x11186490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186490))), 0x1115256eu);
  /* 1115256e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152571 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152573 call 0x11156250 */
  push32(0x11152578u); f_11156250();
  /* 11152578 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1115257b cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115257f ja 0x11152a92 */
  if ((!C.cf&&!C.zf)) goto L_11152a92;
  /* 11152585 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11152588 jmp dword ptr [eax*4 + 0x1115546f] */
  switch (EAX) {
    case 0: goto L_1115258f;
    case 1: goto L_11152771;
    case 2: goto L_111528d6;
    case 3: goto L_111529f0;
    case 4: goto L_111532e2;
    case 5: goto L_1115333b;
    case 6: goto L_11153394;
    case 7: goto L_111533ea;
    case 8: goto L_11153708;
    case 9: goto L_11153767;
    case 10: goto L_111537c6;
    case 11: goto L_11153822;
    case 12: goto L_111541ba;
    case 13: goto L_111542c6;
    case 14: goto L_111543d2;
    case 15: goto L_111544de;
    case 16: goto L_11154d3b;
    case 17: goto L_11154d6a;
    case 18: goto L_11154d96;
    case 19: goto L_11154dc2;
    default: x86_unimpl("switch@0x11152588 out of table"); return;
  }
L_1115258f:;
  /* 1115258f mov esi, esp */
  ESI = (ESP);
  /* 11152591 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11152596 push 3 */
  push32((uint32_t)(0x3u));
  /* 11152598 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115259a call dword ptr [0x11186494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186494))), 0x111525a0u);
  /* 111525a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111525a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111525a5 call 0x11156250 */
  push32(0x111525aau); f_11156250();
  /* 111525aa mov esi, esp */
  ESI = (ESP);
  /* 111525ac push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 111525b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 111525b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 111525b5 call dword ptr [0x11186494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186494))), 0x111525bbu);
  /* 111525bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111525be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111525c0 call 0x11156250 */
  push32(0x111525c5u); f_11156250();
  /* 111525c5 mov esi, esp */
  ESI = (ESP);
  /* 111525c7 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 111525cc push 2 */
  push32((uint32_t)(0x2u));
  /* 111525ce push 0 */
  push32((uint32_t)(0x0u));
  /* 111525d0 call dword ptr [0x11186494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186494))), 0x111525d6u);
  /* 111525d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111525d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111525db call 0x11156250 */
  push32(0x111525e0u); f_11156250();
  /* 111525e0 mov esi, esp */
  ESI = (ESP);
  /* 111525e2 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 111525e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 111525e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 111525eb call dword ptr [0x11186494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186494))), 0x111525f1u);
  /* 111525f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111525f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111525f6 call 0x11156250 */
  push32(0x111525fbu); f_11156250();
  /* 111525fb mov esi, esp */
  ESI = (ESP);
  /* 111525fd push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11152602 push 5 */
  push32((uint32_t)(0x5u));
  /* 11152604 push 0 */
  push32((uint32_t)(0x0u));
  /* 11152606 call dword ptr [0x11186494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186494))), 0x1115260cu);
  /* 1115260c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115260f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152611 call 0x11156250 */
  push32(0x11152616u); f_11156250();
  /* 11152616 mov esi, esp */
  ESI = (ESP);
  /* 11152618 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 1115261d push 4 */
  push32((uint32_t)(0x4u));
  /* 1115261f push 0 */
  push32((uint32_t)(0x0u));
  /* 11152621 call dword ptr [0x11186494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186494))), 0x11152627u);
  /* 11152627 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115262a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115262c call 0x11156250 */
  push32(0x11152631u); f_11156250();
  /* 11152631 mov esi, esp */
  ESI = (ESP);
  /* 11152633 push 0 */
  push32((uint32_t)(0x0u));
  /* 11152635 push 0x11183570 */
  push32((uint32_t)(0x11183570u));
  /* 1115263a call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x11152640u);
  /* 11152640 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152643 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152645 call 0x11156250 */
  push32(0x1115264au); f_11156250();
  /* 1115264a mov esi, esp */
  ESI = (ESP);
  /* 1115264c push 1 */
  push32((uint32_t)(0x1u));
  /* 1115264e push 0x11183578 */
  push32((uint32_t)(0x11183578u));
  /* 11152653 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x11152659u);
  /* 11152659 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115265c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115265e call 0x11156250 */
  push32(0x11152663u); f_11156250();
  /* 11152663 mov esi, esp */
  ESI = (ESP);
  /* 11152665 push 1 */
  push32((uint32_t)(0x1u));
  /* 11152667 push 0x11183580 */
  push32((uint32_t)(0x11183580u));
  /* 1115266c call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x11152672u);
  /* 11152672 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152675 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152677 call 0x11156250 */
  push32(0x1115267cu); f_11156250();
  /* 1115267c mov esi, esp */
  ESI = (ESP);
  /* 1115267e push 1 */
  push32((uint32_t)(0x1u));
  /* 11152680 push 0x11183588 */
  push32((uint32_t)(0x11183588u));
  /* 11152685 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x1115268bu);
  /* 1115268b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115268e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152690 call 0x11156250 */
  push32(0x11152695u); f_11156250();
  /* 11152695 mov esi, esp */
  ESI = (ESP);
  /* 11152697 push 1 */
  push32((uint32_t)(0x1u));
  /* 11152699 push 0x11183590 */
  push32((uint32_t)(0x11183590u));
  /* 1115269e call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x111526a4u);
  /* 111526a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111526a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111526a9 call 0x11156250 */
  push32(0x111526aeu); f_11156250();
  /* 111526ae mov esi, esp */
  ESI = (ESP);
  /* 111526b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 111526b2 push 0x11183598 */
  push32((uint32_t)(0x11183598u));
  /* 111526b7 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x111526bdu);
  /* 111526bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111526c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111526c2 call 0x11156250 */
  push32(0x111526c7u); f_11156250();
  /* 111526c7 mov esi, esp */
  ESI = (ESP);
  /* 111526c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 111526cb push 0x111835a0 */
  push32((uint32_t)(0x111835a0u));
  /* 111526d0 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x111526d6u);
  /* 111526d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111526d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111526db call 0x11156250 */
  push32(0x111526e0u); f_11156250();
  /* 111526e0 mov esi, esp */
  ESI = (ESP);
  /* 111526e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 111526e4 push 0x111835a8 */
  push32((uint32_t)(0x111835a8u));
  /* 111526e9 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x111526efu);
  /* 111526ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111526f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111526f4 call 0x11156250 */
  push32(0x111526f9u); f_11156250();
  /* 111526f9 mov esi, esp */
  ESI = (ESP);
  /* 111526fb push 5 */
  push32((uint32_t)(0x5u));
  /* 111526fd call dword ptr [0x11186498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186498))), 0x11152703u);
  /* 11152703 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152706 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152708 call 0x11156250 */
  push32(0x1115270du); f_11156250();
  /* 1115270d mov esi, esp */
  ESI = (ESP);
  /* 1115270f push 0 */
  push32((uint32_t)(0x0u));
  /* 11152711 push 0x11183478 */
  push32((uint32_t)(0x11183478u));
  /* 11152716 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x1115271cu);
  /* 1115271c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115271f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152721 call 0x11156250 */
  push32(0x11152726u); f_11156250();
  /* 11152726 mov esi, esp */
  ESI = (ESP);
  /* 11152728 push 1 */
  push32((uint32_t)(0x1u));
  /* 1115272a push 0x111836a8 */
  push32((uint32_t)(0x111836a8u));
  /* 1115272f call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x11152735u);
  /* 11152735 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152738 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115273a call 0x11156250 */
  push32(0x1115273fu); f_11156250();
  /* 1115273f mov esi, esp */
  ESI = (ESP);
  /* 11152741 push 1 */
  push32((uint32_t)(0x1u));
  /* 11152743 push 0x11183658 */
  push32((uint32_t)(0x11183658u));
  /* 11152748 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x1115274eu);
  /* 1115274e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152751 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152753 call 0x11156250 */
  push32(0x11152758u); f_11156250();
  /* 11152758 mov esi, esp */
  ESI = (ESP);
  /* 1115275a push 4 */
  push32((uint32_t)(0x4u));
  /* 1115275c call dword ptr [0x11186498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186498))), 0x11152762u);
  /* 11152762 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152765 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152767 call 0x11156250 */
  push32(0x1115276cu); f_11156250();
  /* 1115276c jmp 0x11152a92 */
  goto L_11152a92;
L_11152771:;
  /* 11152771 mov esi, esp */
  ESI = (ESP);
  /* 11152773 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11152778 push 3 */
  push32((uint32_t)(0x3u));
  /* 1115277a push 0 */
  push32((uint32_t)(0x0u));
  /* 1115277c call dword ptr [0x11186494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186494))), 0x11152782u);
  /* 11152782 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152785 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152787 call 0x11156250 */
  push32(0x1115278cu); f_11156250();
  /* 1115278c mov esi, esp */
  ESI = (ESP);
  /* 1115278e push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11152793 push 0 */
  push32((uint32_t)(0x0u));
  /* 11152795 push 0 */
  push32((uint32_t)(0x0u));
  /* 11152797 call dword ptr [0x11186494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186494))), 0x1115279du);
  /* 1115279d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111527a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111527a2 call 0x11156250 */
  push32(0x111527a7u); f_11156250();
  /* 111527a7 mov esi, esp */
  ESI = (ESP);
  /* 111527a9 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 111527ae push 2 */
  push32((uint32_t)(0x2u));
  /* 111527b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 111527b2 call dword ptr [0x11186494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186494))), 0x111527b8u);
  /* 111527b8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111527bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111527bd call 0x11156250 */
  push32(0x111527c2u); f_11156250();
  /* 111527c2 mov esi, esp */
  ESI = (ESP);
  /* 111527c4 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 111527c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 111527cb push 0 */
  push32((uint32_t)(0x0u));
  /* 111527cd call dword ptr [0x11186494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186494))), 0x111527d3u);
  /* 111527d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111527d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111527d8 call 0x11156250 */
  push32(0x111527ddu); f_11156250();
  /* 111527dd mov esi, esp */
  ESI = (ESP);
  /* 111527df push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 111527e4 push 5 */
  push32((uint32_t)(0x5u));
  /* 111527e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 111527e8 call dword ptr [0x11186494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186494))), 0x111527eeu);
  /* 111527ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111527f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111527f3 call 0x11156250 */
  push32(0x111527f8u); f_11156250();
  /* 111527f8 mov esi, esp */
  ESI = (ESP);
  /* 111527fa push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 111527ff push 4 */
  push32((uint32_t)(0x4u));
  /* 11152801 push 0 */
  push32((uint32_t)(0x0u));
  /* 11152803 call dword ptr [0x11186494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186494))), 0x11152809u);
  /* 11152809 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115280c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115280e call 0x11156250 */
  push32(0x11152813u); f_11156250();
  /* 11152813 mov esi, esp */
  ESI = (ESP);
  /* 11152815 push 0 */
  push32((uint32_t)(0x0u));
  /* 11152817 push 0x11183570 */
  push32((uint32_t)(0x11183570u));
  /* 1115281c call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x11152822u);
  /* 11152822 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152825 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152827 call 0x11156250 */
  push32(0x1115282cu); f_11156250();
  /* 1115282c mov esi, esp */
  ESI = (ESP);
  /* 1115282e push 1 */
  push32((uint32_t)(0x1u));
  /* 11152830 push 0x11183580 */
  push32((uint32_t)(0x11183580u));
  /* 11152835 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x1115283bu);
  /* 1115283b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115283e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152840 call 0x11156250 */
  push32(0x11152845u); f_11156250();
  /* 11152845 mov esi, esp */
  ESI = (ESP);
  /* 11152847 push 1 */
  push32((uint32_t)(0x1u));
  /* 11152849 push 0x11183590 */
  push32((uint32_t)(0x11183590u));
  /* 1115284e call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x11152854u);
  /* 11152854 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152857 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152859 call 0x11156250 */
  push32(0x1115285eu); f_11156250();
  /* 1115285e mov esi, esp */
  ESI = (ESP);
  /* 11152860 push 1 */
  push32((uint32_t)(0x1u));
  /* 11152862 push 0x11183598 */
  push32((uint32_t)(0x11183598u));
  /* 11152867 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x1115286du);
  /* 1115286d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152870 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152872 call 0x11156250 */
  push32(0x11152877u); f_11156250();
  /* 11152877 mov esi, esp */
  ESI = (ESP);
  /* 11152879 push 5 */
  push32((uint32_t)(0x5u));
  /* 1115287b call dword ptr [0x11186498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186498))), 0x11152881u);
  /* 11152881 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152884 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152886 call 0x11156250 */
  push32(0x1115288bu); f_11156250();
  /* 1115288b mov esi, esp */
  ESI = (ESP);
  /* 1115288d push 0 */
  push32((uint32_t)(0x0u));
  /* 1115288f push 0x11183478 */
  push32((uint32_t)(0x11183478u));
  /* 11152894 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x1115289au);
  /* 1115289a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115289d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115289f call 0x11156250 */
  push32(0x111528a4u); f_11156250();
  /* 111528a4 mov esi, esp */
  ESI = (ESP);
  /* 111528a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 111528a8 push 0x11183658 */
  push32((uint32_t)(0x11183658u));
  /* 111528ad call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x111528b3u);
  /* 111528b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111528b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111528b8 call 0x11156250 */
  push32(0x111528bdu); f_11156250();
  /* 111528bd mov esi, esp */
  ESI = (ESP);
  /* 111528bf push 4 */
  push32((uint32_t)(0x4u));
  /* 111528c1 call dword ptr [0x11186498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186498))), 0x111528c7u);
  /* 111528c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111528ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111528cc call 0x11156250 */
  push32(0x111528d1u); f_11156250();
  /* 111528d1 jmp 0x11152a92 */
  goto L_11152a92;
L_111528d6:;
  /* 111528d6 mov esi, esp */
  ESI = (ESP);
  /* 111528d8 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111528dd push 3 */
  push32((uint32_t)(0x3u));
  /* 111528df push 0 */
  push32((uint32_t)(0x0u));
  /* 111528e1 call dword ptr [0x11186494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186494))), 0x111528e7u);
  /* 111528e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111528ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111528ec call 0x11156250 */
  push32(0x111528f1u); f_11156250();
  /* 111528f1 mov esi, esp */
  ESI = (ESP);
  /* 111528f3 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111528f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 111528fa push 0 */
  push32((uint32_t)(0x0u));
  /* 111528fc call dword ptr [0x11186494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186494))), 0x11152902u);
  /* 11152902 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152905 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152907 call 0x11156250 */
  push32(0x1115290cu); f_11156250();
  /* 1115290c mov esi, esp */
  ESI = (ESP);
  /* 1115290e push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11152913 push 2 */
  push32((uint32_t)(0x2u));
  /* 11152915 push 0 */
  push32((uint32_t)(0x0u));
  /* 11152917 call dword ptr [0x11186494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186494))), 0x1115291du);
  /* 1115291d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152920 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152922 call 0x11156250 */
  push32(0x11152927u); f_11156250();
  /* 11152927 mov esi, esp */
  ESI = (ESP);
  /* 11152929 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1115292e push 1 */
  push32((uint32_t)(0x1u));
  /* 11152930 push 0 */
  push32((uint32_t)(0x0u));
  /* 11152932 call dword ptr [0x11186494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186494))), 0x11152938u);
  /* 11152938 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115293b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115293d call 0x11156250 */
  push32(0x11152942u); f_11156250();
  /* 11152942 mov esi, esp */
  ESI = (ESP);
  /* 11152944 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11152949 push 5 */
  push32((uint32_t)(0x5u));
  /* 1115294b push 0 */
  push32((uint32_t)(0x0u));
  /* 1115294d call dword ptr [0x11186494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186494))), 0x11152953u);
  /* 11152953 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152956 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152958 call 0x11156250 */
  push32(0x1115295du); f_11156250();
  /* 1115295d mov esi, esp */
  ESI = (ESP);
  /* 1115295f push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11152964 push 4 */
  push32((uint32_t)(0x4u));
  /* 11152966 push 0 */
  push32((uint32_t)(0x0u));
  /* 11152968 call dword ptr [0x11186494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186494))), 0x1115296eu);
  /* 1115296e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152971 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152973 call 0x11156250 */
  push32(0x11152978u); f_11156250();
  /* 11152978 mov esi, esp */
  ESI = (ESP);
  /* 1115297a push 0 */
  push32((uint32_t)(0x0u));
  /* 1115297c push 0x11183578 */
  push32((uint32_t)(0x11183578u));
  /* 11152981 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x11152987u);
  /* 11152987 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115298a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115298c call 0x11156250 */
  push32(0x11152991u); f_11156250();
  /* 11152991 mov esi, esp */
  ESI = (ESP);
  /* 11152993 push 1 */
  push32((uint32_t)(0x1u));
  /* 11152995 push 0x11183590 */
  push32((uint32_t)(0x11183590u));
  /* 1115299a call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x111529a0u);
  /* 111529a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111529a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111529a5 call 0x11156250 */
  push32(0x111529aau); f_11156250();
  /* 111529aa mov esi, esp */
  ESI = (ESP);
  /* 111529ac push 5 */
  push32((uint32_t)(0x5u));
  /* 111529ae call dword ptr [0x11186498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186498))), 0x111529b4u);
  /* 111529b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111529b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111529b9 call 0x11156250 */
  push32(0x111529beu); f_11156250();
  /* 111529be mov esi, esp */
  ESI = (ESP);
  /* 111529c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 111529c2 push 0x11183658 */
  push32((uint32_t)(0x11183658u));
  /* 111529c7 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x111529cdu);
  /* 111529cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111529d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111529d2 call 0x11156250 */
  push32(0x111529d7u); f_11156250();
  /* 111529d7 mov esi, esp */
  ESI = (ESP);
  /* 111529d9 push 4 */
  push32((uint32_t)(0x4u));
  /* 111529db call dword ptr [0x11186498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186498))), 0x111529e1u);
  /* 111529e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111529e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111529e6 call 0x11156250 */
  push32(0x111529ebu); f_11156250();
  /* 111529eb jmp 0x11152a92 */
  goto L_11152a92;
L_111529f0:;
  /* 111529f0 mov esi, esp */
  ESI = (ESP);
  /* 111529f2 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 111529f7 push 3 */
  push32((uint32_t)(0x3u));
  /* 111529f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 111529fb call dword ptr [0x11186494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186494))), 0x11152a01u);
  /* 11152a01 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152a04 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152a06 call 0x11156250 */
  push32(0x11152a0bu); f_11156250();
  /* 11152a0b mov esi, esp */
  ESI = (ESP);
  /* 11152a0d push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11152a12 push 0 */
  push32((uint32_t)(0x0u));
  /* 11152a14 push 0 */
  push32((uint32_t)(0x0u));
  /* 11152a16 call dword ptr [0x11186494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186494))), 0x11152a1cu);
  /* 11152a1c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152a1f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152a21 call 0x11156250 */
  push32(0x11152a26u); f_11156250();
  /* 11152a26 mov esi, esp */
  ESI = (ESP);
  /* 11152a28 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11152a2d push 2 */
  push32((uint32_t)(0x2u));
  /* 11152a2f push 0 */
  push32((uint32_t)(0x0u));
  /* 11152a31 call dword ptr [0x11186494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186494))), 0x11152a37u);
  /* 11152a37 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152a3a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152a3c call 0x11156250 */
  push32(0x11152a41u); f_11156250();
  /* 11152a41 mov esi, esp */
  ESI = (ESP);
  /* 11152a43 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11152a48 push 1 */
  push32((uint32_t)(0x1u));
  /* 11152a4a push 0 */
  push32((uint32_t)(0x0u));
  /* 11152a4c call dword ptr [0x11186494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186494))), 0x11152a52u);
  /* 11152a52 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152a55 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152a57 call 0x11156250 */
  push32(0x11152a5cu); f_11156250();
  /* 11152a5c mov esi, esp */
  ESI = (ESP);
  /* 11152a5e push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11152a63 push 5 */
  push32((uint32_t)(0x5u));
  /* 11152a65 push 0 */
  push32((uint32_t)(0x0u));
  /* 11152a67 call dword ptr [0x11186494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186494))), 0x11152a6du);
  /* 11152a6d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152a70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152a72 call 0x11156250 */
  push32(0x11152a77u); f_11156250();
  /* 11152a77 mov esi, esp */
  ESI = (ESP);
  /* 11152a79 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11152a7e push 4 */
  push32((uint32_t)(0x4u));
  /* 11152a80 push 0 */
  push32((uint32_t)(0x0u));
  /* 11152a82 call dword ptr [0x11186494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186494))), 0x11152a88u);
  /* 11152a88 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152a8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152a8d call 0x11156250 */
  push32(0x11152a92u); f_11156250();
L_11152a92:;
  /* 11152a92 mov esi, esp */
  ESI = (ESP);
  /* 11152a94 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11152a99 push 1 */
  push32((uint32_t)(0x1u));
  /* 11152a9b call dword ptr [0x1118648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118648c))), 0x11152aa1u);
  /* 11152aa1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152aa4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152aa6 call 0x11156250 */
  push32(0x11152aabu); f_11156250();
  /* 11152aab mov esi, esp */
  ESI = (ESP);
  /* 11152aad push 0 */
  push32((uint32_t)(0x0u));
  /* 11152aaf push 0x111835e0 */
  push32((uint32_t)(0x111835e0u));
  /* 11152ab4 push 5 */
  push32((uint32_t)(0x5u));
  /* 11152ab6 push 0x111835e8 */
  push32((uint32_t)(0x111835e8u));
  /* 11152abb push 0x111834a8 */
  push32((uint32_t)(0x111834a8u));
  /* 11152ac0 push 0x111834f0 */
  push32((uint32_t)(0x111834f0u));
  /* 11152ac5 call dword ptr [0x1118649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118649c))), 0x11152acbu);
  /* 11152acb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152ace cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152ad0 call 0x11156250 */
  push32(0x11152ad5u); f_11156250();
  /* 11152ad5 mov esi, esp */
  ESI = (ESP);
  /* 11152ad7 push 0x1117e560 */
  push32((uint32_t)(0x1117e560u));
  /* 11152adc push 0x1117e414 */
  push32((uint32_t)(0x1117e414u));
  /* 11152ae1 call dword ptr [0x111864a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864a0))), 0x11152ae7u);
  /* 11152ae7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152aea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152aec call 0x11156250 */
  push32(0x11152af1u); f_11156250();
  /* 11152af1 mov esi, esp */
  ESI = (ESP);
  /* 11152af3 push 0x1117e554 */
  push32((uint32_t)(0x1117e554u));
  /* 11152af8 push 0x1117e414 */
  push32((uint32_t)(0x1117e414u));
  /* 11152afd call dword ptr [0x111864a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864a0))), 0x11152b03u);
  /* 11152b03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152b06 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152b08 call 0x11156250 */
  push32(0x11152b0du); f_11156250();
  /* 11152b0d mov esi, esp */
  ESI = (ESP);
  /* 11152b0f push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11152b14 push 3 */
  push32((uint32_t)(0x3u));
  /* 11152b16 push 2 */
  push32((uint32_t)(0x2u));
  /* 11152b18 call dword ptr [0x11186494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186494))), 0x11152b1eu);
  /* 11152b1e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152b21 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152b23 call 0x11156250 */
  push32(0x11152b28u); f_11156250();
  /* 11152b28 mov esi, esp */
  ESI = (ESP);
  /* 11152b2a push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11152b2f push 0 */
  push32((uint32_t)(0x0u));
  /* 11152b31 push 2 */
  push32((uint32_t)(0x2u));
  /* 11152b33 call dword ptr [0x11186494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186494))), 0x11152b39u);
  /* 11152b39 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152b3c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152b3e call 0x11156250 */
  push32(0x11152b43u); f_11156250();
  /* 11152b43 mov esi, esp */
  ESI = (ESP);
  /* 11152b45 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11152b4a push 2 */
  push32((uint32_t)(0x2u));
  /* 11152b4c push 2 */
  push32((uint32_t)(0x2u));
  /* 11152b4e call dword ptr [0x11186494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186494))), 0x11152b54u);
  /* 11152b54 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152b57 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152b59 call 0x11156250 */
  push32(0x11152b5eu); f_11156250();
  /* 11152b5e mov esi, esp */
  ESI = (ESP);
  /* 11152b60 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11152b65 push 1 */
  push32((uint32_t)(0x1u));
  /* 11152b67 push 2 */
  push32((uint32_t)(0x2u));
  /* 11152b69 call dword ptr [0x11186494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186494))), 0x11152b6fu);
  /* 11152b6f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152b72 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152b74 call 0x11156250 */
  push32(0x11152b79u); f_11156250();
  /* 11152b79 mov esi, esp */
  ESI = (ESP);
  /* 11152b7b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11152b80 push 5 */
  push32((uint32_t)(0x5u));
  /* 11152b82 push 2 */
  push32((uint32_t)(0x2u));
  /* 11152b84 call dword ptr [0x11186494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186494))), 0x11152b8au);
  /* 11152b8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152b8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152b8f call 0x11156250 */
  push32(0x11152b94u); f_11156250();
  /* 11152b94 mov esi, esp */
  ESI = (ESP);
  /* 11152b96 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11152b9b push 4 */
  push32((uint32_t)(0x4u));
  /* 11152b9d push 2 */
  push32((uint32_t)(0x2u));
  /* 11152b9f call dword ptr [0x11186494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186494))), 0x11152ba5u);
  /* 11152ba5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152ba8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152baa call 0x11156250 */
  push32(0x11152bafu); f_11156250();
  /* 11152baf mov esi, esp */
  ESI = (ESP);
  /* 11152bb1 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11152bb6 push 3 */
  push32((uint32_t)(0x3u));
  /* 11152bb8 push 3 */
  push32((uint32_t)(0x3u));
  /* 11152bba call dword ptr [0x11186494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186494))), 0x11152bc0u);
  /* 11152bc0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152bc3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152bc5 call 0x11156250 */
  push32(0x11152bcau); f_11156250();
  /* 11152bca mov esi, esp */
  ESI = (ESP);
  /* 11152bcc push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11152bd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11152bd3 push 3 */
  push32((uint32_t)(0x3u));
  /* 11152bd5 call dword ptr [0x11186494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186494))), 0x11152bdbu);
  /* 11152bdb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152bde cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152be0 call 0x11156250 */
  push32(0x11152be5u); f_11156250();
  /* 11152be5 mov esi, esp */
  ESI = (ESP);
  /* 11152be7 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11152bec push 2 */
  push32((uint32_t)(0x2u));
  /* 11152bee push 3 */
  push32((uint32_t)(0x3u));
  /* 11152bf0 call dword ptr [0x11186494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186494))), 0x11152bf6u);
  /* 11152bf6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152bf9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152bfb call 0x11156250 */
  push32(0x11152c00u); f_11156250();
  /* 11152c00 mov esi, esp */
  ESI = (ESP);
  /* 11152c02 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11152c07 push 1 */
  push32((uint32_t)(0x1u));
  /* 11152c09 push 3 */
  push32((uint32_t)(0x3u));
  /* 11152c0b call dword ptr [0x11186494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186494))), 0x11152c11u);
  /* 11152c11 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152c14 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152c16 call 0x11156250 */
  push32(0x11152c1bu); f_11156250();
  /* 11152c1b mov esi, esp */
  ESI = (ESP);
  /* 11152c1d push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11152c22 push 5 */
  push32((uint32_t)(0x5u));
  /* 11152c24 push 3 */
  push32((uint32_t)(0x3u));
  /* 11152c26 call dword ptr [0x11186494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186494))), 0x11152c2cu);
  /* 11152c2c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152c2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152c31 call 0x11156250 */
  push32(0x11152c36u); f_11156250();
  /* 11152c36 mov esi, esp */
  ESI = (ESP);
  /* 11152c38 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11152c3d push 4 */
  push32((uint32_t)(0x4u));
  /* 11152c3f push 3 */
  push32((uint32_t)(0x3u));
  /* 11152c41 call dword ptr [0x11186494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186494))), 0x11152c47u);
  /* 11152c47 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152c4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152c4c call 0x11156250 */
  push32(0x11152c51u); f_11156250();
  /* 11152c51 mov esi, esp */
  ESI = (ESP);
  /* 11152c53 push 0 */
  push32((uint32_t)(0x0u));
  /* 11152c55 call dword ptr [0x11186490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186490))), 0x11152c5bu);
  /* 11152c5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152c5e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152c60 call 0x11156250 */
  push32(0x11152c65u); f_11156250();
  /* 11152c65 mov esi, esp */
  ESI = (ESP);
  /* 11152c67 push eax */
  push32((uint32_t)(EAX));
  /* 11152c68 push 2 */
  push32((uint32_t)(0x2u));
  /* 11152c6a push 1 */
  push32((uint32_t)(0x1u));
  /* 11152c6c push 0 */
  push32((uint32_t)(0x0u));
  /* 11152c6e push 0x1117e548 */
  push32((uint32_t)(0x1117e548u));
  /* 11152c73 push 2 */
  push32((uint32_t)(0x2u));
  /* 11152c75 call dword ptr [0x111864a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864a4))), 0x11152c7bu);
  /* 11152c7b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152c7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152c80 call 0x11156250 */
  push32(0x11152c85u); f_11156250();
  /* 11152c85 mov esi, esp */
  ESI = (ESP);
  /* 11152c87 push 0 */
  push32((uint32_t)(0x0u));
  /* 11152c89 call dword ptr [0x11186490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186490))), 0x11152c8fu);
  /* 11152c8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152c92 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152c94 call 0x11156250 */
  push32(0x11152c99u); f_11156250();
  /* 11152c99 mov esi, esp */
  ESI = (ESP);
  /* 11152c9b push eax */
  push32((uint32_t)(EAX));
  /* 11152c9c push 2 */
  push32((uint32_t)(0x2u));
  /* 11152c9e push 1 */
  push32((uint32_t)(0x1u));
  /* 11152ca0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11152ca2 push 0x1117e53c */
  push32((uint32_t)(0x1117e53cu));
  /* 11152ca7 push 3 */
  push32((uint32_t)(0x3u));
  /* 11152ca9 call dword ptr [0x111864a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864a4))), 0x11152cafu);
  /* 11152caf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152cb2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152cb4 call 0x11156250 */
  push32(0x11152cb9u); f_11156250();
L_11152cb9:;
  /* 11152cb9 mov esi, esp */
  ESI = (ESP);
  /* 11152cbb push 0xa */
  push32((uint32_t)(0xau));
  /* 11152cbd call dword ptr [0x111864a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864a8))), 0x11152cc3u);
  /* 11152cc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152cc6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152cc8 call 0x11156250 */
  push32(0x11152ccdu); f_11156250();
  /* 11152ccd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11152cd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11152cd4 je 0x11152d98 */
  if (C.zf) goto L_11152d98;
  /* 11152cda mov esi, esp */
  ESI = (ESP);
  /* 11152cdc push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11152cde call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11152ce4u);
  /* 11152ce4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152ce7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152ce9 call 0x11156250 */
  push32(0x11152ceeu); f_11156250();
  /* 11152cee and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11152cf3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11152cf5 je 0x11152d98 */
  if (C.zf) goto L_11152d98;
  /* 11152cfb mov esi, esp */
  ESI = (ESP);
  /* 11152cfd push 0 */
  push32((uint32_t)(0x0u));
  /* 11152cff push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11152d01 call dword ptr [0x1118646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118646c))), 0x11152d07u);
  /* 11152d07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152d0a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152d0c call 0x11156250 */
  push32(0x11152d11u); f_11156250();
  /* 11152d11 mov esi, esp */
  ESI = (ESP);
  /* 11152d13 push 0x1117e530 */
  push32((uint32_t)(0x1117e530u));
  /* 11152d18 call dword ptr [0x111864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864ac))), 0x11152d1eu);
  /* 11152d1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152d21 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152d23 call 0x11156250 */
  push32(0x11152d28u); f_11156250();
  /* 11152d28 mov esi, esp */
  ESI = (ESP);
  /* 11152d2a push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11152d2c call dword ptr [0x11186470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186470))), 0x11152d32u);
  /* 11152d32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152d35 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152d37 call 0x11156250 */
  push32(0x11152d3cu); f_11156250();
  /* 11152d3c mov esi, esp */
  ESI = (ESP);
  /* 11152d3e push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11152d40 call dword ptr [0x11186470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186470))), 0x11152d46u);
  /* 11152d46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152d49 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152d4b call 0x11156250 */
  push32(0x11152d50u); f_11156250();
  /* 11152d50 mov esi, esp */
  ESI = (ESP);
  /* 11152d52 push 0 */
  push32((uint32_t)(0x0u));
  /* 11152d54 push 0x11183680 */
  push32((uint32_t)(0x11183680u));
  /* 11152d59 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x11152d5fu);
  /* 11152d5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152d62 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152d64 call 0x11156250 */
  push32(0x11152d69u); f_11156250();
  /* 11152d69 mov esi, esp */
  ESI = (ESP);
  /* 11152d6b push 1 */
  push32((uint32_t)(0x1u));
  /* 11152d6d push 0x11183688 */
  push32((uint32_t)(0x11183688u));
  /* 11152d72 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x11152d78u);
  /* 11152d78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152d7b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152d7d call 0x11156250 */
  push32(0x11152d82u); f_11156250();
  /* 11152d82 mov esi, esp */
  ESI = (ESP);
  /* 11152d84 push 0 */
  push32((uint32_t)(0x0u));
  /* 11152d86 push 1 */
  push32((uint32_t)(0x1u));
  /* 11152d88 call dword ptr [0x111864b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b0))), 0x11152d8eu);
  /* 11152d8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152d91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152d93 call 0x11156250 */
  push32(0x11152d98u); f_11156250();
L_11152d98:;
  /* 11152d98 mov esi, esp */
  ESI = (ESP);
  /* 11152d9a push 1 */
  push32((uint32_t)(0x1u));
  /* 11152d9c call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11152da2u);
  /* 11152da2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152da5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152da7 call 0x11156250 */
  push32(0x11152dacu); f_11156250();
  /* 11152dac and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11152db1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11152db3 jne 0x11152e3e */
  if (!C.zf) goto L_11152e3e;
  /* 11152db9 mov esi, esp */
  ESI = (ESP);
  /* 11152dbb push 0x111834b8 */
  push32((uint32_t)(0x111834b8u));
  /* 11152dc0 push 0x111835d0 */
  push32((uint32_t)(0x111835d0u));
  /* 11152dc5 call dword ptr [0x111864b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b4))), 0x11152dcbu);
  /* 11152dcb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152dce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152dd0 call 0x11156250 */
  push32(0x11152dd5u); f_11156250();
  /* 11152dd5 mov esi, eax */
  ESI = (EAX);
  /* 11152dd7 mov edi, esp */
  EDI = (ESP);
  /* 11152dd9 push 0x111834b8 */
  push32((uint32_t)(0x111834b8u));
  /* 11152dde call dword ptr [0x111864b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b8))), 0x11152de4u);
  /* 11152de4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152de7 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152de9 call 0x11156250 */
  push32(0x11152deeu); f_11156250();
  /* 11152dee cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152df0 jge 0x11152e3e */
  if ((C.sf==C.of)) goto L_11152e3e;
  /* 11152df2 mov esi, esp */
  ESI = (ESP);
  /* 11152df4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11152df6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11152df8 call dword ptr [0x1118646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118646c))), 0x11152dfeu);
  /* 11152dfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152e01 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152e03 call 0x11156250 */
  push32(0x11152e08u); f_11156250();
  /* 11152e08 mov esi, esp */
  ESI = (ESP);
  /* 11152e0a push 0 */
  push32((uint32_t)(0x0u));
  /* 11152e0c push 0x111834b8 */
  push32((uint32_t)(0x111834b8u));
  /* 11152e11 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x11152e17u);
  /* 11152e17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152e1a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152e1c call 0x11156250 */
  push32(0x11152e21u); f_11156250();
  /* 11152e21 mov esi, esp */
  ESI = (ESP);
  /* 11152e23 push 0 */
  push32((uint32_t)(0x0u));
  /* 11152e25 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11152e27 push 0x111836f0 */
  push32((uint32_t)(0x111836f0u));
  /* 11152e2c push 5 */
  push32((uint32_t)(0x5u));
  /* 11152e2e call dword ptr [0x111864bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864bc))), 0x11152e34u);
  /* 11152e34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152e37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152e39 call 0x11156250 */
  push32(0x11152e3eu); f_11156250();
L_11152e3e:;
  /* 11152e3e mov esi, esp */
  ESI = (ESP);
  /* 11152e40 push 1 */
  push32((uint32_t)(0x1u));
  /* 11152e42 call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11152e48u);
  /* 11152e48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152e4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152e4d call 0x11156250 */
  push32(0x11152e52u); f_11156250();
  /* 11152e52 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11152e57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11152e59 je 0x11152ee2 */
  if (C.zf) goto L_11152ee2;
  /* 11152e5f mov esi, esp */
  ESI = (ESP);
  /* 11152e61 push 0x111834b8 */
  push32((uint32_t)(0x111834b8u));
  /* 11152e66 push 0x111835d0 */
  push32((uint32_t)(0x111835d0u));
  /* 11152e6b call dword ptr [0x111864b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b4))), 0x11152e71u);
  /* 11152e71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152e74 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152e76 call 0x11156250 */
  push32(0x11152e7bu); f_11156250();
  /* 11152e7b mov esi, eax */
  ESI = (EAX);
  /* 11152e7d mov edi, esp */
  EDI = (ESP);
  /* 11152e7f push 0x111834b8 */
  push32((uint32_t)(0x111834b8u));
  /* 11152e84 call dword ptr [0x111864b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b8))), 0x11152e8au);
  /* 11152e8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152e8d cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152e8f call 0x11156250 */
  push32(0x11152e94u); f_11156250();
  /* 11152e94 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152e96 jne 0x11152ee2 */
  if (!C.zf) goto L_11152ee2;
  /* 11152e98 mov esi, esp */
  ESI = (ESP);
  /* 11152e9a push 0 */
  push32((uint32_t)(0x0u));
  /* 11152e9c push 1 */
  push32((uint32_t)(0x1u));
  /* 11152e9e call dword ptr [0x1118646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118646c))), 0x11152ea4u);
  /* 11152ea4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152ea7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152ea9 call 0x11156250 */
  push32(0x11152eaeu); f_11156250();
  /* 11152eae mov esi, esp */
  ESI = (ESP);
  /* 11152eb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11152eb2 push 0x111834b8 */
  push32((uint32_t)(0x111834b8u));
  /* 11152eb7 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x11152ebdu);
  /* 11152ebd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152ec0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152ec2 call 0x11156250 */
  push32(0x11152ec7u); f_11156250();
  /* 11152ec7 mov esi, esp */
  ESI = (ESP);
  /* 11152ec9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11152ecb push 0x111836e8 */
  push32((uint32_t)(0x111836e8u));
  /* 11152ed0 push 5 */
  push32((uint32_t)(0x5u));
  /* 11152ed2 call dword ptr [0x111864c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864c0))), 0x11152ed8u);
  /* 11152ed8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152edb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152edd call 0x11156250 */
  push32(0x11152ee2u); f_11156250();
L_11152ee2:;
  /* 11152ee2 mov esi, esp */
  ESI = (ESP);
  /* 11152ee4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11152ee6 call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11152eecu);
  /* 11152eec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152eef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152ef1 call 0x11156250 */
  push32(0x11152ef6u); f_11156250();
  /* 11152ef6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11152efb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11152efd je 0x11152fec */
  if (C.zf) goto L_11152fec;
  /* 11152f03 mov esi, esp */
  ESI = (ESP);
  /* 11152f05 push 0x111834b8 */
  push32((uint32_t)(0x111834b8u));
  /* 11152f0a call dword ptr [0x111864b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b8))), 0x11152f10u);
  /* 11152f10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152f13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152f15 call 0x11156250 */
  push32(0x11152f1au); f_11156250();
  /* 11152f1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11152f1c jne 0x11152fec */
  if (!C.zf) goto L_11152fec;
  /* 11152f22 mov esi, esp */
  ESI = (ESP);
  /* 11152f24 push 0 */
  push32((uint32_t)(0x0u));
  /* 11152f26 push 0x111835d0 */
  push32((uint32_t)(0x111835d0u));
  /* 11152f2b call dword ptr [0x111864c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864c4))), 0x11152f31u);
  /* 11152f31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152f34 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152f36 call 0x11156250 */
  push32(0x11152f3bu); f_11156250();
  /* 11152f3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11152f3d jle 0x11152fec */
  if ((C.zf||C.sf!=C.of)) goto L_11152fec;
  /* 11152f43 mov esi, esp */
  ESI = (ESP);
  /* 11152f45 push 0 */
  push32((uint32_t)(0x0u));
  /* 11152f47 push 2 */
  push32((uint32_t)(0x2u));
  /* 11152f49 call dword ptr [0x1118646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118646c))), 0x11152f4fu);
  /* 11152f4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152f52 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152f54 call 0x11156250 */
  push32(0x11152f59u); f_11156250();
  /* 11152f59 mov esi, esp */
  ESI = (ESP);
  /* 11152f5b push 0 */
  push32((uint32_t)(0x0u));
  /* 11152f5d call dword ptr [0x11186490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186490))), 0x11152f63u);
  /* 11152f63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152f66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152f68 call 0x11156250 */
  push32(0x11152f6du); f_11156250();
  /* 11152f6d imul eax, eax, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x64u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11152f70 mov ecx, 0x7d0 */
  ECX = (0x7d0u);
  /* 11152f75 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11152f77 mov esi, esp */
  ESI = (ESP);
  /* 11152f79 push ecx */
  push32((uint32_t)(ECX));
  /* 11152f7a push 0x1117e528 */
  push32((uint32_t)(0x1117e528u));
  /* 11152f7f call dword ptr [0x111864c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864c8))), 0x11152f85u);
  /* 11152f85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152f88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152f8a call 0x11156250 */
  push32(0x11152f8fu); f_11156250();
  /* 11152f8f mov esi, esp */
  ESI = (ESP);
  /* 11152f91 push 0 */
  push32((uint32_t)(0x0u));
  /* 11152f93 call dword ptr [0x11186490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186490))), 0x11152f99u);
  /* 11152f99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152f9c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152f9e call 0x11156250 */
  push32(0x11152fa3u); f_11156250();
  /* 11152fa3 imul eax, eax, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x64u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11152fa6 mov edx, 0x7d0 */
  EDX = (0x7d0u);
  /* 11152fab sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11152fad mov esi, esp */
  ESI = (ESP);
  /* 11152faf push edx */
  push32((uint32_t)(EDX));
  /* 11152fb0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11152fb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11152fb4 call dword ptr [0x111864cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864cc))), 0x11152fbau);
  /* 11152fba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152fbd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152fbf call 0x11156250 */
  push32(0x11152fc4u); f_11156250();
  /* 11152fc4 mov esi, esp */
  ESI = (ESP);
  /* 11152fc6 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11152fc8 call dword ptr [0x11186474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186474))), 0x11152fceu);
  /* 11152fce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152fd1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152fd3 call 0x11156250 */
  push32(0x11152fd8u); f_11156250();
  /* 11152fd8 mov esi, esp */
  ESI = (ESP);
  /* 11152fda push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11152fdc call dword ptr [0x11186470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186470))), 0x11152fe2u);
  /* 11152fe2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152fe5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152fe7 call 0x11156250 */
  push32(0x11152fecu); f_11156250();
L_11152fec:;
  /* 11152fec mov esi, esp */
  ESI = (ESP);
  /* 11152fee push 3 */
  push32((uint32_t)(0x3u));
  /* 11152ff0 call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11152ff6u);
  /* 11152ff6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11152ff9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11152ffb call 0x11156250 */
  push32(0x11153000u); f_11156250();
  /* 11153000 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11153005 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11153007 jne 0x11153092 */
  if (!C.zf) goto L_11153092;
  /* 1115300d mov esi, esp */
  ESI = (ESP);
  /* 1115300f push 0x111834b0 */
  push32((uint32_t)(0x111834b0u));
  /* 11153014 push 0x111835d8 */
  push32((uint32_t)(0x111835d8u));
  /* 11153019 call dword ptr [0x111864b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b4))), 0x1115301fu);
  /* 1115301f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153022 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153024 call 0x11156250 */
  push32(0x11153029u); f_11156250();
  /* 11153029 mov esi, eax */
  ESI = (EAX);
  /* 1115302b mov edi, esp */
  EDI = (ESP);
  /* 1115302d push 0x111834b0 */
  push32((uint32_t)(0x111834b0u));
  /* 11153032 call dword ptr [0x111864b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b8))), 0x11153038u);
  /* 11153038 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115303b cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115303d call 0x11156250 */
  push32(0x11153042u); f_11156250();
  /* 11153042 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153044 jge 0x11153092 */
  if ((C.sf==C.of)) goto L_11153092;
  /* 11153046 mov esi, esp */
  ESI = (ESP);
  /* 11153048 push 1 */
  push32((uint32_t)(0x1u));
  /* 1115304a push 3 */
  push32((uint32_t)(0x3u));
  /* 1115304c call dword ptr [0x1118646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118646c))), 0x11153052u);
  /* 11153052 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153055 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153057 call 0x11156250 */
  push32(0x1115305cu); f_11156250();
  /* 1115305c mov esi, esp */
  ESI = (ESP);
  /* 1115305e push 0 */
  push32((uint32_t)(0x0u));
  /* 11153060 push 0x111834b0 */
  push32((uint32_t)(0x111834b0u));
  /* 11153065 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x1115306bu);
  /* 1115306b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115306e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153070 call 0x11156250 */
  push32(0x11153075u); f_11156250();
  /* 11153075 mov esi, esp */
  ESI = (ESP);
  /* 11153077 push 0 */
  push32((uint32_t)(0x0u));
  /* 11153079 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115307b push 0x11183700 */
  push32((uint32_t)(0x11183700u));
  /* 11153080 push 5 */
  push32((uint32_t)(0x5u));
  /* 11153082 call dword ptr [0x111864bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864bc))), 0x11153088u);
  /* 11153088 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115308b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115308d call 0x11156250 */
  push32(0x11153092u); f_11156250();
L_11153092:;
  /* 11153092 mov esi, esp */
  ESI = (ESP);
  /* 11153094 push 3 */
  push32((uint32_t)(0x3u));
  /* 11153096 call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x1115309cu);
  /* 1115309c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115309f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111530a1 call 0x11156250 */
  push32(0x111530a6u); f_11156250();
  /* 111530a6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111530ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111530ad je 0x11153136 */
  if (C.zf) goto L_11153136;
  /* 111530b3 mov esi, esp */
  ESI = (ESP);
  /* 111530b5 push 0x111834b0 */
  push32((uint32_t)(0x111834b0u));
  /* 111530ba push 0x111835d8 */
  push32((uint32_t)(0x111835d8u));
  /* 111530bf call dword ptr [0x111864b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b4))), 0x111530c5u);
  /* 111530c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111530c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111530ca call 0x11156250 */
  push32(0x111530cfu); f_11156250();
  /* 111530cf mov esi, eax */
  ESI = (EAX);
  /* 111530d1 mov edi, esp */
  EDI = (ESP);
  /* 111530d3 push 0x111834b0 */
  push32((uint32_t)(0x111834b0u));
  /* 111530d8 call dword ptr [0x111864b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b8))), 0x111530deu);
  /* 111530de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111530e1 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111530e3 call 0x11156250 */
  push32(0x111530e8u); f_11156250();
  /* 111530e8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111530ea jne 0x11153136 */
  if (!C.zf) goto L_11153136;
  /* 111530ec mov esi, esp */
  ESI = (ESP);
  /* 111530ee push 0 */
  push32((uint32_t)(0x0u));
  /* 111530f0 push 3 */
  push32((uint32_t)(0x3u));
  /* 111530f2 call dword ptr [0x1118646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118646c))), 0x111530f8u);
  /* 111530f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111530fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111530fd call 0x11156250 */
  push32(0x11153102u); f_11156250();
  /* 11153102 mov esi, esp */
  ESI = (ESP);
  /* 11153104 push 0 */
  push32((uint32_t)(0x0u));
  /* 11153106 push 0x111834b0 */
  push32((uint32_t)(0x111834b0u));
  /* 1115310b call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x11153111u);
  /* 11153111 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153114 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153116 call 0x11156250 */
  push32(0x1115311bu); f_11156250();
  /* 1115311b mov esi, esp */
  ESI = (ESP);
  /* 1115311d push 0 */
  push32((uint32_t)(0x0u));
  /* 1115311f push 0x111836f8 */
  push32((uint32_t)(0x111836f8u));
  /* 11153124 push 5 */
  push32((uint32_t)(0x5u));
  /* 11153126 call dword ptr [0x111864c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864c0))), 0x1115312cu);
  /* 1115312c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115312f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153131 call 0x11156250 */
  push32(0x11153136u); f_11156250();
L_11153136:;
  /* 11153136 mov esi, esp */
  ESI = (ESP);
  /* 11153138 push 4 */
  push32((uint32_t)(0x4u));
  /* 1115313a call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11153140u);
  /* 11153140 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153143 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153145 call 0x11156250 */
  push32(0x1115314au); f_11156250();
  /* 1115314a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1115314f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11153151 je 0x11153246 */
  if (C.zf) goto L_11153246;
  /* 11153157 mov esi, esp */
  ESI = (ESP);
  /* 11153159 push 0x111834b0 */
  push32((uint32_t)(0x111834b0u));
  /* 1115315e call dword ptr [0x111864b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b8))), 0x11153164u);
  /* 11153164 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153167 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153169 call 0x11156250 */
  push32(0x1115316eu); f_11156250();
  /* 1115316e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11153170 jne 0x11153246 */
  if (!C.zf) goto L_11153246;
  /* 11153176 mov esi, esp */
  ESI = (ESP);
  /* 11153178 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115317a push 0x111835d8 */
  push32((uint32_t)(0x111835d8u));
  /* 1115317f call dword ptr [0x111864c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864c4))), 0x11153185u);
  /* 11153185 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153188 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115318a call 0x11156250 */
  push32(0x1115318fu); f_11156250();
  /* 1115318f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11153191 jle 0x11153246 */
  if ((C.zf||C.sf!=C.of)) goto L_11153246;
  /* 11153197 mov esi, esp */
  ESI = (ESP);
  /* 11153199 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115319b push 4 */
  push32((uint32_t)(0x4u));
  /* 1115319d call dword ptr [0x1118646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118646c))), 0x111531a3u);
  /* 111531a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111531a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111531a8 call 0x11156250 */
  push32(0x111531adu); f_11156250();
  /* 111531ad mov esi, esp */
  ESI = (ESP);
  /* 111531af push 0 */
  push32((uint32_t)(0x0u));
  /* 111531b1 call dword ptr [0x11186490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186490))), 0x111531b7u);
  /* 111531b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111531ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111531bc call 0x11156250 */
  push32(0x111531c1u); f_11156250();
  /* 111531c1 imul eax, eax, 0xc8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xc8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111531c7 mov ecx, 0xbb8 */
  ECX = (0xbb8u);
  /* 111531cc sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111531ce mov esi, esp */
  ESI = (ESP);
  /* 111531d0 push ecx */
  push32((uint32_t)(ECX));
  /* 111531d1 push 0x1117e520 */
  push32((uint32_t)(0x1117e520u));
  /* 111531d6 call dword ptr [0x111864c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864c8))), 0x111531dcu);
  /* 111531dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111531df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111531e1 call 0x11156250 */
  push32(0x111531e6u); f_11156250();
  /* 111531e6 mov esi, esp */
  ESI = (ESP);
  /* 111531e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 111531ea call dword ptr [0x11186490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186490))), 0x111531f0u);
  /* 111531f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111531f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111531f5 call 0x11156250 */
  push32(0x111531fau); f_11156250();
  /* 111531fa imul eax, eax, 0xc8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xc8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11153200 mov edx, 0xbb8 */
  EDX = (0xbb8u);
  /* 11153205 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11153207 mov esi, esp */
  ESI = (ESP);
  /* 11153209 push edx */
  push32((uint32_t)(EDX));
  /* 1115320a push 1 */
  push32((uint32_t)(0x1u));
  /* 1115320c push 0 */
  push32((uint32_t)(0x0u));
  /* 1115320e call dword ptr [0x111864cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864cc))), 0x11153214u);
  /* 11153214 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153217 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153219 call 0x11156250 */
  push32(0x1115321eu); f_11156250();
  /* 1115321e mov esi, esp */
  ESI = (ESP);
  /* 11153220 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11153222 call dword ptr [0x11186474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186474))), 0x11153228u);
  /* 11153228 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115322b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115322d call 0x11156250 */
  push32(0x11153232u); f_11156250();
  /* 11153232 mov esi, esp */
  ESI = (ESP);
  /* 11153234 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11153236 call dword ptr [0x11186470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186470))), 0x1115323cu);
  /* 1115323c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115323f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153241 call 0x11156250 */
  push32(0x11153246u); f_11156250();
L_11153246:;
  /* 11153246 mov esi, esp */
  ESI = (ESP);
  /* 11153248 push 2 */
  push32((uint32_t)(0x2u));
  /* 1115324a call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11153250u);
  /* 11153250 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153253 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153255 call 0x11156250 */
  push32(0x1115325au); f_11156250();
  /* 1115325a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1115325f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11153261 je 0x1115343e */
  if (C.zf) goto L_1115343e;
  /* 11153267 mov esi, esp */
  ESI = (ESP);
  /* 11153269 push 9 */
  push32((uint32_t)(0x9u));
  /* 1115326b call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11153271u);
  /* 11153271 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153274 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153276 call 0x11156250 */
  push32(0x1115327bu); f_11156250();
  /* 1115327b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11153280 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11153282 je 0x1115343e */
  if (C.zf) goto L_1115343e;
  /* 11153288 mov esi, esp */
  ESI = (ESP);
  /* 1115328a push 0 */
  push32((uint32_t)(0x0u));
  /* 1115328c push 9 */
  push32((uint32_t)(0x9u));
  /* 1115328e call dword ptr [0x1118646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118646c))), 0x11153294u);
  /* 11153294 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153297 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153299 call 0x11156250 */
  push32(0x1115329eu); f_11156250();
  /* 1115329e mov esi, esp */
  ESI = (ESP);
  /* 111532a0 push 0xdac */
  push32((uint32_t)(0xdacu));
  /* 111532a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 111532a7 call dword ptr [0x1118648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118648c))), 0x111532adu);
  /* 111532ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111532b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111532b2 call 0x11156250 */
  push32(0x111532b7u); f_11156250();
  /* 111532b7 mov esi, esp */
  ESI = (ESP);
  /* 111532b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 111532bb call dword ptr [0x11186490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186490))), 0x111532c1u);
  /* 111532c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111532c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111532c6 call 0x11156250 */
  push32(0x111532cbu); f_11156250();
  /* 111532cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111532ce cmp dword ptr [ebp - 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111532d2 ja 0x1115343e */
  if ((!C.cf&&!C.zf)) goto L_1115343e;
  /* 111532d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111532db jmp dword ptr [eax*4 + 0x1115547f] */
  switch (EAX) {
    case 0: goto L_111532e2;
    case 1: goto L_1115333b;
    case 2: goto L_11153394;
    case 3: goto L_111533ea;
    case 4: goto L_11153708;
    case 5: goto L_11153767;
    case 6: goto L_111537c6;
    case 7: goto L_11153822;
    case 8: goto L_111541ba;
    case 9: goto L_111542c6;
    case 10: goto L_111543d2;
    case 11: goto L_111544de;
    case 12: goto L_11154d3b;
    case 13: goto L_11154d6a;
    case 14: goto L_11154d96;
    case 15: goto L_11154dc2;
    default: x86_unimpl("switch@0x111532db out of table"); return;
  }
L_111532e2:;
  /* 111532e2 mov esi, esp */
  ESI = (ESP);
  /* 111532e4 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 111532e6 push 0x11183618 */
  push32((uint32_t)(0x11183618u));
  /* 111532eb push 5 */
  push32((uint32_t)(0x5u));
  /* 111532ed push 0x11183470 */
  push32((uint32_t)(0x11183470u));
  /* 111532f2 push 0x11183648 */
  push32((uint32_t)(0x11183648u));
  /* 111532f7 push 0x11183438 */
  push32((uint32_t)(0x11183438u));
  /* 111532fc call dword ptr [0x1118649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118649c))), 0x11153302u);
  /* 11153302 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153305 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153307 call 0x11156250 */
  push32(0x1115330cu); f_11156250();
  /* 1115330c mov esi, esp */
  ESI = (ESP);
  /* 1115330e push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11153310 push 0x11183618 */
  push32((uint32_t)(0x11183618u));
  /* 11153315 push 5 */
  push32((uint32_t)(0x5u));
  /* 11153317 push 0x11183520 */
  push32((uint32_t)(0x11183520u));
  /* 1115331c push 0x111834a8 */
  push32((uint32_t)(0x111834a8u));
  /* 11153321 push 0x11183430 */
  push32((uint32_t)(0x11183430u));
  /* 11153326 call dword ptr [0x1118649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118649c))), 0x1115332cu);
  /* 1115332c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115332f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153331 call 0x11156250 */
  push32(0x11153336u); f_11156250();
  /* 11153336 jmp 0x1115343e */
  goto L_1115343e;
L_1115333b:;
  /* 1115333b mov esi, esp */
  ESI = (ESP);
  /* 1115333d push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1115333f push 0x11183618 */
  push32((uint32_t)(0x11183618u));
  /* 11153344 push 5 */
  push32((uint32_t)(0x5u));
  /* 11153346 push 0x11183470 */
  push32((uint32_t)(0x11183470u));
  /* 1115334b push 0x11183648 */
  push32((uint32_t)(0x11183648u));
  /* 11153350 push 0x11183438 */
  push32((uint32_t)(0x11183438u));
  /* 11153355 call dword ptr [0x1118649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118649c))), 0x1115335bu);
  /* 1115335b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115335e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153360 call 0x11156250 */
  push32(0x11153365u); f_11156250();
  /* 11153365 mov esi, esp */
  ESI = (ESP);
  /* 11153367 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11153369 push 0x11183618 */
  push32((uint32_t)(0x11183618u));
  /* 1115336e push 5 */
  push32((uint32_t)(0x5u));
  /* 11153370 push 0x11183520 */
  push32((uint32_t)(0x11183520u));
  /* 11153375 push 0x11183640 */
  push32((uint32_t)(0x11183640u));
  /* 1115337a push 0x11183430 */
  push32((uint32_t)(0x11183430u));
  /* 1115337f call dword ptr [0x1118649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118649c))), 0x11153385u);
  /* 11153385 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153388 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115338a call 0x11156250 */
  push32(0x1115338fu); f_11156250();
  /* 1115338f jmp 0x1115343e */
  goto L_1115343e;
L_11153394:;
  /* 11153394 mov esi, esp */
  ESI = (ESP);
  /* 11153396 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11153398 push 0x11183618 */
  push32((uint32_t)(0x11183618u));
  /* 1115339d push 5 */
  push32((uint32_t)(0x5u));
  /* 1115339f push 0x11183470 */
  push32((uint32_t)(0x11183470u));
  /* 111533a4 push 0x11183518 */
  push32((uint32_t)(0x11183518u));
  /* 111533a9 push 0x11183438 */
  push32((uint32_t)(0x11183438u));
  /* 111533ae call dword ptr [0x1118649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118649c))), 0x111533b4u);
  /* 111533b4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111533b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111533b9 call 0x11156250 */
  push32(0x111533beu); f_11156250();
  /* 111533be mov esi, esp */
  ESI = (ESP);
  /* 111533c0 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 111533c2 push 0x11183618 */
  push32((uint32_t)(0x11183618u));
  /* 111533c7 push 5 */
  push32((uint32_t)(0x5u));
  /* 111533c9 push 0x11183520 */
  push32((uint32_t)(0x11183520u));
  /* 111533ce push 0x11183648 */
  push32((uint32_t)(0x11183648u));
  /* 111533d3 push 0x11183430 */
  push32((uint32_t)(0x11183430u));
  /* 111533d8 call dword ptr [0x1118649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118649c))), 0x111533deu);
  /* 111533de add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111533e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111533e3 call 0x11156250 */
  push32(0x111533e8u); f_11156250();
  /* 111533e8 jmp 0x1115343e */
  goto L_1115343e;
L_111533ea:;
  /* 111533ea mov esi, esp */
  ESI = (ESP);
  /* 111533ec push 0x46 */
  push32((uint32_t)(0x46u));
  /* 111533ee push 0x11183618 */
  push32((uint32_t)(0x11183618u));
  /* 111533f3 push 5 */
  push32((uint32_t)(0x5u));
  /* 111533f5 push 0x11183470 */
  push32((uint32_t)(0x11183470u));
  /* 111533fa push 0x11183530 */
  push32((uint32_t)(0x11183530u));
  /* 111533ff push 0x11183438 */
  push32((uint32_t)(0x11183438u));
  /* 11153404 call dword ptr [0x1118649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118649c))), 0x1115340au);
  /* 1115340a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115340d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115340f call 0x11156250 */
  push32(0x11153414u); f_11156250();
  /* 11153414 mov esi, esp */
  ESI = (ESP);
  /* 11153416 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11153418 push 0x11183618 */
  push32((uint32_t)(0x11183618u));
  /* 1115341d push 5 */
  push32((uint32_t)(0x5u));
  /* 1115341f push 0x11183520 */
  push32((uint32_t)(0x11183520u));
  /* 11153424 push 0x11183648 */
  push32((uint32_t)(0x11183648u));
  /* 11153429 push 0x11183430 */
  push32((uint32_t)(0x11183430u));
  /* 1115342e call dword ptr [0x1118649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118649c))), 0x11153434u);
  /* 11153434 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153437 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153439 call 0x11156250 */
  push32(0x1115343eu); f_11156250();
L_1115343e:;
  /* 1115343e mov esi, esp */
  ESI = (ESP);
  /* 11153440 push 0 */
  push32((uint32_t)(0x0u));
  /* 11153442 push 0x11183438 */
  push32((uint32_t)(0x11183438u));
  /* 11153447 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x1115344du);
  /* 1115344d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153450 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153452 call 0x11156250 */
  push32(0x11153457u); f_11156250();
  /* 11153457 mov esi, esp */
  ESI = (ESP);
  /* 11153459 push 1 */
  push32((uint32_t)(0x1u));
  /* 1115345b push 0x11183430 */
  push32((uint32_t)(0x11183430u));
  /* 11153460 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x11153466u);
  /* 11153466 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153469 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115346b call 0x11156250 */
  push32(0x11153470u); f_11156250();
  /* 11153470 mov esi, esp */
  ESI = (ESP);
  /* 11153472 push 0x11183480 */
  push32((uint32_t)(0x11183480u));
  /* 11153477 push 5 */
  push32((uint32_t)(0x5u));
  /* 11153479 call dword ptr [0x111864d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864d0))), 0x1115347fu);
  /* 1115347f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153482 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153484 call 0x11156250 */
  push32(0x11153489u); f_11156250();
  /* 11153489 mov esi, esp */
  ESI = (ESP);
  /* 1115348b push 5 */
  push32((uint32_t)(0x5u));
  /* 1115348d call dword ptr [0x111864d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864d4))), 0x11153493u);
  /* 11153493 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153496 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153498 call 0x11156250 */
  push32(0x1115349du); f_11156250();
  /* 1115349d mov esi, esp */
  ESI = (ESP);
  /* 1115349f push 3 */
  push32((uint32_t)(0x3u));
  /* 111534a1 call dword ptr [0x111864d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864d8))), 0x111534a7u);
  /* 111534a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111534aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111534ac call 0x11156250 */
  push32(0x111534b1u); f_11156250();
  /* 111534b1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111534b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111534b8 je 0x11153526 */
  if (C.zf) goto L_11153526;
  /* 111534ba mov esi, esp */
  ESI = (ESP);
  /* 111534bc push 0x11183438 */
  push32((uint32_t)(0x11183438u));
  /* 111534c1 call dword ptr [0x111864b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b8))), 0x111534c7u);
  /* 111534c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111534ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111534cc call 0x11156250 */
  push32(0x111534d1u); f_11156250();
  /* 111534d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111534d3 jne 0x111534f0 */
  if (!C.zf) goto L_111534f0;
  /* 111534d5 mov esi, esp */
  ESI = (ESP);
  /* 111534d7 push 0x11183430 */
  push32((uint32_t)(0x11183430u));
  /* 111534dc call dword ptr [0x111864b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b8))), 0x111534e2u);
  /* 111534e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111534e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111534e7 call 0x11156250 */
  push32(0x111534ecu); f_11156250();
  /* 111534ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111534ee je 0x1115350d */
  if (C.zf) goto L_1115350d;
L_111534f0:;
  /* 111534f0 mov esi, esp */
  ESI = (ESP);
  /* 111534f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 111534f4 call dword ptr [0x111864a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864a8))), 0x111534fau);
  /* 111534fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111534fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111534ff call 0x11156250 */
  push32(0x11153504u); f_11156250();
  /* 11153504 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11153509 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115350b je 0x11153526 */
  if (C.zf) goto L_11153526;
L_1115350d:;
  /* 1115350d mov esi, esp */
  ESI = (ESP);
  /* 1115350f push 0x2bc */
  push32((uint32_t)(0x2bcu));
  /* 11153514 push 3 */
  push32((uint32_t)(0x3u));
  /* 11153516 call dword ptr [0x1118648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118648c))), 0x1115351cu);
  /* 1115351c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115351f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153521 call 0x11156250 */
  push32(0x11153526u); f_11156250();
L_11153526:;
  /* 11153526 mov esi, esp */
  ESI = (ESP);
  /* 11153528 push 3 */
  push32((uint32_t)(0x3u));
  /* 1115352a call dword ptr [0x111864dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864dc))), 0x11153530u);
  /* 11153530 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153533 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153535 call 0x11156250 */
  push32(0x1115353au); f_11156250();
  /* 1115353a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1115353f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11153541 je 0x11153581 */
  if (C.zf) goto L_11153581;
  /* 11153543 mov esi, esp */
  ESI = (ESP);
  /* 11153545 push 3 */
  push32((uint32_t)(0x3u));
  /* 11153547 call dword ptr [0x111864e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864e0))), 0x1115354du);
  /* 1115354d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153550 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153552 call 0x11156250 */
  push32(0x11153557u); f_11156250();
  /* 11153557 mov esi, esp */
  ESI = (ESP);
  /* 11153559 push 2 */
  push32((uint32_t)(0x2u));
  /* 1115355b call dword ptr [0x111864e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864e0))), 0x11153561u);
  /* 11153561 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153564 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153566 call 0x11156250 */
  push32(0x1115356bu); f_11156250();
  /* 1115356b mov esi, esp */
  ESI = (ESP);
  /* 1115356d push 1 */
  push32((uint32_t)(0x1u));
  /* 1115356f push 9 */
  push32((uint32_t)(0x9u));
  /* 11153571 call dword ptr [0x1118646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118646c))), 0x11153577u);
  /* 11153577 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115357a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115357c call 0x11156250 */
  push32(0x11153581u); f_11156250();
L_11153581:;
  /* 11153581 mov esi, esp */
  ESI = (ESP);
  /* 11153583 push 0 */
  push32((uint32_t)(0x0u));
  /* 11153585 push 0x11183638 */
  push32((uint32_t)(0x11183638u));
  /* 1115358a push 5 */
  push32((uint32_t)(0x5u));
  /* 1115358c call dword ptr [0x111864e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864e4))), 0x11153592u);
  /* 11153592 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153595 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153597 call 0x11156250 */
  push32(0x1115359cu); f_11156250();
  /* 1115359c mov esi, esp */
  ESI = (ESP);
  /* 1115359e push 5 */
  push32((uint32_t)(0x5u));
  /* 111535a0 call dword ptr [0x111864d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864d4))), 0x111535a6u);
  /* 111535a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111535a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111535ab call 0x11156250 */
  push32(0x111535b0u); f_11156250();
  /* 111535b0 mov esi, esp */
  ESI = (ESP);
  /* 111535b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 111535b4 push 0x11183480 */
  push32((uint32_t)(0x11183480u));
  /* 111535b9 push 5 */
  push32((uint32_t)(0x5u));
  /* 111535bb call dword ptr [0x111864e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864e8))), 0x111535c1u);
  /* 111535c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111535c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111535c6 call 0x11156250 */
  push32(0x111535cbu); f_11156250();
  /* 111535cb mov esi, esp */
  ESI = (ESP);
  /* 111535cd push 5 */
  push32((uint32_t)(0x5u));
  /* 111535cf call dword ptr [0x111864ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864ec))), 0x111535d5u);
  /* 111535d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111535d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111535da call 0x11156250 */
  push32(0x111535dfu); f_11156250();
  /* 111535df mov esi, esp */
  ESI = (ESP);
  /* 111535e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 111535e3 push 0x11183638 */
  push32((uint32_t)(0x11183638u));
  /* 111535e8 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x111535eeu);
  /* 111535ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111535f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111535f3 call 0x11156250 */
  push32(0x111535f8u); f_11156250();
  /* 111535f8 mov esi, esp */
  ESI = (ESP);
  /* 111535fa push 0xa */
  push32((uint32_t)(0xau));
  /* 111535fc call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11153602u);
  /* 11153602 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153605 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153607 call 0x11156250 */
  push32(0x1115360cu); f_11156250();
  /* 1115360c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11153611 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11153613 je 0x1115366c */
  if (C.zf) goto L_1115366c;
  /* 11153615 mov esi, esp */
  ESI = (ESP);
  /* 11153617 push 0x11183480 */
  push32((uint32_t)(0x11183480u));
  /* 1115361c call dword ptr [0x111864b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b8))), 0x11153622u);
  /* 11153622 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153625 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153627 call 0x11156250 */
  push32(0x1115362cu); f_11156250();
  /* 1115362c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115362e jne 0x1115366c */
  if (!C.zf) goto L_1115366c;
  /* 11153630 mov esi, esp */
  ESI = (ESP);
  /* 11153632 push 0 */
  push32((uint32_t)(0x0u));
  /* 11153634 push 0xa */
  push32((uint32_t)(0xau));
  /* 11153636 call dword ptr [0x1118646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118646c))), 0x1115363cu);
  /* 1115363c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115363f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153641 call 0x11156250 */
  push32(0x11153646u); f_11156250();
  /* 11153646 mov esi, esp */
  ESI = (ESP);
  /* 11153648 push 0x1117e514 */
  push32((uint32_t)(0x1117e514u));
  /* 1115364d call dword ptr [0x111864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864ac))), 0x11153653u);
  /* 11153653 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153656 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153658 call 0x11156250 */
  push32(0x1115365du); f_11156250();
  /* 1115365d mov esi, esp */
  ESI = (ESP);
  /* 1115365f call dword ptr [0x111864f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864f0))), 0x11153665u);
  /* 11153665 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153667 call 0x11156250 */
  push32(0x1115366cu); f_11156250();
L_1115366c:;
  /* 1115366c mov esi, esp */
  ESI = (ESP);
  /* 1115366e push 4 */
  push32((uint32_t)(0x4u));
  /* 11153670 call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11153676u);
  /* 11153676 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153679 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115367b call 0x11156250 */
  push32(0x11153680u); f_11156250();
  /* 11153680 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11153685 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11153687 je 0x1115387c */
  if (C.zf) goto L_1115387c;
  /* 1115368d mov esi, esp */
  ESI = (ESP);
  /* 1115368f push 0xb */
  push32((uint32_t)(0xbu));
  /* 11153691 call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11153697u);
  /* 11153697 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115369a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115369c call 0x11156250 */
  push32(0x111536a1u); f_11156250();
  /* 111536a1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111536a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111536a8 je 0x1115387c */
  if (C.zf) goto L_1115387c;
  /* 111536ae mov esi, esp */
  ESI = (ESP);
  /* 111536b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 111536b2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 111536b4 call dword ptr [0x1118646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118646c))), 0x111536bau);
  /* 111536ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111536bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111536bf call 0x11156250 */
  push32(0x111536c4u); f_11156250();
  /* 111536c4 mov esi, esp */
  ESI = (ESP);
  /* 111536c6 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 111536cb push 4 */
  push32((uint32_t)(0x4u));
  /* 111536cd call dword ptr [0x1118648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118648c))), 0x111536d3u);
  /* 111536d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111536d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111536d8 call 0x11156250 */
  push32(0x111536ddu); f_11156250();
  /* 111536dd mov esi, esp */
  ESI = (ESP);
  /* 111536df push 0 */
  push32((uint32_t)(0x0u));
  /* 111536e1 call dword ptr [0x11186490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186490))), 0x111536e7u);
  /* 111536e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111536ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111536ec call 0x11156250 */
  push32(0x111536f1u); f_11156250();
  /* 111536f1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111536f4 cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111536f8 ja 0x1115387c */
  if ((!C.cf&&!C.zf)) goto L_1115387c;
  /* 111536fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11153701 jmp dword ptr [ecx*4 + 0x1115548f] */
  switch (ECX) {
    case 0: goto L_11153708;
    case 1: goto L_11153767;
    case 2: goto L_111537c6;
    case 3: goto L_11153822;
    case 4: goto L_111541ba;
    case 5: goto L_111542c6;
    case 6: goto L_111543d2;
    case 7: goto L_111544de;
    case 8: goto L_11154d3b;
    case 9: goto L_11154d6a;
    case 10: goto L_11154d96;
    case 11: goto L_11154dc2;
    default: x86_unimpl("switch@0x11153701 out of table"); return;
  }
L_11153708:;
  /* 11153708 mov esi, esp */
  ESI = (ESP);
  /* 1115370a push 0x82 */
  push32((uint32_t)(0x82u));
  /* 1115370f push 0x11183620 */
  push32((uint32_t)(0x11183620u));
  /* 11153714 push 5 */
  push32((uint32_t)(0x5u));
  /* 11153716 push 0x11183470 */
  push32((uint32_t)(0x11183470u));
  /* 1115371b push 0x11183648 */
  push32((uint32_t)(0x11183648u));
  /* 11153720 push 0x11183448 */
  push32((uint32_t)(0x11183448u));
  /* 11153725 call dword ptr [0x1118649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118649c))), 0x1115372bu);
  /* 1115372b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115372e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153730 call 0x11156250 */
  push32(0x11153735u); f_11156250();
  /* 11153735 mov esi, esp */
  ESI = (ESP);
  /* 11153737 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 1115373c push 0x11183620 */
  push32((uint32_t)(0x11183620u));
  /* 11153741 push 5 */
  push32((uint32_t)(0x5u));
  /* 11153743 push 0x11183520 */
  push32((uint32_t)(0x11183520u));
  /* 11153748 push 0x111834a8 */
  push32((uint32_t)(0x111834a8u));
  /* 1115374d push 0x11183440 */
  push32((uint32_t)(0x11183440u));
  /* 11153752 call dword ptr [0x1118649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118649c))), 0x11153758u);
  /* 11153758 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115375b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115375d call 0x11156250 */
  push32(0x11153762u); f_11156250();
  /* 11153762 jmp 0x1115387c */
  goto L_1115387c;
L_11153767:;
  /* 11153767 mov esi, esp */
  ESI = (ESP);
  /* 11153769 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 1115376e push 0x11183620 */
  push32((uint32_t)(0x11183620u));
  /* 11153773 push 5 */
  push32((uint32_t)(0x5u));
  /* 11153775 push 0x11183470 */
  push32((uint32_t)(0x11183470u));
  /* 1115377a push 0x11183648 */
  push32((uint32_t)(0x11183648u));
  /* 1115377f push 0x11183448 */
  push32((uint32_t)(0x11183448u));
  /* 11153784 call dword ptr [0x1118649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118649c))), 0x1115378au);
  /* 1115378a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115378d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115378f call 0x11156250 */
  push32(0x11153794u); f_11156250();
  /* 11153794 mov esi, esp */
  ESI = (ESP);
  /* 11153796 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 1115379b push 0x11183620 */
  push32((uint32_t)(0x11183620u));
  /* 111537a0 push 5 */
  push32((uint32_t)(0x5u));
  /* 111537a2 push 0x11183520 */
  push32((uint32_t)(0x11183520u));
  /* 111537a7 push 0x11183640 */
  push32((uint32_t)(0x11183640u));
  /* 111537ac push 0x11183440 */
  push32((uint32_t)(0x11183440u));
  /* 111537b1 call dword ptr [0x1118649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118649c))), 0x111537b7u);
  /* 111537b7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111537ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111537bc call 0x11156250 */
  push32(0x111537c1u); f_11156250();
  /* 111537c1 jmp 0x1115387c */
  goto L_1115387c;
L_111537c6:;
  /* 111537c6 mov esi, esp */
  ESI = (ESP);
  /* 111537c8 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 111537cd push 0x11183620 */
  push32((uint32_t)(0x11183620u));
  /* 111537d2 push 5 */
  push32((uint32_t)(0x5u));
  /* 111537d4 push 0x11183470 */
  push32((uint32_t)(0x11183470u));
  /* 111537d9 push 0x11183518 */
  push32((uint32_t)(0x11183518u));
  /* 111537de push 0x11183448 */
  push32((uint32_t)(0x11183448u));
  /* 111537e3 call dword ptr [0x1118649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118649c))), 0x111537e9u);
  /* 111537e9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111537ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111537ee call 0x11156250 */
  push32(0x111537f3u); f_11156250();
  /* 111537f3 mov esi, esp */
  ESI = (ESP);
  /* 111537f5 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 111537fa push 0x11183620 */
  push32((uint32_t)(0x11183620u));
  /* 111537ff push 5 */
  push32((uint32_t)(0x5u));
  /* 11153801 push 0x11183520 */
  push32((uint32_t)(0x11183520u));
  /* 11153806 push 0x11183648 */
  push32((uint32_t)(0x11183648u));
  /* 1115380b push 0x11183440 */
  push32((uint32_t)(0x11183440u));
  /* 11153810 call dword ptr [0x1118649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118649c))), 0x11153816u);
  /* 11153816 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153819 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115381b call 0x11156250 */
  push32(0x11153820u); f_11156250();
  /* 11153820 jmp 0x1115387c */
  goto L_1115387c;
L_11153822:;
  /* 11153822 mov esi, esp */
  ESI = (ESP);
  /* 11153824 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11153829 push 0x11183620 */
  push32((uint32_t)(0x11183620u));
  /* 1115382e push 5 */
  push32((uint32_t)(0x5u));
  /* 11153830 push 0x11183470 */
  push32((uint32_t)(0x11183470u));
  /* 11153835 push 0x11183530 */
  push32((uint32_t)(0x11183530u));
  /* 1115383a push 0x11183448 */
  push32((uint32_t)(0x11183448u));
  /* 1115383f call dword ptr [0x1118649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118649c))), 0x11153845u);
  /* 11153845 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153848 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115384a call 0x11156250 */
  push32(0x1115384fu); f_11156250();
  /* 1115384f mov esi, esp */
  ESI = (ESP);
  /* 11153851 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11153856 push 0x11183620 */
  push32((uint32_t)(0x11183620u));
  /* 1115385b push 5 */
  push32((uint32_t)(0x5u));
  /* 1115385d push 0x11183520 */
  push32((uint32_t)(0x11183520u));
  /* 11153862 push 0x11183648 */
  push32((uint32_t)(0x11183648u));
  /* 11153867 push 0x11183440 */
  push32((uint32_t)(0x11183440u));
  /* 1115386c call dword ptr [0x1118649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118649c))), 0x11153872u);
  /* 11153872 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153875 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153877 call 0x11156250 */
  push32(0x1115387cu); f_11156250();
L_1115387c:;
  /* 1115387c mov esi, esp */
  ESI = (ESP);
  /* 1115387e push 0 */
  push32((uint32_t)(0x0u));
  /* 11153880 push 0x11183448 */
  push32((uint32_t)(0x11183448u));
  /* 11153885 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x1115388bu);
  /* 1115388b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115388e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153890 call 0x11156250 */
  push32(0x11153895u); f_11156250();
  /* 11153895 mov esi, esp */
  ESI = (ESP);
  /* 11153897 push 1 */
  push32((uint32_t)(0x1u));
  /* 11153899 push 0x11183440 */
  push32((uint32_t)(0x11183440u));
  /* 1115389e call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x111538a4u);
  /* 111538a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111538a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111538a9 call 0x11156250 */
  push32(0x111538aeu); f_11156250();
  /* 111538ae mov esi, esp */
  ESI = (ESP);
  /* 111538b0 push 0x11183488 */
  push32((uint32_t)(0x11183488u));
  /* 111538b5 push 5 */
  push32((uint32_t)(0x5u));
  /* 111538b7 call dword ptr [0x111864d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864d0))), 0x111538bdu);
  /* 111538bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111538c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111538c2 call 0x11156250 */
  push32(0x111538c7u); f_11156250();
  /* 111538c7 mov esi, esp */
  ESI = (ESP);
  /* 111538c9 push 5 */
  push32((uint32_t)(0x5u));
  /* 111538cb call dword ptr [0x111864d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864d4))), 0x111538d1u);
  /* 111538d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111538d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111538d6 call 0x11156250 */
  push32(0x111538dbu); f_11156250();
  /* 111538db mov esi, esp */
  ESI = (ESP);
  /* 111538dd push 5 */
  push32((uint32_t)(0x5u));
  /* 111538df call dword ptr [0x111864d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864d8))), 0x111538e5u);
  /* 111538e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111538e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111538ea call 0x11156250 */
  push32(0x111538efu); f_11156250();
  /* 111538ef and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111538f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111538f6 je 0x11153964 */
  if (C.zf) goto L_11153964;
  /* 111538f8 mov esi, esp */
  ESI = (ESP);
  /* 111538fa push 0x11183448 */
  push32((uint32_t)(0x11183448u));
  /* 111538ff call dword ptr [0x111864b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b8))), 0x11153905u);
  /* 11153905 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153908 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115390a call 0x11156250 */
  push32(0x1115390fu); f_11156250();
  /* 1115390f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11153911 jne 0x1115392e */
  if (!C.zf) goto L_1115392e;
  /* 11153913 mov esi, esp */
  ESI = (ESP);
  /* 11153915 push 0x11183440 */
  push32((uint32_t)(0x11183440u));
  /* 1115391a call dword ptr [0x111864b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b8))), 0x11153920u);
  /* 11153920 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153923 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153925 call 0x11156250 */
  push32(0x1115392au); f_11156250();
  /* 1115392a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115392c je 0x1115394b */
  if (C.zf) goto L_1115394b;
L_1115392e:;
  /* 1115392e mov esi, esp */
  ESI = (ESP);
  /* 11153930 push 4 */
  push32((uint32_t)(0x4u));
  /* 11153932 call dword ptr [0x111864a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864a8))), 0x11153938u);
  /* 11153938 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115393b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115393d call 0x11156250 */
  push32(0x11153942u); f_11156250();
  /* 11153942 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11153947 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11153949 je 0x11153964 */
  if (C.zf) goto L_11153964;
L_1115394b:;
  /* 1115394b mov esi, esp */
  ESI = (ESP);
  /* 1115394d push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11153952 push 5 */
  push32((uint32_t)(0x5u));
  /* 11153954 call dword ptr [0x1118648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118648c))), 0x1115395au);
  /* 1115395a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115395d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115395f call 0x11156250 */
  push32(0x11153964u); f_11156250();
L_11153964:;
  /* 11153964 mov esi, esp */
  ESI = (ESP);
  /* 11153966 push 5 */
  push32((uint32_t)(0x5u));
  /* 11153968 call dword ptr [0x111864dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864dc))), 0x1115396eu);
  /* 1115396e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153971 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153973 call 0x11156250 */
  push32(0x11153978u); f_11156250();
  /* 11153978 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1115397d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115397f je 0x111539bf */
  if (C.zf) goto L_111539bf;
  /* 11153981 mov esi, esp */
  ESI = (ESP);
  /* 11153983 push 4 */
  push32((uint32_t)(0x4u));
  /* 11153985 call dword ptr [0x111864e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864e0))), 0x1115398bu);
  /* 1115398b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115398e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153990 call 0x11156250 */
  push32(0x11153995u); f_11156250();
  /* 11153995 mov esi, esp */
  ESI = (ESP);
  /* 11153997 push 5 */
  push32((uint32_t)(0x5u));
  /* 11153999 call dword ptr [0x111864e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864e0))), 0x1115399fu);
  /* 1115399f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111539a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111539a4 call 0x11156250 */
  push32(0x111539a9u); f_11156250();
  /* 111539a9 mov esi, esp */
  ESI = (ESP);
  /* 111539ab push 1 */
  push32((uint32_t)(0x1u));
  /* 111539ad push 0xb */
  push32((uint32_t)(0xbu));
  /* 111539af call dword ptr [0x1118646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118646c))), 0x111539b5u);
  /* 111539b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111539b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111539ba call 0x11156250 */
  push32(0x111539bfu); f_11156250();
L_111539bf:;
  /* 111539bf mov esi, esp */
  ESI = (ESP);
  /* 111539c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 111539c3 push 0x11183638 */
  push32((uint32_t)(0x11183638u));
  /* 111539c8 push 5 */
  push32((uint32_t)(0x5u));
  /* 111539ca call dword ptr [0x111864e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864e4))), 0x111539d0u);
  /* 111539d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111539d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111539d5 call 0x11156250 */
  push32(0x111539dau); f_11156250();
  /* 111539da mov esi, esp */
  ESI = (ESP);
  /* 111539dc push 5 */
  push32((uint32_t)(0x5u));
  /* 111539de call dword ptr [0x111864d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864d4))), 0x111539e4u);
  /* 111539e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111539e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111539e9 call 0x11156250 */
  push32(0x111539eeu); f_11156250();
  /* 111539ee mov esi, esp */
  ESI = (ESP);
  /* 111539f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 111539f2 push 0x11183488 */
  push32((uint32_t)(0x11183488u));
  /* 111539f7 push 5 */
  push32((uint32_t)(0x5u));
  /* 111539f9 call dword ptr [0x111864e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864e8))), 0x111539ffu);
  /* 111539ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153a02 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153a04 call 0x11156250 */
  push32(0x11153a09u); f_11156250();
  /* 11153a09 mov esi, esp */
  ESI = (ESP);
  /* 11153a0b push 5 */
  push32((uint32_t)(0x5u));
  /* 11153a0d call dword ptr [0x111864ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864ec))), 0x11153a13u);
  /* 11153a13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153a16 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153a18 call 0x11156250 */
  push32(0x11153a1du); f_11156250();
  /* 11153a1d mov esi, esp */
  ESI = (ESP);
  /* 11153a1f push 0 */
  push32((uint32_t)(0x0u));
  /* 11153a21 push 0x11183638 */
  push32((uint32_t)(0x11183638u));
  /* 11153a26 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x11153a2cu);
  /* 11153a2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153a2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153a31 call 0x11156250 */
  push32(0x11153a36u); f_11156250();
  /* 11153a36 mov esi, esp */
  ESI = (ESP);
  /* 11153a38 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11153a3a call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11153a40u);
  /* 11153a40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153a43 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153a45 call 0x11156250 */
  push32(0x11153a4au); f_11156250();
  /* 11153a4a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11153a4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11153a51 je 0x11153aaa */
  if (C.zf) goto L_11153aaa;
  /* 11153a53 mov esi, esp */
  ESI = (ESP);
  /* 11153a55 push 0x11183488 */
  push32((uint32_t)(0x11183488u));
  /* 11153a5a call dword ptr [0x111864b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b8))), 0x11153a60u);
  /* 11153a60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153a63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153a65 call 0x11156250 */
  push32(0x11153a6au); f_11156250();
  /* 11153a6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11153a6c jne 0x11153aaa */
  if (!C.zf) goto L_11153aaa;
  /* 11153a6e mov esi, esp */
  ESI = (ESP);
  /* 11153a70 push 0 */
  push32((uint32_t)(0x0u));
  /* 11153a72 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11153a74 call dword ptr [0x1118646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118646c))), 0x11153a7au);
  /* 11153a7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153a7d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153a7f call 0x11156250 */
  push32(0x11153a84u); f_11156250();
  /* 11153a84 mov esi, esp */
  ESI = (ESP);
  /* 11153a86 push 0x1117e508 */
  push32((uint32_t)(0x1117e508u));
  /* 11153a8b call dword ptr [0x111864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864ac))), 0x11153a91u);
  /* 11153a91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153a94 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153a96 call 0x11156250 */
  push32(0x11153a9bu); f_11156250();
  /* 11153a9b mov esi, esp */
  ESI = (ESP);
  /* 11153a9d call dword ptr [0x111864f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864f0))), 0x11153aa3u);
  /* 11153aa3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153aa5 call 0x11156250 */
  push32(0x11153aaau); f_11156250();
L_11153aaa:;
  /* 11153aaa mov esi, esp */
  ESI = (ESP);
  /* 11153aac push 1 */
  push32((uint32_t)(0x1u));
  /* 11153aae call dword ptr [0x111864a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864a8))), 0x11153ab4u);
  /* 11153ab4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153ab7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153ab9 call 0x11156250 */
  push32(0x11153abeu); f_11156250();
  /* 11153abe and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11153ac3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11153ac5 je 0x11153b5f */
  if (C.zf) goto L_11153b5f;
  /* 11153acb mov esi, esp */
  ESI = (ESP);
  /* 11153acd push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 11153acf call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11153ad5u);
  /* 11153ad5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153ad8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153ada call 0x11156250 */
  push32(0x11153adfu); f_11156250();
  /* 11153adf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11153ae4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11153ae6 je 0x11153b5f */
  if (C.zf) goto L_11153b5f;
  /* 11153ae8 mov esi, esp */
  ESI = (ESP);
  /* 11153aea push 0 */
  push32((uint32_t)(0x0u));
  /* 11153aec push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 11153aee call dword ptr [0x1118646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118646c))), 0x11153af4u);
  /* 11153af4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153af7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153af9 call 0x11156250 */
  push32(0x11153afeu); f_11156250();
  /* 11153afe mov esi, esp */
  ESI = (ESP);
  /* 11153b00 push 0x1117e4fc */
  push32((uint32_t)(0x1117e4fcu));
  /* 11153b05 call dword ptr [0x111864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864ac))), 0x11153b0bu);
  /* 11153b0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153b0e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153b10 call 0x11156250 */
  push32(0x11153b15u); f_11156250();
  /* 11153b15 mov esi, esp */
  ESI = (ESP);
  /* 11153b17 push 0x53 */
  push32((uint32_t)(0x53u));
  /* 11153b19 call dword ptr [0x11186470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186470))), 0x11153b1fu);
  /* 11153b1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153b22 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153b24 call 0x11156250 */
  push32(0x11153b29u); f_11156250();
  /* 11153b29 mov esi, esp */
  ESI = (ESP);
  /* 11153b2b push 1 */
  push32((uint32_t)(0x1u));
  /* 11153b2d push 1 */
  push32((uint32_t)(0x1u));
  /* 11153b2f push 0x11183550 */
  push32((uint32_t)(0x11183550u));
  /* 11153b34 call dword ptr [0x111864f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864f4))), 0x11153b3au);
  /* 11153b3a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153b3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153b3f call 0x11156250 */
  push32(0x11153b44u); f_11156250();
  /* 11153b44 mov esi, esp */
  ESI = (ESP);
  /* 11153b46 push 2 */
  push32((uint32_t)(0x2u));
  /* 11153b48 push 3 */
  push32((uint32_t)(0x3u));
  /* 11153b4a push 0x11183610 */
  push32((uint32_t)(0x11183610u));
  /* 11153b4f call dword ptr [0x111864f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864f4))), 0x11153b55u);
  /* 11153b55 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153b58 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153b5a call 0x11156250 */
  push32(0x11153b5fu); f_11156250();
L_11153b5f:;
  /* 11153b5f mov esi, esp */
  ESI = (ESP);
  /* 11153b61 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11153b63 call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11153b69u);
  /* 11153b69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153b6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153b6e call 0x11156250 */
  push32(0x11153b73u); f_11156250();
  /* 11153b73 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11153b78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11153b7a je 0x11153c0a */
  if (C.zf) goto L_11153c0a;
  /* 11153b80 mov esi, esp */
  ESI = (ESP);
  /* 11153b82 push 0x11183468 */
  push32((uint32_t)(0x11183468u));
  /* 11153b87 call dword ptr [0x111864b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b8))), 0x11153b8du);
  /* 11153b8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153b90 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153b92 call 0x11156250 */
  push32(0x11153b97u); f_11156250();
  /* 11153b97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11153b99 jne 0x11153c0a */
  if (!C.zf) goto L_11153c0a;
  /* 11153b9b mov esi, esp */
  ESI = (ESP);
  /* 11153b9d push 0 */
  push32((uint32_t)(0x0u));
  /* 11153b9f push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11153ba1 call dword ptr [0x1118646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118646c))), 0x11153ba7u);
  /* 11153ba7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153baa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153bac call 0x11156250 */
  push32(0x11153bb1u); f_11156250();
  /* 11153bb1 mov esi, esp */
  ESI = (ESP);
  /* 11153bb3 push 3 */
  push32((uint32_t)(0x3u));
  /* 11153bb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11153bb7 call dword ptr [0x111864f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864f8))), 0x11153bbdu);
  /* 11153bbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153bc0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153bc2 call 0x11156250 */
  push32(0x11153bc7u); f_11156250();
  /* 11153bc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11153bc9 jle 0x11153be4 */
  if ((C.zf||C.sf!=C.of)) goto L_11153be4;
  /* 11153bcb mov esi, esp */
  ESI = (ESP);
  /* 11153bcd push 0x1117e4f4 */
  push32((uint32_t)(0x1117e4f4u));
  /* 11153bd2 call dword ptr [0x111864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864ac))), 0x11153bd8u);
  /* 11153bd8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153bdb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153bdd call 0x11156250 */
  push32(0x11153be2u); f_11156250();
  /* 11153be2 jmp 0x11153bfb */
  goto L_11153bfb;
L_11153be4:;
  /* 11153be4 mov esi, esp */
  ESI = (ESP);
  /* 11153be6 push 0x1117e4e8 */
  push32((uint32_t)(0x1117e4e8u));
  /* 11153beb call dword ptr [0x111864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864ac))), 0x11153bf1u);
  /* 11153bf1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153bf4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153bf6 call 0x11156250 */
  push32(0x11153bfbu); f_11156250();
L_11153bfb:;
  /* 11153bfb mov esi, esp */
  ESI = (ESP);
  /* 11153bfd call dword ptr [0x111864f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864f0))), 0x11153c03u);
  /* 11153c03 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153c05 call 0x11156250 */
  push32(0x11153c0au); f_11156250();
L_11153c0a:;
  /* 11153c0a mov esi, esp */
  ESI = (ESP);
  /* 11153c0c push 2 */
  push32((uint32_t)(0x2u));
  /* 11153c0e call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11153c14u);
  /* 11153c14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153c17 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153c19 call 0x11156250 */
  push32(0x11153c1eu); f_11156250();
  /* 11153c1e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11153c23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11153c25 jne 0x11153d21 */
  if (!C.zf) goto L_11153d21;
  /* 11153c2b mov esi, esp */
  ESI = (ESP);
  /* 11153c2d push 4 */
  push32((uint32_t)(0x4u));
  /* 11153c2f call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11153c35u);
  /* 11153c35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153c38 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153c3a call 0x11156250 */
  push32(0x11153c3fu); f_11156250();
  /* 11153c3f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11153c44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11153c46 jne 0x11153d21 */
  if (!C.zf) goto L_11153d21;
  /* 11153c4c mov esi, esp */
  ESI = (ESP);
  /* 11153c4e push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11153c50 call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11153c56u);
  /* 11153c56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153c59 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153c5b call 0x11156250 */
  push32(0x11153c60u); f_11156250();
  /* 11153c60 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11153c65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11153c67 jne 0x11153d21 */
  if (!C.zf) goto L_11153d21;
  /* 11153c6d mov esi, esp */
  ESI = (ESP);
  /* 11153c6f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11153c71 call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11153c77u);
  /* 11153c77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153c7a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153c7c call 0x11156250 */
  push32(0x11153c81u); f_11156250();
  /* 11153c81 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11153c86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11153c88 jne 0x11153d21 */
  if (!C.zf) goto L_11153d21;
  /* 11153c8e mov esi, esp */
  ESI = (ESP);
  /* 11153c90 push 7 */
  push32((uint32_t)(0x7u));
  /* 11153c92 call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11153c98u);
  /* 11153c98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153c9b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153c9d call 0x11156250 */
  push32(0x11153ca2u); f_11156250();
  /* 11153ca2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11153ca7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11153ca9 jne 0x11153d21 */
  if (!C.zf) goto L_11153d21;
  /* 11153cab mov esi, esp */
  ESI = (ESP);
  /* 11153cad push 0xf */
  push32((uint32_t)(0xfu));
  /* 11153caf call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11153cb5u);
  /* 11153cb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153cb8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153cba call 0x11156250 */
  push32(0x11153cbfu); f_11156250();
  /* 11153cbf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11153cc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11153cc6 jne 0x11153d21 */
  if (!C.zf) goto L_11153d21;
  /* 11153cc8 mov esi, esp */
  ESI = (ESP);
  /* 11153cca push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11153ccc call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11153cd2u);
  /* 11153cd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153cd5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153cd7 call 0x11156250 */
  push32(0x11153cdcu); f_11156250();
  /* 11153cdc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11153ce1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11153ce3 je 0x11153d21 */
  if (C.zf) goto L_11153d21;
  /* 11153ce5 mov esi, esp */
  ESI = (ESP);
  /* 11153ce7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11153ce9 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11153ceb call dword ptr [0x1118646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118646c))), 0x11153cf1u);
  /* 11153cf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153cf4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153cf6 call 0x11156250 */
  push32(0x11153cfbu); f_11156250();
  /* 11153cfb mov esi, esp */
  ESI = (ESP);
  /* 11153cfd push 0x1117e4e0 */
  push32((uint32_t)(0x1117e4e0u));
  /* 11153d02 call dword ptr [0x111864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864ac))), 0x11153d08u);
  /* 11153d08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153d0b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153d0d call 0x11156250 */
  push32(0x11153d12u); f_11156250();
  /* 11153d12 mov esi, esp */
  ESI = (ESP);
  /* 11153d14 call dword ptr [0x111864fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864fc))), 0x11153d1au);
  /* 11153d1a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153d1c call 0x11156250 */
  push32(0x11153d21u); f_11156250();
L_11153d21:;
  /* 11153d21 mov esi, esp */
  ESI = (ESP);
  /* 11153d23 push 0x111833f8 */
  push32((uint32_t)(0x111833f8u));
  /* 11153d28 push 0x111836a0 */
  push32((uint32_t)(0x111836a0u));
  /* 11153d2d call dword ptr [0x111864b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b4))), 0x11153d33u);
  /* 11153d33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153d36 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153d38 call 0x11156250 */
  push32(0x11153d3du); f_11156250();
  /* 11153d3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11153d3f jle 0x11153dd8 */
  if ((C.zf||C.sf!=C.of)) goto L_11153dd8;
  /* 11153d45 mov esi, esp */
  ESI = (ESP);
  /* 11153d47 push 0 */
  push32((uint32_t)(0x0u));
  /* 11153d49 push 0x111833f8 */
  push32((uint32_t)(0x111833f8u));
  /* 11153d4e call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x11153d54u);
  /* 11153d54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153d57 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153d59 call 0x11156250 */
  push32(0x11153d5eu); f_11156250();
  /* 11153d5e mov esi, esp */
  ESI = (ESP);
  /* 11153d60 push 2 */
  push32((uint32_t)(0x2u));
  /* 11153d62 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11153d64 push 0x111836d0 */
  push32((uint32_t)(0x111836d0u));
  /* 11153d69 push 1 */
  push32((uint32_t)(0x1u));
  /* 11153d6b call dword ptr [0x111864bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864bc))), 0x11153d71u);
  /* 11153d71 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153d74 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153d76 call 0x11156250 */
  push32(0x11153d7bu); f_11156250();
  /* 11153d7b mov esi, esp */
  ESI = (ESP);
  /* 11153d7d push 2 */
  push32((uint32_t)(0x2u));
  /* 11153d7f push 0xfa */
  push32((uint32_t)(0xfau));
  /* 11153d84 push 0x111836c8 */
  push32((uint32_t)(0x111836c8u));
  /* 11153d89 push 1 */
  push32((uint32_t)(0x1u));
  /* 11153d8b call dword ptr [0x111864bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864bc))), 0x11153d91u);
  /* 11153d91 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153d94 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153d96 call 0x11156250 */
  push32(0x11153d9bu); f_11156250();
  /* 11153d9b mov esi, esp */
  ESI = (ESP);
  /* 11153d9d push 2 */
  push32((uint32_t)(0x2u));
  /* 11153d9f push 0xaa */
  push32((uint32_t)(0xaau));
  /* 11153da4 push 0x111836b8 */
  push32((uint32_t)(0x111836b8u));
  /* 11153da9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11153dab call dword ptr [0x111864bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864bc))), 0x11153db1u);
  /* 11153db1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153db4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153db6 call 0x11156250 */
  push32(0x11153dbbu); f_11156250();
  /* 11153dbb mov esi, esp */
  ESI = (ESP);
  /* 11153dbd push 2 */
  push32((uint32_t)(0x2u));
  /* 11153dbf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11153dc1 push 0x111836a0 */
  push32((uint32_t)(0x111836a0u));
  /* 11153dc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11153dc8 call dword ptr [0x111864bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864bc))), 0x11153dceu);
  /* 11153dce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153dd1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153dd3 call 0x11156250 */
  push32(0x11153dd8u); f_11156250();
L_11153dd8:;
  /* 11153dd8 mov esi, esp */
  ESI = (ESP);
  /* 11153dda push 0x111833e8 */
  push32((uint32_t)(0x111833e8u));
  /* 11153ddf push 0x111836d0 */
  push32((uint32_t)(0x111836d0u));
  /* 11153de4 call dword ptr [0x111864b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b4))), 0x11153deau);
  /* 11153dea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153ded cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153def call 0x11156250 */
  push32(0x11153df4u); f_11156250();
  /* 11153df4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11153df6 jle 0x11153e8f */
  if ((C.zf||C.sf!=C.of)) goto L_11153e8f;
  /* 11153dfc mov esi, esp */
  ESI = (ESP);
  /* 11153dfe push 0 */
  push32((uint32_t)(0x0u));
  /* 11153e00 push 0x111833e8 */
  push32((uint32_t)(0x111833e8u));
  /* 11153e05 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x11153e0bu);
  /* 11153e0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153e0e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153e10 call 0x11156250 */
  push32(0x11153e15u); f_11156250();
  /* 11153e15 mov esi, esp */
  ESI = (ESP);
  /* 11153e17 push 2 */
  push32((uint32_t)(0x2u));
  /* 11153e19 push 0xfa */
  push32((uint32_t)(0xfau));
  /* 11153e1e push 0x111836c8 */
  push32((uint32_t)(0x111836c8u));
  /* 11153e23 push 1 */
  push32((uint32_t)(0x1u));
  /* 11153e25 call dword ptr [0x111864bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864bc))), 0x11153e2bu);
  /* 11153e2b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153e2e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153e30 call 0x11156250 */
  push32(0x11153e35u); f_11156250();
  /* 11153e35 mov esi, esp */
  ESI = (ESP);
  /* 11153e37 push 2 */
  push32((uint32_t)(0x2u));
  /* 11153e39 push 0xaa */
  push32((uint32_t)(0xaau));
  /* 11153e3e push 0x111836b8 */
  push32((uint32_t)(0x111836b8u));
  /* 11153e43 push 1 */
  push32((uint32_t)(0x1u));
  /* 11153e45 call dword ptr [0x111864bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864bc))), 0x11153e4bu);
  /* 11153e4b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153e4e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153e50 call 0x11156250 */
  push32(0x11153e55u); f_11156250();
  /* 11153e55 mov esi, esp */
  ESI = (ESP);
  /* 11153e57 push 2 */
  push32((uint32_t)(0x2u));
  /* 11153e59 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11153e5b push 0x111836a0 */
  push32((uint32_t)(0x111836a0u));
  /* 11153e60 push 1 */
  push32((uint32_t)(0x1u));
  /* 11153e62 call dword ptr [0x111864bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864bc))), 0x11153e68u);
  /* 11153e68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153e6b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153e6d call 0x11156250 */
  push32(0x11153e72u); f_11156250();
  /* 11153e72 mov esi, esp */
  ESI = (ESP);
  /* 11153e74 push 2 */
  push32((uint32_t)(0x2u));
  /* 11153e76 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11153e78 push 0x111836d0 */
  push32((uint32_t)(0x111836d0u));
  /* 11153e7d push 1 */
  push32((uint32_t)(0x1u));
  /* 11153e7f call dword ptr [0x111864bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864bc))), 0x11153e85u);
  /* 11153e85 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153e88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153e8a call 0x11156250 */
  push32(0x11153e8fu); f_11156250();
L_11153e8f:;
  /* 11153e8f mov esi, esp */
  ESI = (ESP);
  /* 11153e91 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11153e93 call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11153e99u);
  /* 11153e99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153e9c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153e9e call 0x11156250 */
  push32(0x11153ea3u); f_11156250();
  /* 11153ea3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11153ea8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11153eaa je 0x11153f0c */
  if (C.zf) goto L_11153f0c;
  /* 11153eac mov esi, esp */
  ESI = (ESP);
  /* 11153eae push 0 */
  push32((uint32_t)(0x0u));
  /* 11153eb0 push 0x11183458 */
  push32((uint32_t)(0x11183458u));
  /* 11153eb5 call dword ptr [0x111864c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864c4))), 0x11153ebbu);
  /* 11153ebb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153ebe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153ec0 call 0x11156250 */
  push32(0x11153ec5u); f_11156250();
  /* 11153ec5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11153ec7 jle 0x11153f0c */
  if ((C.zf||C.sf!=C.of)) goto L_11153f0c;
  /* 11153ec9 mov esi, esp */
  ESI = (ESP);
  /* 11153ecb push 0 */
  push32((uint32_t)(0x0u));
  /* 11153ecd push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11153ecf call dword ptr [0x1118646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118646c))), 0x11153ed5u);
  /* 11153ed5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153ed8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153eda call 0x11156250 */
  push32(0x11153edfu); f_11156250();
  /* 11153edf mov esi, esp */
  ESI = (ESP);
  /* 11153ee1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11153ee3 push 0x111836c0 */
  push32((uint32_t)(0x111836c0u));
  /* 11153ee8 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x11153eeeu);
  /* 11153eee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153ef1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153ef3 call 0x11156250 */
  push32(0x11153ef8u); f_11156250();
  /* 11153ef8 mov esi, esp */
  ESI = (ESP);
  /* 11153efa push 1 */
  push32((uint32_t)(0x1u));
  /* 11153efc call dword ptr [0x11186500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186500))), 0x11153f02u);
  /* 11153f02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153f05 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153f07 call 0x11156250 */
  push32(0x11153f0cu); f_11156250();
L_11153f0c:;
  /* 11153f0c mov esi, esp */
  ESI = (ESP);
  /* 11153f0e push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11153f10 call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11153f16u);
  /* 11153f16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153f19 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153f1b call 0x11156250 */
  push32(0x11153f20u); f_11156250();
  /* 11153f20 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11153f25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11153f27 jne 0x11153f89 */
  if (!C.zf) goto L_11153f89;
  /* 11153f29 mov esi, esp */
  ESI = (ESP);
  /* 11153f2b push 0 */
  push32((uint32_t)(0x0u));
  /* 11153f2d push 0x11183458 */
  push32((uint32_t)(0x11183458u));
  /* 11153f32 call dword ptr [0x111864c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864c4))), 0x11153f38u);
  /* 11153f38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153f3b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153f3d call 0x11156250 */
  push32(0x11153f42u); f_11156250();
  /* 11153f42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11153f44 jne 0x11153f89 */
  if (!C.zf) goto L_11153f89;
  /* 11153f46 mov esi, esp */
  ESI = (ESP);
  /* 11153f48 push 1 */
  push32((uint32_t)(0x1u));
  /* 11153f4a push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11153f4c call dword ptr [0x1118646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118646c))), 0x11153f52u);
  /* 11153f52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153f55 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153f57 call 0x11156250 */
  push32(0x11153f5cu); f_11156250();
  /* 11153f5c mov esi, esp */
  ESI = (ESP);
  /* 11153f5e push 0 */
  push32((uint32_t)(0x0u));
  /* 11153f60 push 0x111836c0 */
  push32((uint32_t)(0x111836c0u));
  /* 11153f65 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x11153f6bu);
  /* 11153f6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153f6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153f70 call 0x11156250 */
  push32(0x11153f75u); f_11156250();
  /* 11153f75 mov esi, esp */
  ESI = (ESP);
  /* 11153f77 push 1 */
  push32((uint32_t)(0x1u));
  /* 11153f79 call dword ptr [0x11186504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186504))), 0x11153f7fu);
  /* 11153f7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153f82 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153f84 call 0x11156250 */
  push32(0x11153f89u); f_11156250();
L_11153f89:;
  /* 11153f89 mov esi, esp */
  ESI = (ESP);
  /* 11153f8b push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 11153f8d call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11153f93u);
  /* 11153f93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153f96 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153f98 call 0x11156250 */
  push32(0x11153f9du); f_11156250();
  /* 11153f9d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11153fa2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11153fa4 jne 0x111540fd */
  if (!C.zf) goto L_111540fd;
  /* 11153faa mov esi, esp */
  ESI = (ESP);
  /* 11153fac push 5 */
  push32((uint32_t)(0x5u));
  /* 11153fae call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11153fb4u);
  /* 11153fb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153fb7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153fb9 call 0x11156250 */
  push32(0x11153fbeu); f_11156250();
  /* 11153fbe and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11153fc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11153fc5 je 0x111540fd */
  if (C.zf) goto L_111540fd;
  /* 11153fcb mov esi, esp */
  ESI = (ESP);
  /* 11153fcd push 0x11183468 */
  push32((uint32_t)(0x11183468u));
  /* 11153fd2 push 0x11183550 */
  push32((uint32_t)(0x11183550u));
  /* 11153fd7 call dword ptr [0x111864b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b4))), 0x11153fddu);
  /* 11153fdd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153fe0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11153fe2 call 0x11156250 */
  push32(0x11153fe7u); f_11156250();
  /* 11153fe7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11153fe9 jle 0x111540fd */
  if ((C.zf||C.sf!=C.of)) goto L_111540fd;
  /* 11153fef mov esi, esp */
  ESI = (ESP);
  /* 11153ff1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11153ff3 push 5 */
  push32((uint32_t)(0x5u));
  /* 11153ff5 call dword ptr [0x1118646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118646c))), 0x11153ffbu);
  /* 11153ffb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11153ffe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154000 call 0x11156250 */
  push32(0x11154005u); f_11156250();
  /* 11154005 mov esi, esp */
  ESI = (ESP);
  /* 11154007 push 0x1117e4d8 */
  push32((uint32_t)(0x1117e4d8u));
  /* 1115400c call dword ptr [0x111864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864ac))), 0x11154012u);
  /* 11154012 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154015 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154017 call 0x11156250 */
  push32(0x1115401cu); f_11156250();
  /* 1115401c mov esi, esp */
  ESI = (ESP);
  /* 1115401e push 0x1117e4d0 */
  push32((uint32_t)(0x1117e4d0u));
  /* 11154023 call dword ptr [0x111864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864ac))), 0x11154029u);
  /* 11154029 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115402c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115402e call 0x11156250 */
  push32(0x11154033u); f_11156250();
  /* 11154033 mov esi, esp */
  ESI = (ESP);
  /* 11154035 push 0x53 */
  push32((uint32_t)(0x53u));
  /* 11154037 call dword ptr [0x11186474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186474))), 0x1115403du);
  /* 1115403d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154040 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154042 call 0x11156250 */
  push32(0x11154047u); f_11156250();
  /* 11154047 mov esi, esp */
  ESI = (ESP);
  /* 11154049 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 1115404b call dword ptr [0x11186470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186470))), 0x11154051u);
  /* 11154051 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154054 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154056 call 0x11156250 */
  push32(0x1115405bu); f_11156250();
  /* 1115405b mov esi, esp */
  ESI = (ESP);
  /* 1115405d push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 1115405f call dword ptr [0x11186470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186470))), 0x11154065u);
  /* 11154065 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154068 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115406a call 0x11156250 */
  push32(0x1115406fu); f_11156250();
  /* 1115406f mov esi, esp */
  ESI = (ESP);
  /* 11154071 push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 11154073 call dword ptr [0x11186470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186470))), 0x11154079u);
  /* 11154079 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115407c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115407e call 0x11156250 */
  push32(0x11154083u); f_11156250();
  /* 11154083 mov esi, esp */
  ESI = (ESP);
  /* 11154085 push 0 */
  push32((uint32_t)(0x0u));
  /* 11154087 push 0x11183668 */
  push32((uint32_t)(0x11183668u));
  /* 1115408c call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x11154092u);
  /* 11154092 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154095 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154097 call 0x11156250 */
  push32(0x1115409cu); f_11156250();
  /* 1115409c mov esi, esp */
  ESI = (ESP);
  /* 1115409e push 1 */
  push32((uint32_t)(0x1u));
  /* 111540a0 push 0x11183660 */
  push32((uint32_t)(0x11183660u));
  /* 111540a5 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x111540abu);
  /* 111540ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111540ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111540b0 call 0x11156250 */
  push32(0x111540b5u); f_11156250();
  /* 111540b5 mov esi, esp */
  ESI = (ESP);
  /* 111540b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 111540b9 push 0x111834d0 */
  push32((uint32_t)(0x111834d0u));
  /* 111540be call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x111540c4u);
  /* 111540c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111540c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111540c9 call 0x11156250 */
  push32(0x111540ceu); f_11156250();
  /* 111540ce mov esi, esp */
  ESI = (ESP);
  /* 111540d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 111540d2 push 0x11183718 */
  push32((uint32_t)(0x11183718u));
  /* 111540d7 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x111540ddu);
  /* 111540dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111540e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111540e2 call 0x11156250 */
  push32(0x111540e7u); f_11156250();
  /* 111540e7 mov esi, esp */
  ESI = (ESP);
  /* 111540e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 111540eb push 1 */
  push32((uint32_t)(0x1u));
  /* 111540ed call dword ptr [0x111864b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b0))), 0x111540f3u);
  /* 111540f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111540f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111540f8 call 0x11156250 */
  push32(0x111540fdu); f_11156250();
L_111540fd:;
  /* 111540fd mov esi, esp */
  ESI = (ESP);
  /* 111540ff push 5 */
  push32((uint32_t)(0x5u));
  /* 11154101 call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11154107u);
  /* 11154107 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115410a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115410c call 0x11156250 */
  push32(0x11154111u); f_11156250();
  /* 11154111 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11154116 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11154118 jne 0x11154601 */
  if (!C.zf) goto L_11154601;
  /* 1115411e mov esi, esp */
  ESI = (ESP);
  /* 11154120 push 7 */
  push32((uint32_t)(0x7u));
  /* 11154122 call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11154128u);
  /* 11154128 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115412b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115412d call 0x11156250 */
  push32(0x11154132u); f_11156250();
  /* 11154132 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11154137 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11154139 je 0x11154601 */
  if (C.zf) goto L_11154601;
  /* 1115413f mov esi, esp */
  ESI = (ESP);
  /* 11154141 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11154143 call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11154149u);
  /* 11154149 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115414c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115414e call 0x11156250 */
  push32(0x11154153u); f_11156250();
  /* 11154153 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11154158 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115415a je 0x11154601 */
  if (C.zf) goto L_11154601;
  /* 11154160 mov esi, esp */
  ESI = (ESP);
  /* 11154162 push 0 */
  push32((uint32_t)(0x0u));
  /* 11154164 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11154166 call dword ptr [0x1118646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118646c))), 0x1115416cu);
  /* 1115416c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115416f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154171 call 0x11156250 */
  push32(0x11154176u); f_11156250();
  /* 11154176 mov esi, esp */
  ESI = (ESP);
  /* 11154178 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 1115417d push 6 */
  push32((uint32_t)(0x6u));
  /* 1115417f call dword ptr [0x1118648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118648c))), 0x11154185u);
  /* 11154185 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154188 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115418a call 0x11156250 */
  push32(0x1115418fu); f_11156250();
  /* 1115418f mov esi, esp */
  ESI = (ESP);
  /* 11154191 push 0 */
  push32((uint32_t)(0x0u));
  /* 11154193 call dword ptr [0x11186490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186490))), 0x11154199u);
  /* 11154199 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115419c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115419e call 0x11156250 */
  push32(0x111541a3u); f_11156250();
  /* 111541a3 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 111541a6 cmp dword ptr [ebp - 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111541aa ja 0x111545e5 */
  if ((!C.cf&&!C.zf)) goto L_111545e5;
  /* 111541b0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111541b3 jmp dword ptr [edx*4 + 0x1115549f] */
  switch (EDX) {
    case 0: goto L_111541ba;
    case 1: goto L_111542c6;
    case 2: goto L_111543d2;
    case 3: goto L_111544de;
    case 4: goto L_11154d3b;
    case 5: goto L_11154d6a;
    case 6: goto L_11154d96;
    case 7: goto L_11154dc2;
    default: x86_unimpl("switch@0x111541b3 out of table"); return;
  }
L_111541ba:;
  /* 111541ba mov esi, esp */
  ESI = (ESP);
  /* 111541bc push 0x11183548 */
  push32((uint32_t)(0x11183548u));
  /* 111541c1 call dword ptr [0x111864b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b8))), 0x111541c7u);
  /* 111541c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111541ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111541cc call 0x11156250 */
  push32(0x111541d1u); f_11156250();
  /* 111541d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111541d3 jne 0x11154237 */
  if (!C.zf) goto L_11154237;
  /* 111541d5 mov esi, esp */
  ESI = (ESP);
  /* 111541d7 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 111541d9 push 0x11183628 */
  push32((uint32_t)(0x11183628u));
  /* 111541de push 5 */
  push32((uint32_t)(0x5u));
  /* 111541e0 push 0x11183470 */
  push32((uint32_t)(0x11183470u));
  /* 111541e5 push 0x11183640 */
  push32((uint32_t)(0x11183640u));
  /* 111541ea push 0x11183410 */
  push32((uint32_t)(0x11183410u));
  /* 111541ef call dword ptr [0x1118649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118649c))), 0x111541f5u);
  /* 111541f5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111541f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111541fa call 0x11156250 */
  push32(0x111541ffu); f_11156250();
  /* 111541ff mov esi, esp */
  ESI = (ESP);
  /* 11154201 push 0 */
  push32((uint32_t)(0x0u));
  /* 11154203 push 0x11183410 */
  push32((uint32_t)(0x11183410u));
  /* 11154208 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x1115420eu);
  /* 1115420e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154211 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154213 call 0x11156250 */
  push32(0x11154218u); f_11156250();
  /* 11154218 mov esi, esp */
  ESI = (ESP);
  /* 1115421a push 0 */
  push32((uint32_t)(0x0u));
  /* 1115421c push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1115421e push 0x11183710 */
  push32((uint32_t)(0x11183710u));
  /* 11154223 push 5 */
  push32((uint32_t)(0x5u));
  /* 11154225 call dword ptr [0x11186508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186508))), 0x1115422bu);
  /* 1115422b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115422e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154230 call 0x11156250 */
  push32(0x11154235u); f_11156250();
  /* 11154235 jmp 0x11154297 */
  goto L_11154297;
L_11154237:;
  /* 11154237 mov esi, esp */
  ESI = (ESP);
  /* 11154239 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1115423b push 0x11183628 */
  push32((uint32_t)(0x11183628u));
  /* 11154240 push 5 */
  push32((uint32_t)(0x5u));
  /* 11154242 push 0x11183470 */
  push32((uint32_t)(0x11183470u));
  /* 11154247 push 0x111834a8 */
  push32((uint32_t)(0x111834a8u));
  /* 1115424c push 0x11183410 */
  push32((uint32_t)(0x11183410u));
  /* 11154251 call dword ptr [0x1118649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118649c))), 0x11154257u);
  /* 11154257 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115425a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115425c call 0x11156250 */
  push32(0x11154261u); f_11156250();
  /* 11154261 mov esi, esp */
  ESI = (ESP);
  /* 11154263 push 0 */
  push32((uint32_t)(0x0u));
  /* 11154265 push 0x11183410 */
  push32((uint32_t)(0x11183410u));
  /* 1115426a call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x11154270u);
  /* 11154270 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154273 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154275 call 0x11156250 */
  push32(0x1115427au); f_11156250();
  /* 1115427a mov esi, esp */
  ESI = (ESP);
  /* 1115427c push 0 */
  push32((uint32_t)(0x0u));
  /* 1115427e push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11154280 push 0x11183708 */
  push32((uint32_t)(0x11183708u));
  /* 11154285 push 5 */
  push32((uint32_t)(0x5u));
  /* 11154287 call dword ptr [0x11186508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186508))), 0x1115428du);
  /* 1115428d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154290 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154292 call 0x11156250 */
  push32(0x11154297u); f_11156250();
L_11154297:;
  /* 11154297 mov esi, esp */
  ESI = (ESP);
  /* 11154299 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1115429b push 0x11183628 */
  push32((uint32_t)(0x11183628u));
  /* 111542a0 push 5 */
  push32((uint32_t)(0x5u));
  /* 111542a2 push 0x11183520 */
  push32((uint32_t)(0x11183520u));
  /* 111542a7 push 0x11183648 */
  push32((uint32_t)(0x11183648u));
  /* 111542ac push 0x11183408 */
  push32((uint32_t)(0x11183408u));
  /* 111542b1 call dword ptr [0x1118649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118649c))), 0x111542b7u);
  /* 111542b7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111542ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111542bc call 0x11156250 */
  push32(0x111542c1u); f_11156250();
  /* 111542c1 jmp 0x111545e5 */
  goto L_111545e5;
L_111542c6:;
  /* 111542c6 mov esi, esp */
  ESI = (ESP);
  /* 111542c8 push 0x11183548 */
  push32((uint32_t)(0x11183548u));
  /* 111542cd call dword ptr [0x111864b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b8))), 0x111542d3u);
  /* 111542d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111542d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111542d8 call 0x11156250 */
  push32(0x111542ddu); f_11156250();
  /* 111542dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111542df jne 0x11154343 */
  if (!C.zf) goto L_11154343;
  /* 111542e1 mov esi, esp */
  ESI = (ESP);
  /* 111542e3 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 111542e5 push 0x11183628 */
  push32((uint32_t)(0x11183628u));
  /* 111542ea push 5 */
  push32((uint32_t)(0x5u));
  /* 111542ec push 0x11183470 */
  push32((uint32_t)(0x11183470u));
  /* 111542f1 push 0x11183648 */
  push32((uint32_t)(0x11183648u));
  /* 111542f6 push 0x11183410 */
  push32((uint32_t)(0x11183410u));
  /* 111542fb call dword ptr [0x1118649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118649c))), 0x11154301u);
  /* 11154301 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154304 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154306 call 0x11156250 */
  push32(0x1115430bu); f_11156250();
  /* 1115430b mov esi, esp */
  ESI = (ESP);
  /* 1115430d push 0 */
  push32((uint32_t)(0x0u));
  /* 1115430f push 0x11183410 */
  push32((uint32_t)(0x11183410u));
  /* 11154314 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x1115431au);
  /* 1115431a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115431d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115431f call 0x11156250 */
  push32(0x11154324u); f_11156250();
  /* 11154324 mov esi, esp */
  ESI = (ESP);
  /* 11154326 push 0 */
  push32((uint32_t)(0x0u));
  /* 11154328 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1115432a push 0x11183710 */
  push32((uint32_t)(0x11183710u));
  /* 1115432f push 5 */
  push32((uint32_t)(0x5u));
  /* 11154331 call dword ptr [0x11186508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186508))), 0x11154337u);
  /* 11154337 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115433a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115433c call 0x11156250 */
  push32(0x11154341u); f_11156250();
  /* 11154341 jmp 0x111543a3 */
  goto L_111543a3;
L_11154343:;
  /* 11154343 mov esi, esp */
  ESI = (ESP);
  /* 11154345 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11154347 push 0x11183628 */
  push32((uint32_t)(0x11183628u));
  /* 1115434c push 5 */
  push32((uint32_t)(0x5u));
  /* 1115434e push 0x11183470 */
  push32((uint32_t)(0x11183470u));
  /* 11154353 push 0x11183640 */
  push32((uint32_t)(0x11183640u));
  /* 11154358 push 0x11183410 */
  push32((uint32_t)(0x11183410u));
  /* 1115435d call dword ptr [0x1118649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118649c))), 0x11154363u);
  /* 11154363 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154366 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154368 call 0x11156250 */
  push32(0x1115436du); f_11156250();
  /* 1115436d mov esi, esp */
  ESI = (ESP);
  /* 1115436f push 0 */
  push32((uint32_t)(0x0u));
  /* 11154371 push 0x11183410 */
  push32((uint32_t)(0x11183410u));
  /* 11154376 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x1115437cu);
  /* 1115437c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115437f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154381 call 0x11156250 */
  push32(0x11154386u); f_11156250();
  /* 11154386 mov esi, esp */
  ESI = (ESP);
  /* 11154388 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115438a push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1115438c push 0x11183708 */
  push32((uint32_t)(0x11183708u));
  /* 11154391 push 5 */
  push32((uint32_t)(0x5u));
  /* 11154393 call dword ptr [0x11186508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186508))), 0x11154399u);
  /* 11154399 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115439c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115439e call 0x11156250 */
  push32(0x111543a3u); f_11156250();
L_111543a3:;
  /* 111543a3 mov esi, esp */
  ESI = (ESP);
  /* 111543a5 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 111543a7 push 0x11183628 */
  push32((uint32_t)(0x11183628u));
  /* 111543ac push 5 */
  push32((uint32_t)(0x5u));
  /* 111543ae push 0x11183520 */
  push32((uint32_t)(0x11183520u));
  /* 111543b3 push 0x11183530 */
  push32((uint32_t)(0x11183530u));
  /* 111543b8 push 0x11183408 */
  push32((uint32_t)(0x11183408u));
  /* 111543bd call dword ptr [0x1118649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118649c))), 0x111543c3u);
  /* 111543c3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111543c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111543c8 call 0x11156250 */
  push32(0x111543cdu); f_11156250();
  /* 111543cd jmp 0x111545e5 */
  goto L_111545e5;
L_111543d2:;
  /* 111543d2 mov esi, esp */
  ESI = (ESP);
  /* 111543d4 push 0x11183548 */
  push32((uint32_t)(0x11183548u));
  /* 111543d9 call dword ptr [0x111864b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b8))), 0x111543dfu);
  /* 111543df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111543e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111543e4 call 0x11156250 */
  push32(0x111543e9u); f_11156250();
  /* 111543e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111543eb jne 0x1115444f */
  if (!C.zf) goto L_1115444f;
  /* 111543ed mov esi, esp */
  ESI = (ESP);
  /* 111543ef push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 111543f1 push 0x11183628 */
  push32((uint32_t)(0x11183628u));
  /* 111543f6 push 5 */
  push32((uint32_t)(0x5u));
  /* 111543f8 push 0x11183470 */
  push32((uint32_t)(0x11183470u));
  /* 111543fd push 0x11183518 */
  push32((uint32_t)(0x11183518u));
  /* 11154402 push 0x11183410 */
  push32((uint32_t)(0x11183410u));
  /* 11154407 call dword ptr [0x1118649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118649c))), 0x1115440du);
  /* 1115440d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154410 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154412 call 0x11156250 */
  push32(0x11154417u); f_11156250();
  /* 11154417 mov esi, esp */
  ESI = (ESP);
  /* 11154419 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115441b push 0x11183410 */
  push32((uint32_t)(0x11183410u));
  /* 11154420 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x11154426u);
  /* 11154426 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154429 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115442b call 0x11156250 */
  push32(0x11154430u); f_11156250();
  /* 11154430 mov esi, esp */
  ESI = (ESP);
  /* 11154432 push 0 */
  push32((uint32_t)(0x0u));
  /* 11154434 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11154436 push 0x11183710 */
  push32((uint32_t)(0x11183710u));
  /* 1115443b push 5 */
  push32((uint32_t)(0x5u));
  /* 1115443d call dword ptr [0x11186508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186508))), 0x11154443u);
  /* 11154443 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154446 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154448 call 0x11156250 */
  push32(0x1115444du); f_11156250();
  /* 1115444d jmp 0x111544af */
  goto L_111544af;
L_1115444f:;
  /* 1115444f mov esi, esp */
  ESI = (ESP);
  /* 11154451 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11154453 push 0x11183628 */
  push32((uint32_t)(0x11183628u));
  /* 11154458 push 5 */
  push32((uint32_t)(0x5u));
  /* 1115445a push 0x11183470 */
  push32((uint32_t)(0x11183470u));
  /* 1115445f push 0x11183648 */
  push32((uint32_t)(0x11183648u));
  /* 11154464 push 0x11183410 */
  push32((uint32_t)(0x11183410u));
  /* 11154469 call dword ptr [0x1118649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118649c))), 0x1115446fu);
  /* 1115446f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154472 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154474 call 0x11156250 */
  push32(0x11154479u); f_11156250();
  /* 11154479 mov esi, esp */
  ESI = (ESP);
  /* 1115447b push 0 */
  push32((uint32_t)(0x0u));
  /* 1115447d push 0x11183410 */
  push32((uint32_t)(0x11183410u));
  /* 11154482 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x11154488u);
  /* 11154488 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115448b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115448d call 0x11156250 */
  push32(0x11154492u); f_11156250();
  /* 11154492 mov esi, esp */
  ESI = (ESP);
  /* 11154494 push 0 */
  push32((uint32_t)(0x0u));
  /* 11154496 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11154498 push 0x11183708 */
  push32((uint32_t)(0x11183708u));
  /* 1115449d push 5 */
  push32((uint32_t)(0x5u));
  /* 1115449f call dword ptr [0x11186508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186508))), 0x111544a5u);
  /* 111544a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111544a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111544aa call 0x11156250 */
  push32(0x111544afu); f_11156250();
L_111544af:;
  /* 111544af mov esi, esp */
  ESI = (ESP);
  /* 111544b1 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 111544b3 push 0x11183628 */
  push32((uint32_t)(0x11183628u));
  /* 111544b8 push 5 */
  push32((uint32_t)(0x5u));
  /* 111544ba push 0x11183520 */
  push32((uint32_t)(0x11183520u));
  /* 111544bf push 0x11183538 */
  push32((uint32_t)(0x11183538u));
  /* 111544c4 push 0x11183408 */
  push32((uint32_t)(0x11183408u));
  /* 111544c9 call dword ptr [0x1118649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118649c))), 0x111544cfu);
  /* 111544cf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111544d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111544d4 call 0x11156250 */
  push32(0x111544d9u); f_11156250();
  /* 111544d9 jmp 0x111545e5 */
  goto L_111545e5;
L_111544de:;
  /* 111544de mov esi, esp */
  ESI = (ESP);
  /* 111544e0 push 0x11183548 */
  push32((uint32_t)(0x11183548u));
  /* 111544e5 call dword ptr [0x111864b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b8))), 0x111544ebu);
  /* 111544eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111544ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111544f0 call 0x11156250 */
  push32(0x111544f5u); f_11156250();
  /* 111544f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111544f7 jne 0x1115455b */
  if (!C.zf) goto L_1115455b;
  /* 111544f9 mov esi, esp */
  ESI = (ESP);
  /* 111544fb push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 111544fd push 0x11183628 */
  push32((uint32_t)(0x11183628u));
  /* 11154502 push 5 */
  push32((uint32_t)(0x5u));
  /* 11154504 push 0x11183470 */
  push32((uint32_t)(0x11183470u));
  /* 11154509 push 0x11183530 */
  push32((uint32_t)(0x11183530u));
  /* 1115450e push 0x11183410 */
  push32((uint32_t)(0x11183410u));
  /* 11154513 call dword ptr [0x1118649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118649c))), 0x11154519u);
  /* 11154519 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115451c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115451e call 0x11156250 */
  push32(0x11154523u); f_11156250();
  /* 11154523 mov esi, esp */
  ESI = (ESP);
  /* 11154525 push 0 */
  push32((uint32_t)(0x0u));
  /* 11154527 push 0x11183410 */
  push32((uint32_t)(0x11183410u));
  /* 1115452c call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x11154532u);
  /* 11154532 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154535 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154537 call 0x11156250 */
  push32(0x1115453cu); f_11156250();
  /* 1115453c mov esi, esp */
  ESI = (ESP);
  /* 1115453e push 0 */
  push32((uint32_t)(0x0u));
  /* 11154540 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11154542 push 0x11183710 */
  push32((uint32_t)(0x11183710u));
  /* 11154547 push 5 */
  push32((uint32_t)(0x5u));
  /* 11154549 call dword ptr [0x11186508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186508))), 0x1115454fu);
  /* 1115454f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154552 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154554 call 0x11156250 */
  push32(0x11154559u); f_11156250();
  /* 11154559 jmp 0x111545bb */
  goto L_111545bb;
L_1115455b:;
  /* 1115455b mov esi, esp */
  ESI = (ESP);
  /* 1115455d push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1115455f push 0x11183628 */
  push32((uint32_t)(0x11183628u));
  /* 11154564 push 5 */
  push32((uint32_t)(0x5u));
  /* 11154566 push 0x11183470 */
  push32((uint32_t)(0x11183470u));
  /* 1115456b push 0x11183648 */
  push32((uint32_t)(0x11183648u));
  /* 11154570 push 0x11183410 */
  push32((uint32_t)(0x11183410u));
  /* 11154575 call dword ptr [0x1118649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118649c))), 0x1115457bu);
  /* 1115457b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115457e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154580 call 0x11156250 */
  push32(0x11154585u); f_11156250();
  /* 11154585 mov esi, esp */
  ESI = (ESP);
  /* 11154587 push 0 */
  push32((uint32_t)(0x0u));
  /* 11154589 push 0x11183410 */
  push32((uint32_t)(0x11183410u));
  /* 1115458e call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x11154594u);
  /* 11154594 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154597 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154599 call 0x11156250 */
  push32(0x1115459eu); f_11156250();
  /* 1115459e mov esi, esp */
  ESI = (ESP);
  /* 111545a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 111545a2 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 111545a4 push 0x11183708 */
  push32((uint32_t)(0x11183708u));
  /* 111545a9 push 5 */
  push32((uint32_t)(0x5u));
  /* 111545ab call dword ptr [0x11186508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186508))), 0x111545b1u);
  /* 111545b1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111545b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111545b6 call 0x11156250 */
  push32(0x111545bbu); f_11156250();
L_111545bb:;
  /* 111545bb mov esi, esp */
  ESI = (ESP);
  /* 111545bd push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 111545bf push 0x11183628 */
  push32((uint32_t)(0x11183628u));
  /* 111545c4 push 5 */
  push32((uint32_t)(0x5u));
  /* 111545c6 push 0x11183520 */
  push32((uint32_t)(0x11183520u));
  /* 111545cb push 0x11183540 */
  push32((uint32_t)(0x11183540u));
  /* 111545d0 push 0x11183408 */
  push32((uint32_t)(0x11183408u));
  /* 111545d5 call dword ptr [0x1118649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118649c))), 0x111545dbu);
  /* 111545db add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111545de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111545e0 call 0x11156250 */
  push32(0x111545e5u); f_11156250();
L_111545e5:;
  /* 111545e5 mov esi, esp */
  ESI = (ESP);
  /* 111545e7 push 0x11183428 */
  push32((uint32_t)(0x11183428u));
  /* 111545ec push 0x11183408 */
  push32((uint32_t)(0x11183408u));
  /* 111545f1 call dword ptr [0x1118650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118650c))), 0x111545f7u);
  /* 111545f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111545fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111545fc call 0x11156250 */
  push32(0x11154601u); f_11156250();
L_11154601:;
  /* 11154601 mov esi, esp */
  ESI = (ESP);
  /* 11154603 push 0x11183548 */
  push32((uint32_t)(0x11183548u));
  /* 11154608 call dword ptr [0x111864b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b8))), 0x1115460eu);
  /* 1115460e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154611 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154613 call 0x11156250 */
  push32(0x11154618u); f_11156250();
  /* 11154618 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115461a jle 0x11154650 */
  if ((C.zf||C.sf!=C.of)) goto L_11154650;
  /* 1115461c mov esi, esp */
  ESI = (ESP);
  /* 1115461e push 0 */
  push32((uint32_t)(0x0u));
  /* 11154620 push 0x11183428 */
  push32((uint32_t)(0x11183428u));
  /* 11154625 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x1115462bu);
  /* 1115462b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115462e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154630 call 0x11156250 */
  push32(0x11154635u); f_11156250();
  /* 11154635 mov esi, esp */
  ESI = (ESP);
  /* 11154637 push 0x11183548 */
  push32((uint32_t)(0x11183548u));
  /* 1115463c push 5 */
  push32((uint32_t)(0x5u));
  /* 1115463e call dword ptr [0x111864d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864d0))), 0x11154644u);
  /* 11154644 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154647 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154649 call 0x11156250 */
  push32(0x1115464eu); f_11156250();
  /* 1115464e jmp 0x11154682 */
  goto L_11154682;
L_11154650:;
  /* 11154650 mov esi, esp */
  ESI = (ESP);
  /* 11154652 push 0 */
  push32((uint32_t)(0x0u));
  /* 11154654 push 0x11183428 */
  push32((uint32_t)(0x11183428u));
  /* 11154659 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x1115465fu);
  /* 1115465f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154662 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154664 call 0x11156250 */
  push32(0x11154669u); f_11156250();
  /* 11154669 mov esi, esp */
  ESI = (ESP);
  /* 1115466b push 0x11183490 */
  push32((uint32_t)(0x11183490u));
  /* 11154670 push 5 */
  push32((uint32_t)(0x5u));
  /* 11154672 call dword ptr [0x111864d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864d0))), 0x11154678u);
  /* 11154678 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115467b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115467d call 0x11156250 */
  push32(0x11154682u); f_11156250();
L_11154682:;
  /* 11154682 mov esi, esp */
  ESI = (ESP);
  /* 11154684 push 5 */
  push32((uint32_t)(0x5u));
  /* 11154686 call dword ptr [0x111864d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864d4))), 0x1115468cu);
  /* 1115468c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115468f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154691 call 0x11156250 */
  push32(0x11154696u); f_11156250();
  /* 11154696 mov esi, esp */
  ESI = (ESP);
  /* 11154698 push 5 */
  push32((uint32_t)(0x5u));
  /* 1115469a call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x111546a0u);
  /* 111546a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111546a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111546a5 call 0x11156250 */
  push32(0x111546aau); f_11156250();
  /* 111546aa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111546af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111546b1 jne 0x11154740 */
  if (!C.zf) goto L_11154740;
  /* 111546b7 mov esi, esp */
  ESI = (ESP);
  /* 111546b9 push 7 */
  push32((uint32_t)(0x7u));
  /* 111546bb call dword ptr [0x111864d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864d8))), 0x111546c1u);
  /* 111546c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111546c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111546c6 call 0x11156250 */
  push32(0x111546cbu); f_11156250();
  /* 111546cb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111546d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111546d2 je 0x11154740 */
  if (C.zf) goto L_11154740;
  /* 111546d4 mov esi, esp */
  ESI = (ESP);
  /* 111546d6 push 0x11183410 */
  push32((uint32_t)(0x11183410u));
  /* 111546db call dword ptr [0x111864b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b8))), 0x111546e1u);
  /* 111546e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111546e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111546e6 call 0x11156250 */
  push32(0x111546ebu); f_11156250();
  /* 111546eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111546ed jne 0x1115470a */
  if (!C.zf) goto L_1115470a;
  /* 111546ef mov esi, esp */
  ESI = (ESP);
  /* 111546f1 push 0x11183428 */
  push32((uint32_t)(0x11183428u));
  /* 111546f6 call dword ptr [0x111864b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b8))), 0x111546fcu);
  /* 111546fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111546ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154701 call 0x11156250 */
  push32(0x11154706u); f_11156250();
  /* 11154706 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11154708 je 0x11154727 */
  if (C.zf) goto L_11154727;
L_1115470a:;
  /* 1115470a mov esi, esp */
  ESI = (ESP);
  /* 1115470c push 6 */
  push32((uint32_t)(0x6u));
  /* 1115470e call dword ptr [0x111864a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864a8))), 0x11154714u);
  /* 11154714 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154717 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154719 call 0x11156250 */
  push32(0x1115471eu); f_11156250();
  /* 1115471e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11154723 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11154725 je 0x11154740 */
  if (C.zf) goto L_11154740;
L_11154727:;
  /* 11154727 mov esi, esp */
  ESI = (ESP);
  /* 11154729 push 0x2bc */
  push32((uint32_t)(0x2bcu));
  /* 1115472e push 7 */
  push32((uint32_t)(0x7u));
  /* 11154730 call dword ptr [0x1118648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118648c))), 0x11154736u);
  /* 11154736 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154739 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115473b call 0x11156250 */
  push32(0x11154740u); f_11156250();
L_11154740:;
  /* 11154740 mov esi, esp */
  ESI = (ESP);
  /* 11154742 push 7 */
  push32((uint32_t)(0x7u));
  /* 11154744 call dword ptr [0x111864dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864dc))), 0x1115474au);
  /* 1115474a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115474d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115474f call 0x11156250 */
  push32(0x11154754u); f_11156250();
  /* 11154754 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11154759 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115475b je 0x1115479b */
  if (C.zf) goto L_1115479b;
  /* 1115475d mov esi, esp */
  ESI = (ESP);
  /* 1115475f push 7 */
  push32((uint32_t)(0x7u));
  /* 11154761 call dword ptr [0x111864e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864e0))), 0x11154767u);
  /* 11154767 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115476a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115476c call 0x11156250 */
  push32(0x11154771u); f_11156250();
  /* 11154771 mov esi, esp */
  ESI = (ESP);
  /* 11154773 push 6 */
  push32((uint32_t)(0x6u));
  /* 11154775 call dword ptr [0x111864e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864e0))), 0x1115477bu);
  /* 1115477b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115477e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154780 call 0x11156250 */
  push32(0x11154785u); f_11156250();
  /* 11154785 mov esi, esp */
  ESI = (ESP);
  /* 11154787 push 1 */
  push32((uint32_t)(0x1u));
  /* 11154789 push 0xd */
  push32((uint32_t)(0xdu));
  /* 1115478b call dword ptr [0x1118646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118646c))), 0x11154791u);
  /* 11154791 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154794 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154796 call 0x11156250 */
  push32(0x1115479bu); f_11156250();
L_1115479b:;
  /* 1115479b mov esi, esp */
  ESI = (ESP);
  /* 1115479d push 0 */
  push32((uint32_t)(0x0u));
  /* 1115479f push 0x11183638 */
  push32((uint32_t)(0x11183638u));
  /* 111547a4 push 5 */
  push32((uint32_t)(0x5u));
  /* 111547a6 call dword ptr [0x111864e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864e4))), 0x111547acu);
  /* 111547ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111547af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111547b1 call 0x11156250 */
  push32(0x111547b6u); f_11156250();
  /* 111547b6 mov esi, esp */
  ESI = (ESP);
  /* 111547b8 push 5 */
  push32((uint32_t)(0x5u));
  /* 111547ba call dword ptr [0x111864d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864d4))), 0x111547c0u);
  /* 111547c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111547c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111547c5 call 0x11156250 */
  push32(0x111547cau); f_11156250();
  /* 111547ca mov esi, esp */
  ESI = (ESP);
  /* 111547cc push 0 */
  push32((uint32_t)(0x0u));
  /* 111547ce push 0x11183668 */
  push32((uint32_t)(0x11183668u));
  /* 111547d3 push 5 */
  push32((uint32_t)(0x5u));
  /* 111547d5 call dword ptr [0x111864e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864e8))), 0x111547dbu);
  /* 111547db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111547de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111547e0 call 0x11156250 */
  push32(0x111547e5u); f_11156250();
  /* 111547e5 mov esi, esp */
  ESI = (ESP);
  /* 111547e7 push 5 */
  push32((uint32_t)(0x5u));
  /* 111547e9 call dword ptr [0x111864ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864ec))), 0x111547efu);
  /* 111547ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111547f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111547f4 call 0x11156250 */
  push32(0x111547f9u); f_11156250();
  /* 111547f9 mov esi, esp */
  ESI = (ESP);
  /* 111547fb push 0 */
  push32((uint32_t)(0x0u));
  /* 111547fd push 0x11183638 */
  push32((uint32_t)(0x11183638u));
  /* 11154802 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x11154808u);
  /* 11154808 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115480b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115480d call 0x11156250 */
  push32(0x11154812u); f_11156250();
  /* 11154812 mov esi, esp */
  ESI = (ESP);
  /* 11154814 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11154816 call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x1115481cu);
  /* 1115481c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115481f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154821 call 0x11156250 */
  push32(0x11154826u); f_11156250();
  /* 11154826 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1115482b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115482d je 0x11154886 */
  if (C.zf) goto L_11154886;
  /* 1115482f mov esi, esp */
  ESI = (ESP);
  /* 11154831 push 0x11183490 */
  push32((uint32_t)(0x11183490u));
  /* 11154836 call dword ptr [0x111864b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b8))), 0x1115483cu);
  /* 1115483c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115483f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154841 call 0x11156250 */
  push32(0x11154846u); f_11156250();
  /* 11154846 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11154848 jne 0x11154886 */
  if (!C.zf) goto L_11154886;
  /* 1115484a mov esi, esp */
  ESI = (ESP);
  /* 1115484c push 0 */
  push32((uint32_t)(0x0u));
  /* 1115484e push 0xe */
  push32((uint32_t)(0xeu));
  /* 11154850 call dword ptr [0x1118646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118646c))), 0x11154856u);
  /* 11154856 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154859 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115485b call 0x11156250 */
  push32(0x11154860u); f_11156250();
  /* 11154860 mov esi, esp */
  ESI = (ESP);
  /* 11154862 push 0x1117e4c4 */
  push32((uint32_t)(0x1117e4c4u));
  /* 11154867 call dword ptr [0x111864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864ac))), 0x1115486du);
  /* 1115486d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154870 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154872 call 0x11156250 */
  push32(0x11154877u); f_11156250();
  /* 11154877 mov esi, esp */
  ESI = (ESP);
  /* 11154879 call dword ptr [0x111864f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864f0))), 0x1115487fu);
  /* 1115487f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154881 call 0x11156250 */
  push32(0x11154886u); f_11156250();
L_11154886:;
  /* 11154886 mov esi, esp */
  ESI = (ESP);
  /* 11154888 push 6 */
  push32((uint32_t)(0x6u));
  /* 1115488a call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11154890u);
  /* 11154890 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154893 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154895 call 0x11156250 */
  push32(0x1115489au); f_11156250();
  /* 1115489a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1115489f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111548a1 jne 0x1115492c */
  if (!C.zf) goto L_1115492c;
  /* 111548a7 mov esi, esp */
  ESI = (ESP);
  /* 111548a9 push 0x111834c0 */
  push32((uint32_t)(0x111834c0u));
  /* 111548ae push 0x111835e0 */
  push32((uint32_t)(0x111835e0u));
  /* 111548b3 call dword ptr [0x111864b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b4))), 0x111548b9u);
  /* 111548b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111548bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111548be call 0x11156250 */
  push32(0x111548c3u); f_11156250();
  /* 111548c3 mov esi, eax */
  ESI = (EAX);
  /* 111548c5 mov edi, esp */
  EDI = (ESP);
  /* 111548c7 push 0x111834c0 */
  push32((uint32_t)(0x111834c0u));
  /* 111548cc call dword ptr [0x111864b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b8))), 0x111548d2u);
  /* 111548d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111548d5 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111548d7 call 0x11156250 */
  push32(0x111548dcu); f_11156250();
  /* 111548dc cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111548de jge 0x1115492c */
  if ((C.sf==C.of)) goto L_1115492c;
  /* 111548e0 mov esi, esp */
  ESI = (ESP);
  /* 111548e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 111548e4 push 6 */
  push32((uint32_t)(0x6u));
  /* 111548e6 call dword ptr [0x1118646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118646c))), 0x111548ecu);
  /* 111548ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111548ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111548f1 call 0x11156250 */
  push32(0x111548f6u); f_11156250();
  /* 111548f6 mov esi, esp */
  ESI = (ESP);
  /* 111548f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 111548fa push 0x111834c0 */
  push32((uint32_t)(0x111834c0u));
  /* 111548ff call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x11154905u);
  /* 11154905 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154908 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115490a call 0x11156250 */
  push32(0x1115490fu); f_11156250();
  /* 1115490f mov esi, esp */
  ESI = (ESP);
  /* 11154911 push 0 */
  push32((uint32_t)(0x0u));
  /* 11154913 push 0 */
  push32((uint32_t)(0x0u));
  /* 11154915 push 0x111836e0 */
  push32((uint32_t)(0x111836e0u));
  /* 1115491a push 5 */
  push32((uint32_t)(0x5u));
  /* 1115491c call dword ptr [0x111864bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864bc))), 0x11154922u);
  /* 11154922 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154925 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154927 call 0x11156250 */
  push32(0x1115492cu); f_11156250();
L_1115492c:;
  /* 1115492c mov esi, esp */
  ESI = (ESP);
  /* 1115492e push 6 */
  push32((uint32_t)(0x6u));
  /* 11154930 call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11154936u);
  /* 11154936 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154939 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115493b call 0x11156250 */
  push32(0x11154940u); f_11156250();
  /* 11154940 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11154945 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11154947 je 0x111549d0 */
  if (C.zf) goto L_111549d0;
  /* 1115494d mov esi, esp */
  ESI = (ESP);
  /* 1115494f push 0x111834c0 */
  push32((uint32_t)(0x111834c0u));
  /* 11154954 push 0x111835e0 */
  push32((uint32_t)(0x111835e0u));
  /* 11154959 call dword ptr [0x111864b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b4))), 0x1115495fu);
  /* 1115495f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154962 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154964 call 0x11156250 */
  push32(0x11154969u); f_11156250();
  /* 11154969 mov esi, eax */
  ESI = (EAX);
  /* 1115496b mov edi, esp */
  EDI = (ESP);
  /* 1115496d push 0x111834c0 */
  push32((uint32_t)(0x111834c0u));
  /* 11154972 call dword ptr [0x111864b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b8))), 0x11154978u);
  /* 11154978 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115497b cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115497d call 0x11156250 */
  push32(0x11154982u); f_11156250();
  /* 11154982 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154984 jne 0x111549d0 */
  if (!C.zf) goto L_111549d0;
  /* 11154986 mov esi, esp */
  ESI = (ESP);
  /* 11154988 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115498a push 6 */
  push32((uint32_t)(0x6u));
  /* 1115498c call dword ptr [0x1118646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118646c))), 0x11154992u);
  /* 11154992 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154995 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154997 call 0x11156250 */
  push32(0x1115499cu); f_11156250();
  /* 1115499c mov esi, esp */
  ESI = (ESP);
  /* 1115499e push 0 */
  push32((uint32_t)(0x0u));
  /* 111549a0 push 0x111834c0 */
  push32((uint32_t)(0x111834c0u));
  /* 111549a5 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x111549abu);
  /* 111549ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111549ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111549b0 call 0x11156250 */
  push32(0x111549b5u); f_11156250();
  /* 111549b5 mov esi, esp */
  ESI = (ESP);
  /* 111549b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 111549b9 push 0x111836d8 */
  push32((uint32_t)(0x111836d8u));
  /* 111549be push 5 */
  push32((uint32_t)(0x5u));
  /* 111549c0 call dword ptr [0x111864c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864c0))), 0x111549c6u);
  /* 111549c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111549c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111549cb call 0x11156250 */
  push32(0x111549d0u); f_11156250();
L_111549d0:;
  /* 111549d0 mov esi, esp */
  ESI = (ESP);
  /* 111549d2 push 7 */
  push32((uint32_t)(0x7u));
  /* 111549d4 call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x111549dau);
  /* 111549da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111549dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111549df call 0x11156250 */
  push32(0x111549e4u); f_11156250();
  /* 111549e4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111549e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111549eb je 0x11154b37 */
  if (C.zf) goto L_11154b37;
  /* 111549f1 mov esi, esp */
  ESI = (ESP);
  /* 111549f3 push 0x111834c0 */
  push32((uint32_t)(0x111834c0u));
  /* 111549f8 call dword ptr [0x111864b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b8))), 0x111549feu);
  /* 111549fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154a01 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154a03 call 0x11156250 */
  push32(0x11154a08u); f_11156250();
  /* 11154a08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11154a0a jne 0x11154b37 */
  if (!C.zf) goto L_11154b37;
  /* 11154a10 mov esi, esp */
  ESI = (ESP);
  /* 11154a12 push 0 */
  push32((uint32_t)(0x0u));
  /* 11154a14 push 0x111835e0 */
  push32((uint32_t)(0x111835e0u));
  /* 11154a19 call dword ptr [0x111864c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864c4))), 0x11154a1fu);
  /* 11154a1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154a22 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154a24 call 0x11156250 */
  push32(0x11154a29u); f_11156250();
  /* 11154a29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11154a2b jle 0x11154b37 */
  if ((C.zf||C.sf!=C.of)) goto L_11154b37;
  /* 11154a31 mov esi, esp */
  ESI = (ESP);
  /* 11154a33 push 0 */
  push32((uint32_t)(0x0u));
  /* 11154a35 push 0x111834f0 */
  push32((uint32_t)(0x111834f0u));
  /* 11154a3a call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x11154a40u);
  /* 11154a40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154a43 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154a45 call 0x11156250 */
  push32(0x11154a4au); f_11156250();
  /* 11154a4a mov esi, esp */
  ESI = (ESP);
  /* 11154a4c push 5 */
  push32((uint32_t)(0x5u));
  /* 11154a4e call dword ptr [0x11186498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186498))), 0x11154a54u);
  /* 11154a54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154a57 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154a59 call 0x11156250 */
  push32(0x11154a5eu); f_11156250();
  /* 11154a5e mov esi, esp */
  ESI = (ESP);
  /* 11154a60 push 0 */
  push32((uint32_t)(0x0u));
  /* 11154a62 push 0x111835e0 */
  push32((uint32_t)(0x111835e0u));
  /* 11154a67 push 5 */
  push32((uint32_t)(0x5u));
  /* 11154a69 push 0x111835f0 */
  push32((uint32_t)(0x111835f0u));
  /* 11154a6e push 0x111834a8 */
  push32((uint32_t)(0x111834a8u));
  /* 11154a73 push 0x111834f8 */
  push32((uint32_t)(0x111834f8u));
  /* 11154a78 call dword ptr [0x1118649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118649c))), 0x11154a7eu);
  /* 11154a7e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154a81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154a83 call 0x11156250 */
  push32(0x11154a88u); f_11156250();
  /* 11154a88 mov esi, esp */
  ESI = (ESP);
  /* 11154a8a push 0 */
  push32((uint32_t)(0x0u));
  /* 11154a8c push 7 */
  push32((uint32_t)(0x7u));
  /* 11154a8e call dword ptr [0x1118646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118646c))), 0x11154a94u);
  /* 11154a94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154a97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154a99 call 0x11156250 */
  push32(0x11154a9eu); f_11156250();
  /* 11154a9e mov esi, esp */
  ESI = (ESP);
  /* 11154aa0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11154aa2 call dword ptr [0x11186490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186490))), 0x11154aa8u);
  /* 11154aa8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154aab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154aad call 0x11156250 */
  push32(0x11154ab2u); f_11156250();
  /* 11154ab2 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11154ab8 mov ecx, 0x1388 */
  ECX = (0x1388u);
  /* 11154abd sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11154abf mov esi, esp */
  ESI = (ESP);
  /* 11154ac1 push ecx */
  push32((uint32_t)(ECX));
  /* 11154ac2 push 0x1117e4b8 */
  push32((uint32_t)(0x1117e4b8u));
  /* 11154ac7 call dword ptr [0x111864c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864c8))), 0x11154acdu);
  /* 11154acd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154ad0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154ad2 call 0x11156250 */
  push32(0x11154ad7u); f_11156250();
  /* 11154ad7 mov esi, esp */
  ESI = (ESP);
  /* 11154ad9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11154adb call dword ptr [0x11186490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186490))), 0x11154ae1u);
  /* 11154ae1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154ae4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154ae6 call 0x11156250 */
  push32(0x11154aebu); f_11156250();
  /* 11154aeb imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11154af1 mov edx, 0x1388 */
  EDX = (0x1388u);
  /* 11154af6 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11154af8 mov esi, esp */
  ESI = (ESP);
  /* 11154afa push edx */
  push32((uint32_t)(EDX));
  /* 11154afb push 1 */
  push32((uint32_t)(0x1u));
  /* 11154afd push 0 */
  push32((uint32_t)(0x0u));
  /* 11154aff call dword ptr [0x111864cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864cc))), 0x11154b05u);
  /* 11154b05 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154b08 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154b0a call 0x11156250 */
  push32(0x11154b0fu); f_11156250();
  /* 11154b0f mov esi, esp */
  ESI = (ESP);
  /* 11154b11 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11154b13 call dword ptr [0x11186474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186474))), 0x11154b19u);
  /* 11154b19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154b1c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154b1e call 0x11156250 */
  push32(0x11154b23u); f_11156250();
  /* 11154b23 mov esi, esp */
  ESI = (ESP);
  /* 11154b25 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11154b27 call dword ptr [0x11186470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186470))), 0x11154b2du);
  /* 11154b2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154b30 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154b32 call 0x11156250 */
  push32(0x11154b37u); f_11156250();
L_11154b37:;
  /* 11154b37 mov esi, esp */
  ESI = (ESP);
  /* 11154b39 push 5 */
  push32((uint32_t)(0x5u));
  /* 11154b3b call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11154b41u);
  /* 11154b41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154b44 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154b46 call 0x11156250 */
  push32(0x11154b4bu); f_11156250();
  /* 11154b4b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11154b50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11154b52 jne 0x11154c97 */
  if (!C.zf) goto L_11154c97;
  /* 11154b58 mov esi, esp */
  ESI = (ESP);
  /* 11154b5a push 0xf */
  push32((uint32_t)(0xfu));
  /* 11154b5c call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11154b62u);
  /* 11154b62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154b65 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154b67 call 0x11156250 */
  push32(0x11154b6cu); f_11156250();
  /* 11154b6c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11154b71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11154b73 je 0x11154c97 */
  if (C.zf) goto L_11154c97;
  /* 11154b79 mov esi, esp */
  ESI = (ESP);
  /* 11154b7b push 0 */
  push32((uint32_t)(0x0u));
  /* 11154b7d push 0x11183610 */
  push32((uint32_t)(0x11183610u));
  /* 11154b82 call dword ptr [0x111864c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864c4))), 0x11154b88u);
  /* 11154b88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154b8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154b8d call 0x11156250 */
  push32(0x11154b92u); f_11156250();
  /* 11154b92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11154b94 jle 0x11154c97 */
  if ((C.zf||C.sf!=C.of)) goto L_11154c97;
  /* 11154b9a mov esi, esp */
  ESI = (ESP);
  /* 11154b9c push 0 */
  push32((uint32_t)(0x0u));
  /* 11154b9e push 0xf */
  push32((uint32_t)(0xfu));
  /* 11154ba0 call dword ptr [0x1118646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118646c))), 0x11154ba6u);
  /* 11154ba6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154ba9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154bab call 0x11156250 */
  push32(0x11154bb0u); f_11156250();
  /* 11154bb0 mov esi, esp */
  ESI = (ESP);
  /* 11154bb2 push 0x1117e4b0 */
  push32((uint32_t)(0x1117e4b0u));
  /* 11154bb7 call dword ptr [0x111864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864ac))), 0x11154bbdu);
  /* 11154bbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154bc0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154bc2 call 0x11156250 */
  push32(0x11154bc7u); f_11156250();
  /* 11154bc7 mov esi, esp */
  ESI = (ESP);
  /* 11154bc9 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11154bcb call dword ptr [0x11186470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186470))), 0x11154bd1u);
  /* 11154bd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154bd4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154bd6 call 0x11156250 */
  push32(0x11154bdbu); f_11156250();
  /* 11154bdb mov esi, esp */
  ESI = (ESP);
  /* 11154bdd push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 11154bdf call dword ptr [0x11186474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186474))), 0x11154be5u);
  /* 11154be5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154be8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154bea call 0x11156250 */
  push32(0x11154befu); f_11156250();
  /* 11154bef mov esi, esp */
  ESI = (ESP);
  /* 11154bf1 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11154bf3 call dword ptr [0x11186470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186470))), 0x11154bf9u);
  /* 11154bf9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154bfc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154bfe call 0x11156250 */
  push32(0x11154c03u); f_11156250();
  /* 11154c03 mov esi, esp */
  ESI = (ESP);
  /* 11154c05 push 0 */
  push32((uint32_t)(0x0u));
  /* 11154c07 call dword ptr [0x11186490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186490))), 0x11154c0du);
  /* 11154c0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154c10 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154c12 call 0x11156250 */
  push32(0x11154c17u); f_11156250();
  /* 11154c17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11154c19 je 0x11154c34 */
  if (C.zf) goto L_11154c34;
  /* 11154c1b mov esi, esp */
  ESI = (ESP);
  /* 11154c1d push 0 */
  push32((uint32_t)(0x0u));
  /* 11154c1f call dword ptr [0x11186490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186490))), 0x11154c25u);
  /* 11154c25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154c28 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154c2a call 0x11156250 */
  push32(0x11154c2fu); f_11156250();
  /* 11154c2f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154c32 jne 0x11154c4f */
  if (!C.zf) goto L_11154c4f;
L_11154c34:;
  /* 11154c34 mov esi, esp */
  ESI = (ESP);
  /* 11154c36 push 3 */
  push32((uint32_t)(0x3u));
  /* 11154c38 push 1 */
  push32((uint32_t)(0x1u));
  /* 11154c3a push 0x11183558 */
  push32((uint32_t)(0x11183558u));
  /* 11154c3f call dword ptr [0x111864f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864f4))), 0x11154c45u);
  /* 11154c45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154c48 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154c4a call 0x11156250 */
  push32(0x11154c4fu); f_11156250();
L_11154c4f:;
  /* 11154c4f mov esi, esp */
  ESI = (ESP);
  /* 11154c51 push 0 */
  push32((uint32_t)(0x0u));
  /* 11154c53 push 0x11183678 */
  push32((uint32_t)(0x11183678u));
  /* 11154c58 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x11154c5eu);
  /* 11154c5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154c61 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154c63 call 0x11156250 */
  push32(0x11154c68u); f_11156250();
  /* 11154c68 mov esi, esp */
  ESI = (ESP);
  /* 11154c6a push 1 */
  push32((uint32_t)(0x1u));
  /* 11154c6c push 0x11183670 */
  push32((uint32_t)(0x11183670u));
  /* 11154c71 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x11154c77u);
  /* 11154c77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154c7a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154c7c call 0x11156250 */
  push32(0x11154c81u); f_11156250();
  /* 11154c81 mov esi, esp */
  ESI = (ESP);
  /* 11154c83 push 0 */
  push32((uint32_t)(0x0u));
  /* 11154c85 push 1 */
  push32((uint32_t)(0x1u));
  /* 11154c87 call dword ptr [0x111864b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b0))), 0x11154c8du);
  /* 11154c8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154c90 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154c92 call 0x11156250 */
  push32(0x11154c97u); f_11156250();
L_11154c97:;
  /* 11154c97 mov esi, esp */
  ESI = (ESP);
  /* 11154c99 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11154c9b call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11154ca1u);
  /* 11154ca1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154ca4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154ca6 call 0x11156250 */
  push32(0x11154cabu); f_11156250();
  /* 11154cab and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11154cb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11154cb2 jne 0x11154dec */
  if (!C.zf) goto L_11154dec;
  /* 11154cb8 mov esi, esp */
  ESI = (ESP);
  /* 11154cba push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11154cbc call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11154cc2u);
  /* 11154cc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154cc5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154cc7 call 0x11156250 */
  push32(0x11154cccu); f_11156250();
  /* 11154ccc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11154cd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11154cd3 je 0x11154dec */
  if (C.zf) goto L_11154dec;
  /* 11154cd9 mov esi, esp */
  ESI = (ESP);
  /* 11154cdb push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11154cdd call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11154ce3u);
  /* 11154ce3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154ce6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154ce8 call 0x11156250 */
  push32(0x11154cedu); f_11156250();
  /* 11154ced and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11154cf2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11154cf4 je 0x11154dec */
  if (C.zf) goto L_11154dec;
  /* 11154cfa mov esi, esp */
  ESI = (ESP);
  /* 11154cfc push 0 */
  push32((uint32_t)(0x0u));
  /* 11154cfe push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11154d00 call dword ptr [0x1118646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118646c))), 0x11154d06u);
  /* 11154d06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154d09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154d0b call 0x11156250 */
  push32(0x11154d10u); f_11156250();
  /* 11154d10 mov esi, esp */
  ESI = (ESP);
  /* 11154d12 push 0 */
  push32((uint32_t)(0x0u));
  /* 11154d14 call dword ptr [0x11186490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186490))), 0x11154d1au);
  /* 11154d1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154d1d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154d1f call 0x11156250 */
  push32(0x11154d24u); f_11156250();
  /* 11154d24 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11154d27 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154d2b ja 0x11154dec */
  if ((!C.cf&&!C.zf)) goto L_11154dec;
  /* 11154d31 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11154d34 jmp dword ptr [eax*4 + 0x111554af] */
  switch (EAX) {
    case 0: goto L_11154d3b;
    case 1: goto L_11154d6a;
    case 2: goto L_11154d96;
    case 3: goto L_11154dc2;
    default: x86_unimpl("switch@0x11154d34 out of table"); return;
  }
L_11154d3b:;
  /* 11154d3b mov esi, esp */
  ESI = (ESP);
  /* 11154d3d push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11154d3f push 0x11183630 */
  push32((uint32_t)(0x11183630u));
  /* 11154d44 push 4 */
  push32((uint32_t)(0x4u));
  /* 11154d46 push 0x111833f0 */
  push32((uint32_t)(0x111833f0u));
  /* 11154d4b push 0x111834a8 */
  push32((uint32_t)(0x111834a8u));
  /* 11154d50 push 0x11183420 */
  push32((uint32_t)(0x11183420u));
  /* 11154d55 call dword ptr [0x1118649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118649c))), 0x11154d5bu);
  /* 11154d5b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154d5e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154d60 call 0x11156250 */
  push32(0x11154d65u); f_11156250();
  /* 11154d65 jmp 0x11154dec */
  goto L_11154dec;
L_11154d6a:;
  /* 11154d6a mov esi, esp */
  ESI = (ESP);
  /* 11154d6c push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11154d6e push 0x11183630 */
  push32((uint32_t)(0x11183630u));
  /* 11154d73 push 4 */
  push32((uint32_t)(0x4u));
  /* 11154d75 push 0x111833f0 */
  push32((uint32_t)(0x111833f0u));
  /* 11154d7a push 0x111834a8 */
  push32((uint32_t)(0x111834a8u));
  /* 11154d7f push 0x11183420 */
  push32((uint32_t)(0x11183420u));
  /* 11154d84 call dword ptr [0x1118649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118649c))), 0x11154d8au);
  /* 11154d8a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154d8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154d8f call 0x11156250 */
  push32(0x11154d94u); f_11156250();
  /* 11154d94 jmp 0x11154dec */
  goto L_11154dec;
L_11154d96:;
  /* 11154d96 mov esi, esp */
  ESI = (ESP);
  /* 11154d98 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11154d9a push 0x11183630 */
  push32((uint32_t)(0x11183630u));
  /* 11154d9f push 4 */
  push32((uint32_t)(0x4u));
  /* 11154da1 push 0x111833f0 */
  push32((uint32_t)(0x111833f0u));
  /* 11154da6 push 0x111833e0 */
  push32((uint32_t)(0x111833e0u));
  /* 11154dab push 0x11183420 */
  push32((uint32_t)(0x11183420u));
  /* 11154db0 call dword ptr [0x1118649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118649c))), 0x11154db6u);
  /* 11154db6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154db9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154dbb call 0x11156250 */
  push32(0x11154dc0u); f_11156250();
  /* 11154dc0 jmp 0x11154dec */
  goto L_11154dec;
L_11154dc2:;
  /* 11154dc2 mov esi, esp */
  ESI = (ESP);
  /* 11154dc4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11154dc6 push 0x11183630 */
  push32((uint32_t)(0x11183630u));
  /* 11154dcb push 4 */
  push32((uint32_t)(0x4u));
  /* 11154dcd push 0x111833f0 */
  push32((uint32_t)(0x111833f0u));
  /* 11154dd2 push 0x111833e0 */
  push32((uint32_t)(0x111833e0u));
  /* 11154dd7 push 0x11183420 */
  push32((uint32_t)(0x11183420u));
  /* 11154ddc call dword ptr [0x1118649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118649c))), 0x11154de2u);
  /* 11154de2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154de5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154de7 call 0x11156250 */
  push32(0x11154decu); f_11156250();
L_11154dec:;
  /* 11154dec mov esi, esp */
  ESI = (ESP);
  /* 11154dee push 0x11183500 */
  push32((uint32_t)(0x11183500u));
  /* 11154df3 call dword ptr [0x111864b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b8))), 0x11154df9u);
  /* 11154df9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154dfc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154dfe call 0x11156250 */
  push32(0x11154e03u); f_11156250();
  /* 11154e03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11154e05 jne 0x11154e3b */
  if (!C.zf) goto L_11154e3b;
  /* 11154e07 mov esi, esp */
  ESI = (ESP);
  /* 11154e09 push 0 */
  push32((uint32_t)(0x0u));
  /* 11154e0b push 0x11183420 */
  push32((uint32_t)(0x11183420u));
  /* 11154e10 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x11154e16u);
  /* 11154e16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154e19 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154e1b call 0x11156250 */
  push32(0x11154e20u); f_11156250();
  /* 11154e20 mov esi, esp */
  ESI = (ESP);
  /* 11154e22 push 0x11183498 */
  push32((uint32_t)(0x11183498u));
  /* 11154e27 push 4 */
  push32((uint32_t)(0x4u));
  /* 11154e29 call dword ptr [0x111864d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864d0))), 0x11154e2fu);
  /* 11154e2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154e32 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154e34 call 0x11156250 */
  push32(0x11154e39u); f_11156250();
  /* 11154e39 jmp 0x11154e6d */
  goto L_11154e6d;
L_11154e3b:;
  /* 11154e3b mov esi, esp */
  ESI = (ESP);
  /* 11154e3d push 0 */
  push32((uint32_t)(0x0u));
  /* 11154e3f push 0x11183420 */
  push32((uint32_t)(0x11183420u));
  /* 11154e44 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x11154e4au);
  /* 11154e4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154e4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154e4f call 0x11156250 */
  push32(0x11154e54u); f_11156250();
  /* 11154e54 mov esi, esp */
  ESI = (ESP);
  /* 11154e56 push 0x11183500 */
  push32((uint32_t)(0x11183500u));
  /* 11154e5b push 4 */
  push32((uint32_t)(0x4u));
  /* 11154e5d call dword ptr [0x111864d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864d0))), 0x11154e63u);
  /* 11154e63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154e66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154e68 call 0x11156250 */
  push32(0x11154e6du); f_11156250();
L_11154e6d:;
  /* 11154e6d mov esi, esp */
  ESI = (ESP);
  /* 11154e6f push 0xf */
  push32((uint32_t)(0xfu));
  /* 11154e71 call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11154e77u);
  /* 11154e77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154e7a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154e7c call 0x11156250 */
  push32(0x11154e81u); f_11156250();
  /* 11154e81 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11154e86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11154e88 jne 0x11154edb */
  if (!C.zf) goto L_11154edb;
  /* 11154e8a mov esi, esp */
  ESI = (ESP);
  /* 11154e8c push 8 */
  push32((uint32_t)(0x8u));
  /* 11154e8e call dword ptr [0x111864d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864d8))), 0x11154e94u);
  /* 11154e94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154e97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154e99 call 0x11156250 */
  push32(0x11154e9eu); f_11156250();
  /* 11154e9e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11154ea3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11154ea5 je 0x11154edb */
  if (C.zf) goto L_11154edb;
  /* 11154ea7 mov esi, esp */
  ESI = (ESP);
  /* 11154ea9 push 0x11183420 */
  push32((uint32_t)(0x11183420u));
  /* 11154eae call dword ptr [0x111864b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b8))), 0x11154eb4u);
  /* 11154eb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154eb7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154eb9 call 0x11156250 */
  push32(0x11154ebeu); f_11156250();
  /* 11154ebe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11154ec0 jne 0x11154edb */
  if (!C.zf) goto L_11154edb;
  /* 11154ec2 mov esi, esp */
  ESI = (ESP);
  /* 11154ec4 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11154ec9 push 8 */
  push32((uint32_t)(0x8u));
  /* 11154ecb call dword ptr [0x1118648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118648c))), 0x11154ed1u);
  /* 11154ed1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154ed4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154ed6 call 0x11156250 */
  push32(0x11154edbu); f_11156250();
L_11154edb:;
  /* 11154edb mov esi, esp */
  ESI = (ESP);
  /* 11154edd push 8 */
  push32((uint32_t)(0x8u));
  /* 11154edf call dword ptr [0x111864dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864dc))), 0x11154ee5u);
  /* 11154ee5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154ee8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154eea call 0x11156250 */
  push32(0x11154eefu); f_11156250();
  /* 11154eef and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11154ef4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11154ef6 je 0x11154f22 */
  if (C.zf) goto L_11154f22;
  /* 11154ef8 mov esi, esp */
  ESI = (ESP);
  /* 11154efa push 8 */
  push32((uint32_t)(0x8u));
  /* 11154efc call dword ptr [0x111864e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864e0))), 0x11154f02u);
  /* 11154f02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154f05 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154f07 call 0x11156250 */
  push32(0x11154f0cu); f_11156250();
  /* 11154f0c mov esi, esp */
  ESI = (ESP);
  /* 11154f0e push 1 */
  push32((uint32_t)(0x1u));
  /* 11154f10 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11154f12 call dword ptr [0x1118646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118646c))), 0x11154f18u);
  /* 11154f18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154f1b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154f1d call 0x11156250 */
  push32(0x11154f22u); f_11156250();
L_11154f22:;
  /* 11154f22 mov esi, esp */
  ESI = (ESP);
  /* 11154f24 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11154f26 call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11154f2cu);
  /* 11154f2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154f2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154f31 call 0x11156250 */
  push32(0x11154f36u); f_11156250();
  /* 11154f36 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11154f3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11154f3d jne 0x1115504b */
  if (!C.zf) goto L_1115504b;
  /* 11154f43 mov esi, esp */
  ESI = (ESP);
  /* 11154f45 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11154f47 call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11154f4du);
  /* 11154f4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154f50 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154f52 call 0x11156250 */
  push32(0x11154f57u); f_11156250();
  /* 11154f57 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11154f5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11154f5e je 0x1115504b */
  if (C.zf) goto L_1115504b;
  /* 11154f64 mov esi, esp */
  ESI = (ESP);
  /* 11154f66 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11154f68 call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11154f6eu);
  /* 11154f6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154f71 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154f73 call 0x11156250 */
  push32(0x11154f78u); f_11156250();
  /* 11154f78 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11154f7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11154f7f je 0x1115504b */
  if (C.zf) goto L_1115504b;
  /* 11154f85 mov esi, esp */
  ESI = (ESP);
  /* 11154f87 push 0 */
  push32((uint32_t)(0x0u));
  /* 11154f89 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11154f8b call dword ptr [0x1118646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118646c))), 0x11154f91u);
  /* 11154f91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154f94 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154f96 call 0x11156250 */
  push32(0x11154f9bu); f_11156250();
  /* 11154f9b mov esi, esp */
  ESI = (ESP);
  /* 11154f9d push 0 */
  push32((uint32_t)(0x0u));
  /* 11154f9f call dword ptr [0x11186490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186490))), 0x11154fa5u);
  /* 11154fa5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154fa8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154faa call 0x11156250 */
  push32(0x11154fafu); f_11156250();
  /* 11154faf mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11154fb2 cmp dword ptr [ebp - 0x18], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154fb6 je 0x11154fc9 */
  if (C.zf) goto L_11154fc9;
  /* 11154fb8 cmp dword ptr [ebp - 0x18], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154fbc je 0x11154ff5 */
  if (C.zf) goto L_11154ff5;
  /* 11154fbe cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154fc2 je 0x11155021 */
  if (C.zf) goto L_11155021;
  /* 11154fc4 jmp 0x1115504b */
  goto L_1115504b;
L_11154fc9:;
  /* 11154fc9 mov esi, esp */
  ESI = (ESP);
  /* 11154fcb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11154fcd push 0x11183630 */
  push32((uint32_t)(0x11183630u));
  /* 11154fd2 push 4 */
  push32((uint32_t)(0x4u));
  /* 11154fd4 push 0x111833f0 */
  push32((uint32_t)(0x111833f0u));
  /* 11154fd9 push 0x111834a8 */
  push32((uint32_t)(0x111834a8u));
  /* 11154fde push 0x11183418 */
  push32((uint32_t)(0x11183418u));
  /* 11154fe3 call dword ptr [0x1118649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118649c))), 0x11154fe9u);
  /* 11154fe9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11154fec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11154fee call 0x11156250 */
  push32(0x11154ff3u); f_11156250();
  /* 11154ff3 jmp 0x1115504b */
  goto L_1115504b;
L_11154ff5:;
  /* 11154ff5 mov esi, esp */
  ESI = (ESP);
  /* 11154ff7 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11154ff9 push 0x11183630 */
  push32((uint32_t)(0x11183630u));
  /* 11154ffe push 4 */
  push32((uint32_t)(0x4u));
  /* 11155000 push 0x111833f0 */
  push32((uint32_t)(0x111833f0u));
  /* 11155005 push 0x111834a8 */
  push32((uint32_t)(0x111834a8u));
  /* 1115500a push 0x11183418 */
  push32((uint32_t)(0x11183418u));
  /* 1115500f call dword ptr [0x1118649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118649c))), 0x11155015u);
  /* 11155015 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11155018 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115501a call 0x11156250 */
  push32(0x1115501fu); f_11156250();
  /* 1115501f jmp 0x1115504b */
  goto L_1115504b;
L_11155021:;
  /* 11155021 mov esi, esp */
  ESI = (ESP);
  /* 11155023 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11155025 push 0x11183630 */
  push32((uint32_t)(0x11183630u));
  /* 1115502a push 4 */
  push32((uint32_t)(0x4u));
  /* 1115502c push 0x111833f0 */
  push32((uint32_t)(0x111833f0u));
  /* 11155031 push 0x111833e0 */
  push32((uint32_t)(0x111833e0u));
  /* 11155036 push 0x11183418 */
  push32((uint32_t)(0x11183418u));
  /* 1115503b call dword ptr [0x1118649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118649c))), 0x11155041u);
  /* 11155041 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11155044 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11155046 call 0x11156250 */
  push32(0x1115504bu); f_11156250();
L_1115504b:;
  /* 1115504b mov esi, esp */
  ESI = (ESP);
  /* 1115504d push 0x111834e8 */
  push32((uint32_t)(0x111834e8u));
  /* 11155052 call dword ptr [0x111864b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b8))), 0x11155058u);
  /* 11155058 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115505b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115505d call 0x11156250 */
  push32(0x11155062u); f_11156250();
  /* 11155062 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11155064 jne 0x1115509a */
  if (!C.zf) goto L_1115509a;
  /* 11155066 mov esi, esp */
  ESI = (ESP);
  /* 11155068 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115506a push 0x11183418 */
  push32((uint32_t)(0x11183418u));
  /* 1115506f call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x11155075u);
  /* 11155075 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11155078 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115507a call 0x11156250 */
  push32(0x1115507fu); f_11156250();
  /* 1115507f mov esi, esp */
  ESI = (ESP);
  /* 11155081 push 0x111834a0 */
  push32((uint32_t)(0x111834a0u));
  /* 11155086 push 4 */
  push32((uint32_t)(0x4u));
  /* 11155088 call dword ptr [0x111864d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864d0))), 0x1115508eu);
  /* 1115508e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11155091 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11155093 call 0x11156250 */
  push32(0x11155098u); f_11156250();
  /* 11155098 jmp 0x111550cc */
  goto L_111550cc;
L_1115509a:;
  /* 1115509a mov esi, esp */
  ESI = (ESP);
  /* 1115509c push 0 */
  push32((uint32_t)(0x0u));
  /* 1115509e push 0x11183418 */
  push32((uint32_t)(0x11183418u));
  /* 111550a3 call dword ptr [0x11186484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186484))), 0x111550a9u);
  /* 111550a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111550ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111550ae call 0x11156250 */
  push32(0x111550b3u); f_11156250();
  /* 111550b3 mov esi, esp */
  ESI = (ESP);
  /* 111550b5 push 0x111834e8 */
  push32((uint32_t)(0x111834e8u));
  /* 111550ba push 4 */
  push32((uint32_t)(0x4u));
  /* 111550bc call dword ptr [0x111864d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864d0))), 0x111550c2u);
  /* 111550c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111550c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111550c7 call 0x11156250 */
  push32(0x111550ccu); f_11156250();
L_111550cc:;
  /* 111550cc mov esi, esp */
  ESI = (ESP);
  /* 111550ce push 0xf */
  push32((uint32_t)(0xfu));
  /* 111550d0 call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x111550d6u);
  /* 111550d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111550d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111550db call 0x11156250 */
  push32(0x111550e0u); f_11156250();
  /* 111550e0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111550e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111550e7 jne 0x1115513a */
  if (!C.zf) goto L_1115513a;
  /* 111550e9 mov esi, esp */
  ESI = (ESP);
  /* 111550eb push 9 */
  push32((uint32_t)(0x9u));
  /* 111550ed call dword ptr [0x111864d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864d8))), 0x111550f3u);
  /* 111550f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111550f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111550f8 call 0x11156250 */
  push32(0x111550fdu); f_11156250();
  /* 111550fd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11155102 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11155104 je 0x1115513a */
  if (C.zf) goto L_1115513a;
  /* 11155106 mov esi, esp */
  ESI = (ESP);
  /* 11155108 push 0x11183418 */
  push32((uint32_t)(0x11183418u));
  /* 1115510d call dword ptr [0x111864b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b8))), 0x11155113u);
  /* 11155113 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11155116 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11155118 call 0x11156250 */
  push32(0x1115511du); f_11156250();
  /* 1115511d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115511f jne 0x1115513a */
  if (!C.zf) goto L_1115513a;
  /* 11155121 mov esi, esp */
  ESI = (ESP);
  /* 11155123 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11155128 push 9 */
  push32((uint32_t)(0x9u));
  /* 1115512a call dword ptr [0x1118648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118648c))), 0x11155130u);
  /* 11155130 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11155133 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11155135 call 0x11156250 */
  push32(0x1115513au); f_11156250();
L_1115513a:;
  /* 1115513a mov esi, esp */
  ESI = (ESP);
  /* 1115513c push 9 */
  push32((uint32_t)(0x9u));
  /* 1115513e call dword ptr [0x111864dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864dc))), 0x11155144u);
  /* 11155144 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11155147 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11155149 call 0x11156250 */
  push32(0x1115514eu); f_11156250();
  /* 1115514e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11155153 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11155155 je 0x11155181 */
  if (C.zf) goto L_11155181;
  /* 11155157 mov esi, esp */
  ESI = (ESP);
  /* 11155159 push 9 */
  push32((uint32_t)(0x9u));
  /* 1115515b call dword ptr [0x111864e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864e0))), 0x11155161u);
  /* 11155161 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11155164 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11155166 call 0x11156250 */
  push32(0x1115516bu); f_11156250();
  /* 1115516b mov esi, esp */
  ESI = (ESP);
  /* 1115516d push 1 */
  push32((uint32_t)(0x1u));
  /* 1115516f push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11155171 call dword ptr [0x1118646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118646c))), 0x11155177u);
  /* 11155177 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115517a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115517c call 0x11156250 */
  push32(0x11155181u); f_11156250();
L_11155181:;
  /* 11155181 mov esi, esp */
  ESI = (ESP);
  /* 11155183 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11155185 call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x1115518bu);
  /* 1115518b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115518e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11155190 call 0x11156250 */
  push32(0x11155195u); f_11156250();
  /* 11155195 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1115519a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115519c je 0x111551f6 */
  if (C.zf) goto L_111551f6;
  /* 1115519e mov esi, esp */
  ESI = (ESP);
  /* 111551a0 push 0x111835c0 */
  push32((uint32_t)(0x111835c0u));
  /* 111551a5 call dword ptr [0x111864b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b8))), 0x111551abu);
  /* 111551ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111551ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111551b0 call 0x11156250 */
  push32(0x111551b5u); f_11156250();
  /* 111551b5 cmp eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111551b8 jge 0x111551f6 */
  if ((C.sf==C.of)) goto L_111551f6;
  /* 111551ba mov esi, esp */
  ESI = (ESP);
  /* 111551bc push 0 */
  push32((uint32_t)(0x0u));
  /* 111551be push 0x11 */
  push32((uint32_t)(0x11u));
  /* 111551c0 call dword ptr [0x1118646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118646c))), 0x111551c6u);
  /* 111551c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111551c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111551cb call 0x11156250 */
  push32(0x111551d0u); f_11156250();
  /* 111551d0 mov esi, esp */
  ESI = (ESP);
  /* 111551d2 push 0x1117e4a4 */
  push32((uint32_t)(0x1117e4a4u));
  /* 111551d7 call dword ptr [0x111864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864ac))), 0x111551ddu);
  /* 111551dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111551e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111551e2 call 0x11156250 */
  push32(0x111551e7u); f_11156250();
  /* 111551e7 mov esi, esp */
  ESI = (ESP);
  /* 111551e9 call dword ptr [0x111864f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864f0))), 0x111551efu);
  /* 111551ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111551f1 call 0x11156250 */
  push32(0x111551f6u); f_11156250();
L_111551f6:;
  /* 111551f6 mov esi, esp */
  ESI = (ESP);
  /* 111551f8 push 5 */
  push32((uint32_t)(0x5u));
  /* 111551fa call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11155200u);
  /* 11155200 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11155203 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11155205 call 0x11156250 */
  push32(0x1115520au); f_11156250();
  /* 1115520a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1115520f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11155211 jne 0x11155299 */
  if (!C.zf) goto L_11155299;
  /* 11155217 mov esi, esp */
  ESI = (ESP);
  /* 11155219 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1115521b call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11155221u);
  /* 11155221 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11155224 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11155226 call 0x11156250 */
  push32(0x1115522bu); f_11156250();
  /* 1115522b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11155230 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11155232 je 0x11155299 */
  if (C.zf) goto L_11155299;
  /* 11155234 mov esi, esp */
  ESI = (ESP);
  /* 11155236 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11155238 call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x1115523eu);
  /* 1115523e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11155241 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11155243 call 0x11156250 */
  push32(0x11155248u); f_11156250();
  /* 11155248 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1115524d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115524f je 0x11155299 */
  if (C.zf) goto L_11155299;
  /* 11155251 mov esi, esp */
  ESI = (ESP);
  /* 11155253 push 0x11183718 */
  push32((uint32_t)(0x11183718u));
  /* 11155258 call dword ptr [0x111864b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b8))), 0x1115525eu);
  /* 1115525e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11155261 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11155263 call 0x11156250 */
  push32(0x11155268u); f_11156250();
  /* 11155268 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115526a jne 0x11155299 */
  if (!C.zf) goto L_11155299;
  /* 1115526c mov esi, esp */
  ESI = (ESP);
  /* 1115526e push 0 */
  push32((uint32_t)(0x0u));
  /* 11155270 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11155272 call dword ptr [0x1118646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118646c))), 0x11155278u);
  /* 11155278 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115527b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115527d call 0x11156250 */
  push32(0x11155282u); f_11156250();
  /* 11155282 mov esi, esp */
  ESI = (ESP);
  /* 11155284 push 0x1117e498 */
  push32((uint32_t)(0x1117e498u));
  /* 11155289 call dword ptr [0x111864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864ac))), 0x1115528fu);
  /* 1115528f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11155292 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11155294 call 0x11156250 */
  push32(0x11155299u); f_11156250();
L_11155299:;
  /* 11155299 mov esi, esp */
  ESI = (ESP);
  /* 1115529b push 0xf */
  push32((uint32_t)(0xfu));
  /* 1115529d call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x111552a3u);
  /* 111552a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111552a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111552a8 call 0x11156250 */
  push32(0x111552adu); f_11156250();
  /* 111552ad and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111552b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111552b4 jne 0x11155347 */
  if (!C.zf) goto L_11155347;
  /* 111552ba mov esi, esp */
  ESI = (ESP);
  /* 111552bc push 0x13 */
  push32((uint32_t)(0x13u));
  /* 111552be call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x111552c4u);
  /* 111552c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111552c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111552c9 call 0x11156250 */
  push32(0x111552ceu); f_11156250();
  /* 111552ce and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111552d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111552d5 je 0x11155347 */
  if (C.zf) goto L_11155347;
  /* 111552d7 mov esi, esp */
  ESI = (ESP);
  /* 111552d9 push 0x11183560 */
  push32((uint32_t)(0x11183560u));
  /* 111552de call dword ptr [0x111864b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864b8))), 0x111552e4u);
  /* 111552e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111552e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111552e9 call 0x11156250 */
  push32(0x111552eeu); f_11156250();
  /* 111552ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111552f0 jne 0x11155347 */
  if (!C.zf) goto L_11155347;
  /* 111552f2 mov esi, esp */
  ESI = (ESP);
  /* 111552f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 111552f6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 111552f8 call dword ptr [0x1118646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118646c))), 0x111552feu);
  /* 111552fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11155301 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11155303 call 0x11156250 */
  push32(0x11155308u); f_11156250();
  /* 11155308 mov esi, esp */
  ESI = (ESP);
  /* 1115530a push 0x1117e490 */
  push32((uint32_t)(0x1117e490u));
  /* 1115530f call dword ptr [0x111864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864ac))), 0x11155315u);
  /* 11155315 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11155318 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115531a call 0x11156250 */
  push32(0x1115531fu); f_11156250();
  /* 1115531f mov esi, esp */
  ESI = (ESP);
  /* 11155321 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11155323 call dword ptr [0x11186474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186474))), 0x11155329u);
  /* 11155329 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115532c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115532e call 0x11156250 */
  push32(0x11155333u); f_11156250();
  /* 11155333 mov esi, esp */
  ESI = (ESP);
  /* 11155335 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11155337 call dword ptr [0x11186470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186470))), 0x1115533du);
  /* 1115533d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11155340 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11155342 call 0x11156250 */
  push32(0x11155347u); f_11156250();
L_11155347:;
  /* 11155347 mov esi, esp */
  ESI = (ESP);
  /* 11155349 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1115534b call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x11155351u);
  /* 11155351 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11155354 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11155356 call 0x11156250 */
  push32(0x1115535bu); f_11156250();
  /* 1115535b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11155360 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11155362 je 0x111553ae */
  if (C.zf) goto L_111553ae;
  /* 11155364 mov esi, esp */
  ESI = (ESP);
  /* 11155366 push 2 */
  push32((uint32_t)(0x2u));
  /* 11155368 call dword ptr [0x11186510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186510))), 0x1115536eu);
  /* 1115536e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11155371 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11155373 call 0x11156250 */
  push32(0x11155378u); f_11156250();
  /* 11155378 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1115537d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115537f je 0x111553ae */
  if (C.zf) goto L_111553ae;
  /* 11155381 mov esi, esp */
  ESI = (ESP);
  /* 11155383 push 0 */
  push32((uint32_t)(0x0u));
  /* 11155385 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11155387 call dword ptr [0x1118646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118646c))), 0x1115538du);
  /* 1115538d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11155390 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11155392 call 0x11156250 */
  push32(0x11155397u); f_11156250();
  /* 11155397 mov esi, esp */
  ESI = (ESP);
  /* 11155399 push 0x1117e488 */
  push32((uint32_t)(0x1117e488u));
  /* 1115539e call dword ptr [0x111864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864ac))), 0x111553a4u);
  /* 111553a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111553a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111553a9 call 0x11156250 */
  push32(0x111553aeu); f_11156250();
L_111553ae:;
  /* 111553ae mov esi, esp */
  ESI = (ESP);
  /* 111553b0 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 111553b2 call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x111553b8u);
  /* 111553b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111553bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111553bd call 0x11156250 */
  push32(0x111553c2u); f_11156250();
  /* 111553c2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111553c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111553c9 jne 0x1115545e */
  if (!C.zf) goto L_1115545e;
  /* 111553cf mov esi, esp */
  ESI = (ESP);
  /* 111553d1 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 111553d3 call dword ptr [0x11186468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186468))), 0x111553d9u);
  /* 111553d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111553dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111553de call 0x11156250 */
  push32(0x111553e3u); f_11156250();
  /* 111553e3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111553e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111553ea je 0x1115545e */
  if (C.zf) goto L_1115545e;
  /* 111553ec mov esi, esp */
  ESI = (ESP);
  /* 111553ee push 3 */
  push32((uint32_t)(0x3u));
  /* 111553f0 call dword ptr [0x11186510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186510))), 0x111553f6u);
  /* 111553f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111553f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111553fb call 0x11156250 */
  push32(0x11155400u); f_11156250();
  /* 11155400 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11155405 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11155407 je 0x1115545e */
  if (C.zf) goto L_1115545e;
  /* 11155409 mov esi, esp */
  ESI = (ESP);
  /* 1115540b push 0 */
  push32((uint32_t)(0x0u));
  /* 1115540d push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1115540f call dword ptr [0x1118646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118646c))), 0x11155415u);
  /* 11155415 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11155418 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115541a call 0x11156250 */
  push32(0x1115541fu); f_11156250();
  /* 1115541f mov esi, esp */
  ESI = (ESP);
  /* 11155421 push 0x1117e47c */
  push32((uint32_t)(0x1117e47cu));
  /* 11155426 call dword ptr [0x111864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111864ac))), 0x1115542cu);
  /* 1115542c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115542f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11155431 call 0x11156250 */
  push32(0x11155436u); f_11156250();
  /* 11155436 mov esi, esp */
  ESI = (ESP);
  /* 11155438 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1115543a call dword ptr [0x11186474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186474))), 0x11155440u);
  /* 11155440 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11155443 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11155445 call 0x11156250 */
  push32(0x1115544au); f_11156250();
  /* 1115544a mov esi, esp */
  ESI = (ESP);
  /* 1115544c push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1115544e call dword ptr [0x11186470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186470))), 0x11155454u);
  /* 11155454 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11155457 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11155459 call 0x11156250 */
  push32(0x1115545eu); f_11156250();
L_1115545e:;
  /* 1115545e pop edi */
  EDI = (pop32());
  /* 1115545f pop esi */
  ESI = (pop32());
  /* 11155460 pop ebx */
  EBX = (pop32());
  /* 11155461 add esp, 0x58 */
  { uint32_t _a=(ESP),_b=(0x58u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11155464 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11155466 call 0x11156250 */
  push32(0x1115546bu); f_11156250();
  /* 1115546b mov esp, ebp */
  ESP = (EBP);
  /* 1115546d pop ebp */
  EBP = (pop32());
  /* 1115546e ret  */
  ESPCHK(0x11152370u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x11156250 (56 bytes, 28 insns) */
void f_11156250(void) {
  FTRACE(0x11156250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11156250 jne 0x11156253 */
  if (!C.zf) goto L_11156253;
  /* 11156252 ret  */
  ESPCHK(0x11156250u, _esp0);
  ESP += 4; return;
L_11156253:;
  /* 11156253 push ebp */
  push32((uint32_t)(EBP));
  /* 11156254 mov ebp, esp */
  EBP = (ESP);
  /* 11156256 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11156259 push eax */
  push32((uint32_t)(EAX));
  /* 1115625a push edx */
  push32((uint32_t)(EDX));
  /* 1115625b push ebx */
  push32((uint32_t)(EBX));
  /* 1115625c push esi */
  push32((uint32_t)(ESI));
  /* 1115625d push edi */
  push32((uint32_t)(EDI));
  /* 1115625e push 0x1117e580 */
  push32((uint32_t)(0x1117e580u));
  /* 11156263 push 0x1117e57c */
  push32((uint32_t)(0x1117e57cu));
  /* 11156268 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1115626a push 0x1117e56c */
  push32((uint32_t)(0x1117e56cu));
  /* 1115626f push 1 */
  push32((uint32_t)(0x1u));
  /* 11156271 call 0x11156620 */
  push32(0x11156276u); f_11156620();
  /* 11156276 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11156279 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115627c jne 0x1115627f */
  if (!C.zf) goto L_1115627f;
  /* 1115627e int3  */
  x86_unimpl("int3 @ 0x1115627e");
L_1115627f:;
  /* 1115627f pop edi */
  EDI = (pop32());
  /* 11156280 pop esi */
  ESI = (pop32());
  /* 11156281 pop ebx */
  EBX = (pop32());
  /* 11156282 pop edx */
  EDX = (pop32());
  /* 11156283 pop eax */
  EAX = (pop32());
  /* 11156284 mov esp, ebp */
  ESP = (EBP);
  /* 11156286 pop ebp */
  EBP = (pop32());
  /* 11156287 ret  */
  ESPCHK(0x11156250u, _esp0);
  ESP += 4; return;
}

/* FUN_10006290 @ 0x11156290 (313 bytes, 78 insns) */
void f_11156290(void) {
  FTRACE(0x11156290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11156290 push ebp */
  push32((uint32_t)(EBP));
  /* 11156291 mov ebp, esp */
  EBP = (ESP);
  /* 11156293 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156297 jne 0x11156357 */
  if (!C.zf) goto L_11156357;
  /* 1115629d call dword ptr [0x111863b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863b8))), 0x111562a3u);
  /* 111562a3 mov dword ptr [0x111837f0], eax */
  w32((uint32_t)(0x111837f0), (EAX));
  /* 111562a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 111562aa call 0x11159d50 */
  push32(0x111562afu); f_11159d50();
  /* 111562af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111562b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111562b4 jne 0x111562bd */
  if (!C.zf) goto L_111562bd;
  /* 111562b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111562b8 jmp 0x111563c5 */
  goto L_111563c5;
L_111562bd:;
  /* 111562bd mov eax, dword ptr [0x111837f0] */
  EAX = (r32((uint32_t)(0x111837f0)));
  /* 111562c2 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 111562c5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111562ca mov dword ptr [0x111837fc], eax */
  w32((uint32_t)(0x111837fc), (EAX));
  /* 111562cf mov ecx, dword ptr [0x111837f0] */
  ECX = (r32((uint32_t)(0x111837f0)));
  /* 111562d5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 111562db mov dword ptr [0x111837f8], ecx */
  w32((uint32_t)(0x111837f8), (ECX));
  /* 111562e1 mov edx, dword ptr [0x111837f8] */
  EDX = (r32((uint32_t)(0x111837f8)));
  /* 111562e7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 111562ea add edx, dword ptr [0x111837fc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x111837fc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111562f0 mov dword ptr [0x111837f4], edx */
  w32((uint32_t)(0x111837f4), (EDX));
  /* 111562f6 mov eax, dword ptr [0x111837f0] */
  EAX = (r32((uint32_t)(0x111837f0)));
  /* 111562fb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 111562fe and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11156303 mov dword ptr [0x111837f0], eax */
  w32((uint32_t)(0x111837f0), (EAX));
  /* 11156308 call 0x11156ec0 */
  push32(0x1115630du); f_11156ec0();
  /* 1115630d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115630f jne 0x1115631d */
  if (!C.zf) goto L_1115631d;
  /* 11156311 call 0x11159da0 */
  push32(0x11156316u); f_11159da0();
  /* 11156316 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11156318 jmp 0x111563c5 */
  goto L_111563c5;
L_1115631d:;
  /* 1115631d call dword ptr [0x111863b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863b4))), 0x11156323u);
  /* 11156323 mov dword ptr [0x1118532c], eax */
  w32((uint32_t)(0x1118532c), (EAX));
  /* 11156328 call 0x11159b30 */
  push32(0x1115632du); f_11159b30();
  /* 1115632d mov dword ptr [0x111837d8], eax */
  w32((uint32_t)(0x111837d8), (EAX));
  /* 11156332 call 0x11157170 */
  push32(0x11156337u); f_11157170();
  /* 11156337 call 0x11159620 */
  push32(0x1115633cu); f_11159620();
  /* 1115633c call 0x111594d0 */
  push32(0x11156341u); f_111594d0();
  /* 11156341 call 0x11156cc0 */
  push32(0x11156346u); f_11156cc0();
  /* 11156346 mov ecx, dword ptr [0x111837d4] */
  ECX = (r32((uint32_t)(0x111837d4)));
  /* 1115634c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115634f mov dword ptr [0x111837d4], ecx */
  w32((uint32_t)(0x111837d4), (ECX));
  /* 11156355 jmp 0x111563c0 */
  goto L_111563c0;
L_11156357:;
  /* 11156357 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115635b jne 0x111563b0 */
  if (!C.zf) goto L_111563b0;
  /* 1115635d cmp dword ptr [0x111837d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111837d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156364 jle 0x111563aa */
  if ((C.zf||C.sf!=C.of)) goto L_111563aa;
  /* 11156366 mov edx, dword ptr [0x111837d4] */
  EDX = (r32((uint32_t)(0x111837d4)));
  /* 1115636c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115636f mov dword ptr [0x111837d4], edx */
  w32((uint32_t)(0x111837d4), (EDX));
  /* 11156375 cmp dword ptr [0x11183828], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183828))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115637c jne 0x11156383 */
  if (!C.zf) goto L_11156383;
  /* 1115637e call 0x11156d40 */
  push32(0x11156383u); f_11156d40();
L_11156383:;
  /* 11156383 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11156385 call 0x11158a70 */
  push32(0x1115638au); f_11158a70();
  /* 1115638a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115638d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11156390 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11156392 je 0x11156399 */
  if (C.zf) goto L_11156399;
  /* 11156394 call 0x11159380 */
  push32(0x11156399u); f_11159380();
L_11156399:;
  /* 11156399 call 0x111574a0 */
  push32(0x1115639eu); f_111574a0();
  /* 1115639e call 0x11156f50 */
  push32(0x111563a3u); f_11156f50();
  /* 111563a3 call 0x11159da0 */
  push32(0x111563a8u); f_11159da0();
  /* 111563a8 jmp 0x111563ae */
  goto L_111563ae;
L_111563aa:;
  /* 111563aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111563ac jmp 0x111563c5 */
  goto L_111563c5;
L_111563ae:;
  /* 111563ae jmp 0x111563c0 */
  goto L_111563c0;
L_111563b0:;
  /* 111563b0 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111563b4 jne 0x111563c0 */
  if (!C.zf) goto L_111563c0;
  /* 111563b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 111563b8 call 0x11157040 */
  push32(0x111563bdu); f_11157040();
  /* 111563bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111563c0:;
  /* 111563c0 mov eax, 1 */
  EAX = (0x1u);
L_111563c5:;
  /* 111563c5 pop ebp */
  EBP = (pop32());
  /* 111563c6 ret 0xc */
  ESPCHK(0x11156290u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x111563d0 (243 bytes, 86 insns) */
void f_111563d0(void) {
  FTRACE(0x111563d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111563d0 push ebp */
  push32((uint32_t)(EBP));
  /* 111563d1 mov ebp, esp */
  EBP = (ESP);
  /* 111563d3 push ecx */
  push32((uint32_t)(ECX));
  /* 111563d4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 111563db cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111563df jne 0x111563f1 */
  if (!C.zf) goto L_111563f1;
  /* 111563e1 cmp dword ptr [0x111837d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111837d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111563e8 jne 0x111563f1 */
  if (!C.zf) goto L_111563f1;
  /* 111563ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111563ec jmp 0x111564bd */
  goto L_111564bd;
L_111563f1:;
  /* 111563f1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111563f5 je 0x111563fd */
  if (C.zf) goto L_111563fd;
  /* 111563f7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111563fb jne 0x1115643f */
  if (!C.zf) goto L_1115643f;
L_111563fd:;
  /* 111563fd cmp dword ptr [0x1118533c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1118533c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156404 je 0x1115641b */
  if (C.zf) goto L_1115641b;
  /* 11156406 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11156409 push eax */
  push32((uint32_t)(EAX));
  /* 1115640a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115640d push ecx */
  push32((uint32_t)(ECX));
  /* 1115640e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11156411 push edx */
  push32((uint32_t)(EDX));
  /* 11156412 call dword ptr [0x1118533c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118533c))), 0x11156418u);
  /* 11156418 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1115641b:;
  /* 1115641b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115641f je 0x11156435 */
  if (C.zf) goto L_11156435;
  /* 11156421 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11156424 push eax */
  push32((uint32_t)(EAX));
  /* 11156425 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11156428 push ecx */
  push32((uint32_t)(ECX));
  /* 11156429 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115642c push edx */
  push32((uint32_t)(EDX));
  /* 1115642d call 0x11156290 */
  push32(0x11156432u); f_11156290();
  /* 11156432 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11156435:;
  /* 11156435 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156439 jne 0x1115643f */
  if (!C.zf) goto L_1115643f;
  /* 1115643b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115643d jmp 0x111564bd */
  goto L_111564bd;
L_1115643f:;
  /* 1115643f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11156442 push eax */
  push32((uint32_t)(EAX));
  /* 11156443 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11156446 push ecx */
  push32((uint32_t)(ECX));
  /* 11156447 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115644a push edx */
  push32((uint32_t)(EDX));
  /* 1115644b call 0x1115100a */
  push32(0x11156450u); f_1115100a();
  /* 11156450 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11156453 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156457 jne 0x1115646e */
  if (!C.zf) goto L_1115646e;
  /* 11156459 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115645d jne 0x1115646e */
  if (!C.zf) goto L_1115646e;
  /* 1115645f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11156462 push eax */
  push32((uint32_t)(EAX));
  /* 11156463 push 0 */
  push32((uint32_t)(0x0u));
  /* 11156465 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11156468 push ecx */
  push32((uint32_t)(ECX));
  /* 11156469 call 0x11156290 */
  push32(0x1115646eu); f_11156290();
L_1115646e:;
  /* 1115646e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156472 je 0x1115647a */
  if (C.zf) goto L_1115647a;
  /* 11156474 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156478 jne 0x111564ba */
  if (!C.zf) goto L_111564ba;
L_1115647a:;
  /* 1115647a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115647d push edx */
  push32((uint32_t)(EDX));
  /* 1115647e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11156481 push eax */
  push32((uint32_t)(EAX));
  /* 11156482 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11156485 push ecx */
  push32((uint32_t)(ECX));
  /* 11156486 call 0x11156290 */
  push32(0x1115648bu); f_11156290();
  /* 1115648b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115648d jne 0x11156496 */
  if (!C.zf) goto L_11156496;
  /* 1115648f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11156496:;
  /* 11156496 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115649a je 0x111564ba */
  if (C.zf) goto L_111564ba;
  /* 1115649c cmp dword ptr [0x1118533c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1118533c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111564a3 je 0x111564ba */
  if (C.zf) goto L_111564ba;
  /* 111564a5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111564a8 push edx */
  push32((uint32_t)(EDX));
  /* 111564a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111564ac push eax */
  push32((uint32_t)(EAX));
  /* 111564ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111564b0 push ecx */
  push32((uint32_t)(ECX));
  /* 111564b1 call dword ptr [0x1118533c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118533c))), 0x111564b7u);
  /* 111564b7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111564ba:;
  /* 111564ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_111564bd:;
  /* 111564bd mov esp, ebp */
  ESP = (EBP);
  /* 111564bf pop ebp */
  EBP = (pop32());
  /* 111564c0 ret 0xc */
  ESPCHK(0x111563d0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x111564d0 (58 bytes, 18 insns) */
void f_111564d0(void) {
  FTRACE(0x111564d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111564d0 push ebp */
  push32((uint32_t)(EBP));
  /* 111564d1 mov ebp, esp */
  EBP = (ESP);
  /* 111564d3 cmp dword ptr [0x111837e0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111837e0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111564da je 0x111564ee */
  if (C.zf) goto L_111564ee;
  /* 111564dc cmp dword ptr [0x111837e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111837e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111564e3 jne 0x111564f3 */
  if (!C.zf) goto L_111564f3;
  /* 111564e5 cmp dword ptr [0x111837e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111837e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111564ec jne 0x111564f3 */
  if (!C.zf) goto L_111564f3;
L_111564ee:;
  /* 111564ee call 0x11159e40 */
  push32(0x111564f3u); f_11159e40();
L_111564f3:;
  /* 111564f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111564f6 push eax */
  push32((uint32_t)(EAX));
  /* 111564f7 call 0x11159e90 */
  push32(0x111564fcu); f_11159e90();
  /* 111564fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111564ff push 0xff */
  push32((uint32_t)(0xffu));
  /* 11156504 call dword ptr [0x11181a30] */
  call_ind((uint32_t)(r32((uint32_t)(0x11181a30))), 0x1115650au);
  /* 1115650a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115650d pop ebp */
  EBP = (pop32());
  /* 1115650e ret  */
  ESPCHK(0x111564d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006510 @ 0x11156510 (11 bytes, 5 insns) */
void f_11156510(void) {
  FTRACE(0x11156510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11156510 push ebp */
  push32((uint32_t)(EBP));
  /* 11156511 mov ebp, esp */
  EBP = (ESP);
  /* 11156513 call dword ptr [0x111863bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863bc))), 0x11156519u);
  /* 11156519 pop ebp */
  EBP = (pop32());
  /* 1115651a ret  */
  ESPCHK(0x11156510u, _esp0);
  ESP += 4; return;
}

/* FUN_10006520 @ 0x11156520 (87 bytes, 30 insns) */
void f_11156520(void) {
  FTRACE(0x11156520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11156520 push ebp */
  push32((uint32_t)(EBP));
  /* 11156521 mov ebp, esp */
  EBP = (ESP);
  /* 11156523 push ecx */
  push32((uint32_t)(ECX));
  /* 11156524 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156528 jl 0x11156530 */
  if ((C.sf!=C.of)) goto L_11156530;
  /* 1115652a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115652e jl 0x11156535 */
  if ((C.sf!=C.of)) goto L_11156535;
L_11156530:;
  /* 11156530 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11156533 jmp 0x11156573 */
  goto L_11156573;
L_11156535:;
  /* 11156535 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156539 jne 0x11156547 */
  if (!C.zf) goto L_11156547;
  /* 1115653b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115653e mov eax, dword ptr [eax*4 + 0x11181a38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11181a38)));
  /* 11156545 jmp 0x11156573 */
  goto L_11156573;
L_11156547:;
  /* 11156547 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115654a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 1115654d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115654f je 0x11156556 */
  if (C.zf) goto L_11156556;
  /* 11156551 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11156554 jmp 0x11156573 */
  goto L_11156573;
L_11156556:;
  /* 11156556 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11156559 mov eax, dword ptr [edx*4 + 0x11181a38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11181a38)));
  /* 11156560 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11156563 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11156566 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11156569 mov dword ptr [ecx*4 + 0x11181a38], edx */
  w32((uint32_t)(ECX*4 + 0x11181a38), (EDX));
  /* 11156570 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11156573:;
  /* 11156573 mov esp, ebp */
  ESP = (EBP);
  /* 11156575 pop ebp */
  EBP = (pop32());
  /* 11156576 ret  */
  ESPCHK(0x11156520u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x11156580 (126 bytes, 38 insns) */
void f_11156580(void) {
  FTRACE(0x11156580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11156580 push ebp */
  push32((uint32_t)(EBP));
  /* 11156581 mov ebp, esp */
  EBP = (ESP);
  /* 11156583 push ecx */
  push32((uint32_t)(ECX));
  /* 11156584 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156588 jl 0x11156590 */
  if ((C.sf!=C.of)) goto L_11156590;
  /* 1115658a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115658e jl 0x11156597 */
  if ((C.sf!=C.of)) goto L_11156597;
L_11156590:;
  /* 11156590 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 11156595 jmp 0x111565fa */
  goto L_111565fa;
L_11156597:;
  /* 11156597 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115659b jne 0x111565a9 */
  if (!C.zf) goto L_111565a9;
  /* 1115659d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111565a0 mov eax, dword ptr [eax*4 + 0x11181a44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11181a44)));
  /* 111565a7 jmp 0x111565fa */
  goto L_111565fa;
L_111565a9:;
  /* 111565a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111565ac mov edx, dword ptr [ecx*4 + 0x11181a44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11181a44)));
  /* 111565b3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111565b6 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111565ba jne 0x111565d0 */
  if (!C.zf) goto L_111565d0;
  /* 111565bc push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 111565be call dword ptr [0x111863c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863c0))), 0x111565c4u);
  /* 111565c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111565c7 mov dword ptr [ecx*4 + 0x11181a44], eax */
  w32((uint32_t)(ECX*4 + 0x11181a44), (EAX));
  /* 111565ce jmp 0x111565f7 */
  goto L_111565f7;
L_111565d0:;
  /* 111565d0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111565d4 jne 0x111565ea */
  if (!C.zf) goto L_111565ea;
  /* 111565d6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 111565d8 call dword ptr [0x111863c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863c0))), 0x111565deu);
  /* 111565de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111565e1 mov dword ptr [edx*4 + 0x11181a44], eax */
  w32((uint32_t)(EDX*4 + 0x11181a44), (EAX));
  /* 111565e8 jmp 0x111565f7 */
  goto L_111565f7;
L_111565ea:;
  /* 111565ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111565ed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111565f0 mov dword ptr [eax*4 + 0x11181a44], ecx */
  w32((uint32_t)(EAX*4 + 0x11181a44), (ECX));
L_111565f7:;
  /* 111565f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_111565fa:;
  /* 111565fa mov esp, ebp */
  ESP = (EBP);
  /* 111565fc pop ebp */
  EBP = (pop32());
  /* 111565fd ret  */
  ESPCHK(0x11156580u, _esp0);
  ESP += 4; return;
}

/* FUN_10006600 @ 0x11156600 (28 bytes, 11 insns) */
void f_11156600(void) {
  FTRACE(0x11156600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11156600 push ebp */
  push32((uint32_t)(EBP));
  /* 11156601 mov ebp, esp */
  EBP = (ESP);
  /* 11156603 push ecx */
  push32((uint32_t)(ECX));
  /* 11156604 mov eax, dword ptr [0x11185320] */
  EAX = (r32((uint32_t)(0x11185320)));
  /* 11156609 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1115660c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115660f mov dword ptr [0x11185320], ecx */
  w32((uint32_t)(0x11185320), (ECX));
  /* 11156615 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11156618 mov esp, ebp */
  ESP = (EBP);
  /* 1115661a pop ebp */
  EBP = (pop32());
  /* 1115661b ret  */
  ESPCHK(0x11156600u, _esp0);
  ESP += 4; return;
}

/* FUN_10006620 @ 0x11156620 (912 bytes, 248 insns) */
void f_11156620(void) {
  FTRACE(0x11156620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11156620 push ebp */
  push32((uint32_t)(EBP));
  /* 11156621 mov ebp, esp */
  EBP = (ESP);
  /* 11156623 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 11156628 call 0x1115a700 */
  push32(0x1115662du); f_1115a700();
  /* 1115662d push edi */
  push32((uint32_t)(EDI));
  /* 1115662e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 11156635 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1115663a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115663c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 11156642 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11156644 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11156646 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11156647 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 1115664e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11156653 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11156655 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 1115665b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1115665d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 1115665f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11156660 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 11156667 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1115666c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115666e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 11156674 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11156676 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11156678 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11156679 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 1115667c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 11156682 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156686 jl 0x1115668e */
  if ((C.sf!=C.of)) goto L_1115668e;
  /* 11156688 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115668c jl 0x11156696 */
  if ((C.sf!=C.of)) goto L_11156696;
L_1115668e:;
  /* 1115668e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11156691 jmp 0x111569ab */
  goto L_111569ab;
L_11156696:;
  /* 11156696 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115669a jne 0x11156740 */
  if (!C.zf) goto L_11156740;
  /* 111566a0 push 0x11181a34 */
  push32((uint32_t)(0x11181a34u));
  /* 111566a5 call dword ptr [0x111862e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111862e8))), 0x111566abu);
  /* 111566ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111566ad jle 0x11156740 */
  if ((C.zf||C.sf!=C.of)) goto L_11156740;
  /* 111566b3 cmp dword ptr [0x111837e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111837e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111566ba jne 0x111566fe */
  if (!C.zf) goto L_111566fe;
  /* 111566bc push 0x1117e728 */
  push32((uint32_t)(0x1117e728u));
  /* 111566c1 call dword ptr [0x111863d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863d4))), 0x111566c7u);
  /* 111566c7 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 111566cd cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111566d4 je 0x111566f6 */
  if (C.zf) goto L_111566f6;
  /* 111566d6 push 0x1117e71c */
  push32((uint32_t)(0x1117e71cu));
  /* 111566db mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 111566e1 push ecx */
  push32((uint32_t)(ECX));
  /* 111566e2 call dword ptr [0x111863d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863d0))), 0x111566e8u);
  /* 111566e8 mov dword ptr [0x111837e8], eax */
  w32((uint32_t)(0x111837e8), (EAX));
  /* 111566ed cmp dword ptr [0x111837e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111837e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111566f4 jne 0x111566fe */
  if (!C.zf) goto L_111566fe;
L_111566f6:;
  /* 111566f6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111566f9 jmp 0x111569ab */
  goto L_111569ab;
L_111566fe:;
  /* 111566fe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11156701 push edx */
  push32((uint32_t)(EDX));
  /* 11156702 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11156705 push eax */
  push32((uint32_t)(EAX));
  /* 11156706 push 0x1117e6e8 */
  push32((uint32_t)(0x1117e6e8u));
  /* 1115670b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11156711 push ecx */
  push32((uint32_t)(ECX));
  /* 11156712 call dword ptr [0x111837e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111837e8))), 0x11156718u);
  /* 11156718 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115671b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11156721 push edx */
  push32((uint32_t)(EDX));
  /* 11156722 call dword ptr [0x111863cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863cc))), 0x11156728u);
  /* 11156728 push 0x11181a34 */
  push32((uint32_t)(0x11181a34u));
  /* 1115672d call dword ptr [0x111863c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863c8))), 0x11156733u);
  /* 11156733 call 0x11156510 */
  push32(0x11156738u); f_11156510();
  /* 11156738 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1115673b jmp 0x111569ab */
  goto L_111569ab;
L_11156740:;
  /* 11156740 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156744 je 0x1115677d */
  if (C.zf) goto L_1115677d;
  /* 11156746 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 1115674c push eax */
  push32((uint32_t)(EAX));
  /* 1115674d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11156750 push ecx */
  push32((uint32_t)(ECX));
  /* 11156751 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 11156756 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 1115675c push edx */
  push32((uint32_t)(EDX));
  /* 1115675d call 0x1115a600 */
  push32(0x11156762u); f_1115a600();
  /* 11156762 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11156765 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11156767 jge 0x1115677d */
  if ((C.sf==C.of)) goto L_1115677d;
  /* 11156769 push 0x1117e6bc */
  push32((uint32_t)(0x1117e6bcu));
  /* 1115676e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 11156774 push eax */
  push32((uint32_t)(EAX));
  /* 11156775 call 0x1115a510 */
  push32(0x1115677au); f_1115a510();
  /* 1115677a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1115677d:;
  /* 1115677d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156781 jne 0x111567b5 */
  if (!C.zf) goto L_111567b5;
  /* 11156783 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156787 je 0x11156795 */
  if (C.zf) goto L_11156795;
  /* 11156789 mov dword ptr [ebp - 0x3028], 0x1117e6a8 */
  w32((uint32_t)(EBP + -0x3028), (0x1117e6a8u));
  /* 11156793 jmp 0x1115679f */
  goto L_1115679f;
L_11156795:;
  /* 11156795 mov dword ptr [ebp - 0x3028], 0x1117e694 */
  w32((uint32_t)(EBP + -0x3028), (0x1117e694u));
L_1115679f:;
  /* 1115679f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 111567a5 push ecx */
  push32((uint32_t)(ECX));
  /* 111567a6 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 111567ac push edx */
  push32((uint32_t)(EDX));
  /* 111567ad call 0x1115a510 */
  push32(0x111567b2u); f_1115a510();
  /* 111567b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111567b5:;
  /* 111567b5 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 111567bb push eax */
  push32((uint32_t)(EAX));
  /* 111567bc lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 111567c2 push ecx */
  push32((uint32_t)(ECX));
  /* 111567c3 call 0x1115a520 */
  push32(0x111567c8u); f_1115a520();
  /* 111567c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111567cb cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111567cf jne 0x1115680a */
  if (!C.zf) goto L_1115680a;
  /* 111567d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111567d4 mov eax, dword ptr [edx*4 + 0x11181a38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11181a38)));
  /* 111567db and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 111567de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111567e0 je 0x111567f6 */
  if (C.zf) goto L_111567f6;
  /* 111567e2 push 0x1117e690 */
  push32((uint32_t)(0x1117e690u));
  /* 111567e7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 111567ed push ecx */
  push32((uint32_t)(ECX));
  /* 111567ee call 0x1115a520 */
  push32(0x111567f3u); f_1115a520();
  /* 111567f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111567f6:;
  /* 111567f6 push 0x1117e68c */
  push32((uint32_t)(0x1117e68cu));
  /* 111567fb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11156801 push edx */
  push32((uint32_t)(EDX));
  /* 11156802 call 0x1115a520 */
  push32(0x11156807u); f_1115a520();
  /* 11156807 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1115680a:;
  /* 1115680a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115680e je 0x11156852 */
  if (C.zf) goto L_11156852;
  /* 11156810 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 11156816 push eax */
  push32((uint32_t)(EAX));
  /* 11156817 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115681a push ecx */
  push32((uint32_t)(ECX));
  /* 1115681b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115681e push edx */
  push32((uint32_t)(EDX));
  /* 1115681f push 0x1117e680 */
  push32((uint32_t)(0x1117e680u));
  /* 11156824 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11156829 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1115682f push eax */
  push32((uint32_t)(EAX));
  /* 11156830 call 0x1115a410 */
  push32(0x11156835u); f_1115a410();
  /* 11156835 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11156838 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115683a jge 0x11156850 */
  if ((C.sf==C.of)) goto L_11156850;
  /* 1115683c push 0x1117e6bc */
  push32((uint32_t)(0x1117e6bcu));
  /* 11156841 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11156847 push ecx */
  push32((uint32_t)(ECX));
  /* 11156848 call 0x1115a510 */
  push32(0x1115684du); f_1115a510();
  /* 1115684d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11156850:;
  /* 11156850 jmp 0x11156868 */
  goto L_11156868;
L_11156852:;
  /* 11156852 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11156858 push edx */
  push32((uint32_t)(EDX));
  /* 11156859 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1115685f push eax */
  push32((uint32_t)(EAX));
  /* 11156860 call 0x1115a510 */
  push32(0x11156865u); f_1115a510();
  /* 11156865 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11156868:;
  /* 11156868 cmp dword ptr [0x11185320], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11185320))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115686f je 0x111568ac */
  if (C.zf) goto L_111568ac;
  /* 11156871 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 11156877 push ecx */
  push32((uint32_t)(ECX));
  /* 11156878 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 1115687e push edx */
  push32((uint32_t)(EDX));
  /* 1115687f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11156882 push eax */
  push32((uint32_t)(EAX));
  /* 11156883 call dword ptr [0x11185320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11185320))), 0x11156889u);
  /* 11156889 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115688c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115688e je 0x111568ac */
  if (C.zf) goto L_111568ac;
  /* 11156890 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156894 jne 0x111568a1 */
  if (!C.zf) goto L_111568a1;
  /* 11156896 push 0x11181a34 */
  push32((uint32_t)(0x11181a34u));
  /* 1115689b call dword ptr [0x111863c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863c8))), 0x111568a1u);
L_111568a1:;
  /* 111568a1 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 111568a7 jmp 0x111569ab */
  goto L_111569ab;
L_111568ac:;
  /* 111568ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111568af mov edx, dword ptr [ecx*4 + 0x11181a38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11181a38)));
  /* 111568b6 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 111568b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111568bb je 0x111568fb */
  if (C.zf) goto L_111568fb;
  /* 111568bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111568c0 cmp dword ptr [eax*4 + 0x11181a44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11181a44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111568c8 je 0x111568fb */
  if (C.zf) goto L_111568fb;
  /* 111568ca push 0 */
  push32((uint32_t)(0x0u));
  /* 111568cc lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 111568d2 push ecx */
  push32((uint32_t)(ECX));
  /* 111568d3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 111568d9 push edx */
  push32((uint32_t)(EDX));
  /* 111568da call 0x1115a390 */
  push32(0x111568dfu); f_1115a390();
  /* 111568df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111568e2 push eax */
  push32((uint32_t)(EAX));
  /* 111568e3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 111568e9 push eax */
  push32((uint32_t)(EAX));
  /* 111568ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111568ed mov edx, dword ptr [ecx*4 + 0x11181a44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11181a44)));
  /* 111568f4 push edx */
  push32((uint32_t)(EDX));
  /* 111568f5 call dword ptr [0x111863c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863c4))), 0x111568fbu);
L_111568fb:;
  /* 111568fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111568fe mov ecx, dword ptr [eax*4 + 0x11181a38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11181a38)));
  /* 11156905 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11156908 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115690a je 0x11156919 */
  if (C.zf) goto L_11156919;
  /* 1115690c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11156912 push edx */
  push32((uint32_t)(EDX));
  /* 11156913 call dword ptr [0x111863cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863cc))), 0x11156919u);
L_11156919:;
  /* 11156919 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115691c mov ecx, dword ptr [eax*4 + 0x11181a38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11181a38)));
  /* 11156923 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11156926 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11156928 je 0x11156998 */
  if (C.zf) goto L_11156998;
  /* 1115692a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115692e je 0x1115694d */
  if (C.zf) goto L_1115694d;
  /* 11156930 push 0xa */
  push32((uint32_t)(0xau));
  /* 11156932 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 11156938 push edx */
  push32((uint32_t)(EDX));
  /* 11156939 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115693c push eax */
  push32((uint32_t)(EAX));
  /* 1115693d call 0x1115a0a0 */
  push32(0x11156942u); f_1115a0a0();
  /* 11156942 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11156945 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 1115694b jmp 0x11156957 */
  goto L_11156957;
L_1115694d:;
  /* 1115694d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_11156957:;
  /* 11156957 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 1115695d push ecx */
  push32((uint32_t)(ECX));
  /* 1115695e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11156961 push edx */
  push32((uint32_t)(EDX));
  /* 11156962 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 11156968 push eax */
  push32((uint32_t)(EAX));
  /* 11156969 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115696c push ecx */
  push32((uint32_t)(ECX));
  /* 1115696d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11156970 push edx */
  push32((uint32_t)(EDX));
  /* 11156971 call 0x111569b0 */
  push32(0x11156976u); f_111569b0();
  /* 11156976 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11156979 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 1115697f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156983 jne 0x11156990 */
  if (!C.zf) goto L_11156990;
  /* 11156985 push 0x11181a34 */
  push32((uint32_t)(0x11181a34u));
  /* 1115698a call dword ptr [0x111863c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863c8))), 0x11156990u);
L_11156990:;
  /* 11156990 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11156996 jmp 0x111569ab */
  goto L_111569ab;
L_11156998:;
  /* 11156998 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115699c jne 0x111569a9 */
  if (!C.zf) goto L_111569a9;
  /* 1115699e push 0x11181a34 */
  push32((uint32_t)(0x11181a34u));
  /* 111569a3 call dword ptr [0x111863c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863c8))), 0x111569a9u);
L_111569a9:;
  /* 111569a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111569ab:;
  /* 111569ab pop edi */
  EDI = (pop32());
  /* 111569ac mov esp, ebp */
  ESP = (EBP);
  /* 111569ae pop ebp */
  EBP = (pop32());
  /* 111569af ret  */
  ESPCHK(0x11156620u, _esp0);
  ESP += 4; return;
}

/* FUN_100069b0 @ 0x111569b0 (780 bytes, 197 insns) */
void f_111569b0(void) {
  FTRACE(0x111569b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111569b0 push ebp */
  push32((uint32_t)(EBP));
  /* 111569b1 mov ebp, esp */
  EBP = (ESP);
  /* 111569b3 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 111569b8 call 0x1115a700 */
  push32(0x111569bdu); f_1115a700();
L_111569bd:;
  /* 111569bd cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111569c1 jne 0x111569e8 */
  if (!C.zf) goto L_111569e8;
  /* 111569c3 push 0x1117e878 */
  push32((uint32_t)(0x1117e878u));
  /* 111569c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 111569ca push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 111569cf push 0x1117e86c */
  push32((uint32_t)(0x1117e86cu));
  /* 111569d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 111569d6 call 0x11156620 */
  push32(0x111569dbu); f_11156620();
  /* 111569db add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111569de cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111569e1 jne 0x111569e8 */
  if (!C.zf) goto L_111569e8;
  /* 111569e3 call 0x11156510 */
  push32(0x111569e8u); f_11156510();
L_111569e8:;
  /* 111569e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111569ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111569ec jne 0x111569bd */
  if (!C.zf) goto L_111569bd;
  /* 111569ee push 0x104 */
  push32((uint32_t)(0x104u));
  /* 111569f3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 111569f9 push ecx */
  push32((uint32_t)(ECX));
  /* 111569fa push 0 */
  push32((uint32_t)(0x0u));
  /* 111569fc call dword ptr [0x111862e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111862e4))), 0x11156a02u);
  /* 11156a02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11156a04 jne 0x11156a1a */
  if (!C.zf) goto L_11156a1a;
  /* 11156a06 push 0x1117e854 */
  push32((uint32_t)(0x1117e854u));
  /* 11156a0b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 11156a11 push edx */
  push32((uint32_t)(EDX));
  /* 11156a12 call 0x1115a510 */
  push32(0x11156a17u); f_1115a510();
  /* 11156a17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11156a1a:;
  /* 11156a1a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 11156a20 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11156a23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11156a26 push ecx */
  push32((uint32_t)(ECX));
  /* 11156a27 call 0x1115a390 */
  push32(0x11156a2cu); f_1115a390();
  /* 11156a2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11156a2f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156a32 jbe 0x11156a5d */
  if ((C.cf||C.zf)) goto L_11156a5d;
  /* 11156a34 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11156a37 push edx */
  push32((uint32_t)(EDX));
  /* 11156a38 call 0x1115a390 */
  push32(0x11156a3du); f_1115a390();
  /* 11156a3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11156a40 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11156a43 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11156a47 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11156a4a push 3 */
  push32((uint32_t)(0x3u));
  /* 11156a4c push 0x1117e850 */
  push32((uint32_t)(0x1117e850u));
  /* 11156a51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11156a54 push eax */
  push32((uint32_t)(EAX));
  /* 11156a55 call 0x1115ad80 */
  push32(0x11156a5au); f_1115ad80();
  /* 11156a5a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11156a5d:;
  /* 11156a5d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11156a60 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 11156a66 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156a6d je 0x11156ab8 */
  if (C.zf) goto L_11156ab8;
  /* 11156a6f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11156a75 push edx */
  push32((uint32_t)(EDX));
  /* 11156a76 call 0x1115a390 */
  push32(0x11156a7bu); f_1115a390();
  /* 11156a7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11156a7e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156a81 jbe 0x11156ab8 */
  if ((C.cf||C.zf)) goto L_11156ab8;
  /* 11156a83 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11156a89 push eax */
  push32((uint32_t)(EAX));
  /* 11156a8a call 0x1115a390 */
  push32(0x11156a8fu); f_1115a390();
  /* 11156a8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11156a92 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11156a98 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11156a9c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 11156aa2 push 3 */
  push32((uint32_t)(0x3u));
  /* 11156aa4 push 0x1117e850 */
  push32((uint32_t)(0x1117e850u));
  /* 11156aa9 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11156aaf push eax */
  push32((uint32_t)(EAX));
  /* 11156ab0 call 0x1115ad80 */
  push32(0x11156ab5u); f_1115ad80();
  /* 11156ab5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11156ab8:;
  /* 11156ab8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156abc jne 0x11156aca */
  if (!C.zf) goto L_11156aca;
  /* 11156abe mov dword ptr [ebp - 0x1114], 0x1117e7dc */
  w32((uint32_t)(EBP + -0x1114), (0x1117e7dcu));
  /* 11156ac8 jmp 0x11156ad4 */
  goto L_11156ad4;
L_11156aca:;
  /* 11156aca mov dword ptr [ebp - 0x1114], 0x1117e57c */
  w32((uint32_t)(EBP + -0x1114), (0x1117e57cu));
L_11156ad4:;
  /* 11156ad4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11156ad7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11156ada test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11156adc je 0x11156ae9 */
  if (C.zf) goto L_11156ae9;
  /* 11156ade mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11156ae1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 11156ae7 jmp 0x11156af3 */
  goto L_11156af3;
L_11156ae9:;
  /* 11156ae9 mov dword ptr [ebp - 0x1118], 0x1117e57c */
  w32((uint32_t)(EBP + -0x1118), (0x1117e57cu));
L_11156af3:;
  /* 11156af3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11156af6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11156af9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11156afb je 0x11156b0f */
  if (C.zf) goto L_11156b0f;
  /* 11156afd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156b01 jne 0x11156b0f */
  if (!C.zf) goto L_11156b0f;
  /* 11156b03 mov dword ptr [ebp - 0x111c], 0x1117e7cc */
  w32((uint32_t)(EBP + -0x111c), (0x1117e7ccu));
  /* 11156b0d jmp 0x11156b19 */
  goto L_11156b19;
L_11156b0f:;
  /* 11156b0f mov dword ptr [ebp - 0x111c], 0x1117e57c */
  w32((uint32_t)(EBP + -0x111c), (0x1117e57cu));
L_11156b19:;
  /* 11156b19 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11156b1c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11156b1f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11156b21 je 0x11156b2f */
  if (C.zf) goto L_11156b2f;
  /* 11156b23 mov dword ptr [ebp - 0x1120], 0x1117e7c8 */
  w32((uint32_t)(EBP + -0x1120), (0x1117e7c8u));
  /* 11156b2d jmp 0x11156b39 */
  goto L_11156b39;
L_11156b2f:;
  /* 11156b2f mov dword ptr [ebp - 0x1120], 0x1117e57c */
  w32((uint32_t)(EBP + -0x1120), (0x1117e57cu));
L_11156b39:;
  /* 11156b39 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156b3d je 0x11156b4a */
  if (C.zf) goto L_11156b4a;
  /* 11156b3f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11156b42 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 11156b48 jmp 0x11156b54 */
  goto L_11156b54;
L_11156b4a:;
  /* 11156b4a mov dword ptr [ebp - 0x1124], 0x1117e57c */
  w32((uint32_t)(EBP + -0x1124), (0x1117e57cu));
L_11156b54:;
  /* 11156b54 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156b58 je 0x11156b66 */
  if (C.zf) goto L_11156b66;
  /* 11156b5a mov dword ptr [ebp - 0x1128], 0x1117e7c0 */
  w32((uint32_t)(EBP + -0x1128), (0x1117e7c0u));
  /* 11156b64 jmp 0x11156b70 */
  goto L_11156b70;
L_11156b66:;
  /* 11156b66 mov dword ptr [ebp - 0x1128], 0x1117e57c */
  w32((uint32_t)(EBP + -0x1128), (0x1117e57cu));
L_11156b70:;
  /* 11156b70 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156b74 je 0x11156b81 */
  if (C.zf) goto L_11156b81;
  /* 11156b76 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11156b79 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 11156b7f jmp 0x11156b8b */
  goto L_11156b8b;
L_11156b81:;
  /* 11156b81 mov dword ptr [ebp - 0x112c], 0x1117e57c */
  w32((uint32_t)(EBP + -0x112c), (0x1117e57cu));
L_11156b8b:;
  /* 11156b8b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156b8f je 0x11156b9d */
  if (C.zf) goto L_11156b9d;
  /* 11156b91 mov dword ptr [ebp - 0x1130], 0x1117e7b8 */
  w32((uint32_t)(EBP + -0x1130), (0x1117e7b8u));
  /* 11156b9b jmp 0x11156ba7 */
  goto L_11156ba7;
L_11156b9d:;
  /* 11156b9d mov dword ptr [ebp - 0x1130], 0x1117e57c */
  w32((uint32_t)(EBP + -0x1130), (0x1117e57cu));
L_11156ba7:;
  /* 11156ba7 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156bae je 0x11156bbe */
  if (C.zf) goto L_11156bbe;
  /* 11156bb0 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11156bb6 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 11156bbc jmp 0x11156bc8 */
  goto L_11156bc8;
L_11156bbe:;
  /* 11156bbe mov dword ptr [ebp - 0x1134], 0x1117e57c */
  w32((uint32_t)(EBP + -0x1134), (0x1117e57cu));
L_11156bc8:;
  /* 11156bc8 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156bcf je 0x11156bdd */
  if (C.zf) goto L_11156bdd;
  /* 11156bd1 mov dword ptr [ebp - 0x1138], 0x1117e7ac */
  w32((uint32_t)(EBP + -0x1138), (0x1117e7acu));
  /* 11156bdb jmp 0x11156be7 */
  goto L_11156be7;
L_11156bdd:;
  /* 11156bdd mov dword ptr [ebp - 0x1138], 0x1117e57c */
  w32((uint32_t)(EBP + -0x1138), (0x1117e57cu));
L_11156be7:;
  /* 11156be7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 11156bed push edx */
  push32((uint32_t)(EDX));
  /* 11156bee mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 11156bf4 push eax */
  push32((uint32_t)(EAX));
  /* 11156bf5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 11156bfb push ecx */
  push32((uint32_t)(ECX));
  /* 11156bfc mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 11156c02 push edx */
  push32((uint32_t)(EDX));
  /* 11156c03 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 11156c09 push eax */
  push32((uint32_t)(EAX));
  /* 11156c0a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 11156c10 push ecx */
  push32((uint32_t)(ECX));
  /* 11156c11 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 11156c17 push edx */
  push32((uint32_t)(EDX));
  /* 11156c18 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 11156c1e push eax */
  push32((uint32_t)(EAX));
  /* 11156c1f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 11156c25 push ecx */
  push32((uint32_t)(ECX));
  /* 11156c26 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 11156c2c push edx */
  push32((uint32_t)(EDX));
  /* 11156c2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11156c30 push eax */
  push32((uint32_t)(EAX));
  /* 11156c31 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11156c34 mov edx, dword ptr [ecx*4 + 0x11181a50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11181a50)));
  /* 11156c3b push edx */
  push32((uint32_t)(EDX));
  /* 11156c3c push 0x1117e758 */
  push32((uint32_t)(0x1117e758u));
  /* 11156c41 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11156c46 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 11156c4c push eax */
  push32((uint32_t)(EAX));
  /* 11156c4d call 0x1115a410 */
  push32(0x11156c52u); f_1115a410();
  /* 11156c52 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11156c55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11156c57 jge 0x11156c6d */
  if ((C.sf==C.of)) goto L_11156c6d;
  /* 11156c59 push 0x1117e6bc */
  push32((uint32_t)(0x1117e6bcu));
  /* 11156c5e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 11156c64 push ecx */
  push32((uint32_t)(ECX));
  /* 11156c65 call 0x1115a510 */
  push32(0x11156c6au); f_1115a510();
  /* 11156c6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11156c6d:;
  /* 11156c6d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 11156c72 push 0x1117e734 */
  push32((uint32_t)(0x1117e734u));
  /* 11156c77 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 11156c7d push edx */
  push32((uint32_t)(EDX));
  /* 11156c7e call 0x1115acc0 */
  push32(0x11156c83u); f_1115acc0();
  /* 11156c83 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11156c86 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 11156c8c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156c93 jne 0x11156ca6 */
  if (!C.zf) goto L_11156ca6;
  /* 11156c95 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11156c97 call 0x1115aa00 */
  push32(0x11156c9cu); f_1115aa00();
  /* 11156c9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11156c9f push 3 */
  push32((uint32_t)(0x3u));
  /* 11156ca1 call 0x11156d20 */
  push32(0x11156ca6u); f_11156d20();
L_11156ca6:;
  /* 11156ca6 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156cad jne 0x11156cb6 */
  if (!C.zf) goto L_11156cb6;
  /* 11156caf mov eax, 1 */
  EAX = (0x1u);
  /* 11156cb4 jmp 0x11156cb8 */
  goto L_11156cb8;
L_11156cb6:;
  /* 11156cb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11156cb8:;
  /* 11156cb8 mov esp, ebp */
  ESP = (EBP);
  /* 11156cba pop ebp */
  EBP = (pop32());
  /* 11156cbb ret  */
  ESPCHK(0x111569b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cc0 @ 0x11156cc0 (56 bytes, 15 insns) */
void f_11156cc0(void) {
  FTRACE(0x11156cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11156cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11156cc1 mov ebp, esp */
  EBP = (ESP);
  /* 11156cc3 cmp dword ptr [0x1118531c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1118531c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156cca je 0x11156cd2 */
  if (C.zf) goto L_11156cd2;
  /* 11156ccc call dword ptr [0x1118531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118531c))), 0x11156cd2u);
L_11156cd2:;
  /* 11156cd2 push 0x11181418 */
  push32((uint32_t)(0x11181418u));
  /* 11156cd7 push 0x11181208 */
  push32((uint32_t)(0x11181208u));
  /* 11156cdc call 0x11156e90 */
  push32(0x11156ce1u); f_11156e90();
  /* 11156ce1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11156ce4 push 0x11181104 */
  push32((uint32_t)(0x11181104u));
  /* 11156ce9 push 0x11181000 */
  push32((uint32_t)(0x11181000u));
  /* 11156cee call 0x11156e90 */
  push32(0x11156cf3u); f_11156e90();
  /* 11156cf3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11156cf6 pop ebp */
  EBP = (pop32());
  /* 11156cf7 ret  */
  ESPCHK(0x11156cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d00 @ 0x11156d00 (21 bytes, 10 insns) */
void f_11156d00(void) {
  FTRACE(0x11156d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11156d00 push ebp */
  push32((uint32_t)(EBP));
  /* 11156d01 mov ebp, esp */
  EBP = (ESP);
  /* 11156d03 push 0 */
  push32((uint32_t)(0x0u));
  /* 11156d05 push 0 */
  push32((uint32_t)(0x0u));
  /* 11156d07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11156d0a push eax */
  push32((uint32_t)(EAX));
  /* 11156d0b call 0x11156d80 */
  push32(0x11156d10u); f_11156d80();
  /* 11156d10 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11156d13 pop ebp */
  EBP = (pop32());
  /* 11156d14 ret  */
  ESPCHK(0x11156d00u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11156d20 (21 bytes, 10 insns) */
void f_11156d20(void) {
  FTRACE(0x11156d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11156d20 push ebp */
  push32((uint32_t)(EBP));
  /* 11156d21 mov ebp, esp */
  EBP = (ESP);
  /* 11156d23 push 0 */
  push32((uint32_t)(0x0u));
  /* 11156d25 push 1 */
  push32((uint32_t)(0x1u));
  /* 11156d27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11156d2a push eax */
  push32((uint32_t)(EAX));
  /* 11156d2b call 0x11156d80 */
  push32(0x11156d30u); f_11156d80();
  /* 11156d30 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11156d33 pop ebp */
  EBP = (pop32());
  /* 11156d34 ret  */
  ESPCHK(0x11156d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d40 @ 0x11156d40 (19 bytes, 9 insns) */
void f_11156d40(void) {
  FTRACE(0x11156d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11156d40 push ebp */
  push32((uint32_t)(EBP));
  /* 11156d41 mov ebp, esp */
  EBP = (ESP);
  /* 11156d43 push 1 */
  push32((uint32_t)(0x1u));
  /* 11156d45 push 0 */
  push32((uint32_t)(0x0u));
  /* 11156d47 push 0 */
  push32((uint32_t)(0x0u));
  /* 11156d49 call 0x11156d80 */
  push32(0x11156d4eu); f_11156d80();
  /* 11156d4e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11156d51 pop ebp */
  EBP = (pop32());
  /* 11156d52 ret  */
  ESPCHK(0x11156d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d60 @ 0x11156d60 (19 bytes, 9 insns) */
void f_11156d60(void) {
  FTRACE(0x11156d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11156d60 push ebp */
  push32((uint32_t)(EBP));
  /* 11156d61 mov ebp, esp */
  EBP = (ESP);
  /* 11156d63 push 1 */
  push32((uint32_t)(0x1u));
  /* 11156d65 push 1 */
  push32((uint32_t)(0x1u));
  /* 11156d67 push 0 */
  push32((uint32_t)(0x0u));
  /* 11156d69 call 0x11156d80 */
  push32(0x11156d6eu); f_11156d80();
  /* 11156d6e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11156d71 pop ebp */
  EBP = (pop32());
  /* 11156d72 ret  */
  ESPCHK(0x11156d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d80 @ 0x11156d80 (227 bytes, 61 insns) */
void f_11156d80(void) {
  FTRACE(0x11156d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11156d80 push ebp */
  push32((uint32_t)(EBP));
  /* 11156d81 mov ebp, esp */
  EBP = (ESP);
  /* 11156d83 push ecx */
  push32((uint32_t)(ECX));
  /* 11156d84 call 0x11156e70 */
  push32(0x11156d89u); f_11156e70();
  /* 11156d89 cmp dword ptr [0x1118382c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1118382c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156d90 jne 0x11156da3 */
  if (!C.zf) goto L_11156da3;
  /* 11156d92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11156d95 push eax */
  push32((uint32_t)(EAX));
  /* 11156d96 call dword ptr [0x111863e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863e8))), 0x11156d9cu);
  /* 11156d9c push eax */
  push32((uint32_t)(EAX));
  /* 11156d9d call dword ptr [0x111863e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863e4))), 0x11156da3u);
L_11156da3:;
  /* 11156da3 mov dword ptr [0x11183828], 1 */
  w32((uint32_t)(0x11183828), (0x1u));
  /* 11156dad mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 11156db0 mov byte ptr [0x11183824], cl */
  w8((uint32_t)(0x11183824), (CL));
  /* 11156db6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156dba jne 0x11156e03 */
  if (!C.zf) goto L_11156e03;
  /* 11156dbc cmp dword ptr [0x11185318], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11185318))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156dc3 je 0x11156df1 */
  if (C.zf) goto L_11156df1;
  /* 11156dc5 mov edx, dword ptr [0x11185314] */
  EDX = (r32((uint32_t)(0x11185314)));
  /* 11156dcb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11156dce:;
  /* 11156dce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11156dd1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11156dd4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11156dd7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11156dda cmp ecx, dword ptr [0x11185318] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11185318))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156de0 jb 0x11156df1 */
  if (C.cf) goto L_11156df1;
  /* 11156de2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11156de5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156de8 je 0x11156def */
  if (C.zf) goto L_11156def;
  /* 11156dea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11156ded call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x11156defu);
L_11156def:;
  /* 11156def jmp 0x11156dce */
  goto L_11156dce;
L_11156df1:;
  /* 11156df1 push 0x11181724 */
  push32((uint32_t)(0x11181724u));
  /* 11156df6 push 0x1118151c */
  push32((uint32_t)(0x1118151cu));
  /* 11156dfb call 0x11156e90 */
  push32(0x11156e00u); f_11156e90();
  /* 11156e00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11156e03:;
  /* 11156e03 push 0x1118192c */
  push32((uint32_t)(0x1118192cu));
  /* 11156e08 push 0x11181828 */
  push32((uint32_t)(0x11181828u));
  /* 11156e0d call 0x11156e90 */
  push32(0x11156e12u); f_11156e90();
  /* 11156e12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11156e15 cmp dword ptr [0x11183830], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183830))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156e1c jne 0x11156e3e */
  if (!C.zf) goto L_11156e3e;
  /* 11156e1e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11156e20 call 0x11158a70 */
  push32(0x11156e25u); f_11158a70();
  /* 11156e25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11156e28 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11156e2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11156e2d je 0x11156e3e */
  if (C.zf) goto L_11156e3e;
  /* 11156e2f mov dword ptr [0x11183830], 1 */
  w32((uint32_t)(0x11183830), (0x1u));
  /* 11156e39 call 0x11159380 */
  push32(0x11156e3eu); f_11159380();
L_11156e3e:;
  /* 11156e3e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156e42 je 0x11156e4b */
  if (C.zf) goto L_11156e4b;
  /* 11156e44 call 0x11156e80 */
  push32(0x11156e49u); f_11156e80();
  /* 11156e49 jmp 0x11156e5f */
  goto L_11156e5f;
L_11156e4b:;
  /* 11156e4b mov dword ptr [0x1118382c], 1 */
  w32((uint32_t)(0x1118382c), (0x1u));
  /* 11156e55 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11156e58 push ecx */
  push32((uint32_t)(ECX));
  /* 11156e59 call dword ptr [0x111863e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863e0))), 0x11156e5fu);
L_11156e5f:;
  /* 11156e5f mov esp, ebp */
  ESP = (EBP);
  /* 11156e61 pop ebp */
  EBP = (pop32());
  /* 11156e62 ret  */
  ESPCHK(0x11156d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e70 @ 0x11156e70 (15 bytes, 7 insns) */
void f_11156e70(void) {
  FTRACE(0x11156e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11156e70 push ebp */
  push32((uint32_t)(EBP));
  /* 11156e71 mov ebp, esp */
  EBP = (ESP);
  /* 11156e73 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11156e75 call 0x1115af60 */
  push32(0x11156e7au); f_1115af60();
  /* 11156e7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11156e7d pop ebp */
  EBP = (pop32());
  /* 11156e7e ret  */
  ESPCHK(0x11156e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e80 @ 0x11156e80 (15 bytes, 7 insns) */
void f_11156e80(void) {
  FTRACE(0x11156e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11156e80 push ebp */
  push32((uint32_t)(EBP));
  /* 11156e81 mov ebp, esp */
  EBP = (ESP);
  /* 11156e83 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11156e85 call 0x1115b000 */
  push32(0x11156e8au); f_1115b000();
  /* 11156e8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11156e8d pop ebp */
  EBP = (pop32());
  /* 11156e8e ret  */
  ESPCHK(0x11156e80u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x11156e90 (37 bytes, 16 insns) */
void f_11156e90(void) {
  FTRACE(0x11156e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11156e90 push ebp */
  push32((uint32_t)(EBP));
  /* 11156e91 mov ebp, esp */
  EBP = (ESP);
L_11156e93:;
  /* 11156e93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11156e96 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156e99 jae 0x11156eb3 */
  if (!C.cf) goto L_11156eb3;
  /* 11156e9b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11156e9e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156ea1 je 0x11156ea8 */
  if (C.zf) goto L_11156ea8;
  /* 11156ea3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11156ea6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x11156ea8u);
L_11156ea8:;
  /* 11156ea8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11156eab add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11156eae mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11156eb1 jmp 0x11156e93 */
  goto L_11156e93;
L_11156eb3:;
  /* 11156eb3 pop ebp */
  EBP = (pop32());
  /* 11156eb4 ret  */
  ESPCHK(0x11156e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ec0 @ 0x11156ec0 (130 bytes, 42 insns) */
void f_11156ec0(void) {
  FTRACE(0x11156ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11156ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 11156ec1 mov ebp, esp */
  EBP = (ESP);
  /* 11156ec3 push ecx */
  push32((uint32_t)(ECX));
  /* 11156ec4 call 0x1115ae80 */
  push32(0x11156ec9u); f_1115ae80();
  /* 11156ec9 call dword ptr [0x111863f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863f0))), 0x11156ecfu);
  /* 11156ecf mov dword ptr [0x11181a5c], eax */
  w32((uint32_t)(0x11181a5c), (EAX));
  /* 11156ed4 cmp dword ptr [0x11181a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11181a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156edb jne 0x11156ee1 */
  if (!C.zf) goto L_11156ee1;
  /* 11156edd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11156edf jmp 0x11156f3e */
  goto L_11156f3e;
L_11156ee1:;
  /* 11156ee1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11156ee3 push 0x1117e890 */
  push32((uint32_t)(0x1117e890u));
  /* 11156ee8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11156eea push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11156eec push 1 */
  push32((uint32_t)(0x1u));
  /* 11156eee call 0x11157970 */
  push32(0x11156ef3u); f_11157970();
  /* 11156ef3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11156ef6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11156ef9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156efd je 0x11156f14 */
  if (C.zf) goto L_11156f14;
  /* 11156eff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11156f02 push eax */
  push32((uint32_t)(EAX));
  /* 11156f03 mov ecx, dword ptr [0x11181a5c] */
  ECX = (r32((uint32_t)(0x11181a5c)));
  /* 11156f09 push ecx */
  push32((uint32_t)(ECX));
  /* 11156f0a call dword ptr [0x111863dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863dc))), 0x11156f10u);
  /* 11156f10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11156f12 jne 0x11156f18 */
  if (!C.zf) goto L_11156f18;
L_11156f14:;
  /* 11156f14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11156f16 jmp 0x11156f3e */
  goto L_11156f3e;
L_11156f18:;
  /* 11156f18 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11156f1b push edx */
  push32((uint32_t)(EDX));
  /* 11156f1c call 0x11156f80 */
  push32(0x11156f21u); f_11156f80();
  /* 11156f21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11156f24 call dword ptr [0x111863ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863ec))), 0x11156f2au);
  /* 11156f2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11156f2d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11156f2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11156f32 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11156f39 mov eax, 1 */
  EAX = (0x1u);
L_11156f3e:;
  /* 11156f3e mov esp, ebp */
  ESP = (EBP);
  /* 11156f40 pop ebp */
  EBP = (pop32());
  /* 11156f41 ret  */
  ESPCHK(0x11156ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f50 @ 0x11156f50 (41 bytes, 11 insns) */
void f_11156f50(void) {
  FTRACE(0x11156f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11156f50 push ebp */
  push32((uint32_t)(EBP));
  /* 11156f51 mov ebp, esp */
  EBP = (ESP);
  /* 11156f53 call 0x1115aec0 */
  push32(0x11156f58u); f_1115aec0();
  /* 11156f58 cmp dword ptr [0x11181a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11181a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156f5f je 0x11156f77 */
  if (C.zf) goto L_11156f77;
  /* 11156f61 mov eax, dword ptr [0x11181a5c] */
  EAX = (r32((uint32_t)(0x11181a5c)));
  /* 11156f66 push eax */
  push32((uint32_t)(EAX));
  /* 11156f67 call dword ptr [0x111863f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863f4))), 0x11156f6du);
  /* 11156f6d mov dword ptr [0x11181a5c], 0xffffffff */
  w32((uint32_t)(0x11181a5c), (0xffffffffu));
L_11156f77:;
  /* 11156f77 pop ebp */
  EBP = (pop32());
  /* 11156f78 ret  */
  ESPCHK(0x11156f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f80 @ 0x11156f80 (25 bytes, 8 insns) */
void f_11156f80(void) {
  FTRACE(0x11156f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11156f80 push ebp */
  push32((uint32_t)(EBP));
  /* 11156f81 mov ebp, esp */
  EBP = (ESP);
  /* 11156f83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11156f86 mov dword ptr [eax + 0x50], 0x11181c00 */
  w32((uint32_t)(EAX + 0x50), (0x11181c00u));
  /* 11156f8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11156f90 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 11156f97 pop ebp */
  EBP = (pop32());
  /* 11156f98 ret  */
  ESPCHK(0x11156f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fa0 @ 0x11156fa0 (152 bytes, 48 insns) */
void f_11156fa0(void) {
  FTRACE(0x11156fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11156fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11156fa1 mov ebp, esp */
  EBP = (ESP);
  /* 11156fa3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11156fa6 call dword ptr [0x11186400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186400))), 0x11156facu);
  /* 11156fac mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11156faf mov eax, dword ptr [0x11181a5c] */
  EAX = (r32((uint32_t)(0x11181a5c)));
  /* 11156fb4 push eax */
  push32((uint32_t)(EAX));
  /* 11156fb5 call dword ptr [0x111863fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863fc))), 0x11156fbbu);
  /* 11156fbb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11156fbe cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156fc2 jne 0x11157027 */
  if (!C.zf) goto L_11157027;
  /* 11156fc4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 11156fc9 push 0x1117e890 */
  push32((uint32_t)(0x1117e890u));
  /* 11156fce push 2 */
  push32((uint32_t)(0x2u));
  /* 11156fd0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11156fd2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11156fd4 call 0x11157970 */
  push32(0x11156fd9u); f_11157970();
  /* 11156fd9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11156fdc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11156fdf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11156fe3 je 0x1115701d */
  if (C.zf) goto L_1115701d;
  /* 11156fe5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11156fe8 push ecx */
  push32((uint32_t)(ECX));
  /* 11156fe9 mov edx, dword ptr [0x11181a5c] */
  EDX = (r32((uint32_t)(0x11181a5c)));
  /* 11156fef push edx */
  push32((uint32_t)(EDX));
  /* 11156ff0 call dword ptr [0x111863dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863dc))), 0x11156ff6u);
  /* 11156ff6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11156ff8 je 0x1115701d */
  if (C.zf) goto L_1115701d;
  /* 11156ffa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11156ffd push eax */
  push32((uint32_t)(EAX));
  /* 11156ffe call 0x11156f80 */
  push32(0x11157003u); f_11156f80();
  /* 11157003 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11157006 call dword ptr [0x111863ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863ec))), 0x1115700cu);
  /* 1115700c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115700f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11157011 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11157014 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 1115701b jmp 0x11157027 */
  goto L_11157027;
L_1115701d:;
  /* 1115701d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1115701f call 0x111564d0 */
  push32(0x11157024u); f_111564d0();
  /* 11157024 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11157027:;
  /* 11157027 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115702a push eax */
  push32((uint32_t)(EAX));
  /* 1115702b call dword ptr [0x111863f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863f8))), 0x11157031u);
  /* 11157031 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11157034 mov esp, ebp */
  ESP = (EBP);
  /* 11157036 pop ebp */
  EBP = (pop32());
  /* 11157037 ret  */
  ESPCHK(0x11156fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007040 @ 0x11157040 (263 bytes, 86 insns) */
void f_11157040(void) {
  FTRACE(0x11157040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11157040 push ebp */
  push32((uint32_t)(EBP));
  /* 11157041 mov ebp, esp */
  EBP = (ESP);
  /* 11157043 cmp dword ptr [0x11181a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11181a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115704a je 0x11157145 */
  if (C.zf) goto L_11157145;
  /* 11157050 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157054 jne 0x11157065 */
  if (!C.zf) goto L_11157065;
  /* 11157056 mov eax, dword ptr [0x11181a5c] */
  EAX = (r32((uint32_t)(0x11181a5c)));
  /* 1115705b push eax */
  push32((uint32_t)(EAX));
  /* 1115705c call dword ptr [0x111863fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863fc))), 0x11157062u);
  /* 11157062 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11157065:;
  /* 11157065 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157069 je 0x11157136 */
  if (C.zf) goto L_11157136;
  /* 1115706f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11157072 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157076 je 0x11157089 */
  if (C.zf) goto L_11157089;
  /* 11157078 push 2 */
  push32((uint32_t)(0x2u));
  /* 1115707a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115707d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 11157080 push eax */
  push32((uint32_t)(EAX));
  /* 11157081 call 0x11157ff0 */
  push32(0x11157086u); f_11157ff0();
  /* 11157086 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11157089:;
  /* 11157089 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115708c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157090 je 0x111570a3 */
  if (C.zf) goto L_111570a3;
  /* 11157092 push 2 */
  push32((uint32_t)(0x2u));
  /* 11157094 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11157097 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 1115709a push eax */
  push32((uint32_t)(EAX));
  /* 1115709b call 0x11157ff0 */
  push32(0x111570a0u); f_11157ff0();
  /* 111570a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111570a3:;
  /* 111570a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111570a6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111570aa je 0x111570bd */
  if (C.zf) goto L_111570bd;
  /* 111570ac push 2 */
  push32((uint32_t)(0x2u));
  /* 111570ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111570b1 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 111570b4 push eax */
  push32((uint32_t)(EAX));
  /* 111570b5 call 0x11157ff0 */
  push32(0x111570bau); f_11157ff0();
  /* 111570ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111570bd:;
  /* 111570bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111570c0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111570c4 je 0x111570d7 */
  if (C.zf) goto L_111570d7;
  /* 111570c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 111570c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111570cb mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 111570ce push eax */
  push32((uint32_t)(EAX));
  /* 111570cf call 0x11157ff0 */
  push32(0x111570d4u); f_11157ff0();
  /* 111570d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111570d7:;
  /* 111570d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111570da cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111570de je 0x111570f1 */
  if (C.zf) goto L_111570f1;
  /* 111570e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 111570e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111570e5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 111570e8 push eax */
  push32((uint32_t)(EAX));
  /* 111570e9 call 0x11157ff0 */
  push32(0x111570eeu); f_11157ff0();
  /* 111570ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111570f1:;
  /* 111570f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111570f4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111570f8 je 0x1115710b */
  if (C.zf) goto L_1115710b;
  /* 111570fa push 2 */
  push32((uint32_t)(0x2u));
  /* 111570fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111570ff mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 11157102 push eax */
  push32((uint32_t)(EAX));
  /* 11157103 call 0x11157ff0 */
  push32(0x11157108u); f_11157ff0();
  /* 11157108 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1115710b:;
  /* 1115710b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115710e cmp dword ptr [ecx + 0x50], 0x11181c00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x11181c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157115 je 0x11157128 */
  if (C.zf) goto L_11157128;
  /* 11157117 push 2 */
  push32((uint32_t)(0x2u));
  /* 11157119 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115711c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 1115711f push eax */
  push32((uint32_t)(EAX));
  /* 11157120 call 0x11157ff0 */
  push32(0x11157125u); f_11157ff0();
  /* 11157125 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11157128:;
  /* 11157128 push 2 */
  push32((uint32_t)(0x2u));
  /* 1115712a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115712d push ecx */
  push32((uint32_t)(ECX));
  /* 1115712e call 0x11157ff0 */
  push32(0x11157133u); f_11157ff0();
  /* 11157133 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11157136:;
  /* 11157136 push 0 */
  push32((uint32_t)(0x0u));
  /* 11157138 mov edx, dword ptr [0x11181a5c] */
  EDX = (r32((uint32_t)(0x11181a5c)));
  /* 1115713e push edx */
  push32((uint32_t)(EDX));
  /* 1115713f call dword ptr [0x111863dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863dc))), 0x11157145u);
L_11157145:;
  /* 11157145 pop ebp */
  EBP = (pop32());
  /* 11157146 ret  */
  ESPCHK(0x11157040u, _esp0);
  ESP += 4; return;
}

/* FUN_10007150 @ 0x11157150 (11 bytes, 5 insns) */
void f_11157150(void) {
  FTRACE(0x11157150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11157150 push ebp */
  push32((uint32_t)(EBP));
  /* 11157151 mov ebp, esp */
  EBP = (ESP);
  /* 11157153 call dword ptr [0x111863ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863ec))), 0x11157159u);
  /* 11157159 pop ebp */
  EBP = (pop32());
  /* 1115715a ret  */
  ESPCHK(0x11157150u, _esp0);
  ESP += 4; return;
}

/* FUN_10007160 @ 0x11157160 (11 bytes, 5 insns) */
void f_11157160(void) {
  FTRACE(0x11157160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11157160 push ebp */
  push32((uint32_t)(EBP));
  /* 11157161 mov ebp, esp */
  EBP = (ESP);
  /* 11157163 call dword ptr [0x111863d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863d8))), 0x11157169u);
  /* 11157169 pop ebp */
  EBP = (pop32());
  /* 1115716a ret  */
  ESPCHK(0x11157160u, _esp0);
  ESP += 4; return;
}

/* FUN_10007170 @ 0x11157170 (804 bytes, 236 insns) */
void f_11157170(void) {
  FTRACE(0x11157170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11157170 push ebp */
  push32((uint32_t)(EBP));
  /* 11157171 mov ebp, esp */
  EBP = (ESP);
  /* 11157173 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11157176 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 1115717b push 0x1117e89c */
  push32((uint32_t)(0x1117e89cu));
  /* 11157180 push 2 */
  push32((uint32_t)(0x2u));
  /* 11157182 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11157187 call 0x11157560 */
  push32(0x1115718cu); f_11157560();
  /* 1115718c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115718f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11157192 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157196 jne 0x111571a2 */
  if (!C.zf) goto L_111571a2;
  /* 11157198 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1115719a call 0x111564d0 */
  push32(0x1115719fu); f_111564d0();
  /* 1115719f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111571a2:;
  /* 111571a2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 111571a5 mov dword ptr [0x111851c0], eax */
  w32((uint32_t)(0x111851c0), (EAX));
  /* 111571aa mov dword ptr [0x111852fc], 0x20 */
  w32((uint32_t)(0x111852fc), (0x20u));
  /* 111571b4 jmp 0x111571bf */
  goto L_111571bf;
L_111571b6:;
  /* 111571b6 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 111571b9 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111571bc mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_111571bf:;
  /* 111571bf mov edx, dword ptr [0x111851c0] */
  EDX = (r32((uint32_t)(0x111851c0)));
  /* 111571c5 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111571cb cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111571ce jae 0x111571f3 */
  if (!C.cf) goto L_111571f3;
  /* 111571d0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 111571d3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 111571d7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 111571da mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 111571e0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 111571e3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 111571e7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 111571ea mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 111571f1 jmp 0x111571b6 */
  goto L_111571b6;
L_111571f3:;
  /* 111571f3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 111571f6 push ecx */
  push32((uint32_t)(ECX));
  /* 111571f7 call dword ptr [0x111863a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863a8))), 0x111571fdu);
  /* 111571fd mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 11157200 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11157206 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11157208 je 0x11157395 */
  if (C.zf) goto L_11157395;
  /* 1115720e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157212 je 0x11157395 */
  if (C.zf) goto L_11157395;
  /* 11157218 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115721b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1115721d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 11157220 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11157223 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11157226 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11157229 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115722c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115722f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 11157232 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157239 jge 0x11157243 */
  if ((C.sf==C.of)) goto L_11157243;
  /* 1115723b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 1115723e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11157241 jmp 0x1115724a */
  goto L_1115724a;
L_11157243:;
  /* 11157243 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_1115724a:;
  /* 1115724a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 1115724d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11157250 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 11157257 jmp 0x11157262 */
  goto L_11157262;
L_11157259:;
  /* 11157259 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 1115725c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115725f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_11157262:;
  /* 11157262 mov ecx, dword ptr [0x111852fc] */
  ECX = (r32((uint32_t)(0x111852fc)));
  /* 11157268 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115726b jge 0x11157302 */
  if ((C.sf==C.of)) goto L_11157302;
  /* 11157271 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11157276 push 0x1117e89c */
  push32((uint32_t)(0x1117e89cu));
  /* 1115727b push 2 */
  push32((uint32_t)(0x2u));
  /* 1115727d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11157282 call 0x11157560 */
  push32(0x11157287u); f_11157560();
  /* 11157287 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115728a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 1115728d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157291 jne 0x1115729e */
  if (!C.zf) goto L_1115729e;
  /* 11157293 mov edx, dword ptr [0x111852fc] */
  EDX = (r32((uint32_t)(0x111852fc)));
  /* 11157299 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 1115729c jmp 0x11157302 */
  goto L_11157302;
L_1115729e:;
  /* 1115729e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 111572a1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 111572a4 mov dword ptr [eax*4 + 0x111851c0], ecx */
  w32((uint32_t)(EAX*4 + 0x111851c0), (ECX));
  /* 111572ab mov edx, dword ptr [0x111852fc] */
  EDX = (r32((uint32_t)(0x111852fc)));
  /* 111572b1 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111572b4 mov dword ptr [0x111852fc], edx */
  w32((uint32_t)(0x111852fc), (EDX));
  /* 111572ba jmp 0x111572c5 */
  goto L_111572c5;
L_111572bc:;
  /* 111572bc mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 111572bf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111572c2 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_111572c5:;
  /* 111572c5 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 111572c8 mov edx, dword ptr [ecx*4 + 0x111851c0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x111851c0)));
  /* 111572cf add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111572d5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111572d8 jae 0x111572fd */
  if (!C.cf) goto L_111572fd;
  /* 111572da mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 111572dd mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 111572e1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 111572e4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 111572ea mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 111572ed mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 111572f1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 111572f4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 111572fb jmp 0x111572bc */
  goto L_111572bc;
L_111572fd:;
  /* 111572fd jmp 0x11157259 */
  goto L_11157259;
L_11157302:;
  /* 11157302 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11157309 jmp 0x11157326 */
  goto L_11157326;
L_1115730b:;
  /* 1115730b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 1115730e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11157311 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 11157314 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11157317 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115731a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1115731d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 11157320 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11157323 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_11157326:;
  /* 11157326 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11157329 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115732c jge 0x11157395 */
  if ((C.sf==C.of)) goto L_11157395;
  /* 1115732e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 11157331 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157334 je 0x11157390 */
  if (C.zf) goto L_11157390;
  /* 11157336 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11157339 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1115733c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1115733f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11157341 je 0x11157390 */
  if (C.zf) goto L_11157390;
  /* 11157343 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11157346 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11157349 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1115734c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115734e jne 0x11157360 */
  if (!C.zf) goto L_11157360;
  /* 11157350 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11157353 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11157355 push edx */
  push32((uint32_t)(EDX));
  /* 11157356 call dword ptr [0x111863ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863ac))), 0x1115735cu);
  /* 1115735c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115735e je 0x11157390 */
  if (C.zf) goto L_11157390;
L_11157360:;
  /* 11157360 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11157363 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11157366 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11157369 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1115736c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1115736f mov edx, dword ptr [eax*4 + 0x111851c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x111851c0)));
  /* 11157376 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11157378 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 1115737b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1115737e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11157381 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11157383 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11157385 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11157388 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115738b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1115738d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_11157390:;
  /* 11157390 jmp 0x1115730b */
  goto L_1115730b;
L_11157395:;
  /* 11157395 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 1115739c jmp 0x111573a7 */
  goto L_111573a7;
L_1115739e:;
  /* 1115739e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 111573a1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111573a4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_111573a7:;
  /* 111573a7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111573ab jge 0x11157484 */
  if ((C.sf==C.of)) goto L_11157484;
  /* 111573b1 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 111573b4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111573b7 mov edx, dword ptr [0x111851c0] */
  EDX = (r32((uint32_t)(0x111851c0)));
  /* 111573bd add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111573bf mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 111573c2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 111573c5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111573c8 jne 0x11157470 */
  if (!C.zf) goto L_11157470;
  /* 111573ce mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 111573d1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 111573d5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111573d9 jne 0x111573e4 */
  if (!C.zf) goto L_111573e4;
  /* 111573db mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 111573e2 jmp 0x111573f4 */
  goto L_111573f4;
L_111573e4:;
  /* 111573e4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 111573e7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111573ea neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 111573ec sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111573ee add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111573f1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_111573f4:;
  /* 111573f4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 111573f7 push eax */
  push32((uint32_t)(EAX));
  /* 111573f8 call dword ptr [0x111863c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863c0))), 0x111573feu);
  /* 111573fe mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 11157401 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157405 je 0x1115745f */
  if (C.zf) goto L_1115745f;
  /* 11157407 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1115740a push ecx */
  push32((uint32_t)(ECX));
  /* 1115740b call dword ptr [0x111863ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863ac))), 0x11157411u);
  /* 11157411 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 11157414 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157418 je 0x1115745f */
  if (C.zf) goto L_1115745f;
  /* 1115741a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1115741d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11157420 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11157422 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 11157425 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1115742b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115742e jne 0x11157440 */
  if (!C.zf) goto L_11157440;
  /* 11157430 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11157433 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11157436 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 11157438 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1115743b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 1115743e jmp 0x1115745d */
  goto L_1115745d;
L_11157440:;
  /* 11157440 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 11157443 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11157449 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115744c jne 0x1115745d */
  if (!C.zf) goto L_1115745d;
  /* 1115744e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11157451 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11157454 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 11157457 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1115745a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1115745d:;
  /* 1115745d jmp 0x1115746e */
  goto L_1115746e;
L_1115745f:;
  /* 1115745f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11157462 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11157465 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11157468 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1115746b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1115746e:;
  /* 1115746e jmp 0x1115747f */
  goto L_1115747f;
L_11157470:;
  /* 11157470 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11157473 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11157476 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 11157479 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1115747c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1115747f:;
  /* 1115747f jmp 0x1115739e */
  goto L_1115739e;
L_11157484:;
  /* 11157484 mov eax, dword ptr [0x111852fc] */
  EAX = (r32((uint32_t)(0x111852fc)));
  /* 11157489 push eax */
  push32((uint32_t)(EAX));
  /* 1115748a call dword ptr [0x111863b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863b0))), 0x11157490u);
  /* 11157490 mov esp, ebp */
  ESP = (EBP);
  /* 11157492 pop ebp */
  EBP = (pop32());
  /* 11157493 ret  */
  ESPCHK(0x11157170u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x111574a0 (155 bytes, 45 insns) */
void f_111574a0(void) {
  FTRACE(0x111574a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111574a0 push ebp */
  push32((uint32_t)(EBP));
  /* 111574a1 mov ebp, esp */
  EBP = (ESP);
  /* 111574a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111574a6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 111574ad jmp 0x111574b8 */
  goto L_111574b8;
L_111574af:;
  /* 111574af mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111574b2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111574b5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_111574b8:;
  /* 111574b8 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111574bc jge 0x11157537 */
  if ((C.sf==C.of)) goto L_11157537;
  /* 111574be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111574c1 cmp dword ptr [ecx*4 + 0x111851c0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x111851c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111574c9 je 0x11157532 */
  if (C.zf) goto L_11157532;
  /* 111574cb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111574ce mov eax, dword ptr [edx*4 + 0x111851c0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x111851c0)));
  /* 111574d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111574d8 jmp 0x111574e3 */
  goto L_111574e3;
L_111574da:;
  /* 111574da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111574dd add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111574e0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_111574e3:;
  /* 111574e3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111574e6 mov eax, dword ptr [edx*4 + 0x111851c0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x111851c0)));
  /* 111574ed add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111574f2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111574f5 jae 0x1115750f */
  if (!C.cf) goto L_1115750f;
  /* 111574f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111574fa cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111574fe je 0x1115750d */
  if (C.zf) goto L_1115750d;
  /* 11157500 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11157503 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11157506 push edx */
  push32((uint32_t)(EDX));
  /* 11157507 call dword ptr [0x111863a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863a4))), 0x1115750du);
L_1115750d:;
  /* 1115750d jmp 0x111574da */
  goto L_111574da;
L_1115750f:;
  /* 1115750f push 2 */
  push32((uint32_t)(0x2u));
  /* 11157511 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11157514 mov ecx, dword ptr [eax*4 + 0x111851c0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x111851c0)));
  /* 1115751b push ecx */
  push32((uint32_t)(ECX));
  /* 1115751c call 0x11157ff0 */
  push32(0x11157521u); f_11157ff0();
  /* 11157521 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11157524 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11157527 mov dword ptr [edx*4 + 0x111851c0], 0 */
  w32((uint32_t)(EDX*4 + 0x111851c0), (0x0u));
L_11157532:;
  /* 11157532 jmp 0x111574af */
  goto L_111574af;
L_11157537:;
  /* 11157537 mov esp, ebp */
  ESP = (EBP);
  /* 11157539 pop ebp */
  EBP = (pop32());
  /* 1115753a ret  */
  ESPCHK(0x111574a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007540 @ 0x11157540 (29 bytes, 13 insns) */
void f_11157540(void) {
  FTRACE(0x11157540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11157540 push ebp */
  push32((uint32_t)(EBP));
  /* 11157541 mov ebp, esp */
  EBP = (ESP);
  /* 11157543 push 0 */
  push32((uint32_t)(0x0u));
  /* 11157545 push 0 */
  push32((uint32_t)(0x0u));
  /* 11157547 push 1 */
  push32((uint32_t)(0x1u));
  /* 11157549 mov eax, dword ptr [0x111839d8] */
  EAX = (r32((uint32_t)(0x111839d8)));
  /* 1115754e push eax */
  push32((uint32_t)(EAX));
  /* 1115754f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11157552 push ecx */
  push32((uint32_t)(ECX));
  /* 11157553 call 0x111575b0 */
  push32(0x11157558u); f_111575b0();
  /* 11157558 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115755b pop ebp */
  EBP = (pop32());
  /* 1115755c ret  */
  ESPCHK(0x11157540u, _esp0);
  ESP += 4; return;
}

/* FUN_10007560 @ 0x11157560 (35 bytes, 16 insns) */
void f_11157560(void) {
  FTRACE(0x11157560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11157560 push ebp */
  push32((uint32_t)(EBP));
  /* 11157561 mov ebp, esp */
  EBP = (ESP);
  /* 11157563 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11157566 push eax */
  push32((uint32_t)(EAX));
  /* 11157567 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115756a push ecx */
  push32((uint32_t)(ECX));
  /* 1115756b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115756e push edx */
  push32((uint32_t)(EDX));
  /* 1115756f mov eax, dword ptr [0x111839d8] */
  EAX = (r32((uint32_t)(0x111839d8)));
  /* 11157574 push eax */
  push32((uint32_t)(EAX));
  /* 11157575 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11157578 push ecx */
  push32((uint32_t)(ECX));
  /* 11157579 call 0x111575b0 */
  push32(0x1115757eu); f_111575b0();
  /* 1115757e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11157581 pop ebp */
  EBP = (pop32());
  /* 11157582 ret  */
  ESPCHK(0x11157560u, _esp0);
  ESP += 4; return;
}

/* FUN_10007590 @ 0x11157590 (27 bytes, 13 insns) */
void f_11157590(void) {
  FTRACE(0x11157590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11157590 push ebp */
  push32((uint32_t)(EBP));
  /* 11157591 mov ebp, esp */
  EBP = (ESP);
  /* 11157593 push 0 */
  push32((uint32_t)(0x0u));
  /* 11157595 push 0 */
  push32((uint32_t)(0x0u));
  /* 11157597 push 1 */
  push32((uint32_t)(0x1u));
  /* 11157599 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115759c push eax */
  push32((uint32_t)(EAX));
  /* 1115759d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111575a0 push ecx */
  push32((uint32_t)(ECX));
  /* 111575a1 call 0x111575b0 */
  push32(0x111575a6u); f_111575b0();
  /* 111575a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111575a9 pop ebp */
  EBP = (pop32());
  /* 111575aa ret  */
  ESPCHK(0x11157590u, _esp0);
  ESP += 4; return;
}

/* FUN_100075b0 @ 0x111575b0 (94 bytes, 38 insns) */
void f_111575b0(void) {
  FTRACE(0x111575b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111575b0 push ebp */
  push32((uint32_t)(EBP));
  /* 111575b1 mov ebp, esp */
  EBP = (ESP);
  /* 111575b3 push ecx */
  push32((uint32_t)(ECX));
L_111575b4:;
  /* 111575b4 push 9 */
  push32((uint32_t)(0x9u));
  /* 111575b6 call 0x1115af60 */
  push32(0x111575bbu); f_1115af60();
  /* 111575bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111575be mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 111575c1 push eax */
  push32((uint32_t)(EAX));
  /* 111575c2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111575c5 push ecx */
  push32((uint32_t)(ECX));
  /* 111575c6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111575c9 push edx */
  push32((uint32_t)(EDX));
  /* 111575ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111575cd push eax */
  push32((uint32_t)(EAX));
  /* 111575ce call 0x11157630 */
  push32(0x111575d3u); f_11157630();
  /* 111575d3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111575d6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111575d9 push 9 */
  push32((uint32_t)(0x9u));
  /* 111575db call 0x1115b000 */
  push32(0x111575e0u); f_1115b000();
  /* 111575e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111575e3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111575e7 jne 0x111575ef */
  if (!C.zf) goto L_111575ef;
  /* 111575e9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111575ed jne 0x111575f4 */
  if (!C.zf) goto L_111575f4;
L_111575ef:;
  /* 111575ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111575f2 jmp 0x1115760a */
  goto L_1115760a;
L_111575f4:;
  /* 111575f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111575f7 push ecx */
  push32((uint32_t)(ECX));
  /* 111575f8 call 0x1115b2a0 */
  push32(0x111575fdu); f_1115b2a0();
  /* 111575fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11157600 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11157602 jne 0x11157608 */
  if (!C.zf) goto L_11157608;
  /* 11157604 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11157606 jmp 0x1115760a */
  goto L_1115760a;
L_11157608:;
  /* 11157608 jmp 0x111575b4 */
  goto L_111575b4;
L_1115760a:;
  /* 1115760a mov esp, ebp */
  ESP = (EBP);
  /* 1115760c pop ebp */
  EBP = (pop32());
  /* 1115760d ret  */
  ESPCHK(0x111575b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007610 @ 0x11157610 (23 bytes, 11 insns) */
void f_11157610(void) {
  FTRACE(0x11157610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11157610 push ebp */
  push32((uint32_t)(EBP));
  /* 11157611 mov ebp, esp */
  EBP = (ESP);
  /* 11157613 push 0 */
  push32((uint32_t)(0x0u));
  /* 11157615 push 0 */
  push32((uint32_t)(0x0u));
  /* 11157617 push 1 */
  push32((uint32_t)(0x1u));
  /* 11157619 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115761c push eax */
  push32((uint32_t)(EAX));
  /* 1115761d call 0x11157630 */
  push32(0x11157622u); f_11157630();
  /* 11157622 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11157625 pop ebp */
  EBP = (pop32());
  /* 11157626 ret  */
  ESPCHK(0x11157610u, _esp0);
  ESP += 4; return;
}

/* FUN_10007630 @ 0x11157630 (787 bytes, 254 insns) */
void f_11157630(void) {
  FTRACE(0x11157630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11157630 push ebp */
  push32((uint32_t)(EBP));
  /* 11157631 mov ebp, esp */
  EBP = (ESP);
  /* 11157633 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11157636 push ebx */
  push32((uint32_t)(EBX));
  /* 11157637 push esi */
  push32((uint32_t)(ESI));
  /* 11157638 push edi */
  push32((uint32_t)(EDI));
  /* 11157639 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11157640 mov eax, dword ptr [0x11181a84] */
  EAX = (r32((uint32_t)(0x11181a84)));
  /* 11157645 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11157648 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115764a je 0x1115767c */
  if (C.zf) goto L_1115767c;
L_1115764c:;
  /* 1115764c call 0x11158700 */
  push32(0x11157651u); f_11158700();
  /* 11157651 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11157653 jne 0x11157676 */
  if (!C.zf) goto L_11157676;
  /* 11157655 push 0x1117e990 */
  push32((uint32_t)(0x1117e990u));
  /* 1115765a push 0 */
  push32((uint32_t)(0x0u));
  /* 1115765c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 11157661 push 0x1117e984 */
  push32((uint32_t)(0x1117e984u));
  /* 11157666 push 2 */
  push32((uint32_t)(0x2u));
  /* 11157668 call 0x11156620 */
  push32(0x1115766du); f_11156620();
  /* 1115766d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11157670 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157673 jne 0x11157676 */
  if (!C.zf) goto L_11157676;
  /* 11157675 int3  */
  x86_unimpl("int3 @ 0x11157675");
L_11157676:;
  /* 11157676 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11157678 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115767a jne 0x1115764c */
  if (!C.zf) goto L_1115764c;
L_1115767c:;
  /* 1115767c mov edx, dword ptr [0x11181a88] */
  EDX = (r32((uint32_t)(0x11181a88)));
  /* 11157682 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11157685 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11157688 cmp eax, dword ptr [0x11181a8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11181a8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115768e jne 0x11157691 */
  if (!C.zf) goto L_11157691;
  /* 11157690 int3  */
  x86_unimpl("int3 @ 0x11157690");
L_11157691:;
  /* 11157691 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11157694 push ecx */
  push32((uint32_t)(ECX));
  /* 11157695 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11157698 push edx */
  push32((uint32_t)(EDX));
  /* 11157699 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115769c push eax */
  push32((uint32_t)(EAX));
  /* 1115769d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111576a0 push ecx */
  push32((uint32_t)(ECX));
  /* 111576a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111576a4 push edx */
  push32((uint32_t)(EDX));
  /* 111576a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 111576a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 111576a9 call dword ptr [0x11181c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x11181c90))), 0x111576afu);
  /* 111576af add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111576b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111576b4 jne 0x11157714 */
  if (!C.zf) goto L_11157714;
  /* 111576b6 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111576ba je 0x111576e7 */
  if (C.zf) goto L_111576e7;
L_111576bc:;
  /* 111576bc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111576bf push eax */
  push32((uint32_t)(EAX));
  /* 111576c0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111576c3 push ecx */
  push32((uint32_t)(ECX));
  /* 111576c4 push 0x1117e94c */
  push32((uint32_t)(0x1117e94cu));
  /* 111576c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 111576cb push 0 */
  push32((uint32_t)(0x0u));
  /* 111576cd push 0 */
  push32((uint32_t)(0x0u));
  /* 111576cf push 0 */
  push32((uint32_t)(0x0u));
  /* 111576d1 call 0x11156620 */
  push32(0x111576d6u); f_11156620();
  /* 111576d6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111576d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111576dc jne 0x111576df */
  if (!C.zf) goto L_111576df;
  /* 111576de int3  */
  x86_unimpl("int3 @ 0x111576de");
L_111576df:;
  /* 111576df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111576e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111576e3 jne 0x111576bc */
  if (!C.zf) goto L_111576bc;
  /* 111576e5 jmp 0x1115770d */
  goto L_1115770d;
L_111576e7:;
  /* 111576e7 push 0x1117e928 */
  push32((uint32_t)(0x1117e928u));
  /* 111576ec push 0x1117e924 */
  push32((uint32_t)(0x1117e924u));
  /* 111576f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 111576f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 111576f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 111576f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 111576f9 call 0x11156620 */
  push32(0x111576feu); f_11156620();
  /* 111576fe add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11157701 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157704 jne 0x11157707 */
  if (!C.zf) goto L_11157707;
  /* 11157706 int3  */
  x86_unimpl("int3 @ 0x11157706");
L_11157707:;
  /* 11157707 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11157709 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115770b jne 0x111576e7 */
  if (!C.zf) goto L_111576e7;
L_1115770d:;
  /* 1115770d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115770f jmp 0x1115793c */
  goto L_1115793c;
L_11157714:;
  /* 11157714 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11157717 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1115771d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157720 je 0x11157736 */
  if (C.zf) goto L_11157736;
  /* 11157722 mov edx, dword ptr [0x11181a84] */
  EDX = (r32((uint32_t)(0x11181a84)));
  /* 11157728 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1115772b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115772d jne 0x11157736 */
  if (!C.zf) goto L_11157736;
  /* 1115772f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_11157736:;
  /* 11157736 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115773a ja 0x11157747 */
  if ((!C.cf&&!C.zf)) goto L_11157747;
  /* 1115773c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115773f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11157742 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157745 jbe 0x11157773 */
  if ((C.cf||C.zf)) goto L_11157773;
L_11157747:;
  /* 11157747 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115774a push ecx */
  push32((uint32_t)(ECX));
  /* 1115774b push 0x1117e900 */
  push32((uint32_t)(0x1117e900u));
  /* 11157750 push 0 */
  push32((uint32_t)(0x0u));
  /* 11157752 push 0 */
  push32((uint32_t)(0x0u));
  /* 11157754 push 0 */
  push32((uint32_t)(0x0u));
  /* 11157756 push 1 */
  push32((uint32_t)(0x1u));
  /* 11157758 call 0x11156620 */
  push32(0x1115775du); f_11156620();
  /* 1115775d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11157760 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157763 jne 0x11157766 */
  if (!C.zf) goto L_11157766;
  /* 11157765 int3  */
  x86_unimpl("int3 @ 0x11157765");
L_11157766:;
  /* 11157766 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11157768 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115776a jne 0x11157747 */
  if (!C.zf) goto L_11157747;
  /* 1115776c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115776e jmp 0x1115793c */
  goto L_1115793c;
L_11157773:;
  /* 11157773 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11157776 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1115777b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115777e je 0x111577c0 */
  if (C.zf) goto L_111577c0;
  /* 11157780 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157784 je 0x111577c0 */
  if (C.zf) goto L_111577c0;
  /* 11157786 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11157789 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1115778f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157792 je 0x111577c0 */
  if (C.zf) goto L_111577c0;
  /* 11157794 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157798 je 0x111577c0 */
  if (C.zf) goto L_111577c0;
L_1115779a:;
  /* 1115779a push 0x1117e8cc */
  push32((uint32_t)(0x1117e8ccu));
  /* 1115779f push 0x1117e924 */
  push32((uint32_t)(0x1117e924u));
  /* 111577a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 111577a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 111577a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 111577aa push 1 */
  push32((uint32_t)(0x1u));
  /* 111577ac call 0x11156620 */
  push32(0x111577b1u); f_11156620();
  /* 111577b1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111577b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111577b7 jne 0x111577ba */
  if (!C.zf) goto L_111577ba;
  /* 111577b9 int3  */
  x86_unimpl("int3 @ 0x111577b9");
L_111577ba:;
  /* 111577ba xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111577bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111577be jne 0x1115779a */
  if (!C.zf) goto L_1115779a;
L_111577c0:;
  /* 111577c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111577c3 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111577c6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 111577c9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111577cc push ecx */
  push32((uint32_t)(ECX));
  /* 111577cd call 0x1115b3b0 */
  push32(0x111577d2u); f_1115b3b0();
  /* 111577d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111577d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111577d8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111577dc jne 0x111577e5 */
  if (!C.zf) goto L_111577e5;
  /* 111577de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111577e0 jmp 0x1115793c */
  goto L_1115793c;
L_111577e5:;
  /* 111577e5 mov edx, dword ptr [0x11181a88] */
  EDX = (r32((uint32_t)(0x11181a88)));
  /* 111577eb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111577ee mov dword ptr [0x11181a88], edx */
  w32((uint32_t)(0x11181a88), (EDX));
  /* 111577f4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111577f8 je 0x11157843 */
  if (C.zf) goto L_11157843;
  /* 111577fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111577fd mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11157803 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11157806 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1115780d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11157810 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11157817 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115781a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 11157821 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11157824 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11157827 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 1115782a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115782d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 11157834 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11157837 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 1115783e jmp 0x111578e3 */
  goto L_111578e3;
L_11157843:;
  /* 11157843 mov edx, dword ptr [0x11183838] */
  EDX = (r32((uint32_t)(0x11183838)));
  /* 11157849 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115784c mov dword ptr [0x11183838], edx */
  w32((uint32_t)(0x11183838), (EDX));
  /* 11157852 mov eax, dword ptr [0x11183840] */
  EAX = (r32((uint32_t)(0x11183840)));
  /* 11157857 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115785a mov dword ptr [0x11183840], eax */
  w32((uint32_t)(0x11183840), (EAX));
  /* 1115785f mov ecx, dword ptr [0x11183840] */
  ECX = (r32((uint32_t)(0x11183840)));
  /* 11157865 cmp ecx, dword ptr [0x11183844] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11183844))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115786b jbe 0x11157879 */
  if ((C.cf||C.zf)) goto L_11157879;
  /* 1115786d mov edx, dword ptr [0x11183840] */
  EDX = (r32((uint32_t)(0x11183840)));
  /* 11157873 mov dword ptr [0x11183844], edx */
  w32((uint32_t)(0x11183844), (EDX));
L_11157879:;
  /* 11157879 cmp dword ptr [0x1118383c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1118383c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157880 je 0x1115788f */
  if (C.zf) goto L_1115788f;
  /* 11157882 mov eax, dword ptr [0x1118383c] */
  EAX = (r32((uint32_t)(0x1118383c)));
  /* 11157887 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115788a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1115788d jmp 0x11157898 */
  goto L_11157898;
L_1115788f:;
  /* 1115788f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11157892 mov dword ptr [0x11183834], edx */
  w32((uint32_t)(0x11183834), (EDX));
L_11157898:;
  /* 11157898 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115789b mov ecx, dword ptr [0x1118383c] */
  ECX = (r32((uint32_t)(0x1118383c)));
  /* 111578a1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 111578a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111578a6 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 111578ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111578b0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111578b3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 111578b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111578b9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111578bc mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 111578bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111578c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111578c5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 111578c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111578cb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111578ce mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 111578d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111578d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111578d7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 111578da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111578dd mov dword ptr [0x1118383c], ecx */
  w32((uint32_t)(0x1118383c), (ECX));
L_111578e3:;
  /* 111578e3 push 4 */
  push32((uint32_t)(0x4u));
  /* 111578e5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111578e7 mov dl, byte ptr [0x11181a90] */
  DL = (r8((uint32_t)(0x11181a90)));
  /* 111578ed push edx */
  push32((uint32_t)(EDX));
  /* 111578ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111578f1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111578f4 push eax */
  push32((uint32_t)(EAX));
  /* 111578f5 call 0x1115b2d0 */
  push32(0x111578fau); f_1115b2d0();
  /* 111578fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111578fd push 4 */
  push32((uint32_t)(0x4u));
  /* 111578ff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11157901 mov cl, byte ptr [0x11181a90] */
  CL = (r8((uint32_t)(0x11181a90)));
  /* 11157907 push ecx */
  push32((uint32_t)(ECX));
  /* 11157908 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115790b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115790e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 11157912 push ecx */
  push32((uint32_t)(ECX));
  /* 11157913 call 0x1115b2d0 */
  push32(0x11157918u); f_1115b2d0();
  /* 11157918 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115791b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115791e push edx */
  push32((uint32_t)(EDX));
  /* 1115791f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11157921 mov al, byte ptr [0x11181a92] */
  AL = (r8((uint32_t)(0x11181a92)));
  /* 11157926 push eax */
  push32((uint32_t)(EAX));
  /* 11157927 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115792a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115792d push ecx */
  push32((uint32_t)(ECX));
  /* 1115792e call 0x1115b2d0 */
  push32(0x11157933u); f_1115b2d0();
  /* 11157933 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11157936 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11157939 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1115793c:;
  /* 1115793c pop edi */
  EDI = (pop32());
  /* 1115793d pop esi */
  ESI = (pop32());
  /* 1115793e pop ebx */
  EBX = (pop32());
  /* 1115793f mov esp, ebp */
  ESP = (EBP);
  /* 11157941 pop ebp */
  EBP = (pop32());
  /* 11157942 ret  */
  ESPCHK(0x11157630u, _esp0);
  ESP += 4; return;
}

/* FUN_10007950 @ 0x11157950 (27 bytes, 13 insns) */
void f_11157950(void) {
  FTRACE(0x11157950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11157950 push ebp */
  push32((uint32_t)(EBP));
  /* 11157951 mov ebp, esp */
  EBP = (ESP);
  /* 11157953 push 0 */
  push32((uint32_t)(0x0u));
  /* 11157955 push 0 */
  push32((uint32_t)(0x0u));
  /* 11157957 push 1 */
  push32((uint32_t)(0x1u));
  /* 11157959 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115795c push eax */
  push32((uint32_t)(EAX));
  /* 1115795d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11157960 push ecx */
  push32((uint32_t)(ECX));
  /* 11157961 call 0x11157970 */
  push32(0x11157966u); f_11157970();
  /* 11157966 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11157969 pop ebp */
  EBP = (pop32());
  /* 1115796a ret  */
  ESPCHK(0x11157950u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x11157970 (96 bytes, 37 insns) */
void f_11157970(void) {
  FTRACE(0x11157970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11157970 push ebp */
  push32((uint32_t)(EBP));
  /* 11157971 mov ebp, esp */
  EBP = (ESP);
  /* 11157973 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11157976 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11157979 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1115797d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11157980 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11157983 push ecx */
  push32((uint32_t)(ECX));
  /* 11157984 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11157987 push edx */
  push32((uint32_t)(EDX));
  /* 11157988 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115798b push eax */
  push32((uint32_t)(EAX));
  /* 1115798c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115798f push ecx */
  push32((uint32_t)(ECX));
  /* 11157990 call 0x11157560 */
  push32(0x11157995u); f_11157560();
  /* 11157995 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11157998 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1115799b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115799f je 0x111579c9 */
  if (C.zf) goto L_111579c9;
  /* 111579a1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111579a4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 111579a7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111579aa add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111579ad mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111579b0:;
  /* 111579b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111579b3 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111579b6 jae 0x111579c9 */
  if (!C.cf) goto L_111579c9;
  /* 111579b8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111579bb mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 111579be mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111579c1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111579c4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111579c7 jmp 0x111579b0 */
  goto L_111579b0;
L_111579c9:;
  /* 111579c9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111579cc mov esp, ebp */
  ESP = (EBP);
  /* 111579ce pop ebp */
  EBP = (pop32());
  /* 111579cf ret  */
  ESPCHK(0x11157970u, _esp0);
  ESP += 4; return;
}

/* FUN_100079d0 @ 0x111579d0 (27 bytes, 13 insns) */
void f_111579d0(void) {
  FTRACE(0x111579d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111579d0 push ebp */
  push32((uint32_t)(EBP));
  /* 111579d1 mov ebp, esp */
  EBP = (ESP);
  /* 111579d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 111579d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 111579d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 111579d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111579dc push eax */
  push32((uint32_t)(EAX));
  /* 111579dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111579e0 push ecx */
  push32((uint32_t)(ECX));
  /* 111579e1 call 0x111579f0 */
  push32(0x111579e6u); f_111579f0();
  /* 111579e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111579e9 pop ebp */
  EBP = (pop32());
  /* 111579ea ret  */
  ESPCHK(0x111579d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100079f0 @ 0x111579f0 (64 bytes, 27 insns) */
void f_111579f0(void) {
  FTRACE(0x111579f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111579f0 push ebp */
  push32((uint32_t)(EBP));
  /* 111579f1 mov ebp, esp */
  EBP = (ESP);
  /* 111579f3 push ecx */
  push32((uint32_t)(ECX));
  /* 111579f4 push 9 */
  push32((uint32_t)(0x9u));
  /* 111579f6 call 0x1115af60 */
  push32(0x111579fbu); f_1115af60();
  /* 111579fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111579fe push 1 */
  push32((uint32_t)(0x1u));
  /* 11157a00 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11157a03 push eax */
  push32((uint32_t)(EAX));
  /* 11157a04 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11157a07 push ecx */
  push32((uint32_t)(ECX));
  /* 11157a08 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11157a0b push edx */
  push32((uint32_t)(EDX));
  /* 11157a0c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11157a0f push eax */
  push32((uint32_t)(EAX));
  /* 11157a10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11157a13 push ecx */
  push32((uint32_t)(ECX));
  /* 11157a14 call 0x11157a30 */
  push32(0x11157a19u); f_11157a30();
  /* 11157a19 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11157a1c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11157a1f push 9 */
  push32((uint32_t)(0x9u));
  /* 11157a21 call 0x1115b000 */
  push32(0x11157a26u); f_1115b000();
  /* 11157a26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11157a29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11157a2c mov esp, ebp */
  ESP = (EBP);
  /* 11157a2e pop ebp */
  EBP = (pop32());
  /* 11157a2f ret  */
  ESPCHK(0x111579f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a30 @ 0x11157a30 (1297 bytes, 431 insns) */
void f_11157a30(void) {
  FTRACE(0x11157a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11157a30 push ebp */
  push32((uint32_t)(EBP));
  /* 11157a31 mov ebp, esp */
  EBP = (ESP);
  /* 11157a33 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11157a36 push ebx */
  push32((uint32_t)(EBX));
  /* 11157a37 push esi */
  push32((uint32_t)(ESI));
  /* 11157a38 push edi */
  push32((uint32_t)(EDI));
  /* 11157a39 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11157a40 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157a44 jne 0x11157a63 */
  if (!C.zf) goto L_11157a63;
  /* 11157a46 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11157a49 push eax */
  push32((uint32_t)(EAX));
  /* 11157a4a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11157a4d push ecx */
  push32((uint32_t)(ECX));
  /* 11157a4e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11157a51 push edx */
  push32((uint32_t)(EDX));
  /* 11157a52 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11157a55 push eax */
  push32((uint32_t)(EAX));
  /* 11157a56 call 0x11157560 */
  push32(0x11157a5bu); f_11157560();
  /* 11157a5b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11157a5e jmp 0x11157f3a */
  goto L_11157f3a;
L_11157a63:;
  /* 11157a63 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157a67 je 0x11157a86 */
  if (C.zf) goto L_11157a86;
  /* 11157a69 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157a6d jne 0x11157a86 */
  if (!C.zf) goto L_11157a86;
  /* 11157a6f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11157a72 push ecx */
  push32((uint32_t)(ECX));
  /* 11157a73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11157a76 push edx */
  push32((uint32_t)(EDX));
  /* 11157a77 call 0x11157ff0 */
  push32(0x11157a7cu); f_11157ff0();
  /* 11157a7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11157a7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11157a81 jmp 0x11157f3a */
  goto L_11157f3a;
L_11157a86:;
  /* 11157a86 mov eax, dword ptr [0x11181a84] */
  EAX = (r32((uint32_t)(0x11181a84)));
  /* 11157a8b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11157a8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11157a90 je 0x11157ac2 */
  if (C.zf) goto L_11157ac2;
L_11157a92:;
  /* 11157a92 call 0x11158700 */
  push32(0x11157a97u); f_11158700();
  /* 11157a97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11157a99 jne 0x11157abc */
  if (!C.zf) goto L_11157abc;
  /* 11157a9b push 0x1117e990 */
  push32((uint32_t)(0x1117e990u));
  /* 11157aa0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11157aa2 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 11157aa7 push 0x1117e984 */
  push32((uint32_t)(0x1117e984u));
  /* 11157aac push 2 */
  push32((uint32_t)(0x2u));
  /* 11157aae call 0x11156620 */
  push32(0x11157ab3u); f_11156620();
  /* 11157ab3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11157ab6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157ab9 jne 0x11157abc */
  if (!C.zf) goto L_11157abc;
  /* 11157abb int3  */
  x86_unimpl("int3 @ 0x11157abb");
L_11157abc:;
  /* 11157abc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11157abe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11157ac0 jne 0x11157a92 */
  if (!C.zf) goto L_11157a92;
L_11157ac2:;
  /* 11157ac2 mov edx, dword ptr [0x11181a88] */
  EDX = (r32((uint32_t)(0x11181a88)));
  /* 11157ac8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11157acb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11157ace cmp eax, dword ptr [0x11181a8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11181a8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157ad4 jne 0x11157ad7 */
  if (!C.zf) goto L_11157ad7;
  /* 11157ad6 int3  */
  x86_unimpl("int3 @ 0x11157ad6");
L_11157ad7:;
  /* 11157ad7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11157ada push ecx */
  push32((uint32_t)(ECX));
  /* 11157adb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11157ade push edx */
  push32((uint32_t)(EDX));
  /* 11157adf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11157ae2 push eax */
  push32((uint32_t)(EAX));
  /* 11157ae3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11157ae6 push ecx */
  push32((uint32_t)(ECX));
  /* 11157ae7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11157aea push edx */
  push32((uint32_t)(EDX));
  /* 11157aeb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11157aee push eax */
  push32((uint32_t)(EAX));
  /* 11157aef push 2 */
  push32((uint32_t)(0x2u));
  /* 11157af1 call dword ptr [0x11181c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x11181c90))), 0x11157af7u);
  /* 11157af7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11157afa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11157afc jne 0x11157b5c */
  if (!C.zf) goto L_11157b5c;
  /* 11157afe cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157b02 je 0x11157b2f */
  if (C.zf) goto L_11157b2f;
L_11157b04:;
  /* 11157b04 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11157b07 push ecx */
  push32((uint32_t)(ECX));
  /* 11157b08 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11157b0b push edx */
  push32((uint32_t)(EDX));
  /* 11157b0c push 0x1117eb0c */
  push32((uint32_t)(0x1117eb0cu));
  /* 11157b11 push 0 */
  push32((uint32_t)(0x0u));
  /* 11157b13 push 0 */
  push32((uint32_t)(0x0u));
  /* 11157b15 push 0 */
  push32((uint32_t)(0x0u));
  /* 11157b17 push 0 */
  push32((uint32_t)(0x0u));
  /* 11157b19 call 0x11156620 */
  push32(0x11157b1eu); f_11156620();
  /* 11157b1e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11157b21 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157b24 jne 0x11157b27 */
  if (!C.zf) goto L_11157b27;
  /* 11157b26 int3  */
  x86_unimpl("int3 @ 0x11157b26");
L_11157b27:;
  /* 11157b27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11157b29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11157b2b jne 0x11157b04 */
  if (!C.zf) goto L_11157b04;
  /* 11157b2d jmp 0x11157b55 */
  goto L_11157b55;
L_11157b2f:;
  /* 11157b2f push 0x1117eae8 */
  push32((uint32_t)(0x1117eae8u));
  /* 11157b34 push 0x1117e924 */
  push32((uint32_t)(0x1117e924u));
  /* 11157b39 push 0 */
  push32((uint32_t)(0x0u));
  /* 11157b3b push 0 */
  push32((uint32_t)(0x0u));
  /* 11157b3d push 0 */
  push32((uint32_t)(0x0u));
  /* 11157b3f push 0 */
  push32((uint32_t)(0x0u));
  /* 11157b41 call 0x11156620 */
  push32(0x11157b46u); f_11156620();
  /* 11157b46 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11157b49 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157b4c jne 0x11157b4f */
  if (!C.zf) goto L_11157b4f;
  /* 11157b4e int3  */
  x86_unimpl("int3 @ 0x11157b4e");
L_11157b4f:;
  /* 11157b4f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11157b51 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11157b53 jne 0x11157b2f */
  if (!C.zf) goto L_11157b2f;
L_11157b55:;
  /* 11157b55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11157b57 jmp 0x11157f3a */
  goto L_11157f3a;
L_11157b5c:;
  /* 11157b5c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157b60 jbe 0x11157b8e */
  if ((C.cf||C.zf)) goto L_11157b8e;
L_11157b62:;
  /* 11157b62 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11157b65 push edx */
  push32((uint32_t)(EDX));
  /* 11157b66 push 0x1117eab8 */
  push32((uint32_t)(0x1117eab8u));
  /* 11157b6b push 0 */
  push32((uint32_t)(0x0u));
  /* 11157b6d push 0 */
  push32((uint32_t)(0x0u));
  /* 11157b6f push 0 */
  push32((uint32_t)(0x0u));
  /* 11157b71 push 1 */
  push32((uint32_t)(0x1u));
  /* 11157b73 call 0x11156620 */
  push32(0x11157b78u); f_11156620();
  /* 11157b78 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11157b7b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157b7e jne 0x11157b81 */
  if (!C.zf) goto L_11157b81;
  /* 11157b80 int3  */
  x86_unimpl("int3 @ 0x11157b80");
L_11157b81:;
  /* 11157b81 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11157b83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11157b85 jne 0x11157b62 */
  if (!C.zf) goto L_11157b62;
  /* 11157b87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11157b89 jmp 0x11157f3a */
  goto L_11157f3a;
L_11157b8e:;
  /* 11157b8e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157b92 je 0x11157bd6 */
  if (C.zf) goto L_11157bd6;
  /* 11157b94 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11157b97 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11157b9d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157ba0 je 0x11157bd6 */
  if (C.zf) goto L_11157bd6;
  /* 11157ba2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11157ba5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11157bab cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157bae je 0x11157bd6 */
  if (C.zf) goto L_11157bd6;
L_11157bb0:;
  /* 11157bb0 push 0x1117e8cc */
  push32((uint32_t)(0x1117e8ccu));
  /* 11157bb5 push 0x1117e924 */
  push32((uint32_t)(0x1117e924u));
  /* 11157bba push 0 */
  push32((uint32_t)(0x0u));
  /* 11157bbc push 0 */
  push32((uint32_t)(0x0u));
  /* 11157bbe push 0 */
  push32((uint32_t)(0x0u));
  /* 11157bc0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11157bc2 call 0x11156620 */
  push32(0x11157bc7u); f_11156620();
  /* 11157bc7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11157bca cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157bcd jne 0x11157bd0 */
  if (!C.zf) goto L_11157bd0;
  /* 11157bcf int3  */
  x86_unimpl("int3 @ 0x11157bcf");
L_11157bd0:;
  /* 11157bd0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11157bd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11157bd4 jne 0x11157bb0 */
  if (!C.zf) goto L_11157bb0;
L_11157bd6:;
  /* 11157bd6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11157bd9 push ecx */
  push32((uint32_t)(ECX));
  /* 11157bda call 0x11158b60 */
  push32(0x11157bdfu); f_11158b60();
  /* 11157bdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11157be2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11157be4 jne 0x11157c07 */
  if (!C.zf) goto L_11157c07;
  /* 11157be6 push 0x1117ea94 */
  push32((uint32_t)(0x1117ea94u));
  /* 11157beb push 0 */
  push32((uint32_t)(0x0u));
  /* 11157bed push 0x261 */
  push32((uint32_t)(0x261u));
  /* 11157bf2 push 0x1117e984 */
  push32((uint32_t)(0x1117e984u));
  /* 11157bf7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11157bf9 call 0x11156620 */
  push32(0x11157bfeu); f_11156620();
  /* 11157bfe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11157c01 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157c04 jne 0x11157c07 */
  if (!C.zf) goto L_11157c07;
  /* 11157c06 int3  */
  x86_unimpl("int3 @ 0x11157c06");
L_11157c07:;
  /* 11157c07 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11157c09 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11157c0b jne 0x11157bd6 */
  if (!C.zf) goto L_11157bd6;
  /* 11157c0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11157c10 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11157c13 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11157c16 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11157c19 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157c1d jne 0x11157c26 */
  if (!C.zf) goto L_11157c26;
  /* 11157c1f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11157c26:;
  /* 11157c26 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157c2a je 0x11157c6a */
  if (C.zf) goto L_11157c6a;
L_11157c2c:;
  /* 11157c2c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11157c2f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157c36 jne 0x11157c41 */
  if (!C.zf) goto L_11157c41;
  /* 11157c38 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11157c3b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157c3f je 0x11157c62 */
  if (C.zf) goto L_11157c62;
L_11157c41:;
  /* 11157c41 push 0x1117ea4c */
  push32((uint32_t)(0x1117ea4cu));
  /* 11157c46 push 0 */
  push32((uint32_t)(0x0u));
  /* 11157c48 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 11157c4d push 0x1117e984 */
  push32((uint32_t)(0x1117e984u));
  /* 11157c52 push 2 */
  push32((uint32_t)(0x2u));
  /* 11157c54 call 0x11156620 */
  push32(0x11157c59u); f_11156620();
  /* 11157c59 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11157c5c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157c5f jne 0x11157c62 */
  if (!C.zf) goto L_11157c62;
  /* 11157c61 int3  */
  x86_unimpl("int3 @ 0x11157c61");
L_11157c62:;
  /* 11157c62 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11157c64 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11157c66 jne 0x11157c2c */
  if (!C.zf) goto L_11157c2c;
  /* 11157c68 jmp 0x11157cce */
  goto L_11157cce;
L_11157c6a:;
  /* 11157c6a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11157c6d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11157c70 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11157c75 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157c78 jne 0x11157c8f */
  if (!C.zf) goto L_11157c8f;
  /* 11157c7a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11157c7d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11157c83 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157c86 jne 0x11157c8f */
  if (!C.zf) goto L_11157c8f;
  /* 11157c88 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_11157c8f:;
  /* 11157c8f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11157c92 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11157c95 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11157c9a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11157c9d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11157ca3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157ca5 je 0x11157cc8 */
  if (C.zf) goto L_11157cc8;
  /* 11157ca7 push 0x1117ea10 */
  push32((uint32_t)(0x1117ea10u));
  /* 11157cac push 0 */
  push32((uint32_t)(0x0u));
  /* 11157cae push 0x272 */
  push32((uint32_t)(0x272u));
  /* 11157cb3 push 0x1117e984 */
  push32((uint32_t)(0x1117e984u));
  /* 11157cb8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11157cba call 0x11156620 */
  push32(0x11157cbfu); f_11156620();
  /* 11157cbf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11157cc2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157cc5 jne 0x11157cc8 */
  if (!C.zf) goto L_11157cc8;
  /* 11157cc7 int3  */
  x86_unimpl("int3 @ 0x11157cc7");
L_11157cc8:;
  /* 11157cc8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11157cca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11157ccc jne 0x11157c8f */
  if (!C.zf) goto L_11157c8f;
L_11157cce:;
  /* 11157cce cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157cd2 je 0x11157cf9 */
  if (C.zf) goto L_11157cf9;
  /* 11157cd4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11157cd7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11157cda push eax */
  push32((uint32_t)(EAX));
  /* 11157cdb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11157cde push ecx */
  push32((uint32_t)(ECX));
  /* 11157cdf call 0x1115b4e0 */
  push32(0x11157ce4u); f_1115b4e0();
  /* 11157ce4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11157ce7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11157cea cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157cee jne 0x11157cf7 */
  if (!C.zf) goto L_11157cf7;
  /* 11157cf0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11157cf2 jmp 0x11157f3a */
  goto L_11157f3a;
L_11157cf7:;
  /* 11157cf7 jmp 0x11157d1c */
  goto L_11157d1c;
L_11157cf9:;
  /* 11157cf9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11157cfc add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11157cff push edx */
  push32((uint32_t)(EDX));
  /* 11157d00 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11157d03 push eax */
  push32((uint32_t)(EAX));
  /* 11157d04 call 0x1115b430 */
  push32(0x11157d09u); f_1115b430();
  /* 11157d09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11157d0c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11157d0f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157d13 jne 0x11157d1c */
  if (!C.zf) goto L_11157d1c;
  /* 11157d15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11157d17 jmp 0x11157f3a */
  goto L_11157f3a;
L_11157d1c:;
  /* 11157d1c mov ecx, dword ptr [0x11181a88] */
  ECX = (r32((uint32_t)(0x11181a88)));
  /* 11157d22 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11157d25 mov dword ptr [0x11181a88], ecx */
  w32((uint32_t)(0x11181a88), (ECX));
  /* 11157d2b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157d2f jne 0x11157d87 */
  if (!C.zf) goto L_11157d87;
  /* 11157d31 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11157d34 mov eax, dword ptr [0x11183838] */
  EAX = (r32((uint32_t)(0x11183838)));
  /* 11157d39 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11157d3c mov dword ptr [0x11183838], eax */
  w32((uint32_t)(0x11183838), (EAX));
  /* 11157d41 mov ecx, dword ptr [0x11183838] */
  ECX = (r32((uint32_t)(0x11183838)));
  /* 11157d47 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11157d4a mov dword ptr [0x11183838], ecx */
  w32((uint32_t)(0x11183838), (ECX));
  /* 11157d50 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11157d53 mov eax, dword ptr [0x11183840] */
  EAX = (r32((uint32_t)(0x11183840)));
  /* 11157d58 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11157d5b mov dword ptr [0x11183840], eax */
  w32((uint32_t)(0x11183840), (EAX));
  /* 11157d60 mov ecx, dword ptr [0x11183840] */
  ECX = (r32((uint32_t)(0x11183840)));
  /* 11157d66 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11157d69 mov dword ptr [0x11183840], ecx */
  w32((uint32_t)(0x11183840), (ECX));
  /* 11157d6f mov edx, dword ptr [0x11183840] */
  EDX = (r32((uint32_t)(0x11183840)));
  /* 11157d75 cmp edx, dword ptr [0x11183844] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11183844))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157d7b jbe 0x11157d87 */
  if ((C.cf||C.zf)) goto L_11157d87;
  /* 11157d7d mov eax, dword ptr [0x11183840] */
  EAX = (r32((uint32_t)(0x11183840)));
  /* 11157d82 mov dword ptr [0x11183844], eax */
  w32((uint32_t)(0x11183844), (EAX));
L_11157d87:;
  /* 11157d87 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11157d8a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11157d8d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11157d90 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11157d93 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11157d96 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157d99 jbe 0x11157dbf */
  if ((C.cf||C.zf)) goto L_11157dbf;
  /* 11157d9b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11157d9e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11157da1 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11157da4 push edx */
  push32((uint32_t)(EDX));
  /* 11157da5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11157da7 mov al, byte ptr [0x11181a92] */
  AL = (r8((uint32_t)(0x11181a92)));
  /* 11157dac push eax */
  push32((uint32_t)(EAX));
  /* 11157dad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11157db0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11157db3 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11157db6 push edx */
  push32((uint32_t)(EDX));
  /* 11157db7 call 0x1115b2d0 */
  push32(0x11157dbcu); f_1115b2d0();
  /* 11157dbc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11157dbf:;
  /* 11157dbf push 4 */
  push32((uint32_t)(0x4u));
  /* 11157dc1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11157dc3 mov al, byte ptr [0x11181a90] */
  AL = (r8((uint32_t)(0x11181a90)));
  /* 11157dc8 push eax */
  push32((uint32_t)(EAX));
  /* 11157dc9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11157dcc add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11157dcf push ecx */
  push32((uint32_t)(ECX));
  /* 11157dd0 call 0x1115b2d0 */
  push32(0x11157dd5u); f_1115b2d0();
  /* 11157dd5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11157dd8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157ddc jne 0x11157df9 */
  if (!C.zf) goto L_11157df9;
  /* 11157dde mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11157de1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11157de4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11157de7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11157dea mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11157ded mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 11157df0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11157df3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11157df6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_11157df9:;
  /* 11157df9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11157dfc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11157dff mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_11157e02:;
  /* 11157e02 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157e06 jne 0x11157e37 */
  if (!C.zf) goto L_11157e37;
  /* 11157e08 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157e0c jne 0x11157e16 */
  if (!C.zf) goto L_11157e16;
  /* 11157e0e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11157e11 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157e14 je 0x11157e37 */
  if (C.zf) goto L_11157e37;
L_11157e16:;
  /* 11157e16 push 0x1117e9dc */
  push32((uint32_t)(0x1117e9dcu));
  /* 11157e1b push 0 */
  push32((uint32_t)(0x0u));
  /* 11157e1d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 11157e22 push 0x1117e984 */
  push32((uint32_t)(0x1117e984u));
  /* 11157e27 push 2 */
  push32((uint32_t)(0x2u));
  /* 11157e29 call 0x11156620 */
  push32(0x11157e2eu); f_11156620();
  /* 11157e2e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11157e31 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157e34 jne 0x11157e37 */
  if (!C.zf) goto L_11157e37;
  /* 11157e36 int3  */
  x86_unimpl("int3 @ 0x11157e36");
L_11157e37:;
  /* 11157e37 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11157e39 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11157e3b jne 0x11157e02 */
  if (!C.zf) goto L_11157e02;
  /* 11157e3d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11157e40 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157e43 je 0x11157e4b */
  if (C.zf) goto L_11157e4b;
  /* 11157e45 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157e49 je 0x11157e53 */
  if (C.zf) goto L_11157e53;
L_11157e4b:;
  /* 11157e4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11157e4e jmp 0x11157f3a */
  goto L_11157f3a;
L_11157e53:;
  /* 11157e53 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11157e56 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157e59 je 0x11157e6b */
  if (C.zf) goto L_11157e6b;
  /* 11157e5b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11157e5e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11157e60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11157e63 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11157e66 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11157e69 jmp 0x11157ea7 */
  goto L_11157ea7;
L_11157e6b:;
  /* 11157e6b mov eax, dword ptr [0x11183834] */
  EAX = (r32((uint32_t)(0x11183834)));
  /* 11157e70 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157e73 je 0x11157e96 */
  if (C.zf) goto L_11157e96;
  /* 11157e75 push 0x1117e9c0 */
  push32((uint32_t)(0x1117e9c0u));
  /* 11157e7a push 0 */
  push32((uint32_t)(0x0u));
  /* 11157e7c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 11157e81 push 0x1117e984 */
  push32((uint32_t)(0x1117e984u));
  /* 11157e86 push 2 */
  push32((uint32_t)(0x2u));
  /* 11157e88 call 0x11156620 */
  push32(0x11157e8du); f_11156620();
  /* 11157e8d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11157e90 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157e93 jne 0x11157e96 */
  if (!C.zf) goto L_11157e96;
  /* 11157e95 int3  */
  x86_unimpl("int3 @ 0x11157e95");
L_11157e96:;
  /* 11157e96 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11157e98 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11157e9a jne 0x11157e6b */
  if (!C.zf) goto L_11157e6b;
  /* 11157e9c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11157e9f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11157ea2 mov dword ptr [0x11183834], eax */
  w32((uint32_t)(0x11183834), (EAX));
L_11157ea7:;
  /* 11157ea7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11157eaa cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157eae je 0x11157ebf */
  if (C.zf) goto L_11157ebf;
  /* 11157eb0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11157eb3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11157eb6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11157eb9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11157ebb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11157ebd jmp 0x11157efa */
  goto L_11157efa;
L_11157ebf:;
  /* 11157ebf mov eax, dword ptr [0x1118383c] */
  EAX = (r32((uint32_t)(0x1118383c)));
  /* 11157ec4 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157ec7 je 0x11157eea */
  if (C.zf) goto L_11157eea;
  /* 11157ec9 push 0x1117e9a4 */
  push32((uint32_t)(0x1117e9a4u));
  /* 11157ece push 0 */
  push32((uint32_t)(0x0u));
  /* 11157ed0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 11157ed5 push 0x1117e984 */
  push32((uint32_t)(0x1117e984u));
  /* 11157eda push 2 */
  push32((uint32_t)(0x2u));
  /* 11157edc call 0x11156620 */
  push32(0x11157ee1u); f_11156620();
  /* 11157ee1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11157ee4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157ee7 jne 0x11157eea */
  if (!C.zf) goto L_11157eea;
  /* 11157ee9 int3  */
  x86_unimpl("int3 @ 0x11157ee9");
L_11157eea:;
  /* 11157eea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11157eec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11157eee jne 0x11157ebf */
  if (!C.zf) goto L_11157ebf;
  /* 11157ef0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11157ef3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11157ef5 mov dword ptr [0x1118383c], eax */
  w32((uint32_t)(0x1118383c), (EAX));
L_11157efa:;
  /* 11157efa cmp dword ptr [0x1118383c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1118383c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11157f01 je 0x11157f11 */
  if (C.zf) goto L_11157f11;
  /* 11157f03 mov ecx, dword ptr [0x1118383c] */
  ECX = (r32((uint32_t)(0x1118383c)));
  /* 11157f09 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11157f0c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11157f0f jmp 0x11157f19 */
  goto L_11157f19;
L_11157f11:;
  /* 11157f11 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11157f14 mov dword ptr [0x11183834], eax */
  w32((uint32_t)(0x11183834), (EAX));
L_11157f19:;
  /* 11157f19 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11157f1c mov edx, dword ptr [0x1118383c] */
  EDX = (r32((uint32_t)(0x1118383c)));
  /* 11157f22 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11157f24 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11157f27 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11157f2e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11157f31 mov dword ptr [0x1118383c], ecx */
  w32((uint32_t)(0x1118383c), (ECX));
  /* 11157f37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11157f3a:;
  /* 11157f3a pop edi */
  EDI = (pop32());
  /* 11157f3b pop esi */
  ESI = (pop32());
  /* 11157f3c pop ebx */
  EBX = (pop32());
  /* 11157f3d mov esp, ebp */
  ESP = (EBP);
  /* 11157f3f pop ebp */
  EBP = (pop32());
  /* 11157f40 ret  */
  ESPCHK(0x11157a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f50 @ 0x11157f50 (27 bytes, 13 insns) */
void f_11157f50(void) {
  FTRACE(0x11157f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11157f50 push ebp */
  push32((uint32_t)(EBP));
  /* 11157f51 mov ebp, esp */
  EBP = (ESP);
  /* 11157f53 push 0 */
  push32((uint32_t)(0x0u));
  /* 11157f55 push 0 */
  push32((uint32_t)(0x0u));
  /* 11157f57 push 1 */
  push32((uint32_t)(0x1u));
  /* 11157f59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11157f5c push eax */
  push32((uint32_t)(EAX));
  /* 11157f5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11157f60 push ecx */
  push32((uint32_t)(ECX));
  /* 11157f61 call 0x11157f70 */
  push32(0x11157f66u); f_11157f70();
  /* 11157f66 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11157f69 pop ebp */
  EBP = (pop32());
  /* 11157f6a ret  */
  ESPCHK(0x11157f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f70 @ 0x11157f70 (64 bytes, 27 insns) */
void f_11157f70(void) {
  FTRACE(0x11157f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11157f70 push ebp */
  push32((uint32_t)(EBP));
  /* 11157f71 mov ebp, esp */
  EBP = (ESP);
  /* 11157f73 push ecx */
  push32((uint32_t)(ECX));
  /* 11157f74 push 9 */
  push32((uint32_t)(0x9u));
  /* 11157f76 call 0x1115af60 */
  push32(0x11157f7bu); f_1115af60();
  /* 11157f7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11157f7e push 0 */
  push32((uint32_t)(0x0u));
  /* 11157f80 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11157f83 push eax */
  push32((uint32_t)(EAX));
  /* 11157f84 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11157f87 push ecx */
  push32((uint32_t)(ECX));
  /* 11157f88 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11157f8b push edx */
  push32((uint32_t)(EDX));
  /* 11157f8c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11157f8f push eax */
  push32((uint32_t)(EAX));
  /* 11157f90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11157f93 push ecx */
  push32((uint32_t)(ECX));
  /* 11157f94 call 0x11157a30 */
  push32(0x11157f99u); f_11157a30();
  /* 11157f99 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11157f9c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11157f9f push 9 */
  push32((uint32_t)(0x9u));
  /* 11157fa1 call 0x1115b000 */
  push32(0x11157fa6u); f_1115b000();
  /* 11157fa6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11157fa9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11157fac mov esp, ebp */
  ESP = (EBP);
  /* 11157fae pop ebp */
  EBP = (pop32());
  /* 11157faf ret  */
  ESPCHK(0x11157f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fb0 @ 0x11157fb0 (19 bytes, 9 insns) */
void f_11157fb0(void) {
  FTRACE(0x11157fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11157fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11157fb1 mov ebp, esp */
  EBP = (ESP);
  /* 11157fb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11157fb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11157fb8 push eax */
  push32((uint32_t)(EAX));
  /* 11157fb9 call 0x11157ff0 */
  push32(0x11157fbeu); f_11157ff0();
  /* 11157fbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11157fc1 pop ebp */
  EBP = (pop32());
  /* 11157fc2 ret  */
  ESPCHK(0x11157fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fd0 @ 0x11157fd0 (19 bytes, 9 insns) */
void f_11157fd0(void) {
  FTRACE(0x11157fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11157fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11157fd1 mov ebp, esp */
  EBP = (ESP);
  /* 11157fd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11157fd5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11157fd8 push eax */
  push32((uint32_t)(EAX));
  /* 11157fd9 call 0x11158020 */
  push32(0x11157fdeu); f_11158020();
  /* 11157fde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11157fe1 pop ebp */
  EBP = (pop32());
  /* 11157fe2 ret  */
  ESPCHK(0x11157fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ff0 @ 0x11157ff0 (41 bytes, 16 insns) */
void f_11157ff0(void) {
  FTRACE(0x11157ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11157ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 11157ff1 mov ebp, esp */
  EBP = (ESP);
  /* 11157ff3 push 9 */
  push32((uint32_t)(0x9u));
  /* 11157ff5 call 0x1115af60 */
  push32(0x11157ffau); f_1115af60();
  /* 11157ffa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11157ffd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11158000 push eax */
  push32((uint32_t)(EAX));
  /* 11158001 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11158004 push ecx */
  push32((uint32_t)(ECX));
  /* 11158005 call 0x11158020 */
  push32(0x1115800au); f_11158020();
  /* 1115800a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115800d push 9 */
  push32((uint32_t)(0x9u));
  /* 1115800f call 0x1115b000 */
  push32(0x11158014u); f_1115b000();
  /* 11158014 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11158017 pop ebp */
  EBP = (pop32());
  /* 11158018 ret  */
  ESPCHK(0x11157ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008020 @ 0x11158020 (1004 bytes, 342 insns) */
void f_11158020(void) {
  FTRACE(0x11158020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11158020 push ebp */
  push32((uint32_t)(EBP));
  /* 11158021 mov ebp, esp */
  EBP = (ESP);
  /* 11158023 push ecx */
  push32((uint32_t)(ECX));
  /* 11158024 push ebx */
  push32((uint32_t)(EBX));
  /* 11158025 push esi */
  push32((uint32_t)(ESI));
  /* 11158026 push edi */
  push32((uint32_t)(EDI));
  /* 11158027 mov eax, dword ptr [0x11181a84] */
  EAX = (r32((uint32_t)(0x11181a84)));
  /* 1115802c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1115802f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11158031 je 0x11158063 */
  if (C.zf) goto L_11158063;
L_11158033:;
  /* 11158033 call 0x11158700 */
  push32(0x11158038u); f_11158700();
  /* 11158038 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115803a jne 0x1115805d */
  if (!C.zf) goto L_1115805d;
  /* 1115803c push 0x1117e990 */
  push32((uint32_t)(0x1117e990u));
  /* 11158041 push 0 */
  push32((uint32_t)(0x0u));
  /* 11158043 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 11158048 push 0x1117e984 */
  push32((uint32_t)(0x1117e984u));
  /* 1115804d push 2 */
  push32((uint32_t)(0x2u));
  /* 1115804f call 0x11156620 */
  push32(0x11158054u); f_11156620();
  /* 11158054 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11158057 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115805a jne 0x1115805d */
  if (!C.zf) goto L_1115805d;
  /* 1115805c int3  */
  x86_unimpl("int3 @ 0x1115805c");
L_1115805d:;
  /* 1115805d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1115805f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11158061 jne 0x11158033 */
  if (!C.zf) goto L_11158033;
L_11158063:;
  /* 11158063 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158067 jne 0x1115806e */
  if (!C.zf) goto L_1115806e;
  /* 11158069 jmp 0x11158405 */
  goto L_11158405;
L_1115806e:;
  /* 1115806e push 0 */
  push32((uint32_t)(0x0u));
  /* 11158070 push 0 */
  push32((uint32_t)(0x0u));
  /* 11158072 push 0 */
  push32((uint32_t)(0x0u));
  /* 11158074 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11158077 push edx */
  push32((uint32_t)(EDX));
  /* 11158078 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115807a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115807d push eax */
  push32((uint32_t)(EAX));
  /* 1115807e push 3 */
  push32((uint32_t)(0x3u));
  /* 11158080 call dword ptr [0x11181c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x11181c90))), 0x11158086u);
  /* 11158086 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11158089 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115808b jne 0x111580b8 */
  if (!C.zf) goto L_111580b8;
L_1115808d:;
  /* 1115808d push 0x1117ec54 */
  push32((uint32_t)(0x1117ec54u));
  /* 11158092 push 0x1117e924 */
  push32((uint32_t)(0x1117e924u));
  /* 11158097 push 0 */
  push32((uint32_t)(0x0u));
  /* 11158099 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115809b push 0 */
  push32((uint32_t)(0x0u));
  /* 1115809d push 0 */
  push32((uint32_t)(0x0u));
  /* 1115809f call 0x11156620 */
  push32(0x111580a4u); f_11156620();
  /* 111580a4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111580a7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111580aa jne 0x111580ad */
  if (!C.zf) goto L_111580ad;
  /* 111580ac int3  */
  x86_unimpl("int3 @ 0x111580ac");
L_111580ad:;
  /* 111580ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111580af test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111580b1 jne 0x1115808d */
  if (!C.zf) goto L_1115808d;
  /* 111580b3 jmp 0x11158405 */
  goto L_11158405;
L_111580b8:;
  /* 111580b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111580bb push edx */
  push32((uint32_t)(EDX));
  /* 111580bc call 0x11158b60 */
  push32(0x111580c1u); f_11158b60();
  /* 111580c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111580c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111580c6 jne 0x111580e9 */
  if (!C.zf) goto L_111580e9;
  /* 111580c8 push 0x1117ea94 */
  push32((uint32_t)(0x1117ea94u));
  /* 111580cd push 0 */
  push32((uint32_t)(0x0u));
  /* 111580cf push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 111580d4 push 0x1117e984 */
  push32((uint32_t)(0x1117e984u));
  /* 111580d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 111580db call 0x11156620 */
  push32(0x111580e0u); f_11156620();
  /* 111580e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111580e3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111580e6 jne 0x111580e9 */
  if (!C.zf) goto L_111580e9;
  /* 111580e8 int3  */
  x86_unimpl("int3 @ 0x111580e8");
L_111580e9:;
  /* 111580e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111580eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111580ed jne 0x111580b8 */
  if (!C.zf) goto L_111580b8;
  /* 111580ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111580f2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111580f5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_111580f8:;
  /* 111580f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111580fb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111580fe and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11158103 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158106 je 0x1115814b */
  if (C.zf) goto L_1115814b;
  /* 11158108 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115810b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115810f je 0x1115814b */
  if (C.zf) goto L_1115814b;
  /* 11158111 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158114 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11158117 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1115811c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115811f je 0x1115814b */
  if (C.zf) goto L_1115814b;
  /* 11158121 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158124 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158128 je 0x1115814b */
  if (C.zf) goto L_1115814b;
  /* 1115812a push 0x1117ec2c */
  push32((uint32_t)(0x1117ec2cu));
  /* 1115812f push 0 */
  push32((uint32_t)(0x0u));
  /* 11158131 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 11158136 push 0x1117e984 */
  push32((uint32_t)(0x1117e984u));
  /* 1115813b push 2 */
  push32((uint32_t)(0x2u));
  /* 1115813d call 0x11156620 */
  push32(0x11158142u); f_11156620();
  /* 11158142 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11158145 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158148 jne 0x1115814b */
  if (!C.zf) goto L_1115814b;
  /* 1115814a int3  */
  x86_unimpl("int3 @ 0x1115814a");
L_1115814b:;
  /* 1115814b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1115814d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115814f jne 0x111580f8 */
  if (!C.zf) goto L_111580f8;
  /* 11158151 mov eax, dword ptr [0x11181a84] */
  EAX = (r32((uint32_t)(0x11181a84)));
  /* 11158156 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11158159 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115815b jne 0x11158226 */
  if (!C.zf) goto L_11158226;
  /* 11158161 push 4 */
  push32((uint32_t)(0x4u));
  /* 11158163 mov cl, byte ptr [0x11181a90] */
  CL = (r8((uint32_t)(0x11181a90)));
  /* 11158169 push ecx */
  push32((uint32_t)(ECX));
  /* 1115816a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115816d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11158170 push edx */
  push32((uint32_t)(EDX));
  /* 11158171 call 0x11158670 */
  push32(0x11158176u); f_11158670();
  /* 11158176 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11158179 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115817b jne 0x111581c0 */
  if (!C.zf) goto L_111581c0;
L_1115817d:;
  /* 1115817d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158180 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11158183 push eax */
  push32((uint32_t)(EAX));
  /* 11158184 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158187 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1115818a push edx */
  push32((uint32_t)(EDX));
  /* 1115818b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115818e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11158191 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11158197 mov edx, dword ptr [ecx*4 + 0x11181a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11181a94)));
  /* 1115819e push edx */
  push32((uint32_t)(EDX));
  /* 1115819f push 0x1117ec00 */
  push32((uint32_t)(0x1117ec00u));
  /* 111581a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 111581a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 111581a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 111581aa push 1 */
  push32((uint32_t)(0x1u));
  /* 111581ac call 0x11156620 */
  push32(0x111581b1u); f_11156620();
  /* 111581b1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111581b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111581b7 jne 0x111581ba */
  if (!C.zf) goto L_111581ba;
  /* 111581b9 int3  */
  x86_unimpl("int3 @ 0x111581b9");
L_111581ba:;
  /* 111581ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111581bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111581be jne 0x1115817d */
  if (!C.zf) goto L_1115817d;
L_111581c0:;
  /* 111581c0 push 4 */
  push32((uint32_t)(0x4u));
  /* 111581c2 mov cl, byte ptr [0x11181a90] */
  CL = (r8((uint32_t)(0x11181a90)));
  /* 111581c8 push ecx */
  push32((uint32_t)(ECX));
  /* 111581c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111581cc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 111581cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111581d2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 111581d6 push edx */
  push32((uint32_t)(EDX));
  /* 111581d7 call 0x11158670 */
  push32(0x111581dcu); f_11158670();
  /* 111581dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111581df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111581e1 jne 0x11158226 */
  if (!C.zf) goto L_11158226;
L_111581e3:;
  /* 111581e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111581e6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111581e9 push eax */
  push32((uint32_t)(EAX));
  /* 111581ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111581ed mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 111581f0 push edx */
  push32((uint32_t)(EDX));
  /* 111581f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111581f4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 111581f7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 111581fd mov edx, dword ptr [ecx*4 + 0x11181a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11181a94)));
  /* 11158204 push edx */
  push32((uint32_t)(EDX));
  /* 11158205 push 0x1117ebd4 */
  push32((uint32_t)(0x1117ebd4u));
  /* 1115820a push 0 */
  push32((uint32_t)(0x0u));
  /* 1115820c push 0 */
  push32((uint32_t)(0x0u));
  /* 1115820e push 0 */
  push32((uint32_t)(0x0u));
  /* 11158210 push 1 */
  push32((uint32_t)(0x1u));
  /* 11158212 call 0x11156620 */
  push32(0x11158217u); f_11156620();
  /* 11158217 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115821a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115821d jne 0x11158220 */
  if (!C.zf) goto L_11158220;
  /* 1115821f int3  */
  x86_unimpl("int3 @ 0x1115821f");
L_11158220:;
  /* 11158220 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11158222 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11158224 jne 0x111581e3 */
  if (!C.zf) goto L_111581e3;
L_11158226:;
  /* 11158226 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158229 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115822d jne 0x1115829b */
  if (!C.zf) goto L_1115829b;
L_1115822f:;
  /* 1115822f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158232 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158239 jne 0x11158244 */
  if (!C.zf) goto L_11158244;
  /* 1115823b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115823e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158242 je 0x11158265 */
  if (C.zf) goto L_11158265;
L_11158244:;
  /* 11158244 push 0x1117eb94 */
  push32((uint32_t)(0x1117eb94u));
  /* 11158249 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115824b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 11158250 push 0x1117e984 */
  push32((uint32_t)(0x1117e984u));
  /* 11158255 push 2 */
  push32((uint32_t)(0x2u));
  /* 11158257 call 0x11156620 */
  push32(0x1115825cu); f_11156620();
  /* 1115825c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115825f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158262 jne 0x11158265 */
  if (!C.zf) goto L_11158265;
  /* 11158264 int3  */
  x86_unimpl("int3 @ 0x11158264");
L_11158265:;
  /* 11158265 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11158267 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11158269 jne 0x1115822f */
  if (!C.zf) goto L_1115822f;
  /* 1115826b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115826e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11158271 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11158274 push eax */
  push32((uint32_t)(EAX));
  /* 11158275 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11158277 mov cl, byte ptr [0x11181a91] */
  CL = (r8((uint32_t)(0x11181a91)));
  /* 1115827d push ecx */
  push32((uint32_t)(ECX));
  /* 1115827e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158281 push edx */
  push32((uint32_t)(EDX));
  /* 11158282 call 0x1115b2d0 */
  push32(0x11158287u); f_1115b2d0();
  /* 11158287 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115828a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115828d push eax */
  push32((uint32_t)(EAX));
  /* 1115828e call 0x1115b6d0 */
  push32(0x11158293u); f_1115b6d0();
  /* 11158293 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11158296 jmp 0x11158405 */
  goto L_11158405;
L_1115829b:;
  /* 1115829b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115829e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111582a2 jne 0x111582b1 */
  if (!C.zf) goto L_111582b1;
  /* 111582a4 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111582a8 jne 0x111582b1 */
  if (!C.zf) goto L_111582b1;
  /* 111582aa mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_111582b1:;
  /* 111582b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111582b4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111582b7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111582ba je 0x111582dd */
  if (C.zf) goto L_111582dd;
  /* 111582bc push 0x1117eb74 */
  push32((uint32_t)(0x1117eb74u));
  /* 111582c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 111582c3 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 111582c8 push 0x1117e984 */
  push32((uint32_t)(0x1117e984u));
  /* 111582cd push 2 */
  push32((uint32_t)(0x2u));
  /* 111582cf call 0x11156620 */
  push32(0x111582d4u); f_11156620();
  /* 111582d4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111582d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111582da jne 0x111582dd */
  if (!C.zf) goto L_111582dd;
  /* 111582dc int3  */
  x86_unimpl("int3 @ 0x111582dc");
L_111582dd:;
  /* 111582dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111582df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111582e1 jne 0x111582b1 */
  if (!C.zf) goto L_111582b1;
  /* 111582e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111582e6 mov eax, dword ptr [0x11183840] */
  EAX = (r32((uint32_t)(0x11183840)));
  /* 111582eb sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111582ee mov dword ptr [0x11183840], eax */
  w32((uint32_t)(0x11183840), (EAX));
  /* 111582f3 mov ecx, dword ptr [0x11181a84] */
  ECX = (r32((uint32_t)(0x11181a84)));
  /* 111582f9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 111582fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111582fe jne 0x111583dc */
  if (!C.zf) goto L_111583dc;
  /* 11158304 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158307 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115830a je 0x1115831c */
  if (C.zf) goto L_1115831c;
  /* 1115830c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115830f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11158311 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158314 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11158317 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1115831a jmp 0x1115835a */
  goto L_1115835a;
L_1115831c:;
  /* 1115831c mov ecx, dword ptr [0x11183834] */
  ECX = (r32((uint32_t)(0x11183834)));
  /* 11158322 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158325 je 0x11158348 */
  if (C.zf) goto L_11158348;
  /* 11158327 push 0x1117eb5c */
  push32((uint32_t)(0x1117eb5cu));
  /* 1115832c push 0 */
  push32((uint32_t)(0x0u));
  /* 1115832e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 11158333 push 0x1117e984 */
  push32((uint32_t)(0x1117e984u));
  /* 11158338 push 2 */
  push32((uint32_t)(0x2u));
  /* 1115833a call 0x11156620 */
  push32(0x1115833fu); f_11156620();
  /* 1115833f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11158342 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158345 jne 0x11158348 */
  if (!C.zf) goto L_11158348;
  /* 11158347 int3  */
  x86_unimpl("int3 @ 0x11158347");
L_11158348:;
  /* 11158348 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1115834a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115834c jne 0x1115831c */
  if (!C.zf) goto L_1115831c;
  /* 1115834e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158351 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11158354 mov dword ptr [0x11183834], ecx */
  w32((uint32_t)(0x11183834), (ECX));
L_1115835a:;
  /* 1115835a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115835d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158361 je 0x11158372 */
  if (C.zf) goto L_11158372;
  /* 11158363 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158366 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11158369 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115836c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1115836e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11158370 jmp 0x111583af */
  goto L_111583af;
L_11158372:;
  /* 11158372 mov ecx, dword ptr [0x1118383c] */
  ECX = (r32((uint32_t)(0x1118383c)));
  /* 11158378 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115837b je 0x1115839e */
  if (C.zf) goto L_1115839e;
  /* 1115837d push 0x1117eb44 */
  push32((uint32_t)(0x1117eb44u));
  /* 11158382 push 0 */
  push32((uint32_t)(0x0u));
  /* 11158384 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 11158389 push 0x1117e984 */
  push32((uint32_t)(0x1117e984u));
  /* 1115838e push 2 */
  push32((uint32_t)(0x2u));
  /* 11158390 call 0x11156620 */
  push32(0x11158395u); f_11156620();
  /* 11158395 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11158398 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115839b jne 0x1115839e */
  if (!C.zf) goto L_1115839e;
  /* 1115839d int3  */
  x86_unimpl("int3 @ 0x1115839d");
L_1115839e:;
  /* 1115839e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111583a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111583a2 jne 0x11158372 */
  if (!C.zf) goto L_11158372;
  /* 111583a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111583a7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111583a9 mov dword ptr [0x1118383c], ecx */
  w32((uint32_t)(0x1118383c), (ECX));
L_111583af:;
  /* 111583af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111583b2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 111583b5 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111583b8 push eax */
  push32((uint32_t)(EAX));
  /* 111583b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111583bb mov cl, byte ptr [0x11181a91] */
  CL = (r8((uint32_t)(0x11181a91)));
  /* 111583c1 push ecx */
  push32((uint32_t)(ECX));
  /* 111583c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111583c5 push edx */
  push32((uint32_t)(EDX));
  /* 111583c6 call 0x1115b2d0 */
  push32(0x111583cbu); f_1115b2d0();
  /* 111583cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111583ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111583d1 push eax */
  push32((uint32_t)(EAX));
  /* 111583d2 call 0x1115b6d0 */
  push32(0x111583d7u); f_1115b6d0();
  /* 111583d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111583da jmp 0x11158405 */
  goto L_11158405;
L_111583dc:;
  /* 111583dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111583df mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 111583e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111583e9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 111583ec push eax */
  push32((uint32_t)(EAX));
  /* 111583ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111583ef mov cl, byte ptr [0x11181a91] */
  CL = (r8((uint32_t)(0x11181a91)));
  /* 111583f5 push ecx */
  push32((uint32_t)(ECX));
  /* 111583f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111583f9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111583fc push edx */
  push32((uint32_t)(EDX));
  /* 111583fd call 0x1115b2d0 */
  push32(0x11158402u); f_1115b2d0();
  /* 11158402 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11158405:;
  /* 11158405 pop edi */
  EDI = (pop32());
  /* 11158406 pop esi */
  ESI = (pop32());
  /* 11158407 pop ebx */
  EBX = (pop32());
  /* 11158408 mov esp, ebp */
  ESP = (EBP);
  /* 1115840a pop ebp */
  EBP = (pop32());
  /* 1115840b ret  */
  ESPCHK(0x11158020u, _esp0);
  ESP += 4; return;
}

/* FUN_10008410 @ 0x11158410 (19 bytes, 9 insns) */
void f_11158410(void) {
  FTRACE(0x11158410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11158410 push ebp */
  push32((uint32_t)(EBP));
  /* 11158411 mov ebp, esp */
  EBP = (ESP);
  /* 11158413 push 1 */
  push32((uint32_t)(0x1u));
  /* 11158415 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11158418 push eax */
  push32((uint32_t)(EAX));
  /* 11158419 call 0x11158430 */
  push32(0x1115841eu); f_11158430();
  /* 1115841e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11158421 pop ebp */
  EBP = (pop32());
  /* 11158422 ret  */
  ESPCHK(0x11158410u, _esp0);
  ESP += 4; return;
}

/* FUN_10008430 @ 0x11158430 (342 bytes, 119 insns) */
void f_11158430(void) {
  FTRACE(0x11158430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11158430 push ebp */
  push32((uint32_t)(EBP));
  /* 11158431 mov ebp, esp */
  EBP = (ESP);
  /* 11158433 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11158436 push ebx */
  push32((uint32_t)(EBX));
  /* 11158437 push esi */
  push32((uint32_t)(ESI));
  /* 11158438 push edi */
  push32((uint32_t)(EDI));
  /* 11158439 mov eax, dword ptr [0x11181a84] */
  EAX = (r32((uint32_t)(0x11181a84)));
  /* 1115843e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11158441 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11158443 je 0x11158475 */
  if (C.zf) goto L_11158475;
L_11158445:;
  /* 11158445 call 0x11158700 */
  push32(0x1115844au); f_11158700();
  /* 1115844a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115844c jne 0x1115846f */
  if (!C.zf) goto L_1115846f;
  /* 1115844e push 0x1117e990 */
  push32((uint32_t)(0x1117e990u));
  /* 11158453 push 0 */
  push32((uint32_t)(0x0u));
  /* 11158455 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 1115845a push 0x1117e984 */
  push32((uint32_t)(0x1117e984u));
  /* 1115845f push 2 */
  push32((uint32_t)(0x2u));
  /* 11158461 call 0x11156620 */
  push32(0x11158466u); f_11156620();
  /* 11158466 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11158469 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115846c jne 0x1115846f */
  if (!C.zf) goto L_1115846f;
  /* 1115846e int3  */
  x86_unimpl("int3 @ 0x1115846e");
L_1115846f:;
  /* 1115846f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11158471 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11158473 jne 0x11158445 */
  if (!C.zf) goto L_11158445;
L_11158475:;
  /* 11158475 push 9 */
  push32((uint32_t)(0x9u));
  /* 11158477 call 0x1115af60 */
  push32(0x1115847cu); f_1115af60();
  /* 1115847c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1115847f:;
  /* 1115847f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11158482 push edx */
  push32((uint32_t)(EDX));
  /* 11158483 call 0x11158b60 */
  push32(0x11158488u); f_11158b60();
  /* 11158488 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115848b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115848d jne 0x111584b0 */
  if (!C.zf) goto L_111584b0;
  /* 1115848f push 0x1117ea94 */
  push32((uint32_t)(0x1117ea94u));
  /* 11158494 push 0 */
  push32((uint32_t)(0x0u));
  /* 11158496 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 1115849b push 0x1117e984 */
  push32((uint32_t)(0x1117e984u));
  /* 111584a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 111584a2 call 0x11156620 */
  push32(0x111584a7u); f_11156620();
  /* 111584a7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111584aa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111584ad jne 0x111584b0 */
  if (!C.zf) goto L_111584b0;
  /* 111584af int3  */
  x86_unimpl("int3 @ 0x111584af");
L_111584b0:;
  /* 111584b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111584b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111584b4 jne 0x1115847f */
  if (!C.zf) goto L_1115847f;
  /* 111584b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111584b9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111584bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_111584bf:;
  /* 111584bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111584c2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111584c5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111584ca cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111584cd je 0x11158512 */
  if (C.zf) goto L_11158512;
  /* 111584cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111584d2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111584d6 je 0x11158512 */
  if (C.zf) goto L_11158512;
  /* 111584d8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111584db mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111584de and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111584e3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111584e6 je 0x11158512 */
  if (C.zf) goto L_11158512;
  /* 111584e8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111584eb cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111584ef je 0x11158512 */
  if (C.zf) goto L_11158512;
  /* 111584f1 push 0x1117ec2c */
  push32((uint32_t)(0x1117ec2cu));
  /* 111584f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 111584f8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 111584fd push 0x1117e984 */
  push32((uint32_t)(0x1117e984u));
  /* 11158502 push 2 */
  push32((uint32_t)(0x2u));
  /* 11158504 call 0x11156620 */
  push32(0x11158509u); f_11156620();
  /* 11158509 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115850c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115850f jne 0x11158512 */
  if (!C.zf) goto L_11158512;
  /* 11158511 int3  */
  x86_unimpl("int3 @ 0x11158511");
L_11158512:;
  /* 11158512 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11158514 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11158516 jne 0x111584bf */
  if (!C.zf) goto L_111584bf;
  /* 11158518 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115851b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115851f jne 0x1115852e */
  if (!C.zf) goto L_1115852e;
  /* 11158521 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158525 jne 0x1115852e */
  if (!C.zf) goto L_1115852e;
  /* 11158527 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_1115852e:;
  /* 1115852e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11158531 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158535 je 0x11158569 */
  if (C.zf) goto L_11158569;
L_11158537:;
  /* 11158537 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115853a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1115853d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158540 je 0x11158563 */
  if (C.zf) goto L_11158563;
  /* 11158542 push 0x1117eb74 */
  push32((uint32_t)(0x1117eb74u));
  /* 11158547 push 0 */
  push32((uint32_t)(0x0u));
  /* 11158549 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 1115854e push 0x1117e984 */
  push32((uint32_t)(0x1117e984u));
  /* 11158553 push 2 */
  push32((uint32_t)(0x2u));
  /* 11158555 call 0x11156620 */
  push32(0x1115855au); f_11156620();
  /* 1115855a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115855d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158560 jne 0x11158563 */
  if (!C.zf) goto L_11158563;
  /* 11158562 int3  */
  x86_unimpl("int3 @ 0x11158562");
L_11158563:;
  /* 11158563 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11158565 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11158567 jne 0x11158537 */
  if (!C.zf) goto L_11158537;
L_11158569:;
  /* 11158569 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115856c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1115856f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11158572 push 9 */
  push32((uint32_t)(0x9u));
  /* 11158574 call 0x1115b000 */
  push32(0x11158579u); f_1115b000();
  /* 11158579 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115857c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115857f pop edi */
  EDI = (pop32());
  /* 11158580 pop esi */
  ESI = (pop32());
  /* 11158581 pop ebx */
  EBX = (pop32());
  /* 11158582 mov esp, ebp */
  ESP = (EBP);
  /* 11158584 pop ebp */
  EBP = (pop32());
  /* 11158585 ret  */
  ESPCHK(0x11158430u, _esp0);
  ESP += 4; return;
}

/* FUN_10008590 @ 0x11158590 (28 bytes, 11 insns) */
void f_11158590(void) {
  FTRACE(0x11158590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11158590 push ebp */
  push32((uint32_t)(EBP));
  /* 11158591 mov ebp, esp */
  EBP = (ESP);
  /* 11158593 push ecx */
  push32((uint32_t)(ECX));
  /* 11158594 mov eax, dword ptr [0x11181a8c] */
  EAX = (r32((uint32_t)(0x11181a8c)));
  /* 11158599 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1115859c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115859f mov dword ptr [0x11181a8c], ecx */
  w32((uint32_t)(0x11181a8c), (ECX));
  /* 111585a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111585a8 mov esp, ebp */
  ESP = (EBP);
  /* 111585aa pop ebp */
  EBP = (pop32());
  /* 111585ab ret  */
  ESPCHK(0x11158590u, _esp0);
  ESP += 4; return;
}

/* FUN_100085b0 @ 0x111585b0 (157 bytes, 59 insns) */
void f_111585b0(void) {
  FTRACE(0x111585b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111585b0 push ebp */
  push32((uint32_t)(EBP));
  /* 111585b1 mov ebp, esp */
  EBP = (ESP);
  /* 111585b3 push ecx */
  push32((uint32_t)(ECX));
  /* 111585b4 push ebx */
  push32((uint32_t)(EBX));
  /* 111585b5 push esi */
  push32((uint32_t)(ESI));
  /* 111585b6 push edi */
  push32((uint32_t)(EDI));
  /* 111585b7 push 9 */
  push32((uint32_t)(0x9u));
  /* 111585b9 call 0x1115af60 */
  push32(0x111585beu); f_1115af60();
  /* 111585be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111585c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111585c4 push eax */
  push32((uint32_t)(EAX));
  /* 111585c5 call 0x11158b60 */
  push32(0x111585cau); f_11158b60();
  /* 111585ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111585cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111585cf je 0x1115863c */
  if (C.zf) goto L_1115863c;
  /* 111585d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111585d4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111585d7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_111585da:;
  /* 111585da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111585dd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111585e0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111585e5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111585e8 je 0x1115862d */
  if (C.zf) goto L_1115862d;
  /* 111585ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111585ed cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111585f1 je 0x1115862d */
  if (C.zf) goto L_1115862d;
  /* 111585f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111585f6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111585f9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111585fe cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158601 je 0x1115862d */
  if (C.zf) goto L_1115862d;
  /* 11158603 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158606 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115860a je 0x1115862d */
  if (C.zf) goto L_1115862d;
  /* 1115860c push 0x1117ec2c */
  push32((uint32_t)(0x1117ec2cu));
  /* 11158611 push 0 */
  push32((uint32_t)(0x0u));
  /* 11158613 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 11158618 push 0x1117e984 */
  push32((uint32_t)(0x1117e984u));
  /* 1115861d push 2 */
  push32((uint32_t)(0x2u));
  /* 1115861f call 0x11156620 */
  push32(0x11158624u); f_11156620();
  /* 11158624 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11158627 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115862a jne 0x1115862d */
  if (!C.zf) goto L_1115862d;
  /* 1115862c int3  */
  x86_unimpl("int3 @ 0x1115862c");
L_1115862d:;
  /* 1115862d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1115862f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11158631 jne 0x111585da */
  if (!C.zf) goto L_111585da;
  /* 11158633 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158636 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11158639 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_1115863c:;
  /* 1115863c push 9 */
  push32((uint32_t)(0x9u));
  /* 1115863e call 0x1115b000 */
  push32(0x11158643u); f_1115b000();
  /* 11158643 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11158646 pop edi */
  EDI = (pop32());
  /* 11158647 pop esi */
  ESI = (pop32());
  /* 11158648 pop ebx */
  EBX = (pop32());
  /* 11158649 mov esp, ebp */
  ESP = (EBP);
  /* 1115864b pop ebp */
  EBP = (pop32());
  /* 1115864c ret  */
  ESPCHK(0x111585b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008650 @ 0x11158650 (28 bytes, 11 insns) */
void f_11158650(void) {
  FTRACE(0x11158650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11158650 push ebp */
  push32((uint32_t)(EBP));
  /* 11158651 mov ebp, esp */
  EBP = (ESP);
  /* 11158653 push ecx */
  push32((uint32_t)(ECX));
  /* 11158654 mov eax, dword ptr [0x11181c90] */
  EAX = (r32((uint32_t)(0x11181c90)));
  /* 11158659 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1115865c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115865f mov dword ptr [0x11181c90], ecx */
  w32((uint32_t)(0x11181c90), (ECX));
  /* 11158665 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158668 mov esp, ebp */
  ESP = (EBP);
  /* 1115866a pop ebp */
  EBP = (pop32());
  /* 1115866b ret  */
  ESPCHK(0x11158650u, _esp0);
  ESP += 4; return;
}

/* FUN_10008670 @ 0x11158670 (136 bytes, 55 insns) */
void f_11158670(void) {
  FTRACE(0x11158670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11158670 push ebp */
  push32((uint32_t)(EBP));
  /* 11158671 mov ebp, esp */
  EBP = (ESP);
  /* 11158673 push ecx */
  push32((uint32_t)(ECX));
  /* 11158674 push ebx */
  push32((uint32_t)(EBX));
  /* 11158675 push esi */
  push32((uint32_t)(ESI));
  /* 11158676 push edi */
  push32((uint32_t)(EDI));
  /* 11158677 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_1115867e:;
  /* 1115867e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11158681 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11158684 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11158687 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1115868a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115868c je 0x111586ee */
  if (C.zf) goto L_111586ee;
  /* 1115868e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11158691 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11158693 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11158695 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11158698 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1115869e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111586a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111586a4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 111586a7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111586a9 je 0x111586ec */
  if (C.zf) goto L_111586ec;
L_111586ab:;
  /* 111586ab mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111586ae and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111586b3 push eax */
  push32((uint32_t)(EAX));
  /* 111586b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111586b7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111586b9 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 111586bc push edx */
  push32((uint32_t)(EDX));
  /* 111586bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111586c0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111586c3 push eax */
  push32((uint32_t)(EAX));
  /* 111586c4 push 0x1117ec70 */
  push32((uint32_t)(0x1117ec70u));
  /* 111586c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 111586cb push 0 */
  push32((uint32_t)(0x0u));
  /* 111586cd push 0 */
  push32((uint32_t)(0x0u));
  /* 111586cf push 0 */
  push32((uint32_t)(0x0u));
  /* 111586d1 call 0x11156620 */
  push32(0x111586d6u); f_11156620();
  /* 111586d6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111586d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111586dc jne 0x111586df */
  if (!C.zf) goto L_111586df;
  /* 111586de int3  */
  x86_unimpl("int3 @ 0x111586de");
L_111586df:;
  /* 111586df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111586e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111586e3 jne 0x111586ab */
  if (!C.zf) goto L_111586ab;
  /* 111586e5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_111586ec:;
  /* 111586ec jmp 0x1115867e */
  goto L_1115867e;
L_111586ee:;
  /* 111586ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111586f1 pop edi */
  EDI = (pop32());
  /* 111586f2 pop esi */
  ESI = (pop32());
  /* 111586f3 pop ebx */
  EBX = (pop32());
  /* 111586f4 mov esp, ebp */
  ESP = (EBP);
  /* 111586f6 pop ebp */
  EBP = (pop32());
  /* 111586f7 ret  */
  ESPCHK(0x11158670u, _esp0);
  ESP += 4; return;
}

/* FUN_10008700 @ 0x11158700 (863 bytes, 299 insns) [1 switch table(s)] */
void f_11158700(void) {
  FTRACE(0x11158700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11158700 push ebp */
  push32((uint32_t)(EBP));
  /* 11158701 mov ebp, esp */
  EBP = (ESP);
  /* 11158703 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11158706 push ebx */
  push32((uint32_t)(EBX));
  /* 11158707 push esi */
  push32((uint32_t)(ESI));
  /* 11158708 push edi */
  push32((uint32_t)(EDI));
  /* 11158709 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11158710 mov eax, dword ptr [0x11181a84] */
  EAX = (r32((uint32_t)(0x11181a84)));
  /* 11158715 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11158718 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115871a jne 0x11158726 */
  if (!C.zf) goto L_11158726;
  /* 1115871c mov eax, 1 */
  EAX = (0x1u);
  /* 11158721 jmp 0x11158a58 */
  goto L_11158a58;
L_11158726:;
  /* 11158726 push 9 */
  push32((uint32_t)(0x9u));
  /* 11158728 call 0x1115af60 */
  push32(0x1115872du); f_1115af60();
  /* 1115872d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11158730 call 0x1115b740 */
  push32(0x11158735u); f_1115b740();
  /* 11158735 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11158738 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115873c je 0x11158849 */
  if (C.zf) goto L_11158849;
  /* 11158742 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158746 je 0x11158849 */
  if (C.zf) goto L_11158849;
  /* 1115874c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115874f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11158752 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11158755 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11158758 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1115875b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115875f ja 0x11158812 */
  if ((!C.cf&&!C.zf)) goto L_11158812;
  /* 11158765 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11158768 jmp dword ptr [eax*4 + 0x11158a5f] */
  switch (EAX) {
    case 0: goto L_111587ea;
    case 1: goto L_111587c2;
    case 2: goto L_1115879a;
    case 3: goto L_1115876f;
    default: x86_unimpl("switch@0x11158768 out of table"); return;
  }
L_1115876f:;
  /* 1115876f push 0x1117edc4 */
  push32((uint32_t)(0x1117edc4u));
  /* 11158774 push 0x1117e924 */
  push32((uint32_t)(0x1117e924u));
  /* 11158779 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115877b push 0 */
  push32((uint32_t)(0x0u));
  /* 1115877d push 0 */
  push32((uint32_t)(0x0u));
  /* 1115877f push 0 */
  push32((uint32_t)(0x0u));
  /* 11158781 call 0x11156620 */
  push32(0x11158786u); f_11156620();
  /* 11158786 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11158789 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115878c jne 0x1115878f */
  if (!C.zf) goto L_1115878f;
  /* 1115878e int3  */
  x86_unimpl("int3 @ 0x1115878e");
L_1115878f:;
  /* 1115878f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11158791 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11158793 jne 0x1115876f */
  if (!C.zf) goto L_1115876f;
  /* 11158795 jmp 0x11158838 */
  goto L_11158838;
L_1115879a:;
  /* 1115879a push 0x1117eda0 */
  push32((uint32_t)(0x1117eda0u));
  /* 1115879f push 0x1117e924 */
  push32((uint32_t)(0x1117e924u));
  /* 111587a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 111587a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 111587a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 111587aa push 0 */
  push32((uint32_t)(0x0u));
  /* 111587ac call 0x11156620 */
  push32(0x111587b1u); f_11156620();
  /* 111587b1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111587b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111587b7 jne 0x111587ba */
  if (!C.zf) goto L_111587ba;
  /* 111587b9 int3  */
  x86_unimpl("int3 @ 0x111587b9");
L_111587ba:;
  /* 111587ba xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111587bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111587be jne 0x1115879a */
  if (!C.zf) goto L_1115879a;
  /* 111587c0 jmp 0x11158838 */
  goto L_11158838;
L_111587c2:;
  /* 111587c2 push 0x1117ed7c */
  push32((uint32_t)(0x1117ed7cu));
  /* 111587c7 push 0x1117e924 */
  push32((uint32_t)(0x1117e924u));
  /* 111587cc push 0 */
  push32((uint32_t)(0x0u));
  /* 111587ce push 0 */
  push32((uint32_t)(0x0u));
  /* 111587d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 111587d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 111587d4 call 0x11156620 */
  push32(0x111587d9u); f_11156620();
  /* 111587d9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111587dc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111587df jne 0x111587e2 */
  if (!C.zf) goto L_111587e2;
  /* 111587e1 int3  */
  x86_unimpl("int3 @ 0x111587e1");
L_111587e2:;
  /* 111587e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111587e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111587e6 jne 0x111587c2 */
  if (!C.zf) goto L_111587c2;
  /* 111587e8 jmp 0x11158838 */
  goto L_11158838;
L_111587ea:;
  /* 111587ea push 0x1117ed58 */
  push32((uint32_t)(0x1117ed58u));
  /* 111587ef push 0x1117e924 */
  push32((uint32_t)(0x1117e924u));
  /* 111587f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 111587f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 111587f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 111587fa push 0 */
  push32((uint32_t)(0x0u));
  /* 111587fc call 0x11156620 */
  push32(0x11158801u); f_11156620();
  /* 11158801 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11158804 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158807 jne 0x1115880a */
  if (!C.zf) goto L_1115880a;
  /* 11158809 int3  */
  x86_unimpl("int3 @ 0x11158809");
L_1115880a:;
  /* 1115880a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1115880c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115880e jne 0x111587ea */
  if (!C.zf) goto L_111587ea;
  /* 11158810 jmp 0x11158838 */
  goto L_11158838;
L_11158812:;
  /* 11158812 push 0x1117ed2c */
  push32((uint32_t)(0x1117ed2cu));
  /* 11158817 push 0x1117e924 */
  push32((uint32_t)(0x1117e924u));
  /* 1115881c push 0 */
  push32((uint32_t)(0x0u));
  /* 1115881e push 0 */
  push32((uint32_t)(0x0u));
  /* 11158820 push 0 */
  push32((uint32_t)(0x0u));
  /* 11158822 push 0 */
  push32((uint32_t)(0x0u));
  /* 11158824 call 0x11156620 */
  push32(0x11158829u); f_11156620();
  /* 11158829 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115882c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115882f jne 0x11158832 */
  if (!C.zf) goto L_11158832;
  /* 11158831 int3  */
  x86_unimpl("int3 @ 0x11158831");
L_11158832:;
  /* 11158832 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11158834 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11158836 jne 0x11158812 */
  if (!C.zf) goto L_11158812;
L_11158838:;
  /* 11158838 push 9 */
  push32((uint32_t)(0x9u));
  /* 1115883a call 0x1115b000 */
  push32(0x1115883fu); f_1115b000();
  /* 1115883f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11158842 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11158844 jmp 0x11158a58 */
  goto L_11158a58;
L_11158849:;
  /* 11158849 mov eax, dword ptr [0x1118383c] */
  EAX = (r32((uint32_t)(0x1118383c)));
  /* 1115884e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11158851 jmp 0x1115885b */
  goto L_1115885b;
L_11158853:;
  /* 11158853 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11158856 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11158858 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1115885b:;
  /* 1115885b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115885f je 0x11158a4b */
  if (C.zf) goto L_11158a4b;
  /* 11158865 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1115886c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115886f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11158872 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11158878 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115887b je 0x111588a0 */
  if (C.zf) goto L_111588a0;
  /* 1115887d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11158880 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158884 je 0x111588a0 */
  if (C.zf) goto L_111588a0;
  /* 11158886 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11158889 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1115888c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11158892 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158895 je 0x111588a0 */
  if (C.zf) goto L_111588a0;
  /* 11158897 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115889a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115889e jne 0x111588b8 */
  if (!C.zf) goto L_111588b8;
L_111588a0:;
  /* 111588a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111588a3 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 111588a6 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 111588ac mov edx, dword ptr [ecx*4 + 0x11181a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11181a94)));
  /* 111588b3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 111588b6 jmp 0x111588bf */
  goto L_111588bf;
L_111588b8:;
  /* 111588b8 mov dword ptr [ebp - 0x14], 0x1117ed24 */
  w32((uint32_t)(EBP + -0x14), (0x1117ed24u));
L_111588bf:;
  /* 111588bf push 4 */
  push32((uint32_t)(0x4u));
  /* 111588c1 mov al, byte ptr [0x11181a90] */
  AL = (r8((uint32_t)(0x11181a90)));
  /* 111588c6 push eax */
  push32((uint32_t)(EAX));
  /* 111588c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111588ca add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111588cd push ecx */
  push32((uint32_t)(ECX));
  /* 111588ce call 0x11158670 */
  push32(0x111588d3u); f_11158670();
  /* 111588d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111588d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111588d8 jne 0x11158914 */
  if (!C.zf) goto L_11158914;
L_111588da:;
  /* 111588da mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111588dd add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111588e0 push edx */
  push32((uint32_t)(EDX));
  /* 111588e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111588e4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 111588e7 push ecx */
  push32((uint32_t)(ECX));
  /* 111588e8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111588eb push edx */
  push32((uint32_t)(EDX));
  /* 111588ec push 0x1117ec00 */
  push32((uint32_t)(0x1117ec00u));
  /* 111588f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 111588f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 111588f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 111588f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 111588f9 call 0x11156620 */
  push32(0x111588feu); f_11156620();
  /* 111588fe add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11158901 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158904 jne 0x11158907 */
  if (!C.zf) goto L_11158907;
  /* 11158906 int3  */
  x86_unimpl("int3 @ 0x11158906");
L_11158907:;
  /* 11158907 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11158909 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115890b jne 0x111588da */
  if (!C.zf) goto L_111588da;
  /* 1115890d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11158914:;
  /* 11158914 push 4 */
  push32((uint32_t)(0x4u));
  /* 11158916 mov cl, byte ptr [0x11181a90] */
  CL = (r8((uint32_t)(0x11181a90)));
  /* 1115891c push ecx */
  push32((uint32_t)(ECX));
  /* 1115891d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11158920 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11158923 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11158926 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 1115892a push edx */
  push32((uint32_t)(EDX));
  /* 1115892b call 0x11158670 */
  push32(0x11158930u); f_11158670();
  /* 11158930 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11158933 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11158935 jne 0x11158971 */
  if (!C.zf) goto L_11158971;
L_11158937:;
  /* 11158937 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115893a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115893d push eax */
  push32((uint32_t)(EAX));
  /* 1115893e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11158941 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11158944 push edx */
  push32((uint32_t)(EDX));
  /* 11158945 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11158948 push eax */
  push32((uint32_t)(EAX));
  /* 11158949 push 0x1117ebd4 */
  push32((uint32_t)(0x1117ebd4u));
  /* 1115894e push 0 */
  push32((uint32_t)(0x0u));
  /* 11158950 push 0 */
  push32((uint32_t)(0x0u));
  /* 11158952 push 0 */
  push32((uint32_t)(0x0u));
  /* 11158954 push 0 */
  push32((uint32_t)(0x0u));
  /* 11158956 call 0x11156620 */
  push32(0x1115895bu); f_11156620();
  /* 1115895b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115895e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158961 jne 0x11158964 */
  if (!C.zf) goto L_11158964;
  /* 11158963 int3  */
  x86_unimpl("int3 @ 0x11158963");
L_11158964:;
  /* 11158964 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11158966 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11158968 jne 0x11158937 */
  if (!C.zf) goto L_11158937;
  /* 1115896a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11158971:;
  /* 11158971 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11158974 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158978 jne 0x111589ca */
  if (!C.zf) goto L_111589ca;
  /* 1115897a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115897d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11158980 push ecx */
  push32((uint32_t)(ECX));
  /* 11158981 mov dl, byte ptr [0x11181a91] */
  DL = (r8((uint32_t)(0x11181a91)));
  /* 11158987 push edx */
  push32((uint32_t)(EDX));
  /* 11158988 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115898b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115898e push eax */
  push32((uint32_t)(EAX));
  /* 1115898f call 0x11158670 */
  push32(0x11158994u); f_11158670();
  /* 11158994 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11158997 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11158999 jne 0x111589ca */
  if (!C.zf) goto L_111589ca;
L_1115899b:;
  /* 1115899b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115899e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111589a1 push ecx */
  push32((uint32_t)(ECX));
  /* 111589a2 push 0x1117ecf8 */
  push32((uint32_t)(0x1117ecf8u));
  /* 111589a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 111589a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 111589ab push 0 */
  push32((uint32_t)(0x0u));
  /* 111589ad push 0 */
  push32((uint32_t)(0x0u));
  /* 111589af call 0x11156620 */
  push32(0x111589b4u); f_11156620();
  /* 111589b4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111589b7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111589ba jne 0x111589bd */
  if (!C.zf) goto L_111589bd;
  /* 111589bc int3  */
  x86_unimpl("int3 @ 0x111589bc");
L_111589bd:;
  /* 111589bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111589bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111589c1 jne 0x1115899b */
  if (!C.zf) goto L_1115899b;
  /* 111589c3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_111589ca:;
  /* 111589ca cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111589ce jne 0x11158a46 */
  if (!C.zf) goto L_11158a46;
  /* 111589d0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111589d3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111589d7 je 0x11158a0c */
  if (C.zf) goto L_11158a0c;
L_111589d9:;
  /* 111589d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111589dc mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 111589df push edx */
  push32((uint32_t)(EDX));
  /* 111589e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111589e3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 111589e6 push ecx */
  push32((uint32_t)(ECX));
  /* 111589e7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111589ea push edx */
  push32((uint32_t)(EDX));
  /* 111589eb push 0x1117ecd8 */
  push32((uint32_t)(0x1117ecd8u));
  /* 111589f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 111589f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 111589f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 111589f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 111589f8 call 0x11156620 */
  push32(0x111589fdu); f_11156620();
  /* 111589fd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11158a00 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158a03 jne 0x11158a06 */
  if (!C.zf) goto L_11158a06;
  /* 11158a05 int3  */
  x86_unimpl("int3 @ 0x11158a05");
L_11158a06:;
  /* 11158a06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11158a08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11158a0a jne 0x111589d9 */
  if (!C.zf) goto L_111589d9;
L_11158a0c:;
  /* 11158a0c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11158a0f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11158a12 push edx */
  push32((uint32_t)(EDX));
  /* 11158a13 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11158a16 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11158a19 push eax */
  push32((uint32_t)(EAX));
  /* 11158a1a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11158a1d push ecx */
  push32((uint32_t)(ECX));
  /* 11158a1e push 0x1117ecac */
  push32((uint32_t)(0x1117ecacu));
  /* 11158a23 push 0 */
  push32((uint32_t)(0x0u));
  /* 11158a25 push 0 */
  push32((uint32_t)(0x0u));
  /* 11158a27 push 0 */
  push32((uint32_t)(0x0u));
  /* 11158a29 push 0 */
  push32((uint32_t)(0x0u));
  /* 11158a2b call 0x11156620 */
  push32(0x11158a30u); f_11156620();
  /* 11158a30 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11158a33 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158a36 jne 0x11158a39 */
  if (!C.zf) goto L_11158a39;
  /* 11158a38 int3  */
  x86_unimpl("int3 @ 0x11158a38");
L_11158a39:;
  /* 11158a39 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11158a3b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11158a3d jne 0x11158a0c */
  if (!C.zf) goto L_11158a0c;
  /* 11158a3f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11158a46:;
  /* 11158a46 jmp 0x11158853 */
  goto L_11158853;
L_11158a4b:;
  /* 11158a4b push 9 */
  push32((uint32_t)(0x9u));
  /* 11158a4d call 0x1115b000 */
  push32(0x11158a52u); f_1115b000();
  /* 11158a52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11158a55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11158a58:;
  /* 11158a58 pop edi */
  EDI = (pop32());
  /* 11158a59 pop esi */
  ESI = (pop32());
  /* 11158a5a pop ebx */
  EBX = (pop32());
  /* 11158a5b mov esp, ebp */
  ESP = (EBP);
  /* 11158a5d pop ebp */
  EBP = (pop32());
  /* 11158a5e ret  */
  ESPCHK(0x11158700u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a70 @ 0x11158a70 (34 bytes, 13 insns) */
void f_11158a70(void) {
  FTRACE(0x11158a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11158a70 push ebp */
  push32((uint32_t)(EBP));
  /* 11158a71 mov ebp, esp */
  EBP = (ESP);
  /* 11158a73 push ecx */
  push32((uint32_t)(ECX));
  /* 11158a74 mov eax, dword ptr [0x11181a84] */
  EAX = (r32((uint32_t)(0x11181a84)));
  /* 11158a79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11158a7c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158a80 je 0x11158a8b */
  if (C.zf) goto L_11158a8b;
  /* 11158a82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11158a85 mov dword ptr [0x11181a84], ecx */
  w32((uint32_t)(0x11181a84), (ECX));
L_11158a8b:;
  /* 11158a8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158a8e mov esp, ebp */
  ESP = (EBP);
  /* 11158a90 pop ebp */
  EBP = (pop32());
  /* 11158a91 ret  */
  ESPCHK(0x11158a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10008aa0 @ 0x11158aa0 (103 bytes, 38 insns) */
void f_11158aa0(void) {
  FTRACE(0x11158aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11158aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11158aa1 mov ebp, esp */
  EBP = (ESP);
  /* 11158aa3 push ecx */
  push32((uint32_t)(ECX));
  /* 11158aa4 mov eax, dword ptr [0x11181a84] */
  EAX = (r32((uint32_t)(0x11181a84)));
  /* 11158aa9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11158aac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11158aae jne 0x11158ab2 */
  if (!C.zf) goto L_11158ab2;
  /* 11158ab0 jmp 0x11158b03 */
  goto L_11158b03;
L_11158ab2:;
  /* 11158ab2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11158ab4 call 0x1115af60 */
  push32(0x11158ab9u); f_1115af60();
  /* 11158ab9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11158abc mov ecx, dword ptr [0x1118383c] */
  ECX = (r32((uint32_t)(0x1118383c)));
  /* 11158ac2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11158ac5 jmp 0x11158acf */
  goto L_11158acf;
L_11158ac7:;
  /* 11158ac7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158aca mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11158acc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11158acf:;
  /* 11158acf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158ad3 je 0x11158af9 */
  if (C.zf) goto L_11158af9;
  /* 11158ad5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158ad8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11158adb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11158ae1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158ae4 jne 0x11158af7 */
  if (!C.zf) goto L_11158af7;
  /* 11158ae6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11158ae9 push eax */
  push32((uint32_t)(EAX));
  /* 11158aea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158aed add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11158af0 push ecx */
  push32((uint32_t)(ECX));
  /* 11158af1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x11158af4u);
  /* 11158af4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11158af7:;
  /* 11158af7 jmp 0x11158ac7 */
  goto L_11158ac7;
L_11158af9:;
  /* 11158af9 push 9 */
  push32((uint32_t)(0x9u));
  /* 11158afb call 0x1115b000 */
  push32(0x11158b00u); f_1115b000();
  /* 11158b00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11158b03:;
  /* 11158b03 mov esp, ebp */
  ESP = (EBP);
  /* 11158b05 pop ebp */
  EBP = (pop32());
  /* 11158b06 ret  */
  ESPCHK(0x11158aa0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x11158b10 (75 bytes, 28 insns) */
void f_11158b10(void) {
  FTRACE(0x11158b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11158b10 push ebp */
  push32((uint32_t)(EBP));
  /* 11158b11 mov ebp, esp */
  EBP = (ESP);
  /* 11158b13 push ecx */
  push32((uint32_t)(ECX));
  /* 11158b14 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158b18 je 0x11158b4d */
  if (C.zf) goto L_11158b4d;
  /* 11158b1a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11158b1d push eax */
  push32((uint32_t)(EAX));
  /* 11158b1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11158b21 push ecx */
  push32((uint32_t)(ECX));
  /* 11158b22 call dword ptr [0x1118639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118639c))), 0x11158b28u);
  /* 11158b28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11158b2a jne 0x11158b4d */
  if (!C.zf) goto L_11158b4d;
  /* 11158b2c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158b30 je 0x11158b44 */
  if (C.zf) goto L_11158b44;
  /* 11158b32 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11158b35 push edx */
  push32((uint32_t)(EDX));
  /* 11158b36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11158b39 push eax */
  push32((uint32_t)(EAX));
  /* 11158b3a call dword ptr [0x111863a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863a0))), 0x11158b40u);
  /* 11158b40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11158b42 jne 0x11158b4d */
  if (!C.zf) goto L_11158b4d;
L_11158b44:;
  /* 11158b44 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11158b4b jmp 0x11158b54 */
  goto L_11158b54;
L_11158b4d:;
  /* 11158b4d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11158b54:;
  /* 11158b54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158b57 mov esp, ebp */
  ESP = (EBP);
  /* 11158b59 pop ebp */
  EBP = (pop32());
  /* 11158b5a ret  */
  ESPCHK(0x11158b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b60 @ 0x11158b60 (134 bytes, 50 insns) */
void f_11158b60(void) {
  FTRACE(0x11158b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11158b60 push ebp */
  push32((uint32_t)(EBP));
  /* 11158b61 mov ebp, esp */
  EBP = (ESP);
  /* 11158b63 push ecx */
  push32((uint32_t)(ECX));
  /* 11158b64 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158b68 jne 0x11158b6e */
  if (!C.zf) goto L_11158b6e;
  /* 11158b6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11158b6c jmp 0x11158be2 */
  goto L_11158be2;
L_11158b6e:;
  /* 11158b6e push 1 */
  push32((uint32_t)(0x1u));
  /* 11158b70 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11158b72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11158b75 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11158b78 push eax */
  push32((uint32_t)(EAX));
  /* 11158b79 call 0x11158b10 */
  push32(0x11158b7eu); f_11158b10();
  /* 11158b7e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11158b81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11158b83 jne 0x11158b89 */
  if (!C.zf) goto L_11158b89;
  /* 11158b85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11158b87 jmp 0x11158be2 */
  goto L_11158be2;
L_11158b89:;
  /* 11158b89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11158b8c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11158b8f push ecx */
  push32((uint32_t)(ECX));
  /* 11158b90 call 0x1115b860 */
  push32(0x11158b95u); f_1115b860();
  /* 11158b95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11158b98 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11158b9b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158b9f je 0x11158bb6 */
  if (C.zf) goto L_11158bb6;
  /* 11158ba1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11158ba4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11158ba7 push edx */
  push32((uint32_t)(EDX));
  /* 11158ba8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158bab push eax */
  push32((uint32_t)(EAX));
  /* 11158bac call 0x1115b8c0 */
  push32(0x11158bb1u); f_1115b8c0();
  /* 11158bb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11158bb4 jmp 0x11158be2 */
  goto L_11158be2;
L_11158bb6:;
  /* 11158bb6 mov ecx, dword ptr [0x111837f0] */
  ECX = (r32((uint32_t)(0x111837f0)));
  /* 11158bbc and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11158bc2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11158bc4 je 0x11158bcd */
  if (C.zf) goto L_11158bcd;
  /* 11158bc6 mov eax, 1 */
  EAX = (0x1u);
  /* 11158bcb jmp 0x11158be2 */
  goto L_11158be2;
L_11158bcd:;
  /* 11158bcd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11158bd0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11158bd3 push edx */
  push32((uint32_t)(EDX));
  /* 11158bd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11158bd6 mov eax, dword ptr [0x1118518c] */
  EAX = (r32((uint32_t)(0x1118518c)));
  /* 11158bdb push eax */
  push32((uint32_t)(EAX));
  /* 11158bdc call dword ptr [0x11186398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186398))), 0x11158be2u);
L_11158be2:;
  /* 11158be2 mov esp, ebp */
  ESP = (EBP);
  /* 11158be4 pop ebp */
  EBP = (pop32());
  /* 11158be5 ret  */
  ESPCHK(0x11158b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10008bf0 @ 0x11158bf0 (227 bytes, 80 insns) */
void f_11158bf0(void) {
  FTRACE(0x11158bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11158bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11158bf1 mov ebp, esp */
  EBP = (ESP);
  /* 11158bf3 push ecx */
  push32((uint32_t)(ECX));
  /* 11158bf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11158bf7 push eax */
  push32((uint32_t)(EAX));
  /* 11158bf8 call 0x11158b60 */
  push32(0x11158bfdu); f_11158b60();
  /* 11158bfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11158c00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11158c02 jne 0x11158c0b */
  if (!C.zf) goto L_11158c0b;
  /* 11158c04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11158c06 jmp 0x11158ccf */
  goto L_11158ccf;
L_11158c0b:;
  /* 11158c0b push 9 */
  push32((uint32_t)(0x9u));
  /* 11158c0d call 0x1115af60 */
  push32(0x11158c12u); f_1115af60();
  /* 11158c12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11158c15 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11158c18 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11158c1b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11158c1e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158c21 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11158c24 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11158c29 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158c2c je 0x11158c50 */
  if (C.zf) goto L_11158c50;
  /* 11158c2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158c31 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158c35 je 0x11158c50 */
  if (C.zf) goto L_11158c50;
  /* 11158c37 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158c3a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11158c3d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11158c42 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158c45 je 0x11158c50 */
  if (C.zf) goto L_11158c50;
  /* 11158c47 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158c4a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158c4e jne 0x11158cc3 */
  if (!C.zf) goto L_11158cc3;
L_11158c50:;
  /* 11158c50 push 1 */
  push32((uint32_t)(0x1u));
  /* 11158c52 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11158c55 push edx */
  push32((uint32_t)(EDX));
  /* 11158c56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11158c59 push eax */
  push32((uint32_t)(EAX));
  /* 11158c5a call 0x11158b10 */
  push32(0x11158c5fu); f_11158b10();
  /* 11158c5f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11158c62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11158c64 je 0x11158cc3 */
  if (C.zf) goto L_11158cc3;
  /* 11158c66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158c69 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11158c6c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158c6f jne 0x11158cc3 */
  if (!C.zf) goto L_11158cc3;
  /* 11158c71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158c74 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11158c77 cmp ecx, dword ptr [0x11181a88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11181a88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158c7d jg 0x11158cc3 */
  if ((!C.zf&&C.sf==C.of)) goto L_11158cc3;
  /* 11158c7f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158c83 je 0x11158c90 */
  if (C.zf) goto L_11158c90;
  /* 11158c85 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11158c88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158c8b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11158c8e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11158c90:;
  /* 11158c90 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158c94 je 0x11158ca1 */
  if (C.zf) goto L_11158ca1;
  /* 11158c96 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11158c99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158c9c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11158c9f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11158ca1:;
  /* 11158ca1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158ca5 je 0x11158cb2 */
  if (C.zf) goto L_11158cb2;
  /* 11158ca7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11158caa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158cad mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11158cb0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11158cb2:;
  /* 11158cb2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11158cb4 call 0x1115b000 */
  push32(0x11158cb9u); f_1115b000();
  /* 11158cb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11158cbc mov eax, 1 */
  EAX = (0x1u);
  /* 11158cc1 jmp 0x11158ccf */
  goto L_11158ccf;
L_11158cc3:;
  /* 11158cc3 push 9 */
  push32((uint32_t)(0x9u));
  /* 11158cc5 call 0x1115b000 */
  push32(0x11158ccau); f_1115b000();
  /* 11158cca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11158ccd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11158ccf:;
  /* 11158ccf mov esp, ebp */
  ESP = (EBP);
  /* 11158cd1 pop ebp */
  EBP = (pop32());
  /* 11158cd2 ret  */
  ESPCHK(0x11158bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ce0 @ 0x11158ce0 (28 bytes, 11 insns) */
void f_11158ce0(void) {
  FTRACE(0x11158ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11158ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11158ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11158ce3 push ecx */
  push32((uint32_t)(ECX));
  /* 11158ce4 mov eax, dword ptr [0x11185198] */
  EAX = (r32((uint32_t)(0x11185198)));
  /* 11158ce9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11158cec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11158cef mov dword ptr [0x11185198], ecx */
  w32((uint32_t)(0x11185198), (ECX));
  /* 11158cf5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158cf8 mov esp, ebp */
  ESP = (EBP);
  /* 11158cfa pop ebp */
  EBP = (pop32());
  /* 11158cfb ret  */
  ESPCHK(0x11158ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d00 @ 0x11158d00 (362 bytes, 116 insns) */
void f_11158d00(void) {
  FTRACE(0x11158d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11158d00 push ebp */
  push32((uint32_t)(EBP));
  /* 11158d01 mov ebp, esp */
  EBP = (ESP);
  /* 11158d03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11158d06 push ebx */
  push32((uint32_t)(EBX));
  /* 11158d07 push esi */
  push32((uint32_t)(ESI));
  /* 11158d08 push edi */
  push32((uint32_t)(EDI));
  /* 11158d09 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158d0d jne 0x11158d3a */
  if (!C.zf) goto L_11158d3a;
L_11158d0f:;
  /* 11158d0f push 0x1117ee0c */
  push32((uint32_t)(0x1117ee0cu));
  /* 11158d14 push 0x1117e924 */
  push32((uint32_t)(0x1117e924u));
  /* 11158d19 push 0 */
  push32((uint32_t)(0x0u));
  /* 11158d1b push 0 */
  push32((uint32_t)(0x0u));
  /* 11158d1d push 0 */
  push32((uint32_t)(0x0u));
  /* 11158d1f push 0 */
  push32((uint32_t)(0x0u));
  /* 11158d21 call 0x11156620 */
  push32(0x11158d26u); f_11156620();
  /* 11158d26 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11158d29 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158d2c jne 0x11158d2f */
  if (!C.zf) goto L_11158d2f;
  /* 11158d2e int3  */
  x86_unimpl("int3 @ 0x11158d2e");
L_11158d2f:;
  /* 11158d2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11158d31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11158d33 jne 0x11158d0f */
  if (!C.zf) goto L_11158d0f;
  /* 11158d35 jmp 0x11158e63 */
  goto L_11158e63;
L_11158d3a:;
  /* 11158d3a push 9 */
  push32((uint32_t)(0x9u));
  /* 11158d3c call 0x1115af60 */
  push32(0x11158d41u); f_1115af60();
  /* 11158d41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11158d44 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11158d47 mov edx, dword ptr [0x1118383c] */
  EDX = (r32((uint32_t)(0x1118383c)));
  /* 11158d4d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11158d4f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11158d56 jmp 0x11158d61 */
  goto L_11158d61;
L_11158d58:;
  /* 11158d58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158d5b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11158d5e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11158d61:;
  /* 11158d61 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158d65 jge 0x11158d85 */
  if ((C.sf==C.of)) goto L_11158d85;
  /* 11158d67 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158d6a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11158d6d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 11158d75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158d78 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11158d7b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 11158d83 jmp 0x11158d58 */
  goto L_11158d58;
L_11158d85:;
  /* 11158d85 mov edx, dword ptr [0x1118383c] */
  EDX = (r32((uint32_t)(0x1118383c)));
  /* 11158d8b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11158d8e jmp 0x11158d98 */
  goto L_11158d98;
L_11158d90:;
  /* 11158d90 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11158d93 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11158d95 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11158d98:;
  /* 11158d98 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158d9c je 0x11158e41 */
  if (C.zf) goto L_11158e41;
  /* 11158da2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11158da5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11158da8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11158dad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11158daf jl 0x11158e17 */
  if ((C.sf!=C.of)) goto L_11158e17;
  /* 11158db1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11158db4 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11158db7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11158dbd cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158dc0 jge 0x11158e17 */
  if ((C.sf==C.of)) goto L_11158e17;
  /* 11158dc2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11158dc5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11158dc8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11158dce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11158dd1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 11158dd5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11158dd8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11158ddb mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11158dde and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11158de4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11158de7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 11158deb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11158dee mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11158df1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11158df6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11158df9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 11158dfd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11158e00 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11158e03 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11158e06 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11158e09 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11158e0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11158e11 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11158e15 jmp 0x11158e3c */
  goto L_11158e3c;
L_11158e17:;
  /* 11158e17 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11158e1a push edx */
  push32((uint32_t)(EDX));
  /* 11158e1b push 0x1117ede8 */
  push32((uint32_t)(0x1117ede8u));
  /* 11158e20 push 0 */
  push32((uint32_t)(0x0u));
  /* 11158e22 push 0 */
  push32((uint32_t)(0x0u));
  /* 11158e24 push 0 */
  push32((uint32_t)(0x0u));
  /* 11158e26 push 0 */
  push32((uint32_t)(0x0u));
  /* 11158e28 call 0x11156620 */
  push32(0x11158e2du); f_11156620();
  /* 11158e2d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11158e30 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158e33 jne 0x11158e36 */
  if (!C.zf) goto L_11158e36;
  /* 11158e35 int3  */
  x86_unimpl("int3 @ 0x11158e35");
L_11158e36:;
  /* 11158e36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11158e38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11158e3a jne 0x11158e17 */
  if (!C.zf) goto L_11158e17;
L_11158e3c:;
  /* 11158e3c jmp 0x11158d90 */
  goto L_11158d90;
L_11158e41:;
  /* 11158e41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11158e44 mov edx, dword ptr [0x11183844] */
  EDX = (r32((uint32_t)(0x11183844)));
  /* 11158e4a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 11158e4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11158e50 mov ecx, dword ptr [0x11183838] */
  ECX = (r32((uint32_t)(0x11183838)));
  /* 11158e56 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 11158e59 push 9 */
  push32((uint32_t)(0x9u));
  /* 11158e5b call 0x1115b000 */
  push32(0x11158e60u); f_1115b000();
  /* 11158e60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11158e63:;
  /* 11158e63 pop edi */
  EDI = (pop32());
  /* 11158e64 pop esi */
  ESI = (pop32());
  /* 11158e65 pop ebx */
  EBX = (pop32());
  /* 11158e66 mov esp, ebp */
  ESP = (EBP);
  /* 11158e68 pop ebp */
  EBP = (pop32());
  /* 11158e69 ret  */
  ESPCHK(0x11158d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e70 @ 0x11158e70 (291 bytes, 95 insns) */
void f_11158e70(void) {
  FTRACE(0x11158e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11158e70 push ebp */
  push32((uint32_t)(EBP));
  /* 11158e71 mov ebp, esp */
  EBP = (ESP);
  /* 11158e73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11158e76 push ebx */
  push32((uint32_t)(EBX));
  /* 11158e77 push esi */
  push32((uint32_t)(ESI));
  /* 11158e78 push edi */
  push32((uint32_t)(EDI));
  /* 11158e79 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11158e80 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158e84 je 0x11158e92 */
  if (C.zf) goto L_11158e92;
  /* 11158e86 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158e8a je 0x11158e92 */
  if (C.zf) goto L_11158e92;
  /* 11158e8c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158e90 jne 0x11158ec0 */
  if (!C.zf) goto L_11158ec0;
L_11158e92:;
  /* 11158e92 push 0x1117ee34 */
  push32((uint32_t)(0x1117ee34u));
  /* 11158e97 push 0x1117e924 */
  push32((uint32_t)(0x1117e924u));
  /* 11158e9c push 0 */
  push32((uint32_t)(0x0u));
  /* 11158e9e push 0 */
  push32((uint32_t)(0x0u));
  /* 11158ea0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11158ea2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11158ea4 call 0x11156620 */
  push32(0x11158ea9u); f_11156620();
  /* 11158ea9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11158eac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158eaf jne 0x11158eb2 */
  if (!C.zf) goto L_11158eb2;
  /* 11158eb1 int3  */
  x86_unimpl("int3 @ 0x11158eb1");
L_11158eb2:;
  /* 11158eb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11158eb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11158eb6 jne 0x11158e92 */
  if (!C.zf) goto L_11158e92;
  /* 11158eb8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11158ebb jmp 0x11158f8c */
  goto L_11158f8c;
L_11158ec0:;
  /* 11158ec0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11158ec7 jmp 0x11158ed2 */
  goto L_11158ed2;
L_11158ec9:;
  /* 11158ec9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158ecc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11158ecf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11158ed2:;
  /* 11158ed2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158ed6 jge 0x11158f5c */
  if ((C.sf==C.of)) goto L_11158f5c;
  /* 11158edc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158edf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11158ee2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158ee5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11158ee8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 11158eec sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11158ef0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158ef3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11158ef6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11158efa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158efd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11158f00 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158f03 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11158f06 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 11158f0a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11158f0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158f11 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11158f14 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 11158f18 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158f1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11158f1e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158f23 jne 0x11158f32 */
  if (!C.zf) goto L_11158f32;
  /* 11158f25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158f28 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11158f2b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158f30 je 0x11158f57 */
  if (C.zf) goto L_11158f57;
L_11158f32:;
  /* 11158f32 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158f36 je 0x11158f57 */
  if (C.zf) goto L_11158f57;
  /* 11158f38 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158f3c jne 0x11158f50 */
  if (!C.zf) goto L_11158f50;
  /* 11158f3e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158f42 jne 0x11158f57 */
  if (!C.zf) goto L_11158f57;
  /* 11158f44 mov eax, dword ptr [0x11181a84] */
  EAX = (r32((uint32_t)(0x11181a84)));
  /* 11158f49 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11158f4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11158f4e je 0x11158f57 */
  if (C.zf) goto L_11158f57;
L_11158f50:;
  /* 11158f50 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11158f57:;
  /* 11158f57 jmp 0x11158ec9 */
  goto L_11158ec9;
L_11158f5c:;
  /* 11158f5c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11158f5f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11158f62 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11158f65 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11158f68 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11158f6b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 11158f6e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11158f71 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11158f74 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 11158f77 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11158f7a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11158f7d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 11158f80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11158f83 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11158f89 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11158f8c:;
  /* 11158f8c pop edi */
  EDI = (pop32());
  /* 11158f8d pop esi */
  ESI = (pop32());
  /* 11158f8e pop ebx */
  EBX = (pop32());
  /* 11158f8f mov esp, ebp */
  ESP = (EBP);
  /* 11158f91 pop ebp */
  EBP = (pop32());
  /* 11158f92 ret  */
  ESPCHK(0x11158e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10008fa0 @ 0x11158fa0 (697 bytes, 253 insns) */
void f_11158fa0(void) {
  FTRACE(0x11158fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11158fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11158fa1 mov ebp, esp */
  EBP = (ESP);
  /* 11158fa3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11158fa6 push ebx */
  push32((uint32_t)(EBX));
  /* 11158fa7 push esi */
  push32((uint32_t)(ESI));
  /* 11158fa8 push edi */
  push32((uint32_t)(EDI));
  /* 11158fa9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11158fb0 push 9 */
  push32((uint32_t)(0x9u));
  /* 11158fb2 call 0x1115af60 */
  push32(0x11158fb7u); f_1115af60();
  /* 11158fb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11158fba:;
  /* 11158fba push 0x1117ef2c */
  push32((uint32_t)(0x1117ef2cu));
  /* 11158fbf push 0x1117e924 */
  push32((uint32_t)(0x1117e924u));
  /* 11158fc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11158fc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11158fc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11158fca push 0 */
  push32((uint32_t)(0x0u));
  /* 11158fcc call 0x11156620 */
  push32(0x11158fd1u); f_11156620();
  /* 11158fd1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11158fd4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158fd7 jne 0x11158fda */
  if (!C.zf) goto L_11158fda;
  /* 11158fd9 int3  */
  x86_unimpl("int3 @ 0x11158fd9");
L_11158fda:;
  /* 11158fda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11158fdc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11158fde jne 0x11158fba */
  if (!C.zf) goto L_11158fba;
  /* 11158fe0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11158fe4 je 0x11158fee */
  if (C.zf) goto L_11158fee;
  /* 11158fe6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11158fe9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11158feb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11158fee:;
  /* 11158fee mov eax, dword ptr [0x1118383c] */
  EAX = (r32((uint32_t)(0x1118383c)));
  /* 11158ff3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11158ff6 jmp 0x11159000 */
  goto L_11159000;
L_11158ff8:;
  /* 11158ff8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11158ffb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11158ffd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11159000:;
  /* 11159000 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159004 je 0x11159222 */
  if (C.zf) goto L_11159222;
  /* 1115900a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115900d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159010 je 0x11159222 */
  if (C.zf) goto L_11159222;
  /* 11159016 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159019 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1115901c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11159022 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159025 je 0x11159054 */
  if (C.zf) goto L_11159054;
  /* 11159027 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115902a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1115902d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11159033 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11159035 je 0x11159054 */
  if (C.zf) goto L_11159054;
  /* 11159037 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115903a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1115903d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11159042 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159045 jne 0x11159059 */
  if (!C.zf) goto L_11159059;
  /* 11159047 mov ecx, dword ptr [0x11181a84] */
  ECX = (r32((uint32_t)(0x11181a84)));
  /* 1115904d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11159050 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11159052 jne 0x11159059 */
  if (!C.zf) goto L_11159059;
L_11159054:;
  /* 11159054 jmp 0x1115921d */
  goto L_1115921d;
L_11159059:;
  /* 11159059 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115905c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159060 je 0x111590d2 */
  if (C.zf) goto L_111590d2;
  /* 11159062 push 0 */
  push32((uint32_t)(0x0u));
  /* 11159064 push 1 */
  push32((uint32_t)(0x1u));
  /* 11159066 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159069 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1115906c push ecx */
  push32((uint32_t)(ECX));
  /* 1115906d call 0x11158b10 */
  push32(0x11159072u); f_11158b10();
  /* 11159072 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11159075 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11159077 jne 0x111590a3 */
  if (!C.zf) goto L_111590a3;
L_11159079:;
  /* 11159079 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115907c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1115907f push eax */
  push32((uint32_t)(EAX));
  /* 11159080 push 0x1117ef18 */
  push32((uint32_t)(0x1117ef18u));
  /* 11159085 push 0 */
  push32((uint32_t)(0x0u));
  /* 11159087 push 0 */
  push32((uint32_t)(0x0u));
  /* 11159089 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115908b push 0 */
  push32((uint32_t)(0x0u));
  /* 1115908d call 0x11156620 */
  push32(0x11159092u); f_11156620();
  /* 11159092 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11159095 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159098 jne 0x1115909b */
  if (!C.zf) goto L_1115909b;
  /* 1115909a int3  */
  x86_unimpl("int3 @ 0x1115909a");
L_1115909b:;
  /* 1115909b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1115909d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115909f jne 0x11159079 */
  if (!C.zf) goto L_11159079;
  /* 111590a1 jmp 0x111590d2 */
  goto L_111590d2;
L_111590a3:;
  /* 111590a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111590a6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 111590a9 push eax */
  push32((uint32_t)(EAX));
  /* 111590aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111590ad mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 111590b0 push edx */
  push32((uint32_t)(EDX));
  /* 111590b1 push 0x1117ef0c */
  push32((uint32_t)(0x1117ef0cu));
  /* 111590b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 111590b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 111590ba push 0 */
  push32((uint32_t)(0x0u));
  /* 111590bc push 0 */
  push32((uint32_t)(0x0u));
  /* 111590be call 0x11156620 */
  push32(0x111590c3u); f_11156620();
  /* 111590c3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111590c6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111590c9 jne 0x111590cc */
  if (!C.zf) goto L_111590cc;
  /* 111590cb int3  */
  x86_unimpl("int3 @ 0x111590cb");
L_111590cc:;
  /* 111590cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111590ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111590d0 jne 0x111590a3 */
  if (!C.zf) goto L_111590a3;
L_111590d2:;
  /* 111590d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111590d5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 111590d8 push edx */
  push32((uint32_t)(EDX));
  /* 111590d9 push 0x1117ef04 */
  push32((uint32_t)(0x1117ef04u));
  /* 111590de push 0 */
  push32((uint32_t)(0x0u));
  /* 111590e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 111590e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 111590e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 111590e6 call 0x11156620 */
  push32(0x111590ebu); f_11156620();
  /* 111590eb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111590ee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111590f1 jne 0x111590f4 */
  if (!C.zf) goto L_111590f4;
  /* 111590f3 int3  */
  x86_unimpl("int3 @ 0x111590f3");
L_111590f4:;
  /* 111590f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111590f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111590f8 jne 0x111590d2 */
  if (!C.zf) goto L_111590d2;
  /* 111590fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111590fd mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11159100 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11159106 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159109 jne 0x1115917c */
  if (!C.zf) goto L_1115917c;
L_1115910b:;
  /* 1115910b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115910e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11159111 push ecx */
  push32((uint32_t)(ECX));
  /* 11159112 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159115 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11159118 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1115911b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11159120 push eax */
  push32((uint32_t)(EAX));
  /* 11159121 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159124 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159127 push ecx */
  push32((uint32_t)(ECX));
  /* 11159128 push 0x1117eed0 */
  push32((uint32_t)(0x1117eed0u));
  /* 1115912d push 0 */
  push32((uint32_t)(0x0u));
  /* 1115912f push 0 */
  push32((uint32_t)(0x0u));
  /* 11159131 push 0 */
  push32((uint32_t)(0x0u));
  /* 11159133 push 0 */
  push32((uint32_t)(0x0u));
  /* 11159135 call 0x11156620 */
  push32(0x1115913au); f_11156620();
  /* 1115913a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115913d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159140 jne 0x11159143 */
  if (!C.zf) goto L_11159143;
  /* 11159142 int3  */
  x86_unimpl("int3 @ 0x11159142");
L_11159143:;
  /* 11159143 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11159145 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11159147 jne 0x1115910b */
  if (!C.zf) goto L_1115910b;
  /* 11159149 cmp dword ptr [0x11185198], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11185198))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159150 je 0x1115916b */
  if (C.zf) goto L_1115916b;
  /* 11159152 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159155 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11159158 push ecx */
  push32((uint32_t)(ECX));
  /* 11159159 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115915c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115915f push edx */
  push32((uint32_t)(EDX));
  /* 11159160 call dword ptr [0x11185198] */
  call_ind((uint32_t)(r32((uint32_t)(0x11185198))), 0x11159166u);
  /* 11159166 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11159169 jmp 0x11159177 */
  goto L_11159177;
L_1115916b:;
  /* 1115916b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115916e push eax */
  push32((uint32_t)(EAX));
  /* 1115916f call 0x11159260 */
  push32(0x11159174u); f_11159260();
  /* 11159174 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11159177:;
  /* 11159177 jmp 0x1115921d */
  goto L_1115921d;
L_1115917c:;
  /* 1115917c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115917f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159183 jne 0x111591c2 */
  if (!C.zf) goto L_111591c2;
L_11159185:;
  /* 11159185 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159188 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1115918b push eax */
  push32((uint32_t)(EAX));
  /* 1115918c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115918f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159192 push ecx */
  push32((uint32_t)(ECX));
  /* 11159193 push 0x1117eea8 */
  push32((uint32_t)(0x1117eea8u));
  /* 11159198 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115919a push 0 */
  push32((uint32_t)(0x0u));
  /* 1115919c push 0 */
  push32((uint32_t)(0x0u));
  /* 1115919e push 0 */
  push32((uint32_t)(0x0u));
  /* 111591a0 call 0x11156620 */
  push32(0x111591a5u); f_11156620();
  /* 111591a5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111591a8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111591ab jne 0x111591ae */
  if (!C.zf) goto L_111591ae;
  /* 111591ad int3  */
  x86_unimpl("int3 @ 0x111591ad");
L_111591ae:;
  /* 111591ae xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111591b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111591b2 jne 0x11159185 */
  if (!C.zf) goto L_11159185;
  /* 111591b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111591b7 push eax */
  push32((uint32_t)(EAX));
  /* 111591b8 call 0x11159260 */
  push32(0x111591bdu); f_11159260();
  /* 111591bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111591c0 jmp 0x1115921d */
  goto L_1115921d;
L_111591c2:;
  /* 111591c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111591c5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 111591c8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 111591ce cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111591d1 jne 0x1115921d */
  if (!C.zf) goto L_1115921d;
L_111591d3:;
  /* 111591d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111591d6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 111591d9 push ecx */
  push32((uint32_t)(ECX));
  /* 111591da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111591dd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111591e0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 111591e3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111591e8 push eax */
  push32((uint32_t)(EAX));
  /* 111591e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111591ec add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111591ef push ecx */
  push32((uint32_t)(ECX));
  /* 111591f0 push 0x1117ee74 */
  push32((uint32_t)(0x1117ee74u));
  /* 111591f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 111591f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 111591f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 111591fb push 0 */
  push32((uint32_t)(0x0u));
  /* 111591fd call 0x11156620 */
  push32(0x11159202u); f_11156620();
  /* 11159202 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11159205 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159208 jne 0x1115920b */
  if (!C.zf) goto L_1115920b;
  /* 1115920a int3  */
  x86_unimpl("int3 @ 0x1115920a");
L_1115920b:;
  /* 1115920b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1115920d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115920f jne 0x111591d3 */
  if (!C.zf) goto L_111591d3;
  /* 11159211 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159214 push eax */
  push32((uint32_t)(EAX));
  /* 11159215 call 0x11159260 */
  push32(0x1115921au); f_11159260();
  /* 1115921a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1115921d:;
  /* 1115921d jmp 0x11158ff8 */
  goto L_11158ff8;
L_11159222:;
  /* 11159222 push 9 */
  push32((uint32_t)(0x9u));
  /* 11159224 call 0x1115b000 */
  push32(0x11159229u); f_1115b000();
  /* 11159229 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1115922c:;
  /* 1115922c push 0x1117ee5c */
  push32((uint32_t)(0x1117ee5cu));
  /* 11159231 push 0x1117e924 */
  push32((uint32_t)(0x1117e924u));
  /* 11159236 push 0 */
  push32((uint32_t)(0x0u));
  /* 11159238 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115923a push 0 */
  push32((uint32_t)(0x0u));
  /* 1115923c push 0 */
  push32((uint32_t)(0x0u));
  /* 1115923e call 0x11156620 */
  push32(0x11159243u); f_11156620();
  /* 11159243 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11159246 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159249 jne 0x1115924c */
  if (!C.zf) goto L_1115924c;
  /* 1115924b int3  */
  x86_unimpl("int3 @ 0x1115924b");
L_1115924c:;
  /* 1115924c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1115924e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11159250 jne 0x1115922c */
  if (!C.zf) goto L_1115922c;
  /* 11159252 pop edi */
  EDI = (pop32());
  /* 11159253 pop esi */
  ESI = (pop32());
  /* 11159254 pop ebx */
  EBX = (pop32());
  /* 11159255 mov esp, ebp */
  ESP = (EBP);
  /* 11159257 pop ebp */
  EBP = (pop32());
  /* 11159258 ret  */
  ESPCHK(0x11158fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009260 @ 0x11159260 (276 bytes, 89 insns) */
void f_11159260(void) {
  FTRACE(0x11159260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11159260 push ebp */
  push32((uint32_t)(EBP));
  /* 11159261 mov ebp, esp */
  EBP = (ESP);
  /* 11159263 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11159266 push ebx */
  push32((uint32_t)(EBX));
  /* 11159267 push esi */
  push32((uint32_t)(ESI));
  /* 11159268 push edi */
  push32((uint32_t)(EDI));
  /* 11159269 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 11159270 jmp 0x1115927b */
  goto L_1115927b;
L_11159272:;
  /* 11159272 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11159275 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159278 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_1115927b:;
  /* 1115927b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115927e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159282 jge 0x1115928f */
  if ((C.sf==C.of)) goto L_1115928f;
  /* 11159284 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11159287 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1115928a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 1115928d jmp 0x11159296 */
  goto L_11159296;
L_1115928f:;
  /* 1115928f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_11159296:;
  /* 11159296 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11159299 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115929c jge 0x1115933c */
  if ((C.sf==C.of)) goto L_1115933c;
  /* 111592a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111592a5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111592a8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 111592ab mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 111592ae cmp dword ptr [0x11181ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11181ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111592b5 jle 0x111592d3 */
  if ((C.zf||C.sf!=C.of)) goto L_111592d3;
  /* 111592b7 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 111592bc mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 111592bf and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 111592c5 push ecx */
  push32((uint32_t)(ECX));
  /* 111592c6 call 0x1115d570 */
  push32(0x111592cbu); f_1115d570();
  /* 111592cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111592ce mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 111592d1 jmp 0x111592f0 */
  goto L_111592f0;
L_111592d3:;
  /* 111592d3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 111592d6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 111592dc mov eax, dword ptr [0x11181c98] */
  EAX = (r32((uint32_t)(0x11181c98)));
  /* 111592e1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111592e3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 111592e7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 111592ed mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_111592f0:;
  /* 111592f0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111592f4 je 0x11159304 */
  if (C.zf) goto L_11159304;
  /* 111592f6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 111592f9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 111592ff mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 11159302 jmp 0x1115930b */
  goto L_1115930b;
L_11159304:;
  /* 11159304 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_1115930b:;
  /* 1115930b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1115930e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 11159311 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 11159315 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11159318 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1115931e push edx */
  push32((uint32_t)(EDX));
  /* 1115931f push 0x1117ef50 */
  push32((uint32_t)(0x1117ef50u));
  /* 11159324 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11159327 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1115932a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 1115932e push ecx */
  push32((uint32_t)(ECX));
  /* 1115932f call 0x1115d470 */
  push32(0x11159334u); f_1115d470();
  /* 11159334 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11159337 jmp 0x11159272 */
  goto L_11159272;
L_1115933c:;
  /* 1115933c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1115933f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_11159344:;
  /* 11159344 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11159347 push eax */
  push32((uint32_t)(EAX));
  /* 11159348 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 1115934b push ecx */
  push32((uint32_t)(ECX));
  /* 1115934c push 0x1117ef40 */
  push32((uint32_t)(0x1117ef40u));
  /* 11159351 push 0 */
  push32((uint32_t)(0x0u));
  /* 11159353 push 0 */
  push32((uint32_t)(0x0u));
  /* 11159355 push 0 */
  push32((uint32_t)(0x0u));
  /* 11159357 push 0 */
  push32((uint32_t)(0x0u));
  /* 11159359 call 0x11156620 */
  push32(0x1115935eu); f_11156620();
  /* 1115935e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11159361 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159364 jne 0x11159367 */
  if (!C.zf) goto L_11159367;
  /* 11159366 int3  */
  x86_unimpl("int3 @ 0x11159366");
L_11159367:;
  /* 11159367 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11159369 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115936b jne 0x11159344 */
  if (!C.zf) goto L_11159344;
  /* 1115936d pop edi */
  EDI = (pop32());
  /* 1115936e pop esi */
  ESI = (pop32());
  /* 1115936f pop ebx */
  EBX = (pop32());
  /* 11159370 mov esp, ebp */
  ESP = (EBP);
  /* 11159372 pop ebp */
  EBP = (pop32());
  /* 11159373 ret  */
  ESPCHK(0x11159260u, _esp0);
  ESP += 4; return;
}

/* FUN_10009380 @ 0x11159380 (116 bytes, 46 insns) */
void f_11159380(void) {
  FTRACE(0x11159380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11159380 push ebp */
  push32((uint32_t)(EBP));
  /* 11159381 mov ebp, esp */
  EBP = (ESP);
  /* 11159383 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11159386 push ebx */
  push32((uint32_t)(EBX));
  /* 11159387 push esi */
  push32((uint32_t)(ESI));
  /* 11159388 push edi */
  push32((uint32_t)(EDI));
  /* 11159389 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 1115938c push eax */
  push32((uint32_t)(EAX));
  /* 1115938d call 0x11158d00 */
  push32(0x11159392u); f_11158d00();
  /* 11159392 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11159395 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159399 jne 0x111593b4 */
  if (!C.zf) goto L_111593b4;
  /* 1115939b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115939f jne 0x111593b4 */
  if (!C.zf) goto L_111593b4;
  /* 111593a1 mov ecx, dword ptr [0x11181a84] */
  ECX = (r32((uint32_t)(0x11181a84)));
  /* 111593a7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 111593aa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111593ac je 0x111593eb */
  if (C.zf) goto L_111593eb;
  /* 111593ae cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111593b2 je 0x111593eb */
  if (C.zf) goto L_111593eb;
L_111593b4:;
  /* 111593b4 push 0x1117ef58 */
  push32((uint32_t)(0x1117ef58u));
  /* 111593b9 push 0x1117e924 */
  push32((uint32_t)(0x1117e924u));
  /* 111593be push 0 */
  push32((uint32_t)(0x0u));
  /* 111593c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 111593c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 111593c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 111593c6 call 0x11156620 */
  push32(0x111593cbu); f_11156620();
  /* 111593cb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111593ce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111593d1 jne 0x111593d4 */
  if (!C.zf) goto L_111593d4;
  /* 111593d3 int3  */
  x86_unimpl("int3 @ 0x111593d3");
L_111593d4:;
  /* 111593d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111593d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111593d8 jne 0x111593b4 */
  if (!C.zf) goto L_111593b4;
  /* 111593da push 0 */
  push32((uint32_t)(0x0u));
  /* 111593dc call 0x11158fa0 */
  push32(0x111593e1u); f_11158fa0();
  /* 111593e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111593e4 mov eax, 1 */
  EAX = (0x1u);
  /* 111593e9 jmp 0x111593ed */
  goto L_111593ed;
L_111593eb:;
  /* 111593eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111593ed:;
  /* 111593ed pop edi */
  EDI = (pop32());
  /* 111593ee pop esi */
  ESI = (pop32());
  /* 111593ef pop ebx */
  EBX = (pop32());
  /* 111593f0 mov esp, ebp */
  ESP = (EBP);
  /* 111593f2 pop ebp */
  EBP = (pop32());
  /* 111593f3 ret  */
  ESPCHK(0x11159380u, _esp0);
  ESP += 4; return;
}

/* FUN_10009400 @ 0x11159400 (197 bytes, 79 insns) */
void f_11159400(void) {
  FTRACE(0x11159400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11159400 push ebp */
  push32((uint32_t)(EBP));
  /* 11159401 mov ebp, esp */
  EBP = (ESP);
  /* 11159403 push ecx */
  push32((uint32_t)(ECX));
  /* 11159404 push ebx */
  push32((uint32_t)(EBX));
  /* 11159405 push esi */
  push32((uint32_t)(ESI));
  /* 11159406 push edi */
  push32((uint32_t)(EDI));
  /* 11159407 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115940b jne 0x11159412 */
  if (!C.zf) goto L_11159412;
  /* 1115940d jmp 0x111594be */
  goto L_111594be;
L_11159412:;
  /* 11159412 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11159419 jmp 0x11159424 */
  goto L_11159424;
L_1115941b:;
  /* 1115941b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115941e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159421 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11159424:;
  /* 11159424 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159428 jge 0x1115946e */
  if ((C.sf==C.of)) goto L_1115946e;
L_1115942a:;
  /* 1115942a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115942d mov edx, dword ptr [ecx*4 + 0x11181a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11181a94)));
  /* 11159434 push edx */
  push32((uint32_t)(EDX));
  /* 11159435 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159438 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115943b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 1115943f push edx */
  push32((uint32_t)(EDX));
  /* 11159440 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159443 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11159446 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1115944a push edx */
  push32((uint32_t)(EDX));
  /* 1115944b push 0x1117efb4 */
  push32((uint32_t)(0x1117efb4u));
  /* 11159450 push 0 */
  push32((uint32_t)(0x0u));
  /* 11159452 push 0 */
  push32((uint32_t)(0x0u));
  /* 11159454 push 0 */
  push32((uint32_t)(0x0u));
  /* 11159456 push 0 */
  push32((uint32_t)(0x0u));
  /* 11159458 call 0x11156620 */
  push32(0x1115945du); f_11156620();
  /* 1115945d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11159460 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159463 jne 0x11159466 */
  if (!C.zf) goto L_11159466;
  /* 11159465 int3  */
  x86_unimpl("int3 @ 0x11159465");
L_11159466:;
  /* 11159466 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11159468 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115946a jne 0x1115942a */
  if (!C.zf) goto L_1115942a;
  /* 1115946c jmp 0x1115941b */
  goto L_1115941b;
L_1115946e:;
  /* 1115946e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11159471 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11159474 push edx */
  push32((uint32_t)(EDX));
  /* 11159475 push 0x1117ef90 */
  push32((uint32_t)(0x1117ef90u));
  /* 1115947a push 0 */
  push32((uint32_t)(0x0u));
  /* 1115947c push 0 */
  push32((uint32_t)(0x0u));
  /* 1115947e push 0 */
  push32((uint32_t)(0x0u));
  /* 11159480 push 0 */
  push32((uint32_t)(0x0u));
  /* 11159482 call 0x11156620 */
  push32(0x11159487u); f_11156620();
  /* 11159487 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115948a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115948d jne 0x11159490 */
  if (!C.zf) goto L_11159490;
  /* 1115948f int3  */
  x86_unimpl("int3 @ 0x1115948f");
L_11159490:;
  /* 11159490 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11159492 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11159494 jne 0x1115946e */
  if (!C.zf) goto L_1115946e;
L_11159496:;
  /* 11159496 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11159499 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1115949c push edx */
  push32((uint32_t)(EDX));
  /* 1115949d push 0x1117ef70 */
  push32((uint32_t)(0x1117ef70u));
  /* 111594a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 111594a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 111594a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 111594a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 111594aa call 0x11156620 */
  push32(0x111594afu); f_11156620();
  /* 111594af add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111594b2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111594b5 jne 0x111594b8 */
  if (!C.zf) goto L_111594b8;
  /* 111594b7 int3  */
  x86_unimpl("int3 @ 0x111594b7");
L_111594b8:;
  /* 111594b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111594ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111594bc jne 0x11159496 */
  if (!C.zf) goto L_11159496;
L_111594be:;
  /* 111594be pop edi */
  EDI = (pop32());
  /* 111594bf pop esi */
  ESI = (pop32());
  /* 111594c0 pop ebx */
  EBX = (pop32());
  /* 111594c1 mov esp, ebp */
  ESP = (EBP);
  /* 111594c3 pop ebp */
  EBP = (pop32());
  /* 111594c4 ret  */
  ESPCHK(0x11159400u, _esp0);
  ESP += 4; return;
}

/* FUN_100094d0 @ 0x111594d0 (329 bytes, 102 insns) */
void f_111594d0(void) {
  FTRACE(0x111594d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111594d0 push ebp */
  push32((uint32_t)(EBP));
  /* 111594d1 mov ebp, esp */
  EBP = (ESP);
  /* 111594d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111594d6 cmp dword ptr [0x11185310], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11185310))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111594dd jne 0x111594e4 */
  if (!C.zf) goto L_111594e4;
  /* 111594df call 0x1115de10 */
  push32(0x111594e4u); f_1115de10();
L_111594e4:;
  /* 111594e4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 111594eb mov eax, dword ptr [0x111837d8] */
  EAX = (r32((uint32_t)(0x111837d8)));
  /* 111594f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111594f3:;
  /* 111594f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111594f6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 111594f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111594fb je 0x11159529 */
  if (C.zf) goto L_11159529;
  /* 111594fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159500 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11159503 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159506 je 0x11159511 */
  if (C.zf) goto L_11159511;
  /* 11159508 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115950b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115950e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11159511:;
  /* 11159511 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159514 push eax */
  push32((uint32_t)(EAX));
  /* 11159515 call 0x1115a390 */
  push32(0x1115951au); f_1115a390();
  /* 1115951a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115951d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159520 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11159524 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11159527 jmp 0x111594f3 */
  goto L_111594f3;
L_11159529:;
  /* 11159529 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 1115952b push 0x1117efd4 */
  push32((uint32_t)(0x1117efd4u));
  /* 11159530 push 2 */
  push32((uint32_t)(0x2u));
  /* 11159532 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11159535 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 1115953c push ecx */
  push32((uint32_t)(ECX));
  /* 1115953d call 0x11157560 */
  push32(0x11159542u); f_11157560();
  /* 11159542 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11159545 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11159548 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115954b mov dword ptr [0x1118380c], edx */
  w32((uint32_t)(0x1118380c), (EDX));
  /* 11159551 cmp dword ptr [0x1118380c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1118380c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159558 jne 0x11159564 */
  if (!C.zf) goto L_11159564;
  /* 1115955a push 9 */
  push32((uint32_t)(0x9u));
  /* 1115955c call 0x111564d0 */
  push32(0x11159561u); f_111564d0();
  /* 11159561 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11159564:;
  /* 11159564 mov eax, dword ptr [0x111837d8] */
  EAX = (r32((uint32_t)(0x111837d8)));
  /* 11159569 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1115956c jmp 0x11159577 */
  goto L_11159577;
L_1115956e:;
  /* 1115956e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159571 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159574 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11159577:;
  /* 11159577 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115957a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1115957d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115957f je 0x111595e7 */
  if (C.zf) goto L_111595e7;
  /* 11159581 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159584 push ecx */
  push32((uint32_t)(ECX));
  /* 11159585 call 0x1115a390 */
  push32(0x1115958au); f_1115a390();
  /* 1115958a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115958d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159590 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11159593 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159596 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11159599 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115959c je 0x111595e5 */
  if (C.zf) goto L_111595e5;
  /* 1115959e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 111595a0 push 0x1117efd4 */
  push32((uint32_t)(0x1117efd4u));
  /* 111595a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 111595a7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111595aa push ecx */
  push32((uint32_t)(ECX));
  /* 111595ab call 0x11157560 */
  push32(0x111595b0u); f_11157560();
  /* 111595b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111595b3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111595b6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 111595b8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111595bb cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111595be jne 0x111595ca */
  if (!C.zf) goto L_111595ca;
  /* 111595c0 push 9 */
  push32((uint32_t)(0x9u));
  /* 111595c2 call 0x111564d0 */
  push32(0x111595c7u); f_111564d0();
  /* 111595c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111595ca:;
  /* 111595ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111595cd push ecx */
  push32((uint32_t)(ECX));
  /* 111595ce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111595d1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111595d3 push eax */
  push32((uint32_t)(EAX));
  /* 111595d4 call 0x1115a510 */
  push32(0x111595d9u); f_1115a510();
  /* 111595d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111595dc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111595df add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111595e2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_111595e5:;
  /* 111595e5 jmp 0x1115956e */
  goto L_1115956e;
L_111595e7:;
  /* 111595e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 111595e9 mov edx, dword ptr [0x111837d8] */
  EDX = (r32((uint32_t)(0x111837d8)));
  /* 111595ef push edx */
  push32((uint32_t)(EDX));
  /* 111595f0 call 0x11157ff0 */
  push32(0x111595f5u); f_11157ff0();
  /* 111595f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111595f8 mov dword ptr [0x111837d8], 0 */
  w32((uint32_t)(0x111837d8), (0x0u));
  /* 11159602 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11159605 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1115960b mov dword ptr [0x11185300], 1 */
  w32((uint32_t)(0x11185300), (0x1u));
  /* 11159615 mov esp, ebp */
  ESP = (EBP);
  /* 11159617 pop ebp */
  EBP = (pop32());
  /* 11159618 ret  */
  ESPCHK(0x111594d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009620 @ 0x11159620 (216 bytes, 69 insns) */
void f_11159620(void) {
  FTRACE(0x11159620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11159620 push ebp */
  push32((uint32_t)(EBP));
  /* 11159621 mov ebp, esp */
  EBP = (ESP);
  /* 11159623 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11159626 cmp dword ptr [0x11185310], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11185310))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115962d jne 0x11159634 */
  if (!C.zf) goto L_11159634;
  /* 1115962f call 0x1115de10 */
  push32(0x11159634u); f_1115de10();
L_11159634:;
  /* 11159634 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11159639 push 0x11183848 */
  push32((uint32_t)(0x11183848u));
  /* 1115963e push 0 */
  push32((uint32_t)(0x0u));
  /* 11159640 call dword ptr [0x111862e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111862e4))), 0x11159646u);
  /* 11159646 mov dword ptr [0x1118381c], 0x11183848 */
  w32((uint32_t)(0x1118381c), (0x11183848u));
  /* 11159650 mov eax, dword ptr [0x1118532c] */
  EAX = (r32((uint32_t)(0x1118532c)));
  /* 11159655 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11159658 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115965a jne 0x11159667 */
  if (!C.zf) goto L_11159667;
  /* 1115965c mov edx, dword ptr [0x1118381c] */
  EDX = (r32((uint32_t)(0x1118381c)));
  /* 11159662 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11159665 jmp 0x1115966f */
  goto L_1115966f;
L_11159667:;
  /* 11159667 mov eax, dword ptr [0x1118532c] */
  EAX = (r32((uint32_t)(0x1118532c)));
  /* 1115966c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_1115966f:;
  /* 1115966f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11159672 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11159675 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11159678 push edx */
  push32((uint32_t)(EDX));
  /* 11159679 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1115967c push eax */
  push32((uint32_t)(EAX));
  /* 1115967d push 0 */
  push32((uint32_t)(0x0u));
  /* 1115967f push 0 */
  push32((uint32_t)(0x0u));
  /* 11159681 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11159684 push ecx */
  push32((uint32_t)(ECX));
  /* 11159685 call 0x11159700 */
  push32(0x1115968au); f_11159700();
  /* 1115968a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115968d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11159692 push 0x1117efe0 */
  push32((uint32_t)(0x1117efe0u));
  /* 11159697 push 2 */
  push32((uint32_t)(0x2u));
  /* 11159699 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115969c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115969f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 111596a2 push ecx */
  push32((uint32_t)(ECX));
  /* 111596a3 call 0x11157560 */
  push32(0x111596a8u); f_11157560();
  /* 111596a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111596ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111596ae cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111596b2 jne 0x111596be */
  if (!C.zf) goto L_111596be;
  /* 111596b4 push 8 */
  push32((uint32_t)(0x8u));
  /* 111596b6 call 0x111564d0 */
  push32(0x111596bbu); f_111564d0();
  /* 111596bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111596be:;
  /* 111596be lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 111596c1 push edx */
  push32((uint32_t)(EDX));
  /* 111596c2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 111596c5 push eax */
  push32((uint32_t)(EAX));
  /* 111596c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111596c9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111596cc lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 111596cf push eax */
  push32((uint32_t)(EAX));
  /* 111596d0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111596d3 push ecx */
  push32((uint32_t)(ECX));
  /* 111596d4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111596d7 push edx */
  push32((uint32_t)(EDX));
  /* 111596d8 call 0x11159700 */
  push32(0x111596ddu); f_11159700();
  /* 111596dd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111596e0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111596e3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111596e6 mov dword ptr [0x11183800], eax */
  w32((uint32_t)(0x11183800), (EAX));
  /* 111596eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111596ee mov dword ptr [0x11183804], ecx */
  w32((uint32_t)(0x11183804), (ECX));
  /* 111596f4 mov esp, ebp */
  ESP = (EBP);
  /* 111596f6 pop ebp */
  EBP = (pop32());
  /* 111596f7 ret  */
  ESPCHK(0x11159620u, _esp0);
  ESP += 4; return;
}

/* FUN_10009700 @ 0x11159700 (1060 bytes, 360 insns) */
void f_11159700(void) {
  FTRACE(0x11159700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11159700 push ebp */
  push32((uint32_t)(EBP));
  /* 11159701 mov ebp, esp */
  EBP = (ESP);
  /* 11159703 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11159706 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11159709 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1115970f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11159712 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 11159718 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115971b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1115971e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159722 je 0x11159735 */
  if (C.zf) goto L_11159735;
  /* 11159724 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11159727 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115972a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1115972c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115972f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159732 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_11159735:;
  /* 11159735 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159738 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1115973b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115973e jne 0x1115980d */
  if (!C.zf) goto L_1115980d;
L_11159744:;
  /* 11159744 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159747 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115974a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1115974d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159750 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11159753 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159756 je 0x111597d2 */
  if (C.zf) goto L_111597d2;
  /* 11159758 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115975b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1115975e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11159760 je 0x111597d2 */
  if (C.zf) goto L_111597d2;
  /* 11159762 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159765 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11159767 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11159769 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115976b mov al, byte ptr [edx + 0x11185061] */
  AL = (r8((uint32_t)(EDX + 0x11185061)));
  /* 11159771 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11159774 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11159776 je 0x111597a7 */
  if (C.zf) goto L_111597a7;
  /* 11159778 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1115977b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1115977d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159780 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11159783 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11159785 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159789 je 0x111597a7 */
  if (C.zf) goto L_111597a7;
  /* 1115978b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115978e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159791 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11159793 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11159795 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11159798 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115979b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1115979e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111597a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111597a4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_111597a7:;
  /* 111597a7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 111597aa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111597ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111597af mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 111597b2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 111597b4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111597b8 je 0x111597cd */
  if (C.zf) goto L_111597cd;
  /* 111597ba mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111597bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111597c0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 111597c2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 111597c4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111597c7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111597ca mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_111597cd:;
  /* 111597cd jmp 0x11159744 */
  goto L_11159744;
L_111597d2:;
  /* 111597d2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 111597d5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111597d7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111597da mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 111597dd mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 111597df cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111597e3 je 0x111597f4 */
  if (C.zf) goto L_111597f4;
  /* 111597e5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111597e8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 111597eb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111597ee add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111597f1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_111597f4:;
  /* 111597f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111597f7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111597fa cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111597fd jne 0x11159808 */
  if (!C.zf) goto L_11159808;
  /* 111597ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159802 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159805 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11159808:;
  /* 11159808 jmp 0x111598dc */
  goto L_111598dc;
L_1115980d:;
  /* 1115980d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11159810 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11159812 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159815 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11159818 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1115981a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115981e je 0x11159833 */
  if (C.zf) goto L_11159833;
  /* 11159820 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11159823 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159826 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11159828 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1115982a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115982d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159830 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11159833:;
  /* 11159833 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159836 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11159838 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1115983b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115983e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159841 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11159844 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11159847 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1115984d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1115984f mov dl, byte ptr [ecx + 0x11185061] */
  DL = (r8((uint32_t)(ECX + 0x11185061)));
  /* 11159855 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11159858 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115985a je 0x1115988b */
  if (C.zf) goto L_1115988b;
  /* 1115985c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1115985f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11159861 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159864 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11159867 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11159869 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115986d je 0x11159882 */
  if (C.zf) goto L_11159882;
  /* 1115986f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11159872 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159875 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11159877 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11159879 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115987c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115987f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11159882:;
  /* 11159882 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159885 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159888 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1115988b:;
  /* 1115988b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115988e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11159894 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159897 je 0x111598b7 */
  if (C.zf) goto L_111598b7;
  /* 11159899 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115989c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111598a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111598a3 je 0x111598b7 */
  if (C.zf) goto L_111598b7;
  /* 111598a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111598a8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 111598ae cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111598b1 jne 0x1115980d */
  if (!C.zf) goto L_1115980d;
L_111598b7:;
  /* 111598b7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111598ba and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 111598c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111598c2 jne 0x111598cf */
  if (!C.zf) goto L_111598cf;
  /* 111598c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111598c7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111598ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111598cd jmp 0x111598dc */
  goto L_111598dc;
L_111598cf:;
  /* 111598cf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111598d3 je 0x111598dc */
  if (C.zf) goto L_111598dc;
  /* 111598d5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111598d8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_111598dc:;
  /* 111598dc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_111598e3:;
  /* 111598e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111598e6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 111598e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111598eb je 0x1115990e */
  if (C.zf) goto L_1115990e;
L_111598ed:;
  /* 111598ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111598f0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 111598f3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111598f6 je 0x11159903 */
  if (C.zf) goto L_11159903;
  /* 111598f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111598fb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111598fe cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159901 jne 0x1115990e */
  if (!C.zf) goto L_1115990e;
L_11159903:;
  /* 11159903 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159906 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159909 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1115990c jmp 0x111598ed */
  goto L_111598ed;
L_1115990e:;
  /* 1115990e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159911 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11159914 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11159916 jne 0x1115991d */
  if (!C.zf) goto L_1115991d;
  /* 11159918 jmp 0x11159afb */
  goto L_11159afb;
L_1115991d:;
  /* 1115991d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159921 je 0x11159934 */
  if (C.zf) goto L_11159934;
  /* 11159923 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11159926 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11159929 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1115992b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115992e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159931 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11159934:;
  /* 11159934 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11159937 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11159939 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115993c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1115993f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11159941:;
  /* 11159941 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11159948 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1115994f:;
  /* 1115994f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159952 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11159955 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159958 jne 0x1115996e */
  if (!C.zf) goto L_1115996e;
  /* 1115995a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115995d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159960 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11159963 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11159966 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159969 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1115996c jmp 0x1115994f */
  goto L_1115994f;
L_1115996e:;
  /* 1115996e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159971 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11159974 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159977 jne 0x111599ca */
  if (!C.zf) goto L_111599ca;
  /* 11159979 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115997c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1115997e mov ecx, 2 */
  ECX = (0x2u);
  /* 11159983 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11159985 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11159987 jne 0x111599c2 */
  if (!C.zf) goto L_111599c2;
  /* 11159989 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115998d je 0x111599af */
  if (C.zf) goto L_111599af;
  /* 1115998f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159992 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11159996 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159999 jne 0x111599a6 */
  if (!C.zf) goto L_111599a6;
  /* 1115999b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115999e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111599a1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111599a4 jmp 0x111599ad */
  goto L_111599ad;
L_111599a6:;
  /* 111599a6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_111599ad:;
  /* 111599ad jmp 0x111599b6 */
  goto L_111599b6;
L_111599af:;
  /* 111599af mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_111599b6:;
  /* 111599b6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111599b8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111599bc sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 111599bf mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_111599c2:;
  /* 111599c2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111599c5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 111599c7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_111599ca:;
  /* 111599ca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111599cd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111599d0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111599d3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 111599d6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111599d8 je 0x111599fe */
  if (C.zf) goto L_111599fe;
  /* 111599da cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111599de je 0x111599ef */
  if (C.zf) goto L_111599ef;
  /* 111599e0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111599e3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 111599e6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111599e9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111599ec mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_111599ef:;
  /* 111599ef mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 111599f2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111599f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111599f7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 111599fa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 111599fc jmp 0x111599ca */
  goto L_111599ca;
L_111599fe:;
  /* 111599fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159a01 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11159a04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11159a06 je 0x11159a24 */
  if (C.zf) goto L_11159a24;
  /* 11159a08 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159a0c jne 0x11159a29 */
  if (!C.zf) goto L_11159a29;
  /* 11159a0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159a11 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11159a14 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159a17 je 0x11159a24 */
  if (C.zf) goto L_11159a24;
  /* 11159a19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159a1c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11159a1f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159a22 jne 0x11159a29 */
  if (!C.zf) goto L_11159a29;
L_11159a24:;
  /* 11159a24 jmp 0x11159ad4 */
  goto L_11159ad4;
L_11159a29:;
  /* 11159a29 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159a2d je 0x11159ac6 */
  if (C.zf) goto L_11159ac6;
  /* 11159a33 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159a37 je 0x11159a8d */
  if (C.zf) goto L_11159a8d;
  /* 11159a39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159a3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11159a3e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11159a40 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11159a42 mov cl, byte ptr [eax + 0x11185061] */
  CL = (r8((uint32_t)(EAX + 0x11185061)));
  /* 11159a48 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11159a4b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11159a4d je 0x11159a78 */
  if (C.zf) goto L_11159a78;
  /* 11159a4f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11159a52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159a55 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11159a57 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11159a59 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11159a5c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159a5f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 11159a62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159a65 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159a68 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11159a6b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11159a6e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11159a70 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159a73 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11159a76 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11159a78:;
  /* 11159a78 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11159a7b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159a7e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11159a80 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11159a82 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11159a85 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159a88 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11159a8b jmp 0x11159ab9 */
  goto L_11159ab9;
L_11159a8d:;
  /* 11159a8d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159a90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11159a92 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11159a94 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11159a96 mov cl, byte ptr [eax + 0x11185061] */
  CL = (r8((uint32_t)(EAX + 0x11185061)));
  /* 11159a9c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11159a9f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11159aa1 je 0x11159ab9 */
  if (C.zf) goto L_11159ab9;
  /* 11159aa3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159aa6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159aa9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11159aac mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11159aaf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11159ab1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159ab4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11159ab7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11159ab9:;
  /* 11159ab9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11159abc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11159abe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159ac1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11159ac4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11159ac6:;
  /* 11159ac6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159ac9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159acc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11159acf jmp 0x11159941 */
  goto L_11159941;
L_11159ad4:;
  /* 11159ad4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159ad8 je 0x11159ae9 */
  if (C.zf) goto L_11159ae9;
  /* 11159ada mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11159add mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11159ae0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11159ae3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159ae6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11159ae9:;
  /* 11159ae9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11159aec mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11159aee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159af1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11159af4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11159af6 jmp 0x111598e3 */
  goto L_111598e3;
L_11159afb:;
  /* 11159afb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159aff je 0x11159b13 */
  if (C.zf) goto L_11159b13;
  /* 11159b01 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11159b04 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11159b0a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11159b0d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159b10 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11159b13:;
  /* 11159b13 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11159b16 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11159b18 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159b1b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11159b1e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11159b20 mov esp, ebp */
  ESP = (EBP);
  /* 11159b22 pop ebp */
  EBP = (pop32());
  /* 11159b23 ret  */
  ESPCHK(0x11159700u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b30 @ 0x11159b30 (537 bytes, 173 insns) */
void f_11159b30(void) {
  FTRACE(0x11159b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11159b30 push ebp */
  push32((uint32_t)(EBP));
  /* 11159b31 mov ebp, esp */
  EBP = (ESP);
  /* 11159b33 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11159b36 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11159b3d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11159b44 cmp dword ptr [0x1118394c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1118394c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159b4b jne 0x11159b8a */
  if (!C.zf) goto L_11159b8a;
  /* 11159b4d call dword ptr [0x11186384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186384))), 0x11159b53u);
  /* 11159b53 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11159b56 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159b5a je 0x11159b68 */
  if (C.zf) goto L_11159b68;
  /* 11159b5c mov dword ptr [0x1118394c], 1 */
  w32((uint32_t)(0x1118394c), (0x1u));
  /* 11159b66 jmp 0x11159b8a */
  goto L_11159b8a;
L_11159b68:;
  /* 11159b68 call dword ptr [0x11186388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186388))), 0x11159b6eu);
  /* 11159b6e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11159b71 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159b75 je 0x11159b83 */
  if (C.zf) goto L_11159b83;
  /* 11159b77 mov dword ptr [0x1118394c], 2 */
  w32((uint32_t)(0x1118394c), (0x2u));
  /* 11159b81 jmp 0x11159b8a */
  goto L_11159b8a;
L_11159b83:;
  /* 11159b83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11159b85 jmp 0x11159d45 */
  goto L_11159d45;
L_11159b8a:;
  /* 11159b8a cmp dword ptr [0x1118394c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1118394c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159b91 jne 0x11159c8e */
  if (!C.zf) goto L_11159c8e;
  /* 11159b97 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159b9b jne 0x11159bb3 */
  if (!C.zf) goto L_11159bb3;
  /* 11159b9d call dword ptr [0x11186384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186384))), 0x11159ba3u);
  /* 11159ba3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11159ba6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159baa jne 0x11159bb3 */
  if (!C.zf) goto L_11159bb3;
  /* 11159bac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11159bae jmp 0x11159d45 */
  goto L_11159d45;
L_11159bb3:;
  /* 11159bb3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11159bb6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11159bb9:;
  /* 11159bb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11159bbc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11159bbe mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11159bc1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11159bc3 je 0x11159be5 */
  if (C.zf) goto L_11159be5;
  /* 11159bc5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11159bc8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159bcb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11159bce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11159bd1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11159bd3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11159bd6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11159bd8 jne 0x11159be3 */
  if (!C.zf) goto L_11159be3;
  /* 11159bda mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11159bdd add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159be0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11159be3:;
  /* 11159be3 jmp 0x11159bb9 */
  goto L_11159bb9;
L_11159be5:;
  /* 11159be5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11159be8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11159beb sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11159bed add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159bf0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11159bf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11159bf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11159bf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11159bf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11159bfb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159bfe push edx */
  push32((uint32_t)(EDX));
  /* 11159bff mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11159c02 push eax */
  push32((uint32_t)(EAX));
  /* 11159c03 push 0 */
  push32((uint32_t)(0x0u));
  /* 11159c05 push 0 */
  push32((uint32_t)(0x0u));
  /* 11159c07 call dword ptr [0x1118638c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118638c))), 0x11159c0du);
  /* 11159c0d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11159c10 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159c14 je 0x11159c34 */
  if (C.zf) goto L_11159c34;
  /* 11159c16 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11159c18 push 0x1117efec */
  push32((uint32_t)(0x1117efecu));
  /* 11159c1d push 2 */
  push32((uint32_t)(0x2u));
  /* 11159c1f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11159c22 push ecx */
  push32((uint32_t)(ECX));
  /* 11159c23 call 0x11157560 */
  push32(0x11159c28u); f_11157560();
  /* 11159c28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11159c2b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11159c2e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159c32 jne 0x11159c45 */
  if (!C.zf) goto L_11159c45;
L_11159c34:;
  /* 11159c34 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11159c37 push edx */
  push32((uint32_t)(EDX));
  /* 11159c38 call dword ptr [0x11186390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186390))), 0x11159c3eu);
  /* 11159c3e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11159c40 jmp 0x11159d45 */
  goto L_11159d45;
L_11159c45:;
  /* 11159c45 push 0 */
  push32((uint32_t)(0x0u));
  /* 11159c47 push 0 */
  push32((uint32_t)(0x0u));
  /* 11159c49 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11159c4c push eax */
  push32((uint32_t)(EAX));
  /* 11159c4d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11159c50 push ecx */
  push32((uint32_t)(ECX));
  /* 11159c51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159c54 push edx */
  push32((uint32_t)(EDX));
  /* 11159c55 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11159c58 push eax */
  push32((uint32_t)(EAX));
  /* 11159c59 push 0 */
  push32((uint32_t)(0x0u));
  /* 11159c5b push 0 */
  push32((uint32_t)(0x0u));
  /* 11159c5d call dword ptr [0x1118638c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118638c))), 0x11159c63u);
  /* 11159c63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11159c65 jne 0x11159c7c */
  if (!C.zf) goto L_11159c7c;
  /* 11159c67 push 2 */
  push32((uint32_t)(0x2u));
  /* 11159c69 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11159c6c push ecx */
  push32((uint32_t)(ECX));
  /* 11159c6d call 0x11157ff0 */
  push32(0x11159c72u); f_11157ff0();
  /* 11159c72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11159c75 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_11159c7c:;
  /* 11159c7c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11159c7f push edx */
  push32((uint32_t)(EDX));
  /* 11159c80 call dword ptr [0x11186390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186390))), 0x11159c86u);
  /* 11159c86 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11159c89 jmp 0x11159d45 */
  goto L_11159d45;
L_11159c8e:;
  /* 11159c8e cmp dword ptr [0x1118394c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1118394c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159c95 jne 0x11159d43 */
  if (!C.zf) goto L_11159d43;
  /* 11159c9b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159c9f jne 0x11159cb7 */
  if (!C.zf) goto L_11159cb7;
  /* 11159ca1 call dword ptr [0x11186388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186388))), 0x11159ca7u);
  /* 11159ca7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11159caa cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159cae jne 0x11159cb7 */
  if (!C.zf) goto L_11159cb7;
  /* 11159cb0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11159cb2 jmp 0x11159d45 */
  goto L_11159d45;
L_11159cb7:;
  /* 11159cb7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11159cba mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11159cbd:;
  /* 11159cbd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11159cc0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11159cc3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11159cc5 je 0x11159ce5 */
  if (C.zf) goto L_11159ce5;
  /* 11159cc7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11159cca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159ccd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11159cd0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11159cd3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11159cd6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11159cd8 jne 0x11159ce3 */
  if (!C.zf) goto L_11159ce3;
  /* 11159cda mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11159cdd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159ce0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11159ce3:;
  /* 11159ce3 jmp 0x11159cbd */
  goto L_11159cbd;
L_11159ce5:;
  /* 11159ce5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11159ce8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11159ceb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159cee mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11159cf1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 11159cf6 push 0x1117efec */
  push32((uint32_t)(0x1117efecu));
  /* 11159cfb push 2 */
  push32((uint32_t)(0x2u));
  /* 11159cfd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11159d00 push edx */
  push32((uint32_t)(EDX));
  /* 11159d01 call 0x11157560 */
  push32(0x11159d06u); f_11157560();
  /* 11159d06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11159d09 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11159d0c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159d10 jne 0x11159d20 */
  if (!C.zf) goto L_11159d20;
  /* 11159d12 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11159d15 push eax */
  push32((uint32_t)(EAX));
  /* 11159d16 call dword ptr [0x11186394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186394))), 0x11159d1cu);
  /* 11159d1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11159d1e jmp 0x11159d45 */
  goto L_11159d45;
L_11159d20:;
  /* 11159d20 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11159d23 push ecx */
  push32((uint32_t)(ECX));
  /* 11159d24 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11159d27 push edx */
  push32((uint32_t)(EDX));
  /* 11159d28 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11159d2b push eax */
  push32((uint32_t)(EAX));
  /* 11159d2c call 0x1115de40 */
  push32(0x11159d31u); f_1115de40();
  /* 11159d31 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11159d34 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11159d37 push ecx */
  push32((uint32_t)(ECX));
  /* 11159d38 call dword ptr [0x11186394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186394))), 0x11159d3eu);
  /* 11159d3e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11159d41 jmp 0x11159d45 */
  goto L_11159d45;
L_11159d43:;
  /* 11159d43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11159d45:;
  /* 11159d45 mov esp, ebp */
  ESP = (EBP);
  /* 11159d47 pop ebp */
  EBP = (pop32());
  /* 11159d48 ret  */
  ESPCHK(0x11159b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d50 @ 0x11159d50 (77 bytes, 25 insns) */
void f_11159d50(void) {
  FTRACE(0x11159d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11159d50 push ebp */
  push32((uint32_t)(EBP));
  /* 11159d51 mov ebp, esp */
  EBP = (ESP);
  /* 11159d53 push 0 */
  push32((uint32_t)(0x0u));
  /* 11159d55 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11159d5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11159d5c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159d60 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11159d63 push eax */
  push32((uint32_t)(EAX));
  /* 11159d64 call dword ptr [0x1118637c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118637c))), 0x11159d6au);
  /* 11159d6a mov dword ptr [0x1118518c], eax */
  w32((uint32_t)(0x1118518c), (EAX));
  /* 11159d6f cmp dword ptr [0x1118518c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1118518c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159d76 jne 0x11159d7c */
  if (!C.zf) goto L_11159d7c;
  /* 11159d78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11159d7a jmp 0x11159d9b */
  goto L_11159d9b;
L_11159d7c:;
  /* 11159d7c call 0x1115b800 */
  push32(0x11159d81u); f_1115b800();
  /* 11159d81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11159d83 jne 0x11159d96 */
  if (!C.zf) goto L_11159d96;
  /* 11159d85 mov ecx, dword ptr [0x1118518c] */
  ECX = (r32((uint32_t)(0x1118518c)));
  /* 11159d8b push ecx */
  push32((uint32_t)(ECX));
  /* 11159d8c call dword ptr [0x11186380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186380))), 0x11159d92u);
  /* 11159d92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11159d94 jmp 0x11159d9b */
  goto L_11159d9b;
L_11159d96:;
  /* 11159d96 mov eax, 1 */
  EAX = (0x1u);
L_11159d9b:;
  /* 11159d9b pop ebp */
  EBP = (pop32());
  /* 11159d9c ret  */
  ESPCHK(0x11159d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10009da0 @ 0x11159da0 (156 bytes, 48 insns) */
void f_11159da0(void) {
  FTRACE(0x11159da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11159da0 push ebp */
  push32((uint32_t)(EBP));
  /* 11159da1 mov ebp, esp */
  EBP = (ESP);
  /* 11159da3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11159da6 mov eax, dword ptr [0x11185188] */
  EAX = (r32((uint32_t)(0x11185188)));
  /* 11159dab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11159dae mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11159db5 jmp 0x11159dc0 */
  goto L_11159dc0;
L_11159db7:;
  /* 11159db7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159dba add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159dbd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11159dc0:;
  /* 11159dc0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11159dc3 cmp edx, dword ptr [0x11185184] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11185184))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159dc9 jge 0x11159e16 */
  if ((C.sf==C.of)) goto L_11159e16;
  /* 11159dcb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11159dd0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11159dd5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11159dd8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11159ddb push ecx */
  push32((uint32_t)(ECX));
  /* 11159ddc call dword ptr [0x11186374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186374))), 0x11159de2u);
  /* 11159de2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11159de7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11159de9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11159dec mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11159def push eax */
  push32((uint32_t)(EAX));
  /* 11159df0 call dword ptr [0x11186374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186374))), 0x11159df6u);
  /* 11159df6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11159df9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11159dfc push edx */
  push32((uint32_t)(EDX));
  /* 11159dfd push 0 */
  push32((uint32_t)(0x0u));
  /* 11159dff mov eax, dword ptr [0x1118518c] */
  EAX = (r32((uint32_t)(0x1118518c)));
  /* 11159e04 push eax */
  push32((uint32_t)(EAX));
  /* 11159e05 call dword ptr [0x11186378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186378))), 0x11159e0bu);
  /* 11159e0b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11159e0e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159e11 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11159e14 jmp 0x11159db7 */
  goto L_11159db7;
L_11159e16:;
  /* 11159e16 mov edx, dword ptr [0x11185188] */
  EDX = (r32((uint32_t)(0x11185188)));
  /* 11159e1c push edx */
  push32((uint32_t)(EDX));
  /* 11159e1d push 0 */
  push32((uint32_t)(0x0u));
  /* 11159e1f mov eax, dword ptr [0x1118518c] */
  EAX = (r32((uint32_t)(0x1118518c)));
  /* 11159e24 push eax */
  push32((uint32_t)(EAX));
  /* 11159e25 call dword ptr [0x11186378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186378))), 0x11159e2bu);
  /* 11159e2b mov ecx, dword ptr [0x1118518c] */
  ECX = (r32((uint32_t)(0x1118518c)));
  /* 11159e31 push ecx */
  push32((uint32_t)(ECX));
  /* 11159e32 call dword ptr [0x11186380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186380))), 0x11159e38u);
  /* 11159e38 mov esp, ebp */
  ESP = (EBP);
  /* 11159e3a pop ebp */
  EBP = (pop32());
  /* 11159e3b ret  */
  ESPCHK(0x11159da0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x11159e40 (73 bytes, 19 insns) */
void f_11159e40(void) {
  FTRACE(0x11159e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11159e40 push ebp */
  push32((uint32_t)(EBP));
  /* 11159e41 mov ebp, esp */
  EBP = (ESP);
  /* 11159e43 cmp dword ptr [0x111837e0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111837e0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159e4a je 0x11159e5e */
  if (C.zf) goto L_11159e5e;
  /* 11159e4c cmp dword ptr [0x111837e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111837e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159e53 jne 0x11159e87 */
  if (!C.zf) goto L_11159e87;
  /* 11159e55 cmp dword ptr [0x111837e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111837e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159e5c jne 0x11159e87 */
  if (!C.zf) goto L_11159e87;
L_11159e5e:;
  /* 11159e5e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11159e63 call 0x11159e90 */
  push32(0x11159e68u); f_11159e90();
  /* 11159e68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11159e6b cmp dword ptr [0x11183950], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183950))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159e72 je 0x11159e7a */
  if (C.zf) goto L_11159e7a;
  /* 11159e74 call dword ptr [0x11183950] */
  call_ind((uint32_t)(r32((uint32_t)(0x11183950))), 0x11159e7au);
L_11159e7a:;
  /* 11159e7a push 0xff */
  push32((uint32_t)(0xffu));
  /* 11159e7f call 0x11159e90 */
  push32(0x11159e84u); f_11159e90();
  /* 11159e84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11159e87:;
  /* 11159e87 pop ebp */
  EBP = (pop32());
  /* 11159e88 ret  */
  ESPCHK(0x11159e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e90 @ 0x11159e90 (447 bytes, 131 insns) */
void f_11159e90(void) {
  FTRACE(0x11159e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11159e90 push ebp */
  push32((uint32_t)(EBP));
  /* 11159e91 mov ebp, esp */
  EBP = (ESP);
  /* 11159e93 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11159e99 push ebx */
  push32((uint32_t)(EBX));
  /* 11159e9a push esi */
  push32((uint32_t)(ESI));
  /* 11159e9b push edi */
  push32((uint32_t)(EDI));
  /* 11159e9c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11159ea3 jmp 0x11159eae */
  goto L_11159eae;
L_11159ea5:;
  /* 11159ea5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11159ea8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159eab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11159eae:;
  /* 11159eae cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159eb2 jae 0x11159ec7 */
  if (!C.cf) goto L_11159ec7;
  /* 11159eb4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11159eb7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11159eba cmp edx, dword ptr [ecx*8 + 0x11181ab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x11181ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159ec1 jne 0x11159ec5 */
  if (!C.zf) goto L_11159ec5;
  /* 11159ec3 jmp 0x11159ec7 */
  goto L_11159ec7;
L_11159ec5:;
  /* 11159ec5 jmp 0x11159ea5 */
  goto L_11159ea5;
L_11159ec7:;
  /* 11159ec7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11159eca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11159ecd cmp ecx, dword ptr [eax*8 + 0x11181ab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11181ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159ed4 jne 0x1115a048 */
  if (!C.zf) goto L_1115a048;
  /* 11159eda cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159ee1 je 0x11159f04 */
  if (C.zf) goto L_11159f04;
  /* 11159ee3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11159ee6 mov eax, dword ptr [edx*8 + 0x11181ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11181ab4)));
  /* 11159eed push eax */
  push32((uint32_t)(EAX));
  /* 11159eee push 0 */
  push32((uint32_t)(0x0u));
  /* 11159ef0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11159ef2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11159ef4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11159ef6 call 0x11156620 */
  push32(0x11159efbu); f_11156620();
  /* 11159efb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11159efe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159f01 jne 0x11159f04 */
  if (!C.zf) goto L_11159f04;
  /* 11159f03 int3  */
  x86_unimpl("int3 @ 0x11159f03");
L_11159f04:;
  /* 11159f04 cmp dword ptr [0x111837e0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111837e0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159f0b je 0x11159f1f */
  if (C.zf) goto L_11159f1f;
  /* 11159f0d cmp dword ptr [0x111837e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111837e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159f14 jne 0x11159f58 */
  if (!C.zf) goto L_11159f58;
  /* 11159f16 cmp dword ptr [0x111837e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111837e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159f1d jne 0x11159f58 */
  if (!C.zf) goto L_11159f58;
L_11159f1f:;
  /* 11159f1f push 0 */
  push32((uint32_t)(0x0u));
  /* 11159f21 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11159f24 push ecx */
  push32((uint32_t)(ECX));
  /* 11159f25 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11159f28 mov eax, dword ptr [edx*8 + 0x11181ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11181ab4)));
  /* 11159f2f push eax */
  push32((uint32_t)(EAX));
  /* 11159f30 call 0x1115a390 */
  push32(0x11159f35u); f_1115a390();
  /* 11159f35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11159f38 push eax */
  push32((uint32_t)(EAX));
  /* 11159f39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11159f3c mov edx, dword ptr [ecx*8 + 0x11181ab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x11181ab4)));
  /* 11159f43 push edx */
  push32((uint32_t)(EDX));
  /* 11159f44 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11159f46 call dword ptr [0x111863c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863c0))), 0x11159f4cu);
  /* 11159f4c push eax */
  push32((uint32_t)(EAX));
  /* 11159f4d call dword ptr [0x111863c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863c4))), 0x11159f53u);
  /* 11159f53 jmp 0x1115a048 */
  goto L_1115a048;
L_11159f58:;
  /* 11159f58 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159f5f je 0x1115a048 */
  if (C.zf) goto L_1115a048;
  /* 11159f65 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11159f6a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 11159f70 push eax */
  push32((uint32_t)(EAX));
  /* 11159f71 push 0 */
  push32((uint32_t)(0x0u));
  /* 11159f73 call dword ptr [0x111862e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111862e4))), 0x11159f79u);
  /* 11159f79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11159f7b jne 0x11159f91 */
  if (!C.zf) goto L_11159f91;
  /* 11159f7d push 0x1117e854 */
  push32((uint32_t)(0x1117e854u));
  /* 11159f82 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11159f88 push ecx */
  push32((uint32_t)(ECX));
  /* 11159f89 call 0x1115a510 */
  push32(0x11159f8eu); f_1115a510();
  /* 11159f8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11159f91:;
  /* 11159f91 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 11159f97 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11159f9a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11159f9d push eax */
  push32((uint32_t)(EAX));
  /* 11159f9e call 0x1115a390 */
  push32(0x11159fa3u); f_1115a390();
  /* 11159fa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11159fa6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11159fa9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11159fac jbe 0x11159fda */
  if ((C.cf||C.zf)) goto L_11159fda;
  /* 11159fae lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11159fb4 push ecx */
  push32((uint32_t)(ECX));
  /* 11159fb5 call 0x1115a390 */
  push32(0x11159fbau); f_1115a390();
  /* 11159fba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11159fbd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11159fc0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 11159fc4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11159fc7 push 3 */
  push32((uint32_t)(0x3u));
  /* 11159fc9 push 0x1117e850 */
  push32((uint32_t)(0x1117e850u));
  /* 11159fce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11159fd1 push ecx */
  push32((uint32_t)(ECX));
  /* 11159fd2 call 0x1115ad80 */
  push32(0x11159fd7u); f_1115ad80();
  /* 11159fd7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11159fda:;
  /* 11159fda push 0x1117f2a8 */
  push32((uint32_t)(0x1117f2a8u));
  /* 11159fdf lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11159fe5 push edx */
  push32((uint32_t)(EDX));
  /* 11159fe6 call 0x1115a510 */
  push32(0x11159febu); f_1115a510();
  /* 11159feb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11159fee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11159ff1 push eax */
  push32((uint32_t)(EAX));
  /* 11159ff2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 11159ff8 push ecx */
  push32((uint32_t)(ECX));
  /* 11159ff9 call 0x1115a520 */
  push32(0x11159ffeu); f_1115a520();
  /* 11159ffe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a001 push 0x1117e7c8 */
  push32((uint32_t)(0x1117e7c8u));
  /* 1115a006 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 1115a00c push edx */
  push32((uint32_t)(EDX));
  /* 1115a00d call 0x1115a520 */
  push32(0x1115a012u); f_1115a520();
  /* 1115a012 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a015 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115a018 mov ecx, dword ptr [eax*8 + 0x11181ab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x11181ab4)));
  /* 1115a01f push ecx */
  push32((uint32_t)(ECX));
  /* 1115a020 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 1115a026 push edx */
  push32((uint32_t)(EDX));
  /* 1115a027 call 0x1115a520 */
  push32(0x1115a02cu); f_1115a520();
  /* 1115a02c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a02f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 1115a034 push 0x1117f280 */
  push32((uint32_t)(0x1117f280u));
  /* 1115a039 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 1115a03f push eax */
  push32((uint32_t)(EAX));
  /* 1115a040 call 0x1115acc0 */
  push32(0x1115a045u); f_1115acc0();
  /* 1115a045 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1115a048:;
  /* 1115a048 pop edi */
  EDI = (pop32());
  /* 1115a049 pop esi */
  ESI = (pop32());
  /* 1115a04a pop ebx */
  EBX = (pop32());
  /* 1115a04b mov esp, ebp */
  ESP = (EBP);
  /* 1115a04d pop ebp */
  EBP = (pop32());
  /* 1115a04e ret  */
  ESPCHK(0x11159e90u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x1115a050 (80 bytes, 27 insns) */
void f_1115a050(void) {
  FTRACE(0x1115a050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115a050 push ebp */
  push32((uint32_t)(EBP));
  /* 1115a051 mov ebp, esp */
  EBP = (ESP);
  /* 1115a053 push ecx */
  push32((uint32_t)(ECX));
  /* 1115a054 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1115a05b jmp 0x1115a066 */
  goto L_1115a066;
L_1115a05d:;
  /* 1115a05d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115a060 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a063 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1115a066:;
  /* 1115a066 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a06a jae 0x1115a07f */
  if (!C.cf) goto L_1115a07f;
  /* 1115a06c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115a06f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115a072 cmp edx, dword ptr [ecx*8 + 0x11181ab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x11181ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a079 jne 0x1115a07d */
  if (!C.zf) goto L_1115a07d;
  /* 1115a07b jmp 0x1115a07f */
  goto L_1115a07f;
L_1115a07d:;
  /* 1115a07d jmp 0x1115a05d */
  goto L_1115a05d;
L_1115a07f:;
  /* 1115a07f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115a082 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115a085 cmp ecx, dword ptr [eax*8 + 0x11181ab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11181ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a08c jne 0x1115a09a */
  if (!C.zf) goto L_1115a09a;
  /* 1115a08e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115a091 mov eax, dword ptr [edx*8 + 0x11181ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11181ab4)));
  /* 1115a098 jmp 0x1115a09c */
  goto L_1115a09c;
L_1115a09a:;
  /* 1115a09a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1115a09c:;
  /* 1115a09c mov esp, ebp */
  ESP = (EBP);
  /* 1115a09e pop ebp */
  EBP = (pop32());
  /* 1115a09f ret  */
  ESPCHK(0x1115a050u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x1115a0a0 (66 bytes, 28 insns) */
void f_1115a0a0(void) {
  FTRACE(0x1115a0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115a0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1115a0a1 mov ebp, esp */
  EBP = (ESP);
  /* 1115a0a3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a0a7 jne 0x1115a0c7 */
  if (!C.zf) goto L_1115a0c7;
  /* 1115a0a9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a0ad jge 0x1115a0c7 */
  if ((C.sf==C.of)) goto L_1115a0c7;
  /* 1115a0af push 1 */
  push32((uint32_t)(0x1u));
  /* 1115a0b1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115a0b4 push eax */
  push32((uint32_t)(EAX));
  /* 1115a0b5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115a0b8 push ecx */
  push32((uint32_t)(ECX));
  /* 1115a0b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115a0bc push edx */
  push32((uint32_t)(EDX));
  /* 1115a0bd call 0x1115a0f0 */
  push32(0x1115a0c2u); f_1115a0f0();
  /* 1115a0c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a0c5 jmp 0x1115a0dd */
  goto L_1115a0dd;
L_1115a0c7:;
  /* 1115a0c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115a0c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115a0cc push eax */
  push32((uint32_t)(EAX));
  /* 1115a0cd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115a0d0 push ecx */
  push32((uint32_t)(ECX));
  /* 1115a0d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115a0d4 push edx */
  push32((uint32_t)(EDX));
  /* 1115a0d5 call 0x1115a0f0 */
  push32(0x1115a0dau); f_1115a0f0();
  /* 1115a0da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1115a0dd:;
  /* 1115a0dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115a0e0 pop ebp */
  EBP = (pop32());
  /* 1115a0e1 ret  */
  ESPCHK(0x1115a0a0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x1115a0f0 (194 bytes, 71 insns) */
void f_1115a0f0(void) {
  FTRACE(0x1115a0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115a0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1115a0f1 mov ebp, esp */
  EBP = (ESP);
  /* 1115a0f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115a0f6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115a0f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1115a0fc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a100 je 0x1115a119 */
  if (C.zf) goto L_1115a119;
  /* 1115a102 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115a105 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 1115a108 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115a10b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a10e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1115a111 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115a114 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1115a116 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1115a119:;
  /* 1115a119 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115a11c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1115a11f:;
  /* 1115a11f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115a122 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1115a124 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1115a127 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1115a12a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115a12d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1115a12f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1115a132 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1115a135 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a139 jbe 0x1115a151 */
  if ((C.cf||C.zf)) goto L_1115a151;
  /* 1115a13b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115a13e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a141 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115a144 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1115a146 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115a149 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a14c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1115a14f jmp 0x1115a165 */
  goto L_1115a165;
L_1115a151:;
  /* 1115a151 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115a154 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a157 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115a15a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1115a15c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115a15f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a162 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1115a165:;
  /* 1115a165 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a169 ja 0x1115a11f */
  if ((!C.cf&&!C.zf)) goto L_1115a11f;
  /* 1115a16b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115a16e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1115a171 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115a174 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115a177 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1115a17a:;
  /* 1115a17a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115a17d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1115a17f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 1115a182 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115a185 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115a188 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1115a18a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1115a18c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115a18f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 1115a192 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1115a194 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115a197 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115a19a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1115a19d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115a1a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a1a3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1115a1a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115a1a9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a1ac jb 0x1115a17a */
  if (C.cf) goto L_1115a17a;
  /* 1115a1ae mov esp, ebp */
  ESP = (EBP);
  /* 1115a1b0 pop ebp */
  EBP = (pop32());
  /* 1115a1b1 ret  */
  ESPCHK(0x1115a0f0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x1115a1c0 (63 bytes, 24 insns) */
void f_1115a1c0(void) {
  FTRACE(0x1115a1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115a1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1115a1c1 mov ebp, esp */
  EBP = (ESP);
  /* 1115a1c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1115a1c4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a1c8 jne 0x1115a1d9 */
  if (!C.zf) goto L_1115a1d9;
  /* 1115a1ca cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a1ce jge 0x1115a1d9 */
  if ((C.sf==C.of)) goto L_1115a1d9;
  /* 1115a1d0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1115a1d7 jmp 0x1115a1e0 */
  goto L_1115a1e0;
L_1115a1d9:;
  /* 1115a1d9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1115a1e0:;
  /* 1115a1e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115a1e3 push eax */
  push32((uint32_t)(EAX));
  /* 1115a1e4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115a1e7 push ecx */
  push32((uint32_t)(ECX));
  /* 1115a1e8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115a1eb push edx */
  push32((uint32_t)(EDX));
  /* 1115a1ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115a1ef push eax */
  push32((uint32_t)(EAX));
  /* 1115a1f0 call 0x1115a0f0 */
  push32(0x1115a1f5u); f_1115a0f0();
  /* 1115a1f5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a1f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115a1fb mov esp, ebp */
  ESP = (EBP);
  /* 1115a1fd pop ebp */
  EBP = (pop32());
  /* 1115a1fe ret  */
  ESPCHK(0x1115a1c0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x1115a200 (30 bytes, 14 insns) */
void f_1115a200(void) {
  FTRACE(0x1115a200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115a200 push ebp */
  push32((uint32_t)(EBP));
  /* 1115a201 mov ebp, esp */
  EBP = (ESP);
  /* 1115a203 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115a205 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115a208 push eax */
  push32((uint32_t)(EAX));
  /* 1115a209 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115a20c push ecx */
  push32((uint32_t)(ECX));
  /* 1115a20d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115a210 push edx */
  push32((uint32_t)(EDX));
  /* 1115a211 call 0x1115a0f0 */
  push32(0x1115a216u); f_1115a0f0();
  /* 1115a216 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a219 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115a21c pop ebp */
  EBP = (pop32());
  /* 1115a21d ret  */
  ESPCHK(0x1115a200u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x1115a220 (72 bytes, 28 insns) */
void f_1115a220(void) {
  FTRACE(0x1115a220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115a220 push ebp */
  push32((uint32_t)(EBP));
  /* 1115a221 mov ebp, esp */
  EBP = (ESP);
  /* 1115a223 push ecx */
  push32((uint32_t)(ECX));
  /* 1115a224 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a228 jne 0x1115a241 */
  if (!C.zf) goto L_1115a241;
  /* 1115a22a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a22e jg 0x1115a241 */
  if ((!C.zf&&C.sf==C.of)) goto L_1115a241;
  /* 1115a230 jl 0x1115a238 */
  if ((C.sf!=C.of)) goto L_1115a238;
  /* 1115a232 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a236 jae 0x1115a241 */
  if (!C.cf) goto L_1115a241;
L_1115a238:;
  /* 1115a238 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1115a23f jmp 0x1115a248 */
  goto L_1115a248;
L_1115a241:;
  /* 1115a241 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1115a248:;
  /* 1115a248 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115a24b push eax */
  push32((uint32_t)(EAX));
  /* 1115a24c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1115a24f push ecx */
  push32((uint32_t)(ECX));
  /* 1115a250 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115a253 push edx */
  push32((uint32_t)(EDX));
  /* 1115a254 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115a257 push eax */
  push32((uint32_t)(EAX));
  /* 1115a258 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115a25b push ecx */
  push32((uint32_t)(ECX));
  /* 1115a25c call 0x1115a270 */
  push32(0x1115a261u); f_1115a270();
  /* 1115a261 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115a264 mov esp, ebp */
  ESP = (EBP);
  /* 1115a266 pop ebp */
  EBP = (pop32());
  /* 1115a267 ret  */
  ESPCHK(0x1115a220u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x1115a270 (242 bytes, 91 insns) */
void f_1115a270(void) {
  FTRACE(0x1115a270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115a270 push ebp */
  push32((uint32_t)(EBP));
  /* 1115a271 mov ebp, esp */
  EBP = (ESP);
  /* 1115a273 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115a276 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115a279 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1115a27c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a280 je 0x1115a2a4 */
  if (C.zf) goto L_1115a2a4;
  /* 1115a282 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115a285 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 1115a288 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115a28b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a28e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1115a291 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115a294 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1115a296 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115a299 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a29c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1115a29e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1115a2a1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1115a2a4:;
  /* 1115a2a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115a2a7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1115a2aa:;
  /* 1115a2aa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1115a2ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1115a2af push ecx */
  push32((uint32_t)(ECX));
  /* 1115a2b0 push eax */
  push32((uint32_t)(EAX));
  /* 1115a2b1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115a2b4 push edx */
  push32((uint32_t)(EDX));
  /* 1115a2b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115a2b8 push eax */
  push32((uint32_t)(EAX));
  /* 1115a2b9 call 0x1115e1f0 */
  push32(0x1115a2beu); f_1115e1f0();
  /* 1115a2be mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1115a2c1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1115a2c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1115a2c6 push edx */
  push32((uint32_t)(EDX));
  /* 1115a2c7 push ecx */
  push32((uint32_t)(ECX));
  /* 1115a2c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115a2cb push eax */
  push32((uint32_t)(EAX));
  /* 1115a2cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115a2cf push ecx */
  push32((uint32_t)(ECX));
  /* 1115a2d0 call 0x1115e180 */
  push32(0x1115a2d5u); f_1115e180();
  /* 1115a2d5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1115a2d8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1115a2db cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a2df jbe 0x1115a2f7 */
  if ((C.cf||C.zf)) goto L_1115a2f7;
  /* 1115a2e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115a2e4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a2e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115a2ea mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1115a2ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115a2ef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a2f2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1115a2f5 jmp 0x1115a30b */
  goto L_1115a30b;
L_1115a2f7:;
  /* 1115a2f7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115a2fa add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a2fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115a300 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1115a302 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115a305 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a308 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1115a30b:;
  /* 1115a30b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a30f ja 0x1115a2aa */
  if ((!C.cf&&!C.zf)) goto L_1115a2aa;
  /* 1115a311 jb 0x1115a319 */
  if (C.cf) goto L_1115a319;
  /* 1115a313 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a317 ja 0x1115a2aa */
  if ((!C.cf&&!C.zf)) goto L_1115a2aa;
L_1115a319:;
  /* 1115a319 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115a31c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1115a31f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115a322 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115a325 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1115a328:;
  /* 1115a328 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115a32b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1115a32d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 1115a330 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115a333 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115a336 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1115a338 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1115a33a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115a33d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 1115a340 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1115a342 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115a345 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115a348 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1115a34b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115a34e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a351 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1115a354 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115a357 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a35a jb 0x1115a328 */
  if (C.cf) goto L_1115a328;
  /* 1115a35c mov esp, ebp */
  ESP = (EBP);
  /* 1115a35e pop ebp */
  EBP = (pop32());
  /* 1115a35f ret 0x14 */
  ESPCHK(0x1115a270u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x1115a370 (31 bytes, 15 insns) */
void f_1115a370(void) {
  FTRACE(0x1115a370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115a370 push ebp */
  push32((uint32_t)(EBP));
  /* 1115a371 mov ebp, esp */
  EBP = (ESP);
  /* 1115a373 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115a375 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1115a378 push eax */
  push32((uint32_t)(EAX));
  /* 1115a379 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115a37c push ecx */
  push32((uint32_t)(ECX));
  /* 1115a37d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115a380 push edx */
  push32((uint32_t)(EDX));
  /* 1115a381 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115a384 push eax */
  push32((uint32_t)(EAX));
  /* 1115a385 call 0x1115a270 */
  push32(0x1115a38au); f_1115a270();
  /* 1115a38a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115a38d pop ebp */
  EBP = (pop32());
  /* 1115a38e ret  */
  ESPCHK(0x1115a370u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x1115a390 (123 bytes, 44 insns) */
void f_1115a390(void) {
  FTRACE(0x1115a390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115a390 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1115a394 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1115a39a je 0x1115a3b0 */
  if (C.zf) goto L_1115a3b0;
L_1115a39c:;
  /* 1115a39c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1115a39e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1115a39f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1115a3a1 je 0x1115a3e3 */
  if (C.zf) goto L_1115a3e3;
  /* 1115a3a3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1115a3a9 jne 0x1115a39c */
  if (!C.zf) goto L_1115a39c;
  /* 1115a3ab add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1115a3b0:;
  /* 1115a3b0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1115a3b2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1115a3b7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a3b9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1115a3bc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1115a3be add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a3c1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1115a3c6 je 0x1115a3b0 */
  if (C.zf) goto L_1115a3b0;
  /* 1115a3c8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1115a3cb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1115a3cd je 0x1115a401 */
  if (C.zf) goto L_1115a401;
  /* 1115a3cf test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1115a3d1 je 0x1115a3f7 */
  if (C.zf) goto L_1115a3f7;
  /* 1115a3d3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 1115a3d8 je 0x1115a3ed */
  if (C.zf) goto L_1115a3ed;
  /* 1115a3da test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1115a3df je 0x1115a3e3 */
  if (C.zf) goto L_1115a3e3;
  /* 1115a3e1 jmp 0x1115a3b0 */
  goto L_1115a3b0;
L_1115a3e3:;
  /* 1115a3e3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 1115a3e6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1115a3ea sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115a3ec ret  */
  ESPCHK(0x1115a390u, _esp0);
  ESP += 4; return;
L_1115a3ed:;
  /* 1115a3ed lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 1115a3f0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1115a3f4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115a3f6 ret  */
  ESPCHK(0x1115a390u, _esp0);
  ESP += 4; return;
L_1115a3f7:;
  /* 1115a3f7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1115a3fa mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1115a3fe sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115a400 ret  */
  ESPCHK(0x1115a390u, _esp0);
  ESP += 4; return;
L_1115a401:;
  /* 1115a401 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 1115a404 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1115a408 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115a40a ret  */
  ESPCHK(0x1115a390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a410 @ 0x1115a410 (249 bytes, 93 insns) */
void f_1115a410(void) {
  FTRACE(0x1115a410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115a410 push ebp */
  push32((uint32_t)(EBP));
  /* 1115a411 mov ebp, esp */
  EBP = (ESP);
  /* 1115a413 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115a416 push ebx */
  push32((uint32_t)(EBX));
  /* 1115a417 push esi */
  push32((uint32_t)(ESI));
  /* 1115a418 push edi */
  push32((uint32_t)(EDI));
  /* 1115a419 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1115a41c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1115a41f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 1115a422 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1115a425:;
  /* 1115a425 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a429 jne 0x1115a449 */
  if (!C.zf) goto L_1115a449;
  /* 1115a42b push 0x1117f2e0 */
  push32((uint32_t)(0x1117f2e0u));
  /* 1115a430 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115a432 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1115a434 push 0x1117f2d4 */
  push32((uint32_t)(0x1117f2d4u));
  /* 1115a439 push 2 */
  push32((uint32_t)(0x2u));
  /* 1115a43b call 0x11156620 */
  push32(0x1115a440u); f_11156620();
  /* 1115a440 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a443 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a446 jne 0x1115a449 */
  if (!C.zf) goto L_1115a449;
  /* 1115a448 int3  */
  x86_unimpl("int3 @ 0x1115a448");
L_1115a449:;
  /* 1115a449 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1115a44b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115a44d jne 0x1115a425 */
  if (!C.zf) goto L_1115a425;
L_1115a44f:;
  /* 1115a44f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a453 jne 0x1115a473 */
  if (!C.zf) goto L_1115a473;
  /* 1115a455 push 0x1117f2c4 */
  push32((uint32_t)(0x1117f2c4u));
  /* 1115a45a push 0 */
  push32((uint32_t)(0x0u));
  /* 1115a45c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1115a45e push 0x1117f2d4 */
  push32((uint32_t)(0x1117f2d4u));
  /* 1115a463 push 2 */
  push32((uint32_t)(0x2u));
  /* 1115a465 call 0x11156620 */
  push32(0x1115a46au); f_11156620();
  /* 1115a46a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a46d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a470 jne 0x1115a473 */
  if (!C.zf) goto L_1115a473;
  /* 1115a472 int3  */
  x86_unimpl("int3 @ 0x1115a472");
L_1115a473:;
  /* 1115a473 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115a475 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115a477 jne 0x1115a44f */
  if (!C.zf) goto L_1115a44f;
  /* 1115a479 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115a47c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1115a483 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115a486 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115a489 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1115a48c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115a48f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115a492 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1115a494 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115a497 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115a49a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1115a49d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1115a4a0 push edx */
  push32((uint32_t)(EDX));
  /* 1115a4a1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115a4a4 push eax */
  push32((uint32_t)(EAX));
  /* 1115a4a5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115a4a8 push ecx */
  push32((uint32_t)(ECX));
  /* 1115a4a9 call 0x1115e4f0 */
  push32(0x1115a4aeu); f_1115e4f0();
  /* 1115a4ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a4b1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1115a4b4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115a4b7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1115a4ba sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115a4bd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115a4c0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1115a4c3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115a4c6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a4ca jl 0x1115a4ee */
  if ((C.sf!=C.of)) goto L_1115a4ee;
  /* 1115a4cc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115a4cf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1115a4d1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1115a4d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1115a4d6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1115a4dc mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1115a4df mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115a4e2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1115a4e4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a4e7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115a4ea mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1115a4ec jmp 0x1115a4ff */
  goto L_1115a4ff;
L_1115a4ee:;
  /* 1115a4ee mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115a4f1 push eax */
  push32((uint32_t)(EAX));
  /* 1115a4f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115a4f4 call 0x1115e270 */
  push32(0x1115a4f9u); f_1115e270();
  /* 1115a4f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a4fc mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1115a4ff:;
  /* 1115a4ff mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1115a502 pop edi */
  EDI = (pop32());
  /* 1115a503 pop esi */
  ESI = (pop32());
  /* 1115a504 pop ebx */
  EBX = (pop32());
  /* 1115a505 mov esp, ebp */
  ESP = (EBP);
  /* 1115a507 pop ebp */
  EBP = (pop32());
  /* 1115a508 ret  */
  ESPCHK(0x1115a410u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a510 @ 0x1115a510 (7 bytes, 3 insns) */
void f_1115a510(void) {
  FTRACE(0x1115a510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115a510 push edi */
  push32((uint32_t)(EDI));
  /* 1115a511 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 1115a515 jmp 0x1115a581 */
  jmp_ind(0x1115a581u); return;
}

/* FUN_1000a520 @ 0x1115a520 (224 bytes, 84 insns) */
void f_1115a520(void) {
  FTRACE(0x1115a520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115a520 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1115a524 push edi */
  push32((uint32_t)(EDI));
  /* 1115a525 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1115a52b je 0x1115a53c */
  if (C.zf) goto L_1115a53c;
L_1115a52d:;
  /* 1115a52d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1115a52f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1115a530 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1115a532 je 0x1115a56f */
  if (C.zf) goto L_1115a56f;
  /* 1115a534 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1115a53a jne 0x1115a52d */
  if (!C.zf) goto L_1115a52d;
L_1115a53c:;
  /* 1115a53c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1115a53e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1115a543 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a545 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1115a548 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1115a54a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a54d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1115a552 je 0x1115a53c */
  if (C.zf) goto L_1115a53c;
  /* 1115a554 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1115a557 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1115a559 je 0x1115a57e */
  if (C.zf) goto L_1115a57e;
  /* 1115a55b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1115a55d je 0x1115a579 */
  if (C.zf) goto L_1115a579;
  /* 1115a55f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 1115a564 je 0x1115a574 */
  if (C.zf) goto L_1115a574;
  /* 1115a566 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1115a56b je 0x1115a56f */
  if (C.zf) goto L_1115a56f;
  /* 1115a56d jmp 0x1115a53c */
  goto L_1115a53c;
L_1115a56f:;
  /* 1115a56f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 1115a572 jmp 0x1115a581 */
  goto L_1115a581;
L_1115a574:;
  /* 1115a574 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 1115a577 jmp 0x1115a581 */
  goto L_1115a581;
L_1115a579:;
  /* 1115a579 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 1115a57c jmp 0x1115a581 */
  goto L_1115a581;
L_1115a57e:;
  /* 1115a57e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_1115a581:;
  /* 1115a581 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1115a585 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1115a58b je 0x1115a5a6 */
  if (C.zf) goto L_1115a5a6;
L_1115a58d:;
  /* 1115a58d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1115a58f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1115a590 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1115a592 je 0x1115a5f8 */
  if (C.zf) goto L_1115a5f8;
  /* 1115a594 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1115a596 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1115a597 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1115a59d jne 0x1115a58d */
  if (!C.zf) goto L_1115a58d;
  /* 1115a59f jmp 0x1115a5a6 */
  goto L_1115a5a6;
L_1115a5a1:;
  /* 1115a5a1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1115a5a3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1115a5a6:;
  /* 1115a5a6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1115a5ab mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1115a5ad add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a5af xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1115a5b2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1115a5b4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1115a5b6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a5b9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1115a5be je 0x1115a5a1 */
  if (C.zf) goto L_1115a5a1;
  /* 1115a5c0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1115a5c2 je 0x1115a5f8 */
  if (C.zf) goto L_1115a5f8;
  /* 1115a5c4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1115a5c6 je 0x1115a5ef */
  if (C.zf) goto L_1115a5ef;
  /* 1115a5c8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1115a5ce je 0x1115a5e2 */
  if (C.zf) goto L_1115a5e2;
  /* 1115a5d0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 1115a5d6 je 0x1115a5da */
  if (C.zf) goto L_1115a5da;
  /* 1115a5d8 jmp 0x1115a5a1 */
  goto L_1115a5a1;
L_1115a5da:;
  /* 1115a5da mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1115a5dc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1115a5e0 pop edi */
  EDI = (pop32());
  /* 1115a5e1 ret  */
  ESPCHK(0x1115a520u, _esp0);
  ESP += 4; return;
L_1115a5e2:;
  /* 1115a5e2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 1115a5e5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1115a5e9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1115a5ed pop edi */
  EDI = (pop32());
  /* 1115a5ee ret  */
  ESPCHK(0x1115a520u, _esp0);
  ESP += 4; return;
L_1115a5ef:;
  /* 1115a5ef mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 1115a5f2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1115a5f6 pop edi */
  EDI = (pop32());
  /* 1115a5f7 ret  */
  ESPCHK(0x1115a520u, _esp0);
  ESP += 4; return;
L_1115a5f8:;
  /* 1115a5f8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1115a5fa mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1115a5fe pop edi */
  EDI = (pop32());
  /* 1115a5ff ret  */
  ESPCHK(0x1115a520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a600 @ 0x1115a600 (243 bytes, 91 insns) */
void f_1115a600(void) {
  FTRACE(0x1115a600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115a600 push ebp */
  push32((uint32_t)(EBP));
  /* 1115a601 mov ebp, esp */
  EBP = (ESP);
  /* 1115a603 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115a606 push ebx */
  push32((uint32_t)(EBX));
  /* 1115a607 push esi */
  push32((uint32_t)(ESI));
  /* 1115a608 push edi */
  push32((uint32_t)(EDI));
  /* 1115a609 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1115a60c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1115a60f:;
  /* 1115a60f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a613 jne 0x1115a633 */
  if (!C.zf) goto L_1115a633;
  /* 1115a615 push 0x1117f2e0 */
  push32((uint32_t)(0x1117f2e0u));
  /* 1115a61a push 0 */
  push32((uint32_t)(0x0u));
  /* 1115a61c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1115a61e push 0x1117f2f0 */
  push32((uint32_t)(0x1117f2f0u));
  /* 1115a623 push 2 */
  push32((uint32_t)(0x2u));
  /* 1115a625 call 0x11156620 */
  push32(0x1115a62au); f_11156620();
  /* 1115a62a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a62d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a630 jne 0x1115a633 */
  if (!C.zf) goto L_1115a633;
  /* 1115a632 int3  */
  x86_unimpl("int3 @ 0x1115a632");
L_1115a633:;
  /* 1115a633 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1115a635 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115a637 jne 0x1115a60f */
  if (!C.zf) goto L_1115a60f;
L_1115a639:;
  /* 1115a639 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a63d jne 0x1115a65d */
  if (!C.zf) goto L_1115a65d;
  /* 1115a63f push 0x1117f2c4 */
  push32((uint32_t)(0x1117f2c4u));
  /* 1115a644 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115a646 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 1115a648 push 0x1117f2f0 */
  push32((uint32_t)(0x1117f2f0u));
  /* 1115a64d push 2 */
  push32((uint32_t)(0x2u));
  /* 1115a64f call 0x11156620 */
  push32(0x1115a654u); f_11156620();
  /* 1115a654 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a657 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a65a jne 0x1115a65d */
  if (!C.zf) goto L_1115a65d;
  /* 1115a65c int3  */
  x86_unimpl("int3 @ 0x1115a65c");
L_1115a65d:;
  /* 1115a65d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1115a65f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115a661 jne 0x1115a639 */
  if (!C.zf) goto L_1115a639;
  /* 1115a663 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115a666 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 1115a66d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115a670 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115a673 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1115a676 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115a679 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115a67c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1115a67e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115a681 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115a684 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1115a687 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1115a68a push ecx */
  push32((uint32_t)(ECX));
  /* 1115a68b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115a68e push edx */
  push32((uint32_t)(EDX));
  /* 1115a68f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115a692 push eax */
  push32((uint32_t)(EAX));
  /* 1115a693 call 0x1115e4f0 */
  push32(0x1115a698u); f_1115e4f0();
  /* 1115a698 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a69b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1115a69e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115a6a1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1115a6a4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115a6a7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115a6aa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1115a6ad mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115a6b0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a6b4 jl 0x1115a6d8 */
  if ((C.sf!=C.of)) goto L_1115a6d8;
  /* 1115a6b6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115a6b9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1115a6bb mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1115a6be xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1115a6c0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1115a6c6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1115a6c9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115a6cc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1115a6ce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a6d1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115a6d4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1115a6d6 jmp 0x1115a6e9 */
  goto L_1115a6e9;
L_1115a6d8:;
  /* 1115a6d8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1115a6db push edx */
  push32((uint32_t)(EDX));
  /* 1115a6dc push 0 */
  push32((uint32_t)(0x0u));
  /* 1115a6de call 0x1115e270 */
  push32(0x1115a6e3u); f_1115e270();
  /* 1115a6e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a6e6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_1115a6e9:;
  /* 1115a6e9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1115a6ec pop edi */
  EDI = (pop32());
  /* 1115a6ed pop esi */
  ESI = (pop32());
  /* 1115a6ee pop ebx */
  EBX = (pop32());
  /* 1115a6ef mov esp, ebp */
  ESP = (EBP);
  /* 1115a6f1 pop ebp */
  EBP = (pop32());
  /* 1115a6f2 ret  */
  ESPCHK(0x1115a600u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a700 @ 0x1115a700 (47 bytes, 17 insns) */
void f_1115a700(void) {
  FTRACE(0x1115a700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115a700 push ecx */
  push32((uint32_t)(ECX));
  /* 1115a701 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a706 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1115a70a jb 0x1115a720 */
  if (C.cf) goto L_1115a720;
L_1115a70c:;
  /* 1115a70c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115a712 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115a717 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1115a719 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a71e jae 0x1115a70c */
  if (!C.cf) goto L_1115a70c;
L_1115a720:;
  /* 1115a720 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115a722 mov eax, esp */
  EAX = (ESP);
  /* 1115a724 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1115a726 mov esp, ecx */
  ESP = (ECX);
  /* 1115a728 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1115a72a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1115a72d push eax */
  push32((uint32_t)(EAX));
  /* 1115a72e ret  */
  ESPCHK(0x1115a700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a730 @ 0x1115a730 (507 bytes, 151 insns) [1 switch table(s)] */
void f_1115a730(void) {
  FTRACE(0x1115a730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115a730 push ebp */
  push32((uint32_t)(EBP));
  /* 1115a731 mov ebp, esp */
  EBP = (ESP);
  /* 1115a733 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115a736 push esi */
  push32((uint32_t)(ESI));
  /* 1115a737 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a73b je 0x1115a743 */
  if (C.zf) goto L_1115a743;
  /* 1115a73d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a741 jne 0x1115a748 */
  if (!C.zf) goto L_1115a748;
L_1115a743:;
  /* 1115a743 jmp 0x1115a918 */
  goto L_1115a918;
L_1115a748:;
  /* 1115a748 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a74c je 0x1115a764 */
  if (C.zf) goto L_1115a764;
  /* 1115a74e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a752 je 0x1115a764 */
  if (C.zf) goto L_1115a764;
  /* 1115a754 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a758 je 0x1115a764 */
  if (C.zf) goto L_1115a764;
  /* 1115a75a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a75e jne 0x1115a841 */
  if (!C.zf) goto L_1115a841;
L_1115a764:;
  /* 1115a764 push 1 */
  push32((uint32_t)(0x1u));
  /* 1115a766 call 0x1115af60 */
  push32(0x1115a76bu); f_1115af60();
  /* 1115a76b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a76e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a772 je 0x1115a77a */
  if (C.zf) goto L_1115a77a;
  /* 1115a774 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a778 jne 0x1115a7bf */
  if (!C.zf) goto L_1115a7bf;
L_1115a77a:;
  /* 1115a77a cmp dword ptr [0x11183964], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183964))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a781 jne 0x1115a7bf */
  if (!C.zf) goto L_1115a7bf;
  /* 1115a783 push 1 */
  push32((uint32_t)(0x1u));
  /* 1115a785 push 0x1115a960 */
  push32((uint32_t)(0x1115a960u));
  /* 1115a78a call dword ptr [0x11186370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186370))), 0x1115a790u);
  /* 1115a790 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a793 jne 0x1115a7a1 */
  if (!C.zf) goto L_1115a7a1;
  /* 1115a795 mov dword ptr [0x11183964], 1 */
  w32((uint32_t)(0x11183964), (0x1u));
  /* 1115a79f jmp 0x1115a7bf */
  goto L_1115a7bf;
L_1115a7a1:;
  /* 1115a7a1 call dword ptr [0x11186400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186400))), 0x1115a7a7u);
  /* 1115a7a7 mov esi, eax */
  ESI = (EAX);
  /* 1115a7a9 call 0x1115f440 */
  push32(0x1115a7aeu); f_1115f440();
  /* 1115a7ae mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 1115a7b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1115a7b2 call 0x1115b000 */
  push32(0x1115a7b7u); f_1115b000();
  /* 1115a7b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a7ba jmp 0x1115a918 */
  goto L_1115a918;
L_1115a7bf:;
  /* 1115a7bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115a7c2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1115a7c5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115a7c8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115a7cb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1115a7ce cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a7d2 ja 0x1115a832 */
  if ((!C.cf&&!C.zf)) goto L_1115a832;
  /* 1115a7d4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115a7d7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1115a7d9 mov dl, byte ptr [eax + 0x1115a93f] */
  DL = (r8((uint32_t)(EAX + 0x1115a93f)));
  /* 1115a7df jmp dword ptr [edx*4 + 0x1115a92b] */
  switch (EDX) {
    case 0: goto L_1115a7e6;
    case 1: goto L_1115a820;
    case 2: goto L_1115a7fa;
    case 3: goto L_1115a80d;
    case 4: goto L_1115a832;
    default: x86_unimpl("switch@0x1115a7df out of table"); return;
  }
L_1115a7e6:;
  /* 1115a7e6 mov ecx, dword ptr [0x11183954] */
  ECX = (r32((uint32_t)(0x11183954)));
  /* 1115a7ec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1115a7ef mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115a7f2 mov dword ptr [0x11183954], edx */
  w32((uint32_t)(0x11183954), (EDX));
  /* 1115a7f8 jmp 0x1115a832 */
  goto L_1115a832;
L_1115a7fa:;
  /* 1115a7fa mov eax, dword ptr [0x11183958] */
  EAX = (r32((uint32_t)(0x11183958)));
  /* 1115a7ff mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1115a802 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115a805 mov dword ptr [0x11183958], ecx */
  w32((uint32_t)(0x11183958), (ECX));
  /* 1115a80b jmp 0x1115a832 */
  goto L_1115a832;
L_1115a80d:;
  /* 1115a80d mov edx, dword ptr [0x1118395c] */
  EDX = (r32((uint32_t)(0x1118395c)));
  /* 1115a813 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1115a816 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115a819 mov dword ptr [0x1118395c], eax */
  w32((uint32_t)(0x1118395c), (EAX));
  /* 1115a81e jmp 0x1115a832 */
  goto L_1115a832;
L_1115a820:;
  /* 1115a820 mov ecx, dword ptr [0x11183960] */
  ECX = (r32((uint32_t)(0x11183960)));
  /* 1115a826 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1115a829 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115a82c mov dword ptr [0x11183960], edx */
  w32((uint32_t)(0x11183960), (EDX));
L_1115a832:;
  /* 1115a832 push 1 */
  push32((uint32_t)(0x1u));
  /* 1115a834 call 0x1115b000 */
  push32(0x1115a839u); f_1115b000();
  /* 1115a839 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a83c jmp 0x1115a913 */
  goto L_1115a913;
L_1115a841:;
  /* 1115a841 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a845 je 0x1115a858 */
  if (C.zf) goto L_1115a858;
  /* 1115a847 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a84b je 0x1115a858 */
  if (C.zf) goto L_1115a858;
  /* 1115a84d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a851 je 0x1115a858 */
  if (C.zf) goto L_1115a858;
  /* 1115a853 jmp 0x1115a918 */
  goto L_1115a918;
L_1115a858:;
  /* 1115a858 call 0x11156fa0 */
  push32(0x1115a85du); f_11156fa0();
  /* 1115a85d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1115a860 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115a863 cmp dword ptr [eax + 0x50], 0x11181c00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x11181c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a86a jne 0x1115a8b5 */
  if (!C.zf) goto L_1115a8b5;
  /* 1115a86c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 1115a871 push 0x1117f2fc */
  push32((uint32_t)(0x1117f2fcu));
  /* 1115a876 push 2 */
  push32((uint32_t)(0x2u));
  /* 1115a878 mov ecx, dword ptr [0x11181c80] */
  ECX = (r32((uint32_t)(0x11181c80)));
  /* 1115a87e push ecx */
  push32((uint32_t)(ECX));
  /* 1115a87f call 0x11157560 */
  push32(0x1115a884u); f_11157560();
  /* 1115a884 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a887 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115a88a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 1115a88d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115a890 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a894 je 0x1115a8b3 */
  if (C.zf) goto L_1115a8b3;
  /* 1115a896 mov ecx, dword ptr [0x11181c80] */
  ECX = (r32((uint32_t)(0x11181c80)));
  /* 1115a89c push ecx */
  push32((uint32_t)(ECX));
  /* 1115a89d push 0x11181c00 */
  push32((uint32_t)(0x11181c00u));
  /* 1115a8a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115a8a5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 1115a8a8 push eax */
  push32((uint32_t)(EAX));
  /* 1115a8a9 call 0x1115de40 */
  push32(0x1115a8aeu); f_1115de40();
  /* 1115a8ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a8b1 jmp 0x1115a8b5 */
  goto L_1115a8b5;
L_1115a8b3:;
  /* 1115a8b3 jmp 0x1115a918 */
  goto L_1115a918;
L_1115a8b5:;
  /* 1115a8b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115a8b8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1115a8bb push edx */
  push32((uint32_t)(EDX));
  /* 1115a8bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115a8bf push eax */
  push32((uint32_t)(EAX));
  /* 1115a8c0 call 0x1115ac40 */
  push32(0x1115a8c5u); f_1115ac40();
  /* 1115a8c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a8c8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1115a8cb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a8cf jne 0x1115a8d3 */
  if (!C.zf) goto L_1115a8d3;
  /* 1115a8d1 jmp 0x1115a918 */
  goto L_1115a918;
L_1115a8d3:;
  /* 1115a8d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115a8d6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1115a8d9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1115a8dc:;
  /* 1115a8dc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115a8df mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1115a8e2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a8e5 jne 0x1115a913 */
  if (!C.zf) goto L_1115a913;
  /* 1115a8e7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115a8ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115a8ed mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1115a8f0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115a8f3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a8f6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1115a8f9 mov edx, dword ptr [0x11181c84] */
  EDX = (r32((uint32_t)(0x11181c84)));
  /* 1115a8ff imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1115a902 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115a905 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 1115a908 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a90a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a90d jb 0x1115a911 */
  if (C.cf) goto L_1115a911;
  /* 1115a90f jmp 0x1115a913 */
  goto L_1115a913;
L_1115a911:;
  /* 1115a911 jmp 0x1115a8dc */
  goto L_1115a8dc;
L_1115a913:;
  /* 1115a913 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115a916 jmp 0x1115a926 */
  goto L_1115a926;
L_1115a918:;
  /* 1115a918 call 0x1115f430 */
  push32(0x1115a91du); f_1115f430();
  /* 1115a91d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 1115a923 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1115a926:;
  /* 1115a926 pop esi */
  ESI = (pop32());
  /* 1115a927 mov esp, ebp */
  ESP = (EBP);
  /* 1115a929 pop ebp */
  EBP = (pop32());
  /* 1115a92a ret  */
  ESPCHK(0x1115a730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a960 @ 0x1115a960 (146 bytes, 45 insns) */
void f_1115a960(void) {
  FTRACE(0x1115a960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115a960 push ebp */
  push32((uint32_t)(EBP));
  /* 1115a961 mov ebp, esp */
  EBP = (ESP);
  /* 1115a963 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115a966 push 1 */
  push32((uint32_t)(0x1u));
  /* 1115a968 call 0x1115af60 */
  push32(0x1115a96du); f_1115af60();
  /* 1115a96d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a970 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a974 jne 0x1115a98e */
  if (!C.zf) goto L_1115a98e;
  /* 1115a976 mov dword ptr [ebp - 8], 0x11183954 */
  w32((uint32_t)(EBP + -0x8), (0x11183954u));
  /* 1115a97d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115a980 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1115a982 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1115a985 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1115a98c jmp 0x1115a9a4 */
  goto L_1115a9a4;
L_1115a98e:;
  /* 1115a98e mov dword ptr [ebp - 8], 0x11183958 */
  w32((uint32_t)(EBP + -0x8), (0x11183958u));
  /* 1115a995 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115a998 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1115a99a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1115a99d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_1115a9a4:;
  /* 1115a9a4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a9a8 jne 0x1115a9b8 */
  if (!C.zf) goto L_1115a9b8;
  /* 1115a9aa push 1 */
  push32((uint32_t)(0x1u));
  /* 1115a9ac call 0x1115b000 */
  push32(0x1115a9b1u); f_1115b000();
  /* 1115a9b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a9b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115a9b6 jmp 0x1115a9ec */
  goto L_1115a9ec;
L_1115a9b8:;
  /* 1115a9b8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115a9bc je 0x1115a9dd */
  if (C.zf) goto L_1115a9dd;
  /* 1115a9be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115a9c1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 1115a9c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 1115a9c9 call 0x1115b000 */
  push32(0x1115a9ceu); f_1115b000();
  /* 1115a9ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a9d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115a9d4 push edx */
  push32((uint32_t)(EDX));
  /* 1115a9d5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x1115a9d8u);
  /* 1115a9d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115a9db jmp 0x1115a9e7 */
  goto L_1115a9e7;
L_1115a9dd:;
  /* 1115a9dd push 1 */
  push32((uint32_t)(0x1u));
  /* 1115a9df call 0x1115b000 */
  push32(0x1115a9e4u); f_1115b000();
  /* 1115a9e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1115a9e7:;
  /* 1115a9e7 mov eax, 1 */
  EAX = (0x1u);
L_1115a9ec:;
  /* 1115a9ec mov esp, ebp */
  ESP = (EBP);
  /* 1115a9ee pop ebp */
  EBP = (pop32());
  /* 1115a9ef ret 4 */
  ESPCHK(0x1115a960u, _esp0);
  ESP += 8; return;
}

/* FUN_1000aa00 @ 0x1115aa00 (522 bytes, 162 insns) [1 switch table(s)] */
void f_1115aa00(void) {
  FTRACE(0x1115aa00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115aa00 push ebp */
  push32((uint32_t)(EBP));
  /* 1115aa01 mov ebp, esp */
  EBP = (ESP);
  /* 1115aa03 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115aa06 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1115aa0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115aa10 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1115aa13 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115aa16 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115aa19 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1115aa1c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115aa20 ja 0x1115aace */
  if ((!C.cf&&!C.zf)) goto L_1115aace;
  /* 1115aa26 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1115aa29 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1115aa2b mov dl, byte ptr [eax + 0x1115ac22] */
  DL = (r8((uint32_t)(EAX + 0x1115ac22)));
  /* 1115aa31 jmp dword ptr [edx*4 + 0x1115ac0a] */
  switch (EDX) {
    case 0: goto L_1115aa38;
    case 1: goto L_1115aaa3;
    case 2: goto L_1115aa89;
    case 3: goto L_1115aa55;
    case 4: goto L_1115aa6f;
    case 5: goto L_1115aace;
    default: x86_unimpl("switch@0x1115aa31 out of table"); return;
  }
L_1115aa38:;
  /* 1115aa38 mov dword ptr [ebp - 0x18], 0x11183954 */
  w32((uint32_t)(EBP + -0x18), (0x11183954u));
  /* 1115aa3f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115aa42 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1115aa44 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1115aa47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115aa4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115aa4d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1115aa50 jmp 0x1115aad6 */
  goto L_1115aad6;
L_1115aa55:;
  /* 1115aa55 mov dword ptr [ebp - 0x18], 0x11183958 */
  w32((uint32_t)(EBP + -0x18), (0x11183958u));
  /* 1115aa5c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115aa5f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1115aa61 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1115aa64 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115aa67 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115aa6a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1115aa6d jmp 0x1115aad6 */
  goto L_1115aad6;
L_1115aa6f:;
  /* 1115aa6f mov dword ptr [ebp - 0x18], 0x1118395c */
  w32((uint32_t)(EBP + -0x18), (0x1118395cu));
  /* 1115aa76 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115aa79 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1115aa7b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1115aa7e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115aa81 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115aa84 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1115aa87 jmp 0x1115aad6 */
  goto L_1115aad6;
L_1115aa89:;
  /* 1115aa89 mov dword ptr [ebp - 0x18], 0x11183960 */
  w32((uint32_t)(EBP + -0x18), (0x11183960u));
  /* 1115aa90 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115aa93 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1115aa95 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1115aa98 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115aa9b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115aa9e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1115aaa1 jmp 0x1115aad6 */
  goto L_1115aad6;
L_1115aaa3:;
  /* 1115aaa3 call 0x11156fa0 */
  push32(0x1115aaa8u); f_11156fa0();
  /* 1115aaa8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1115aaab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115aaae mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1115aab1 push edx */
  push32((uint32_t)(EDX));
  /* 1115aab2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115aab5 push eax */
  push32((uint32_t)(EAX));
  /* 1115aab6 call 0x1115ac40 */
  push32(0x1115aabbu); f_1115ac40();
  /* 1115aabb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115aabe add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115aac1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1115aac4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115aac7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1115aac9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1115aacc jmp 0x1115aad6 */
  goto L_1115aad6;
L_1115aace:;
  /* 1115aace or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1115aad1 jmp 0x1115ac06 */
  goto L_1115ac06;
L_1115aad6:;
  /* 1115aad6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115aada je 0x1115aae6 */
  if (C.zf) goto L_1115aae6;
  /* 1115aadc push 1 */
  push32((uint32_t)(0x1u));
  /* 1115aade call 0x1115af60 */
  push32(0x1115aae3u); f_1115af60();
  /* 1115aae3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1115aae6:;
  /* 1115aae6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115aaea jne 0x1115ab03 */
  if (!C.zf) goto L_1115ab03;
  /* 1115aaec cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115aaf0 je 0x1115aafc */
  if (C.zf) goto L_1115aafc;
  /* 1115aaf2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1115aaf4 call 0x1115b000 */
  push32(0x1115aaf9u); f_1115b000();
  /* 1115aaf9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1115aafc:;
  /* 1115aafc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115aafe jmp 0x1115ac06 */
  goto L_1115ac06;
L_1115ab03:;
  /* 1115ab03 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115ab07 jne 0x1115ab20 */
  if (!C.zf) goto L_1115ab20;
  /* 1115ab09 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115ab0d je 0x1115ab19 */
  if (C.zf) goto L_1115ab19;
  /* 1115ab0f push 1 */
  push32((uint32_t)(0x1u));
  /* 1115ab11 call 0x1115b000 */
  push32(0x1115ab16u); f_1115b000();
  /* 1115ab16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1115ab19:;
  /* 1115ab19 push 3 */
  push32((uint32_t)(0x3u));
  /* 1115ab1b call 0x11156d20 */
  push32(0x1115ab20u); f_11156d20();
L_1115ab20:;
  /* 1115ab20 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115ab24 je 0x1115ab32 */
  if (C.zf) goto L_1115ab32;
  /* 1115ab26 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115ab2a je 0x1115ab32 */
  if (C.zf) goto L_1115ab32;
  /* 1115ab2c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115ab30 jne 0x1115ab5e */
  if (!C.zf) goto L_1115ab5e;
L_1115ab32:;
  /* 1115ab32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115ab35 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1115ab38 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1115ab3b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115ab3e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 1115ab45 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115ab49 jne 0x1115ab5e */
  if (!C.zf) goto L_1115ab5e;
  /* 1115ab4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115ab4e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 1115ab51 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1115ab54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115ab57 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_1115ab5e:;
  /* 1115ab5e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115ab62 jne 0x1115aba0 */
  if (!C.zf) goto L_1115aba0;
  /* 1115ab64 mov eax, dword ptr [0x11181c78] */
  EAX = (r32((uint32_t)(0x11181c78)));
  /* 1115ab69 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1115ab6c jmp 0x1115ab77 */
  goto L_1115ab77;
L_1115ab6e:;
  /* 1115ab6e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115ab71 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ab74 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1115ab77:;
  /* 1115ab77 mov edx, dword ptr [0x11181c78] */
  EDX = (r32((uint32_t)(0x11181c78)));
  /* 1115ab7d add edx, dword ptr [0x11181c7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11181c7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ab83 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115ab86 jge 0x1115ab9e */
  if ((C.sf==C.of)) goto L_1115ab9e;
  /* 1115ab88 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115ab8b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1115ab8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115ab91 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1115ab94 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1115ab9c jmp 0x1115ab6e */
  goto L_1115ab6e;
L_1115ab9e:;
  /* 1115ab9e jmp 0x1115aba9 */
  goto L_1115aba9;
L_1115aba0:;
  /* 1115aba0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115aba3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1115aba9:;
  /* 1115aba9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115abad je 0x1115abb9 */
  if (C.zf) goto L_1115abb9;
  /* 1115abaf push 1 */
  push32((uint32_t)(0x1u));
  /* 1115abb1 call 0x1115b000 */
  push32(0x1115abb6u); f_1115b000();
  /* 1115abb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1115abb9:;
  /* 1115abb9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115abbd jne 0x1115abd0 */
  if (!C.zf) goto L_1115abd0;
  /* 1115abbf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115abc2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 1115abc5 push edx */
  push32((uint32_t)(EDX));
  /* 1115abc6 push 8 */
  push32((uint32_t)(0x8u));
  /* 1115abc8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x1115abcbu);
  /* 1115abcb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115abce jmp 0x1115abda */
  goto L_1115abda;
L_1115abd0:;
  /* 1115abd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115abd3 push eax */
  push32((uint32_t)(EAX));
  /* 1115abd4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x1115abd7u);
  /* 1115abd7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1115abda:;
  /* 1115abda cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115abde je 0x1115abec */
  if (C.zf) goto L_1115abec;
  /* 1115abe0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115abe4 je 0x1115abec */
  if (C.zf) goto L_1115abec;
  /* 1115abe6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115abea jne 0x1115ac04 */
  if (!C.zf) goto L_1115ac04;
L_1115abec:;
  /* 1115abec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115abef mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115abf2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 1115abf5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115abf9 jne 0x1115ac04 */
  if (!C.zf) goto L_1115ac04;
  /* 1115abfb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115abfe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115ac01 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_1115ac04:;
  /* 1115ac04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1115ac06:;
  /* 1115ac06 mov esp, ebp */
  ESP = (EBP);
  /* 1115ac08 pop ebp */
  EBP = (pop32());
  /* 1115ac09 ret  */
  ESPCHK(0x1115aa00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac40 @ 0x1115ac40 (91 bytes, 35 insns) */
void f_1115ac40(void) {
  FTRACE(0x1115ac40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115ac40 push ebp */
  push32((uint32_t)(EBP));
  /* 1115ac41 mov ebp, esp */
  EBP = (ESP);
  /* 1115ac43 push ecx */
  push32((uint32_t)(ECX));
  /* 1115ac44 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115ac47 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1115ac4a:;
  /* 1115ac4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115ac4d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1115ac50 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115ac53 je 0x1115ac73 */
  if (C.zf) goto L_1115ac73;
  /* 1115ac55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115ac58 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ac5b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1115ac5e mov ecx, dword ptr [0x11181c84] */
  ECX = (r32((uint32_t)(0x11181c84)));
  /* 1115ac64 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1115ac67 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115ac6a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ac6c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115ac6f jae 0x1115ac73 */
  if (!C.cf) goto L_1115ac73;
  /* 1115ac71 jmp 0x1115ac4a */
  goto L_1115ac4a;
L_1115ac73:;
  /* 1115ac73 mov eax, dword ptr [0x11181c84] */
  EAX = (r32((uint32_t)(0x11181c84)));
  /* 1115ac78 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1115ac7b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115ac7e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ac80 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115ac83 jae 0x1115ac95 */
  if (!C.cf) goto L_1115ac95;
  /* 1115ac85 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115ac88 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1115ac8b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115ac8e jne 0x1115ac95 */
  if (!C.zf) goto L_1115ac95;
  /* 1115ac90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115ac93 jmp 0x1115ac97 */
  goto L_1115ac97;
L_1115ac95:;
  /* 1115ac95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1115ac97:;
  /* 1115ac97 mov esp, ebp */
  ESP = (EBP);
  /* 1115ac99 pop ebp */
  EBP = (pop32());
  /* 1115ac9a ret  */
  ESPCHK(0x1115ac40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aca0 @ 0x1115aca0 (13 bytes, 6 insns) */
void f_1115aca0(void) {
  FTRACE(0x1115aca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115aca0 push ebp */
  push32((uint32_t)(EBP));
  /* 1115aca1 mov ebp, esp */
  EBP = (ESP);
  /* 1115aca3 call 0x11156fa0 */
  push32(0x1115aca8u); f_11156fa0();
  /* 1115aca8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115acab pop ebp */
  EBP = (pop32());
  /* 1115acac ret  */
  ESPCHK(0x1115aca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000acb0 @ 0x1115acb0 (13 bytes, 6 insns) */
void f_1115acb0(void) {
  FTRACE(0x1115acb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115acb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1115acb1 mov ebp, esp */
  EBP = (ESP);
  /* 1115acb3 call 0x11156fa0 */
  push32(0x1115acb8u); f_11156fa0();
  /* 1115acb8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115acbb pop ebp */
  EBP = (pop32());
  /* 1115acbc ret  */
  ESPCHK(0x1115acb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000acc0 @ 0x1115acc0 (187 bytes, 54 insns) */
void f_1115acc0(void) {
  FTRACE(0x1115acc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115acc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1115acc1 mov ebp, esp */
  EBP = (ESP);
  /* 1115acc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115acc6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1115accd cmp dword ptr [0x11183968], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183968))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115acd4 jne 0x1115ad33 */
  if (!C.zf) goto L_1115ad33;
  /* 1115acd6 push 0x1117e728 */
  push32((uint32_t)(0x1117e728u));
  /* 1115acdb call dword ptr [0x111863d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863d4))), 0x1115ace1u);
  /* 1115ace1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1115ace4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115ace8 je 0x1115ad07 */
  if (C.zf) goto L_1115ad07;
  /* 1115acea push 0x1117f32c */
  push32((uint32_t)(0x1117f32cu));
  /* 1115acef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115acf2 push eax */
  push32((uint32_t)(EAX));
  /* 1115acf3 call dword ptr [0x111863d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863d0))), 0x1115acf9u);
  /* 1115acf9 mov dword ptr [0x11183968], eax */
  w32((uint32_t)(0x11183968), (EAX));
  /* 1115acfe cmp dword ptr [0x11183968], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183968))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115ad05 jne 0x1115ad0b */
  if (!C.zf) goto L_1115ad0b;
L_1115ad07:;
  /* 1115ad07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115ad09 jmp 0x1115ad77 */
  goto L_1115ad77;
L_1115ad0b:;
  /* 1115ad0b push 0x1117f31c */
  push32((uint32_t)(0x1117f31cu));
  /* 1115ad10 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115ad13 push ecx */
  push32((uint32_t)(ECX));
  /* 1115ad14 call dword ptr [0x111863d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863d0))), 0x1115ad1au);
  /* 1115ad1a mov dword ptr [0x1118396c], eax */
  w32((uint32_t)(0x1118396c), (EAX));
  /* 1115ad1f push 0x1117f308 */
  push32((uint32_t)(0x1117f308u));
  /* 1115ad24 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115ad27 push edx */
  push32((uint32_t)(EDX));
  /* 1115ad28 call dword ptr [0x111863d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863d0))), 0x1115ad2eu);
  /* 1115ad2e mov dword ptr [0x11183970], eax */
  w32((uint32_t)(0x11183970), (EAX));
L_1115ad33:;
  /* 1115ad33 cmp dword ptr [0x1118396c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1118396c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115ad3a je 0x1115ad45 */
  if (C.zf) goto L_1115ad45;
  /* 1115ad3c call dword ptr [0x1118396c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118396c))), 0x1115ad42u);
  /* 1115ad42 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1115ad45:;
  /* 1115ad45 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115ad49 je 0x1115ad61 */
  if (C.zf) goto L_1115ad61;
  /* 1115ad4b cmp dword ptr [0x11183970], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11183970))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115ad52 je 0x1115ad61 */
  if (C.zf) goto L_1115ad61;
  /* 1115ad54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115ad57 push eax */
  push32((uint32_t)(EAX));
  /* 1115ad58 call dword ptr [0x11183970] */
  call_ind((uint32_t)(r32((uint32_t)(0x11183970))), 0x1115ad5eu);
  /* 1115ad5e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1115ad61:;
  /* 1115ad61 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1115ad64 push ecx */
  push32((uint32_t)(ECX));
  /* 1115ad65 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115ad68 push edx */
  push32((uint32_t)(EDX));
  /* 1115ad69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115ad6c push eax */
  push32((uint32_t)(EAX));
  /* 1115ad6d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115ad70 push ecx */
  push32((uint32_t)(ECX));
  /* 1115ad71 call dword ptr [0x11183968] */
  call_ind((uint32_t)(r32((uint32_t)(0x11183968))), 0x1115ad77u);
L_1115ad77:;
  /* 1115ad77 mov esp, ebp */
  ESP = (EBP);
  /* 1115ad79 pop ebp */
  EBP = (pop32());
  /* 1115ad7a ret  */
  ESPCHK(0x1115acc0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x1115ad80 (254 bytes, 109 insns) */
void f_1115ad80(void) {
  FTRACE(0x1115ad80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115ad80 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1115ad84 push edi */
  push32((uint32_t)(EDI));
  /* 1115ad85 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1115ad87 je 0x1115ae03 */
  if (C.zf) goto L_1115ae03;
  /* 1115ad89 push esi */
  push32((uint32_t)(ESI));
  /* 1115ad8a push ebx */
  push32((uint32_t)(EBX));
  /* 1115ad8b mov ebx, ecx */
  EBX = (ECX);
  /* 1115ad8d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 1115ad91 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1115ad97 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1115ad9b jne 0x1115ada4 */
  if (!C.zf) goto L_1115ada4;
  /* 1115ad9d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1115ada0 jne 0x1115ae11 */
  if (!C.zf) goto L_1115ae11;
  /* 1115ada2 jmp 0x1115adc5 */
  goto L_1115adc5;
L_1115ada4:;
  /* 1115ada4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1115ada6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1115ada7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1115ada9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1115adaa dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1115adab je 0x1115add2 */
  if (C.zf) goto L_1115add2;
  /* 1115adad test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1115adaf je 0x1115adda */
  if (C.zf) goto L_1115adda;
  /* 1115adb1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1115adb7 jne 0x1115ada4 */
  if (!C.zf) goto L_1115ada4;
  /* 1115adb9 mov ebx, ecx */
  EBX = (ECX);
  /* 1115adbb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1115adbe jne 0x1115ae11 */
  if (!C.zf) goto L_1115ae11;
L_1115adc0:;
  /* 1115adc0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1115adc3 je 0x1115add2 */
  if (C.zf) goto L_1115add2;
L_1115adc5:;
  /* 1115adc5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1115adc7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1115adc8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1115adca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1115adcb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1115adcd je 0x1115adfe */
  if (C.zf) goto L_1115adfe;
  /* 1115adcf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1115add0 jne 0x1115adc5 */
  if (!C.zf) goto L_1115adc5;
L_1115add2:;
  /* 1115add2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1115add6 pop ebx */
  EBX = (pop32());
  /* 1115add7 pop esi */
  ESI = (pop32());
  /* 1115add8 pop edi */
  EDI = (pop32());
  /* 1115add9 ret  */
  ESPCHK(0x1115ad80u, _esp0);
  ESP += 4; return;
L_1115adda:;
  /* 1115adda test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1115ade0 je 0x1115adf4 */
  if (C.zf) goto L_1115adf4;
L_1115ade2:;
  /* 1115ade2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1115ade4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1115ade5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1115ade6 je 0x1115ae76 */
  if (C.zf) goto L_1115ae76;
  /* 1115adec test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1115adf2 jne 0x1115ade2 */
  if (!C.zf) goto L_1115ade2;
L_1115adf4:;
  /* 1115adf4 mov ebx, ecx */
  EBX = (ECX);
  /* 1115adf6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1115adf9 jne 0x1115ae67 */
  if (!C.zf) goto L_1115ae67;
L_1115adfb:;
  /* 1115adfb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1115adfd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1115adfe:;
  /* 1115adfe dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1115adff jne 0x1115adfb */
  if (!C.zf) goto L_1115adfb;
  /* 1115ae01 pop ebx */
  EBX = (pop32());
  /* 1115ae02 pop esi */
  ESI = (pop32());
L_1115ae03:;
  /* 1115ae03 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1115ae07 pop edi */
  EDI = (pop32());
  /* 1115ae08 ret  */
  ESPCHK(0x1115ad80u, _esp0);
  ESP += 4; return;
L_1115ae09:;
  /* 1115ae09 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1115ae0b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ae0e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1115ae0f je 0x1115adc0 */
  if (C.zf) goto L_1115adc0;
L_1115ae11:;
  /* 1115ae11 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1115ae16 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1115ae18 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ae1a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1115ae1d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1115ae1f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 1115ae21 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ae24 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1115ae29 je 0x1115ae09 */
  if (C.zf) goto L_1115ae09;
  /* 1115ae2b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1115ae2d je 0x1115ae5b */
  if (C.zf) goto L_1115ae5b;
  /* 1115ae2f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1115ae31 je 0x1115ae51 */
  if (C.zf) goto L_1115ae51;
  /* 1115ae33 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1115ae39 je 0x1115ae47 */
  if (C.zf) goto L_1115ae47;
  /* 1115ae3b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 1115ae41 jne 0x1115ae09 */
  if (!C.zf) goto L_1115ae09;
  /* 1115ae43 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1115ae45 jmp 0x1115ae5f */
  goto L_1115ae5f;
L_1115ae47:;
  /* 1115ae47 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1115ae4d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1115ae4f jmp 0x1115ae5f */
  goto L_1115ae5f;
L_1115ae51:;
  /* 1115ae51 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1115ae57 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1115ae59 jmp 0x1115ae5f */
  goto L_1115ae5f;
L_1115ae5b:;
  /* 1115ae5b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1115ae5d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1115ae5f:;
  /* 1115ae5f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ae62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115ae64 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1115ae65 je 0x1115ae71 */
  if (C.zf) goto L_1115ae71;
L_1115ae67:;
  /* 1115ae67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1115ae69:;
  /* 1115ae69 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1115ae6b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1115ae6e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1115ae6f jne 0x1115ae69 */
  if (!C.zf) goto L_1115ae69;
L_1115ae71:;
  /* 1115ae71 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1115ae74 jne 0x1115adfb */
  if (!C.zf) goto L_1115adfb;
L_1115ae76:;
  /* 1115ae76 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1115ae7a pop ebx */
  EBX = (pop32());
  /* 1115ae7b pop esi */
  ESI = (pop32());
  /* 1115ae7c pop edi */
  EDI = (pop32());
  /* 1115ae7d ret  */
  ESPCHK(0x1115ad80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae80 @ 0x1115ae80 (55 bytes, 16 insns) */
void f_1115ae80(void) {
  FTRACE(0x1115ae80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115ae80 push ebp */
  push32((uint32_t)(EBP));
  /* 1115ae81 mov ebp, esp */
  EBP = (ESP);
  /* 1115ae83 mov eax, dword ptr [0x11181b84] */
  EAX = (r32((uint32_t)(0x11181b84)));
  /* 1115ae88 push eax */
  push32((uint32_t)(EAX));
  /* 1115ae89 call dword ptr [0x1118636c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118636c))), 0x1115ae8fu);
  /* 1115ae8f mov ecx, dword ptr [0x11181b74] */
  ECX = (r32((uint32_t)(0x11181b74)));
  /* 1115ae95 push ecx */
  push32((uint32_t)(ECX));
  /* 1115ae96 call dword ptr [0x1118636c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118636c))), 0x1115ae9cu);
  /* 1115ae9c mov edx, dword ptr [0x11181b64] */
  EDX = (r32((uint32_t)(0x11181b64)));
  /* 1115aea2 push edx */
  push32((uint32_t)(EDX));
  /* 1115aea3 call dword ptr [0x1118636c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118636c))), 0x1115aea9u);
  /* 1115aea9 mov eax, dword ptr [0x11181b44] */
  EAX = (r32((uint32_t)(0x11181b44)));
  /* 1115aeae push eax */
  push32((uint32_t)(EAX));
  /* 1115aeaf call dword ptr [0x1118636c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118636c))), 0x1115aeb5u);
  /* 1115aeb5 pop ebp */
  EBP = (pop32());
  /* 1115aeb6 ret  */
  ESPCHK(0x1115ae80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aec0 @ 0x1115aec0 (159 bytes, 47 insns) */
void f_1115aec0(void) {
  FTRACE(0x1115aec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115aec0 push ebp */
  push32((uint32_t)(EBP));
  /* 1115aec1 mov ebp, esp */
  EBP = (ESP);
  /* 1115aec3 push ecx */
  push32((uint32_t)(ECX));
  /* 1115aec4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1115aecb jmp 0x1115aed6 */
  goto L_1115aed6;
L_1115aecd:;
  /* 1115aecd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115aed0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115aed3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1115aed6:;
  /* 1115aed6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115aeda jge 0x1115af29 */
  if ((C.sf==C.of)) goto L_1115af29;
  /* 1115aedc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115aedf cmp dword ptr [ecx*4 + 0x11181b40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11181b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115aee7 je 0x1115af27 */
  if (C.zf) goto L_1115af27;
  /* 1115aee9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115aeed je 0x1115af27 */
  if (C.zf) goto L_1115af27;
  /* 1115aeef cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115aef3 je 0x1115af27 */
  if (C.zf) goto L_1115af27;
  /* 1115aef5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115aef9 je 0x1115af27 */
  if (C.zf) goto L_1115af27;
  /* 1115aefb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115aeff je 0x1115af27 */
  if (C.zf) goto L_1115af27;
  /* 1115af01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115af04 mov eax, dword ptr [edx*4 + 0x11181b40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11181b40)));
  /* 1115af0b push eax */
  push32((uint32_t)(EAX));
  /* 1115af0c call dword ptr [0x111863a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863a4))), 0x1115af12u);
  /* 1115af12 push 2 */
  push32((uint32_t)(0x2u));
  /* 1115af14 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115af17 mov edx, dword ptr [ecx*4 + 0x11181b40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11181b40)));
  /* 1115af1e push edx */
  push32((uint32_t)(EDX));
  /* 1115af1f call 0x11157ff0 */
  push32(0x1115af24u); f_11157ff0();
  /* 1115af24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1115af27:;
  /* 1115af27 jmp 0x1115aecd */
  goto L_1115aecd;
L_1115af29:;
  /* 1115af29 mov eax, dword ptr [0x11181b64] */
  EAX = (r32((uint32_t)(0x11181b64)));
  /* 1115af2e push eax */
  push32((uint32_t)(EAX));
  /* 1115af2f call dword ptr [0x111863a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863a4))), 0x1115af35u);
  /* 1115af35 mov ecx, dword ptr [0x11181b74] */
  ECX = (r32((uint32_t)(0x11181b74)));
  /* 1115af3b push ecx */
  push32((uint32_t)(ECX));
  /* 1115af3c call dword ptr [0x111863a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863a4))), 0x1115af42u);
  /* 1115af42 mov edx, dword ptr [0x11181b84] */
  EDX = (r32((uint32_t)(0x11181b84)));
  /* 1115af48 push edx */
  push32((uint32_t)(EDX));
  /* 1115af49 call dword ptr [0x111863a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863a4))), 0x1115af4fu);
  /* 1115af4f mov eax, dword ptr [0x11181b44] */
  EAX = (r32((uint32_t)(0x11181b44)));
  /* 1115af54 push eax */
  push32((uint32_t)(EAX));
  /* 1115af55 call dword ptr [0x111863a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863a4))), 0x1115af5bu);
  /* 1115af5b mov esp, ebp */
  ESP = (EBP);
  /* 1115af5d pop ebp */
  EBP = (pop32());
  /* 1115af5e ret  */
  ESPCHK(0x1115aec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af60 @ 0x1115af60 (151 bytes, 46 insns) */
void f_1115af60(void) {
  FTRACE(0x1115af60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115af60 push ebp */
  push32((uint32_t)(EBP));
  /* 1115af61 mov ebp, esp */
  EBP = (ESP);
  /* 1115af63 push ecx */
  push32((uint32_t)(ECX));
  /* 1115af64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115af67 cmp dword ptr [eax*4 + 0x11181b40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11181b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115af6f jne 0x1115afe2 */
  if (!C.zf) goto L_1115afe2;
  /* 1115af71 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1115af76 push 0x1117f338 */
  push32((uint32_t)(0x1117f338u));
  /* 1115af7b push 2 */
  push32((uint32_t)(0x2u));
  /* 1115af7d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1115af7f call 0x11157560 */
  push32(0x1115af84u); f_11157560();
  /* 1115af84 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115af87 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1115af8a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115af8e jne 0x1115af9a */
  if (!C.zf) goto L_1115af9a;
  /* 1115af90 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1115af92 call 0x111564d0 */
  push32(0x1115af97u); f_111564d0();
  /* 1115af97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1115af9a:;
  /* 1115af9a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1115af9c call 0x1115af60 */
  push32(0x1115afa1u); f_1115af60();
  /* 1115afa1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115afa4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115afa7 cmp dword ptr [ecx*4 + 0x11181b40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11181b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115afaf jne 0x1115afca */
  if (!C.zf) goto L_1115afca;
  /* 1115afb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115afb4 push edx */
  push32((uint32_t)(EDX));
  /* 1115afb5 call dword ptr [0x1118636c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118636c))), 0x1115afbbu);
  /* 1115afbb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115afbe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115afc1 mov dword ptr [eax*4 + 0x11181b40], ecx */
  w32((uint32_t)(EAX*4 + 0x11181b40), (ECX));
  /* 1115afc8 jmp 0x1115afd8 */
  goto L_1115afd8;
L_1115afca:;
  /* 1115afca push 2 */
  push32((uint32_t)(0x2u));
  /* 1115afcc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115afcf push edx */
  push32((uint32_t)(EDX));
  /* 1115afd0 call 0x11157ff0 */
  push32(0x1115afd5u); f_11157ff0();
  /* 1115afd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1115afd8:;
  /* 1115afd8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1115afda call 0x1115b000 */
  push32(0x1115afdfu); f_1115b000();
  /* 1115afdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1115afe2:;
  /* 1115afe2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115afe5 mov ecx, dword ptr [eax*4 + 0x11181b40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11181b40)));
  /* 1115afec push ecx */
  push32((uint32_t)(ECX));
  /* 1115afed call dword ptr [0x11186368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186368))), 0x1115aff3u);
  /* 1115aff3 mov esp, ebp */
  ESP = (EBP);
  /* 1115aff5 pop ebp */
  EBP = (pop32());
  /* 1115aff6 ret  */
  ESPCHK(0x1115af60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b000 @ 0x1115b000 (22 bytes, 8 insns) */
void f_1115b000(void) {
  FTRACE(0x1115b000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115b000 push ebp */
  push32((uint32_t)(EBP));
  /* 1115b001 mov ebp, esp */
  EBP = (ESP);
  /* 1115b003 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115b006 mov ecx, dword ptr [eax*4 + 0x11181b40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11181b40)));
  /* 1115b00d push ecx */
  push32((uint32_t)(ECX));
  /* 1115b00e call dword ptr [0x11186364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186364))), 0x1115b014u);
  /* 1115b014 pop ebp */
  EBP = (pop32());
  /* 1115b015 ret  */
  ESPCHK(0x1115b000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b020 @ 0x1115b020 (26 bytes, 10 insns) */
void f_1115b020(void) {
  FTRACE(0x1115b020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115b020 push ebp */
  push32((uint32_t)(EBP));
  /* 1115b021 mov ebp, esp */
  EBP = (ESP);
  /* 1115b023 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115b026 push eax */
  push32((uint32_t)(EAX));
  /* 1115b027 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115b029 call dword ptr [0x11186360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186360))), 0x1115b02fu);
  /* 1115b02f push 0xff */
  push32((uint32_t)(0xffu));
  /* 1115b034 call dword ptr [0x111863e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111863e0))), 0x1115b03au);
  /* 1115b03a pop ebp */
  EBP = (pop32());
  /* 1115b03b ret  */
  ESPCHK(0x1115b020u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x1115b040 (446 bytes, 130 insns) */
void f_1115b040(void) {
  FTRACE(0x1115b040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115b040 push ebp */
  push32((uint32_t)(EBP));
  /* 1115b041 mov ebp, esp */
  EBP = (ESP);
  /* 1115b043 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115b046 call 0x11156fa0 */
  push32(0x1115b04bu); f_11156fa0();
  /* 1115b04b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1115b04e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115b051 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 1115b054 push ecx */
  push32((uint32_t)(ECX));
  /* 1115b055 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115b058 push edx */
  push32((uint32_t)(EDX));
  /* 1115b059 call 0x1115b200 */
  push32(0x1115b05eu); f_1115b200();
  /* 1115b05e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b061 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1115b064 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b068 je 0x1115b073 */
  if (C.zf) goto L_1115b073;
  /* 1115b06a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115b06d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b071 jne 0x1115b082 */
  if (!C.zf) goto L_1115b082;
L_1115b073:;
  /* 1115b073 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115b076 push ecx */
  push32((uint32_t)(ECX));
  /* 1115b077 call dword ptr [0x1118635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1118635c))), 0x1115b07du);
  /* 1115b07d jmp 0x1115b1fa */
  goto L_1115b1fa;
L_1115b082:;
  /* 1115b082 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115b085 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b089 jne 0x1115b09f */
  if (!C.zf) goto L_1115b09f;
  /* 1115b08b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115b08e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1115b095 mov eax, 1 */
  EAX = (0x1u);
  /* 1115b09a jmp 0x1115b1fa */
  goto L_1115b1fa;
L_1115b09f:;
  /* 1115b09f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115b0a2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b0a6 jne 0x1115b0b0 */
  if (!C.zf) goto L_1115b0b0;
  /* 1115b0a8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1115b0ab jmp 0x1115b1fa */
  goto L_1115b1fa;
L_1115b0b0:;
  /* 1115b0b0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115b0b3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1115b0b6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1115b0b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115b0bc mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 1115b0bf mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1115b0c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115b0c5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115b0c8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 1115b0cb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115b0ce cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b0d2 jne 0x1115b1d7 */
  if (!C.zf) goto L_1115b1d7;
  /* 1115b0d8 mov eax, dword ptr [0x11181c78] */
  EAX = (r32((uint32_t)(0x11181c78)));
  /* 1115b0dd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1115b0e0 jmp 0x1115b0eb */
  goto L_1115b0eb;
L_1115b0e2:;
  /* 1115b0e2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115b0e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b0e8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1115b0eb:;
  /* 1115b0eb mov edx, dword ptr [0x11181c78] */
  EDX = (r32((uint32_t)(0x11181c78)));
  /* 1115b0f1 add edx, dword ptr [0x11181c7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11181c7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b0f7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b0fa jge 0x1115b112 */
  if ((C.sf==C.of)) goto L_1115b112;
  /* 1115b0fc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115b0ff imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1115b102 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115b105 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1115b108 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1115b110 jmp 0x1115b0e2 */
  goto L_1115b0e2;
L_1115b112:;
  /* 1115b112 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115b115 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 1115b118 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1115b11b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115b11e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b124 jne 0x1115b135 */
  if (!C.zf) goto L_1115b135;
  /* 1115b126 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115b129 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 1115b130 jmp 0x1115b1bd */
  goto L_1115b1bd;
L_1115b135:;
  /* 1115b135 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115b138 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b13e jne 0x1115b14c */
  if (!C.zf) goto L_1115b14c;
  /* 1115b140 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115b143 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 1115b14a jmp 0x1115b1bd */
  goto L_1115b1bd;
L_1115b14c:;
  /* 1115b14c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115b14f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b155 jne 0x1115b163 */
  if (!C.zf) goto L_1115b163;
  /* 1115b157 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115b15a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 1115b161 jmp 0x1115b1bd */
  goto L_1115b1bd;
L_1115b163:;
  /* 1115b163 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115b166 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b16c jne 0x1115b17a */
  if (!C.zf) goto L_1115b17a;
  /* 1115b16e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115b171 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 1115b178 jmp 0x1115b1bd */
  goto L_1115b1bd;
L_1115b17a:;
  /* 1115b17a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115b17d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b183 jne 0x1115b191 */
  if (!C.zf) goto L_1115b191;
  /* 1115b185 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115b188 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 1115b18f jmp 0x1115b1bd */
  goto L_1115b1bd;
L_1115b191:;
  /* 1115b191 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115b194 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b19a jne 0x1115b1a8 */
  if (!C.zf) goto L_1115b1a8;
  /* 1115b19c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115b19f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 1115b1a6 jmp 0x1115b1bd */
  goto L_1115b1bd;
L_1115b1a8:;
  /* 1115b1a8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115b1ab cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b1b1 jne 0x1115b1bd */
  if (!C.zf) goto L_1115b1bd;
  /* 1115b1b3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115b1b6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_1115b1bd:;
  /* 1115b1bd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115b1c0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 1115b1c3 push edx */
  push32((uint32_t)(EDX));
  /* 1115b1c4 push 8 */
  push32((uint32_t)(0x8u));
  /* 1115b1c6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1115b1c9u);
  /* 1115b1c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b1cc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115b1cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115b1d2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 1115b1d5 jmp 0x1115b1ee */
  goto L_1115b1ee;
L_1115b1d7:;
  /* 1115b1d7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115b1da mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 1115b1e1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115b1e4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1115b1e7 push ecx */
  push32((uint32_t)(ECX));
  /* 1115b1e8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1115b1ebu);
  /* 1115b1eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1115b1ee:;
  /* 1115b1ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115b1f1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1115b1f4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 1115b1f7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1115b1fa:;
  /* 1115b1fa mov esp, ebp */
  ESP = (EBP);
  /* 1115b1fc pop ebp */
  EBP = (pop32());
  /* 1115b1fd ret  */
  ESPCHK(0x1115b040u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b200 @ 0x1115b200 (89 bytes, 35 insns) */
void f_1115b200(void) {
  FTRACE(0x1115b200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115b200 push ebp */
  push32((uint32_t)(EBP));
  /* 1115b201 mov ebp, esp */
  EBP = (ESP);
  /* 1115b203 push ecx */
  push32((uint32_t)(ECX));
  /* 1115b204 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115b207 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1115b20a:;
  /* 1115b20a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115b20d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1115b20f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b212 je 0x1115b232 */
  if (C.zf) goto L_1115b232;
  /* 1115b214 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115b217 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b21a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1115b21d mov ecx, dword ptr [0x11181c84] */
  ECX = (r32((uint32_t)(0x11181c84)));
  /* 1115b223 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1115b226 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115b229 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b22b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b22e jae 0x1115b232 */
  if (!C.cf) goto L_1115b232;
  /* 1115b230 jmp 0x1115b20a */
  goto L_1115b20a;
L_1115b232:;
  /* 1115b232 mov eax, dword ptr [0x11181c84] */
  EAX = (r32((uint32_t)(0x11181c84)));
  /* 1115b237 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1115b23a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115b23d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b23f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b242 jae 0x1115b24e */
  if (!C.cf) goto L_1115b24e;
  /* 1115b244 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115b247 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1115b249 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b24c je 0x1115b252 */
  if (C.zf) goto L_1115b252;
L_1115b24e:;
  /* 1115b24e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115b250 jmp 0x1115b255 */
  goto L_1115b255;
L_1115b252:;
  /* 1115b252 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1115b255:;
  /* 1115b255 mov esp, ebp */
  ESP = (EBP);
  /* 1115b257 pop ebp */
  EBP = (pop32());
  /* 1115b258 ret  */
  ESPCHK(0x1115b200u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x1115b260 (48 bytes, 17 insns) */
void f_1115b260(void) {
  FTRACE(0x1115b260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115b260 push ebp */
  push32((uint32_t)(EBP));
  /* 1115b261 mov ebp, esp */
  EBP = (ESP);
  /* 1115b263 push ecx */
  push32((uint32_t)(ECX));
  /* 1115b264 push 9 */
  push32((uint32_t)(0x9u));
  /* 1115b266 call 0x1115af60 */
  push32(0x1115b26bu); f_1115af60();
  /* 1115b26b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b26e mov eax, dword ptr [0x111839dc] */
  EAX = (r32((uint32_t)(0x111839dc)));
  /* 1115b273 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1115b276 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115b279 mov dword ptr [0x111839dc], ecx */
  w32((uint32_t)(0x111839dc), (ECX));
  /* 1115b27f push 9 */
  push32((uint32_t)(0x9u));
  /* 1115b281 call 0x1115b000 */
  push32(0x1115b286u); f_1115b000();
  /* 1115b286 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b289 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115b28c mov esp, ebp */
  ESP = (EBP);
  /* 1115b28e pop ebp */
  EBP = (pop32());
  /* 1115b28f ret  */
  ESPCHK(0x1115b260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b290 @ 0x1115b290 (10 bytes, 5 insns) */
void f_1115b290(void) {
  FTRACE(0x1115b290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115b290 push ebp */
  push32((uint32_t)(EBP));
  /* 1115b291 mov ebp, esp */
  EBP = (ESP);
  /* 1115b293 mov eax, dword ptr [0x111839dc] */
  EAX = (r32((uint32_t)(0x111839dc)));
  /* 1115b298 pop ebp */
  EBP = (pop32());
  /* 1115b299 ret  */
  ESPCHK(0x1115b290u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x1115b2a0 (45 bytes, 19 insns) */
void f_1115b2a0(void) {
  FTRACE(0x1115b2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115b2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1115b2a1 mov ebp, esp */
  EBP = (ESP);
  /* 1115b2a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1115b2a4 mov eax, dword ptr [0x111839dc] */
  EAX = (r32((uint32_t)(0x111839dc)));
  /* 1115b2a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1115b2ac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b2b0 je 0x1115b2c0 */
  if (C.zf) goto L_1115b2c0;
  /* 1115b2b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115b2b5 push ecx */
  push32((uint32_t)(ECX));
  /* 1115b2b6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1115b2b9u);
  /* 1115b2b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b2bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115b2be jne 0x1115b2c4 */
  if (!C.zf) goto L_1115b2c4;
L_1115b2c0:;
  /* 1115b2c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115b2c2 jmp 0x1115b2c9 */
  goto L_1115b2c9;
L_1115b2c4:;
  /* 1115b2c4 mov eax, 1 */
  EAX = (0x1u);
L_1115b2c9:;
  /* 1115b2c9 mov esp, ebp */
  ESP = (EBP);
  /* 1115b2cb pop ebp */
  EBP = (pop32());
  /* 1115b2cc ret  */
  ESPCHK(0x1115b2a0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x1115b2d0 (88 bytes, 40 insns) */
void f_1115b2d0(void) {
  FTRACE(0x1115b2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115b2d0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1115b2d4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1115b2d8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115b2da je 0x1115b323 */
  if (C.zf) goto L_1115b323;
  /* 1115b2dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115b2de mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 1115b2e2 push edi */
  push32((uint32_t)(EDI));
  /* 1115b2e3 mov edi, ecx */
  EDI = (ECX);
  /* 1115b2e5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b2e8 jb 0x1115b317 */
  if (C.cf) goto L_1115b317;
  /* 1115b2ea neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1115b2ec and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1115b2ef je 0x1115b2f9 */
  if (C.zf) goto L_1115b2f9;
  /* 1115b2f1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1115b2f3:;
  /* 1115b2f3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1115b2f5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1115b2f6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1115b2f7 jne 0x1115b2f3 */
  if (!C.zf) goto L_1115b2f3;
L_1115b2f9:;
  /* 1115b2f9 mov ecx, eax */
  ECX = (EAX);
  /* 1115b2fb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1115b2fe add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b300 mov ecx, eax */
  ECX = (EAX);
  /* 1115b302 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1115b305 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b307 mov ecx, edx */
  ECX = (EDX);
  /* 1115b309 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1115b30c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1115b30f je 0x1115b317 */
  if (C.zf) goto L_1115b317;
  /* 1115b311 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1115b313 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1115b315 je 0x1115b31d */
  if (C.zf) goto L_1115b31d;
L_1115b317:;
  /* 1115b317 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1115b319 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1115b31a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1115b31b jne 0x1115b317 */
  if (!C.zf) goto L_1115b317;
L_1115b31d:;
  /* 1115b31d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1115b321 pop edi */
  EDI = (pop32());
  /* 1115b322 ret  */
  ESPCHK(0x1115b2d0u, _esp0);
  ESP += 4; return;
L_1115b323:;
  /* 1115b323 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1115b327 ret  */
  ESPCHK(0x1115b2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b330 @ 0x1115b330 (23 bytes, 10 insns) */
void f_1115b330(void) {
  FTRACE(0x1115b330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115b330 push ebp */
  push32((uint32_t)(EBP));
  /* 1115b331 mov ebp, esp */
  EBP = (ESP);
  /* 1115b333 mov eax, dword ptr [0x111839d8] */
  EAX = (r32((uint32_t)(0x111839d8)));
  /* 1115b338 push eax */
  push32((uint32_t)(EAX));
  /* 1115b339 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115b33c push ecx */
  push32((uint32_t)(ECX));
  /* 1115b33d call 0x1115b350 */
  push32(0x1115b342u); f_1115b350();
  /* 1115b342 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b345 pop ebp */
  EBP = (pop32());
  /* 1115b346 ret  */
  ESPCHK(0x1115b330u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x1115b350 (87 bytes, 34 insns) */
void f_1115b350(void) {
  FTRACE(0x1115b350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115b350 push ebp */
  push32((uint32_t)(EBP));
  /* 1115b351 mov ebp, esp */
  EBP = (ESP);
  /* 1115b353 push ecx */
  push32((uint32_t)(ECX));
  /* 1115b354 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b358 jbe 0x1115b35e */
  if ((C.cf||C.zf)) goto L_1115b35e;
  /* 1115b35a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115b35c jmp 0x1115b3a3 */
  goto L_1115b3a3;
L_1115b35e:;
  /* 1115b35e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b362 ja 0x1115b375 */
  if ((!C.cf&&!C.zf)) goto L_1115b375;
  /* 1115b364 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115b367 push eax */
  push32((uint32_t)(EAX));
  /* 1115b368 call 0x1115b3b0 */
  push32(0x1115b36du); f_1115b3b0();
  /* 1115b36d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b370 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1115b373 jmp 0x1115b37c */
  goto L_1115b37c;
L_1115b375:;
  /* 1115b375 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1115b37c:;
  /* 1115b37c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b380 jne 0x1115b388 */
  if (!C.zf) goto L_1115b388;
  /* 1115b382 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b386 jne 0x1115b38d */
  if (!C.zf) goto L_1115b38d;
L_1115b388:;
  /* 1115b388 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115b38b jmp 0x1115b3a3 */
  goto L_1115b3a3;
L_1115b38d:;
  /* 1115b38d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115b390 push ecx */
  push32((uint32_t)(ECX));
  /* 1115b391 call 0x1115b2a0 */
  push32(0x1115b396u); f_1115b2a0();
  /* 1115b396 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b399 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115b39b jne 0x1115b3a1 */
  if (!C.zf) goto L_1115b3a1;
  /* 1115b39d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115b39f jmp 0x1115b3a3 */
  goto L_1115b3a3;
L_1115b3a1:;
  /* 1115b3a1 jmp 0x1115b35e */
  goto L_1115b35e;
L_1115b3a3:;
  /* 1115b3a3 mov esp, ebp */
  ESP = (EBP);
  /* 1115b3a5 pop ebp */
  EBP = (pop32());
  /* 1115b3a6 ret  */
  ESPCHK(0x1115b350u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b3b0 @ 0x1115b3b0 (109 bytes, 37 insns) */
void f_1115b3b0(void) {
  FTRACE(0x1115b3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115b3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1115b3b1 mov ebp, esp */
  EBP = (ESP);
  /* 1115b3b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1115b3b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115b3b7 cmp eax, dword ptr [0x11181c94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11181c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b3bd ja 0x1115b3ed */
  if ((!C.cf&&!C.zf)) goto L_1115b3ed;
  /* 1115b3bf push 9 */
  push32((uint32_t)(0x9u));
  /* 1115b3c1 call 0x1115af60 */
  push32(0x1115b3c6u); f_1115af60();
  /* 1115b3c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b3c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115b3cc push ecx */
  push32((uint32_t)(ECX));
  /* 1115b3cd call 0x1115bef0 */
  push32(0x1115b3d2u); f_1115bef0();
  /* 1115b3d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b3d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1115b3d8 push 9 */
  push32((uint32_t)(0x9u));
  /* 1115b3da call 0x1115b000 */
  push32(0x1115b3dfu); f_1115b000();
  /* 1115b3df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b3e2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b3e6 je 0x1115b3ed */
  if (C.zf) goto L_1115b3ed;
  /* 1115b3e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115b3eb jmp 0x1115b419 */
  goto L_1115b419;
L_1115b3ed:;
  /* 1115b3ed cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b3f1 jne 0x1115b3fa */
  if (!C.zf) goto L_1115b3fa;
  /* 1115b3f3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_1115b3fa:;
  /* 1115b3fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115b3fd add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b400 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1115b403 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1115b406 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115b409 push eax */
  push32((uint32_t)(EAX));
  /* 1115b40a push 0 */
  push32((uint32_t)(0x0u));
  /* 1115b40c mov ecx, dword ptr [0x1118518c] */
  ECX = (r32((uint32_t)(0x1118518c)));
  /* 1115b412 push ecx */
  push32((uint32_t)(ECX));
  /* 1115b413 call dword ptr [0x11186358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186358))), 0x1115b419u);
L_1115b419:;
  /* 1115b419 mov esp, ebp */
  ESP = (EBP);
  /* 1115b41b pop ebp */
  EBP = (pop32());
  /* 1115b41c ret  */
  ESPCHK(0x1115b3b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b420 @ 0x1115b420 (10 bytes, 5 insns) */
void f_1115b420(void) {
  FTRACE(0x1115b420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115b420 push ebp */
  push32((uint32_t)(EBP));
  /* 1115b421 mov ebp, esp */
  EBP = (ESP);
  /* 1115b423 mov eax, 1 */
  EAX = (0x1u);
  /* 1115b428 pop ebp */
  EBP = (pop32());
  /* 1115b429 ret  */
  ESPCHK(0x1115b420u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b430 @ 0x1115b430 (173 bytes, 59 insns) */
void f_1115b430(void) {
  FTRACE(0x1115b430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115b430 push ebp */
  push32((uint32_t)(EBP));
  /* 1115b431 mov ebp, esp */
  EBP = (ESP);
  /* 1115b433 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115b436 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b43a jbe 0x1115b443 */
  if ((C.cf||C.zf)) goto L_1115b443;
  /* 1115b43c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115b43e jmp 0x1115b4d9 */
  goto L_1115b4d9;
L_1115b443:;
  /* 1115b443 push 9 */
  push32((uint32_t)(0x9u));
  /* 1115b445 call 0x1115af60 */
  push32(0x1115b44au); f_1115af60();
  /* 1115b44a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b44d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115b450 push eax */
  push32((uint32_t)(EAX));
  /* 1115b451 call 0x1115b860 */
  push32(0x1115b456u); f_1115b860();
  /* 1115b456 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b459 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1115b45c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b460 je 0x1115b4a1 */
  if (C.zf) goto L_1115b4a1;
  /* 1115b462 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1115b469 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115b46c cmp ecx, dword ptr [0x11181c94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11181c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b472 ja 0x1115b492 */
  if ((!C.cf&&!C.zf)) goto L_1115b492;
  /* 1115b474 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115b477 push edx */
  push32((uint32_t)(EDX));
  /* 1115b478 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115b47b push eax */
  push32((uint32_t)(EAX));
  /* 1115b47c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115b47f push ecx */
  push32((uint32_t)(ECX));
  /* 1115b480 call 0x1115c730 */
  push32(0x1115b485u); f_1115c730();
  /* 1115b485 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b488 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115b48a je 0x1115b492 */
  if (C.zf) goto L_1115b492;
  /* 1115b48c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115b48f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1115b492:;
  /* 1115b492 push 9 */
  push32((uint32_t)(0x9u));
  /* 1115b494 call 0x1115b000 */
  push32(0x1115b499u); f_1115b000();
  /* 1115b499 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b49c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115b49f jmp 0x1115b4d9 */
  goto L_1115b4d9;
L_1115b4a1:;
  /* 1115b4a1 push 9 */
  push32((uint32_t)(0x9u));
  /* 1115b4a3 call 0x1115b000 */
  push32(0x1115b4a8u); f_1115b000();
  /* 1115b4a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b4ab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b4af jne 0x1115b4b8 */
  if (!C.zf) goto L_1115b4b8;
  /* 1115b4b1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1115b4b8:;
  /* 1115b4b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115b4bb add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b4be and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1115b4c0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1115b4c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115b4c6 push ecx */
  push32((uint32_t)(ECX));
  /* 1115b4c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115b4ca push edx */
  push32((uint32_t)(EDX));
  /* 1115b4cb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1115b4cd mov eax, dword ptr [0x1118518c] */
  EAX = (r32((uint32_t)(0x1118518c)));
  /* 1115b4d2 push eax */
  push32((uint32_t)(EAX));
  /* 1115b4d3 call dword ptr [0x11186354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186354))), 0x1115b4d9u);
L_1115b4d9:;
  /* 1115b4d9 mov esp, ebp */
  ESP = (EBP);
  /* 1115b4db pop ebp */
  EBP = (pop32());
  /* 1115b4dc ret  */
  ESPCHK(0x1115b430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b4e0 @ 0x1115b4e0 (490 bytes, 165 insns) */
void f_1115b4e0(void) {
  FTRACE(0x1115b4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115b4e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1115b4e1 mov ebp, esp */
  EBP = (ESP);
  /* 1115b4e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115b4e6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b4ea jne 0x1115b4fd */
  if (!C.zf) goto L_1115b4fd;
  /* 1115b4ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115b4ef push eax */
  push32((uint32_t)(EAX));
  /* 1115b4f0 call 0x1115b330 */
  push32(0x1115b4f5u); f_1115b330();
  /* 1115b4f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b4f8 jmp 0x1115b6c6 */
  goto L_1115b6c6;
L_1115b4fd:;
  /* 1115b4fd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b501 jne 0x1115b516 */
  if (!C.zf) goto L_1115b516;
  /* 1115b503 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115b506 push ecx */
  push32((uint32_t)(ECX));
  /* 1115b507 call 0x1115b6d0 */
  push32(0x1115b50cu); f_1115b6d0();
  /* 1115b50c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b50f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115b511 jmp 0x1115b6c6 */
  goto L_1115b6c6;
L_1115b516:;
  /* 1115b516 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1115b51d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b521 ja 0x1115b699 */
  if ((!C.cf&&!C.zf)) goto L_1115b699;
  /* 1115b527 push 9 */
  push32((uint32_t)(0x9u));
  /* 1115b529 call 0x1115af60 */
  push32(0x1115b52eu); f_1115af60();
  /* 1115b52e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b531 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115b534 push edx */
  push32((uint32_t)(EDX));
  /* 1115b535 call 0x1115b860 */
  push32(0x1115b53au); f_1115b860();
  /* 1115b53a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b53d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1115b540 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b544 je 0x1115b65c */
  if (C.zf) goto L_1115b65c;
  /* 1115b54a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115b54d cmp eax, dword ptr [0x11181c94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11181c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b553 ja 0x1115b5d0 */
  if ((!C.cf&&!C.zf)) goto L_1115b5d0;
  /* 1115b555 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115b558 push ecx */
  push32((uint32_t)(ECX));
  /* 1115b559 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115b55c push edx */
  push32((uint32_t)(EDX));
  /* 1115b55d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115b560 push eax */
  push32((uint32_t)(EAX));
  /* 1115b561 call 0x1115c730 */
  push32(0x1115b566u); f_1115c730();
  /* 1115b566 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b569 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115b56b je 0x1115b575 */
  if (C.zf) goto L_1115b575;
  /* 1115b56d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115b570 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1115b573 jmp 0x1115b5d0 */
  goto L_1115b5d0;
L_1115b575:;
  /* 1115b575 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115b578 push edx */
  push32((uint32_t)(EDX));
  /* 1115b579 call 0x1115bef0 */
  push32(0x1115b57eu); f_1115bef0();
  /* 1115b57e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b581 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1115b584 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b588 je 0x1115b5d0 */
  if (C.zf) goto L_1115b5d0;
  /* 1115b58a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115b58d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 1115b590 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115b593 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1115b596 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115b599 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b59c jae 0x1115b5a6 */
  if (!C.cf) goto L_1115b5a6;
  /* 1115b59e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115b5a1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1115b5a4 jmp 0x1115b5ac */
  goto L_1115b5ac;
L_1115b5a6:;
  /* 1115b5a6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115b5a9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1115b5ac:;
  /* 1115b5ac mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1115b5af push edx */
  push32((uint32_t)(EDX));
  /* 1115b5b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115b5b3 push eax */
  push32((uint32_t)(EAX));
  /* 1115b5b4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115b5b7 push ecx */
  push32((uint32_t)(ECX));
  /* 1115b5b8 call 0x1115de40 */
  push32(0x1115b5bdu); f_1115de40();
  /* 1115b5bd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b5c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115b5c3 push edx */
  push32((uint32_t)(EDX));
  /* 1115b5c4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115b5c7 push eax */
  push32((uint32_t)(EAX));
  /* 1115b5c8 call 0x1115b920 */
  push32(0x1115b5cdu); f_1115b920();
  /* 1115b5cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1115b5d0:;
  /* 1115b5d0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b5d4 jne 0x1115b650 */
  if (!C.zf) goto L_1115b650;
  /* 1115b5d6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b5da jne 0x1115b5e3 */
  if (!C.zf) goto L_1115b5e3;
  /* 1115b5dc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1115b5e3:;
  /* 1115b5e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115b5e6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b5e9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1115b5ec mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1115b5ef mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115b5f2 push edx */
  push32((uint32_t)(EDX));
  /* 1115b5f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115b5f5 mov eax, dword ptr [0x1118518c] */
  EAX = (r32((uint32_t)(0x1118518c)));
  /* 1115b5fa push eax */
  push32((uint32_t)(EAX));
  /* 1115b5fb call dword ptr [0x11186358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186358))), 0x1115b601u);
  /* 1115b601 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1115b604 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b608 je 0x1115b650 */
  if (C.zf) goto L_1115b650;
  /* 1115b60a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115b60d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1115b610 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1115b613 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1115b616 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115b619 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b61c jae 0x1115b626 */
  if (!C.cf) goto L_1115b626;
  /* 1115b61e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115b621 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1115b624 jmp 0x1115b62c */
  goto L_1115b62c;
L_1115b626:;
  /* 1115b626 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115b629 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1115b62c:;
  /* 1115b62c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1115b62f push eax */
  push32((uint32_t)(EAX));
  /* 1115b630 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115b633 push ecx */
  push32((uint32_t)(ECX));
  /* 1115b634 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115b637 push edx */
  push32((uint32_t)(EDX));
  /* 1115b638 call 0x1115de40 */
  push32(0x1115b63du); f_1115de40();
  /* 1115b63d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b640 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115b643 push eax */
  push32((uint32_t)(EAX));
  /* 1115b644 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1115b647 push ecx */
  push32((uint32_t)(ECX));
  /* 1115b648 call 0x1115b920 */
  push32(0x1115b64du); f_1115b920();
  /* 1115b64d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1115b650:;
  /* 1115b650 push 9 */
  push32((uint32_t)(0x9u));
  /* 1115b652 call 0x1115b000 */
  push32(0x1115b657u); f_1115b000();
  /* 1115b657 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b65a jmp 0x1115b699 */
  goto L_1115b699;
L_1115b65c:;
  /* 1115b65c push 9 */
  push32((uint32_t)(0x9u));
  /* 1115b65e call 0x1115b000 */
  push32(0x1115b663u); f_1115b000();
  /* 1115b663 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b666 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b66a jne 0x1115b673 */
  if (!C.zf) goto L_1115b673;
  /* 1115b66c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1115b673:;
  /* 1115b673 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115b676 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b679 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1115b67c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1115b67f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115b682 push eax */
  push32((uint32_t)(EAX));
  /* 1115b683 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115b686 push ecx */
  push32((uint32_t)(ECX));
  /* 1115b687 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115b689 mov edx, dword ptr [0x1118518c] */
  EDX = (r32((uint32_t)(0x1118518c)));
  /* 1115b68f push edx */
  push32((uint32_t)(EDX));
  /* 1115b690 call dword ptr [0x11186354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186354))), 0x1115b696u);
  /* 1115b696 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1115b699:;
  /* 1115b699 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b69d jne 0x1115b6a8 */
  if (!C.zf) goto L_1115b6a8;
  /* 1115b69f cmp dword ptr [0x111839d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111839d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b6a6 jne 0x1115b6ad */
  if (!C.zf) goto L_1115b6ad;
L_1115b6a8:;
  /* 1115b6a8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1115b6ab jmp 0x1115b6c6 */
  goto L_1115b6c6;
L_1115b6ad:;
  /* 1115b6ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1115b6b0 push eax */
  push32((uint32_t)(EAX));
  /* 1115b6b1 call 0x1115b2a0 */
  push32(0x1115b6b6u); f_1115b2a0();
  /* 1115b6b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b6b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115b6bb jne 0x1115b6c1 */
  if (!C.zf) goto L_1115b6c1;
  /* 1115b6bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1115b6bf jmp 0x1115b6c6 */
  goto L_1115b6c6;
L_1115b6c1:;
  /* 1115b6c1 jmp 0x1115b516 */
  goto L_1115b516;
L_1115b6c6:;
  /* 1115b6c6 mov esp, ebp */
  ESP = (EBP);
  /* 1115b6c8 pop ebp */
  EBP = (pop32());
  /* 1115b6c9 ret  */
  ESPCHK(0x1115b4e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6d0 @ 0x1115b6d0 (104 bytes, 38 insns) */
void f_1115b6d0(void) {
  FTRACE(0x1115b6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115b6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1115b6d1 mov ebp, esp */
  EBP = (ESP);
  /* 1115b6d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1115b6d4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b6d8 jne 0x1115b6dc */
  if (!C.zf) goto L_1115b6dc;
  /* 1115b6da jmp 0x1115b734 */
  goto L_1115b734;
L_1115b6dc:;
  /* 1115b6dc push 9 */
  push32((uint32_t)(0x9u));
  /* 1115b6de call 0x1115af60 */
  push32(0x1115b6e3u); f_1115af60();
  /* 1115b6e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b6e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115b6e9 push eax */
  push32((uint32_t)(EAX));
  /* 1115b6ea call 0x1115b860 */
  push32(0x1115b6efu); f_1115b860();
  /* 1115b6ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b6f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1115b6f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b6f9 je 0x1115b717 */
  if (C.zf) goto L_1115b717;
  /* 1115b6fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115b6fe push ecx */
  push32((uint32_t)(ECX));
  /* 1115b6ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115b702 push edx */
  push32((uint32_t)(EDX));
  /* 1115b703 call 0x1115b920 */
  push32(0x1115b708u); f_1115b920();
  /* 1115b708 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b70b push 9 */
  push32((uint32_t)(0x9u));
  /* 1115b70d call 0x1115b000 */
  push32(0x1115b712u); f_1115b000();
  /* 1115b712 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b715 jmp 0x1115b734 */
  goto L_1115b734;
L_1115b717:;
  /* 1115b717 push 9 */
  push32((uint32_t)(0x9u));
  /* 1115b719 call 0x1115b000 */
  push32(0x1115b71eu); f_1115b000();
  /* 1115b71e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b721 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1115b724 push eax */
  push32((uint32_t)(EAX));
  /* 1115b725 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115b727 mov ecx, dword ptr [0x1118518c] */
  ECX = (r32((uint32_t)(0x1118518c)));
  /* 1115b72d push ecx */
  push32((uint32_t)(ECX));
  /* 1115b72e call dword ptr [0x11186378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186378))), 0x1115b734u);
L_1115b734:;
  /* 1115b734 mov esp, ebp */
  ESP = (EBP);
  /* 1115b736 pop ebp */
  EBP = (pop32());
  /* 1115b737 ret  */
  ESPCHK(0x1115b6d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b740 @ 0x1115b740 (116 bytes, 34 insns) */
void f_1115b740(void) {
  FTRACE(0x1115b740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115b740 push ebp */
  push32((uint32_t)(EBP));
  /* 1115b741 mov ebp, esp */
  EBP = (ESP);
  /* 1115b743 push ecx */
  push32((uint32_t)(ECX));
  /* 1115b744 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 1115b74b push 9 */
  push32((uint32_t)(0x9u));
  /* 1115b74d call 0x1115af60 */
  push32(0x1115b752u); f_1115af60();
  /* 1115b752 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b755 call 0x1115ce50 */
  push32(0x1115b75au); f_1115ce50();
  /* 1115b75a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115b75c jge 0x1115b765 */
  if ((C.sf==C.of)) goto L_1115b765;
  /* 1115b75e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1115b765:;
  /* 1115b765 push 9 */
  push32((uint32_t)(0x9u));
  /* 1115b767 call 0x1115b000 */
  push32(0x1115b76cu); f_1115b000();
  /* 1115b76c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1115b76f push 0 */
  push32((uint32_t)(0x0u));
  /* 1115b771 push 0 */
  push32((uint32_t)(0x0u));
  /* 1115b773 mov eax, dword ptr [0x1118518c] */
  EAX = (r32((uint32_t)(0x1118518c)));
  /* 1115b778 push eax */
  push32((uint32_t)(EAX));
  /* 1115b779 call dword ptr [0x11186398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186398))), 0x1115b77fu);
  /* 1115b77f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1115b781 jne 0x1115b7ad */
  if (!C.zf) goto L_1115b7ad;
  /* 1115b783 call dword ptr [0x11186400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11186400))), 0x1115b789u);
  /* 1115b789 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1115b78c jne 0x1115b7a6 */
  if (!C.zf) goto L_1115b7a6;
  /* 1115b78e call 0x1115f440 */
  push32(0x1115b793u); f_1115f440();
  /* 1115b793 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 1115b799 call 0x1115f430 */
  push32(0x1115b79eu); f_1115f430();
  /* 1115b79e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 1115b7a4 jmp 0x1115b7ad */
  goto L_1115b7ad;
L_1115b7a6:;
  /* 1115b7a6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1115b7ad:;
  /* 1115b7ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1115b7b0 mov esp, ebp */
  ESP = (EBP);
  /* 1115b7b2 pop ebp */
  EBP = (pop32());
  /* 1115b7b3 ret  */
  ESPCHK(0x1115b740u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7c0 @ 0x1115b7c0 (10 bytes, 5 insns) */
void f_1115b7c0(void) {
  FTRACE(0x1115b7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1115b7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1115b7c1 mov ebp, esp */
  EBP = (ESP);
  /* 1115b7c3 call 0x1115b740 */
  push32(0x1115b7c8u); f_1115b740();
  /* 1115b7c8 pop ebp */
  EBP = (pop32());
  /* 1115b7c9 ret  */
  ESPCHK(0x1115b7c0u, _esp0);
  ESP += 4; return;
}

