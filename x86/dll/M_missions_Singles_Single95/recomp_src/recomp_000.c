#include "recomp.h"

/* OnInit @ 0x12021005 (5 bytes, 1 insns) */
void f_12021005(void) {
  FTRACE(0x12021005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12021005 jmp 0x12021030 */
  f_12021030(); return;
}

/* thunk_FUN_10002350 @ 0x1202100a (5 bytes, 1 insns) */
void f_1202100a(void) {
  FTRACE(0x1202100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202100a jmp 0x12022350 */
  f_12022350(); return;
}

/* ProcessScenary @ 0x1202100f (5 bytes, 1 insns) */
void f_1202100f(void) {
  FTRACE(0x1202100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202100f jmp 0x120223b0 */
  f_120223b0(); return;
}

/* FUN_10001030 @ 0x12021030 (3907 bytes, 1040 insns) */
void f_12021030(void) {
  FTRACE(0x12021030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12021030 push ebp */
  push32((uint32_t)(EBP));
  /* 12021031 mov ebp, esp */
  EBP = (ESP);
  /* 12021033 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12021036 push ebx */
  push32((uint32_t)(EBX));
  /* 12021037 push esi */
  push32((uint32_t)(ESI));
  /* 12021038 push edi */
  push32((uint32_t)(EDI));
  /* 12021039 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1202103c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12021041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12021046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12021048 mov esi, esp */
  ESI = (ESP);
  /* 1202104a push 0x1204d3c8 */
  push32((uint32_t)(0x1204d3c8u));
  /* 1202104f push 0x120524b8 */
  push32((uint32_t)(0x120524b8u));
  /* 12021054 call dword ptr [0x12055504] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055504))), 0x1202105au);
  /* 1202105a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202105d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202105f call 0x12025c50 */
  push32(0x12021064u); f_12025c50();
  /* 12021064 mov esi, esp */
  ESI = (ESP);
  /* 12021066 push 0x1204d3c0 */
  push32((uint32_t)(0x1204d3c0u));
  /* 1202106b push 0x120524b0 */
  push32((uint32_t)(0x120524b0u));
  /* 12021070 call dword ptr [0x12055504] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055504))), 0x12021076u);
  /* 12021076 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021079 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202107b call 0x12025c50 */
  push32(0x12021080u); f_12025c50();
  /* 12021080 mov esi, esp */
  ESI = (ESP);
  /* 12021082 push 0x1204d3b8 */
  push32((uint32_t)(0x1204d3b8u));
  /* 12021087 push 0x120524c0 */
  push32((uint32_t)(0x120524c0u));
  /* 1202108c call dword ptr [0x12055504] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055504))), 0x12021092u);
  /* 12021092 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021095 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021097 call 0x12025c50 */
  push32(0x1202109cu); f_12025c50();
  /* 1202109c mov esi, esp */
  ESI = (ESP);
  /* 1202109e push 0x1204d3ac */
  push32((uint32_t)(0x1204d3acu));
  /* 120210a3 push 0x120524f0 */
  push32((uint32_t)(0x120524f0u));
  /* 120210a8 call dword ptr [0x12055504] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055504))), 0x120210aeu);
  /* 120210ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120210b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120210b3 call 0x12025c50 */
  push32(0x120210b8u); f_12025c50();
  /* 120210b8 mov esi, esp */
  ESI = (ESP);
  /* 120210ba push 0x1204d3a0 */
  push32((uint32_t)(0x1204d3a0u));
  /* 120210bf push 0x120524e8 */
  push32((uint32_t)(0x120524e8u));
  /* 120210c4 call dword ptr [0x12055504] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055504))), 0x120210cau);
  /* 120210ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120210cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120210cf call 0x12025c50 */
  push32(0x120210d4u); f_12025c50();
  /* 120210d4 mov esi, esp */
  ESI = (ESP);
  /* 120210d6 push 0x1204d394 */
  push32((uint32_t)(0x1204d394u));
  /* 120210db push 0x120524e0 */
  push32((uint32_t)(0x120524e0u));
  /* 120210e0 call dword ptr [0x12055504] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055504))), 0x120210e6u);
  /* 120210e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120210e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120210eb call 0x12025c50 */
  push32(0x120210f0u); f_12025c50();
  /* 120210f0 mov esi, esp */
  ESI = (ESP);
  /* 120210f2 push 0x1204d388 */
  push32((uint32_t)(0x1204d388u));
  /* 120210f7 push 0x120524d8 */
  push32((uint32_t)(0x120524d8u));
  /* 120210fc call dword ptr [0x12055504] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055504))), 0x12021102u);
  /* 12021102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021107 call 0x12025c50 */
  push32(0x1202110cu); f_12025c50();
  /* 1202110c mov esi, esp */
  ESI = (ESP);
  /* 1202110e push 0x1204d37c */
  push32((uint32_t)(0x1204d37cu));
  /* 12021113 push 0x120524d0 */
  push32((uint32_t)(0x120524d0u));
  /* 12021118 call dword ptr [0x12055504] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055504))), 0x1202111eu);
  /* 1202111e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021121 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021123 call 0x12025c50 */
  push32(0x12021128u); f_12025c50();
  /* 12021128 mov esi, esp */
  ESI = (ESP);
  /* 1202112a push 0x1204d370 */
  push32((uint32_t)(0x1204d370u));
  /* 1202112f push 0x120524f8 */
  push32((uint32_t)(0x120524f8u));
  /* 12021134 call dword ptr [0x12055504] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055504))), 0x1202113au);
  /* 1202113a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202113d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202113f call 0x12025c50 */
  push32(0x12021144u); f_12025c50();
  /* 12021144 mov esi, esp */
  ESI = (ESP);
  /* 12021146 push 0x1204d368 */
  push32((uint32_t)(0x1204d368u));
  /* 1202114b push 0x12052610 */
  push32((uint32_t)(0x12052610u));
  /* 12021150 call dword ptr [0x12055504] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055504))), 0x12021156u);
  /* 12021156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202115b call 0x12025c50 */
  push32(0x12021160u); f_12025c50();
  /* 12021160 mov esi, esp */
  ESI = (ESP);
  /* 12021162 push 0x1204d360 */
  push32((uint32_t)(0x1204d360u));
  /* 12021167 push 0x12052618 */
  push32((uint32_t)(0x12052618u));
  /* 1202116c call dword ptr [0x12055504] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055504))), 0x12021172u);
  /* 12021172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021177 call 0x12025c50 */
  push32(0x1202117cu); f_12025c50();
  /* 1202117c mov esi, esp */
  ESI = (ESP);
  /* 1202117e push 0x1204d358 */
  push32((uint32_t)(0x1204d358u));
  /* 12021183 push 0x12052620 */
  push32((uint32_t)(0x12052620u));
  /* 12021188 call dword ptr [0x12055504] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055504))), 0x1202118eu);
  /* 1202118e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021191 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021193 call 0x12025c50 */
  push32(0x12021198u); f_12025c50();
  /* 12021198 mov esi, esp */
  ESI = (ESP);
  /* 1202119a push 0x1204d350 */
  push32((uint32_t)(0x1204d350u));
  /* 1202119f push 0x12052628 */
  push32((uint32_t)(0x12052628u));
  /* 120211a4 call dword ptr [0x12055504] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055504))), 0x120211aau);
  /* 120211aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120211ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120211af call 0x12025c50 */
  push32(0x120211b4u); f_12025c50();
  /* 120211b4 mov esi, esp */
  ESI = (ESP);
  /* 120211b6 push 0x1204d348 */
  push32((uint32_t)(0x1204d348u));
  /* 120211bb push 0x12052630 */
  push32((uint32_t)(0x12052630u));
  /* 120211c0 call dword ptr [0x12055504] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055504))), 0x120211c6u);
  /* 120211c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120211c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120211cb call 0x12025c50 */
  push32(0x120211d0u); f_12025c50();
  /* 120211d0 mov esi, esp */
  ESI = (ESP);
  /* 120211d2 push 0x1204d340 */
  push32((uint32_t)(0x1204d340u));
  /* 120211d7 push 0x12052638 */
  push32((uint32_t)(0x12052638u));
  /* 120211dc call dword ptr [0x12055504] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055504))), 0x120211e2u);
  /* 120211e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120211e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120211e7 call 0x12025c50 */
  push32(0x120211ecu); f_12025c50();
  /* 120211ec mov esi, esp */
  ESI = (ESP);
  /* 120211ee push 0x1204d338 */
  push32((uint32_t)(0x1204d338u));
  /* 120211f3 push 0x12052640 */
  push32((uint32_t)(0x12052640u));
  /* 120211f8 call dword ptr [0x12055504] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055504))), 0x120211feu);
  /* 120211fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021201 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021203 call 0x12025c50 */
  push32(0x12021208u); f_12025c50();
  /* 12021208 mov esi, esp */
  ESI = (ESP);
  /* 1202120a push 0x1204d330 */
  push32((uint32_t)(0x1204d330u));
  /* 1202120f push 0x12052648 */
  push32((uint32_t)(0x12052648u));
  /* 12021214 call dword ptr [0x12055504] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055504))), 0x1202121au);
  /* 1202121a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202121d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202121f call 0x12025c50 */
  push32(0x12021224u); f_12025c50();
  /* 12021224 mov esi, esp */
  ESI = (ESP);
  /* 12021226 push 0x1204d328 */
  push32((uint32_t)(0x1204d328u));
  /* 1202122b push 0x12052718 */
  push32((uint32_t)(0x12052718u));
  /* 12021230 call dword ptr [0x12055504] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055504))), 0x12021236u);
  /* 12021236 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021239 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202123b call 0x12025c50 */
  push32(0x12021240u); f_12025c50();
  /* 12021240 mov esi, esp */
  ESI = (ESP);
  /* 12021242 push 0x1204d320 */
  push32((uint32_t)(0x1204d320u));
  /* 12021247 push 0x120523e8 */
  push32((uint32_t)(0x120523e8u));
  /* 1202124c call dword ptr [0x12055504] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055504))), 0x12021252u);
  /* 12021252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021257 call 0x12025c50 */
  push32(0x1202125cu); f_12025c50();
  /* 1202125c mov esi, esp */
  ESI = (ESP);
  /* 1202125e push 0x1204d318 */
  push32((uint32_t)(0x1204d318u));
  /* 12021263 push 0x120523e0 */
  push32((uint32_t)(0x120523e0u));
  /* 12021268 call dword ptr [0x12055504] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055504))), 0x1202126eu);
  /* 1202126e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021271 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021273 call 0x12025c50 */
  push32(0x12021278u); f_12025c50();
  /* 12021278 mov esi, esp */
  ESI = (ESP);
  /* 1202127a push 0x1204d310 */
  push32((uint32_t)(0x1204d310u));
  /* 1202127f push 0x120523f0 */
  push32((uint32_t)(0x120523f0u));
  /* 12021284 call dword ptr [0x12055504] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055504))), 0x1202128au);
  /* 1202128a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202128d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202128f call 0x12025c50 */
  push32(0x12021294u); f_12025c50();
  /* 12021294 mov esi, esp */
  ESI = (ESP);
  /* 12021296 push 0x1204d308 */
  push32((uint32_t)(0x1204d308u));
  /* 1202129b push 0x12052518 */
  push32((uint32_t)(0x12052518u));
  /* 120212a0 call dword ptr [0x12055504] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055504))), 0x120212a6u);
  /* 120212a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120212a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120212ab call 0x12025c50 */
  push32(0x120212b0u); f_12025c50();
  /* 120212b0 mov esi, esp */
  ESI = (ESP);
  /* 120212b2 push 0x1204d300 */
  push32((uint32_t)(0x1204d300u));
  /* 120212b7 push 0x12052510 */
  push32((uint32_t)(0x12052510u));
  /* 120212bc call dword ptr [0x12055504] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055504))), 0x120212c2u);
  /* 120212c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120212c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120212c7 call 0x12025c50 */
  push32(0x120212ccu); f_12025c50();
  /* 120212cc mov esi, esp */
  ESI = (ESP);
  /* 120212ce push 0x1204d2f8 */
  push32((uint32_t)(0x1204d2f8u));
  /* 120212d3 push 0x12052480 */
  push32((uint32_t)(0x12052480u));
  /* 120212d8 call dword ptr [0x12055504] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055504))), 0x120212deu);
  /* 120212de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120212e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120212e3 call 0x12025c50 */
  push32(0x120212e8u); f_12025c50();
  /* 120212e8 mov esi, esp */
  ESI = (ESP);
  /* 120212ea push 0x1204d2f0 */
  push32((uint32_t)(0x1204d2f0u));
  /* 120212ef push 0x12052668 */
  push32((uint32_t)(0x12052668u));
  /* 120212f4 call dword ptr [0x12055508] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055508))), 0x120212fau);
  /* 120212fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120212fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120212ff call 0x12025c50 */
  push32(0x12021304u); f_12025c50();
  /* 12021304 mov esi, esp */
  ESI = (ESP);
  /* 12021306 push 0x1204d2e4 */
  push32((uint32_t)(0x1204d2e4u));
  /* 1202130b push 0x120526e8 */
  push32((uint32_t)(0x120526e8u));
  /* 12021310 call dword ptr [0x12055508] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055508))), 0x12021316u);
  /* 12021316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021319 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202131b call 0x12025c50 */
  push32(0x12021320u); f_12025c50();
  /* 12021320 mov esi, esp */
  ESI = (ESP);
  /* 12021322 push 0x1204d2dc */
  push32((uint32_t)(0x1204d2dcu));
  /* 12021327 push 0x12052658 */
  push32((uint32_t)(0x12052658u));
  /* 1202132c call dword ptr [0x12055508] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055508))), 0x12021332u);
  /* 12021332 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021335 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021337 call 0x12025c50 */
  push32(0x1202133cu); f_12025c50();
  /* 1202133c mov esi, esp */
  ESI = (ESP);
  /* 1202133e push 0x1204d2d0 */
  push32((uint32_t)(0x1204d2d0u));
  /* 12021343 push 0x120526f8 */
  push32((uint32_t)(0x120526f8u));
  /* 12021348 call dword ptr [0x12055508] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055508))), 0x1202134eu);
  /* 1202134e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021351 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021353 call 0x12025c50 */
  push32(0x12021358u); f_12025c50();
  /* 12021358 mov esi, esp */
  ESI = (ESP);
  /* 1202135a push 0x1204d2c4 */
  push32((uint32_t)(0x1204d2c4u));
  /* 1202135f push 0x12052700 */
  push32((uint32_t)(0x12052700u));
  /* 12021364 call dword ptr [0x12055508] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055508))), 0x1202136au);
  /* 1202136a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202136d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202136f call 0x12025c50 */
  push32(0x12021374u); f_12025c50();
  /* 12021374 mov esi, esp */
  ESI = (ESP);
  /* 12021376 push 0x1204d2bc */
  push32((uint32_t)(0x1204d2bcu));
  /* 1202137b push 0x12052660 */
  push32((uint32_t)(0x12052660u));
  /* 12021380 call dword ptr [0x12055508] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055508))), 0x12021386u);
  /* 12021386 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021389 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202138b call 0x12025c50 */
  push32(0x12021390u); f_12025c50();
  /* 12021390 mov esi, esp */
  ESI = (ESP);
  /* 12021392 push 0x1204d2b0 */
  push32((uint32_t)(0x1204d2b0u));
  /* 12021397 push 0x12052708 */
  push32((uint32_t)(0x12052708u));
  /* 1202139c call dword ptr [0x12055508] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055508))), 0x120213a2u);
  /* 120213a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120213a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120213a7 call 0x12025c50 */
  push32(0x120213acu); f_12025c50();
  /* 120213ac mov esi, esp */
  ESI = (ESP);
  /* 120213ae push 0x1204d2a4 */
  push32((uint32_t)(0x1204d2a4u));
  /* 120213b3 push 0x12052710 */
  push32((uint32_t)(0x12052710u));
  /* 120213b8 call dword ptr [0x12055508] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055508))), 0x120213beu);
  /* 120213be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120213c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120213c3 call 0x12025c50 */
  push32(0x120213c8u); f_12025c50();
  /* 120213c8 mov esi, esp */
  ESI = (ESP);
  /* 120213ca push 0x1204d29c */
  push32((uint32_t)(0x1204d29cu));
  /* 120213cf push 0x12052698 */
  push32((uint32_t)(0x12052698u));
  /* 120213d4 call dword ptr [0x12055508] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055508))), 0x120213dau);
  /* 120213da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120213dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120213df call 0x12025c50 */
  push32(0x120213e4u); f_12025c50();
  /* 120213e4 mov esi, esp */
  ESI = (ESP);
  /* 120213e6 push 0x1204d294 */
  push32((uint32_t)(0x1204d294u));
  /* 120213eb push 0x120526a0 */
  push32((uint32_t)(0x120526a0u));
  /* 120213f0 call dword ptr [0x12055508] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055508))), 0x120213f6u);
  /* 120213f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120213f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120213fb call 0x12025c50 */
  push32(0x12021400u); f_12025c50();
  /* 12021400 mov esi, esp */
  ESI = (ESP);
  /* 12021402 push 0x1204d28c */
  push32((uint32_t)(0x1204d28cu));
  /* 12021407 push 0x120526a8 */
  push32((uint32_t)(0x120526a8u));
  /* 1202140c call dword ptr [0x12055508] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055508))), 0x12021412u);
  /* 12021412 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021415 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021417 call 0x12025c50 */
  push32(0x1202141cu); f_12025c50();
  /* 1202141c mov esi, esp */
  ESI = (ESP);
  /* 1202141e push 0x1204d280 */
  push32((uint32_t)(0x1204d280u));
  /* 12021423 push 0x12052688 */
  push32((uint32_t)(0x12052688u));
  /* 12021428 call dword ptr [0x12055508] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055508))), 0x1202142eu);
  /* 1202142e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021431 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021433 call 0x12025c50 */
  push32(0x12021438u); f_12025c50();
  /* 12021438 mov esi, esp */
  ESI = (ESP);
  /* 1202143a push 0x1204d274 */
  push32((uint32_t)(0x1204d274u));
  /* 1202143f push 0x12052690 */
  push32((uint32_t)(0x12052690u));
  /* 12021444 call dword ptr [0x12055508] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055508))), 0x1202144au);
  /* 1202144a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202144d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202144f call 0x12025c50 */
  push32(0x12021454u); f_12025c50();
  /* 12021454 mov esi, esp */
  ESI = (ESP);
  /* 12021456 push 0x1204d268 */
  push32((uint32_t)(0x1204d268u));
  /* 1202145b push 0x12052678 */
  push32((uint32_t)(0x12052678u));
  /* 12021460 call dword ptr [0x12055508] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055508))), 0x12021466u);
  /* 12021466 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021469 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202146b call 0x12025c50 */
  push32(0x12021470u); f_12025c50();
  /* 12021470 mov esi, esp */
  ESI = (ESP);
  /* 12021472 push 0x1204d25c */
  push32((uint32_t)(0x1204d25cu));
  /* 12021477 push 0x12052680 */
  push32((uint32_t)(0x12052680u));
  /* 1202147c call dword ptr [0x12055508] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055508))), 0x12021482u);
  /* 12021482 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021485 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021487 call 0x12025c50 */
  push32(0x1202148cu); f_12025c50();
  /* 1202148c mov esi, esp */
  ESI = (ESP);
  /* 1202148e push 0x1204d254 */
  push32((uint32_t)(0x1204d254u));
  /* 12021493 push 0x120525f0 */
  push32((uint32_t)(0x120525f0u));
  /* 12021498 call dword ptr [0x12055508] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055508))), 0x1202149eu);
  /* 1202149e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120214a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120214a3 call 0x12025c50 */
  push32(0x120214a8u); f_12025c50();
  /* 120214a8 mov esi, esp */
  ESI = (ESP);
  /* 120214aa push 0x1204d24c */
  push32((uint32_t)(0x1204d24cu));
  /* 120214af push 0x120525f8 */
  push32((uint32_t)(0x120525f8u));
  /* 120214b4 call dword ptr [0x12055508] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055508))), 0x120214bau);
  /* 120214ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120214bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120214bf call 0x12025c50 */
  push32(0x120214c4u); f_12025c50();
  /* 120214c4 mov esi, esp */
  ESI = (ESP);
  /* 120214c6 push 0x1204d244 */
  push32((uint32_t)(0x1204d244u));
  /* 120214cb push 0x12052600 */
  push32((uint32_t)(0x12052600u));
  /* 120214d0 call dword ptr [0x12055508] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055508))), 0x120214d6u);
  /* 120214d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120214d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120214db call 0x12025c50 */
  push32(0x120214e0u); f_12025c50();
  /* 120214e0 mov esi, esp */
  ESI = (ESP);
  /* 120214e2 push 0x1204d238 */
  push32((uint32_t)(0x1204d238u));
  /* 120214e7 push 0x12052440 */
  push32((uint32_t)(0x12052440u));
  /* 120214ec call dword ptr [0x12055508] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055508))), 0x120214f2u);
  /* 120214f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120214f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120214f7 call 0x12025c50 */
  push32(0x120214fcu); f_12025c50();
  /* 120214fc mov esi, esp */
  ESI = (ESP);
  /* 120214fe push 0x1204d228 */
  push32((uint32_t)(0x1204d228u));
  /* 12021503 push 0x12052408 */
  push32((uint32_t)(0x12052408u));
  /* 12021508 call dword ptr [0x1205550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205550c))), 0x1202150eu);
  /* 1202150e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021511 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021513 call 0x12025c50 */
  push32(0x12021518u); f_12025c50();
  /* 12021518 mov esi, esp */
  ESI = (ESP);
  /* 1202151a push 0x1204d218 */
  push32((uint32_t)(0x1204d218u));
  /* 1202151f push 0x12052590 */
  push32((uint32_t)(0x12052590u));
  /* 12021524 call dword ptr [0x1205550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205550c))), 0x1202152au);
  /* 1202152a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202152d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202152f call 0x12025c50 */
  push32(0x12021534u); f_12025c50();
  /* 12021534 mov esi, esp */
  ESI = (ESP);
  /* 12021536 push 0x1204d1fc */
  push32((uint32_t)(0x1204d1fcu));
  /* 1202153b push 0x120526b0 */
  push32((uint32_t)(0x120526b0u));
  /* 12021540 call dword ptr [0x1205550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205550c))), 0x12021546u);
  /* 12021546 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021549 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202154b call 0x12025c50 */
  push32(0x12021550u); f_12025c50();
  /* 12021550 mov esi, esp */
  ESI = (ESP);
  /* 12021552 push 0x1204d1e4 */
  push32((uint32_t)(0x1204d1e4u));
  /* 12021557 push 0x12052438 */
  push32((uint32_t)(0x12052438u));
  /* 1202155c call dword ptr [0x1205550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205550c))), 0x12021562u);
  /* 12021562 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021565 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021567 call 0x12025c50 */
  push32(0x1202156cu); f_12025c50();
  /* 1202156c mov esi, esp */
  ESI = (ESP);
  /* 1202156e push 0x1204d1d4 */
  push32((uint32_t)(0x1204d1d4u));
  /* 12021573 push 0x12052468 */
  push32((uint32_t)(0x12052468u));
  /* 12021578 call dword ptr [0x1205550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205550c))), 0x1202157eu);
  /* 1202157e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021581 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021583 call 0x12025c50 */
  push32(0x12021588u); f_12025c50();
  /* 12021588 mov esi, esp */
  ESI = (ESP);
  /* 1202158a push 0x1204d1bc */
  push32((uint32_t)(0x1204d1bcu));
  /* 1202158f push 0x12052478 */
  push32((uint32_t)(0x12052478u));
  /* 12021594 call dword ptr [0x1205550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205550c))), 0x1202159au);
  /* 1202159a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202159d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202159f call 0x12025c50 */
  push32(0x120215a4u); f_12025c50();
  /* 120215a4 mov esi, esp */
  ESI = (ESP);
  /* 120215a6 push 0x1204d1a4 */
  push32((uint32_t)(0x1204d1a4u));
  /* 120215ab push 0x12052450 */
  push32((uint32_t)(0x12052450u));
  /* 120215b0 call dword ptr [0x1205550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205550c))), 0x120215b6u);
  /* 120215b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120215b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120215bb call 0x12025c50 */
  push32(0x120215c0u); f_12025c50();
  /* 120215c0 mov esi, esp */
  ESI = (ESP);
  /* 120215c2 push 0x1204d194 */
  push32((uint32_t)(0x1204d194u));
  /* 120215c7 push 0x12052490 */
  push32((uint32_t)(0x12052490u));
  /* 120215cc call dword ptr [0x1205550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205550c))), 0x120215d2u);
  /* 120215d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120215d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120215d7 call 0x12025c50 */
  push32(0x120215dcu); f_12025c50();
  /* 120215dc mov esi, esp */
  ESI = (ESP);
  /* 120215de push 0x1204d184 */
  push32((uint32_t)(0x1204d184u));
  /* 120215e3 push 0x120525d0 */
  push32((uint32_t)(0x120525d0u));
  /* 120215e8 call dword ptr [0x1205550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205550c))), 0x120215eeu);
  /* 120215ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120215f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120215f3 call 0x12025c50 */
  push32(0x120215f8u); f_12025c50();
  /* 120215f8 mov esi, esp */
  ESI = (ESP);
  /* 120215fa push 0x1204d174 */
  push32((uint32_t)(0x1204d174u));
  /* 120215ff push 0x12052498 */
  push32((uint32_t)(0x12052498u));
  /* 12021604 call dword ptr [0x1205550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205550c))), 0x1202160au);
  /* 1202160a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202160d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202160f call 0x12025c50 */
  push32(0x12021614u); f_12025c50();
  /* 12021614 mov esi, esp */
  ESI = (ESP);
  /* 12021616 push 0x1204d164 */
  push32((uint32_t)(0x1204d164u));
  /* 1202161b push 0x120525e0 */
  push32((uint32_t)(0x120525e0u));
  /* 12021620 call dword ptr [0x1205550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205550c))), 0x12021626u);
  /* 12021626 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021629 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202162b call 0x12025c50 */
  push32(0x12021630u); f_12025c50();
  /* 12021630 mov esi, esp */
  ESI = (ESP);
  /* 12021632 push 0x1204d154 */
  push32((uint32_t)(0x1204d154u));
  /* 12021637 push 0x120524a0 */
  push32((uint32_t)(0x120524a0u));
  /* 1202163c call dword ptr [0x1205550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205550c))), 0x12021642u);
  /* 12021642 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021645 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021647 call 0x12025c50 */
  push32(0x1202164cu); f_12025c50();
  /* 1202164c mov esi, esp */
  ESI = (ESP);
  /* 1202164e push 0x1204d144 */
  push32((uint32_t)(0x1204d144u));
  /* 12021653 push 0x120525e8 */
  push32((uint32_t)(0x120525e8u));
  /* 12021658 call dword ptr [0x1205550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205550c))), 0x1202165eu);
  /* 1202165e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021661 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021663 call 0x12025c50 */
  push32(0x12021668u); f_12025c50();
  /* 12021668 mov esi, esp */
  ESI = (ESP);
  /* 1202166a push 0x1204d154 */
  push32((uint32_t)(0x1204d154u));
  /* 1202166f push 0x120524a8 */
  push32((uint32_t)(0x120524a8u));
  /* 12021674 call dword ptr [0x1205550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205550c))), 0x1202167au);
  /* 1202167a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202167d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202167f call 0x12025c50 */
  push32(0x12021684u); f_12025c50();
  /* 12021684 mov esi, esp */
  ESI = (ESP);
  /* 12021686 push 0x1204d134 */
  push32((uint32_t)(0x1204d134u));
  /* 1202168b push 0x120525d8 */
  push32((uint32_t)(0x120525d8u));
  /* 12021690 call dword ptr [0x1205550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205550c))), 0x12021696u);
  /* 12021696 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021699 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202169b call 0x12025c50 */
  push32(0x120216a0u); f_12025c50();
  /* 120216a0 mov esi, esp */
  ESI = (ESP);
  /* 120216a2 push 0x1204d11c */
  push32((uint32_t)(0x1204d11cu));
  /* 120216a7 push 0x12052500 */
  push32((uint32_t)(0x12052500u));
  /* 120216ac call dword ptr [0x1205550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205550c))), 0x120216b2u);
  /* 120216b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120216b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120216b7 call 0x12025c50 */
  push32(0x120216bcu); f_12025c50();
  /* 120216bc mov esi, esp */
  ESI = (ESP);
  /* 120216be push 0x1204d10c */
  push32((uint32_t)(0x1204d10cu));
  /* 120216c3 push 0x12052508 */
  push32((uint32_t)(0x12052508u));
  /* 120216c8 call dword ptr [0x1205550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205550c))), 0x120216ceu);
  /* 120216ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120216d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120216d3 call 0x12025c50 */
  push32(0x120216d8u); f_12025c50();
  /* 120216d8 mov esi, esp */
  ESI = (ESP);
  /* 120216da push 0x1204d0f4 */
  push32((uint32_t)(0x1204d0f4u));
  /* 120216df push 0x12052520 */
  push32((uint32_t)(0x12052520u));
  /* 120216e4 call dword ptr [0x1205550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205550c))), 0x120216eau);
  /* 120216ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120216ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120216ef call 0x12025c50 */
  push32(0x120216f4u); f_12025c50();
  /* 120216f4 mov esi, esp */
  ESI = (ESP);
  /* 120216f6 push 0x1204d0e4 */
  push32((uint32_t)(0x1204d0e4u));
  /* 120216fb push 0x120526d8 */
  push32((uint32_t)(0x120526d8u));
  /* 12021700 call dword ptr [0x1205550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205550c))), 0x12021706u);
  /* 12021706 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021709 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202170b call 0x12025c50 */
  push32(0x12021710u); f_12025c50();
  /* 12021710 mov esi, esp */
  ESI = (ESP);
  /* 12021712 push 0x1204d0d4 */
  push32((uint32_t)(0x1204d0d4u));
  /* 12021717 push 0x120526d0 */
  push32((uint32_t)(0x120526d0u));
  /* 1202171c call dword ptr [0x1205550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205550c))), 0x12021722u);
  /* 12021722 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021725 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021727 call 0x12025c50 */
  push32(0x1202172cu); f_12025c50();
  /* 1202172c mov esi, esp */
  ESI = (ESP);
  /* 1202172e push 0x1204d0c4 */
  push32((uint32_t)(0x1204d0c4u));
  /* 12021733 push 0x120526e0 */
  push32((uint32_t)(0x120526e0u));
  /* 12021738 call dword ptr [0x1205550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205550c))), 0x1202173eu);
  /* 1202173e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021741 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021743 call 0x12025c50 */
  push32(0x12021748u); f_12025c50();
  /* 12021748 mov esi, esp */
  ESI = (ESP);
  /* 1202174a push 8 */
  push32((uint32_t)(0x8u));
  /* 1202174c push 0x12052458 */
  push32((uint32_t)(0x12052458u));
  /* 12021751 call dword ptr [0x12055510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055510))), 0x12021757u);
  /* 12021757 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202175a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202175c call 0x12025c50 */
  push32(0x12021761u); f_12025c50();
  /* 12021761 mov esi, esp */
  ESI = (ESP);
  /* 12021763 push 8 */
  push32((uint32_t)(0x8u));
  /* 12021765 push 0x12052448 */
  push32((uint32_t)(0x12052448u));
  /* 1202176a call dword ptr [0x12055510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055510))), 0x12021770u);
  /* 12021770 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021773 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021775 call 0x12025c50 */
  push32(0x1202177au); f_12025c50();
  /* 1202177a mov esi, esp */
  ESI = (ESP);
  /* 1202177c push 8 */
  push32((uint32_t)(0x8u));
  /* 1202177e push 0x12052470 */
  push32((uint32_t)(0x12052470u));
  /* 12021783 call dword ptr [0x12055510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055510))), 0x12021789u);
  /* 12021789 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202178c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202178e call 0x12025c50 */
  push32(0x12021793u); f_12025c50();
  /* 12021793 mov esi, esp */
  ESI = (ESP);
  /* 12021795 push 8 */
  push32((uint32_t)(0x8u));
  /* 12021797 push 0x12052460 */
  push32((uint32_t)(0x12052460u));
  /* 1202179c call dword ptr [0x12055510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055510))), 0x120217a2u);
  /* 120217a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120217a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120217a7 call 0x12025c50 */
  push32(0x120217acu); f_12025c50();
  /* 120217ac mov esi, esp */
  ESI = (ESP);
  /* 120217ae push 8 */
  push32((uint32_t)(0x8u));
  /* 120217b0 push 0x12052418 */
  push32((uint32_t)(0x12052418u));
  /* 120217b5 call dword ptr [0x12055510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055510))), 0x120217bbu);
  /* 120217bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120217be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120217c0 call 0x12025c50 */
  push32(0x120217c5u); f_12025c50();
  /* 120217c5 mov esi, esp */
  ESI = (ESP);
  /* 120217c7 push 8 */
  push32((uint32_t)(0x8u));
  /* 120217c9 push 0x12052410 */
  push32((uint32_t)(0x12052410u));
  /* 120217ce call dword ptr [0x12055510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055510))), 0x120217d4u);
  /* 120217d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120217d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120217d9 call 0x12025c50 */
  push32(0x120217deu); f_12025c50();
  /* 120217de mov esi, esp */
  ESI = (ESP);
  /* 120217e0 push 8 */
  push32((uint32_t)(0x8u));
  /* 120217e2 push 0x12052428 */
  push32((uint32_t)(0x12052428u));
  /* 120217e7 call dword ptr [0x12055510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055510))), 0x120217edu);
  /* 120217ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120217f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120217f2 call 0x12025c50 */
  push32(0x120217f7u); f_12025c50();
  /* 120217f7 mov esi, esp */
  ESI = (ESP);
  /* 120217f9 push 8 */
  push32((uint32_t)(0x8u));
  /* 120217fb push 0x12052420 */
  push32((uint32_t)(0x12052420u));
  /* 12021800 call dword ptr [0x12055510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055510))), 0x12021806u);
  /* 12021806 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021809 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202180b call 0x12025c50 */
  push32(0x12021810u); f_12025c50();
  /* 12021810 mov esi, esp */
  ESI = (ESP);
  /* 12021812 push 8 */
  push32((uint32_t)(0x8u));
  /* 12021814 push 0x12052430 */
  push32((uint32_t)(0x12052430u));
  /* 12021819 call dword ptr [0x12055510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055510))), 0x1202181fu);
  /* 1202181f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021822 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021824 call 0x12025c50 */
  push32(0x12021829u); f_12025c50();
  /* 12021829 mov esi, esp */
  ESI = (ESP);
  /* 1202182b push 8 */
  push32((uint32_t)(0x8u));
  /* 1202182d push 0x12052530 */
  push32((uint32_t)(0x12052530u));
  /* 12021832 call dword ptr [0x12055510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055510))), 0x12021838u);
  /* 12021838 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202183b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202183d call 0x12025c50 */
  push32(0x12021842u); f_12025c50();
  /* 12021842 mov esi, esp */
  ESI = (ESP);
  /* 12021844 push 8 */
  push32((uint32_t)(0x8u));
  /* 12021846 push 0x12052528 */
  push32((uint32_t)(0x12052528u));
  /* 1202184b call dword ptr [0x12055510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055510))), 0x12021851u);
  /* 12021851 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021854 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021856 call 0x12025c50 */
  push32(0x1202185bu); f_12025c50();
  /* 1202185b mov esi, esp */
  ESI = (ESP);
  /* 1202185d push 8 */
  push32((uint32_t)(0x8u));
  /* 1202185f push 0x12052568 */
  push32((uint32_t)(0x12052568u));
  /* 12021864 call dword ptr [0x12055510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055510))), 0x1202186au);
  /* 1202186a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202186d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202186f call 0x12025c50 */
  push32(0x12021874u); f_12025c50();
  /* 12021874 mov esi, esp */
  ESI = (ESP);
  /* 12021876 push 8 */
  push32((uint32_t)(0x8u));
  /* 12021878 push 0x12052560 */
  push32((uint32_t)(0x12052560u));
  /* 1202187d call dword ptr [0x12055510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055510))), 0x12021883u);
  /* 12021883 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021886 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021888 call 0x12025c50 */
  push32(0x1202188du); f_12025c50();
  /* 1202188d mov esi, esp */
  ESI = (ESP);
  /* 1202188f push 8 */
  push32((uint32_t)(0x8u));
  /* 12021891 push 0x12052580 */
  push32((uint32_t)(0x12052580u));
  /* 12021896 call dword ptr [0x12055510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055510))), 0x1202189cu);
  /* 1202189c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202189f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120218a1 call 0x12025c50 */
  push32(0x120218a6u); f_12025c50();
  /* 120218a6 mov esi, esp */
  ESI = (ESP);
  /* 120218a8 push 8 */
  push32((uint32_t)(0x8u));
  /* 120218aa push 0x12052570 */
  push32((uint32_t)(0x12052570u));
  /* 120218af call dword ptr [0x12055510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055510))), 0x120218b5u);
  /* 120218b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120218b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120218ba call 0x12025c50 */
  push32(0x120218bfu); f_12025c50();
  /* 120218bf mov esi, esp */
  ESI = (ESP);
  /* 120218c1 push 8 */
  push32((uint32_t)(0x8u));
  /* 120218c3 push 0x12052548 */
  push32((uint32_t)(0x12052548u));
  /* 120218c8 call dword ptr [0x12055510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055510))), 0x120218ceu);
  /* 120218ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120218d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120218d3 call 0x12025c50 */
  push32(0x120218d8u); f_12025c50();
  /* 120218d8 mov esi, esp */
  ESI = (ESP);
  /* 120218da push 8 */
  push32((uint32_t)(0x8u));
  /* 120218dc push 0x12052540 */
  push32((uint32_t)(0x12052540u));
  /* 120218e1 call dword ptr [0x12055510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055510))), 0x120218e7u);
  /* 120218e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120218ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120218ec call 0x12025c50 */
  push32(0x120218f1u); f_12025c50();
  /* 120218f1 mov esi, esp */
  ESI = (ESP);
  /* 120218f3 push 8 */
  push32((uint32_t)(0x8u));
  /* 120218f5 push 0x12052558 */
  push32((uint32_t)(0x12052558u));
  /* 120218fa call dword ptr [0x12055510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055510))), 0x12021900u);
  /* 12021900 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021903 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021905 call 0x12025c50 */
  push32(0x1202190au); f_12025c50();
  /* 1202190a mov esi, esp */
  ESI = (ESP);
  /* 1202190c push 8 */
  push32((uint32_t)(0x8u));
  /* 1202190e push 0x12052550 */
  push32((uint32_t)(0x12052550u));
  /* 12021913 call dword ptr [0x12055510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055510))), 0x12021919u);
  /* 12021919 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202191c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202191e call 0x12025c50 */
  push32(0x12021923u); f_12025c50();
  /* 12021923 mov esi, esp */
  ESI = (ESP);
  /* 12021925 push 8 */
  push32((uint32_t)(0x8u));
  /* 12021927 push 0x12052578 */
  push32((uint32_t)(0x12052578u));
  /* 1202192c call dword ptr [0x12055510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055510))), 0x12021932u);
  /* 12021932 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021935 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021937 call 0x12025c50 */
  push32(0x1202193cu); f_12025c50();
  /* 1202193c mov esi, esp */
  ESI = (ESP);
  /* 1202193e push 4 */
  push32((uint32_t)(0x4u));
  /* 12021940 push 0x12052538 */
  push32((uint32_t)(0x12052538u));
  /* 12021945 call dword ptr [0x12055510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055510))), 0x1202194bu);
  /* 1202194b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202194e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021950 call 0x12025c50 */
  push32(0x12021955u); f_12025c50();
  /* 12021955 mov esi, esp */
  ESI = (ESP);
  /* 12021957 push 4 */
  push32((uint32_t)(0x4u));
  /* 12021959 push 0x12052588 */
  push32((uint32_t)(0x12052588u));
  /* 1202195e call dword ptr [0x12055510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055510))), 0x12021964u);
  /* 12021964 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021967 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021969 call 0x12025c50 */
  push32(0x1202196eu); f_12025c50();
  /* 1202196e mov esi, esp */
  ESI = (ESP);
  /* 12021970 push 4 */
  push32((uint32_t)(0x4u));
  /* 12021972 push 0x120525c8 */
  push32((uint32_t)(0x120525c8u));
  /* 12021977 call dword ptr [0x12055510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055510))), 0x1202197du);
  /* 1202197d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021980 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021982 call 0x12025c50 */
  push32(0x12021987u); f_12025c50();
  /* 12021987 mov esi, esp */
  ESI = (ESP);
  /* 12021989 push 4 */
  push32((uint32_t)(0x4u));
  /* 1202198b push 0x12052608 */
  push32((uint32_t)(0x12052608u));
  /* 12021990 call dword ptr [0x12055510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055510))), 0x12021996u);
  /* 12021996 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021999 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202199b call 0x12025c50 */
  push32(0x120219a0u); f_12025c50();
  /* 120219a0 mov esi, esp */
  ESI = (ESP);
  /* 120219a2 push 4 */
  push32((uint32_t)(0x4u));
  /* 120219a4 push 0x12052650 */
  push32((uint32_t)(0x12052650u));
  /* 120219a9 call dword ptr [0x12055510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055510))), 0x120219afu);
  /* 120219af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120219b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120219b4 call 0x12025c50 */
  push32(0x120219b9u); f_12025c50();
  /* 120219b9 mov esi, esp */
  ESI = (ESP);
  /* 120219bb push 4 */
  push32((uint32_t)(0x4u));
  /* 120219bd push 0x12052670 */
  push32((uint32_t)(0x12052670u));
  /* 120219c2 call dword ptr [0x12055510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055510))), 0x120219c8u);
  /* 120219c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120219cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120219cd call 0x12025c50 */
  push32(0x120219d2u); f_12025c50();
  /* 120219d2 mov esi, esp */
  ESI = (ESP);
  /* 120219d4 push 4 */
  push32((uint32_t)(0x4u));
  /* 120219d6 push 0x12052598 */
  push32((uint32_t)(0x12052598u));
  /* 120219db call dword ptr [0x12055510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055510))), 0x120219e1u);
  /* 120219e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120219e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120219e6 call 0x12025c50 */
  push32(0x120219ebu); f_12025c50();
  /* 120219eb mov esi, esp */
  ESI = (ESP);
  /* 120219ed push 4 */
  push32((uint32_t)(0x4u));
  /* 120219ef push 0x120526f0 */
  push32((uint32_t)(0x120526f0u));
  /* 120219f4 call dword ptr [0x12055510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055510))), 0x120219fau);
  /* 120219fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120219fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120219ff call 0x12025c50 */
  push32(0x12021a04u); f_12025c50();
  /* 12021a04 mov esi, esp */
  ESI = (ESP);
  /* 12021a06 push 4 */
  push32((uint32_t)(0x4u));
  /* 12021a08 push 0x120524c8 */
  push32((uint32_t)(0x120524c8u));
  /* 12021a0d call dword ptr [0x12055510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055510))), 0x12021a13u);
  /* 12021a13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021a16 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021a18 call 0x12025c50 */
  push32(0x12021a1du); f_12025c50();
  /* 12021a1d mov esi, esp */
  ESI = (ESP);
  /* 12021a1f push 0x1204d0bc */
  push32((uint32_t)(0x1204d0bcu));
  /* 12021a24 push 0x120526c8 */
  push32((uint32_t)(0x120526c8u));
  /* 12021a29 call dword ptr [0x12055514] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055514))), 0x12021a2fu);
  /* 12021a2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021a32 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021a34 call 0x12025c50 */
  push32(0x12021a39u); f_12025c50();
  /* 12021a39 mov esi, esp */
  ESI = (ESP);
  /* 12021a3b push 0x1204d0ac */
  push32((uint32_t)(0x1204d0acu));
  /* 12021a40 push 0x120525a8 */
  push32((uint32_t)(0x120525a8u));
  /* 12021a45 call dword ptr [0x12055514] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055514))), 0x12021a4bu);
  /* 12021a4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021a4e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021a50 call 0x12025c50 */
  push32(0x12021a55u); f_12025c50();
  /* 12021a55 mov esi, esp */
  ESI = (ESP);
  /* 12021a57 push 0x1204d09c */
  push32((uint32_t)(0x1204d09cu));
  /* 12021a5c push 0x120525b8 */
  push32((uint32_t)(0x120525b8u));
  /* 12021a61 call dword ptr [0x12055514] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055514))), 0x12021a67u);
  /* 12021a67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021a6a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021a6c call 0x12025c50 */
  push32(0x12021a71u); f_12025c50();
  /* 12021a71 mov esi, esp */
  ESI = (ESP);
  /* 12021a73 push 0x1204d08c */
  push32((uint32_t)(0x1204d08cu));
  /* 12021a78 push 0x120525c0 */
  push32((uint32_t)(0x120525c0u));
  /* 12021a7d call dword ptr [0x12055514] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055514))), 0x12021a83u);
  /* 12021a83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021a86 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021a88 call 0x12025c50 */
  push32(0x12021a8du); f_12025c50();
  /* 12021a8d mov esi, esp */
  ESI = (ESP);
  /* 12021a8f push 0x1204d07c */
  push32((uint32_t)(0x1204d07cu));
  /* 12021a94 push 0x120525b0 */
  push32((uint32_t)(0x120525b0u));
  /* 12021a99 call dword ptr [0x12055514] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055514))), 0x12021a9fu);
  /* 12021a9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021aa2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021aa4 call 0x12025c50 */
  push32(0x12021aa9u); f_12025c50();
  /* 12021aa9 mov esi, esp */
  ESI = (ESP);
  /* 12021aab push 0x1204d06c */
  push32((uint32_t)(0x1204d06cu));
  /* 12021ab0 push 0x120525a0 */
  push32((uint32_t)(0x120525a0u));
  /* 12021ab5 call dword ptr [0x12055514] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055514))), 0x12021abbu);
  /* 12021abb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021abe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021ac0 call 0x12025c50 */
  push32(0x12021ac5u); f_12025c50();
  /* 12021ac5 mov esi, esp */
  ESI = (ESP);
  /* 12021ac7 push 0x1204d064 */
  push32((uint32_t)(0x1204d064u));
  /* 12021acc push 0x120526c0 */
  push32((uint32_t)(0x120526c0u));
  /* 12021ad1 call dword ptr [0x12055514] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055514))), 0x12021ad7u);
  /* 12021ad7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021ada cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021adc call 0x12025c50 */
  push32(0x12021ae1u); f_12025c50();
  /* 12021ae1 mov esi, esp */
  ESI = (ESP);
  /* 12021ae3 push 0x1204d058 */
  push32((uint32_t)(0x1204d058u));
  /* 12021ae8 push 0x120523f8 */
  push32((uint32_t)(0x120523f8u));
  /* 12021aed call dword ptr [0x12055514] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055514))), 0x12021af3u);
  /* 12021af3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021af6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021af8 call 0x12025c50 */
  push32(0x12021afdu); f_12025c50();
  /* 12021afd mov esi, esp */
  ESI = (ESP);
  /* 12021aff push 0x1204d04c */
  push32((uint32_t)(0x1204d04cu));
  /* 12021b04 push 0x12052400 */
  push32((uint32_t)(0x12052400u));
  /* 12021b09 call dword ptr [0x12055514] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055514))), 0x12021b0fu);
  /* 12021b0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021b12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021b14 call 0x12025c50 */
  push32(0x12021b19u); f_12025c50();
  /* 12021b19 mov esi, esp */
  ESI = (ESP);
  /* 12021b1b push 0x1204d044 */
  push32((uint32_t)(0x1204d044u));
  /* 12021b20 push 0x12052488 */
  push32((uint32_t)(0x12052488u));
  /* 12021b25 call dword ptr [0x12055514] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055514))), 0x12021b2bu);
  /* 12021b2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021b2e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021b30 call 0x12025c50 */
  push32(0x12021b35u); f_12025c50();
  /* 12021b35 mov esi, esp */
  ESI = (ESP);
  /* 12021b37 push 0x12052458 */
  push32((uint32_t)(0x12052458u));
  /* 12021b3c call dword ptr [0x12055518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055518))), 0x12021b42u);
  /* 12021b42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021b45 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021b47 call 0x12025c50 */
  push32(0x12021b4cu); f_12025c50();
  /* 12021b4c mov esi, esp */
  ESI = (ESP);
  /* 12021b4e push 0x12052448 */
  push32((uint32_t)(0x12052448u));
  /* 12021b53 call dword ptr [0x12055518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055518))), 0x12021b59u);
  /* 12021b59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021b5c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021b5e call 0x12025c50 */
  push32(0x12021b63u); f_12025c50();
  /* 12021b63 mov esi, esp */
  ESI = (ESP);
  /* 12021b65 push 0x12052470 */
  push32((uint32_t)(0x12052470u));
  /* 12021b6a call dword ptr [0x12055518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055518))), 0x12021b70u);
  /* 12021b70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021b73 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021b75 call 0x12025c50 */
  push32(0x12021b7au); f_12025c50();
  /* 12021b7a mov esi, esp */
  ESI = (ESP);
  /* 12021b7c push 0x12052460 */
  push32((uint32_t)(0x12052460u));
  /* 12021b81 call dword ptr [0x12055518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055518))), 0x12021b87u);
  /* 12021b87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021b8a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021b8c call 0x12025c50 */
  push32(0x12021b91u); f_12025c50();
  /* 12021b91 mov esi, esp */
  ESI = (ESP);
  /* 12021b93 push 0x12052418 */
  push32((uint32_t)(0x12052418u));
  /* 12021b98 call dword ptr [0x12055518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055518))), 0x12021b9eu);
  /* 12021b9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021ba1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021ba3 call 0x12025c50 */
  push32(0x12021ba8u); f_12025c50();
  /* 12021ba8 mov esi, esp */
  ESI = (ESP);
  /* 12021baa push 0x12052410 */
  push32((uint32_t)(0x12052410u));
  /* 12021baf call dword ptr [0x12055518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055518))), 0x12021bb5u);
  /* 12021bb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021bb8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021bba call 0x12025c50 */
  push32(0x12021bbfu); f_12025c50();
  /* 12021bbf mov esi, esp */
  ESI = (ESP);
  /* 12021bc1 push 0x12052428 */
  push32((uint32_t)(0x12052428u));
  /* 12021bc6 call dword ptr [0x12055518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055518))), 0x12021bccu);
  /* 12021bcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021bcf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021bd1 call 0x12025c50 */
  push32(0x12021bd6u); f_12025c50();
  /* 12021bd6 mov esi, esp */
  ESI = (ESP);
  /* 12021bd8 push 0x12052420 */
  push32((uint32_t)(0x12052420u));
  /* 12021bdd call dword ptr [0x12055518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055518))), 0x12021be3u);
  /* 12021be3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021be6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021be8 call 0x12025c50 */
  push32(0x12021bedu); f_12025c50();
  /* 12021bed mov esi, esp */
  ESI = (ESP);
  /* 12021bef push 0x12052430 */
  push32((uint32_t)(0x12052430u));
  /* 12021bf4 call dword ptr [0x12055518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055518))), 0x12021bfau);
  /* 12021bfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021bfd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021bff call 0x12025c50 */
  push32(0x12021c04u); f_12025c50();
  /* 12021c04 mov esi, esp */
  ESI = (ESP);
  /* 12021c06 push 0x12052530 */
  push32((uint32_t)(0x12052530u));
  /* 12021c0b call dword ptr [0x12055518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055518))), 0x12021c11u);
  /* 12021c11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021c14 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021c16 call 0x12025c50 */
  push32(0x12021c1bu); f_12025c50();
  /* 12021c1b mov esi, esp */
  ESI = (ESP);
  /* 12021c1d push 0x12052528 */
  push32((uint32_t)(0x12052528u));
  /* 12021c22 call dword ptr [0x12055518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055518))), 0x12021c28u);
  /* 12021c28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021c2b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021c2d call 0x12025c50 */
  push32(0x12021c32u); f_12025c50();
  /* 12021c32 mov esi, esp */
  ESI = (ESP);
  /* 12021c34 push 0x12052568 */
  push32((uint32_t)(0x12052568u));
  /* 12021c39 call dword ptr [0x12055518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055518))), 0x12021c3fu);
  /* 12021c3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021c42 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021c44 call 0x12025c50 */
  push32(0x12021c49u); f_12025c50();
  /* 12021c49 mov esi, esp */
  ESI = (ESP);
  /* 12021c4b push 0x12052560 */
  push32((uint32_t)(0x12052560u));
  /* 12021c50 call dword ptr [0x12055518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055518))), 0x12021c56u);
  /* 12021c56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021c59 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021c5b call 0x12025c50 */
  push32(0x12021c60u); f_12025c50();
  /* 12021c60 mov esi, esp */
  ESI = (ESP);
  /* 12021c62 push 0x12052580 */
  push32((uint32_t)(0x12052580u));
  /* 12021c67 call dword ptr [0x12055518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055518))), 0x12021c6du);
  /* 12021c6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021c70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021c72 call 0x12025c50 */
  push32(0x12021c77u); f_12025c50();
  /* 12021c77 mov esi, esp */
  ESI = (ESP);
  /* 12021c79 push 0x12052570 */
  push32((uint32_t)(0x12052570u));
  /* 12021c7e call dword ptr [0x12055518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055518))), 0x12021c84u);
  /* 12021c84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021c87 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021c89 call 0x12025c50 */
  push32(0x12021c8eu); f_12025c50();
  /* 12021c8e mov esi, esp */
  ESI = (ESP);
  /* 12021c90 push 0x12052548 */
  push32((uint32_t)(0x12052548u));
  /* 12021c95 call dword ptr [0x12055518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055518))), 0x12021c9bu);
  /* 12021c9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021c9e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021ca0 call 0x12025c50 */
  push32(0x12021ca5u); f_12025c50();
  /* 12021ca5 mov esi, esp */
  ESI = (ESP);
  /* 12021ca7 push 0x12052540 */
  push32((uint32_t)(0x12052540u));
  /* 12021cac call dword ptr [0x12055518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055518))), 0x12021cb2u);
  /* 12021cb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021cb5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021cb7 call 0x12025c50 */
  push32(0x12021cbcu); f_12025c50();
  /* 12021cbc mov esi, esp */
  ESI = (ESP);
  /* 12021cbe push 0x12052558 */
  push32((uint32_t)(0x12052558u));
  /* 12021cc3 call dword ptr [0x12055518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055518))), 0x12021cc9u);
  /* 12021cc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021ccc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021cce call 0x12025c50 */
  push32(0x12021cd3u); f_12025c50();
  /* 12021cd3 mov esi, esp */
  ESI = (ESP);
  /* 12021cd5 push 0x12052550 */
  push32((uint32_t)(0x12052550u));
  /* 12021cda call dword ptr [0x12055518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055518))), 0x12021ce0u);
  /* 12021ce0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021ce3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021ce5 call 0x12025c50 */
  push32(0x12021ceau); f_12025c50();
  /* 12021cea mov esi, esp */
  ESI = (ESP);
  /* 12021cec push 0x12052578 */
  push32((uint32_t)(0x12052578u));
  /* 12021cf1 call dword ptr [0x12055518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055518))), 0x12021cf7u);
  /* 12021cf7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021cfa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021cfc call 0x12025c50 */
  push32(0x12021d01u); f_12025c50();
  /* 12021d01 mov esi, esp */
  ESI = (ESP);
  /* 12021d03 push 0x120526b8 */
  push32((uint32_t)(0x120526b8u));
  /* 12021d08 call dword ptr [0x12055518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055518))), 0x12021d0eu);
  /* 12021d0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021d11 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021d13 call 0x12025c50 */
  push32(0x12021d18u); f_12025c50();
  /* 12021d18 mov esi, esp */
  ESI = (ESP);
  /* 12021d1a push 0x1204d03c */
  push32((uint32_t)(0x1204d03cu));
  /* 12021d1f push 1 */
  push32((uint32_t)(0x1u));
  /* 12021d21 call dword ptr [0x1205551c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205551c))), 0x12021d27u);
  /* 12021d27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021d2a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021d2c call 0x12025c50 */
  push32(0x12021d31u); f_12025c50();
  /* 12021d31 mov esi, esp */
  ESI = (ESP);
  /* 12021d33 push 0x1204d030 */
  push32((uint32_t)(0x1204d030u));
  /* 12021d38 push 2 */
  push32((uint32_t)(0x2u));
  /* 12021d3a call dword ptr [0x1205551c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205551c))), 0x12021d40u);
  /* 12021d40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021d43 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021d45 call 0x12025c50 */
  push32(0x12021d4au); f_12025c50();
  /* 12021d4a mov esi, esp */
  ESI = (ESP);
  /* 12021d4c push 0x1204d028 */
  push32((uint32_t)(0x1204d028u));
  /* 12021d51 push 3 */
  push32((uint32_t)(0x3u));
  /* 12021d53 call dword ptr [0x1205551c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205551c))), 0x12021d59u);
  /* 12021d59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021d5c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021d5e call 0x12025c50 */
  push32(0x12021d63u); f_12025c50();
  /* 12021d63 mov esi, esp */
  ESI = (ESP);
  /* 12021d65 push 0x1204d028 */
  push32((uint32_t)(0x1204d028u));
  /* 12021d6a push 4 */
  push32((uint32_t)(0x4u));
  /* 12021d6c call dword ptr [0x1205551c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205551c))), 0x12021d72u);
  /* 12021d72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021d75 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021d77 call 0x12025c50 */
  push32(0x12021d7cu); f_12025c50();
  /* 12021d7c mov esi, esp */
  ESI = (ESP);
  /* 12021d7e push 0x1204d01c */
  push32((uint32_t)(0x1204d01cu));
  /* 12021d83 push 5 */
  push32((uint32_t)(0x5u));
  /* 12021d85 call dword ptr [0x1205551c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205551c))), 0x12021d8bu);
  /* 12021d8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021d8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021d90 call 0x12025c50 */
  push32(0x12021d95u); f_12025c50();
  /* 12021d95 mov esi, esp */
  ESI = (ESP);
  /* 12021d97 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 12021d99 push 1 */
  push32((uint32_t)(0x1u));
  /* 12021d9b call dword ptr [0x12055520] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055520))), 0x12021da1u);
  /* 12021da1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021da4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021da6 call 0x12025c50 */
  push32(0x12021dabu); f_12025c50();
  /* 12021dab mov esi, esp */
  ESI = (ESP);
  /* 12021dad push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 12021daf push 2 */
  push32((uint32_t)(0x2u));
  /* 12021db1 call dword ptr [0x12055520] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055520))), 0x12021db7u);
  /* 12021db7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021dba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021dbc call 0x12025c50 */
  push32(0x12021dc1u); f_12025c50();
  /* 12021dc1 mov esi, esp */
  ESI = (ESP);
  /* 12021dc3 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 12021dc5 push 3 */
  push32((uint32_t)(0x3u));
  /* 12021dc7 call dword ptr [0x12055520] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055520))), 0x12021dcdu);
  /* 12021dcd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021dd0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021dd2 call 0x12025c50 */
  push32(0x12021dd7u); f_12025c50();
  /* 12021dd7 mov esi, esp */
  ESI = (ESP);
  /* 12021dd9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 12021ddb push 4 */
  push32((uint32_t)(0x4u));
  /* 12021ddd call dword ptr [0x12055520] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055520))), 0x12021de3u);
  /* 12021de3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021de6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021de8 call 0x12025c50 */
  push32(0x12021dedu); f_12025c50();
  /* 12021ded mov esi, esp */
  ESI = (ESP);
  /* 12021def push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 12021df1 push 5 */
  push32((uint32_t)(0x5u));
  /* 12021df3 call dword ptr [0x12055520] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055520))), 0x12021df9u);
  /* 12021df9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021dfc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021dfe call 0x12025c50 */
  push32(0x12021e03u); f_12025c50();
  /* 12021e03 mov esi, esp */
  ESI = (ESP);
  /* 12021e05 push 0 */
  push32((uint32_t)(0x0u));
  /* 12021e07 push 0x12052490 */
  push32((uint32_t)(0x12052490u));
  /* 12021e0c push 0 */
  push32((uint32_t)(0x0u));
  /* 12021e0e call dword ptr [0x12055524] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055524))), 0x12021e14u);
  /* 12021e14 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021e17 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021e19 call 0x12025c50 */
  push32(0x12021e1eu); f_12025c50();
  /* 12021e1e mov esi, esp */
  ESI = (ESP);
  /* 12021e20 push 0 */
  push32((uint32_t)(0x0u));
  /* 12021e22 push 0x120525d0 */
  push32((uint32_t)(0x120525d0u));
  /* 12021e27 push 0 */
  push32((uint32_t)(0x0u));
  /* 12021e29 call dword ptr [0x12055524] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055524))), 0x12021e2fu);
  /* 12021e2f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021e32 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021e34 call 0x12025c50 */
  push32(0x12021e39u); f_12025c50();
  /* 12021e39 mov esi, esp */
  ESI = (ESP);
  /* 12021e3b push 0 */
  push32((uint32_t)(0x0u));
  /* 12021e3d push 0x12052498 */
  push32((uint32_t)(0x12052498u));
  /* 12021e42 push 0 */
  push32((uint32_t)(0x0u));
  /* 12021e44 call dword ptr [0x12055524] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055524))), 0x12021e4au);
  /* 12021e4a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021e4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021e4f call 0x12025c50 */
  push32(0x12021e54u); f_12025c50();
  /* 12021e54 mov esi, esp */
  ESI = (ESP);
  /* 12021e56 push 0 */
  push32((uint32_t)(0x0u));
  /* 12021e58 push 0x120525e0 */
  push32((uint32_t)(0x120525e0u));
  /* 12021e5d push 0 */
  push32((uint32_t)(0x0u));
  /* 12021e5f call dword ptr [0x12055524] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055524))), 0x12021e65u);
  /* 12021e65 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021e68 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021e6a call 0x12025c50 */
  push32(0x12021e6fu); f_12025c50();
  /* 12021e6f mov esi, esp */
  ESI = (ESP);
  /* 12021e71 push 0 */
  push32((uint32_t)(0x0u));
  /* 12021e73 push 0x120525e8 */
  push32((uint32_t)(0x120525e8u));
  /* 12021e78 push 0 */
  push32((uint32_t)(0x0u));
  /* 12021e7a call dword ptr [0x12055524] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055524))), 0x12021e80u);
  /* 12021e80 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021e83 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021e85 call 0x12025c50 */
  push32(0x12021e8au); f_12025c50();
  /* 12021e8a mov esi, esp */
  ESI = (ESP);
  /* 12021e8c push 0 */
  push32((uint32_t)(0x0u));
  /* 12021e8e push 0x120524a8 */
  push32((uint32_t)(0x120524a8u));
  /* 12021e93 push 0 */
  push32((uint32_t)(0x0u));
  /* 12021e95 call dword ptr [0x12055524] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055524))), 0x12021e9bu);
  /* 12021e9b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021e9e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021ea0 call 0x12025c50 */
  push32(0x12021ea5u); f_12025c50();
  /* 12021ea5 mov esi, esp */
  ESI = (ESP);
  /* 12021ea7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12021ea9 push 0x120525d8 */
  push32((uint32_t)(0x120525d8u));
  /* 12021eae push 0 */
  push32((uint32_t)(0x0u));
  /* 12021eb0 call dword ptr [0x12055524] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055524))), 0x12021eb6u);
  /* 12021eb6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021eb9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021ebb call 0x12025c50 */
  push32(0x12021ec0u); f_12025c50();
  /* 12021ec0 mov esi, esp */
  ESI = (ESP);
  /* 12021ec2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12021ec4 push 0x12052468 */
  push32((uint32_t)(0x12052468u));
  /* 12021ec9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12021ecb call dword ptr [0x12055524] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055524))), 0x12021ed1u);
  /* 12021ed1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021ed4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021ed6 call 0x12025c50 */
  push32(0x12021edbu); f_12025c50();
  /* 12021edb mov esi, esp */
  ESI = (ESP);
  /* 12021edd push 0 */
  push32((uint32_t)(0x0u));
  /* 12021edf push 0x12052478 */
  push32((uint32_t)(0x12052478u));
  /* 12021ee4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12021ee6 call dword ptr [0x12055524] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055524))), 0x12021eecu);
  /* 12021eec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021eef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021ef1 call 0x12025c50 */
  push32(0x12021ef6u); f_12025c50();
  /* 12021ef6 mov esi, esp */
  ESI = (ESP);
  /* 12021ef8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12021efa push 0x12052450 */
  push32((uint32_t)(0x12052450u));
  /* 12021eff push 0 */
  push32((uint32_t)(0x0u));
  /* 12021f01 call dword ptr [0x12055524] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055524))), 0x12021f07u);
  /* 12021f07 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021f0a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021f0c call 0x12025c50 */
  push32(0x12021f11u); f_12025c50();
  /* 12021f11 mov esi, esp */
  ESI = (ESP);
  /* 12021f13 push 0 */
  push32((uint32_t)(0x0u));
  /* 12021f15 push 0x12052500 */
  push32((uint32_t)(0x12052500u));
  /* 12021f1a push 0 */
  push32((uint32_t)(0x0u));
  /* 12021f1c call dword ptr [0x12055524] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055524))), 0x12021f22u);
  /* 12021f22 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021f25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021f27 call 0x12025c50 */
  push32(0x12021f2cu); f_12025c50();
  /* 12021f2c mov esi, esp */
  ESI = (ESP);
  /* 12021f2e push 0 */
  push32((uint32_t)(0x0u));
  /* 12021f30 push 0x12052508 */
  push32((uint32_t)(0x12052508u));
  /* 12021f35 push 0 */
  push32((uint32_t)(0x0u));
  /* 12021f37 call dword ptr [0x12055524] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055524))), 0x12021f3du);
  /* 12021f3d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021f40 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021f42 call 0x12025c50 */
  push32(0x12021f47u); f_12025c50();
  /* 12021f47 mov esi, esp */
  ESI = (ESP);
  /* 12021f49 push 0 */
  push32((uint32_t)(0x0u));
  /* 12021f4b push 0x12052520 */
  push32((uint32_t)(0x12052520u));
  /* 12021f50 push 0 */
  push32((uint32_t)(0x0u));
  /* 12021f52 call dword ptr [0x12055524] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055524))), 0x12021f58u);
  /* 12021f58 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021f5b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021f5d call 0x12025c50 */
  push32(0x12021f62u); f_12025c50();
  /* 12021f62 pop edi */
  EDI = (pop32());
  /* 12021f63 pop esi */
  ESI = (pop32());
  /* 12021f64 pop ebx */
  EBX = (pop32());
  /* 12021f65 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12021f68 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12021f6a call 0x12025c50 */
  push32(0x12021f6fu); f_12025c50();
  /* 12021f6f mov esp, ebp */
  ESP = (EBP);
  /* 12021f71 pop ebp */
  EBP = (pop32());
  /* 12021f72 ret  */
  ESPCHK(0x12021030u, _esp0);
  ESP += 4; return;
}

/* FUN_10002350 @ 0x12022350 (67 bytes, 26 insns) */
void f_12022350(void) {
  FTRACE(0x12022350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12022350 push ebp */
  push32((uint32_t)(EBP));
  /* 12022351 mov ebp, esp */
  EBP = (ESP);
  /* 12022353 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12022356 push ebx */
  push32((uint32_t)(EBX));
  /* 12022357 push esi */
  push32((uint32_t)(ESI));
  /* 12022358 push edi */
  push32((uint32_t)(EDI));
  /* 12022359 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1202235c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12022361 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12022366 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12022368 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202236b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1202236e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022372 je 0x12022376 */
  if (C.zf) goto L_12022376;
  /* 12022374 jmp 0x1202237b */
  goto L_1202237b;
L_12022376:;
  /* 12022376 call 0x12021005 */
  push32(0x1202237bu); f_12021005();
L_1202237b:;
  /* 1202237b mov eax, 1 */
  EAX = (0x1u);
  /* 12022380 pop edi */
  EDI = (pop32());
  /* 12022381 pop esi */
  ESI = (pop32());
  /* 12022382 pop ebx */
  EBX = (pop32());
  /* 12022383 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022386 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022388 call 0x12025c50 */
  push32(0x1202238du); f_12025c50();
  /* 1202238d mov esp, ebp */
  ESP = (EBP);
  /* 1202238f pop ebp */
  EBP = (pop32());
  /* 12022390 ret 0xc */
  ESPCHK(0x12022350u, _esp0);
  ESP += 16; return;
}

/* FUN_100023b0 @ 0x120223b0 (11307 bytes, 3165 insns) [3 switch table(s)] */
void f_120223b0(void) {
  FTRACE(0x120223b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120223b0 push ebp */
  push32((uint32_t)(EBP));
  /* 120223b1 mov ebp, esp */
  EBP = (ESP);
  /* 120223b3 sub esp, 0x54 */
  { uint32_t _a=(ESP),_b=(0x54u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120223b6 push ebx */
  push32((uint32_t)(EBX));
  /* 120223b7 push esi */
  push32((uint32_t)(ESI));
  /* 120223b8 push edi */
  push32((uint32_t)(EDI));
  /* 120223b9 lea edi, [ebp - 0x54] */
  EDI = ((uint32_t)(EBP + -0x54));
  /* 120223bc mov ecx, 0x15 */
  ECX = (0x15u);
  /* 120223c1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 120223c6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120223c8 mov esi, esp */
  ESI = (ESP);
  /* 120223ca push 0x63 */
  push32((uint32_t)(0x63u));
  /* 120223cc call dword ptr [0x12055460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055460))), 0x120223d2u);
  /* 120223d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120223d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120223d7 call 0x12025c50 */
  push32(0x120223dcu); f_12025c50();
  /* 120223dc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120223e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120223e3 je 0x1202317b */
  if (C.zf) goto L_1202317b;
  /* 120223e9 mov esi, esp */
  ESI = (ESP);
  /* 120223eb push 0 */
  push32((uint32_t)(0x0u));
  /* 120223ed push 0x63 */
  push32((uint32_t)(0x63u));
  /* 120223ef call dword ptr [0x12055464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055464))), 0x120223f5u);
  /* 120223f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120223f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120223fa call 0x12025c50 */
  push32(0x120223ffu); f_12025c50();
  /* 120223ff mov esi, esp */
  ESI = (ESP);
  /* 12022401 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12022403 call dword ptr [0x12055468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055468))), 0x12022409u);
  /* 12022409 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202240c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202240e call 0x12025c50 */
  push32(0x12022413u); f_12025c50();
  /* 12022413 mov esi, esp */
  ESI = (ESP);
  /* 12022415 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 12022417 call dword ptr [0x1205546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205546c))), 0x1202241du);
  /* 1202241d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022420 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022422 call 0x12025c50 */
  push32(0x12022427u); f_12025c50();
  /* 12022427 mov esi, esp */
  ESI = (ESP);
  /* 12022429 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1202242b call dword ptr [0x1205546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205546c))), 0x12022431u);
  /* 12022431 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022434 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022436 call 0x12025c50 */
  push32(0x1202243bu); f_12025c50();
  /* 1202243b mov esi, esp */
  ESI = (ESP);
  /* 1202243d push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1202243f call dword ptr [0x1205546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205546c))), 0x12022445u);
  /* 12022445 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022448 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202244a call 0x12025c50 */
  push32(0x1202244fu); f_12025c50();
  /* 1202244f mov esi, esp */
  ESI = (ESP);
  /* 12022451 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 12022453 call dword ptr [0x1205546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205546c))), 0x12022459u);
  /* 12022459 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202245c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202245e call 0x12025c50 */
  push32(0x12022463u); f_12025c50();
  /* 12022463 mov esi, esp */
  ESI = (ESP);
  /* 12022465 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 12022467 call dword ptr [0x1205546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205546c))), 0x1202246du);
  /* 1202246d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022470 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022472 call 0x12025c50 */
  push32(0x12022477u); f_12025c50();
  /* 12022477 mov esi, esp */
  ESI = (ESP);
  /* 12022479 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 1202247b call dword ptr [0x1205546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205546c))), 0x12022481u);
  /* 12022481 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022484 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022486 call 0x12025c50 */
  push32(0x1202248bu); f_12025c50();
  /* 1202248b mov esi, esp */
  ESI = (ESP);
  /* 1202248d push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 1202248f call dword ptr [0x1205546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205546c))), 0x12022495u);
  /* 12022495 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022498 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202249a call 0x12025c50 */
  push32(0x1202249fu); f_12025c50();
  /* 1202249f mov esi, esp */
  ESI = (ESP);
  /* 120224a1 push 0x120524d8 */
  push32((uint32_t)(0x120524d8u));
  /* 120224a6 call dword ptr [0x12055470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055470))), 0x120224acu);
  /* 120224ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120224af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120224b1 call 0x12025c50 */
  push32(0x120224b6u); f_12025c50();
  /* 120224b6 mov esi, esp */
  ESI = (ESP);
  /* 120224b8 push 0x120524d0 */
  push32((uint32_t)(0x120524d0u));
  /* 120224bd call dword ptr [0x12055470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055470))), 0x120224c3u);
  /* 120224c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120224c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120224c8 call 0x12025c50 */
  push32(0x120224cdu); f_12025c50();
  /* 120224cd mov esi, esp */
  ESI = (ESP);
  /* 120224cf push 0x120524f8 */
  push32((uint32_t)(0x120524f8u));
  /* 120224d4 call dword ptr [0x12055470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055470))), 0x120224dau);
  /* 120224da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120224dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120224df call 0x12025c50 */
  push32(0x120224e4u); f_12025c50();
  /* 120224e4 mov esi, esp */
  ESI = (ESP);
  /* 120224e6 push 0x12052440 */
  push32((uint32_t)(0x12052440u));
  /* 120224eb push 0x12052480 */
  push32((uint32_t)(0x12052480u));
  /* 120224f0 call dword ptr [0x12055474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055474))), 0x120224f6u);
  /* 120224f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120224f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120224fb call 0x12025c50 */
  push32(0x12022500u); f_12025c50();
  /* 12022500 mov esi, esp */
  ESI = (ESP);
  /* 12022502 push 0 */
  push32((uint32_t)(0x0u));
  /* 12022504 call dword ptr [0x12055478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055478))), 0x1202250au);
  /* 1202250a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202250d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202250f call 0x12025c50 */
  push32(0x12022514u); f_12025c50();
  /* 12022514 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12022517 cmp dword ptr [ebp - 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202251b ja 0x12022b05 */
  if ((!C.cf&&!C.zf)) goto L_12022b05;
  /* 12022521 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12022524 jmp dword ptr [eax*4 + 0x12024fdb] */
  switch (EAX) {
    case 0: goto L_1202252b;
    case 1: goto L_12022730;
    case 2: goto L_120228d1;
    case 3: goto L_12022a27;
    case 4: goto L_12023d5b;
    case 5: goto L_12023de1;
    case 6: goto L_12023e67;
    case 7: goto L_12023eed;
    case 8: goto L_120249c5;
    case 9: goto L_12024a1d;
    case 10: goto L_12024a78;
    case 11: goto L_12024ad0;
    default: x86_unimpl("switch@0x12022524 out of table"); return;
  }
L_1202252b:;
  /* 1202252b mov esi, esp */
  ESI = (ESP);
  /* 1202252d push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 12022532 push 3 */
  push32((uint32_t)(0x3u));
  /* 12022534 push 0 */
  push32((uint32_t)(0x0u));
  /* 12022536 call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x1202253cu);
  /* 1202253c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202253f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022541 call 0x12025c50 */
  push32(0x12022546u); f_12025c50();
  /* 12022546 mov esi, esp */
  ESI = (ESP);
  /* 12022548 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 1202254d push 0 */
  push32((uint32_t)(0x0u));
  /* 1202254f push 0 */
  push32((uint32_t)(0x0u));
  /* 12022551 call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x12022557u);
  /* 12022557 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202255a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202255c call 0x12025c50 */
  push32(0x12022561u); f_12025c50();
  /* 12022561 mov esi, esp */
  ESI = (ESP);
  /* 12022563 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 12022568 push 2 */
  push32((uint32_t)(0x2u));
  /* 1202256a push 0 */
  push32((uint32_t)(0x0u));
  /* 1202256c call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x12022572u);
  /* 12022572 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022575 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022577 call 0x12025c50 */
  push32(0x1202257cu); f_12025c50();
  /* 1202257c mov esi, esp */
  ESI = (ESP);
  /* 1202257e push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 12022583 push 1 */
  push32((uint32_t)(0x1u));
  /* 12022585 push 0 */
  push32((uint32_t)(0x0u));
  /* 12022587 call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x1202258du);
  /* 1202258d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022590 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022592 call 0x12025c50 */
  push32(0x12022597u); f_12025c50();
  /* 12022597 mov esi, esp */
  ESI = (ESP);
  /* 12022599 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 1202259e push 5 */
  push32((uint32_t)(0x5u));
  /* 120225a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 120225a2 call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x120225a8u);
  /* 120225a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120225ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120225ad call 0x12025c50 */
  push32(0x120225b2u); f_12025c50();
  /* 120225b2 mov esi, esp */
  ESI = (ESP);
  /* 120225b4 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 120225b9 push 4 */
  push32((uint32_t)(0x4u));
  /* 120225bb push 0 */
  push32((uint32_t)(0x0u));
  /* 120225bd call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x120225c3u);
  /* 120225c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120225c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120225c8 call 0x12025c50 */
  push32(0x120225cdu); f_12025c50();
  /* 120225cd mov esi, esp */
  ESI = (ESP);
  /* 120225cf push 0 */
  push32((uint32_t)(0x0u));
  /* 120225d1 push 0x12052518 */
  push32((uint32_t)(0x12052518u));
  /* 120225d6 call dword ptr [0x12055480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055480))), 0x120225dcu);
  /* 120225dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120225df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120225e1 call 0x12025c50 */
  push32(0x120225e6u); f_12025c50();
  /* 120225e6 mov esi, esp */
  ESI = (ESP);
  /* 120225e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 120225ea push 0x12052610 */
  push32((uint32_t)(0x12052610u));
  /* 120225ef call dword ptr [0x12055480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055480))), 0x120225f5u);
  /* 120225f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120225f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120225fa call 0x12025c50 */
  push32(0x120225ffu); f_12025c50();
  /* 120225ff mov esi, esp */
  ESI = (ESP);
  /* 12022601 push 1 */
  push32((uint32_t)(0x1u));
  /* 12022603 push 0x12052618 */
  push32((uint32_t)(0x12052618u));
  /* 12022608 call dword ptr [0x12055480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055480))), 0x1202260eu);
  /* 1202260e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022611 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022613 call 0x12025c50 */
  push32(0x12022618u); f_12025c50();
  /* 12022618 mov esi, esp */
  ESI = (ESP);
  /* 1202261a push 1 */
  push32((uint32_t)(0x1u));
  /* 1202261c push 0x12052620 */
  push32((uint32_t)(0x12052620u));
  /* 12022621 call dword ptr [0x12055480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055480))), 0x12022627u);
  /* 12022627 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202262a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202262c call 0x12025c50 */
  push32(0x12022631u); f_12025c50();
  /* 12022631 mov esi, esp */
  ESI = (ESP);
  /* 12022633 push 1 */
  push32((uint32_t)(0x1u));
  /* 12022635 push 0x12052628 */
  push32((uint32_t)(0x12052628u));
  /* 1202263a call dword ptr [0x12055480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055480))), 0x12022640u);
  /* 12022640 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022643 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022645 call 0x12025c50 */
  push32(0x1202264au); f_12025c50();
  /* 1202264a mov esi, esp */
  ESI = (ESP);
  /* 1202264c push 1 */
  push32((uint32_t)(0x1u));
  /* 1202264e push 0x12052630 */
  push32((uint32_t)(0x12052630u));
  /* 12022653 call dword ptr [0x12055480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055480))), 0x12022659u);
  /* 12022659 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202265c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202265e call 0x12025c50 */
  push32(0x12022663u); f_12025c50();
  /* 12022663 mov esi, esp */
  ESI = (ESP);
  /* 12022665 push 5 */
  push32((uint32_t)(0x5u));
  /* 12022667 call dword ptr [0x12055484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055484))), 0x1202266du);
  /* 1202266d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022670 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022672 call 0x12025c50 */
  push32(0x12022677u); f_12025c50();
  /* 12022677 mov esi, esp */
  ESI = (ESP);
  /* 12022679 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202267b push 0x12052510 */
  push32((uint32_t)(0x12052510u));
  /* 12022680 call dword ptr [0x12055480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055480))), 0x12022686u);
  /* 12022686 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022689 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202268b call 0x12025c50 */
  push32(0x12022690u); f_12025c50();
  /* 12022690 mov esi, esp */
  ESI = (ESP);
  /* 12022692 push 1 */
  push32((uint32_t)(0x1u));
  /* 12022694 push 0x12052638 */
  push32((uint32_t)(0x12052638u));
  /* 12022699 call dword ptr [0x12055480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055480))), 0x1202269fu);
  /* 1202269f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120226a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120226a4 call 0x12025c50 */
  push32(0x120226a9u); f_12025c50();
  /* 120226a9 mov esi, esp */
  ESI = (ESP);
  /* 120226ab push 1 */
  push32((uint32_t)(0x1u));
  /* 120226ad push 0x12052640 */
  push32((uint32_t)(0x12052640u));
  /* 120226b2 call dword ptr [0x12055480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055480))), 0x120226b8u);
  /* 120226b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120226bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120226bd call 0x12025c50 */
  push32(0x120226c2u); f_12025c50();
  /* 120226c2 mov esi, esp */
  ESI = (ESP);
  /* 120226c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 120226c6 push 0x12052648 */
  push32((uint32_t)(0x12052648u));
  /* 120226cb call dword ptr [0x12055480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055480))), 0x120226d1u);
  /* 120226d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120226d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120226d6 call 0x12025c50 */
  push32(0x120226dbu); f_12025c50();
  /* 120226db mov esi, esp */
  ESI = (ESP);
  /* 120226dd push 4 */
  push32((uint32_t)(0x4u));
  /* 120226df call dword ptr [0x12055484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055484))), 0x120226e5u);
  /* 120226e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120226e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120226ea call 0x12025c50 */
  push32(0x120226efu); f_12025c50();
  /* 120226ef mov dword ptr [0x12052538], 1 */
  w32((uint32_t)(0x12052538), (0x1u));
  /* 120226f9 mov dword ptr [0x12052588], 0 */
  w32((uint32_t)(0x12052588), (0x0u));
  /* 12022703 mov dword ptr [0x120525c8], 3 */
  w32((uint32_t)(0x120525c8), (0x3u));
  /* 1202270d mov dword ptr [0x12052608], 3 */
  w32((uint32_t)(0x12052608), (0x3u));
  /* 12022717 mov dword ptr [0x12052650], 1 */
  w32((uint32_t)(0x12052650), (0x1u));
  /* 12022721 mov dword ptr [0x12052670], 1 */
  w32((uint32_t)(0x12052670), (0x1u));
  /* 1202272b jmp 0x12022b05 */
  goto L_12022b05;
L_12022730:;
  /* 12022730 mov esi, esp */
  ESI = (ESP);
  /* 12022732 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 12022737 push 3 */
  push32((uint32_t)(0x3u));
  /* 12022739 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202273b call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x12022741u);
  /* 12022741 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022744 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022746 call 0x12025c50 */
  push32(0x1202274bu); f_12025c50();
  /* 1202274b mov esi, esp */
  ESI = (ESP);
  /* 1202274d push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 12022752 push 0 */
  push32((uint32_t)(0x0u));
  /* 12022754 push 0 */
  push32((uint32_t)(0x0u));
  /* 12022756 call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x1202275cu);
  /* 1202275c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202275f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022761 call 0x12025c50 */
  push32(0x12022766u); f_12025c50();
  /* 12022766 mov esi, esp */
  ESI = (ESP);
  /* 12022768 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 1202276d push 2 */
  push32((uint32_t)(0x2u));
  /* 1202276f push 0 */
  push32((uint32_t)(0x0u));
  /* 12022771 call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x12022777u);
  /* 12022777 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202277a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202277c call 0x12025c50 */
  push32(0x12022781u); f_12025c50();
  /* 12022781 mov esi, esp */
  ESI = (ESP);
  /* 12022783 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 12022788 push 1 */
  push32((uint32_t)(0x1u));
  /* 1202278a push 0 */
  push32((uint32_t)(0x0u));
  /* 1202278c call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x12022792u);
  /* 12022792 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022795 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022797 call 0x12025c50 */
  push32(0x1202279cu); f_12025c50();
  /* 1202279c mov esi, esp */
  ESI = (ESP);
  /* 1202279e push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 120227a3 push 5 */
  push32((uint32_t)(0x5u));
  /* 120227a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 120227a7 call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x120227adu);
  /* 120227ad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120227b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120227b2 call 0x12025c50 */
  push32(0x120227b7u); f_12025c50();
  /* 120227b7 mov esi, esp */
  ESI = (ESP);
  /* 120227b9 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 120227be push 4 */
  push32((uint32_t)(0x4u));
  /* 120227c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 120227c2 call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x120227c8u);
  /* 120227c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120227cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120227cd call 0x12025c50 */
  push32(0x120227d2u); f_12025c50();
  /* 120227d2 mov esi, esp */
  ESI = (ESP);
  /* 120227d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 120227d6 push 0x12052610 */
  push32((uint32_t)(0x12052610u));
  /* 120227db call dword ptr [0x12055480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055480))), 0x120227e1u);
  /* 120227e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120227e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120227e6 call 0x12025c50 */
  push32(0x120227ebu); f_12025c50();
  /* 120227eb mov esi, esp */
  ESI = (ESP);
  /* 120227ed push 1 */
  push32((uint32_t)(0x1u));
  /* 120227ef push 0x12052618 */
  push32((uint32_t)(0x12052618u));
  /* 120227f4 call dword ptr [0x12055480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055480))), 0x120227fau);
  /* 120227fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120227fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120227ff call 0x12025c50 */
  push32(0x12022804u); f_12025c50();
  /* 12022804 mov esi, esp */
  ESI = (ESP);
  /* 12022806 push 1 */
  push32((uint32_t)(0x1u));
  /* 12022808 push 0x12052628 */
  push32((uint32_t)(0x12052628u));
  /* 1202280d call dword ptr [0x12055480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055480))), 0x12022813u);
  /* 12022813 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022816 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022818 call 0x12025c50 */
  push32(0x1202281du); f_12025c50();
  /* 1202281d mov esi, esp */
  ESI = (ESP);
  /* 1202281f push 1 */
  push32((uint32_t)(0x1u));
  /* 12022821 push 0x12052630 */
  push32((uint32_t)(0x12052630u));
  /* 12022826 call dword ptr [0x12055480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055480))), 0x1202282cu);
  /* 1202282c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202282f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022831 call 0x12025c50 */
  push32(0x12022836u); f_12025c50();
  /* 12022836 mov esi, esp */
  ESI = (ESP);
  /* 12022838 push 5 */
  push32((uint32_t)(0x5u));
  /* 1202283a call dword ptr [0x12055484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055484))), 0x12022840u);
  /* 12022840 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022843 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022845 call 0x12025c50 */
  push32(0x1202284au); f_12025c50();
  /* 1202284a mov esi, esp */
  ESI = (ESP);
  /* 1202284c push 0 */
  push32((uint32_t)(0x0u));
  /* 1202284e push 0x12052640 */
  push32((uint32_t)(0x12052640u));
  /* 12022853 call dword ptr [0x12055480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055480))), 0x12022859u);
  /* 12022859 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202285c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202285e call 0x12025c50 */
  push32(0x12022863u); f_12025c50();
  /* 12022863 mov esi, esp */
  ESI = (ESP);
  /* 12022865 push 1 */
  push32((uint32_t)(0x1u));
  /* 12022867 push 0x12052648 */
  push32((uint32_t)(0x12052648u));
  /* 1202286c call dword ptr [0x12055480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055480))), 0x12022872u);
  /* 12022872 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022875 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022877 call 0x12025c50 */
  push32(0x1202287cu); f_12025c50();
  /* 1202287c mov esi, esp */
  ESI = (ESP);
  /* 1202287e push 4 */
  push32((uint32_t)(0x4u));
  /* 12022880 call dword ptr [0x12055484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055484))), 0x12022886u);
  /* 12022886 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022889 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202288b call 0x12025c50 */
  push32(0x12022890u); f_12025c50();
  /* 12022890 mov dword ptr [0x12052538], 1 */
  w32((uint32_t)(0x12052538), (0x1u));
  /* 1202289a mov dword ptr [0x12052588], 1 */
  w32((uint32_t)(0x12052588), (0x1u));
  /* 120228a4 mov dword ptr [0x120525c8], 7 */
  w32((uint32_t)(0x120525c8), (0x7u));
  /* 120228ae mov dword ptr [0x12052608], 8 */
  w32((uint32_t)(0x12052608), (0x8u));
  /* 120228b8 mov dword ptr [0x12052650], 1 */
  w32((uint32_t)(0x12052650), (0x1u));
  /* 120228c2 mov dword ptr [0x12052670], 1 */
  w32((uint32_t)(0x12052670), (0x1u));
  /* 120228cc jmp 0x12022b05 */
  goto L_12022b05;
L_120228d1:;
  /* 120228d1 mov esi, esp */
  ESI = (ESP);
  /* 120228d3 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 120228d8 push 3 */
  push32((uint32_t)(0x3u));
  /* 120228da push 0 */
  push32((uint32_t)(0x0u));
  /* 120228dc call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x120228e2u);
  /* 120228e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120228e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120228e7 call 0x12025c50 */
  push32(0x120228ecu); f_12025c50();
  /* 120228ec mov esi, esp */
  ESI = (ESP);
  /* 120228ee push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 120228f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 120228f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 120228f7 call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x120228fdu);
  /* 120228fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022900 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022902 call 0x12025c50 */
  push32(0x12022907u); f_12025c50();
  /* 12022907 mov esi, esp */
  ESI = (ESP);
  /* 12022909 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 1202290e push 2 */
  push32((uint32_t)(0x2u));
  /* 12022910 push 0 */
  push32((uint32_t)(0x0u));
  /* 12022912 call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x12022918u);
  /* 12022918 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202291b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202291d call 0x12025c50 */
  push32(0x12022922u); f_12025c50();
  /* 12022922 mov esi, esp */
  ESI = (ESP);
  /* 12022924 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 12022929 push 1 */
  push32((uint32_t)(0x1u));
  /* 1202292b push 0 */
  push32((uint32_t)(0x0u));
  /* 1202292d call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x12022933u);
  /* 12022933 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022936 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022938 call 0x12025c50 */
  push32(0x1202293du); f_12025c50();
  /* 1202293d mov esi, esp */
  ESI = (ESP);
  /* 1202293f push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 12022944 push 5 */
  push32((uint32_t)(0x5u));
  /* 12022946 push 0 */
  push32((uint32_t)(0x0u));
  /* 12022948 call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x1202294eu);
  /* 1202294e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022951 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022953 call 0x12025c50 */
  push32(0x12022958u); f_12025c50();
  /* 12022958 mov esi, esp */
  ESI = (ESP);
  /* 1202295a push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 1202295f push 4 */
  push32((uint32_t)(0x4u));
  /* 12022961 push 0 */
  push32((uint32_t)(0x0u));
  /* 12022963 call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x12022969u);
  /* 12022969 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202296c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202296e call 0x12025c50 */
  push32(0x12022973u); f_12025c50();
  /* 12022973 mov esi, esp */
  ESI = (ESP);
  /* 12022975 push 0 */
  push32((uint32_t)(0x0u));
  /* 12022977 push 0x12052618 */
  push32((uint32_t)(0x12052618u));
  /* 1202297c call dword ptr [0x12055480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055480))), 0x12022982u);
  /* 12022982 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022985 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022987 call 0x12025c50 */
  push32(0x1202298cu); f_12025c50();
  /* 1202298c mov esi, esp */
  ESI = (ESP);
  /* 1202298e push 1 */
  push32((uint32_t)(0x1u));
  /* 12022990 push 0x12052630 */
  push32((uint32_t)(0x12052630u));
  /* 12022995 call dword ptr [0x12055480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055480))), 0x1202299bu);
  /* 1202299b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202299e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120229a0 call 0x12025c50 */
  push32(0x120229a5u); f_12025c50();
  /* 120229a5 mov esi, esp */
  ESI = (ESP);
  /* 120229a7 push 5 */
  push32((uint32_t)(0x5u));
  /* 120229a9 call dword ptr [0x12055484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055484))), 0x120229afu);
  /* 120229af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120229b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120229b4 call 0x12025c50 */
  push32(0x120229b9u); f_12025c50();
  /* 120229b9 mov esi, esp */
  ESI = (ESP);
  /* 120229bb push 0 */
  push32((uint32_t)(0x0u));
  /* 120229bd push 0x12052648 */
  push32((uint32_t)(0x12052648u));
  /* 120229c2 call dword ptr [0x12055480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055480))), 0x120229c8u);
  /* 120229c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120229cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120229cd call 0x12025c50 */
  push32(0x120229d2u); f_12025c50();
  /* 120229d2 mov esi, esp */
  ESI = (ESP);
  /* 120229d4 push 4 */
  push32((uint32_t)(0x4u));
  /* 120229d6 call dword ptr [0x12055484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055484))), 0x120229dcu);
  /* 120229dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120229df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120229e1 call 0x12025c50 */
  push32(0x120229e6u); f_12025c50();
  /* 120229e6 mov dword ptr [0x12052538], 2 */
  w32((uint32_t)(0x12052538), (0x2u));
  /* 120229f0 mov dword ptr [0x12052588], 2 */
  w32((uint32_t)(0x12052588), (0x2u));
  /* 120229fa mov dword ptr [0x120525c8], 9 */
  w32((uint32_t)(0x120525c8), (0x9u));
  /* 12022a04 mov dword ptr [0x12052608], 0xa */
  w32((uint32_t)(0x12052608), (0xau));
  /* 12022a0e mov dword ptr [0x12052650], 2 */
  w32((uint32_t)(0x12052650), (0x2u));
  /* 12022a18 mov dword ptr [0x12052670], 1 */
  w32((uint32_t)(0x12052670), (0x1u));
  /* 12022a22 jmp 0x12022b05 */
  goto L_12022b05;
L_12022a27:;
  /* 12022a27 mov esi, esp */
  ESI = (ESP);
  /* 12022a29 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12022a2e push 3 */
  push32((uint32_t)(0x3u));
  /* 12022a30 push 0 */
  push32((uint32_t)(0x0u));
  /* 12022a32 call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x12022a38u);
  /* 12022a38 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022a3b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022a3d call 0x12025c50 */
  push32(0x12022a42u); f_12025c50();
  /* 12022a42 mov esi, esp */
  ESI = (ESP);
  /* 12022a44 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12022a49 push 0 */
  push32((uint32_t)(0x0u));
  /* 12022a4b push 0 */
  push32((uint32_t)(0x0u));
  /* 12022a4d call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x12022a53u);
  /* 12022a53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022a56 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022a58 call 0x12025c50 */
  push32(0x12022a5du); f_12025c50();
  /* 12022a5d mov esi, esp */
  ESI = (ESP);
  /* 12022a5f push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12022a64 push 2 */
  push32((uint32_t)(0x2u));
  /* 12022a66 push 0 */
  push32((uint32_t)(0x0u));
  /* 12022a68 call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x12022a6eu);
  /* 12022a6e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022a71 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022a73 call 0x12025c50 */
  push32(0x12022a78u); f_12025c50();
  /* 12022a78 mov esi, esp */
  ESI = (ESP);
  /* 12022a7a push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12022a7f push 1 */
  push32((uint32_t)(0x1u));
  /* 12022a81 push 0 */
  push32((uint32_t)(0x0u));
  /* 12022a83 call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x12022a89u);
  /* 12022a89 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022a8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022a8e call 0x12025c50 */
  push32(0x12022a93u); f_12025c50();
  /* 12022a93 mov esi, esp */
  ESI = (ESP);
  /* 12022a95 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12022a9a push 5 */
  push32((uint32_t)(0x5u));
  /* 12022a9c push 0 */
  push32((uint32_t)(0x0u));
  /* 12022a9e call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x12022aa4u);
  /* 12022aa4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022aa7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022aa9 call 0x12025c50 */
  push32(0x12022aaeu); f_12025c50();
  /* 12022aae mov esi, esp */
  ESI = (ESP);
  /* 12022ab0 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12022ab5 push 4 */
  push32((uint32_t)(0x4u));
  /* 12022ab7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12022ab9 call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x12022abfu);
  /* 12022abf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022ac2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022ac4 call 0x12025c50 */
  push32(0x12022ac9u); f_12025c50();
  /* 12022ac9 mov dword ptr [0x12052538], 3 */
  w32((uint32_t)(0x12052538), (0x3u));
  /* 12022ad3 mov dword ptr [0x12052588], 3 */
  w32((uint32_t)(0x12052588), (0x3u));
  /* 12022add mov dword ptr [0x120525c8], 0xe */
  w32((uint32_t)(0x120525c8), (0xeu));
  /* 12022ae7 mov dword ptr [0x12052608], 0xf */
  w32((uint32_t)(0x12052608), (0xfu));
  /* 12022af1 mov dword ptr [0x12052650], 2 */
  w32((uint32_t)(0x12052650), (0x2u));
  /* 12022afb mov dword ptr [0x12052670], 2 */
  w32((uint32_t)(0x12052670), (0x2u));
L_12022b05:;
  /* 12022b05 mov esi, esp */
  ESI = (ESP);
  /* 12022b07 push 4 */
  push32((uint32_t)(0x4u));
  /* 12022b09 call dword ptr [0x12055488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055488))), 0x12022b0fu);
  /* 12022b0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022b12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022b14 call 0x12025c50 */
  push32(0x12022b19u); f_12025c50();
  /* 12022b19 mov esi, esp */
  ESI = (ESP);
  /* 12022b1b push 5 */
  push32((uint32_t)(0x5u));
  /* 12022b1d call dword ptr [0x12055488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055488))), 0x12022b23u);
  /* 12022b23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022b26 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022b28 call 0x12025c50 */
  push32(0x12022b2du); f_12025c50();
  /* 12022b2d mov esi, esp */
  ESI = (ESP);
  /* 12022b2f push 0x1204d620 */
  push32((uint32_t)(0x1204d620u));
  /* 12022b34 push 0x1204d2f8 */
  push32((uint32_t)(0x1204d2f8u));
  /* 12022b39 call dword ptr [0x1205548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205548c))), 0x12022b3fu);
  /* 12022b3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022b42 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022b44 call 0x12025c50 */
  push32(0x12022b49u); f_12025c50();
  /* 12022b49 mov esi, esp */
  ESI = (ESP);
  /* 12022b4b push 0x1204d614 */
  push32((uint32_t)(0x1204d614u));
  /* 12022b50 push 0x1204d328 */
  push32((uint32_t)(0x1204d328u));
  /* 12022b55 call dword ptr [0x1205548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205548c))), 0x12022b5bu);
  /* 12022b5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022b5e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022b60 call 0x12025c50 */
  push32(0x12022b65u); f_12025c50();
  /* 12022b65 mov esi, esp */
  ESI = (ESP);
  /* 12022b67 push 0x1204d60c */
  push32((uint32_t)(0x1204d60cu));
  /* 12022b6c push 0x1204d328 */
  push32((uint32_t)(0x1204d328u));
  /* 12022b71 call dword ptr [0x1205548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205548c))), 0x12022b77u);
  /* 12022b77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022b7a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022b7c call 0x12025c50 */
  push32(0x12022b81u); f_12025c50();
  /* 12022b81 mov esi, esp */
  ESI = (ESP);
  /* 12022b83 push 0x1204d5fc */
  push32((uint32_t)(0x1204d5fcu));
  /* 12022b88 push 0x1204d328 */
  push32((uint32_t)(0x1204d328u));
  /* 12022b8d call dword ptr [0x1205548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205548c))), 0x12022b93u);
  /* 12022b93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022b96 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022b98 call 0x12025c50 */
  push32(0x12022b9du); f_12025c50();
  /* 12022b9d mov esi, esp */
  ESI = (ESP);
  /* 12022b9f push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 12022ba4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12022ba6 call dword ptr [0x12055490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055490))), 0x12022bacu);
  /* 12022bac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022baf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022bb1 call 0x12025c50 */
  push32(0x12022bb6u); f_12025c50();
  /* 12022bb6 mov esi, esp */
  ESI = (ESP);
  /* 12022bb8 push 0x1af4 */
  push32((uint32_t)(0x1af4u));
  /* 12022bbd push 2 */
  push32((uint32_t)(0x2u));
  /* 12022bbf call dword ptr [0x12055490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055490))), 0x12022bc5u);
  /* 12022bc5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022bc8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022bca call 0x12025c50 */
  push32(0x12022bcfu); f_12025c50();
  /* 12022bcf mov esi, esp */
  ESI = (ESP);
  /* 12022bd1 push 0x23f0 */
  push32((uint32_t)(0x23f0u));
  /* 12022bd6 push 3 */
  push32((uint32_t)(0x3u));
  /* 12022bd8 call dword ptr [0x12055490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055490))), 0x12022bdeu);
  /* 12022bde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022be1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022be3 call 0x12025c50 */
  push32(0x12022be8u); f_12025c50();
  /* 12022be8 mov esi, esp */
  ESI = (ESP);
  /* 12022bea push 0 */
  push32((uint32_t)(0x0u));
  /* 12022bec call dword ptr [0x12055478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055478))), 0x12022bf2u);
  /* 12022bf2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022bf5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022bf7 call 0x12025c50 */
  push32(0x12022bfcu); f_12025c50();
  /* 12022bfc mov ecx, 5 */
  ECX = (0x5u);
  /* 12022c01 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12022c03 shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12022c06 imul ecx, ecx, 0x8fc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x8fcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12022c0c mov esi, esp */
  ESI = (ESP);
  /* 12022c0e push ecx */
  push32((uint32_t)(ECX));
  /* 12022c0f push 0xd */
  push32((uint32_t)(0xdu));
  /* 12022c11 call dword ptr [0x12055490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055490))), 0x12022c17u);
  /* 12022c17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022c1a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022c1c call 0x12025c50 */
  push32(0x12022c21u); f_12025c50();
  /* 12022c21 mov esi, esp */
  ESI = (ESP);
  /* 12022c23 push 0x1204d5e0 */
  push32((uint32_t)(0x1204d5e0u));
  /* 12022c28 push 0x1204d3ac */
  push32((uint32_t)(0x1204d3acu));
  /* 12022c2d call dword ptr [0x1205548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205548c))), 0x12022c33u);
  /* 12022c33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022c36 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022c38 call 0x12025c50 */
  push32(0x12022c3du); f_12025c50();
  /* 12022c3d mov esi, esp */
  ESI = (ESP);
  /* 12022c3f push 0x1204d5d8 */
  push32((uint32_t)(0x1204d5d8u));
  /* 12022c44 push 0x1204d3ac */
  push32((uint32_t)(0x1204d3acu));
  /* 12022c49 call dword ptr [0x1205548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205548c))), 0x12022c4fu);
  /* 12022c4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022c52 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022c54 call 0x12025c50 */
  push32(0x12022c59u); f_12025c50();
  /* 12022c59 mov esi, esp */
  ESI = (ESP);
  /* 12022c5b push 0x1204d5bc */
  push32((uint32_t)(0x1204d5bcu));
  /* 12022c60 push 0x1204d3ac */
  push32((uint32_t)(0x1204d3acu));
  /* 12022c65 call dword ptr [0x1205548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205548c))), 0x12022c6bu);
  /* 12022c6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022c6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022c70 call 0x12025c50 */
  push32(0x12022c75u); f_12025c50();
  /* 12022c75 mov esi, esp */
  ESI = (ESP);
  /* 12022c77 push 0x1204d5b0 */
  push32((uint32_t)(0x1204d5b0u));
  /* 12022c7c push 0x1204d3ac */
  push32((uint32_t)(0x1204d3acu));
  /* 12022c81 call dword ptr [0x1205548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205548c))), 0x12022c87u);
  /* 12022c87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022c8a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022c8c call 0x12025c50 */
  push32(0x12022c91u); f_12025c50();
  /* 12022c91 mov esi, esp */
  ESI = (ESP);
  /* 12022c93 push 0x1204d5a4 */
  push32((uint32_t)(0x1204d5a4u));
  /* 12022c98 push 0x1204d3ac */
  push32((uint32_t)(0x1204d3acu));
  /* 12022c9d call dword ptr [0x1205548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205548c))), 0x12022ca3u);
  /* 12022ca3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022ca6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022ca8 call 0x12025c50 */
  push32(0x12022cadu); f_12025c50();
  /* 12022cad mov esi, esp */
  ESI = (ESP);
  /* 12022caf push 0x1204d598 */
  push32((uint32_t)(0x1204d598u));
  /* 12022cb4 push 0x1204d3ac */
  push32((uint32_t)(0x1204d3acu));
  /* 12022cb9 call dword ptr [0x1205548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205548c))), 0x12022cbfu);
  /* 12022cbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022cc2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022cc4 call 0x12025c50 */
  push32(0x12022cc9u); f_12025c50();
  /* 12022cc9 mov esi, esp */
  ESI = (ESP);
  /* 12022ccb push 0x1204d58c */
  push32((uint32_t)(0x1204d58cu));
  /* 12022cd0 push 0x1204d3ac */
  push32((uint32_t)(0x1204d3acu));
  /* 12022cd5 call dword ptr [0x1205548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205548c))), 0x12022cdbu);
  /* 12022cdb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022cde cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022ce0 call 0x12025c50 */
  push32(0x12022ce5u); f_12025c50();
  /* 12022ce5 mov esi, esp */
  ESI = (ESP);
  /* 12022ce7 push 0x1204d580 */
  push32((uint32_t)(0x1204d580u));
  /* 12022cec push 0x1204d3ac */
  push32((uint32_t)(0x1204d3acu));
  /* 12022cf1 call dword ptr [0x1205548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205548c))), 0x12022cf7u);
  /* 12022cf7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022cfa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022cfc call 0x12025c50 */
  push32(0x12022d01u); f_12025c50();
  /* 12022d01 mov esi, esp */
  ESI = (ESP);
  /* 12022d03 push 0x1204d574 */
  push32((uint32_t)(0x1204d574u));
  /* 12022d08 push 0x1204d3ac */
  push32((uint32_t)(0x1204d3acu));
  /* 12022d0d call dword ptr [0x1205548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205548c))), 0x12022d13u);
  /* 12022d13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022d16 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022d18 call 0x12025c50 */
  push32(0x12022d1du); f_12025c50();
  /* 12022d1d mov esi, esp */
  ESI = (ESP);
  /* 12022d1f push 0x1204d558 */
  push32((uint32_t)(0x1204d558u));
  /* 12022d24 push 0x1204d3a0 */
  push32((uint32_t)(0x1204d3a0u));
  /* 12022d29 call dword ptr [0x1205548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205548c))), 0x12022d2fu);
  /* 12022d2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022d32 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022d34 call 0x12025c50 */
  push32(0x12022d39u); f_12025c50();
  /* 12022d39 mov esi, esp */
  ESI = (ESP);
  /* 12022d3b push 0x1204d53c */
  push32((uint32_t)(0x1204d53cu));
  /* 12022d40 push 0x1204d3a0 */
  push32((uint32_t)(0x1204d3a0u));
  /* 12022d45 call dword ptr [0x1205548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205548c))), 0x12022d4bu);
  /* 12022d4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022d4e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022d50 call 0x12025c50 */
  push32(0x12022d55u); f_12025c50();
  /* 12022d55 mov esi, esp */
  ESI = (ESP);
  /* 12022d57 push 0x1204d530 */
  push32((uint32_t)(0x1204d530u));
  /* 12022d5c push 0x1204d3a0 */
  push32((uint32_t)(0x1204d3a0u));
  /* 12022d61 call dword ptr [0x1205548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205548c))), 0x12022d67u);
  /* 12022d67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022d6a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022d6c call 0x12025c50 */
  push32(0x12022d71u); f_12025c50();
  /* 12022d71 mov esi, esp */
  ESI = (ESP);
  /* 12022d73 push 0x1204d524 */
  push32((uint32_t)(0x1204d524u));
  /* 12022d78 push 0x1204d3a0 */
  push32((uint32_t)(0x1204d3a0u));
  /* 12022d7d call dword ptr [0x1205548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205548c))), 0x12022d83u);
  /* 12022d83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022d86 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022d88 call 0x12025c50 */
  push32(0x12022d8du); f_12025c50();
  /* 12022d8d mov esi, esp */
  ESI = (ESP);
  /* 12022d8f push 0x1204d518 */
  push32((uint32_t)(0x1204d518u));
  /* 12022d94 push 0x1204d3a0 */
  push32((uint32_t)(0x1204d3a0u));
  /* 12022d99 call dword ptr [0x1205548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205548c))), 0x12022d9fu);
  /* 12022d9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022da2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022da4 call 0x12025c50 */
  push32(0x12022da9u); f_12025c50();
  /* 12022da9 mov esi, esp */
  ESI = (ESP);
  /* 12022dab push 0x1204d50c */
  push32((uint32_t)(0x1204d50cu));
  /* 12022db0 push 0x1204d3a0 */
  push32((uint32_t)(0x1204d3a0u));
  /* 12022db5 call dword ptr [0x1205548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205548c))), 0x12022dbbu);
  /* 12022dbb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022dbe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022dc0 call 0x12025c50 */
  push32(0x12022dc5u); f_12025c50();
  /* 12022dc5 mov esi, esp */
  ESI = (ESP);
  /* 12022dc7 push 0x1204d500 */
  push32((uint32_t)(0x1204d500u));
  /* 12022dcc push 0x1204d3a0 */
  push32((uint32_t)(0x1204d3a0u));
  /* 12022dd1 call dword ptr [0x1205548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205548c))), 0x12022dd7u);
  /* 12022dd7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022dda cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022ddc call 0x12025c50 */
  push32(0x12022de1u); f_12025c50();
  /* 12022de1 mov esi, esp */
  ESI = (ESP);
  /* 12022de3 push 0x1204d4f4 */
  push32((uint32_t)(0x1204d4f4u));
  /* 12022de8 push 0x1204d3a0 */
  push32((uint32_t)(0x1204d3a0u));
  /* 12022ded call dword ptr [0x1205548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205548c))), 0x12022df3u);
  /* 12022df3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022df6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022df8 call 0x12025c50 */
  push32(0x12022dfdu); f_12025c50();
  /* 12022dfd mov esi, esp */
  ESI = (ESP);
  /* 12022dff push 0x1204d4dc */
  push32((uint32_t)(0x1204d4dcu));
  /* 12022e04 push 0x1204d394 */
  push32((uint32_t)(0x1204d394u));
  /* 12022e09 call dword ptr [0x1205548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205548c))), 0x12022e0fu);
  /* 12022e0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022e12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022e14 call 0x12025c50 */
  push32(0x12022e19u); f_12025c50();
  /* 12022e19 mov esi, esp */
  ESI = (ESP);
  /* 12022e1b push 0x1204d60c */
  push32((uint32_t)(0x1204d60cu));
  /* 12022e20 push 0x1204d394 */
  push32((uint32_t)(0x1204d394u));
  /* 12022e25 call dword ptr [0x1205548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205548c))), 0x12022e2bu);
  /* 12022e2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022e2e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022e30 call 0x12025c50 */
  push32(0x12022e35u); f_12025c50();
  /* 12022e35 mov esi, esp */
  ESI = (ESP);
  /* 12022e37 push 0x1204d4c4 */
  push32((uint32_t)(0x1204d4c4u));
  /* 12022e3c push 0x1204d394 */
  push32((uint32_t)(0x1204d394u));
  /* 12022e41 call dword ptr [0x1205548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205548c))), 0x12022e47u);
  /* 12022e47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022e4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022e4c call 0x12025c50 */
  push32(0x12022e51u); f_12025c50();
  /* 12022e51 mov esi, esp */
  ESI = (ESP);
  /* 12022e53 push 0x1204d4b8 */
  push32((uint32_t)(0x1204d4b8u));
  /* 12022e58 push 0x1204d394 */
  push32((uint32_t)(0x1204d394u));
  /* 12022e5d call dword ptr [0x1205548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205548c))), 0x12022e63u);
  /* 12022e63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022e66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022e68 call 0x12025c50 */
  push32(0x12022e6du); f_12025c50();
  /* 12022e6d mov esi, esp */
  ESI = (ESP);
  /* 12022e6f push 0x1204d4ac */
  push32((uint32_t)(0x1204d4acu));
  /* 12022e74 push 0x1204d394 */
  push32((uint32_t)(0x1204d394u));
  /* 12022e79 call dword ptr [0x1205548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205548c))), 0x12022e7fu);
  /* 12022e7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022e82 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022e84 call 0x12025c50 */
  push32(0x12022e89u); f_12025c50();
  /* 12022e89 mov esi, esp */
  ESI = (ESP);
  /* 12022e8b push 0x1204d4a0 */
  push32((uint32_t)(0x1204d4a0u));
  /* 12022e90 push 0x1204d394 */
  push32((uint32_t)(0x1204d394u));
  /* 12022e95 call dword ptr [0x1205548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205548c))), 0x12022e9bu);
  /* 12022e9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022e9e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022ea0 call 0x12025c50 */
  push32(0x12022ea5u); f_12025c50();
  /* 12022ea5 mov esi, esp */
  ESI = (ESP);
  /* 12022ea7 push 0x1204d494 */
  push32((uint32_t)(0x1204d494u));
  /* 12022eac push 0x1204d394 */
  push32((uint32_t)(0x1204d394u));
  /* 12022eb1 call dword ptr [0x1205548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205548c))), 0x12022eb7u);
  /* 12022eb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022eba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022ebc call 0x12025c50 */
  push32(0x12022ec1u); f_12025c50();
  /* 12022ec1 mov esi, esp */
  ESI = (ESP);
  /* 12022ec3 push 0x1204d488 */
  push32((uint32_t)(0x1204d488u));
  /* 12022ec8 push 0x1204d394 */
  push32((uint32_t)(0x1204d394u));
  /* 12022ecd call dword ptr [0x1205548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205548c))), 0x12022ed3u);
  /* 12022ed3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022ed6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022ed8 call 0x12025c50 */
  push32(0x12022eddu); f_12025c50();
  /* 12022edd mov esi, esp */
  ESI = (ESP);
  /* 12022edf push 0x1204d47c */
  push32((uint32_t)(0x1204d47cu));
  /* 12022ee4 push 0x1204d394 */
  push32((uint32_t)(0x1204d394u));
  /* 12022ee9 call dword ptr [0x1205548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205548c))), 0x12022eefu);
  /* 12022eef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022ef2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022ef4 call 0x12025c50 */
  push32(0x12022ef9u); f_12025c50();
  /* 12022ef9 mov esi, esp */
  ESI = (ESP);
  /* 12022efb push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12022f00 push 3 */
  push32((uint32_t)(0x3u));
  /* 12022f02 push 1 */
  push32((uint32_t)(0x1u));
  /* 12022f04 call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x12022f0au);
  /* 12022f0a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022f0d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022f0f call 0x12025c50 */
  push32(0x12022f14u); f_12025c50();
  /* 12022f14 mov esi, esp */
  ESI = (ESP);
  /* 12022f16 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12022f1b push 0 */
  push32((uint32_t)(0x0u));
  /* 12022f1d push 1 */
  push32((uint32_t)(0x1u));
  /* 12022f1f call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x12022f25u);
  /* 12022f25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022f28 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022f2a call 0x12025c50 */
  push32(0x12022f2fu); f_12025c50();
  /* 12022f2f mov esi, esp */
  ESI = (ESP);
  /* 12022f31 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12022f36 push 2 */
  push32((uint32_t)(0x2u));
  /* 12022f38 push 1 */
  push32((uint32_t)(0x1u));
  /* 12022f3a call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x12022f40u);
  /* 12022f40 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022f43 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022f45 call 0x12025c50 */
  push32(0x12022f4au); f_12025c50();
  /* 12022f4a mov esi, esp */
  ESI = (ESP);
  /* 12022f4c push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12022f51 push 1 */
  push32((uint32_t)(0x1u));
  /* 12022f53 push 1 */
  push32((uint32_t)(0x1u));
  /* 12022f55 call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x12022f5bu);
  /* 12022f5b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022f5e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022f60 call 0x12025c50 */
  push32(0x12022f65u); f_12025c50();
  /* 12022f65 mov esi, esp */
  ESI = (ESP);
  /* 12022f67 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12022f6c push 5 */
  push32((uint32_t)(0x5u));
  /* 12022f6e push 1 */
  push32((uint32_t)(0x1u));
  /* 12022f70 call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x12022f76u);
  /* 12022f76 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022f79 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022f7b call 0x12025c50 */
  push32(0x12022f80u); f_12025c50();
  /* 12022f80 mov esi, esp */
  ESI = (ESP);
  /* 12022f82 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12022f87 push 4 */
  push32((uint32_t)(0x4u));
  /* 12022f89 push 1 */
  push32((uint32_t)(0x1u));
  /* 12022f8b call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x12022f91u);
  /* 12022f91 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022f94 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022f96 call 0x12025c50 */
  push32(0x12022f9bu); f_12025c50();
  /* 12022f9b mov esi, esp */
  ESI = (ESP);
  /* 12022f9d push 0 */
  push32((uint32_t)(0x0u));
  /* 12022f9f call dword ptr [0x12055478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055478))), 0x12022fa5u);
  /* 12022fa5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022fa8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022faa call 0x12025c50 */
  push32(0x12022fafu); f_12025c50();
  /* 12022faf mov esi, esp */
  ESI = (ESP);
  /* 12022fb1 push eax */
  push32((uint32_t)(EAX));
  /* 12022fb2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12022fb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12022fb6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12022fb8 push 0x1204d470 */
  push32((uint32_t)(0x1204d470u));
  /* 12022fbd push 1 */
  push32((uint32_t)(0x1u));
  /* 12022fbf call dword ptr [0x12055494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055494))), 0x12022fc5u);
  /* 12022fc5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022fc8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022fca call 0x12025c50 */
  push32(0x12022fcfu); f_12025c50();
  /* 12022fcf mov esi, esp */
  ESI = (ESP);
  /* 12022fd1 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12022fd6 push 3 */
  push32((uint32_t)(0x3u));
  /* 12022fd8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12022fda call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x12022fe0u);
  /* 12022fe0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022fe3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12022fe5 call 0x12025c50 */
  push32(0x12022feau); f_12025c50();
  /* 12022fea mov esi, esp */
  ESI = (ESP);
  /* 12022fec push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12022ff1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12022ff3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12022ff5 call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x12022ffbu);
  /* 12022ffb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12022ffe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023000 call 0x12025c50 */
  push32(0x12023005u); f_12025c50();
  /* 12023005 mov esi, esp */
  ESI = (ESP);
  /* 12023007 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1202300c push 2 */
  push32((uint32_t)(0x2u));
  /* 1202300e push 2 */
  push32((uint32_t)(0x2u));
  /* 12023010 call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x12023016u);
  /* 12023016 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023019 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202301b call 0x12025c50 */
  push32(0x12023020u); f_12025c50();
  /* 12023020 mov esi, esp */
  ESI = (ESP);
  /* 12023022 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12023027 push 1 */
  push32((uint32_t)(0x1u));
  /* 12023029 push 2 */
  push32((uint32_t)(0x2u));
  /* 1202302b call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x12023031u);
  /* 12023031 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023034 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023036 call 0x12025c50 */
  push32(0x1202303bu); f_12025c50();
  /* 1202303b mov esi, esp */
  ESI = (ESP);
  /* 1202303d push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12023042 push 5 */
  push32((uint32_t)(0x5u));
  /* 12023044 push 2 */
  push32((uint32_t)(0x2u));
  /* 12023046 call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x1202304cu);
  /* 1202304c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202304f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023051 call 0x12025c50 */
  push32(0x12023056u); f_12025c50();
  /* 12023056 mov esi, esp */
  ESI = (ESP);
  /* 12023058 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1202305d push 4 */
  push32((uint32_t)(0x4u));
  /* 1202305f push 2 */
  push32((uint32_t)(0x2u));
  /* 12023061 call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x12023067u);
  /* 12023067 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202306a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202306c call 0x12025c50 */
  push32(0x12023071u); f_12025c50();
  /* 12023071 mov esi, esp */
  ESI = (ESP);
  /* 12023073 push 0 */
  push32((uint32_t)(0x0u));
  /* 12023075 call dword ptr [0x12055478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055478))), 0x1202307bu);
  /* 1202307b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202307e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023080 call 0x12025c50 */
  push32(0x12023085u); f_12025c50();
  /* 12023085 mov esi, esp */
  ESI = (ESP);
  /* 12023087 push eax */
  push32((uint32_t)(EAX));
  /* 12023088 push 2 */
  push32((uint32_t)(0x2u));
  /* 1202308a push 1 */
  push32((uint32_t)(0x1u));
  /* 1202308c push 1 */
  push32((uint32_t)(0x1u));
  /* 1202308e push 0x1204d464 */
  push32((uint32_t)(0x1204d464u));
  /* 12023093 push 2 */
  push32((uint32_t)(0x2u));
  /* 12023095 call dword ptr [0x12055494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055494))), 0x1202309bu);
  /* 1202309b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202309e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120230a0 call 0x12025c50 */
  push32(0x120230a5u); f_12025c50();
  /* 120230a5 mov esi, esp */
  ESI = (ESP);
  /* 120230a7 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 120230ac push 3 */
  push32((uint32_t)(0x3u));
  /* 120230ae push 3 */
  push32((uint32_t)(0x3u));
  /* 120230b0 call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x120230b6u);
  /* 120230b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120230b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120230bb call 0x12025c50 */
  push32(0x120230c0u); f_12025c50();
  /* 120230c0 mov esi, esp */
  ESI = (ESP);
  /* 120230c2 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 120230c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 120230c9 push 3 */
  push32((uint32_t)(0x3u));
  /* 120230cb call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x120230d1u);
  /* 120230d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120230d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120230d6 call 0x12025c50 */
  push32(0x120230dbu); f_12025c50();
  /* 120230db mov esi, esp */
  ESI = (ESP);
  /* 120230dd push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 120230e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 120230e4 push 3 */
  push32((uint32_t)(0x3u));
  /* 120230e6 call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x120230ecu);
  /* 120230ec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120230ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120230f1 call 0x12025c50 */
  push32(0x120230f6u); f_12025c50();
  /* 120230f6 mov esi, esp */
  ESI = (ESP);
  /* 120230f8 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 120230fd push 1 */
  push32((uint32_t)(0x1u));
  /* 120230ff push 3 */
  push32((uint32_t)(0x3u));
  /* 12023101 call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x12023107u);
  /* 12023107 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202310a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202310c call 0x12025c50 */
  push32(0x12023111u); f_12025c50();
  /* 12023111 mov esi, esp */
  ESI = (ESP);
  /* 12023113 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12023118 push 5 */
  push32((uint32_t)(0x5u));
  /* 1202311a push 3 */
  push32((uint32_t)(0x3u));
  /* 1202311c call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x12023122u);
  /* 12023122 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023125 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023127 call 0x12025c50 */
  push32(0x1202312cu); f_12025c50();
  /* 1202312c mov esi, esp */
  ESI = (ESP);
  /* 1202312e push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12023133 push 4 */
  push32((uint32_t)(0x4u));
  /* 12023135 push 3 */
  push32((uint32_t)(0x3u));
  /* 12023137 call dword ptr [0x1205547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205547c))), 0x1202313du);
  /* 1202313d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023140 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023142 call 0x12025c50 */
  push32(0x12023147u); f_12025c50();
  /* 12023147 mov esi, esp */
  ESI = (ESP);
  /* 12023149 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202314b call dword ptr [0x12055478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055478))), 0x12023151u);
  /* 12023151 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023154 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023156 call 0x12025c50 */
  push32(0x1202315bu); f_12025c50();
  /* 1202315b mov esi, esp */
  ESI = (ESP);
  /* 1202315d push eax */
  push32((uint32_t)(EAX));
  /* 1202315e push 2 */
  push32((uint32_t)(0x2u));
  /* 12023160 push 1 */
  push32((uint32_t)(0x1u));
  /* 12023162 push 1 */
  push32((uint32_t)(0x1u));
  /* 12023164 push 0x1204d458 */
  push32((uint32_t)(0x1204d458u));
  /* 12023169 push 3 */
  push32((uint32_t)(0x3u));
  /* 1202316b call dword ptr [0x12055494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055494))), 0x12023171u);
  /* 12023171 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023174 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023176 call 0x12025c50 */
  push32(0x1202317bu); f_12025c50();
L_1202317b:;
  /* 1202317b mov esi, esp */
  ESI = (ESP);
  /* 1202317d push 1 */
  push32((uint32_t)(0x1u));
  /* 1202317f call dword ptr [0x12055498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055498))), 0x12023185u);
  /* 12023185 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023188 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202318a call 0x12025c50 */
  push32(0x1202318fu); f_12025c50();
  /* 1202318f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12023194 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12023196 je 0x120231e2 */
  if (C.zf) goto L_120231e2;
  /* 12023198 mov esi, esp */
  ESI = (ESP);
  /* 1202319a push 0x60 */
  push32((uint32_t)(0x60u));
  /* 1202319c call dword ptr [0x12055460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055460))), 0x120231a2u);
  /* 120231a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120231a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120231a7 call 0x12025c50 */
  push32(0x120231acu); f_12025c50();
  /* 120231ac and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120231b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120231b3 je 0x120231e2 */
  if (C.zf) goto L_120231e2;
  /* 120231b5 mov esi, esp */
  ESI = (ESP);
  /* 120231b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 120231b9 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 120231bb call dword ptr [0x12055464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055464))), 0x120231c1u);
  /* 120231c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120231c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120231c6 call 0x12025c50 */
  push32(0x120231cbu); f_12025c50();
  /* 120231cb mov esi, esp */
  ESI = (ESP);
  /* 120231cd push 0x1204d44c */
  push32((uint32_t)(0x1204d44cu));
  /* 120231d2 call dword ptr [0x1205549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205549c))), 0x120231d8u);
  /* 120231d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120231db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120231dd call 0x12025c50 */
  push32(0x120231e2u); f_12025c50();
L_120231e2:;
  /* 120231e2 mov esi, esp */
  ESI = (ESP);
  /* 120231e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 120231e6 call dword ptr [0x12055498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055498))), 0x120231ecu);
  /* 120231ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120231ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120231f1 call 0x12025c50 */
  push32(0x120231f6u); f_12025c50();
  /* 120231f6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120231fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120231fd je 0x1202325d */
  if (C.zf) goto L_1202325d;
  /* 120231ff mov esi, esp */
  ESI = (ESP);
  /* 12023201 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 12023203 call dword ptr [0x12055460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055460))), 0x12023209u);
  /* 12023209 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202320c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202320e call 0x12025c50 */
  push32(0x12023213u); f_12025c50();
  /* 12023213 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12023218 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202321a je 0x1202325d */
  if (C.zf) goto L_1202325d;
  /* 1202321c mov esi, esp */
  ESI = (ESP);
  /* 1202321e push 0 */
  push32((uint32_t)(0x0u));
  /* 12023220 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 12023222 call dword ptr [0x12055464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055464))), 0x12023228u);
  /* 12023228 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202322b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202322d call 0x12025c50 */
  push32(0x12023232u); f_12025c50();
  /* 12023232 mov esi, esp */
  ESI = (ESP);
  /* 12023234 push 0x1204d440 */
  push32((uint32_t)(0x1204d440u));
  /* 12023239 call dword ptr [0x1205549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205549c))), 0x1202323fu);
  /* 1202323f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023242 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023244 call 0x12025c50 */
  push32(0x12023249u); f_12025c50();
  /* 12023249 mov esi, esp */
  ESI = (ESP);
  /* 1202324b push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1202324d call dword ptr [0x12055468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055468))), 0x12023253u);
  /* 12023253 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023256 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023258 call 0x12025c50 */
  push32(0x1202325du); f_12025c50();
L_1202325d:;
  /* 1202325d mov esi, esp */
  ESI = (ESP);
  /* 1202325f push 3 */
  push32((uint32_t)(0x3u));
  /* 12023261 call dword ptr [0x12055498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055498))), 0x12023267u);
  /* 12023267 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202326a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202326c call 0x12025c50 */
  push32(0x12023271u); f_12025c50();
  /* 12023271 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12023276 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12023278 je 0x12023374 */
  if (C.zf) goto L_12023374;
  /* 1202327e mov esi, esp */
  ESI = (ESP);
  /* 12023280 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12023282 call dword ptr [0x12055460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055460))), 0x12023288u);
  /* 12023288 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202328b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202328d call 0x12025c50 */
  push32(0x12023292u); f_12025c50();
  /* 12023292 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12023297 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12023299 je 0x12023374 */
  if (C.zf) goto L_12023374;
  /* 1202329f mov esi, esp */
  ESI = (ESP);
  /* 120232a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 120232a3 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 120232a5 call dword ptr [0x12055464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055464))), 0x120232abu);
  /* 120232ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120232ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120232b0 call 0x12025c50 */
  push32(0x120232b5u); f_12025c50();
  /* 120232b5 mov esi, esp */
  ESI = (ESP);
  /* 120232b7 push 0x1204d434 */
  push32((uint32_t)(0x1204d434u));
  /* 120232bc call dword ptr [0x1205549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205549c))), 0x120232c2u);
  /* 120232c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120232c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120232c7 call 0x12025c50 */
  push32(0x120232ccu); f_12025c50();
  /* 120232cc mov esi, esp */
  ESI = (ESP);
  /* 120232ce push 0x44 */
  push32((uint32_t)(0x44u));
  /* 120232d0 call dword ptr [0x12055468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055468))), 0x120232d6u);
  /* 120232d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120232d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120232db call 0x12025c50 */
  push32(0x120232e0u); f_12025c50();
  /* 120232e0 mov esi, esp */
  ESI = (ESP);
  /* 120232e2 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 120232e4 call dword ptr [0x12055468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055468))), 0x120232eau);
  /* 120232ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120232ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120232ef call 0x12025c50 */
  push32(0x120232f4u); f_12025c50();
  /* 120232f4 mov esi, esp */
  ESI = (ESP);
  /* 120232f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 120232f8 call dword ptr [0x12055478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055478))), 0x120232feu);
  /* 120232fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023301 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023303 call 0x12025c50 */
  push32(0x12023308u); f_12025c50();
  /* 12023308 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202330a jne 0x12023374 */
  if (!C.zf) goto L_12023374;
  /* 1202330c mov esi, esp */
  ESI = (ESP);
  /* 1202330e push 1 */
  push32((uint32_t)(0x1u));
  /* 12023310 push 1 */
  push32((uint32_t)(0x1u));
  /* 12023312 push 0x120525f0 */
  push32((uint32_t)(0x120525f0u));
  /* 12023317 call dword ptr [0x120554a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554a0))), 0x1202331du);
  /* 1202331d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023320 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023322 call 0x12025c50 */
  push32(0x12023327u); f_12025c50();
  /* 12023327 mov esi, esp */
  ESI = (ESP);
  /* 12023329 push 2 */
  push32((uint32_t)(0x2u));
  /* 1202332b push 1 */
  push32((uint32_t)(0x1u));
  /* 1202332d push 0x120525f8 */
  push32((uint32_t)(0x120525f8u));
  /* 12023332 call dword ptr [0x120554a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554a0))), 0x12023338u);
  /* 12023338 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202333b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202333d call 0x12025c50 */
  push32(0x12023342u); f_12025c50();
  /* 12023342 mov esi, esp */
  ESI = (ESP);
  /* 12023344 push 3 */
  push32((uint32_t)(0x3u));
  /* 12023346 push 1 */
  push32((uint32_t)(0x1u));
  /* 12023348 push 0x12052600 */
  push32((uint32_t)(0x12052600u));
  /* 1202334d call dword ptr [0x120554a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554a0))), 0x12023353u);
  /* 12023353 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023356 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023358 call 0x12025c50 */
  push32(0x1202335du); f_12025c50();
  /* 1202335d mov esi, esp */
  ESI = (ESP);
  /* 1202335f push 0x1204d428 */
  push32((uint32_t)(0x1204d428u));
  /* 12023364 call dword ptr [0x1205549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205549c))), 0x1202336au);
  /* 1202336a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202336d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202336f call 0x12025c50 */
  push32(0x12023374u); f_12025c50();
L_12023374:;
  /* 12023374 mov esi, esp */
  ESI = (ESP);
  /* 12023376 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 12023378 call dword ptr [0x12055460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055460))), 0x1202337eu);
  /* 1202337e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023381 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023383 call 0x12025c50 */
  push32(0x12023388u); f_12025c50();
  /* 12023388 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1202338d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202338f je 0x120233ef */
  if (C.zf) goto L_120233ef;
  /* 12023391 mov esi, esp */
  ESI = (ESP);
  /* 12023393 push 0 */
  push32((uint32_t)(0x0u));
  /* 12023395 push 0x12052668 */
  push32((uint32_t)(0x12052668u));
  /* 1202339a call dword ptr [0x120554a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554a4))), 0x120233a0u);
  /* 120233a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120233a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120233a5 call 0x12025c50 */
  push32(0x120233aau); f_12025c50();
  /* 120233aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120233ac jle 0x120233ef */
  if ((C.zf||C.sf!=C.of)) goto L_120233ef;
  /* 120233ae mov esi, esp */
  ESI = (ESP);
  /* 120233b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 120233b2 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 120233b4 call dword ptr [0x12055464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055464))), 0x120233bau);
  /* 120233ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120233bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120233bf call 0x12025c50 */
  push32(0x120233c4u); f_12025c50();
  /* 120233c4 mov esi, esp */
  ESI = (ESP);
  /* 120233c6 push 0x1204d440 */
  push32((uint32_t)(0x1204d440u));
  /* 120233cb call dword ptr [0x1205549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205549c))), 0x120233d1u);
  /* 120233d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120233d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120233d6 call 0x12025c50 */
  push32(0x120233dbu); f_12025c50();
  /* 120233db mov esi, esp */
  ESI = (ESP);
  /* 120233dd push 0x46 */
  push32((uint32_t)(0x46u));
  /* 120233df call dword ptr [0x12055468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055468))), 0x120233e5u);
  /* 120233e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120233e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120233ea call 0x12025c50 */
  push32(0x120233efu); f_12025c50();
L_120233ef:;
  /* 120233ef mov esi, esp */
  ESI = (ESP);
  /* 120233f1 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 120233f3 call dword ptr [0x12055460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055460))), 0x120233f9u);
  /* 120233f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120233fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120233fe call 0x12025c50 */
  push32(0x12023403u); f_12025c50();
  /* 12023403 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12023408 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202340a je 0x12023506 */
  if (C.zf) goto L_12023506;
  /* 12023410 mov esi, esp */
  ESI = (ESP);
  /* 12023412 push 0 */
  push32((uint32_t)(0x0u));
  /* 12023414 push 0x120526e8 */
  push32((uint32_t)(0x120526e8u));
  /* 12023419 call dword ptr [0x120554a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554a4))), 0x1202341fu);
  /* 1202341f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023422 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023424 call 0x12025c50 */
  push32(0x12023429u); f_12025c50();
  /* 12023429 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202342b jle 0x12023506 */
  if ((C.zf||C.sf!=C.of)) goto L_12023506;
  /* 12023431 mov esi, esp */
  ESI = (ESP);
  /* 12023433 push 0 */
  push32((uint32_t)(0x0u));
  /* 12023435 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12023437 call dword ptr [0x12055464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055464))), 0x1202343du);
  /* 1202343d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023440 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023442 call 0x12025c50 */
  push32(0x12023447u); f_12025c50();
  /* 12023447 mov esi, esp */
  ESI = (ESP);
  /* 12023449 push 0x1204d434 */
  push32((uint32_t)(0x1204d434u));
  /* 1202344e call dword ptr [0x1205549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205549c))), 0x12023454u);
  /* 12023454 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023457 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023459 call 0x12025c50 */
  push32(0x1202345eu); f_12025c50();
  /* 1202345e mov esi, esp */
  ESI = (ESP);
  /* 12023460 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 12023462 call dword ptr [0x12055468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055468))), 0x12023468u);
  /* 12023468 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202346b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202346d call 0x12025c50 */
  push32(0x12023472u); f_12025c50();
  /* 12023472 mov esi, esp */
  ESI = (ESP);
  /* 12023474 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 12023476 call dword ptr [0x12055468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055468))), 0x1202347cu);
  /* 1202347c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202347f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023481 call 0x12025c50 */
  push32(0x12023486u); f_12025c50();
  /* 12023486 mov esi, esp */
  ESI = (ESP);
  /* 12023488 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202348a call dword ptr [0x12055478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055478))), 0x12023490u);
  /* 12023490 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023493 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023495 call 0x12025c50 */
  push32(0x1202349au); f_12025c50();
  /* 1202349a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202349c jne 0x12023506 */
  if (!C.zf) goto L_12023506;
  /* 1202349e mov esi, esp */
  ESI = (ESP);
  /* 120234a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 120234a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 120234a4 push 0x120525f0 */
  push32((uint32_t)(0x120525f0u));
  /* 120234a9 call dword ptr [0x120554a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554a0))), 0x120234afu);
  /* 120234af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120234b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120234b4 call 0x12025c50 */
  push32(0x120234b9u); f_12025c50();
  /* 120234b9 mov esi, esp */
  ESI = (ESP);
  /* 120234bb push 2 */
  push32((uint32_t)(0x2u));
  /* 120234bd push 1 */
  push32((uint32_t)(0x1u));
  /* 120234bf push 0x120525f8 */
  push32((uint32_t)(0x120525f8u));
  /* 120234c4 call dword ptr [0x120554a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554a0))), 0x120234cau);
  /* 120234ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120234cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120234cf call 0x12025c50 */
  push32(0x120234d4u); f_12025c50();
  /* 120234d4 mov esi, esp */
  ESI = (ESP);
  /* 120234d6 push 3 */
  push32((uint32_t)(0x3u));
  /* 120234d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 120234da push 0x12052600 */
  push32((uint32_t)(0x12052600u));
  /* 120234df call dword ptr [0x120554a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554a0))), 0x120234e5u);
  /* 120234e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120234e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120234ea call 0x12025c50 */
  push32(0x120234efu); f_12025c50();
  /* 120234ef mov esi, esp */
  ESI = (ESP);
  /* 120234f1 push 0x1204d428 */
  push32((uint32_t)(0x1204d428u));
  /* 120234f6 call dword ptr [0x1205549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205549c))), 0x120234fcu);
  /* 120234fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120234ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023501 call 0x12025c50 */
  push32(0x12023506u); f_12025c50();
L_12023506:;
  /* 12023506 mov esi, esp */
  ESI = (ESP);
  /* 12023508 push 1 */
  push32((uint32_t)(0x1u));
  /* 1202350a call dword ptr [0x12055460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055460))), 0x12023510u);
  /* 12023510 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023513 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023515 call 0x12025c50 */
  push32(0x1202351au); f_12025c50();
  /* 1202351a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1202351f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12023521 jne 0x120235ac */
  if (!C.zf) goto L_120235ac;
  /* 12023527 mov esi, esp */
  ESI = (ESP);
  /* 12023529 push 0x120524b8 */
  push32((uint32_t)(0x120524b8u));
  /* 1202352e push 0x12052658 */
  push32((uint32_t)(0x12052658u));
  /* 12023533 call dword ptr [0x120554a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554a8))), 0x12023539u);
  /* 12023539 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202353c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202353e call 0x12025c50 */
  push32(0x12023543u); f_12025c50();
  /* 12023543 mov esi, eax */
  ESI = (EAX);
  /* 12023545 mov edi, esp */
  EDI = (ESP);
  /* 12023547 push 0x120524b8 */
  push32((uint32_t)(0x120524b8u));
  /* 1202354c call dword ptr [0x120554ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554ac))), 0x12023552u);
  /* 12023552 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023555 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023557 call 0x12025c50 */
  push32(0x1202355cu); f_12025c50();
  /* 1202355c cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202355e jge 0x120235ac */
  if ((C.sf==C.of)) goto L_120235ac;
  /* 12023560 mov esi, esp */
  ESI = (ESP);
  /* 12023562 push 1 */
  push32((uint32_t)(0x1u));
  /* 12023564 push 1 */
  push32((uint32_t)(0x1u));
  /* 12023566 call dword ptr [0x12055464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055464))), 0x1202356cu);
  /* 1202356c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202356f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023571 call 0x12025c50 */
  push32(0x12023576u); f_12025c50();
  /* 12023576 mov esi, esp */
  ESI = (ESP);
  /* 12023578 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202357a push 0x120524b8 */
  push32((uint32_t)(0x120524b8u));
  /* 1202357f call dword ptr [0x12055480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055480))), 0x12023585u);
  /* 12023585 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023588 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202358a call 0x12025c50 */
  push32(0x1202358fu); f_12025c50();
  /* 1202358f mov esi, esp */
  ESI = (ESP);
  /* 12023591 push 0 */
  push32((uint32_t)(0x0u));
  /* 12023593 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 12023595 push 0x12052700 */
  push32((uint32_t)(0x12052700u));
  /* 1202359a push 5 */
  push32((uint32_t)(0x5u));
  /* 1202359c call dword ptr [0x120554b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554b0))), 0x120235a2u);
  /* 120235a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120235a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120235a7 call 0x12025c50 */
  push32(0x120235acu); f_12025c50();
L_120235ac:;
  /* 120235ac mov esi, esp */
  ESI = (ESP);
  /* 120235ae push 1 */
  push32((uint32_t)(0x1u));
  /* 120235b0 call dword ptr [0x12055460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055460))), 0x120235b6u);
  /* 120235b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120235b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120235bb call 0x12025c50 */
  push32(0x120235c0u); f_12025c50();
  /* 120235c0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120235c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120235c7 je 0x12023650 */
  if (C.zf) goto L_12023650;
  /* 120235cd mov esi, esp */
  ESI = (ESP);
  /* 120235cf push 0x120524b8 */
  push32((uint32_t)(0x120524b8u));
  /* 120235d4 push 0x12052658 */
  push32((uint32_t)(0x12052658u));
  /* 120235d9 call dword ptr [0x120554a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554a8))), 0x120235dfu);
  /* 120235df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120235e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120235e4 call 0x12025c50 */
  push32(0x120235e9u); f_12025c50();
  /* 120235e9 mov esi, eax */
  ESI = (EAX);
  /* 120235eb mov edi, esp */
  EDI = (ESP);
  /* 120235ed push 0x120524b8 */
  push32((uint32_t)(0x120524b8u));
  /* 120235f2 call dword ptr [0x120554ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554ac))), 0x120235f8u);
  /* 120235f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120235fb cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120235fd call 0x12025c50 */
  push32(0x12023602u); f_12025c50();
  /* 12023602 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023604 jne 0x12023650 */
  if (!C.zf) goto L_12023650;
  /* 12023606 mov esi, esp */
  ESI = (ESP);
  /* 12023608 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202360a push 1 */
  push32((uint32_t)(0x1u));
  /* 1202360c call dword ptr [0x12055464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055464))), 0x12023612u);
  /* 12023612 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023615 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023617 call 0x12025c50 */
  push32(0x1202361cu); f_12025c50();
  /* 1202361c mov esi, esp */
  ESI = (ESP);
  /* 1202361e push 0 */
  push32((uint32_t)(0x0u));
  /* 12023620 push 0x120524b8 */
  push32((uint32_t)(0x120524b8u));
  /* 12023625 call dword ptr [0x12055480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055480))), 0x1202362bu);
  /* 1202362b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202362e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023630 call 0x12025c50 */
  push32(0x12023635u); f_12025c50();
  /* 12023635 mov esi, esp */
  ESI = (ESP);
  /* 12023637 push 0 */
  push32((uint32_t)(0x0u));
  /* 12023639 push 0x120526f8 */
  push32((uint32_t)(0x120526f8u));
  /* 1202363e push 5 */
  push32((uint32_t)(0x5u));
  /* 12023640 call dword ptr [0x120554b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554b4))), 0x12023646u);
  /* 12023646 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023649 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202364b call 0x12025c50 */
  push32(0x12023650u); f_12025c50();
L_12023650:;
  /* 12023650 mov esi, esp */
  ESI = (ESP);
  /* 12023652 push 2 */
  push32((uint32_t)(0x2u));
  /* 12023654 call dword ptr [0x12055460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055460))), 0x1202365au);
  /* 1202365a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202365d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202365f call 0x12025c50 */
  push32(0x12023664u); f_12025c50();
  /* 12023664 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12023669 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202366b je 0x12023760 */
  if (C.zf) goto L_12023760;
  /* 12023671 mov esi, esp */
  ESI = (ESP);
  /* 12023673 push 0x120524b8 */
  push32((uint32_t)(0x120524b8u));
  /* 12023678 call dword ptr [0x120554ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554ac))), 0x1202367eu);
  /* 1202367e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023681 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023683 call 0x12025c50 */
  push32(0x12023688u); f_12025c50();
  /* 12023688 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202368a jne 0x12023760 */
  if (!C.zf) goto L_12023760;
  /* 12023690 mov esi, esp */
  ESI = (ESP);
  /* 12023692 push 0 */
  push32((uint32_t)(0x0u));
  /* 12023694 push 0x12052658 */
  push32((uint32_t)(0x12052658u));
  /* 12023699 call dword ptr [0x120554a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554a4))), 0x1202369fu);
  /* 1202369f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120236a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120236a4 call 0x12025c50 */
  push32(0x120236a9u); f_12025c50();
  /* 120236a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120236ab jle 0x12023760 */
  if ((C.zf||C.sf!=C.of)) goto L_12023760;
  /* 120236b1 mov esi, esp */
  ESI = (ESP);
  /* 120236b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 120236b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 120236b7 call dword ptr [0x12055464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055464))), 0x120236bdu);
  /* 120236bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120236c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120236c2 call 0x12025c50 */
  push32(0x120236c7u); f_12025c50();
  /* 120236c7 mov esi, esp */
  ESI = (ESP);
  /* 120236c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 120236cb call dword ptr [0x12055478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055478))), 0x120236d1u);
  /* 120236d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120236d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120236d6 call 0x12025c50 */
  push32(0x120236dbu); f_12025c50();
  /* 120236db imul eax, eax, 0x7d0 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7d0u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120236e1 mov edx, 0x2710 */
  EDX = (0x2710u);
  /* 120236e6 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120236e8 mov esi, esp */
  ESI = (ESP);
  /* 120236ea push edx */
  push32((uint32_t)(EDX));
  /* 120236eb push 0x1204d420 */
  push32((uint32_t)(0x1204d420u));
  /* 120236f0 call dword ptr [0x120554b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554b8))), 0x120236f6u);
  /* 120236f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120236f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120236fb call 0x12025c50 */
  push32(0x12023700u); f_12025c50();
  /* 12023700 mov esi, esp */
  ESI = (ESP);
  /* 12023702 push 0 */
  push32((uint32_t)(0x0u));
  /* 12023704 call dword ptr [0x12055478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055478))), 0x1202370au);
  /* 1202370a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202370d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202370f call 0x12025c50 */
  push32(0x12023714u); f_12025c50();
  /* 12023714 imul eax, eax, 0x7d0 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7d0u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202371a mov ecx, 0x2710 */
  ECX = (0x2710u);
  /* 1202371f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12023721 mov esi, esp */
  ESI = (ESP);
  /* 12023723 push ecx */
  push32((uint32_t)(ECX));
  /* 12023724 push 1 */
  push32((uint32_t)(0x1u));
  /* 12023726 push 0 */
  push32((uint32_t)(0x0u));
  /* 12023728 call dword ptr [0x120554bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554bc))), 0x1202372eu);
  /* 1202372e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023731 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023733 call 0x12025c50 */
  push32(0x12023738u); f_12025c50();
  /* 12023738 mov esi, esp */
  ESI = (ESP);
  /* 1202373a push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1202373c call dword ptr [0x1205546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205546c))), 0x12023742u);
  /* 12023742 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023745 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023747 call 0x12025c50 */
  push32(0x1202374cu); f_12025c50();
  /* 1202374c mov esi, esp */
  ESI = (ESP);
  /* 1202374e push 0x45 */
  push32((uint32_t)(0x45u));
  /* 12023750 call dword ptr [0x12055468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055468))), 0x12023756u);
  /* 12023756 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023759 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202375b call 0x12025c50 */
  push32(0x12023760u); f_12025c50();
L_12023760:;
  /* 12023760 mov esi, esp */
  ESI = (ESP);
  /* 12023762 push 3 */
  push32((uint32_t)(0x3u));
  /* 12023764 call dword ptr [0x12055460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055460))), 0x1202376au);
  /* 1202376a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202376d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202376f call 0x12025c50 */
  push32(0x12023774u); f_12025c50();
  /* 12023774 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12023779 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202377b jne 0x12023809 */
  if (!C.zf) goto L_12023809;
  /* 12023781 mov esi, esp */
  ESI = (ESP);
  /* 12023783 push 0x120524b0 */
  push32((uint32_t)(0x120524b0u));
  /* 12023788 push 0x12052660 */
  push32((uint32_t)(0x12052660u));
  /* 1202378d call dword ptr [0x120554a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554a8))), 0x12023793u);
  /* 12023793 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023796 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023798 call 0x12025c50 */
  push32(0x1202379du); f_12025c50();
  /* 1202379d mov esi, eax */
  ESI = (EAX);
  /* 1202379f mov edi, esp */
  EDI = (ESP);
  /* 120237a1 push 0x120524b0 */
  push32((uint32_t)(0x120524b0u));
  /* 120237a6 call dword ptr [0x120554ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554ac))), 0x120237acu);
  /* 120237ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120237af cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120237b1 call 0x12025c50 */
  push32(0x120237b6u); f_12025c50();
  /* 120237b6 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120237b8 jge 0x12023809 */
  if ((C.sf==C.of)) goto L_12023809;
  /* 120237ba mov esi, esp */
  ESI = (ESP);
  /* 120237bc push 1 */
  push32((uint32_t)(0x1u));
  /* 120237be push 3 */
  push32((uint32_t)(0x3u));
  /* 120237c0 call dword ptr [0x12055464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055464))), 0x120237c6u);
  /* 120237c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120237c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120237cb call 0x12025c50 */
  push32(0x120237d0u); f_12025c50();
  /* 120237d0 mov esi, esp */
  ESI = (ESP);
  /* 120237d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 120237d4 push 0x120524b0 */
  push32((uint32_t)(0x120524b0u));
  /* 120237d9 call dword ptr [0x12055480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055480))), 0x120237dfu);
  /* 120237df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120237e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120237e4 call 0x12025c50 */
  push32(0x120237e9u); f_12025c50();
  /* 120237e9 mov esi, esp */
  ESI = (ESP);
  /* 120237eb push 0 */
  push32((uint32_t)(0x0u));
  /* 120237ed push 0x96 */
  push32((uint32_t)(0x96u));
  /* 120237f2 push 0x12052710 */
  push32((uint32_t)(0x12052710u));
  /* 120237f7 push 5 */
  push32((uint32_t)(0x5u));
  /* 120237f9 call dword ptr [0x120554b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554b0))), 0x120237ffu);
  /* 120237ff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023802 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023804 call 0x12025c50 */
  push32(0x12023809u); f_12025c50();
L_12023809:;
  /* 12023809 mov esi, esp */
  ESI = (ESP);
  /* 1202380b push 3 */
  push32((uint32_t)(0x3u));
  /* 1202380d call dword ptr [0x12055460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055460))), 0x12023813u);
  /* 12023813 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023816 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023818 call 0x12025c50 */
  push32(0x1202381du); f_12025c50();
  /* 1202381d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12023822 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12023824 je 0x120238ad */
  if (C.zf) goto L_120238ad;
  /* 1202382a mov esi, esp */
  ESI = (ESP);
  /* 1202382c push 0x120524b0 */
  push32((uint32_t)(0x120524b0u));
  /* 12023831 push 0x12052660 */
  push32((uint32_t)(0x12052660u));
  /* 12023836 call dword ptr [0x120554a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554a8))), 0x1202383cu);
  /* 1202383c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202383f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023841 call 0x12025c50 */
  push32(0x12023846u); f_12025c50();
  /* 12023846 mov esi, eax */
  ESI = (EAX);
  /* 12023848 mov edi, esp */
  EDI = (ESP);
  /* 1202384a push 0x120524b0 */
  push32((uint32_t)(0x120524b0u));
  /* 1202384f call dword ptr [0x120554ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554ac))), 0x12023855u);
  /* 12023855 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023858 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202385a call 0x12025c50 */
  push32(0x1202385fu); f_12025c50();
  /* 1202385f cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023861 jne 0x120238ad */
  if (!C.zf) goto L_120238ad;
  /* 12023863 mov esi, esp */
  ESI = (ESP);
  /* 12023865 push 0 */
  push32((uint32_t)(0x0u));
  /* 12023867 push 3 */
  push32((uint32_t)(0x3u));
  /* 12023869 call dword ptr [0x12055464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055464))), 0x1202386fu);
  /* 1202386f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023872 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023874 call 0x12025c50 */
  push32(0x12023879u); f_12025c50();
  /* 12023879 mov esi, esp */
  ESI = (ESP);
  /* 1202387b push 0 */
  push32((uint32_t)(0x0u));
  /* 1202387d push 0x120524b0 */
  push32((uint32_t)(0x120524b0u));
  /* 12023882 call dword ptr [0x12055480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055480))), 0x12023888u);
  /* 12023888 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202388b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202388d call 0x12025c50 */
  push32(0x12023892u); f_12025c50();
  /* 12023892 mov esi, esp */
  ESI = (ESP);
  /* 12023894 push 0 */
  push32((uint32_t)(0x0u));
  /* 12023896 push 0x12052708 */
  push32((uint32_t)(0x12052708u));
  /* 1202389b push 5 */
  push32((uint32_t)(0x5u));
  /* 1202389d call dword ptr [0x120554b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554b4))), 0x120238a3u);
  /* 120238a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120238a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120238a8 call 0x12025c50 */
  push32(0x120238adu); f_12025c50();
L_120238ad:;
  /* 120238ad mov esi, esp */
  ESI = (ESP);
  /* 120238af push 4 */
  push32((uint32_t)(0x4u));
  /* 120238b1 call dword ptr [0x12055460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055460))), 0x120238b7u);
  /* 120238b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120238ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120238bc call 0x12025c50 */
  push32(0x120238c1u); f_12025c50();
  /* 120238c1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120238c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120238c8 je 0x120239bd */
  if (C.zf) goto L_120239bd;
  /* 120238ce mov esi, esp */
  ESI = (ESP);
  /* 120238d0 push 0x120524b0 */
  push32((uint32_t)(0x120524b0u));
  /* 120238d5 call dword ptr [0x120554ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554ac))), 0x120238dbu);
  /* 120238db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120238de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120238e0 call 0x12025c50 */
  push32(0x120238e5u); f_12025c50();
  /* 120238e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120238e7 jne 0x120239bd */
  if (!C.zf) goto L_120239bd;
  /* 120238ed mov esi, esp */
  ESI = (ESP);
  /* 120238ef push 0 */
  push32((uint32_t)(0x0u));
  /* 120238f1 push 0x12052660 */
  push32((uint32_t)(0x12052660u));
  /* 120238f6 call dword ptr [0x120554a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554a4))), 0x120238fcu);
  /* 120238fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120238ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023901 call 0x12025c50 */
  push32(0x12023906u); f_12025c50();
  /* 12023906 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12023908 jle 0x120239bd */
  if ((C.zf||C.sf!=C.of)) goto L_120239bd;
  /* 1202390e mov esi, esp */
  ESI = (ESP);
  /* 12023910 push 0 */
  push32((uint32_t)(0x0u));
  /* 12023912 push 4 */
  push32((uint32_t)(0x4u));
  /* 12023914 call dword ptr [0x12055464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055464))), 0x1202391au);
  /* 1202391a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202391d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202391f call 0x12025c50 */
  push32(0x12023924u); f_12025c50();
  /* 12023924 mov esi, esp */
  ESI = (ESP);
  /* 12023926 push 0 */
  push32((uint32_t)(0x0u));
  /* 12023928 call dword ptr [0x12055478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055478))), 0x1202392eu);
  /* 1202392e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023931 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023933 call 0x12025c50 */
  push32(0x12023938u); f_12025c50();
  /* 12023938 imul eax, eax, 0x7d0 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7d0u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202393e mov edx, 0x3a98 */
  EDX = (0x3a98u);
  /* 12023943 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12023945 mov esi, esp */
  ESI = (ESP);
  /* 12023947 push edx */
  push32((uint32_t)(EDX));
  /* 12023948 push 0x1204d420 */
  push32((uint32_t)(0x1204d420u));
  /* 1202394d call dword ptr [0x120554b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554b8))), 0x12023953u);
  /* 12023953 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023956 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023958 call 0x12025c50 */
  push32(0x1202395du); f_12025c50();
  /* 1202395d mov esi, esp */
  ESI = (ESP);
  /* 1202395f push 0 */
  push32((uint32_t)(0x0u));
  /* 12023961 call dword ptr [0x12055478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055478))), 0x12023967u);
  /* 12023967 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202396a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202396c call 0x12025c50 */
  push32(0x12023971u); f_12025c50();
  /* 12023971 imul eax, eax, 0x7d0 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7d0u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12023977 mov ecx, 0x3a98 */
  ECX = (0x3a98u);
  /* 1202397c sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202397e mov esi, esp */
  ESI = (ESP);
  /* 12023980 push ecx */
  push32((uint32_t)(ECX));
  /* 12023981 push 1 */
  push32((uint32_t)(0x1u));
  /* 12023983 push 0 */
  push32((uint32_t)(0x0u));
  /* 12023985 call dword ptr [0x120554bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554bc))), 0x1202398bu);
  /* 1202398b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202398e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023990 call 0x12025c50 */
  push32(0x12023995u); f_12025c50();
  /* 12023995 mov esi, esp */
  ESI = (ESP);
  /* 12023997 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 12023999 call dword ptr [0x1205546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205546c))), 0x1202399fu);
  /* 1202399f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120239a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120239a4 call 0x12025c50 */
  push32(0x120239a9u); f_12025c50();
  /* 120239a9 mov esi, esp */
  ESI = (ESP);
  /* 120239ab push 0x47 */
  push32((uint32_t)(0x47u));
  /* 120239ad call dword ptr [0x12055468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055468))), 0x120239b3u);
  /* 120239b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120239b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120239b8 call 0x12025c50 */
  push32(0x120239bdu); f_12025c50();
L_120239bd:;
  /* 120239bd mov esi, esp */
  ESI = (ESP);
  /* 120239bf push 4 */
  push32((uint32_t)(0x4u));
  /* 120239c1 call dword ptr [0x12055460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055460))), 0x120239c7u);
  /* 120239c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120239ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120239cc call 0x12025c50 */
  push32(0x120239d1u); f_12025c50();
  /* 120239d1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120239d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120239d8 je 0x12023c6c */
  if (C.zf) goto L_12023c6c;
  /* 120239de mov esi, esp */
  ESI = (ESP);
  /* 120239e0 push 0xc */
  push32((uint32_t)(0xcu));
  /* 120239e2 call dword ptr [0x12055460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055460))), 0x120239e8u);
  /* 120239e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120239eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120239ed call 0x12025c50 */
  push32(0x120239f2u); f_12025c50();
  /* 120239f2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120239f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120239f9 je 0x12023a53 */
  if (C.zf) goto L_12023a53;
  /* 120239fb mov esi, esp */
  ESI = (ESP);
  /* 120239fd push 0 */
  push32((uint32_t)(0x0u));
  /* 120239ff push 0xc */
  push32((uint32_t)(0xcu));
  /* 12023a01 call dword ptr [0x12055464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055464))), 0x12023a07u);
  /* 12023a07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023a0a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023a0c call 0x12025c50 */
  push32(0x12023a11u); f_12025c50();
  /* 12023a11 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12023a18 jmp 0x12023a23 */
  goto L_12023a23;
L_12023a1a:;
  /* 12023a1a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12023a1d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12023a20 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12023a23:;
  /* 12023a23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12023a26 cmp eax, dword ptr [0x12052588] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12052588))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023a2c jge 0x12023a53 */
  if ((C.sf==C.of)) goto L_12023a53;
  /* 12023a2e mov esi, esp */
  ESI = (ESP);
  /* 12023a30 push 1 */
  push32((uint32_t)(0x1u));
  /* 12023a32 push 0x12052448 */
  push32((uint32_t)(0x12052448u));
  /* 12023a37 push 0x120526b0 */
  push32((uint32_t)(0x120526b0u));
  /* 12023a3c push 0x12052480 */
  push32((uint32_t)(0x12052480u));
  /* 12023a41 call dword ptr [0x120554c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554c0))), 0x12023a47u);
  /* 12023a47 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023a4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023a4c call 0x12025c50 */
  push32(0x12023a51u); f_12025c50();
  /* 12023a51 jmp 0x12023a1a */
  goto L_12023a1a;
L_12023a53:;
  /* 12023a53 mov esi, esp */
  ESI = (ESP);
  /* 12023a55 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12023a57 call dword ptr [0x12055460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055460))), 0x12023a5du);
  /* 12023a5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023a60 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023a62 call 0x12025c50 */
  push32(0x12023a67u); f_12025c50();
  /* 12023a67 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12023a6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12023a6e je 0x12023abf */
  if (C.zf) goto L_12023abf;
  /* 12023a70 mov esi, esp */
  ESI = (ESP);
  /* 12023a72 push 0x12052480 */
  push32((uint32_t)(0x12052480u));
  /* 12023a77 call dword ptr [0x120554c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554c4))), 0x12023a7du);
  /* 12023a7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023a80 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023a82 call 0x12025c50 */
  push32(0x12023a87u); f_12025c50();
  /* 12023a87 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12023a8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12023a8e je 0x12023abf */
  if (C.zf) goto L_12023abf;
  /* 12023a90 mov esi, esp */
  ESI = (ESP);
  /* 12023a92 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 12023a97 push 4 */
  push32((uint32_t)(0x4u));
  /* 12023a99 call dword ptr [0x12055490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055490))), 0x12023a9fu);
  /* 12023a9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023aa2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023aa4 call 0x12025c50 */
  push32(0x12023aa9u); f_12025c50();
  /* 12023aa9 mov esi, esp */
  ESI = (ESP);
  /* 12023aab push 0 */
  push32((uint32_t)(0x0u));
  /* 12023aad push 0xd */
  push32((uint32_t)(0xdu));
  /* 12023aaf call dword ptr [0x12055464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055464))), 0x12023ab5u);
  /* 12023ab5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023ab8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023aba call 0x12025c50 */
  push32(0x12023abfu); f_12025c50();
L_12023abf:;
  /* 12023abf mov esi, esp */
  ESI = (ESP);
  /* 12023ac1 push 0xe */
  push32((uint32_t)(0xeu));
  /* 12023ac3 call dword ptr [0x12055460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055460))), 0x12023ac9u);
  /* 12023ac9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023acc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023ace call 0x12025c50 */
  push32(0x12023ad3u); f_12025c50();
  /* 12023ad3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12023ad8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12023ada je 0x12023bcf */
  if (C.zf) goto L_12023bcf;
  /* 12023ae0 mov esi, esp */
  ESI = (ESP);
  /* 12023ae2 push 4 */
  push32((uint32_t)(0x4u));
  /* 12023ae4 call dword ptr [0x120554c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554c8))), 0x12023aeau);
  /* 12023aea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023aed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023aef call 0x12025c50 */
  push32(0x12023af4u); f_12025c50();
  /* 12023af4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12023af9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12023afb je 0x12023bcf */
  if (C.zf) goto L_12023bcf;
  /* 12023b01 mov esi, esp */
  ESI = (ESP);
  /* 12023b03 push 0 */
  push32((uint32_t)(0x0u));
  /* 12023b05 push 0xe */
  push32((uint32_t)(0xeu));
  /* 12023b07 call dword ptr [0x12055464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055464))), 0x12023b0du);
  /* 12023b0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023b10 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023b12 call 0x12025c50 */
  push32(0x12023b17u); f_12025c50();
  /* 12023b17 mov esi, esp */
  ESI = (ESP);
  /* 12023b19 push 1 */
  push32((uint32_t)(0x1u));
  /* 12023b1b push 0xd */
  push32((uint32_t)(0xdu));
  /* 12023b1d call dword ptr [0x12055464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055464))), 0x12023b23u);
  /* 12023b23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023b26 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023b28 call 0x12025c50 */
  push32(0x12023b2du); f_12025c50();
  /* 12023b2d mov esi, esp */
  ESI = (ESP);
  /* 12023b2f push 1 */
  push32((uint32_t)(0x1u));
  /* 12023b31 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12023b33 call dword ptr [0x12055464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055464))), 0x12023b39u);
  /* 12023b39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023b3c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023b3e call 0x12025c50 */
  push32(0x12023b43u); f_12025c50();
  /* 12023b43 mov esi, esp */
  ESI = (ESP);
  /* 12023b45 push 4 */
  push32((uint32_t)(0x4u));
  /* 12023b47 call dword ptr [0x120554cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554cc))), 0x12023b4du);
  /* 12023b4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023b50 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023b52 call 0x12025c50 */
  push32(0x12023b57u); f_12025c50();
  /* 12023b57 mov esi, esp */
  ESI = (ESP);
  /* 12023b59 push 0x86c4 */
  push32((uint32_t)(0x86c4u));
  /* 12023b5e push 5 */
  push32((uint32_t)(0x5u));
  /* 12023b60 call dword ptr [0x12055490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055490))), 0x12023b66u);
  /* 12023b66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023b69 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023b6b call 0x12025c50 */
  push32(0x12023b70u); f_12025c50();
  /* 12023b70 mov esi, esp */
  ESI = (ESP);
  /* 12023b72 push 0x12052460 */
  push32((uint32_t)(0x12052460u));
  /* 12023b77 push 0x12052448 */
  push32((uint32_t)(0x12052448u));
  /* 12023b7c call dword ptr [0x120554d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554d0))), 0x12023b82u);
  /* 12023b82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023b85 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023b87 call 0x12025c50 */
  push32(0x12023b8cu); f_12025c50();
  /* 12023b8c mov esi, esp */
  ESI = (ESP);
  /* 12023b8e push 0 */
  push32((uint32_t)(0x0u));
  /* 12023b90 push 0x12052460 */
  push32((uint32_t)(0x12052460u));
  /* 12023b95 call dword ptr [0x12055480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055480))), 0x12023b9bu);
  /* 12023b9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023b9e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023ba0 call 0x12025c50 */
  push32(0x12023ba5u); f_12025c50();
  /* 12023ba5 mov esi, esp */
  ESI = (ESP);
  /* 12023ba7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12023ba9 push 5 */
  push32((uint32_t)(0x5u));
  /* 12023bab call dword ptr [0x120554d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554d4))), 0x12023bb1u);
  /* 12023bb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023bb4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023bb6 call 0x12025c50 */
  push32(0x12023bbbu); f_12025c50();
  /* 12023bbb mov esi, esp */
  ESI = (ESP);
  /* 12023bbd push 5 */
  push32((uint32_t)(0x5u));
  /* 12023bbf call dword ptr [0x12055488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055488))), 0x12023bc5u);
  /* 12023bc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023bc8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023bca call 0x12025c50 */
  push32(0x12023bcfu); f_12025c50();
L_12023bcf:;
  /* 12023bcf mov esi, esp */
  ESI = (ESP);
  /* 12023bd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12023bd3 push 0x12052690 */
  push32((uint32_t)(0x12052690u));
  /* 12023bd8 push 0x12052460 */
  push32((uint32_t)(0x12052460u));
  /* 12023bdd call dword ptr [0x120554d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554d8))), 0x12023be3u);
  /* 12023be3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023be6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023be8 call 0x12025c50 */
  push32(0x12023bedu); f_12025c50();
  /* 12023bed mov esi, esp */
  ESI = (ESP);
  /* 12023bef push 0xe */
  push32((uint32_t)(0xeu));
  /* 12023bf1 call dword ptr [0x12055460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055460))), 0x12023bf7u);
  /* 12023bf7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023bfa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023bfc call 0x12025c50 */
  push32(0x12023c01u); f_12025c50();
  /* 12023c01 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12023c06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12023c08 jne 0x12023c6c */
  if (!C.zf) goto L_12023c6c;
  /* 12023c0a mov esi, esp */
  ESI = (ESP);
  /* 12023c0c push 0x12052460 */
  push32((uint32_t)(0x12052460u));
  /* 12023c11 call dword ptr [0x120554ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554ac))), 0x12023c17u);
  /* 12023c17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023c1a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023c1c call 0x12025c50 */
  push32(0x12023c21u); f_12025c50();
  /* 12023c21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12023c23 je 0x12023c42 */
  if (C.zf) goto L_12023c42;
  /* 12023c25 mov esi, esp */
  ESI = (ESP);
  /* 12023c27 push 5 */
  push32((uint32_t)(0x5u));
  /* 12023c29 call dword ptr [0x12055498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055498))), 0x12023c2fu);
  /* 12023c2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023c32 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023c34 call 0x12025c50 */
  push32(0x12023c39u); f_12025c50();
  /* 12023c39 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12023c3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12023c40 je 0x12023c6c */
  if (C.zf) goto L_12023c6c;
L_12023c42:;
  /* 12023c42 mov esi, esp */
  ESI = (ESP);
  /* 12023c44 push 5 */
  push32((uint32_t)(0x5u));
  /* 12023c46 call dword ptr [0x120554cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554cc))), 0x12023c4cu);
  /* 12023c4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023c4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023c51 call 0x12025c50 */
  push32(0x12023c56u); f_12025c50();
  /* 12023c56 mov esi, esp */
  ESI = (ESP);
  /* 12023c58 push 1 */
  push32((uint32_t)(0x1u));
  /* 12023c5a push 0xe */
  push32((uint32_t)(0xeu));
  /* 12023c5c call dword ptr [0x12055464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055464))), 0x12023c62u);
  /* 12023c62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023c65 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023c67 call 0x12025c50 */
  push32(0x12023c6cu); f_12025c50();
L_12023c6c:;
  /* 12023c6c mov esi, esp */
  ESI = (ESP);
  /* 12023c6e push 5 */
  push32((uint32_t)(0x5u));
  /* 12023c70 call dword ptr [0x12055460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055460))), 0x12023c76u);
  /* 12023c76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023c79 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023c7b call 0x12025c50 */
  push32(0x12023c80u); f_12025c50();
  /* 12023c80 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12023c85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12023c87 je 0x12023cf9 */
  if (C.zf) goto L_12023cf9;
  /* 12023c89 mov esi, esp */
  ESI = (ESP);
  /* 12023c8b push 0x12052718 */
  push32((uint32_t)(0x12052718u));
  /* 12023c90 call dword ptr [0x120554ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554ac))), 0x12023c96u);
  /* 12023c96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023c99 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023c9b call 0x12025c50 */
  push32(0x12023ca0u); f_12025c50();
  /* 12023ca0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12023ca2 jne 0x12023cf9 */
  if (!C.zf) goto L_12023cf9;
  /* 12023ca4 mov esi, esp */
  ESI = (ESP);
  /* 12023ca6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12023ca8 push 5 */
  push32((uint32_t)(0x5u));
  /* 12023caa call dword ptr [0x12055464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055464))), 0x12023cb0u);
  /* 12023cb0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023cb3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023cb5 call 0x12025c50 */
  push32(0x12023cbau); f_12025c50();
  /* 12023cba mov esi, esp */
  ESI = (ESP);
  /* 12023cbc push 0x1204d418 */
  push32((uint32_t)(0x1204d418u));
  /* 12023cc1 call dword ptr [0x1205549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205549c))), 0x12023cc7u);
  /* 12023cc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023cca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023ccc call 0x12025c50 */
  push32(0x12023cd1u); f_12025c50();
  /* 12023cd1 mov esi, esp */
  ESI = (ESP);
  /* 12023cd3 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 12023cd5 call dword ptr [0x1205546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205546c))), 0x12023cdbu);
  /* 12023cdb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023cde cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023ce0 call 0x12025c50 */
  push32(0x12023ce5u); f_12025c50();
  /* 12023ce5 mov esi, esp */
  ESI = (ESP);
  /* 12023ce7 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 12023ce9 call dword ptr [0x12055468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055468))), 0x12023cefu);
  /* 12023cef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023cf2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023cf4 call 0x12025c50 */
  push32(0x12023cf9u); f_12025c50();
L_12023cf9:;
  /* 12023cf9 mov esi, esp */
  ESI = (ESP);
  /* 12023cfb push 6 */
  push32((uint32_t)(0x6u));
  /* 12023cfd call dword ptr [0x12055460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055460))), 0x12023d03u);
  /* 12023d03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023d06 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023d08 call 0x12025c50 */
  push32(0x12023d0du); f_12025c50();
  /* 12023d0d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12023d12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12023d14 je 0x12024025 */
  if (C.zf) goto L_12024025;
  /* 12023d1a mov esi, esp */
  ESI = (ESP);
  /* 12023d1c push 0 */
  push32((uint32_t)(0x0u));
  /* 12023d1e push 6 */
  push32((uint32_t)(0x6u));
  /* 12023d20 call dword ptr [0x12055464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055464))), 0x12023d26u);
  /* 12023d26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023d29 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023d2b call 0x12025c50 */
  push32(0x12023d30u); f_12025c50();
  /* 12023d30 mov esi, esp */
  ESI = (ESP);
  /* 12023d32 push 0 */
  push32((uint32_t)(0x0u));
  /* 12023d34 call dword ptr [0x12055478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055478))), 0x12023d3au);
  /* 12023d3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023d3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023d3f call 0x12025c50 */
  push32(0x12023d44u); f_12025c50();
  /* 12023d44 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12023d47 cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023d4b ja 0x12023f6e */
  if ((!C.cf&&!C.zf)) goto L_12023f6e;
  /* 12023d51 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12023d54 jmp dword ptr [ecx*4 + 0x12024feb] */
  switch (ECX) {
    case 0: goto L_12023d5b;
    case 1: goto L_12023de1;
    case 2: goto L_12023e67;
    case 3: goto L_12023eed;
    case 4: goto L_120249c5;
    case 5: goto L_12024a1d;
    case 6: goto L_12024a78;
    case 7: goto L_12024ad0;
    default: x86_unimpl("switch@0x12023d54 out of table"); return;
  }
L_12023d5b:;
  /* 12023d5b mov esi, esp */
  ESI = (ESP);
  /* 12023d5d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12023d5f push 0x12052698 */
  push32((uint32_t)(0x12052698u));
  /* 12023d64 push 4 */
  push32((uint32_t)(0x4u));
  /* 12023d66 push 0x12052408 */
  push32((uint32_t)(0x12052408u));
  /* 12023d6b push 0x12052488 */
  push32((uint32_t)(0x12052488u));
  /* 12023d70 push 0x12052458 */
  push32((uint32_t)(0x12052458u));
  /* 12023d75 call dword ptr [0x120554dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554dc))), 0x12023d7bu);
  /* 12023d7b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023d7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023d80 call 0x12025c50 */
  push32(0x12023d85u); f_12025c50();
  /* 12023d85 mov esi, esp */
  ESI = (ESP);
  /* 12023d87 push 0 */
  push32((uint32_t)(0x0u));
  /* 12023d89 push 0x120526a0 */
  push32((uint32_t)(0x120526a0u));
  /* 12023d8e push 4 */
  push32((uint32_t)(0x4u));
  /* 12023d90 push 0x12052408 */
  push32((uint32_t)(0x12052408u));
  /* 12023d95 push 0x12052488 */
  push32((uint32_t)(0x12052488u));
  /* 12023d9a push 0x12052470 */
  push32((uint32_t)(0x12052470u));
  /* 12023d9f call dword ptr [0x120554dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554dc))), 0x12023da5u);
  /* 12023da5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023da8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023daa call 0x12025c50 */
  push32(0x12023dafu); f_12025c50();
  /* 12023daf mov esi, esp */
  ESI = (ESP);
  /* 12023db1 push 0xe6 */
  push32((uint32_t)(0xe6u));
  /* 12023db6 push 0x120526a8 */
  push32((uint32_t)(0x120526a8u));
  /* 12023dbb push 4 */
  push32((uint32_t)(0x4u));
  /* 12023dbd push 0x12052408 */
  push32((uint32_t)(0x12052408u));
  /* 12023dc2 push 0x12052488 */
  push32((uint32_t)(0x12052488u));
  /* 12023dc7 push 0x12052418 */
  push32((uint32_t)(0x12052418u));
  /* 12023dcc call dword ptr [0x120554dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554dc))), 0x12023dd2u);
  /* 12023dd2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023dd5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023dd7 call 0x12025c50 */
  push32(0x12023ddcu); f_12025c50();
  /* 12023ddc jmp 0x12023f6e */
  goto L_12023f6e;
L_12023de1:;
  /* 12023de1 mov esi, esp */
  ESI = (ESP);
  /* 12023de3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12023de5 push 0x12052698 */
  push32((uint32_t)(0x12052698u));
  /* 12023dea push 4 */
  push32((uint32_t)(0x4u));
  /* 12023dec push 0x12052408 */
  push32((uint32_t)(0x12052408u));
  /* 12023df1 push 0x120523f8 */
  push32((uint32_t)(0x120523f8u));
  /* 12023df6 push 0x12052458 */
  push32((uint32_t)(0x12052458u));
  /* 12023dfb call dword ptr [0x120554dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554dc))), 0x12023e01u);
  /* 12023e01 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023e04 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023e06 call 0x12025c50 */
  push32(0x12023e0bu); f_12025c50();
  /* 12023e0b mov esi, esp */
  ESI = (ESP);
  /* 12023e0d push 0 */
  push32((uint32_t)(0x0u));
  /* 12023e0f push 0x120526a0 */
  push32((uint32_t)(0x120526a0u));
  /* 12023e14 push 4 */
  push32((uint32_t)(0x4u));
  /* 12023e16 push 0x12052408 */
  push32((uint32_t)(0x12052408u));
  /* 12023e1b push 0x120523f8 */
  push32((uint32_t)(0x120523f8u));
  /* 12023e20 push 0x12052470 */
  push32((uint32_t)(0x12052470u));
  /* 12023e25 call dword ptr [0x120554dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554dc))), 0x12023e2bu);
  /* 12023e2b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023e2e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023e30 call 0x12025c50 */
  push32(0x12023e35u); f_12025c50();
  /* 12023e35 mov esi, esp */
  ESI = (ESP);
  /* 12023e37 push 0xe6 */
  push32((uint32_t)(0xe6u));
  /* 12023e3c push 0x120526a8 */
  push32((uint32_t)(0x120526a8u));
  /* 12023e41 push 4 */
  push32((uint32_t)(0x4u));
  /* 12023e43 push 0x12052408 */
  push32((uint32_t)(0x12052408u));
  /* 12023e48 push 0x120523f8 */
  push32((uint32_t)(0x120523f8u));
  /* 12023e4d push 0x12052418 */
  push32((uint32_t)(0x12052418u));
  /* 12023e52 call dword ptr [0x120554dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554dc))), 0x12023e58u);
  /* 12023e58 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023e5b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023e5d call 0x12025c50 */
  push32(0x12023e62u); f_12025c50();
  /* 12023e62 jmp 0x12023f6e */
  goto L_12023f6e;
L_12023e67:;
  /* 12023e67 mov esi, esp */
  ESI = (ESP);
  /* 12023e69 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12023e6b push 0x12052698 */
  push32((uint32_t)(0x12052698u));
  /* 12023e70 push 4 */
  push32((uint32_t)(0x4u));
  /* 12023e72 push 0x12052590 */
  push32((uint32_t)(0x12052590u));
  /* 12023e77 push 0x12052488 */
  push32((uint32_t)(0x12052488u));
  /* 12023e7c push 0x12052458 */
  push32((uint32_t)(0x12052458u));
  /* 12023e81 call dword ptr [0x120554dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554dc))), 0x12023e87u);
  /* 12023e87 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023e8a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023e8c call 0x12025c50 */
  push32(0x12023e91u); f_12025c50();
  /* 12023e91 mov esi, esp */
  ESI = (ESP);
  /* 12023e93 push 0 */
  push32((uint32_t)(0x0u));
  /* 12023e95 push 0x120526a0 */
  push32((uint32_t)(0x120526a0u));
  /* 12023e9a push 4 */
  push32((uint32_t)(0x4u));
  /* 12023e9c push 0x12052590 */
  push32((uint32_t)(0x12052590u));
  /* 12023ea1 push 0x12052488 */
  push32((uint32_t)(0x12052488u));
  /* 12023ea6 push 0x12052470 */
  push32((uint32_t)(0x12052470u));
  /* 12023eab call dword ptr [0x120554dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554dc))), 0x12023eb1u);
  /* 12023eb1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023eb4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023eb6 call 0x12025c50 */
  push32(0x12023ebbu); f_12025c50();
  /* 12023ebb mov esi, esp */
  ESI = (ESP);
  /* 12023ebd push 0xe6 */
  push32((uint32_t)(0xe6u));
  /* 12023ec2 push 0x120526a8 */
  push32((uint32_t)(0x120526a8u));
  /* 12023ec7 push 4 */
  push32((uint32_t)(0x4u));
  /* 12023ec9 push 0x12052590 */
  push32((uint32_t)(0x12052590u));
  /* 12023ece push 0x12052488 */
  push32((uint32_t)(0x12052488u));
  /* 12023ed3 push 0x12052418 */
  push32((uint32_t)(0x12052418u));
  /* 12023ed8 call dword ptr [0x120554dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554dc))), 0x12023edeu);
  /* 12023ede add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023ee1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023ee3 call 0x12025c50 */
  push32(0x12023ee8u); f_12025c50();
  /* 12023ee8 jmp 0x12023f6e */
  goto L_12023f6e;
L_12023eed:;
  /* 12023eed mov esi, esp */
  ESI = (ESP);
  /* 12023eef push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12023ef1 push 0x12052698 */
  push32((uint32_t)(0x12052698u));
  /* 12023ef6 push 4 */
  push32((uint32_t)(0x4u));
  /* 12023ef8 push 0x12052590 */
  push32((uint32_t)(0x12052590u));
  /* 12023efd push 0x120523f8 */
  push32((uint32_t)(0x120523f8u));
  /* 12023f02 push 0x12052458 */
  push32((uint32_t)(0x12052458u));
  /* 12023f07 call dword ptr [0x120554dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554dc))), 0x12023f0du);
  /* 12023f0d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023f10 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023f12 call 0x12025c50 */
  push32(0x12023f17u); f_12025c50();
  /* 12023f17 mov esi, esp */
  ESI = (ESP);
  /* 12023f19 push 0 */
  push32((uint32_t)(0x0u));
  /* 12023f1b push 0x120526a0 */
  push32((uint32_t)(0x120526a0u));
  /* 12023f20 push 4 */
  push32((uint32_t)(0x4u));
  /* 12023f22 push 0x12052590 */
  push32((uint32_t)(0x12052590u));
  /* 12023f27 push 0x120523f8 */
  push32((uint32_t)(0x120523f8u));
  /* 12023f2c push 0x12052470 */
  push32((uint32_t)(0x12052470u));
  /* 12023f31 call dword ptr [0x120554dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554dc))), 0x12023f37u);
  /* 12023f37 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023f3a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023f3c call 0x12025c50 */
  push32(0x12023f41u); f_12025c50();
  /* 12023f41 mov esi, esp */
  ESI = (ESP);
  /* 12023f43 push 0xe6 */
  push32((uint32_t)(0xe6u));
  /* 12023f48 push 0x120526a8 */
  push32((uint32_t)(0x120526a8u));
  /* 12023f4d push 4 */
  push32((uint32_t)(0x4u));
  /* 12023f4f push 0x12052590 */
  push32((uint32_t)(0x12052590u));
  /* 12023f54 push 0x120523f8 */
  push32((uint32_t)(0x120523f8u));
  /* 12023f59 push 0x12052418 */
  push32((uint32_t)(0x12052418u));
  /* 12023f5e call dword ptr [0x120554dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554dc))), 0x12023f64u);
  /* 12023f64 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023f67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023f69 call 0x12025c50 */
  push32(0x12023f6eu); f_12025c50();
L_12023f6e:;
  /* 12023f6e mov esi, esp */
  ESI = (ESP);
  /* 12023f70 push 0 */
  push32((uint32_t)(0x0u));
  /* 12023f72 push 0x12052458 */
  push32((uint32_t)(0x12052458u));
  /* 12023f77 call dword ptr [0x12055480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055480))), 0x12023f7du);
  /* 12023f7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023f80 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023f82 call 0x12025c50 */
  push32(0x12023f87u); f_12025c50();
  /* 12023f87 mov esi, esp */
  ESI = (ESP);
  /* 12023f89 push 0 */
  push32((uint32_t)(0x0u));
  /* 12023f8b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12023f8d push 0x12052688 */
  push32((uint32_t)(0x12052688u));
  /* 12023f92 push 4 */
  push32((uint32_t)(0x4u));
  /* 12023f94 call dword ptr [0x120554e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554e0))), 0x12023f9au);
  /* 12023f9a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023f9d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023f9f call 0x12025c50 */
  push32(0x12023fa4u); f_12025c50();
  /* 12023fa4 mov esi, esp */
  ESI = (ESP);
  /* 12023fa6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12023fa8 push 0x12052418 */
  push32((uint32_t)(0x12052418u));
  /* 12023fad call dword ptr [0x12055480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055480))), 0x12023fb3u);
  /* 12023fb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023fb6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023fb8 call 0x12025c50 */
  push32(0x12023fbdu); f_12025c50();
  /* 12023fbd mov esi, esp */
  ESI = (ESP);
  /* 12023fbf push 0 */
  push32((uint32_t)(0x0u));
  /* 12023fc1 push 0xe6 */
  push32((uint32_t)(0xe6u));
  /* 12023fc6 push 0x12052678 */
  push32((uint32_t)(0x12052678u));
  /* 12023fcb push 4 */
  push32((uint32_t)(0x4u));
  /* 12023fcd call dword ptr [0x120554e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554e0))), 0x12023fd3u);
  /* 12023fd3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023fd6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023fd8 call 0x12025c50 */
  push32(0x12023fddu); f_12025c50();
  /* 12023fdd mov esi, esp */
  ESI = (ESP);
  /* 12023fdf push 0 */
  push32((uint32_t)(0x0u));
  /* 12023fe1 push 0x12052470 */
  push32((uint32_t)(0x12052470u));
  /* 12023fe6 call dword ptr [0x12055480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055480))), 0x12023fecu);
  /* 12023fec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12023fef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12023ff1 call 0x12025c50 */
  push32(0x12023ff6u); f_12025c50();
  /* 12023ff6 mov esi, esp */
  ESI = (ESP);
  /* 12023ff8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12023ffa push 0x12052680 */
  push32((uint32_t)(0x12052680u));
  /* 12023fff push 4 */
  push32((uint32_t)(0x4u));
  /* 12024001 call dword ptr [0x120554b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554b4))), 0x12024007u);
  /* 12024007 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202400a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202400c call 0x12025c50 */
  push32(0x12024011u); f_12025c50();
  /* 12024011 mov esi, esp */
  ESI = (ESP);
  /* 12024013 push 4 */
  push32((uint32_t)(0x4u));
  /* 12024015 call dword ptr [0x12055488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055488))), 0x1202401bu);
  /* 1202401b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202401e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024020 call 0x12025c50 */
  push32(0x12024025u); f_12025c50();
L_12024025:;
  /* 12024025 mov esi, esp */
  ESI = (ESP);
  /* 12024027 push 0 */
  push32((uint32_t)(0x0u));
  /* 12024029 call dword ptr [0x12055478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055478))), 0x1202402fu);
  /* 1202402f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024032 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024034 call 0x12025c50 */
  push32(0x12024039u); f_12025c50();
  /* 12024039 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202403c je 0x1202405b */
  if (C.zf) goto L_1202405b;
  /* 1202403e mov esi, esp */
  ESI = (ESP);
  /* 12024040 push 0 */
  push32((uint32_t)(0x0u));
  /* 12024042 call dword ptr [0x12055478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055478))), 0x12024048u);
  /* 12024048 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202404b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202404d call 0x12025c50 */
  push32(0x12024052u); f_12025c50();
  /* 12024052 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024055 jne 0x1202424c */
  if (!C.zf) goto L_1202424c;
L_1202405b:;
  /* 1202405b mov esi, esp */
  ESI = (ESP);
  /* 1202405d push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1202405f call dword ptr [0x12055460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055460))), 0x12024065u);
  /* 12024065 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024068 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202406a call 0x12025c50 */
  push32(0x1202406fu); f_12025c50();
  /* 1202406f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12024074 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12024076 je 0x120240ff */
  if (C.zf) goto L_120240ff;
  /* 1202407c mov esi, esp */
  ESI = (ESP);
  /* 1202407e push 0x120523e8 */
  push32((uint32_t)(0x120523e8u));
  /* 12024083 call dword ptr [0x120554ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554ac))), 0x12024089u);
  /* 12024089 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202408c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202408e call 0x12025c50 */
  push32(0x12024093u); f_12025c50();
  /* 12024093 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12024095 jle 0x120240ff */
  if ((C.zf||C.sf!=C.of)) goto L_120240ff;
  /* 12024097 mov esi, esp */
  ESI = (ESP);
  /* 12024099 push 0x12052458 */
  push32((uint32_t)(0x12052458u));
  /* 1202409e call dword ptr [0x120554ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554ac))), 0x120240a4u);
  /* 120240a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120240a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120240a9 call 0x12025c50 */
  push32(0x120240aeu); f_12025c50();
  /* 120240ae cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120240b1 jge 0x120240ff */
  if ((C.sf==C.of)) goto L_120240ff;
  /* 120240b3 mov esi, esp */
  ESI = (ESP);
  /* 120240b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 120240b7 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 120240b9 call dword ptr [0x12055464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055464))), 0x120240bfu);
  /* 120240bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120240c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120240c4 call 0x12025c50 */
  push32(0x120240c9u); f_12025c50();
  /* 120240c9 mov esi, esp */
  ESI = (ESP);
  /* 120240cb push 0 */
  push32((uint32_t)(0x0u));
  /* 120240cd call dword ptr [0x12055478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055478))), 0x120240d3u);
  /* 120240d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120240d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120240d8 call 0x12025c50 */
  push32(0x120240ddu); f_12025c50();
  /* 120240dd mov edx, 5 */
  EDX = (0x5u);
  /* 120240e2 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120240e4 imul edx, edx, 0x258 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x258u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120240ea mov esi, esp */
  ESI = (ESP);
  /* 120240ec push edx */
  push32((uint32_t)(EDX));
  /* 120240ed push 6 */
  push32((uint32_t)(0x6u));
  /* 120240ef call dword ptr [0x12055490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055490))), 0x120240f5u);
  /* 120240f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120240f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120240fa call 0x12025c50 */
  push32(0x120240ffu); f_12025c50();
L_120240ff:;
  /* 120240ff mov esi, esp */
  ESI = (ESP);
  /* 12024101 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12024103 call dword ptr [0x12055460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055460))), 0x12024109u);
  /* 12024109 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202410c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202410e call 0x12025c50 */
  push32(0x12024113u); f_12025c50();
  /* 12024113 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12024118 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202411a je 0x120241a3 */
  if (C.zf) goto L_120241a3;
  /* 12024120 mov esi, esp */
  ESI = (ESP);
  /* 12024122 push 0x120523e0 */
  push32((uint32_t)(0x120523e0u));
  /* 12024127 call dword ptr [0x120554ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554ac))), 0x1202412du);
  /* 1202412d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024130 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024132 call 0x12025c50 */
  push32(0x12024137u); f_12025c50();
  /* 12024137 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12024139 jle 0x120241a3 */
  if ((C.zf||C.sf!=C.of)) goto L_120241a3;
  /* 1202413b mov esi, esp */
  ESI = (ESP);
  /* 1202413d push 0x12052470 */
  push32((uint32_t)(0x12052470u));
  /* 12024142 call dword ptr [0x120554ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554ac))), 0x12024148u);
  /* 12024148 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202414b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202414d call 0x12025c50 */
  push32(0x12024152u); f_12025c50();
  /* 12024152 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024155 jge 0x120241a3 */
  if ((C.sf==C.of)) goto L_120241a3;
  /* 12024157 mov esi, esp */
  ESI = (ESP);
  /* 12024159 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202415b push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1202415d call dword ptr [0x12055464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055464))), 0x12024163u);
  /* 12024163 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024166 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024168 call 0x12025c50 */
  push32(0x1202416du); f_12025c50();
  /* 1202416d mov esi, esp */
  ESI = (ESP);
  /* 1202416f push 0 */
  push32((uint32_t)(0x0u));
  /* 12024171 call dword ptr [0x12055478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055478))), 0x12024177u);
  /* 12024177 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202417a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202417c call 0x12025c50 */
  push32(0x12024181u); f_12025c50();
  /* 12024181 mov ecx, 5 */
  ECX = (0x5u);
  /* 12024186 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12024188 imul ecx, ecx, 0x258 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x258u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202418e mov esi, esp */
  ESI = (ESP);
  /* 12024190 push ecx */
  push32((uint32_t)(ECX));
  /* 12024191 push 7 */
  push32((uint32_t)(0x7u));
  /* 12024193 call dword ptr [0x12055490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055490))), 0x12024199u);
  /* 12024199 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202419c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202419e call 0x12025c50 */
  push32(0x120241a3u); f_12025c50();
L_120241a3:;
  /* 120241a3 mov esi, esp */
  ESI = (ESP);
  /* 120241a5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 120241a7 call dword ptr [0x12055460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055460))), 0x120241adu);
  /* 120241ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120241b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120241b2 call 0x12025c50 */
  push32(0x120241b7u); f_12025c50();
  /* 120241b7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120241bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120241be je 0x12024247 */
  if (C.zf) goto L_12024247;
  /* 120241c4 mov esi, esp */
  ESI = (ESP);
  /* 120241c6 push 0x120523f0 */
  push32((uint32_t)(0x120523f0u));
  /* 120241cb call dword ptr [0x120554ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554ac))), 0x120241d1u);
  /* 120241d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120241d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120241d6 call 0x12025c50 */
  push32(0x120241dbu); f_12025c50();
  /* 120241db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120241dd jle 0x12024247 */
  if ((C.zf||C.sf!=C.of)) goto L_12024247;
  /* 120241df mov esi, esp */
  ESI = (ESP);
  /* 120241e1 push 0x12052418 */
  push32((uint32_t)(0x12052418u));
  /* 120241e6 call dword ptr [0x120554ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554ac))), 0x120241ecu);
  /* 120241ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120241ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120241f1 call 0x12025c50 */
  push32(0x120241f6u); f_12025c50();
  /* 120241f6 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120241f9 jge 0x12024247 */
  if ((C.sf==C.of)) goto L_12024247;
  /* 120241fb mov esi, esp */
  ESI = (ESP);
  /* 120241fd push 0 */
  push32((uint32_t)(0x0u));
  /* 120241ff push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12024201 call dword ptr [0x12055464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055464))), 0x12024207u);
  /* 12024207 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202420a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202420c call 0x12025c50 */
  push32(0x12024211u); f_12025c50();
  /* 12024211 mov esi, esp */
  ESI = (ESP);
  /* 12024213 push 0 */
  push32((uint32_t)(0x0u));
  /* 12024215 call dword ptr [0x12055478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055478))), 0x1202421bu);
  /* 1202421b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202421e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024220 call 0x12025c50 */
  push32(0x12024225u); f_12025c50();
  /* 12024225 mov edx, 5 */
  EDX = (0x5u);
  /* 1202422a sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202422c imul edx, edx, 0x258 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x258u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12024232 mov esi, esp */
  ESI = (ESP);
  /* 12024234 push edx */
  push32((uint32_t)(EDX));
  /* 12024235 push 8 */
  push32((uint32_t)(0x8u));
  /* 12024237 call dword ptr [0x12055490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055490))), 0x1202423du);
  /* 1202423d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024240 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024242 call 0x12025c50 */
  push32(0x12024247u); f_12025c50();
L_12024247:;
  /* 12024247 jmp 0x12024435 */
  goto L_12024435;
L_1202424c:;
  /* 1202424c mov esi, esp */
  ESI = (ESP);
  /* 1202424e push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12024250 call dword ptr [0x12055460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055460))), 0x12024256u);
  /* 12024256 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024259 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202425b call 0x12025c50 */
  push32(0x12024260u); f_12025c50();
  /* 12024260 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12024265 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12024267 je 0x120242ef */
  if (C.zf) goto L_120242ef;
  /* 1202426d mov esi, esp */
  ESI = (ESP);
  /* 1202426f push 0x120523e8 */
  push32((uint32_t)(0x120523e8u));
  /* 12024274 call dword ptr [0x120554ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554ac))), 0x1202427au);
  /* 1202427a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202427d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202427f call 0x12025c50 */
  push32(0x12024284u); f_12025c50();
  /* 12024284 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12024286 jle 0x120242ef */
  if ((C.zf||C.sf!=C.of)) goto L_120242ef;
  /* 12024288 mov esi, esp */
  ESI = (ESP);
  /* 1202428a push 0x12052458 */
  push32((uint32_t)(0x12052458u));
  /* 1202428f call dword ptr [0x120554ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554ac))), 0x12024295u);
  /* 12024295 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024298 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202429a call 0x12025c50 */
  push32(0x1202429fu); f_12025c50();
  /* 1202429f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120242a1 jne 0x120242ef */
  if (!C.zf) goto L_120242ef;
  /* 120242a3 mov esi, esp */
  ESI = (ESP);
  /* 120242a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 120242a7 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 120242a9 call dword ptr [0x12055464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055464))), 0x120242afu);
  /* 120242af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120242b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120242b4 call 0x12025c50 */
  push32(0x120242b9u); f_12025c50();
  /* 120242b9 mov esi, esp */
  ESI = (ESP);
  /* 120242bb push 0 */
  push32((uint32_t)(0x0u));
  /* 120242bd call dword ptr [0x12055478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055478))), 0x120242c3u);
  /* 120242c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120242c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120242c8 call 0x12025c50 */
  push32(0x120242cdu); f_12025c50();
  /* 120242cd mov ecx, 5 */
  ECX = (0x5u);
  /* 120242d2 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120242d4 imul ecx, ecx, 0x258 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x258u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120242da mov esi, esp */
  ESI = (ESP);
  /* 120242dc push ecx */
  push32((uint32_t)(ECX));
  /* 120242dd push 6 */
  push32((uint32_t)(0x6u));
  /* 120242df call dword ptr [0x12055490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055490))), 0x120242e5u);
  /* 120242e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120242e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120242ea call 0x12025c50 */
  push32(0x120242efu); f_12025c50();
L_120242ef:;
  /* 120242ef mov esi, esp */
  ESI = (ESP);
  /* 120242f1 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 120242f3 call dword ptr [0x12055460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055460))), 0x120242f9u);
  /* 120242f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120242fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120242fe call 0x12025c50 */
  push32(0x12024303u); f_12025c50();
  /* 12024303 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12024308 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202430a je 0x12024392 */
  if (C.zf) goto L_12024392;
  /* 12024310 mov esi, esp */
  ESI = (ESP);
  /* 12024312 push 0x120523e0 */
  push32((uint32_t)(0x120523e0u));
  /* 12024317 call dword ptr [0x120554ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554ac))), 0x1202431du);
  /* 1202431d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024320 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024322 call 0x12025c50 */
  push32(0x12024327u); f_12025c50();
  /* 12024327 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12024329 jle 0x12024392 */
  if ((C.zf||C.sf!=C.of)) goto L_12024392;
  /* 1202432b mov esi, esp */
  ESI = (ESP);
  /* 1202432d push 0x12052470 */
  push32((uint32_t)(0x12052470u));
  /* 12024332 call dword ptr [0x120554ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554ac))), 0x12024338u);
  /* 12024338 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202433b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202433d call 0x12025c50 */
  push32(0x12024342u); f_12025c50();
  /* 12024342 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12024344 jne 0x12024392 */
  if (!C.zf) goto L_12024392;
  /* 12024346 mov esi, esp */
  ESI = (ESP);
  /* 12024348 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202434a push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1202434c call dword ptr [0x12055464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055464))), 0x12024352u);
  /* 12024352 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024355 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024357 call 0x12025c50 */
  push32(0x1202435cu); f_12025c50();
  /* 1202435c mov esi, esp */
  ESI = (ESP);
  /* 1202435e push 0 */
  push32((uint32_t)(0x0u));
  /* 12024360 call dword ptr [0x12055478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055478))), 0x12024366u);
  /* 12024366 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024369 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202436b call 0x12025c50 */
  push32(0x12024370u); f_12025c50();
  /* 12024370 mov edx, 5 */
  EDX = (0x5u);
  /* 12024375 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12024377 imul edx, edx, 0x258 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x258u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202437d mov esi, esp */
  ESI = (ESP);
  /* 1202437f push edx */
  push32((uint32_t)(EDX));
  /* 12024380 push 7 */
  push32((uint32_t)(0x7u));
  /* 12024382 call dword ptr [0x12055490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055490))), 0x12024388u);
  /* 12024388 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202438b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202438d call 0x12025c50 */
  push32(0x12024392u); f_12025c50();
L_12024392:;
  /* 12024392 mov esi, esp */
  ESI = (ESP);
  /* 12024394 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12024396 call dword ptr [0x12055460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055460))), 0x1202439cu);
  /* 1202439c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202439f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120243a1 call 0x12025c50 */
  push32(0x120243a6u); f_12025c50();
  /* 120243a6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120243ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120243ad je 0x12024435 */
  if (C.zf) goto L_12024435;
  /* 120243b3 mov esi, esp */
  ESI = (ESP);
  /* 120243b5 push 0x120523f0 */
  push32((uint32_t)(0x120523f0u));
  /* 120243ba call dword ptr [0x120554ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554ac))), 0x120243c0u);
  /* 120243c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120243c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120243c5 call 0x12025c50 */
  push32(0x120243cau); f_12025c50();
  /* 120243ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120243cc jle 0x12024435 */
  if ((C.zf||C.sf!=C.of)) goto L_12024435;
  /* 120243ce mov esi, esp */
  ESI = (ESP);
  /* 120243d0 push 0x12052418 */
  push32((uint32_t)(0x12052418u));
  /* 120243d5 call dword ptr [0x120554ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554ac))), 0x120243dbu);
  /* 120243db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120243de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120243e0 call 0x12025c50 */
  push32(0x120243e5u); f_12025c50();
  /* 120243e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120243e7 jne 0x12024435 */
  if (!C.zf) goto L_12024435;
  /* 120243e9 mov esi, esp */
  ESI = (ESP);
  /* 120243eb push 0 */
  push32((uint32_t)(0x0u));
  /* 120243ed push 0x19 */
  push32((uint32_t)(0x19u));
  /* 120243ef call dword ptr [0x12055464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055464))), 0x120243f5u);
  /* 120243f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120243f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120243fa call 0x12025c50 */
  push32(0x120243ffu); f_12025c50();
  /* 120243ff mov esi, esp */
  ESI = (ESP);
  /* 12024401 push 0 */
  push32((uint32_t)(0x0u));
  /* 12024403 call dword ptr [0x12055478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055478))), 0x12024409u);
  /* 12024409 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202440c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202440e call 0x12025c50 */
  push32(0x12024413u); f_12025c50();
  /* 12024413 mov ecx, 5 */
  ECX = (0x5u);
  /* 12024418 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202441a imul ecx, ecx, 0x258 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x258u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12024420 mov esi, esp */
  ESI = (ESP);
  /* 12024422 push ecx */
  push32((uint32_t)(ECX));
  /* 12024423 push 8 */
  push32((uint32_t)(0x8u));
  /* 12024425 call dword ptr [0x12055490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055490))), 0x1202442bu);
  /* 1202442b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202442e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024430 call 0x12025c50 */
  push32(0x12024435u); f_12025c50();
L_12024435:;
  /* 12024435 mov esi, esp */
  ESI = (ESP);
  /* 12024437 push 0xe */
  push32((uint32_t)(0xeu));
  /* 12024439 call dword ptr [0x12055498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055498))), 0x1202443fu);
  /* 1202443f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024442 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024444 call 0x12025c50 */
  push32(0x12024449u); f_12025c50();
  /* 12024449 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1202444e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12024450 je 0x120244ce */
  if (C.zf) goto L_120244ce;
  /* 12024452 mov esi, esp */
  ESI = (ESP);
  /* 12024454 push 1 */
  push32((uint32_t)(0x1u));
  /* 12024456 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12024458 call dword ptr [0x12055464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055464))), 0x1202445eu);
  /* 1202445e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024461 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024463 call 0x12025c50 */
  push32(0x12024468u); f_12025c50();
  /* 12024468 mov esi, esp */
  ESI = (ESP);
  /* 1202446a push 0x12052458 */
  push32((uint32_t)(0x12052458u));
  /* 1202446f push 0x12052410 */
  push32((uint32_t)(0x12052410u));
  /* 12024474 call dword ptr [0x120554d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554d0))), 0x1202447au);
  /* 1202447a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202447d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202447f call 0x12025c50 */
  push32(0x12024484u); f_12025c50();
  /* 12024484 mov esi, esp */
  ESI = (ESP);
  /* 12024486 push 0 */
  push32((uint32_t)(0x0u));
  /* 12024488 push 0x12052458 */
  push32((uint32_t)(0x12052458u));
  /* 1202448d call dword ptr [0x12055480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055480))), 0x12024493u);
  /* 12024493 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024496 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024498 call 0x12025c50 */
  push32(0x1202449du); f_12025c50();
  /* 1202449d mov esi, esp */
  ESI = (ESP);
  /* 1202449f push 0 */
  push32((uint32_t)(0x0u));
  /* 120244a1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 120244a3 push 0x12052688 */
  push32((uint32_t)(0x12052688u));
  /* 120244a8 push 4 */
  push32((uint32_t)(0x4u));
  /* 120244aa call dword ptr [0x120554e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554e0))), 0x120244b0u);
  /* 120244b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120244b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120244b5 call 0x12025c50 */
  push32(0x120244bau); f_12025c50();
  /* 120244ba mov esi, esp */
  ESI = (ESP);
  /* 120244bc push 4 */
  push32((uint32_t)(0x4u));
  /* 120244be call dword ptr [0x12055488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055488))), 0x120244c4u);
  /* 120244c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120244c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120244c9 call 0x12025c50 */
  push32(0x120244ceu); f_12025c50();
L_120244ce:;
  /* 120244ce mov esi, esp */
  ESI = (ESP);
  /* 120244d0 push 0xf */
  push32((uint32_t)(0xfu));
  /* 120244d2 call dword ptr [0x12055498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055498))), 0x120244d8u);
  /* 120244d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120244db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120244dd call 0x12025c50 */
  push32(0x120244e2u); f_12025c50();
  /* 120244e2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120244e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120244e9 je 0x12024565 */
  if (C.zf) goto L_12024565;
  /* 120244eb mov esi, esp */
  ESI = (ESP);
  /* 120244ed push 1 */
  push32((uint32_t)(0x1u));
  /* 120244ef push 0x18 */
  push32((uint32_t)(0x18u));
  /* 120244f1 call dword ptr [0x12055464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055464))), 0x120244f7u);
  /* 120244f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120244fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120244fc call 0x12025c50 */
  push32(0x12024501u); f_12025c50();
  /* 12024501 mov esi, esp */
  ESI = (ESP);
  /* 12024503 push 0x12052470 */
  push32((uint32_t)(0x12052470u));
  /* 12024508 push 0x12052428 */
  push32((uint32_t)(0x12052428u));
  /* 1202450d call dword ptr [0x120554d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554d0))), 0x12024513u);
  /* 12024513 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024516 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024518 call 0x12025c50 */
  push32(0x1202451du); f_12025c50();
  /* 1202451d mov esi, esp */
  ESI = (ESP);
  /* 1202451f push 0 */
  push32((uint32_t)(0x0u));
  /* 12024521 push 0x12052470 */
  push32((uint32_t)(0x12052470u));
  /* 12024526 call dword ptr [0x12055480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055480))), 0x1202452cu);
  /* 1202452c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202452f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024531 call 0x12025c50 */
  push32(0x12024536u); f_12025c50();
  /* 12024536 mov esi, esp */
  ESI = (ESP);
  /* 12024538 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202453a push 0x12052680 */
  push32((uint32_t)(0x12052680u));
  /* 1202453f push 4 */
  push32((uint32_t)(0x4u));
  /* 12024541 call dword ptr [0x120554b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554b4))), 0x12024547u);
  /* 12024547 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202454a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202454c call 0x12025c50 */
  push32(0x12024551u); f_12025c50();
  /* 12024551 mov esi, esp */
  ESI = (ESP);
  /* 12024553 push 4 */
  push32((uint32_t)(0x4u));
  /* 12024555 call dword ptr [0x12055488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055488))), 0x1202455bu);
  /* 1202455b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202455e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024560 call 0x12025c50 */
  push32(0x12024565u); f_12025c50();
L_12024565:;
  /* 12024565 mov esi, esp */
  ESI = (ESP);
  /* 12024567 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12024569 call dword ptr [0x12055498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055498))), 0x1202456fu);
  /* 1202456f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024572 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024574 call 0x12025c50 */
  push32(0x12024579u); f_12025c50();
  /* 12024579 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1202457e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12024580 je 0x12024601 */
  if (C.zf) goto L_12024601;
  /* 12024582 mov esi, esp */
  ESI = (ESP);
  /* 12024584 push 1 */
  push32((uint32_t)(0x1u));
  /* 12024586 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12024588 call dword ptr [0x12055464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055464))), 0x1202458eu);
  /* 1202458e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024591 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024593 call 0x12025c50 */
  push32(0x12024598u); f_12025c50();
  /* 12024598 mov esi, esp */
  ESI = (ESP);
  /* 1202459a push 0x12052418 */
  push32((uint32_t)(0x12052418u));
  /* 1202459f push 0x12052420 */
  push32((uint32_t)(0x12052420u));
  /* 120245a4 call dword ptr [0x120554d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554d0))), 0x120245aau);
  /* 120245aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120245ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120245af call 0x12025c50 */
  push32(0x120245b4u); f_12025c50();
  /* 120245b4 mov esi, esp */
  ESI = (ESP);
  /* 120245b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 120245b8 push 0x12052418 */
  push32((uint32_t)(0x12052418u));
  /* 120245bd call dword ptr [0x12055480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055480))), 0x120245c3u);
  /* 120245c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120245c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120245c8 call 0x12025c50 */
  push32(0x120245cdu); f_12025c50();
  /* 120245cd mov esi, esp */
  ESI = (ESP);
  /* 120245cf push 0 */
  push32((uint32_t)(0x0u));
  /* 120245d1 push 0xe6 */
  push32((uint32_t)(0xe6u));
  /* 120245d6 push 0x12052678 */
  push32((uint32_t)(0x12052678u));
  /* 120245db push 4 */
  push32((uint32_t)(0x4u));
  /* 120245dd call dword ptr [0x120554e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554e0))), 0x120245e3u);
  /* 120245e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120245e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120245e8 call 0x12025c50 */
  push32(0x120245edu); f_12025c50();
  /* 120245ed mov esi, esp */
  ESI = (ESP);
  /* 120245ef push 4 */
  push32((uint32_t)(0x4u));
  /* 120245f1 call dword ptr [0x12055488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055488))), 0x120245f7u);
  /* 120245f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120245fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120245fc call 0x12025c50 */
  push32(0x12024601u); f_12025c50();
L_12024601:;
  /* 12024601 mov esi, esp */
  ESI = (ESP);
  /* 12024603 push 0 */
  push32((uint32_t)(0x0u));
  /* 12024605 call dword ptr [0x12055478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055478))), 0x1202460bu);
  /* 1202460b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202460e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024610 call 0x12025c50 */
  push32(0x12024615u); f_12025c50();
  /* 12024615 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12024618 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202461c je 0x1202462d */
  if (C.zf) goto L_1202462d;
  /* 1202461e cmp dword ptr [ebp - 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024622 je 0x1202473d */
  if (C.zf) goto L_1202473d;
  /* 12024628 jmp 0x1202484d */
  goto L_1202484d;
L_1202462d:;
  /* 1202462d mov esi, esp */
  ESI = (ESP);
  /* 1202462f push 6 */
  push32((uint32_t)(0x6u));
  /* 12024631 call dword ptr [0x12055498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055498))), 0x12024637u);
  /* 12024637 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202463a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202463c call 0x12025c50 */
  push32(0x12024641u); f_12025c50();
  /* 12024641 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12024646 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12024648 je 0x12024686 */
  if (C.zf) goto L_12024686;
  /* 1202464a mov esi, esp */
  ESI = (ESP);
  /* 1202464c push 1 */
  push32((uint32_t)(0x1u));
  /* 1202464e push 0x12052410 */
  push32((uint32_t)(0x12052410u));
  /* 12024653 push 0x12052408 */
  push32((uint32_t)(0x12052408u));
  /* 12024658 push 0x120523e8 */
  push32((uint32_t)(0x120523e8u));
  /* 1202465d call dword ptr [0x120554c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554c0))), 0x12024663u);
  /* 12024663 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024666 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024668 call 0x12025c50 */
  push32(0x1202466du); f_12025c50();
  /* 1202466d mov esi, esp */
  ESI = (ESP);
  /* 1202466f push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 12024674 push 0xe */
  push32((uint32_t)(0xeu));
  /* 12024676 call dword ptr [0x12055490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055490))), 0x1202467cu);
  /* 1202467c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202467f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024681 call 0x12025c50 */
  push32(0x12024686u); f_12025c50();
L_12024686:;
  /* 12024686 mov esi, esp */
  ESI = (ESP);
  /* 12024688 push 7 */
  push32((uint32_t)(0x7u));
  /* 1202468a call dword ptr [0x12055498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055498))), 0x12024690u);
  /* 12024690 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024693 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024695 call 0x12025c50 */
  push32(0x1202469au); f_12025c50();
  /* 1202469a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1202469f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120246a1 je 0x120246df */
  if (C.zf) goto L_120246df;
  /* 120246a3 mov esi, esp */
  ESI = (ESP);
  /* 120246a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 120246a7 push 0x12052428 */
  push32((uint32_t)(0x12052428u));
  /* 120246ac push 0x12052408 */
  push32((uint32_t)(0x12052408u));
  /* 120246b1 push 0x120523e0 */
  push32((uint32_t)(0x120523e0u));
  /* 120246b6 call dword ptr [0x120554c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554c0))), 0x120246bcu);
  /* 120246bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120246bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120246c1 call 0x12025c50 */
  push32(0x120246c6u); f_12025c50();
  /* 120246c6 mov esi, esp */
  ESI = (ESP);
  /* 120246c8 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 120246cd push 0xf */
  push32((uint32_t)(0xfu));
  /* 120246cf call dword ptr [0x12055490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055490))), 0x120246d5u);
  /* 120246d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120246d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120246da call 0x12025c50 */
  push32(0x120246dfu); f_12025c50();
L_120246df:;
  /* 120246df mov esi, esp */
  ESI = (ESP);
  /* 120246e1 push 8 */
  push32((uint32_t)(0x8u));
  /* 120246e3 call dword ptr [0x12055498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055498))), 0x120246e9u);
  /* 120246e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120246ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120246ee call 0x12025c50 */
  push32(0x120246f3u); f_12025c50();
  /* 120246f3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120246f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120246fa je 0x12024738 */
  if (C.zf) goto L_12024738;
  /* 120246fc mov esi, esp */
  ESI = (ESP);
  /* 120246fe push 1 */
  push32((uint32_t)(0x1u));
  /* 12024700 push 0x12052420 */
  push32((uint32_t)(0x12052420u));
  /* 12024705 push 0x12052408 */
  push32((uint32_t)(0x12052408u));
  /* 1202470a push 0x120523f0 */
  push32((uint32_t)(0x120523f0u));
  /* 1202470f call dword ptr [0x120554c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554c0))), 0x12024715u);
  /* 12024715 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024718 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202471a call 0x12025c50 */
  push32(0x1202471fu); f_12025c50();
  /* 1202471f mov esi, esp */
  ESI = (ESP);
  /* 12024721 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 12024726 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12024728 call dword ptr [0x12055490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055490))), 0x1202472eu);
  /* 1202472e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024731 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024733 call 0x12025c50 */
  push32(0x12024738u); f_12025c50();
L_12024738:;
  /* 12024738 jmp 0x12024958 */
  goto L_12024958;
L_1202473d:;
  /* 1202473d mov esi, esp */
  ESI = (ESP);
  /* 1202473f push 6 */
  push32((uint32_t)(0x6u));
  /* 12024741 call dword ptr [0x12055498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055498))), 0x12024747u);
  /* 12024747 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202474a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202474c call 0x12025c50 */
  push32(0x12024751u); f_12025c50();
  /* 12024751 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12024756 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12024758 je 0x12024796 */
  if (C.zf) goto L_12024796;
  /* 1202475a mov esi, esp */
  ESI = (ESP);
  /* 1202475c push 1 */
  push32((uint32_t)(0x1u));
  /* 1202475e push 0x12052410 */
  push32((uint32_t)(0x12052410u));
  /* 12024763 push 0x12052408 */
  push32((uint32_t)(0x12052408u));
  /* 12024768 push 0x120523e8 */
  push32((uint32_t)(0x120523e8u));
  /* 1202476d call dword ptr [0x120554c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554c0))), 0x12024773u);
  /* 12024773 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024776 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024778 call 0x12025c50 */
  push32(0x1202477du); f_12025c50();
  /* 1202477d mov esi, esp */
  ESI = (ESP);
  /* 1202477f push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 12024784 push 0xe */
  push32((uint32_t)(0xeu));
  /* 12024786 call dword ptr [0x12055490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055490))), 0x1202478cu);
  /* 1202478c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202478f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024791 call 0x12025c50 */
  push32(0x12024796u); f_12025c50();
L_12024796:;
  /* 12024796 mov esi, esp */
  ESI = (ESP);
  /* 12024798 push 7 */
  push32((uint32_t)(0x7u));
  /* 1202479a call dword ptr [0x12055498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055498))), 0x120247a0u);
  /* 120247a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120247a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120247a5 call 0x12025c50 */
  push32(0x120247aau); f_12025c50();
  /* 120247aa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120247af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120247b1 je 0x120247ef */
  if (C.zf) goto L_120247ef;
  /* 120247b3 mov esi, esp */
  ESI = (ESP);
  /* 120247b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 120247b7 push 0x12052428 */
  push32((uint32_t)(0x12052428u));
  /* 120247bc push 0x12052408 */
  push32((uint32_t)(0x12052408u));
  /* 120247c1 push 0x120523e0 */
  push32((uint32_t)(0x120523e0u));
  /* 120247c6 call dword ptr [0x120554c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554c0))), 0x120247ccu);
  /* 120247cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120247cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120247d1 call 0x12025c50 */
  push32(0x120247d6u); f_12025c50();
  /* 120247d6 mov esi, esp */
  ESI = (ESP);
  /* 120247d8 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 120247dd push 0xf */
  push32((uint32_t)(0xfu));
  /* 120247df call dword ptr [0x12055490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055490))), 0x120247e5u);
  /* 120247e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120247e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120247ea call 0x12025c50 */
  push32(0x120247efu); f_12025c50();
L_120247ef:;
  /* 120247ef mov esi, esp */
  ESI = (ESP);
  /* 120247f1 push 8 */
  push32((uint32_t)(0x8u));
  /* 120247f3 call dword ptr [0x12055498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055498))), 0x120247f9u);
  /* 120247f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120247fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120247fe call 0x12025c50 */
  push32(0x12024803u); f_12025c50();
  /* 12024803 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12024808 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202480a je 0x12024848 */
  if (C.zf) goto L_12024848;
  /* 1202480c mov esi, esp */
  ESI = (ESP);
  /* 1202480e push 1 */
  push32((uint32_t)(0x1u));
  /* 12024810 push 0x12052420 */
  push32((uint32_t)(0x12052420u));
  /* 12024815 push 0x12052408 */
  push32((uint32_t)(0x12052408u));
  /* 1202481a push 0x120523f0 */
  push32((uint32_t)(0x120523f0u));
  /* 1202481f call dword ptr [0x120554c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554c0))), 0x12024825u);
  /* 12024825 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024828 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202482a call 0x12025c50 */
  push32(0x1202482fu); f_12025c50();
  /* 1202482f mov esi, esp */
  ESI = (ESP);
  /* 12024831 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 12024836 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12024838 call dword ptr [0x12055490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055490))), 0x1202483eu);
  /* 1202483e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024841 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024843 call 0x12025c50 */
  push32(0x12024848u); f_12025c50();
L_12024848:;
  /* 12024848 jmp 0x12024958 */
  goto L_12024958;
L_1202484d:;
  /* 1202484d mov esi, esp */
  ESI = (ESP);
  /* 1202484f push 6 */
  push32((uint32_t)(0x6u));
  /* 12024851 call dword ptr [0x12055498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055498))), 0x12024857u);
  /* 12024857 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202485a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202485c call 0x12025c50 */
  push32(0x12024861u); f_12025c50();
  /* 12024861 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12024866 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12024868 je 0x120248a6 */
  if (C.zf) goto L_120248a6;
  /* 1202486a mov esi, esp */
  ESI = (ESP);
  /* 1202486c push 1 */
  push32((uint32_t)(0x1u));
  /* 1202486e push 0x12052410 */
  push32((uint32_t)(0x12052410u));
  /* 12024873 push 0x12052590 */
  push32((uint32_t)(0x12052590u));
  /* 12024878 push 0x120523e8 */
  push32((uint32_t)(0x120523e8u));
  /* 1202487d call dword ptr [0x120554c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554c0))), 0x12024883u);
  /* 12024883 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024886 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024888 call 0x12025c50 */
  push32(0x1202488du); f_12025c50();
  /* 1202488d mov esi, esp */
  ESI = (ESP);
  /* 1202488f push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 12024894 push 0xe */
  push32((uint32_t)(0xeu));
  /* 12024896 call dword ptr [0x12055490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055490))), 0x1202489cu);
  /* 1202489c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202489f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120248a1 call 0x12025c50 */
  push32(0x120248a6u); f_12025c50();
L_120248a6:;
  /* 120248a6 mov esi, esp */
  ESI = (ESP);
  /* 120248a8 push 7 */
  push32((uint32_t)(0x7u));
  /* 120248aa call dword ptr [0x12055498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055498))), 0x120248b0u);
  /* 120248b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120248b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120248b5 call 0x12025c50 */
  push32(0x120248bau); f_12025c50();
  /* 120248ba and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120248bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120248c1 je 0x120248ff */
  if (C.zf) goto L_120248ff;
  /* 120248c3 mov esi, esp */
  ESI = (ESP);
  /* 120248c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 120248c7 push 0x12052428 */
  push32((uint32_t)(0x12052428u));
  /* 120248cc push 0x12052590 */
  push32((uint32_t)(0x12052590u));
  /* 120248d1 push 0x120523e0 */
  push32((uint32_t)(0x120523e0u));
  /* 120248d6 call dword ptr [0x120554c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554c0))), 0x120248dcu);
  /* 120248dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120248df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120248e1 call 0x12025c50 */
  push32(0x120248e6u); f_12025c50();
  /* 120248e6 mov esi, esp */
  ESI = (ESP);
  /* 120248e8 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 120248ed push 0xf */
  push32((uint32_t)(0xfu));
  /* 120248ef call dword ptr [0x12055490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055490))), 0x120248f5u);
  /* 120248f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120248f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120248fa call 0x12025c50 */
  push32(0x120248ffu); f_12025c50();
L_120248ff:;
  /* 120248ff mov esi, esp */
  ESI = (ESP);
  /* 12024901 push 8 */
  push32((uint32_t)(0x8u));
  /* 12024903 call dword ptr [0x12055498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055498))), 0x12024909u);
  /* 12024909 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202490c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202490e call 0x12025c50 */
  push32(0x12024913u); f_12025c50();
  /* 12024913 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12024918 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202491a je 0x12024958 */
  if (C.zf) goto L_12024958;
  /* 1202491c mov esi, esp */
  ESI = (ESP);
  /* 1202491e push 1 */
  push32((uint32_t)(0x1u));
  /* 12024920 push 0x12052420 */
  push32((uint32_t)(0x12052420u));
  /* 12024925 push 0x12052590 */
  push32((uint32_t)(0x12052590u));
  /* 1202492a push 0x120523f0 */
  push32((uint32_t)(0x120523f0u));
  /* 1202492f call dword ptr [0x120554c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554c0))), 0x12024935u);
  /* 12024935 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024938 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202493a call 0x12025c50 */
  push32(0x1202493fu); f_12025c50();
  /* 1202493f mov esi, esp */
  ESI = (ESP);
  /* 12024941 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 12024946 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12024948 call dword ptr [0x12055490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055490))), 0x1202494eu);
  /* 1202494e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024951 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024953 call 0x12025c50 */
  push32(0x12024958u); f_12025c50();
L_12024958:;
  /* 12024958 mov esi, esp */
  ESI = (ESP);
  /* 1202495a push 0xd */
  push32((uint32_t)(0xdu));
  /* 1202495c call dword ptr [0x12055498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055498))), 0x12024962u);
  /* 12024962 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024965 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024967 call 0x12025c50 */
  push32(0x1202496cu); f_12025c50();
  /* 1202496c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12024971 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12024973 je 0x12024b5f */
  if (C.zf) goto L_12024b5f;
  /* 12024979 mov esi, esp */
  ESI = (ESP);
  /* 1202497b push 4 */
  push32((uint32_t)(0x4u));
  /* 1202497d call dword ptr [0x12055460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055460))), 0x12024983u);
  /* 12024983 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024986 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024988 call 0x12025c50 */
  push32(0x1202498du); f_12025c50();
  /* 1202498d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12024992 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12024994 je 0x12024b5f */
  if (C.zf) goto L_12024b5f;
  /* 1202499a mov esi, esp */
  ESI = (ESP);
  /* 1202499c push 0 */
  push32((uint32_t)(0x0u));
  /* 1202499e call dword ptr [0x12055478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055478))), 0x120249a4u);
  /* 120249a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120249a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120249a9 call 0x12025c50 */
  push32(0x120249aeu); f_12025c50();
  /* 120249ae mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 120249b1 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120249b5 ja 0x12024b26 */
  if ((!C.cf&&!C.zf)) goto L_12024b26;
  /* 120249bb mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120249be jmp dword ptr [edx*4 + 0x12024ffb] */
  switch (EDX) {
    case 0: goto L_120249c5;
    case 1: goto L_12024a1d;
    case 2: goto L_12024a78;
    case 3: goto L_12024ad0;
    default: x86_unimpl("switch@0x120249be out of table"); return;
  }
L_120249c5:;
  /* 120249c5 mov eax, dword ptr [0x12052538] */
  EAX = (r32((uint32_t)(0x12052538)));
  /* 120249ca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120249cd mov dword ptr [0x12052538], eax */
  w32((uint32_t)(0x12052538), (EAX));
  /* 120249d2 mov ecx, dword ptr [0x12052588] */
  ECX = (r32((uint32_t)(0x12052588)));
  /* 120249d8 mov dword ptr [0x12052588], ecx */
  w32((uint32_t)(0x12052588), (ECX));
  /* 120249de mov edx, dword ptr [0x120525c8] */
  EDX = (r32((uint32_t)(0x120525c8)));
  /* 120249e4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120249e7 mov dword ptr [0x120525c8], edx */
  w32((uint32_t)(0x120525c8), (EDX));
  /* 120249ed mov eax, dword ptr [0x12052608] */
  EAX = (r32((uint32_t)(0x12052608)));
  /* 120249f2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120249f5 mov dword ptr [0x12052608], eax */
  w32((uint32_t)(0x12052608), (EAX));
  /* 120249fa mov ecx, dword ptr [0x12052650] */
  ECX = (r32((uint32_t)(0x12052650)));
  /* 12024a00 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12024a03 mov dword ptr [0x12052650], ecx */
  w32((uint32_t)(0x12052650), (ECX));
  /* 12024a09 mov edx, dword ptr [0x12052670] */
  EDX = (r32((uint32_t)(0x12052670)));
  /* 12024a0f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12024a12 mov dword ptr [0x12052670], edx */
  w32((uint32_t)(0x12052670), (EDX));
  /* 12024a18 jmp 0x12024b26 */
  goto L_12024b26;
L_12024a1d:;
  /* 12024a1d mov eax, dword ptr [0x12052538] */
  EAX = (r32((uint32_t)(0x12052538)));
  /* 12024a22 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12024a25 mov dword ptr [0x12052538], eax */
  w32((uint32_t)(0x12052538), (EAX));
  /* 12024a2a mov ecx, dword ptr [0x12052588] */
  ECX = (r32((uint32_t)(0x12052588)));
  /* 12024a30 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12024a33 mov dword ptr [0x12052588], ecx */
  w32((uint32_t)(0x12052588), (ECX));
  /* 12024a39 mov edx, dword ptr [0x120525c8] */
  EDX = (r32((uint32_t)(0x120525c8)));
  /* 12024a3f add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12024a42 mov dword ptr [0x120525c8], edx */
  w32((uint32_t)(0x120525c8), (EDX));
  /* 12024a48 mov eax, dword ptr [0x12052608] */
  EAX = (r32((uint32_t)(0x12052608)));
  /* 12024a4d add eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12024a50 mov dword ptr [0x12052608], eax */
  w32((uint32_t)(0x12052608), (EAX));
  /* 12024a55 mov ecx, dword ptr [0x12052650] */
  ECX = (r32((uint32_t)(0x12052650)));
  /* 12024a5b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12024a5e mov dword ptr [0x12052650], ecx */
  w32((uint32_t)(0x12052650), (ECX));
  /* 12024a64 mov edx, dword ptr [0x12052670] */
  EDX = (r32((uint32_t)(0x12052670)));
  /* 12024a6a add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12024a6d mov dword ptr [0x12052670], edx */
  w32((uint32_t)(0x12052670), (EDX));
  /* 12024a73 jmp 0x12024b26 */
  goto L_12024b26;
L_12024a78:;
  /* 12024a78 mov eax, dword ptr [0x12052538] */
  EAX = (r32((uint32_t)(0x12052538)));
  /* 12024a7d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12024a80 mov dword ptr [0x12052538], eax */
  w32((uint32_t)(0x12052538), (EAX));
  /* 12024a85 mov ecx, dword ptr [0x12052588] */
  ECX = (r32((uint32_t)(0x12052588)));
  /* 12024a8b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12024a8e mov dword ptr [0x12052588], ecx */
  w32((uint32_t)(0x12052588), (ECX));
  /* 12024a94 mov edx, dword ptr [0x120525c8] */
  EDX = (r32((uint32_t)(0x120525c8)));
  /* 12024a9a add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12024a9d mov dword ptr [0x120525c8], edx */
  w32((uint32_t)(0x120525c8), (EDX));
  /* 12024aa3 mov eax, dword ptr [0x12052608] */
  EAX = (r32((uint32_t)(0x12052608)));
  /* 12024aa8 add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12024aab mov dword ptr [0x12052608], eax */
  w32((uint32_t)(0x12052608), (EAX));
  /* 12024ab0 mov ecx, dword ptr [0x12052650] */
  ECX = (r32((uint32_t)(0x12052650)));
  /* 12024ab6 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12024ab9 mov dword ptr [0x12052650], ecx */
  w32((uint32_t)(0x12052650), (ECX));
  /* 12024abf mov edx, dword ptr [0x12052670] */
  EDX = (r32((uint32_t)(0x12052670)));
  /* 12024ac5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12024ac8 mov dword ptr [0x12052670], edx */
  w32((uint32_t)(0x12052670), (EDX));
  /* 12024ace jmp 0x12024b26 */
  goto L_12024b26;
L_12024ad0:;
  /* 12024ad0 mov eax, dword ptr [0x12052538] */
  EAX = (r32((uint32_t)(0x12052538)));
  /* 12024ad5 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12024ad8 mov dword ptr [0x12052538], eax */
  w32((uint32_t)(0x12052538), (EAX));
  /* 12024add mov ecx, dword ptr [0x12052588] */
  ECX = (r32((uint32_t)(0x12052588)));
  /* 12024ae3 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12024ae6 mov dword ptr [0x12052588], ecx */
  w32((uint32_t)(0x12052588), (ECX));
  /* 12024aec mov edx, dword ptr [0x120525c8] */
  EDX = (r32((uint32_t)(0x120525c8)));
  /* 12024af2 add edx, 0x1e */
  { uint32_t _a=(EDX),_b=(0x1eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12024af5 mov dword ptr [0x120525c8], edx */
  w32((uint32_t)(0x120525c8), (EDX));
  /* 12024afb mov eax, dword ptr [0x12052608] */
  EAX = (r32((uint32_t)(0x12052608)));
  /* 12024b00 add eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12024b03 mov dword ptr [0x12052608], eax */
  w32((uint32_t)(0x12052608), (EAX));
  /* 12024b08 mov ecx, dword ptr [0x12052650] */
  ECX = (r32((uint32_t)(0x12052650)));
  /* 12024b0e add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12024b11 mov dword ptr [0x12052650], ecx */
  w32((uint32_t)(0x12052650), (ECX));
  /* 12024b17 mov edx, dword ptr [0x12052670] */
  EDX = (r32((uint32_t)(0x12052670)));
  /* 12024b1d add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12024b20 mov dword ptr [0x12052670], edx */
  w32((uint32_t)(0x12052670), (EDX));
L_12024b26:;
  /* 12024b26 mov esi, esp */
  ESI = (ESP);
  /* 12024b28 push 0 */
  push32((uint32_t)(0x0u));
  /* 12024b2a call dword ptr [0x12055478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055478))), 0x12024b30u);
  /* 12024b30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024b33 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024b35 call 0x12025c50 */
  push32(0x12024b3au); f_12025c50();
  /* 12024b3a mov ecx, 5 */
  ECX = (0x5u);
  /* 12024b3f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12024b41 shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12024b44 imul ecx, ecx, 0x8fc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x8fcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12024b4a mov esi, esp */
  ESI = (ESP);
  /* 12024b4c push ecx */
  push32((uint32_t)(ECX));
  /* 12024b4d push 0xd */
  push32((uint32_t)(0xdu));
  /* 12024b4f call dword ptr [0x12055490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055490))), 0x12024b55u);
  /* 12024b55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024b58 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024b5a call 0x12025c50 */
  push32(0x12024b5fu); f_12025c50();
L_12024b5f:;
  /* 12024b5f mov esi, esp */
  ESI = (ESP);
  /* 12024b61 push 0 */
  push32((uint32_t)(0x0u));
  /* 12024b63 push 0x120526b8 */
  push32((uint32_t)(0x120526b8u));
  /* 12024b68 push 0 */
  push32((uint32_t)(0x0u));
  /* 12024b6a call dword ptr [0x120554e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554e4))), 0x12024b70u);
  /* 12024b70 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024b73 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024b75 call 0x12025c50 */
  push32(0x12024b7au); f_12025c50();
  /* 12024b7a mov esi, esp */
  ESI = (ESP);
  /* 12024b7c push 0 */
  push32((uint32_t)(0x0u));
  /* 12024b7e call dword ptr [0x12055488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055488))), 0x12024b84u);
  /* 12024b84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024b87 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024b89 call 0x12025c50 */
  push32(0x12024b8eu); f_12025c50();
  /* 12024b8e mov esi, esp */
  ESI = (ESP);
  /* 12024b90 push 0 */
  push32((uint32_t)(0x0u));
  /* 12024b92 push 0 */
  push32((uint32_t)(0x0u));
  /* 12024b94 push 0x120526b0 */
  push32((uint32_t)(0x120526b0u));
  /* 12024b99 call dword ptr [0x120554e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554e8))), 0x12024b9fu);
  /* 12024b9f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024ba2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024ba4 call 0x12025c50 */
  push32(0x12024ba9u); f_12025c50();
  /* 12024ba9 mov esi, esp */
  ESI = (ESP);
  /* 12024bab push 1 */
  push32((uint32_t)(0x1u));
  /* 12024bad push 0 */
  push32((uint32_t)(0x0u));
  /* 12024baf push 0x12052468 */
  push32((uint32_t)(0x12052468u));
  /* 12024bb4 call dword ptr [0x120554e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554e8))), 0x12024bbau);
  /* 12024bba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024bbd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024bbf call 0x12025c50 */
  push32(0x12024bc4u); f_12025c50();
  /* 12024bc4 mov esi, esp */
  ESI = (ESP);
  /* 12024bc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12024bc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12024bca push 0x12052478 */
  push32((uint32_t)(0x12052478u));
  /* 12024bcf call dword ptr [0x120554e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554e8))), 0x12024bd5u);
  /* 12024bd5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024bd8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024bda call 0x12025c50 */
  push32(0x12024bdfu); f_12025c50();
  /* 12024bdf mov esi, esp */
  ESI = (ESP);
  /* 12024be1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12024be3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12024be5 push 0x12052450 */
  push32((uint32_t)(0x12052450u));
  /* 12024bea call dword ptr [0x120554e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554e8))), 0x12024bf0u);
  /* 12024bf0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024bf3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024bf5 call 0x12025c50 */
  push32(0x12024bfau); f_12025c50();
  /* 12024bfa mov esi, esp */
  ESI = (ESP);
  /* 12024bfc push 1 */
  push32((uint32_t)(0x1u));
  /* 12024bfe push 0x120524c0 */
  push32((uint32_t)(0x120524c0u));
  /* 12024c03 push 0 */
  push32((uint32_t)(0x0u));
  /* 12024c05 call dword ptr [0x120554ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554ec))), 0x12024c0bu);
  /* 12024c0b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024c0e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024c10 call 0x12025c50 */
  push32(0x12024c15u); f_12025c50();
  /* 12024c15 mov esi, esp */
  ESI = (ESP);
  /* 12024c17 push 0 */
  push32((uint32_t)(0x0u));
  /* 12024c19 call dword ptr [0x120554f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554f0))), 0x12024c1fu);
  /* 12024c1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024c22 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024c24 call 0x12025c50 */
  push32(0x12024c29u); f_12025c50();
  /* 12024c29 mov esi, esp */
  ESI = (ESP);
  /* 12024c2b push 0 */
  push32((uint32_t)(0x0u));
  /* 12024c2d push 0x120526b8 */
  push32((uint32_t)(0x120526b8u));
  /* 12024c32 call dword ptr [0x12055480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055480))), 0x12024c38u);
  /* 12024c38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024c3b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024c3d call 0x12025c50 */
  push32(0x12024c42u); f_12025c50();
  /* 12024c42 mov esi, esp */
  ESI = (ESP);
  /* 12024c44 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12024c46 call dword ptr [0x12055460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055460))), 0x12024c4cu);
  /* 12024c4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024c4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024c51 call 0x12025c50 */
  push32(0x12024c56u); f_12025c50();
  /* 12024c56 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12024c5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12024c5d je 0x12024ca9 */
  if (C.zf) goto L_12024ca9;
  /* 12024c5f mov esi, esp */
  ESI = (ESP);
  /* 12024c61 push 1 */
  push32((uint32_t)(0x1u));
  /* 12024c63 call dword ptr [0x120554f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554f4))), 0x12024c69u);
  /* 12024c69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024c6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024c6e call 0x12025c50 */
  push32(0x12024c73u); f_12025c50();
  /* 12024c73 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12024c78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12024c7a je 0x12024ca9 */
  if (C.zf) goto L_12024ca9;
  /* 12024c7c mov esi, esp */
  ESI = (ESP);
  /* 12024c7e push 0 */
  push32((uint32_t)(0x0u));
  /* 12024c80 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12024c82 call dword ptr [0x12055464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055464))), 0x12024c88u);
  /* 12024c88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024c8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024c8d call 0x12025c50 */
  push32(0x12024c92u); f_12025c50();
  /* 12024c92 mov esi, esp */
  ESI = (ESP);
  /* 12024c94 push 0x1204d40c */
  push32((uint32_t)(0x1204d40cu));
  /* 12024c99 call dword ptr [0x1205549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205549c))), 0x12024c9fu);
  /* 12024c9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024ca2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024ca4 call 0x12025c50 */
  push32(0x12024ca9u); f_12025c50();
L_12024ca9:;
  /* 12024ca9 mov esi, esp */
  ESI = (ESP);
  /* 12024cab push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12024cad call dword ptr [0x12055460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055460))), 0x12024cb3u);
  /* 12024cb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024cb6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024cb8 call 0x12025c50 */
  push32(0x12024cbdu); f_12025c50();
  /* 12024cbd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12024cc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12024cc4 je 0x12024d10 */
  if (C.zf) goto L_12024d10;
  /* 12024cc6 mov esi, esp */
  ESI = (ESP);
  /* 12024cc8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12024cca call dword ptr [0x120554f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554f4))), 0x12024cd0u);
  /* 12024cd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024cd3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024cd5 call 0x12025c50 */
  push32(0x12024cdau); f_12025c50();
  /* 12024cda and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12024cdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12024ce1 je 0x12024d10 */
  if (C.zf) goto L_12024d10;
  /* 12024ce3 mov esi, esp */
  ESI = (ESP);
  /* 12024ce5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12024ce7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12024ce9 call dword ptr [0x12055464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055464))), 0x12024cefu);
  /* 12024cef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024cf2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024cf4 call 0x12025c50 */
  push32(0x12024cf9u); f_12025c50();
  /* 12024cf9 mov esi, esp */
  ESI = (ESP);
  /* 12024cfb push 0x1204d400 */
  push32((uint32_t)(0x1204d400u));
  /* 12024d00 call dword ptr [0x1205549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205549c))), 0x12024d06u);
  /* 12024d06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024d09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024d0b call 0x12025c50 */
  push32(0x12024d10u); f_12025c50();
L_12024d10:;
  /* 12024d10 mov esi, esp */
  ESI = (ESP);
  /* 12024d12 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12024d14 call dword ptr [0x12055460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055460))), 0x12024d1au);
  /* 12024d1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024d1d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024d1f call 0x12025c50 */
  push32(0x12024d24u); f_12025c50();
  /* 12024d24 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12024d29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12024d2b je 0x12024d77 */
  if (C.zf) goto L_12024d77;
  /* 12024d2d mov esi, esp */
  ESI = (ESP);
  /* 12024d2f push 3 */
  push32((uint32_t)(0x3u));
  /* 12024d31 call dword ptr [0x120554f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554f4))), 0x12024d37u);
  /* 12024d37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024d3a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024d3c call 0x12025c50 */
  push32(0x12024d41u); f_12025c50();
  /* 12024d41 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12024d46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12024d48 je 0x12024d77 */
  if (C.zf) goto L_12024d77;
  /* 12024d4a mov esi, esp */
  ESI = (ESP);
  /* 12024d4c push 0 */
  push32((uint32_t)(0x0u));
  /* 12024d4e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12024d50 call dword ptr [0x12055464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055464))), 0x12024d56u);
  /* 12024d56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024d59 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024d5b call 0x12025c50 */
  push32(0x12024d60u); f_12025c50();
  /* 12024d60 mov esi, esp */
  ESI = (ESP);
  /* 12024d62 push 0x1204d3f4 */
  push32((uint32_t)(0x1204d3f4u));
  /* 12024d67 call dword ptr [0x1205549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205549c))), 0x12024d6du);
  /* 12024d6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024d70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024d72 call 0x12025c50 */
  push32(0x12024d77u); f_12025c50();
L_12024d77:;
  /* 12024d77 mov esi, esp */
  ESI = (ESP);
  /* 12024d79 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12024d7b call dword ptr [0x12055460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055460))), 0x12024d81u);
  /* 12024d81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024d84 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024d86 call 0x12025c50 */
  push32(0x12024d8bu); f_12025c50();
  /* 12024d8b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12024d90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12024d92 je 0x12024e48 */
  if (C.zf) goto L_12024e48;
  /* 12024d98 mov esi, esp */
  ESI = (ESP);
  /* 12024d9a push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12024d9c call dword ptr [0x12055460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055460))), 0x12024da2u);
  /* 12024da2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024da5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024da7 call 0x12025c50 */
  push32(0x12024dacu); f_12025c50();
  /* 12024dac and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12024db1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12024db3 jne 0x12024e48 */
  if (!C.zf) goto L_12024e48;
  /* 12024db9 mov esi, esp */
  ESI = (ESP);
  /* 12024dbb push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12024dbd call dword ptr [0x12055460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055460))), 0x12024dc3u);
  /* 12024dc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024dc6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024dc8 call 0x12025c50 */
  push32(0x12024dcdu); f_12025c50();
  /* 12024dcd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12024dd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12024dd4 jne 0x12024e48 */
  if (!C.zf) goto L_12024e48;
  /* 12024dd6 mov esi, esp */
  ESI = (ESP);
  /* 12024dd8 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12024dda call dword ptr [0x12055460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055460))), 0x12024de0u);
  /* 12024de0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024de3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024de5 call 0x12025c50 */
  push32(0x12024deau); f_12025c50();
  /* 12024dea and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12024def test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12024df1 jne 0x12024e48 */
  if (!C.zf) goto L_12024e48;
  /* 12024df3 mov esi, esp */
  ESI = (ESP);
  /* 12024df5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12024df7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12024df9 call dword ptr [0x12055464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055464))), 0x12024dffu);
  /* 12024dff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024e02 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024e04 call 0x12025c50 */
  push32(0x12024e09u); f_12025c50();
  /* 12024e09 mov esi, esp */
  ESI = (ESP);
  /* 12024e0b push 0x1204d3ec */
  push32((uint32_t)(0x1204d3ecu));
  /* 12024e10 call dword ptr [0x1205549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205549c))), 0x12024e16u);
  /* 12024e16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024e19 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024e1b call 0x12025c50 */
  push32(0x12024e20u); f_12025c50();
  /* 12024e20 mov esi, esp */
  ESI = (ESP);
  /* 12024e22 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12024e24 call dword ptr [0x1205546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205546c))), 0x12024e2au);
  /* 12024e2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024e2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024e2f call 0x12025c50 */
  push32(0x12024e34u); f_12025c50();
  /* 12024e34 mov esi, esp */
  ESI = (ESP);
  /* 12024e36 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 12024e38 call dword ptr [0x12055468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055468))), 0x12024e3eu);
  /* 12024e3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024e41 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024e43 call 0x12025c50 */
  push32(0x12024e48u); f_12025c50();
L_12024e48:;
  /* 12024e48 mov esi, esp */
  ESI = (ESP);
  /* 12024e4a push 0xf */
  push32((uint32_t)(0xfu));
  /* 12024e4c call dword ptr [0x12055460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055460))), 0x12024e52u);
  /* 12024e52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024e55 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024e57 call 0x12025c50 */
  push32(0x12024e5cu); f_12025c50();
  /* 12024e5c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12024e61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12024e63 jne 0x12024f1d */
  if (!C.zf) goto L_12024f1d;
  /* 12024e69 mov esi, esp */
  ESI = (ESP);
  /* 12024e6b push 2 */
  push32((uint32_t)(0x2u));
  /* 12024e6d call dword ptr [0x12055460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055460))), 0x12024e73u);
  /* 12024e73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024e76 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024e78 call 0x12025c50 */
  push32(0x12024e7du); f_12025c50();
  /* 12024e7d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12024e82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12024e84 jne 0x12024f1d */
  if (!C.zf) goto L_12024f1d;
  /* 12024e8a mov esi, esp */
  ESI = (ESP);
  /* 12024e8c push 4 */
  push32((uint32_t)(0x4u));
  /* 12024e8e call dword ptr [0x12055460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055460))), 0x12024e94u);
  /* 12024e94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024e97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024e99 call 0x12025c50 */
  push32(0x12024e9eu); f_12025c50();
  /* 12024e9e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12024ea3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12024ea5 jne 0x12024f1d */
  if (!C.zf) goto L_12024f1d;
  /* 12024ea7 mov esi, esp */
  ESI = (ESP);
  /* 12024ea9 push 5 */
  push32((uint32_t)(0x5u));
  /* 12024eab call dword ptr [0x12055460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055460))), 0x12024eb1u);
  /* 12024eb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024eb4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024eb6 call 0x12025c50 */
  push32(0x12024ebbu); f_12025c50();
  /* 12024ebb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12024ec0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12024ec2 jne 0x12024f1d */
  if (!C.zf) goto L_12024f1d;
  /* 12024ec4 mov esi, esp */
  ESI = (ESP);
  /* 12024ec6 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 12024ec8 call dword ptr [0x12055460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055460))), 0x12024eceu);
  /* 12024ece add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024ed1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024ed3 call 0x12025c50 */
  push32(0x12024ed8u); f_12025c50();
  /* 12024ed8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12024edd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12024edf je 0x12024f1d */
  if (C.zf) goto L_12024f1d;
  /* 12024ee1 mov esi, esp */
  ESI = (ESP);
  /* 12024ee3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12024ee5 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 12024ee7 call dword ptr [0x12055464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055464))), 0x12024eedu);
  /* 12024eed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024ef0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024ef2 call 0x12025c50 */
  push32(0x12024ef7u); f_12025c50();
  /* 12024ef7 mov esi, esp */
  ESI = (ESP);
  /* 12024ef9 push 0x1204d3e4 */
  push32((uint32_t)(0x1204d3e4u));
  /* 12024efe call dword ptr [0x1205549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205549c))), 0x12024f04u);
  /* 12024f04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024f07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024f09 call 0x12025c50 */
  push32(0x12024f0eu); f_12025c50();
  /* 12024f0e mov esi, esp */
  ESI = (ESP);
  /* 12024f10 call dword ptr [0x120554f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554f8))), 0x12024f16u);
  /* 12024f16 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024f18 call 0x12025c50 */
  push32(0x12024f1du); f_12025c50();
L_12024f1d:;
  /* 12024f1d mov esi, esp */
  ESI = (ESP);
  /* 12024f1f push 0x62 */
  push32((uint32_t)(0x62u));
  /* 12024f21 call dword ptr [0x12055460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055460))), 0x12024f27u);
  /* 12024f27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024f2a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024f2c call 0x12025c50 */
  push32(0x12024f31u); f_12025c50();
  /* 12024f31 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12024f36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12024f38 je 0x12024fca */
  if (C.zf) goto L_12024fca;
  /* 12024f3e mov esi, esp */
  ESI = (ESP);
  /* 12024f40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12024f42 call dword ptr [0x120554f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554f4))), 0x12024f48u);
  /* 12024f48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024f4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024f4d call 0x12025c50 */
  push32(0x12024f52u); f_12025c50();
  /* 12024f52 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12024f57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12024f59 je 0x12024fca */
  if (C.zf) goto L_12024fca;
  /* 12024f5b mov esi, esp */
  ESI = (ESP);
  /* 12024f5d push 0 */
  push32((uint32_t)(0x0u));
  /* 12024f5f push 0x62 */
  push32((uint32_t)(0x62u));
  /* 12024f61 call dword ptr [0x12055464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055464))), 0x12024f67u);
  /* 12024f67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024f6a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024f6c call 0x12025c50 */
  push32(0x12024f71u); f_12025c50();
  /* 12024f71 mov esi, esp */
  ESI = (ESP);
  /* 12024f73 push 3 */
  push32((uint32_t)(0x3u));
  /* 12024f75 push 0 */
  push32((uint32_t)(0x0u));
  /* 12024f77 call dword ptr [0x120554fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120554fc))), 0x12024f7du);
  /* 12024f7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024f80 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024f82 call 0x12025c50 */
  push32(0x12024f87u); f_12025c50();
  /* 12024f87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12024f89 jle 0x12024fa4 */
  if ((C.zf||C.sf!=C.of)) goto L_12024fa4;
  /* 12024f8b mov esi, esp */
  ESI = (ESP);
  /* 12024f8d push 0x1204d3dc */
  push32((uint32_t)(0x1204d3dcu));
  /* 12024f92 call dword ptr [0x1205549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205549c))), 0x12024f98u);
  /* 12024f98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024f9b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024f9d call 0x12025c50 */
  push32(0x12024fa2u); f_12025c50();
  /* 12024fa2 jmp 0x12024fbb */
  goto L_12024fbb;
L_12024fa4:;
  /* 12024fa4 mov esi, esp */
  ESI = (ESP);
  /* 12024fa6 push 0x1204d3d0 */
  push32((uint32_t)(0x1204d3d0u));
  /* 12024fab call dword ptr [0x1205549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205549c))), 0x12024fb1u);
  /* 12024fb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024fb4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024fb6 call 0x12025c50 */
  push32(0x12024fbbu); f_12025c50();
L_12024fbb:;
  /* 12024fbb mov esi, esp */
  ESI = (ESP);
  /* 12024fbd call dword ptr [0x12055500] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055500))), 0x12024fc3u);
  /* 12024fc3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024fc5 call 0x12025c50 */
  push32(0x12024fcau); f_12025c50();
L_12024fca:;
  /* 12024fca pop edi */
  EDI = (pop32());
  /* 12024fcb pop esi */
  ESI = (pop32());
  /* 12024fcc pop ebx */
  EBX = (pop32());
  /* 12024fcd add esp, 0x54 */
  { uint32_t _a=(ESP),_b=(0x54u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12024fd0 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12024fd2 call 0x12025c50 */
  push32(0x12024fd7u); f_12025c50();
  /* 12024fd7 mov esp, ebp */
  ESP = (EBP);
  /* 12024fd9 pop ebp */
  EBP = (pop32());
  /* 12024fda ret  */
  ESPCHK(0x120223b0u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x12025c50 (56 bytes, 28 insns) */
void f_12025c50(void) {
  FTRACE(0x12025c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12025c50 jne 0x12025c53 */
  if (!C.zf) goto L_12025c53;
  /* 12025c52 ret  */
  ESPCHK(0x12025c50u, _esp0);
  ESP += 4; return;
L_12025c53:;
  /* 12025c53 push ebp */
  push32((uint32_t)(EBP));
  /* 12025c54 mov ebp, esp */
  EBP = (ESP);
  /* 12025c56 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12025c59 push eax */
  push32((uint32_t)(EAX));
  /* 12025c5a push edx */
  push32((uint32_t)(EDX));
  /* 12025c5b push ebx */
  push32((uint32_t)(EBX));
  /* 12025c5c push esi */
  push32((uint32_t)(ESI));
  /* 12025c5d push edi */
  push32((uint32_t)(EDI));
  /* 12025c5e push 0x1204d640 */
  push32((uint32_t)(0x1204d640u));
  /* 12025c63 push 0x1204d63c */
  push32((uint32_t)(0x1204d63cu));
  /* 12025c68 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12025c6a push 0x1204d62c */
  push32((uint32_t)(0x1204d62cu));
  /* 12025c6f push 1 */
  push32((uint32_t)(0x1u));
  /* 12025c71 call 0x12026020 */
  push32(0x12025c76u); f_12026020();
  /* 12025c76 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12025c79 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12025c7c jne 0x12025c7f */
  if (!C.zf) goto L_12025c7f;
  /* 12025c7e int3  */
  x86_unimpl("int3 @ 0x12025c7e");
L_12025c7f:;
  /* 12025c7f pop edi */
  EDI = (pop32());
  /* 12025c80 pop esi */
  ESI = (pop32());
  /* 12025c81 pop ebx */
  EBX = (pop32());
  /* 12025c82 pop edx */
  EDX = (pop32());
  /* 12025c83 pop eax */
  EAX = (pop32());
  /* 12025c84 mov esp, ebp */
  ESP = (EBP);
  /* 12025c86 pop ebp */
  EBP = (pop32());
  /* 12025c87 ret  */
  ESPCHK(0x12025c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c90 @ 0x12025c90 (313 bytes, 78 insns) */
void f_12025c90(void) {
  FTRACE(0x12025c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12025c90 push ebp */
  push32((uint32_t)(EBP));
  /* 12025c91 mov ebp, esp */
  EBP = (ESP);
  /* 12025c93 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12025c97 jne 0x12025d57 */
  if (!C.zf) goto L_12025d57;
  /* 12025c9d call dword ptr [0x120553a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553a8))), 0x12025ca3u);
  /* 12025ca3 mov dword ptr [0x120527e8], eax */
  w32((uint32_t)(0x120527e8), (EAX));
  /* 12025ca8 push 1 */
  push32((uint32_t)(0x1u));
  /* 12025caa call 0x12029750 */
  push32(0x12025cafu); f_12029750();
  /* 12025caf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12025cb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12025cb4 jne 0x12025cbd */
  if (!C.zf) goto L_12025cbd;
  /* 12025cb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12025cb8 jmp 0x12025dc5 */
  goto L_12025dc5;
L_12025cbd:;
  /* 12025cbd mov eax, dword ptr [0x120527e8] */
  EAX = (r32((uint32_t)(0x120527e8)));
  /* 12025cc2 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12025cc5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12025cca mov dword ptr [0x120527f4], eax */
  w32((uint32_t)(0x120527f4), (EAX));
  /* 12025ccf mov ecx, dword ptr [0x120527e8] */
  ECX = (r32((uint32_t)(0x120527e8)));
  /* 12025cd5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12025cdb mov dword ptr [0x120527f0], ecx */
  w32((uint32_t)(0x120527f0), (ECX));
  /* 12025ce1 mov edx, dword ptr [0x120527f0] */
  EDX = (r32((uint32_t)(0x120527f0)));
  /* 12025ce7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12025cea add edx, dword ptr [0x120527f4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x120527f4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12025cf0 mov dword ptr [0x120527ec], edx */
  w32((uint32_t)(0x120527ec), (EDX));
  /* 12025cf6 mov eax, dword ptr [0x120527e8] */
  EAX = (r32((uint32_t)(0x120527e8)));
  /* 12025cfb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12025cfe and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12025d03 mov dword ptr [0x120527e8], eax */
  w32((uint32_t)(0x120527e8), (EAX));
  /* 12025d08 call 0x120268c0 */
  push32(0x12025d0du); f_120268c0();
  /* 12025d0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12025d0f jne 0x12025d1d */
  if (!C.zf) goto L_12025d1d;
  /* 12025d11 call 0x120297a0 */
  push32(0x12025d16u); f_120297a0();
  /* 12025d16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12025d18 jmp 0x12025dc5 */
  goto L_12025dc5;
L_12025d1d:;
  /* 12025d1d call dword ptr [0x120553a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553a4))), 0x12025d23u);
  /* 12025d23 mov dword ptr [0x1205432c], eax */
  w32((uint32_t)(0x1205432c), (EAX));
  /* 12025d28 call 0x12029530 */
  push32(0x12025d2du); f_12029530();
  /* 12025d2d mov dword ptr [0x120527d0], eax */
  w32((uint32_t)(0x120527d0), (EAX));
  /* 12025d32 call 0x12026b70 */
  push32(0x12025d37u); f_12026b70();
  /* 12025d37 call 0x12029020 */
  push32(0x12025d3cu); f_12029020();
  /* 12025d3c call 0x12028ed0 */
  push32(0x12025d41u); f_12028ed0();
  /* 12025d41 call 0x120266c0 */
  push32(0x12025d46u); f_120266c0();
  /* 12025d46 mov ecx, dword ptr [0x120527cc] */
  ECX = (r32((uint32_t)(0x120527cc)));
  /* 12025d4c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12025d4f mov dword ptr [0x120527cc], ecx */
  w32((uint32_t)(0x120527cc), (ECX));
  /* 12025d55 jmp 0x12025dc0 */
  goto L_12025dc0;
L_12025d57:;
  /* 12025d57 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12025d5b jne 0x12025db0 */
  if (!C.zf) goto L_12025db0;
  /* 12025d5d cmp dword ptr [0x120527cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120527cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12025d64 jle 0x12025daa */
  if ((C.zf||C.sf!=C.of)) goto L_12025daa;
  /* 12025d66 mov edx, dword ptr [0x120527cc] */
  EDX = (r32((uint32_t)(0x120527cc)));
  /* 12025d6c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12025d6f mov dword ptr [0x120527cc], edx */
  w32((uint32_t)(0x120527cc), (EDX));
  /* 12025d75 cmp dword ptr [0x12052820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12025d7c jne 0x12025d83 */
  if (!C.zf) goto L_12025d83;
  /* 12025d7e call 0x12026740 */
  push32(0x12025d83u); f_12026740();
L_12025d83:;
  /* 12025d83 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12025d85 call 0x12028470 */
  push32(0x12025d8au); f_12028470();
  /* 12025d8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12025d8d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12025d90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12025d92 je 0x12025d99 */
  if (C.zf) goto L_12025d99;
  /* 12025d94 call 0x12028d80 */
  push32(0x12025d99u); f_12028d80();
L_12025d99:;
  /* 12025d99 call 0x12026ea0 */
  push32(0x12025d9eu); f_12026ea0();
  /* 12025d9e call 0x12026950 */
  push32(0x12025da3u); f_12026950();
  /* 12025da3 call 0x120297a0 */
  push32(0x12025da8u); f_120297a0();
  /* 12025da8 jmp 0x12025dae */
  goto L_12025dae;
L_12025daa:;
  /* 12025daa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12025dac jmp 0x12025dc5 */
  goto L_12025dc5;
L_12025dae:;
  /* 12025dae jmp 0x12025dc0 */
  goto L_12025dc0;
L_12025db0:;
  /* 12025db0 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12025db4 jne 0x12025dc0 */
  if (!C.zf) goto L_12025dc0;
  /* 12025db6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12025db8 call 0x12026a40 */
  push32(0x12025dbdu); f_12026a40();
  /* 12025dbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12025dc0:;
  /* 12025dc0 mov eax, 1 */
  EAX = (0x1u);
L_12025dc5:;
  /* 12025dc5 pop ebp */
  EBP = (pop32());
  /* 12025dc6 ret 0xc */
  ESPCHK(0x12025c90u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x12025dd0 (243 bytes, 86 insns) */
void f_12025dd0(void) {
  FTRACE(0x12025dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12025dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12025dd1 mov ebp, esp */
  EBP = (ESP);
  /* 12025dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12025dd4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12025ddb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12025ddf jne 0x12025df1 */
  if (!C.zf) goto L_12025df1;
  /* 12025de1 cmp dword ptr [0x120527cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120527cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12025de8 jne 0x12025df1 */
  if (!C.zf) goto L_12025df1;
  /* 12025dea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12025dec jmp 0x12025ebd */
  goto L_12025ebd;
L_12025df1:;
  /* 12025df1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12025df5 je 0x12025dfd */
  if (C.zf) goto L_12025dfd;
  /* 12025df7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12025dfb jne 0x12025e3f */
  if (!C.zf) goto L_12025e3f;
L_12025dfd:;
  /* 12025dfd cmp dword ptr [0x1205433c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1205433c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12025e04 je 0x12025e1b */
  if (C.zf) goto L_12025e1b;
  /* 12025e06 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12025e09 push eax */
  push32((uint32_t)(EAX));
  /* 12025e0a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12025e0d push ecx */
  push32((uint32_t)(ECX));
  /* 12025e0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12025e11 push edx */
  push32((uint32_t)(EDX));
  /* 12025e12 call dword ptr [0x1205433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205433c))), 0x12025e18u);
  /* 12025e18 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12025e1b:;
  /* 12025e1b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12025e1f je 0x12025e35 */
  if (C.zf) goto L_12025e35;
  /* 12025e21 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12025e24 push eax */
  push32((uint32_t)(EAX));
  /* 12025e25 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12025e28 push ecx */
  push32((uint32_t)(ECX));
  /* 12025e29 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12025e2c push edx */
  push32((uint32_t)(EDX));
  /* 12025e2d call 0x12025c90 */
  push32(0x12025e32u); f_12025c90();
  /* 12025e32 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12025e35:;
  /* 12025e35 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12025e39 jne 0x12025e3f */
  if (!C.zf) goto L_12025e3f;
  /* 12025e3b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12025e3d jmp 0x12025ebd */
  goto L_12025ebd;
L_12025e3f:;
  /* 12025e3f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12025e42 push eax */
  push32((uint32_t)(EAX));
  /* 12025e43 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12025e46 push ecx */
  push32((uint32_t)(ECX));
  /* 12025e47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12025e4a push edx */
  push32((uint32_t)(EDX));
  /* 12025e4b call 0x1202100a */
  push32(0x12025e50u); f_1202100a();
  /* 12025e50 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12025e53 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12025e57 jne 0x12025e6e */
  if (!C.zf) goto L_12025e6e;
  /* 12025e59 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12025e5d jne 0x12025e6e */
  if (!C.zf) goto L_12025e6e;
  /* 12025e5f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12025e62 push eax */
  push32((uint32_t)(EAX));
  /* 12025e63 push 0 */
  push32((uint32_t)(0x0u));
  /* 12025e65 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12025e68 push ecx */
  push32((uint32_t)(ECX));
  /* 12025e69 call 0x12025c90 */
  push32(0x12025e6eu); f_12025c90();
L_12025e6e:;
  /* 12025e6e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12025e72 je 0x12025e7a */
  if (C.zf) goto L_12025e7a;
  /* 12025e74 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12025e78 jne 0x12025eba */
  if (!C.zf) goto L_12025eba;
L_12025e7a:;
  /* 12025e7a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12025e7d push edx */
  push32((uint32_t)(EDX));
  /* 12025e7e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12025e81 push eax */
  push32((uint32_t)(EAX));
  /* 12025e82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12025e85 push ecx */
  push32((uint32_t)(ECX));
  /* 12025e86 call 0x12025c90 */
  push32(0x12025e8bu); f_12025c90();
  /* 12025e8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12025e8d jne 0x12025e96 */
  if (!C.zf) goto L_12025e96;
  /* 12025e8f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12025e96:;
  /* 12025e96 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12025e9a je 0x12025eba */
  if (C.zf) goto L_12025eba;
  /* 12025e9c cmp dword ptr [0x1205433c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1205433c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12025ea3 je 0x12025eba */
  if (C.zf) goto L_12025eba;
  /* 12025ea5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12025ea8 push edx */
  push32((uint32_t)(EDX));
  /* 12025ea9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12025eac push eax */
  push32((uint32_t)(EAX));
  /* 12025ead mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12025eb0 push ecx */
  push32((uint32_t)(ECX));
  /* 12025eb1 call dword ptr [0x1205433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205433c))), 0x12025eb7u);
  /* 12025eb7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12025eba:;
  /* 12025eba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12025ebd:;
  /* 12025ebd mov esp, ebp */
  ESP = (EBP);
  /* 12025ebf pop ebp */
  EBP = (pop32());
  /* 12025ec0 ret 0xc */
  ESPCHK(0x12025dd0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x12025ed0 (58 bytes, 18 insns) */
void f_12025ed0(void) {
  FTRACE(0x12025ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12025ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 12025ed1 mov ebp, esp */
  EBP = (ESP);
  /* 12025ed3 cmp dword ptr [0x120527d8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120527d8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12025eda je 0x12025eee */
  if (C.zf) goto L_12025eee;
  /* 12025edc cmp dword ptr [0x120527d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120527d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12025ee3 jne 0x12025ef3 */
  if (!C.zf) goto L_12025ef3;
  /* 12025ee5 cmp dword ptr [0x120527dc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120527dc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12025eec jne 0x12025ef3 */
  if (!C.zf) goto L_12025ef3;
L_12025eee:;
  /* 12025eee call 0x12029840 */
  push32(0x12025ef3u); f_12029840();
L_12025ef3:;
  /* 12025ef3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12025ef6 push eax */
  push32((uint32_t)(EAX));
  /* 12025ef7 call 0x12029890 */
  push32(0x12025efcu); f_12029890();
  /* 12025efc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12025eff push 0xff */
  push32((uint32_t)(0xffu));
  /* 12025f04 call dword ptr [0x12050a30] */
  call_ind((uint32_t)(r32((uint32_t)(0x12050a30))), 0x12025f0au);
  /* 12025f0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12025f0d pop ebp */
  EBP = (pop32());
  /* 12025f0e ret  */
  ESPCHK(0x12025ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f10 @ 0x12025f10 (11 bytes, 5 insns) */
void f_12025f10(void) {
  FTRACE(0x12025f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12025f10 push ebp */
  push32((uint32_t)(EBP));
  /* 12025f11 mov ebp, esp */
  EBP = (ESP);
  /* 12025f13 call dword ptr [0x120553ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553ac))), 0x12025f19u);
  /* 12025f19 pop ebp */
  EBP = (pop32());
  /* 12025f1a ret  */
  ESPCHK(0x12025f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f20 @ 0x12025f20 (87 bytes, 30 insns) */
void f_12025f20(void) {
  FTRACE(0x12025f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12025f20 push ebp */
  push32((uint32_t)(EBP));
  /* 12025f21 mov ebp, esp */
  EBP = (ESP);
  /* 12025f23 push ecx */
  push32((uint32_t)(ECX));
  /* 12025f24 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12025f28 jl 0x12025f30 */
  if ((C.sf!=C.of)) goto L_12025f30;
  /* 12025f2a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12025f2e jl 0x12025f35 */
  if ((C.sf!=C.of)) goto L_12025f35;
L_12025f30:;
  /* 12025f30 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12025f33 jmp 0x12025f73 */
  goto L_12025f73;
L_12025f35:;
  /* 12025f35 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12025f39 jne 0x12025f47 */
  if (!C.zf) goto L_12025f47;
  /* 12025f3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12025f3e mov eax, dword ptr [eax*4 + 0x12050a38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12050a38)));
  /* 12025f45 jmp 0x12025f73 */
  goto L_12025f73;
L_12025f47:;
  /* 12025f47 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12025f4a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 12025f4d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12025f4f je 0x12025f56 */
  if (C.zf) goto L_12025f56;
  /* 12025f51 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12025f54 jmp 0x12025f73 */
  goto L_12025f73;
L_12025f56:;
  /* 12025f56 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12025f59 mov eax, dword ptr [edx*4 + 0x12050a38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12050a38)));
  /* 12025f60 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12025f63 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12025f66 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12025f69 mov dword ptr [ecx*4 + 0x12050a38], edx */
  w32((uint32_t)(ECX*4 + 0x12050a38), (EDX));
  /* 12025f70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12025f73:;
  /* 12025f73 mov esp, ebp */
  ESP = (EBP);
  /* 12025f75 pop ebp */
  EBP = (pop32());
  /* 12025f76 ret  */
  ESPCHK(0x12025f20u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x12025f80 (126 bytes, 38 insns) */
void f_12025f80(void) {
  FTRACE(0x12025f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12025f80 push ebp */
  push32((uint32_t)(EBP));
  /* 12025f81 mov ebp, esp */
  EBP = (ESP);
  /* 12025f83 push ecx */
  push32((uint32_t)(ECX));
  /* 12025f84 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12025f88 jl 0x12025f90 */
  if ((C.sf!=C.of)) goto L_12025f90;
  /* 12025f8a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12025f8e jl 0x12025f97 */
  if ((C.sf!=C.of)) goto L_12025f97;
L_12025f90:;
  /* 12025f90 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12025f95 jmp 0x12025ffa */
  goto L_12025ffa;
L_12025f97:;
  /* 12025f97 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12025f9b jne 0x12025fa9 */
  if (!C.zf) goto L_12025fa9;
  /* 12025f9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12025fa0 mov eax, dword ptr [eax*4 + 0x12050a44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12050a44)));
  /* 12025fa7 jmp 0x12025ffa */
  goto L_12025ffa;
L_12025fa9:;
  /* 12025fa9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12025fac mov edx, dword ptr [ecx*4 + 0x12050a44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12050a44)));
  /* 12025fb3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12025fb6 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12025fba jne 0x12025fd0 */
  if (!C.zf) goto L_12025fd0;
  /* 12025fbc push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12025fbe call dword ptr [0x120553b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553b0))), 0x12025fc4u);
  /* 12025fc4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12025fc7 mov dword ptr [ecx*4 + 0x12050a44], eax */
  w32((uint32_t)(ECX*4 + 0x12050a44), (EAX));
  /* 12025fce jmp 0x12025ff7 */
  goto L_12025ff7;
L_12025fd0:;
  /* 12025fd0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12025fd4 jne 0x12025fea */
  if (!C.zf) goto L_12025fea;
  /* 12025fd6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12025fd8 call dword ptr [0x120553b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553b0))), 0x12025fdeu);
  /* 12025fde mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12025fe1 mov dword ptr [edx*4 + 0x12050a44], eax */
  w32((uint32_t)(EDX*4 + 0x12050a44), (EAX));
  /* 12025fe8 jmp 0x12025ff7 */
  goto L_12025ff7;
L_12025fea:;
  /* 12025fea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12025fed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12025ff0 mov dword ptr [eax*4 + 0x12050a44], ecx */
  w32((uint32_t)(EAX*4 + 0x12050a44), (ECX));
L_12025ff7:;
  /* 12025ff7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12025ffa:;
  /* 12025ffa mov esp, ebp */
  ESP = (EBP);
  /* 12025ffc pop ebp */
  EBP = (pop32());
  /* 12025ffd ret  */
  ESPCHK(0x12025f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006000 @ 0x12026000 (28 bytes, 11 insns) */
void f_12026000(void) {
  FTRACE(0x12026000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12026000 push ebp */
  push32((uint32_t)(EBP));
  /* 12026001 mov ebp, esp */
  EBP = (ESP);
  /* 12026003 push ecx */
  push32((uint32_t)(ECX));
  /* 12026004 mov eax, dword ptr [0x12054320] */
  EAX = (r32((uint32_t)(0x12054320)));
  /* 12026009 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1202600c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202600f mov dword ptr [0x12054320], ecx */
  w32((uint32_t)(0x12054320), (ECX));
  /* 12026015 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12026018 mov esp, ebp */
  ESP = (EBP);
  /* 1202601a pop ebp */
  EBP = (pop32());
  /* 1202601b ret  */
  ESPCHK(0x12026000u, _esp0);
  ESP += 4; return;
}

/* FUN_10006020 @ 0x12026020 (912 bytes, 248 insns) */
void f_12026020(void) {
  FTRACE(0x12026020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12026020 push ebp */
  push32((uint32_t)(EBP));
  /* 12026021 mov ebp, esp */
  EBP = (ESP);
  /* 12026023 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 12026028 call 0x1202a100 */
  push32(0x1202602du); f_1202a100();
  /* 1202602d push edi */
  push32((uint32_t)(EDI));
  /* 1202602e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 12026035 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1202603a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202603c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 12026042 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12026044 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12026046 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12026047 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 1202604e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12026053 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12026055 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 1202605b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1202605d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 1202605f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12026060 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 12026067 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1202606c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202606e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 12026074 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12026076 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12026078 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12026079 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 1202607c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 12026082 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026086 jl 0x1202608e */
  if ((C.sf!=C.of)) goto L_1202608e;
  /* 12026088 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202608c jl 0x12026096 */
  if ((C.sf!=C.of)) goto L_12026096;
L_1202608e:;
  /* 1202608e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12026091 jmp 0x120263ab */
  goto L_120263ab;
L_12026096:;
  /* 12026096 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202609a jne 0x12026140 */
  if (!C.zf) goto L_12026140;
  /* 120260a0 push 0x12050a34 */
  push32((uint32_t)(0x12050a34u));
  /* 120260a5 call dword ptr [0x120553c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553c8))), 0x120260abu);
  /* 120260ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120260ad jle 0x12026140 */
  if ((C.zf||C.sf!=C.of)) goto L_12026140;
  /* 120260b3 cmp dword ptr [0x120527e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120527e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120260ba jne 0x120260fe */
  if (!C.zf) goto L_120260fe;
  /* 120260bc push 0x1204d7e8 */
  push32((uint32_t)(0x1204d7e8u));
  /* 120260c1 call dword ptr [0x120553c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553c4))), 0x120260c7u);
  /* 120260c7 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 120260cd cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120260d4 je 0x120260f6 */
  if (C.zf) goto L_120260f6;
  /* 120260d6 push 0x1204d7dc */
  push32((uint32_t)(0x1204d7dcu));
  /* 120260db mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 120260e1 push ecx */
  push32((uint32_t)(ECX));
  /* 120260e2 call dword ptr [0x120553c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553c0))), 0x120260e8u);
  /* 120260e8 mov dword ptr [0x120527e0], eax */
  w32((uint32_t)(0x120527e0), (EAX));
  /* 120260ed cmp dword ptr [0x120527e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120527e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120260f4 jne 0x120260fe */
  if (!C.zf) goto L_120260fe;
L_120260f6:;
  /* 120260f6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120260f9 jmp 0x120263ab */
  goto L_120263ab;
L_120260fe:;
  /* 120260fe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12026101 push edx */
  push32((uint32_t)(EDX));
  /* 12026102 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12026105 push eax */
  push32((uint32_t)(EAX));
  /* 12026106 push 0x1204d7a8 */
  push32((uint32_t)(0x1204d7a8u));
  /* 1202610b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12026111 push ecx */
  push32((uint32_t)(ECX));
  /* 12026112 call dword ptr [0x120527e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120527e0))), 0x12026118u);
  /* 12026118 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202611b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12026121 push edx */
  push32((uint32_t)(EDX));
  /* 12026122 call dword ptr [0x120553bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553bc))), 0x12026128u);
  /* 12026128 push 0x12050a34 */
  push32((uint32_t)(0x12050a34u));
  /* 1202612d call dword ptr [0x120553b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553b8))), 0x12026133u);
  /* 12026133 call 0x12025f10 */
  push32(0x12026138u); f_12025f10();
  /* 12026138 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1202613b jmp 0x120263ab */
  goto L_120263ab;
L_12026140:;
  /* 12026140 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026144 je 0x1202617d */
  if (C.zf) goto L_1202617d;
  /* 12026146 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 1202614c push eax */
  push32((uint32_t)(EAX));
  /* 1202614d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12026150 push ecx */
  push32((uint32_t)(ECX));
  /* 12026151 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 12026156 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 1202615c push edx */
  push32((uint32_t)(EDX));
  /* 1202615d call 0x1202a000 */
  push32(0x12026162u); f_1202a000();
  /* 12026162 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12026165 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12026167 jge 0x1202617d */
  if ((C.sf==C.of)) goto L_1202617d;
  /* 12026169 push 0x1204d77c */
  push32((uint32_t)(0x1204d77cu));
  /* 1202616e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12026174 push eax */
  push32((uint32_t)(EAX));
  /* 12026175 call 0x12029f10 */
  push32(0x1202617au); f_12029f10();
  /* 1202617a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1202617d:;
  /* 1202617d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026181 jne 0x120261b5 */
  if (!C.zf) goto L_120261b5;
  /* 12026183 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026187 je 0x12026195 */
  if (C.zf) goto L_12026195;
  /* 12026189 mov dword ptr [ebp - 0x3028], 0x1204d768 */
  w32((uint32_t)(EBP + -0x3028), (0x1204d768u));
  /* 12026193 jmp 0x1202619f */
  goto L_1202619f;
L_12026195:;
  /* 12026195 mov dword ptr [ebp - 0x3028], 0x1204d754 */
  w32((uint32_t)(EBP + -0x3028), (0x1204d754u));
L_1202619f:;
  /* 1202619f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 120261a5 push ecx */
  push32((uint32_t)(ECX));
  /* 120261a6 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 120261ac push edx */
  push32((uint32_t)(EDX));
  /* 120261ad call 0x12029f10 */
  push32(0x120261b2u); f_12029f10();
  /* 120261b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120261b5:;
  /* 120261b5 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 120261bb push eax */
  push32((uint32_t)(EAX));
  /* 120261bc lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 120261c2 push ecx */
  push32((uint32_t)(ECX));
  /* 120261c3 call 0x12029f20 */
  push32(0x120261c8u); f_12029f20();
  /* 120261c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120261cb cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120261cf jne 0x1202620a */
  if (!C.zf) goto L_1202620a;
  /* 120261d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120261d4 mov eax, dword ptr [edx*4 + 0x12050a38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12050a38)));
  /* 120261db and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 120261de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120261e0 je 0x120261f6 */
  if (C.zf) goto L_120261f6;
  /* 120261e2 push 0x1204d750 */
  push32((uint32_t)(0x1204d750u));
  /* 120261e7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 120261ed push ecx */
  push32((uint32_t)(ECX));
  /* 120261ee call 0x12029f20 */
  push32(0x120261f3u); f_12029f20();
  /* 120261f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120261f6:;
  /* 120261f6 push 0x1204d74c */
  push32((uint32_t)(0x1204d74cu));
  /* 120261fb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12026201 push edx */
  push32((uint32_t)(EDX));
  /* 12026202 call 0x12029f20 */
  push32(0x12026207u); f_12029f20();
  /* 12026207 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1202620a:;
  /* 1202620a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202620e je 0x12026252 */
  if (C.zf) goto L_12026252;
  /* 12026210 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 12026216 push eax */
  push32((uint32_t)(EAX));
  /* 12026217 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1202621a push ecx */
  push32((uint32_t)(ECX));
  /* 1202621b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202621e push edx */
  push32((uint32_t)(EDX));
  /* 1202621f push 0x1204d740 */
  push32((uint32_t)(0x1204d740u));
  /* 12026224 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12026229 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1202622f push eax */
  push32((uint32_t)(EAX));
  /* 12026230 call 0x12029e10 */
  push32(0x12026235u); f_12029e10();
  /* 12026235 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12026238 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202623a jge 0x12026250 */
  if ((C.sf==C.of)) goto L_12026250;
  /* 1202623c push 0x1204d77c */
  push32((uint32_t)(0x1204d77cu));
  /* 12026241 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12026247 push ecx */
  push32((uint32_t)(ECX));
  /* 12026248 call 0x12029f10 */
  push32(0x1202624du); f_12029f10();
  /* 1202624d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12026250:;
  /* 12026250 jmp 0x12026268 */
  goto L_12026268;
L_12026252:;
  /* 12026252 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12026258 push edx */
  push32((uint32_t)(EDX));
  /* 12026259 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1202625f push eax */
  push32((uint32_t)(EAX));
  /* 12026260 call 0x12029f10 */
  push32(0x12026265u); f_12029f10();
  /* 12026265 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12026268:;
  /* 12026268 cmp dword ptr [0x12054320], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12054320))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202626f je 0x120262ac */
  if (C.zf) goto L_120262ac;
  /* 12026271 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 12026277 push ecx */
  push32((uint32_t)(ECX));
  /* 12026278 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 1202627e push edx */
  push32((uint32_t)(EDX));
  /* 1202627f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12026282 push eax */
  push32((uint32_t)(EAX));
  /* 12026283 call dword ptr [0x12054320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12054320))), 0x12026289u);
  /* 12026289 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202628c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202628e je 0x120262ac */
  if (C.zf) goto L_120262ac;
  /* 12026290 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026294 jne 0x120262a1 */
  if (!C.zf) goto L_120262a1;
  /* 12026296 push 0x12050a34 */
  push32((uint32_t)(0x12050a34u));
  /* 1202629b call dword ptr [0x120553b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553b8))), 0x120262a1u);
L_120262a1:;
  /* 120262a1 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 120262a7 jmp 0x120263ab */
  goto L_120263ab;
L_120262ac:;
  /* 120262ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120262af mov edx, dword ptr [ecx*4 + 0x12050a38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12050a38)));
  /* 120262b6 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 120262b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120262bb je 0x120262fb */
  if (C.zf) goto L_120262fb;
  /* 120262bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120262c0 cmp dword ptr [eax*4 + 0x12050a44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12050a44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120262c8 je 0x120262fb */
  if (C.zf) goto L_120262fb;
  /* 120262ca push 0 */
  push32((uint32_t)(0x0u));
  /* 120262cc lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 120262d2 push ecx */
  push32((uint32_t)(ECX));
  /* 120262d3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 120262d9 push edx */
  push32((uint32_t)(EDX));
  /* 120262da call 0x12029d90 */
  push32(0x120262dfu); f_12029d90();
  /* 120262df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120262e2 push eax */
  push32((uint32_t)(EAX));
  /* 120262e3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 120262e9 push eax */
  push32((uint32_t)(EAX));
  /* 120262ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120262ed mov edx, dword ptr [ecx*4 + 0x12050a44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12050a44)));
  /* 120262f4 push edx */
  push32((uint32_t)(EDX));
  /* 120262f5 call dword ptr [0x120553b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553b4))), 0x120262fbu);
L_120262fb:;
  /* 120262fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120262fe mov ecx, dword ptr [eax*4 + 0x12050a38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12050a38)));
  /* 12026305 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12026308 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202630a je 0x12026319 */
  if (C.zf) goto L_12026319;
  /* 1202630c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12026312 push edx */
  push32((uint32_t)(EDX));
  /* 12026313 call dword ptr [0x120553bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553bc))), 0x12026319u);
L_12026319:;
  /* 12026319 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202631c mov ecx, dword ptr [eax*4 + 0x12050a38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12050a38)));
  /* 12026323 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12026326 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12026328 je 0x12026398 */
  if (C.zf) goto L_12026398;
  /* 1202632a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202632e je 0x1202634d */
  if (C.zf) goto L_1202634d;
  /* 12026330 push 0xa */
  push32((uint32_t)(0xau));
  /* 12026332 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 12026338 push edx */
  push32((uint32_t)(EDX));
  /* 12026339 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1202633c push eax */
  push32((uint32_t)(EAX));
  /* 1202633d call 0x12029aa0 */
  push32(0x12026342u); f_12029aa0();
  /* 12026342 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12026345 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 1202634b jmp 0x12026357 */
  goto L_12026357;
L_1202634d:;
  /* 1202634d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_12026357:;
  /* 12026357 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 1202635d push ecx */
  push32((uint32_t)(ECX));
  /* 1202635e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12026361 push edx */
  push32((uint32_t)(EDX));
  /* 12026362 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 12026368 push eax */
  push32((uint32_t)(EAX));
  /* 12026369 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202636c push ecx */
  push32((uint32_t)(ECX));
  /* 1202636d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12026370 push edx */
  push32((uint32_t)(EDX));
  /* 12026371 call 0x120263b0 */
  push32(0x12026376u); f_120263b0();
  /* 12026376 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12026379 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 1202637f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026383 jne 0x12026390 */
  if (!C.zf) goto L_12026390;
  /* 12026385 push 0x12050a34 */
  push32((uint32_t)(0x12050a34u));
  /* 1202638a call dword ptr [0x120553b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553b8))), 0x12026390u);
L_12026390:;
  /* 12026390 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12026396 jmp 0x120263ab */
  goto L_120263ab;
L_12026398:;
  /* 12026398 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202639c jne 0x120263a9 */
  if (!C.zf) goto L_120263a9;
  /* 1202639e push 0x12050a34 */
  push32((uint32_t)(0x12050a34u));
  /* 120263a3 call dword ptr [0x120553b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553b8))), 0x120263a9u);
L_120263a9:;
  /* 120263a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120263ab:;
  /* 120263ab pop edi */
  EDI = (pop32());
  /* 120263ac mov esp, ebp */
  ESP = (EBP);
  /* 120263ae pop ebp */
  EBP = (pop32());
  /* 120263af ret  */
  ESPCHK(0x12026020u, _esp0);
  ESP += 4; return;
}

/* FUN_100063b0 @ 0x120263b0 (780 bytes, 197 insns) */
void f_120263b0(void) {
  FTRACE(0x120263b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120263b0 push ebp */
  push32((uint32_t)(EBP));
  /* 120263b1 mov ebp, esp */
  EBP = (ESP);
  /* 120263b3 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 120263b8 call 0x1202a100 */
  push32(0x120263bdu); f_1202a100();
L_120263bd:;
  /* 120263bd cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120263c1 jne 0x120263e8 */
  if (!C.zf) goto L_120263e8;
  /* 120263c3 push 0x1204d938 */
  push32((uint32_t)(0x1204d938u));
  /* 120263c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 120263ca push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 120263cf push 0x1204d92c */
  push32((uint32_t)(0x1204d92cu));
  /* 120263d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 120263d6 call 0x12026020 */
  push32(0x120263dbu); f_12026020();
  /* 120263db add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120263de cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120263e1 jne 0x120263e8 */
  if (!C.zf) goto L_120263e8;
  /* 120263e3 call 0x12025f10 */
  push32(0x120263e8u); f_12025f10();
L_120263e8:;
  /* 120263e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120263ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120263ec jne 0x120263bd */
  if (!C.zf) goto L_120263bd;
  /* 120263ee push 0x104 */
  push32((uint32_t)(0x104u));
  /* 120263f3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 120263f9 push ecx */
  push32((uint32_t)(ECX));
  /* 120263fa push 0 */
  push32((uint32_t)(0x0u));
  /* 120263fc call dword ptr [0x120552e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120552e0))), 0x12026402u);
  /* 12026402 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12026404 jne 0x1202641a */
  if (!C.zf) goto L_1202641a;
  /* 12026406 push 0x1204d914 */
  push32((uint32_t)(0x1204d914u));
  /* 1202640b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 12026411 push edx */
  push32((uint32_t)(EDX));
  /* 12026412 call 0x12029f10 */
  push32(0x12026417u); f_12029f10();
  /* 12026417 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1202641a:;
  /* 1202641a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 12026420 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12026423 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12026426 push ecx */
  push32((uint32_t)(ECX));
  /* 12026427 call 0x12029d90 */
  push32(0x1202642cu); f_12029d90();
  /* 1202642c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202642f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026432 jbe 0x1202645d */
  if ((C.cf||C.zf)) goto L_1202645d;
  /* 12026434 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12026437 push edx */
  push32((uint32_t)(EDX));
  /* 12026438 call 0x12029d90 */
  push32(0x1202643du); f_12029d90();
  /* 1202643d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12026440 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12026443 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12026447 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1202644a push 3 */
  push32((uint32_t)(0x3u));
  /* 1202644c push 0x1204d910 */
  push32((uint32_t)(0x1204d910u));
  /* 12026451 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12026454 push eax */
  push32((uint32_t)(EAX));
  /* 12026455 call 0x1202a780 */
  push32(0x1202645au); f_1202a780();
  /* 1202645a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1202645d:;
  /* 1202645d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12026460 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 12026466 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202646d je 0x120264b8 */
  if (C.zf) goto L_120264b8;
  /* 1202646f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12026475 push edx */
  push32((uint32_t)(EDX));
  /* 12026476 call 0x12029d90 */
  push32(0x1202647bu); f_12029d90();
  /* 1202647b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202647e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026481 jbe 0x120264b8 */
  if ((C.cf||C.zf)) goto L_120264b8;
  /* 12026483 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12026489 push eax */
  push32((uint32_t)(EAX));
  /* 1202648a call 0x12029d90 */
  push32(0x1202648fu); f_12029d90();
  /* 1202648f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12026492 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12026498 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 1202649c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 120264a2 push 3 */
  push32((uint32_t)(0x3u));
  /* 120264a4 push 0x1204d910 */
  push32((uint32_t)(0x1204d910u));
  /* 120264a9 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 120264af push eax */
  push32((uint32_t)(EAX));
  /* 120264b0 call 0x1202a780 */
  push32(0x120264b5u); f_1202a780();
  /* 120264b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120264b8:;
  /* 120264b8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120264bc jne 0x120264ca */
  if (!C.zf) goto L_120264ca;
  /* 120264be mov dword ptr [ebp - 0x1114], 0x1204d89c */
  w32((uint32_t)(EBP + -0x1114), (0x1204d89cu));
  /* 120264c8 jmp 0x120264d4 */
  goto L_120264d4;
L_120264ca:;
  /* 120264ca mov dword ptr [ebp - 0x1114], 0x1204d63c */
  w32((uint32_t)(EBP + -0x1114), (0x1204d63cu));
L_120264d4:;
  /* 120264d4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120264d7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120264da test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120264dc je 0x120264e9 */
  if (C.zf) goto L_120264e9;
  /* 120264de mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120264e1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 120264e7 jmp 0x120264f3 */
  goto L_120264f3;
L_120264e9:;
  /* 120264e9 mov dword ptr [ebp - 0x1118], 0x1204d63c */
  w32((uint32_t)(EBP + -0x1118), (0x1204d63cu));
L_120264f3:;
  /* 120264f3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120264f6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120264f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120264fb je 0x1202650f */
  if (C.zf) goto L_1202650f;
  /* 120264fd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026501 jne 0x1202650f */
  if (!C.zf) goto L_1202650f;
  /* 12026503 mov dword ptr [ebp - 0x111c], 0x1204d88c */
  w32((uint32_t)(EBP + -0x111c), (0x1204d88cu));
  /* 1202650d jmp 0x12026519 */
  goto L_12026519;
L_1202650f:;
  /* 1202650f mov dword ptr [ebp - 0x111c], 0x1204d63c */
  w32((uint32_t)(EBP + -0x111c), (0x1204d63cu));
L_12026519:;
  /* 12026519 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1202651c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1202651f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12026521 je 0x1202652f */
  if (C.zf) goto L_1202652f;
  /* 12026523 mov dword ptr [ebp - 0x1120], 0x1204d888 */
  w32((uint32_t)(EBP + -0x1120), (0x1204d888u));
  /* 1202652d jmp 0x12026539 */
  goto L_12026539;
L_1202652f:;
  /* 1202652f mov dword ptr [ebp - 0x1120], 0x1204d63c */
  w32((uint32_t)(EBP + -0x1120), (0x1204d63cu));
L_12026539:;
  /* 12026539 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202653d je 0x1202654a */
  if (C.zf) goto L_1202654a;
  /* 1202653f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12026542 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 12026548 jmp 0x12026554 */
  goto L_12026554;
L_1202654a:;
  /* 1202654a mov dword ptr [ebp - 0x1124], 0x1204d63c */
  w32((uint32_t)(EBP + -0x1124), (0x1204d63cu));
L_12026554:;
  /* 12026554 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026558 je 0x12026566 */
  if (C.zf) goto L_12026566;
  /* 1202655a mov dword ptr [ebp - 0x1128], 0x1204d880 */
  w32((uint32_t)(EBP + -0x1128), (0x1204d880u));
  /* 12026564 jmp 0x12026570 */
  goto L_12026570;
L_12026566:;
  /* 12026566 mov dword ptr [ebp - 0x1128], 0x1204d63c */
  w32((uint32_t)(EBP + -0x1128), (0x1204d63cu));
L_12026570:;
  /* 12026570 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026574 je 0x12026581 */
  if (C.zf) goto L_12026581;
  /* 12026576 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12026579 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 1202657f jmp 0x1202658b */
  goto L_1202658b;
L_12026581:;
  /* 12026581 mov dword ptr [ebp - 0x112c], 0x1204d63c */
  w32((uint32_t)(EBP + -0x112c), (0x1204d63cu));
L_1202658b:;
  /* 1202658b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202658f je 0x1202659d */
  if (C.zf) goto L_1202659d;
  /* 12026591 mov dword ptr [ebp - 0x1130], 0x1204d878 */
  w32((uint32_t)(EBP + -0x1130), (0x1204d878u));
  /* 1202659b jmp 0x120265a7 */
  goto L_120265a7;
L_1202659d:;
  /* 1202659d mov dword ptr [ebp - 0x1130], 0x1204d63c */
  w32((uint32_t)(EBP + -0x1130), (0x1204d63cu));
L_120265a7:;
  /* 120265a7 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120265ae je 0x120265be */
  if (C.zf) goto L_120265be;
  /* 120265b0 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 120265b6 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 120265bc jmp 0x120265c8 */
  goto L_120265c8;
L_120265be:;
  /* 120265be mov dword ptr [ebp - 0x1134], 0x1204d63c */
  w32((uint32_t)(EBP + -0x1134), (0x1204d63cu));
L_120265c8:;
  /* 120265c8 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120265cf je 0x120265dd */
  if (C.zf) goto L_120265dd;
  /* 120265d1 mov dword ptr [ebp - 0x1138], 0x1204d86c */
  w32((uint32_t)(EBP + -0x1138), (0x1204d86cu));
  /* 120265db jmp 0x120265e7 */
  goto L_120265e7;
L_120265dd:;
  /* 120265dd mov dword ptr [ebp - 0x1138], 0x1204d63c */
  w32((uint32_t)(EBP + -0x1138), (0x1204d63cu));
L_120265e7:;
  /* 120265e7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 120265ed push edx */
  push32((uint32_t)(EDX));
  /* 120265ee mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 120265f4 push eax */
  push32((uint32_t)(EAX));
  /* 120265f5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 120265fb push ecx */
  push32((uint32_t)(ECX));
  /* 120265fc mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 12026602 push edx */
  push32((uint32_t)(EDX));
  /* 12026603 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 12026609 push eax */
  push32((uint32_t)(EAX));
  /* 1202660a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 12026610 push ecx */
  push32((uint32_t)(ECX));
  /* 12026611 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 12026617 push edx */
  push32((uint32_t)(EDX));
  /* 12026618 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 1202661e push eax */
  push32((uint32_t)(EAX));
  /* 1202661f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 12026625 push ecx */
  push32((uint32_t)(ECX));
  /* 12026626 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 1202662c push edx */
  push32((uint32_t)(EDX));
  /* 1202662d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12026630 push eax */
  push32((uint32_t)(EAX));
  /* 12026631 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12026634 mov edx, dword ptr [ecx*4 + 0x12050a50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12050a50)));
  /* 1202663b push edx */
  push32((uint32_t)(EDX));
  /* 1202663c push 0x1204d818 */
  push32((uint32_t)(0x1204d818u));
  /* 12026641 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12026646 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 1202664c push eax */
  push32((uint32_t)(EAX));
  /* 1202664d call 0x12029e10 */
  push32(0x12026652u); f_12029e10();
  /* 12026652 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12026655 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12026657 jge 0x1202666d */
  if ((C.sf==C.of)) goto L_1202666d;
  /* 12026659 push 0x1204d77c */
  push32((uint32_t)(0x1204d77cu));
  /* 1202665e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 12026664 push ecx */
  push32((uint32_t)(ECX));
  /* 12026665 call 0x12029f10 */
  push32(0x1202666au); f_12029f10();
  /* 1202666a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1202666d:;
  /* 1202666d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 12026672 push 0x1204d7f4 */
  push32((uint32_t)(0x1204d7f4u));
  /* 12026677 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 1202667d push edx */
  push32((uint32_t)(EDX));
  /* 1202667e call 0x1202a6c0 */
  push32(0x12026683u); f_1202a6c0();
  /* 12026683 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12026686 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 1202668c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026693 jne 0x120266a6 */
  if (!C.zf) goto L_120266a6;
  /* 12026695 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12026697 call 0x1202a400 */
  push32(0x1202669cu); f_1202a400();
  /* 1202669c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202669f push 3 */
  push32((uint32_t)(0x3u));
  /* 120266a1 call 0x12026720 */
  push32(0x120266a6u); f_12026720();
L_120266a6:;
  /* 120266a6 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120266ad jne 0x120266b6 */
  if (!C.zf) goto L_120266b6;
  /* 120266af mov eax, 1 */
  EAX = (0x1u);
  /* 120266b4 jmp 0x120266b8 */
  goto L_120266b8;
L_120266b6:;
  /* 120266b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120266b8:;
  /* 120266b8 mov esp, ebp */
  ESP = (EBP);
  /* 120266ba pop ebp */
  EBP = (pop32());
  /* 120266bb ret  */
  ESPCHK(0x120263b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100066c0 @ 0x120266c0 (56 bytes, 15 insns) */
void f_120266c0(void) {
  FTRACE(0x120266c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120266c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120266c1 mov ebp, esp */
  EBP = (ESP);
  /* 120266c3 cmp dword ptr [0x1205431c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1205431c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120266ca je 0x120266d2 */
  if (C.zf) goto L_120266d2;
  /* 120266cc call dword ptr [0x1205431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205431c))), 0x120266d2u);
L_120266d2:;
  /* 120266d2 push 0x12050418 */
  push32((uint32_t)(0x12050418u));
  /* 120266d7 push 0x12050208 */
  push32((uint32_t)(0x12050208u));
  /* 120266dc call 0x12026890 */
  push32(0x120266e1u); f_12026890();
  /* 120266e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120266e4 push 0x12050104 */
  push32((uint32_t)(0x12050104u));
  /* 120266e9 push 0x12050000 */
  push32((uint32_t)(0x12050000u));
  /* 120266ee call 0x12026890 */
  push32(0x120266f3u); f_12026890();
  /* 120266f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120266f6 pop ebp */
  EBP = (pop32());
  /* 120266f7 ret  */
  ESPCHK(0x120266c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006700 @ 0x12026700 (21 bytes, 10 insns) */
void f_12026700(void) {
  FTRACE(0x12026700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12026700 push ebp */
  push32((uint32_t)(EBP));
  /* 12026701 mov ebp, esp */
  EBP = (ESP);
  /* 12026703 push 0 */
  push32((uint32_t)(0x0u));
  /* 12026705 push 0 */
  push32((uint32_t)(0x0u));
  /* 12026707 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202670a push eax */
  push32((uint32_t)(EAX));
  /* 1202670b call 0x12026780 */
  push32(0x12026710u); f_12026780();
  /* 12026710 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12026713 pop ebp */
  EBP = (pop32());
  /* 12026714 ret  */
  ESPCHK(0x12026700u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x12026720 (21 bytes, 10 insns) */
void f_12026720(void) {
  FTRACE(0x12026720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12026720 push ebp */
  push32((uint32_t)(EBP));
  /* 12026721 mov ebp, esp */
  EBP = (ESP);
  /* 12026723 push 0 */
  push32((uint32_t)(0x0u));
  /* 12026725 push 1 */
  push32((uint32_t)(0x1u));
  /* 12026727 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202672a push eax */
  push32((uint32_t)(EAX));
  /* 1202672b call 0x12026780 */
  push32(0x12026730u); f_12026780();
  /* 12026730 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12026733 pop ebp */
  EBP = (pop32());
  /* 12026734 ret  */
  ESPCHK(0x12026720u, _esp0);
  ESP += 4; return;
}

/* FUN_10006740 @ 0x12026740 (19 bytes, 9 insns) */
void f_12026740(void) {
  FTRACE(0x12026740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12026740 push ebp */
  push32((uint32_t)(EBP));
  /* 12026741 mov ebp, esp */
  EBP = (ESP);
  /* 12026743 push 1 */
  push32((uint32_t)(0x1u));
  /* 12026745 push 0 */
  push32((uint32_t)(0x0u));
  /* 12026747 push 0 */
  push32((uint32_t)(0x0u));
  /* 12026749 call 0x12026780 */
  push32(0x1202674eu); f_12026780();
  /* 1202674e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12026751 pop ebp */
  EBP = (pop32());
  /* 12026752 ret  */
  ESPCHK(0x12026740u, _esp0);
  ESP += 4; return;
}

/* FUN_10006760 @ 0x12026760 (19 bytes, 9 insns) */
void f_12026760(void) {
  FTRACE(0x12026760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12026760 push ebp */
  push32((uint32_t)(EBP));
  /* 12026761 mov ebp, esp */
  EBP = (ESP);
  /* 12026763 push 1 */
  push32((uint32_t)(0x1u));
  /* 12026765 push 1 */
  push32((uint32_t)(0x1u));
  /* 12026767 push 0 */
  push32((uint32_t)(0x0u));
  /* 12026769 call 0x12026780 */
  push32(0x1202676eu); f_12026780();
  /* 1202676e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12026771 pop ebp */
  EBP = (pop32());
  /* 12026772 ret  */
  ESPCHK(0x12026760u, _esp0);
  ESP += 4; return;
}

/* FUN_10006780 @ 0x12026780 (227 bytes, 61 insns) */
void f_12026780(void) {
  FTRACE(0x12026780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12026780 push ebp */
  push32((uint32_t)(EBP));
  /* 12026781 mov ebp, esp */
  EBP = (ESP);
  /* 12026783 push ecx */
  push32((uint32_t)(ECX));
  /* 12026784 call 0x12026870 */
  push32(0x12026789u); f_12026870();
  /* 12026789 cmp dword ptr [0x12052824], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12052824))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026790 jne 0x120267a3 */
  if (!C.zf) goto L_120267a3;
  /* 12026792 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12026795 push eax */
  push32((uint32_t)(EAX));
  /* 12026796 call dword ptr [0x120553d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553d8))), 0x1202679cu);
  /* 1202679c push eax */
  push32((uint32_t)(EAX));
  /* 1202679d call dword ptr [0x120553d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553d4))), 0x120267a3u);
L_120267a3:;
  /* 120267a3 mov dword ptr [0x12052820], 1 */
  w32((uint32_t)(0x12052820), (0x1u));
  /* 120267ad mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 120267b0 mov byte ptr [0x1205281c], cl */
  w8((uint32_t)(0x1205281c), (CL));
  /* 120267b6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120267ba jne 0x12026803 */
  if (!C.zf) goto L_12026803;
  /* 120267bc cmp dword ptr [0x12054318], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12054318))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120267c3 je 0x120267f1 */
  if (C.zf) goto L_120267f1;
  /* 120267c5 mov edx, dword ptr [0x12054314] */
  EDX = (r32((uint32_t)(0x12054314)));
  /* 120267cb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120267ce:;
  /* 120267ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120267d1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120267d4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120267d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120267da cmp ecx, dword ptr [0x12054318] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12054318))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120267e0 jb 0x120267f1 */
  if (C.cf) goto L_120267f1;
  /* 120267e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120267e5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120267e8 je 0x120267ef */
  if (C.zf) goto L_120267ef;
  /* 120267ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120267ed call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x120267efu);
L_120267ef:;
  /* 120267ef jmp 0x120267ce */
  goto L_120267ce;
L_120267f1:;
  /* 120267f1 push 0x12050724 */
  push32((uint32_t)(0x12050724u));
  /* 120267f6 push 0x1205051c */
  push32((uint32_t)(0x1205051cu));
  /* 120267fb call 0x12026890 */
  push32(0x12026800u); f_12026890();
  /* 12026800 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12026803:;
  /* 12026803 push 0x1205092c */
  push32((uint32_t)(0x1205092cu));
  /* 12026808 push 0x12050828 */
  push32((uint32_t)(0x12050828u));
  /* 1202680d call 0x12026890 */
  push32(0x12026812u); f_12026890();
  /* 12026812 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12026815 cmp dword ptr [0x12052828], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052828))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202681c jne 0x1202683e */
  if (!C.zf) goto L_1202683e;
  /* 1202681e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12026820 call 0x12028470 */
  push32(0x12026825u); f_12028470();
  /* 12026825 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12026828 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1202682b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202682d je 0x1202683e */
  if (C.zf) goto L_1202683e;
  /* 1202682f mov dword ptr [0x12052828], 1 */
  w32((uint32_t)(0x12052828), (0x1u));
  /* 12026839 call 0x12028d80 */
  push32(0x1202683eu); f_12028d80();
L_1202683e:;
  /* 1202683e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026842 je 0x1202684b */
  if (C.zf) goto L_1202684b;
  /* 12026844 call 0x12026880 */
  push32(0x12026849u); f_12026880();
  /* 12026849 jmp 0x1202685f */
  goto L_1202685f;
L_1202684b:;
  /* 1202684b mov dword ptr [0x12052824], 1 */
  w32((uint32_t)(0x12052824), (0x1u));
  /* 12026855 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12026858 push ecx */
  push32((uint32_t)(ECX));
  /* 12026859 call dword ptr [0x120552dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120552dc))), 0x1202685fu);
L_1202685f:;
  /* 1202685f mov esp, ebp */
  ESP = (EBP);
  /* 12026861 pop ebp */
  EBP = (pop32());
  /* 12026862 ret  */
  ESPCHK(0x12026780u, _esp0);
  ESP += 4; return;
}

/* FUN_10006870 @ 0x12026870 (15 bytes, 7 insns) */
void f_12026870(void) {
  FTRACE(0x12026870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12026870 push ebp */
  push32((uint32_t)(EBP));
  /* 12026871 mov ebp, esp */
  EBP = (ESP);
  /* 12026873 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12026875 call 0x1202a960 */
  push32(0x1202687au); f_1202a960();
  /* 1202687a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202687d pop ebp */
  EBP = (pop32());
  /* 1202687e ret  */
  ESPCHK(0x12026870u, _esp0);
  ESP += 4; return;
}

/* FUN_10006880 @ 0x12026880 (15 bytes, 7 insns) */
void f_12026880(void) {
  FTRACE(0x12026880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12026880 push ebp */
  push32((uint32_t)(EBP));
  /* 12026881 mov ebp, esp */
  EBP = (ESP);
  /* 12026883 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12026885 call 0x1202aa00 */
  push32(0x1202688au); f_1202aa00();
  /* 1202688a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202688d pop ebp */
  EBP = (pop32());
  /* 1202688e ret  */
  ESPCHK(0x12026880u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x12026890 (37 bytes, 16 insns) */
void f_12026890(void) {
  FTRACE(0x12026890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12026890 push ebp */
  push32((uint32_t)(EBP));
  /* 12026891 mov ebp, esp */
  EBP = (ESP);
L_12026893:;
  /* 12026893 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12026896 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026899 jae 0x120268b3 */
  if (!C.cf) goto L_120268b3;
  /* 1202689b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202689e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120268a1 je 0x120268a8 */
  if (C.zf) goto L_120268a8;
  /* 120268a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120268a6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x120268a8u);
L_120268a8:;
  /* 120268a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120268ab add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120268ae mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 120268b1 jmp 0x12026893 */
  goto L_12026893;
L_120268b3:;
  /* 120268b3 pop ebp */
  EBP = (pop32());
  /* 120268b4 ret  */
  ESPCHK(0x12026890u, _esp0);
  ESP += 4; return;
}

/* FUN_100068c0 @ 0x120268c0 (130 bytes, 42 insns) */
void f_120268c0(void) {
  FTRACE(0x120268c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120268c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120268c1 mov ebp, esp */
  EBP = (ESP);
  /* 120268c3 push ecx */
  push32((uint32_t)(ECX));
  /* 120268c4 call 0x1202a880 */
  push32(0x120268c9u); f_1202a880();
  /* 120268c9 call dword ptr [0x120553e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553e4))), 0x120268cfu);
  /* 120268cf mov dword ptr [0x12050a5c], eax */
  w32((uint32_t)(0x12050a5c), (EAX));
  /* 120268d4 cmp dword ptr [0x12050a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12050a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120268db jne 0x120268e1 */
  if (!C.zf) goto L_120268e1;
  /* 120268dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120268df jmp 0x1202693e */
  goto L_1202693e;
L_120268e1:;
  /* 120268e1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 120268e3 push 0x1204d950 */
  push32((uint32_t)(0x1204d950u));
  /* 120268e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 120268ea push 0x74 */
  push32((uint32_t)(0x74u));
  /* 120268ec push 1 */
  push32((uint32_t)(0x1u));
  /* 120268ee call 0x12027370 */
  push32(0x120268f3u); f_12027370();
  /* 120268f3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120268f6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120268f9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120268fd je 0x12026914 */
  if (C.zf) goto L_12026914;
  /* 120268ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12026902 push eax */
  push32((uint32_t)(EAX));
  /* 12026903 mov ecx, dword ptr [0x12050a5c] */
  ECX = (r32((uint32_t)(0x12050a5c)));
  /* 12026909 push ecx */
  push32((uint32_t)(ECX));
  /* 1202690a call dword ptr [0x120553e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553e0))), 0x12026910u);
  /* 12026910 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12026912 jne 0x12026918 */
  if (!C.zf) goto L_12026918;
L_12026914:;
  /* 12026914 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12026916 jmp 0x1202693e */
  goto L_1202693e;
L_12026918:;
  /* 12026918 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202691b push edx */
  push32((uint32_t)(EDX));
  /* 1202691c call 0x12026980 */
  push32(0x12026921u); f_12026980();
  /* 12026921 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12026924 call dword ptr [0x120553dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553dc))), 0x1202692au);
  /* 1202692a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202692d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1202692f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12026932 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12026939 mov eax, 1 */
  EAX = (0x1u);
L_1202693e:;
  /* 1202693e mov esp, ebp */
  ESP = (EBP);
  /* 12026940 pop ebp */
  EBP = (pop32());
  /* 12026941 ret  */
  ESPCHK(0x120268c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006950 @ 0x12026950 (41 bytes, 11 insns) */
void f_12026950(void) {
  FTRACE(0x12026950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12026950 push ebp */
  push32((uint32_t)(EBP));
  /* 12026951 mov ebp, esp */
  EBP = (ESP);
  /* 12026953 call 0x1202a8c0 */
  push32(0x12026958u); f_1202a8c0();
  /* 12026958 cmp dword ptr [0x12050a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12050a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202695f je 0x12026977 */
  if (C.zf) goto L_12026977;
  /* 12026961 mov eax, dword ptr [0x12050a5c] */
  EAX = (r32((uint32_t)(0x12050a5c)));
  /* 12026966 push eax */
  push32((uint32_t)(EAX));
  /* 12026967 call dword ptr [0x120553d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553d0))), 0x1202696du);
  /* 1202696d mov dword ptr [0x12050a5c], 0xffffffff */
  w32((uint32_t)(0x12050a5c), (0xffffffffu));
L_12026977:;
  /* 12026977 pop ebp */
  EBP = (pop32());
  /* 12026978 ret  */
  ESPCHK(0x12026950u, _esp0);
  ESP += 4; return;
}

/* FUN_10006980 @ 0x12026980 (25 bytes, 8 insns) */
void f_12026980(void) {
  FTRACE(0x12026980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12026980 push ebp */
  push32((uint32_t)(EBP));
  /* 12026981 mov ebp, esp */
  EBP = (ESP);
  /* 12026983 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12026986 mov dword ptr [eax + 0x50], 0x12050c00 */
  w32((uint32_t)(EAX + 0x50), (0x12050c00u));
  /* 1202698d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12026990 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 12026997 pop ebp */
  EBP = (pop32());
  /* 12026998 ret  */
  ESPCHK(0x12026980u, _esp0);
  ESP += 4; return;
}

/* FUN_100069a0 @ 0x120269a0 (152 bytes, 48 insns) */
void f_120269a0(void) {
  FTRACE(0x120269a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120269a0 push ebp */
  push32((uint32_t)(EBP));
  /* 120269a1 mov ebp, esp */
  EBP = (ESP);
  /* 120269a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120269a6 call dword ptr [0x120553f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553f0))), 0x120269acu);
  /* 120269ac mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120269af mov eax, dword ptr [0x12050a5c] */
  EAX = (r32((uint32_t)(0x12050a5c)));
  /* 120269b4 push eax */
  push32((uint32_t)(EAX));
  /* 120269b5 call dword ptr [0x120553ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553ec))), 0x120269bbu);
  /* 120269bb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120269be cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120269c2 jne 0x12026a27 */
  if (!C.zf) goto L_12026a27;
  /* 120269c4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 120269c9 push 0x1204d950 */
  push32((uint32_t)(0x1204d950u));
  /* 120269ce push 2 */
  push32((uint32_t)(0x2u));
  /* 120269d0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 120269d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 120269d4 call 0x12027370 */
  push32(0x120269d9u); f_12027370();
  /* 120269d9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120269dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120269df cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120269e3 je 0x12026a1d */
  if (C.zf) goto L_12026a1d;
  /* 120269e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120269e8 push ecx */
  push32((uint32_t)(ECX));
  /* 120269e9 mov edx, dword ptr [0x12050a5c] */
  EDX = (r32((uint32_t)(0x12050a5c)));
  /* 120269ef push edx */
  push32((uint32_t)(EDX));
  /* 120269f0 call dword ptr [0x120553e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553e0))), 0x120269f6u);
  /* 120269f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120269f8 je 0x12026a1d */
  if (C.zf) goto L_12026a1d;
  /* 120269fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120269fd push eax */
  push32((uint32_t)(EAX));
  /* 120269fe call 0x12026980 */
  push32(0x12026a03u); f_12026980();
  /* 12026a03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12026a06 call dword ptr [0x120553dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553dc))), 0x12026a0cu);
  /* 12026a0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12026a0f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12026a11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12026a14 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12026a1b jmp 0x12026a27 */
  goto L_12026a27;
L_12026a1d:;
  /* 12026a1d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12026a1f call 0x12025ed0 */
  push32(0x12026a24u); f_12025ed0();
  /* 12026a24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12026a27:;
  /* 12026a27 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12026a2a push eax */
  push32((uint32_t)(EAX));
  /* 12026a2b call dword ptr [0x120553e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553e8))), 0x12026a31u);
  /* 12026a31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12026a34 mov esp, ebp */
  ESP = (EBP);
  /* 12026a36 pop ebp */
  EBP = (pop32());
  /* 12026a37 ret  */
  ESPCHK(0x120269a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a40 @ 0x12026a40 (263 bytes, 86 insns) */
void f_12026a40(void) {
  FTRACE(0x12026a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12026a40 push ebp */
  push32((uint32_t)(EBP));
  /* 12026a41 mov ebp, esp */
  EBP = (ESP);
  /* 12026a43 cmp dword ptr [0x12050a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12050a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026a4a je 0x12026b45 */
  if (C.zf) goto L_12026b45;
  /* 12026a50 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026a54 jne 0x12026a65 */
  if (!C.zf) goto L_12026a65;
  /* 12026a56 mov eax, dword ptr [0x12050a5c] */
  EAX = (r32((uint32_t)(0x12050a5c)));
  /* 12026a5b push eax */
  push32((uint32_t)(EAX));
  /* 12026a5c call dword ptr [0x120553ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553ec))), 0x12026a62u);
  /* 12026a62 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12026a65:;
  /* 12026a65 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026a69 je 0x12026b36 */
  if (C.zf) goto L_12026b36;
  /* 12026a6f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12026a72 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026a76 je 0x12026a89 */
  if (C.zf) goto L_12026a89;
  /* 12026a78 push 2 */
  push32((uint32_t)(0x2u));
  /* 12026a7a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12026a7d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 12026a80 push eax */
  push32((uint32_t)(EAX));
  /* 12026a81 call 0x120279f0 */
  push32(0x12026a86u); f_120279f0();
  /* 12026a86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12026a89:;
  /* 12026a89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12026a8c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026a90 je 0x12026aa3 */
  if (C.zf) goto L_12026aa3;
  /* 12026a92 push 2 */
  push32((uint32_t)(0x2u));
  /* 12026a94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12026a97 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 12026a9a push eax */
  push32((uint32_t)(EAX));
  /* 12026a9b call 0x120279f0 */
  push32(0x12026aa0u); f_120279f0();
  /* 12026aa0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12026aa3:;
  /* 12026aa3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12026aa6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026aaa je 0x12026abd */
  if (C.zf) goto L_12026abd;
  /* 12026aac push 2 */
  push32((uint32_t)(0x2u));
  /* 12026aae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12026ab1 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 12026ab4 push eax */
  push32((uint32_t)(EAX));
  /* 12026ab5 call 0x120279f0 */
  push32(0x12026abau); f_120279f0();
  /* 12026aba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12026abd:;
  /* 12026abd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12026ac0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026ac4 je 0x12026ad7 */
  if (C.zf) goto L_12026ad7;
  /* 12026ac6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12026ac8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12026acb mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 12026ace push eax */
  push32((uint32_t)(EAX));
  /* 12026acf call 0x120279f0 */
  push32(0x12026ad4u); f_120279f0();
  /* 12026ad4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12026ad7:;
  /* 12026ad7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12026ada cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026ade je 0x12026af1 */
  if (C.zf) goto L_12026af1;
  /* 12026ae0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12026ae2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12026ae5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12026ae8 push eax */
  push32((uint32_t)(EAX));
  /* 12026ae9 call 0x120279f0 */
  push32(0x12026aeeu); f_120279f0();
  /* 12026aee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12026af1:;
  /* 12026af1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12026af4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026af8 je 0x12026b0b */
  if (C.zf) goto L_12026b0b;
  /* 12026afa push 2 */
  push32((uint32_t)(0x2u));
  /* 12026afc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12026aff mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 12026b02 push eax */
  push32((uint32_t)(EAX));
  /* 12026b03 call 0x120279f0 */
  push32(0x12026b08u); f_120279f0();
  /* 12026b08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12026b0b:;
  /* 12026b0b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12026b0e cmp dword ptr [ecx + 0x50], 0x12050c00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x12050c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026b15 je 0x12026b28 */
  if (C.zf) goto L_12026b28;
  /* 12026b17 push 2 */
  push32((uint32_t)(0x2u));
  /* 12026b19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12026b1c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12026b1f push eax */
  push32((uint32_t)(EAX));
  /* 12026b20 call 0x120279f0 */
  push32(0x12026b25u); f_120279f0();
  /* 12026b25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12026b28:;
  /* 12026b28 push 2 */
  push32((uint32_t)(0x2u));
  /* 12026b2a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12026b2d push ecx */
  push32((uint32_t)(ECX));
  /* 12026b2e call 0x120279f0 */
  push32(0x12026b33u); f_120279f0();
  /* 12026b33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12026b36:;
  /* 12026b36 push 0 */
  push32((uint32_t)(0x0u));
  /* 12026b38 mov edx, dword ptr [0x12050a5c] */
  EDX = (r32((uint32_t)(0x12050a5c)));
  /* 12026b3e push edx */
  push32((uint32_t)(EDX));
  /* 12026b3f call dword ptr [0x120553e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553e0))), 0x12026b45u);
L_12026b45:;
  /* 12026b45 pop ebp */
  EBP = (pop32());
  /* 12026b46 ret  */
  ESPCHK(0x12026a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b50 @ 0x12026b50 (11 bytes, 5 insns) */
void f_12026b50(void) {
  FTRACE(0x12026b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12026b50 push ebp */
  push32((uint32_t)(EBP));
  /* 12026b51 mov ebp, esp */
  EBP = (ESP);
  /* 12026b53 call dword ptr [0x120553dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553dc))), 0x12026b59u);
  /* 12026b59 pop ebp */
  EBP = (pop32());
  /* 12026b5a ret  */
  ESPCHK(0x12026b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b60 @ 0x12026b60 (11 bytes, 5 insns) */
void f_12026b60(void) {
  FTRACE(0x12026b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12026b60 push ebp */
  push32((uint32_t)(EBP));
  /* 12026b61 mov ebp, esp */
  EBP = (ESP);
  /* 12026b63 call dword ptr [0x120553f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553f4))), 0x12026b69u);
  /* 12026b69 pop ebp */
  EBP = (pop32());
  /* 12026b6a ret  */
  ESPCHK(0x12026b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b70 @ 0x12026b70 (804 bytes, 236 insns) */
void f_12026b70(void) {
  FTRACE(0x12026b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12026b70 push ebp */
  push32((uint32_t)(EBP));
  /* 12026b71 mov ebp, esp */
  EBP = (ESP);
  /* 12026b73 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12026b76 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 12026b7b push 0x1204d95c */
  push32((uint32_t)(0x1204d95cu));
  /* 12026b80 push 2 */
  push32((uint32_t)(0x2u));
  /* 12026b82 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12026b87 call 0x12026f60 */
  push32(0x12026b8cu); f_12026f60();
  /* 12026b8c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12026b8f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12026b92 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026b96 jne 0x12026ba2 */
  if (!C.zf) goto L_12026ba2;
  /* 12026b98 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 12026b9a call 0x12025ed0 */
  push32(0x12026b9fu); f_12025ed0();
  /* 12026b9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12026ba2:;
  /* 12026ba2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12026ba5 mov dword ptr [0x120541c0], eax */
  w32((uint32_t)(0x120541c0), (EAX));
  /* 12026baa mov dword ptr [0x120542fc], 0x20 */
  w32((uint32_t)(0x120542fc), (0x20u));
  /* 12026bb4 jmp 0x12026bbf */
  goto L_12026bbf;
L_12026bb6:;
  /* 12026bb6 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12026bb9 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12026bbc mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_12026bbf:;
  /* 12026bbf mov edx, dword ptr [0x120541c0] */
  EDX = (r32((uint32_t)(0x120541c0)));
  /* 12026bc5 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12026bcb cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026bce jae 0x12026bf3 */
  if (!C.cf) goto L_12026bf3;
  /* 12026bd0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12026bd3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12026bd7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12026bda mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12026be0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12026be3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12026be7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12026bea mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12026bf1 jmp 0x12026bb6 */
  goto L_12026bb6;
L_12026bf3:;
  /* 12026bf3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12026bf6 push ecx */
  push32((uint32_t)(ECX));
  /* 12026bf7 call dword ptr [0x120553a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553a0))), 0x12026bfdu);
  /* 12026bfd mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 12026c00 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12026c06 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12026c08 je 0x12026d95 */
  if (C.zf) goto L_12026d95;
  /* 12026c0e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026c12 je 0x12026d95 */
  if (C.zf) goto L_12026d95;
  /* 12026c18 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12026c1b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12026c1d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 12026c20 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12026c23 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12026c26 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12026c29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12026c2c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12026c2f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 12026c32 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026c39 jge 0x12026c43 */
  if ((C.sf==C.of)) goto L_12026c43;
  /* 12026c3b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 12026c3e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 12026c41 jmp 0x12026c4a */
  goto L_12026c4a;
L_12026c43:;
  /* 12026c43 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_12026c4a:;
  /* 12026c4a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 12026c4d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12026c50 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 12026c57 jmp 0x12026c62 */
  goto L_12026c62;
L_12026c59:;
  /* 12026c59 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12026c5c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12026c5f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_12026c62:;
  /* 12026c62 mov ecx, dword ptr [0x120542fc] */
  ECX = (r32((uint32_t)(0x120542fc)));
  /* 12026c68 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026c6b jge 0x12026d02 */
  if ((C.sf==C.of)) goto L_12026d02;
  /* 12026c71 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12026c76 push 0x1204d95c */
  push32((uint32_t)(0x1204d95cu));
  /* 12026c7b push 2 */
  push32((uint32_t)(0x2u));
  /* 12026c7d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12026c82 call 0x12026f60 */
  push32(0x12026c87u); f_12026f60();
  /* 12026c87 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12026c8a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12026c8d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026c91 jne 0x12026c9e */
  if (!C.zf) goto L_12026c9e;
  /* 12026c93 mov edx, dword ptr [0x120542fc] */
  EDX = (r32((uint32_t)(0x120542fc)));
  /* 12026c99 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12026c9c jmp 0x12026d02 */
  goto L_12026d02;
L_12026c9e:;
  /* 12026c9e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12026ca1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12026ca4 mov dword ptr [eax*4 + 0x120541c0], ecx */
  w32((uint32_t)(EAX*4 + 0x120541c0), (ECX));
  /* 12026cab mov edx, dword ptr [0x120542fc] */
  EDX = (r32((uint32_t)(0x120542fc)));
  /* 12026cb1 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12026cb4 mov dword ptr [0x120542fc], edx */
  w32((uint32_t)(0x120542fc), (EDX));
  /* 12026cba jmp 0x12026cc5 */
  goto L_12026cc5;
L_12026cbc:;
  /* 12026cbc mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12026cbf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12026cc2 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_12026cc5:;
  /* 12026cc5 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12026cc8 mov edx, dword ptr [ecx*4 + 0x120541c0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x120541c0)));
  /* 12026ccf add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12026cd5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026cd8 jae 0x12026cfd */
  if (!C.cf) goto L_12026cfd;
  /* 12026cda mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12026cdd mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12026ce1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12026ce4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12026cea mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12026ced mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12026cf1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12026cf4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12026cfb jmp 0x12026cbc */
  goto L_12026cbc;
L_12026cfd:;
  /* 12026cfd jmp 0x12026c59 */
  goto L_12026c59;
L_12026d02:;
  /* 12026d02 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12026d09 jmp 0x12026d26 */
  goto L_12026d26;
L_12026d0b:;
  /* 12026d0b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12026d0e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12026d11 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 12026d14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12026d17 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12026d1a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12026d1d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 12026d20 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12026d23 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_12026d26:;
  /* 12026d26 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12026d29 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026d2c jge 0x12026d95 */
  if ((C.sf==C.of)) goto L_12026d95;
  /* 12026d2e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 12026d31 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026d34 je 0x12026d90 */
  if (C.zf) goto L_12026d90;
  /* 12026d36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12026d39 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12026d3c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12026d3f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12026d41 je 0x12026d90 */
  if (C.zf) goto L_12026d90;
  /* 12026d43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12026d46 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12026d49 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12026d4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12026d4e jne 0x12026d60 */
  if (!C.zf) goto L_12026d60;
  /* 12026d50 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12026d53 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12026d55 push edx */
  push32((uint32_t)(EDX));
  /* 12026d56 call dword ptr [0x120553cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553cc))), 0x12026d5cu);
  /* 12026d5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12026d5e je 0x12026d90 */
  if (C.zf) goto L_12026d90;
L_12026d60:;
  /* 12026d60 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12026d63 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12026d66 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12026d69 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12026d6c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12026d6f mov edx, dword ptr [eax*4 + 0x120541c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x120541c0)));
  /* 12026d76 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12026d78 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12026d7b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12026d7e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12026d81 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12026d83 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12026d85 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12026d88 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12026d8b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12026d8d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_12026d90:;
  /* 12026d90 jmp 0x12026d0b */
  goto L_12026d0b;
L_12026d95:;
  /* 12026d95 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12026d9c jmp 0x12026da7 */
  goto L_12026da7;
L_12026d9e:;
  /* 12026d9e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12026da1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12026da4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_12026da7:;
  /* 12026da7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026dab jge 0x12026e84 */
  if ((C.sf==C.of)) goto L_12026e84;
  /* 12026db1 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12026db4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12026db7 mov edx, dword ptr [0x120541c0] */
  EDX = (r32((uint32_t)(0x120541c0)));
  /* 12026dbd add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12026dbf mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12026dc2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12026dc5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026dc8 jne 0x12026e70 */
  if (!C.zf) goto L_12026e70;
  /* 12026dce mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12026dd1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 12026dd5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026dd9 jne 0x12026de4 */
  if (!C.zf) goto L_12026de4;
  /* 12026ddb mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 12026de2 jmp 0x12026df4 */
  goto L_12026df4;
L_12026de4:;
  /* 12026de4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 12026de7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12026dea neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12026dec sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12026dee add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12026df1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_12026df4:;
  /* 12026df4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 12026df7 push eax */
  push32((uint32_t)(EAX));
  /* 12026df8 call dword ptr [0x120553b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553b0))), 0x12026dfeu);
  /* 12026dfe mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 12026e01 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026e05 je 0x12026e5f */
  if (C.zf) goto L_12026e5f;
  /* 12026e07 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12026e0a push ecx */
  push32((uint32_t)(ECX));
  /* 12026e0b call dword ptr [0x120553cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553cc))), 0x12026e11u);
  /* 12026e11 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12026e14 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026e18 je 0x12026e5f */
  if (C.zf) goto L_12026e5f;
  /* 12026e1a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12026e1d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12026e20 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12026e22 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 12026e25 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12026e2b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026e2e jne 0x12026e40 */
  if (!C.zf) goto L_12026e40;
  /* 12026e30 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12026e33 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12026e36 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12026e38 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12026e3b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 12026e3e jmp 0x12026e5d */
  goto L_12026e5d;
L_12026e40:;
  /* 12026e40 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 12026e43 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12026e49 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026e4c jne 0x12026e5d */
  if (!C.zf) goto L_12026e5d;
  /* 12026e4e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12026e51 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12026e54 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 12026e57 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12026e5a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12026e5d:;
  /* 12026e5d jmp 0x12026e6e */
  goto L_12026e6e;
L_12026e5f:;
  /* 12026e5f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12026e62 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12026e65 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12026e68 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12026e6b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12026e6e:;
  /* 12026e6e jmp 0x12026e7f */
  goto L_12026e7f;
L_12026e70:;
  /* 12026e70 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12026e73 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12026e76 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 12026e79 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12026e7c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12026e7f:;
  /* 12026e7f jmp 0x12026d9e */
  goto L_12026d9e;
L_12026e84:;
  /* 12026e84 mov eax, dword ptr [0x120542fc] */
  EAX = (r32((uint32_t)(0x120542fc)));
  /* 12026e89 push eax */
  push32((uint32_t)(EAX));
  /* 12026e8a call dword ptr [0x120553f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553f8))), 0x12026e90u);
  /* 12026e90 mov esp, ebp */
  ESP = (EBP);
  /* 12026e92 pop ebp */
  EBP = (pop32());
  /* 12026e93 ret  */
  ESPCHK(0x12026b70u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x12026ea0 (155 bytes, 45 insns) */
void f_12026ea0(void) {
  FTRACE(0x12026ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12026ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 12026ea1 mov ebp, esp */
  EBP = (ESP);
  /* 12026ea3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12026ea6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12026ead jmp 0x12026eb8 */
  goto L_12026eb8;
L_12026eaf:;
  /* 12026eaf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12026eb2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12026eb5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12026eb8:;
  /* 12026eb8 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026ebc jge 0x12026f37 */
  if ((C.sf==C.of)) goto L_12026f37;
  /* 12026ebe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12026ec1 cmp dword ptr [ecx*4 + 0x120541c0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x120541c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026ec9 je 0x12026f32 */
  if (C.zf) goto L_12026f32;
  /* 12026ecb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12026ece mov eax, dword ptr [edx*4 + 0x120541c0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x120541c0)));
  /* 12026ed5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12026ed8 jmp 0x12026ee3 */
  goto L_12026ee3;
L_12026eda:;
  /* 12026eda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12026edd add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12026ee0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12026ee3:;
  /* 12026ee3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12026ee6 mov eax, dword ptr [edx*4 + 0x120541c0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x120541c0)));
  /* 12026eed add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12026ef2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026ef5 jae 0x12026f0f */
  if (!C.cf) goto L_12026f0f;
  /* 12026ef7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12026efa cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026efe je 0x12026f0d */
  if (C.zf) goto L_12026f0d;
  /* 12026f00 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12026f03 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12026f06 push edx */
  push32((uint32_t)(EDX));
  /* 12026f07 call dword ptr [0x1205539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205539c))), 0x12026f0du);
L_12026f0d:;
  /* 12026f0d jmp 0x12026eda */
  goto L_12026eda;
L_12026f0f:;
  /* 12026f0f push 2 */
  push32((uint32_t)(0x2u));
  /* 12026f11 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12026f14 mov ecx, dword ptr [eax*4 + 0x120541c0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x120541c0)));
  /* 12026f1b push ecx */
  push32((uint32_t)(ECX));
  /* 12026f1c call 0x120279f0 */
  push32(0x12026f21u); f_120279f0();
  /* 12026f21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12026f24 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12026f27 mov dword ptr [edx*4 + 0x120541c0], 0 */
  w32((uint32_t)(EDX*4 + 0x120541c0), (0x0u));
L_12026f32:;
  /* 12026f32 jmp 0x12026eaf */
  goto L_12026eaf;
L_12026f37:;
  /* 12026f37 mov esp, ebp */
  ESP = (EBP);
  /* 12026f39 pop ebp */
  EBP = (pop32());
  /* 12026f3a ret  */
  ESPCHK(0x12026ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f40 @ 0x12026f40 (29 bytes, 13 insns) */
void f_12026f40(void) {
  FTRACE(0x12026f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12026f40 push ebp */
  push32((uint32_t)(EBP));
  /* 12026f41 mov ebp, esp */
  EBP = (ESP);
  /* 12026f43 push 0 */
  push32((uint32_t)(0x0u));
  /* 12026f45 push 0 */
  push32((uint32_t)(0x0u));
  /* 12026f47 push 1 */
  push32((uint32_t)(0x1u));
  /* 12026f49 mov eax, dword ptr [0x120529d0] */
  EAX = (r32((uint32_t)(0x120529d0)));
  /* 12026f4e push eax */
  push32((uint32_t)(EAX));
  /* 12026f4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12026f52 push ecx */
  push32((uint32_t)(ECX));
  /* 12026f53 call 0x12026fb0 */
  push32(0x12026f58u); f_12026fb0();
  /* 12026f58 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12026f5b pop ebp */
  EBP = (pop32());
  /* 12026f5c ret  */
  ESPCHK(0x12026f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f60 @ 0x12026f60 (35 bytes, 16 insns) */
void f_12026f60(void) {
  FTRACE(0x12026f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12026f60 push ebp */
  push32((uint32_t)(EBP));
  /* 12026f61 mov ebp, esp */
  EBP = (ESP);
  /* 12026f63 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12026f66 push eax */
  push32((uint32_t)(EAX));
  /* 12026f67 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12026f6a push ecx */
  push32((uint32_t)(ECX));
  /* 12026f6b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12026f6e push edx */
  push32((uint32_t)(EDX));
  /* 12026f6f mov eax, dword ptr [0x120529d0] */
  EAX = (r32((uint32_t)(0x120529d0)));
  /* 12026f74 push eax */
  push32((uint32_t)(EAX));
  /* 12026f75 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12026f78 push ecx */
  push32((uint32_t)(ECX));
  /* 12026f79 call 0x12026fb0 */
  push32(0x12026f7eu); f_12026fb0();
  /* 12026f7e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12026f81 pop ebp */
  EBP = (pop32());
  /* 12026f82 ret  */
  ESPCHK(0x12026f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f90 @ 0x12026f90 (27 bytes, 13 insns) */
void f_12026f90(void) {
  FTRACE(0x12026f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12026f90 push ebp */
  push32((uint32_t)(EBP));
  /* 12026f91 mov ebp, esp */
  EBP = (ESP);
  /* 12026f93 push 0 */
  push32((uint32_t)(0x0u));
  /* 12026f95 push 0 */
  push32((uint32_t)(0x0u));
  /* 12026f97 push 1 */
  push32((uint32_t)(0x1u));
  /* 12026f99 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12026f9c push eax */
  push32((uint32_t)(EAX));
  /* 12026f9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12026fa0 push ecx */
  push32((uint32_t)(ECX));
  /* 12026fa1 call 0x12026fb0 */
  push32(0x12026fa6u); f_12026fb0();
  /* 12026fa6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12026fa9 pop ebp */
  EBP = (pop32());
  /* 12026faa ret  */
  ESPCHK(0x12026f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fb0 @ 0x12026fb0 (94 bytes, 38 insns) */
void f_12026fb0(void) {
  FTRACE(0x12026fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12026fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12026fb1 mov ebp, esp */
  EBP = (ESP);
  /* 12026fb3 push ecx */
  push32((uint32_t)(ECX));
L_12026fb4:;
  /* 12026fb4 push 9 */
  push32((uint32_t)(0x9u));
  /* 12026fb6 call 0x1202a960 */
  push32(0x12026fbbu); f_1202a960();
  /* 12026fbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12026fbe mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12026fc1 push eax */
  push32((uint32_t)(EAX));
  /* 12026fc2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12026fc5 push ecx */
  push32((uint32_t)(ECX));
  /* 12026fc6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12026fc9 push edx */
  push32((uint32_t)(EDX));
  /* 12026fca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12026fcd push eax */
  push32((uint32_t)(EAX));
  /* 12026fce call 0x12027030 */
  push32(0x12026fd3u); f_12027030();
  /* 12026fd3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12026fd6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12026fd9 push 9 */
  push32((uint32_t)(0x9u));
  /* 12026fdb call 0x1202aa00 */
  push32(0x12026fe0u); f_1202aa00();
  /* 12026fe0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12026fe3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026fe7 jne 0x12026fef */
  if (!C.zf) goto L_12026fef;
  /* 12026fe9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12026fed jne 0x12026ff4 */
  if (!C.zf) goto L_12026ff4;
L_12026fef:;
  /* 12026fef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12026ff2 jmp 0x1202700a */
  goto L_1202700a;
L_12026ff4:;
  /* 12026ff4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12026ff7 push ecx */
  push32((uint32_t)(ECX));
  /* 12026ff8 call 0x1202aca0 */
  push32(0x12026ffdu); f_1202aca0();
  /* 12026ffd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027000 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12027002 jne 0x12027008 */
  if (!C.zf) goto L_12027008;
  /* 12027004 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12027006 jmp 0x1202700a */
  goto L_1202700a;
L_12027008:;
  /* 12027008 jmp 0x12026fb4 */
  goto L_12026fb4;
L_1202700a:;
  /* 1202700a mov esp, ebp */
  ESP = (EBP);
  /* 1202700c pop ebp */
  EBP = (pop32());
  /* 1202700d ret  */
  ESPCHK(0x12026fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007010 @ 0x12027010 (23 bytes, 11 insns) */
void f_12027010(void) {
  FTRACE(0x12027010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12027010 push ebp */
  push32((uint32_t)(EBP));
  /* 12027011 mov ebp, esp */
  EBP = (ESP);
  /* 12027013 push 0 */
  push32((uint32_t)(0x0u));
  /* 12027015 push 0 */
  push32((uint32_t)(0x0u));
  /* 12027017 push 1 */
  push32((uint32_t)(0x1u));
  /* 12027019 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202701c push eax */
  push32((uint32_t)(EAX));
  /* 1202701d call 0x12027030 */
  push32(0x12027022u); f_12027030();
  /* 12027022 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027025 pop ebp */
  EBP = (pop32());
  /* 12027026 ret  */
  ESPCHK(0x12027010u, _esp0);
  ESP += 4; return;
}

/* FUN_10007030 @ 0x12027030 (787 bytes, 254 insns) */
void f_12027030(void) {
  FTRACE(0x12027030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12027030 push ebp */
  push32((uint32_t)(EBP));
  /* 12027031 mov ebp, esp */
  EBP = (ESP);
  /* 12027033 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12027036 push ebx */
  push32((uint32_t)(EBX));
  /* 12027037 push esi */
  push32((uint32_t)(ESI));
  /* 12027038 push edi */
  push32((uint32_t)(EDI));
  /* 12027039 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12027040 mov eax, dword ptr [0x12050a84] */
  EAX = (r32((uint32_t)(0x12050a84)));
  /* 12027045 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12027048 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202704a je 0x1202707c */
  if (C.zf) goto L_1202707c;
L_1202704c:;
  /* 1202704c call 0x12028100 */
  push32(0x12027051u); f_12028100();
  /* 12027051 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12027053 jne 0x12027076 */
  if (!C.zf) goto L_12027076;
  /* 12027055 push 0x1204da50 */
  push32((uint32_t)(0x1204da50u));
  /* 1202705a push 0 */
  push32((uint32_t)(0x0u));
  /* 1202705c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 12027061 push 0x1204da44 */
  push32((uint32_t)(0x1204da44u));
  /* 12027066 push 2 */
  push32((uint32_t)(0x2u));
  /* 12027068 call 0x12026020 */
  push32(0x1202706du); f_12026020();
  /* 1202706d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027070 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027073 jne 0x12027076 */
  if (!C.zf) goto L_12027076;
  /* 12027075 int3  */
  x86_unimpl("int3 @ 0x12027075");
L_12027076:;
  /* 12027076 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12027078 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202707a jne 0x1202704c */
  if (!C.zf) goto L_1202704c;
L_1202707c:;
  /* 1202707c mov edx, dword ptr [0x12050a88] */
  EDX = (r32((uint32_t)(0x12050a88)));
  /* 12027082 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12027085 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12027088 cmp eax, dword ptr [0x12050a8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12050a8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202708e jne 0x12027091 */
  if (!C.zf) goto L_12027091;
  /* 12027090 int3  */
  x86_unimpl("int3 @ 0x12027090");
L_12027091:;
  /* 12027091 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12027094 push ecx */
  push32((uint32_t)(ECX));
  /* 12027095 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12027098 push edx */
  push32((uint32_t)(EDX));
  /* 12027099 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202709c push eax */
  push32((uint32_t)(EAX));
  /* 1202709d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120270a0 push ecx */
  push32((uint32_t)(ECX));
  /* 120270a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120270a4 push edx */
  push32((uint32_t)(EDX));
  /* 120270a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 120270a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 120270a9 call dword ptr [0x12050c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12050c90))), 0x120270afu);
  /* 120270af add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120270b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120270b4 jne 0x12027114 */
  if (!C.zf) goto L_12027114;
  /* 120270b6 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120270ba je 0x120270e7 */
  if (C.zf) goto L_120270e7;
L_120270bc:;
  /* 120270bc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120270bf push eax */
  push32((uint32_t)(EAX));
  /* 120270c0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120270c3 push ecx */
  push32((uint32_t)(ECX));
  /* 120270c4 push 0x1204da0c */
  push32((uint32_t)(0x1204da0cu));
  /* 120270c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 120270cb push 0 */
  push32((uint32_t)(0x0u));
  /* 120270cd push 0 */
  push32((uint32_t)(0x0u));
  /* 120270cf push 0 */
  push32((uint32_t)(0x0u));
  /* 120270d1 call 0x12026020 */
  push32(0x120270d6u); f_12026020();
  /* 120270d6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120270d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120270dc jne 0x120270df */
  if (!C.zf) goto L_120270df;
  /* 120270de int3  */
  x86_unimpl("int3 @ 0x120270de");
L_120270df:;
  /* 120270df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120270e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120270e3 jne 0x120270bc */
  if (!C.zf) goto L_120270bc;
  /* 120270e5 jmp 0x1202710d */
  goto L_1202710d;
L_120270e7:;
  /* 120270e7 push 0x1204d9e8 */
  push32((uint32_t)(0x1204d9e8u));
  /* 120270ec push 0x1204d9e4 */
  push32((uint32_t)(0x1204d9e4u));
  /* 120270f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 120270f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 120270f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 120270f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 120270f9 call 0x12026020 */
  push32(0x120270feu); f_12026020();
  /* 120270fe add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027101 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027104 jne 0x12027107 */
  if (!C.zf) goto L_12027107;
  /* 12027106 int3  */
  x86_unimpl("int3 @ 0x12027106");
L_12027107:;
  /* 12027107 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12027109 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202710b jne 0x120270e7 */
  if (!C.zf) goto L_120270e7;
L_1202710d:;
  /* 1202710d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202710f jmp 0x1202733c */
  goto L_1202733c;
L_12027114:;
  /* 12027114 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12027117 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1202711d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027120 je 0x12027136 */
  if (C.zf) goto L_12027136;
  /* 12027122 mov edx, dword ptr [0x12050a84] */
  EDX = (r32((uint32_t)(0x12050a84)));
  /* 12027128 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1202712b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202712d jne 0x12027136 */
  if (!C.zf) goto L_12027136;
  /* 1202712f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_12027136:;
  /* 12027136 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202713a ja 0x12027147 */
  if ((!C.cf&&!C.zf)) goto L_12027147;
  /* 1202713c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202713f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12027142 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027145 jbe 0x12027173 */
  if ((C.cf||C.zf)) goto L_12027173;
L_12027147:;
  /* 12027147 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202714a push ecx */
  push32((uint32_t)(ECX));
  /* 1202714b push 0x1204d9c0 */
  push32((uint32_t)(0x1204d9c0u));
  /* 12027150 push 0 */
  push32((uint32_t)(0x0u));
  /* 12027152 push 0 */
  push32((uint32_t)(0x0u));
  /* 12027154 push 0 */
  push32((uint32_t)(0x0u));
  /* 12027156 push 1 */
  push32((uint32_t)(0x1u));
  /* 12027158 call 0x12026020 */
  push32(0x1202715du); f_12026020();
  /* 1202715d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027160 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027163 jne 0x12027166 */
  if (!C.zf) goto L_12027166;
  /* 12027165 int3  */
  x86_unimpl("int3 @ 0x12027165");
L_12027166:;
  /* 12027166 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12027168 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202716a jne 0x12027147 */
  if (!C.zf) goto L_12027147;
  /* 1202716c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202716e jmp 0x1202733c */
  goto L_1202733c;
L_12027173:;
  /* 12027173 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12027176 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1202717b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202717e je 0x120271c0 */
  if (C.zf) goto L_120271c0;
  /* 12027180 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027184 je 0x120271c0 */
  if (C.zf) goto L_120271c0;
  /* 12027186 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12027189 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1202718f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027192 je 0x120271c0 */
  if (C.zf) goto L_120271c0;
  /* 12027194 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027198 je 0x120271c0 */
  if (C.zf) goto L_120271c0;
L_1202719a:;
  /* 1202719a push 0x1204d98c */
  push32((uint32_t)(0x1204d98cu));
  /* 1202719f push 0x1204d9e4 */
  push32((uint32_t)(0x1204d9e4u));
  /* 120271a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 120271a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 120271a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 120271aa push 1 */
  push32((uint32_t)(0x1u));
  /* 120271ac call 0x12026020 */
  push32(0x120271b1u); f_12026020();
  /* 120271b1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120271b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120271b7 jne 0x120271ba */
  if (!C.zf) goto L_120271ba;
  /* 120271b9 int3  */
  x86_unimpl("int3 @ 0x120271b9");
L_120271ba:;
  /* 120271ba xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120271bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120271be jne 0x1202719a */
  if (!C.zf) goto L_1202719a;
L_120271c0:;
  /* 120271c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120271c3 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120271c6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 120271c9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120271cc push ecx */
  push32((uint32_t)(ECX));
  /* 120271cd call 0x1202adb0 */
  push32(0x120271d2u); f_1202adb0();
  /* 120271d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120271d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120271d8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120271dc jne 0x120271e5 */
  if (!C.zf) goto L_120271e5;
  /* 120271de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120271e0 jmp 0x1202733c */
  goto L_1202733c;
L_120271e5:;
  /* 120271e5 mov edx, dword ptr [0x12050a88] */
  EDX = (r32((uint32_t)(0x12050a88)));
  /* 120271eb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120271ee mov dword ptr [0x12050a88], edx */
  w32((uint32_t)(0x12050a88), (EDX));
  /* 120271f4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120271f8 je 0x12027243 */
  if (C.zf) goto L_12027243;
  /* 120271fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120271fd mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12027203 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027206 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1202720d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027210 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12027217 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202721a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 12027221 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027224 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12027227 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 1202722a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202722d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 12027234 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027237 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 1202723e jmp 0x120272e3 */
  goto L_120272e3;
L_12027243:;
  /* 12027243 mov edx, dword ptr [0x12052830] */
  EDX = (r32((uint32_t)(0x12052830)));
  /* 12027249 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202724c mov dword ptr [0x12052830], edx */
  w32((uint32_t)(0x12052830), (EDX));
  /* 12027252 mov eax, dword ptr [0x12052838] */
  EAX = (r32((uint32_t)(0x12052838)));
  /* 12027257 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202725a mov dword ptr [0x12052838], eax */
  w32((uint32_t)(0x12052838), (EAX));
  /* 1202725f mov ecx, dword ptr [0x12052838] */
  ECX = (r32((uint32_t)(0x12052838)));
  /* 12027265 cmp ecx, dword ptr [0x1205283c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1205283c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202726b jbe 0x12027279 */
  if ((C.cf||C.zf)) goto L_12027279;
  /* 1202726d mov edx, dword ptr [0x12052838] */
  EDX = (r32((uint32_t)(0x12052838)));
  /* 12027273 mov dword ptr [0x1205283c], edx */
  w32((uint32_t)(0x1205283c), (EDX));
L_12027279:;
  /* 12027279 cmp dword ptr [0x12052834], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052834))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027280 je 0x1202728f */
  if (C.zf) goto L_1202728f;
  /* 12027282 mov eax, dword ptr [0x12052834] */
  EAX = (r32((uint32_t)(0x12052834)));
  /* 12027287 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202728a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1202728d jmp 0x12027298 */
  goto L_12027298;
L_1202728f:;
  /* 1202728f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027292 mov dword ptr [0x1205282c], edx */
  w32((uint32_t)(0x1205282c), (EDX));
L_12027298:;
  /* 12027298 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202729b mov ecx, dword ptr [0x12052834] */
  ECX = (r32((uint32_t)(0x12052834)));
  /* 120272a1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 120272a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120272a6 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 120272ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120272b0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120272b3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 120272b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120272b9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120272bc mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 120272bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120272c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120272c5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 120272c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120272cb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120272ce mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 120272d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120272d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120272d7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 120272da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120272dd mov dword ptr [0x12052834], ecx */
  w32((uint32_t)(0x12052834), (ECX));
L_120272e3:;
  /* 120272e3 push 4 */
  push32((uint32_t)(0x4u));
  /* 120272e5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120272e7 mov dl, byte ptr [0x12050a90] */
  DL = (r8((uint32_t)(0x12050a90)));
  /* 120272ed push edx */
  push32((uint32_t)(EDX));
  /* 120272ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120272f1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120272f4 push eax */
  push32((uint32_t)(EAX));
  /* 120272f5 call 0x1202acd0 */
  push32(0x120272fau); f_1202acd0();
  /* 120272fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120272fd push 4 */
  push32((uint32_t)(0x4u));
  /* 120272ff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12027301 mov cl, byte ptr [0x12050a90] */
  CL = (r8((uint32_t)(0x12050a90)));
  /* 12027307 push ecx */
  push32((uint32_t)(ECX));
  /* 12027308 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202730b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202730e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 12027312 push ecx */
  push32((uint32_t)(ECX));
  /* 12027313 call 0x1202acd0 */
  push32(0x12027318u); f_1202acd0();
  /* 12027318 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202731b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202731e push edx */
  push32((uint32_t)(EDX));
  /* 1202731f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12027321 mov al, byte ptr [0x12050a92] */
  AL = (r8((uint32_t)(0x12050a92)));
  /* 12027326 push eax */
  push32((uint32_t)(EAX));
  /* 12027327 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202732a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202732d push ecx */
  push32((uint32_t)(ECX));
  /* 1202732e call 0x1202acd0 */
  push32(0x12027333u); f_1202acd0();
  /* 12027333 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027336 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027339 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1202733c:;
  /* 1202733c pop edi */
  EDI = (pop32());
  /* 1202733d pop esi */
  ESI = (pop32());
  /* 1202733e pop ebx */
  EBX = (pop32());
  /* 1202733f mov esp, ebp */
  ESP = (EBP);
  /* 12027341 pop ebp */
  EBP = (pop32());
  /* 12027342 ret  */
  ESPCHK(0x12027030u, _esp0);
  ESP += 4; return;
}

/* FUN_10007350 @ 0x12027350 (27 bytes, 13 insns) */
void f_12027350(void) {
  FTRACE(0x12027350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12027350 push ebp */
  push32((uint32_t)(EBP));
  /* 12027351 mov ebp, esp */
  EBP = (ESP);
  /* 12027353 push 0 */
  push32((uint32_t)(0x0u));
  /* 12027355 push 0 */
  push32((uint32_t)(0x0u));
  /* 12027357 push 1 */
  push32((uint32_t)(0x1u));
  /* 12027359 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202735c push eax */
  push32((uint32_t)(EAX));
  /* 1202735d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12027360 push ecx */
  push32((uint32_t)(ECX));
  /* 12027361 call 0x12027370 */
  push32(0x12027366u); f_12027370();
  /* 12027366 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027369 pop ebp */
  EBP = (pop32());
  /* 1202736a ret  */
  ESPCHK(0x12027350u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x12027370 (96 bytes, 37 insns) */
void f_12027370(void) {
  FTRACE(0x12027370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12027370 push ebp */
  push32((uint32_t)(EBP));
  /* 12027371 mov ebp, esp */
  EBP = (ESP);
  /* 12027373 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12027376 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12027379 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202737d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12027380 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12027383 push ecx */
  push32((uint32_t)(ECX));
  /* 12027384 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12027387 push edx */
  push32((uint32_t)(EDX));
  /* 12027388 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1202738b push eax */
  push32((uint32_t)(EAX));
  /* 1202738c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202738f push ecx */
  push32((uint32_t)(ECX));
  /* 12027390 call 0x12026f60 */
  push32(0x12027395u); f_12026f60();
  /* 12027395 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027398 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1202739b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202739f je 0x120273c9 */
  if (C.zf) goto L_120273c9;
  /* 120273a1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120273a4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 120273a7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120273aa add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120273ad mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120273b0:;
  /* 120273b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120273b3 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120273b6 jae 0x120273c9 */
  if (!C.cf) goto L_120273c9;
  /* 120273b8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120273bb mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 120273be mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120273c1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120273c4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120273c7 jmp 0x120273b0 */
  goto L_120273b0;
L_120273c9:;
  /* 120273c9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120273cc mov esp, ebp */
  ESP = (EBP);
  /* 120273ce pop ebp */
  EBP = (pop32());
  /* 120273cf ret  */
  ESPCHK(0x12027370u, _esp0);
  ESP += 4; return;
}

/* FUN_100073d0 @ 0x120273d0 (27 bytes, 13 insns) */
void f_120273d0(void) {
  FTRACE(0x120273d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120273d0 push ebp */
  push32((uint32_t)(EBP));
  /* 120273d1 mov ebp, esp */
  EBP = (ESP);
  /* 120273d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 120273d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 120273d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 120273d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120273dc push eax */
  push32((uint32_t)(EAX));
  /* 120273dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120273e0 push ecx */
  push32((uint32_t)(ECX));
  /* 120273e1 call 0x120273f0 */
  push32(0x120273e6u); f_120273f0();
  /* 120273e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120273e9 pop ebp */
  EBP = (pop32());
  /* 120273ea ret  */
  ESPCHK(0x120273d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100073f0 @ 0x120273f0 (64 bytes, 27 insns) */
void f_120273f0(void) {
  FTRACE(0x120273f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120273f0 push ebp */
  push32((uint32_t)(EBP));
  /* 120273f1 mov ebp, esp */
  EBP = (ESP);
  /* 120273f3 push ecx */
  push32((uint32_t)(ECX));
  /* 120273f4 push 9 */
  push32((uint32_t)(0x9u));
  /* 120273f6 call 0x1202a960 */
  push32(0x120273fbu); f_1202a960();
  /* 120273fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120273fe push 1 */
  push32((uint32_t)(0x1u));
  /* 12027400 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12027403 push eax */
  push32((uint32_t)(EAX));
  /* 12027404 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12027407 push ecx */
  push32((uint32_t)(ECX));
  /* 12027408 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1202740b push edx */
  push32((uint32_t)(EDX));
  /* 1202740c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202740f push eax */
  push32((uint32_t)(EAX));
  /* 12027410 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12027413 push ecx */
  push32((uint32_t)(ECX));
  /* 12027414 call 0x12027430 */
  push32(0x12027419u); f_12027430();
  /* 12027419 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202741c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1202741f push 9 */
  push32((uint32_t)(0x9u));
  /* 12027421 call 0x1202aa00 */
  push32(0x12027426u); f_1202aa00();
  /* 12027426 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027429 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202742c mov esp, ebp */
  ESP = (EBP);
  /* 1202742e pop ebp */
  EBP = (pop32());
  /* 1202742f ret  */
  ESPCHK(0x120273f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007430 @ 0x12027430 (1297 bytes, 431 insns) */
void f_12027430(void) {
  FTRACE(0x12027430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12027430 push ebp */
  push32((uint32_t)(EBP));
  /* 12027431 mov ebp, esp */
  EBP = (ESP);
  /* 12027433 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12027436 push ebx */
  push32((uint32_t)(EBX));
  /* 12027437 push esi */
  push32((uint32_t)(ESI));
  /* 12027438 push edi */
  push32((uint32_t)(EDI));
  /* 12027439 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12027440 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027444 jne 0x12027463 */
  if (!C.zf) goto L_12027463;
  /* 12027446 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12027449 push eax */
  push32((uint32_t)(EAX));
  /* 1202744a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1202744d push ecx */
  push32((uint32_t)(ECX));
  /* 1202744e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12027451 push edx */
  push32((uint32_t)(EDX));
  /* 12027452 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12027455 push eax */
  push32((uint32_t)(EAX));
  /* 12027456 call 0x12026f60 */
  push32(0x1202745bu); f_12026f60();
  /* 1202745b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202745e jmp 0x1202793a */
  goto L_1202793a;
L_12027463:;
  /* 12027463 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027467 je 0x12027486 */
  if (C.zf) goto L_12027486;
  /* 12027469 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202746d jne 0x12027486 */
  if (!C.zf) goto L_12027486;
  /* 1202746f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12027472 push ecx */
  push32((uint32_t)(ECX));
  /* 12027473 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12027476 push edx */
  push32((uint32_t)(EDX));
  /* 12027477 call 0x120279f0 */
  push32(0x1202747cu); f_120279f0();
  /* 1202747c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202747f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12027481 jmp 0x1202793a */
  goto L_1202793a;
L_12027486:;
  /* 12027486 mov eax, dword ptr [0x12050a84] */
  EAX = (r32((uint32_t)(0x12050a84)));
  /* 1202748b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1202748e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12027490 je 0x120274c2 */
  if (C.zf) goto L_120274c2;
L_12027492:;
  /* 12027492 call 0x12028100 */
  push32(0x12027497u); f_12028100();
  /* 12027497 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12027499 jne 0x120274bc */
  if (!C.zf) goto L_120274bc;
  /* 1202749b push 0x1204da50 */
  push32((uint32_t)(0x1204da50u));
  /* 120274a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 120274a2 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 120274a7 push 0x1204da44 */
  push32((uint32_t)(0x1204da44u));
  /* 120274ac push 2 */
  push32((uint32_t)(0x2u));
  /* 120274ae call 0x12026020 */
  push32(0x120274b3u); f_12026020();
  /* 120274b3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120274b6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120274b9 jne 0x120274bc */
  if (!C.zf) goto L_120274bc;
  /* 120274bb int3  */
  x86_unimpl("int3 @ 0x120274bb");
L_120274bc:;
  /* 120274bc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120274be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120274c0 jne 0x12027492 */
  if (!C.zf) goto L_12027492;
L_120274c2:;
  /* 120274c2 mov edx, dword ptr [0x12050a88] */
  EDX = (r32((uint32_t)(0x12050a88)));
  /* 120274c8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 120274cb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120274ce cmp eax, dword ptr [0x12050a8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12050a8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120274d4 jne 0x120274d7 */
  if (!C.zf) goto L_120274d7;
  /* 120274d6 int3  */
  x86_unimpl("int3 @ 0x120274d6");
L_120274d7:;
  /* 120274d7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120274da push ecx */
  push32((uint32_t)(ECX));
  /* 120274db mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120274de push edx */
  push32((uint32_t)(EDX));
  /* 120274df mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120274e2 push eax */
  push32((uint32_t)(EAX));
  /* 120274e3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120274e6 push ecx */
  push32((uint32_t)(ECX));
  /* 120274e7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120274ea push edx */
  push32((uint32_t)(EDX));
  /* 120274eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120274ee push eax */
  push32((uint32_t)(EAX));
  /* 120274ef push 2 */
  push32((uint32_t)(0x2u));
  /* 120274f1 call dword ptr [0x12050c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12050c90))), 0x120274f7u);
  /* 120274f7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120274fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120274fc jne 0x1202755c */
  if (!C.zf) goto L_1202755c;
  /* 120274fe cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027502 je 0x1202752f */
  if (C.zf) goto L_1202752f;
L_12027504:;
  /* 12027504 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12027507 push ecx */
  push32((uint32_t)(ECX));
  /* 12027508 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1202750b push edx */
  push32((uint32_t)(EDX));
  /* 1202750c push 0x1204dbcc */
  push32((uint32_t)(0x1204dbccu));
  /* 12027511 push 0 */
  push32((uint32_t)(0x0u));
  /* 12027513 push 0 */
  push32((uint32_t)(0x0u));
  /* 12027515 push 0 */
  push32((uint32_t)(0x0u));
  /* 12027517 push 0 */
  push32((uint32_t)(0x0u));
  /* 12027519 call 0x12026020 */
  push32(0x1202751eu); f_12026020();
  /* 1202751e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027521 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027524 jne 0x12027527 */
  if (!C.zf) goto L_12027527;
  /* 12027526 int3  */
  x86_unimpl("int3 @ 0x12027526");
L_12027527:;
  /* 12027527 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12027529 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202752b jne 0x12027504 */
  if (!C.zf) goto L_12027504;
  /* 1202752d jmp 0x12027555 */
  goto L_12027555;
L_1202752f:;
  /* 1202752f push 0x1204dba8 */
  push32((uint32_t)(0x1204dba8u));
  /* 12027534 push 0x1204d9e4 */
  push32((uint32_t)(0x1204d9e4u));
  /* 12027539 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202753b push 0 */
  push32((uint32_t)(0x0u));
  /* 1202753d push 0 */
  push32((uint32_t)(0x0u));
  /* 1202753f push 0 */
  push32((uint32_t)(0x0u));
  /* 12027541 call 0x12026020 */
  push32(0x12027546u); f_12026020();
  /* 12027546 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027549 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202754c jne 0x1202754f */
  if (!C.zf) goto L_1202754f;
  /* 1202754e int3  */
  x86_unimpl("int3 @ 0x1202754e");
L_1202754f:;
  /* 1202754f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12027551 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12027553 jne 0x1202752f */
  if (!C.zf) goto L_1202752f;
L_12027555:;
  /* 12027555 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12027557 jmp 0x1202793a */
  goto L_1202793a;
L_1202755c:;
  /* 1202755c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027560 jbe 0x1202758e */
  if ((C.cf||C.zf)) goto L_1202758e;
L_12027562:;
  /* 12027562 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12027565 push edx */
  push32((uint32_t)(EDX));
  /* 12027566 push 0x1204db78 */
  push32((uint32_t)(0x1204db78u));
  /* 1202756b push 0 */
  push32((uint32_t)(0x0u));
  /* 1202756d push 0 */
  push32((uint32_t)(0x0u));
  /* 1202756f push 0 */
  push32((uint32_t)(0x0u));
  /* 12027571 push 1 */
  push32((uint32_t)(0x1u));
  /* 12027573 call 0x12026020 */
  push32(0x12027578u); f_12026020();
  /* 12027578 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202757b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202757e jne 0x12027581 */
  if (!C.zf) goto L_12027581;
  /* 12027580 int3  */
  x86_unimpl("int3 @ 0x12027580");
L_12027581:;
  /* 12027581 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12027583 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12027585 jne 0x12027562 */
  if (!C.zf) goto L_12027562;
  /* 12027587 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12027589 jmp 0x1202793a */
  goto L_1202793a;
L_1202758e:;
  /* 1202758e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027592 je 0x120275d6 */
  if (C.zf) goto L_120275d6;
  /* 12027594 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12027597 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1202759d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120275a0 je 0x120275d6 */
  if (C.zf) goto L_120275d6;
  /* 120275a2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120275a5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120275ab cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120275ae je 0x120275d6 */
  if (C.zf) goto L_120275d6;
L_120275b0:;
  /* 120275b0 push 0x1204d98c */
  push32((uint32_t)(0x1204d98cu));
  /* 120275b5 push 0x1204d9e4 */
  push32((uint32_t)(0x1204d9e4u));
  /* 120275ba push 0 */
  push32((uint32_t)(0x0u));
  /* 120275bc push 0 */
  push32((uint32_t)(0x0u));
  /* 120275be push 0 */
  push32((uint32_t)(0x0u));
  /* 120275c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 120275c2 call 0x12026020 */
  push32(0x120275c7u); f_12026020();
  /* 120275c7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120275ca cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120275cd jne 0x120275d0 */
  if (!C.zf) goto L_120275d0;
  /* 120275cf int3  */
  x86_unimpl("int3 @ 0x120275cf");
L_120275d0:;
  /* 120275d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120275d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120275d4 jne 0x120275b0 */
  if (!C.zf) goto L_120275b0;
L_120275d6:;
  /* 120275d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120275d9 push ecx */
  push32((uint32_t)(ECX));
  /* 120275da call 0x12028560 */
  push32(0x120275dfu); f_12028560();
  /* 120275df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120275e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120275e4 jne 0x12027607 */
  if (!C.zf) goto L_12027607;
  /* 120275e6 push 0x1204db54 */
  push32((uint32_t)(0x1204db54u));
  /* 120275eb push 0 */
  push32((uint32_t)(0x0u));
  /* 120275ed push 0x261 */
  push32((uint32_t)(0x261u));
  /* 120275f2 push 0x1204da44 */
  push32((uint32_t)(0x1204da44u));
  /* 120275f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 120275f9 call 0x12026020 */
  push32(0x120275feu); f_12026020();
  /* 120275fe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027601 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027604 jne 0x12027607 */
  if (!C.zf) goto L_12027607;
  /* 12027606 int3  */
  x86_unimpl("int3 @ 0x12027606");
L_12027607:;
  /* 12027607 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12027609 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202760b jne 0x120275d6 */
  if (!C.zf) goto L_120275d6;
  /* 1202760d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12027610 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12027613 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12027616 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12027619 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202761d jne 0x12027626 */
  if (!C.zf) goto L_12027626;
  /* 1202761f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_12027626:;
  /* 12027626 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202762a je 0x1202766a */
  if (C.zf) goto L_1202766a;
L_1202762c:;
  /* 1202762c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202762f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027636 jne 0x12027641 */
  if (!C.zf) goto L_12027641;
  /* 12027638 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202763b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202763f je 0x12027662 */
  if (C.zf) goto L_12027662;
L_12027641:;
  /* 12027641 push 0x1204db0c */
  push32((uint32_t)(0x1204db0cu));
  /* 12027646 push 0 */
  push32((uint32_t)(0x0u));
  /* 12027648 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 1202764d push 0x1204da44 */
  push32((uint32_t)(0x1204da44u));
  /* 12027652 push 2 */
  push32((uint32_t)(0x2u));
  /* 12027654 call 0x12026020 */
  push32(0x12027659u); f_12026020();
  /* 12027659 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202765c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202765f jne 0x12027662 */
  if (!C.zf) goto L_12027662;
  /* 12027661 int3  */
  x86_unimpl("int3 @ 0x12027661");
L_12027662:;
  /* 12027662 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12027664 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12027666 jne 0x1202762c */
  if (!C.zf) goto L_1202762c;
  /* 12027668 jmp 0x120276ce */
  goto L_120276ce;
L_1202766a:;
  /* 1202766a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202766d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12027670 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12027675 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027678 jne 0x1202768f */
  if (!C.zf) goto L_1202768f;
  /* 1202767a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1202767d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12027683 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027686 jne 0x1202768f */
  if (!C.zf) goto L_1202768f;
  /* 12027688 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_1202768f:;
  /* 1202768f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12027692 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12027695 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1202769a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1202769d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120276a3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120276a5 je 0x120276c8 */
  if (C.zf) goto L_120276c8;
  /* 120276a7 push 0x1204dad0 */
  push32((uint32_t)(0x1204dad0u));
  /* 120276ac push 0 */
  push32((uint32_t)(0x0u));
  /* 120276ae push 0x272 */
  push32((uint32_t)(0x272u));
  /* 120276b3 push 0x1204da44 */
  push32((uint32_t)(0x1204da44u));
  /* 120276b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 120276ba call 0x12026020 */
  push32(0x120276bfu); f_12026020();
  /* 120276bf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120276c2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120276c5 jne 0x120276c8 */
  if (!C.zf) goto L_120276c8;
  /* 120276c7 int3  */
  x86_unimpl("int3 @ 0x120276c7");
L_120276c8:;
  /* 120276c8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120276ca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120276cc jne 0x1202768f */
  if (!C.zf) goto L_1202768f;
L_120276ce:;
  /* 120276ce cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120276d2 je 0x120276f9 */
  if (C.zf) goto L_120276f9;
  /* 120276d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120276d7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120276da push eax */
  push32((uint32_t)(EAX));
  /* 120276db mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120276de push ecx */
  push32((uint32_t)(ECX));
  /* 120276df call 0x1202aee0 */
  push32(0x120276e4u); f_1202aee0();
  /* 120276e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120276e7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120276ea cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120276ee jne 0x120276f7 */
  if (!C.zf) goto L_120276f7;
  /* 120276f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120276f2 jmp 0x1202793a */
  goto L_1202793a;
L_120276f7:;
  /* 120276f7 jmp 0x1202771c */
  goto L_1202771c;
L_120276f9:;
  /* 120276f9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120276fc add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120276ff push edx */
  push32((uint32_t)(EDX));
  /* 12027700 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12027703 push eax */
  push32((uint32_t)(EAX));
  /* 12027704 call 0x1202ae30 */
  push32(0x12027709u); f_1202ae30();
  /* 12027709 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202770c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1202770f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027713 jne 0x1202771c */
  if (!C.zf) goto L_1202771c;
  /* 12027715 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12027717 jmp 0x1202793a */
  goto L_1202793a;
L_1202771c:;
  /* 1202771c mov ecx, dword ptr [0x12050a88] */
  ECX = (r32((uint32_t)(0x12050a88)));
  /* 12027722 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12027725 mov dword ptr [0x12050a88], ecx */
  w32((uint32_t)(0x12050a88), (ECX));
  /* 1202772b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202772f jne 0x12027787 */
  if (!C.zf) goto L_12027787;
  /* 12027731 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12027734 mov eax, dword ptr [0x12052830] */
  EAX = (r32((uint32_t)(0x12052830)));
  /* 12027739 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202773c mov dword ptr [0x12052830], eax */
  w32((uint32_t)(0x12052830), (EAX));
  /* 12027741 mov ecx, dword ptr [0x12052830] */
  ECX = (r32((uint32_t)(0x12052830)));
  /* 12027747 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202774a mov dword ptr [0x12052830], ecx */
  w32((uint32_t)(0x12052830), (ECX));
  /* 12027750 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12027753 mov eax, dword ptr [0x12052838] */
  EAX = (r32((uint32_t)(0x12052838)));
  /* 12027758 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202775b mov dword ptr [0x12052838], eax */
  w32((uint32_t)(0x12052838), (EAX));
  /* 12027760 mov ecx, dword ptr [0x12052838] */
  ECX = (r32((uint32_t)(0x12052838)));
  /* 12027766 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12027769 mov dword ptr [0x12052838], ecx */
  w32((uint32_t)(0x12052838), (ECX));
  /* 1202776f mov edx, dword ptr [0x12052838] */
  EDX = (r32((uint32_t)(0x12052838)));
  /* 12027775 cmp edx, dword ptr [0x1205283c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1205283c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202777b jbe 0x12027787 */
  if ((C.cf||C.zf)) goto L_12027787;
  /* 1202777d mov eax, dword ptr [0x12052838] */
  EAX = (r32((uint32_t)(0x12052838)));
  /* 12027782 mov dword ptr [0x1205283c], eax */
  w32((uint32_t)(0x1205283c), (EAX));
L_12027787:;
  /* 12027787 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202778a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202778d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12027790 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12027793 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12027796 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027799 jbe 0x120277bf */
  if ((C.cf||C.zf)) goto L_120277bf;
  /* 1202779b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202779e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120277a1 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120277a4 push edx */
  push32((uint32_t)(EDX));
  /* 120277a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120277a7 mov al, byte ptr [0x12050a92] */
  AL = (r8((uint32_t)(0x12050a92)));
  /* 120277ac push eax */
  push32((uint32_t)(EAX));
  /* 120277ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120277b0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120277b3 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120277b6 push edx */
  push32((uint32_t)(EDX));
  /* 120277b7 call 0x1202acd0 */
  push32(0x120277bcu); f_1202acd0();
  /* 120277bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120277bf:;
  /* 120277bf push 4 */
  push32((uint32_t)(0x4u));
  /* 120277c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120277c3 mov al, byte ptr [0x12050a90] */
  AL = (r8((uint32_t)(0x12050a90)));
  /* 120277c8 push eax */
  push32((uint32_t)(EAX));
  /* 120277c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120277cc add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120277cf push ecx */
  push32((uint32_t)(ECX));
  /* 120277d0 call 0x1202acd0 */
  push32(0x120277d5u); f_1202acd0();
  /* 120277d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120277d8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120277dc jne 0x120277f9 */
  if (!C.zf) goto L_120277f9;
  /* 120277de mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120277e1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120277e4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 120277e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120277ea mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120277ed mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 120277f0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120277f3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120277f6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_120277f9:;
  /* 120277f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120277fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120277ff mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_12027802:;
  /* 12027802 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027806 jne 0x12027837 */
  if (!C.zf) goto L_12027837;
  /* 12027808 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202780c jne 0x12027816 */
  if (!C.zf) goto L_12027816;
  /* 1202780e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12027811 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027814 je 0x12027837 */
  if (C.zf) goto L_12027837;
L_12027816:;
  /* 12027816 push 0x1204da9c */
  push32((uint32_t)(0x1204da9cu));
  /* 1202781b push 0 */
  push32((uint32_t)(0x0u));
  /* 1202781d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 12027822 push 0x1204da44 */
  push32((uint32_t)(0x1204da44u));
  /* 12027827 push 2 */
  push32((uint32_t)(0x2u));
  /* 12027829 call 0x12026020 */
  push32(0x1202782eu); f_12026020();
  /* 1202782e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027831 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027834 jne 0x12027837 */
  if (!C.zf) goto L_12027837;
  /* 12027836 int3  */
  x86_unimpl("int3 @ 0x12027836");
L_12027837:;
  /* 12027837 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12027839 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202783b jne 0x12027802 */
  if (!C.zf) goto L_12027802;
  /* 1202783d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12027840 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027843 je 0x1202784b */
  if (C.zf) goto L_1202784b;
  /* 12027845 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027849 je 0x12027853 */
  if (C.zf) goto L_12027853;
L_1202784b:;
  /* 1202784b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202784e jmp 0x1202793a */
  goto L_1202793a;
L_12027853:;
  /* 12027853 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12027856 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027859 je 0x1202786b */
  if (C.zf) goto L_1202786b;
  /* 1202785b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202785e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12027860 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12027863 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12027866 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12027869 jmp 0x120278a7 */
  goto L_120278a7;
L_1202786b:;
  /* 1202786b mov eax, dword ptr [0x1205282c] */
  EAX = (r32((uint32_t)(0x1205282c)));
  /* 12027870 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027873 je 0x12027896 */
  if (C.zf) goto L_12027896;
  /* 12027875 push 0x1204da80 */
  push32((uint32_t)(0x1204da80u));
  /* 1202787a push 0 */
  push32((uint32_t)(0x0u));
  /* 1202787c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 12027881 push 0x1204da44 */
  push32((uint32_t)(0x1204da44u));
  /* 12027886 push 2 */
  push32((uint32_t)(0x2u));
  /* 12027888 call 0x12026020 */
  push32(0x1202788du); f_12026020();
  /* 1202788d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027890 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027893 jne 0x12027896 */
  if (!C.zf) goto L_12027896;
  /* 12027895 int3  */
  x86_unimpl("int3 @ 0x12027895");
L_12027896:;
  /* 12027896 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12027898 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202789a jne 0x1202786b */
  if (!C.zf) goto L_1202786b;
  /* 1202789c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202789f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 120278a2 mov dword ptr [0x1205282c], eax */
  w32((uint32_t)(0x1205282c), (EAX));
L_120278a7:;
  /* 120278a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120278aa cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120278ae je 0x120278bf */
  if (C.zf) goto L_120278bf;
  /* 120278b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120278b3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 120278b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120278b9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120278bb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 120278bd jmp 0x120278fa */
  goto L_120278fa;
L_120278bf:;
  /* 120278bf mov eax, dword ptr [0x12052834] */
  EAX = (r32((uint32_t)(0x12052834)));
  /* 120278c4 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120278c7 je 0x120278ea */
  if (C.zf) goto L_120278ea;
  /* 120278c9 push 0x1204da64 */
  push32((uint32_t)(0x1204da64u));
  /* 120278ce push 0 */
  push32((uint32_t)(0x0u));
  /* 120278d0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 120278d5 push 0x1204da44 */
  push32((uint32_t)(0x1204da44u));
  /* 120278da push 2 */
  push32((uint32_t)(0x2u));
  /* 120278dc call 0x12026020 */
  push32(0x120278e1u); f_12026020();
  /* 120278e1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120278e4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120278e7 jne 0x120278ea */
  if (!C.zf) goto L_120278ea;
  /* 120278e9 int3  */
  x86_unimpl("int3 @ 0x120278e9");
L_120278ea:;
  /* 120278ea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120278ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120278ee jne 0x120278bf */
  if (!C.zf) goto L_120278bf;
  /* 120278f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120278f3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120278f5 mov dword ptr [0x12052834], eax */
  w32((uint32_t)(0x12052834), (EAX));
L_120278fa:;
  /* 120278fa cmp dword ptr [0x12052834], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052834))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027901 je 0x12027911 */
  if (C.zf) goto L_12027911;
  /* 12027903 mov ecx, dword ptr [0x12052834] */
  ECX = (r32((uint32_t)(0x12052834)));
  /* 12027909 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202790c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1202790f jmp 0x12027919 */
  goto L_12027919;
L_12027911:;
  /* 12027911 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12027914 mov dword ptr [0x1205282c], eax */
  w32((uint32_t)(0x1205282c), (EAX));
L_12027919:;
  /* 12027919 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202791c mov edx, dword ptr [0x12052834] */
  EDX = (r32((uint32_t)(0x12052834)));
  /* 12027922 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12027924 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12027927 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1202792e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12027931 mov dword ptr [0x12052834], ecx */
  w32((uint32_t)(0x12052834), (ECX));
  /* 12027937 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1202793a:;
  /* 1202793a pop edi */
  EDI = (pop32());
  /* 1202793b pop esi */
  ESI = (pop32());
  /* 1202793c pop ebx */
  EBX = (pop32());
  /* 1202793d mov esp, ebp */
  ESP = (EBP);
  /* 1202793f pop ebp */
  EBP = (pop32());
  /* 12027940 ret  */
  ESPCHK(0x12027430u, _esp0);
  ESP += 4; return;
}

/* FUN_10007950 @ 0x12027950 (27 bytes, 13 insns) */
void f_12027950(void) {
  FTRACE(0x12027950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12027950 push ebp */
  push32((uint32_t)(EBP));
  /* 12027951 mov ebp, esp */
  EBP = (ESP);
  /* 12027953 push 0 */
  push32((uint32_t)(0x0u));
  /* 12027955 push 0 */
  push32((uint32_t)(0x0u));
  /* 12027957 push 1 */
  push32((uint32_t)(0x1u));
  /* 12027959 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202795c push eax */
  push32((uint32_t)(EAX));
  /* 1202795d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12027960 push ecx */
  push32((uint32_t)(ECX));
  /* 12027961 call 0x12027970 */
  push32(0x12027966u); f_12027970();
  /* 12027966 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027969 pop ebp */
  EBP = (pop32());
  /* 1202796a ret  */
  ESPCHK(0x12027950u, _esp0);
  ESP += 4; return;
}

/* FUN_10007970 @ 0x12027970 (64 bytes, 27 insns) */
void f_12027970(void) {
  FTRACE(0x12027970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12027970 push ebp */
  push32((uint32_t)(EBP));
  /* 12027971 mov ebp, esp */
  EBP = (ESP);
  /* 12027973 push ecx */
  push32((uint32_t)(ECX));
  /* 12027974 push 9 */
  push32((uint32_t)(0x9u));
  /* 12027976 call 0x1202a960 */
  push32(0x1202797bu); f_1202a960();
  /* 1202797b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202797e push 0 */
  push32((uint32_t)(0x0u));
  /* 12027980 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12027983 push eax */
  push32((uint32_t)(EAX));
  /* 12027984 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12027987 push ecx */
  push32((uint32_t)(ECX));
  /* 12027988 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1202798b push edx */
  push32((uint32_t)(EDX));
  /* 1202798c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202798f push eax */
  push32((uint32_t)(EAX));
  /* 12027990 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12027993 push ecx */
  push32((uint32_t)(ECX));
  /* 12027994 call 0x12027430 */
  push32(0x12027999u); f_12027430();
  /* 12027999 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202799c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1202799f push 9 */
  push32((uint32_t)(0x9u));
  /* 120279a1 call 0x1202aa00 */
  push32(0x120279a6u); f_1202aa00();
  /* 120279a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120279a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120279ac mov esp, ebp */
  ESP = (EBP);
  /* 120279ae pop ebp */
  EBP = (pop32());
  /* 120279af ret  */
  ESPCHK(0x12027970u, _esp0);
  ESP += 4; return;
}

/* FUN_100079b0 @ 0x120279b0 (19 bytes, 9 insns) */
void f_120279b0(void) {
  FTRACE(0x120279b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120279b0 push ebp */
  push32((uint32_t)(EBP));
  /* 120279b1 mov ebp, esp */
  EBP = (ESP);
  /* 120279b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 120279b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120279b8 push eax */
  push32((uint32_t)(EAX));
  /* 120279b9 call 0x120279f0 */
  push32(0x120279beu); f_120279f0();
  /* 120279be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120279c1 pop ebp */
  EBP = (pop32());
  /* 120279c2 ret  */
  ESPCHK(0x120279b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100079d0 @ 0x120279d0 (19 bytes, 9 insns) */
void f_120279d0(void) {
  FTRACE(0x120279d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120279d0 push ebp */
  push32((uint32_t)(EBP));
  /* 120279d1 mov ebp, esp */
  EBP = (ESP);
  /* 120279d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 120279d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120279d8 push eax */
  push32((uint32_t)(EAX));
  /* 120279d9 call 0x12027a20 */
  push32(0x120279deu); f_12027a20();
  /* 120279de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120279e1 pop ebp */
  EBP = (pop32());
  /* 120279e2 ret  */
  ESPCHK(0x120279d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100079f0 @ 0x120279f0 (41 bytes, 16 insns) */
void f_120279f0(void) {
  FTRACE(0x120279f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120279f0 push ebp */
  push32((uint32_t)(EBP));
  /* 120279f1 mov ebp, esp */
  EBP = (ESP);
  /* 120279f3 push 9 */
  push32((uint32_t)(0x9u));
  /* 120279f5 call 0x1202a960 */
  push32(0x120279fau); f_1202a960();
  /* 120279fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120279fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12027a00 push eax */
  push32((uint32_t)(EAX));
  /* 12027a01 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12027a04 push ecx */
  push32((uint32_t)(ECX));
  /* 12027a05 call 0x12027a20 */
  push32(0x12027a0au); f_12027a20();
  /* 12027a0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027a0d push 9 */
  push32((uint32_t)(0x9u));
  /* 12027a0f call 0x1202aa00 */
  push32(0x12027a14u); f_1202aa00();
  /* 12027a14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027a17 pop ebp */
  EBP = (pop32());
  /* 12027a18 ret  */
  ESPCHK(0x120279f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a20 @ 0x12027a20 (1004 bytes, 342 insns) */
void f_12027a20(void) {
  FTRACE(0x12027a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12027a20 push ebp */
  push32((uint32_t)(EBP));
  /* 12027a21 mov ebp, esp */
  EBP = (ESP);
  /* 12027a23 push ecx */
  push32((uint32_t)(ECX));
  /* 12027a24 push ebx */
  push32((uint32_t)(EBX));
  /* 12027a25 push esi */
  push32((uint32_t)(ESI));
  /* 12027a26 push edi */
  push32((uint32_t)(EDI));
  /* 12027a27 mov eax, dword ptr [0x12050a84] */
  EAX = (r32((uint32_t)(0x12050a84)));
  /* 12027a2c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12027a2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12027a31 je 0x12027a63 */
  if (C.zf) goto L_12027a63;
L_12027a33:;
  /* 12027a33 call 0x12028100 */
  push32(0x12027a38u); f_12028100();
  /* 12027a38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12027a3a jne 0x12027a5d */
  if (!C.zf) goto L_12027a5d;
  /* 12027a3c push 0x1204da50 */
  push32((uint32_t)(0x1204da50u));
  /* 12027a41 push 0 */
  push32((uint32_t)(0x0u));
  /* 12027a43 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 12027a48 push 0x1204da44 */
  push32((uint32_t)(0x1204da44u));
  /* 12027a4d push 2 */
  push32((uint32_t)(0x2u));
  /* 12027a4f call 0x12026020 */
  push32(0x12027a54u); f_12026020();
  /* 12027a54 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027a57 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027a5a jne 0x12027a5d */
  if (!C.zf) goto L_12027a5d;
  /* 12027a5c int3  */
  x86_unimpl("int3 @ 0x12027a5c");
L_12027a5d:;
  /* 12027a5d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12027a5f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12027a61 jne 0x12027a33 */
  if (!C.zf) goto L_12027a33;
L_12027a63:;
  /* 12027a63 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027a67 jne 0x12027a6e */
  if (!C.zf) goto L_12027a6e;
  /* 12027a69 jmp 0x12027e05 */
  goto L_12027e05;
L_12027a6e:;
  /* 12027a6e push 0 */
  push32((uint32_t)(0x0u));
  /* 12027a70 push 0 */
  push32((uint32_t)(0x0u));
  /* 12027a72 push 0 */
  push32((uint32_t)(0x0u));
  /* 12027a74 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12027a77 push edx */
  push32((uint32_t)(EDX));
  /* 12027a78 push 0 */
  push32((uint32_t)(0x0u));
  /* 12027a7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12027a7d push eax */
  push32((uint32_t)(EAX));
  /* 12027a7e push 3 */
  push32((uint32_t)(0x3u));
  /* 12027a80 call dword ptr [0x12050c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12050c90))), 0x12027a86u);
  /* 12027a86 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027a89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12027a8b jne 0x12027ab8 */
  if (!C.zf) goto L_12027ab8;
L_12027a8d:;
  /* 12027a8d push 0x1204dd14 */
  push32((uint32_t)(0x1204dd14u));
  /* 12027a92 push 0x1204d9e4 */
  push32((uint32_t)(0x1204d9e4u));
  /* 12027a97 push 0 */
  push32((uint32_t)(0x0u));
  /* 12027a99 push 0 */
  push32((uint32_t)(0x0u));
  /* 12027a9b push 0 */
  push32((uint32_t)(0x0u));
  /* 12027a9d push 0 */
  push32((uint32_t)(0x0u));
  /* 12027a9f call 0x12026020 */
  push32(0x12027aa4u); f_12026020();
  /* 12027aa4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027aa7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027aaa jne 0x12027aad */
  if (!C.zf) goto L_12027aad;
  /* 12027aac int3  */
  x86_unimpl("int3 @ 0x12027aac");
L_12027aad:;
  /* 12027aad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12027aaf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12027ab1 jne 0x12027a8d */
  if (!C.zf) goto L_12027a8d;
  /* 12027ab3 jmp 0x12027e05 */
  goto L_12027e05;
L_12027ab8:;
  /* 12027ab8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12027abb push edx */
  push32((uint32_t)(EDX));
  /* 12027abc call 0x12028560 */
  push32(0x12027ac1u); f_12028560();
  /* 12027ac1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027ac4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12027ac6 jne 0x12027ae9 */
  if (!C.zf) goto L_12027ae9;
  /* 12027ac8 push 0x1204db54 */
  push32((uint32_t)(0x1204db54u));
  /* 12027acd push 0 */
  push32((uint32_t)(0x0u));
  /* 12027acf push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 12027ad4 push 0x1204da44 */
  push32((uint32_t)(0x1204da44u));
  /* 12027ad9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12027adb call 0x12026020 */
  push32(0x12027ae0u); f_12026020();
  /* 12027ae0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027ae3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027ae6 jne 0x12027ae9 */
  if (!C.zf) goto L_12027ae9;
  /* 12027ae8 int3  */
  x86_unimpl("int3 @ 0x12027ae8");
L_12027ae9:;
  /* 12027ae9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12027aeb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12027aed jne 0x12027ab8 */
  if (!C.zf) goto L_12027ab8;
  /* 12027aef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12027af2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12027af5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12027af8:;
  /* 12027af8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027afb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12027afe and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12027b03 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027b06 je 0x12027b4b */
  if (C.zf) goto L_12027b4b;
  /* 12027b08 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027b0b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027b0f je 0x12027b4b */
  if (C.zf) goto L_12027b4b;
  /* 12027b11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027b14 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12027b17 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12027b1c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027b1f je 0x12027b4b */
  if (C.zf) goto L_12027b4b;
  /* 12027b21 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027b24 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027b28 je 0x12027b4b */
  if (C.zf) goto L_12027b4b;
  /* 12027b2a push 0x1204dcec */
  push32((uint32_t)(0x1204dcecu));
  /* 12027b2f push 0 */
  push32((uint32_t)(0x0u));
  /* 12027b31 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 12027b36 push 0x1204da44 */
  push32((uint32_t)(0x1204da44u));
  /* 12027b3b push 2 */
  push32((uint32_t)(0x2u));
  /* 12027b3d call 0x12026020 */
  push32(0x12027b42u); f_12026020();
  /* 12027b42 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027b45 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027b48 jne 0x12027b4b */
  if (!C.zf) goto L_12027b4b;
  /* 12027b4a int3  */
  x86_unimpl("int3 @ 0x12027b4a");
L_12027b4b:;
  /* 12027b4b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12027b4d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12027b4f jne 0x12027af8 */
  if (!C.zf) goto L_12027af8;
  /* 12027b51 mov eax, dword ptr [0x12050a84] */
  EAX = (r32((uint32_t)(0x12050a84)));
  /* 12027b56 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12027b59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12027b5b jne 0x12027c26 */
  if (!C.zf) goto L_12027c26;
  /* 12027b61 push 4 */
  push32((uint32_t)(0x4u));
  /* 12027b63 mov cl, byte ptr [0x12050a90] */
  CL = (r8((uint32_t)(0x12050a90)));
  /* 12027b69 push ecx */
  push32((uint32_t)(ECX));
  /* 12027b6a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027b6d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12027b70 push edx */
  push32((uint32_t)(EDX));
  /* 12027b71 call 0x12028070 */
  push32(0x12027b76u); f_12028070();
  /* 12027b76 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027b79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12027b7b jne 0x12027bc0 */
  if (!C.zf) goto L_12027bc0;
L_12027b7d:;
  /* 12027b7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027b80 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12027b83 push eax */
  push32((uint32_t)(EAX));
  /* 12027b84 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027b87 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12027b8a push edx */
  push32((uint32_t)(EDX));
  /* 12027b8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027b8e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12027b91 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12027b97 mov edx, dword ptr [ecx*4 + 0x12050a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12050a94)));
  /* 12027b9e push edx */
  push32((uint32_t)(EDX));
  /* 12027b9f push 0x1204dcc0 */
  push32((uint32_t)(0x1204dcc0u));
  /* 12027ba4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12027ba6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12027ba8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12027baa push 1 */
  push32((uint32_t)(0x1u));
  /* 12027bac call 0x12026020 */
  push32(0x12027bb1u); f_12026020();
  /* 12027bb1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027bb4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027bb7 jne 0x12027bba */
  if (!C.zf) goto L_12027bba;
  /* 12027bb9 int3  */
  x86_unimpl("int3 @ 0x12027bb9");
L_12027bba:;
  /* 12027bba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12027bbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12027bbe jne 0x12027b7d */
  if (!C.zf) goto L_12027b7d;
L_12027bc0:;
  /* 12027bc0 push 4 */
  push32((uint32_t)(0x4u));
  /* 12027bc2 mov cl, byte ptr [0x12050a90] */
  CL = (r8((uint32_t)(0x12050a90)));
  /* 12027bc8 push ecx */
  push32((uint32_t)(ECX));
  /* 12027bc9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027bcc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12027bcf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027bd2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12027bd6 push edx */
  push32((uint32_t)(EDX));
  /* 12027bd7 call 0x12028070 */
  push32(0x12027bdcu); f_12028070();
  /* 12027bdc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027bdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12027be1 jne 0x12027c26 */
  if (!C.zf) goto L_12027c26;
L_12027be3:;
  /* 12027be3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027be6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12027be9 push eax */
  push32((uint32_t)(EAX));
  /* 12027bea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027bed mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12027bf0 push edx */
  push32((uint32_t)(EDX));
  /* 12027bf1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027bf4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12027bf7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12027bfd mov edx, dword ptr [ecx*4 + 0x12050a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12050a94)));
  /* 12027c04 push edx */
  push32((uint32_t)(EDX));
  /* 12027c05 push 0x1204dc94 */
  push32((uint32_t)(0x1204dc94u));
  /* 12027c0a push 0 */
  push32((uint32_t)(0x0u));
  /* 12027c0c push 0 */
  push32((uint32_t)(0x0u));
  /* 12027c0e push 0 */
  push32((uint32_t)(0x0u));
  /* 12027c10 push 1 */
  push32((uint32_t)(0x1u));
  /* 12027c12 call 0x12026020 */
  push32(0x12027c17u); f_12026020();
  /* 12027c17 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027c1a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027c1d jne 0x12027c20 */
  if (!C.zf) goto L_12027c20;
  /* 12027c1f int3  */
  x86_unimpl("int3 @ 0x12027c1f");
L_12027c20:;
  /* 12027c20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12027c22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12027c24 jne 0x12027be3 */
  if (!C.zf) goto L_12027be3;
L_12027c26:;
  /* 12027c26 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027c29 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027c2d jne 0x12027c9b */
  if (!C.zf) goto L_12027c9b;
L_12027c2f:;
  /* 12027c2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027c32 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027c39 jne 0x12027c44 */
  if (!C.zf) goto L_12027c44;
  /* 12027c3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027c3e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027c42 je 0x12027c65 */
  if (C.zf) goto L_12027c65;
L_12027c44:;
  /* 12027c44 push 0x1204dc54 */
  push32((uint32_t)(0x1204dc54u));
  /* 12027c49 push 0 */
  push32((uint32_t)(0x0u));
  /* 12027c4b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 12027c50 push 0x1204da44 */
  push32((uint32_t)(0x1204da44u));
  /* 12027c55 push 2 */
  push32((uint32_t)(0x2u));
  /* 12027c57 call 0x12026020 */
  push32(0x12027c5cu); f_12026020();
  /* 12027c5c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027c5f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027c62 jne 0x12027c65 */
  if (!C.zf) goto L_12027c65;
  /* 12027c64 int3  */
  x86_unimpl("int3 @ 0x12027c64");
L_12027c65:;
  /* 12027c65 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12027c67 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12027c69 jne 0x12027c2f */
  if (!C.zf) goto L_12027c2f;
  /* 12027c6b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027c6e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12027c71 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12027c74 push eax */
  push32((uint32_t)(EAX));
  /* 12027c75 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12027c77 mov cl, byte ptr [0x12050a91] */
  CL = (r8((uint32_t)(0x12050a91)));
  /* 12027c7d push ecx */
  push32((uint32_t)(ECX));
  /* 12027c7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027c81 push edx */
  push32((uint32_t)(EDX));
  /* 12027c82 call 0x1202acd0 */
  push32(0x12027c87u); f_1202acd0();
  /* 12027c87 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027c8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027c8d push eax */
  push32((uint32_t)(EAX));
  /* 12027c8e call 0x1202b0d0 */
  push32(0x12027c93u); f_1202b0d0();
  /* 12027c93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027c96 jmp 0x12027e05 */
  goto L_12027e05;
L_12027c9b:;
  /* 12027c9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027c9e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027ca2 jne 0x12027cb1 */
  if (!C.zf) goto L_12027cb1;
  /* 12027ca4 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027ca8 jne 0x12027cb1 */
  if (!C.zf) goto L_12027cb1;
  /* 12027caa mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12027cb1:;
  /* 12027cb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027cb4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12027cb7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027cba je 0x12027cdd */
  if (C.zf) goto L_12027cdd;
  /* 12027cbc push 0x1204dc34 */
  push32((uint32_t)(0x1204dc34u));
  /* 12027cc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12027cc3 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 12027cc8 push 0x1204da44 */
  push32((uint32_t)(0x1204da44u));
  /* 12027ccd push 2 */
  push32((uint32_t)(0x2u));
  /* 12027ccf call 0x12026020 */
  push32(0x12027cd4u); f_12026020();
  /* 12027cd4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027cd7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027cda jne 0x12027cdd */
  if (!C.zf) goto L_12027cdd;
  /* 12027cdc int3  */
  x86_unimpl("int3 @ 0x12027cdc");
L_12027cdd:;
  /* 12027cdd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12027cdf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12027ce1 jne 0x12027cb1 */
  if (!C.zf) goto L_12027cb1;
  /* 12027ce3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027ce6 mov eax, dword ptr [0x12052838] */
  EAX = (r32((uint32_t)(0x12052838)));
  /* 12027ceb sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12027cee mov dword ptr [0x12052838], eax */
  w32((uint32_t)(0x12052838), (EAX));
  /* 12027cf3 mov ecx, dword ptr [0x12050a84] */
  ECX = (r32((uint32_t)(0x12050a84)));
  /* 12027cf9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12027cfc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12027cfe jne 0x12027ddc */
  if (!C.zf) goto L_12027ddc;
  /* 12027d04 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027d07 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027d0a je 0x12027d1c */
  if (C.zf) goto L_12027d1c;
  /* 12027d0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027d0f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12027d11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027d14 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12027d17 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12027d1a jmp 0x12027d5a */
  goto L_12027d5a;
L_12027d1c:;
  /* 12027d1c mov ecx, dword ptr [0x1205282c] */
  ECX = (r32((uint32_t)(0x1205282c)));
  /* 12027d22 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027d25 je 0x12027d48 */
  if (C.zf) goto L_12027d48;
  /* 12027d27 push 0x1204dc1c */
  push32((uint32_t)(0x1204dc1cu));
  /* 12027d2c push 0 */
  push32((uint32_t)(0x0u));
  /* 12027d2e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 12027d33 push 0x1204da44 */
  push32((uint32_t)(0x1204da44u));
  /* 12027d38 push 2 */
  push32((uint32_t)(0x2u));
  /* 12027d3a call 0x12026020 */
  push32(0x12027d3fu); f_12026020();
  /* 12027d3f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027d42 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027d45 jne 0x12027d48 */
  if (!C.zf) goto L_12027d48;
  /* 12027d47 int3  */
  x86_unimpl("int3 @ 0x12027d47");
L_12027d48:;
  /* 12027d48 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12027d4a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12027d4c jne 0x12027d1c */
  if (!C.zf) goto L_12027d1c;
  /* 12027d4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027d51 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12027d54 mov dword ptr [0x1205282c], ecx */
  w32((uint32_t)(0x1205282c), (ECX));
L_12027d5a:;
  /* 12027d5a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027d5d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027d61 je 0x12027d72 */
  if (C.zf) goto L_12027d72;
  /* 12027d63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027d66 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12027d69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027d6c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12027d6e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12027d70 jmp 0x12027daf */
  goto L_12027daf;
L_12027d72:;
  /* 12027d72 mov ecx, dword ptr [0x12052834] */
  ECX = (r32((uint32_t)(0x12052834)));
  /* 12027d78 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027d7b je 0x12027d9e */
  if (C.zf) goto L_12027d9e;
  /* 12027d7d push 0x1204dc04 */
  push32((uint32_t)(0x1204dc04u));
  /* 12027d82 push 0 */
  push32((uint32_t)(0x0u));
  /* 12027d84 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 12027d89 push 0x1204da44 */
  push32((uint32_t)(0x1204da44u));
  /* 12027d8e push 2 */
  push32((uint32_t)(0x2u));
  /* 12027d90 call 0x12026020 */
  push32(0x12027d95u); f_12026020();
  /* 12027d95 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027d98 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027d9b jne 0x12027d9e */
  if (!C.zf) goto L_12027d9e;
  /* 12027d9d int3  */
  x86_unimpl("int3 @ 0x12027d9d");
L_12027d9e:;
  /* 12027d9e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12027da0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12027da2 jne 0x12027d72 */
  if (!C.zf) goto L_12027d72;
  /* 12027da4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027da7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12027da9 mov dword ptr [0x12052834], ecx */
  w32((uint32_t)(0x12052834), (ECX));
L_12027daf:;
  /* 12027daf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027db2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12027db5 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12027db8 push eax */
  push32((uint32_t)(EAX));
  /* 12027db9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12027dbb mov cl, byte ptr [0x12050a91] */
  CL = (r8((uint32_t)(0x12050a91)));
  /* 12027dc1 push ecx */
  push32((uint32_t)(ECX));
  /* 12027dc2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027dc5 push edx */
  push32((uint32_t)(EDX));
  /* 12027dc6 call 0x1202acd0 */
  push32(0x12027dcbu); f_1202acd0();
  /* 12027dcb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027dce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027dd1 push eax */
  push32((uint32_t)(EAX));
  /* 12027dd2 call 0x1202b0d0 */
  push32(0x12027dd7u); f_1202b0d0();
  /* 12027dd7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027dda jmp 0x12027e05 */
  goto L_12027e05;
L_12027ddc:;
  /* 12027ddc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027ddf mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 12027de6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027de9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12027dec push eax */
  push32((uint32_t)(EAX));
  /* 12027ded xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12027def mov cl, byte ptr [0x12050a91] */
  CL = (r8((uint32_t)(0x12050a91)));
  /* 12027df5 push ecx */
  push32((uint32_t)(ECX));
  /* 12027df6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027df9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12027dfc push edx */
  push32((uint32_t)(EDX));
  /* 12027dfd call 0x1202acd0 */
  push32(0x12027e02u); f_1202acd0();
  /* 12027e02 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12027e05:;
  /* 12027e05 pop edi */
  EDI = (pop32());
  /* 12027e06 pop esi */
  ESI = (pop32());
  /* 12027e07 pop ebx */
  EBX = (pop32());
  /* 12027e08 mov esp, ebp */
  ESP = (EBP);
  /* 12027e0a pop ebp */
  EBP = (pop32());
  /* 12027e0b ret  */
  ESPCHK(0x12027a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e10 @ 0x12027e10 (19 bytes, 9 insns) */
void f_12027e10(void) {
  FTRACE(0x12027e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12027e10 push ebp */
  push32((uint32_t)(EBP));
  /* 12027e11 mov ebp, esp */
  EBP = (ESP);
  /* 12027e13 push 1 */
  push32((uint32_t)(0x1u));
  /* 12027e15 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12027e18 push eax */
  push32((uint32_t)(EAX));
  /* 12027e19 call 0x12027e30 */
  push32(0x12027e1eu); f_12027e30();
  /* 12027e1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027e21 pop ebp */
  EBP = (pop32());
  /* 12027e22 ret  */
  ESPCHK(0x12027e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e30 @ 0x12027e30 (342 bytes, 119 insns) */
void f_12027e30(void) {
  FTRACE(0x12027e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12027e30 push ebp */
  push32((uint32_t)(EBP));
  /* 12027e31 mov ebp, esp */
  EBP = (ESP);
  /* 12027e33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12027e36 push ebx */
  push32((uint32_t)(EBX));
  /* 12027e37 push esi */
  push32((uint32_t)(ESI));
  /* 12027e38 push edi */
  push32((uint32_t)(EDI));
  /* 12027e39 mov eax, dword ptr [0x12050a84] */
  EAX = (r32((uint32_t)(0x12050a84)));
  /* 12027e3e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12027e41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12027e43 je 0x12027e75 */
  if (C.zf) goto L_12027e75;
L_12027e45:;
  /* 12027e45 call 0x12028100 */
  push32(0x12027e4au); f_12028100();
  /* 12027e4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12027e4c jne 0x12027e6f */
  if (!C.zf) goto L_12027e6f;
  /* 12027e4e push 0x1204da50 */
  push32((uint32_t)(0x1204da50u));
  /* 12027e53 push 0 */
  push32((uint32_t)(0x0u));
  /* 12027e55 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 12027e5a push 0x1204da44 */
  push32((uint32_t)(0x1204da44u));
  /* 12027e5f push 2 */
  push32((uint32_t)(0x2u));
  /* 12027e61 call 0x12026020 */
  push32(0x12027e66u); f_12026020();
  /* 12027e66 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027e69 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027e6c jne 0x12027e6f */
  if (!C.zf) goto L_12027e6f;
  /* 12027e6e int3  */
  x86_unimpl("int3 @ 0x12027e6e");
L_12027e6f:;
  /* 12027e6f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12027e71 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12027e73 jne 0x12027e45 */
  if (!C.zf) goto L_12027e45;
L_12027e75:;
  /* 12027e75 push 9 */
  push32((uint32_t)(0x9u));
  /* 12027e77 call 0x1202a960 */
  push32(0x12027e7cu); f_1202a960();
  /* 12027e7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12027e7f:;
  /* 12027e7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12027e82 push edx */
  push32((uint32_t)(EDX));
  /* 12027e83 call 0x12028560 */
  push32(0x12027e88u); f_12028560();
  /* 12027e88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027e8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12027e8d jne 0x12027eb0 */
  if (!C.zf) goto L_12027eb0;
  /* 12027e8f push 0x1204db54 */
  push32((uint32_t)(0x1204db54u));
  /* 12027e94 push 0 */
  push32((uint32_t)(0x0u));
  /* 12027e96 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 12027e9b push 0x1204da44 */
  push32((uint32_t)(0x1204da44u));
  /* 12027ea0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12027ea2 call 0x12026020 */
  push32(0x12027ea7u); f_12026020();
  /* 12027ea7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027eaa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027ead jne 0x12027eb0 */
  if (!C.zf) goto L_12027eb0;
  /* 12027eaf int3  */
  x86_unimpl("int3 @ 0x12027eaf");
L_12027eb0:;
  /* 12027eb0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12027eb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12027eb4 jne 0x12027e7f */
  if (!C.zf) goto L_12027e7f;
  /* 12027eb6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12027eb9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12027ebc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12027ebf:;
  /* 12027ebf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12027ec2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12027ec5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12027eca cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027ecd je 0x12027f12 */
  if (C.zf) goto L_12027f12;
  /* 12027ecf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12027ed2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027ed6 je 0x12027f12 */
  if (C.zf) goto L_12027f12;
  /* 12027ed8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12027edb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12027ede and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12027ee3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027ee6 je 0x12027f12 */
  if (C.zf) goto L_12027f12;
  /* 12027ee8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12027eeb cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027eef je 0x12027f12 */
  if (C.zf) goto L_12027f12;
  /* 12027ef1 push 0x1204dcec */
  push32((uint32_t)(0x1204dcecu));
  /* 12027ef6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12027ef8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 12027efd push 0x1204da44 */
  push32((uint32_t)(0x1204da44u));
  /* 12027f02 push 2 */
  push32((uint32_t)(0x2u));
  /* 12027f04 call 0x12026020 */
  push32(0x12027f09u); f_12026020();
  /* 12027f09 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027f0c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027f0f jne 0x12027f12 */
  if (!C.zf) goto L_12027f12;
  /* 12027f11 int3  */
  x86_unimpl("int3 @ 0x12027f11");
L_12027f12:;
  /* 12027f12 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12027f14 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12027f16 jne 0x12027ebf */
  if (!C.zf) goto L_12027ebf;
  /* 12027f18 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12027f1b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027f1f jne 0x12027f2e */
  if (!C.zf) goto L_12027f2e;
  /* 12027f21 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027f25 jne 0x12027f2e */
  if (!C.zf) goto L_12027f2e;
  /* 12027f27 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12027f2e:;
  /* 12027f2e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12027f31 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027f35 je 0x12027f69 */
  if (C.zf) goto L_12027f69;
L_12027f37:;
  /* 12027f37 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12027f3a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12027f3d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027f40 je 0x12027f63 */
  if (C.zf) goto L_12027f63;
  /* 12027f42 push 0x1204dc34 */
  push32((uint32_t)(0x1204dc34u));
  /* 12027f47 push 0 */
  push32((uint32_t)(0x0u));
  /* 12027f49 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 12027f4e push 0x1204da44 */
  push32((uint32_t)(0x1204da44u));
  /* 12027f53 push 2 */
  push32((uint32_t)(0x2u));
  /* 12027f55 call 0x12026020 */
  push32(0x12027f5au); f_12026020();
  /* 12027f5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027f5d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027f60 jne 0x12027f63 */
  if (!C.zf) goto L_12027f63;
  /* 12027f62 int3  */
  x86_unimpl("int3 @ 0x12027f62");
L_12027f63:;
  /* 12027f63 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12027f65 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12027f67 jne 0x12027f37 */
  if (!C.zf) goto L_12027f37;
L_12027f69:;
  /* 12027f69 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12027f6c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12027f6f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12027f72 push 9 */
  push32((uint32_t)(0x9u));
  /* 12027f74 call 0x1202aa00 */
  push32(0x12027f79u); f_1202aa00();
  /* 12027f79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027f7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027f7f pop edi */
  EDI = (pop32());
  /* 12027f80 pop esi */
  ESI = (pop32());
  /* 12027f81 pop ebx */
  EBX = (pop32());
  /* 12027f82 mov esp, ebp */
  ESP = (EBP);
  /* 12027f84 pop ebp */
  EBP = (pop32());
  /* 12027f85 ret  */
  ESPCHK(0x12027e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f90 @ 0x12027f90 (28 bytes, 11 insns) */
void f_12027f90(void) {
  FTRACE(0x12027f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12027f90 push ebp */
  push32((uint32_t)(EBP));
  /* 12027f91 mov ebp, esp */
  EBP = (ESP);
  /* 12027f93 push ecx */
  push32((uint32_t)(ECX));
  /* 12027f94 mov eax, dword ptr [0x12050a8c] */
  EAX = (r32((uint32_t)(0x12050a8c)));
  /* 12027f99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12027f9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12027f9f mov dword ptr [0x12050a8c], ecx */
  w32((uint32_t)(0x12050a8c), (ECX));
  /* 12027fa5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027fa8 mov esp, ebp */
  ESP = (EBP);
  /* 12027faa pop ebp */
  EBP = (pop32());
  /* 12027fab ret  */
  ESPCHK(0x12027f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fb0 @ 0x12027fb0 (157 bytes, 59 insns) */
void f_12027fb0(void) {
  FTRACE(0x12027fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12027fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12027fb1 mov ebp, esp */
  EBP = (ESP);
  /* 12027fb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12027fb4 push ebx */
  push32((uint32_t)(EBX));
  /* 12027fb5 push esi */
  push32((uint32_t)(ESI));
  /* 12027fb6 push edi */
  push32((uint32_t)(EDI));
  /* 12027fb7 push 9 */
  push32((uint32_t)(0x9u));
  /* 12027fb9 call 0x1202a960 */
  push32(0x12027fbeu); f_1202a960();
  /* 12027fbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027fc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12027fc4 push eax */
  push32((uint32_t)(EAX));
  /* 12027fc5 call 0x12028560 */
  push32(0x12027fcau); f_12028560();
  /* 12027fca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12027fcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12027fcf je 0x1202803c */
  if (C.zf) goto L_1202803c;
  /* 12027fd1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12027fd4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12027fd7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12027fda:;
  /* 12027fda mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027fdd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12027fe0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12027fe5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027fe8 je 0x1202802d */
  if (C.zf) goto L_1202802d;
  /* 12027fea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027fed cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12027ff1 je 0x1202802d */
  if (C.zf) goto L_1202802d;
  /* 12027ff3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12027ff6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12027ff9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12027ffe cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028001 je 0x1202802d */
  if (C.zf) goto L_1202802d;
  /* 12028003 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028006 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202800a je 0x1202802d */
  if (C.zf) goto L_1202802d;
  /* 1202800c push 0x1204dcec */
  push32((uint32_t)(0x1204dcecu));
  /* 12028011 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028013 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 12028018 push 0x1204da44 */
  push32((uint32_t)(0x1204da44u));
  /* 1202801d push 2 */
  push32((uint32_t)(0x2u));
  /* 1202801f call 0x12026020 */
  push32(0x12028024u); f_12026020();
  /* 12028024 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028027 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202802a jne 0x1202802d */
  if (!C.zf) goto L_1202802d;
  /* 1202802c int3  */
  x86_unimpl("int3 @ 0x1202802c");
L_1202802d:;
  /* 1202802d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1202802f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12028031 jne 0x12027fda */
  if (!C.zf) goto L_12027fda;
  /* 12028033 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028036 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12028039 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_1202803c:;
  /* 1202803c push 9 */
  push32((uint32_t)(0x9u));
  /* 1202803e call 0x1202aa00 */
  push32(0x12028043u); f_1202aa00();
  /* 12028043 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028046 pop edi */
  EDI = (pop32());
  /* 12028047 pop esi */
  ESI = (pop32());
  /* 12028048 pop ebx */
  EBX = (pop32());
  /* 12028049 mov esp, ebp */
  ESP = (EBP);
  /* 1202804b pop ebp */
  EBP = (pop32());
  /* 1202804c ret  */
  ESPCHK(0x12027fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008050 @ 0x12028050 (28 bytes, 11 insns) */
void f_12028050(void) {
  FTRACE(0x12028050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12028050 push ebp */
  push32((uint32_t)(EBP));
  /* 12028051 mov ebp, esp */
  EBP = (ESP);
  /* 12028053 push ecx */
  push32((uint32_t)(ECX));
  /* 12028054 mov eax, dword ptr [0x12050c90] */
  EAX = (r32((uint32_t)(0x12050c90)));
  /* 12028059 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1202805c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202805f mov dword ptr [0x12050c90], ecx */
  w32((uint32_t)(0x12050c90), (ECX));
  /* 12028065 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028068 mov esp, ebp */
  ESP = (EBP);
  /* 1202806a pop ebp */
  EBP = (pop32());
  /* 1202806b ret  */
  ESPCHK(0x12028050u, _esp0);
  ESP += 4; return;
}

/* FUN_10008070 @ 0x12028070 (136 bytes, 55 insns) */
void f_12028070(void) {
  FTRACE(0x12028070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12028070 push ebp */
  push32((uint32_t)(EBP));
  /* 12028071 mov ebp, esp */
  EBP = (ESP);
  /* 12028073 push ecx */
  push32((uint32_t)(ECX));
  /* 12028074 push ebx */
  push32((uint32_t)(EBX));
  /* 12028075 push esi */
  push32((uint32_t)(ESI));
  /* 12028076 push edi */
  push32((uint32_t)(EDI));
  /* 12028077 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_1202807e:;
  /* 1202807e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12028081 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12028084 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12028087 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1202808a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202808c je 0x120280ee */
  if (C.zf) goto L_120280ee;
  /* 1202808e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12028091 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12028093 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12028095 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12028098 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1202809e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120280a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120280a4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 120280a7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120280a9 je 0x120280ec */
  if (C.zf) goto L_120280ec;
L_120280ab:;
  /* 120280ab mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120280ae and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120280b3 push eax */
  push32((uint32_t)(EAX));
  /* 120280b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120280b7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120280b9 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 120280bc push edx */
  push32((uint32_t)(EDX));
  /* 120280bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120280c0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120280c3 push eax */
  push32((uint32_t)(EAX));
  /* 120280c4 push 0x1204dd30 */
  push32((uint32_t)(0x1204dd30u));
  /* 120280c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 120280cb push 0 */
  push32((uint32_t)(0x0u));
  /* 120280cd push 0 */
  push32((uint32_t)(0x0u));
  /* 120280cf push 0 */
  push32((uint32_t)(0x0u));
  /* 120280d1 call 0x12026020 */
  push32(0x120280d6u); f_12026020();
  /* 120280d6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120280d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120280dc jne 0x120280df */
  if (!C.zf) goto L_120280df;
  /* 120280de int3  */
  x86_unimpl("int3 @ 0x120280de");
L_120280df:;
  /* 120280df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120280e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120280e3 jne 0x120280ab */
  if (!C.zf) goto L_120280ab;
  /* 120280e5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_120280ec:;
  /* 120280ec jmp 0x1202807e */
  goto L_1202807e;
L_120280ee:;
  /* 120280ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120280f1 pop edi */
  EDI = (pop32());
  /* 120280f2 pop esi */
  ESI = (pop32());
  /* 120280f3 pop ebx */
  EBX = (pop32());
  /* 120280f4 mov esp, ebp */
  ESP = (EBP);
  /* 120280f6 pop ebp */
  EBP = (pop32());
  /* 120280f7 ret  */
  ESPCHK(0x12028070u, _esp0);
  ESP += 4; return;
}

/* FUN_10008100 @ 0x12028100 (863 bytes, 299 insns) [1 switch table(s)] */
void f_12028100(void) {
  FTRACE(0x12028100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12028100 push ebp */
  push32((uint32_t)(EBP));
  /* 12028101 mov ebp, esp */
  EBP = (ESP);
  /* 12028103 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12028106 push ebx */
  push32((uint32_t)(EBX));
  /* 12028107 push esi */
  push32((uint32_t)(ESI));
  /* 12028108 push edi */
  push32((uint32_t)(EDI));
  /* 12028109 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12028110 mov eax, dword ptr [0x12050a84] */
  EAX = (r32((uint32_t)(0x12050a84)));
  /* 12028115 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12028118 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202811a jne 0x12028126 */
  if (!C.zf) goto L_12028126;
  /* 1202811c mov eax, 1 */
  EAX = (0x1u);
  /* 12028121 jmp 0x12028458 */
  goto L_12028458;
L_12028126:;
  /* 12028126 push 9 */
  push32((uint32_t)(0x9u));
  /* 12028128 call 0x1202a960 */
  push32(0x1202812du); f_1202a960();
  /* 1202812d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028130 call 0x1202b140 */
  push32(0x12028135u); f_1202b140();
  /* 12028135 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12028138 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202813c je 0x12028249 */
  if (C.zf) goto L_12028249;
  /* 12028142 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028146 je 0x12028249 */
  if (C.zf) goto L_12028249;
  /* 1202814c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202814f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12028152 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12028155 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12028158 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1202815b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202815f ja 0x12028212 */
  if ((!C.cf&&!C.zf)) goto L_12028212;
  /* 12028165 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12028168 jmp dword ptr [eax*4 + 0x1202845f] */
  switch (EAX) {
    case 0: goto L_120281ea;
    case 1: goto L_120281c2;
    case 2: goto L_1202819a;
    case 3: goto L_1202816f;
    default: x86_unimpl("switch@0x12028168 out of table"); return;
  }
L_1202816f:;
  /* 1202816f push 0x1204de84 */
  push32((uint32_t)(0x1204de84u));
  /* 12028174 push 0x1204d9e4 */
  push32((uint32_t)(0x1204d9e4u));
  /* 12028179 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202817b push 0 */
  push32((uint32_t)(0x0u));
  /* 1202817d push 0 */
  push32((uint32_t)(0x0u));
  /* 1202817f push 0 */
  push32((uint32_t)(0x0u));
  /* 12028181 call 0x12026020 */
  push32(0x12028186u); f_12026020();
  /* 12028186 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028189 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202818c jne 0x1202818f */
  if (!C.zf) goto L_1202818f;
  /* 1202818e int3  */
  x86_unimpl("int3 @ 0x1202818e");
L_1202818f:;
  /* 1202818f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12028191 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12028193 jne 0x1202816f */
  if (!C.zf) goto L_1202816f;
  /* 12028195 jmp 0x12028238 */
  goto L_12028238;
L_1202819a:;
  /* 1202819a push 0x1204de60 */
  push32((uint32_t)(0x1204de60u));
  /* 1202819f push 0x1204d9e4 */
  push32((uint32_t)(0x1204d9e4u));
  /* 120281a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 120281a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 120281a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 120281aa push 0 */
  push32((uint32_t)(0x0u));
  /* 120281ac call 0x12026020 */
  push32(0x120281b1u); f_12026020();
  /* 120281b1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120281b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120281b7 jne 0x120281ba */
  if (!C.zf) goto L_120281ba;
  /* 120281b9 int3  */
  x86_unimpl("int3 @ 0x120281b9");
L_120281ba:;
  /* 120281ba xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120281bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120281be jne 0x1202819a */
  if (!C.zf) goto L_1202819a;
  /* 120281c0 jmp 0x12028238 */
  goto L_12028238;
L_120281c2:;
  /* 120281c2 push 0x1204de3c */
  push32((uint32_t)(0x1204de3cu));
  /* 120281c7 push 0x1204d9e4 */
  push32((uint32_t)(0x1204d9e4u));
  /* 120281cc push 0 */
  push32((uint32_t)(0x0u));
  /* 120281ce push 0 */
  push32((uint32_t)(0x0u));
  /* 120281d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 120281d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 120281d4 call 0x12026020 */
  push32(0x120281d9u); f_12026020();
  /* 120281d9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120281dc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120281df jne 0x120281e2 */
  if (!C.zf) goto L_120281e2;
  /* 120281e1 int3  */
  x86_unimpl("int3 @ 0x120281e1");
L_120281e2:;
  /* 120281e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120281e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120281e6 jne 0x120281c2 */
  if (!C.zf) goto L_120281c2;
  /* 120281e8 jmp 0x12028238 */
  goto L_12028238;
L_120281ea:;
  /* 120281ea push 0x1204de18 */
  push32((uint32_t)(0x1204de18u));
  /* 120281ef push 0x1204d9e4 */
  push32((uint32_t)(0x1204d9e4u));
  /* 120281f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 120281f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 120281f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 120281fa push 0 */
  push32((uint32_t)(0x0u));
  /* 120281fc call 0x12026020 */
  push32(0x12028201u); f_12026020();
  /* 12028201 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028204 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028207 jne 0x1202820a */
  if (!C.zf) goto L_1202820a;
  /* 12028209 int3  */
  x86_unimpl("int3 @ 0x12028209");
L_1202820a:;
  /* 1202820a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1202820c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202820e jne 0x120281ea */
  if (!C.zf) goto L_120281ea;
  /* 12028210 jmp 0x12028238 */
  goto L_12028238;
L_12028212:;
  /* 12028212 push 0x1204ddec */
  push32((uint32_t)(0x1204ddecu));
  /* 12028217 push 0x1204d9e4 */
  push32((uint32_t)(0x1204d9e4u));
  /* 1202821c push 0 */
  push32((uint32_t)(0x0u));
  /* 1202821e push 0 */
  push32((uint32_t)(0x0u));
  /* 12028220 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028222 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028224 call 0x12026020 */
  push32(0x12028229u); f_12026020();
  /* 12028229 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202822c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202822f jne 0x12028232 */
  if (!C.zf) goto L_12028232;
  /* 12028231 int3  */
  x86_unimpl("int3 @ 0x12028231");
L_12028232:;
  /* 12028232 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12028234 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12028236 jne 0x12028212 */
  if (!C.zf) goto L_12028212;
L_12028238:;
  /* 12028238 push 9 */
  push32((uint32_t)(0x9u));
  /* 1202823a call 0x1202aa00 */
  push32(0x1202823fu); f_1202aa00();
  /* 1202823f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028242 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12028244 jmp 0x12028458 */
  goto L_12028458;
L_12028249:;
  /* 12028249 mov eax, dword ptr [0x12052834] */
  EAX = (r32((uint32_t)(0x12052834)));
  /* 1202824e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12028251 jmp 0x1202825b */
  goto L_1202825b;
L_12028253:;
  /* 12028253 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12028256 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12028258 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1202825b:;
  /* 1202825b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202825f je 0x1202844b */
  if (C.zf) goto L_1202844b;
  /* 12028265 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1202826c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202826f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12028272 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12028278 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202827b je 0x120282a0 */
  if (C.zf) goto L_120282a0;
  /* 1202827d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12028280 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028284 je 0x120282a0 */
  if (C.zf) goto L_120282a0;
  /* 12028286 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12028289 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1202828c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12028292 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028295 je 0x120282a0 */
  if (C.zf) goto L_120282a0;
  /* 12028297 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202829a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202829e jne 0x120282b8 */
  if (!C.zf) goto L_120282b8;
L_120282a0:;
  /* 120282a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120282a3 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 120282a6 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120282ac mov edx, dword ptr [ecx*4 + 0x12050a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12050a94)));
  /* 120282b3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 120282b6 jmp 0x120282bf */
  goto L_120282bf;
L_120282b8:;
  /* 120282b8 mov dword ptr [ebp - 0x14], 0x1204dde4 */
  w32((uint32_t)(EBP + -0x14), (0x1204dde4u));
L_120282bf:;
  /* 120282bf push 4 */
  push32((uint32_t)(0x4u));
  /* 120282c1 mov al, byte ptr [0x12050a90] */
  AL = (r8((uint32_t)(0x12050a90)));
  /* 120282c6 push eax */
  push32((uint32_t)(EAX));
  /* 120282c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120282ca add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120282cd push ecx */
  push32((uint32_t)(ECX));
  /* 120282ce call 0x12028070 */
  push32(0x120282d3u); f_12028070();
  /* 120282d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120282d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120282d8 jne 0x12028314 */
  if (!C.zf) goto L_12028314;
L_120282da:;
  /* 120282da mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120282dd add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120282e0 push edx */
  push32((uint32_t)(EDX));
  /* 120282e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120282e4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 120282e7 push ecx */
  push32((uint32_t)(ECX));
  /* 120282e8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120282eb push edx */
  push32((uint32_t)(EDX));
  /* 120282ec push 0x1204dcc0 */
  push32((uint32_t)(0x1204dcc0u));
  /* 120282f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 120282f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 120282f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 120282f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 120282f9 call 0x12026020 */
  push32(0x120282feu); f_12026020();
  /* 120282fe add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028301 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028304 jne 0x12028307 */
  if (!C.zf) goto L_12028307;
  /* 12028306 int3  */
  x86_unimpl("int3 @ 0x12028306");
L_12028307:;
  /* 12028307 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12028309 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202830b jne 0x120282da */
  if (!C.zf) goto L_120282da;
  /* 1202830d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12028314:;
  /* 12028314 push 4 */
  push32((uint32_t)(0x4u));
  /* 12028316 mov cl, byte ptr [0x12050a90] */
  CL = (r8((uint32_t)(0x12050a90)));
  /* 1202831c push ecx */
  push32((uint32_t)(ECX));
  /* 1202831d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12028320 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12028323 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12028326 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 1202832a push edx */
  push32((uint32_t)(EDX));
  /* 1202832b call 0x12028070 */
  push32(0x12028330u); f_12028070();
  /* 12028330 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028333 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12028335 jne 0x12028371 */
  if (!C.zf) goto L_12028371;
L_12028337:;
  /* 12028337 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202833a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202833d push eax */
  push32((uint32_t)(EAX));
  /* 1202833e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12028341 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12028344 push edx */
  push32((uint32_t)(EDX));
  /* 12028345 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12028348 push eax */
  push32((uint32_t)(EAX));
  /* 12028349 push 0x1204dc94 */
  push32((uint32_t)(0x1204dc94u));
  /* 1202834e push 0 */
  push32((uint32_t)(0x0u));
  /* 12028350 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028352 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028354 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028356 call 0x12026020 */
  push32(0x1202835bu); f_12026020();
  /* 1202835b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202835e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028361 jne 0x12028364 */
  if (!C.zf) goto L_12028364;
  /* 12028363 int3  */
  x86_unimpl("int3 @ 0x12028363");
L_12028364:;
  /* 12028364 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12028366 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12028368 jne 0x12028337 */
  if (!C.zf) goto L_12028337;
  /* 1202836a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12028371:;
  /* 12028371 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12028374 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028378 jne 0x120283ca */
  if (!C.zf) goto L_120283ca;
  /* 1202837a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202837d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12028380 push ecx */
  push32((uint32_t)(ECX));
  /* 12028381 mov dl, byte ptr [0x12050a91] */
  DL = (r8((uint32_t)(0x12050a91)));
  /* 12028387 push edx */
  push32((uint32_t)(EDX));
  /* 12028388 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202838b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202838e push eax */
  push32((uint32_t)(EAX));
  /* 1202838f call 0x12028070 */
  push32(0x12028394u); f_12028070();
  /* 12028394 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028397 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12028399 jne 0x120283ca */
  if (!C.zf) goto L_120283ca;
L_1202839b:;
  /* 1202839b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202839e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120283a1 push ecx */
  push32((uint32_t)(ECX));
  /* 120283a2 push 0x1204ddb8 */
  push32((uint32_t)(0x1204ddb8u));
  /* 120283a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 120283a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 120283ab push 0 */
  push32((uint32_t)(0x0u));
  /* 120283ad push 0 */
  push32((uint32_t)(0x0u));
  /* 120283af call 0x12026020 */
  push32(0x120283b4u); f_12026020();
  /* 120283b4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120283b7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120283ba jne 0x120283bd */
  if (!C.zf) goto L_120283bd;
  /* 120283bc int3  */
  x86_unimpl("int3 @ 0x120283bc");
L_120283bd:;
  /* 120283bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120283bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120283c1 jne 0x1202839b */
  if (!C.zf) goto L_1202839b;
  /* 120283c3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_120283ca:;
  /* 120283ca cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120283ce jne 0x12028446 */
  if (!C.zf) goto L_12028446;
  /* 120283d0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120283d3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120283d7 je 0x1202840c */
  if (C.zf) goto L_1202840c;
L_120283d9:;
  /* 120283d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120283dc mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 120283df push edx */
  push32((uint32_t)(EDX));
  /* 120283e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120283e3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 120283e6 push ecx */
  push32((uint32_t)(ECX));
  /* 120283e7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120283ea push edx */
  push32((uint32_t)(EDX));
  /* 120283eb push 0x1204dd98 */
  push32((uint32_t)(0x1204dd98u));
  /* 120283f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 120283f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 120283f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 120283f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 120283f8 call 0x12026020 */
  push32(0x120283fdu); f_12026020();
  /* 120283fd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028400 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028403 jne 0x12028406 */
  if (!C.zf) goto L_12028406;
  /* 12028405 int3  */
  x86_unimpl("int3 @ 0x12028405");
L_12028406:;
  /* 12028406 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12028408 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202840a jne 0x120283d9 */
  if (!C.zf) goto L_120283d9;
L_1202840c:;
  /* 1202840c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202840f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12028412 push edx */
  push32((uint32_t)(EDX));
  /* 12028413 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12028416 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12028419 push eax */
  push32((uint32_t)(EAX));
  /* 1202841a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202841d push ecx */
  push32((uint32_t)(ECX));
  /* 1202841e push 0x1204dd6c */
  push32((uint32_t)(0x1204dd6cu));
  /* 12028423 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028425 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028427 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028429 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202842b call 0x12026020 */
  push32(0x12028430u); f_12026020();
  /* 12028430 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028433 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028436 jne 0x12028439 */
  if (!C.zf) goto L_12028439;
  /* 12028438 int3  */
  x86_unimpl("int3 @ 0x12028438");
L_12028439:;
  /* 12028439 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1202843b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202843d jne 0x1202840c */
  if (!C.zf) goto L_1202840c;
  /* 1202843f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12028446:;
  /* 12028446 jmp 0x12028253 */
  goto L_12028253;
L_1202844b:;
  /* 1202844b push 9 */
  push32((uint32_t)(0x9u));
  /* 1202844d call 0x1202aa00 */
  push32(0x12028452u); f_1202aa00();
  /* 12028452 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028455 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12028458:;
  /* 12028458 pop edi */
  EDI = (pop32());
  /* 12028459 pop esi */
  ESI = (pop32());
  /* 1202845a pop ebx */
  EBX = (pop32());
  /* 1202845b mov esp, ebp */
  ESP = (EBP);
  /* 1202845d pop ebp */
  EBP = (pop32());
  /* 1202845e ret  */
  ESPCHK(0x12028100u, _esp0);
  ESP += 4; return;
}

/* FUN_10008470 @ 0x12028470 (34 bytes, 13 insns) */
void f_12028470(void) {
  FTRACE(0x12028470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12028470 push ebp */
  push32((uint32_t)(EBP));
  /* 12028471 mov ebp, esp */
  EBP = (ESP);
  /* 12028473 push ecx */
  push32((uint32_t)(ECX));
  /* 12028474 mov eax, dword ptr [0x12050a84] */
  EAX = (r32((uint32_t)(0x12050a84)));
  /* 12028479 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1202847c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028480 je 0x1202848b */
  if (C.zf) goto L_1202848b;
  /* 12028482 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12028485 mov dword ptr [0x12050a84], ecx */
  w32((uint32_t)(0x12050a84), (ECX));
L_1202848b:;
  /* 1202848b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202848e mov esp, ebp */
  ESP = (EBP);
  /* 12028490 pop ebp */
  EBP = (pop32());
  /* 12028491 ret  */
  ESPCHK(0x12028470u, _esp0);
  ESP += 4; return;
}

/* FUN_100084a0 @ 0x120284a0 (103 bytes, 38 insns) */
void f_120284a0(void) {
  FTRACE(0x120284a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120284a0 push ebp */
  push32((uint32_t)(EBP));
  /* 120284a1 mov ebp, esp */
  EBP = (ESP);
  /* 120284a3 push ecx */
  push32((uint32_t)(ECX));
  /* 120284a4 mov eax, dword ptr [0x12050a84] */
  EAX = (r32((uint32_t)(0x12050a84)));
  /* 120284a9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 120284ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120284ae jne 0x120284b2 */
  if (!C.zf) goto L_120284b2;
  /* 120284b0 jmp 0x12028503 */
  goto L_12028503;
L_120284b2:;
  /* 120284b2 push 9 */
  push32((uint32_t)(0x9u));
  /* 120284b4 call 0x1202a960 */
  push32(0x120284b9u); f_1202a960();
  /* 120284b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120284bc mov ecx, dword ptr [0x12052834] */
  ECX = (r32((uint32_t)(0x12052834)));
  /* 120284c2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120284c5 jmp 0x120284cf */
  goto L_120284cf;
L_120284c7:;
  /* 120284c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120284ca mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120284cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120284cf:;
  /* 120284cf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120284d3 je 0x120284f9 */
  if (C.zf) goto L_120284f9;
  /* 120284d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120284d8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 120284db and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120284e1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120284e4 jne 0x120284f7 */
  if (!C.zf) goto L_120284f7;
  /* 120284e6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120284e9 push eax */
  push32((uint32_t)(EAX));
  /* 120284ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120284ed add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120284f0 push ecx */
  push32((uint32_t)(ECX));
  /* 120284f1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x120284f4u);
  /* 120284f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120284f7:;
  /* 120284f7 jmp 0x120284c7 */
  goto L_120284c7;
L_120284f9:;
  /* 120284f9 push 9 */
  push32((uint32_t)(0x9u));
  /* 120284fb call 0x1202aa00 */
  push32(0x12028500u); f_1202aa00();
  /* 12028500 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12028503:;
  /* 12028503 mov esp, ebp */
  ESP = (EBP);
  /* 12028505 pop ebp */
  EBP = (pop32());
  /* 12028506 ret  */
  ESPCHK(0x120284a0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x12028510 (75 bytes, 28 insns) */
void f_12028510(void) {
  FTRACE(0x12028510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12028510 push ebp */
  push32((uint32_t)(EBP));
  /* 12028511 mov ebp, esp */
  EBP = (ESP);
  /* 12028513 push ecx */
  push32((uint32_t)(ECX));
  /* 12028514 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028518 je 0x1202854d */
  if (C.zf) goto L_1202854d;
  /* 1202851a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202851d push eax */
  push32((uint32_t)(EAX));
  /* 1202851e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12028521 push ecx */
  push32((uint32_t)(ECX));
  /* 12028522 call dword ptr [0x12055394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055394))), 0x12028528u);
  /* 12028528 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202852a jne 0x1202854d */
  if (!C.zf) goto L_1202854d;
  /* 1202852c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028530 je 0x12028544 */
  if (C.zf) goto L_12028544;
  /* 12028532 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12028535 push edx */
  push32((uint32_t)(EDX));
  /* 12028536 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12028539 push eax */
  push32((uint32_t)(EAX));
  /* 1202853a call dword ptr [0x12055398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055398))), 0x12028540u);
  /* 12028540 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12028542 jne 0x1202854d */
  if (!C.zf) goto L_1202854d;
L_12028544:;
  /* 12028544 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1202854b jmp 0x12028554 */
  goto L_12028554;
L_1202854d:;
  /* 1202854d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12028554:;
  /* 12028554 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028557 mov esp, ebp */
  ESP = (EBP);
  /* 12028559 pop ebp */
  EBP = (pop32());
  /* 1202855a ret  */
  ESPCHK(0x12028510u, _esp0);
  ESP += 4; return;
}

/* FUN_10008560 @ 0x12028560 (134 bytes, 50 insns) */
void f_12028560(void) {
  FTRACE(0x12028560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12028560 push ebp */
  push32((uint32_t)(EBP));
  /* 12028561 mov ebp, esp */
  EBP = (ESP);
  /* 12028563 push ecx */
  push32((uint32_t)(ECX));
  /* 12028564 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028568 jne 0x1202856e */
  if (!C.zf) goto L_1202856e;
  /* 1202856a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202856c jmp 0x120285e2 */
  goto L_120285e2;
L_1202856e:;
  /* 1202856e push 1 */
  push32((uint32_t)(0x1u));
  /* 12028570 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12028572 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12028575 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12028578 push eax */
  push32((uint32_t)(EAX));
  /* 12028579 call 0x12028510 */
  push32(0x1202857eu); f_12028510();
  /* 1202857e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028581 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12028583 jne 0x12028589 */
  if (!C.zf) goto L_12028589;
  /* 12028585 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12028587 jmp 0x120285e2 */
  goto L_120285e2;
L_12028589:;
  /* 12028589 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202858c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202858f push ecx */
  push32((uint32_t)(ECX));
  /* 12028590 call 0x1202b260 */
  push32(0x12028595u); f_1202b260();
  /* 12028595 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028598 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1202859b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202859f je 0x120285b6 */
  if (C.zf) goto L_120285b6;
  /* 120285a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120285a4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120285a7 push edx */
  push32((uint32_t)(EDX));
  /* 120285a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120285ab push eax */
  push32((uint32_t)(EAX));
  /* 120285ac call 0x1202b2c0 */
  push32(0x120285b1u); f_1202b2c0();
  /* 120285b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120285b4 jmp 0x120285e2 */
  goto L_120285e2;
L_120285b6:;
  /* 120285b6 mov ecx, dword ptr [0x120527e8] */
  ECX = (r32((uint32_t)(0x120527e8)));
  /* 120285bc and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 120285c2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120285c4 je 0x120285cd */
  if (C.zf) goto L_120285cd;
  /* 120285c6 mov eax, 1 */
  EAX = (0x1u);
  /* 120285cb jmp 0x120285e2 */
  goto L_120285e2;
L_120285cd:;
  /* 120285cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120285d0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120285d3 push edx */
  push32((uint32_t)(EDX));
  /* 120285d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 120285d6 mov eax, dword ptr [0x1205418c] */
  EAX = (r32((uint32_t)(0x1205418c)));
  /* 120285db push eax */
  push32((uint32_t)(EAX));
  /* 120285dc call dword ptr [0x12055390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055390))), 0x120285e2u);
L_120285e2:;
  /* 120285e2 mov esp, ebp */
  ESP = (EBP);
  /* 120285e4 pop ebp */
  EBP = (pop32());
  /* 120285e5 ret  */
  ESPCHK(0x12028560u, _esp0);
  ESP += 4; return;
}

/* FUN_100085f0 @ 0x120285f0 (227 bytes, 80 insns) */
void f_120285f0(void) {
  FTRACE(0x120285f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120285f0 push ebp */
  push32((uint32_t)(EBP));
  /* 120285f1 mov ebp, esp */
  EBP = (ESP);
  /* 120285f3 push ecx */
  push32((uint32_t)(ECX));
  /* 120285f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120285f7 push eax */
  push32((uint32_t)(EAX));
  /* 120285f8 call 0x12028560 */
  push32(0x120285fdu); f_12028560();
  /* 120285fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028600 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12028602 jne 0x1202860b */
  if (!C.zf) goto L_1202860b;
  /* 12028604 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12028606 jmp 0x120286cf */
  goto L_120286cf;
L_1202860b:;
  /* 1202860b push 9 */
  push32((uint32_t)(0x9u));
  /* 1202860d call 0x1202a960 */
  push32(0x12028612u); f_1202a960();
  /* 12028612 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028615 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12028618 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202861b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1202861e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028621 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12028624 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12028629 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202862c je 0x12028650 */
  if (C.zf) goto L_12028650;
  /* 1202862e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028631 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028635 je 0x12028650 */
  if (C.zf) goto L_12028650;
  /* 12028637 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202863a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1202863d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12028642 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028645 je 0x12028650 */
  if (C.zf) goto L_12028650;
  /* 12028647 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202864a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202864e jne 0x120286c3 */
  if (!C.zf) goto L_120286c3;
L_12028650:;
  /* 12028650 push 1 */
  push32((uint32_t)(0x1u));
  /* 12028652 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12028655 push edx */
  push32((uint32_t)(EDX));
  /* 12028656 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12028659 push eax */
  push32((uint32_t)(EAX));
  /* 1202865a call 0x12028510 */
  push32(0x1202865fu); f_12028510();
  /* 1202865f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028662 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12028664 je 0x120286c3 */
  if (C.zf) goto L_120286c3;
  /* 12028666 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028669 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1202866c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202866f jne 0x120286c3 */
  if (!C.zf) goto L_120286c3;
  /* 12028671 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028674 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12028677 cmp ecx, dword ptr [0x12050a88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12050a88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202867d jg 0x120286c3 */
  if ((!C.zf&&C.sf==C.of)) goto L_120286c3;
  /* 1202867f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028683 je 0x12028690 */
  if (C.zf) goto L_12028690;
  /* 12028685 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12028688 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202868b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1202868e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12028690:;
  /* 12028690 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028694 je 0x120286a1 */
  if (C.zf) goto L_120286a1;
  /* 12028696 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12028699 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202869c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1202869f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_120286a1:;
  /* 120286a1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120286a5 je 0x120286b2 */
  if (C.zf) goto L_120286b2;
  /* 120286a7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120286aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120286ad mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 120286b0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_120286b2:;
  /* 120286b2 push 9 */
  push32((uint32_t)(0x9u));
  /* 120286b4 call 0x1202aa00 */
  push32(0x120286b9u); f_1202aa00();
  /* 120286b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120286bc mov eax, 1 */
  EAX = (0x1u);
  /* 120286c1 jmp 0x120286cf */
  goto L_120286cf;
L_120286c3:;
  /* 120286c3 push 9 */
  push32((uint32_t)(0x9u));
  /* 120286c5 call 0x1202aa00 */
  push32(0x120286cau); f_1202aa00();
  /* 120286ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120286cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120286cf:;
  /* 120286cf mov esp, ebp */
  ESP = (EBP);
  /* 120286d1 pop ebp */
  EBP = (pop32());
  /* 120286d2 ret  */
  ESPCHK(0x120285f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100086e0 @ 0x120286e0 (28 bytes, 11 insns) */
void f_120286e0(void) {
  FTRACE(0x120286e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120286e0 push ebp */
  push32((uint32_t)(EBP));
  /* 120286e1 mov ebp, esp */
  EBP = (ESP);
  /* 120286e3 push ecx */
  push32((uint32_t)(ECX));
  /* 120286e4 mov eax, dword ptr [0x12054198] */
  EAX = (r32((uint32_t)(0x12054198)));
  /* 120286e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120286ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120286ef mov dword ptr [0x12054198], ecx */
  w32((uint32_t)(0x12054198), (ECX));
  /* 120286f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120286f8 mov esp, ebp */
  ESP = (EBP);
  /* 120286fa pop ebp */
  EBP = (pop32());
  /* 120286fb ret  */
  ESPCHK(0x120286e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008700 @ 0x12028700 (362 bytes, 116 insns) */
void f_12028700(void) {
  FTRACE(0x12028700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12028700 push ebp */
  push32((uint32_t)(EBP));
  /* 12028701 mov ebp, esp */
  EBP = (ESP);
  /* 12028703 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12028706 push ebx */
  push32((uint32_t)(EBX));
  /* 12028707 push esi */
  push32((uint32_t)(ESI));
  /* 12028708 push edi */
  push32((uint32_t)(EDI));
  /* 12028709 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202870d jne 0x1202873a */
  if (!C.zf) goto L_1202873a;
L_1202870f:;
  /* 1202870f push 0x1204decc */
  push32((uint32_t)(0x1204deccu));
  /* 12028714 push 0x1204d9e4 */
  push32((uint32_t)(0x1204d9e4u));
  /* 12028719 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202871b push 0 */
  push32((uint32_t)(0x0u));
  /* 1202871d push 0 */
  push32((uint32_t)(0x0u));
  /* 1202871f push 0 */
  push32((uint32_t)(0x0u));
  /* 12028721 call 0x12026020 */
  push32(0x12028726u); f_12026020();
  /* 12028726 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028729 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202872c jne 0x1202872f */
  if (!C.zf) goto L_1202872f;
  /* 1202872e int3  */
  x86_unimpl("int3 @ 0x1202872e");
L_1202872f:;
  /* 1202872f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12028731 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12028733 jne 0x1202870f */
  if (!C.zf) goto L_1202870f;
  /* 12028735 jmp 0x12028863 */
  goto L_12028863;
L_1202873a:;
  /* 1202873a push 9 */
  push32((uint32_t)(0x9u));
  /* 1202873c call 0x1202a960 */
  push32(0x12028741u); f_1202a960();
  /* 12028741 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028744 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12028747 mov edx, dword ptr [0x12052834] */
  EDX = (r32((uint32_t)(0x12052834)));
  /* 1202874d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1202874f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12028756 jmp 0x12028761 */
  goto L_12028761;
L_12028758:;
  /* 12028758 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202875b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202875e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12028761:;
  /* 12028761 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028765 jge 0x12028785 */
  if ((C.sf==C.of)) goto L_12028785;
  /* 12028767 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202876a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202876d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 12028775 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028778 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202877b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 12028783 jmp 0x12028758 */
  goto L_12028758;
L_12028785:;
  /* 12028785 mov edx, dword ptr [0x12052834] */
  EDX = (r32((uint32_t)(0x12052834)));
  /* 1202878b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1202878e jmp 0x12028798 */
  goto L_12028798;
L_12028790:;
  /* 12028790 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12028793 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12028795 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12028798:;
  /* 12028798 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202879c je 0x12028841 */
  if (C.zf) goto L_12028841;
  /* 120287a2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120287a5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 120287a8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120287ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120287af jl 0x12028817 */
  if ((C.sf!=C.of)) goto L_12028817;
  /* 120287b1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120287b4 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 120287b7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120287bd cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120287c0 jge 0x12028817 */
  if ((C.sf==C.of)) goto L_12028817;
  /* 120287c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120287c5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 120287c8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120287ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120287d1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 120287d5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120287d8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120287db mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 120287de and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120287e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120287e7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 120287eb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120287ee mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 120287f1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120287f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120287f9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 120287fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12028800 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12028803 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12028806 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12028809 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1202880e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12028811 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12028815 jmp 0x1202883c */
  goto L_1202883c;
L_12028817:;
  /* 12028817 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202881a push edx */
  push32((uint32_t)(EDX));
  /* 1202881b push 0x1204dea8 */
  push32((uint32_t)(0x1204dea8u));
  /* 12028820 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028822 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028824 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028826 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028828 call 0x12026020 */
  push32(0x1202882du); f_12026020();
  /* 1202882d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028830 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028833 jne 0x12028836 */
  if (!C.zf) goto L_12028836;
  /* 12028835 int3  */
  x86_unimpl("int3 @ 0x12028835");
L_12028836:;
  /* 12028836 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12028838 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202883a jne 0x12028817 */
  if (!C.zf) goto L_12028817;
L_1202883c:;
  /* 1202883c jmp 0x12028790 */
  goto L_12028790;
L_12028841:;
  /* 12028841 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12028844 mov edx, dword ptr [0x1205283c] */
  EDX = (r32((uint32_t)(0x1205283c)));
  /* 1202884a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 1202884d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12028850 mov ecx, dword ptr [0x12052830] */
  ECX = (r32((uint32_t)(0x12052830)));
  /* 12028856 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 12028859 push 9 */
  push32((uint32_t)(0x9u));
  /* 1202885b call 0x1202aa00 */
  push32(0x12028860u); f_1202aa00();
  /* 12028860 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12028863:;
  /* 12028863 pop edi */
  EDI = (pop32());
  /* 12028864 pop esi */
  ESI = (pop32());
  /* 12028865 pop ebx */
  EBX = (pop32());
  /* 12028866 mov esp, ebp */
  ESP = (EBP);
  /* 12028868 pop ebp */
  EBP = (pop32());
  /* 12028869 ret  */
  ESPCHK(0x12028700u, _esp0);
  ESP += 4; return;
}

/* FUN_10008870 @ 0x12028870 (291 bytes, 95 insns) */
void f_12028870(void) {
  FTRACE(0x12028870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12028870 push ebp */
  push32((uint32_t)(EBP));
  /* 12028871 mov ebp, esp */
  EBP = (ESP);
  /* 12028873 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12028876 push ebx */
  push32((uint32_t)(EBX));
  /* 12028877 push esi */
  push32((uint32_t)(ESI));
  /* 12028878 push edi */
  push32((uint32_t)(EDI));
  /* 12028879 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12028880 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028884 je 0x12028892 */
  if (C.zf) goto L_12028892;
  /* 12028886 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202888a je 0x12028892 */
  if (C.zf) goto L_12028892;
  /* 1202888c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028890 jne 0x120288c0 */
  if (!C.zf) goto L_120288c0;
L_12028892:;
  /* 12028892 push 0x1204def4 */
  push32((uint32_t)(0x1204def4u));
  /* 12028897 push 0x1204d9e4 */
  push32((uint32_t)(0x1204d9e4u));
  /* 1202889c push 0 */
  push32((uint32_t)(0x0u));
  /* 1202889e push 0 */
  push32((uint32_t)(0x0u));
  /* 120288a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 120288a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 120288a4 call 0x12026020 */
  push32(0x120288a9u); f_12026020();
  /* 120288a9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120288ac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120288af jne 0x120288b2 */
  if (!C.zf) goto L_120288b2;
  /* 120288b1 int3  */
  x86_unimpl("int3 @ 0x120288b1");
L_120288b2:;
  /* 120288b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120288b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120288b6 jne 0x12028892 */
  if (!C.zf) goto L_12028892;
  /* 120288b8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120288bb jmp 0x1202898c */
  goto L_1202898c;
L_120288c0:;
  /* 120288c0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120288c7 jmp 0x120288d2 */
  goto L_120288d2;
L_120288c9:;
  /* 120288c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120288cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120288cf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120288d2:;
  /* 120288d2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120288d6 jge 0x1202895c */
  if ((C.sf==C.of)) goto L_1202895c;
  /* 120288dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120288df mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120288e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120288e5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 120288e8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 120288ec sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120288f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120288f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120288f6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 120288fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120288fd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12028900 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028903 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12028906 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 1202890a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202890e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028911 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12028914 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 12028918 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202891b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202891e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028923 jne 0x12028932 */
  if (!C.zf) goto L_12028932;
  /* 12028925 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028928 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202892b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028930 je 0x12028957 */
  if (C.zf) goto L_12028957;
L_12028932:;
  /* 12028932 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028936 je 0x12028957 */
  if (C.zf) goto L_12028957;
  /* 12028938 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202893c jne 0x12028950 */
  if (!C.zf) goto L_12028950;
  /* 1202893e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028942 jne 0x12028957 */
  if (!C.zf) goto L_12028957;
  /* 12028944 mov eax, dword ptr [0x12050a84] */
  EAX = (r32((uint32_t)(0x12050a84)));
  /* 12028949 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1202894c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202894e je 0x12028957 */
  if (C.zf) goto L_12028957;
L_12028950:;
  /* 12028950 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12028957:;
  /* 12028957 jmp 0x120288c9 */
  goto L_120288c9;
L_1202895c:;
  /* 1202895c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1202895f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12028962 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12028965 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12028968 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202896b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 1202896e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12028971 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12028974 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 12028977 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202897a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202897d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 12028980 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12028983 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12028989 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1202898c:;
  /* 1202898c pop edi */
  EDI = (pop32());
  /* 1202898d pop esi */
  ESI = (pop32());
  /* 1202898e pop ebx */
  EBX = (pop32());
  /* 1202898f mov esp, ebp */
  ESP = (EBP);
  /* 12028991 pop ebp */
  EBP = (pop32());
  /* 12028992 ret  */
  ESPCHK(0x12028870u, _esp0);
  ESP += 4; return;
}

/* FUN_100089a0 @ 0x120289a0 (697 bytes, 253 insns) */
void f_120289a0(void) {
  FTRACE(0x120289a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120289a0 push ebp */
  push32((uint32_t)(EBP));
  /* 120289a1 mov ebp, esp */
  EBP = (ESP);
  /* 120289a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120289a6 push ebx */
  push32((uint32_t)(EBX));
  /* 120289a7 push esi */
  push32((uint32_t)(ESI));
  /* 120289a8 push edi */
  push32((uint32_t)(EDI));
  /* 120289a9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120289b0 push 9 */
  push32((uint32_t)(0x9u));
  /* 120289b2 call 0x1202a960 */
  push32(0x120289b7u); f_1202a960();
  /* 120289b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120289ba:;
  /* 120289ba push 0x1204dfec */
  push32((uint32_t)(0x1204dfecu));
  /* 120289bf push 0x1204d9e4 */
  push32((uint32_t)(0x1204d9e4u));
  /* 120289c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 120289c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 120289c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 120289ca push 0 */
  push32((uint32_t)(0x0u));
  /* 120289cc call 0x12026020 */
  push32(0x120289d1u); f_12026020();
  /* 120289d1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120289d4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120289d7 jne 0x120289da */
  if (!C.zf) goto L_120289da;
  /* 120289d9 int3  */
  x86_unimpl("int3 @ 0x120289d9");
L_120289da:;
  /* 120289da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120289dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120289de jne 0x120289ba */
  if (!C.zf) goto L_120289ba;
  /* 120289e0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120289e4 je 0x120289ee */
  if (C.zf) goto L_120289ee;
  /* 120289e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120289e9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120289eb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_120289ee:;
  /* 120289ee mov eax, dword ptr [0x12052834] */
  EAX = (r32((uint32_t)(0x12052834)));
  /* 120289f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120289f6 jmp 0x12028a00 */
  goto L_12028a00;
L_120289f8:;
  /* 120289f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120289fb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120289fd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12028a00:;
  /* 12028a00 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028a04 je 0x12028c22 */
  if (C.zf) goto L_12028c22;
  /* 12028a0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028a0d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028a10 je 0x12028c22 */
  if (C.zf) goto L_12028c22;
  /* 12028a16 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028a19 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12028a1c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12028a22 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028a25 je 0x12028a54 */
  if (C.zf) goto L_12028a54;
  /* 12028a27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028a2a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12028a2d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12028a33 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12028a35 je 0x12028a54 */
  if (C.zf) goto L_12028a54;
  /* 12028a37 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028a3a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12028a3d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12028a42 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028a45 jne 0x12028a59 */
  if (!C.zf) goto L_12028a59;
  /* 12028a47 mov ecx, dword ptr [0x12050a84] */
  ECX = (r32((uint32_t)(0x12050a84)));
  /* 12028a4d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12028a50 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12028a52 jne 0x12028a59 */
  if (!C.zf) goto L_12028a59;
L_12028a54:;
  /* 12028a54 jmp 0x12028c1d */
  goto L_12028c1d;
L_12028a59:;
  /* 12028a59 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028a5c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028a60 je 0x12028ad2 */
  if (C.zf) goto L_12028ad2;
  /* 12028a62 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028a64 push 1 */
  push32((uint32_t)(0x1u));
  /* 12028a66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028a69 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12028a6c push ecx */
  push32((uint32_t)(ECX));
  /* 12028a6d call 0x12028510 */
  push32(0x12028a72u); f_12028510();
  /* 12028a72 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028a75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12028a77 jne 0x12028aa3 */
  if (!C.zf) goto L_12028aa3;
L_12028a79:;
  /* 12028a79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028a7c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12028a7f push eax */
  push32((uint32_t)(EAX));
  /* 12028a80 push 0x1204dfd8 */
  push32((uint32_t)(0x1204dfd8u));
  /* 12028a85 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028a87 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028a89 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028a8b push 0 */
  push32((uint32_t)(0x0u));
  /* 12028a8d call 0x12026020 */
  push32(0x12028a92u); f_12026020();
  /* 12028a92 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028a95 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028a98 jne 0x12028a9b */
  if (!C.zf) goto L_12028a9b;
  /* 12028a9a int3  */
  x86_unimpl("int3 @ 0x12028a9a");
L_12028a9b:;
  /* 12028a9b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12028a9d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12028a9f jne 0x12028a79 */
  if (!C.zf) goto L_12028a79;
  /* 12028aa1 jmp 0x12028ad2 */
  goto L_12028ad2;
L_12028aa3:;
  /* 12028aa3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028aa6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12028aa9 push eax */
  push32((uint32_t)(EAX));
  /* 12028aaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028aad mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12028ab0 push edx */
  push32((uint32_t)(EDX));
  /* 12028ab1 push 0x1204dfcc */
  push32((uint32_t)(0x1204dfccu));
  /* 12028ab6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028ab8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028aba push 0 */
  push32((uint32_t)(0x0u));
  /* 12028abc push 0 */
  push32((uint32_t)(0x0u));
  /* 12028abe call 0x12026020 */
  push32(0x12028ac3u); f_12026020();
  /* 12028ac3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028ac6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028ac9 jne 0x12028acc */
  if (!C.zf) goto L_12028acc;
  /* 12028acb int3  */
  x86_unimpl("int3 @ 0x12028acb");
L_12028acc:;
  /* 12028acc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12028ace test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12028ad0 jne 0x12028aa3 */
  if (!C.zf) goto L_12028aa3;
L_12028ad2:;
  /* 12028ad2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028ad5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12028ad8 push edx */
  push32((uint32_t)(EDX));
  /* 12028ad9 push 0x1204dfc4 */
  push32((uint32_t)(0x1204dfc4u));
  /* 12028ade push 0 */
  push32((uint32_t)(0x0u));
  /* 12028ae0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028ae2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028ae4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028ae6 call 0x12026020 */
  push32(0x12028aebu); f_12026020();
  /* 12028aeb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028aee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028af1 jne 0x12028af4 */
  if (!C.zf) goto L_12028af4;
  /* 12028af3 int3  */
  x86_unimpl("int3 @ 0x12028af3");
L_12028af4:;
  /* 12028af4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12028af6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12028af8 jne 0x12028ad2 */
  if (!C.zf) goto L_12028ad2;
  /* 12028afa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028afd mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12028b00 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12028b06 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028b09 jne 0x12028b7c */
  if (!C.zf) goto L_12028b7c;
L_12028b0b:;
  /* 12028b0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028b0e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12028b11 push ecx */
  push32((uint32_t)(ECX));
  /* 12028b12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028b15 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12028b18 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12028b1b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12028b20 push eax */
  push32((uint32_t)(EAX));
  /* 12028b21 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028b24 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12028b27 push ecx */
  push32((uint32_t)(ECX));
  /* 12028b28 push 0x1204df90 */
  push32((uint32_t)(0x1204df90u));
  /* 12028b2d push 0 */
  push32((uint32_t)(0x0u));
  /* 12028b2f push 0 */
  push32((uint32_t)(0x0u));
  /* 12028b31 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028b33 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028b35 call 0x12026020 */
  push32(0x12028b3au); f_12026020();
  /* 12028b3a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028b3d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028b40 jne 0x12028b43 */
  if (!C.zf) goto L_12028b43;
  /* 12028b42 int3  */
  x86_unimpl("int3 @ 0x12028b42");
L_12028b43:;
  /* 12028b43 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12028b45 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12028b47 jne 0x12028b0b */
  if (!C.zf) goto L_12028b0b;
  /* 12028b49 cmp dword ptr [0x12054198], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12054198))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028b50 je 0x12028b6b */
  if (C.zf) goto L_12028b6b;
  /* 12028b52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028b55 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12028b58 push ecx */
  push32((uint32_t)(ECX));
  /* 12028b59 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028b5c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12028b5f push edx */
  push32((uint32_t)(EDX));
  /* 12028b60 call dword ptr [0x12054198] */
  call_ind((uint32_t)(r32((uint32_t)(0x12054198))), 0x12028b66u);
  /* 12028b66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028b69 jmp 0x12028b77 */
  goto L_12028b77;
L_12028b6b:;
  /* 12028b6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028b6e push eax */
  push32((uint32_t)(EAX));
  /* 12028b6f call 0x12028c60 */
  push32(0x12028b74u); f_12028c60();
  /* 12028b74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12028b77:;
  /* 12028b77 jmp 0x12028c1d */
  goto L_12028c1d;
L_12028b7c:;
  /* 12028b7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028b7f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028b83 jne 0x12028bc2 */
  if (!C.zf) goto L_12028bc2;
L_12028b85:;
  /* 12028b85 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028b88 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12028b8b push eax */
  push32((uint32_t)(EAX));
  /* 12028b8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028b8f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12028b92 push ecx */
  push32((uint32_t)(ECX));
  /* 12028b93 push 0x1204df68 */
  push32((uint32_t)(0x1204df68u));
  /* 12028b98 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028b9a push 0 */
  push32((uint32_t)(0x0u));
  /* 12028b9c push 0 */
  push32((uint32_t)(0x0u));
  /* 12028b9e push 0 */
  push32((uint32_t)(0x0u));
  /* 12028ba0 call 0x12026020 */
  push32(0x12028ba5u); f_12026020();
  /* 12028ba5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028ba8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028bab jne 0x12028bae */
  if (!C.zf) goto L_12028bae;
  /* 12028bad int3  */
  x86_unimpl("int3 @ 0x12028bad");
L_12028bae:;
  /* 12028bae xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12028bb0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12028bb2 jne 0x12028b85 */
  if (!C.zf) goto L_12028b85;
  /* 12028bb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028bb7 push eax */
  push32((uint32_t)(EAX));
  /* 12028bb8 call 0x12028c60 */
  push32(0x12028bbdu); f_12028c60();
  /* 12028bbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028bc0 jmp 0x12028c1d */
  goto L_12028c1d;
L_12028bc2:;
  /* 12028bc2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028bc5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12028bc8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12028bce cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028bd1 jne 0x12028c1d */
  if (!C.zf) goto L_12028c1d;
L_12028bd3:;
  /* 12028bd3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028bd6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12028bd9 push ecx */
  push32((uint32_t)(ECX));
  /* 12028bda mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028bdd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12028be0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12028be3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12028be8 push eax */
  push32((uint32_t)(EAX));
  /* 12028be9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028bec add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12028bef push ecx */
  push32((uint32_t)(ECX));
  /* 12028bf0 push 0x1204df34 */
  push32((uint32_t)(0x1204df34u));
  /* 12028bf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028bf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028bf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028bfb push 0 */
  push32((uint32_t)(0x0u));
  /* 12028bfd call 0x12026020 */
  push32(0x12028c02u); f_12026020();
  /* 12028c02 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028c05 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028c08 jne 0x12028c0b */
  if (!C.zf) goto L_12028c0b;
  /* 12028c0a int3  */
  x86_unimpl("int3 @ 0x12028c0a");
L_12028c0b:;
  /* 12028c0b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12028c0d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12028c0f jne 0x12028bd3 */
  if (!C.zf) goto L_12028bd3;
  /* 12028c11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028c14 push eax */
  push32((uint32_t)(EAX));
  /* 12028c15 call 0x12028c60 */
  push32(0x12028c1au); f_12028c60();
  /* 12028c1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12028c1d:;
  /* 12028c1d jmp 0x120289f8 */
  goto L_120289f8;
L_12028c22:;
  /* 12028c22 push 9 */
  push32((uint32_t)(0x9u));
  /* 12028c24 call 0x1202aa00 */
  push32(0x12028c29u); f_1202aa00();
  /* 12028c29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12028c2c:;
  /* 12028c2c push 0x1204df1c */
  push32((uint32_t)(0x1204df1cu));
  /* 12028c31 push 0x1204d9e4 */
  push32((uint32_t)(0x1204d9e4u));
  /* 12028c36 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028c38 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028c3a push 0 */
  push32((uint32_t)(0x0u));
  /* 12028c3c push 0 */
  push32((uint32_t)(0x0u));
  /* 12028c3e call 0x12026020 */
  push32(0x12028c43u); f_12026020();
  /* 12028c43 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028c46 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028c49 jne 0x12028c4c */
  if (!C.zf) goto L_12028c4c;
  /* 12028c4b int3  */
  x86_unimpl("int3 @ 0x12028c4b");
L_12028c4c:;
  /* 12028c4c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12028c4e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12028c50 jne 0x12028c2c */
  if (!C.zf) goto L_12028c2c;
  /* 12028c52 pop edi */
  EDI = (pop32());
  /* 12028c53 pop esi */
  ESI = (pop32());
  /* 12028c54 pop ebx */
  EBX = (pop32());
  /* 12028c55 mov esp, ebp */
  ESP = (EBP);
  /* 12028c57 pop ebp */
  EBP = (pop32());
  /* 12028c58 ret  */
  ESPCHK(0x120289a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c60 @ 0x12028c60 (276 bytes, 89 insns) */
void f_12028c60(void) {
  FTRACE(0x12028c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12028c60 push ebp */
  push32((uint32_t)(EBP));
  /* 12028c61 mov ebp, esp */
  EBP = (ESP);
  /* 12028c63 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12028c66 push ebx */
  push32((uint32_t)(EBX));
  /* 12028c67 push esi */
  push32((uint32_t)(ESI));
  /* 12028c68 push edi */
  push32((uint32_t)(EDI));
  /* 12028c69 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 12028c70 jmp 0x12028c7b */
  goto L_12028c7b;
L_12028c72:;
  /* 12028c72 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12028c75 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12028c78 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_12028c7b:;
  /* 12028c7b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12028c7e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028c82 jge 0x12028c8f */
  if ((C.sf==C.of)) goto L_12028c8f;
  /* 12028c84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12028c87 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12028c8a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12028c8d jmp 0x12028c96 */
  goto L_12028c96;
L_12028c8f:;
  /* 12028c8f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_12028c96:;
  /* 12028c96 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12028c99 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028c9c jge 0x12028d3c */
  if ((C.sf==C.of)) goto L_12028d3c;
  /* 12028ca2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12028ca5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12028ca8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 12028cab mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 12028cae cmp dword ptr [0x12050ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12050ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028cb5 jle 0x12028cd3 */
  if ((C.zf||C.sf!=C.of)) goto L_12028cd3;
  /* 12028cb7 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 12028cbc mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12028cbf and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12028cc5 push ecx */
  push32((uint32_t)(ECX));
  /* 12028cc6 call 0x1202cf70 */
  push32(0x12028ccbu); f_1202cf70();
  /* 12028ccb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028cce mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 12028cd1 jmp 0x12028cf0 */
  goto L_12028cf0;
L_12028cd3:;
  /* 12028cd3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12028cd6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12028cdc mov eax, dword ptr [0x12050c98] */
  EAX = (r32((uint32_t)(0x12050c98)));
  /* 12028ce1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12028ce3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12028ce7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 12028ced mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_12028cf0:;
  /* 12028cf0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028cf4 je 0x12028d04 */
  if (C.zf) goto L_12028d04;
  /* 12028cf6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12028cf9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12028cff mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 12028d02 jmp 0x12028d0b */
  goto L_12028d0b;
L_12028d04:;
  /* 12028d04 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_12028d0b:;
  /* 12028d0b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12028d0e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 12028d11 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 12028d15 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12028d18 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12028d1e push edx */
  push32((uint32_t)(EDX));
  /* 12028d1f push 0x1204e010 */
  push32((uint32_t)(0x1204e010u));
  /* 12028d24 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12028d27 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12028d2a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 12028d2e push ecx */
  push32((uint32_t)(ECX));
  /* 12028d2f call 0x1202ce70 */
  push32(0x12028d34u); f_1202ce70();
  /* 12028d34 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028d37 jmp 0x12028c72 */
  goto L_12028c72;
L_12028d3c:;
  /* 12028d3c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12028d3f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_12028d44:;
  /* 12028d44 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12028d47 push eax */
  push32((uint32_t)(EAX));
  /* 12028d48 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12028d4b push ecx */
  push32((uint32_t)(ECX));
  /* 12028d4c push 0x1204e000 */
  push32((uint32_t)(0x1204e000u));
  /* 12028d51 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028d53 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028d55 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028d57 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028d59 call 0x12026020 */
  push32(0x12028d5eu); f_12026020();
  /* 12028d5e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028d61 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028d64 jne 0x12028d67 */
  if (!C.zf) goto L_12028d67;
  /* 12028d66 int3  */
  x86_unimpl("int3 @ 0x12028d66");
L_12028d67:;
  /* 12028d67 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12028d69 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12028d6b jne 0x12028d44 */
  if (!C.zf) goto L_12028d44;
  /* 12028d6d pop edi */
  EDI = (pop32());
  /* 12028d6e pop esi */
  ESI = (pop32());
  /* 12028d6f pop ebx */
  EBX = (pop32());
  /* 12028d70 mov esp, ebp */
  ESP = (EBP);
  /* 12028d72 pop ebp */
  EBP = (pop32());
  /* 12028d73 ret  */
  ESPCHK(0x12028c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d80 @ 0x12028d80 (116 bytes, 46 insns) */
void f_12028d80(void) {
  FTRACE(0x12028d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12028d80 push ebp */
  push32((uint32_t)(EBP));
  /* 12028d81 mov ebp, esp */
  EBP = (ESP);
  /* 12028d83 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12028d86 push ebx */
  push32((uint32_t)(EBX));
  /* 12028d87 push esi */
  push32((uint32_t)(ESI));
  /* 12028d88 push edi */
  push32((uint32_t)(EDI));
  /* 12028d89 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12028d8c push eax */
  push32((uint32_t)(EAX));
  /* 12028d8d call 0x12028700 */
  push32(0x12028d92u); f_12028700();
  /* 12028d92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028d95 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028d99 jne 0x12028db4 */
  if (!C.zf) goto L_12028db4;
  /* 12028d9b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028d9f jne 0x12028db4 */
  if (!C.zf) goto L_12028db4;
  /* 12028da1 mov ecx, dword ptr [0x12050a84] */
  ECX = (r32((uint32_t)(0x12050a84)));
  /* 12028da7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12028daa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12028dac je 0x12028deb */
  if (C.zf) goto L_12028deb;
  /* 12028dae cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028db2 je 0x12028deb */
  if (C.zf) goto L_12028deb;
L_12028db4:;
  /* 12028db4 push 0x1204e018 */
  push32((uint32_t)(0x1204e018u));
  /* 12028db9 push 0x1204d9e4 */
  push32((uint32_t)(0x1204d9e4u));
  /* 12028dbe push 0 */
  push32((uint32_t)(0x0u));
  /* 12028dc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028dc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028dc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028dc6 call 0x12026020 */
  push32(0x12028dcbu); f_12026020();
  /* 12028dcb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028dce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028dd1 jne 0x12028dd4 */
  if (!C.zf) goto L_12028dd4;
  /* 12028dd3 int3  */
  x86_unimpl("int3 @ 0x12028dd3");
L_12028dd4:;
  /* 12028dd4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12028dd6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12028dd8 jne 0x12028db4 */
  if (!C.zf) goto L_12028db4;
  /* 12028dda push 0 */
  push32((uint32_t)(0x0u));
  /* 12028ddc call 0x120289a0 */
  push32(0x12028de1u); f_120289a0();
  /* 12028de1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028de4 mov eax, 1 */
  EAX = (0x1u);
  /* 12028de9 jmp 0x12028ded */
  goto L_12028ded;
L_12028deb:;
  /* 12028deb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12028ded:;
  /* 12028ded pop edi */
  EDI = (pop32());
  /* 12028dee pop esi */
  ESI = (pop32());
  /* 12028def pop ebx */
  EBX = (pop32());
  /* 12028df0 mov esp, ebp */
  ESP = (EBP);
  /* 12028df2 pop ebp */
  EBP = (pop32());
  /* 12028df3 ret  */
  ESPCHK(0x12028d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e00 @ 0x12028e00 (197 bytes, 79 insns) */
void f_12028e00(void) {
  FTRACE(0x12028e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12028e00 push ebp */
  push32((uint32_t)(EBP));
  /* 12028e01 mov ebp, esp */
  EBP = (ESP);
  /* 12028e03 push ecx */
  push32((uint32_t)(ECX));
  /* 12028e04 push ebx */
  push32((uint32_t)(EBX));
  /* 12028e05 push esi */
  push32((uint32_t)(ESI));
  /* 12028e06 push edi */
  push32((uint32_t)(EDI));
  /* 12028e07 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028e0b jne 0x12028e12 */
  if (!C.zf) goto L_12028e12;
  /* 12028e0d jmp 0x12028ebe */
  goto L_12028ebe;
L_12028e12:;
  /* 12028e12 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12028e19 jmp 0x12028e24 */
  goto L_12028e24;
L_12028e1b:;
  /* 12028e1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028e1e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12028e21 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12028e24:;
  /* 12028e24 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028e28 jge 0x12028e6e */
  if ((C.sf==C.of)) goto L_12028e6e;
L_12028e2a:;
  /* 12028e2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028e2d mov edx, dword ptr [ecx*4 + 0x12050a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12050a94)));
  /* 12028e34 push edx */
  push32((uint32_t)(EDX));
  /* 12028e35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028e38 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12028e3b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 12028e3f push edx */
  push32((uint32_t)(EDX));
  /* 12028e40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028e43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12028e46 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12028e4a push edx */
  push32((uint32_t)(EDX));
  /* 12028e4b push 0x1204e074 */
  push32((uint32_t)(0x1204e074u));
  /* 12028e50 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028e52 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028e54 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028e56 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028e58 call 0x12026020 */
  push32(0x12028e5du); f_12026020();
  /* 12028e5d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028e60 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028e63 jne 0x12028e66 */
  if (!C.zf) goto L_12028e66;
  /* 12028e65 int3  */
  x86_unimpl("int3 @ 0x12028e65");
L_12028e66:;
  /* 12028e66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12028e68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12028e6a jne 0x12028e2a */
  if (!C.zf) goto L_12028e2a;
  /* 12028e6c jmp 0x12028e1b */
  goto L_12028e1b;
L_12028e6e:;
  /* 12028e6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12028e71 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12028e74 push edx */
  push32((uint32_t)(EDX));
  /* 12028e75 push 0x1204e050 */
  push32((uint32_t)(0x1204e050u));
  /* 12028e7a push 0 */
  push32((uint32_t)(0x0u));
  /* 12028e7c push 0 */
  push32((uint32_t)(0x0u));
  /* 12028e7e push 0 */
  push32((uint32_t)(0x0u));
  /* 12028e80 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028e82 call 0x12026020 */
  push32(0x12028e87u); f_12026020();
  /* 12028e87 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028e8a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028e8d jne 0x12028e90 */
  if (!C.zf) goto L_12028e90;
  /* 12028e8f int3  */
  x86_unimpl("int3 @ 0x12028e8f");
L_12028e90:;
  /* 12028e90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12028e92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12028e94 jne 0x12028e6e */
  if (!C.zf) goto L_12028e6e;
L_12028e96:;
  /* 12028e96 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12028e99 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12028e9c push edx */
  push32((uint32_t)(EDX));
  /* 12028e9d push 0x1204e030 */
  push32((uint32_t)(0x1204e030u));
  /* 12028ea2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028ea4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028ea6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028ea8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12028eaa call 0x12026020 */
  push32(0x12028eafu); f_12026020();
  /* 12028eaf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028eb2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028eb5 jne 0x12028eb8 */
  if (!C.zf) goto L_12028eb8;
  /* 12028eb7 int3  */
  x86_unimpl("int3 @ 0x12028eb7");
L_12028eb8:;
  /* 12028eb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12028eba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12028ebc jne 0x12028e96 */
  if (!C.zf) goto L_12028e96;
L_12028ebe:;
  /* 12028ebe pop edi */
  EDI = (pop32());
  /* 12028ebf pop esi */
  ESI = (pop32());
  /* 12028ec0 pop ebx */
  EBX = (pop32());
  /* 12028ec1 mov esp, ebp */
  ESP = (EBP);
  /* 12028ec3 pop ebp */
  EBP = (pop32());
  /* 12028ec4 ret  */
  ESPCHK(0x12028e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ed0 @ 0x12028ed0 (329 bytes, 102 insns) */
void f_12028ed0(void) {
  FTRACE(0x12028ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12028ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 12028ed1 mov ebp, esp */
  EBP = (ESP);
  /* 12028ed3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12028ed6 cmp dword ptr [0x12054310], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12054310))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028edd jne 0x12028ee4 */
  if (!C.zf) goto L_12028ee4;
  /* 12028edf call 0x1202d810 */
  push32(0x12028ee4u); f_1202d810();
L_12028ee4:;
  /* 12028ee4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12028eeb mov eax, dword ptr [0x120527d0] */
  EAX = (r32((uint32_t)(0x120527d0)));
  /* 12028ef0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12028ef3:;
  /* 12028ef3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028ef6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12028ef9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12028efb je 0x12028f29 */
  if (C.zf) goto L_12028f29;
  /* 12028efd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028f00 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12028f03 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028f06 je 0x12028f11 */
  if (C.zf) goto L_12028f11;
  /* 12028f08 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12028f0b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12028f0e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12028f11:;
  /* 12028f11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028f14 push eax */
  push32((uint32_t)(EAX));
  /* 12028f15 call 0x12029d90 */
  push32(0x12028f1au); f_12029d90();
  /* 12028f1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028f1d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028f20 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12028f24 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12028f27 jmp 0x12028ef3 */
  goto L_12028ef3;
L_12028f29:;
  /* 12028f29 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 12028f2b push 0x1204e094 */
  push32((uint32_t)(0x1204e094u));
  /* 12028f30 push 2 */
  push32((uint32_t)(0x2u));
  /* 12028f32 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12028f35 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 12028f3c push ecx */
  push32((uint32_t)(ECX));
  /* 12028f3d call 0x12026f60 */
  push32(0x12028f42u); f_12026f60();
  /* 12028f42 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028f45 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12028f48 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12028f4b mov dword ptr [0x12052804], edx */
  w32((uint32_t)(0x12052804), (EDX));
  /* 12028f51 cmp dword ptr [0x12052804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028f58 jne 0x12028f64 */
  if (!C.zf) goto L_12028f64;
  /* 12028f5a push 9 */
  push32((uint32_t)(0x9u));
  /* 12028f5c call 0x12025ed0 */
  push32(0x12028f61u); f_12025ed0();
  /* 12028f61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12028f64:;
  /* 12028f64 mov eax, dword ptr [0x120527d0] */
  EAX = (r32((uint32_t)(0x120527d0)));
  /* 12028f69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12028f6c jmp 0x12028f77 */
  goto L_12028f77;
L_12028f6e:;
  /* 12028f6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028f71 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12028f74 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12028f77:;
  /* 12028f77 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028f7a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12028f7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12028f7f je 0x12028fe7 */
  if (C.zf) goto L_12028fe7;
  /* 12028f81 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028f84 push ecx */
  push32((uint32_t)(ECX));
  /* 12028f85 call 0x12029d90 */
  push32(0x12028f8au); f_12029d90();
  /* 12028f8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028f8d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12028f90 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12028f93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028f96 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12028f99 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028f9c je 0x12028fe5 */
  if (C.zf) goto L_12028fe5;
  /* 12028f9e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12028fa0 push 0x1204e094 */
  push32((uint32_t)(0x1204e094u));
  /* 12028fa5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12028fa7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12028faa push ecx */
  push32((uint32_t)(ECX));
  /* 12028fab call 0x12026f60 */
  push32(0x12028fb0u); f_12026f60();
  /* 12028fb0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028fb3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12028fb6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12028fb8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12028fbb cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12028fbe jne 0x12028fca */
  if (!C.zf) goto L_12028fca;
  /* 12028fc0 push 9 */
  push32((uint32_t)(0x9u));
  /* 12028fc2 call 0x12025ed0 */
  push32(0x12028fc7u); f_12025ed0();
  /* 12028fc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12028fca:;
  /* 12028fca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12028fcd push ecx */
  push32((uint32_t)(ECX));
  /* 12028fce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12028fd1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12028fd3 push eax */
  push32((uint32_t)(EAX));
  /* 12028fd4 call 0x12029f10 */
  push32(0x12028fd9u); f_12029f10();
  /* 12028fd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028fdc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12028fdf add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12028fe2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12028fe5:;
  /* 12028fe5 jmp 0x12028f6e */
  goto L_12028f6e;
L_12028fe7:;
  /* 12028fe7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12028fe9 mov edx, dword ptr [0x120527d0] */
  EDX = (r32((uint32_t)(0x120527d0)));
  /* 12028fef push edx */
  push32((uint32_t)(EDX));
  /* 12028ff0 call 0x120279f0 */
  push32(0x12028ff5u); f_120279f0();
  /* 12028ff5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12028ff8 mov dword ptr [0x120527d0], 0 */
  w32((uint32_t)(0x120527d0), (0x0u));
  /* 12029002 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12029005 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1202900b mov dword ptr [0x12054300], 1 */
  w32((uint32_t)(0x12054300), (0x1u));
  /* 12029015 mov esp, ebp */
  ESP = (EBP);
  /* 12029017 pop ebp */
  EBP = (pop32());
  /* 12029018 ret  */
  ESPCHK(0x12028ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009020 @ 0x12029020 (216 bytes, 69 insns) */
void f_12029020(void) {
  FTRACE(0x12029020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12029020 push ebp */
  push32((uint32_t)(EBP));
  /* 12029021 mov ebp, esp */
  EBP = (ESP);
  /* 12029023 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12029026 cmp dword ptr [0x12054310], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12054310))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202902d jne 0x12029034 */
  if (!C.zf) goto L_12029034;
  /* 1202902f call 0x1202d810 */
  push32(0x12029034u); f_1202d810();
L_12029034:;
  /* 12029034 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12029039 push 0x12052840 */
  push32((uint32_t)(0x12052840u));
  /* 1202903e push 0 */
  push32((uint32_t)(0x0u));
  /* 12029040 call dword ptr [0x120552e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120552e0))), 0x12029046u);
  /* 12029046 mov dword ptr [0x12052814], 0x12052840 */
  w32((uint32_t)(0x12052814), (0x12052840u));
  /* 12029050 mov eax, dword ptr [0x1205432c] */
  EAX = (r32((uint32_t)(0x1205432c)));
  /* 12029055 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12029058 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202905a jne 0x12029067 */
  if (!C.zf) goto L_12029067;
  /* 1202905c mov edx, dword ptr [0x12052814] */
  EDX = (r32((uint32_t)(0x12052814)));
  /* 12029062 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12029065 jmp 0x1202906f */
  goto L_1202906f;
L_12029067:;
  /* 12029067 mov eax, dword ptr [0x1205432c] */
  EAX = (r32((uint32_t)(0x1205432c)));
  /* 1202906c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_1202906f:;
  /* 1202906f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12029072 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12029075 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12029078 push edx */
  push32((uint32_t)(EDX));
  /* 12029079 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1202907c push eax */
  push32((uint32_t)(EAX));
  /* 1202907d push 0 */
  push32((uint32_t)(0x0u));
  /* 1202907f push 0 */
  push32((uint32_t)(0x0u));
  /* 12029081 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12029084 push ecx */
  push32((uint32_t)(ECX));
  /* 12029085 call 0x12029100 */
  push32(0x1202908au); f_12029100();
  /* 1202908a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202908d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 12029092 push 0x1204e0a0 */
  push32((uint32_t)(0x1204e0a0u));
  /* 12029097 push 2 */
  push32((uint32_t)(0x2u));
  /* 12029099 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202909c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202909f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 120290a2 push ecx */
  push32((uint32_t)(ECX));
  /* 120290a3 call 0x12026f60 */
  push32(0x120290a8u); f_12026f60();
  /* 120290a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120290ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120290ae cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120290b2 jne 0x120290be */
  if (!C.zf) goto L_120290be;
  /* 120290b4 push 8 */
  push32((uint32_t)(0x8u));
  /* 120290b6 call 0x12025ed0 */
  push32(0x120290bbu); f_12025ed0();
  /* 120290bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120290be:;
  /* 120290be lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 120290c1 push edx */
  push32((uint32_t)(EDX));
  /* 120290c2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 120290c5 push eax */
  push32((uint32_t)(EAX));
  /* 120290c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120290c9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120290cc lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 120290cf push eax */
  push32((uint32_t)(EAX));
  /* 120290d0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120290d3 push ecx */
  push32((uint32_t)(ECX));
  /* 120290d4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120290d7 push edx */
  push32((uint32_t)(EDX));
  /* 120290d8 call 0x12029100 */
  push32(0x120290ddu); f_12029100();
  /* 120290dd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120290e0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120290e3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120290e6 mov dword ptr [0x120527f8], eax */
  w32((uint32_t)(0x120527f8), (EAX));
  /* 120290eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120290ee mov dword ptr [0x120527fc], ecx */
  w32((uint32_t)(0x120527fc), (ECX));
  /* 120290f4 mov esp, ebp */
  ESP = (EBP);
  /* 120290f6 pop ebp */
  EBP = (pop32());
  /* 120290f7 ret  */
  ESPCHK(0x12029020u, _esp0);
  ESP += 4; return;
}

/* FUN_10009100 @ 0x12029100 (1060 bytes, 360 insns) */
void f_12029100(void) {
  FTRACE(0x12029100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12029100 push ebp */
  push32((uint32_t)(EBP));
  /* 12029101 mov ebp, esp */
  EBP = (ESP);
  /* 12029103 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12029106 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12029109 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1202910f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12029112 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 12029118 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202911b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1202911e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029122 je 0x12029135 */
  if (C.zf) goto L_12029135;
  /* 12029124 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12029127 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1202912a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1202912c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202912f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12029132 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_12029135:;
  /* 12029135 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029138 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1202913b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202913e jne 0x1202920d */
  if (!C.zf) goto L_1202920d;
L_12029144:;
  /* 12029144 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029147 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202914a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1202914d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029150 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12029153 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029156 je 0x120291d2 */
  if (C.zf) goto L_120291d2;
  /* 12029158 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202915b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1202915e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12029160 je 0x120291d2 */
  if (C.zf) goto L_120291d2;
  /* 12029162 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029165 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12029167 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12029169 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202916b mov al, byte ptr [edx + 0x12054061] */
  AL = (r8((uint32_t)(EDX + 0x12054061)));
  /* 12029171 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12029174 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12029176 je 0x120291a7 */
  if (C.zf) goto L_120291a7;
  /* 12029178 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1202917b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1202917d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12029180 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12029183 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12029185 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029189 je 0x120291a7 */
  if (C.zf) goto L_120291a7;
  /* 1202918b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1202918e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029191 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12029193 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12029195 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12029198 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202919b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1202919e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120291a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120291a4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120291a7:;
  /* 120291a7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120291aa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120291ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120291af mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120291b2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 120291b4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120291b8 je 0x120291cd */
  if (C.zf) goto L_120291cd;
  /* 120291ba mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120291bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120291c0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120291c2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 120291c4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120291c7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120291ca mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_120291cd:;
  /* 120291cd jmp 0x12029144 */
  goto L_12029144;
L_120291d2:;
  /* 120291d2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120291d5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120291d7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120291da mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120291dd mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 120291df cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120291e3 je 0x120291f4 */
  if (C.zf) goto L_120291f4;
  /* 120291e5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120291e8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 120291eb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120291ee add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120291f1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_120291f4:;
  /* 120291f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120291f7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120291fa cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120291fd jne 0x12029208 */
  if (!C.zf) goto L_12029208;
  /* 120291ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029202 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12029205 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12029208:;
  /* 12029208 jmp 0x120292dc */
  goto L_120292dc;
L_1202920d:;
  /* 1202920d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12029210 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12029212 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12029215 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12029218 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1202921a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202921e je 0x12029233 */
  if (C.zf) goto L_12029233;
  /* 12029220 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12029223 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029226 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12029228 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1202922a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1202922d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12029230 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12029233:;
  /* 12029233 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029236 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12029238 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1202923b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202923e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12029241 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12029244 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12029247 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1202924d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1202924f mov dl, byte ptr [ecx + 0x12054061] */
  DL = (r8((uint32_t)(ECX + 0x12054061)));
  /* 12029255 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12029258 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202925a je 0x1202928b */
  if (C.zf) goto L_1202928b;
  /* 1202925c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1202925f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12029261 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12029264 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12029267 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12029269 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202926d je 0x12029282 */
  if (C.zf) goto L_12029282;
  /* 1202926f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12029272 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029275 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12029277 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12029279 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1202927c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202927f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12029282:;
  /* 12029282 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029285 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12029288 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1202928b:;
  /* 1202928b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202928e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12029294 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029297 je 0x120292b7 */
  if (C.zf) goto L_120292b7;
  /* 12029299 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202929c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120292a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120292a3 je 0x120292b7 */
  if (C.zf) goto L_120292b7;
  /* 120292a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120292a8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 120292ae cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120292b1 jne 0x1202920d */
  if (!C.zf) goto L_1202920d;
L_120292b7:;
  /* 120292b7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120292ba and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 120292c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120292c2 jne 0x120292cf */
  if (!C.zf) goto L_120292cf;
  /* 120292c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120292c7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120292ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120292cd jmp 0x120292dc */
  goto L_120292dc;
L_120292cf:;
  /* 120292cf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120292d3 je 0x120292dc */
  if (C.zf) goto L_120292dc;
  /* 120292d5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120292d8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_120292dc:;
  /* 120292dc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_120292e3:;
  /* 120292e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120292e6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 120292e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120292eb je 0x1202930e */
  if (C.zf) goto L_1202930e;
L_120292ed:;
  /* 120292ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120292f0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120292f3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120292f6 je 0x12029303 */
  if (C.zf) goto L_12029303;
  /* 120292f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120292fb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120292fe cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029301 jne 0x1202930e */
  if (!C.zf) goto L_1202930e;
L_12029303:;
  /* 12029303 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029306 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12029309 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1202930c jmp 0x120292ed */
  goto L_120292ed;
L_1202930e:;
  /* 1202930e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029311 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12029314 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12029316 jne 0x1202931d */
  if (!C.zf) goto L_1202931d;
  /* 12029318 jmp 0x120294fb */
  goto L_120294fb;
L_1202931d:;
  /* 1202931d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029321 je 0x12029334 */
  if (C.zf) goto L_12029334;
  /* 12029323 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12029326 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12029329 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1202932b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202932e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12029331 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12029334:;
  /* 12029334 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12029337 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12029339 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202933c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1202933f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12029341:;
  /* 12029341 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12029348 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1202934f:;
  /* 1202934f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029352 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12029355 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029358 jne 0x1202936e */
  if (!C.zf) goto L_1202936e;
  /* 1202935a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202935d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12029360 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12029363 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12029366 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12029369 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1202936c jmp 0x1202934f */
  goto L_1202934f;
L_1202936e:;
  /* 1202936e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029371 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12029374 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029377 jne 0x120293ca */
  if (!C.zf) goto L_120293ca;
  /* 12029379 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202937c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1202937e mov ecx, 2 */
  ECX = (0x2u);
  /* 12029383 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12029385 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12029387 jne 0x120293c2 */
  if (!C.zf) goto L_120293c2;
  /* 12029389 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202938d je 0x120293af */
  if (C.zf) goto L_120293af;
  /* 1202938f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029392 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12029396 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029399 jne 0x120293a6 */
  if (!C.zf) goto L_120293a6;
  /* 1202939b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202939e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120293a1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120293a4 jmp 0x120293ad */
  goto L_120293ad;
L_120293a6:;
  /* 120293a6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_120293ad:;
  /* 120293ad jmp 0x120293b6 */
  goto L_120293b6;
L_120293af:;
  /* 120293af mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_120293b6:;
  /* 120293b6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120293b8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120293bc sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 120293bf mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_120293c2:;
  /* 120293c2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120293c5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 120293c7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_120293ca:;
  /* 120293ca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120293cd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120293d0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120293d3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 120293d6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120293d8 je 0x120293fe */
  if (C.zf) goto L_120293fe;
  /* 120293da cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120293de je 0x120293ef */
  if (C.zf) goto L_120293ef;
  /* 120293e0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120293e3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 120293e6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120293e9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120293ec mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_120293ef:;
  /* 120293ef mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120293f2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120293f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120293f7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120293fa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 120293fc jmp 0x120293ca */
  goto L_120293ca;
L_120293fe:;
  /* 120293fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029401 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12029404 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12029406 je 0x12029424 */
  if (C.zf) goto L_12029424;
  /* 12029408 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202940c jne 0x12029429 */
  if (!C.zf) goto L_12029429;
  /* 1202940e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029411 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12029414 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029417 je 0x12029424 */
  if (C.zf) goto L_12029424;
  /* 12029419 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202941c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1202941f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029422 jne 0x12029429 */
  if (!C.zf) goto L_12029429;
L_12029424:;
  /* 12029424 jmp 0x120294d4 */
  goto L_120294d4;
L_12029429:;
  /* 12029429 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202942d je 0x120294c6 */
  if (C.zf) goto L_120294c6;
  /* 12029433 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029437 je 0x1202948d */
  if (C.zf) goto L_1202948d;
  /* 12029439 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202943c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202943e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12029440 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12029442 mov cl, byte ptr [eax + 0x12054061] */
  CL = (r8((uint32_t)(EAX + 0x12054061)));
  /* 12029448 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1202944b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202944d je 0x12029478 */
  if (C.zf) goto L_12029478;
  /* 1202944f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12029452 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029455 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12029457 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12029459 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1202945c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202945f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 12029462 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029465 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12029468 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1202946b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1202946e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12029470 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12029473 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12029476 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12029478:;
  /* 12029478 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1202947b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202947e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12029480 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12029482 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12029485 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12029488 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1202948b jmp 0x120294b9 */
  goto L_120294b9;
L_1202948d:;
  /* 1202948d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029490 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12029492 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12029494 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12029496 mov cl, byte ptr [eax + 0x12054061] */
  CL = (r8((uint32_t)(EAX + 0x12054061)));
  /* 1202949c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1202949f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120294a1 je 0x120294b9 */
  if (C.zf) goto L_120294b9;
  /* 120294a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120294a6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120294a9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120294ac mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120294af mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120294b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120294b4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120294b7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_120294b9:;
  /* 120294b9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120294bc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120294be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120294c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120294c4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_120294c6:;
  /* 120294c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120294c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120294cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120294cf jmp 0x12029341 */
  goto L_12029341;
L_120294d4:;
  /* 120294d4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120294d8 je 0x120294e9 */
  if (C.zf) goto L_120294e9;
  /* 120294da mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120294dd mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 120294e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120294e3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120294e6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_120294e9:;
  /* 120294e9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120294ec mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120294ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120294f1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120294f4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 120294f6 jmp 0x120292e3 */
  goto L_120292e3;
L_120294fb:;
  /* 120294fb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120294ff je 0x12029513 */
  if (C.zf) goto L_12029513;
  /* 12029501 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12029504 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1202950a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202950d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12029510 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12029513:;
  /* 12029513 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12029516 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12029518 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202951b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1202951e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12029520 mov esp, ebp */
  ESP = (EBP);
  /* 12029522 pop ebp */
  EBP = (pop32());
  /* 12029523 ret  */
  ESPCHK(0x12029100u, _esp0);
  ESP += 4; return;
}

/* FUN_10009530 @ 0x12029530 (537 bytes, 173 insns) */
void f_12029530(void) {
  FTRACE(0x12029530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12029530 push ebp */
  push32((uint32_t)(EBP));
  /* 12029531 mov ebp, esp */
  EBP = (ESP);
  /* 12029533 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12029536 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1202953d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12029544 cmp dword ptr [0x12052944], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052944))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202954b jne 0x1202958a */
  if (!C.zf) goto L_1202958a;
  /* 1202954d call dword ptr [0x1205537c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205537c))), 0x12029553u);
  /* 12029553 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12029556 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202955a je 0x12029568 */
  if (C.zf) goto L_12029568;
  /* 1202955c mov dword ptr [0x12052944], 1 */
  w32((uint32_t)(0x12052944), (0x1u));
  /* 12029566 jmp 0x1202958a */
  goto L_1202958a;
L_12029568:;
  /* 12029568 call dword ptr [0x12055380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055380))), 0x1202956eu);
  /* 1202956e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12029571 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029575 je 0x12029583 */
  if (C.zf) goto L_12029583;
  /* 12029577 mov dword ptr [0x12052944], 2 */
  w32((uint32_t)(0x12052944), (0x2u));
  /* 12029581 jmp 0x1202958a */
  goto L_1202958a;
L_12029583:;
  /* 12029583 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12029585 jmp 0x12029745 */
  goto L_12029745;
L_1202958a:;
  /* 1202958a cmp dword ptr [0x12052944], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12052944))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029591 jne 0x1202968e */
  if (!C.zf) goto L_1202968e;
  /* 12029597 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202959b jne 0x120295b3 */
  if (!C.zf) goto L_120295b3;
  /* 1202959d call dword ptr [0x1205537c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205537c))), 0x120295a3u);
  /* 120295a3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 120295a6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120295aa jne 0x120295b3 */
  if (!C.zf) goto L_120295b3;
  /* 120295ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120295ae jmp 0x12029745 */
  goto L_12029745;
L_120295b3:;
  /* 120295b3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120295b6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_120295b9:;
  /* 120295b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120295bc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120295be mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 120295c1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120295c3 je 0x120295e5 */
  if (C.zf) goto L_120295e5;
  /* 120295c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120295c8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120295cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120295ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120295d1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120295d3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 120295d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120295d8 jne 0x120295e3 */
  if (!C.zf) goto L_120295e3;
  /* 120295da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120295dd add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120295e0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_120295e3:;
  /* 120295e3 jmp 0x120295b9 */
  goto L_120295b9;
L_120295e5:;
  /* 120295e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120295e8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120295eb sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 120295ed add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120295f0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120295f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 120295f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 120295f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 120295f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 120295fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120295fe push edx */
  push32((uint32_t)(EDX));
  /* 120295ff mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12029602 push eax */
  push32((uint32_t)(EAX));
  /* 12029603 push 0 */
  push32((uint32_t)(0x0u));
  /* 12029605 push 0 */
  push32((uint32_t)(0x0u));
  /* 12029607 call dword ptr [0x12055384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055384))), 0x1202960du);
  /* 1202960d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12029610 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029614 je 0x12029634 */
  if (C.zf) goto L_12029634;
  /* 12029616 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12029618 push 0x1204e0ac */
  push32((uint32_t)(0x1204e0acu));
  /* 1202961d push 2 */
  push32((uint32_t)(0x2u));
  /* 1202961f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12029622 push ecx */
  push32((uint32_t)(ECX));
  /* 12029623 call 0x12026f60 */
  push32(0x12029628u); f_12026f60();
  /* 12029628 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202962b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1202962e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029632 jne 0x12029645 */
  if (!C.zf) goto L_12029645;
L_12029634:;
  /* 12029634 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12029637 push edx */
  push32((uint32_t)(EDX));
  /* 12029638 call dword ptr [0x12055388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055388))), 0x1202963eu);
  /* 1202963e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12029640 jmp 0x12029745 */
  goto L_12029745;
L_12029645:;
  /* 12029645 push 0 */
  push32((uint32_t)(0x0u));
  /* 12029647 push 0 */
  push32((uint32_t)(0x0u));
  /* 12029649 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202964c push eax */
  push32((uint32_t)(EAX));
  /* 1202964d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12029650 push ecx */
  push32((uint32_t)(ECX));
  /* 12029651 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029654 push edx */
  push32((uint32_t)(EDX));
  /* 12029655 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12029658 push eax */
  push32((uint32_t)(EAX));
  /* 12029659 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202965b push 0 */
  push32((uint32_t)(0x0u));
  /* 1202965d call dword ptr [0x12055384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055384))), 0x12029663u);
  /* 12029663 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12029665 jne 0x1202967c */
  if (!C.zf) goto L_1202967c;
  /* 12029667 push 2 */
  push32((uint32_t)(0x2u));
  /* 12029669 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202966c push ecx */
  push32((uint32_t)(ECX));
  /* 1202966d call 0x120279f0 */
  push32(0x12029672u); f_120279f0();
  /* 12029672 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12029675 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1202967c:;
  /* 1202967c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202967f push edx */
  push32((uint32_t)(EDX));
  /* 12029680 call dword ptr [0x12055388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055388))), 0x12029686u);
  /* 12029686 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12029689 jmp 0x12029745 */
  goto L_12029745;
L_1202968e:;
  /* 1202968e cmp dword ptr [0x12052944], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12052944))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029695 jne 0x12029743 */
  if (!C.zf) goto L_12029743;
  /* 1202969b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202969f jne 0x120296b7 */
  if (!C.zf) goto L_120296b7;
  /* 120296a1 call dword ptr [0x12055380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055380))), 0x120296a7u);
  /* 120296a7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 120296aa cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120296ae jne 0x120296b7 */
  if (!C.zf) goto L_120296b7;
  /* 120296b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120296b2 jmp 0x12029745 */
  goto L_12029745;
L_120296b7:;
  /* 120296b7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120296ba mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_120296bd:;
  /* 120296bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120296c0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120296c3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120296c5 je 0x120296e5 */
  if (C.zf) goto L_120296e5;
  /* 120296c7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120296ca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120296cd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120296d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120296d3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120296d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120296d8 jne 0x120296e3 */
  if (!C.zf) goto L_120296e3;
  /* 120296da mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120296dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120296e0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_120296e3:;
  /* 120296e3 jmp 0x120296bd */
  goto L_120296bd;
L_120296e5:;
  /* 120296e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120296e8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120296eb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120296ee mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 120296f1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 120296f6 push 0x1204e0ac */
  push32((uint32_t)(0x1204e0acu));
  /* 120296fb push 2 */
  push32((uint32_t)(0x2u));
  /* 120296fd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12029700 push edx */
  push32((uint32_t)(EDX));
  /* 12029701 call 0x12026f60 */
  push32(0x12029706u); f_12026f60();
  /* 12029706 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12029709 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1202970c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029710 jne 0x12029720 */
  if (!C.zf) goto L_12029720;
  /* 12029712 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12029715 push eax */
  push32((uint32_t)(EAX));
  /* 12029716 call dword ptr [0x1205538c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205538c))), 0x1202971cu);
  /* 1202971c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202971e jmp 0x12029745 */
  goto L_12029745;
L_12029720:;
  /* 12029720 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12029723 push ecx */
  push32((uint32_t)(ECX));
  /* 12029724 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12029727 push edx */
  push32((uint32_t)(EDX));
  /* 12029728 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202972b push eax */
  push32((uint32_t)(EAX));
  /* 1202972c call 0x1202d840 */
  push32(0x12029731u); f_1202d840();
  /* 12029731 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12029734 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12029737 push ecx */
  push32((uint32_t)(ECX));
  /* 12029738 call dword ptr [0x1205538c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205538c))), 0x1202973eu);
  /* 1202973e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12029741 jmp 0x12029745 */
  goto L_12029745;
L_12029743:;
  /* 12029743 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12029745:;
  /* 12029745 mov esp, ebp */
  ESP = (EBP);
  /* 12029747 pop ebp */
  EBP = (pop32());
  /* 12029748 ret  */
  ESPCHK(0x12029530u, _esp0);
  ESP += 4; return;
}

/* FUN_10009750 @ 0x12029750 (77 bytes, 25 insns) */
void f_12029750(void) {
  FTRACE(0x12029750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12029750 push ebp */
  push32((uint32_t)(EBP));
  /* 12029751 mov ebp, esp */
  EBP = (ESP);
  /* 12029753 push 0 */
  push32((uint32_t)(0x0u));
  /* 12029755 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1202975a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202975c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029760 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 12029763 push eax */
  push32((uint32_t)(EAX));
  /* 12029764 call dword ptr [0x12055374] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055374))), 0x1202976au);
  /* 1202976a mov dword ptr [0x1205418c], eax */
  w32((uint32_t)(0x1205418c), (EAX));
  /* 1202976f cmp dword ptr [0x1205418c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1205418c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029776 jne 0x1202977c */
  if (!C.zf) goto L_1202977c;
  /* 12029778 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202977a jmp 0x1202979b */
  goto L_1202979b;
L_1202977c:;
  /* 1202977c call 0x1202b200 */
  push32(0x12029781u); f_1202b200();
  /* 12029781 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12029783 jne 0x12029796 */
  if (!C.zf) goto L_12029796;
  /* 12029785 mov ecx, dword ptr [0x1205418c] */
  ECX = (r32((uint32_t)(0x1205418c)));
  /* 1202978b push ecx */
  push32((uint32_t)(ECX));
  /* 1202978c call dword ptr [0x12055378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055378))), 0x12029792u);
  /* 12029792 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12029794 jmp 0x1202979b */
  goto L_1202979b;
L_12029796:;
  /* 12029796 mov eax, 1 */
  EAX = (0x1u);
L_1202979b:;
  /* 1202979b pop ebp */
  EBP = (pop32());
  /* 1202979c ret  */
  ESPCHK(0x12029750u, _esp0);
  ESP += 4; return;
}

/* FUN_100097a0 @ 0x120297a0 (156 bytes, 48 insns) */
void f_120297a0(void) {
  FTRACE(0x120297a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120297a0 push ebp */
  push32((uint32_t)(EBP));
  /* 120297a1 mov ebp, esp */
  EBP = (ESP);
  /* 120297a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120297a6 mov eax, dword ptr [0x12054188] */
  EAX = (r32((uint32_t)(0x12054188)));
  /* 120297ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120297ae mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120297b5 jmp 0x120297c0 */
  goto L_120297c0;
L_120297b7:;
  /* 120297b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120297ba add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120297bd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120297c0:;
  /* 120297c0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120297c3 cmp edx, dword ptr [0x12054184] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12054184))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120297c9 jge 0x12029816 */
  if ((C.sf==C.of)) goto L_12029816;
  /* 120297cb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 120297d0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 120297d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120297d8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 120297db push ecx */
  push32((uint32_t)(ECX));
  /* 120297dc call dword ptr [0x1205536c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205536c))), 0x120297e2u);
  /* 120297e2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 120297e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 120297e9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120297ec mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 120297ef push eax */
  push32((uint32_t)(EAX));
  /* 120297f0 call dword ptr [0x1205536c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205536c))), 0x120297f6u);
  /* 120297f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120297f9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 120297fc push edx */
  push32((uint32_t)(EDX));
  /* 120297fd push 0 */
  push32((uint32_t)(0x0u));
  /* 120297ff mov eax, dword ptr [0x1205418c] */
  EAX = (r32((uint32_t)(0x1205418c)));
  /* 12029804 push eax */
  push32((uint32_t)(EAX));
  /* 12029805 call dword ptr [0x12055370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055370))), 0x1202980bu);
  /* 1202980b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202980e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12029811 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12029814 jmp 0x120297b7 */
  goto L_120297b7;
L_12029816:;
  /* 12029816 mov edx, dword ptr [0x12054188] */
  EDX = (r32((uint32_t)(0x12054188)));
  /* 1202981c push edx */
  push32((uint32_t)(EDX));
  /* 1202981d push 0 */
  push32((uint32_t)(0x0u));
  /* 1202981f mov eax, dword ptr [0x1205418c] */
  EAX = (r32((uint32_t)(0x1205418c)));
  /* 12029824 push eax */
  push32((uint32_t)(EAX));
  /* 12029825 call dword ptr [0x12055370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055370))), 0x1202982bu);
  /* 1202982b mov ecx, dword ptr [0x1205418c] */
  ECX = (r32((uint32_t)(0x1205418c)));
  /* 12029831 push ecx */
  push32((uint32_t)(ECX));
  /* 12029832 call dword ptr [0x12055378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055378))), 0x12029838u);
  /* 12029838 mov esp, ebp */
  ESP = (EBP);
  /* 1202983a pop ebp */
  EBP = (pop32());
  /* 1202983b ret  */
  ESPCHK(0x120297a0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x12029840 (73 bytes, 19 insns) */
void f_12029840(void) {
  FTRACE(0x12029840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12029840 push ebp */
  push32((uint32_t)(EBP));
  /* 12029841 mov ebp, esp */
  EBP = (ESP);
  /* 12029843 cmp dword ptr [0x120527d8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120527d8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202984a je 0x1202985e */
  if (C.zf) goto L_1202985e;
  /* 1202984c cmp dword ptr [0x120527d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120527d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029853 jne 0x12029887 */
  if (!C.zf) goto L_12029887;
  /* 12029855 cmp dword ptr [0x120527dc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120527dc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202985c jne 0x12029887 */
  if (!C.zf) goto L_12029887;
L_1202985e:;
  /* 1202985e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 12029863 call 0x12029890 */
  push32(0x12029868u); f_12029890();
  /* 12029868 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202986b cmp dword ptr [0x12052948], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052948))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029872 je 0x1202987a */
  if (C.zf) goto L_1202987a;
  /* 12029874 call dword ptr [0x12052948] */
  call_ind((uint32_t)(r32((uint32_t)(0x12052948))), 0x1202987au);
L_1202987a:;
  /* 1202987a push 0xff */
  push32((uint32_t)(0xffu));
  /* 1202987f call 0x12029890 */
  push32(0x12029884u); f_12029890();
  /* 12029884 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12029887:;
  /* 12029887 pop ebp */
  EBP = (pop32());
  /* 12029888 ret  */
  ESPCHK(0x12029840u, _esp0);
  ESP += 4; return;
}

/* FUN_10009890 @ 0x12029890 (447 bytes, 131 insns) */
void f_12029890(void) {
  FTRACE(0x12029890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12029890 push ebp */
  push32((uint32_t)(EBP));
  /* 12029891 mov ebp, esp */
  EBP = (ESP);
  /* 12029893 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12029899 push ebx */
  push32((uint32_t)(EBX));
  /* 1202989a push esi */
  push32((uint32_t)(ESI));
  /* 1202989b push edi */
  push32((uint32_t)(EDI));
  /* 1202989c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120298a3 jmp 0x120298ae */
  goto L_120298ae;
L_120298a5:;
  /* 120298a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120298a8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120298ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_120298ae:;
  /* 120298ae cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120298b2 jae 0x120298c7 */
  if (!C.cf) goto L_120298c7;
  /* 120298b4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120298b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120298ba cmp edx, dword ptr [ecx*8 + 0x12050ab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12050ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120298c1 jne 0x120298c5 */
  if (!C.zf) goto L_120298c5;
  /* 120298c3 jmp 0x120298c7 */
  goto L_120298c7;
L_120298c5:;
  /* 120298c5 jmp 0x120298a5 */
  goto L_120298a5;
L_120298c7:;
  /* 120298c7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120298ca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120298cd cmp ecx, dword ptr [eax*8 + 0x12050ab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12050ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120298d4 jne 0x12029a48 */
  if (!C.zf) goto L_12029a48;
  /* 120298da cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120298e1 je 0x12029904 */
  if (C.zf) goto L_12029904;
  /* 120298e3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120298e6 mov eax, dword ptr [edx*8 + 0x12050ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12050ab4)));
  /* 120298ed push eax */
  push32((uint32_t)(EAX));
  /* 120298ee push 0 */
  push32((uint32_t)(0x0u));
  /* 120298f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 120298f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 120298f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 120298f6 call 0x12026020 */
  push32(0x120298fbu); f_12026020();
  /* 120298fb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120298fe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029901 jne 0x12029904 */
  if (!C.zf) goto L_12029904;
  /* 12029903 int3  */
  x86_unimpl("int3 @ 0x12029903");
L_12029904:;
  /* 12029904 cmp dword ptr [0x120527d8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120527d8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202990b je 0x1202991f */
  if (C.zf) goto L_1202991f;
  /* 1202990d cmp dword ptr [0x120527d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120527d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029914 jne 0x12029958 */
  if (!C.zf) goto L_12029958;
  /* 12029916 cmp dword ptr [0x120527dc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120527dc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202991d jne 0x12029958 */
  if (!C.zf) goto L_12029958;
L_1202991f:;
  /* 1202991f push 0 */
  push32((uint32_t)(0x0u));
  /* 12029921 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12029924 push ecx */
  push32((uint32_t)(ECX));
  /* 12029925 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12029928 mov eax, dword ptr [edx*8 + 0x12050ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12050ab4)));
  /* 1202992f push eax */
  push32((uint32_t)(EAX));
  /* 12029930 call 0x12029d90 */
  push32(0x12029935u); f_12029d90();
  /* 12029935 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12029938 push eax */
  push32((uint32_t)(EAX));
  /* 12029939 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202993c mov edx, dword ptr [ecx*8 + 0x12050ab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x12050ab4)));
  /* 12029943 push edx */
  push32((uint32_t)(EDX));
  /* 12029944 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12029946 call dword ptr [0x120553b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553b0))), 0x1202994cu);
  /* 1202994c push eax */
  push32((uint32_t)(EAX));
  /* 1202994d call dword ptr [0x120553b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553b4))), 0x12029953u);
  /* 12029953 jmp 0x12029a48 */
  goto L_12029a48;
L_12029958:;
  /* 12029958 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202995f je 0x12029a48 */
  if (C.zf) goto L_12029a48;
  /* 12029965 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 1202996a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 12029970 push eax */
  push32((uint32_t)(EAX));
  /* 12029971 push 0 */
  push32((uint32_t)(0x0u));
  /* 12029973 call dword ptr [0x120552e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120552e0))), 0x12029979u);
  /* 12029979 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202997b jne 0x12029991 */
  if (!C.zf) goto L_12029991;
  /* 1202997d push 0x1204d914 */
  push32((uint32_t)(0x1204d914u));
  /* 12029982 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12029988 push ecx */
  push32((uint32_t)(ECX));
  /* 12029989 call 0x12029f10 */
  push32(0x1202998eu); f_12029f10();
  /* 1202998e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12029991:;
  /* 12029991 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 12029997 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1202999a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202999d push eax */
  push32((uint32_t)(EAX));
  /* 1202999e call 0x12029d90 */
  push32(0x120299a3u); f_12029d90();
  /* 120299a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120299a6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120299a9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120299ac jbe 0x120299da */
  if ((C.cf||C.zf)) goto L_120299da;
  /* 120299ae lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 120299b4 push ecx */
  push32((uint32_t)(ECX));
  /* 120299b5 call 0x12029d90 */
  push32(0x120299bau); f_12029d90();
  /* 120299ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120299bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120299c0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 120299c4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120299c7 push 3 */
  push32((uint32_t)(0x3u));
  /* 120299c9 push 0x1204d910 */
  push32((uint32_t)(0x1204d910u));
  /* 120299ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120299d1 push ecx */
  push32((uint32_t)(ECX));
  /* 120299d2 call 0x1202a780 */
  push32(0x120299d7u); f_1202a780();
  /* 120299d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120299da:;
  /* 120299da push 0x1204e368 */
  push32((uint32_t)(0x1204e368u));
  /* 120299df lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 120299e5 push edx */
  push32((uint32_t)(EDX));
  /* 120299e6 call 0x12029f10 */
  push32(0x120299ebu); f_12029f10();
  /* 120299eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120299ee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120299f1 push eax */
  push32((uint32_t)(EAX));
  /* 120299f2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 120299f8 push ecx */
  push32((uint32_t)(ECX));
  /* 120299f9 call 0x12029f20 */
  push32(0x120299feu); f_12029f20();
  /* 120299fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12029a01 push 0x1204d888 */
  push32((uint32_t)(0x1204d888u));
  /* 12029a06 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12029a0c push edx */
  push32((uint32_t)(EDX));
  /* 12029a0d call 0x12029f20 */
  push32(0x12029a12u); f_12029f20();
  /* 12029a12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12029a15 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12029a18 mov ecx, dword ptr [eax*8 + 0x12050ab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x12050ab4)));
  /* 12029a1f push ecx */
  push32((uint32_t)(ECX));
  /* 12029a20 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12029a26 push edx */
  push32((uint32_t)(EDX));
  /* 12029a27 call 0x12029f20 */
  push32(0x12029a2cu); f_12029f20();
  /* 12029a2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12029a2f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 12029a34 push 0x1204e340 */
  push32((uint32_t)(0x1204e340u));
  /* 12029a39 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 12029a3f push eax */
  push32((uint32_t)(EAX));
  /* 12029a40 call 0x1202a6c0 */
  push32(0x12029a45u); f_1202a6c0();
  /* 12029a45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12029a48:;
  /* 12029a48 pop edi */
  EDI = (pop32());
  /* 12029a49 pop esi */
  ESI = (pop32());
  /* 12029a4a pop ebx */
  EBX = (pop32());
  /* 12029a4b mov esp, ebp */
  ESP = (EBP);
  /* 12029a4d pop ebp */
  EBP = (pop32());
  /* 12029a4e ret  */
  ESPCHK(0x12029890u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x12029a50 (80 bytes, 27 insns) */
void f_12029a50(void) {
  FTRACE(0x12029a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12029a50 push ebp */
  push32((uint32_t)(EBP));
  /* 12029a51 mov ebp, esp */
  EBP = (ESP);
  /* 12029a53 push ecx */
  push32((uint32_t)(ECX));
  /* 12029a54 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12029a5b jmp 0x12029a66 */
  goto L_12029a66;
L_12029a5d:;
  /* 12029a5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029a60 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12029a63 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12029a66:;
  /* 12029a66 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029a6a jae 0x12029a7f */
  if (!C.cf) goto L_12029a7f;
  /* 12029a6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029a6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12029a72 cmp edx, dword ptr [ecx*8 + 0x12050ab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12050ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029a79 jne 0x12029a7d */
  if (!C.zf) goto L_12029a7d;
  /* 12029a7b jmp 0x12029a7f */
  goto L_12029a7f;
L_12029a7d:;
  /* 12029a7d jmp 0x12029a5d */
  goto L_12029a5d;
L_12029a7f:;
  /* 12029a7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029a82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12029a85 cmp ecx, dword ptr [eax*8 + 0x12050ab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12050ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029a8c jne 0x12029a9a */
  if (!C.zf) goto L_12029a9a;
  /* 12029a8e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029a91 mov eax, dword ptr [edx*8 + 0x12050ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12050ab4)));
  /* 12029a98 jmp 0x12029a9c */
  goto L_12029a9c;
L_12029a9a:;
  /* 12029a9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12029a9c:;
  /* 12029a9c mov esp, ebp */
  ESP = (EBP);
  /* 12029a9e pop ebp */
  EBP = (pop32());
  /* 12029a9f ret  */
  ESPCHK(0x12029a50u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x12029aa0 (66 bytes, 28 insns) */
void f_12029aa0(void) {
  FTRACE(0x12029aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12029aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12029aa1 mov ebp, esp */
  EBP = (ESP);
  /* 12029aa3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029aa7 jne 0x12029ac7 */
  if (!C.zf) goto L_12029ac7;
  /* 12029aa9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029aad jge 0x12029ac7 */
  if ((C.sf==C.of)) goto L_12029ac7;
  /* 12029aaf push 1 */
  push32((uint32_t)(0x1u));
  /* 12029ab1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12029ab4 push eax */
  push32((uint32_t)(EAX));
  /* 12029ab5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12029ab8 push ecx */
  push32((uint32_t)(ECX));
  /* 12029ab9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12029abc push edx */
  push32((uint32_t)(EDX));
  /* 12029abd call 0x12029af0 */
  push32(0x12029ac2u); f_12029af0();
  /* 12029ac2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12029ac5 jmp 0x12029add */
  goto L_12029add;
L_12029ac7:;
  /* 12029ac7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12029ac9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12029acc push eax */
  push32((uint32_t)(EAX));
  /* 12029acd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12029ad0 push ecx */
  push32((uint32_t)(ECX));
  /* 12029ad1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12029ad4 push edx */
  push32((uint32_t)(EDX));
  /* 12029ad5 call 0x12029af0 */
  push32(0x12029adau); f_12029af0();
  /* 12029ada add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12029add:;
  /* 12029add mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12029ae0 pop ebp */
  EBP = (pop32());
  /* 12029ae1 ret  */
  ESPCHK(0x12029aa0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x12029af0 (194 bytes, 71 insns) */
void f_12029af0(void) {
  FTRACE(0x12029af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12029af0 push ebp */
  push32((uint32_t)(EBP));
  /* 12029af1 mov ebp, esp */
  EBP = (ESP);
  /* 12029af3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12029af6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12029af9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12029afc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029b00 je 0x12029b19 */
  if (C.zf) goto L_12029b19;
  /* 12029b02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029b05 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12029b08 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029b0b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12029b0e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12029b11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12029b14 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12029b16 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12029b19:;
  /* 12029b19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029b1c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12029b1f:;
  /* 12029b1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12029b22 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12029b24 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12029b27 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12029b2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12029b2d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12029b2f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12029b32 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12029b35 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029b39 jbe 0x12029b51 */
  if ((C.cf||C.zf)) goto L_12029b51;
  /* 12029b3b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12029b3e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12029b41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029b44 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12029b46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029b49 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12029b4c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12029b4f jmp 0x12029b65 */
  goto L_12029b65;
L_12029b51:;
  /* 12029b51 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12029b54 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12029b57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029b5a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12029b5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029b5f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12029b62 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12029b65:;
  /* 12029b65 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029b69 ja 0x12029b1f */
  if ((!C.cf&&!C.zf)) goto L_12029b1f;
  /* 12029b6b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029b6e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12029b71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029b74 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12029b77 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12029b7a:;
  /* 12029b7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029b7d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12029b7f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12029b82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029b85 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12029b88 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12029b8a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12029b8c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12029b8f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12029b92 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12029b94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029b97 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12029b9a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12029b9d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12029ba0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12029ba3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12029ba6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12029ba9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029bac jb 0x12029b7a */
  if (C.cf) goto L_12029b7a;
  /* 12029bae mov esp, ebp */
  ESP = (EBP);
  /* 12029bb0 pop ebp */
  EBP = (pop32());
  /* 12029bb1 ret  */
  ESPCHK(0x12029af0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x12029bc0 (63 bytes, 24 insns) */
void f_12029bc0(void) {
  FTRACE(0x12029bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12029bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12029bc1 mov ebp, esp */
  EBP = (ESP);
  /* 12029bc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12029bc4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029bc8 jne 0x12029bd9 */
  if (!C.zf) goto L_12029bd9;
  /* 12029bca cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029bce jge 0x12029bd9 */
  if ((C.sf==C.of)) goto L_12029bd9;
  /* 12029bd0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12029bd7 jmp 0x12029be0 */
  goto L_12029be0;
L_12029bd9:;
  /* 12029bd9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12029be0:;
  /* 12029be0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029be3 push eax */
  push32((uint32_t)(EAX));
  /* 12029be4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12029be7 push ecx */
  push32((uint32_t)(ECX));
  /* 12029be8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12029beb push edx */
  push32((uint32_t)(EDX));
  /* 12029bec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12029bef push eax */
  push32((uint32_t)(EAX));
  /* 12029bf0 call 0x12029af0 */
  push32(0x12029bf5u); f_12029af0();
  /* 12029bf5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12029bf8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12029bfb mov esp, ebp */
  ESP = (EBP);
  /* 12029bfd pop ebp */
  EBP = (pop32());
  /* 12029bfe ret  */
  ESPCHK(0x12029bc0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x12029c00 (30 bytes, 14 insns) */
void f_12029c00(void) {
  FTRACE(0x12029c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12029c00 push ebp */
  push32((uint32_t)(EBP));
  /* 12029c01 mov ebp, esp */
  EBP = (ESP);
  /* 12029c03 push 0 */
  push32((uint32_t)(0x0u));
  /* 12029c05 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12029c08 push eax */
  push32((uint32_t)(EAX));
  /* 12029c09 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12029c0c push ecx */
  push32((uint32_t)(ECX));
  /* 12029c0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12029c10 push edx */
  push32((uint32_t)(EDX));
  /* 12029c11 call 0x12029af0 */
  push32(0x12029c16u); f_12029af0();
  /* 12029c16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12029c19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12029c1c pop ebp */
  EBP = (pop32());
  /* 12029c1d ret  */
  ESPCHK(0x12029c00u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x12029c20 (72 bytes, 28 insns) */
void f_12029c20(void) {
  FTRACE(0x12029c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12029c20 push ebp */
  push32((uint32_t)(EBP));
  /* 12029c21 mov ebp, esp */
  EBP = (ESP);
  /* 12029c23 push ecx */
  push32((uint32_t)(ECX));
  /* 12029c24 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029c28 jne 0x12029c41 */
  if (!C.zf) goto L_12029c41;
  /* 12029c2a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029c2e jg 0x12029c41 */
  if ((!C.zf&&C.sf==C.of)) goto L_12029c41;
  /* 12029c30 jl 0x12029c38 */
  if ((C.sf!=C.of)) goto L_12029c38;
  /* 12029c32 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029c36 jae 0x12029c41 */
  if (!C.cf) goto L_12029c41;
L_12029c38:;
  /* 12029c38 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12029c3f jmp 0x12029c48 */
  goto L_12029c48;
L_12029c41:;
  /* 12029c41 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12029c48:;
  /* 12029c48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029c4b push eax */
  push32((uint32_t)(EAX));
  /* 12029c4c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12029c4f push ecx */
  push32((uint32_t)(ECX));
  /* 12029c50 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12029c53 push edx */
  push32((uint32_t)(EDX));
  /* 12029c54 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12029c57 push eax */
  push32((uint32_t)(EAX));
  /* 12029c58 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12029c5b push ecx */
  push32((uint32_t)(ECX));
  /* 12029c5c call 0x12029c70 */
  push32(0x12029c61u); f_12029c70();
  /* 12029c61 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12029c64 mov esp, ebp */
  ESP = (EBP);
  /* 12029c66 pop ebp */
  EBP = (pop32());
  /* 12029c67 ret  */
  ESPCHK(0x12029c20u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x12029c70 (242 bytes, 91 insns) */
void f_12029c70(void) {
  FTRACE(0x12029c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12029c70 push ebp */
  push32((uint32_t)(EBP));
  /* 12029c71 mov ebp, esp */
  EBP = (ESP);
  /* 12029c73 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12029c76 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12029c79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12029c7c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029c80 je 0x12029ca4 */
  if (C.zf) goto L_12029ca4;
  /* 12029c82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029c85 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12029c88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029c8b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12029c8e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12029c91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12029c94 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12029c96 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12029c99 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12029c9c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12029c9e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12029ca1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12029ca4:;
  /* 12029ca4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029ca7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12029caa:;
  /* 12029caa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12029cad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12029caf push ecx */
  push32((uint32_t)(ECX));
  /* 12029cb0 push eax */
  push32((uint32_t)(EAX));
  /* 12029cb1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12029cb4 push edx */
  push32((uint32_t)(EDX));
  /* 12029cb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12029cb8 push eax */
  push32((uint32_t)(EAX));
  /* 12029cb9 call 0x1202dbf0 */
  push32(0x12029cbeu); f_1202dbf0();
  /* 12029cbe mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12029cc1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12029cc4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12029cc6 push edx */
  push32((uint32_t)(EDX));
  /* 12029cc7 push ecx */
  push32((uint32_t)(ECX));
  /* 12029cc8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12029ccb push eax */
  push32((uint32_t)(EAX));
  /* 12029ccc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12029ccf push ecx */
  push32((uint32_t)(ECX));
  /* 12029cd0 call 0x1202db80 */
  push32(0x12029cd5u); f_1202db80();
  /* 12029cd5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12029cd8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12029cdb cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029cdf jbe 0x12029cf7 */
  if ((C.cf||C.zf)) goto L_12029cf7;
  /* 12029ce1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12029ce4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12029ce7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029cea mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12029cec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029cef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12029cf2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12029cf5 jmp 0x12029d0b */
  goto L_12029d0b;
L_12029cf7:;
  /* 12029cf7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12029cfa add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12029cfd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029d00 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12029d02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029d05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12029d08 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12029d0b:;
  /* 12029d0b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029d0f ja 0x12029caa */
  if ((!C.cf&&!C.zf)) goto L_12029caa;
  /* 12029d11 jb 0x12029d19 */
  if (C.cf) goto L_12029d19;
  /* 12029d13 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029d17 ja 0x12029caa */
  if ((!C.cf&&!C.zf)) goto L_12029caa;
L_12029d19:;
  /* 12029d19 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029d1c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12029d1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029d22 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12029d25 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12029d28:;
  /* 12029d28 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029d2b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12029d2d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12029d30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029d33 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12029d36 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12029d38 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12029d3a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12029d3d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12029d40 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12029d42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12029d45 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12029d48 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12029d4b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12029d4e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12029d51 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12029d54 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12029d57 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029d5a jb 0x12029d28 */
  if (C.cf) goto L_12029d28;
  /* 12029d5c mov esp, ebp */
  ESP = (EBP);
  /* 12029d5e pop ebp */
  EBP = (pop32());
  /* 12029d5f ret 0x14 */
  ESPCHK(0x12029c70u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x12029d70 (31 bytes, 15 insns) */
void f_12029d70(void) {
  FTRACE(0x12029d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12029d70 push ebp */
  push32((uint32_t)(EBP));
  /* 12029d71 mov ebp, esp */
  EBP = (ESP);
  /* 12029d73 push 0 */
  push32((uint32_t)(0x0u));
  /* 12029d75 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12029d78 push eax */
  push32((uint32_t)(EAX));
  /* 12029d79 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12029d7c push ecx */
  push32((uint32_t)(ECX));
  /* 12029d7d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12029d80 push edx */
  push32((uint32_t)(EDX));
  /* 12029d81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12029d84 push eax */
  push32((uint32_t)(EAX));
  /* 12029d85 call 0x12029c70 */
  push32(0x12029d8au); f_12029c70();
  /* 12029d8a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12029d8d pop ebp */
  EBP = (pop32());
  /* 12029d8e ret  */
  ESPCHK(0x12029d70u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x12029d90 (123 bytes, 44 insns) */
void f_12029d90(void) {
  FTRACE(0x12029d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12029d90 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12029d94 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12029d9a je 0x12029db0 */
  if (C.zf) goto L_12029db0;
L_12029d9c:;
  /* 12029d9c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12029d9e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12029d9f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12029da1 je 0x12029de3 */
  if (C.zf) goto L_12029de3;
  /* 12029da3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12029da9 jne 0x12029d9c */
  if (!C.zf) goto L_12029d9c;
  /* 12029dab add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12029db0:;
  /* 12029db0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12029db2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12029db7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12029db9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12029dbc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12029dbe add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12029dc1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12029dc6 je 0x12029db0 */
  if (C.zf) goto L_12029db0;
  /* 12029dc8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12029dcb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12029dcd je 0x12029e01 */
  if (C.zf) goto L_12029e01;
  /* 12029dcf test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12029dd1 je 0x12029df7 */
  if (C.zf) goto L_12029df7;
  /* 12029dd3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12029dd8 je 0x12029ded */
  if (C.zf) goto L_12029ded;
  /* 12029dda test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12029ddf je 0x12029de3 */
  if (C.zf) goto L_12029de3;
  /* 12029de1 jmp 0x12029db0 */
  goto L_12029db0;
L_12029de3:;
  /* 12029de3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 12029de6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12029dea sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12029dec ret  */
  ESPCHK(0x12029d90u, _esp0);
  ESP += 4; return;
L_12029ded:;
  /* 12029ded lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 12029df0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12029df4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12029df6 ret  */
  ESPCHK(0x12029d90u, _esp0);
  ESP += 4; return;
L_12029df7:;
  /* 12029df7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 12029dfa mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12029dfe sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12029e00 ret  */
  ESPCHK(0x12029d90u, _esp0);
  ESP += 4; return;
L_12029e01:;
  /* 12029e01 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 12029e04 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12029e08 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12029e0a ret  */
  ESPCHK(0x12029d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e10 @ 0x12029e10 (249 bytes, 93 insns) */
void f_12029e10(void) {
  FTRACE(0x12029e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12029e10 push ebp */
  push32((uint32_t)(EBP));
  /* 12029e11 mov ebp, esp */
  EBP = (ESP);
  /* 12029e13 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12029e16 push ebx */
  push32((uint32_t)(EBX));
  /* 12029e17 push esi */
  push32((uint32_t)(ESI));
  /* 12029e18 push edi */
  push32((uint32_t)(EDI));
  /* 12029e19 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12029e1c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12029e1f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 12029e22 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12029e25:;
  /* 12029e25 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029e29 jne 0x12029e49 */
  if (!C.zf) goto L_12029e49;
  /* 12029e2b push 0x1204e3a0 */
  push32((uint32_t)(0x1204e3a0u));
  /* 12029e30 push 0 */
  push32((uint32_t)(0x0u));
  /* 12029e32 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12029e34 push 0x1204e394 */
  push32((uint32_t)(0x1204e394u));
  /* 12029e39 push 2 */
  push32((uint32_t)(0x2u));
  /* 12029e3b call 0x12026020 */
  push32(0x12029e40u); f_12026020();
  /* 12029e40 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12029e43 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029e46 jne 0x12029e49 */
  if (!C.zf) goto L_12029e49;
  /* 12029e48 int3  */
  x86_unimpl("int3 @ 0x12029e48");
L_12029e49:;
  /* 12029e49 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12029e4b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12029e4d jne 0x12029e25 */
  if (!C.zf) goto L_12029e25;
L_12029e4f:;
  /* 12029e4f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029e53 jne 0x12029e73 */
  if (!C.zf) goto L_12029e73;
  /* 12029e55 push 0x1204e384 */
  push32((uint32_t)(0x1204e384u));
  /* 12029e5a push 0 */
  push32((uint32_t)(0x0u));
  /* 12029e5c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12029e5e push 0x1204e394 */
  push32((uint32_t)(0x1204e394u));
  /* 12029e63 push 2 */
  push32((uint32_t)(0x2u));
  /* 12029e65 call 0x12026020 */
  push32(0x12029e6au); f_12026020();
  /* 12029e6a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12029e6d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029e70 jne 0x12029e73 */
  if (!C.zf) goto L_12029e73;
  /* 12029e72 int3  */
  x86_unimpl("int3 @ 0x12029e72");
L_12029e73:;
  /* 12029e73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12029e75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12029e77 jne 0x12029e4f */
  if (!C.zf) goto L_12029e4f;
  /* 12029e79 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12029e7c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12029e83 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12029e86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12029e89 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12029e8c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12029e8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12029e92 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12029e94 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12029e97 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12029e9a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12029e9d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12029ea0 push edx */
  push32((uint32_t)(EDX));
  /* 12029ea1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12029ea4 push eax */
  push32((uint32_t)(EAX));
  /* 12029ea5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12029ea8 push ecx */
  push32((uint32_t)(ECX));
  /* 12029ea9 call 0x1202def0 */
  push32(0x12029eaeu); f_1202def0();
  /* 12029eae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12029eb1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12029eb4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12029eb7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12029eba sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12029ebd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12029ec0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12029ec3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12029ec6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12029eca jl 0x12029eee */
  if ((C.sf!=C.of)) goto L_12029eee;
  /* 12029ecc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12029ecf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12029ed1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12029ed4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12029ed6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12029edc mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12029edf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12029ee2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12029ee4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12029ee7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12029eea mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12029eec jmp 0x12029eff */
  goto L_12029eff;
L_12029eee:;
  /* 12029eee mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12029ef1 push eax */
  push32((uint32_t)(EAX));
  /* 12029ef2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12029ef4 call 0x1202dc70 */
  push32(0x12029ef9u); f_1202dc70();
  /* 12029ef9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12029efc mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12029eff:;
  /* 12029eff mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12029f02 pop edi */
  EDI = (pop32());
  /* 12029f03 pop esi */
  ESI = (pop32());
  /* 12029f04 pop ebx */
  EBX = (pop32());
  /* 12029f05 mov esp, ebp */
  ESP = (EBP);
  /* 12029f07 pop ebp */
  EBP = (pop32());
  /* 12029f08 ret  */
  ESPCHK(0x12029e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f10 @ 0x12029f10 (7 bytes, 3 insns) */
void f_12029f10(void) {
  FTRACE(0x12029f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12029f10 push edi */
  push32((uint32_t)(EDI));
  /* 12029f11 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 12029f15 jmp 0x12029f81 */
  jmp_ind(0x12029f81u); return;
}

/* FUN_10009f20 @ 0x12029f20 (224 bytes, 84 insns) */
void f_12029f20(void) {
  FTRACE(0x12029f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12029f20 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12029f24 push edi */
  push32((uint32_t)(EDI));
  /* 12029f25 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12029f2b je 0x12029f3c */
  if (C.zf) goto L_12029f3c;
L_12029f2d:;
  /* 12029f2d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12029f2f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12029f30 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12029f32 je 0x12029f6f */
  if (C.zf) goto L_12029f6f;
  /* 12029f34 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12029f3a jne 0x12029f2d */
  if (!C.zf) goto L_12029f2d;
L_12029f3c:;
  /* 12029f3c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12029f3e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12029f43 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12029f45 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12029f48 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12029f4a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12029f4d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12029f52 je 0x12029f3c */
  if (C.zf) goto L_12029f3c;
  /* 12029f54 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12029f57 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12029f59 je 0x12029f7e */
  if (C.zf) goto L_12029f7e;
  /* 12029f5b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12029f5d je 0x12029f79 */
  if (C.zf) goto L_12029f79;
  /* 12029f5f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12029f64 je 0x12029f74 */
  if (C.zf) goto L_12029f74;
  /* 12029f66 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12029f6b je 0x12029f6f */
  if (C.zf) goto L_12029f6f;
  /* 12029f6d jmp 0x12029f3c */
  goto L_12029f3c;
L_12029f6f:;
  /* 12029f6f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 12029f72 jmp 0x12029f81 */
  goto L_12029f81;
L_12029f74:;
  /* 12029f74 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 12029f77 jmp 0x12029f81 */
  goto L_12029f81;
L_12029f79:;
  /* 12029f79 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 12029f7c jmp 0x12029f81 */
  goto L_12029f81;
L_12029f7e:;
  /* 12029f7e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_12029f81:;
  /* 12029f81 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12029f85 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12029f8b je 0x12029fa6 */
  if (C.zf) goto L_12029fa6;
L_12029f8d:;
  /* 12029f8d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12029f8f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12029f90 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12029f92 je 0x12029ff8 */
  if (C.zf) goto L_12029ff8;
  /* 12029f94 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12029f96 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12029f97 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12029f9d jne 0x12029f8d */
  if (!C.zf) goto L_12029f8d;
  /* 12029f9f jmp 0x12029fa6 */
  goto L_12029fa6;
L_12029fa1:;
  /* 12029fa1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12029fa3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12029fa6:;
  /* 12029fa6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12029fab mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12029fad add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12029faf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12029fb2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12029fb4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12029fb6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12029fb9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12029fbe je 0x12029fa1 */
  if (C.zf) goto L_12029fa1;
  /* 12029fc0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12029fc2 je 0x12029ff8 */
  if (C.zf) goto L_12029ff8;
  /* 12029fc4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12029fc6 je 0x12029fef */
  if (C.zf) goto L_12029fef;
  /* 12029fc8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12029fce je 0x12029fe2 */
  if (C.zf) goto L_12029fe2;
  /* 12029fd0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12029fd6 je 0x12029fda */
  if (C.zf) goto L_12029fda;
  /* 12029fd8 jmp 0x12029fa1 */
  goto L_12029fa1;
L_12029fda:;
  /* 12029fda mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12029fdc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12029fe0 pop edi */
  EDI = (pop32());
  /* 12029fe1 ret  */
  ESPCHK(0x12029f20u, _esp0);
  ESP += 4; return;
L_12029fe2:;
  /* 12029fe2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12029fe5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12029fe9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 12029fed pop edi */
  EDI = (pop32());
  /* 12029fee ret  */
  ESPCHK(0x12029f20u, _esp0);
  ESP += 4; return;
L_12029fef:;
  /* 12029fef mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12029ff2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12029ff6 pop edi */
  EDI = (pop32());
  /* 12029ff7 ret  */
  ESPCHK(0x12029f20u, _esp0);
  ESP += 4; return;
L_12029ff8:;
  /* 12029ff8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12029ffa mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12029ffe pop edi */
  EDI = (pop32());
  /* 12029fff ret  */
  ESPCHK(0x12029f20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a000 @ 0x1202a000 (243 bytes, 91 insns) */
void f_1202a000(void) {
  FTRACE(0x1202a000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202a000 push ebp */
  push32((uint32_t)(EBP));
  /* 1202a001 mov ebp, esp */
  EBP = (ESP);
  /* 1202a003 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202a006 push ebx */
  push32((uint32_t)(EBX));
  /* 1202a007 push esi */
  push32((uint32_t)(ESI));
  /* 1202a008 push edi */
  push32((uint32_t)(EDI));
  /* 1202a009 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1202a00c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1202a00f:;
  /* 1202a00f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a013 jne 0x1202a033 */
  if (!C.zf) goto L_1202a033;
  /* 1202a015 push 0x1204e3a0 */
  push32((uint32_t)(0x1204e3a0u));
  /* 1202a01a push 0 */
  push32((uint32_t)(0x0u));
  /* 1202a01c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1202a01e push 0x1204e3b0 */
  push32((uint32_t)(0x1204e3b0u));
  /* 1202a023 push 2 */
  push32((uint32_t)(0x2u));
  /* 1202a025 call 0x12026020 */
  push32(0x1202a02au); f_12026020();
  /* 1202a02a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202a02d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a030 jne 0x1202a033 */
  if (!C.zf) goto L_1202a033;
  /* 1202a032 int3  */
  x86_unimpl("int3 @ 0x1202a032");
L_1202a033:;
  /* 1202a033 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1202a035 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202a037 jne 0x1202a00f */
  if (!C.zf) goto L_1202a00f;
L_1202a039:;
  /* 1202a039 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a03d jne 0x1202a05d */
  if (!C.zf) goto L_1202a05d;
  /* 1202a03f push 0x1204e384 */
  push32((uint32_t)(0x1204e384u));
  /* 1202a044 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202a046 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 1202a048 push 0x1204e3b0 */
  push32((uint32_t)(0x1204e3b0u));
  /* 1202a04d push 2 */
  push32((uint32_t)(0x2u));
  /* 1202a04f call 0x12026020 */
  push32(0x1202a054u); f_12026020();
  /* 1202a054 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202a057 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a05a jne 0x1202a05d */
  if (!C.zf) goto L_1202a05d;
  /* 1202a05c int3  */
  x86_unimpl("int3 @ 0x1202a05c");
L_1202a05d:;
  /* 1202a05d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1202a05f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202a061 jne 0x1202a039 */
  if (!C.zf) goto L_1202a039;
  /* 1202a063 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202a066 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 1202a06d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202a070 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202a073 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1202a076 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202a079 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202a07c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1202a07e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202a081 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202a084 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1202a087 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1202a08a push ecx */
  push32((uint32_t)(ECX));
  /* 1202a08b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1202a08e push edx */
  push32((uint32_t)(EDX));
  /* 1202a08f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202a092 push eax */
  push32((uint32_t)(EAX));
  /* 1202a093 call 0x1202def0 */
  push32(0x1202a098u); f_1202def0();
  /* 1202a098 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202a09b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1202a09e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202a0a1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1202a0a4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202a0a7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202a0aa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1202a0ad mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202a0b0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a0b4 jl 0x1202a0d8 */
  if ((C.sf!=C.of)) goto L_1202a0d8;
  /* 1202a0b6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202a0b9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1202a0bb mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1202a0be xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1202a0c0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1202a0c6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1202a0c9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202a0cc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1202a0ce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202a0d1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202a0d4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1202a0d6 jmp 0x1202a0e9 */
  goto L_1202a0e9;
L_1202a0d8:;
  /* 1202a0d8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202a0db push edx */
  push32((uint32_t)(EDX));
  /* 1202a0dc push 0 */
  push32((uint32_t)(0x0u));
  /* 1202a0de call 0x1202dc70 */
  push32(0x1202a0e3u); f_1202dc70();
  /* 1202a0e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202a0e6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_1202a0e9:;
  /* 1202a0e9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1202a0ec pop edi */
  EDI = (pop32());
  /* 1202a0ed pop esi */
  ESI = (pop32());
  /* 1202a0ee pop ebx */
  EBX = (pop32());
  /* 1202a0ef mov esp, ebp */
  ESP = (EBP);
  /* 1202a0f1 pop ebp */
  EBP = (pop32());
  /* 1202a0f2 ret  */
  ESPCHK(0x1202a000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a100 @ 0x1202a100 (47 bytes, 17 insns) */
void f_1202a100(void) {
  FTRACE(0x1202a100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202a100 push ecx */
  push32((uint32_t)(ECX));
  /* 1202a101 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a106 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1202a10a jb 0x1202a120 */
  if (C.cf) goto L_1202a120;
L_1202a10c:;
  /* 1202a10c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202a112 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202a117 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1202a119 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a11e jae 0x1202a10c */
  if (!C.cf) goto L_1202a10c;
L_1202a120:;
  /* 1202a120 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202a122 mov eax, esp */
  EAX = (ESP);
  /* 1202a124 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1202a126 mov esp, ecx */
  ESP = (ECX);
  /* 1202a128 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1202a12a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1202a12d push eax */
  push32((uint32_t)(EAX));
  /* 1202a12e ret  */
  ESPCHK(0x1202a100u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a130 @ 0x1202a130 (507 bytes, 151 insns) [1 switch table(s)] */
void f_1202a130(void) {
  FTRACE(0x1202a130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202a130 push ebp */
  push32((uint32_t)(EBP));
  /* 1202a131 mov ebp, esp */
  EBP = (ESP);
  /* 1202a133 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202a136 push esi */
  push32((uint32_t)(ESI));
  /* 1202a137 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a13b je 0x1202a143 */
  if (C.zf) goto L_1202a143;
  /* 1202a13d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a141 jne 0x1202a148 */
  if (!C.zf) goto L_1202a148;
L_1202a143:;
  /* 1202a143 jmp 0x1202a318 */
  goto L_1202a318;
L_1202a148:;
  /* 1202a148 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a14c je 0x1202a164 */
  if (C.zf) goto L_1202a164;
  /* 1202a14e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a152 je 0x1202a164 */
  if (C.zf) goto L_1202a164;
  /* 1202a154 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a158 je 0x1202a164 */
  if (C.zf) goto L_1202a164;
  /* 1202a15a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a15e jne 0x1202a241 */
  if (!C.zf) goto L_1202a241;
L_1202a164:;
  /* 1202a164 push 1 */
  push32((uint32_t)(0x1u));
  /* 1202a166 call 0x1202a960 */
  push32(0x1202a16bu); f_1202a960();
  /* 1202a16b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202a16e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a172 je 0x1202a17a */
  if (C.zf) goto L_1202a17a;
  /* 1202a174 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a178 jne 0x1202a1bf */
  if (!C.zf) goto L_1202a1bf;
L_1202a17a:;
  /* 1202a17a cmp dword ptr [0x1205295c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1205295c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a181 jne 0x1202a1bf */
  if (!C.zf) goto L_1202a1bf;
  /* 1202a183 push 1 */
  push32((uint32_t)(0x1u));
  /* 1202a185 push 0x1202a360 */
  push32((uint32_t)(0x1202a360u));
  /* 1202a18a call dword ptr [0x12055368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055368))), 0x1202a190u);
  /* 1202a190 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a193 jne 0x1202a1a1 */
  if (!C.zf) goto L_1202a1a1;
  /* 1202a195 mov dword ptr [0x1205295c], 1 */
  w32((uint32_t)(0x1205295c), (0x1u));
  /* 1202a19f jmp 0x1202a1bf */
  goto L_1202a1bf;
L_1202a1a1:;
  /* 1202a1a1 call dword ptr [0x120553f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553f0))), 0x1202a1a7u);
  /* 1202a1a7 mov esi, eax */
  ESI = (EAX);
  /* 1202a1a9 call 0x1202ee40 */
  push32(0x1202a1aeu); f_1202ee40();
  /* 1202a1ae mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 1202a1b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1202a1b2 call 0x1202aa00 */
  push32(0x1202a1b7u); f_1202aa00();
  /* 1202a1b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202a1ba jmp 0x1202a318 */
  goto L_1202a318;
L_1202a1bf:;
  /* 1202a1bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202a1c2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1202a1c5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202a1c8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202a1cb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1202a1ce cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a1d2 ja 0x1202a232 */
  if ((!C.cf&&!C.zf)) goto L_1202a232;
  /* 1202a1d4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202a1d7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1202a1d9 mov dl, byte ptr [eax + 0x1202a33f] */
  DL = (r8((uint32_t)(EAX + 0x1202a33f)));
  /* 1202a1df jmp dword ptr [edx*4 + 0x1202a32b] */
  switch (EDX) {
    case 0: goto L_1202a1e6;
    case 1: goto L_1202a220;
    case 2: goto L_1202a1fa;
    case 3: goto L_1202a20d;
    case 4: goto L_1202a232;
    default: x86_unimpl("switch@0x1202a1df out of table"); return;
  }
L_1202a1e6:;
  /* 1202a1e6 mov ecx, dword ptr [0x1205294c] */
  ECX = (r32((uint32_t)(0x1205294c)));
  /* 1202a1ec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1202a1ef mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202a1f2 mov dword ptr [0x1205294c], edx */
  w32((uint32_t)(0x1205294c), (EDX));
  /* 1202a1f8 jmp 0x1202a232 */
  goto L_1202a232;
L_1202a1fa:;
  /* 1202a1fa mov eax, dword ptr [0x12052950] */
  EAX = (r32((uint32_t)(0x12052950)));
  /* 1202a1ff mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1202a202 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202a205 mov dword ptr [0x12052950], ecx */
  w32((uint32_t)(0x12052950), (ECX));
  /* 1202a20b jmp 0x1202a232 */
  goto L_1202a232;
L_1202a20d:;
  /* 1202a20d mov edx, dword ptr [0x12052954] */
  EDX = (r32((uint32_t)(0x12052954)));
  /* 1202a213 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1202a216 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202a219 mov dword ptr [0x12052954], eax */
  w32((uint32_t)(0x12052954), (EAX));
  /* 1202a21e jmp 0x1202a232 */
  goto L_1202a232;
L_1202a220:;
  /* 1202a220 mov ecx, dword ptr [0x12052958] */
  ECX = (r32((uint32_t)(0x12052958)));
  /* 1202a226 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1202a229 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202a22c mov dword ptr [0x12052958], edx */
  w32((uint32_t)(0x12052958), (EDX));
L_1202a232:;
  /* 1202a232 push 1 */
  push32((uint32_t)(0x1u));
  /* 1202a234 call 0x1202aa00 */
  push32(0x1202a239u); f_1202aa00();
  /* 1202a239 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202a23c jmp 0x1202a313 */
  goto L_1202a313;
L_1202a241:;
  /* 1202a241 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a245 je 0x1202a258 */
  if (C.zf) goto L_1202a258;
  /* 1202a247 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a24b je 0x1202a258 */
  if (C.zf) goto L_1202a258;
  /* 1202a24d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a251 je 0x1202a258 */
  if (C.zf) goto L_1202a258;
  /* 1202a253 jmp 0x1202a318 */
  goto L_1202a318;
L_1202a258:;
  /* 1202a258 call 0x120269a0 */
  push32(0x1202a25du); f_120269a0();
  /* 1202a25d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1202a260 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202a263 cmp dword ptr [eax + 0x50], 0x12050c00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x12050c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a26a jne 0x1202a2b5 */
  if (!C.zf) goto L_1202a2b5;
  /* 1202a26c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 1202a271 push 0x1204e3bc */
  push32((uint32_t)(0x1204e3bcu));
  /* 1202a276 push 2 */
  push32((uint32_t)(0x2u));
  /* 1202a278 mov ecx, dword ptr [0x12050c80] */
  ECX = (r32((uint32_t)(0x12050c80)));
  /* 1202a27e push ecx */
  push32((uint32_t)(ECX));
  /* 1202a27f call 0x12026f60 */
  push32(0x1202a284u); f_12026f60();
  /* 1202a284 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202a287 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202a28a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 1202a28d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202a290 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a294 je 0x1202a2b3 */
  if (C.zf) goto L_1202a2b3;
  /* 1202a296 mov ecx, dword ptr [0x12050c80] */
  ECX = (r32((uint32_t)(0x12050c80)));
  /* 1202a29c push ecx */
  push32((uint32_t)(ECX));
  /* 1202a29d push 0x12050c00 */
  push32((uint32_t)(0x12050c00u));
  /* 1202a2a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202a2a5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 1202a2a8 push eax */
  push32((uint32_t)(EAX));
  /* 1202a2a9 call 0x1202d840 */
  push32(0x1202a2aeu); f_1202d840();
  /* 1202a2ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202a2b1 jmp 0x1202a2b5 */
  goto L_1202a2b5;
L_1202a2b3:;
  /* 1202a2b3 jmp 0x1202a318 */
  goto L_1202a318;
L_1202a2b5:;
  /* 1202a2b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202a2b8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1202a2bb push edx */
  push32((uint32_t)(EDX));
  /* 1202a2bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202a2bf push eax */
  push32((uint32_t)(EAX));
  /* 1202a2c0 call 0x1202a640 */
  push32(0x1202a2c5u); f_1202a640();
  /* 1202a2c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202a2c8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1202a2cb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a2cf jne 0x1202a2d3 */
  if (!C.zf) goto L_1202a2d3;
  /* 1202a2d1 jmp 0x1202a318 */
  goto L_1202a318;
L_1202a2d3:;
  /* 1202a2d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202a2d6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1202a2d9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1202a2dc:;
  /* 1202a2dc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202a2df mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1202a2e2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a2e5 jne 0x1202a313 */
  if (!C.zf) goto L_1202a313;
  /* 1202a2e7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202a2ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202a2ed mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1202a2f0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202a2f3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202a2f6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1202a2f9 mov edx, dword ptr [0x12050c84] */
  EDX = (r32((uint32_t)(0x12050c84)));
  /* 1202a2ff imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202a302 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202a305 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 1202a308 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202a30a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a30d jb 0x1202a311 */
  if (C.cf) goto L_1202a311;
  /* 1202a30f jmp 0x1202a313 */
  goto L_1202a313;
L_1202a311:;
  /* 1202a311 jmp 0x1202a2dc */
  goto L_1202a2dc;
L_1202a313:;
  /* 1202a313 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202a316 jmp 0x1202a326 */
  goto L_1202a326;
L_1202a318:;
  /* 1202a318 call 0x1202ee30 */
  push32(0x1202a31du); f_1202ee30();
  /* 1202a31d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 1202a323 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1202a326:;
  /* 1202a326 pop esi */
  ESI = (pop32());
  /* 1202a327 mov esp, ebp */
  ESP = (EBP);
  /* 1202a329 pop ebp */
  EBP = (pop32());
  /* 1202a32a ret  */
  ESPCHK(0x1202a130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a360 @ 0x1202a360 (146 bytes, 45 insns) */
void f_1202a360(void) {
  FTRACE(0x1202a360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202a360 push ebp */
  push32((uint32_t)(EBP));
  /* 1202a361 mov ebp, esp */
  EBP = (ESP);
  /* 1202a363 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202a366 push 1 */
  push32((uint32_t)(0x1u));
  /* 1202a368 call 0x1202a960 */
  push32(0x1202a36du); f_1202a960();
  /* 1202a36d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202a370 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a374 jne 0x1202a38e */
  if (!C.zf) goto L_1202a38e;
  /* 1202a376 mov dword ptr [ebp - 8], 0x1205294c */
  w32((uint32_t)(EBP + -0x8), (0x1205294cu));
  /* 1202a37d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202a380 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1202a382 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1202a385 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1202a38c jmp 0x1202a3a4 */
  goto L_1202a3a4;
L_1202a38e:;
  /* 1202a38e mov dword ptr [ebp - 8], 0x12052950 */
  w32((uint32_t)(EBP + -0x8), (0x12052950u));
  /* 1202a395 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202a398 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1202a39a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1202a39d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_1202a3a4:;
  /* 1202a3a4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a3a8 jne 0x1202a3b8 */
  if (!C.zf) goto L_1202a3b8;
  /* 1202a3aa push 1 */
  push32((uint32_t)(0x1u));
  /* 1202a3ac call 0x1202aa00 */
  push32(0x1202a3b1u); f_1202aa00();
  /* 1202a3b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202a3b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202a3b6 jmp 0x1202a3ec */
  goto L_1202a3ec;
L_1202a3b8:;
  /* 1202a3b8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a3bc je 0x1202a3dd */
  if (C.zf) goto L_1202a3dd;
  /* 1202a3be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202a3c1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 1202a3c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 1202a3c9 call 0x1202aa00 */
  push32(0x1202a3ceu); f_1202aa00();
  /* 1202a3ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202a3d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202a3d4 push edx */
  push32((uint32_t)(EDX));
  /* 1202a3d5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x1202a3d8u);
  /* 1202a3d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202a3db jmp 0x1202a3e7 */
  goto L_1202a3e7;
L_1202a3dd:;
  /* 1202a3dd push 1 */
  push32((uint32_t)(0x1u));
  /* 1202a3df call 0x1202aa00 */
  push32(0x1202a3e4u); f_1202aa00();
  /* 1202a3e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1202a3e7:;
  /* 1202a3e7 mov eax, 1 */
  EAX = (0x1u);
L_1202a3ec:;
  /* 1202a3ec mov esp, ebp */
  ESP = (EBP);
  /* 1202a3ee pop ebp */
  EBP = (pop32());
  /* 1202a3ef ret 4 */
  ESPCHK(0x1202a360u, _esp0);
  ESP += 8; return;
}

/* FUN_1000a400 @ 0x1202a400 (522 bytes, 162 insns) [1 switch table(s)] */
void f_1202a400(void) {
  FTRACE(0x1202a400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202a400 push ebp */
  push32((uint32_t)(EBP));
  /* 1202a401 mov ebp, esp */
  EBP = (ESP);
  /* 1202a403 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202a406 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1202a40d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202a410 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1202a413 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202a416 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202a419 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1202a41c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a420 ja 0x1202a4ce */
  if ((!C.cf&&!C.zf)) goto L_1202a4ce;
  /* 1202a426 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202a429 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1202a42b mov dl, byte ptr [eax + 0x1202a622] */
  DL = (r8((uint32_t)(EAX + 0x1202a622)));
  /* 1202a431 jmp dword ptr [edx*4 + 0x1202a60a] */
  switch (EDX) {
    case 0: goto L_1202a438;
    case 1: goto L_1202a4a3;
    case 2: goto L_1202a489;
    case 3: goto L_1202a455;
    case 4: goto L_1202a46f;
    case 5: goto L_1202a4ce;
    default: x86_unimpl("switch@0x1202a431 out of table"); return;
  }
L_1202a438:;
  /* 1202a438 mov dword ptr [ebp - 0x18], 0x1205294c */
  w32((uint32_t)(EBP + -0x18), (0x1205294cu));
  /* 1202a43f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202a442 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1202a444 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1202a447 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202a44a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202a44d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1202a450 jmp 0x1202a4d6 */
  goto L_1202a4d6;
L_1202a455:;
  /* 1202a455 mov dword ptr [ebp - 0x18], 0x12052950 */
  w32((uint32_t)(EBP + -0x18), (0x12052950u));
  /* 1202a45c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202a45f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1202a461 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1202a464 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202a467 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202a46a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1202a46d jmp 0x1202a4d6 */
  goto L_1202a4d6;
L_1202a46f:;
  /* 1202a46f mov dword ptr [ebp - 0x18], 0x12052954 */
  w32((uint32_t)(EBP + -0x18), (0x12052954u));
  /* 1202a476 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202a479 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1202a47b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1202a47e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202a481 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202a484 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1202a487 jmp 0x1202a4d6 */
  goto L_1202a4d6;
L_1202a489:;
  /* 1202a489 mov dword ptr [ebp - 0x18], 0x12052958 */
  w32((uint32_t)(EBP + -0x18), (0x12052958u));
  /* 1202a490 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202a493 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1202a495 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1202a498 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202a49b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202a49e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1202a4a1 jmp 0x1202a4d6 */
  goto L_1202a4d6;
L_1202a4a3:;
  /* 1202a4a3 call 0x120269a0 */
  push32(0x1202a4a8u); f_120269a0();
  /* 1202a4a8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1202a4ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202a4ae mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1202a4b1 push edx */
  push32((uint32_t)(EDX));
  /* 1202a4b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202a4b5 push eax */
  push32((uint32_t)(EAX));
  /* 1202a4b6 call 0x1202a640 */
  push32(0x1202a4bbu); f_1202a640();
  /* 1202a4bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202a4be add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202a4c1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1202a4c4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202a4c7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1202a4c9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1202a4cc jmp 0x1202a4d6 */
  goto L_1202a4d6;
L_1202a4ce:;
  /* 1202a4ce or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1202a4d1 jmp 0x1202a606 */
  goto L_1202a606;
L_1202a4d6:;
  /* 1202a4d6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a4da je 0x1202a4e6 */
  if (C.zf) goto L_1202a4e6;
  /* 1202a4dc push 1 */
  push32((uint32_t)(0x1u));
  /* 1202a4de call 0x1202a960 */
  push32(0x1202a4e3u); f_1202a960();
  /* 1202a4e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1202a4e6:;
  /* 1202a4e6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a4ea jne 0x1202a503 */
  if (!C.zf) goto L_1202a503;
  /* 1202a4ec cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a4f0 je 0x1202a4fc */
  if (C.zf) goto L_1202a4fc;
  /* 1202a4f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1202a4f4 call 0x1202aa00 */
  push32(0x1202a4f9u); f_1202aa00();
  /* 1202a4f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1202a4fc:;
  /* 1202a4fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202a4fe jmp 0x1202a606 */
  goto L_1202a606;
L_1202a503:;
  /* 1202a503 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a507 jne 0x1202a520 */
  if (!C.zf) goto L_1202a520;
  /* 1202a509 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a50d je 0x1202a519 */
  if (C.zf) goto L_1202a519;
  /* 1202a50f push 1 */
  push32((uint32_t)(0x1u));
  /* 1202a511 call 0x1202aa00 */
  push32(0x1202a516u); f_1202aa00();
  /* 1202a516 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1202a519:;
  /* 1202a519 push 3 */
  push32((uint32_t)(0x3u));
  /* 1202a51b call 0x12026720 */
  push32(0x1202a520u); f_12026720();
L_1202a520:;
  /* 1202a520 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a524 je 0x1202a532 */
  if (C.zf) goto L_1202a532;
  /* 1202a526 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a52a je 0x1202a532 */
  if (C.zf) goto L_1202a532;
  /* 1202a52c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a530 jne 0x1202a55e */
  if (!C.zf) goto L_1202a55e;
L_1202a532:;
  /* 1202a532 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202a535 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1202a538 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1202a53b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202a53e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 1202a545 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a549 jne 0x1202a55e */
  if (!C.zf) goto L_1202a55e;
  /* 1202a54b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202a54e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 1202a551 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1202a554 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202a557 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_1202a55e:;
  /* 1202a55e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a562 jne 0x1202a5a0 */
  if (!C.zf) goto L_1202a5a0;
  /* 1202a564 mov eax, dword ptr [0x12050c78] */
  EAX = (r32((uint32_t)(0x12050c78)));
  /* 1202a569 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1202a56c jmp 0x1202a577 */
  goto L_1202a577;
L_1202a56e:;
  /* 1202a56e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202a571 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202a574 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1202a577:;
  /* 1202a577 mov edx, dword ptr [0x12050c78] */
  EDX = (r32((uint32_t)(0x12050c78)));
  /* 1202a57d add edx, dword ptr [0x12050c7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12050c7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202a583 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a586 jge 0x1202a59e */
  if ((C.sf==C.of)) goto L_1202a59e;
  /* 1202a588 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202a58b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202a58e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202a591 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1202a594 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1202a59c jmp 0x1202a56e */
  goto L_1202a56e;
L_1202a59e:;
  /* 1202a59e jmp 0x1202a5a9 */
  goto L_1202a5a9;
L_1202a5a0:;
  /* 1202a5a0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202a5a3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1202a5a9:;
  /* 1202a5a9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a5ad je 0x1202a5b9 */
  if (C.zf) goto L_1202a5b9;
  /* 1202a5af push 1 */
  push32((uint32_t)(0x1u));
  /* 1202a5b1 call 0x1202aa00 */
  push32(0x1202a5b6u); f_1202aa00();
  /* 1202a5b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1202a5b9:;
  /* 1202a5b9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a5bd jne 0x1202a5d0 */
  if (!C.zf) goto L_1202a5d0;
  /* 1202a5bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202a5c2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 1202a5c5 push edx */
  push32((uint32_t)(EDX));
  /* 1202a5c6 push 8 */
  push32((uint32_t)(0x8u));
  /* 1202a5c8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x1202a5cbu);
  /* 1202a5cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202a5ce jmp 0x1202a5da */
  goto L_1202a5da;
L_1202a5d0:;
  /* 1202a5d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202a5d3 push eax */
  push32((uint32_t)(EAX));
  /* 1202a5d4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x1202a5d7u);
  /* 1202a5d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1202a5da:;
  /* 1202a5da cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a5de je 0x1202a5ec */
  if (C.zf) goto L_1202a5ec;
  /* 1202a5e0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a5e4 je 0x1202a5ec */
  if (C.zf) goto L_1202a5ec;
  /* 1202a5e6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a5ea jne 0x1202a604 */
  if (!C.zf) goto L_1202a604;
L_1202a5ec:;
  /* 1202a5ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202a5ef mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202a5f2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 1202a5f5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a5f9 jne 0x1202a604 */
  if (!C.zf) goto L_1202a604;
  /* 1202a5fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202a5fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202a601 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_1202a604:;
  /* 1202a604 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1202a606:;
  /* 1202a606 mov esp, ebp */
  ESP = (EBP);
  /* 1202a608 pop ebp */
  EBP = (pop32());
  /* 1202a609 ret  */
  ESPCHK(0x1202a400u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a640 @ 0x1202a640 (91 bytes, 35 insns) */
void f_1202a640(void) {
  FTRACE(0x1202a640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202a640 push ebp */
  push32((uint32_t)(EBP));
  /* 1202a641 mov ebp, esp */
  EBP = (ESP);
  /* 1202a643 push ecx */
  push32((uint32_t)(ECX));
  /* 1202a644 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202a647 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1202a64a:;
  /* 1202a64a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202a64d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1202a650 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a653 je 0x1202a673 */
  if (C.zf) goto L_1202a673;
  /* 1202a655 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202a658 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202a65b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1202a65e mov ecx, dword ptr [0x12050c84] */
  ECX = (r32((uint32_t)(0x12050c84)));
  /* 1202a664 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202a667 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202a66a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202a66c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a66f jae 0x1202a673 */
  if (!C.cf) goto L_1202a673;
  /* 1202a671 jmp 0x1202a64a */
  goto L_1202a64a;
L_1202a673:;
  /* 1202a673 mov eax, dword ptr [0x12050c84] */
  EAX = (r32((uint32_t)(0x12050c84)));
  /* 1202a678 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202a67b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202a67e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202a680 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a683 jae 0x1202a695 */
  if (!C.cf) goto L_1202a695;
  /* 1202a685 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202a688 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1202a68b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a68e jne 0x1202a695 */
  if (!C.zf) goto L_1202a695;
  /* 1202a690 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202a693 jmp 0x1202a697 */
  goto L_1202a697;
L_1202a695:;
  /* 1202a695 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1202a697:;
  /* 1202a697 mov esp, ebp */
  ESP = (EBP);
  /* 1202a699 pop ebp */
  EBP = (pop32());
  /* 1202a69a ret  */
  ESPCHK(0x1202a640u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6a0 @ 0x1202a6a0 (13 bytes, 6 insns) */
void f_1202a6a0(void) {
  FTRACE(0x1202a6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202a6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1202a6a1 mov ebp, esp */
  EBP = (ESP);
  /* 1202a6a3 call 0x120269a0 */
  push32(0x1202a6a8u); f_120269a0();
  /* 1202a6a8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202a6ab pop ebp */
  EBP = (pop32());
  /* 1202a6ac ret  */
  ESPCHK(0x1202a6a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6b0 @ 0x1202a6b0 (13 bytes, 6 insns) */
void f_1202a6b0(void) {
  FTRACE(0x1202a6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202a6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1202a6b1 mov ebp, esp */
  EBP = (ESP);
  /* 1202a6b3 call 0x120269a0 */
  push32(0x1202a6b8u); f_120269a0();
  /* 1202a6b8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202a6bb pop ebp */
  EBP = (pop32());
  /* 1202a6bc ret  */
  ESPCHK(0x1202a6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6c0 @ 0x1202a6c0 (187 bytes, 54 insns) */
void f_1202a6c0(void) {
  FTRACE(0x1202a6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202a6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1202a6c1 mov ebp, esp */
  EBP = (ESP);
  /* 1202a6c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202a6c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1202a6cd cmp dword ptr [0x12052960], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052960))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a6d4 jne 0x1202a733 */
  if (!C.zf) goto L_1202a733;
  /* 1202a6d6 push 0x1204d7e8 */
  push32((uint32_t)(0x1204d7e8u));
  /* 1202a6db call dword ptr [0x120553c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553c4))), 0x1202a6e1u);
  /* 1202a6e1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1202a6e4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a6e8 je 0x1202a707 */
  if (C.zf) goto L_1202a707;
  /* 1202a6ea push 0x1204e3ec */
  push32((uint32_t)(0x1204e3ecu));
  /* 1202a6ef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202a6f2 push eax */
  push32((uint32_t)(EAX));
  /* 1202a6f3 call dword ptr [0x120553c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553c0))), 0x1202a6f9u);
  /* 1202a6f9 mov dword ptr [0x12052960], eax */
  w32((uint32_t)(0x12052960), (EAX));
  /* 1202a6fe cmp dword ptr [0x12052960], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052960))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a705 jne 0x1202a70b */
  if (!C.zf) goto L_1202a70b;
L_1202a707:;
  /* 1202a707 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202a709 jmp 0x1202a777 */
  goto L_1202a777;
L_1202a70b:;
  /* 1202a70b push 0x1204e3dc */
  push32((uint32_t)(0x1204e3dcu));
  /* 1202a710 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202a713 push ecx */
  push32((uint32_t)(ECX));
  /* 1202a714 call dword ptr [0x120553c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553c0))), 0x1202a71au);
  /* 1202a71a mov dword ptr [0x12052964], eax */
  w32((uint32_t)(0x12052964), (EAX));
  /* 1202a71f push 0x1204e3c8 */
  push32((uint32_t)(0x1204e3c8u));
  /* 1202a724 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202a727 push edx */
  push32((uint32_t)(EDX));
  /* 1202a728 call dword ptr [0x120553c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553c0))), 0x1202a72eu);
  /* 1202a72e mov dword ptr [0x12052968], eax */
  w32((uint32_t)(0x12052968), (EAX));
L_1202a733:;
  /* 1202a733 cmp dword ptr [0x12052964], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052964))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a73a je 0x1202a745 */
  if (C.zf) goto L_1202a745;
  /* 1202a73c call dword ptr [0x12052964] */
  call_ind((uint32_t)(r32((uint32_t)(0x12052964))), 0x1202a742u);
  /* 1202a742 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1202a745:;
  /* 1202a745 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a749 je 0x1202a761 */
  if (C.zf) goto L_1202a761;
  /* 1202a74b cmp dword ptr [0x12052968], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052968))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a752 je 0x1202a761 */
  if (C.zf) goto L_1202a761;
  /* 1202a754 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202a757 push eax */
  push32((uint32_t)(EAX));
  /* 1202a758 call dword ptr [0x12052968] */
  call_ind((uint32_t)(r32((uint32_t)(0x12052968))), 0x1202a75eu);
  /* 1202a75e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1202a761:;
  /* 1202a761 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1202a764 push ecx */
  push32((uint32_t)(ECX));
  /* 1202a765 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202a768 push edx */
  push32((uint32_t)(EDX));
  /* 1202a769 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202a76c push eax */
  push32((uint32_t)(EAX));
  /* 1202a76d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202a770 push ecx */
  push32((uint32_t)(ECX));
  /* 1202a771 call dword ptr [0x12052960] */
  call_ind((uint32_t)(r32((uint32_t)(0x12052960))), 0x1202a777u);
L_1202a777:;
  /* 1202a777 mov esp, ebp */
  ESP = (EBP);
  /* 1202a779 pop ebp */
  EBP = (pop32());
  /* 1202a77a ret  */
  ESPCHK(0x1202a6c0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x1202a780 (254 bytes, 109 insns) */
void f_1202a780(void) {
  FTRACE(0x1202a780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202a780 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1202a784 push edi */
  push32((uint32_t)(EDI));
  /* 1202a785 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202a787 je 0x1202a803 */
  if (C.zf) goto L_1202a803;
  /* 1202a789 push esi */
  push32((uint32_t)(ESI));
  /* 1202a78a push ebx */
  push32((uint32_t)(EBX));
  /* 1202a78b mov ebx, ecx */
  EBX = (ECX);
  /* 1202a78d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 1202a791 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1202a797 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1202a79b jne 0x1202a7a4 */
  if (!C.zf) goto L_1202a7a4;
  /* 1202a79d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1202a7a0 jne 0x1202a811 */
  if (!C.zf) goto L_1202a811;
  /* 1202a7a2 jmp 0x1202a7c5 */
  goto L_1202a7c5;
L_1202a7a4:;
  /* 1202a7a4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1202a7a6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1202a7a7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1202a7a9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1202a7aa dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1202a7ab je 0x1202a7d2 */
  if (C.zf) goto L_1202a7d2;
  /* 1202a7ad test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1202a7af je 0x1202a7da */
  if (C.zf) goto L_1202a7da;
  /* 1202a7b1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1202a7b7 jne 0x1202a7a4 */
  if (!C.zf) goto L_1202a7a4;
  /* 1202a7b9 mov ebx, ecx */
  EBX = (ECX);
  /* 1202a7bb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1202a7be jne 0x1202a811 */
  if (!C.zf) goto L_1202a811;
L_1202a7c0:;
  /* 1202a7c0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1202a7c3 je 0x1202a7d2 */
  if (C.zf) goto L_1202a7d2;
L_1202a7c5:;
  /* 1202a7c5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1202a7c7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1202a7c8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1202a7ca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1202a7cb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1202a7cd je 0x1202a7fe */
  if (C.zf) goto L_1202a7fe;
  /* 1202a7cf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1202a7d0 jne 0x1202a7c5 */
  if (!C.zf) goto L_1202a7c5;
L_1202a7d2:;
  /* 1202a7d2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1202a7d6 pop ebx */
  EBX = (pop32());
  /* 1202a7d7 pop esi */
  ESI = (pop32());
  /* 1202a7d8 pop edi */
  EDI = (pop32());
  /* 1202a7d9 ret  */
  ESPCHK(0x1202a780u, _esp0);
  ESP += 4; return;
L_1202a7da:;
  /* 1202a7da test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1202a7e0 je 0x1202a7f4 */
  if (C.zf) goto L_1202a7f4;
L_1202a7e2:;
  /* 1202a7e2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1202a7e4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1202a7e5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1202a7e6 je 0x1202a876 */
  if (C.zf) goto L_1202a876;
  /* 1202a7ec test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1202a7f2 jne 0x1202a7e2 */
  if (!C.zf) goto L_1202a7e2;
L_1202a7f4:;
  /* 1202a7f4 mov ebx, ecx */
  EBX = (ECX);
  /* 1202a7f6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1202a7f9 jne 0x1202a867 */
  if (!C.zf) goto L_1202a867;
L_1202a7fb:;
  /* 1202a7fb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1202a7fd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1202a7fe:;
  /* 1202a7fe dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1202a7ff jne 0x1202a7fb */
  if (!C.zf) goto L_1202a7fb;
  /* 1202a801 pop ebx */
  EBX = (pop32());
  /* 1202a802 pop esi */
  ESI = (pop32());
L_1202a803:;
  /* 1202a803 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1202a807 pop edi */
  EDI = (pop32());
  /* 1202a808 ret  */
  ESPCHK(0x1202a780u, _esp0);
  ESP += 4; return;
L_1202a809:;
  /* 1202a809 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1202a80b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1202a80e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1202a80f je 0x1202a7c0 */
  if (C.zf) goto L_1202a7c0;
L_1202a811:;
  /* 1202a811 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1202a816 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1202a818 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202a81a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1202a81d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1202a81f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 1202a821 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1202a824 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1202a829 je 0x1202a809 */
  if (C.zf) goto L_1202a809;
  /* 1202a82b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1202a82d je 0x1202a85b */
  if (C.zf) goto L_1202a85b;
  /* 1202a82f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1202a831 je 0x1202a851 */
  if (C.zf) goto L_1202a851;
  /* 1202a833 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1202a839 je 0x1202a847 */
  if (C.zf) goto L_1202a847;
  /* 1202a83b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 1202a841 jne 0x1202a809 */
  if (!C.zf) goto L_1202a809;
  /* 1202a843 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1202a845 jmp 0x1202a85f */
  goto L_1202a85f;
L_1202a847:;
  /* 1202a847 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1202a84d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1202a84f jmp 0x1202a85f */
  goto L_1202a85f;
L_1202a851:;
  /* 1202a851 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1202a857 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1202a859 jmp 0x1202a85f */
  goto L_1202a85f;
L_1202a85b:;
  /* 1202a85b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1202a85d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1202a85f:;
  /* 1202a85f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1202a862 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202a864 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1202a865 je 0x1202a871 */
  if (C.zf) goto L_1202a871;
L_1202a867:;
  /* 1202a867 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1202a869:;
  /* 1202a869 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1202a86b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1202a86e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1202a86f jne 0x1202a869 */
  if (!C.zf) goto L_1202a869;
L_1202a871:;
  /* 1202a871 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1202a874 jne 0x1202a7fb */
  if (!C.zf) goto L_1202a7fb;
L_1202a876:;
  /* 1202a876 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1202a87a pop ebx */
  EBX = (pop32());
  /* 1202a87b pop esi */
  ESI = (pop32());
  /* 1202a87c pop edi */
  EDI = (pop32());
  /* 1202a87d ret  */
  ESPCHK(0x1202a780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a880 @ 0x1202a880 (55 bytes, 16 insns) */
void f_1202a880(void) {
  FTRACE(0x1202a880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202a880 push ebp */
  push32((uint32_t)(EBP));
  /* 1202a881 mov ebp, esp */
  EBP = (ESP);
  /* 1202a883 mov eax, dword ptr [0x12050b84] */
  EAX = (r32((uint32_t)(0x12050b84)));
  /* 1202a888 push eax */
  push32((uint32_t)(EAX));
  /* 1202a889 call dword ptr [0x12055364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055364))), 0x1202a88fu);
  /* 1202a88f mov ecx, dword ptr [0x12050b74] */
  ECX = (r32((uint32_t)(0x12050b74)));
  /* 1202a895 push ecx */
  push32((uint32_t)(ECX));
  /* 1202a896 call dword ptr [0x12055364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055364))), 0x1202a89cu);
  /* 1202a89c mov edx, dword ptr [0x12050b64] */
  EDX = (r32((uint32_t)(0x12050b64)));
  /* 1202a8a2 push edx */
  push32((uint32_t)(EDX));
  /* 1202a8a3 call dword ptr [0x12055364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055364))), 0x1202a8a9u);
  /* 1202a8a9 mov eax, dword ptr [0x12050b44] */
  EAX = (r32((uint32_t)(0x12050b44)));
  /* 1202a8ae push eax */
  push32((uint32_t)(EAX));
  /* 1202a8af call dword ptr [0x12055364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055364))), 0x1202a8b5u);
  /* 1202a8b5 pop ebp */
  EBP = (pop32());
  /* 1202a8b6 ret  */
  ESPCHK(0x1202a880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a8c0 @ 0x1202a8c0 (159 bytes, 47 insns) */
void f_1202a8c0(void) {
  FTRACE(0x1202a8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202a8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1202a8c1 mov ebp, esp */
  EBP = (ESP);
  /* 1202a8c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1202a8c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1202a8cb jmp 0x1202a8d6 */
  goto L_1202a8d6;
L_1202a8cd:;
  /* 1202a8cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202a8d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202a8d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1202a8d6:;
  /* 1202a8d6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a8da jge 0x1202a929 */
  if ((C.sf==C.of)) goto L_1202a929;
  /* 1202a8dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202a8df cmp dword ptr [ecx*4 + 0x12050b40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12050b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a8e7 je 0x1202a927 */
  if (C.zf) goto L_1202a927;
  /* 1202a8e9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a8ed je 0x1202a927 */
  if (C.zf) goto L_1202a927;
  /* 1202a8ef cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a8f3 je 0x1202a927 */
  if (C.zf) goto L_1202a927;
  /* 1202a8f5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a8f9 je 0x1202a927 */
  if (C.zf) goto L_1202a927;
  /* 1202a8fb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a8ff je 0x1202a927 */
  if (C.zf) goto L_1202a927;
  /* 1202a901 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202a904 mov eax, dword ptr [edx*4 + 0x12050b40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12050b40)));
  /* 1202a90b push eax */
  push32((uint32_t)(EAX));
  /* 1202a90c call dword ptr [0x1205539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205539c))), 0x1202a912u);
  /* 1202a912 push 2 */
  push32((uint32_t)(0x2u));
  /* 1202a914 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202a917 mov edx, dword ptr [ecx*4 + 0x12050b40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12050b40)));
  /* 1202a91e push edx */
  push32((uint32_t)(EDX));
  /* 1202a91f call 0x120279f0 */
  push32(0x1202a924u); f_120279f0();
  /* 1202a924 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1202a927:;
  /* 1202a927 jmp 0x1202a8cd */
  goto L_1202a8cd;
L_1202a929:;
  /* 1202a929 mov eax, dword ptr [0x12050b64] */
  EAX = (r32((uint32_t)(0x12050b64)));
  /* 1202a92e push eax */
  push32((uint32_t)(EAX));
  /* 1202a92f call dword ptr [0x1205539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205539c))), 0x1202a935u);
  /* 1202a935 mov ecx, dword ptr [0x12050b74] */
  ECX = (r32((uint32_t)(0x12050b74)));
  /* 1202a93b push ecx */
  push32((uint32_t)(ECX));
  /* 1202a93c call dword ptr [0x1205539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205539c))), 0x1202a942u);
  /* 1202a942 mov edx, dword ptr [0x12050b84] */
  EDX = (r32((uint32_t)(0x12050b84)));
  /* 1202a948 push edx */
  push32((uint32_t)(EDX));
  /* 1202a949 call dword ptr [0x1205539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205539c))), 0x1202a94fu);
  /* 1202a94f mov eax, dword ptr [0x12050b44] */
  EAX = (r32((uint32_t)(0x12050b44)));
  /* 1202a954 push eax */
  push32((uint32_t)(EAX));
  /* 1202a955 call dword ptr [0x1205539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205539c))), 0x1202a95bu);
  /* 1202a95b mov esp, ebp */
  ESP = (EBP);
  /* 1202a95d pop ebp */
  EBP = (pop32());
  /* 1202a95e ret  */
  ESPCHK(0x1202a8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a960 @ 0x1202a960 (151 bytes, 46 insns) */
void f_1202a960(void) {
  FTRACE(0x1202a960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202a960 push ebp */
  push32((uint32_t)(EBP));
  /* 1202a961 mov ebp, esp */
  EBP = (ESP);
  /* 1202a963 push ecx */
  push32((uint32_t)(ECX));
  /* 1202a964 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202a967 cmp dword ptr [eax*4 + 0x12050b40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12050b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a96f jne 0x1202a9e2 */
  if (!C.zf) goto L_1202a9e2;
  /* 1202a971 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1202a976 push 0x1204e3f8 */
  push32((uint32_t)(0x1204e3f8u));
  /* 1202a97b push 2 */
  push32((uint32_t)(0x2u));
  /* 1202a97d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1202a97f call 0x12026f60 */
  push32(0x1202a984u); f_12026f60();
  /* 1202a984 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202a987 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1202a98a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a98e jne 0x1202a99a */
  if (!C.zf) goto L_1202a99a;
  /* 1202a990 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1202a992 call 0x12025ed0 */
  push32(0x1202a997u); f_12025ed0();
  /* 1202a997 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1202a99a:;
  /* 1202a99a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1202a99c call 0x1202a960 */
  push32(0x1202a9a1u); f_1202a960();
  /* 1202a9a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202a9a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202a9a7 cmp dword ptr [ecx*4 + 0x12050b40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12050b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202a9af jne 0x1202a9ca */
  if (!C.zf) goto L_1202a9ca;
  /* 1202a9b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202a9b4 push edx */
  push32((uint32_t)(EDX));
  /* 1202a9b5 call dword ptr [0x12055364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055364))), 0x1202a9bbu);
  /* 1202a9bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202a9be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202a9c1 mov dword ptr [eax*4 + 0x12050b40], ecx */
  w32((uint32_t)(EAX*4 + 0x12050b40), (ECX));
  /* 1202a9c8 jmp 0x1202a9d8 */
  goto L_1202a9d8;
L_1202a9ca:;
  /* 1202a9ca push 2 */
  push32((uint32_t)(0x2u));
  /* 1202a9cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202a9cf push edx */
  push32((uint32_t)(EDX));
  /* 1202a9d0 call 0x120279f0 */
  push32(0x1202a9d5u); f_120279f0();
  /* 1202a9d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1202a9d8:;
  /* 1202a9d8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1202a9da call 0x1202aa00 */
  push32(0x1202a9dfu); f_1202aa00();
  /* 1202a9df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1202a9e2:;
  /* 1202a9e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202a9e5 mov ecx, dword ptr [eax*4 + 0x12050b40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12050b40)));
  /* 1202a9ec push ecx */
  push32((uint32_t)(ECX));
  /* 1202a9ed call dword ptr [0x12055360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055360))), 0x1202a9f3u);
  /* 1202a9f3 mov esp, ebp */
  ESP = (EBP);
  /* 1202a9f5 pop ebp */
  EBP = (pop32());
  /* 1202a9f6 ret  */
  ESPCHK(0x1202a960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa00 @ 0x1202aa00 (22 bytes, 8 insns) */
void f_1202aa00(void) {
  FTRACE(0x1202aa00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202aa00 push ebp */
  push32((uint32_t)(EBP));
  /* 1202aa01 mov ebp, esp */
  EBP = (ESP);
  /* 1202aa03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202aa06 mov ecx, dword ptr [eax*4 + 0x12050b40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12050b40)));
  /* 1202aa0d push ecx */
  push32((uint32_t)(ECX));
  /* 1202aa0e call dword ptr [0x1205535c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205535c))), 0x1202aa14u);
  /* 1202aa14 pop ebp */
  EBP = (pop32());
  /* 1202aa15 ret  */
  ESPCHK(0x1202aa00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa20 @ 0x1202aa20 (26 bytes, 10 insns) */
void f_1202aa20(void) {
  FTRACE(0x1202aa20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202aa20 push ebp */
  push32((uint32_t)(EBP));
  /* 1202aa21 mov ebp, esp */
  EBP = (ESP);
  /* 1202aa23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202aa26 push eax */
  push32((uint32_t)(EAX));
  /* 1202aa27 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202aa29 call dword ptr [0x12055358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055358))), 0x1202aa2fu);
  /* 1202aa2f push 0xff */
  push32((uint32_t)(0xffu));
  /* 1202aa34 call dword ptr [0x120552dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120552dc))), 0x1202aa3au);
  /* 1202aa3a pop ebp */
  EBP = (pop32());
  /* 1202aa3b ret  */
  ESPCHK(0x1202aa20u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x1202aa40 (446 bytes, 130 insns) */
void f_1202aa40(void) {
  FTRACE(0x1202aa40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202aa40 push ebp */
  push32((uint32_t)(EBP));
  /* 1202aa41 mov ebp, esp */
  EBP = (ESP);
  /* 1202aa43 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202aa46 call 0x120269a0 */
  push32(0x1202aa4bu); f_120269a0();
  /* 1202aa4b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1202aa4e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202aa51 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 1202aa54 push ecx */
  push32((uint32_t)(ECX));
  /* 1202aa55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202aa58 push edx */
  push32((uint32_t)(EDX));
  /* 1202aa59 call 0x1202ac00 */
  push32(0x1202aa5eu); f_1202ac00();
  /* 1202aa5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202aa61 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1202aa64 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202aa68 je 0x1202aa73 */
  if (C.zf) goto L_1202aa73;
  /* 1202aa6a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202aa6d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202aa71 jne 0x1202aa82 */
  if (!C.zf) goto L_1202aa82;
L_1202aa73:;
  /* 1202aa73 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202aa76 push ecx */
  push32((uint32_t)(ECX));
  /* 1202aa77 call dword ptr [0x12055354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055354))), 0x1202aa7du);
  /* 1202aa7d jmp 0x1202abfa */
  goto L_1202abfa;
L_1202aa82:;
  /* 1202aa82 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202aa85 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202aa89 jne 0x1202aa9f */
  if (!C.zf) goto L_1202aa9f;
  /* 1202aa8b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202aa8e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1202aa95 mov eax, 1 */
  EAX = (0x1u);
  /* 1202aa9a jmp 0x1202abfa */
  goto L_1202abfa;
L_1202aa9f:;
  /* 1202aa9f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202aaa2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202aaa6 jne 0x1202aab0 */
  if (!C.zf) goto L_1202aab0;
  /* 1202aaa8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1202aaab jmp 0x1202abfa */
  goto L_1202abfa;
L_1202aab0:;
  /* 1202aab0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202aab3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1202aab6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1202aab9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202aabc mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 1202aabf mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1202aac2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202aac5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202aac8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 1202aacb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202aace cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202aad2 jne 0x1202abd7 */
  if (!C.zf) goto L_1202abd7;
  /* 1202aad8 mov eax, dword ptr [0x12050c78] */
  EAX = (r32((uint32_t)(0x12050c78)));
  /* 1202aadd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1202aae0 jmp 0x1202aaeb */
  goto L_1202aaeb;
L_1202aae2:;
  /* 1202aae2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202aae5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202aae8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1202aaeb:;
  /* 1202aaeb mov edx, dword ptr [0x12050c78] */
  EDX = (r32((uint32_t)(0x12050c78)));
  /* 1202aaf1 add edx, dword ptr [0x12050c7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12050c7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202aaf7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202aafa jge 0x1202ab12 */
  if ((C.sf==C.of)) goto L_1202ab12;
  /* 1202aafc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202aaff imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202ab02 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202ab05 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1202ab08 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1202ab10 jmp 0x1202aae2 */
  goto L_1202aae2;
L_1202ab12:;
  /* 1202ab12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202ab15 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 1202ab18 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1202ab1b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202ab1e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ab24 jne 0x1202ab35 */
  if (!C.zf) goto L_1202ab35;
  /* 1202ab26 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202ab29 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 1202ab30 jmp 0x1202abbd */
  goto L_1202abbd;
L_1202ab35:;
  /* 1202ab35 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202ab38 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ab3e jne 0x1202ab4c */
  if (!C.zf) goto L_1202ab4c;
  /* 1202ab40 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202ab43 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 1202ab4a jmp 0x1202abbd */
  goto L_1202abbd;
L_1202ab4c:;
  /* 1202ab4c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202ab4f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ab55 jne 0x1202ab63 */
  if (!C.zf) goto L_1202ab63;
  /* 1202ab57 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202ab5a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 1202ab61 jmp 0x1202abbd */
  goto L_1202abbd;
L_1202ab63:;
  /* 1202ab63 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202ab66 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ab6c jne 0x1202ab7a */
  if (!C.zf) goto L_1202ab7a;
  /* 1202ab6e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202ab71 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 1202ab78 jmp 0x1202abbd */
  goto L_1202abbd;
L_1202ab7a:;
  /* 1202ab7a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202ab7d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ab83 jne 0x1202ab91 */
  if (!C.zf) goto L_1202ab91;
  /* 1202ab85 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202ab88 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 1202ab8f jmp 0x1202abbd */
  goto L_1202abbd;
L_1202ab91:;
  /* 1202ab91 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202ab94 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ab9a jne 0x1202aba8 */
  if (!C.zf) goto L_1202aba8;
  /* 1202ab9c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202ab9f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 1202aba6 jmp 0x1202abbd */
  goto L_1202abbd;
L_1202aba8:;
  /* 1202aba8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202abab cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202abb1 jne 0x1202abbd */
  if (!C.zf) goto L_1202abbd;
  /* 1202abb3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202abb6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_1202abbd:;
  /* 1202abbd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202abc0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 1202abc3 push edx */
  push32((uint32_t)(EDX));
  /* 1202abc4 push 8 */
  push32((uint32_t)(0x8u));
  /* 1202abc6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1202abc9u);
  /* 1202abc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202abcc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202abcf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202abd2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 1202abd5 jmp 0x1202abee */
  goto L_1202abee;
L_1202abd7:;
  /* 1202abd7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202abda mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 1202abe1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202abe4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1202abe7 push ecx */
  push32((uint32_t)(ECX));
  /* 1202abe8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1202abebu);
  /* 1202abeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1202abee:;
  /* 1202abee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202abf1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202abf4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 1202abf7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1202abfa:;
  /* 1202abfa mov esp, ebp */
  ESP = (EBP);
  /* 1202abfc pop ebp */
  EBP = (pop32());
  /* 1202abfd ret  */
  ESPCHK(0x1202aa40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac00 @ 0x1202ac00 (89 bytes, 35 insns) */
void f_1202ac00(void) {
  FTRACE(0x1202ac00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202ac00 push ebp */
  push32((uint32_t)(EBP));
  /* 1202ac01 mov ebp, esp */
  EBP = (ESP);
  /* 1202ac03 push ecx */
  push32((uint32_t)(ECX));
  /* 1202ac04 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202ac07 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1202ac0a:;
  /* 1202ac0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202ac0d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1202ac0f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ac12 je 0x1202ac32 */
  if (C.zf) goto L_1202ac32;
  /* 1202ac14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202ac17 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ac1a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1202ac1d mov ecx, dword ptr [0x12050c84] */
  ECX = (r32((uint32_t)(0x12050c84)));
  /* 1202ac23 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202ac26 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202ac29 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ac2b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ac2e jae 0x1202ac32 */
  if (!C.cf) goto L_1202ac32;
  /* 1202ac30 jmp 0x1202ac0a */
  goto L_1202ac0a;
L_1202ac32:;
  /* 1202ac32 mov eax, dword ptr [0x12050c84] */
  EAX = (r32((uint32_t)(0x12050c84)));
  /* 1202ac37 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202ac3a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202ac3d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ac3f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ac42 jae 0x1202ac4e */
  if (!C.cf) goto L_1202ac4e;
  /* 1202ac44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202ac47 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1202ac49 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ac4c je 0x1202ac52 */
  if (C.zf) goto L_1202ac52;
L_1202ac4e:;
  /* 1202ac4e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202ac50 jmp 0x1202ac55 */
  goto L_1202ac55;
L_1202ac52:;
  /* 1202ac52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1202ac55:;
  /* 1202ac55 mov esp, ebp */
  ESP = (EBP);
  /* 1202ac57 pop ebp */
  EBP = (pop32());
  /* 1202ac58 ret  */
  ESPCHK(0x1202ac00u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x1202ac60 (48 bytes, 17 insns) */
void f_1202ac60(void) {
  FTRACE(0x1202ac60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202ac60 push ebp */
  push32((uint32_t)(EBP));
  /* 1202ac61 mov ebp, esp */
  EBP = (ESP);
  /* 1202ac63 push ecx */
  push32((uint32_t)(ECX));
  /* 1202ac64 push 9 */
  push32((uint32_t)(0x9u));
  /* 1202ac66 call 0x1202a960 */
  push32(0x1202ac6bu); f_1202a960();
  /* 1202ac6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ac6e mov eax, dword ptr [0x120529d4] */
  EAX = (r32((uint32_t)(0x120529d4)));
  /* 1202ac73 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1202ac76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202ac79 mov dword ptr [0x120529d4], ecx */
  w32((uint32_t)(0x120529d4), (ECX));
  /* 1202ac7f push 9 */
  push32((uint32_t)(0x9u));
  /* 1202ac81 call 0x1202aa00 */
  push32(0x1202ac86u); f_1202aa00();
  /* 1202ac86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ac89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202ac8c mov esp, ebp */
  ESP = (EBP);
  /* 1202ac8e pop ebp */
  EBP = (pop32());
  /* 1202ac8f ret  */
  ESPCHK(0x1202ac60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac90 @ 0x1202ac90 (10 bytes, 5 insns) */
void f_1202ac90(void) {
  FTRACE(0x1202ac90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202ac90 push ebp */
  push32((uint32_t)(EBP));
  /* 1202ac91 mov ebp, esp */
  EBP = (ESP);
  /* 1202ac93 mov eax, dword ptr [0x120529d4] */
  EAX = (r32((uint32_t)(0x120529d4)));
  /* 1202ac98 pop ebp */
  EBP = (pop32());
  /* 1202ac99 ret  */
  ESPCHK(0x1202ac90u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x1202aca0 (45 bytes, 19 insns) */
void f_1202aca0(void) {
  FTRACE(0x1202aca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202aca0 push ebp */
  push32((uint32_t)(EBP));
  /* 1202aca1 mov ebp, esp */
  EBP = (ESP);
  /* 1202aca3 push ecx */
  push32((uint32_t)(ECX));
  /* 1202aca4 mov eax, dword ptr [0x120529d4] */
  EAX = (r32((uint32_t)(0x120529d4)));
  /* 1202aca9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1202acac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202acb0 je 0x1202acc0 */
  if (C.zf) goto L_1202acc0;
  /* 1202acb2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202acb5 push ecx */
  push32((uint32_t)(ECX));
  /* 1202acb6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1202acb9u);
  /* 1202acb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202acbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202acbe jne 0x1202acc4 */
  if (!C.zf) goto L_1202acc4;
L_1202acc0:;
  /* 1202acc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202acc2 jmp 0x1202acc9 */
  goto L_1202acc9;
L_1202acc4:;
  /* 1202acc4 mov eax, 1 */
  EAX = (0x1u);
L_1202acc9:;
  /* 1202acc9 mov esp, ebp */
  ESP = (EBP);
  /* 1202accb pop ebp */
  EBP = (pop32());
  /* 1202accc ret  */
  ESPCHK(0x1202aca0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x1202acd0 (88 bytes, 40 insns) */
void f_1202acd0(void) {
  FTRACE(0x1202acd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202acd0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1202acd4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1202acd8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202acda je 0x1202ad23 */
  if (C.zf) goto L_1202ad23;
  /* 1202acdc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202acde mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 1202ace2 push edi */
  push32((uint32_t)(EDI));
  /* 1202ace3 mov edi, ecx */
  EDI = (ECX);
  /* 1202ace5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ace8 jb 0x1202ad17 */
  if (C.cf) goto L_1202ad17;
  /* 1202acea neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1202acec and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1202acef je 0x1202acf9 */
  if (C.zf) goto L_1202acf9;
  /* 1202acf1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1202acf3:;
  /* 1202acf3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1202acf5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1202acf6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1202acf7 jne 0x1202acf3 */
  if (!C.zf) goto L_1202acf3;
L_1202acf9:;
  /* 1202acf9 mov ecx, eax */
  ECX = (EAX);
  /* 1202acfb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1202acfe add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ad00 mov ecx, eax */
  ECX = (EAX);
  /* 1202ad02 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1202ad05 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ad07 mov ecx, edx */
  ECX = (EDX);
  /* 1202ad09 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1202ad0c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1202ad0f je 0x1202ad17 */
  if (C.zf) goto L_1202ad17;
  /* 1202ad11 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1202ad13 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202ad15 je 0x1202ad1d */
  if (C.zf) goto L_1202ad1d;
L_1202ad17:;
  /* 1202ad17 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1202ad19 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1202ad1a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1202ad1b jne 0x1202ad17 */
  if (!C.zf) goto L_1202ad17;
L_1202ad1d:;
  /* 1202ad1d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1202ad21 pop edi */
  EDI = (pop32());
  /* 1202ad22 ret  */
  ESPCHK(0x1202acd0u, _esp0);
  ESP += 4; return;
L_1202ad23:;
  /* 1202ad23 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1202ad27 ret  */
  ESPCHK(0x1202acd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad30 @ 0x1202ad30 (23 bytes, 10 insns) */
void f_1202ad30(void) {
  FTRACE(0x1202ad30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202ad30 push ebp */
  push32((uint32_t)(EBP));
  /* 1202ad31 mov ebp, esp */
  EBP = (ESP);
  /* 1202ad33 mov eax, dword ptr [0x120529d0] */
  EAX = (r32((uint32_t)(0x120529d0)));
  /* 1202ad38 push eax */
  push32((uint32_t)(EAX));
  /* 1202ad39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202ad3c push ecx */
  push32((uint32_t)(ECX));
  /* 1202ad3d call 0x1202ad50 */
  push32(0x1202ad42u); f_1202ad50();
  /* 1202ad42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ad45 pop ebp */
  EBP = (pop32());
  /* 1202ad46 ret  */
  ESPCHK(0x1202ad30u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x1202ad50 (87 bytes, 34 insns) */
void f_1202ad50(void) {
  FTRACE(0x1202ad50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202ad50 push ebp */
  push32((uint32_t)(EBP));
  /* 1202ad51 mov ebp, esp */
  EBP = (ESP);
  /* 1202ad53 push ecx */
  push32((uint32_t)(ECX));
  /* 1202ad54 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ad58 jbe 0x1202ad5e */
  if ((C.cf||C.zf)) goto L_1202ad5e;
  /* 1202ad5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202ad5c jmp 0x1202ada3 */
  goto L_1202ada3;
L_1202ad5e:;
  /* 1202ad5e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ad62 ja 0x1202ad75 */
  if ((!C.cf&&!C.zf)) goto L_1202ad75;
  /* 1202ad64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202ad67 push eax */
  push32((uint32_t)(EAX));
  /* 1202ad68 call 0x1202adb0 */
  push32(0x1202ad6du); f_1202adb0();
  /* 1202ad6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ad70 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1202ad73 jmp 0x1202ad7c */
  goto L_1202ad7c;
L_1202ad75:;
  /* 1202ad75 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1202ad7c:;
  /* 1202ad7c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ad80 jne 0x1202ad88 */
  if (!C.zf) goto L_1202ad88;
  /* 1202ad82 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ad86 jne 0x1202ad8d */
  if (!C.zf) goto L_1202ad8d;
L_1202ad88:;
  /* 1202ad88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202ad8b jmp 0x1202ada3 */
  goto L_1202ada3;
L_1202ad8d:;
  /* 1202ad8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202ad90 push ecx */
  push32((uint32_t)(ECX));
  /* 1202ad91 call 0x1202aca0 */
  push32(0x1202ad96u); f_1202aca0();
  /* 1202ad96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ad99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202ad9b jne 0x1202ada1 */
  if (!C.zf) goto L_1202ada1;
  /* 1202ad9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202ad9f jmp 0x1202ada3 */
  goto L_1202ada3;
L_1202ada1:;
  /* 1202ada1 jmp 0x1202ad5e */
  goto L_1202ad5e;
L_1202ada3:;
  /* 1202ada3 mov esp, ebp */
  ESP = (EBP);
  /* 1202ada5 pop ebp */
  EBP = (pop32());
  /* 1202ada6 ret  */
  ESPCHK(0x1202ad50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000adb0 @ 0x1202adb0 (109 bytes, 37 insns) */
void f_1202adb0(void) {
  FTRACE(0x1202adb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202adb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1202adb1 mov ebp, esp */
  EBP = (ESP);
  /* 1202adb3 push ecx */
  push32((uint32_t)(ECX));
  /* 1202adb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202adb7 cmp eax, dword ptr [0x12050c94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12050c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202adbd ja 0x1202aded */
  if ((!C.cf&&!C.zf)) goto L_1202aded;
  /* 1202adbf push 9 */
  push32((uint32_t)(0x9u));
  /* 1202adc1 call 0x1202a960 */
  push32(0x1202adc6u); f_1202a960();
  /* 1202adc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202adc9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202adcc push ecx */
  push32((uint32_t)(ECX));
  /* 1202adcd call 0x1202b8f0 */
  push32(0x1202add2u); f_1202b8f0();
  /* 1202add2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202add5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1202add8 push 9 */
  push32((uint32_t)(0x9u));
  /* 1202adda call 0x1202aa00 */
  push32(0x1202addfu); f_1202aa00();
  /* 1202addf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ade2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ade6 je 0x1202aded */
  if (C.zf) goto L_1202aded;
  /* 1202ade8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202adeb jmp 0x1202ae19 */
  goto L_1202ae19;
L_1202aded:;
  /* 1202aded cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202adf1 jne 0x1202adfa */
  if (!C.zf) goto L_1202adfa;
  /* 1202adf3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_1202adfa:;
  /* 1202adfa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202adfd add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ae00 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1202ae03 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1202ae06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202ae09 push eax */
  push32((uint32_t)(EAX));
  /* 1202ae0a push 0 */
  push32((uint32_t)(0x0u));
  /* 1202ae0c mov ecx, dword ptr [0x1205418c] */
  ECX = (r32((uint32_t)(0x1205418c)));
  /* 1202ae12 push ecx */
  push32((uint32_t)(ECX));
  /* 1202ae13 call dword ptr [0x12055350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055350))), 0x1202ae19u);
L_1202ae19:;
  /* 1202ae19 mov esp, ebp */
  ESP = (EBP);
  /* 1202ae1b pop ebp */
  EBP = (pop32());
  /* 1202ae1c ret  */
  ESPCHK(0x1202adb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae20 @ 0x1202ae20 (10 bytes, 5 insns) */
void f_1202ae20(void) {
  FTRACE(0x1202ae20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202ae20 push ebp */
  push32((uint32_t)(EBP));
  /* 1202ae21 mov ebp, esp */
  EBP = (ESP);
  /* 1202ae23 mov eax, 1 */
  EAX = (0x1u);
  /* 1202ae28 pop ebp */
  EBP = (pop32());
  /* 1202ae29 ret  */
  ESPCHK(0x1202ae20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae30 @ 0x1202ae30 (173 bytes, 59 insns) */
void f_1202ae30(void) {
  FTRACE(0x1202ae30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202ae30 push ebp */
  push32((uint32_t)(EBP));
  /* 1202ae31 mov ebp, esp */
  EBP = (ESP);
  /* 1202ae33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202ae36 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ae3a jbe 0x1202ae43 */
  if ((C.cf||C.zf)) goto L_1202ae43;
  /* 1202ae3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202ae3e jmp 0x1202aed9 */
  goto L_1202aed9;
L_1202ae43:;
  /* 1202ae43 push 9 */
  push32((uint32_t)(0x9u));
  /* 1202ae45 call 0x1202a960 */
  push32(0x1202ae4au); f_1202a960();
  /* 1202ae4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ae4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202ae50 push eax */
  push32((uint32_t)(EAX));
  /* 1202ae51 call 0x1202b260 */
  push32(0x1202ae56u); f_1202b260();
  /* 1202ae56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ae59 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1202ae5c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ae60 je 0x1202aea1 */
  if (C.zf) goto L_1202aea1;
  /* 1202ae62 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1202ae69 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202ae6c cmp ecx, dword ptr [0x12050c94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12050c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ae72 ja 0x1202ae92 */
  if ((!C.cf&&!C.zf)) goto L_1202ae92;
  /* 1202ae74 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202ae77 push edx */
  push32((uint32_t)(EDX));
  /* 1202ae78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202ae7b push eax */
  push32((uint32_t)(EAX));
  /* 1202ae7c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202ae7f push ecx */
  push32((uint32_t)(ECX));
  /* 1202ae80 call 0x1202c130 */
  push32(0x1202ae85u); f_1202c130();
  /* 1202ae85 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ae88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202ae8a je 0x1202ae92 */
  if (C.zf) goto L_1202ae92;
  /* 1202ae8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202ae8f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1202ae92:;
  /* 1202ae92 push 9 */
  push32((uint32_t)(0x9u));
  /* 1202ae94 call 0x1202aa00 */
  push32(0x1202ae99u); f_1202aa00();
  /* 1202ae99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ae9c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202ae9f jmp 0x1202aed9 */
  goto L_1202aed9;
L_1202aea1:;
  /* 1202aea1 push 9 */
  push32((uint32_t)(0x9u));
  /* 1202aea3 call 0x1202aa00 */
  push32(0x1202aea8u); f_1202aa00();
  /* 1202aea8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202aeab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202aeaf jne 0x1202aeb8 */
  if (!C.zf) goto L_1202aeb8;
  /* 1202aeb1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1202aeb8:;
  /* 1202aeb8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202aebb add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202aebe and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1202aec0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1202aec3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202aec6 push ecx */
  push32((uint32_t)(ECX));
  /* 1202aec7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202aeca push edx */
  push32((uint32_t)(EDX));
  /* 1202aecb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1202aecd mov eax, dword ptr [0x1205418c] */
  EAX = (r32((uint32_t)(0x1205418c)));
  /* 1202aed2 push eax */
  push32((uint32_t)(EAX));
  /* 1202aed3 call dword ptr [0x1205534c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205534c))), 0x1202aed9u);
L_1202aed9:;
  /* 1202aed9 mov esp, ebp */
  ESP = (EBP);
  /* 1202aedb pop ebp */
  EBP = (pop32());
  /* 1202aedc ret  */
  ESPCHK(0x1202ae30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aee0 @ 0x1202aee0 (490 bytes, 165 insns) */
void f_1202aee0(void) {
  FTRACE(0x1202aee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202aee0 push ebp */
  push32((uint32_t)(EBP));
  /* 1202aee1 mov ebp, esp */
  EBP = (ESP);
  /* 1202aee3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202aee6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202aeea jne 0x1202aefd */
  if (!C.zf) goto L_1202aefd;
  /* 1202aeec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202aeef push eax */
  push32((uint32_t)(EAX));
  /* 1202aef0 call 0x1202ad30 */
  push32(0x1202aef5u); f_1202ad30();
  /* 1202aef5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202aef8 jmp 0x1202b0c6 */
  goto L_1202b0c6;
L_1202aefd:;
  /* 1202aefd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202af01 jne 0x1202af16 */
  if (!C.zf) goto L_1202af16;
  /* 1202af03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202af06 push ecx */
  push32((uint32_t)(ECX));
  /* 1202af07 call 0x1202b0d0 */
  push32(0x1202af0cu); f_1202b0d0();
  /* 1202af0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202af0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202af11 jmp 0x1202b0c6 */
  goto L_1202b0c6;
L_1202af16:;
  /* 1202af16 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1202af1d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202af21 ja 0x1202b099 */
  if ((!C.cf&&!C.zf)) goto L_1202b099;
  /* 1202af27 push 9 */
  push32((uint32_t)(0x9u));
  /* 1202af29 call 0x1202a960 */
  push32(0x1202af2eu); f_1202a960();
  /* 1202af2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202af31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202af34 push edx */
  push32((uint32_t)(EDX));
  /* 1202af35 call 0x1202b260 */
  push32(0x1202af3au); f_1202b260();
  /* 1202af3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202af3d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1202af40 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202af44 je 0x1202b05c */
  if (C.zf) goto L_1202b05c;
  /* 1202af4a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202af4d cmp eax, dword ptr [0x12050c94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12050c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202af53 ja 0x1202afd0 */
  if ((!C.cf&&!C.zf)) goto L_1202afd0;
  /* 1202af55 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202af58 push ecx */
  push32((uint32_t)(ECX));
  /* 1202af59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202af5c push edx */
  push32((uint32_t)(EDX));
  /* 1202af5d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202af60 push eax */
  push32((uint32_t)(EAX));
  /* 1202af61 call 0x1202c130 */
  push32(0x1202af66u); f_1202c130();
  /* 1202af66 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202af69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202af6b je 0x1202af75 */
  if (C.zf) goto L_1202af75;
  /* 1202af6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202af70 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1202af73 jmp 0x1202afd0 */
  goto L_1202afd0;
L_1202af75:;
  /* 1202af75 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202af78 push edx */
  push32((uint32_t)(EDX));
  /* 1202af79 call 0x1202b8f0 */
  push32(0x1202af7eu); f_1202b8f0();
  /* 1202af7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202af81 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1202af84 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202af88 je 0x1202afd0 */
  if (C.zf) goto L_1202afd0;
  /* 1202af8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202af8d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 1202af90 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202af93 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1202af96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202af99 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202af9c jae 0x1202afa6 */
  if (!C.cf) goto L_1202afa6;
  /* 1202af9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202afa1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1202afa4 jmp 0x1202afac */
  goto L_1202afac;
L_1202afa6:;
  /* 1202afa6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202afa9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1202afac:;
  /* 1202afac mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202afaf push edx */
  push32((uint32_t)(EDX));
  /* 1202afb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202afb3 push eax */
  push32((uint32_t)(EAX));
  /* 1202afb4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202afb7 push ecx */
  push32((uint32_t)(ECX));
  /* 1202afb8 call 0x1202d840 */
  push32(0x1202afbdu); f_1202d840();
  /* 1202afbd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202afc0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202afc3 push edx */
  push32((uint32_t)(EDX));
  /* 1202afc4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202afc7 push eax */
  push32((uint32_t)(EAX));
  /* 1202afc8 call 0x1202b320 */
  push32(0x1202afcdu); f_1202b320();
  /* 1202afcd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1202afd0:;
  /* 1202afd0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202afd4 jne 0x1202b050 */
  if (!C.zf) goto L_1202b050;
  /* 1202afd6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202afda jne 0x1202afe3 */
  if (!C.zf) goto L_1202afe3;
  /* 1202afdc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1202afe3:;
  /* 1202afe3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202afe6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202afe9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1202afec mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1202afef mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202aff2 push edx */
  push32((uint32_t)(EDX));
  /* 1202aff3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202aff5 mov eax, dword ptr [0x1205418c] */
  EAX = (r32((uint32_t)(0x1205418c)));
  /* 1202affa push eax */
  push32((uint32_t)(EAX));
  /* 1202affb call dword ptr [0x12055350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055350))), 0x1202b001u);
  /* 1202b001 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1202b004 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202b008 je 0x1202b050 */
  if (C.zf) goto L_1202b050;
  /* 1202b00a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202b00d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1202b010 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202b013 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1202b016 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202b019 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202b01c jae 0x1202b026 */
  if (!C.cf) goto L_1202b026;
  /* 1202b01e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202b021 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1202b024 jmp 0x1202b02c */
  goto L_1202b02c;
L_1202b026:;
  /* 1202b026 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202b029 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1202b02c:;
  /* 1202b02c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202b02f push eax */
  push32((uint32_t)(EAX));
  /* 1202b030 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202b033 push ecx */
  push32((uint32_t)(ECX));
  /* 1202b034 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202b037 push edx */
  push32((uint32_t)(EDX));
  /* 1202b038 call 0x1202d840 */
  push32(0x1202b03du); f_1202d840();
  /* 1202b03d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b040 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202b043 push eax */
  push32((uint32_t)(EAX));
  /* 1202b044 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202b047 push ecx */
  push32((uint32_t)(ECX));
  /* 1202b048 call 0x1202b320 */
  push32(0x1202b04du); f_1202b320();
  /* 1202b04d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1202b050:;
  /* 1202b050 push 9 */
  push32((uint32_t)(0x9u));
  /* 1202b052 call 0x1202aa00 */
  push32(0x1202b057u); f_1202aa00();
  /* 1202b057 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b05a jmp 0x1202b099 */
  goto L_1202b099;
L_1202b05c:;
  /* 1202b05c push 9 */
  push32((uint32_t)(0x9u));
  /* 1202b05e call 0x1202aa00 */
  push32(0x1202b063u); f_1202aa00();
  /* 1202b063 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b066 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202b06a jne 0x1202b073 */
  if (!C.zf) goto L_1202b073;
  /* 1202b06c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1202b073:;
  /* 1202b073 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202b076 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b079 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1202b07c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1202b07f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202b082 push eax */
  push32((uint32_t)(EAX));
  /* 1202b083 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202b086 push ecx */
  push32((uint32_t)(ECX));
  /* 1202b087 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202b089 mov edx, dword ptr [0x1205418c] */
  EDX = (r32((uint32_t)(0x1205418c)));
  /* 1202b08f push edx */
  push32((uint32_t)(EDX));
  /* 1202b090 call dword ptr [0x1205534c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205534c))), 0x1202b096u);
  /* 1202b096 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1202b099:;
  /* 1202b099 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202b09d jne 0x1202b0a8 */
  if (!C.zf) goto L_1202b0a8;
  /* 1202b09f cmp dword ptr [0x120529d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120529d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202b0a6 jne 0x1202b0ad */
  if (!C.zf) goto L_1202b0ad;
L_1202b0a8:;
  /* 1202b0a8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202b0ab jmp 0x1202b0c6 */
  goto L_1202b0c6;
L_1202b0ad:;
  /* 1202b0ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202b0b0 push eax */
  push32((uint32_t)(EAX));
  /* 1202b0b1 call 0x1202aca0 */
  push32(0x1202b0b6u); f_1202aca0();
  /* 1202b0b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b0b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202b0bb jne 0x1202b0c1 */
  if (!C.zf) goto L_1202b0c1;
  /* 1202b0bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202b0bf jmp 0x1202b0c6 */
  goto L_1202b0c6;
L_1202b0c1:;
  /* 1202b0c1 jmp 0x1202af16 */
  goto L_1202af16;
L_1202b0c6:;
  /* 1202b0c6 mov esp, ebp */
  ESP = (EBP);
  /* 1202b0c8 pop ebp */
  EBP = (pop32());
  /* 1202b0c9 ret  */
  ESPCHK(0x1202aee0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b0d0 @ 0x1202b0d0 (104 bytes, 38 insns) */
void f_1202b0d0(void) {
  FTRACE(0x1202b0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202b0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1202b0d1 mov ebp, esp */
  EBP = (ESP);
  /* 1202b0d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1202b0d4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202b0d8 jne 0x1202b0dc */
  if (!C.zf) goto L_1202b0dc;
  /* 1202b0da jmp 0x1202b134 */
  goto L_1202b134;
L_1202b0dc:;
  /* 1202b0dc push 9 */
  push32((uint32_t)(0x9u));
  /* 1202b0de call 0x1202a960 */
  push32(0x1202b0e3u); f_1202a960();
  /* 1202b0e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b0e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202b0e9 push eax */
  push32((uint32_t)(EAX));
  /* 1202b0ea call 0x1202b260 */
  push32(0x1202b0efu); f_1202b260();
  /* 1202b0ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b0f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1202b0f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202b0f9 je 0x1202b117 */
  if (C.zf) goto L_1202b117;
  /* 1202b0fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202b0fe push ecx */
  push32((uint32_t)(ECX));
  /* 1202b0ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202b102 push edx */
  push32((uint32_t)(EDX));
  /* 1202b103 call 0x1202b320 */
  push32(0x1202b108u); f_1202b320();
  /* 1202b108 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b10b push 9 */
  push32((uint32_t)(0x9u));
  /* 1202b10d call 0x1202aa00 */
  push32(0x1202b112u); f_1202aa00();
  /* 1202b112 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b115 jmp 0x1202b134 */
  goto L_1202b134;
L_1202b117:;
  /* 1202b117 push 9 */
  push32((uint32_t)(0x9u));
  /* 1202b119 call 0x1202aa00 */
  push32(0x1202b11eu); f_1202aa00();
  /* 1202b11e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b121 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202b124 push eax */
  push32((uint32_t)(EAX));
  /* 1202b125 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202b127 mov ecx, dword ptr [0x1205418c] */
  ECX = (r32((uint32_t)(0x1205418c)));
  /* 1202b12d push ecx */
  push32((uint32_t)(ECX));
  /* 1202b12e call dword ptr [0x12055370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055370))), 0x1202b134u);
L_1202b134:;
  /* 1202b134 mov esp, ebp */
  ESP = (EBP);
  /* 1202b136 pop ebp */
  EBP = (pop32());
  /* 1202b137 ret  */
  ESPCHK(0x1202b0d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b140 @ 0x1202b140 (116 bytes, 34 insns) */
void f_1202b140(void) {
  FTRACE(0x1202b140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202b140 push ebp */
  push32((uint32_t)(EBP));
  /* 1202b141 mov ebp, esp */
  EBP = (ESP);
  /* 1202b143 push ecx */
  push32((uint32_t)(ECX));
  /* 1202b144 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 1202b14b push 9 */
  push32((uint32_t)(0x9u));
  /* 1202b14d call 0x1202a960 */
  push32(0x1202b152u); f_1202a960();
  /* 1202b152 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b155 call 0x1202c850 */
  push32(0x1202b15au); f_1202c850();
  /* 1202b15a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202b15c jge 0x1202b165 */
  if ((C.sf==C.of)) goto L_1202b165;
  /* 1202b15e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1202b165:;
  /* 1202b165 push 9 */
  push32((uint32_t)(0x9u));
  /* 1202b167 call 0x1202aa00 */
  push32(0x1202b16cu); f_1202aa00();
  /* 1202b16c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b16f push 0 */
  push32((uint32_t)(0x0u));
  /* 1202b171 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202b173 mov eax, dword ptr [0x1205418c] */
  EAX = (r32((uint32_t)(0x1205418c)));
  /* 1202b178 push eax */
  push32((uint32_t)(EAX));
  /* 1202b179 call dword ptr [0x12055390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055390))), 0x1202b17fu);
  /* 1202b17f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202b181 jne 0x1202b1ad */
  if (!C.zf) goto L_1202b1ad;
  /* 1202b183 call dword ptr [0x120553f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553f0))), 0x1202b189u);
  /* 1202b189 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202b18c jne 0x1202b1a6 */
  if (!C.zf) goto L_1202b1a6;
  /* 1202b18e call 0x1202ee40 */
  push32(0x1202b193u); f_1202ee40();
  /* 1202b193 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 1202b199 call 0x1202ee30 */
  push32(0x1202b19eu); f_1202ee30();
  /* 1202b19e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 1202b1a4 jmp 0x1202b1ad */
  goto L_1202b1ad;
L_1202b1a6:;
  /* 1202b1a6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1202b1ad:;
  /* 1202b1ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202b1b0 mov esp, ebp */
  ESP = (EBP);
  /* 1202b1b2 pop ebp */
  EBP = (pop32());
  /* 1202b1b3 ret  */
  ESPCHK(0x1202b140u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1c0 @ 0x1202b1c0 (10 bytes, 5 insns) */
void f_1202b1c0(void) {
  FTRACE(0x1202b1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202b1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1202b1c1 mov ebp, esp */
  EBP = (ESP);
  /* 1202b1c3 call 0x1202b140 */
  push32(0x1202b1c8u); f_1202b140();
  /* 1202b1c8 pop ebp */
  EBP = (pop32());
  /* 1202b1c9 ret  */
  ESPCHK(0x1202b1c0u, _esp0);
  ESP += 4; return;
}

