#include "recomp.h"

/* OnInit @ 0x11b31005 (5 bytes, 1 insns) */
void f_11b31005(void) {
  FTRACE(0x11b31005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b31005 jmp 0x11b31030 */
  f_11b31030(); return;
}

/* thunk_FUN_100020d0 @ 0x11b3100a (5 bytes, 1 insns) */
void f_11b3100a(void) {
  FTRACE(0x11b3100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3100a jmp 0x11b320d0 */
  f_11b320d0(); return;
}

/* ProcessScenary @ 0x11b3100f (5 bytes, 1 insns) */
void f_11b3100f(void) {
  FTRACE(0x11b3100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3100f jmp 0x11b32130 */
  f_11b32130(); return;
}

/* FUN_10001030 @ 0x11b31030 (3393 bytes, 903 insns) */
void f_11b31030(void) {
  FTRACE(0x11b31030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b31030 push ebp */
  push32((uint32_t)(EBP));
  /* 11b31031 mov ebp, esp */
  EBP = (ESP);
  /* 11b31033 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b31036 push ebx */
  push32((uint32_t)(EBX));
  /* 11b31037 push esi */
  push32((uint32_t)(ESI));
  /* 11b31038 push edi */
  push32((uint32_t)(EDI));
  /* 11b31039 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 11b3103c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11b31041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b31046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b31048 mov esi, esp */
  ESI = (ESP);
  /* 11b3104a push 0x11b62344 */
  push32((uint32_t)(0x11b62344u));
  /* 11b3104f push 0x11b67828 */
  push32((uint32_t)(0x11b67828u));
  /* 11b31054 call dword ptr [0x11b6a514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a514))), 0x11b3105au);
  /* 11b3105a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3105d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3105f call 0x11b36000 */
  push32(0x11b31064u); f_11b36000();
  /* 11b31064 mov esi, esp */
  ESI = (ESP);
  /* 11b31066 push 0x11b6233c */
  push32((uint32_t)(0x11b6233cu));
  /* 11b3106b push 0x11b67820 */
  push32((uint32_t)(0x11b67820u));
  /* 11b31070 call dword ptr [0x11b6a514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a514))), 0x11b31076u);
  /* 11b31076 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31079 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3107b call 0x11b36000 */
  push32(0x11b31080u); f_11b36000();
  /* 11b31080 mov esi, esp */
  ESI = (ESP);
  /* 11b31082 push 0x11b62330 */
  push32((uint32_t)(0x11b62330u));
  /* 11b31087 push 0x11b67858 */
  push32((uint32_t)(0x11b67858u));
  /* 11b3108c call dword ptr [0x11b6a514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a514))), 0x11b31092u);
  /* 11b31092 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31095 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31097 call 0x11b36000 */
  push32(0x11b3109cu); f_11b36000();
  /* 11b3109c mov esi, esp */
  ESI = (ESP);
  /* 11b3109e push 0x11b62324 */
  push32((uint32_t)(0x11b62324u));
  /* 11b310a3 push 0x11b67850 */
  push32((uint32_t)(0x11b67850u));
  /* 11b310a8 call dword ptr [0x11b6a514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a514))), 0x11b310aeu);
  /* 11b310ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b310b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b310b3 call 0x11b36000 */
  push32(0x11b310b8u); f_11b36000();
  /* 11b310b8 mov esi, esp */
  ESI = (ESP);
  /* 11b310ba push 0x11b62318 */
  push32((uint32_t)(0x11b62318u));
  /* 11b310bf push 0x11b67848 */
  push32((uint32_t)(0x11b67848u));
  /* 11b310c4 call dword ptr [0x11b6a514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a514))), 0x11b310cau);
  /* 11b310ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b310cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b310cf call 0x11b36000 */
  push32(0x11b310d4u); f_11b36000();
  /* 11b310d4 mov esi, esp */
  ESI = (ESP);
  /* 11b310d6 push 0x11b6230c */
  push32((uint32_t)(0x11b6230cu));
  /* 11b310db push 0x11b67840 */
  push32((uint32_t)(0x11b67840u));
  /* 11b310e0 call dword ptr [0x11b6a514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a514))), 0x11b310e6u);
  /* 11b310e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b310e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b310eb call 0x11b36000 */
  push32(0x11b310f0u); f_11b36000();
  /* 11b310f0 mov esi, esp */
  ESI = (ESP);
  /* 11b310f2 push 0x11b62300 */
  push32((uint32_t)(0x11b62300u));
  /* 11b310f7 push 0x11b67838 */
  push32((uint32_t)(0x11b67838u));
  /* 11b310fc call dword ptr [0x11b6a514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a514))), 0x11b31102u);
  /* 11b31102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31107 call 0x11b36000 */
  push32(0x11b3110cu); f_11b36000();
  /* 11b3110c mov esi, esp */
  ESI = (ESP);
  /* 11b3110e push 0x11b622f8 */
  push32((uint32_t)(0x11b622f8u));
  /* 11b31113 push 0x11b67948 */
  push32((uint32_t)(0x11b67948u));
  /* 11b31118 call dword ptr [0x11b6a514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a514))), 0x11b3111eu);
  /* 11b3111e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31121 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31123 call 0x11b36000 */
  push32(0x11b31128u); f_11b36000();
  /* 11b31128 mov esi, esp */
  ESI = (ESP);
  /* 11b3112a push 0x11b622f0 */
  push32((uint32_t)(0x11b622f0u));
  /* 11b3112f push 0x11b67940 */
  push32((uint32_t)(0x11b67940u));
  /* 11b31134 call dword ptr [0x11b6a514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a514))), 0x11b3113au);
  /* 11b3113a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3113d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3113f call 0x11b36000 */
  push32(0x11b31144u); f_11b36000();
  /* 11b31144 mov esi, esp */
  ESI = (ESP);
  /* 11b31146 push 0x11b622e8 */
  push32((uint32_t)(0x11b622e8u));
  /* 11b3114b push 0x11b67870 */
  push32((uint32_t)(0x11b67870u));
  /* 11b31150 call dword ptr [0x11b6a514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a514))), 0x11b31156u);
  /* 11b31156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3115b call 0x11b36000 */
  push32(0x11b31160u); f_11b36000();
  /* 11b31160 mov esi, esp */
  ESI = (ESP);
  /* 11b31162 push 0x11b622e0 */
  push32((uint32_t)(0x11b622e0u));
  /* 11b31167 push 0x11b67a30 */
  push32((uint32_t)(0x11b67a30u));
  /* 11b3116c call dword ptr [0x11b6a514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a514))), 0x11b31172u);
  /* 11b31172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31177 call 0x11b36000 */
  push32(0x11b3117cu); f_11b36000();
  /* 11b3117c mov esi, esp */
  ESI = (ESP);
  /* 11b3117e push 0x11b622d8 */
  push32((uint32_t)(0x11b622d8u));
  /* 11b31183 push 0x11b67a38 */
  push32((uint32_t)(0x11b67a38u));
  /* 11b31188 call dword ptr [0x11b6a514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a514))), 0x11b3118eu);
  /* 11b3118e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31191 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31193 call 0x11b36000 */
  push32(0x11b31198u); f_11b36000();
  /* 11b31198 mov esi, esp */
  ESI = (ESP);
  /* 11b3119a push 0x11b622d0 */
  push32((uint32_t)(0x11b622d0u));
  /* 11b3119f push 0x11b677f0 */
  push32((uint32_t)(0x11b677f0u));
  /* 11b311a4 call dword ptr [0x11b6a514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a514))), 0x11b311aau);
  /* 11b311aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b311ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b311af call 0x11b36000 */
  push32(0x11b311b4u); f_11b36000();
  /* 11b311b4 mov esi, esp */
  ESI = (ESP);
  /* 11b311b6 push 0x11b622c8 */
  push32((uint32_t)(0x11b622c8u));
  /* 11b311bb push 0x11b677f8 */
  push32((uint32_t)(0x11b677f8u));
  /* 11b311c0 call dword ptr [0x11b6a514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a514))), 0x11b311c6u);
  /* 11b311c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b311c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b311cb call 0x11b36000 */
  push32(0x11b311d0u); f_11b36000();
  /* 11b311d0 mov esi, esp */
  ESI = (ESP);
  /* 11b311d2 push 0x11b622c0 */
  push32((uint32_t)(0x11b622c0u));
  /* 11b311d7 push 0x11b67960 */
  push32((uint32_t)(0x11b67960u));
  /* 11b311dc call dword ptr [0x11b6a518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a518))), 0x11b311e2u);
  /* 11b311e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b311e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b311e7 call 0x11b36000 */
  push32(0x11b311ecu); f_11b36000();
  /* 11b311ec mov esi, esp */
  ESI = (ESP);
  /* 11b311ee push 0x11b622b4 */
  push32((uint32_t)(0x11b622b4u));
  /* 11b311f3 push 0x11b679f0 */
  push32((uint32_t)(0x11b679f0u));
  /* 11b311f8 call dword ptr [0x11b6a518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a518))), 0x11b311feu);
  /* 11b311fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31201 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31203 call 0x11b36000 */
  push32(0x11b31208u); f_11b36000();
  /* 11b31208 mov esi, esp */
  ESI = (ESP);
  /* 11b3120a push 0x11b622ac */
  push32((uint32_t)(0x11b622acu));
  /* 11b3120f push 0x11b67950 */
  push32((uint32_t)(0x11b67950u));
  /* 11b31214 call dword ptr [0x11b6a518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a518))), 0x11b3121au);
  /* 11b3121a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3121d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3121f call 0x11b36000 */
  push32(0x11b31224u); f_11b36000();
  /* 11b31224 mov esi, esp */
  ESI = (ESP);
  /* 11b31226 push 0x11b622a0 */
  push32((uint32_t)(0x11b622a0u));
  /* 11b3122b push 0x11b679f8 */
  push32((uint32_t)(0x11b679f8u));
  /* 11b31230 call dword ptr [0x11b6a518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a518))), 0x11b31236u);
  /* 11b31236 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31239 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3123b call 0x11b36000 */
  push32(0x11b31240u); f_11b36000();
  /* 11b31240 mov esi, esp */
  ESI = (ESP);
  /* 11b31242 push 0x11b62294 */
  push32((uint32_t)(0x11b62294u));
  /* 11b31247 push 0x11b67a00 */
  push32((uint32_t)(0x11b67a00u));
  /* 11b3124c call dword ptr [0x11b6a518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a518))), 0x11b31252u);
  /* 11b31252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31257 call 0x11b36000 */
  push32(0x11b3125cu); f_11b36000();
  /* 11b3125c mov esi, esp */
  ESI = (ESP);
  /* 11b3125e push 0x11b6228c */
  push32((uint32_t)(0x11b6228cu));
  /* 11b31263 push 0x11b67958 */
  push32((uint32_t)(0x11b67958u));
  /* 11b31268 call dword ptr [0x11b6a518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a518))), 0x11b3126eu);
  /* 11b3126e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31271 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31273 call 0x11b36000 */
  push32(0x11b31278u); f_11b36000();
  /* 11b31278 mov esi, esp */
  ESI = (ESP);
  /* 11b3127a push 0x11b62280 */
  push32((uint32_t)(0x11b62280u));
  /* 11b3127f push 0x11b67a08 */
  push32((uint32_t)(0x11b67a08u));
  /* 11b31284 call dword ptr [0x11b6a518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a518))), 0x11b3128au);
  /* 11b3128a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3128d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3128f call 0x11b36000 */
  push32(0x11b31294u); f_11b36000();
  /* 11b31294 mov esi, esp */
  ESI = (ESP);
  /* 11b31296 push 0x11b62274 */
  push32((uint32_t)(0x11b62274u));
  /* 11b3129b push 0x11b67a10 */
  push32((uint32_t)(0x11b67a10u));
  /* 11b312a0 call dword ptr [0x11b6a518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a518))), 0x11b312a6u);
  /* 11b312a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b312a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b312ab call 0x11b36000 */
  push32(0x11b312b0u); f_11b36000();
  /* 11b312b0 mov esi, esp */
  ESI = (ESP);
  /* 11b312b2 push 0x11b6226c */
  push32((uint32_t)(0x11b6226cu));
  /* 11b312b7 push 0x11b67910 */
  push32((uint32_t)(0x11b67910u));
  /* 11b312bc call dword ptr [0x11b6a518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a518))), 0x11b312c2u);
  /* 11b312c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b312c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b312c7 call 0x11b36000 */
  push32(0x11b312ccu); f_11b36000();
  /* 11b312cc mov esi, esp */
  ESI = (ESP);
  /* 11b312ce push 0x11b62264 */
  push32((uint32_t)(0x11b62264u));
  /* 11b312d3 push 0x11b679b8 */
  push32((uint32_t)(0x11b679b8u));
  /* 11b312d8 call dword ptr [0x11b6a518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a518))), 0x11b312deu);
  /* 11b312de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b312e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b312e3 call 0x11b36000 */
  push32(0x11b312e8u); f_11b36000();
  /* 11b312e8 mov esi, esp */
  ESI = (ESP);
  /* 11b312ea push 0x11b6225c */
  push32((uint32_t)(0x11b6225cu));
  /* 11b312ef push 0x11b679c0 */
  push32((uint32_t)(0x11b679c0u));
  /* 11b312f4 call dword ptr [0x11b6a518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a518))), 0x11b312fau);
  /* 11b312fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b312fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b312ff call 0x11b36000 */
  push32(0x11b31304u); f_11b36000();
  /* 11b31304 mov esi, esp */
  ESI = (ESP);
  /* 11b31306 push 0x11b62254 */
  push32((uint32_t)(0x11b62254u));
  /* 11b3130b push 0x11b679c8 */
  push32((uint32_t)(0x11b679c8u));
  /* 11b31310 call dword ptr [0x11b6a518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a518))), 0x11b31316u);
  /* 11b31316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31319 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3131b call 0x11b36000 */
  push32(0x11b31320u); f_11b36000();
  /* 11b31320 mov esi, esp */
  ESI = (ESP);
  /* 11b31322 push 0x11b6224c */
  push32((uint32_t)(0x11b6224cu));
  /* 11b31327 push 0x11b679d0 */
  push32((uint32_t)(0x11b679d0u));
  /* 11b3132c call dword ptr [0x11b6a518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a518))), 0x11b31332u);
  /* 11b31332 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31335 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31337 call 0x11b36000 */
  push32(0x11b3133cu); f_11b36000();
  /* 11b3133c mov esi, esp */
  ESI = (ESP);
  /* 11b3133e push 0x11b62240 */
  push32((uint32_t)(0x11b62240u));
  /* 11b31343 push 0x11b67980 */
  push32((uint32_t)(0x11b67980u));
  /* 11b31348 call dword ptr [0x11b6a518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a518))), 0x11b3134eu);
  /* 11b3134e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31351 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31353 call 0x11b36000 */
  push32(0x11b31358u); f_11b36000();
  /* 11b31358 mov esi, esp */
  ESI = (ESP);
  /* 11b3135a push 0x11b62234 */
  push32((uint32_t)(0x11b62234u));
  /* 11b3135f push 0x11b67988 */
  push32((uint32_t)(0x11b67988u));
  /* 11b31364 call dword ptr [0x11b6a518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a518))), 0x11b3136au);
  /* 11b3136a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3136d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3136f call 0x11b36000 */
  push32(0x11b31374u); f_11b36000();
  /* 11b31374 mov esi, esp */
  ESI = (ESP);
  /* 11b31376 push 0x11b62228 */
  push32((uint32_t)(0x11b62228u));
  /* 11b3137b push 0x11b67970 */
  push32((uint32_t)(0x11b67970u));
  /* 11b31380 call dword ptr [0x11b6a518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a518))), 0x11b31386u);
  /* 11b31386 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31389 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3138b call 0x11b36000 */
  push32(0x11b31390u); f_11b36000();
  /* 11b31390 mov esi, esp */
  ESI = (ESP);
  /* 11b31392 push 0x11b6221c */
  push32((uint32_t)(0x11b6221cu));
  /* 11b31397 push 0x11b67978 */
  push32((uint32_t)(0x11b67978u));
  /* 11b3139c call dword ptr [0x11b6a518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a518))), 0x11b313a2u);
  /* 11b313a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b313a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b313a7 call 0x11b36000 */
  push32(0x11b313acu); f_11b36000();
  /* 11b313ac mov esi, esp */
  ESI = (ESP);
  /* 11b313ae push 0x11b62210 */
  push32((uint32_t)(0x11b62210u));
  /* 11b313b3 push 0x11b679a0 */
  push32((uint32_t)(0x11b679a0u));
  /* 11b313b8 call dword ptr [0x11b6a518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a518))), 0x11b313beu);
  /* 11b313be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b313c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b313c3 call 0x11b36000 */
  push32(0x11b313c8u); f_11b36000();
  /* 11b313c8 mov esi, esp */
  ESI = (ESP);
  /* 11b313ca push 0x11b62204 */
  push32((uint32_t)(0x11b62204u));
  /* 11b313cf push 0x11b679a8 */
  push32((uint32_t)(0x11b679a8u));
  /* 11b313d4 call dword ptr [0x11b6a518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a518))), 0x11b313dau);
  /* 11b313da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b313dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b313df call 0x11b36000 */
  push32(0x11b313e4u); f_11b36000();
  /* 11b313e4 mov esi, esp */
  ESI = (ESP);
  /* 11b313e6 push 0x11b621f8 */
  push32((uint32_t)(0x11b621f8u));
  /* 11b313eb push 0x11b67990 */
  push32((uint32_t)(0x11b67990u));
  /* 11b313f0 call dword ptr [0x11b6a518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a518))), 0x11b313f6u);
  /* 11b313f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b313f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b313fb call 0x11b36000 */
  push32(0x11b31400u); f_11b36000();
  /* 11b31400 mov esi, esp */
  ESI = (ESP);
  /* 11b31402 push 0x11b621ec */
  push32((uint32_t)(0x11b621ecu));
  /* 11b31407 push 0x11b67998 */
  push32((uint32_t)(0x11b67998u));
  /* 11b3140c call dword ptr [0x11b6a518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a518))), 0x11b31412u);
  /* 11b31412 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31415 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31417 call 0x11b36000 */
  push32(0x11b3141cu); f_11b36000();
  /* 11b3141c mov esi, esp */
  ESI = (ESP);
  /* 11b3141e push 0x11b621e0 */
  push32((uint32_t)(0x11b621e0u));
  /* 11b31423 push 0x11b679b0 */
  push32((uint32_t)(0x11b679b0u));
  /* 11b31428 call dword ptr [0x11b6a518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a518))), 0x11b3142eu);
  /* 11b3142e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31431 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31433 call 0x11b36000 */
  push32(0x11b31438u); f_11b36000();
  /* 11b31438 mov esi, esp */
  ESI = (ESP);
  /* 11b3143a push 0x11b621d4 */
  push32((uint32_t)(0x11b621d4u));
  /* 11b3143f push 0x11b67a28 */
  push32((uint32_t)(0x11b67a28u));
  /* 11b31444 call dword ptr [0x11b6a518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a518))), 0x11b3144au);
  /* 11b3144a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3144d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3144f call 0x11b36000 */
  push32(0x11b31454u); f_11b36000();
  /* 11b31454 mov esi, esp */
  ESI = (ESP);
  /* 11b31456 push 0x11b621c8 */
  push32((uint32_t)(0x11b621c8u));
  /* 11b3145b push 0x11b67a20 */
  push32((uint32_t)(0x11b67a20u));
  /* 11b31460 call dword ptr [0x11b6a518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a518))), 0x11b31466u);
  /* 11b31466 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31469 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3146b call 0x11b36000 */
  push32(0x11b31470u); f_11b36000();
  /* 11b31470 mov esi, esp */
  ESI = (ESP);
  /* 11b31472 push 0x11b621bc */
  push32((uint32_t)(0x11b621bcu));
  /* 11b31477 push 0x11b67a18 */
  push32((uint32_t)(0x11b67a18u));
  /* 11b3147c call dword ptr [0x11b6a518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a518))), 0x11b31482u);
  /* 11b31482 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31485 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31487 call 0x11b36000 */
  push32(0x11b3148cu); f_11b36000();
  /* 11b3148c mov esi, esp */
  ESI = (ESP);
  /* 11b3148e push 0x11b621b0 */
  push32((uint32_t)(0x11b621b0u));
  /* 11b31493 push 0x11b677b0 */
  push32((uint32_t)(0x11b677b0u));
  /* 11b31498 call dword ptr [0x11b6a518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a518))), 0x11b3149eu);
  /* 11b3149e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b314a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b314a3 call 0x11b36000 */
  push32(0x11b314a8u); f_11b36000();
  /* 11b314a8 mov esi, esp */
  ESI = (ESP);
  /* 11b314aa push 0x11b621a4 */
  push32((uint32_t)(0x11b621a4u));
  /* 11b314af push 0x11b677b8 */
  push32((uint32_t)(0x11b677b8u));
  /* 11b314b4 call dword ptr [0x11b6a518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a518))), 0x11b314bau);
  /* 11b314ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b314bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b314bf call 0x11b36000 */
  push32(0x11b314c4u); f_11b36000();
  /* 11b314c4 mov esi, esp */
  ESI = (ESP);
  /* 11b314c6 push 0x11b6218c */
  push32((uint32_t)(0x11b6218cu));
  /* 11b314cb push 0x11b67830 */
  push32((uint32_t)(0x11b67830u));
  /* 11b314d0 call dword ptr [0x11b6a510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a510))), 0x11b314d6u);
  /* 11b314d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b314d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b314db call 0x11b36000 */
  push32(0x11b314e0u); f_11b36000();
  /* 11b314e0 mov esi, esp */
  ESI = (ESP);
  /* 11b314e2 push 0x11b6217c */
  push32((uint32_t)(0x11b6217cu));
  /* 11b314e7 push 0x11b67930 */
  push32((uint32_t)(0x11b67930u));
  /* 11b314ec call dword ptr [0x11b6a510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a510))), 0x11b314f2u);
  /* 11b314f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b314f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b314f7 call 0x11b36000 */
  push32(0x11b314fcu); f_11b36000();
  /* 11b314fc mov esi, esp */
  ESI = (ESP);
  /* 11b314fe push 0x11b62164 */
  push32((uint32_t)(0x11b62164u));
  /* 11b31503 push 0x11b677d8 */
  push32((uint32_t)(0x11b677d8u));
  /* 11b31508 call dword ptr [0x11b6a510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a510))), 0x11b3150eu);
  /* 11b3150e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31511 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31513 call 0x11b36000 */
  push32(0x11b31518u); f_11b36000();
  /* 11b31518 mov esi, esp */
  ESI = (ESP);
  /* 11b3151a push 0x11b6214c */
  push32((uint32_t)(0x11b6214cu));
  /* 11b3151f push 0x11b677e8 */
  push32((uint32_t)(0x11b677e8u));
  /* 11b31524 call dword ptr [0x11b6a510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a510))), 0x11b3152au);
  /* 11b3152a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3152d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3152f call 0x11b36000 */
  push32(0x11b31534u); f_11b36000();
  /* 11b31534 mov esi, esp */
  ESI = (ESP);
  /* 11b31536 push 0x11b6213c */
  push32((uint32_t)(0x11b6213cu));
  /* 11b3153b push 0x11b67808 */
  push32((uint32_t)(0x11b67808u));
  /* 11b31540 call dword ptr [0x11b6a510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a510))), 0x11b31546u);
  /* 11b31546 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31549 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3154b call 0x11b36000 */
  push32(0x11b31550u); f_11b36000();
  /* 11b31550 mov esi, esp */
  ESI = (ESP);
  /* 11b31552 push 0x11b6212c */
  push32((uint32_t)(0x11b6212cu));
  /* 11b31557 push 0x11b67920 */
  push32((uint32_t)(0x11b67920u));
  /* 11b3155c call dword ptr [0x11b6a510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a510))), 0x11b31562u);
  /* 11b31562 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31565 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31567 call 0x11b36000 */
  push32(0x11b3156cu); f_11b36000();
  /* 11b3156c mov esi, esp */
  ESI = (ESP);
  /* 11b3156e push 0x11b6211c */
  push32((uint32_t)(0x11b6211cu));
  /* 11b31573 push 0x11b67810 */
  push32((uint32_t)(0x11b67810u));
  /* 11b31578 call dword ptr [0x11b6a510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a510))), 0x11b3157eu);
  /* 11b3157e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31581 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31583 call 0x11b36000 */
  push32(0x11b31588u); f_11b36000();
  /* 11b31588 mov esi, esp */
  ESI = (ESP);
  /* 11b3158a push 0x11b6210c */
  push32((uint32_t)(0x11b6210cu));
  /* 11b3158f push 0x11b67928 */
  push32((uint32_t)(0x11b67928u));
  /* 11b31594 call dword ptr [0x11b6a510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a510))), 0x11b3159au);
  /* 11b3159a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3159d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3159f call 0x11b36000 */
  push32(0x11b315a4u); f_11b36000();
  /* 11b315a4 mov esi, esp */
  ESI = (ESP);
  /* 11b315a6 push 0x11b620fc */
  push32((uint32_t)(0x11b620fcu));
  /* 11b315ab push 0x11b67818 */
  push32((uint32_t)(0x11b67818u));
  /* 11b315b0 call dword ptr [0x11b6a510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a510))), 0x11b315b6u);
  /* 11b315b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b315b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b315bb call 0x11b36000 */
  push32(0x11b315c0u); f_11b36000();
  /* 11b315c0 mov esi, esp */
  ESI = (ESP);
  /* 11b315c2 push 0x11b620ec */
  push32((uint32_t)(0x11b620ecu));
  /* 11b315c7 push 0x11b67918 */
  push32((uint32_t)(0x11b67918u));
  /* 11b315cc call dword ptr [0x11b6a510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a510))), 0x11b315d2u);
  /* 11b315d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b315d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b315d7 call 0x11b36000 */
  push32(0x11b315dcu); f_11b36000();
  /* 11b315dc mov esi, esp */
  ESI = (ESP);
  /* 11b315de push 0x11b620d4 */
  push32((uint32_t)(0x11b620d4u));
  /* 11b315e3 push 0x11b67860 */
  push32((uint32_t)(0x11b67860u));
  /* 11b315e8 call dword ptr [0x11b6a510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a510))), 0x11b315eeu);
  /* 11b315ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b315f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b315f3 call 0x11b36000 */
  push32(0x11b315f8u); f_11b36000();
  /* 11b315f8 mov esi, esp */
  ESI = (ESP);
  /* 11b315fa push 0x11b620bc */
  push32((uint32_t)(0x11b620bcu));
  /* 11b315ff push 0x11b67868 */
  push32((uint32_t)(0x11b67868u));
  /* 11b31604 call dword ptr [0x11b6a510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a510))), 0x11b3160au);
  /* 11b3160a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3160d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3160f call 0x11b36000 */
  push32(0x11b31614u); f_11b36000();
  /* 11b31614 mov esi, esp */
  ESI = (ESP);
  /* 11b31616 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b31618 push 0x11b677c8 */
  push32((uint32_t)(0x11b677c8u));
  /* 11b3161d call dword ptr [0x11b6a520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a520))), 0x11b31623u);
  /* 11b31623 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31626 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31628 call 0x11b36000 */
  push32(0x11b3162du); f_11b36000();
  /* 11b3162d mov esi, esp */
  ESI = (ESP);
  /* 11b3162f push 8 */
  push32((uint32_t)(0x8u));
  /* 11b31631 push 0x11b677c0 */
  push32((uint32_t)(0x11b677c0u));
  /* 11b31636 call dword ptr [0x11b6a520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a520))), 0x11b3163cu);
  /* 11b3163c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3163f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31641 call 0x11b36000 */
  push32(0x11b31646u); f_11b36000();
  /* 11b31646 mov esi, esp */
  ESI = (ESP);
  /* 11b31648 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b3164a push 0x11b677e0 */
  push32((uint32_t)(0x11b677e0u));
  /* 11b3164f call dword ptr [0x11b6a520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a520))), 0x11b31655u);
  /* 11b31655 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31658 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3165a call 0x11b36000 */
  push32(0x11b3165fu); f_11b36000();
  /* 11b3165f mov esi, esp */
  ESI = (ESP);
  /* 11b31661 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b31663 push 0x11b677d0 */
  push32((uint32_t)(0x11b677d0u));
  /* 11b31668 call dword ptr [0x11b6a520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a520))), 0x11b3166eu);
  /* 11b3166e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31671 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31673 call 0x11b36000 */
  push32(0x11b31678u); f_11b36000();
  /* 11b31678 mov esi, esp */
  ESI = (ESP);
  /* 11b3167a push 8 */
  push32((uint32_t)(0x8u));
  /* 11b3167c push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b31681 call dword ptr [0x11b6a520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a520))), 0x11b31687u);
  /* 11b31687 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3168a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3168c call 0x11b36000 */
  push32(0x11b31691u); f_11b36000();
  /* 11b31691 mov esi, esp */
  ESI = (ESP);
  /* 11b31693 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b31695 push 0x11b67788 */
  push32((uint32_t)(0x11b67788u));
  /* 11b3169a call dword ptr [0x11b6a520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a520))), 0x11b316a0u);
  /* 11b316a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b316a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b316a5 call 0x11b36000 */
  push32(0x11b316aau); f_11b36000();
  /* 11b316aa mov esi, esp */
  ESI = (ESP);
  /* 11b316ac push 8 */
  push32((uint32_t)(0x8u));
  /* 11b316ae push 0x11b677a0 */
  push32((uint32_t)(0x11b677a0u));
  /* 11b316b3 call dword ptr [0x11b6a520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a520))), 0x11b316b9u);
  /* 11b316b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b316bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b316be call 0x11b36000 */
  push32(0x11b316c3u); f_11b36000();
  /* 11b316c3 mov esi, esp */
  ESI = (ESP);
  /* 11b316c5 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b316c7 push 0x11b67798 */
  push32((uint32_t)(0x11b67798u));
  /* 11b316cc call dword ptr [0x11b6a520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a520))), 0x11b316d2u);
  /* 11b316d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b316d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b316d7 call 0x11b36000 */
  push32(0x11b316dcu); f_11b36000();
  /* 11b316dc mov esi, esp */
  ESI = (ESP);
  /* 11b316de push 8 */
  push32((uint32_t)(0x8u));
  /* 11b316e0 push 0x11b677a8 */
  push32((uint32_t)(0x11b677a8u));
  /* 11b316e5 call dword ptr [0x11b6a520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a520))), 0x11b316ebu);
  /* 11b316eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b316ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b316f0 call 0x11b36000 */
  push32(0x11b316f5u); f_11b36000();
  /* 11b316f5 mov esi, esp */
  ESI = (ESP);
  /* 11b316f7 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b316f9 push 0x11b67880 */
  push32((uint32_t)(0x11b67880u));
  /* 11b316fe call dword ptr [0x11b6a520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a520))), 0x11b31704u);
  /* 11b31704 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31707 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31709 call 0x11b36000 */
  push32(0x11b3170eu); f_11b36000();
  /* 11b3170e mov esi, esp */
  ESI = (ESP);
  /* 11b31710 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b31712 push 0x11b67878 */
  push32((uint32_t)(0x11b67878u));
  /* 11b31717 call dword ptr [0x11b6a520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a520))), 0x11b3171du);
  /* 11b3171d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31720 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31722 call 0x11b36000 */
  push32(0x11b31727u); f_11b36000();
  /* 11b31727 mov esi, esp */
  ESI = (ESP);
  /* 11b31729 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b3172b push 0x11b678b8 */
  push32((uint32_t)(0x11b678b8u));
  /* 11b31730 call dword ptr [0x11b6a520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a520))), 0x11b31736u);
  /* 11b31736 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31739 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3173b call 0x11b36000 */
  push32(0x11b31740u); f_11b36000();
  /* 11b31740 mov esi, esp */
  ESI = (ESP);
  /* 11b31742 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b31744 push 0x11b678b0 */
  push32((uint32_t)(0x11b678b0u));
  /* 11b31749 call dword ptr [0x11b6a520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a520))), 0x11b3174fu);
  /* 11b3174f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31752 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31754 call 0x11b36000 */
  push32(0x11b31759u); f_11b36000();
  /* 11b31759 mov esi, esp */
  ESI = (ESP);
  /* 11b3175b push 8 */
  push32((uint32_t)(0x8u));
  /* 11b3175d push 0x11b678d0 */
  push32((uint32_t)(0x11b678d0u));
  /* 11b31762 call dword ptr [0x11b6a520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a520))), 0x11b31768u);
  /* 11b31768 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3176b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3176d call 0x11b36000 */
  push32(0x11b31772u); f_11b36000();
  /* 11b31772 mov esi, esp */
  ESI = (ESP);
  /* 11b31774 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b31776 push 0x11b678c0 */
  push32((uint32_t)(0x11b678c0u));
  /* 11b3177b call dword ptr [0x11b6a520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a520))), 0x11b31781u);
  /* 11b31781 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31784 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31786 call 0x11b36000 */
  push32(0x11b3178bu); f_11b36000();
  /* 11b3178b mov esi, esp */
  ESI = (ESP);
  /* 11b3178d push 8 */
  push32((uint32_t)(0x8u));
  /* 11b3178f push 0x11b67898 */
  push32((uint32_t)(0x11b67898u));
  /* 11b31794 call dword ptr [0x11b6a520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a520))), 0x11b3179au);
  /* 11b3179a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3179d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3179f call 0x11b36000 */
  push32(0x11b317a4u); f_11b36000();
  /* 11b317a4 mov esi, esp */
  ESI = (ESP);
  /* 11b317a6 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b317a8 push 0x11b67890 */
  push32((uint32_t)(0x11b67890u));
  /* 11b317ad call dword ptr [0x11b6a520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a520))), 0x11b317b3u);
  /* 11b317b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b317b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b317b8 call 0x11b36000 */
  push32(0x11b317bdu); f_11b36000();
  /* 11b317bd mov esi, esp */
  ESI = (ESP);
  /* 11b317bf push 8 */
  push32((uint32_t)(0x8u));
  /* 11b317c1 push 0x11b678a8 */
  push32((uint32_t)(0x11b678a8u));
  /* 11b317c6 call dword ptr [0x11b6a520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a520))), 0x11b317ccu);
  /* 11b317cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b317cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b317d1 call 0x11b36000 */
  push32(0x11b317d6u); f_11b36000();
  /* 11b317d6 mov esi, esp */
  ESI = (ESP);
  /* 11b317d8 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b317da push 0x11b678a0 */
  push32((uint32_t)(0x11b678a0u));
  /* 11b317df call dword ptr [0x11b6a520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a520))), 0x11b317e5u);
  /* 11b317e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b317e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b317ea call 0x11b36000 */
  push32(0x11b317efu); f_11b36000();
  /* 11b317ef mov esi, esp */
  ESI = (ESP);
  /* 11b317f1 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b317f3 push 0x11b678c8 */
  push32((uint32_t)(0x11b678c8u));
  /* 11b317f8 call dword ptr [0x11b6a520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a520))), 0x11b317feu);
  /* 11b317fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31801 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31803 call 0x11b36000 */
  push32(0x11b31808u); f_11b36000();
  /* 11b31808 mov esi, esp */
  ESI = (ESP);
  /* 11b3180a push 4 */
  push32((uint32_t)(0x4u));
  /* 11b3180c push 0x11b67888 */
  push32((uint32_t)(0x11b67888u));
  /* 11b31811 call dword ptr [0x11b6a520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a520))), 0x11b31817u);
  /* 11b31817 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3181a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3181c call 0x11b36000 */
  push32(0x11b31821u); f_11b36000();
  /* 11b31821 mov esi, esp */
  ESI = (ESP);
  /* 11b31823 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b31825 push 0x11b678d8 */
  push32((uint32_t)(0x11b678d8u));
  /* 11b3182a call dword ptr [0x11b6a520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a520))), 0x11b31830u);
  /* 11b31830 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31833 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31835 call 0x11b36000 */
  push32(0x11b3183au); f_11b36000();
  /* 11b3183a mov esi, esp */
  ESI = (ESP);
  /* 11b3183c push 4 */
  push32((uint32_t)(0x4u));
  /* 11b3183e push 0x11b67908 */
  push32((uint32_t)(0x11b67908u));
  /* 11b31843 call dword ptr [0x11b6a520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a520))), 0x11b31849u);
  /* 11b31849 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3184c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3184e call 0x11b36000 */
  push32(0x11b31853u); f_11b36000();
  /* 11b31853 mov esi, esp */
  ESI = (ESP);
  /* 11b31855 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b31857 push 0x11b67938 */
  push32((uint32_t)(0x11b67938u));
  /* 11b3185c call dword ptr [0x11b6a520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a520))), 0x11b31862u);
  /* 11b31862 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31865 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31867 call 0x11b36000 */
  push32(0x11b3186cu); f_11b36000();
  /* 11b3186c mov esi, esp */
  ESI = (ESP);
  /* 11b3186e push 4 */
  push32((uint32_t)(0x4u));
  /* 11b31870 push 0x11b6793c */
  push32((uint32_t)(0x11b6793cu));
  /* 11b31875 call dword ptr [0x11b6a520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a520))), 0x11b3187bu);
  /* 11b3187b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3187e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31880 call 0x11b36000 */
  push32(0x11b31885u); f_11b36000();
  /* 11b31885 mov esi, esp */
  ESI = (ESP);
  /* 11b31887 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b31889 push 0x11b67968 */
  push32((uint32_t)(0x11b67968u));
  /* 11b3188e call dword ptr [0x11b6a520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a520))), 0x11b31894u);
  /* 11b31894 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31897 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31899 call 0x11b36000 */
  push32(0x11b3189eu); f_11b36000();
  /* 11b3189e mov esi, esp */
  ESI = (ESP);
  /* 11b318a0 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b318a2 push 0x11b678dc */
  push32((uint32_t)(0x11b678dcu));
  /* 11b318a7 call dword ptr [0x11b6a520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a520))), 0x11b318adu);
  /* 11b318ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b318b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b318b2 call 0x11b36000 */
  push32(0x11b318b7u); f_11b36000();
  /* 11b318b7 mov esi, esp */
  ESI = (ESP);
  /* 11b318b9 push 0x11b620b4 */
  push32((uint32_t)(0x11b620b4u));
  /* 11b318be push 0x11b679e8 */
  push32((uint32_t)(0x11b679e8u));
  /* 11b318c3 call dword ptr [0x11b6a524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a524))), 0x11b318c9u);
  /* 11b318c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b318cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b318ce call 0x11b36000 */
  push32(0x11b318d3u); f_11b36000();
  /* 11b318d3 mov esi, esp */
  ESI = (ESP);
  /* 11b318d5 push 0x11b620a4 */
  push32((uint32_t)(0x11b620a4u));
  /* 11b318da push 0x11b678e8 */
  push32((uint32_t)(0x11b678e8u));
  /* 11b318df call dword ptr [0x11b6a524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a524))), 0x11b318e5u);
  /* 11b318e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b318e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b318ea call 0x11b36000 */
  push32(0x11b318efu); f_11b36000();
  /* 11b318ef mov esi, esp */
  ESI = (ESP);
  /* 11b318f1 push 0x11b62094 */
  push32((uint32_t)(0x11b62094u));
  /* 11b318f6 push 0x11b678f8 */
  push32((uint32_t)(0x11b678f8u));
  /* 11b318fb call dword ptr [0x11b6a524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a524))), 0x11b31901u);
  /* 11b31901 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31904 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31906 call 0x11b36000 */
  push32(0x11b3190bu); f_11b36000();
  /* 11b3190b mov esi, esp */
  ESI = (ESP);
  /* 11b3190d push 0x11b62084 */
  push32((uint32_t)(0x11b62084u));
  /* 11b31912 push 0x11b67900 */
  push32((uint32_t)(0x11b67900u));
  /* 11b31917 call dword ptr [0x11b6a524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a524))), 0x11b3191du);
  /* 11b3191d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31920 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31922 call 0x11b36000 */
  push32(0x11b31927u); f_11b36000();
  /* 11b31927 mov esi, esp */
  ESI = (ESP);
  /* 11b31929 push 0x11b62074 */
  push32((uint32_t)(0x11b62074u));
  /* 11b3192e push 0x11b678f0 */
  push32((uint32_t)(0x11b678f0u));
  /* 11b31933 call dword ptr [0x11b6a524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a524))), 0x11b31939u);
  /* 11b31939 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3193c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3193e call 0x11b36000 */
  push32(0x11b31943u); f_11b36000();
  /* 11b31943 mov esi, esp */
  ESI = (ESP);
  /* 11b31945 push 0x11b62064 */
  push32((uint32_t)(0x11b62064u));
  /* 11b3194a push 0x11b678e0 */
  push32((uint32_t)(0x11b678e0u));
  /* 11b3194f call dword ptr [0x11b6a524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a524))), 0x11b31955u);
  /* 11b31955 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31958 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3195a call 0x11b36000 */
  push32(0x11b3195fu); f_11b36000();
  /* 11b3195f mov esi, esp */
  ESI = (ESP);
  /* 11b31961 push 0x11b6205c */
  push32((uint32_t)(0x11b6205cu));
  /* 11b31966 push 0x11b679e0 */
  push32((uint32_t)(0x11b679e0u));
  /* 11b3196b call dword ptr [0x11b6a524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a524))), 0x11b31971u);
  /* 11b31971 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31974 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31976 call 0x11b36000 */
  push32(0x11b3197bu); f_11b36000();
  /* 11b3197b mov esi, esp */
  ESI = (ESP);
  /* 11b3197d push 0x11b62050 */
  push32((uint32_t)(0x11b62050u));
  /* 11b31982 push 0x11b67778 */
  push32((uint32_t)(0x11b67778u));
  /* 11b31987 call dword ptr [0x11b6a524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a524))), 0x11b3198du);
  /* 11b3198d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31990 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31992 call 0x11b36000 */
  push32(0x11b31997u); f_11b36000();
  /* 11b31997 mov esi, esp */
  ESI = (ESP);
  /* 11b31999 push 0x11b62044 */
  push32((uint32_t)(0x11b62044u));
  /* 11b3199e push 0x11b67780 */
  push32((uint32_t)(0x11b67780u));
  /* 11b319a3 call dword ptr [0x11b6a524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a524))), 0x11b319a9u);
  /* 11b319a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b319ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b319ae call 0x11b36000 */
  push32(0x11b319b3u); f_11b36000();
  /* 11b319b3 mov esi, esp */
  ESI = (ESP);
  /* 11b319b5 push 0x11b6203c */
  push32((uint32_t)(0x11b6203cu));
  /* 11b319ba push 0x11b67800 */
  push32((uint32_t)(0x11b67800u));
  /* 11b319bf call dword ptr [0x11b6a524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a524))), 0x11b319c5u);
  /* 11b319c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b319c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b319ca call 0x11b36000 */
  push32(0x11b319cfu); f_11b36000();
  /* 11b319cf mov esi, esp */
  ESI = (ESP);
  /* 11b319d1 push 0x11b677c8 */
  push32((uint32_t)(0x11b677c8u));
  /* 11b319d6 call dword ptr [0x11b6a51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a51c))), 0x11b319dcu);
  /* 11b319dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b319df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b319e1 call 0x11b36000 */
  push32(0x11b319e6u); f_11b36000();
  /* 11b319e6 mov esi, esp */
  ESI = (ESP);
  /* 11b319e8 push 0x11b677c0 */
  push32((uint32_t)(0x11b677c0u));
  /* 11b319ed call dword ptr [0x11b6a51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a51c))), 0x11b319f3u);
  /* 11b319f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b319f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b319f8 call 0x11b36000 */
  push32(0x11b319fdu); f_11b36000();
  /* 11b319fd mov esi, esp */
  ESI = (ESP);
  /* 11b319ff push 0x11b677e0 */
  push32((uint32_t)(0x11b677e0u));
  /* 11b31a04 call dword ptr [0x11b6a51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a51c))), 0x11b31a0au);
  /* 11b31a0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31a0d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31a0f call 0x11b36000 */
  push32(0x11b31a14u); f_11b36000();
  /* 11b31a14 mov esi, esp */
  ESI = (ESP);
  /* 11b31a16 push 0x11b677d0 */
  push32((uint32_t)(0x11b677d0u));
  /* 11b31a1b call dword ptr [0x11b6a51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a51c))), 0x11b31a21u);
  /* 11b31a21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31a24 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31a26 call 0x11b36000 */
  push32(0x11b31a2bu); f_11b36000();
  /* 11b31a2b mov esi, esp */
  ESI = (ESP);
  /* 11b31a2d push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b31a32 call dword ptr [0x11b6a51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a51c))), 0x11b31a38u);
  /* 11b31a38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31a3b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31a3d call 0x11b36000 */
  push32(0x11b31a42u); f_11b36000();
  /* 11b31a42 mov esi, esp */
  ESI = (ESP);
  /* 11b31a44 push 0x11b67788 */
  push32((uint32_t)(0x11b67788u));
  /* 11b31a49 call dword ptr [0x11b6a51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a51c))), 0x11b31a4fu);
  /* 11b31a4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31a52 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31a54 call 0x11b36000 */
  push32(0x11b31a59u); f_11b36000();
  /* 11b31a59 mov esi, esp */
  ESI = (ESP);
  /* 11b31a5b push 0x11b677a0 */
  push32((uint32_t)(0x11b677a0u));
  /* 11b31a60 call dword ptr [0x11b6a51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a51c))), 0x11b31a66u);
  /* 11b31a66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31a69 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31a6b call 0x11b36000 */
  push32(0x11b31a70u); f_11b36000();
  /* 11b31a70 mov esi, esp */
  ESI = (ESP);
  /* 11b31a72 push 0x11b67798 */
  push32((uint32_t)(0x11b67798u));
  /* 11b31a77 call dword ptr [0x11b6a51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a51c))), 0x11b31a7du);
  /* 11b31a7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31a80 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31a82 call 0x11b36000 */
  push32(0x11b31a87u); f_11b36000();
  /* 11b31a87 mov esi, esp */
  ESI = (ESP);
  /* 11b31a89 push 0x11b677a8 */
  push32((uint32_t)(0x11b677a8u));
  /* 11b31a8e call dword ptr [0x11b6a51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a51c))), 0x11b31a94u);
  /* 11b31a94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31a97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31a99 call 0x11b36000 */
  push32(0x11b31a9eu); f_11b36000();
  /* 11b31a9e mov esi, esp */
  ESI = (ESP);
  /* 11b31aa0 push 0x11b67880 */
  push32((uint32_t)(0x11b67880u));
  /* 11b31aa5 call dword ptr [0x11b6a51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a51c))), 0x11b31aabu);
  /* 11b31aab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31aae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31ab0 call 0x11b36000 */
  push32(0x11b31ab5u); f_11b36000();
  /* 11b31ab5 mov esi, esp */
  ESI = (ESP);
  /* 11b31ab7 push 0x11b67878 */
  push32((uint32_t)(0x11b67878u));
  /* 11b31abc call dword ptr [0x11b6a51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a51c))), 0x11b31ac2u);
  /* 11b31ac2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31ac5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31ac7 call 0x11b36000 */
  push32(0x11b31accu); f_11b36000();
  /* 11b31acc mov esi, esp */
  ESI = (ESP);
  /* 11b31ace push 0x11b678b8 */
  push32((uint32_t)(0x11b678b8u));
  /* 11b31ad3 call dword ptr [0x11b6a51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a51c))), 0x11b31ad9u);
  /* 11b31ad9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31adc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31ade call 0x11b36000 */
  push32(0x11b31ae3u); f_11b36000();
  /* 11b31ae3 mov esi, esp */
  ESI = (ESP);
  /* 11b31ae5 push 0x11b678b0 */
  push32((uint32_t)(0x11b678b0u));
  /* 11b31aea call dword ptr [0x11b6a51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a51c))), 0x11b31af0u);
  /* 11b31af0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31af3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31af5 call 0x11b36000 */
  push32(0x11b31afau); f_11b36000();
  /* 11b31afa mov esi, esp */
  ESI = (ESP);
  /* 11b31afc push 0x11b678d0 */
  push32((uint32_t)(0x11b678d0u));
  /* 11b31b01 call dword ptr [0x11b6a51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a51c))), 0x11b31b07u);
  /* 11b31b07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31b0a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31b0c call 0x11b36000 */
  push32(0x11b31b11u); f_11b36000();
  /* 11b31b11 mov esi, esp */
  ESI = (ESP);
  /* 11b31b13 push 0x11b678c0 */
  push32((uint32_t)(0x11b678c0u));
  /* 11b31b18 call dword ptr [0x11b6a51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a51c))), 0x11b31b1eu);
  /* 11b31b1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31b21 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31b23 call 0x11b36000 */
  push32(0x11b31b28u); f_11b36000();
  /* 11b31b28 mov esi, esp */
  ESI = (ESP);
  /* 11b31b2a push 0x11b67898 */
  push32((uint32_t)(0x11b67898u));
  /* 11b31b2f call dword ptr [0x11b6a51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a51c))), 0x11b31b35u);
  /* 11b31b35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31b38 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31b3a call 0x11b36000 */
  push32(0x11b31b3fu); f_11b36000();
  /* 11b31b3f mov esi, esp */
  ESI = (ESP);
  /* 11b31b41 push 0x11b67890 */
  push32((uint32_t)(0x11b67890u));
  /* 11b31b46 call dword ptr [0x11b6a51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a51c))), 0x11b31b4cu);
  /* 11b31b4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31b4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31b51 call 0x11b36000 */
  push32(0x11b31b56u); f_11b36000();
  /* 11b31b56 mov esi, esp */
  ESI = (ESP);
  /* 11b31b58 push 0x11b678a8 */
  push32((uint32_t)(0x11b678a8u));
  /* 11b31b5d call dword ptr [0x11b6a51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a51c))), 0x11b31b63u);
  /* 11b31b63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31b66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31b68 call 0x11b36000 */
  push32(0x11b31b6du); f_11b36000();
  /* 11b31b6d mov esi, esp */
  ESI = (ESP);
  /* 11b31b6f push 0x11b678a0 */
  push32((uint32_t)(0x11b678a0u));
  /* 11b31b74 call dword ptr [0x11b6a51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a51c))), 0x11b31b7au);
  /* 11b31b7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31b7d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31b7f call 0x11b36000 */
  push32(0x11b31b84u); f_11b36000();
  /* 11b31b84 mov esi, esp */
  ESI = (ESP);
  /* 11b31b86 push 0x11b678c8 */
  push32((uint32_t)(0x11b678c8u));
  /* 11b31b8b call dword ptr [0x11b6a51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a51c))), 0x11b31b91u);
  /* 11b31b91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31b94 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31b96 call 0x11b36000 */
  push32(0x11b31b9bu); f_11b36000();
  /* 11b31b9b mov esi, esp */
  ESI = (ESP);
  /* 11b31b9d push 0x11b679d8 */
  push32((uint32_t)(0x11b679d8u));
  /* 11b31ba2 call dword ptr [0x11b6a51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a51c))), 0x11b31ba8u);
  /* 11b31ba8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31bab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31bad call 0x11b36000 */
  push32(0x11b31bb2u); f_11b36000();
  /* 11b31bb2 mov esi, esp */
  ESI = (ESP);
  /* 11b31bb4 push 0x11b62030 */
  push32((uint32_t)(0x11b62030u));
  /* 11b31bb9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b31bbb call dword ptr [0x11b6a52c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a52c))), 0x11b31bc1u);
  /* 11b31bc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31bc4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31bc6 call 0x11b36000 */
  push32(0x11b31bcbu); f_11b36000();
  /* 11b31bcb mov esi, esp */
  ESI = (ESP);
  /* 11b31bcd push 0x11b62028 */
  push32((uint32_t)(0x11b62028u));
  /* 11b31bd2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b31bd4 call dword ptr [0x11b6a52c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a52c))), 0x11b31bdau);
  /* 11b31bda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31bdd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31bdf call 0x11b36000 */
  push32(0x11b31be4u); f_11b36000();
  /* 11b31be4 mov esi, esp */
  ESI = (ESP);
  /* 11b31be6 push 0x11b6201c */
  push32((uint32_t)(0x11b6201cu));
  /* 11b31beb push 5 */
  push32((uint32_t)(0x5u));
  /* 11b31bed call dword ptr [0x11b6a52c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a52c))), 0x11b31bf3u);
  /* 11b31bf3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31bf6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31bf8 call 0x11b36000 */
  push32(0x11b31bfdu); f_11b36000();
  /* 11b31bfd mov esi, esp */
  ESI = (ESP);
  /* 11b31bff push 0x66 */
  push32((uint32_t)(0x66u));
  /* 11b31c01 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b31c03 call dword ptr [0x11b6a530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a530))), 0x11b31c09u);
  /* 11b31c09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31c0c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31c0e call 0x11b36000 */
  push32(0x11b31c13u); f_11b36000();
  /* 11b31c13 mov esi, esp */
  ESI = (ESP);
  /* 11b31c15 push 0x66 */
  push32((uint32_t)(0x66u));
  /* 11b31c17 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b31c19 call dword ptr [0x11b6a530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a530))), 0x11b31c1fu);
  /* 11b31c1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31c22 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31c24 call 0x11b36000 */
  push32(0x11b31c29u); f_11b36000();
  /* 11b31c29 mov esi, esp */
  ESI = (ESP);
  /* 11b31c2b push 0x66 */
  push32((uint32_t)(0x66u));
  /* 11b31c2d push 5 */
  push32((uint32_t)(0x5u));
  /* 11b31c2f call dword ptr [0x11b6a530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a530))), 0x11b31c35u);
  /* 11b31c35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31c38 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31c3a call 0x11b36000 */
  push32(0x11b31c3fu); f_11b36000();
  /* 11b31c3f mov esi, esp */
  ESI = (ESP);
  /* 11b31c41 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b31c43 push 0x11b67808 */
  push32((uint32_t)(0x11b67808u));
  /* 11b31c48 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b31c4a call dword ptr [0x11b6a528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a528))), 0x11b31c50u);
  /* 11b31c50 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31c53 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31c55 call 0x11b36000 */
  push32(0x11b31c5au); f_11b36000();
  /* 11b31c5a mov esi, esp */
  ESI = (ESP);
  /* 11b31c5c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b31c5e push 0x11b67920 */
  push32((uint32_t)(0x11b67920u));
  /* 11b31c63 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b31c65 call dword ptr [0x11b6a528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a528))), 0x11b31c6bu);
  /* 11b31c6b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31c6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31c70 call 0x11b36000 */
  push32(0x11b31c75u); f_11b36000();
  /* 11b31c75 mov esi, esp */
  ESI = (ESP);
  /* 11b31c77 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b31c79 push 0x11b67810 */
  push32((uint32_t)(0x11b67810u));
  /* 11b31c7e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b31c80 call dword ptr [0x11b6a528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a528))), 0x11b31c86u);
  /* 11b31c86 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31c89 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31c8b call 0x11b36000 */
  push32(0x11b31c90u); f_11b36000();
  /* 11b31c90 mov esi, esp */
  ESI = (ESP);
  /* 11b31c92 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b31c94 push 0x11b67928 */
  push32((uint32_t)(0x11b67928u));
  /* 11b31c99 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b31c9b call dword ptr [0x11b6a528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a528))), 0x11b31ca1u);
  /* 11b31ca1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31ca4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31ca6 call 0x11b36000 */
  push32(0x11b31cabu); f_11b36000();
  /* 11b31cab mov esi, esp */
  ESI = (ESP);
  /* 11b31cad push 0 */
  push32((uint32_t)(0x0u));
  /* 11b31caf push 0x11b67818 */
  push32((uint32_t)(0x11b67818u));
  /* 11b31cb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b31cb6 call dword ptr [0x11b6a528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a528))), 0x11b31cbcu);
  /* 11b31cbc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31cbf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31cc1 call 0x11b36000 */
  push32(0x11b31cc6u); f_11b36000();
  /* 11b31cc6 mov esi, esp */
  ESI = (ESP);
  /* 11b31cc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b31cca push 0x11b67918 */
  push32((uint32_t)(0x11b67918u));
  /* 11b31ccf push 0 */
  push32((uint32_t)(0x0u));
  /* 11b31cd1 call dword ptr [0x11b6a528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a528))), 0x11b31cd7u);
  /* 11b31cd7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31cda cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31cdc call 0x11b36000 */
  push32(0x11b31ce1u); f_11b36000();
  /* 11b31ce1 mov esi, esp */
  ESI = (ESP);
  /* 11b31ce3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b31ce5 push 0x11b677d8 */
  push32((uint32_t)(0x11b677d8u));
  /* 11b31cea push 0 */
  push32((uint32_t)(0x0u));
  /* 11b31cec call dword ptr [0x11b6a528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a528))), 0x11b31cf2u);
  /* 11b31cf2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31cf5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31cf7 call 0x11b36000 */
  push32(0x11b31cfcu); f_11b36000();
  /* 11b31cfc mov esi, esp */
  ESI = (ESP);
  /* 11b31cfe push 0 */
  push32((uint32_t)(0x0u));
  /* 11b31d00 push 0x11b677e8 */
  push32((uint32_t)(0x11b677e8u));
  /* 11b31d05 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b31d07 call dword ptr [0x11b6a528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a528))), 0x11b31d0du);
  /* 11b31d0d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31d10 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31d12 call 0x11b36000 */
  push32(0x11b31d17u); f_11b36000();
  /* 11b31d17 mov esi, esp */
  ESI = (ESP);
  /* 11b31d19 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b31d1b push 0x11b67860 */
  push32((uint32_t)(0x11b67860u));
  /* 11b31d20 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b31d22 call dword ptr [0x11b6a528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a528))), 0x11b31d28u);
  /* 11b31d28 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31d2b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31d2d call 0x11b36000 */
  push32(0x11b31d32u); f_11b36000();
  /* 11b31d32 mov esi, esp */
  ESI = (ESP);
  /* 11b31d34 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b31d36 push 0x11b67868 */
  push32((uint32_t)(0x11b67868u));
  /* 11b31d3b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b31d3d call dword ptr [0x11b6a528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a528))), 0x11b31d43u);
  /* 11b31d43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31d46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31d48 call 0x11b36000 */
  push32(0x11b31d4du); f_11b36000();
  /* 11b31d4d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b31d4f call 0x11b35e70 */
  push32(0x11b31d54u); f_11b35e70();
  /* 11b31d54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31d57 push eax */
  push32((uint32_t)(EAX));
  /* 11b31d58 call 0x11b35e20 */
  push32(0x11b31d5du); f_11b35e20();
  /* 11b31d5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31d60 pop edi */
  EDI = (pop32());
  /* 11b31d61 pop esi */
  ESI = (pop32());
  /* 11b31d62 pop ebx */
  EBX = (pop32());
  /* 11b31d63 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b31d66 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b31d68 call 0x11b36000 */
  push32(0x11b31d6du); f_11b36000();
  /* 11b31d6d mov esp, ebp */
  ESP = (EBP);
  /* 11b31d6f pop ebp */
  EBP = (pop32());
  /* 11b31d70 ret  */
  ESPCHK(0x11b31030u, _esp0);
  ESP += 4; return;
}

/* FUN_100020d0 @ 0x11b320d0 (67 bytes, 26 insns) */
void f_11b320d0(void) {
  FTRACE(0x11b320d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b320d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b320d1 mov ebp, esp */
  EBP = (ESP);
  /* 11b320d3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b320d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b320d7 push esi */
  push32((uint32_t)(ESI));
  /* 11b320d8 push edi */
  push32((uint32_t)(EDI));
  /* 11b320d9 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b320dc mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b320e1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b320e6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b320e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b320eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b320ee cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b320f2 je 0x11b320f6 */
  if (C.zf) goto L_11b320f6;
  /* 11b320f4 jmp 0x11b320fb */
  goto L_11b320fb;
L_11b320f6:;
  /* 11b320f6 call 0x11b31005 */
  push32(0x11b320fbu); f_11b31005();
L_11b320fb:;
  /* 11b320fb mov eax, 1 */
  EAX = (0x1u);
  /* 11b32100 pop edi */
  EDI = (pop32());
  /* 11b32101 pop esi */
  ESI = (pop32());
  /* 11b32102 pop ebx */
  EBX = (pop32());
  /* 11b32103 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32106 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32108 call 0x11b36000 */
  push32(0x11b3210du); f_11b36000();
  /* 11b3210d mov esp, ebp */
  ESP = (EBP);
  /* 11b3210f pop ebp */
  EBP = (pop32());
  /* 11b32110 ret 0xc */
  ESPCHK(0x11b320d0u, _esp0);
  ESP += 16; return;
}

/* FUN_10002130 @ 0x11b32130 (12195 bytes, 3438 insns) [3 switch table(s)] */
void f_11b32130(void) {
  FTRACE(0x11b32130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b32130 push ebp */
  push32((uint32_t)(EBP));
  /* 11b32131 mov ebp, esp */
  EBP = (ESP);
  /* 11b32133 sub esp, 0x84 */
  { uint32_t _a=(ESP),_b=(0x84u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b32139 push ebx */
  push32((uint32_t)(EBX));
  /* 11b3213a push esi */
  push32((uint32_t)(ESI));
  /* 11b3213b push edi */
  push32((uint32_t)(EDI));
  /* 11b3213c lea edi, [ebp - 0x84] */
  EDI = ((uint32_t)(EBP + -0x84));
  /* 11b32142 mov ecx, 0x21 */
  ECX = (0x21u);
  /* 11b32147 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b3214c rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b3214e mov esi, esp */
  ESI = (ESP);
  /* 11b32150 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11b32152 call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b32158u);
  /* 11b32158 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3215b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3215d call 0x11b36000 */
  push32(0x11b32162u); f_11b36000();
  /* 11b32162 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b32167 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b32169 je 0x11b32d5e */
  if (C.zf) goto L_11b32d5e;
  /* 11b3216f mov esi, esp */
  ESI = (ESP);
  /* 11b32171 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32173 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11b32175 call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b3217bu);
  /* 11b3217b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3217e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32180 call 0x11b36000 */
  push32(0x11b32185u); f_11b36000();
  /* 11b32185 mov esi, esp */
  ESI = (ESP);
  /* 11b32187 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11b32189 call dword ptr [0x11b6a474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a474))), 0x11b3218fu);
  /* 11b3218f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32192 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32194 call 0x11b36000 */
  push32(0x11b32199u); f_11b36000();
  /* 11b32199 mov esi, esp */
  ESI = (ESP);
  /* 11b3219b push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11b3219d call dword ptr [0x11b6a484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a484))), 0x11b321a3u);
  /* 11b321a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b321a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b321a8 call 0x11b36000 */
  push32(0x11b321adu); f_11b36000();
  /* 11b321ad mov esi, esp */
  ESI = (ESP);
  /* 11b321af push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11b321b1 call dword ptr [0x11b6a484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a484))), 0x11b321b7u);
  /* 11b321b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b321ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b321bc call 0x11b36000 */
  push32(0x11b321c1u); f_11b36000();
  /* 11b321c1 mov esi, esp */
  ESI = (ESP);
  /* 11b321c3 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11b321c5 call dword ptr [0x11b6a484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a484))), 0x11b321cbu);
  /* 11b321cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b321ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b321d0 call 0x11b36000 */
  push32(0x11b321d5u); f_11b36000();
  /* 11b321d5 mov esi, esp */
  ESI = (ESP);
  /* 11b321d7 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11b321d9 call dword ptr [0x11b6a484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a484))), 0x11b321dfu);
  /* 11b321df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b321e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b321e4 call 0x11b36000 */
  push32(0x11b321e9u); f_11b36000();
  /* 11b321e9 mov esi, esp */
  ESI = (ESP);
  /* 11b321eb push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11b321ed call dword ptr [0x11b6a484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a484))), 0x11b321f3u);
  /* 11b321f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b321f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b321f8 call 0x11b36000 */
  push32(0x11b321fdu); f_11b36000();
  /* 11b321fd mov esi, esp */
  ESI = (ESP);
  /* 11b321ff push 0x11b677b0 */
  push32((uint32_t)(0x11b677b0u));
  /* 11b32204 push 0x11b677f0 */
  push32((uint32_t)(0x11b677f0u));
  /* 11b32209 call dword ptr [0x11b6a488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a488))), 0x11b3220fu);
  /* 11b3220f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32212 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32214 call 0x11b36000 */
  push32(0x11b32219u); f_11b36000();
  /* 11b32219 mov esi, esp */
  ESI = (ESP);
  /* 11b3221b push 0x11b677b8 */
  push32((uint32_t)(0x11b677b8u));
  /* 11b32220 push 0x11b677f8 */
  push32((uint32_t)(0x11b677f8u));
  /* 11b32225 call dword ptr [0x11b6a488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a488))), 0x11b3222bu);
  /* 11b3222b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3222e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32230 call 0x11b36000 */
  push32(0x11b32235u); f_11b36000();
  /* 11b32235 mov esi, esp */
  ESI = (ESP);
  /* 11b32237 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32239 call dword ptr [0x11b6a480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a480))), 0x11b3223fu);
  /* 11b3223f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32242 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32244 call 0x11b36000 */
  push32(0x11b32249u); f_11b36000();
  /* 11b32249 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b3224c cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32250 ja 0x11b32736 */
  if ((!C.cf&&!C.zf)) goto L_11b32736;
  /* 11b32256 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b32259 jmp dword ptr [eax*4 + 0x11b350d3] */
  switch (EAX) {
    case 0: goto L_11b32260;
    case 1: goto L_11b323d4;
    case 2: goto L_11b3252f;
    case 3: goto L_11b32658;
    case 4: goto L_11b32e7b;
    case 5: goto L_11b32f39;
    case 6: goto L_11b32ff4;
    case 7: goto L_11b330af;
    case 8: goto L_11b34da7;
    case 9: goto L_11b34e02;
    case 10: goto L_11b34e5d;
    case 11: goto L_11b34eb5;
    default: x86_unimpl("switch@0x11b32259 out of table"); return;
  }
L_11b32260:;
  /* 11b32260 mov esi, esp */
  ESI = (ESP);
  /* 11b32262 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 11b32267 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b32269 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3226b call dword ptr [0x11b6a490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a490))), 0x11b32271u);
  /* 11b32271 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32274 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32276 call 0x11b36000 */
  push32(0x11b3227bu); f_11b36000();
  /* 11b3227b mov esi, esp */
  ESI = (ESP);
  /* 11b3227d push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 11b32282 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32284 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32286 call dword ptr [0x11b6a490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a490))), 0x11b3228cu);
  /* 11b3228c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3228f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32291 call 0x11b36000 */
  push32(0x11b32296u); f_11b36000();
  /* 11b32296 mov esi, esp */
  ESI = (ESP);
  /* 11b32298 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 11b3229d push 2 */
  push32((uint32_t)(0x2u));
  /* 11b3229f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b322a1 call dword ptr [0x11b6a490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a490))), 0x11b322a7u);
  /* 11b322a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b322aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b322ac call 0x11b36000 */
  push32(0x11b322b1u); f_11b36000();
  /* 11b322b1 mov esi, esp */
  ESI = (ESP);
  /* 11b322b3 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 11b322b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b322ba push 0 */
  push32((uint32_t)(0x0u));
  /* 11b322bc call dword ptr [0x11b6a490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a490))), 0x11b322c2u);
  /* 11b322c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b322c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b322c7 call 0x11b36000 */
  push32(0x11b322ccu); f_11b36000();
  /* 11b322cc mov esi, esp */
  ESI = (ESP);
  /* 11b322ce push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 11b322d3 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b322d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b322d7 call dword ptr [0x11b6a490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a490))), 0x11b322ddu);
  /* 11b322dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b322e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b322e2 call 0x11b36000 */
  push32(0x11b322e7u); f_11b36000();
  /* 11b322e7 mov esi, esp */
  ESI = (ESP);
  /* 11b322e9 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 11b322ee push 4 */
  push32((uint32_t)(0x4u));
  /* 11b322f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b322f2 call dword ptr [0x11b6a490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a490))), 0x11b322f8u);
  /* 11b322f8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b322fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b322fd call 0x11b36000 */
  push32(0x11b32302u); f_11b36000();
  /* 11b32302 mov esi, esp */
  ESI = (ESP);
  /* 11b32304 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32306 push 0x11b67870 */
  push32((uint32_t)(0x11b67870u));
  /* 11b3230b call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b32311u);
  /* 11b32311 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32314 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32316 call 0x11b36000 */
  push32(0x11b3231bu); f_11b36000();
  /* 11b3231b mov esi, esp */
  ESI = (ESP);
  /* 11b3231d push 1 */
  push32((uint32_t)(0x1u));
  /* 11b3231f push 0x11b67948 */
  push32((uint32_t)(0x11b67948u));
  /* 11b32324 call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b3232au);
  /* 11b3232a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3232d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3232f call 0x11b36000 */
  push32(0x11b32334u); f_11b36000();
  /* 11b32334 mov esi, esp */
  ESI = (ESP);
  /* 11b32336 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b32338 push 0x11b67940 */
  push32((uint32_t)(0x11b67940u));
  /* 11b3233d call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b32343u);
  /* 11b32343 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32346 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32348 call 0x11b36000 */
  push32(0x11b3234du); f_11b36000();
  /* 11b3234d mov esi, esp */
  ESI = (ESP);
  /* 11b3234f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b32351 push 0x11b67a30 */
  push32((uint32_t)(0x11b67a30u));
  /* 11b32356 call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b3235cu);
  /* 11b3235c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3235f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32361 call 0x11b36000 */
  push32(0x11b32366u); f_11b36000();
  /* 11b32366 mov esi, esp */
  ESI = (ESP);
  /* 11b32368 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b3236a push 0x11b67a38 */
  push32((uint32_t)(0x11b67a38u));
  /* 11b3236f call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b32375u);
  /* 11b32375 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32378 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3237a call 0x11b36000 */
  push32(0x11b3237fu); f_11b36000();
  /* 11b3237f mov esi, esp */
  ESI = (ESP);
  /* 11b32381 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b32383 call dword ptr [0x11b6a48c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a48c))), 0x11b32389u);
  /* 11b32389 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3238c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3238e call 0x11b36000 */
  push32(0x11b32393u); f_11b36000();
  /* 11b32393 mov dword ptr [0x11b67888], 1 */
  w32((uint32_t)(0x11b67888), (0x1u));
  /* 11b3239d mov dword ptr [0x11b678d8], 1 */
  w32((uint32_t)(0x11b678d8), (0x1u));
  /* 11b323a7 mov dword ptr [0x11b67908], 1 */
  w32((uint32_t)(0x11b67908), (0x1u));
  /* 11b323b1 mov dword ptr [0x11b67938], 1 */
  w32((uint32_t)(0x11b67938), (0x1u));
  /* 11b323bb mov dword ptr [0x11b6793c], 1 */
  w32((uint32_t)(0x11b6793c), (0x1u));
  /* 11b323c5 mov dword ptr [0x11b67968], 1 */
  w32((uint32_t)(0x11b67968), (0x1u));
  /* 11b323cf jmp 0x11b32736 */
  goto L_11b32736;
L_11b323d4:;
  /* 11b323d4 mov esi, esp */
  ESI = (ESP);
  /* 11b323d6 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11b323db push 3 */
  push32((uint32_t)(0x3u));
  /* 11b323dd push 0 */
  push32((uint32_t)(0x0u));
  /* 11b323df call dword ptr [0x11b6a490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a490))), 0x11b323e5u);
  /* 11b323e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b323e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b323ea call 0x11b36000 */
  push32(0x11b323efu); f_11b36000();
  /* 11b323ef mov esi, esp */
  ESI = (ESP);
  /* 11b323f1 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11b323f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b323f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b323fa call dword ptr [0x11b6a490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a490))), 0x11b32400u);
  /* 11b32400 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32403 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32405 call 0x11b36000 */
  push32(0x11b3240au); f_11b36000();
  /* 11b3240a mov esi, esp */
  ESI = (ESP);
  /* 11b3240c push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11b32411 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b32413 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32415 call dword ptr [0x11b6a490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a490))), 0x11b3241bu);
  /* 11b3241b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3241e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32420 call 0x11b36000 */
  push32(0x11b32425u); f_11b36000();
  /* 11b32425 mov esi, esp */
  ESI = (ESP);
  /* 11b32427 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11b3242c push 1 */
  push32((uint32_t)(0x1u));
  /* 11b3242e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32430 call dword ptr [0x11b6a490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a490))), 0x11b32436u);
  /* 11b32436 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32439 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3243b call 0x11b36000 */
  push32(0x11b32440u); f_11b36000();
  /* 11b32440 mov esi, esp */
  ESI = (ESP);
  /* 11b32442 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11b32447 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b32449 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3244b call dword ptr [0x11b6a490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a490))), 0x11b32451u);
  /* 11b32451 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32454 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32456 call 0x11b36000 */
  push32(0x11b3245bu); f_11b36000();
  /* 11b3245b mov esi, esp */
  ESI = (ESP);
  /* 11b3245d push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11b32462 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b32464 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32466 call dword ptr [0x11b6a490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a490))), 0x11b3246cu);
  /* 11b3246c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3246f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32471 call 0x11b36000 */
  push32(0x11b32476u); f_11b36000();
  /* 11b32476 mov esi, esp */
  ESI = (ESP);
  /* 11b32478 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3247a push 0x11b67948 */
  push32((uint32_t)(0x11b67948u));
  /* 11b3247f call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b32485u);
  /* 11b32485 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32488 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3248a call 0x11b36000 */
  push32(0x11b3248fu); f_11b36000();
  /* 11b3248f mov esi, esp */
  ESI = (ESP);
  /* 11b32491 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b32493 push 0x11b67940 */
  push32((uint32_t)(0x11b67940u));
  /* 11b32498 call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b3249eu);
  /* 11b3249e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b324a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b324a3 call 0x11b36000 */
  push32(0x11b324a8u); f_11b36000();
  /* 11b324a8 mov esi, esp */
  ESI = (ESP);
  /* 11b324aa push 1 */
  push32((uint32_t)(0x1u));
  /* 11b324ac push 0x11b67a30 */
  push32((uint32_t)(0x11b67a30u));
  /* 11b324b1 call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b324b7u);
  /* 11b324b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b324ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b324bc call 0x11b36000 */
  push32(0x11b324c1u); f_11b36000();
  /* 11b324c1 mov esi, esp */
  ESI = (ESP);
  /* 11b324c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b324c5 push 0x11b67a38 */
  push32((uint32_t)(0x11b67a38u));
  /* 11b324ca call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b324d0u);
  /* 11b324d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b324d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b324d5 call 0x11b36000 */
  push32(0x11b324dau); f_11b36000();
  /* 11b324da mov esi, esp */
  ESI = (ESP);
  /* 11b324dc push 5 */
  push32((uint32_t)(0x5u));
  /* 11b324de call dword ptr [0x11b6a48c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a48c))), 0x11b324e4u);
  /* 11b324e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b324e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b324e9 call 0x11b36000 */
  push32(0x11b324eeu); f_11b36000();
  /* 11b324ee mov dword ptr [0x11b67888], 2 */
  w32((uint32_t)(0x11b67888), (0x2u));
  /* 11b324f8 mov dword ptr [0x11b678d8], 2 */
  w32((uint32_t)(0x11b678d8), (0x2u));
  /* 11b32502 mov dword ptr [0x11b67908], 1 */
  w32((uint32_t)(0x11b67908), (0x1u));
  /* 11b3250c mov dword ptr [0x11b67938], 1 */
  w32((uint32_t)(0x11b67938), (0x1u));
  /* 11b32516 mov dword ptr [0x11b6793c], 1 */
  w32((uint32_t)(0x11b6793c), (0x1u));
  /* 11b32520 mov dword ptr [0x11b67968], 1 */
  w32((uint32_t)(0x11b67968), (0x1u));
  /* 11b3252a jmp 0x11b32736 */
  goto L_11b32736;
L_11b3252f:;
  /* 11b3252f mov esi, esp */
  ESI = (ESP);
  /* 11b32531 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11b32536 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b32538 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3253a call dword ptr [0x11b6a490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a490))), 0x11b32540u);
  /* 11b32540 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32543 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32545 call 0x11b36000 */
  push32(0x11b3254au); f_11b36000();
  /* 11b3254a mov esi, esp */
  ESI = (ESP);
  /* 11b3254c push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11b32551 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32553 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32555 call dword ptr [0x11b6a490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a490))), 0x11b3255bu);
  /* 11b3255b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3255e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32560 call 0x11b36000 */
  push32(0x11b32565u); f_11b36000();
  /* 11b32565 mov esi, esp */
  ESI = (ESP);
  /* 11b32567 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11b3256c push 2 */
  push32((uint32_t)(0x2u));
  /* 11b3256e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32570 call dword ptr [0x11b6a490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a490))), 0x11b32576u);
  /* 11b32576 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32579 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3257b call 0x11b36000 */
  push32(0x11b32580u); f_11b36000();
  /* 11b32580 mov esi, esp */
  ESI = (ESP);
  /* 11b32582 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11b32587 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b32589 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3258b call dword ptr [0x11b6a490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a490))), 0x11b32591u);
  /* 11b32591 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32594 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32596 call 0x11b36000 */
  push32(0x11b3259bu); f_11b36000();
  /* 11b3259b mov esi, esp */
  ESI = (ESP);
  /* 11b3259d push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11b325a2 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b325a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b325a6 call dword ptr [0x11b6a490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a490))), 0x11b325acu);
  /* 11b325ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b325af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b325b1 call 0x11b36000 */
  push32(0x11b325b6u); f_11b36000();
  /* 11b325b6 mov esi, esp */
  ESI = (ESP);
  /* 11b325b8 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11b325bd push 4 */
  push32((uint32_t)(0x4u));
  /* 11b325bf push 0 */
  push32((uint32_t)(0x0u));
  /* 11b325c1 call dword ptr [0x11b6a490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a490))), 0x11b325c7u);
  /* 11b325c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b325ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b325cc call 0x11b36000 */
  push32(0x11b325d1u); f_11b36000();
  /* 11b325d1 mov esi, esp */
  ESI = (ESP);
  /* 11b325d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b325d5 push 0x11b67a30 */
  push32((uint32_t)(0x11b67a30u));
  /* 11b325da call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b325e0u);
  /* 11b325e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b325e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b325e5 call 0x11b36000 */
  push32(0x11b325eau); f_11b36000();
  /* 11b325ea mov esi, esp */
  ESI = (ESP);
  /* 11b325ec push 1 */
  push32((uint32_t)(0x1u));
  /* 11b325ee push 0x11b67a38 */
  push32((uint32_t)(0x11b67a38u));
  /* 11b325f3 call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b325f9u);
  /* 11b325f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b325fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b325fe call 0x11b36000 */
  push32(0x11b32603u); f_11b36000();
  /* 11b32603 mov esi, esp */
  ESI = (ESP);
  /* 11b32605 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b32607 call dword ptr [0x11b6a48c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a48c))), 0x11b3260du);
  /* 11b3260d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32610 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32612 call 0x11b36000 */
  push32(0x11b32617u); f_11b36000();
  /* 11b32617 mov dword ptr [0x11b67888], 3 */
  w32((uint32_t)(0x11b67888), (0x3u));
  /* 11b32621 mov dword ptr [0x11b678d8], 3 */
  w32((uint32_t)(0x11b678d8), (0x3u));
  /* 11b3262b mov dword ptr [0x11b67908], 5 */
  w32((uint32_t)(0x11b67908), (0x5u));
  /* 11b32635 mov dword ptr [0x11b67938], 3 */
  w32((uint32_t)(0x11b67938), (0x3u));
  /* 11b3263f mov dword ptr [0x11b6793c], 2 */
  w32((uint32_t)(0x11b6793c), (0x2u));
  /* 11b32649 mov dword ptr [0x11b67968], 1 */
  w32((uint32_t)(0x11b67968), (0x1u));
  /* 11b32653 jmp 0x11b32736 */
  goto L_11b32736;
L_11b32658:;
  /* 11b32658 mov esi, esp */
  ESI = (ESP);
  /* 11b3265a push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11b3265f push 3 */
  push32((uint32_t)(0x3u));
  /* 11b32661 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32663 call dword ptr [0x11b6a490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a490))), 0x11b32669u);
  /* 11b32669 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3266c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3266e call 0x11b36000 */
  push32(0x11b32673u); f_11b36000();
  /* 11b32673 mov esi, esp */
  ESI = (ESP);
  /* 11b32675 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11b3267a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3267c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3267e call dword ptr [0x11b6a490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a490))), 0x11b32684u);
  /* 11b32684 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32687 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32689 call 0x11b36000 */
  push32(0x11b3268eu); f_11b36000();
  /* 11b3268e mov esi, esp */
  ESI = (ESP);
  /* 11b32690 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11b32695 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b32697 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32699 call dword ptr [0x11b6a490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a490))), 0x11b3269fu);
  /* 11b3269f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b326a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b326a4 call 0x11b36000 */
  push32(0x11b326a9u); f_11b36000();
  /* 11b326a9 mov esi, esp */
  ESI = (ESP);
  /* 11b326ab push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11b326b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b326b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b326b4 call dword ptr [0x11b6a490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a490))), 0x11b326bau);
  /* 11b326ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b326bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b326bf call 0x11b36000 */
  push32(0x11b326c4u); f_11b36000();
  /* 11b326c4 mov esi, esp */
  ESI = (ESP);
  /* 11b326c6 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11b326cb push 5 */
  push32((uint32_t)(0x5u));
  /* 11b326cd push 0 */
  push32((uint32_t)(0x0u));
  /* 11b326cf call dword ptr [0x11b6a490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a490))), 0x11b326d5u);
  /* 11b326d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b326d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b326da call 0x11b36000 */
  push32(0x11b326dfu); f_11b36000();
  /* 11b326df mov esi, esp */
  ESI = (ESP);
  /* 11b326e1 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11b326e6 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b326e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b326ea call dword ptr [0x11b6a490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a490))), 0x11b326f0u);
  /* 11b326f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b326f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b326f5 call 0x11b36000 */
  push32(0x11b326fau); f_11b36000();
  /* 11b326fa mov dword ptr [0x11b67888], 4 */
  w32((uint32_t)(0x11b67888), (0x4u));
  /* 11b32704 mov dword ptr [0x11b678d8], 4 */
  w32((uint32_t)(0x11b678d8), (0x4u));
  /* 11b3270e mov dword ptr [0x11b67908], 6 */
  w32((uint32_t)(0x11b67908), (0x6u));
  /* 11b32718 mov dword ptr [0x11b67938], 4 */
  w32((uint32_t)(0x11b67938), (0x4u));
  /* 11b32722 mov dword ptr [0x11b6793c], 2 */
  w32((uint32_t)(0x11b6793c), (0x2u));
  /* 11b3272c mov dword ptr [0x11b67968], 2 */
  w32((uint32_t)(0x11b67968), (0x2u));
L_11b32736:;
  /* 11b32736 mov esi, esp */
  ESI = (ESP);
  /* 11b32738 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11b3273d push 1 */
  push32((uint32_t)(0x1u));
  /* 11b3273f call dword ptr [0x11b6a49c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a49c))), 0x11b32745u);
  /* 11b32745 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32748 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3274a call 0x11b36000 */
  push32(0x11b3274fu); f_11b36000();
  /* 11b3274f mov esi, esp */
  ESI = (ESP);
  /* 11b32751 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11b32756 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b32758 call dword ptr [0x11b6a49c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a49c))), 0x11b3275eu);
  /* 11b3275e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32761 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32763 call 0x11b36000 */
  push32(0x11b32768u); f_11b36000();
  /* 11b32768 mov esi, esp */
  ESI = (ESP);
  /* 11b3276a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3276c call dword ptr [0x11b6a480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a480))), 0x11b32772u);
  /* 11b32772 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32775 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32777 call 0x11b36000 */
  push32(0x11b3277cu); f_11b36000();
  /* 11b3277c mov ecx, 5 */
  ECX = (0x5u);
  /* 11b32781 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b32783 imul ecx, ecx, 0x1388 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1388u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b32789 mov esi, esp */
  ESI = (ESP);
  /* 11b3278b push ecx */
  push32((uint32_t)(ECX));
  /* 11b3278c push 0xd */
  push32((uint32_t)(0xdu));
  /* 11b3278e call dword ptr [0x11b6a49c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a49c))), 0x11b32794u);
  /* 11b32794 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32797 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32799 call 0x11b36000 */
  push32(0x11b3279eu); f_11b36000();
  /* 11b3279e mov esi, esp */
  ESI = (ESP);
  /* 11b327a0 push 0x11b6255c */
  push32((uint32_t)(0x11b6255cu));
  /* 11b327a5 push 0x11b62330 */
  push32((uint32_t)(0x11b62330u));
  /* 11b327aa call dword ptr [0x11b6a4a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4a0))), 0x11b327b0u);
  /* 11b327b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b327b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b327b5 call 0x11b36000 */
  push32(0x11b327bau); f_11b36000();
  /* 11b327ba mov esi, esp */
  ESI = (ESP);
  /* 11b327bc push 0x11b62554 */
  push32((uint32_t)(0x11b62554u));
  /* 11b327c1 push 0x11b62330 */
  push32((uint32_t)(0x11b62330u));
  /* 11b327c6 call dword ptr [0x11b6a4a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4a0))), 0x11b327ccu);
  /* 11b327cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b327cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b327d1 call 0x11b36000 */
  push32(0x11b327d6u); f_11b36000();
  /* 11b327d6 mov esi, esp */
  ESI = (ESP);
  /* 11b327d8 push 0x11b6253c */
  push32((uint32_t)(0x11b6253cu));
  /* 11b327dd push 0x11b62330 */
  push32((uint32_t)(0x11b62330u));
  /* 11b327e2 call dword ptr [0x11b6a4a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4a0))), 0x11b327e8u);
  /* 11b327e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b327eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b327ed call 0x11b36000 */
  push32(0x11b327f2u); f_11b36000();
  /* 11b327f2 mov esi, esp */
  ESI = (ESP);
  /* 11b327f4 push 0x11b62530 */
  push32((uint32_t)(0x11b62530u));
  /* 11b327f9 push 0x11b62330 */
  push32((uint32_t)(0x11b62330u));
  /* 11b327fe call dword ptr [0x11b6a4a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4a0))), 0x11b32804u);
  /* 11b32804 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32807 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32809 call 0x11b36000 */
  push32(0x11b3280eu); f_11b36000();
  /* 11b3280e mov esi, esp */
  ESI = (ESP);
  /* 11b32810 push 0x11b62524 */
  push32((uint32_t)(0x11b62524u));
  /* 11b32815 push 0x11b62330 */
  push32((uint32_t)(0x11b62330u));
  /* 11b3281a call dword ptr [0x11b6a4a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4a0))), 0x11b32820u);
  /* 11b32820 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32823 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32825 call 0x11b36000 */
  push32(0x11b3282au); f_11b36000();
  /* 11b3282a mov esi, esp */
  ESI = (ESP);
  /* 11b3282c push 0x11b62518 */
  push32((uint32_t)(0x11b62518u));
  /* 11b32831 push 0x11b62330 */
  push32((uint32_t)(0x11b62330u));
  /* 11b32836 call dword ptr [0x11b6a4a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4a0))), 0x11b3283cu);
  /* 11b3283c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3283f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32841 call 0x11b36000 */
  push32(0x11b32846u); f_11b36000();
  /* 11b32846 mov esi, esp */
  ESI = (ESP);
  /* 11b32848 push 0x11b6250c */
  push32((uint32_t)(0x11b6250cu));
  /* 11b3284d push 0x11b62330 */
  push32((uint32_t)(0x11b62330u));
  /* 11b32852 call dword ptr [0x11b6a4a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4a0))), 0x11b32858u);
  /* 11b32858 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3285b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3285d call 0x11b36000 */
  push32(0x11b32862u); f_11b36000();
  /* 11b32862 mov esi, esp */
  ESI = (ESP);
  /* 11b32864 push 0x11b62500 */
  push32((uint32_t)(0x11b62500u));
  /* 11b32869 push 0x11b62330 */
  push32((uint32_t)(0x11b62330u));
  /* 11b3286e call dword ptr [0x11b6a4a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4a0))), 0x11b32874u);
  /* 11b32874 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32877 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32879 call 0x11b36000 */
  push32(0x11b3287eu); f_11b36000();
  /* 11b3287e mov esi, esp */
  ESI = (ESP);
  /* 11b32880 push 0x11b624f4 */
  push32((uint32_t)(0x11b624f4u));
  /* 11b32885 push 0x11b62330 */
  push32((uint32_t)(0x11b62330u));
  /* 11b3288a call dword ptr [0x11b6a4a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4a0))), 0x11b32890u);
  /* 11b32890 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32893 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32895 call 0x11b36000 */
  push32(0x11b3289au); f_11b36000();
  /* 11b3289a mov esi, esp */
  ESI = (ESP);
  /* 11b3289c push 0x11b624dc */
  push32((uint32_t)(0x11b624dcu));
  /* 11b328a1 push 0x11b62324 */
  push32((uint32_t)(0x11b62324u));
  /* 11b328a6 call dword ptr [0x11b6a4a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4a0))), 0x11b328acu);
  /* 11b328ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b328af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b328b1 call 0x11b36000 */
  push32(0x11b328b6u); f_11b36000();
  /* 11b328b6 mov esi, esp */
  ESI = (ESP);
  /* 11b328b8 push 0x11b624d4 */
  push32((uint32_t)(0x11b624d4u));
  /* 11b328bd push 0x11b62324 */
  push32((uint32_t)(0x11b62324u));
  /* 11b328c2 call dword ptr [0x11b6a4a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4a0))), 0x11b328c8u);
  /* 11b328c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b328cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b328cd call 0x11b36000 */
  push32(0x11b328d2u); f_11b36000();
  /* 11b328d2 mov esi, esp */
  ESI = (ESP);
  /* 11b328d4 push 0x11b624bc */
  push32((uint32_t)(0x11b624bcu));
  /* 11b328d9 push 0x11b62324 */
  push32((uint32_t)(0x11b62324u));
  /* 11b328de call dword ptr [0x11b6a4a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4a0))), 0x11b328e4u);
  /* 11b328e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b328e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b328e9 call 0x11b36000 */
  push32(0x11b328eeu); f_11b36000();
  /* 11b328ee mov esi, esp */
  ESI = (ESP);
  /* 11b328f0 push 0x11b624b0 */
  push32((uint32_t)(0x11b624b0u));
  /* 11b328f5 push 0x11b62324 */
  push32((uint32_t)(0x11b62324u));
  /* 11b328fa call dword ptr [0x11b6a4a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4a0))), 0x11b32900u);
  /* 11b32900 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32903 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32905 call 0x11b36000 */
  push32(0x11b3290au); f_11b36000();
  /* 11b3290a mov esi, esp */
  ESI = (ESP);
  /* 11b3290c push 0x11b624a4 */
  push32((uint32_t)(0x11b624a4u));
  /* 11b32911 push 0x11b62324 */
  push32((uint32_t)(0x11b62324u));
  /* 11b32916 call dword ptr [0x11b6a4a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4a0))), 0x11b3291cu);
  /* 11b3291c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3291f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32921 call 0x11b36000 */
  push32(0x11b32926u); f_11b36000();
  /* 11b32926 mov esi, esp */
  ESI = (ESP);
  /* 11b32928 push 0x11b62498 */
  push32((uint32_t)(0x11b62498u));
  /* 11b3292d push 0x11b62324 */
  push32((uint32_t)(0x11b62324u));
  /* 11b32932 call dword ptr [0x11b6a4a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4a0))), 0x11b32938u);
  /* 11b32938 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3293b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3293d call 0x11b36000 */
  push32(0x11b32942u); f_11b36000();
  /* 11b32942 mov esi, esp */
  ESI = (ESP);
  /* 11b32944 push 0x11b6248c */
  push32((uint32_t)(0x11b6248cu));
  /* 11b32949 push 0x11b62324 */
  push32((uint32_t)(0x11b62324u));
  /* 11b3294e call dword ptr [0x11b6a4a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4a0))), 0x11b32954u);
  /* 11b32954 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32957 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32959 call 0x11b36000 */
  push32(0x11b3295eu); f_11b36000();
  /* 11b3295e mov esi, esp */
  ESI = (ESP);
  /* 11b32960 push 0x11b62480 */
  push32((uint32_t)(0x11b62480u));
  /* 11b32965 push 0x11b62324 */
  push32((uint32_t)(0x11b62324u));
  /* 11b3296a call dword ptr [0x11b6a4a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4a0))), 0x11b32970u);
  /* 11b32970 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32973 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32975 call 0x11b36000 */
  push32(0x11b3297au); f_11b36000();
  /* 11b3297a mov esi, esp */
  ESI = (ESP);
  /* 11b3297c push 0x11b62474 */
  push32((uint32_t)(0x11b62474u));
  /* 11b32981 push 0x11b62324 */
  push32((uint32_t)(0x11b62324u));
  /* 11b32986 call dword ptr [0x11b6a4a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4a0))), 0x11b3298cu);
  /* 11b3298c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3298f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32991 call 0x11b36000 */
  push32(0x11b32996u); f_11b36000();
  /* 11b32996 mov esi, esp */
  ESI = (ESP);
  /* 11b32998 push 0x11b6245c */
  push32((uint32_t)(0x11b6245cu));
  /* 11b3299d push 0x11b6230c */
  push32((uint32_t)(0x11b6230cu));
  /* 11b329a2 call dword ptr [0x11b6a4a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4a0))), 0x11b329a8u);
  /* 11b329a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b329ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b329ad call 0x11b36000 */
  push32(0x11b329b2u); f_11b36000();
  /* 11b329b2 mov esi, esp */
  ESI = (ESP);
  /* 11b329b4 push 0x11b62454 */
  push32((uint32_t)(0x11b62454u));
  /* 11b329b9 push 0x11b6230c */
  push32((uint32_t)(0x11b6230cu));
  /* 11b329be call dword ptr [0x11b6a4a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4a0))), 0x11b329c4u);
  /* 11b329c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b329c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b329c9 call 0x11b36000 */
  push32(0x11b329ceu); f_11b36000();
  /* 11b329ce mov esi, esp */
  ESI = (ESP);
  /* 11b329d0 push 0x11b6243c */
  push32((uint32_t)(0x11b6243cu));
  /* 11b329d5 push 0x11b6230c */
  push32((uint32_t)(0x11b6230cu));
  /* 11b329da call dword ptr [0x11b6a4a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4a0))), 0x11b329e0u);
  /* 11b329e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b329e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b329e5 call 0x11b36000 */
  push32(0x11b329eau); f_11b36000();
  /* 11b329ea mov esi, esp */
  ESI = (ESP);
  /* 11b329ec push 0x11b62430 */
  push32((uint32_t)(0x11b62430u));
  /* 11b329f1 push 0x11b6230c */
  push32((uint32_t)(0x11b6230cu));
  /* 11b329f6 call dword ptr [0x11b6a4a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4a0))), 0x11b329fcu);
  /* 11b329fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b329ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32a01 call 0x11b36000 */
  push32(0x11b32a06u); f_11b36000();
  /* 11b32a06 mov esi, esp */
  ESI = (ESP);
  /* 11b32a08 push 0x11b62424 */
  push32((uint32_t)(0x11b62424u));
  /* 11b32a0d push 0x11b6230c */
  push32((uint32_t)(0x11b6230cu));
  /* 11b32a12 call dword ptr [0x11b6a4a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4a0))), 0x11b32a18u);
  /* 11b32a18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32a1b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32a1d call 0x11b36000 */
  push32(0x11b32a22u); f_11b36000();
  /* 11b32a22 mov esi, esp */
  ESI = (ESP);
  /* 11b32a24 push 0x11b62418 */
  push32((uint32_t)(0x11b62418u));
  /* 11b32a29 push 0x11b6230c */
  push32((uint32_t)(0x11b6230cu));
  /* 11b32a2e call dword ptr [0x11b6a4a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4a0))), 0x11b32a34u);
  /* 11b32a34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32a37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32a39 call 0x11b36000 */
  push32(0x11b32a3eu); f_11b36000();
  /* 11b32a3e mov esi, esp */
  ESI = (ESP);
  /* 11b32a40 push 0x11b6240c */
  push32((uint32_t)(0x11b6240cu));
  /* 11b32a45 push 0x11b6230c */
  push32((uint32_t)(0x11b6230cu));
  /* 11b32a4a call dword ptr [0x11b6a4a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4a0))), 0x11b32a50u);
  /* 11b32a50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32a53 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32a55 call 0x11b36000 */
  push32(0x11b32a5au); f_11b36000();
  /* 11b32a5a mov esi, esp */
  ESI = (ESP);
  /* 11b32a5c push 0x11b62400 */
  push32((uint32_t)(0x11b62400u));
  /* 11b32a61 push 0x11b6230c */
  push32((uint32_t)(0x11b6230cu));
  /* 11b32a66 call dword ptr [0x11b6a4a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4a0))), 0x11b32a6cu);
  /* 11b32a6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32a6f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32a71 call 0x11b36000 */
  push32(0x11b32a76u); f_11b36000();
  /* 11b32a76 mov esi, esp */
  ESI = (ESP);
  /* 11b32a78 push 0x11b623f4 */
  push32((uint32_t)(0x11b623f4u));
  /* 11b32a7d push 0x11b6230c */
  push32((uint32_t)(0x11b6230cu));
  /* 11b32a82 call dword ptr [0x11b6a4a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4a0))), 0x11b32a88u);
  /* 11b32a88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32a8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32a8d call 0x11b36000 */
  push32(0x11b32a92u); f_11b36000();
  /* 11b32a92 call 0x11b35e30 */
  push32(0x11b32a97u); f_11b35e30();
  /* 11b32a97 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11b32a9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b32a9c je 0x11b32acd */
  if (C.zf) goto L_11b32acd;
  /* 11b32a9e mov esi, esp */
  ESI = (ESP);
  /* 11b32aa0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32aa2 push 0x11b67848 */
  push32((uint32_t)(0x11b67848u));
  /* 11b32aa7 call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b32aadu);
  /* 11b32aad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32ab0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32ab2 call 0x11b36000 */
  push32(0x11b32ab7u); f_11b36000();
  /* 11b32ab7 mov esi, esp */
  ESI = (ESP);
  /* 11b32ab9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b32abb call dword ptr [0x11b6a48c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a48c))), 0x11b32ac1u);
  /* 11b32ac1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32ac4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32ac6 call 0x11b36000 */
  push32(0x11b32acbu); f_11b36000();
  /* 11b32acb jmp 0x11b32afa */
  goto L_11b32afa;
L_11b32acd:;
  /* 11b32acd mov esi, esp */
  ESI = (ESP);
  /* 11b32acf push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32ad1 push 0x11b67850 */
  push32((uint32_t)(0x11b67850u));
  /* 11b32ad6 call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b32adcu);
  /* 11b32adc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32adf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32ae1 call 0x11b36000 */
  push32(0x11b32ae6u); f_11b36000();
  /* 11b32ae6 mov esi, esp */
  ESI = (ESP);
  /* 11b32ae8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b32aea call dword ptr [0x11b6a48c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a48c))), 0x11b32af0u);
  /* 11b32af0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32af3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32af5 call 0x11b36000 */
  push32(0x11b32afau); f_11b36000();
L_11b32afa:;
  /* 11b32afa mov esi, esp */
  ESI = (ESP);
  /* 11b32afc push 1 */
  push32((uint32_t)(0x1u));
  /* 11b32afe call dword ptr [0x11b6a498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a498))), 0x11b32b04u);
  /* 11b32b04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32b07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32b09 call 0x11b36000 */
  push32(0x11b32b0eu); f_11b36000();
  /* 11b32b0e call 0x11b35e30 */
  push32(0x11b32b13u); f_11b35e30();
  /* 11b32b13 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11b32b16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b32b18 je 0x11b32b49 */
  if (C.zf) goto L_11b32b49;
  /* 11b32b1a mov esi, esp */
  ESI = (ESP);
  /* 11b32b1c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32b1e push 0x11b67838 */
  push32((uint32_t)(0x11b67838u));
  /* 11b32b23 call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b32b29u);
  /* 11b32b29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32b2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32b2e call 0x11b36000 */
  push32(0x11b32b33u); f_11b36000();
  /* 11b32b33 mov esi, esp */
  ESI = (ESP);
  /* 11b32b35 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b32b37 call dword ptr [0x11b6a48c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a48c))), 0x11b32b3du);
  /* 11b32b3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32b40 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32b42 call 0x11b36000 */
  push32(0x11b32b47u); f_11b36000();
  /* 11b32b47 jmp 0x11b32b76 */
  goto L_11b32b76;
L_11b32b49:;
  /* 11b32b49 mov esi, esp */
  ESI = (ESP);
  /* 11b32b4b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32b4d push 0x11b67840 */
  push32((uint32_t)(0x11b67840u));
  /* 11b32b52 call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b32b58u);
  /* 11b32b58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32b5b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32b5d call 0x11b36000 */
  push32(0x11b32b62u); f_11b36000();
  /* 11b32b62 mov esi, esp */
  ESI = (ESP);
  /* 11b32b64 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b32b66 call dword ptr [0x11b6a48c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a48c))), 0x11b32b6cu);
  /* 11b32b6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32b6f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32b71 call 0x11b36000 */
  push32(0x11b32b76u); f_11b36000();
L_11b32b76:;
  /* 11b32b76 call 0x11b35e30 */
  push32(0x11b32b7bu); f_11b35e30();
  /* 11b32b7b cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b32b7c mov ecx, 0x1f40 */
  ECX = (0x1f40u);
  /* 11b32b81 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b32b83 add edx, 0xfa0 */
  { uint32_t _a=(EDX),_b=(0xfa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32b89 mov esi, esp */
  ESI = (ESP);
  /* 11b32b8b push edx */
  push32((uint32_t)(EDX));
  /* 11b32b8c push 6 */
  push32((uint32_t)(0x6u));
  /* 11b32b8e call dword ptr [0x11b6a49c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a49c))), 0x11b32b94u);
  /* 11b32b94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32b97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32b99 call 0x11b36000 */
  push32(0x11b32b9eu); f_11b36000();
  /* 11b32b9e mov esi, esp */
  ESI = (ESP);
  /* 11b32ba0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b32ba2 call dword ptr [0x11b6a498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a498))), 0x11b32ba8u);
  /* 11b32ba8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32bab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32bad call 0x11b36000 */
  push32(0x11b32bb2u); f_11b36000();
  /* 11b32bb2 mov esi, esp */
  ESI = (ESP);
  /* 11b32bb4 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11b32bb9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b32bbb push 1 */
  push32((uint32_t)(0x1u));
  /* 11b32bbd call dword ptr [0x11b6a490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a490))), 0x11b32bc3u);
  /* 11b32bc3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32bc6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32bc8 call 0x11b36000 */
  push32(0x11b32bcdu); f_11b36000();
  /* 11b32bcd mov esi, esp */
  ESI = (ESP);
  /* 11b32bcf push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11b32bd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32bd6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b32bd8 call dword ptr [0x11b6a490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a490))), 0x11b32bdeu);
  /* 11b32bde add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32be1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32be3 call 0x11b36000 */
  push32(0x11b32be8u); f_11b36000();
  /* 11b32be8 mov esi, esp */
  ESI = (ESP);
  /* 11b32bea push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11b32bef push 2 */
  push32((uint32_t)(0x2u));
  /* 11b32bf1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b32bf3 call dword ptr [0x11b6a490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a490))), 0x11b32bf9u);
  /* 11b32bf9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32bfc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32bfe call 0x11b36000 */
  push32(0x11b32c03u); f_11b36000();
  /* 11b32c03 mov esi, esp */
  ESI = (ESP);
  /* 11b32c05 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11b32c0a push 1 */
  push32((uint32_t)(0x1u));
  /* 11b32c0c push 1 */
  push32((uint32_t)(0x1u));
  /* 11b32c0e call dword ptr [0x11b6a490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a490))), 0x11b32c14u);
  /* 11b32c14 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32c17 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32c19 call 0x11b36000 */
  push32(0x11b32c1eu); f_11b36000();
  /* 11b32c1e mov esi, esp */
  ESI = (ESP);
  /* 11b32c20 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11b32c25 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b32c27 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b32c29 call dword ptr [0x11b6a490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a490))), 0x11b32c2fu);
  /* 11b32c2f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32c32 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32c34 call 0x11b36000 */
  push32(0x11b32c39u); f_11b36000();
  /* 11b32c39 mov esi, esp */
  ESI = (ESP);
  /* 11b32c3b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11b32c40 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b32c42 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b32c44 call dword ptr [0x11b6a490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a490))), 0x11b32c4au);
  /* 11b32c4a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32c4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32c4f call 0x11b36000 */
  push32(0x11b32c54u); f_11b36000();
  /* 11b32c54 mov esi, esp */
  ESI = (ESP);
  /* 11b32c56 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32c58 call dword ptr [0x11b6a480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a480))), 0x11b32c5eu);
  /* 11b32c5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32c61 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32c63 call 0x11b36000 */
  push32(0x11b32c68u); f_11b36000();
  /* 11b32c68 mov esi, esp */
  ESI = (ESP);
  /* 11b32c6a push eax */
  push32((uint32_t)(EAX));
  /* 11b32c6b push 2 */
  push32((uint32_t)(0x2u));
  /* 11b32c6d push 1 */
  push32((uint32_t)(0x1u));
  /* 11b32c6f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32c71 push 0x11b623e8 */
  push32((uint32_t)(0x11b623e8u));
  /* 11b32c76 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b32c78 call dword ptr [0x11b6a4a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4a8))), 0x11b32c7eu);
  /* 11b32c7e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32c81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32c83 call 0x11b36000 */
  push32(0x11b32c88u); f_11b36000();
  /* 11b32c88 mov esi, esp */
  ESI = (ESP);
  /* 11b32c8a push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11b32c8f push 3 */
  push32((uint32_t)(0x3u));
  /* 11b32c91 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b32c93 call dword ptr [0x11b6a490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a490))), 0x11b32c99u);
  /* 11b32c99 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32c9c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32c9e call 0x11b36000 */
  push32(0x11b32ca3u); f_11b36000();
  /* 11b32ca3 mov esi, esp */
  ESI = (ESP);
  /* 11b32ca5 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11b32caa push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32cac push 2 */
  push32((uint32_t)(0x2u));
  /* 11b32cae call dword ptr [0x11b6a490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a490))), 0x11b32cb4u);
  /* 11b32cb4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32cb7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32cb9 call 0x11b36000 */
  push32(0x11b32cbeu); f_11b36000();
  /* 11b32cbe mov esi, esp */
  ESI = (ESP);
  /* 11b32cc0 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11b32cc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b32cc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b32cc9 call dword ptr [0x11b6a490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a490))), 0x11b32ccfu);
  /* 11b32ccf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32cd2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32cd4 call 0x11b36000 */
  push32(0x11b32cd9u); f_11b36000();
  /* 11b32cd9 mov esi, esp */
  ESI = (ESP);
  /* 11b32cdb push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11b32ce0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b32ce2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b32ce4 call dword ptr [0x11b6a490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a490))), 0x11b32ceau);
  /* 11b32cea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32ced cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32cef call 0x11b36000 */
  push32(0x11b32cf4u); f_11b36000();
  /* 11b32cf4 mov esi, esp */
  ESI = (ESP);
  /* 11b32cf6 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11b32cfb push 5 */
  push32((uint32_t)(0x5u));
  /* 11b32cfd push 2 */
  push32((uint32_t)(0x2u));
  /* 11b32cff call dword ptr [0x11b6a490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a490))), 0x11b32d05u);
  /* 11b32d05 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32d08 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32d0a call 0x11b36000 */
  push32(0x11b32d0fu); f_11b36000();
  /* 11b32d0f mov esi, esp */
  ESI = (ESP);
  /* 11b32d11 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11b32d16 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b32d18 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b32d1a call dword ptr [0x11b6a490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a490))), 0x11b32d20u);
  /* 11b32d20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32d23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32d25 call 0x11b36000 */
  push32(0x11b32d2au); f_11b36000();
  /* 11b32d2a mov esi, esp */
  ESI = (ESP);
  /* 11b32d2c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32d2e call dword ptr [0x11b6a480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a480))), 0x11b32d34u);
  /* 11b32d34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32d37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32d39 call 0x11b36000 */
  push32(0x11b32d3eu); f_11b36000();
  /* 11b32d3e mov esi, esp */
  ESI = (ESP);
  /* 11b32d40 push eax */
  push32((uint32_t)(EAX));
  /* 11b32d41 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b32d43 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b32d45 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32d47 push 0x11b623dc */
  push32((uint32_t)(0x11b623dcu));
  /* 11b32d4c push 2 */
  push32((uint32_t)(0x2u));
  /* 11b32d4e call dword ptr [0x11b6a4a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4a8))), 0x11b32d54u);
  /* 11b32d54 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32d57 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32d59 call 0x11b36000 */
  push32(0x11b32d5eu); f_11b36000();
L_11b32d5e:;
  /* 11b32d5e mov esi, esp */
  ESI = (ESP);
  /* 11b32d60 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32d62 push 0x11b679d8 */
  push32((uint32_t)(0x11b679d8u));
  /* 11b32d67 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32d69 call dword ptr [0x11b6a4ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4ac))), 0x11b32d6fu);
  /* 11b32d6f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32d72 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32d74 call 0x11b36000 */
  push32(0x11b32d79u); f_11b36000();
  /* 11b32d79 mov esi, esp */
  ESI = (ESP);
  /* 11b32d7b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32d7d call dword ptr [0x11b6a498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a498))), 0x11b32d83u);
  /* 11b32d83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32d86 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32d88 call 0x11b36000 */
  push32(0x11b32d8du); f_11b36000();
  /* 11b32d8d mov esi, esp */
  ESI = (ESP);
  /* 11b32d8f push 6 */
  push32((uint32_t)(0x6u));
  /* 11b32d91 call dword ptr [0x11b6a4a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4a4))), 0x11b32d97u);
  /* 11b32d97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32d9a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32d9c call 0x11b36000 */
  push32(0x11b32da1u); f_11b36000();
  /* 11b32da1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b32da6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b32da8 je 0x11b331e6 */
  if (C.zf) goto L_11b331e6;
  /* 11b32dae mov esi, esp */
  ESI = (ESP);
  /* 11b32db0 push 6 */
  push32((uint32_t)(0x6u));
  /* 11b32db2 call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b32db8u);
  /* 11b32db8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32dbb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32dbd call 0x11b36000 */
  push32(0x11b32dc2u); f_11b36000();
  /* 11b32dc2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b32dc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b32dc9 je 0x11b331e6 */
  if (C.zf) goto L_11b331e6;
  /* 11b32dcf mov esi, esp */
  ESI = (ESP);
  /* 11b32dd1 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11b32dd3 call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b32dd9u);
  /* 11b32dd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32ddc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32dde call 0x11b36000 */
  push32(0x11b32de3u); f_11b36000();
  /* 11b32de3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b32de8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b32dea je 0x11b331e6 */
  if (C.zf) goto L_11b331e6;
  /* 11b32df0 mov esi, esp */
  ESI = (ESP);
  /* 11b32df2 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11b32df4 call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b32dfau);
  /* 11b32dfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32dfd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32dff call 0x11b36000 */
  push32(0x11b32e04u); f_11b36000();
  /* 11b32e04 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b32e09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b32e0b je 0x11b331e6 */
  if (C.zf) goto L_11b331e6;
  /* 11b32e11 mov esi, esp */
  ESI = (ESP);
  /* 11b32e13 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32e15 push 6 */
  push32((uint32_t)(0x6u));
  /* 11b32e17 call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b32e1du);
  /* 11b32e1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32e20 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32e22 call 0x11b36000 */
  push32(0x11b32e27u); f_11b36000();
  /* 11b32e27 mov esi, esp */
  ESI = (ESP);
  /* 11b32e29 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b32e2b push 8 */
  push32((uint32_t)(0x8u));
  /* 11b32e2d call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b32e33u);
  /* 11b32e33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32e36 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32e38 call 0x11b36000 */
  push32(0x11b32e3du); f_11b36000();
  /* 11b32e3d mov esi, esp */
  ESI = (ESP);
  /* 11b32e3f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b32e41 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11b32e43 call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b32e49u);
  /* 11b32e49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32e4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32e4e call 0x11b36000 */
  push32(0x11b32e53u); f_11b36000();
  /* 11b32e53 call 0x11b35e30 */
  push32(0x11b32e58u); f_11b35e30();
  /* 11b32e58 and eax, 0x80000003 */
  { uint32_t _r=(EAX)&(0x80000003u); EAX = (_r); fl_logic(_r,32); }
  /* 11b32e5d jns 0x11b32e64 */
  if (!C.sf) goto L_11b32e64;
  /* 11b32e5f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b32e60 or eax, 0xfffffffc */
  { uint32_t _r=(EAX)|(0xfffffffcu); EAX = (_r); fl_logic(_r,32); }
  /* 11b32e63 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11b32e64:;
  /* 11b32e64 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11b32e67 cmp dword ptr [ebp - 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32e6b ja 0x11b33168 */
  if ((!C.cf&&!C.zf)) goto L_11b33168;
  /* 11b32e71 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b32e74 jmp dword ptr [edx*4 + 0x11b350e3] */
  switch (EDX) {
    case 0: goto L_11b32e7b;
    case 1: goto L_11b32f39;
    case 2: goto L_11b32ff4;
    case 3: goto L_11b330af;
    case 4: goto L_11b34da7;
    case 5: goto L_11b34e02;
    case 6: goto L_11b34e5d;
    case 7: goto L_11b34eb5;
    default: x86_unimpl("switch@0x11b32e74 out of table"); return;
  }
L_11b32e7b:;
  /* 11b32e7b mov esi, esp */
  ESI = (ESP);
  /* 11b32e7d push 0xc3 */
  push32((uint32_t)(0xc3u));
  /* 11b32e82 push 0x11b679b8 */
  push32((uint32_t)(0x11b679b8u));
  /* 11b32e87 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32e89 push 0x11b67830 */
  push32((uint32_t)(0x11b67830u));
  /* 11b32e8e push 0x11b67800 */
  push32((uint32_t)(0x11b67800u));
  /* 11b32e93 push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b32e98 call dword ptr [0x11b6a4b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4b4))), 0x11b32e9eu);
  /* 11b32e9e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32ea1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32ea3 call 0x11b36000 */
  push32(0x11b32ea8u); f_11b36000();
  /* 11b32ea8 mov esi, esp */
  ESI = (ESP);
  /* 11b32eaa push 0x11b67850 */
  push32((uint32_t)(0x11b67850u));
  /* 11b32eaf call dword ptr [0x11b6a4b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4b8))), 0x11b32eb5u);
  /* 11b32eb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32eb8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32eba call 0x11b36000 */
  push32(0x11b32ebfu); f_11b36000();
  /* 11b32ebf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b32ec1 jle 0x11b32efe */
  if ((C.zf||C.sf!=C.of)) goto L_11b32efe;
  /* 11b32ec3 mov esi, esp */
  ESI = (ESP);
  /* 11b32ec5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32ec7 push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b32ecc call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b32ed2u);
  /* 11b32ed2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32ed5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32ed7 call 0x11b36000 */
  push32(0x11b32edcu); f_11b36000();
  /* 11b32edc mov esi, esp */
  ESI = (ESP);
  /* 11b32ede push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32ee0 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11b32ee5 push 0x11b67970 */
  push32((uint32_t)(0x11b67970u));
  /* 11b32eea push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32eec call dword ptr [0x11b6a4b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4b0))), 0x11b32ef2u);
  /* 11b32ef2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32ef5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32ef7 call 0x11b36000 */
  push32(0x11b32efcu); f_11b36000();
  /* 11b32efc jmp 0x11b32f34 */
  goto L_11b32f34;
L_11b32efe:;
  /* 11b32efe mov esi, esp */
  ESI = (ESP);
  /* 11b32f00 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32f02 push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b32f07 call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b32f0du);
  /* 11b32f0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32f10 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32f12 call 0x11b36000 */
  push32(0x11b32f17u); f_11b36000();
  /* 11b32f17 mov esi, esp */
  ESI = (ESP);
  /* 11b32f19 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32f1b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32f1d push 0x11b679a0 */
  push32((uint32_t)(0x11b679a0u));
  /* 11b32f22 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32f24 call dword ptr [0x11b6a4b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4b0))), 0x11b32f2au);
  /* 11b32f2a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32f2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32f2f call 0x11b36000 */
  push32(0x11b32f34u); f_11b36000();
L_11b32f34:;
  /* 11b32f34 jmp 0x11b33168 */
  goto L_11b33168;
L_11b32f39:;
  /* 11b32f39 mov esi, esp */
  ESI = (ESP);
  /* 11b32f3b push 0xc3 */
  push32((uint32_t)(0xc3u));
  /* 11b32f40 push 0x11b679c0 */
  push32((uint32_t)(0x11b679c0u));
  /* 11b32f45 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32f47 push 0x11b67830 */
  push32((uint32_t)(0x11b67830u));
  /* 11b32f4c push 0x11b67800 */
  push32((uint32_t)(0x11b67800u));
  /* 11b32f51 push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b32f56 call dword ptr [0x11b6a4b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4b4))), 0x11b32f5cu);
  /* 11b32f5c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32f5f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32f61 call 0x11b36000 */
  push32(0x11b32f66u); f_11b36000();
  /* 11b32f66 mov esi, esp */
  ESI = (ESP);
  /* 11b32f68 push 0x11b67840 */
  push32((uint32_t)(0x11b67840u));
  /* 11b32f6d call dword ptr [0x11b6a4b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4b8))), 0x11b32f73u);
  /* 11b32f73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32f76 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32f78 call 0x11b36000 */
  push32(0x11b32f7du); f_11b36000();
  /* 11b32f7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b32f7f jle 0x11b32fb9 */
  if ((C.zf||C.sf!=C.of)) goto L_11b32fb9;
  /* 11b32f81 mov esi, esp */
  ESI = (ESP);
  /* 11b32f83 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32f85 push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b32f8a call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b32f90u);
  /* 11b32f90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32f93 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32f95 call 0x11b36000 */
  push32(0x11b32f9au); f_11b36000();
  /* 11b32f9a mov esi, esp */
  ESI = (ESP);
  /* 11b32f9c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32f9e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11b32fa0 push 0x11b67990 */
  push32((uint32_t)(0x11b67990u));
  /* 11b32fa5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32fa7 call dword ptr [0x11b6a4b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4b0))), 0x11b32fadu);
  /* 11b32fad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32fb0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32fb2 call 0x11b36000 */
  push32(0x11b32fb7u); f_11b36000();
  /* 11b32fb7 jmp 0x11b32fef */
  goto L_11b32fef;
L_11b32fb9:;
  /* 11b32fb9 mov esi, esp */
  ESI = (ESP);
  /* 11b32fbb push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32fbd push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b32fc2 call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b32fc8u);
  /* 11b32fc8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32fcb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32fcd call 0x11b36000 */
  push32(0x11b32fd2u); f_11b36000();
  /* 11b32fd2 mov esi, esp */
  ESI = (ESP);
  /* 11b32fd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32fd6 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 11b32fd8 push 0x11b679b0 */
  push32((uint32_t)(0x11b679b0u));
  /* 11b32fdd push 0 */
  push32((uint32_t)(0x0u));
  /* 11b32fdf call dword ptr [0x11b6a4b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4b0))), 0x11b32fe5u);
  /* 11b32fe5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b32fe8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b32fea call 0x11b36000 */
  push32(0x11b32fefu); f_11b36000();
L_11b32fef:;
  /* 11b32fef jmp 0x11b33168 */
  goto L_11b33168;
L_11b32ff4:;
  /* 11b32ff4 mov esi, esp */
  ESI = (ESP);
  /* 11b32ff6 push 0xc3 */
  push32((uint32_t)(0xc3u));
  /* 11b32ffb push 0x11b679c8 */
  push32((uint32_t)(0x11b679c8u));
  /* 11b33000 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33002 push 0x11b67830 */
  push32((uint32_t)(0x11b67830u));
  /* 11b33007 push 0x11b67800 */
  push32((uint32_t)(0x11b67800u));
  /* 11b3300c push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b33011 call dword ptr [0x11b6a4b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4b4))), 0x11b33017u);
  /* 11b33017 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3301a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3301c call 0x11b36000 */
  push32(0x11b33021u); f_11b36000();
  /* 11b33021 mov esi, esp */
  ESI = (ESP);
  /* 11b33023 push 0x11b67840 */
  push32((uint32_t)(0x11b67840u));
  /* 11b33028 call dword ptr [0x11b6a4b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4b8))), 0x11b3302eu);
  /* 11b3302e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33031 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33033 call 0x11b36000 */
  push32(0x11b33038u); f_11b36000();
  /* 11b33038 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3303a jle 0x11b33074 */
  if ((C.zf||C.sf!=C.of)) goto L_11b33074;
  /* 11b3303c mov esi, esp */
  ESI = (ESP);
  /* 11b3303e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33040 push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b33045 call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b3304bu);
  /* 11b3304b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3304e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33050 call 0x11b36000 */
  push32(0x11b33055u); f_11b36000();
  /* 11b33055 mov esi, esp */
  ESI = (ESP);
  /* 11b33057 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33059 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11b3305b push 0x11b67990 */
  push32((uint32_t)(0x11b67990u));
  /* 11b33060 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33062 call dword ptr [0x11b6a4b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4b0))), 0x11b33068u);
  /* 11b33068 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3306b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3306d call 0x11b36000 */
  push32(0x11b33072u); f_11b36000();
  /* 11b33072 jmp 0x11b330aa */
  goto L_11b330aa;
L_11b33074:;
  /* 11b33074 mov esi, esp */
  ESI = (ESP);
  /* 11b33076 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33078 push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b3307d call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b33083u);
  /* 11b33083 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33086 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33088 call 0x11b36000 */
  push32(0x11b3308du); f_11b36000();
  /* 11b3308d mov esi, esp */
  ESI = (ESP);
  /* 11b3308f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33091 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 11b33093 push 0x11b679b0 */
  push32((uint32_t)(0x11b679b0u));
  /* 11b33098 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3309a call dword ptr [0x11b6a4b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4b0))), 0x11b330a0u);
  /* 11b330a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b330a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b330a5 call 0x11b36000 */
  push32(0x11b330aau); f_11b36000();
L_11b330aa:;
  /* 11b330aa jmp 0x11b33168 */
  goto L_11b33168;
L_11b330af:;
  /* 11b330af mov esi, esp */
  ESI = (ESP);
  /* 11b330b1 push 0xc3 */
  push32((uint32_t)(0xc3u));
  /* 11b330b6 push 0x11b679d0 */
  push32((uint32_t)(0x11b679d0u));
  /* 11b330bb push 0 */
  push32((uint32_t)(0x0u));
  /* 11b330bd push 0x11b67830 */
  push32((uint32_t)(0x11b67830u));
  /* 11b330c2 push 0x11b67800 */
  push32((uint32_t)(0x11b67800u));
  /* 11b330c7 push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b330cc call dword ptr [0x11b6a4b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4b4))), 0x11b330d2u);
  /* 11b330d2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b330d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b330d7 call 0x11b36000 */
  push32(0x11b330dcu); f_11b36000();
  /* 11b330dc mov esi, esp */
  ESI = (ESP);
  /* 11b330de push 0x11b67850 */
  push32((uint32_t)(0x11b67850u));
  /* 11b330e3 call dword ptr [0x11b6a4b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4b8))), 0x11b330e9u);
  /* 11b330e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b330ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b330ee call 0x11b36000 */
  push32(0x11b330f3u); f_11b36000();
  /* 11b330f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b330f5 jle 0x11b33132 */
  if ((C.zf||C.sf!=C.of)) goto L_11b33132;
  /* 11b330f7 mov esi, esp */
  ESI = (ESP);
  /* 11b330f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b330fb push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b33100 call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b33106u);
  /* 11b33106 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33109 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3310b call 0x11b36000 */
  push32(0x11b33110u); f_11b36000();
  /* 11b33110 mov esi, esp */
  ESI = (ESP);
  /* 11b33112 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33114 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11b33119 push 0x11b67970 */
  push32((uint32_t)(0x11b67970u));
  /* 11b3311e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33120 call dword ptr [0x11b6a4b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4b0))), 0x11b33126u);
  /* 11b33126 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33129 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3312b call 0x11b36000 */
  push32(0x11b33130u); f_11b36000();
  /* 11b33130 jmp 0x11b33168 */
  goto L_11b33168;
L_11b33132:;
  /* 11b33132 mov esi, esp */
  ESI = (ESP);
  /* 11b33134 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33136 push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b3313b call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b33141u);
  /* 11b33141 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33144 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33146 call 0x11b36000 */
  push32(0x11b3314bu); f_11b36000();
  /* 11b3314b mov esi, esp */
  ESI = (ESP);
  /* 11b3314d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3314f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33151 push 0x11b679a0 */
  push32((uint32_t)(0x11b679a0u));
  /* 11b33156 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33158 call dword ptr [0x11b6a4b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4b0))), 0x11b3315eu);
  /* 11b3315e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33161 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33163 call 0x11b36000 */
  push32(0x11b33168u); f_11b36000();
L_11b33168:;
  /* 11b33168 mov esi, esp */
  ESI = (ESP);
  /* 11b3316a push 1 */
  push32((uint32_t)(0x1u));
  /* 11b3316c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3316e call dword ptr [0x11b6a4c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4c0))), 0x11b33174u);
  /* 11b33174 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33177 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33179 call 0x11b36000 */
  push32(0x11b3317eu); f_11b36000();
  /* 11b3317e mov dword ptr [0x11b678dc], eax */
  w32((uint32_t)(0x11b678dc), (EAX));
  /* 11b33183 mov esi, esp */
  ESI = (ESP);
  /* 11b33185 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33187 call dword ptr [0x11b6a480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a480))), 0x11b3318du);
  /* 11b3318d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33190 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33192 call 0x11b36000 */
  push32(0x11b33197u); f_11b36000();
  /* 11b33197 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3319a mov ecx, dword ptr [0x11b678dc] */
  ECX = (r32((uint32_t)(0x11b678dc)));
  /* 11b331a0 imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b331a3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11b331a6 fild dword ptr [ebp - 0x14] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x14)));
  /* 11b331a9 fmul qword ptr [0x11b623d0] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x11b623d0)));
  /* 11b331af fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11b331b1 call 0x11b360ec */
  push32(0x11b331b6u); f_11b360ec();
  /* 11b331b6 mov esi, esp */
  ESI = (ESP);
  /* 11b331b8 push eax */
  push32((uint32_t)(EAX));
  /* 11b331b9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b331bb push 0 */
  push32((uint32_t)(0x0u));
  /* 11b331bd call dword ptr [0x11b6a4c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4c4))), 0x11b331c3u);
  /* 11b331c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b331c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b331c8 call 0x11b36000 */
  push32(0x11b331cdu); f_11b36000();
  /* 11b331cd mov esi, esp */
  ESI = (ESP);
  /* 11b331cf push 0x44c */
  push32((uint32_t)(0x44cu));
  /* 11b331d4 push 7 */
  push32((uint32_t)(0x7u));
  /* 11b331d6 call dword ptr [0x11b6a49c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a49c))), 0x11b331dcu);
  /* 11b331dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b331df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b331e1 call 0x11b36000 */
  push32(0x11b331e6u); f_11b36000();
L_11b331e6:;
  /* 11b331e6 mov esi, esp */
  ESI = (ESP);
  /* 11b331e8 push 6 */
  push32((uint32_t)(0x6u));
  /* 11b331ea call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b331f0u);
  /* 11b331f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b331f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b331f5 call 0x11b36000 */
  push32(0x11b331fau); f_11b36000();
  /* 11b331fa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b331ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b33201 jne 0x11b3337b */
  if (!C.zf) goto L_11b3337b;
  /* 11b33207 mov esi, esp */
  ESI = (ESP);
  /* 11b33209 push 7 */
  push32((uint32_t)(0x7u));
  /* 11b3320b call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b33211u);
  /* 11b33211 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33214 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33216 call 0x11b36000 */
  push32(0x11b3321bu); f_11b36000();
  /* 11b3321b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b33220 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b33222 je 0x11b3337b */
  if (C.zf) goto L_11b3337b;
  /* 11b33228 mov esi, esp */
  ESI = (ESP);
  /* 11b3322a push 7 */
  push32((uint32_t)(0x7u));
  /* 11b3322c call dword ptr [0x11b6a4bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4bc))), 0x11b33232u);
  /* 11b33232 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33235 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33237 call 0x11b36000 */
  push32(0x11b3323cu); f_11b36000();
  /* 11b3323c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b33241 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b33243 jne 0x11b33264 */
  if (!C.zf) goto L_11b33264;
  /* 11b33245 mov esi, esp */
  ESI = (ESP);
  /* 11b33247 push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b3324c call dword ptr [0x11b6a4b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4b8))), 0x11b33252u);
  /* 11b33252 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33257 call 0x11b36000 */
  push32(0x11b3325cu); f_11b36000();
  /* 11b3325c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3325e jne 0x11b3337b */
  if (!C.zf) goto L_11b3337b;
L_11b33264:;
  /* 11b33264 mov esi, esp */
  ESI = (ESP);
  /* 11b33266 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33268 call dword ptr [0x11b6a480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a480))), 0x11b3326eu);
  /* 11b3326e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33271 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33273 call 0x11b36000 */
  push32(0x11b33278u); f_11b36000();
  /* 11b33278 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3327b mov edx, dword ptr [0x11b678dc] */
  EDX = (r32((uint32_t)(0x11b678dc)));
  /* 11b33281 imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b33284 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11b33287 fild dword ptr [ebp - 0x18] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x18)));
  /* 11b3328a fmul qword ptr [0x11b623d0] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x11b623d0)));
  /* 11b33290 call 0x11b360ec */
  push32(0x11b33295u); f_11b360ec();
  /* 11b33295 mov esi, esp */
  ESI = (ESP);
  /* 11b33297 push eax */
  push32((uint32_t)(EAX));
  /* 11b33298 push 0x11b623c8 */
  push32((uint32_t)(0x11b623c8u));
  /* 11b3329d call dword ptr [0x11b6a4cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4cc))), 0x11b332a3u);
  /* 11b332a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b332a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b332a8 call 0x11b36000 */
  push32(0x11b332adu); f_11b36000();
  /* 11b332ad mov esi, esp */
  ESI = (ESP);
  /* 11b332af push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b332b4 call dword ptr [0x11b6a4b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4b8))), 0x11b332bau);
  /* 11b332ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b332bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b332bf call 0x11b36000 */
  push32(0x11b332c4u); f_11b36000();
  /* 11b332c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b332c6 jle 0x11b332f5 */
  if ((C.zf||C.sf!=C.of)) goto L_11b332f5;
  /* 11b332c8 mov esi, esp */
  ESI = (ESP);
  /* 11b332ca push 0 */
  push32((uint32_t)(0x0u));
  /* 11b332cc push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b332d1 call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b332d7u);
  /* 11b332d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b332da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b332dc call 0x11b36000 */
  push32(0x11b332e1u); f_11b36000();
  /* 11b332e1 mov esi, esp */
  ESI = (ESP);
  /* 11b332e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b332e5 call dword ptr [0x11b6a4d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4d0))), 0x11b332ebu);
  /* 11b332eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b332ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b332f0 call 0x11b36000 */
  push32(0x11b332f5u); f_11b36000();
L_11b332f5:;
  /* 11b332f5 mov esi, esp */
  ESI = (ESP);
  /* 11b332f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b332f9 call dword ptr [0x11b6a480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a480))), 0x11b332ffu);
  /* 11b332ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33302 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33304 call 0x11b36000 */
  push32(0x11b33309u); f_11b36000();
  /* 11b33309 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3330c mov ecx, dword ptr [0x11b678dc] */
  ECX = (r32((uint32_t)(0x11b678dc)));
  /* 11b33312 imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b33315 mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 11b33318 fild dword ptr [ebp - 0x1c] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x1c)));
  /* 11b3331b fmul qword ptr [0x11b623d0] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x11b623d0)));
  /* 11b33321 call 0x11b360ec */
  push32(0x11b33326u); f_11b360ec();
  /* 11b33326 mov esi, esp */
  ESI = (ESP);
  /* 11b33328 push eax */
  push32((uint32_t)(EAX));
  /* 11b33329 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b3332b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3332d call dword ptr [0x11b6a4c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4c4))), 0x11b33333u);
  /* 11b33333 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33336 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33338 call 0x11b36000 */
  push32(0x11b3333du); f_11b36000();
  /* 11b3333d mov esi, esp */
  ESI = (ESP);
  /* 11b3333f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b33341 push 6 */
  push32((uint32_t)(0x6u));
  /* 11b33343 call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b33349u);
  /* 11b33349 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3334c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3334e call 0x11b36000 */
  push32(0x11b33353u); f_11b36000();
  /* 11b33353 call 0x11b35e30 */
  push32(0x11b33358u); f_11b35e30();
  /* 11b33358 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b33359 mov ecx, 0x1f40 */
  ECX = (0x1f40u);
  /* 11b3335e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b33360 add edx, 0xfa0 */
  { uint32_t _a=(EDX),_b=(0xfa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33366 mov esi, esp */
  ESI = (ESP);
  /* 11b33368 push edx */
  push32((uint32_t)(EDX));
  /* 11b33369 push 6 */
  push32((uint32_t)(0x6u));
  /* 11b3336b call dword ptr [0x11b6a49c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a49c))), 0x11b33371u);
  /* 11b33371 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33374 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33376 call 0x11b36000 */
  push32(0x11b3337bu); f_11b36000();
L_11b3337b:;
  /* 11b3337b mov esi, esp */
  ESI = (ESP);
  /* 11b3337d push 7 */
  push32((uint32_t)(0x7u));
  /* 11b3337f call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b33385u);
  /* 11b33385 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33388 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3338a call 0x11b36000 */
  push32(0x11b3338fu); f_11b36000();
  /* 11b3338f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b33394 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b33396 je 0x11b334f2 */
  if (C.zf) goto L_11b334f2;
  /* 11b3339c mov esi, esp */
  ESI = (ESP);
  /* 11b3339e push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b333a3 push 0x11b67970 */
  push32((uint32_t)(0x11b67970u));
  /* 11b333a8 call dword ptr [0x11b6a4c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4c8))), 0x11b333aeu);
  /* 11b333ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b333b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b333b3 call 0x11b36000 */
  push32(0x11b333b8u); f_11b36000();
  /* 11b333b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b333ba jle 0x11b334f2 */
  if ((C.zf||C.sf!=C.of)) goto L_11b334f2;
  /* 11b333c0 mov esi, esp */
  ESI = (ESP);
  /* 11b333c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b333c4 push 7 */
  push32((uint32_t)(0x7u));
  /* 11b333c6 call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b333ccu);
  /* 11b333cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b333cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b333d1 call 0x11b36000 */
  push32(0x11b333d6u); f_11b36000();
  /* 11b333d6 mov esi, esp */
  ESI = (ESP);
  /* 11b333d8 push 7 */
  push32((uint32_t)(0x7u));
  /* 11b333da push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b333df call dword ptr [0x11b6a4d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4d8))), 0x11b333e5u);
  /* 11b333e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b333e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b333ea call 0x11b36000 */
  push32(0x11b333efu); f_11b36000();
  /* 11b333ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b333f1 jle 0x11b33424 */
  if ((C.zf||C.sf!=C.of)) goto L_11b33424;
  /* 11b333f3 mov esi, esp */
  ESI = (ESP);
  /* 11b333f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b333f7 push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b333fc call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b33402u);
  /* 11b33402 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33405 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33407 call 0x11b36000 */
  push32(0x11b3340cu); f_11b36000();
  /* 11b3340c mov esi, esp */
  ESI = (ESP);
  /* 11b3340e push 6 */
  push32((uint32_t)(0x6u));
  /* 11b33410 push 7 */
  push32((uint32_t)(0x7u));
  /* 11b33412 call dword ptr [0x11b6a4dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4dc))), 0x11b33418u);
  /* 11b33418 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3341b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3341d call 0x11b36000 */
  push32(0x11b33422u); f_11b36000();
  /* 11b33422 jmp 0x11b33453 */
  goto L_11b33453;
L_11b33424:;
  /* 11b33424 mov esi, esp */
  ESI = (ESP);
  /* 11b33426 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33428 push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b3342d call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b33433u);
  /* 11b33433 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33436 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33438 call 0x11b36000 */
  push32(0x11b3343du); f_11b36000();
  /* 11b3343d mov esi, esp */
  ESI = (ESP);
  /* 11b3343f push 6 */
  push32((uint32_t)(0x6u));
  /* 11b33441 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33443 call dword ptr [0x11b6a4dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4dc))), 0x11b33449u);
  /* 11b33449 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3344c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3344e call 0x11b36000 */
  push32(0x11b33453u); f_11b36000();
L_11b33453:;
  /* 11b33453 mov esi, esp */
  ESI = (ESP);
  /* 11b33455 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33457 push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b3345c call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b33462u);
  /* 11b33462 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33465 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33467 call 0x11b36000 */
  push32(0x11b3346cu); f_11b36000();
  /* 11b3346c mov esi, esp */
  ESI = (ESP);
  /* 11b3346e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33470 push 0x8c */
  push32((uint32_t)(0x8cu));
  /* 11b33475 push 0x11b67a20 */
  push32((uint32_t)(0x11b67a20u));
  /* 11b3347a push 6 */
  push32((uint32_t)(0x6u));
  /* 11b3347c call dword ptr [0x11b6a4b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4b0))), 0x11b33482u);
  /* 11b33482 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33485 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33487 call 0x11b36000 */
  push32(0x11b3348cu); f_11b36000();
  /* 11b3348c mov esi, esp */
  ESI = (ESP);
  /* 11b3348e push 2 */
  push32((uint32_t)(0x2u));
  /* 11b33490 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33492 push 0x11b67978 */
  push32((uint32_t)(0x11b67978u));
  /* 11b33497 push 6 */
  push32((uint32_t)(0x6u));
  /* 11b33499 call dword ptr [0x11b6a4b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4b0))), 0x11b3349fu);
  /* 11b3349f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b334a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b334a4 call 0x11b36000 */
  push32(0x11b334a9u); f_11b36000();
  /* 11b334a9 mov esi, esp */
  ESI = (ESP);
  /* 11b334ab push 0 */
  push32((uint32_t)(0x0u));
  /* 11b334ad call dword ptr [0x11b6a480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a480))), 0x11b334b3u);
  /* 11b334b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b334b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b334b8 call 0x11b36000 */
  push32(0x11b334bdu); f_11b36000();
  /* 11b334bd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b334c0 mov edx, dword ptr [0x11b678dc] */
  EDX = (r32((uint32_t)(0x11b678dc)));
  /* 11b334c6 imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b334c9 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11b334cc fild dword ptr [ebp - 0x20] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x20)));
  /* 11b334cf fmul qword ptr [0x11b623d0] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x11b623d0)));
  /* 11b334d5 call 0x11b360ec */
  push32(0x11b334dau); f_11b360ec();
  /* 11b334da mov esi, esp */
  ESI = (ESP);
  /* 11b334dc push eax */
  push32((uint32_t)(EAX));
  /* 11b334dd push 0x11b623c0 */
  push32((uint32_t)(0x11b623c0u));
  /* 11b334e2 call dword ptr [0x11b6a4cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4cc))), 0x11b334e8u);
  /* 11b334e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b334eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b334ed call 0x11b36000 */
  push32(0x11b334f2u); f_11b36000();
L_11b334f2:;
  /* 11b334f2 mov esi, esp */
  ESI = (ESP);
  /* 11b334f4 push 7 */
  push32((uint32_t)(0x7u));
  /* 11b334f6 call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b334fcu);
  /* 11b334fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b334ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33501 call 0x11b36000 */
  push32(0x11b33506u); f_11b36000();
  /* 11b33506 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3350b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3350d je 0x11b33669 */
  if (C.zf) goto L_11b33669;
  /* 11b33513 mov esi, esp */
  ESI = (ESP);
  /* 11b33515 push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b3351a push 0x11b679a0 */
  push32((uint32_t)(0x11b679a0u));
  /* 11b3351f call dword ptr [0x11b6a4c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4c8))), 0x11b33525u);
  /* 11b33525 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33528 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3352a call 0x11b36000 */
  push32(0x11b3352fu); f_11b36000();
  /* 11b3352f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b33531 jle 0x11b33669 */
  if ((C.zf||C.sf!=C.of)) goto L_11b33669;
  /* 11b33537 mov esi, esp */
  ESI = (ESP);
  /* 11b33539 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3353b push 7 */
  push32((uint32_t)(0x7u));
  /* 11b3353d call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b33543u);
  /* 11b33543 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33546 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33548 call 0x11b36000 */
  push32(0x11b3354du); f_11b36000();
  /* 11b3354d mov esi, esp */
  ESI = (ESP);
  /* 11b3354f push 7 */
  push32((uint32_t)(0x7u));
  /* 11b33551 push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b33556 call dword ptr [0x11b6a4d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4d8))), 0x11b3355cu);
  /* 11b3355c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3355f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33561 call 0x11b36000 */
  push32(0x11b33566u); f_11b36000();
  /* 11b33566 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b33568 jle 0x11b3359b */
  if ((C.zf||C.sf!=C.of)) goto L_11b3359b;
  /* 11b3356a mov esi, esp */
  ESI = (ESP);
  /* 11b3356c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3356e push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b33573 call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b33579u);
  /* 11b33579 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3357c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3357e call 0x11b36000 */
  push32(0x11b33583u); f_11b36000();
  /* 11b33583 mov esi, esp */
  ESI = (ESP);
  /* 11b33585 push 6 */
  push32((uint32_t)(0x6u));
  /* 11b33587 push 7 */
  push32((uint32_t)(0x7u));
  /* 11b33589 call dword ptr [0x11b6a4dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4dc))), 0x11b3358fu);
  /* 11b3358f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33592 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33594 call 0x11b36000 */
  push32(0x11b33599u); f_11b36000();
  /* 11b33599 jmp 0x11b335ca */
  goto L_11b335ca;
L_11b3359b:;
  /* 11b3359b mov esi, esp */
  ESI = (ESP);
  /* 11b3359d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3359f push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b335a4 call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b335aau);
  /* 11b335aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b335ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b335af call 0x11b36000 */
  push32(0x11b335b4u); f_11b36000();
  /* 11b335b4 mov esi, esp */
  ESI = (ESP);
  /* 11b335b6 push 6 */
  push32((uint32_t)(0x6u));
  /* 11b335b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b335ba call dword ptr [0x11b6a4dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4dc))), 0x11b335c0u);
  /* 11b335c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b335c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b335c5 call 0x11b36000 */
  push32(0x11b335cau); f_11b36000();
L_11b335ca:;
  /* 11b335ca mov esi, esp */
  ESI = (ESP);
  /* 11b335cc push 0 */
  push32((uint32_t)(0x0u));
  /* 11b335ce push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b335d3 call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b335d9u);
  /* 11b335d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b335dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b335de call 0x11b36000 */
  push32(0x11b335e3u); f_11b36000();
  /* 11b335e3 mov esi, esp */
  ESI = (ESP);
  /* 11b335e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b335e7 push 0xdc */
  push32((uint32_t)(0xdcu));
  /* 11b335ec push 0x11b67a18 */
  push32((uint32_t)(0x11b67a18u));
  /* 11b335f1 push 6 */
  push32((uint32_t)(0x6u));
  /* 11b335f3 call dword ptr [0x11b6a4b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4b0))), 0x11b335f9u);
  /* 11b335f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b335fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b335fe call 0x11b36000 */
  push32(0x11b33603u); f_11b36000();
  /* 11b33603 mov esi, esp */
  ESI = (ESP);
  /* 11b33605 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b33607 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33609 push 0x11b679a8 */
  push32((uint32_t)(0x11b679a8u));
  /* 11b3360e push 6 */
  push32((uint32_t)(0x6u));
  /* 11b33610 call dword ptr [0x11b6a4b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4b0))), 0x11b33616u);
  /* 11b33616 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33619 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3361b call 0x11b36000 */
  push32(0x11b33620u); f_11b36000();
  /* 11b33620 mov esi, esp */
  ESI = (ESP);
  /* 11b33622 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33624 call dword ptr [0x11b6a480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a480))), 0x11b3362au);
  /* 11b3362a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3362d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3362f call 0x11b36000 */
  push32(0x11b33634u); f_11b36000();
  /* 11b33634 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33637 mov ecx, dword ptr [0x11b678dc] */
  ECX = (r32((uint32_t)(0x11b678dc)));
  /* 11b3363d imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b33640 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11b33643 fild dword ptr [ebp - 0x24] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x24)));
  /* 11b33646 fmul qword ptr [0x11b623d0] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x11b623d0)));
  /* 11b3364c call 0x11b360ec */
  push32(0x11b33651u); f_11b360ec();
  /* 11b33651 mov esi, esp */
  ESI = (ESP);
  /* 11b33653 push eax */
  push32((uint32_t)(EAX));
  /* 11b33654 push 0x11b623c0 */
  push32((uint32_t)(0x11b623c0u));
  /* 11b33659 call dword ptr [0x11b6a4cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4cc))), 0x11b3365fu);
  /* 11b3365f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33662 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33664 call 0x11b36000 */
  push32(0x11b33669u); f_11b36000();
L_11b33669:;
  /* 11b33669 mov esi, esp */
  ESI = (ESP);
  /* 11b3366b push 7 */
  push32((uint32_t)(0x7u));
  /* 11b3366d call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b33673u);
  /* 11b33673 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33676 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33678 call 0x11b36000 */
  push32(0x11b3367du); f_11b36000();
  /* 11b3367d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b33682 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b33684 je 0x11b337c0 */
  if (C.zf) goto L_11b337c0;
  /* 11b3368a mov esi, esp */
  ESI = (ESP);
  /* 11b3368c push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b33691 push 0x11b67990 */
  push32((uint32_t)(0x11b67990u));
  /* 11b33696 call dword ptr [0x11b6a4c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4c8))), 0x11b3369cu);
  /* 11b3369c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3369f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b336a1 call 0x11b36000 */
  push32(0x11b336a6u); f_11b36000();
  /* 11b336a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b336a8 jle 0x11b337c0 */
  if ((C.zf||C.sf!=C.of)) goto L_11b337c0;
  /* 11b336ae mov esi, esp */
  ESI = (ESP);
  /* 11b336b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b336b2 push 7 */
  push32((uint32_t)(0x7u));
  /* 11b336b4 call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b336bau);
  /* 11b336ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b336bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b336bf call 0x11b36000 */
  push32(0x11b336c4u); f_11b36000();
  /* 11b336c4 mov esi, esp */
  ESI = (ESP);
  /* 11b336c6 push 7 */
  push32((uint32_t)(0x7u));
  /* 11b336c8 push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b336cd call dword ptr [0x11b6a4d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4d8))), 0x11b336d3u);
  /* 11b336d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b336d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b336d8 call 0x11b36000 */
  push32(0x11b336ddu); f_11b36000();
  /* 11b336dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b336df jle 0x11b33712 */
  if ((C.zf||C.sf!=C.of)) goto L_11b33712;
  /* 11b336e1 mov esi, esp */
  ESI = (ESP);
  /* 11b336e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b336e5 push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b336ea call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b336f0u);
  /* 11b336f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b336f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b336f5 call 0x11b36000 */
  push32(0x11b336fau); f_11b36000();
  /* 11b336fa mov esi, esp */
  ESI = (ESP);
  /* 11b336fc push 6 */
  push32((uint32_t)(0x6u));
  /* 11b336fe push 7 */
  push32((uint32_t)(0x7u));
  /* 11b33700 call dword ptr [0x11b6a4dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4dc))), 0x11b33706u);
  /* 11b33706 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33709 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3370b call 0x11b36000 */
  push32(0x11b33710u); f_11b36000();
  /* 11b33710 jmp 0x11b33741 */
  goto L_11b33741;
L_11b33712:;
  /* 11b33712 mov esi, esp */
  ESI = (ESP);
  /* 11b33714 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33716 push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b3371b call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b33721u);
  /* 11b33721 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33724 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33726 call 0x11b36000 */
  push32(0x11b3372bu); f_11b36000();
  /* 11b3372b mov esi, esp */
  ESI = (ESP);
  /* 11b3372d push 6 */
  push32((uint32_t)(0x6u));
  /* 11b3372f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33731 call dword ptr [0x11b6a4dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4dc))), 0x11b33737u);
  /* 11b33737 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3373a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3373c call 0x11b36000 */
  push32(0x11b33741u); f_11b36000();
L_11b33741:;
  /* 11b33741 mov esi, esp */
  ESI = (ESP);
  /* 11b33743 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33745 push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b3374a call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b33750u);
  /* 11b33750 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33753 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33755 call 0x11b36000 */
  push32(0x11b3375au); f_11b36000();
  /* 11b3375a mov esi, esp */
  ESI = (ESP);
  /* 11b3375c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3375e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33760 push 0x11b67998 */
  push32((uint32_t)(0x11b67998u));
  /* 11b33765 push 6 */
  push32((uint32_t)(0x6u));
  /* 11b33767 call dword ptr [0x11b6a4b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4b0))), 0x11b3376du);
  /* 11b3376d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33770 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33772 call 0x11b36000 */
  push32(0x11b33777u); f_11b36000();
  /* 11b33777 mov esi, esp */
  ESI = (ESP);
  /* 11b33779 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3377b call dword ptr [0x11b6a480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a480))), 0x11b33781u);
  /* 11b33781 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33784 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33786 call 0x11b36000 */
  push32(0x11b3378bu); f_11b36000();
  /* 11b3378b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3378e mov edx, dword ptr [0x11b678dc] */
  EDX = (r32((uint32_t)(0x11b678dc)));
  /* 11b33794 imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b33797 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11b3379a fild dword ptr [ebp - 0x28] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x28)));
  /* 11b3379d fmul qword ptr [0x11b623d0] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x11b623d0)));
  /* 11b337a3 call 0x11b360ec */
  push32(0x11b337a8u); f_11b360ec();
  /* 11b337a8 mov esi, esp */
  ESI = (ESP);
  /* 11b337aa push eax */
  push32((uint32_t)(EAX));
  /* 11b337ab push 0x11b623c0 */
  push32((uint32_t)(0x11b623c0u));
  /* 11b337b0 call dword ptr [0x11b6a4cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4cc))), 0x11b337b6u);
  /* 11b337b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b337b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b337bb call 0x11b36000 */
  push32(0x11b337c0u); f_11b36000();
L_11b337c0:;
  /* 11b337c0 mov esi, esp */
  ESI = (ESP);
  /* 11b337c2 push 7 */
  push32((uint32_t)(0x7u));
  /* 11b337c4 call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b337cau);
  /* 11b337ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b337cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b337cf call 0x11b36000 */
  push32(0x11b337d4u); f_11b36000();
  /* 11b337d4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b337d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b337db je 0x11b33917 */
  if (C.zf) goto L_11b33917;
  /* 11b337e1 mov esi, esp */
  ESI = (ESP);
  /* 11b337e3 push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b337e8 push 0x11b679b0 */
  push32((uint32_t)(0x11b679b0u));
  /* 11b337ed call dword ptr [0x11b6a4c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4c8))), 0x11b337f3u);
  /* 11b337f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b337f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b337f8 call 0x11b36000 */
  push32(0x11b337fdu); f_11b36000();
  /* 11b337fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b337ff jle 0x11b33917 */
  if ((C.zf||C.sf!=C.of)) goto L_11b33917;
  /* 11b33805 mov esi, esp */
  ESI = (ESP);
  /* 11b33807 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33809 push 7 */
  push32((uint32_t)(0x7u));
  /* 11b3380b call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b33811u);
  /* 11b33811 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33814 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33816 call 0x11b36000 */
  push32(0x11b3381bu); f_11b36000();
  /* 11b3381b mov esi, esp */
  ESI = (ESP);
  /* 11b3381d push 7 */
  push32((uint32_t)(0x7u));
  /* 11b3381f push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b33824 call dword ptr [0x11b6a4d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4d8))), 0x11b3382au);
  /* 11b3382a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3382d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3382f call 0x11b36000 */
  push32(0x11b33834u); f_11b36000();
  /* 11b33834 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b33836 jle 0x11b33869 */
  if ((C.zf||C.sf!=C.of)) goto L_11b33869;
  /* 11b33838 mov esi, esp */
  ESI = (ESP);
  /* 11b3383a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3383c push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b33841 call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b33847u);
  /* 11b33847 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3384a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3384c call 0x11b36000 */
  push32(0x11b33851u); f_11b36000();
  /* 11b33851 mov esi, esp */
  ESI = (ESP);
  /* 11b33853 push 6 */
  push32((uint32_t)(0x6u));
  /* 11b33855 push 7 */
  push32((uint32_t)(0x7u));
  /* 11b33857 call dword ptr [0x11b6a4dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4dc))), 0x11b3385du);
  /* 11b3385d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33860 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33862 call 0x11b36000 */
  push32(0x11b33867u); f_11b36000();
  /* 11b33867 jmp 0x11b33898 */
  goto L_11b33898;
L_11b33869:;
  /* 11b33869 mov esi, esp */
  ESI = (ESP);
  /* 11b3386b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3386d push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b33872 call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b33878u);
  /* 11b33878 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3387b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3387d call 0x11b36000 */
  push32(0x11b33882u); f_11b36000();
  /* 11b33882 mov esi, esp */
  ESI = (ESP);
  /* 11b33884 push 6 */
  push32((uint32_t)(0x6u));
  /* 11b33886 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33888 call dword ptr [0x11b6a4dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4dc))), 0x11b3388eu);
  /* 11b3388e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33891 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33893 call 0x11b36000 */
  push32(0x11b33898u); f_11b36000();
L_11b33898:;
  /* 11b33898 mov esi, esp */
  ESI = (ESP);
  /* 11b3389a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3389c push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b338a1 call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b338a7u);
  /* 11b338a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b338aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b338ac call 0x11b36000 */
  push32(0x11b338b1u); f_11b36000();
  /* 11b338b1 mov esi, esp */
  ESI = (ESP);
  /* 11b338b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b338b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b338b7 push 0x11b67a28 */
  push32((uint32_t)(0x11b67a28u));
  /* 11b338bc push 6 */
  push32((uint32_t)(0x6u));
  /* 11b338be call dword ptr [0x11b6a4b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4b0))), 0x11b338c4u);
  /* 11b338c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b338c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b338c9 call 0x11b36000 */
  push32(0x11b338ceu); f_11b36000();
  /* 11b338ce mov esi, esp */
  ESI = (ESP);
  /* 11b338d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b338d2 call dword ptr [0x11b6a480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a480))), 0x11b338d8u);
  /* 11b338d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b338db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b338dd call 0x11b36000 */
  push32(0x11b338e2u); f_11b36000();
  /* 11b338e2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b338e5 mov ecx, dword ptr [0x11b678dc] */
  ECX = (r32((uint32_t)(0x11b678dc)));
  /* 11b338eb imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b338ee mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11b338f1 fild dword ptr [ebp - 0x2c] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x2c)));
  /* 11b338f4 fmul qword ptr [0x11b623d0] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x11b623d0)));
  /* 11b338fa call 0x11b360ec */
  push32(0x11b338ffu); f_11b360ec();
  /* 11b338ff mov esi, esp */
  ESI = (ESP);
  /* 11b33901 push eax */
  push32((uint32_t)(EAX));
  /* 11b33902 push 0x11b623c0 */
  push32((uint32_t)(0x11b623c0u));
  /* 11b33907 call dword ptr [0x11b6a4cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4cc))), 0x11b3390du);
  /* 11b3390d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33910 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33912 call 0x11b36000 */
  push32(0x11b33917u); f_11b36000();
L_11b33917:;
  /* 11b33917 mov esi, esp */
  ESI = (ESP);
  /* 11b33919 push 6 */
  push32((uint32_t)(0x6u));
  /* 11b3391b call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b33921u);
  /* 11b33921 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33924 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33926 call 0x11b36000 */
  push32(0x11b3392bu); f_11b36000();
  /* 11b3392b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b33930 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b33932 jne 0x11b33a0a */
  if (!C.zf) goto L_11b33a0a;
  /* 11b33938 mov esi, esp */
  ESI = (ESP);
  /* 11b3393a push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b3393f call dword ptr [0x11b6a4b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4b8))), 0x11b33945u);
  /* 11b33945 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33948 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3394a call 0x11b36000 */
  push32(0x11b3394fu); f_11b36000();
  /* 11b3394f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b33951 jne 0x11b33a0a */
  if (!C.zf) goto L_11b33a0a;
  /* 11b33957 mov esi, esp */
  ESI = (ESP);
  /* 11b33959 push 0x11b623b8 */
  push32((uint32_t)(0x11b623b8u));
  /* 11b3395e call dword ptr [0x11b6a4d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4d4))), 0x11b33964u);
  /* 11b33964 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33967 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33969 call 0x11b36000 */
  push32(0x11b3396eu); f_11b36000();
  /* 11b3396e mov esi, esp */
  ESI = (ESP);
  /* 11b33970 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33972 call dword ptr [0x11b6a480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a480))), 0x11b33978u);
  /* 11b33978 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3397b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3397d call 0x11b36000 */
  push32(0x11b33982u); f_11b36000();
  /* 11b33982 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33985 mov edx, dword ptr [0x11b678dc] */
  EDX = (r32((uint32_t)(0x11b678dc)));
  /* 11b3398b imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3398e mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11b33991 fild dword ptr [ebp - 0x30] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x30)));
  /* 11b33994 fmul qword ptr [0x11b623d0] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x11b623d0)));
  /* 11b3399a call 0x11b360ec */
  push32(0x11b3399fu); f_11b360ec();
  /* 11b3399f mov esi, esp */
  ESI = (ESP);
  /* 11b339a1 push eax */
  push32((uint32_t)(EAX));
  /* 11b339a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b339a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b339a6 call dword ptr [0x11b6a4c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4c4))), 0x11b339acu);
  /* 11b339ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b339af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b339b1 call 0x11b36000 */
  push32(0x11b339b6u); f_11b36000();
  /* 11b339b6 mov esi, esp */
  ESI = (ESP);
  /* 11b339b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b339ba push 6 */
  push32((uint32_t)(0x6u));
  /* 11b339bc call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b339c2u);
  /* 11b339c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b339c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b339c7 call 0x11b36000 */
  push32(0x11b339ccu); f_11b36000();
  /* 11b339cc mov esi, esp */
  ESI = (ESP);
  /* 11b339ce push 1 */
  push32((uint32_t)(0x1u));
  /* 11b339d0 push 7 */
  push32((uint32_t)(0x7u));
  /* 11b339d2 call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b339d8u);
  /* 11b339d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b339db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b339dd call 0x11b36000 */
  push32(0x11b339e2u); f_11b36000();
  /* 11b339e2 call 0x11b35e30 */
  push32(0x11b339e7u); f_11b35e30();
  /* 11b339e7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b339e8 mov ecx, 0x1f40 */
  ECX = (0x1f40u);
  /* 11b339ed idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b339ef add edx, 0xfa0 */
  { uint32_t _a=(EDX),_b=(0xfa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b339f5 mov esi, esp */
  ESI = (ESP);
  /* 11b339f7 push edx */
  push32((uint32_t)(EDX));
  /* 11b339f8 push 6 */
  push32((uint32_t)(0x6u));
  /* 11b339fa call dword ptr [0x11b6a49c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a49c))), 0x11b33a00u);
  /* 11b33a00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33a03 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33a05 call 0x11b36000 */
  push32(0x11b33a0au); f_11b36000();
L_11b33a0a:;
  /* 11b33a0a mov esi, esp */
  ESI = (ESP);
  /* 11b33a0c push 8 */
  push32((uint32_t)(0x8u));
  /* 11b33a0e call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b33a14u);
  /* 11b33a14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33a17 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33a19 call 0x11b36000 */
  push32(0x11b33a1eu); f_11b36000();
  /* 11b33a1e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b33a23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b33a25 je 0x11b33b47 */
  if (C.zf) goto L_11b33b47;
  /* 11b33a2b mov esi, esp */
  ESI = (ESP);
  /* 11b33a2d push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b33a32 push 0x11b67978 */
  push32((uint32_t)(0x11b67978u));
  /* 11b33a37 call dword ptr [0x11b6a4c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4c8))), 0x11b33a3du);
  /* 11b33a3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33a40 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33a42 call 0x11b36000 */
  push32(0x11b33a47u); f_11b36000();
  /* 11b33a47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b33a49 jle 0x11b33b47 */
  if ((C.zf||C.sf!=C.of)) goto L_11b33b47;
  /* 11b33a4f mov esi, esp */
  ESI = (ESP);
  /* 11b33a51 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33a53 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b33a55 call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b33a5bu);
  /* 11b33a5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33a5e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33a60 call 0x11b36000 */
  push32(0x11b33a65u); f_11b36000();
  /* 11b33a65 mov esi, esp */
  ESI = (ESP);
  /* 11b33a67 push 0x11b623b0 */
  push32((uint32_t)(0x11b623b0u));
  /* 11b33a6c call dword ptr [0x11b6a4d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4d4))), 0x11b33a72u);
  /* 11b33a72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33a75 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33a77 call 0x11b36000 */
  push32(0x11b33a7cu); f_11b36000();
  /* 11b33a7c mov esi, esp */
  ESI = (ESP);
  /* 11b33a7e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33a80 call dword ptr [0x11b6a480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a480))), 0x11b33a86u);
  /* 11b33a86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33a89 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33a8b call 0x11b36000 */
  push32(0x11b33a90u); f_11b36000();
  /* 11b33a90 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33a93 mov edx, dword ptr [0x11b678dc] */
  EDX = (r32((uint32_t)(0x11b678dc)));
  /* 11b33a99 imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b33a9c mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11b33a9f fild dword ptr [ebp - 0x34] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x34)));
  /* 11b33aa2 fmul qword ptr [0x11b623d0] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x11b623d0)));
  /* 11b33aa8 call 0x11b360ec */
  push32(0x11b33aadu); f_11b360ec();
  /* 11b33aad mov esi, esp */
  ESI = (ESP);
  /* 11b33aaf push eax */
  push32((uint32_t)(EAX));
  /* 11b33ab0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b33ab2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b33ab4 call dword ptr [0x11b6a4c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4c4))), 0x11b33abau);
  /* 11b33aba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33abd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33abf call 0x11b36000 */
  push32(0x11b33ac4u); f_11b36000();
  /* 11b33ac4 mov esi, esp */
  ESI = (ESP);
  /* 11b33ac6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33ac8 push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b33acd call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b33ad3u);
  /* 11b33ad3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33ad6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33ad8 call 0x11b36000 */
  push32(0x11b33addu); f_11b36000();
  /* 11b33add mov esi, esp */
  ESI = (ESP);
  /* 11b33adf push 1 */
  push32((uint32_t)(0x1u));
  /* 11b33ae1 push 6 */
  push32((uint32_t)(0x6u));
  /* 11b33ae3 call dword ptr [0x11b6a4dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4dc))), 0x11b33ae9u);
  /* 11b33ae9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33aec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33aee call 0x11b36000 */
  push32(0x11b33af3u); f_11b36000();
  /* 11b33af3 mov esi, esp */
  ESI = (ESP);
  /* 11b33af5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b33af7 push 6 */
  push32((uint32_t)(0x6u));
  /* 11b33af9 call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b33affu);
  /* 11b33aff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33b02 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33b04 call 0x11b36000 */
  push32(0x11b33b09u); f_11b36000();
  /* 11b33b09 mov esi, esp */
  ESI = (ESP);
  /* 11b33b0b push 1 */
  push32((uint32_t)(0x1u));
  /* 11b33b0d push 7 */
  push32((uint32_t)(0x7u));
  /* 11b33b0f call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b33b15u);
  /* 11b33b15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33b18 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33b1a call 0x11b36000 */
  push32(0x11b33b1fu); f_11b36000();
  /* 11b33b1f call 0x11b35e30 */
  push32(0x11b33b24u); f_11b35e30();
  /* 11b33b24 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b33b25 mov ecx, 0x1f40 */
  ECX = (0x1f40u);
  /* 11b33b2a idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b33b2c add edx, 0xfa0 */
  { uint32_t _a=(EDX),_b=(0xfa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33b32 mov esi, esp */
  ESI = (ESP);
  /* 11b33b34 push edx */
  push32((uint32_t)(EDX));
  /* 11b33b35 push 6 */
  push32((uint32_t)(0x6u));
  /* 11b33b37 call dword ptr [0x11b6a49c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a49c))), 0x11b33b3du);
  /* 11b33b3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33b40 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33b42 call 0x11b36000 */
  push32(0x11b33b47u); f_11b36000();
L_11b33b47:;
  /* 11b33b47 mov esi, esp */
  ESI = (ESP);
  /* 11b33b49 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b33b4b call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b33b51u);
  /* 11b33b51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33b54 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33b56 call 0x11b36000 */
  push32(0x11b33b5bu); f_11b36000();
  /* 11b33b5b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b33b60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b33b62 je 0x11b33c84 */
  if (C.zf) goto L_11b33c84;
  /* 11b33b68 mov esi, esp */
  ESI = (ESP);
  /* 11b33b6a push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b33b6f push 0x11b679a8 */
  push32((uint32_t)(0x11b679a8u));
  /* 11b33b74 call dword ptr [0x11b6a4c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4c8))), 0x11b33b7au);
  /* 11b33b7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33b7d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33b7f call 0x11b36000 */
  push32(0x11b33b84u); f_11b36000();
  /* 11b33b84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b33b86 jle 0x11b33c84 */
  if ((C.zf||C.sf!=C.of)) goto L_11b33c84;
  /* 11b33b8c mov esi, esp */
  ESI = (ESP);
  /* 11b33b8e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33b90 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b33b92 call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b33b98u);
  /* 11b33b98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33b9b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33b9d call 0x11b36000 */
  push32(0x11b33ba2u); f_11b36000();
  /* 11b33ba2 mov esi, esp */
  ESI = (ESP);
  /* 11b33ba4 push 0x11b623b0 */
  push32((uint32_t)(0x11b623b0u));
  /* 11b33ba9 call dword ptr [0x11b6a4d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4d4))), 0x11b33bafu);
  /* 11b33baf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33bb2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33bb4 call 0x11b36000 */
  push32(0x11b33bb9u); f_11b36000();
  /* 11b33bb9 mov esi, esp */
  ESI = (ESP);
  /* 11b33bbb push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33bbd call dword ptr [0x11b6a480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a480))), 0x11b33bc3u);
  /* 11b33bc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33bc6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33bc8 call 0x11b36000 */
  push32(0x11b33bcdu); f_11b36000();
  /* 11b33bcd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33bd0 mov edx, dword ptr [0x11b678dc] */
  EDX = (r32((uint32_t)(0x11b678dc)));
  /* 11b33bd6 imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b33bd9 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 11b33bdc fild dword ptr [ebp - 0x38] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x38)));
  /* 11b33bdf fmul qword ptr [0x11b623d0] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x11b623d0)));
  /* 11b33be5 call 0x11b360ec */
  push32(0x11b33beau); f_11b360ec();
  /* 11b33bea mov esi, esp */
  ESI = (ESP);
  /* 11b33bec push eax */
  push32((uint32_t)(EAX));
  /* 11b33bed push 1 */
  push32((uint32_t)(0x1u));
  /* 11b33bef push 1 */
  push32((uint32_t)(0x1u));
  /* 11b33bf1 call dword ptr [0x11b6a4c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4c4))), 0x11b33bf7u);
  /* 11b33bf7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33bfa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33bfc call 0x11b36000 */
  push32(0x11b33c01u); f_11b36000();
  /* 11b33c01 mov esi, esp */
  ESI = (ESP);
  /* 11b33c03 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33c05 push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b33c0a call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b33c10u);
  /* 11b33c10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33c13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33c15 call 0x11b36000 */
  push32(0x11b33c1au); f_11b36000();
  /* 11b33c1a mov esi, esp */
  ESI = (ESP);
  /* 11b33c1c push 1 */
  push32((uint32_t)(0x1u));
  /* 11b33c1e push 6 */
  push32((uint32_t)(0x6u));
  /* 11b33c20 call dword ptr [0x11b6a4dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4dc))), 0x11b33c26u);
  /* 11b33c26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33c29 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33c2b call 0x11b36000 */
  push32(0x11b33c30u); f_11b36000();
  /* 11b33c30 mov esi, esp */
  ESI = (ESP);
  /* 11b33c32 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b33c34 push 6 */
  push32((uint32_t)(0x6u));
  /* 11b33c36 call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b33c3cu);
  /* 11b33c3c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33c3f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33c41 call 0x11b36000 */
  push32(0x11b33c46u); f_11b36000();
  /* 11b33c46 mov esi, esp */
  ESI = (ESP);
  /* 11b33c48 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b33c4a push 7 */
  push32((uint32_t)(0x7u));
  /* 11b33c4c call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b33c52u);
  /* 11b33c52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33c55 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33c57 call 0x11b36000 */
  push32(0x11b33c5cu); f_11b36000();
  /* 11b33c5c call 0x11b35e30 */
  push32(0x11b33c61u); f_11b35e30();
  /* 11b33c61 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b33c62 mov ecx, 0x1f40 */
  ECX = (0x1f40u);
  /* 11b33c67 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b33c69 add edx, 0xfa0 */
  { uint32_t _a=(EDX),_b=(0xfa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33c6f mov esi, esp */
  ESI = (ESP);
  /* 11b33c71 push edx */
  push32((uint32_t)(EDX));
  /* 11b33c72 push 6 */
  push32((uint32_t)(0x6u));
  /* 11b33c74 call dword ptr [0x11b6a49c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a49c))), 0x11b33c7au);
  /* 11b33c7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33c7d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33c7f call 0x11b36000 */
  push32(0x11b33c84u); f_11b36000();
L_11b33c84:;
  /* 11b33c84 mov esi, esp */
  ESI = (ESP);
  /* 11b33c86 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b33c88 call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b33c8eu);
  /* 11b33c8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33c91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33c93 call 0x11b36000 */
  push32(0x11b33c98u); f_11b36000();
  /* 11b33c98 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b33c9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b33c9f je 0x11b33dc1 */
  if (C.zf) goto L_11b33dc1;
  /* 11b33ca5 mov esi, esp */
  ESI = (ESP);
  /* 11b33ca7 push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b33cac push 0x11b67998 */
  push32((uint32_t)(0x11b67998u));
  /* 11b33cb1 call dword ptr [0x11b6a4c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4c8))), 0x11b33cb7u);
  /* 11b33cb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33cba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33cbc call 0x11b36000 */
  push32(0x11b33cc1u); f_11b36000();
  /* 11b33cc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b33cc3 jle 0x11b33dc1 */
  if ((C.zf||C.sf!=C.of)) goto L_11b33dc1;
  /* 11b33cc9 mov esi, esp */
  ESI = (ESP);
  /* 11b33ccb push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33ccd push 8 */
  push32((uint32_t)(0x8u));
  /* 11b33ccf call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b33cd5u);
  /* 11b33cd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33cd8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33cda call 0x11b36000 */
  push32(0x11b33cdfu); f_11b36000();
  /* 11b33cdf mov esi, esp */
  ESI = (ESP);
  /* 11b33ce1 push 0x11b623b0 */
  push32((uint32_t)(0x11b623b0u));
  /* 11b33ce6 call dword ptr [0x11b6a4d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4d4))), 0x11b33cecu);
  /* 11b33cec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33cef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33cf1 call 0x11b36000 */
  push32(0x11b33cf6u); f_11b36000();
  /* 11b33cf6 mov esi, esp */
  ESI = (ESP);
  /* 11b33cf8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33cfa call dword ptr [0x11b6a480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a480))), 0x11b33d00u);
  /* 11b33d00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33d03 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33d05 call 0x11b36000 */
  push32(0x11b33d0au); f_11b36000();
  /* 11b33d0a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33d0d mov edx, dword ptr [0x11b678dc] */
  EDX = (r32((uint32_t)(0x11b678dc)));
  /* 11b33d13 imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b33d16 mov dword ptr [ebp - 0x3c], edx */
  w32((uint32_t)(EBP + -0x3c), (EDX));
  /* 11b33d19 fild dword ptr [ebp - 0x3c] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x3c)));
  /* 11b33d1c fmul qword ptr [0x11b623d0] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x11b623d0)));
  /* 11b33d22 call 0x11b360ec */
  push32(0x11b33d27u); f_11b360ec();
  /* 11b33d27 mov esi, esp */
  ESI = (ESP);
  /* 11b33d29 push eax */
  push32((uint32_t)(EAX));
  /* 11b33d2a push 1 */
  push32((uint32_t)(0x1u));
  /* 11b33d2c push 2 */
  push32((uint32_t)(0x2u));
  /* 11b33d2e call dword ptr [0x11b6a4c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4c4))), 0x11b33d34u);
  /* 11b33d34 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33d37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33d39 call 0x11b36000 */
  push32(0x11b33d3eu); f_11b36000();
  /* 11b33d3e mov esi, esp */
  ESI = (ESP);
  /* 11b33d40 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33d42 push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b33d47 call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b33d4du);
  /* 11b33d4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33d50 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33d52 call 0x11b36000 */
  push32(0x11b33d57u); f_11b36000();
  /* 11b33d57 mov esi, esp */
  ESI = (ESP);
  /* 11b33d59 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b33d5b push 6 */
  push32((uint32_t)(0x6u));
  /* 11b33d5d call dword ptr [0x11b6a4dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4dc))), 0x11b33d63u);
  /* 11b33d63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33d66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33d68 call 0x11b36000 */
  push32(0x11b33d6du); f_11b36000();
  /* 11b33d6d mov esi, esp */
  ESI = (ESP);
  /* 11b33d6f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b33d71 push 6 */
  push32((uint32_t)(0x6u));
  /* 11b33d73 call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b33d79u);
  /* 11b33d79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33d7c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33d7e call 0x11b36000 */
  push32(0x11b33d83u); f_11b36000();
  /* 11b33d83 mov esi, esp */
  ESI = (ESP);
  /* 11b33d85 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b33d87 push 7 */
  push32((uint32_t)(0x7u));
  /* 11b33d89 call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b33d8fu);
  /* 11b33d8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33d92 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33d94 call 0x11b36000 */
  push32(0x11b33d99u); f_11b36000();
  /* 11b33d99 call 0x11b35e30 */
  push32(0x11b33d9eu); f_11b35e30();
  /* 11b33d9e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b33d9f mov ecx, 0x1f40 */
  ECX = (0x1f40u);
  /* 11b33da4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b33da6 add edx, 0xfa0 */
  { uint32_t _a=(EDX),_b=(0xfa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33dac mov esi, esp */
  ESI = (ESP);
  /* 11b33dae push edx */
  push32((uint32_t)(EDX));
  /* 11b33daf push 6 */
  push32((uint32_t)(0x6u));
  /* 11b33db1 call dword ptr [0x11b6a49c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a49c))), 0x11b33db7u);
  /* 11b33db7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33dba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33dbc call 0x11b36000 */
  push32(0x11b33dc1u); f_11b36000();
L_11b33dc1:;
  /* 11b33dc1 mov esi, esp */
  ESI = (ESP);
  /* 11b33dc3 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b33dc5 call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b33dcbu);
  /* 11b33dcb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33dce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33dd0 call 0x11b36000 */
  push32(0x11b33dd5u); f_11b36000();
  /* 11b33dd5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b33dda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b33ddc je 0x11b33efe */
  if (C.zf) goto L_11b33efe;
  /* 11b33de2 mov esi, esp */
  ESI = (ESP);
  /* 11b33de4 push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b33de9 push 0x11b67a28 */
  push32((uint32_t)(0x11b67a28u));
  /* 11b33dee call dword ptr [0x11b6a4c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4c8))), 0x11b33df4u);
  /* 11b33df4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33df7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33df9 call 0x11b36000 */
  push32(0x11b33dfeu); f_11b36000();
  /* 11b33dfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b33e00 jle 0x11b33efe */
  if ((C.zf||C.sf!=C.of)) goto L_11b33efe;
  /* 11b33e06 mov esi, esp */
  ESI = (ESP);
  /* 11b33e08 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33e0a push 8 */
  push32((uint32_t)(0x8u));
  /* 11b33e0c call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b33e12u);
  /* 11b33e12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33e15 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33e17 call 0x11b36000 */
  push32(0x11b33e1cu); f_11b36000();
  /* 11b33e1c mov esi, esp */
  ESI = (ESP);
  /* 11b33e1e push 0x11b623b0 */
  push32((uint32_t)(0x11b623b0u));
  /* 11b33e23 call dword ptr [0x11b6a4d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4d4))), 0x11b33e29u);
  /* 11b33e29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33e2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33e2e call 0x11b36000 */
  push32(0x11b33e33u); f_11b36000();
  /* 11b33e33 mov esi, esp */
  ESI = (ESP);
  /* 11b33e35 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33e37 call dword ptr [0x11b6a480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a480))), 0x11b33e3du);
  /* 11b33e3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33e40 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33e42 call 0x11b36000 */
  push32(0x11b33e47u); f_11b36000();
  /* 11b33e47 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33e4a mov edx, dword ptr [0x11b678dc] */
  EDX = (r32((uint32_t)(0x11b678dc)));
  /* 11b33e50 imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b33e53 mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 11b33e56 fild dword ptr [ebp - 0x40] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x40)));
  /* 11b33e59 fmul qword ptr [0x11b623d0] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x11b623d0)));
  /* 11b33e5f call 0x11b360ec */
  push32(0x11b33e64u); f_11b360ec();
  /* 11b33e64 mov esi, esp */
  ESI = (ESP);
  /* 11b33e66 push eax */
  push32((uint32_t)(EAX));
  /* 11b33e67 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b33e69 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b33e6b call dword ptr [0x11b6a4c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4c4))), 0x11b33e71u);
  /* 11b33e71 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33e74 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33e76 call 0x11b36000 */
  push32(0x11b33e7bu); f_11b36000();
  /* 11b33e7b mov esi, esp */
  ESI = (ESP);
  /* 11b33e7d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33e7f push 0x11b67790 */
  push32((uint32_t)(0x11b67790u));
  /* 11b33e84 call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b33e8au);
  /* 11b33e8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33e8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33e8f call 0x11b36000 */
  push32(0x11b33e94u); f_11b36000();
  /* 11b33e94 mov esi, esp */
  ESI = (ESP);
  /* 11b33e96 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b33e98 push 6 */
  push32((uint32_t)(0x6u));
  /* 11b33e9a call dword ptr [0x11b6a4dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4dc))), 0x11b33ea0u);
  /* 11b33ea0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33ea3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33ea5 call 0x11b36000 */
  push32(0x11b33eaau); f_11b36000();
  /* 11b33eaa mov esi, esp */
  ESI = (ESP);
  /* 11b33eac push 1 */
  push32((uint32_t)(0x1u));
  /* 11b33eae push 6 */
  push32((uint32_t)(0x6u));
  /* 11b33eb0 call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b33eb6u);
  /* 11b33eb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33eb9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33ebb call 0x11b36000 */
  push32(0x11b33ec0u); f_11b36000();
  /* 11b33ec0 mov esi, esp */
  ESI = (ESP);
  /* 11b33ec2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b33ec4 push 7 */
  push32((uint32_t)(0x7u));
  /* 11b33ec6 call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b33eccu);
  /* 11b33ecc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33ecf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33ed1 call 0x11b36000 */
  push32(0x11b33ed6u); f_11b36000();
  /* 11b33ed6 call 0x11b35e30 */
  push32(0x11b33edbu); f_11b35e30();
  /* 11b33edb cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b33edc mov ecx, 0x1f40 */
  ECX = (0x1f40u);
  /* 11b33ee1 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b33ee3 add edx, 0xfa0 */
  { uint32_t _a=(EDX),_b=(0xfa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33ee9 mov esi, esp */
  ESI = (ESP);
  /* 11b33eeb push edx */
  push32((uint32_t)(EDX));
  /* 11b33eec push 6 */
  push32((uint32_t)(0x6u));
  /* 11b33eee call dword ptr [0x11b6a49c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a49c))), 0x11b33ef4u);
  /* 11b33ef4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33ef7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33ef9 call 0x11b36000 */
  push32(0x11b33efeu); f_11b36000();
L_11b33efe:;
  /* 11b33efe mov esi, esp */
  ESI = (ESP);
  /* 11b33f00 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33f02 call dword ptr [0x11b6a498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a498))), 0x11b33f08u);
  /* 11b33f08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33f0b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33f0d call 0x11b36000 */
  push32(0x11b33f12u); f_11b36000();
  /* 11b33f12 mov esi, esp */
  ESI = (ESP);
  /* 11b33f14 push 0x11b679d8 */
  push32((uint32_t)(0x11b679d8u));
  /* 11b33f19 call dword ptr [0x11b6a4b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4b8))), 0x11b33f1fu);
  /* 11b33f1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33f22 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33f24 call 0x11b36000 */
  push32(0x11b33f29u); f_11b36000();
  /* 11b33f29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b33f2b jle 0x11b33f46 */
  if ((C.zf||C.sf!=C.of)) goto L_11b33f46;
  /* 11b33f2d mov esi, esp */
  ESI = (ESP);
  /* 11b33f2f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33f31 push 0x11b679d8 */
  push32((uint32_t)(0x11b679d8u));
  /* 11b33f36 call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b33f3cu);
  /* 11b33f3c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33f3f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33f41 call 0x11b36000 */
  push32(0x11b33f46u); f_11b36000();
L_11b33f46:;
  /* 11b33f46 mov esi, esp */
  ESI = (ESP);
  /* 11b33f48 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b33f4a call dword ptr [0x11b6a4bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4bc))), 0x11b33f50u);
  /* 11b33f50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33f53 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33f55 call 0x11b36000 */
  push32(0x11b33f5au); f_11b36000();
  /* 11b33f5a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b33f5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b33f61 je 0x11b33fad */
  if (C.zf) goto L_11b33fad;
  /* 11b33f63 mov esi, esp */
  ESI = (ESP);
  /* 11b33f65 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11b33f67 call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b33f6du);
  /* 11b33f6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33f70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33f72 call 0x11b36000 */
  push32(0x11b33f77u); f_11b36000();
  /* 11b33f77 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b33f7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b33f7e je 0x11b33fad */
  if (C.zf) goto L_11b33fad;
  /* 11b33f80 mov esi, esp */
  ESI = (ESP);
  /* 11b33f82 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33f84 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11b33f86 call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b33f8cu);
  /* 11b33f8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33f8f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33f91 call 0x11b36000 */
  push32(0x11b33f96u); f_11b36000();
  /* 11b33f96 mov esi, esp */
  ESI = (ESP);
  /* 11b33f98 push 0x11b623a4 */
  push32((uint32_t)(0x11b623a4u));
  /* 11b33f9d call dword ptr [0x11b6a4d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4d4))), 0x11b33fa3u);
  /* 11b33fa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33fa6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33fa8 call 0x11b36000 */
  push32(0x11b33fadu); f_11b36000();
L_11b33fad:;
  /* 11b33fad mov esi, esp */
  ESI = (ESP);
  /* 11b33faf push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 11b33fb1 call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b33fb7u);
  /* 11b33fb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33fba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33fbc call 0x11b36000 */
  push32(0x11b33fc1u); f_11b36000();
  /* 11b33fc1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b33fc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b33fc8 je 0x11b340b4 */
  if (C.zf) goto L_11b340b4;
  /* 11b33fce mov esi, esp */
  ESI = (ESP);
  /* 11b33fd0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b33fd2 call dword ptr [0x11b6a4bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4bc))), 0x11b33fd8u);
  /* 11b33fd8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33fdb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33fdd call 0x11b36000 */
  push32(0x11b33fe2u); f_11b36000();
  /* 11b33fe2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b33fe7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b33fe9 jne 0x11b34029 */
  if (!C.zf) goto L_11b34029;
  /* 11b33feb mov esi, esp */
  ESI = (ESP);
  /* 11b33fed push 0 */
  push32((uint32_t)(0x0u));
  /* 11b33fef push 0x11b67960 */
  push32((uint32_t)(0x11b67960u));
  /* 11b33ff4 call dword ptr [0x11b6a4e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4e4))), 0x11b33ffau);
  /* 11b33ffa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b33ffd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b33fff call 0x11b36000 */
  push32(0x11b34004u); f_11b36000();
  /* 11b34004 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b34006 jg 0x11b34029 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b34029;
  /* 11b34008 mov esi, esp */
  ESI = (ESP);
  /* 11b3400a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3400c push 0x11b679f0 */
  push32((uint32_t)(0x11b679f0u));
  /* 11b34011 call dword ptr [0x11b6a4e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4e4))), 0x11b34017u);
  /* 11b34017 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3401a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3401c call 0x11b36000 */
  push32(0x11b34021u); f_11b36000();
  /* 11b34021 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b34023 jle 0x11b340b4 */
  if ((C.zf||C.sf!=C.of)) goto L_11b340b4;
L_11b34029:;
  /* 11b34029 mov esi, esp */
  ESI = (ESP);
  /* 11b3402b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3402d push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 11b3402f call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b34035u);
  /* 11b34035 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34038 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3403a call 0x11b36000 */
  push32(0x11b3403fu); f_11b36000();
  /* 11b3403f mov esi, esp */
  ESI = (ESP);
  /* 11b34041 push 0x11b6239c */
  push32((uint32_t)(0x11b6239cu));
  /* 11b34046 call dword ptr [0x11b6a4d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4d4))), 0x11b3404cu);
  /* 11b3404c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3404f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34051 call 0x11b36000 */
  push32(0x11b34056u); f_11b36000();
  /* 11b34056 mov esi, esp */
  ESI = (ESP);
  /* 11b34058 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11b3405a call dword ptr [0x11b6a474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a474))), 0x11b34060u);
  /* 11b34060 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34063 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34065 call 0x11b36000 */
  push32(0x11b3406au); f_11b36000();
  /* 11b3406a mov esi, esp */
  ESI = (ESP);
  /* 11b3406c push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11b3406e call dword ptr [0x11b6a474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a474))), 0x11b34074u);
  /* 11b34074 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34077 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34079 call 0x11b36000 */
  push32(0x11b3407eu); f_11b36000();
  /* 11b3407e mov esi, esp */
  ESI = (ESP);
  /* 11b34080 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b34082 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b34084 push 0x11b67950 */
  push32((uint32_t)(0x11b67950u));
  /* 11b34089 call dword ptr [0x11b6a4e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4e8))), 0x11b3408fu);
  /* 11b3408f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34092 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34094 call 0x11b36000 */
  push32(0x11b34099u); f_11b36000();
  /* 11b34099 mov esi, esp */
  ESI = (ESP);
  /* 11b3409b push 2 */
  push32((uint32_t)(0x2u));
  /* 11b3409d push 3 */
  push32((uint32_t)(0x3u));
  /* 11b3409f push 0x11b67958 */
  push32((uint32_t)(0x11b67958u));
  /* 11b340a4 call dword ptr [0x11b6a4e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4e8))), 0x11b340aau);
  /* 11b340aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b340ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b340af call 0x11b36000 */
  push32(0x11b340b4u); f_11b36000();
L_11b340b4:;
  /* 11b340b4 mov esi, esp */
  ESI = (ESP);
  /* 11b340b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b340b8 call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b340beu);
  /* 11b340be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b340c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b340c3 call 0x11b36000 */
  push32(0x11b340c8u); f_11b36000();
  /* 11b340c8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b340cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b340cf jne 0x11b3415a */
  if (!C.zf) goto L_11b3415a;
  /* 11b340d5 mov esi, esp */
  ESI = (ESP);
  /* 11b340d7 push 0x11b67828 */
  push32((uint32_t)(0x11b67828u));
  /* 11b340dc push 0x11b67950 */
  push32((uint32_t)(0x11b67950u));
  /* 11b340e1 call dword ptr [0x11b6a4c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4c8))), 0x11b340e7u);
  /* 11b340e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b340ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b340ec call 0x11b36000 */
  push32(0x11b340f1u); f_11b36000();
  /* 11b340f1 mov esi, eax */
  ESI = (EAX);
  /* 11b340f3 mov edi, esp */
  EDI = (ESP);
  /* 11b340f5 push 0x11b67828 */
  push32((uint32_t)(0x11b67828u));
  /* 11b340fa call dword ptr [0x11b6a4b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4b8))), 0x11b34100u);
  /* 11b34100 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34103 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34105 call 0x11b36000 */
  push32(0x11b3410au); f_11b36000();
  /* 11b3410a cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3410c jge 0x11b3415a */
  if ((C.sf==C.of)) goto L_11b3415a;
  /* 11b3410e mov esi, esp */
  ESI = (ESP);
  /* 11b34110 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b34112 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b34114 call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b3411au);
  /* 11b3411a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3411d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3411f call 0x11b36000 */
  push32(0x11b34124u); f_11b36000();
  /* 11b34124 mov esi, esp */
  ESI = (ESP);
  /* 11b34126 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b34128 push 0x11b67828 */
  push32((uint32_t)(0x11b67828u));
  /* 11b3412d call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b34133u);
  /* 11b34133 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34136 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34138 call 0x11b36000 */
  push32(0x11b3413du); f_11b36000();
  /* 11b3413d mov esi, esp */
  ESI = (ESP);
  /* 11b3413f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b34141 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11b34143 push 0x11b67a00 */
  push32((uint32_t)(0x11b67a00u));
  /* 11b34148 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b3414a call dword ptr [0x11b6a4b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4b0))), 0x11b34150u);
  /* 11b34150 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34153 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34155 call 0x11b36000 */
  push32(0x11b3415au); f_11b36000();
L_11b3415a:;
  /* 11b3415a mov esi, esp */
  ESI = (ESP);
  /* 11b3415c push 1 */
  push32((uint32_t)(0x1u));
  /* 11b3415e call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b34164u);
  /* 11b34164 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34167 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34169 call 0x11b36000 */
  push32(0x11b3416eu); f_11b36000();
  /* 11b3416e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b34173 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b34175 je 0x11b341fe */
  if (C.zf) goto L_11b341fe;
  /* 11b3417b mov esi, esp */
  ESI = (ESP);
  /* 11b3417d push 0x11b67828 */
  push32((uint32_t)(0x11b67828u));
  /* 11b34182 push 0x11b67950 */
  push32((uint32_t)(0x11b67950u));
  /* 11b34187 call dword ptr [0x11b6a4c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4c8))), 0x11b3418du);
  /* 11b3418d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34190 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34192 call 0x11b36000 */
  push32(0x11b34197u); f_11b36000();
  /* 11b34197 mov esi, eax */
  ESI = (EAX);
  /* 11b34199 mov edi, esp */
  EDI = (ESP);
  /* 11b3419b push 0x11b67828 */
  push32((uint32_t)(0x11b67828u));
  /* 11b341a0 call dword ptr [0x11b6a4b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4b8))), 0x11b341a6u);
  /* 11b341a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b341a9 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b341ab call 0x11b36000 */
  push32(0x11b341b0u); f_11b36000();
  /* 11b341b0 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b341b2 jne 0x11b341fe */
  if (!C.zf) goto L_11b341fe;
  /* 11b341b4 mov esi, esp */
  ESI = (ESP);
  /* 11b341b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b341b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b341ba call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b341c0u);
  /* 11b341c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b341c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b341c5 call 0x11b36000 */
  push32(0x11b341cau); f_11b36000();
  /* 11b341ca mov esi, esp */
  ESI = (ESP);
  /* 11b341cc push 0 */
  push32((uint32_t)(0x0u));
  /* 11b341ce push 0x11b67828 */
  push32((uint32_t)(0x11b67828u));
  /* 11b341d3 call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b341d9u);
  /* 11b341d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b341dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b341de call 0x11b36000 */
  push32(0x11b341e3u); f_11b36000();
  /* 11b341e3 mov esi, esp */
  ESI = (ESP);
  /* 11b341e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b341e7 push 0x11b679f8 */
  push32((uint32_t)(0x11b679f8u));
  /* 11b341ec push 5 */
  push32((uint32_t)(0x5u));
  /* 11b341ee call dword ptr [0x11b6a4e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4e0))), 0x11b341f4u);
  /* 11b341f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b341f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b341f9 call 0x11b36000 */
  push32(0x11b341feu); f_11b36000();
L_11b341fe:;
  /* 11b341fe mov esi, esp */
  ESI = (ESP);
  /* 11b34200 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b34202 call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b34208u);
  /* 11b34208 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3420b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3420d call 0x11b36000 */
  push32(0x11b34212u); f_11b36000();
  /* 11b34212 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b34217 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b34219 je 0x11b3430e */
  if (C.zf) goto L_11b3430e;
  /* 11b3421f mov esi, esp */
  ESI = (ESP);
  /* 11b34221 push 0x11b67828 */
  push32((uint32_t)(0x11b67828u));
  /* 11b34226 call dword ptr [0x11b6a4b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4b8))), 0x11b3422cu);
  /* 11b3422c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3422f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34231 call 0x11b36000 */
  push32(0x11b34236u); f_11b36000();
  /* 11b34236 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b34238 jne 0x11b3430e */
  if (!C.zf) goto L_11b3430e;
  /* 11b3423e mov esi, esp */
  ESI = (ESP);
  /* 11b34240 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b34242 push 0x11b67950 */
  push32((uint32_t)(0x11b67950u));
  /* 11b34247 call dword ptr [0x11b6a4e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4e4))), 0x11b3424du);
  /* 11b3424d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34250 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34252 call 0x11b36000 */
  push32(0x11b34257u); f_11b36000();
  /* 11b34257 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b34259 jle 0x11b3430e */
  if ((C.zf||C.sf!=C.of)) goto L_11b3430e;
  /* 11b3425f mov esi, esp */
  ESI = (ESP);
  /* 11b34261 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b34263 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b34265 call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b3426bu);
  /* 11b3426b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3426e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34270 call 0x11b36000 */
  push32(0x11b34275u); f_11b36000();
  /* 11b34275 mov esi, esp */
  ESI = (ESP);
  /* 11b34277 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b34279 call dword ptr [0x11b6a480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a480))), 0x11b3427fu);
  /* 11b3427f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34282 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34284 call 0x11b36000 */
  push32(0x11b34289u); f_11b36000();
  /* 11b34289 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3428f mov edx, 0x2710 */
  EDX = (0x2710u);
  /* 11b34294 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b34296 mov esi, esp */
  ESI = (ESP);
  /* 11b34298 push edx */
  push32((uint32_t)(EDX));
  /* 11b34299 push 0x11b62394 */
  push32((uint32_t)(0x11b62394u));
  /* 11b3429e call dword ptr [0x11b6a4cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4cc))), 0x11b342a4u);
  /* 11b342a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b342a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b342a9 call 0x11b36000 */
  push32(0x11b342aeu); f_11b36000();
  /* 11b342ae mov esi, esp */
  ESI = (ESP);
  /* 11b342b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b342b2 call dword ptr [0x11b6a480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a480))), 0x11b342b8u);
  /* 11b342b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b342bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b342bd call 0x11b36000 */
  push32(0x11b342c2u); f_11b36000();
  /* 11b342c2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b342c8 mov ecx, 0x2710 */
  ECX = (0x2710u);
  /* 11b342cd sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b342cf mov esi, esp */
  ESI = (ESP);
  /* 11b342d1 push ecx */
  push32((uint32_t)(ECX));
  /* 11b342d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b342d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b342d6 call dword ptr [0x11b6a4c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4c4))), 0x11b342dcu);
  /* 11b342dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b342df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b342e1 call 0x11b36000 */
  push32(0x11b342e6u); f_11b36000();
  /* 11b342e6 mov esi, esp */
  ESI = (ESP);
  /* 11b342e8 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11b342ea call dword ptr [0x11b6a484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a484))), 0x11b342f0u);
  /* 11b342f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b342f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b342f5 call 0x11b36000 */
  push32(0x11b342fau); f_11b36000();
  /* 11b342fa mov esi, esp */
  ESI = (ESP);
  /* 11b342fc push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11b342fe call dword ptr [0x11b6a474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a474))), 0x11b34304u);
  /* 11b34304 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34307 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34309 call 0x11b36000 */
  push32(0x11b3430eu); f_11b36000();
L_11b3430e:;
  /* 11b3430e mov esi, esp */
  ESI = (ESP);
  /* 11b34310 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11b34312 call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b34318u);
  /* 11b34318 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3431b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3431d call 0x11b36000 */
  push32(0x11b34322u); f_11b36000();
  /* 11b34322 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b34327 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b34329 jne 0x11b343b7 */
  if (!C.zf) goto L_11b343b7;
  /* 11b3432f mov esi, esp */
  ESI = (ESP);
  /* 11b34331 push 0x11b67820 */
  push32((uint32_t)(0x11b67820u));
  /* 11b34336 push 0x11b67958 */
  push32((uint32_t)(0x11b67958u));
  /* 11b3433b call dword ptr [0x11b6a4c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4c8))), 0x11b34341u);
  /* 11b34341 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34344 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34346 call 0x11b36000 */
  push32(0x11b3434bu); f_11b36000();
  /* 11b3434b mov esi, eax */
  ESI = (EAX);
  /* 11b3434d mov edi, esp */
  EDI = (ESP);
  /* 11b3434f push 0x11b67820 */
  push32((uint32_t)(0x11b67820u));
  /* 11b34354 call dword ptr [0x11b6a4b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4b8))), 0x11b3435au);
  /* 11b3435a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3435d cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3435f call 0x11b36000 */
  push32(0x11b34364u); f_11b36000();
  /* 11b34364 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34366 jge 0x11b343b7 */
  if ((C.sf==C.of)) goto L_11b343b7;
  /* 11b34368 mov esi, esp */
  ESI = (ESP);
  /* 11b3436a push 1 */
  push32((uint32_t)(0x1u));
  /* 11b3436c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11b3436e call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b34374u);
  /* 11b34374 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34377 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34379 call 0x11b36000 */
  push32(0x11b3437eu); f_11b36000();
  /* 11b3437e mov esi, esp */
  ESI = (ESP);
  /* 11b34380 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b34382 push 0x11b67820 */
  push32((uint32_t)(0x11b67820u));
  /* 11b34387 call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b3438du);
  /* 11b3438d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34390 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34392 call 0x11b36000 */
  push32(0x11b34397u); f_11b36000();
  /* 11b34397 mov esi, esp */
  ESI = (ESP);
  /* 11b34399 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3439b push 0xaa */
  push32((uint32_t)(0xaau));
  /* 11b343a0 push 0x11b67a10 */
  push32((uint32_t)(0x11b67a10u));
  /* 11b343a5 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b343a7 call dword ptr [0x11b6a4b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4b0))), 0x11b343adu);
  /* 11b343ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b343b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b343b2 call 0x11b36000 */
  push32(0x11b343b7u); f_11b36000();
L_11b343b7:;
  /* 11b343b7 mov esi, esp */
  ESI = (ESP);
  /* 11b343b9 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11b343bb call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b343c1u);
  /* 11b343c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b343c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b343c6 call 0x11b36000 */
  push32(0x11b343cbu); f_11b36000();
  /* 11b343cb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b343d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b343d2 je 0x11b3445b */
  if (C.zf) goto L_11b3445b;
  /* 11b343d8 mov esi, esp */
  ESI = (ESP);
  /* 11b343da push 0x11b67820 */
  push32((uint32_t)(0x11b67820u));
  /* 11b343df push 0x11b67958 */
  push32((uint32_t)(0x11b67958u));
  /* 11b343e4 call dword ptr [0x11b6a4c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4c8))), 0x11b343eau);
  /* 11b343ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b343ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b343ef call 0x11b36000 */
  push32(0x11b343f4u); f_11b36000();
  /* 11b343f4 mov esi, eax */
  ESI = (EAX);
  /* 11b343f6 mov edi, esp */
  EDI = (ESP);
  /* 11b343f8 push 0x11b67820 */
  push32((uint32_t)(0x11b67820u));
  /* 11b343fd call dword ptr [0x11b6a4b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4b8))), 0x11b34403u);
  /* 11b34403 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34406 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34408 call 0x11b36000 */
  push32(0x11b3440du); f_11b36000();
  /* 11b3440d cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3440f jne 0x11b3445b */
  if (!C.zf) goto L_11b3445b;
  /* 11b34411 mov esi, esp */
  ESI = (ESP);
  /* 11b34413 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b34415 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11b34417 call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b3441du);
  /* 11b3441d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34420 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34422 call 0x11b36000 */
  push32(0x11b34427u); f_11b36000();
  /* 11b34427 mov esi, esp */
  ESI = (ESP);
  /* 11b34429 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3442b push 0x11b67820 */
  push32((uint32_t)(0x11b67820u));
  /* 11b34430 call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b34436u);
  /* 11b34436 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34439 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3443b call 0x11b36000 */
  push32(0x11b34440u); f_11b36000();
  /* 11b34440 mov esi, esp */
  ESI = (ESP);
  /* 11b34442 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b34444 push 0x11b67a08 */
  push32((uint32_t)(0x11b67a08u));
  /* 11b34449 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b3444b call dword ptr [0x11b6a4e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4e0))), 0x11b34451u);
  /* 11b34451 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34454 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34456 call 0x11b36000 */
  push32(0x11b3445bu); f_11b36000();
L_11b3445b:;
  /* 11b3445b mov esi, esp */
  ESI = (ESP);
  /* 11b3445d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11b3445f call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b34465u);
  /* 11b34465 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34468 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3446a call 0x11b36000 */
  push32(0x11b3446fu); f_11b36000();
  /* 11b3446f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b34474 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b34476 je 0x11b3456b */
  if (C.zf) goto L_11b3456b;
  /* 11b3447c mov esi, esp */
  ESI = (ESP);
  /* 11b3447e push 0x11b67820 */
  push32((uint32_t)(0x11b67820u));
  /* 11b34483 call dword ptr [0x11b6a4b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4b8))), 0x11b34489u);
  /* 11b34489 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3448c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3448e call 0x11b36000 */
  push32(0x11b34493u); f_11b36000();
  /* 11b34493 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b34495 jne 0x11b3456b */
  if (!C.zf) goto L_11b3456b;
  /* 11b3449b mov esi, esp */
  ESI = (ESP);
  /* 11b3449d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3449f push 0x11b67958 */
  push32((uint32_t)(0x11b67958u));
  /* 11b344a4 call dword ptr [0x11b6a4e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4e4))), 0x11b344aau);
  /* 11b344aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b344ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b344af call 0x11b36000 */
  push32(0x11b344b4u); f_11b36000();
  /* 11b344b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b344b6 jle 0x11b3456b */
  if ((C.zf||C.sf!=C.of)) goto L_11b3456b;
  /* 11b344bc mov esi, esp */
  ESI = (ESP);
  /* 11b344be push 0 */
  push32((uint32_t)(0x0u));
  /* 11b344c0 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11b344c2 call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b344c8u);
  /* 11b344c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b344cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b344cd call 0x11b36000 */
  push32(0x11b344d2u); f_11b36000();
  /* 11b344d2 mov esi, esp */
  ESI = (ESP);
  /* 11b344d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b344d6 call dword ptr [0x11b6a480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a480))), 0x11b344dcu);
  /* 11b344dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b344df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b344e1 call 0x11b36000 */
  push32(0x11b344e6u); f_11b36000();
  /* 11b344e6 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b344ec mov edx, 0x2ee0 */
  EDX = (0x2ee0u);
  /* 11b344f1 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b344f3 mov esi, esp */
  ESI = (ESP);
  /* 11b344f5 push edx */
  push32((uint32_t)(EDX));
  /* 11b344f6 push 0x11b62394 */
  push32((uint32_t)(0x11b62394u));
  /* 11b344fb call dword ptr [0x11b6a4cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4cc))), 0x11b34501u);
  /* 11b34501 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34504 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34506 call 0x11b36000 */
  push32(0x11b3450bu); f_11b36000();
  /* 11b3450b mov esi, esp */
  ESI = (ESP);
  /* 11b3450d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3450f call dword ptr [0x11b6a480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a480))), 0x11b34515u);
  /* 11b34515 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34518 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3451a call 0x11b36000 */
  push32(0x11b3451fu); f_11b36000();
  /* 11b3451f imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b34525 mov ecx, 0x2ee0 */
  ECX = (0x2ee0u);
  /* 11b3452a sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3452c mov esi, esp */
  ESI = (ESP);
  /* 11b3452e push ecx */
  push32((uint32_t)(ECX));
  /* 11b3452f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b34531 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b34533 call dword ptr [0x11b6a4c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4c4))), 0x11b34539u);
  /* 11b34539 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3453c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3453e call 0x11b36000 */
  push32(0x11b34543u); f_11b36000();
  /* 11b34543 mov esi, esp */
  ESI = (ESP);
  /* 11b34545 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11b34547 call dword ptr [0x11b6a484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a484))), 0x11b3454du);
  /* 11b3454d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34550 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34552 call 0x11b36000 */
  push32(0x11b34557u); f_11b36000();
  /* 11b34557 mov esi, esp */
  ESI = (ESP);
  /* 11b34559 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11b3455b call dword ptr [0x11b6a474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a474))), 0x11b34561u);
  /* 11b34561 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34564 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34566 call 0x11b36000 */
  push32(0x11b3456bu); f_11b36000();
L_11b3456b:;
  /* 11b3456b mov esi, esp */
  ESI = (ESP);
  /* 11b3456d push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11b3456f call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b34575u);
  /* 11b34575 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34578 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3457a call 0x11b36000 */
  push32(0x11b3457fu); f_11b36000();
  /* 11b3457f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b34584 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b34586 je 0x11b34618 */
  if (C.zf) goto L_11b34618;
  /* 11b3458c mov esi, esp */
  ESI = (ESP);
  /* 11b3458e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b34590 call dword ptr [0x11b6a4f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4f0))), 0x11b34596u);
  /* 11b34596 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34599 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3459b call 0x11b36000 */
  push32(0x11b345a0u); f_11b36000();
  /* 11b345a0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b345a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b345a7 je 0x11b34618 */
  if (C.zf) goto L_11b34618;
  /* 11b345a9 mov esi, esp */
  ESI = (ESP);
  /* 11b345ab push 0 */
  push32((uint32_t)(0x0u));
  /* 11b345ad push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11b345af call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b345b5u);
  /* 11b345b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b345b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b345ba call 0x11b36000 */
  push32(0x11b345bfu); f_11b36000();
  /* 11b345bf mov esi, esp */
  ESI = (ESP);
  /* 11b345c1 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b345c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b345c5 call dword ptr [0x11b6a4c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4c0))), 0x11b345cbu);
  /* 11b345cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b345ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b345d0 call 0x11b36000 */
  push32(0x11b345d5u); f_11b36000();
  /* 11b345d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b345d7 jle 0x11b345f2 */
  if ((C.zf||C.sf!=C.of)) goto L_11b345f2;
  /* 11b345d9 mov esi, esp */
  ESI = (ESP);
  /* 11b345db push 0x11b6238c */
  push32((uint32_t)(0x11b6238cu));
  /* 11b345e0 call dword ptr [0x11b6a4d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4d4))), 0x11b345e6u);
  /* 11b345e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b345e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b345eb call 0x11b36000 */
  push32(0x11b345f0u); f_11b36000();
  /* 11b345f0 jmp 0x11b34609 */
  goto L_11b34609;
L_11b345f2:;
  /* 11b345f2 mov esi, esp */
  ESI = (ESP);
  /* 11b345f4 push 0x11b62380 */
  push32((uint32_t)(0x11b62380u));
  /* 11b345f9 call dword ptr [0x11b6a4d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4d4))), 0x11b345ffu);
  /* 11b345ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34602 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34604 call 0x11b36000 */
  push32(0x11b34609u); f_11b36000();
L_11b34609:;
  /* 11b34609 mov esi, esp */
  ESI = (ESP);
  /* 11b3460b call dword ptr [0x11b6a4f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4f4))), 0x11b34611u);
  /* 11b34611 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34613 call 0x11b36000 */
  push32(0x11b34618u); f_11b36000();
L_11b34618:;
  /* 11b34618 mov esi, esp */
  ESI = (ESP);
  /* 11b3461a push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11b3461c call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b34622u);
  /* 11b34622 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34625 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34627 call 0x11b36000 */
  push32(0x11b3462cu); f_11b36000();
  /* 11b3462c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b34631 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b34633 je 0x11b3468f */
  if (C.zf) goto L_11b3468f;
  /* 11b34635 mov esi, esp */
  ESI = (ESP);
  /* 11b34637 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b34639 push 0x11b67910 */
  push32((uint32_t)(0x11b67910u));
  /* 11b3463e call dword ptr [0x11b6a4e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4e4))), 0x11b34644u);
  /* 11b34644 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34647 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34649 call 0x11b36000 */
  push32(0x11b3464eu); f_11b36000();
  /* 11b3464e cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34651 jge 0x11b3468f */
  if ((C.sf==C.of)) goto L_11b3468f;
  /* 11b34653 mov esi, esp */
  ESI = (ESP);
  /* 11b34655 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b34657 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11b34659 call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b3465fu);
  /* 11b3465f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34662 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34664 call 0x11b36000 */
  push32(0x11b34669u); f_11b36000();
  /* 11b34669 mov esi, esp */
  ESI = (ESP);
  /* 11b3466b push 0x11b62374 */
  push32((uint32_t)(0x11b62374u));
  /* 11b34670 call dword ptr [0x11b6a4d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4d4))), 0x11b34676u);
  /* 11b34676 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34679 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3467b call 0x11b36000 */
  push32(0x11b34680u); f_11b36000();
  /* 11b34680 mov esi, esp */
  ESI = (ESP);
  /* 11b34682 call dword ptr [0x11b6a4f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4f4))), 0x11b34688u);
  /* 11b34688 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3468a call 0x11b36000 */
  push32(0x11b3468fu); f_11b36000();
L_11b3468f:;
  /* 11b3468f mov esi, esp */
  ESI = (ESP);
  /* 11b34691 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11b34693 call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b34699u);
  /* 11b34699 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3469c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3469e call 0x11b36000 */
  push32(0x11b346a3u); f_11b36000();
  /* 11b346a3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b346a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b346aa jne 0x11b34743 */
  if (!C.zf) goto L_11b34743;
  /* 11b346b0 mov esi, esp */
  ESI = (ESP);
  /* 11b346b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b346b4 call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b346bau);
  /* 11b346ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b346bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b346bf call 0x11b36000 */
  push32(0x11b346c4u); f_11b36000();
  /* 11b346c4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b346c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b346cb jne 0x11b34743 */
  if (!C.zf) goto L_11b34743;
  /* 11b346cd mov esi, esp */
  ESI = (ESP);
  /* 11b346cf push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11b346d1 call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b346d7u);
  /* 11b346d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b346da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b346dc call 0x11b36000 */
  push32(0x11b346e1u); f_11b36000();
  /* 11b346e1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b346e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b346e8 jne 0x11b34743 */
  if (!C.zf) goto L_11b34743;
  /* 11b346ea mov esi, esp */
  ESI = (ESP);
  /* 11b346ec push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11b346ee call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b346f4u);
  /* 11b346f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b346f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b346f9 call 0x11b36000 */
  push32(0x11b346feu); f_11b36000();
  /* 11b346fe and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b34703 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b34705 je 0x11b34743 */
  if (C.zf) goto L_11b34743;
  /* 11b34707 mov esi, esp */
  ESI = (ESP);
  /* 11b34709 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3470b push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11b3470d call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b34713u);
  /* 11b34713 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34716 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34718 call 0x11b36000 */
  push32(0x11b3471du); f_11b36000();
  /* 11b3471d mov esi, esp */
  ESI = (ESP);
  /* 11b3471f push 0x11b6236c */
  push32((uint32_t)(0x11b6236cu));
  /* 11b34724 call dword ptr [0x11b6a4d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4d4))), 0x11b3472au);
  /* 11b3472a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3472d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3472f call 0x11b36000 */
  push32(0x11b34734u); f_11b36000();
  /* 11b34734 mov esi, esp */
  ESI = (ESP);
  /* 11b34736 call dword ptr [0x11b6a4ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4ec))), 0x11b3473cu);
  /* 11b3473c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3473e call 0x11b36000 */
  push32(0x11b34743u); f_11b36000();
L_11b34743:;
  /* 11b34743 mov esi, esp */
  ESI = (ESP);
  /* 11b34745 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b34747 call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b3474du);
  /* 11b3474d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34750 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34752 call 0x11b36000 */
  push32(0x11b34757u); f_11b36000();
  /* 11b34757 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3475c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3475e je 0x11b34a30 */
  if (C.zf) goto L_11b34a30;
  /* 11b34764 mov esi, esp */
  ESI = (ESP);
  /* 11b34766 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b34768 call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b3476eu);
  /* 11b3476e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34771 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34773 call 0x11b36000 */
  push32(0x11b34778u); f_11b36000();
  /* 11b34778 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3477d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3477f je 0x11b347d9 */
  if (C.zf) goto L_11b347d9;
  /* 11b34781 mov esi, esp */
  ESI = (ESP);
  /* 11b34783 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b34785 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b34787 call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b3478du);
  /* 11b3478d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34790 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34792 call 0x11b36000 */
  push32(0x11b34797u); f_11b36000();
  /* 11b34797 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b3479e jmp 0x11b347a9 */
  goto L_11b347a9;
L_11b347a0:;
  /* 11b347a0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b347a3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b347a6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b347a9:;
  /* 11b347a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b347ac cmp eax, dword ptr [0x11b67888] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11b67888))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b347b2 jge 0x11b347d9 */
  if ((C.sf==C.of)) goto L_11b347d9;
  /* 11b347b4 mov esi, esp */
  ESI = (ESP);
  /* 11b347b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b347b8 push 0x11b677c8 */
  push32((uint32_t)(0x11b677c8u));
  /* 11b347bd push 0x11b67930 */
  push32((uint32_t)(0x11b67930u));
  /* 11b347c2 push 0x11b677f0 */
  push32((uint32_t)(0x11b677f0u));
  /* 11b347c7 call dword ptr [0x11b6a4fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4fc))), 0x11b347cdu);
  /* 11b347cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b347d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b347d2 call 0x11b36000 */
  push32(0x11b347d7u); f_11b36000();
  /* 11b347d7 jmp 0x11b347a0 */
  goto L_11b347a0;
L_11b347d9:;
  /* 11b347d9 mov esi, esp */
  ESI = (ESP);
  /* 11b347db push 0xa */
  push32((uint32_t)(0xau));
  /* 11b347dd call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b347e3u);
  /* 11b347e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b347e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b347e8 call 0x11b36000 */
  push32(0x11b347edu); f_11b36000();
  /* 11b347ed and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b347f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b347f4 je 0x11b34845 */
  if (C.zf) goto L_11b34845;
  /* 11b347f6 mov esi, esp */
  ESI = (ESP);
  /* 11b347f8 push 0x11b677f0 */
  push32((uint32_t)(0x11b677f0u));
  /* 11b347fd call dword ptr [0x11b6a500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a500))), 0x11b34803u);
  /* 11b34803 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34806 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34808 call 0x11b36000 */
  push32(0x11b3480du); f_11b36000();
  /* 11b3480d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b34812 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b34814 je 0x11b34845 */
  if (C.zf) goto L_11b34845;
  /* 11b34816 mov esi, esp */
  ESI = (ESP);
  /* 11b34818 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11b3481d push 3 */
  push32((uint32_t)(0x3u));
  /* 11b3481f call dword ptr [0x11b6a49c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a49c))), 0x11b34825u);
  /* 11b34825 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34828 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3482a call 0x11b36000 */
  push32(0x11b3482fu); f_11b36000();
  /* 11b3482f mov esi, esp */
  ESI = (ESP);
  /* 11b34831 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b34833 push 0xa */
  push32((uint32_t)(0xau));
  /* 11b34835 call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b3483bu);
  /* 11b3483b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3483e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34840 call 0x11b36000 */
  push32(0x11b34845u); f_11b36000();
L_11b34845:;
  /* 11b34845 mov esi, esp */
  ESI = (ESP);
  /* 11b34847 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 11b34849 call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b3484fu);
  /* 11b3484f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34852 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34854 call 0x11b36000 */
  push32(0x11b34859u); f_11b36000();
  /* 11b34859 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3485e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b34860 jne 0x11b34976 */
  if (!C.zf) goto L_11b34976;
  /* 11b34866 mov esi, esp */
  ESI = (ESP);
  /* 11b34868 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b3486a call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b34870u);
  /* 11b34870 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34873 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34875 call 0x11b36000 */
  push32(0x11b3487au); f_11b36000();
  /* 11b3487a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3487f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b34881 je 0x11b34976 */
  if (C.zf) goto L_11b34976;
  /* 11b34887 mov esi, esp */
  ESI = (ESP);
  /* 11b34889 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b3488b call dword ptr [0x11b6a4a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4a4))), 0x11b34891u);
  /* 11b34891 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34894 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34896 call 0x11b36000 */
  push32(0x11b3489bu); f_11b36000();
  /* 11b3489b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b348a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b348a2 je 0x11b34976 */
  if (C.zf) goto L_11b34976;
  /* 11b348a8 mov esi, esp */
  ESI = (ESP);
  /* 11b348aa push 0 */
  push32((uint32_t)(0x0u));
  /* 11b348ac push 4 */
  push32((uint32_t)(0x4u));
  /* 11b348ae call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b348b4u);
  /* 11b348b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b348b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b348b9 call 0x11b36000 */
  push32(0x11b348beu); f_11b36000();
  /* 11b348be mov esi, esp */
  ESI = (ESP);
  /* 11b348c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b348c2 push 0xa */
  push32((uint32_t)(0xau));
  /* 11b348c4 call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b348cau);
  /* 11b348ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b348cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b348cf call 0x11b36000 */
  push32(0x11b348d4u); f_11b36000();
  /* 11b348d4 mov esi, esp */
  ESI = (ESP);
  /* 11b348d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b348d8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b348da call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b348e0u);
  /* 11b348e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b348e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b348e5 call 0x11b36000 */
  push32(0x11b348eau); f_11b36000();
  /* 11b348ea mov esi, esp */
  ESI = (ESP);
  /* 11b348ec push 3 */
  push32((uint32_t)(0x3u));
  /* 11b348ee call dword ptr [0x11b6a4f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4f8))), 0x11b348f4u);
  /* 11b348f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b348f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b348f9 call 0x11b36000 */
  push32(0x11b348feu); f_11b36000();
  /* 11b348fe mov esi, esp */
  ESI = (ESP);
  /* 11b34900 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11b34905 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b34907 call dword ptr [0x11b6a49c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a49c))), 0x11b3490du);
  /* 11b3490d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34910 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34912 call 0x11b36000 */
  push32(0x11b34917u); f_11b36000();
  /* 11b34917 mov esi, esp */
  ESI = (ESP);
  /* 11b34919 push 0x11b677e0 */
  push32((uint32_t)(0x11b677e0u));
  /* 11b3491e push 0x11b677c8 */
  push32((uint32_t)(0x11b677c8u));
  /* 11b34923 call dword ptr [0x11b6a508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a508))), 0x11b34929u);
  /* 11b34929 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3492c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3492e call 0x11b36000 */
  push32(0x11b34933u); f_11b36000();
  /* 11b34933 mov esi, esp */
  ESI = (ESP);
  /* 11b34935 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b34937 push 0x11b677e0 */
  push32((uint32_t)(0x11b677e0u));
  /* 11b3493c call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b34942u);
  /* 11b34942 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34945 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34947 call 0x11b36000 */
  push32(0x11b3494cu); f_11b36000();
  /* 11b3494c mov esi, esp */
  ESI = (ESP);
  /* 11b3494e push 1 */
  push32((uint32_t)(0x1u));
  /* 11b34950 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b34952 call dword ptr [0x11b6a50c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a50c))), 0x11b34958u);
  /* 11b34958 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3495b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3495d call 0x11b36000 */
  push32(0x11b34962u); f_11b36000();
  /* 11b34962 mov esi, esp */
  ESI = (ESP);
  /* 11b34964 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b34966 call dword ptr [0x11b6a498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a498))), 0x11b3496cu);
  /* 11b3496c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3496f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34971 call 0x11b36000 */
  push32(0x11b34976u); f_11b36000();
L_11b34976:;
  /* 11b34976 mov esi, esp */
  ESI = (ESP);
  /* 11b34978 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3497a push 0x11b67980 */
  push32((uint32_t)(0x11b67980u));
  /* 11b3497f push 0x11b677e0 */
  push32((uint32_t)(0x11b677e0u));
  /* 11b34984 call dword ptr [0x11b6a504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a504))), 0x11b3498au);
  /* 11b3498a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3498d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3498f call 0x11b36000 */
  push32(0x11b34994u); f_11b36000();
  /* 11b34994 mov esi, esp */
  ESI = (ESP);
  /* 11b34996 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 11b34998 call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b3499eu);
  /* 11b3499e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b349a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b349a3 call 0x11b36000 */
  push32(0x11b349a8u); f_11b36000();
  /* 11b349a8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b349ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b349af jne 0x11b34a30 */
  if (!C.zf) goto L_11b34a30;
  /* 11b349b1 mov esi, esp */
  ESI = (ESP);
  /* 11b349b3 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b349b5 call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b349bbu);
  /* 11b349bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b349be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b349c0 call 0x11b36000 */
  push32(0x11b349c5u); f_11b36000();
  /* 11b349c5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b349ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b349cc jne 0x11b34a30 */
  if (!C.zf) goto L_11b34a30;
  /* 11b349ce mov esi, esp */
  ESI = (ESP);
  /* 11b349d0 push 0x11b677e0 */
  push32((uint32_t)(0x11b677e0u));
  /* 11b349d5 call dword ptr [0x11b6a4b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4b8))), 0x11b349dbu);
  /* 11b349db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b349de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b349e0 call 0x11b36000 */
  push32(0x11b349e5u); f_11b36000();
  /* 11b349e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b349e7 je 0x11b34a06 */
  if (C.zf) goto L_11b34a06;
  /* 11b349e9 mov esi, esp */
  ESI = (ESP);
  /* 11b349eb push 8 */
  push32((uint32_t)(0x8u));
  /* 11b349ed call dword ptr [0x11b6a4bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4bc))), 0x11b349f3u);
  /* 11b349f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b349f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b349f8 call 0x11b36000 */
  push32(0x11b349fdu); f_11b36000();
  /* 11b349fd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b34a02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b34a04 je 0x11b34a30 */
  if (C.zf) goto L_11b34a30;
L_11b34a06:;
  /* 11b34a06 mov esi, esp */
  ESI = (ESP);
  /* 11b34a08 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b34a0a call dword ptr [0x11b6a4f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4f8))), 0x11b34a10u);
  /* 11b34a10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34a13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34a15 call 0x11b36000 */
  push32(0x11b34a1au); f_11b36000();
  /* 11b34a1a mov esi, esp */
  ESI = (ESP);
  /* 11b34a1c push 1 */
  push32((uint32_t)(0x1u));
  /* 11b34a1e push 4 */
  push32((uint32_t)(0x4u));
  /* 11b34a20 call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b34a26u);
  /* 11b34a26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34a29 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34a2b call 0x11b36000 */
  push32(0x11b34a30u); f_11b36000();
L_11b34a30:;
  /* 11b34a30 mov esi, esp */
  ESI = (ESP);
  /* 11b34a32 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11b34a34 call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b34a3au);
  /* 11b34a3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34a3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34a3f call 0x11b36000 */
  push32(0x11b34a44u); f_11b36000();
  /* 11b34a44 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b34a49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b34a4b je 0x11b34d1d */
  if (C.zf) goto L_11b34d1d;
  /* 11b34a51 mov esi, esp */
  ESI = (ESP);
  /* 11b34a53 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11b34a55 call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b34a5bu);
  /* 11b34a5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34a5e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34a60 call 0x11b36000 */
  push32(0x11b34a65u); f_11b36000();
  /* 11b34a65 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b34a6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b34a6c je 0x11b34ac6 */
  if (C.zf) goto L_11b34ac6;
  /* 11b34a6e mov esi, esp */
  ESI = (ESP);
  /* 11b34a70 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b34a72 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11b34a74 call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b34a7au);
  /* 11b34a7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34a7d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34a7f call 0x11b36000 */
  push32(0x11b34a84u); f_11b36000();
  /* 11b34a84 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b34a8b jmp 0x11b34a96 */
  goto L_11b34a96;
L_11b34a8d:;
  /* 11b34a8d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b34a90 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34a93 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11b34a96:;
  /* 11b34a96 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b34a99 cmp edx, dword ptr [0x11b678d8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11b678d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34a9f jge 0x11b34ac6 */
  if ((C.sf==C.of)) goto L_11b34ac6;
  /* 11b34aa1 mov esi, esp */
  ESI = (ESP);
  /* 11b34aa3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b34aa5 push 0x11b677c0 */
  push32((uint32_t)(0x11b677c0u));
  /* 11b34aaa push 0x11b67930 */
  push32((uint32_t)(0x11b67930u));
  /* 11b34aaf push 0x11b677f8 */
  push32((uint32_t)(0x11b677f8u));
  /* 11b34ab4 call dword ptr [0x11b6a4fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4fc))), 0x11b34abau);
  /* 11b34aba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34abd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34abf call 0x11b36000 */
  push32(0x11b34ac4u); f_11b36000();
  /* 11b34ac4 jmp 0x11b34a8d */
  goto L_11b34a8d;
L_11b34ac6:;
  /* 11b34ac6 mov esi, esp */
  ESI = (ESP);
  /* 11b34ac8 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11b34aca call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b34ad0u);
  /* 11b34ad0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34ad3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34ad5 call 0x11b36000 */
  push32(0x11b34adau); f_11b36000();
  /* 11b34ada and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b34adf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b34ae1 je 0x11b34b32 */
  if (C.zf) goto L_11b34b32;
  /* 11b34ae3 mov esi, esp */
  ESI = (ESP);
  /* 11b34ae5 push 0x11b677f8 */
  push32((uint32_t)(0x11b677f8u));
  /* 11b34aea call dword ptr [0x11b6a500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a500))), 0x11b34af0u);
  /* 11b34af0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34af3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34af5 call 0x11b36000 */
  push32(0x11b34afau); f_11b36000();
  /* 11b34afa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b34aff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b34b01 je 0x11b34b32 */
  if (C.zf) goto L_11b34b32;
  /* 11b34b03 mov esi, esp */
  ESI = (ESP);
  /* 11b34b05 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11b34b0a push 4 */
  push32((uint32_t)(0x4u));
  /* 11b34b0c call dword ptr [0x11b6a49c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a49c))), 0x11b34b12u);
  /* 11b34b12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34b15 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34b17 call 0x11b36000 */
  push32(0x11b34b1cu); f_11b36000();
  /* 11b34b1c mov esi, esp */
  ESI = (ESP);
  /* 11b34b1e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b34b20 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11b34b22 call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b34b28u);
  /* 11b34b28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34b2b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34b2d call 0x11b36000 */
  push32(0x11b34b32u); f_11b36000();
L_11b34b32:;
  /* 11b34b32 mov esi, esp */
  ESI = (ESP);
  /* 11b34b34 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 11b34b36 call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b34b3cu);
  /* 11b34b3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34b3f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34b41 call 0x11b36000 */
  push32(0x11b34b46u); f_11b36000();
  /* 11b34b46 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b34b4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b34b4d jne 0x11b34c63 */
  if (!C.zf) goto L_11b34c63;
  /* 11b34b53 mov esi, esp */
  ESI = (ESP);
  /* 11b34b55 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b34b57 call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b34b5du);
  /* 11b34b5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34b60 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34b62 call 0x11b36000 */
  push32(0x11b34b67u); f_11b36000();
  /* 11b34b67 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b34b6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b34b6e je 0x11b34c63 */
  if (C.zf) goto L_11b34c63;
  /* 11b34b74 mov esi, esp */
  ESI = (ESP);
  /* 11b34b76 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b34b78 call dword ptr [0x11b6a4a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4a4))), 0x11b34b7eu);
  /* 11b34b7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34b81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34b83 call 0x11b36000 */
  push32(0x11b34b88u); f_11b36000();
  /* 11b34b88 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b34b8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b34b8f je 0x11b34c63 */
  if (C.zf) goto L_11b34c63;
  /* 11b34b95 mov esi, esp */
  ESI = (ESP);
  /* 11b34b97 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b34b99 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b34b9b call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b34ba1u);
  /* 11b34ba1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34ba4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34ba6 call 0x11b36000 */
  push32(0x11b34babu); f_11b36000();
  /* 11b34bab mov esi, esp */
  ESI = (ESP);
  /* 11b34bad push 1 */
  push32((uint32_t)(0x1u));
  /* 11b34baf push 0xc */
  push32((uint32_t)(0xcu));
  /* 11b34bb1 call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b34bb7u);
  /* 11b34bb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34bba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34bbc call 0x11b36000 */
  push32(0x11b34bc1u); f_11b36000();
  /* 11b34bc1 mov esi, esp */
  ESI = (ESP);
  /* 11b34bc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b34bc5 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11b34bc7 call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b34bcdu);
  /* 11b34bcd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34bd0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34bd2 call 0x11b36000 */
  push32(0x11b34bd7u); f_11b36000();
  /* 11b34bd7 mov esi, esp */
  ESI = (ESP);
  /* 11b34bd9 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b34bdb call dword ptr [0x11b6a4f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4f8))), 0x11b34be1u);
  /* 11b34be1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34be4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34be6 call 0x11b36000 */
  push32(0x11b34bebu); f_11b36000();
  /* 11b34beb mov esi, esp */
  ESI = (ESP);
  /* 11b34bed push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11b34bf2 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b34bf4 call dword ptr [0x11b6a49c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a49c))), 0x11b34bfau);
  /* 11b34bfa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34bfd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34bff call 0x11b36000 */
  push32(0x11b34c04u); f_11b36000();
  /* 11b34c04 mov esi, esp */
  ESI = (ESP);
  /* 11b34c06 push 0x11b677d0 */
  push32((uint32_t)(0x11b677d0u));
  /* 11b34c0b push 0x11b677c0 */
  push32((uint32_t)(0x11b677c0u));
  /* 11b34c10 call dword ptr [0x11b6a508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a508))), 0x11b34c16u);
  /* 11b34c16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34c19 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34c1b call 0x11b36000 */
  push32(0x11b34c20u); f_11b36000();
  /* 11b34c20 mov esi, esp */
  ESI = (ESP);
  /* 11b34c22 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b34c24 push 0x11b677d0 */
  push32((uint32_t)(0x11b677d0u));
  /* 11b34c29 call dword ptr [0x11b6a494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a494))), 0x11b34c2fu);
  /* 11b34c2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34c32 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34c34 call 0x11b36000 */
  push32(0x11b34c39u); f_11b36000();
  /* 11b34c39 mov esi, esp */
  ESI = (ESP);
  /* 11b34c3b push 1 */
  push32((uint32_t)(0x1u));
  /* 11b34c3d push 5 */
  push32((uint32_t)(0x5u));
  /* 11b34c3f call dword ptr [0x11b6a50c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a50c))), 0x11b34c45u);
  /* 11b34c45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34c48 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34c4a call 0x11b36000 */
  push32(0x11b34c4fu); f_11b36000();
  /* 11b34c4f mov esi, esp */
  ESI = (ESP);
  /* 11b34c51 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b34c53 call dword ptr [0x11b6a498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a498))), 0x11b34c59u);
  /* 11b34c59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34c5c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34c5e call 0x11b36000 */
  push32(0x11b34c63u); f_11b36000();
L_11b34c63:;
  /* 11b34c63 mov esi, esp */
  ESI = (ESP);
  /* 11b34c65 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b34c67 push 0x11b67988 */
  push32((uint32_t)(0x11b67988u));
  /* 11b34c6c push 0x11b677d0 */
  push32((uint32_t)(0x11b677d0u));
  /* 11b34c71 call dword ptr [0x11b6a504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a504))), 0x11b34c77u);
  /* 11b34c77 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34c7a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34c7c call 0x11b36000 */
  push32(0x11b34c81u); f_11b36000();
  /* 11b34c81 mov esi, esp */
  ESI = (ESP);
  /* 11b34c83 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 11b34c85 call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b34c8bu);
  /* 11b34c8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34c8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34c90 call 0x11b36000 */
  push32(0x11b34c95u); f_11b36000();
  /* 11b34c95 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b34c9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b34c9c jne 0x11b34d1d */
  if (!C.zf) goto L_11b34d1d;
  /* 11b34c9e mov esi, esp */
  ESI = (ESP);
  /* 11b34ca0 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b34ca2 call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b34ca8u);
  /* 11b34ca8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34cab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34cad call 0x11b36000 */
  push32(0x11b34cb2u); f_11b36000();
  /* 11b34cb2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b34cb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b34cb9 jne 0x11b34d1d */
  if (!C.zf) goto L_11b34d1d;
  /* 11b34cbb mov esi, esp */
  ESI = (ESP);
  /* 11b34cbd push 0x11b677d0 */
  push32((uint32_t)(0x11b677d0u));
  /* 11b34cc2 call dword ptr [0x11b6a4b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4b8))), 0x11b34cc8u);
  /* 11b34cc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34ccb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34ccd call 0x11b36000 */
  push32(0x11b34cd2u); f_11b36000();
  /* 11b34cd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b34cd4 je 0x11b34cf3 */
  if (C.zf) goto L_11b34cf3;
  /* 11b34cd6 mov esi, esp */
  ESI = (ESP);
  /* 11b34cd8 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b34cda call dword ptr [0x11b6a4bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4bc))), 0x11b34ce0u);
  /* 11b34ce0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34ce3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34ce5 call 0x11b36000 */
  push32(0x11b34ceau); f_11b36000();
  /* 11b34cea and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b34cef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b34cf1 je 0x11b34d1d */
  if (C.zf) goto L_11b34d1d;
L_11b34cf3:;
  /* 11b34cf3 mov esi, esp */
  ESI = (ESP);
  /* 11b34cf5 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b34cf7 call dword ptr [0x11b6a4f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4f8))), 0x11b34cfdu);
  /* 11b34cfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34d00 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34d02 call 0x11b36000 */
  push32(0x11b34d07u); f_11b36000();
  /* 11b34d07 mov esi, esp */
  ESI = (ESP);
  /* 11b34d09 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b34d0b push 5 */
  push32((uint32_t)(0x5u));
  /* 11b34d0d call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b34d13u);
  /* 11b34d13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34d16 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34d18 call 0x11b36000 */
  push32(0x11b34d1du); f_11b36000();
L_11b34d1d:;
  /* 11b34d1d mov esi, esp */
  ESI = (ESP);
  /* 11b34d1f push 0xd */
  push32((uint32_t)(0xdu));
  /* 11b34d21 call dword ptr [0x11b6a4bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4bc))), 0x11b34d27u);
  /* 11b34d27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34d2a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34d2c call 0x11b36000 */
  push32(0x11b34d31u); f_11b36000();
  /* 11b34d31 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b34d36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b34d38 je 0x11b34f41 */
  if (C.zf) goto L_11b34f41;
  /* 11b34d3e mov esi, esp */
  ESI = (ESP);
  /* 11b34d40 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b34d42 call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b34d48u);
  /* 11b34d48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34d4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34d4d call 0x11b36000 */
  push32(0x11b34d52u); f_11b36000();
  /* 11b34d52 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b34d57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b34d59 jne 0x11b34d7c */
  if (!C.zf) goto L_11b34d7c;
  /* 11b34d5b mov esi, esp */
  ESI = (ESP);
  /* 11b34d5d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11b34d5f call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b34d65u);
  /* 11b34d65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34d68 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34d6a call 0x11b36000 */
  push32(0x11b34d6fu); f_11b36000();
  /* 11b34d6f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b34d74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b34d76 je 0x11b34f41 */
  if (C.zf) goto L_11b34f41;
L_11b34d7c:;
  /* 11b34d7c mov esi, esp */
  ESI = (ESP);
  /* 11b34d7e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b34d80 call dword ptr [0x11b6a480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a480))), 0x11b34d86u);
  /* 11b34d86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34d89 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34d8b call 0x11b36000 */
  push32(0x11b34d90u); f_11b36000();
  /* 11b34d90 mov dword ptr [ebp - 0x44], eax */
  w32((uint32_t)(EBP + -0x44), (EAX));
  /* 11b34d93 cmp dword ptr [ebp - 0x44], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x44))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34d97 ja 0x11b34f0b */
  if ((!C.cf&&!C.zf)) goto L_11b34f0b;
  /* 11b34d9d mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 11b34da0 jmp dword ptr [eax*4 + 0x11b350f3] */
  switch (EAX) {
    case 0: goto L_11b34da7;
    case 1: goto L_11b34e02;
    case 2: goto L_11b34e5d;
    case 3: goto L_11b34eb5;
    default: x86_unimpl("switch@0x11b34da0 out of table"); return;
  }
L_11b34da7:;
  /* 11b34da7 mov ecx, dword ptr [0x11b67888] */
  ECX = (r32((uint32_t)(0x11b67888)));
  /* 11b34dad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34db0 mov dword ptr [0x11b67888], ecx */
  w32((uint32_t)(0x11b67888), (ECX));
  /* 11b34db6 mov edx, dword ptr [0x11b678d8] */
  EDX = (r32((uint32_t)(0x11b678d8)));
  /* 11b34dbc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34dbf mov dword ptr [0x11b678d8], edx */
  w32((uint32_t)(0x11b678d8), (EDX));
  /* 11b34dc5 mov eax, dword ptr [0x11b67908] */
  EAX = (r32((uint32_t)(0x11b67908)));
  /* 11b34dca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34dcd mov dword ptr [0x11b67908], eax */
  w32((uint32_t)(0x11b67908), (EAX));
  /* 11b34dd2 mov ecx, dword ptr [0x11b67938] */
  ECX = (r32((uint32_t)(0x11b67938)));
  /* 11b34dd8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34ddb mov dword ptr [0x11b67938], ecx */
  w32((uint32_t)(0x11b67938), (ECX));
  /* 11b34de1 mov edx, dword ptr [0x11b6793c] */
  EDX = (r32((uint32_t)(0x11b6793c)));
  /* 11b34de7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34dea mov dword ptr [0x11b6793c], edx */
  w32((uint32_t)(0x11b6793c), (EDX));
  /* 11b34df0 mov eax, dword ptr [0x11b67968] */
  EAX = (r32((uint32_t)(0x11b67968)));
  /* 11b34df5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34df8 mov dword ptr [0x11b67968], eax */
  w32((uint32_t)(0x11b67968), (EAX));
  /* 11b34dfd jmp 0x11b34f0b */
  goto L_11b34f0b;
L_11b34e02:;
  /* 11b34e02 mov ecx, dword ptr [0x11b67888] */
  ECX = (r32((uint32_t)(0x11b67888)));
  /* 11b34e08 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34e0b mov dword ptr [0x11b67888], ecx */
  w32((uint32_t)(0x11b67888), (ECX));
  /* 11b34e11 mov edx, dword ptr [0x11b678d8] */
  EDX = (r32((uint32_t)(0x11b678d8)));
  /* 11b34e17 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34e1a mov dword ptr [0x11b678d8], edx */
  w32((uint32_t)(0x11b678d8), (EDX));
  /* 11b34e20 mov eax, dword ptr [0x11b67908] */
  EAX = (r32((uint32_t)(0x11b67908)));
  /* 11b34e25 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34e28 mov dword ptr [0x11b67908], eax */
  w32((uint32_t)(0x11b67908), (EAX));
  /* 11b34e2d mov ecx, dword ptr [0x11b67938] */
  ECX = (r32((uint32_t)(0x11b67938)));
  /* 11b34e33 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34e36 mov dword ptr [0x11b67938], ecx */
  w32((uint32_t)(0x11b67938), (ECX));
  /* 11b34e3c mov edx, dword ptr [0x11b6793c] */
  EDX = (r32((uint32_t)(0x11b6793c)));
  /* 11b34e42 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34e45 mov dword ptr [0x11b6793c], edx */
  w32((uint32_t)(0x11b6793c), (EDX));
  /* 11b34e4b mov eax, dword ptr [0x11b67968] */
  EAX = (r32((uint32_t)(0x11b67968)));
  /* 11b34e50 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34e53 mov dword ptr [0x11b67968], eax */
  w32((uint32_t)(0x11b67968), (EAX));
  /* 11b34e58 jmp 0x11b34f0b */
  goto L_11b34f0b;
L_11b34e5d:;
  /* 11b34e5d mov ecx, dword ptr [0x11b67888] */
  ECX = (r32((uint32_t)(0x11b67888)));
  /* 11b34e63 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34e66 mov dword ptr [0x11b67888], ecx */
  w32((uint32_t)(0x11b67888), (ECX));
  /* 11b34e6c mov edx, dword ptr [0x11b678d8] */
  EDX = (r32((uint32_t)(0x11b678d8)));
  /* 11b34e72 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34e75 mov dword ptr [0x11b678d8], edx */
  w32((uint32_t)(0x11b678d8), (EDX));
  /* 11b34e7b mov eax, dword ptr [0x11b67908] */
  EAX = (r32((uint32_t)(0x11b67908)));
  /* 11b34e80 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34e83 mov dword ptr [0x11b67908], eax */
  w32((uint32_t)(0x11b67908), (EAX));
  /* 11b34e88 mov ecx, dword ptr [0x11b67938] */
  ECX = (r32((uint32_t)(0x11b67938)));
  /* 11b34e8e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34e91 mov dword ptr [0x11b67938], ecx */
  w32((uint32_t)(0x11b67938), (ECX));
  /* 11b34e97 mov edx, dword ptr [0x11b6793c] */
  EDX = (r32((uint32_t)(0x11b6793c)));
  /* 11b34e9d add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34ea0 mov dword ptr [0x11b6793c], edx */
  w32((uint32_t)(0x11b6793c), (EDX));
  /* 11b34ea6 mov eax, dword ptr [0x11b67968] */
  EAX = (r32((uint32_t)(0x11b67968)));
  /* 11b34eab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34eae mov dword ptr [0x11b67968], eax */
  w32((uint32_t)(0x11b67968), (EAX));
  /* 11b34eb3 jmp 0x11b34f0b */
  goto L_11b34f0b;
L_11b34eb5:;
  /* 11b34eb5 mov ecx, dword ptr [0x11b67888] */
  ECX = (r32((uint32_t)(0x11b67888)));
  /* 11b34ebb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34ebe mov dword ptr [0x11b67888], ecx */
  w32((uint32_t)(0x11b67888), (ECX));
  /* 11b34ec4 mov edx, dword ptr [0x11b678d8] */
  EDX = (r32((uint32_t)(0x11b678d8)));
  /* 11b34eca add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34ecd mov dword ptr [0x11b678d8], edx */
  w32((uint32_t)(0x11b678d8), (EDX));
  /* 11b34ed3 mov eax, dword ptr [0x11b67908] */
  EAX = (r32((uint32_t)(0x11b67908)));
  /* 11b34ed8 add eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34edb mov dword ptr [0x11b67908], eax */
  w32((uint32_t)(0x11b67908), (EAX));
  /* 11b34ee0 mov ecx, dword ptr [0x11b67938] */
  ECX = (r32((uint32_t)(0x11b67938)));
  /* 11b34ee6 add ecx, 5 */
  { uint32_t _a=(ECX),_b=(0x5u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34ee9 mov dword ptr [0x11b67938], ecx */
  w32((uint32_t)(0x11b67938), (ECX));
  /* 11b34eef mov edx, dword ptr [0x11b6793c] */
  EDX = (r32((uint32_t)(0x11b6793c)));
  /* 11b34ef5 add edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34ef8 mov dword ptr [0x11b6793c], edx */
  w32((uint32_t)(0x11b6793c), (EDX));
  /* 11b34efe mov eax, dword ptr [0x11b67968] */
  EAX = (r32((uint32_t)(0x11b67968)));
  /* 11b34f03 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34f06 mov dword ptr [0x11b67968], eax */
  w32((uint32_t)(0x11b67968), (EAX));
L_11b34f0b:;
  /* 11b34f0b mov esi, esp */
  ESI = (ESP);
  /* 11b34f0d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b34f0f call dword ptr [0x11b6a480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a480))), 0x11b34f15u);
  /* 11b34f15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34f18 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34f1a call 0x11b36000 */
  push32(0x11b34f1fu); f_11b36000();
  /* 11b34f1f mov ecx, 5 */
  ECX = (0x5u);
  /* 11b34f24 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b34f26 imul ecx, ecx, 0x1388 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1388u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b34f2c mov esi, esp */
  ESI = (ESP);
  /* 11b34f2e push ecx */
  push32((uint32_t)(ECX));
  /* 11b34f2f push 0xd */
  push32((uint32_t)(0xdu));
  /* 11b34f31 call dword ptr [0x11b6a49c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a49c))), 0x11b34f37u);
  /* 11b34f37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34f3a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34f3c call 0x11b36000 */
  push32(0x11b34f41u); f_11b36000();
L_11b34f41:;
  /* 11b34f41 mov esi, esp */
  ESI = (ESP);
  /* 11b34f43 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11b34f45 call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b34f4bu);
  /* 11b34f4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34f4e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34f50 call 0x11b36000 */
  push32(0x11b34f55u); f_11b36000();
  /* 11b34f55 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b34f5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b34f5c je 0x11b34fa8 */
  if (C.zf) goto L_11b34fa8;
  /* 11b34f5e mov esi, esp */
  ESI = (ESP);
  /* 11b34f60 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b34f62 call dword ptr [0x11b6a4f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4f0))), 0x11b34f68u);
  /* 11b34f68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34f6b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34f6d call 0x11b36000 */
  push32(0x11b34f72u); f_11b36000();
  /* 11b34f72 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b34f77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b34f79 je 0x11b34fa8 */
  if (C.zf) goto L_11b34fa8;
  /* 11b34f7b mov esi, esp */
  ESI = (ESP);
  /* 11b34f7d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b34f7f push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11b34f81 call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b34f87u);
  /* 11b34f87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34f8a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34f8c call 0x11b36000 */
  push32(0x11b34f91u); f_11b36000();
  /* 11b34f91 mov esi, esp */
  ESI = (ESP);
  /* 11b34f93 push 0x11b62360 */
  push32((uint32_t)(0x11b62360u));
  /* 11b34f98 call dword ptr [0x11b6a4d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4d4))), 0x11b34f9eu);
  /* 11b34f9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34fa1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34fa3 call 0x11b36000 */
  push32(0x11b34fa8u); f_11b36000();
L_11b34fa8:;
  /* 11b34fa8 mov esi, esp */
  ESI = (ESP);
  /* 11b34faa push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11b34fac call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b34fb2u);
  /* 11b34fb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34fb5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34fb7 call 0x11b36000 */
  push32(0x11b34fbcu); f_11b36000();
  /* 11b34fbc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b34fc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b34fc3 je 0x11b3500f */
  if (C.zf) goto L_11b3500f;
  /* 11b34fc5 mov esi, esp */
  ESI = (ESP);
  /* 11b34fc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b34fc9 call dword ptr [0x11b6a4f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4f0))), 0x11b34fcfu);
  /* 11b34fcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34fd2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34fd4 call 0x11b36000 */
  push32(0x11b34fd9u); f_11b36000();
  /* 11b34fd9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b34fde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b34fe0 je 0x11b3500f */
  if (C.zf) goto L_11b3500f;
  /* 11b34fe2 mov esi, esp */
  ESI = (ESP);
  /* 11b34fe4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b34fe6 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11b34fe8 call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b34feeu);
  /* 11b34fee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b34ff1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b34ff3 call 0x11b36000 */
  push32(0x11b34ff8u); f_11b36000();
  /* 11b34ff8 mov esi, esp */
  ESI = (ESP);
  /* 11b34ffa push 0x11b62354 */
  push32((uint32_t)(0x11b62354u));
  /* 11b34fff call dword ptr [0x11b6a4d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4d4))), 0x11b35005u);
  /* 11b35005 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b35008 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3500a call 0x11b36000 */
  push32(0x11b3500fu); f_11b36000();
L_11b3500f:;
  /* 11b3500f mov esi, esp */
  ESI = (ESP);
  /* 11b35011 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11b35013 call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b35019u);
  /* 11b35019 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3501c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3501e call 0x11b36000 */
  push32(0x11b35023u); f_11b36000();
  /* 11b35023 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b35028 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3502a je 0x11b350bf */
  if (C.zf) goto L_11b350bf;
  /* 11b35030 mov esi, esp */
  ESI = (ESP);
  /* 11b35032 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11b35034 call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b3503au);
  /* 11b3503a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3503d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3503f call 0x11b36000 */
  push32(0x11b35044u); f_11b36000();
  /* 11b35044 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b35049 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3504b jne 0x11b350bf */
  if (!C.zf) goto L_11b350bf;
  /* 11b3504d mov esi, esp */
  ESI = (ESP);
  /* 11b3504f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11b35051 call dword ptr [0x11b6a478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a478))), 0x11b35057u);
  /* 11b35057 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3505a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3505c call 0x11b36000 */
  push32(0x11b35061u); f_11b36000();
  /* 11b35061 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b35066 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b35068 jne 0x11b350bf */
  if (!C.zf) goto L_11b350bf;
  /* 11b3506a mov esi, esp */
  ESI = (ESP);
  /* 11b3506c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3506e push 0xf */
  push32((uint32_t)(0xfu));
  /* 11b35070 call dword ptr [0x11b6a47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a47c))), 0x11b35076u);
  /* 11b35076 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b35079 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3507b call 0x11b36000 */
  push32(0x11b35080u); f_11b36000();
  /* 11b35080 mov esi, esp */
  ESI = (ESP);
  /* 11b35082 push 0x11b6234c */
  push32((uint32_t)(0x11b6234cu));
  /* 11b35087 call dword ptr [0x11b6a4d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a4d4))), 0x11b3508du);
  /* 11b3508d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b35090 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b35092 call 0x11b36000 */
  push32(0x11b35097u); f_11b36000();
  /* 11b35097 mov esi, esp */
  ESI = (ESP);
  /* 11b35099 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11b3509b call dword ptr [0x11b6a484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a484))), 0x11b350a1u);
  /* 11b350a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b350a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b350a6 call 0x11b36000 */
  push32(0x11b350abu); f_11b36000();
  /* 11b350ab mov esi, esp */
  ESI = (ESP);
  /* 11b350ad push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11b350af call dword ptr [0x11b6a474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a474))), 0x11b350b5u);
  /* 11b350b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b350b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b350ba call 0x11b36000 */
  push32(0x11b350bfu); f_11b36000();
L_11b350bf:;
  /* 11b350bf pop edi */
  EDI = (pop32());
  /* 11b350c0 pop esi */
  ESI = (pop32());
  /* 11b350c1 pop ebx */
  EBX = (pop32());
  /* 11b350c2 add esp, 0x84 */
  { uint32_t _a=(ESP),_b=(0x84u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b350c8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b350ca call 0x11b36000 */
  push32(0x11b350cfu); f_11b36000();
  /* 11b350cf mov esp, ebp */
  ESP = (EBP);
  /* 11b350d1 pop ebp */
  EBP = (pop32());
  /* 11b350d2 ret  */
  ESPCHK(0x11b32130u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e20 @ 0x11b35e20 (16 bytes, 7 insns) */
void f_11b35e20(void) {
  FTRACE(0x11b35e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b35e20 push ebp */
  push32((uint32_t)(EBP));
  /* 11b35e21 mov ebp, esp */
  EBP = (ESP);
  /* 11b35e23 call 0x11b36480 */
  push32(0x11b35e28u); f_11b36480();
  /* 11b35e28 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b35e2b mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11b35e2e pop ebp */
  EBP = (pop32());
  /* 11b35e2f ret  */
  ESPCHK(0x11b35e20u, _esp0);
  ESP += 4; return;
}

/* _rand @ 0x11b35e30 (54 bytes, 18 insns) */
void f_11b35e30(void) {
  FTRACE(0x11b35e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b35e30 push ebp */
  push32((uint32_t)(EBP));
  /* 11b35e31 mov ebp, esp */
  EBP = (ESP);
  /* 11b35e33 push ecx */
  push32((uint32_t)(ECX));
  /* 11b35e34 call 0x11b36480 */
  push32(0x11b35e39u); f_11b36480();
  /* 11b35e39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b35e3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b35e3f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11b35e42 imul ecx, ecx, 0x343fd */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x343fdu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b35e48 add ecx, 0x269ec3 */
  { uint32_t _a=(ECX),_b=(0x269ec3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b35e4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b35e51 mov dword ptr [edx + 0x14], ecx */
  w32((uint32_t)(EDX + 0x14), (ECX));
  /* 11b35e54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b35e57 mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 11b35e5a shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11b35e5d and eax, 0x7fff */
  { uint32_t _r=(EAX)&(0x7fffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b35e62 mov esp, ebp */
  ESP = (EBP);
  /* 11b35e64 pop ebp */
  EBP = (pop32());
  /* 11b35e65 ret  */
  ESPCHK(0x11b35e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e70 @ 0x11b35e70 (385 bytes, 103 insns) */
void f_11b35e70(void) {
  FTRACE(0x11b35e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b35e70 push ebp */
  push32((uint32_t)(EBP));
  /* 11b35e71 mov ebp, esp */
  EBP = (ESP);
  /* 11b35e73 sub esp, 0xd8 */
  { uint32_t _a=(ESP),_b=(0xd8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b35e79 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11b35e7c push eax */
  push32((uint32_t)(EAX));
  /* 11b35e7d call dword ptr [0x11b6a3a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3a8))), 0x11b35e83u);
  /* 11b35e83 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11b35e86 push ecx */
  push32((uint32_t)(ECX));
  /* 11b35e87 call dword ptr [0x11b6a3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3a4))), 0x11b35e8du);
  /* 11b35e8d mov edx, dword ptr [ebp - 6] */
  EDX = (r32((uint32_t)(EBP + -0x6)));
  /* 11b35e90 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b35e96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b35e98 mov ax, word ptr [0x11b67aea] */
  AX = (r16((uint32_t)(0x11b67aea)));
  /* 11b35e9e cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b35ea0 jne 0x11b35f08 */
  if (!C.zf) goto L_11b35f08;
  /* 11b35ea2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b35ea5 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b35eab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b35ead mov dx, word ptr [0x11b67ae8] */
  DX = (r16((uint32_t)(0x11b67ae8)));
  /* 11b35eb4 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b35eb6 jne 0x11b35f08 */
  if (!C.zf) goto L_11b35f08;
  /* 11b35eb8 mov eax, dword ptr [ebp - 0xa] */
  EAX = (r32((uint32_t)(EBP + -0xa)));
  /* 11b35ebb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b35ec0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b35ec2 mov cx, word ptr [0x11b67ae6] */
  CX = (r16((uint32_t)(0x11b67ae6)));
  /* 11b35ec9 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b35ecb jne 0x11b35f08 */
  if (!C.zf) goto L_11b35f08;
  /* 11b35ecd mov edx, dword ptr [ebp - 0xe] */
  EDX = (r32((uint32_t)(EBP + -0xe)));
  /* 11b35ed0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b35ed6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b35ed8 mov ax, word ptr [0x11b67ae2] */
  AX = (r16((uint32_t)(0x11b67ae2)));
  /* 11b35ede cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b35ee0 jne 0x11b35f08 */
  if (!C.zf) goto L_11b35f08;
  /* 11b35ee2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b35ee5 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b35eeb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b35eed mov dx, word ptr [0x11b67ae0] */
  DX = (r16((uint32_t)(0x11b67ae0)));
  /* 11b35ef4 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b35ef6 jne 0x11b35f08 */
  if (!C.zf) goto L_11b35f08;
  /* 11b35ef8 mov eax, dword ptr [0x11b67ad8] */
  EAX = (r32((uint32_t)(0x11b67ad8)));
  /* 11b35efd mov dword ptr [ebp - 0xd8], eax */
  w32((uint32_t)(EBP + -0xd8), (EAX));
  /* 11b35f03 jmp 0x11b35f90 */
  goto L_11b35f90;
L_11b35f08:;
  /* 11b35f08 lea ecx, [ebp - 0xd0] */
  ECX = ((uint32_t)(EBP + -0xd0));
  /* 11b35f0e push ecx */
  push32((uint32_t)(ECX));
  /* 11b35f0f call dword ptr [0x11b6a3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3a0))), 0x11b35f15u);
  /* 11b35f15 mov dword ptr [ebp - 0xd4], eax */
  w32((uint32_t)(EBP + -0xd4), (EAX));
  /* 11b35f1b cmp dword ptr [ebp - 0xd4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xd4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b35f22 je 0x11b35f58 */
  if (C.zf) goto L_11b35f58;
  /* 11b35f24 cmp dword ptr [ebp - 0xd4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xd4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b35f2b jne 0x11b35f4c */
  if (!C.zf) goto L_11b35f4c;
  /* 11b35f2d mov edx, dword ptr [ebp - 0x36] */
  EDX = (r32((uint32_t)(EBP + -0x36)));
  /* 11b35f30 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b35f36 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b35f38 je 0x11b35f4c */
  if (C.zf) goto L_11b35f4c;
  /* 11b35f3a cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b35f3e je 0x11b35f4c */
  if (C.zf) goto L_11b35f4c;
  /* 11b35f40 mov dword ptr [ebp - 0xd8], 1 */
  w32((uint32_t)(EBP + -0xd8), (0x1u));
  /* 11b35f4a jmp 0x11b35f56 */
  goto L_11b35f56;
L_11b35f4c:;
  /* 11b35f4c mov dword ptr [ebp - 0xd8], 0 */
  w32((uint32_t)(EBP + -0xd8), (0x0u));
L_11b35f56:;
  /* 11b35f56 jmp 0x11b35f62 */
  goto L_11b35f62;
L_11b35f58:;
  /* 11b35f58 mov dword ptr [ebp - 0xd8], 0xffffffff */
  w32((uint32_t)(EBP + -0xd8), (0xffffffffu));
L_11b35f62:;
  /* 11b35f62 mov eax, dword ptr [ebp - 0xd8] */
  EAX = (r32((uint32_t)(EBP + -0xd8)));
  /* 11b35f68 mov dword ptr [0x11b67ad8], eax */
  w32((uint32_t)(0x11b67ad8), (EAX));
  /* 11b35f6d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b35f70 mov dword ptr [0x11b67ae0], ecx */
  w32((uint32_t)(0x11b67ae0), (ECX));
  /* 11b35f76 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b35f79 mov dword ptr [0x11b67ae4], edx */
  w32((uint32_t)(0x11b67ae4), (EDX));
  /* 11b35f7f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b35f82 mov dword ptr [0x11b67ae8], eax */
  w32((uint32_t)(0x11b67ae8), (EAX));
  /* 11b35f87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b35f8a mov dword ptr [0x11b67aec], ecx */
  w32((uint32_t)(0x11b67aec), (ECX));
L_11b35f90:;
  /* 11b35f90 mov edx, dword ptr [ebp - 0xd8] */
  EDX = (r32((uint32_t)(EBP + -0xd8)));
  /* 11b35f96 push edx */
  push32((uint32_t)(EDX));
  /* 11b35f97 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b35f9a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b35f9f push eax */
  push32((uint32_t)(EAX));
  /* 11b35fa0 mov ecx, dword ptr [ebp - 0x1a] */
  ECX = (r32((uint32_t)(EBP + -0x1a)));
  /* 11b35fa3 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b35fa9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b35faa mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b35fad and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b35fb3 push edx */
  push32((uint32_t)(EDX));
  /* 11b35fb4 mov eax, dword ptr [ebp - 0x1e] */
  EAX = (r32((uint32_t)(EBP + -0x1e)));
  /* 11b35fb7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b35fbc push eax */
  push32((uint32_t)(EAX));
  /* 11b35fbd mov ecx, dword ptr [ebp - 0x22] */
  ECX = (r32((uint32_t)(EBP + -0x22)));
  /* 11b35fc0 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b35fc6 push ecx */
  push32((uint32_t)(ECX));
  /* 11b35fc7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b35fca and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b35fd0 push edx */
  push32((uint32_t)(EDX));
  /* 11b35fd1 call 0x11b36650 */
  push32(0x11b35fd6u); f_11b36650();
  /* 11b35fd6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b35fd9 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11b35fdc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b35fe0 je 0x11b35fea */
  if (C.zf) goto L_11b35fea;
  /* 11b35fe2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b35fe5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b35fe8 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_11b35fea:;
  /* 11b35fea mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b35fed mov esp, ebp */
  ESP = (EBP);
  /* 11b35fef pop ebp */
  EBP = (pop32());
  /* 11b35ff0 ret  */
  ESPCHK(0x11b35e70u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x11b36000 (56 bytes, 28 insns) */
void f_11b36000(void) {
  FTRACE(0x11b36000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b36000 jne 0x11b36003 */
  if (!C.zf) goto L_11b36003;
  /* 11b36002 ret  */
  ESPCHK(0x11b36000u, _esp0);
  ESP += 4; return;
L_11b36003:;
  /* 11b36003 push ebp */
  push32((uint32_t)(EBP));
  /* 11b36004 mov ebp, esp */
  EBP = (ESP);
  /* 11b36006 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b36009 push eax */
  push32((uint32_t)(EAX));
  /* 11b3600a push edx */
  push32((uint32_t)(EDX));
  /* 11b3600b push ebx */
  push32((uint32_t)(EBX));
  /* 11b3600c push esi */
  push32((uint32_t)(ESI));
  /* 11b3600d push edi */
  push32((uint32_t)(EDI));
  /* 11b3600e push 0x11b62588 */
  push32((uint32_t)(0x11b62588u));
  /* 11b36013 push 0x11b62584 */
  push32((uint32_t)(0x11b62584u));
  /* 11b36018 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11b3601a push 0x11b62574 */
  push32((uint32_t)(0x11b62574u));
  /* 11b3601f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b36021 call 0x11b36850 */
  push32(0x11b36026u); f_11b36850();
  /* 11b36026 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b36029 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3602c jne 0x11b3602f */
  if (!C.zf) goto L_11b3602f;
  /* 11b3602e int3  */
  x86_unimpl("int3 @ 0x11b3602e");
L_11b3602f:;
  /* 11b3602f pop edi */
  EDI = (pop32());
  /* 11b36030 pop esi */
  ESI = (pop32());
  /* 11b36031 pop ebx */
  EBX = (pop32());
  /* 11b36032 pop edx */
  EDX = (pop32());
  /* 11b36033 pop eax */
  EAX = (pop32());
  /* 11b36034 mov esp, ebp */
  ESP = (EBP);
  /* 11b36036 pop ebp */
  EBP = (pop32());
  /* 11b36037 ret  */
  ESPCHK(0x11b36000u, _esp0);
  ESP += 4; return;
}

/* FUN_10006040 @ 0x11b36040 (33 bytes, 15 insns) */
void f_11b36040(void) {
  FTRACE(0x11b36040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b36040 push ebp */
  push32((uint32_t)(EBP));
  /* 11b36041 mov ebp, esp */
  EBP = (ESP);
  /* 11b36043 push ebx */
  push32((uint32_t)(EBX));
  /* 11b36044 push esi */
  push32((uint32_t)(ESI));
  /* 11b36045 push edi */
  push32((uint32_t)(EDI));
  /* 11b36046 call 0x11b36080 */
  push32(0x11b3604bu); f_11b36080();
  /* 11b3604b call 0x11b36f70 */
  push32(0x11b36050u); f_11b36f70();
  /* 11b36050 mov dword ptr [0x11b67af4], eax */
  w32((uint32_t)(0x11b67af4), (EAX));
  /* 11b36055 call 0x11b36ef0 */
  push32(0x11b3605au); f_11b36ef0();
  /* 11b3605a fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 11b3605c pop edi */
  EDI = (pop32());
  /* 11b3605d pop esi */
  ESI = (pop32());
  /* 11b3605e pop ebx */
  EBX = (pop32());
  /* 11b3605f pop ebp */
  EBP = (pop32());
  /* 11b36060 ret  */
  ESPCHK(0x11b36040u, _esp0);
  ESP += 4; return;
}

/* FUN_10006070 @ 0x11b36070 (5 bytes, 4 insns) */
void f_11b36070(void) {
  FTRACE(0x11b36070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b36070 push ebp */
  push32((uint32_t)(EBP));
  /* 11b36071 mov ebp, esp */
  EBP = (ESP);
  /* 11b36073 pop ebp */
  EBP = (pop32());
  /* 11b36074 ret  */
  ESPCHK(0x11b36070u, _esp0);
  ESP += 4; return;
}

/* FUN_10006080 @ 0x11b36080 (65 bytes, 10 insns) */
void f_11b36080(void) {
  FTRACE(0x11b36080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b36080 push ebp */
  push32((uint32_t)(EBP));
  /* 11b36081 mov ebp, esp */
  EBP = (ESP);
  /* 11b36083 mov dword ptr [0x11b65a74], 0x11b37660 */
  w32((uint32_t)(0x11b65a74), (0x11b37660u));
  /* 11b3608d mov dword ptr [0x11b65a78], 0x11b37070 */
  w32((uint32_t)(0x11b65a78), (0x11b37070u));
  /* 11b36097 mov dword ptr [0x11b65a7c], 0x11b37180 */
  w32((uint32_t)(0x11b65a7c), (0x11b37180u));
  /* 11b360a1 mov dword ptr [0x11b65a80], 0x11b36fc0 */
  w32((uint32_t)(0x11b65a80), (0x11b36fc0u));
  /* 11b360ab mov dword ptr [0x11b65a84], 0x11b37150 */
  w32((uint32_t)(0x11b65a84), (0x11b37150u));
  /* 11b360b5 mov dword ptr [0x11b65a88], 0x11b37660 */
  w32((uint32_t)(0x11b65a88), (0x11b37660u));
  /* 11b360bf pop ebp */
  EBP = (pop32());
  /* 11b360c0 ret  */
  ESPCHK(0x11b36080u, _esp0);
  ESP += 4; return;
}

/* FUN_100060d0 @ 0x11b360d0 (28 bytes, 11 insns) */
void f_11b360d0(void) {
  FTRACE(0x11b360d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b360d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b360d1 mov ebp, esp */
  EBP = (ESP);
  /* 11b360d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b360d4 mov eax, dword ptr [0x11b67af0] */
  EAX = (r32((uint32_t)(0x11b67af0)));
  /* 11b360d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b360dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b360df mov dword ptr [0x11b67af0], ecx */
  w32((uint32_t)(0x11b67af0), (ECX));
  /* 11b360e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b360e8 mov esp, ebp */
  ESP = (EBP);
  /* 11b360ea pop ebp */
  EBP = (pop32());
  /* 11b360eb ret  */
  ESPCHK(0x11b360d0u, _esp0);
  ESP += 4; return;
}

/* __ftol @ 0x11b360ec (39 bytes, 16 insns) */
void f_11b360ec(void) {
  FTRACE(0x11b360ecu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b360ec push ebp */
  push32((uint32_t)(EBP));
  /* 11b360ed mov ebp, esp */
  EBP = (ESP);
  /* 11b360ef add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b360f2 wait  */
  /* wait (no observable integer/reg state) */
  /* 11b360f3 fnstcw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), C.fcw);
  /* 11b360f6 wait  */
  /* wait (no observable integer/reg state) */
  /* 11b360f7 mov ax, word ptr [ebp - 2] */
  AX = (r16((uint32_t)(EBP + -0x2)));
  /* 11b360fb or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 11b360fe mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11b36102 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 11b36105 fistp qword ptr [ebp - 0xc] */
  { int64_t _q=fpu_to_i64(FPU_ST(0)); w32((uint32_t)(EBP + -0xc),(uint32_t)_q); w32((uint32_t)(EBP + -0xc)+4,(uint32_t)((uint64_t)_q>>32)); }
  (void)fpu_pop();
  /* 11b36108 fldcw word ptr [ebp - 2] */
  C.fcw = r16((uint32_t)(EBP + -0x2));
  /* 11b3610b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3610e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b36111 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b36112 ret  */
  ESPCHK(0x11b360ecu, _esp0);
  ESP += 4; return;
}

/* FUN_10006120 @ 0x11b36120 (313 bytes, 78 insns) */
void f_11b36120(void) {
  FTRACE(0x11b36120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b36120 push ebp */
  push32((uint32_t)(EBP));
  /* 11b36121 mov ebp, esp */
  EBP = (ESP);
  /* 11b36123 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36127 jne 0x11b361e7 */
  if (!C.zf) goto L_11b361e7;
  /* 11b3612d call dword ptr [0x11b6a3b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3b0))), 0x11b36133u);
  /* 11b36133 mov dword ptr [0x11b67b14], eax */
  w32((uint32_t)(0x11b67b14), (EAX));
  /* 11b36138 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b3613a call 0x11b3a4d0 */
  push32(0x11b3613fu); f_11b3a4d0();
  /* 11b3613f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b36142 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b36144 jne 0x11b3614d */
  if (!C.zf) goto L_11b3614d;
  /* 11b36146 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b36148 jmp 0x11b36255 */
  goto L_11b36255;
L_11b3614d:;
  /* 11b3614d mov eax, dword ptr [0x11b67b14] */
  EAX = (r32((uint32_t)(0x11b67b14)));
  /* 11b36152 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11b36155 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3615a mov dword ptr [0x11b67b20], eax */
  w32((uint32_t)(0x11b67b20), (EAX));
  /* 11b3615f mov ecx, dword ptr [0x11b67b14] */
  ECX = (r32((uint32_t)(0x11b67b14)));
  /* 11b36165 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b3616b mov dword ptr [0x11b67b1c], ecx */
  w32((uint32_t)(0x11b67b1c), (ECX));
  /* 11b36171 mov edx, dword ptr [0x11b67b1c] */
  EDX = (r32((uint32_t)(0x11b67b1c)));
  /* 11b36177 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11b3617a add edx, dword ptr [0x11b67b20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11b67b20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b36180 mov dword ptr [0x11b67b18], edx */
  w32((uint32_t)(0x11b67b18), (EDX));
  /* 11b36186 mov eax, dword ptr [0x11b67b14] */
  EAX = (r32((uint32_t)(0x11b67b14)));
  /* 11b3618b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11b3618e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b36193 mov dword ptr [0x11b67b14], eax */
  w32((uint32_t)(0x11b67b14), (EAX));
  /* 11b36198 call 0x11b363a0 */
  push32(0x11b3619du); f_11b363a0();
  /* 11b3619d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3619f jne 0x11b361ad */
  if (!C.zf) goto L_11b361ad;
  /* 11b361a1 call 0x11b3a520 */
  push32(0x11b361a6u); f_11b3a520();
  /* 11b361a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b361a8 jmp 0x11b36255 */
  goto L_11b36255;
L_11b361ad:;
  /* 11b361ad call dword ptr [0x11b6a3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3ac))), 0x11b361b3u);
  /* 11b361b3 mov dword ptr [0x11b69648], eax */
  w32((uint32_t)(0x11b69648), (EAX));
  /* 11b361b8 call 0x11b3a2b0 */
  push32(0x11b361bdu); f_11b3a2b0();
  /* 11b361bd mov dword ptr [0x11b67afc], eax */
  w32((uint32_t)(0x11b67afc), (EAX));
  /* 11b361c2 call 0x11b378f0 */
  push32(0x11b361c7u); f_11b378f0();
  /* 11b361c7 call 0x11b39da0 */
  push32(0x11b361ccu); f_11b39da0();
  /* 11b361cc call 0x11b39c50 */
  push32(0x11b361d1u); f_11b39c50();
  /* 11b361d1 call 0x11b376f0 */
  push32(0x11b361d6u); f_11b376f0();
  /* 11b361d6 mov ecx, dword ptr [0x11b67af8] */
  ECX = (r32((uint32_t)(0x11b67af8)));
  /* 11b361dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b361df mov dword ptr [0x11b67af8], ecx */
  w32((uint32_t)(0x11b67af8), (ECX));
  /* 11b361e5 jmp 0x11b36250 */
  goto L_11b36250;
L_11b361e7:;
  /* 11b361e7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b361eb jne 0x11b36240 */
  if (!C.zf) goto L_11b36240;
  /* 11b361ed cmp dword ptr [0x11b67af8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67af8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b361f4 jle 0x11b3623a */
  if ((C.zf||C.sf!=C.of)) goto L_11b3623a;
  /* 11b361f6 mov edx, dword ptr [0x11b67af8] */
  EDX = (r32((uint32_t)(0x11b67af8)));
  /* 11b361fc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b361ff mov dword ptr [0x11b67af8], edx */
  w32((uint32_t)(0x11b67af8), (EDX));
  /* 11b36205 cmp dword ptr [0x11b67b4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67b4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3620c jne 0x11b36213 */
  if (!C.zf) goto L_11b36213;
  /* 11b3620e call 0x11b37770 */
  push32(0x11b36213u); f_11b37770();
L_11b36213:;
  /* 11b36213 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b36215 call 0x11b391f0 */
  push32(0x11b3621au); f_11b391f0();
  /* 11b3621a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3621d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11b36220 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b36222 je 0x11b36229 */
  if (C.zf) goto L_11b36229;
  /* 11b36224 call 0x11b39b00 */
  push32(0x11b36229u); f_11b39b00();
L_11b36229:;
  /* 11b36229 call 0x11b37c20 */
  push32(0x11b3622eu); f_11b37c20();
  /* 11b3622e call 0x11b36430 */
  push32(0x11b36233u); f_11b36430();
  /* 11b36233 call 0x11b3a520 */
  push32(0x11b36238u); f_11b3a520();
  /* 11b36238 jmp 0x11b3623e */
  goto L_11b3623e;
L_11b3623a:;
  /* 11b3623a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3623c jmp 0x11b36255 */
  goto L_11b36255;
L_11b3623e:;
  /* 11b3623e jmp 0x11b36250 */
  goto L_11b36250;
L_11b36240:;
  /* 11b36240 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36244 jne 0x11b36250 */
  if (!C.zf) goto L_11b36250;
  /* 11b36246 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b36248 call 0x11b36520 */
  push32(0x11b3624du); f_11b36520();
  /* 11b3624d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b36250:;
  /* 11b36250 mov eax, 1 */
  EAX = (0x1u);
L_11b36255:;
  /* 11b36255 pop ebp */
  EBP = (pop32());
  /* 11b36256 ret 0xc */
  ESPCHK(0x11b36120u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11b36260 (243 bytes, 86 insns) */
void f_11b36260(void) {
  FTRACE(0x11b36260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b36260 push ebp */
  push32((uint32_t)(EBP));
  /* 11b36261 mov ebp, esp */
  EBP = (ESP);
  /* 11b36263 push ecx */
  push32((uint32_t)(ECX));
  /* 11b36264 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11b3626b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3626f jne 0x11b36281 */
  if (!C.zf) goto L_11b36281;
  /* 11b36271 cmp dword ptr [0x11b67af8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67af8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36278 jne 0x11b36281 */
  if (!C.zf) goto L_11b36281;
  /* 11b3627a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3627c jmp 0x11b3634d */
  goto L_11b3634d;
L_11b36281:;
  /* 11b36281 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36285 je 0x11b3628d */
  if (C.zf) goto L_11b3628d;
  /* 11b36287 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3628b jne 0x11b362cf */
  if (!C.zf) goto L_11b362cf;
L_11b3628d:;
  /* 11b3628d cmp dword ptr [0x11b69658], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b69658))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36294 je 0x11b362ab */
  if (C.zf) goto L_11b362ab;
  /* 11b36296 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b36299 push eax */
  push32((uint32_t)(EAX));
  /* 11b3629a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3629d push ecx */
  push32((uint32_t)(ECX));
  /* 11b3629e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b362a1 push edx */
  push32((uint32_t)(EDX));
  /* 11b362a2 call dword ptr [0x11b69658] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b69658))), 0x11b362a8u);
  /* 11b362a8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b362ab:;
  /* 11b362ab cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b362af je 0x11b362c5 */
  if (C.zf) goto L_11b362c5;
  /* 11b362b1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b362b4 push eax */
  push32((uint32_t)(EAX));
  /* 11b362b5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b362b8 push ecx */
  push32((uint32_t)(ECX));
  /* 11b362b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b362bc push edx */
  push32((uint32_t)(EDX));
  /* 11b362bd call 0x11b36120 */
  push32(0x11b362c2u); f_11b36120();
  /* 11b362c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b362c5:;
  /* 11b362c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b362c9 jne 0x11b362cf */
  if (!C.zf) goto L_11b362cf;
  /* 11b362cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b362cd jmp 0x11b3634d */
  goto L_11b3634d;
L_11b362cf:;
  /* 11b362cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b362d2 push eax */
  push32((uint32_t)(EAX));
  /* 11b362d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b362d6 push ecx */
  push32((uint32_t)(ECX));
  /* 11b362d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b362da push edx */
  push32((uint32_t)(EDX));
  /* 11b362db call 0x11b3100a */
  push32(0x11b362e0u); f_11b3100a();
  /* 11b362e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b362e3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b362e7 jne 0x11b362fe */
  if (!C.zf) goto L_11b362fe;
  /* 11b362e9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b362ed jne 0x11b362fe */
  if (!C.zf) goto L_11b362fe;
  /* 11b362ef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b362f2 push eax */
  push32((uint32_t)(EAX));
  /* 11b362f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b362f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b362f8 push ecx */
  push32((uint32_t)(ECX));
  /* 11b362f9 call 0x11b36120 */
  push32(0x11b362feu); f_11b36120();
L_11b362fe:;
  /* 11b362fe cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36302 je 0x11b3630a */
  if (C.zf) goto L_11b3630a;
  /* 11b36304 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36308 jne 0x11b3634a */
  if (!C.zf) goto L_11b3634a;
L_11b3630a:;
  /* 11b3630a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3630d push edx */
  push32((uint32_t)(EDX));
  /* 11b3630e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b36311 push eax */
  push32((uint32_t)(EAX));
  /* 11b36312 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b36315 push ecx */
  push32((uint32_t)(ECX));
  /* 11b36316 call 0x11b36120 */
  push32(0x11b3631bu); f_11b36120();
  /* 11b3631b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3631d jne 0x11b36326 */
  if (!C.zf) goto L_11b36326;
  /* 11b3631f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11b36326:;
  /* 11b36326 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3632a je 0x11b3634a */
  if (C.zf) goto L_11b3634a;
  /* 11b3632c cmp dword ptr [0x11b69658], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b69658))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36333 je 0x11b3634a */
  if (C.zf) goto L_11b3634a;
  /* 11b36335 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b36338 push edx */
  push32((uint32_t)(EDX));
  /* 11b36339 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3633c push eax */
  push32((uint32_t)(EAX));
  /* 11b3633d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b36340 push ecx */
  push32((uint32_t)(ECX));
  /* 11b36341 call dword ptr [0x11b69658] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b69658))), 0x11b36347u);
  /* 11b36347 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b3634a:;
  /* 11b3634a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11b3634d:;
  /* 11b3634d mov esp, ebp */
  ESP = (EBP);
  /* 11b3634f pop ebp */
  EBP = (pop32());
  /* 11b36350 ret 0xc */
  ESPCHK(0x11b36260u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11b36360 (58 bytes, 18 insns) */
void f_11b36360(void) {
  FTRACE(0x11b36360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b36360 push ebp */
  push32((uint32_t)(EBP));
  /* 11b36361 mov ebp, esp */
  EBP = (ESP);
  /* 11b36363 cmp dword ptr [0x11b67b04], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b67b04))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3636a je 0x11b3637e */
  if (C.zf) goto L_11b3637e;
  /* 11b3636c cmp dword ptr [0x11b67b04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67b04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36373 jne 0x11b36383 */
  if (!C.zf) goto L_11b36383;
  /* 11b36375 cmp dword ptr [0x11b67b08], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b67b08))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3637c jne 0x11b36383 */
  if (!C.zf) goto L_11b36383;
L_11b3637e:;
  /* 11b3637e call 0x11b3a5c0 */
  push32(0x11b36383u); f_11b3a5c0();
L_11b36383:;
  /* 11b36383 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b36386 push eax */
  push32((uint32_t)(EAX));
  /* 11b36387 call 0x11b3a610 */
  push32(0x11b3638cu); f_11b3a610();
  /* 11b3638c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3638f push 0xff */
  push32((uint32_t)(0xffu));
  /* 11b36394 call dword ptr [0x11b65a44] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b65a44))), 0x11b3639au);
  /* 11b3639a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3639d pop ebp */
  EBP = (pop32());
  /* 11b3639e ret  */
  ESPCHK(0x11b36360u, _esp0);
  ESP += 4; return;
}

/* FUN_100063a0 @ 0x11b363a0 (130 bytes, 42 insns) */
void f_11b363a0(void) {
  FTRACE(0x11b363a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b363a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b363a1 mov ebp, esp */
  EBP = (ESP);
  /* 11b363a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b363a4 call 0x11b3a820 */
  push32(0x11b363a9u); f_11b3a820();
  /* 11b363a9 call dword ptr [0x11b6a3bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3bc))), 0x11b363afu);
  /* 11b363af mov dword ptr [0x11b65a48], eax */
  w32((uint32_t)(0x11b65a48), (EAX));
  /* 11b363b4 cmp dword ptr [0x11b65a48], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11b65a48))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b363bb jne 0x11b363c1 */
  if (!C.zf) goto L_11b363c1;
  /* 11b363bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b363bf jmp 0x11b3641e */
  goto L_11b3641e;
L_11b363c1:;
  /* 11b363c1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11b363c3 push 0x11b62664 */
  push32((uint32_t)(0x11b62664u));
  /* 11b363c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b363ca push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11b363cc push 1 */
  push32((uint32_t)(0x1u));
  /* 11b363ce call 0x11b380f0 */
  push32(0x11b363d3u); f_11b380f0();
  /* 11b363d3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b363d6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b363d9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b363dd je 0x11b363f4 */
  if (C.zf) goto L_11b363f4;
  /* 11b363df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b363e2 push eax */
  push32((uint32_t)(EAX));
  /* 11b363e3 mov ecx, dword ptr [0x11b65a48] */
  ECX = (r32((uint32_t)(0x11b65a48)));
  /* 11b363e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b363ea call dword ptr [0x11b6a3b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3b8))), 0x11b363f0u);
  /* 11b363f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b363f2 jne 0x11b363f8 */
  if (!C.zf) goto L_11b363f8;
L_11b363f4:;
  /* 11b363f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b363f6 jmp 0x11b3641e */
  goto L_11b3641e;
L_11b363f8:;
  /* 11b363f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b363fb push edx */
  push32((uint32_t)(EDX));
  /* 11b363fc call 0x11b36460 */
  push32(0x11b36401u); f_11b36460();
  /* 11b36401 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b36404 call dword ptr [0x11b6a3b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3b4))), 0x11b3640au);
  /* 11b3640a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3640d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11b3640f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b36412 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11b36419 mov eax, 1 */
  EAX = (0x1u);
L_11b3641e:;
  /* 11b3641e mov esp, ebp */
  ESP = (EBP);
  /* 11b36420 pop ebp */
  EBP = (pop32());
  /* 11b36421 ret  */
  ESPCHK(0x11b363a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006430 @ 0x11b36430 (41 bytes, 11 insns) */
void f_11b36430(void) {
  FTRACE(0x11b36430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b36430 push ebp */
  push32((uint32_t)(EBP));
  /* 11b36431 mov ebp, esp */
  EBP = (ESP);
  /* 11b36433 call 0x11b3a860 */
  push32(0x11b36438u); f_11b3a860();
  /* 11b36438 cmp dword ptr [0x11b65a48], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11b65a48))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3643f je 0x11b36457 */
  if (C.zf) goto L_11b36457;
  /* 11b36441 mov eax, dword ptr [0x11b65a48] */
  EAX = (r32((uint32_t)(0x11b65a48)));
  /* 11b36446 push eax */
  push32((uint32_t)(EAX));
  /* 11b36447 call dword ptr [0x11b6a3c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3c0))), 0x11b3644du);
  /* 11b3644d mov dword ptr [0x11b65a48], 0xffffffff */
  w32((uint32_t)(0x11b65a48), (0xffffffffu));
L_11b36457:;
  /* 11b36457 pop ebp */
  EBP = (pop32());
  /* 11b36458 ret  */
  ESPCHK(0x11b36430u, _esp0);
  ESP += 4; return;
}

/* FUN_10006460 @ 0x11b36460 (25 bytes, 8 insns) */
void f_11b36460(void) {
  FTRACE(0x11b36460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b36460 push ebp */
  push32((uint32_t)(EBP));
  /* 11b36461 mov ebp, esp */
  EBP = (ESP);
  /* 11b36463 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b36466 mov dword ptr [eax + 0x50], 0x11b65c30 */
  w32((uint32_t)(EAX + 0x50), (0x11b65c30u));
  /* 11b3646d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b36470 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 11b36477 pop ebp */
  EBP = (pop32());
  /* 11b36478 ret  */
  ESPCHK(0x11b36460u, _esp0);
  ESP += 4; return;
}

/* FUN_10006480 @ 0x11b36480 (152 bytes, 48 insns) */
void f_11b36480(void) {
  FTRACE(0x11b36480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b36480 push ebp */
  push32((uint32_t)(EBP));
  /* 11b36481 mov ebp, esp */
  EBP = (ESP);
  /* 11b36483 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b36486 call dword ptr [0x11b6a3cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3cc))), 0x11b3648cu);
  /* 11b3648c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b3648f mov eax, dword ptr [0x11b65a48] */
  EAX = (r32((uint32_t)(0x11b65a48)));
  /* 11b36494 push eax */
  push32((uint32_t)(EAX));
  /* 11b36495 call dword ptr [0x11b6a3c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3c8))), 0x11b3649bu);
  /* 11b3649b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b3649e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b364a2 jne 0x11b36507 */
  if (!C.zf) goto L_11b36507;
  /* 11b364a4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 11b364a9 push 0x11b62664 */
  push32((uint32_t)(0x11b62664u));
  /* 11b364ae push 2 */
  push32((uint32_t)(0x2u));
  /* 11b364b0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11b364b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b364b4 call 0x11b380f0 */
  push32(0x11b364b9u); f_11b380f0();
  /* 11b364b9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b364bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b364bf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b364c3 je 0x11b364fd */
  if (C.zf) goto L_11b364fd;
  /* 11b364c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b364c8 push ecx */
  push32((uint32_t)(ECX));
  /* 11b364c9 mov edx, dword ptr [0x11b65a48] */
  EDX = (r32((uint32_t)(0x11b65a48)));
  /* 11b364cf push edx */
  push32((uint32_t)(EDX));
  /* 11b364d0 call dword ptr [0x11b6a3b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3b8))), 0x11b364d6u);
  /* 11b364d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b364d8 je 0x11b364fd */
  if (C.zf) goto L_11b364fd;
  /* 11b364da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b364dd push eax */
  push32((uint32_t)(EAX));
  /* 11b364de call 0x11b36460 */
  push32(0x11b364e3u); f_11b36460();
  /* 11b364e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b364e6 call dword ptr [0x11b6a3b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3b4))), 0x11b364ecu);
  /* 11b364ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b364ef mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11b364f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b364f4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11b364fb jmp 0x11b36507 */
  goto L_11b36507;
L_11b364fd:;
  /* 11b364fd push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11b364ff call 0x11b36360 */
  push32(0x11b36504u); f_11b36360();
  /* 11b36504 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b36507:;
  /* 11b36507 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3650a push eax */
  push32((uint32_t)(EAX));
  /* 11b3650b call dword ptr [0x11b6a3c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3c4))), 0x11b36511u);
  /* 11b36511 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b36514 mov esp, ebp */
  ESP = (EBP);
  /* 11b36516 pop ebp */
  EBP = (pop32());
  /* 11b36517 ret  */
  ESPCHK(0x11b36480u, _esp0);
  ESP += 4; return;
}

/* FUN_10006520 @ 0x11b36520 (263 bytes, 86 insns) */
void f_11b36520(void) {
  FTRACE(0x11b36520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b36520 push ebp */
  push32((uint32_t)(EBP));
  /* 11b36521 mov ebp, esp */
  EBP = (ESP);
  /* 11b36523 cmp dword ptr [0x11b65a48], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11b65a48))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3652a je 0x11b36625 */
  if (C.zf) goto L_11b36625;
  /* 11b36530 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36534 jne 0x11b36545 */
  if (!C.zf) goto L_11b36545;
  /* 11b36536 mov eax, dword ptr [0x11b65a48] */
  EAX = (r32((uint32_t)(0x11b65a48)));
  /* 11b3653b push eax */
  push32((uint32_t)(EAX));
  /* 11b3653c call dword ptr [0x11b6a3c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3c8))), 0x11b36542u);
  /* 11b36542 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11b36545:;
  /* 11b36545 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36549 je 0x11b36616 */
  if (C.zf) goto L_11b36616;
  /* 11b3654f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b36552 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36556 je 0x11b36569 */
  if (C.zf) goto L_11b36569;
  /* 11b36558 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b3655a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3655d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 11b36560 push eax */
  push32((uint32_t)(EAX));
  /* 11b36561 call 0x11b38770 */
  push32(0x11b36566u); f_11b38770();
  /* 11b36566 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b36569:;
  /* 11b36569 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3656c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36570 je 0x11b36583 */
  if (C.zf) goto L_11b36583;
  /* 11b36572 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b36574 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b36577 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11b3657a push eax */
  push32((uint32_t)(EAX));
  /* 11b3657b call 0x11b38770 */
  push32(0x11b36580u); f_11b38770();
  /* 11b36580 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b36583:;
  /* 11b36583 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b36586 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3658a je 0x11b3659d */
  if (C.zf) goto L_11b3659d;
  /* 11b3658c push 2 */
  push32((uint32_t)(0x2u));
  /* 11b3658e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b36591 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 11b36594 push eax */
  push32((uint32_t)(EAX));
  /* 11b36595 call 0x11b38770 */
  push32(0x11b3659au); f_11b38770();
  /* 11b3659a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b3659d:;
  /* 11b3659d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b365a0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b365a4 je 0x11b365b7 */
  if (C.zf) goto L_11b365b7;
  /* 11b365a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b365a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b365ab mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 11b365ae push eax */
  push32((uint32_t)(EAX));
  /* 11b365af call 0x11b38770 */
  push32(0x11b365b4u); f_11b38770();
  /* 11b365b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b365b7:;
  /* 11b365b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b365ba cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b365be je 0x11b365d1 */
  if (C.zf) goto L_11b365d1;
  /* 11b365c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b365c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b365c5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11b365c8 push eax */
  push32((uint32_t)(EAX));
  /* 11b365c9 call 0x11b38770 */
  push32(0x11b365ceu); f_11b38770();
  /* 11b365ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b365d1:;
  /* 11b365d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b365d4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b365d8 je 0x11b365eb */
  if (C.zf) goto L_11b365eb;
  /* 11b365da push 2 */
  push32((uint32_t)(0x2u));
  /* 11b365dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b365df mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 11b365e2 push eax */
  push32((uint32_t)(EAX));
  /* 11b365e3 call 0x11b38770 */
  push32(0x11b365e8u); f_11b38770();
  /* 11b365e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b365eb:;
  /* 11b365eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b365ee cmp dword ptr [ecx + 0x50], 0x11b65c30 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x11b65c30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b365f5 je 0x11b36608 */
  if (C.zf) goto L_11b36608;
  /* 11b365f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b365f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b365fc mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11b365ff push eax */
  push32((uint32_t)(EAX));
  /* 11b36600 call 0x11b38770 */
  push32(0x11b36605u); f_11b38770();
  /* 11b36605 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b36608:;
  /* 11b36608 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b3660a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3660d push ecx */
  push32((uint32_t)(ECX));
  /* 11b3660e call 0x11b38770 */
  push32(0x11b36613u); f_11b38770();
  /* 11b36613 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b36616:;
  /* 11b36616 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b36618 mov edx, dword ptr [0x11b65a48] */
  EDX = (r32((uint32_t)(0x11b65a48)));
  /* 11b3661e push edx */
  push32((uint32_t)(EDX));
  /* 11b3661f call dword ptr [0x11b6a3b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3b8))), 0x11b36625u);
L_11b36625:;
  /* 11b36625 pop ebp */
  EBP = (pop32());
  /* 11b36626 ret  */
  ESPCHK(0x11b36520u, _esp0);
  ESP += 4; return;
}

/* FUN_10006630 @ 0x11b36630 (11 bytes, 5 insns) */
void f_11b36630(void) {
  FTRACE(0x11b36630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b36630 push ebp */
  push32((uint32_t)(EBP));
  /* 11b36631 mov ebp, esp */
  EBP = (ESP);
  /* 11b36633 call dword ptr [0x11b6a3b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3b4))), 0x11b36639u);
  /* 11b36639 pop ebp */
  EBP = (pop32());
  /* 11b3663a ret  */
  ESPCHK(0x11b36630u, _esp0);
  ESP += 4; return;
}

/* FUN_10006640 @ 0x11b36640 (11 bytes, 5 insns) */
void f_11b36640(void) {
  FTRACE(0x11b36640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b36640 push ebp */
  push32((uint32_t)(EBP));
  /* 11b36641 mov ebp, esp */
  EBP = (ESP);
  /* 11b36643 call dword ptr [0x11b6a3d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3d0))), 0x11b36649u);
  /* 11b36649 pop ebp */
  EBP = (pop32());
  /* 11b3664a ret  */
  ESPCHK(0x11b36640u, _esp0);
  ESP += 4; return;
}

/* FUN_10006650 @ 0x11b36650 (238 bytes, 75 insns) */
void f_11b36650(void) {
  FTRACE(0x11b36650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b36650 push ebp */
  push32((uint32_t)(EBP));
  /* 11b36651 mov ebp, esp */
  EBP = (ESP);
  /* 11b36653 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b36656 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b36659 sub eax, 0x76c */
  { uint32_t _a=(EAX),_b=(0x76cu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3665e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11b36661 cmp dword ptr [ebp + 8], 0x46 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36665 jl 0x11b36670 */
  if ((C.sf!=C.of)) goto L_11b36670;
  /* 11b36667 cmp dword ptr [ebp + 8], 0x8a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3666e jle 0x11b36678 */
  if ((C.zf||C.sf!=C.of)) goto L_11b36678;
L_11b36670:;
  /* 11b36670 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b36673 jmp 0x11b3673a */
  goto L_11b3673a;
L_11b36678:;
  /* 11b36678 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3667b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3667e add edx, dword ptr [ecx*4 + 0x11b65d9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*4 + 0x11b65d9c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b36685 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 11b36688 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3668b and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11b3668e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b36690 jne 0x11b366a1 */
  if (!C.zf) goto L_11b366a1;
  /* 11b36692 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36696 jle 0x11b366a1 */
  if ((C.zf||C.sf!=C.of)) goto L_11b366a1;
  /* 11b36698 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b3669b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3669e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11b366a1:;
  /* 11b366a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b366a4 sub edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b366a7 imul edx, edx, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x16du); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b366ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b366b0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b366b3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11b366b6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b366b9 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b366bb lea edx, [eax + ecx - 0x11] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x11));
  /* 11b366bf imul edx, edx, 0x18 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x18u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b366c2 add edx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b366c5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b366c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b366cb imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b366ce add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b366d1 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b366d4 add eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b366d7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b366da call 0x11b3ac00 */
  push32(0x11b366dfu); f_11b3ac00();
  /* 11b366df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b366e2 add ecx, dword ptr [0x11b65cb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11b65cb8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b366e8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b366eb mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b366ee mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11b366f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b366f4 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11b366f7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b366fa sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b366fd mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11b36700 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b36703 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11b36706 cmp dword ptr [ebp + 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3670a je 0x11b3672b */
  if (C.zf) goto L_11b3672b;
  /* 11b3670c cmp dword ptr [ebp + 0x20], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36710 jne 0x11b36737 */
  if (!C.zf) goto L_11b36737;
  /* 11b36712 cmp dword ptr [0x11b65cbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b65cbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36719 je 0x11b36737 */
  if (C.zf) goto L_11b36737;
  /* 11b3671b lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11b3671e push eax */
  push32((uint32_t)(EAX));
  /* 11b3671f call 0x11b3b010 */
  push32(0x11b36724u); f_11b3b010();
  /* 11b36724 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b36727 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b36729 je 0x11b36737 */
  if (C.zf) goto L_11b36737;
L_11b3672b:;
  /* 11b3672b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3672e add ecx, dword ptr [0x11b65cc0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11b65cc0))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b36734 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b36737:;
  /* 11b36737 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11b3673a:;
  /* 11b3673a mov esp, ebp */
  ESP = (EBP);
  /* 11b3673c pop ebp */
  EBP = (pop32());
  /* 11b3673d ret  */
  ESPCHK(0x11b36650u, _esp0);
  ESP += 4; return;
}

/* FUN_10006740 @ 0x11b36740 (11 bytes, 5 insns) */
void f_11b36740(void) {
  FTRACE(0x11b36740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b36740 push ebp */
  push32((uint32_t)(EBP));
  /* 11b36741 mov ebp, esp */
  EBP = (ESP);
  /* 11b36743 call dword ptr [0x11b6a2e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a2e0))), 0x11b36749u);
  /* 11b36749 pop ebp */
  EBP = (pop32());
  /* 11b3674a ret  */
  ESPCHK(0x11b36740u, _esp0);
  ESP += 4; return;
}

/* FUN_10006750 @ 0x11b36750 (87 bytes, 30 insns) */
void f_11b36750(void) {
  FTRACE(0x11b36750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b36750 push ebp */
  push32((uint32_t)(EBP));
  /* 11b36751 mov ebp, esp */
  EBP = (ESP);
  /* 11b36753 push ecx */
  push32((uint32_t)(ECX));
  /* 11b36754 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36758 jl 0x11b36760 */
  if ((C.sf!=C.of)) goto L_11b36760;
  /* 11b3675a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3675e jl 0x11b36765 */
  if ((C.sf!=C.of)) goto L_11b36765;
L_11b36760:;
  /* 11b36760 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b36763 jmp 0x11b367a3 */
  goto L_11b367a3;
L_11b36765:;
  /* 11b36765 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36769 jne 0x11b36777 */
  if (!C.zf) goto L_11b36777;
  /* 11b3676b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3676e mov eax, dword ptr [eax*4 + 0x11b65a50] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11b65a50)));
  /* 11b36775 jmp 0x11b367a3 */
  goto L_11b367a3;
L_11b36777:;
  /* 11b36777 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3677a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 11b3677d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3677f je 0x11b36786 */
  if (C.zf) goto L_11b36786;
  /* 11b36781 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b36784 jmp 0x11b367a3 */
  goto L_11b367a3;
L_11b36786:;
  /* 11b36786 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b36789 mov eax, dword ptr [edx*4 + 0x11b65a50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11b65a50)));
  /* 11b36790 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b36793 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b36796 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b36799 mov dword ptr [ecx*4 + 0x11b65a50], edx */
  w32((uint32_t)(ECX*4 + 0x11b65a50), (EDX));
  /* 11b367a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11b367a3:;
  /* 11b367a3 mov esp, ebp */
  ESP = (EBP);
  /* 11b367a5 pop ebp */
  EBP = (pop32());
  /* 11b367a6 ret  */
  ESPCHK(0x11b36750u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x11b367b0 (126 bytes, 38 insns) */
void f_11b367b0(void) {
  FTRACE(0x11b367b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b367b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b367b1 mov ebp, esp */
  EBP = (ESP);
  /* 11b367b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b367b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b367b8 jl 0x11b367c0 */
  if ((C.sf!=C.of)) goto L_11b367c0;
  /* 11b367ba cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b367be jl 0x11b367c7 */
  if ((C.sf!=C.of)) goto L_11b367c7;
L_11b367c0:;
  /* 11b367c0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 11b367c5 jmp 0x11b3682a */
  goto L_11b3682a;
L_11b367c7:;
  /* 11b367c7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b367cb jne 0x11b367d9 */
  if (!C.zf) goto L_11b367d9;
  /* 11b367cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b367d0 mov eax, dword ptr [eax*4 + 0x11b65a5c] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11b65a5c)));
  /* 11b367d7 jmp 0x11b3682a */
  goto L_11b3682a;
L_11b367d9:;
  /* 11b367d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b367dc mov edx, dword ptr [ecx*4 + 0x11b65a5c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11b65a5c)));
  /* 11b367e3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b367e6 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b367ea jne 0x11b36800 */
  if (!C.zf) goto L_11b36800;
  /* 11b367ec push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11b367ee call dword ptr [0x11b6a2e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a2e4))), 0x11b367f4u);
  /* 11b367f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b367f7 mov dword ptr [ecx*4 + 0x11b65a5c], eax */
  w32((uint32_t)(ECX*4 + 0x11b65a5c), (EAX));
  /* 11b367fe jmp 0x11b36827 */
  goto L_11b36827;
L_11b36800:;
  /* 11b36800 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36804 jne 0x11b3681a */
  if (!C.zf) goto L_11b3681a;
  /* 11b36806 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11b36808 call dword ptr [0x11b6a2e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a2e4))), 0x11b3680eu);
  /* 11b3680e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b36811 mov dword ptr [edx*4 + 0x11b65a5c], eax */
  w32((uint32_t)(EDX*4 + 0x11b65a5c), (EAX));
  /* 11b36818 jmp 0x11b36827 */
  goto L_11b36827;
L_11b3681a:;
  /* 11b3681a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3681d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b36820 mov dword ptr [eax*4 + 0x11b65a5c], ecx */
  w32((uint32_t)(EAX*4 + 0x11b65a5c), (ECX));
L_11b36827:;
  /* 11b36827 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11b3682a:;
  /* 11b3682a mov esp, ebp */
  ESP = (EBP);
  /* 11b3682c pop ebp */
  EBP = (pop32());
  /* 11b3682d ret  */
  ESPCHK(0x11b367b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006830 @ 0x11b36830 (28 bytes, 11 insns) */
void f_11b36830(void) {
  FTRACE(0x11b36830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b36830 push ebp */
  push32((uint32_t)(EBP));
  /* 11b36831 mov ebp, esp */
  EBP = (ESP);
  /* 11b36833 push ecx */
  push32((uint32_t)(ECX));
  /* 11b36834 mov eax, dword ptr [0x11b6963c] */
  EAX = (r32((uint32_t)(0x11b6963c)));
  /* 11b36839 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b3683c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3683f mov dword ptr [0x11b6963c], ecx */
  w32((uint32_t)(0x11b6963c), (ECX));
  /* 11b36845 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b36848 mov esp, ebp */
  ESP = (EBP);
  /* 11b3684a pop ebp */
  EBP = (pop32());
  /* 11b3684b ret  */
  ESPCHK(0x11b36830u, _esp0);
  ESP += 4; return;
}

/* FUN_10006850 @ 0x11b36850 (912 bytes, 248 insns) */
void f_11b36850(void) {
  FTRACE(0x11b36850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b36850 push ebp */
  push32((uint32_t)(EBP));
  /* 11b36851 mov ebp, esp */
  EBP = (ESP);
  /* 11b36853 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 11b36858 call 0x11b3bba0 */
  push32(0x11b3685du); f_11b3bba0();
  /* 11b3685d push edi */
  push32((uint32_t)(EDI));
  /* 11b3685e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 11b36865 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11b3686a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3686c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 11b36872 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b36874 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11b36876 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11b36877 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 11b3687e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11b36883 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b36885 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 11b3688b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b3688d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11b3688f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11b36890 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 11b36897 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11b3689c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3689e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 11b368a4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b368a6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11b368a8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11b368a9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 11b368ac mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 11b368b2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b368b6 jl 0x11b368be */
  if ((C.sf!=C.of)) goto L_11b368be;
  /* 11b368b8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b368bc jl 0x11b368c6 */
  if ((C.sf!=C.of)) goto L_11b368c6;
L_11b368be:;
  /* 11b368be or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b368c1 jmp 0x11b36bdb */
  goto L_11b36bdb;
L_11b368c6:;
  /* 11b368c6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b368ca jne 0x11b36970 */
  if (!C.zf) goto L_11b36970;
  /* 11b368d0 push 0x11b65a4c */
  push32((uint32_t)(0x11b65a4cu));
  /* 11b368d5 call dword ptr [0x11b6a3d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3d4))), 0x11b368dbu);
  /* 11b368db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b368dd jle 0x11b36970 */
  if ((C.zf||C.sf!=C.of)) goto L_11b36970;
  /* 11b368e3 cmp dword ptr [0x11b67b0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67b0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b368ea jne 0x11b3692e */
  if (!C.zf) goto L_11b3692e;
  /* 11b368ec push 0x11b6273c */
  push32((uint32_t)(0x11b6273cu));
  /* 11b368f1 call dword ptr [0x11b6a3ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3ec))), 0x11b368f7u);
  /* 11b368f7 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 11b368fd cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36904 je 0x11b36926 */
  if (C.zf) goto L_11b36926;
  /* 11b36906 push 0x11b62730 */
  push32((uint32_t)(0x11b62730u));
  /* 11b3690b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 11b36911 push ecx */
  push32((uint32_t)(ECX));
  /* 11b36912 call dword ptr [0x11b6a3e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3e8))), 0x11b36918u);
  /* 11b36918 mov dword ptr [0x11b67b0c], eax */
  w32((uint32_t)(0x11b67b0c), (EAX));
  /* 11b3691d cmp dword ptr [0x11b67b0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67b0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36924 jne 0x11b3692e */
  if (!C.zf) goto L_11b3692e;
L_11b36926:;
  /* 11b36926 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b36929 jmp 0x11b36bdb */
  goto L_11b36bdb;
L_11b3692e:;
  /* 11b3692e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b36931 push edx */
  push32((uint32_t)(EDX));
  /* 11b36932 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b36935 push eax */
  push32((uint32_t)(EAX));
  /* 11b36936 push 0x11b626fc */
  push32((uint32_t)(0x11b626fcu));
  /* 11b3693b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11b36941 push ecx */
  push32((uint32_t)(ECX));
  /* 11b36942 call dword ptr [0x11b67b0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b67b0c))), 0x11b36948u);
  /* 11b36948 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3694b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11b36951 push edx */
  push32((uint32_t)(EDX));
  /* 11b36952 call dword ptr [0x11b6a3e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3e4))), 0x11b36958u);
  /* 11b36958 push 0x11b65a4c */
  push32((uint32_t)(0x11b65a4cu));
  /* 11b3695d call dword ptr [0x11b6a3e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3e0))), 0x11b36963u);
  /* 11b36963 call 0x11b36740 */
  push32(0x11b36968u); f_11b36740();
  /* 11b36968 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3696b jmp 0x11b36bdb */
  goto L_11b36bdb;
L_11b36970:;
  /* 11b36970 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36974 je 0x11b369ad */
  if (C.zf) goto L_11b369ad;
  /* 11b36976 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 11b3697c push eax */
  push32((uint32_t)(EAX));
  /* 11b3697d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b36980 push ecx */
  push32((uint32_t)(ECX));
  /* 11b36981 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 11b36986 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 11b3698c push edx */
  push32((uint32_t)(EDX));
  /* 11b3698d call 0x11b3baa0 */
  push32(0x11b36992u); f_11b3baa0();
  /* 11b36992 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b36995 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b36997 jge 0x11b369ad */
  if ((C.sf==C.of)) goto L_11b369ad;
  /* 11b36999 push 0x11b626d0 */
  push32((uint32_t)(0x11b626d0u));
  /* 11b3699e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 11b369a4 push eax */
  push32((uint32_t)(EAX));
  /* 11b369a5 call 0x11b3b9b0 */
  push32(0x11b369aau); f_11b3b9b0();
  /* 11b369aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b369ad:;
  /* 11b369ad cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b369b1 jne 0x11b369e5 */
  if (!C.zf) goto L_11b369e5;
  /* 11b369b3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b369b7 je 0x11b369c5 */
  if (C.zf) goto L_11b369c5;
  /* 11b369b9 mov dword ptr [ebp - 0x3028], 0x11b626bc */
  w32((uint32_t)(EBP + -0x3028), (0x11b626bcu));
  /* 11b369c3 jmp 0x11b369cf */
  goto L_11b369cf;
L_11b369c5:;
  /* 11b369c5 mov dword ptr [ebp - 0x3028], 0x11b626a8 */
  w32((uint32_t)(EBP + -0x3028), (0x11b626a8u));
L_11b369cf:;
  /* 11b369cf mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 11b369d5 push ecx */
  push32((uint32_t)(ECX));
  /* 11b369d6 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11b369dc push edx */
  push32((uint32_t)(EDX));
  /* 11b369dd call 0x11b3b9b0 */
  push32(0x11b369e2u); f_11b3b9b0();
  /* 11b369e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b369e5:;
  /* 11b369e5 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 11b369eb push eax */
  push32((uint32_t)(EAX));
  /* 11b369ec lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 11b369f2 push ecx */
  push32((uint32_t)(ECX));
  /* 11b369f3 call 0x11b3b9c0 */
  push32(0x11b369f8u); f_11b3b9c0();
  /* 11b369f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b369fb cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b369ff jne 0x11b36a3a */
  if (!C.zf) goto L_11b36a3a;
  /* 11b36a01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b36a04 mov eax, dword ptr [edx*4 + 0x11b65a50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11b65a50)));
  /* 11b36a0b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11b36a0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b36a10 je 0x11b36a26 */
  if (C.zf) goto L_11b36a26;
  /* 11b36a12 push 0x11b626a4 */
  push32((uint32_t)(0x11b626a4u));
  /* 11b36a17 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 11b36a1d push ecx */
  push32((uint32_t)(ECX));
  /* 11b36a1e call 0x11b3b9c0 */
  push32(0x11b36a23u); f_11b3b9c0();
  /* 11b36a23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b36a26:;
  /* 11b36a26 push 0x11b626a0 */
  push32((uint32_t)(0x11b626a0u));
  /* 11b36a2b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11b36a31 push edx */
  push32((uint32_t)(EDX));
  /* 11b36a32 call 0x11b3b9c0 */
  push32(0x11b36a37u); f_11b3b9c0();
  /* 11b36a37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b36a3a:;
  /* 11b36a3a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36a3e je 0x11b36a82 */
  if (C.zf) goto L_11b36a82;
  /* 11b36a40 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 11b36a46 push eax */
  push32((uint32_t)(EAX));
  /* 11b36a47 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b36a4a push ecx */
  push32((uint32_t)(ECX));
  /* 11b36a4b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b36a4e push edx */
  push32((uint32_t)(EDX));
  /* 11b36a4f push 0x11b62694 */
  push32((uint32_t)(0x11b62694u));
  /* 11b36a54 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11b36a59 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11b36a5f push eax */
  push32((uint32_t)(EAX));
  /* 11b36a60 call 0x11b3b8b0 */
  push32(0x11b36a65u); f_11b3b8b0();
  /* 11b36a65 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b36a68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b36a6a jge 0x11b36a80 */
  if ((C.sf==C.of)) goto L_11b36a80;
  /* 11b36a6c push 0x11b626d0 */
  push32((uint32_t)(0x11b626d0u));
  /* 11b36a71 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11b36a77 push ecx */
  push32((uint32_t)(ECX));
  /* 11b36a78 call 0x11b3b9b0 */
  push32(0x11b36a7du); f_11b3b9b0();
  /* 11b36a7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b36a80:;
  /* 11b36a80 jmp 0x11b36a98 */
  goto L_11b36a98;
L_11b36a82:;
  /* 11b36a82 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11b36a88 push edx */
  push32((uint32_t)(EDX));
  /* 11b36a89 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11b36a8f push eax */
  push32((uint32_t)(EAX));
  /* 11b36a90 call 0x11b3b9b0 */
  push32(0x11b36a95u); f_11b3b9b0();
  /* 11b36a95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b36a98:;
  /* 11b36a98 cmp dword ptr [0x11b6963c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b6963c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36a9f je 0x11b36adc */
  if (C.zf) goto L_11b36adc;
  /* 11b36aa1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 11b36aa7 push ecx */
  push32((uint32_t)(ECX));
  /* 11b36aa8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11b36aae push edx */
  push32((uint32_t)(EDX));
  /* 11b36aaf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b36ab2 push eax */
  push32((uint32_t)(EAX));
  /* 11b36ab3 call dword ptr [0x11b6963c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6963c))), 0x11b36ab9u);
  /* 11b36ab9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b36abc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b36abe je 0x11b36adc */
  if (C.zf) goto L_11b36adc;
  /* 11b36ac0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36ac4 jne 0x11b36ad1 */
  if (!C.zf) goto L_11b36ad1;
  /* 11b36ac6 push 0x11b65a4c */
  push32((uint32_t)(0x11b65a4cu));
  /* 11b36acb call dword ptr [0x11b6a3e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3e0))), 0x11b36ad1u);
L_11b36ad1:;
  /* 11b36ad1 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11b36ad7 jmp 0x11b36bdb */
  goto L_11b36bdb;
L_11b36adc:;
  /* 11b36adc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b36adf mov edx, dword ptr [ecx*4 + 0x11b65a50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11b65a50)));
  /* 11b36ae6 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11b36ae9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b36aeb je 0x11b36b2b */
  if (C.zf) goto L_11b36b2b;
  /* 11b36aed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b36af0 cmp dword ptr [eax*4 + 0x11b65a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11b65a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36af8 je 0x11b36b2b */
  if (C.zf) goto L_11b36b2b;
  /* 11b36afa push 0 */
  push32((uint32_t)(0x0u));
  /* 11b36afc lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 11b36b02 push ecx */
  push32((uint32_t)(ECX));
  /* 11b36b03 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11b36b09 push edx */
  push32((uint32_t)(EDX));
  /* 11b36b0a call 0x11b3b830 */
  push32(0x11b36b0fu); f_11b3b830();
  /* 11b36b0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b36b12 push eax */
  push32((uint32_t)(EAX));
  /* 11b36b13 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11b36b19 push eax */
  push32((uint32_t)(EAX));
  /* 11b36b1a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b36b1d mov edx, dword ptr [ecx*4 + 0x11b65a5c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11b65a5c)));
  /* 11b36b24 push edx */
  push32((uint32_t)(EDX));
  /* 11b36b25 call dword ptr [0x11b6a3dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3dc))), 0x11b36b2bu);
L_11b36b2b:;
  /* 11b36b2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b36b2e mov ecx, dword ptr [eax*4 + 0x11b65a50] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11b65a50)));
  /* 11b36b35 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11b36b38 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b36b3a je 0x11b36b49 */
  if (C.zf) goto L_11b36b49;
  /* 11b36b3c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11b36b42 push edx */
  push32((uint32_t)(EDX));
  /* 11b36b43 call dword ptr [0x11b6a3e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3e4))), 0x11b36b49u);
L_11b36b49:;
  /* 11b36b49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b36b4c mov ecx, dword ptr [eax*4 + 0x11b65a50] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11b65a50)));
  /* 11b36b53 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11b36b56 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b36b58 je 0x11b36bc8 */
  if (C.zf) goto L_11b36bc8;
  /* 11b36b5a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36b5e je 0x11b36b7d */
  if (C.zf) goto L_11b36b7d;
  /* 11b36b60 push 0xa */
  push32((uint32_t)(0xau));
  /* 11b36b62 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 11b36b68 push edx */
  push32((uint32_t)(EDX));
  /* 11b36b69 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b36b6c push eax */
  push32((uint32_t)(EAX));
  /* 11b36b6d call 0x11b3b540 */
  push32(0x11b36b72u); f_11b3b540();
  /* 11b36b72 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b36b75 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 11b36b7b jmp 0x11b36b87 */
  goto L_11b36b87;
L_11b36b7d:;
  /* 11b36b7d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_11b36b87:;
  /* 11b36b87 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 11b36b8d push ecx */
  push32((uint32_t)(ECX));
  /* 11b36b8e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b36b91 push edx */
  push32((uint32_t)(EDX));
  /* 11b36b92 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 11b36b98 push eax */
  push32((uint32_t)(EAX));
  /* 11b36b99 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b36b9c push ecx */
  push32((uint32_t)(ECX));
  /* 11b36b9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b36ba0 push edx */
  push32((uint32_t)(EDX));
  /* 11b36ba1 call 0x11b36be0 */
  push32(0x11b36ba6u); f_11b36be0();
  /* 11b36ba6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b36ba9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 11b36baf cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36bb3 jne 0x11b36bc0 */
  if (!C.zf) goto L_11b36bc0;
  /* 11b36bb5 push 0x11b65a4c */
  push32((uint32_t)(0x11b65a4cu));
  /* 11b36bba call dword ptr [0x11b6a3e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3e0))), 0x11b36bc0u);
L_11b36bc0:;
  /* 11b36bc0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11b36bc6 jmp 0x11b36bdb */
  goto L_11b36bdb;
L_11b36bc8:;
  /* 11b36bc8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36bcc jne 0x11b36bd9 */
  if (!C.zf) goto L_11b36bd9;
  /* 11b36bce push 0x11b65a4c */
  push32((uint32_t)(0x11b65a4cu));
  /* 11b36bd3 call dword ptr [0x11b6a3e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3e0))), 0x11b36bd9u);
L_11b36bd9:;
  /* 11b36bd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b36bdb:;
  /* 11b36bdb pop edi */
  EDI = (pop32());
  /* 11b36bdc mov esp, ebp */
  ESP = (EBP);
  /* 11b36bde pop ebp */
  EBP = (pop32());
  /* 11b36bdf ret  */
  ESPCHK(0x11b36850u, _esp0);
  ESP += 4; return;
}

/* FUN_10006be0 @ 0x11b36be0 (780 bytes, 197 insns) */
void f_11b36be0(void) {
  FTRACE(0x11b36be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b36be0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b36be1 mov ebp, esp */
  EBP = (ESP);
  /* 11b36be3 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 11b36be8 call 0x11b3bba0 */
  push32(0x11b36bedu); f_11b3bba0();
L_11b36bed:;
  /* 11b36bed cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36bf1 jne 0x11b36c18 */
  if (!C.zf) goto L_11b36c18;
  /* 11b36bf3 push 0x11b6288c */
  push32((uint32_t)(0x11b6288cu));
  /* 11b36bf8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b36bfa push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 11b36bff push 0x11b62880 */
  push32((uint32_t)(0x11b62880u));
  /* 11b36c04 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b36c06 call 0x11b36850 */
  push32(0x11b36c0bu); f_11b36850();
  /* 11b36c0b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b36c0e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36c11 jne 0x11b36c18 */
  if (!C.zf) goto L_11b36c18;
  /* 11b36c13 call 0x11b36740 */
  push32(0x11b36c18u); f_11b36740();
L_11b36c18:;
  /* 11b36c18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b36c1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b36c1c jne 0x11b36bed */
  if (!C.zf) goto L_11b36bed;
  /* 11b36c1e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11b36c23 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 11b36c29 push ecx */
  push32((uint32_t)(ECX));
  /* 11b36c2a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b36c2c call dword ptr [0x11b6a3f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3f0))), 0x11b36c32u);
  /* 11b36c32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b36c34 jne 0x11b36c4a */
  if (!C.zf) goto L_11b36c4a;
  /* 11b36c36 push 0x11b62868 */
  push32((uint32_t)(0x11b62868u));
  /* 11b36c3b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 11b36c41 push edx */
  push32((uint32_t)(EDX));
  /* 11b36c42 call 0x11b3b9b0 */
  push32(0x11b36c47u); f_11b3b9b0();
  /* 11b36c47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b36c4a:;
  /* 11b36c4a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 11b36c50 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b36c53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b36c56 push ecx */
  push32((uint32_t)(ECX));
  /* 11b36c57 call 0x11b3b830 */
  push32(0x11b36c5cu); f_11b3b830();
  /* 11b36c5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b36c5f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36c62 jbe 0x11b36c8d */
  if ((C.cf||C.zf)) goto L_11b36c8d;
  /* 11b36c64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b36c67 push edx */
  push32((uint32_t)(EDX));
  /* 11b36c68 call 0x11b3b830 */
  push32(0x11b36c6du); f_11b3b830();
  /* 11b36c6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b36c70 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b36c73 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11b36c77 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b36c7a push 3 */
  push32((uint32_t)(0x3u));
  /* 11b36c7c push 0x11b62864 */
  push32((uint32_t)(0x11b62864u));
  /* 11b36c81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b36c84 push eax */
  push32((uint32_t)(EAX));
  /* 11b36c85 call 0x11b3c220 */
  push32(0x11b36c8au); f_11b3c220();
  /* 11b36c8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b36c8d:;
  /* 11b36c8d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b36c90 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 11b36c96 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36c9d je 0x11b36ce8 */
  if (C.zf) goto L_11b36ce8;
  /* 11b36c9f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11b36ca5 push edx */
  push32((uint32_t)(EDX));
  /* 11b36ca6 call 0x11b3b830 */
  push32(0x11b36cabu); f_11b3b830();
  /* 11b36cab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b36cae cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36cb1 jbe 0x11b36ce8 */
  if ((C.cf||C.zf)) goto L_11b36ce8;
  /* 11b36cb3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11b36cb9 push eax */
  push32((uint32_t)(EAX));
  /* 11b36cba call 0x11b3b830 */
  push32(0x11b36cbfu); f_11b3b830();
  /* 11b36cbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b36cc2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11b36cc8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11b36ccc mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 11b36cd2 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b36cd4 push 0x11b62864 */
  push32((uint32_t)(0x11b62864u));
  /* 11b36cd9 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11b36cdf push eax */
  push32((uint32_t)(EAX));
  /* 11b36ce0 call 0x11b3c220 */
  push32(0x11b36ce5u); f_11b3c220();
  /* 11b36ce5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b36ce8:;
  /* 11b36ce8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36cec jne 0x11b36cfa */
  if (!C.zf) goto L_11b36cfa;
  /* 11b36cee mov dword ptr [ebp - 0x1114], 0x11b627f0 */
  w32((uint32_t)(EBP + -0x1114), (0x11b627f0u));
  /* 11b36cf8 jmp 0x11b36d04 */
  goto L_11b36d04;
L_11b36cfa:;
  /* 11b36cfa mov dword ptr [ebp - 0x1114], 0x11b62584 */
  w32((uint32_t)(EBP + -0x1114), (0x11b62584u));
L_11b36d04:;
  /* 11b36d04 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b36d07 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b36d0a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b36d0c je 0x11b36d19 */
  if (C.zf) goto L_11b36d19;
  /* 11b36d0e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b36d11 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 11b36d17 jmp 0x11b36d23 */
  goto L_11b36d23;
L_11b36d19:;
  /* 11b36d19 mov dword ptr [ebp - 0x1118], 0x11b62584 */
  w32((uint32_t)(EBP + -0x1118), (0x11b62584u));
L_11b36d23:;
  /* 11b36d23 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b36d26 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b36d29 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b36d2b je 0x11b36d3f */
  if (C.zf) goto L_11b36d3f;
  /* 11b36d2d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36d31 jne 0x11b36d3f */
  if (!C.zf) goto L_11b36d3f;
  /* 11b36d33 mov dword ptr [ebp - 0x111c], 0x11b627e0 */
  w32((uint32_t)(EBP + -0x111c), (0x11b627e0u));
  /* 11b36d3d jmp 0x11b36d49 */
  goto L_11b36d49;
L_11b36d3f:;
  /* 11b36d3f mov dword ptr [ebp - 0x111c], 0x11b62584 */
  w32((uint32_t)(EBP + -0x111c), (0x11b62584u));
L_11b36d49:;
  /* 11b36d49 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b36d4c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b36d4f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b36d51 je 0x11b36d5f */
  if (C.zf) goto L_11b36d5f;
  /* 11b36d53 mov dword ptr [ebp - 0x1120], 0x11b627dc */
  w32((uint32_t)(EBP + -0x1120), (0x11b627dcu));
  /* 11b36d5d jmp 0x11b36d69 */
  goto L_11b36d69;
L_11b36d5f:;
  /* 11b36d5f mov dword ptr [ebp - 0x1120], 0x11b62584 */
  w32((uint32_t)(EBP + -0x1120), (0x11b62584u));
L_11b36d69:;
  /* 11b36d69 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36d6d je 0x11b36d7a */
  if (C.zf) goto L_11b36d7a;
  /* 11b36d6f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b36d72 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 11b36d78 jmp 0x11b36d84 */
  goto L_11b36d84;
L_11b36d7a:;
  /* 11b36d7a mov dword ptr [ebp - 0x1124], 0x11b62584 */
  w32((uint32_t)(EBP + -0x1124), (0x11b62584u));
L_11b36d84:;
  /* 11b36d84 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36d88 je 0x11b36d96 */
  if (C.zf) goto L_11b36d96;
  /* 11b36d8a mov dword ptr [ebp - 0x1128], 0x11b627d4 */
  w32((uint32_t)(EBP + -0x1128), (0x11b627d4u));
  /* 11b36d94 jmp 0x11b36da0 */
  goto L_11b36da0;
L_11b36d96:;
  /* 11b36d96 mov dword ptr [ebp - 0x1128], 0x11b62584 */
  w32((uint32_t)(EBP + -0x1128), (0x11b62584u));
L_11b36da0:;
  /* 11b36da0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36da4 je 0x11b36db1 */
  if (C.zf) goto L_11b36db1;
  /* 11b36da6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b36da9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 11b36daf jmp 0x11b36dbb */
  goto L_11b36dbb;
L_11b36db1:;
  /* 11b36db1 mov dword ptr [ebp - 0x112c], 0x11b62584 */
  w32((uint32_t)(EBP + -0x112c), (0x11b62584u));
L_11b36dbb:;
  /* 11b36dbb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36dbf je 0x11b36dcd */
  if (C.zf) goto L_11b36dcd;
  /* 11b36dc1 mov dword ptr [ebp - 0x1130], 0x11b627cc */
  w32((uint32_t)(EBP + -0x1130), (0x11b627ccu));
  /* 11b36dcb jmp 0x11b36dd7 */
  goto L_11b36dd7;
L_11b36dcd:;
  /* 11b36dcd mov dword ptr [ebp - 0x1130], 0x11b62584 */
  w32((uint32_t)(EBP + -0x1130), (0x11b62584u));
L_11b36dd7:;
  /* 11b36dd7 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36dde je 0x11b36dee */
  if (C.zf) goto L_11b36dee;
  /* 11b36de0 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11b36de6 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 11b36dec jmp 0x11b36df8 */
  goto L_11b36df8;
L_11b36dee:;
  /* 11b36dee mov dword ptr [ebp - 0x1134], 0x11b62584 */
  w32((uint32_t)(EBP + -0x1134), (0x11b62584u));
L_11b36df8:;
  /* 11b36df8 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36dff je 0x11b36e0d */
  if (C.zf) goto L_11b36e0d;
  /* 11b36e01 mov dword ptr [ebp - 0x1138], 0x11b627c0 */
  w32((uint32_t)(EBP + -0x1138), (0x11b627c0u));
  /* 11b36e0b jmp 0x11b36e17 */
  goto L_11b36e17;
L_11b36e0d:;
  /* 11b36e0d mov dword ptr [ebp - 0x1138], 0x11b62584 */
  w32((uint32_t)(EBP + -0x1138), (0x11b62584u));
L_11b36e17:;
  /* 11b36e17 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 11b36e1d push edx */
  push32((uint32_t)(EDX));
  /* 11b36e1e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 11b36e24 push eax */
  push32((uint32_t)(EAX));
  /* 11b36e25 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 11b36e2b push ecx */
  push32((uint32_t)(ECX));
  /* 11b36e2c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 11b36e32 push edx */
  push32((uint32_t)(EDX));
  /* 11b36e33 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 11b36e39 push eax */
  push32((uint32_t)(EAX));
  /* 11b36e3a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 11b36e40 push ecx */
  push32((uint32_t)(ECX));
  /* 11b36e41 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 11b36e47 push edx */
  push32((uint32_t)(EDX));
  /* 11b36e48 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 11b36e4e push eax */
  push32((uint32_t)(EAX));
  /* 11b36e4f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 11b36e55 push ecx */
  push32((uint32_t)(ECX));
  /* 11b36e56 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 11b36e5c push edx */
  push32((uint32_t)(EDX));
  /* 11b36e5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b36e60 push eax */
  push32((uint32_t)(EAX));
  /* 11b36e61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b36e64 mov edx, dword ptr [ecx*4 + 0x11b65a68] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11b65a68)));
  /* 11b36e6b push edx */
  push32((uint32_t)(EDX));
  /* 11b36e6c push 0x11b6276c */
  push32((uint32_t)(0x11b6276cu));
  /* 11b36e71 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11b36e76 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 11b36e7c push eax */
  push32((uint32_t)(EAX));
  /* 11b36e7d call 0x11b3b8b0 */
  push32(0x11b36e82u); f_11b3b8b0();
  /* 11b36e82 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b36e85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b36e87 jge 0x11b36e9d */
  if ((C.sf==C.of)) goto L_11b36e9d;
  /* 11b36e89 push 0x11b626d0 */
  push32((uint32_t)(0x11b626d0u));
  /* 11b36e8e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 11b36e94 push ecx */
  push32((uint32_t)(ECX));
  /* 11b36e95 call 0x11b3b9b0 */
  push32(0x11b36e9au); f_11b3b9b0();
  /* 11b36e9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b36e9d:;
  /* 11b36e9d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 11b36ea2 push 0x11b62748 */
  push32((uint32_t)(0x11b62748u));
  /* 11b36ea7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 11b36ead push edx */
  push32((uint32_t)(EDX));
  /* 11b36eae call 0x11b3c160 */
  push32(0x11b36eb3u); f_11b3c160();
  /* 11b36eb3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b36eb6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 11b36ebc cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36ec3 jne 0x11b36ed6 */
  if (!C.zf) goto L_11b36ed6;
  /* 11b36ec5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11b36ec7 call 0x11b3bea0 */
  push32(0x11b36eccu); f_11b3bea0();
  /* 11b36ecc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b36ecf push 3 */
  push32((uint32_t)(0x3u));
  /* 11b36ed1 call 0x11b37750 */
  push32(0x11b36ed6u); f_11b37750();
L_11b36ed6:;
  /* 11b36ed6 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36edd jne 0x11b36ee6 */
  if (!C.zf) goto L_11b36ee6;
  /* 11b36edf mov eax, 1 */
  EAX = (0x1u);
  /* 11b36ee4 jmp 0x11b36ee8 */
  goto L_11b36ee8;
L_11b36ee6:;
  /* 11b36ee6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b36ee8:;
  /* 11b36ee8 mov esp, ebp */
  ESP = (EBP);
  /* 11b36eea pop ebp */
  EBP = (pop32());
  /* 11b36eeb ret  */
  ESPCHK(0x11b36be0u, _esp0);
  ESP += 4; return;
}

/* __setdefaultprecision @ 0x11b36ef0 (23 bytes, 8 insns) */
void f_11b36ef0(void) {
  FTRACE(0x11b36ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b36ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b36ef1 mov ebp, esp */
  EBP = (ESP);
  /* 11b36ef3 push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 11b36ef8 push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 11b36efd call 0x11b3c3b0 */
  push32(0x11b36f02u); f_11b3c3b0();
  /* 11b36f02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b36f05 pop ebp */
  EBP = (pop32());
  /* 11b36f06 ret  */
  ESPCHK(0x11b36ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f10 @ 0x11b36f10 (94 bytes, 30 insns) */
void f_11b36f10(void) {
  FTRACE(0x11b36f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b36f10 push ebp */
  push32((uint32_t)(EBP));
  /* 11b36f11 mov ebp, esp */
  EBP = (ESP);
  /* 11b36f13 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b36f16 push ebx */
  push32((uint32_t)(EBX));
  /* 11b36f17 push esi */
  push32((uint32_t)(ESI));
  /* 11b36f18 push edi */
  push32((uint32_t)(EDI));
  /* 11b36f19 mov dword ptr [ebp - 0x18], 0x80000000 */
  w32((uint32_t)(EBP + -0x18), (0x80000000u));
  /* 11b36f20 mov dword ptr [ebp - 0x14], 0x4147ffff */
  w32((uint32_t)(EBP + -0x14), (0x4147ffffu));
  /* 11b36f27 mov dword ptr [ebp - 8], 0xc0000000 */
  w32((uint32_t)(EBP + -0x8), (0xc0000000u));
  /* 11b36f2e mov dword ptr [ebp - 4], 0x4150017e */
  w32((uint32_t)(EBP + -0x4), (0x4150017eu));
  /* 11b36f35 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 11b36f38 fdiv qword ptr [ebp - 0x18] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x18)));
  /* 11b36f3b fmul qword ptr [ebp - 0x18] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x18)));
  /* 11b36f3e fsubr qword ptr [ebp - 8] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x8))) - FPU_ST(0);
  /* 11b36f41 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 11b36f44 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 11b36f47 fcomp qword ptr [0x11b628a8] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11b628a8)));
  (void)fpu_pop();
  /* 11b36f4d fnstsw ax */
  AX = fpu_status();
  /* 11b36f4f test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 11b36f52 jne 0x11b36f5d */
  if (!C.zf) goto L_11b36f5d;
  /* 11b36f54 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11b36f5b jmp 0x11b36f64 */
  goto L_11b36f64;
L_11b36f5d:;
  /* 11b36f5d mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
L_11b36f64:;
  /* 11b36f64 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b36f67 pop edi */
  EDI = (pop32());
  /* 11b36f68 pop esi */
  ESI = (pop32());
  /* 11b36f69 pop ebx */
  EBX = (pop32());
  /* 11b36f6a mov esp, ebp */
  ESP = (EBP);
  /* 11b36f6c pop ebp */
  EBP = (pop32());
  /* 11b36f6d ret  */
  ESPCHK(0x11b36f10u, _esp0);
  ESP += 4; return;
}

/* __ms_p5_mp_test_fdiv @ 0x11b36f70 (66 bytes, 22 insns) */
void f_11b36f70(void) {
  FTRACE(0x11b36f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b36f70 push ebp */
  push32((uint32_t)(EBP));
  /* 11b36f71 mov ebp, esp */
  EBP = (ESP);
  /* 11b36f73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b36f76 push 0x11b628cc */
  push32((uint32_t)(0x11b628ccu));
  /* 11b36f7b call dword ptr [0x11b6a3f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3f4))), 0x11b36f81u);
  /* 11b36f81 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b36f84 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36f88 je 0x11b36fa9 */
  if (C.zf) goto L_11b36fa9;
  /* 11b36f8a push 0x11b628b0 */
  push32((uint32_t)(0x11b628b0u));
  /* 11b36f8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b36f92 push eax */
  push32((uint32_t)(EAX));
  /* 11b36f93 call dword ptr [0x11b6a3e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3e8))), 0x11b36f99u);
  /* 11b36f99 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b36f9c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36fa0 je 0x11b36fa9 */
  if (C.zf) goto L_11b36fa9;
  /* 11b36fa2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b36fa4 call dword ptr [ebp - 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x8))), 0x11b36fa7u);
  /* 11b36fa7 jmp 0x11b36fae */
  goto L_11b36fae;
L_11b36fa9:;
  /* 11b36fa9 call 0x11b36f10 */
  push32(0x11b36faeu); f_11b36f10();
L_11b36fae:;
  /* 11b36fae mov esp, ebp */
  ESP = (EBP);
  /* 11b36fb0 pop ebp */
  EBP = (pop32());
  /* 11b36fb1 ret  */
  ESPCHK(0x11b36f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fc0 @ 0x11b36fc0 (168 bytes, 59 insns) */
void f_11b36fc0(void) {
  FTRACE(0x11b36fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b36fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b36fc1 mov ebp, esp */
  EBP = (ESP);
  /* 11b36fc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b36fc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b36fc9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b36fcc push ecx */
  push32((uint32_t)(ECX));
  /* 11b36fcd call 0x11b3c890 */
  push32(0x11b36fd2u); f_11b3c890();
  /* 11b36fd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b36fd5 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36fd8 je 0x11b37020 */
  if (C.zf) goto L_11b37020;
L_11b36fda:;
  /* 11b36fda mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b36fdd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b36fe0 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11b36fe3 cmp dword ptr [0x11b65de0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b65de0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b36fea jle 0x11b37002 */
  if ((C.zf||C.sf!=C.of)) goto L_11b37002;
  /* 11b36fec push 4 */
  push32((uint32_t)(0x4u));
  /* 11b36fee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b36ff1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b36ff4 push ecx */
  push32((uint32_t)(ECX));
  /* 11b36ff5 call 0x11b3c7c0 */
  push32(0x11b36ffau); f_11b3c7c0();
  /* 11b36ffa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b36ffd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b37000 jmp 0x11b3701a */
  goto L_11b3701a;
L_11b37002:;
  /* 11b37002 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b37005 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b37008 mov ecx, dword ptr [0x11b65dec] */
  ECX = (r32((uint32_t)(0x11b65dec)));
  /* 11b3700e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b37010 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11b37014 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11b37017 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11b3701a:;
  /* 11b3701a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3701e jne 0x11b36fda */
  if (!C.zf) goto L_11b36fda;
L_11b37020:;
  /* 11b37020 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b37023 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11b37025 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11b37028 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3702b mov al, byte ptr [0x11b65de4] */
  AL = (r8((uint32_t)(0x11b65de4)));
  /* 11b37030 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11b37032 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b37035 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37038 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11b3703b:;
  /* 11b3703b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3703e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b37040 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11b37043 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b37046 mov dl, byte ptr [ebp - 8] */
  DL = (r8((uint32_t)(EBP + -0x8)));
  /* 11b37049 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11b3704b mov al, byte ptr [ebp - 4] */
  AL = (r8((uint32_t)(EBP + -0x4)));
  /* 11b3704e mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11b37051 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b37054 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b37057 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3705a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3705d mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11b37060 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b37062 jne 0x11b3703b */
  if (!C.zf) goto L_11b3703b;
  /* 11b37064 mov esp, ebp */
  ESP = (EBP);
  /* 11b37066 pop ebp */
  EBP = (pop32());
  /* 11b37067 ret  */
  ESPCHK(0x11b36fc0u, _esp0);
  ESP += 4; return;
}

/* __cropzeros @ 0x11b37070 (215 bytes, 78 insns) */
void f_11b37070(void) {
  FTRACE(0x11b37070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b37070 push ebp */
  push32((uint32_t)(EBP));
  /* 11b37071 mov ebp, esp */
  EBP = (ESP);
  /* 11b37073 push ecx */
  push32((uint32_t)(ECX));
L_11b37074:;
  /* 11b37074 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b37077 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b3707a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3707c je 0x11b3709a */
  if (C.zf) goto L_11b3709a;
  /* 11b3707e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b37081 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b37084 movsx ecx, byte ptr [0x11b65de4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11b65de4))));
  /* 11b3708b cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3708d je 0x11b3709a */
  if (C.zf) goto L_11b3709a;
  /* 11b3708f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b37092 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37095 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11b37098 jmp 0x11b37074 */
  goto L_11b37074;
L_11b3709a:;
  /* 11b3709a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3709d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b370a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b370a3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b370a6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11b370a9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b370ab je 0x11b37143 */
  if (C.zf) goto L_11b37143;
L_11b370b1:;
  /* 11b370b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b370b4 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b370b7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b370b9 je 0x11b370dc */
  if (C.zf) goto L_11b370dc;
  /* 11b370bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b370be movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b370c1 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b370c4 je 0x11b370dc */
  if (C.zf) goto L_11b370dc;
  /* 11b370c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b370c9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b370cc cmp edx, 0x45 */
  { uint32_t _a=(EDX),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b370cf je 0x11b370dc */
  if (C.zf) goto L_11b370dc;
  /* 11b370d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b370d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b370d7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11b370da jmp 0x11b370b1 */
  goto L_11b370b1;
L_11b370dc:;
  /* 11b370dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b370df mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b370e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b370e5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b370e8 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11b370eb:;
  /* 11b370eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b370ee movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b370f1 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b370f4 jne 0x11b37101 */
  if (!C.zf) goto L_11b37101;
  /* 11b370f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b370f9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b370fc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11b370ff jmp 0x11b370eb */
  goto L_11b370eb;
L_11b37101:;
  /* 11b37101 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b37104 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b37107 movsx edx, byte ptr [0x11b65de4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11b65de4))));
  /* 11b3710e cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37110 jne 0x11b3711b */
  if (!C.zf) goto L_11b3711b;
  /* 11b37112 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b37115 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b37118 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11b3711b:;
  /* 11b3711b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3711e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37121 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11b37124 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b37127 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3712a mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11b3712c mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11b3712e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b37131 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b37134 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b37137 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3713a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b3713d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3713f je 0x11b37143 */
  if (C.zf) goto L_11b37143;
  /* 11b37141 jmp 0x11b3711b */
  goto L_11b3711b;
L_11b37143:;
  /* 11b37143 mov esp, ebp */
  ESP = (EBP);
  /* 11b37145 pop ebp */
  EBP = (pop32());
  /* 11b37146 ret  */
  ESPCHK(0x11b37070u, _esp0);
  ESP += 4; return;
}

/* __positive @ 0x11b37150 (45 bytes, 16 insns) */
void f_11b37150(void) {
  FTRACE(0x11b37150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b37150 push ebp */
  push32((uint32_t)(EBP));
  /* 11b37151 mov ebp, esp */
  EBP = (ESP);
  /* 11b37153 push ecx */
  push32((uint32_t)(ECX));
  /* 11b37154 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b37157 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 11b37159 fcomp qword ptr [0x11b628d8] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11b628d8)));
  (void)fpu_pop();
  /* 11b3715f fnstsw ax */
  AX = fpu_status();
  /* 11b37161 test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 11b37164 jne 0x11b3716f */
  if (!C.zf) goto L_11b3716f;
  /* 11b37166 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11b3716d jmp 0x11b37176 */
  goto L_11b37176;
L_11b3716f:;
  /* 11b3716f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11b37176:;
  /* 11b37176 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b37179 mov esp, ebp */
  ESP = (EBP);
  /* 11b3717b pop ebp */
  EBP = (pop32());
  /* 11b3717c ret  */
  ESPCHK(0x11b37150u, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x11b37180 (72 bytes, 29 insns) */
void f_11b37180(void) {
  FTRACE(0x11b37180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b37180 push ebp */
  push32((uint32_t)(EBP));
  /* 11b37181 mov ebp, esp */
  EBP = (ESP);
  /* 11b37183 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b37186 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3718a je 0x11b371ac */
  if (C.zf) goto L_11b371ac;
  /* 11b3718c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3718f push eax */
  push32((uint32_t)(EAX));
  /* 11b37190 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11b37193 push ecx */
  push32((uint32_t)(ECX));
  /* 11b37194 call 0x11b3d180 */
  push32(0x11b37199u); f_11b3d180();
  /* 11b37199 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3719c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3719f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b371a2 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11b371a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b371a7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11b371aa jmp 0x11b371c4 */
  goto L_11b371c4;
L_11b371ac:;
  /* 11b371ac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b371af push edx */
  push32((uint32_t)(EDX));
  /* 11b371b0 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11b371b3 push eax */
  push32((uint32_t)(EAX));
  /* 11b371b4 call 0x11b3d200 */
  push32(0x11b371b9u); f_11b3d200();
  /* 11b371b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b371bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b371bf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b371c2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
L_11b371c4:;
  /* 11b371c4 mov esp, ebp */
  ESP = (EBP);
  /* 11b371c6 pop ebp */
  EBP = (pop32());
  /* 11b371c7 ret  */
  ESPCHK(0x11b37180u, _esp0);
  ESP += 4; return;
}

/* FUN_100071d0 @ 0x11b371d0 (118 bytes, 49 insns) */
void f_11b371d0(void) {
  FTRACE(0x11b371d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b371d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b371d1 mov ebp, esp */
  EBP = (ESP);
  /* 11b371d3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b371d6 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11b371d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b371dc lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 11b371df push ecx */
  push32((uint32_t)(ECX));
  /* 11b371e0 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11b371e3 push edx */
  push32((uint32_t)(EDX));
  /* 11b371e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b371e7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b371ea push ecx */
  push32((uint32_t)(ECX));
  /* 11b371eb mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11b371ed push edx */
  push32((uint32_t)(EDX));
  /* 11b371ee call 0x11b3d340 */
  push32(0x11b371f3u); f_11b3d340();
  /* 11b371f3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b371f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b371f9 push eax */
  push32((uint32_t)(EAX));
  /* 11b371fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b371fd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37200 push ecx */
  push32((uint32_t)(ECX));
  /* 11b37201 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b37204 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b37206 cmp dword ptr [edx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37209 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11b3720c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3720f add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37211 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b37213 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37217 setg dl */
  DL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 11b3721a add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3721c push ecx */
  push32((uint32_t)(ECX));
  /* 11b3721d call 0x11b3d240 */
  push32(0x11b37222u); f_11b3d240();
  /* 11b37222 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37225 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b37227 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3722a push eax */
  push32((uint32_t)(EAX));
  /* 11b3722b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b3722e push ecx */
  push32((uint32_t)(ECX));
  /* 11b3722f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b37232 push edx */
  push32((uint32_t)(EDX));
  /* 11b37233 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b37236 push eax */
  push32((uint32_t)(EAX));
  /* 11b37237 call 0x11b37250 */
  push32(0x11b3723cu); f_11b37250();
  /* 11b3723c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3723f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b37242 mov esp, ebp */
  ESP = (EBP);
  /* 11b37244 pop ebp */
  EBP = (pop32());
  /* 11b37245 ret  */
  ESPCHK(0x11b371d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007250 @ 0x11b37250 (358 bytes, 128 insns) */
void f_11b37250(void) {
  FTRACE(0x11b37250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b37250 push ebp */
  push32((uint32_t)(EBP));
  /* 11b37251 mov ebp, esp */
  EBP = (ESP);
  /* 11b37253 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b37256 movsx eax, byte ptr [ebp + 0x18] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x18))));
  /* 11b3725a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3725c je 0x11b37287 */
  if (C.zf) goto L_11b37287;
  /* 11b3725e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b37261 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b37263 cmp dword ptr [ecx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37266 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11b37269 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3726c add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3726e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b37271 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b37273 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37277 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 11b3727a push ecx */
  push32((uint32_t)(ECX));
  /* 11b3727b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3727e push edx */
  push32((uint32_t)(EDX));
  /* 11b3727f call 0x11b376c0 */
  push32(0x11b37284u); f_11b376c0();
  /* 11b37284 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b37287:;
  /* 11b37287 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3728a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b3728d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b37290 cmp dword ptr [ecx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37293 jne 0x11b372a4 */
  if (!C.zf) goto L_11b372a4;
  /* 11b37295 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b37298 mov byte ptr [edx], 0x2d */
  w8((uint32_t)(EDX), (0x2du));
  /* 11b3729b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3729e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b372a1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b372a4:;
  /* 11b372a4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b372a8 jle 0x11b372c8 */
  if ((C.zf||C.sf!=C.of)) goto L_11b372c8;
  /* 11b372aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b372ad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b372b0 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11b372b3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11b372b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b372b8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b372bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b372be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b372c1 mov al, byte ptr [0x11b65de4] */
  AL = (r8((uint32_t)(0x11b65de4)));
  /* 11b372c6 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
L_11b372c8:;
  /* 11b372c8 push 0x11b628e0 */
  push32((uint32_t)(0x11b628e0u));
  /* 11b372cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b372d0 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b372d3 movsx edx, byte ptr [ebp + 0x18] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x18))));
  /* 11b372d7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b372d9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b372db inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11b372dc add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b372de push ecx */
  push32((uint32_t)(ECX));
  /* 11b372df call 0x11b3b9b0 */
  push32(0x11b372e4u); f_11b3b9b0();
  /* 11b372e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b372e7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b372ea cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b372ee je 0x11b372f6 */
  if (C.zf) goto L_11b372f6;
  /* 11b372f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b372f3 mov byte ptr [eax], 0x45 */
  w8((uint32_t)(EAX), (0x45u));
L_11b372f6:;
  /* 11b372f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b372f9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b372fc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b372ff mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b37302 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11b37305 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b37308 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3730b je 0x11b373af */
  if (C.zf) goto L_11b373af;
  /* 11b37311 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b37314 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b37317 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3731a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b3731d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37321 jge 0x11b37331 */
  if ((C.sf==C.of)) goto L_11b37331;
  /* 11b37323 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b37326 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b37328 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b3732b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3732e mov byte ptr [edx], 0x2d */
  w8((uint32_t)(EDX), (0x2du));
L_11b37331:;
  /* 11b37331 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b37334 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37337 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b3733a cmp dword ptr [ebp - 8], 0x64 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3733e jl 0x11b37365 */
  if ((C.sf!=C.of)) goto L_11b37365;
  /* 11b37340 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b37343 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b37344 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11b37349 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b3734b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3734e mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11b37350 add cl, al */
  { uint32_t _a=(CL),_b=(AL),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b37352 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b37355 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11b37357 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3735a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b3735b mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11b37360 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b37362 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11b37365:;
  /* 11b37365 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b37368 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3736b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b3736e cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37372 jl 0x11b37399 */
  if ((C.sf!=C.of)) goto L_11b37399;
  /* 11b37374 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b37377 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b37378 mov ecx, 0xa */
  ECX = (0xau);
  /* 11b3737d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b3737f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b37382 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11b37384 add cl, al */
  { uint32_t _a=(CL),_b=(AL),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b37386 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b37389 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11b3738b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3738e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b3738f mov ecx, 0xa */
  ECX = (0xau);
  /* 11b37394 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b37396 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11b37399:;
  /* 11b37399 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3739c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3739f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b373a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b373a5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11b373a7 add cl, byte ptr [ebp - 8] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EBP + -0x8))),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b373aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b373ad mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
L_11b373af:;
  /* 11b373af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b373b2 mov esp, ebp */
  ESP = (EBP);
  /* 11b373b4 pop ebp */
  EBP = (pop32());
  /* 11b373b5 ret  */
  ESPCHK(0x11b37250u, _esp0);
  ESP += 4; return;
}

/* FUN_100073c0 @ 0x11b373c0 (106 bytes, 44 insns) */
void f_11b373c0(void) {
  FTRACE(0x11b373c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b373c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b373c1 mov ebp, esp */
  EBP = (ESP);
  /* 11b373c3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b373c6 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11b373c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b373cc lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 11b373cf push ecx */
  push32((uint32_t)(ECX));
  /* 11b373d0 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11b373d3 push edx */
  push32((uint32_t)(EDX));
  /* 11b373d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b373d7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b373da push ecx */
  push32((uint32_t)(ECX));
  /* 11b373db mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11b373dd push edx */
  push32((uint32_t)(EDX));
  /* 11b373de call 0x11b3d340 */
  push32(0x11b373e3u); f_11b3d340();
  /* 11b373e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b373e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b373e9 push eax */
  push32((uint32_t)(EAX));
  /* 11b373ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b373ed mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b373f0 add edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b373f3 push edx */
  push32((uint32_t)(EDX));
  /* 11b373f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b373f7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b373f9 cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b373fc sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11b373ff mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b37402 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37404 push edx */
  push32((uint32_t)(EDX));
  /* 11b37405 call 0x11b3d240 */
  push32(0x11b3740au); f_11b3d240();
  /* 11b3740a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3740d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3740f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b37412 push eax */
  push32((uint32_t)(EAX));
  /* 11b37413 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b37416 push ecx */
  push32((uint32_t)(ECX));
  /* 11b37417 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3741a push edx */
  push32((uint32_t)(EDX));
  /* 11b3741b call 0x11b37430 */
  push32(0x11b37420u); f_11b37430();
  /* 11b37420 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37423 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b37426 mov esp, ebp */
  ESP = (EBP);
  /* 11b37428 pop ebp */
  EBP = (pop32());
  /* 11b37429 ret  */
  ESPCHK(0x11b373c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007430 @ 0x11b37430 (317 bytes, 113 insns) */
void f_11b37430(void) {
  FTRACE(0x11b37430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b37430 push ebp */
  push32((uint32_t)(EBP));
  /* 11b37431 mov ebp, esp */
  EBP = (ESP);
  /* 11b37433 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b37436 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b37439 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b3743c sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3743f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b37442 movsx edx, byte ptr [ebp + 0x14] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x14))));
  /* 11b37446 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b37448 je 0x11b37483 */
  if (C.zf) goto L_11b37483;
  /* 11b3744a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3744d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3744f cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37452 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11b37455 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b37458 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3745a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b3745d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b37460 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37463 jne 0x11b37483 */
  if (!C.zf) goto L_11b37483;
  /* 11b37465 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b37468 add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3746b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b3746e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b37471 mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 11b37474 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b37477 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3747a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b3747d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b37480 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_11b37483:;
  /* 11b37483 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b37486 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b37489 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3748c cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3748f jne 0x11b374a0 */
  if (!C.zf) goto L_11b374a0;
  /* 11b37491 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b37494 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11b37497 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3749a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3749d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b374a0:;
  /* 11b374a0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b374a3 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b374a7 jg 0x11b374c8 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b374c8;
  /* 11b374a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b374ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b374ae push ecx */
  push32((uint32_t)(ECX));
  /* 11b374af call 0x11b376c0 */
  push32(0x11b374b4u); f_11b376c0();
  /* 11b374b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b374b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b374ba mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 11b374bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b374c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b374c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b374c6 jmp 0x11b374d4 */
  goto L_11b374d4;
L_11b374c8:;
  /* 11b374c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b374cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b374ce add edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b374d1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b374d4:;
  /* 11b374d4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b374d8 jle 0x11b37566 */
  if ((C.zf||C.sf!=C.of)) goto L_11b37566;
  /* 11b374de push 1 */
  push32((uint32_t)(0x1u));
  /* 11b374e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b374e3 push eax */
  push32((uint32_t)(EAX));
  /* 11b374e4 call 0x11b376c0 */
  push32(0x11b374e9u); f_11b376c0();
  /* 11b374e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b374ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b374ef mov dl, byte ptr [0x11b65de4] */
  DL = (r8((uint32_t)(0x11b65de4)));
  /* 11b374f5 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11b374f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b374fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b374fd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b37500 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b37503 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37507 jge 0x11b37566 */
  if ((C.sf==C.of)) goto L_11b37566;
  /* 11b37509 movsx edx, byte ptr [ebp + 0x14] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x14))));
  /* 11b3750d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3750f je 0x11b3751e */
  if (C.zf) goto L_11b3751e;
  /* 11b37511 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b37514 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b37517 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b37519 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11b3751c jmp 0x11b37544 */
  goto L_11b37544;
L_11b3751e:;
  /* 11b3751e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b37521 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b37524 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b37526 cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37529 jge 0x11b37533 */
  if ((C.sf==C.of)) goto L_11b37533;
  /* 11b3752b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3752e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11b37531 jmp 0x11b3753e */
  goto L_11b3753e;
L_11b37533:;
  /* 11b37533 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b37536 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b37539 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b3753b mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11b3753e:;
  /* 11b3753e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b37541 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11b37544:;
  /* 11b37544 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b37547 push edx */
  push32((uint32_t)(EDX));
  /* 11b37548 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3754b push eax */
  push32((uint32_t)(EAX));
  /* 11b3754c call 0x11b376c0 */
  push32(0x11b37551u); f_11b376c0();
  /* 11b37551 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37554 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b37557 push ecx */
  push32((uint32_t)(ECX));
  /* 11b37558 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11b3755a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3755d push edx */
  push32((uint32_t)(EDX));
  /* 11b3755e call 0x11b3d530 */
  push32(0x11b37563u); f_11b3d530();
  /* 11b37563 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b37566:;
  /* 11b37566 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b37569 mov esp, ebp */
  ESP = (EBP);
  /* 11b3756b pop ebp */
  EBP = (pop32());
  /* 11b3756c ret  */
  ESPCHK(0x11b37430u, _esp0);
  ESP += 4; return;
}

/* FUN_10007570 @ 0x11b37570 (229 bytes, 89 insns) */
void f_11b37570(void) {
  FTRACE(0x11b37570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b37570 push ebp */
  push32((uint32_t)(EBP));
  /* 11b37571 mov ebp, esp */
  EBP = (ESP);
  /* 11b37573 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b37576 mov byte ptr [ebp - 0x30], 0 */
  w8((uint32_t)(EBP + -0x30), (0x0u));
  /* 11b3757a lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11b3757d mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11b37580 lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 11b37583 push ecx */
  push32((uint32_t)(ECX));
  /* 11b37584 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11b37587 push edx */
  push32((uint32_t)(EDX));
  /* 11b37588 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3758b mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b3758e push ecx */
  push32((uint32_t)(ECX));
  /* 11b3758f mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11b37591 push edx */
  push32((uint32_t)(EDX));
  /* 11b37592 call 0x11b3d340 */
  push32(0x11b37597u); f_11b3d340();
  /* 11b37597 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3759a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b3759d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b375a0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b375a3 mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
  /* 11b375a6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b375a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b375ab cmp dword ptr [edx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b375ae sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11b375b1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b375b4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b375b6 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b375b9 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b375bc push edx */
  push32((uint32_t)(EDX));
  /* 11b375bd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b375c0 push eax */
  push32((uint32_t)(EAX));
  /* 11b375c1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b375c4 push ecx */
  push32((uint32_t)(ECX));
  /* 11b375c5 call 0x11b3d240 */
  push32(0x11b375cau); f_11b3d240();
  /* 11b375ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b375cd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b375d0 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b375d3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b375d6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b375d8 cmp dword ptr [ebp - 0x34], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b375db setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 11b375de mov byte ptr [ebp - 0x30], cl */
  w8((uint32_t)(EBP + -0x30), (CL));
  /* 11b375e1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b375e4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b375e7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b375ea mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11b375ed cmp dword ptr [ebp - 0x34], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b375f1 jl 0x11b375fb */
  if ((C.sf!=C.of)) goto L_11b375fb;
  /* 11b375f3 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11b375f6 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b375f9 jl 0x11b37617 */
  if ((C.sf!=C.of)) goto L_11b37617;
L_11b375fb:;
  /* 11b375fb push 1 */
  push32((uint32_t)(0x1u));
  /* 11b375fd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b37600 push edx */
  push32((uint32_t)(EDX));
  /* 11b37601 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b37604 push eax */
  push32((uint32_t)(EAX));
  /* 11b37605 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b37608 push ecx */
  push32((uint32_t)(ECX));
  /* 11b37609 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3760c push edx */
  push32((uint32_t)(EDX));
  /* 11b3760d call 0x11b37250 */
  push32(0x11b37612u); f_11b37250();
  /* 11b37612 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37615 jmp 0x11b37651 */
  goto L_11b37651;
L_11b37617:;
  /* 11b37617 movsx eax, byte ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x30))));
  /* 11b3761b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3761d je 0x11b3763b */
  if (C.zf) goto L_11b3763b;
L_11b3761f:;
  /* 11b3761f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b37622 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b37625 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b37628 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3762b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b3762e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b37630 je 0x11b37634 */
  if (C.zf) goto L_11b37634;
  /* 11b37632 jmp 0x11b3761f */
  goto L_11b3761f;
L_11b37634:;
  /* 11b37634 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b37637 mov byte ptr [ecx - 2], 0 */
  w8((uint32_t)(ECX + -0x2), (0x0u));
L_11b3763b:;
  /* 11b3763b push 1 */
  push32((uint32_t)(0x1u));
  /* 11b3763d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b37640 push edx */
  push32((uint32_t)(EDX));
  /* 11b37641 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b37644 push eax */
  push32((uint32_t)(EAX));
  /* 11b37645 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b37648 push ecx */
  push32((uint32_t)(ECX));
  /* 11b37649 call 0x11b37430 */
  push32(0x11b3764eu); f_11b37430();
  /* 11b3764e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b37651:;
  /* 11b37651 mov esp, ebp */
  ESP = (EBP);
  /* 11b37653 pop ebp */
  EBP = (pop32());
  /* 11b37654 ret  */
  ESPCHK(0x11b37570u, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x11b37660 (95 bytes, 40 insns) */
void f_11b37660(void) {
  FTRACE(0x11b37660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b37660 push ebp */
  push32((uint32_t)(EBP));
  /* 11b37661 mov ebp, esp */
  EBP = (ESP);
  /* 11b37663 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37667 je 0x11b3766f */
  if (C.zf) goto L_11b3766f;
  /* 11b37669 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3766d jne 0x11b37689 */
  if (!C.zf) goto L_11b37689;
L_11b3766f:;
  /* 11b3766f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b37672 push eax */
  push32((uint32_t)(EAX));
  /* 11b37673 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b37676 push ecx */
  push32((uint32_t)(ECX));
  /* 11b37677 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3767a push edx */
  push32((uint32_t)(EDX));
  /* 11b3767b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3767e push eax */
  push32((uint32_t)(EAX));
  /* 11b3767f call 0x11b371d0 */
  push32(0x11b37684u); f_11b371d0();
  /* 11b37684 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37687 jmp 0x11b376bd */
  goto L_11b376bd;
L_11b37689:;
  /* 11b37689 cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3768d jne 0x11b376a5 */
  if (!C.zf) goto L_11b376a5;
  /* 11b3768f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b37692 push ecx */
  push32((uint32_t)(ECX));
  /* 11b37693 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b37696 push edx */
  push32((uint32_t)(EDX));
  /* 11b37697 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3769a push eax */
  push32((uint32_t)(EAX));
  /* 11b3769b call 0x11b373c0 */
  push32(0x11b376a0u); f_11b373c0();
  /* 11b376a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b376a3 jmp 0x11b376bd */
  goto L_11b376bd;
L_11b376a5:;
  /* 11b376a5 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b376a8 push ecx */
  push32((uint32_t)(ECX));
  /* 11b376a9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b376ac push edx */
  push32((uint32_t)(EDX));
  /* 11b376ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b376b0 push eax */
  push32((uint32_t)(EAX));
  /* 11b376b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b376b4 push ecx */
  push32((uint32_t)(ECX));
  /* 11b376b5 call 0x11b37570 */
  push32(0x11b376bau); f_11b37570();
  /* 11b376ba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b376bd:;
  /* 11b376bd pop ebp */
  EBP = (pop32());
  /* 11b376be ret  */
  ESPCHK(0x11b37660u, _esp0);
  ESP += 4; return;
}

/* __shift @ 0x11b376c0 (46 bytes, 19 insns) */
void f_11b376c0(void) {
  FTRACE(0x11b376c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b376c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b376c1 mov ebp, esp */
  EBP = (ESP);
  /* 11b376c3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b376c7 je 0x11b376ec */
  if (C.zf) goto L_11b376ec;
  /* 11b376c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b376cc push eax */
  push32((uint32_t)(EAX));
  /* 11b376cd call 0x11b3b830 */
  push32(0x11b376d2u); f_11b3b830();
  /* 11b376d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b376d5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b376d8 push eax */
  push32((uint32_t)(EAX));
  /* 11b376d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b376dc push ecx */
  push32((uint32_t)(ECX));
  /* 11b376dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b376e0 add edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b376e3 push edx */
  push32((uint32_t)(EDX));
  /* 11b376e4 call 0x11b3d590 */
  push32(0x11b376e9u); f_11b3d590();
  /* 11b376e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b376ec:;
  /* 11b376ec pop ebp */
  EBP = (pop32());
  /* 11b376ed ret  */
  ESPCHK(0x11b376c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100076f0 @ 0x11b376f0 (56 bytes, 15 insns) */
void f_11b376f0(void) {
  FTRACE(0x11b376f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b376f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b376f1 mov ebp, esp */
  EBP = (ESP);
  /* 11b376f3 cmp dword ptr [0x11b65a38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b65a38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b376fa je 0x11b37702 */
  if (C.zf) goto L_11b37702;
  /* 11b376fc call dword ptr [0x11b65a38] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b65a38))), 0x11b37702u);
L_11b37702:;
  /* 11b37702 push 0x11b65418 */
  push32((uint32_t)(0x11b65418u));
  /* 11b37707 push 0x11b65208 */
  push32((uint32_t)(0x11b65208u));
  /* 11b3770c call 0x11b378c0 */
  push32(0x11b37711u); f_11b378c0();
  /* 11b37711 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37714 push 0x11b65104 */
  push32((uint32_t)(0x11b65104u));
  /* 11b37719 push 0x11b65000 */
  push32((uint32_t)(0x11b65000u));
  /* 11b3771e call 0x11b378c0 */
  push32(0x11b37723u); f_11b378c0();
  /* 11b37723 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37726 pop ebp */
  EBP = (pop32());
  /* 11b37727 ret  */
  ESPCHK(0x11b376f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007730 @ 0x11b37730 (21 bytes, 10 insns) */
void f_11b37730(void) {
  FTRACE(0x11b37730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b37730 push ebp */
  push32((uint32_t)(EBP));
  /* 11b37731 mov ebp, esp */
  EBP = (ESP);
  /* 11b37733 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b37735 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b37737 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3773a push eax */
  push32((uint32_t)(EAX));
  /* 11b3773b call 0x11b377b0 */
  push32(0x11b37740u); f_11b377b0();
  /* 11b37740 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37743 pop ebp */
  EBP = (pop32());
  /* 11b37744 ret  */
  ESPCHK(0x11b37730u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11b37750 (21 bytes, 10 insns) */
void f_11b37750(void) {
  FTRACE(0x11b37750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b37750 push ebp */
  push32((uint32_t)(EBP));
  /* 11b37751 mov ebp, esp */
  EBP = (ESP);
  /* 11b37753 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b37755 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b37757 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3775a push eax */
  push32((uint32_t)(EAX));
  /* 11b3775b call 0x11b377b0 */
  push32(0x11b37760u); f_11b377b0();
  /* 11b37760 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37763 pop ebp */
  EBP = (pop32());
  /* 11b37764 ret  */
  ESPCHK(0x11b37750u, _esp0);
  ESP += 4; return;
}

/* FUN_10007770 @ 0x11b37770 (19 bytes, 9 insns) */
void f_11b37770(void) {
  FTRACE(0x11b37770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b37770 push ebp */
  push32((uint32_t)(EBP));
  /* 11b37771 mov ebp, esp */
  EBP = (ESP);
  /* 11b37773 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b37775 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b37777 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b37779 call 0x11b377b0 */
  push32(0x11b3777eu); f_11b377b0();
  /* 11b3777e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37781 pop ebp */
  EBP = (pop32());
  /* 11b37782 ret  */
  ESPCHK(0x11b37770u, _esp0);
  ESP += 4; return;
}

/* FUN_10007790 @ 0x11b37790 (19 bytes, 9 insns) */
void f_11b37790(void) {
  FTRACE(0x11b37790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b37790 push ebp */
  push32((uint32_t)(EBP));
  /* 11b37791 mov ebp, esp */
  EBP = (ESP);
  /* 11b37793 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b37795 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b37797 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b37799 call 0x11b377b0 */
  push32(0x11b3779eu); f_11b377b0();
  /* 11b3779e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b377a1 pop ebp */
  EBP = (pop32());
  /* 11b377a2 ret  */
  ESPCHK(0x11b37790u, _esp0);
  ESP += 4; return;
}

/* FUN_100077b0 @ 0x11b377b0 (227 bytes, 61 insns) */
void f_11b377b0(void) {
  FTRACE(0x11b377b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b377b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b377b1 mov ebp, esp */
  EBP = (ESP);
  /* 11b377b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b377b4 call 0x11b378a0 */
  push32(0x11b377b9u); f_11b378a0();
  /* 11b377b9 cmp dword ptr [0x11b67b50], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b67b50))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b377c0 jne 0x11b377d3 */
  if (!C.zf) goto L_11b377d3;
  /* 11b377c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b377c5 push eax */
  push32((uint32_t)(EAX));
  /* 11b377c6 call dword ptr [0x11b6a400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a400))), 0x11b377ccu);
  /* 11b377cc push eax */
  push32((uint32_t)(EAX));
  /* 11b377cd call dword ptr [0x11b6a3fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3fc))), 0x11b377d3u);
L_11b377d3:;
  /* 11b377d3 mov dword ptr [0x11b67b4c], 1 */
  w32((uint32_t)(0x11b67b4c), (0x1u));
  /* 11b377dd mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 11b377e0 mov byte ptr [0x11b67b48], cl */
  w8((uint32_t)(0x11b67b48), (CL));
  /* 11b377e6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b377ea jne 0x11b37833 */
  if (!C.zf) goto L_11b37833;
  /* 11b377ec cmp dword ptr [0x11b69638], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b69638))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b377f3 je 0x11b37821 */
  if (C.zf) goto L_11b37821;
  /* 11b377f5 mov edx, dword ptr [0x11b69634] */
  EDX = (r32((uint32_t)(0x11b69634)));
  /* 11b377fb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b377fe:;
  /* 11b377fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b37801 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b37804 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b37807 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3780a cmp ecx, dword ptr [0x11b69638] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11b69638))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37810 jb 0x11b37821 */
  if (C.cf) goto L_11b37821;
  /* 11b37812 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b37815 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37818 je 0x11b3781f */
  if (C.zf) goto L_11b3781f;
  /* 11b3781a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3781d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x11b3781fu);
L_11b3781f:;
  /* 11b3781f jmp 0x11b377fe */
  goto L_11b377fe;
L_11b37821:;
  /* 11b37821 push 0x11b65724 */
  push32((uint32_t)(0x11b65724u));
  /* 11b37826 push 0x11b6551c */
  push32((uint32_t)(0x11b6551cu));
  /* 11b3782b call 0x11b378c0 */
  push32(0x11b37830u); f_11b378c0();
  /* 11b37830 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b37833:;
  /* 11b37833 push 0x11b6592c */
  push32((uint32_t)(0x11b6592cu));
  /* 11b37838 push 0x11b65828 */
  push32((uint32_t)(0x11b65828u));
  /* 11b3783d call 0x11b378c0 */
  push32(0x11b37842u); f_11b378c0();
  /* 11b37842 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37845 cmp dword ptr [0x11b67b54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67b54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3784c jne 0x11b3786e */
  if (!C.zf) goto L_11b3786e;
  /* 11b3784e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b37850 call 0x11b391f0 */
  push32(0x11b37855u); f_11b391f0();
  /* 11b37855 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37858 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11b3785b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3785d je 0x11b3786e */
  if (C.zf) goto L_11b3786e;
  /* 11b3785f mov dword ptr [0x11b67b54], 1 */
  w32((uint32_t)(0x11b67b54), (0x1u));
  /* 11b37869 call 0x11b39b00 */
  push32(0x11b3786eu); f_11b39b00();
L_11b3786e:;
  /* 11b3786e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37872 je 0x11b3787b */
  if (C.zf) goto L_11b3787b;
  /* 11b37874 call 0x11b378b0 */
  push32(0x11b37879u); f_11b378b0();
  /* 11b37879 jmp 0x11b3788f */
  goto L_11b3788f;
L_11b3787b:;
  /* 11b3787b mov dword ptr [0x11b67b50], 1 */
  w32((uint32_t)(0x11b67b50), (0x1u));
  /* 11b37885 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b37888 push ecx */
  push32((uint32_t)(ECX));
  /* 11b37889 call dword ptr [0x11b6a3f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3f8))), 0x11b3788fu);
L_11b3788f:;
  /* 11b3788f mov esp, ebp */
  ESP = (EBP);
  /* 11b37891 pop ebp */
  EBP = (pop32());
  /* 11b37892 ret  */
  ESPCHK(0x11b377b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100078a0 @ 0x11b378a0 (15 bytes, 7 insns) */
void f_11b378a0(void) {
  FTRACE(0x11b378a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b378a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b378a1 mov ebp, esp */
  EBP = (ESP);
  /* 11b378a3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11b378a5 call 0x11b3a900 */
  push32(0x11b378aau); f_11b3a900();
  /* 11b378aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b378ad pop ebp */
  EBP = (pop32());
  /* 11b378ae ret  */
  ESPCHK(0x11b378a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100078b0 @ 0x11b378b0 (15 bytes, 7 insns) */
void f_11b378b0(void) {
  FTRACE(0x11b378b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b378b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b378b1 mov ebp, esp */
  EBP = (ESP);
  /* 11b378b3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11b378b5 call 0x11b3a9a0 */
  push32(0x11b378bau); f_11b3a9a0();
  /* 11b378ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b378bd pop ebp */
  EBP = (pop32());
  /* 11b378be ret  */
  ESPCHK(0x11b378b0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x11b378c0 (37 bytes, 16 insns) */
void f_11b378c0(void) {
  FTRACE(0x11b378c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b378c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b378c1 mov ebp, esp */
  EBP = (ESP);
L_11b378c3:;
  /* 11b378c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b378c6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b378c9 jae 0x11b378e3 */
  if (!C.cf) goto L_11b378e3;
  /* 11b378cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b378ce cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b378d1 je 0x11b378d8 */
  if (C.zf) goto L_11b378d8;
  /* 11b378d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b378d6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x11b378d8u);
L_11b378d8:;
  /* 11b378d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b378db add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b378de mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11b378e1 jmp 0x11b378c3 */
  goto L_11b378c3;
L_11b378e3:;
  /* 11b378e3 pop ebp */
  EBP = (pop32());
  /* 11b378e4 ret  */
  ESPCHK(0x11b378c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100078f0 @ 0x11b378f0 (804 bytes, 236 insns) */
void f_11b378f0(void) {
  FTRACE(0x11b378f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b378f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b378f1 mov ebp, esp */
  EBP = (ESP);
  /* 11b378f3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b378f6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 11b378fb push 0x11b628e8 */
  push32((uint32_t)(0x11b628e8u));
  /* 11b37900 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b37902 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11b37907 call 0x11b37ce0 */
  push32(0x11b3790cu); f_11b37ce0();
  /* 11b3790c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3790f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11b37912 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37916 jne 0x11b37922 */
  if (!C.zf) goto L_11b37922;
  /* 11b37918 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11b3791a call 0x11b36360 */
  push32(0x11b3791fu); f_11b36360();
  /* 11b3791f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b37922:;
  /* 11b37922 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b37925 mov dword ptr [0x11b694e0], eax */
  w32((uint32_t)(0x11b694e0), (EAX));
  /* 11b3792a mov dword ptr [0x11b6961c], 0x20 */
  w32((uint32_t)(0x11b6961c), (0x20u));
  /* 11b37934 jmp 0x11b3793f */
  goto L_11b3793f;
L_11b37936:;
  /* 11b37936 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b37939 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3793c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_11b3793f:;
  /* 11b3793f mov edx, dword ptr [0x11b694e0] */
  EDX = (r32((uint32_t)(0x11b694e0)));
  /* 11b37945 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3794b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3794e jae 0x11b37973 */
  if (!C.cf) goto L_11b37973;
  /* 11b37950 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b37953 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11b37957 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b3795a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11b37960 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b37963 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11b37967 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b3796a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11b37971 jmp 0x11b37936 */
  goto L_11b37936;
L_11b37973:;
  /* 11b37973 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 11b37976 push ecx */
  push32((uint32_t)(ECX));
  /* 11b37977 call dword ptr [0x11b6a39c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a39c))), 0x11b3797du);
  /* 11b3797d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 11b37980 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b37986 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b37988 je 0x11b37b15 */
  if (C.zf) goto L_11b37b15;
  /* 11b3798e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37992 je 0x11b37b15 */
  if (C.zf) goto L_11b37b15;
  /* 11b37998 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3799b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b3799d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 11b379a0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b379a3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b379a6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b379a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b379ac add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b379af mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 11b379b2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b379b9 jge 0x11b379c3 */
  if ((C.sf==C.of)) goto L_11b379c3;
  /* 11b379bb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 11b379be mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11b379c1 jmp 0x11b379ca */
  goto L_11b379ca;
L_11b379c3:;
  /* 11b379c3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_11b379ca:;
  /* 11b379ca mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11b379cd mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11b379d0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 11b379d7 jmp 0x11b379e2 */
  goto L_11b379e2;
L_11b379d9:;
  /* 11b379d9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11b379dc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b379df mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_11b379e2:;
  /* 11b379e2 mov ecx, dword ptr [0x11b6961c] */
  ECX = (r32((uint32_t)(0x11b6961c)));
  /* 11b379e8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b379eb jge 0x11b37a82 */
  if ((C.sf==C.of)) goto L_11b37a82;
  /* 11b379f1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11b379f6 push 0x11b628e8 */
  push32((uint32_t)(0x11b628e8u));
  /* 11b379fb push 2 */
  push32((uint32_t)(0x2u));
  /* 11b379fd push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11b37a02 call 0x11b37ce0 */
  push32(0x11b37a07u); f_11b37ce0();
  /* 11b37a07 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37a0a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11b37a0d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37a11 jne 0x11b37a1e */
  if (!C.zf) goto L_11b37a1e;
  /* 11b37a13 mov edx, dword ptr [0x11b6961c] */
  EDX = (r32((uint32_t)(0x11b6961c)));
  /* 11b37a19 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11b37a1c jmp 0x11b37a82 */
  goto L_11b37a82;
L_11b37a1e:;
  /* 11b37a1e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11b37a21 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b37a24 mov dword ptr [eax*4 + 0x11b694e0], ecx */
  w32((uint32_t)(EAX*4 + 0x11b694e0), (ECX));
  /* 11b37a2b mov edx, dword ptr [0x11b6961c] */
  EDX = (r32((uint32_t)(0x11b6961c)));
  /* 11b37a31 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37a34 mov dword ptr [0x11b6961c], edx */
  w32((uint32_t)(0x11b6961c), (EDX));
  /* 11b37a3a jmp 0x11b37a45 */
  goto L_11b37a45;
L_11b37a3c:;
  /* 11b37a3c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b37a3f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37a42 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_11b37a45:;
  /* 11b37a45 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11b37a48 mov edx, dword ptr [ecx*4 + 0x11b694e0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11b694e0)));
  /* 11b37a4f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37a55 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37a58 jae 0x11b37a7d */
  if (!C.cf) goto L_11b37a7d;
  /* 11b37a5a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b37a5d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11b37a61 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b37a64 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11b37a6a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b37a6d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11b37a71 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b37a74 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11b37a7b jmp 0x11b37a3c */
  goto L_11b37a3c;
L_11b37a7d:;
  /* 11b37a7d jmp 0x11b379d9 */
  goto L_11b379d9;
L_11b37a82:;
  /* 11b37a82 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11b37a89 jmp 0x11b37aa6 */
  goto L_11b37aa6;
L_11b37a8b:;
  /* 11b37a8b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11b37a8e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37a91 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 11b37a94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b37a97 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37a9a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b37a9d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 11b37aa0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37aa3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_11b37aa6:;
  /* 11b37aa6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11b37aa9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37aac jge 0x11b37b15 */
  if ((C.sf==C.of)) goto L_11b37b15;
  /* 11b37aae mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 11b37ab1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37ab4 je 0x11b37b10 */
  if (C.zf) goto L_11b37b10;
  /* 11b37ab6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b37ab9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b37abc and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11b37abf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b37ac1 je 0x11b37b10 */
  if (C.zf) goto L_11b37b10;
  /* 11b37ac3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b37ac6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b37ac9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11b37acc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b37ace jne 0x11b37ae0 */
  if (!C.zf) goto L_11b37ae0;
  /* 11b37ad0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11b37ad3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b37ad5 push edx */
  push32((uint32_t)(EDX));
  /* 11b37ad6 call dword ptr [0x11b6a408] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a408))), 0x11b37adcu);
  /* 11b37adc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b37ade je 0x11b37b10 */
  if (C.zf) goto L_11b37b10;
L_11b37ae0:;
  /* 11b37ae0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11b37ae3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11b37ae6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11b37ae9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11b37aec imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b37aef mov edx, dword ptr [eax*4 + 0x11b694e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11b694e0)));
  /* 11b37af6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37af8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 11b37afb mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b37afe mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11b37b01 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b37b03 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11b37b05 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b37b08 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b37b0b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b37b0d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_11b37b10:;
  /* 11b37b10 jmp 0x11b37a8b */
  goto L_11b37a8b;
L_11b37b15:;
  /* 11b37b15 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11b37b1c jmp 0x11b37b27 */
  goto L_11b37b27;
L_11b37b1e:;
  /* 11b37b1e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11b37b21 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37b24 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_11b37b27:;
  /* 11b37b27 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37b2b jge 0x11b37c04 */
  if ((C.sf==C.of)) goto L_11b37c04;
  /* 11b37b31 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11b37b34 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b37b37 mov edx, dword ptr [0x11b694e0] */
  EDX = (r32((uint32_t)(0x11b694e0)));
  /* 11b37b3d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37b3f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 11b37b42 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b37b45 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37b48 jne 0x11b37bf0 */
  if (!C.zf) goto L_11b37bf0;
  /* 11b37b4e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b37b51 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 11b37b55 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37b59 jne 0x11b37b64 */
  if (!C.zf) goto L_11b37b64;
  /* 11b37b5b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 11b37b62 jmp 0x11b37b74 */
  goto L_11b37b74;
L_11b37b64:;
  /* 11b37b64 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 11b37b67 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b37b6a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b37b6c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b37b6e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37b71 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_11b37b74:;
  /* 11b37b74 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11b37b77 push eax */
  push32((uint32_t)(EAX));
  /* 11b37b78 call dword ptr [0x11b6a2e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a2e4))), 0x11b37b7eu);
  /* 11b37b7e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 11b37b81 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37b85 je 0x11b37bdf */
  if (C.zf) goto L_11b37bdf;
  /* 11b37b87 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11b37b8a push ecx */
  push32((uint32_t)(ECX));
  /* 11b37b8b call dword ptr [0x11b6a408] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a408))), 0x11b37b91u);
  /* 11b37b91 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 11b37b94 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37b98 je 0x11b37bdf */
  if (C.zf) goto L_11b37bdf;
  /* 11b37b9a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b37b9d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11b37ba0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11b37ba2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 11b37ba5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b37bab cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37bae jne 0x11b37bc0 */
  if (!C.zf) goto L_11b37bc0;
  /* 11b37bb0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b37bb3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11b37bb6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 11b37bb8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b37bbb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 11b37bbe jmp 0x11b37bdd */
  goto L_11b37bdd;
L_11b37bc0:;
  /* 11b37bc0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 11b37bc3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b37bc9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37bcc jne 0x11b37bdd */
  if (!C.zf) goto L_11b37bdd;
  /* 11b37bce mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b37bd1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11b37bd4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 11b37bd7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b37bda mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_11b37bdd:;
  /* 11b37bdd jmp 0x11b37bee */
  goto L_11b37bee;
L_11b37bdf:;
  /* 11b37bdf mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b37be2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11b37be5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11b37be8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b37beb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_11b37bee:;
  /* 11b37bee jmp 0x11b37bff */
  goto L_11b37bff;
L_11b37bf0:;
  /* 11b37bf0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b37bf3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11b37bf6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 11b37bf9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b37bfc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_11b37bff:;
  /* 11b37bff jmp 0x11b37b1e */
  goto L_11b37b1e;
L_11b37c04:;
  /* 11b37c04 mov eax, dword ptr [0x11b6961c] */
  EAX = (r32((uint32_t)(0x11b6961c)));
  /* 11b37c09 push eax */
  push32((uint32_t)(EAX));
  /* 11b37c0a call dword ptr [0x11b6a404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a404))), 0x11b37c10u);
  /* 11b37c10 mov esp, ebp */
  ESP = (EBP);
  /* 11b37c12 pop ebp */
  EBP = (pop32());
  /* 11b37c13 ret  */
  ESPCHK(0x11b378f0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x11b37c20 (155 bytes, 45 insns) */
void f_11b37c20(void) {
  FTRACE(0x11b37c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b37c20 push ebp */
  push32((uint32_t)(EBP));
  /* 11b37c21 mov ebp, esp */
  EBP = (ESP);
  /* 11b37c23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b37c26 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b37c2d jmp 0x11b37c38 */
  goto L_11b37c38;
L_11b37c2f:;
  /* 11b37c2f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b37c32 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37c35 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11b37c38:;
  /* 11b37c38 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37c3c jge 0x11b37cb7 */
  if ((C.sf==C.of)) goto L_11b37cb7;
  /* 11b37c3e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b37c41 cmp dword ptr [ecx*4 + 0x11b694e0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11b694e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37c49 je 0x11b37cb2 */
  if (C.zf) goto L_11b37cb2;
  /* 11b37c4b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b37c4e mov eax, dword ptr [edx*4 + 0x11b694e0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11b694e0)));
  /* 11b37c55 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b37c58 jmp 0x11b37c63 */
  goto L_11b37c63;
L_11b37c5a:;
  /* 11b37c5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b37c5d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37c60 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b37c63:;
  /* 11b37c63 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b37c66 mov eax, dword ptr [edx*4 + 0x11b694e0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11b694e0)));
  /* 11b37c6d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37c72 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37c75 jae 0x11b37c8f */
  if (!C.cf) goto L_11b37c8f;
  /* 11b37c77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b37c7a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37c7e je 0x11b37c8d */
  if (C.zf) goto L_11b37c8d;
  /* 11b37c80 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b37c83 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37c86 push edx */
  push32((uint32_t)(EDX));
  /* 11b37c87 call dword ptr [0x11b6a398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a398))), 0x11b37c8du);
L_11b37c8d:;
  /* 11b37c8d jmp 0x11b37c5a */
  goto L_11b37c5a;
L_11b37c8f:;
  /* 11b37c8f push 2 */
  push32((uint32_t)(0x2u));
  /* 11b37c91 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b37c94 mov ecx, dword ptr [eax*4 + 0x11b694e0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11b694e0)));
  /* 11b37c9b push ecx */
  push32((uint32_t)(ECX));
  /* 11b37c9c call 0x11b38770 */
  push32(0x11b37ca1u); f_11b38770();
  /* 11b37ca1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37ca4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b37ca7 mov dword ptr [edx*4 + 0x11b694e0], 0 */
  w32((uint32_t)(EDX*4 + 0x11b694e0), (0x0u));
L_11b37cb2:;
  /* 11b37cb2 jmp 0x11b37c2f */
  goto L_11b37c2f;
L_11b37cb7:;
  /* 11b37cb7 mov esp, ebp */
  ESP = (EBP);
  /* 11b37cb9 pop ebp */
  EBP = (pop32());
  /* 11b37cba ret  */
  ESPCHK(0x11b37c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cc0 @ 0x11b37cc0 (29 bytes, 13 insns) */
void f_11b37cc0(void) {
  FTRACE(0x11b37cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b37cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b37cc1 mov ebp, esp */
  EBP = (ESP);
  /* 11b37cc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b37cc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b37cc7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b37cc9 mov eax, dword ptr [0x11b67db4] */
  EAX = (r32((uint32_t)(0x11b67db4)));
  /* 11b37cce push eax */
  push32((uint32_t)(EAX));
  /* 11b37ccf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b37cd2 push ecx */
  push32((uint32_t)(ECX));
  /* 11b37cd3 call 0x11b37d30 */
  push32(0x11b37cd8u); f_11b37d30();
  /* 11b37cd8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37cdb pop ebp */
  EBP = (pop32());
  /* 11b37cdc ret  */
  ESPCHK(0x11b37cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ce0 @ 0x11b37ce0 (35 bytes, 16 insns) */
void f_11b37ce0(void) {
  FTRACE(0x11b37ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b37ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b37ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11b37ce3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b37ce6 push eax */
  push32((uint32_t)(EAX));
  /* 11b37ce7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b37cea push ecx */
  push32((uint32_t)(ECX));
  /* 11b37ceb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b37cee push edx */
  push32((uint32_t)(EDX));
  /* 11b37cef mov eax, dword ptr [0x11b67db4] */
  EAX = (r32((uint32_t)(0x11b67db4)));
  /* 11b37cf4 push eax */
  push32((uint32_t)(EAX));
  /* 11b37cf5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b37cf8 push ecx */
  push32((uint32_t)(ECX));
  /* 11b37cf9 call 0x11b37d30 */
  push32(0x11b37cfeu); f_11b37d30();
  /* 11b37cfe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37d01 pop ebp */
  EBP = (pop32());
  /* 11b37d02 ret  */
  ESPCHK(0x11b37ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d10 @ 0x11b37d10 (27 bytes, 13 insns) */
void f_11b37d10(void) {
  FTRACE(0x11b37d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b37d10 push ebp */
  push32((uint32_t)(EBP));
  /* 11b37d11 mov ebp, esp */
  EBP = (ESP);
  /* 11b37d13 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b37d15 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b37d17 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b37d19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b37d1c push eax */
  push32((uint32_t)(EAX));
  /* 11b37d1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b37d20 push ecx */
  push32((uint32_t)(ECX));
  /* 11b37d21 call 0x11b37d30 */
  push32(0x11b37d26u); f_11b37d30();
  /* 11b37d26 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37d29 pop ebp */
  EBP = (pop32());
  /* 11b37d2a ret  */
  ESPCHK(0x11b37d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d30 @ 0x11b37d30 (94 bytes, 38 insns) */
void f_11b37d30(void) {
  FTRACE(0x11b37d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b37d30 push ebp */
  push32((uint32_t)(EBP));
  /* 11b37d31 mov ebp, esp */
  EBP = (ESP);
  /* 11b37d33 push ecx */
  push32((uint32_t)(ECX));
L_11b37d34:;
  /* 11b37d34 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b37d36 call 0x11b3a900 */
  push32(0x11b37d3bu); f_11b3a900();
  /* 11b37d3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37d3e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b37d41 push eax */
  push32((uint32_t)(EAX));
  /* 11b37d42 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b37d45 push ecx */
  push32((uint32_t)(ECX));
  /* 11b37d46 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b37d49 push edx */
  push32((uint32_t)(EDX));
  /* 11b37d4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b37d4d push eax */
  push32((uint32_t)(EAX));
  /* 11b37d4e call 0x11b37db0 */
  push32(0x11b37d53u); f_11b37db0();
  /* 11b37d53 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37d56 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b37d59 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b37d5b call 0x11b3a9a0 */
  push32(0x11b37d60u); f_11b3a9a0();
  /* 11b37d60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37d63 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37d67 jne 0x11b37d6f */
  if (!C.zf) goto L_11b37d6f;
  /* 11b37d69 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37d6d jne 0x11b37d74 */
  if (!C.zf) goto L_11b37d74;
L_11b37d6f:;
  /* 11b37d6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b37d72 jmp 0x11b37d8a */
  goto L_11b37d8a;
L_11b37d74:;
  /* 11b37d74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b37d77 push ecx */
  push32((uint32_t)(ECX));
  /* 11b37d78 call 0x11b3d920 */
  push32(0x11b37d7du); f_11b3d920();
  /* 11b37d7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37d80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b37d82 jne 0x11b37d88 */
  if (!C.zf) goto L_11b37d88;
  /* 11b37d84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b37d86 jmp 0x11b37d8a */
  goto L_11b37d8a;
L_11b37d88:;
  /* 11b37d88 jmp 0x11b37d34 */
  goto L_11b37d34;
L_11b37d8a:;
  /* 11b37d8a mov esp, ebp */
  ESP = (EBP);
  /* 11b37d8c pop ebp */
  EBP = (pop32());
  /* 11b37d8d ret  */
  ESPCHK(0x11b37d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d90 @ 0x11b37d90 (23 bytes, 11 insns) */
void f_11b37d90(void) {
  FTRACE(0x11b37d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b37d90 push ebp */
  push32((uint32_t)(EBP));
  /* 11b37d91 mov ebp, esp */
  EBP = (ESP);
  /* 11b37d93 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b37d95 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b37d97 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b37d99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b37d9c push eax */
  push32((uint32_t)(EAX));
  /* 11b37d9d call 0x11b37db0 */
  push32(0x11b37da2u); f_11b37db0();
  /* 11b37da2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37da5 pop ebp */
  EBP = (pop32());
  /* 11b37da6 ret  */
  ESPCHK(0x11b37d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007db0 @ 0x11b37db0 (787 bytes, 254 insns) */
void f_11b37db0(void) {
  FTRACE(0x11b37db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b37db0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b37db1 mov ebp, esp */
  EBP = (ESP);
  /* 11b37db3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b37db6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b37db7 push esi */
  push32((uint32_t)(ESI));
  /* 11b37db8 push edi */
  push32((uint32_t)(EDI));
  /* 11b37db9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11b37dc0 mov eax, dword ptr [0x11b65ab4] */
  EAX = (r32((uint32_t)(0x11b65ab4)));
  /* 11b37dc5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11b37dc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b37dca je 0x11b37dfc */
  if (C.zf) goto L_11b37dfc;
L_11b37dcc:;
  /* 11b37dcc call 0x11b38e80 */
  push32(0x11b37dd1u); f_11b38e80();
  /* 11b37dd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b37dd3 jne 0x11b37df6 */
  if (!C.zf) goto L_11b37df6;
  /* 11b37dd5 push 0x11b629dc */
  push32((uint32_t)(0x11b629dcu));
  /* 11b37dda push 0 */
  push32((uint32_t)(0x0u));
  /* 11b37ddc push 0x141 */
  push32((uint32_t)(0x141u));
  /* 11b37de1 push 0x11b629d0 */
  push32((uint32_t)(0x11b629d0u));
  /* 11b37de6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b37de8 call 0x11b36850 */
  push32(0x11b37dedu); f_11b36850();
  /* 11b37ded add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37df0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37df3 jne 0x11b37df6 */
  if (!C.zf) goto L_11b37df6;
  /* 11b37df5 int3  */
  x86_unimpl("int3 @ 0x11b37df5");
L_11b37df6:;
  /* 11b37df6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b37df8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b37dfa jne 0x11b37dcc */
  if (!C.zf) goto L_11b37dcc;
L_11b37dfc:;
  /* 11b37dfc mov edx, dword ptr [0x11b65ab8] */
  EDX = (r32((uint32_t)(0x11b65ab8)));
  /* 11b37e02 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11b37e05 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b37e08 cmp eax, dword ptr [0x11b65abc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11b65abc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37e0e jne 0x11b37e11 */
  if (!C.zf) goto L_11b37e11;
  /* 11b37e10 int3  */
  x86_unimpl("int3 @ 0x11b37e10");
L_11b37e11:;
  /* 11b37e11 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b37e14 push ecx */
  push32((uint32_t)(ECX));
  /* 11b37e15 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b37e18 push edx */
  push32((uint32_t)(EDX));
  /* 11b37e19 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b37e1c push eax */
  push32((uint32_t)(EAX));
  /* 11b37e1d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b37e20 push ecx */
  push32((uint32_t)(ECX));
  /* 11b37e21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b37e24 push edx */
  push32((uint32_t)(EDX));
  /* 11b37e25 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b37e27 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b37e29 call dword ptr [0x11b66030] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b66030))), 0x11b37e2fu);
  /* 11b37e2f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37e32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b37e34 jne 0x11b37e94 */
  if (!C.zf) goto L_11b37e94;
  /* 11b37e36 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37e3a je 0x11b37e67 */
  if (C.zf) goto L_11b37e67;
L_11b37e3c:;
  /* 11b37e3c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b37e3f push eax */
  push32((uint32_t)(EAX));
  /* 11b37e40 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b37e43 push ecx */
  push32((uint32_t)(ECX));
  /* 11b37e44 push 0x11b62998 */
  push32((uint32_t)(0x11b62998u));
  /* 11b37e49 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b37e4b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b37e4d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b37e4f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b37e51 call 0x11b36850 */
  push32(0x11b37e56u); f_11b36850();
  /* 11b37e56 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37e59 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37e5c jne 0x11b37e5f */
  if (!C.zf) goto L_11b37e5f;
  /* 11b37e5e int3  */
  x86_unimpl("int3 @ 0x11b37e5e");
L_11b37e5f:;
  /* 11b37e5f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b37e61 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b37e63 jne 0x11b37e3c */
  if (!C.zf) goto L_11b37e3c;
  /* 11b37e65 jmp 0x11b37e8d */
  goto L_11b37e8d;
L_11b37e67:;
  /* 11b37e67 push 0x11b62974 */
  push32((uint32_t)(0x11b62974u));
  /* 11b37e6c push 0x11b62970 */
  push32((uint32_t)(0x11b62970u));
  /* 11b37e71 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b37e73 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b37e75 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b37e77 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b37e79 call 0x11b36850 */
  push32(0x11b37e7eu); f_11b36850();
  /* 11b37e7e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37e81 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37e84 jne 0x11b37e87 */
  if (!C.zf) goto L_11b37e87;
  /* 11b37e86 int3  */
  x86_unimpl("int3 @ 0x11b37e86");
L_11b37e87:;
  /* 11b37e87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b37e89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b37e8b jne 0x11b37e67 */
  if (!C.zf) goto L_11b37e67;
L_11b37e8d:;
  /* 11b37e8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b37e8f jmp 0x11b380bc */
  goto L_11b380bc;
L_11b37e94:;
  /* 11b37e94 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b37e97 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b37e9d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37ea0 je 0x11b37eb6 */
  if (C.zf) goto L_11b37eb6;
  /* 11b37ea2 mov edx, dword ptr [0x11b65ab4] */
  EDX = (r32((uint32_t)(0x11b65ab4)));
  /* 11b37ea8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11b37eab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b37ead jne 0x11b37eb6 */
  if (!C.zf) goto L_11b37eb6;
  /* 11b37eaf mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_11b37eb6:;
  /* 11b37eb6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37eba ja 0x11b37ec7 */
  if ((!C.cf&&!C.zf)) goto L_11b37ec7;
  /* 11b37ebc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b37ebf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37ec2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37ec5 jbe 0x11b37ef3 */
  if ((C.cf||C.zf)) goto L_11b37ef3;
L_11b37ec7:;
  /* 11b37ec7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b37eca push ecx */
  push32((uint32_t)(ECX));
  /* 11b37ecb push 0x11b6294c */
  push32((uint32_t)(0x11b6294cu));
  /* 11b37ed0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b37ed2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b37ed4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b37ed6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b37ed8 call 0x11b36850 */
  push32(0x11b37eddu); f_11b36850();
  /* 11b37edd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37ee0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37ee3 jne 0x11b37ee6 */
  if (!C.zf) goto L_11b37ee6;
  /* 11b37ee5 int3  */
  x86_unimpl("int3 @ 0x11b37ee5");
L_11b37ee6:;
  /* 11b37ee6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b37ee8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b37eea jne 0x11b37ec7 */
  if (!C.zf) goto L_11b37ec7;
  /* 11b37eec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b37eee jmp 0x11b380bc */
  goto L_11b380bc;
L_11b37ef3:;
  /* 11b37ef3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b37ef6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b37efb cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37efe je 0x11b37f40 */
  if (C.zf) goto L_11b37f40;
  /* 11b37f00 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37f04 je 0x11b37f40 */
  if (C.zf) goto L_11b37f40;
  /* 11b37f06 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b37f09 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b37f0f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37f12 je 0x11b37f40 */
  if (C.zf) goto L_11b37f40;
  /* 11b37f14 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37f18 je 0x11b37f40 */
  if (C.zf) goto L_11b37f40;
L_11b37f1a:;
  /* 11b37f1a push 0x11b62918 */
  push32((uint32_t)(0x11b62918u));
  /* 11b37f1f push 0x11b62970 */
  push32((uint32_t)(0x11b62970u));
  /* 11b37f24 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b37f26 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b37f28 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b37f2a push 1 */
  push32((uint32_t)(0x1u));
  /* 11b37f2c call 0x11b36850 */
  push32(0x11b37f31u); f_11b36850();
  /* 11b37f31 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37f34 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37f37 jne 0x11b37f3a */
  if (!C.zf) goto L_11b37f3a;
  /* 11b37f39 int3  */
  x86_unimpl("int3 @ 0x11b37f39");
L_11b37f3a:;
  /* 11b37f3a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b37f3c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b37f3e jne 0x11b37f1a */
  if (!C.zf) goto L_11b37f1a;
L_11b37f40:;
  /* 11b37f40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b37f43 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37f46 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11b37f49 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b37f4c push ecx */
  push32((uint32_t)(ECX));
  /* 11b37f4d call 0x11b3d9d0 */
  push32(0x11b37f52u); f_11b3d9d0();
  /* 11b37f52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37f55 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b37f58 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37f5c jne 0x11b37f65 */
  if (!C.zf) goto L_11b37f65;
  /* 11b37f5e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b37f60 jmp 0x11b380bc */
  goto L_11b380bc;
L_11b37f65:;
  /* 11b37f65 mov edx, dword ptr [0x11b65ab8] */
  EDX = (r32((uint32_t)(0x11b65ab8)));
  /* 11b37f6b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37f6e mov dword ptr [0x11b65ab8], edx */
  w32((uint32_t)(0x11b65ab8), (EDX));
  /* 11b37f74 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37f78 je 0x11b37fc3 */
  if (C.zf) goto L_11b37fc3;
  /* 11b37f7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b37f7d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11b37f83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b37f86 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11b37f8d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b37f90 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11b37f97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b37f9a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 11b37fa1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b37fa4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b37fa7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11b37faa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b37fad mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 11b37fb4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b37fb7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 11b37fbe jmp 0x11b38063 */
  goto L_11b38063;
L_11b37fc3:;
  /* 11b37fc3 mov edx, dword ptr [0x11b67b5c] */
  EDX = (r32((uint32_t)(0x11b67b5c)));
  /* 11b37fc9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37fcc mov dword ptr [0x11b67b5c], edx */
  w32((uint32_t)(0x11b67b5c), (EDX));
  /* 11b37fd2 mov eax, dword ptr [0x11b67b64] */
  EAX = (r32((uint32_t)(0x11b67b64)));
  /* 11b37fd7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b37fda mov dword ptr [0x11b67b64], eax */
  w32((uint32_t)(0x11b67b64), (EAX));
  /* 11b37fdf mov ecx, dword ptr [0x11b67b64] */
  ECX = (r32((uint32_t)(0x11b67b64)));
  /* 11b37fe5 cmp ecx, dword ptr [0x11b67b68] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11b67b68))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b37feb jbe 0x11b37ff9 */
  if ((C.cf||C.zf)) goto L_11b37ff9;
  /* 11b37fed mov edx, dword ptr [0x11b67b64] */
  EDX = (r32((uint32_t)(0x11b67b64)));
  /* 11b37ff3 mov dword ptr [0x11b67b68], edx */
  w32((uint32_t)(0x11b67b68), (EDX));
L_11b37ff9:;
  /* 11b37ff9 cmp dword ptr [0x11b67b60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67b60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38000 je 0x11b3800f */
  if (C.zf) goto L_11b3800f;
  /* 11b38002 mov eax, dword ptr [0x11b67b60] */
  EAX = (r32((uint32_t)(0x11b67b60)));
  /* 11b38007 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3800a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11b3800d jmp 0x11b38018 */
  goto L_11b38018;
L_11b3800f:;
  /* 11b3800f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38012 mov dword ptr [0x11b67b58], edx */
  w32((uint32_t)(0x11b67b58), (EDX));
L_11b38018:;
  /* 11b38018 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3801b mov ecx, dword ptr [0x11b67b60] */
  ECX = (r32((uint32_t)(0x11b67b60)));
  /* 11b38021 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11b38023 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38026 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 11b3802d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38030 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b38033 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11b38036 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38039 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b3803c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 11b3803f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38042 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b38045 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11b38048 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3804b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3804e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11b38051 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38054 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b38057 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 11b3805a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3805d mov dword ptr [0x11b67b60], ecx */
  w32((uint32_t)(0x11b67b60), (ECX));
L_11b38063:;
  /* 11b38063 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b38065 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b38067 mov dl, byte ptr [0x11b65ac0] */
  DL = (r8((uint32_t)(0x11b65ac0)));
  /* 11b3806d push edx */
  push32((uint32_t)(EDX));
  /* 11b3806e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38071 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38074 push eax */
  push32((uint32_t)(EAX));
  /* 11b38075 call 0x11b3d530 */
  push32(0x11b3807au); f_11b3d530();
  /* 11b3807a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3807d push 4 */
  push32((uint32_t)(0x4u));
  /* 11b3807f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b38081 mov cl, byte ptr [0x11b65ac0] */
  CL = (r8((uint32_t)(0x11b65ac0)));
  /* 11b38087 push ecx */
  push32((uint32_t)(ECX));
  /* 11b38088 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3808b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3808e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 11b38092 push ecx */
  push32((uint32_t)(ECX));
  /* 11b38093 call 0x11b3d530 */
  push32(0x11b38098u); f_11b3d530();
  /* 11b38098 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3809b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3809e push edx */
  push32((uint32_t)(EDX));
  /* 11b3809f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b380a1 mov al, byte ptr [0x11b65ac2] */
  AL = (r8((uint32_t)(0x11b65ac2)));
  /* 11b380a6 push eax */
  push32((uint32_t)(EAX));
  /* 11b380a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b380aa add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b380ad push ecx */
  push32((uint32_t)(ECX));
  /* 11b380ae call 0x11b3d530 */
  push32(0x11b380b3u); f_11b3d530();
  /* 11b380b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b380b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b380b9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11b380bc:;
  /* 11b380bc pop edi */
  EDI = (pop32());
  /* 11b380bd pop esi */
  ESI = (pop32());
  /* 11b380be pop ebx */
  EBX = (pop32());
  /* 11b380bf mov esp, ebp */
  ESP = (EBP);
  /* 11b380c1 pop ebp */
  EBP = (pop32());
  /* 11b380c2 ret  */
  ESPCHK(0x11b37db0u, _esp0);
  ESP += 4; return;
}

/* FUN_100080d0 @ 0x11b380d0 (27 bytes, 13 insns) */
void f_11b380d0(void) {
  FTRACE(0x11b380d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b380d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b380d1 mov ebp, esp */
  EBP = (ESP);
  /* 11b380d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b380d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b380d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b380d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b380dc push eax */
  push32((uint32_t)(EAX));
  /* 11b380dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b380e0 push ecx */
  push32((uint32_t)(ECX));
  /* 11b380e1 call 0x11b380f0 */
  push32(0x11b380e6u); f_11b380f0();
  /* 11b380e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b380e9 pop ebp */
  EBP = (pop32());
  /* 11b380ea ret  */
  ESPCHK(0x11b380d0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x11b380f0 (96 bytes, 37 insns) */
void f_11b380f0(void) {
  FTRACE(0x11b380f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b380f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b380f1 mov ebp, esp */
  EBP = (ESP);
  /* 11b380f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b380f6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b380f9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b380fd mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11b38100 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b38103 push ecx */
  push32((uint32_t)(ECX));
  /* 11b38104 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b38107 push edx */
  push32((uint32_t)(EDX));
  /* 11b38108 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3810b push eax */
  push32((uint32_t)(EAX));
  /* 11b3810c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3810f push ecx */
  push32((uint32_t)(ECX));
  /* 11b38110 call 0x11b37ce0 */
  push32(0x11b38115u); f_11b37ce0();
  /* 11b38115 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38118 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b3811b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3811f je 0x11b38149 */
  if (C.zf) goto L_11b38149;
  /* 11b38121 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b38124 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11b38127 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3812a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3812d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b38130:;
  /* 11b38130 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b38133 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38136 jae 0x11b38149 */
  if (!C.cf) goto L_11b38149;
  /* 11b38138 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3813b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11b3813e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b38141 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38144 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b38147 jmp 0x11b38130 */
  goto L_11b38130;
L_11b38149:;
  /* 11b38149 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3814c mov esp, ebp */
  ESP = (EBP);
  /* 11b3814e pop ebp */
  EBP = (pop32());
  /* 11b3814f ret  */
  ESPCHK(0x11b380f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008150 @ 0x11b38150 (27 bytes, 13 insns) */
void f_11b38150(void) {
  FTRACE(0x11b38150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b38150 push ebp */
  push32((uint32_t)(EBP));
  /* 11b38151 mov ebp, esp */
  EBP = (ESP);
  /* 11b38153 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38155 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38157 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b38159 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3815c push eax */
  push32((uint32_t)(EAX));
  /* 11b3815d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b38160 push ecx */
  push32((uint32_t)(ECX));
  /* 11b38161 call 0x11b38170 */
  push32(0x11b38166u); f_11b38170();
  /* 11b38166 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38169 pop ebp */
  EBP = (pop32());
  /* 11b3816a ret  */
  ESPCHK(0x11b38150u, _esp0);
  ESP += 4; return;
}

/* FUN_10008170 @ 0x11b38170 (64 bytes, 27 insns) */
void f_11b38170(void) {
  FTRACE(0x11b38170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b38170 push ebp */
  push32((uint32_t)(EBP));
  /* 11b38171 mov ebp, esp */
  EBP = (ESP);
  /* 11b38173 push ecx */
  push32((uint32_t)(ECX));
  /* 11b38174 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b38176 call 0x11b3a900 */
  push32(0x11b3817bu); f_11b3a900();
  /* 11b3817b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3817e push 1 */
  push32((uint32_t)(0x1u));
  /* 11b38180 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b38183 push eax */
  push32((uint32_t)(EAX));
  /* 11b38184 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b38187 push ecx */
  push32((uint32_t)(ECX));
  /* 11b38188 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3818b push edx */
  push32((uint32_t)(EDX));
  /* 11b3818c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3818f push eax */
  push32((uint32_t)(EAX));
  /* 11b38190 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b38193 push ecx */
  push32((uint32_t)(ECX));
  /* 11b38194 call 0x11b381b0 */
  push32(0x11b38199u); f_11b381b0();
  /* 11b38199 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3819c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b3819f push 9 */
  push32((uint32_t)(0x9u));
  /* 11b381a1 call 0x11b3a9a0 */
  push32(0x11b381a6u); f_11b3a9a0();
  /* 11b381a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b381a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b381ac mov esp, ebp */
  ESP = (EBP);
  /* 11b381ae pop ebp */
  EBP = (pop32());
  /* 11b381af ret  */
  ESPCHK(0x11b38170u, _esp0);
  ESP += 4; return;
}

/* FUN_100081b0 @ 0x11b381b0 (1297 bytes, 431 insns) */
void f_11b381b0(void) {
  FTRACE(0x11b381b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b381b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b381b1 mov ebp, esp */
  EBP = (ESP);
  /* 11b381b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b381b6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b381b7 push esi */
  push32((uint32_t)(ESI));
  /* 11b381b8 push edi */
  push32((uint32_t)(EDI));
  /* 11b381b9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11b381c0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b381c4 jne 0x11b381e3 */
  if (!C.zf) goto L_11b381e3;
  /* 11b381c6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b381c9 push eax */
  push32((uint32_t)(EAX));
  /* 11b381ca mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b381cd push ecx */
  push32((uint32_t)(ECX));
  /* 11b381ce mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b381d1 push edx */
  push32((uint32_t)(EDX));
  /* 11b381d2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b381d5 push eax */
  push32((uint32_t)(EAX));
  /* 11b381d6 call 0x11b37ce0 */
  push32(0x11b381dbu); f_11b37ce0();
  /* 11b381db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b381de jmp 0x11b386ba */
  goto L_11b386ba;
L_11b381e3:;
  /* 11b381e3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b381e7 je 0x11b38206 */
  if (C.zf) goto L_11b38206;
  /* 11b381e9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b381ed jne 0x11b38206 */
  if (!C.zf) goto L_11b38206;
  /* 11b381ef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b381f2 push ecx */
  push32((uint32_t)(ECX));
  /* 11b381f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b381f6 push edx */
  push32((uint32_t)(EDX));
  /* 11b381f7 call 0x11b38770 */
  push32(0x11b381fcu); f_11b38770();
  /* 11b381fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b381ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b38201 jmp 0x11b386ba */
  goto L_11b386ba;
L_11b38206:;
  /* 11b38206 mov eax, dword ptr [0x11b65ab4] */
  EAX = (r32((uint32_t)(0x11b65ab4)));
  /* 11b3820b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11b3820e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b38210 je 0x11b38242 */
  if (C.zf) goto L_11b38242;
L_11b38212:;
  /* 11b38212 call 0x11b38e80 */
  push32(0x11b38217u); f_11b38e80();
  /* 11b38217 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b38219 jne 0x11b3823c */
  if (!C.zf) goto L_11b3823c;
  /* 11b3821b push 0x11b629dc */
  push32((uint32_t)(0x11b629dcu));
  /* 11b38220 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38222 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 11b38227 push 0x11b629d0 */
  push32((uint32_t)(0x11b629d0u));
  /* 11b3822c push 2 */
  push32((uint32_t)(0x2u));
  /* 11b3822e call 0x11b36850 */
  push32(0x11b38233u); f_11b36850();
  /* 11b38233 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38236 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38239 jne 0x11b3823c */
  if (!C.zf) goto L_11b3823c;
  /* 11b3823b int3  */
  x86_unimpl("int3 @ 0x11b3823b");
L_11b3823c:;
  /* 11b3823c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3823e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b38240 jne 0x11b38212 */
  if (!C.zf) goto L_11b38212;
L_11b38242:;
  /* 11b38242 mov edx, dword ptr [0x11b65ab8] */
  EDX = (r32((uint32_t)(0x11b65ab8)));
  /* 11b38248 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11b3824b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3824e cmp eax, dword ptr [0x11b65abc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11b65abc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38254 jne 0x11b38257 */
  if (!C.zf) goto L_11b38257;
  /* 11b38256 int3  */
  x86_unimpl("int3 @ 0x11b38256");
L_11b38257:;
  /* 11b38257 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b3825a push ecx */
  push32((uint32_t)(ECX));
  /* 11b3825b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b3825e push edx */
  push32((uint32_t)(EDX));
  /* 11b3825f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b38262 push eax */
  push32((uint32_t)(EAX));
  /* 11b38263 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b38266 push ecx */
  push32((uint32_t)(ECX));
  /* 11b38267 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3826a push edx */
  push32((uint32_t)(EDX));
  /* 11b3826b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3826e push eax */
  push32((uint32_t)(EAX));
  /* 11b3826f push 2 */
  push32((uint32_t)(0x2u));
  /* 11b38271 call dword ptr [0x11b66030] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b66030))), 0x11b38277u);
  /* 11b38277 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3827a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3827c jne 0x11b382dc */
  if (!C.zf) goto L_11b382dc;
  /* 11b3827e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38282 je 0x11b382af */
  if (C.zf) goto L_11b382af;
L_11b38284:;
  /* 11b38284 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b38287 push ecx */
  push32((uint32_t)(ECX));
  /* 11b38288 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b3828b push edx */
  push32((uint32_t)(EDX));
  /* 11b3828c push 0x11b62b58 */
  push32((uint32_t)(0x11b62b58u));
  /* 11b38291 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38293 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38295 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38297 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38299 call 0x11b36850 */
  push32(0x11b3829eu); f_11b36850();
  /* 11b3829e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b382a1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b382a4 jne 0x11b382a7 */
  if (!C.zf) goto L_11b382a7;
  /* 11b382a6 int3  */
  x86_unimpl("int3 @ 0x11b382a6");
L_11b382a7:;
  /* 11b382a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b382a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b382ab jne 0x11b38284 */
  if (!C.zf) goto L_11b38284;
  /* 11b382ad jmp 0x11b382d5 */
  goto L_11b382d5;
L_11b382af:;
  /* 11b382af push 0x11b62b34 */
  push32((uint32_t)(0x11b62b34u));
  /* 11b382b4 push 0x11b62970 */
  push32((uint32_t)(0x11b62970u));
  /* 11b382b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b382bb push 0 */
  push32((uint32_t)(0x0u));
  /* 11b382bd push 0 */
  push32((uint32_t)(0x0u));
  /* 11b382bf push 0 */
  push32((uint32_t)(0x0u));
  /* 11b382c1 call 0x11b36850 */
  push32(0x11b382c6u); f_11b36850();
  /* 11b382c6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b382c9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b382cc jne 0x11b382cf */
  if (!C.zf) goto L_11b382cf;
  /* 11b382ce int3  */
  x86_unimpl("int3 @ 0x11b382ce");
L_11b382cf:;
  /* 11b382cf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b382d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b382d3 jne 0x11b382af */
  if (!C.zf) goto L_11b382af;
L_11b382d5:;
  /* 11b382d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b382d7 jmp 0x11b386ba */
  goto L_11b386ba;
L_11b382dc:;
  /* 11b382dc cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b382e0 jbe 0x11b3830e */
  if ((C.cf||C.zf)) goto L_11b3830e;
L_11b382e2:;
  /* 11b382e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b382e5 push edx */
  push32((uint32_t)(EDX));
  /* 11b382e6 push 0x11b62b04 */
  push32((uint32_t)(0x11b62b04u));
  /* 11b382eb push 0 */
  push32((uint32_t)(0x0u));
  /* 11b382ed push 0 */
  push32((uint32_t)(0x0u));
  /* 11b382ef push 0 */
  push32((uint32_t)(0x0u));
  /* 11b382f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b382f3 call 0x11b36850 */
  push32(0x11b382f8u); f_11b36850();
  /* 11b382f8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b382fb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b382fe jne 0x11b38301 */
  if (!C.zf) goto L_11b38301;
  /* 11b38300 int3  */
  x86_unimpl("int3 @ 0x11b38300");
L_11b38301:;
  /* 11b38301 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b38303 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b38305 jne 0x11b382e2 */
  if (!C.zf) goto L_11b382e2;
  /* 11b38307 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b38309 jmp 0x11b386ba */
  goto L_11b386ba;
L_11b3830e:;
  /* 11b3830e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38312 je 0x11b38356 */
  if (C.zf) goto L_11b38356;
  /* 11b38314 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b38317 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b3831d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38320 je 0x11b38356 */
  if (C.zf) goto L_11b38356;
  /* 11b38322 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b38325 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b3832b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3832e je 0x11b38356 */
  if (C.zf) goto L_11b38356;
L_11b38330:;
  /* 11b38330 push 0x11b62918 */
  push32((uint32_t)(0x11b62918u));
  /* 11b38335 push 0x11b62970 */
  push32((uint32_t)(0x11b62970u));
  /* 11b3833a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3833c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3833e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38340 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b38342 call 0x11b36850 */
  push32(0x11b38347u); f_11b36850();
  /* 11b38347 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3834a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3834d jne 0x11b38350 */
  if (!C.zf) goto L_11b38350;
  /* 11b3834f int3  */
  x86_unimpl("int3 @ 0x11b3834f");
L_11b38350:;
  /* 11b38350 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b38352 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b38354 jne 0x11b38330 */
  if (!C.zf) goto L_11b38330;
L_11b38356:;
  /* 11b38356 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b38359 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3835a call 0x11b392e0 */
  push32(0x11b3835fu); f_11b392e0();
  /* 11b3835f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38362 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b38364 jne 0x11b38387 */
  if (!C.zf) goto L_11b38387;
  /* 11b38366 push 0x11b62ae0 */
  push32((uint32_t)(0x11b62ae0u));
  /* 11b3836b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3836d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 11b38372 push 0x11b629d0 */
  push32((uint32_t)(0x11b629d0u));
  /* 11b38377 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b38379 call 0x11b36850 */
  push32(0x11b3837eu); f_11b36850();
  /* 11b3837e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38381 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38384 jne 0x11b38387 */
  if (!C.zf) goto L_11b38387;
  /* 11b38386 int3  */
  x86_unimpl("int3 @ 0x11b38386");
L_11b38387:;
  /* 11b38387 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b38389 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3838b jne 0x11b38356 */
  if (!C.zf) goto L_11b38356;
  /* 11b3838d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b38390 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b38393 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b38396 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b38399 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3839d jne 0x11b383a6 */
  if (!C.zf) goto L_11b383a6;
  /* 11b3839f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11b383a6:;
  /* 11b383a6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b383aa je 0x11b383ea */
  if (C.zf) goto L_11b383ea;
L_11b383ac:;
  /* 11b383ac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b383af cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b383b6 jne 0x11b383c1 */
  if (!C.zf) goto L_11b383c1;
  /* 11b383b8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b383bb cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b383bf je 0x11b383e2 */
  if (C.zf) goto L_11b383e2;
L_11b383c1:;
  /* 11b383c1 push 0x11b62a98 */
  push32((uint32_t)(0x11b62a98u));
  /* 11b383c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b383c8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 11b383cd push 0x11b629d0 */
  push32((uint32_t)(0x11b629d0u));
  /* 11b383d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b383d4 call 0x11b36850 */
  push32(0x11b383d9u); f_11b36850();
  /* 11b383d9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b383dc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b383df jne 0x11b383e2 */
  if (!C.zf) goto L_11b383e2;
  /* 11b383e1 int3  */
  x86_unimpl("int3 @ 0x11b383e1");
L_11b383e2:;
  /* 11b383e2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b383e4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b383e6 jne 0x11b383ac */
  if (!C.zf) goto L_11b383ac;
  /* 11b383e8 jmp 0x11b3844e */
  goto L_11b3844e;
L_11b383ea:;
  /* 11b383ea mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b383ed mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b383f0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b383f5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b383f8 jne 0x11b3840f */
  if (!C.zf) goto L_11b3840f;
  /* 11b383fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b383fd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b38403 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38406 jne 0x11b3840f */
  if (!C.zf) goto L_11b3840f;
  /* 11b38408 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_11b3840f:;
  /* 11b3840f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b38412 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b38415 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3841a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3841d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b38423 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38425 je 0x11b38448 */
  if (C.zf) goto L_11b38448;
  /* 11b38427 push 0x11b62a5c */
  push32((uint32_t)(0x11b62a5cu));
  /* 11b3842c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3842e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 11b38433 push 0x11b629d0 */
  push32((uint32_t)(0x11b629d0u));
  /* 11b38438 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b3843a call 0x11b36850 */
  push32(0x11b3843fu); f_11b36850();
  /* 11b3843f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38442 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38445 jne 0x11b38448 */
  if (!C.zf) goto L_11b38448;
  /* 11b38447 int3  */
  x86_unimpl("int3 @ 0x11b38447");
L_11b38448:;
  /* 11b38448 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3844a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3844c jne 0x11b3840f */
  if (!C.zf) goto L_11b3840f;
L_11b3844e:;
  /* 11b3844e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38452 je 0x11b38479 */
  if (C.zf) goto L_11b38479;
  /* 11b38454 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b38457 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3845a push eax */
  push32((uint32_t)(EAX));
  /* 11b3845b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3845e push ecx */
  push32((uint32_t)(ECX));
  /* 11b3845f call 0x11b3db00 */
  push32(0x11b38464u); f_11b3db00();
  /* 11b38464 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38467 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b3846a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3846e jne 0x11b38477 */
  if (!C.zf) goto L_11b38477;
  /* 11b38470 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b38472 jmp 0x11b386ba */
  goto L_11b386ba;
L_11b38477:;
  /* 11b38477 jmp 0x11b3849c */
  goto L_11b3849c;
L_11b38479:;
  /* 11b38479 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3847c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3847f push edx */
  push32((uint32_t)(EDX));
  /* 11b38480 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b38483 push eax */
  push32((uint32_t)(EAX));
  /* 11b38484 call 0x11b3da50 */
  push32(0x11b38489u); f_11b3da50();
  /* 11b38489 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3848c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b3848f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38493 jne 0x11b3849c */
  if (!C.zf) goto L_11b3849c;
  /* 11b38495 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b38497 jmp 0x11b386ba */
  goto L_11b386ba;
L_11b3849c:;
  /* 11b3849c mov ecx, dword ptr [0x11b65ab8] */
  ECX = (r32((uint32_t)(0x11b65ab8)));
  /* 11b384a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b384a5 mov dword ptr [0x11b65ab8], ecx */
  w32((uint32_t)(0x11b65ab8), (ECX));
  /* 11b384ab cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b384af jne 0x11b38507 */
  if (!C.zf) goto L_11b38507;
  /* 11b384b1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b384b4 mov eax, dword ptr [0x11b67b5c] */
  EAX = (r32((uint32_t)(0x11b67b5c)));
  /* 11b384b9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b384bc mov dword ptr [0x11b67b5c], eax */
  w32((uint32_t)(0x11b67b5c), (EAX));
  /* 11b384c1 mov ecx, dword ptr [0x11b67b5c] */
  ECX = (r32((uint32_t)(0x11b67b5c)));
  /* 11b384c7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b384ca mov dword ptr [0x11b67b5c], ecx */
  w32((uint32_t)(0x11b67b5c), (ECX));
  /* 11b384d0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b384d3 mov eax, dword ptr [0x11b67b64] */
  EAX = (r32((uint32_t)(0x11b67b64)));
  /* 11b384d8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b384db mov dword ptr [0x11b67b64], eax */
  w32((uint32_t)(0x11b67b64), (EAX));
  /* 11b384e0 mov ecx, dword ptr [0x11b67b64] */
  ECX = (r32((uint32_t)(0x11b67b64)));
  /* 11b384e6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b384e9 mov dword ptr [0x11b67b64], ecx */
  w32((uint32_t)(0x11b67b64), (ECX));
  /* 11b384ef mov edx, dword ptr [0x11b67b64] */
  EDX = (r32((uint32_t)(0x11b67b64)));
  /* 11b384f5 cmp edx, dword ptr [0x11b67b68] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11b67b68))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b384fb jbe 0x11b38507 */
  if ((C.cf||C.zf)) goto L_11b38507;
  /* 11b384fd mov eax, dword ptr [0x11b67b64] */
  EAX = (r32((uint32_t)(0x11b67b64)));
  /* 11b38502 mov dword ptr [0x11b67b68], eax */
  w32((uint32_t)(0x11b67b68), (EAX));
L_11b38507:;
  /* 11b38507 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3850a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3850d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b38510 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b38513 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b38516 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38519 jbe 0x11b3853f */
  if ((C.cf||C.zf)) goto L_11b3853f;
  /* 11b3851b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3851e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b38521 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b38524 push edx */
  push32((uint32_t)(EDX));
  /* 11b38525 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b38527 mov al, byte ptr [0x11b65ac2] */
  AL = (r8((uint32_t)(0x11b65ac2)));
  /* 11b3852c push eax */
  push32((uint32_t)(EAX));
  /* 11b3852d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b38530 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38533 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38536 push edx */
  push32((uint32_t)(EDX));
  /* 11b38537 call 0x11b3d530 */
  push32(0x11b3853cu); f_11b3d530();
  /* 11b3853c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b3853f:;
  /* 11b3853f push 4 */
  push32((uint32_t)(0x4u));
  /* 11b38541 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b38543 mov al, byte ptr [0x11b65ac0] */
  AL = (r8((uint32_t)(0x11b65ac0)));
  /* 11b38548 push eax */
  push32((uint32_t)(EAX));
  /* 11b38549 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3854c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3854f push ecx */
  push32((uint32_t)(ECX));
  /* 11b38550 call 0x11b3d530 */
  push32(0x11b38555u); f_11b3d530();
  /* 11b38555 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38558 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3855c jne 0x11b38579 */
  if (!C.zf) goto L_11b38579;
  /* 11b3855e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b38561 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b38564 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11b38567 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3856a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b3856d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 11b38570 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b38573 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b38576 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_11b38579:;
  /* 11b38579 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3857c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3857f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_11b38582:;
  /* 11b38582 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38586 jne 0x11b385b7 */
  if (!C.zf) goto L_11b385b7;
  /* 11b38588 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3858c jne 0x11b38596 */
  if (!C.zf) goto L_11b38596;
  /* 11b3858e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b38591 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38594 je 0x11b385b7 */
  if (C.zf) goto L_11b385b7;
L_11b38596:;
  /* 11b38596 push 0x11b62a28 */
  push32((uint32_t)(0x11b62a28u));
  /* 11b3859b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3859d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 11b385a2 push 0x11b629d0 */
  push32((uint32_t)(0x11b629d0u));
  /* 11b385a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b385a9 call 0x11b36850 */
  push32(0x11b385aeu); f_11b36850();
  /* 11b385ae add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b385b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b385b4 jne 0x11b385b7 */
  if (!C.zf) goto L_11b385b7;
  /* 11b385b6 int3  */
  x86_unimpl("int3 @ 0x11b385b6");
L_11b385b7:;
  /* 11b385b7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b385b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b385bb jne 0x11b38582 */
  if (!C.zf) goto L_11b38582;
  /* 11b385bd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b385c0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b385c3 je 0x11b385cb */
  if (C.zf) goto L_11b385cb;
  /* 11b385c5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b385c9 je 0x11b385d3 */
  if (C.zf) goto L_11b385d3;
L_11b385cb:;
  /* 11b385cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b385ce jmp 0x11b386ba */
  goto L_11b386ba;
L_11b385d3:;
  /* 11b385d3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b385d6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b385d9 je 0x11b385eb */
  if (C.zf) goto L_11b385eb;
  /* 11b385db mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b385de mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b385e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b385e3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b385e6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11b385e9 jmp 0x11b38627 */
  goto L_11b38627;
L_11b385eb:;
  /* 11b385eb mov eax, dword ptr [0x11b67b58] */
  EAX = (r32((uint32_t)(0x11b67b58)));
  /* 11b385f0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b385f3 je 0x11b38616 */
  if (C.zf) goto L_11b38616;
  /* 11b385f5 push 0x11b62a0c */
  push32((uint32_t)(0x11b62a0cu));
  /* 11b385fa push 0 */
  push32((uint32_t)(0x0u));
  /* 11b385fc push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 11b38601 push 0x11b629d0 */
  push32((uint32_t)(0x11b629d0u));
  /* 11b38606 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b38608 call 0x11b36850 */
  push32(0x11b3860du); f_11b36850();
  /* 11b3860d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38610 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38613 jne 0x11b38616 */
  if (!C.zf) goto L_11b38616;
  /* 11b38615 int3  */
  x86_unimpl("int3 @ 0x11b38615");
L_11b38616:;
  /* 11b38616 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b38618 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3861a jne 0x11b385eb */
  if (!C.zf) goto L_11b385eb;
  /* 11b3861c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3861f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b38622 mov dword ptr [0x11b67b58], eax */
  w32((uint32_t)(0x11b67b58), (EAX));
L_11b38627:;
  /* 11b38627 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3862a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3862e je 0x11b3863f */
  if (C.zf) goto L_11b3863f;
  /* 11b38630 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b38633 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b38636 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b38639 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b3863b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11b3863d jmp 0x11b3867a */
  goto L_11b3867a;
L_11b3863f:;
  /* 11b3863f mov eax, dword ptr [0x11b67b60] */
  EAX = (r32((uint32_t)(0x11b67b60)));
  /* 11b38644 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38647 je 0x11b3866a */
  if (C.zf) goto L_11b3866a;
  /* 11b38649 push 0x11b629f0 */
  push32((uint32_t)(0x11b629f0u));
  /* 11b3864e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38650 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 11b38655 push 0x11b629d0 */
  push32((uint32_t)(0x11b629d0u));
  /* 11b3865a push 2 */
  push32((uint32_t)(0x2u));
  /* 11b3865c call 0x11b36850 */
  push32(0x11b38661u); f_11b36850();
  /* 11b38661 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38664 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38667 jne 0x11b3866a */
  if (!C.zf) goto L_11b3866a;
  /* 11b38669 int3  */
  x86_unimpl("int3 @ 0x11b38669");
L_11b3866a:;
  /* 11b3866a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3866c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3866e jne 0x11b3863f */
  if (!C.zf) goto L_11b3863f;
  /* 11b38670 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b38673 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b38675 mov dword ptr [0x11b67b60], eax */
  w32((uint32_t)(0x11b67b60), (EAX));
L_11b3867a:;
  /* 11b3867a cmp dword ptr [0x11b67b60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67b60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38681 je 0x11b38691 */
  if (C.zf) goto L_11b38691;
  /* 11b38683 mov ecx, dword ptr [0x11b67b60] */
  ECX = (r32((uint32_t)(0x11b67b60)));
  /* 11b38689 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3868c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11b3868f jmp 0x11b38699 */
  goto L_11b38699;
L_11b38691:;
  /* 11b38691 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b38694 mov dword ptr [0x11b67b58], eax */
  w32((uint32_t)(0x11b67b58), (EAX));
L_11b38699:;
  /* 11b38699 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3869c mov edx, dword ptr [0x11b67b60] */
  EDX = (r32((uint32_t)(0x11b67b60)));
  /* 11b386a2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11b386a4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b386a7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11b386ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b386b1 mov dword ptr [0x11b67b60], ecx */
  w32((uint32_t)(0x11b67b60), (ECX));
  /* 11b386b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11b386ba:;
  /* 11b386ba pop edi */
  EDI = (pop32());
  /* 11b386bb pop esi */
  ESI = (pop32());
  /* 11b386bc pop ebx */
  EBX = (pop32());
  /* 11b386bd mov esp, ebp */
  ESP = (EBP);
  /* 11b386bf pop ebp */
  EBP = (pop32());
  /* 11b386c0 ret  */
  ESPCHK(0x11b381b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100086d0 @ 0x11b386d0 (27 bytes, 13 insns) */
void f_11b386d0(void) {
  FTRACE(0x11b386d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b386d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b386d1 mov ebp, esp */
  EBP = (ESP);
  /* 11b386d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b386d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b386d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b386d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b386dc push eax */
  push32((uint32_t)(EAX));
  /* 11b386dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b386e0 push ecx */
  push32((uint32_t)(ECX));
  /* 11b386e1 call 0x11b386f0 */
  push32(0x11b386e6u); f_11b386f0();
  /* 11b386e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b386e9 pop ebp */
  EBP = (pop32());
  /* 11b386ea ret  */
  ESPCHK(0x11b386d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100086f0 @ 0x11b386f0 (64 bytes, 27 insns) */
void f_11b386f0(void) {
  FTRACE(0x11b386f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b386f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b386f1 mov ebp, esp */
  EBP = (ESP);
  /* 11b386f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b386f4 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b386f6 call 0x11b3a900 */
  push32(0x11b386fbu); f_11b3a900();
  /* 11b386fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b386fe push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38700 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b38703 push eax */
  push32((uint32_t)(EAX));
  /* 11b38704 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b38707 push ecx */
  push32((uint32_t)(ECX));
  /* 11b38708 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3870b push edx */
  push32((uint32_t)(EDX));
  /* 11b3870c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3870f push eax */
  push32((uint32_t)(EAX));
  /* 11b38710 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b38713 push ecx */
  push32((uint32_t)(ECX));
  /* 11b38714 call 0x11b381b0 */
  push32(0x11b38719u); f_11b381b0();
  /* 11b38719 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3871c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b3871f push 9 */
  push32((uint32_t)(0x9u));
  /* 11b38721 call 0x11b3a9a0 */
  push32(0x11b38726u); f_11b3a9a0();
  /* 11b38726 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38729 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3872c mov esp, ebp */
  ESP = (EBP);
  /* 11b3872e pop ebp */
  EBP = (pop32());
  /* 11b3872f ret  */
  ESPCHK(0x11b386f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008730 @ 0x11b38730 (19 bytes, 9 insns) */
void f_11b38730(void) {
  FTRACE(0x11b38730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b38730 push ebp */
  push32((uint32_t)(EBP));
  /* 11b38731 mov ebp, esp */
  EBP = (ESP);
  /* 11b38733 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b38735 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b38738 push eax */
  push32((uint32_t)(EAX));
  /* 11b38739 call 0x11b38770 */
  push32(0x11b3873eu); f_11b38770();
  /* 11b3873e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38741 pop ebp */
  EBP = (pop32());
  /* 11b38742 ret  */
  ESPCHK(0x11b38730u, _esp0);
  ESP += 4; return;
}

/* FUN_10008750 @ 0x11b38750 (19 bytes, 9 insns) */
void f_11b38750(void) {
  FTRACE(0x11b38750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b38750 push ebp */
  push32((uint32_t)(EBP));
  /* 11b38751 mov ebp, esp */
  EBP = (ESP);
  /* 11b38753 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b38755 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b38758 push eax */
  push32((uint32_t)(EAX));
  /* 11b38759 call 0x11b387a0 */
  push32(0x11b3875eu); f_11b387a0();
  /* 11b3875e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38761 pop ebp */
  EBP = (pop32());
  /* 11b38762 ret  */
  ESPCHK(0x11b38750u, _esp0);
  ESP += 4; return;
}

/* FUN_10008770 @ 0x11b38770 (41 bytes, 16 insns) */
void f_11b38770(void) {
  FTRACE(0x11b38770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b38770 push ebp */
  push32((uint32_t)(EBP));
  /* 11b38771 mov ebp, esp */
  EBP = (ESP);
  /* 11b38773 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b38775 call 0x11b3a900 */
  push32(0x11b3877au); f_11b3a900();
  /* 11b3877a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3877d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b38780 push eax */
  push32((uint32_t)(EAX));
  /* 11b38781 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b38784 push ecx */
  push32((uint32_t)(ECX));
  /* 11b38785 call 0x11b387a0 */
  push32(0x11b3878au); f_11b387a0();
  /* 11b3878a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3878d push 9 */
  push32((uint32_t)(0x9u));
  /* 11b3878f call 0x11b3a9a0 */
  push32(0x11b38794u); f_11b3a9a0();
  /* 11b38794 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38797 pop ebp */
  EBP = (pop32());
  /* 11b38798 ret  */
  ESPCHK(0x11b38770u, _esp0);
  ESP += 4; return;
}

/* FUN_100087a0 @ 0x11b387a0 (1004 bytes, 342 insns) */
void f_11b387a0(void) {
  FTRACE(0x11b387a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b387a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b387a1 mov ebp, esp */
  EBP = (ESP);
  /* 11b387a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b387a4 push ebx */
  push32((uint32_t)(EBX));
  /* 11b387a5 push esi */
  push32((uint32_t)(ESI));
  /* 11b387a6 push edi */
  push32((uint32_t)(EDI));
  /* 11b387a7 mov eax, dword ptr [0x11b65ab4] */
  EAX = (r32((uint32_t)(0x11b65ab4)));
  /* 11b387ac and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11b387af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b387b1 je 0x11b387e3 */
  if (C.zf) goto L_11b387e3;
L_11b387b3:;
  /* 11b387b3 call 0x11b38e80 */
  push32(0x11b387b8u); f_11b38e80();
  /* 11b387b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b387ba jne 0x11b387dd */
  if (!C.zf) goto L_11b387dd;
  /* 11b387bc push 0x11b629dc */
  push32((uint32_t)(0x11b629dcu));
  /* 11b387c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b387c3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 11b387c8 push 0x11b629d0 */
  push32((uint32_t)(0x11b629d0u));
  /* 11b387cd push 2 */
  push32((uint32_t)(0x2u));
  /* 11b387cf call 0x11b36850 */
  push32(0x11b387d4u); f_11b36850();
  /* 11b387d4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b387d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b387da jne 0x11b387dd */
  if (!C.zf) goto L_11b387dd;
  /* 11b387dc int3  */
  x86_unimpl("int3 @ 0x11b387dc");
L_11b387dd:;
  /* 11b387dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b387df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b387e1 jne 0x11b387b3 */
  if (!C.zf) goto L_11b387b3;
L_11b387e3:;
  /* 11b387e3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b387e7 jne 0x11b387ee */
  if (!C.zf) goto L_11b387ee;
  /* 11b387e9 jmp 0x11b38b85 */
  goto L_11b38b85;
L_11b387ee:;
  /* 11b387ee push 0 */
  push32((uint32_t)(0x0u));
  /* 11b387f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b387f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b387f4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b387f7 push edx */
  push32((uint32_t)(EDX));
  /* 11b387f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b387fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b387fd push eax */
  push32((uint32_t)(EAX));
  /* 11b387fe push 3 */
  push32((uint32_t)(0x3u));
  /* 11b38800 call dword ptr [0x11b66030] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b66030))), 0x11b38806u);
  /* 11b38806 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38809 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3880b jne 0x11b38838 */
  if (!C.zf) goto L_11b38838;
L_11b3880d:;
  /* 11b3880d push 0x11b62ca0 */
  push32((uint32_t)(0x11b62ca0u));
  /* 11b38812 push 0x11b62970 */
  push32((uint32_t)(0x11b62970u));
  /* 11b38817 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38819 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3881b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3881d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3881f call 0x11b36850 */
  push32(0x11b38824u); f_11b36850();
  /* 11b38824 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38827 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3882a jne 0x11b3882d */
  if (!C.zf) goto L_11b3882d;
  /* 11b3882c int3  */
  x86_unimpl("int3 @ 0x11b3882c");
L_11b3882d:;
  /* 11b3882d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3882f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b38831 jne 0x11b3880d */
  if (!C.zf) goto L_11b3880d;
  /* 11b38833 jmp 0x11b38b85 */
  goto L_11b38b85;
L_11b38838:;
  /* 11b38838 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3883b push edx */
  push32((uint32_t)(EDX));
  /* 11b3883c call 0x11b392e0 */
  push32(0x11b38841u); f_11b392e0();
  /* 11b38841 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38844 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b38846 jne 0x11b38869 */
  if (!C.zf) goto L_11b38869;
  /* 11b38848 push 0x11b62ae0 */
  push32((uint32_t)(0x11b62ae0u));
  /* 11b3884d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3884f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 11b38854 push 0x11b629d0 */
  push32((uint32_t)(0x11b629d0u));
  /* 11b38859 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b3885b call 0x11b36850 */
  push32(0x11b38860u); f_11b36850();
  /* 11b38860 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38863 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38866 jne 0x11b38869 */
  if (!C.zf) goto L_11b38869;
  /* 11b38868 int3  */
  x86_unimpl("int3 @ 0x11b38868");
L_11b38869:;
  /* 11b38869 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3886b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3886d jne 0x11b38838 */
  if (!C.zf) goto L_11b38838;
  /* 11b3886f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b38872 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b38875 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b38878:;
  /* 11b38878 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3887b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b3887e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b38883 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38886 je 0x11b388cb */
  if (C.zf) goto L_11b388cb;
  /* 11b38888 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3888b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3888f je 0x11b388cb */
  if (C.zf) goto L_11b388cb;
  /* 11b38891 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38894 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b38897 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3889c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3889f je 0x11b388cb */
  if (C.zf) goto L_11b388cb;
  /* 11b388a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b388a4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b388a8 je 0x11b388cb */
  if (C.zf) goto L_11b388cb;
  /* 11b388aa push 0x11b62c78 */
  push32((uint32_t)(0x11b62c78u));
  /* 11b388af push 0 */
  push32((uint32_t)(0x0u));
  /* 11b388b1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 11b388b6 push 0x11b629d0 */
  push32((uint32_t)(0x11b629d0u));
  /* 11b388bb push 2 */
  push32((uint32_t)(0x2u));
  /* 11b388bd call 0x11b36850 */
  push32(0x11b388c2u); f_11b36850();
  /* 11b388c2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b388c5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b388c8 jne 0x11b388cb */
  if (!C.zf) goto L_11b388cb;
  /* 11b388ca int3  */
  x86_unimpl("int3 @ 0x11b388ca");
L_11b388cb:;
  /* 11b388cb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b388cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b388cf jne 0x11b38878 */
  if (!C.zf) goto L_11b38878;
  /* 11b388d1 mov eax, dword ptr [0x11b65ab4] */
  EAX = (r32((uint32_t)(0x11b65ab4)));
  /* 11b388d6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11b388d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b388db jne 0x11b389a6 */
  if (!C.zf) goto L_11b389a6;
  /* 11b388e1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b388e3 mov cl, byte ptr [0x11b65ac0] */
  CL = (r8((uint32_t)(0x11b65ac0)));
  /* 11b388e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b388ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b388ed add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b388f0 push edx */
  push32((uint32_t)(EDX));
  /* 11b388f1 call 0x11b38df0 */
  push32(0x11b388f6u); f_11b38df0();
  /* 11b388f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b388f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b388fb jne 0x11b38940 */
  if (!C.zf) goto L_11b38940;
L_11b388fd:;
  /* 11b388fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38900 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38903 push eax */
  push32((uint32_t)(EAX));
  /* 11b38904 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38907 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11b3890a push edx */
  push32((uint32_t)(EDX));
  /* 11b3890b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3890e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11b38911 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b38917 mov edx, dword ptr [ecx*4 + 0x11b65ac4] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11b65ac4)));
  /* 11b3891e push edx */
  push32((uint32_t)(EDX));
  /* 11b3891f push 0x11b62c4c */
  push32((uint32_t)(0x11b62c4cu));
  /* 11b38924 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38926 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38928 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3892a push 1 */
  push32((uint32_t)(0x1u));
  /* 11b3892c call 0x11b36850 */
  push32(0x11b38931u); f_11b36850();
  /* 11b38931 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38934 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38937 jne 0x11b3893a */
  if (!C.zf) goto L_11b3893a;
  /* 11b38939 int3  */
  x86_unimpl("int3 @ 0x11b38939");
L_11b3893a:;
  /* 11b3893a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3893c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3893e jne 0x11b388fd */
  if (!C.zf) goto L_11b388fd;
L_11b38940:;
  /* 11b38940 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b38942 mov cl, byte ptr [0x11b65ac0] */
  CL = (r8((uint32_t)(0x11b65ac0)));
  /* 11b38948 push ecx */
  push32((uint32_t)(ECX));
  /* 11b38949 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3894c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11b3894f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38952 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 11b38956 push edx */
  push32((uint32_t)(EDX));
  /* 11b38957 call 0x11b38df0 */
  push32(0x11b3895cu); f_11b38df0();
  /* 11b3895c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3895f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b38961 jne 0x11b389a6 */
  if (!C.zf) goto L_11b389a6;
L_11b38963:;
  /* 11b38963 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38966 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38969 push eax */
  push32((uint32_t)(EAX));
  /* 11b3896a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3896d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11b38970 push edx */
  push32((uint32_t)(EDX));
  /* 11b38971 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38974 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11b38977 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b3897d mov edx, dword ptr [ecx*4 + 0x11b65ac4] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11b65ac4)));
  /* 11b38984 push edx */
  push32((uint32_t)(EDX));
  /* 11b38985 push 0x11b62c20 */
  push32((uint32_t)(0x11b62c20u));
  /* 11b3898a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3898c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3898e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38990 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b38992 call 0x11b36850 */
  push32(0x11b38997u); f_11b36850();
  /* 11b38997 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3899a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3899d jne 0x11b389a0 */
  if (!C.zf) goto L_11b389a0;
  /* 11b3899f int3  */
  x86_unimpl("int3 @ 0x11b3899f");
L_11b389a0:;
  /* 11b389a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b389a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b389a4 jne 0x11b38963 */
  if (!C.zf) goto L_11b38963;
L_11b389a6:;
  /* 11b389a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b389a9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b389ad jne 0x11b38a1b */
  if (!C.zf) goto L_11b38a1b;
L_11b389af:;
  /* 11b389af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b389b2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b389b9 jne 0x11b389c4 */
  if (!C.zf) goto L_11b389c4;
  /* 11b389bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b389be cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b389c2 je 0x11b389e5 */
  if (C.zf) goto L_11b389e5;
L_11b389c4:;
  /* 11b389c4 push 0x11b62be0 */
  push32((uint32_t)(0x11b62be0u));
  /* 11b389c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b389cb push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 11b389d0 push 0x11b629d0 */
  push32((uint32_t)(0x11b629d0u));
  /* 11b389d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b389d7 call 0x11b36850 */
  push32(0x11b389dcu); f_11b36850();
  /* 11b389dc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b389df cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b389e2 jne 0x11b389e5 */
  if (!C.zf) goto L_11b389e5;
  /* 11b389e4 int3  */
  x86_unimpl("int3 @ 0x11b389e4");
L_11b389e5:;
  /* 11b389e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b389e7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b389e9 jne 0x11b389af */
  if (!C.zf) goto L_11b389af;
  /* 11b389eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b389ee mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11b389f1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b389f4 push eax */
  push32((uint32_t)(EAX));
  /* 11b389f5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b389f7 mov cl, byte ptr [0x11b65ac1] */
  CL = (r8((uint32_t)(0x11b65ac1)));
  /* 11b389fd push ecx */
  push32((uint32_t)(ECX));
  /* 11b389fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38a01 push edx */
  push32((uint32_t)(EDX));
  /* 11b38a02 call 0x11b3d530 */
  push32(0x11b38a07u); f_11b3d530();
  /* 11b38a07 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38a0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38a0d push eax */
  push32((uint32_t)(EAX));
  /* 11b38a0e call 0x11b3dcf0 */
  push32(0x11b38a13u); f_11b3dcf0();
  /* 11b38a13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38a16 jmp 0x11b38b85 */
  goto L_11b38b85;
L_11b38a1b:;
  /* 11b38a1b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38a1e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38a22 jne 0x11b38a31 */
  if (!C.zf) goto L_11b38a31;
  /* 11b38a24 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38a28 jne 0x11b38a31 */
  if (!C.zf) goto L_11b38a31;
  /* 11b38a2a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_11b38a31:;
  /* 11b38a31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38a34 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b38a37 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38a3a je 0x11b38a5d */
  if (C.zf) goto L_11b38a5d;
  /* 11b38a3c push 0x11b62bc0 */
  push32((uint32_t)(0x11b62bc0u));
  /* 11b38a41 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38a43 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 11b38a48 push 0x11b629d0 */
  push32((uint32_t)(0x11b629d0u));
  /* 11b38a4d push 2 */
  push32((uint32_t)(0x2u));
  /* 11b38a4f call 0x11b36850 */
  push32(0x11b38a54u); f_11b36850();
  /* 11b38a54 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38a57 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38a5a jne 0x11b38a5d */
  if (!C.zf) goto L_11b38a5d;
  /* 11b38a5c int3  */
  x86_unimpl("int3 @ 0x11b38a5c");
L_11b38a5d:;
  /* 11b38a5d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b38a5f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b38a61 jne 0x11b38a31 */
  if (!C.zf) goto L_11b38a31;
  /* 11b38a63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38a66 mov eax, dword ptr [0x11b67b64] */
  EAX = (r32((uint32_t)(0x11b67b64)));
  /* 11b38a6b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b38a6e mov dword ptr [0x11b67b64], eax */
  w32((uint32_t)(0x11b67b64), (EAX));
  /* 11b38a73 mov ecx, dword ptr [0x11b65ab4] */
  ECX = (r32((uint32_t)(0x11b65ab4)));
  /* 11b38a79 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11b38a7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b38a7e jne 0x11b38b5c */
  if (!C.zf) goto L_11b38b5c;
  /* 11b38a84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38a87 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38a8a je 0x11b38a9c */
  if (C.zf) goto L_11b38a9c;
  /* 11b38a8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38a8f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b38a91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38a94 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b38a97 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11b38a9a jmp 0x11b38ada */
  goto L_11b38ada;
L_11b38a9c:;
  /* 11b38a9c mov ecx, dword ptr [0x11b67b58] */
  ECX = (r32((uint32_t)(0x11b67b58)));
  /* 11b38aa2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38aa5 je 0x11b38ac8 */
  if (C.zf) goto L_11b38ac8;
  /* 11b38aa7 push 0x11b62ba8 */
  push32((uint32_t)(0x11b62ba8u));
  /* 11b38aac push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38aae push 0x42a */
  push32((uint32_t)(0x42au));
  /* 11b38ab3 push 0x11b629d0 */
  push32((uint32_t)(0x11b629d0u));
  /* 11b38ab8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b38aba call 0x11b36850 */
  push32(0x11b38abfu); f_11b36850();
  /* 11b38abf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38ac2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38ac5 jne 0x11b38ac8 */
  if (!C.zf) goto L_11b38ac8;
  /* 11b38ac7 int3  */
  x86_unimpl("int3 @ 0x11b38ac7");
L_11b38ac8:;
  /* 11b38ac8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b38aca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b38acc jne 0x11b38a9c */
  if (!C.zf) goto L_11b38a9c;
  /* 11b38ace mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38ad1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b38ad4 mov dword ptr [0x11b67b58], ecx */
  w32((uint32_t)(0x11b67b58), (ECX));
L_11b38ada:;
  /* 11b38ada mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38add cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38ae1 je 0x11b38af2 */
  if (C.zf) goto L_11b38af2;
  /* 11b38ae3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38ae6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b38ae9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38aec mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b38aee mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11b38af0 jmp 0x11b38b2f */
  goto L_11b38b2f;
L_11b38af2:;
  /* 11b38af2 mov ecx, dword ptr [0x11b67b60] */
  ECX = (r32((uint32_t)(0x11b67b60)));
  /* 11b38af8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38afb je 0x11b38b1e */
  if (C.zf) goto L_11b38b1e;
  /* 11b38afd push 0x11b62b90 */
  push32((uint32_t)(0x11b62b90u));
  /* 11b38b02 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38b04 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 11b38b09 push 0x11b629d0 */
  push32((uint32_t)(0x11b629d0u));
  /* 11b38b0e push 2 */
  push32((uint32_t)(0x2u));
  /* 11b38b10 call 0x11b36850 */
  push32(0x11b38b15u); f_11b36850();
  /* 11b38b15 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38b18 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38b1b jne 0x11b38b1e */
  if (!C.zf) goto L_11b38b1e;
  /* 11b38b1d int3  */
  x86_unimpl("int3 @ 0x11b38b1d");
L_11b38b1e:;
  /* 11b38b1e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b38b20 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b38b22 jne 0x11b38af2 */
  if (!C.zf) goto L_11b38af2;
  /* 11b38b24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38b27 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b38b29 mov dword ptr [0x11b67b60], ecx */
  w32((uint32_t)(0x11b67b60), (ECX));
L_11b38b2f:;
  /* 11b38b2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38b32 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11b38b35 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38b38 push eax */
  push32((uint32_t)(EAX));
  /* 11b38b39 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b38b3b mov cl, byte ptr [0x11b65ac1] */
  CL = (r8((uint32_t)(0x11b65ac1)));
  /* 11b38b41 push ecx */
  push32((uint32_t)(ECX));
  /* 11b38b42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38b45 push edx */
  push32((uint32_t)(EDX));
  /* 11b38b46 call 0x11b3d530 */
  push32(0x11b38b4bu); f_11b3d530();
  /* 11b38b4b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38b4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38b51 push eax */
  push32((uint32_t)(EAX));
  /* 11b38b52 call 0x11b3dcf0 */
  push32(0x11b38b57u); f_11b3dcf0();
  /* 11b38b57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38b5a jmp 0x11b38b85 */
  goto L_11b38b85;
L_11b38b5c:;
  /* 11b38b5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38b5f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 11b38b66 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38b69 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11b38b6c push eax */
  push32((uint32_t)(EAX));
  /* 11b38b6d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b38b6f mov cl, byte ptr [0x11b65ac1] */
  CL = (r8((uint32_t)(0x11b65ac1)));
  /* 11b38b75 push ecx */
  push32((uint32_t)(ECX));
  /* 11b38b76 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38b79 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38b7c push edx */
  push32((uint32_t)(EDX));
  /* 11b38b7d call 0x11b3d530 */
  push32(0x11b38b82u); f_11b3d530();
  /* 11b38b82 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b38b85:;
  /* 11b38b85 pop edi */
  EDI = (pop32());
  /* 11b38b86 pop esi */
  ESI = (pop32());
  /* 11b38b87 pop ebx */
  EBX = (pop32());
  /* 11b38b88 mov esp, ebp */
  ESP = (EBP);
  /* 11b38b8a pop ebp */
  EBP = (pop32());
  /* 11b38b8b ret  */
  ESPCHK(0x11b387a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b90 @ 0x11b38b90 (19 bytes, 9 insns) */
void f_11b38b90(void) {
  FTRACE(0x11b38b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b38b90 push ebp */
  push32((uint32_t)(EBP));
  /* 11b38b91 mov ebp, esp */
  EBP = (ESP);
  /* 11b38b93 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b38b95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b38b98 push eax */
  push32((uint32_t)(EAX));
  /* 11b38b99 call 0x11b38bb0 */
  push32(0x11b38b9eu); f_11b38bb0();
  /* 11b38b9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38ba1 pop ebp */
  EBP = (pop32());
  /* 11b38ba2 ret  */
  ESPCHK(0x11b38b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10008bb0 @ 0x11b38bb0 (342 bytes, 119 insns) */
void f_11b38bb0(void) {
  FTRACE(0x11b38bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b38bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b38bb1 mov ebp, esp */
  EBP = (ESP);
  /* 11b38bb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b38bb6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b38bb7 push esi */
  push32((uint32_t)(ESI));
  /* 11b38bb8 push edi */
  push32((uint32_t)(EDI));
  /* 11b38bb9 mov eax, dword ptr [0x11b65ab4] */
  EAX = (r32((uint32_t)(0x11b65ab4)));
  /* 11b38bbe and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11b38bc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b38bc3 je 0x11b38bf5 */
  if (C.zf) goto L_11b38bf5;
L_11b38bc5:;
  /* 11b38bc5 call 0x11b38e80 */
  push32(0x11b38bcau); f_11b38e80();
  /* 11b38bca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b38bcc jne 0x11b38bef */
  if (!C.zf) goto L_11b38bef;
  /* 11b38bce push 0x11b629dc */
  push32((uint32_t)(0x11b629dcu));
  /* 11b38bd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38bd5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 11b38bda push 0x11b629d0 */
  push32((uint32_t)(0x11b629d0u));
  /* 11b38bdf push 2 */
  push32((uint32_t)(0x2u));
  /* 11b38be1 call 0x11b36850 */
  push32(0x11b38be6u); f_11b36850();
  /* 11b38be6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38be9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38bec jne 0x11b38bef */
  if (!C.zf) goto L_11b38bef;
  /* 11b38bee int3  */
  x86_unimpl("int3 @ 0x11b38bee");
L_11b38bef:;
  /* 11b38bef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b38bf1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b38bf3 jne 0x11b38bc5 */
  if (!C.zf) goto L_11b38bc5;
L_11b38bf5:;
  /* 11b38bf5 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b38bf7 call 0x11b3a900 */
  push32(0x11b38bfcu); f_11b3a900();
  /* 11b38bfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b38bff:;
  /* 11b38bff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b38c02 push edx */
  push32((uint32_t)(EDX));
  /* 11b38c03 call 0x11b392e0 */
  push32(0x11b38c08u); f_11b392e0();
  /* 11b38c08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38c0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b38c0d jne 0x11b38c30 */
  if (!C.zf) goto L_11b38c30;
  /* 11b38c0f push 0x11b62ae0 */
  push32((uint32_t)(0x11b62ae0u));
  /* 11b38c14 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38c16 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 11b38c1b push 0x11b629d0 */
  push32((uint32_t)(0x11b629d0u));
  /* 11b38c20 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b38c22 call 0x11b36850 */
  push32(0x11b38c27u); f_11b36850();
  /* 11b38c27 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38c2a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38c2d jne 0x11b38c30 */
  if (!C.zf) goto L_11b38c30;
  /* 11b38c2f int3  */
  x86_unimpl("int3 @ 0x11b38c2f");
L_11b38c30:;
  /* 11b38c30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b38c32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b38c34 jne 0x11b38bff */
  if (!C.zf) goto L_11b38bff;
  /* 11b38c36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b38c39 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b38c3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11b38c3f:;
  /* 11b38c3f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b38c42 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b38c45 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b38c4a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38c4d je 0x11b38c92 */
  if (C.zf) goto L_11b38c92;
  /* 11b38c4f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b38c52 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38c56 je 0x11b38c92 */
  if (C.zf) goto L_11b38c92;
  /* 11b38c58 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b38c5b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b38c5e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b38c63 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38c66 je 0x11b38c92 */
  if (C.zf) goto L_11b38c92;
  /* 11b38c68 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b38c6b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38c6f je 0x11b38c92 */
  if (C.zf) goto L_11b38c92;
  /* 11b38c71 push 0x11b62c78 */
  push32((uint32_t)(0x11b62c78u));
  /* 11b38c76 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38c78 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 11b38c7d push 0x11b629d0 */
  push32((uint32_t)(0x11b629d0u));
  /* 11b38c82 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b38c84 call 0x11b36850 */
  push32(0x11b38c89u); f_11b36850();
  /* 11b38c89 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38c8c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38c8f jne 0x11b38c92 */
  if (!C.zf) goto L_11b38c92;
  /* 11b38c91 int3  */
  x86_unimpl("int3 @ 0x11b38c91");
L_11b38c92:;
  /* 11b38c92 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b38c94 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b38c96 jne 0x11b38c3f */
  if (!C.zf) goto L_11b38c3f;
  /* 11b38c98 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b38c9b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38c9f jne 0x11b38cae */
  if (!C.zf) goto L_11b38cae;
  /* 11b38ca1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38ca5 jne 0x11b38cae */
  if (!C.zf) goto L_11b38cae;
  /* 11b38ca7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_11b38cae:;
  /* 11b38cae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b38cb1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38cb5 je 0x11b38ce9 */
  if (C.zf) goto L_11b38ce9;
L_11b38cb7:;
  /* 11b38cb7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b38cba mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b38cbd cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38cc0 je 0x11b38ce3 */
  if (C.zf) goto L_11b38ce3;
  /* 11b38cc2 push 0x11b62bc0 */
  push32((uint32_t)(0x11b62bc0u));
  /* 11b38cc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38cc9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 11b38cce push 0x11b629d0 */
  push32((uint32_t)(0x11b629d0u));
  /* 11b38cd3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b38cd5 call 0x11b36850 */
  push32(0x11b38cdau); f_11b36850();
  /* 11b38cda add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38cdd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38ce0 jne 0x11b38ce3 */
  if (!C.zf) goto L_11b38ce3;
  /* 11b38ce2 int3  */
  x86_unimpl("int3 @ 0x11b38ce2");
L_11b38ce3:;
  /* 11b38ce3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b38ce5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b38ce7 jne 0x11b38cb7 */
  if (!C.zf) goto L_11b38cb7;
L_11b38ce9:;
  /* 11b38ce9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b38cec mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11b38cef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b38cf2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b38cf4 call 0x11b3a9a0 */
  push32(0x11b38cf9u); f_11b3a9a0();
  /* 11b38cf9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38cfc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38cff pop edi */
  EDI = (pop32());
  /* 11b38d00 pop esi */
  ESI = (pop32());
  /* 11b38d01 pop ebx */
  EBX = (pop32());
  /* 11b38d02 mov esp, ebp */
  ESP = (EBP);
  /* 11b38d04 pop ebp */
  EBP = (pop32());
  /* 11b38d05 ret  */
  ESPCHK(0x11b38bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d10 @ 0x11b38d10 (28 bytes, 11 insns) */
void f_11b38d10(void) {
  FTRACE(0x11b38d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b38d10 push ebp */
  push32((uint32_t)(EBP));
  /* 11b38d11 mov ebp, esp */
  EBP = (ESP);
  /* 11b38d13 push ecx */
  push32((uint32_t)(ECX));
  /* 11b38d14 mov eax, dword ptr [0x11b65abc] */
  EAX = (r32((uint32_t)(0x11b65abc)));
  /* 11b38d19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b38d1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b38d1f mov dword ptr [0x11b65abc], ecx */
  w32((uint32_t)(0x11b65abc), (ECX));
  /* 11b38d25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38d28 mov esp, ebp */
  ESP = (EBP);
  /* 11b38d2a pop ebp */
  EBP = (pop32());
  /* 11b38d2b ret  */
  ESPCHK(0x11b38d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d30 @ 0x11b38d30 (157 bytes, 59 insns) */
void f_11b38d30(void) {
  FTRACE(0x11b38d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b38d30 push ebp */
  push32((uint32_t)(EBP));
  /* 11b38d31 mov ebp, esp */
  EBP = (ESP);
  /* 11b38d33 push ecx */
  push32((uint32_t)(ECX));
  /* 11b38d34 push ebx */
  push32((uint32_t)(EBX));
  /* 11b38d35 push esi */
  push32((uint32_t)(ESI));
  /* 11b38d36 push edi */
  push32((uint32_t)(EDI));
  /* 11b38d37 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b38d39 call 0x11b3a900 */
  push32(0x11b38d3eu); f_11b3a900();
  /* 11b38d3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38d41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b38d44 push eax */
  push32((uint32_t)(EAX));
  /* 11b38d45 call 0x11b392e0 */
  push32(0x11b38d4au); f_11b392e0();
  /* 11b38d4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38d4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b38d4f je 0x11b38dbc */
  if (C.zf) goto L_11b38dbc;
  /* 11b38d51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b38d54 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b38d57 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b38d5a:;
  /* 11b38d5a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38d5d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b38d60 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b38d65 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38d68 je 0x11b38dad */
  if (C.zf) goto L_11b38dad;
  /* 11b38d6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38d6d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38d71 je 0x11b38dad */
  if (C.zf) goto L_11b38dad;
  /* 11b38d73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38d76 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b38d79 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b38d7e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38d81 je 0x11b38dad */
  if (C.zf) goto L_11b38dad;
  /* 11b38d83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38d86 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38d8a je 0x11b38dad */
  if (C.zf) goto L_11b38dad;
  /* 11b38d8c push 0x11b62c78 */
  push32((uint32_t)(0x11b62c78u));
  /* 11b38d91 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38d93 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 11b38d98 push 0x11b629d0 */
  push32((uint32_t)(0x11b629d0u));
  /* 11b38d9d push 2 */
  push32((uint32_t)(0x2u));
  /* 11b38d9f call 0x11b36850 */
  push32(0x11b38da4u); f_11b36850();
  /* 11b38da4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38da7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38daa jne 0x11b38dad */
  if (!C.zf) goto L_11b38dad;
  /* 11b38dac int3  */
  x86_unimpl("int3 @ 0x11b38dac");
L_11b38dad:;
  /* 11b38dad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b38daf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b38db1 jne 0x11b38d5a */
  if (!C.zf) goto L_11b38d5a;
  /* 11b38db3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38db6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b38db9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_11b38dbc:;
  /* 11b38dbc push 9 */
  push32((uint32_t)(0x9u));
  /* 11b38dbe call 0x11b3a9a0 */
  push32(0x11b38dc3u); f_11b3a9a0();
  /* 11b38dc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38dc6 pop edi */
  EDI = (pop32());
  /* 11b38dc7 pop esi */
  ESI = (pop32());
  /* 11b38dc8 pop ebx */
  EBX = (pop32());
  /* 11b38dc9 mov esp, ebp */
  ESP = (EBP);
  /* 11b38dcb pop ebp */
  EBP = (pop32());
  /* 11b38dcc ret  */
  ESPCHK(0x11b38d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10008dd0 @ 0x11b38dd0 (28 bytes, 11 insns) */
void f_11b38dd0(void) {
  FTRACE(0x11b38dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b38dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b38dd1 mov ebp, esp */
  EBP = (ESP);
  /* 11b38dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b38dd4 mov eax, dword ptr [0x11b66030] */
  EAX = (r32((uint32_t)(0x11b66030)));
  /* 11b38dd9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b38ddc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b38ddf mov dword ptr [0x11b66030], ecx */
  w32((uint32_t)(0x11b66030), (ECX));
  /* 11b38de5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38de8 mov esp, ebp */
  ESP = (EBP);
  /* 11b38dea pop ebp */
  EBP = (pop32());
  /* 11b38deb ret  */
  ESPCHK(0x11b38dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008df0 @ 0x11b38df0 (136 bytes, 55 insns) */
void f_11b38df0(void) {
  FTRACE(0x11b38df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b38df0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b38df1 mov ebp, esp */
  EBP = (ESP);
  /* 11b38df3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b38df4 push ebx */
  push32((uint32_t)(EBX));
  /* 11b38df5 push esi */
  push32((uint32_t)(ESI));
  /* 11b38df6 push edi */
  push32((uint32_t)(EDI));
  /* 11b38df7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11b38dfe:;
  /* 11b38dfe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b38e01 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b38e04 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b38e07 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11b38e0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b38e0c je 0x11b38e6e */
  if (C.zf) goto L_11b38e6e;
  /* 11b38e0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b38e11 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b38e13 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b38e15 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b38e18 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b38e1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b38e21 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38e24 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11b38e27 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38e29 je 0x11b38e6c */
  if (C.zf) goto L_11b38e6c;
L_11b38e2b:;
  /* 11b38e2b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b38e2e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b38e33 push eax */
  push32((uint32_t)(EAX));
  /* 11b38e34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b38e37 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b38e39 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 11b38e3c push edx */
  push32((uint32_t)(EDX));
  /* 11b38e3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b38e40 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b38e43 push eax */
  push32((uint32_t)(EAX));
  /* 11b38e44 push 0x11b62cbc */
  push32((uint32_t)(0x11b62cbcu));
  /* 11b38e49 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38e4b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38e4d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38e4f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38e51 call 0x11b36850 */
  push32(0x11b38e56u); f_11b36850();
  /* 11b38e56 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38e59 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38e5c jne 0x11b38e5f */
  if (!C.zf) goto L_11b38e5f;
  /* 11b38e5e int3  */
  x86_unimpl("int3 @ 0x11b38e5e");
L_11b38e5f:;
  /* 11b38e5f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b38e61 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b38e63 jne 0x11b38e2b */
  if (!C.zf) goto L_11b38e2b;
  /* 11b38e65 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11b38e6c:;
  /* 11b38e6c jmp 0x11b38dfe */
  goto L_11b38dfe;
L_11b38e6e:;
  /* 11b38e6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b38e71 pop edi */
  EDI = (pop32());
  /* 11b38e72 pop esi */
  ESI = (pop32());
  /* 11b38e73 pop ebx */
  EBX = (pop32());
  /* 11b38e74 mov esp, ebp */
  ESP = (EBP);
  /* 11b38e76 pop ebp */
  EBP = (pop32());
  /* 11b38e77 ret  */
  ESPCHK(0x11b38df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e80 @ 0x11b38e80 (863 bytes, 299 insns) [1 switch table(s)] */
void f_11b38e80(void) {
  FTRACE(0x11b38e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b38e80 push ebp */
  push32((uint32_t)(EBP));
  /* 11b38e81 mov ebp, esp */
  EBP = (ESP);
  /* 11b38e83 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b38e86 push ebx */
  push32((uint32_t)(EBX));
  /* 11b38e87 push esi */
  push32((uint32_t)(ESI));
  /* 11b38e88 push edi */
  push32((uint32_t)(EDI));
  /* 11b38e89 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11b38e90 mov eax, dword ptr [0x11b65ab4] */
  EAX = (r32((uint32_t)(0x11b65ab4)));
  /* 11b38e95 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11b38e98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b38e9a jne 0x11b38ea6 */
  if (!C.zf) goto L_11b38ea6;
  /* 11b38e9c mov eax, 1 */
  EAX = (0x1u);
  /* 11b38ea1 jmp 0x11b391d8 */
  goto L_11b391d8;
L_11b38ea6:;
  /* 11b38ea6 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b38ea8 call 0x11b3a900 */
  push32(0x11b38eadu); f_11b3a900();
  /* 11b38ead add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38eb0 call 0x11b3dd60 */
  push32(0x11b38eb5u); f_11b3dd60();
  /* 11b38eb5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b38eb8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38ebc je 0x11b38fc9 */
  if (C.zf) goto L_11b38fc9;
  /* 11b38ec2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38ec6 je 0x11b38fc9 */
  if (C.zf) goto L_11b38fc9;
  /* 11b38ecc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b38ecf mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11b38ed2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b38ed5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38ed8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11b38edb cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38edf ja 0x11b38f92 */
  if ((!C.cf&&!C.zf)) goto L_11b38f92;
  /* 11b38ee5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b38ee8 jmp dword ptr [eax*4 + 0x11b391df] */
  switch (EAX) {
    case 0: goto L_11b38f6a;
    case 1: goto L_11b38f42;
    case 2: goto L_11b38f1a;
    case 3: goto L_11b38eef;
    default: x86_unimpl("switch@0x11b38ee8 out of table"); return;
  }
L_11b38eef:;
  /* 11b38eef push 0x11b62e10 */
  push32((uint32_t)(0x11b62e10u));
  /* 11b38ef4 push 0x11b62970 */
  push32((uint32_t)(0x11b62970u));
  /* 11b38ef9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38efb push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38efd push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38eff push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38f01 call 0x11b36850 */
  push32(0x11b38f06u); f_11b36850();
  /* 11b38f06 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38f09 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38f0c jne 0x11b38f0f */
  if (!C.zf) goto L_11b38f0f;
  /* 11b38f0e int3  */
  x86_unimpl("int3 @ 0x11b38f0e");
L_11b38f0f:;
  /* 11b38f0f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b38f11 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b38f13 jne 0x11b38eef */
  if (!C.zf) goto L_11b38eef;
  /* 11b38f15 jmp 0x11b38fb8 */
  goto L_11b38fb8;
L_11b38f1a:;
  /* 11b38f1a push 0x11b62dec */
  push32((uint32_t)(0x11b62decu));
  /* 11b38f1f push 0x11b62970 */
  push32((uint32_t)(0x11b62970u));
  /* 11b38f24 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38f26 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38f28 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38f2a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38f2c call 0x11b36850 */
  push32(0x11b38f31u); f_11b36850();
  /* 11b38f31 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38f34 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38f37 jne 0x11b38f3a */
  if (!C.zf) goto L_11b38f3a;
  /* 11b38f39 int3  */
  x86_unimpl("int3 @ 0x11b38f39");
L_11b38f3a:;
  /* 11b38f3a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b38f3c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b38f3e jne 0x11b38f1a */
  if (!C.zf) goto L_11b38f1a;
  /* 11b38f40 jmp 0x11b38fb8 */
  goto L_11b38fb8;
L_11b38f42:;
  /* 11b38f42 push 0x11b62dc8 */
  push32((uint32_t)(0x11b62dc8u));
  /* 11b38f47 push 0x11b62970 */
  push32((uint32_t)(0x11b62970u));
  /* 11b38f4c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38f4e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38f50 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38f52 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38f54 call 0x11b36850 */
  push32(0x11b38f59u); f_11b36850();
  /* 11b38f59 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38f5c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38f5f jne 0x11b38f62 */
  if (!C.zf) goto L_11b38f62;
  /* 11b38f61 int3  */
  x86_unimpl("int3 @ 0x11b38f61");
L_11b38f62:;
  /* 11b38f62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b38f64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b38f66 jne 0x11b38f42 */
  if (!C.zf) goto L_11b38f42;
  /* 11b38f68 jmp 0x11b38fb8 */
  goto L_11b38fb8;
L_11b38f6a:;
  /* 11b38f6a push 0x11b62da4 */
  push32((uint32_t)(0x11b62da4u));
  /* 11b38f6f push 0x11b62970 */
  push32((uint32_t)(0x11b62970u));
  /* 11b38f74 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38f76 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38f78 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38f7a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38f7c call 0x11b36850 */
  push32(0x11b38f81u); f_11b36850();
  /* 11b38f81 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38f84 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38f87 jne 0x11b38f8a */
  if (!C.zf) goto L_11b38f8a;
  /* 11b38f89 int3  */
  x86_unimpl("int3 @ 0x11b38f89");
L_11b38f8a:;
  /* 11b38f8a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b38f8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b38f8e jne 0x11b38f6a */
  if (!C.zf) goto L_11b38f6a;
  /* 11b38f90 jmp 0x11b38fb8 */
  goto L_11b38fb8;
L_11b38f92:;
  /* 11b38f92 push 0x11b62d78 */
  push32((uint32_t)(0x11b62d78u));
  /* 11b38f97 push 0x11b62970 */
  push32((uint32_t)(0x11b62970u));
  /* 11b38f9c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38f9e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38fa0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38fa2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b38fa4 call 0x11b36850 */
  push32(0x11b38fa9u); f_11b36850();
  /* 11b38fa9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38fac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38faf jne 0x11b38fb2 */
  if (!C.zf) goto L_11b38fb2;
  /* 11b38fb1 int3  */
  x86_unimpl("int3 @ 0x11b38fb1");
L_11b38fb2:;
  /* 11b38fb2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b38fb4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b38fb6 jne 0x11b38f92 */
  if (!C.zf) goto L_11b38f92;
L_11b38fb8:;
  /* 11b38fb8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b38fba call 0x11b3a9a0 */
  push32(0x11b38fbfu); f_11b3a9a0();
  /* 11b38fbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b38fc2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b38fc4 jmp 0x11b391d8 */
  goto L_11b391d8;
L_11b38fc9:;
  /* 11b38fc9 mov eax, dword ptr [0x11b67b60] */
  EAX = (r32((uint32_t)(0x11b67b60)));
  /* 11b38fce mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b38fd1 jmp 0x11b38fdb */
  goto L_11b38fdb;
L_11b38fd3:;
  /* 11b38fd3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b38fd6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b38fd8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11b38fdb:;
  /* 11b38fdb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38fdf je 0x11b391cb */
  if (C.zf) goto L_11b391cb;
  /* 11b38fe5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11b38fec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b38fef mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11b38ff2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b38ff8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b38ffb je 0x11b39020 */
  if (C.zf) goto L_11b39020;
  /* 11b38ffd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b39000 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39004 je 0x11b39020 */
  if (C.zf) goto L_11b39020;
  /* 11b39006 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b39009 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11b3900c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b39012 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39015 je 0x11b39020 */
  if (C.zf) goto L_11b39020;
  /* 11b39017 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3901a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3901e jne 0x11b39038 */
  if (!C.zf) goto L_11b39038;
L_11b39020:;
  /* 11b39020 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b39023 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11b39026 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b3902c mov edx, dword ptr [ecx*4 + 0x11b65ac4] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11b65ac4)));
  /* 11b39033 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11b39036 jmp 0x11b3903f */
  goto L_11b3903f;
L_11b39038:;
  /* 11b39038 mov dword ptr [ebp - 0x14], 0x11b62d70 */
  w32((uint32_t)(EBP + -0x14), (0x11b62d70u));
L_11b3903f:;
  /* 11b3903f push 4 */
  push32((uint32_t)(0x4u));
  /* 11b39041 mov al, byte ptr [0x11b65ac0] */
  AL = (r8((uint32_t)(0x11b65ac0)));
  /* 11b39046 push eax */
  push32((uint32_t)(EAX));
  /* 11b39047 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3904a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3904d push ecx */
  push32((uint32_t)(ECX));
  /* 11b3904e call 0x11b38df0 */
  push32(0x11b39053u); f_11b38df0();
  /* 11b39053 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39056 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b39058 jne 0x11b39094 */
  if (!C.zf) goto L_11b39094;
L_11b3905a:;
  /* 11b3905a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3905d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39060 push edx */
  push32((uint32_t)(EDX));
  /* 11b39061 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b39064 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11b39067 push ecx */
  push32((uint32_t)(ECX));
  /* 11b39068 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3906b push edx */
  push32((uint32_t)(EDX));
  /* 11b3906c push 0x11b62c4c */
  push32((uint32_t)(0x11b62c4cu));
  /* 11b39071 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39073 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39075 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39077 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39079 call 0x11b36850 */
  push32(0x11b3907eu); f_11b36850();
  /* 11b3907e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39081 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39084 jne 0x11b39087 */
  if (!C.zf) goto L_11b39087;
  /* 11b39086 int3  */
  x86_unimpl("int3 @ 0x11b39086");
L_11b39087:;
  /* 11b39087 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b39089 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3908b jne 0x11b3905a */
  if (!C.zf) goto L_11b3905a;
  /* 11b3908d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11b39094:;
  /* 11b39094 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b39096 mov cl, byte ptr [0x11b65ac0] */
  CL = (r8((uint32_t)(0x11b65ac0)));
  /* 11b3909c push ecx */
  push32((uint32_t)(ECX));
  /* 11b3909d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b390a0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11b390a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b390a6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 11b390aa push edx */
  push32((uint32_t)(EDX));
  /* 11b390ab call 0x11b38df0 */
  push32(0x11b390b0u); f_11b38df0();
  /* 11b390b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b390b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b390b5 jne 0x11b390f1 */
  if (!C.zf) goto L_11b390f1;
L_11b390b7:;
  /* 11b390b7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b390ba add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b390bd push eax */
  push32((uint32_t)(EAX));
  /* 11b390be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b390c1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11b390c4 push edx */
  push32((uint32_t)(EDX));
  /* 11b390c5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b390c8 push eax */
  push32((uint32_t)(EAX));
  /* 11b390c9 push 0x11b62c20 */
  push32((uint32_t)(0x11b62c20u));
  /* 11b390ce push 0 */
  push32((uint32_t)(0x0u));
  /* 11b390d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b390d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b390d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b390d6 call 0x11b36850 */
  push32(0x11b390dbu); f_11b36850();
  /* 11b390db add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b390de cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b390e1 jne 0x11b390e4 */
  if (!C.zf) goto L_11b390e4;
  /* 11b390e3 int3  */
  x86_unimpl("int3 @ 0x11b390e3");
L_11b390e4:;
  /* 11b390e4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b390e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b390e8 jne 0x11b390b7 */
  if (!C.zf) goto L_11b390b7;
  /* 11b390ea mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11b390f1:;
  /* 11b390f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b390f4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b390f8 jne 0x11b3914a */
  if (!C.zf) goto L_11b3914a;
  /* 11b390fa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b390fd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b39100 push ecx */
  push32((uint32_t)(ECX));
  /* 11b39101 mov dl, byte ptr [0x11b65ac1] */
  DL = (r8((uint32_t)(0x11b65ac1)));
  /* 11b39107 push edx */
  push32((uint32_t)(EDX));
  /* 11b39108 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3910b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3910e push eax */
  push32((uint32_t)(EAX));
  /* 11b3910f call 0x11b38df0 */
  push32(0x11b39114u); f_11b38df0();
  /* 11b39114 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39117 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b39119 jne 0x11b3914a */
  if (!C.zf) goto L_11b3914a;
L_11b3911b:;
  /* 11b3911b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3911e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39121 push ecx */
  push32((uint32_t)(ECX));
  /* 11b39122 push 0x11b62d44 */
  push32((uint32_t)(0x11b62d44u));
  /* 11b39127 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39129 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3912b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3912d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3912f call 0x11b36850 */
  push32(0x11b39134u); f_11b36850();
  /* 11b39134 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39137 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3913a jne 0x11b3913d */
  if (!C.zf) goto L_11b3913d;
  /* 11b3913c int3  */
  x86_unimpl("int3 @ 0x11b3913c");
L_11b3913d:;
  /* 11b3913d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3913f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b39141 jne 0x11b3911b */
  if (!C.zf) goto L_11b3911b;
  /* 11b39143 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11b3914a:;
  /* 11b3914a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3914e jne 0x11b391c6 */
  if (!C.zf) goto L_11b391c6;
  /* 11b39150 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b39153 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39157 je 0x11b3918c */
  if (C.zf) goto L_11b3918c;
L_11b39159:;
  /* 11b39159 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3915c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11b3915f push edx */
  push32((uint32_t)(EDX));
  /* 11b39160 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b39163 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11b39166 push ecx */
  push32((uint32_t)(ECX));
  /* 11b39167 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3916a push edx */
  push32((uint32_t)(EDX));
  /* 11b3916b push 0x11b62d24 */
  push32((uint32_t)(0x11b62d24u));
  /* 11b39170 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39172 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39174 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39176 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39178 call 0x11b36850 */
  push32(0x11b3917du); f_11b36850();
  /* 11b3917d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39180 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39183 jne 0x11b39186 */
  if (!C.zf) goto L_11b39186;
  /* 11b39185 int3  */
  x86_unimpl("int3 @ 0x11b39185");
L_11b39186:;
  /* 11b39186 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b39188 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3918a jne 0x11b39159 */
  if (!C.zf) goto L_11b39159;
L_11b3918c:;
  /* 11b3918c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3918f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11b39192 push edx */
  push32((uint32_t)(EDX));
  /* 11b39193 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b39196 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39199 push eax */
  push32((uint32_t)(EAX));
  /* 11b3919a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3919d push ecx */
  push32((uint32_t)(ECX));
  /* 11b3919e push 0x11b62cf8 */
  push32((uint32_t)(0x11b62cf8u));
  /* 11b391a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b391a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b391a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b391a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b391ab call 0x11b36850 */
  push32(0x11b391b0u); f_11b36850();
  /* 11b391b0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b391b3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b391b6 jne 0x11b391b9 */
  if (!C.zf) goto L_11b391b9;
  /* 11b391b8 int3  */
  x86_unimpl("int3 @ 0x11b391b8");
L_11b391b9:;
  /* 11b391b9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b391bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b391bd jne 0x11b3918c */
  if (!C.zf) goto L_11b3918c;
  /* 11b391bf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11b391c6:;
  /* 11b391c6 jmp 0x11b38fd3 */
  goto L_11b38fd3;
L_11b391cb:;
  /* 11b391cb push 9 */
  push32((uint32_t)(0x9u));
  /* 11b391cd call 0x11b3a9a0 */
  push32(0x11b391d2u); f_11b3a9a0();
  /* 11b391d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b391d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11b391d8:;
  /* 11b391d8 pop edi */
  EDI = (pop32());
  /* 11b391d9 pop esi */
  ESI = (pop32());
  /* 11b391da pop ebx */
  EBX = (pop32());
  /* 11b391db mov esp, ebp */
  ESP = (EBP);
  /* 11b391dd pop ebp */
  EBP = (pop32());
  /* 11b391de ret  */
  ESPCHK(0x11b38e80u, _esp0);
  ESP += 4; return;
}

/* FUN_100091f0 @ 0x11b391f0 (34 bytes, 13 insns) */
void f_11b391f0(void) {
  FTRACE(0x11b391f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b391f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b391f1 mov ebp, esp */
  EBP = (ESP);
  /* 11b391f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b391f4 mov eax, dword ptr [0x11b65ab4] */
  EAX = (r32((uint32_t)(0x11b65ab4)));
  /* 11b391f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b391fc cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39200 je 0x11b3920b */
  if (C.zf) goto L_11b3920b;
  /* 11b39202 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b39205 mov dword ptr [0x11b65ab4], ecx */
  w32((uint32_t)(0x11b65ab4), (ECX));
L_11b3920b:;
  /* 11b3920b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3920e mov esp, ebp */
  ESP = (EBP);
  /* 11b39210 pop ebp */
  EBP = (pop32());
  /* 11b39211 ret  */
  ESPCHK(0x11b391f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009220 @ 0x11b39220 (103 bytes, 38 insns) */
void f_11b39220(void) {
  FTRACE(0x11b39220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b39220 push ebp */
  push32((uint32_t)(EBP));
  /* 11b39221 mov ebp, esp */
  EBP = (ESP);
  /* 11b39223 push ecx */
  push32((uint32_t)(ECX));
  /* 11b39224 mov eax, dword ptr [0x11b65ab4] */
  EAX = (r32((uint32_t)(0x11b65ab4)));
  /* 11b39229 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11b3922c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3922e jne 0x11b39232 */
  if (!C.zf) goto L_11b39232;
  /* 11b39230 jmp 0x11b39283 */
  goto L_11b39283;
L_11b39232:;
  /* 11b39232 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b39234 call 0x11b3a900 */
  push32(0x11b39239u); f_11b3a900();
  /* 11b39239 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3923c mov ecx, dword ptr [0x11b67b60] */
  ECX = (r32((uint32_t)(0x11b67b60)));
  /* 11b39242 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b39245 jmp 0x11b3924f */
  goto L_11b3924f;
L_11b39247:;
  /* 11b39247 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3924a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b3924c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b3924f:;
  /* 11b3924f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39253 je 0x11b39279 */
  if (C.zf) goto L_11b39279;
  /* 11b39255 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39258 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11b3925b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b39261 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39264 jne 0x11b39277 */
  if (!C.zf) goto L_11b39277;
  /* 11b39266 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b39269 push eax */
  push32((uint32_t)(EAX));
  /* 11b3926a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3926d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39270 push ecx */
  push32((uint32_t)(ECX));
  /* 11b39271 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x11b39274u);
  /* 11b39274 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b39277:;
  /* 11b39277 jmp 0x11b39247 */
  goto L_11b39247;
L_11b39279:;
  /* 11b39279 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b3927b call 0x11b3a9a0 */
  push32(0x11b39280u); f_11b3a9a0();
  /* 11b39280 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b39283:;
  /* 11b39283 mov esp, ebp */
  ESP = (EBP);
  /* 11b39285 pop ebp */
  EBP = (pop32());
  /* 11b39286 ret  */
  ESPCHK(0x11b39220u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x11b39290 (75 bytes, 28 insns) */
void f_11b39290(void) {
  FTRACE(0x11b39290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b39290 push ebp */
  push32((uint32_t)(EBP));
  /* 11b39291 mov ebp, esp */
  EBP = (ESP);
  /* 11b39293 push ecx */
  push32((uint32_t)(ECX));
  /* 11b39294 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39298 je 0x11b392cd */
  if (C.zf) goto L_11b392cd;
  /* 11b3929a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3929d push eax */
  push32((uint32_t)(EAX));
  /* 11b3929e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b392a1 push ecx */
  push32((uint32_t)(ECX));
  /* 11b392a2 call dword ptr [0x11b6a390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a390))), 0x11b392a8u);
  /* 11b392a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b392aa jne 0x11b392cd */
  if (!C.zf) goto L_11b392cd;
  /* 11b392ac cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b392b0 je 0x11b392c4 */
  if (C.zf) goto L_11b392c4;
  /* 11b392b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b392b5 push edx */
  push32((uint32_t)(EDX));
  /* 11b392b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b392b9 push eax */
  push32((uint32_t)(EAX));
  /* 11b392ba call dword ptr [0x11b6a3d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3d8))), 0x11b392c0u);
  /* 11b392c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b392c2 jne 0x11b392cd */
  if (!C.zf) goto L_11b392cd;
L_11b392c4:;
  /* 11b392c4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11b392cb jmp 0x11b392d4 */
  goto L_11b392d4;
L_11b392cd:;
  /* 11b392cd mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11b392d4:;
  /* 11b392d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b392d7 mov esp, ebp */
  ESP = (EBP);
  /* 11b392d9 pop ebp */
  EBP = (pop32());
  /* 11b392da ret  */
  ESPCHK(0x11b39290u, _esp0);
  ESP += 4; return;
}

/* FUN_100092e0 @ 0x11b392e0 (134 bytes, 50 insns) */
void f_11b392e0(void) {
  FTRACE(0x11b392e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b392e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b392e1 mov ebp, esp */
  EBP = (ESP);
  /* 11b392e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b392e4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b392e8 jne 0x11b392ee */
  if (!C.zf) goto L_11b392ee;
  /* 11b392ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b392ec jmp 0x11b39362 */
  goto L_11b39362;
L_11b392ee:;
  /* 11b392ee push 1 */
  push32((uint32_t)(0x1u));
  /* 11b392f0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11b392f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b392f5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b392f8 push eax */
  push32((uint32_t)(EAX));
  /* 11b392f9 call 0x11b39290 */
  push32(0x11b392feu); f_11b39290();
  /* 11b392fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39301 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b39303 jne 0x11b39309 */
  if (!C.zf) goto L_11b39309;
  /* 11b39305 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b39307 jmp 0x11b39362 */
  goto L_11b39362;
L_11b39309:;
  /* 11b39309 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3930c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3930f push ecx */
  push32((uint32_t)(ECX));
  /* 11b39310 call 0x11b3de80 */
  push32(0x11b39315u); f_11b3de80();
  /* 11b39315 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39318 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b3931b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3931f je 0x11b39336 */
  if (C.zf) goto L_11b39336;
  /* 11b39321 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b39324 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b39327 push edx */
  push32((uint32_t)(EDX));
  /* 11b39328 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3932b push eax */
  push32((uint32_t)(EAX));
  /* 11b3932c call 0x11b3dee0 */
  push32(0x11b39331u); f_11b3dee0();
  /* 11b39331 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39334 jmp 0x11b39362 */
  goto L_11b39362;
L_11b39336:;
  /* 11b39336 mov ecx, dword ptr [0x11b67b14] */
  ECX = (r32((uint32_t)(0x11b67b14)));
  /* 11b3933c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11b39342 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b39344 je 0x11b3934d */
  if (C.zf) goto L_11b3934d;
  /* 11b39346 mov eax, 1 */
  EAX = (0x1u);
  /* 11b3934b jmp 0x11b39362 */
  goto L_11b39362;
L_11b3934d:;
  /* 11b3934d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b39350 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b39353 push edx */
  push32((uint32_t)(EDX));
  /* 11b39354 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39356 mov eax, dword ptr [0x11b694ac] */
  EAX = (r32((uint32_t)(0x11b694ac)));
  /* 11b3935b push eax */
  push32((uint32_t)(EAX));
  /* 11b3935c call dword ptr [0x11b6a38c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a38c))), 0x11b39362u);
L_11b39362:;
  /* 11b39362 mov esp, ebp */
  ESP = (EBP);
  /* 11b39364 pop ebp */
  EBP = (pop32());
  /* 11b39365 ret  */
  ESPCHK(0x11b392e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009370 @ 0x11b39370 (227 bytes, 80 insns) */
void f_11b39370(void) {
  FTRACE(0x11b39370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b39370 push ebp */
  push32((uint32_t)(EBP));
  /* 11b39371 mov ebp, esp */
  EBP = (ESP);
  /* 11b39373 push ecx */
  push32((uint32_t)(ECX));
  /* 11b39374 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b39377 push eax */
  push32((uint32_t)(EAX));
  /* 11b39378 call 0x11b392e0 */
  push32(0x11b3937du); f_11b392e0();
  /* 11b3937d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39380 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b39382 jne 0x11b3938b */
  if (!C.zf) goto L_11b3938b;
  /* 11b39384 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b39386 jmp 0x11b3944f */
  goto L_11b3944f;
L_11b3938b:;
  /* 11b3938b push 9 */
  push32((uint32_t)(0x9u));
  /* 11b3938d call 0x11b3a900 */
  push32(0x11b39392u); f_11b3a900();
  /* 11b39392 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39395 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b39398 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3939b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b3939e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b393a1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b393a4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b393a9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b393ac je 0x11b393d0 */
  if (C.zf) goto L_11b393d0;
  /* 11b393ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b393b1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b393b5 je 0x11b393d0 */
  if (C.zf) goto L_11b393d0;
  /* 11b393b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b393ba mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b393bd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b393c2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b393c5 je 0x11b393d0 */
  if (C.zf) goto L_11b393d0;
  /* 11b393c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b393ca cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b393ce jne 0x11b39443 */
  if (!C.zf) goto L_11b39443;
L_11b393d0:;
  /* 11b393d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b393d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b393d5 push edx */
  push32((uint32_t)(EDX));
  /* 11b393d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b393d9 push eax */
  push32((uint32_t)(EAX));
  /* 11b393da call 0x11b39290 */
  push32(0x11b393dfu); f_11b39290();
  /* 11b393df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b393e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b393e4 je 0x11b39443 */
  if (C.zf) goto L_11b39443;
  /* 11b393e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b393e9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11b393ec cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b393ef jne 0x11b39443 */
  if (!C.zf) goto L_11b39443;
  /* 11b393f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b393f4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11b393f7 cmp ecx, dword ptr [0x11b65ab8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11b65ab8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b393fd jg 0x11b39443 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b39443;
  /* 11b393ff cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39403 je 0x11b39410 */
  if (C.zf) goto L_11b39410;
  /* 11b39405 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b39408 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3940b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11b3940e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11b39410:;
  /* 11b39410 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39414 je 0x11b39421 */
  if (C.zf) goto L_11b39421;
  /* 11b39416 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b39419 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3941c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11b3941f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11b39421:;
  /* 11b39421 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39425 je 0x11b39432 */
  if (C.zf) goto L_11b39432;
  /* 11b39427 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b3942a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3942d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11b39430 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11b39432:;
  /* 11b39432 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b39434 call 0x11b3a9a0 */
  push32(0x11b39439u); f_11b3a9a0();
  /* 11b39439 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3943c mov eax, 1 */
  EAX = (0x1u);
  /* 11b39441 jmp 0x11b3944f */
  goto L_11b3944f;
L_11b39443:;
  /* 11b39443 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b39445 call 0x11b3a9a0 */
  push32(0x11b3944au); f_11b3a9a0();
  /* 11b3944a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3944d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b3944f:;
  /* 11b3944f mov esp, ebp */
  ESP = (EBP);
  /* 11b39451 pop ebp */
  EBP = (pop32());
  /* 11b39452 ret  */
  ESPCHK(0x11b39370u, _esp0);
  ESP += 4; return;
}

/* FUN_10009460 @ 0x11b39460 (28 bytes, 11 insns) */
void f_11b39460(void) {
  FTRACE(0x11b39460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b39460 push ebp */
  push32((uint32_t)(EBP));
  /* 11b39461 mov ebp, esp */
  EBP = (ESP);
  /* 11b39463 push ecx */
  push32((uint32_t)(ECX));
  /* 11b39464 mov eax, dword ptr [0x11b694b8] */
  EAX = (r32((uint32_t)(0x11b694b8)));
  /* 11b39469 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b3946c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3946f mov dword ptr [0x11b694b8], ecx */
  w32((uint32_t)(0x11b694b8), (ECX));
  /* 11b39475 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39478 mov esp, ebp */
  ESP = (EBP);
  /* 11b3947a pop ebp */
  EBP = (pop32());
  /* 11b3947b ret  */
  ESPCHK(0x11b39460u, _esp0);
  ESP += 4; return;
}

/* FUN_10009480 @ 0x11b39480 (362 bytes, 116 insns) */
void f_11b39480(void) {
  FTRACE(0x11b39480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b39480 push ebp */
  push32((uint32_t)(EBP));
  /* 11b39481 mov ebp, esp */
  EBP = (ESP);
  /* 11b39483 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b39486 push ebx */
  push32((uint32_t)(EBX));
  /* 11b39487 push esi */
  push32((uint32_t)(ESI));
  /* 11b39488 push edi */
  push32((uint32_t)(EDI));
  /* 11b39489 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3948d jne 0x11b394ba */
  if (!C.zf) goto L_11b394ba;
L_11b3948f:;
  /* 11b3948f push 0x11b62e58 */
  push32((uint32_t)(0x11b62e58u));
  /* 11b39494 push 0x11b62970 */
  push32((uint32_t)(0x11b62970u));
  /* 11b39499 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3949b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3949d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3949f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b394a1 call 0x11b36850 */
  push32(0x11b394a6u); f_11b36850();
  /* 11b394a6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b394a9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b394ac jne 0x11b394af */
  if (!C.zf) goto L_11b394af;
  /* 11b394ae int3  */
  x86_unimpl("int3 @ 0x11b394ae");
L_11b394af:;
  /* 11b394af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b394b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b394b3 jne 0x11b3948f */
  if (!C.zf) goto L_11b3948f;
  /* 11b394b5 jmp 0x11b395e3 */
  goto L_11b395e3;
L_11b394ba:;
  /* 11b394ba push 9 */
  push32((uint32_t)(0x9u));
  /* 11b394bc call 0x11b3a900 */
  push32(0x11b394c1u); f_11b3a900();
  /* 11b394c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b394c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b394c7 mov edx, dword ptr [0x11b67b60] */
  EDX = (r32((uint32_t)(0x11b67b60)));
  /* 11b394cd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11b394cf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b394d6 jmp 0x11b394e1 */
  goto L_11b394e1;
L_11b394d8:;
  /* 11b394d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b394db add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b394de mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b394e1:;
  /* 11b394e1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b394e5 jge 0x11b39505 */
  if ((C.sf==C.of)) goto L_11b39505;
  /* 11b394e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b394ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b394ed mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 11b394f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b394f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b394fb mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 11b39503 jmp 0x11b394d8 */
  goto L_11b394d8;
L_11b39505:;
  /* 11b39505 mov edx, dword ptr [0x11b67b60] */
  EDX = (r32((uint32_t)(0x11b67b60)));
  /* 11b3950b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11b3950e jmp 0x11b39518 */
  goto L_11b39518;
L_11b39510:;
  /* 11b39510 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b39513 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b39515 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11b39518:;
  /* 11b39518 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3951c je 0x11b395c1 */
  if (C.zf) goto L_11b395c1;
  /* 11b39522 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b39525 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b39528 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3952d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3952f jl 0x11b39597 */
  if ((C.sf!=C.of)) goto L_11b39597;
  /* 11b39531 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b39534 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11b39537 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b3953d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39540 jge 0x11b39597 */
  if ((C.sf==C.of)) goto L_11b39597;
  /* 11b39542 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b39545 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11b39548 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b3954e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b39551 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 11b39555 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39558 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3955b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11b3955e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b39564 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b39567 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 11b3956b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3956e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b39571 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b39576 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b39579 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 11b3957d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b39580 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39583 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b39586 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11b39589 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3958e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b39591 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11b39595 jmp 0x11b395bc */
  goto L_11b395bc;
L_11b39597:;
  /* 11b39597 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3959a push edx */
  push32((uint32_t)(EDX));
  /* 11b3959b push 0x11b62e34 */
  push32((uint32_t)(0x11b62e34u));
  /* 11b395a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b395a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b395a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b395a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b395a8 call 0x11b36850 */
  push32(0x11b395adu); f_11b36850();
  /* 11b395ad add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b395b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b395b3 jne 0x11b395b6 */
  if (!C.zf) goto L_11b395b6;
  /* 11b395b5 int3  */
  x86_unimpl("int3 @ 0x11b395b5");
L_11b395b6:;
  /* 11b395b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b395b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b395ba jne 0x11b39597 */
  if (!C.zf) goto L_11b39597;
L_11b395bc:;
  /* 11b395bc jmp 0x11b39510 */
  goto L_11b39510;
L_11b395c1:;
  /* 11b395c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b395c4 mov edx, dword ptr [0x11b67b68] */
  EDX = (r32((uint32_t)(0x11b67b68)));
  /* 11b395ca mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 11b395cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b395d0 mov ecx, dword ptr [0x11b67b5c] */
  ECX = (r32((uint32_t)(0x11b67b5c)));
  /* 11b395d6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 11b395d9 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b395db call 0x11b3a9a0 */
  push32(0x11b395e0u); f_11b3a9a0();
  /* 11b395e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b395e3:;
  /* 11b395e3 pop edi */
  EDI = (pop32());
  /* 11b395e4 pop esi */
  ESI = (pop32());
  /* 11b395e5 pop ebx */
  EBX = (pop32());
  /* 11b395e6 mov esp, ebp */
  ESP = (EBP);
  /* 11b395e8 pop ebp */
  EBP = (pop32());
  /* 11b395e9 ret  */
  ESPCHK(0x11b39480u, _esp0);
  ESP += 4; return;
}

/* FUN_100095f0 @ 0x11b395f0 (291 bytes, 95 insns) */
void f_11b395f0(void) {
  FTRACE(0x11b395f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b395f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b395f1 mov ebp, esp */
  EBP = (ESP);
  /* 11b395f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b395f6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b395f7 push esi */
  push32((uint32_t)(ESI));
  /* 11b395f8 push edi */
  push32((uint32_t)(EDI));
  /* 11b395f9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b39600 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39604 je 0x11b39612 */
  if (C.zf) goto L_11b39612;
  /* 11b39606 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3960a je 0x11b39612 */
  if (C.zf) goto L_11b39612;
  /* 11b3960c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39610 jne 0x11b39640 */
  if (!C.zf) goto L_11b39640;
L_11b39612:;
  /* 11b39612 push 0x11b62e80 */
  push32((uint32_t)(0x11b62e80u));
  /* 11b39617 push 0x11b62970 */
  push32((uint32_t)(0x11b62970u));
  /* 11b3961c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3961e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39620 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39622 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39624 call 0x11b36850 */
  push32(0x11b39629u); f_11b36850();
  /* 11b39629 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3962c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3962f jne 0x11b39632 */
  if (!C.zf) goto L_11b39632;
  /* 11b39631 int3  */
  x86_unimpl("int3 @ 0x11b39631");
L_11b39632:;
  /* 11b39632 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b39634 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b39636 jne 0x11b39612 */
  if (!C.zf) goto L_11b39612;
  /* 11b39638 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3963b jmp 0x11b3970c */
  goto L_11b3970c;
L_11b39640:;
  /* 11b39640 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b39647 jmp 0x11b39652 */
  goto L_11b39652;
L_11b39649:;
  /* 11b39649 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3964c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3964f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b39652:;
  /* 11b39652 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39656 jge 0x11b396dc */
  if ((C.sf==C.of)) goto L_11b396dc;
  /* 11b3965c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3965f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b39662 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39665 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b39668 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 11b3966c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b39670 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39673 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b39676 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11b3967a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3967d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b39680 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39683 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b39686 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 11b3968a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3968e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39691 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b39694 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 11b39698 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3969b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3969e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b396a3 jne 0x11b396b2 */
  if (!C.zf) goto L_11b396b2;
  /* 11b396a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b396a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b396ab cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b396b0 je 0x11b396d7 */
  if (C.zf) goto L_11b396d7;
L_11b396b2:;
  /* 11b396b2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b396b6 je 0x11b396d7 */
  if (C.zf) goto L_11b396d7;
  /* 11b396b8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b396bc jne 0x11b396d0 */
  if (!C.zf) goto L_11b396d0;
  /* 11b396be cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b396c2 jne 0x11b396d7 */
  if (!C.zf) goto L_11b396d7;
  /* 11b396c4 mov eax, dword ptr [0x11b65ab4] */
  EAX = (r32((uint32_t)(0x11b65ab4)));
  /* 11b396c9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11b396cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b396ce je 0x11b396d7 */
  if (C.zf) goto L_11b396d7;
L_11b396d0:;
  /* 11b396d0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11b396d7:;
  /* 11b396d7 jmp 0x11b39649 */
  goto L_11b39649;
L_11b396dc:;
  /* 11b396dc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b396df mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b396e2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11b396e5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b396e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b396eb mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 11b396ee mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b396f1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b396f4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 11b396f7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b396fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b396fd mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 11b39700 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b39703 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11b39709 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11b3970c:;
  /* 11b3970c pop edi */
  EDI = (pop32());
  /* 11b3970d pop esi */
  ESI = (pop32());
  /* 11b3970e pop ebx */
  EBX = (pop32());
  /* 11b3970f mov esp, ebp */
  ESP = (EBP);
  /* 11b39711 pop ebp */
  EBP = (pop32());
  /* 11b39712 ret  */
  ESPCHK(0x11b395f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009720 @ 0x11b39720 (697 bytes, 253 insns) */
void f_11b39720(void) {
  FTRACE(0x11b39720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b39720 push ebp */
  push32((uint32_t)(EBP));
  /* 11b39721 mov ebp, esp */
  EBP = (ESP);
  /* 11b39723 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b39726 push ebx */
  push32((uint32_t)(EBX));
  /* 11b39727 push esi */
  push32((uint32_t)(ESI));
  /* 11b39728 push edi */
  push32((uint32_t)(EDI));
  /* 11b39729 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b39730 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b39732 call 0x11b3a900 */
  push32(0x11b39737u); f_11b3a900();
  /* 11b39737 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b3973a:;
  /* 11b3973a push 0x11b62f78 */
  push32((uint32_t)(0x11b62f78u));
  /* 11b3973f push 0x11b62970 */
  push32((uint32_t)(0x11b62970u));
  /* 11b39744 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39746 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39748 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3974a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3974c call 0x11b36850 */
  push32(0x11b39751u); f_11b36850();
  /* 11b39751 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39754 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39757 jne 0x11b3975a */
  if (!C.zf) goto L_11b3975a;
  /* 11b39759 int3  */
  x86_unimpl("int3 @ 0x11b39759");
L_11b3975a:;
  /* 11b3975a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3975c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3975e jne 0x11b3973a */
  if (!C.zf) goto L_11b3973a;
  /* 11b39760 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39764 je 0x11b3976e */
  if (C.zf) goto L_11b3976e;
  /* 11b39766 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b39769 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b3976b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11b3976e:;
  /* 11b3976e mov eax, dword ptr [0x11b67b60] */
  EAX = (r32((uint32_t)(0x11b67b60)));
  /* 11b39773 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b39776 jmp 0x11b39780 */
  goto L_11b39780;
L_11b39778:;
  /* 11b39778 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3977b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b3977d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b39780:;
  /* 11b39780 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39784 je 0x11b399a2 */
  if (C.zf) goto L_11b399a2;
  /* 11b3978a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3978d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39790 je 0x11b399a2 */
  if (C.zf) goto L_11b399a2;
  /* 11b39796 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39799 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11b3979c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b397a2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b397a5 je 0x11b397d4 */
  if (C.zf) goto L_11b397d4;
  /* 11b397a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b397aa mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11b397ad and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b397b3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b397b5 je 0x11b397d4 */
  if (C.zf) goto L_11b397d4;
  /* 11b397b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b397ba mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b397bd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b397c2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b397c5 jne 0x11b397d9 */
  if (!C.zf) goto L_11b397d9;
  /* 11b397c7 mov ecx, dword ptr [0x11b65ab4] */
  ECX = (r32((uint32_t)(0x11b65ab4)));
  /* 11b397cd and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11b397d0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b397d2 jne 0x11b397d9 */
  if (!C.zf) goto L_11b397d9;
L_11b397d4:;
  /* 11b397d4 jmp 0x11b3999d */
  goto L_11b3999d;
L_11b397d9:;
  /* 11b397d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b397dc cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b397e0 je 0x11b39852 */
  if (C.zf) goto L_11b39852;
  /* 11b397e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b397e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b397e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b397e9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11b397ec push ecx */
  push32((uint32_t)(ECX));
  /* 11b397ed call 0x11b39290 */
  push32(0x11b397f2u); f_11b39290();
  /* 11b397f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b397f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b397f7 jne 0x11b39823 */
  if (!C.zf) goto L_11b39823;
L_11b397f9:;
  /* 11b397f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b397fc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11b397ff push eax */
  push32((uint32_t)(EAX));
  /* 11b39800 push 0x11b62f64 */
  push32((uint32_t)(0x11b62f64u));
  /* 11b39805 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39807 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39809 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3980b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3980d call 0x11b36850 */
  push32(0x11b39812u); f_11b36850();
  /* 11b39812 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39815 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39818 jne 0x11b3981b */
  if (!C.zf) goto L_11b3981b;
  /* 11b3981a int3  */
  x86_unimpl("int3 @ 0x11b3981a");
L_11b3981b:;
  /* 11b3981b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3981d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3981f jne 0x11b397f9 */
  if (!C.zf) goto L_11b397f9;
  /* 11b39821 jmp 0x11b39852 */
  goto L_11b39852;
L_11b39823:;
  /* 11b39823 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39826 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11b39829 push eax */
  push32((uint32_t)(EAX));
  /* 11b3982a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3982d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11b39830 push edx */
  push32((uint32_t)(EDX));
  /* 11b39831 push 0x11b62f58 */
  push32((uint32_t)(0x11b62f58u));
  /* 11b39836 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39838 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3983a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3983c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3983e call 0x11b36850 */
  push32(0x11b39843u); f_11b36850();
  /* 11b39843 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39846 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39849 jne 0x11b3984c */
  if (!C.zf) goto L_11b3984c;
  /* 11b3984b int3  */
  x86_unimpl("int3 @ 0x11b3984b");
L_11b3984c:;
  /* 11b3984c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3984e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b39850 jne 0x11b39823 */
  if (!C.zf) goto L_11b39823;
L_11b39852:;
  /* 11b39852 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39855 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11b39858 push edx */
  push32((uint32_t)(EDX));
  /* 11b39859 push 0x11b62f50 */
  push32((uint32_t)(0x11b62f50u));
  /* 11b3985e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39860 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39862 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39864 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39866 call 0x11b36850 */
  push32(0x11b3986bu); f_11b36850();
  /* 11b3986b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3986e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39871 jne 0x11b39874 */
  if (!C.zf) goto L_11b39874;
  /* 11b39873 int3  */
  x86_unimpl("int3 @ 0x11b39873");
L_11b39874:;
  /* 11b39874 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b39876 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b39878 jne 0x11b39852 */
  if (!C.zf) goto L_11b39852;
  /* 11b3987a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3987d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11b39880 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b39886 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39889 jne 0x11b398fc */
  if (!C.zf) goto L_11b398fc;
L_11b3988b:;
  /* 11b3988b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3988e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b39891 push ecx */
  push32((uint32_t)(ECX));
  /* 11b39892 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39895 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b39898 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11b3989b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b398a0 push eax */
  push32((uint32_t)(EAX));
  /* 11b398a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b398a4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b398a7 push ecx */
  push32((uint32_t)(ECX));
  /* 11b398a8 push 0x11b62f1c */
  push32((uint32_t)(0x11b62f1cu));
  /* 11b398ad push 0 */
  push32((uint32_t)(0x0u));
  /* 11b398af push 0 */
  push32((uint32_t)(0x0u));
  /* 11b398b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b398b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b398b5 call 0x11b36850 */
  push32(0x11b398bau); f_11b36850();
  /* 11b398ba add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b398bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b398c0 jne 0x11b398c3 */
  if (!C.zf) goto L_11b398c3;
  /* 11b398c2 int3  */
  x86_unimpl("int3 @ 0x11b398c2");
L_11b398c3:;
  /* 11b398c3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b398c5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b398c7 jne 0x11b3988b */
  if (!C.zf) goto L_11b3988b;
  /* 11b398c9 cmp dword ptr [0x11b694b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b694b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b398d0 je 0x11b398eb */
  if (C.zf) goto L_11b398eb;
  /* 11b398d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b398d5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b398d8 push ecx */
  push32((uint32_t)(ECX));
  /* 11b398d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b398dc add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b398df push edx */
  push32((uint32_t)(EDX));
  /* 11b398e0 call dword ptr [0x11b694b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b694b8))), 0x11b398e6u);
  /* 11b398e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b398e9 jmp 0x11b398f7 */
  goto L_11b398f7;
L_11b398eb:;
  /* 11b398eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b398ee push eax */
  push32((uint32_t)(EAX));
  /* 11b398ef call 0x11b399e0 */
  push32(0x11b398f4u); f_11b399e0();
  /* 11b398f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b398f7:;
  /* 11b398f7 jmp 0x11b3999d */
  goto L_11b3999d;
L_11b398fc:;
  /* 11b398fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b398ff cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39903 jne 0x11b39942 */
  if (!C.zf) goto L_11b39942;
L_11b39905:;
  /* 11b39905 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39908 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11b3990b push eax */
  push32((uint32_t)(EAX));
  /* 11b3990c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3990f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39912 push ecx */
  push32((uint32_t)(ECX));
  /* 11b39913 push 0x11b62ef4 */
  push32((uint32_t)(0x11b62ef4u));
  /* 11b39918 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3991a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3991c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3991e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39920 call 0x11b36850 */
  push32(0x11b39925u); f_11b36850();
  /* 11b39925 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39928 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3992b jne 0x11b3992e */
  if (!C.zf) goto L_11b3992e;
  /* 11b3992d int3  */
  x86_unimpl("int3 @ 0x11b3992d");
L_11b3992e:;
  /* 11b3992e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b39930 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b39932 jne 0x11b39905 */
  if (!C.zf) goto L_11b39905;
  /* 11b39934 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39937 push eax */
  push32((uint32_t)(EAX));
  /* 11b39938 call 0x11b399e0 */
  push32(0x11b3993du); f_11b399e0();
  /* 11b3993d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39940 jmp 0x11b3999d */
  goto L_11b3999d;
L_11b39942:;
  /* 11b39942 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39945 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11b39948 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b3994e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39951 jne 0x11b3999d */
  if (!C.zf) goto L_11b3999d;
L_11b39953:;
  /* 11b39953 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39956 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b39959 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3995a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3995d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b39960 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11b39963 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b39968 push eax */
  push32((uint32_t)(EAX));
  /* 11b39969 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3996c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3996f push ecx */
  push32((uint32_t)(ECX));
  /* 11b39970 push 0x11b62ec0 */
  push32((uint32_t)(0x11b62ec0u));
  /* 11b39975 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39977 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39979 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3997b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3997d call 0x11b36850 */
  push32(0x11b39982u); f_11b36850();
  /* 11b39982 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39985 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39988 jne 0x11b3998b */
  if (!C.zf) goto L_11b3998b;
  /* 11b3998a int3  */
  x86_unimpl("int3 @ 0x11b3998a");
L_11b3998b:;
  /* 11b3998b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3998d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3998f jne 0x11b39953 */
  if (!C.zf) goto L_11b39953;
  /* 11b39991 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39994 push eax */
  push32((uint32_t)(EAX));
  /* 11b39995 call 0x11b399e0 */
  push32(0x11b3999au); f_11b399e0();
  /* 11b3999a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b3999d:;
  /* 11b3999d jmp 0x11b39778 */
  goto L_11b39778;
L_11b399a2:;
  /* 11b399a2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b399a4 call 0x11b3a9a0 */
  push32(0x11b399a9u); f_11b3a9a0();
  /* 11b399a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b399ac:;
  /* 11b399ac push 0x11b62ea8 */
  push32((uint32_t)(0x11b62ea8u));
  /* 11b399b1 push 0x11b62970 */
  push32((uint32_t)(0x11b62970u));
  /* 11b399b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b399b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b399ba push 0 */
  push32((uint32_t)(0x0u));
  /* 11b399bc push 0 */
  push32((uint32_t)(0x0u));
  /* 11b399be call 0x11b36850 */
  push32(0x11b399c3u); f_11b36850();
  /* 11b399c3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b399c6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b399c9 jne 0x11b399cc */
  if (!C.zf) goto L_11b399cc;
  /* 11b399cb int3  */
  x86_unimpl("int3 @ 0x11b399cb");
L_11b399cc:;
  /* 11b399cc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b399ce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b399d0 jne 0x11b399ac */
  if (!C.zf) goto L_11b399ac;
  /* 11b399d2 pop edi */
  EDI = (pop32());
  /* 11b399d3 pop esi */
  ESI = (pop32());
  /* 11b399d4 pop ebx */
  EBX = (pop32());
  /* 11b399d5 mov esp, ebp */
  ESP = (EBP);
  /* 11b399d7 pop ebp */
  EBP = (pop32());
  /* 11b399d8 ret  */
  ESPCHK(0x11b39720u, _esp0);
  ESP += 4; return;
}

/* FUN_100099e0 @ 0x11b399e0 (276 bytes, 89 insns) */
void f_11b399e0(void) {
  FTRACE(0x11b399e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b399e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b399e1 mov ebp, esp */
  EBP = (ESP);
  /* 11b399e3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b399e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b399e7 push esi */
  push32((uint32_t)(ESI));
  /* 11b399e8 push edi */
  push32((uint32_t)(EDI));
  /* 11b399e9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 11b399f0 jmp 0x11b399fb */
  goto L_11b399fb;
L_11b399f2:;
  /* 11b399f2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11b399f5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b399f8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_11b399fb:;
  /* 11b399fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b399fe cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39a02 jge 0x11b39a0f */
  if ((C.sf==C.of)) goto L_11b39a0f;
  /* 11b39a04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b39a07 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11b39a0a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 11b39a0d jmp 0x11b39a16 */
  goto L_11b39a16;
L_11b39a0f:;
  /* 11b39a0f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_11b39a16:;
  /* 11b39a16 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11b39a19 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39a1c jge 0x11b39abc */
  if ((C.sf==C.of)) goto L_11b39abc;
  /* 11b39a22 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b39a25 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39a28 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 11b39a2b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 11b39a2e cmp dword ptr [0x11b65de0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b65de0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39a35 jle 0x11b39a53 */
  if ((C.zf||C.sf!=C.of)) goto L_11b39a53;
  /* 11b39a37 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 11b39a3c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b39a3f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b39a45 push ecx */
  push32((uint32_t)(ECX));
  /* 11b39a46 call 0x11b3c7c0 */
  push32(0x11b39a4bu); f_11b3c7c0();
  /* 11b39a4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39a4e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 11b39a51 jmp 0x11b39a70 */
  goto L_11b39a70;
L_11b39a53:;
  /* 11b39a53 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b39a56 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b39a5c mov eax, dword ptr [0x11b65dec] */
  EAX = (r32((uint32_t)(0x11b65dec)));
  /* 11b39a61 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b39a63 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11b39a67 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 11b39a6d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_11b39a70:;
  /* 11b39a70 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39a74 je 0x11b39a84 */
  if (C.zf) goto L_11b39a84;
  /* 11b39a76 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b39a79 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b39a7f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 11b39a82 jmp 0x11b39a8b */
  goto L_11b39a8b;
L_11b39a84:;
  /* 11b39a84 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_11b39a8b:;
  /* 11b39a8b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11b39a8e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 11b39a91 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 11b39a95 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b39a98 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b39a9e push edx */
  push32((uint32_t)(EDX));
  /* 11b39a9f push 0x11b62f9c */
  push32((uint32_t)(0x11b62f9cu));
  /* 11b39aa4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11b39aa7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b39aaa lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 11b39aae push ecx */
  push32((uint32_t)(ECX));
  /* 11b39aaf call 0x11b3fa90 */
  push32(0x11b39ab4u); f_11b3fa90();
  /* 11b39ab4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39ab7 jmp 0x11b399f2 */
  goto L_11b399f2;
L_11b39abc:;
  /* 11b39abc mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11b39abf mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_11b39ac4:;
  /* 11b39ac4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11b39ac7 push eax */
  push32((uint32_t)(EAX));
  /* 11b39ac8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 11b39acb push ecx */
  push32((uint32_t)(ECX));
  /* 11b39acc push 0x11b62f8c */
  push32((uint32_t)(0x11b62f8cu));
  /* 11b39ad1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39ad3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39ad5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39ad7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39ad9 call 0x11b36850 */
  push32(0x11b39adeu); f_11b36850();
  /* 11b39ade add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39ae1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39ae4 jne 0x11b39ae7 */
  if (!C.zf) goto L_11b39ae7;
  /* 11b39ae6 int3  */
  x86_unimpl("int3 @ 0x11b39ae6");
L_11b39ae7:;
  /* 11b39ae7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b39ae9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b39aeb jne 0x11b39ac4 */
  if (!C.zf) goto L_11b39ac4;
  /* 11b39aed pop edi */
  EDI = (pop32());
  /* 11b39aee pop esi */
  ESI = (pop32());
  /* 11b39aef pop ebx */
  EBX = (pop32());
  /* 11b39af0 mov esp, ebp */
  ESP = (EBP);
  /* 11b39af2 pop ebp */
  EBP = (pop32());
  /* 11b39af3 ret  */
  ESPCHK(0x11b399e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b00 @ 0x11b39b00 (116 bytes, 46 insns) */
void f_11b39b00(void) {
  FTRACE(0x11b39b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b39b00 push ebp */
  push32((uint32_t)(EBP));
  /* 11b39b01 mov ebp, esp */
  EBP = (ESP);
  /* 11b39b03 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b39b06 push ebx */
  push32((uint32_t)(EBX));
  /* 11b39b07 push esi */
  push32((uint32_t)(ESI));
  /* 11b39b08 push edi */
  push32((uint32_t)(EDI));
  /* 11b39b09 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11b39b0c push eax */
  push32((uint32_t)(EAX));
  /* 11b39b0d call 0x11b39480 */
  push32(0x11b39b12u); f_11b39480();
  /* 11b39b12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39b15 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39b19 jne 0x11b39b34 */
  if (!C.zf) goto L_11b39b34;
  /* 11b39b1b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39b1f jne 0x11b39b34 */
  if (!C.zf) goto L_11b39b34;
  /* 11b39b21 mov ecx, dword ptr [0x11b65ab4] */
  ECX = (r32((uint32_t)(0x11b65ab4)));
  /* 11b39b27 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11b39b2a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b39b2c je 0x11b39b6b */
  if (C.zf) goto L_11b39b6b;
  /* 11b39b2e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39b32 je 0x11b39b6b */
  if (C.zf) goto L_11b39b6b;
L_11b39b34:;
  /* 11b39b34 push 0x11b62fa4 */
  push32((uint32_t)(0x11b62fa4u));
  /* 11b39b39 push 0x11b62970 */
  push32((uint32_t)(0x11b62970u));
  /* 11b39b3e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39b40 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39b42 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39b44 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39b46 call 0x11b36850 */
  push32(0x11b39b4bu); f_11b36850();
  /* 11b39b4b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39b4e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39b51 jne 0x11b39b54 */
  if (!C.zf) goto L_11b39b54;
  /* 11b39b53 int3  */
  x86_unimpl("int3 @ 0x11b39b53");
L_11b39b54:;
  /* 11b39b54 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b39b56 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b39b58 jne 0x11b39b34 */
  if (!C.zf) goto L_11b39b34;
  /* 11b39b5a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39b5c call 0x11b39720 */
  push32(0x11b39b61u); f_11b39720();
  /* 11b39b61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39b64 mov eax, 1 */
  EAX = (0x1u);
  /* 11b39b69 jmp 0x11b39b6d */
  goto L_11b39b6d;
L_11b39b6b:;
  /* 11b39b6b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b39b6d:;
  /* 11b39b6d pop edi */
  EDI = (pop32());
  /* 11b39b6e pop esi */
  ESI = (pop32());
  /* 11b39b6f pop ebx */
  EBX = (pop32());
  /* 11b39b70 mov esp, ebp */
  ESP = (EBP);
  /* 11b39b72 pop ebp */
  EBP = (pop32());
  /* 11b39b73 ret  */
  ESPCHK(0x11b39b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b80 @ 0x11b39b80 (197 bytes, 79 insns) */
void f_11b39b80(void) {
  FTRACE(0x11b39b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b39b80 push ebp */
  push32((uint32_t)(EBP));
  /* 11b39b81 mov ebp, esp */
  EBP = (ESP);
  /* 11b39b83 push ecx */
  push32((uint32_t)(ECX));
  /* 11b39b84 push ebx */
  push32((uint32_t)(EBX));
  /* 11b39b85 push esi */
  push32((uint32_t)(ESI));
  /* 11b39b86 push edi */
  push32((uint32_t)(EDI));
  /* 11b39b87 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39b8b jne 0x11b39b92 */
  if (!C.zf) goto L_11b39b92;
  /* 11b39b8d jmp 0x11b39c3e */
  goto L_11b39c3e;
L_11b39b92:;
  /* 11b39b92 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b39b99 jmp 0x11b39ba4 */
  goto L_11b39ba4;
L_11b39b9b:;
  /* 11b39b9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39b9e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39ba1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b39ba4:;
  /* 11b39ba4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39ba8 jge 0x11b39bee */
  if ((C.sf==C.of)) goto L_11b39bee;
L_11b39baa:;
  /* 11b39baa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39bad mov edx, dword ptr [ecx*4 + 0x11b65ac4] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11b65ac4)));
  /* 11b39bb4 push edx */
  push32((uint32_t)(EDX));
  /* 11b39bb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39bb8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b39bbb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 11b39bbf push edx */
  push32((uint32_t)(EDX));
  /* 11b39bc0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39bc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b39bc6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 11b39bca push edx */
  push32((uint32_t)(EDX));
  /* 11b39bcb push 0x11b63000 */
  push32((uint32_t)(0x11b63000u));
  /* 11b39bd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39bd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39bd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39bd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39bd8 call 0x11b36850 */
  push32(0x11b39bddu); f_11b36850();
  /* 11b39bdd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39be0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39be3 jne 0x11b39be6 */
  if (!C.zf) goto L_11b39be6;
  /* 11b39be5 int3  */
  x86_unimpl("int3 @ 0x11b39be5");
L_11b39be6:;
  /* 11b39be6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b39be8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b39bea jne 0x11b39baa */
  if (!C.zf) goto L_11b39baa;
  /* 11b39bec jmp 0x11b39b9b */
  goto L_11b39b9b;
L_11b39bee:;
  /* 11b39bee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b39bf1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11b39bf4 push edx */
  push32((uint32_t)(EDX));
  /* 11b39bf5 push 0x11b62fdc */
  push32((uint32_t)(0x11b62fdcu));
  /* 11b39bfa push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39bfc push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39bfe push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39c00 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39c02 call 0x11b36850 */
  push32(0x11b39c07u); f_11b36850();
  /* 11b39c07 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39c0a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39c0d jne 0x11b39c10 */
  if (!C.zf) goto L_11b39c10;
  /* 11b39c0f int3  */
  x86_unimpl("int3 @ 0x11b39c0f");
L_11b39c10:;
  /* 11b39c10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b39c12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b39c14 jne 0x11b39bee */
  if (!C.zf) goto L_11b39bee;
L_11b39c16:;
  /* 11b39c16 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b39c19 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 11b39c1c push edx */
  push32((uint32_t)(EDX));
  /* 11b39c1d push 0x11b62fbc */
  push32((uint32_t)(0x11b62fbcu));
  /* 11b39c22 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39c24 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39c26 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39c28 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39c2a call 0x11b36850 */
  push32(0x11b39c2fu); f_11b36850();
  /* 11b39c2f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39c32 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39c35 jne 0x11b39c38 */
  if (!C.zf) goto L_11b39c38;
  /* 11b39c37 int3  */
  x86_unimpl("int3 @ 0x11b39c37");
L_11b39c38:;
  /* 11b39c38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b39c3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b39c3c jne 0x11b39c16 */
  if (!C.zf) goto L_11b39c16;
L_11b39c3e:;
  /* 11b39c3e pop edi */
  EDI = (pop32());
  /* 11b39c3f pop esi */
  ESI = (pop32());
  /* 11b39c40 pop ebx */
  EBX = (pop32());
  /* 11b39c41 mov esp, ebp */
  ESP = (EBP);
  /* 11b39c43 pop ebp */
  EBP = (pop32());
  /* 11b39c44 ret  */
  ESPCHK(0x11b39b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c50 @ 0x11b39c50 (329 bytes, 102 insns) */
void f_11b39c50(void) {
  FTRACE(0x11b39c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b39c50 push ebp */
  push32((uint32_t)(EBP));
  /* 11b39c51 mov ebp, esp */
  EBP = (ESP);
  /* 11b39c53 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b39c56 cmp dword ptr [0x11b69630], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b69630))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39c5d jne 0x11b39c64 */
  if (!C.zf) goto L_11b39c64;
  /* 11b39c5f call 0x11b40370 */
  push32(0x11b39c64u); f_11b40370();
L_11b39c64:;
  /* 11b39c64 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b39c6b mov eax, dword ptr [0x11b67afc] */
  EAX = (r32((uint32_t)(0x11b67afc)));
  /* 11b39c70 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b39c73:;
  /* 11b39c73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39c76 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b39c79 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b39c7b je 0x11b39ca9 */
  if (C.zf) goto L_11b39ca9;
  /* 11b39c7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39c80 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b39c83 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39c86 je 0x11b39c91 */
  if (C.zf) goto L_11b39c91;
  /* 11b39c88 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b39c8b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39c8e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11b39c91:;
  /* 11b39c91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39c94 push eax */
  push32((uint32_t)(EAX));
  /* 11b39c95 call 0x11b3b830 */
  push32(0x11b39c9au); f_11b3b830();
  /* 11b39c9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39c9d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39ca0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11b39ca4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b39ca7 jmp 0x11b39c73 */
  goto L_11b39c73;
L_11b39ca9:;
  /* 11b39ca9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 11b39cab push 0x11b63020 */
  push32((uint32_t)(0x11b63020u));
  /* 11b39cb0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b39cb2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b39cb5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 11b39cbc push ecx */
  push32((uint32_t)(ECX));
  /* 11b39cbd call 0x11b37ce0 */
  push32(0x11b39cc2u); f_11b37ce0();
  /* 11b39cc2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39cc5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b39cc8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b39ccb mov dword ptr [0x11b67b30], edx */
  w32((uint32_t)(0x11b67b30), (EDX));
  /* 11b39cd1 cmp dword ptr [0x11b67b30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67b30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39cd8 jne 0x11b39ce4 */
  if (!C.zf) goto L_11b39ce4;
  /* 11b39cda push 9 */
  push32((uint32_t)(0x9u));
  /* 11b39cdc call 0x11b36360 */
  push32(0x11b39ce1u); f_11b36360();
  /* 11b39ce1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b39ce4:;
  /* 11b39ce4 mov eax, dword ptr [0x11b67afc] */
  EAX = (r32((uint32_t)(0x11b67afc)));
  /* 11b39ce9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b39cec jmp 0x11b39cf7 */
  goto L_11b39cf7;
L_11b39cee:;
  /* 11b39cee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39cf1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39cf4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b39cf7:;
  /* 11b39cf7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39cfa movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b39cfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b39cff je 0x11b39d67 */
  if (C.zf) goto L_11b39d67;
  /* 11b39d01 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39d04 push ecx */
  push32((uint32_t)(ECX));
  /* 11b39d05 call 0x11b3b830 */
  push32(0x11b39d0au); f_11b3b830();
  /* 11b39d0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39d0d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39d10 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11b39d13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39d16 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b39d19 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39d1c je 0x11b39d65 */
  if (C.zf) goto L_11b39d65;
  /* 11b39d1e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11b39d20 push 0x11b63020 */
  push32((uint32_t)(0x11b63020u));
  /* 11b39d25 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b39d27 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b39d2a push ecx */
  push32((uint32_t)(ECX));
  /* 11b39d2b call 0x11b37ce0 */
  push32(0x11b39d30u); f_11b37ce0();
  /* 11b39d30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39d33 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b39d36 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11b39d38 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b39d3b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39d3e jne 0x11b39d4a */
  if (!C.zf) goto L_11b39d4a;
  /* 11b39d40 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b39d42 call 0x11b36360 */
  push32(0x11b39d47u); f_11b36360();
  /* 11b39d47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b39d4a:;
  /* 11b39d4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39d4d push ecx */
  push32((uint32_t)(ECX));
  /* 11b39d4e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b39d51 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b39d53 push eax */
  push32((uint32_t)(EAX));
  /* 11b39d54 call 0x11b3b9b0 */
  push32(0x11b39d59u); f_11b3b9b0();
  /* 11b39d59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39d5c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b39d5f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39d62 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11b39d65:;
  /* 11b39d65 jmp 0x11b39cee */
  goto L_11b39cee;
L_11b39d67:;
  /* 11b39d67 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b39d69 mov edx, dword ptr [0x11b67afc] */
  EDX = (r32((uint32_t)(0x11b67afc)));
  /* 11b39d6f push edx */
  push32((uint32_t)(EDX));
  /* 11b39d70 call 0x11b38770 */
  push32(0x11b39d75u); f_11b38770();
  /* 11b39d75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39d78 mov dword ptr [0x11b67afc], 0 */
  w32((uint32_t)(0x11b67afc), (0x0u));
  /* 11b39d82 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b39d85 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11b39d8b mov dword ptr [0x11b69620], 1 */
  w32((uint32_t)(0x11b69620), (0x1u));
  /* 11b39d95 mov esp, ebp */
  ESP = (EBP);
  /* 11b39d97 pop ebp */
  EBP = (pop32());
  /* 11b39d98 ret  */
  ESPCHK(0x11b39c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10009da0 @ 0x11b39da0 (216 bytes, 69 insns) */
void f_11b39da0(void) {
  FTRACE(0x11b39da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b39da0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b39da1 mov ebp, esp */
  EBP = (ESP);
  /* 11b39da3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b39da6 cmp dword ptr [0x11b69630], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b69630))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39dad jne 0x11b39db4 */
  if (!C.zf) goto L_11b39db4;
  /* 11b39daf call 0x11b40370 */
  push32(0x11b39db4u); f_11b40370();
L_11b39db4:;
  /* 11b39db4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11b39db9 push 0x11b67b6c */
  push32((uint32_t)(0x11b67b6cu));
  /* 11b39dbe push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39dc0 call dword ptr [0x11b6a3f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3f0))), 0x11b39dc6u);
  /* 11b39dc6 mov dword ptr [0x11b67b40], 0x11b67b6c */
  w32((uint32_t)(0x11b67b40), (0x11b67b6cu));
  /* 11b39dd0 mov eax, dword ptr [0x11b69648] */
  EAX = (r32((uint32_t)(0x11b69648)));
  /* 11b39dd5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b39dd8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b39dda jne 0x11b39de7 */
  if (!C.zf) goto L_11b39de7;
  /* 11b39ddc mov edx, dword ptr [0x11b67b40] */
  EDX = (r32((uint32_t)(0x11b67b40)));
  /* 11b39de2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11b39de5 jmp 0x11b39def */
  goto L_11b39def;
L_11b39de7:;
  /* 11b39de7 mov eax, dword ptr [0x11b69648] */
  EAX = (r32((uint32_t)(0x11b69648)));
  /* 11b39dec mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11b39def:;
  /* 11b39def mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b39df2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11b39df5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11b39df8 push edx */
  push32((uint32_t)(EDX));
  /* 11b39df9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11b39dfc push eax */
  push32((uint32_t)(EAX));
  /* 11b39dfd push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39dff push 0 */
  push32((uint32_t)(0x0u));
  /* 11b39e01 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b39e04 push ecx */
  push32((uint32_t)(ECX));
  /* 11b39e05 call 0x11b39e80 */
  push32(0x11b39e0au); f_11b39e80();
  /* 11b39e0a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39e0d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11b39e12 push 0x11b6302c */
  push32((uint32_t)(0x11b6302cu));
  /* 11b39e17 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b39e19 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b39e1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39e1f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 11b39e22 push ecx */
  push32((uint32_t)(ECX));
  /* 11b39e23 call 0x11b37ce0 */
  push32(0x11b39e28u); f_11b37ce0();
  /* 11b39e28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39e2b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b39e2e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39e32 jne 0x11b39e3e */
  if (!C.zf) goto L_11b39e3e;
  /* 11b39e34 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b39e36 call 0x11b36360 */
  push32(0x11b39e3bu); f_11b36360();
  /* 11b39e3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b39e3e:;
  /* 11b39e3e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11b39e41 push edx */
  push32((uint32_t)(EDX));
  /* 11b39e42 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11b39e45 push eax */
  push32((uint32_t)(EAX));
  /* 11b39e46 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b39e49 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b39e4c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 11b39e4f push eax */
  push32((uint32_t)(EAX));
  /* 11b39e50 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b39e53 push ecx */
  push32((uint32_t)(ECX));
  /* 11b39e54 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b39e57 push edx */
  push32((uint32_t)(EDX));
  /* 11b39e58 call 0x11b39e80 */
  push32(0x11b39e5du); f_11b39e80();
  /* 11b39e5d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39e60 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b39e63 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b39e66 mov dword ptr [0x11b67b24], eax */
  w32((uint32_t)(0x11b67b24), (EAX));
  /* 11b39e6b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b39e6e mov dword ptr [0x11b67b28], ecx */
  w32((uint32_t)(0x11b67b28), (ECX));
  /* 11b39e74 mov esp, ebp */
  ESP = (EBP);
  /* 11b39e76 pop ebp */
  EBP = (pop32());
  /* 11b39e77 ret  */
  ESPCHK(0x11b39da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e80 @ 0x11b39e80 (1060 bytes, 360 insns) */
void f_11b39e80(void) {
  FTRACE(0x11b39e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b39e80 push ebp */
  push32((uint32_t)(EBP));
  /* 11b39e81 mov ebp, esp */
  EBP = (ESP);
  /* 11b39e83 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b39e86 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b39e89 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11b39e8f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b39e92 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 11b39e98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b39e9b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b39e9e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39ea2 je 0x11b39eb5 */
  if (C.zf) goto L_11b39eb5;
  /* 11b39ea4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b39ea7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b39eaa mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11b39eac mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b39eaf add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39eb2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_11b39eb5:;
  /* 11b39eb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39eb8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b39ebb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39ebe jne 0x11b39f8d */
  if (!C.zf) goto L_11b39f8d;
L_11b39ec4:;
  /* 11b39ec4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39ec7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39eca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b39ecd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39ed0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b39ed3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39ed6 je 0x11b39f52 */
  if (C.zf) goto L_11b39f52;
  /* 11b39ed8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39edb movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b39ede test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b39ee0 je 0x11b39f52 */
  if (C.zf) goto L_11b39f52;
  /* 11b39ee2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39ee5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b39ee7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b39ee9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b39eeb mov al, byte ptr [edx + 0x11b69381] */
  AL = (r8((uint32_t)(EDX + 0x11b69381)));
  /* 11b39ef1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11b39ef4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b39ef6 je 0x11b39f27 */
  if (C.zf) goto L_11b39f27;
  /* 11b39ef8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b39efb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b39efd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39f00 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b39f03 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11b39f05 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39f09 je 0x11b39f27 */
  if (C.zf) goto L_11b39f27;
  /* 11b39f0b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b39f0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39f11 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b39f13 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11b39f15 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b39f18 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39f1b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11b39f1e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39f21 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39f24 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b39f27:;
  /* 11b39f27 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b39f2a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b39f2c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39f2f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b39f32 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11b39f34 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39f38 je 0x11b39f4d */
  if (C.zf) goto L_11b39f4d;
  /* 11b39f3a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b39f3d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39f40 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b39f42 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11b39f44 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b39f47 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39f4a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11b39f4d:;
  /* 11b39f4d jmp 0x11b39ec4 */
  goto L_11b39ec4;
L_11b39f52:;
  /* 11b39f52 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b39f55 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b39f57 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39f5a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b39f5d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11b39f5f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39f63 je 0x11b39f74 */
  if (C.zf) goto L_11b39f74;
  /* 11b39f65 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b39f68 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11b39f6b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b39f6e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39f71 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11b39f74:;
  /* 11b39f74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39f77 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b39f7a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39f7d jne 0x11b39f88 */
  if (!C.zf) goto L_11b39f88;
  /* 11b39f7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39f82 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39f85 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b39f88:;
  /* 11b39f88 jmp 0x11b3a05c */
  goto L_11b3a05c;
L_11b39f8d:;
  /* 11b39f8d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b39f90 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b39f92 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39f95 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b39f98 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11b39f9a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39f9e je 0x11b39fb3 */
  if (C.zf) goto L_11b39fb3;
  /* 11b39fa0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b39fa3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39fa6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b39fa8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11b39faa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b39fad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39fb0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11b39fb3:;
  /* 11b39fb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39fb6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b39fb8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 11b39fbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39fbe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39fc1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b39fc4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b39fc7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b39fcd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b39fcf mov dl, byte ptr [ecx + 0x11b69381] */
  DL = (r8((uint32_t)(ECX + 0x11b69381)));
  /* 11b39fd5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11b39fd8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b39fda je 0x11b3a00b */
  if (C.zf) goto L_11b3a00b;
  /* 11b39fdc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b39fdf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b39fe1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39fe4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b39fe7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11b39fe9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b39fed je 0x11b3a002 */
  if (C.zf) goto L_11b3a002;
  /* 11b39fef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b39ff2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b39ff5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b39ff7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11b39ff9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b39ffc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b39fff mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11b3a002:;
  /* 11b3a002 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3a005 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a008 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b3a00b:;
  /* 11b3a00b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3a00e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b3a014 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a017 je 0x11b3a037 */
  if (C.zf) goto L_11b3a037;
  /* 11b3a019 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3a01c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3a021 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3a023 je 0x11b3a037 */
  if (C.zf) goto L_11b3a037;
  /* 11b3a025 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3a028 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b3a02e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a031 jne 0x11b39f8d */
  if (!C.zf) goto L_11b39f8d;
L_11b3a037:;
  /* 11b3a037 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3a03a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b3a040 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3a042 jne 0x11b3a04f */
  if (!C.zf) goto L_11b3a04f;
  /* 11b3a044 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3a047 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3a04a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b3a04d jmp 0x11b3a05c */
  goto L_11b3a05c;
L_11b3a04f:;
  /* 11b3a04f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a053 je 0x11b3a05c */
  if (C.zf) goto L_11b3a05c;
  /* 11b3a055 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3a058 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_11b3a05c:;
  /* 11b3a05c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11b3a063:;
  /* 11b3a063 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3a066 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b3a069 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3a06b je 0x11b3a08e */
  if (C.zf) goto L_11b3a08e;
L_11b3a06d:;
  /* 11b3a06d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3a070 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b3a073 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a076 je 0x11b3a083 */
  if (C.zf) goto L_11b3a083;
  /* 11b3a078 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3a07b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b3a07e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a081 jne 0x11b3a08e */
  if (!C.zf) goto L_11b3a08e;
L_11b3a083:;
  /* 11b3a083 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3a086 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a089 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b3a08c jmp 0x11b3a06d */
  goto L_11b3a06d;
L_11b3a08e:;
  /* 11b3a08e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3a091 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b3a094 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3a096 jne 0x11b3a09d */
  if (!C.zf) goto L_11b3a09d;
  /* 11b3a098 jmp 0x11b3a27b */
  goto L_11b3a27b;
L_11b3a09d:;
  /* 11b3a09d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a0a1 je 0x11b3a0b4 */
  if (C.zf) goto L_11b3a0b4;
  /* 11b3a0a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3a0a6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3a0a9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11b3a0ab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3a0ae add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a0b1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11b3a0b4:;
  /* 11b3a0b4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b3a0b7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b3a0b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a0bc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b3a0bf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11b3a0c1:;
  /* 11b3a0c1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11b3a0c8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11b3a0cf:;
  /* 11b3a0cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3a0d2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b3a0d5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a0d8 jne 0x11b3a0ee */
  if (!C.zf) goto L_11b3a0ee;
  /* 11b3a0da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3a0dd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a0e0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b3a0e3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3a0e6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a0e9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11b3a0ec jmp 0x11b3a0cf */
  goto L_11b3a0cf;
L_11b3a0ee:;
  /* 11b3a0ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3a0f1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b3a0f4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a0f7 jne 0x11b3a14a */
  if (!C.zf) goto L_11b3a14a;
  /* 11b3a0f9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3a0fc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3a0fe mov ecx, 2 */
  ECX = (0x2u);
  /* 11b3a103 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b3a105 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3a107 jne 0x11b3a142 */
  if (!C.zf) goto L_11b3a142;
  /* 11b3a109 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a10d je 0x11b3a12f */
  if (C.zf) goto L_11b3a12f;
  /* 11b3a10f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3a112 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11b3a116 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a119 jne 0x11b3a126 */
  if (!C.zf) goto L_11b3a126;
  /* 11b3a11b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3a11e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a121 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b3a124 jmp 0x11b3a12d */
  goto L_11b3a12d;
L_11b3a126:;
  /* 11b3a126 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11b3a12d:;
  /* 11b3a12d jmp 0x11b3a136 */
  goto L_11b3a136;
L_11b3a12f:;
  /* 11b3a12f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11b3a136:;
  /* 11b3a136 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3a138 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a13c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11b3a13f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11b3a142:;
  /* 11b3a142 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3a145 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11b3a147 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11b3a14a:;
  /* 11b3a14a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3a14d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3a150 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3a153 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11b3a156 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3a158 je 0x11b3a17e */
  if (C.zf) goto L_11b3a17e;
  /* 11b3a15a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a15e je 0x11b3a16f */
  if (C.zf) goto L_11b3a16f;
  /* 11b3a160 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3a163 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 11b3a166 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3a169 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a16c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_11b3a16f:;
  /* 11b3a16f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b3a172 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b3a174 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a177 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b3a17a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11b3a17c jmp 0x11b3a14a */
  goto L_11b3a14a;
L_11b3a17e:;
  /* 11b3a17e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3a181 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b3a184 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3a186 je 0x11b3a1a4 */
  if (C.zf) goto L_11b3a1a4;
  /* 11b3a188 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a18c jne 0x11b3a1a9 */
  if (!C.zf) goto L_11b3a1a9;
  /* 11b3a18e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3a191 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b3a194 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a197 je 0x11b3a1a4 */
  if (C.zf) goto L_11b3a1a4;
  /* 11b3a199 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3a19c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b3a19f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a1a2 jne 0x11b3a1a9 */
  if (!C.zf) goto L_11b3a1a9;
L_11b3a1a4:;
  /* 11b3a1a4 jmp 0x11b3a254 */
  goto L_11b3a254;
L_11b3a1a9:;
  /* 11b3a1a9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a1ad je 0x11b3a246 */
  if (C.zf) goto L_11b3a246;
  /* 11b3a1b3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a1b7 je 0x11b3a20d */
  if (C.zf) goto L_11b3a20d;
  /* 11b3a1b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3a1bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3a1be mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b3a1c0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3a1c2 mov cl, byte ptr [eax + 0x11b69381] */
  CL = (r8((uint32_t)(EAX + 0x11b69381)));
  /* 11b3a1c8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11b3a1cb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3a1cd je 0x11b3a1f8 */
  if (C.zf) goto L_11b3a1f8;
  /* 11b3a1cf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3a1d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3a1d5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11b3a1d7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11b3a1d9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3a1dc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a1df mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 11b3a1e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3a1e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a1e8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b3a1eb mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b3a1ee mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b3a1f0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a1f3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b3a1f6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11b3a1f8:;
  /* 11b3a1f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3a1fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3a1fe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b3a200 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11b3a202 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3a205 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a208 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11b3a20b jmp 0x11b3a239 */
  goto L_11b3a239;
L_11b3a20d:;
  /* 11b3a20d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3a210 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3a212 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b3a214 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3a216 mov cl, byte ptr [eax + 0x11b69381] */
  CL = (r8((uint32_t)(EAX + 0x11b69381)));
  /* 11b3a21c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11b3a21f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3a221 je 0x11b3a239 */
  if (C.zf) goto L_11b3a239;
  /* 11b3a223 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3a226 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a229 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b3a22c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b3a22f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b3a231 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a234 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b3a237 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11b3a239:;
  /* 11b3a239 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b3a23c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b3a23e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a241 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b3a244 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11b3a246:;
  /* 11b3a246 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3a249 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a24c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b3a24f jmp 0x11b3a0c1 */
  goto L_11b3a0c1;
L_11b3a254:;
  /* 11b3a254 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a258 je 0x11b3a269 */
  if (C.zf) goto L_11b3a269;
  /* 11b3a25a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3a25d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11b3a260 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3a263 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a266 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11b3a269:;
  /* 11b3a269 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b3a26c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b3a26e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a271 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b3a274 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11b3a276 jmp 0x11b3a063 */
  goto L_11b3a063;
L_11b3a27b:;
  /* 11b3a27b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a27f je 0x11b3a293 */
  if (C.zf) goto L_11b3a293;
  /* 11b3a281 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3a284 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11b3a28a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3a28d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a290 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11b3a293:;
  /* 11b3a293 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b3a296 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b3a298 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a29b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b3a29e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11b3a2a0 mov esp, ebp */
  ESP = (EBP);
  /* 11b3a2a2 pop ebp */
  EBP = (pop32());
  /* 11b3a2a3 ret  */
  ESPCHK(0x11b39e80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2b0 @ 0x11b3a2b0 (537 bytes, 173 insns) */
void f_11b3a2b0(void) {
  FTRACE(0x11b3a2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3a2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3a2b1 mov ebp, esp */
  EBP = (ESP);
  /* 11b3a2b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3a2b6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11b3a2bd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11b3a2c4 cmp dword ptr [0x11b67c70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67c70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a2cb jne 0x11b3a30a */
  if (!C.zf) goto L_11b3a30a;
  /* 11b3a2cd call dword ptr [0x11b6a378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a378))), 0x11b3a2d3u);
  /* 11b3a2d3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11b3a2d6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a2da je 0x11b3a2e8 */
  if (C.zf) goto L_11b3a2e8;
  /* 11b3a2dc mov dword ptr [0x11b67c70], 1 */
  w32((uint32_t)(0x11b67c70), (0x1u));
  /* 11b3a2e6 jmp 0x11b3a30a */
  goto L_11b3a30a;
L_11b3a2e8:;
  /* 11b3a2e8 call dword ptr [0x11b6a388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a388))), 0x11b3a2eeu);
  /* 11b3a2ee mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11b3a2f1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a2f5 je 0x11b3a303 */
  if (C.zf) goto L_11b3a303;
  /* 11b3a2f7 mov dword ptr [0x11b67c70], 2 */
  w32((uint32_t)(0x11b67c70), (0x2u));
  /* 11b3a301 jmp 0x11b3a30a */
  goto L_11b3a30a;
L_11b3a303:;
  /* 11b3a303 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3a305 jmp 0x11b3a4c5 */
  goto L_11b3a4c5;
L_11b3a30a:;
  /* 11b3a30a cmp dword ptr [0x11b67c70], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b67c70))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a311 jne 0x11b3a40e */
  if (!C.zf) goto L_11b3a40e;
  /* 11b3a317 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a31b jne 0x11b3a333 */
  if (!C.zf) goto L_11b3a333;
  /* 11b3a31d call dword ptr [0x11b6a378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a378))), 0x11b3a323u);
  /* 11b3a323 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11b3a326 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a32a jne 0x11b3a333 */
  if (!C.zf) goto L_11b3a333;
  /* 11b3a32c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3a32e jmp 0x11b3a4c5 */
  goto L_11b3a4c5;
L_11b3a333:;
  /* 11b3a333 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3a336 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11b3a339:;
  /* 11b3a339 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3a33c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3a33e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11b3a341 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3a343 je 0x11b3a365 */
  if (C.zf) goto L_11b3a365;
  /* 11b3a345 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3a348 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a34b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b3a34e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3a351 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3a353 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11b3a356 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3a358 jne 0x11b3a363 */
  if (!C.zf) goto L_11b3a363;
  /* 11b3a35a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3a35d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a360 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11b3a363:;
  /* 11b3a363 jmp 0x11b3a339 */
  goto L_11b3a339;
L_11b3a365:;
  /* 11b3a365 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3a368 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3a36b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11b3a36d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a370 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b3a373 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3a375 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3a377 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3a379 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3a37b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3a37e push edx */
  push32((uint32_t)(EDX));
  /* 11b3a37f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3a382 push eax */
  push32((uint32_t)(EAX));
  /* 11b3a383 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3a385 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3a387 call dword ptr [0x11b6a380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a380))), 0x11b3a38du);
  /* 11b3a38d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11b3a390 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a394 je 0x11b3a3b4 */
  if (C.zf) goto L_11b3a3b4;
  /* 11b3a396 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11b3a398 push 0x11b63038 */
  push32((uint32_t)(0x11b63038u));
  /* 11b3a39d push 2 */
  push32((uint32_t)(0x2u));
  /* 11b3a39f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3a3a2 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3a3a3 call 0x11b37ce0 */
  push32(0x11b3a3a8u); f_11b37ce0();
  /* 11b3a3a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a3ab mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11b3a3ae cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a3b2 jne 0x11b3a3c5 */
  if (!C.zf) goto L_11b3a3c5;
L_11b3a3b4:;
  /* 11b3a3b4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3a3b7 push edx */
  push32((uint32_t)(EDX));
  /* 11b3a3b8 call dword ptr [0x11b6a384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a384))), 0x11b3a3beu);
  /* 11b3a3be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3a3c0 jmp 0x11b3a4c5 */
  goto L_11b3a4c5;
L_11b3a3c5:;
  /* 11b3a3c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3a3c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3a3c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3a3cc push eax */
  push32((uint32_t)(EAX));
  /* 11b3a3cd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3a3d0 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3a3d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3a3d4 push edx */
  push32((uint32_t)(EDX));
  /* 11b3a3d5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3a3d8 push eax */
  push32((uint32_t)(EAX));
  /* 11b3a3d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3a3db push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3a3dd call dword ptr [0x11b6a380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a380))), 0x11b3a3e3u);
  /* 11b3a3e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3a3e5 jne 0x11b3a3fc */
  if (!C.zf) goto L_11b3a3fc;
  /* 11b3a3e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b3a3e9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3a3ec push ecx */
  push32((uint32_t)(ECX));
  /* 11b3a3ed call 0x11b38770 */
  push32(0x11b3a3f2u); f_11b38770();
  /* 11b3a3f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a3f5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_11b3a3fc:;
  /* 11b3a3fc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3a3ff push edx */
  push32((uint32_t)(EDX));
  /* 11b3a400 call dword ptr [0x11b6a384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a384))), 0x11b3a406u);
  /* 11b3a406 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3a409 jmp 0x11b3a4c5 */
  goto L_11b3a4c5;
L_11b3a40e:;
  /* 11b3a40e cmp dword ptr [0x11b67c70], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11b67c70))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a415 jne 0x11b3a4c3 */
  if (!C.zf) goto L_11b3a4c3;
  /* 11b3a41b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a41f jne 0x11b3a437 */
  if (!C.zf) goto L_11b3a437;
  /* 11b3a421 call dword ptr [0x11b6a388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a388))), 0x11b3a427u);
  /* 11b3a427 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11b3a42a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a42e jne 0x11b3a437 */
  if (!C.zf) goto L_11b3a437;
  /* 11b3a430 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3a432 jmp 0x11b3a4c5 */
  goto L_11b3a4c5;
L_11b3a437:;
  /* 11b3a437 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3a43a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11b3a43d:;
  /* 11b3a43d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3a440 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b3a443 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3a445 je 0x11b3a465 */
  if (C.zf) goto L_11b3a465;
  /* 11b3a447 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3a44a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a44d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b3a450 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3a453 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b3a456 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3a458 jne 0x11b3a463 */
  if (!C.zf) goto L_11b3a463;
  /* 11b3a45a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3a45d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a460 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11b3a463:;
  /* 11b3a463 jmp 0x11b3a43d */
  goto L_11b3a43d;
L_11b3a465:;
  /* 11b3a465 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3a468 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3a46b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a46e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11b3a471 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 11b3a476 push 0x11b63038 */
  push32((uint32_t)(0x11b63038u));
  /* 11b3a47b push 2 */
  push32((uint32_t)(0x2u));
  /* 11b3a47d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3a480 push edx */
  push32((uint32_t)(EDX));
  /* 11b3a481 call 0x11b37ce0 */
  push32(0x11b3a486u); f_11b37ce0();
  /* 11b3a486 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a489 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b3a48c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a490 jne 0x11b3a4a0 */
  if (!C.zf) goto L_11b3a4a0;
  /* 11b3a492 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3a495 push eax */
  push32((uint32_t)(EAX));
  /* 11b3a496 call dword ptr [0x11b6a394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a394))), 0x11b3a49cu);
  /* 11b3a49c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3a49e jmp 0x11b3a4c5 */
  goto L_11b3a4c5;
L_11b3a4a0:;
  /* 11b3a4a0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3a4a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3a4a4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3a4a7 push edx */
  push32((uint32_t)(EDX));
  /* 11b3a4a8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3a4ab push eax */
  push32((uint32_t)(EAX));
  /* 11b3a4ac call 0x11b403a0 */
  push32(0x11b3a4b1u); f_11b403a0();
  /* 11b3a4b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a4b4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3a4b7 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3a4b8 call dword ptr [0x11b6a394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a394))), 0x11b3a4beu);
  /* 11b3a4be mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3a4c1 jmp 0x11b3a4c5 */
  goto L_11b3a4c5;
L_11b3a4c3:;
  /* 11b3a4c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b3a4c5:;
  /* 11b3a4c5 mov esp, ebp */
  ESP = (EBP);
  /* 11b3a4c7 pop ebp */
  EBP = (pop32());
  /* 11b3a4c8 ret  */
  ESPCHK(0x11b3a2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a4d0 @ 0x11b3a4d0 (77 bytes, 25 insns) */
void f_11b3a4d0(void) {
  FTRACE(0x11b3a4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3a4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3a4d1 mov ebp, esp */
  EBP = (ESP);
  /* 11b3a4d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3a4d5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11b3a4da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3a4dc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a4e0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11b3a4e3 push eax */
  push32((uint32_t)(EAX));
  /* 11b3a4e4 call dword ptr [0x11b6a37c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a37c))), 0x11b3a4eau);
  /* 11b3a4ea mov dword ptr [0x11b694ac], eax */
  w32((uint32_t)(0x11b694ac), (EAX));
  /* 11b3a4ef cmp dword ptr [0x11b694ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b694ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a4f6 jne 0x11b3a4fc */
  if (!C.zf) goto L_11b3a4fc;
  /* 11b3a4f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3a4fa jmp 0x11b3a51b */
  goto L_11b3a51b;
L_11b3a4fc:;
  /* 11b3a4fc call 0x11b3de20 */
  push32(0x11b3a501u); f_11b3de20();
  /* 11b3a501 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3a503 jne 0x11b3a516 */
  if (!C.zf) goto L_11b3a516;
  /* 11b3a505 mov ecx, dword ptr [0x11b694ac] */
  ECX = (r32((uint32_t)(0x11b694ac)));
  /* 11b3a50b push ecx */
  push32((uint32_t)(ECX));
  /* 11b3a50c call dword ptr [0x11b6a374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a374))), 0x11b3a512u);
  /* 11b3a512 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3a514 jmp 0x11b3a51b */
  goto L_11b3a51b;
L_11b3a516:;
  /* 11b3a516 mov eax, 1 */
  EAX = (0x1u);
L_11b3a51b:;
  /* 11b3a51b pop ebp */
  EBP = (pop32());
  /* 11b3a51c ret  */
  ESPCHK(0x11b3a4d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a520 @ 0x11b3a520 (156 bytes, 48 insns) */
void f_11b3a520(void) {
  FTRACE(0x11b3a520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3a520 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3a521 mov ebp, esp */
  EBP = (ESP);
  /* 11b3a523 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3a526 mov eax, dword ptr [0x11b694a8] */
  EAX = (r32((uint32_t)(0x11b694a8)));
  /* 11b3a52b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b3a52e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b3a535 jmp 0x11b3a540 */
  goto L_11b3a540;
L_11b3a537:;
  /* 11b3a537 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3a53a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a53d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b3a540:;
  /* 11b3a540 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3a543 cmp edx, dword ptr [0x11b694a4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11b694a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a549 jge 0x11b3a596 */
  if ((C.sf==C.of)) goto L_11b3a596;
  /* 11b3a54b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11b3a550 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11b3a555 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3a558 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11b3a55b push ecx */
  push32((uint32_t)(ECX));
  /* 11b3a55c call dword ptr [0x11b6a368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a368))), 0x11b3a562u);
  /* 11b3a562 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11b3a567 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3a569 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3a56c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11b3a56f push eax */
  push32((uint32_t)(EAX));
  /* 11b3a570 call dword ptr [0x11b6a368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a368))), 0x11b3a576u);
  /* 11b3a576 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3a579 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11b3a57c push edx */
  push32((uint32_t)(EDX));
  /* 11b3a57d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3a57f mov eax, dword ptr [0x11b694ac] */
  EAX = (r32((uint32_t)(0x11b694ac)));
  /* 11b3a584 push eax */
  push32((uint32_t)(EAX));
  /* 11b3a585 call dword ptr [0x11b6a36c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a36c))), 0x11b3a58bu);
  /* 11b3a58b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3a58e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a591 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b3a594 jmp 0x11b3a537 */
  goto L_11b3a537;
L_11b3a596:;
  /* 11b3a596 mov edx, dword ptr [0x11b694a8] */
  EDX = (r32((uint32_t)(0x11b694a8)));
  /* 11b3a59c push edx */
  push32((uint32_t)(EDX));
  /* 11b3a59d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3a59f mov eax, dword ptr [0x11b694ac] */
  EAX = (r32((uint32_t)(0x11b694ac)));
  /* 11b3a5a4 push eax */
  push32((uint32_t)(EAX));
  /* 11b3a5a5 call dword ptr [0x11b6a36c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a36c))), 0x11b3a5abu);
  /* 11b3a5ab mov ecx, dword ptr [0x11b694ac] */
  ECX = (r32((uint32_t)(0x11b694ac)));
  /* 11b3a5b1 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3a5b2 call dword ptr [0x11b6a374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a374))), 0x11b3a5b8u);
  /* 11b3a5b8 mov esp, ebp */
  ESP = (EBP);
  /* 11b3a5ba pop ebp */
  EBP = (pop32());
  /* 11b3a5bb ret  */
  ESPCHK(0x11b3a520u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x11b3a5c0 (73 bytes, 19 insns) */
void f_11b3a5c0(void) {
  FTRACE(0x11b3a5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3a5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3a5c1 mov ebp, esp */
  EBP = (ESP);
  /* 11b3a5c3 cmp dword ptr [0x11b67b04], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b67b04))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a5ca je 0x11b3a5de */
  if (C.zf) goto L_11b3a5de;
  /* 11b3a5cc cmp dword ptr [0x11b67b04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67b04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a5d3 jne 0x11b3a607 */
  if (!C.zf) goto L_11b3a607;
  /* 11b3a5d5 cmp dword ptr [0x11b67b08], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b67b08))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a5dc jne 0x11b3a607 */
  if (!C.zf) goto L_11b3a607;
L_11b3a5de:;
  /* 11b3a5de push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11b3a5e3 call 0x11b3a610 */
  push32(0x11b3a5e8u); f_11b3a610();
  /* 11b3a5e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a5eb cmp dword ptr [0x11b67c74], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67c74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a5f2 je 0x11b3a5fa */
  if (C.zf) goto L_11b3a5fa;
  /* 11b3a5f4 call dword ptr [0x11b67c74] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b67c74))), 0x11b3a5fau);
L_11b3a5fa:;
  /* 11b3a5fa push 0xff */
  push32((uint32_t)(0xffu));
  /* 11b3a5ff call 0x11b3a610 */
  push32(0x11b3a604u); f_11b3a610();
  /* 11b3a604 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b3a607:;
  /* 11b3a607 pop ebp */
  EBP = (pop32());
  /* 11b3a608 ret  */
  ESPCHK(0x11b3a5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a610 @ 0x11b3a610 (447 bytes, 131 insns) */
void f_11b3a610(void) {
  FTRACE(0x11b3a610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3a610 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3a611 mov ebp, esp */
  EBP = (ESP);
  /* 11b3a613 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3a619 push ebx */
  push32((uint32_t)(EBX));
  /* 11b3a61a push esi */
  push32((uint32_t)(ESI));
  /* 11b3a61b push edi */
  push32((uint32_t)(EDI));
  /* 11b3a61c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b3a623 jmp 0x11b3a62e */
  goto L_11b3a62e;
L_11b3a625:;
  /* 11b3a625 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3a628 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a62b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11b3a62e:;
  /* 11b3a62e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a632 jae 0x11b3a647 */
  if (!C.cf) goto L_11b3a647;
  /* 11b3a634 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3a637 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3a63a cmp edx, dword ptr [ecx*8 + 0x11b65ae0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x11b65ae0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a641 jne 0x11b3a645 */
  if (!C.zf) goto L_11b3a645;
  /* 11b3a643 jmp 0x11b3a647 */
  goto L_11b3a647;
L_11b3a645:;
  /* 11b3a645 jmp 0x11b3a625 */
  goto L_11b3a625;
L_11b3a647:;
  /* 11b3a647 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3a64a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3a64d cmp ecx, dword ptr [eax*8 + 0x11b65ae0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11b65ae0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a654 jne 0x11b3a7c8 */
  if (!C.zf) goto L_11b3a7c8;
  /* 11b3a65a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a661 je 0x11b3a684 */
  if (C.zf) goto L_11b3a684;
  /* 11b3a663 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3a666 mov eax, dword ptr [edx*8 + 0x11b65ae4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11b65ae4)));
  /* 11b3a66d push eax */
  push32((uint32_t)(EAX));
  /* 11b3a66e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3a670 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3a672 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3a674 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b3a676 call 0x11b36850 */
  push32(0x11b3a67bu); f_11b36850();
  /* 11b3a67b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a67e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a681 jne 0x11b3a684 */
  if (!C.zf) goto L_11b3a684;
  /* 11b3a683 int3  */
  x86_unimpl("int3 @ 0x11b3a683");
L_11b3a684:;
  /* 11b3a684 cmp dword ptr [0x11b67b04], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b67b04))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a68b je 0x11b3a69f */
  if (C.zf) goto L_11b3a69f;
  /* 11b3a68d cmp dword ptr [0x11b67b04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67b04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a694 jne 0x11b3a6d8 */
  if (!C.zf) goto L_11b3a6d8;
  /* 11b3a696 cmp dword ptr [0x11b67b08], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b67b08))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a69d jne 0x11b3a6d8 */
  if (!C.zf) goto L_11b3a6d8;
L_11b3a69f:;
  /* 11b3a69f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3a6a1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11b3a6a4 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3a6a5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3a6a8 mov eax, dword ptr [edx*8 + 0x11b65ae4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11b65ae4)));
  /* 11b3a6af push eax */
  push32((uint32_t)(EAX));
  /* 11b3a6b0 call 0x11b3b830 */
  push32(0x11b3a6b5u); f_11b3b830();
  /* 11b3a6b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a6b8 push eax */
  push32((uint32_t)(EAX));
  /* 11b3a6b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3a6bc mov edx, dword ptr [ecx*8 + 0x11b65ae4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x11b65ae4)));
  /* 11b3a6c3 push edx */
  push32((uint32_t)(EDX));
  /* 11b3a6c4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11b3a6c6 call dword ptr [0x11b6a2e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a2e4))), 0x11b3a6ccu);
  /* 11b3a6cc push eax */
  push32((uint32_t)(EAX));
  /* 11b3a6cd call dword ptr [0x11b6a3dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3dc))), 0x11b3a6d3u);
  /* 11b3a6d3 jmp 0x11b3a7c8 */
  goto L_11b3a7c8;
L_11b3a6d8:;
  /* 11b3a6d8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a6df je 0x11b3a7c8 */
  if (C.zf) goto L_11b3a7c8;
  /* 11b3a6e5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11b3a6ea lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 11b3a6f0 push eax */
  push32((uint32_t)(EAX));
  /* 11b3a6f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3a6f3 call dword ptr [0x11b6a3f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3f0))), 0x11b3a6f9u);
  /* 11b3a6f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3a6fb jne 0x11b3a711 */
  if (!C.zf) goto L_11b3a711;
  /* 11b3a6fd push 0x11b62868 */
  push32((uint32_t)(0x11b62868u));
  /* 11b3a702 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11b3a708 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3a709 call 0x11b3b9b0 */
  push32(0x11b3a70eu); f_11b3b9b0();
  /* 11b3a70e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b3a711:;
  /* 11b3a711 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 11b3a717 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11b3a71a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3a71d push eax */
  push32((uint32_t)(EAX));
  /* 11b3a71e call 0x11b3b830 */
  push32(0x11b3a723u); f_11b3b830();
  /* 11b3a723 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a726 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a729 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a72c jbe 0x11b3a75a */
  if ((C.cf||C.zf)) goto L_11b3a75a;
  /* 11b3a72e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11b3a734 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3a735 call 0x11b3b830 */
  push32(0x11b3a73au); f_11b3b830();
  /* 11b3a73a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a73d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3a740 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 11b3a744 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b3a747 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b3a749 push 0x11b62864 */
  push32((uint32_t)(0x11b62864u));
  /* 11b3a74e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3a751 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3a752 call 0x11b3c220 */
  push32(0x11b3a757u); f_11b3c220();
  /* 11b3a757 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b3a75a:;
  /* 11b3a75a push 0x11b632f4 */
  push32((uint32_t)(0x11b632f4u));
  /* 11b3a75f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11b3a765 push edx */
  push32((uint32_t)(EDX));
  /* 11b3a766 call 0x11b3b9b0 */
  push32(0x11b3a76bu); f_11b3b9b0();
  /* 11b3a76b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a76e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3a771 push eax */
  push32((uint32_t)(EAX));
  /* 11b3a772 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 11b3a778 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3a779 call 0x11b3b9c0 */
  push32(0x11b3a77eu); f_11b3b9c0();
  /* 11b3a77e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a781 push 0x11b627dc */
  push32((uint32_t)(0x11b627dcu));
  /* 11b3a786 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11b3a78c push edx */
  push32((uint32_t)(EDX));
  /* 11b3a78d call 0x11b3b9c0 */
  push32(0x11b3a792u); f_11b3b9c0();
  /* 11b3a792 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a795 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3a798 mov ecx, dword ptr [eax*8 + 0x11b65ae4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x11b65ae4)));
  /* 11b3a79f push ecx */
  push32((uint32_t)(ECX));
  /* 11b3a7a0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11b3a7a6 push edx */
  push32((uint32_t)(EDX));
  /* 11b3a7a7 call 0x11b3b9c0 */
  push32(0x11b3a7acu); f_11b3b9c0();
  /* 11b3a7ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a7af push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11b3a7b4 push 0x11b632cc */
  push32((uint32_t)(0x11b632ccu));
  /* 11b3a7b9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 11b3a7bf push eax */
  push32((uint32_t)(EAX));
  /* 11b3a7c0 call 0x11b3c160 */
  push32(0x11b3a7c5u); f_11b3c160();
  /* 11b3a7c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b3a7c8:;
  /* 11b3a7c8 pop edi */
  EDI = (pop32());
  /* 11b3a7c9 pop esi */
  ESI = (pop32());
  /* 11b3a7ca pop ebx */
  EBX = (pop32());
  /* 11b3a7cb mov esp, ebp */
  ESP = (EBP);
  /* 11b3a7cd pop ebp */
  EBP = (pop32());
  /* 11b3a7ce ret  */
  ESPCHK(0x11b3a610u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x11b3a7d0 (80 bytes, 27 insns) */
void f_11b3a7d0(void) {
  FTRACE(0x11b3a7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3a7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3a7d1 mov ebp, esp */
  EBP = (ESP);
  /* 11b3a7d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3a7d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b3a7db jmp 0x11b3a7e6 */
  goto L_11b3a7e6;
L_11b3a7dd:;
  /* 11b3a7dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3a7e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a7e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b3a7e6:;
  /* 11b3a7e6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a7ea jae 0x11b3a7ff */
  if (!C.cf) goto L_11b3a7ff;
  /* 11b3a7ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3a7ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3a7f2 cmp edx, dword ptr [ecx*8 + 0x11b65ae0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x11b65ae0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a7f9 jne 0x11b3a7fd */
  if (!C.zf) goto L_11b3a7fd;
  /* 11b3a7fb jmp 0x11b3a7ff */
  goto L_11b3a7ff;
L_11b3a7fd:;
  /* 11b3a7fd jmp 0x11b3a7dd */
  goto L_11b3a7dd;
L_11b3a7ff:;
  /* 11b3a7ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3a802 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3a805 cmp ecx, dword ptr [eax*8 + 0x11b65ae0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11b65ae0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a80c jne 0x11b3a81a */
  if (!C.zf) goto L_11b3a81a;
  /* 11b3a80e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3a811 mov eax, dword ptr [edx*8 + 0x11b65ae4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11b65ae4)));
  /* 11b3a818 jmp 0x11b3a81c */
  goto L_11b3a81c;
L_11b3a81a:;
  /* 11b3a81a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b3a81c:;
  /* 11b3a81c mov esp, ebp */
  ESP = (EBP);
  /* 11b3a81e pop ebp */
  EBP = (pop32());
  /* 11b3a81f ret  */
  ESPCHK(0x11b3a7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a820 @ 0x11b3a820 (55 bytes, 16 insns) */
void f_11b3a820(void) {
  FTRACE(0x11b3a820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3a820 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3a821 mov ebp, esp */
  EBP = (ESP);
  /* 11b3a823 mov eax, dword ptr [0x11b65bb4] */
  EAX = (r32((uint32_t)(0x11b65bb4)));
  /* 11b3a828 push eax */
  push32((uint32_t)(EAX));
  /* 11b3a829 call dword ptr [0x11b6a370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a370))), 0x11b3a82fu);
  /* 11b3a82f mov ecx, dword ptr [0x11b65ba4] */
  ECX = (r32((uint32_t)(0x11b65ba4)));
  /* 11b3a835 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3a836 call dword ptr [0x11b6a370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a370))), 0x11b3a83cu);
  /* 11b3a83c mov edx, dword ptr [0x11b65b94] */
  EDX = (r32((uint32_t)(0x11b65b94)));
  /* 11b3a842 push edx */
  push32((uint32_t)(EDX));
  /* 11b3a843 call dword ptr [0x11b6a370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a370))), 0x11b3a849u);
  /* 11b3a849 mov eax, dword ptr [0x11b65b74] */
  EAX = (r32((uint32_t)(0x11b65b74)));
  /* 11b3a84e push eax */
  push32((uint32_t)(EAX));
  /* 11b3a84f call dword ptr [0x11b6a370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a370))), 0x11b3a855u);
  /* 11b3a855 pop ebp */
  EBP = (pop32());
  /* 11b3a856 ret  */
  ESPCHK(0x11b3a820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a860 @ 0x11b3a860 (159 bytes, 47 insns) */
void f_11b3a860(void) {
  FTRACE(0x11b3a860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3a860 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3a861 mov ebp, esp */
  EBP = (ESP);
  /* 11b3a863 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3a864 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b3a86b jmp 0x11b3a876 */
  goto L_11b3a876;
L_11b3a86d:;
  /* 11b3a86d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3a870 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a873 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b3a876:;
  /* 11b3a876 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a87a jge 0x11b3a8c9 */
  if ((C.sf==C.of)) goto L_11b3a8c9;
  /* 11b3a87c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3a87f cmp dword ptr [ecx*4 + 0x11b65b70], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11b65b70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a887 je 0x11b3a8c7 */
  if (C.zf) goto L_11b3a8c7;
  /* 11b3a889 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a88d je 0x11b3a8c7 */
  if (C.zf) goto L_11b3a8c7;
  /* 11b3a88f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a893 je 0x11b3a8c7 */
  if (C.zf) goto L_11b3a8c7;
  /* 11b3a895 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a899 je 0x11b3a8c7 */
  if (C.zf) goto L_11b3a8c7;
  /* 11b3a89b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a89f je 0x11b3a8c7 */
  if (C.zf) goto L_11b3a8c7;
  /* 11b3a8a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3a8a4 mov eax, dword ptr [edx*4 + 0x11b65b70] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11b65b70)));
  /* 11b3a8ab push eax */
  push32((uint32_t)(EAX));
  /* 11b3a8ac call dword ptr [0x11b6a398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a398))), 0x11b3a8b2u);
  /* 11b3a8b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b3a8b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3a8b7 mov edx, dword ptr [ecx*4 + 0x11b65b70] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11b65b70)));
  /* 11b3a8be push edx */
  push32((uint32_t)(EDX));
  /* 11b3a8bf call 0x11b38770 */
  push32(0x11b3a8c4u); f_11b38770();
  /* 11b3a8c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b3a8c7:;
  /* 11b3a8c7 jmp 0x11b3a86d */
  goto L_11b3a86d;
L_11b3a8c9:;
  /* 11b3a8c9 mov eax, dword ptr [0x11b65b94] */
  EAX = (r32((uint32_t)(0x11b65b94)));
  /* 11b3a8ce push eax */
  push32((uint32_t)(EAX));
  /* 11b3a8cf call dword ptr [0x11b6a398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a398))), 0x11b3a8d5u);
  /* 11b3a8d5 mov ecx, dword ptr [0x11b65ba4] */
  ECX = (r32((uint32_t)(0x11b65ba4)));
  /* 11b3a8db push ecx */
  push32((uint32_t)(ECX));
  /* 11b3a8dc call dword ptr [0x11b6a398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a398))), 0x11b3a8e2u);
  /* 11b3a8e2 mov edx, dword ptr [0x11b65bb4] */
  EDX = (r32((uint32_t)(0x11b65bb4)));
  /* 11b3a8e8 push edx */
  push32((uint32_t)(EDX));
  /* 11b3a8e9 call dword ptr [0x11b6a398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a398))), 0x11b3a8efu);
  /* 11b3a8ef mov eax, dword ptr [0x11b65b74] */
  EAX = (r32((uint32_t)(0x11b65b74)));
  /* 11b3a8f4 push eax */
  push32((uint32_t)(EAX));
  /* 11b3a8f5 call dword ptr [0x11b6a398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a398))), 0x11b3a8fbu);
  /* 11b3a8fb mov esp, ebp */
  ESP = (EBP);
  /* 11b3a8fd pop ebp */
  EBP = (pop32());
  /* 11b3a8fe ret  */
  ESPCHK(0x11b3a860u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a900 @ 0x11b3a900 (151 bytes, 46 insns) */
void f_11b3a900(void) {
  FTRACE(0x11b3a900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3a900 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3a901 mov ebp, esp */
  EBP = (ESP);
  /* 11b3a903 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3a904 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3a907 cmp dword ptr [eax*4 + 0x11b65b70], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11b65b70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a90f jne 0x11b3a982 */
  if (!C.zf) goto L_11b3a982;
  /* 11b3a911 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 11b3a916 push 0x11b63310 */
  push32((uint32_t)(0x11b63310u));
  /* 11b3a91b push 2 */
  push32((uint32_t)(0x2u));
  /* 11b3a91d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11b3a91f call 0x11b37ce0 */
  push32(0x11b3a924u); f_11b37ce0();
  /* 11b3a924 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a927 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b3a92a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a92e jne 0x11b3a93a */
  if (!C.zf) goto L_11b3a93a;
  /* 11b3a930 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11b3a932 call 0x11b36360 */
  push32(0x11b3a937u); f_11b36360();
  /* 11b3a937 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b3a93a:;
  /* 11b3a93a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11b3a93c call 0x11b3a900 */
  push32(0x11b3a941u); f_11b3a900();
  /* 11b3a941 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3a944 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3a947 cmp dword ptr [ecx*4 + 0x11b65b70], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11b65b70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3a94f jne 0x11b3a96a */
  if (!C.zf) goto L_11b3a96a;
  /* 11b3a951 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3a954 push edx */
  push32((uint32_t)(EDX));
  /* 11b3a955 call dword ptr [0x11b6a370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a370))), 0x11b3a95bu);
  /* 11b3a95b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3a95e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3a961 mov dword ptr [eax*4 + 0x11b65b70], ecx */
  w32((uint32_t)(EAX*4 + 0x11b65b70), (ECX));
  /* 11b3a968 jmp 0x11b3a978 */
  goto L_11b3a978;
L_11b3a96a:;
  /* 11b3a96a push 2 */
  push32((uint32_t)(0x2u));
  /* 11b3a96c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3a96f push edx */
  push32((uint32_t)(EDX));
  /* 11b3a970 call 0x11b38770 */
  push32(0x11b3a975u); f_11b38770();
  /* 11b3a975 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b3a978:;
  /* 11b3a978 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11b3a97a call 0x11b3a9a0 */
  push32(0x11b3a97fu); f_11b3a9a0();
  /* 11b3a97f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b3a982:;
  /* 11b3a982 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3a985 mov ecx, dword ptr [eax*4 + 0x11b65b70] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11b65b70)));
  /* 11b3a98c push ecx */
  push32((uint32_t)(ECX));
  /* 11b3a98d call dword ptr [0x11b6a360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a360))), 0x11b3a993u);
  /* 11b3a993 mov esp, ebp */
  ESP = (EBP);
  /* 11b3a995 pop ebp */
  EBP = (pop32());
  /* 11b3a996 ret  */
  ESPCHK(0x11b3a900u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a9a0 @ 0x11b3a9a0 (22 bytes, 8 insns) */
void f_11b3a9a0(void) {
  FTRACE(0x11b3a9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3a9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3a9a1 mov ebp, esp */
  EBP = (ESP);
  /* 11b3a9a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3a9a6 mov ecx, dword ptr [eax*4 + 0x11b65b70] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11b65b70)));
  /* 11b3a9ad push ecx */
  push32((uint32_t)(ECX));
  /* 11b3a9ae call dword ptr [0x11b6a35c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a35c))), 0x11b3a9b4u);
  /* 11b3a9b4 pop ebp */
  EBP = (pop32());
  /* 11b3a9b5 ret  */
  ESPCHK(0x11b3a9a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a9c0 @ 0x11b3a9c0 (26 bytes, 10 insns) */
void f_11b3a9c0(void) {
  FTRACE(0x11b3a9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3a9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3a9c1 mov ebp, esp */
  EBP = (ESP);
  /* 11b3a9c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3a9c6 push eax */
  push32((uint32_t)(EAX));
  /* 11b3a9c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3a9c9 call dword ptr [0x11b6a364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a364))), 0x11b3a9cfu);
  /* 11b3a9cf push 0xff */
  push32((uint32_t)(0xffu));
  /* 11b3a9d4 call dword ptr [0x11b6a3f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3f8))), 0x11b3a9dau);
  /* 11b3a9da pop ebp */
  EBP = (pop32());
  /* 11b3a9db ret  */
  ESPCHK(0x11b3a9c0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x11b3a9e0 (446 bytes, 130 insns) */
void f_11b3a9e0(void) {
  FTRACE(0x11b3a9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3a9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3a9e1 mov ebp, esp */
  EBP = (ESP);
  /* 11b3a9e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3a9e6 call 0x11b36480 */
  push32(0x11b3a9ebu); f_11b36480();
  /* 11b3a9eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b3a9ee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3a9f1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11b3a9f4 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3a9f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3a9f8 push edx */
  push32((uint32_t)(EDX));
  /* 11b3a9f9 call 0x11b3aba0 */
  push32(0x11b3a9feu); f_11b3aba0();
  /* 11b3a9fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3aa01 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11b3aa04 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3aa08 je 0x11b3aa13 */
  if (C.zf) goto L_11b3aa13;
  /* 11b3aa0a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3aa0d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3aa11 jne 0x11b3aa22 */
  if (!C.zf) goto L_11b3aa22;
L_11b3aa13:;
  /* 11b3aa13 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3aa16 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3aa17 call dword ptr [0x11b6a354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a354))), 0x11b3aa1du);
  /* 11b3aa1d jmp 0x11b3ab9a */
  goto L_11b3ab9a;
L_11b3aa22:;
  /* 11b3aa22 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3aa25 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3aa29 jne 0x11b3aa3f */
  if (!C.zf) goto L_11b3aa3f;
  /* 11b3aa2b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3aa2e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11b3aa35 mov eax, 1 */
  EAX = (0x1u);
  /* 11b3aa3a jmp 0x11b3ab9a */
  goto L_11b3ab9a;
L_11b3aa3f:;
  /* 11b3aa3f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3aa42 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3aa46 jne 0x11b3aa50 */
  if (!C.zf) goto L_11b3aa50;
  /* 11b3aa48 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3aa4b jmp 0x11b3ab9a */
  goto L_11b3ab9a;
L_11b3aa50:;
  /* 11b3aa50 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3aa53 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11b3aa56 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b3aa59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3aa5c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 11b3aa5f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11b3aa62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3aa65 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3aa68 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 11b3aa6b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3aa6e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3aa72 jne 0x11b3ab77 */
  if (!C.zf) goto L_11b3ab77;
  /* 11b3aa78 mov eax, dword ptr [0x11b65ca8] */
  EAX = (r32((uint32_t)(0x11b65ca8)));
  /* 11b3aa7d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11b3aa80 jmp 0x11b3aa8b */
  goto L_11b3aa8b;
L_11b3aa82:;
  /* 11b3aa82 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3aa85 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3aa88 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11b3aa8b:;
  /* 11b3aa8b mov edx, dword ptr [0x11b65ca8] */
  EDX = (r32((uint32_t)(0x11b65ca8)));
  /* 11b3aa91 add edx, dword ptr [0x11b65cac] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11b65cac))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3aa97 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3aa9a jge 0x11b3aab2 */
  if ((C.sf==C.of)) goto L_11b3aab2;
  /* 11b3aa9c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3aa9f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3aaa2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3aaa5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11b3aaa8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 11b3aab0 jmp 0x11b3aa82 */
  goto L_11b3aa82;
L_11b3aab2:;
  /* 11b3aab2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3aab5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11b3aab8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b3aabb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3aabe cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3aac4 jne 0x11b3aad5 */
  if (!C.zf) goto L_11b3aad5;
  /* 11b3aac6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3aac9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 11b3aad0 jmp 0x11b3ab5d */
  goto L_11b3ab5d;
L_11b3aad5:;
  /* 11b3aad5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3aad8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3aade jne 0x11b3aaec */
  if (!C.zf) goto L_11b3aaec;
  /* 11b3aae0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3aae3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 11b3aaea jmp 0x11b3ab5d */
  goto L_11b3ab5d;
L_11b3aaec:;
  /* 11b3aaec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3aaef cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3aaf5 jne 0x11b3ab03 */
  if (!C.zf) goto L_11b3ab03;
  /* 11b3aaf7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3aafa mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 11b3ab01 jmp 0x11b3ab5d */
  goto L_11b3ab5d;
L_11b3ab03:;
  /* 11b3ab03 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3ab06 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3ab0c jne 0x11b3ab1a */
  if (!C.zf) goto L_11b3ab1a;
  /* 11b3ab0e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3ab11 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 11b3ab18 jmp 0x11b3ab5d */
  goto L_11b3ab5d;
L_11b3ab1a:;
  /* 11b3ab1a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3ab1d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3ab23 jne 0x11b3ab31 */
  if (!C.zf) goto L_11b3ab31;
  /* 11b3ab25 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3ab28 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 11b3ab2f jmp 0x11b3ab5d */
  goto L_11b3ab5d;
L_11b3ab31:;
  /* 11b3ab31 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3ab34 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3ab3a jne 0x11b3ab48 */
  if (!C.zf) goto L_11b3ab48;
  /* 11b3ab3c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3ab3f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 11b3ab46 jmp 0x11b3ab5d */
  goto L_11b3ab5d;
L_11b3ab48:;
  /* 11b3ab48 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3ab4b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3ab51 jne 0x11b3ab5d */
  if (!C.zf) goto L_11b3ab5d;
  /* 11b3ab53 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3ab56 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_11b3ab5d:;
  /* 11b3ab5d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3ab60 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 11b3ab63 push edx */
  push32((uint32_t)(EDX));
  /* 11b3ab64 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b3ab66 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11b3ab69u);
  /* 11b3ab69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ab6c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3ab6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3ab72 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 11b3ab75 jmp 0x11b3ab8e */
  goto L_11b3ab8e;
L_11b3ab77:;
  /* 11b3ab77 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3ab7a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11b3ab81 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3ab84 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b3ab87 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3ab88 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11b3ab8bu);
  /* 11b3ab8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b3ab8e:;
  /* 11b3ab8e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3ab91 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3ab94 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 11b3ab97 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11b3ab9a:;
  /* 11b3ab9a mov esp, ebp */
  ESP = (EBP);
  /* 11b3ab9c pop ebp */
  EBP = (pop32());
  /* 11b3ab9d ret  */
  ESPCHK(0x11b3a9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aba0 @ 0x11b3aba0 (89 bytes, 35 insns) */
void f_11b3aba0(void) {
  FTRACE(0x11b3aba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3aba0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3aba1 mov ebp, esp */
  EBP = (ESP);
  /* 11b3aba3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3aba4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3aba7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b3abaa:;
  /* 11b3abaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3abad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b3abaf cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3abb2 je 0x11b3abd2 */
  if (C.zf) goto L_11b3abd2;
  /* 11b3abb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3abb7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3abba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b3abbd mov ecx, dword ptr [0x11b65cb4] */
  ECX = (r32((uint32_t)(0x11b65cb4)));
  /* 11b3abc3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3abc6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3abc9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3abcb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3abce jae 0x11b3abd2 */
  if (!C.cf) goto L_11b3abd2;
  /* 11b3abd0 jmp 0x11b3abaa */
  goto L_11b3abaa;
L_11b3abd2:;
  /* 11b3abd2 mov eax, dword ptr [0x11b65cb4] */
  EAX = (r32((uint32_t)(0x11b65cb4)));
  /* 11b3abd7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3abda mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3abdd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3abdf cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3abe2 jae 0x11b3abee */
  if (!C.cf) goto L_11b3abee;
  /* 11b3abe4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3abe7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b3abe9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3abec je 0x11b3abf2 */
  if (C.zf) goto L_11b3abf2;
L_11b3abee:;
  /* 11b3abee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3abf0 jmp 0x11b3abf5 */
  goto L_11b3abf5;
L_11b3abf2:;
  /* 11b3abf2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11b3abf5:;
  /* 11b3abf5 mov esp, ebp */
  ESP = (EBP);
  /* 11b3abf7 pop ebp */
  EBP = (pop32());
  /* 11b3abf8 ret  */
  ESPCHK(0x11b3aba0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac00 @ 0x11b3ac00 (61 bytes, 18 insns) */
void f_11b3ac00(void) {
  FTRACE(0x11b3ac00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3ac00 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3ac01 mov ebp, esp */
  EBP = (ESP);
  /* 11b3ac03 cmp dword ptr [0x11b67d90], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67d90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3ac0a jne 0x11b3ac3b */
  if (!C.zf) goto L_11b3ac3b;
  /* 11b3ac0c push 0xb */
  push32((uint32_t)(0xbu));
  /* 11b3ac0e call 0x11b3a900 */
  push32(0x11b3ac13u); f_11b3a900();
  /* 11b3ac13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ac16 cmp dword ptr [0x11b67d90], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67d90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3ac1d jne 0x11b3ac31 */
  if (!C.zf) goto L_11b3ac31;
  /* 11b3ac1f call 0x11b3ac60 */
  push32(0x11b3ac24u); f_11b3ac60();
  /* 11b3ac24 mov eax, dword ptr [0x11b67d90] */
  EAX = (r32((uint32_t)(0x11b67d90)));
  /* 11b3ac29 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ac2c mov dword ptr [0x11b67d90], eax */
  w32((uint32_t)(0x11b67d90), (EAX));
L_11b3ac31:;
  /* 11b3ac31 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11b3ac33 call 0x11b3a9a0 */
  push32(0x11b3ac38u); f_11b3a9a0();
  /* 11b3ac38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b3ac3b:;
  /* 11b3ac3b pop ebp */
  EBP = (pop32());
  /* 11b3ac3c ret  */
  ESPCHK(0x11b3ac00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac40 @ 0x11b3ac40 (30 bytes, 11 insns) */
void f_11b3ac40(void) {
  FTRACE(0x11b3ac40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3ac40 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3ac41 mov ebp, esp */
  EBP = (ESP);
  /* 11b3ac43 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11b3ac45 call 0x11b3a900 */
  push32(0x11b3ac4au); f_11b3a900();
  /* 11b3ac4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ac4d call 0x11b3ac60 */
  push32(0x11b3ac52u); f_11b3ac60();
  /* 11b3ac52 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11b3ac54 call 0x11b3a9a0 */
  push32(0x11b3ac59u); f_11b3a9a0();
  /* 11b3ac59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ac5c pop ebp */
  EBP = (pop32());
  /* 11b3ac5d ret  */
  ESPCHK(0x11b3ac40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac60 @ 0x11b3ac60 (939 bytes, 266 insns) */
void f_11b3ac60(void) {
  FTRACE(0x11b3ac60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3ac60 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3ac61 mov ebp, esp */
  EBP = (ESP);
  /* 11b3ac63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3ac66 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b3ac6d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11b3ac6f call 0x11b3a900 */
  push32(0x11b3ac74u); f_11b3a900();
  /* 11b3ac74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ac77 mov dword ptr [0x11b67cd8], 0 */
  w32((uint32_t)(0x11b67cd8), (0x0u));
  /* 11b3ac81 mov dword ptr [0x11b65d60], 0xffffffff */
  w32((uint32_t)(0x11b65d60), (0xffffffffu));
  /* 11b3ac8b mov eax, dword ptr [0x11b65d60] */
  EAX = (r32((uint32_t)(0x11b65d60)));
  /* 11b3ac90 mov dword ptr [0x11b65d50], eax */
  w32((uint32_t)(0x11b65d50), (EAX));
  /* 11b3ac95 push 0x11b63360 */
  push32((uint32_t)(0x11b63360u));
  /* 11b3ac9a call 0x11b409f0 */
  push32(0x11b3ac9fu); f_11b409f0();
  /* 11b3ac9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3aca2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b3aca5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3aca9 jne 0x11b3ade3 */
  if (!C.zf) goto L_11b3ade3;
  /* 11b3acaf push 0xc */
  push32((uint32_t)(0xcu));
  /* 11b3acb1 call 0x11b3a9a0 */
  push32(0x11b3acb6u); f_11b3a9a0();
  /* 11b3acb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3acb9 push 0x11b67ce0 */
  push32((uint32_t)(0x11b67ce0u));
  /* 11b3acbe call dword ptr [0x11b6a3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3a0))), 0x11b3acc4u);
  /* 11b3acc4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3acc7 je 0x11b3adde */
  if (C.zf) goto L_11b3adde;
  /* 11b3accd mov dword ptr [0x11b67cd8], 1 */
  w32((uint32_t)(0x11b67cd8), (0x1u));
  /* 11b3acd7 mov ecx, dword ptr [0x11b67ce0] */
  ECX = (r32((uint32_t)(0x11b67ce0)));
  /* 11b3acdd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3ace0 mov dword ptr [0x11b65cb8], ecx */
  w32((uint32_t)(0x11b65cb8), (ECX));
  /* 11b3ace6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3ace8 mov dx, word ptr [0x11b67d26] */
  DX = (r16((uint32_t)(0x11b67d26)));
  /* 11b3acef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3acf1 je 0x11b3ad09 */
  if (C.zf) goto L_11b3ad09;
  /* 11b3acf3 mov eax, dword ptr [0x11b67d34] */
  EAX = (r32((uint32_t)(0x11b67d34)));
  /* 11b3acf8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3acfb mov ecx, dword ptr [0x11b65cb8] */
  ECX = (r32((uint32_t)(0x11b65cb8)));
  /* 11b3ad01 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ad03 mov dword ptr [0x11b65cb8], ecx */
  w32((uint32_t)(0x11b65cb8), (ECX));
L_11b3ad09:;
  /* 11b3ad09 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3ad0b mov dx, word ptr [0x11b67d7a] */
  DX = (r16((uint32_t)(0x11b67d7a)));
  /* 11b3ad12 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3ad14 je 0x11b3ad3e */
  if (C.zf) goto L_11b3ad3e;
  /* 11b3ad16 cmp dword ptr [0x11b67d88], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67d88))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3ad1d je 0x11b3ad3e */
  if (C.zf) goto L_11b3ad3e;
  /* 11b3ad1f mov dword ptr [0x11b65cbc], 1 */
  w32((uint32_t)(0x11b65cbc), (0x1u));
  /* 11b3ad29 mov eax, dword ptr [0x11b67d88] */
  EAX = (r32((uint32_t)(0x11b67d88)));
  /* 11b3ad2e sub eax, dword ptr [0x11b67d34] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11b67d34))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3ad34 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3ad37 mov dword ptr [0x11b65cc0], eax */
  w32((uint32_t)(0x11b65cc0), (EAX));
  /* 11b3ad3c jmp 0x11b3ad52 */
  goto L_11b3ad52;
L_11b3ad3e:;
  /* 11b3ad3e mov dword ptr [0x11b65cbc], 0 */
  w32((uint32_t)(0x11b65cbc), (0x0u));
  /* 11b3ad48 mov dword ptr [0x11b65cc0], 0 */
  w32((uint32_t)(0x11b65cc0), (0x0u));
L_11b3ad52:;
  /* 11b3ad52 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11b3ad55 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3ad56 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3ad58 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11b3ad5a mov edx, dword ptr [0x11b65d44] */
  EDX = (r32((uint32_t)(0x11b65d44)));
  /* 11b3ad60 push edx */
  push32((uint32_t)(EDX));
  /* 11b3ad61 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b3ad63 push 0x11b67ce4 */
  push32((uint32_t)(0x11b67ce4u));
  /* 11b3ad68 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11b3ad6d mov eax, dword ptr [0x11b67dd8] */
  EAX = (r32((uint32_t)(0x11b67dd8)));
  /* 11b3ad72 push eax */
  push32((uint32_t)(EAX));
  /* 11b3ad73 call dword ptr [0x11b6a380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a380))), 0x11b3ad79u);
  /* 11b3ad79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3ad7b je 0x11b3ad8f */
  if (C.zf) goto L_11b3ad8f;
  /* 11b3ad7d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3ad81 jne 0x11b3ad8f */
  if (!C.zf) goto L_11b3ad8f;
  /* 11b3ad83 mov ecx, dword ptr [0x11b65d44] */
  ECX = (r32((uint32_t)(0x11b65d44)));
  /* 11b3ad89 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 11b3ad8d jmp 0x11b3ad98 */
  goto L_11b3ad98;
L_11b3ad8f:;
  /* 11b3ad8f mov edx, dword ptr [0x11b65d44] */
  EDX = (r32((uint32_t)(0x11b65d44)));
  /* 11b3ad95 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11b3ad98:;
  /* 11b3ad98 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11b3ad9b push eax */
  push32((uint32_t)(EAX));
  /* 11b3ad9c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3ad9e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11b3ada0 mov ecx, dword ptr [0x11b65d48] */
  ECX = (r32((uint32_t)(0x11b65d48)));
  /* 11b3ada6 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3ada7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b3ada9 push 0x11b67d38 */
  push32((uint32_t)(0x11b67d38u));
  /* 11b3adae push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11b3adb3 mov edx, dword ptr [0x11b67dd8] */
  EDX = (r32((uint32_t)(0x11b67dd8)));
  /* 11b3adb9 push edx */
  push32((uint32_t)(EDX));
  /* 11b3adba call dword ptr [0x11b6a380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a380))), 0x11b3adc0u);
  /* 11b3adc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3adc2 je 0x11b3add5 */
  if (C.zf) goto L_11b3add5;
  /* 11b3adc4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3adc8 jne 0x11b3add5 */
  if (!C.zf) goto L_11b3add5;
  /* 11b3adca mov eax, dword ptr [0x11b65d48] */
  EAX = (r32((uint32_t)(0x11b65d48)));
  /* 11b3adcf mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 11b3add3 jmp 0x11b3adde */
  goto L_11b3adde;
L_11b3add5:;
  /* 11b3add5 mov ecx, dword ptr [0x11b65d48] */
  ECX = (r32((uint32_t)(0x11b65d48)));
  /* 11b3addb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_11b3adde:;
  /* 11b3adde jmp 0x11b3b007 */
  goto L_11b3b007;
L_11b3ade3:;
  /* 11b3ade3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3ade6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b3ade9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3adeb je 0x11b3ae0d */
  if (C.zf) goto L_11b3ae0d;
  /* 11b3aded cmp dword ptr [0x11b67d8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67d8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3adf4 je 0x11b3ae1c */
  if (C.zf) goto L_11b3ae1c;
  /* 11b3adf6 mov ecx, dword ptr [0x11b67d8c] */
  ECX = (r32((uint32_t)(0x11b67d8c)));
  /* 11b3adfc push ecx */
  push32((uint32_t)(ECX));
  /* 11b3adfd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3ae00 push edx */
  push32((uint32_t)(EDX));
  /* 11b3ae01 call 0x11b40930 */
  push32(0x11b3ae06u); f_11b40930();
  /* 11b3ae06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ae09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3ae0b jne 0x11b3ae1c */
  if (!C.zf) goto L_11b3ae1c;
L_11b3ae0d:;
  /* 11b3ae0d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11b3ae0f call 0x11b3a9a0 */
  push32(0x11b3ae14u); f_11b3a9a0();
  /* 11b3ae14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ae17 jmp 0x11b3b007 */
  goto L_11b3b007;
L_11b3ae1c:;
  /* 11b3ae1c push 2 */
  push32((uint32_t)(0x2u));
  /* 11b3ae1e mov eax, dword ptr [0x11b67d8c] */
  EAX = (r32((uint32_t)(0x11b67d8c)));
  /* 11b3ae23 push eax */
  push32((uint32_t)(EAX));
  /* 11b3ae24 call 0x11b38770 */
  push32(0x11b3ae29u); f_11b38770();
  /* 11b3ae29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ae2c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 11b3ae31 push 0x11b63358 */
  push32((uint32_t)(0x11b63358u));
  /* 11b3ae36 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b3ae38 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3ae3b push ecx */
  push32((uint32_t)(ECX));
  /* 11b3ae3c call 0x11b3b830 */
  push32(0x11b3ae41u); f_11b3b830();
  /* 11b3ae41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ae44 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ae47 push eax */
  push32((uint32_t)(EAX));
  /* 11b3ae48 call 0x11b37ce0 */
  push32(0x11b3ae4du); f_11b37ce0();
  /* 11b3ae4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ae50 mov dword ptr [0x11b67d8c], eax */
  w32((uint32_t)(0x11b67d8c), (EAX));
  /* 11b3ae55 cmp dword ptr [0x11b67d8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67d8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3ae5c jne 0x11b3ae6d */
  if (!C.zf) goto L_11b3ae6d;
  /* 11b3ae5e push 0xc */
  push32((uint32_t)(0xcu));
  /* 11b3ae60 call 0x11b3a9a0 */
  push32(0x11b3ae65u); f_11b3a9a0();
  /* 11b3ae65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ae68 jmp 0x11b3b007 */
  goto L_11b3b007;
L_11b3ae6d:;
  /* 11b3ae6d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3ae70 push edx */
  push32((uint32_t)(EDX));
  /* 11b3ae71 mov eax, dword ptr [0x11b67d8c] */
  EAX = (r32((uint32_t)(0x11b67d8c)));
  /* 11b3ae76 push eax */
  push32((uint32_t)(EAX));
  /* 11b3ae77 call 0x11b3b9b0 */
  push32(0x11b3ae7cu); f_11b3b9b0();
  /* 11b3ae7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ae7f push 0xc */
  push32((uint32_t)(0xcu));
  /* 11b3ae81 call 0x11b3a9a0 */
  push32(0x11b3ae86u); f_11b3a9a0();
  /* 11b3ae86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ae89 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b3ae8b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3ae8e push ecx */
  push32((uint32_t)(ECX));
  /* 11b3ae8f mov edx, dword ptr [0x11b65d44] */
  EDX = (r32((uint32_t)(0x11b65d44)));
  /* 11b3ae95 push edx */
  push32((uint32_t)(EDX));
  /* 11b3ae96 call 0x11b3c220 */
  push32(0x11b3ae9bu); f_11b3c220();
  /* 11b3ae9b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ae9e mov eax, dword ptr [0x11b65d44] */
  EAX = (r32((uint32_t)(0x11b65d44)));
  /* 11b3aea3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 11b3aea7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3aeaa add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3aead mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b3aeb0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3aeb3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b3aeb6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3aeb9 jne 0x11b3aecd */
  if (!C.zf) goto L_11b3aecd;
  /* 11b3aebb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3aebe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3aec1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b3aec4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3aec7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3aeca mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11b3aecd:;
  /* 11b3aecd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3aed0 push eax */
  push32((uint32_t)(EAX));
  /* 11b3aed1 call 0x11b406e0 */
  push32(0x11b3aed6u); f_11b406e0();
  /* 11b3aed6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3aed9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3aedf mov dword ptr [0x11b65cb8], eax */
  w32((uint32_t)(0x11b65cb8), (EAX));
L_11b3aee4:;
  /* 11b3aee4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3aee7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b3aeea cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3aeed je 0x11b3af05 */
  if (C.zf) goto L_11b3af05;
  /* 11b3aeef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3aef2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b3aef5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3aef8 jl 0x11b3af10 */
  if ((C.sf!=C.of)) goto L_11b3af10;
  /* 11b3aefa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3aefd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b3af00 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3af03 jg 0x11b3af10 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b3af10;
L_11b3af05:;
  /* 11b3af05 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3af08 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3af0b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b3af0e jmp 0x11b3aee4 */
  goto L_11b3aee4;
L_11b3af10:;
  /* 11b3af10 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3af13 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b3af16 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3af19 jne 0x11b3afb5 */
  if (!C.zf) goto L_11b3afb5;
  /* 11b3af1f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3af22 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3af25 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b3af28 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3af2b push edx */
  push32((uint32_t)(EDX));
  /* 11b3af2c call 0x11b406e0 */
  push32(0x11b3af31u); f_11b406e0();
  /* 11b3af31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3af34 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3af37 mov ecx, dword ptr [0x11b65cb8] */
  ECX = (r32((uint32_t)(0x11b65cb8)));
  /* 11b3af3d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3af3f mov dword ptr [0x11b65cb8], ecx */
  w32((uint32_t)(0x11b65cb8), (ECX));
L_11b3af45:;
  /* 11b3af45 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3af48 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b3af4b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3af4e jl 0x11b3af66 */
  if ((C.sf!=C.of)) goto L_11b3af66;
  /* 11b3af50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3af53 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b3af56 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3af59 jg 0x11b3af66 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b3af66;
  /* 11b3af5b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3af5e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3af61 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b3af64 jmp 0x11b3af45 */
  goto L_11b3af45;
L_11b3af66:;
  /* 11b3af66 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3af69 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b3af6c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3af6f jne 0x11b3afb5 */
  if (!C.zf) goto L_11b3afb5;
  /* 11b3af71 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3af74 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3af77 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b3af7a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3af7d push ecx */
  push32((uint32_t)(ECX));
  /* 11b3af7e call 0x11b406e0 */
  push32(0x11b3af83u); f_11b406e0();
  /* 11b3af83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3af86 mov edx, dword ptr [0x11b65cb8] */
  EDX = (r32((uint32_t)(0x11b65cb8)));
  /* 11b3af8c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3af8e mov dword ptr [0x11b65cb8], edx */
  w32((uint32_t)(0x11b65cb8), (EDX));
L_11b3af94:;
  /* 11b3af94 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3af97 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b3af9a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3af9d jl 0x11b3afb5 */
  if ((C.sf!=C.of)) goto L_11b3afb5;
  /* 11b3af9f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3afa2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b3afa5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3afa8 jg 0x11b3afb5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b3afb5;
  /* 11b3afaa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3afad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3afb0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b3afb3 jmp 0x11b3af94 */
  goto L_11b3af94;
L_11b3afb5:;
  /* 11b3afb5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3afb9 je 0x11b3afc9 */
  if (C.zf) goto L_11b3afc9;
  /* 11b3afbb mov edx, dword ptr [0x11b65cb8] */
  EDX = (r32((uint32_t)(0x11b65cb8)));
  /* 11b3afc1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b3afc3 mov dword ptr [0x11b65cb8], edx */
  w32((uint32_t)(0x11b65cb8), (EDX));
L_11b3afc9:;
  /* 11b3afc9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3afcc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b3afcf mov dword ptr [0x11b65cbc], ecx */
  w32((uint32_t)(0x11b65cbc), (ECX));
  /* 11b3afd5 cmp dword ptr [0x11b65cbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b65cbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3afdc je 0x11b3affe */
  if (C.zf) goto L_11b3affe;
  /* 11b3afde push 3 */
  push32((uint32_t)(0x3u));
  /* 11b3afe0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3afe3 push edx */
  push32((uint32_t)(EDX));
  /* 11b3afe4 mov eax, dword ptr [0x11b65d48] */
  EAX = (r32((uint32_t)(0x11b65d48)));
  /* 11b3afe9 push eax */
  push32((uint32_t)(EAX));
  /* 11b3afea call 0x11b3c220 */
  push32(0x11b3afefu); f_11b3c220();
  /* 11b3afef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3aff2 mov ecx, dword ptr [0x11b65d48] */
  ECX = (r32((uint32_t)(0x11b65d48)));
  /* 11b3aff8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 11b3affc jmp 0x11b3b007 */
  goto L_11b3b007;
L_11b3affe:;
  /* 11b3affe mov edx, dword ptr [0x11b65d48] */
  EDX = (r32((uint32_t)(0x11b65d48)));
  /* 11b3b004 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11b3b007:;
  /* 11b3b007 mov esp, ebp */
  ESP = (EBP);
  /* 11b3b009 pop ebp */
  EBP = (pop32());
  /* 11b3b00a ret  */
  ESPCHK(0x11b3ac60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b010 @ 0x11b3b010 (46 bytes, 18 insns) */
void f_11b3b010(void) {
  FTRACE(0x11b3b010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3b010 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3b011 mov ebp, esp */
  EBP = (ESP);
  /* 11b3b013 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3b014 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11b3b016 call 0x11b3a900 */
  push32(0x11b3b01bu); f_11b3a900();
  /* 11b3b01b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b01e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3b021 push eax */
  push32((uint32_t)(EAX));
  /* 11b3b022 call 0x11b3b040 */
  push32(0x11b3b027u); f_11b3b040();
  /* 11b3b027 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b02a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b3b02d push 0xb */
  push32((uint32_t)(0xbu));
  /* 11b3b02f call 0x11b3a9a0 */
  push32(0x11b3b034u); f_11b3a9a0();
  /* 11b3b034 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b037 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3b03a mov esp, ebp */
  ESP = (EBP);
  /* 11b3b03c pop ebp */
  EBP = (pop32());
  /* 11b3b03d ret  */
  ESPCHK(0x11b3b010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b040 @ 0x11b3b040 (762 bytes, 246 insns) */
void f_11b3b040(void) {
  FTRACE(0x11b3b040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3b040 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3b041 mov ebp, esp */
  EBP = (ESP);
  /* 11b3b043 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3b044 cmp dword ptr [0x11b65cbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b65cbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b04b jne 0x11b3b054 */
  if (!C.zf) goto L_11b3b054;
  /* 11b3b04d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3b04f jmp 0x11b3b336 */
  goto L_11b3b336;
L_11b3b054:;
  /* 11b3b054 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3b057 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11b3b05a cmp ecx, dword ptr [0x11b65d50] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11b65d50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b060 jne 0x11b3b074 */
  if (!C.zf) goto L_11b3b074;
  /* 11b3b062 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3b065 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b3b068 cmp eax, dword ptr [0x11b65d60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11b65d60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b06e je 0x11b3b23b */
  if (C.zf) goto L_11b3b23b;
L_11b3b074:;
  /* 11b3b074 cmp dword ptr [0x11b67cd8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67cd8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b07b je 0x11b3b1f5 */
  if (C.zf) goto L_11b3b1f5;
  /* 11b3b081 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3b083 mov cx, word ptr [0x11b67d78] */
  CX = (r16((uint32_t)(0x11b67d78)));
  /* 11b3b08a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3b08c jne 0x11b3b0e9 */
  if (!C.zf) goto L_11b3b0e9;
  /* 11b3b08e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3b090 mov dx, word ptr [0x11b67d86] */
  DX = (r16((uint32_t)(0x11b67d86)));
  /* 11b3b097 push edx */
  push32((uint32_t)(EDX));
  /* 11b3b098 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3b09a mov ax, word ptr [0x11b67d84] */
  AX = (r16((uint32_t)(0x11b67d84)));
  /* 11b3b0a0 push eax */
  push32((uint32_t)(EAX));
  /* 11b3b0a1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3b0a3 mov cx, word ptr [0x11b67d82] */
  CX = (r16((uint32_t)(0x11b67d82)));
  /* 11b3b0aa push ecx */
  push32((uint32_t)(ECX));
  /* 11b3b0ab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3b0ad mov dx, word ptr [0x11b67d80] */
  DX = (r16((uint32_t)(0x11b67d80)));
  /* 11b3b0b4 push edx */
  push32((uint32_t)(EDX));
  /* 11b3b0b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3b0b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3b0b9 mov ax, word ptr [0x11b67d7c] */
  AX = (r16((uint32_t)(0x11b67d7c)));
  /* 11b3b0bf push eax */
  push32((uint32_t)(EAX));
  /* 11b3b0c0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3b0c2 mov cx, word ptr [0x11b67d7e] */
  CX = (r16((uint32_t)(0x11b67d7e)));
  /* 11b3b0c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3b0ca xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3b0cc mov dx, word ptr [0x11b67d7a] */
  DX = (r16((uint32_t)(0x11b67d7a)));
  /* 11b3b0d3 push edx */
  push32((uint32_t)(EDX));
  /* 11b3b0d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3b0d7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11b3b0da push ecx */
  push32((uint32_t)(ECX));
  /* 11b3b0db push 1 */
  push32((uint32_t)(0x1u));
  /* 11b3b0dd push 1 */
  push32((uint32_t)(0x1u));
  /* 11b3b0df call 0x11b3b340 */
  push32(0x11b3b0e4u); f_11b3b340();
  /* 11b3b0e4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b0e7 jmp 0x11b3b13a */
  goto L_11b3b13a;
L_11b3b0e9:;
  /* 11b3b0e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3b0eb mov dx, word ptr [0x11b67d86] */
  DX = (r16((uint32_t)(0x11b67d86)));
  /* 11b3b0f2 push edx */
  push32((uint32_t)(EDX));
  /* 11b3b0f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3b0f5 mov ax, word ptr [0x11b67d84] */
  AX = (r16((uint32_t)(0x11b67d84)));
  /* 11b3b0fb push eax */
  push32((uint32_t)(EAX));
  /* 11b3b0fc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3b0fe mov cx, word ptr [0x11b67d82] */
  CX = (r16((uint32_t)(0x11b67d82)));
  /* 11b3b105 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3b106 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3b108 mov dx, word ptr [0x11b67d80] */
  DX = (r16((uint32_t)(0x11b67d80)));
  /* 11b3b10f push edx */
  push32((uint32_t)(EDX));
  /* 11b3b110 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3b112 mov ax, word ptr [0x11b67d7e] */
  AX = (r16((uint32_t)(0x11b67d7e)));
  /* 11b3b118 push eax */
  push32((uint32_t)(EAX));
  /* 11b3b119 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3b11b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3b11d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3b11f mov cx, word ptr [0x11b67d7a] */
  CX = (r16((uint32_t)(0x11b67d7a)));
  /* 11b3b126 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3b127 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3b12a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b3b12d push eax */
  push32((uint32_t)(EAX));
  /* 11b3b12e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3b130 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b3b132 call 0x11b3b340 */
  push32(0x11b3b137u); f_11b3b340();
  /* 11b3b137 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b3b13a:;
  /* 11b3b13a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3b13c mov cx, word ptr [0x11b67d24] */
  CX = (r16((uint32_t)(0x11b67d24)));
  /* 11b3b143 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3b145 jne 0x11b3b1a2 */
  if (!C.zf) goto L_11b3b1a2;
  /* 11b3b147 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3b149 mov dx, word ptr [0x11b67d32] */
  DX = (r16((uint32_t)(0x11b67d32)));
  /* 11b3b150 push edx */
  push32((uint32_t)(EDX));
  /* 11b3b151 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3b153 mov ax, word ptr [0x11b67d30] */
  AX = (r16((uint32_t)(0x11b67d30)));
  /* 11b3b159 push eax */
  push32((uint32_t)(EAX));
  /* 11b3b15a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3b15c mov cx, word ptr [0x11b67d2e] */
  CX = (r16((uint32_t)(0x11b67d2e)));
  /* 11b3b163 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3b164 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3b166 mov dx, word ptr [0x11b67d2c] */
  DX = (r16((uint32_t)(0x11b67d2c)));
  /* 11b3b16d push edx */
  push32((uint32_t)(EDX));
  /* 11b3b16e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3b170 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3b172 mov ax, word ptr [0x11b67d28] */
  AX = (r16((uint32_t)(0x11b67d28)));
  /* 11b3b178 push eax */
  push32((uint32_t)(EAX));
  /* 11b3b179 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3b17b mov cx, word ptr [0x11b67d2a] */
  CX = (r16((uint32_t)(0x11b67d2a)));
  /* 11b3b182 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3b183 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3b185 mov dx, word ptr [0x11b67d26] */
  DX = (r16((uint32_t)(0x11b67d26)));
  /* 11b3b18c push edx */
  push32((uint32_t)(EDX));
  /* 11b3b18d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3b190 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11b3b193 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3b194 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b3b196 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3b198 call 0x11b3b340 */
  push32(0x11b3b19du); f_11b3b340();
  /* 11b3b19d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b1a0 jmp 0x11b3b1f3 */
  goto L_11b3b1f3;
L_11b3b1a2:;
  /* 11b3b1a2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3b1a4 mov dx, word ptr [0x11b67d32] */
  DX = (r16((uint32_t)(0x11b67d32)));
  /* 11b3b1ab push edx */
  push32((uint32_t)(EDX));
  /* 11b3b1ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3b1ae mov ax, word ptr [0x11b67d30] */
  AX = (r16((uint32_t)(0x11b67d30)));
  /* 11b3b1b4 push eax */
  push32((uint32_t)(EAX));
  /* 11b3b1b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3b1b7 mov cx, word ptr [0x11b67d2e] */
  CX = (r16((uint32_t)(0x11b67d2e)));
  /* 11b3b1be push ecx */
  push32((uint32_t)(ECX));
  /* 11b3b1bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3b1c1 mov dx, word ptr [0x11b67d2c] */
  DX = (r16((uint32_t)(0x11b67d2c)));
  /* 11b3b1c8 push edx */
  push32((uint32_t)(EDX));
  /* 11b3b1c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3b1cb mov ax, word ptr [0x11b67d2a] */
  AX = (r16((uint32_t)(0x11b67d2a)));
  /* 11b3b1d1 push eax */
  push32((uint32_t)(EAX));
  /* 11b3b1d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3b1d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3b1d6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3b1d8 mov cx, word ptr [0x11b67d26] */
  CX = (r16((uint32_t)(0x11b67d26)));
  /* 11b3b1df push ecx */
  push32((uint32_t)(ECX));
  /* 11b3b1e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3b1e3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b3b1e6 push eax */
  push32((uint32_t)(EAX));
  /* 11b3b1e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3b1e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3b1eb call 0x11b3b340 */
  push32(0x11b3b1f0u); f_11b3b340();
  /* 11b3b1f0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b3b1f3:;
  /* 11b3b1f3 jmp 0x11b3b23b */
  goto L_11b3b23b;
L_11b3b1f5:;
  /* 11b3b1f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3b1f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3b1f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3b1fb push 2 */
  push32((uint32_t)(0x2u));
  /* 11b3b1fd push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3b1ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3b201 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b3b203 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b3b205 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3b208 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11b3b20b push edx */
  push32((uint32_t)(EDX));
  /* 11b3b20c push 1 */
  push32((uint32_t)(0x1u));
  /* 11b3b20e push 1 */
  push32((uint32_t)(0x1u));
  /* 11b3b210 call 0x11b3b340 */
  push32(0x11b3b215u); f_11b3b340();
  /* 11b3b215 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b218 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3b21a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3b21c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3b21e push 2 */
  push32((uint32_t)(0x2u));
  /* 11b3b220 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3b222 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3b224 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b3b226 push 0xa */
  push32((uint32_t)(0xau));
  /* 11b3b228 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3b22b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11b3b22e push ecx */
  push32((uint32_t)(ECX));
  /* 11b3b22f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b3b231 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3b233 call 0x11b3b340 */
  push32(0x11b3b238u); f_11b3b340();
  /* 11b3b238 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b3b23b:;
  /* 11b3b23b mov edx, dword ptr [0x11b65d54] */
  EDX = (r32((uint32_t)(0x11b65d54)));
  /* 11b3b241 cmp edx, dword ptr [0x11b65d64] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11b65d64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b247 jge 0x11b3b294 */
  if ((C.sf==C.of)) goto L_11b3b294;
  /* 11b3b249 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3b24c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11b3b24f cmp ecx, dword ptr [0x11b65d54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11b65d54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b255 jl 0x11b3b265 */
  if ((C.sf!=C.of)) goto L_11b3b265;
  /* 11b3b257 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3b25a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11b3b25d cmp eax, dword ptr [0x11b65d64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11b65d64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b263 jle 0x11b3b26c */
  if ((C.zf||C.sf!=C.of)) goto L_11b3b26c;
L_11b3b265:;
  /* 11b3b265 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3b267 jmp 0x11b3b336 */
  goto L_11b3b336;
L_11b3b26c:;
  /* 11b3b26c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3b26f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11b3b272 cmp edx, dword ptr [0x11b65d54] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11b65d54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b278 jle 0x11b3b292 */
  if ((C.zf||C.sf!=C.of)) goto L_11b3b292;
  /* 11b3b27a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3b27d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11b3b280 cmp ecx, dword ptr [0x11b65d64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11b65d64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b286 jge 0x11b3b292 */
  if ((C.sf==C.of)) goto L_11b3b292;
  /* 11b3b288 mov eax, 1 */
  EAX = (0x1u);
  /* 11b3b28d jmp 0x11b3b336 */
  goto L_11b3b336;
L_11b3b292:;
  /* 11b3b292 jmp 0x11b3b2d7 */
  goto L_11b3b2d7;
L_11b3b294:;
  /* 11b3b294 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3b297 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11b3b29a cmp eax, dword ptr [0x11b65d64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11b65d64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b2a0 jl 0x11b3b2b0 */
  if ((C.sf!=C.of)) goto L_11b3b2b0;
  /* 11b3b2a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3b2a5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11b3b2a8 cmp edx, dword ptr [0x11b65d54] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11b65d54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b2ae jle 0x11b3b2b7 */
  if ((C.zf||C.sf!=C.of)) goto L_11b3b2b7;
L_11b3b2b0:;
  /* 11b3b2b0 mov eax, 1 */
  EAX = (0x1u);
  /* 11b3b2b5 jmp 0x11b3b336 */
  goto L_11b3b336;
L_11b3b2b7:;
  /* 11b3b2b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3b2ba mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11b3b2bd cmp ecx, dword ptr [0x11b65d64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11b65d64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b2c3 jle 0x11b3b2d7 */
  if ((C.zf||C.sf!=C.of)) goto L_11b3b2d7;
  /* 11b3b2c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3b2c8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11b3b2cb cmp eax, dword ptr [0x11b65d54] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11b65d54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b2d1 jge 0x11b3b2d7 */
  if ((C.sf==C.of)) goto L_11b3b2d7;
  /* 11b3b2d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3b2d5 jmp 0x11b3b336 */
  goto L_11b3b336;
L_11b3b2d7:;
  /* 11b3b2d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3b2da mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b3b2dd imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3b2e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3b2e3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b3b2e5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b2e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3b2ea mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11b3b2ed imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3b2f3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b2f5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3b2fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b3b2fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3b301 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11b3b304 cmp edx, dword ptr [0x11b65d54] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11b65d54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b30a jne 0x11b3b322 */
  if (!C.zf) goto L_11b3b322;
  /* 11b3b30c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3b30f cmp eax, dword ptr [0x11b65d58] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11b65d58))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b315 jl 0x11b3b31e */
  if ((C.sf!=C.of)) goto L_11b3b31e;
  /* 11b3b317 mov eax, 1 */
  EAX = (0x1u);
  /* 11b3b31c jmp 0x11b3b336 */
  goto L_11b3b336;
L_11b3b31e:;
  /* 11b3b31e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3b320 jmp 0x11b3b336 */
  goto L_11b3b336;
L_11b3b322:;
  /* 11b3b322 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3b325 cmp ecx, dword ptr [0x11b65d68] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11b65d68))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b32b jge 0x11b3b334 */
  if ((C.sf==C.of)) goto L_11b3b334;
  /* 11b3b32d mov eax, 1 */
  EAX = (0x1u);
  /* 11b3b332 jmp 0x11b3b336 */
  goto L_11b3b336;
L_11b3b334:;
  /* 11b3b334 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b3b336:;
  /* 11b3b336 mov esp, ebp */
  ESP = (EBP);
  /* 11b3b338 pop ebp */
  EBP = (pop32());
  /* 11b3b339 ret  */
  ESPCHK(0x11b3b040u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b340 @ 0x11b3b340 (504 bytes, 145 insns) */
void f_11b3b340(void) {
  FTRACE(0x11b3b340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3b340 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3b341 mov ebp, esp */
  EBP = (ESP);
  /* 11b3b343 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3b346 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b34a jne 0x11b3b41c */
  if (!C.zf) goto L_11b3b41c;
  /* 11b3b350 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3b353 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11b3b356 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3b358 jne 0x11b3b369 */
  if (!C.zf) goto L_11b3b369;
  /* 11b3b35a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b3b35d mov edx, dword ptr [ecx*4 + 0x11b65d68] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11b65d68)));
  /* 11b3b364 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11b3b367 jmp 0x11b3b376 */
  goto L_11b3b376;
L_11b3b369:;
  /* 11b3b369 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b3b36c mov ecx, dword ptr [eax*4 + 0x11b65d9c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11b65d9c)));
  /* 11b3b373 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11b3b376:;
  /* 11b3b376 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3b379 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b37c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11b3b37f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3b382 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3b385 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3b38b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3b38e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b390 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3b393 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3b396 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 11b3b399 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 11b3b39d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b3b39e mov ecx, 7 */
  ECX = (0x7u);
  /* 11b3b3a3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b3b3a5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b3b3a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3b3ab cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b3ae jge 0x11b3b3c9 */
  if ((C.sf==C.of)) goto L_11b3b3c9;
  /* 11b3b3b0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b3b3b3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3b3b6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b3b3b9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3b3bc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3b3bf add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b3c2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b3c4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b3b3c7 jmp 0x11b3b3dd */
  goto L_11b3b3dd;
L_11b3b3c9:;
  /* 11b3b3c9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b3b3cc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3b3cf mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b3b3d2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3b3d5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b3d8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b3da mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11b3b3dd:;
  /* 11b3b3dd cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b3e1 jne 0x11b3b41a */
  if (!C.zf) goto L_11b3b41a;
  /* 11b3b3e3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3b3e6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11b3b3e9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3b3eb jne 0x11b3b3fc */
  if (!C.zf) goto L_11b3b3fc;
  /* 11b3b3ed mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b3b3f0 mov eax, dword ptr [edx*4 + 0x11b65d6c] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11b65d6c)));
  /* 11b3b3f7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11b3b3fa jmp 0x11b3b409 */
  goto L_11b3b409;
L_11b3b3fc:;
  /* 11b3b3fc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b3b3ff mov edx, dword ptr [ecx*4 + 0x11b65da0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11b65da0)));
  /* 11b3b406 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11b3b409:;
  /* 11b3b409 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3b40c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b40f jle 0x11b3b41a */
  if ((C.zf||C.sf!=C.of)) goto L_11b3b41a;
  /* 11b3b411 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3b414 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3b417 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11b3b41a:;
  /* 11b3b41a jmp 0x11b3b451 */
  goto L_11b3b451;
L_11b3b41c:;
  /* 11b3b41c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3b41f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11b3b422 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3b424 jne 0x11b3b435 */
  if (!C.zf) goto L_11b3b435;
  /* 11b3b426 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b3b429 mov ecx, dword ptr [eax*4 + 0x11b65d68] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11b65d68)));
  /* 11b3b430 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11b3b433 jmp 0x11b3b442 */
  goto L_11b3b442;
L_11b3b435:;
  /* 11b3b435 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b3b438 mov eax, dword ptr [edx*4 + 0x11b65d9c] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11b65d9c)));
  /* 11b3b43f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11b3b442:;
  /* 11b3b442 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3b445 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b3b448 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3b44b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b44e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11b3b451:;
  /* 11b3b451 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b455 jne 0x11b3b491 */
  if (!C.zf) goto L_11b3b491;
  /* 11b3b457 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3b45a mov dword ptr [0x11b65d54], eax */
  w32((uint32_t)(0x11b65d54), (EAX));
  /* 11b3b45f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11b3b462 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3b465 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11b3b468 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b46a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3b46d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11b3b470 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b472 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3b478 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11b3b47b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b47d mov dword ptr [0x11b65d58], ecx */
  w32((uint32_t)(0x11b65d58), (ECX));
  /* 11b3b483 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3b486 mov dword ptr [0x11b65d50], edx */
  w32((uint32_t)(0x11b65d50), (EDX));
  /* 11b3b48c jmp 0x11b3b534 */
  goto L_11b3b534;
L_11b3b491:;
  /* 11b3b491 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3b494 mov dword ptr [0x11b65d64], eax */
  w32((uint32_t)(0x11b65d64), (EAX));
  /* 11b3b499 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11b3b49c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3b49f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11b3b4a2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b4a4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3b4a7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11b3b4aa add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b4ac imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3b4b2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11b3b4b5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b4b7 mov dword ptr [0x11b65d68], ecx */
  w32((uint32_t)(0x11b65d68), (ECX));
  /* 11b3b4bd mov edx, dword ptr [0x11b65cc0] */
  EDX = (r32((uint32_t)(0x11b65cc0)));
  /* 11b3b4c3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3b4c9 mov eax, dword ptr [0x11b65d68] */
  EAX = (r32((uint32_t)(0x11b65d68)));
  /* 11b3b4ce add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b4d0 mov dword ptr [0x11b65d68], eax */
  w32((uint32_t)(0x11b65d68), (EAX));
  /* 11b3b4d5 cmp dword ptr [0x11b65d68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b65d68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b4dc jge 0x11b3b501 */
  if ((C.sf==C.of)) goto L_11b3b501;
  /* 11b3b4de mov ecx, dword ptr [0x11b65d68] */
  ECX = (r32((uint32_t)(0x11b65d68)));
  /* 11b3b4e4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b4ea mov dword ptr [0x11b65d68], ecx */
  w32((uint32_t)(0x11b65d68), (ECX));
  /* 11b3b4f0 mov edx, dword ptr [0x11b65d64] */
  EDX = (r32((uint32_t)(0x11b65d64)));
  /* 11b3b4f6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3b4f9 mov dword ptr [0x11b65d64], edx */
  w32((uint32_t)(0x11b65d64), (EDX));
  /* 11b3b4ff jmp 0x11b3b52b */
  goto L_11b3b52b;
L_11b3b501:;
  /* 11b3b501 cmp dword ptr [0x11b65d68], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x11b65d68))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b50b jl 0x11b3b52b */
  if ((C.sf!=C.of)) goto L_11b3b52b;
  /* 11b3b50d mov eax, dword ptr [0x11b65d68] */
  EAX = (r32((uint32_t)(0x11b65d68)));
  /* 11b3b512 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3b517 mov dword ptr [0x11b65d68], eax */
  w32((uint32_t)(0x11b65d68), (EAX));
  /* 11b3b51c mov ecx, dword ptr [0x11b65d64] */
  ECX = (r32((uint32_t)(0x11b65d64)));
  /* 11b3b522 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b525 mov dword ptr [0x11b65d64], ecx */
  w32((uint32_t)(0x11b65d64), (ECX));
L_11b3b52b:;
  /* 11b3b52b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3b52e mov dword ptr [0x11b65d60], edx */
  w32((uint32_t)(0x11b65d60), (EDX));
L_11b3b534:;
  /* 11b3b534 mov esp, ebp */
  ESP = (EBP);
  /* 11b3b536 pop ebp */
  EBP = (pop32());
  /* 11b3b537 ret  */
  ESPCHK(0x11b3b340u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x11b3b540 (66 bytes, 28 insns) */
void f_11b3b540(void) {
  FTRACE(0x11b3b540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3b540 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3b541 mov ebp, esp */
  EBP = (ESP);
  /* 11b3b543 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b547 jne 0x11b3b567 */
  if (!C.zf) goto L_11b3b567;
  /* 11b3b549 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b54d jge 0x11b3b567 */
  if ((C.sf==C.of)) goto L_11b3b567;
  /* 11b3b54f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b3b551 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3b554 push eax */
  push32((uint32_t)(EAX));
  /* 11b3b555 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3b558 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3b559 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3b55c push edx */
  push32((uint32_t)(EDX));
  /* 11b3b55d call 0x11b3b590 */
  push32(0x11b3b562u); f_11b3b590();
  /* 11b3b562 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b565 jmp 0x11b3b57d */
  goto L_11b3b57d;
L_11b3b567:;
  /* 11b3b567 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3b569 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3b56c push eax */
  push32((uint32_t)(EAX));
  /* 11b3b56d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3b570 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3b571 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3b574 push edx */
  push32((uint32_t)(EDX));
  /* 11b3b575 call 0x11b3b590 */
  push32(0x11b3b57au); f_11b3b590();
  /* 11b3b57a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b3b57d:;
  /* 11b3b57d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3b580 pop ebp */
  EBP = (pop32());
  /* 11b3b581 ret  */
  ESPCHK(0x11b3b540u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x11b3b590 (194 bytes, 71 insns) */
void f_11b3b590(void) {
  FTRACE(0x11b3b590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3b590 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3b591 mov ebp, esp */
  EBP = (ESP);
  /* 11b3b593 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3b596 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3b599 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b3b59c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b5a0 je 0x11b3b5b9 */
  if (C.zf) goto L_11b3b5b9;
  /* 11b3b5a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3b5a5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11b3b5a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3b5ab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b5ae mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b3b5b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3b5b4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b3b5b6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11b3b5b9:;
  /* 11b3b5b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3b5bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11b3b5bf:;
  /* 11b3b5bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3b5c2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3b5c4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b3b5c7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11b3b5ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3b5cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3b5cf div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b3b5d2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11b3b5d5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b5d9 jbe 0x11b3b5f1 */
  if ((C.cf||C.zf)) goto L_11b3b5f1;
  /* 11b3b5db mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3b5de add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b5e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3b5e4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11b3b5e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3b5e9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b5ec mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b3b5ef jmp 0x11b3b605 */
  goto L_11b3b605;
L_11b3b5f1:;
  /* 11b3b5f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3b5f4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b5f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3b5fa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11b3b5fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3b5ff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b602 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b3b605:;
  /* 11b3b605 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b609 ja 0x11b3b5bf */
  if ((!C.cf&&!C.zf)) goto L_11b3b5bf;
  /* 11b3b60b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3b60e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11b3b611 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3b614 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3b617 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b3b61a:;
  /* 11b3b61a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3b61d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b3b61f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11b3b622 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3b625 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3b628 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b3b62a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11b3b62c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3b62f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11b3b632 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11b3b634 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3b637 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3b63a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b3b63d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3b640 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b643 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b3b646 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3b649 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b64c jb 0x11b3b61a */
  if (C.cf) goto L_11b3b61a;
  /* 11b3b64e mov esp, ebp */
  ESP = (EBP);
  /* 11b3b650 pop ebp */
  EBP = (pop32());
  /* 11b3b651 ret  */
  ESPCHK(0x11b3b590u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x11b3b660 (63 bytes, 24 insns) */
void f_11b3b660(void) {
  FTRACE(0x11b3b660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3b660 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3b661 mov ebp, esp */
  EBP = (ESP);
  /* 11b3b663 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3b664 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b668 jne 0x11b3b679 */
  if (!C.zf) goto L_11b3b679;
  /* 11b3b66a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b66e jge 0x11b3b679 */
  if ((C.sf==C.of)) goto L_11b3b679;
  /* 11b3b670 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11b3b677 jmp 0x11b3b680 */
  goto L_11b3b680;
L_11b3b679:;
  /* 11b3b679 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11b3b680:;
  /* 11b3b680 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3b683 push eax */
  push32((uint32_t)(EAX));
  /* 11b3b684 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3b687 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3b688 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3b68b push edx */
  push32((uint32_t)(EDX));
  /* 11b3b68c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3b68f push eax */
  push32((uint32_t)(EAX));
  /* 11b3b690 call 0x11b3b590 */
  push32(0x11b3b695u); f_11b3b590();
  /* 11b3b695 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b698 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3b69b mov esp, ebp */
  ESP = (EBP);
  /* 11b3b69d pop ebp */
  EBP = (pop32());
  /* 11b3b69e ret  */
  ESPCHK(0x11b3b660u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x11b3b6a0 (30 bytes, 14 insns) */
void f_11b3b6a0(void) {
  FTRACE(0x11b3b6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3b6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3b6a1 mov ebp, esp */
  EBP = (ESP);
  /* 11b3b6a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3b6a5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3b6a8 push eax */
  push32((uint32_t)(EAX));
  /* 11b3b6a9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3b6ac push ecx */
  push32((uint32_t)(ECX));
  /* 11b3b6ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3b6b0 push edx */
  push32((uint32_t)(EDX));
  /* 11b3b6b1 call 0x11b3b590 */
  push32(0x11b3b6b6u); f_11b3b590();
  /* 11b3b6b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b6b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3b6bc pop ebp */
  EBP = (pop32());
  /* 11b3b6bd ret  */
  ESPCHK(0x11b3b6a0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x11b3b6c0 (72 bytes, 28 insns) */
void f_11b3b6c0(void) {
  FTRACE(0x11b3b6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3b6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3b6c1 mov ebp, esp */
  EBP = (ESP);
  /* 11b3b6c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3b6c4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b6c8 jne 0x11b3b6e1 */
  if (!C.zf) goto L_11b3b6e1;
  /* 11b3b6ca cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b6ce jg 0x11b3b6e1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b3b6e1;
  /* 11b3b6d0 jl 0x11b3b6d8 */
  if ((C.sf!=C.of)) goto L_11b3b6d8;
  /* 11b3b6d2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b6d6 jae 0x11b3b6e1 */
  if (!C.cf) goto L_11b3b6e1;
L_11b3b6d8:;
  /* 11b3b6d8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11b3b6df jmp 0x11b3b6e8 */
  goto L_11b3b6e8;
L_11b3b6e1:;
  /* 11b3b6e1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11b3b6e8:;
  /* 11b3b6e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3b6eb push eax */
  push32((uint32_t)(EAX));
  /* 11b3b6ec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b3b6ef push ecx */
  push32((uint32_t)(ECX));
  /* 11b3b6f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3b6f3 push edx */
  push32((uint32_t)(EDX));
  /* 11b3b6f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3b6f7 push eax */
  push32((uint32_t)(EAX));
  /* 11b3b6f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3b6fb push ecx */
  push32((uint32_t)(ECX));
  /* 11b3b6fc call 0x11b3b710 */
  push32(0x11b3b701u); f_11b3b710();
  /* 11b3b701 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3b704 mov esp, ebp */
  ESP = (EBP);
  /* 11b3b706 pop ebp */
  EBP = (pop32());
  /* 11b3b707 ret  */
  ESPCHK(0x11b3b6c0u, _esp0);
  ESP += 4; return;
}

