#include "recomp.h"

/* OnInit @ 0x11891005 (5 bytes, 1 insns) */
void f_11891005(void) {
  FTRACE(0x11891005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11891005 jmp 0x11891030 */
  f_11891030(); return;
}

/* thunk_FUN_100020e0 @ 0x1189100a (5 bytes, 1 insns) */
void f_1189100a(void) {
  FTRACE(0x1189100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189100a jmp 0x118920e0 */
  f_118920e0(); return;
}

/* ProcessScenary @ 0x1189100f (5 bytes, 1 insns) */
void f_1189100f(void) {
  FTRACE(0x1189100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189100f jmp 0x11892140 */
  f_11892140(); return;
}

/* FUN_10001030 @ 0x11891030 (3410 bytes, 896 insns) */
void f_11891030(void) {
  FTRACE(0x11891030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11891030 push ebp */
  push32((uint32_t)(EBP));
  /* 11891031 mov ebp, esp */
  EBP = (ESP);
  /* 11891033 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11891036 push ebx */
  push32((uint32_t)(EBX));
  /* 11891037 push esi */
  push32((uint32_t)(ESI));
  /* 11891038 push edi */
  push32((uint32_t)(EDI));
  /* 11891039 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1189103c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11891041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11891046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11891048 mov esi, esp */
  ESI = (ESP);
  /* 1189104a push 0x118be33c */
  push32((uint32_t)(0x118be33cu));
  /* 1189104f push 0x118c34b8 */
  push32((uint32_t)(0x118c34b8u));
  /* 11891054 call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x1189105au);
  /* 1189105a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189105d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189105f call 0x11895ef0 */
  push32(0x11891064u); f_11895ef0();
  /* 11891064 mov esi, esp */
  ESI = (ESP);
  /* 11891066 push 0x118be330 */
  push32((uint32_t)(0x118be330u));
  /* 1189106b push 0x118c34e8 */
  push32((uint32_t)(0x118c34e8u));
  /* 11891070 call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x11891076u);
  /* 11891076 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891079 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189107b call 0x11895ef0 */
  push32(0x11891080u); f_11895ef0();
  /* 11891080 mov esi, esp */
  ESI = (ESP);
  /* 11891082 push 0x118be324 */
  push32((uint32_t)(0x118be324u));
  /* 11891087 push 0x118c34e0 */
  push32((uint32_t)(0x118c34e0u));
  /* 1189108c call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x11891092u);
  /* 11891092 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891095 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891097 call 0x11895ef0 */
  push32(0x1189109cu); f_11895ef0();
  /* 1189109c mov esi, esp */
  ESI = (ESP);
  /* 1189109e push 0x118be318 */
  push32((uint32_t)(0x118be318u));
  /* 118910a3 push 0x118c34d8 */
  push32((uint32_t)(0x118c34d8u));
  /* 118910a8 call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x118910aeu);
  /* 118910ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118910b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118910b3 call 0x11895ef0 */
  push32(0x118910b8u); f_11895ef0();
  /* 118910b8 mov esi, esp */
  ESI = (ESP);
  /* 118910ba push 0x118be30c */
  push32((uint32_t)(0x118be30cu));
  /* 118910bf push 0x118c34d0 */
  push32((uint32_t)(0x118c34d0u));
  /* 118910c4 call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x118910cau);
  /* 118910ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118910cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118910cf call 0x11895ef0 */
  push32(0x118910d4u); f_11895ef0();
  /* 118910d4 mov esi, esp */
  ESI = (ESP);
  /* 118910d6 push 0x118be300 */
  push32((uint32_t)(0x118be300u));
  /* 118910db push 0x118c34c8 */
  push32((uint32_t)(0x118c34c8u));
  /* 118910e0 call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x118910e6u);
  /* 118910e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118910e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118910eb call 0x11895ef0 */
  push32(0x118910f0u); f_11895ef0();
  /* 118910f0 mov esi, esp */
  ESI = (ESP);
  /* 118910f2 push 0x118be2f4 */
  push32((uint32_t)(0x118be2f4u));
  /* 118910f7 push 0x118c3508 */
  push32((uint32_t)(0x118c3508u));
  /* 118910fc call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x11891102u);
  /* 11891102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891107 call 0x11895ef0 */
  push32(0x1189110cu); f_11895ef0();
  /* 1189110c mov esi, esp */
  ESI = (ESP);
  /* 1189110e push 0x118be2e8 */
  push32((uint32_t)(0x118be2e8u));
  /* 11891113 push 0x118c3500 */
  push32((uint32_t)(0x118c3500u));
  /* 11891118 call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x1189111eu);
  /* 1189111e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891121 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891123 call 0x11895ef0 */
  push32(0x11891128u); f_11895ef0();
  /* 11891128 mov esi, esp */
  ESI = (ESP);
  /* 1189112a push 0x118be2dc */
  push32((uint32_t)(0x118be2dcu));
  /* 1189112f push 0x118c34f8 */
  push32((uint32_t)(0x118c34f8u));
  /* 11891134 call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x1189113au);
  /* 1189113a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189113d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189113f call 0x11895ef0 */
  push32(0x11891144u); f_11895ef0();
  /* 11891144 mov esi, esp */
  ESI = (ESP);
  /* 11891146 push 0x118be2d0 */
  push32((uint32_t)(0x118be2d0u));
  /* 1189114b push 0x118c34f0 */
  push32((uint32_t)(0x118c34f0u));
  /* 11891150 call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x11891156u);
  /* 11891156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189115b call 0x11895ef0 */
  push32(0x11891160u); f_11895ef0();
  /* 11891160 mov esi, esp */
  ESI = (ESP);
  /* 11891162 push 0x118be2c4 */
  push32((uint32_t)(0x118be2c4u));
  /* 11891167 push 0x118c34a8 */
  push32((uint32_t)(0x118c34a8u));
  /* 1189116c call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x11891172u);
  /* 11891172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891177 call 0x11895ef0 */
  push32(0x1189117cu); f_11895ef0();
  /* 1189117c mov esi, esp */
  ESI = (ESP);
  /* 1189117e push 0x118be2bc */
  push32((uint32_t)(0x118be2bcu));
  /* 11891183 push 0x118c35e8 */
  push32((uint32_t)(0x118c35e8u));
  /* 11891188 call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x1189118eu);
  /* 1189118e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891191 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891193 call 0x11895ef0 */
  push32(0x11891198u); f_11895ef0();
  /* 11891198 mov esi, esp */
  ESI = (ESP);
  /* 1189119a push 0x118be2b4 */
  push32((uint32_t)(0x118be2b4u));
  /* 1189119f push 0x118c35e0 */
  push32((uint32_t)(0x118c35e0u));
  /* 118911a4 call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x118911aau);
  /* 118911aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118911ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118911af call 0x11895ef0 */
  push32(0x118911b4u); f_11895ef0();
  /* 118911b4 mov esi, esp */
  ESI = (ESP);
  /* 118911b6 push 0x118be2ac */
  push32((uint32_t)(0x118be2acu));
  /* 118911bb push 0x118c35f8 */
  push32((uint32_t)(0x118c35f8u));
  /* 118911c0 call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x118911c6u);
  /* 118911c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118911c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118911cb call 0x11895ef0 */
  push32(0x118911d0u); f_11895ef0();
  /* 118911d0 mov esi, esp */
  ESI = (ESP);
  /* 118911d2 push 0x118be2a4 */
  push32((uint32_t)(0x118be2a4u));
  /* 118911d7 push 0x118c35f0 */
  push32((uint32_t)(0x118c35f0u));
  /* 118911dc call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x118911e2u);
  /* 118911e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118911e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118911e7 call 0x11895ef0 */
  push32(0x118911ecu); f_11895ef0();
  /* 118911ec mov esi, esp */
  ESI = (ESP);
  /* 118911ee push 0x118be29c */
  push32((uint32_t)(0x118be29cu));
  /* 118911f3 push 0x118c3608 */
  push32((uint32_t)(0x118c3608u));
  /* 118911f8 call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x118911feu);
  /* 118911fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891201 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891203 call 0x11895ef0 */
  push32(0x11891208u); f_11895ef0();
  /* 11891208 mov esi, esp */
  ESI = (ESP);
  /* 1189120a push 0x118be294 */
  push32((uint32_t)(0x118be294u));
  /* 1189120f push 0x118c35a8 */
  push32((uint32_t)(0x118c35a8u));
  /* 11891214 call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x1189121au);
  /* 1189121a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189121d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189121f call 0x11895ef0 */
  push32(0x11891224u); f_11895ef0();
  /* 11891224 mov esi, esp */
  ESI = (ESP);
  /* 11891226 push 0x118be28c */
  push32((uint32_t)(0x118be28cu));
  /* 1189122b push 0x118c3598 */
  push32((uint32_t)(0x118c3598u));
  /* 11891230 call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x11891236u);
  /* 11891236 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891239 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189123b call 0x11895ef0 */
  push32(0x11891240u); f_11895ef0();
  /* 11891240 mov esi, esp */
  ESI = (ESP);
  /* 11891242 push 0x118be284 */
  push32((uint32_t)(0x118be284u));
  /* 11891247 push 0x118c35b8 */
  push32((uint32_t)(0x118c35b8u));
  /* 1189124c call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x11891252u);
  /* 11891252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891257 call 0x11895ef0 */
  push32(0x1189125cu); f_11895ef0();
  /* 1189125c mov esi, esp */
  ESI = (ESP);
  /* 1189125e push 0x118be27c */
  push32((uint32_t)(0x118be27cu));
  /* 11891263 push 0x118c35b0 */
  push32((uint32_t)(0x118c35b0u));
  /* 11891268 call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x1189126eu);
  /* 1189126e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891271 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891273 call 0x11895ef0 */
  push32(0x11891278u); f_11895ef0();
  /* 11891278 mov esi, esp */
  ESI = (ESP);
  /* 1189127a push 0x118be274 */
  push32((uint32_t)(0x118be274u));
  /* 1189127f push 0x118c35c8 */
  push32((uint32_t)(0x118c35c8u));
  /* 11891284 call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x1189128au);
  /* 1189128a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189128d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189128f call 0x11895ef0 */
  push32(0x11891294u); f_11895ef0();
  /* 11891294 mov esi, esp */
  ESI = (ESP);
  /* 11891296 push 0x118be26c */
  push32((uint32_t)(0x118be26cu));
  /* 1189129b push 0x118c3648 */
  push32((uint32_t)(0x118c3648u));
  /* 118912a0 call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x118912a6u);
  /* 118912a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118912a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118912ab call 0x11895ef0 */
  push32(0x118912b0u); f_11895ef0();
  /* 118912b0 mov esi, esp */
  ESI = (ESP);
  /* 118912b2 push 0x118be264 */
  push32((uint32_t)(0x118be264u));
  /* 118912b7 push 0x118c36b0 */
  push32((uint32_t)(0x118c36b0u));
  /* 118912bc call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x118912c2u);
  /* 118912c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118912c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118912c7 call 0x11895ef0 */
  push32(0x118912ccu); f_11895ef0();
  /* 118912cc mov esi, esp */
  ESI = (ESP);
  /* 118912ce push 0x118be25c */
  push32((uint32_t)(0x118be25cu));
  /* 118912d3 push 0x118c3478 */
  push32((uint32_t)(0x118c3478u));
  /* 118912d8 call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x118912deu);
  /* 118912de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118912e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118912e3 call 0x11895ef0 */
  push32(0x118912e8u); f_11895ef0();
  /* 118912e8 mov esi, esp */
  ESI = (ESP);
  /* 118912ea push 0x118be254 */
  push32((uint32_t)(0x118be254u));
  /* 118912ef push 0x118c3480 */
  push32((uint32_t)(0x118c3480u));
  /* 118912f4 call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x118912fau);
  /* 118912fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118912fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118912ff call 0x11895ef0 */
  push32(0x11891304u); f_11895ef0();
  /* 11891304 mov esi, esp */
  ESI = (ESP);
  /* 11891306 push 0x118be24c */
  push32((uint32_t)(0x118be24cu));
  /* 1189130b push 0x118c3488 */
  push32((uint32_t)(0x118c3488u));
  /* 11891310 call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x11891316u);
  /* 11891316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891319 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189131b call 0x11895ef0 */
  push32(0x11891320u); f_11895ef0();
  /* 11891320 mov esi, esp */
  ESI = (ESP);
  /* 11891322 push 0x118be244 */
  push32((uint32_t)(0x118be244u));
  /* 11891327 push 0x118c3490 */
  push32((uint32_t)(0x118c3490u));
  /* 1189132c call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x11891332u);
  /* 11891332 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891335 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891337 call 0x11895ef0 */
  push32(0x1189133cu); f_11895ef0();
  /* 1189133c mov esi, esp */
  ESI = (ESP);
  /* 1189133e push 0x118be23c */
  push32((uint32_t)(0x118be23cu));
  /* 11891343 push 0x118c3498 */
  push32((uint32_t)(0x118c3498u));
  /* 11891348 call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x1189134eu);
  /* 1189134e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891351 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891353 call 0x11895ef0 */
  push32(0x11891358u); f_11895ef0();
  /* 11891358 mov esi, esp */
  ESI = (ESP);
  /* 1189135a push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 1189135f push 0x118c34a0 */
  push32((uint32_t)(0x118c34a0u));
  /* 11891364 call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x1189136au);
  /* 1189136a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189136d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189136f call 0x11895ef0 */
  push32(0x11891374u); f_11895ef0();
  /* 11891374 mov esi, esp */
  ESI = (ESP);
  /* 11891376 push 0x118be228 */
  push32((uint32_t)(0x118be228u));
  /* 1189137b push 0x118c36c8 */
  push32((uint32_t)(0x118c36c8u));
  /* 11891380 call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x11891386u);
  /* 11891386 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891389 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189138b call 0x11895ef0 */
  push32(0x11891390u); f_11895ef0();
  /* 11891390 mov esi, esp */
  ESI = (ESP);
  /* 11891392 push 0x118be21c */
  push32((uint32_t)(0x118be21cu));
  /* 11891397 push 0x118c36c0 */
  push32((uint32_t)(0x118c36c0u));
  /* 1189139c call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x118913a2u);
  /* 118913a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118913a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118913a7 call 0x11895ef0 */
  push32(0x118913acu); f_11895ef0();
  /* 118913ac mov esi, esp */
  ESI = (ESP);
  /* 118913ae push 0x118be210 */
  push32((uint32_t)(0x118be210u));
  /* 118913b3 push 0x118c36d8 */
  push32((uint32_t)(0x118c36d8u));
  /* 118913b8 call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x118913beu);
  /* 118913be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118913c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118913c3 call 0x11895ef0 */
  push32(0x118913c8u); f_11895ef0();
  /* 118913c8 mov esi, esp */
  ESI = (ESP);
  /* 118913ca push 0x118be204 */
  push32((uint32_t)(0x118be204u));
  /* 118913cf push 0x118c36d0 */
  push32((uint32_t)(0x118c36d0u));
  /* 118913d4 call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x118913dau);
  /* 118913da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118913dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118913df call 0x11895ef0 */
  push32(0x118913e4u); f_11895ef0();
  /* 118913e4 mov esi, esp */
  ESI = (ESP);
  /* 118913e6 push 0x118be1fc */
  push32((uint32_t)(0x118be1fcu));
  /* 118913eb push 0x118c36b8 */
  push32((uint32_t)(0x118c36b8u));
  /* 118913f0 call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x118913f6u);
  /* 118913f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118913f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118913fb call 0x11895ef0 */
  push32(0x11891400u); f_11895ef0();
  /* 11891400 mov esi, esp */
  ESI = (ESP);
  /* 11891402 push 0x118be1f4 */
  push32((uint32_t)(0x118be1f4u));
  /* 11891407 push 0x118c36a0 */
  push32((uint32_t)(0x118c36a0u));
  /* 1189140c call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x11891412u);
  /* 11891412 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891415 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891417 call 0x11895ef0 */
  push32(0x1189141cu); f_11895ef0();
  /* 1189141c mov esi, esp */
  ESI = (ESP);
  /* 1189141e push 0x118be1ec */
  push32((uint32_t)(0x118be1ecu));
  /* 11891423 push 0x118c33f0 */
  push32((uint32_t)(0x118c33f0u));
  /* 11891428 call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x1189142eu);
  /* 1189142e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891431 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891433 call 0x11895ef0 */
  push32(0x11891438u); f_11895ef0();
  /* 11891438 mov esi, esp */
  ESI = (ESP);
  /* 1189143a push 0x118be1e4 */
  push32((uint32_t)(0x118be1e4u));
  /* 1189143f push 0x118c3518 */
  push32((uint32_t)(0x118c3518u));
  /* 11891444 call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x1189144au);
  /* 1189144a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189144d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189144f call 0x11895ef0 */
  push32(0x11891454u); f_11895ef0();
  /* 11891454 mov esi, esp */
  ESI = (ESP);
  /* 11891456 push 0x118be1dc */
  push32((uint32_t)(0x118be1dcu));
  /* 1189145b push 0x118c3510 */
  push32((uint32_t)(0x118c3510u));
  /* 11891460 call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x11891466u);
  /* 11891466 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891469 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189146b call 0x11895ef0 */
  push32(0x11891470u); f_11895ef0();
  /* 11891470 mov esi, esp */
  ESI = (ESP);
  /* 11891472 push 0x118be1d4 */
  push32((uint32_t)(0x118be1d4u));
  /* 11891477 push 0x118c3600 */
  push32((uint32_t)(0x118c3600u));
  /* 1189147c call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x11891482u);
  /* 11891482 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891485 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891487 call 0x11895ef0 */
  push32(0x1189148cu); f_11895ef0();
  /* 1189148c mov esi, esp */
  ESI = (ESP);
  /* 1189148e push 0x118be1cc */
  push32((uint32_t)(0x118be1ccu));
  /* 11891493 push 0x118c3610 */
  push32((uint32_t)(0x118c3610u));
  /* 11891498 call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x1189149eu);
  /* 1189149e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118914a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118914a3 call 0x11895ef0 */
  push32(0x118914a8u); f_11895ef0();
  /* 118914a8 mov esi, esp */
  ESI = (ESP);
  /* 118914aa push 0x118be1c4 */
  push32((uint32_t)(0x118be1c4u));
  /* 118914af push 0x118c3618 */
  push32((uint32_t)(0x118c3618u));
  /* 118914b4 call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x118914bau);
  /* 118914ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118914bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118914bf call 0x11895ef0 */
  push32(0x118914c4u); f_11895ef0();
  /* 118914c4 mov esi, esp */
  ESI = (ESP);
  /* 118914c6 push 0x118be1bc */
  push32((uint32_t)(0x118be1bcu));
  /* 118914cb push 0x118c3620 */
  push32((uint32_t)(0x118c3620u));
  /* 118914d0 call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x118914d6u);
  /* 118914d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118914d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118914db call 0x11895ef0 */
  push32(0x118914e0u); f_11895ef0();
  /* 118914e0 mov esi, esp */
  ESI = (ESP);
  /* 118914e2 push 0x118be1b4 */
  push32((uint32_t)(0x118be1b4u));
  /* 118914e7 push 0x118c3458 */
  push32((uint32_t)(0x118c3458u));
  /* 118914ec call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x118914f2u);
  /* 118914f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118914f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118914f7 call 0x11895ef0 */
  push32(0x118914fcu); f_11895ef0();
  /* 118914fc mov esi, esp */
  ESI = (ESP);
  /* 118914fe push 0x118be1ac */
  push32((uint32_t)(0x118be1acu));
  /* 11891503 push 0x118c3460 */
  push32((uint32_t)(0x118c3460u));
  /* 11891508 call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x1189150eu);
  /* 1189150e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891511 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891513 call 0x11895ef0 */
  push32(0x11891518u); f_11895ef0();
  /* 11891518 mov esi, esp */
  ESI = (ESP);
  /* 1189151a push 0x118be1a4 */
  push32((uint32_t)(0x118be1a4u));
  /* 1189151f push 0x118c3468 */
  push32((uint32_t)(0x118c3468u));
  /* 11891524 call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x1189152au);
  /* 1189152a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189152d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189152f call 0x11895ef0 */
  push32(0x11891534u); f_11895ef0();
  /* 11891534 mov esi, esp */
  ESI = (ESP);
  /* 11891536 push 0x118be19c */
  push32((uint32_t)(0x118be19cu));
  /* 1189153b push 0x118c3470 */
  push32((uint32_t)(0x118c3470u));
  /* 11891540 call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x11891546u);
  /* 11891546 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891549 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189154b call 0x11895ef0 */
  push32(0x11891550u); f_11895ef0();
  /* 11891550 mov esi, esp */
  ESI = (ESP);
  /* 11891552 push 0x118be194 */
  push32((uint32_t)(0x118be194u));
  /* 11891557 push 0x118c36e0 */
  push32((uint32_t)(0x118c36e0u));
  /* 1189155c call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x11891562u);
  /* 11891562 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891565 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891567 call 0x11895ef0 */
  push32(0x1189156cu); f_11895ef0();
  /* 1189156c mov esi, esp */
  ESI = (ESP);
  /* 1189156e push 0x118be18c */
  push32((uint32_t)(0x118be18cu));
  /* 11891573 push 0x118c36e8 */
  push32((uint32_t)(0x118c36e8u));
  /* 11891578 call dword ptr [0x118c64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e4))), 0x1189157eu);
  /* 1189157e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891581 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891583 call 0x11895ef0 */
  push32(0x11891588u); f_11895ef0();
  /* 11891588 mov esi, esp */
  ESI = (ESP);
  /* 1189158a push 0x118be184 */
  push32((uint32_t)(0x118be184u));
  /* 1189158f push 0x118c3658 */
  push32((uint32_t)(0x118c3658u));
  /* 11891594 call dword ptr [0x118c64dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64dc))), 0x1189159au);
  /* 1189159a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189159d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189159f call 0x11895ef0 */
  push32(0x118915a4u); f_11895ef0();
  /* 118915a4 mov esi, esp */
  ESI = (ESP);
  /* 118915a6 push 0x118be17c */
  push32((uint32_t)(0x118be17cu));
  /* 118915ab push 0x118c3650 */
  push32((uint32_t)(0x118c3650u));
  /* 118915b0 call dword ptr [0x118c64dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64dc))), 0x118915b6u);
  /* 118915b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118915b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118915bb call 0x11895ef0 */
  push32(0x118915c0u); f_11895ef0();
  /* 118915c0 mov esi, esp */
  ESI = (ESP);
  /* 118915c2 push 0x118be170 */
  push32((uint32_t)(0x118be170u));
  /* 118915c7 push 0x118c3678 */
  push32((uint32_t)(0x118c3678u));
  /* 118915cc call dword ptr [0x118c64dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64dc))), 0x118915d2u);
  /* 118915d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118915d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118915d7 call 0x11895ef0 */
  push32(0x118915dcu); f_11895ef0();
  /* 118915dc mov esi, esp */
  ESI = (ESP);
  /* 118915de push 0x118be164 */
  push32((uint32_t)(0x118be164u));
  /* 118915e3 push 0x118c3680 */
  push32((uint32_t)(0x118c3680u));
  /* 118915e8 call dword ptr [0x118c64dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64dc))), 0x118915eeu);
  /* 118915ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118915f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118915f3 call 0x11895ef0 */
  push32(0x118915f8u); f_11895ef0();
  /* 118915f8 mov esi, esp */
  ESI = (ESP);
  /* 118915fa push 0x118be158 */
  push32((uint32_t)(0x118be158u));
  /* 118915ff push 0x118c3670 */
  push32((uint32_t)(0x118c3670u));
  /* 11891604 call dword ptr [0x118c64dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64dc))), 0x1189160au);
  /* 1189160a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189160d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189160f call 0x11895ef0 */
  push32(0x11891614u); f_11895ef0();
  /* 11891614 mov esi, esp */
  ESI = (ESP);
  /* 11891616 push 0x118be148 */
  push32((uint32_t)(0x118be148u));
  /* 1189161b push 0x118c3418 */
  push32((uint32_t)(0x118c3418u));
  /* 11891620 call dword ptr [0x118c64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64ec))), 0x11891626u);
  /* 11891626 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891629 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189162b call 0x11895ef0 */
  push32(0x11891630u); f_11895ef0();
  /* 11891630 mov esi, esp */
  ESI = (ESP);
  /* 11891632 push 0x118be134 */
  push32((uint32_t)(0x118be134u));
  /* 11891637 push 0x118c3630 */
  push32((uint32_t)(0x118c3630u));
  /* 1189163c call dword ptr [0x118c64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64ec))), 0x11891642u);
  /* 11891642 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891645 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891647 call 0x11895ef0 */
  push32(0x1189164cu); f_11895ef0();
  /* 1189164c mov esi, esp */
  ESI = (ESP);
  /* 1189164e push 0x118be124 */
  push32((uint32_t)(0x118be124u));
  /* 11891653 push 0x118c3450 */
  push32((uint32_t)(0x118c3450u));
  /* 11891658 call dword ptr [0x118c64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64ec))), 0x1189165eu);
  /* 1189165e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891661 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891663 call 0x11895ef0 */
  push32(0x11891668u); f_11895ef0();
  /* 11891668 mov esi, esp */
  ESI = (ESP);
  /* 1189166a push 0x118be114 */
  push32((uint32_t)(0x118be114u));
  /* 1189166f push 0x118c34c0 */
  push32((uint32_t)(0x118c34c0u));
  /* 11891674 call dword ptr [0x118c64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64ec))), 0x1189167au);
  /* 1189167a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189167d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189167f call 0x11895ef0 */
  push32(0x11891684u); f_11895ef0();
  /* 11891684 mov esi, esp */
  ESI = (ESP);
  /* 11891686 push 0x118be104 */
  push32((uint32_t)(0x118be104u));
  /* 1189168b push 0x118c36a8 */
  push32((uint32_t)(0x118c36a8u));
  /* 11891690 call dword ptr [0x118c64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64ec))), 0x11891696u);
  /* 11891696 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891699 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189169b call 0x11895ef0 */
  push32(0x118916a0u); f_11895ef0();
  /* 118916a0 mov esi, esp */
  ESI = (ESP);
  /* 118916a2 push 0x118be0ec */
  push32((uint32_t)(0x118be0ecu));
  /* 118916a7 push 0x118c3440 */
  push32((uint32_t)(0x118c3440u));
  /* 118916ac call dword ptr [0x118c64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64ec))), 0x118916b2u);
  /* 118916b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118916b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118916b7 call 0x11895ef0 */
  push32(0x118916bcu); f_11895ef0();
  /* 118916bc mov esi, esp */
  ESI = (ESP);
  /* 118916be push 0x118be0dc */
  push32((uint32_t)(0x118be0dcu));
  /* 118916c3 push 0x118c3638 */
  push32((uint32_t)(0x118c3638u));
  /* 118916c8 call dword ptr [0x118c64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64ec))), 0x118916ceu);
  /* 118916ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118916d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118916d3 call 0x11895ef0 */
  push32(0x118916d8u); f_11895ef0();
  /* 118916d8 mov esi, esp */
  ESI = (ESP);
  /* 118916da push 0x118be0cc */
  push32((uint32_t)(0x118be0ccu));
  /* 118916df push 0x118c36f0 */
  push32((uint32_t)(0x118c36f0u));
  /* 118916e4 call dword ptr [0x118c64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64ec))), 0x118916eau);
  /* 118916ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118916ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118916ef call 0x11895ef0 */
  push32(0x118916f4u); f_11895ef0();
  /* 118916f4 mov esi, esp */
  ESI = (ESP);
  /* 118916f6 push 0x118be0c0 */
  push32((uint32_t)(0x118be0c0u));
  /* 118916fb push 0x118c3668 */
  push32((uint32_t)(0x118c3668u));
  /* 11891700 call dword ptr [0x118c64f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64f0))), 0x11891706u);
  /* 11891706 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891709 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189170b call 0x11895ef0 */
  push32(0x11891710u); f_11895ef0();
  /* 11891710 mov esi, esp */
  ESI = (ESP);
  /* 11891712 push 8 */
  push32((uint32_t)(0x8u));
  /* 11891714 push 0x118c3430 */
  push32((uint32_t)(0x118c3430u));
  /* 11891719 call dword ptr [0x118c64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e8))), 0x1189171fu);
  /* 1189171f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891722 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891724 call 0x11895ef0 */
  push32(0x11891729u); f_11895ef0();
  /* 11891729 mov esi, esp */
  ESI = (ESP);
  /* 1189172b push 8 */
  push32((uint32_t)(0x8u));
  /* 1189172d push 0x118c3428 */
  push32((uint32_t)(0x118c3428u));
  /* 11891732 call dword ptr [0x118c64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e8))), 0x11891738u);
  /* 11891738 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189173b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189173d call 0x11895ef0 */
  push32(0x11891742u); f_11895ef0();
  /* 11891742 mov esi, esp */
  ESI = (ESP);
  /* 11891744 push 8 */
  push32((uint32_t)(0x8u));
  /* 11891746 push 0x118c3448 */
  push32((uint32_t)(0x118c3448u));
  /* 1189174b call dword ptr [0x118c64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e8))), 0x11891751u);
  /* 11891751 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891754 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891756 call 0x11895ef0 */
  push32(0x1189175bu); f_11895ef0();
  /* 1189175b mov esi, esp */
  ESI = (ESP);
  /* 1189175d push 8 */
  push32((uint32_t)(0x8u));
  /* 1189175f push 0x118c3438 */
  push32((uint32_t)(0x118c3438u));
  /* 11891764 call dword ptr [0x118c64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e8))), 0x1189176au);
  /* 1189176a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189176d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189176f call 0x11895ef0 */
  push32(0x11891774u); f_11895ef0();
  /* 11891774 mov esi, esp */
  ESI = (ESP);
  /* 11891776 push 8 */
  push32((uint32_t)(0x8u));
  /* 11891778 push 0x118c3400 */
  push32((uint32_t)(0x118c3400u));
  /* 1189177d call dword ptr [0x118c64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e8))), 0x11891783u);
  /* 11891783 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891786 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891788 call 0x11895ef0 */
  push32(0x1189178du); f_11895ef0();
  /* 1189178d mov esi, esp */
  ESI = (ESP);
  /* 1189178f push 8 */
  push32((uint32_t)(0x8u));
  /* 11891791 push 0x118c33f8 */
  push32((uint32_t)(0x118c33f8u));
  /* 11891796 call dword ptr [0x118c64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e8))), 0x1189179cu);
  /* 1189179c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189179f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118917a1 call 0x11895ef0 */
  push32(0x118917a6u); f_11895ef0();
  /* 118917a6 mov esi, esp */
  ESI = (ESP);
  /* 118917a8 push 8 */
  push32((uint32_t)(0x8u));
  /* 118917aa push 0x118c3410 */
  push32((uint32_t)(0x118c3410u));
  /* 118917af call dword ptr [0x118c64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e8))), 0x118917b5u);
  /* 118917b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118917b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118917ba call 0x11895ef0 */
  push32(0x118917bfu); f_11895ef0();
  /* 118917bf mov esi, esp */
  ESI = (ESP);
  /* 118917c1 push 8 */
  push32((uint32_t)(0x8u));
  /* 118917c3 push 0x118c3408 */
  push32((uint32_t)(0x118c3408u));
  /* 118917c8 call dword ptr [0x118c64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e8))), 0x118917ceu);
  /* 118917ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118917d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118917d3 call 0x11895ef0 */
  push32(0x118917d8u); f_11895ef0();
  /* 118917d8 mov esi, esp */
  ESI = (ESP);
  /* 118917da push 8 */
  push32((uint32_t)(0x8u));
  /* 118917dc push 0x118c3420 */
  push32((uint32_t)(0x118c3420u));
  /* 118917e1 call dword ptr [0x118c64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e8))), 0x118917e7u);
  /* 118917e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118917ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118917ec call 0x11895ef0 */
  push32(0x118917f1u); f_11895ef0();
  /* 118917f1 mov esi, esp */
  ESI = (ESP);
  /* 118917f3 push 8 */
  push32((uint32_t)(0x8u));
  /* 118917f5 push 0x118c3528 */
  push32((uint32_t)(0x118c3528u));
  /* 118917fa call dword ptr [0x118c64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e8))), 0x11891800u);
  /* 11891800 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891803 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891805 call 0x11895ef0 */
  push32(0x1189180au); f_11895ef0();
  /* 1189180a mov esi, esp */
  ESI = (ESP);
  /* 1189180c push 8 */
  push32((uint32_t)(0x8u));
  /* 1189180e push 0x118c3520 */
  push32((uint32_t)(0x118c3520u));
  /* 11891813 call dword ptr [0x118c64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e8))), 0x11891819u);
  /* 11891819 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189181c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189181e call 0x11895ef0 */
  push32(0x11891823u); f_11895ef0();
  /* 11891823 mov esi, esp */
  ESI = (ESP);
  /* 11891825 push 8 */
  push32((uint32_t)(0x8u));
  /* 11891827 push 0x118c3560 */
  push32((uint32_t)(0x118c3560u));
  /* 1189182c call dword ptr [0x118c64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e8))), 0x11891832u);
  /* 11891832 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891835 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891837 call 0x11895ef0 */
  push32(0x1189183cu); f_11895ef0();
  /* 1189183c mov esi, esp */
  ESI = (ESP);
  /* 1189183e push 8 */
  push32((uint32_t)(0x8u));
  /* 11891840 push 0x118c3558 */
  push32((uint32_t)(0x118c3558u));
  /* 11891845 call dword ptr [0x118c64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e8))), 0x1189184bu);
  /* 1189184b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189184e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891850 call 0x11895ef0 */
  push32(0x11891855u); f_11895ef0();
  /* 11891855 mov esi, esp */
  ESI = (ESP);
  /* 11891857 push 8 */
  push32((uint32_t)(0x8u));
  /* 11891859 push 0x118c3578 */
  push32((uint32_t)(0x118c3578u));
  /* 1189185e call dword ptr [0x118c64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e8))), 0x11891864u);
  /* 11891864 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891867 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891869 call 0x11895ef0 */
  push32(0x1189186eu); f_11895ef0();
  /* 1189186e mov esi, esp */
  ESI = (ESP);
  /* 11891870 push 8 */
  push32((uint32_t)(0x8u));
  /* 11891872 push 0x118c3568 */
  push32((uint32_t)(0x118c3568u));
  /* 11891877 call dword ptr [0x118c64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e8))), 0x1189187du);
  /* 1189187d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891880 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891882 call 0x11895ef0 */
  push32(0x11891887u); f_11895ef0();
  /* 11891887 mov esi, esp */
  ESI = (ESP);
  /* 11891889 push 8 */
  push32((uint32_t)(0x8u));
  /* 1189188b push 0x118c3540 */
  push32((uint32_t)(0x118c3540u));
  /* 11891890 call dword ptr [0x118c64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e8))), 0x11891896u);
  /* 11891896 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891899 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189189b call 0x11895ef0 */
  push32(0x118918a0u); f_11895ef0();
  /* 118918a0 mov esi, esp */
  ESI = (ESP);
  /* 118918a2 push 8 */
  push32((uint32_t)(0x8u));
  /* 118918a4 push 0x118c3538 */
  push32((uint32_t)(0x118c3538u));
  /* 118918a9 call dword ptr [0x118c64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e8))), 0x118918afu);
  /* 118918af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118918b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118918b4 call 0x11895ef0 */
  push32(0x118918b9u); f_11895ef0();
  /* 118918b9 mov esi, esp */
  ESI = (ESP);
  /* 118918bb push 8 */
  push32((uint32_t)(0x8u));
  /* 118918bd push 0x118c3550 */
  push32((uint32_t)(0x118c3550u));
  /* 118918c2 call dword ptr [0x118c64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e8))), 0x118918c8u);
  /* 118918c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118918cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118918cd call 0x11895ef0 */
  push32(0x118918d2u); f_11895ef0();
  /* 118918d2 mov esi, esp */
  ESI = (ESP);
  /* 118918d4 push 8 */
  push32((uint32_t)(0x8u));
  /* 118918d6 push 0x118c3548 */
  push32((uint32_t)(0x118c3548u));
  /* 118918db call dword ptr [0x118c64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e8))), 0x118918e1u);
  /* 118918e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118918e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118918e6 call 0x11895ef0 */
  push32(0x118918ebu); f_11895ef0();
  /* 118918eb mov esi, esp */
  ESI = (ESP);
  /* 118918ed push 8 */
  push32((uint32_t)(0x8u));
  /* 118918ef push 0x118c3570 */
  push32((uint32_t)(0x118c3570u));
  /* 118918f4 call dword ptr [0x118c64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e8))), 0x118918fau);
  /* 118918fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118918fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118918ff call 0x11895ef0 */
  push32(0x11891904u); f_11895ef0();
  /* 11891904 mov esi, esp */
  ESI = (ESP);
  /* 11891906 push 4 */
  push32((uint32_t)(0x4u));
  /* 11891908 push 0x118c3530 */
  push32((uint32_t)(0x118c3530u));
  /* 1189190d call dword ptr [0x118c64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e8))), 0x11891913u);
  /* 11891913 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891916 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891918 call 0x11895ef0 */
  push32(0x1189191du); f_11895ef0();
  /* 1189191d mov esi, esp */
  ESI = (ESP);
  /* 1189191f push 4 */
  push32((uint32_t)(0x4u));
  /* 11891921 push 0x118c3580 */
  push32((uint32_t)(0x118c3580u));
  /* 11891926 call dword ptr [0x118c64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e8))), 0x1189192cu);
  /* 1189192c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189192f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891931 call 0x11895ef0 */
  push32(0x11891936u); f_11895ef0();
  /* 11891936 mov esi, esp */
  ESI = (ESP);
  /* 11891938 push 4 */
  push32((uint32_t)(0x4u));
  /* 1189193a push 0x118c35d8 */
  push32((uint32_t)(0x118c35d8u));
  /* 1189193f call dword ptr [0x118c64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e8))), 0x11891945u);
  /* 11891945 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891948 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189194a call 0x11895ef0 */
  push32(0x1189194fu); f_11895ef0();
  /* 1189194f mov esi, esp */
  ESI = (ESP);
  /* 11891951 push 4 */
  push32((uint32_t)(0x4u));
  /* 11891953 push 0x118c3628 */
  push32((uint32_t)(0x118c3628u));
  /* 11891958 call dword ptr [0x118c64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e8))), 0x1189195eu);
  /* 1189195e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891961 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891963 call 0x11895ef0 */
  push32(0x11891968u); f_11895ef0();
  /* 11891968 mov esi, esp */
  ESI = (ESP);
  /* 1189196a push 4 */
  push32((uint32_t)(0x4u));
  /* 1189196c push 0x118c3640 */
  push32((uint32_t)(0x118c3640u));
  /* 11891971 call dword ptr [0x118c64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e8))), 0x11891977u);
  /* 11891977 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189197a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189197c call 0x11895ef0 */
  push32(0x11891981u); f_11895ef0();
  /* 11891981 mov esi, esp */
  ESI = (ESP);
  /* 11891983 push 4 */
  push32((uint32_t)(0x4u));
  /* 11891985 push 0x118c3660 */
  push32((uint32_t)(0x118c3660u));
  /* 1189198a call dword ptr [0x118c64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e8))), 0x11891990u);
  /* 11891990 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891993 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891995 call 0x11895ef0 */
  push32(0x1189199au); f_11895ef0();
  /* 1189199a mov esi, esp */
  ESI = (ESP);
  /* 1189199c push 0x118be0b8 */
  push32((uint32_t)(0x118be0b8u));
  /* 118919a1 push 0x118c3698 */
  push32((uint32_t)(0x118c3698u));
  /* 118919a6 call dword ptr [0x118c64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64f8))), 0x118919acu);
  /* 118919ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118919af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118919b1 call 0x11895ef0 */
  push32(0x118919b6u); f_11895ef0();
  /* 118919b6 mov esi, esp */
  ESI = (ESP);
  /* 118919b8 push 0x118be0a8 */
  push32((uint32_t)(0x118be0a8u));
  /* 118919bd push 0x118c3590 */
  push32((uint32_t)(0x118c3590u));
  /* 118919c2 call dword ptr [0x118c64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64f8))), 0x118919c8u);
  /* 118919c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118919cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118919cd call 0x11895ef0 */
  push32(0x118919d2u); f_11895ef0();
  /* 118919d2 mov esi, esp */
  ESI = (ESP);
  /* 118919d4 push 0x118be098 */
  push32((uint32_t)(0x118be098u));
  /* 118919d9 push 0x118c35c0 */
  push32((uint32_t)(0x118c35c0u));
  /* 118919de call dword ptr [0x118c64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64f8))), 0x118919e4u);
  /* 118919e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118919e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118919e9 call 0x11895ef0 */
  push32(0x118919eeu); f_11895ef0();
  /* 118919ee mov esi, esp */
  ESI = (ESP);
  /* 118919f0 push 0x118be088 */
  push32((uint32_t)(0x118be088u));
  /* 118919f5 push 0x118c35d0 */
  push32((uint32_t)(0x118c35d0u));
  /* 118919fa call dword ptr [0x118c64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64f8))), 0x11891a00u);
  /* 11891a00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891a03 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891a05 call 0x11895ef0 */
  push32(0x11891a0au); f_11895ef0();
  /* 11891a0a mov esi, esp */
  ESI = (ESP);
  /* 11891a0c push 0x118be078 */
  push32((uint32_t)(0x118be078u));
  /* 11891a11 push 0x118c35a0 */
  push32((uint32_t)(0x118c35a0u));
  /* 11891a16 call dword ptr [0x118c64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64f8))), 0x11891a1cu);
  /* 11891a1c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891a1f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891a21 call 0x11895ef0 */
  push32(0x11891a26u); f_11895ef0();
  /* 11891a26 mov esi, esp */
  ESI = (ESP);
  /* 11891a28 push 0x118be068 */
  push32((uint32_t)(0x118be068u));
  /* 11891a2d push 0x118c3588 */
  push32((uint32_t)(0x118c3588u));
  /* 11891a32 call dword ptr [0x118c64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64f8))), 0x11891a38u);
  /* 11891a38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891a3b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891a3d call 0x11895ef0 */
  push32(0x11891a42u); f_11895ef0();
  /* 11891a42 mov esi, esp */
  ESI = (ESP);
  /* 11891a44 push 0x118be060 */
  push32((uint32_t)(0x118be060u));
  /* 11891a49 push 0x118c3690 */
  push32((uint32_t)(0x118c3690u));
  /* 11891a4e call dword ptr [0x118c64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64f8))), 0x11891a54u);
  /* 11891a54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891a57 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891a59 call 0x11895ef0 */
  push32(0x11891a5eu); f_11895ef0();
  /* 11891a5e mov esi, esp */
  ESI = (ESP);
  /* 11891a60 push 0x118be054 */
  push32((uint32_t)(0x118be054u));
  /* 11891a65 push 0x118c33e0 */
  push32((uint32_t)(0x118c33e0u));
  /* 11891a6a call dword ptr [0x118c64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64f8))), 0x11891a70u);
  /* 11891a70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891a73 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891a75 call 0x11895ef0 */
  push32(0x11891a7au); f_11895ef0();
  /* 11891a7a mov esi, esp */
  ESI = (ESP);
  /* 11891a7c push 0x118be048 */
  push32((uint32_t)(0x118be048u));
  /* 11891a81 push 0x118c33e8 */
  push32((uint32_t)(0x118c33e8u));
  /* 11891a86 call dword ptr [0x118c64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64f8))), 0x11891a8cu);
  /* 11891a8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891a8f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891a91 call 0x11895ef0 */
  push32(0x11891a96u); f_11895ef0();
  /* 11891a96 mov esi, esp */
  ESI = (ESP);
  /* 11891a98 push 0x118be040 */
  push32((uint32_t)(0x118be040u));
  /* 11891a9d push 0x118c34b0 */
  push32((uint32_t)(0x118c34b0u));
  /* 11891aa2 call dword ptr [0x118c64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64f8))), 0x11891aa8u);
  /* 11891aa8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891aab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891aad call 0x11895ef0 */
  push32(0x11891ab2u); f_11895ef0();
  /* 11891ab2 mov esi, esp */
  ESI = (ESP);
  /* 11891ab4 push 0x118c3430 */
  push32((uint32_t)(0x118c3430u));
  /* 11891ab9 call dword ptr [0x118c64fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64fc))), 0x11891abfu);
  /* 11891abf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891ac2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891ac4 call 0x11895ef0 */
  push32(0x11891ac9u); f_11895ef0();
  /* 11891ac9 mov esi, esp */
  ESI = (ESP);
  /* 11891acb push 0x118c3428 */
  push32((uint32_t)(0x118c3428u));
  /* 11891ad0 call dword ptr [0x118c64fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64fc))), 0x11891ad6u);
  /* 11891ad6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891ad9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891adb call 0x11895ef0 */
  push32(0x11891ae0u); f_11895ef0();
  /* 11891ae0 mov esi, esp */
  ESI = (ESP);
  /* 11891ae2 push 0x118c3448 */
  push32((uint32_t)(0x118c3448u));
  /* 11891ae7 call dword ptr [0x118c64fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64fc))), 0x11891aedu);
  /* 11891aed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891af0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891af2 call 0x11895ef0 */
  push32(0x11891af7u); f_11895ef0();
  /* 11891af7 mov esi, esp */
  ESI = (ESP);
  /* 11891af9 push 0x118c3438 */
  push32((uint32_t)(0x118c3438u));
  /* 11891afe call dword ptr [0x118c64fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64fc))), 0x11891b04u);
  /* 11891b04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891b07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891b09 call 0x11895ef0 */
  push32(0x11891b0eu); f_11895ef0();
  /* 11891b0e mov esi, esp */
  ESI = (ESP);
  /* 11891b10 push 0x118c3400 */
  push32((uint32_t)(0x118c3400u));
  /* 11891b15 call dword ptr [0x118c64fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64fc))), 0x11891b1bu);
  /* 11891b1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891b1e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891b20 call 0x11895ef0 */
  push32(0x11891b25u); f_11895ef0();
  /* 11891b25 mov esi, esp */
  ESI = (ESP);
  /* 11891b27 push 0x118c33f8 */
  push32((uint32_t)(0x118c33f8u));
  /* 11891b2c call dword ptr [0x118c64fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64fc))), 0x11891b32u);
  /* 11891b32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891b35 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891b37 call 0x11895ef0 */
  push32(0x11891b3cu); f_11895ef0();
  /* 11891b3c mov esi, esp */
  ESI = (ESP);
  /* 11891b3e push 0x118c3410 */
  push32((uint32_t)(0x118c3410u));
  /* 11891b43 call dword ptr [0x118c64fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64fc))), 0x11891b49u);
  /* 11891b49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891b4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891b4e call 0x11895ef0 */
  push32(0x11891b53u); f_11895ef0();
  /* 11891b53 mov esi, esp */
  ESI = (ESP);
  /* 11891b55 push 0x118c3408 */
  push32((uint32_t)(0x118c3408u));
  /* 11891b5a call dword ptr [0x118c64fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64fc))), 0x11891b60u);
  /* 11891b60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891b63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891b65 call 0x11895ef0 */
  push32(0x11891b6au); f_11895ef0();
  /* 11891b6a mov esi, esp */
  ESI = (ESP);
  /* 11891b6c push 0x118c3420 */
  push32((uint32_t)(0x118c3420u));
  /* 11891b71 call dword ptr [0x118c64fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64fc))), 0x11891b77u);
  /* 11891b77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891b7a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891b7c call 0x11895ef0 */
  push32(0x11891b81u); f_11895ef0();
  /* 11891b81 mov esi, esp */
  ESI = (ESP);
  /* 11891b83 push 0x118c3528 */
  push32((uint32_t)(0x118c3528u));
  /* 11891b88 call dword ptr [0x118c64fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64fc))), 0x11891b8eu);
  /* 11891b8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891b91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891b93 call 0x11895ef0 */
  push32(0x11891b98u); f_11895ef0();
  /* 11891b98 mov esi, esp */
  ESI = (ESP);
  /* 11891b9a push 0x118c3520 */
  push32((uint32_t)(0x118c3520u));
  /* 11891b9f call dword ptr [0x118c64fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64fc))), 0x11891ba5u);
  /* 11891ba5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891ba8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891baa call 0x11895ef0 */
  push32(0x11891bafu); f_11895ef0();
  /* 11891baf mov esi, esp */
  ESI = (ESP);
  /* 11891bb1 push 0x118c3560 */
  push32((uint32_t)(0x118c3560u));
  /* 11891bb6 call dword ptr [0x118c64fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64fc))), 0x11891bbcu);
  /* 11891bbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891bbf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891bc1 call 0x11895ef0 */
  push32(0x11891bc6u); f_11895ef0();
  /* 11891bc6 mov esi, esp */
  ESI = (ESP);
  /* 11891bc8 push 0x118c3558 */
  push32((uint32_t)(0x118c3558u));
  /* 11891bcd call dword ptr [0x118c64fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64fc))), 0x11891bd3u);
  /* 11891bd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891bd6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891bd8 call 0x11895ef0 */
  push32(0x11891bddu); f_11895ef0();
  /* 11891bdd mov esi, esp */
  ESI = (ESP);
  /* 11891bdf push 0x118c3578 */
  push32((uint32_t)(0x118c3578u));
  /* 11891be4 call dword ptr [0x118c64fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64fc))), 0x11891beau);
  /* 11891bea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891bed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891bef call 0x11895ef0 */
  push32(0x11891bf4u); f_11895ef0();
  /* 11891bf4 mov esi, esp */
  ESI = (ESP);
  /* 11891bf6 push 0x118c3568 */
  push32((uint32_t)(0x118c3568u));
  /* 11891bfb call dword ptr [0x118c64fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64fc))), 0x11891c01u);
  /* 11891c01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891c04 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891c06 call 0x11895ef0 */
  push32(0x11891c0bu); f_11895ef0();
  /* 11891c0b mov esi, esp */
  ESI = (ESP);
  /* 11891c0d push 0x118c3540 */
  push32((uint32_t)(0x118c3540u));
  /* 11891c12 call dword ptr [0x118c64fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64fc))), 0x11891c18u);
  /* 11891c18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891c1b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891c1d call 0x11895ef0 */
  push32(0x11891c22u); f_11895ef0();
  /* 11891c22 mov esi, esp */
  ESI = (ESP);
  /* 11891c24 push 0x118c3538 */
  push32((uint32_t)(0x118c3538u));
  /* 11891c29 call dword ptr [0x118c64fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64fc))), 0x11891c2fu);
  /* 11891c2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891c32 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891c34 call 0x11895ef0 */
  push32(0x11891c39u); f_11895ef0();
  /* 11891c39 mov esi, esp */
  ESI = (ESP);
  /* 11891c3b push 0x118c3550 */
  push32((uint32_t)(0x118c3550u));
  /* 11891c40 call dword ptr [0x118c64fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64fc))), 0x11891c46u);
  /* 11891c46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891c49 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891c4b call 0x11895ef0 */
  push32(0x11891c50u); f_11895ef0();
  /* 11891c50 mov esi, esp */
  ESI = (ESP);
  /* 11891c52 push 0x118c3548 */
  push32((uint32_t)(0x118c3548u));
  /* 11891c57 call dword ptr [0x118c64fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64fc))), 0x11891c5du);
  /* 11891c5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891c60 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891c62 call 0x11895ef0 */
  push32(0x11891c67u); f_11895ef0();
  /* 11891c67 mov esi, esp */
  ESI = (ESP);
  /* 11891c69 push 0x118c3570 */
  push32((uint32_t)(0x118c3570u));
  /* 11891c6e call dword ptr [0x118c64fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64fc))), 0x11891c74u);
  /* 11891c74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891c77 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891c79 call 0x11895ef0 */
  push32(0x11891c7eu); f_11895ef0();
  /* 11891c7e mov esi, esp */
  ESI = (ESP);
  /* 11891c80 push 0x118c3688 */
  push32((uint32_t)(0x118c3688u));
  /* 11891c85 call dword ptr [0x118c64fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64fc))), 0x11891c8bu);
  /* 11891c8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891c8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891c90 call 0x11895ef0 */
  push32(0x11891c95u); f_11895ef0();
  /* 11891c95 mov esi, esp */
  ESI = (ESP);
  /* 11891c97 push 0x118be034 */
  push32((uint32_t)(0x118be034u));
  /* 11891c9c push 1 */
  push32((uint32_t)(0x1u));
  /* 11891c9e call dword ptr [0x118c64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64f4))), 0x11891ca4u);
  /* 11891ca4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891ca7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891ca9 call 0x11895ef0 */
  push32(0x11891caeu); f_11895ef0();
  /* 11891cae mov esi, esp */
  ESI = (ESP);
  /* 11891cb0 push 0x118be028 */
  push32((uint32_t)(0x118be028u));
  /* 11891cb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11891cb7 call dword ptr [0x118c64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64f4))), 0x11891cbdu);
  /* 11891cbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891cc0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891cc2 call 0x11895ef0 */
  push32(0x11891cc7u); f_11895ef0();
  /* 11891cc7 mov esi, esp */
  ESI = (ESP);
  /* 11891cc9 push 0x118be01c */
  push32((uint32_t)(0x118be01cu));
  /* 11891cce push 5 */
  push32((uint32_t)(0x5u));
  /* 11891cd0 call dword ptr [0x118c64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64f4))), 0x11891cd6u);
  /* 11891cd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891cd9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891cdb call 0x11895ef0 */
  push32(0x11891ce0u); f_11895ef0();
  /* 11891ce0 mov esi, esp */
  ESI = (ESP);
  /* 11891ce2 push 0x26 */
  push32((uint32_t)(0x26u));
  /* 11891ce4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11891ce6 call dword ptr [0x118c6504] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6504))), 0x11891cecu);
  /* 11891cec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891cef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891cf1 call 0x11895ef0 */
  push32(0x11891cf6u); f_11895ef0();
  /* 11891cf6 mov esi, esp */
  ESI = (ESP);
  /* 11891cf8 push 0x26 */
  push32((uint32_t)(0x26u));
  /* 11891cfa push 2 */
  push32((uint32_t)(0x2u));
  /* 11891cfc call dword ptr [0x118c6504] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6504))), 0x11891d02u);
  /* 11891d02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891d05 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891d07 call 0x11895ef0 */
  push32(0x11891d0cu); f_11895ef0();
  /* 11891d0c mov esi, esp */
  ESI = (ESP);
  /* 11891d0e push 0x26 */
  push32((uint32_t)(0x26u));
  /* 11891d10 push 5 */
  push32((uint32_t)(0x5u));
  /* 11891d12 call dword ptr [0x118c6504] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6504))), 0x11891d18u);
  /* 11891d18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891d1b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891d1d call 0x11895ef0 */
  push32(0x11891d22u); f_11895ef0();
  /* 11891d22 mov esi, esp */
  ESI = (ESP);
  /* 11891d24 push 0 */
  push32((uint32_t)(0x0u));
  /* 11891d26 push 0x118c3638 */
  push32((uint32_t)(0x118c3638u));
  /* 11891d2b push 0 */
  push32((uint32_t)(0x0u));
  /* 11891d2d call dword ptr [0x118c6508] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6508))), 0x11891d33u);
  /* 11891d33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891d36 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891d38 call 0x11895ef0 */
  push32(0x11891d3du); f_11895ef0();
  /* 11891d3d mov esi, esp */
  ESI = (ESP);
  /* 11891d3f push 0 */
  push32((uint32_t)(0x0u));
  /* 11891d41 push 0x118c36f0 */
  push32((uint32_t)(0x118c36f0u));
  /* 11891d46 push 0 */
  push32((uint32_t)(0x0u));
  /* 11891d48 call dword ptr [0x118c6508] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6508))), 0x11891d4eu);
  /* 11891d4e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891d51 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891d53 call 0x11895ef0 */
  push32(0x11891d58u); f_11895ef0();
  /* 11891d58 mov esi, esp */
  ESI = (ESP);
  /* 11891d5a push 0x118c3668 */
  push32((uint32_t)(0x118c3668u));
  /* 11891d5f push 0 */
  push32((uint32_t)(0x0u));
  /* 11891d61 call dword ptr [0x118c6500] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6500))), 0x11891d67u);
  /* 11891d67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891d6a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891d6c call 0x11895ef0 */
  push32(0x11891d71u); f_11895ef0();
  /* 11891d71 pop edi */
  EDI = (pop32());
  /* 11891d72 pop esi */
  ESI = (pop32());
  /* 11891d73 pop ebx */
  EBX = (pop32());
  /* 11891d74 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11891d77 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11891d79 call 0x11895ef0 */
  push32(0x11891d7eu); f_11895ef0();
  /* 11891d7e mov esp, ebp */
  ESP = (EBP);
  /* 11891d80 pop ebp */
  EBP = (pop32());
  /* 11891d81 ret  */
  ESPCHK(0x11891030u, _esp0);
  ESP += 4; return;
}

/* FUN_100020e0 @ 0x118920e0 (67 bytes, 26 insns) */
void f_118920e0(void) {
  FTRACE(0x118920e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118920e0 push ebp */
  push32((uint32_t)(EBP));
  /* 118920e1 mov ebp, esp */
  EBP = (ESP);
  /* 118920e3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118920e6 push ebx */
  push32((uint32_t)(EBX));
  /* 118920e7 push esi */
  push32((uint32_t)(ESI));
  /* 118920e8 push edi */
  push32((uint32_t)(EDI));
  /* 118920e9 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 118920ec mov ecx, 0x11 */
  ECX = (0x11u);
  /* 118920f1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 118920f6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 118920f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118920fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118920fe cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892102 je 0x11892106 */
  if (C.zf) goto L_11892106;
  /* 11892104 jmp 0x1189210b */
  goto L_1189210b;
L_11892106:;
  /* 11892106 call 0x11891005 */
  push32(0x1189210bu); f_11891005();
L_1189210b:;
  /* 1189210b mov eax, 1 */
  EAX = (0x1u);
  /* 11892110 pop edi */
  EDI = (pop32());
  /* 11892111 pop esi */
  ESI = (pop32());
  /* 11892112 pop ebx */
  EBX = (pop32());
  /* 11892113 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892116 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892118 call 0x11895ef0 */
  push32(0x1189211du); f_11895ef0();
  /* 1189211d mov esp, ebp */
  ESP = (EBP);
  /* 1189211f pop ebp */
  EBP = (pop32());
  /* 11892120 ret 0xc */
  ESPCHK(0x118920e0u, _esp0);
  ESP += 16; return;
}

/* FUN_10002140 @ 0x11892140 (12374 bytes, 3403 insns) [2 switch table(s)] */
void f_11892140(void) {
  FTRACE(0x11892140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11892140 push ebp */
  push32((uint32_t)(EBP));
  /* 11892141 mov ebp, esp */
  EBP = (ESP);
  /* 11892143 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11892146 push ebx */
  push32((uint32_t)(EBX));
  /* 11892147 push esi */
  push32((uint32_t)(ESI));
  /* 11892148 push edi */
  push32((uint32_t)(EDI));
  /* 11892149 lea edi, [ebp - 0x5c] */
  EDI = ((uint32_t)(EBP + -0x5c));
  /* 1189214c mov ecx, 0x17 */
  ECX = (0x17u);
  /* 11892151 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11892156 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11892158 mov esi, esp */
  ESI = (ESP);
  /* 1189215a push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1189215c call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11892162u);
  /* 11892162 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892165 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892167 call 0x11895ef0 */
  push32(0x1189216cu); f_11895ef0();
  /* 1189216c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11892171 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11892173 je 0x1189305e */
  if (C.zf) goto L_1189305e;
  /* 11892179 mov esi, esp */
  ESI = (ESP);
  /* 1189217b push 0 */
  push32((uint32_t)(0x0u));
  /* 1189217d push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1189217f call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x11892185u);
  /* 11892185 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892188 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189218a call 0x11895ef0 */
  push32(0x1189218fu); f_11895ef0();
  /* 1189218f mov esi, esp */
  ESI = (ESP);
  /* 11892191 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11892193 call dword ptr [0x118c645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c645c))), 0x11892199u);
  /* 11892199 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189219c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189219e call 0x11895ef0 */
  push32(0x118921a3u); f_11895ef0();
  /* 118921a3 mov esi, esp */
  ESI = (ESP);
  /* 118921a5 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 118921a7 call dword ptr [0x118c6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6460))), 0x118921adu);
  /* 118921ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118921b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118921b2 call 0x11895ef0 */
  push32(0x118921b7u); f_11895ef0();
  /* 118921b7 mov esi, esp */
  ESI = (ESP);
  /* 118921b9 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 118921bb call dword ptr [0x118c6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6460))), 0x118921c1u);
  /* 118921c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118921c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118921c6 call 0x11895ef0 */
  push32(0x118921cbu); f_11895ef0();
  /* 118921cb mov esi, esp */
  ESI = (ESP);
  /* 118921cd push 0x45 */
  push32((uint32_t)(0x45u));
  /* 118921cf call dword ptr [0x118c6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6460))), 0x118921d5u);
  /* 118921d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118921d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118921da call 0x11895ef0 */
  push32(0x118921dfu); f_11895ef0();
  /* 118921df mov esi, esp */
  ESI = (ESP);
  /* 118921e1 push 0x118c34e8 */
  push32((uint32_t)(0x118c34e8u));
  /* 118921e6 call dword ptr [0x118c6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6458))), 0x118921ecu);
  /* 118921ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118921ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118921f1 call 0x11895ef0 */
  push32(0x118921f6u); f_11895ef0();
  /* 118921f6 mov esi, esp */
  ESI = (ESP);
  /* 118921f8 push 0x118c34e0 */
  push32((uint32_t)(0x118c34e0u));
  /* 118921fd call dword ptr [0x118c6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6458))), 0x11892203u);
  /* 11892203 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892206 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892208 call 0x11895ef0 */
  push32(0x1189220du); f_11895ef0();
  /* 1189220d mov esi, esp */
  ESI = (ESP);
  /* 1189220f push 0x118c34d8 */
  push32((uint32_t)(0x118c34d8u));
  /* 11892214 call dword ptr [0x118c6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6458))), 0x1189221au);
  /* 1189221a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189221d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189221f call 0x11895ef0 */
  push32(0x11892224u); f_11895ef0();
  /* 11892224 mov esi, esp */
  ESI = (ESP);
  /* 11892226 push 0x118c34d0 */
  push32((uint32_t)(0x118c34d0u));
  /* 1189222b call dword ptr [0x118c6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6458))), 0x11892231u);
  /* 11892231 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892234 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892236 call 0x11895ef0 */
  push32(0x1189223bu); f_11895ef0();
  /* 1189223b mov esi, esp */
  ESI = (ESP);
  /* 1189223d push 0x118c34c8 */
  push32((uint32_t)(0x118c34c8u));
  /* 11892242 call dword ptr [0x118c6468] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6468))), 0x11892248u);
  /* 11892248 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189224b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189224d call 0x11895ef0 */
  push32(0x11892252u); f_11895ef0();
  /* 11892252 mov esi, esp */
  ESI = (ESP);
  /* 11892254 push 0x118c3508 */
  push32((uint32_t)(0x118c3508u));
  /* 11892259 call dword ptr [0x118c6468] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6468))), 0x1189225fu);
  /* 1189225f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892262 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892264 call 0x11895ef0 */
  push32(0x11892269u); f_11895ef0();
  /* 11892269 mov esi, esp */
  ESI = (ESP);
  /* 1189226b push 0x118c3500 */
  push32((uint32_t)(0x118c3500u));
  /* 11892270 call dword ptr [0x118c6468] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6468))), 0x11892276u);
  /* 11892276 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892279 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189227b call 0x11895ef0 */
  push32(0x11892280u); f_11895ef0();
  /* 11892280 mov esi, esp */
  ESI = (ESP);
  /* 11892282 push 0x118c34f8 */
  push32((uint32_t)(0x118c34f8u));
  /* 11892287 call dword ptr [0x118c646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c646c))), 0x1189228du);
  /* 1189228d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892290 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892292 call 0x11895ef0 */
  push32(0x11892297u); f_11895ef0();
  /* 11892297 mov esi, esp */
  ESI = (ESP);
  /* 11892299 push 0x118c34f0 */
  push32((uint32_t)(0x118c34f0u));
  /* 1189229e call dword ptr [0x118c646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c646c))), 0x118922a4u);
  /* 118922a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118922a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118922a9 call 0x11895ef0 */
  push32(0x118922aeu); f_11895ef0();
  /* 118922ae mov esi, esp */
  ESI = (ESP);
  /* 118922b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 118922b2 push 0x118c36c8 */
  push32((uint32_t)(0x118c36c8u));
  /* 118922b7 call dword ptr [0x118c6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6464))), 0x118922bdu);
  /* 118922bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118922c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118922c2 call 0x11895ef0 */
  push32(0x118922c7u); f_11895ef0();
  /* 118922c7 mov esi, esp */
  ESI = (ESP);
  /* 118922c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 118922cb push 0x118c36c0 */
  push32((uint32_t)(0x118c36c0u));
  /* 118922d0 call dword ptr [0x118c6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6464))), 0x118922d6u);
  /* 118922d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118922d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118922db call 0x11895ef0 */
  push32(0x118922e0u); f_11895ef0();
  /* 118922e0 mov esi, esp */
  ESI = (ESP);
  /* 118922e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 118922e4 push 0x118c36d8 */
  push32((uint32_t)(0x118c36d8u));
  /* 118922e9 call dword ptr [0x118c6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6464))), 0x118922efu);
  /* 118922ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118922f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118922f4 call 0x11895ef0 */
  push32(0x118922f9u); f_11895ef0();
  /* 118922f9 mov esi, esp */
  ESI = (ESP);
  /* 118922fb push 1 */
  push32((uint32_t)(0x1u));
  /* 118922fd push 0x118c36d0 */
  push32((uint32_t)(0x118c36d0u));
  /* 11892302 call dword ptr [0x118c6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6464))), 0x11892308u);
  /* 11892308 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189230b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189230d call 0x11895ef0 */
  push32(0x11892312u); f_11895ef0();
  /* 11892312 mov esi, esp */
  ESI = (ESP);
  /* 11892314 push 2 */
  push32((uint32_t)(0x2u));
  /* 11892316 call dword ptr [0x118c6474] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6474))), 0x1189231cu);
  /* 1189231c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189231f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892321 call 0x11895ef0 */
  push32(0x11892326u); f_11895ef0();
  /* 11892326 mov esi, esp */
  ESI = (ESP);
  /* 11892328 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189232a push 0x118c33f0 */
  push32((uint32_t)(0x118c33f0u));
  /* 1189232f call dword ptr [0x118c6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6464))), 0x11892335u);
  /* 11892335 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892338 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189233a call 0x11895ef0 */
  push32(0x1189233fu); f_11895ef0();
  /* 1189233f mov esi, esp */
  ESI = (ESP);
  /* 11892341 push 1 */
  push32((uint32_t)(0x1u));
  /* 11892343 push 5 */
  push32((uint32_t)(0x5u));
  /* 11892345 call dword ptr [0x118c6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6478))), 0x1189234bu);
  /* 1189234b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189234e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892350 call 0x11895ef0 */
  push32(0x11892355u); f_11895ef0();
  /* 11892355 mov esi, esp */
  ESI = (ESP);
  /* 11892357 push 0 */
  push32((uint32_t)(0x0u));
  /* 11892359 call dword ptr [0x118c6470] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6470))), 0x1189235fu);
  /* 1189235f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892362 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892364 call 0x11895ef0 */
  push32(0x11892369u); f_11895ef0();
  /* 11892369 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1189236c cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892370 ja 0x118929d0 */
  if ((!C.cf&&!C.zf)) goto L_118929d0;
  /* 11892376 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11892379 jmp dword ptr [eax*4 + 0x11895196] */
  switch (EAX) {
    case 0: goto L_11892380;
    case 1: goto L_1189256c;
    case 2: goto L_118926f4;
    case 3: goto L_1189284a;
    case 4: goto L_118930cb;
    case 5: goto L_11893126;
    case 6: goto L_11893181;
    case 7: goto L_118931d9;
    default: x86_unimpl("switch@0x11892379 out of table"); return;
  }
L_11892380:;
  /* 11892380 mov esi, esp */
  ESI = (ESP);
  /* 11892382 push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 11892387 push 3 */
  push32((uint32_t)(0x3u));
  /* 11892389 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189238b call dword ptr [0x118c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6480))), 0x11892391u);
  /* 11892391 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892394 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892396 call 0x11895ef0 */
  push32(0x1189239bu); f_11895ef0();
  /* 1189239b mov esi, esp */
  ESI = (ESP);
  /* 1189239d push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 118923a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 118923a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 118923a6 call dword ptr [0x118c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6480))), 0x118923acu);
  /* 118923ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118923af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118923b1 call 0x11895ef0 */
  push32(0x118923b6u); f_11895ef0();
  /* 118923b6 mov esi, esp */
  ESI = (ESP);
  /* 118923b8 push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 118923bd push 2 */
  push32((uint32_t)(0x2u));
  /* 118923bf push 0 */
  push32((uint32_t)(0x0u));
  /* 118923c1 call dword ptr [0x118c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6480))), 0x118923c7u);
  /* 118923c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118923ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118923cc call 0x11895ef0 */
  push32(0x118923d1u); f_11895ef0();
  /* 118923d1 mov esi, esp */
  ESI = (ESP);
  /* 118923d3 push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 118923d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 118923da push 0 */
  push32((uint32_t)(0x0u));
  /* 118923dc call dword ptr [0x118c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6480))), 0x118923e2u);
  /* 118923e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118923e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118923e7 call 0x11895ef0 */
  push32(0x118923ecu); f_11895ef0();
  /* 118923ec mov esi, esp */
  ESI = (ESP);
  /* 118923ee push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 118923f3 push 5 */
  push32((uint32_t)(0x5u));
  /* 118923f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 118923f7 call dword ptr [0x118c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6480))), 0x118923fdu);
  /* 118923fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892400 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892402 call 0x11895ef0 */
  push32(0x11892407u); f_11895ef0();
  /* 11892407 mov esi, esp */
  ESI = (ESP);
  /* 11892409 push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 1189240e push 4 */
  push32((uint32_t)(0x4u));
  /* 11892410 push 0 */
  push32((uint32_t)(0x0u));
  /* 11892412 call dword ptr [0x118c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6480))), 0x11892418u);
  /* 11892418 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189241b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189241d call 0x11895ef0 */
  push32(0x11892422u); f_11895ef0();
  /* 11892422 mov esi, esp */
  ESI = (ESP);
  /* 11892424 push 0 */
  push32((uint32_t)(0x0u));
  /* 11892426 push 0x118c3510 */
  push32((uint32_t)(0x118c3510u));
  /* 1189242b call dword ptr [0x118c6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6464))), 0x11892431u);
  /* 11892431 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892434 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892436 call 0x11895ef0 */
  push32(0x1189243bu); f_11895ef0();
  /* 1189243b mov esi, esp */
  ESI = (ESP);
  /* 1189243d push 1 */
  push32((uint32_t)(0x1u));
  /* 1189243f push 0x118c36a0 */
  push32((uint32_t)(0x118c36a0u));
  /* 11892444 call dword ptr [0x118c6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6464))), 0x1189244au);
  /* 1189244a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189244d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189244f call 0x11895ef0 */
  push32(0x11892454u); f_11895ef0();
  /* 11892454 mov esi, esp */
  ESI = (ESP);
  /* 11892456 push 1 */
  push32((uint32_t)(0x1u));
  /* 11892458 push 0x118c36b8 */
  push32((uint32_t)(0x118c36b8u));
  /* 1189245d call dword ptr [0x118c6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6464))), 0x11892463u);
  /* 11892463 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892466 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892468 call 0x11895ef0 */
  push32(0x1189246du); f_11895ef0();
  /* 1189246d mov esi, esp */
  ESI = (ESP);
  /* 1189246f push 1 */
  push32((uint32_t)(0x1u));
  /* 11892471 push 0x118c3608 */
  push32((uint32_t)(0x118c3608u));
  /* 11892476 call dword ptr [0x118c6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6464))), 0x1189247cu);
  /* 1189247c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189247f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892481 call 0x11895ef0 */
  push32(0x11892486u); f_11895ef0();
  /* 11892486 mov esi, esp */
  ESI = (ESP);
  /* 11892488 push 1 */
  push32((uint32_t)(0x1u));
  /* 1189248a push 0x118c3648 */
  push32((uint32_t)(0x118c3648u));
  /* 1189248f call dword ptr [0x118c6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6464))), 0x11892495u);
  /* 11892495 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892498 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189249a call 0x11895ef0 */
  push32(0x1189249fu); f_11895ef0();
  /* 1189249f mov esi, esp */
  ESI = (ESP);
  /* 118924a1 push 5 */
  push32((uint32_t)(0x5u));
  /* 118924a3 call dword ptr [0x118c6484] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6484))), 0x118924a9u);
  /* 118924a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118924ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118924ae call 0x11895ef0 */
  push32(0x118924b3u); f_11895ef0();
  /* 118924b3 mov esi, esp */
  ESI = (ESP);
  /* 118924b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 118924b7 push 0x118c35e8 */
  push32((uint32_t)(0x118c35e8u));
  /* 118924bc call dword ptr [0x118c6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6464))), 0x118924c2u);
  /* 118924c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118924c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118924c7 call 0x11895ef0 */
  push32(0x118924ccu); f_11895ef0();
  /* 118924cc mov esi, esp */
  ESI = (ESP);
  /* 118924ce push 1 */
  push32((uint32_t)(0x1u));
  /* 118924d0 push 0x118c3600 */
  push32((uint32_t)(0x118c3600u));
  /* 118924d5 call dword ptr [0x118c6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6464))), 0x118924dbu);
  /* 118924db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118924de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118924e0 call 0x11895ef0 */
  push32(0x118924e5u); f_11895ef0();
  /* 118924e5 mov esi, esp */
  ESI = (ESP);
  /* 118924e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 118924e9 push 0x118c35a8 */
  push32((uint32_t)(0x118c35a8u));
  /* 118924ee call dword ptr [0x118c6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6464))), 0x118924f4u);
  /* 118924f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118924f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118924f9 call 0x11895ef0 */
  push32(0x118924feu); f_11895ef0();
  /* 118924fe mov esi, esp */
  ESI = (ESP);
  /* 11892500 push 1 */
  push32((uint32_t)(0x1u));
  /* 11892502 push 0x118c3518 */
  push32((uint32_t)(0x118c3518u));
  /* 11892507 call dword ptr [0x118c6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6464))), 0x1189250du);
  /* 1189250d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892510 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892512 call 0x11895ef0 */
  push32(0x11892517u); f_11895ef0();
  /* 11892517 mov esi, esp */
  ESI = (ESP);
  /* 11892519 push 2 */
  push32((uint32_t)(0x2u));
  /* 1189251b call dword ptr [0x118c6484] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6484))), 0x11892521u);
  /* 11892521 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892524 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892526 call 0x11895ef0 */
  push32(0x1189252bu); f_11895ef0();
  /* 1189252b mov dword ptr [0x118c3530], 3 */
  w32((uint32_t)(0x118c3530), (0x3u));
  /* 11892535 mov dword ptr [0x118c3580], 3 */
  w32((uint32_t)(0x118c3580), (0x3u));
  /* 1189253f mov dword ptr [0x118c35d8], 2 */
  w32((uint32_t)(0x118c35d8), (0x2u));
  /* 11892549 mov dword ptr [0x118c3628], 2 */
  w32((uint32_t)(0x118c3628), (0x2u));
  /* 11892553 mov dword ptr [0x118c3640], 2 */
  w32((uint32_t)(0x118c3640), (0x2u));
  /* 1189255d mov dword ptr [0x118c3660], 3 */
  w32((uint32_t)(0x118c3660), (0x3u));
  /* 11892567 jmp 0x118929d0 */
  goto L_118929d0;
L_1189256c:;
  /* 1189256c mov esi, esp */
  ESI = (ESP);
  /* 1189256e push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 11892573 push 3 */
  push32((uint32_t)(0x3u));
  /* 11892575 push 0 */
  push32((uint32_t)(0x0u));
  /* 11892577 call dword ptr [0x118c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6480))), 0x1189257du);
  /* 1189257d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892580 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892582 call 0x11895ef0 */
  push32(0x11892587u); f_11895ef0();
  /* 11892587 mov esi, esp */
  ESI = (ESP);
  /* 11892589 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 1189258e push 0 */
  push32((uint32_t)(0x0u));
  /* 11892590 push 0 */
  push32((uint32_t)(0x0u));
  /* 11892592 call dword ptr [0x118c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6480))), 0x11892598u);
  /* 11892598 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189259b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189259d call 0x11895ef0 */
  push32(0x118925a2u); f_11895ef0();
  /* 118925a2 mov esi, esp */
  ESI = (ESP);
  /* 118925a4 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 118925a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 118925ab push 0 */
  push32((uint32_t)(0x0u));
  /* 118925ad call dword ptr [0x118c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6480))), 0x118925b3u);
  /* 118925b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118925b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118925b8 call 0x11895ef0 */
  push32(0x118925bdu); f_11895ef0();
  /* 118925bd mov esi, esp */
  ESI = (ESP);
  /* 118925bf push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 118925c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 118925c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 118925c8 call dword ptr [0x118c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6480))), 0x118925ceu);
  /* 118925ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118925d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118925d3 call 0x11895ef0 */
  push32(0x118925d8u); f_11895ef0();
  /* 118925d8 mov esi, esp */
  ESI = (ESP);
  /* 118925da push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 118925df push 5 */
  push32((uint32_t)(0x5u));
  /* 118925e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 118925e3 call dword ptr [0x118c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6480))), 0x118925e9u);
  /* 118925e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118925ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118925ee call 0x11895ef0 */
  push32(0x118925f3u); f_11895ef0();
  /* 118925f3 mov esi, esp */
  ESI = (ESP);
  /* 118925f5 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 118925fa push 4 */
  push32((uint32_t)(0x4u));
  /* 118925fc push 0 */
  push32((uint32_t)(0x0u));
  /* 118925fe call dword ptr [0x118c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6480))), 0x11892604u);
  /* 11892604 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892607 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892609 call 0x11895ef0 */
  push32(0x1189260eu); f_11895ef0();
  /* 1189260e mov esi, esp */
  ESI = (ESP);
  /* 11892610 push 0 */
  push32((uint32_t)(0x0u));
  /* 11892612 push 0x118c36b8 */
  push32((uint32_t)(0x118c36b8u));
  /* 11892617 call dword ptr [0x118c6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6464))), 0x1189261du);
  /* 1189261d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892620 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892622 call 0x11895ef0 */
  push32(0x11892627u); f_11895ef0();
  /* 11892627 mov esi, esp */
  ESI = (ESP);
  /* 11892629 push 1 */
  push32((uint32_t)(0x1u));
  /* 1189262b push 0x118c35c8 */
  push32((uint32_t)(0x118c35c8u));
  /* 11892630 call dword ptr [0x118c6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6464))), 0x11892636u);
  /* 11892636 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892639 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189263b call 0x11895ef0 */
  push32(0x11892640u); f_11895ef0();
  /* 11892640 mov esi, esp */
  ESI = (ESP);
  /* 11892642 push 1 */
  push32((uint32_t)(0x1u));
  /* 11892644 push 0x118c3648 */
  push32((uint32_t)(0x118c3648u));
  /* 11892649 call dword ptr [0x118c6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6464))), 0x1189264fu);
  /* 1189264f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892652 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892654 call 0x11895ef0 */
  push32(0x11892659u); f_11895ef0();
  /* 11892659 mov esi, esp */
  ESI = (ESP);
  /* 1189265b push 5 */
  push32((uint32_t)(0x5u));
  /* 1189265d call dword ptr [0x118c6484] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6484))), 0x11892663u);
  /* 11892663 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892666 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892668 call 0x11895ef0 */
  push32(0x1189266du); f_11895ef0();
  /* 1189266d mov esi, esp */
  ESI = (ESP);
  /* 1189266f push 0 */
  push32((uint32_t)(0x0u));
  /* 11892671 push 0x118c35e8 */
  push32((uint32_t)(0x118c35e8u));
  /* 11892676 call dword ptr [0x118c6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6464))), 0x1189267cu);
  /* 1189267c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189267f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892681 call 0x11895ef0 */
  push32(0x11892686u); f_11895ef0();
  /* 11892686 mov esi, esp */
  ESI = (ESP);
  /* 11892688 push 1 */
  push32((uint32_t)(0x1u));
  /* 1189268a push 0x118c3600 */
  push32((uint32_t)(0x118c3600u));
  /* 1189268f call dword ptr [0x118c6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6464))), 0x11892695u);
  /* 11892695 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892698 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189269a call 0x11895ef0 */
  push32(0x1189269fu); f_11895ef0();
  /* 1189269f mov esi, esp */
  ESI = (ESP);
  /* 118926a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 118926a3 call dword ptr [0x118c6484] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6484))), 0x118926a9u);
  /* 118926a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118926ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118926ae call 0x11895ef0 */
  push32(0x118926b3u); f_11895ef0();
  /* 118926b3 mov dword ptr [0x118c3530], 7 */
  w32((uint32_t)(0x118c3530), (0x7u));
  /* 118926bd mov dword ptr [0x118c3580], 5 */
  w32((uint32_t)(0x118c3580), (0x5u));
  /* 118926c7 mov dword ptr [0x118c35d8], 4 */
  w32((uint32_t)(0x118c35d8), (0x4u));
  /* 118926d1 mov dword ptr [0x118c3628], 5 */
  w32((uint32_t)(0x118c3628), (0x5u));
  /* 118926db mov dword ptr [0x118c3640], 5 */
  w32((uint32_t)(0x118c3640), (0x5u));
  /* 118926e5 mov dword ptr [0x118c3660], 7 */
  w32((uint32_t)(0x118c3660), (0x7u));
  /* 118926ef jmp 0x118929d0 */
  goto L_118929d0;
L_118926f4:;
  /* 118926f4 mov esi, esp */
  ESI = (ESP);
  /* 118926f6 push 0x4650 */
  push32((uint32_t)(0x4650u));
  /* 118926fb push 3 */
  push32((uint32_t)(0x3u));
  /* 118926fd push 0 */
  push32((uint32_t)(0x0u));
  /* 118926ff call dword ptr [0x118c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6480))), 0x11892705u);
  /* 11892705 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892708 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189270a call 0x11895ef0 */
  push32(0x1189270fu); f_11895ef0();
  /* 1189270f mov esi, esp */
  ESI = (ESP);
  /* 11892711 push 0x4650 */
  push32((uint32_t)(0x4650u));
  /* 11892716 push 0 */
  push32((uint32_t)(0x0u));
  /* 11892718 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189271a call dword ptr [0x118c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6480))), 0x11892720u);
  /* 11892720 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892723 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892725 call 0x11895ef0 */
  push32(0x1189272au); f_11895ef0();
  /* 1189272a mov esi, esp */
  ESI = (ESP);
  /* 1189272c push 0x4650 */
  push32((uint32_t)(0x4650u));
  /* 11892731 push 2 */
  push32((uint32_t)(0x2u));
  /* 11892733 push 0 */
  push32((uint32_t)(0x0u));
  /* 11892735 call dword ptr [0x118c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6480))), 0x1189273bu);
  /* 1189273b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189273e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892740 call 0x11895ef0 */
  push32(0x11892745u); f_11895ef0();
  /* 11892745 mov esi, esp */
  ESI = (ESP);
  /* 11892747 push 0x4650 */
  push32((uint32_t)(0x4650u));
  /* 1189274c push 1 */
  push32((uint32_t)(0x1u));
  /* 1189274e push 0 */
  push32((uint32_t)(0x0u));
  /* 11892750 call dword ptr [0x118c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6480))), 0x11892756u);
  /* 11892756 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892759 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189275b call 0x11895ef0 */
  push32(0x11892760u); f_11895ef0();
  /* 11892760 mov esi, esp */
  ESI = (ESP);
  /* 11892762 push 0x4650 */
  push32((uint32_t)(0x4650u));
  /* 11892767 push 5 */
  push32((uint32_t)(0x5u));
  /* 11892769 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189276b call dword ptr [0x118c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6480))), 0x11892771u);
  /* 11892771 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892774 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892776 call 0x11895ef0 */
  push32(0x1189277bu); f_11895ef0();
  /* 1189277b mov esi, esp */
  ESI = (ESP);
  /* 1189277d push 0x4650 */
  push32((uint32_t)(0x4650u));
  /* 11892782 push 4 */
  push32((uint32_t)(0x4u));
  /* 11892784 push 0 */
  push32((uint32_t)(0x0u));
  /* 11892786 call dword ptr [0x118c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6480))), 0x1189278cu);
  /* 1189278c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189278f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892791 call 0x11895ef0 */
  push32(0x11892796u); f_11895ef0();
  /* 11892796 mov esi, esp */
  ESI = (ESP);
  /* 11892798 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189279a push 0x118c36a0 */
  push32((uint32_t)(0x118c36a0u));
  /* 1189279f call dword ptr [0x118c6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6464))), 0x118927a5u);
  /* 118927a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118927a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118927aa call 0x11895ef0 */
  push32(0x118927afu); f_11895ef0();
  /* 118927af mov esi, esp */
  ESI = (ESP);
  /* 118927b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 118927b3 push 0x118c3648 */
  push32((uint32_t)(0x118c3648u));
  /* 118927b8 call dword ptr [0x118c6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6464))), 0x118927beu);
  /* 118927be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118927c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118927c3 call 0x11895ef0 */
  push32(0x118927c8u); f_11895ef0();
  /* 118927c8 mov esi, esp */
  ESI = (ESP);
  /* 118927ca push 5 */
  push32((uint32_t)(0x5u));
  /* 118927cc call dword ptr [0x118c6484] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6484))), 0x118927d2u);
  /* 118927d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118927d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118927d7 call 0x11895ef0 */
  push32(0x118927dcu); f_11895ef0();
  /* 118927dc mov esi, esp */
  ESI = (ESP);
  /* 118927de push 0 */
  push32((uint32_t)(0x0u));
  /* 118927e0 push 0x118c3600 */
  push32((uint32_t)(0x118c3600u));
  /* 118927e5 call dword ptr [0x118c6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6464))), 0x118927ebu);
  /* 118927eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118927ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118927f0 call 0x11895ef0 */
  push32(0x118927f5u); f_11895ef0();
  /* 118927f5 mov esi, esp */
  ESI = (ESP);
  /* 118927f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 118927f9 call dword ptr [0x118c6484] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6484))), 0x118927ffu);
  /* 118927ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892802 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892804 call 0x11895ef0 */
  push32(0x11892809u); f_11895ef0();
  /* 11892809 mov dword ptr [0x118c3530], 0xf */
  w32((uint32_t)(0x118c3530), (0xfu));
  /* 11892813 mov dword ptr [0x118c3580], 0xa */
  w32((uint32_t)(0x118c3580), (0xau));
  /* 1189281d mov dword ptr [0x118c35d8], 8 */
  w32((uint32_t)(0x118c35d8), (0x8u));
  /* 11892827 mov dword ptr [0x118c3628], 0xa */
  w32((uint32_t)(0x118c3628), (0xau));
  /* 11892831 mov dword ptr [0x118c3640], 0xa */
  w32((uint32_t)(0x118c3640), (0xau));
  /* 1189283b mov dword ptr [0x118c3660], 0xf */
  w32((uint32_t)(0x118c3660), (0xfu));
  /* 11892845 jmp 0x118929d0 */
  goto L_118929d0;
L_1189284a:;
  /* 1189284a mov esi, esp */
  ESI = (ESP);
  /* 1189284c push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 11892851 push 3 */
  push32((uint32_t)(0x3u));
  /* 11892853 push 0 */
  push32((uint32_t)(0x0u));
  /* 11892855 call dword ptr [0x118c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6480))), 0x1189285bu);
  /* 1189285b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189285e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892860 call 0x11895ef0 */
  push32(0x11892865u); f_11895ef0();
  /* 11892865 mov esi, esp */
  ESI = (ESP);
  /* 11892867 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 1189286c push 0 */
  push32((uint32_t)(0x0u));
  /* 1189286e push 0 */
  push32((uint32_t)(0x0u));
  /* 11892870 call dword ptr [0x118c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6480))), 0x11892876u);
  /* 11892876 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892879 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189287b call 0x11895ef0 */
  push32(0x11892880u); f_11895ef0();
  /* 11892880 mov esi, esp */
  ESI = (ESP);
  /* 11892882 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 11892887 push 2 */
  push32((uint32_t)(0x2u));
  /* 11892889 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189288b call dword ptr [0x118c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6480))), 0x11892891u);
  /* 11892891 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892894 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892896 call 0x11895ef0 */
  push32(0x1189289bu); f_11895ef0();
  /* 1189289b mov esi, esp */
  ESI = (ESP);
  /* 1189289d push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 118928a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 118928a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 118928a6 call dword ptr [0x118c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6480))), 0x118928acu);
  /* 118928ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118928af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118928b1 call 0x11895ef0 */
  push32(0x118928b6u); f_11895ef0();
  /* 118928b6 mov esi, esp */
  ESI = (ESP);
  /* 118928b8 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 118928bd push 5 */
  push32((uint32_t)(0x5u));
  /* 118928bf push 0 */
  push32((uint32_t)(0x0u));
  /* 118928c1 call dword ptr [0x118c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6480))), 0x118928c7u);
  /* 118928c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118928ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118928cc call 0x11895ef0 */
  push32(0x118928d1u); f_11895ef0();
  /* 118928d1 mov esi, esp */
  ESI = (ESP);
  /* 118928d3 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 118928d8 push 4 */
  push32((uint32_t)(0x4u));
  /* 118928da push 0 */
  push32((uint32_t)(0x0u));
  /* 118928dc call dword ptr [0x118c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6480))), 0x118928e2u);
  /* 118928e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118928e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118928e7 call 0x11895ef0 */
  push32(0x118928ecu); f_11895ef0();
  /* 118928ec mov esi, esp */
  ESI = (ESP);
  /* 118928ee push 0x118bec68 */
  push32((uint32_t)(0x118bec68u));
  /* 118928f3 push 0x118be25c */
  push32((uint32_t)(0x118be25cu));
  /* 118928f8 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x118928feu);
  /* 118928fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892901 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892903 call 0x11895ef0 */
  push32(0x11892908u); f_11895ef0();
  /* 11892908 mov esi, esp */
  ESI = (ESP);
  /* 1189290a push 0x118bec5c */
  push32((uint32_t)(0x118bec5cu));
  /* 1189290f push 0x118be25c */
  push32((uint32_t)(0x118be25cu));
  /* 11892914 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x1189291au);
  /* 1189291a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189291d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189291f call 0x11895ef0 */
  push32(0x11892924u); f_11895ef0();
  /* 11892924 mov esi, esp */
  ESI = (ESP);
  /* 11892926 push 0x118bec50 */
  push32((uint32_t)(0x118bec50u));
  /* 1189292b push 0x118be25c */
  push32((uint32_t)(0x118be25cu));
  /* 11892930 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11892936u);
  /* 11892936 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892939 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189293b call 0x11895ef0 */
  push32(0x11892940u); f_11895ef0();
  /* 11892940 mov esi, esp */
  ESI = (ESP);
  /* 11892942 push 0x118bec44 */
  push32((uint32_t)(0x118bec44u));
  /* 11892947 push 0x118be1dc */
  push32((uint32_t)(0x118be1dcu));
  /* 1189294c call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11892952u);
  /* 11892952 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892955 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892957 call 0x11895ef0 */
  push32(0x1189295cu); f_11895ef0();
  /* 1189295c mov esi, esp */
  ESI = (ESP);
  /* 1189295e push 0x118bec38 */
  push32((uint32_t)(0x118bec38u));
  /* 11892963 push 0x118be1dc */
  push32((uint32_t)(0x118be1dcu));
  /* 11892968 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x1189296eu);
  /* 1189296e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892971 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892973 call 0x11895ef0 */
  push32(0x11892978u); f_11895ef0();
  /* 11892978 mov esi, esp */
  ESI = (ESP);
  /* 1189297a push 0x118bec2c */
  push32((uint32_t)(0x118bec2cu));
  /* 1189297f push 0x118be1dc */
  push32((uint32_t)(0x118be1dcu));
  /* 11892984 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x1189298au);
  /* 1189298a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189298d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189298f call 0x11895ef0 */
  push32(0x11892994u); f_11895ef0();
  /* 11892994 mov dword ptr [0x118c3530], 0x14 */
  w32((uint32_t)(0x118c3530), (0x14u));
  /* 1189299e mov dword ptr [0x118c3580], 0xf */
  w32((uint32_t)(0x118c3580), (0xfu));
  /* 118929a8 mov dword ptr [0x118c35d8], 0xc */
  w32((uint32_t)(0x118c35d8), (0xcu));
  /* 118929b2 mov dword ptr [0x118c3628], 0xf */
  w32((uint32_t)(0x118c3628), (0xfu));
  /* 118929bc mov dword ptr [0x118c3640], 0xf */
  w32((uint32_t)(0x118c3640), (0xfu));
  /* 118929c6 mov dword ptr [0x118c3660], 0x14 */
  w32((uint32_t)(0x118c3660), (0x14u));
L_118929d0:;
  /* 118929d0 mov esi, esp */
  ESI = (ESP);
  /* 118929d2 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 118929d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 118929d9 call dword ptr [0x118c648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c648c))), 0x118929dfu);
  /* 118929df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118929e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118929e4 call 0x11895ef0 */
  push32(0x118929e9u); f_11895ef0();
  /* 118929e9 mov esi, esp */
  ESI = (ESP);
  /* 118929eb push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 118929f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 118929f2 call dword ptr [0x118c648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c648c))), 0x118929f8u);
  /* 118929f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118929fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118929fd call 0x11895ef0 */
  push32(0x11892a02u); f_11895ef0();
  /* 11892a02 mov esi, esp */
  ESI = (ESP);
  /* 11892a04 push 0 */
  push32((uint32_t)(0x0u));
  /* 11892a06 call dword ptr [0x118c6470] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6470))), 0x11892a0cu);
  /* 11892a0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892a0f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892a11 call 0x11895ef0 */
  push32(0x11892a16u); f_11895ef0();
  /* 11892a16 mov ecx, 5 */
  ECX = (0x5u);
  /* 11892a1b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11892a1d imul ecx, ecx, 0xfa0 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfa0u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11892a23 mov esi, esp */
  ESI = (ESP);
  /* 11892a25 push ecx */
  push32((uint32_t)(ECX));
  /* 11892a26 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11892a28 call dword ptr [0x118c648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c648c))), 0x11892a2eu);
  /* 11892a2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892a31 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892a33 call 0x11895ef0 */
  push32(0x11892a38u); f_11895ef0();
  /* 11892a38 mov esi, esp */
  ESI = (ESP);
  /* 11892a3a push 0 */
  push32((uint32_t)(0x0u));
  /* 11892a3c call dword ptr [0x118c6470] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6470))), 0x11892a42u);
  /* 11892a42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892a45 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892a47 call 0x11895ef0 */
  push32(0x11892a4cu); f_11895ef0();
  /* 11892a4c mov edx, 5 */
  EDX = (0x5u);
  /* 11892a51 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11892a53 imul edx, edx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xbb8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11892a59 mov esi, esp */
  ESI = (ESP);
  /* 11892a5b push edx */
  push32((uint32_t)(EDX));
  /* 11892a5c push 0xe */
  push32((uint32_t)(0xeu));
  /* 11892a5e call dword ptr [0x118c648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c648c))), 0x11892a64u);
  /* 11892a64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892a67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892a69 call 0x11895ef0 */
  push32(0x11892a6eu); f_11895ef0();
  /* 11892a6e mov esi, esp */
  ESI = (ESP);
  /* 11892a70 push 0 */
  push32((uint32_t)(0x0u));
  /* 11892a72 call dword ptr [0x118c6470] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6470))), 0x11892a78u);
  /* 11892a78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892a7b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892a7d call 0x11895ef0 */
  push32(0x11892a82u); f_11895ef0();
  /* 11892a82 mov ecx, 5 */
  ECX = (0x5u);
  /* 11892a87 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11892a89 imul ecx, ecx, 0x1770 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1770u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11892a8f mov esi, esp */
  ESI = (ESP);
  /* 11892a91 push ecx */
  push32((uint32_t)(ECX));
  /* 11892a92 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11892a94 call dword ptr [0x118c648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c648c))), 0x11892a9au);
  /* 11892a9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892a9d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892a9f call 0x11895ef0 */
  push32(0x11892aa4u); f_11895ef0();
  /* 11892aa4 mov esi, esp */
  ESI = (ESP);
  /* 11892aa6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11892aa8 call dword ptr [0x118c6470] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6470))), 0x11892aaeu);
  /* 11892aae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892ab1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892ab3 call 0x11895ef0 */
  push32(0x11892ab8u); f_11895ef0();
  /* 11892ab8 mov edx, 5 */
  EDX = (0x5u);
  /* 11892abd sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11892abf imul edx, edx, 0x2328 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2328u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11892ac5 mov esi, esp */
  ESI = (ESP);
  /* 11892ac7 push edx */
  push32((uint32_t)(EDX));
  /* 11892ac8 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11892aca call dword ptr [0x118c648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c648c))), 0x11892ad0u);
  /* 11892ad0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892ad3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892ad5 call 0x11895ef0 */
  push32(0x11892adau); f_11895ef0();
  /* 11892ada mov esi, esp */
  ESI = (ESP);
  /* 11892adc push 0 */
  push32((uint32_t)(0x0u));
  /* 11892ade call dword ptr [0x118c6470] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6470))), 0x11892ae4u);
  /* 11892ae4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892ae7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892ae9 call 0x11895ef0 */
  push32(0x11892aeeu); f_11895ef0();
  /* 11892aee mov ecx, 5 */
  ECX = (0x5u);
  /* 11892af3 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11892af5 imul ecx, ecx, 0x2ee0 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2ee0u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11892afb mov esi, esp */
  ESI = (ESP);
  /* 11892afd push ecx */
  push32((uint32_t)(ECX));
  /* 11892afe push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11892b00 call dword ptr [0x118c648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c648c))), 0x11892b06u);
  /* 11892b06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892b09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892b0b call 0x11895ef0 */
  push32(0x11892b10u); f_11895ef0();
  /* 11892b10 mov esi, esp */
  ESI = (ESP);
  /* 11892b12 push 0 */
  push32((uint32_t)(0x0u));
  /* 11892b14 call dword ptr [0x118c6470] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6470))), 0x11892b1au);
  /* 11892b1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892b1d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892b1f call 0x11895ef0 */
  push32(0x11892b24u); f_11895ef0();
  /* 11892b24 mov edx, 5 */
  EDX = (0x5u);
  /* 11892b29 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11892b2b imul edx, edx, 0x3a98 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3a98u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11892b31 mov esi, esp */
  ESI = (ESP);
  /* 11892b33 push edx */
  push32((uint32_t)(EDX));
  /* 11892b34 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11892b36 call dword ptr [0x118c648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c648c))), 0x11892b3cu);
  /* 11892b3c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892b3f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892b41 call 0x11895ef0 */
  push32(0x11892b46u); f_11895ef0();
  /* 11892b46 mov esi, esp */
  ESI = (ESP);
  /* 11892b48 push 0 */
  push32((uint32_t)(0x0u));
  /* 11892b4a call dword ptr [0x118c6470] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6470))), 0x11892b50u);
  /* 11892b50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892b53 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892b55 call 0x11895ef0 */
  push32(0x11892b5au); f_11895ef0();
  /* 11892b5a mov ecx, 5 */
  ECX = (0x5u);
  /* 11892b5f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11892b61 imul ecx, ecx, 0x4650 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x4650u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11892b67 mov esi, esp */
  ESI = (ESP);
  /* 11892b69 push ecx */
  push32((uint32_t)(ECX));
  /* 11892b6a push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11892b6c call dword ptr [0x118c648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c648c))), 0x11892b72u);
  /* 11892b72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892b75 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892b77 call 0x11895ef0 */
  push32(0x11892b7cu); f_11895ef0();
  /* 11892b7c mov esi, esp */
  ESI = (ESP);
  /* 11892b7e push 0x118bec14 */
  push32((uint32_t)(0x118bec14u));
  /* 11892b83 push 0x118be25c */
  push32((uint32_t)(0x118be25cu));
  /* 11892b88 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11892b8eu);
  /* 11892b8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892b91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892b93 call 0x11895ef0 */
  push32(0x11892b98u); f_11895ef0();
  /* 11892b98 mov esi, esp */
  ESI = (ESP);
  /* 11892b9a push 0x118bec0c */
  push32((uint32_t)(0x118bec0cu));
  /* 11892b9f push 0x118be25c */
  push32((uint32_t)(0x118be25cu));
  /* 11892ba4 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11892baau);
  /* 11892baa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892bad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892baf call 0x11895ef0 */
  push32(0x11892bb4u); f_11895ef0();
  /* 11892bb4 mov esi, esp */
  ESI = (ESP);
  /* 11892bb6 push 0x118bebf4 */
  push32((uint32_t)(0x118bebf4u));
  /* 11892bbb push 0x118be25c */
  push32((uint32_t)(0x118be25cu));
  /* 11892bc0 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11892bc6u);
  /* 11892bc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892bc9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892bcb call 0x11895ef0 */
  push32(0x11892bd0u); f_11895ef0();
  /* 11892bd0 mov esi, esp */
  ESI = (ESP);
  /* 11892bd2 push 0x118bebe8 */
  push32((uint32_t)(0x118bebe8u));
  /* 11892bd7 push 0x118be25c */
  push32((uint32_t)(0x118be25cu));
  /* 11892bdc call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11892be2u);
  /* 11892be2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892be5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892be7 call 0x11895ef0 */
  push32(0x11892becu); f_11895ef0();
  /* 11892bec mov esi, esp */
  ESI = (ESP);
  /* 11892bee push 0x118bebdc */
  push32((uint32_t)(0x118bebdcu));
  /* 11892bf3 push 0x118be25c */
  push32((uint32_t)(0x118be25cu));
  /* 11892bf8 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11892bfeu);
  /* 11892bfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892c01 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892c03 call 0x11895ef0 */
  push32(0x11892c08u); f_11895ef0();
  /* 11892c08 mov esi, esp */
  ESI = (ESP);
  /* 11892c0a push 0x118bebd0 */
  push32((uint32_t)(0x118bebd0u));
  /* 11892c0f push 0x118be25c */
  push32((uint32_t)(0x118be25cu));
  /* 11892c14 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11892c1au);
  /* 11892c1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892c1d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892c1f call 0x11895ef0 */
  push32(0x11892c24u); f_11895ef0();
  /* 11892c24 mov esi, esp */
  ESI = (ESP);
  /* 11892c26 push 0x118bebc4 */
  push32((uint32_t)(0x118bebc4u));
  /* 11892c2b push 0x118be25c */
  push32((uint32_t)(0x118be25cu));
  /* 11892c30 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11892c36u);
  /* 11892c36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892c39 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892c3b call 0x11895ef0 */
  push32(0x11892c40u); f_11895ef0();
  /* 11892c40 mov esi, esp */
  ESI = (ESP);
  /* 11892c42 push 0x118bebb8 */
  push32((uint32_t)(0x118bebb8u));
  /* 11892c47 push 0x118be25c */
  push32((uint32_t)(0x118be25cu));
  /* 11892c4c call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11892c52u);
  /* 11892c52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892c55 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892c57 call 0x11895ef0 */
  push32(0x11892c5cu); f_11895ef0();
  /* 11892c5c mov esi, esp */
  ESI = (ESP);
  /* 11892c5e push 0x118bebac */
  push32((uint32_t)(0x118bebacu));
  /* 11892c63 push 0x118be25c */
  push32((uint32_t)(0x118be25cu));
  /* 11892c68 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11892c6eu);
  /* 11892c6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892c71 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892c73 call 0x11895ef0 */
  push32(0x11892c78u); f_11895ef0();
  /* 11892c78 mov esi, esp */
  ESI = (ESP);
  /* 11892c7a push 0x118beba0 */
  push32((uint32_t)(0x118beba0u));
  /* 11892c7f push 0x118be25c */
  push32((uint32_t)(0x118be25cu));
  /* 11892c84 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11892c8au);
  /* 11892c8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892c8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892c8f call 0x11895ef0 */
  push32(0x11892c94u); f_11895ef0();
  /* 11892c94 mov esi, esp */
  ESI = (ESP);
  /* 11892c96 push 0x118beb94 */
  push32((uint32_t)(0x118beb94u));
  /* 11892c9b push 0x118be25c */
  push32((uint32_t)(0x118be25cu));
  /* 11892ca0 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11892ca6u);
  /* 11892ca6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892ca9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892cab call 0x11895ef0 */
  push32(0x11892cb0u); f_11895ef0();
  /* 11892cb0 mov esi, esp */
  ESI = (ESP);
  /* 11892cb2 push 0x118beb88 */
  push32((uint32_t)(0x118beb88u));
  /* 11892cb7 push 0x118be25c */
  push32((uint32_t)(0x118be25cu));
  /* 11892cbc call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11892cc2u);
  /* 11892cc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892cc5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892cc7 call 0x11895ef0 */
  push32(0x11892cccu); f_11895ef0();
  /* 11892ccc mov esi, esp */
  ESI = (ESP);
  /* 11892cce push 0x118beb7c */
  push32((uint32_t)(0x118beb7cu));
  /* 11892cd3 push 0x118be25c */
  push32((uint32_t)(0x118be25cu));
  /* 11892cd8 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11892cdeu);
  /* 11892cde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892ce1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892ce3 call 0x11895ef0 */
  push32(0x11892ce8u); f_11895ef0();
  /* 11892ce8 mov esi, esp */
  ESI = (ESP);
  /* 11892cea push 0x118beb70 */
  push32((uint32_t)(0x118beb70u));
  /* 11892cef push 0x118be25c */
  push32((uint32_t)(0x118be25cu));
  /* 11892cf4 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11892cfau);
  /* 11892cfa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892cfd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892cff call 0x11895ef0 */
  push32(0x11892d04u); f_11895ef0();
  /* 11892d04 mov esi, esp */
  ESI = (ESP);
  /* 11892d06 push 0x118beb64 */
  push32((uint32_t)(0x118beb64u));
  /* 11892d0b push 0x118be25c */
  push32((uint32_t)(0x118be25cu));
  /* 11892d10 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11892d16u);
  /* 11892d16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892d19 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892d1b call 0x11895ef0 */
  push32(0x11892d20u); f_11895ef0();
  /* 11892d20 mov esi, esp */
  ESI = (ESP);
  /* 11892d22 push 0x118beb58 */
  push32((uint32_t)(0x118beb58u));
  /* 11892d27 push 0x118be25c */
  push32((uint32_t)(0x118be25cu));
  /* 11892d2c call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11892d32u);
  /* 11892d32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892d35 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892d37 call 0x11895ef0 */
  push32(0x11892d3cu); f_11895ef0();
  /* 11892d3c mov esi, esp */
  ESI = (ESP);
  /* 11892d3e push 0x118beb40 */
  push32((uint32_t)(0x118beb40u));
  /* 11892d43 push 0x118be23c */
  push32((uint32_t)(0x118be23cu));
  /* 11892d48 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11892d4eu);
  /* 11892d4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892d51 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892d53 call 0x11895ef0 */
  push32(0x11892d58u); f_11895ef0();
  /* 11892d58 mov esi, esp */
  ESI = (ESP);
  /* 11892d5a push 0x118beb38 */
  push32((uint32_t)(0x118beb38u));
  /* 11892d5f push 0x118be23c */
  push32((uint32_t)(0x118be23cu));
  /* 11892d64 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11892d6au);
  /* 11892d6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892d6d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892d6f call 0x11895ef0 */
  push32(0x11892d74u); f_11895ef0();
  /* 11892d74 mov esi, esp */
  ESI = (ESP);
  /* 11892d76 push 0x118beb20 */
  push32((uint32_t)(0x118beb20u));
  /* 11892d7b push 0x118be23c */
  push32((uint32_t)(0x118be23cu));
  /* 11892d80 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11892d86u);
  /* 11892d86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892d89 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892d8b call 0x11895ef0 */
  push32(0x11892d90u); f_11895ef0();
  /* 11892d90 mov esi, esp */
  ESI = (ESP);
  /* 11892d92 push 0x118beb14 */
  push32((uint32_t)(0x118beb14u));
  /* 11892d97 push 0x118be23c */
  push32((uint32_t)(0x118be23cu));
  /* 11892d9c call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11892da2u);
  /* 11892da2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892da5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892da7 call 0x11895ef0 */
  push32(0x11892dacu); f_11895ef0();
  /* 11892dac mov esi, esp */
  ESI = (ESP);
  /* 11892dae push 0x118beb08 */
  push32((uint32_t)(0x118beb08u));
  /* 11892db3 push 0x118be23c */
  push32((uint32_t)(0x118be23cu));
  /* 11892db8 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11892dbeu);
  /* 11892dbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892dc1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892dc3 call 0x11895ef0 */
  push32(0x11892dc8u); f_11895ef0();
  /* 11892dc8 mov esi, esp */
  ESI = (ESP);
  /* 11892dca push 0x118beafc */
  push32((uint32_t)(0x118beafcu));
  /* 11892dcf push 0x118be23c */
  push32((uint32_t)(0x118be23cu));
  /* 11892dd4 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11892ddau);
  /* 11892dda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892ddd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892ddf call 0x11895ef0 */
  push32(0x11892de4u); f_11895ef0();
  /* 11892de4 mov esi, esp */
  ESI = (ESP);
  /* 11892de6 push 0x118beaf0 */
  push32((uint32_t)(0x118beaf0u));
  /* 11892deb push 0x118be23c */
  push32((uint32_t)(0x118be23cu));
  /* 11892df0 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11892df6u);
  /* 11892df6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892df9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892dfb call 0x11895ef0 */
  push32(0x11892e00u); f_11895ef0();
  /* 11892e00 mov esi, esp */
  ESI = (ESP);
  /* 11892e02 push 0x118beae4 */
  push32((uint32_t)(0x118beae4u));
  /* 11892e07 push 0x118be23c */
  push32((uint32_t)(0x118be23cu));
  /* 11892e0c call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11892e12u);
  /* 11892e12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892e15 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892e17 call 0x11895ef0 */
  push32(0x11892e1cu); f_11895ef0();
  /* 11892e1c mov esi, esp */
  ESI = (ESP);
  /* 11892e1e push 0x118bead8 */
  push32((uint32_t)(0x118bead8u));
  /* 11892e23 push 0x118be23c */
  push32((uint32_t)(0x118be23cu));
  /* 11892e28 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11892e2eu);
  /* 11892e2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892e31 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892e33 call 0x11895ef0 */
  push32(0x11892e38u); f_11895ef0();
  /* 11892e38 mov esi, esp */
  ESI = (ESP);
  /* 11892e3a push 0x118beac0 */
  push32((uint32_t)(0x118beac0u));
  /* 11892e3f push 0x118be2c4 */
  push32((uint32_t)(0x118be2c4u));
  /* 11892e44 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11892e4au);
  /* 11892e4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892e4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892e4f call 0x11895ef0 */
  push32(0x11892e54u); f_11895ef0();
  /* 11892e54 mov esi, esp */
  ESI = (ESP);
  /* 11892e56 push 0x118beab8 */
  push32((uint32_t)(0x118beab8u));
  /* 11892e5b push 0x118be2c4 */
  push32((uint32_t)(0x118be2c4u));
  /* 11892e60 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11892e66u);
  /* 11892e66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892e69 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892e6b call 0x11895ef0 */
  push32(0x11892e70u); f_11895ef0();
  /* 11892e70 mov esi, esp */
  ESI = (ESP);
  /* 11892e72 push 0x118beaa0 */
  push32((uint32_t)(0x118beaa0u));
  /* 11892e77 push 0x118be2c4 */
  push32((uint32_t)(0x118be2c4u));
  /* 11892e7c call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11892e82u);
  /* 11892e82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892e85 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892e87 call 0x11895ef0 */
  push32(0x11892e8cu); f_11895ef0();
  /* 11892e8c mov esi, esp */
  ESI = (ESP);
  /* 11892e8e push 0x118bea94 */
  push32((uint32_t)(0x118bea94u));
  /* 11892e93 push 0x118be2c4 */
  push32((uint32_t)(0x118be2c4u));
  /* 11892e98 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11892e9eu);
  /* 11892e9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892ea1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892ea3 call 0x11895ef0 */
  push32(0x11892ea8u); f_11895ef0();
  /* 11892ea8 mov esi, esp */
  ESI = (ESP);
  /* 11892eaa push 0x118bea88 */
  push32((uint32_t)(0x118bea88u));
  /* 11892eaf push 0x118be2c4 */
  push32((uint32_t)(0x118be2c4u));
  /* 11892eb4 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11892ebau);
  /* 11892eba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892ebd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892ebf call 0x11895ef0 */
  push32(0x11892ec4u); f_11895ef0();
  /* 11892ec4 mov esi, esp */
  ESI = (ESP);
  /* 11892ec6 push 0x118bea7c */
  push32((uint32_t)(0x118bea7cu));
  /* 11892ecb push 0x118be2c4 */
  push32((uint32_t)(0x118be2c4u));
  /* 11892ed0 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11892ed6u);
  /* 11892ed6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892ed9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892edb call 0x11895ef0 */
  push32(0x11892ee0u); f_11895ef0();
  /* 11892ee0 mov esi, esp */
  ESI = (ESP);
  /* 11892ee2 push 0x118bea70 */
  push32((uint32_t)(0x118bea70u));
  /* 11892ee7 push 0x118be2c4 */
  push32((uint32_t)(0x118be2c4u));
  /* 11892eec call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11892ef2u);
  /* 11892ef2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892ef5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892ef7 call 0x11895ef0 */
  push32(0x11892efcu); f_11895ef0();
  /* 11892efc mov esi, esp */
  ESI = (ESP);
  /* 11892efe push 0x118bea64 */
  push32((uint32_t)(0x118bea64u));
  /* 11892f03 push 0x118be2c4 */
  push32((uint32_t)(0x118be2c4u));
  /* 11892f08 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11892f0eu);
  /* 11892f0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892f11 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892f13 call 0x11895ef0 */
  push32(0x11892f18u); f_11895ef0();
  /* 11892f18 mov esi, esp */
  ESI = (ESP);
  /* 11892f1a push 0x118bea58 */
  push32((uint32_t)(0x118bea58u));
  /* 11892f1f push 0x118be2c4 */
  push32((uint32_t)(0x118be2c4u));
  /* 11892f24 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11892f2au);
  /* 11892f2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892f2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892f2f call 0x11895ef0 */
  push32(0x11892f34u); f_11895ef0();
  /* 11892f34 mov esi, esp */
  ESI = (ESP);
  /* 11892f36 push 0x118bea4c */
  push32((uint32_t)(0x118bea4cu));
  /* 11892f3b push 0x118be2c4 */
  push32((uint32_t)(0x118be2c4u));
  /* 11892f40 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11892f46u);
  /* 11892f46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892f49 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892f4b call 0x11895ef0 */
  push32(0x11892f50u); f_11895ef0();
  /* 11892f50 mov esi, esp */
  ESI = (ESP);
  /* 11892f52 push 0x118bea40 */
  push32((uint32_t)(0x118bea40u));
  /* 11892f57 push 0x118be2c4 */
  push32((uint32_t)(0x118be2c4u));
  /* 11892f5c call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11892f62u);
  /* 11892f62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892f65 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892f67 call 0x11895ef0 */
  push32(0x11892f6cu); f_11895ef0();
  /* 11892f6c mov esi, esp */
  ESI = (ESP);
  /* 11892f6e push 0x118bea34 */
  push32((uint32_t)(0x118bea34u));
  /* 11892f73 push 0x118be2c4 */
  push32((uint32_t)(0x118be2c4u));
  /* 11892f78 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11892f7eu);
  /* 11892f7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892f81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892f83 call 0x11895ef0 */
  push32(0x11892f88u); f_11895ef0();
  /* 11892f88 mov esi, esp */
  ESI = (ESP);
  /* 11892f8a push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 11892f8f push 3 */
  push32((uint32_t)(0x3u));
  /* 11892f91 push 1 */
  push32((uint32_t)(0x1u));
  /* 11892f93 call dword ptr [0x118c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6480))), 0x11892f99u);
  /* 11892f99 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892f9c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892f9e call 0x11895ef0 */
  push32(0x11892fa3u); f_11895ef0();
  /* 11892fa3 mov esi, esp */
  ESI = (ESP);
  /* 11892fa5 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 11892faa push 0 */
  push32((uint32_t)(0x0u));
  /* 11892fac push 1 */
  push32((uint32_t)(0x1u));
  /* 11892fae call dword ptr [0x118c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6480))), 0x11892fb4u);
  /* 11892fb4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892fb7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892fb9 call 0x11895ef0 */
  push32(0x11892fbeu); f_11895ef0();
  /* 11892fbe mov esi, esp */
  ESI = (ESP);
  /* 11892fc0 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 11892fc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11892fc7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11892fc9 call dword ptr [0x118c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6480))), 0x11892fcfu);
  /* 11892fcf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892fd2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892fd4 call 0x11895ef0 */
  push32(0x11892fd9u); f_11895ef0();
  /* 11892fd9 mov esi, esp */
  ESI = (ESP);
  /* 11892fdb push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 11892fe0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11892fe2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11892fe4 call dword ptr [0x118c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6480))), 0x11892feau);
  /* 11892fea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11892fed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11892fef call 0x11895ef0 */
  push32(0x11892ff4u); f_11895ef0();
  /* 11892ff4 mov esi, esp */
  ESI = (ESP);
  /* 11892ff6 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 11892ffb push 5 */
  push32((uint32_t)(0x5u));
  /* 11892ffd push 1 */
  push32((uint32_t)(0x1u));
  /* 11892fff call dword ptr [0x118c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6480))), 0x11893005u);
  /* 11893005 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893008 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189300a call 0x11895ef0 */
  push32(0x1189300fu); f_11895ef0();
  /* 1189300f mov esi, esp */
  ESI = (ESP);
  /* 11893011 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 11893016 push 4 */
  push32((uint32_t)(0x4u));
  /* 11893018 push 1 */
  push32((uint32_t)(0x1u));
  /* 1189301a call dword ptr [0x118c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6480))), 0x11893020u);
  /* 11893020 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893023 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893025 call 0x11895ef0 */
  push32(0x1189302au); f_11895ef0();
  /* 1189302a mov esi, esp */
  ESI = (ESP);
  /* 1189302c push 0 */
  push32((uint32_t)(0x0u));
  /* 1189302e call dword ptr [0x118c6470] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6470))), 0x11893034u);
  /* 11893034 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893037 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893039 call 0x11895ef0 */
  push32(0x1189303eu); f_11895ef0();
  /* 1189303e mov esi, esp */
  ESI = (ESP);
  /* 11893040 push eax */
  push32((uint32_t)(EAX));
  /* 11893041 push 2 */
  push32((uint32_t)(0x2u));
  /* 11893043 push 1 */
  push32((uint32_t)(0x1u));
  /* 11893045 push 1 */
  push32((uint32_t)(0x1u));
  /* 11893047 push 0x118bea28 */
  push32((uint32_t)(0x118bea28u));
  /* 1189304c push 1 */
  push32((uint32_t)(0x1u));
  /* 1189304e call dword ptr [0x118c6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6490))), 0x11893054u);
  /* 11893054 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893057 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893059 call 0x11895ef0 */
  push32(0x1189305eu); f_11895ef0();
L_1189305e:;
  /* 1189305e mov esi, esp */
  ESI = (ESP);
  /* 11893060 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11893062 call dword ptr [0x118c6488] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6488))), 0x11893068u);
  /* 11893068 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189306b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189306d call 0x11895ef0 */
  push32(0x11893072u); f_11895ef0();
  /* 11893072 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11893077 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11893079 je 0x11893265 */
  if (C.zf) goto L_11893265;
  /* 1189307f mov esi, esp */
  ESI = (ESP);
  /* 11893081 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11893083 call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11893089u);
  /* 11893089 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189308c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189308e call 0x11895ef0 */
  push32(0x11893093u); f_11895ef0();
  /* 11893093 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11893098 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189309a je 0x11893265 */
  if (C.zf) goto L_11893265;
  /* 118930a0 mov esi, esp */
  ESI = (ESP);
  /* 118930a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 118930a4 call dword ptr [0x118c6470] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6470))), 0x118930aau);
  /* 118930aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118930ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118930af call 0x11895ef0 */
  push32(0x118930b4u); f_11895ef0();
  /* 118930b4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 118930b7 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118930bb ja 0x1189322f */
  if ((!C.cf&&!C.zf)) goto L_1189322f;
  /* 118930c1 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 118930c4 jmp dword ptr [edx*4 + 0x118951a6] */
  switch (EDX) {
    case 0: goto L_118930cb;
    case 1: goto L_11893126;
    case 2: goto L_11893181;
    case 3: goto L_118931d9;
    default: x86_unimpl("switch@0x118930c4 out of table"); return;
  }
L_118930cb:;
  /* 118930cb mov eax, dword ptr [0x118c3530] */
  EAX = (r32((uint32_t)(0x118c3530)));
  /* 118930d0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118930d3 mov dword ptr [0x118c3530], eax */
  w32((uint32_t)(0x118c3530), (EAX));
  /* 118930d8 mov ecx, dword ptr [0x118c3580] */
  ECX = (r32((uint32_t)(0x118c3580)));
  /* 118930de add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118930e1 mov dword ptr [0x118c3580], ecx */
  w32((uint32_t)(0x118c3580), (ECX));
  /* 118930e7 mov edx, dword ptr [0x118c35d8] */
  EDX = (r32((uint32_t)(0x118c35d8)));
  /* 118930ed add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118930f0 mov dword ptr [0x118c35d8], edx */
  w32((uint32_t)(0x118c35d8), (EDX));
  /* 118930f6 mov eax, dword ptr [0x118c3628] */
  EAX = (r32((uint32_t)(0x118c3628)));
  /* 118930fb add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118930fe mov dword ptr [0x118c3628], eax */
  w32((uint32_t)(0x118c3628), (EAX));
  /* 11893103 mov ecx, dword ptr [0x118c3640] */
  ECX = (r32((uint32_t)(0x118c3640)));
  /* 11893109 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189310c mov dword ptr [0x118c3640], ecx */
  w32((uint32_t)(0x118c3640), (ECX));
  /* 11893112 mov edx, dword ptr [0x118c3660] */
  EDX = (r32((uint32_t)(0x118c3660)));
  /* 11893118 add edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189311b mov dword ptr [0x118c3660], edx */
  w32((uint32_t)(0x118c3660), (EDX));
  /* 11893121 jmp 0x1189322f */
  goto L_1189322f;
L_11893126:;
  /* 11893126 mov eax, dword ptr [0x118c3530] */
  EAX = (r32((uint32_t)(0x118c3530)));
  /* 1189312b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189312e mov dword ptr [0x118c3530], eax */
  w32((uint32_t)(0x118c3530), (EAX));
  /* 11893133 mov ecx, dword ptr [0x118c3580] */
  ECX = (r32((uint32_t)(0x118c3580)));
  /* 11893139 add ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189313c mov dword ptr [0x118c3580], ecx */
  w32((uint32_t)(0x118c3580), (ECX));
  /* 11893142 mov edx, dword ptr [0x118c35d8] */
  EDX = (r32((uint32_t)(0x118c35d8)));
  /* 11893148 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189314b mov dword ptr [0x118c35d8], edx */
  w32((uint32_t)(0x118c35d8), (EDX));
  /* 11893151 mov eax, dword ptr [0x118c3628] */
  EAX = (r32((uint32_t)(0x118c3628)));
  /* 11893156 add eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11893159 mov dword ptr [0x118c3628], eax */
  w32((uint32_t)(0x118c3628), (EAX));
  /* 1189315e mov ecx, dword ptr [0x118c3640] */
  ECX = (r32((uint32_t)(0x118c3640)));
  /* 11893164 add ecx, 5 */
  { uint32_t _a=(ECX),_b=(0x5u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11893167 mov dword ptr [0x118c3640], ecx */
  w32((uint32_t)(0x118c3640), (ECX));
  /* 1189316d mov edx, dword ptr [0x118c3660] */
  EDX = (r32((uint32_t)(0x118c3660)));
  /* 11893173 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11893176 mov dword ptr [0x118c3660], edx */
  w32((uint32_t)(0x118c3660), (EDX));
  /* 1189317c jmp 0x1189322f */
  goto L_1189322f;
L_11893181:;
  /* 11893181 mov eax, dword ptr [0x118c3530] */
  EAX = (r32((uint32_t)(0x118c3530)));
  /* 11893186 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11893189 mov dword ptr [0x118c3530], eax */
  w32((uint32_t)(0x118c3530), (EAX));
  /* 1189318e mov ecx, dword ptr [0x118c3580] */
  ECX = (r32((uint32_t)(0x118c3580)));
  /* 11893194 add ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11893197 mov dword ptr [0x118c3580], ecx */
  w32((uint32_t)(0x118c3580), (ECX));
  /* 1189319d mov edx, dword ptr [0x118c35d8] */
  EDX = (r32((uint32_t)(0x118c35d8)));
  /* 118931a3 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118931a6 mov dword ptr [0x118c35d8], edx */
  w32((uint32_t)(0x118c35d8), (EDX));
  /* 118931ac mov eax, dword ptr [0x118c3628] */
  EAX = (r32((uint32_t)(0x118c3628)));
  /* 118931b1 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118931b4 mov dword ptr [0x118c3628], eax */
  w32((uint32_t)(0x118c3628), (EAX));
  /* 118931b9 mov ecx, dword ptr [0x118c3640] */
  ECX = (r32((uint32_t)(0x118c3640)));
  /* 118931bf add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118931c2 mov dword ptr [0x118c3640], ecx */
  w32((uint32_t)(0x118c3640), (ECX));
  /* 118931c8 mov edx, dword ptr [0x118c3660] */
  EDX = (r32((uint32_t)(0x118c3660)));
  /* 118931ce add edx, 0xa */
  { uint32_t _a=(EDX),_b=(0xau),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118931d1 mov dword ptr [0x118c3660], edx */
  w32((uint32_t)(0x118c3660), (EDX));
  /* 118931d7 jmp 0x1189322f */
  goto L_1189322f;
L_118931d9:;
  /* 118931d9 mov eax, dword ptr [0x118c3530] */
  EAX = (r32((uint32_t)(0x118c3530)));
  /* 118931de add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118931e1 mov dword ptr [0x118c3530], eax */
  w32((uint32_t)(0x118c3530), (EAX));
  /* 118931e6 mov ecx, dword ptr [0x118c3580] */
  ECX = (r32((uint32_t)(0x118c3580)));
  /* 118931ec add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118931ef mov dword ptr [0x118c3580], ecx */
  w32((uint32_t)(0x118c3580), (ECX));
  /* 118931f5 mov edx, dword ptr [0x118c35d8] */
  EDX = (r32((uint32_t)(0x118c35d8)));
  /* 118931fb add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118931fe mov dword ptr [0x118c35d8], edx */
  w32((uint32_t)(0x118c35d8), (EDX));
  /* 11893204 mov eax, dword ptr [0x118c3628] */
  EAX = (r32((uint32_t)(0x118c3628)));
  /* 11893209 add eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189320c mov dword ptr [0x118c3628], eax */
  w32((uint32_t)(0x118c3628), (EAX));
  /* 11893211 mov ecx, dword ptr [0x118c3640] */
  ECX = (r32((uint32_t)(0x118c3640)));
  /* 11893217 add ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189321a mov dword ptr [0x118c3640], ecx */
  w32((uint32_t)(0x118c3640), (ECX));
  /* 11893220 mov edx, dword ptr [0x118c3660] */
  EDX = (r32((uint32_t)(0x118c3660)));
  /* 11893226 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11893229 mov dword ptr [0x118c3660], edx */
  w32((uint32_t)(0x118c3660), (EDX));
L_1189322f:;
  /* 1189322f mov esi, esp */
  ESI = (ESP);
  /* 11893231 push 0 */
  push32((uint32_t)(0x0u));
  /* 11893233 call dword ptr [0x118c6470] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6470))), 0x11893239u);
  /* 11893239 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189323c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189323e call 0x11895ef0 */
  push32(0x11893243u); f_11895ef0();
  /* 11893243 mov ecx, 5 */
  ECX = (0x5u);
  /* 11893248 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189324a imul ecx, ecx, 0xfa0 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfa0u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11893250 mov esi, esp */
  ESI = (ESP);
  /* 11893252 push ecx */
  push32((uint32_t)(ECX));
  /* 11893253 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11893255 call dword ptr [0x118c648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c648c))), 0x1189325bu);
  /* 1189325b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189325e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893260 call 0x11895ef0 */
  push32(0x11893265u); f_11895ef0();
L_11893265:;
  /* 11893265 mov esi, esp */
  ESI = (ESP);
  /* 11893267 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11893269 call dword ptr [0x118c6488] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6488))), 0x1189326fu);
  /* 1189326f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893272 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893274 call 0x11895ef0 */
  push32(0x11893279u); f_11895ef0();
  /* 11893279 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1189327e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11893280 je 0x1189339e */
  if (C.zf) goto L_1189339e;
  /* 11893286 mov esi, esp */
  ESI = (ESP);
  /* 11893288 push 0x118bea0c */
  push32((uint32_t)(0x118bea0cu));
  /* 1189328d push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 11893292 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11893298u);
  /* 11893298 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189329b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189329d call 0x11895ef0 */
  push32(0x118932a2u); f_11895ef0();
  /* 118932a2 mov esi, esp */
  ESI = (ESP);
  /* 118932a4 push 0x118be9f0 */
  push32((uint32_t)(0x118be9f0u));
  /* 118932a9 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 118932ae call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x118932b4u);
  /* 118932b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118932b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118932b9 call 0x11895ef0 */
  push32(0x118932beu); f_11895ef0();
  /* 118932be mov esi, esp */
  ESI = (ESP);
  /* 118932c0 push 0x118be9d8 */
  push32((uint32_t)(0x118be9d8u));
  /* 118932c5 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 118932ca call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x118932d0u);
  /* 118932d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118932d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118932d5 call 0x11895ef0 */
  push32(0x118932dau); f_11895ef0();
  /* 118932da mov esi, esp */
  ESI = (ESP);
  /* 118932dc push 0x118be9c0 */
  push32((uint32_t)(0x118be9c0u));
  /* 118932e1 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 118932e6 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x118932ecu);
  /* 118932ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118932ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118932f1 call 0x11895ef0 */
  push32(0x118932f6u); f_11895ef0();
  /* 118932f6 mov esi, esp */
  ESI = (ESP);
  /* 118932f8 push 0x118be9a8 */
  push32((uint32_t)(0x118be9a8u));
  /* 118932fd push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 11893302 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11893308u);
  /* 11893308 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189330b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189330d call 0x11895ef0 */
  push32(0x11893312u); f_11895ef0();
  /* 11893312 mov esi, esp */
  ESI = (ESP);
  /* 11893314 push 0x118be990 */
  push32((uint32_t)(0x118be990u));
  /* 11893319 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 1189331e call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11893324u);
  /* 11893324 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893327 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893329 call 0x11895ef0 */
  push32(0x1189332eu); f_11895ef0();
  /* 1189332e mov esi, esp */
  ESI = (ESP);
  /* 11893330 push 0x118be978 */
  push32((uint32_t)(0x118be978u));
  /* 11893335 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 1189333a call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11893340u);
  /* 11893340 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893343 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893345 call 0x11895ef0 */
  push32(0x1189334au); f_11895ef0();
  /* 1189334a mov esi, esp */
  ESI = (ESP);
  /* 1189334c push 0x118be960 */
  push32((uint32_t)(0x118be960u));
  /* 11893351 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 11893356 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x1189335cu);
  /* 1189335c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189335f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893361 call 0x11895ef0 */
  push32(0x11893366u); f_11895ef0();
  /* 11893366 mov esi, esp */
  ESI = (ESP);
  /* 11893368 push 0x118be948 */
  push32((uint32_t)(0x118be948u));
  /* 1189336d push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 11893372 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11893378u);
  /* 11893378 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189337b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189337d call 0x11895ef0 */
  push32(0x11893382u); f_11895ef0();
  /* 11893382 mov esi, esp */
  ESI = (ESP);
  /* 11893384 push 0x118be930 */
  push32((uint32_t)(0x118be930u));
  /* 11893389 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 1189338e call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11893394u);
  /* 11893394 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893397 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893399 call 0x11895ef0 */
  push32(0x1189339eu); f_11895ef0();
L_1189339e:;
  /* 1189339e mov esi, esp */
  ESI = (ESP);
  /* 118933a0 push 0xf */
  push32((uint32_t)(0xfu));
  /* 118933a2 call dword ptr [0x118c6488] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6488))), 0x118933a8u);
  /* 118933a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118933ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118933ad call 0x11895ef0 */
  push32(0x118933b2u); f_11895ef0();
  /* 118933b2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 118933b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118933b9 je 0x118934d7 */
  if (C.zf) goto L_118934d7;
  /* 118933bf mov esi, esp */
  ESI = (ESP);
  /* 118933c1 push 0x118be914 */
  push32((uint32_t)(0x118be914u));
  /* 118933c6 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 118933cb call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x118933d1u);
  /* 118933d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118933d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118933d6 call 0x11895ef0 */
  push32(0x118933dbu); f_11895ef0();
  /* 118933db mov esi, esp */
  ESI = (ESP);
  /* 118933dd push 0x118be8f8 */
  push32((uint32_t)(0x118be8f8u));
  /* 118933e2 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 118933e7 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x118933edu);
  /* 118933ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118933f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118933f2 call 0x11895ef0 */
  push32(0x118933f7u); f_11895ef0();
  /* 118933f7 mov esi, esp */
  ESI = (ESP);
  /* 118933f9 push 0x118be8e0 */
  push32((uint32_t)(0x118be8e0u));
  /* 118933fe push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 11893403 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11893409u);
  /* 11893409 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189340c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189340e call 0x11895ef0 */
  push32(0x11893413u); f_11895ef0();
  /* 11893413 mov esi, esp */
  ESI = (ESP);
  /* 11893415 push 0x118be8c8 */
  push32((uint32_t)(0x118be8c8u));
  /* 1189341a push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 1189341f call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11893425u);
  /* 11893425 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893428 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189342a call 0x11895ef0 */
  push32(0x1189342fu); f_11895ef0();
  /* 1189342f mov esi, esp */
  ESI = (ESP);
  /* 11893431 push 0x118be8b0 */
  push32((uint32_t)(0x118be8b0u));
  /* 11893436 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 1189343b call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11893441u);
  /* 11893441 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893444 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893446 call 0x11895ef0 */
  push32(0x1189344bu); f_11895ef0();
  /* 1189344b mov esi, esp */
  ESI = (ESP);
  /* 1189344d push 0x118be898 */
  push32((uint32_t)(0x118be898u));
  /* 11893452 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 11893457 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x1189345du);
  /* 1189345d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893460 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893462 call 0x11895ef0 */
  push32(0x11893467u); f_11895ef0();
  /* 11893467 mov esi, esp */
  ESI = (ESP);
  /* 11893469 push 0x118be87c */
  push32((uint32_t)(0x118be87cu));
  /* 1189346e push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 11893473 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11893479u);
  /* 11893479 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189347c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189347e call 0x11895ef0 */
  push32(0x11893483u); f_11895ef0();
  /* 11893483 mov esi, esp */
  ESI = (ESP);
  /* 11893485 push 0x118be860 */
  push32((uint32_t)(0x118be860u));
  /* 1189348a push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 1189348f call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11893495u);
  /* 11893495 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893498 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189349a call 0x11895ef0 */
  push32(0x1189349fu); f_11895ef0();
  /* 1189349f mov esi, esp */
  ESI = (ESP);
  /* 118934a1 push 0x118be844 */
  push32((uint32_t)(0x118be844u));
  /* 118934a6 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 118934ab call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x118934b1u);
  /* 118934b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118934b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118934b6 call 0x11895ef0 */
  push32(0x118934bbu); f_11895ef0();
  /* 118934bb mov esi, esp */
  ESI = (ESP);
  /* 118934bd push 0x118be828 */
  push32((uint32_t)(0x118be828u));
  /* 118934c2 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 118934c7 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x118934cdu);
  /* 118934cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118934d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118934d2 call 0x11895ef0 */
  push32(0x118934d7u); f_11895ef0();
L_118934d7:;
  /* 118934d7 mov esi, esp */
  ESI = (ESP);
  /* 118934d9 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 118934db call dword ptr [0x118c6488] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6488))), 0x118934e1u);
  /* 118934e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118934e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118934e6 call 0x11895ef0 */
  push32(0x118934ebu); f_11895ef0();
  /* 118934eb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 118934f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118934f2 je 0x11893610 */
  if (C.zf) goto L_11893610;
  /* 118934f8 mov esi, esp */
  ESI = (ESP);
  /* 118934fa push 0x118be80c */
  push32((uint32_t)(0x118be80cu));
  /* 118934ff push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 11893504 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x1189350au);
  /* 1189350a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189350d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189350f call 0x11895ef0 */
  push32(0x11893514u); f_11895ef0();
  /* 11893514 mov esi, esp */
  ESI = (ESP);
  /* 11893516 push 0x118be7f0 */
  push32((uint32_t)(0x118be7f0u));
  /* 1189351b push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 11893520 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11893526u);
  /* 11893526 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893529 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189352b call 0x11895ef0 */
  push32(0x11893530u); f_11895ef0();
  /* 11893530 mov esi, esp */
  ESI = (ESP);
  /* 11893532 push 0x118be7d8 */
  push32((uint32_t)(0x118be7d8u));
  /* 11893537 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 1189353c call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11893542u);
  /* 11893542 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893545 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893547 call 0x11895ef0 */
  push32(0x1189354cu); f_11895ef0();
  /* 1189354c mov esi, esp */
  ESI = (ESP);
  /* 1189354e push 0x118be7c0 */
  push32((uint32_t)(0x118be7c0u));
  /* 11893553 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 11893558 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x1189355eu);
  /* 1189355e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893561 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893563 call 0x11895ef0 */
  push32(0x11893568u); f_11895ef0();
  /* 11893568 mov esi, esp */
  ESI = (ESP);
  /* 1189356a push 0x118be7a8 */
  push32((uint32_t)(0x118be7a8u));
  /* 1189356f push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 11893574 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x1189357au);
  /* 1189357a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189357d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189357f call 0x11895ef0 */
  push32(0x11893584u); f_11895ef0();
  /* 11893584 mov esi, esp */
  ESI = (ESP);
  /* 11893586 push 0x118be790 */
  push32((uint32_t)(0x118be790u));
  /* 1189358b push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 11893590 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11893596u);
  /* 11893596 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893599 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189359b call 0x11895ef0 */
  push32(0x118935a0u); f_11895ef0();
  /* 118935a0 mov esi, esp */
  ESI = (ESP);
  /* 118935a2 push 0x118be774 */
  push32((uint32_t)(0x118be774u));
  /* 118935a7 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 118935ac call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x118935b2u);
  /* 118935b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118935b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118935b7 call 0x11895ef0 */
  push32(0x118935bcu); f_11895ef0();
  /* 118935bc mov esi, esp */
  ESI = (ESP);
  /* 118935be push 0x118be758 */
  push32((uint32_t)(0x118be758u));
  /* 118935c3 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 118935c8 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x118935ceu);
  /* 118935ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118935d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118935d3 call 0x11895ef0 */
  push32(0x118935d8u); f_11895ef0();
  /* 118935d8 mov esi, esp */
  ESI = (ESP);
  /* 118935da push 0x118be73c */
  push32((uint32_t)(0x118be73cu));
  /* 118935df push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 118935e4 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x118935eau);
  /* 118935ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118935ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118935ef call 0x11895ef0 */
  push32(0x118935f4u); f_11895ef0();
  /* 118935f4 mov esi, esp */
  ESI = (ESP);
  /* 118935f6 push 0x118be720 */
  push32((uint32_t)(0x118be720u));
  /* 118935fb push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 11893600 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11893606u);
  /* 11893606 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893609 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189360b call 0x11895ef0 */
  push32(0x11893610u); f_11895ef0();
L_11893610:;
  /* 11893610 mov esi, esp */
  ESI = (ESP);
  /* 11893612 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11893614 call dword ptr [0x118c6488] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6488))), 0x1189361au);
  /* 1189361a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189361d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189361f call 0x11895ef0 */
  push32(0x11893624u); f_11895ef0();
  /* 11893624 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11893629 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189362b je 0x11893749 */
  if (C.zf) goto L_11893749;
  /* 11893631 mov esi, esp */
  ESI = (ESP);
  /* 11893633 push 0x118be704 */
  push32((uint32_t)(0x118be704u));
  /* 11893638 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 1189363d call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11893643u);
  /* 11893643 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893646 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893648 call 0x11895ef0 */
  push32(0x1189364du); f_11895ef0();
  /* 1189364d mov esi, esp */
  ESI = (ESP);
  /* 1189364f push 0x118be6e8 */
  push32((uint32_t)(0x118be6e8u));
  /* 11893654 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 11893659 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x1189365fu);
  /* 1189365f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893662 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893664 call 0x11895ef0 */
  push32(0x11893669u); f_11895ef0();
  /* 11893669 mov esi, esp */
  ESI = (ESP);
  /* 1189366b push 0x118be6d0 */
  push32((uint32_t)(0x118be6d0u));
  /* 11893670 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 11893675 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x1189367bu);
  /* 1189367b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189367e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893680 call 0x11895ef0 */
  push32(0x11893685u); f_11895ef0();
  /* 11893685 mov esi, esp */
  ESI = (ESP);
  /* 11893687 push 0x118be6b8 */
  push32((uint32_t)(0x118be6b8u));
  /* 1189368c push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 11893691 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11893697u);
  /* 11893697 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189369a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189369c call 0x11895ef0 */
  push32(0x118936a1u); f_11895ef0();
  /* 118936a1 mov esi, esp */
  ESI = (ESP);
  /* 118936a3 push 0x118be6a0 */
  push32((uint32_t)(0x118be6a0u));
  /* 118936a8 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 118936ad call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x118936b3u);
  /* 118936b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118936b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118936b8 call 0x11895ef0 */
  push32(0x118936bdu); f_11895ef0();
  /* 118936bd mov esi, esp */
  ESI = (ESP);
  /* 118936bf push 0x118be688 */
  push32((uint32_t)(0x118be688u));
  /* 118936c4 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 118936c9 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x118936cfu);
  /* 118936cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118936d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118936d4 call 0x11895ef0 */
  push32(0x118936d9u); f_11895ef0();
  /* 118936d9 mov esi, esp */
  ESI = (ESP);
  /* 118936db push 0x118be66c */
  push32((uint32_t)(0x118be66cu));
  /* 118936e0 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 118936e5 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x118936ebu);
  /* 118936eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118936ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118936f0 call 0x11895ef0 */
  push32(0x118936f5u); f_11895ef0();
  /* 118936f5 mov esi, esp */
  ESI = (ESP);
  /* 118936f7 push 0x118be650 */
  push32((uint32_t)(0x118be650u));
  /* 118936fc push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 11893701 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11893707u);
  /* 11893707 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189370a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189370c call 0x11895ef0 */
  push32(0x11893711u); f_11895ef0();
  /* 11893711 mov esi, esp */
  ESI = (ESP);
  /* 11893713 push 0x118be634 */
  push32((uint32_t)(0x118be634u));
  /* 11893718 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 1189371d call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11893723u);
  /* 11893723 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893726 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893728 call 0x11895ef0 */
  push32(0x1189372du); f_11895ef0();
  /* 1189372d mov esi, esp */
  ESI = (ESP);
  /* 1189372f push 0x118be618 */
  push32((uint32_t)(0x118be618u));
  /* 11893734 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 11893739 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x1189373fu);
  /* 1189373f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893742 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893744 call 0x11895ef0 */
  push32(0x11893749u); f_11895ef0();
L_11893749:;
  /* 11893749 mov esi, esp */
  ESI = (ESP);
  /* 1189374b push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1189374d call dword ptr [0x118c6488] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6488))), 0x11893753u);
  /* 11893753 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893756 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893758 call 0x11895ef0 */
  push32(0x1189375du); f_11895ef0();
  /* 1189375d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11893762 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11893764 je 0x11893882 */
  if (C.zf) goto L_11893882;
  /* 1189376a mov esi, esp */
  ESI = (ESP);
  /* 1189376c push 0x118be5fc */
  push32((uint32_t)(0x118be5fcu));
  /* 11893771 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 11893776 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x1189377cu);
  /* 1189377c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189377f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893781 call 0x11895ef0 */
  push32(0x11893786u); f_11895ef0();
  /* 11893786 mov esi, esp */
  ESI = (ESP);
  /* 11893788 push 0x118be5e0 */
  push32((uint32_t)(0x118be5e0u));
  /* 1189378d push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 11893792 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11893798u);
  /* 11893798 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189379b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189379d call 0x11895ef0 */
  push32(0x118937a2u); f_11895ef0();
  /* 118937a2 mov esi, esp */
  ESI = (ESP);
  /* 118937a4 push 0x118be5c8 */
  push32((uint32_t)(0x118be5c8u));
  /* 118937a9 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 118937ae call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x118937b4u);
  /* 118937b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118937b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118937b9 call 0x11895ef0 */
  push32(0x118937beu); f_11895ef0();
  /* 118937be mov esi, esp */
  ESI = (ESP);
  /* 118937c0 push 0x118be5b0 */
  push32((uint32_t)(0x118be5b0u));
  /* 118937c5 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 118937ca call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x118937d0u);
  /* 118937d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118937d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118937d5 call 0x11895ef0 */
  push32(0x118937dau); f_11895ef0();
  /* 118937da mov esi, esp */
  ESI = (ESP);
  /* 118937dc push 0x118be598 */
  push32((uint32_t)(0x118be598u));
  /* 118937e1 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 118937e6 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x118937ecu);
  /* 118937ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118937ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118937f1 call 0x11895ef0 */
  push32(0x118937f6u); f_11895ef0();
  /* 118937f6 mov esi, esp */
  ESI = (ESP);
  /* 118937f8 push 0x118be580 */
  push32((uint32_t)(0x118be580u));
  /* 118937fd push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 11893802 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11893808u);
  /* 11893808 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189380b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189380d call 0x11895ef0 */
  push32(0x11893812u); f_11895ef0();
  /* 11893812 mov esi, esp */
  ESI = (ESP);
  /* 11893814 push 0x118be564 */
  push32((uint32_t)(0x118be564u));
  /* 11893819 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 1189381e call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11893824u);
  /* 11893824 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893827 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893829 call 0x11895ef0 */
  push32(0x1189382eu); f_11895ef0();
  /* 1189382e mov esi, esp */
  ESI = (ESP);
  /* 11893830 push 0x118be548 */
  push32((uint32_t)(0x118be548u));
  /* 11893835 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 1189383a call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11893840u);
  /* 11893840 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893843 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893845 call 0x11895ef0 */
  push32(0x1189384au); f_11895ef0();
  /* 1189384a mov esi, esp */
  ESI = (ESP);
  /* 1189384c push 0x118be52c */
  push32((uint32_t)(0x118be52cu));
  /* 11893851 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 11893856 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x1189385cu);
  /* 1189385c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189385f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893861 call 0x11895ef0 */
  push32(0x11893866u); f_11895ef0();
  /* 11893866 mov esi, esp */
  ESI = (ESP);
  /* 11893868 push 0x118be510 */
  push32((uint32_t)(0x118be510u));
  /* 1189386d push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 11893872 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11893878u);
  /* 11893878 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189387b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189387d call 0x11895ef0 */
  push32(0x11893882u); f_11895ef0();
L_11893882:;
  /* 11893882 mov esi, esp */
  ESI = (ESP);
  /* 11893884 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11893886 call dword ptr [0x118c6488] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6488))), 0x1189388cu);
  /* 1189388c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189388f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893891 call 0x11895ef0 */
  push32(0x11893896u); f_11895ef0();
  /* 11893896 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1189389b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189389d je 0x11893a9b */
  if (C.zf) goto L_11893a9b;
  /* 118938a3 mov esi, esp */
  ESI = (ESP);
  /* 118938a5 push 0x118be4f4 */
  push32((uint32_t)(0x118be4f4u));
  /* 118938aa push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 118938af call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x118938b5u);
  /* 118938b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118938b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118938ba call 0x11895ef0 */
  push32(0x118938bfu); f_11895ef0();
  /* 118938bf mov esi, esp */
  ESI = (ESP);
  /* 118938c1 push 0x118be4d8 */
  push32((uint32_t)(0x118be4d8u));
  /* 118938c6 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 118938cb call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x118938d1u);
  /* 118938d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118938d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118938d6 call 0x11895ef0 */
  push32(0x118938dbu); f_11895ef0();
  /* 118938db mov esi, esp */
  ESI = (ESP);
  /* 118938dd push 0x118be4c0 */
  push32((uint32_t)(0x118be4c0u));
  /* 118938e2 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 118938e7 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x118938edu);
  /* 118938ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118938f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118938f2 call 0x11895ef0 */
  push32(0x118938f7u); f_11895ef0();
  /* 118938f7 mov esi, esp */
  ESI = (ESP);
  /* 118938f9 push 0x118be4a8 */
  push32((uint32_t)(0x118be4a8u));
  /* 118938fe push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 11893903 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11893909u);
  /* 11893909 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189390c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189390e call 0x11895ef0 */
  push32(0x11893913u); f_11895ef0();
  /* 11893913 mov esi, esp */
  ESI = (ESP);
  /* 11893915 push 0x118be490 */
  push32((uint32_t)(0x118be490u));
  /* 1189391a push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 1189391f call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11893925u);
  /* 11893925 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893928 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189392a call 0x11895ef0 */
  push32(0x1189392fu); f_11895ef0();
  /* 1189392f mov esi, esp */
  ESI = (ESP);
  /* 11893931 push 0x118be478 */
  push32((uint32_t)(0x118be478u));
  /* 11893936 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 1189393b call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11893941u);
  /* 11893941 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893944 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893946 call 0x11895ef0 */
  push32(0x1189394bu); f_11895ef0();
  /* 1189394b mov esi, esp */
  ESI = (ESP);
  /* 1189394d push 0x118be45c */
  push32((uint32_t)(0x118be45cu));
  /* 11893952 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 11893957 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x1189395du);
  /* 1189395d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893960 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893962 call 0x11895ef0 */
  push32(0x11893967u); f_11895ef0();
  /* 11893967 mov esi, esp */
  ESI = (ESP);
  /* 11893969 push 0x118be440 */
  push32((uint32_t)(0x118be440u));
  /* 1189396e push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 11893973 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11893979u);
  /* 11893979 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189397c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189397e call 0x11895ef0 */
  push32(0x11893983u); f_11895ef0();
  /* 11893983 mov esi, esp */
  ESI = (ESP);
  /* 11893985 push 0x118be424 */
  push32((uint32_t)(0x118be424u));
  /* 1189398a push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 1189398f call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11893995u);
  /* 11893995 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893998 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189399a call 0x11895ef0 */
  push32(0x1189399fu); f_11895ef0();
  /* 1189399f mov esi, esp */
  ESI = (ESP);
  /* 118939a1 push 0x118be408 */
  push32((uint32_t)(0x118be408u));
  /* 118939a6 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 118939ab call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x118939b1u);
  /* 118939b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118939b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118939b6 call 0x11895ef0 */
  push32(0x118939bbu); f_11895ef0();
  /* 118939bb mov esi, esp */
  ESI = (ESP);
  /* 118939bd push 0x118be3fc */
  push32((uint32_t)(0x118be3fcu));
  /* 118939c2 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 118939c7 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x118939cdu);
  /* 118939cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118939d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118939d2 call 0x11895ef0 */
  push32(0x118939d7u); f_11895ef0();
  /* 118939d7 mov esi, esp */
  ESI = (ESP);
  /* 118939d9 push 0x118be3f0 */
  push32((uint32_t)(0x118be3f0u));
  /* 118939de push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 118939e3 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x118939e9u);
  /* 118939e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118939ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118939ee call 0x11895ef0 */
  push32(0x118939f3u); f_11895ef0();
  /* 118939f3 mov esi, esp */
  ESI = (ESP);
  /* 118939f5 push 0x118be3e4 */
  push32((uint32_t)(0x118be3e4u));
  /* 118939fa push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 118939ff call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11893a05u);
  /* 11893a05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893a08 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893a0a call 0x11895ef0 */
  push32(0x11893a0fu); f_11895ef0();
  /* 11893a0f mov esi, esp */
  ESI = (ESP);
  /* 11893a11 push 0x118be3d8 */
  push32((uint32_t)(0x118be3d8u));
  /* 11893a16 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 11893a1b call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11893a21u);
  /* 11893a21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893a24 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893a26 call 0x11895ef0 */
  push32(0x11893a2bu); f_11895ef0();
  /* 11893a2b mov esi, esp */
  ESI = (ESP);
  /* 11893a2d push 0x118be3cc */
  push32((uint32_t)(0x118be3ccu));
  /* 11893a32 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 11893a37 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11893a3du);
  /* 11893a3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893a40 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893a42 call 0x11895ef0 */
  push32(0x11893a47u); f_11895ef0();
  /* 11893a47 mov esi, esp */
  ESI = (ESP);
  /* 11893a49 push 0x118be3c0 */
  push32((uint32_t)(0x118be3c0u));
  /* 11893a4e push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 11893a53 call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11893a59u);
  /* 11893a59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893a5c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893a5e call 0x11895ef0 */
  push32(0x11893a63u); f_11895ef0();
  /* 11893a63 mov esi, esp */
  ESI = (ESP);
  /* 11893a65 push 0x118be3b4 */
  push32((uint32_t)(0x118be3b4u));
  /* 11893a6a push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 11893a6f call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11893a75u);
  /* 11893a75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893a78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893a7a call 0x11895ef0 */
  push32(0x11893a7fu); f_11895ef0();
  /* 11893a7f mov esi, esp */
  ESI = (ESP);
  /* 11893a81 push 0x118be3a8 */
  push32((uint32_t)(0x118be3a8u));
  /* 11893a86 push 0x118be234 */
  push32((uint32_t)(0x118be234u));
  /* 11893a8b call dword ptr [0x118c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c647c))), 0x11893a91u);
  /* 11893a91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893a94 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893a96 call 0x11895ef0 */
  push32(0x11893a9bu); f_11895ef0();
L_11893a9b:;
  /* 11893a9b mov esi, esp */
  ESI = (ESP);
  /* 11893a9d push 1 */
  push32((uint32_t)(0x1u));
  /* 11893a9f call dword ptr [0x118c6488] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6488))), 0x11893aa5u);
  /* 11893aa5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893aa8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893aaa call 0x11895ef0 */
  push32(0x11893aafu); f_11895ef0();
  /* 11893aaf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11893ab4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11893ab6 je 0x11893b16 */
  if (C.zf) goto L_11893b16;
  /* 11893ab8 mov esi, esp */
  ESI = (ESP);
  /* 11893aba push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11893abc call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11893ac2u);
  /* 11893ac2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893ac5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893ac7 call 0x11895ef0 */
  push32(0x11893accu); f_11895ef0();
  /* 11893acc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11893ad1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11893ad3 je 0x11893b16 */
  if (C.zf) goto L_11893b16;
  /* 11893ad5 mov esi, esp */
  ESI = (ESP);
  /* 11893ad7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11893ad9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11893adb call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x11893ae1u);
  /* 11893ae1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893ae4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893ae6 call 0x11895ef0 */
  push32(0x11893aebu); f_11895ef0();
  /* 11893aeb mov esi, esp */
  ESI = (ESP);
  /* 11893aed push 0x118be39c */
  push32((uint32_t)(0x118be39cu));
  /* 11893af2 call dword ptr [0x118c6498] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6498))), 0x11893af8u);
  /* 11893af8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893afb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893afd call 0x11895ef0 */
  push32(0x11893b02u); f_11895ef0();
  /* 11893b02 mov esi, esp */
  ESI = (ESP);
  /* 11893b04 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11893b06 call dword ptr [0x118c645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c645c))), 0x11893b0cu);
  /* 11893b0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893b0f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893b11 call 0x11895ef0 */
  push32(0x11893b16u); f_11895ef0();
L_11893b16:;
  /* 11893b16 mov esi, esp */
  ESI = (ESP);
  /* 11893b18 push 2 */
  push32((uint32_t)(0x2u));
  /* 11893b1a call dword ptr [0x118c6488] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6488))), 0x11893b20u);
  /* 11893b20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893b23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893b25 call 0x11895ef0 */
  push32(0x11893b2au); f_11895ef0();
  /* 11893b2a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11893b2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11893b31 je 0x11893b98 */
  if (C.zf) goto L_11893b98;
  /* 11893b33 mov esi, esp */
  ESI = (ESP);
  /* 11893b35 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 11893b37 call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11893b3du);
  /* 11893b3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893b40 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893b42 call 0x11895ef0 */
  push32(0x11893b47u); f_11895ef0();
  /* 11893b47 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11893b4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11893b4e je 0x11893b98 */
  if (C.zf) goto L_11893b98;
  /* 11893b50 mov esi, esp */
  ESI = (ESP);
  /* 11893b52 push 0 */
  push32((uint32_t)(0x0u));
  /* 11893b54 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 11893b56 call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x11893b5cu);
  /* 11893b5c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893b5f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893b61 call 0x11895ef0 */
  push32(0x11893b66u); f_11895ef0();
  /* 11893b66 mov esi, esp */
  ESI = (ESP);
  /* 11893b68 push 0x118be390 */
  push32((uint32_t)(0x118be390u));
  /* 11893b6d call dword ptr [0x118c6498] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6498))), 0x11893b73u);
  /* 11893b73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893b76 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893b78 call 0x11895ef0 */
  push32(0x11893b7du); f_11895ef0();
  /* 11893b7d mov esi, esp */
  ESI = (ESP);
  /* 11893b7f push 1 */
  push32((uint32_t)(0x1u));
  /* 11893b81 push 1 */
  push32((uint32_t)(0x1u));
  /* 11893b83 push 0x118c3658 */
  push32((uint32_t)(0x118c3658u));
  /* 11893b88 call dword ptr [0x118c649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c649c))), 0x11893b8eu);
  /* 11893b8e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893b91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893b93 call 0x11895ef0 */
  push32(0x11893b98u); f_11895ef0();
L_11893b98:;
  /* 11893b98 mov esi, esp */
  ESI = (ESP);
  /* 11893b9a push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11893b9c call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11893ba2u);
  /* 11893ba2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893ba5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893ba7 call 0x11895ef0 */
  push32(0x11893bacu); f_11895ef0();
  /* 11893bac and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11893bb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11893bb3 je 0x11893c1a */
  if (C.zf) goto L_11893c1a;
  /* 11893bb5 mov esi, esp */
  ESI = (ESP);
  /* 11893bb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11893bb9 push 0x118c3650 */
  push32((uint32_t)(0x118c3650u));
  /* 11893bbe call dword ptr [0x118c6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6494))), 0x11893bc4u);
  /* 11893bc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893bc7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893bc9 call 0x11895ef0 */
  push32(0x11893bceu); f_11895ef0();
  /* 11893bce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11893bd0 jle 0x11893c1a */
  if ((C.zf||C.sf!=C.of)) goto L_11893c1a;
  /* 11893bd2 mov esi, esp */
  ESI = (ESP);
  /* 11893bd4 push 0x118c34b8 */
  push32((uint32_t)(0x118c34b8u));
  /* 11893bd9 call dword ptr [0x118c64a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64a4))), 0x11893bdfu);
  /* 11893bdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893be2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893be4 call 0x11895ef0 */
  push32(0x11893be9u); f_11895ef0();
  /* 11893be9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11893beb jle 0x11893c1a */
  if ((C.zf||C.sf!=C.of)) goto L_11893c1a;
  /* 11893bed mov esi, esp */
  ESI = (ESP);
  /* 11893bef push 0 */
  push32((uint32_t)(0x0u));
  /* 11893bf1 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11893bf3 call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x11893bf9u);
  /* 11893bf9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893bfc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893bfe call 0x11895ef0 */
  push32(0x11893c03u); f_11895ef0();
  /* 11893c03 mov esi, esp */
  ESI = (ESP);
  /* 11893c05 push 0x118be388 */
  push32((uint32_t)(0x118be388u));
  /* 11893c0a call dword ptr [0x118c6498] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6498))), 0x11893c10u);
  /* 11893c10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893c13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893c15 call 0x11895ef0 */
  push32(0x11893c1au); f_11895ef0();
L_11893c1a:;
  /* 11893c1a mov esi, esp */
  ESI = (ESP);
  /* 11893c1c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11893c1e call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11893c24u);
  /* 11893c24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893c27 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893c29 call 0x11895ef0 */
  push32(0x11893c2eu); f_11895ef0();
  /* 11893c2e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11893c33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11893c35 jne 0x11893d04 */
  if (!C.zf) goto L_11893d04;
  /* 11893c3b mov esi, esp */
  ESI = (ESP);
  /* 11893c3d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11893c3f call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11893c45u);
  /* 11893c45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893c48 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893c4a call 0x11895ef0 */
  push32(0x11893c4fu); f_11895ef0();
  /* 11893c4f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11893c54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11893c56 je 0x11893d04 */
  if (C.zf) goto L_11893d04;
  /* 11893c5c mov esi, esp */
  ESI = (ESP);
  /* 11893c5e push 0 */
  push32((uint32_t)(0x0u));
  /* 11893c60 push 0x118c34b8 */
  push32((uint32_t)(0x118c34b8u));
  /* 11893c65 call dword ptr [0x118c64a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64a8))), 0x11893c6bu);
  /* 11893c6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893c6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893c70 call 0x11895ef0 */
  push32(0x11893c75u); f_11895ef0();
  /* 11893c75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11893c77 jle 0x11893d04 */
  if ((C.zf||C.sf!=C.of)) goto L_11893d04;
  /* 11893c7d mov esi, esp */
  ESI = (ESP);
  /* 11893c7f push 0 */
  push32((uint32_t)(0x0u));
  /* 11893c81 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11893c83 call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x11893c89u);
  /* 11893c89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893c8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893c8e call 0x11895ef0 */
  push32(0x11893c93u); f_11895ef0();
  /* 11893c93 mov esi, esp */
  ESI = (ESP);
  /* 11893c95 push 0 */
  push32((uint32_t)(0x0u));
  /* 11893c97 call dword ptr [0x118c6470] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6470))), 0x11893c9du);
  /* 11893c9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893ca0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893ca2 call 0x11895ef0 */
  push32(0x11893ca7u); f_11895ef0();
  /* 11893ca7 imul eax, eax, 0x2710 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2710u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11893cad mov edx, 0x11170 */
  EDX = (0x11170u);
  /* 11893cb2 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11893cb4 mov esi, esp */
  ESI = (ESP);
  /* 11893cb6 push edx */
  push32((uint32_t)(EDX));
  /* 11893cb7 push 0x118be380 */
  push32((uint32_t)(0x118be380u));
  /* 11893cbc call dword ptr [0x118c64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64a0))), 0x11893cc2u);
  /* 11893cc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893cc5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893cc7 call 0x11895ef0 */
  push32(0x11893cccu); f_11895ef0();
  /* 11893ccc mov esi, esp */
  ESI = (ESP);
  /* 11893cce push 0 */
  push32((uint32_t)(0x0u));
  /* 11893cd0 call dword ptr [0x118c6470] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6470))), 0x11893cd6u);
  /* 11893cd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893cd9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893cdb call 0x11895ef0 */
  push32(0x11893ce0u); f_11895ef0();
  /* 11893ce0 imul eax, eax, 0x2710 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2710u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11893ce6 mov ecx, 0x11170 */
  ECX = (0x11170u);
  /* 11893ceb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11893ced mov esi, esp */
  ESI = (ESP);
  /* 11893cef push ecx */
  push32((uint32_t)(ECX));
  /* 11893cf0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11893cf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11893cf4 call dword ptr [0x118c64b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64b0))), 0x11893cfau);
  /* 11893cfa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893cfd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893cff call 0x11895ef0 */
  push32(0x11893d04u); f_11895ef0();
L_11893d04:;
  /* 11893d04 mov esi, esp */
  ESI = (ESP);
  /* 11893d06 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11893d08 call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11893d0eu);
  /* 11893d0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893d11 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893d13 call 0x11895ef0 */
  push32(0x11893d18u); f_11895ef0();
  /* 11893d18 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11893d1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11893d1f jne 0x11893da7 */
  if (!C.zf) goto L_11893da7;
  /* 11893d25 mov esi, esp */
  ESI = (ESP);
  /* 11893d27 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11893d29 call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11893d2fu);
  /* 11893d2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893d32 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893d34 call 0x11895ef0 */
  push32(0x11893d39u); f_11895ef0();
  /* 11893d39 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11893d3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11893d40 je 0x11893da7 */
  if (C.zf) goto L_11893da7;
  /* 11893d42 mov esi, esp */
  ESI = (ESP);
  /* 11893d44 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11893d46 call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11893d4cu);
  /* 11893d4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893d4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893d51 call 0x11895ef0 */
  push32(0x11893d56u); f_11895ef0();
  /* 11893d56 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11893d5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11893d5d je 0x11893da7 */
  if (C.zf) goto L_11893da7;
  /* 11893d5f mov esi, esp */
  ESI = (ESP);
  /* 11893d61 push 0x118c34b8 */
  push32((uint32_t)(0x118c34b8u));
  /* 11893d66 call dword ptr [0x118c64a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64a4))), 0x11893d6cu);
  /* 11893d6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893d6f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893d71 call 0x11895ef0 */
  push32(0x11893d76u); f_11895ef0();
  /* 11893d76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11893d78 jne 0x11893da7 */
  if (!C.zf) goto L_11893da7;
  /* 11893d7a mov esi, esp */
  ESI = (ESP);
  /* 11893d7c push 0 */
  push32((uint32_t)(0x0u));
  /* 11893d7e push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11893d80 call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x11893d86u);
  /* 11893d86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893d89 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893d8b call 0x11895ef0 */
  push32(0x11893d90u); f_11895ef0();
  /* 11893d90 mov esi, esp */
  ESI = (ESP);
  /* 11893d92 push 0x118be378 */
  push32((uint32_t)(0x118be378u));
  /* 11893d97 call dword ptr [0x118c6498] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6498))), 0x11893d9du);
  /* 11893d9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893da0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893da2 call 0x11895ef0 */
  push32(0x11893da7u); f_11895ef0();
L_11893da7:;
  /* 11893da7 mov esi, esp */
  ESI = (ESP);
  /* 11893da9 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11893dab call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11893db1u);
  /* 11893db1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893db4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893db6 call 0x11895ef0 */
  push32(0x11893dbbu); f_11895ef0();
  /* 11893dbb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11893dc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11893dc2 je 0x11893e54 */
  if (C.zf) goto L_11893e54;
  /* 11893dc8 mov esi, esp */
  ESI = (ESP);
  /* 11893dca push 0 */
  push32((uint32_t)(0x0u));
  /* 11893dcc call dword ptr [0x118c64b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64b4))), 0x11893dd2u);
  /* 11893dd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893dd5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893dd7 call 0x11895ef0 */
  push32(0x11893ddcu); f_11895ef0();
  /* 11893ddc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11893de1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11893de3 je 0x11893e54 */
  if (C.zf) goto L_11893e54;
  /* 11893de5 mov esi, esp */
  ESI = (ESP);
  /* 11893de7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11893de9 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11893deb call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x11893df1u);
  /* 11893df1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893df4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893df6 call 0x11895ef0 */
  push32(0x11893dfbu); f_11895ef0();
  /* 11893dfb mov esi, esp */
  ESI = (ESP);
  /* 11893dfd push 3 */
  push32((uint32_t)(0x3u));
  /* 11893dff push 0 */
  push32((uint32_t)(0x0u));
  /* 11893e01 call dword ptr [0x118c64ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64ac))), 0x11893e07u);
  /* 11893e07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893e0a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893e0c call 0x11895ef0 */
  push32(0x11893e11u); f_11895ef0();
  /* 11893e11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11893e13 jle 0x11893e2e */
  if ((C.zf||C.sf!=C.of)) goto L_11893e2e;
  /* 11893e15 mov esi, esp */
  ESI = (ESP);
  /* 11893e17 push 0x118be370 */
  push32((uint32_t)(0x118be370u));
  /* 11893e1c call dword ptr [0x118c6498] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6498))), 0x11893e22u);
  /* 11893e22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893e25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893e27 call 0x11895ef0 */
  push32(0x11893e2cu); f_11895ef0();
  /* 11893e2c jmp 0x11893e45 */
  goto L_11893e45;
L_11893e2e:;
  /* 11893e2e mov esi, esp */
  ESI = (ESP);
  /* 11893e30 push 0x118be364 */
  push32((uint32_t)(0x118be364u));
  /* 11893e35 call dword ptr [0x118c6498] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6498))), 0x11893e3bu);
  /* 11893e3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893e3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893e40 call 0x11895ef0 */
  push32(0x11893e45u); f_11895ef0();
L_11893e45:;
  /* 11893e45 mov esi, esp */
  ESI = (ESP);
  /* 11893e47 call dword ptr [0x118c64bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64bc))), 0x11893e4du);
  /* 11893e4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893e4f call 0x11895ef0 */
  push32(0x11893e54u); f_11895ef0();
L_11893e54:;
  /* 11893e54 mov esi, esp */
  ESI = (ESP);
  /* 11893e56 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11893e58 call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11893e5eu);
  /* 11893e5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893e61 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893e63 call 0x11895ef0 */
  push32(0x11893e68u); f_11895ef0();
  /* 11893e68 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11893e6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11893e6f jne 0x11893ee7 */
  if (!C.zf) goto L_11893ee7;
  /* 11893e71 mov esi, esp */
  ESI = (ESP);
  /* 11893e73 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11893e75 call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11893e7bu);
  /* 11893e7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893e7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893e80 call 0x11895ef0 */
  push32(0x11893e85u); f_11895ef0();
  /* 11893e85 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11893e8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11893e8c jne 0x11893ee7 */
  if (!C.zf) goto L_11893ee7;
  /* 11893e8e mov esi, esp */
  ESI = (ESP);
  /* 11893e90 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11893e92 call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11893e98u);
  /* 11893e98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893e9b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893e9d call 0x11895ef0 */
  push32(0x11893ea2u); f_11895ef0();
  /* 11893ea2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11893ea7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11893ea9 je 0x11893ee7 */
  if (C.zf) goto L_11893ee7;
  /* 11893eab mov esi, esp */
  ESI = (ESP);
  /* 11893ead push 0 */
  push32((uint32_t)(0x0u));
  /* 11893eaf push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11893eb1 call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x11893eb7u);
  /* 11893eb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893eba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893ebc call 0x11895ef0 */
  push32(0x11893ec1u); f_11895ef0();
  /* 11893ec1 mov esi, esp */
  ESI = (ESP);
  /* 11893ec3 push 0x118be35c */
  push32((uint32_t)(0x118be35cu));
  /* 11893ec8 call dword ptr [0x118c6498] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6498))), 0x11893eceu);
  /* 11893ece add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893ed1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893ed3 call 0x11895ef0 */
  push32(0x11893ed8u); f_11895ef0();
  /* 11893ed8 mov esi, esp */
  ESI = (ESP);
  /* 11893eda call dword ptr [0x118c64c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64c0))), 0x11893ee0u);
  /* 11893ee0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893ee2 call 0x11895ef0 */
  push32(0x11893ee7u); f_11895ef0();
L_11893ee7:;
  /* 11893ee7 mov esi, esp */
  ESI = (ESP);
  /* 11893ee9 push 0x118c3478 */
  push32((uint32_t)(0x118c3478u));
  /* 11893eee call dword ptr [0x118c64a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64a4))), 0x11893ef4u);
  /* 11893ef4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893ef7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893ef9 call 0x11895ef0 */
  push32(0x11893efeu); f_11895ef0();
  /* 11893efe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11893f00 jle 0x118941da */
  if ((C.zf||C.sf!=C.of)) goto L_118941da;
  /* 11893f06 mov esi, esp */
  ESI = (ESP);
  /* 11893f08 push 0x118c36e0 */
  push32((uint32_t)(0x118c36e0u));
  /* 11893f0d call dword ptr [0x118c64a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64a4))), 0x11893f13u);
  /* 11893f13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893f16 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893f18 call 0x11895ef0 */
  push32(0x11893f1du); f_11895ef0();
  /* 11893f1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11893f1f jle 0x118941da */
  if ((C.zf||C.sf!=C.of)) goto L_118941da;
  /* 11893f25 mov esi, esp */
  ESI = (ESP);
  /* 11893f27 push 9 */
  push32((uint32_t)(0x9u));
  /* 11893f29 call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11893f2fu);
  /* 11893f2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893f32 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893f34 call 0x11895ef0 */
  push32(0x11893f39u); f_11895ef0();
  /* 11893f39 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11893f3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11893f40 je 0x11893f9a */
  if (C.zf) goto L_11893f9a;
  /* 11893f42 mov esi, esp */
  ESI = (ESP);
  /* 11893f44 push 0 */
  push32((uint32_t)(0x0u));
  /* 11893f46 push 9 */
  push32((uint32_t)(0x9u));
  /* 11893f48 call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x11893f4eu);
  /* 11893f4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893f51 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893f53 call 0x11895ef0 */
  push32(0x11893f58u); f_11895ef0();
  /* 11893f58 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11893f5f jmp 0x11893f6a */
  goto L_11893f6a;
L_11893f61:;
  /* 11893f61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11893f64 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11893f67 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11893f6a:;
  /* 11893f6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11893f6d cmp eax, dword ptr [0x118c3530] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118c3530))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893f73 jge 0x11893f9a */
  if ((C.sf==C.of)) goto L_11893f9a;
  /* 11893f75 mov esi, esp */
  ESI = (ESP);
  /* 11893f77 push 0 */
  push32((uint32_t)(0x0u));
  /* 11893f79 push 0x118c3430 */
  push32((uint32_t)(0x118c3430u));
  /* 11893f7e push 0x118c3418 */
  push32((uint32_t)(0x118c3418u));
  /* 11893f83 push 0x118c36e0 */
  push32((uint32_t)(0x118c36e0u));
  /* 11893f88 call dword ptr [0x118c64b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64b8))), 0x11893f8eu);
  /* 11893f8e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893f91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893f93 call 0x11895ef0 */
  push32(0x11893f98u); f_11895ef0();
  /* 11893f98 jmp 0x11893f61 */
  goto L_11893f61;
L_11893f9a:;
  /* 11893f9a mov esi, esp */
  ESI = (ESP);
  /* 11893f9c push 0xa */
  push32((uint32_t)(0xau));
  /* 11893f9e call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11893fa4u);
  /* 11893fa4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893fa7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893fa9 call 0x11895ef0 */
  push32(0x11893faeu); f_11895ef0();
  /* 11893fae and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11893fb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11893fb5 je 0x11894003 */
  if (C.zf) goto L_11894003;
  /* 11893fb7 mov esi, esp */
  ESI = (ESP);
  /* 11893fb9 push 0x118c36e0 */
  push32((uint32_t)(0x118c36e0u));
  /* 11893fbe call dword ptr [0x118c64c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64c8))), 0x11893fc4u);
  /* 11893fc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893fc7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893fc9 call 0x11895ef0 */
  push32(0x11893fceu); f_11895ef0();
  /* 11893fce and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11893fd3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11893fd5 je 0x11894003 */
  if (C.zf) goto L_11894003;
  /* 11893fd7 mov esi, esp */
  ESI = (ESP);
  /* 11893fd9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11893fdb push 3 */
  push32((uint32_t)(0x3u));
  /* 11893fdd call dword ptr [0x118c648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c648c))), 0x11893fe3u);
  /* 11893fe3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893fe6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893fe8 call 0x11895ef0 */
  push32(0x11893fedu); f_11895ef0();
  /* 11893fed mov esi, esp */
  ESI = (ESP);
  /* 11893fef push 0 */
  push32((uint32_t)(0x0u));
  /* 11893ff1 push 0xa */
  push32((uint32_t)(0xau));
  /* 11893ff3 call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x11893ff9u);
  /* 11893ff9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11893ffc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11893ffe call 0x11895ef0 */
  push32(0x11894003u); f_11895ef0();
L_11894003:;
  /* 11894003 mov esi, esp */
  ESI = (ESP);
  /* 11894005 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11894007 call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x1189400du);
  /* 1189400d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894010 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894012 call 0x11895ef0 */
  push32(0x11894017u); f_11895ef0();
  /* 11894017 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1189401c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189401e jne 0x1189413e */
  if (!C.zf) goto L_1189413e;
  /* 11894024 mov esi, esp */
  ESI = (ESP);
  /* 11894026 push 4 */
  push32((uint32_t)(0x4u));
  /* 11894028 call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x1189402eu);
  /* 1189402e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894031 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894033 call 0x11895ef0 */
  push32(0x11894038u); f_11895ef0();
  /* 11894038 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1189403d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189403f je 0x1189413e */
  if (C.zf) goto L_1189413e;
  /* 11894045 mov esi, esp */
  ESI = (ESP);
  /* 11894047 push 3 */
  push32((uint32_t)(0x3u));
  /* 11894049 call dword ptr [0x118c64cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64cc))), 0x1189404fu);
  /* 1189404f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894052 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894054 call 0x11895ef0 */
  push32(0x11894059u); f_11895ef0();
  /* 11894059 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1189405e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894060 je 0x1189413e */
  if (C.zf) goto L_1189413e;
  /* 11894066 mov esi, esp */
  ESI = (ESP);
  /* 11894068 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189406a push 4 */
  push32((uint32_t)(0x4u));
  /* 1189406c call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x11894072u);
  /* 11894072 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894075 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894077 call 0x11895ef0 */
  push32(0x1189407cu); f_11895ef0();
  /* 1189407c mov esi, esp */
  ESI = (ESP);
  /* 1189407e push 3 */
  push32((uint32_t)(0x3u));
  /* 11894080 call dword ptr [0x118c64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64c4))), 0x11894086u);
  /* 11894086 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894089 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189408b call 0x11895ef0 */
  push32(0x11894090u); f_11895ef0();
  /* 11894090 mov esi, esp */
  ESI = (ESP);
  /* 11894092 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11894097 push 8 */
  push32((uint32_t)(0x8u));
  /* 11894099 call dword ptr [0x118c648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c648c))), 0x1189409fu);
  /* 1189409f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118940a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118940a4 call 0x11895ef0 */
  push32(0x118940a9u); f_11895ef0();
  /* 118940a9 mov esi, esp */
  ESI = (ESP);
  /* 118940ab push 1 */
  push32((uint32_t)(0x1u));
  /* 118940ad push 0xa */
  push32((uint32_t)(0xau));
  /* 118940af call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x118940b5u);
  /* 118940b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118940b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118940ba call 0x11895ef0 */
  push32(0x118940bfu); f_11895ef0();
  /* 118940bf mov esi, esp */
  ESI = (ESP);
  /* 118940c1 push 0x118c3410 */
  push32((uint32_t)(0x118c3410u));
  /* 118940c6 push 0x118c3430 */
  push32((uint32_t)(0x118c3430u));
  /* 118940cb call dword ptr [0x118c64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64d4))), 0x118940d1u);
  /* 118940d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118940d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118940d6 call 0x11895ef0 */
  push32(0x118940dbu); f_11895ef0();
  /* 118940db mov esi, esp */
  ESI = (ESP);
  /* 118940dd push 0 */
  push32((uint32_t)(0x0u));
  /* 118940df push 0x118c3410 */
  push32((uint32_t)(0x118c3410u));
  /* 118940e4 call dword ptr [0x118c6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6464))), 0x118940eau);
  /* 118940ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118940ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118940ef call 0x11895ef0 */
  push32(0x118940f4u); f_11895ef0();
  /* 118940f4 mov esi, esp */
  ESI = (ESP);
  /* 118940f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 118940f8 push 0xaa */
  push32((uint32_t)(0xaau));
  /* 118940fd push 0x118c3678 */
  push32((uint32_t)(0x118c3678u));
  /* 11894102 push 2 */
  push32((uint32_t)(0x2u));
  /* 11894104 call dword ptr [0x118c64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64d8))), 0x1189410au);
  /* 1189410a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189410d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189410f call 0x11895ef0 */
  push32(0x11894114u); f_11895ef0();
  /* 11894114 mov esi, esp */
  ESI = (ESP);
  /* 11894116 push 2 */
  push32((uint32_t)(0x2u));
  /* 11894118 call dword ptr [0x118c64d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64d0))), 0x1189411eu);
  /* 1189411e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894121 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894123 call 0x11895ef0 */
  push32(0x11894128u); f_11895ef0();
  /* 11894128 mov esi, esp */
  ESI = (ESP);
  /* 1189412a push 1 */
  push32((uint32_t)(0x1u));
  /* 1189412c push 9 */
  push32((uint32_t)(0x9u));
  /* 1189412e call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x11894134u);
  /* 11894134 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894137 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894139 call 0x11895ef0 */
  push32(0x1189413eu); f_11895ef0();
L_1189413e:;
  /* 1189413e mov esi, esp */
  ESI = (ESP);
  /* 11894140 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11894142 call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11894148u);
  /* 11894148 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189414b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189414d call 0x11895ef0 */
  push32(0x11894152u); f_11895ef0();
  /* 11894152 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11894157 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894159 jne 0x118941da */
  if (!C.zf) goto L_118941da;
  /* 1189415b mov esi, esp */
  ESI = (ESP);
  /* 1189415d push 4 */
  push32((uint32_t)(0x4u));
  /* 1189415f call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11894165u);
  /* 11894165 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894168 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189416a call 0x11895ef0 */
  push32(0x1189416fu); f_11895ef0();
  /* 1189416f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11894174 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894176 jne 0x118941da */
  if (!C.zf) goto L_118941da;
  /* 11894178 mov esi, esp */
  ESI = (ESP);
  /* 1189417a push 0x118c3410 */
  push32((uint32_t)(0x118c3410u));
  /* 1189417f call dword ptr [0x118c64a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64a4))), 0x11894185u);
  /* 11894185 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894188 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189418a call 0x11895ef0 */
  push32(0x1189418fu); f_11895ef0();
  /* 1189418f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894191 je 0x118941b0 */
  if (C.zf) goto L_118941b0;
  /* 11894193 mov esi, esp */
  ESI = (ESP);
  /* 11894195 push 8 */
  push32((uint32_t)(0x8u));
  /* 11894197 call dword ptr [0x118c6488] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6488))), 0x1189419du);
  /* 1189419d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118941a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118941a2 call 0x11895ef0 */
  push32(0x118941a7u); f_11895ef0();
  /* 118941a7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 118941ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118941ae je 0x118941da */
  if (C.zf) goto L_118941da;
L_118941b0:;
  /* 118941b0 mov esi, esp */
  ESI = (ESP);
  /* 118941b2 push 8 */
  push32((uint32_t)(0x8u));
  /* 118941b4 call dword ptr [0x118c64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64c4))), 0x118941bau);
  /* 118941ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118941bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118941bf call 0x11895ef0 */
  push32(0x118941c4u); f_11895ef0();
  /* 118941c4 mov esi, esp */
  ESI = (ESP);
  /* 118941c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 118941c8 push 4 */
  push32((uint32_t)(0x4u));
  /* 118941ca call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x118941d0u);
  /* 118941d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118941d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118941d5 call 0x11895ef0 */
  push32(0x118941dau); f_11895ef0();
L_118941da:;
  /* 118941da mov esi, esp */
  ESI = (ESP);
  /* 118941dc push 0x118c3480 */
  push32((uint32_t)(0x118c3480u));
  /* 118941e1 call dword ptr [0x118c64a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64a4))), 0x118941e7u);
  /* 118941e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118941ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118941ec call 0x11895ef0 */
  push32(0x118941f1u); f_11895ef0();
  /* 118941f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118941f3 jle 0x118944ca */
  if ((C.zf||C.sf!=C.of)) goto L_118944ca;
  /* 118941f9 mov esi, esp */
  ESI = (ESP);
  /* 118941fb push 0x118c36e8 */
  push32((uint32_t)(0x118c36e8u));
  /* 11894200 call dword ptr [0x118c64a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64a4))), 0x11894206u);
  /* 11894206 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894209 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189420b call 0x11895ef0 */
  push32(0x11894210u); f_11895ef0();
  /* 11894210 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894212 jle 0x118944ca */
  if ((C.zf||C.sf!=C.of)) goto L_118944ca;
  /* 11894218 mov esi, esp */
  ESI = (ESP);
  /* 1189421a push 0xb */
  push32((uint32_t)(0xbu));
  /* 1189421c call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11894222u);
  /* 11894222 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894225 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894227 call 0x11895ef0 */
  push32(0x1189422cu); f_11895ef0();
  /* 1189422c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11894231 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894233 je 0x1189428d */
  if (C.zf) goto L_1189428d;
  /* 11894235 mov esi, esp */
  ESI = (ESP);
  /* 11894237 push 0 */
  push32((uint32_t)(0x0u));
  /* 11894239 push 0xb */
  push32((uint32_t)(0xbu));
  /* 1189423b call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x11894241u);
  /* 11894241 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894244 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894246 call 0x11895ef0 */
  push32(0x1189424bu); f_11895ef0();
  /* 1189424b mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11894252 jmp 0x1189425d */
  goto L_1189425d;
L_11894254:;
  /* 11894254 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11894257 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189425a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1189425d:;
  /* 1189425d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11894260 cmp edx, dword ptr [0x118c3580] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x118c3580))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894266 jge 0x1189428d */
  if ((C.sf==C.of)) goto L_1189428d;
  /* 11894268 mov esi, esp */
  ESI = (ESP);
  /* 1189426a push 0 */
  push32((uint32_t)(0x0u));
  /* 1189426c push 0x118c3428 */
  push32((uint32_t)(0x118c3428u));
  /* 11894271 push 0x118c3630 */
  push32((uint32_t)(0x118c3630u));
  /* 11894276 push 0x118c36e8 */
  push32((uint32_t)(0x118c36e8u));
  /* 1189427b call dword ptr [0x118c64b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64b8))), 0x11894281u);
  /* 11894281 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894284 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894286 call 0x11895ef0 */
  push32(0x1189428bu); f_11895ef0();
  /* 1189428b jmp 0x11894254 */
  goto L_11894254;
L_1189428d:;
  /* 1189428d mov esi, esp */
  ESI = (ESP);
  /* 1189428f push 1 */
  push32((uint32_t)(0x1u));
  /* 11894291 call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11894297u);
  /* 11894297 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189429a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189429c call 0x11895ef0 */
  push32(0x118942a1u); f_11895ef0();
  /* 118942a1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 118942a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118942a8 je 0x118942f6 */
  if (C.zf) goto L_118942f6;
  /* 118942aa mov esi, esp */
  ESI = (ESP);
  /* 118942ac push 0x118c36e8 */
  push32((uint32_t)(0x118c36e8u));
  /* 118942b1 call dword ptr [0x118c64c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64c8))), 0x118942b7u);
  /* 118942b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118942ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118942bc call 0x11895ef0 */
  push32(0x118942c1u); f_11895ef0();
  /* 118942c1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 118942c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118942c8 je 0x118942f6 */
  if (C.zf) goto L_118942f6;
  /* 118942ca mov esi, esp */
  ESI = (ESP);
  /* 118942cc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 118942ce push 4 */
  push32((uint32_t)(0x4u));
  /* 118942d0 call dword ptr [0x118c648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c648c))), 0x118942d6u);
  /* 118942d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118942d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118942db call 0x11895ef0 */
  push32(0x118942e0u); f_11895ef0();
  /* 118942e0 mov esi, esp */
  ESI = (ESP);
  /* 118942e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 118942e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 118942e6 call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x118942ecu);
  /* 118942ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118942ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118942f1 call 0x11895ef0 */
  push32(0x118942f6u); f_11895ef0();
L_118942f6:;
  /* 118942f6 mov esi, esp */
  ESI = (ESP);
  /* 118942f8 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 118942fa call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11894300u);
  /* 11894300 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894303 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894305 call 0x11895ef0 */
  push32(0x1189430au); f_11895ef0();
  /* 1189430a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1189430f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894311 jne 0x1189442e */
  if (!C.zf) goto L_1189442e;
  /* 11894317 mov esi, esp */
  ESI = (ESP);
  /* 11894319 push 7 */
  push32((uint32_t)(0x7u));
  /* 1189431b call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11894321u);
  /* 11894321 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894324 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894326 call 0x11895ef0 */
  push32(0x1189432bu); f_11895ef0();
  /* 1189432b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11894330 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894332 je 0x1189442e */
  if (C.zf) goto L_1189442e;
  /* 11894338 mov esi, esp */
  ESI = (ESP);
  /* 1189433a push 4 */
  push32((uint32_t)(0x4u));
  /* 1189433c call dword ptr [0x118c64cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64cc))), 0x11894342u);
  /* 11894342 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894345 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894347 call 0x11895ef0 */
  push32(0x1189434cu); f_11895ef0();
  /* 1189434c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11894351 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894353 je 0x1189442e */
  if (C.zf) goto L_1189442e;
  /* 11894359 mov esi, esp */
  ESI = (ESP);
  /* 1189435b push 0 */
  push32((uint32_t)(0x0u));
  /* 1189435d push 7 */
  push32((uint32_t)(0x7u));
  /* 1189435f call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x11894365u);
  /* 11894365 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894368 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189436a call 0x11895ef0 */
  push32(0x1189436fu); f_11895ef0();
  /* 1189436f mov esi, esp */
  ESI = (ESP);
  /* 11894371 push 4 */
  push32((uint32_t)(0x4u));
  /* 11894373 call dword ptr [0x118c64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64c4))), 0x11894379u);
  /* 11894379 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189437c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189437e call 0x11895ef0 */
  push32(0x11894383u); f_11895ef0();
  /* 11894383 mov esi, esp */
  ESI = (ESP);
  /* 11894385 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 1189438a push 9 */
  push32((uint32_t)(0x9u));
  /* 1189438c call dword ptr [0x118c648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c648c))), 0x11894392u);
  /* 11894392 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894395 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894397 call 0x11895ef0 */
  push32(0x1189439cu); f_11895ef0();
  /* 1189439c mov esi, esp */
  ESI = (ESP);
  /* 1189439e push 1 */
  push32((uint32_t)(0x1u));
  /* 118943a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 118943a2 call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x118943a8u);
  /* 118943a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118943ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118943ad call 0x11895ef0 */
  push32(0x118943b2u); f_11895ef0();
  /* 118943b2 mov esi, esp */
  ESI = (ESP);
  /* 118943b4 push 0x118c3408 */
  push32((uint32_t)(0x118c3408u));
  /* 118943b9 push 0x118c3428 */
  push32((uint32_t)(0x118c3428u));
  /* 118943be call dword ptr [0x118c64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64d4))), 0x118943c4u);
  /* 118943c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118943c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118943c9 call 0x11895ef0 */
  push32(0x118943ceu); f_11895ef0();
  /* 118943ce mov esi, esp */
  ESI = (ESP);
  /* 118943d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 118943d2 push 0x118c3408 */
  push32((uint32_t)(0x118c3408u));
  /* 118943d7 call dword ptr [0x118c6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6464))), 0x118943ddu);
  /* 118943dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118943e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118943e2 call 0x11895ef0 */
  push32(0x118943e7u); f_11895ef0();
  /* 118943e7 mov esi, esp */
  ESI = (ESP);
  /* 118943e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 118943eb push 0x41 */
  push32((uint32_t)(0x41u));
  /* 118943ed push 0x118c3680 */
  push32((uint32_t)(0x118c3680u));
  /* 118943f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 118943f4 call dword ptr [0x118c64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64d8))), 0x118943fau);
  /* 118943fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118943fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118943ff call 0x11895ef0 */
  push32(0x11894404u); f_11895ef0();
  /* 11894404 mov esi, esp */
  ESI = (ESP);
  /* 11894406 push 2 */
  push32((uint32_t)(0x2u));
  /* 11894408 call dword ptr [0x118c64d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64d0))), 0x1189440eu);
  /* 1189440e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894411 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894413 call 0x11895ef0 */
  push32(0x11894418u); f_11895ef0();
  /* 11894418 mov esi, esp */
  ESI = (ESP);
  /* 1189441a push 1 */
  push32((uint32_t)(0x1u));
  /* 1189441c push 0xb */
  push32((uint32_t)(0xbu));
  /* 1189441e call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x11894424u);
  /* 11894424 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894427 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894429 call 0x11895ef0 */
  push32(0x1189442eu); f_11895ef0();
L_1189442e:;
  /* 1189442e mov esi, esp */
  ESI = (ESP);
  /* 11894430 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11894432 call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11894438u);
  /* 11894438 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189443b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189443d call 0x11895ef0 */
  push32(0x11894442u); f_11895ef0();
  /* 11894442 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11894447 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894449 jne 0x118944ca */
  if (!C.zf) goto L_118944ca;
  /* 1189444b mov esi, esp */
  ESI = (ESP);
  /* 1189444d push 7 */
  push32((uint32_t)(0x7u));
  /* 1189444f call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11894455u);
  /* 11894455 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894458 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189445a call 0x11895ef0 */
  push32(0x1189445fu); f_11895ef0();
  /* 1189445f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11894464 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894466 jne 0x118944ca */
  if (!C.zf) goto L_118944ca;
  /* 11894468 mov esi, esp */
  ESI = (ESP);
  /* 1189446a push 0x118c3408 */
  push32((uint32_t)(0x118c3408u));
  /* 1189446f call dword ptr [0x118c64a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64a4))), 0x11894475u);
  /* 11894475 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894478 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189447a call 0x11895ef0 */
  push32(0x1189447fu); f_11895ef0();
  /* 1189447f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894481 je 0x118944a0 */
  if (C.zf) goto L_118944a0;
  /* 11894483 mov esi, esp */
  ESI = (ESP);
  /* 11894485 push 9 */
  push32((uint32_t)(0x9u));
  /* 11894487 call dword ptr [0x118c6488] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6488))), 0x1189448du);
  /* 1189448d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894490 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894492 call 0x11895ef0 */
  push32(0x11894497u); f_11895ef0();
  /* 11894497 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1189449c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189449e je 0x118944ca */
  if (C.zf) goto L_118944ca;
L_118944a0:;
  /* 118944a0 mov esi, esp */
  ESI = (ESP);
  /* 118944a2 push 9 */
  push32((uint32_t)(0x9u));
  /* 118944a4 call dword ptr [0x118c64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64c4))), 0x118944aau);
  /* 118944aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118944ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118944af call 0x11895ef0 */
  push32(0x118944b4u); f_11895ef0();
  /* 118944b4 mov esi, esp */
  ESI = (ESP);
  /* 118944b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 118944b8 push 7 */
  push32((uint32_t)(0x7u));
  /* 118944ba call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x118944c0u);
  /* 118944c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118944c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118944c5 call 0x11895ef0 */
  push32(0x118944cau); f_11895ef0();
L_118944ca:;
  /* 118944ca mov esi, esp */
  ESI = (ESP);
  /* 118944cc push 0x118c3488 */
  push32((uint32_t)(0x118c3488u));
  /* 118944d1 call dword ptr [0x118c64a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64a4))), 0x118944d7u);
  /* 118944d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118944da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118944dc call 0x11895ef0 */
  push32(0x118944e1u); f_11895ef0();
  /* 118944e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118944e3 jle 0x118947ba */
  if ((C.zf||C.sf!=C.of)) goto L_118947ba;
  /* 118944e9 mov esi, esp */
  ESI = (ESP);
  /* 118944eb push 0x118c3458 */
  push32((uint32_t)(0x118c3458u));
  /* 118944f0 call dword ptr [0x118c64a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64a4))), 0x118944f6u);
  /* 118944f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118944f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118944fb call 0x11895ef0 */
  push32(0x11894500u); f_11895ef0();
  /* 11894500 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894502 jle 0x118947ba */
  if ((C.zf||C.sf!=C.of)) goto L_118947ba;
  /* 11894508 mov esi, esp */
  ESI = (ESP);
  /* 1189450a push 0xd */
  push32((uint32_t)(0xdu));
  /* 1189450c call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11894512u);
  /* 11894512 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894515 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894517 call 0x11895ef0 */
  push32(0x1189451cu); f_11895ef0();
  /* 1189451c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11894521 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894523 je 0x1189457d */
  if (C.zf) goto L_1189457d;
  /* 11894525 mov esi, esp */
  ESI = (ESP);
  /* 11894527 push 0 */
  push32((uint32_t)(0x0u));
  /* 11894529 push 0xd */
  push32((uint32_t)(0xdu));
  /* 1189452b call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x11894531u);
  /* 11894531 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894534 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894536 call 0x11895ef0 */
  push32(0x1189453bu); f_11895ef0();
  /* 1189453b mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11894542 jmp 0x1189454d */
  goto L_1189454d;
L_11894544:;
  /* 11894544 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11894547 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189454a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1189454d:;
  /* 1189454d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11894550 cmp ecx, dword ptr [0x118c35d8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x118c35d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894556 jge 0x1189457d */
  if ((C.sf==C.of)) goto L_1189457d;
  /* 11894558 mov esi, esp */
  ESI = (ESP);
  /* 1189455a push 0 */
  push32((uint32_t)(0x0u));
  /* 1189455c push 0x118c3448 */
  push32((uint32_t)(0x118c3448u));
  /* 11894561 push 0x118c34c0 */
  push32((uint32_t)(0x118c34c0u));
  /* 11894566 push 0x118c3458 */
  push32((uint32_t)(0x118c3458u));
  /* 1189456b call dword ptr [0x118c64b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64b8))), 0x11894571u);
  /* 11894571 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894574 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894576 call 0x11895ef0 */
  push32(0x1189457bu); f_11895ef0();
  /* 1189457b jmp 0x11894544 */
  goto L_11894544;
L_1189457d:;
  /* 1189457d mov esi, esp */
  ESI = (ESP);
  /* 1189457f push 2 */
  push32((uint32_t)(0x2u));
  /* 11894581 call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11894587u);
  /* 11894587 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189458a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189458c call 0x11895ef0 */
  push32(0x11894591u); f_11895ef0();
  /* 11894591 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11894596 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894598 je 0x118945e6 */
  if (C.zf) goto L_118945e6;
  /* 1189459a mov esi, esp */
  ESI = (ESP);
  /* 1189459c push 0x118c3458 */
  push32((uint32_t)(0x118c3458u));
  /* 118945a1 call dword ptr [0x118c64c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64c8))), 0x118945a7u);
  /* 118945a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118945aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118945ac call 0x11895ef0 */
  push32(0x118945b1u); f_11895ef0();
  /* 118945b1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 118945b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118945b8 je 0x118945e6 */
  if (C.zf) goto L_118945e6;
  /* 118945ba mov esi, esp */
  ESI = (ESP);
  /* 118945bc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 118945be push 5 */
  push32((uint32_t)(0x5u));
  /* 118945c0 call dword ptr [0x118c648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c648c))), 0x118945c6u);
  /* 118945c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118945c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118945cb call 0x11895ef0 */
  push32(0x118945d0u); f_11895ef0();
  /* 118945d0 mov esi, esp */
  ESI = (ESP);
  /* 118945d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 118945d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 118945d6 call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x118945dcu);
  /* 118945dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118945df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118945e1 call 0x11895ef0 */
  push32(0x118945e6u); f_11895ef0();
L_118945e6:;
  /* 118945e6 mov esi, esp */
  ESI = (ESP);
  /* 118945e8 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 118945ea call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x118945f0u);
  /* 118945f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118945f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118945f5 call 0x11895ef0 */
  push32(0x118945fau); f_11895ef0();
  /* 118945fa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 118945ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894601 jne 0x1189471e */
  if (!C.zf) goto L_1189471e;
  /* 11894607 mov esi, esp */
  ESI = (ESP);
  /* 11894609 push 8 */
  push32((uint32_t)(0x8u));
  /* 1189460b call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11894611u);
  /* 11894611 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894614 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894616 call 0x11895ef0 */
  push32(0x1189461bu); f_11895ef0();
  /* 1189461b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11894620 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894622 je 0x1189471e */
  if (C.zf) goto L_1189471e;
  /* 11894628 mov esi, esp */
  ESI = (ESP);
  /* 1189462a push 5 */
  push32((uint32_t)(0x5u));
  /* 1189462c call dword ptr [0x118c64cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64cc))), 0x11894632u);
  /* 11894632 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894635 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894637 call 0x11895ef0 */
  push32(0x1189463cu); f_11895ef0();
  /* 1189463c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11894641 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894643 je 0x1189471e */
  if (C.zf) goto L_1189471e;
  /* 11894649 mov esi, esp */
  ESI = (ESP);
  /* 1189464b push 0 */
  push32((uint32_t)(0x0u));
  /* 1189464d push 8 */
  push32((uint32_t)(0x8u));
  /* 1189464f call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x11894655u);
  /* 11894655 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894658 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189465a call 0x11895ef0 */
  push32(0x1189465fu); f_11895ef0();
  /* 1189465f mov esi, esp */
  ESI = (ESP);
  /* 11894661 push 5 */
  push32((uint32_t)(0x5u));
  /* 11894663 call dword ptr [0x118c64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64c4))), 0x11894669u);
  /* 11894669 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189466c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189466e call 0x11895ef0 */
  push32(0x11894673u); f_11895ef0();
  /* 11894673 mov esi, esp */
  ESI = (ESP);
  /* 11894675 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 1189467a push 0xa */
  push32((uint32_t)(0xau));
  /* 1189467c call dword ptr [0x118c648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c648c))), 0x11894682u);
  /* 11894682 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894685 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894687 call 0x11895ef0 */
  push32(0x1189468cu); f_11895ef0();
  /* 1189468c mov esi, esp */
  ESI = (ESP);
  /* 1189468e push 1 */
  push32((uint32_t)(0x1u));
  /* 11894690 push 2 */
  push32((uint32_t)(0x2u));
  /* 11894692 call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x11894698u);
  /* 11894698 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189469b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189469d call 0x11895ef0 */
  push32(0x118946a2u); f_11895ef0();
  /* 118946a2 mov esi, esp */
  ESI = (ESP);
  /* 118946a4 push 0x118c3420 */
  push32((uint32_t)(0x118c3420u));
  /* 118946a9 push 0x118c3448 */
  push32((uint32_t)(0x118c3448u));
  /* 118946ae call dword ptr [0x118c64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64d4))), 0x118946b4u);
  /* 118946b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118946b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118946b9 call 0x11895ef0 */
  push32(0x118946beu); f_11895ef0();
  /* 118946be mov esi, esp */
  ESI = (ESP);
  /* 118946c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 118946c2 push 0x118c3420 */
  push32((uint32_t)(0x118c3420u));
  /* 118946c7 call dword ptr [0x118c6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6464))), 0x118946cdu);
  /* 118946cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118946d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118946d2 call 0x11895ef0 */
  push32(0x118946d7u); f_11895ef0();
  /* 118946d7 mov esi, esp */
  ESI = (ESP);
  /* 118946d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 118946db push 0x41 */
  push32((uint32_t)(0x41u));
  /* 118946dd push 0x118c3680 */
  push32((uint32_t)(0x118c3680u));
  /* 118946e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 118946e4 call dword ptr [0x118c64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64d8))), 0x118946eau);
  /* 118946ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118946ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118946ef call 0x11895ef0 */
  push32(0x118946f4u); f_11895ef0();
  /* 118946f4 mov esi, esp */
  ESI = (ESP);
  /* 118946f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 118946f8 call dword ptr [0x118c64d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64d0))), 0x118946feu);
  /* 118946fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894701 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894703 call 0x11895ef0 */
  push32(0x11894708u); f_11895ef0();
  /* 11894708 mov esi, esp */
  ESI = (ESP);
  /* 1189470a push 1 */
  push32((uint32_t)(0x1u));
  /* 1189470c push 0xd */
  push32((uint32_t)(0xdu));
  /* 1189470e call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x11894714u);
  /* 11894714 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894717 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894719 call 0x11895ef0 */
  push32(0x1189471eu); f_11895ef0();
L_1189471e:;
  /* 1189471e mov esi, esp */
  ESI = (ESP);
  /* 11894720 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11894722 call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11894728u);
  /* 11894728 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189472b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189472d call 0x11895ef0 */
  push32(0x11894732u); f_11895ef0();
  /* 11894732 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11894737 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894739 jne 0x118947ba */
  if (!C.zf) goto L_118947ba;
  /* 1189473b mov esi, esp */
  ESI = (ESP);
  /* 1189473d push 8 */
  push32((uint32_t)(0x8u));
  /* 1189473f call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11894745u);
  /* 11894745 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894748 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189474a call 0x11895ef0 */
  push32(0x1189474fu); f_11895ef0();
  /* 1189474f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11894754 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894756 jne 0x118947ba */
  if (!C.zf) goto L_118947ba;
  /* 11894758 mov esi, esp */
  ESI = (ESP);
  /* 1189475a push 0x118c3420 */
  push32((uint32_t)(0x118c3420u));
  /* 1189475f call dword ptr [0x118c64a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64a4))), 0x11894765u);
  /* 11894765 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894768 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189476a call 0x11895ef0 */
  push32(0x1189476fu); f_11895ef0();
  /* 1189476f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894771 je 0x11894790 */
  if (C.zf) goto L_11894790;
  /* 11894773 mov esi, esp */
  ESI = (ESP);
  /* 11894775 push 0xa */
  push32((uint32_t)(0xau));
  /* 11894777 call dword ptr [0x118c6488] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6488))), 0x1189477du);
  /* 1189477d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894780 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894782 call 0x11895ef0 */
  push32(0x11894787u); f_11895ef0();
  /* 11894787 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1189478c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189478e je 0x118947ba */
  if (C.zf) goto L_118947ba;
L_11894790:;
  /* 11894790 mov esi, esp */
  ESI = (ESP);
  /* 11894792 push 0xa */
  push32((uint32_t)(0xau));
  /* 11894794 call dword ptr [0x118c64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64c4))), 0x1189479au);
  /* 1189479a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189479d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189479f call 0x11895ef0 */
  push32(0x118947a4u); f_11895ef0();
  /* 118947a4 mov esi, esp */
  ESI = (ESP);
  /* 118947a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 118947a8 push 8 */
  push32((uint32_t)(0x8u));
  /* 118947aa call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x118947b0u);
  /* 118947b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118947b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118947b5 call 0x11895ef0 */
  push32(0x118947bau); f_11895ef0();
L_118947ba:;
  /* 118947ba mov esi, esp */
  ESI = (ESP);
  /* 118947bc push 0x118c3488 */
  push32((uint32_t)(0x118c3488u));
  /* 118947c1 call dword ptr [0x118c64a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64a4))), 0x118947c7u);
  /* 118947c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118947ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118947cc call 0x11895ef0 */
  push32(0x118947d1u); f_11895ef0();
  /* 118947d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118947d3 jle 0x11894aaa */
  if ((C.zf||C.sf!=C.of)) goto L_11894aaa;
  /* 118947d9 mov esi, esp */
  ESI = (ESP);
  /* 118947db push 0x118c3460 */
  push32((uint32_t)(0x118c3460u));
  /* 118947e0 call dword ptr [0x118c64a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64a4))), 0x118947e6u);
  /* 118947e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118947e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118947eb call 0x11895ef0 */
  push32(0x118947f0u); f_11895ef0();
  /* 118947f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118947f2 jle 0x11894aaa */
  if ((C.zf||C.sf!=C.of)) goto L_11894aaa;
  /* 118947f8 mov esi, esp */
  ESI = (ESP);
  /* 118947fa push 0xe */
  push32((uint32_t)(0xeu));
  /* 118947fc call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11894802u);
  /* 11894802 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894805 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894807 call 0x11895ef0 */
  push32(0x1189480cu); f_11895ef0();
  /* 1189480c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11894811 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894813 je 0x1189486d */
  if (C.zf) goto L_1189486d;
  /* 11894815 mov esi, esp */
  ESI = (ESP);
  /* 11894817 push 0 */
  push32((uint32_t)(0x0u));
  /* 11894819 push 0xe */
  push32((uint32_t)(0xeu));
  /* 1189481b call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x11894821u);
  /* 11894821 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894824 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894826 call 0x11895ef0 */
  push32(0x1189482bu); f_11895ef0();
  /* 1189482b mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11894832 jmp 0x1189483d */
  goto L_1189483d;
L_11894834:;
  /* 11894834 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11894837 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189483a mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1189483d:;
  /* 1189483d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11894840 cmp eax, dword ptr [0x118c3628] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118c3628))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894846 jge 0x1189486d */
  if ((C.sf==C.of)) goto L_1189486d;
  /* 11894848 mov esi, esp */
  ESI = (ESP);
  /* 1189484a push 0 */
  push32((uint32_t)(0x0u));
  /* 1189484c push 0x118c3438 */
  push32((uint32_t)(0x118c3438u));
  /* 11894851 push 0x118c3450 */
  push32((uint32_t)(0x118c3450u));
  /* 11894856 push 0x118c3460 */
  push32((uint32_t)(0x118c3460u));
  /* 1189485b call dword ptr [0x118c64b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64b8))), 0x11894861u);
  /* 11894861 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894864 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894866 call 0x11895ef0 */
  push32(0x1189486bu); f_11895ef0();
  /* 1189486b jmp 0x11894834 */
  goto L_11894834;
L_1189486d:;
  /* 1189486d mov esi, esp */
  ESI = (ESP);
  /* 1189486f push 3 */
  push32((uint32_t)(0x3u));
  /* 11894871 call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11894877u);
  /* 11894877 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189487a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189487c call 0x11895ef0 */
  push32(0x11894881u); f_11895ef0();
  /* 11894881 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11894886 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894888 je 0x118948d6 */
  if (C.zf) goto L_118948d6;
  /* 1189488a mov esi, esp */
  ESI = (ESP);
  /* 1189488c push 0x118c3460 */
  push32((uint32_t)(0x118c3460u));
  /* 11894891 call dword ptr [0x118c64c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64c8))), 0x11894897u);
  /* 11894897 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189489a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189489c call 0x11895ef0 */
  push32(0x118948a1u); f_11895ef0();
  /* 118948a1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 118948a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118948a8 je 0x118948d6 */
  if (C.zf) goto L_118948d6;
  /* 118948aa mov esi, esp */
  ESI = (ESP);
  /* 118948ac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 118948ae push 6 */
  push32((uint32_t)(0x6u));
  /* 118948b0 call dword ptr [0x118c648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c648c))), 0x118948b6u);
  /* 118948b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118948b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118948bb call 0x11895ef0 */
  push32(0x118948c0u); f_11895ef0();
  /* 118948c0 mov esi, esp */
  ESI = (ESP);
  /* 118948c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 118948c4 push 3 */
  push32((uint32_t)(0x3u));
  /* 118948c6 call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x118948ccu);
  /* 118948cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118948cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118948d1 call 0x11895ef0 */
  push32(0x118948d6u); f_11895ef0();
L_118948d6:;
  /* 118948d6 mov esi, esp */
  ESI = (ESP);
  /* 118948d8 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 118948da call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x118948e0u);
  /* 118948e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118948e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118948e5 call 0x11895ef0 */
  push32(0x118948eau); f_11895ef0();
  /* 118948ea and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 118948ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118948f1 jne 0x11894a0e */
  if (!C.zf) goto L_11894a0e;
  /* 118948f7 mov esi, esp */
  ESI = (ESP);
  /* 118948f9 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 118948fb call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11894901u);
  /* 11894901 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894904 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894906 call 0x11895ef0 */
  push32(0x1189490bu); f_11895ef0();
  /* 1189490b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11894910 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894912 je 0x11894a0e */
  if (C.zf) goto L_11894a0e;
  /* 11894918 mov esi, esp */
  ESI = (ESP);
  /* 1189491a push 6 */
  push32((uint32_t)(0x6u));
  /* 1189491c call dword ptr [0x118c64cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64cc))), 0x11894922u);
  /* 11894922 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894925 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894927 call 0x11895ef0 */
  push32(0x1189492cu); f_11895ef0();
  /* 1189492c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11894931 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894933 je 0x11894a0e */
  if (C.zf) goto L_11894a0e;
  /* 11894939 mov esi, esp */
  ESI = (ESP);
  /* 1189493b push 0 */
  push32((uint32_t)(0x0u));
  /* 1189493d push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1189493f call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x11894945u);
  /* 11894945 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894948 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189494a call 0x11895ef0 */
  push32(0x1189494fu); f_11895ef0();
  /* 1189494f mov esi, esp */
  ESI = (ESP);
  /* 11894951 push 6 */
  push32((uint32_t)(0x6u));
  /* 11894953 call dword ptr [0x118c64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64c4))), 0x11894959u);
  /* 11894959 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189495c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189495e call 0x11895ef0 */
  push32(0x11894963u); f_11895ef0();
  /* 11894963 mov esi, esp */
  ESI = (ESP);
  /* 11894965 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 1189496a push 0xb */
  push32((uint32_t)(0xbu));
  /* 1189496c call dword ptr [0x118c648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c648c))), 0x11894972u);
  /* 11894972 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894975 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894977 call 0x11895ef0 */
  push32(0x1189497cu); f_11895ef0();
  /* 1189497c mov esi, esp */
  ESI = (ESP);
  /* 1189497e push 1 */
  push32((uint32_t)(0x1u));
  /* 11894980 push 3 */
  push32((uint32_t)(0x3u));
  /* 11894982 call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x11894988u);
  /* 11894988 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189498b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189498d call 0x11895ef0 */
  push32(0x11894992u); f_11895ef0();
  /* 11894992 mov esi, esp */
  ESI = (ESP);
  /* 11894994 push 0x118c3528 */
  push32((uint32_t)(0x118c3528u));
  /* 11894999 push 0x118c3438 */
  push32((uint32_t)(0x118c3438u));
  /* 1189499e call dword ptr [0x118c64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64d4))), 0x118949a4u);
  /* 118949a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118949a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118949a9 call 0x11895ef0 */
  push32(0x118949aeu); f_11895ef0();
  /* 118949ae mov esi, esp */
  ESI = (ESP);
  /* 118949b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 118949b2 push 0x118c3528 */
  push32((uint32_t)(0x118c3528u));
  /* 118949b7 call dword ptr [0x118c6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6464))), 0x118949bdu);
  /* 118949bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118949c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118949c2 call 0x11895ef0 */
  push32(0x118949c7u); f_11895ef0();
  /* 118949c7 mov esi, esp */
  ESI = (ESP);
  /* 118949c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 118949cb push 0xa */
  push32((uint32_t)(0xau));
  /* 118949cd push 0x118c3670 */
  push32((uint32_t)(0x118c3670u));
  /* 118949d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 118949d4 call dword ptr [0x118c64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64d8))), 0x118949dau);
  /* 118949da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118949dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118949df call 0x11895ef0 */
  push32(0x118949e4u); f_11895ef0();
  /* 118949e4 mov esi, esp */
  ESI = (ESP);
  /* 118949e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 118949e8 call dword ptr [0x118c64d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64d0))), 0x118949eeu);
  /* 118949ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118949f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118949f3 call 0x11895ef0 */
  push32(0x118949f8u); f_11895ef0();
  /* 118949f8 mov esi, esp */
  ESI = (ESP);
  /* 118949fa push 1 */
  push32((uint32_t)(0x1u));
  /* 118949fc push 0xe */
  push32((uint32_t)(0xeu));
  /* 118949fe call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x11894a04u);
  /* 11894a04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894a07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894a09 call 0x11895ef0 */
  push32(0x11894a0eu); f_11895ef0();
L_11894a0e:;
  /* 11894a0e mov esi, esp */
  ESI = (ESP);
  /* 11894a10 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11894a12 call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11894a18u);
  /* 11894a18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894a1b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894a1d call 0x11895ef0 */
  push32(0x11894a22u); f_11895ef0();
  /* 11894a22 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11894a27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894a29 jne 0x11894aaa */
  if (!C.zf) goto L_11894aaa;
  /* 11894a2b mov esi, esp */
  ESI = (ESP);
  /* 11894a2d push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11894a2f call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11894a35u);
  /* 11894a35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894a38 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894a3a call 0x11895ef0 */
  push32(0x11894a3fu); f_11895ef0();
  /* 11894a3f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11894a44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894a46 jne 0x11894aaa */
  if (!C.zf) goto L_11894aaa;
  /* 11894a48 mov esi, esp */
  ESI = (ESP);
  /* 11894a4a push 0x118c3528 */
  push32((uint32_t)(0x118c3528u));
  /* 11894a4f call dword ptr [0x118c64a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64a4))), 0x11894a55u);
  /* 11894a55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894a58 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894a5a call 0x11895ef0 */
  push32(0x11894a5fu); f_11895ef0();
  /* 11894a5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894a61 je 0x11894a80 */
  if (C.zf) goto L_11894a80;
  /* 11894a63 mov esi, esp */
  ESI = (ESP);
  /* 11894a65 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11894a67 call dword ptr [0x118c6488] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6488))), 0x11894a6du);
  /* 11894a6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894a70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894a72 call 0x11895ef0 */
  push32(0x11894a77u); f_11895ef0();
  /* 11894a77 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11894a7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894a7e je 0x11894aaa */
  if (C.zf) goto L_11894aaa;
L_11894a80:;
  /* 11894a80 mov esi, esp */
  ESI = (ESP);
  /* 11894a82 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11894a84 call dword ptr [0x118c64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64c4))), 0x11894a8au);
  /* 11894a8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894a8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894a8f call 0x11895ef0 */
  push32(0x11894a94u); f_11895ef0();
  /* 11894a94 mov esi, esp */
  ESI = (ESP);
  /* 11894a96 push 1 */
  push32((uint32_t)(0x1u));
  /* 11894a98 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11894a9a call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x11894aa0u);
  /* 11894aa0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894aa3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894aa5 call 0x11895ef0 */
  push32(0x11894aaau); f_11895ef0();
L_11894aaa:;
  /* 11894aaa mov esi, esp */
  ESI = (ESP);
  /* 11894aac push 0x118c3490 */
  push32((uint32_t)(0x118c3490u));
  /* 11894ab1 call dword ptr [0x118c64a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64a4))), 0x11894ab7u);
  /* 11894ab7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894aba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894abc call 0x11895ef0 */
  push32(0x11894ac1u); f_11895ef0();
  /* 11894ac1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894ac3 jle 0x11894f80 */
  if ((C.zf||C.sf!=C.of)) goto L_11894f80;
  /* 11894ac9 mov esi, esp */
  ESI = (ESP);
  /* 11894acb push 0x118c3468 */
  push32((uint32_t)(0x118c3468u));
  /* 11894ad0 call dword ptr [0x118c64a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64a4))), 0x11894ad6u);
  /* 11894ad6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894ad9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894adb call 0x11895ef0 */
  push32(0x11894ae0u); f_11895ef0();
  /* 11894ae0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894ae2 jg 0x11894b03 */
  if ((!C.zf&&C.sf==C.of)) goto L_11894b03;
  /* 11894ae4 mov esi, esp */
  ESI = (ESP);
  /* 11894ae6 push 0x118c3470 */
  push32((uint32_t)(0x118c3470u));
  /* 11894aeb call dword ptr [0x118c64a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64a4))), 0x11894af1u);
  /* 11894af1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894af4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894af6 call 0x11895ef0 */
  push32(0x11894afbu); f_11895ef0();
  /* 11894afb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894afd jle 0x11894f80 */
  if ((C.zf||C.sf!=C.of)) goto L_11894f80;
L_11894b03:;
  /* 11894b03 mov esi, esp */
  ESI = (ESP);
  /* 11894b05 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11894b07 call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11894b0du);
  /* 11894b0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894b10 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894b12 call 0x11895ef0 */
  push32(0x11894b17u); f_11895ef0();
  /* 11894b17 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11894b1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894b1e je 0x11894bbe */
  if (C.zf) goto L_11894bbe;
  /* 11894b24 mov esi, esp */
  ESI = (ESP);
  /* 11894b26 push 0 */
  push32((uint32_t)(0x0u));
  /* 11894b28 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11894b2a call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x11894b30u);
  /* 11894b30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894b33 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894b35 call 0x11895ef0 */
  push32(0x11894b3au); f_11895ef0();
  /* 11894b3a mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11894b41 jmp 0x11894b4c */
  goto L_11894b4c;
L_11894b43:;
  /* 11894b43 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11894b46 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11894b49 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11894b4c:;
  /* 11894b4c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11894b4f cmp edx, dword ptr [0x118c3640] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x118c3640))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894b55 jge 0x11894b7c */
  if ((C.sf==C.of)) goto L_11894b7c;
  /* 11894b57 mov esi, esp */
  ESI = (ESP);
  /* 11894b59 push 0 */
  push32((uint32_t)(0x0u));
  /* 11894b5b push 0x118c3400 */
  push32((uint32_t)(0x118c3400u));
  /* 11894b60 push 0x118c3450 */
  push32((uint32_t)(0x118c3450u));
  /* 11894b65 push 0x118c3468 */
  push32((uint32_t)(0x118c3468u));
  /* 11894b6a call dword ptr [0x118c64b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64b8))), 0x11894b70u);
  /* 11894b70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894b73 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894b75 call 0x11895ef0 */
  push32(0x11894b7au); f_11895ef0();
  /* 11894b7a jmp 0x11894b43 */
  goto L_11894b43;
L_11894b7c:;
  /* 11894b7c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11894b83 jmp 0x11894b8e */
  goto L_11894b8e;
L_11894b85:;
  /* 11894b85 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11894b88 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11894b8b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11894b8e:;
  /* 11894b8e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11894b91 cmp ecx, dword ptr [0x118c3660] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x118c3660))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894b97 jge 0x11894bbe */
  if ((C.sf==C.of)) goto L_11894bbe;
  /* 11894b99 mov esi, esp */
  ESI = (ESP);
  /* 11894b9b push 0 */
  push32((uint32_t)(0x0u));
  /* 11894b9d push 0x118c33f8 */
  push32((uint32_t)(0x118c33f8u));
  /* 11894ba2 push 0x118c36a8 */
  push32((uint32_t)(0x118c36a8u));
  /* 11894ba7 push 0x118c3470 */
  push32((uint32_t)(0x118c3470u));
  /* 11894bac call dword ptr [0x118c64b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64b8))), 0x11894bb2u);
  /* 11894bb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894bb5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894bb7 call 0x11895ef0 */
  push32(0x11894bbcu); f_11895ef0();
  /* 11894bbc jmp 0x11894b85 */
  goto L_11894b85;
L_11894bbe:;
  /* 11894bbe mov esi, esp */
  ESI = (ESP);
  /* 11894bc0 push 0x118c3468 */
  push32((uint32_t)(0x118c3468u));
  /* 11894bc5 call dword ptr [0x118c64a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64a4))), 0x11894bcbu);
  /* 11894bcb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894bce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894bd0 call 0x11895ef0 */
  push32(0x11894bd5u); f_11895ef0();
  /* 11894bd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894bd7 jle 0x11894c85 */
  if ((C.zf||C.sf!=C.of)) goto L_11894c85;
  /* 11894bdd mov esi, esp */
  ESI = (ESP);
  /* 11894bdf push 0x118c3470 */
  push32((uint32_t)(0x118c3470u));
  /* 11894be4 call dword ptr [0x118c64a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64a4))), 0x11894beau);
  /* 11894bea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894bed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894bef call 0x11895ef0 */
  push32(0x11894bf4u); f_11895ef0();
  /* 11894bf4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894bf6 jle 0x11894c85 */
  if ((C.zf||C.sf!=C.of)) goto L_11894c85;
  /* 11894bfc mov esi, esp */
  ESI = (ESP);
  /* 11894bfe push 5 */
  push32((uint32_t)(0x5u));
  /* 11894c00 call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11894c06u);
  /* 11894c06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894c09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894c0b call 0x11895ef0 */
  push32(0x11894c10u); f_11895ef0();
  /* 11894c10 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11894c15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894c17 je 0x11894c85 */
  if (C.zf) goto L_11894c85;
  /* 11894c19 mov esi, esp */
  ESI = (ESP);
  /* 11894c1b push 0x118c3468 */
  push32((uint32_t)(0x118c3468u));
  /* 11894c20 call dword ptr [0x118c64c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64c8))), 0x11894c26u);
  /* 11894c26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894c29 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894c2b call 0x11895ef0 */
  push32(0x11894c30u); f_11895ef0();
  /* 11894c30 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11894c35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894c37 je 0x11894c85 */
  if (C.zf) goto L_11894c85;
  /* 11894c39 mov esi, esp */
  ESI = (ESP);
  /* 11894c3b push 0x118c3470 */
  push32((uint32_t)(0x118c3470u));
  /* 11894c40 call dword ptr [0x118c64c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64c8))), 0x11894c46u);
  /* 11894c46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894c49 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894c4b call 0x11895ef0 */
  push32(0x11894c50u); f_11895ef0();
  /* 11894c50 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11894c55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894c57 je 0x11894c85 */
  if (C.zf) goto L_11894c85;
  /* 11894c59 mov esi, esp */
  ESI = (ESP);
  /* 11894c5b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11894c5d push 7 */
  push32((uint32_t)(0x7u));
  /* 11894c5f call dword ptr [0x118c648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c648c))), 0x11894c65u);
  /* 11894c65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894c68 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894c6a call 0x11895ef0 */
  push32(0x11894c6fu); f_11895ef0();
  /* 11894c6f mov esi, esp */
  ESI = (ESP);
  /* 11894c71 push 0 */
  push32((uint32_t)(0x0u));
  /* 11894c73 push 5 */
  push32((uint32_t)(0x5u));
  /* 11894c75 call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x11894c7bu);
  /* 11894c7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894c7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894c80 call 0x11895ef0 */
  push32(0x11894c85u); f_11895ef0();
L_11894c85:;
  /* 11894c85 mov esi, esp */
  ESI = (ESP);
  /* 11894c87 push 0x118c3468 */
  push32((uint32_t)(0x118c3468u));
  /* 11894c8c call dword ptr [0x118c64a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64a4))), 0x11894c92u);
  /* 11894c92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894c95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894c97 call 0x11895ef0 */
  push32(0x11894c9cu); f_11895ef0();
  /* 11894c9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894c9e jne 0x11894d09 */
  if (!C.zf) goto L_11894d09;
  /* 11894ca0 mov esi, esp */
  ESI = (ESP);
  /* 11894ca2 push 5 */
  push32((uint32_t)(0x5u));
  /* 11894ca4 call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11894caau);
  /* 11894caa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894cad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894caf call 0x11895ef0 */
  push32(0x11894cb4u); f_11895ef0();
  /* 11894cb4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11894cb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894cbb je 0x11894d09 */
  if (C.zf) goto L_11894d09;
  /* 11894cbd mov esi, esp */
  ESI = (ESP);
  /* 11894cbf push 0x118c3470 */
  push32((uint32_t)(0x118c3470u));
  /* 11894cc4 call dword ptr [0x118c64c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64c8))), 0x11894ccau);
  /* 11894cca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894ccd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894ccf call 0x11895ef0 */
  push32(0x11894cd4u); f_11895ef0();
  /* 11894cd4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11894cd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894cdb je 0x11894d09 */
  if (C.zf) goto L_11894d09;
  /* 11894cdd mov esi, esp */
  ESI = (ESP);
  /* 11894cdf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11894ce1 push 7 */
  push32((uint32_t)(0x7u));
  /* 11894ce3 call dword ptr [0x118c648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c648c))), 0x11894ce9u);
  /* 11894ce9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894cec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894cee call 0x11895ef0 */
  push32(0x11894cf3u); f_11895ef0();
  /* 11894cf3 mov esi, esp */
  ESI = (ESP);
  /* 11894cf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11894cf7 push 5 */
  push32((uint32_t)(0x5u));
  /* 11894cf9 call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x11894cffu);
  /* 11894cff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894d02 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894d04 call 0x11895ef0 */
  push32(0x11894d09u); f_11895ef0();
L_11894d09:;
  /* 11894d09 mov esi, esp */
  ESI = (ESP);
  /* 11894d0b push 0x118c3470 */
  push32((uint32_t)(0x118c3470u));
  /* 11894d10 call dword ptr [0x118c64a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64a4))), 0x11894d16u);
  /* 11894d16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894d19 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894d1b call 0x11895ef0 */
  push32(0x11894d20u); f_11895ef0();
  /* 11894d20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894d22 jne 0x11894d8d */
  if (!C.zf) goto L_11894d8d;
  /* 11894d24 mov esi, esp */
  ESI = (ESP);
  /* 11894d26 push 5 */
  push32((uint32_t)(0x5u));
  /* 11894d28 call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11894d2eu);
  /* 11894d2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894d31 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894d33 call 0x11895ef0 */
  push32(0x11894d38u); f_11895ef0();
  /* 11894d38 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11894d3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894d3f je 0x11894d8d */
  if (C.zf) goto L_11894d8d;
  /* 11894d41 mov esi, esp */
  ESI = (ESP);
  /* 11894d43 push 0x118c3468 */
  push32((uint32_t)(0x118c3468u));
  /* 11894d48 call dword ptr [0x118c64c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64c8))), 0x11894d4eu);
  /* 11894d4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894d51 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894d53 call 0x11895ef0 */
  push32(0x11894d58u); f_11895ef0();
  /* 11894d58 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11894d5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894d5f je 0x11894d8d */
  if (C.zf) goto L_11894d8d;
  /* 11894d61 mov esi, esp */
  ESI = (ESP);
  /* 11894d63 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11894d65 push 7 */
  push32((uint32_t)(0x7u));
  /* 11894d67 call dword ptr [0x118c648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c648c))), 0x11894d6du);
  /* 11894d6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894d70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894d72 call 0x11895ef0 */
  push32(0x11894d77u); f_11895ef0();
  /* 11894d77 mov esi, esp */
  ESI = (ESP);
  /* 11894d79 push 0 */
  push32((uint32_t)(0x0u));
  /* 11894d7b push 5 */
  push32((uint32_t)(0x5u));
  /* 11894d7d call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x11894d83u);
  /* 11894d83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894d86 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894d88 call 0x11895ef0 */
  push32(0x11894d8du); f_11895ef0();
L_11894d8d:;
  /* 11894d8d mov esi, esp */
  ESI = (ESP);
  /* 11894d8f push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11894d91 call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11894d97u);
  /* 11894d97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894d9a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894d9c call 0x11895ef0 */
  push32(0x11894da1u); f_11895ef0();
  /* 11894da1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11894da6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894da8 jne 0x11894ee4 */
  if (!C.zf) goto L_11894ee4;
  /* 11894dae mov esi, esp */
  ESI = (ESP);
  /* 11894db0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11894db2 call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11894db8u);
  /* 11894db8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894dbb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894dbd call 0x11895ef0 */
  push32(0x11894dc2u); f_11895ef0();
  /* 11894dc2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11894dc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894dc9 je 0x11894ee4 */
  if (C.zf) goto L_11894ee4;
  /* 11894dcf mov esi, esp */
  ESI = (ESP);
  /* 11894dd1 push 7 */
  push32((uint32_t)(0x7u));
  /* 11894dd3 call dword ptr [0x118c64cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64cc))), 0x11894dd9u);
  /* 11894dd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894ddc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894dde call 0x11895ef0 */
  push32(0x11894de3u); f_11895ef0();
  /* 11894de3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11894de8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894dea je 0x11894ee4 */
  if (C.zf) goto L_11894ee4;
  /* 11894df0 mov esi, esp */
  ESI = (ESP);
  /* 11894df2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11894df4 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11894df6 call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x11894dfcu);
  /* 11894dfc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894dff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894e01 call 0x11895ef0 */
  push32(0x11894e06u); f_11895ef0();
  /* 11894e06 mov esi, esp */
  ESI = (ESP);
  /* 11894e08 push 7 */
  push32((uint32_t)(0x7u));
  /* 11894e0a call dword ptr [0x118c64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64c4))), 0x11894e10u);
  /* 11894e10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894e13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894e15 call 0x11895ef0 */
  push32(0x11894e1au); f_11895ef0();
  /* 11894e1a mov esi, esp */
  ESI = (ESP);
  /* 11894e1c push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 11894e21 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11894e23 call dword ptr [0x118c648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c648c))), 0x11894e29u);
  /* 11894e29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894e2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894e2e call 0x11895ef0 */
  push32(0x11894e33u); f_11895ef0();
  /* 11894e33 mov esi, esp */
  ESI = (ESP);
  /* 11894e35 push 1 */
  push32((uint32_t)(0x1u));
  /* 11894e37 push 5 */
  push32((uint32_t)(0x5u));
  /* 11894e39 call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x11894e3fu);
  /* 11894e3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894e42 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894e44 call 0x11895ef0 */
  push32(0x11894e49u); f_11895ef0();
  /* 11894e49 mov esi, esp */
  ESI = (ESP);
  /* 11894e4b push 0x118c3520 */
  push32((uint32_t)(0x118c3520u));
  /* 11894e50 push 0x118c3400 */
  push32((uint32_t)(0x118c3400u));
  /* 11894e55 call dword ptr [0x118c64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64d4))), 0x11894e5bu);
  /* 11894e5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894e5e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894e60 call 0x11895ef0 */
  push32(0x11894e65u); f_11895ef0();
  /* 11894e65 mov esi, esp */
  ESI = (ESP);
  /* 11894e67 push 0x118c3520 */
  push32((uint32_t)(0x118c3520u));
  /* 11894e6c push 0x118c33f8 */
  push32((uint32_t)(0x118c33f8u));
  /* 11894e71 call dword ptr [0x118c64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64d4))), 0x11894e77u);
  /* 11894e77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894e7a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894e7c call 0x11895ef0 */
  push32(0x11894e81u); f_11895ef0();
  /* 11894e81 mov esi, esp */
  ESI = (ESP);
  /* 11894e83 push 0 */
  push32((uint32_t)(0x0u));
  /* 11894e85 push 0x118c3520 */
  push32((uint32_t)(0x118c3520u));
  /* 11894e8a call dword ptr [0x118c6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6464))), 0x11894e90u);
  /* 11894e90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894e93 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894e95 call 0x11895ef0 */
  push32(0x11894e9au); f_11895ef0();
  /* 11894e9a mov esi, esp */
  ESI = (ESP);
  /* 11894e9c push 0 */
  push32((uint32_t)(0x0u));
  /* 11894e9e push 0xaa */
  push32((uint32_t)(0xaau));
  /* 11894ea3 push 0x118c3678 */
  push32((uint32_t)(0x118c3678u));
  /* 11894ea8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11894eaa call dword ptr [0x118c64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64d8))), 0x11894eb0u);
  /* 11894eb0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894eb3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894eb5 call 0x11895ef0 */
  push32(0x11894ebau); f_11895ef0();
  /* 11894eba mov esi, esp */
  ESI = (ESP);
  /* 11894ebc push 2 */
  push32((uint32_t)(0x2u));
  /* 11894ebe call dword ptr [0x118c64d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64d0))), 0x11894ec4u);
  /* 11894ec4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894ec7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894ec9 call 0x11895ef0 */
  push32(0x11894eceu); f_11895ef0();
  /* 11894ece mov esi, esp */
  ESI = (ESP);
  /* 11894ed0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11894ed2 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11894ed4 call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x11894edau);
  /* 11894eda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894edd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894edf call 0x11895ef0 */
  push32(0x11894ee4u); f_11895ef0();
L_11894ee4:;
  /* 11894ee4 mov esi, esp */
  ESI = (ESP);
  /* 11894ee6 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11894ee8 call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11894eeeu);
  /* 11894eee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894ef1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894ef3 call 0x11895ef0 */
  push32(0x11894ef8u); f_11895ef0();
  /* 11894ef8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11894efd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894eff jne 0x11894f80 */
  if (!C.zf) goto L_11894f80;
  /* 11894f01 mov esi, esp */
  ESI = (ESP);
  /* 11894f03 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11894f05 call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11894f0bu);
  /* 11894f0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894f0e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894f10 call 0x11895ef0 */
  push32(0x11894f15u); f_11895ef0();
  /* 11894f15 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11894f1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894f1c jne 0x11894f80 */
  if (!C.zf) goto L_11894f80;
  /* 11894f1e mov esi, esp */
  ESI = (ESP);
  /* 11894f20 push 0x118c3520 */
  push32((uint32_t)(0x118c3520u));
  /* 11894f25 call dword ptr [0x118c64a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64a4))), 0x11894f2bu);
  /* 11894f2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894f2e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894f30 call 0x11895ef0 */
  push32(0x11894f35u); f_11895ef0();
  /* 11894f35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894f37 je 0x11894f56 */
  if (C.zf) goto L_11894f56;
  /* 11894f39 mov esi, esp */
  ESI = (ESP);
  /* 11894f3b push 0xc */
  push32((uint32_t)(0xcu));
  /* 11894f3d call dword ptr [0x118c6488] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6488))), 0x11894f43u);
  /* 11894f43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894f46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894f48 call 0x11895ef0 */
  push32(0x11894f4du); f_11895ef0();
  /* 11894f4d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11894f52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894f54 je 0x11894f80 */
  if (C.zf) goto L_11894f80;
L_11894f56:;
  /* 11894f56 mov esi, esp */
  ESI = (ESP);
  /* 11894f58 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11894f5a call dword ptr [0x118c64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64c4))), 0x11894f60u);
  /* 11894f60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894f63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894f65 call 0x11895ef0 */
  push32(0x11894f6au); f_11895ef0();
  /* 11894f6a mov esi, esp */
  ESI = (ESP);
  /* 11894f6c push 1 */
  push32((uint32_t)(0x1u));
  /* 11894f6e push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11894f70 call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x11894f76u);
  /* 11894f76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894f79 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894f7b call 0x11895ef0 */
  push32(0x11894f80u); f_11895ef0();
L_11894f80:;
  /* 11894f80 mov esi, esp */
  ESI = (ESP);
  /* 11894f82 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11894f84 call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11894f8au);
  /* 11894f8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894f8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894f8f call 0x11895ef0 */
  push32(0x11894f94u); f_11895ef0();
  /* 11894f94 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11894f99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894f9b je 0x1189500d */
  if (C.zf) goto L_1189500d;
  /* 11894f9d mov esi, esp */
  ESI = (ESP);
  /* 11894f9f push 0x118c36b0 */
  push32((uint32_t)(0x118c36b0u));
  /* 11894fa4 call dword ptr [0x118c64a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64a4))), 0x11894faau);
  /* 11894faa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894fad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894faf call 0x11895ef0 */
  push32(0x11894fb4u); f_11895ef0();
  /* 11894fb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11894fb6 jne 0x1189500d */
  if (!C.zf) goto L_1189500d;
  /* 11894fb8 mov esi, esp */
  ESI = (ESP);
  /* 11894fba push 0 */
  push32((uint32_t)(0x0u));
  /* 11894fbc push 0xc */
  push32((uint32_t)(0xcu));
  /* 11894fbe call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x11894fc4u);
  /* 11894fc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894fc7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894fc9 call 0x11895ef0 */
  push32(0x11894fceu); f_11895ef0();
  /* 11894fce mov esi, esp */
  ESI = (ESP);
  /* 11894fd0 push 0x118be354 */
  push32((uint32_t)(0x118be354u));
  /* 11894fd5 call dword ptr [0x118c6498] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6498))), 0x11894fdbu);
  /* 11894fdb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894fde cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894fe0 call 0x11895ef0 */
  push32(0x11894fe5u); f_11895ef0();
  /* 11894fe5 mov esi, esp */
  ESI = (ESP);
  /* 11894fe7 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11894fe9 call dword ptr [0x118c6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6460))), 0x11894fefu);
  /* 11894fef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11894ff2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11894ff4 call 0x11895ef0 */
  push32(0x11894ff9u); f_11895ef0();
  /* 11894ff9 mov esi, esp */
  ESI = (ESP);
  /* 11894ffb push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11894ffd call dword ptr [0x118c645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c645c))), 0x11895003u);
  /* 11895003 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11895006 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11895008 call 0x11895ef0 */
  push32(0x1189500du); f_11895ef0();
L_1189500d:;
  /* 1189500d mov esi, esp */
  ESI = (ESP);
  /* 1189500f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11895011 call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11895017u);
  /* 11895017 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189501a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189501c call 0x11895ef0 */
  push32(0x11895021u); f_11895ef0();
  /* 11895021 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11895026 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11895028 je 0x118950f6 */
  if (C.zf) goto L_118950f6;
  /* 1189502e mov esi, esp */
  ESI = (ESP);
  /* 11895030 push 0x118c33f0 */
  push32((uint32_t)(0x118c33f0u));
  /* 11895035 call dword ptr [0x118c64a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64a4))), 0x1189503bu);
  /* 1189503b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189503e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11895040 call 0x11895ef0 */
  push32(0x11895045u); f_11895ef0();
  /* 11895045 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11895047 jle 0x118950f6 */
  if ((C.zf||C.sf!=C.of)) goto L_118950f6;
  /* 1189504d mov esi, esp */
  ESI = (ESP);
  /* 1189504f push 0 */
  push32((uint32_t)(0x0u));
  /* 11895051 push 0x118c3658 */
  push32((uint32_t)(0x118c3658u));
  /* 11895056 call dword ptr [0x118c6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6494))), 0x1189505cu);
  /* 1189505c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189505f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11895061 call 0x11895ef0 */
  push32(0x11895066u); f_11895ef0();
  /* 11895066 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11895068 jle 0x118950f6 */
  if ((C.zf||C.sf!=C.of)) goto L_118950f6;
  /* 1189506e mov esi, esp */
  ESI = (ESP);
  /* 11895070 push 0 */
  push32((uint32_t)(0x0u));
  /* 11895072 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11895074 call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x1189507au);
  /* 1189507a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189507d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189507f call 0x11895ef0 */
  push32(0x11895084u); f_11895ef0();
  /* 11895084 mov esi, esp */
  ESI = (ESP);
  /* 11895086 push 0x118be34c */
  push32((uint32_t)(0x118be34cu));
  /* 1189508b call dword ptr [0x118c6498] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6498))), 0x11895091u);
  /* 11895091 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11895094 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11895096 call 0x11895ef0 */
  push32(0x1189509bu); f_11895ef0();
  /* 1189509b mov esi, esp */
  ESI = (ESP);
  /* 1189509d push 0x21 */
  push32((uint32_t)(0x21u));
  /* 1189509f push 5 */
  push32((uint32_t)(0x5u));
  /* 118950a1 call dword ptr [0x118c6504] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6504))), 0x118950a7u);
  /* 118950a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118950aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118950ac call 0x11895ef0 */
  push32(0x118950b1u); f_11895ef0();
  /* 118950b1 mov esi, esp */
  ESI = (ESP);
  /* 118950b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 118950b5 push 0x118c33f0 */
  push32((uint32_t)(0x118c33f0u));
  /* 118950ba call dword ptr [0x118c6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6464))), 0x118950c0u);
  /* 118950c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118950c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118950c5 call 0x11895ef0 */
  push32(0x118950cau); f_11895ef0();
  /* 118950ca mov esi, esp */
  ESI = (ESP);
  /* 118950cc push 0 */
  push32((uint32_t)(0x0u));
  /* 118950ce push 5 */
  push32((uint32_t)(0x5u));
  /* 118950d0 call dword ptr [0x118c64e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64e0))), 0x118950d6u);
  /* 118950d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118950d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118950db call 0x11895ef0 */
  push32(0x118950e0u); f_11895ef0();
  /* 118950e0 mov esi, esp */
  ESI = (ESP);
  /* 118950e2 push 0x26 */
  push32((uint32_t)(0x26u));
  /* 118950e4 push 5 */
  push32((uint32_t)(0x5u));
  /* 118950e6 call dword ptr [0x118c6504] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6504))), 0x118950ecu);
  /* 118950ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118950ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118950f1 call 0x11895ef0 */
  push32(0x118950f6u); f_11895ef0();
L_118950f6:;
  /* 118950f6 mov esi, esp */
  ESI = (ESP);
  /* 118950f8 push 0xf */
  push32((uint32_t)(0xfu));
  /* 118950fa call dword ptr [0x118c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6454))), 0x11895100u);
  /* 11895100 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11895103 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11895105 call 0x11895ef0 */
  push32(0x1189510au); f_11895ef0();
  /* 1189510a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1189510f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11895111 je 0x11895185 */
  if (C.zf) goto L_11895185;
  /* 11895113 mov esi, esp */
  ESI = (ESP);
  /* 11895115 push 1 */
  push32((uint32_t)(0x1u));
  /* 11895117 call dword ptr [0x118c64b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c64b4))), 0x1189511du);
  /* 1189511d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11895120 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11895122 call 0x11895ef0 */
  push32(0x11895127u); f_11895ef0();
  /* 11895127 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1189512c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189512e je 0x11895185 */
  if (C.zf) goto L_11895185;
  /* 11895130 mov esi, esp */
  ESI = (ESP);
  /* 11895132 push 0 */
  push32((uint32_t)(0x0u));
  /* 11895134 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11895136 call dword ptr [0x118c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6450))), 0x1189513cu);
  /* 1189513c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189513f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11895141 call 0x11895ef0 */
  push32(0x11895146u); f_11895ef0();
  /* 11895146 mov esi, esp */
  ESI = (ESP);
  /* 11895148 push 0x118be344 */
  push32((uint32_t)(0x118be344u));
  /* 1189514d call dword ptr [0x118c6498] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6498))), 0x11895153u);
  /* 11895153 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11895156 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11895158 call 0x11895ef0 */
  push32(0x1189515du); f_11895ef0();
  /* 1189515d mov esi, esp */
  ESI = (ESP);
  /* 1189515f push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11895161 call dword ptr [0x118c6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6460))), 0x11895167u);
  /* 11895167 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189516a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189516c call 0x11895ef0 */
  push32(0x11895171u); f_11895ef0();
  /* 11895171 mov esi, esp */
  ESI = (ESP);
  /* 11895173 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11895175 call dword ptr [0x118c645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c645c))), 0x1189517bu);
  /* 1189517b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189517e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11895180 call 0x11895ef0 */
  push32(0x11895185u); f_11895ef0();
L_11895185:;
  /* 11895185 pop edi */
  EDI = (pop32());
  /* 11895186 pop esi */
  ESI = (pop32());
  /* 11895187 pop ebx */
  EBX = (pop32());
  /* 11895188 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189518b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189518d call 0x11895ef0 */
  push32(0x11895192u); f_11895ef0();
  /* 11895192 mov esp, ebp */
  ESP = (EBP);
  /* 11895194 pop ebp */
  EBP = (pop32());
  /* 11895195 ret  */
  ESPCHK(0x11892140u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x11895ef0 (56 bytes, 28 insns) */
void f_11895ef0(void) {
  FTRACE(0x11895ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11895ef0 jne 0x11895ef3 */
  if (!C.zf) goto L_11895ef3;
  /* 11895ef2 ret  */
  ESPCHK(0x11895ef0u, _esp0);
  ESP += 4; return;
L_11895ef3:;
  /* 11895ef3 push ebp */
  push32((uint32_t)(EBP));
  /* 11895ef4 mov ebp, esp */
  EBP = (ESP);
  /* 11895ef6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11895ef9 push eax */
  push32((uint32_t)(EAX));
  /* 11895efa push edx */
  push32((uint32_t)(EDX));
  /* 11895efb push ebx */
  push32((uint32_t)(EBX));
  /* 11895efc push esi */
  push32((uint32_t)(ESI));
  /* 11895efd push edi */
  push32((uint32_t)(EDI));
  /* 11895efe push 0x118bec88 */
  push32((uint32_t)(0x118bec88u));
  /* 11895f03 push 0x118bec84 */
  push32((uint32_t)(0x118bec84u));
  /* 11895f08 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11895f0a push 0x118bec74 */
  push32((uint32_t)(0x118bec74u));
  /* 11895f0f push 1 */
  push32((uint32_t)(0x1u));
  /* 11895f11 call 0x118962c0 */
  push32(0x11895f16u); f_118962c0();
  /* 11895f16 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11895f19 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11895f1c jne 0x11895f1f */
  if (!C.zf) goto L_11895f1f;
  /* 11895f1e int3  */
  x86_unimpl("int3 @ 0x11895f1e");
L_11895f1f:;
  /* 11895f1f pop edi */
  EDI = (pop32());
  /* 11895f20 pop esi */
  ESI = (pop32());
  /* 11895f21 pop ebx */
  EBX = (pop32());
  /* 11895f22 pop edx */
  EDX = (pop32());
  /* 11895f23 pop eax */
  EAX = (pop32());
  /* 11895f24 mov esp, ebp */
  ESP = (EBP);
  /* 11895f26 pop ebp */
  EBP = (pop32());
  /* 11895f27 ret  */
  ESPCHK(0x11895ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f30 @ 0x11895f30 (313 bytes, 78 insns) */
void f_11895f30(void) {
  FTRACE(0x11895f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11895f30 push ebp */
  push32((uint32_t)(EBP));
  /* 11895f31 mov ebp, esp */
  EBP = (ESP);
  /* 11895f33 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11895f37 jne 0x11895ff7 */
  if (!C.zf) goto L_11895ff7;
  /* 11895f3d call dword ptr [0x118c638c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c638c))), 0x11895f43u);
  /* 11895f43 mov dword ptr [0x118c37b8], eax */
  w32((uint32_t)(0x118c37b8), (EAX));
  /* 11895f48 push 1 */
  push32((uint32_t)(0x1u));
  /* 11895f4a call 0x118999f0 */
  push32(0x11895f4fu); f_118999f0();
  /* 11895f4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11895f52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11895f54 jne 0x11895f5d */
  if (!C.zf) goto L_11895f5d;
  /* 11895f56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11895f58 jmp 0x11896065 */
  goto L_11896065;
L_11895f5d:;
  /* 11895f5d mov eax, dword ptr [0x118c37b8] */
  EAX = (r32((uint32_t)(0x118c37b8)));
  /* 11895f62 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11895f65 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11895f6a mov dword ptr [0x118c37c4], eax */
  w32((uint32_t)(0x118c37c4), (EAX));
  /* 11895f6f mov ecx, dword ptr [0x118c37b8] */
  ECX = (r32((uint32_t)(0x118c37b8)));
  /* 11895f75 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11895f7b mov dword ptr [0x118c37c0], ecx */
  w32((uint32_t)(0x118c37c0), (ECX));
  /* 11895f81 mov edx, dword ptr [0x118c37c0] */
  EDX = (r32((uint32_t)(0x118c37c0)));
  /* 11895f87 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11895f8a add edx, dword ptr [0x118c37c4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x118c37c4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11895f90 mov dword ptr [0x118c37bc], edx */
  w32((uint32_t)(0x118c37bc), (EDX));
  /* 11895f96 mov eax, dword ptr [0x118c37b8] */
  EAX = (r32((uint32_t)(0x118c37b8)));
  /* 11895f9b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11895f9e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11895fa3 mov dword ptr [0x118c37b8], eax */
  w32((uint32_t)(0x118c37b8), (EAX));
  /* 11895fa8 call 0x11896b60 */
  push32(0x11895fadu); f_11896b60();
  /* 11895fad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11895faf jne 0x11895fbd */
  if (!C.zf) goto L_11895fbd;
  /* 11895fb1 call 0x11899a40 */
  push32(0x11895fb6u); f_11899a40();
  /* 11895fb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11895fb8 jmp 0x11896065 */
  goto L_11896065;
L_11895fbd:;
  /* 11895fbd call dword ptr [0x118c6388] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6388))), 0x11895fc3u);
  /* 11895fc3 mov dword ptr [0x118c530c], eax */
  w32((uint32_t)(0x118c530c), (EAX));
  /* 11895fc8 call 0x118997d0 */
  push32(0x11895fcdu); f_118997d0();
  /* 11895fcd mov dword ptr [0x118c37a0], eax */
  w32((uint32_t)(0x118c37a0), (EAX));
  /* 11895fd2 call 0x11896e10 */
  push32(0x11895fd7u); f_11896e10();
  /* 11895fd7 call 0x118992c0 */
  push32(0x11895fdcu); f_118992c0();
  /* 11895fdc call 0x11899170 */
  push32(0x11895fe1u); f_11899170();
  /* 11895fe1 call 0x11896960 */
  push32(0x11895fe6u); f_11896960();
  /* 11895fe6 mov ecx, dword ptr [0x118c379c] */
  ECX = (r32((uint32_t)(0x118c379c)));
  /* 11895fec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11895fef mov dword ptr [0x118c379c], ecx */
  w32((uint32_t)(0x118c379c), (ECX));
  /* 11895ff5 jmp 0x11896060 */
  goto L_11896060;
L_11895ff7:;
  /* 11895ff7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11895ffb jne 0x11896050 */
  if (!C.zf) goto L_11896050;
  /* 11895ffd cmp dword ptr [0x118c379c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c379c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896004 jle 0x1189604a */
  if ((C.zf||C.sf!=C.of)) goto L_1189604a;
  /* 11896006 mov edx, dword ptr [0x118c379c] */
  EDX = (r32((uint32_t)(0x118c379c)));
  /* 1189600c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189600f mov dword ptr [0x118c379c], edx */
  w32((uint32_t)(0x118c379c), (EDX));
  /* 11896015 cmp dword ptr [0x118c37f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c37f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189601c jne 0x11896023 */
  if (!C.zf) goto L_11896023;
  /* 1189601e call 0x118969e0 */
  push32(0x11896023u); f_118969e0();
L_11896023:;
  /* 11896023 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11896025 call 0x11898710 */
  push32(0x1189602au); f_11898710();
  /* 1189602a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189602d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11896030 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11896032 je 0x11896039 */
  if (C.zf) goto L_11896039;
  /* 11896034 call 0x11899020 */
  push32(0x11896039u); f_11899020();
L_11896039:;
  /* 11896039 call 0x11897140 */
  push32(0x1189603eu); f_11897140();
  /* 1189603e call 0x11896bf0 */
  push32(0x11896043u); f_11896bf0();
  /* 11896043 call 0x11899a40 */
  push32(0x11896048u); f_11899a40();
  /* 11896048 jmp 0x1189604e */
  goto L_1189604e;
L_1189604a:;
  /* 1189604a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189604c jmp 0x11896065 */
  goto L_11896065;
L_1189604e:;
  /* 1189604e jmp 0x11896060 */
  goto L_11896060;
L_11896050:;
  /* 11896050 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896054 jne 0x11896060 */
  if (!C.zf) goto L_11896060;
  /* 11896056 push 0 */
  push32((uint32_t)(0x0u));
  /* 11896058 call 0x11896ce0 */
  push32(0x1189605du); f_11896ce0();
  /* 1189605d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11896060:;
  /* 11896060 mov eax, 1 */
  EAX = (0x1u);
L_11896065:;
  /* 11896065 pop ebp */
  EBP = (pop32());
  /* 11896066 ret 0xc */
  ESPCHK(0x11895f30u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11896070 (243 bytes, 86 insns) */
void f_11896070(void) {
  FTRACE(0x11896070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11896070 push ebp */
  push32((uint32_t)(EBP));
  /* 11896071 mov ebp, esp */
  EBP = (ESP);
  /* 11896073 push ecx */
  push32((uint32_t)(ECX));
  /* 11896074 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1189607b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189607f jne 0x11896091 */
  if (!C.zf) goto L_11896091;
  /* 11896081 cmp dword ptr [0x118c379c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c379c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896088 jne 0x11896091 */
  if (!C.zf) goto L_11896091;
  /* 1189608a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189608c jmp 0x1189615d */
  goto L_1189615d;
L_11896091:;
  /* 11896091 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896095 je 0x1189609d */
  if (C.zf) goto L_1189609d;
  /* 11896097 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189609b jne 0x118960df */
  if (!C.zf) goto L_118960df;
L_1189609d:;
  /* 1189609d cmp dword ptr [0x118c531c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c531c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118960a4 je 0x118960bb */
  if (C.zf) goto L_118960bb;
  /* 118960a6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118960a9 push eax */
  push32((uint32_t)(EAX));
  /* 118960aa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118960ad push ecx */
  push32((uint32_t)(ECX));
  /* 118960ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118960b1 push edx */
  push32((uint32_t)(EDX));
  /* 118960b2 call dword ptr [0x118c531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c531c))), 0x118960b8u);
  /* 118960b8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_118960bb:;
  /* 118960bb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118960bf je 0x118960d5 */
  if (C.zf) goto L_118960d5;
  /* 118960c1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118960c4 push eax */
  push32((uint32_t)(EAX));
  /* 118960c5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118960c8 push ecx */
  push32((uint32_t)(ECX));
  /* 118960c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118960cc push edx */
  push32((uint32_t)(EDX));
  /* 118960cd call 0x11895f30 */
  push32(0x118960d2u); f_11895f30();
  /* 118960d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_118960d5:;
  /* 118960d5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118960d9 jne 0x118960df */
  if (!C.zf) goto L_118960df;
  /* 118960db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118960dd jmp 0x1189615d */
  goto L_1189615d;
L_118960df:;
  /* 118960df mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118960e2 push eax */
  push32((uint32_t)(EAX));
  /* 118960e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118960e6 push ecx */
  push32((uint32_t)(ECX));
  /* 118960e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118960ea push edx */
  push32((uint32_t)(EDX));
  /* 118960eb call 0x1189100a */
  push32(0x118960f0u); f_1189100a();
  /* 118960f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118960f3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118960f7 jne 0x1189610e */
  if (!C.zf) goto L_1189610e;
  /* 118960f9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118960fd jne 0x1189610e */
  if (!C.zf) goto L_1189610e;
  /* 118960ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11896102 push eax */
  push32((uint32_t)(EAX));
  /* 11896103 push 0 */
  push32((uint32_t)(0x0u));
  /* 11896105 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11896108 push ecx */
  push32((uint32_t)(ECX));
  /* 11896109 call 0x11895f30 */
  push32(0x1189610eu); f_11895f30();
L_1189610e:;
  /* 1189610e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896112 je 0x1189611a */
  if (C.zf) goto L_1189611a;
  /* 11896114 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896118 jne 0x1189615a */
  if (!C.zf) goto L_1189615a;
L_1189611a:;
  /* 1189611a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1189611d push edx */
  push32((uint32_t)(EDX));
  /* 1189611e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11896121 push eax */
  push32((uint32_t)(EAX));
  /* 11896122 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11896125 push ecx */
  push32((uint32_t)(ECX));
  /* 11896126 call 0x11895f30 */
  push32(0x1189612bu); f_11895f30();
  /* 1189612b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189612d jne 0x11896136 */
  if (!C.zf) goto L_11896136;
  /* 1189612f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11896136:;
  /* 11896136 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189613a je 0x1189615a */
  if (C.zf) goto L_1189615a;
  /* 1189613c cmp dword ptr [0x118c531c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c531c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896143 je 0x1189615a */
  if (C.zf) goto L_1189615a;
  /* 11896145 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11896148 push edx */
  push32((uint32_t)(EDX));
  /* 11896149 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189614c push eax */
  push32((uint32_t)(EAX));
  /* 1189614d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11896150 push ecx */
  push32((uint32_t)(ECX));
  /* 11896151 call dword ptr [0x118c531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c531c))), 0x11896157u);
  /* 11896157 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1189615a:;
  /* 1189615a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1189615d:;
  /* 1189615d mov esp, ebp */
  ESP = (EBP);
  /* 1189615f pop ebp */
  EBP = (pop32());
  /* 11896160 ret 0xc */
  ESPCHK(0x11896070u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11896170 (58 bytes, 18 insns) */
void f_11896170(void) {
  FTRACE(0x11896170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11896170 push ebp */
  push32((uint32_t)(EBP));
  /* 11896171 mov ebp, esp */
  EBP = (ESP);
  /* 11896173 cmp dword ptr [0x118c37a8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118c37a8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189617a je 0x1189618e */
  if (C.zf) goto L_1189618e;
  /* 1189617c cmp dword ptr [0x118c37a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c37a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896183 jne 0x11896193 */
  if (!C.zf) goto L_11896193;
  /* 11896185 cmp dword ptr [0x118c37ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118c37ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189618c jne 0x11896193 */
  if (!C.zf) goto L_11896193;
L_1189618e:;
  /* 1189618e call 0x11899ae0 */
  push32(0x11896193u); f_11899ae0();
L_11896193:;
  /* 11896193 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11896196 push eax */
  push32((uint32_t)(EAX));
  /* 11896197 call 0x11899b30 */
  push32(0x1189619cu); f_11899b30();
  /* 1189619c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189619f push 0xff */
  push32((uint32_t)(0xffu));
  /* 118961a4 call dword ptr [0x118c1a30] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c1a30))), 0x118961aau);
  /* 118961aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118961ad pop ebp */
  EBP = (pop32());
  /* 118961ae ret  */
  ESPCHK(0x11896170u, _esp0);
  ESP += 4; return;
}

/* FUN_100061b0 @ 0x118961b0 (11 bytes, 5 insns) */
void f_118961b0(void) {
  FTRACE(0x118961b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118961b0 push ebp */
  push32((uint32_t)(EBP));
  /* 118961b1 mov ebp, esp */
  EBP = (ESP);
  /* 118961b3 call dword ptr [0x118c6390] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6390))), 0x118961b9u);
  /* 118961b9 pop ebp */
  EBP = (pop32());
  /* 118961ba ret  */
  ESPCHK(0x118961b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100061c0 @ 0x118961c0 (87 bytes, 30 insns) */
void f_118961c0(void) {
  FTRACE(0x118961c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118961c0 push ebp */
  push32((uint32_t)(EBP));
  /* 118961c1 mov ebp, esp */
  EBP = (ESP);
  /* 118961c3 push ecx */
  push32((uint32_t)(ECX));
  /* 118961c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118961c8 jl 0x118961d0 */
  if ((C.sf!=C.of)) goto L_118961d0;
  /* 118961ca cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118961ce jl 0x118961d5 */
  if ((C.sf!=C.of)) goto L_118961d5;
L_118961d0:;
  /* 118961d0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118961d3 jmp 0x11896213 */
  goto L_11896213;
L_118961d5:;
  /* 118961d5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118961d9 jne 0x118961e7 */
  if (!C.zf) goto L_118961e7;
  /* 118961db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118961de mov eax, dword ptr [eax*4 + 0x118c1a38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x118c1a38)));
  /* 118961e5 jmp 0x11896213 */
  goto L_11896213;
L_118961e7:;
  /* 118961e7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118961ea and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 118961ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118961ef je 0x118961f6 */
  if (C.zf) goto L_118961f6;
  /* 118961f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118961f4 jmp 0x11896213 */
  goto L_11896213;
L_118961f6:;
  /* 118961f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118961f9 mov eax, dword ptr [edx*4 + 0x118c1a38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x118c1a38)));
  /* 11896200 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11896203 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11896206 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11896209 mov dword ptr [ecx*4 + 0x118c1a38], edx */
  w32((uint32_t)(ECX*4 + 0x118c1a38), (EDX));
  /* 11896210 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11896213:;
  /* 11896213 mov esp, ebp */
  ESP = (EBP);
  /* 11896215 pop ebp */
  EBP = (pop32());
  /* 11896216 ret  */
  ESPCHK(0x118961c0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x11896220 (126 bytes, 38 insns) */
void f_11896220(void) {
  FTRACE(0x11896220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11896220 push ebp */
  push32((uint32_t)(EBP));
  /* 11896221 mov ebp, esp */
  EBP = (ESP);
  /* 11896223 push ecx */
  push32((uint32_t)(ECX));
  /* 11896224 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896228 jl 0x11896230 */
  if ((C.sf!=C.of)) goto L_11896230;
  /* 1189622a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189622e jl 0x11896237 */
  if ((C.sf!=C.of)) goto L_11896237;
L_11896230:;
  /* 11896230 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 11896235 jmp 0x1189629a */
  goto L_1189629a;
L_11896237:;
  /* 11896237 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189623b jne 0x11896249 */
  if (!C.zf) goto L_11896249;
  /* 1189623d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11896240 mov eax, dword ptr [eax*4 + 0x118c1a44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x118c1a44)));
  /* 11896247 jmp 0x1189629a */
  goto L_1189629a;
L_11896249:;
  /* 11896249 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189624c mov edx, dword ptr [ecx*4 + 0x118c1a44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x118c1a44)));
  /* 11896253 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11896256 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189625a jne 0x11896270 */
  if (!C.zf) goto L_11896270;
  /* 1189625c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1189625e call dword ptr [0x118c6394] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6394))), 0x11896264u);
  /* 11896264 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11896267 mov dword ptr [ecx*4 + 0x118c1a44], eax */
  w32((uint32_t)(ECX*4 + 0x118c1a44), (EAX));
  /* 1189626e jmp 0x11896297 */
  goto L_11896297;
L_11896270:;
  /* 11896270 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896274 jne 0x1189628a */
  if (!C.zf) goto L_1189628a;
  /* 11896276 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11896278 call dword ptr [0x118c6394] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6394))), 0x1189627eu);
  /* 1189627e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11896281 mov dword ptr [edx*4 + 0x118c1a44], eax */
  w32((uint32_t)(EDX*4 + 0x118c1a44), (EAX));
  /* 11896288 jmp 0x11896297 */
  goto L_11896297;
L_1189628a:;
  /* 1189628a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189628d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11896290 mov dword ptr [eax*4 + 0x118c1a44], ecx */
  w32((uint32_t)(EAX*4 + 0x118c1a44), (ECX));
L_11896297:;
  /* 11896297 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1189629a:;
  /* 1189629a mov esp, ebp */
  ESP = (EBP);
  /* 1189629c pop ebp */
  EBP = (pop32());
  /* 1189629d ret  */
  ESPCHK(0x11896220u, _esp0);
  ESP += 4; return;
}

/* FUN_100062a0 @ 0x118962a0 (28 bytes, 11 insns) */
void f_118962a0(void) {
  FTRACE(0x118962a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118962a0 push ebp */
  push32((uint32_t)(EBP));
  /* 118962a1 mov ebp, esp */
  EBP = (ESP);
  /* 118962a3 push ecx */
  push32((uint32_t)(ECX));
  /* 118962a4 mov eax, dword ptr [0x118c5300] */
  EAX = (r32((uint32_t)(0x118c5300)));
  /* 118962a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118962ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118962af mov dword ptr [0x118c5300], ecx */
  w32((uint32_t)(0x118c5300), (ECX));
  /* 118962b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118962b8 mov esp, ebp */
  ESP = (EBP);
  /* 118962ba pop ebp */
  EBP = (pop32());
  /* 118962bb ret  */
  ESPCHK(0x118962a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100062c0 @ 0x118962c0 (912 bytes, 248 insns) */
void f_118962c0(void) {
  FTRACE(0x118962c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118962c0 push ebp */
  push32((uint32_t)(EBP));
  /* 118962c1 mov ebp, esp */
  EBP = (ESP);
  /* 118962c3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 118962c8 call 0x1189a3a0 */
  push32(0x118962cdu); f_1189a3a0();
  /* 118962cd push edi */
  push32((uint32_t)(EDI));
  /* 118962ce mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 118962d5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 118962da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118962dc lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 118962e2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 118962e4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 118962e6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 118962e7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 118962ee mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 118962f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118962f5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 118962fb rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 118962fd stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 118962ff stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11896300 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 11896307 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1189630c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189630e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 11896314 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11896316 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11896318 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11896319 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 1189631c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 11896322 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896326 jl 0x1189632e */
  if ((C.sf!=C.of)) goto L_1189632e;
  /* 11896328 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189632c jl 0x11896336 */
  if ((C.sf!=C.of)) goto L_11896336;
L_1189632e:;
  /* 1189632e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11896331 jmp 0x1189664b */
  goto L_1189664b;
L_11896336:;
  /* 11896336 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189633a jne 0x118963e0 */
  if (!C.zf) goto L_118963e0;
  /* 11896340 push 0x118c1a34 */
  push32((uint32_t)(0x118c1a34u));
  /* 11896345 call dword ptr [0x118c63ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63ac))), 0x1189634bu);
  /* 1189634b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189634d jle 0x118963e0 */
  if ((C.zf||C.sf!=C.of)) goto L_118963e0;
  /* 11896353 cmp dword ptr [0x118c37b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c37b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189635a jne 0x1189639e */
  if (!C.zf) goto L_1189639e;
  /* 1189635c push 0x118bee30 */
  push32((uint32_t)(0x118bee30u));
  /* 11896361 call dword ptr [0x118c63a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63a8))), 0x11896367u);
  /* 11896367 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 1189636d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896374 je 0x11896396 */
  if (C.zf) goto L_11896396;
  /* 11896376 push 0x118bee24 */
  push32((uint32_t)(0x118bee24u));
  /* 1189637b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 11896381 push ecx */
  push32((uint32_t)(ECX));
  /* 11896382 call dword ptr [0x118c63a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63a4))), 0x11896388u);
  /* 11896388 mov dword ptr [0x118c37b0], eax */
  w32((uint32_t)(0x118c37b0), (EAX));
  /* 1189638d cmp dword ptr [0x118c37b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c37b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896394 jne 0x1189639e */
  if (!C.zf) goto L_1189639e;
L_11896396:;
  /* 11896396 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11896399 jmp 0x1189664b */
  goto L_1189664b;
L_1189639e:;
  /* 1189639e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118963a1 push edx */
  push32((uint32_t)(EDX));
  /* 118963a2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118963a5 push eax */
  push32((uint32_t)(EAX));
  /* 118963a6 push 0x118bedf0 */
  push32((uint32_t)(0x118bedf0u));
  /* 118963ab lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 118963b1 push ecx */
  push32((uint32_t)(ECX));
  /* 118963b2 call dword ptr [0x118c37b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c37b0))), 0x118963b8u);
  /* 118963b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118963bb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 118963c1 push edx */
  push32((uint32_t)(EDX));
  /* 118963c2 call dword ptr [0x118c63a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63a0))), 0x118963c8u);
  /* 118963c8 push 0x118c1a34 */
  push32((uint32_t)(0x118c1a34u));
  /* 118963cd call dword ptr [0x118c639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c639c))), 0x118963d3u);
  /* 118963d3 call 0x118961b0 */
  push32(0x118963d8u); f_118961b0();
  /* 118963d8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118963db jmp 0x1189664b */
  goto L_1189664b;
L_118963e0:;
  /* 118963e0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118963e4 je 0x1189641d */
  if (C.zf) goto L_1189641d;
  /* 118963e6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 118963ec push eax */
  push32((uint32_t)(EAX));
  /* 118963ed mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 118963f0 push ecx */
  push32((uint32_t)(ECX));
  /* 118963f1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 118963f6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 118963fc push edx */
  push32((uint32_t)(EDX));
  /* 118963fd call 0x1189a2a0 */
  push32(0x11896402u); f_1189a2a0();
  /* 11896402 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11896405 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11896407 jge 0x1189641d */
  if ((C.sf==C.of)) goto L_1189641d;
  /* 11896409 push 0x118bedc4 */
  push32((uint32_t)(0x118bedc4u));
  /* 1189640e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 11896414 push eax */
  push32((uint32_t)(EAX));
  /* 11896415 call 0x1189a1b0 */
  push32(0x1189641au); f_1189a1b0();
  /* 1189641a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1189641d:;
  /* 1189641d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896421 jne 0x11896455 */
  if (!C.zf) goto L_11896455;
  /* 11896423 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896427 je 0x11896435 */
  if (C.zf) goto L_11896435;
  /* 11896429 mov dword ptr [ebp - 0x3028], 0x118bedb0 */
  w32((uint32_t)(EBP + -0x3028), (0x118bedb0u));
  /* 11896433 jmp 0x1189643f */
  goto L_1189643f;
L_11896435:;
  /* 11896435 mov dword ptr [ebp - 0x3028], 0x118bed9c */
  w32((uint32_t)(EBP + -0x3028), (0x118bed9cu));
L_1189643f:;
  /* 1189643f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 11896445 push ecx */
  push32((uint32_t)(ECX));
  /* 11896446 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 1189644c push edx */
  push32((uint32_t)(EDX));
  /* 1189644d call 0x1189a1b0 */
  push32(0x11896452u); f_1189a1b0();
  /* 11896452 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11896455:;
  /* 11896455 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 1189645b push eax */
  push32((uint32_t)(EAX));
  /* 1189645c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 11896462 push ecx */
  push32((uint32_t)(ECX));
  /* 11896463 call 0x1189a1c0 */
  push32(0x11896468u); f_1189a1c0();
  /* 11896468 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189646b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189646f jne 0x118964aa */
  if (!C.zf) goto L_118964aa;
  /* 11896471 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11896474 mov eax, dword ptr [edx*4 + 0x118c1a38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x118c1a38)));
  /* 1189647b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1189647e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11896480 je 0x11896496 */
  if (C.zf) goto L_11896496;
  /* 11896482 push 0x118bed98 */
  push32((uint32_t)(0x118bed98u));
  /* 11896487 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 1189648d push ecx */
  push32((uint32_t)(ECX));
  /* 1189648e call 0x1189a1c0 */
  push32(0x11896493u); f_1189a1c0();
  /* 11896493 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11896496:;
  /* 11896496 push 0x118bed94 */
  push32((uint32_t)(0x118bed94u));
  /* 1189649b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 118964a1 push edx */
  push32((uint32_t)(EDX));
  /* 118964a2 call 0x1189a1c0 */
  push32(0x118964a7u); f_1189a1c0();
  /* 118964a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118964aa:;
  /* 118964aa cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118964ae je 0x118964f2 */
  if (C.zf) goto L_118964f2;
  /* 118964b0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 118964b6 push eax */
  push32((uint32_t)(EAX));
  /* 118964b7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118964ba push ecx */
  push32((uint32_t)(ECX));
  /* 118964bb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118964be push edx */
  push32((uint32_t)(EDX));
  /* 118964bf push 0x118bed88 */
  push32((uint32_t)(0x118bed88u));
  /* 118964c4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 118964c9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 118964cf push eax */
  push32((uint32_t)(EAX));
  /* 118964d0 call 0x1189a0b0 */
  push32(0x118964d5u); f_1189a0b0();
  /* 118964d5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118964d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118964da jge 0x118964f0 */
  if ((C.sf==C.of)) goto L_118964f0;
  /* 118964dc push 0x118bedc4 */
  push32((uint32_t)(0x118bedc4u));
  /* 118964e1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 118964e7 push ecx */
  push32((uint32_t)(ECX));
  /* 118964e8 call 0x1189a1b0 */
  push32(0x118964edu); f_1189a1b0();
  /* 118964ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118964f0:;
  /* 118964f0 jmp 0x11896508 */
  goto L_11896508;
L_118964f2:;
  /* 118964f2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 118964f8 push edx */
  push32((uint32_t)(EDX));
  /* 118964f9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 118964ff push eax */
  push32((uint32_t)(EAX));
  /* 11896500 call 0x1189a1b0 */
  push32(0x11896505u); f_1189a1b0();
  /* 11896505 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11896508:;
  /* 11896508 cmp dword ptr [0x118c5300], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c5300))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189650f je 0x1189654c */
  if (C.zf) goto L_1189654c;
  /* 11896511 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 11896517 push ecx */
  push32((uint32_t)(ECX));
  /* 11896518 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 1189651e push edx */
  push32((uint32_t)(EDX));
  /* 1189651f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11896522 push eax */
  push32((uint32_t)(EAX));
  /* 11896523 call dword ptr [0x118c5300] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c5300))), 0x11896529u);
  /* 11896529 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189652c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189652e je 0x1189654c */
  if (C.zf) goto L_1189654c;
  /* 11896530 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896534 jne 0x11896541 */
  if (!C.zf) goto L_11896541;
  /* 11896536 push 0x118c1a34 */
  push32((uint32_t)(0x118c1a34u));
  /* 1189653b call dword ptr [0x118c639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c639c))), 0x11896541u);
L_11896541:;
  /* 11896541 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11896547 jmp 0x1189664b */
  goto L_1189664b;
L_1189654c:;
  /* 1189654c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189654f mov edx, dword ptr [ecx*4 + 0x118c1a38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x118c1a38)));
  /* 11896556 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11896559 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189655b je 0x1189659b */
  if (C.zf) goto L_1189659b;
  /* 1189655d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11896560 cmp dword ptr [eax*4 + 0x118c1a44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x118c1a44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896568 je 0x1189659b */
  if (C.zf) goto L_1189659b;
  /* 1189656a push 0 */
  push32((uint32_t)(0x0u));
  /* 1189656c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 11896572 push ecx */
  push32((uint32_t)(ECX));
  /* 11896573 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11896579 push edx */
  push32((uint32_t)(EDX));
  /* 1189657a call 0x1189a030 */
  push32(0x1189657fu); f_1189a030();
  /* 1189657f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11896582 push eax */
  push32((uint32_t)(EAX));
  /* 11896583 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11896589 push eax */
  push32((uint32_t)(EAX));
  /* 1189658a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189658d mov edx, dword ptr [ecx*4 + 0x118c1a44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x118c1a44)));
  /* 11896594 push edx */
  push32((uint32_t)(EDX));
  /* 11896595 call dword ptr [0x118c6398] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6398))), 0x1189659bu);
L_1189659b:;
  /* 1189659b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189659e mov ecx, dword ptr [eax*4 + 0x118c1a38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x118c1a38)));
  /* 118965a5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 118965a8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118965aa je 0x118965b9 */
  if (C.zf) goto L_118965b9;
  /* 118965ac lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 118965b2 push edx */
  push32((uint32_t)(EDX));
  /* 118965b3 call dword ptr [0x118c63a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63a0))), 0x118965b9u);
L_118965b9:;
  /* 118965b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118965bc mov ecx, dword ptr [eax*4 + 0x118c1a38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x118c1a38)));
  /* 118965c3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 118965c6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118965c8 je 0x11896638 */
  if (C.zf) goto L_11896638;
  /* 118965ca cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118965ce je 0x118965ed */
  if (C.zf) goto L_118965ed;
  /* 118965d0 push 0xa */
  push32((uint32_t)(0xau));
  /* 118965d2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 118965d8 push edx */
  push32((uint32_t)(EDX));
  /* 118965d9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118965dc push eax */
  push32((uint32_t)(EAX));
  /* 118965dd call 0x11899d40 */
  push32(0x118965e2u); f_11899d40();
  /* 118965e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118965e5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 118965eb jmp 0x118965f7 */
  goto L_118965f7;
L_118965ed:;
  /* 118965ed mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_118965f7:;
  /* 118965f7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 118965fd push ecx */
  push32((uint32_t)(ECX));
  /* 118965fe mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11896601 push edx */
  push32((uint32_t)(EDX));
  /* 11896602 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 11896608 push eax */
  push32((uint32_t)(EAX));
  /* 11896609 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189660c push ecx */
  push32((uint32_t)(ECX));
  /* 1189660d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11896610 push edx */
  push32((uint32_t)(EDX));
  /* 11896611 call 0x11896650 */
  push32(0x11896616u); f_11896650();
  /* 11896616 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11896619 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 1189661f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896623 jne 0x11896630 */
  if (!C.zf) goto L_11896630;
  /* 11896625 push 0x118c1a34 */
  push32((uint32_t)(0x118c1a34u));
  /* 1189662a call dword ptr [0x118c639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c639c))), 0x11896630u);
L_11896630:;
  /* 11896630 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11896636 jmp 0x1189664b */
  goto L_1189664b;
L_11896638:;
  /* 11896638 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189663c jne 0x11896649 */
  if (!C.zf) goto L_11896649;
  /* 1189663e push 0x118c1a34 */
  push32((uint32_t)(0x118c1a34u));
  /* 11896643 call dword ptr [0x118c639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c639c))), 0x11896649u);
L_11896649:;
  /* 11896649 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1189664b:;
  /* 1189664b pop edi */
  EDI = (pop32());
  /* 1189664c mov esp, ebp */
  ESP = (EBP);
  /* 1189664e pop ebp */
  EBP = (pop32());
  /* 1189664f ret  */
  ESPCHK(0x118962c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006650 @ 0x11896650 (780 bytes, 197 insns) */
void f_11896650(void) {
  FTRACE(0x11896650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11896650 push ebp */
  push32((uint32_t)(EBP));
  /* 11896651 mov ebp, esp */
  EBP = (ESP);
  /* 11896653 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 11896658 call 0x1189a3a0 */
  push32(0x1189665du); f_1189a3a0();
L_1189665d:;
  /* 1189665d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896661 jne 0x11896688 */
  if (!C.zf) goto L_11896688;
  /* 11896663 push 0x118bef80 */
  push32((uint32_t)(0x118bef80u));
  /* 11896668 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189666a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 1189666f push 0x118bef74 */
  push32((uint32_t)(0x118bef74u));
  /* 11896674 push 2 */
  push32((uint32_t)(0x2u));
  /* 11896676 call 0x118962c0 */
  push32(0x1189667bu); f_118962c0();
  /* 1189667b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189667e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896681 jne 0x11896688 */
  if (!C.zf) goto L_11896688;
  /* 11896683 call 0x118961b0 */
  push32(0x11896688u); f_118961b0();
L_11896688:;
  /* 11896688 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189668a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189668c jne 0x1189665d */
  if (!C.zf) goto L_1189665d;
  /* 1189668e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11896693 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 11896699 push ecx */
  push32((uint32_t)(ECX));
  /* 1189669a push 0 */
  push32((uint32_t)(0x0u));
  /* 1189669c call dword ptr [0x118c63b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63b0))), 0x118966a2u);
  /* 118966a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118966a4 jne 0x118966ba */
  if (!C.zf) goto L_118966ba;
  /* 118966a6 push 0x118bef5c */
  push32((uint32_t)(0x118bef5cu));
  /* 118966ab lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 118966b1 push edx */
  push32((uint32_t)(EDX));
  /* 118966b2 call 0x1189a1b0 */
  push32(0x118966b7u); f_1189a1b0();
  /* 118966b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118966ba:;
  /* 118966ba lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 118966c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118966c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118966c6 push ecx */
  push32((uint32_t)(ECX));
  /* 118966c7 call 0x1189a030 */
  push32(0x118966ccu); f_1189a030();
  /* 118966cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118966cf cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118966d2 jbe 0x118966fd */
  if ((C.cf||C.zf)) goto L_118966fd;
  /* 118966d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118966d7 push edx */
  push32((uint32_t)(EDX));
  /* 118966d8 call 0x1189a030 */
  push32(0x118966ddu); f_1189a030();
  /* 118966dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118966e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118966e3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 118966e7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 118966ea push 3 */
  push32((uint32_t)(0x3u));
  /* 118966ec push 0x118bef58 */
  push32((uint32_t)(0x118bef58u));
  /* 118966f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118966f4 push eax */
  push32((uint32_t)(EAX));
  /* 118966f5 call 0x1189aa20 */
  push32(0x118966fau); f_1189aa20();
  /* 118966fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118966fd:;
  /* 118966fd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11896700 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 11896706 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189670d je 0x11896758 */
  if (C.zf) goto L_11896758;
  /* 1189670f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11896715 push edx */
  push32((uint32_t)(EDX));
  /* 11896716 call 0x1189a030 */
  push32(0x1189671bu); f_1189a030();
  /* 1189671b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189671e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896721 jbe 0x11896758 */
  if ((C.cf||C.zf)) goto L_11896758;
  /* 11896723 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11896729 push eax */
  push32((uint32_t)(EAX));
  /* 1189672a call 0x1189a030 */
  push32(0x1189672fu); f_1189a030();
  /* 1189672f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11896732 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11896738 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 1189673c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 11896742 push 3 */
  push32((uint32_t)(0x3u));
  /* 11896744 push 0x118bef58 */
  push32((uint32_t)(0x118bef58u));
  /* 11896749 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 1189674f push eax */
  push32((uint32_t)(EAX));
  /* 11896750 call 0x1189aa20 */
  push32(0x11896755u); f_1189aa20();
  /* 11896755 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11896758:;
  /* 11896758 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189675c jne 0x1189676a */
  if (!C.zf) goto L_1189676a;
  /* 1189675e mov dword ptr [ebp - 0x1114], 0x118beee4 */
  w32((uint32_t)(EBP + -0x1114), (0x118beee4u));
  /* 11896768 jmp 0x11896774 */
  goto L_11896774;
L_1189676a:;
  /* 1189676a mov dword ptr [ebp - 0x1114], 0x118bec84 */
  w32((uint32_t)(EBP + -0x1114), (0x118bec84u));
L_11896774:;
  /* 11896774 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11896777 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1189677a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189677c je 0x11896789 */
  if (C.zf) goto L_11896789;
  /* 1189677e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11896781 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 11896787 jmp 0x11896793 */
  goto L_11896793;
L_11896789:;
  /* 11896789 mov dword ptr [ebp - 0x1118], 0x118bec84 */
  w32((uint32_t)(EBP + -0x1118), (0x118bec84u));
L_11896793:;
  /* 11896793 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11896796 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11896799 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189679b je 0x118967af */
  if (C.zf) goto L_118967af;
  /* 1189679d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118967a1 jne 0x118967af */
  if (!C.zf) goto L_118967af;
  /* 118967a3 mov dword ptr [ebp - 0x111c], 0x118beed4 */
  w32((uint32_t)(EBP + -0x111c), (0x118beed4u));
  /* 118967ad jmp 0x118967b9 */
  goto L_118967b9;
L_118967af:;
  /* 118967af mov dword ptr [ebp - 0x111c], 0x118bec84 */
  w32((uint32_t)(EBP + -0x111c), (0x118bec84u));
L_118967b9:;
  /* 118967b9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 118967bc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118967bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118967c1 je 0x118967cf */
  if (C.zf) goto L_118967cf;
  /* 118967c3 mov dword ptr [ebp - 0x1120], 0x118beed0 */
  w32((uint32_t)(EBP + -0x1120), (0x118beed0u));
  /* 118967cd jmp 0x118967d9 */
  goto L_118967d9;
L_118967cf:;
  /* 118967cf mov dword ptr [ebp - 0x1120], 0x118bec84 */
  w32((uint32_t)(EBP + -0x1120), (0x118bec84u));
L_118967d9:;
  /* 118967d9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118967dd je 0x118967ea */
  if (C.zf) goto L_118967ea;
  /* 118967df mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118967e2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 118967e8 jmp 0x118967f4 */
  goto L_118967f4;
L_118967ea:;
  /* 118967ea mov dword ptr [ebp - 0x1124], 0x118bec84 */
  w32((uint32_t)(EBP + -0x1124), (0x118bec84u));
L_118967f4:;
  /* 118967f4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118967f8 je 0x11896806 */
  if (C.zf) goto L_11896806;
  /* 118967fa mov dword ptr [ebp - 0x1128], 0x118beec8 */
  w32((uint32_t)(EBP + -0x1128), (0x118beec8u));
  /* 11896804 jmp 0x11896810 */
  goto L_11896810;
L_11896806:;
  /* 11896806 mov dword ptr [ebp - 0x1128], 0x118bec84 */
  w32((uint32_t)(EBP + -0x1128), (0x118bec84u));
L_11896810:;
  /* 11896810 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896814 je 0x11896821 */
  if (C.zf) goto L_11896821;
  /* 11896816 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11896819 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 1189681f jmp 0x1189682b */
  goto L_1189682b;
L_11896821:;
  /* 11896821 mov dword ptr [ebp - 0x112c], 0x118bec84 */
  w32((uint32_t)(EBP + -0x112c), (0x118bec84u));
L_1189682b:;
  /* 1189682b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189682f je 0x1189683d */
  if (C.zf) goto L_1189683d;
  /* 11896831 mov dword ptr [ebp - 0x1130], 0x118beec0 */
  w32((uint32_t)(EBP + -0x1130), (0x118beec0u));
  /* 1189683b jmp 0x11896847 */
  goto L_11896847;
L_1189683d:;
  /* 1189683d mov dword ptr [ebp - 0x1130], 0x118bec84 */
  w32((uint32_t)(EBP + -0x1130), (0x118bec84u));
L_11896847:;
  /* 11896847 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189684e je 0x1189685e */
  if (C.zf) goto L_1189685e;
  /* 11896850 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11896856 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 1189685c jmp 0x11896868 */
  goto L_11896868;
L_1189685e:;
  /* 1189685e mov dword ptr [ebp - 0x1134], 0x118bec84 */
  w32((uint32_t)(EBP + -0x1134), (0x118bec84u));
L_11896868:;
  /* 11896868 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189686f je 0x1189687d */
  if (C.zf) goto L_1189687d;
  /* 11896871 mov dword ptr [ebp - 0x1138], 0x118beeb4 */
  w32((uint32_t)(EBP + -0x1138), (0x118beeb4u));
  /* 1189687b jmp 0x11896887 */
  goto L_11896887;
L_1189687d:;
  /* 1189687d mov dword ptr [ebp - 0x1138], 0x118bec84 */
  w32((uint32_t)(EBP + -0x1138), (0x118bec84u));
L_11896887:;
  /* 11896887 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 1189688d push edx */
  push32((uint32_t)(EDX));
  /* 1189688e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 11896894 push eax */
  push32((uint32_t)(EAX));
  /* 11896895 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 1189689b push ecx */
  push32((uint32_t)(ECX));
  /* 1189689c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 118968a2 push edx */
  push32((uint32_t)(EDX));
  /* 118968a3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 118968a9 push eax */
  push32((uint32_t)(EAX));
  /* 118968aa mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 118968b0 push ecx */
  push32((uint32_t)(ECX));
  /* 118968b1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 118968b7 push edx */
  push32((uint32_t)(EDX));
  /* 118968b8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 118968be push eax */
  push32((uint32_t)(EAX));
  /* 118968bf mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 118968c5 push ecx */
  push32((uint32_t)(ECX));
  /* 118968c6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 118968cc push edx */
  push32((uint32_t)(EDX));
  /* 118968cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118968d0 push eax */
  push32((uint32_t)(EAX));
  /* 118968d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118968d4 mov edx, dword ptr [ecx*4 + 0x118c1a50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x118c1a50)));
  /* 118968db push edx */
  push32((uint32_t)(EDX));
  /* 118968dc push 0x118bee60 */
  push32((uint32_t)(0x118bee60u));
  /* 118968e1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 118968e6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 118968ec push eax */
  push32((uint32_t)(EAX));
  /* 118968ed call 0x1189a0b0 */
  push32(0x118968f2u); f_1189a0b0();
  /* 118968f2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118968f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118968f7 jge 0x1189690d */
  if ((C.sf==C.of)) goto L_1189690d;
  /* 118968f9 push 0x118bedc4 */
  push32((uint32_t)(0x118bedc4u));
  /* 118968fe lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 11896904 push ecx */
  push32((uint32_t)(ECX));
  /* 11896905 call 0x1189a1b0 */
  push32(0x1189690au); f_1189a1b0();
  /* 1189690a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1189690d:;
  /* 1189690d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 11896912 push 0x118bee3c */
  push32((uint32_t)(0x118bee3cu));
  /* 11896917 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 1189691d push edx */
  push32((uint32_t)(EDX));
  /* 1189691e call 0x1189a960 */
  push32(0x11896923u); f_1189a960();
  /* 11896923 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11896926 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 1189692c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896933 jne 0x11896946 */
  if (!C.zf) goto L_11896946;
  /* 11896935 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11896937 call 0x1189a6a0 */
  push32(0x1189693cu); f_1189a6a0();
  /* 1189693c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189693f push 3 */
  push32((uint32_t)(0x3u));
  /* 11896941 call 0x118969c0 */
  push32(0x11896946u); f_118969c0();
L_11896946:;
  /* 11896946 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189694d jne 0x11896956 */
  if (!C.zf) goto L_11896956;
  /* 1189694f mov eax, 1 */
  EAX = (0x1u);
  /* 11896954 jmp 0x11896958 */
  goto L_11896958;
L_11896956:;
  /* 11896956 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11896958:;
  /* 11896958 mov esp, ebp */
  ESP = (EBP);
  /* 1189695a pop ebp */
  EBP = (pop32());
  /* 1189695b ret  */
  ESPCHK(0x11896650u, _esp0);
  ESP += 4; return;
}

/* FUN_10006960 @ 0x11896960 (56 bytes, 15 insns) */
void f_11896960(void) {
  FTRACE(0x11896960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11896960 push ebp */
  push32((uint32_t)(EBP));
  /* 11896961 mov ebp, esp */
  EBP = (ESP);
  /* 11896963 cmp dword ptr [0x118c52fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c52fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189696a je 0x11896972 */
  if (C.zf) goto L_11896972;
  /* 1189696c call dword ptr [0x118c52fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c52fc))), 0x11896972u);
L_11896972:;
  /* 11896972 push 0x118c1418 */
  push32((uint32_t)(0x118c1418u));
  /* 11896977 push 0x118c1208 */
  push32((uint32_t)(0x118c1208u));
  /* 1189697c call 0x11896b30 */
  push32(0x11896981u); f_11896b30();
  /* 11896981 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11896984 push 0x118c1104 */
  push32((uint32_t)(0x118c1104u));
  /* 11896989 push 0x118c1000 */
  push32((uint32_t)(0x118c1000u));
  /* 1189698e call 0x11896b30 */
  push32(0x11896993u); f_11896b30();
  /* 11896993 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11896996 pop ebp */
  EBP = (pop32());
  /* 11896997 ret  */
  ESPCHK(0x11896960u, _esp0);
  ESP += 4; return;
}

/* FUN_100069a0 @ 0x118969a0 (21 bytes, 10 insns) */
void f_118969a0(void) {
  FTRACE(0x118969a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118969a0 push ebp */
  push32((uint32_t)(EBP));
  /* 118969a1 mov ebp, esp */
  EBP = (ESP);
  /* 118969a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 118969a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 118969a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118969aa push eax */
  push32((uint32_t)(EAX));
  /* 118969ab call 0x11896a20 */
  push32(0x118969b0u); f_11896a20();
  /* 118969b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118969b3 pop ebp */
  EBP = (pop32());
  /* 118969b4 ret  */
  ESPCHK(0x118969a0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x118969c0 (21 bytes, 10 insns) */
void f_118969c0(void) {
  FTRACE(0x118969c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118969c0 push ebp */
  push32((uint32_t)(EBP));
  /* 118969c1 mov ebp, esp */
  EBP = (ESP);
  /* 118969c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 118969c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 118969c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118969ca push eax */
  push32((uint32_t)(EAX));
  /* 118969cb call 0x11896a20 */
  push32(0x118969d0u); f_11896a20();
  /* 118969d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118969d3 pop ebp */
  EBP = (pop32());
  /* 118969d4 ret  */
  ESPCHK(0x118969c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100069e0 @ 0x118969e0 (19 bytes, 9 insns) */
void f_118969e0(void) {
  FTRACE(0x118969e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118969e0 push ebp */
  push32((uint32_t)(EBP));
  /* 118969e1 mov ebp, esp */
  EBP = (ESP);
  /* 118969e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 118969e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 118969e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 118969e9 call 0x11896a20 */
  push32(0x118969eeu); f_11896a20();
  /* 118969ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118969f1 pop ebp */
  EBP = (pop32());
  /* 118969f2 ret  */
  ESPCHK(0x118969e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a00 @ 0x11896a00 (19 bytes, 9 insns) */
void f_11896a00(void) {
  FTRACE(0x11896a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11896a00 push ebp */
  push32((uint32_t)(EBP));
  /* 11896a01 mov ebp, esp */
  EBP = (ESP);
  /* 11896a03 push 1 */
  push32((uint32_t)(0x1u));
  /* 11896a05 push 1 */
  push32((uint32_t)(0x1u));
  /* 11896a07 push 0 */
  push32((uint32_t)(0x0u));
  /* 11896a09 call 0x11896a20 */
  push32(0x11896a0eu); f_11896a20();
  /* 11896a0e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11896a11 pop ebp */
  EBP = (pop32());
  /* 11896a12 ret  */
  ESPCHK(0x11896a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a20 @ 0x11896a20 (227 bytes, 61 insns) */
void f_11896a20(void) {
  FTRACE(0x11896a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11896a20 push ebp */
  push32((uint32_t)(EBP));
  /* 11896a21 mov ebp, esp */
  EBP = (ESP);
  /* 11896a23 push ecx */
  push32((uint32_t)(ECX));
  /* 11896a24 call 0x11896b10 */
  push32(0x11896a29u); f_11896b10();
  /* 11896a29 cmp dword ptr [0x118c37f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118c37f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896a30 jne 0x11896a43 */
  if (!C.zf) goto L_11896a43;
  /* 11896a32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11896a35 push eax */
  push32((uint32_t)(EAX));
  /* 11896a36 call dword ptr [0x118c62d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c62d0))), 0x11896a3cu);
  /* 11896a3c push eax */
  push32((uint32_t)(EAX));
  /* 11896a3d call dword ptr [0x118c62cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c62cc))), 0x11896a43u);
L_11896a43:;
  /* 11896a43 mov dword ptr [0x118c37f0], 1 */
  w32((uint32_t)(0x118c37f0), (0x1u));
  /* 11896a4d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 11896a50 mov byte ptr [0x118c37ec], cl */
  w8((uint32_t)(0x118c37ec), (CL));
  /* 11896a56 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896a5a jne 0x11896aa3 */
  if (!C.zf) goto L_11896aa3;
  /* 11896a5c cmp dword ptr [0x118c52f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c52f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896a63 je 0x11896a91 */
  if (C.zf) goto L_11896a91;
  /* 11896a65 mov edx, dword ptr [0x118c52f4] */
  EDX = (r32((uint32_t)(0x118c52f4)));
  /* 11896a6b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11896a6e:;
  /* 11896a6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11896a71 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11896a74 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11896a77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11896a7a cmp ecx, dword ptr [0x118c52f8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x118c52f8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896a80 jb 0x11896a91 */
  if (C.cf) goto L_11896a91;
  /* 11896a82 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11896a85 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896a88 je 0x11896a8f */
  if (C.zf) goto L_11896a8f;
  /* 11896a8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11896a8d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x11896a8fu);
L_11896a8f:;
  /* 11896a8f jmp 0x11896a6e */
  goto L_11896a6e;
L_11896a91:;
  /* 11896a91 push 0x118c1724 */
  push32((uint32_t)(0x118c1724u));
  /* 11896a96 push 0x118c151c */
  push32((uint32_t)(0x118c151cu));
  /* 11896a9b call 0x11896b30 */
  push32(0x11896aa0u); f_11896b30();
  /* 11896aa0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11896aa3:;
  /* 11896aa3 push 0x118c192c */
  push32((uint32_t)(0x118c192cu));
  /* 11896aa8 push 0x118c1828 */
  push32((uint32_t)(0x118c1828u));
  /* 11896aad call 0x11896b30 */
  push32(0x11896ab2u); f_11896b30();
  /* 11896ab2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11896ab5 cmp dword ptr [0x118c37f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c37f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896abc jne 0x11896ade */
  if (!C.zf) goto L_11896ade;
  /* 11896abe push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11896ac0 call 0x11898710 */
  push32(0x11896ac5u); f_11898710();
  /* 11896ac5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11896ac8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11896acb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11896acd je 0x11896ade */
  if (C.zf) goto L_11896ade;
  /* 11896acf mov dword ptr [0x118c37f8], 1 */
  w32((uint32_t)(0x118c37f8), (0x1u));
  /* 11896ad9 call 0x11899020 */
  push32(0x11896adeu); f_11899020();
L_11896ade:;
  /* 11896ade cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896ae2 je 0x11896aeb */
  if (C.zf) goto L_11896aeb;
  /* 11896ae4 call 0x11896b20 */
  push32(0x11896ae9u); f_11896b20();
  /* 11896ae9 jmp 0x11896aff */
  goto L_11896aff;
L_11896aeb:;
  /* 11896aeb mov dword ptr [0x118c37f4], 1 */
  w32((uint32_t)(0x118c37f4), (0x1u));
  /* 11896af5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11896af8 push ecx */
  push32((uint32_t)(ECX));
  /* 11896af9 call dword ptr [0x118c63b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63b4))), 0x11896affu);
L_11896aff:;
  /* 11896aff mov esp, ebp */
  ESP = (EBP);
  /* 11896b01 pop ebp */
  EBP = (pop32());
  /* 11896b02 ret  */
  ESPCHK(0x11896a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b10 @ 0x11896b10 (15 bytes, 7 insns) */
void f_11896b10(void) {
  FTRACE(0x11896b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11896b10 push ebp */
  push32((uint32_t)(EBP));
  /* 11896b11 mov ebp, esp */
  EBP = (ESP);
  /* 11896b13 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11896b15 call 0x1189ac00 */
  push32(0x11896b1au); f_1189ac00();
  /* 11896b1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11896b1d pop ebp */
  EBP = (pop32());
  /* 11896b1e ret  */
  ESPCHK(0x11896b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b20 @ 0x11896b20 (15 bytes, 7 insns) */
void f_11896b20(void) {
  FTRACE(0x11896b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11896b20 push ebp */
  push32((uint32_t)(EBP));
  /* 11896b21 mov ebp, esp */
  EBP = (ESP);
  /* 11896b23 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11896b25 call 0x1189aca0 */
  push32(0x11896b2au); f_1189aca0();
  /* 11896b2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11896b2d pop ebp */
  EBP = (pop32());
  /* 11896b2e ret  */
  ESPCHK(0x11896b20u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x11896b30 (37 bytes, 16 insns) */
void f_11896b30(void) {
  FTRACE(0x11896b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11896b30 push ebp */
  push32((uint32_t)(EBP));
  /* 11896b31 mov ebp, esp */
  EBP = (ESP);
L_11896b33:;
  /* 11896b33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11896b36 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896b39 jae 0x11896b53 */
  if (!C.cf) goto L_11896b53;
  /* 11896b3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11896b3e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896b41 je 0x11896b48 */
  if (C.zf) goto L_11896b48;
  /* 11896b43 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11896b46 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x11896b48u);
L_11896b48:;
  /* 11896b48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11896b4b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11896b4e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11896b51 jmp 0x11896b33 */
  goto L_11896b33;
L_11896b53:;
  /* 11896b53 pop ebp */
  EBP = (pop32());
  /* 11896b54 ret  */
  ESPCHK(0x11896b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b60 @ 0x11896b60 (130 bytes, 42 insns) */
void f_11896b60(void) {
  FTRACE(0x11896b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11896b60 push ebp */
  push32((uint32_t)(EBP));
  /* 11896b61 mov ebp, esp */
  EBP = (ESP);
  /* 11896b63 push ecx */
  push32((uint32_t)(ECX));
  /* 11896b64 call 0x1189ab20 */
  push32(0x11896b69u); f_1189ab20();
  /* 11896b69 call dword ptr [0x118c63c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63c8))), 0x11896b6fu);
  /* 11896b6f mov dword ptr [0x118c1a5c], eax */
  w32((uint32_t)(0x118c1a5c), (EAX));
  /* 11896b74 cmp dword ptr [0x118c1a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x118c1a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896b7b jne 0x11896b81 */
  if (!C.zf) goto L_11896b81;
  /* 11896b7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11896b7f jmp 0x11896bde */
  goto L_11896bde;
L_11896b81:;
  /* 11896b81 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11896b83 push 0x118bef98 */
  push32((uint32_t)(0x118bef98u));
  /* 11896b88 push 2 */
  push32((uint32_t)(0x2u));
  /* 11896b8a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11896b8c push 1 */
  push32((uint32_t)(0x1u));
  /* 11896b8e call 0x11897610 */
  push32(0x11896b93u); f_11897610();
  /* 11896b93 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11896b96 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11896b99 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896b9d je 0x11896bb4 */
  if (C.zf) goto L_11896bb4;
  /* 11896b9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11896ba2 push eax */
  push32((uint32_t)(EAX));
  /* 11896ba3 mov ecx, dword ptr [0x118c1a5c] */
  ECX = (r32((uint32_t)(0x118c1a5c)));
  /* 11896ba9 push ecx */
  push32((uint32_t)(ECX));
  /* 11896baa call dword ptr [0x118c63c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63c4))), 0x11896bb0u);
  /* 11896bb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11896bb2 jne 0x11896bb8 */
  if (!C.zf) goto L_11896bb8;
L_11896bb4:;
  /* 11896bb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11896bb6 jmp 0x11896bde */
  goto L_11896bde;
L_11896bb8:;
  /* 11896bb8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11896bbb push edx */
  push32((uint32_t)(EDX));
  /* 11896bbc call 0x11896c20 */
  push32(0x11896bc1u); f_11896c20();
  /* 11896bc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11896bc4 call dword ptr [0x118c63c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63c0))), 0x11896bcau);
  /* 11896bca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11896bcd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11896bcf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11896bd2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11896bd9 mov eax, 1 */
  EAX = (0x1u);
L_11896bde:;
  /* 11896bde mov esp, ebp */
  ESP = (EBP);
  /* 11896be0 pop ebp */
  EBP = (pop32());
  /* 11896be1 ret  */
  ESPCHK(0x11896b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bf0 @ 0x11896bf0 (41 bytes, 11 insns) */
void f_11896bf0(void) {
  FTRACE(0x11896bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11896bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11896bf1 mov ebp, esp */
  EBP = (ESP);
  /* 11896bf3 call 0x1189ab60 */
  push32(0x11896bf8u); f_1189ab60();
  /* 11896bf8 cmp dword ptr [0x118c1a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x118c1a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896bff je 0x11896c17 */
  if (C.zf) goto L_11896c17;
  /* 11896c01 mov eax, dword ptr [0x118c1a5c] */
  EAX = (r32((uint32_t)(0x118c1a5c)));
  /* 11896c06 push eax */
  push32((uint32_t)(EAX));
  /* 11896c07 call dword ptr [0x118c63cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63cc))), 0x11896c0du);
  /* 11896c0d mov dword ptr [0x118c1a5c], 0xffffffff */
  w32((uint32_t)(0x118c1a5c), (0xffffffffu));
L_11896c17:;
  /* 11896c17 pop ebp */
  EBP = (pop32());
  /* 11896c18 ret  */
  ESPCHK(0x11896bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c20 @ 0x11896c20 (25 bytes, 8 insns) */
void f_11896c20(void) {
  FTRACE(0x11896c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11896c20 push ebp */
  push32((uint32_t)(EBP));
  /* 11896c21 mov ebp, esp */
  EBP = (ESP);
  /* 11896c23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11896c26 mov dword ptr [eax + 0x50], 0x118c1c00 */
  w32((uint32_t)(EAX + 0x50), (0x118c1c00u));
  /* 11896c2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11896c30 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 11896c37 pop ebp */
  EBP = (pop32());
  /* 11896c38 ret  */
  ESPCHK(0x11896c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c40 @ 0x11896c40 (152 bytes, 48 insns) */
void f_11896c40(void) {
  FTRACE(0x11896c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11896c40 push ebp */
  push32((uint32_t)(EBP));
  /* 11896c41 mov ebp, esp */
  EBP = (ESP);
  /* 11896c43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11896c46 call dword ptr [0x118c63d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63d8))), 0x11896c4cu);
  /* 11896c4c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11896c4f mov eax, dword ptr [0x118c1a5c] */
  EAX = (r32((uint32_t)(0x118c1a5c)));
  /* 11896c54 push eax */
  push32((uint32_t)(EAX));
  /* 11896c55 call dword ptr [0x118c63d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63d4))), 0x11896c5bu);
  /* 11896c5b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11896c5e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896c62 jne 0x11896cc7 */
  if (!C.zf) goto L_11896cc7;
  /* 11896c64 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 11896c69 push 0x118bef98 */
  push32((uint32_t)(0x118bef98u));
  /* 11896c6e push 2 */
  push32((uint32_t)(0x2u));
  /* 11896c70 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11896c72 push 1 */
  push32((uint32_t)(0x1u));
  /* 11896c74 call 0x11897610 */
  push32(0x11896c79u); f_11897610();
  /* 11896c79 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11896c7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11896c7f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896c83 je 0x11896cbd */
  if (C.zf) goto L_11896cbd;
  /* 11896c85 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11896c88 push ecx */
  push32((uint32_t)(ECX));
  /* 11896c89 mov edx, dword ptr [0x118c1a5c] */
  EDX = (r32((uint32_t)(0x118c1a5c)));
  /* 11896c8f push edx */
  push32((uint32_t)(EDX));
  /* 11896c90 call dword ptr [0x118c63c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63c4))), 0x11896c96u);
  /* 11896c96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11896c98 je 0x11896cbd */
  if (C.zf) goto L_11896cbd;
  /* 11896c9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11896c9d push eax */
  push32((uint32_t)(EAX));
  /* 11896c9e call 0x11896c20 */
  push32(0x11896ca3u); f_11896c20();
  /* 11896ca3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11896ca6 call dword ptr [0x118c63c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63c0))), 0x11896cacu);
  /* 11896cac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11896caf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11896cb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11896cb4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11896cbb jmp 0x11896cc7 */
  goto L_11896cc7;
L_11896cbd:;
  /* 11896cbd push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11896cbf call 0x11896170 */
  push32(0x11896cc4u); f_11896170();
  /* 11896cc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11896cc7:;
  /* 11896cc7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11896cca push eax */
  push32((uint32_t)(EAX));
  /* 11896ccb call dword ptr [0x118c63d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63d0))), 0x11896cd1u);
  /* 11896cd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11896cd4 mov esp, ebp */
  ESP = (EBP);
  /* 11896cd6 pop ebp */
  EBP = (pop32());
  /* 11896cd7 ret  */
  ESPCHK(0x11896c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ce0 @ 0x11896ce0 (263 bytes, 86 insns) */
void f_11896ce0(void) {
  FTRACE(0x11896ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11896ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11896ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11896ce3 cmp dword ptr [0x118c1a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x118c1a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896cea je 0x11896de5 */
  if (C.zf) goto L_11896de5;
  /* 11896cf0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896cf4 jne 0x11896d05 */
  if (!C.zf) goto L_11896d05;
  /* 11896cf6 mov eax, dword ptr [0x118c1a5c] */
  EAX = (r32((uint32_t)(0x118c1a5c)));
  /* 11896cfb push eax */
  push32((uint32_t)(EAX));
  /* 11896cfc call dword ptr [0x118c63d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63d4))), 0x11896d02u);
  /* 11896d02 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11896d05:;
  /* 11896d05 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896d09 je 0x11896dd6 */
  if (C.zf) goto L_11896dd6;
  /* 11896d0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11896d12 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896d16 je 0x11896d29 */
  if (C.zf) goto L_11896d29;
  /* 11896d18 push 2 */
  push32((uint32_t)(0x2u));
  /* 11896d1a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11896d1d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 11896d20 push eax */
  push32((uint32_t)(EAX));
  /* 11896d21 call 0x11897c90 */
  push32(0x11896d26u); f_11897c90();
  /* 11896d26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11896d29:;
  /* 11896d29 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11896d2c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896d30 je 0x11896d43 */
  if (C.zf) goto L_11896d43;
  /* 11896d32 push 2 */
  push32((uint32_t)(0x2u));
  /* 11896d34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11896d37 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11896d3a push eax */
  push32((uint32_t)(EAX));
  /* 11896d3b call 0x11897c90 */
  push32(0x11896d40u); f_11897c90();
  /* 11896d40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11896d43:;
  /* 11896d43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11896d46 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896d4a je 0x11896d5d */
  if (C.zf) goto L_11896d5d;
  /* 11896d4c push 2 */
  push32((uint32_t)(0x2u));
  /* 11896d4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11896d51 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 11896d54 push eax */
  push32((uint32_t)(EAX));
  /* 11896d55 call 0x11897c90 */
  push32(0x11896d5au); f_11897c90();
  /* 11896d5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11896d5d:;
  /* 11896d5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11896d60 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896d64 je 0x11896d77 */
  if (C.zf) goto L_11896d77;
  /* 11896d66 push 2 */
  push32((uint32_t)(0x2u));
  /* 11896d68 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11896d6b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 11896d6e push eax */
  push32((uint32_t)(EAX));
  /* 11896d6f call 0x11897c90 */
  push32(0x11896d74u); f_11897c90();
  /* 11896d74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11896d77:;
  /* 11896d77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11896d7a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896d7e je 0x11896d91 */
  if (C.zf) goto L_11896d91;
  /* 11896d80 push 2 */
  push32((uint32_t)(0x2u));
  /* 11896d82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11896d85 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11896d88 push eax */
  push32((uint32_t)(EAX));
  /* 11896d89 call 0x11897c90 */
  push32(0x11896d8eu); f_11897c90();
  /* 11896d8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11896d91:;
  /* 11896d91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11896d94 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896d98 je 0x11896dab */
  if (C.zf) goto L_11896dab;
  /* 11896d9a push 2 */
  push32((uint32_t)(0x2u));
  /* 11896d9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11896d9f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 11896da2 push eax */
  push32((uint32_t)(EAX));
  /* 11896da3 call 0x11897c90 */
  push32(0x11896da8u); f_11897c90();
  /* 11896da8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11896dab:;
  /* 11896dab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11896dae cmp dword ptr [ecx + 0x50], 0x118c1c00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x118c1c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896db5 je 0x11896dc8 */
  if (C.zf) goto L_11896dc8;
  /* 11896db7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11896db9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11896dbc mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11896dbf push eax */
  push32((uint32_t)(EAX));
  /* 11896dc0 call 0x11897c90 */
  push32(0x11896dc5u); f_11897c90();
  /* 11896dc5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11896dc8:;
  /* 11896dc8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11896dca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11896dcd push ecx */
  push32((uint32_t)(ECX));
  /* 11896dce call 0x11897c90 */
  push32(0x11896dd3u); f_11897c90();
  /* 11896dd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11896dd6:;
  /* 11896dd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11896dd8 mov edx, dword ptr [0x118c1a5c] */
  EDX = (r32((uint32_t)(0x118c1a5c)));
  /* 11896dde push edx */
  push32((uint32_t)(EDX));
  /* 11896ddf call dword ptr [0x118c63c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63c4))), 0x11896de5u);
L_11896de5:;
  /* 11896de5 pop ebp */
  EBP = (pop32());
  /* 11896de6 ret  */
  ESPCHK(0x11896ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006df0 @ 0x11896df0 (11 bytes, 5 insns) */
void f_11896df0(void) {
  FTRACE(0x11896df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11896df0 push ebp */
  push32((uint32_t)(EBP));
  /* 11896df1 mov ebp, esp */
  EBP = (ESP);
  /* 11896df3 call dword ptr [0x118c63c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63c0))), 0x11896df9u);
  /* 11896df9 pop ebp */
  EBP = (pop32());
  /* 11896dfa ret  */
  ESPCHK(0x11896df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e00 @ 0x11896e00 (11 bytes, 5 insns) */
void f_11896e00(void) {
  FTRACE(0x11896e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11896e00 push ebp */
  push32((uint32_t)(EBP));
  /* 11896e01 mov ebp, esp */
  EBP = (ESP);
  /* 11896e03 call dword ptr [0x118c63dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63dc))), 0x11896e09u);
  /* 11896e09 pop ebp */
  EBP = (pop32());
  /* 11896e0a ret  */
  ESPCHK(0x11896e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e10 @ 0x11896e10 (804 bytes, 236 insns) */
void f_11896e10(void) {
  FTRACE(0x11896e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11896e10 push ebp */
  push32((uint32_t)(EBP));
  /* 11896e11 mov ebp, esp */
  EBP = (ESP);
  /* 11896e13 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11896e16 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 11896e1b push 0x118befa4 */
  push32((uint32_t)(0x118befa4u));
  /* 11896e20 push 2 */
  push32((uint32_t)(0x2u));
  /* 11896e22 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11896e27 call 0x11897200 */
  push32(0x11896e2cu); f_11897200();
  /* 11896e2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11896e2f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11896e32 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896e36 jne 0x11896e42 */
  if (!C.zf) goto L_11896e42;
  /* 11896e38 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11896e3a call 0x11896170 */
  push32(0x11896e3fu); f_11896170();
  /* 11896e3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11896e42:;
  /* 11896e42 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11896e45 mov dword ptr [0x118c51a0], eax */
  w32((uint32_t)(0x118c51a0), (EAX));
  /* 11896e4a mov dword ptr [0x118c52dc], 0x20 */
  w32((uint32_t)(0x118c52dc), (0x20u));
  /* 11896e54 jmp 0x11896e5f */
  goto L_11896e5f;
L_11896e56:;
  /* 11896e56 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11896e59 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11896e5c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_11896e5f:;
  /* 11896e5f mov edx, dword ptr [0x118c51a0] */
  EDX = (r32((uint32_t)(0x118c51a0)));
  /* 11896e65 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11896e6b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896e6e jae 0x11896e93 */
  if (!C.cf) goto L_11896e93;
  /* 11896e70 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11896e73 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11896e77 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11896e7a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11896e80 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11896e83 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11896e87 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11896e8a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11896e91 jmp 0x11896e56 */
  goto L_11896e56;
L_11896e93:;
  /* 11896e93 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 11896e96 push ecx */
  push32((uint32_t)(ECX));
  /* 11896e97 call dword ptr [0x118c63e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63e8))), 0x11896e9du);
  /* 11896e9d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 11896ea0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11896ea6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11896ea8 je 0x11897035 */
  if (C.zf) goto L_11897035;
  /* 11896eae cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896eb2 je 0x11897035 */
  if (C.zf) goto L_11897035;
  /* 11896eb8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11896ebb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11896ebd mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 11896ec0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11896ec3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11896ec6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11896ec9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11896ecc add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11896ecf mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 11896ed2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896ed9 jge 0x11896ee3 */
  if ((C.sf==C.of)) goto L_11896ee3;
  /* 11896edb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 11896ede mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11896ee1 jmp 0x11896eea */
  goto L_11896eea;
L_11896ee3:;
  /* 11896ee3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_11896eea:;
  /* 11896eea mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11896eed mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11896ef0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 11896ef7 jmp 0x11896f02 */
  goto L_11896f02;
L_11896ef9:;
  /* 11896ef9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11896efc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11896eff mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_11896f02:;
  /* 11896f02 mov ecx, dword ptr [0x118c52dc] */
  ECX = (r32((uint32_t)(0x118c52dc)));
  /* 11896f08 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896f0b jge 0x11896fa2 */
  if ((C.sf==C.of)) goto L_11896fa2;
  /* 11896f11 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11896f16 push 0x118befa4 */
  push32((uint32_t)(0x118befa4u));
  /* 11896f1b push 2 */
  push32((uint32_t)(0x2u));
  /* 11896f1d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11896f22 call 0x11897200 */
  push32(0x11896f27u); f_11897200();
  /* 11896f27 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11896f2a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11896f2d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896f31 jne 0x11896f3e */
  if (!C.zf) goto L_11896f3e;
  /* 11896f33 mov edx, dword ptr [0x118c52dc] */
  EDX = (r32((uint32_t)(0x118c52dc)));
  /* 11896f39 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11896f3c jmp 0x11896fa2 */
  goto L_11896fa2;
L_11896f3e:;
  /* 11896f3e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11896f41 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11896f44 mov dword ptr [eax*4 + 0x118c51a0], ecx */
  w32((uint32_t)(EAX*4 + 0x118c51a0), (ECX));
  /* 11896f4b mov edx, dword ptr [0x118c52dc] */
  EDX = (r32((uint32_t)(0x118c52dc)));
  /* 11896f51 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11896f54 mov dword ptr [0x118c52dc], edx */
  w32((uint32_t)(0x118c52dc), (EDX));
  /* 11896f5a jmp 0x11896f65 */
  goto L_11896f65;
L_11896f5c:;
  /* 11896f5c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11896f5f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11896f62 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_11896f65:;
  /* 11896f65 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11896f68 mov edx, dword ptr [ecx*4 + 0x118c51a0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x118c51a0)));
  /* 11896f6f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11896f75 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896f78 jae 0x11896f9d */
  if (!C.cf) goto L_11896f9d;
  /* 11896f7a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11896f7d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11896f81 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11896f84 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11896f8a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11896f8d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11896f91 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11896f94 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11896f9b jmp 0x11896f5c */
  goto L_11896f5c;
L_11896f9d:;
  /* 11896f9d jmp 0x11896ef9 */
  goto L_11896ef9;
L_11896fa2:;
  /* 11896fa2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11896fa9 jmp 0x11896fc6 */
  goto L_11896fc6;
L_11896fab:;
  /* 11896fab mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11896fae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11896fb1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 11896fb4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11896fb7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11896fba mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11896fbd mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 11896fc0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11896fc3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_11896fc6:;
  /* 11896fc6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11896fc9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896fcc jge 0x11897035 */
  if ((C.sf==C.of)) goto L_11897035;
  /* 11896fce mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 11896fd1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11896fd4 je 0x11897030 */
  if (C.zf) goto L_11897030;
  /* 11896fd6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11896fd9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11896fdc and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11896fdf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11896fe1 je 0x11897030 */
  if (C.zf) goto L_11897030;
  /* 11896fe3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11896fe6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11896fe9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11896fec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11896fee jne 0x11897000 */
  if (!C.zf) goto L_11897000;
  /* 11896ff0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11896ff3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11896ff5 push edx */
  push32((uint32_t)(EDX));
  /* 11896ff6 call dword ptr [0x118c63e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63e4))), 0x11896ffcu);
  /* 11896ffc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11896ffe je 0x11897030 */
  if (C.zf) goto L_11897030;
L_11897000:;
  /* 11897000 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11897003 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11897006 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11897009 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1189700c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1189700f mov edx, dword ptr [eax*4 + 0x118c51a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x118c51a0)));
  /* 11897016 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11897018 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 1189701b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1189701e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11897021 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11897023 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11897025 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11897028 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189702b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1189702d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_11897030:;
  /* 11897030 jmp 0x11896fab */
  goto L_11896fab;
L_11897035:;
  /* 11897035 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 1189703c jmp 0x11897047 */
  goto L_11897047;
L_1189703e:;
  /* 1189703e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11897041 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11897044 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_11897047:;
  /* 11897047 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189704b jge 0x11897124 */
  if ((C.sf==C.of)) goto L_11897124;
  /* 11897051 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11897054 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11897057 mov edx, dword ptr [0x118c51a0] */
  EDX = (r32((uint32_t)(0x118c51a0)));
  /* 1189705d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189705f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 11897062 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11897065 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897068 jne 0x11897110 */
  if (!C.zf) goto L_11897110;
  /* 1189706e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11897071 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 11897075 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897079 jne 0x11897084 */
  if (!C.zf) goto L_11897084;
  /* 1189707b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 11897082 jmp 0x11897094 */
  goto L_11897094;
L_11897084:;
  /* 11897084 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 11897087 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189708a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1189708c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189708e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11897091 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_11897094:;
  /* 11897094 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11897097 push eax */
  push32((uint32_t)(EAX));
  /* 11897098 call dword ptr [0x118c6394] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6394))), 0x1189709eu);
  /* 1189709e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 118970a1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118970a5 je 0x118970ff */
  if (C.zf) goto L_118970ff;
  /* 118970a7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 118970aa push ecx */
  push32((uint32_t)(ECX));
  /* 118970ab call dword ptr [0x118c63e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63e4))), 0x118970b1u);
  /* 118970b1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 118970b4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118970b8 je 0x118970ff */
  if (C.zf) goto L_118970ff;
  /* 118970ba mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 118970bd mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 118970c0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 118970c2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 118970c5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 118970cb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118970ce jne 0x118970e0 */
  if (!C.zf) goto L_118970e0;
  /* 118970d0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 118970d3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 118970d6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 118970d8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 118970db mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 118970de jmp 0x118970fd */
  goto L_118970fd;
L_118970e0:;
  /* 118970e0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 118970e3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 118970e9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118970ec jne 0x118970fd */
  if (!C.zf) goto L_118970fd;
  /* 118970ee mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 118970f1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 118970f4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 118970f7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 118970fa mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_118970fd:;
  /* 118970fd jmp 0x1189710e */
  goto L_1189710e;
L_118970ff:;
  /* 118970ff mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11897102 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11897105 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11897108 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1189710b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1189710e:;
  /* 1189710e jmp 0x1189711f */
  goto L_1189711f;
L_11897110:;
  /* 11897110 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11897113 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11897116 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 11897119 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1189711c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1189711f:;
  /* 1189711f jmp 0x1189703e */
  goto L_1189703e;
L_11897124:;
  /* 11897124 mov eax, dword ptr [0x118c52dc] */
  EAX = (r32((uint32_t)(0x118c52dc)));
  /* 11897129 push eax */
  push32((uint32_t)(EAX));
  /* 1189712a call dword ptr [0x118c63e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63e0))), 0x11897130u);
  /* 11897130 mov esp, ebp */
  ESP = (EBP);
  /* 11897132 pop ebp */
  EBP = (pop32());
  /* 11897133 ret  */
  ESPCHK(0x11896e10u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x11897140 (155 bytes, 45 insns) */
void f_11897140(void) {
  FTRACE(0x11897140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11897140 push ebp */
  push32((uint32_t)(EBP));
  /* 11897141 mov ebp, esp */
  EBP = (ESP);
  /* 11897143 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11897146 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1189714d jmp 0x11897158 */
  goto L_11897158;
L_1189714f:;
  /* 1189714f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11897152 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11897155 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11897158:;
  /* 11897158 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189715c jge 0x118971d7 */
  if ((C.sf==C.of)) goto L_118971d7;
  /* 1189715e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11897161 cmp dword ptr [ecx*4 + 0x118c51a0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x118c51a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897169 je 0x118971d2 */
  if (C.zf) goto L_118971d2;
  /* 1189716b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189716e mov eax, dword ptr [edx*4 + 0x118c51a0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x118c51a0)));
  /* 11897175 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11897178 jmp 0x11897183 */
  goto L_11897183;
L_1189717a:;
  /* 1189717a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189717d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11897180 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11897183:;
  /* 11897183 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11897186 mov eax, dword ptr [edx*4 + 0x118c51a0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x118c51a0)));
  /* 1189718d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11897192 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897195 jae 0x118971af */
  if (!C.cf) goto L_118971af;
  /* 11897197 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189719a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189719e je 0x118971ad */
  if (C.zf) goto L_118971ad;
  /* 118971a0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118971a3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118971a6 push edx */
  push32((uint32_t)(EDX));
  /* 118971a7 call dword ptr [0x118c63b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63b8))), 0x118971adu);
L_118971ad:;
  /* 118971ad jmp 0x1189717a */
  goto L_1189717a;
L_118971af:;
  /* 118971af push 2 */
  push32((uint32_t)(0x2u));
  /* 118971b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118971b4 mov ecx, dword ptr [eax*4 + 0x118c51a0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x118c51a0)));
  /* 118971bb push ecx */
  push32((uint32_t)(ECX));
  /* 118971bc call 0x11897c90 */
  push32(0x118971c1u); f_11897c90();
  /* 118971c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118971c4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118971c7 mov dword ptr [edx*4 + 0x118c51a0], 0 */
  w32((uint32_t)(EDX*4 + 0x118c51a0), (0x0u));
L_118971d2:;
  /* 118971d2 jmp 0x1189714f */
  goto L_1189714f;
L_118971d7:;
  /* 118971d7 mov esp, ebp */
  ESP = (EBP);
  /* 118971d9 pop ebp */
  EBP = (pop32());
  /* 118971da ret  */
  ESPCHK(0x11897140u, _esp0);
  ESP += 4; return;
}

/* FUN_100071e0 @ 0x118971e0 (29 bytes, 13 insns) */
void f_118971e0(void) {
  FTRACE(0x118971e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118971e0 push ebp */
  push32((uint32_t)(EBP));
  /* 118971e1 mov ebp, esp */
  EBP = (ESP);
  /* 118971e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 118971e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 118971e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 118971e9 mov eax, dword ptr [0x118c39a0] */
  EAX = (r32((uint32_t)(0x118c39a0)));
  /* 118971ee push eax */
  push32((uint32_t)(EAX));
  /* 118971ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118971f2 push ecx */
  push32((uint32_t)(ECX));
  /* 118971f3 call 0x11897250 */
  push32(0x118971f8u); f_11897250();
  /* 118971f8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118971fb pop ebp */
  EBP = (pop32());
  /* 118971fc ret  */
  ESPCHK(0x118971e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007200 @ 0x11897200 (35 bytes, 16 insns) */
void f_11897200(void) {
  FTRACE(0x11897200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11897200 push ebp */
  push32((uint32_t)(EBP));
  /* 11897201 mov ebp, esp */
  EBP = (ESP);
  /* 11897203 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11897206 push eax */
  push32((uint32_t)(EAX));
  /* 11897207 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1189720a push ecx */
  push32((uint32_t)(ECX));
  /* 1189720b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189720e push edx */
  push32((uint32_t)(EDX));
  /* 1189720f mov eax, dword ptr [0x118c39a0] */
  EAX = (r32((uint32_t)(0x118c39a0)));
  /* 11897214 push eax */
  push32((uint32_t)(EAX));
  /* 11897215 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11897218 push ecx */
  push32((uint32_t)(ECX));
  /* 11897219 call 0x11897250 */
  push32(0x1189721eu); f_11897250();
  /* 1189721e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897221 pop ebp */
  EBP = (pop32());
  /* 11897222 ret  */
  ESPCHK(0x11897200u, _esp0);
  ESP += 4; return;
}

/* FUN_10007230 @ 0x11897230 (27 bytes, 13 insns) */
void f_11897230(void) {
  FTRACE(0x11897230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11897230 push ebp */
  push32((uint32_t)(EBP));
  /* 11897231 mov ebp, esp */
  EBP = (ESP);
  /* 11897233 push 0 */
  push32((uint32_t)(0x0u));
  /* 11897235 push 0 */
  push32((uint32_t)(0x0u));
  /* 11897237 push 1 */
  push32((uint32_t)(0x1u));
  /* 11897239 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189723c push eax */
  push32((uint32_t)(EAX));
  /* 1189723d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11897240 push ecx */
  push32((uint32_t)(ECX));
  /* 11897241 call 0x11897250 */
  push32(0x11897246u); f_11897250();
  /* 11897246 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897249 pop ebp */
  EBP = (pop32());
  /* 1189724a ret  */
  ESPCHK(0x11897230u, _esp0);
  ESP += 4; return;
}

/* FUN_10007250 @ 0x11897250 (94 bytes, 38 insns) */
void f_11897250(void) {
  FTRACE(0x11897250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11897250 push ebp */
  push32((uint32_t)(EBP));
  /* 11897251 mov ebp, esp */
  EBP = (ESP);
  /* 11897253 push ecx */
  push32((uint32_t)(ECX));
L_11897254:;
  /* 11897254 push 9 */
  push32((uint32_t)(0x9u));
  /* 11897256 call 0x1189ac00 */
  push32(0x1189725bu); f_1189ac00();
  /* 1189725b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189725e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11897261 push eax */
  push32((uint32_t)(EAX));
  /* 11897262 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11897265 push ecx */
  push32((uint32_t)(ECX));
  /* 11897266 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11897269 push edx */
  push32((uint32_t)(EDX));
  /* 1189726a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189726d push eax */
  push32((uint32_t)(EAX));
  /* 1189726e call 0x118972d0 */
  push32(0x11897273u); f_118972d0();
  /* 11897273 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897276 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11897279 push 9 */
  push32((uint32_t)(0x9u));
  /* 1189727b call 0x1189aca0 */
  push32(0x11897280u); f_1189aca0();
  /* 11897280 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897283 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897287 jne 0x1189728f */
  if (!C.zf) goto L_1189728f;
  /* 11897289 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189728d jne 0x11897294 */
  if (!C.zf) goto L_11897294;
L_1189728f:;
  /* 1189728f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11897292 jmp 0x118972aa */
  goto L_118972aa;
L_11897294:;
  /* 11897294 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11897297 push ecx */
  push32((uint32_t)(ECX));
  /* 11897298 call 0x1189af40 */
  push32(0x1189729du); f_1189af40();
  /* 1189729d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118972a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118972a2 jne 0x118972a8 */
  if (!C.zf) goto L_118972a8;
  /* 118972a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118972a6 jmp 0x118972aa */
  goto L_118972aa;
L_118972a8:;
  /* 118972a8 jmp 0x11897254 */
  goto L_11897254;
L_118972aa:;
  /* 118972aa mov esp, ebp */
  ESP = (EBP);
  /* 118972ac pop ebp */
  EBP = (pop32());
  /* 118972ad ret  */
  ESPCHK(0x11897250u, _esp0);
  ESP += 4; return;
}

/* FUN_100072b0 @ 0x118972b0 (23 bytes, 11 insns) */
void f_118972b0(void) {
  FTRACE(0x118972b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118972b0 push ebp */
  push32((uint32_t)(EBP));
  /* 118972b1 mov ebp, esp */
  EBP = (ESP);
  /* 118972b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 118972b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 118972b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 118972b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118972bc push eax */
  push32((uint32_t)(EAX));
  /* 118972bd call 0x118972d0 */
  push32(0x118972c2u); f_118972d0();
  /* 118972c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118972c5 pop ebp */
  EBP = (pop32());
  /* 118972c6 ret  */
  ESPCHK(0x118972b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100072d0 @ 0x118972d0 (787 bytes, 254 insns) */
void f_118972d0(void) {
  FTRACE(0x118972d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118972d0 push ebp */
  push32((uint32_t)(EBP));
  /* 118972d1 mov ebp, esp */
  EBP = (ESP);
  /* 118972d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118972d6 push ebx */
  push32((uint32_t)(EBX));
  /* 118972d7 push esi */
  push32((uint32_t)(ESI));
  /* 118972d8 push edi */
  push32((uint32_t)(EDI));
  /* 118972d9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 118972e0 mov eax, dword ptr [0x118c1a84] */
  EAX = (r32((uint32_t)(0x118c1a84)));
  /* 118972e5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 118972e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118972ea je 0x1189731c */
  if (C.zf) goto L_1189731c;
L_118972ec:;
  /* 118972ec call 0x118983a0 */
  push32(0x118972f1u); f_118983a0();
  /* 118972f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118972f3 jne 0x11897316 */
  if (!C.zf) goto L_11897316;
  /* 118972f5 push 0x118bf098 */
  push32((uint32_t)(0x118bf098u));
  /* 118972fa push 0 */
  push32((uint32_t)(0x0u));
  /* 118972fc push 0x141 */
  push32((uint32_t)(0x141u));
  /* 11897301 push 0x118bf08c */
  push32((uint32_t)(0x118bf08cu));
  /* 11897306 push 2 */
  push32((uint32_t)(0x2u));
  /* 11897308 call 0x118962c0 */
  push32(0x1189730du); f_118962c0();
  /* 1189730d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897310 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897313 jne 0x11897316 */
  if (!C.zf) goto L_11897316;
  /* 11897315 int3  */
  x86_unimpl("int3 @ 0x11897315");
L_11897316:;
  /* 11897316 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11897318 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1189731a jne 0x118972ec */
  if (!C.zf) goto L_118972ec;
L_1189731c:;
  /* 1189731c mov edx, dword ptr [0x118c1a88] */
  EDX = (r32((uint32_t)(0x118c1a88)));
  /* 11897322 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11897325 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11897328 cmp eax, dword ptr [0x118c1a8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118c1a8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189732e jne 0x11897331 */
  if (!C.zf) goto L_11897331;
  /* 11897330 int3  */
  x86_unimpl("int3 @ 0x11897330");
L_11897331:;
  /* 11897331 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11897334 push ecx */
  push32((uint32_t)(ECX));
  /* 11897335 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11897338 push edx */
  push32((uint32_t)(EDX));
  /* 11897339 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189733c push eax */
  push32((uint32_t)(EAX));
  /* 1189733d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11897340 push ecx */
  push32((uint32_t)(ECX));
  /* 11897341 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11897344 push edx */
  push32((uint32_t)(EDX));
  /* 11897345 push 0 */
  push32((uint32_t)(0x0u));
  /* 11897347 push 1 */
  push32((uint32_t)(0x1u));
  /* 11897349 call dword ptr [0x118c1c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c1c90))), 0x1189734fu);
  /* 1189734f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897352 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11897354 jne 0x118973b4 */
  if (!C.zf) goto L_118973b4;
  /* 11897356 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189735a je 0x11897387 */
  if (C.zf) goto L_11897387;
L_1189735c:;
  /* 1189735c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1189735f push eax */
  push32((uint32_t)(EAX));
  /* 11897360 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11897363 push ecx */
  push32((uint32_t)(ECX));
  /* 11897364 push 0x118bf054 */
  push32((uint32_t)(0x118bf054u));
  /* 11897369 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189736b push 0 */
  push32((uint32_t)(0x0u));
  /* 1189736d push 0 */
  push32((uint32_t)(0x0u));
  /* 1189736f push 0 */
  push32((uint32_t)(0x0u));
  /* 11897371 call 0x118962c0 */
  push32(0x11897376u); f_118962c0();
  /* 11897376 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897379 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189737c jne 0x1189737f */
  if (!C.zf) goto L_1189737f;
  /* 1189737e int3  */
  x86_unimpl("int3 @ 0x1189737e");
L_1189737f:;
  /* 1189737f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11897381 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11897383 jne 0x1189735c */
  if (!C.zf) goto L_1189735c;
  /* 11897385 jmp 0x118973ad */
  goto L_118973ad;
L_11897387:;
  /* 11897387 push 0x118bf030 */
  push32((uint32_t)(0x118bf030u));
  /* 1189738c push 0x118bf02c */
  push32((uint32_t)(0x118bf02cu));
  /* 11897391 push 0 */
  push32((uint32_t)(0x0u));
  /* 11897393 push 0 */
  push32((uint32_t)(0x0u));
  /* 11897395 push 0 */
  push32((uint32_t)(0x0u));
  /* 11897397 push 0 */
  push32((uint32_t)(0x0u));
  /* 11897399 call 0x118962c0 */
  push32(0x1189739eu); f_118962c0();
  /* 1189739e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118973a1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118973a4 jne 0x118973a7 */
  if (!C.zf) goto L_118973a7;
  /* 118973a6 int3  */
  x86_unimpl("int3 @ 0x118973a6");
L_118973a7:;
  /* 118973a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118973a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118973ab jne 0x11897387 */
  if (!C.zf) goto L_11897387;
L_118973ad:;
  /* 118973ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118973af jmp 0x118975dc */
  goto L_118975dc;
L_118973b4:;
  /* 118973b4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118973b7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 118973bd cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118973c0 je 0x118973d6 */
  if (C.zf) goto L_118973d6;
  /* 118973c2 mov edx, dword ptr [0x118c1a84] */
  EDX = (r32((uint32_t)(0x118c1a84)));
  /* 118973c8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 118973cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118973cd jne 0x118973d6 */
  if (!C.zf) goto L_118973d6;
  /* 118973cf mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_118973d6:;
  /* 118973d6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118973da ja 0x118973e7 */
  if ((!C.cf&&!C.zf)) goto L_118973e7;
  /* 118973dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118973df add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118973e2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118973e5 jbe 0x11897413 */
  if ((C.cf||C.zf)) goto L_11897413;
L_118973e7:;
  /* 118973e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118973ea push ecx */
  push32((uint32_t)(ECX));
  /* 118973eb push 0x118bf008 */
  push32((uint32_t)(0x118bf008u));
  /* 118973f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 118973f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 118973f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 118973f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 118973f8 call 0x118962c0 */
  push32(0x118973fdu); f_118962c0();
  /* 118973fd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897400 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897403 jne 0x11897406 */
  if (!C.zf) goto L_11897406;
  /* 11897405 int3  */
  x86_unimpl("int3 @ 0x11897405");
L_11897406:;
  /* 11897406 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11897408 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189740a jne 0x118973e7 */
  if (!C.zf) goto L_118973e7;
  /* 1189740c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189740e jmp 0x118975dc */
  goto L_118975dc;
L_11897413:;
  /* 11897413 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11897416 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1189741b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189741e je 0x11897460 */
  if (C.zf) goto L_11897460;
  /* 11897420 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897424 je 0x11897460 */
  if (C.zf) goto L_11897460;
  /* 11897426 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11897429 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1189742f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897432 je 0x11897460 */
  if (C.zf) goto L_11897460;
  /* 11897434 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897438 je 0x11897460 */
  if (C.zf) goto L_11897460;
L_1189743a:;
  /* 1189743a push 0x118befd4 */
  push32((uint32_t)(0x118befd4u));
  /* 1189743f push 0x118bf02c */
  push32((uint32_t)(0x118bf02cu));
  /* 11897444 push 0 */
  push32((uint32_t)(0x0u));
  /* 11897446 push 0 */
  push32((uint32_t)(0x0u));
  /* 11897448 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189744a push 1 */
  push32((uint32_t)(0x1u));
  /* 1189744c call 0x118962c0 */
  push32(0x11897451u); f_118962c0();
  /* 11897451 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897454 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897457 jne 0x1189745a */
  if (!C.zf) goto L_1189745a;
  /* 11897459 int3  */
  x86_unimpl("int3 @ 0x11897459");
L_1189745a:;
  /* 1189745a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1189745c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189745e jne 0x1189743a */
  if (!C.zf) goto L_1189743a;
L_11897460:;
  /* 11897460 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11897463 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11897466 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11897469 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189746c push ecx */
  push32((uint32_t)(ECX));
  /* 1189746d call 0x1189b050 */
  push32(0x11897472u); f_1189b050();
  /* 11897472 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897475 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11897478 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189747c jne 0x11897485 */
  if (!C.zf) goto L_11897485;
  /* 1189747e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11897480 jmp 0x118975dc */
  goto L_118975dc;
L_11897485:;
  /* 11897485 mov edx, dword ptr [0x118c1a88] */
  EDX = (r32((uint32_t)(0x118c1a88)));
  /* 1189748b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189748e mov dword ptr [0x118c1a88], edx */
  w32((uint32_t)(0x118c1a88), (EDX));
  /* 11897494 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897498 je 0x118974e3 */
  if (C.zf) goto L_118974e3;
  /* 1189749a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189749d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 118974a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118974a6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 118974ad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118974b0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 118974b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118974ba mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 118974c1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118974c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118974c7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 118974ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118974cd mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 118974d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118974d7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 118974de jmp 0x11897583 */
  goto L_11897583;
L_118974e3:;
  /* 118974e3 mov edx, dword ptr [0x118c3800] */
  EDX = (r32((uint32_t)(0x118c3800)));
  /* 118974e9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118974ec mov dword ptr [0x118c3800], edx */
  w32((uint32_t)(0x118c3800), (EDX));
  /* 118974f2 mov eax, dword ptr [0x118c3808] */
  EAX = (r32((uint32_t)(0x118c3808)));
  /* 118974f7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118974fa mov dword ptr [0x118c3808], eax */
  w32((uint32_t)(0x118c3808), (EAX));
  /* 118974ff mov ecx, dword ptr [0x118c3808] */
  ECX = (r32((uint32_t)(0x118c3808)));
  /* 11897505 cmp ecx, dword ptr [0x118c380c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x118c380c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189750b jbe 0x11897519 */
  if ((C.cf||C.zf)) goto L_11897519;
  /* 1189750d mov edx, dword ptr [0x118c3808] */
  EDX = (r32((uint32_t)(0x118c3808)));
  /* 11897513 mov dword ptr [0x118c380c], edx */
  w32((uint32_t)(0x118c380c), (EDX));
L_11897519:;
  /* 11897519 cmp dword ptr [0x118c3804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897520 je 0x1189752f */
  if (C.zf) goto L_1189752f;
  /* 11897522 mov eax, dword ptr [0x118c3804] */
  EAX = (r32((uint32_t)(0x118c3804)));
  /* 11897527 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189752a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1189752d jmp 0x11897538 */
  goto L_11897538;
L_1189752f:;
  /* 1189752f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11897532 mov dword ptr [0x118c37fc], edx */
  w32((uint32_t)(0x118c37fc), (EDX));
L_11897538:;
  /* 11897538 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189753b mov ecx, dword ptr [0x118c3804] */
  ECX = (r32((uint32_t)(0x118c3804)));
  /* 11897541 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11897543 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11897546 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 1189754d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11897550 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11897553 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11897556 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11897559 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1189755c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 1189755f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11897562 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11897565 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11897568 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189756b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189756e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11897571 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11897574 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11897577 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 1189757a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189757d mov dword ptr [0x118c3804], ecx */
  w32((uint32_t)(0x118c3804), (ECX));
L_11897583:;
  /* 11897583 push 4 */
  push32((uint32_t)(0x4u));
  /* 11897585 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11897587 mov dl, byte ptr [0x118c1a90] */
  DL = (r8((uint32_t)(0x118c1a90)));
  /* 1189758d push edx */
  push32((uint32_t)(EDX));
  /* 1189758e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11897591 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11897594 push eax */
  push32((uint32_t)(EAX));
  /* 11897595 call 0x1189af70 */
  push32(0x1189759au); f_1189af70();
  /* 1189759a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189759d push 4 */
  push32((uint32_t)(0x4u));
  /* 1189759f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118975a1 mov cl, byte ptr [0x118c1a90] */
  CL = (r8((uint32_t)(0x118c1a90)));
  /* 118975a7 push ecx */
  push32((uint32_t)(ECX));
  /* 118975a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118975ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118975ae lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 118975b2 push ecx */
  push32((uint32_t)(ECX));
  /* 118975b3 call 0x1189af70 */
  push32(0x118975b8u); f_1189af70();
  /* 118975b8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118975bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118975be push edx */
  push32((uint32_t)(EDX));
  /* 118975bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118975c1 mov al, byte ptr [0x118c1a92] */
  AL = (r8((uint32_t)(0x118c1a92)));
  /* 118975c6 push eax */
  push32((uint32_t)(EAX));
  /* 118975c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118975ca add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118975cd push ecx */
  push32((uint32_t)(ECX));
  /* 118975ce call 0x1189af70 */
  push32(0x118975d3u); f_1189af70();
  /* 118975d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118975d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118975d9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_118975dc:;
  /* 118975dc pop edi */
  EDI = (pop32());
  /* 118975dd pop esi */
  ESI = (pop32());
  /* 118975de pop ebx */
  EBX = (pop32());
  /* 118975df mov esp, ebp */
  ESP = (EBP);
  /* 118975e1 pop ebp */
  EBP = (pop32());
  /* 118975e2 ret  */
  ESPCHK(0x118972d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100075f0 @ 0x118975f0 (27 bytes, 13 insns) */
void f_118975f0(void) {
  FTRACE(0x118975f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118975f0 push ebp */
  push32((uint32_t)(EBP));
  /* 118975f1 mov ebp, esp */
  EBP = (ESP);
  /* 118975f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 118975f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 118975f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 118975f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118975fc push eax */
  push32((uint32_t)(EAX));
  /* 118975fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11897600 push ecx */
  push32((uint32_t)(ECX));
  /* 11897601 call 0x11897610 */
  push32(0x11897606u); f_11897610();
  /* 11897606 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897609 pop ebp */
  EBP = (pop32());
  /* 1189760a ret  */
  ESPCHK(0x118975f0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x11897610 (96 bytes, 37 insns) */
void f_11897610(void) {
  FTRACE(0x11897610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11897610 push ebp */
  push32((uint32_t)(EBP));
  /* 11897611 mov ebp, esp */
  EBP = (ESP);
  /* 11897613 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11897616 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11897619 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1189761d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11897620 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11897623 push ecx */
  push32((uint32_t)(ECX));
  /* 11897624 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11897627 push edx */
  push32((uint32_t)(EDX));
  /* 11897628 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1189762b push eax */
  push32((uint32_t)(EAX));
  /* 1189762c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189762f push ecx */
  push32((uint32_t)(ECX));
  /* 11897630 call 0x11897200 */
  push32(0x11897635u); f_11897200();
  /* 11897635 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897638 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1189763b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189763f je 0x11897669 */
  if (C.zf) goto L_11897669;
  /* 11897641 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11897644 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11897647 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189764a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189764d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11897650:;
  /* 11897650 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11897653 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897656 jae 0x11897669 */
  if (!C.cf) goto L_11897669;
  /* 11897658 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189765b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1189765e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11897661 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11897664 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11897667 jmp 0x11897650 */
  goto L_11897650;
L_11897669:;
  /* 11897669 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189766c mov esp, ebp */
  ESP = (EBP);
  /* 1189766e pop ebp */
  EBP = (pop32());
  /* 1189766f ret  */
  ESPCHK(0x11897610u, _esp0);
  ESP += 4; return;
}

/* FUN_10007670 @ 0x11897670 (27 bytes, 13 insns) */
void f_11897670(void) {
  FTRACE(0x11897670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11897670 push ebp */
  push32((uint32_t)(EBP));
  /* 11897671 mov ebp, esp */
  EBP = (ESP);
  /* 11897673 push 0 */
  push32((uint32_t)(0x0u));
  /* 11897675 push 0 */
  push32((uint32_t)(0x0u));
  /* 11897677 push 1 */
  push32((uint32_t)(0x1u));
  /* 11897679 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189767c push eax */
  push32((uint32_t)(EAX));
  /* 1189767d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11897680 push ecx */
  push32((uint32_t)(ECX));
  /* 11897681 call 0x11897690 */
  push32(0x11897686u); f_11897690();
  /* 11897686 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897689 pop ebp */
  EBP = (pop32());
  /* 1189768a ret  */
  ESPCHK(0x11897670u, _esp0);
  ESP += 4; return;
}

/* FUN_10007690 @ 0x11897690 (64 bytes, 27 insns) */
void f_11897690(void) {
  FTRACE(0x11897690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11897690 push ebp */
  push32((uint32_t)(EBP));
  /* 11897691 mov ebp, esp */
  EBP = (ESP);
  /* 11897693 push ecx */
  push32((uint32_t)(ECX));
  /* 11897694 push 9 */
  push32((uint32_t)(0x9u));
  /* 11897696 call 0x1189ac00 */
  push32(0x1189769bu); f_1189ac00();
  /* 1189769b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189769e push 1 */
  push32((uint32_t)(0x1u));
  /* 118976a0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 118976a3 push eax */
  push32((uint32_t)(EAX));
  /* 118976a4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118976a7 push ecx */
  push32((uint32_t)(ECX));
  /* 118976a8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118976ab push edx */
  push32((uint32_t)(EDX));
  /* 118976ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118976af push eax */
  push32((uint32_t)(EAX));
  /* 118976b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118976b3 push ecx */
  push32((uint32_t)(ECX));
  /* 118976b4 call 0x118976d0 */
  push32(0x118976b9u); f_118976d0();
  /* 118976b9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118976bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118976bf push 9 */
  push32((uint32_t)(0x9u));
  /* 118976c1 call 0x1189aca0 */
  push32(0x118976c6u); f_1189aca0();
  /* 118976c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118976c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118976cc mov esp, ebp */
  ESP = (EBP);
  /* 118976ce pop ebp */
  EBP = (pop32());
  /* 118976cf ret  */
  ESPCHK(0x11897690u, _esp0);
  ESP += 4; return;
}

/* FUN_100076d0 @ 0x118976d0 (1297 bytes, 431 insns) */
void f_118976d0(void) {
  FTRACE(0x118976d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118976d0 push ebp */
  push32((uint32_t)(EBP));
  /* 118976d1 mov ebp, esp */
  EBP = (ESP);
  /* 118976d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118976d6 push ebx */
  push32((uint32_t)(EBX));
  /* 118976d7 push esi */
  push32((uint32_t)(ESI));
  /* 118976d8 push edi */
  push32((uint32_t)(EDI));
  /* 118976d9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 118976e0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118976e4 jne 0x11897703 */
  if (!C.zf) goto L_11897703;
  /* 118976e6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 118976e9 push eax */
  push32((uint32_t)(EAX));
  /* 118976ea mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118976ed push ecx */
  push32((uint32_t)(ECX));
  /* 118976ee mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118976f1 push edx */
  push32((uint32_t)(EDX));
  /* 118976f2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118976f5 push eax */
  push32((uint32_t)(EAX));
  /* 118976f6 call 0x11897200 */
  push32(0x118976fbu); f_11897200();
  /* 118976fb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118976fe jmp 0x11897bda */
  goto L_11897bda;
L_11897703:;
  /* 11897703 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897707 je 0x11897726 */
  if (C.zf) goto L_11897726;
  /* 11897709 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189770d jne 0x11897726 */
  if (!C.zf) goto L_11897726;
  /* 1189770f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11897712 push ecx */
  push32((uint32_t)(ECX));
  /* 11897713 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11897716 push edx */
  push32((uint32_t)(EDX));
  /* 11897717 call 0x11897c90 */
  push32(0x1189771cu); f_11897c90();
  /* 1189771c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189771f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11897721 jmp 0x11897bda */
  goto L_11897bda;
L_11897726:;
  /* 11897726 mov eax, dword ptr [0x118c1a84] */
  EAX = (r32((uint32_t)(0x118c1a84)));
  /* 1189772b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1189772e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11897730 je 0x11897762 */
  if (C.zf) goto L_11897762;
L_11897732:;
  /* 11897732 call 0x118983a0 */
  push32(0x11897737u); f_118983a0();
  /* 11897737 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11897739 jne 0x1189775c */
  if (!C.zf) goto L_1189775c;
  /* 1189773b push 0x118bf098 */
  push32((uint32_t)(0x118bf098u));
  /* 11897740 push 0 */
  push32((uint32_t)(0x0u));
  /* 11897742 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 11897747 push 0x118bf08c */
  push32((uint32_t)(0x118bf08cu));
  /* 1189774c push 2 */
  push32((uint32_t)(0x2u));
  /* 1189774e call 0x118962c0 */
  push32(0x11897753u); f_118962c0();
  /* 11897753 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897756 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897759 jne 0x1189775c */
  if (!C.zf) goto L_1189775c;
  /* 1189775b int3  */
  x86_unimpl("int3 @ 0x1189775b");
L_1189775c:;
  /* 1189775c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1189775e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11897760 jne 0x11897732 */
  if (!C.zf) goto L_11897732;
L_11897762:;
  /* 11897762 mov edx, dword ptr [0x118c1a88] */
  EDX = (r32((uint32_t)(0x118c1a88)));
  /* 11897768 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1189776b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189776e cmp eax, dword ptr [0x118c1a8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118c1a8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897774 jne 0x11897777 */
  if (!C.zf) goto L_11897777;
  /* 11897776 int3  */
  x86_unimpl("int3 @ 0x11897776");
L_11897777:;
  /* 11897777 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1189777a push ecx */
  push32((uint32_t)(ECX));
  /* 1189777b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1189777e push edx */
  push32((uint32_t)(EDX));
  /* 1189777f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11897782 push eax */
  push32((uint32_t)(EAX));
  /* 11897783 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11897786 push ecx */
  push32((uint32_t)(ECX));
  /* 11897787 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189778a push edx */
  push32((uint32_t)(EDX));
  /* 1189778b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189778e push eax */
  push32((uint32_t)(EAX));
  /* 1189778f push 2 */
  push32((uint32_t)(0x2u));
  /* 11897791 call dword ptr [0x118c1c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c1c90))), 0x11897797u);
  /* 11897797 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189779a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189779c jne 0x118977fc */
  if (!C.zf) goto L_118977fc;
  /* 1189779e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118977a2 je 0x118977cf */
  if (C.zf) goto L_118977cf;
L_118977a4:;
  /* 118977a4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 118977a7 push ecx */
  push32((uint32_t)(ECX));
  /* 118977a8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 118977ab push edx */
  push32((uint32_t)(EDX));
  /* 118977ac push 0x118bf214 */
  push32((uint32_t)(0x118bf214u));
  /* 118977b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 118977b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 118977b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 118977b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 118977b9 call 0x118962c0 */
  push32(0x118977beu); f_118962c0();
  /* 118977be add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118977c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118977c4 jne 0x118977c7 */
  if (!C.zf) goto L_118977c7;
  /* 118977c6 int3  */
  x86_unimpl("int3 @ 0x118977c6");
L_118977c7:;
  /* 118977c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118977c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118977cb jne 0x118977a4 */
  if (!C.zf) goto L_118977a4;
  /* 118977cd jmp 0x118977f5 */
  goto L_118977f5;
L_118977cf:;
  /* 118977cf push 0x118bf1f0 */
  push32((uint32_t)(0x118bf1f0u));
  /* 118977d4 push 0x118bf02c */
  push32((uint32_t)(0x118bf02cu));
  /* 118977d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 118977db push 0 */
  push32((uint32_t)(0x0u));
  /* 118977dd push 0 */
  push32((uint32_t)(0x0u));
  /* 118977df push 0 */
  push32((uint32_t)(0x0u));
  /* 118977e1 call 0x118962c0 */
  push32(0x118977e6u); f_118962c0();
  /* 118977e6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118977e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118977ec jne 0x118977ef */
  if (!C.zf) goto L_118977ef;
  /* 118977ee int3  */
  x86_unimpl("int3 @ 0x118977ee");
L_118977ef:;
  /* 118977ef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118977f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118977f3 jne 0x118977cf */
  if (!C.zf) goto L_118977cf;
L_118977f5:;
  /* 118977f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118977f7 jmp 0x11897bda */
  goto L_11897bda;
L_118977fc:;
  /* 118977fc cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897800 jbe 0x1189782e */
  if ((C.cf||C.zf)) goto L_1189782e;
L_11897802:;
  /* 11897802 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11897805 push edx */
  push32((uint32_t)(EDX));
  /* 11897806 push 0x118bf1c0 */
  push32((uint32_t)(0x118bf1c0u));
  /* 1189780b push 0 */
  push32((uint32_t)(0x0u));
  /* 1189780d push 0 */
  push32((uint32_t)(0x0u));
  /* 1189780f push 0 */
  push32((uint32_t)(0x0u));
  /* 11897811 push 1 */
  push32((uint32_t)(0x1u));
  /* 11897813 call 0x118962c0 */
  push32(0x11897818u); f_118962c0();
  /* 11897818 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189781b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189781e jne 0x11897821 */
  if (!C.zf) goto L_11897821;
  /* 11897820 int3  */
  x86_unimpl("int3 @ 0x11897820");
L_11897821:;
  /* 11897821 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11897823 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11897825 jne 0x11897802 */
  if (!C.zf) goto L_11897802;
  /* 11897827 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11897829 jmp 0x11897bda */
  goto L_11897bda;
L_1189782e:;
  /* 1189782e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897832 je 0x11897876 */
  if (C.zf) goto L_11897876;
  /* 11897834 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11897837 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1189783d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897840 je 0x11897876 */
  if (C.zf) goto L_11897876;
  /* 11897842 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11897845 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1189784b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189784e je 0x11897876 */
  if (C.zf) goto L_11897876;
L_11897850:;
  /* 11897850 push 0x118befd4 */
  push32((uint32_t)(0x118befd4u));
  /* 11897855 push 0x118bf02c */
  push32((uint32_t)(0x118bf02cu));
  /* 1189785a push 0 */
  push32((uint32_t)(0x0u));
  /* 1189785c push 0 */
  push32((uint32_t)(0x0u));
  /* 1189785e push 0 */
  push32((uint32_t)(0x0u));
  /* 11897860 push 1 */
  push32((uint32_t)(0x1u));
  /* 11897862 call 0x118962c0 */
  push32(0x11897867u); f_118962c0();
  /* 11897867 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189786a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189786d jne 0x11897870 */
  if (!C.zf) goto L_11897870;
  /* 1189786f int3  */
  x86_unimpl("int3 @ 0x1189786f");
L_11897870:;
  /* 11897870 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11897872 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11897874 jne 0x11897850 */
  if (!C.zf) goto L_11897850;
L_11897876:;
  /* 11897876 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11897879 push ecx */
  push32((uint32_t)(ECX));
  /* 1189787a call 0x11898800 */
  push32(0x1189787fu); f_11898800();
  /* 1189787f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897882 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11897884 jne 0x118978a7 */
  if (!C.zf) goto L_118978a7;
  /* 11897886 push 0x118bf19c */
  push32((uint32_t)(0x118bf19cu));
  /* 1189788b push 0 */
  push32((uint32_t)(0x0u));
  /* 1189788d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 11897892 push 0x118bf08c */
  push32((uint32_t)(0x118bf08cu));
  /* 11897897 push 2 */
  push32((uint32_t)(0x2u));
  /* 11897899 call 0x118962c0 */
  push32(0x1189789eu); f_118962c0();
  /* 1189789e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118978a1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118978a4 jne 0x118978a7 */
  if (!C.zf) goto L_118978a7;
  /* 118978a6 int3  */
  x86_unimpl("int3 @ 0x118978a6");
L_118978a7:;
  /* 118978a7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118978a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118978ab jne 0x11897876 */
  if (!C.zf) goto L_11897876;
  /* 118978ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118978b0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118978b3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118978b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118978b9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118978bd jne 0x118978c6 */
  if (!C.zf) goto L_118978c6;
  /* 118978bf mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_118978c6:;
  /* 118978c6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118978ca je 0x1189790a */
  if (C.zf) goto L_1189790a;
L_118978cc:;
  /* 118978cc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118978cf cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118978d6 jne 0x118978e1 */
  if (!C.zf) goto L_118978e1;
  /* 118978d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118978db cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118978df je 0x11897902 */
  if (C.zf) goto L_11897902;
L_118978e1:;
  /* 118978e1 push 0x118bf154 */
  push32((uint32_t)(0x118bf154u));
  /* 118978e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 118978e8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 118978ed push 0x118bf08c */
  push32((uint32_t)(0x118bf08cu));
  /* 118978f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 118978f4 call 0x118962c0 */
  push32(0x118978f9u); f_118962c0();
  /* 118978f9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118978fc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118978ff jne 0x11897902 */
  if (!C.zf) goto L_11897902;
  /* 11897901 int3  */
  x86_unimpl("int3 @ 0x11897901");
L_11897902:;
  /* 11897902 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11897904 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11897906 jne 0x118978cc */
  if (!C.zf) goto L_118978cc;
  /* 11897908 jmp 0x1189796e */
  goto L_1189796e;
L_1189790a:;
  /* 1189790a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189790d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11897910 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11897915 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897918 jne 0x1189792f */
  if (!C.zf) goto L_1189792f;
  /* 1189791a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1189791d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11897923 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897926 jne 0x1189792f */
  if (!C.zf) goto L_1189792f;
  /* 11897928 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_1189792f:;
  /* 1189792f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11897932 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11897935 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1189793a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1189793d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11897943 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897945 je 0x11897968 */
  if (C.zf) goto L_11897968;
  /* 11897947 push 0x118bf118 */
  push32((uint32_t)(0x118bf118u));
  /* 1189794c push 0 */
  push32((uint32_t)(0x0u));
  /* 1189794e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 11897953 push 0x118bf08c */
  push32((uint32_t)(0x118bf08cu));
  /* 11897958 push 2 */
  push32((uint32_t)(0x2u));
  /* 1189795a call 0x118962c0 */
  push32(0x1189795fu); f_118962c0();
  /* 1189795f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897962 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897965 jne 0x11897968 */
  if (!C.zf) goto L_11897968;
  /* 11897967 int3  */
  x86_unimpl("int3 @ 0x11897967");
L_11897968:;
  /* 11897968 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1189796a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189796c jne 0x1189792f */
  if (!C.zf) goto L_1189792f;
L_1189796e:;
  /* 1189796e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897972 je 0x11897999 */
  if (C.zf) goto L_11897999;
  /* 11897974 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11897977 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189797a push eax */
  push32((uint32_t)(EAX));
  /* 1189797b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189797e push ecx */
  push32((uint32_t)(ECX));
  /* 1189797f call 0x1189b180 */
  push32(0x11897984u); f_1189b180();
  /* 11897984 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897987 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1189798a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189798e jne 0x11897997 */
  if (!C.zf) goto L_11897997;
  /* 11897990 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11897992 jmp 0x11897bda */
  goto L_11897bda;
L_11897997:;
  /* 11897997 jmp 0x118979bc */
  goto L_118979bc;
L_11897999:;
  /* 11897999 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189799c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189799f push edx */
  push32((uint32_t)(EDX));
  /* 118979a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118979a3 push eax */
  push32((uint32_t)(EAX));
  /* 118979a4 call 0x1189b0d0 */
  push32(0x118979a9u); f_1189b0d0();
  /* 118979a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118979ac mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 118979af cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118979b3 jne 0x118979bc */
  if (!C.zf) goto L_118979bc;
  /* 118979b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118979b7 jmp 0x11897bda */
  goto L_11897bda;
L_118979bc:;
  /* 118979bc mov ecx, dword ptr [0x118c1a88] */
  ECX = (r32((uint32_t)(0x118c1a88)));
  /* 118979c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118979c5 mov dword ptr [0x118c1a88], ecx */
  w32((uint32_t)(0x118c1a88), (ECX));
  /* 118979cb cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118979cf jne 0x11897a27 */
  if (!C.zf) goto L_11897a27;
  /* 118979d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118979d4 mov eax, dword ptr [0x118c3800] */
  EAX = (r32((uint32_t)(0x118c3800)));
  /* 118979d9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118979dc mov dword ptr [0x118c3800], eax */
  w32((uint32_t)(0x118c3800), (EAX));
  /* 118979e1 mov ecx, dword ptr [0x118c3800] */
  ECX = (r32((uint32_t)(0x118c3800)));
  /* 118979e7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118979ea mov dword ptr [0x118c3800], ecx */
  w32((uint32_t)(0x118c3800), (ECX));
  /* 118979f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118979f3 mov eax, dword ptr [0x118c3808] */
  EAX = (r32((uint32_t)(0x118c3808)));
  /* 118979f8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118979fb mov dword ptr [0x118c3808], eax */
  w32((uint32_t)(0x118c3808), (EAX));
  /* 11897a00 mov ecx, dword ptr [0x118c3808] */
  ECX = (r32((uint32_t)(0x118c3808)));
  /* 11897a06 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11897a09 mov dword ptr [0x118c3808], ecx */
  w32((uint32_t)(0x118c3808), (ECX));
  /* 11897a0f mov edx, dword ptr [0x118c3808] */
  EDX = (r32((uint32_t)(0x118c3808)));
  /* 11897a15 cmp edx, dword ptr [0x118c380c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x118c380c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897a1b jbe 0x11897a27 */
  if ((C.cf||C.zf)) goto L_11897a27;
  /* 11897a1d mov eax, dword ptr [0x118c3808] */
  EAX = (r32((uint32_t)(0x118c3808)));
  /* 11897a22 mov dword ptr [0x118c380c], eax */
  w32((uint32_t)(0x118c380c), (EAX));
L_11897a27:;
  /* 11897a27 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11897a2a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11897a2d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11897a30 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11897a33 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11897a36 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897a39 jbe 0x11897a5f */
  if ((C.cf||C.zf)) goto L_11897a5f;
  /* 11897a3b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11897a3e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11897a41 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11897a44 push edx */
  push32((uint32_t)(EDX));
  /* 11897a45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11897a47 mov al, byte ptr [0x118c1a92] */
  AL = (r8((uint32_t)(0x118c1a92)));
  /* 11897a4c push eax */
  push32((uint32_t)(EAX));
  /* 11897a4d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11897a50 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11897a53 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11897a56 push edx */
  push32((uint32_t)(EDX));
  /* 11897a57 call 0x1189af70 */
  push32(0x11897a5cu); f_1189af70();
  /* 11897a5c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11897a5f:;
  /* 11897a5f push 4 */
  push32((uint32_t)(0x4u));
  /* 11897a61 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11897a63 mov al, byte ptr [0x118c1a90] */
  AL = (r8((uint32_t)(0x118c1a90)));
  /* 11897a68 push eax */
  push32((uint32_t)(EAX));
  /* 11897a69 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11897a6c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11897a6f push ecx */
  push32((uint32_t)(ECX));
  /* 11897a70 call 0x1189af70 */
  push32(0x11897a75u); f_1189af70();
  /* 11897a75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897a78 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897a7c jne 0x11897a99 */
  if (!C.zf) goto L_11897a99;
  /* 11897a7e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11897a81 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11897a84 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11897a87 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11897a8a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11897a8d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 11897a90 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11897a93 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11897a96 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_11897a99:;
  /* 11897a99 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11897a9c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11897a9f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_11897aa2:;
  /* 11897aa2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897aa6 jne 0x11897ad7 */
  if (!C.zf) goto L_11897ad7;
  /* 11897aa8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897aac jne 0x11897ab6 */
  if (!C.zf) goto L_11897ab6;
  /* 11897aae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11897ab1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897ab4 je 0x11897ad7 */
  if (C.zf) goto L_11897ad7;
L_11897ab6:;
  /* 11897ab6 push 0x118bf0e4 */
  push32((uint32_t)(0x118bf0e4u));
  /* 11897abb push 0 */
  push32((uint32_t)(0x0u));
  /* 11897abd push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 11897ac2 push 0x118bf08c */
  push32((uint32_t)(0x118bf08cu));
  /* 11897ac7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11897ac9 call 0x118962c0 */
  push32(0x11897aceu); f_118962c0();
  /* 11897ace add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897ad1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897ad4 jne 0x11897ad7 */
  if (!C.zf) goto L_11897ad7;
  /* 11897ad6 int3  */
  x86_unimpl("int3 @ 0x11897ad6");
L_11897ad7:;
  /* 11897ad7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11897ad9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11897adb jne 0x11897aa2 */
  if (!C.zf) goto L_11897aa2;
  /* 11897add mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11897ae0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897ae3 je 0x11897aeb */
  if (C.zf) goto L_11897aeb;
  /* 11897ae5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897ae9 je 0x11897af3 */
  if (C.zf) goto L_11897af3;
L_11897aeb:;
  /* 11897aeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11897aee jmp 0x11897bda */
  goto L_11897bda;
L_11897af3:;
  /* 11897af3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11897af6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897af9 je 0x11897b0b */
  if (C.zf) goto L_11897b0b;
  /* 11897afb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11897afe mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11897b00 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11897b03 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11897b06 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11897b09 jmp 0x11897b47 */
  goto L_11897b47;
L_11897b0b:;
  /* 11897b0b mov eax, dword ptr [0x118c37fc] */
  EAX = (r32((uint32_t)(0x118c37fc)));
  /* 11897b10 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897b13 je 0x11897b36 */
  if (C.zf) goto L_11897b36;
  /* 11897b15 push 0x118bf0c8 */
  push32((uint32_t)(0x118bf0c8u));
  /* 11897b1a push 0 */
  push32((uint32_t)(0x0u));
  /* 11897b1c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 11897b21 push 0x118bf08c */
  push32((uint32_t)(0x118bf08cu));
  /* 11897b26 push 2 */
  push32((uint32_t)(0x2u));
  /* 11897b28 call 0x118962c0 */
  push32(0x11897b2du); f_118962c0();
  /* 11897b2d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897b30 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897b33 jne 0x11897b36 */
  if (!C.zf) goto L_11897b36;
  /* 11897b35 int3  */
  x86_unimpl("int3 @ 0x11897b35");
L_11897b36:;
  /* 11897b36 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11897b38 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11897b3a jne 0x11897b0b */
  if (!C.zf) goto L_11897b0b;
  /* 11897b3c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11897b3f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11897b42 mov dword ptr [0x118c37fc], eax */
  w32((uint32_t)(0x118c37fc), (EAX));
L_11897b47:;
  /* 11897b47 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11897b4a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897b4e je 0x11897b5f */
  if (C.zf) goto L_11897b5f;
  /* 11897b50 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11897b53 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11897b56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11897b59 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11897b5b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11897b5d jmp 0x11897b9a */
  goto L_11897b9a;
L_11897b5f:;
  /* 11897b5f mov eax, dword ptr [0x118c3804] */
  EAX = (r32((uint32_t)(0x118c3804)));
  /* 11897b64 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897b67 je 0x11897b8a */
  if (C.zf) goto L_11897b8a;
  /* 11897b69 push 0x118bf0ac */
  push32((uint32_t)(0x118bf0acu));
  /* 11897b6e push 0 */
  push32((uint32_t)(0x0u));
  /* 11897b70 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 11897b75 push 0x118bf08c */
  push32((uint32_t)(0x118bf08cu));
  /* 11897b7a push 2 */
  push32((uint32_t)(0x2u));
  /* 11897b7c call 0x118962c0 */
  push32(0x11897b81u); f_118962c0();
  /* 11897b81 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897b84 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897b87 jne 0x11897b8a */
  if (!C.zf) goto L_11897b8a;
  /* 11897b89 int3  */
  x86_unimpl("int3 @ 0x11897b89");
L_11897b8a:;
  /* 11897b8a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11897b8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11897b8e jne 0x11897b5f */
  if (!C.zf) goto L_11897b5f;
  /* 11897b90 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11897b93 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11897b95 mov dword ptr [0x118c3804], eax */
  w32((uint32_t)(0x118c3804), (EAX));
L_11897b9a:;
  /* 11897b9a cmp dword ptr [0x118c3804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897ba1 je 0x11897bb1 */
  if (C.zf) goto L_11897bb1;
  /* 11897ba3 mov ecx, dword ptr [0x118c3804] */
  ECX = (r32((uint32_t)(0x118c3804)));
  /* 11897ba9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11897bac mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11897baf jmp 0x11897bb9 */
  goto L_11897bb9;
L_11897bb1:;
  /* 11897bb1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11897bb4 mov dword ptr [0x118c37fc], eax */
  w32((uint32_t)(0x118c37fc), (EAX));
L_11897bb9:;
  /* 11897bb9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11897bbc mov edx, dword ptr [0x118c3804] */
  EDX = (r32((uint32_t)(0x118c3804)));
  /* 11897bc2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11897bc4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11897bc7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11897bce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11897bd1 mov dword ptr [0x118c3804], ecx */
  w32((uint32_t)(0x118c3804), (ECX));
  /* 11897bd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11897bda:;
  /* 11897bda pop edi */
  EDI = (pop32());
  /* 11897bdb pop esi */
  ESI = (pop32());
  /* 11897bdc pop ebx */
  EBX = (pop32());
  /* 11897bdd mov esp, ebp */
  ESP = (EBP);
  /* 11897bdf pop ebp */
  EBP = (pop32());
  /* 11897be0 ret  */
  ESPCHK(0x118976d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007bf0 @ 0x11897bf0 (27 bytes, 13 insns) */
void f_11897bf0(void) {
  FTRACE(0x11897bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11897bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11897bf1 mov ebp, esp */
  EBP = (ESP);
  /* 11897bf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11897bf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11897bf7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11897bf9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11897bfc push eax */
  push32((uint32_t)(EAX));
  /* 11897bfd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11897c00 push ecx */
  push32((uint32_t)(ECX));
  /* 11897c01 call 0x11897c10 */
  push32(0x11897c06u); f_11897c10();
  /* 11897c06 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897c09 pop ebp */
  EBP = (pop32());
  /* 11897c0a ret  */
  ESPCHK(0x11897bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c10 @ 0x11897c10 (64 bytes, 27 insns) */
void f_11897c10(void) {
  FTRACE(0x11897c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11897c10 push ebp */
  push32((uint32_t)(EBP));
  /* 11897c11 mov ebp, esp */
  EBP = (ESP);
  /* 11897c13 push ecx */
  push32((uint32_t)(ECX));
  /* 11897c14 push 9 */
  push32((uint32_t)(0x9u));
  /* 11897c16 call 0x1189ac00 */
  push32(0x11897c1bu); f_1189ac00();
  /* 11897c1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897c1e push 0 */
  push32((uint32_t)(0x0u));
  /* 11897c20 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11897c23 push eax */
  push32((uint32_t)(EAX));
  /* 11897c24 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11897c27 push ecx */
  push32((uint32_t)(ECX));
  /* 11897c28 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11897c2b push edx */
  push32((uint32_t)(EDX));
  /* 11897c2c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11897c2f push eax */
  push32((uint32_t)(EAX));
  /* 11897c30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11897c33 push ecx */
  push32((uint32_t)(ECX));
  /* 11897c34 call 0x118976d0 */
  push32(0x11897c39u); f_118976d0();
  /* 11897c39 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897c3c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11897c3f push 9 */
  push32((uint32_t)(0x9u));
  /* 11897c41 call 0x1189aca0 */
  push32(0x11897c46u); f_1189aca0();
  /* 11897c46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897c49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11897c4c mov esp, ebp */
  ESP = (EBP);
  /* 11897c4e pop ebp */
  EBP = (pop32());
  /* 11897c4f ret  */
  ESPCHK(0x11897c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c50 @ 0x11897c50 (19 bytes, 9 insns) */
void f_11897c50(void) {
  FTRACE(0x11897c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11897c50 push ebp */
  push32((uint32_t)(EBP));
  /* 11897c51 mov ebp, esp */
  EBP = (ESP);
  /* 11897c53 push 1 */
  push32((uint32_t)(0x1u));
  /* 11897c55 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11897c58 push eax */
  push32((uint32_t)(EAX));
  /* 11897c59 call 0x11897c90 */
  push32(0x11897c5eu); f_11897c90();
  /* 11897c5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897c61 pop ebp */
  EBP = (pop32());
  /* 11897c62 ret  */
  ESPCHK(0x11897c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c70 @ 0x11897c70 (19 bytes, 9 insns) */
void f_11897c70(void) {
  FTRACE(0x11897c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11897c70 push ebp */
  push32((uint32_t)(EBP));
  /* 11897c71 mov ebp, esp */
  EBP = (ESP);
  /* 11897c73 push 1 */
  push32((uint32_t)(0x1u));
  /* 11897c75 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11897c78 push eax */
  push32((uint32_t)(EAX));
  /* 11897c79 call 0x11897cc0 */
  push32(0x11897c7eu); f_11897cc0();
  /* 11897c7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897c81 pop ebp */
  EBP = (pop32());
  /* 11897c82 ret  */
  ESPCHK(0x11897c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c90 @ 0x11897c90 (41 bytes, 16 insns) */
void f_11897c90(void) {
  FTRACE(0x11897c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11897c90 push ebp */
  push32((uint32_t)(EBP));
  /* 11897c91 mov ebp, esp */
  EBP = (ESP);
  /* 11897c93 push 9 */
  push32((uint32_t)(0x9u));
  /* 11897c95 call 0x1189ac00 */
  push32(0x11897c9au); f_1189ac00();
  /* 11897c9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897c9d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11897ca0 push eax */
  push32((uint32_t)(EAX));
  /* 11897ca1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11897ca4 push ecx */
  push32((uint32_t)(ECX));
  /* 11897ca5 call 0x11897cc0 */
  push32(0x11897caau); f_11897cc0();
  /* 11897caa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897cad push 9 */
  push32((uint32_t)(0x9u));
  /* 11897caf call 0x1189aca0 */
  push32(0x11897cb4u); f_1189aca0();
  /* 11897cb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897cb7 pop ebp */
  EBP = (pop32());
  /* 11897cb8 ret  */
  ESPCHK(0x11897c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cc0 @ 0x11897cc0 (1004 bytes, 342 insns) */
void f_11897cc0(void) {
  FTRACE(0x11897cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11897cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11897cc1 mov ebp, esp */
  EBP = (ESP);
  /* 11897cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11897cc4 push ebx */
  push32((uint32_t)(EBX));
  /* 11897cc5 push esi */
  push32((uint32_t)(ESI));
  /* 11897cc6 push edi */
  push32((uint32_t)(EDI));
  /* 11897cc7 mov eax, dword ptr [0x118c1a84] */
  EAX = (r32((uint32_t)(0x118c1a84)));
  /* 11897ccc and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11897ccf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11897cd1 je 0x11897d03 */
  if (C.zf) goto L_11897d03;
L_11897cd3:;
  /* 11897cd3 call 0x118983a0 */
  push32(0x11897cd8u); f_118983a0();
  /* 11897cd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11897cda jne 0x11897cfd */
  if (!C.zf) goto L_11897cfd;
  /* 11897cdc push 0x118bf098 */
  push32((uint32_t)(0x118bf098u));
  /* 11897ce1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11897ce3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 11897ce8 push 0x118bf08c */
  push32((uint32_t)(0x118bf08cu));
  /* 11897ced push 2 */
  push32((uint32_t)(0x2u));
  /* 11897cef call 0x118962c0 */
  push32(0x11897cf4u); f_118962c0();
  /* 11897cf4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897cf7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897cfa jne 0x11897cfd */
  if (!C.zf) goto L_11897cfd;
  /* 11897cfc int3  */
  x86_unimpl("int3 @ 0x11897cfc");
L_11897cfd:;
  /* 11897cfd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11897cff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11897d01 jne 0x11897cd3 */
  if (!C.zf) goto L_11897cd3;
L_11897d03:;
  /* 11897d03 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897d07 jne 0x11897d0e */
  if (!C.zf) goto L_11897d0e;
  /* 11897d09 jmp 0x118980a5 */
  goto L_118980a5;
L_11897d0e:;
  /* 11897d0e push 0 */
  push32((uint32_t)(0x0u));
  /* 11897d10 push 0 */
  push32((uint32_t)(0x0u));
  /* 11897d12 push 0 */
  push32((uint32_t)(0x0u));
  /* 11897d14 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11897d17 push edx */
  push32((uint32_t)(EDX));
  /* 11897d18 push 0 */
  push32((uint32_t)(0x0u));
  /* 11897d1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11897d1d push eax */
  push32((uint32_t)(EAX));
  /* 11897d1e push 3 */
  push32((uint32_t)(0x3u));
  /* 11897d20 call dword ptr [0x118c1c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c1c90))), 0x11897d26u);
  /* 11897d26 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897d29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11897d2b jne 0x11897d58 */
  if (!C.zf) goto L_11897d58;
L_11897d2d:;
  /* 11897d2d push 0x118bf35c */
  push32((uint32_t)(0x118bf35cu));
  /* 11897d32 push 0x118bf02c */
  push32((uint32_t)(0x118bf02cu));
  /* 11897d37 push 0 */
  push32((uint32_t)(0x0u));
  /* 11897d39 push 0 */
  push32((uint32_t)(0x0u));
  /* 11897d3b push 0 */
  push32((uint32_t)(0x0u));
  /* 11897d3d push 0 */
  push32((uint32_t)(0x0u));
  /* 11897d3f call 0x118962c0 */
  push32(0x11897d44u); f_118962c0();
  /* 11897d44 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897d47 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897d4a jne 0x11897d4d */
  if (!C.zf) goto L_11897d4d;
  /* 11897d4c int3  */
  x86_unimpl("int3 @ 0x11897d4c");
L_11897d4d:;
  /* 11897d4d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11897d4f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11897d51 jne 0x11897d2d */
  if (!C.zf) goto L_11897d2d;
  /* 11897d53 jmp 0x118980a5 */
  goto L_118980a5;
L_11897d58:;
  /* 11897d58 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11897d5b push edx */
  push32((uint32_t)(EDX));
  /* 11897d5c call 0x11898800 */
  push32(0x11897d61u); f_11898800();
  /* 11897d61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897d64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11897d66 jne 0x11897d89 */
  if (!C.zf) goto L_11897d89;
  /* 11897d68 push 0x118bf19c */
  push32((uint32_t)(0x118bf19cu));
  /* 11897d6d push 0 */
  push32((uint32_t)(0x0u));
  /* 11897d6f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 11897d74 push 0x118bf08c */
  push32((uint32_t)(0x118bf08cu));
  /* 11897d79 push 2 */
  push32((uint32_t)(0x2u));
  /* 11897d7b call 0x118962c0 */
  push32(0x11897d80u); f_118962c0();
  /* 11897d80 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897d83 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897d86 jne 0x11897d89 */
  if (!C.zf) goto L_11897d89;
  /* 11897d88 int3  */
  x86_unimpl("int3 @ 0x11897d88");
L_11897d89:;
  /* 11897d89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11897d8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11897d8d jne 0x11897d58 */
  if (!C.zf) goto L_11897d58;
  /* 11897d8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11897d92 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11897d95 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11897d98:;
  /* 11897d98 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11897d9b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11897d9e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11897da3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897da6 je 0x11897deb */
  if (C.zf) goto L_11897deb;
  /* 11897da8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11897dab cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897daf je 0x11897deb */
  if (C.zf) goto L_11897deb;
  /* 11897db1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11897db4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11897db7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11897dbc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897dbf je 0x11897deb */
  if (C.zf) goto L_11897deb;
  /* 11897dc1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11897dc4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897dc8 je 0x11897deb */
  if (C.zf) goto L_11897deb;
  /* 11897dca push 0x118bf334 */
  push32((uint32_t)(0x118bf334u));
  /* 11897dcf push 0 */
  push32((uint32_t)(0x0u));
  /* 11897dd1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 11897dd6 push 0x118bf08c */
  push32((uint32_t)(0x118bf08cu));
  /* 11897ddb push 2 */
  push32((uint32_t)(0x2u));
  /* 11897ddd call 0x118962c0 */
  push32(0x11897de2u); f_118962c0();
  /* 11897de2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897de5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897de8 jne 0x11897deb */
  if (!C.zf) goto L_11897deb;
  /* 11897dea int3  */
  x86_unimpl("int3 @ 0x11897dea");
L_11897deb:;
  /* 11897deb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11897ded test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11897def jne 0x11897d98 */
  if (!C.zf) goto L_11897d98;
  /* 11897df1 mov eax, dword ptr [0x118c1a84] */
  EAX = (r32((uint32_t)(0x118c1a84)));
  /* 11897df6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11897df9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11897dfb jne 0x11897ec6 */
  if (!C.zf) goto L_11897ec6;
  /* 11897e01 push 4 */
  push32((uint32_t)(0x4u));
  /* 11897e03 mov cl, byte ptr [0x118c1a90] */
  CL = (r8((uint32_t)(0x118c1a90)));
  /* 11897e09 push ecx */
  push32((uint32_t)(ECX));
  /* 11897e0a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11897e0d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11897e10 push edx */
  push32((uint32_t)(EDX));
  /* 11897e11 call 0x11898310 */
  push32(0x11897e16u); f_11898310();
  /* 11897e16 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897e19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11897e1b jne 0x11897e60 */
  if (!C.zf) goto L_11897e60;
L_11897e1d:;
  /* 11897e1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11897e20 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11897e23 push eax */
  push32((uint32_t)(EAX));
  /* 11897e24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11897e27 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11897e2a push edx */
  push32((uint32_t)(EDX));
  /* 11897e2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11897e2e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11897e31 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11897e37 mov edx, dword ptr [ecx*4 + 0x118c1a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x118c1a94)));
  /* 11897e3e push edx */
  push32((uint32_t)(EDX));
  /* 11897e3f push 0x118bf308 */
  push32((uint32_t)(0x118bf308u));
  /* 11897e44 push 0 */
  push32((uint32_t)(0x0u));
  /* 11897e46 push 0 */
  push32((uint32_t)(0x0u));
  /* 11897e48 push 0 */
  push32((uint32_t)(0x0u));
  /* 11897e4a push 1 */
  push32((uint32_t)(0x1u));
  /* 11897e4c call 0x118962c0 */
  push32(0x11897e51u); f_118962c0();
  /* 11897e51 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897e54 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897e57 jne 0x11897e5a */
  if (!C.zf) goto L_11897e5a;
  /* 11897e59 int3  */
  x86_unimpl("int3 @ 0x11897e59");
L_11897e5a:;
  /* 11897e5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11897e5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11897e5e jne 0x11897e1d */
  if (!C.zf) goto L_11897e1d;
L_11897e60:;
  /* 11897e60 push 4 */
  push32((uint32_t)(0x4u));
  /* 11897e62 mov cl, byte ptr [0x118c1a90] */
  CL = (r8((uint32_t)(0x118c1a90)));
  /* 11897e68 push ecx */
  push32((uint32_t)(ECX));
  /* 11897e69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11897e6c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11897e6f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11897e72 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 11897e76 push edx */
  push32((uint32_t)(EDX));
  /* 11897e77 call 0x11898310 */
  push32(0x11897e7cu); f_11898310();
  /* 11897e7c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897e7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11897e81 jne 0x11897ec6 */
  if (!C.zf) goto L_11897ec6;
L_11897e83:;
  /* 11897e83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11897e86 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11897e89 push eax */
  push32((uint32_t)(EAX));
  /* 11897e8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11897e8d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11897e90 push edx */
  push32((uint32_t)(EDX));
  /* 11897e91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11897e94 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11897e97 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11897e9d mov edx, dword ptr [ecx*4 + 0x118c1a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x118c1a94)));
  /* 11897ea4 push edx */
  push32((uint32_t)(EDX));
  /* 11897ea5 push 0x118bf2dc */
  push32((uint32_t)(0x118bf2dcu));
  /* 11897eaa push 0 */
  push32((uint32_t)(0x0u));
  /* 11897eac push 0 */
  push32((uint32_t)(0x0u));
  /* 11897eae push 0 */
  push32((uint32_t)(0x0u));
  /* 11897eb0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11897eb2 call 0x118962c0 */
  push32(0x11897eb7u); f_118962c0();
  /* 11897eb7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897eba cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897ebd jne 0x11897ec0 */
  if (!C.zf) goto L_11897ec0;
  /* 11897ebf int3  */
  x86_unimpl("int3 @ 0x11897ebf");
L_11897ec0:;
  /* 11897ec0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11897ec2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11897ec4 jne 0x11897e83 */
  if (!C.zf) goto L_11897e83;
L_11897ec6:;
  /* 11897ec6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11897ec9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897ecd jne 0x11897f3b */
  if (!C.zf) goto L_11897f3b;
L_11897ecf:;
  /* 11897ecf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11897ed2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897ed9 jne 0x11897ee4 */
  if (!C.zf) goto L_11897ee4;
  /* 11897edb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11897ede cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897ee2 je 0x11897f05 */
  if (C.zf) goto L_11897f05;
L_11897ee4:;
  /* 11897ee4 push 0x118bf29c */
  push32((uint32_t)(0x118bf29cu));
  /* 11897ee9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11897eeb push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 11897ef0 push 0x118bf08c */
  push32((uint32_t)(0x118bf08cu));
  /* 11897ef5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11897ef7 call 0x118962c0 */
  push32(0x11897efcu); f_118962c0();
  /* 11897efc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897eff cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897f02 jne 0x11897f05 */
  if (!C.zf) goto L_11897f05;
  /* 11897f04 int3  */
  x86_unimpl("int3 @ 0x11897f04");
L_11897f05:;
  /* 11897f05 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11897f07 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11897f09 jne 0x11897ecf */
  if (!C.zf) goto L_11897ecf;
  /* 11897f0b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11897f0e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11897f11 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11897f14 push eax */
  push32((uint32_t)(EAX));
  /* 11897f15 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11897f17 mov cl, byte ptr [0x118c1a91] */
  CL = (r8((uint32_t)(0x118c1a91)));
  /* 11897f1d push ecx */
  push32((uint32_t)(ECX));
  /* 11897f1e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11897f21 push edx */
  push32((uint32_t)(EDX));
  /* 11897f22 call 0x1189af70 */
  push32(0x11897f27u); f_1189af70();
  /* 11897f27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897f2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11897f2d push eax */
  push32((uint32_t)(EAX));
  /* 11897f2e call 0x1189b370 */
  push32(0x11897f33u); f_1189b370();
  /* 11897f33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897f36 jmp 0x118980a5 */
  goto L_118980a5;
L_11897f3b:;
  /* 11897f3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11897f3e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897f42 jne 0x11897f51 */
  if (!C.zf) goto L_11897f51;
  /* 11897f44 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897f48 jne 0x11897f51 */
  if (!C.zf) goto L_11897f51;
  /* 11897f4a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_11897f51:;
  /* 11897f51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11897f54 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11897f57 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897f5a je 0x11897f7d */
  if (C.zf) goto L_11897f7d;
  /* 11897f5c push 0x118bf27c */
  push32((uint32_t)(0x118bf27cu));
  /* 11897f61 push 0 */
  push32((uint32_t)(0x0u));
  /* 11897f63 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 11897f68 push 0x118bf08c */
  push32((uint32_t)(0x118bf08cu));
  /* 11897f6d push 2 */
  push32((uint32_t)(0x2u));
  /* 11897f6f call 0x118962c0 */
  push32(0x11897f74u); f_118962c0();
  /* 11897f74 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897f77 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897f7a jne 0x11897f7d */
  if (!C.zf) goto L_11897f7d;
  /* 11897f7c int3  */
  x86_unimpl("int3 @ 0x11897f7c");
L_11897f7d:;
  /* 11897f7d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11897f7f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11897f81 jne 0x11897f51 */
  if (!C.zf) goto L_11897f51;
  /* 11897f83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11897f86 mov eax, dword ptr [0x118c3808] */
  EAX = (r32((uint32_t)(0x118c3808)));
  /* 11897f8b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11897f8e mov dword ptr [0x118c3808], eax */
  w32((uint32_t)(0x118c3808), (EAX));
  /* 11897f93 mov ecx, dword ptr [0x118c1a84] */
  ECX = (r32((uint32_t)(0x118c1a84)));
  /* 11897f99 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11897f9c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11897f9e jne 0x1189807c */
  if (!C.zf) goto L_1189807c;
  /* 11897fa4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11897fa7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897faa je 0x11897fbc */
  if (C.zf) goto L_11897fbc;
  /* 11897fac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11897faf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11897fb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11897fb4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11897fb7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11897fba jmp 0x11897ffa */
  goto L_11897ffa;
L_11897fbc:;
  /* 11897fbc mov ecx, dword ptr [0x118c37fc] */
  ECX = (r32((uint32_t)(0x118c37fc)));
  /* 11897fc2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897fc5 je 0x11897fe8 */
  if (C.zf) goto L_11897fe8;
  /* 11897fc7 push 0x118bf264 */
  push32((uint32_t)(0x118bf264u));
  /* 11897fcc push 0 */
  push32((uint32_t)(0x0u));
  /* 11897fce push 0x42a */
  push32((uint32_t)(0x42au));
  /* 11897fd3 push 0x118bf08c */
  push32((uint32_t)(0x118bf08cu));
  /* 11897fd8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11897fda call 0x118962c0 */
  push32(0x11897fdfu); f_118962c0();
  /* 11897fdf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11897fe2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11897fe5 jne 0x11897fe8 */
  if (!C.zf) goto L_11897fe8;
  /* 11897fe7 int3  */
  x86_unimpl("int3 @ 0x11897fe7");
L_11897fe8:;
  /* 11897fe8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11897fea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11897fec jne 0x11897fbc */
  if (!C.zf) goto L_11897fbc;
  /* 11897fee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11897ff1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11897ff4 mov dword ptr [0x118c37fc], ecx */
  w32((uint32_t)(0x118c37fc), (ECX));
L_11897ffa:;
  /* 11897ffa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11897ffd cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898001 je 0x11898012 */
  if (C.zf) goto L_11898012;
  /* 11898003 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898006 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11898009 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189800c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1189800e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11898010 jmp 0x1189804f */
  goto L_1189804f;
L_11898012:;
  /* 11898012 mov ecx, dword ptr [0x118c3804] */
  ECX = (r32((uint32_t)(0x118c3804)));
  /* 11898018 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189801b je 0x1189803e */
  if (C.zf) goto L_1189803e;
  /* 1189801d push 0x118bf24c */
  push32((uint32_t)(0x118bf24cu));
  /* 11898022 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898024 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 11898029 push 0x118bf08c */
  push32((uint32_t)(0x118bf08cu));
  /* 1189802e push 2 */
  push32((uint32_t)(0x2u));
  /* 11898030 call 0x118962c0 */
  push32(0x11898035u); f_118962c0();
  /* 11898035 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11898038 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189803b jne 0x1189803e */
  if (!C.zf) goto L_1189803e;
  /* 1189803d int3  */
  x86_unimpl("int3 @ 0x1189803d");
L_1189803e:;
  /* 1189803e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11898040 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11898042 jne 0x11898012 */
  if (!C.zf) goto L_11898012;
  /* 11898044 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898047 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11898049 mov dword ptr [0x118c3804], ecx */
  w32((uint32_t)(0x118c3804), (ECX));
L_1189804f:;
  /* 1189804f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898052 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11898055 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11898058 push eax */
  push32((uint32_t)(EAX));
  /* 11898059 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1189805b mov cl, byte ptr [0x118c1a91] */
  CL = (r8((uint32_t)(0x118c1a91)));
  /* 11898061 push ecx */
  push32((uint32_t)(ECX));
  /* 11898062 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898065 push edx */
  push32((uint32_t)(EDX));
  /* 11898066 call 0x1189af70 */
  push32(0x1189806bu); f_1189af70();
  /* 1189806b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189806e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898071 push eax */
  push32((uint32_t)(EAX));
  /* 11898072 call 0x1189b370 */
  push32(0x11898077u); f_1189b370();
  /* 11898077 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189807a jmp 0x118980a5 */
  goto L_118980a5;
L_1189807c:;
  /* 1189807c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189807f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 11898086 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898089 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1189808c push eax */
  push32((uint32_t)(EAX));
  /* 1189808d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1189808f mov cl, byte ptr [0x118c1a91] */
  CL = (r8((uint32_t)(0x118c1a91)));
  /* 11898095 push ecx */
  push32((uint32_t)(ECX));
  /* 11898096 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898099 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189809c push edx */
  push32((uint32_t)(EDX));
  /* 1189809d call 0x1189af70 */
  push32(0x118980a2u); f_1189af70();
  /* 118980a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118980a5:;
  /* 118980a5 pop edi */
  EDI = (pop32());
  /* 118980a6 pop esi */
  ESI = (pop32());
  /* 118980a7 pop ebx */
  EBX = (pop32());
  /* 118980a8 mov esp, ebp */
  ESP = (EBP);
  /* 118980aa pop ebp */
  EBP = (pop32());
  /* 118980ab ret  */
  ESPCHK(0x11897cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_100080b0 @ 0x118980b0 (19 bytes, 9 insns) */
void f_118980b0(void) {
  FTRACE(0x118980b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118980b0 push ebp */
  push32((uint32_t)(EBP));
  /* 118980b1 mov ebp, esp */
  EBP = (ESP);
  /* 118980b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 118980b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118980b8 push eax */
  push32((uint32_t)(EAX));
  /* 118980b9 call 0x118980d0 */
  push32(0x118980beu); f_118980d0();
  /* 118980be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118980c1 pop ebp */
  EBP = (pop32());
  /* 118980c2 ret  */
  ESPCHK(0x118980b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100080d0 @ 0x118980d0 (342 bytes, 119 insns) */
void f_118980d0(void) {
  FTRACE(0x118980d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118980d0 push ebp */
  push32((uint32_t)(EBP));
  /* 118980d1 mov ebp, esp */
  EBP = (ESP);
  /* 118980d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118980d6 push ebx */
  push32((uint32_t)(EBX));
  /* 118980d7 push esi */
  push32((uint32_t)(ESI));
  /* 118980d8 push edi */
  push32((uint32_t)(EDI));
  /* 118980d9 mov eax, dword ptr [0x118c1a84] */
  EAX = (r32((uint32_t)(0x118c1a84)));
  /* 118980de and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 118980e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118980e3 je 0x11898115 */
  if (C.zf) goto L_11898115;
L_118980e5:;
  /* 118980e5 call 0x118983a0 */
  push32(0x118980eau); f_118983a0();
  /* 118980ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118980ec jne 0x1189810f */
  if (!C.zf) goto L_1189810f;
  /* 118980ee push 0x118bf098 */
  push32((uint32_t)(0x118bf098u));
  /* 118980f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 118980f5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 118980fa push 0x118bf08c */
  push32((uint32_t)(0x118bf08cu));
  /* 118980ff push 2 */
  push32((uint32_t)(0x2u));
  /* 11898101 call 0x118962c0 */
  push32(0x11898106u); f_118962c0();
  /* 11898106 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11898109 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189810c jne 0x1189810f */
  if (!C.zf) goto L_1189810f;
  /* 1189810e int3  */
  x86_unimpl("int3 @ 0x1189810e");
L_1189810f:;
  /* 1189810f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11898111 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11898113 jne 0x118980e5 */
  if (!C.zf) goto L_118980e5;
L_11898115:;
  /* 11898115 push 9 */
  push32((uint32_t)(0x9u));
  /* 11898117 call 0x1189ac00 */
  push32(0x1189811cu); f_1189ac00();
  /* 1189811c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1189811f:;
  /* 1189811f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11898122 push edx */
  push32((uint32_t)(EDX));
  /* 11898123 call 0x11898800 */
  push32(0x11898128u); f_11898800();
  /* 11898128 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189812b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189812d jne 0x11898150 */
  if (!C.zf) goto L_11898150;
  /* 1189812f push 0x118bf19c */
  push32((uint32_t)(0x118bf19cu));
  /* 11898134 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898136 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 1189813b push 0x118bf08c */
  push32((uint32_t)(0x118bf08cu));
  /* 11898140 push 2 */
  push32((uint32_t)(0x2u));
  /* 11898142 call 0x118962c0 */
  push32(0x11898147u); f_118962c0();
  /* 11898147 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189814a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189814d jne 0x11898150 */
  if (!C.zf) goto L_11898150;
  /* 1189814f int3  */
  x86_unimpl("int3 @ 0x1189814f");
L_11898150:;
  /* 11898150 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11898152 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11898154 jne 0x1189811f */
  if (!C.zf) goto L_1189811f;
  /* 11898156 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11898159 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189815c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1189815f:;
  /* 1189815f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11898162 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11898165 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1189816a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189816d je 0x118981b2 */
  if (C.zf) goto L_118981b2;
  /* 1189816f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11898172 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898176 je 0x118981b2 */
  if (C.zf) goto L_118981b2;
  /* 11898178 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189817b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1189817e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11898183 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898186 je 0x118981b2 */
  if (C.zf) goto L_118981b2;
  /* 11898188 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189818b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189818f je 0x118981b2 */
  if (C.zf) goto L_118981b2;
  /* 11898191 push 0x118bf334 */
  push32((uint32_t)(0x118bf334u));
  /* 11898196 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898198 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 1189819d push 0x118bf08c */
  push32((uint32_t)(0x118bf08cu));
  /* 118981a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 118981a4 call 0x118962c0 */
  push32(0x118981a9u); f_118962c0();
  /* 118981a9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118981ac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118981af jne 0x118981b2 */
  if (!C.zf) goto L_118981b2;
  /* 118981b1 int3  */
  x86_unimpl("int3 @ 0x118981b1");
L_118981b2:;
  /* 118981b2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118981b4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118981b6 jne 0x1189815f */
  if (!C.zf) goto L_1189815f;
  /* 118981b8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118981bb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118981bf jne 0x118981ce */
  if (!C.zf) goto L_118981ce;
  /* 118981c1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118981c5 jne 0x118981ce */
  if (!C.zf) goto L_118981ce;
  /* 118981c7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_118981ce:;
  /* 118981ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118981d1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118981d5 je 0x11898209 */
  if (C.zf) goto L_11898209;
L_118981d7:;
  /* 118981d7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118981da mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 118981dd cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118981e0 je 0x11898203 */
  if (C.zf) goto L_11898203;
  /* 118981e2 push 0x118bf27c */
  push32((uint32_t)(0x118bf27cu));
  /* 118981e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 118981e9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 118981ee push 0x118bf08c */
  push32((uint32_t)(0x118bf08cu));
  /* 118981f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 118981f5 call 0x118962c0 */
  push32(0x118981fau); f_118962c0();
  /* 118981fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118981fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898200 jne 0x11898203 */
  if (!C.zf) goto L_11898203;
  /* 11898202 int3  */
  x86_unimpl("int3 @ 0x11898202");
L_11898203:;
  /* 11898203 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11898205 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11898207 jne 0x118981d7 */
  if (!C.zf) goto L_118981d7;
L_11898209:;
  /* 11898209 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189820c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1189820f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11898212 push 9 */
  push32((uint32_t)(0x9u));
  /* 11898214 call 0x1189aca0 */
  push32(0x11898219u); f_1189aca0();
  /* 11898219 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189821c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189821f pop edi */
  EDI = (pop32());
  /* 11898220 pop esi */
  ESI = (pop32());
  /* 11898221 pop ebx */
  EBX = (pop32());
  /* 11898222 mov esp, ebp */
  ESP = (EBP);
  /* 11898224 pop ebp */
  EBP = (pop32());
  /* 11898225 ret  */
  ESPCHK(0x118980d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008230 @ 0x11898230 (28 bytes, 11 insns) */
void f_11898230(void) {
  FTRACE(0x11898230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11898230 push ebp */
  push32((uint32_t)(EBP));
  /* 11898231 mov ebp, esp */
  EBP = (ESP);
  /* 11898233 push ecx */
  push32((uint32_t)(ECX));
  /* 11898234 mov eax, dword ptr [0x118c1a8c] */
  EAX = (r32((uint32_t)(0x118c1a8c)));
  /* 11898239 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1189823c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189823f mov dword ptr [0x118c1a8c], ecx */
  w32((uint32_t)(0x118c1a8c), (ECX));
  /* 11898245 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898248 mov esp, ebp */
  ESP = (EBP);
  /* 1189824a pop ebp */
  EBP = (pop32());
  /* 1189824b ret  */
  ESPCHK(0x11898230u, _esp0);
  ESP += 4; return;
}

/* FUN_10008250 @ 0x11898250 (157 bytes, 59 insns) */
void f_11898250(void) {
  FTRACE(0x11898250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11898250 push ebp */
  push32((uint32_t)(EBP));
  /* 11898251 mov ebp, esp */
  EBP = (ESP);
  /* 11898253 push ecx */
  push32((uint32_t)(ECX));
  /* 11898254 push ebx */
  push32((uint32_t)(EBX));
  /* 11898255 push esi */
  push32((uint32_t)(ESI));
  /* 11898256 push edi */
  push32((uint32_t)(EDI));
  /* 11898257 push 9 */
  push32((uint32_t)(0x9u));
  /* 11898259 call 0x1189ac00 */
  push32(0x1189825eu); f_1189ac00();
  /* 1189825e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11898261 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11898264 push eax */
  push32((uint32_t)(EAX));
  /* 11898265 call 0x11898800 */
  push32(0x1189826au); f_11898800();
  /* 1189826a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189826d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189826f je 0x118982dc */
  if (C.zf) goto L_118982dc;
  /* 11898271 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11898274 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11898277 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1189827a:;
  /* 1189827a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189827d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11898280 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11898285 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898288 je 0x118982cd */
  if (C.zf) goto L_118982cd;
  /* 1189828a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189828d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898291 je 0x118982cd */
  if (C.zf) goto L_118982cd;
  /* 11898293 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898296 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11898299 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1189829e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118982a1 je 0x118982cd */
  if (C.zf) goto L_118982cd;
  /* 118982a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118982a6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118982aa je 0x118982cd */
  if (C.zf) goto L_118982cd;
  /* 118982ac push 0x118bf334 */
  push32((uint32_t)(0x118bf334u));
  /* 118982b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 118982b3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 118982b8 push 0x118bf08c */
  push32((uint32_t)(0x118bf08cu));
  /* 118982bd push 2 */
  push32((uint32_t)(0x2u));
  /* 118982bf call 0x118962c0 */
  push32(0x118982c4u); f_118962c0();
  /* 118982c4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118982c7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118982ca jne 0x118982cd */
  if (!C.zf) goto L_118982cd;
  /* 118982cc int3  */
  x86_unimpl("int3 @ 0x118982cc");
L_118982cd:;
  /* 118982cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118982cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118982d1 jne 0x1189827a */
  if (!C.zf) goto L_1189827a;
  /* 118982d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118982d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118982d9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_118982dc:;
  /* 118982dc push 9 */
  push32((uint32_t)(0x9u));
  /* 118982de call 0x1189aca0 */
  push32(0x118982e3u); f_1189aca0();
  /* 118982e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118982e6 pop edi */
  EDI = (pop32());
  /* 118982e7 pop esi */
  ESI = (pop32());
  /* 118982e8 pop ebx */
  EBX = (pop32());
  /* 118982e9 mov esp, ebp */
  ESP = (EBP);
  /* 118982eb pop ebp */
  EBP = (pop32());
  /* 118982ec ret  */
  ESPCHK(0x11898250u, _esp0);
  ESP += 4; return;
}

/* FUN_100082f0 @ 0x118982f0 (28 bytes, 11 insns) */
void f_118982f0(void) {
  FTRACE(0x118982f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118982f0 push ebp */
  push32((uint32_t)(EBP));
  /* 118982f1 mov ebp, esp */
  EBP = (ESP);
  /* 118982f3 push ecx */
  push32((uint32_t)(ECX));
  /* 118982f4 mov eax, dword ptr [0x118c1c90] */
  EAX = (r32((uint32_t)(0x118c1c90)));
  /* 118982f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118982fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118982ff mov dword ptr [0x118c1c90], ecx */
  w32((uint32_t)(0x118c1c90), (ECX));
  /* 11898305 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898308 mov esp, ebp */
  ESP = (EBP);
  /* 1189830a pop ebp */
  EBP = (pop32());
  /* 1189830b ret  */
  ESPCHK(0x118982f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008310 @ 0x11898310 (136 bytes, 55 insns) */
void f_11898310(void) {
  FTRACE(0x11898310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11898310 push ebp */
  push32((uint32_t)(EBP));
  /* 11898311 mov ebp, esp */
  EBP = (ESP);
  /* 11898313 push ecx */
  push32((uint32_t)(ECX));
  /* 11898314 push ebx */
  push32((uint32_t)(EBX));
  /* 11898315 push esi */
  push32((uint32_t)(ESI));
  /* 11898316 push edi */
  push32((uint32_t)(EDI));
  /* 11898317 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_1189831e:;
  /* 1189831e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11898321 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11898324 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11898327 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1189832a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189832c je 0x1189838e */
  if (C.zf) goto L_1189838e;
  /* 1189832e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11898331 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11898333 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11898335 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11898338 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1189833e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11898341 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11898344 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11898347 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898349 je 0x1189838c */
  if (C.zf) goto L_1189838c;
L_1189834b:;
  /* 1189834b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189834e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11898353 push eax */
  push32((uint32_t)(EAX));
  /* 11898354 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11898357 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11898359 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 1189835c push edx */
  push32((uint32_t)(EDX));
  /* 1189835d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11898360 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11898363 push eax */
  push32((uint32_t)(EAX));
  /* 11898364 push 0x118bf378 */
  push32((uint32_t)(0x118bf378u));
  /* 11898369 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189836b push 0 */
  push32((uint32_t)(0x0u));
  /* 1189836d push 0 */
  push32((uint32_t)(0x0u));
  /* 1189836f push 0 */
  push32((uint32_t)(0x0u));
  /* 11898371 call 0x118962c0 */
  push32(0x11898376u); f_118962c0();
  /* 11898376 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11898379 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189837c jne 0x1189837f */
  if (!C.zf) goto L_1189837f;
  /* 1189837e int3  */
  x86_unimpl("int3 @ 0x1189837e");
L_1189837f:;
  /* 1189837f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11898381 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11898383 jne 0x1189834b */
  if (!C.zf) goto L_1189834b;
  /* 11898385 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1189838c:;
  /* 1189838c jmp 0x1189831e */
  goto L_1189831e;
L_1189838e:;
  /* 1189838e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898391 pop edi */
  EDI = (pop32());
  /* 11898392 pop esi */
  ESI = (pop32());
  /* 11898393 pop ebx */
  EBX = (pop32());
  /* 11898394 mov esp, ebp */
  ESP = (EBP);
  /* 11898396 pop ebp */
  EBP = (pop32());
  /* 11898397 ret  */
  ESPCHK(0x11898310u, _esp0);
  ESP += 4; return;
}

/* FUN_100083a0 @ 0x118983a0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_118983a0(void) {
  FTRACE(0x118983a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118983a0 push ebp */
  push32((uint32_t)(EBP));
  /* 118983a1 mov ebp, esp */
  EBP = (ESP);
  /* 118983a3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118983a6 push ebx */
  push32((uint32_t)(EBX));
  /* 118983a7 push esi */
  push32((uint32_t)(ESI));
  /* 118983a8 push edi */
  push32((uint32_t)(EDI));
  /* 118983a9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 118983b0 mov eax, dword ptr [0x118c1a84] */
  EAX = (r32((uint32_t)(0x118c1a84)));
  /* 118983b5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 118983b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118983ba jne 0x118983c6 */
  if (!C.zf) goto L_118983c6;
  /* 118983bc mov eax, 1 */
  EAX = (0x1u);
  /* 118983c1 jmp 0x118986f8 */
  goto L_118986f8;
L_118983c6:;
  /* 118983c6 push 9 */
  push32((uint32_t)(0x9u));
  /* 118983c8 call 0x1189ac00 */
  push32(0x118983cdu); f_1189ac00();
  /* 118983cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118983d0 call 0x1189b3e0 */
  push32(0x118983d5u); f_1189b3e0();
  /* 118983d5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 118983d8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118983dc je 0x118984e9 */
  if (C.zf) goto L_118984e9;
  /* 118983e2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118983e6 je 0x118984e9 */
  if (C.zf) goto L_118984e9;
  /* 118983ec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118983ef mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 118983f2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 118983f5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118983f8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 118983fb cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118983ff ja 0x118984b2 */
  if ((!C.cf&&!C.zf)) goto L_118984b2;
  /* 11898405 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11898408 jmp dword ptr [eax*4 + 0x118986ff] */
  switch (EAX) {
    case 0: goto L_1189848a;
    case 1: goto L_11898462;
    case 2: goto L_1189843a;
    case 3: goto L_1189840f;
    default: x86_unimpl("switch@0x11898408 out of table"); return;
  }
L_1189840f:;
  /* 1189840f push 0x118bf4cc */
  push32((uint32_t)(0x118bf4ccu));
  /* 11898414 push 0x118bf02c */
  push32((uint32_t)(0x118bf02cu));
  /* 11898419 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189841b push 0 */
  push32((uint32_t)(0x0u));
  /* 1189841d push 0 */
  push32((uint32_t)(0x0u));
  /* 1189841f push 0 */
  push32((uint32_t)(0x0u));
  /* 11898421 call 0x118962c0 */
  push32(0x11898426u); f_118962c0();
  /* 11898426 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11898429 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189842c jne 0x1189842f */
  if (!C.zf) goto L_1189842f;
  /* 1189842e int3  */
  x86_unimpl("int3 @ 0x1189842e");
L_1189842f:;
  /* 1189842f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11898431 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11898433 jne 0x1189840f */
  if (!C.zf) goto L_1189840f;
  /* 11898435 jmp 0x118984d8 */
  goto L_118984d8;
L_1189843a:;
  /* 1189843a push 0x118bf4a8 */
  push32((uint32_t)(0x118bf4a8u));
  /* 1189843f push 0x118bf02c */
  push32((uint32_t)(0x118bf02cu));
  /* 11898444 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898446 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898448 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189844a push 0 */
  push32((uint32_t)(0x0u));
  /* 1189844c call 0x118962c0 */
  push32(0x11898451u); f_118962c0();
  /* 11898451 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11898454 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898457 jne 0x1189845a */
  if (!C.zf) goto L_1189845a;
  /* 11898459 int3  */
  x86_unimpl("int3 @ 0x11898459");
L_1189845a:;
  /* 1189845a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1189845c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189845e jne 0x1189843a */
  if (!C.zf) goto L_1189843a;
  /* 11898460 jmp 0x118984d8 */
  goto L_118984d8;
L_11898462:;
  /* 11898462 push 0x118bf484 */
  push32((uint32_t)(0x118bf484u));
  /* 11898467 push 0x118bf02c */
  push32((uint32_t)(0x118bf02cu));
  /* 1189846c push 0 */
  push32((uint32_t)(0x0u));
  /* 1189846e push 0 */
  push32((uint32_t)(0x0u));
  /* 11898470 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898472 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898474 call 0x118962c0 */
  push32(0x11898479u); f_118962c0();
  /* 11898479 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189847c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189847f jne 0x11898482 */
  if (!C.zf) goto L_11898482;
  /* 11898481 int3  */
  x86_unimpl("int3 @ 0x11898481");
L_11898482:;
  /* 11898482 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11898484 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11898486 jne 0x11898462 */
  if (!C.zf) goto L_11898462;
  /* 11898488 jmp 0x118984d8 */
  goto L_118984d8;
L_1189848a:;
  /* 1189848a push 0x118bf460 */
  push32((uint32_t)(0x118bf460u));
  /* 1189848f push 0x118bf02c */
  push32((uint32_t)(0x118bf02cu));
  /* 11898494 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898496 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898498 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189849a push 0 */
  push32((uint32_t)(0x0u));
  /* 1189849c call 0x118962c0 */
  push32(0x118984a1u); f_118962c0();
  /* 118984a1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118984a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118984a7 jne 0x118984aa */
  if (!C.zf) goto L_118984aa;
  /* 118984a9 int3  */
  x86_unimpl("int3 @ 0x118984a9");
L_118984aa:;
  /* 118984aa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118984ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118984ae jne 0x1189848a */
  if (!C.zf) goto L_1189848a;
  /* 118984b0 jmp 0x118984d8 */
  goto L_118984d8;
L_118984b2:;
  /* 118984b2 push 0x118bf434 */
  push32((uint32_t)(0x118bf434u));
  /* 118984b7 push 0x118bf02c */
  push32((uint32_t)(0x118bf02cu));
  /* 118984bc push 0 */
  push32((uint32_t)(0x0u));
  /* 118984be push 0 */
  push32((uint32_t)(0x0u));
  /* 118984c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 118984c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 118984c4 call 0x118962c0 */
  push32(0x118984c9u); f_118962c0();
  /* 118984c9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118984cc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118984cf jne 0x118984d2 */
  if (!C.zf) goto L_118984d2;
  /* 118984d1 int3  */
  x86_unimpl("int3 @ 0x118984d1");
L_118984d2:;
  /* 118984d2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118984d4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118984d6 jne 0x118984b2 */
  if (!C.zf) goto L_118984b2;
L_118984d8:;
  /* 118984d8 push 9 */
  push32((uint32_t)(0x9u));
  /* 118984da call 0x1189aca0 */
  push32(0x118984dfu); f_1189aca0();
  /* 118984df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118984e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118984e4 jmp 0x118986f8 */
  goto L_118986f8;
L_118984e9:;
  /* 118984e9 mov eax, dword ptr [0x118c3804] */
  EAX = (r32((uint32_t)(0x118c3804)));
  /* 118984ee mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118984f1 jmp 0x118984fb */
  goto L_118984fb;
L_118984f3:;
  /* 118984f3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118984f6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 118984f8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_118984fb:;
  /* 118984fb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118984ff je 0x118986eb */
  if (C.zf) goto L_118986eb;
  /* 11898505 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1189850c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189850f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11898512 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11898518 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189851b je 0x11898540 */
  if (C.zf) goto L_11898540;
  /* 1189851d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11898520 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898524 je 0x11898540 */
  if (C.zf) goto L_11898540;
  /* 11898526 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11898529 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1189852c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11898532 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898535 je 0x11898540 */
  if (C.zf) goto L_11898540;
  /* 11898537 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189853a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189853e jne 0x11898558 */
  if (!C.zf) goto L_11898558;
L_11898540:;
  /* 11898540 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11898543 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11898546 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1189854c mov edx, dword ptr [ecx*4 + 0x118c1a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x118c1a94)));
  /* 11898553 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11898556 jmp 0x1189855f */
  goto L_1189855f;
L_11898558:;
  /* 11898558 mov dword ptr [ebp - 0x14], 0x118bf42c */
  w32((uint32_t)(EBP + -0x14), (0x118bf42cu));
L_1189855f:;
  /* 1189855f push 4 */
  push32((uint32_t)(0x4u));
  /* 11898561 mov al, byte ptr [0x118c1a90] */
  AL = (r8((uint32_t)(0x118c1a90)));
  /* 11898566 push eax */
  push32((uint32_t)(EAX));
  /* 11898567 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189856a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189856d push ecx */
  push32((uint32_t)(ECX));
  /* 1189856e call 0x11898310 */
  push32(0x11898573u); f_11898310();
  /* 11898573 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11898576 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11898578 jne 0x118985b4 */
  if (!C.zf) goto L_118985b4;
L_1189857a:;
  /* 1189857a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189857d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11898580 push edx */
  push32((uint32_t)(EDX));
  /* 11898581 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11898584 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11898587 push ecx */
  push32((uint32_t)(ECX));
  /* 11898588 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189858b push edx */
  push32((uint32_t)(EDX));
  /* 1189858c push 0x118bf308 */
  push32((uint32_t)(0x118bf308u));
  /* 11898591 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898593 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898595 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898597 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898599 call 0x118962c0 */
  push32(0x1189859eu); f_118962c0();
  /* 1189859e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118985a1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118985a4 jne 0x118985a7 */
  if (!C.zf) goto L_118985a7;
  /* 118985a6 int3  */
  x86_unimpl("int3 @ 0x118985a6");
L_118985a7:;
  /* 118985a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118985a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118985ab jne 0x1189857a */
  if (!C.zf) goto L_1189857a;
  /* 118985ad mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_118985b4:;
  /* 118985b4 push 4 */
  push32((uint32_t)(0x4u));
  /* 118985b6 mov cl, byte ptr [0x118c1a90] */
  CL = (r8((uint32_t)(0x118c1a90)));
  /* 118985bc push ecx */
  push32((uint32_t)(ECX));
  /* 118985bd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118985c0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 118985c3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118985c6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 118985ca push edx */
  push32((uint32_t)(EDX));
  /* 118985cb call 0x11898310 */
  push32(0x118985d0u); f_11898310();
  /* 118985d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118985d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118985d5 jne 0x11898611 */
  if (!C.zf) goto L_11898611;
L_118985d7:;
  /* 118985d7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118985da add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118985dd push eax */
  push32((uint32_t)(EAX));
  /* 118985de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118985e1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 118985e4 push edx */
  push32((uint32_t)(EDX));
  /* 118985e5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 118985e8 push eax */
  push32((uint32_t)(EAX));
  /* 118985e9 push 0x118bf2dc */
  push32((uint32_t)(0x118bf2dcu));
  /* 118985ee push 0 */
  push32((uint32_t)(0x0u));
  /* 118985f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 118985f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 118985f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 118985f6 call 0x118962c0 */
  push32(0x118985fbu); f_118962c0();
  /* 118985fb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118985fe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898601 jne 0x11898604 */
  if (!C.zf) goto L_11898604;
  /* 11898603 int3  */
  x86_unimpl("int3 @ 0x11898603");
L_11898604:;
  /* 11898604 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11898606 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11898608 jne 0x118985d7 */
  if (!C.zf) goto L_118985d7;
  /* 1189860a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11898611:;
  /* 11898611 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11898614 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898618 jne 0x1189866a */
  if (!C.zf) goto L_1189866a;
  /* 1189861a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189861d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11898620 push ecx */
  push32((uint32_t)(ECX));
  /* 11898621 mov dl, byte ptr [0x118c1a91] */
  DL = (r8((uint32_t)(0x118c1a91)));
  /* 11898627 push edx */
  push32((uint32_t)(EDX));
  /* 11898628 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189862b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189862e push eax */
  push32((uint32_t)(EAX));
  /* 1189862f call 0x11898310 */
  push32(0x11898634u); f_11898310();
  /* 11898634 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11898637 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11898639 jne 0x1189866a */
  if (!C.zf) goto L_1189866a;
L_1189863b:;
  /* 1189863b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189863e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11898641 push ecx */
  push32((uint32_t)(ECX));
  /* 11898642 push 0x118bf400 */
  push32((uint32_t)(0x118bf400u));
  /* 11898647 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898649 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189864b push 0 */
  push32((uint32_t)(0x0u));
  /* 1189864d push 0 */
  push32((uint32_t)(0x0u));
  /* 1189864f call 0x118962c0 */
  push32(0x11898654u); f_118962c0();
  /* 11898654 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11898657 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189865a jne 0x1189865d */
  if (!C.zf) goto L_1189865d;
  /* 1189865c int3  */
  x86_unimpl("int3 @ 0x1189865c");
L_1189865d:;
  /* 1189865d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1189865f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11898661 jne 0x1189863b */
  if (!C.zf) goto L_1189863b;
  /* 11898663 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1189866a:;
  /* 1189866a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189866e jne 0x118986e6 */
  if (!C.zf) goto L_118986e6;
  /* 11898670 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11898673 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898677 je 0x118986ac */
  if (C.zf) goto L_118986ac;
L_11898679:;
  /* 11898679 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189867c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1189867f push edx */
  push32((uint32_t)(EDX));
  /* 11898680 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11898683 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11898686 push ecx */
  push32((uint32_t)(ECX));
  /* 11898687 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189868a push edx */
  push32((uint32_t)(EDX));
  /* 1189868b push 0x118bf3e0 */
  push32((uint32_t)(0x118bf3e0u));
  /* 11898690 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898692 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898694 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898696 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898698 call 0x118962c0 */
  push32(0x1189869du); f_118962c0();
  /* 1189869d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118986a0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118986a3 jne 0x118986a6 */
  if (!C.zf) goto L_118986a6;
  /* 118986a5 int3  */
  x86_unimpl("int3 @ 0x118986a5");
L_118986a6:;
  /* 118986a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118986a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118986aa jne 0x11898679 */
  if (!C.zf) goto L_11898679;
L_118986ac:;
  /* 118986ac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118986af mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 118986b2 push edx */
  push32((uint32_t)(EDX));
  /* 118986b3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118986b6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118986b9 push eax */
  push32((uint32_t)(EAX));
  /* 118986ba mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118986bd push ecx */
  push32((uint32_t)(ECX));
  /* 118986be push 0x118bf3b4 */
  push32((uint32_t)(0x118bf3b4u));
  /* 118986c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 118986c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 118986c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 118986c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 118986cb call 0x118962c0 */
  push32(0x118986d0u); f_118962c0();
  /* 118986d0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118986d3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118986d6 jne 0x118986d9 */
  if (!C.zf) goto L_118986d9;
  /* 118986d8 int3  */
  x86_unimpl("int3 @ 0x118986d8");
L_118986d9:;
  /* 118986d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118986db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118986dd jne 0x118986ac */
  if (!C.zf) goto L_118986ac;
  /* 118986df mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_118986e6:;
  /* 118986e6 jmp 0x118984f3 */
  goto L_118984f3;
L_118986eb:;
  /* 118986eb push 9 */
  push32((uint32_t)(0x9u));
  /* 118986ed call 0x1189aca0 */
  push32(0x118986f2u); f_1189aca0();
  /* 118986f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118986f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_118986f8:;
  /* 118986f8 pop edi */
  EDI = (pop32());
  /* 118986f9 pop esi */
  ESI = (pop32());
  /* 118986fa pop ebx */
  EBX = (pop32());
  /* 118986fb mov esp, ebp */
  ESP = (EBP);
  /* 118986fd pop ebp */
  EBP = (pop32());
  /* 118986fe ret  */
  ESPCHK(0x118983a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008710 @ 0x11898710 (34 bytes, 13 insns) */
void f_11898710(void) {
  FTRACE(0x11898710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11898710 push ebp */
  push32((uint32_t)(EBP));
  /* 11898711 mov ebp, esp */
  EBP = (ESP);
  /* 11898713 push ecx */
  push32((uint32_t)(ECX));
  /* 11898714 mov eax, dword ptr [0x118c1a84] */
  EAX = (r32((uint32_t)(0x118c1a84)));
  /* 11898719 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1189871c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898720 je 0x1189872b */
  if (C.zf) goto L_1189872b;
  /* 11898722 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11898725 mov dword ptr [0x118c1a84], ecx */
  w32((uint32_t)(0x118c1a84), (ECX));
L_1189872b:;
  /* 1189872b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189872e mov esp, ebp */
  ESP = (EBP);
  /* 11898730 pop ebp */
  EBP = (pop32());
  /* 11898731 ret  */
  ESPCHK(0x11898710u, _esp0);
  ESP += 4; return;
}

/* FUN_10008740 @ 0x11898740 (103 bytes, 38 insns) */
void f_11898740(void) {
  FTRACE(0x11898740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11898740 push ebp */
  push32((uint32_t)(EBP));
  /* 11898741 mov ebp, esp */
  EBP = (ESP);
  /* 11898743 push ecx */
  push32((uint32_t)(ECX));
  /* 11898744 mov eax, dword ptr [0x118c1a84] */
  EAX = (r32((uint32_t)(0x118c1a84)));
  /* 11898749 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1189874c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189874e jne 0x11898752 */
  if (!C.zf) goto L_11898752;
  /* 11898750 jmp 0x118987a3 */
  goto L_118987a3;
L_11898752:;
  /* 11898752 push 9 */
  push32((uint32_t)(0x9u));
  /* 11898754 call 0x1189ac00 */
  push32(0x11898759u); f_1189ac00();
  /* 11898759 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189875c mov ecx, dword ptr [0x118c3804] */
  ECX = (r32((uint32_t)(0x118c3804)));
  /* 11898762 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11898765 jmp 0x1189876f */
  goto L_1189876f;
L_11898767:;
  /* 11898767 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189876a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1189876c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1189876f:;
  /* 1189876f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898773 je 0x11898799 */
  if (C.zf) goto L_11898799;
  /* 11898775 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898778 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1189877b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11898781 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898784 jne 0x11898797 */
  if (!C.zf) goto L_11898797;
  /* 11898786 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11898789 push eax */
  push32((uint32_t)(EAX));
  /* 1189878a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189878d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11898790 push ecx */
  push32((uint32_t)(ECX));
  /* 11898791 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x11898794u);
  /* 11898794 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11898797:;
  /* 11898797 jmp 0x11898767 */
  goto L_11898767;
L_11898799:;
  /* 11898799 push 9 */
  push32((uint32_t)(0x9u));
  /* 1189879b call 0x1189aca0 */
  push32(0x118987a0u); f_1189aca0();
  /* 118987a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118987a3:;
  /* 118987a3 mov esp, ebp */
  ESP = (EBP);
  /* 118987a5 pop ebp */
  EBP = (pop32());
  /* 118987a6 ret  */
  ESPCHK(0x11898740u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x118987b0 (75 bytes, 28 insns) */
void f_118987b0(void) {
  FTRACE(0x118987b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118987b0 push ebp */
  push32((uint32_t)(EBP));
  /* 118987b1 mov ebp, esp */
  EBP = (ESP);
  /* 118987b3 push ecx */
  push32((uint32_t)(ECX));
  /* 118987b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118987b8 je 0x118987ed */
  if (C.zf) goto L_118987ed;
  /* 118987ba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118987bd push eax */
  push32((uint32_t)(EAX));
  /* 118987be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118987c1 push ecx */
  push32((uint32_t)(ECX));
  /* 118987c2 call dword ptr [0x118c63bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63bc))), 0x118987c8u);
  /* 118987c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118987ca jne 0x118987ed */
  if (!C.zf) goto L_118987ed;
  /* 118987cc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118987d0 je 0x118987e4 */
  if (C.zf) goto L_118987e4;
  /* 118987d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118987d5 push edx */
  push32((uint32_t)(EDX));
  /* 118987d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118987d9 push eax */
  push32((uint32_t)(EAX));
  /* 118987da call dword ptr [0x118c6384] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6384))), 0x118987e0u);
  /* 118987e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118987e2 jne 0x118987ed */
  if (!C.zf) goto L_118987ed;
L_118987e4:;
  /* 118987e4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 118987eb jmp 0x118987f4 */
  goto L_118987f4;
L_118987ed:;
  /* 118987ed mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_118987f4:;
  /* 118987f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118987f7 mov esp, ebp */
  ESP = (EBP);
  /* 118987f9 pop ebp */
  EBP = (pop32());
  /* 118987fa ret  */
  ESPCHK(0x118987b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008800 @ 0x11898800 (134 bytes, 50 insns) */
void f_11898800(void) {
  FTRACE(0x11898800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11898800 push ebp */
  push32((uint32_t)(EBP));
  /* 11898801 mov ebp, esp */
  EBP = (ESP);
  /* 11898803 push ecx */
  push32((uint32_t)(ECX));
  /* 11898804 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898808 jne 0x1189880e */
  if (!C.zf) goto L_1189880e;
  /* 1189880a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189880c jmp 0x11898882 */
  goto L_11898882;
L_1189880e:;
  /* 1189880e push 1 */
  push32((uint32_t)(0x1u));
  /* 11898810 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11898812 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11898815 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11898818 push eax */
  push32((uint32_t)(EAX));
  /* 11898819 call 0x118987b0 */
  push32(0x1189881eu); f_118987b0();
  /* 1189881e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11898821 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11898823 jne 0x11898829 */
  if (!C.zf) goto L_11898829;
  /* 11898825 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11898827 jmp 0x11898882 */
  goto L_11898882;
L_11898829:;
  /* 11898829 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189882c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189882f push ecx */
  push32((uint32_t)(ECX));
  /* 11898830 call 0x1189b500 */
  push32(0x11898835u); f_1189b500();
  /* 11898835 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11898838 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1189883b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189883f je 0x11898856 */
  if (C.zf) goto L_11898856;
  /* 11898841 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11898844 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11898847 push edx */
  push32((uint32_t)(EDX));
  /* 11898848 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189884b push eax */
  push32((uint32_t)(EAX));
  /* 1189884c call 0x1189b560 */
  push32(0x11898851u); f_1189b560();
  /* 11898851 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11898854 jmp 0x11898882 */
  goto L_11898882;
L_11898856:;
  /* 11898856 mov ecx, dword ptr [0x118c37b8] */
  ECX = (r32((uint32_t)(0x118c37b8)));
  /* 1189885c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11898862 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11898864 je 0x1189886d */
  if (C.zf) goto L_1189886d;
  /* 11898866 mov eax, 1 */
  EAX = (0x1u);
  /* 1189886b jmp 0x11898882 */
  goto L_11898882;
L_1189886d:;
  /* 1189886d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11898870 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11898873 push edx */
  push32((uint32_t)(EDX));
  /* 11898874 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898876 mov eax, dword ptr [0x118c516c] */
  EAX = (r32((uint32_t)(0x118c516c)));
  /* 1189887b push eax */
  push32((uint32_t)(EAX));
  /* 1189887c call dword ptr [0x118c637c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c637c))), 0x11898882u);
L_11898882:;
  /* 11898882 mov esp, ebp */
  ESP = (EBP);
  /* 11898884 pop ebp */
  EBP = (pop32());
  /* 11898885 ret  */
  ESPCHK(0x11898800u, _esp0);
  ESP += 4; return;
}

/* FUN_10008890 @ 0x11898890 (227 bytes, 80 insns) */
void f_11898890(void) {
  FTRACE(0x11898890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11898890 push ebp */
  push32((uint32_t)(EBP));
  /* 11898891 mov ebp, esp */
  EBP = (ESP);
  /* 11898893 push ecx */
  push32((uint32_t)(ECX));
  /* 11898894 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11898897 push eax */
  push32((uint32_t)(EAX));
  /* 11898898 call 0x11898800 */
  push32(0x1189889du); f_11898800();
  /* 1189889d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118988a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118988a2 jne 0x118988ab */
  if (!C.zf) goto L_118988ab;
  /* 118988a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118988a6 jmp 0x1189896f */
  goto L_1189896f;
L_118988ab:;
  /* 118988ab push 9 */
  push32((uint32_t)(0x9u));
  /* 118988ad call 0x1189ac00 */
  push32(0x118988b2u); f_1189ac00();
  /* 118988b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118988b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118988b8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118988bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 118988be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118988c1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 118988c4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118988c9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118988cc je 0x118988f0 */
  if (C.zf) goto L_118988f0;
  /* 118988ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118988d1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118988d5 je 0x118988f0 */
  if (C.zf) goto L_118988f0;
  /* 118988d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118988da mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 118988dd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118988e2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118988e5 je 0x118988f0 */
  if (C.zf) goto L_118988f0;
  /* 118988e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118988ea cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118988ee jne 0x11898963 */
  if (!C.zf) goto L_11898963;
L_118988f0:;
  /* 118988f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 118988f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118988f5 push edx */
  push32((uint32_t)(EDX));
  /* 118988f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118988f9 push eax */
  push32((uint32_t)(EAX));
  /* 118988fa call 0x118987b0 */
  push32(0x118988ffu); f_118987b0();
  /* 118988ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11898902 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11898904 je 0x11898963 */
  if (C.zf) goto L_11898963;
  /* 11898906 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898909 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1189890c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189890f jne 0x11898963 */
  if (!C.zf) goto L_11898963;
  /* 11898911 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898914 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11898917 cmp ecx, dword ptr [0x118c1a88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x118c1a88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189891d jg 0x11898963 */
  if ((!C.zf&&C.sf==C.of)) goto L_11898963;
  /* 1189891f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898923 je 0x11898930 */
  if (C.zf) goto L_11898930;
  /* 11898925 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11898928 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189892b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1189892e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11898930:;
  /* 11898930 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898934 je 0x11898941 */
  if (C.zf) goto L_11898941;
  /* 11898936 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11898939 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189893c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1189893f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11898941:;
  /* 11898941 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898945 je 0x11898952 */
  if (C.zf) goto L_11898952;
  /* 11898947 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1189894a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189894d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11898950 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11898952:;
  /* 11898952 push 9 */
  push32((uint32_t)(0x9u));
  /* 11898954 call 0x1189aca0 */
  push32(0x11898959u); f_1189aca0();
  /* 11898959 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189895c mov eax, 1 */
  EAX = (0x1u);
  /* 11898961 jmp 0x1189896f */
  goto L_1189896f;
L_11898963:;
  /* 11898963 push 9 */
  push32((uint32_t)(0x9u));
  /* 11898965 call 0x1189aca0 */
  push32(0x1189896au); f_1189aca0();
  /* 1189896a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189896d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1189896f:;
  /* 1189896f mov esp, ebp */
  ESP = (EBP);
  /* 11898971 pop ebp */
  EBP = (pop32());
  /* 11898972 ret  */
  ESPCHK(0x11898890u, _esp0);
  ESP += 4; return;
}

/* FUN_10008980 @ 0x11898980 (28 bytes, 11 insns) */
void f_11898980(void) {
  FTRACE(0x11898980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11898980 push ebp */
  push32((uint32_t)(EBP));
  /* 11898981 mov ebp, esp */
  EBP = (ESP);
  /* 11898983 push ecx */
  push32((uint32_t)(ECX));
  /* 11898984 mov eax, dword ptr [0x118c5178] */
  EAX = (r32((uint32_t)(0x118c5178)));
  /* 11898989 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1189898c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189898f mov dword ptr [0x118c5178], ecx */
  w32((uint32_t)(0x118c5178), (ECX));
  /* 11898995 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898998 mov esp, ebp */
  ESP = (EBP);
  /* 1189899a pop ebp */
  EBP = (pop32());
  /* 1189899b ret  */
  ESPCHK(0x11898980u, _esp0);
  ESP += 4; return;
}

/* FUN_100089a0 @ 0x118989a0 (362 bytes, 116 insns) */
void f_118989a0(void) {
  FTRACE(0x118989a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118989a0 push ebp */
  push32((uint32_t)(EBP));
  /* 118989a1 mov ebp, esp */
  EBP = (ESP);
  /* 118989a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118989a6 push ebx */
  push32((uint32_t)(EBX));
  /* 118989a7 push esi */
  push32((uint32_t)(ESI));
  /* 118989a8 push edi */
  push32((uint32_t)(EDI));
  /* 118989a9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118989ad jne 0x118989da */
  if (!C.zf) goto L_118989da;
L_118989af:;
  /* 118989af push 0x118bf514 */
  push32((uint32_t)(0x118bf514u));
  /* 118989b4 push 0x118bf02c */
  push32((uint32_t)(0x118bf02cu));
  /* 118989b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 118989bb push 0 */
  push32((uint32_t)(0x0u));
  /* 118989bd push 0 */
  push32((uint32_t)(0x0u));
  /* 118989bf push 0 */
  push32((uint32_t)(0x0u));
  /* 118989c1 call 0x118962c0 */
  push32(0x118989c6u); f_118962c0();
  /* 118989c6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118989c9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118989cc jne 0x118989cf */
  if (!C.zf) goto L_118989cf;
  /* 118989ce int3  */
  x86_unimpl("int3 @ 0x118989ce");
L_118989cf:;
  /* 118989cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118989d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118989d3 jne 0x118989af */
  if (!C.zf) goto L_118989af;
  /* 118989d5 jmp 0x11898b03 */
  goto L_11898b03;
L_118989da:;
  /* 118989da push 9 */
  push32((uint32_t)(0x9u));
  /* 118989dc call 0x1189ac00 */
  push32(0x118989e1u); f_1189ac00();
  /* 118989e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118989e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118989e7 mov edx, dword ptr [0x118c3804] */
  EDX = (r32((uint32_t)(0x118c3804)));
  /* 118989ed mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 118989ef mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 118989f6 jmp 0x11898a01 */
  goto L_11898a01;
L_118989f8:;
  /* 118989f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118989fb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118989fe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11898a01:;
  /* 11898a01 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898a05 jge 0x11898a25 */
  if ((C.sf==C.of)) goto L_11898a25;
  /* 11898a07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898a0a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11898a0d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 11898a15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898a18 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11898a1b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 11898a23 jmp 0x118989f8 */
  goto L_118989f8;
L_11898a25:;
  /* 11898a25 mov edx, dword ptr [0x118c3804] */
  EDX = (r32((uint32_t)(0x118c3804)));
  /* 11898a2b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11898a2e jmp 0x11898a38 */
  goto L_11898a38;
L_11898a30:;
  /* 11898a30 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11898a33 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11898a35 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11898a38:;
  /* 11898a38 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898a3c je 0x11898ae1 */
  if (C.zf) goto L_11898ae1;
  /* 11898a42 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11898a45 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11898a48 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11898a4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11898a4f jl 0x11898ab7 */
  if ((C.sf!=C.of)) goto L_11898ab7;
  /* 11898a51 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11898a54 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11898a57 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11898a5d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898a60 jge 0x11898ab7 */
  if ((C.sf==C.of)) goto L_11898ab7;
  /* 11898a62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11898a65 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11898a68 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11898a6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11898a71 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 11898a75 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11898a78 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11898a7b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11898a7e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11898a84 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11898a87 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 11898a8b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11898a8e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11898a91 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11898a96 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11898a99 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 11898a9d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11898aa0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11898aa3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11898aa6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11898aa9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11898aae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11898ab1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11898ab5 jmp 0x11898adc */
  goto L_11898adc;
L_11898ab7:;
  /* 11898ab7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11898aba push edx */
  push32((uint32_t)(EDX));
  /* 11898abb push 0x118bf4f0 */
  push32((uint32_t)(0x118bf4f0u));
  /* 11898ac0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898ac2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898ac4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898ac6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898ac8 call 0x118962c0 */
  push32(0x11898acdu); f_118962c0();
  /* 11898acd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11898ad0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898ad3 jne 0x11898ad6 */
  if (!C.zf) goto L_11898ad6;
  /* 11898ad5 int3  */
  x86_unimpl("int3 @ 0x11898ad5");
L_11898ad6:;
  /* 11898ad6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11898ad8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11898ada jne 0x11898ab7 */
  if (!C.zf) goto L_11898ab7;
L_11898adc:;
  /* 11898adc jmp 0x11898a30 */
  goto L_11898a30;
L_11898ae1:;
  /* 11898ae1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11898ae4 mov edx, dword ptr [0x118c380c] */
  EDX = (r32((uint32_t)(0x118c380c)));
  /* 11898aea mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 11898aed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11898af0 mov ecx, dword ptr [0x118c3800] */
  ECX = (r32((uint32_t)(0x118c3800)));
  /* 11898af6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 11898af9 push 9 */
  push32((uint32_t)(0x9u));
  /* 11898afb call 0x1189aca0 */
  push32(0x11898b00u); f_1189aca0();
  /* 11898b00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11898b03:;
  /* 11898b03 pop edi */
  EDI = (pop32());
  /* 11898b04 pop esi */
  ESI = (pop32());
  /* 11898b05 pop ebx */
  EBX = (pop32());
  /* 11898b06 mov esp, ebp */
  ESP = (EBP);
  /* 11898b08 pop ebp */
  EBP = (pop32());
  /* 11898b09 ret  */
  ESPCHK(0x118989a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b10 @ 0x11898b10 (291 bytes, 95 insns) */
void f_11898b10(void) {
  FTRACE(0x11898b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11898b10 push ebp */
  push32((uint32_t)(EBP));
  /* 11898b11 mov ebp, esp */
  EBP = (ESP);
  /* 11898b13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11898b16 push ebx */
  push32((uint32_t)(EBX));
  /* 11898b17 push esi */
  push32((uint32_t)(ESI));
  /* 11898b18 push edi */
  push32((uint32_t)(EDI));
  /* 11898b19 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11898b20 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898b24 je 0x11898b32 */
  if (C.zf) goto L_11898b32;
  /* 11898b26 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898b2a je 0x11898b32 */
  if (C.zf) goto L_11898b32;
  /* 11898b2c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898b30 jne 0x11898b60 */
  if (!C.zf) goto L_11898b60;
L_11898b32:;
  /* 11898b32 push 0x118bf53c */
  push32((uint32_t)(0x118bf53cu));
  /* 11898b37 push 0x118bf02c */
  push32((uint32_t)(0x118bf02cu));
  /* 11898b3c push 0 */
  push32((uint32_t)(0x0u));
  /* 11898b3e push 0 */
  push32((uint32_t)(0x0u));
  /* 11898b40 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898b42 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898b44 call 0x118962c0 */
  push32(0x11898b49u); f_118962c0();
  /* 11898b49 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11898b4c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898b4f jne 0x11898b52 */
  if (!C.zf) goto L_11898b52;
  /* 11898b51 int3  */
  x86_unimpl("int3 @ 0x11898b51");
L_11898b52:;
  /* 11898b52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11898b54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11898b56 jne 0x11898b32 */
  if (!C.zf) goto L_11898b32;
  /* 11898b58 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11898b5b jmp 0x11898c2c */
  goto L_11898c2c;
L_11898b60:;
  /* 11898b60 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11898b67 jmp 0x11898b72 */
  goto L_11898b72;
L_11898b69:;
  /* 11898b69 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898b6c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11898b6f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11898b72:;
  /* 11898b72 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898b76 jge 0x11898bfc */
  if ((C.sf==C.of)) goto L_11898bfc;
  /* 11898b7c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898b7f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11898b82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898b85 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11898b88 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 11898b8c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11898b90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898b93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11898b96 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11898b9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898b9d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11898ba0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898ba3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11898ba6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 11898baa sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11898bae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898bb1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11898bb4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 11898bb8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898bbb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11898bbe cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898bc3 jne 0x11898bd2 */
  if (!C.zf) goto L_11898bd2;
  /* 11898bc5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898bc8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11898bcb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898bd0 je 0x11898bf7 */
  if (C.zf) goto L_11898bf7;
L_11898bd2:;
  /* 11898bd2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898bd6 je 0x11898bf7 */
  if (C.zf) goto L_11898bf7;
  /* 11898bd8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898bdc jne 0x11898bf0 */
  if (!C.zf) goto L_11898bf0;
  /* 11898bde cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898be2 jne 0x11898bf7 */
  if (!C.zf) goto L_11898bf7;
  /* 11898be4 mov eax, dword ptr [0x118c1a84] */
  EAX = (r32((uint32_t)(0x118c1a84)));
  /* 11898be9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11898bec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11898bee je 0x11898bf7 */
  if (C.zf) goto L_11898bf7;
L_11898bf0:;
  /* 11898bf0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11898bf7:;
  /* 11898bf7 jmp 0x11898b69 */
  goto L_11898b69;
L_11898bfc:;
  /* 11898bfc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11898bff mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11898c02 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11898c05 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11898c08 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11898c0b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 11898c0e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11898c11 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11898c14 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 11898c17 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11898c1a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11898c1d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 11898c20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11898c23 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11898c29 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11898c2c:;
  /* 11898c2c pop edi */
  EDI = (pop32());
  /* 11898c2d pop esi */
  ESI = (pop32());
  /* 11898c2e pop ebx */
  EBX = (pop32());
  /* 11898c2f mov esp, ebp */
  ESP = (EBP);
  /* 11898c31 pop ebp */
  EBP = (pop32());
  /* 11898c32 ret  */
  ESPCHK(0x11898b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c40 @ 0x11898c40 (697 bytes, 253 insns) */
void f_11898c40(void) {
  FTRACE(0x11898c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11898c40 push ebp */
  push32((uint32_t)(EBP));
  /* 11898c41 mov ebp, esp */
  EBP = (ESP);
  /* 11898c43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11898c46 push ebx */
  push32((uint32_t)(EBX));
  /* 11898c47 push esi */
  push32((uint32_t)(ESI));
  /* 11898c48 push edi */
  push32((uint32_t)(EDI));
  /* 11898c49 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11898c50 push 9 */
  push32((uint32_t)(0x9u));
  /* 11898c52 call 0x1189ac00 */
  push32(0x11898c57u); f_1189ac00();
  /* 11898c57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11898c5a:;
  /* 11898c5a push 0x118bf634 */
  push32((uint32_t)(0x118bf634u));
  /* 11898c5f push 0x118bf02c */
  push32((uint32_t)(0x118bf02cu));
  /* 11898c64 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898c66 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898c68 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898c6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11898c6c call 0x118962c0 */
  push32(0x11898c71u); f_118962c0();
  /* 11898c71 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11898c74 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898c77 jne 0x11898c7a */
  if (!C.zf) goto L_11898c7a;
  /* 11898c79 int3  */
  x86_unimpl("int3 @ 0x11898c79");
L_11898c7a:;
  /* 11898c7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11898c7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11898c7e jne 0x11898c5a */
  if (!C.zf) goto L_11898c5a;
  /* 11898c80 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898c84 je 0x11898c8e */
  if (C.zf) goto L_11898c8e;
  /* 11898c86 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11898c89 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11898c8b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11898c8e:;
  /* 11898c8e mov eax, dword ptr [0x118c3804] */
  EAX = (r32((uint32_t)(0x118c3804)));
  /* 11898c93 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11898c96 jmp 0x11898ca0 */
  goto L_11898ca0;
L_11898c98:;
  /* 11898c98 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898c9b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11898c9d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11898ca0:;
  /* 11898ca0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898ca4 je 0x11898ec2 */
  if (C.zf) goto L_11898ec2;
  /* 11898caa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898cad cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898cb0 je 0x11898ec2 */
  if (C.zf) goto L_11898ec2;
  /* 11898cb6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898cb9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11898cbc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11898cc2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898cc5 je 0x11898cf4 */
  if (C.zf) goto L_11898cf4;
  /* 11898cc7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898cca mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11898ccd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11898cd3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11898cd5 je 0x11898cf4 */
  if (C.zf) goto L_11898cf4;
  /* 11898cd7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898cda mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11898cdd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11898ce2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898ce5 jne 0x11898cf9 */
  if (!C.zf) goto L_11898cf9;
  /* 11898ce7 mov ecx, dword ptr [0x118c1a84] */
  ECX = (r32((uint32_t)(0x118c1a84)));
  /* 11898ced and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11898cf0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11898cf2 jne 0x11898cf9 */
  if (!C.zf) goto L_11898cf9;
L_11898cf4:;
  /* 11898cf4 jmp 0x11898ebd */
  goto L_11898ebd;
L_11898cf9:;
  /* 11898cf9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898cfc cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898d00 je 0x11898d72 */
  if (C.zf) goto L_11898d72;
  /* 11898d02 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898d04 push 1 */
  push32((uint32_t)(0x1u));
  /* 11898d06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898d09 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11898d0c push ecx */
  push32((uint32_t)(ECX));
  /* 11898d0d call 0x118987b0 */
  push32(0x11898d12u); f_118987b0();
  /* 11898d12 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11898d15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11898d17 jne 0x11898d43 */
  if (!C.zf) goto L_11898d43;
L_11898d19:;
  /* 11898d19 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898d1c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11898d1f push eax */
  push32((uint32_t)(EAX));
  /* 11898d20 push 0x118bf620 */
  push32((uint32_t)(0x118bf620u));
  /* 11898d25 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898d27 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898d29 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898d2b push 0 */
  push32((uint32_t)(0x0u));
  /* 11898d2d call 0x118962c0 */
  push32(0x11898d32u); f_118962c0();
  /* 11898d32 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11898d35 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898d38 jne 0x11898d3b */
  if (!C.zf) goto L_11898d3b;
  /* 11898d3a int3  */
  x86_unimpl("int3 @ 0x11898d3a");
L_11898d3b:;
  /* 11898d3b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11898d3d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11898d3f jne 0x11898d19 */
  if (!C.zf) goto L_11898d19;
  /* 11898d41 jmp 0x11898d72 */
  goto L_11898d72;
L_11898d43:;
  /* 11898d43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898d46 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11898d49 push eax */
  push32((uint32_t)(EAX));
  /* 11898d4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898d4d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11898d50 push edx */
  push32((uint32_t)(EDX));
  /* 11898d51 push 0x118bf614 */
  push32((uint32_t)(0x118bf614u));
  /* 11898d56 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898d58 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898d5a push 0 */
  push32((uint32_t)(0x0u));
  /* 11898d5c push 0 */
  push32((uint32_t)(0x0u));
  /* 11898d5e call 0x118962c0 */
  push32(0x11898d63u); f_118962c0();
  /* 11898d63 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11898d66 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898d69 jne 0x11898d6c */
  if (!C.zf) goto L_11898d6c;
  /* 11898d6b int3  */
  x86_unimpl("int3 @ 0x11898d6b");
L_11898d6c:;
  /* 11898d6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11898d6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11898d70 jne 0x11898d43 */
  if (!C.zf) goto L_11898d43;
L_11898d72:;
  /* 11898d72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898d75 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11898d78 push edx */
  push32((uint32_t)(EDX));
  /* 11898d79 push 0x118bf60c */
  push32((uint32_t)(0x118bf60cu));
  /* 11898d7e push 0 */
  push32((uint32_t)(0x0u));
  /* 11898d80 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898d82 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898d84 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898d86 call 0x118962c0 */
  push32(0x11898d8bu); f_118962c0();
  /* 11898d8b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11898d8e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898d91 jne 0x11898d94 */
  if (!C.zf) goto L_11898d94;
  /* 11898d93 int3  */
  x86_unimpl("int3 @ 0x11898d93");
L_11898d94:;
  /* 11898d94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11898d96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11898d98 jne 0x11898d72 */
  if (!C.zf) goto L_11898d72;
  /* 11898d9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898d9d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11898da0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11898da6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898da9 jne 0x11898e1c */
  if (!C.zf) goto L_11898e1c;
L_11898dab:;
  /* 11898dab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898dae mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11898db1 push ecx */
  push32((uint32_t)(ECX));
  /* 11898db2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898db5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11898db8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11898dbb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11898dc0 push eax */
  push32((uint32_t)(EAX));
  /* 11898dc1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898dc4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11898dc7 push ecx */
  push32((uint32_t)(ECX));
  /* 11898dc8 push 0x118bf5d8 */
  push32((uint32_t)(0x118bf5d8u));
  /* 11898dcd push 0 */
  push32((uint32_t)(0x0u));
  /* 11898dcf push 0 */
  push32((uint32_t)(0x0u));
  /* 11898dd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898dd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898dd5 call 0x118962c0 */
  push32(0x11898ddau); f_118962c0();
  /* 11898dda add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11898ddd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898de0 jne 0x11898de3 */
  if (!C.zf) goto L_11898de3;
  /* 11898de2 int3  */
  x86_unimpl("int3 @ 0x11898de2");
L_11898de3:;
  /* 11898de3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11898de5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11898de7 jne 0x11898dab */
  if (!C.zf) goto L_11898dab;
  /* 11898de9 cmp dword ptr [0x118c5178], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c5178))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898df0 je 0x11898e0b */
  if (C.zf) goto L_11898e0b;
  /* 11898df2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898df5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11898df8 push ecx */
  push32((uint32_t)(ECX));
  /* 11898df9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898dfc add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11898dff push edx */
  push32((uint32_t)(EDX));
  /* 11898e00 call dword ptr [0x118c5178] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c5178))), 0x11898e06u);
  /* 11898e06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11898e09 jmp 0x11898e17 */
  goto L_11898e17;
L_11898e0b:;
  /* 11898e0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898e0e push eax */
  push32((uint32_t)(EAX));
  /* 11898e0f call 0x11898f00 */
  push32(0x11898e14u); f_11898f00();
  /* 11898e14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11898e17:;
  /* 11898e17 jmp 0x11898ebd */
  goto L_11898ebd;
L_11898e1c:;
  /* 11898e1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898e1f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898e23 jne 0x11898e62 */
  if (!C.zf) goto L_11898e62;
L_11898e25:;
  /* 11898e25 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898e28 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11898e2b push eax */
  push32((uint32_t)(EAX));
  /* 11898e2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898e2f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11898e32 push ecx */
  push32((uint32_t)(ECX));
  /* 11898e33 push 0x118bf5b0 */
  push32((uint32_t)(0x118bf5b0u));
  /* 11898e38 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898e3a push 0 */
  push32((uint32_t)(0x0u));
  /* 11898e3c push 0 */
  push32((uint32_t)(0x0u));
  /* 11898e3e push 0 */
  push32((uint32_t)(0x0u));
  /* 11898e40 call 0x118962c0 */
  push32(0x11898e45u); f_118962c0();
  /* 11898e45 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11898e48 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898e4b jne 0x11898e4e */
  if (!C.zf) goto L_11898e4e;
  /* 11898e4d int3  */
  x86_unimpl("int3 @ 0x11898e4d");
L_11898e4e:;
  /* 11898e4e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11898e50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11898e52 jne 0x11898e25 */
  if (!C.zf) goto L_11898e25;
  /* 11898e54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898e57 push eax */
  push32((uint32_t)(EAX));
  /* 11898e58 call 0x11898f00 */
  push32(0x11898e5du); f_11898f00();
  /* 11898e5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11898e60 jmp 0x11898ebd */
  goto L_11898ebd;
L_11898e62:;
  /* 11898e62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898e65 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11898e68 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11898e6e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898e71 jne 0x11898ebd */
  if (!C.zf) goto L_11898ebd;
L_11898e73:;
  /* 11898e73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898e76 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11898e79 push ecx */
  push32((uint32_t)(ECX));
  /* 11898e7a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898e7d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11898e80 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11898e83 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11898e88 push eax */
  push32((uint32_t)(EAX));
  /* 11898e89 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898e8c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11898e8f push ecx */
  push32((uint32_t)(ECX));
  /* 11898e90 push 0x118bf57c */
  push32((uint32_t)(0x118bf57cu));
  /* 11898e95 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898e97 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898e99 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898e9b push 0 */
  push32((uint32_t)(0x0u));
  /* 11898e9d call 0x118962c0 */
  push32(0x11898ea2u); f_118962c0();
  /* 11898ea2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11898ea5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898ea8 jne 0x11898eab */
  if (!C.zf) goto L_11898eab;
  /* 11898eaa int3  */
  x86_unimpl("int3 @ 0x11898eaa");
L_11898eab:;
  /* 11898eab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11898ead test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11898eaf jne 0x11898e73 */
  if (!C.zf) goto L_11898e73;
  /* 11898eb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11898eb4 push eax */
  push32((uint32_t)(EAX));
  /* 11898eb5 call 0x11898f00 */
  push32(0x11898ebau); f_11898f00();
  /* 11898eba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11898ebd:;
  /* 11898ebd jmp 0x11898c98 */
  goto L_11898c98;
L_11898ec2:;
  /* 11898ec2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11898ec4 call 0x1189aca0 */
  push32(0x11898ec9u); f_1189aca0();
  /* 11898ec9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11898ecc:;
  /* 11898ecc push 0x118bf564 */
  push32((uint32_t)(0x118bf564u));
  /* 11898ed1 push 0x118bf02c */
  push32((uint32_t)(0x118bf02cu));
  /* 11898ed6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898ed8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898eda push 0 */
  push32((uint32_t)(0x0u));
  /* 11898edc push 0 */
  push32((uint32_t)(0x0u));
  /* 11898ede call 0x118962c0 */
  push32(0x11898ee3u); f_118962c0();
  /* 11898ee3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11898ee6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898ee9 jne 0x11898eec */
  if (!C.zf) goto L_11898eec;
  /* 11898eeb int3  */
  x86_unimpl("int3 @ 0x11898eeb");
L_11898eec:;
  /* 11898eec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11898eee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11898ef0 jne 0x11898ecc */
  if (!C.zf) goto L_11898ecc;
  /* 11898ef2 pop edi */
  EDI = (pop32());
  /* 11898ef3 pop esi */
  ESI = (pop32());
  /* 11898ef4 pop ebx */
  EBX = (pop32());
  /* 11898ef5 mov esp, ebp */
  ESP = (EBP);
  /* 11898ef7 pop ebp */
  EBP = (pop32());
  /* 11898ef8 ret  */
  ESPCHK(0x11898c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f00 @ 0x11898f00 (276 bytes, 89 insns) */
void f_11898f00(void) {
  FTRACE(0x11898f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11898f00 push ebp */
  push32((uint32_t)(EBP));
  /* 11898f01 mov ebp, esp */
  EBP = (ESP);
  /* 11898f03 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11898f06 push ebx */
  push32((uint32_t)(EBX));
  /* 11898f07 push esi */
  push32((uint32_t)(ESI));
  /* 11898f08 push edi */
  push32((uint32_t)(EDI));
  /* 11898f09 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 11898f10 jmp 0x11898f1b */
  goto L_11898f1b;
L_11898f12:;
  /* 11898f12 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11898f15 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11898f18 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_11898f1b:;
  /* 11898f1b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11898f1e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898f22 jge 0x11898f2f */
  if ((C.sf==C.of)) goto L_11898f2f;
  /* 11898f24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11898f27 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11898f2a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 11898f2d jmp 0x11898f36 */
  goto L_11898f36;
L_11898f2f:;
  /* 11898f2f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_11898f36:;
  /* 11898f36 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11898f39 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898f3c jge 0x11898fdc */
  if ((C.sf==C.of)) goto L_11898fdc;
  /* 11898f42 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11898f45 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11898f48 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 11898f4b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 11898f4e cmp dword ptr [0x118c1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118c1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898f55 jle 0x11898f73 */
  if ((C.zf||C.sf!=C.of)) goto L_11898f73;
  /* 11898f57 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 11898f5c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11898f5f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11898f65 push ecx */
  push32((uint32_t)(ECX));
  /* 11898f66 call 0x1189d210 */
  push32(0x11898f6bu); f_1189d210();
  /* 11898f6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11898f6e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 11898f71 jmp 0x11898f90 */
  goto L_11898f90;
L_11898f73:;
  /* 11898f73 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11898f76 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11898f7c mov eax, dword ptr [0x118c1c98] */
  EAX = (r32((uint32_t)(0x118c1c98)));
  /* 11898f81 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11898f83 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11898f87 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 11898f8d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_11898f90:;
  /* 11898f90 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11898f94 je 0x11898fa4 */
  if (C.zf) goto L_11898fa4;
  /* 11898f96 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11898f99 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11898f9f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 11898fa2 jmp 0x11898fab */
  goto L_11898fab;
L_11898fa4:;
  /* 11898fa4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_11898fab:;
  /* 11898fab mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11898fae mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 11898fb1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 11898fb5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11898fb8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11898fbe push edx */
  push32((uint32_t)(EDX));
  /* 11898fbf push 0x118bf658 */
  push32((uint32_t)(0x118bf658u));
  /* 11898fc4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11898fc7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11898fca lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 11898fce push ecx */
  push32((uint32_t)(ECX));
  /* 11898fcf call 0x1189d110 */
  push32(0x11898fd4u); f_1189d110();
  /* 11898fd4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11898fd7 jmp 0x11898f12 */
  goto L_11898f12;
L_11898fdc:;
  /* 11898fdc mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11898fdf mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_11898fe4:;
  /* 11898fe4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11898fe7 push eax */
  push32((uint32_t)(EAX));
  /* 11898fe8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 11898feb push ecx */
  push32((uint32_t)(ECX));
  /* 11898fec push 0x118bf648 */
  push32((uint32_t)(0x118bf648u));
  /* 11898ff1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898ff3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898ff5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898ff7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11898ff9 call 0x118962c0 */
  push32(0x11898ffeu); f_118962c0();
  /* 11898ffe add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11899001 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899004 jne 0x11899007 */
  if (!C.zf) goto L_11899007;
  /* 11899006 int3  */
  x86_unimpl("int3 @ 0x11899006");
L_11899007:;
  /* 11899007 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11899009 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189900b jne 0x11898fe4 */
  if (!C.zf) goto L_11898fe4;
  /* 1189900d pop edi */
  EDI = (pop32());
  /* 1189900e pop esi */
  ESI = (pop32());
  /* 1189900f pop ebx */
  EBX = (pop32());
  /* 11899010 mov esp, ebp */
  ESP = (EBP);
  /* 11899012 pop ebp */
  EBP = (pop32());
  /* 11899013 ret  */
  ESPCHK(0x11898f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10009020 @ 0x11899020 (116 bytes, 46 insns) */
void f_11899020(void) {
  FTRACE(0x11899020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11899020 push ebp */
  push32((uint32_t)(EBP));
  /* 11899021 mov ebp, esp */
  EBP = (ESP);
  /* 11899023 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11899026 push ebx */
  push32((uint32_t)(EBX));
  /* 11899027 push esi */
  push32((uint32_t)(ESI));
  /* 11899028 push edi */
  push32((uint32_t)(EDI));
  /* 11899029 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 1189902c push eax */
  push32((uint32_t)(EAX));
  /* 1189902d call 0x118989a0 */
  push32(0x11899032u); f_118989a0();
  /* 11899032 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11899035 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899039 jne 0x11899054 */
  if (!C.zf) goto L_11899054;
  /* 1189903b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189903f jne 0x11899054 */
  if (!C.zf) goto L_11899054;
  /* 11899041 mov ecx, dword ptr [0x118c1a84] */
  ECX = (r32((uint32_t)(0x118c1a84)));
  /* 11899047 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 1189904a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1189904c je 0x1189908b */
  if (C.zf) goto L_1189908b;
  /* 1189904e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899052 je 0x1189908b */
  if (C.zf) goto L_1189908b;
L_11899054:;
  /* 11899054 push 0x118bf660 */
  push32((uint32_t)(0x118bf660u));
  /* 11899059 push 0x118bf02c */
  push32((uint32_t)(0x118bf02cu));
  /* 1189905e push 0 */
  push32((uint32_t)(0x0u));
  /* 11899060 push 0 */
  push32((uint32_t)(0x0u));
  /* 11899062 push 0 */
  push32((uint32_t)(0x0u));
  /* 11899064 push 0 */
  push32((uint32_t)(0x0u));
  /* 11899066 call 0x118962c0 */
  push32(0x1189906bu); f_118962c0();
  /* 1189906b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189906e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899071 jne 0x11899074 */
  if (!C.zf) goto L_11899074;
  /* 11899073 int3  */
  x86_unimpl("int3 @ 0x11899073");
L_11899074:;
  /* 11899074 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11899076 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11899078 jne 0x11899054 */
  if (!C.zf) goto L_11899054;
  /* 1189907a push 0 */
  push32((uint32_t)(0x0u));
  /* 1189907c call 0x11898c40 */
  push32(0x11899081u); f_11898c40();
  /* 11899081 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11899084 mov eax, 1 */
  EAX = (0x1u);
  /* 11899089 jmp 0x1189908d */
  goto L_1189908d;
L_1189908b:;
  /* 1189908b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1189908d:;
  /* 1189908d pop edi */
  EDI = (pop32());
  /* 1189908e pop esi */
  ESI = (pop32());
  /* 1189908f pop ebx */
  EBX = (pop32());
  /* 11899090 mov esp, ebp */
  ESP = (EBP);
  /* 11899092 pop ebp */
  EBP = (pop32());
  /* 11899093 ret  */
  ESPCHK(0x11899020u, _esp0);
  ESP += 4; return;
}

/* FUN_100090a0 @ 0x118990a0 (197 bytes, 79 insns) */
void f_118990a0(void) {
  FTRACE(0x118990a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118990a0 push ebp */
  push32((uint32_t)(EBP));
  /* 118990a1 mov ebp, esp */
  EBP = (ESP);
  /* 118990a3 push ecx */
  push32((uint32_t)(ECX));
  /* 118990a4 push ebx */
  push32((uint32_t)(EBX));
  /* 118990a5 push esi */
  push32((uint32_t)(ESI));
  /* 118990a6 push edi */
  push32((uint32_t)(EDI));
  /* 118990a7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118990ab jne 0x118990b2 */
  if (!C.zf) goto L_118990b2;
  /* 118990ad jmp 0x1189915e */
  goto L_1189915e;
L_118990b2:;
  /* 118990b2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 118990b9 jmp 0x118990c4 */
  goto L_118990c4;
L_118990bb:;
  /* 118990bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118990be add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118990c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_118990c4:;
  /* 118990c4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118990c8 jge 0x1189910e */
  if ((C.sf==C.of)) goto L_1189910e;
L_118990ca:;
  /* 118990ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118990cd mov edx, dword ptr [ecx*4 + 0x118c1a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x118c1a94)));
  /* 118990d4 push edx */
  push32((uint32_t)(EDX));
  /* 118990d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118990d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118990db mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 118990df push edx */
  push32((uint32_t)(EDX));
  /* 118990e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118990e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118990e6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 118990ea push edx */
  push32((uint32_t)(EDX));
  /* 118990eb push 0x118bf6bc */
  push32((uint32_t)(0x118bf6bcu));
  /* 118990f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 118990f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 118990f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 118990f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 118990f8 call 0x118962c0 */
  push32(0x118990fdu); f_118962c0();
  /* 118990fd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11899100 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899103 jne 0x11899106 */
  if (!C.zf) goto L_11899106;
  /* 11899105 int3  */
  x86_unimpl("int3 @ 0x11899105");
L_11899106:;
  /* 11899106 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11899108 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189910a jne 0x118990ca */
  if (!C.zf) goto L_118990ca;
  /* 1189910c jmp 0x118990bb */
  goto L_118990bb;
L_1189910e:;
  /* 1189910e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11899111 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11899114 push edx */
  push32((uint32_t)(EDX));
  /* 11899115 push 0x118bf698 */
  push32((uint32_t)(0x118bf698u));
  /* 1189911a push 0 */
  push32((uint32_t)(0x0u));
  /* 1189911c push 0 */
  push32((uint32_t)(0x0u));
  /* 1189911e push 0 */
  push32((uint32_t)(0x0u));
  /* 11899120 push 0 */
  push32((uint32_t)(0x0u));
  /* 11899122 call 0x118962c0 */
  push32(0x11899127u); f_118962c0();
  /* 11899127 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189912a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189912d jne 0x11899130 */
  if (!C.zf) goto L_11899130;
  /* 1189912f int3  */
  x86_unimpl("int3 @ 0x1189912f");
L_11899130:;
  /* 11899130 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11899132 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11899134 jne 0x1189910e */
  if (!C.zf) goto L_1189910e;
L_11899136:;
  /* 11899136 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11899139 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1189913c push edx */
  push32((uint32_t)(EDX));
  /* 1189913d push 0x118bf678 */
  push32((uint32_t)(0x118bf678u));
  /* 11899142 push 0 */
  push32((uint32_t)(0x0u));
  /* 11899144 push 0 */
  push32((uint32_t)(0x0u));
  /* 11899146 push 0 */
  push32((uint32_t)(0x0u));
  /* 11899148 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189914a call 0x118962c0 */
  push32(0x1189914fu); f_118962c0();
  /* 1189914f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11899152 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899155 jne 0x11899158 */
  if (!C.zf) goto L_11899158;
  /* 11899157 int3  */
  x86_unimpl("int3 @ 0x11899157");
L_11899158:;
  /* 11899158 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189915a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189915c jne 0x11899136 */
  if (!C.zf) goto L_11899136;
L_1189915e:;
  /* 1189915e pop edi */
  EDI = (pop32());
  /* 1189915f pop esi */
  ESI = (pop32());
  /* 11899160 pop ebx */
  EBX = (pop32());
  /* 11899161 mov esp, ebp */
  ESP = (EBP);
  /* 11899163 pop ebp */
  EBP = (pop32());
  /* 11899164 ret  */
  ESPCHK(0x118990a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009170 @ 0x11899170 (329 bytes, 102 insns) */
void f_11899170(void) {
  FTRACE(0x11899170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11899170 push ebp */
  push32((uint32_t)(EBP));
  /* 11899171 mov ebp, esp */
  EBP = (ESP);
  /* 11899173 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11899176 cmp dword ptr [0x118c52f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c52f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189917d jne 0x11899184 */
  if (!C.zf) goto L_11899184;
  /* 1189917f call 0x1189dab0 */
  push32(0x11899184u); f_1189dab0();
L_11899184:;
  /* 11899184 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1189918b mov eax, dword ptr [0x118c37a0] */
  EAX = (r32((uint32_t)(0x118c37a0)));
  /* 11899190 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11899193:;
  /* 11899193 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899196 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11899199 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189919b je 0x118991c9 */
  if (C.zf) goto L_118991c9;
  /* 1189919d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118991a0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118991a3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118991a6 je 0x118991b1 */
  if (C.zf) goto L_118991b1;
  /* 118991a8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118991ab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118991ae mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_118991b1:;
  /* 118991b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118991b4 push eax */
  push32((uint32_t)(EAX));
  /* 118991b5 call 0x1189a030 */
  push32(0x118991bau); f_1189a030();
  /* 118991ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118991bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118991c0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 118991c4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 118991c7 jmp 0x11899193 */
  goto L_11899193;
L_118991c9:;
  /* 118991c9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 118991cb push 0x118bf6dc */
  push32((uint32_t)(0x118bf6dcu));
  /* 118991d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 118991d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118991d5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 118991dc push ecx */
  push32((uint32_t)(ECX));
  /* 118991dd call 0x11897200 */
  push32(0x118991e2u); f_11897200();
  /* 118991e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118991e5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 118991e8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118991eb mov dword ptr [0x118c37d4], edx */
  w32((uint32_t)(0x118c37d4), (EDX));
  /* 118991f1 cmp dword ptr [0x118c37d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c37d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118991f8 jne 0x11899204 */
  if (!C.zf) goto L_11899204;
  /* 118991fa push 9 */
  push32((uint32_t)(0x9u));
  /* 118991fc call 0x11896170 */
  push32(0x11899201u); f_11896170();
  /* 11899201 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11899204:;
  /* 11899204 mov eax, dword ptr [0x118c37a0] */
  EAX = (r32((uint32_t)(0x118c37a0)));
  /* 11899209 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1189920c jmp 0x11899217 */
  goto L_11899217;
L_1189920e:;
  /* 1189920e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899211 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899214 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11899217:;
  /* 11899217 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189921a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1189921d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189921f je 0x11899287 */
  if (C.zf) goto L_11899287;
  /* 11899221 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899224 push ecx */
  push32((uint32_t)(ECX));
  /* 11899225 call 0x1189a030 */
  push32(0x1189922au); f_1189a030();
  /* 1189922a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189922d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899230 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11899233 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899236 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11899239 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189923c je 0x11899285 */
  if (C.zf) goto L_11899285;
  /* 1189923e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11899240 push 0x118bf6dc */
  push32((uint32_t)(0x118bf6dcu));
  /* 11899245 push 2 */
  push32((uint32_t)(0x2u));
  /* 11899247 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189924a push ecx */
  push32((uint32_t)(ECX));
  /* 1189924b call 0x11897200 */
  push32(0x11899250u); f_11897200();
  /* 11899250 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11899253 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11899256 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11899258 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189925b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189925e jne 0x1189926a */
  if (!C.zf) goto L_1189926a;
  /* 11899260 push 9 */
  push32((uint32_t)(0x9u));
  /* 11899262 call 0x11896170 */
  push32(0x11899267u); f_11896170();
  /* 11899267 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1189926a:;
  /* 1189926a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189926d push ecx */
  push32((uint32_t)(ECX));
  /* 1189926e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11899271 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11899273 push eax */
  push32((uint32_t)(EAX));
  /* 11899274 call 0x1189a1b0 */
  push32(0x11899279u); f_1189a1b0();
  /* 11899279 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189927c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189927f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899282 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11899285:;
  /* 11899285 jmp 0x1189920e */
  goto L_1189920e;
L_11899287:;
  /* 11899287 push 2 */
  push32((uint32_t)(0x2u));
  /* 11899289 mov edx, dword ptr [0x118c37a0] */
  EDX = (r32((uint32_t)(0x118c37a0)));
  /* 1189928f push edx */
  push32((uint32_t)(EDX));
  /* 11899290 call 0x11897c90 */
  push32(0x11899295u); f_11897c90();
  /* 11899295 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11899298 mov dword ptr [0x118c37a0], 0 */
  w32((uint32_t)(0x118c37a0), (0x0u));
  /* 118992a2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118992a5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 118992ab mov dword ptr [0x118c52e0], 1 */
  w32((uint32_t)(0x118c52e0), (0x1u));
  /* 118992b5 mov esp, ebp */
  ESP = (EBP);
  /* 118992b7 pop ebp */
  EBP = (pop32());
  /* 118992b8 ret  */
  ESPCHK(0x11899170u, _esp0);
  ESP += 4; return;
}

/* FUN_100092c0 @ 0x118992c0 (216 bytes, 69 insns) */
void f_118992c0(void) {
  FTRACE(0x118992c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118992c0 push ebp */
  push32((uint32_t)(EBP));
  /* 118992c1 mov ebp, esp */
  EBP = (ESP);
  /* 118992c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118992c6 cmp dword ptr [0x118c52f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c52f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118992cd jne 0x118992d4 */
  if (!C.zf) goto L_118992d4;
  /* 118992cf call 0x1189dab0 */
  push32(0x118992d4u); f_1189dab0();
L_118992d4:;
  /* 118992d4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 118992d9 push 0x118c3810 */
  push32((uint32_t)(0x118c3810u));
  /* 118992de push 0 */
  push32((uint32_t)(0x0u));
  /* 118992e0 call dword ptr [0x118c63b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63b0))), 0x118992e6u);
  /* 118992e6 mov dword ptr [0x118c37e4], 0x118c3810 */
  w32((uint32_t)(0x118c37e4), (0x118c3810u));
  /* 118992f0 mov eax, dword ptr [0x118c530c] */
  EAX = (r32((uint32_t)(0x118c530c)));
  /* 118992f5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118992f8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118992fa jne 0x11899307 */
  if (!C.zf) goto L_11899307;
  /* 118992fc mov edx, dword ptr [0x118c37e4] */
  EDX = (r32((uint32_t)(0x118c37e4)));
  /* 11899302 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11899305 jmp 0x1189930f */
  goto L_1189930f;
L_11899307:;
  /* 11899307 mov eax, dword ptr [0x118c530c] */
  EAX = (r32((uint32_t)(0x118c530c)));
  /* 1189930c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_1189930f:;
  /* 1189930f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11899312 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11899315 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11899318 push edx */
  push32((uint32_t)(EDX));
  /* 11899319 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1189931c push eax */
  push32((uint32_t)(EAX));
  /* 1189931d push 0 */
  push32((uint32_t)(0x0u));
  /* 1189931f push 0 */
  push32((uint32_t)(0x0u));
  /* 11899321 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11899324 push ecx */
  push32((uint32_t)(ECX));
  /* 11899325 call 0x118993a0 */
  push32(0x1189932au); f_118993a0();
  /* 1189932a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189932d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11899332 push 0x118bf6e8 */
  push32((uint32_t)(0x118bf6e8u));
  /* 11899337 push 2 */
  push32((uint32_t)(0x2u));
  /* 11899339 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189933c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189933f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 11899342 push ecx */
  push32((uint32_t)(ECX));
  /* 11899343 call 0x11897200 */
  push32(0x11899348u); f_11897200();
  /* 11899348 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189934b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1189934e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899352 jne 0x1189935e */
  if (!C.zf) goto L_1189935e;
  /* 11899354 push 8 */
  push32((uint32_t)(0x8u));
  /* 11899356 call 0x11896170 */
  push32(0x1189935bu); f_11896170();
  /* 1189935b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1189935e:;
  /* 1189935e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11899361 push edx */
  push32((uint32_t)(EDX));
  /* 11899362 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11899365 push eax */
  push32((uint32_t)(EAX));
  /* 11899366 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11899369 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189936c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 1189936f push eax */
  push32((uint32_t)(EAX));
  /* 11899370 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11899373 push ecx */
  push32((uint32_t)(ECX));
  /* 11899374 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11899377 push edx */
  push32((uint32_t)(EDX));
  /* 11899378 call 0x118993a0 */
  push32(0x1189937du); f_118993a0();
  /* 1189937d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11899380 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11899383 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11899386 mov dword ptr [0x118c37c8], eax */
  w32((uint32_t)(0x118c37c8), (EAX));
  /* 1189938b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189938e mov dword ptr [0x118c37cc], ecx */
  w32((uint32_t)(0x118c37cc), (ECX));
  /* 11899394 mov esp, ebp */
  ESP = (EBP);
  /* 11899396 pop ebp */
  EBP = (pop32());
  /* 11899397 ret  */
  ESPCHK(0x118992c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100093a0 @ 0x118993a0 (1060 bytes, 360 insns) */
void f_118993a0(void) {
  FTRACE(0x118993a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118993a0 push ebp */
  push32((uint32_t)(EBP));
  /* 118993a1 mov ebp, esp */
  EBP = (ESP);
  /* 118993a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118993a6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 118993a9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 118993af mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118993b2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 118993b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118993bb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 118993be cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118993c2 je 0x118993d5 */
  if (C.zf) goto L_118993d5;
  /* 118993c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118993c7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118993ca mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 118993cc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118993cf add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118993d2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_118993d5:;
  /* 118993d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118993d8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118993db cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118993de jne 0x118994ad */
  if (!C.zf) goto L_118994ad;
L_118993e4:;
  /* 118993e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118993e7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118993ea mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 118993ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118993f0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118993f3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118993f6 je 0x11899472 */
  if (C.zf) goto L_11899472;
  /* 118993f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118993fb movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 118993fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11899400 je 0x11899472 */
  if (C.zf) goto L_11899472;
  /* 11899402 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899405 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11899407 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11899409 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189940b mov al, byte ptr [edx + 0x118c5041] */
  AL = (r8((uint32_t)(EDX + 0x118c5041)));
  /* 11899411 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11899414 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11899416 je 0x11899447 */
  if (C.zf) goto L_11899447;
  /* 11899418 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1189941b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1189941d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899420 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11899423 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11899425 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899429 je 0x11899447 */
  if (C.zf) goto L_11899447;
  /* 1189942b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1189942e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899431 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11899433 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11899435 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11899438 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189943b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1189943e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899441 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899444 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11899447:;
  /* 11899447 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1189944a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1189944c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189944f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11899452 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11899454 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899458 je 0x1189946d */
  if (C.zf) goto L_1189946d;
  /* 1189945a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1189945d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899460 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11899462 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11899464 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11899467 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189946a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1189946d:;
  /* 1189946d jmp 0x118993e4 */
  goto L_118993e4;
L_11899472:;
  /* 11899472 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11899475 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11899477 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189947a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1189947d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1189947f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899483 je 0x11899494 */
  if (C.zf) goto L_11899494;
  /* 11899485 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11899488 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1189948b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1189948e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899491 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11899494:;
  /* 11899494 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899497 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1189949a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189949d jne 0x118994a8 */
  if (!C.zf) goto L_118994a8;
  /* 1189949f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118994a2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118994a5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_118994a8:;
  /* 118994a8 jmp 0x1189957c */
  goto L_1189957c;
L_118994ad:;
  /* 118994ad mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 118994b0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118994b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118994b5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 118994b8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 118994ba cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118994be je 0x118994d3 */
  if (C.zf) goto L_118994d3;
  /* 118994c0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118994c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118994c6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 118994c8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 118994ca mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118994cd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118994d0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_118994d3:;
  /* 118994d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118994d6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 118994d8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 118994db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118994de add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118994e1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118994e4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118994e7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 118994ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118994ef mov dl, byte ptr [ecx + 0x118c5041] */
  DL = (r8((uint32_t)(ECX + 0x118c5041)));
  /* 118994f5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 118994f8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118994fa je 0x1189952b */
  if (C.zf) goto L_1189952b;
  /* 118994fc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 118994ff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11899501 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899504 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11899507 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11899509 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189950d je 0x11899522 */
  if (C.zf) goto L_11899522;
  /* 1189950f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11899512 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899515 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11899517 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11899519 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1189951c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189951f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11899522:;
  /* 11899522 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899525 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899528 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1189952b:;
  /* 1189952b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189952e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11899534 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899537 je 0x11899557 */
  if (C.zf) goto L_11899557;
  /* 11899539 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189953c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11899541 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11899543 je 0x11899557 */
  if (C.zf) goto L_11899557;
  /* 11899545 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11899548 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1189954e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899551 jne 0x118994ad */
  if (!C.zf) goto L_118994ad;
L_11899557:;
  /* 11899557 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189955a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11899560 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11899562 jne 0x1189956f */
  if (!C.zf) goto L_1189956f;
  /* 11899564 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899567 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189956a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1189956d jmp 0x1189957c */
  goto L_1189957c;
L_1189956f:;
  /* 1189956f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899573 je 0x1189957c */
  if (C.zf) goto L_1189957c;
  /* 11899575 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11899578 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_1189957c:;
  /* 1189957c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11899583:;
  /* 11899583 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899586 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11899589 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189958b je 0x118995ae */
  if (C.zf) goto L_118995ae;
L_1189958d:;
  /* 1189958d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899590 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11899593 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899596 je 0x118995a3 */
  if (C.zf) goto L_118995a3;
  /* 11899598 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189959b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1189959e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118995a1 jne 0x118995ae */
  if (!C.zf) goto L_118995ae;
L_118995a3:;
  /* 118995a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118995a6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118995a9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 118995ac jmp 0x1189958d */
  goto L_1189958d;
L_118995ae:;
  /* 118995ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118995b1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118995b4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118995b6 jne 0x118995bd */
  if (!C.zf) goto L_118995bd;
  /* 118995b8 jmp 0x1189979b */
  goto L_1189979b;
L_118995bd:;
  /* 118995bd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118995c1 je 0x118995d4 */
  if (C.zf) goto L_118995d4;
  /* 118995c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118995c6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118995c9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 118995cb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118995ce add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118995d1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_118995d4:;
  /* 118995d4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 118995d7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 118995d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118995dc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118995df mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_118995e1:;
  /* 118995e1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 118995e8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_118995ef:;
  /* 118995ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118995f2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 118995f5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118995f8 jne 0x1189960e */
  if (!C.zf) goto L_1189960e;
  /* 118995fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118995fd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899600 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11899603 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11899606 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899609 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1189960c jmp 0x118995ef */
  goto L_118995ef;
L_1189960e:;
  /* 1189960e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899611 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11899614 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899617 jne 0x1189966a */
  if (!C.zf) goto L_1189966a;
  /* 11899619 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189961c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1189961e mov ecx, 2 */
  ECX = (0x2u);
  /* 11899623 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11899625 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11899627 jne 0x11899662 */
  if (!C.zf) goto L_11899662;
  /* 11899629 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189962d je 0x1189964f */
  if (C.zf) goto L_1189964f;
  /* 1189962f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899632 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11899636 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899639 jne 0x11899646 */
  if (!C.zf) goto L_11899646;
  /* 1189963b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189963e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899641 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11899644 jmp 0x1189964d */
  goto L_1189964d;
L_11899646:;
  /* 11899646 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1189964d:;
  /* 1189964d jmp 0x11899656 */
  goto L_11899656;
L_1189964f:;
  /* 1189964f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11899656:;
  /* 11899656 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11899658 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189965c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 1189965f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11899662:;
  /* 11899662 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11899665 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11899667 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1189966a:;
  /* 1189966a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189966d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11899670 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11899673 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11899676 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11899678 je 0x1189969e */
  if (C.zf) goto L_1189969e;
  /* 1189967a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189967e je 0x1189968f */
  if (C.zf) goto L_1189968f;
  /* 11899680 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11899683 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 11899686 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11899689 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189968c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_1189968f:;
  /* 1189968f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11899692 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11899694 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899697 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1189969a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1189969c jmp 0x1189966a */
  goto L_1189966a;
L_1189969e:;
  /* 1189969e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118996a1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 118996a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118996a6 je 0x118996c4 */
  if (C.zf) goto L_118996c4;
  /* 118996a8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118996ac jne 0x118996c9 */
  if (!C.zf) goto L_118996c9;
  /* 118996ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118996b1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 118996b4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118996b7 je 0x118996c4 */
  if (C.zf) goto L_118996c4;
  /* 118996b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118996bc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118996bf cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118996c2 jne 0x118996c9 */
  if (!C.zf) goto L_118996c9;
L_118996c4:;
  /* 118996c4 jmp 0x11899774 */
  goto L_11899774;
L_118996c9:;
  /* 118996c9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118996cd je 0x11899766 */
  if (C.zf) goto L_11899766;
  /* 118996d3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118996d7 je 0x1189972d */
  if (C.zf) goto L_1189972d;
  /* 118996d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118996dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118996de mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118996e0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118996e2 mov cl, byte ptr [eax + 0x118c5041] */
  CL = (r8((uint32_t)(EAX + 0x118c5041)));
  /* 118996e8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 118996eb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118996ed je 0x11899718 */
  if (C.zf) goto L_11899718;
  /* 118996ef mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118996f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118996f5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 118996f7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 118996f9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118996fc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118996ff mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 11899702 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899705 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899708 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1189970b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1189970e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11899710 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899713 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11899716 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11899718:;
  /* 11899718 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1189971b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189971e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11899720 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11899722 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11899725 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899728 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1189972b jmp 0x11899759 */
  goto L_11899759;
L_1189972d:;
  /* 1189972d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899730 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11899732 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11899734 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11899736 mov cl, byte ptr [eax + 0x118c5041] */
  CL = (r8((uint32_t)(EAX + 0x118c5041)));
  /* 1189973c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1189973f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11899741 je 0x11899759 */
  if (C.zf) goto L_11899759;
  /* 11899743 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899746 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899749 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1189974c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1189974f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11899751 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899754 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11899757 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11899759:;
  /* 11899759 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1189975c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1189975e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899761 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11899764 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11899766:;
  /* 11899766 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899769 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189976c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1189976f jmp 0x118995e1 */
  goto L_118995e1;
L_11899774:;
  /* 11899774 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899778 je 0x11899789 */
  if (C.zf) goto L_11899789;
  /* 1189977a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1189977d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11899780 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11899783 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899786 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11899789:;
  /* 11899789 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1189978c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1189978e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899791 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11899794 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11899796 jmp 0x11899583 */
  goto L_11899583;
L_1189979b:;
  /* 1189979b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189979f je 0x118997b3 */
  if (C.zf) goto L_118997b3;
  /* 118997a1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118997a4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 118997aa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118997ad add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118997b0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_118997b3:;
  /* 118997b3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 118997b6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 118997b8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118997bb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118997be mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 118997c0 mov esp, ebp */
  ESP = (EBP);
  /* 118997c2 pop ebp */
  EBP = (pop32());
  /* 118997c3 ret  */
  ESPCHK(0x118993a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100097d0 @ 0x118997d0 (537 bytes, 173 insns) */
void f_118997d0(void) {
  FTRACE(0x118997d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118997d0 push ebp */
  push32((uint32_t)(EBP));
  /* 118997d1 mov ebp, esp */
  EBP = (ESP);
  /* 118997d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118997d6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 118997dd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 118997e4 cmp dword ptr [0x118c3914], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3914))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118997eb jne 0x1189982a */
  if (!C.zf) goto L_1189982a;
  /* 118997ed call dword ptr [0x118c6374] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6374))), 0x118997f3u);
  /* 118997f3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 118997f6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118997fa je 0x11899808 */
  if (C.zf) goto L_11899808;
  /* 118997fc mov dword ptr [0x118c3914], 1 */
  w32((uint32_t)(0x118c3914), (0x1u));
  /* 11899806 jmp 0x1189982a */
  goto L_1189982a;
L_11899808:;
  /* 11899808 call dword ptr [0x118c636c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c636c))), 0x1189980eu);
  /* 1189980e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11899811 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899815 je 0x11899823 */
  if (C.zf) goto L_11899823;
  /* 11899817 mov dword ptr [0x118c3914], 2 */
  w32((uint32_t)(0x118c3914), (0x2u));
  /* 11899821 jmp 0x1189982a */
  goto L_1189982a;
L_11899823:;
  /* 11899823 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11899825 jmp 0x118999e5 */
  goto L_118999e5;
L_1189982a:;
  /* 1189982a cmp dword ptr [0x118c3914], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118c3914))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899831 jne 0x1189992e */
  if (!C.zf) goto L_1189992e;
  /* 11899837 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189983b jne 0x11899853 */
  if (!C.zf) goto L_11899853;
  /* 1189983d call dword ptr [0x118c6374] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6374))), 0x11899843u);
  /* 11899843 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11899846 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189984a jne 0x11899853 */
  if (!C.zf) goto L_11899853;
  /* 1189984c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189984e jmp 0x118999e5 */
  goto L_118999e5;
L_11899853:;
  /* 11899853 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11899856 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11899859:;
  /* 11899859 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189985c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1189985e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11899861 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11899863 je 0x11899885 */
  if (C.zf) goto L_11899885;
  /* 11899865 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11899868 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189986b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1189986e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11899871 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11899873 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11899876 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11899878 jne 0x11899883 */
  if (!C.zf) goto L_11899883;
  /* 1189987a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189987d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899880 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11899883:;
  /* 11899883 jmp 0x11899859 */
  goto L_11899859;
L_11899885:;
  /* 11899885 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11899888 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189988b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1189988d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899890 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11899893 push 0 */
  push32((uint32_t)(0x0u));
  /* 11899895 push 0 */
  push32((uint32_t)(0x0u));
  /* 11899897 push 0 */
  push32((uint32_t)(0x0u));
  /* 11899899 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189989b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189989e push edx */
  push32((uint32_t)(EDX));
  /* 1189989f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 118998a2 push eax */
  push32((uint32_t)(EAX));
  /* 118998a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 118998a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 118998a7 call dword ptr [0x118c6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6370))), 0x118998adu);
  /* 118998ad mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 118998b0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118998b4 je 0x118998d4 */
  if (C.zf) goto L_118998d4;
  /* 118998b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 118998b8 push 0x118bf6f4 */
  push32((uint32_t)(0x118bf6f4u));
  /* 118998bd push 2 */
  push32((uint32_t)(0x2u));
  /* 118998bf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118998c2 push ecx */
  push32((uint32_t)(ECX));
  /* 118998c3 call 0x11897200 */
  push32(0x118998c8u); f_11897200();
  /* 118998c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118998cb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 118998ce cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118998d2 jne 0x118998e5 */
  if (!C.zf) goto L_118998e5;
L_118998d4:;
  /* 118998d4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 118998d7 push edx */
  push32((uint32_t)(EDX));
  /* 118998d8 call dword ptr [0x118c6380] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6380))), 0x118998deu);
  /* 118998de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118998e0 jmp 0x118999e5 */
  goto L_118999e5;
L_118998e5:;
  /* 118998e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 118998e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 118998e9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 118998ec push eax */
  push32((uint32_t)(EAX));
  /* 118998ed mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 118998f0 push ecx */
  push32((uint32_t)(ECX));
  /* 118998f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118998f4 push edx */
  push32((uint32_t)(EDX));
  /* 118998f5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 118998f8 push eax */
  push32((uint32_t)(EAX));
  /* 118998f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 118998fb push 0 */
  push32((uint32_t)(0x0u));
  /* 118998fd call dword ptr [0x118c6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6370))), 0x11899903u);
  /* 11899903 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11899905 jne 0x1189991c */
  if (!C.zf) goto L_1189991c;
  /* 11899907 push 2 */
  push32((uint32_t)(0x2u));
  /* 11899909 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189990c push ecx */
  push32((uint32_t)(ECX));
  /* 1189990d call 0x11897c90 */
  push32(0x11899912u); f_11897c90();
  /* 11899912 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11899915 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1189991c:;
  /* 1189991c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189991f push edx */
  push32((uint32_t)(EDX));
  /* 11899920 call dword ptr [0x118c6380] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6380))), 0x11899926u);
  /* 11899926 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11899929 jmp 0x118999e5 */
  goto L_118999e5;
L_1189992e:;
  /* 1189992e cmp dword ptr [0x118c3914], 2 */
  { uint32_t _a=(r32((uint32_t)(0x118c3914))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899935 jne 0x118999e3 */
  if (!C.zf) goto L_118999e3;
  /* 1189993b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189993f jne 0x11899957 */
  if (!C.zf) goto L_11899957;
  /* 11899941 call dword ptr [0x118c636c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c636c))), 0x11899947u);
  /* 11899947 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1189994a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189994e jne 0x11899957 */
  if (!C.zf) goto L_11899957;
  /* 11899950 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11899952 jmp 0x118999e5 */
  goto L_118999e5;
L_11899957:;
  /* 11899957 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189995a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1189995d:;
  /* 1189995d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11899960 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11899963 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11899965 je 0x11899985 */
  if (C.zf) goto L_11899985;
  /* 11899967 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189996a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189996d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11899970 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11899973 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11899976 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11899978 jne 0x11899983 */
  if (!C.zf) goto L_11899983;
  /* 1189997a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189997d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899980 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11899983:;
  /* 11899983 jmp 0x1189995d */
  goto L_1189995d;
L_11899985:;
  /* 11899985 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11899988 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189998b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189998e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11899991 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 11899996 push 0x118bf6f4 */
  push32((uint32_t)(0x118bf6f4u));
  /* 1189999b push 2 */
  push32((uint32_t)(0x2u));
  /* 1189999d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 118999a0 push edx */
  push32((uint32_t)(EDX));
  /* 118999a1 call 0x11897200 */
  push32(0x118999a6u); f_11897200();
  /* 118999a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118999a9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 118999ac cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118999b0 jne 0x118999c0 */
  if (!C.zf) goto L_118999c0;
  /* 118999b2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 118999b5 push eax */
  push32((uint32_t)(EAX));
  /* 118999b6 call dword ptr [0x118c6378] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6378))), 0x118999bcu);
  /* 118999bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118999be jmp 0x118999e5 */
  goto L_118999e5;
L_118999c0:;
  /* 118999c0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118999c3 push ecx */
  push32((uint32_t)(ECX));
  /* 118999c4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 118999c7 push edx */
  push32((uint32_t)(EDX));
  /* 118999c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118999cb push eax */
  push32((uint32_t)(EAX));
  /* 118999cc call 0x1189dae0 */
  push32(0x118999d1u); f_1189dae0();
  /* 118999d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118999d4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 118999d7 push ecx */
  push32((uint32_t)(ECX));
  /* 118999d8 call dword ptr [0x118c6378] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6378))), 0x118999deu);
  /* 118999de mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118999e1 jmp 0x118999e5 */
  goto L_118999e5;
L_118999e3:;
  /* 118999e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118999e5:;
  /* 118999e5 mov esp, ebp */
  ESP = (EBP);
  /* 118999e7 pop ebp */
  EBP = (pop32());
  /* 118999e8 ret  */
  ESPCHK(0x118997d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100099f0 @ 0x118999f0 (77 bytes, 25 insns) */
void f_118999f0(void) {
  FTRACE(0x118999f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118999f0 push ebp */
  push32((uint32_t)(EBP));
  /* 118999f1 mov ebp, esp */
  EBP = (ESP);
  /* 118999f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 118999f5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 118999fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118999fc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899a00 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11899a03 push eax */
  push32((uint32_t)(EAX));
  /* 11899a04 call dword ptr [0x118c6360] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6360))), 0x11899a0au);
  /* 11899a0a mov dword ptr [0x118c516c], eax */
  w32((uint32_t)(0x118c516c), (EAX));
  /* 11899a0f cmp dword ptr [0x118c516c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c516c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899a16 jne 0x11899a1c */
  if (!C.zf) goto L_11899a1c;
  /* 11899a18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11899a1a jmp 0x11899a3b */
  goto L_11899a3b;
L_11899a1c:;
  /* 11899a1c call 0x1189b4a0 */
  push32(0x11899a21u); f_1189b4a0();
  /* 11899a21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11899a23 jne 0x11899a36 */
  if (!C.zf) goto L_11899a36;
  /* 11899a25 mov ecx, dword ptr [0x118c516c] */
  ECX = (r32((uint32_t)(0x118c516c)));
  /* 11899a2b push ecx */
  push32((uint32_t)(ECX));
  /* 11899a2c call dword ptr [0x118c6364] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6364))), 0x11899a32u);
  /* 11899a32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11899a34 jmp 0x11899a3b */
  goto L_11899a3b;
L_11899a36:;
  /* 11899a36 mov eax, 1 */
  EAX = (0x1u);
L_11899a3b:;
  /* 11899a3b pop ebp */
  EBP = (pop32());
  /* 11899a3c ret  */
  ESPCHK(0x118999f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a40 @ 0x11899a40 (156 bytes, 48 insns) */
void f_11899a40(void) {
  FTRACE(0x11899a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11899a40 push ebp */
  push32((uint32_t)(EBP));
  /* 11899a41 mov ebp, esp */
  EBP = (ESP);
  /* 11899a43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11899a46 mov eax, dword ptr [0x118c5168] */
  EAX = (r32((uint32_t)(0x118c5168)));
  /* 11899a4b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11899a4e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11899a55 jmp 0x11899a60 */
  goto L_11899a60;
L_11899a57:;
  /* 11899a57 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899a5a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899a5d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11899a60:;
  /* 11899a60 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899a63 cmp edx, dword ptr [0x118c5164] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x118c5164))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899a69 jge 0x11899ab6 */
  if ((C.sf==C.of)) goto L_11899ab6;
  /* 11899a6b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11899a70 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11899a75 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11899a78 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11899a7b push ecx */
  push32((uint32_t)(ECX));
  /* 11899a7c call dword ptr [0x118c6358] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6358))), 0x11899a82u);
  /* 11899a82 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11899a87 push 0 */
  push32((uint32_t)(0x0u));
  /* 11899a89 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11899a8c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11899a8f push eax */
  push32((uint32_t)(EAX));
  /* 11899a90 call dword ptr [0x118c6358] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6358))), 0x11899a96u);
  /* 11899a96 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11899a99 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11899a9c push edx */
  push32((uint32_t)(EDX));
  /* 11899a9d push 0 */
  push32((uint32_t)(0x0u));
  /* 11899a9f mov eax, dword ptr [0x118c516c] */
  EAX = (r32((uint32_t)(0x118c516c)));
  /* 11899aa4 push eax */
  push32((uint32_t)(EAX));
  /* 11899aa5 call dword ptr [0x118c6368] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6368))), 0x11899aabu);
  /* 11899aab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11899aae add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899ab1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11899ab4 jmp 0x11899a57 */
  goto L_11899a57;
L_11899ab6:;
  /* 11899ab6 mov edx, dword ptr [0x118c5168] */
  EDX = (r32((uint32_t)(0x118c5168)));
  /* 11899abc push edx */
  push32((uint32_t)(EDX));
  /* 11899abd push 0 */
  push32((uint32_t)(0x0u));
  /* 11899abf mov eax, dword ptr [0x118c516c] */
  EAX = (r32((uint32_t)(0x118c516c)));
  /* 11899ac4 push eax */
  push32((uint32_t)(EAX));
  /* 11899ac5 call dword ptr [0x118c6368] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6368))), 0x11899acbu);
  /* 11899acb mov ecx, dword ptr [0x118c516c] */
  ECX = (r32((uint32_t)(0x118c516c)));
  /* 11899ad1 push ecx */
  push32((uint32_t)(ECX));
  /* 11899ad2 call dword ptr [0x118c6364] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6364))), 0x11899ad8u);
  /* 11899ad8 mov esp, ebp */
  ESP = (EBP);
  /* 11899ada pop ebp */
  EBP = (pop32());
  /* 11899adb ret  */
  ESPCHK(0x11899a40u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x11899ae0 (73 bytes, 19 insns) */
void f_11899ae0(void) {
  FTRACE(0x11899ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11899ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 11899ae1 mov ebp, esp */
  EBP = (ESP);
  /* 11899ae3 cmp dword ptr [0x118c37a8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118c37a8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899aea je 0x11899afe */
  if (C.zf) goto L_11899afe;
  /* 11899aec cmp dword ptr [0x118c37a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c37a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899af3 jne 0x11899b27 */
  if (!C.zf) goto L_11899b27;
  /* 11899af5 cmp dword ptr [0x118c37ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118c37ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899afc jne 0x11899b27 */
  if (!C.zf) goto L_11899b27;
L_11899afe:;
  /* 11899afe push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11899b03 call 0x11899b30 */
  push32(0x11899b08u); f_11899b30();
  /* 11899b08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11899b0b cmp dword ptr [0x118c3918], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3918))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899b12 je 0x11899b1a */
  if (C.zf) goto L_11899b1a;
  /* 11899b14 call dword ptr [0x118c3918] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c3918))), 0x11899b1au);
L_11899b1a:;
  /* 11899b1a push 0xff */
  push32((uint32_t)(0xffu));
  /* 11899b1f call 0x11899b30 */
  push32(0x11899b24u); f_11899b30();
  /* 11899b24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11899b27:;
  /* 11899b27 pop ebp */
  EBP = (pop32());
  /* 11899b28 ret  */
  ESPCHK(0x11899ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b30 @ 0x11899b30 (447 bytes, 131 insns) */
void f_11899b30(void) {
  FTRACE(0x11899b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11899b30 push ebp */
  push32((uint32_t)(EBP));
  /* 11899b31 mov ebp, esp */
  EBP = (ESP);
  /* 11899b33 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11899b39 push ebx */
  push32((uint32_t)(EBX));
  /* 11899b3a push esi */
  push32((uint32_t)(ESI));
  /* 11899b3b push edi */
  push32((uint32_t)(EDI));
  /* 11899b3c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11899b43 jmp 0x11899b4e */
  goto L_11899b4e;
L_11899b45:;
  /* 11899b45 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11899b48 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899b4b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11899b4e:;
  /* 11899b4e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899b52 jae 0x11899b67 */
  if (!C.cf) goto L_11899b67;
  /* 11899b54 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11899b57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11899b5a cmp edx, dword ptr [ecx*8 + 0x118c1ab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x118c1ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899b61 jne 0x11899b65 */
  if (!C.zf) goto L_11899b65;
  /* 11899b63 jmp 0x11899b67 */
  goto L_11899b67;
L_11899b65:;
  /* 11899b65 jmp 0x11899b45 */
  goto L_11899b45;
L_11899b67:;
  /* 11899b67 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11899b6a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11899b6d cmp ecx, dword ptr [eax*8 + 0x118c1ab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x118c1ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899b74 jne 0x11899ce8 */
  if (!C.zf) goto L_11899ce8;
  /* 11899b7a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899b81 je 0x11899ba4 */
  if (C.zf) goto L_11899ba4;
  /* 11899b83 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11899b86 mov eax, dword ptr [edx*8 + 0x118c1ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x118c1ab4)));
  /* 11899b8d push eax */
  push32((uint32_t)(EAX));
  /* 11899b8e push 0 */
  push32((uint32_t)(0x0u));
  /* 11899b90 push 0 */
  push32((uint32_t)(0x0u));
  /* 11899b92 push 0 */
  push32((uint32_t)(0x0u));
  /* 11899b94 push 1 */
  push32((uint32_t)(0x1u));
  /* 11899b96 call 0x118962c0 */
  push32(0x11899b9bu); f_118962c0();
  /* 11899b9b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11899b9e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899ba1 jne 0x11899ba4 */
  if (!C.zf) goto L_11899ba4;
  /* 11899ba3 int3  */
  x86_unimpl("int3 @ 0x11899ba3");
L_11899ba4:;
  /* 11899ba4 cmp dword ptr [0x118c37a8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118c37a8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899bab je 0x11899bbf */
  if (C.zf) goto L_11899bbf;
  /* 11899bad cmp dword ptr [0x118c37a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c37a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899bb4 jne 0x11899bf8 */
  if (!C.zf) goto L_11899bf8;
  /* 11899bb6 cmp dword ptr [0x118c37ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118c37ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899bbd jne 0x11899bf8 */
  if (!C.zf) goto L_11899bf8;
L_11899bbf:;
  /* 11899bbf push 0 */
  push32((uint32_t)(0x0u));
  /* 11899bc1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11899bc4 push ecx */
  push32((uint32_t)(ECX));
  /* 11899bc5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11899bc8 mov eax, dword ptr [edx*8 + 0x118c1ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x118c1ab4)));
  /* 11899bcf push eax */
  push32((uint32_t)(EAX));
  /* 11899bd0 call 0x1189a030 */
  push32(0x11899bd5u); f_1189a030();
  /* 11899bd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11899bd8 push eax */
  push32((uint32_t)(EAX));
  /* 11899bd9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11899bdc mov edx, dword ptr [ecx*8 + 0x118c1ab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x118c1ab4)));
  /* 11899be3 push edx */
  push32((uint32_t)(EDX));
  /* 11899be4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11899be6 call dword ptr [0x118c6394] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6394))), 0x11899becu);
  /* 11899bec push eax */
  push32((uint32_t)(EAX));
  /* 11899bed call dword ptr [0x118c6398] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6398))), 0x11899bf3u);
  /* 11899bf3 jmp 0x11899ce8 */
  goto L_11899ce8;
L_11899bf8:;
  /* 11899bf8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899bff je 0x11899ce8 */
  if (C.zf) goto L_11899ce8;
  /* 11899c05 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11899c0a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 11899c10 push eax */
  push32((uint32_t)(EAX));
  /* 11899c11 push 0 */
  push32((uint32_t)(0x0u));
  /* 11899c13 call dword ptr [0x118c63b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63b0))), 0x11899c19u);
  /* 11899c19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11899c1b jne 0x11899c31 */
  if (!C.zf) goto L_11899c31;
  /* 11899c1d push 0x118bef5c */
  push32((uint32_t)(0x118bef5cu));
  /* 11899c22 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11899c28 push ecx */
  push32((uint32_t)(ECX));
  /* 11899c29 call 0x1189a1b0 */
  push32(0x11899c2eu); f_1189a1b0();
  /* 11899c2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11899c31:;
  /* 11899c31 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 11899c37 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11899c3a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11899c3d push eax */
  push32((uint32_t)(EAX));
  /* 11899c3e call 0x1189a030 */
  push32(0x11899c43u); f_1189a030();
  /* 11899c43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11899c46 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899c49 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899c4c jbe 0x11899c7a */
  if ((C.cf||C.zf)) goto L_11899c7a;
  /* 11899c4e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11899c54 push ecx */
  push32((uint32_t)(ECX));
  /* 11899c55 call 0x1189a030 */
  push32(0x11899c5au); f_1189a030();
  /* 11899c5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11899c5d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11899c60 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 11899c64 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11899c67 push 3 */
  push32((uint32_t)(0x3u));
  /* 11899c69 push 0x118bef58 */
  push32((uint32_t)(0x118bef58u));
  /* 11899c6e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11899c71 push ecx */
  push32((uint32_t)(ECX));
  /* 11899c72 call 0x1189aa20 */
  push32(0x11899c77u); f_1189aa20();
  /* 11899c77 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11899c7a:;
  /* 11899c7a push 0x118bf9b0 */
  push32((uint32_t)(0x118bf9b0u));
  /* 11899c7f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11899c85 push edx */
  push32((uint32_t)(EDX));
  /* 11899c86 call 0x1189a1b0 */
  push32(0x11899c8bu); f_1189a1b0();
  /* 11899c8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11899c8e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11899c91 push eax */
  push32((uint32_t)(EAX));
  /* 11899c92 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 11899c98 push ecx */
  push32((uint32_t)(ECX));
  /* 11899c99 call 0x1189a1c0 */
  push32(0x11899c9eu); f_1189a1c0();
  /* 11899c9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11899ca1 push 0x118beed0 */
  push32((uint32_t)(0x118beed0u));
  /* 11899ca6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11899cac push edx */
  push32((uint32_t)(EDX));
  /* 11899cad call 0x1189a1c0 */
  push32(0x11899cb2u); f_1189a1c0();
  /* 11899cb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11899cb5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11899cb8 mov ecx, dword ptr [eax*8 + 0x118c1ab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x118c1ab4)));
  /* 11899cbf push ecx */
  push32((uint32_t)(ECX));
  /* 11899cc0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11899cc6 push edx */
  push32((uint32_t)(EDX));
  /* 11899cc7 call 0x1189a1c0 */
  push32(0x11899cccu); f_1189a1c0();
  /* 11899ccc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11899ccf push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11899cd4 push 0x118bf988 */
  push32((uint32_t)(0x118bf988u));
  /* 11899cd9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 11899cdf push eax */
  push32((uint32_t)(EAX));
  /* 11899ce0 call 0x1189a960 */
  push32(0x11899ce5u); f_1189a960();
  /* 11899ce5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11899ce8:;
  /* 11899ce8 pop edi */
  EDI = (pop32());
  /* 11899ce9 pop esi */
  ESI = (pop32());
  /* 11899cea pop ebx */
  EBX = (pop32());
  /* 11899ceb mov esp, ebp */
  ESP = (EBP);
  /* 11899ced pop ebp */
  EBP = (pop32());
  /* 11899cee ret  */
  ESPCHK(0x11899b30u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x11899cf0 (80 bytes, 27 insns) */
void f_11899cf0(void) {
  FTRACE(0x11899cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11899cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11899cf1 mov ebp, esp */
  EBP = (ESP);
  /* 11899cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 11899cf4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11899cfb jmp 0x11899d06 */
  goto L_11899d06;
L_11899cfd:;
  /* 11899cfd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899d00 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899d03 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11899d06:;
  /* 11899d06 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899d0a jae 0x11899d1f */
  if (!C.cf) goto L_11899d1f;
  /* 11899d0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899d0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11899d12 cmp edx, dword ptr [ecx*8 + 0x118c1ab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x118c1ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899d19 jne 0x11899d1d */
  if (!C.zf) goto L_11899d1d;
  /* 11899d1b jmp 0x11899d1f */
  goto L_11899d1f;
L_11899d1d:;
  /* 11899d1d jmp 0x11899cfd */
  goto L_11899cfd;
L_11899d1f:;
  /* 11899d1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899d22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11899d25 cmp ecx, dword ptr [eax*8 + 0x118c1ab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x118c1ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899d2c jne 0x11899d3a */
  if (!C.zf) goto L_11899d3a;
  /* 11899d2e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899d31 mov eax, dword ptr [edx*8 + 0x118c1ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x118c1ab4)));
  /* 11899d38 jmp 0x11899d3c */
  goto L_11899d3c;
L_11899d3a:;
  /* 11899d3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11899d3c:;
  /* 11899d3c mov esp, ebp */
  ESP = (EBP);
  /* 11899d3e pop ebp */
  EBP = (pop32());
  /* 11899d3f ret  */
  ESPCHK(0x11899cf0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x11899d40 (66 bytes, 28 insns) */
void f_11899d40(void) {
  FTRACE(0x11899d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11899d40 push ebp */
  push32((uint32_t)(EBP));
  /* 11899d41 mov ebp, esp */
  EBP = (ESP);
  /* 11899d43 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899d47 jne 0x11899d67 */
  if (!C.zf) goto L_11899d67;
  /* 11899d49 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899d4d jge 0x11899d67 */
  if ((C.sf==C.of)) goto L_11899d67;
  /* 11899d4f push 1 */
  push32((uint32_t)(0x1u));
  /* 11899d51 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11899d54 push eax */
  push32((uint32_t)(EAX));
  /* 11899d55 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11899d58 push ecx */
  push32((uint32_t)(ECX));
  /* 11899d59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11899d5c push edx */
  push32((uint32_t)(EDX));
  /* 11899d5d call 0x11899d90 */
  push32(0x11899d62u); f_11899d90();
  /* 11899d62 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11899d65 jmp 0x11899d7d */
  goto L_11899d7d;
L_11899d67:;
  /* 11899d67 push 0 */
  push32((uint32_t)(0x0u));
  /* 11899d69 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11899d6c push eax */
  push32((uint32_t)(EAX));
  /* 11899d6d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11899d70 push ecx */
  push32((uint32_t)(ECX));
  /* 11899d71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11899d74 push edx */
  push32((uint32_t)(EDX));
  /* 11899d75 call 0x11899d90 */
  push32(0x11899d7au); f_11899d90();
  /* 11899d7a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11899d7d:;
  /* 11899d7d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11899d80 pop ebp */
  EBP = (pop32());
  /* 11899d81 ret  */
  ESPCHK(0x11899d40u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x11899d90 (194 bytes, 71 insns) */
void f_11899d90(void) {
  FTRACE(0x11899d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11899d90 push ebp */
  push32((uint32_t)(EBP));
  /* 11899d91 mov ebp, esp */
  EBP = (ESP);
  /* 11899d93 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11899d96 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11899d99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11899d9c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899da0 je 0x11899db9 */
  if (C.zf) goto L_11899db9;
  /* 11899da2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899da5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11899da8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899dab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899dae mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11899db1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11899db4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11899db6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11899db9:;
  /* 11899db9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899dbc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11899dbf:;
  /* 11899dbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11899dc2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11899dc4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11899dc7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11899dca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11899dcd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11899dcf div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11899dd2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11899dd5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899dd9 jbe 0x11899df1 */
  if ((C.cf||C.zf)) goto L_11899df1;
  /* 11899ddb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11899dde add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899de1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899de4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11899de6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899de9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899dec mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11899def jmp 0x11899e05 */
  goto L_11899e05;
L_11899df1:;
  /* 11899df1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11899df4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899df7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899dfa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11899dfc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899dff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899e02 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11899e05:;
  /* 11899e05 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899e09 ja 0x11899dbf */
  if ((!C.cf&&!C.zf)) goto L_11899dbf;
  /* 11899e0b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899e0e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11899e11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899e14 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11899e17 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11899e1a:;
  /* 11899e1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899e1d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11899e1f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11899e22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899e25 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11899e28 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11899e2a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11899e2c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11899e2f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11899e32 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11899e34 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899e37 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11899e3a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11899e3d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11899e40 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899e43 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11899e46 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11899e49 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899e4c jb 0x11899e1a */
  if (C.cf) goto L_11899e1a;
  /* 11899e4e mov esp, ebp */
  ESP = (EBP);
  /* 11899e50 pop ebp */
  EBP = (pop32());
  /* 11899e51 ret  */
  ESPCHK(0x11899d90u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x11899e60 (63 bytes, 24 insns) */
void f_11899e60(void) {
  FTRACE(0x11899e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11899e60 push ebp */
  push32((uint32_t)(EBP));
  /* 11899e61 mov ebp, esp */
  EBP = (ESP);
  /* 11899e63 push ecx */
  push32((uint32_t)(ECX));
  /* 11899e64 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899e68 jne 0x11899e79 */
  if (!C.zf) goto L_11899e79;
  /* 11899e6a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899e6e jge 0x11899e79 */
  if ((C.sf==C.of)) goto L_11899e79;
  /* 11899e70 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11899e77 jmp 0x11899e80 */
  goto L_11899e80;
L_11899e79:;
  /* 11899e79 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11899e80:;
  /* 11899e80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899e83 push eax */
  push32((uint32_t)(EAX));
  /* 11899e84 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11899e87 push ecx */
  push32((uint32_t)(ECX));
  /* 11899e88 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11899e8b push edx */
  push32((uint32_t)(EDX));
  /* 11899e8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11899e8f push eax */
  push32((uint32_t)(EAX));
  /* 11899e90 call 0x11899d90 */
  push32(0x11899e95u); f_11899d90();
  /* 11899e95 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11899e98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11899e9b mov esp, ebp */
  ESP = (EBP);
  /* 11899e9d pop ebp */
  EBP = (pop32());
  /* 11899e9e ret  */
  ESPCHK(0x11899e60u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x11899ea0 (30 bytes, 14 insns) */
void f_11899ea0(void) {
  FTRACE(0x11899ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11899ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 11899ea1 mov ebp, esp */
  EBP = (ESP);
  /* 11899ea3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11899ea5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11899ea8 push eax */
  push32((uint32_t)(EAX));
  /* 11899ea9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11899eac push ecx */
  push32((uint32_t)(ECX));
  /* 11899ead mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11899eb0 push edx */
  push32((uint32_t)(EDX));
  /* 11899eb1 call 0x11899d90 */
  push32(0x11899eb6u); f_11899d90();
  /* 11899eb6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11899eb9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11899ebc pop ebp */
  EBP = (pop32());
  /* 11899ebd ret  */
  ESPCHK(0x11899ea0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x11899ec0 (72 bytes, 28 insns) */
void f_11899ec0(void) {
  FTRACE(0x11899ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11899ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 11899ec1 mov ebp, esp */
  EBP = (ESP);
  /* 11899ec3 push ecx */
  push32((uint32_t)(ECX));
  /* 11899ec4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899ec8 jne 0x11899ee1 */
  if (!C.zf) goto L_11899ee1;
  /* 11899eca cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899ece jg 0x11899ee1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11899ee1;
  /* 11899ed0 jl 0x11899ed8 */
  if ((C.sf!=C.of)) goto L_11899ed8;
  /* 11899ed2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899ed6 jae 0x11899ee1 */
  if (!C.cf) goto L_11899ee1;
L_11899ed8:;
  /* 11899ed8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11899edf jmp 0x11899ee8 */
  goto L_11899ee8;
L_11899ee1:;
  /* 11899ee1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11899ee8:;
  /* 11899ee8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899eeb push eax */
  push32((uint32_t)(EAX));
  /* 11899eec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11899eef push ecx */
  push32((uint32_t)(ECX));
  /* 11899ef0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11899ef3 push edx */
  push32((uint32_t)(EDX));
  /* 11899ef4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11899ef7 push eax */
  push32((uint32_t)(EAX));
  /* 11899ef8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11899efb push ecx */
  push32((uint32_t)(ECX));
  /* 11899efc call 0x11899f10 */
  push32(0x11899f01u); f_11899f10();
  /* 11899f01 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11899f04 mov esp, ebp */
  ESP = (EBP);
  /* 11899f06 pop ebp */
  EBP = (pop32());
  /* 11899f07 ret  */
  ESPCHK(0x11899ec0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x11899f10 (242 bytes, 91 insns) */
void f_11899f10(void) {
  FTRACE(0x11899f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11899f10 push ebp */
  push32((uint32_t)(EBP));
  /* 11899f11 mov ebp, esp */
  EBP = (ESP);
  /* 11899f13 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11899f16 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11899f19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11899f1c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899f20 je 0x11899f44 */
  if (C.zf) goto L_11899f44;
  /* 11899f22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899f25 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11899f28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899f2b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899f2e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11899f31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11899f34 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11899f36 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11899f39 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899f3c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11899f3e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11899f41 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11899f44:;
  /* 11899f44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899f47 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11899f4a:;
  /* 11899f4a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11899f4d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11899f4f push ecx */
  push32((uint32_t)(ECX));
  /* 11899f50 push eax */
  push32((uint32_t)(EAX));
  /* 11899f51 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11899f54 push edx */
  push32((uint32_t)(EDX));
  /* 11899f55 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11899f58 push eax */
  push32((uint32_t)(EAX));
  /* 11899f59 call 0x1189de90 */
  push32(0x11899f5eu); f_1189de90();
  /* 11899f5e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11899f61 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11899f64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11899f66 push edx */
  push32((uint32_t)(EDX));
  /* 11899f67 push ecx */
  push32((uint32_t)(ECX));
  /* 11899f68 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11899f6b push eax */
  push32((uint32_t)(EAX));
  /* 11899f6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11899f6f push ecx */
  push32((uint32_t)(ECX));
  /* 11899f70 call 0x1189de20 */
  push32(0x11899f75u); f_1189de20();
  /* 11899f75 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11899f78 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11899f7b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899f7f jbe 0x11899f97 */
  if ((C.cf||C.zf)) goto L_11899f97;
  /* 11899f81 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11899f84 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899f87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899f8a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11899f8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899f8f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899f92 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11899f95 jmp 0x11899fab */
  goto L_11899fab;
L_11899f97:;
  /* 11899f97 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11899f9a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899f9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899fa0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11899fa2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899fa5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899fa8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11899fab:;
  /* 11899fab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899faf ja 0x11899f4a */
  if ((!C.cf&&!C.zf)) goto L_11899f4a;
  /* 11899fb1 jb 0x11899fb9 */
  if (C.cf) goto L_11899fb9;
  /* 11899fb3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899fb7 ja 0x11899f4a */
  if ((!C.cf&&!C.zf)) goto L_11899f4a;
L_11899fb9:;
  /* 11899fb9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899fbc mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11899fbf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899fc2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11899fc5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11899fc8:;
  /* 11899fc8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899fcb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11899fcd mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11899fd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899fd3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11899fd6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11899fd8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11899fda mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11899fdd mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11899fe0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11899fe2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11899fe5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11899fe8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11899feb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11899fee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11899ff1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11899ff4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11899ff7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11899ffa jb 0x11899fc8 */
  if (C.cf) goto L_11899fc8;
  /* 11899ffc mov esp, ebp */
  ESP = (EBP);
  /* 11899ffe pop ebp */
  EBP = (pop32());
  /* 11899fff ret 0x14 */
  ESPCHK(0x11899f10u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x1189a010 (31 bytes, 15 insns) */
void f_1189a010(void) {
  FTRACE(0x1189a010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189a010 push ebp */
  push32((uint32_t)(EBP));
  /* 1189a011 mov ebp, esp */
  EBP = (ESP);
  /* 1189a013 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189a015 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1189a018 push eax */
  push32((uint32_t)(EAX));
  /* 1189a019 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1189a01c push ecx */
  push32((uint32_t)(ECX));
  /* 1189a01d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189a020 push edx */
  push32((uint32_t)(EDX));
  /* 1189a021 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189a024 push eax */
  push32((uint32_t)(EAX));
  /* 1189a025 call 0x11899f10 */
  push32(0x1189a02au); f_11899f10();
  /* 1189a02a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1189a02d pop ebp */
  EBP = (pop32());
  /* 1189a02e ret  */
  ESPCHK(0x1189a010u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x1189a030 (123 bytes, 44 insns) */
void f_1189a030(void) {
  FTRACE(0x1189a030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189a030 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1189a034 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1189a03a je 0x1189a050 */
  if (C.zf) goto L_1189a050;
L_1189a03c:;
  /* 1189a03c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1189a03e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1189a03f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1189a041 je 0x1189a083 */
  if (C.zf) goto L_1189a083;
  /* 1189a043 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1189a049 jne 0x1189a03c */
  if (!C.zf) goto L_1189a03c;
  /* 1189a04b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1189a050:;
  /* 1189a050 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1189a052 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1189a057 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a059 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1189a05c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1189a05e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a061 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1189a066 je 0x1189a050 */
  if (C.zf) goto L_1189a050;
  /* 1189a068 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1189a06b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1189a06d je 0x1189a0a1 */
  if (C.zf) goto L_1189a0a1;
  /* 1189a06f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1189a071 je 0x1189a097 */
  if (C.zf) goto L_1189a097;
  /* 1189a073 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 1189a078 je 0x1189a08d */
  if (C.zf) goto L_1189a08d;
  /* 1189a07a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1189a07f je 0x1189a083 */
  if (C.zf) goto L_1189a083;
  /* 1189a081 jmp 0x1189a050 */
  goto L_1189a050;
L_1189a083:;
  /* 1189a083 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 1189a086 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1189a08a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189a08c ret  */
  ESPCHK(0x1189a030u, _esp0);
  ESP += 4; return;
L_1189a08d:;
  /* 1189a08d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 1189a090 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1189a094 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189a096 ret  */
  ESPCHK(0x1189a030u, _esp0);
  ESP += 4; return;
L_1189a097:;
  /* 1189a097 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1189a09a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1189a09e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189a0a0 ret  */
  ESPCHK(0x1189a030u, _esp0);
  ESP += 4; return;
L_1189a0a1:;
  /* 1189a0a1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 1189a0a4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1189a0a8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189a0aa ret  */
  ESPCHK(0x1189a030u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0b0 @ 0x1189a0b0 (249 bytes, 93 insns) */
void f_1189a0b0(void) {
  FTRACE(0x1189a0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189a0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1189a0b1 mov ebp, esp */
  EBP = (ESP);
  /* 1189a0b3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189a0b6 push ebx */
  push32((uint32_t)(EBX));
  /* 1189a0b7 push esi */
  push32((uint32_t)(ESI));
  /* 1189a0b8 push edi */
  push32((uint32_t)(EDI));
  /* 1189a0b9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1189a0bc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1189a0bf lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 1189a0c2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1189a0c5:;
  /* 1189a0c5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a0c9 jne 0x1189a0e9 */
  if (!C.zf) goto L_1189a0e9;
  /* 1189a0cb push 0x118bf9e8 */
  push32((uint32_t)(0x118bf9e8u));
  /* 1189a0d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189a0d2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1189a0d4 push 0x118bf9dc */
  push32((uint32_t)(0x118bf9dcu));
  /* 1189a0d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1189a0db call 0x118962c0 */
  push32(0x1189a0e0u); f_118962c0();
  /* 1189a0e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a0e3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a0e6 jne 0x1189a0e9 */
  if (!C.zf) goto L_1189a0e9;
  /* 1189a0e8 int3  */
  x86_unimpl("int3 @ 0x1189a0e8");
L_1189a0e9:;
  /* 1189a0e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1189a0eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189a0ed jne 0x1189a0c5 */
  if (!C.zf) goto L_1189a0c5;
L_1189a0ef:;
  /* 1189a0ef cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a0f3 jne 0x1189a113 */
  if (!C.zf) goto L_1189a113;
  /* 1189a0f5 push 0x118bf9cc */
  push32((uint32_t)(0x118bf9ccu));
  /* 1189a0fa push 0 */
  push32((uint32_t)(0x0u));
  /* 1189a0fc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1189a0fe push 0x118bf9dc */
  push32((uint32_t)(0x118bf9dcu));
  /* 1189a103 push 2 */
  push32((uint32_t)(0x2u));
  /* 1189a105 call 0x118962c0 */
  push32(0x1189a10au); f_118962c0();
  /* 1189a10a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a10d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a110 jne 0x1189a113 */
  if (!C.zf) goto L_1189a113;
  /* 1189a112 int3  */
  x86_unimpl("int3 @ 0x1189a112");
L_1189a113:;
  /* 1189a113 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189a115 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189a117 jne 0x1189a0ef */
  if (!C.zf) goto L_1189a0ef;
  /* 1189a119 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189a11c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1189a123 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189a126 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189a129 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1189a12c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189a12f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189a132 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1189a134 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189a137 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189a13a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1189a13d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1189a140 push edx */
  push32((uint32_t)(EDX));
  /* 1189a141 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1189a144 push eax */
  push32((uint32_t)(EAX));
  /* 1189a145 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189a148 push ecx */
  push32((uint32_t)(ECX));
  /* 1189a149 call 0x1189e190 */
  push32(0x1189a14eu); f_1189e190();
  /* 1189a14e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a151 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1189a154 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189a157 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1189a15a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189a15d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189a160 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1189a163 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189a166 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a16a jl 0x1189a18e */
  if ((C.sf!=C.of)) goto L_1189a18e;
  /* 1189a16c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189a16f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1189a171 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1189a174 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1189a176 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1189a17c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1189a17f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189a182 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1189a184 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a187 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189a18a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1189a18c jmp 0x1189a19f */
  goto L_1189a19f;
L_1189a18e:;
  /* 1189a18e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189a191 push eax */
  push32((uint32_t)(EAX));
  /* 1189a192 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189a194 call 0x1189df10 */
  push32(0x1189a199u); f_1189df10();
  /* 1189a199 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a19c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1189a19f:;
  /* 1189a19f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1189a1a2 pop edi */
  EDI = (pop32());
  /* 1189a1a3 pop esi */
  ESI = (pop32());
  /* 1189a1a4 pop ebx */
  EBX = (pop32());
  /* 1189a1a5 mov esp, ebp */
  ESP = (EBP);
  /* 1189a1a7 pop ebp */
  EBP = (pop32());
  /* 1189a1a8 ret  */
  ESPCHK(0x1189a0b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1b0 @ 0x1189a1b0 (7 bytes, 3 insns) */
void f_1189a1b0(void) {
  FTRACE(0x1189a1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189a1b0 push edi */
  push32((uint32_t)(EDI));
  /* 1189a1b1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 1189a1b5 jmp 0x1189a221 */
  jmp_ind(0x1189a221u); return;
}

/* FUN_1000a1c0 @ 0x1189a1c0 (224 bytes, 84 insns) */
void f_1189a1c0(void) {
  FTRACE(0x1189a1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189a1c0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1189a1c4 push edi */
  push32((uint32_t)(EDI));
  /* 1189a1c5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1189a1cb je 0x1189a1dc */
  if (C.zf) goto L_1189a1dc;
L_1189a1cd:;
  /* 1189a1cd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1189a1cf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1189a1d0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1189a1d2 je 0x1189a20f */
  if (C.zf) goto L_1189a20f;
  /* 1189a1d4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1189a1da jne 0x1189a1cd */
  if (!C.zf) goto L_1189a1cd;
L_1189a1dc:;
  /* 1189a1dc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1189a1de mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1189a1e3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a1e5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1189a1e8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1189a1ea add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a1ed test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1189a1f2 je 0x1189a1dc */
  if (C.zf) goto L_1189a1dc;
  /* 1189a1f4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1189a1f7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1189a1f9 je 0x1189a21e */
  if (C.zf) goto L_1189a21e;
  /* 1189a1fb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1189a1fd je 0x1189a219 */
  if (C.zf) goto L_1189a219;
  /* 1189a1ff test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 1189a204 je 0x1189a214 */
  if (C.zf) goto L_1189a214;
  /* 1189a206 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1189a20b je 0x1189a20f */
  if (C.zf) goto L_1189a20f;
  /* 1189a20d jmp 0x1189a1dc */
  goto L_1189a1dc;
L_1189a20f:;
  /* 1189a20f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 1189a212 jmp 0x1189a221 */
  goto L_1189a221;
L_1189a214:;
  /* 1189a214 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 1189a217 jmp 0x1189a221 */
  goto L_1189a221;
L_1189a219:;
  /* 1189a219 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 1189a21c jmp 0x1189a221 */
  goto L_1189a221;
L_1189a21e:;
  /* 1189a21e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_1189a221:;
  /* 1189a221 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1189a225 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1189a22b je 0x1189a246 */
  if (C.zf) goto L_1189a246;
L_1189a22d:;
  /* 1189a22d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1189a22f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1189a230 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1189a232 je 0x1189a298 */
  if (C.zf) goto L_1189a298;
  /* 1189a234 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1189a236 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1189a237 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1189a23d jne 0x1189a22d */
  if (!C.zf) goto L_1189a22d;
  /* 1189a23f jmp 0x1189a246 */
  goto L_1189a246;
L_1189a241:;
  /* 1189a241 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1189a243 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1189a246:;
  /* 1189a246 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1189a24b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1189a24d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a24f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1189a252 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1189a254 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1189a256 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a259 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1189a25e je 0x1189a241 */
  if (C.zf) goto L_1189a241;
  /* 1189a260 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1189a262 je 0x1189a298 */
  if (C.zf) goto L_1189a298;
  /* 1189a264 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1189a266 je 0x1189a28f */
  if (C.zf) goto L_1189a28f;
  /* 1189a268 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1189a26e je 0x1189a282 */
  if (C.zf) goto L_1189a282;
  /* 1189a270 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 1189a276 je 0x1189a27a */
  if (C.zf) goto L_1189a27a;
  /* 1189a278 jmp 0x1189a241 */
  goto L_1189a241;
L_1189a27a:;
  /* 1189a27a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1189a27c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1189a280 pop edi */
  EDI = (pop32());
  /* 1189a281 ret  */
  ESPCHK(0x1189a1c0u, _esp0);
  ESP += 4; return;
L_1189a282:;
  /* 1189a282 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 1189a285 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1189a289 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1189a28d pop edi */
  EDI = (pop32());
  /* 1189a28e ret  */
  ESPCHK(0x1189a1c0u, _esp0);
  ESP += 4; return;
L_1189a28f:;
  /* 1189a28f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 1189a292 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1189a296 pop edi */
  EDI = (pop32());
  /* 1189a297 ret  */
  ESPCHK(0x1189a1c0u, _esp0);
  ESP += 4; return;
L_1189a298:;
  /* 1189a298 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1189a29a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1189a29e pop edi */
  EDI = (pop32());
  /* 1189a29f ret  */
  ESPCHK(0x1189a1c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2a0 @ 0x1189a2a0 (243 bytes, 91 insns) */
void f_1189a2a0(void) {
  FTRACE(0x1189a2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189a2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1189a2a1 mov ebp, esp */
  EBP = (ESP);
  /* 1189a2a3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189a2a6 push ebx */
  push32((uint32_t)(EBX));
  /* 1189a2a7 push esi */
  push32((uint32_t)(ESI));
  /* 1189a2a8 push edi */
  push32((uint32_t)(EDI));
  /* 1189a2a9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1189a2ac mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1189a2af:;
  /* 1189a2af cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a2b3 jne 0x1189a2d3 */
  if (!C.zf) goto L_1189a2d3;
  /* 1189a2b5 push 0x118bf9e8 */
  push32((uint32_t)(0x118bf9e8u));
  /* 1189a2ba push 0 */
  push32((uint32_t)(0x0u));
  /* 1189a2bc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1189a2be push 0x118bf9f8 */
  push32((uint32_t)(0x118bf9f8u));
  /* 1189a2c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1189a2c5 call 0x118962c0 */
  push32(0x1189a2cau); f_118962c0();
  /* 1189a2ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a2cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a2d0 jne 0x1189a2d3 */
  if (!C.zf) goto L_1189a2d3;
  /* 1189a2d2 int3  */
  x86_unimpl("int3 @ 0x1189a2d2");
L_1189a2d3:;
  /* 1189a2d3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1189a2d5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1189a2d7 jne 0x1189a2af */
  if (!C.zf) goto L_1189a2af;
L_1189a2d9:;
  /* 1189a2d9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a2dd jne 0x1189a2fd */
  if (!C.zf) goto L_1189a2fd;
  /* 1189a2df push 0x118bf9cc */
  push32((uint32_t)(0x118bf9ccu));
  /* 1189a2e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189a2e6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 1189a2e8 push 0x118bf9f8 */
  push32((uint32_t)(0x118bf9f8u));
  /* 1189a2ed push 2 */
  push32((uint32_t)(0x2u));
  /* 1189a2ef call 0x118962c0 */
  push32(0x1189a2f4u); f_118962c0();
  /* 1189a2f4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a2f7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a2fa jne 0x1189a2fd */
  if (!C.zf) goto L_1189a2fd;
  /* 1189a2fc int3  */
  x86_unimpl("int3 @ 0x1189a2fc");
L_1189a2fd:;
  /* 1189a2fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1189a2ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189a301 jne 0x1189a2d9 */
  if (!C.zf) goto L_1189a2d9;
  /* 1189a303 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189a306 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 1189a30d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189a310 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189a313 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1189a316 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189a319 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189a31c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1189a31e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189a321 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189a324 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1189a327 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1189a32a push ecx */
  push32((uint32_t)(ECX));
  /* 1189a32b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1189a32e push edx */
  push32((uint32_t)(EDX));
  /* 1189a32f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189a332 push eax */
  push32((uint32_t)(EAX));
  /* 1189a333 call 0x1189e190 */
  push32(0x1189a338u); f_1189e190();
  /* 1189a338 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a33b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1189a33e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189a341 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1189a344 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189a347 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189a34a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1189a34d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189a350 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a354 jl 0x1189a378 */
  if ((C.sf!=C.of)) goto L_1189a378;
  /* 1189a356 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189a359 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1189a35b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1189a35e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1189a360 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1189a366 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1189a369 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189a36c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1189a36e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a371 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189a374 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1189a376 jmp 0x1189a389 */
  goto L_1189a389;
L_1189a378:;
  /* 1189a378 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1189a37b push edx */
  push32((uint32_t)(EDX));
  /* 1189a37c push 0 */
  push32((uint32_t)(0x0u));
  /* 1189a37e call 0x1189df10 */
  push32(0x1189a383u); f_1189df10();
  /* 1189a383 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a386 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_1189a389:;
  /* 1189a389 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1189a38c pop edi */
  EDI = (pop32());
  /* 1189a38d pop esi */
  ESI = (pop32());
  /* 1189a38e pop ebx */
  EBX = (pop32());
  /* 1189a38f mov esp, ebp */
  ESP = (EBP);
  /* 1189a391 pop ebp */
  EBP = (pop32());
  /* 1189a392 ret  */
  ESPCHK(0x1189a2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3a0 @ 0x1189a3a0 (47 bytes, 17 insns) */
void f_1189a3a0(void) {
  FTRACE(0x1189a3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189a3a0 push ecx */
  push32((uint32_t)(ECX));
  /* 1189a3a1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a3a6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1189a3aa jb 0x1189a3c0 */
  if (C.cf) goto L_1189a3c0;
L_1189a3ac:;
  /* 1189a3ac sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189a3b2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189a3b7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1189a3b9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a3be jae 0x1189a3ac */
  if (!C.cf) goto L_1189a3ac;
L_1189a3c0:;
  /* 1189a3c0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189a3c2 mov eax, esp */
  EAX = (ESP);
  /* 1189a3c4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1189a3c6 mov esp, ecx */
  ESP = (ECX);
  /* 1189a3c8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1189a3ca mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1189a3cd push eax */
  push32((uint32_t)(EAX));
  /* 1189a3ce ret  */
  ESPCHK(0x1189a3a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3d0 @ 0x1189a3d0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_1189a3d0(void) {
  FTRACE(0x1189a3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189a3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1189a3d1 mov ebp, esp */
  EBP = (ESP);
  /* 1189a3d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189a3d6 push esi */
  push32((uint32_t)(ESI));
  /* 1189a3d7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a3db je 0x1189a3e3 */
  if (C.zf) goto L_1189a3e3;
  /* 1189a3dd cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a3e1 jne 0x1189a3e8 */
  if (!C.zf) goto L_1189a3e8;
L_1189a3e3:;
  /* 1189a3e3 jmp 0x1189a5b8 */
  goto L_1189a5b8;
L_1189a3e8:;
  /* 1189a3e8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a3ec je 0x1189a404 */
  if (C.zf) goto L_1189a404;
  /* 1189a3ee cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a3f2 je 0x1189a404 */
  if (C.zf) goto L_1189a404;
  /* 1189a3f4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a3f8 je 0x1189a404 */
  if (C.zf) goto L_1189a404;
  /* 1189a3fa cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a3fe jne 0x1189a4e1 */
  if (!C.zf) goto L_1189a4e1;
L_1189a404:;
  /* 1189a404 push 1 */
  push32((uint32_t)(0x1u));
  /* 1189a406 call 0x1189ac00 */
  push32(0x1189a40bu); f_1189ac00();
  /* 1189a40b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a40e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a412 je 0x1189a41a */
  if (C.zf) goto L_1189a41a;
  /* 1189a414 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a418 jne 0x1189a45f */
  if (!C.zf) goto L_1189a45f;
L_1189a41a:;
  /* 1189a41a cmp dword ptr [0x118c392c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c392c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a421 jne 0x1189a45f */
  if (!C.zf) goto L_1189a45f;
  /* 1189a423 push 1 */
  push32((uint32_t)(0x1u));
  /* 1189a425 push 0x1189a600 */
  push32((uint32_t)(0x1189a600u));
  /* 1189a42a call dword ptr [0x118c6354] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6354))), 0x1189a430u);
  /* 1189a430 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a433 jne 0x1189a441 */
  if (!C.zf) goto L_1189a441;
  /* 1189a435 mov dword ptr [0x118c392c], 1 */
  w32((uint32_t)(0x118c392c), (0x1u));
  /* 1189a43f jmp 0x1189a45f */
  goto L_1189a45f;
L_1189a441:;
  /* 1189a441 call dword ptr [0x118c63d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63d8))), 0x1189a447u);
  /* 1189a447 mov esi, eax */
  ESI = (EAX);
  /* 1189a449 call 0x1189f0e0 */
  push32(0x1189a44eu); f_1189f0e0();
  /* 1189a44e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 1189a450 push 1 */
  push32((uint32_t)(0x1u));
  /* 1189a452 call 0x1189aca0 */
  push32(0x1189a457u); f_1189aca0();
  /* 1189a457 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a45a jmp 0x1189a5b8 */
  goto L_1189a5b8;
L_1189a45f:;
  /* 1189a45f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189a462 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1189a465 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189a468 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189a46b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1189a46e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a472 ja 0x1189a4d2 */
  if ((!C.cf&&!C.zf)) goto L_1189a4d2;
  /* 1189a474 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189a477 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1189a479 mov dl, byte ptr [eax + 0x1189a5df] */
  DL = (r8((uint32_t)(EAX + 0x1189a5df)));
  /* 1189a47f jmp dword ptr [edx*4 + 0x1189a5cb] */
  switch (EDX) {
    case 0: goto L_1189a486;
    case 1: goto L_1189a4c0;
    case 2: goto L_1189a49a;
    case 3: goto L_1189a4ad;
    case 4: goto L_1189a4d2;
    default: x86_unimpl("switch@0x1189a47f out of table"); return;
  }
L_1189a486:;
  /* 1189a486 mov ecx, dword ptr [0x118c391c] */
  ECX = (r32((uint32_t)(0x118c391c)));
  /* 1189a48c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1189a48f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189a492 mov dword ptr [0x118c391c], edx */
  w32((uint32_t)(0x118c391c), (EDX));
  /* 1189a498 jmp 0x1189a4d2 */
  goto L_1189a4d2;
L_1189a49a:;
  /* 1189a49a mov eax, dword ptr [0x118c3920] */
  EAX = (r32((uint32_t)(0x118c3920)));
  /* 1189a49f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1189a4a2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189a4a5 mov dword ptr [0x118c3920], ecx */
  w32((uint32_t)(0x118c3920), (ECX));
  /* 1189a4ab jmp 0x1189a4d2 */
  goto L_1189a4d2;
L_1189a4ad:;
  /* 1189a4ad mov edx, dword ptr [0x118c3924] */
  EDX = (r32((uint32_t)(0x118c3924)));
  /* 1189a4b3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1189a4b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189a4b9 mov dword ptr [0x118c3924], eax */
  w32((uint32_t)(0x118c3924), (EAX));
  /* 1189a4be jmp 0x1189a4d2 */
  goto L_1189a4d2;
L_1189a4c0:;
  /* 1189a4c0 mov ecx, dword ptr [0x118c3928] */
  ECX = (r32((uint32_t)(0x118c3928)));
  /* 1189a4c6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1189a4c9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189a4cc mov dword ptr [0x118c3928], edx */
  w32((uint32_t)(0x118c3928), (EDX));
L_1189a4d2:;
  /* 1189a4d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1189a4d4 call 0x1189aca0 */
  push32(0x1189a4d9u); f_1189aca0();
  /* 1189a4d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a4dc jmp 0x1189a5b3 */
  goto L_1189a5b3;
L_1189a4e1:;
  /* 1189a4e1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a4e5 je 0x1189a4f8 */
  if (C.zf) goto L_1189a4f8;
  /* 1189a4e7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a4eb je 0x1189a4f8 */
  if (C.zf) goto L_1189a4f8;
  /* 1189a4ed cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a4f1 je 0x1189a4f8 */
  if (C.zf) goto L_1189a4f8;
  /* 1189a4f3 jmp 0x1189a5b8 */
  goto L_1189a5b8;
L_1189a4f8:;
  /* 1189a4f8 call 0x11896c40 */
  push32(0x1189a4fdu); f_11896c40();
  /* 1189a4fd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1189a500 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189a503 cmp dword ptr [eax + 0x50], 0x118c1c00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x118c1c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a50a jne 0x1189a555 */
  if (!C.zf) goto L_1189a555;
  /* 1189a50c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 1189a511 push 0x118bfa04 */
  push32((uint32_t)(0x118bfa04u));
  /* 1189a516 push 2 */
  push32((uint32_t)(0x2u));
  /* 1189a518 mov ecx, dword ptr [0x118c1c80] */
  ECX = (r32((uint32_t)(0x118c1c80)));
  /* 1189a51e push ecx */
  push32((uint32_t)(ECX));
  /* 1189a51f call 0x11897200 */
  push32(0x1189a524u); f_11897200();
  /* 1189a524 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a527 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189a52a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 1189a52d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189a530 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a534 je 0x1189a553 */
  if (C.zf) goto L_1189a553;
  /* 1189a536 mov ecx, dword ptr [0x118c1c80] */
  ECX = (r32((uint32_t)(0x118c1c80)));
  /* 1189a53c push ecx */
  push32((uint32_t)(ECX));
  /* 1189a53d push 0x118c1c00 */
  push32((uint32_t)(0x118c1c00u));
  /* 1189a542 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189a545 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 1189a548 push eax */
  push32((uint32_t)(EAX));
  /* 1189a549 call 0x1189dae0 */
  push32(0x1189a54eu); f_1189dae0();
  /* 1189a54e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a551 jmp 0x1189a555 */
  goto L_1189a555;
L_1189a553:;
  /* 1189a553 jmp 0x1189a5b8 */
  goto L_1189a5b8;
L_1189a555:;
  /* 1189a555 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189a558 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1189a55b push edx */
  push32((uint32_t)(EDX));
  /* 1189a55c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189a55f push eax */
  push32((uint32_t)(EAX));
  /* 1189a560 call 0x1189a8e0 */
  push32(0x1189a565u); f_1189a8e0();
  /* 1189a565 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a568 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1189a56b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a56f jne 0x1189a573 */
  if (!C.zf) goto L_1189a573;
  /* 1189a571 jmp 0x1189a5b8 */
  goto L_1189a5b8;
L_1189a573:;
  /* 1189a573 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189a576 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1189a579 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1189a57c:;
  /* 1189a57c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189a57f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1189a582 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a585 jne 0x1189a5b3 */
  if (!C.zf) goto L_1189a5b3;
  /* 1189a587 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189a58a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189a58d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1189a590 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189a593 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a596 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1189a599 mov edx, dword ptr [0x118c1c84] */
  EDX = (r32((uint32_t)(0x118c1c84)));
  /* 1189a59f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1189a5a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189a5a5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 1189a5a8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a5aa cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a5ad jb 0x1189a5b1 */
  if (C.cf) goto L_1189a5b1;
  /* 1189a5af jmp 0x1189a5b3 */
  goto L_1189a5b3;
L_1189a5b1:;
  /* 1189a5b1 jmp 0x1189a57c */
  goto L_1189a57c;
L_1189a5b3:;
  /* 1189a5b3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189a5b6 jmp 0x1189a5c6 */
  goto L_1189a5c6;
L_1189a5b8:;
  /* 1189a5b8 call 0x1189f0d0 */
  push32(0x1189a5bdu); f_1189f0d0();
  /* 1189a5bd mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 1189a5c3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1189a5c6:;
  /* 1189a5c6 pop esi */
  ESI = (pop32());
  /* 1189a5c7 mov esp, ebp */
  ESP = (EBP);
  /* 1189a5c9 pop ebp */
  EBP = (pop32());
  /* 1189a5ca ret  */
  ESPCHK(0x1189a3d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a600 @ 0x1189a600 (146 bytes, 45 insns) */
void f_1189a600(void) {
  FTRACE(0x1189a600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189a600 push ebp */
  push32((uint32_t)(EBP));
  /* 1189a601 mov ebp, esp */
  EBP = (ESP);
  /* 1189a603 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189a606 push 1 */
  push32((uint32_t)(0x1u));
  /* 1189a608 call 0x1189ac00 */
  push32(0x1189a60du); f_1189ac00();
  /* 1189a60d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a610 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a614 jne 0x1189a62e */
  if (!C.zf) goto L_1189a62e;
  /* 1189a616 mov dword ptr [ebp - 8], 0x118c391c */
  w32((uint32_t)(EBP + -0x8), (0x118c391cu));
  /* 1189a61d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189a620 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1189a622 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1189a625 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1189a62c jmp 0x1189a644 */
  goto L_1189a644;
L_1189a62e:;
  /* 1189a62e mov dword ptr [ebp - 8], 0x118c3920 */
  w32((uint32_t)(EBP + -0x8), (0x118c3920u));
  /* 1189a635 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189a638 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1189a63a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1189a63d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_1189a644:;
  /* 1189a644 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a648 jne 0x1189a658 */
  if (!C.zf) goto L_1189a658;
  /* 1189a64a push 1 */
  push32((uint32_t)(0x1u));
  /* 1189a64c call 0x1189aca0 */
  push32(0x1189a651u); f_1189aca0();
  /* 1189a651 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a654 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189a656 jmp 0x1189a68c */
  goto L_1189a68c;
L_1189a658:;
  /* 1189a658 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a65c je 0x1189a67d */
  if (C.zf) goto L_1189a67d;
  /* 1189a65e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189a661 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 1189a667 push 1 */
  push32((uint32_t)(0x1u));
  /* 1189a669 call 0x1189aca0 */
  push32(0x1189a66eu); f_1189aca0();
  /* 1189a66e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a671 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189a674 push edx */
  push32((uint32_t)(EDX));
  /* 1189a675 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x1189a678u);
  /* 1189a678 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a67b jmp 0x1189a687 */
  goto L_1189a687;
L_1189a67d:;
  /* 1189a67d push 1 */
  push32((uint32_t)(0x1u));
  /* 1189a67f call 0x1189aca0 */
  push32(0x1189a684u); f_1189aca0();
  /* 1189a684 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1189a687:;
  /* 1189a687 mov eax, 1 */
  EAX = (0x1u);
L_1189a68c:;
  /* 1189a68c mov esp, ebp */
  ESP = (EBP);
  /* 1189a68e pop ebp */
  EBP = (pop32());
  /* 1189a68f ret 4 */
  ESPCHK(0x1189a600u, _esp0);
  ESP += 8; return;
}

/* FUN_1000a6a0 @ 0x1189a6a0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_1189a6a0(void) {
  FTRACE(0x1189a6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189a6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1189a6a1 mov ebp, esp */
  EBP = (ESP);
  /* 1189a6a3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189a6a6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1189a6ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189a6b0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1189a6b3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189a6b6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189a6b9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1189a6bc cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a6c0 ja 0x1189a76e */
  if ((!C.cf&&!C.zf)) goto L_1189a76e;
  /* 1189a6c6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1189a6c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1189a6cb mov dl, byte ptr [eax + 0x1189a8c2] */
  DL = (r8((uint32_t)(EAX + 0x1189a8c2)));
  /* 1189a6d1 jmp dword ptr [edx*4 + 0x1189a8aa] */
  switch (EDX) {
    case 0: goto L_1189a6d8;
    case 1: goto L_1189a743;
    case 2: goto L_1189a729;
    case 3: goto L_1189a6f5;
    case 4: goto L_1189a70f;
    case 5: goto L_1189a76e;
    default: x86_unimpl("switch@0x1189a6d1 out of table"); return;
  }
L_1189a6d8:;
  /* 1189a6d8 mov dword ptr [ebp - 0x18], 0x118c391c */
  w32((uint32_t)(EBP + -0x18), (0x118c391cu));
  /* 1189a6df mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189a6e2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1189a6e4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1189a6e7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189a6ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a6ed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1189a6f0 jmp 0x1189a776 */
  goto L_1189a776;
L_1189a6f5:;
  /* 1189a6f5 mov dword ptr [ebp - 0x18], 0x118c3920 */
  w32((uint32_t)(EBP + -0x18), (0x118c3920u));
  /* 1189a6fc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189a6ff mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1189a701 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1189a704 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189a707 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a70a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1189a70d jmp 0x1189a776 */
  goto L_1189a776;
L_1189a70f:;
  /* 1189a70f mov dword ptr [ebp - 0x18], 0x118c3924 */
  w32((uint32_t)(EBP + -0x18), (0x118c3924u));
  /* 1189a716 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189a719 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1189a71b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1189a71e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189a721 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a724 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1189a727 jmp 0x1189a776 */
  goto L_1189a776;
L_1189a729:;
  /* 1189a729 mov dword ptr [ebp - 0x18], 0x118c3928 */
  w32((uint32_t)(EBP + -0x18), (0x118c3928u));
  /* 1189a730 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189a733 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1189a735 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1189a738 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189a73b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a73e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1189a741 jmp 0x1189a776 */
  goto L_1189a776;
L_1189a743:;
  /* 1189a743 call 0x11896c40 */
  push32(0x1189a748u); f_11896c40();
  /* 1189a748 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1189a74b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189a74e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1189a751 push edx */
  push32((uint32_t)(EDX));
  /* 1189a752 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189a755 push eax */
  push32((uint32_t)(EAX));
  /* 1189a756 call 0x1189a8e0 */
  push32(0x1189a75bu); f_1189a8e0();
  /* 1189a75b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a75e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a761 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1189a764 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189a767 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1189a769 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1189a76c jmp 0x1189a776 */
  goto L_1189a776;
L_1189a76e:;
  /* 1189a76e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1189a771 jmp 0x1189a8a6 */
  goto L_1189a8a6;
L_1189a776:;
  /* 1189a776 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a77a je 0x1189a786 */
  if (C.zf) goto L_1189a786;
  /* 1189a77c push 1 */
  push32((uint32_t)(0x1u));
  /* 1189a77e call 0x1189ac00 */
  push32(0x1189a783u); f_1189ac00();
  /* 1189a783 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1189a786:;
  /* 1189a786 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a78a jne 0x1189a7a3 */
  if (!C.zf) goto L_1189a7a3;
  /* 1189a78c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a790 je 0x1189a79c */
  if (C.zf) goto L_1189a79c;
  /* 1189a792 push 1 */
  push32((uint32_t)(0x1u));
  /* 1189a794 call 0x1189aca0 */
  push32(0x1189a799u); f_1189aca0();
  /* 1189a799 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1189a79c:;
  /* 1189a79c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189a79e jmp 0x1189a8a6 */
  goto L_1189a8a6;
L_1189a7a3:;
  /* 1189a7a3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a7a7 jne 0x1189a7c0 */
  if (!C.zf) goto L_1189a7c0;
  /* 1189a7a9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a7ad je 0x1189a7b9 */
  if (C.zf) goto L_1189a7b9;
  /* 1189a7af push 1 */
  push32((uint32_t)(0x1u));
  /* 1189a7b1 call 0x1189aca0 */
  push32(0x1189a7b6u); f_1189aca0();
  /* 1189a7b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1189a7b9:;
  /* 1189a7b9 push 3 */
  push32((uint32_t)(0x3u));
  /* 1189a7bb call 0x118969c0 */
  push32(0x1189a7c0u); f_118969c0();
L_1189a7c0:;
  /* 1189a7c0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a7c4 je 0x1189a7d2 */
  if (C.zf) goto L_1189a7d2;
  /* 1189a7c6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a7ca je 0x1189a7d2 */
  if (C.zf) goto L_1189a7d2;
  /* 1189a7cc cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a7d0 jne 0x1189a7fe */
  if (!C.zf) goto L_1189a7fe;
L_1189a7d2:;
  /* 1189a7d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189a7d5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1189a7d8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1189a7db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189a7de mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 1189a7e5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a7e9 jne 0x1189a7fe */
  if (!C.zf) goto L_1189a7fe;
  /* 1189a7eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189a7ee mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 1189a7f1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1189a7f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189a7f7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_1189a7fe:;
  /* 1189a7fe cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a802 jne 0x1189a840 */
  if (!C.zf) goto L_1189a840;
  /* 1189a804 mov eax, dword ptr [0x118c1c78] */
  EAX = (r32((uint32_t)(0x118c1c78)));
  /* 1189a809 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1189a80c jmp 0x1189a817 */
  goto L_1189a817;
L_1189a80e:;
  /* 1189a80e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189a811 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a814 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1189a817:;
  /* 1189a817 mov edx, dword ptr [0x118c1c78] */
  EDX = (r32((uint32_t)(0x118c1c78)));
  /* 1189a81d add edx, dword ptr [0x118c1c7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x118c1c7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a823 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a826 jge 0x1189a83e */
  if ((C.sf==C.of)) goto L_1189a83e;
  /* 1189a828 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189a82b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1189a82e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189a831 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1189a834 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1189a83c jmp 0x1189a80e */
  goto L_1189a80e;
L_1189a83e:;
  /* 1189a83e jmp 0x1189a849 */
  goto L_1189a849;
L_1189a840:;
  /* 1189a840 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189a843 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1189a849:;
  /* 1189a849 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a84d je 0x1189a859 */
  if (C.zf) goto L_1189a859;
  /* 1189a84f push 1 */
  push32((uint32_t)(0x1u));
  /* 1189a851 call 0x1189aca0 */
  push32(0x1189a856u); f_1189aca0();
  /* 1189a856 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1189a859:;
  /* 1189a859 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a85d jne 0x1189a870 */
  if (!C.zf) goto L_1189a870;
  /* 1189a85f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189a862 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 1189a865 push edx */
  push32((uint32_t)(EDX));
  /* 1189a866 push 8 */
  push32((uint32_t)(0x8u));
  /* 1189a868 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x1189a86bu);
  /* 1189a86b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a86e jmp 0x1189a87a */
  goto L_1189a87a;
L_1189a870:;
  /* 1189a870 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189a873 push eax */
  push32((uint32_t)(EAX));
  /* 1189a874 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x1189a877u);
  /* 1189a877 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1189a87a:;
  /* 1189a87a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a87e je 0x1189a88c */
  if (C.zf) goto L_1189a88c;
  /* 1189a880 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a884 je 0x1189a88c */
  if (C.zf) goto L_1189a88c;
  /* 1189a886 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a88a jne 0x1189a8a4 */
  if (!C.zf) goto L_1189a8a4;
L_1189a88c:;
  /* 1189a88c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189a88f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189a892 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 1189a895 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a899 jne 0x1189a8a4 */
  if (!C.zf) goto L_1189a8a4;
  /* 1189a89b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189a89e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189a8a1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_1189a8a4:;
  /* 1189a8a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1189a8a6:;
  /* 1189a8a6 mov esp, ebp */
  ESP = (EBP);
  /* 1189a8a8 pop ebp */
  EBP = (pop32());
  /* 1189a8a9 ret  */
  ESPCHK(0x1189a6a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a8e0 @ 0x1189a8e0 (91 bytes, 35 insns) */
void f_1189a8e0(void) {
  FTRACE(0x1189a8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189a8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1189a8e1 mov ebp, esp */
  EBP = (ESP);
  /* 1189a8e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1189a8e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189a8e7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1189a8ea:;
  /* 1189a8ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189a8ed mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1189a8f0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a8f3 je 0x1189a913 */
  if (C.zf) goto L_1189a913;
  /* 1189a8f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189a8f8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a8fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1189a8fe mov ecx, dword ptr [0x118c1c84] */
  ECX = (r32((uint32_t)(0x118c1c84)));
  /* 1189a904 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1189a907 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189a90a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a90c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a90f jae 0x1189a913 */
  if (!C.cf) goto L_1189a913;
  /* 1189a911 jmp 0x1189a8ea */
  goto L_1189a8ea;
L_1189a913:;
  /* 1189a913 mov eax, dword ptr [0x118c1c84] */
  EAX = (r32((uint32_t)(0x118c1c84)));
  /* 1189a918 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1189a91b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189a91e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a920 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a923 jae 0x1189a935 */
  if (!C.cf) goto L_1189a935;
  /* 1189a925 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189a928 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1189a92b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a92e jne 0x1189a935 */
  if (!C.zf) goto L_1189a935;
  /* 1189a930 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189a933 jmp 0x1189a937 */
  goto L_1189a937;
L_1189a935:;
  /* 1189a935 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1189a937:;
  /* 1189a937 mov esp, ebp */
  ESP = (EBP);
  /* 1189a939 pop ebp */
  EBP = (pop32());
  /* 1189a93a ret  */
  ESPCHK(0x1189a8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a940 @ 0x1189a940 (13 bytes, 6 insns) */
void f_1189a940(void) {
  FTRACE(0x1189a940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189a940 push ebp */
  push32((uint32_t)(EBP));
  /* 1189a941 mov ebp, esp */
  EBP = (ESP);
  /* 1189a943 call 0x11896c40 */
  push32(0x1189a948u); f_11896c40();
  /* 1189a948 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a94b pop ebp */
  EBP = (pop32());
  /* 1189a94c ret  */
  ESPCHK(0x1189a940u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a950 @ 0x1189a950 (13 bytes, 6 insns) */
void f_1189a950(void) {
  FTRACE(0x1189a950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189a950 push ebp */
  push32((uint32_t)(EBP));
  /* 1189a951 mov ebp, esp */
  EBP = (ESP);
  /* 1189a953 call 0x11896c40 */
  push32(0x1189a958u); f_11896c40();
  /* 1189a958 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189a95b pop ebp */
  EBP = (pop32());
  /* 1189a95c ret  */
  ESPCHK(0x1189a950u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a960 @ 0x1189a960 (187 bytes, 54 insns) */
void f_1189a960(void) {
  FTRACE(0x1189a960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189a960 push ebp */
  push32((uint32_t)(EBP));
  /* 1189a961 mov ebp, esp */
  EBP = (ESP);
  /* 1189a963 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189a966 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1189a96d cmp dword ptr [0x118c3930], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3930))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a974 jne 0x1189a9d3 */
  if (!C.zf) goto L_1189a9d3;
  /* 1189a976 push 0x118bee30 */
  push32((uint32_t)(0x118bee30u));
  /* 1189a97b call dword ptr [0x118c63a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63a8))), 0x1189a981u);
  /* 1189a981 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1189a984 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a988 je 0x1189a9a7 */
  if (C.zf) goto L_1189a9a7;
  /* 1189a98a push 0x118bfa34 */
  push32((uint32_t)(0x118bfa34u));
  /* 1189a98f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189a992 push eax */
  push32((uint32_t)(EAX));
  /* 1189a993 call dword ptr [0x118c63a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63a4))), 0x1189a999u);
  /* 1189a999 mov dword ptr [0x118c3930], eax */
  w32((uint32_t)(0x118c3930), (EAX));
  /* 1189a99e cmp dword ptr [0x118c3930], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3930))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a9a5 jne 0x1189a9ab */
  if (!C.zf) goto L_1189a9ab;
L_1189a9a7:;
  /* 1189a9a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189a9a9 jmp 0x1189aa17 */
  goto L_1189aa17;
L_1189a9ab:;
  /* 1189a9ab push 0x118bfa24 */
  push32((uint32_t)(0x118bfa24u));
  /* 1189a9b0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189a9b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1189a9b4 call dword ptr [0x118c63a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63a4))), 0x1189a9bau);
  /* 1189a9ba mov dword ptr [0x118c3934], eax */
  w32((uint32_t)(0x118c3934), (EAX));
  /* 1189a9bf push 0x118bfa10 */
  push32((uint32_t)(0x118bfa10u));
  /* 1189a9c4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189a9c7 push edx */
  push32((uint32_t)(EDX));
  /* 1189a9c8 call dword ptr [0x118c63a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63a4))), 0x1189a9ceu);
  /* 1189a9ce mov dword ptr [0x118c3938], eax */
  w32((uint32_t)(0x118c3938), (EAX));
L_1189a9d3:;
  /* 1189a9d3 cmp dword ptr [0x118c3934], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3934))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a9da je 0x1189a9e5 */
  if (C.zf) goto L_1189a9e5;
  /* 1189a9dc call dword ptr [0x118c3934] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c3934))), 0x1189a9e2u);
  /* 1189a9e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1189a9e5:;
  /* 1189a9e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a9e9 je 0x1189aa01 */
  if (C.zf) goto L_1189aa01;
  /* 1189a9eb cmp dword ptr [0x118c3938], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3938))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189a9f2 je 0x1189aa01 */
  if (C.zf) goto L_1189aa01;
  /* 1189a9f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189a9f7 push eax */
  push32((uint32_t)(EAX));
  /* 1189a9f8 call dword ptr [0x118c3938] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c3938))), 0x1189a9feu);
  /* 1189a9fe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1189aa01:;
  /* 1189aa01 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1189aa04 push ecx */
  push32((uint32_t)(ECX));
  /* 1189aa05 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189aa08 push edx */
  push32((uint32_t)(EDX));
  /* 1189aa09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189aa0c push eax */
  push32((uint32_t)(EAX));
  /* 1189aa0d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189aa10 push ecx */
  push32((uint32_t)(ECX));
  /* 1189aa11 call dword ptr [0x118c3930] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c3930))), 0x1189aa17u);
L_1189aa17:;
  /* 1189aa17 mov esp, ebp */
  ESP = (EBP);
  /* 1189aa19 pop ebp */
  EBP = (pop32());
  /* 1189aa1a ret  */
  ESPCHK(0x1189a960u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x1189aa20 (254 bytes, 109 insns) */
void f_1189aa20(void) {
  FTRACE(0x1189aa20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189aa20 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1189aa24 push edi */
  push32((uint32_t)(EDI));
  /* 1189aa25 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1189aa27 je 0x1189aaa3 */
  if (C.zf) goto L_1189aaa3;
  /* 1189aa29 push esi */
  push32((uint32_t)(ESI));
  /* 1189aa2a push ebx */
  push32((uint32_t)(EBX));
  /* 1189aa2b mov ebx, ecx */
  EBX = (ECX);
  /* 1189aa2d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 1189aa31 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1189aa37 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1189aa3b jne 0x1189aa44 */
  if (!C.zf) goto L_1189aa44;
  /* 1189aa3d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1189aa40 jne 0x1189aab1 */
  if (!C.zf) goto L_1189aab1;
  /* 1189aa42 jmp 0x1189aa65 */
  goto L_1189aa65;
L_1189aa44:;
  /* 1189aa44 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1189aa46 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1189aa47 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1189aa49 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1189aa4a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1189aa4b je 0x1189aa72 */
  if (C.zf) goto L_1189aa72;
  /* 1189aa4d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1189aa4f je 0x1189aa7a */
  if (C.zf) goto L_1189aa7a;
  /* 1189aa51 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1189aa57 jne 0x1189aa44 */
  if (!C.zf) goto L_1189aa44;
  /* 1189aa59 mov ebx, ecx */
  EBX = (ECX);
  /* 1189aa5b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1189aa5e jne 0x1189aab1 */
  if (!C.zf) goto L_1189aab1;
L_1189aa60:;
  /* 1189aa60 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1189aa63 je 0x1189aa72 */
  if (C.zf) goto L_1189aa72;
L_1189aa65:;
  /* 1189aa65 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1189aa67 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1189aa68 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1189aa6a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1189aa6b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1189aa6d je 0x1189aa9e */
  if (C.zf) goto L_1189aa9e;
  /* 1189aa6f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1189aa70 jne 0x1189aa65 */
  if (!C.zf) goto L_1189aa65;
L_1189aa72:;
  /* 1189aa72 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1189aa76 pop ebx */
  EBX = (pop32());
  /* 1189aa77 pop esi */
  ESI = (pop32());
  /* 1189aa78 pop edi */
  EDI = (pop32());
  /* 1189aa79 ret  */
  ESPCHK(0x1189aa20u, _esp0);
  ESP += 4; return;
L_1189aa7a:;
  /* 1189aa7a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1189aa80 je 0x1189aa94 */
  if (C.zf) goto L_1189aa94;
L_1189aa82:;
  /* 1189aa82 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1189aa84 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1189aa85 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1189aa86 je 0x1189ab16 */
  if (C.zf) goto L_1189ab16;
  /* 1189aa8c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1189aa92 jne 0x1189aa82 */
  if (!C.zf) goto L_1189aa82;
L_1189aa94:;
  /* 1189aa94 mov ebx, ecx */
  EBX = (ECX);
  /* 1189aa96 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1189aa99 jne 0x1189ab07 */
  if (!C.zf) goto L_1189ab07;
L_1189aa9b:;
  /* 1189aa9b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1189aa9d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1189aa9e:;
  /* 1189aa9e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1189aa9f jne 0x1189aa9b */
  if (!C.zf) goto L_1189aa9b;
  /* 1189aaa1 pop ebx */
  EBX = (pop32());
  /* 1189aaa2 pop esi */
  ESI = (pop32());
L_1189aaa3:;
  /* 1189aaa3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1189aaa7 pop edi */
  EDI = (pop32());
  /* 1189aaa8 ret  */
  ESPCHK(0x1189aa20u, _esp0);
  ESP += 4; return;
L_1189aaa9:;
  /* 1189aaa9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1189aaab add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1189aaae dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1189aaaf je 0x1189aa60 */
  if (C.zf) goto L_1189aa60;
L_1189aab1:;
  /* 1189aab1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1189aab6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1189aab8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189aaba xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1189aabd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1189aabf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 1189aac1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1189aac4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1189aac9 je 0x1189aaa9 */
  if (C.zf) goto L_1189aaa9;
  /* 1189aacb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1189aacd je 0x1189aafb */
  if (C.zf) goto L_1189aafb;
  /* 1189aacf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1189aad1 je 0x1189aaf1 */
  if (C.zf) goto L_1189aaf1;
  /* 1189aad3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1189aad9 je 0x1189aae7 */
  if (C.zf) goto L_1189aae7;
  /* 1189aadb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 1189aae1 jne 0x1189aaa9 */
  if (!C.zf) goto L_1189aaa9;
  /* 1189aae3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1189aae5 jmp 0x1189aaff */
  goto L_1189aaff;
L_1189aae7:;
  /* 1189aae7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1189aaed mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1189aaef jmp 0x1189aaff */
  goto L_1189aaff;
L_1189aaf1:;
  /* 1189aaf1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1189aaf7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1189aaf9 jmp 0x1189aaff */
  goto L_1189aaff;
L_1189aafb:;
  /* 1189aafb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1189aafd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1189aaff:;
  /* 1189aaff add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1189ab02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189ab04 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1189ab05 je 0x1189ab11 */
  if (C.zf) goto L_1189ab11;
L_1189ab07:;
  /* 1189ab07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1189ab09:;
  /* 1189ab09 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1189ab0b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1189ab0e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1189ab0f jne 0x1189ab09 */
  if (!C.zf) goto L_1189ab09;
L_1189ab11:;
  /* 1189ab11 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1189ab14 jne 0x1189aa9b */
  if (!C.zf) goto L_1189aa9b;
L_1189ab16:;
  /* 1189ab16 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1189ab1a pop ebx */
  EBX = (pop32());
  /* 1189ab1b pop esi */
  ESI = (pop32());
  /* 1189ab1c pop edi */
  EDI = (pop32());
  /* 1189ab1d ret  */
  ESPCHK(0x1189aa20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab20 @ 0x1189ab20 (55 bytes, 16 insns) */
void f_1189ab20(void) {
  FTRACE(0x1189ab20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189ab20 push ebp */
  push32((uint32_t)(EBP));
  /* 1189ab21 mov ebp, esp */
  EBP = (ESP);
  /* 1189ab23 mov eax, dword ptr [0x118c1b84] */
  EAX = (r32((uint32_t)(0x118c1b84)));
  /* 1189ab28 push eax */
  push32((uint32_t)(EAX));
  /* 1189ab29 call dword ptr [0x118c635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c635c))), 0x1189ab2fu);
  /* 1189ab2f mov ecx, dword ptr [0x118c1b74] */
  ECX = (r32((uint32_t)(0x118c1b74)));
  /* 1189ab35 push ecx */
  push32((uint32_t)(ECX));
  /* 1189ab36 call dword ptr [0x118c635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c635c))), 0x1189ab3cu);
  /* 1189ab3c mov edx, dword ptr [0x118c1b64] */
  EDX = (r32((uint32_t)(0x118c1b64)));
  /* 1189ab42 push edx */
  push32((uint32_t)(EDX));
  /* 1189ab43 call dword ptr [0x118c635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c635c))), 0x1189ab49u);
  /* 1189ab49 mov eax, dword ptr [0x118c1b44] */
  EAX = (r32((uint32_t)(0x118c1b44)));
  /* 1189ab4e push eax */
  push32((uint32_t)(EAX));
  /* 1189ab4f call dword ptr [0x118c635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c635c))), 0x1189ab55u);
  /* 1189ab55 pop ebp */
  EBP = (pop32());
  /* 1189ab56 ret  */
  ESPCHK(0x1189ab20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab60 @ 0x1189ab60 (159 bytes, 47 insns) */
void f_1189ab60(void) {
  FTRACE(0x1189ab60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189ab60 push ebp */
  push32((uint32_t)(EBP));
  /* 1189ab61 mov ebp, esp */
  EBP = (ESP);
  /* 1189ab63 push ecx */
  push32((uint32_t)(ECX));
  /* 1189ab64 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1189ab6b jmp 0x1189ab76 */
  goto L_1189ab76;
L_1189ab6d:;
  /* 1189ab6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189ab70 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189ab73 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1189ab76:;
  /* 1189ab76 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ab7a jge 0x1189abc9 */
  if ((C.sf==C.of)) goto L_1189abc9;
  /* 1189ab7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189ab7f cmp dword ptr [ecx*4 + 0x118c1b40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x118c1b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ab87 je 0x1189abc7 */
  if (C.zf) goto L_1189abc7;
  /* 1189ab89 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ab8d je 0x1189abc7 */
  if (C.zf) goto L_1189abc7;
  /* 1189ab8f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ab93 je 0x1189abc7 */
  if (C.zf) goto L_1189abc7;
  /* 1189ab95 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ab99 je 0x1189abc7 */
  if (C.zf) goto L_1189abc7;
  /* 1189ab9b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ab9f je 0x1189abc7 */
  if (C.zf) goto L_1189abc7;
  /* 1189aba1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189aba4 mov eax, dword ptr [edx*4 + 0x118c1b40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x118c1b40)));
  /* 1189abab push eax */
  push32((uint32_t)(EAX));
  /* 1189abac call dword ptr [0x118c63b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63b8))), 0x1189abb2u);
  /* 1189abb2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1189abb4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189abb7 mov edx, dword ptr [ecx*4 + 0x118c1b40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x118c1b40)));
  /* 1189abbe push edx */
  push32((uint32_t)(EDX));
  /* 1189abbf call 0x11897c90 */
  push32(0x1189abc4u); f_11897c90();
  /* 1189abc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1189abc7:;
  /* 1189abc7 jmp 0x1189ab6d */
  goto L_1189ab6d;
L_1189abc9:;
  /* 1189abc9 mov eax, dword ptr [0x118c1b64] */
  EAX = (r32((uint32_t)(0x118c1b64)));
  /* 1189abce push eax */
  push32((uint32_t)(EAX));
  /* 1189abcf call dword ptr [0x118c63b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63b8))), 0x1189abd5u);
  /* 1189abd5 mov ecx, dword ptr [0x118c1b74] */
  ECX = (r32((uint32_t)(0x118c1b74)));
  /* 1189abdb push ecx */
  push32((uint32_t)(ECX));
  /* 1189abdc call dword ptr [0x118c63b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63b8))), 0x1189abe2u);
  /* 1189abe2 mov edx, dword ptr [0x118c1b84] */
  EDX = (r32((uint32_t)(0x118c1b84)));
  /* 1189abe8 push edx */
  push32((uint32_t)(EDX));
  /* 1189abe9 call dword ptr [0x118c63b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63b8))), 0x1189abefu);
  /* 1189abef mov eax, dword ptr [0x118c1b44] */
  EAX = (r32((uint32_t)(0x118c1b44)));
  /* 1189abf4 push eax */
  push32((uint32_t)(EAX));
  /* 1189abf5 call dword ptr [0x118c63b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63b8))), 0x1189abfbu);
  /* 1189abfb mov esp, ebp */
  ESP = (EBP);
  /* 1189abfd pop ebp */
  EBP = (pop32());
  /* 1189abfe ret  */
  ESPCHK(0x1189ab60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac00 @ 0x1189ac00 (151 bytes, 46 insns) */
void f_1189ac00(void) {
  FTRACE(0x1189ac00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189ac00 push ebp */
  push32((uint32_t)(EBP));
  /* 1189ac01 mov ebp, esp */
  EBP = (ESP);
  /* 1189ac03 push ecx */
  push32((uint32_t)(ECX));
  /* 1189ac04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189ac07 cmp dword ptr [eax*4 + 0x118c1b40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x118c1b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ac0f jne 0x1189ac82 */
  if (!C.zf) goto L_1189ac82;
  /* 1189ac11 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1189ac16 push 0x118bfa40 */
  push32((uint32_t)(0x118bfa40u));
  /* 1189ac1b push 2 */
  push32((uint32_t)(0x2u));
  /* 1189ac1d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1189ac1f call 0x11897200 */
  push32(0x1189ac24u); f_11897200();
  /* 1189ac24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189ac27 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1189ac2a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ac2e jne 0x1189ac3a */
  if (!C.zf) goto L_1189ac3a;
  /* 1189ac30 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1189ac32 call 0x11896170 */
  push32(0x1189ac37u); f_11896170();
  /* 1189ac37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1189ac3a:;
  /* 1189ac3a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1189ac3c call 0x1189ac00 */
  push32(0x1189ac41u); f_1189ac00();
  /* 1189ac41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189ac44 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189ac47 cmp dword ptr [ecx*4 + 0x118c1b40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x118c1b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ac4f jne 0x1189ac6a */
  if (!C.zf) goto L_1189ac6a;
  /* 1189ac51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189ac54 push edx */
  push32((uint32_t)(EDX));
  /* 1189ac55 call dword ptr [0x118c635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c635c))), 0x1189ac5bu);
  /* 1189ac5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189ac5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189ac61 mov dword ptr [eax*4 + 0x118c1b40], ecx */
  w32((uint32_t)(EAX*4 + 0x118c1b40), (ECX));
  /* 1189ac68 jmp 0x1189ac78 */
  goto L_1189ac78;
L_1189ac6a:;
  /* 1189ac6a push 2 */
  push32((uint32_t)(0x2u));
  /* 1189ac6c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189ac6f push edx */
  push32((uint32_t)(EDX));
  /* 1189ac70 call 0x11897c90 */
  push32(0x1189ac75u); f_11897c90();
  /* 1189ac75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1189ac78:;
  /* 1189ac78 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1189ac7a call 0x1189aca0 */
  push32(0x1189ac7fu); f_1189aca0();
  /* 1189ac7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1189ac82:;
  /* 1189ac82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189ac85 mov ecx, dword ptr [eax*4 + 0x118c1b40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x118c1b40)));
  /* 1189ac8c push ecx */
  push32((uint32_t)(ECX));
  /* 1189ac8d call dword ptr [0x118c634c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c634c))), 0x1189ac93u);
  /* 1189ac93 mov esp, ebp */
  ESP = (EBP);
  /* 1189ac95 pop ebp */
  EBP = (pop32());
  /* 1189ac96 ret  */
  ESPCHK(0x1189ac00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aca0 @ 0x1189aca0 (22 bytes, 8 insns) */
void f_1189aca0(void) {
  FTRACE(0x1189aca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189aca0 push ebp */
  push32((uint32_t)(EBP));
  /* 1189aca1 mov ebp, esp */
  EBP = (ESP);
  /* 1189aca3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189aca6 mov ecx, dword ptr [eax*4 + 0x118c1b40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x118c1b40)));
  /* 1189acad push ecx */
  push32((uint32_t)(ECX));
  /* 1189acae call dword ptr [0x118c6348] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6348))), 0x1189acb4u);
  /* 1189acb4 pop ebp */
  EBP = (pop32());
  /* 1189acb5 ret  */
  ESPCHK(0x1189aca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000acc0 @ 0x1189acc0 (26 bytes, 10 insns) */
void f_1189acc0(void) {
  FTRACE(0x1189acc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189acc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1189acc1 mov ebp, esp */
  EBP = (ESP);
  /* 1189acc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189acc6 push eax */
  push32((uint32_t)(EAX));
  /* 1189acc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189acc9 call dword ptr [0x118c6350] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6350))), 0x1189accfu);
  /* 1189accf push 0xff */
  push32((uint32_t)(0xffu));
  /* 1189acd4 call dword ptr [0x118c63b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63b4))), 0x1189acdau);
  /* 1189acda pop ebp */
  EBP = (pop32());
  /* 1189acdb ret  */
  ESPCHK(0x1189acc0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x1189ace0 (446 bytes, 130 insns) */
void f_1189ace0(void) {
  FTRACE(0x1189ace0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189ace0 push ebp */
  push32((uint32_t)(EBP));
  /* 1189ace1 mov ebp, esp */
  EBP = (ESP);
  /* 1189ace3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189ace6 call 0x11896c40 */
  push32(0x1189acebu); f_11896c40();
  /* 1189aceb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1189acee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189acf1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 1189acf4 push ecx */
  push32((uint32_t)(ECX));
  /* 1189acf5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189acf8 push edx */
  push32((uint32_t)(EDX));
  /* 1189acf9 call 0x1189aea0 */
  push32(0x1189acfeu); f_1189aea0();
  /* 1189acfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189ad01 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1189ad04 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ad08 je 0x1189ad13 */
  if (C.zf) goto L_1189ad13;
  /* 1189ad0a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189ad0d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ad11 jne 0x1189ad22 */
  if (!C.zf) goto L_1189ad22;
L_1189ad13:;
  /* 1189ad13 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189ad16 push ecx */
  push32((uint32_t)(ECX));
  /* 1189ad17 call dword ptr [0x118c6340] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6340))), 0x1189ad1du);
  /* 1189ad1d jmp 0x1189ae9a */
  goto L_1189ae9a;
L_1189ad22:;
  /* 1189ad22 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189ad25 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ad29 jne 0x1189ad3f */
  if (!C.zf) goto L_1189ad3f;
  /* 1189ad2b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189ad2e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1189ad35 mov eax, 1 */
  EAX = (0x1u);
  /* 1189ad3a jmp 0x1189ae9a */
  goto L_1189ae9a;
L_1189ad3f:;
  /* 1189ad3f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189ad42 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ad46 jne 0x1189ad50 */
  if (!C.zf) goto L_1189ad50;
  /* 1189ad48 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1189ad4b jmp 0x1189ae9a */
  goto L_1189ae9a;
L_1189ad50:;
  /* 1189ad50 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189ad53 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1189ad56 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1189ad59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189ad5c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 1189ad5f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1189ad62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189ad65 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189ad68 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 1189ad6b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189ad6e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ad72 jne 0x1189ae77 */
  if (!C.zf) goto L_1189ae77;
  /* 1189ad78 mov eax, dword ptr [0x118c1c78] */
  EAX = (r32((uint32_t)(0x118c1c78)));
  /* 1189ad7d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1189ad80 jmp 0x1189ad8b */
  goto L_1189ad8b;
L_1189ad82:;
  /* 1189ad82 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189ad85 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189ad88 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1189ad8b:;
  /* 1189ad8b mov edx, dword ptr [0x118c1c78] */
  EDX = (r32((uint32_t)(0x118c1c78)));
  /* 1189ad91 add edx, dword ptr [0x118c1c7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x118c1c7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189ad97 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ad9a jge 0x1189adb2 */
  if ((C.sf==C.of)) goto L_1189adb2;
  /* 1189ad9c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189ad9f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1189ada2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189ada5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1189ada8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1189adb0 jmp 0x1189ad82 */
  goto L_1189ad82;
L_1189adb2:;
  /* 1189adb2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189adb5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 1189adb8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1189adbb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189adbe cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189adc4 jne 0x1189add5 */
  if (!C.zf) goto L_1189add5;
  /* 1189adc6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189adc9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 1189add0 jmp 0x1189ae5d */
  goto L_1189ae5d;
L_1189add5:;
  /* 1189add5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189add8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189adde jne 0x1189adec */
  if (!C.zf) goto L_1189adec;
  /* 1189ade0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189ade3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 1189adea jmp 0x1189ae5d */
  goto L_1189ae5d;
L_1189adec:;
  /* 1189adec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189adef cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189adf5 jne 0x1189ae03 */
  if (!C.zf) goto L_1189ae03;
  /* 1189adf7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189adfa mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 1189ae01 jmp 0x1189ae5d */
  goto L_1189ae5d;
L_1189ae03:;
  /* 1189ae03 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189ae06 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ae0c jne 0x1189ae1a */
  if (!C.zf) goto L_1189ae1a;
  /* 1189ae0e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189ae11 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 1189ae18 jmp 0x1189ae5d */
  goto L_1189ae5d;
L_1189ae1a:;
  /* 1189ae1a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189ae1d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ae23 jne 0x1189ae31 */
  if (!C.zf) goto L_1189ae31;
  /* 1189ae25 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189ae28 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 1189ae2f jmp 0x1189ae5d */
  goto L_1189ae5d;
L_1189ae31:;
  /* 1189ae31 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189ae34 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ae3a jne 0x1189ae48 */
  if (!C.zf) goto L_1189ae48;
  /* 1189ae3c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189ae3f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 1189ae46 jmp 0x1189ae5d */
  goto L_1189ae5d;
L_1189ae48:;
  /* 1189ae48 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189ae4b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189ae51 jne 0x1189ae5d */
  if (!C.zf) goto L_1189ae5d;
  /* 1189ae53 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189ae56 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_1189ae5d:;
  /* 1189ae5d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189ae60 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 1189ae63 push edx */
  push32((uint32_t)(EDX));
  /* 1189ae64 push 8 */
  push32((uint32_t)(0x8u));
  /* 1189ae66 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1189ae69u);
  /* 1189ae69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189ae6c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189ae6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189ae72 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 1189ae75 jmp 0x1189ae8e */
  goto L_1189ae8e;
L_1189ae77:;
  /* 1189ae77 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189ae7a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 1189ae81 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189ae84 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1189ae87 push ecx */
  push32((uint32_t)(ECX));
  /* 1189ae88 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1189ae8bu);
  /* 1189ae8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1189ae8e:;
  /* 1189ae8e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189ae91 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1189ae94 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 1189ae97 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1189ae9a:;
  /* 1189ae9a mov esp, ebp */
  ESP = (EBP);
  /* 1189ae9c pop ebp */
  EBP = (pop32());
  /* 1189ae9d ret  */
  ESPCHK(0x1189ace0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aea0 @ 0x1189aea0 (89 bytes, 35 insns) */
void f_1189aea0(void) {
  FTRACE(0x1189aea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189aea0 push ebp */
  push32((uint32_t)(EBP));
  /* 1189aea1 mov ebp, esp */
  EBP = (ESP);
  /* 1189aea3 push ecx */
  push32((uint32_t)(ECX));
  /* 1189aea4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189aea7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1189aeaa:;
  /* 1189aeaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189aead mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1189aeaf cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189aeb2 je 0x1189aed2 */
  if (C.zf) goto L_1189aed2;
  /* 1189aeb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189aeb7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189aeba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1189aebd mov ecx, dword ptr [0x118c1c84] */
  ECX = (r32((uint32_t)(0x118c1c84)));
  /* 1189aec3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1189aec6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189aec9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189aecb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189aece jae 0x1189aed2 */
  if (!C.cf) goto L_1189aed2;
  /* 1189aed0 jmp 0x1189aeaa */
  goto L_1189aeaa;
L_1189aed2:;
  /* 1189aed2 mov eax, dword ptr [0x118c1c84] */
  EAX = (r32((uint32_t)(0x118c1c84)));
  /* 1189aed7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1189aeda mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189aedd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189aedf cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189aee2 jae 0x1189aeee */
  if (!C.cf) goto L_1189aeee;
  /* 1189aee4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189aee7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1189aee9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189aeec je 0x1189aef2 */
  if (C.zf) goto L_1189aef2;
L_1189aeee:;
  /* 1189aeee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189aef0 jmp 0x1189aef5 */
  goto L_1189aef5;
L_1189aef2:;
  /* 1189aef2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1189aef5:;
  /* 1189aef5 mov esp, ebp */
  ESP = (EBP);
  /* 1189aef7 pop ebp */
  EBP = (pop32());
  /* 1189aef8 ret  */
  ESPCHK(0x1189aea0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x1189af00 (48 bytes, 17 insns) */
void f_1189af00(void) {
  FTRACE(0x1189af00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189af00 push ebp */
  push32((uint32_t)(EBP));
  /* 1189af01 mov ebp, esp */
  EBP = (ESP);
  /* 1189af03 push ecx */
  push32((uint32_t)(ECX));
  /* 1189af04 push 9 */
  push32((uint32_t)(0x9u));
  /* 1189af06 call 0x1189ac00 */
  push32(0x1189af0bu); f_1189ac00();
  /* 1189af0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189af0e mov eax, dword ptr [0x118c39a4] */
  EAX = (r32((uint32_t)(0x118c39a4)));
  /* 1189af13 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1189af16 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189af19 mov dword ptr [0x118c39a4], ecx */
  w32((uint32_t)(0x118c39a4), (ECX));
  /* 1189af1f push 9 */
  push32((uint32_t)(0x9u));
  /* 1189af21 call 0x1189aca0 */
  push32(0x1189af26u); f_1189aca0();
  /* 1189af26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189af29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189af2c mov esp, ebp */
  ESP = (EBP);
  /* 1189af2e pop ebp */
  EBP = (pop32());
  /* 1189af2f ret  */
  ESPCHK(0x1189af00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af30 @ 0x1189af30 (10 bytes, 5 insns) */
void f_1189af30(void) {
  FTRACE(0x1189af30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189af30 push ebp */
  push32((uint32_t)(EBP));
  /* 1189af31 mov ebp, esp */
  EBP = (ESP);
  /* 1189af33 mov eax, dword ptr [0x118c39a4] */
  EAX = (r32((uint32_t)(0x118c39a4)));
  /* 1189af38 pop ebp */
  EBP = (pop32());
  /* 1189af39 ret  */
  ESPCHK(0x1189af30u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x1189af40 (45 bytes, 19 insns) */
void f_1189af40(void) {
  FTRACE(0x1189af40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189af40 push ebp */
  push32((uint32_t)(EBP));
  /* 1189af41 mov ebp, esp */
  EBP = (ESP);
  /* 1189af43 push ecx */
  push32((uint32_t)(ECX));
  /* 1189af44 mov eax, dword ptr [0x118c39a4] */
  EAX = (r32((uint32_t)(0x118c39a4)));
  /* 1189af49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1189af4c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189af50 je 0x1189af60 */
  if (C.zf) goto L_1189af60;
  /* 1189af52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189af55 push ecx */
  push32((uint32_t)(ECX));
  /* 1189af56 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1189af59u);
  /* 1189af59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189af5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189af5e jne 0x1189af64 */
  if (!C.zf) goto L_1189af64;
L_1189af60:;
  /* 1189af60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189af62 jmp 0x1189af69 */
  goto L_1189af69;
L_1189af64:;
  /* 1189af64 mov eax, 1 */
  EAX = (0x1u);
L_1189af69:;
  /* 1189af69 mov esp, ebp */
  ESP = (EBP);
  /* 1189af6b pop ebp */
  EBP = (pop32());
  /* 1189af6c ret  */
  ESPCHK(0x1189af40u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x1189af70 (88 bytes, 40 insns) */
void f_1189af70(void) {
  FTRACE(0x1189af70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189af70 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1189af74 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1189af78 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189af7a je 0x1189afc3 */
  if (C.zf) goto L_1189afc3;
  /* 1189af7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189af7e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 1189af82 push edi */
  push32((uint32_t)(EDI));
  /* 1189af83 mov edi, ecx */
  EDI = (ECX);
  /* 1189af85 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189af88 jb 0x1189afb7 */
  if (C.cf) goto L_1189afb7;
  /* 1189af8a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1189af8c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1189af8f je 0x1189af99 */
  if (C.zf) goto L_1189af99;
  /* 1189af91 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1189af93:;
  /* 1189af93 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1189af95 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1189af96 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1189af97 jne 0x1189af93 */
  if (!C.zf) goto L_1189af93;
L_1189af99:;
  /* 1189af99 mov ecx, eax */
  ECX = (EAX);
  /* 1189af9b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1189af9e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189afa0 mov ecx, eax */
  ECX = (EAX);
  /* 1189afa2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1189afa5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189afa7 mov ecx, edx */
  ECX = (EDX);
  /* 1189afa9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1189afac shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1189afaf je 0x1189afb7 */
  if (C.zf) goto L_1189afb7;
  /* 1189afb1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1189afb3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1189afb5 je 0x1189afbd */
  if (C.zf) goto L_1189afbd;
L_1189afb7:;
  /* 1189afb7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1189afb9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1189afba dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1189afbb jne 0x1189afb7 */
  if (!C.zf) goto L_1189afb7;
L_1189afbd:;
  /* 1189afbd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1189afc1 pop edi */
  EDI = (pop32());
  /* 1189afc2 ret  */
  ESPCHK(0x1189af70u, _esp0);
  ESP += 4; return;
L_1189afc3:;
  /* 1189afc3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1189afc7 ret  */
  ESPCHK(0x1189af70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000afd0 @ 0x1189afd0 (23 bytes, 10 insns) */
void f_1189afd0(void) {
  FTRACE(0x1189afd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189afd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1189afd1 mov ebp, esp */
  EBP = (ESP);
  /* 1189afd3 mov eax, dword ptr [0x118c39a0] */
  EAX = (r32((uint32_t)(0x118c39a0)));
  /* 1189afd8 push eax */
  push32((uint32_t)(EAX));
  /* 1189afd9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189afdc push ecx */
  push32((uint32_t)(ECX));
  /* 1189afdd call 0x1189aff0 */
  push32(0x1189afe2u); f_1189aff0();
  /* 1189afe2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189afe5 pop ebp */
  EBP = (pop32());
  /* 1189afe6 ret  */
  ESPCHK(0x1189afd0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x1189aff0 (87 bytes, 34 insns) */
void f_1189aff0(void) {
  FTRACE(0x1189aff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189aff0 push ebp */
  push32((uint32_t)(EBP));
  /* 1189aff1 mov ebp, esp */
  EBP = (ESP);
  /* 1189aff3 push ecx */
  push32((uint32_t)(ECX));
  /* 1189aff4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189aff8 jbe 0x1189affe */
  if ((C.cf||C.zf)) goto L_1189affe;
  /* 1189affa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189affc jmp 0x1189b043 */
  goto L_1189b043;
L_1189affe:;
  /* 1189affe cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b002 ja 0x1189b015 */
  if ((!C.cf&&!C.zf)) goto L_1189b015;
  /* 1189b004 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b007 push eax */
  push32((uint32_t)(EAX));
  /* 1189b008 call 0x1189b050 */
  push32(0x1189b00du); f_1189b050();
  /* 1189b00d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b010 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1189b013 jmp 0x1189b01c */
  goto L_1189b01c;
L_1189b015:;
  /* 1189b015 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1189b01c:;
  /* 1189b01c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b020 jne 0x1189b028 */
  if (!C.zf) goto L_1189b028;
  /* 1189b022 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b026 jne 0x1189b02d */
  if (!C.zf) goto L_1189b02d;
L_1189b028:;
  /* 1189b028 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189b02b jmp 0x1189b043 */
  goto L_1189b043;
L_1189b02d:;
  /* 1189b02d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b030 push ecx */
  push32((uint32_t)(ECX));
  /* 1189b031 call 0x1189af40 */
  push32(0x1189b036u); f_1189af40();
  /* 1189b036 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b039 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189b03b jne 0x1189b041 */
  if (!C.zf) goto L_1189b041;
  /* 1189b03d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189b03f jmp 0x1189b043 */
  goto L_1189b043;
L_1189b041:;
  /* 1189b041 jmp 0x1189affe */
  goto L_1189affe;
L_1189b043:;
  /* 1189b043 mov esp, ebp */
  ESP = (EBP);
  /* 1189b045 pop ebp */
  EBP = (pop32());
  /* 1189b046 ret  */
  ESPCHK(0x1189aff0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b050 @ 0x1189b050 (109 bytes, 37 insns) */
void f_1189b050(void) {
  FTRACE(0x1189b050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189b050 push ebp */
  push32((uint32_t)(EBP));
  /* 1189b051 mov ebp, esp */
  EBP = (ESP);
  /* 1189b053 push ecx */
  push32((uint32_t)(ECX));
  /* 1189b054 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b057 cmp eax, dword ptr [0x118c1c94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118c1c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b05d ja 0x1189b08d */
  if ((!C.cf&&!C.zf)) goto L_1189b08d;
  /* 1189b05f push 9 */
  push32((uint32_t)(0x9u));
  /* 1189b061 call 0x1189ac00 */
  push32(0x1189b066u); f_1189ac00();
  /* 1189b066 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b069 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b06c push ecx */
  push32((uint32_t)(ECX));
  /* 1189b06d call 0x1189bb90 */
  push32(0x1189b072u); f_1189bb90();
  /* 1189b072 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b075 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1189b078 push 9 */
  push32((uint32_t)(0x9u));
  /* 1189b07a call 0x1189aca0 */
  push32(0x1189b07fu); f_1189aca0();
  /* 1189b07f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b082 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b086 je 0x1189b08d */
  if (C.zf) goto L_1189b08d;
  /* 1189b088 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189b08b jmp 0x1189b0b9 */
  goto L_1189b0b9;
L_1189b08d:;
  /* 1189b08d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b091 jne 0x1189b09a */
  if (!C.zf) goto L_1189b09a;
  /* 1189b093 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_1189b09a:;
  /* 1189b09a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b09d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b0a0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1189b0a3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1189b0a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b0a9 push eax */
  push32((uint32_t)(EAX));
  /* 1189b0aa push 0 */
  push32((uint32_t)(0x0u));
  /* 1189b0ac mov ecx, dword ptr [0x118c516c] */
  ECX = (r32((uint32_t)(0x118c516c)));
  /* 1189b0b2 push ecx */
  push32((uint32_t)(ECX));
  /* 1189b0b3 call dword ptr [0x118c633c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c633c))), 0x1189b0b9u);
L_1189b0b9:;
  /* 1189b0b9 mov esp, ebp */
  ESP = (EBP);
  /* 1189b0bb pop ebp */
  EBP = (pop32());
  /* 1189b0bc ret  */
  ESPCHK(0x1189b050u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b0c0 @ 0x1189b0c0 (10 bytes, 5 insns) */
void f_1189b0c0(void) {
  FTRACE(0x1189b0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189b0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1189b0c1 mov ebp, esp */
  EBP = (ESP);
  /* 1189b0c3 mov eax, 1 */
  EAX = (0x1u);
  /* 1189b0c8 pop ebp */
  EBP = (pop32());
  /* 1189b0c9 ret  */
  ESPCHK(0x1189b0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b0d0 @ 0x1189b0d0 (173 bytes, 59 insns) */
void f_1189b0d0(void) {
  FTRACE(0x1189b0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189b0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1189b0d1 mov ebp, esp */
  EBP = (ESP);
  /* 1189b0d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189b0d6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b0da jbe 0x1189b0e3 */
  if ((C.cf||C.zf)) goto L_1189b0e3;
  /* 1189b0dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189b0de jmp 0x1189b179 */
  goto L_1189b179;
L_1189b0e3:;
  /* 1189b0e3 push 9 */
  push32((uint32_t)(0x9u));
  /* 1189b0e5 call 0x1189ac00 */
  push32(0x1189b0eau); f_1189ac00();
  /* 1189b0ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b0ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b0f0 push eax */
  push32((uint32_t)(EAX));
  /* 1189b0f1 call 0x1189b500 */
  push32(0x1189b0f6u); f_1189b500();
  /* 1189b0f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b0f9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1189b0fc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b100 je 0x1189b141 */
  if (C.zf) goto L_1189b141;
  /* 1189b102 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1189b109 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189b10c cmp ecx, dword ptr [0x118c1c94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x118c1c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b112 ja 0x1189b132 */
  if ((!C.cf&&!C.zf)) goto L_1189b132;
  /* 1189b114 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189b117 push edx */
  push32((uint32_t)(EDX));
  /* 1189b118 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b11b push eax */
  push32((uint32_t)(EAX));
  /* 1189b11c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189b11f push ecx */
  push32((uint32_t)(ECX));
  /* 1189b120 call 0x1189c3d0 */
  push32(0x1189b125u); f_1189c3d0();
  /* 1189b125 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b128 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189b12a je 0x1189b132 */
  if (C.zf) goto L_1189b132;
  /* 1189b12c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b12f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1189b132:;
  /* 1189b132 push 9 */
  push32((uint32_t)(0x9u));
  /* 1189b134 call 0x1189aca0 */
  push32(0x1189b139u); f_1189aca0();
  /* 1189b139 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b13c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189b13f jmp 0x1189b179 */
  goto L_1189b179;
L_1189b141:;
  /* 1189b141 push 9 */
  push32((uint32_t)(0x9u));
  /* 1189b143 call 0x1189aca0 */
  push32(0x1189b148u); f_1189aca0();
  /* 1189b148 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b14b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b14f jne 0x1189b158 */
  if (!C.zf) goto L_1189b158;
  /* 1189b151 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1189b158:;
  /* 1189b158 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189b15b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b15e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1189b160 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1189b163 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189b166 push ecx */
  push32((uint32_t)(ECX));
  /* 1189b167 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b16a push edx */
  push32((uint32_t)(EDX));
  /* 1189b16b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1189b16d mov eax, dword ptr [0x118c516c] */
  EAX = (r32((uint32_t)(0x118c516c)));
  /* 1189b172 push eax */
  push32((uint32_t)(EAX));
  /* 1189b173 call dword ptr [0x118c6344] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6344))), 0x1189b179u);
L_1189b179:;
  /* 1189b179 mov esp, ebp */
  ESP = (EBP);
  /* 1189b17b pop ebp */
  EBP = (pop32());
  /* 1189b17c ret  */
  ESPCHK(0x1189b0d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b180 @ 0x1189b180 (490 bytes, 165 insns) */
void f_1189b180(void) {
  FTRACE(0x1189b180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189b180 push ebp */
  push32((uint32_t)(EBP));
  /* 1189b181 mov ebp, esp */
  EBP = (ESP);
  /* 1189b183 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189b186 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b18a jne 0x1189b19d */
  if (!C.zf) goto L_1189b19d;
  /* 1189b18c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189b18f push eax */
  push32((uint32_t)(EAX));
  /* 1189b190 call 0x1189afd0 */
  push32(0x1189b195u); f_1189afd0();
  /* 1189b195 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b198 jmp 0x1189b366 */
  goto L_1189b366;
L_1189b19d:;
  /* 1189b19d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b1a1 jne 0x1189b1b6 */
  if (!C.zf) goto L_1189b1b6;
  /* 1189b1a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b1a6 push ecx */
  push32((uint32_t)(ECX));
  /* 1189b1a7 call 0x1189b370 */
  push32(0x1189b1acu); f_1189b370();
  /* 1189b1ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b1af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189b1b1 jmp 0x1189b366 */
  goto L_1189b366;
L_1189b1b6:;
  /* 1189b1b6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1189b1bd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b1c1 ja 0x1189b339 */
  if ((!C.cf&&!C.zf)) goto L_1189b339;
  /* 1189b1c7 push 9 */
  push32((uint32_t)(0x9u));
  /* 1189b1c9 call 0x1189ac00 */
  push32(0x1189b1ceu); f_1189ac00();
  /* 1189b1ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b1d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b1d4 push edx */
  push32((uint32_t)(EDX));
  /* 1189b1d5 call 0x1189b500 */
  push32(0x1189b1dau); f_1189b500();
  /* 1189b1da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b1dd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1189b1e0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b1e4 je 0x1189b2fc */
  if (C.zf) goto L_1189b2fc;
  /* 1189b1ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189b1ed cmp eax, dword ptr [0x118c1c94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118c1c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b1f3 ja 0x1189b270 */
  if ((!C.cf&&!C.zf)) goto L_1189b270;
  /* 1189b1f5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189b1f8 push ecx */
  push32((uint32_t)(ECX));
  /* 1189b1f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b1fc push edx */
  push32((uint32_t)(EDX));
  /* 1189b1fd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189b200 push eax */
  push32((uint32_t)(EAX));
  /* 1189b201 call 0x1189c3d0 */
  push32(0x1189b206u); f_1189c3d0();
  /* 1189b206 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b209 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189b20b je 0x1189b215 */
  if (C.zf) goto L_1189b215;
  /* 1189b20d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b210 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1189b213 jmp 0x1189b270 */
  goto L_1189b270;
L_1189b215:;
  /* 1189b215 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189b218 push edx */
  push32((uint32_t)(EDX));
  /* 1189b219 call 0x1189bb90 */
  push32(0x1189b21eu); f_1189bb90();
  /* 1189b21e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b221 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1189b224 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b228 je 0x1189b270 */
  if (C.zf) goto L_1189b270;
  /* 1189b22a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b22d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 1189b230 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189b233 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1189b236 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189b239 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b23c jae 0x1189b246 */
  if (!C.cf) goto L_1189b246;
  /* 1189b23e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189b241 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1189b244 jmp 0x1189b24c */
  goto L_1189b24c;
L_1189b246:;
  /* 1189b246 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189b249 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1189b24c:;
  /* 1189b24c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1189b24f push edx */
  push32((uint32_t)(EDX));
  /* 1189b250 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b253 push eax */
  push32((uint32_t)(EAX));
  /* 1189b254 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189b257 push ecx */
  push32((uint32_t)(ECX));
  /* 1189b258 call 0x1189dae0 */
  push32(0x1189b25du); f_1189dae0();
  /* 1189b25d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b260 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b263 push edx */
  push32((uint32_t)(EDX));
  /* 1189b264 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189b267 push eax */
  push32((uint32_t)(EAX));
  /* 1189b268 call 0x1189b5c0 */
  push32(0x1189b26du); f_1189b5c0();
  /* 1189b26d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1189b270:;
  /* 1189b270 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b274 jne 0x1189b2f0 */
  if (!C.zf) goto L_1189b2f0;
  /* 1189b276 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b27a jne 0x1189b283 */
  if (!C.zf) goto L_1189b283;
  /* 1189b27c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1189b283:;
  /* 1189b283 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189b286 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b289 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1189b28c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1189b28f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189b292 push edx */
  push32((uint32_t)(EDX));
  /* 1189b293 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189b295 mov eax, dword ptr [0x118c516c] */
  EAX = (r32((uint32_t)(0x118c516c)));
  /* 1189b29a push eax */
  push32((uint32_t)(EAX));
  /* 1189b29b call dword ptr [0x118c633c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c633c))), 0x1189b2a1u);
  /* 1189b2a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1189b2a4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b2a8 je 0x1189b2f0 */
  if (C.zf) goto L_1189b2f0;
  /* 1189b2aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b2ad mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1189b2b0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1189b2b3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1189b2b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189b2b9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b2bc jae 0x1189b2c6 */
  if (!C.cf) goto L_1189b2c6;
  /* 1189b2be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189b2c1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1189b2c4 jmp 0x1189b2cc */
  goto L_1189b2cc;
L_1189b2c6:;
  /* 1189b2c6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189b2c9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1189b2cc:;
  /* 1189b2cc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1189b2cf push eax */
  push32((uint32_t)(EAX));
  /* 1189b2d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b2d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1189b2d4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189b2d7 push edx */
  push32((uint32_t)(EDX));
  /* 1189b2d8 call 0x1189dae0 */
  push32(0x1189b2ddu); f_1189dae0();
  /* 1189b2dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b2e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b2e3 push eax */
  push32((uint32_t)(EAX));
  /* 1189b2e4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1189b2e7 push ecx */
  push32((uint32_t)(ECX));
  /* 1189b2e8 call 0x1189b5c0 */
  push32(0x1189b2edu); f_1189b5c0();
  /* 1189b2ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1189b2f0:;
  /* 1189b2f0 push 9 */
  push32((uint32_t)(0x9u));
  /* 1189b2f2 call 0x1189aca0 */
  push32(0x1189b2f7u); f_1189aca0();
  /* 1189b2f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b2fa jmp 0x1189b339 */
  goto L_1189b339;
L_1189b2fc:;
  /* 1189b2fc push 9 */
  push32((uint32_t)(0x9u));
  /* 1189b2fe call 0x1189aca0 */
  push32(0x1189b303u); f_1189aca0();
  /* 1189b303 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b306 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b30a jne 0x1189b313 */
  if (!C.zf) goto L_1189b313;
  /* 1189b30c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1189b313:;
  /* 1189b313 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189b316 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b319 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1189b31c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1189b31f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189b322 push eax */
  push32((uint32_t)(EAX));
  /* 1189b323 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b326 push ecx */
  push32((uint32_t)(ECX));
  /* 1189b327 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189b329 mov edx, dword ptr [0x118c516c] */
  EDX = (r32((uint32_t)(0x118c516c)));
  /* 1189b32f push edx */
  push32((uint32_t)(EDX));
  /* 1189b330 call dword ptr [0x118c6344] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6344))), 0x1189b336u);
  /* 1189b336 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1189b339:;
  /* 1189b339 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b33d jne 0x1189b348 */
  if (!C.zf) goto L_1189b348;
  /* 1189b33f cmp dword ptr [0x118c39a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c39a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b346 jne 0x1189b34d */
  if (!C.zf) goto L_1189b34d;
L_1189b348:;
  /* 1189b348 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1189b34b jmp 0x1189b366 */
  goto L_1189b366;
L_1189b34d:;
  /* 1189b34d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1189b350 push eax */
  push32((uint32_t)(EAX));
  /* 1189b351 call 0x1189af40 */
  push32(0x1189b356u); f_1189af40();
  /* 1189b356 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b359 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189b35b jne 0x1189b361 */
  if (!C.zf) goto L_1189b361;
  /* 1189b35d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1189b35f jmp 0x1189b366 */
  goto L_1189b366;
L_1189b361:;
  /* 1189b361 jmp 0x1189b1b6 */
  goto L_1189b1b6;
L_1189b366:;
  /* 1189b366 mov esp, ebp */
  ESP = (EBP);
  /* 1189b368 pop ebp */
  EBP = (pop32());
  /* 1189b369 ret  */
  ESPCHK(0x1189b180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b370 @ 0x1189b370 (104 bytes, 38 insns) */
void f_1189b370(void) {
  FTRACE(0x1189b370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189b370 push ebp */
  push32((uint32_t)(EBP));
  /* 1189b371 mov ebp, esp */
  EBP = (ESP);
  /* 1189b373 push ecx */
  push32((uint32_t)(ECX));
  /* 1189b374 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b378 jne 0x1189b37c */
  if (!C.zf) goto L_1189b37c;
  /* 1189b37a jmp 0x1189b3d4 */
  goto L_1189b3d4;
L_1189b37c:;
  /* 1189b37c push 9 */
  push32((uint32_t)(0x9u));
  /* 1189b37e call 0x1189ac00 */
  push32(0x1189b383u); f_1189ac00();
  /* 1189b383 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b386 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b389 push eax */
  push32((uint32_t)(EAX));
  /* 1189b38a call 0x1189b500 */
  push32(0x1189b38fu); f_1189b500();
  /* 1189b38f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b392 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1189b395 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b399 je 0x1189b3b7 */
  if (C.zf) goto L_1189b3b7;
  /* 1189b39b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b39e push ecx */
  push32((uint32_t)(ECX));
  /* 1189b39f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189b3a2 push edx */
  push32((uint32_t)(EDX));
  /* 1189b3a3 call 0x1189b5c0 */
  push32(0x1189b3a8u); f_1189b5c0();
  /* 1189b3a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b3ab push 9 */
  push32((uint32_t)(0x9u));
  /* 1189b3ad call 0x1189aca0 */
  push32(0x1189b3b2u); f_1189aca0();
  /* 1189b3b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b3b5 jmp 0x1189b3d4 */
  goto L_1189b3d4;
L_1189b3b7:;
  /* 1189b3b7 push 9 */
  push32((uint32_t)(0x9u));
  /* 1189b3b9 call 0x1189aca0 */
  push32(0x1189b3beu); f_1189aca0();
  /* 1189b3be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b3c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1189b3c4 push eax */
  push32((uint32_t)(EAX));
  /* 1189b3c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189b3c7 mov ecx, dword ptr [0x118c516c] */
  ECX = (r32((uint32_t)(0x118c516c)));
  /* 1189b3cd push ecx */
  push32((uint32_t)(ECX));
  /* 1189b3ce call dword ptr [0x118c6368] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6368))), 0x1189b3d4u);
L_1189b3d4:;
  /* 1189b3d4 mov esp, ebp */
  ESP = (EBP);
  /* 1189b3d6 pop ebp */
  EBP = (pop32());
  /* 1189b3d7 ret  */
  ESPCHK(0x1189b370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b3e0 @ 0x1189b3e0 (116 bytes, 34 insns) */
void f_1189b3e0(void) {
  FTRACE(0x1189b3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189b3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1189b3e1 mov ebp, esp */
  EBP = (ESP);
  /* 1189b3e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1189b3e4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 1189b3eb push 9 */
  push32((uint32_t)(0x9u));
  /* 1189b3ed call 0x1189ac00 */
  push32(0x1189b3f2u); f_1189ac00();
  /* 1189b3f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b3f5 call 0x1189caf0 */
  push32(0x1189b3fau); f_1189caf0();
  /* 1189b3fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189b3fc jge 0x1189b405 */
  if ((C.sf==C.of)) goto L_1189b405;
  /* 1189b3fe mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1189b405:;
  /* 1189b405 push 9 */
  push32((uint32_t)(0x9u));
  /* 1189b407 call 0x1189aca0 */
  push32(0x1189b40cu); f_1189aca0();
  /* 1189b40c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1189b40f push 0 */
  push32((uint32_t)(0x0u));
  /* 1189b411 push 0 */
  push32((uint32_t)(0x0u));
  /* 1189b413 mov eax, dword ptr [0x118c516c] */
  EAX = (r32((uint32_t)(0x118c516c)));
  /* 1189b418 push eax */
  push32((uint32_t)(EAX));
  /* 1189b419 call dword ptr [0x118c637c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c637c))), 0x1189b41fu);
  /* 1189b41f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1189b421 jne 0x1189b44d */
  if (!C.zf) goto L_1189b44d;
  /* 1189b423 call dword ptr [0x118c63d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63d8))), 0x1189b429u);
  /* 1189b429 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1189b42c jne 0x1189b446 */
  if (!C.zf) goto L_1189b446;
  /* 1189b42e call 0x1189f0e0 */
  push32(0x1189b433u); f_1189f0e0();
  /* 1189b433 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 1189b439 call 0x1189f0d0 */
  push32(0x1189b43eu); f_1189f0d0();
  /* 1189b43e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 1189b444 jmp 0x1189b44d */
  goto L_1189b44d;
L_1189b446:;
  /* 1189b446 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1189b44d:;
  /* 1189b44d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1189b450 mov esp, ebp */
  ESP = (EBP);
  /* 1189b452 pop ebp */
  EBP = (pop32());
  /* 1189b453 ret  */
  ESPCHK(0x1189b3e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b460 @ 0x1189b460 (10 bytes, 5 insns) */
void f_1189b460(void) {
  FTRACE(0x1189b460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1189b460 push ebp */
  push32((uint32_t)(EBP));
  /* 1189b461 mov ebp, esp */
  EBP = (ESP);
  /* 1189b463 call 0x1189b3e0 */
  push32(0x1189b468u); f_1189b3e0();
  /* 1189b468 pop ebp */
  EBP = (pop32());
  /* 1189b469 ret  */
  ESPCHK(0x1189b460u, _esp0);
  ESP += 4; return;
}

