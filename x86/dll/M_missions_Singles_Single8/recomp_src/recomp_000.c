#include "recomp.h"

/* OnInit @ 0x11d41005 (5 bytes, 1 insns) */
void f_11d41005(void) {
  FTRACE(0x11d41005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d41005 jmp 0x11d41030 */
  f_11d41030(); return;
}

/* thunk_FUN_10003ef0 @ 0x11d4100a (5 bytes, 1 insns) */
void f_11d4100a(void) {
  FTRACE(0x11d4100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4100a jmp 0x11d43ef0 */
  f_11d43ef0(); return;
}

/* ProcessScenary @ 0x11d4100f (5 bytes, 1 insns) */
void f_11d4100f(void) {
  FTRACE(0x11d4100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d4100f jmp 0x11d41bb0 */
  f_11d41bb0(); return;
}

/* FUN_10001030 @ 0x11d41030 (2344 bytes, 622 insns) */
void f_11d41030(void) {
  FTRACE(0x11d41030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d41030 push ebp */
  push32((uint32_t)(EBP));
  /* 11d41031 mov ebp, esp */
  EBP = (ESP);
  /* 11d41033 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d41036 push ebx */
  push32((uint32_t)(EBX));
  /* 11d41037 push esi */
  push32((uint32_t)(ESI));
  /* 11d41038 push edi */
  push32((uint32_t)(EDI));
  /* 11d41039 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 11d4103c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11d41041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11d41046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11d41048 mov esi, esp */
  ESI = (ESP);
  /* 11d4104a push 0x11d6c2e4 */
  push32((uint32_t)(0x11d6c2e4u));
  /* 11d4104f push 0x11d71420 */
  push32((uint32_t)(0x11d71420u));
  /* 11d41054 call dword ptr [0x11d74504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74504))), 0x11d4105au);
  /* 11d4105a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4105d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4105f call 0x11d44070 */
  push32(0x11d41064u); f_11d44070();
  /* 11d41064 mov esi, esp */
  ESI = (ESP);
  /* 11d41066 push 0x11d6c2dc */
  push32((uint32_t)(0x11d6c2dcu));
  /* 11d4106b push 0x11d71450 */
  push32((uint32_t)(0x11d71450u));
  /* 11d41070 call dword ptr [0x11d74504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74504))), 0x11d41076u);
  /* 11d41076 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41079 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4107b call 0x11d44070 */
  push32(0x11d41080u); f_11d44070();
  /* 11d41080 mov esi, esp */
  ESI = (ESP);
  /* 11d41082 push 0x11d6c2d4 */
  push32((uint32_t)(0x11d6c2d4u));
  /* 11d41087 push 0x11d71448 */
  push32((uint32_t)(0x11d71448u));
  /* 11d4108c call dword ptr [0x11d74504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74504))), 0x11d41092u);
  /* 11d41092 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41095 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41097 call 0x11d44070 */
  push32(0x11d4109cu); f_11d44070();
  /* 11d4109c mov esi, esp */
  ESI = (ESP);
  /* 11d4109e push 0x11d6c2c8 */
  push32((uint32_t)(0x11d6c2c8u));
  /* 11d410a3 push 0x11d71470 */
  push32((uint32_t)(0x11d71470u));
  /* 11d410a8 call dword ptr [0x11d74504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74504))), 0x11d410aeu);
  /* 11d410ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d410b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d410b3 call 0x11d44070 */
  push32(0x11d410b8u); f_11d44070();
  /* 11d410b8 mov esi, esp */
  ESI = (ESP);
  /* 11d410ba push 0x11d6c2bc */
  push32((uint32_t)(0x11d6c2bcu));
  /* 11d410bf push 0x11d71468 */
  push32((uint32_t)(0x11d71468u));
  /* 11d410c4 call dword ptr [0x11d74504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74504))), 0x11d410cau);
  /* 11d410ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d410cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d410cf call 0x11d44070 */
  push32(0x11d410d4u); f_11d44070();
  /* 11d410d4 mov esi, esp */
  ESI = (ESP);
  /* 11d410d6 push 0x11d6c2b0 */
  push32((uint32_t)(0x11d6c2b0u));
  /* 11d410db push 0x11d71460 */
  push32((uint32_t)(0x11d71460u));
  /* 11d410e0 call dword ptr [0x11d74504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74504))), 0x11d410e6u);
  /* 11d410e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d410e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d410eb call 0x11d44070 */
  push32(0x11d410f0u); f_11d44070();
  /* 11d410f0 mov esi, esp */
  ESI = (ESP);
  /* 11d410f2 push 0x11d6c2a4 */
  push32((uint32_t)(0x11d6c2a4u));
  /* 11d410f7 push 0x11d71458 */
  push32((uint32_t)(0x11d71458u));
  /* 11d410fc call dword ptr [0x11d74504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74504))), 0x11d41102u);
  /* 11d41102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41107 call 0x11d44070 */
  push32(0x11d4110cu); f_11d44070();
  /* 11d4110c mov esi, esp */
  ESI = (ESP);
  /* 11d4110e push 0x11d6c298 */
  push32((uint32_t)(0x11d6c298u));
  /* 11d41113 push 0x11d715a0 */
  push32((uint32_t)(0x11d715a0u));
  /* 11d41118 call dword ptr [0x11d74504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74504))), 0x11d4111eu);
  /* 11d4111e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41121 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41123 call 0x11d44070 */
  push32(0x11d41128u); f_11d44070();
  /* 11d41128 mov esi, esp */
  ESI = (ESP);
  /* 11d4112a push 0x11d6c290 */
  push32((uint32_t)(0x11d6c290u));
  /* 11d4112f push 0x11d71598 */
  push32((uint32_t)(0x11d71598u));
  /* 11d41134 call dword ptr [0x11d74504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74504))), 0x11d4113au);
  /* 11d4113a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4113d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4113f call 0x11d44070 */
  push32(0x11d41144u); f_11d44070();
  /* 11d41144 mov esi, esp */
  ESI = (ESP);
  /* 11d41146 push 0x11d6c284 */
  push32((uint32_t)(0x11d6c284u));
  /* 11d4114b push 0x11d714c8 */
  push32((uint32_t)(0x11d714c8u));
  /* 11d41150 call dword ptr [0x11d74504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74504))), 0x11d41156u);
  /* 11d41156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4115b call 0x11d44070 */
  push32(0x11d41160u); f_11d44070();
  /* 11d41160 mov esi, esp */
  ESI = (ESP);
  /* 11d41162 push 0x11d6c27c */
  push32((uint32_t)(0x11d6c27cu));
  /* 11d41167 push 0x11d71588 */
  push32((uint32_t)(0x11d71588u));
  /* 11d4116c call dword ptr [0x11d74504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74504))), 0x11d41172u);
  /* 11d41172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41177 call 0x11d44070 */
  push32(0x11d4117cu); f_11d44070();
  /* 11d4117c mov esi, esp */
  ESI = (ESP);
  /* 11d4117e push 0x11d6c274 */
  push32((uint32_t)(0x11d6c274u));
  /* 11d41183 push 0x11d71590 */
  push32((uint32_t)(0x11d71590u));
  /* 11d41188 call dword ptr [0x11d74504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74504))), 0x11d4118eu);
  /* 11d4118e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41191 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41193 call 0x11d44070 */
  push32(0x11d41198u); f_11d44070();
  /* 11d41198 mov esi, esp */
  ESI = (ESP);
  /* 11d4119a push 0x11d6c26c */
  push32((uint32_t)(0x11d6c26cu));
  /* 11d4119f push 0x11d71478 */
  push32((uint32_t)(0x11d71478u));
  /* 11d411a4 call dword ptr [0x11d74504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74504))), 0x11d411aau);
  /* 11d411aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d411ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d411af call 0x11d44070 */
  push32(0x11d411b4u); f_11d44070();
  /* 11d411b4 mov esi, esp */
  ESI = (ESP);
  /* 11d411b6 push 0x11d6c264 */
  push32((uint32_t)(0x11d6c264u));
  /* 11d411bb push 0x11d714f0 */
  push32((uint32_t)(0x11d714f0u));
  /* 11d411c0 call dword ptr [0x11d74504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74504))), 0x11d411c6u);
  /* 11d411c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d411c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d411cb call 0x11d44070 */
  push32(0x11d411d0u); f_11d44070();
  /* 11d411d0 mov esi, esp */
  ESI = (ESP);
  /* 11d411d2 push 0x11d6c25c */
  push32((uint32_t)(0x11d6c25cu));
  /* 11d411d7 push 0x11d714f8 */
  push32((uint32_t)(0x11d714f8u));
  /* 11d411dc call dword ptr [0x11d74504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74504))), 0x11d411e2u);
  /* 11d411e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d411e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d411e7 call 0x11d44070 */
  push32(0x11d411ecu); f_11d44070();
  /* 11d411ec mov esi, esp */
  ESI = (ESP);
  /* 11d411ee push 0x11d6c254 */
  push32((uint32_t)(0x11d6c254u));
  /* 11d411f3 push 0x11d71500 */
  push32((uint32_t)(0x11d71500u));
  /* 11d411f8 call dword ptr [0x11d74504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74504))), 0x11d411feu);
  /* 11d411fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41201 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41203 call 0x11d44070 */
  push32(0x11d41208u); f_11d44070();
  /* 11d41208 mov esi, esp */
  ESI = (ESP);
  /* 11d4120a push 0x11d6c24c */
  push32((uint32_t)(0x11d6c24cu));
  /* 11d4120f push 0x11d71508 */
  push32((uint32_t)(0x11d71508u));
  /* 11d41214 call dword ptr [0x11d74504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74504))), 0x11d4121au);
  /* 11d4121a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4121d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4121f call 0x11d44070 */
  push32(0x11d41224u); f_11d44070();
  /* 11d41224 mov esi, esp */
  ESI = (ESP);
  /* 11d41226 push 0x11d6c244 */
  push32((uint32_t)(0x11d6c244u));
  /* 11d4122b push 0x11d71510 */
  push32((uint32_t)(0x11d71510u));
  /* 11d41230 call dword ptr [0x11d74504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74504))), 0x11d41236u);
  /* 11d41236 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41239 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4123b call 0x11d44070 */
  push32(0x11d41240u); f_11d44070();
  /* 11d41240 mov esi, esp */
  ESI = (ESP);
  /* 11d41242 push 0x11d6c23c */
  push32((uint32_t)(0x11d6c23cu));
  /* 11d41247 push 0x11d71518 */
  push32((uint32_t)(0x11d71518u));
  /* 11d4124c call dword ptr [0x11d74504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74504))), 0x11d41252u);
  /* 11d41252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41257 call 0x11d44070 */
  push32(0x11d4125cu); f_11d44070();
  /* 11d4125c mov esi, esp */
  ESI = (ESP);
  /* 11d4125e push 0x11d6c22c */
  push32((uint32_t)(0x11d6c22cu));
  /* 11d41263 push 0x11d713f8 */
  push32((uint32_t)(0x11d713f8u));
  /* 11d41268 call dword ptr [0x11d74504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74504))), 0x11d4126eu);
  /* 11d4126e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41271 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41273 call 0x11d44070 */
  push32(0x11d41278u); f_11d44070();
  /* 11d41278 mov esi, esp */
  ESI = (ESP);
  /* 11d4127a push 0x11d6c224 */
  push32((uint32_t)(0x11d6c224u));
  /* 11d4127f push 0x11d714e0 */
  push32((uint32_t)(0x11d714e0u));
  /* 11d41284 call dword ptr [0x11d74504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74504))), 0x11d4128au);
  /* 11d4128a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4128d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4128f call 0x11d44070 */
  push32(0x11d41294u); f_11d44070();
  /* 11d41294 mov esi, esp */
  ESI = (ESP);
  /* 11d41296 push 0x11d6c21c */
  push32((uint32_t)(0x11d6c21cu));
  /* 11d4129b push 0x11d714d0 */
  push32((uint32_t)(0x11d714d0u));
  /* 11d412a0 call dword ptr [0x11d74504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74504))), 0x11d412a6u);
  /* 11d412a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d412a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d412ab call 0x11d44070 */
  push32(0x11d412b0u); f_11d44070();
  /* 11d412b0 mov esi, esp */
  ESI = (ESP);
  /* 11d412b2 push 0x11d6c214 */
  push32((uint32_t)(0x11d6c214u));
  /* 11d412b7 push 0x11d71430 */
  push32((uint32_t)(0x11d71430u));
  /* 11d412bc call dword ptr [0x11d74504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74504))), 0x11d412c2u);
  /* 11d412c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d412c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d412c7 call 0x11d44070 */
  push32(0x11d412ccu); f_11d44070();
  /* 11d412cc mov esi, esp */
  ESI = (ESP);
  /* 11d412ce push 0x11d6c20c */
  push32((uint32_t)(0x11d6c20cu));
  /* 11d412d3 push 0x11d71438 */
  push32((uint32_t)(0x11d71438u));
  /* 11d412d8 call dword ptr [0x11d74504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74504))), 0x11d412deu);
  /* 11d412de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d412e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d412e3 call 0x11d44070 */
  push32(0x11d412e8u); f_11d44070();
  /* 11d412e8 mov esi, esp */
  ESI = (ESP);
  /* 11d412ea push 0x11d6c204 */
  push32((uint32_t)(0x11d6c204u));
  /* 11d412ef push 0x11d71480 */
  push32((uint32_t)(0x11d71480u));
  /* 11d412f4 call dword ptr [0x11d74504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74504))), 0x11d412fau);
  /* 11d412fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d412fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d412ff call 0x11d44070 */
  push32(0x11d41304u); f_11d44070();
  /* 11d41304 mov esi, esp */
  ESI = (ESP);
  /* 11d41306 push 0x11d6c1fc */
  push32((uint32_t)(0x11d6c1fcu));
  /* 11d4130b push 0x11d71550 */
  push32((uint32_t)(0x11d71550u));
  /* 11d41310 call dword ptr [0x11d74508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74508))), 0x11d41316u);
  /* 11d41316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41319 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4131b call 0x11d44070 */
  push32(0x11d41320u); f_11d44070();
  /* 11d41320 mov esi, esp */
  ESI = (ESP);
  /* 11d41322 push 0x11d6c1f0 */
  push32((uint32_t)(0x11d6c1f0u));
  /* 11d41327 push 0x11d715a8 */
  push32((uint32_t)(0x11d715a8u));
  /* 11d4132c call dword ptr [0x11d74508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74508))), 0x11d41332u);
  /* 11d41332 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41335 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41337 call 0x11d44070 */
  push32(0x11d4133cu); f_11d44070();
  /* 11d4133c mov esi, esp */
  ESI = (ESP);
  /* 11d4133e push 0x11d6c1e4 */
  push32((uint32_t)(0x11d6c1e4u));
  /* 11d41343 push 0x11d715b0 */
  push32((uint32_t)(0x11d715b0u));
  /* 11d41348 call dword ptr [0x11d74508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74508))), 0x11d4134eu);
  /* 11d4134e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41351 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41353 call 0x11d44070 */
  push32(0x11d41358u); f_11d44070();
  /* 11d41358 mov esi, esp */
  ESI = (ESP);
  /* 11d4135a push 0x11d6c1dc */
  push32((uint32_t)(0x11d6c1dcu));
  /* 11d4135f push 0x11d71558 */
  push32((uint32_t)(0x11d71558u));
  /* 11d41364 call dword ptr [0x11d74508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74508))), 0x11d4136au);
  /* 11d4136a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4136d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4136f call 0x11d44070 */
  push32(0x11d41374u); f_11d44070();
  /* 11d41374 mov esi, esp */
  ESI = (ESP);
  /* 11d41376 push 0x11d6c1d0 */
  push32((uint32_t)(0x11d6c1d0u));
  /* 11d4137b push 0x11d715b8 */
  push32((uint32_t)(0x11d715b8u));
  /* 11d41380 call dword ptr [0x11d74508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74508))), 0x11d41386u);
  /* 11d41386 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41389 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4138b call 0x11d44070 */
  push32(0x11d41390u); f_11d44070();
  /* 11d41390 mov esi, esp */
  ESI = (ESP);
  /* 11d41392 push 0x11d6c1c4 */
  push32((uint32_t)(0x11d6c1c4u));
  /* 11d41397 push 0x11d715c0 */
  push32((uint32_t)(0x11d715c0u));
  /* 11d4139c call dword ptr [0x11d74508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74508))), 0x11d413a2u);
  /* 11d413a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d413a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d413a7 call 0x11d44070 */
  push32(0x11d413acu); f_11d44070();
  /* 11d413ac mov esi, esp */
  ESI = (ESP);
  /* 11d413ae push 0x11d6c1bc */
  push32((uint32_t)(0x11d6c1bcu));
  /* 11d413b3 push 0x11d714d8 */
  push32((uint32_t)(0x11d714d8u));
  /* 11d413b8 call dword ptr [0x11d74508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74508))), 0x11d413beu);
  /* 11d413be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d413c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d413c3 call 0x11d44070 */
  push32(0x11d413c8u); f_11d44070();
  /* 11d413c8 mov esi, esp */
  ESI = (ESP);
  /* 11d413ca push 0x11d6c1b0 */
  push32((uint32_t)(0x11d6c1b0u));
  /* 11d413cf push 0x11d71418 */
  push32((uint32_t)(0x11d71418u));
  /* 11d413d4 call dword ptr [0x11d74508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74508))), 0x11d413dau);
  /* 11d413da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d413dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d413df call 0x11d44070 */
  push32(0x11d413e4u); f_11d44070();
  /* 11d413e4 mov esi, esp */
  ESI = (ESP);
  /* 11d413e6 push 0x11d6c1a8 */
  push32((uint32_t)(0x11d6c1a8u));
  /* 11d413eb push 0x11d71490 */
  push32((uint32_t)(0x11d71490u));
  /* 11d413f0 call dword ptr [0x11d74508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74508))), 0x11d413f6u);
  /* 11d413f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d413f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d413fb call 0x11d44070 */
  push32(0x11d41400u); f_11d44070();
  /* 11d41400 mov esi, esp */
  ESI = (ESP);
  /* 11d41402 push 0x11d6c1a0 */
  push32((uint32_t)(0x11d6c1a0u));
  /* 11d41407 push 0x11d71560 */
  push32((uint32_t)(0x11d71560u));
  /* 11d4140c call dword ptr [0x11d74508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74508))), 0x11d41412u);
  /* 11d41412 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41415 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41417 call 0x11d44070 */
  push32(0x11d4141cu); f_11d44070();
  /* 11d4141c mov esi, esp */
  ESI = (ESP);
  /* 11d4141e push 0x11d6c198 */
  push32((uint32_t)(0x11d6c198u));
  /* 11d41423 push 0x11d71568 */
  push32((uint32_t)(0x11d71568u));
  /* 11d41428 call dword ptr [0x11d74508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74508))), 0x11d4142eu);
  /* 11d4142e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41431 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41433 call 0x11d44070 */
  push32(0x11d41438u); f_11d44070();
  /* 11d41438 mov esi, esp */
  ESI = (ESP);
  /* 11d4143a push 0x11d6c188 */
  push32((uint32_t)(0x11d6c188u));
  /* 11d4143f push 0x11d71580 */
  push32((uint32_t)(0x11d71580u));
  /* 11d41444 call dword ptr [0x11d7450c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7450c))), 0x11d4144au);
  /* 11d4144a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4144d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4144f call 0x11d44070 */
  push32(0x11d41454u); f_11d44070();
  /* 11d41454 mov esi, esp */
  ESI = (ESP);
  /* 11d41456 push 0x11d6c174 */
  push32((uint32_t)(0x11d6c174u));
  /* 11d4145b push 0x11d715c8 */
  push32((uint32_t)(0x11d715c8u));
  /* 11d41460 call dword ptr [0x11d7450c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7450c))), 0x11d41466u);
  /* 11d41466 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41469 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4146b call 0x11d44070 */
  push32(0x11d41470u); f_11d44070();
  /* 11d41470 mov esi, esp */
  ESI = (ESP);
  /* 11d41472 push 0x11d6c168 */
  push32((uint32_t)(0x11d6c168u));
  /* 11d41477 push 0x11d71538 */
  push32((uint32_t)(0x11d71538u));
  /* 11d4147c call dword ptr [0x11d7450c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7450c))), 0x11d41482u);
  /* 11d41482 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41485 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41487 call 0x11d44070 */
  push32(0x11d4148cu); f_11d44070();
  /* 11d4148c mov esi, esp */
  ESI = (ESP);
  /* 11d4148e push 0x11d6c158 */
  push32((uint32_t)(0x11d6c158u));
  /* 11d41493 push 0x11d71528 */
  push32((uint32_t)(0x11d71528u));
  /* 11d41498 call dword ptr [0x11d7450c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7450c))), 0x11d4149eu);
  /* 11d4149e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d414a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d414a3 call 0x11d44070 */
  push32(0x11d414a8u); f_11d44070();
  /* 11d414a8 mov esi, esp */
  ESI = (ESP);
  /* 11d414aa push 0x11d6c148 */
  push32((uint32_t)(0x11d6c148u));
  /* 11d414af push 0x11d71540 */
  push32((uint32_t)(0x11d71540u));
  /* 11d414b4 call dword ptr [0x11d7450c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7450c))), 0x11d414bau);
  /* 11d414ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d414bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d414bf call 0x11d44070 */
  push32(0x11d414c4u); f_11d44070();
  /* 11d414c4 mov esi, esp */
  ESI = (ESP);
  /* 11d414c6 push 0x11d6c138 */
  push32((uint32_t)(0x11d6c138u));
  /* 11d414cb push 0x11d71520 */
  push32((uint32_t)(0x11d71520u));
  /* 11d414d0 call dword ptr [0x11d7450c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7450c))), 0x11d414d6u);
  /* 11d414d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d414d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d414db call 0x11d44070 */
  push32(0x11d414e0u); f_11d44070();
  /* 11d414e0 mov esi, esp */
  ESI = (ESP);
  /* 11d414e2 push 0x11d6c128 */
  push32((uint32_t)(0x11d6c128u));
  /* 11d414e7 push 0x11d71548 */
  push32((uint32_t)(0x11d71548u));
  /* 11d414ec call dword ptr [0x11d7450c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7450c))), 0x11d414f2u);
  /* 11d414f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d414f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d414f7 call 0x11d44070 */
  push32(0x11d414fcu); f_11d44070();
  /* 11d414fc mov esi, esp */
  ESI = (ESP);
  /* 11d414fe push 0x11d6c118 */
  push32((uint32_t)(0x11d6c118u));
  /* 11d41503 push 0x11d71530 */
  push32((uint32_t)(0x11d71530u));
  /* 11d41508 call dword ptr [0x11d7450c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7450c))), 0x11d4150eu);
  /* 11d4150e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41511 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41513 call 0x11d44070 */
  push32(0x11d41518u); f_11d44070();
  /* 11d41518 mov esi, esp */
  ESI = (ESP);
  /* 11d4151a push 0x11d6c108 */
  push32((uint32_t)(0x11d6c108u));
  /* 11d4151f push 0x11d714c0 */
  push32((uint32_t)(0x11d714c0u));
  /* 11d41524 call dword ptr [0x11d7450c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7450c))), 0x11d4152au);
  /* 11d4152a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4152d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4152f call 0x11d44070 */
  push32(0x11d41534u); f_11d44070();
  /* 11d41534 mov esi, esp */
  ESI = (ESP);
  /* 11d41536 push 0x11d6c0f4 */
  push32((uint32_t)(0x11d6c0f4u));
  /* 11d4153b push 0x11d714e8 */
  push32((uint32_t)(0x11d714e8u));
  /* 11d41540 call dword ptr [0x11d7450c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7450c))), 0x11d41546u);
  /* 11d41546 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41549 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4154b call 0x11d44070 */
  push32(0x11d41550u); f_11d44070();
  /* 11d41550 mov esi, esp */
  ESI = (ESP);
  /* 11d41552 push 0x11d6c0e8 */
  push32((uint32_t)(0x11d6c0e8u));
  /* 11d41557 push 0x11d71488 */
  push32((uint32_t)(0x11d71488u));
  /* 11d4155c call dword ptr [0x11d7450c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7450c))), 0x11d41562u);
  /* 11d41562 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41565 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41567 call 0x11d44070 */
  push32(0x11d4156cu); f_11d44070();
  /* 11d4156c mov esi, esp */
  ESI = (ESP);
  /* 11d4156e push 0x11d6c0cc */
  push32((uint32_t)(0x11d6c0ccu));
  /* 11d41573 push 0x11d713e0 */
  push32((uint32_t)(0x11d713e0u));
  /* 11d41578 call dword ptr [0x11d7450c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7450c))), 0x11d4157eu);
  /* 11d4157e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41581 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41583 call 0x11d44070 */
  push32(0x11d41588u); f_11d44070();
  /* 11d41588 mov esi, esp */
  ESI = (ESP);
  /* 11d4158a push 0x11d6c0b8 */
  push32((uint32_t)(0x11d6c0b8u));
  /* 11d4158f push 0x11d71428 */
  push32((uint32_t)(0x11d71428u));
  /* 11d41594 call dword ptr [0x11d7450c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7450c))), 0x11d4159au);
  /* 11d4159a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4159d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4159f call 0x11d44070 */
  push32(0x11d415a4u); f_11d44070();
  /* 11d415a4 mov esi, esp */
  ESI = (ESP);
  /* 11d415a6 push 0x11d6c0a0 */
  push32((uint32_t)(0x11d6c0a0u));
  /* 11d415ab push 0x11d714a0 */
  push32((uint32_t)(0x11d714a0u));
  /* 11d415b0 call dword ptr [0x11d7450c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7450c))), 0x11d415b6u);
  /* 11d415b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d415b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d415bb call 0x11d44070 */
  push32(0x11d415c0u); f_11d44070();
  /* 11d415c0 mov esi, esp */
  ESI = (ESP);
  /* 11d415c2 push 0x11d6c094 */
  push32((uint32_t)(0x11d6c094u));
  /* 11d415c7 push 0x11d713f0 */
  push32((uint32_t)(0x11d713f0u));
  /* 11d415cc call dword ptr [0x11d7450c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7450c))), 0x11d415d2u);
  /* 11d415d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d415d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d415d7 call 0x11d44070 */
  push32(0x11d415dcu); f_11d44070();
  /* 11d415dc mov esi, esp */
  ESI = (ESP);
  /* 11d415de push 8 */
  push32((uint32_t)(0x8u));
  /* 11d415e0 push 0x11d71408 */
  push32((uint32_t)(0x11d71408u));
  /* 11d415e5 call dword ptr [0x11d74510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74510))), 0x11d415ebu);
  /* 11d415eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d415ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d415f0 call 0x11d44070 */
  push32(0x11d415f5u); f_11d44070();
  /* 11d415f5 mov esi, esp */
  ESI = (ESP);
  /* 11d415f7 push 8 */
  push32((uint32_t)(0x8u));
  /* 11d415f9 push 0x11d71400 */
  push32((uint32_t)(0x11d71400u));
  /* 11d415fe call dword ptr [0x11d74510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74510))), 0x11d41604u);
  /* 11d41604 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41607 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41609 call 0x11d44070 */
  push32(0x11d4160eu); f_11d44070();
  /* 11d4160e mov esi, esp */
  ESI = (ESP);
  /* 11d41610 push 8 */
  push32((uint32_t)(0x8u));
  /* 11d41612 push 0x11d71410 */
  push32((uint32_t)(0x11d71410u));
  /* 11d41617 call dword ptr [0x11d74510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74510))), 0x11d4161du);
  /* 11d4161d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41620 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41622 call 0x11d44070 */
  push32(0x11d41627u); f_11d44070();
  /* 11d41627 mov esi, esp */
  ESI = (ESP);
  /* 11d41629 push 0x11d6c084 */
  push32((uint32_t)(0x11d6c084u));
  /* 11d4162e push 0x11d714b8 */
  push32((uint32_t)(0x11d714b8u));
  /* 11d41633 call dword ptr [0x11d74514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74514))), 0x11d41639u);
  /* 11d41639 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4163c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4163e call 0x11d44070 */
  push32(0x11d41643u); f_11d44070();
  /* 11d41643 mov esi, esp */
  ESI = (ESP);
  /* 11d41645 push 0x11d6c074 */
  push32((uint32_t)(0x11d6c074u));
  /* 11d4164a push 0x11d714a8 */
  push32((uint32_t)(0x11d714a8u));
  /* 11d4164f call dword ptr [0x11d74514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74514))), 0x11d41655u);
  /* 11d41655 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41658 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4165a call 0x11d44070 */
  push32(0x11d4165fu); f_11d44070();
  /* 11d4165f mov esi, esp */
  ESI = (ESP);
  /* 11d41661 push 0x11d6c064 */
  push32((uint32_t)(0x11d6c064u));
  /* 11d41666 push 0x11d714b0 */
  push32((uint32_t)(0x11d714b0u));
  /* 11d4166b call dword ptr [0x11d74514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74514))), 0x11d41671u);
  /* 11d41671 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41674 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41676 call 0x11d44070 */
  push32(0x11d4167bu); f_11d44070();
  /* 11d4167b mov esi, esp */
  ESI = (ESP);
  /* 11d4167d push 0x11d6c054 */
  push32((uint32_t)(0x11d6c054u));
  /* 11d41682 push 0x11d71498 */
  push32((uint32_t)(0x11d71498u));
  /* 11d41687 call dword ptr [0x11d74514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74514))), 0x11d4168du);
  /* 11d4168d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41690 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41692 call 0x11d44070 */
  push32(0x11d41697u); f_11d44070();
  /* 11d41697 mov esi, esp */
  ESI = (ESP);
  /* 11d41699 push 0x11d6c04c */
  push32((uint32_t)(0x11d6c04cu));
  /* 11d4169e push 0x11d71578 */
  push32((uint32_t)(0x11d71578u));
  /* 11d416a3 call dword ptr [0x11d74514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74514))), 0x11d416a9u);
  /* 11d416a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d416ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d416ae call 0x11d44070 */
  push32(0x11d416b3u); f_11d44070();
  /* 11d416b3 mov esi, esp */
  ESI = (ESP);
  /* 11d416b5 push 0x11d6c040 */
  push32((uint32_t)(0x11d6c040u));
  /* 11d416ba push 0x11d713e8 */
  push32((uint32_t)(0x11d713e8u));
  /* 11d416bf call dword ptr [0x11d74514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74514))), 0x11d416c5u);
  /* 11d416c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d416c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d416ca call 0x11d44070 */
  push32(0x11d416cfu); f_11d44070();
  /* 11d416cf mov esi, esp */
  ESI = (ESP);
  /* 11d416d1 push 0x11d6c038 */
  push32((uint32_t)(0x11d6c038u));
  /* 11d416d6 push 0x11d71440 */
  push32((uint32_t)(0x11d71440u));
  /* 11d416db call dword ptr [0x11d74514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74514))), 0x11d416e1u);
  /* 11d416e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d416e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d416e6 call 0x11d44070 */
  push32(0x11d416ebu); f_11d44070();
  /* 11d416eb mov esi, esp */
  ESI = (ESP);
  /* 11d416ed push 0x11d71408 */
  push32((uint32_t)(0x11d71408u));
  /* 11d416f2 call dword ptr [0x11d74518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74518))), 0x11d416f8u);
  /* 11d416f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d416fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d416fd call 0x11d44070 */
  push32(0x11d41702u); f_11d44070();
  /* 11d41702 mov esi, esp */
  ESI = (ESP);
  /* 11d41704 push 0x11d71400 */
  push32((uint32_t)(0x11d71400u));
  /* 11d41709 call dword ptr [0x11d74518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74518))), 0x11d4170fu);
  /* 11d4170f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41712 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41714 call 0x11d44070 */
  push32(0x11d41719u); f_11d44070();
  /* 11d41719 mov esi, esp */
  ESI = (ESP);
  /* 11d4171b push 0x11d71410 */
  push32((uint32_t)(0x11d71410u));
  /* 11d41720 call dword ptr [0x11d74518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74518))), 0x11d41726u);
  /* 11d41726 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41729 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4172b call 0x11d44070 */
  push32(0x11d41730u); f_11d44070();
  /* 11d41730 mov esi, esp */
  ESI = (ESP);
  /* 11d41732 push 0x11d71570 */
  push32((uint32_t)(0x11d71570u));
  /* 11d41737 call dword ptr [0x11d74518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74518))), 0x11d4173du);
  /* 11d4173d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41740 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41742 call 0x11d44070 */
  push32(0x11d41747u); f_11d44070();
  /* 11d41747 mov esi, esp */
  ESI = (ESP);
  /* 11d41749 push 0x11d6c030 */
  push32((uint32_t)(0x11d6c030u));
  /* 11d4174e push 1 */
  push32((uint32_t)(0x1u));
  /* 11d41750 call dword ptr [0x11d7451c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7451c))), 0x11d41756u);
  /* 11d41756 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41759 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4175b call 0x11d44070 */
  push32(0x11d41760u); f_11d44070();
  /* 11d41760 mov esi, esp */
  ESI = (ESP);
  /* 11d41762 push 0x11d6c028 */
  push32((uint32_t)(0x11d6c028u));
  /* 11d41767 push 3 */
  push32((uint32_t)(0x3u));
  /* 11d41769 call dword ptr [0x11d7451c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7451c))), 0x11d4176fu);
  /* 11d4176f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41772 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41774 call 0x11d44070 */
  push32(0x11d41779u); f_11d44070();
  /* 11d41779 mov esi, esp */
  ESI = (ESP);
  /* 11d4177b push 0x11d6c028 */
  push32((uint32_t)(0x11d6c028u));
  /* 11d41780 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d41782 call dword ptr [0x11d7451c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7451c))), 0x11d41788u);
  /* 11d41788 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4178b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4178d call 0x11d44070 */
  push32(0x11d41792u); f_11d44070();
  /* 11d41792 mov esi, esp */
  ESI = (ESP);
  /* 11d41794 push 0x11d6c01c */
  push32((uint32_t)(0x11d6c01cu));
  /* 11d41799 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d4179b call dword ptr [0x11d7451c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7451c))), 0x11d417a1u);
  /* 11d417a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d417a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d417a6 call 0x11d44070 */
  push32(0x11d417abu); f_11d44070();
  /* 11d417ab mov esi, esp */
  ESI = (ESP);
  /* 11d417ad push 3 */
  push32((uint32_t)(0x3u));
  /* 11d417af push 1 */
  push32((uint32_t)(0x1u));
  /* 11d417b1 call dword ptr [0x11d74520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74520))), 0x11d417b7u);
  /* 11d417b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d417ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d417bc call 0x11d44070 */
  push32(0x11d417c1u); f_11d44070();
  /* 11d417c1 mov esi, esp */
  ESI = (ESP);
  /* 11d417c3 push 0x38 */
  push32((uint32_t)(0x38u));
  /* 11d417c5 push 3 */
  push32((uint32_t)(0x3u));
  /* 11d417c7 call dword ptr [0x11d74520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74520))), 0x11d417cdu);
  /* 11d417cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d417d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d417d2 call 0x11d44070 */
  push32(0x11d417d7u); f_11d44070();
  /* 11d417d7 mov esi, esp */
  ESI = (ESP);
  /* 11d417d9 push 0x38 */
  push32((uint32_t)(0x38u));
  /* 11d417db push 4 */
  push32((uint32_t)(0x4u));
  /* 11d417dd call dword ptr [0x11d74520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74520))), 0x11d417e3u);
  /* 11d417e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d417e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d417e8 call 0x11d44070 */
  push32(0x11d417edu); f_11d44070();
  /* 11d417ed mov esi, esp */
  ESI = (ESP);
  /* 11d417ef push 0x38 */
  push32((uint32_t)(0x38u));
  /* 11d417f1 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d417f3 call dword ptr [0x11d74520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74520))), 0x11d417f9u);
  /* 11d417f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d417fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d417fe call 0x11d44070 */
  push32(0x11d41803u); f_11d44070();
  /* 11d41803 mov esi, esp */
  ESI = (ESP);
  /* 11d41805 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d41807 push 0x11d71580 */
  push32((uint32_t)(0x11d71580u));
  /* 11d4180c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4180e call dword ptr [0x11d74524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74524))), 0x11d41814u);
  /* 11d41814 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41817 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41819 call 0x11d44070 */
  push32(0x11d4181eu); f_11d44070();
  /* 11d4181e mov esi, esp */
  ESI = (ESP);
  /* 11d41820 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d41822 push 0x11d715c8 */
  push32((uint32_t)(0x11d715c8u));
  /* 11d41827 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d41829 call dword ptr [0x11d74524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74524))), 0x11d4182fu);
  /* 11d4182f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41832 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41834 call 0x11d44070 */
  push32(0x11d41839u); f_11d44070();
  /* 11d41839 mov esi, esp */
  ESI = (ESP);
  /* 11d4183b push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4183d push 0x11d71538 */
  push32((uint32_t)(0x11d71538u));
  /* 11d41842 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d41844 call dword ptr [0x11d74524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74524))), 0x11d4184au);
  /* 11d4184a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4184d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4184f call 0x11d44070 */
  push32(0x11d41854u); f_11d44070();
  /* 11d41854 mov esi, esp */
  ESI = (ESP);
  /* 11d41856 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d41858 push 0x11d71528 */
  push32((uint32_t)(0x11d71528u));
  /* 11d4185d push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4185f call dword ptr [0x11d74524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74524))), 0x11d41865u);
  /* 11d41865 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41868 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4186a call 0x11d44070 */
  push32(0x11d4186fu); f_11d44070();
  /* 11d4186f mov esi, esp */
  ESI = (ESP);
  /* 11d41871 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d41873 push 0x11d71540 */
  push32((uint32_t)(0x11d71540u));
  /* 11d41878 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4187a call dword ptr [0x11d74524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74524))), 0x11d41880u);
  /* 11d41880 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41883 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41885 call 0x11d44070 */
  push32(0x11d4188au); f_11d44070();
  /* 11d4188a mov esi, esp */
  ESI = (ESP);
  /* 11d4188c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4188e push 0x11d71530 */
  push32((uint32_t)(0x11d71530u));
  /* 11d41893 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d41895 call dword ptr [0x11d74524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74524))), 0x11d4189bu);
  /* 11d4189b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4189e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d418a0 call 0x11d44070 */
  push32(0x11d418a5u); f_11d44070();
  /* 11d418a5 mov esi, esp */
  ESI = (ESP);
  /* 11d418a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d418a9 push 0x11d71520 */
  push32((uint32_t)(0x11d71520u));
  /* 11d418ae push 0 */
  push32((uint32_t)(0x0u));
  /* 11d418b0 call dword ptr [0x11d74524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74524))), 0x11d418b6u);
  /* 11d418b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d418b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d418bb call 0x11d44070 */
  push32(0x11d418c0u); f_11d44070();
  /* 11d418c0 mov esi, esp */
  ESI = (ESP);
  /* 11d418c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d418c4 push 0x11d71548 */
  push32((uint32_t)(0x11d71548u));
  /* 11d418c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d418cb call dword ptr [0x11d74524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74524))), 0x11d418d1u);
  /* 11d418d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d418d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d418d6 call 0x11d44070 */
  push32(0x11d418dbu); f_11d44070();
  /* 11d418db mov esi, esp */
  ESI = (ESP);
  /* 11d418dd push 0 */
  push32((uint32_t)(0x0u));
  /* 11d418df push 0x11d714c0 */
  push32((uint32_t)(0x11d714c0u));
  /* 11d418e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d418e6 call dword ptr [0x11d74524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74524))), 0x11d418ecu);
  /* 11d418ec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d418ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d418f1 call 0x11d44070 */
  push32(0x11d418f6u); f_11d44070();
  /* 11d418f6 mov esi, esp */
  ESI = (ESP);
  /* 11d418f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d418fa push 0x11d714e8 */
  push32((uint32_t)(0x11d714e8u));
  /* 11d418ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11d41901 call dword ptr [0x11d74524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74524))), 0x11d41907u);
  /* 11d41907 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4190a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4190c call 0x11d44070 */
  push32(0x11d41911u); f_11d44070();
  /* 11d41911 mov esi, esp */
  ESI = (ESP);
  /* 11d41913 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d41915 push 0x11d71488 */
  push32((uint32_t)(0x11d71488u));
  /* 11d4191a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4191c call dword ptr [0x11d74524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74524))), 0x11d41922u);
  /* 11d41922 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41925 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41927 call 0x11d44070 */
  push32(0x11d4192cu); f_11d44070();
  /* 11d4192c mov esi, esp */
  ESI = (ESP);
  /* 11d4192e push 0 */
  push32((uint32_t)(0x0u));
  /* 11d41930 push 0x11d713e0 */
  push32((uint32_t)(0x11d713e0u));
  /* 11d41935 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d41937 call dword ptr [0x11d74524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74524))), 0x11d4193du);
  /* 11d4193d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41940 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41942 call 0x11d44070 */
  push32(0x11d41947u); f_11d44070();
  /* 11d41947 pop edi */
  EDI = (pop32());
  /* 11d41948 pop esi */
  ESI = (pop32());
  /* 11d41949 pop ebx */
  EBX = (pop32());
  /* 11d4194a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4194d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4194f call 0x11d44070 */
  push32(0x11d41954u); f_11d44070();
  /* 11d41954 mov esp, ebp */
  ESP = (EBP);
  /* 11d41956 pop ebp */
  EBP = (pop32());
  /* 11d41957 ret  */
  ESPCHK(0x11d41030u, _esp0);
  ESP += 4; return;
}

/* FUN_10001bb0 @ 0x11d41bb0 (7162 bytes, 2070 insns) [3 switch table(s)] */
void f_11d41bb0(void) {
  FTRACE(0x11d41bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d41bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d41bb1 mov ebp, esp */
  EBP = (ESP);
  /* 11d41bb3 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d41bb6 push ebx */
  push32((uint32_t)(EBX));
  /* 11d41bb7 push esi */
  push32((uint32_t)(ESI));
  /* 11d41bb8 push edi */
  push32((uint32_t)(EDI));
  /* 11d41bb9 lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 11d41bbc mov ecx, 0x13 */
  ECX = (0x13u);
  /* 11d41bc1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11d41bc6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11d41bc8 mov esi, esp */
  ESI = (ESP);
  /* 11d41bca push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11d41bcc call dword ptr [0x11d74460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74460))), 0x11d41bd2u);
  /* 11d41bd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41bd5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41bd7 call 0x11d44070 */
  push32(0x11d41bdcu); f_11d44070();
  /* 11d41bdc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d41be1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d41be3 je 0x11d42382 */
  if (C.zf) goto L_11d42382;
  /* 11d41be9 mov esi, esp */
  ESI = (ESP);
  /* 11d41beb push 0 */
  push32((uint32_t)(0x0u));
  /* 11d41bed push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11d41bef call dword ptr [0x11d74464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74464))), 0x11d41bf5u);
  /* 11d41bf5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41bf8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41bfa call 0x11d44070 */
  push32(0x11d41bffu); f_11d44070();
  /* 11d41bff mov esi, esp */
  ESI = (ESP);
  /* 11d41c01 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11d41c03 call dword ptr [0x11d74468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74468))), 0x11d41c09u);
  /* 11d41c09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41c0c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41c0e call 0x11d44070 */
  push32(0x11d41c13u); f_11d44070();
  /* 11d41c13 mov esi, esp */
  ESI = (ESP);
  /* 11d41c15 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11d41c17 call dword ptr [0x11d7446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7446c))), 0x11d41c1du);
  /* 11d41c1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41c20 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41c22 call 0x11d44070 */
  push32(0x11d41c27u); f_11d44070();
  /* 11d41c27 mov esi, esp */
  ESI = (ESP);
  /* 11d41c29 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11d41c2b call dword ptr [0x11d7446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7446c))), 0x11d41c31u);
  /* 11d41c31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41c34 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41c36 call 0x11d44070 */
  push32(0x11d41c3bu); f_11d44070();
  /* 11d41c3b mov esi, esp */
  ESI = (ESP);
  /* 11d41c3d push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11d41c3f call dword ptr [0x11d7446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7446c))), 0x11d41c45u);
  /* 11d41c45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41c48 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41c4a call 0x11d44070 */
  push32(0x11d41c4fu); f_11d44070();
  /* 11d41c4f mov esi, esp */
  ESI = (ESP);
  /* 11d41c51 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11d41c53 call dword ptr [0x11d7446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7446c))), 0x11d41c59u);
  /* 11d41c59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41c5c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41c5e call 0x11d44070 */
  push32(0x11d41c63u); f_11d44070();
  /* 11d41c63 mov esi, esp */
  ESI = (ESP);
  /* 11d41c65 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11d41c67 call dword ptr [0x11d7446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7446c))), 0x11d41c6du);
  /* 11d41c6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41c70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41c72 call 0x11d44070 */
  push32(0x11d41c77u); f_11d44070();
  /* 11d41c77 mov esi, esp */
  ESI = (ESP);
  /* 11d41c79 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11d41c7b call dword ptr [0x11d7446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7446c))), 0x11d41c81u);
  /* 11d41c81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41c84 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41c86 call 0x11d44070 */
  push32(0x11d41c8bu); f_11d44070();
  /* 11d41c8b mov esi, esp */
  ESI = (ESP);
  /* 11d41c8d push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11d41c8f call dword ptr [0x11d7446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7446c))), 0x11d41c95u);
  /* 11d41c95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41c98 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41c9a call 0x11d44070 */
  push32(0x11d41c9fu); f_11d44070();
  /* 11d41c9f mov esi, esp */
  ESI = (ESP);
  /* 11d41ca1 push 0x11d71460 */
  push32((uint32_t)(0x11d71460u));
  /* 11d41ca6 call dword ptr [0x11d74470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74470))), 0x11d41cacu);
  /* 11d41cac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41caf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41cb1 call 0x11d44070 */
  push32(0x11d41cb6u); f_11d44070();
  /* 11d41cb6 mov esi, esp */
  ESI = (ESP);
  /* 11d41cb8 push 0x11d71468 */
  push32((uint32_t)(0x11d71468u));
  /* 11d41cbd call dword ptr [0x11d74474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74474))), 0x11d41cc3u);
  /* 11d41cc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41cc6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41cc8 call 0x11d44070 */
  push32(0x11d41ccdu); f_11d44070();
  /* 11d41ccd mov esi, esp */
  ESI = (ESP);
  /* 11d41ccf push 0x11d71470 */
  push32((uint32_t)(0x11d71470u));
  /* 11d41cd4 call dword ptr [0x11d74478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74478))), 0x11d41cdau);
  /* 11d41cda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41cdd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41cdf call 0x11d44070 */
  push32(0x11d41ce4u); f_11d44070();
  /* 11d41ce4 mov esi, esp */
  ESI = (ESP);
  /* 11d41ce6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d41ce8 push 0x11d71598 */
  push32((uint32_t)(0x11d71598u));
  /* 11d41ced call dword ptr [0x11d7447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7447c))), 0x11d41cf3u);
  /* 11d41cf3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41cf6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41cf8 call 0x11d44070 */
  push32(0x11d41cfdu); f_11d44070();
  /* 11d41cfd mov esi, esp */
  ESI = (ESP);
  /* 11d41cff push 1 */
  push32((uint32_t)(0x1u));
  /* 11d41d01 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d41d03 call dword ptr [0x11d74480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74480))), 0x11d41d09u);
  /* 11d41d09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41d0c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41d0e call 0x11d44070 */
  push32(0x11d41d13u); f_11d44070();
  /* 11d41d13 mov esi, esp */
  ESI = (ESP);
  /* 11d41d15 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d41d17 push 0x11d71478 */
  push32((uint32_t)(0x11d71478u));
  /* 11d41d1c call dword ptr [0x11d7447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7447c))), 0x11d41d22u);
  /* 11d41d22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41d25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41d27 call 0x11d44070 */
  push32(0x11d41d2cu); f_11d44070();
  /* 11d41d2c mov esi, esp */
  ESI = (ESP);
  /* 11d41d2e push 1 */
  push32((uint32_t)(0x1u));
  /* 11d41d30 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d41d32 call dword ptr [0x11d74480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74480))), 0x11d41d38u);
  /* 11d41d38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41d3b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41d3d call 0x11d44070 */
  push32(0x11d41d42u); f_11d44070();
  /* 11d41d42 mov esi, esp */
  ESI = (ESP);
  /* 11d41d44 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11d41d49 push 6 */
  push32((uint32_t)(0x6u));
  /* 11d41d4b call dword ptr [0x11d74484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74484))), 0x11d41d51u);
  /* 11d41d51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41d54 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41d56 call 0x11d44070 */
  push32(0x11d41d5bu); f_11d44070();
  /* 11d41d5b mov esi, esp */
  ESI = (ESP);
  /* 11d41d5d push 0 */
  push32((uint32_t)(0x0u));
  /* 11d41d5f call dword ptr [0x11d74488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74488))), 0x11d41d65u);
  /* 11d41d65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41d68 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41d6a call 0x11d44070 */
  push32(0x11d41d6fu); f_11d44070();
  /* 11d41d6f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d41d72 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41d76 ja 0x11d42185 */
  if ((!C.cf&&!C.zf)) goto L_11d42185;
  /* 11d41d7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d41d7f jmp dword ptr [eax*4 + 0x11d437aa] */
  switch (EAX) {
    case 0: goto L_11d41d86;
    case 1: goto L_11d41ed7;
    case 2: goto L_11d41ff6;
    case 3: goto L_11d420e3;
    case 4: goto L_11d424e9;
    case 5: goto L_11d42548;
    case 6: goto L_11d425a7;
    case 7: goto L_11d42603;
    case 8: goto L_11d42984;
    case 9: goto L_11d429b3;
    case 10: goto L_11d429df;
    case 11: goto L_11d42a0b;
    default: x86_unimpl("switch@0x11d41d7f out of table"); return;
  }
L_11d41d86:;
  /* 11d41d86 mov esi, esp */
  ESI = (ESP);
  /* 11d41d88 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d41d8d push 3 */
  push32((uint32_t)(0x3u));
  /* 11d41d8f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d41d91 call dword ptr [0x11d7448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7448c))), 0x11d41d97u);
  /* 11d41d97 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41d9a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41d9c call 0x11d44070 */
  push32(0x11d41da1u); f_11d44070();
  /* 11d41da1 mov esi, esp */
  ESI = (ESP);
  /* 11d41da3 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d41da8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d41daa push 0 */
  push32((uint32_t)(0x0u));
  /* 11d41dac call dword ptr [0x11d7448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7448c))), 0x11d41db2u);
  /* 11d41db2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41db5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41db7 call 0x11d44070 */
  push32(0x11d41dbcu); f_11d44070();
  /* 11d41dbc mov esi, esp */
  ESI = (ESP);
  /* 11d41dbe push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d41dc3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d41dc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d41dc7 call dword ptr [0x11d7448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7448c))), 0x11d41dcdu);
  /* 11d41dcd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41dd0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41dd2 call 0x11d44070 */
  push32(0x11d41dd7u); f_11d44070();
  /* 11d41dd7 mov esi, esp */
  ESI = (ESP);
  /* 11d41dd9 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d41dde push 1 */
  push32((uint32_t)(0x1u));
  /* 11d41de0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d41de2 call dword ptr [0x11d7448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7448c))), 0x11d41de8u);
  /* 11d41de8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41deb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41ded call 0x11d44070 */
  push32(0x11d41df2u); f_11d44070();
  /* 11d41df2 mov esi, esp */
  ESI = (ESP);
  /* 11d41df4 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d41df9 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d41dfb push 0 */
  push32((uint32_t)(0x0u));
  /* 11d41dfd call dword ptr [0x11d7448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7448c))), 0x11d41e03u);
  /* 11d41e03 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41e06 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41e08 call 0x11d44070 */
  push32(0x11d41e0du); f_11d44070();
  /* 11d41e0d mov esi, esp */
  ESI = (ESP);
  /* 11d41e0f push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d41e14 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d41e16 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d41e18 call dword ptr [0x11d7448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7448c))), 0x11d41e1eu);
  /* 11d41e1e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41e21 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41e23 call 0x11d44070 */
  push32(0x11d41e28u); f_11d44070();
  /* 11d41e28 mov esi, esp */
  ESI = (ESP);
  /* 11d41e2a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d41e2c push 0x11d714f0 */
  push32((uint32_t)(0x11d714f0u));
  /* 11d41e31 call dword ptr [0x11d7447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7447c))), 0x11d41e37u);
  /* 11d41e37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41e3a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41e3c call 0x11d44070 */
  push32(0x11d41e41u); f_11d44070();
  /* 11d41e41 mov esi, esp */
  ESI = (ESP);
  /* 11d41e43 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d41e45 push 0x11d714f8 */
  push32((uint32_t)(0x11d714f8u));
  /* 11d41e4a call dword ptr [0x11d7447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7447c))), 0x11d41e50u);
  /* 11d41e50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41e53 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41e55 call 0x11d44070 */
  push32(0x11d41e5au); f_11d44070();
  /* 11d41e5a mov esi, esp */
  ESI = (ESP);
  /* 11d41e5c push 1 */
  push32((uint32_t)(0x1u));
  /* 11d41e5e push 0x11d71500 */
  push32((uint32_t)(0x11d71500u));
  /* 11d41e63 call dword ptr [0x11d7447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7447c))), 0x11d41e69u);
  /* 11d41e69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41e6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41e6e call 0x11d44070 */
  push32(0x11d41e73u); f_11d44070();
  /* 11d41e73 mov esi, esp */
  ESI = (ESP);
  /* 11d41e75 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d41e77 push 0x11d71508 */
  push32((uint32_t)(0x11d71508u));
  /* 11d41e7c call dword ptr [0x11d7447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7447c))), 0x11d41e82u);
  /* 11d41e82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41e85 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41e87 call 0x11d44070 */
  push32(0x11d41e8cu); f_11d44070();
  /* 11d41e8c mov esi, esp */
  ESI = (ESP);
  /* 11d41e8e push 1 */
  push32((uint32_t)(0x1u));
  /* 11d41e90 push 0x11d71510 */
  push32((uint32_t)(0x11d71510u));
  /* 11d41e95 call dword ptr [0x11d7447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7447c))), 0x11d41e9bu);
  /* 11d41e9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41e9e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41ea0 call 0x11d44070 */
  push32(0x11d41ea5u); f_11d44070();
  /* 11d41ea5 mov esi, esp */
  ESI = (ESP);
  /* 11d41ea7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d41ea9 push 0x11d71518 */
  push32((uint32_t)(0x11d71518u));
  /* 11d41eae call dword ptr [0x11d7447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7447c))), 0x11d41eb4u);
  /* 11d41eb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41eb7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41eb9 call 0x11d44070 */
  push32(0x11d41ebeu); f_11d44070();
  /* 11d41ebe mov esi, esp */
  ESI = (ESP);
  /* 11d41ec0 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d41ec2 call dword ptr [0x11d74490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74490))), 0x11d41ec8u);
  /* 11d41ec8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41ecb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41ecd call 0x11d44070 */
  push32(0x11d41ed2u); f_11d44070();
  /* 11d41ed2 jmp 0x11d42185 */
  goto L_11d42185;
L_11d41ed7:;
  /* 11d41ed7 mov esi, esp */
  ESI = (ESP);
  /* 11d41ed9 push 0x1194 */
  push32((uint32_t)(0x1194u));
  /* 11d41ede push 3 */
  push32((uint32_t)(0x3u));
  /* 11d41ee0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d41ee2 call dword ptr [0x11d7448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7448c))), 0x11d41ee8u);
  /* 11d41ee8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41eeb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41eed call 0x11d44070 */
  push32(0x11d41ef2u); f_11d44070();
  /* 11d41ef2 mov esi, esp */
  ESI = (ESP);
  /* 11d41ef4 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d41ef9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d41efb push 0 */
  push32((uint32_t)(0x0u));
  /* 11d41efd call dword ptr [0x11d7448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7448c))), 0x11d41f03u);
  /* 11d41f03 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41f06 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41f08 call 0x11d44070 */
  push32(0x11d41f0du); f_11d44070();
  /* 11d41f0d mov esi, esp */
  ESI = (ESP);
  /* 11d41f0f push 0x1194 */
  push32((uint32_t)(0x1194u));
  /* 11d41f14 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d41f16 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d41f18 call dword ptr [0x11d7448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7448c))), 0x11d41f1eu);
  /* 11d41f1e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41f21 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41f23 call 0x11d44070 */
  push32(0x11d41f28u); f_11d44070();
  /* 11d41f28 mov esi, esp */
  ESI = (ESP);
  /* 11d41f2a push 0x1194 */
  push32((uint32_t)(0x1194u));
  /* 11d41f2f push 1 */
  push32((uint32_t)(0x1u));
  /* 11d41f31 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d41f33 call dword ptr [0x11d7448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7448c))), 0x11d41f39u);
  /* 11d41f39 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41f3c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41f3e call 0x11d44070 */
  push32(0x11d41f43u); f_11d44070();
  /* 11d41f43 mov esi, esp */
  ESI = (ESP);
  /* 11d41f45 push 0x1194 */
  push32((uint32_t)(0x1194u));
  /* 11d41f4a push 5 */
  push32((uint32_t)(0x5u));
  /* 11d41f4c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d41f4e call dword ptr [0x11d7448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7448c))), 0x11d41f54u);
  /* 11d41f54 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41f57 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41f59 call 0x11d44070 */
  push32(0x11d41f5eu); f_11d44070();
  /* 11d41f5e mov esi, esp */
  ESI = (ESP);
  /* 11d41f60 push 0x1194 */
  push32((uint32_t)(0x1194u));
  /* 11d41f65 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d41f67 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d41f69 call dword ptr [0x11d7448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7448c))), 0x11d41f6fu);
  /* 11d41f6f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41f72 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41f74 call 0x11d44070 */
  push32(0x11d41f79u); f_11d44070();
  /* 11d41f79 mov esi, esp */
  ESI = (ESP);
  /* 11d41f7b push 0 */
  push32((uint32_t)(0x0u));
  /* 11d41f7d push 0x11d714f0 */
  push32((uint32_t)(0x11d714f0u));
  /* 11d41f82 call dword ptr [0x11d7447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7447c))), 0x11d41f88u);
  /* 11d41f88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41f8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41f8d call 0x11d44070 */
  push32(0x11d41f92u); f_11d44070();
  /* 11d41f92 mov esi, esp */
  ESI = (ESP);
  /* 11d41f94 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d41f96 push 0x11d71500 */
  push32((uint32_t)(0x11d71500u));
  /* 11d41f9b call dword ptr [0x11d7447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7447c))), 0x11d41fa1u);
  /* 11d41fa1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41fa4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41fa6 call 0x11d44070 */
  push32(0x11d41fabu); f_11d44070();
  /* 11d41fab mov esi, esp */
  ESI = (ESP);
  /* 11d41fad push 1 */
  push32((uint32_t)(0x1u));
  /* 11d41faf push 0x11d71508 */
  push32((uint32_t)(0x11d71508u));
  /* 11d41fb4 call dword ptr [0x11d7447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7447c))), 0x11d41fbau);
  /* 11d41fba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41fbd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41fbf call 0x11d44070 */
  push32(0x11d41fc4u); f_11d44070();
  /* 11d41fc4 mov esi, esp */
  ESI = (ESP);
  /* 11d41fc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d41fc8 push 0x11d71518 */
  push32((uint32_t)(0x11d71518u));
  /* 11d41fcd call dword ptr [0x11d7447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7447c))), 0x11d41fd3u);
  /* 11d41fd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41fd6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41fd8 call 0x11d44070 */
  push32(0x11d41fddu); f_11d44070();
  /* 11d41fdd mov esi, esp */
  ESI = (ESP);
  /* 11d41fdf push 5 */
  push32((uint32_t)(0x5u));
  /* 11d41fe1 call dword ptr [0x11d74490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74490))), 0x11d41fe7u);
  /* 11d41fe7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d41fea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d41fec call 0x11d44070 */
  push32(0x11d41ff1u); f_11d44070();
  /* 11d41ff1 jmp 0x11d42185 */
  goto L_11d42185;
L_11d41ff6:;
  /* 11d41ff6 mov esi, esp */
  ESI = (ESP);
  /* 11d41ff8 push 0xdac */
  push32((uint32_t)(0xdacu));
  /* 11d41ffd push 3 */
  push32((uint32_t)(0x3u));
  /* 11d41fff push 0 */
  push32((uint32_t)(0x0u));
  /* 11d42001 call dword ptr [0x11d7448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7448c))), 0x11d42007u);
  /* 11d42007 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4200a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4200c call 0x11d44070 */
  push32(0x11d42011u); f_11d44070();
  /* 11d42011 mov esi, esp */
  ESI = (ESP);
  /* 11d42013 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d42018 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4201a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4201c call dword ptr [0x11d7448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7448c))), 0x11d42022u);
  /* 11d42022 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42025 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42027 call 0x11d44070 */
  push32(0x11d4202cu); f_11d44070();
  /* 11d4202c mov esi, esp */
  ESI = (ESP);
  /* 11d4202e push 0xdac */
  push32((uint32_t)(0xdacu));
  /* 11d42033 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d42035 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d42037 call dword ptr [0x11d7448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7448c))), 0x11d4203du);
  /* 11d4203d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42040 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42042 call 0x11d44070 */
  push32(0x11d42047u); f_11d44070();
  /* 11d42047 mov esi, esp */
  ESI = (ESP);
  /* 11d42049 push 0xdac */
  push32((uint32_t)(0xdacu));
  /* 11d4204e push 1 */
  push32((uint32_t)(0x1u));
  /* 11d42050 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d42052 call dword ptr [0x11d7448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7448c))), 0x11d42058u);
  /* 11d42058 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4205b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4205d call 0x11d44070 */
  push32(0x11d42062u); f_11d44070();
  /* 11d42062 mov esi, esp */
  ESI = (ESP);
  /* 11d42064 push 0xdac */
  push32((uint32_t)(0xdacu));
  /* 11d42069 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d4206b push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4206d call dword ptr [0x11d7448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7448c))), 0x11d42073u);
  /* 11d42073 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42076 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42078 call 0x11d44070 */
  push32(0x11d4207du); f_11d44070();
  /* 11d4207d mov esi, esp */
  ESI = (ESP);
  /* 11d4207f push 0xdac */
  push32((uint32_t)(0xdacu));
  /* 11d42084 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d42086 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d42088 call dword ptr [0x11d7448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7448c))), 0x11d4208eu);
  /* 11d4208e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42091 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42093 call 0x11d44070 */
  push32(0x11d42098u); f_11d44070();
  /* 11d42098 mov esi, esp */
  ESI = (ESP);
  /* 11d4209a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4209c push 0x11d714f8 */
  push32((uint32_t)(0x11d714f8u));
  /* 11d420a1 call dword ptr [0x11d7447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7447c))), 0x11d420a7u);
  /* 11d420a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d420aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d420ac call 0x11d44070 */
  push32(0x11d420b1u); f_11d44070();
  /* 11d420b1 mov esi, esp */
  ESI = (ESP);
  /* 11d420b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d420b5 push 0x11d71510 */
  push32((uint32_t)(0x11d71510u));
  /* 11d420ba call dword ptr [0x11d7447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7447c))), 0x11d420c0u);
  /* 11d420c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d420c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d420c5 call 0x11d44070 */
  push32(0x11d420cau); f_11d44070();
  /* 11d420ca mov esi, esp */
  ESI = (ESP);
  /* 11d420cc push 5 */
  push32((uint32_t)(0x5u));
  /* 11d420ce call dword ptr [0x11d74490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74490))), 0x11d420d4u);
  /* 11d420d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d420d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d420d9 call 0x11d44070 */
  push32(0x11d420deu); f_11d44070();
  /* 11d420de jmp 0x11d42185 */
  goto L_11d42185;
L_11d420e3:;
  /* 11d420e3 mov esi, esp */
  ESI = (ESP);
  /* 11d420e5 push 0x9c4 */
  push32((uint32_t)(0x9c4u));
  /* 11d420ea push 3 */
  push32((uint32_t)(0x3u));
  /* 11d420ec push 0 */
  push32((uint32_t)(0x0u));
  /* 11d420ee call dword ptr [0x11d7448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7448c))), 0x11d420f4u);
  /* 11d420f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d420f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d420f9 call 0x11d44070 */
  push32(0x11d420feu); f_11d44070();
  /* 11d420fe mov esi, esp */
  ESI = (ESP);
  /* 11d42100 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d42105 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d42107 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d42109 call dword ptr [0x11d7448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7448c))), 0x11d4210fu);
  /* 11d4210f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42112 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42114 call 0x11d44070 */
  push32(0x11d42119u); f_11d44070();
  /* 11d42119 mov esi, esp */
  ESI = (ESP);
  /* 11d4211b push 0x9c4 */
  push32((uint32_t)(0x9c4u));
  /* 11d42120 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d42122 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d42124 call dword ptr [0x11d7448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7448c))), 0x11d4212au);
  /* 11d4212a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4212d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4212f call 0x11d44070 */
  push32(0x11d42134u); f_11d44070();
  /* 11d42134 mov esi, esp */
  ESI = (ESP);
  /* 11d42136 push 0x9c4 */
  push32((uint32_t)(0x9c4u));
  /* 11d4213b push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4213d push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4213f call dword ptr [0x11d7448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7448c))), 0x11d42145u);
  /* 11d42145 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42148 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4214a call 0x11d44070 */
  push32(0x11d4214fu); f_11d44070();
  /* 11d4214f mov esi, esp */
  ESI = (ESP);
  /* 11d42151 push 0x9c4 */
  push32((uint32_t)(0x9c4u));
  /* 11d42156 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d42158 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4215a call dword ptr [0x11d7448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7448c))), 0x11d42160u);
  /* 11d42160 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42163 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42165 call 0x11d44070 */
  push32(0x11d4216au); f_11d44070();
  /* 11d4216a mov esi, esp */
  ESI = (ESP);
  /* 11d4216c push 0x9c4 */
  push32((uint32_t)(0x9c4u));
  /* 11d42171 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d42173 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d42175 call dword ptr [0x11d7448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7448c))), 0x11d4217bu);
  /* 11d4217b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4217e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42180 call 0x11d44070 */
  push32(0x11d42185u); f_11d44070();
L_11d42185:;
  /* 11d42185 mov esi, esp */
  ESI = (ESP);
  /* 11d42187 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d4218c push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4218e call dword ptr [0x11d74484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74484))), 0x11d42194u);
  /* 11d42194 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42197 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42199 call 0x11d44070 */
  push32(0x11d4219eu); f_11d44070();
  /* 11d4219e mov esi, esp */
  ESI = (ESP);
  /* 11d421a0 push 0x11d6c3a0 */
  push32((uint32_t)(0x11d6c3a0u));
  /* 11d421a5 push 0x11d6c284 */
  push32((uint32_t)(0x11d6c284u));
  /* 11d421aa call dword ptr [0x11d74494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74494))), 0x11d421b0u);
  /* 11d421b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d421b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d421b5 call 0x11d44070 */
  push32(0x11d421bau); f_11d44070();
  /* 11d421ba mov esi, esp */
  ESI = (ESP);
  /* 11d421bc push 0x11d6c394 */
  push32((uint32_t)(0x11d6c394u));
  /* 11d421c1 push 0x11d6c284 */
  push32((uint32_t)(0x11d6c284u));
  /* 11d421c6 call dword ptr [0x11d74494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74494))), 0x11d421ccu);
  /* 11d421cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d421cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d421d1 call 0x11d44070 */
  push32(0x11d421d6u); f_11d44070();
  /* 11d421d6 mov esi, esp */
  ESI = (ESP);
  /* 11d421d8 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d421dd push 3 */
  push32((uint32_t)(0x3u));
  /* 11d421df push 3 */
  push32((uint32_t)(0x3u));
  /* 11d421e1 call dword ptr [0x11d7448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7448c))), 0x11d421e7u);
  /* 11d421e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d421ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d421ec call 0x11d44070 */
  push32(0x11d421f1u); f_11d44070();
  /* 11d421f1 mov esi, esp */
  ESI = (ESP);
  /* 11d421f3 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d421f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d421fa push 3 */
  push32((uint32_t)(0x3u));
  /* 11d421fc call dword ptr [0x11d7448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7448c))), 0x11d42202u);
  /* 11d42202 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42205 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42207 call 0x11d44070 */
  push32(0x11d4220cu); f_11d44070();
  /* 11d4220c mov esi, esp */
  ESI = (ESP);
  /* 11d4220e push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d42213 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d42215 push 3 */
  push32((uint32_t)(0x3u));
  /* 11d42217 call dword ptr [0x11d7448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7448c))), 0x11d4221du);
  /* 11d4221d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42220 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42222 call 0x11d44070 */
  push32(0x11d42227u); f_11d44070();
  /* 11d42227 mov esi, esp */
  ESI = (ESP);
  /* 11d42229 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d4222e push 1 */
  push32((uint32_t)(0x1u));
  /* 11d42230 push 3 */
  push32((uint32_t)(0x3u));
  /* 11d42232 call dword ptr [0x11d7448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7448c))), 0x11d42238u);
  /* 11d42238 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4223b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4223d call 0x11d44070 */
  push32(0x11d42242u); f_11d44070();
  /* 11d42242 mov esi, esp */
  ESI = (ESP);
  /* 11d42244 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d42249 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d4224b push 3 */
  push32((uint32_t)(0x3u));
  /* 11d4224d call dword ptr [0x11d7448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7448c))), 0x11d42253u);
  /* 11d42253 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42256 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42258 call 0x11d44070 */
  push32(0x11d4225du); f_11d44070();
  /* 11d4225d mov esi, esp */
  ESI = (ESP);
  /* 11d4225f push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d42264 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d42266 push 3 */
  push32((uint32_t)(0x3u));
  /* 11d42268 call dword ptr [0x11d7448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7448c))), 0x11d4226eu);
  /* 11d4226e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42271 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42273 call 0x11d44070 */
  push32(0x11d42278u); f_11d44070();
  /* 11d42278 mov esi, esp */
  ESI = (ESP);
  /* 11d4227a push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d4227f push 3 */
  push32((uint32_t)(0x3u));
  /* 11d42281 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d42283 call dword ptr [0x11d7448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7448c))), 0x11d42289u);
  /* 11d42289 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4228c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4228e call 0x11d44070 */
  push32(0x11d42293u); f_11d44070();
  /* 11d42293 mov esi, esp */
  ESI = (ESP);
  /* 11d42295 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d4229a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4229c push 4 */
  push32((uint32_t)(0x4u));
  /* 11d4229e call dword ptr [0x11d7448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7448c))), 0x11d422a4u);
  /* 11d422a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d422a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d422a9 call 0x11d44070 */
  push32(0x11d422aeu); f_11d44070();
  /* 11d422ae mov esi, esp */
  ESI = (ESP);
  /* 11d422b0 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d422b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d422b7 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d422b9 call dword ptr [0x11d7448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7448c))), 0x11d422bfu);
  /* 11d422bf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d422c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d422c4 call 0x11d44070 */
  push32(0x11d422c9u); f_11d44070();
  /* 11d422c9 mov esi, esp */
  ESI = (ESP);
  /* 11d422cb push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d422d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d422d2 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d422d4 call dword ptr [0x11d7448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7448c))), 0x11d422dau);
  /* 11d422da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d422dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d422df call 0x11d44070 */
  push32(0x11d422e4u); f_11d44070();
  /* 11d422e4 mov esi, esp */
  ESI = (ESP);
  /* 11d422e6 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d422eb push 5 */
  push32((uint32_t)(0x5u));
  /* 11d422ed push 4 */
  push32((uint32_t)(0x4u));
  /* 11d422ef call dword ptr [0x11d7448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7448c))), 0x11d422f5u);
  /* 11d422f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d422f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d422fa call 0x11d44070 */
  push32(0x11d422ffu); f_11d44070();
  /* 11d422ff mov esi, esp */
  ESI = (ESP);
  /* 11d42301 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11d42306 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d42308 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d4230a call dword ptr [0x11d7448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7448c))), 0x11d42310u);
  /* 11d42310 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42313 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42315 call 0x11d44070 */
  push32(0x11d4231au); f_11d44070();
  /* 11d4231a mov esi, esp */
  ESI = (ESP);
  /* 11d4231c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4231e call dword ptr [0x11d74488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74488))), 0x11d42324u);
  /* 11d42324 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42327 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42329 call 0x11d44070 */
  push32(0x11d4232eu); f_11d44070();
  /* 11d4232e mov esi, esp */
  ESI = (ESP);
  /* 11d42330 push eax */
  push32((uint32_t)(EAX));
  /* 11d42331 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d42333 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d42335 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d42337 push 0x11d6c388 */
  push32((uint32_t)(0x11d6c388u));
  /* 11d4233c push 3 */
  push32((uint32_t)(0x3u));
  /* 11d4233e call dword ptr [0x11d74498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74498))), 0x11d42344u);
  /* 11d42344 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42347 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42349 call 0x11d44070 */
  push32(0x11d4234eu); f_11d44070();
  /* 11d4234e mov esi, esp */
  ESI = (ESP);
  /* 11d42350 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d42352 call dword ptr [0x11d74488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74488))), 0x11d42358u);
  /* 11d42358 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4235b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4235d call 0x11d44070 */
  push32(0x11d42362u); f_11d44070();
  /* 11d42362 mov esi, esp */
  ESI = (ESP);
  /* 11d42364 push eax */
  push32((uint32_t)(EAX));
  /* 11d42365 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d42367 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d42369 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4236b push 0x11d6c37c */
  push32((uint32_t)(0x11d6c37cu));
  /* 11d42370 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d42372 call dword ptr [0x11d74498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74498))), 0x11d42378u);
  /* 11d42378 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4237b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4237d call 0x11d44070 */
  push32(0x11d42382u); f_11d44070();
L_11d42382:;
  /* 11d42382 mov esi, esp */
  ESI = (ESP);
  /* 11d42384 push 6 */
  push32((uint32_t)(0x6u));
  /* 11d42386 call dword ptr [0x11d7449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7449c))), 0x11d4238cu);
  /* 11d4238c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4238f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42391 call 0x11d44070 */
  push32(0x11d42396u); f_11d44070();
  /* 11d42396 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d4239b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4239d je 0x11d4244d */
  if (C.zf) goto L_11d4244d;
  /* 11d423a3 mov esi, esp */
  ESI = (ESP);
  /* 11d423a5 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11d423a7 call dword ptr [0x11d74460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74460))), 0x11d423adu);
  /* 11d423ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d423b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d423b2 call 0x11d44070 */
  push32(0x11d423b7u); f_11d44070();
  /* 11d423b7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d423bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d423be je 0x11d4244d */
  if (C.zf) goto L_11d4244d;
  /* 11d423c4 mov esi, esp */
  ESI = (ESP);
  /* 11d423c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d423c8 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11d423ca call dword ptr [0x11d74464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74464))), 0x11d423d0u);
  /* 11d423d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d423d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d423d5 call 0x11d44070 */
  push32(0x11d423dau); f_11d44070();
  /* 11d423da mov esi, esp */
  ESI = (ESP);
  /* 11d423dc push 0x11d6c370 */
  push32((uint32_t)(0x11d6c370u));
  /* 11d423e1 call dword ptr [0x11d744a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744a0))), 0x11d423e7u);
  /* 11d423e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d423ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d423ec call 0x11d44070 */
  push32(0x11d423f1u); f_11d44070();
  /* 11d423f1 mov esi, esp */
  ESI = (ESP);
  /* 11d423f3 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11d423f5 call dword ptr [0x11d74468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74468))), 0x11d423fbu);
  /* 11d423fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d423fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42400 call 0x11d44070 */
  push32(0x11d42405u); f_11d44070();
  /* 11d42405 mov esi, esp */
  ESI = (ESP);
  /* 11d42407 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d42409 push 0x11d71588 */
  push32((uint32_t)(0x11d71588u));
  /* 11d4240e call dword ptr [0x11d7447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7447c))), 0x11d42414u);
  /* 11d42414 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42417 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42419 call 0x11d44070 */
  push32(0x11d4241eu); f_11d44070();
  /* 11d4241e mov esi, esp */
  ESI = (ESP);
  /* 11d42420 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d42422 push 0x11d71590 */
  push32((uint32_t)(0x11d71590u));
  /* 11d42427 call dword ptr [0x11d7447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7447c))), 0x11d4242du);
  /* 11d4242d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42430 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42432 call 0x11d44070 */
  push32(0x11d42437u); f_11d44070();
  /* 11d42437 mov esi, esp */
  ESI = (ESP);
  /* 11d42439 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4243b push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4243d call dword ptr [0x11d744a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744a4))), 0x11d42443u);
  /* 11d42443 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42446 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42448 call 0x11d44070 */
  push32(0x11d4244du); f_11d44070();
L_11d4244d:;
  /* 11d4244d mov esi, esp */
  ESI = (ESP);
  /* 11d4244f push 2 */
  push32((uint32_t)(0x2u));
  /* 11d42451 call dword ptr [0x11d74460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74460))), 0x11d42457u);
  /* 11d42457 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4245a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4245c call 0x11d44070 */
  push32(0x11d42461u); f_11d44070();
  /* 11d42461 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d42466 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d42468 je 0x11d4265d */
  if (C.zf) goto L_11d4265d;
  /* 11d4246e mov esi, esp */
  ESI = (ESP);
  /* 11d42470 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d42472 call dword ptr [0x11d74460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74460))), 0x11d42478u);
  /* 11d42478 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4247b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4247d call 0x11d44070 */
  push32(0x11d42482u); f_11d44070();
  /* 11d42482 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d42487 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d42489 je 0x11d4265d */
  if (C.zf) goto L_11d4265d;
  /* 11d4248f mov esi, esp */
  ESI = (ESP);
  /* 11d42491 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d42493 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d42495 call dword ptr [0x11d74464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74464))), 0x11d4249bu);
  /* 11d4249b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4249e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d424a0 call 0x11d44070 */
  push32(0x11d424a5u); f_11d44070();
  /* 11d424a5 mov esi, esp */
  ESI = (ESP);
  /* 11d424a7 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11d424ac push 5 */
  push32((uint32_t)(0x5u));
  /* 11d424ae call dword ptr [0x11d74484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74484))), 0x11d424b4u);
  /* 11d424b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d424b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d424b9 call 0x11d44070 */
  push32(0x11d424beu); f_11d44070();
  /* 11d424be mov esi, esp */
  ESI = (ESP);
  /* 11d424c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d424c2 call dword ptr [0x11d74488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74488))), 0x11d424c8u);
  /* 11d424c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d424cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d424cd call 0x11d44070 */
  push32(0x11d424d2u); f_11d44070();
  /* 11d424d2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d424d5 cmp dword ptr [ebp - 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d424d9 ja 0x11d4265d */
  if ((!C.cf&&!C.zf)) goto L_11d4265d;
  /* 11d424df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d424e2 jmp dword ptr [ecx*4 + 0x11d437ba] */
  switch (ECX) {
    case 0: goto L_11d424e9;
    case 1: goto L_11d42548;
    case 2: goto L_11d425a7;
    case 3: goto L_11d42603;
    case 4: goto L_11d42984;
    case 5: goto L_11d429b3;
    case 6: goto L_11d429df;
    case 7: goto L_11d42a0b;
    default: x86_unimpl("switch@0x11d424e2 out of table"); return;
  }
L_11d424e9:;
  /* 11d424e9 mov esi, esp */
  ESI = (ESP);
  /* 11d424eb push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11d424f0 push 0x11d71560 */
  push32((uint32_t)(0x11d71560u));
  /* 11d424f5 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d424f7 push 0x11d71428 */
  push32((uint32_t)(0x11d71428u));
  /* 11d424fc push 0x11d71498 */
  push32((uint32_t)(0x11d71498u));
  /* 11d42501 push 0x11d71408 */
  push32((uint32_t)(0x11d71408u));
  /* 11d42506 call dword ptr [0x11d744a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744a8))), 0x11d4250cu);
  /* 11d4250c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4250f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42511 call 0x11d44070 */
  push32(0x11d42516u); f_11d44070();
  /* 11d42516 mov esi, esp */
  ESI = (ESP);
  /* 11d42518 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11d4251d push 0x11d71560 */
  push32((uint32_t)(0x11d71560u));
  /* 11d42522 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d42524 push 0x11d714a0 */
  push32((uint32_t)(0x11d714a0u));
  /* 11d42529 push 0x11d71440 */
  push32((uint32_t)(0x11d71440u));
  /* 11d4252e push 0x11d71400 */
  push32((uint32_t)(0x11d71400u));
  /* 11d42533 call dword ptr [0x11d744a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744a8))), 0x11d42539u);
  /* 11d42539 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4253c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4253e call 0x11d44070 */
  push32(0x11d42543u); f_11d44070();
  /* 11d42543 jmp 0x11d4265d */
  goto L_11d4265d;
L_11d42548:;
  /* 11d42548 mov esi, esp */
  ESI = (ESP);
  /* 11d4254a push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11d4254f push 0x11d71560 */
  push32((uint32_t)(0x11d71560u));
  /* 11d42554 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d42556 push 0x11d71428 */
  push32((uint32_t)(0x11d71428u));
  /* 11d4255b push 0x11d714b0 */
  push32((uint32_t)(0x11d714b0u));
  /* 11d42560 push 0x11d71408 */
  push32((uint32_t)(0x11d71408u));
  /* 11d42565 call dword ptr [0x11d744a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744a8))), 0x11d4256bu);
  /* 11d4256b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4256e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42570 call 0x11d44070 */
  push32(0x11d42575u); f_11d44070();
  /* 11d42575 mov esi, esp */
  ESI = (ESP);
  /* 11d42577 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11d4257c push 0x11d71560 */
  push32((uint32_t)(0x11d71560u));
  /* 11d42581 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d42583 push 0x11d714a0 */
  push32((uint32_t)(0x11d714a0u));
  /* 11d42588 push 0x11d71440 */
  push32((uint32_t)(0x11d71440u));
  /* 11d4258d push 0x11d71400 */
  push32((uint32_t)(0x11d71400u));
  /* 11d42592 call dword ptr [0x11d744a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744a8))), 0x11d42598u);
  /* 11d42598 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4259b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4259d call 0x11d44070 */
  push32(0x11d425a2u); f_11d44070();
  /* 11d425a2 jmp 0x11d4265d */
  goto L_11d4265d;
L_11d425a7:;
  /* 11d425a7 mov esi, esp */
  ESI = (ESP);
  /* 11d425a9 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11d425ae push 0x11d71560 */
  push32((uint32_t)(0x11d71560u));
  /* 11d425b3 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d425b5 push 0x11d71428 */
  push32((uint32_t)(0x11d71428u));
  /* 11d425ba push 0x11d714a8 */
  push32((uint32_t)(0x11d714a8u));
  /* 11d425bf push 0x11d71408 */
  push32((uint32_t)(0x11d71408u));
  /* 11d425c4 call dword ptr [0x11d744a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744a8))), 0x11d425cau);
  /* 11d425ca add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d425cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d425cf call 0x11d44070 */
  push32(0x11d425d4u); f_11d44070();
  /* 11d425d4 mov esi, esp */
  ESI = (ESP);
  /* 11d425d6 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11d425db push 0x11d71560 */
  push32((uint32_t)(0x11d71560u));
  /* 11d425e0 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d425e2 push 0x11d714a0 */
  push32((uint32_t)(0x11d714a0u));
  /* 11d425e7 push 0x11d71578 */
  push32((uint32_t)(0x11d71578u));
  /* 11d425ec push 0x11d71400 */
  push32((uint32_t)(0x11d71400u));
  /* 11d425f1 call dword ptr [0x11d744a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744a8))), 0x11d425f7u);
  /* 11d425f7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d425fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d425fc call 0x11d44070 */
  push32(0x11d42601u); f_11d44070();
  /* 11d42601 jmp 0x11d4265d */
  goto L_11d4265d;
L_11d42603:;
  /* 11d42603 mov esi, esp */
  ESI = (ESP);
  /* 11d42605 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11d4260a push 0x11d71560 */
  push32((uint32_t)(0x11d71560u));
  /* 11d4260f push 5 */
  push32((uint32_t)(0x5u));
  /* 11d42611 push 0x11d71428 */
  push32((uint32_t)(0x11d71428u));
  /* 11d42616 push 0x11d714b8 */
  push32((uint32_t)(0x11d714b8u));
  /* 11d4261b push 0x11d71408 */
  push32((uint32_t)(0x11d71408u));
  /* 11d42620 call dword ptr [0x11d744a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744a8))), 0x11d42626u);
  /* 11d42626 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42629 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4262b call 0x11d44070 */
  push32(0x11d42630u); f_11d44070();
  /* 11d42630 mov esi, esp */
  ESI = (ESP);
  /* 11d42632 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11d42637 push 0x11d71560 */
  push32((uint32_t)(0x11d71560u));
  /* 11d4263c push 5 */
  push32((uint32_t)(0x5u));
  /* 11d4263e push 0x11d714a0 */
  push32((uint32_t)(0x11d714a0u));
  /* 11d42643 push 0x11d71578 */
  push32((uint32_t)(0x11d71578u));
  /* 11d42648 push 0x11d71400 */
  push32((uint32_t)(0x11d71400u));
  /* 11d4264d call dword ptr [0x11d744a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744a8))), 0x11d42653u);
  /* 11d42653 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42656 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42658 call 0x11d44070 */
  push32(0x11d4265du); f_11d44070();
L_11d4265d:;
  /* 11d4265d mov esi, esp */
  ESI = (ESP);
  /* 11d4265f push 0x11d714d0 */
  push32((uint32_t)(0x11d714d0u));
  /* 11d42664 call dword ptr [0x11d744ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744ac))), 0x11d4266au);
  /* 11d4266a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4266d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4266f call 0x11d44070 */
  push32(0x11d42674u); f_11d44070();
  /* 11d42674 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d42676 jne 0x11d426c5 */
  if (!C.zf) goto L_11d426c5;
  /* 11d42678 mov esi, esp */
  ESI = (ESP);
  /* 11d4267a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4267c push 0x11d71408 */
  push32((uint32_t)(0x11d71408u));
  /* 11d42681 call dword ptr [0x11d7447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7447c))), 0x11d42687u);
  /* 11d42687 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4268a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4268c call 0x11d44070 */
  push32(0x11d42691u); f_11d44070();
  /* 11d42691 mov esi, esp */
  ESI = (ESP);
  /* 11d42693 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d42695 push 0x11d71400 */
  push32((uint32_t)(0x11d71400u));
  /* 11d4269a call dword ptr [0x11d7447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7447c))), 0x11d426a0u);
  /* 11d426a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d426a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d426a5 call 0x11d44070 */
  push32(0x11d426aau); f_11d44070();
  /* 11d426aa mov esi, esp */
  ESI = (ESP);
  /* 11d426ac push 0x11d71430 */
  push32((uint32_t)(0x11d71430u));
  /* 11d426b1 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d426b3 call dword ptr [0x11d744b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744b0))), 0x11d426b9u);
  /* 11d426b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d426bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d426be call 0x11d44070 */
  push32(0x11d426c3u); f_11d44070();
  /* 11d426c3 jmp 0x11d42710 */
  goto L_11d42710;
L_11d426c5:;
  /* 11d426c5 mov esi, esp */
  ESI = (ESP);
  /* 11d426c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d426c9 push 0x11d71408 */
  push32((uint32_t)(0x11d71408u));
  /* 11d426ce call dword ptr [0x11d7447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7447c))), 0x11d426d4u);
  /* 11d426d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d426d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d426d9 call 0x11d44070 */
  push32(0x11d426deu); f_11d44070();
  /* 11d426de mov esi, esp */
  ESI = (ESP);
  /* 11d426e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d426e2 push 0x11d71400 */
  push32((uint32_t)(0x11d71400u));
  /* 11d426e7 call dword ptr [0x11d7447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7447c))), 0x11d426edu);
  /* 11d426ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d426f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d426f2 call 0x11d44070 */
  push32(0x11d426f7u); f_11d44070();
  /* 11d426f7 mov esi, esp */
  ESI = (ESP);
  /* 11d426f9 push 0x11d714d0 */
  push32((uint32_t)(0x11d714d0u));
  /* 11d426fe push 5 */
  push32((uint32_t)(0x5u));
  /* 11d42700 call dword ptr [0x11d744b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744b0))), 0x11d42706u);
  /* 11d42706 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42709 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4270b call 0x11d44070 */
  push32(0x11d42710u); f_11d44070();
L_11d42710:;
  /* 11d42710 mov esi, esp */
  ESI = (ESP);
  /* 11d42712 push 3 */
  push32((uint32_t)(0x3u));
  /* 11d42714 call dword ptr [0x11d744b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744b4))), 0x11d4271au);
  /* 11d4271a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4271d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4271f call 0x11d44070 */
  push32(0x11d42724u); f_11d44070();
  /* 11d42724 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d42729 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4272b je 0x11d42799 */
  if (C.zf) goto L_11d42799;
  /* 11d4272d mov esi, esp */
  ESI = (ESP);
  /* 11d4272f push 0x11d71408 */
  push32((uint32_t)(0x11d71408u));
  /* 11d42734 call dword ptr [0x11d744ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744ac))), 0x11d4273au);
  /* 11d4273a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4273d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4273f call 0x11d44070 */
  push32(0x11d42744u); f_11d44070();
  /* 11d42744 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d42746 jne 0x11d42763 */
  if (!C.zf) goto L_11d42763;
  /* 11d42748 mov esi, esp */
  ESI = (ESP);
  /* 11d4274a push 0x11d71400 */
  push32((uint32_t)(0x11d71400u));
  /* 11d4274f call dword ptr [0x11d744ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744ac))), 0x11d42755u);
  /* 11d42755 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42758 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4275a call 0x11d44070 */
  push32(0x11d4275fu); f_11d44070();
  /* 11d4275f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d42761 je 0x11d42780 */
  if (C.zf) goto L_11d42780;
L_11d42763:;
  /* 11d42763 mov esi, esp */
  ESI = (ESP);
  /* 11d42765 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d42767 call dword ptr [0x11d7449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7449c))), 0x11d4276du);
  /* 11d4276d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42770 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42772 call 0x11d44070 */
  push32(0x11d42777u); f_11d44070();
  /* 11d42777 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d4277c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4277e je 0x11d42799 */
  if (C.zf) goto L_11d42799;
L_11d42780:;
  /* 11d42780 mov esi, esp */
  ESI = (ESP);
  /* 11d42782 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11d42787 push 3 */
  push32((uint32_t)(0x3u));
  /* 11d42789 call dword ptr [0x11d74484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74484))), 0x11d4278fu);
  /* 11d4278f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42792 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42794 call 0x11d44070 */
  push32(0x11d42799u); f_11d44070();
L_11d42799:;
  /* 11d42799 mov esi, esp */
  ESI = (ESP);
  /* 11d4279b push 3 */
  push32((uint32_t)(0x3u));
  /* 11d4279d call dword ptr [0x11d744b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744b8))), 0x11d427a3u);
  /* 11d427a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d427a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d427a8 call 0x11d44070 */
  push32(0x11d427adu); f_11d44070();
  /* 11d427ad and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d427b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d427b4 je 0x11d427f4 */
  if (C.zf) goto L_11d427f4;
  /* 11d427b6 mov esi, esp */
  ESI = (ESP);
  /* 11d427b8 push 3 */
  push32((uint32_t)(0x3u));
  /* 11d427ba call dword ptr [0x11d744bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744bc))), 0x11d427c0u);
  /* 11d427c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d427c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d427c5 call 0x11d44070 */
  push32(0x11d427cau); f_11d44070();
  /* 11d427ca mov esi, esp */
  ESI = (ESP);
  /* 11d427cc push 5 */
  push32((uint32_t)(0x5u));
  /* 11d427ce call dword ptr [0x11d744bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744bc))), 0x11d427d4u);
  /* 11d427d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d427d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d427d9 call 0x11d44070 */
  push32(0x11d427deu); f_11d44070();
  /* 11d427de mov esi, esp */
  ESI = (ESP);
  /* 11d427e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d427e2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d427e4 call dword ptr [0x11d74464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74464))), 0x11d427eau);
  /* 11d427ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d427ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d427ef call 0x11d44070 */
  push32(0x11d427f4u); f_11d44070();
L_11d427f4:;
  /* 11d427f4 mov esi, esp */
  ESI = (ESP);
  /* 11d427f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d427f8 push 0x11d71570 */
  push32((uint32_t)(0x11d71570u));
  /* 11d427fd push 5 */
  push32((uint32_t)(0x5u));
  /* 11d427ff call dword ptr [0x11d744c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744c0))), 0x11d42805u);
  /* 11d42805 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42808 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4280a call 0x11d44070 */
  push32(0x11d4280fu); f_11d44070();
  /* 11d4280f mov esi, esp */
  ESI = (ESP);
  /* 11d42811 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d42813 call dword ptr [0x11d744c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744c4))), 0x11d42819u);
  /* 11d42819 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4281c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4281e call 0x11d44070 */
  push32(0x11d42823u); f_11d44070();
  /* 11d42823 mov esi, esp */
  ESI = (ESP);
  /* 11d42825 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d42827 push 0x11d71430 */
  push32((uint32_t)(0x11d71430u));
  /* 11d4282c push 5 */
  push32((uint32_t)(0x5u));
  /* 11d4282e call dword ptr [0x11d744c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744c8))), 0x11d42834u);
  /* 11d42834 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42837 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42839 call 0x11d44070 */
  push32(0x11d4283eu); f_11d44070();
  /* 11d4283e mov esi, esp */
  ESI = (ESP);
  /* 11d42840 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d42842 call dword ptr [0x11d744cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744cc))), 0x11d42848u);
  /* 11d42848 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4284b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4284d call 0x11d44070 */
  push32(0x11d42852u); f_11d44070();
  /* 11d42852 mov esi, esp */
  ESI = (ESP);
  /* 11d42854 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d42856 push 0x11d71570 */
  push32((uint32_t)(0x11d71570u));
  /* 11d4285b call dword ptr [0x11d7447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7447c))), 0x11d42861u);
  /* 11d42861 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42864 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42866 call 0x11d44070 */
  push32(0x11d4286bu); f_11d44070();
  /* 11d4286b mov esi, esp */
  ESI = (ESP);
  /* 11d4286d push 0xa */
  push32((uint32_t)(0xau));
  /* 11d4286f call dword ptr [0x11d74460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74460))), 0x11d42875u);
  /* 11d42875 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42878 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4287a call 0x11d44070 */
  push32(0x11d4287fu); f_11d44070();
  /* 11d4287f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d42884 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d42886 je 0x11d428e0 */
  if (C.zf) goto L_11d428e0;
  /* 11d42888 mov esi, esp */
  ESI = (ESP);
  /* 11d4288a push 0x11d71430 */
  push32((uint32_t)(0x11d71430u));
  /* 11d4288f call dword ptr [0x11d744ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744ac))), 0x11d42895u);
  /* 11d42895 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42898 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4289a call 0x11d44070 */
  push32(0x11d4289fu); f_11d44070();
  /* 11d4289f cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d428a2 jge 0x11d428e0 */
  if ((C.sf==C.of)) goto L_11d428e0;
  /* 11d428a4 mov esi, esp */
  ESI = (ESP);
  /* 11d428a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d428a8 push 0xa */
  push32((uint32_t)(0xau));
  /* 11d428aa call dword ptr [0x11d74464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74464))), 0x11d428b0u);
  /* 11d428b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d428b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d428b5 call 0x11d44070 */
  push32(0x11d428bau); f_11d44070();
  /* 11d428ba mov esi, esp */
  ESI = (ESP);
  /* 11d428bc push 0x11d6c364 */
  push32((uint32_t)(0x11d6c364u));
  /* 11d428c1 call dword ptr [0x11d744a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744a0))), 0x11d428c7u);
  /* 11d428c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d428ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d428cc call 0x11d44070 */
  push32(0x11d428d1u); f_11d44070();
  /* 11d428d1 mov esi, esp */
  ESI = (ESP);
  /* 11d428d3 call dword ptr [0x11d744d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744d0))), 0x11d428d9u);
  /* 11d428d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d428db call 0x11d44070 */
  push32(0x11d428e0u); f_11d44070();
L_11d428e0:;
  /* 11d428e0 mov esi, esp */
  ESI = (ESP);
  /* 11d428e2 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d428e4 call dword ptr [0x11d74460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74460))), 0x11d428eau);
  /* 11d428ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d428ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d428ef call 0x11d44070 */
  push32(0x11d428f4u); f_11d44070();
  /* 11d428f4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d428f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d428fb jne 0x11d42a35 */
  if (!C.zf) goto L_11d42a35;
  /* 11d42901 mov esi, esp */
  ESI = (ESP);
  /* 11d42903 push 7 */
  push32((uint32_t)(0x7u));
  /* 11d42905 call dword ptr [0x11d74460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74460))), 0x11d4290bu);
  /* 11d4290b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4290e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42910 call 0x11d44070 */
  push32(0x11d42915u); f_11d44070();
  /* 11d42915 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d4291a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4291c je 0x11d42a35 */
  if (C.zf) goto L_11d42a35;
  /* 11d42922 mov esi, esp */
  ESI = (ESP);
  /* 11d42924 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11d42926 call dword ptr [0x11d74460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74460))), 0x11d4292cu);
  /* 11d4292c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4292f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42931 call 0x11d44070 */
  push32(0x11d42936u); f_11d44070();
  /* 11d42936 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d4293b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4293d je 0x11d42a35 */
  if (C.zf) goto L_11d42a35;
  /* 11d42943 mov esi, esp */
  ESI = (ESP);
  /* 11d42945 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d42947 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11d42949 call dword ptr [0x11d74464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74464))), 0x11d4294fu);
  /* 11d4294f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42952 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42954 call 0x11d44070 */
  push32(0x11d42959u); f_11d44070();
  /* 11d42959 mov esi, esp */
  ESI = (ESP);
  /* 11d4295b push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4295d call dword ptr [0x11d74488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74488))), 0x11d42963u);
  /* 11d42963 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42966 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42968 call 0x11d44070 */
  push32(0x11d4296du); f_11d44070();
  /* 11d4296d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d42970 cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42974 ja 0x11d42a35 */
  if ((!C.cf&&!C.zf)) goto L_11d42a35;
  /* 11d4297a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4297d jmp dword ptr [edx*4 + 0x11d437ca] */
  switch (EDX) {
    case 0: goto L_11d42984;
    case 1: goto L_11d429b3;
    case 2: goto L_11d429df;
    case 3: goto L_11d42a0b;
    default: x86_unimpl("switch@0x11d4297d out of table"); return;
  }
L_11d42984:;
  /* 11d42984 mov esi, esp */
  ESI = (ESP);
  /* 11d42986 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11d42988 push 0x11d71568 */
  push32((uint32_t)(0x11d71568u));
  /* 11d4298d push 5 */
  push32((uint32_t)(0x5u));
  /* 11d4298f push 0x11d713f0 */
  push32((uint32_t)(0x11d713f0u));
  /* 11d42994 push 0x11d71440 */
  push32((uint32_t)(0x11d71440u));
  /* 11d42999 push 0x11d71410 */
  push32((uint32_t)(0x11d71410u));
  /* 11d4299e call dword ptr [0x11d744a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744a8))), 0x11d429a4u);
  /* 11d429a4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d429a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d429a9 call 0x11d44070 */
  push32(0x11d429aeu); f_11d44070();
  /* 11d429ae jmp 0x11d42a35 */
  goto L_11d42a35;
L_11d429b3:;
  /* 11d429b3 mov esi, esp */
  ESI = (ESP);
  /* 11d429b5 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11d429b7 push 0x11d71568 */
  push32((uint32_t)(0x11d71568u));
  /* 11d429bc push 5 */
  push32((uint32_t)(0x5u));
  /* 11d429be push 0x11d713f0 */
  push32((uint32_t)(0x11d713f0u));
  /* 11d429c3 push 0x11d71440 */
  push32((uint32_t)(0x11d71440u));
  /* 11d429c8 push 0x11d71410 */
  push32((uint32_t)(0x11d71410u));
  /* 11d429cd call dword ptr [0x11d744a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744a8))), 0x11d429d3u);
  /* 11d429d3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d429d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d429d8 call 0x11d44070 */
  push32(0x11d429ddu); f_11d44070();
  /* 11d429dd jmp 0x11d42a35 */
  goto L_11d42a35;
L_11d429df:;
  /* 11d429df mov esi, esp */
  ESI = (ESP);
  /* 11d429e1 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11d429e3 push 0x11d71568 */
  push32((uint32_t)(0x11d71568u));
  /* 11d429e8 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d429ea push 0x11d713f0 */
  push32((uint32_t)(0x11d713f0u));
  /* 11d429ef push 0x11d713e8 */
  push32((uint32_t)(0x11d713e8u));
  /* 11d429f4 push 0x11d71410 */
  push32((uint32_t)(0x11d71410u));
  /* 11d429f9 call dword ptr [0x11d744a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744a8))), 0x11d429ffu);
  /* 11d429ff add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42a02 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42a04 call 0x11d44070 */
  push32(0x11d42a09u); f_11d44070();
  /* 11d42a09 jmp 0x11d42a35 */
  goto L_11d42a35;
L_11d42a0b:;
  /* 11d42a0b mov esi, esp */
  ESI = (ESP);
  /* 11d42a0d push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11d42a0f push 0x11d71568 */
  push32((uint32_t)(0x11d71568u));
  /* 11d42a14 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d42a16 push 0x11d713f0 */
  push32((uint32_t)(0x11d713f0u));
  /* 11d42a1b push 0x11d713e8 */
  push32((uint32_t)(0x11d713e8u));
  /* 11d42a20 push 0x11d71410 */
  push32((uint32_t)(0x11d71410u));
  /* 11d42a25 call dword ptr [0x11d744a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744a8))), 0x11d42a2bu);
  /* 11d42a2b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42a2e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42a30 call 0x11d44070 */
  push32(0x11d42a35u); f_11d44070();
L_11d42a35:;
  /* 11d42a35 mov esi, esp */
  ESI = (ESP);
  /* 11d42a37 push 0x11d71480 */
  push32((uint32_t)(0x11d71480u));
  /* 11d42a3c call dword ptr [0x11d744ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744ac))), 0x11d42a42u);
  /* 11d42a42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42a45 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42a47 call 0x11d44070 */
  push32(0x11d42a4cu); f_11d44070();
  /* 11d42a4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d42a4e jne 0x11d42a84 */
  if (!C.zf) goto L_11d42a84;
  /* 11d42a50 mov esi, esp */
  ESI = (ESP);
  /* 11d42a52 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d42a54 push 0x11d71410 */
  push32((uint32_t)(0x11d71410u));
  /* 11d42a59 call dword ptr [0x11d7447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7447c))), 0x11d42a5fu);
  /* 11d42a5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42a62 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42a64 call 0x11d44070 */
  push32(0x11d42a69u); f_11d44070();
  /* 11d42a69 mov esi, esp */
  ESI = (ESP);
  /* 11d42a6b push 0x11d71438 */
  push32((uint32_t)(0x11d71438u));
  /* 11d42a70 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d42a72 call dword ptr [0x11d744b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744b0))), 0x11d42a78u);
  /* 11d42a78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42a7b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42a7d call 0x11d44070 */
  push32(0x11d42a82u); f_11d44070();
  /* 11d42a82 jmp 0x11d42ab6 */
  goto L_11d42ab6;
L_11d42a84:;
  /* 11d42a84 mov esi, esp */
  ESI = (ESP);
  /* 11d42a86 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d42a88 push 0x11d71410 */
  push32((uint32_t)(0x11d71410u));
  /* 11d42a8d call dword ptr [0x11d7447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7447c))), 0x11d42a93u);
  /* 11d42a93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42a96 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42a98 call 0x11d44070 */
  push32(0x11d42a9du); f_11d44070();
  /* 11d42a9d mov esi, esp */
  ESI = (ESP);
  /* 11d42a9f push 0x11d71480 */
  push32((uint32_t)(0x11d71480u));
  /* 11d42aa4 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d42aa6 call dword ptr [0x11d744b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744b0))), 0x11d42aacu);
  /* 11d42aac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42aaf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42ab1 call 0x11d44070 */
  push32(0x11d42ab6u); f_11d44070();
L_11d42ab6:;
  /* 11d42ab6 mov esi, esp */
  ESI = (ESP);
  /* 11d42ab8 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d42aba call dword ptr [0x11d74460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74460))), 0x11d42ac0u);
  /* 11d42ac0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42ac3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42ac5 call 0x11d44070 */
  push32(0x11d42acau); f_11d44070();
  /* 11d42aca and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d42acf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d42ad1 jne 0x11d42b24 */
  if (!C.zf) goto L_11d42b24;
  /* 11d42ad3 mov esi, esp */
  ESI = (ESP);
  /* 11d42ad5 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d42ad7 call dword ptr [0x11d744b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744b4))), 0x11d42addu);
  /* 11d42add add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42ae0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42ae2 call 0x11d44070 */
  push32(0x11d42ae7u); f_11d44070();
  /* 11d42ae7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d42aec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d42aee je 0x11d42b24 */
  if (C.zf) goto L_11d42b24;
  /* 11d42af0 mov esi, esp */
  ESI = (ESP);
  /* 11d42af2 push 0x11d71410 */
  push32((uint32_t)(0x11d71410u));
  /* 11d42af7 call dword ptr [0x11d744ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744ac))), 0x11d42afdu);
  /* 11d42afd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42b00 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42b02 call 0x11d44070 */
  push32(0x11d42b07u); f_11d44070();
  /* 11d42b07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d42b09 jne 0x11d42b24 */
  if (!C.zf) goto L_11d42b24;
  /* 11d42b0b mov esi, esp */
  ESI = (ESP);
  /* 11d42b0d push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11d42b12 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d42b14 call dword ptr [0x11d74484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74484))), 0x11d42b1au);
  /* 11d42b1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42b1d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42b1f call 0x11d44070 */
  push32(0x11d42b24u); f_11d44070();
L_11d42b24:;
  /* 11d42b24 mov esi, esp */
  ESI = (ESP);
  /* 11d42b26 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d42b28 call dword ptr [0x11d744b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744b8))), 0x11d42b2eu);
  /* 11d42b2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42b31 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42b33 call 0x11d44070 */
  push32(0x11d42b38u); f_11d44070();
  /* 11d42b38 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d42b3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d42b3f je 0x11d42b6b */
  if (C.zf) goto L_11d42b6b;
  /* 11d42b41 mov esi, esp */
  ESI = (ESP);
  /* 11d42b43 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d42b45 call dword ptr [0x11d744bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744bc))), 0x11d42b4bu);
  /* 11d42b4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42b4e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42b50 call 0x11d44070 */
  push32(0x11d42b55u); f_11d44070();
  /* 11d42b55 mov esi, esp */
  ESI = (ESP);
  /* 11d42b57 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d42b59 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11d42b5b call dword ptr [0x11d74464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74464))), 0x11d42b61u);
  /* 11d42b61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42b64 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42b66 call 0x11d44070 */
  push32(0x11d42b6bu); f_11d44070();
L_11d42b6b:;
  /* 11d42b6b mov esi, esp */
  ESI = (ESP);
  /* 11d42b6d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11d42b6f call dword ptr [0x11d74460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74460))), 0x11d42b75u);
  /* 11d42b75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42b78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42b7a call 0x11d44070 */
  push32(0x11d42b7fu); f_11d44070();
  /* 11d42b7f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d42b84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d42b86 je 0x11d42be0 */
  if (C.zf) goto L_11d42be0;
  /* 11d42b88 mov esi, esp */
  ESI = (ESP);
  /* 11d42b8a push 0x11d71438 */
  push32((uint32_t)(0x11d71438u));
  /* 11d42b8f call dword ptr [0x11d744ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744ac))), 0x11d42b95u);
  /* 11d42b95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42b98 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42b9a call 0x11d44070 */
  push32(0x11d42b9fu); f_11d44070();
  /* 11d42b9f cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42ba2 jge 0x11d42be0 */
  if ((C.sf==C.of)) goto L_11d42be0;
  /* 11d42ba4 mov esi, esp */
  ESI = (ESP);
  /* 11d42ba6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d42ba8 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11d42baa call dword ptr [0x11d74464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74464))), 0x11d42bb0u);
  /* 11d42bb0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42bb3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42bb5 call 0x11d44070 */
  push32(0x11d42bbau); f_11d44070();
  /* 11d42bba mov esi, esp */
  ESI = (ESP);
  /* 11d42bbc push 0x11d6c358 */
  push32((uint32_t)(0x11d6c358u));
  /* 11d42bc1 call dword ptr [0x11d744a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744a0))), 0x11d42bc7u);
  /* 11d42bc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42bca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42bcc call 0x11d44070 */
  push32(0x11d42bd1u); f_11d44070();
  /* 11d42bd1 mov esi, esp */
  ESI = (ESP);
  /* 11d42bd3 call dword ptr [0x11d744d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744d0))), 0x11d42bd9u);
  /* 11d42bd9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42bdb call 0x11d44070 */
  push32(0x11d42be0u); f_11d44070();
L_11d42be0:;
  /* 11d42be0 mov esi, esp */
  ESI = (ESP);
  /* 11d42be2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d42be4 call dword ptr [0x11d7449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7449c))), 0x11d42beau);
  /* 11d42bea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42bed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42bef call 0x11d44070 */
  push32(0x11d42bf4u); f_11d44070();
  /* 11d42bf4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d42bf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d42bfb je 0x11d42c97 */
  if (C.zf) goto L_11d42c97;
  /* 11d42c01 mov esi, esp */
  ESI = (ESP);
  /* 11d42c03 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d42c05 call dword ptr [0x11d74460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74460))), 0x11d42c0bu);
  /* 11d42c0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42c0e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42c10 call 0x11d44070 */
  push32(0x11d42c15u); f_11d44070();
  /* 11d42c15 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d42c1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d42c1c je 0x11d42c97 */
  if (C.zf) goto L_11d42c97;
  /* 11d42c1e mov esi, esp */
  ESI = (ESP);
  /* 11d42c20 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11d42c22 call dword ptr [0x11d74460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74460))), 0x11d42c28u);
  /* 11d42c28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42c2b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42c2d call 0x11d44070 */
  push32(0x11d42c32u); f_11d44070();
  /* 11d42c32 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d42c37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d42c39 je 0x11d42c97 */
  if (C.zf) goto L_11d42c97;
  /* 11d42c3b mov esi, esp */
  ESI = (ESP);
  /* 11d42c3d push 0 */
  push32((uint32_t)(0x0u));
  /* 11d42c3f push 0xe */
  push32((uint32_t)(0xeu));
  /* 11d42c41 call dword ptr [0x11d74464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74464))), 0x11d42c47u);
  /* 11d42c47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42c4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42c4c call 0x11d44070 */
  push32(0x11d42c51u); f_11d44070();
  /* 11d42c51 mov esi, esp */
  ESI = (ESP);
  /* 11d42c53 push 0x11d6c34c */
  push32((uint32_t)(0x11d6c34cu));
  /* 11d42c58 call dword ptr [0x11d744a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744a0))), 0x11d42c5eu);
  /* 11d42c5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42c61 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42c63 call 0x11d44070 */
  push32(0x11d42c68u); f_11d44070();
  /* 11d42c68 mov esi, esp */
  ESI = (ESP);
  /* 11d42c6a push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11d42c6c call dword ptr [0x11d74468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74468))), 0x11d42c72u);
  /* 11d42c72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42c75 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42c77 call 0x11d44070 */
  push32(0x11d42c7cu); f_11d44070();
  /* 11d42c7c mov esi, esp */
  ESI = (ESP);
  /* 11d42c7e push 1 */
  push32((uint32_t)(0x1u));
  /* 11d42c80 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d42c82 push 0x11d714d8 */
  push32((uint32_t)(0x11d714d8u));
  /* 11d42c87 call dword ptr [0x11d744d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744d4))), 0x11d42c8du);
  /* 11d42c8d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42c90 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42c92 call 0x11d44070 */
  push32(0x11d42c97u); f_11d44070();
L_11d42c97:;
  /* 11d42c97 mov esi, esp */
  ESI = (ESP);
  /* 11d42c99 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11d42c9b call dword ptr [0x11d74460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74460))), 0x11d42ca1u);
  /* 11d42ca1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42ca4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42ca6 call 0x11d44070 */
  push32(0x11d42cabu); f_11d44070();
  /* 11d42cab and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d42cb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d42cb2 je 0x11d42d42 */
  if (C.zf) goto L_11d42d42;
  /* 11d42cb8 mov esi, esp */
  ESI = (ESP);
  /* 11d42cba push 0x11d71420 */
  push32((uint32_t)(0x11d71420u));
  /* 11d42cbf call dword ptr [0x11d744ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744ac))), 0x11d42cc5u);
  /* 11d42cc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42cc8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42cca call 0x11d44070 */
  push32(0x11d42ccfu); f_11d44070();
  /* 11d42ccf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d42cd1 jne 0x11d42d42 */
  if (!C.zf) goto L_11d42d42;
  /* 11d42cd3 mov esi, esp */
  ESI = (ESP);
  /* 11d42cd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d42cd7 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11d42cd9 call dword ptr [0x11d74464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74464))), 0x11d42cdfu);
  /* 11d42cdf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42ce2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42ce4 call 0x11d44070 */
  push32(0x11d42ce9u); f_11d44070();
  /* 11d42ce9 mov esi, esp */
  ESI = (ESP);
  /* 11d42ceb push 3 */
  push32((uint32_t)(0x3u));
  /* 11d42ced push 0 */
  push32((uint32_t)(0x0u));
  /* 11d42cef call dword ptr [0x11d744d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744d8))), 0x11d42cf5u);
  /* 11d42cf5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42cf8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42cfa call 0x11d44070 */
  push32(0x11d42cffu); f_11d44070();
  /* 11d42cff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d42d01 jle 0x11d42d1c */
  if ((C.zf||C.sf!=C.of)) goto L_11d42d1c;
  /* 11d42d03 mov esi, esp */
  ESI = (ESP);
  /* 11d42d05 push 0x11d6c344 */
  push32((uint32_t)(0x11d6c344u));
  /* 11d42d0a call dword ptr [0x11d744a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744a0))), 0x11d42d10u);
  /* 11d42d10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42d13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42d15 call 0x11d44070 */
  push32(0x11d42d1au); f_11d44070();
  /* 11d42d1a jmp 0x11d42d33 */
  goto L_11d42d33;
L_11d42d1c:;
  /* 11d42d1c mov esi, esp */
  ESI = (ESP);
  /* 11d42d1e push 0x11d6c338 */
  push32((uint32_t)(0x11d6c338u));
  /* 11d42d23 call dword ptr [0x11d744a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744a0))), 0x11d42d29u);
  /* 11d42d29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42d2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42d2e call 0x11d44070 */
  push32(0x11d42d33u); f_11d44070();
L_11d42d33:;
  /* 11d42d33 mov esi, esp */
  ESI = (ESP);
  /* 11d42d35 call dword ptr [0x11d744d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744d0))), 0x11d42d3bu);
  /* 11d42d3b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42d3d call 0x11d44070 */
  push32(0x11d42d42u); f_11d44070();
L_11d42d42:;
  /* 11d42d42 mov esi, esp */
  ESI = (ESP);
  /* 11d42d44 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d42d46 call dword ptr [0x11d74460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74460))), 0x11d42d4cu);
  /* 11d42d4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42d4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42d51 call 0x11d44070 */
  push32(0x11d42d56u); f_11d44070();
  /* 11d42d56 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d42d5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d42d5d jne 0x11d42df6 */
  if (!C.zf) goto L_11d42df6;
  /* 11d42d63 mov esi, esp */
  ESI = (ESP);
  /* 11d42d65 push 7 */
  push32((uint32_t)(0x7u));
  /* 11d42d67 call dword ptr [0x11d74460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74460))), 0x11d42d6du);
  /* 11d42d6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42d70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42d72 call 0x11d44070 */
  push32(0x11d42d77u); f_11d44070();
  /* 11d42d77 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d42d7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d42d7e jne 0x11d42df6 */
  if (!C.zf) goto L_11d42df6;
  /* 11d42d80 mov esi, esp */
  ESI = (ESP);
  /* 11d42d82 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11d42d84 call dword ptr [0x11d74460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74460))), 0x11d42d8au);
  /* 11d42d8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42d8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42d8f call 0x11d44070 */
  push32(0x11d42d94u); f_11d44070();
  /* 11d42d94 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d42d99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d42d9b je 0x11d42df6 */
  if (C.zf) goto L_11d42df6;
  /* 11d42d9d mov esi, esp */
  ESI = (ESP);
  /* 11d42d9f push 8 */
  push32((uint32_t)(0x8u));
  /* 11d42da1 call dword ptr [0x11d74460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74460))), 0x11d42da7u);
  /* 11d42da7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42daa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42dac call 0x11d44070 */
  push32(0x11d42db1u); f_11d44070();
  /* 11d42db1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d42db6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d42db8 jne 0x11d42df6 */
  if (!C.zf) goto L_11d42df6;
  /* 11d42dba mov esi, esp */
  ESI = (ESP);
  /* 11d42dbc push 0 */
  push32((uint32_t)(0x0u));
  /* 11d42dbe push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11d42dc0 call dword ptr [0x11d74464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74464))), 0x11d42dc6u);
  /* 11d42dc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42dc9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42dcb call 0x11d44070 */
  push32(0x11d42dd0u); f_11d44070();
  /* 11d42dd0 mov esi, esp */
  ESI = (ESP);
  /* 11d42dd2 push 0x11d6c330 */
  push32((uint32_t)(0x11d6c330u));
  /* 11d42dd7 call dword ptr [0x11d744a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744a0))), 0x11d42dddu);
  /* 11d42ddd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42de0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42de2 call 0x11d44070 */
  push32(0x11d42de7u); f_11d44070();
  /* 11d42de7 mov esi, esp */
  ESI = (ESP);
  /* 11d42de9 call dword ptr [0x11d744dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744dc))), 0x11d42defu);
  /* 11d42def cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42df1 call 0x11d44070 */
  push32(0x11d42df6u); f_11d44070();
L_11d42df6:;
  /* 11d42df6 mov esi, esp */
  ESI = (ESP);
  /* 11d42df8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d42dfa call dword ptr [0x11d74460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74460))), 0x11d42e00u);
  /* 11d42e00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42e03 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42e05 call 0x11d44070 */
  push32(0x11d42e0au); f_11d44070();
  /* 11d42e0a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d42e0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d42e11 jne 0x11d42e9c */
  if (!C.zf) goto L_11d42e9c;
  /* 11d42e17 mov esi, esp */
  ESI = (ESP);
  /* 11d42e19 push 0x11d71450 */
  push32((uint32_t)(0x11d71450u));
  /* 11d42e1e push 0x11d71550 */
  push32((uint32_t)(0x11d71550u));
  /* 11d42e23 call dword ptr [0x11d744e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744e0))), 0x11d42e29u);
  /* 11d42e29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42e2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42e2e call 0x11d44070 */
  push32(0x11d42e33u); f_11d44070();
  /* 11d42e33 mov esi, eax */
  ESI = (EAX);
  /* 11d42e35 mov edi, esp */
  EDI = (ESP);
  /* 11d42e37 push 0x11d71450 */
  push32((uint32_t)(0x11d71450u));
  /* 11d42e3c call dword ptr [0x11d744ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744ac))), 0x11d42e42u);
  /* 11d42e42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42e45 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42e47 call 0x11d44070 */
  push32(0x11d42e4cu); f_11d44070();
  /* 11d42e4c cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42e4e jge 0x11d42e9c */
  if ((C.sf==C.of)) goto L_11d42e9c;
  /* 11d42e50 mov esi, esp */
  ESI = (ESP);
  /* 11d42e52 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d42e54 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d42e56 call dword ptr [0x11d74464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74464))), 0x11d42e5cu);
  /* 11d42e5c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42e5f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42e61 call 0x11d44070 */
  push32(0x11d42e66u); f_11d44070();
  /* 11d42e66 mov esi, esp */
  ESI = (ESP);
  /* 11d42e68 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d42e6a push 0x11d71450 */
  push32((uint32_t)(0x11d71450u));
  /* 11d42e6f call dword ptr [0x11d7447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7447c))), 0x11d42e75u);
  /* 11d42e75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42e78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42e7a call 0x11d44070 */
  push32(0x11d42e7fu); f_11d44070();
  /* 11d42e7f mov esi, esp */
  ESI = (ESP);
  /* 11d42e81 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d42e83 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11d42e85 push 0x11d715b0 */
  push32((uint32_t)(0x11d715b0u));
  /* 11d42e8a push 5 */
  push32((uint32_t)(0x5u));
  /* 11d42e8c call dword ptr [0x11d744e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744e4))), 0x11d42e92u);
  /* 11d42e92 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42e95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42e97 call 0x11d44070 */
  push32(0x11d42e9cu); f_11d44070();
L_11d42e9c:;
  /* 11d42e9c mov esi, esp */
  ESI = (ESP);
  /* 11d42e9e push 1 */
  push32((uint32_t)(0x1u));
  /* 11d42ea0 call dword ptr [0x11d74460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74460))), 0x11d42ea6u);
  /* 11d42ea6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42ea9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42eab call 0x11d44070 */
  push32(0x11d42eb0u); f_11d44070();
  /* 11d42eb0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d42eb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d42eb7 je 0x11d42f40 */
  if (C.zf) goto L_11d42f40;
  /* 11d42ebd mov esi, esp */
  ESI = (ESP);
  /* 11d42ebf push 0x11d71450 */
  push32((uint32_t)(0x11d71450u));
  /* 11d42ec4 push 0x11d71550 */
  push32((uint32_t)(0x11d71550u));
  /* 11d42ec9 call dword ptr [0x11d744e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744e0))), 0x11d42ecfu);
  /* 11d42ecf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42ed2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42ed4 call 0x11d44070 */
  push32(0x11d42ed9u); f_11d44070();
  /* 11d42ed9 mov esi, eax */
  ESI = (EAX);
  /* 11d42edb mov edi, esp */
  EDI = (ESP);
  /* 11d42edd push 0x11d71450 */
  push32((uint32_t)(0x11d71450u));
  /* 11d42ee2 call dword ptr [0x11d744ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744ac))), 0x11d42ee8u);
  /* 11d42ee8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42eeb cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42eed call 0x11d44070 */
  push32(0x11d42ef2u); f_11d44070();
  /* 11d42ef2 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42ef4 jne 0x11d42f40 */
  if (!C.zf) goto L_11d42f40;
  /* 11d42ef6 mov esi, esp */
  ESI = (ESP);
  /* 11d42ef8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d42efa push 1 */
  push32((uint32_t)(0x1u));
  /* 11d42efc call dword ptr [0x11d74464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74464))), 0x11d42f02u);
  /* 11d42f02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42f05 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42f07 call 0x11d44070 */
  push32(0x11d42f0cu); f_11d44070();
  /* 11d42f0c mov esi, esp */
  ESI = (ESP);
  /* 11d42f0e push 0 */
  push32((uint32_t)(0x0u));
  /* 11d42f10 push 0x11d71450 */
  push32((uint32_t)(0x11d71450u));
  /* 11d42f15 call dword ptr [0x11d7447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7447c))), 0x11d42f1bu);
  /* 11d42f1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42f1e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42f20 call 0x11d44070 */
  push32(0x11d42f25u); f_11d44070();
  /* 11d42f25 mov esi, esp */
  ESI = (ESP);
  /* 11d42f27 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d42f29 push 0x11d715a8 */
  push32((uint32_t)(0x11d715a8u));
  /* 11d42f2e push 5 */
  push32((uint32_t)(0x5u));
  /* 11d42f30 call dword ptr [0x11d744e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744e8))), 0x11d42f36u);
  /* 11d42f36 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42f39 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42f3b call 0x11d44070 */
  push32(0x11d42f40u); f_11d44070();
L_11d42f40:;
  /* 11d42f40 mov esi, esp */
  ESI = (ESP);
  /* 11d42f42 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d42f44 call dword ptr [0x11d74460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74460))), 0x11d42f4au);
  /* 11d42f4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42f4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42f4f call 0x11d44070 */
  push32(0x11d42f54u); f_11d44070();
  /* 11d42f54 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d42f59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d42f5b je 0x11d4304a */
  if (C.zf) goto L_11d4304a;
  /* 11d42f61 mov esi, esp */
  ESI = (ESP);
  /* 11d42f63 push 0x11d71450 */
  push32((uint32_t)(0x11d71450u));
  /* 11d42f68 call dword ptr [0x11d744ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744ac))), 0x11d42f6eu);
  /* 11d42f6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42f71 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42f73 call 0x11d44070 */
  push32(0x11d42f78u); f_11d44070();
  /* 11d42f78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d42f7a jne 0x11d4304a */
  if (!C.zf) goto L_11d4304a;
  /* 11d42f80 mov esi, esp */
  ESI = (ESP);
  /* 11d42f82 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d42f84 push 0x11d71550 */
  push32((uint32_t)(0x11d71550u));
  /* 11d42f89 call dword ptr [0x11d744ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744ec))), 0x11d42f8fu);
  /* 11d42f8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42f92 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42f94 call 0x11d44070 */
  push32(0x11d42f99u); f_11d44070();
  /* 11d42f99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d42f9b jle 0x11d4304a */
  if ((C.zf||C.sf!=C.of)) goto L_11d4304a;
  /* 11d42fa1 mov esi, esp */
  ESI = (ESP);
  /* 11d42fa3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d42fa5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d42fa7 call dword ptr [0x11d74464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74464))), 0x11d42fadu);
  /* 11d42fad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42fb0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42fb2 call 0x11d44070 */
  push32(0x11d42fb7u); f_11d44070();
  /* 11d42fb7 mov esi, esp */
  ESI = (ESP);
  /* 11d42fb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d42fbb call dword ptr [0x11d74488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74488))), 0x11d42fc1u);
  /* 11d42fc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42fc4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42fc6 call 0x11d44070 */
  push32(0x11d42fcbu); f_11d44070();
  /* 11d42fcb imul eax, eax, 0x32 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x32u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d42fce mov ecx, 0x258 */
  ECX = (0x258u);
  /* 11d42fd3 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d42fd5 mov esi, esp */
  ESI = (ESP);
  /* 11d42fd7 push ecx */
  push32((uint32_t)(ECX));
  /* 11d42fd8 push 0x11d6c328 */
  push32((uint32_t)(0x11d6c328u));
  /* 11d42fdd call dword ptr [0x11d744f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744f0))), 0x11d42fe3u);
  /* 11d42fe3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42fe6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42fe8 call 0x11d44070 */
  push32(0x11d42fedu); f_11d44070();
  /* 11d42fed mov esi, esp */
  ESI = (ESP);
  /* 11d42fef push 0 */
  push32((uint32_t)(0x0u));
  /* 11d42ff1 call dword ptr [0x11d74488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74488))), 0x11d42ff7u);
  /* 11d42ff7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d42ffa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d42ffc call 0x11d44070 */
  push32(0x11d43001u); f_11d44070();
  /* 11d43001 imul eax, eax, 0x32 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x32u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d43004 mov edx, 0x258 */
  EDX = (0x258u);
  /* 11d43009 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4300b mov esi, esp */
  ESI = (ESP);
  /* 11d4300d push edx */
  push32((uint32_t)(EDX));
  /* 11d4300e push 1 */
  push32((uint32_t)(0x1u));
  /* 11d43010 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d43012 call dword ptr [0x11d744f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744f4))), 0x11d43018u);
  /* 11d43018 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4301b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4301d call 0x11d44070 */
  push32(0x11d43022u); f_11d44070();
  /* 11d43022 mov esi, esp */
  ESI = (ESP);
  /* 11d43024 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11d43026 call dword ptr [0x11d7446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7446c))), 0x11d4302cu);
  /* 11d4302c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4302f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d43031 call 0x11d44070 */
  push32(0x11d43036u); f_11d44070();
  /* 11d43036 mov esi, esp */
  ESI = (ESP);
  /* 11d43038 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11d4303a call dword ptr [0x11d74468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74468))), 0x11d43040u);
  /* 11d43040 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d43043 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d43045 call 0x11d44070 */
  push32(0x11d4304au); f_11d44070();
L_11d4304a:;
  /* 11d4304a mov esi, esp */
  ESI = (ESP);
  /* 11d4304c push 3 */
  push32((uint32_t)(0x3u));
  /* 11d4304e call dword ptr [0x11d74460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74460))), 0x11d43054u);
  /* 11d43054 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d43057 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d43059 call 0x11d44070 */
  push32(0x11d4305eu); f_11d44070();
  /* 11d4305e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d43063 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d43065 jne 0x11d430f0 */
  if (!C.zf) goto L_11d430f0;
  /* 11d4306b mov esi, esp */
  ESI = (ESP);
  /* 11d4306d push 0x11d71448 */
  push32((uint32_t)(0x11d71448u));
  /* 11d43072 push 0x11d71558 */
  push32((uint32_t)(0x11d71558u));
  /* 11d43077 call dword ptr [0x11d744e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744e0))), 0x11d4307du);
  /* 11d4307d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d43080 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d43082 call 0x11d44070 */
  push32(0x11d43087u); f_11d44070();
  /* 11d43087 mov esi, eax */
  ESI = (EAX);
  /* 11d43089 mov edi, esp */
  EDI = (ESP);
  /* 11d4308b push 0x11d71448 */
  push32((uint32_t)(0x11d71448u));
  /* 11d43090 call dword ptr [0x11d744ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744ac))), 0x11d43096u);
  /* 11d43096 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d43099 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4309b call 0x11d44070 */
  push32(0x11d430a0u); f_11d44070();
  /* 11d430a0 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d430a2 jge 0x11d430f0 */
  if ((C.sf==C.of)) goto L_11d430f0;
  /* 11d430a4 mov esi, esp */
  ESI = (ESP);
  /* 11d430a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d430a8 push 3 */
  push32((uint32_t)(0x3u));
  /* 11d430aa call dword ptr [0x11d74464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74464))), 0x11d430b0u);
  /* 11d430b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d430b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d430b5 call 0x11d44070 */
  push32(0x11d430bau); f_11d44070();
  /* 11d430ba mov esi, esp */
  ESI = (ESP);
  /* 11d430bc push 0 */
  push32((uint32_t)(0x0u));
  /* 11d430be push 0x11d71448 */
  push32((uint32_t)(0x11d71448u));
  /* 11d430c3 call dword ptr [0x11d7447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7447c))), 0x11d430c9u);
  /* 11d430c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d430cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d430ce call 0x11d44070 */
  push32(0x11d430d3u); f_11d44070();
  /* 11d430d3 mov esi, esp */
  ESI = (ESP);
  /* 11d430d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d430d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d430d9 push 0x11d715c0 */
  push32((uint32_t)(0x11d715c0u));
  /* 11d430de push 5 */
  push32((uint32_t)(0x5u));
  /* 11d430e0 call dword ptr [0x11d744e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744e4))), 0x11d430e6u);
  /* 11d430e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d430e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d430eb call 0x11d44070 */
  push32(0x11d430f0u); f_11d44070();
L_11d430f0:;
  /* 11d430f0 mov esi, esp */
  ESI = (ESP);
  /* 11d430f2 push 3 */
  push32((uint32_t)(0x3u));
  /* 11d430f4 call dword ptr [0x11d74460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74460))), 0x11d430fau);
  /* 11d430fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d430fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d430ff call 0x11d44070 */
  push32(0x11d43104u); f_11d44070();
  /* 11d43104 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d43109 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4310b je 0x11d43194 */
  if (C.zf) goto L_11d43194;
  /* 11d43111 mov esi, esp */
  ESI = (ESP);
  /* 11d43113 push 0x11d71448 */
  push32((uint32_t)(0x11d71448u));
  /* 11d43118 push 0x11d71558 */
  push32((uint32_t)(0x11d71558u));
  /* 11d4311d call dword ptr [0x11d744e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744e0))), 0x11d43123u);
  /* 11d43123 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d43126 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d43128 call 0x11d44070 */
  push32(0x11d4312du); f_11d44070();
  /* 11d4312d mov esi, eax */
  ESI = (EAX);
  /* 11d4312f mov edi, esp */
  EDI = (ESP);
  /* 11d43131 push 0x11d71448 */
  push32((uint32_t)(0x11d71448u));
  /* 11d43136 call dword ptr [0x11d744ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744ac))), 0x11d4313cu);
  /* 11d4313c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4313f cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d43141 call 0x11d44070 */
  push32(0x11d43146u); f_11d44070();
  /* 11d43146 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d43148 jne 0x11d43194 */
  if (!C.zf) goto L_11d43194;
  /* 11d4314a mov esi, esp */
  ESI = (ESP);
  /* 11d4314c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4314e push 3 */
  push32((uint32_t)(0x3u));
  /* 11d43150 call dword ptr [0x11d74464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74464))), 0x11d43156u);
  /* 11d43156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d43159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4315b call 0x11d44070 */
  push32(0x11d43160u); f_11d44070();
  /* 11d43160 mov esi, esp */
  ESI = (ESP);
  /* 11d43162 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d43164 push 0x11d71448 */
  push32((uint32_t)(0x11d71448u));
  /* 11d43169 call dword ptr [0x11d7447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7447c))), 0x11d4316fu);
  /* 11d4316f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d43172 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d43174 call 0x11d44070 */
  push32(0x11d43179u); f_11d44070();
  /* 11d43179 mov esi, esp */
  ESI = (ESP);
  /* 11d4317b push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4317d push 0x11d715b8 */
  push32((uint32_t)(0x11d715b8u));
  /* 11d43182 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d43184 call dword ptr [0x11d744e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744e8))), 0x11d4318au);
  /* 11d4318a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4318d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4318f call 0x11d44070 */
  push32(0x11d43194u); f_11d44070();
L_11d43194:;
  /* 11d43194 mov esi, esp */
  ESI = (ESP);
  /* 11d43196 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d43198 call dword ptr [0x11d74460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74460))), 0x11d4319eu);
  /* 11d4319e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d431a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d431a3 call 0x11d44070 */
  push32(0x11d431a8u); f_11d44070();
  /* 11d431a8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d431ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d431af je 0x11d43276 */
  if (C.zf) goto L_11d43276;
  /* 11d431b5 mov esi, esp */
  ESI = (ESP);
  /* 11d431b7 push 0x11d71448 */
  push32((uint32_t)(0x11d71448u));
  /* 11d431bc call dword ptr [0x11d744ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744ac))), 0x11d431c2u);
  /* 11d431c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d431c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d431c7 call 0x11d44070 */
  push32(0x11d431ccu); f_11d44070();
  /* 11d431cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d431ce jne 0x11d43276 */
  if (!C.zf) goto L_11d43276;
  /* 11d431d4 mov esi, esp */
  ESI = (ESP);
  /* 11d431d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d431d8 push 0x11d71558 */
  push32((uint32_t)(0x11d71558u));
  /* 11d431dd call dword ptr [0x11d744ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744ec))), 0x11d431e3u);
  /* 11d431e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d431e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d431e8 call 0x11d44070 */
  push32(0x11d431edu); f_11d44070();
  /* 11d431ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d431ef jle 0x11d43276 */
  if ((C.zf||C.sf!=C.of)) goto L_11d43276;
  /* 11d431f5 mov esi, esp */
  ESI = (ESP);
  /* 11d431f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d431f9 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d431fb call dword ptr [0x11d74464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74464))), 0x11d43201u);
  /* 11d43201 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d43204 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d43206 call 0x11d44070 */
  push32(0x11d4320bu); f_11d44070();
  /* 11d4320b mov esi, esp */
  ESI = (ESP);
  /* 11d4320d push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4320f call dword ptr [0x11d74488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74488))), 0x11d43215u);
  /* 11d43215 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d43218 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4321a call 0x11d44070 */
  push32(0x11d4321fu); f_11d44070();
  /* 11d4321f imul eax, eax, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x64u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d43222 mov ecx, 0x3e8 */
  ECX = (0x3e8u);
  /* 11d43227 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d43229 mov esi, esp */
  ESI = (ESP);
  /* 11d4322b push ecx */
  push32((uint32_t)(ECX));
  /* 11d4322c push 0x11d6c320 */
  push32((uint32_t)(0x11d6c320u));
  /* 11d43231 call dword ptr [0x11d744f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744f0))), 0x11d43237u);
  /* 11d43237 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4323a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4323c call 0x11d44070 */
  push32(0x11d43241u); f_11d44070();
  /* 11d43241 mov esi, esp */
  ESI = (ESP);
  /* 11d43243 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d43245 call dword ptr [0x11d74488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74488))), 0x11d4324bu);
  /* 11d4324b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4324e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d43250 call 0x11d44070 */
  push32(0x11d43255u); f_11d44070();
  /* 11d43255 imul eax, eax, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x64u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d43258 mov edx, 0x3e8 */
  EDX = (0x3e8u);
  /* 11d4325d sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4325f mov esi, esp */
  ESI = (ESP);
  /* 11d43261 push edx */
  push32((uint32_t)(EDX));
  /* 11d43262 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d43264 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d43266 call dword ptr [0x11d744f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744f4))), 0x11d4326cu);
  /* 11d4326c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4326f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d43271 call 0x11d44070 */
  push32(0x11d43276u); f_11d44070();
L_11d43276:;
  /* 11d43276 mov esi, esp */
  ESI = (ESP);
  /* 11d43278 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11d4327a call dword ptr [0x11d74460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74460))), 0x11d43280u);
  /* 11d43280 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d43283 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d43285 call 0x11d44070 */
  push32(0x11d4328au); f_11d44070();
  /* 11d4328a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d4328f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d43291 je 0x11d432f3 */
  if (C.zf) goto L_11d432f3;
  /* 11d43293 mov esi, esp */
  ESI = (ESP);
  /* 11d43295 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d43297 push 0x11d71418 */
  push32((uint32_t)(0x11d71418u));
  /* 11d4329c call dword ptr [0x11d744ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744ec))), 0x11d432a2u);
  /* 11d432a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d432a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d432a7 call 0x11d44070 */
  push32(0x11d432acu); f_11d44070();
  /* 11d432ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d432ae jle 0x11d432f3 */
  if ((C.zf||C.sf!=C.of)) goto L_11d432f3;
  /* 11d432b0 mov esi, esp */
  ESI = (ESP);
  /* 11d432b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d432b4 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11d432b6 call dword ptr [0x11d74464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74464))), 0x11d432bcu);
  /* 11d432bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d432bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d432c1 call 0x11d44070 */
  push32(0x11d432c6u); f_11d44070();
  /* 11d432c6 mov esi, esp */
  ESI = (ESP);
  /* 11d432c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d432ca push 0x11d715a0 */
  push32((uint32_t)(0x11d715a0u));
  /* 11d432cf call dword ptr [0x11d7447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7447c))), 0x11d432d5u);
  /* 11d432d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d432d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d432da call 0x11d44070 */
  push32(0x11d432dfu); f_11d44070();
  /* 11d432df mov esi, esp */
  ESI = (ESP);
  /* 11d432e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d432e3 call dword ptr [0x11d744f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744f8))), 0x11d432e9u);
  /* 11d432e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d432ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d432ee call 0x11d44070 */
  push32(0x11d432f3u); f_11d44070();
L_11d432f3:;
  /* 11d432f3 mov esi, esp */
  ESI = (ESP);
  /* 11d432f5 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11d432f7 call dword ptr [0x11d74460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74460))), 0x11d432fdu);
  /* 11d432fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d43300 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d43302 call 0x11d44070 */
  push32(0x11d43307u); f_11d44070();
  /* 11d43307 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d4330c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4330e jne 0x11d43370 */
  if (!C.zf) goto L_11d43370;
  /* 11d43310 mov esi, esp */
  ESI = (ESP);
  /* 11d43312 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d43314 push 0x11d71418 */
  push32((uint32_t)(0x11d71418u));
  /* 11d43319 call dword ptr [0x11d744ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744ec))), 0x11d4331fu);
  /* 11d4331f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d43322 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d43324 call 0x11d44070 */
  push32(0x11d43329u); f_11d44070();
  /* 11d43329 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4332b jne 0x11d43370 */
  if (!C.zf) goto L_11d43370;
  /* 11d4332d mov esi, esp */
  ESI = (ESP);
  /* 11d4332f push 1 */
  push32((uint32_t)(0x1u));
  /* 11d43331 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11d43333 call dword ptr [0x11d74464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74464))), 0x11d43339u);
  /* 11d43339 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4333c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4333e call 0x11d44070 */
  push32(0x11d43343u); f_11d44070();
  /* 11d43343 mov esi, esp */
  ESI = (ESP);
  /* 11d43345 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d43347 push 0x11d715a0 */
  push32((uint32_t)(0x11d715a0u));
  /* 11d4334c call dword ptr [0x11d7447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7447c))), 0x11d43352u);
  /* 11d43352 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d43355 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d43357 call 0x11d44070 */
  push32(0x11d4335cu); f_11d44070();
  /* 11d4335c mov esi, esp */
  ESI = (ESP);
  /* 11d4335e push 1 */
  push32((uint32_t)(0x1u));
  /* 11d43360 call dword ptr [0x11d744fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744fc))), 0x11d43366u);
  /* 11d43366 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d43369 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4336b call 0x11d44070 */
  push32(0x11d43370u); f_11d44070();
L_11d43370:;
  /* 11d43370 mov esi, esp */
  ESI = (ESP);
  /* 11d43372 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d43374 call dword ptr [0x11d74460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74460))), 0x11d4337au);
  /* 11d4337a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4337d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4337f call 0x11d44070 */
  push32(0x11d43384u); f_11d44070();
  /* 11d43384 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d43389 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4338b je 0x11d434b1 */
  if (C.zf) goto L_11d434b1;
  /* 11d43391 mov esi, esp */
  ESI = (ESP);
  /* 11d43393 push 0x11d71420 */
  push32((uint32_t)(0x11d71420u));
  /* 11d43398 push 0x11d714d8 */
  push32((uint32_t)(0x11d714d8u));
  /* 11d4339d call dword ptr [0x11d744e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744e0))), 0x11d433a3u);
  /* 11d433a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d433a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d433a8 call 0x11d44070 */
  push32(0x11d433adu); f_11d44070();
  /* 11d433ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d433af jle 0x11d434b1 */
  if ((C.zf||C.sf!=C.of)) goto L_11d434b1;
  /* 11d433b5 mov esi, esp */
  ESI = (ESP);
  /* 11d433b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d433b9 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d433bb call dword ptr [0x11d74464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74464))), 0x11d433c1u);
  /* 11d433c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d433c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d433c6 call 0x11d44070 */
  push32(0x11d433cbu); f_11d44070();
  /* 11d433cb mov esi, esp */
  ESI = (ESP);
  /* 11d433cd push 0x11d6c318 */
  push32((uint32_t)(0x11d6c318u));
  /* 11d433d2 call dword ptr [0x11d744a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744a0))), 0x11d433d8u);
  /* 11d433d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d433db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d433dd call 0x11d44070 */
  push32(0x11d433e2u); f_11d44070();
  /* 11d433e2 mov esi, esp */
  ESI = (ESP);
  /* 11d433e4 push 0x11d6c310 */
  push32((uint32_t)(0x11d6c310u));
  /* 11d433e9 call dword ptr [0x11d744a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744a0))), 0x11d433efu);
  /* 11d433ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d433f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d433f4 call 0x11d44070 */
  push32(0x11d433f9u); f_11d44070();
  /* 11d433f9 mov esi, esp */
  ESI = (ESP);
  /* 11d433fb push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11d433fd call dword ptr [0x11d7446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7446c))), 0x11d43403u);
  /* 11d43403 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d43406 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d43408 call 0x11d44070 */
  push32(0x11d4340du); f_11d44070();
  /* 11d4340d mov esi, esp */
  ESI = (ESP);
  /* 11d4340f push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11d43411 call dword ptr [0x11d74468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74468))), 0x11d43417u);
  /* 11d43417 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4341a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4341c call 0x11d44070 */
  push32(0x11d43421u); f_11d44070();
  /* 11d43421 mov esi, esp */
  ESI = (ESP);
  /* 11d43423 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11d43425 call dword ptr [0x11d74468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74468))), 0x11d4342bu);
  /* 11d4342b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4342e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d43430 call 0x11d44070 */
  push32(0x11d43435u); f_11d44070();
  /* 11d43435 mov esi, esp */
  ESI = (ESP);
  /* 11d43437 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d43439 push 0x11d714c8 */
  push32((uint32_t)(0x11d714c8u));
  /* 11d4343e call dword ptr [0x11d7447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7447c))), 0x11d43444u);
  /* 11d43444 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d43447 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d43449 call 0x11d44070 */
  push32(0x11d4344eu); f_11d44070();
  /* 11d4344e mov esi, esp */
  ESI = (ESP);
  /* 11d43450 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d43452 push 0x11d71458 */
  push32((uint32_t)(0x11d71458u));
  /* 11d43457 call dword ptr [0x11d7447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7447c))), 0x11d4345du);
  /* 11d4345d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d43460 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d43462 call 0x11d44070 */
  push32(0x11d43467u); f_11d44070();
  /* 11d43467 mov esi, esp */
  ESI = (ESP);
  /* 11d43469 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4346b push 1 */
  push32((uint32_t)(0x1u));
  /* 11d4346d call dword ptr [0x11d744a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744a4))), 0x11d43473u);
  /* 11d43473 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d43476 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d43478 call 0x11d44070 */
  push32(0x11d4347du); f_11d44070();
  /* 11d4347d mov esi, esp */
  ESI = (ESP);
  /* 11d4347f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d43481 call dword ptr [0x11d74488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74488))), 0x11d43487u);
  /* 11d43487 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4348a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4348c call 0x11d44070 */
  push32(0x11d43491u); f_11d44070();
  /* 11d43491 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d43497 add eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4349c mov esi, esp */
  ESI = (ESP);
  /* 11d4349e push eax */
  push32((uint32_t)(EAX));
  /* 11d4349f push 2 */
  push32((uint32_t)(0x2u));
  /* 11d434a1 call dword ptr [0x11d74484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74484))), 0x11d434a7u);
  /* 11d434a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d434aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d434ac call 0x11d44070 */
  push32(0x11d434b1u); f_11d44070();
L_11d434b1:;
  /* 11d434b1 mov esi, esp */
  ESI = (ESP);
  /* 11d434b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d434b5 call dword ptr [0x11d7449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7449c))), 0x11d434bbu);
  /* 11d434bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d434be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d434c0 call 0x11d44070 */
  push32(0x11d434c5u); f_11d44070();
  /* 11d434c5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d434ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d434cc je 0x11d43514 */
  if (C.zf) goto L_11d43514;
  /* 11d434ce mov esi, esp */
  ESI = (ESP);
  /* 11d434d0 push 0x11d6c308 */
  push32((uint32_t)(0x11d6c308u));
  /* 11d434d5 call dword ptr [0x11d744a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744a0))), 0x11d434dbu);
  /* 11d434db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d434de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d434e0 call 0x11d44070 */
  push32(0x11d434e5u); f_11d44070();
  /* 11d434e5 mov esi, esp */
  ESI = (ESP);
  /* 11d434e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d434e9 push 0x11d71478 */
  push32((uint32_t)(0x11d71478u));
  /* 11d434ee call dword ptr [0x11d7447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7447c))), 0x11d434f4u);
  /* 11d434f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d434f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d434f9 call 0x11d44070 */
  push32(0x11d434feu); f_11d44070();
  /* 11d434fe mov esi, esp */
  ESI = (ESP);
  /* 11d43500 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d43502 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d43504 call dword ptr [0x11d744a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744a4))), 0x11d4350au);
  /* 11d4350a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4350d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4350f call 0x11d44070 */
  push32(0x11d43514u); f_11d44070();
L_11d43514:;
  /* 11d43514 mov esi, esp */
  ESI = (ESP);
  /* 11d43516 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d43518 call dword ptr [0x11d744b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744b8))), 0x11d4351eu);
  /* 11d4351e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d43521 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d43523 call 0x11d44070 */
  push32(0x11d43528u); f_11d44070();
  /* 11d43528 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d4352d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4352f je 0x11d43597 */
  if (C.zf) goto L_11d43597;
  /* 11d43531 mov esi, esp */
  ESI = (ESP);
  /* 11d43533 push 0x11d713f8 */
  push32((uint32_t)(0x11d713f8u));
  /* 11d43538 call dword ptr [0x11d744ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744ac))), 0x11d4353eu);
  /* 11d4353e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d43541 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d43543 call 0x11d44070 */
  push32(0x11d43548u); f_11d44070();
  /* 11d43548 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4354a jle 0x11d43597 */
  if ((C.zf||C.sf!=C.of)) goto L_11d43597;
  /* 11d4354c mov esi, esp */
  ESI = (ESP);
  /* 11d4354e push 0 */
  push32((uint32_t)(0x0u));
  /* 11d43550 call dword ptr [0x11d74488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74488))), 0x11d43556u);
  /* 11d43556 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d43559 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4355b call 0x11d44070 */
  push32(0x11d43560u); f_11d44070();
  /* 11d43560 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d43563 jne 0x11d43597 */
  if (!C.zf) goto L_11d43597;
  /* 11d43565 mov esi, esp */
  ESI = (ESP);
  /* 11d43567 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d43569 push 0x11d713f8 */
  push32((uint32_t)(0x11d713f8u));
  /* 11d4356e call dword ptr [0x11d7447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7447c))), 0x11d43574u);
  /* 11d43574 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d43577 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d43579 call 0x11d44070 */
  push32(0x11d4357eu); f_11d44070();
  /* 11d4357e mov esi, esp */
  ESI = (ESP);
  /* 11d43580 push 0x11d71478 */
  push32((uint32_t)(0x11d71478u));
  /* 11d43585 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d43587 call dword ptr [0x11d744b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744b0))), 0x11d4358du);
  /* 11d4358d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d43590 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d43592 call 0x11d44070 */
  push32(0x11d43597u); f_11d44070();
L_11d43597:;
  /* 11d43597 mov esi, esp */
  ESI = (ESP);
  /* 11d43599 push 6 */
  push32((uint32_t)(0x6u));
  /* 11d4359b call dword ptr [0x11d74460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74460))), 0x11d435a1u);
  /* 11d435a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d435a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d435a6 call 0x11d44070 */
  push32(0x11d435abu); f_11d44070();
  /* 11d435ab and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d435b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d435b2 je 0x11d4363b */
  if (C.zf) goto L_11d4363b;
  /* 11d435b8 mov esi, esp */
  ESI = (ESP);
  /* 11d435ba push 0x11d71478 */
  push32((uint32_t)(0x11d71478u));
  /* 11d435bf push 0x11d71490 */
  push32((uint32_t)(0x11d71490u));
  /* 11d435c4 call dword ptr [0x11d744e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744e0))), 0x11d435cau);
  /* 11d435ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d435cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d435cf call 0x11d44070 */
  push32(0x11d435d4u); f_11d44070();
  /* 11d435d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d435d6 jle 0x11d4363b */
  if ((C.zf||C.sf!=C.of)) goto L_11d4363b;
  /* 11d435d8 mov esi, esp */
  ESI = (ESP);
  /* 11d435da push 0 */
  push32((uint32_t)(0x0u));
  /* 11d435dc push 6 */
  push32((uint32_t)(0x6u));
  /* 11d435de call dword ptr [0x11d74464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74464))), 0x11d435e4u);
  /* 11d435e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d435e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d435e9 call 0x11d44070 */
  push32(0x11d435eeu); f_11d44070();
  /* 11d435ee mov esi, esp */
  ESI = (ESP);
  /* 11d435f0 push 0x11d6c300 */
  push32((uint32_t)(0x11d6c300u));
  /* 11d435f5 call dword ptr [0x11d744a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744a0))), 0x11d435fbu);
  /* 11d435fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d435fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d43600 call 0x11d44070 */
  push32(0x11d43605u); f_11d44070();
  /* 11d43605 mov esi, esp */
  ESI = (ESP);
  /* 11d43607 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d43609 push 0x11d71580 */
  push32((uint32_t)(0x11d71580u));
  /* 11d4360e push 0 */
  push32((uint32_t)(0x0u));
  /* 11d43610 call dword ptr [0x11d74524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74524))), 0x11d43616u);
  /* 11d43616 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d43619 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4361b call 0x11d44070 */
  push32(0x11d43620u); f_11d44070();
  /* 11d43620 mov esi, esp */
  ESI = (ESP);
  /* 11d43622 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d43624 push 0x11d715c8 */
  push32((uint32_t)(0x11d715c8u));
  /* 11d43629 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4362b call dword ptr [0x11d74524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74524))), 0x11d43631u);
  /* 11d43631 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d43634 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d43636 call 0x11d44070 */
  push32(0x11d4363bu); f_11d44070();
L_11d4363b:;
  /* 11d4363b mov esi, esp */
  ESI = (ESP);
  /* 11d4363d push 5 */
  push32((uint32_t)(0x5u));
  /* 11d4363f call dword ptr [0x11d74460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74460))), 0x11d43645u);
  /* 11d43645 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d43648 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4364a call 0x11d44070 */
  push32(0x11d4364fu); f_11d44070();
  /* 11d4364f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d43654 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d43656 jne 0x11d436e9 */
  if (!C.zf) goto L_11d436e9;
  /* 11d4365c mov esi, esp */
  ESI = (ESP);
  /* 11d4365e push 7 */
  push32((uint32_t)(0x7u));
  /* 11d43660 call dword ptr [0x11d74460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74460))), 0x11d43666u);
  /* 11d43666 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d43669 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4366b call 0x11d44070 */
  push32(0x11d43670u); f_11d44070();
  /* 11d43670 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d43675 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d43677 je 0x11d436e9 */
  if (C.zf) goto L_11d436e9;
  /* 11d43679 mov esi, esp */
  ESI = (ESP);
  /* 11d4367b push 0x11d714e0 */
  push32((uint32_t)(0x11d714e0u));
  /* 11d43680 call dword ptr [0x11d744ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744ac))), 0x11d43686u);
  /* 11d43686 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d43689 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4368b call 0x11d44070 */
  push32(0x11d43690u); f_11d44070();
  /* 11d43690 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d43692 jne 0x11d436e9 */
  if (!C.zf) goto L_11d436e9;
  /* 11d43694 mov esi, esp */
  ESI = (ESP);
  /* 11d43696 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d43698 push 7 */
  push32((uint32_t)(0x7u));
  /* 11d4369a call dword ptr [0x11d74464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74464))), 0x11d436a0u);
  /* 11d436a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d436a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d436a5 call 0x11d44070 */
  push32(0x11d436aau); f_11d44070();
  /* 11d436aa mov esi, esp */
  ESI = (ESP);
  /* 11d436ac push 0x11d6c2f8 */
  push32((uint32_t)(0x11d6c2f8u));
  /* 11d436b1 call dword ptr [0x11d744a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744a0))), 0x11d436b7u);
  /* 11d436b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d436ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d436bc call 0x11d44070 */
  push32(0x11d436c1u); f_11d44070();
  /* 11d436c1 mov esi, esp */
  ESI = (ESP);
  /* 11d436c3 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11d436c5 call dword ptr [0x11d7446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7446c))), 0x11d436cbu);
  /* 11d436cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d436ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d436d0 call 0x11d44070 */
  push32(0x11d436d5u); f_11d44070();
  /* 11d436d5 mov esi, esp */
  ESI = (ESP);
  /* 11d436d7 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11d436d9 call dword ptr [0x11d74468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74468))), 0x11d436dfu);
  /* 11d436df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d436e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d436e4 call 0x11d44070 */
  push32(0x11d436e9u); f_11d44070();
L_11d436e9:;
  /* 11d436e9 mov esi, esp */
  ESI = (ESP);
  /* 11d436eb push 8 */
  push32((uint32_t)(0x8u));
  /* 11d436ed call dword ptr [0x11d74460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74460))), 0x11d436f3u);
  /* 11d436f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d436f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d436f8 call 0x11d44070 */
  push32(0x11d436fdu); f_11d44070();
  /* 11d436fd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d43702 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d43704 je 0x11d43799 */
  if (C.zf) goto L_11d43799;
  /* 11d4370a mov esi, esp */
  ESI = (ESP);
  /* 11d4370c push 3 */
  push32((uint32_t)(0x3u));
  /* 11d4370e call dword ptr [0x11d74500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74500))), 0x11d43714u);
  /* 11d43714 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d43717 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d43719 call 0x11d44070 */
  push32(0x11d4371eu); f_11d44070();
  /* 11d4371e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d43723 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d43725 je 0x11d43799 */
  if (C.zf) goto L_11d43799;
  /* 11d43727 mov esi, esp */
  ESI = (ESP);
  /* 11d43729 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d4372b call dword ptr [0x11d74500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74500))), 0x11d43731u);
  /* 11d43731 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d43734 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d43736 call 0x11d44070 */
  push32(0x11d4373bu); f_11d44070();
  /* 11d4373b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d43740 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d43742 je 0x11d43799 */
  if (C.zf) goto L_11d43799;
  /* 11d43744 mov esi, esp */
  ESI = (ESP);
  /* 11d43746 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d43748 push 8 */
  push32((uint32_t)(0x8u));
  /* 11d4374a call dword ptr [0x11d74464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74464))), 0x11d43750u);
  /* 11d43750 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d43753 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d43755 call 0x11d44070 */
  push32(0x11d4375au); f_11d44070();
  /* 11d4375a mov esi, esp */
  ESI = (ESP);
  /* 11d4375c push 0x11d6c2f0 */
  push32((uint32_t)(0x11d6c2f0u));
  /* 11d43761 call dword ptr [0x11d744a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d744a0))), 0x11d43767u);
  /* 11d43767 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4376a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4376c call 0x11d44070 */
  push32(0x11d43771u); f_11d44070();
  /* 11d43771 mov esi, esp */
  ESI = (ESP);
  /* 11d43773 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11d43775 call dword ptr [0x11d7446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7446c))), 0x11d4377bu);
  /* 11d4377b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4377e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d43780 call 0x11d44070 */
  push32(0x11d43785u); f_11d44070();
  /* 11d43785 mov esi, esp */
  ESI = (ESP);
  /* 11d43787 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11d43789 call dword ptr [0x11d74468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74468))), 0x11d4378fu);
  /* 11d4378f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d43792 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d43794 call 0x11d44070 */
  push32(0x11d43799u); f_11d44070();
L_11d43799:;
  /* 11d43799 pop edi */
  EDI = (pop32());
  /* 11d4379a pop esi */
  ESI = (pop32());
  /* 11d4379b pop ebx */
  EBX = (pop32());
  /* 11d4379c add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4379f cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d437a1 call 0x11d44070 */
  push32(0x11d437a6u); f_11d44070();
  /* 11d437a6 mov esp, ebp */
  ESP = (EBP);
  /* 11d437a8 pop ebp */
  EBP = (pop32());
  /* 11d437a9 ret  */
  ESPCHK(0x11d41bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ef0 @ 0x11d43ef0 (67 bytes, 26 insns) */
void f_11d43ef0(void) {
  FTRACE(0x11d43ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d43ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d43ef1 mov ebp, esp */
  EBP = (ESP);
  /* 11d43ef3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d43ef6 push ebx */
  push32((uint32_t)(EBX));
  /* 11d43ef7 push esi */
  push32((uint32_t)(ESI));
  /* 11d43ef8 push edi */
  push32((uint32_t)(EDI));
  /* 11d43ef9 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11d43efc mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11d43f01 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11d43f06 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11d43f08 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d43f0b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d43f0e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d43f12 je 0x11d43f16 */
  if (C.zf) goto L_11d43f16;
  /* 11d43f14 jmp 0x11d43f1b */
  goto L_11d43f1b;
L_11d43f16:;
  /* 11d43f16 call 0x11d41005 */
  push32(0x11d43f1bu); f_11d41005();
L_11d43f1b:;
  /* 11d43f1b mov eax, 1 */
  EAX = (0x1u);
  /* 11d43f20 pop edi */
  EDI = (pop32());
  /* 11d43f21 pop esi */
  ESI = (pop32());
  /* 11d43f22 pop ebx */
  EBX = (pop32());
  /* 11d43f23 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d43f26 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d43f28 call 0x11d44070 */
  push32(0x11d43f2du); f_11d44070();
  /* 11d43f2d mov esp, ebp */
  ESP = (EBP);
  /* 11d43f2f pop ebp */
  EBP = (pop32());
  /* 11d43f30 ret 0xc */
  ESPCHK(0x11d43ef0u, _esp0);
  ESP += 16; return;
}

/* __chkesp @ 0x11d44070 (56 bytes, 28 insns) */
void f_11d44070(void) {
  FTRACE(0x11d44070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d44070 jne 0x11d44073 */
  if (!C.zf) goto L_11d44073;
  /* 11d44072 ret  */
  ESPCHK(0x11d44070u, _esp0);
  ESP += 4; return;
L_11d44073:;
  /* 11d44073 push ebp */
  push32((uint32_t)(EBP));
  /* 11d44074 mov ebp, esp */
  EBP = (ESP);
  /* 11d44076 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d44079 push eax */
  push32((uint32_t)(EAX));
  /* 11d4407a push edx */
  push32((uint32_t)(EDX));
  /* 11d4407b push ebx */
  push32((uint32_t)(EBX));
  /* 11d4407c push esi */
  push32((uint32_t)(ESI));
  /* 11d4407d push edi */
  push32((uint32_t)(EDI));
  /* 11d4407e push 0x11d6c3c0 */
  push32((uint32_t)(0x11d6c3c0u));
  /* 11d44083 push 0x11d6c3bc */
  push32((uint32_t)(0x11d6c3bcu));
  /* 11d44088 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11d4408a push 0x11d6c3ac */
  push32((uint32_t)(0x11d6c3acu));
  /* 11d4408f push 1 */
  push32((uint32_t)(0x1u));
  /* 11d44091 call 0x11d44440 */
  push32(0x11d44096u); f_11d44440();
  /* 11d44096 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d44099 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4409c jne 0x11d4409f */
  if (!C.zf) goto L_11d4409f;
  /* 11d4409e int3  */
  x86_unimpl("int3 @ 0x11d4409e");
L_11d4409f:;
  /* 11d4409f pop edi */
  EDI = (pop32());
  /* 11d440a0 pop esi */
  ESI = (pop32());
  /* 11d440a1 pop ebx */
  EBX = (pop32());
  /* 11d440a2 pop edx */
  EDX = (pop32());
  /* 11d440a3 pop eax */
  EAX = (pop32());
  /* 11d440a4 mov esp, ebp */
  ESP = (EBP);
  /* 11d440a6 pop ebp */
  EBP = (pop32());
  /* 11d440a7 ret  */
  ESPCHK(0x11d44070u, _esp0);
  ESP += 4; return;
}

/* FUN_100040b0 @ 0x11d440b0 (313 bytes, 78 insns) */
void f_11d440b0(void) {
  FTRACE(0x11d440b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d440b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d440b1 mov ebp, esp */
  EBP = (ESP);
  /* 11d440b3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d440b7 jne 0x11d44177 */
  if (!C.zf) goto L_11d44177;
  /* 11d440bd call dword ptr [0x11d743a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743a8))), 0x11d440c3u);
  /* 11d440c3 mov dword ptr [0x11d71654], eax */
  w32((uint32_t)(0x11d71654), (EAX));
  /* 11d440c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d440ca call 0x11d47b70 */
  push32(0x11d440cfu); f_11d47b70();
  /* 11d440cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d440d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d440d4 jne 0x11d440dd */
  if (!C.zf) goto L_11d440dd;
  /* 11d440d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d440d8 jmp 0x11d441e5 */
  goto L_11d441e5;
L_11d440dd:;
  /* 11d440dd mov eax, dword ptr [0x11d71654] */
  EAX = (r32((uint32_t)(0x11d71654)));
  /* 11d440e2 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11d440e5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d440ea mov dword ptr [0x11d71660], eax */
  w32((uint32_t)(0x11d71660), (EAX));
  /* 11d440ef mov ecx, dword ptr [0x11d71654] */
  ECX = (r32((uint32_t)(0x11d71654)));
  /* 11d440f5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d440fb mov dword ptr [0x11d7165c], ecx */
  w32((uint32_t)(0x11d7165c), (ECX));
  /* 11d44101 mov edx, dword ptr [0x11d7165c] */
  EDX = (r32((uint32_t)(0x11d7165c)));
  /* 11d44107 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11d4410a add edx, dword ptr [0x11d71660] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11d71660))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d44110 mov dword ptr [0x11d71658], edx */
  w32((uint32_t)(0x11d71658), (EDX));
  /* 11d44116 mov eax, dword ptr [0x11d71654] */
  EAX = (r32((uint32_t)(0x11d71654)));
  /* 11d4411b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11d4411e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d44123 mov dword ptr [0x11d71654], eax */
  w32((uint32_t)(0x11d71654), (EAX));
  /* 11d44128 call 0x11d44ce0 */
  push32(0x11d4412du); f_11d44ce0();
  /* 11d4412d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4412f jne 0x11d4413d */
  if (!C.zf) goto L_11d4413d;
  /* 11d44131 call 0x11d47bc0 */
  push32(0x11d44136u); f_11d47bc0();
  /* 11d44136 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d44138 jmp 0x11d441e5 */
  goto L_11d441e5;
L_11d4413d:;
  /* 11d4413d call dword ptr [0x11d743a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743a4))), 0x11d44143u);
  /* 11d44143 mov dword ptr [0x11d7318c], eax */
  w32((uint32_t)(0x11d7318c), (EAX));
  /* 11d44148 call 0x11d47950 */
  push32(0x11d4414du); f_11d47950();
  /* 11d4414d mov dword ptr [0x11d7163c], eax */
  w32((uint32_t)(0x11d7163c), (EAX));
  /* 11d44152 call 0x11d44f90 */
  push32(0x11d44157u); f_11d44f90();
  /* 11d44157 call 0x11d47440 */
  push32(0x11d4415cu); f_11d47440();
  /* 11d4415c call 0x11d472f0 */
  push32(0x11d44161u); f_11d472f0();
  /* 11d44161 call 0x11d44ae0 */
  push32(0x11d44166u); f_11d44ae0();
  /* 11d44166 mov ecx, dword ptr [0x11d71638] */
  ECX = (r32((uint32_t)(0x11d71638)));
  /* 11d4416c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4416f mov dword ptr [0x11d71638], ecx */
  w32((uint32_t)(0x11d71638), (ECX));
  /* 11d44175 jmp 0x11d441e0 */
  goto L_11d441e0;
L_11d44177:;
  /* 11d44177 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4417b jne 0x11d441d0 */
  if (!C.zf) goto L_11d441d0;
  /* 11d4417d cmp dword ptr [0x11d71638], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d71638))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44184 jle 0x11d441ca */
  if ((C.zf||C.sf!=C.of)) goto L_11d441ca;
  /* 11d44186 mov edx, dword ptr [0x11d71638] */
  EDX = (r32((uint32_t)(0x11d71638)));
  /* 11d4418c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4418f mov dword ptr [0x11d71638], edx */
  w32((uint32_t)(0x11d71638), (EDX));
  /* 11d44195 cmp dword ptr [0x11d7168c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d7168c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4419c jne 0x11d441a3 */
  if (!C.zf) goto L_11d441a3;
  /* 11d4419e call 0x11d44b60 */
  push32(0x11d441a3u); f_11d44b60();
L_11d441a3:;
  /* 11d441a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d441a5 call 0x11d46890 */
  push32(0x11d441aau); f_11d46890();
  /* 11d441aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d441ad and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11d441b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d441b2 je 0x11d441b9 */
  if (C.zf) goto L_11d441b9;
  /* 11d441b4 call 0x11d471a0 */
  push32(0x11d441b9u); f_11d471a0();
L_11d441b9:;
  /* 11d441b9 call 0x11d452c0 */
  push32(0x11d441beu); f_11d452c0();
  /* 11d441be call 0x11d44d70 */
  push32(0x11d441c3u); f_11d44d70();
  /* 11d441c3 call 0x11d47bc0 */
  push32(0x11d441c8u); f_11d47bc0();
  /* 11d441c8 jmp 0x11d441ce */
  goto L_11d441ce;
L_11d441ca:;
  /* 11d441ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d441cc jmp 0x11d441e5 */
  goto L_11d441e5;
L_11d441ce:;
  /* 11d441ce jmp 0x11d441e0 */
  goto L_11d441e0;
L_11d441d0:;
  /* 11d441d0 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d441d4 jne 0x11d441e0 */
  if (!C.zf) goto L_11d441e0;
  /* 11d441d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d441d8 call 0x11d44e60 */
  push32(0x11d441ddu); f_11d44e60();
  /* 11d441dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d441e0:;
  /* 11d441e0 mov eax, 1 */
  EAX = (0x1u);
L_11d441e5:;
  /* 11d441e5 pop ebp */
  EBP = (pop32());
  /* 11d441e6 ret 0xc */
  ESPCHK(0x11d440b0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11d441f0 (243 bytes, 86 insns) */
void f_11d441f0(void) {
  FTRACE(0x11d441f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d441f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d441f1 mov ebp, esp */
  EBP = (ESP);
  /* 11d441f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d441f4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11d441fb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d441ff jne 0x11d44211 */
  if (!C.zf) goto L_11d44211;
  /* 11d44201 cmp dword ptr [0x11d71638], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d71638))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44208 jne 0x11d44211 */
  if (!C.zf) goto L_11d44211;
  /* 11d4420a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4420c jmp 0x11d442dd */
  goto L_11d442dd;
L_11d44211:;
  /* 11d44211 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44215 je 0x11d4421d */
  if (C.zf) goto L_11d4421d;
  /* 11d44217 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4421b jne 0x11d4425f */
  if (!C.zf) goto L_11d4425f;
L_11d4421d:;
  /* 11d4421d cmp dword ptr [0x11d7319c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d7319c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44224 je 0x11d4423b */
  if (C.zf) goto L_11d4423b;
  /* 11d44226 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d44229 push eax */
  push32((uint32_t)(EAX));
  /* 11d4422a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4422d push ecx */
  push32((uint32_t)(ECX));
  /* 11d4422e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d44231 push edx */
  push32((uint32_t)(EDX));
  /* 11d44232 call dword ptr [0x11d7319c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7319c))), 0x11d44238u);
  /* 11d44238 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d4423b:;
  /* 11d4423b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4423f je 0x11d44255 */
  if (C.zf) goto L_11d44255;
  /* 11d44241 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d44244 push eax */
  push32((uint32_t)(EAX));
  /* 11d44245 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d44248 push ecx */
  push32((uint32_t)(ECX));
  /* 11d44249 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4424c push edx */
  push32((uint32_t)(EDX));
  /* 11d4424d call 0x11d440b0 */
  push32(0x11d44252u); f_11d440b0();
  /* 11d44252 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d44255:;
  /* 11d44255 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44259 jne 0x11d4425f */
  if (!C.zf) goto L_11d4425f;
  /* 11d4425b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4425d jmp 0x11d442dd */
  goto L_11d442dd;
L_11d4425f:;
  /* 11d4425f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d44262 push eax */
  push32((uint32_t)(EAX));
  /* 11d44263 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d44266 push ecx */
  push32((uint32_t)(ECX));
  /* 11d44267 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4426a push edx */
  push32((uint32_t)(EDX));
  /* 11d4426b call 0x11d4100a */
  push32(0x11d44270u); f_11d4100a();
  /* 11d44270 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d44273 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44277 jne 0x11d4428e */
  if (!C.zf) goto L_11d4428e;
  /* 11d44279 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4427d jne 0x11d4428e */
  if (!C.zf) goto L_11d4428e;
  /* 11d4427f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d44282 push eax */
  push32((uint32_t)(EAX));
  /* 11d44283 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d44285 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d44288 push ecx */
  push32((uint32_t)(ECX));
  /* 11d44289 call 0x11d440b0 */
  push32(0x11d4428eu); f_11d440b0();
L_11d4428e:;
  /* 11d4428e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44292 je 0x11d4429a */
  if (C.zf) goto L_11d4429a;
  /* 11d44294 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44298 jne 0x11d442da */
  if (!C.zf) goto L_11d442da;
L_11d4429a:;
  /* 11d4429a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d4429d push edx */
  push32((uint32_t)(EDX));
  /* 11d4429e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d442a1 push eax */
  push32((uint32_t)(EAX));
  /* 11d442a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d442a5 push ecx */
  push32((uint32_t)(ECX));
  /* 11d442a6 call 0x11d440b0 */
  push32(0x11d442abu); f_11d440b0();
  /* 11d442ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d442ad jne 0x11d442b6 */
  if (!C.zf) goto L_11d442b6;
  /* 11d442af mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11d442b6:;
  /* 11d442b6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d442ba je 0x11d442da */
  if (C.zf) goto L_11d442da;
  /* 11d442bc cmp dword ptr [0x11d7319c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d7319c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d442c3 je 0x11d442da */
  if (C.zf) goto L_11d442da;
  /* 11d442c5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d442c8 push edx */
  push32((uint32_t)(EDX));
  /* 11d442c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d442cc push eax */
  push32((uint32_t)(EAX));
  /* 11d442cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d442d0 push ecx */
  push32((uint32_t)(ECX));
  /* 11d442d1 call dword ptr [0x11d7319c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7319c))), 0x11d442d7u);
  /* 11d442d7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d442da:;
  /* 11d442da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11d442dd:;
  /* 11d442dd mov esp, ebp */
  ESP = (EBP);
  /* 11d442df pop ebp */
  EBP = (pop32());
  /* 11d442e0 ret 0xc */
  ESPCHK(0x11d441f0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11d442f0 (58 bytes, 18 insns) */
void f_11d442f0(void) {
  FTRACE(0x11d442f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d442f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d442f1 mov ebp, esp */
  EBP = (ESP);
  /* 11d442f3 cmp dword ptr [0x11d71644], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11d71644))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d442fa je 0x11d4430e */
  if (C.zf) goto L_11d4430e;
  /* 11d442fc cmp dword ptr [0x11d71644], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d71644))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44303 jne 0x11d44313 */
  if (!C.zf) goto L_11d44313;
  /* 11d44305 cmp dword ptr [0x11d71648], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11d71648))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4430c jne 0x11d44313 */
  if (!C.zf) goto L_11d44313;
L_11d4430e:;
  /* 11d4430e call 0x11d47c60 */
  push32(0x11d44313u); f_11d47c60();
L_11d44313:;
  /* 11d44313 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d44316 push eax */
  push32((uint32_t)(EAX));
  /* 11d44317 call 0x11d47cb0 */
  push32(0x11d4431cu); f_11d47cb0();
  /* 11d4431c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4431f push 0xff */
  push32((uint32_t)(0xffu));
  /* 11d44324 call dword ptr [0x11d6fa30] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d6fa30))), 0x11d4432au);
  /* 11d4432a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4432d pop ebp */
  EBP = (pop32());
  /* 11d4432e ret  */
  ESPCHK(0x11d442f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004330 @ 0x11d44330 (11 bytes, 5 insns) */
void f_11d44330(void) {
  FTRACE(0x11d44330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d44330 push ebp */
  push32((uint32_t)(EBP));
  /* 11d44331 mov ebp, esp */
  EBP = (ESP);
  /* 11d44333 call dword ptr [0x11d743ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743ac))), 0x11d44339u);
  /* 11d44339 pop ebp */
  EBP = (pop32());
  /* 11d4433a ret  */
  ESPCHK(0x11d44330u, _esp0);
  ESP += 4; return;
}

/* FUN_10004340 @ 0x11d44340 (87 bytes, 30 insns) */
void f_11d44340(void) {
  FTRACE(0x11d44340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d44340 push ebp */
  push32((uint32_t)(EBP));
  /* 11d44341 mov ebp, esp */
  EBP = (ESP);
  /* 11d44343 push ecx */
  push32((uint32_t)(ECX));
  /* 11d44344 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44348 jl 0x11d44350 */
  if ((C.sf!=C.of)) goto L_11d44350;
  /* 11d4434a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4434e jl 0x11d44355 */
  if ((C.sf!=C.of)) goto L_11d44355;
L_11d44350:;
  /* 11d44350 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d44353 jmp 0x11d44393 */
  goto L_11d44393;
L_11d44355:;
  /* 11d44355 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44359 jne 0x11d44367 */
  if (!C.zf) goto L_11d44367;
  /* 11d4435b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4435e mov eax, dword ptr [eax*4 + 0x11d6fa38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11d6fa38)));
  /* 11d44365 jmp 0x11d44393 */
  goto L_11d44393;
L_11d44367:;
  /* 11d44367 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4436a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 11d4436d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4436f je 0x11d44376 */
  if (C.zf) goto L_11d44376;
  /* 11d44371 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d44374 jmp 0x11d44393 */
  goto L_11d44393;
L_11d44376:;
  /* 11d44376 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d44379 mov eax, dword ptr [edx*4 + 0x11d6fa38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11d6fa38)));
  /* 11d44380 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d44383 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d44386 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d44389 mov dword ptr [ecx*4 + 0x11d6fa38], edx */
  w32((uint32_t)(ECX*4 + 0x11d6fa38), (EDX));
  /* 11d44390 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11d44393:;
  /* 11d44393 mov esp, ebp */
  ESP = (EBP);
  /* 11d44395 pop ebp */
  EBP = (pop32());
  /* 11d44396 ret  */
  ESPCHK(0x11d44340u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x11d443a0 (126 bytes, 38 insns) */
void f_11d443a0(void) {
  FTRACE(0x11d443a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d443a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d443a1 mov ebp, esp */
  EBP = (ESP);
  /* 11d443a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d443a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d443a8 jl 0x11d443b0 */
  if ((C.sf!=C.of)) goto L_11d443b0;
  /* 11d443aa cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d443ae jl 0x11d443b7 */
  if ((C.sf!=C.of)) goto L_11d443b7;
L_11d443b0:;
  /* 11d443b0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 11d443b5 jmp 0x11d4441a */
  goto L_11d4441a;
L_11d443b7:;
  /* 11d443b7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d443bb jne 0x11d443c9 */
  if (!C.zf) goto L_11d443c9;
  /* 11d443bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d443c0 mov eax, dword ptr [eax*4 + 0x11d6fa44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11d6fa44)));
  /* 11d443c7 jmp 0x11d4441a */
  goto L_11d4441a;
L_11d443c9:;
  /* 11d443c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d443cc mov edx, dword ptr [ecx*4 + 0x11d6fa44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11d6fa44)));
  /* 11d443d3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d443d6 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d443da jne 0x11d443f0 */
  if (!C.zf) goto L_11d443f0;
  /* 11d443dc push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11d443de call dword ptr [0x11d743b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743b0))), 0x11d443e4u);
  /* 11d443e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d443e7 mov dword ptr [ecx*4 + 0x11d6fa44], eax */
  w32((uint32_t)(ECX*4 + 0x11d6fa44), (EAX));
  /* 11d443ee jmp 0x11d44417 */
  goto L_11d44417;
L_11d443f0:;
  /* 11d443f0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d443f4 jne 0x11d4440a */
  if (!C.zf) goto L_11d4440a;
  /* 11d443f6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11d443f8 call dword ptr [0x11d743b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743b0))), 0x11d443feu);
  /* 11d443fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d44401 mov dword ptr [edx*4 + 0x11d6fa44], eax */
  w32((uint32_t)(EDX*4 + 0x11d6fa44), (EAX));
  /* 11d44408 jmp 0x11d44417 */
  goto L_11d44417;
L_11d4440a:;
  /* 11d4440a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4440d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d44410 mov dword ptr [eax*4 + 0x11d6fa44], ecx */
  w32((uint32_t)(EAX*4 + 0x11d6fa44), (ECX));
L_11d44417:;
  /* 11d44417 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11d4441a:;
  /* 11d4441a mov esp, ebp */
  ESP = (EBP);
  /* 11d4441c pop ebp */
  EBP = (pop32());
  /* 11d4441d ret  */
  ESPCHK(0x11d443a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004420 @ 0x11d44420 (28 bytes, 11 insns) */
void f_11d44420(void) {
  FTRACE(0x11d44420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d44420 push ebp */
  push32((uint32_t)(EBP));
  /* 11d44421 mov ebp, esp */
  EBP = (ESP);
  /* 11d44423 push ecx */
  push32((uint32_t)(ECX));
  /* 11d44424 mov eax, dword ptr [0x11d73180] */
  EAX = (r32((uint32_t)(0x11d73180)));
  /* 11d44429 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d4442c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4442f mov dword ptr [0x11d73180], ecx */
  w32((uint32_t)(0x11d73180), (ECX));
  /* 11d44435 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d44438 mov esp, ebp */
  ESP = (EBP);
  /* 11d4443a pop ebp */
  EBP = (pop32());
  /* 11d4443b ret  */
  ESPCHK(0x11d44420u, _esp0);
  ESP += 4; return;
}

/* FUN_10004440 @ 0x11d44440 (912 bytes, 248 insns) */
void f_11d44440(void) {
  FTRACE(0x11d44440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d44440 push ebp */
  push32((uint32_t)(EBP));
  /* 11d44441 mov ebp, esp */
  EBP = (ESP);
  /* 11d44443 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 11d44448 call 0x11d48520 */
  push32(0x11d4444du); f_11d48520();
  /* 11d4444d push edi */
  push32((uint32_t)(EDI));
  /* 11d4444e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 11d44455 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11d4445a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4445c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 11d44462 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11d44464 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11d44466 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11d44467 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 11d4446e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11d44473 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d44475 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 11d4447b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11d4447d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11d4447f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11d44480 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 11d44487 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11d4448c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4448e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 11d44494 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11d44496 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11d44498 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11d44499 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 11d4449c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 11d444a2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d444a6 jl 0x11d444ae */
  if ((C.sf!=C.of)) goto L_11d444ae;
  /* 11d444a8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d444ac jl 0x11d444b6 */
  if ((C.sf!=C.of)) goto L_11d444b6;
L_11d444ae:;
  /* 11d444ae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d444b1 jmp 0x11d447cb */
  goto L_11d447cb;
L_11d444b6:;
  /* 11d444b6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d444ba jne 0x11d44560 */
  if (!C.zf) goto L_11d44560;
  /* 11d444c0 push 0x11d6fa34 */
  push32((uint32_t)(0x11d6fa34u));
  /* 11d444c5 call dword ptr [0x11d743c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743c8))), 0x11d444cbu);
  /* 11d444cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d444cd jle 0x11d44560 */
  if ((C.zf||C.sf!=C.of)) goto L_11d44560;
  /* 11d444d3 cmp dword ptr [0x11d7164c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d7164c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d444da jne 0x11d4451e */
  if (!C.zf) goto L_11d4451e;
  /* 11d444dc push 0x11d6c568 */
  push32((uint32_t)(0x11d6c568u));
  /* 11d444e1 call dword ptr [0x11d743c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743c4))), 0x11d444e7u);
  /* 11d444e7 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 11d444ed cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d444f4 je 0x11d44516 */
  if (C.zf) goto L_11d44516;
  /* 11d444f6 push 0x11d6c55c */
  push32((uint32_t)(0x11d6c55cu));
  /* 11d444fb mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 11d44501 push ecx */
  push32((uint32_t)(ECX));
  /* 11d44502 call dword ptr [0x11d743c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743c0))), 0x11d44508u);
  /* 11d44508 mov dword ptr [0x11d7164c], eax */
  w32((uint32_t)(0x11d7164c), (EAX));
  /* 11d4450d cmp dword ptr [0x11d7164c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d7164c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44514 jne 0x11d4451e */
  if (!C.zf) goto L_11d4451e;
L_11d44516:;
  /* 11d44516 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d44519 jmp 0x11d447cb */
  goto L_11d447cb;
L_11d4451e:;
  /* 11d4451e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d44521 push edx */
  push32((uint32_t)(EDX));
  /* 11d44522 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d44525 push eax */
  push32((uint32_t)(EAX));
  /* 11d44526 push 0x11d6c528 */
  push32((uint32_t)(0x11d6c528u));
  /* 11d4452b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11d44531 push ecx */
  push32((uint32_t)(ECX));
  /* 11d44532 call dword ptr [0x11d7164c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7164c))), 0x11d44538u);
  /* 11d44538 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4453b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11d44541 push edx */
  push32((uint32_t)(EDX));
  /* 11d44542 call dword ptr [0x11d743bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743bc))), 0x11d44548u);
  /* 11d44548 push 0x11d6fa34 */
  push32((uint32_t)(0x11d6fa34u));
  /* 11d4454d call dword ptr [0x11d743b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743b8))), 0x11d44553u);
  /* 11d44553 call 0x11d44330 */
  push32(0x11d44558u); f_11d44330();
  /* 11d44558 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d4455b jmp 0x11d447cb */
  goto L_11d447cb;
L_11d44560:;
  /* 11d44560 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44564 je 0x11d4459d */
  if (C.zf) goto L_11d4459d;
  /* 11d44566 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 11d4456c push eax */
  push32((uint32_t)(EAX));
  /* 11d4456d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d44570 push ecx */
  push32((uint32_t)(ECX));
  /* 11d44571 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 11d44576 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 11d4457c push edx */
  push32((uint32_t)(EDX));
  /* 11d4457d call 0x11d48420 */
  push32(0x11d44582u); f_11d48420();
  /* 11d44582 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d44585 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d44587 jge 0x11d4459d */
  if ((C.sf==C.of)) goto L_11d4459d;
  /* 11d44589 push 0x11d6c4fc */
  push32((uint32_t)(0x11d6c4fcu));
  /* 11d4458e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 11d44594 push eax */
  push32((uint32_t)(EAX));
  /* 11d44595 call 0x11d48330 */
  push32(0x11d4459au); f_11d48330();
  /* 11d4459a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d4459d:;
  /* 11d4459d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d445a1 jne 0x11d445d5 */
  if (!C.zf) goto L_11d445d5;
  /* 11d445a3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d445a7 je 0x11d445b5 */
  if (C.zf) goto L_11d445b5;
  /* 11d445a9 mov dword ptr [ebp - 0x3028], 0x11d6c4e8 */
  w32((uint32_t)(EBP + -0x3028), (0x11d6c4e8u));
  /* 11d445b3 jmp 0x11d445bf */
  goto L_11d445bf;
L_11d445b5:;
  /* 11d445b5 mov dword ptr [ebp - 0x3028], 0x11d6c4d4 */
  w32((uint32_t)(EBP + -0x3028), (0x11d6c4d4u));
L_11d445bf:;
  /* 11d445bf mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 11d445c5 push ecx */
  push32((uint32_t)(ECX));
  /* 11d445c6 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11d445cc push edx */
  push32((uint32_t)(EDX));
  /* 11d445cd call 0x11d48330 */
  push32(0x11d445d2u); f_11d48330();
  /* 11d445d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d445d5:;
  /* 11d445d5 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 11d445db push eax */
  push32((uint32_t)(EAX));
  /* 11d445dc lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 11d445e2 push ecx */
  push32((uint32_t)(ECX));
  /* 11d445e3 call 0x11d48340 */
  push32(0x11d445e8u); f_11d48340();
  /* 11d445e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d445eb cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d445ef jne 0x11d4462a */
  if (!C.zf) goto L_11d4462a;
  /* 11d445f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d445f4 mov eax, dword ptr [edx*4 + 0x11d6fa38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11d6fa38)));
  /* 11d445fb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11d445fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d44600 je 0x11d44616 */
  if (C.zf) goto L_11d44616;
  /* 11d44602 push 0x11d6c4d0 */
  push32((uint32_t)(0x11d6c4d0u));
  /* 11d44607 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 11d4460d push ecx */
  push32((uint32_t)(ECX));
  /* 11d4460e call 0x11d48340 */
  push32(0x11d44613u); f_11d48340();
  /* 11d44613 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d44616:;
  /* 11d44616 push 0x11d6c4cc */
  push32((uint32_t)(0x11d6c4ccu));
  /* 11d4461b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11d44621 push edx */
  push32((uint32_t)(EDX));
  /* 11d44622 call 0x11d48340 */
  push32(0x11d44627u); f_11d48340();
  /* 11d44627 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d4462a:;
  /* 11d4462a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4462e je 0x11d44672 */
  if (C.zf) goto L_11d44672;
  /* 11d44630 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 11d44636 push eax */
  push32((uint32_t)(EAX));
  /* 11d44637 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d4463a push ecx */
  push32((uint32_t)(ECX));
  /* 11d4463b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4463e push edx */
  push32((uint32_t)(EDX));
  /* 11d4463f push 0x11d6c4c0 */
  push32((uint32_t)(0x11d6c4c0u));
  /* 11d44644 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11d44649 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11d4464f push eax */
  push32((uint32_t)(EAX));
  /* 11d44650 call 0x11d48230 */
  push32(0x11d44655u); f_11d48230();
  /* 11d44655 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d44658 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4465a jge 0x11d44670 */
  if ((C.sf==C.of)) goto L_11d44670;
  /* 11d4465c push 0x11d6c4fc */
  push32((uint32_t)(0x11d6c4fcu));
  /* 11d44661 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11d44667 push ecx */
  push32((uint32_t)(ECX));
  /* 11d44668 call 0x11d48330 */
  push32(0x11d4466du); f_11d48330();
  /* 11d4466d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d44670:;
  /* 11d44670 jmp 0x11d44688 */
  goto L_11d44688;
L_11d44672:;
  /* 11d44672 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11d44678 push edx */
  push32((uint32_t)(EDX));
  /* 11d44679 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11d4467f push eax */
  push32((uint32_t)(EAX));
  /* 11d44680 call 0x11d48330 */
  push32(0x11d44685u); f_11d48330();
  /* 11d44685 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d44688:;
  /* 11d44688 cmp dword ptr [0x11d73180], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d73180))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4468f je 0x11d446cc */
  if (C.zf) goto L_11d446cc;
  /* 11d44691 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 11d44697 push ecx */
  push32((uint32_t)(ECX));
  /* 11d44698 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11d4469e push edx */
  push32((uint32_t)(EDX));
  /* 11d4469f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d446a2 push eax */
  push32((uint32_t)(EAX));
  /* 11d446a3 call dword ptr [0x11d73180] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d73180))), 0x11d446a9u);
  /* 11d446a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d446ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d446ae je 0x11d446cc */
  if (C.zf) goto L_11d446cc;
  /* 11d446b0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d446b4 jne 0x11d446c1 */
  if (!C.zf) goto L_11d446c1;
  /* 11d446b6 push 0x11d6fa34 */
  push32((uint32_t)(0x11d6fa34u));
  /* 11d446bb call dword ptr [0x11d743b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743b8))), 0x11d446c1u);
L_11d446c1:;
  /* 11d446c1 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11d446c7 jmp 0x11d447cb */
  goto L_11d447cb;
L_11d446cc:;
  /* 11d446cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d446cf mov edx, dword ptr [ecx*4 + 0x11d6fa38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11d6fa38)));
  /* 11d446d6 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11d446d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d446db je 0x11d4471b */
  if (C.zf) goto L_11d4471b;
  /* 11d446dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d446e0 cmp dword ptr [eax*4 + 0x11d6fa44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11d6fa44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d446e8 je 0x11d4471b */
  if (C.zf) goto L_11d4471b;
  /* 11d446ea push 0 */
  push32((uint32_t)(0x0u));
  /* 11d446ec lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 11d446f2 push ecx */
  push32((uint32_t)(ECX));
  /* 11d446f3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11d446f9 push edx */
  push32((uint32_t)(EDX));
  /* 11d446fa call 0x11d481b0 */
  push32(0x11d446ffu); f_11d481b0();
  /* 11d446ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d44702 push eax */
  push32((uint32_t)(EAX));
  /* 11d44703 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11d44709 push eax */
  push32((uint32_t)(EAX));
  /* 11d4470a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4470d mov edx, dword ptr [ecx*4 + 0x11d6fa44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11d6fa44)));
  /* 11d44714 push edx */
  push32((uint32_t)(EDX));
  /* 11d44715 call dword ptr [0x11d743b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743b4))), 0x11d4471bu);
L_11d4471b:;
  /* 11d4471b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4471e mov ecx, dword ptr [eax*4 + 0x11d6fa38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11d6fa38)));
  /* 11d44725 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11d44728 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4472a je 0x11d44739 */
  if (C.zf) goto L_11d44739;
  /* 11d4472c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11d44732 push edx */
  push32((uint32_t)(EDX));
  /* 11d44733 call dword ptr [0x11d743bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743bc))), 0x11d44739u);
L_11d44739:;
  /* 11d44739 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4473c mov ecx, dword ptr [eax*4 + 0x11d6fa38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11d6fa38)));
  /* 11d44743 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11d44746 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d44748 je 0x11d447b8 */
  if (C.zf) goto L_11d447b8;
  /* 11d4474a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4474e je 0x11d4476d */
  if (C.zf) goto L_11d4476d;
  /* 11d44750 push 0xa */
  push32((uint32_t)(0xau));
  /* 11d44752 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 11d44758 push edx */
  push32((uint32_t)(EDX));
  /* 11d44759 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d4475c push eax */
  push32((uint32_t)(EAX));
  /* 11d4475d call 0x11d47ec0 */
  push32(0x11d44762u); f_11d47ec0();
  /* 11d44762 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d44765 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 11d4476b jmp 0x11d44777 */
  goto L_11d44777;
L_11d4476d:;
  /* 11d4476d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_11d44777:;
  /* 11d44777 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 11d4477d push ecx */
  push32((uint32_t)(ECX));
  /* 11d4477e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d44781 push edx */
  push32((uint32_t)(EDX));
  /* 11d44782 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 11d44788 push eax */
  push32((uint32_t)(EAX));
  /* 11d44789 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4478c push ecx */
  push32((uint32_t)(ECX));
  /* 11d4478d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d44790 push edx */
  push32((uint32_t)(EDX));
  /* 11d44791 call 0x11d447d0 */
  push32(0x11d44796u); f_11d447d0();
  /* 11d44796 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d44799 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 11d4479f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d447a3 jne 0x11d447b0 */
  if (!C.zf) goto L_11d447b0;
  /* 11d447a5 push 0x11d6fa34 */
  push32((uint32_t)(0x11d6fa34u));
  /* 11d447aa call dword ptr [0x11d743b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743b8))), 0x11d447b0u);
L_11d447b0:;
  /* 11d447b0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11d447b6 jmp 0x11d447cb */
  goto L_11d447cb;
L_11d447b8:;
  /* 11d447b8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d447bc jne 0x11d447c9 */
  if (!C.zf) goto L_11d447c9;
  /* 11d447be push 0x11d6fa34 */
  push32((uint32_t)(0x11d6fa34u));
  /* 11d447c3 call dword ptr [0x11d743b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743b8))), 0x11d447c9u);
L_11d447c9:;
  /* 11d447c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d447cb:;
  /* 11d447cb pop edi */
  EDI = (pop32());
  /* 11d447cc mov esp, ebp */
  ESP = (EBP);
  /* 11d447ce pop ebp */
  EBP = (pop32());
  /* 11d447cf ret  */
  ESPCHK(0x11d44440u, _esp0);
  ESP += 4; return;
}

/* FUN_100047d0 @ 0x11d447d0 (780 bytes, 197 insns) */
void f_11d447d0(void) {
  FTRACE(0x11d447d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d447d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d447d1 mov ebp, esp */
  EBP = (ESP);
  /* 11d447d3 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 11d447d8 call 0x11d48520 */
  push32(0x11d447ddu); f_11d48520();
L_11d447dd:;
  /* 11d447dd cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d447e1 jne 0x11d44808 */
  if (!C.zf) goto L_11d44808;
  /* 11d447e3 push 0x11d6c6b8 */
  push32((uint32_t)(0x11d6c6b8u));
  /* 11d447e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d447ea push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 11d447ef push 0x11d6c6ac */
  push32((uint32_t)(0x11d6c6acu));
  /* 11d447f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d447f6 call 0x11d44440 */
  push32(0x11d447fbu); f_11d44440();
  /* 11d447fb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d447fe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44801 jne 0x11d44808 */
  if (!C.zf) goto L_11d44808;
  /* 11d44803 call 0x11d44330 */
  push32(0x11d44808u); f_11d44330();
L_11d44808:;
  /* 11d44808 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4480a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4480c jne 0x11d447dd */
  if (!C.zf) goto L_11d447dd;
  /* 11d4480e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11d44813 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 11d44819 push ecx */
  push32((uint32_t)(ECX));
  /* 11d4481a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4481c call dword ptr [0x11d742e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d742e0))), 0x11d44822u);
  /* 11d44822 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d44824 jne 0x11d4483a */
  if (!C.zf) goto L_11d4483a;
  /* 11d44826 push 0x11d6c694 */
  push32((uint32_t)(0x11d6c694u));
  /* 11d4482b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 11d44831 push edx */
  push32((uint32_t)(EDX));
  /* 11d44832 call 0x11d48330 */
  push32(0x11d44837u); f_11d48330();
  /* 11d44837 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d4483a:;
  /* 11d4483a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 11d44840 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d44843 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d44846 push ecx */
  push32((uint32_t)(ECX));
  /* 11d44847 call 0x11d481b0 */
  push32(0x11d4484cu); f_11d481b0();
  /* 11d4484c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4484f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44852 jbe 0x11d4487d */
  if ((C.cf||C.zf)) goto L_11d4487d;
  /* 11d44854 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d44857 push edx */
  push32((uint32_t)(EDX));
  /* 11d44858 call 0x11d481b0 */
  push32(0x11d4485du); f_11d481b0();
  /* 11d4485d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d44860 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d44863 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11d44867 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d4486a push 3 */
  push32((uint32_t)(0x3u));
  /* 11d4486c push 0x11d6c690 */
  push32((uint32_t)(0x11d6c690u));
  /* 11d44871 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d44874 push eax */
  push32((uint32_t)(EAX));
  /* 11d44875 call 0x11d48ba0 */
  push32(0x11d4487au); f_11d48ba0();
  /* 11d4487a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d4487d:;
  /* 11d4487d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d44880 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 11d44886 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4488d je 0x11d448d8 */
  if (C.zf) goto L_11d448d8;
  /* 11d4488f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11d44895 push edx */
  push32((uint32_t)(EDX));
  /* 11d44896 call 0x11d481b0 */
  push32(0x11d4489bu); f_11d481b0();
  /* 11d4489b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4489e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d448a1 jbe 0x11d448d8 */
  if ((C.cf||C.zf)) goto L_11d448d8;
  /* 11d448a3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11d448a9 push eax */
  push32((uint32_t)(EAX));
  /* 11d448aa call 0x11d481b0 */
  push32(0x11d448afu); f_11d481b0();
  /* 11d448af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d448b2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11d448b8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11d448bc mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 11d448c2 push 3 */
  push32((uint32_t)(0x3u));
  /* 11d448c4 push 0x11d6c690 */
  push32((uint32_t)(0x11d6c690u));
  /* 11d448c9 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11d448cf push eax */
  push32((uint32_t)(EAX));
  /* 11d448d0 call 0x11d48ba0 */
  push32(0x11d448d5u); f_11d48ba0();
  /* 11d448d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d448d8:;
  /* 11d448d8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d448dc jne 0x11d448ea */
  if (!C.zf) goto L_11d448ea;
  /* 11d448de mov dword ptr [ebp - 0x1114], 0x11d6c61c */
  w32((uint32_t)(EBP + -0x1114), (0x11d6c61cu));
  /* 11d448e8 jmp 0x11d448f4 */
  goto L_11d448f4;
L_11d448ea:;
  /* 11d448ea mov dword ptr [ebp - 0x1114], 0x11d6c3bc */
  w32((uint32_t)(EBP + -0x1114), (0x11d6c3bcu));
L_11d448f4:;
  /* 11d448f4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d448f7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d448fa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d448fc je 0x11d44909 */
  if (C.zf) goto L_11d44909;
  /* 11d448fe mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d44901 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 11d44907 jmp 0x11d44913 */
  goto L_11d44913;
L_11d44909:;
  /* 11d44909 mov dword ptr [ebp - 0x1118], 0x11d6c3bc */
  w32((uint32_t)(EBP + -0x1118), (0x11d6c3bcu));
L_11d44913:;
  /* 11d44913 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d44916 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d44919 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4491b je 0x11d4492f */
  if (C.zf) goto L_11d4492f;
  /* 11d4491d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44921 jne 0x11d4492f */
  if (!C.zf) goto L_11d4492f;
  /* 11d44923 mov dword ptr [ebp - 0x111c], 0x11d6c60c */
  w32((uint32_t)(EBP + -0x111c), (0x11d6c60cu));
  /* 11d4492d jmp 0x11d44939 */
  goto L_11d44939;
L_11d4492f:;
  /* 11d4492f mov dword ptr [ebp - 0x111c], 0x11d6c3bc */
  w32((uint32_t)(EBP + -0x111c), (0x11d6c3bcu));
L_11d44939:;
  /* 11d44939 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d4493c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d4493f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d44941 je 0x11d4494f */
  if (C.zf) goto L_11d4494f;
  /* 11d44943 mov dword ptr [ebp - 0x1120], 0x11d6c608 */
  w32((uint32_t)(EBP + -0x1120), (0x11d6c608u));
  /* 11d4494d jmp 0x11d44959 */
  goto L_11d44959;
L_11d4494f:;
  /* 11d4494f mov dword ptr [ebp - 0x1120], 0x11d6c3bc */
  w32((uint32_t)(EBP + -0x1120), (0x11d6c3bcu));
L_11d44959:;
  /* 11d44959 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4495d je 0x11d4496a */
  if (C.zf) goto L_11d4496a;
  /* 11d4495f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d44962 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 11d44968 jmp 0x11d44974 */
  goto L_11d44974;
L_11d4496a:;
  /* 11d4496a mov dword ptr [ebp - 0x1124], 0x11d6c3bc */
  w32((uint32_t)(EBP + -0x1124), (0x11d6c3bcu));
L_11d44974:;
  /* 11d44974 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44978 je 0x11d44986 */
  if (C.zf) goto L_11d44986;
  /* 11d4497a mov dword ptr [ebp - 0x1128], 0x11d6c600 */
  w32((uint32_t)(EBP + -0x1128), (0x11d6c600u));
  /* 11d44984 jmp 0x11d44990 */
  goto L_11d44990;
L_11d44986:;
  /* 11d44986 mov dword ptr [ebp - 0x1128], 0x11d6c3bc */
  w32((uint32_t)(EBP + -0x1128), (0x11d6c3bcu));
L_11d44990:;
  /* 11d44990 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44994 je 0x11d449a1 */
  if (C.zf) goto L_11d449a1;
  /* 11d44996 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d44999 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 11d4499f jmp 0x11d449ab */
  goto L_11d449ab;
L_11d449a1:;
  /* 11d449a1 mov dword ptr [ebp - 0x112c], 0x11d6c3bc */
  w32((uint32_t)(EBP + -0x112c), (0x11d6c3bcu));
L_11d449ab:;
  /* 11d449ab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d449af je 0x11d449bd */
  if (C.zf) goto L_11d449bd;
  /* 11d449b1 mov dword ptr [ebp - 0x1130], 0x11d6c5f8 */
  w32((uint32_t)(EBP + -0x1130), (0x11d6c5f8u));
  /* 11d449bb jmp 0x11d449c7 */
  goto L_11d449c7;
L_11d449bd:;
  /* 11d449bd mov dword ptr [ebp - 0x1130], 0x11d6c3bc */
  w32((uint32_t)(EBP + -0x1130), (0x11d6c3bcu));
L_11d449c7:;
  /* 11d449c7 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d449ce je 0x11d449de */
  if (C.zf) goto L_11d449de;
  /* 11d449d0 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11d449d6 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 11d449dc jmp 0x11d449e8 */
  goto L_11d449e8;
L_11d449de:;
  /* 11d449de mov dword ptr [ebp - 0x1134], 0x11d6c3bc */
  w32((uint32_t)(EBP + -0x1134), (0x11d6c3bcu));
L_11d449e8:;
  /* 11d449e8 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d449ef je 0x11d449fd */
  if (C.zf) goto L_11d449fd;
  /* 11d449f1 mov dword ptr [ebp - 0x1138], 0x11d6c5ec */
  w32((uint32_t)(EBP + -0x1138), (0x11d6c5ecu));
  /* 11d449fb jmp 0x11d44a07 */
  goto L_11d44a07;
L_11d449fd:;
  /* 11d449fd mov dword ptr [ebp - 0x1138], 0x11d6c3bc */
  w32((uint32_t)(EBP + -0x1138), (0x11d6c3bcu));
L_11d44a07:;
  /* 11d44a07 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 11d44a0d push edx */
  push32((uint32_t)(EDX));
  /* 11d44a0e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 11d44a14 push eax */
  push32((uint32_t)(EAX));
  /* 11d44a15 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 11d44a1b push ecx */
  push32((uint32_t)(ECX));
  /* 11d44a1c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 11d44a22 push edx */
  push32((uint32_t)(EDX));
  /* 11d44a23 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 11d44a29 push eax */
  push32((uint32_t)(EAX));
  /* 11d44a2a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 11d44a30 push ecx */
  push32((uint32_t)(ECX));
  /* 11d44a31 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 11d44a37 push edx */
  push32((uint32_t)(EDX));
  /* 11d44a38 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 11d44a3e push eax */
  push32((uint32_t)(EAX));
  /* 11d44a3f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 11d44a45 push ecx */
  push32((uint32_t)(ECX));
  /* 11d44a46 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 11d44a4c push edx */
  push32((uint32_t)(EDX));
  /* 11d44a4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d44a50 push eax */
  push32((uint32_t)(EAX));
  /* 11d44a51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d44a54 mov edx, dword ptr [ecx*4 + 0x11d6fa50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11d6fa50)));
  /* 11d44a5b push edx */
  push32((uint32_t)(EDX));
  /* 11d44a5c push 0x11d6c598 */
  push32((uint32_t)(0x11d6c598u));
  /* 11d44a61 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11d44a66 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 11d44a6c push eax */
  push32((uint32_t)(EAX));
  /* 11d44a6d call 0x11d48230 */
  push32(0x11d44a72u); f_11d48230();
  /* 11d44a72 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d44a75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d44a77 jge 0x11d44a8d */
  if ((C.sf==C.of)) goto L_11d44a8d;
  /* 11d44a79 push 0x11d6c4fc */
  push32((uint32_t)(0x11d6c4fcu));
  /* 11d44a7e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 11d44a84 push ecx */
  push32((uint32_t)(ECX));
  /* 11d44a85 call 0x11d48330 */
  push32(0x11d44a8au); f_11d48330();
  /* 11d44a8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d44a8d:;
  /* 11d44a8d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 11d44a92 push 0x11d6c574 */
  push32((uint32_t)(0x11d6c574u));
  /* 11d44a97 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 11d44a9d push edx */
  push32((uint32_t)(EDX));
  /* 11d44a9e call 0x11d48ae0 */
  push32(0x11d44aa3u); f_11d48ae0();
  /* 11d44aa3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d44aa6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 11d44aac cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44ab3 jne 0x11d44ac6 */
  if (!C.zf) goto L_11d44ac6;
  /* 11d44ab5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11d44ab7 call 0x11d48820 */
  push32(0x11d44abcu); f_11d48820();
  /* 11d44abc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d44abf push 3 */
  push32((uint32_t)(0x3u));
  /* 11d44ac1 call 0x11d44b40 */
  push32(0x11d44ac6u); f_11d44b40();
L_11d44ac6:;
  /* 11d44ac6 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44acd jne 0x11d44ad6 */
  if (!C.zf) goto L_11d44ad6;
  /* 11d44acf mov eax, 1 */
  EAX = (0x1u);
  /* 11d44ad4 jmp 0x11d44ad8 */
  goto L_11d44ad8;
L_11d44ad6:;
  /* 11d44ad6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d44ad8:;
  /* 11d44ad8 mov esp, ebp */
  ESP = (EBP);
  /* 11d44ada pop ebp */
  EBP = (pop32());
  /* 11d44adb ret  */
  ESPCHK(0x11d447d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ae0 @ 0x11d44ae0 (56 bytes, 15 insns) */
void f_11d44ae0(void) {
  FTRACE(0x11d44ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d44ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d44ae1 mov ebp, esp */
  EBP = (ESP);
  /* 11d44ae3 cmp dword ptr [0x11d7317c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d7317c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44aea je 0x11d44af2 */
  if (C.zf) goto L_11d44af2;
  /* 11d44aec call dword ptr [0x11d7317c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7317c))), 0x11d44af2u);
L_11d44af2:;
  /* 11d44af2 push 0x11d6f418 */
  push32((uint32_t)(0x11d6f418u));
  /* 11d44af7 push 0x11d6f208 */
  push32((uint32_t)(0x11d6f208u));
  /* 11d44afc call 0x11d44cb0 */
  push32(0x11d44b01u); f_11d44cb0();
  /* 11d44b01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d44b04 push 0x11d6f104 */
  push32((uint32_t)(0x11d6f104u));
  /* 11d44b09 push 0x11d6f000 */
  push32((uint32_t)(0x11d6f000u));
  /* 11d44b0e call 0x11d44cb0 */
  push32(0x11d44b13u); f_11d44cb0();
  /* 11d44b13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d44b16 pop ebp */
  EBP = (pop32());
  /* 11d44b17 ret  */
  ESPCHK(0x11d44ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b20 @ 0x11d44b20 (21 bytes, 10 insns) */
void f_11d44b20(void) {
  FTRACE(0x11d44b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d44b20 push ebp */
  push32((uint32_t)(EBP));
  /* 11d44b21 mov ebp, esp */
  EBP = (ESP);
  /* 11d44b23 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d44b25 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d44b27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d44b2a push eax */
  push32((uint32_t)(EAX));
  /* 11d44b2b call 0x11d44ba0 */
  push32(0x11d44b30u); f_11d44ba0();
  /* 11d44b30 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d44b33 pop ebp */
  EBP = (pop32());
  /* 11d44b34 ret  */
  ESPCHK(0x11d44b20u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11d44b40 (21 bytes, 10 insns) */
void f_11d44b40(void) {
  FTRACE(0x11d44b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d44b40 push ebp */
  push32((uint32_t)(EBP));
  /* 11d44b41 mov ebp, esp */
  EBP = (ESP);
  /* 11d44b43 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d44b45 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d44b47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d44b4a push eax */
  push32((uint32_t)(EAX));
  /* 11d44b4b call 0x11d44ba0 */
  push32(0x11d44b50u); f_11d44ba0();
  /* 11d44b50 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d44b53 pop ebp */
  EBP = (pop32());
  /* 11d44b54 ret  */
  ESPCHK(0x11d44b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b60 @ 0x11d44b60 (19 bytes, 9 insns) */
void f_11d44b60(void) {
  FTRACE(0x11d44b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d44b60 push ebp */
  push32((uint32_t)(EBP));
  /* 11d44b61 mov ebp, esp */
  EBP = (ESP);
  /* 11d44b63 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d44b65 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d44b67 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d44b69 call 0x11d44ba0 */
  push32(0x11d44b6eu); f_11d44ba0();
  /* 11d44b6e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d44b71 pop ebp */
  EBP = (pop32());
  /* 11d44b72 ret  */
  ESPCHK(0x11d44b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b80 @ 0x11d44b80 (19 bytes, 9 insns) */
void f_11d44b80(void) {
  FTRACE(0x11d44b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d44b80 push ebp */
  push32((uint32_t)(EBP));
  /* 11d44b81 mov ebp, esp */
  EBP = (ESP);
  /* 11d44b83 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d44b85 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d44b87 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d44b89 call 0x11d44ba0 */
  push32(0x11d44b8eu); f_11d44ba0();
  /* 11d44b8e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d44b91 pop ebp */
  EBP = (pop32());
  /* 11d44b92 ret  */
  ESPCHK(0x11d44b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ba0 @ 0x11d44ba0 (227 bytes, 61 insns) */
void f_11d44ba0(void) {
  FTRACE(0x11d44ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d44ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d44ba1 mov ebp, esp */
  EBP = (ESP);
  /* 11d44ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d44ba4 call 0x11d44c90 */
  push32(0x11d44ba9u); f_11d44c90();
  /* 11d44ba9 cmp dword ptr [0x11d71690], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11d71690))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44bb0 jne 0x11d44bc3 */
  if (!C.zf) goto L_11d44bc3;
  /* 11d44bb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d44bb5 push eax */
  push32((uint32_t)(EAX));
  /* 11d44bb6 call dword ptr [0x11d743d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743d8))), 0x11d44bbcu);
  /* 11d44bbc push eax */
  push32((uint32_t)(EAX));
  /* 11d44bbd call dword ptr [0x11d743d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743d4))), 0x11d44bc3u);
L_11d44bc3:;
  /* 11d44bc3 mov dword ptr [0x11d7168c], 1 */
  w32((uint32_t)(0x11d7168c), (0x1u));
  /* 11d44bcd mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 11d44bd0 mov byte ptr [0x11d71688], cl */
  w8((uint32_t)(0x11d71688), (CL));
  /* 11d44bd6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44bda jne 0x11d44c23 */
  if (!C.zf) goto L_11d44c23;
  /* 11d44bdc cmp dword ptr [0x11d73178], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d73178))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44be3 je 0x11d44c11 */
  if (C.zf) goto L_11d44c11;
  /* 11d44be5 mov edx, dword ptr [0x11d73174] */
  EDX = (r32((uint32_t)(0x11d73174)));
  /* 11d44beb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11d44bee:;
  /* 11d44bee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d44bf1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d44bf4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d44bf7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d44bfa cmp ecx, dword ptr [0x11d73178] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11d73178))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44c00 jb 0x11d44c11 */
  if (C.cf) goto L_11d44c11;
  /* 11d44c02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d44c05 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44c08 je 0x11d44c0f */
  if (C.zf) goto L_11d44c0f;
  /* 11d44c0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d44c0d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x11d44c0fu);
L_11d44c0f:;
  /* 11d44c0f jmp 0x11d44bee */
  goto L_11d44bee;
L_11d44c11:;
  /* 11d44c11 push 0x11d6f724 */
  push32((uint32_t)(0x11d6f724u));
  /* 11d44c16 push 0x11d6f51c */
  push32((uint32_t)(0x11d6f51cu));
  /* 11d44c1b call 0x11d44cb0 */
  push32(0x11d44c20u); f_11d44cb0();
  /* 11d44c20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d44c23:;
  /* 11d44c23 push 0x11d6f92c */
  push32((uint32_t)(0x11d6f92cu));
  /* 11d44c28 push 0x11d6f828 */
  push32((uint32_t)(0x11d6f828u));
  /* 11d44c2d call 0x11d44cb0 */
  push32(0x11d44c32u); f_11d44cb0();
  /* 11d44c32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d44c35 cmp dword ptr [0x11d71694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d71694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44c3c jne 0x11d44c5e */
  if (!C.zf) goto L_11d44c5e;
  /* 11d44c3e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d44c40 call 0x11d46890 */
  push32(0x11d44c45u); f_11d46890();
  /* 11d44c45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d44c48 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11d44c4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d44c4d je 0x11d44c5e */
  if (C.zf) goto L_11d44c5e;
  /* 11d44c4f mov dword ptr [0x11d71694], 1 */
  w32((uint32_t)(0x11d71694), (0x1u));
  /* 11d44c59 call 0x11d471a0 */
  push32(0x11d44c5eu); f_11d471a0();
L_11d44c5e:;
  /* 11d44c5e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44c62 je 0x11d44c6b */
  if (C.zf) goto L_11d44c6b;
  /* 11d44c64 call 0x11d44ca0 */
  push32(0x11d44c69u); f_11d44ca0();
  /* 11d44c69 jmp 0x11d44c7f */
  goto L_11d44c7f;
L_11d44c6b:;
  /* 11d44c6b mov dword ptr [0x11d71690], 1 */
  w32((uint32_t)(0x11d71690), (0x1u));
  /* 11d44c75 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d44c78 push ecx */
  push32((uint32_t)(ECX));
  /* 11d44c79 call dword ptr [0x11d742dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d742dc))), 0x11d44c7fu);
L_11d44c7f:;
  /* 11d44c7f mov esp, ebp */
  ESP = (EBP);
  /* 11d44c81 pop ebp */
  EBP = (pop32());
  /* 11d44c82 ret  */
  ESPCHK(0x11d44ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c90 @ 0x11d44c90 (15 bytes, 7 insns) */
void f_11d44c90(void) {
  FTRACE(0x11d44c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d44c90 push ebp */
  push32((uint32_t)(EBP));
  /* 11d44c91 mov ebp, esp */
  EBP = (ESP);
  /* 11d44c93 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11d44c95 call 0x11d48d80 */
  push32(0x11d44c9au); f_11d48d80();
  /* 11d44c9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d44c9d pop ebp */
  EBP = (pop32());
  /* 11d44c9e ret  */
  ESPCHK(0x11d44c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ca0 @ 0x11d44ca0 (15 bytes, 7 insns) */
void f_11d44ca0(void) {
  FTRACE(0x11d44ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d44ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d44ca1 mov ebp, esp */
  EBP = (ESP);
  /* 11d44ca3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11d44ca5 call 0x11d48e20 */
  push32(0x11d44caau); f_11d48e20();
  /* 11d44caa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d44cad pop ebp */
  EBP = (pop32());
  /* 11d44cae ret  */
  ESPCHK(0x11d44ca0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x11d44cb0 (37 bytes, 16 insns) */
void f_11d44cb0(void) {
  FTRACE(0x11d44cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d44cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d44cb1 mov ebp, esp */
  EBP = (ESP);
L_11d44cb3:;
  /* 11d44cb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d44cb6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44cb9 jae 0x11d44cd3 */
  if (!C.cf) goto L_11d44cd3;
  /* 11d44cbb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d44cbe cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44cc1 je 0x11d44cc8 */
  if (C.zf) goto L_11d44cc8;
  /* 11d44cc3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d44cc6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x11d44cc8u);
L_11d44cc8:;
  /* 11d44cc8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d44ccb add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d44cce mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d44cd1 jmp 0x11d44cb3 */
  goto L_11d44cb3;
L_11d44cd3:;
  /* 11d44cd3 pop ebp */
  EBP = (pop32());
  /* 11d44cd4 ret  */
  ESPCHK(0x11d44cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ce0 @ 0x11d44ce0 (130 bytes, 42 insns) */
void f_11d44ce0(void) {
  FTRACE(0x11d44ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d44ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d44ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11d44ce3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d44ce4 call 0x11d48ca0 */
  push32(0x11d44ce9u); f_11d48ca0();
  /* 11d44ce9 call dword ptr [0x11d743e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743e4))), 0x11d44cefu);
  /* 11d44cef mov dword ptr [0x11d6fa5c], eax */
  w32((uint32_t)(0x11d6fa5c), (EAX));
  /* 11d44cf4 cmp dword ptr [0x11d6fa5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11d6fa5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44cfb jne 0x11d44d01 */
  if (!C.zf) goto L_11d44d01;
  /* 11d44cfd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d44cff jmp 0x11d44d5e */
  goto L_11d44d5e;
L_11d44d01:;
  /* 11d44d01 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11d44d03 push 0x11d6c6d0 */
  push32((uint32_t)(0x11d6c6d0u));
  /* 11d44d08 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d44d0a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11d44d0c push 1 */
  push32((uint32_t)(0x1u));
  /* 11d44d0e call 0x11d45790 */
  push32(0x11d44d13u); f_11d45790();
  /* 11d44d13 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d44d16 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d44d19 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44d1d je 0x11d44d34 */
  if (C.zf) goto L_11d44d34;
  /* 11d44d1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d44d22 push eax */
  push32((uint32_t)(EAX));
  /* 11d44d23 mov ecx, dword ptr [0x11d6fa5c] */
  ECX = (r32((uint32_t)(0x11d6fa5c)));
  /* 11d44d29 push ecx */
  push32((uint32_t)(ECX));
  /* 11d44d2a call dword ptr [0x11d743e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743e0))), 0x11d44d30u);
  /* 11d44d30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d44d32 jne 0x11d44d38 */
  if (!C.zf) goto L_11d44d38;
L_11d44d34:;
  /* 11d44d34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d44d36 jmp 0x11d44d5e */
  goto L_11d44d5e;
L_11d44d38:;
  /* 11d44d38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d44d3b push edx */
  push32((uint32_t)(EDX));
  /* 11d44d3c call 0x11d44da0 */
  push32(0x11d44d41u); f_11d44da0();
  /* 11d44d41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d44d44 call dword ptr [0x11d743dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743dc))), 0x11d44d4au);
  /* 11d44d4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d44d4d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11d44d4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d44d52 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11d44d59 mov eax, 1 */
  EAX = (0x1u);
L_11d44d5e:;
  /* 11d44d5e mov esp, ebp */
  ESP = (EBP);
  /* 11d44d60 pop ebp */
  EBP = (pop32());
  /* 11d44d61 ret  */
  ESPCHK(0x11d44ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d70 @ 0x11d44d70 (41 bytes, 11 insns) */
void f_11d44d70(void) {
  FTRACE(0x11d44d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d44d70 push ebp */
  push32((uint32_t)(EBP));
  /* 11d44d71 mov ebp, esp */
  EBP = (ESP);
  /* 11d44d73 call 0x11d48ce0 */
  push32(0x11d44d78u); f_11d48ce0();
  /* 11d44d78 cmp dword ptr [0x11d6fa5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11d6fa5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44d7f je 0x11d44d97 */
  if (C.zf) goto L_11d44d97;
  /* 11d44d81 mov eax, dword ptr [0x11d6fa5c] */
  EAX = (r32((uint32_t)(0x11d6fa5c)));
  /* 11d44d86 push eax */
  push32((uint32_t)(EAX));
  /* 11d44d87 call dword ptr [0x11d743d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743d0))), 0x11d44d8du);
  /* 11d44d8d mov dword ptr [0x11d6fa5c], 0xffffffff */
  w32((uint32_t)(0x11d6fa5c), (0xffffffffu));
L_11d44d97:;
  /* 11d44d97 pop ebp */
  EBP = (pop32());
  /* 11d44d98 ret  */
  ESPCHK(0x11d44d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10004da0 @ 0x11d44da0 (25 bytes, 8 insns) */
void f_11d44da0(void) {
  FTRACE(0x11d44da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d44da0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d44da1 mov ebp, esp */
  EBP = (ESP);
  /* 11d44da3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d44da6 mov dword ptr [eax + 0x50], 0x11d6fc00 */
  w32((uint32_t)(EAX + 0x50), (0x11d6fc00u));
  /* 11d44dad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d44db0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 11d44db7 pop ebp */
  EBP = (pop32());
  /* 11d44db8 ret  */
  ESPCHK(0x11d44da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004dc0 @ 0x11d44dc0 (152 bytes, 48 insns) */
void f_11d44dc0(void) {
  FTRACE(0x11d44dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d44dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d44dc1 mov ebp, esp */
  EBP = (ESP);
  /* 11d44dc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d44dc6 call dword ptr [0x11d743f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743f0))), 0x11d44dccu);
  /* 11d44dcc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d44dcf mov eax, dword ptr [0x11d6fa5c] */
  EAX = (r32((uint32_t)(0x11d6fa5c)));
  /* 11d44dd4 push eax */
  push32((uint32_t)(EAX));
  /* 11d44dd5 call dword ptr [0x11d743ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743ec))), 0x11d44ddbu);
  /* 11d44ddb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d44dde cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44de2 jne 0x11d44e47 */
  if (!C.zf) goto L_11d44e47;
  /* 11d44de4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 11d44de9 push 0x11d6c6d0 */
  push32((uint32_t)(0x11d6c6d0u));
  /* 11d44dee push 2 */
  push32((uint32_t)(0x2u));
  /* 11d44df0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11d44df2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d44df4 call 0x11d45790 */
  push32(0x11d44df9u); f_11d45790();
  /* 11d44df9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d44dfc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d44dff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44e03 je 0x11d44e3d */
  if (C.zf) goto L_11d44e3d;
  /* 11d44e05 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d44e08 push ecx */
  push32((uint32_t)(ECX));
  /* 11d44e09 mov edx, dword ptr [0x11d6fa5c] */
  EDX = (r32((uint32_t)(0x11d6fa5c)));
  /* 11d44e0f push edx */
  push32((uint32_t)(EDX));
  /* 11d44e10 call dword ptr [0x11d743e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743e0))), 0x11d44e16u);
  /* 11d44e16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d44e18 je 0x11d44e3d */
  if (C.zf) goto L_11d44e3d;
  /* 11d44e1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d44e1d push eax */
  push32((uint32_t)(EAX));
  /* 11d44e1e call 0x11d44da0 */
  push32(0x11d44e23u); f_11d44da0();
  /* 11d44e23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d44e26 call dword ptr [0x11d743dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743dc))), 0x11d44e2cu);
  /* 11d44e2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d44e2f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11d44e31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d44e34 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11d44e3b jmp 0x11d44e47 */
  goto L_11d44e47;
L_11d44e3d:;
  /* 11d44e3d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11d44e3f call 0x11d442f0 */
  push32(0x11d44e44u); f_11d442f0();
  /* 11d44e44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d44e47:;
  /* 11d44e47 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d44e4a push eax */
  push32((uint32_t)(EAX));
  /* 11d44e4b call dword ptr [0x11d743e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743e8))), 0x11d44e51u);
  /* 11d44e51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d44e54 mov esp, ebp */
  ESP = (EBP);
  /* 11d44e56 pop ebp */
  EBP = (pop32());
  /* 11d44e57 ret  */
  ESPCHK(0x11d44dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e60 @ 0x11d44e60 (263 bytes, 86 insns) */
void f_11d44e60(void) {
  FTRACE(0x11d44e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d44e60 push ebp */
  push32((uint32_t)(EBP));
  /* 11d44e61 mov ebp, esp */
  EBP = (ESP);
  /* 11d44e63 cmp dword ptr [0x11d6fa5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11d6fa5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44e6a je 0x11d44f65 */
  if (C.zf) goto L_11d44f65;
  /* 11d44e70 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44e74 jne 0x11d44e85 */
  if (!C.zf) goto L_11d44e85;
  /* 11d44e76 mov eax, dword ptr [0x11d6fa5c] */
  EAX = (r32((uint32_t)(0x11d6fa5c)));
  /* 11d44e7b push eax */
  push32((uint32_t)(EAX));
  /* 11d44e7c call dword ptr [0x11d743ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743ec))), 0x11d44e82u);
  /* 11d44e82 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11d44e85:;
  /* 11d44e85 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44e89 je 0x11d44f56 */
  if (C.zf) goto L_11d44f56;
  /* 11d44e8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d44e92 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44e96 je 0x11d44ea9 */
  if (C.zf) goto L_11d44ea9;
  /* 11d44e98 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d44e9a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d44e9d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 11d44ea0 push eax */
  push32((uint32_t)(EAX));
  /* 11d44ea1 call 0x11d45e10 */
  push32(0x11d44ea6u); f_11d45e10();
  /* 11d44ea6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d44ea9:;
  /* 11d44ea9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d44eac cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44eb0 je 0x11d44ec3 */
  if (C.zf) goto L_11d44ec3;
  /* 11d44eb2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d44eb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d44eb7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11d44eba push eax */
  push32((uint32_t)(EAX));
  /* 11d44ebb call 0x11d45e10 */
  push32(0x11d44ec0u); f_11d45e10();
  /* 11d44ec0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d44ec3:;
  /* 11d44ec3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d44ec6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44eca je 0x11d44edd */
  if (C.zf) goto L_11d44edd;
  /* 11d44ecc push 2 */
  push32((uint32_t)(0x2u));
  /* 11d44ece mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d44ed1 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 11d44ed4 push eax */
  push32((uint32_t)(EAX));
  /* 11d44ed5 call 0x11d45e10 */
  push32(0x11d44edau); f_11d45e10();
  /* 11d44eda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d44edd:;
  /* 11d44edd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d44ee0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44ee4 je 0x11d44ef7 */
  if (C.zf) goto L_11d44ef7;
  /* 11d44ee6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d44ee8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d44eeb mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 11d44eee push eax */
  push32((uint32_t)(EAX));
  /* 11d44eef call 0x11d45e10 */
  push32(0x11d44ef4u); f_11d45e10();
  /* 11d44ef4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d44ef7:;
  /* 11d44ef7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d44efa cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44efe je 0x11d44f11 */
  if (C.zf) goto L_11d44f11;
  /* 11d44f00 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d44f02 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d44f05 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11d44f08 push eax */
  push32((uint32_t)(EAX));
  /* 11d44f09 call 0x11d45e10 */
  push32(0x11d44f0eu); f_11d45e10();
  /* 11d44f0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d44f11:;
  /* 11d44f11 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d44f14 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44f18 je 0x11d44f2b */
  if (C.zf) goto L_11d44f2b;
  /* 11d44f1a push 2 */
  push32((uint32_t)(0x2u));
  /* 11d44f1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d44f1f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 11d44f22 push eax */
  push32((uint32_t)(EAX));
  /* 11d44f23 call 0x11d45e10 */
  push32(0x11d44f28u); f_11d45e10();
  /* 11d44f28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d44f2b:;
  /* 11d44f2b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d44f2e cmp dword ptr [ecx + 0x50], 0x11d6fc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x11d6fc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44f35 je 0x11d44f48 */
  if (C.zf) goto L_11d44f48;
  /* 11d44f37 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d44f39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d44f3c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11d44f3f push eax */
  push32((uint32_t)(EAX));
  /* 11d44f40 call 0x11d45e10 */
  push32(0x11d44f45u); f_11d45e10();
  /* 11d44f45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d44f48:;
  /* 11d44f48 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d44f4a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d44f4d push ecx */
  push32((uint32_t)(ECX));
  /* 11d44f4e call 0x11d45e10 */
  push32(0x11d44f53u); f_11d45e10();
  /* 11d44f53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d44f56:;
  /* 11d44f56 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d44f58 mov edx, dword ptr [0x11d6fa5c] */
  EDX = (r32((uint32_t)(0x11d6fa5c)));
  /* 11d44f5e push edx */
  push32((uint32_t)(EDX));
  /* 11d44f5f call dword ptr [0x11d743e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743e0))), 0x11d44f65u);
L_11d44f65:;
  /* 11d44f65 pop ebp */
  EBP = (pop32());
  /* 11d44f66 ret  */
  ESPCHK(0x11d44e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f70 @ 0x11d44f70 (11 bytes, 5 insns) */
void f_11d44f70(void) {
  FTRACE(0x11d44f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d44f70 push ebp */
  push32((uint32_t)(EBP));
  /* 11d44f71 mov ebp, esp */
  EBP = (ESP);
  /* 11d44f73 call dword ptr [0x11d743dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743dc))), 0x11d44f79u);
  /* 11d44f79 pop ebp */
  EBP = (pop32());
  /* 11d44f7a ret  */
  ESPCHK(0x11d44f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f80 @ 0x11d44f80 (11 bytes, 5 insns) */
void f_11d44f80(void) {
  FTRACE(0x11d44f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d44f80 push ebp */
  push32((uint32_t)(EBP));
  /* 11d44f81 mov ebp, esp */
  EBP = (ESP);
  /* 11d44f83 call dword ptr [0x11d743f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743f4))), 0x11d44f89u);
  /* 11d44f89 pop ebp */
  EBP = (pop32());
  /* 11d44f8a ret  */
  ESPCHK(0x11d44f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f90 @ 0x11d44f90 (804 bytes, 236 insns) */
void f_11d44f90(void) {
  FTRACE(0x11d44f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d44f90 push ebp */
  push32((uint32_t)(EBP));
  /* 11d44f91 mov ebp, esp */
  EBP = (ESP);
  /* 11d44f93 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d44f96 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 11d44f9b push 0x11d6c6dc */
  push32((uint32_t)(0x11d6c6dcu));
  /* 11d44fa0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d44fa2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11d44fa7 call 0x11d45380 */
  push32(0x11d44facu); f_11d45380();
  /* 11d44fac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d44faf mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11d44fb2 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44fb6 jne 0x11d44fc2 */
  if (!C.zf) goto L_11d44fc2;
  /* 11d44fb8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11d44fba call 0x11d442f0 */
  push32(0x11d44fbfu); f_11d442f0();
  /* 11d44fbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d44fc2:;
  /* 11d44fc2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d44fc5 mov dword ptr [0x11d73020], eax */
  w32((uint32_t)(0x11d73020), (EAX));
  /* 11d44fca mov dword ptr [0x11d7315c], 0x20 */
  w32((uint32_t)(0x11d7315c), (0x20u));
  /* 11d44fd4 jmp 0x11d44fdf */
  goto L_11d44fdf;
L_11d44fd6:;
  /* 11d44fd6 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d44fd9 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d44fdc mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_11d44fdf:;
  /* 11d44fdf mov edx, dword ptr [0x11d73020] */
  EDX = (r32((uint32_t)(0x11d73020)));
  /* 11d44fe5 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d44feb cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d44fee jae 0x11d45013 */
  if (!C.cf) goto L_11d45013;
  /* 11d44ff0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d44ff3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11d44ff7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d44ffa mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11d45000 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d45003 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11d45007 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d4500a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11d45011 jmp 0x11d44fd6 */
  goto L_11d44fd6;
L_11d45013:;
  /* 11d45013 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 11d45016 push ecx */
  push32((uint32_t)(ECX));
  /* 11d45017 call dword ptr [0x11d743a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743a0))), 0x11d4501du);
  /* 11d4501d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 11d45020 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d45026 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d45028 je 0x11d451b5 */
  if (C.zf) goto L_11d451b5;
  /* 11d4502e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45032 je 0x11d451b5 */
  if (C.zf) goto L_11d451b5;
  /* 11d45038 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4503b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d4503d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 11d45040 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d45043 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45046 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d45049 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4504c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4504f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 11d45052 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45059 jge 0x11d45063 */
  if ((C.sf==C.of)) goto L_11d45063;
  /* 11d4505b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 11d4505e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11d45061 jmp 0x11d4506a */
  goto L_11d4506a;
L_11d45063:;
  /* 11d45063 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_11d4506a:;
  /* 11d4506a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11d4506d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11d45070 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 11d45077 jmp 0x11d45082 */
  goto L_11d45082;
L_11d45079:;
  /* 11d45079 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11d4507c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4507f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_11d45082:;
  /* 11d45082 mov ecx, dword ptr [0x11d7315c] */
  ECX = (r32((uint32_t)(0x11d7315c)));
  /* 11d45088 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4508b jge 0x11d45122 */
  if ((C.sf==C.of)) goto L_11d45122;
  /* 11d45091 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11d45096 push 0x11d6c6dc */
  push32((uint32_t)(0x11d6c6dcu));
  /* 11d4509b push 2 */
  push32((uint32_t)(0x2u));
  /* 11d4509d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11d450a2 call 0x11d45380 */
  push32(0x11d450a7u); f_11d45380();
  /* 11d450a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d450aa mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11d450ad cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d450b1 jne 0x11d450be */
  if (!C.zf) goto L_11d450be;
  /* 11d450b3 mov edx, dword ptr [0x11d7315c] */
  EDX = (r32((uint32_t)(0x11d7315c)));
  /* 11d450b9 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11d450bc jmp 0x11d45122 */
  goto L_11d45122;
L_11d450be:;
  /* 11d450be mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11d450c1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d450c4 mov dword ptr [eax*4 + 0x11d73020], ecx */
  w32((uint32_t)(EAX*4 + 0x11d73020), (ECX));
  /* 11d450cb mov edx, dword ptr [0x11d7315c] */
  EDX = (r32((uint32_t)(0x11d7315c)));
  /* 11d450d1 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d450d4 mov dword ptr [0x11d7315c], edx */
  w32((uint32_t)(0x11d7315c), (EDX));
  /* 11d450da jmp 0x11d450e5 */
  goto L_11d450e5;
L_11d450dc:;
  /* 11d450dc mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d450df add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d450e2 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_11d450e5:;
  /* 11d450e5 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11d450e8 mov edx, dword ptr [ecx*4 + 0x11d73020] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11d73020)));
  /* 11d450ef add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d450f5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d450f8 jae 0x11d4511d */
  if (!C.cf) goto L_11d4511d;
  /* 11d450fa mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d450fd mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11d45101 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d45104 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11d4510a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d4510d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11d45111 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d45114 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11d4511b jmp 0x11d450dc */
  goto L_11d450dc;
L_11d4511d:;
  /* 11d4511d jmp 0x11d45079 */
  goto L_11d45079;
L_11d45122:;
  /* 11d45122 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11d45129 jmp 0x11d45146 */
  goto L_11d45146;
L_11d4512b:;
  /* 11d4512b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11d4512e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45131 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 11d45134 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d45137 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4513a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d4513d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 11d45140 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45143 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_11d45146:;
  /* 11d45146 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11d45149 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4514c jge 0x11d451b5 */
  if ((C.sf==C.of)) goto L_11d451b5;
  /* 11d4514e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 11d45151 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45154 je 0x11d451b0 */
  if (C.zf) goto L_11d451b0;
  /* 11d45156 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d45159 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d4515c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11d4515f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d45161 je 0x11d451b0 */
  if (C.zf) goto L_11d451b0;
  /* 11d45163 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d45166 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d45169 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11d4516c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4516e jne 0x11d45180 */
  if (!C.zf) goto L_11d45180;
  /* 11d45170 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11d45173 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d45175 push edx */
  push32((uint32_t)(EDX));
  /* 11d45176 call dword ptr [0x11d743cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743cc))), 0x11d4517cu);
  /* 11d4517c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4517e je 0x11d451b0 */
  if (C.zf) goto L_11d451b0;
L_11d45180:;
  /* 11d45180 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11d45183 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11d45186 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11d45189 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11d4518c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4518f mov edx, dword ptr [eax*4 + 0x11d73020] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11d73020)));
  /* 11d45196 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45198 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 11d4519b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d4519e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11d451a1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d451a3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11d451a5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d451a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d451ab mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d451ad mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_11d451b0:;
  /* 11d451b0 jmp 0x11d4512b */
  goto L_11d4512b;
L_11d451b5:;
  /* 11d451b5 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11d451bc jmp 0x11d451c7 */
  goto L_11d451c7;
L_11d451be:;
  /* 11d451be mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11d451c1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d451c4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_11d451c7:;
  /* 11d451c7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d451cb jge 0x11d452a4 */
  if ((C.sf==C.of)) goto L_11d452a4;
  /* 11d451d1 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11d451d4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d451d7 mov edx, dword ptr [0x11d73020] */
  EDX = (r32((uint32_t)(0x11d73020)));
  /* 11d451dd add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d451df mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 11d451e2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d451e5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d451e8 jne 0x11d45290 */
  if (!C.zf) goto L_11d45290;
  /* 11d451ee mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d451f1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 11d451f5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d451f9 jne 0x11d45204 */
  if (!C.zf) goto L_11d45204;
  /* 11d451fb mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 11d45202 jmp 0x11d45214 */
  goto L_11d45214;
L_11d45204:;
  /* 11d45204 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 11d45207 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4520a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d4520c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4520e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45211 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_11d45214:;
  /* 11d45214 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11d45217 push eax */
  push32((uint32_t)(EAX));
  /* 11d45218 call dword ptr [0x11d743b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743b0))), 0x11d4521eu);
  /* 11d4521e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 11d45221 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45225 je 0x11d4527f */
  if (C.zf) goto L_11d4527f;
  /* 11d45227 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11d4522a push ecx */
  push32((uint32_t)(ECX));
  /* 11d4522b call dword ptr [0x11d743cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743cc))), 0x11d45231u);
  /* 11d45231 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 11d45234 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45238 je 0x11d4527f */
  if (C.zf) goto L_11d4527f;
  /* 11d4523a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d4523d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11d45240 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11d45242 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 11d45245 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d4524b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4524e jne 0x11d45260 */
  if (!C.zf) goto L_11d45260;
  /* 11d45250 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d45253 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11d45256 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 11d45258 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d4525b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 11d4525e jmp 0x11d4527d */
  goto L_11d4527d;
L_11d45260:;
  /* 11d45260 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 11d45263 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d45269 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4526c jne 0x11d4527d */
  if (!C.zf) goto L_11d4527d;
  /* 11d4526e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d45271 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11d45274 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 11d45277 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d4527a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_11d4527d:;
  /* 11d4527d jmp 0x11d4528e */
  goto L_11d4528e;
L_11d4527f:;
  /* 11d4527f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d45282 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11d45285 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11d45288 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d4528b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_11d4528e:;
  /* 11d4528e jmp 0x11d4529f */
  goto L_11d4529f;
L_11d45290:;
  /* 11d45290 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d45293 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11d45296 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 11d45299 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d4529c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_11d4529f:;
  /* 11d4529f jmp 0x11d451be */
  goto L_11d451be;
L_11d452a4:;
  /* 11d452a4 mov eax, dword ptr [0x11d7315c] */
  EAX = (r32((uint32_t)(0x11d7315c)));
  /* 11d452a9 push eax */
  push32((uint32_t)(EAX));
  /* 11d452aa call dword ptr [0x11d743f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743f8))), 0x11d452b0u);
  /* 11d452b0 mov esp, ebp */
  ESP = (EBP);
  /* 11d452b2 pop ebp */
  EBP = (pop32());
  /* 11d452b3 ret  */
  ESPCHK(0x11d44f90u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x11d452c0 (155 bytes, 45 insns) */
void f_11d452c0(void) {
  FTRACE(0x11d452c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d452c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d452c1 mov ebp, esp */
  EBP = (ESP);
  /* 11d452c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d452c6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11d452cd jmp 0x11d452d8 */
  goto L_11d452d8;
L_11d452cf:;
  /* 11d452cf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d452d2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d452d5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11d452d8:;
  /* 11d452d8 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d452dc jge 0x11d45357 */
  if ((C.sf==C.of)) goto L_11d45357;
  /* 11d452de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d452e1 cmp dword ptr [ecx*4 + 0x11d73020], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11d73020))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d452e9 je 0x11d45352 */
  if (C.zf) goto L_11d45352;
  /* 11d452eb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d452ee mov eax, dword ptr [edx*4 + 0x11d73020] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11d73020)));
  /* 11d452f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d452f8 jmp 0x11d45303 */
  goto L_11d45303;
L_11d452fa:;
  /* 11d452fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d452fd add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45300 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11d45303:;
  /* 11d45303 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d45306 mov eax, dword ptr [edx*4 + 0x11d73020] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11d73020)));
  /* 11d4530d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45312 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45315 jae 0x11d4532f */
  if (!C.cf) goto L_11d4532f;
  /* 11d45317 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4531a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4531e je 0x11d4532d */
  if (C.zf) goto L_11d4532d;
  /* 11d45320 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d45323 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45326 push edx */
  push32((uint32_t)(EDX));
  /* 11d45327 call dword ptr [0x11d7439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7439c))), 0x11d4532du);
L_11d4532d:;
  /* 11d4532d jmp 0x11d452fa */
  goto L_11d452fa;
L_11d4532f:;
  /* 11d4532f push 2 */
  push32((uint32_t)(0x2u));
  /* 11d45331 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d45334 mov ecx, dword ptr [eax*4 + 0x11d73020] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11d73020)));
  /* 11d4533b push ecx */
  push32((uint32_t)(ECX));
  /* 11d4533c call 0x11d45e10 */
  push32(0x11d45341u); f_11d45e10();
  /* 11d45341 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45344 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d45347 mov dword ptr [edx*4 + 0x11d73020], 0 */
  w32((uint32_t)(EDX*4 + 0x11d73020), (0x0u));
L_11d45352:;
  /* 11d45352 jmp 0x11d452cf */
  goto L_11d452cf;
L_11d45357:;
  /* 11d45357 mov esp, ebp */
  ESP = (EBP);
  /* 11d45359 pop ebp */
  EBP = (pop32());
  /* 11d4535a ret  */
  ESPCHK(0x11d452c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005360 @ 0x11d45360 (29 bytes, 13 insns) */
void f_11d45360(void) {
  FTRACE(0x11d45360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d45360 push ebp */
  push32((uint32_t)(EBP));
  /* 11d45361 mov ebp, esp */
  EBP = (ESP);
  /* 11d45363 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45365 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45367 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d45369 mov eax, dword ptr [0x11d71838] */
  EAX = (r32((uint32_t)(0x11d71838)));
  /* 11d4536e push eax */
  push32((uint32_t)(EAX));
  /* 11d4536f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d45372 push ecx */
  push32((uint32_t)(ECX));
  /* 11d45373 call 0x11d453d0 */
  push32(0x11d45378u); f_11d453d0();
  /* 11d45378 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4537b pop ebp */
  EBP = (pop32());
  /* 11d4537c ret  */
  ESPCHK(0x11d45360u, _esp0);
  ESP += 4; return;
}

/* FUN_10005380 @ 0x11d45380 (35 bytes, 16 insns) */
void f_11d45380(void) {
  FTRACE(0x11d45380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d45380 push ebp */
  push32((uint32_t)(EBP));
  /* 11d45381 mov ebp, esp */
  EBP = (ESP);
  /* 11d45383 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d45386 push eax */
  push32((uint32_t)(EAX));
  /* 11d45387 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d4538a push ecx */
  push32((uint32_t)(ECX));
  /* 11d4538b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4538e push edx */
  push32((uint32_t)(EDX));
  /* 11d4538f mov eax, dword ptr [0x11d71838] */
  EAX = (r32((uint32_t)(0x11d71838)));
  /* 11d45394 push eax */
  push32((uint32_t)(EAX));
  /* 11d45395 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d45398 push ecx */
  push32((uint32_t)(ECX));
  /* 11d45399 call 0x11d453d0 */
  push32(0x11d4539eu); f_11d453d0();
  /* 11d4539e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d453a1 pop ebp */
  EBP = (pop32());
  /* 11d453a2 ret  */
  ESPCHK(0x11d45380u, _esp0);
  ESP += 4; return;
}

/* FUN_100053b0 @ 0x11d453b0 (27 bytes, 13 insns) */
void f_11d453b0(void) {
  FTRACE(0x11d453b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d453b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d453b1 mov ebp, esp */
  EBP = (ESP);
  /* 11d453b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d453b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d453b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d453b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d453bc push eax */
  push32((uint32_t)(EAX));
  /* 11d453bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d453c0 push ecx */
  push32((uint32_t)(ECX));
  /* 11d453c1 call 0x11d453d0 */
  push32(0x11d453c6u); f_11d453d0();
  /* 11d453c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d453c9 pop ebp */
  EBP = (pop32());
  /* 11d453ca ret  */
  ESPCHK(0x11d453b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100053d0 @ 0x11d453d0 (94 bytes, 38 insns) */
void f_11d453d0(void) {
  FTRACE(0x11d453d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d453d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d453d1 mov ebp, esp */
  EBP = (ESP);
  /* 11d453d3 push ecx */
  push32((uint32_t)(ECX));
L_11d453d4:;
  /* 11d453d4 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d453d6 call 0x11d48d80 */
  push32(0x11d453dbu); f_11d48d80();
  /* 11d453db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d453de mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d453e1 push eax */
  push32((uint32_t)(EAX));
  /* 11d453e2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d453e5 push ecx */
  push32((uint32_t)(ECX));
  /* 11d453e6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d453e9 push edx */
  push32((uint32_t)(EDX));
  /* 11d453ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d453ed push eax */
  push32((uint32_t)(EAX));
  /* 11d453ee call 0x11d45450 */
  push32(0x11d453f3u); f_11d45450();
  /* 11d453f3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d453f6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d453f9 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d453fb call 0x11d48e20 */
  push32(0x11d45400u); f_11d48e20();
  /* 11d45400 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45403 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45407 jne 0x11d4540f */
  if (!C.zf) goto L_11d4540f;
  /* 11d45409 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4540d jne 0x11d45414 */
  if (!C.zf) goto L_11d45414;
L_11d4540f:;
  /* 11d4540f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d45412 jmp 0x11d4542a */
  goto L_11d4542a;
L_11d45414:;
  /* 11d45414 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d45417 push ecx */
  push32((uint32_t)(ECX));
  /* 11d45418 call 0x11d490c0 */
  push32(0x11d4541du); f_11d490c0();
  /* 11d4541d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45420 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d45422 jne 0x11d45428 */
  if (!C.zf) goto L_11d45428;
  /* 11d45424 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d45426 jmp 0x11d4542a */
  goto L_11d4542a;
L_11d45428:;
  /* 11d45428 jmp 0x11d453d4 */
  goto L_11d453d4;
L_11d4542a:;
  /* 11d4542a mov esp, ebp */
  ESP = (EBP);
  /* 11d4542c pop ebp */
  EBP = (pop32());
  /* 11d4542d ret  */
  ESPCHK(0x11d453d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005430 @ 0x11d45430 (23 bytes, 11 insns) */
void f_11d45430(void) {
  FTRACE(0x11d45430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d45430 push ebp */
  push32((uint32_t)(EBP));
  /* 11d45431 mov ebp, esp */
  EBP = (ESP);
  /* 11d45433 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45435 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45437 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d45439 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4543c push eax */
  push32((uint32_t)(EAX));
  /* 11d4543d call 0x11d45450 */
  push32(0x11d45442u); f_11d45450();
  /* 11d45442 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45445 pop ebp */
  EBP = (pop32());
  /* 11d45446 ret  */
  ESPCHK(0x11d45430u, _esp0);
  ESP += 4; return;
}

/* FUN_10005450 @ 0x11d45450 (787 bytes, 254 insns) */
void f_11d45450(void) {
  FTRACE(0x11d45450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d45450 push ebp */
  push32((uint32_t)(EBP));
  /* 11d45451 mov ebp, esp */
  EBP = (ESP);
  /* 11d45453 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d45456 push ebx */
  push32((uint32_t)(EBX));
  /* 11d45457 push esi */
  push32((uint32_t)(ESI));
  /* 11d45458 push edi */
  push32((uint32_t)(EDI));
  /* 11d45459 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11d45460 mov eax, dword ptr [0x11d6fa84] */
  EAX = (r32((uint32_t)(0x11d6fa84)));
  /* 11d45465 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11d45468 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4546a je 0x11d4549c */
  if (C.zf) goto L_11d4549c;
L_11d4546c:;
  /* 11d4546c call 0x11d46520 */
  push32(0x11d45471u); f_11d46520();
  /* 11d45471 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d45473 jne 0x11d45496 */
  if (!C.zf) goto L_11d45496;
  /* 11d45475 push 0x11d6c7d0 */
  push32((uint32_t)(0x11d6c7d0u));
  /* 11d4547a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4547c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 11d45481 push 0x11d6c7c4 */
  push32((uint32_t)(0x11d6c7c4u));
  /* 11d45486 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d45488 call 0x11d44440 */
  push32(0x11d4548du); f_11d44440();
  /* 11d4548d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45490 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45493 jne 0x11d45496 */
  if (!C.zf) goto L_11d45496;
  /* 11d45495 int3  */
  x86_unimpl("int3 @ 0x11d45495");
L_11d45496:;
  /* 11d45496 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d45498 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4549a jne 0x11d4546c */
  if (!C.zf) goto L_11d4546c;
L_11d4549c:;
  /* 11d4549c mov edx, dword ptr [0x11d6fa88] */
  EDX = (r32((uint32_t)(0x11d6fa88)));
  /* 11d454a2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11d454a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d454a8 cmp eax, dword ptr [0x11d6fa8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11d6fa8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d454ae jne 0x11d454b1 */
  if (!C.zf) goto L_11d454b1;
  /* 11d454b0 int3  */
  x86_unimpl("int3 @ 0x11d454b0");
L_11d454b1:;
  /* 11d454b1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d454b4 push ecx */
  push32((uint32_t)(ECX));
  /* 11d454b5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d454b8 push edx */
  push32((uint32_t)(EDX));
  /* 11d454b9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d454bc push eax */
  push32((uint32_t)(EAX));
  /* 11d454bd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d454c0 push ecx */
  push32((uint32_t)(ECX));
  /* 11d454c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d454c4 push edx */
  push32((uint32_t)(EDX));
  /* 11d454c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d454c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d454c9 call dword ptr [0x11d6fc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d6fc90))), 0x11d454cfu);
  /* 11d454cf add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d454d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d454d4 jne 0x11d45534 */
  if (!C.zf) goto L_11d45534;
  /* 11d454d6 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d454da je 0x11d45507 */
  if (C.zf) goto L_11d45507;
L_11d454dc:;
  /* 11d454dc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d454df push eax */
  push32((uint32_t)(EAX));
  /* 11d454e0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d454e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d454e4 push 0x11d6c78c */
  push32((uint32_t)(0x11d6c78cu));
  /* 11d454e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d454eb push 0 */
  push32((uint32_t)(0x0u));
  /* 11d454ed push 0 */
  push32((uint32_t)(0x0u));
  /* 11d454ef push 0 */
  push32((uint32_t)(0x0u));
  /* 11d454f1 call 0x11d44440 */
  push32(0x11d454f6u); f_11d44440();
  /* 11d454f6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d454f9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d454fc jne 0x11d454ff */
  if (!C.zf) goto L_11d454ff;
  /* 11d454fe int3  */
  x86_unimpl("int3 @ 0x11d454fe");
L_11d454ff:;
  /* 11d454ff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d45501 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d45503 jne 0x11d454dc */
  if (!C.zf) goto L_11d454dc;
  /* 11d45505 jmp 0x11d4552d */
  goto L_11d4552d;
L_11d45507:;
  /* 11d45507 push 0x11d6c768 */
  push32((uint32_t)(0x11d6c768u));
  /* 11d4550c push 0x11d6c764 */
  push32((uint32_t)(0x11d6c764u));
  /* 11d45511 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45513 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45515 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45517 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45519 call 0x11d44440 */
  push32(0x11d4551eu); f_11d44440();
  /* 11d4551e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45521 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45524 jne 0x11d45527 */
  if (!C.zf) goto L_11d45527;
  /* 11d45526 int3  */
  x86_unimpl("int3 @ 0x11d45526");
L_11d45527:;
  /* 11d45527 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d45529 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4552b jne 0x11d45507 */
  if (!C.zf) goto L_11d45507;
L_11d4552d:;
  /* 11d4552d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4552f jmp 0x11d4575c */
  goto L_11d4575c;
L_11d45534:;
  /* 11d45534 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d45537 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d4553d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45540 je 0x11d45556 */
  if (C.zf) goto L_11d45556;
  /* 11d45542 mov edx, dword ptr [0x11d6fa84] */
  EDX = (r32((uint32_t)(0x11d6fa84)));
  /* 11d45548 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11d4554b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4554d jne 0x11d45556 */
  if (!C.zf) goto L_11d45556;
  /* 11d4554f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_11d45556:;
  /* 11d45556 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4555a ja 0x11d45567 */
  if ((!C.cf&&!C.zf)) goto L_11d45567;
  /* 11d4555c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4555f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45562 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45565 jbe 0x11d45593 */
  if ((C.cf||C.zf)) goto L_11d45593;
L_11d45567:;
  /* 11d45567 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4556a push ecx */
  push32((uint32_t)(ECX));
  /* 11d4556b push 0x11d6c740 */
  push32((uint32_t)(0x11d6c740u));
  /* 11d45570 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45572 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45574 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45576 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d45578 call 0x11d44440 */
  push32(0x11d4557du); f_11d44440();
  /* 11d4557d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45580 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45583 jne 0x11d45586 */
  if (!C.zf) goto L_11d45586;
  /* 11d45585 int3  */
  x86_unimpl("int3 @ 0x11d45585");
L_11d45586:;
  /* 11d45586 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d45588 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4558a jne 0x11d45567 */
  if (!C.zf) goto L_11d45567;
  /* 11d4558c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4558e jmp 0x11d4575c */
  goto L_11d4575c;
L_11d45593:;
  /* 11d45593 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d45596 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d4559b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4559e je 0x11d455e0 */
  if (C.zf) goto L_11d455e0;
  /* 11d455a0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d455a4 je 0x11d455e0 */
  if (C.zf) goto L_11d455e0;
  /* 11d455a6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d455a9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d455af cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d455b2 je 0x11d455e0 */
  if (C.zf) goto L_11d455e0;
  /* 11d455b4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d455b8 je 0x11d455e0 */
  if (C.zf) goto L_11d455e0;
L_11d455ba:;
  /* 11d455ba push 0x11d6c70c */
  push32((uint32_t)(0x11d6c70cu));
  /* 11d455bf push 0x11d6c764 */
  push32((uint32_t)(0x11d6c764u));
  /* 11d455c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d455c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d455c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d455ca push 1 */
  push32((uint32_t)(0x1u));
  /* 11d455cc call 0x11d44440 */
  push32(0x11d455d1u); f_11d44440();
  /* 11d455d1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d455d4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d455d7 jne 0x11d455da */
  if (!C.zf) goto L_11d455da;
  /* 11d455d9 int3  */
  x86_unimpl("int3 @ 0x11d455d9");
L_11d455da:;
  /* 11d455da xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d455dc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d455de jne 0x11d455ba */
  if (!C.zf) goto L_11d455ba;
L_11d455e0:;
  /* 11d455e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d455e3 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d455e6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11d455e9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d455ec push ecx */
  push32((uint32_t)(ECX));
  /* 11d455ed call 0x11d491d0 */
  push32(0x11d455f2u); f_11d491d0();
  /* 11d455f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d455f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d455f8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d455fc jne 0x11d45605 */
  if (!C.zf) goto L_11d45605;
  /* 11d455fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d45600 jmp 0x11d4575c */
  goto L_11d4575c;
L_11d45605:;
  /* 11d45605 mov edx, dword ptr [0x11d6fa88] */
  EDX = (r32((uint32_t)(0x11d6fa88)));
  /* 11d4560b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4560e mov dword ptr [0x11d6fa88], edx */
  w32((uint32_t)(0x11d6fa88), (EDX));
  /* 11d45614 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45618 je 0x11d45663 */
  if (C.zf) goto L_11d45663;
  /* 11d4561a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4561d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11d45623 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d45626 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11d4562d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d45630 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11d45637 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4563a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 11d45641 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d45644 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d45647 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11d4564a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4564d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 11d45654 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d45657 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 11d4565e jmp 0x11d45703 */
  goto L_11d45703;
L_11d45663:;
  /* 11d45663 mov edx, dword ptr [0x11d7169c] */
  EDX = (r32((uint32_t)(0x11d7169c)));
  /* 11d45669 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4566c mov dword ptr [0x11d7169c], edx */
  w32((uint32_t)(0x11d7169c), (EDX));
  /* 11d45672 mov eax, dword ptr [0x11d716a4] */
  EAX = (r32((uint32_t)(0x11d716a4)));
  /* 11d45677 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4567a mov dword ptr [0x11d716a4], eax */
  w32((uint32_t)(0x11d716a4), (EAX));
  /* 11d4567f mov ecx, dword ptr [0x11d716a4] */
  ECX = (r32((uint32_t)(0x11d716a4)));
  /* 11d45685 cmp ecx, dword ptr [0x11d716a8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11d716a8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4568b jbe 0x11d45699 */
  if ((C.cf||C.zf)) goto L_11d45699;
  /* 11d4568d mov edx, dword ptr [0x11d716a4] */
  EDX = (r32((uint32_t)(0x11d716a4)));
  /* 11d45693 mov dword ptr [0x11d716a8], edx */
  w32((uint32_t)(0x11d716a8), (EDX));
L_11d45699:;
  /* 11d45699 cmp dword ptr [0x11d716a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d716a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d456a0 je 0x11d456af */
  if (C.zf) goto L_11d456af;
  /* 11d456a2 mov eax, dword ptr [0x11d716a0] */
  EAX = (r32((uint32_t)(0x11d716a0)));
  /* 11d456a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d456aa mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11d456ad jmp 0x11d456b8 */
  goto L_11d456b8;
L_11d456af:;
  /* 11d456af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d456b2 mov dword ptr [0x11d71698], edx */
  w32((uint32_t)(0x11d71698), (EDX));
L_11d456b8:;
  /* 11d456b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d456bb mov ecx, dword ptr [0x11d716a0] */
  ECX = (r32((uint32_t)(0x11d716a0)));
  /* 11d456c1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11d456c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d456c6 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 11d456cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d456d0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d456d3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11d456d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d456d9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d456dc mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 11d456df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d456e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d456e5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11d456e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d456eb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d456ee mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11d456f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d456f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d456f7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 11d456fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d456fd mov dword ptr [0x11d716a0], ecx */
  w32((uint32_t)(0x11d716a0), (ECX));
L_11d45703:;
  /* 11d45703 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d45705 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d45707 mov dl, byte ptr [0x11d6fa90] */
  DL = (r8((uint32_t)(0x11d6fa90)));
  /* 11d4570d push edx */
  push32((uint32_t)(EDX));
  /* 11d4570e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d45711 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45714 push eax */
  push32((uint32_t)(EAX));
  /* 11d45715 call 0x11d490f0 */
  push32(0x11d4571au); f_11d490f0();
  /* 11d4571a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4571d push 4 */
  push32((uint32_t)(0x4u));
  /* 11d4571f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d45721 mov cl, byte ptr [0x11d6fa90] */
  CL = (r8((uint32_t)(0x11d6fa90)));
  /* 11d45727 push ecx */
  push32((uint32_t)(ECX));
  /* 11d45728 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4572b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4572e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 11d45732 push ecx */
  push32((uint32_t)(ECX));
  /* 11d45733 call 0x11d490f0 */
  push32(0x11d45738u); f_11d490f0();
  /* 11d45738 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4573b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4573e push edx */
  push32((uint32_t)(EDX));
  /* 11d4573f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d45741 mov al, byte ptr [0x11d6fa92] */
  AL = (r8((uint32_t)(0x11d6fa92)));
  /* 11d45746 push eax */
  push32((uint32_t)(EAX));
  /* 11d45747 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4574a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4574d push ecx */
  push32((uint32_t)(ECX));
  /* 11d4574e call 0x11d490f0 */
  push32(0x11d45753u); f_11d490f0();
  /* 11d45753 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45756 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d45759 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11d4575c:;
  /* 11d4575c pop edi */
  EDI = (pop32());
  /* 11d4575d pop esi */
  ESI = (pop32());
  /* 11d4575e pop ebx */
  EBX = (pop32());
  /* 11d4575f mov esp, ebp */
  ESP = (EBP);
  /* 11d45761 pop ebp */
  EBP = (pop32());
  /* 11d45762 ret  */
  ESPCHK(0x11d45450u, _esp0);
  ESP += 4; return;
}

/* FUN_10005770 @ 0x11d45770 (27 bytes, 13 insns) */
void f_11d45770(void) {
  FTRACE(0x11d45770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d45770 push ebp */
  push32((uint32_t)(EBP));
  /* 11d45771 mov ebp, esp */
  EBP = (ESP);
  /* 11d45773 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45775 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45777 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d45779 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4577c push eax */
  push32((uint32_t)(EAX));
  /* 11d4577d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d45780 push ecx */
  push32((uint32_t)(ECX));
  /* 11d45781 call 0x11d45790 */
  push32(0x11d45786u); f_11d45790();
  /* 11d45786 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45789 pop ebp */
  EBP = (pop32());
  /* 11d4578a ret  */
  ESPCHK(0x11d45770u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x11d45790 (96 bytes, 37 insns) */
void f_11d45790(void) {
  FTRACE(0x11d45790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d45790 push ebp */
  push32((uint32_t)(EBP));
  /* 11d45791 mov ebp, esp */
  EBP = (ESP);
  /* 11d45793 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d45796 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d45799 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4579d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11d457a0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d457a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d457a4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d457a7 push edx */
  push32((uint32_t)(EDX));
  /* 11d457a8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d457ab push eax */
  push32((uint32_t)(EAX));
  /* 11d457ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d457af push ecx */
  push32((uint32_t)(ECX));
  /* 11d457b0 call 0x11d45380 */
  push32(0x11d457b5u); f_11d45380();
  /* 11d457b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d457b8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d457bb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d457bf je 0x11d457e9 */
  if (C.zf) goto L_11d457e9;
  /* 11d457c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d457c4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11d457c7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d457ca add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d457cd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d457d0:;
  /* 11d457d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d457d3 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d457d6 jae 0x11d457e9 */
  if (!C.cf) goto L_11d457e9;
  /* 11d457d8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d457db mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11d457de mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d457e1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d457e4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d457e7 jmp 0x11d457d0 */
  goto L_11d457d0;
L_11d457e9:;
  /* 11d457e9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d457ec mov esp, ebp */
  ESP = (EBP);
  /* 11d457ee pop ebp */
  EBP = (pop32());
  /* 11d457ef ret  */
  ESPCHK(0x11d45790u, _esp0);
  ESP += 4; return;
}

/* FUN_100057f0 @ 0x11d457f0 (27 bytes, 13 insns) */
void f_11d457f0(void) {
  FTRACE(0x11d457f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d457f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d457f1 mov ebp, esp */
  EBP = (ESP);
  /* 11d457f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d457f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d457f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d457f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d457fc push eax */
  push32((uint32_t)(EAX));
  /* 11d457fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d45800 push ecx */
  push32((uint32_t)(ECX));
  /* 11d45801 call 0x11d45810 */
  push32(0x11d45806u); f_11d45810();
  /* 11d45806 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45809 pop ebp */
  EBP = (pop32());
  /* 11d4580a ret  */
  ESPCHK(0x11d457f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005810 @ 0x11d45810 (64 bytes, 27 insns) */
void f_11d45810(void) {
  FTRACE(0x11d45810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d45810 push ebp */
  push32((uint32_t)(EBP));
  /* 11d45811 mov ebp, esp */
  EBP = (ESP);
  /* 11d45813 push ecx */
  push32((uint32_t)(ECX));
  /* 11d45814 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d45816 call 0x11d48d80 */
  push32(0x11d4581bu); f_11d48d80();
  /* 11d4581b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4581e push 1 */
  push32((uint32_t)(0x1u));
  /* 11d45820 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d45823 push eax */
  push32((uint32_t)(EAX));
  /* 11d45824 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d45827 push ecx */
  push32((uint32_t)(ECX));
  /* 11d45828 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d4582b push edx */
  push32((uint32_t)(EDX));
  /* 11d4582c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4582f push eax */
  push32((uint32_t)(EAX));
  /* 11d45830 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d45833 push ecx */
  push32((uint32_t)(ECX));
  /* 11d45834 call 0x11d45850 */
  push32(0x11d45839u); f_11d45850();
  /* 11d45839 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4583c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d4583f push 9 */
  push32((uint32_t)(0x9u));
  /* 11d45841 call 0x11d48e20 */
  push32(0x11d45846u); f_11d48e20();
  /* 11d45846 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45849 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4584c mov esp, ebp */
  ESP = (EBP);
  /* 11d4584e pop ebp */
  EBP = (pop32());
  /* 11d4584f ret  */
  ESPCHK(0x11d45810u, _esp0);
  ESP += 4; return;
}

/* FUN_10005850 @ 0x11d45850 (1297 bytes, 431 insns) */
void f_11d45850(void) {
  FTRACE(0x11d45850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d45850 push ebp */
  push32((uint32_t)(EBP));
  /* 11d45851 mov ebp, esp */
  EBP = (ESP);
  /* 11d45853 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d45856 push ebx */
  push32((uint32_t)(EBX));
  /* 11d45857 push esi */
  push32((uint32_t)(ESI));
  /* 11d45858 push edi */
  push32((uint32_t)(EDI));
  /* 11d45859 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11d45860 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45864 jne 0x11d45883 */
  if (!C.zf) goto L_11d45883;
  /* 11d45866 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d45869 push eax */
  push32((uint32_t)(EAX));
  /* 11d4586a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d4586d push ecx */
  push32((uint32_t)(ECX));
  /* 11d4586e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d45871 push edx */
  push32((uint32_t)(EDX));
  /* 11d45872 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d45875 push eax */
  push32((uint32_t)(EAX));
  /* 11d45876 call 0x11d45380 */
  push32(0x11d4587bu); f_11d45380();
  /* 11d4587b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4587e jmp 0x11d45d5a */
  goto L_11d45d5a;
L_11d45883:;
  /* 11d45883 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45887 je 0x11d458a6 */
  if (C.zf) goto L_11d458a6;
  /* 11d45889 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4588d jne 0x11d458a6 */
  if (!C.zf) goto L_11d458a6;
  /* 11d4588f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d45892 push ecx */
  push32((uint32_t)(ECX));
  /* 11d45893 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d45896 push edx */
  push32((uint32_t)(EDX));
  /* 11d45897 call 0x11d45e10 */
  push32(0x11d4589cu); f_11d45e10();
  /* 11d4589c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4589f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d458a1 jmp 0x11d45d5a */
  goto L_11d45d5a;
L_11d458a6:;
  /* 11d458a6 mov eax, dword ptr [0x11d6fa84] */
  EAX = (r32((uint32_t)(0x11d6fa84)));
  /* 11d458ab and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11d458ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d458b0 je 0x11d458e2 */
  if (C.zf) goto L_11d458e2;
L_11d458b2:;
  /* 11d458b2 call 0x11d46520 */
  push32(0x11d458b7u); f_11d46520();
  /* 11d458b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d458b9 jne 0x11d458dc */
  if (!C.zf) goto L_11d458dc;
  /* 11d458bb push 0x11d6c7d0 */
  push32((uint32_t)(0x11d6c7d0u));
  /* 11d458c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d458c2 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 11d458c7 push 0x11d6c7c4 */
  push32((uint32_t)(0x11d6c7c4u));
  /* 11d458cc push 2 */
  push32((uint32_t)(0x2u));
  /* 11d458ce call 0x11d44440 */
  push32(0x11d458d3u); f_11d44440();
  /* 11d458d3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d458d6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d458d9 jne 0x11d458dc */
  if (!C.zf) goto L_11d458dc;
  /* 11d458db int3  */
  x86_unimpl("int3 @ 0x11d458db");
L_11d458dc:;
  /* 11d458dc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d458de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d458e0 jne 0x11d458b2 */
  if (!C.zf) goto L_11d458b2;
L_11d458e2:;
  /* 11d458e2 mov edx, dword ptr [0x11d6fa88] */
  EDX = (r32((uint32_t)(0x11d6fa88)));
  /* 11d458e8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11d458eb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d458ee cmp eax, dword ptr [0x11d6fa8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11d6fa8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d458f4 jne 0x11d458f7 */
  if (!C.zf) goto L_11d458f7;
  /* 11d458f6 int3  */
  x86_unimpl("int3 @ 0x11d458f6");
L_11d458f7:;
  /* 11d458f7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d458fa push ecx */
  push32((uint32_t)(ECX));
  /* 11d458fb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d458fe push edx */
  push32((uint32_t)(EDX));
  /* 11d458ff mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d45902 push eax */
  push32((uint32_t)(EAX));
  /* 11d45903 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d45906 push ecx */
  push32((uint32_t)(ECX));
  /* 11d45907 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4590a push edx */
  push32((uint32_t)(EDX));
  /* 11d4590b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4590e push eax */
  push32((uint32_t)(EAX));
  /* 11d4590f push 2 */
  push32((uint32_t)(0x2u));
  /* 11d45911 call dword ptr [0x11d6fc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d6fc90))), 0x11d45917u);
  /* 11d45917 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4591a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4591c jne 0x11d4597c */
  if (!C.zf) goto L_11d4597c;
  /* 11d4591e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45922 je 0x11d4594f */
  if (C.zf) goto L_11d4594f;
L_11d45924:;
  /* 11d45924 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d45927 push ecx */
  push32((uint32_t)(ECX));
  /* 11d45928 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d4592b push edx */
  push32((uint32_t)(EDX));
  /* 11d4592c push 0x11d6c94c */
  push32((uint32_t)(0x11d6c94cu));
  /* 11d45931 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45933 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45935 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45937 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45939 call 0x11d44440 */
  push32(0x11d4593eu); f_11d44440();
  /* 11d4593e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45941 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45944 jne 0x11d45947 */
  if (!C.zf) goto L_11d45947;
  /* 11d45946 int3  */
  x86_unimpl("int3 @ 0x11d45946");
L_11d45947:;
  /* 11d45947 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d45949 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4594b jne 0x11d45924 */
  if (!C.zf) goto L_11d45924;
  /* 11d4594d jmp 0x11d45975 */
  goto L_11d45975;
L_11d4594f:;
  /* 11d4594f push 0x11d6c928 */
  push32((uint32_t)(0x11d6c928u));
  /* 11d45954 push 0x11d6c764 */
  push32((uint32_t)(0x11d6c764u));
  /* 11d45959 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4595b push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4595d push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4595f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45961 call 0x11d44440 */
  push32(0x11d45966u); f_11d44440();
  /* 11d45966 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45969 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4596c jne 0x11d4596f */
  if (!C.zf) goto L_11d4596f;
  /* 11d4596e int3  */
  x86_unimpl("int3 @ 0x11d4596e");
L_11d4596f:;
  /* 11d4596f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d45971 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d45973 jne 0x11d4594f */
  if (!C.zf) goto L_11d4594f;
L_11d45975:;
  /* 11d45975 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d45977 jmp 0x11d45d5a */
  goto L_11d45d5a;
L_11d4597c:;
  /* 11d4597c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45980 jbe 0x11d459ae */
  if ((C.cf||C.zf)) goto L_11d459ae;
L_11d45982:;
  /* 11d45982 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d45985 push edx */
  push32((uint32_t)(EDX));
  /* 11d45986 push 0x11d6c8f8 */
  push32((uint32_t)(0x11d6c8f8u));
  /* 11d4598b push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4598d push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4598f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45991 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d45993 call 0x11d44440 */
  push32(0x11d45998u); f_11d44440();
  /* 11d45998 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4599b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4599e jne 0x11d459a1 */
  if (!C.zf) goto L_11d459a1;
  /* 11d459a0 int3  */
  x86_unimpl("int3 @ 0x11d459a0");
L_11d459a1:;
  /* 11d459a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d459a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d459a5 jne 0x11d45982 */
  if (!C.zf) goto L_11d45982;
  /* 11d459a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d459a9 jmp 0x11d45d5a */
  goto L_11d45d5a;
L_11d459ae:;
  /* 11d459ae cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d459b2 je 0x11d459f6 */
  if (C.zf) goto L_11d459f6;
  /* 11d459b4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d459b7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d459bd cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d459c0 je 0x11d459f6 */
  if (C.zf) goto L_11d459f6;
  /* 11d459c2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d459c5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d459cb cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d459ce je 0x11d459f6 */
  if (C.zf) goto L_11d459f6;
L_11d459d0:;
  /* 11d459d0 push 0x11d6c70c */
  push32((uint32_t)(0x11d6c70cu));
  /* 11d459d5 push 0x11d6c764 */
  push32((uint32_t)(0x11d6c764u));
  /* 11d459da push 0 */
  push32((uint32_t)(0x0u));
  /* 11d459dc push 0 */
  push32((uint32_t)(0x0u));
  /* 11d459de push 0 */
  push32((uint32_t)(0x0u));
  /* 11d459e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d459e2 call 0x11d44440 */
  push32(0x11d459e7u); f_11d44440();
  /* 11d459e7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d459ea cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d459ed jne 0x11d459f0 */
  if (!C.zf) goto L_11d459f0;
  /* 11d459ef int3  */
  x86_unimpl("int3 @ 0x11d459ef");
L_11d459f0:;
  /* 11d459f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d459f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d459f4 jne 0x11d459d0 */
  if (!C.zf) goto L_11d459d0;
L_11d459f6:;
  /* 11d459f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d459f9 push ecx */
  push32((uint32_t)(ECX));
  /* 11d459fa call 0x11d46980 */
  push32(0x11d459ffu); f_11d46980();
  /* 11d459ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45a02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d45a04 jne 0x11d45a27 */
  if (!C.zf) goto L_11d45a27;
  /* 11d45a06 push 0x11d6c8d4 */
  push32((uint32_t)(0x11d6c8d4u));
  /* 11d45a0b push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45a0d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 11d45a12 push 0x11d6c7c4 */
  push32((uint32_t)(0x11d6c7c4u));
  /* 11d45a17 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d45a19 call 0x11d44440 */
  push32(0x11d45a1eu); f_11d44440();
  /* 11d45a1e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45a21 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45a24 jne 0x11d45a27 */
  if (!C.zf) goto L_11d45a27;
  /* 11d45a26 int3  */
  x86_unimpl("int3 @ 0x11d45a26");
L_11d45a27:;
  /* 11d45a27 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d45a29 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d45a2b jne 0x11d459f6 */
  if (!C.zf) goto L_11d459f6;
  /* 11d45a2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d45a30 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d45a33 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d45a36 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d45a39 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45a3d jne 0x11d45a46 */
  if (!C.zf) goto L_11d45a46;
  /* 11d45a3f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11d45a46:;
  /* 11d45a46 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45a4a je 0x11d45a8a */
  if (C.zf) goto L_11d45a8a;
L_11d45a4c:;
  /* 11d45a4c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d45a4f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45a56 jne 0x11d45a61 */
  if (!C.zf) goto L_11d45a61;
  /* 11d45a58 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d45a5b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45a5f je 0x11d45a82 */
  if (C.zf) goto L_11d45a82;
L_11d45a61:;
  /* 11d45a61 push 0x11d6c88c */
  push32((uint32_t)(0x11d6c88cu));
  /* 11d45a66 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45a68 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 11d45a6d push 0x11d6c7c4 */
  push32((uint32_t)(0x11d6c7c4u));
  /* 11d45a72 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d45a74 call 0x11d44440 */
  push32(0x11d45a79u); f_11d44440();
  /* 11d45a79 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45a7c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45a7f jne 0x11d45a82 */
  if (!C.zf) goto L_11d45a82;
  /* 11d45a81 int3  */
  x86_unimpl("int3 @ 0x11d45a81");
L_11d45a82:;
  /* 11d45a82 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d45a84 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d45a86 jne 0x11d45a4c */
  if (!C.zf) goto L_11d45a4c;
  /* 11d45a88 jmp 0x11d45aee */
  goto L_11d45aee;
L_11d45a8a:;
  /* 11d45a8a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d45a8d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d45a90 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d45a95 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45a98 jne 0x11d45aaf */
  if (!C.zf) goto L_11d45aaf;
  /* 11d45a9a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d45a9d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d45aa3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45aa6 jne 0x11d45aaf */
  if (!C.zf) goto L_11d45aaf;
  /* 11d45aa8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_11d45aaf:;
  /* 11d45aaf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d45ab2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d45ab5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d45aba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d45abd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d45ac3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45ac5 je 0x11d45ae8 */
  if (C.zf) goto L_11d45ae8;
  /* 11d45ac7 push 0x11d6c850 */
  push32((uint32_t)(0x11d6c850u));
  /* 11d45acc push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45ace push 0x272 */
  push32((uint32_t)(0x272u));
  /* 11d45ad3 push 0x11d6c7c4 */
  push32((uint32_t)(0x11d6c7c4u));
  /* 11d45ad8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d45ada call 0x11d44440 */
  push32(0x11d45adfu); f_11d44440();
  /* 11d45adf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45ae2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45ae5 jne 0x11d45ae8 */
  if (!C.zf) goto L_11d45ae8;
  /* 11d45ae7 int3  */
  x86_unimpl("int3 @ 0x11d45ae7");
L_11d45ae8:;
  /* 11d45ae8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d45aea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d45aec jne 0x11d45aaf */
  if (!C.zf) goto L_11d45aaf;
L_11d45aee:;
  /* 11d45aee cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45af2 je 0x11d45b19 */
  if (C.zf) goto L_11d45b19;
  /* 11d45af4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d45af7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45afa push eax */
  push32((uint32_t)(EAX));
  /* 11d45afb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d45afe push ecx */
  push32((uint32_t)(ECX));
  /* 11d45aff call 0x11d49300 */
  push32(0x11d45b04u); f_11d49300();
  /* 11d45b04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45b07 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d45b0a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45b0e jne 0x11d45b17 */
  if (!C.zf) goto L_11d45b17;
  /* 11d45b10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d45b12 jmp 0x11d45d5a */
  goto L_11d45d5a;
L_11d45b17:;
  /* 11d45b17 jmp 0x11d45b3c */
  goto L_11d45b3c;
L_11d45b19:;
  /* 11d45b19 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d45b1c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45b1f push edx */
  push32((uint32_t)(EDX));
  /* 11d45b20 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d45b23 push eax */
  push32((uint32_t)(EAX));
  /* 11d45b24 call 0x11d49250 */
  push32(0x11d45b29u); f_11d49250();
  /* 11d45b29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45b2c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d45b2f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45b33 jne 0x11d45b3c */
  if (!C.zf) goto L_11d45b3c;
  /* 11d45b35 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d45b37 jmp 0x11d45d5a */
  goto L_11d45d5a;
L_11d45b3c:;
  /* 11d45b3c mov ecx, dword ptr [0x11d6fa88] */
  ECX = (r32((uint32_t)(0x11d6fa88)));
  /* 11d45b42 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45b45 mov dword ptr [0x11d6fa88], ecx */
  w32((uint32_t)(0x11d6fa88), (ECX));
  /* 11d45b4b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45b4f jne 0x11d45ba7 */
  if (!C.zf) goto L_11d45ba7;
  /* 11d45b51 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d45b54 mov eax, dword ptr [0x11d7169c] */
  EAX = (r32((uint32_t)(0x11d7169c)));
  /* 11d45b59 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d45b5c mov dword ptr [0x11d7169c], eax */
  w32((uint32_t)(0x11d7169c), (EAX));
  /* 11d45b61 mov ecx, dword ptr [0x11d7169c] */
  ECX = (r32((uint32_t)(0x11d7169c)));
  /* 11d45b67 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45b6a mov dword ptr [0x11d7169c], ecx */
  w32((uint32_t)(0x11d7169c), (ECX));
  /* 11d45b70 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d45b73 mov eax, dword ptr [0x11d716a4] */
  EAX = (r32((uint32_t)(0x11d716a4)));
  /* 11d45b78 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d45b7b mov dword ptr [0x11d716a4], eax */
  w32((uint32_t)(0x11d716a4), (EAX));
  /* 11d45b80 mov ecx, dword ptr [0x11d716a4] */
  ECX = (r32((uint32_t)(0x11d716a4)));
  /* 11d45b86 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45b89 mov dword ptr [0x11d716a4], ecx */
  w32((uint32_t)(0x11d716a4), (ECX));
  /* 11d45b8f mov edx, dword ptr [0x11d716a4] */
  EDX = (r32((uint32_t)(0x11d716a4)));
  /* 11d45b95 cmp edx, dword ptr [0x11d716a8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11d716a8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45b9b jbe 0x11d45ba7 */
  if ((C.cf||C.zf)) goto L_11d45ba7;
  /* 11d45b9d mov eax, dword ptr [0x11d716a4] */
  EAX = (r32((uint32_t)(0x11d716a4)));
  /* 11d45ba2 mov dword ptr [0x11d716a8], eax */
  w32((uint32_t)(0x11d716a8), (EAX));
L_11d45ba7:;
  /* 11d45ba7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d45baa add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45bad mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d45bb0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d45bb3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d45bb6 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45bb9 jbe 0x11d45bdf */
  if ((C.cf||C.zf)) goto L_11d45bdf;
  /* 11d45bbb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d45bbe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d45bc1 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d45bc4 push edx */
  push32((uint32_t)(EDX));
  /* 11d45bc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d45bc7 mov al, byte ptr [0x11d6fa92] */
  AL = (r8((uint32_t)(0x11d6fa92)));
  /* 11d45bcc push eax */
  push32((uint32_t)(EAX));
  /* 11d45bcd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d45bd0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d45bd3 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45bd6 push edx */
  push32((uint32_t)(EDX));
  /* 11d45bd7 call 0x11d490f0 */
  push32(0x11d45bdcu); f_11d490f0();
  /* 11d45bdc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d45bdf:;
  /* 11d45bdf push 4 */
  push32((uint32_t)(0x4u));
  /* 11d45be1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d45be3 mov al, byte ptr [0x11d6fa90] */
  AL = (r8((uint32_t)(0x11d6fa90)));
  /* 11d45be8 push eax */
  push32((uint32_t)(EAX));
  /* 11d45be9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d45bec add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45bef push ecx */
  push32((uint32_t)(ECX));
  /* 11d45bf0 call 0x11d490f0 */
  push32(0x11d45bf5u); f_11d490f0();
  /* 11d45bf5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45bf8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45bfc jne 0x11d45c19 */
  if (!C.zf) goto L_11d45c19;
  /* 11d45bfe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d45c01 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d45c04 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11d45c07 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d45c0a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d45c0d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 11d45c10 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d45c13 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d45c16 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_11d45c19:;
  /* 11d45c19 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d45c1c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d45c1f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_11d45c22:;
  /* 11d45c22 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45c26 jne 0x11d45c57 */
  if (!C.zf) goto L_11d45c57;
  /* 11d45c28 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45c2c jne 0x11d45c36 */
  if (!C.zf) goto L_11d45c36;
  /* 11d45c2e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d45c31 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45c34 je 0x11d45c57 */
  if (C.zf) goto L_11d45c57;
L_11d45c36:;
  /* 11d45c36 push 0x11d6c81c */
  push32((uint32_t)(0x11d6c81cu));
  /* 11d45c3b push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45c3d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 11d45c42 push 0x11d6c7c4 */
  push32((uint32_t)(0x11d6c7c4u));
  /* 11d45c47 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d45c49 call 0x11d44440 */
  push32(0x11d45c4eu); f_11d44440();
  /* 11d45c4e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45c51 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45c54 jne 0x11d45c57 */
  if (!C.zf) goto L_11d45c57;
  /* 11d45c56 int3  */
  x86_unimpl("int3 @ 0x11d45c56");
L_11d45c57:;
  /* 11d45c57 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d45c59 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d45c5b jne 0x11d45c22 */
  if (!C.zf) goto L_11d45c22;
  /* 11d45c5d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d45c60 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45c63 je 0x11d45c6b */
  if (C.zf) goto L_11d45c6b;
  /* 11d45c65 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45c69 je 0x11d45c73 */
  if (C.zf) goto L_11d45c73;
L_11d45c6b:;
  /* 11d45c6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d45c6e jmp 0x11d45d5a */
  goto L_11d45d5a;
L_11d45c73:;
  /* 11d45c73 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d45c76 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45c79 je 0x11d45c8b */
  if (C.zf) goto L_11d45c8b;
  /* 11d45c7b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d45c7e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d45c80 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d45c83 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d45c86 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11d45c89 jmp 0x11d45cc7 */
  goto L_11d45cc7;
L_11d45c8b:;
  /* 11d45c8b mov eax, dword ptr [0x11d71698] */
  EAX = (r32((uint32_t)(0x11d71698)));
  /* 11d45c90 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45c93 je 0x11d45cb6 */
  if (C.zf) goto L_11d45cb6;
  /* 11d45c95 push 0x11d6c800 */
  push32((uint32_t)(0x11d6c800u));
  /* 11d45c9a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45c9c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 11d45ca1 push 0x11d6c7c4 */
  push32((uint32_t)(0x11d6c7c4u));
  /* 11d45ca6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d45ca8 call 0x11d44440 */
  push32(0x11d45cadu); f_11d44440();
  /* 11d45cad add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45cb0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45cb3 jne 0x11d45cb6 */
  if (!C.zf) goto L_11d45cb6;
  /* 11d45cb5 int3  */
  x86_unimpl("int3 @ 0x11d45cb5");
L_11d45cb6:;
  /* 11d45cb6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d45cb8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d45cba jne 0x11d45c8b */
  if (!C.zf) goto L_11d45c8b;
  /* 11d45cbc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d45cbf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11d45cc2 mov dword ptr [0x11d71698], eax */
  w32((uint32_t)(0x11d71698), (EAX));
L_11d45cc7:;
  /* 11d45cc7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d45cca cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45cce je 0x11d45cdf */
  if (C.zf) goto L_11d45cdf;
  /* 11d45cd0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d45cd3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11d45cd6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d45cd9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d45cdb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11d45cdd jmp 0x11d45d1a */
  goto L_11d45d1a;
L_11d45cdf:;
  /* 11d45cdf mov eax, dword ptr [0x11d716a0] */
  EAX = (r32((uint32_t)(0x11d716a0)));
  /* 11d45ce4 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45ce7 je 0x11d45d0a */
  if (C.zf) goto L_11d45d0a;
  /* 11d45ce9 push 0x11d6c7e4 */
  push32((uint32_t)(0x11d6c7e4u));
  /* 11d45cee push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45cf0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 11d45cf5 push 0x11d6c7c4 */
  push32((uint32_t)(0x11d6c7c4u));
  /* 11d45cfa push 2 */
  push32((uint32_t)(0x2u));
  /* 11d45cfc call 0x11d44440 */
  push32(0x11d45d01u); f_11d44440();
  /* 11d45d01 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45d04 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45d07 jne 0x11d45d0a */
  if (!C.zf) goto L_11d45d0a;
  /* 11d45d09 int3  */
  x86_unimpl("int3 @ 0x11d45d09");
L_11d45d0a:;
  /* 11d45d0a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d45d0c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d45d0e jne 0x11d45cdf */
  if (!C.zf) goto L_11d45cdf;
  /* 11d45d10 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d45d13 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d45d15 mov dword ptr [0x11d716a0], eax */
  w32((uint32_t)(0x11d716a0), (EAX));
L_11d45d1a:;
  /* 11d45d1a cmp dword ptr [0x11d716a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d716a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45d21 je 0x11d45d31 */
  if (C.zf) goto L_11d45d31;
  /* 11d45d23 mov ecx, dword ptr [0x11d716a0] */
  ECX = (r32((uint32_t)(0x11d716a0)));
  /* 11d45d29 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d45d2c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11d45d2f jmp 0x11d45d39 */
  goto L_11d45d39;
L_11d45d31:;
  /* 11d45d31 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d45d34 mov dword ptr [0x11d71698], eax */
  w32((uint32_t)(0x11d71698), (EAX));
L_11d45d39:;
  /* 11d45d39 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d45d3c mov edx, dword ptr [0x11d716a0] */
  EDX = (r32((uint32_t)(0x11d716a0)));
  /* 11d45d42 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11d45d44 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d45d47 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11d45d4e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d45d51 mov dword ptr [0x11d716a0], ecx */
  w32((uint32_t)(0x11d716a0), (ECX));
  /* 11d45d57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11d45d5a:;
  /* 11d45d5a pop edi */
  EDI = (pop32());
  /* 11d45d5b pop esi */
  ESI = (pop32());
  /* 11d45d5c pop ebx */
  EBX = (pop32());
  /* 11d45d5d mov esp, ebp */
  ESP = (EBP);
  /* 11d45d5f pop ebp */
  EBP = (pop32());
  /* 11d45d60 ret  */
  ESPCHK(0x11d45850u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d70 @ 0x11d45d70 (27 bytes, 13 insns) */
void f_11d45d70(void) {
  FTRACE(0x11d45d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d45d70 push ebp */
  push32((uint32_t)(EBP));
  /* 11d45d71 mov ebp, esp */
  EBP = (ESP);
  /* 11d45d73 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45d75 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45d77 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d45d79 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d45d7c push eax */
  push32((uint32_t)(EAX));
  /* 11d45d7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d45d80 push ecx */
  push32((uint32_t)(ECX));
  /* 11d45d81 call 0x11d45d90 */
  push32(0x11d45d86u); f_11d45d90();
  /* 11d45d86 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45d89 pop ebp */
  EBP = (pop32());
  /* 11d45d8a ret  */
  ESPCHK(0x11d45d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d90 @ 0x11d45d90 (64 bytes, 27 insns) */
void f_11d45d90(void) {
  FTRACE(0x11d45d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d45d90 push ebp */
  push32((uint32_t)(EBP));
  /* 11d45d91 mov ebp, esp */
  EBP = (ESP);
  /* 11d45d93 push ecx */
  push32((uint32_t)(ECX));
  /* 11d45d94 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d45d96 call 0x11d48d80 */
  push32(0x11d45d9bu); f_11d48d80();
  /* 11d45d9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45d9e push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45da0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d45da3 push eax */
  push32((uint32_t)(EAX));
  /* 11d45da4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d45da7 push ecx */
  push32((uint32_t)(ECX));
  /* 11d45da8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d45dab push edx */
  push32((uint32_t)(EDX));
  /* 11d45dac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d45daf push eax */
  push32((uint32_t)(EAX));
  /* 11d45db0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d45db3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d45db4 call 0x11d45850 */
  push32(0x11d45db9u); f_11d45850();
  /* 11d45db9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45dbc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d45dbf push 9 */
  push32((uint32_t)(0x9u));
  /* 11d45dc1 call 0x11d48e20 */
  push32(0x11d45dc6u); f_11d48e20();
  /* 11d45dc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45dc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d45dcc mov esp, ebp */
  ESP = (EBP);
  /* 11d45dce pop ebp */
  EBP = (pop32());
  /* 11d45dcf ret  */
  ESPCHK(0x11d45d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005dd0 @ 0x11d45dd0 (19 bytes, 9 insns) */
void f_11d45dd0(void) {
  FTRACE(0x11d45dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d45dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d45dd1 mov ebp, esp */
  EBP = (ESP);
  /* 11d45dd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d45dd5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d45dd8 push eax */
  push32((uint32_t)(EAX));
  /* 11d45dd9 call 0x11d45e10 */
  push32(0x11d45ddeu); f_11d45e10();
  /* 11d45dde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45de1 pop ebp */
  EBP = (pop32());
  /* 11d45de2 ret  */
  ESPCHK(0x11d45dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005df0 @ 0x11d45df0 (19 bytes, 9 insns) */
void f_11d45df0(void) {
  FTRACE(0x11d45df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d45df0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d45df1 mov ebp, esp */
  EBP = (ESP);
  /* 11d45df3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d45df5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d45df8 push eax */
  push32((uint32_t)(EAX));
  /* 11d45df9 call 0x11d45e40 */
  push32(0x11d45dfeu); f_11d45e40();
  /* 11d45dfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45e01 pop ebp */
  EBP = (pop32());
  /* 11d45e02 ret  */
  ESPCHK(0x11d45df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e10 @ 0x11d45e10 (41 bytes, 16 insns) */
void f_11d45e10(void) {
  FTRACE(0x11d45e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d45e10 push ebp */
  push32((uint32_t)(EBP));
  /* 11d45e11 mov ebp, esp */
  EBP = (ESP);
  /* 11d45e13 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d45e15 call 0x11d48d80 */
  push32(0x11d45e1au); f_11d48d80();
  /* 11d45e1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45e1d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d45e20 push eax */
  push32((uint32_t)(EAX));
  /* 11d45e21 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d45e24 push ecx */
  push32((uint32_t)(ECX));
  /* 11d45e25 call 0x11d45e40 */
  push32(0x11d45e2au); f_11d45e40();
  /* 11d45e2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45e2d push 9 */
  push32((uint32_t)(0x9u));
  /* 11d45e2f call 0x11d48e20 */
  push32(0x11d45e34u); f_11d48e20();
  /* 11d45e34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45e37 pop ebp */
  EBP = (pop32());
  /* 11d45e38 ret  */
  ESPCHK(0x11d45e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e40 @ 0x11d45e40 (1004 bytes, 342 insns) */
void f_11d45e40(void) {
  FTRACE(0x11d45e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d45e40 push ebp */
  push32((uint32_t)(EBP));
  /* 11d45e41 mov ebp, esp */
  EBP = (ESP);
  /* 11d45e43 push ecx */
  push32((uint32_t)(ECX));
  /* 11d45e44 push ebx */
  push32((uint32_t)(EBX));
  /* 11d45e45 push esi */
  push32((uint32_t)(ESI));
  /* 11d45e46 push edi */
  push32((uint32_t)(EDI));
  /* 11d45e47 mov eax, dword ptr [0x11d6fa84] */
  EAX = (r32((uint32_t)(0x11d6fa84)));
  /* 11d45e4c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11d45e4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d45e51 je 0x11d45e83 */
  if (C.zf) goto L_11d45e83;
L_11d45e53:;
  /* 11d45e53 call 0x11d46520 */
  push32(0x11d45e58u); f_11d46520();
  /* 11d45e58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d45e5a jne 0x11d45e7d */
  if (!C.zf) goto L_11d45e7d;
  /* 11d45e5c push 0x11d6c7d0 */
  push32((uint32_t)(0x11d6c7d0u));
  /* 11d45e61 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45e63 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 11d45e68 push 0x11d6c7c4 */
  push32((uint32_t)(0x11d6c7c4u));
  /* 11d45e6d push 2 */
  push32((uint32_t)(0x2u));
  /* 11d45e6f call 0x11d44440 */
  push32(0x11d45e74u); f_11d44440();
  /* 11d45e74 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45e77 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45e7a jne 0x11d45e7d */
  if (!C.zf) goto L_11d45e7d;
  /* 11d45e7c int3  */
  x86_unimpl("int3 @ 0x11d45e7c");
L_11d45e7d:;
  /* 11d45e7d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d45e7f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d45e81 jne 0x11d45e53 */
  if (!C.zf) goto L_11d45e53;
L_11d45e83:;
  /* 11d45e83 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45e87 jne 0x11d45e8e */
  if (!C.zf) goto L_11d45e8e;
  /* 11d45e89 jmp 0x11d46225 */
  goto L_11d46225;
L_11d45e8e:;
  /* 11d45e8e push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45e90 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45e92 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45e94 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d45e97 push edx */
  push32((uint32_t)(EDX));
  /* 11d45e98 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45e9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d45e9d push eax */
  push32((uint32_t)(EAX));
  /* 11d45e9e push 3 */
  push32((uint32_t)(0x3u));
  /* 11d45ea0 call dword ptr [0x11d6fc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d6fc90))), 0x11d45ea6u);
  /* 11d45ea6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45ea9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d45eab jne 0x11d45ed8 */
  if (!C.zf) goto L_11d45ed8;
L_11d45ead:;
  /* 11d45ead push 0x11d6ca94 */
  push32((uint32_t)(0x11d6ca94u));
  /* 11d45eb2 push 0x11d6c764 */
  push32((uint32_t)(0x11d6c764u));
  /* 11d45eb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45eb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45ebb push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45ebd push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45ebf call 0x11d44440 */
  push32(0x11d45ec4u); f_11d44440();
  /* 11d45ec4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45ec7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45eca jne 0x11d45ecd */
  if (!C.zf) goto L_11d45ecd;
  /* 11d45ecc int3  */
  x86_unimpl("int3 @ 0x11d45ecc");
L_11d45ecd:;
  /* 11d45ecd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d45ecf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d45ed1 jne 0x11d45ead */
  if (!C.zf) goto L_11d45ead;
  /* 11d45ed3 jmp 0x11d46225 */
  goto L_11d46225;
L_11d45ed8:;
  /* 11d45ed8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d45edb push edx */
  push32((uint32_t)(EDX));
  /* 11d45edc call 0x11d46980 */
  push32(0x11d45ee1u); f_11d46980();
  /* 11d45ee1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45ee4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d45ee6 jne 0x11d45f09 */
  if (!C.zf) goto L_11d45f09;
  /* 11d45ee8 push 0x11d6c8d4 */
  push32((uint32_t)(0x11d6c8d4u));
  /* 11d45eed push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45eef push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 11d45ef4 push 0x11d6c7c4 */
  push32((uint32_t)(0x11d6c7c4u));
  /* 11d45ef9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d45efb call 0x11d44440 */
  push32(0x11d45f00u); f_11d44440();
  /* 11d45f00 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45f03 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45f06 jne 0x11d45f09 */
  if (!C.zf) goto L_11d45f09;
  /* 11d45f08 int3  */
  x86_unimpl("int3 @ 0x11d45f08");
L_11d45f09:;
  /* 11d45f09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d45f0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d45f0d jne 0x11d45ed8 */
  if (!C.zf) goto L_11d45ed8;
  /* 11d45f0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d45f12 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d45f15 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11d45f18:;
  /* 11d45f18 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d45f1b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d45f1e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d45f23 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45f26 je 0x11d45f6b */
  if (C.zf) goto L_11d45f6b;
  /* 11d45f28 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d45f2b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45f2f je 0x11d45f6b */
  if (C.zf) goto L_11d45f6b;
  /* 11d45f31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d45f34 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d45f37 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d45f3c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45f3f je 0x11d45f6b */
  if (C.zf) goto L_11d45f6b;
  /* 11d45f41 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d45f44 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45f48 je 0x11d45f6b */
  if (C.zf) goto L_11d45f6b;
  /* 11d45f4a push 0x11d6ca6c */
  push32((uint32_t)(0x11d6ca6cu));
  /* 11d45f4f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45f51 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 11d45f56 push 0x11d6c7c4 */
  push32((uint32_t)(0x11d6c7c4u));
  /* 11d45f5b push 2 */
  push32((uint32_t)(0x2u));
  /* 11d45f5d call 0x11d44440 */
  push32(0x11d45f62u); f_11d44440();
  /* 11d45f62 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45f65 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45f68 jne 0x11d45f6b */
  if (!C.zf) goto L_11d45f6b;
  /* 11d45f6a int3  */
  x86_unimpl("int3 @ 0x11d45f6a");
L_11d45f6b:;
  /* 11d45f6b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d45f6d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d45f6f jne 0x11d45f18 */
  if (!C.zf) goto L_11d45f18;
  /* 11d45f71 mov eax, dword ptr [0x11d6fa84] */
  EAX = (r32((uint32_t)(0x11d6fa84)));
  /* 11d45f76 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11d45f79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d45f7b jne 0x11d46046 */
  if (!C.zf) goto L_11d46046;
  /* 11d45f81 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d45f83 mov cl, byte ptr [0x11d6fa90] */
  CL = (r8((uint32_t)(0x11d6fa90)));
  /* 11d45f89 push ecx */
  push32((uint32_t)(ECX));
  /* 11d45f8a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d45f8d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45f90 push edx */
  push32((uint32_t)(EDX));
  /* 11d45f91 call 0x11d46490 */
  push32(0x11d45f96u); f_11d46490();
  /* 11d45f96 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45f99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d45f9b jne 0x11d45fe0 */
  if (!C.zf) goto L_11d45fe0;
L_11d45f9d:;
  /* 11d45f9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d45fa0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45fa3 push eax */
  push32((uint32_t)(EAX));
  /* 11d45fa4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d45fa7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11d45faa push edx */
  push32((uint32_t)(EDX));
  /* 11d45fab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d45fae mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11d45fb1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d45fb7 mov edx, dword ptr [ecx*4 + 0x11d6fa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11d6fa94)));
  /* 11d45fbe push edx */
  push32((uint32_t)(EDX));
  /* 11d45fbf push 0x11d6ca40 */
  push32((uint32_t)(0x11d6ca40u));
  /* 11d45fc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45fc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45fc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d45fca push 1 */
  push32((uint32_t)(0x1u));
  /* 11d45fcc call 0x11d44440 */
  push32(0x11d45fd1u); f_11d44440();
  /* 11d45fd1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45fd4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d45fd7 jne 0x11d45fda */
  if (!C.zf) goto L_11d45fda;
  /* 11d45fd9 int3  */
  x86_unimpl("int3 @ 0x11d45fd9");
L_11d45fda:;
  /* 11d45fda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d45fdc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d45fde jne 0x11d45f9d */
  if (!C.zf) goto L_11d45f9d;
L_11d45fe0:;
  /* 11d45fe0 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d45fe2 mov cl, byte ptr [0x11d6fa90] */
  CL = (r8((uint32_t)(0x11d6fa90)));
  /* 11d45fe8 push ecx */
  push32((uint32_t)(ECX));
  /* 11d45fe9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d45fec mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11d45fef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d45ff2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 11d45ff6 push edx */
  push32((uint32_t)(EDX));
  /* 11d45ff7 call 0x11d46490 */
  push32(0x11d45ffcu); f_11d46490();
  /* 11d45ffc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d45fff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d46001 jne 0x11d46046 */
  if (!C.zf) goto L_11d46046;
L_11d46003:;
  /* 11d46003 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46006 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46009 push eax */
  push32((uint32_t)(EAX));
  /* 11d4600a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4600d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11d46010 push edx */
  push32((uint32_t)(EDX));
  /* 11d46011 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46014 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11d46017 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d4601d mov edx, dword ptr [ecx*4 + 0x11d6fa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11d6fa94)));
  /* 11d46024 push edx */
  push32((uint32_t)(EDX));
  /* 11d46025 push 0x11d6ca14 */
  push32((uint32_t)(0x11d6ca14u));
  /* 11d4602a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4602c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4602e push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46030 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d46032 call 0x11d44440 */
  push32(0x11d46037u); f_11d44440();
  /* 11d46037 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4603a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4603d jne 0x11d46040 */
  if (!C.zf) goto L_11d46040;
  /* 11d4603f int3  */
  x86_unimpl("int3 @ 0x11d4603f");
L_11d46040:;
  /* 11d46040 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d46042 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d46044 jne 0x11d46003 */
  if (!C.zf) goto L_11d46003;
L_11d46046:;
  /* 11d46046 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46049 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4604d jne 0x11d460bb */
  if (!C.zf) goto L_11d460bb;
L_11d4604f:;
  /* 11d4604f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46052 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46059 jne 0x11d46064 */
  if (!C.zf) goto L_11d46064;
  /* 11d4605b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4605e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46062 je 0x11d46085 */
  if (C.zf) goto L_11d46085;
L_11d46064:;
  /* 11d46064 push 0x11d6c9d4 */
  push32((uint32_t)(0x11d6c9d4u));
  /* 11d46069 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4606b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 11d46070 push 0x11d6c7c4 */
  push32((uint32_t)(0x11d6c7c4u));
  /* 11d46075 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d46077 call 0x11d44440 */
  push32(0x11d4607cu); f_11d44440();
  /* 11d4607c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4607f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46082 jne 0x11d46085 */
  if (!C.zf) goto L_11d46085;
  /* 11d46084 int3  */
  x86_unimpl("int3 @ 0x11d46084");
L_11d46085:;
  /* 11d46085 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d46087 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d46089 jne 0x11d4604f */
  if (!C.zf) goto L_11d4604f;
  /* 11d4608b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4608e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11d46091 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46094 push eax */
  push32((uint32_t)(EAX));
  /* 11d46095 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d46097 mov cl, byte ptr [0x11d6fa91] */
  CL = (r8((uint32_t)(0x11d6fa91)));
  /* 11d4609d push ecx */
  push32((uint32_t)(ECX));
  /* 11d4609e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d460a1 push edx */
  push32((uint32_t)(EDX));
  /* 11d460a2 call 0x11d490f0 */
  push32(0x11d460a7u); f_11d490f0();
  /* 11d460a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d460aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d460ad push eax */
  push32((uint32_t)(EAX));
  /* 11d460ae call 0x11d494f0 */
  push32(0x11d460b3u); f_11d494f0();
  /* 11d460b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d460b6 jmp 0x11d46225 */
  goto L_11d46225;
L_11d460bb:;
  /* 11d460bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d460be cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d460c2 jne 0x11d460d1 */
  if (!C.zf) goto L_11d460d1;
  /* 11d460c4 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d460c8 jne 0x11d460d1 */
  if (!C.zf) goto L_11d460d1;
  /* 11d460ca mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_11d460d1:;
  /* 11d460d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d460d4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d460d7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d460da je 0x11d460fd */
  if (C.zf) goto L_11d460fd;
  /* 11d460dc push 0x11d6c9b4 */
  push32((uint32_t)(0x11d6c9b4u));
  /* 11d460e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d460e3 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 11d460e8 push 0x11d6c7c4 */
  push32((uint32_t)(0x11d6c7c4u));
  /* 11d460ed push 2 */
  push32((uint32_t)(0x2u));
  /* 11d460ef call 0x11d44440 */
  push32(0x11d460f4u); f_11d44440();
  /* 11d460f4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d460f7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d460fa jne 0x11d460fd */
  if (!C.zf) goto L_11d460fd;
  /* 11d460fc int3  */
  x86_unimpl("int3 @ 0x11d460fc");
L_11d460fd:;
  /* 11d460fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d460ff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d46101 jne 0x11d460d1 */
  if (!C.zf) goto L_11d460d1;
  /* 11d46103 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46106 mov eax, dword ptr [0x11d716a4] */
  EAX = (r32((uint32_t)(0x11d716a4)));
  /* 11d4610b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4610e mov dword ptr [0x11d716a4], eax */
  w32((uint32_t)(0x11d716a4), (EAX));
  /* 11d46113 mov ecx, dword ptr [0x11d6fa84] */
  ECX = (r32((uint32_t)(0x11d6fa84)));
  /* 11d46119 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11d4611c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4611e jne 0x11d461fc */
  if (!C.zf) goto L_11d461fc;
  /* 11d46124 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46127 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4612a je 0x11d4613c */
  if (C.zf) goto L_11d4613c;
  /* 11d4612c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4612f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d46131 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46134 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11d46137 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11d4613a jmp 0x11d4617a */
  goto L_11d4617a;
L_11d4613c:;
  /* 11d4613c mov ecx, dword ptr [0x11d71698] */
  ECX = (r32((uint32_t)(0x11d71698)));
  /* 11d46142 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46145 je 0x11d46168 */
  if (C.zf) goto L_11d46168;
  /* 11d46147 push 0x11d6c99c */
  push32((uint32_t)(0x11d6c99cu));
  /* 11d4614c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4614e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 11d46153 push 0x11d6c7c4 */
  push32((uint32_t)(0x11d6c7c4u));
  /* 11d46158 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d4615a call 0x11d44440 */
  push32(0x11d4615fu); f_11d44440();
  /* 11d4615f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46162 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46165 jne 0x11d46168 */
  if (!C.zf) goto L_11d46168;
  /* 11d46167 int3  */
  x86_unimpl("int3 @ 0x11d46167");
L_11d46168:;
  /* 11d46168 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4616a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4616c jne 0x11d4613c */
  if (!C.zf) goto L_11d4613c;
  /* 11d4616e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46171 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d46174 mov dword ptr [0x11d71698], ecx */
  w32((uint32_t)(0x11d71698), (ECX));
L_11d4617a:;
  /* 11d4617a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4617d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46181 je 0x11d46192 */
  if (C.zf) goto L_11d46192;
  /* 11d46183 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46186 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d46189 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4618c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d4618e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11d46190 jmp 0x11d461cf */
  goto L_11d461cf;
L_11d46192:;
  /* 11d46192 mov ecx, dword ptr [0x11d716a0] */
  ECX = (r32((uint32_t)(0x11d716a0)));
  /* 11d46198 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4619b je 0x11d461be */
  if (C.zf) goto L_11d461be;
  /* 11d4619d push 0x11d6c984 */
  push32((uint32_t)(0x11d6c984u));
  /* 11d461a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d461a4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 11d461a9 push 0x11d6c7c4 */
  push32((uint32_t)(0x11d6c7c4u));
  /* 11d461ae push 2 */
  push32((uint32_t)(0x2u));
  /* 11d461b0 call 0x11d44440 */
  push32(0x11d461b5u); f_11d44440();
  /* 11d461b5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d461b8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d461bb jne 0x11d461be */
  if (!C.zf) goto L_11d461be;
  /* 11d461bd int3  */
  x86_unimpl("int3 @ 0x11d461bd");
L_11d461be:;
  /* 11d461be xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d461c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d461c2 jne 0x11d46192 */
  if (!C.zf) goto L_11d46192;
  /* 11d461c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d461c7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d461c9 mov dword ptr [0x11d716a0], ecx */
  w32((uint32_t)(0x11d716a0), (ECX));
L_11d461cf:;
  /* 11d461cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d461d2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11d461d5 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d461d8 push eax */
  push32((uint32_t)(EAX));
  /* 11d461d9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d461db mov cl, byte ptr [0x11d6fa91] */
  CL = (r8((uint32_t)(0x11d6fa91)));
  /* 11d461e1 push ecx */
  push32((uint32_t)(ECX));
  /* 11d461e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d461e5 push edx */
  push32((uint32_t)(EDX));
  /* 11d461e6 call 0x11d490f0 */
  push32(0x11d461ebu); f_11d490f0();
  /* 11d461eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d461ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d461f1 push eax */
  push32((uint32_t)(EAX));
  /* 11d461f2 call 0x11d494f0 */
  push32(0x11d461f7u); f_11d494f0();
  /* 11d461f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d461fa jmp 0x11d46225 */
  goto L_11d46225;
L_11d461fc:;
  /* 11d461fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d461ff mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 11d46206 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46209 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11d4620c push eax */
  push32((uint32_t)(EAX));
  /* 11d4620d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4620f mov cl, byte ptr [0x11d6fa91] */
  CL = (r8((uint32_t)(0x11d6fa91)));
  /* 11d46215 push ecx */
  push32((uint32_t)(ECX));
  /* 11d46216 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46219 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4621c push edx */
  push32((uint32_t)(EDX));
  /* 11d4621d call 0x11d490f0 */
  push32(0x11d46222u); f_11d490f0();
  /* 11d46222 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d46225:;
  /* 11d46225 pop edi */
  EDI = (pop32());
  /* 11d46226 pop esi */
  ESI = (pop32());
  /* 11d46227 pop ebx */
  EBX = (pop32());
  /* 11d46228 mov esp, ebp */
  ESP = (EBP);
  /* 11d4622a pop ebp */
  EBP = (pop32());
  /* 11d4622b ret  */
  ESPCHK(0x11d45e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006230 @ 0x11d46230 (19 bytes, 9 insns) */
void f_11d46230(void) {
  FTRACE(0x11d46230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d46230 push ebp */
  push32((uint32_t)(EBP));
  /* 11d46231 mov ebp, esp */
  EBP = (ESP);
  /* 11d46233 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d46235 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d46238 push eax */
  push32((uint32_t)(EAX));
  /* 11d46239 call 0x11d46250 */
  push32(0x11d4623eu); f_11d46250();
  /* 11d4623e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46241 pop ebp */
  EBP = (pop32());
  /* 11d46242 ret  */
  ESPCHK(0x11d46230u, _esp0);
  ESP += 4; return;
}

/* FUN_10006250 @ 0x11d46250 (342 bytes, 119 insns) */
void f_11d46250(void) {
  FTRACE(0x11d46250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d46250 push ebp */
  push32((uint32_t)(EBP));
  /* 11d46251 mov ebp, esp */
  EBP = (ESP);
  /* 11d46253 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d46256 push ebx */
  push32((uint32_t)(EBX));
  /* 11d46257 push esi */
  push32((uint32_t)(ESI));
  /* 11d46258 push edi */
  push32((uint32_t)(EDI));
  /* 11d46259 mov eax, dword ptr [0x11d6fa84] */
  EAX = (r32((uint32_t)(0x11d6fa84)));
  /* 11d4625e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11d46261 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d46263 je 0x11d46295 */
  if (C.zf) goto L_11d46295;
L_11d46265:;
  /* 11d46265 call 0x11d46520 */
  push32(0x11d4626au); f_11d46520();
  /* 11d4626a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4626c jne 0x11d4628f */
  if (!C.zf) goto L_11d4628f;
  /* 11d4626e push 0x11d6c7d0 */
  push32((uint32_t)(0x11d6c7d0u));
  /* 11d46273 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46275 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 11d4627a push 0x11d6c7c4 */
  push32((uint32_t)(0x11d6c7c4u));
  /* 11d4627f push 2 */
  push32((uint32_t)(0x2u));
  /* 11d46281 call 0x11d44440 */
  push32(0x11d46286u); f_11d44440();
  /* 11d46286 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46289 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4628c jne 0x11d4628f */
  if (!C.zf) goto L_11d4628f;
  /* 11d4628e int3  */
  x86_unimpl("int3 @ 0x11d4628e");
L_11d4628f:;
  /* 11d4628f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d46291 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d46293 jne 0x11d46265 */
  if (!C.zf) goto L_11d46265;
L_11d46295:;
  /* 11d46295 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d46297 call 0x11d48d80 */
  push32(0x11d4629cu); f_11d48d80();
  /* 11d4629c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d4629f:;
  /* 11d4629f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d462a2 push edx */
  push32((uint32_t)(EDX));
  /* 11d462a3 call 0x11d46980 */
  push32(0x11d462a8u); f_11d46980();
  /* 11d462a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d462ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d462ad jne 0x11d462d0 */
  if (!C.zf) goto L_11d462d0;
  /* 11d462af push 0x11d6c8d4 */
  push32((uint32_t)(0x11d6c8d4u));
  /* 11d462b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d462b6 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 11d462bb push 0x11d6c7c4 */
  push32((uint32_t)(0x11d6c7c4u));
  /* 11d462c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d462c2 call 0x11d44440 */
  push32(0x11d462c7u); f_11d44440();
  /* 11d462c7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d462ca cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d462cd jne 0x11d462d0 */
  if (!C.zf) goto L_11d462d0;
  /* 11d462cf int3  */
  x86_unimpl("int3 @ 0x11d462cf");
L_11d462d0:;
  /* 11d462d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d462d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d462d4 jne 0x11d4629f */
  if (!C.zf) goto L_11d4629f;
  /* 11d462d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d462d9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d462dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11d462df:;
  /* 11d462df mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d462e2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d462e5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d462ea cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d462ed je 0x11d46332 */
  if (C.zf) goto L_11d46332;
  /* 11d462ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d462f2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d462f6 je 0x11d46332 */
  if (C.zf) goto L_11d46332;
  /* 11d462f8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d462fb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d462fe and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d46303 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46306 je 0x11d46332 */
  if (C.zf) goto L_11d46332;
  /* 11d46308 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4630b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4630f je 0x11d46332 */
  if (C.zf) goto L_11d46332;
  /* 11d46311 push 0x11d6ca6c */
  push32((uint32_t)(0x11d6ca6cu));
  /* 11d46316 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46318 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 11d4631d push 0x11d6c7c4 */
  push32((uint32_t)(0x11d6c7c4u));
  /* 11d46322 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d46324 call 0x11d44440 */
  push32(0x11d46329u); f_11d44440();
  /* 11d46329 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4632c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4632f jne 0x11d46332 */
  if (!C.zf) goto L_11d46332;
  /* 11d46331 int3  */
  x86_unimpl("int3 @ 0x11d46331");
L_11d46332:;
  /* 11d46332 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d46334 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d46336 jne 0x11d462df */
  if (!C.zf) goto L_11d462df;
  /* 11d46338 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4633b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4633f jne 0x11d4634e */
  if (!C.zf) goto L_11d4634e;
  /* 11d46341 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46345 jne 0x11d4634e */
  if (!C.zf) goto L_11d4634e;
  /* 11d46347 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_11d4634e:;
  /* 11d4634e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d46351 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46355 je 0x11d46389 */
  if (C.zf) goto L_11d46389;
L_11d46357:;
  /* 11d46357 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4635a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d4635d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46360 je 0x11d46383 */
  if (C.zf) goto L_11d46383;
  /* 11d46362 push 0x11d6c9b4 */
  push32((uint32_t)(0x11d6c9b4u));
  /* 11d46367 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46369 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 11d4636e push 0x11d6c7c4 */
  push32((uint32_t)(0x11d6c7c4u));
  /* 11d46373 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d46375 call 0x11d44440 */
  push32(0x11d4637au); f_11d44440();
  /* 11d4637a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4637d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46380 jne 0x11d46383 */
  if (!C.zf) goto L_11d46383;
  /* 11d46382 int3  */
  x86_unimpl("int3 @ 0x11d46382");
L_11d46383:;
  /* 11d46383 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d46385 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d46387 jne 0x11d46357 */
  if (!C.zf) goto L_11d46357;
L_11d46389:;
  /* 11d46389 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4638c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11d4638f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d46392 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d46394 call 0x11d48e20 */
  push32(0x11d46399u); f_11d48e20();
  /* 11d46399 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4639c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4639f pop edi */
  EDI = (pop32());
  /* 11d463a0 pop esi */
  ESI = (pop32());
  /* 11d463a1 pop ebx */
  EBX = (pop32());
  /* 11d463a2 mov esp, ebp */
  ESP = (EBP);
  /* 11d463a4 pop ebp */
  EBP = (pop32());
  /* 11d463a5 ret  */
  ESPCHK(0x11d46250u, _esp0);
  ESP += 4; return;
}

/* FUN_100063b0 @ 0x11d463b0 (28 bytes, 11 insns) */
void f_11d463b0(void) {
  FTRACE(0x11d463b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d463b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d463b1 mov ebp, esp */
  EBP = (ESP);
  /* 11d463b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d463b4 mov eax, dword ptr [0x11d6fa8c] */
  EAX = (r32((uint32_t)(0x11d6fa8c)));
  /* 11d463b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d463bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d463bf mov dword ptr [0x11d6fa8c], ecx */
  w32((uint32_t)(0x11d6fa8c), (ECX));
  /* 11d463c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d463c8 mov esp, ebp */
  ESP = (EBP);
  /* 11d463ca pop ebp */
  EBP = (pop32());
  /* 11d463cb ret  */
  ESPCHK(0x11d463b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100063d0 @ 0x11d463d0 (157 bytes, 59 insns) */
void f_11d463d0(void) {
  FTRACE(0x11d463d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d463d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d463d1 mov ebp, esp */
  EBP = (ESP);
  /* 11d463d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d463d4 push ebx */
  push32((uint32_t)(EBX));
  /* 11d463d5 push esi */
  push32((uint32_t)(ESI));
  /* 11d463d6 push edi */
  push32((uint32_t)(EDI));
  /* 11d463d7 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d463d9 call 0x11d48d80 */
  push32(0x11d463deu); f_11d48d80();
  /* 11d463de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d463e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d463e4 push eax */
  push32((uint32_t)(EAX));
  /* 11d463e5 call 0x11d46980 */
  push32(0x11d463eau); f_11d46980();
  /* 11d463ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d463ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d463ef je 0x11d4645c */
  if (C.zf) goto L_11d4645c;
  /* 11d463f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d463f4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d463f7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11d463fa:;
  /* 11d463fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d463fd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d46400 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d46405 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46408 je 0x11d4644d */
  if (C.zf) goto L_11d4644d;
  /* 11d4640a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4640d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46411 je 0x11d4644d */
  if (C.zf) goto L_11d4644d;
  /* 11d46413 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46416 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d46419 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d4641e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46421 je 0x11d4644d */
  if (C.zf) goto L_11d4644d;
  /* 11d46423 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46426 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4642a je 0x11d4644d */
  if (C.zf) goto L_11d4644d;
  /* 11d4642c push 0x11d6ca6c */
  push32((uint32_t)(0x11d6ca6cu));
  /* 11d46431 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46433 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 11d46438 push 0x11d6c7c4 */
  push32((uint32_t)(0x11d6c7c4u));
  /* 11d4643d push 2 */
  push32((uint32_t)(0x2u));
  /* 11d4643f call 0x11d44440 */
  push32(0x11d46444u); f_11d44440();
  /* 11d46444 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46447 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4644a jne 0x11d4644d */
  if (!C.zf) goto L_11d4644d;
  /* 11d4644c int3  */
  x86_unimpl("int3 @ 0x11d4644c");
L_11d4644d:;
  /* 11d4644d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4644f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d46451 jne 0x11d463fa */
  if (!C.zf) goto L_11d463fa;
  /* 11d46453 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46456 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d46459 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_11d4645c:;
  /* 11d4645c push 9 */
  push32((uint32_t)(0x9u));
  /* 11d4645e call 0x11d48e20 */
  push32(0x11d46463u); f_11d48e20();
  /* 11d46463 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46466 pop edi */
  EDI = (pop32());
  /* 11d46467 pop esi */
  ESI = (pop32());
  /* 11d46468 pop ebx */
  EBX = (pop32());
  /* 11d46469 mov esp, ebp */
  ESP = (EBP);
  /* 11d4646b pop ebp */
  EBP = (pop32());
  /* 11d4646c ret  */
  ESPCHK(0x11d463d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006470 @ 0x11d46470 (28 bytes, 11 insns) */
void f_11d46470(void) {
  FTRACE(0x11d46470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d46470 push ebp */
  push32((uint32_t)(EBP));
  /* 11d46471 mov ebp, esp */
  EBP = (ESP);
  /* 11d46473 push ecx */
  push32((uint32_t)(ECX));
  /* 11d46474 mov eax, dword ptr [0x11d6fc90] */
  EAX = (r32((uint32_t)(0x11d6fc90)));
  /* 11d46479 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d4647c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4647f mov dword ptr [0x11d6fc90], ecx */
  w32((uint32_t)(0x11d6fc90), (ECX));
  /* 11d46485 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46488 mov esp, ebp */
  ESP = (EBP);
  /* 11d4648a pop ebp */
  EBP = (pop32());
  /* 11d4648b ret  */
  ESPCHK(0x11d46470u, _esp0);
  ESP += 4; return;
}

/* FUN_10006490 @ 0x11d46490 (136 bytes, 55 insns) */
void f_11d46490(void) {
  FTRACE(0x11d46490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d46490 push ebp */
  push32((uint32_t)(EBP));
  /* 11d46491 mov ebp, esp */
  EBP = (ESP);
  /* 11d46493 push ecx */
  push32((uint32_t)(ECX));
  /* 11d46494 push ebx */
  push32((uint32_t)(EBX));
  /* 11d46495 push esi */
  push32((uint32_t)(ESI));
  /* 11d46496 push edi */
  push32((uint32_t)(EDI));
  /* 11d46497 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11d4649e:;
  /* 11d4649e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d464a1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d464a4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d464a7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11d464aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d464ac je 0x11d4650e */
  if (C.zf) goto L_11d4650e;
  /* 11d464ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d464b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d464b3 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d464b5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d464b8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d464be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d464c1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d464c4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11d464c7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d464c9 je 0x11d4650c */
  if (C.zf) goto L_11d4650c;
L_11d464cb:;
  /* 11d464cb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d464ce and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d464d3 push eax */
  push32((uint32_t)(EAX));
  /* 11d464d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d464d7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d464d9 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 11d464dc push edx */
  push32((uint32_t)(EDX));
  /* 11d464dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d464e0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d464e3 push eax */
  push32((uint32_t)(EAX));
  /* 11d464e4 push 0x11d6cab0 */
  push32((uint32_t)(0x11d6cab0u));
  /* 11d464e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d464eb push 0 */
  push32((uint32_t)(0x0u));
  /* 11d464ed push 0 */
  push32((uint32_t)(0x0u));
  /* 11d464ef push 0 */
  push32((uint32_t)(0x0u));
  /* 11d464f1 call 0x11d44440 */
  push32(0x11d464f6u); f_11d44440();
  /* 11d464f6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d464f9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d464fc jne 0x11d464ff */
  if (!C.zf) goto L_11d464ff;
  /* 11d464fe int3  */
  x86_unimpl("int3 @ 0x11d464fe");
L_11d464ff:;
  /* 11d464ff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d46501 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d46503 jne 0x11d464cb */
  if (!C.zf) goto L_11d464cb;
  /* 11d46505 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11d4650c:;
  /* 11d4650c jmp 0x11d4649e */
  goto L_11d4649e;
L_11d4650e:;
  /* 11d4650e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46511 pop edi */
  EDI = (pop32());
  /* 11d46512 pop esi */
  ESI = (pop32());
  /* 11d46513 pop ebx */
  EBX = (pop32());
  /* 11d46514 mov esp, ebp */
  ESP = (EBP);
  /* 11d46516 pop ebp */
  EBP = (pop32());
  /* 11d46517 ret  */
  ESPCHK(0x11d46490u, _esp0);
  ESP += 4; return;
}

/* FUN_10006520 @ 0x11d46520 (863 bytes, 299 insns) [1 switch table(s)] */
void f_11d46520(void) {
  FTRACE(0x11d46520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d46520 push ebp */
  push32((uint32_t)(EBP));
  /* 11d46521 mov ebp, esp */
  EBP = (ESP);
  /* 11d46523 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d46526 push ebx */
  push32((uint32_t)(EBX));
  /* 11d46527 push esi */
  push32((uint32_t)(ESI));
  /* 11d46528 push edi */
  push32((uint32_t)(EDI));
  /* 11d46529 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11d46530 mov eax, dword ptr [0x11d6fa84] */
  EAX = (r32((uint32_t)(0x11d6fa84)));
  /* 11d46535 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11d46538 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4653a jne 0x11d46546 */
  if (!C.zf) goto L_11d46546;
  /* 11d4653c mov eax, 1 */
  EAX = (0x1u);
  /* 11d46541 jmp 0x11d46878 */
  goto L_11d46878;
L_11d46546:;
  /* 11d46546 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d46548 call 0x11d48d80 */
  push32(0x11d4654du); f_11d48d80();
  /* 11d4654d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46550 call 0x11d49560 */
  push32(0x11d46555u); f_11d49560();
  /* 11d46555 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d46558 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4655c je 0x11d46669 */
  if (C.zf) goto L_11d46669;
  /* 11d46562 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46566 je 0x11d46669 */
  if (C.zf) goto L_11d46669;
  /* 11d4656c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4656f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11d46572 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d46575 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46578 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11d4657b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4657f ja 0x11d46632 */
  if ((!C.cf&&!C.zf)) goto L_11d46632;
  /* 11d46585 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d46588 jmp dword ptr [eax*4 + 0x11d4687f] */
  switch (EAX) {
    case 0: goto L_11d4660a;
    case 1: goto L_11d465e2;
    case 2: goto L_11d465ba;
    case 3: goto L_11d4658f;
    default: x86_unimpl("switch@0x11d46588 out of table"); return;
  }
L_11d4658f:;
  /* 11d4658f push 0x11d6cc04 */
  push32((uint32_t)(0x11d6cc04u));
  /* 11d46594 push 0x11d6c764 */
  push32((uint32_t)(0x11d6c764u));
  /* 11d46599 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4659b push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4659d push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4659f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d465a1 call 0x11d44440 */
  push32(0x11d465a6u); f_11d44440();
  /* 11d465a6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d465a9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d465ac jne 0x11d465af */
  if (!C.zf) goto L_11d465af;
  /* 11d465ae int3  */
  x86_unimpl("int3 @ 0x11d465ae");
L_11d465af:;
  /* 11d465af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d465b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d465b3 jne 0x11d4658f */
  if (!C.zf) goto L_11d4658f;
  /* 11d465b5 jmp 0x11d46658 */
  goto L_11d46658;
L_11d465ba:;
  /* 11d465ba push 0x11d6cbe0 */
  push32((uint32_t)(0x11d6cbe0u));
  /* 11d465bf push 0x11d6c764 */
  push32((uint32_t)(0x11d6c764u));
  /* 11d465c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d465c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d465c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d465ca push 0 */
  push32((uint32_t)(0x0u));
  /* 11d465cc call 0x11d44440 */
  push32(0x11d465d1u); f_11d44440();
  /* 11d465d1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d465d4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d465d7 jne 0x11d465da */
  if (!C.zf) goto L_11d465da;
  /* 11d465d9 int3  */
  x86_unimpl("int3 @ 0x11d465d9");
L_11d465da:;
  /* 11d465da xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d465dc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d465de jne 0x11d465ba */
  if (!C.zf) goto L_11d465ba;
  /* 11d465e0 jmp 0x11d46658 */
  goto L_11d46658;
L_11d465e2:;
  /* 11d465e2 push 0x11d6cbbc */
  push32((uint32_t)(0x11d6cbbcu));
  /* 11d465e7 push 0x11d6c764 */
  push32((uint32_t)(0x11d6c764u));
  /* 11d465ec push 0 */
  push32((uint32_t)(0x0u));
  /* 11d465ee push 0 */
  push32((uint32_t)(0x0u));
  /* 11d465f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d465f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d465f4 call 0x11d44440 */
  push32(0x11d465f9u); f_11d44440();
  /* 11d465f9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d465fc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d465ff jne 0x11d46602 */
  if (!C.zf) goto L_11d46602;
  /* 11d46601 int3  */
  x86_unimpl("int3 @ 0x11d46601");
L_11d46602:;
  /* 11d46602 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d46604 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d46606 jne 0x11d465e2 */
  if (!C.zf) goto L_11d465e2;
  /* 11d46608 jmp 0x11d46658 */
  goto L_11d46658;
L_11d4660a:;
  /* 11d4660a push 0x11d6cb98 */
  push32((uint32_t)(0x11d6cb98u));
  /* 11d4660f push 0x11d6c764 */
  push32((uint32_t)(0x11d6c764u));
  /* 11d46614 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46616 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46618 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4661a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4661c call 0x11d44440 */
  push32(0x11d46621u); f_11d44440();
  /* 11d46621 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46624 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46627 jne 0x11d4662a */
  if (!C.zf) goto L_11d4662a;
  /* 11d46629 int3  */
  x86_unimpl("int3 @ 0x11d46629");
L_11d4662a:;
  /* 11d4662a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4662c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4662e jne 0x11d4660a */
  if (!C.zf) goto L_11d4660a;
  /* 11d46630 jmp 0x11d46658 */
  goto L_11d46658;
L_11d46632:;
  /* 11d46632 push 0x11d6cb6c */
  push32((uint32_t)(0x11d6cb6cu));
  /* 11d46637 push 0x11d6c764 */
  push32((uint32_t)(0x11d6c764u));
  /* 11d4663c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4663e push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46640 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46642 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46644 call 0x11d44440 */
  push32(0x11d46649u); f_11d44440();
  /* 11d46649 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4664c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4664f jne 0x11d46652 */
  if (!C.zf) goto L_11d46652;
  /* 11d46651 int3  */
  x86_unimpl("int3 @ 0x11d46651");
L_11d46652:;
  /* 11d46652 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d46654 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d46656 jne 0x11d46632 */
  if (!C.zf) goto L_11d46632;
L_11d46658:;
  /* 11d46658 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d4665a call 0x11d48e20 */
  push32(0x11d4665fu); f_11d48e20();
  /* 11d4665f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46662 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d46664 jmp 0x11d46878 */
  goto L_11d46878;
L_11d46669:;
  /* 11d46669 mov eax, dword ptr [0x11d716a0] */
  EAX = (r32((uint32_t)(0x11d716a0)));
  /* 11d4666e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d46671 jmp 0x11d4667b */
  goto L_11d4667b;
L_11d46673:;
  /* 11d46673 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d46676 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d46678 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11d4667b:;
  /* 11d4667b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4667f je 0x11d4686b */
  if (C.zf) goto L_11d4686b;
  /* 11d46685 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11d4668c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4668f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11d46692 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d46698 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4669b je 0x11d466c0 */
  if (C.zf) goto L_11d466c0;
  /* 11d4669d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d466a0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d466a4 je 0x11d466c0 */
  if (C.zf) goto L_11d466c0;
  /* 11d466a6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d466a9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11d466ac and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d466b2 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d466b5 je 0x11d466c0 */
  if (C.zf) goto L_11d466c0;
  /* 11d466b7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d466ba cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d466be jne 0x11d466d8 */
  if (!C.zf) goto L_11d466d8;
L_11d466c0:;
  /* 11d466c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d466c3 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11d466c6 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d466cc mov edx, dword ptr [ecx*4 + 0x11d6fa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11d6fa94)));
  /* 11d466d3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11d466d6 jmp 0x11d466df */
  goto L_11d466df;
L_11d466d8:;
  /* 11d466d8 mov dword ptr [ebp - 0x14], 0x11d6cb64 */
  w32((uint32_t)(EBP + -0x14), (0x11d6cb64u));
L_11d466df:;
  /* 11d466df push 4 */
  push32((uint32_t)(0x4u));
  /* 11d466e1 mov al, byte ptr [0x11d6fa90] */
  AL = (r8((uint32_t)(0x11d6fa90)));
  /* 11d466e6 push eax */
  push32((uint32_t)(EAX));
  /* 11d466e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d466ea add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d466ed push ecx */
  push32((uint32_t)(ECX));
  /* 11d466ee call 0x11d46490 */
  push32(0x11d466f3u); f_11d46490();
  /* 11d466f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d466f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d466f8 jne 0x11d46734 */
  if (!C.zf) goto L_11d46734;
L_11d466fa:;
  /* 11d466fa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d466fd add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46700 push edx */
  push32((uint32_t)(EDX));
  /* 11d46701 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d46704 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11d46707 push ecx */
  push32((uint32_t)(ECX));
  /* 11d46708 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4670b push edx */
  push32((uint32_t)(EDX));
  /* 11d4670c push 0x11d6ca40 */
  push32((uint32_t)(0x11d6ca40u));
  /* 11d46711 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46713 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46715 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46717 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46719 call 0x11d44440 */
  push32(0x11d4671eu); f_11d44440();
  /* 11d4671e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46721 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46724 jne 0x11d46727 */
  if (!C.zf) goto L_11d46727;
  /* 11d46726 int3  */
  x86_unimpl("int3 @ 0x11d46726");
L_11d46727:;
  /* 11d46727 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d46729 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4672b jne 0x11d466fa */
  if (!C.zf) goto L_11d466fa;
  /* 11d4672d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11d46734:;
  /* 11d46734 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d46736 mov cl, byte ptr [0x11d6fa90] */
  CL = (r8((uint32_t)(0x11d6fa90)));
  /* 11d4673c push ecx */
  push32((uint32_t)(ECX));
  /* 11d4673d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d46740 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11d46743 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d46746 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 11d4674a push edx */
  push32((uint32_t)(EDX));
  /* 11d4674b call 0x11d46490 */
  push32(0x11d46750u); f_11d46490();
  /* 11d46750 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46753 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d46755 jne 0x11d46791 */
  if (!C.zf) goto L_11d46791;
L_11d46757:;
  /* 11d46757 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4675a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4675d push eax */
  push32((uint32_t)(EAX));
  /* 11d4675e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d46761 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11d46764 push edx */
  push32((uint32_t)(EDX));
  /* 11d46765 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d46768 push eax */
  push32((uint32_t)(EAX));
  /* 11d46769 push 0x11d6ca14 */
  push32((uint32_t)(0x11d6ca14u));
  /* 11d4676e push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46770 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46772 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46774 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46776 call 0x11d44440 */
  push32(0x11d4677bu); f_11d44440();
  /* 11d4677b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4677e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46781 jne 0x11d46784 */
  if (!C.zf) goto L_11d46784;
  /* 11d46783 int3  */
  x86_unimpl("int3 @ 0x11d46783");
L_11d46784:;
  /* 11d46784 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d46786 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d46788 jne 0x11d46757 */
  if (!C.zf) goto L_11d46757;
  /* 11d4678a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11d46791:;
  /* 11d46791 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d46794 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46798 jne 0x11d467ea */
  if (!C.zf) goto L_11d467ea;
  /* 11d4679a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4679d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d467a0 push ecx */
  push32((uint32_t)(ECX));
  /* 11d467a1 mov dl, byte ptr [0x11d6fa91] */
  DL = (r8((uint32_t)(0x11d6fa91)));
  /* 11d467a7 push edx */
  push32((uint32_t)(EDX));
  /* 11d467a8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d467ab add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d467ae push eax */
  push32((uint32_t)(EAX));
  /* 11d467af call 0x11d46490 */
  push32(0x11d467b4u); f_11d46490();
  /* 11d467b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d467b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d467b9 jne 0x11d467ea */
  if (!C.zf) goto L_11d467ea;
L_11d467bb:;
  /* 11d467bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d467be add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d467c1 push ecx */
  push32((uint32_t)(ECX));
  /* 11d467c2 push 0x11d6cb38 */
  push32((uint32_t)(0x11d6cb38u));
  /* 11d467c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d467c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d467cb push 0 */
  push32((uint32_t)(0x0u));
  /* 11d467cd push 0 */
  push32((uint32_t)(0x0u));
  /* 11d467cf call 0x11d44440 */
  push32(0x11d467d4u); f_11d44440();
  /* 11d467d4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d467d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d467da jne 0x11d467dd */
  if (!C.zf) goto L_11d467dd;
  /* 11d467dc int3  */
  x86_unimpl("int3 @ 0x11d467dc");
L_11d467dd:;
  /* 11d467dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d467df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d467e1 jne 0x11d467bb */
  if (!C.zf) goto L_11d467bb;
  /* 11d467e3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11d467ea:;
  /* 11d467ea cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d467ee jne 0x11d46866 */
  if (!C.zf) goto L_11d46866;
  /* 11d467f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d467f3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d467f7 je 0x11d4682c */
  if (C.zf) goto L_11d4682c;
L_11d467f9:;
  /* 11d467f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d467fc mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d467ff push edx */
  push32((uint32_t)(EDX));
  /* 11d46800 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d46803 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11d46806 push ecx */
  push32((uint32_t)(ECX));
  /* 11d46807 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4680a push edx */
  push32((uint32_t)(EDX));
  /* 11d4680b push 0x11d6cb18 */
  push32((uint32_t)(0x11d6cb18u));
  /* 11d46810 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46812 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46814 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46816 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46818 call 0x11d44440 */
  push32(0x11d4681du); f_11d44440();
  /* 11d4681d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46820 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46823 jne 0x11d46826 */
  if (!C.zf) goto L_11d46826;
  /* 11d46825 int3  */
  x86_unimpl("int3 @ 0x11d46825");
L_11d46826:;
  /* 11d46826 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d46828 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4682a jne 0x11d467f9 */
  if (!C.zf) goto L_11d467f9;
L_11d4682c:;
  /* 11d4682c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4682f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11d46832 push edx */
  push32((uint32_t)(EDX));
  /* 11d46833 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d46836 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46839 push eax */
  push32((uint32_t)(EAX));
  /* 11d4683a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4683d push ecx */
  push32((uint32_t)(ECX));
  /* 11d4683e push 0x11d6caec */
  push32((uint32_t)(0x11d6caecu));
  /* 11d46843 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46845 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46847 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46849 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4684b call 0x11d44440 */
  push32(0x11d46850u); f_11d44440();
  /* 11d46850 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46853 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46856 jne 0x11d46859 */
  if (!C.zf) goto L_11d46859;
  /* 11d46858 int3  */
  x86_unimpl("int3 @ 0x11d46858");
L_11d46859:;
  /* 11d46859 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4685b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4685d jne 0x11d4682c */
  if (!C.zf) goto L_11d4682c;
  /* 11d4685f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11d46866:;
  /* 11d46866 jmp 0x11d46673 */
  goto L_11d46673;
L_11d4686b:;
  /* 11d4686b push 9 */
  push32((uint32_t)(0x9u));
  /* 11d4686d call 0x11d48e20 */
  push32(0x11d46872u); f_11d48e20();
  /* 11d46872 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46875 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11d46878:;
  /* 11d46878 pop edi */
  EDI = (pop32());
  /* 11d46879 pop esi */
  ESI = (pop32());
  /* 11d4687a pop ebx */
  EBX = (pop32());
  /* 11d4687b mov esp, ebp */
  ESP = (EBP);
  /* 11d4687d pop ebp */
  EBP = (pop32());
  /* 11d4687e ret  */
  ESPCHK(0x11d46520u, _esp0);
  ESP += 4; return;
}

/* FUN_10006890 @ 0x11d46890 (34 bytes, 13 insns) */
void f_11d46890(void) {
  FTRACE(0x11d46890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d46890 push ebp */
  push32((uint32_t)(EBP));
  /* 11d46891 mov ebp, esp */
  EBP = (ESP);
  /* 11d46893 push ecx */
  push32((uint32_t)(ECX));
  /* 11d46894 mov eax, dword ptr [0x11d6fa84] */
  EAX = (r32((uint32_t)(0x11d6fa84)));
  /* 11d46899 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d4689c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d468a0 je 0x11d468ab */
  if (C.zf) goto L_11d468ab;
  /* 11d468a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d468a5 mov dword ptr [0x11d6fa84], ecx */
  w32((uint32_t)(0x11d6fa84), (ECX));
L_11d468ab:;
  /* 11d468ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d468ae mov esp, ebp */
  ESP = (EBP);
  /* 11d468b0 pop ebp */
  EBP = (pop32());
  /* 11d468b1 ret  */
  ESPCHK(0x11d46890u, _esp0);
  ESP += 4; return;
}

/* FUN_100068c0 @ 0x11d468c0 (103 bytes, 38 insns) */
void f_11d468c0(void) {
  FTRACE(0x11d468c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d468c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d468c1 mov ebp, esp */
  EBP = (ESP);
  /* 11d468c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d468c4 mov eax, dword ptr [0x11d6fa84] */
  EAX = (r32((uint32_t)(0x11d6fa84)));
  /* 11d468c9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11d468cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d468ce jne 0x11d468d2 */
  if (!C.zf) goto L_11d468d2;
  /* 11d468d0 jmp 0x11d46923 */
  goto L_11d46923;
L_11d468d2:;
  /* 11d468d2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d468d4 call 0x11d48d80 */
  push32(0x11d468d9u); f_11d48d80();
  /* 11d468d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d468dc mov ecx, dword ptr [0x11d716a0] */
  ECX = (r32((uint32_t)(0x11d716a0)));
  /* 11d468e2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d468e5 jmp 0x11d468ef */
  goto L_11d468ef;
L_11d468e7:;
  /* 11d468e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d468ea mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d468ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d468ef:;
  /* 11d468ef cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d468f3 je 0x11d46919 */
  if (C.zf) goto L_11d46919;
  /* 11d468f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d468f8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11d468fb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d46901 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46904 jne 0x11d46917 */
  if (!C.zf) goto L_11d46917;
  /* 11d46906 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d46909 push eax */
  push32((uint32_t)(EAX));
  /* 11d4690a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4690d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46910 push ecx */
  push32((uint32_t)(ECX));
  /* 11d46911 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x11d46914u);
  /* 11d46914 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d46917:;
  /* 11d46917 jmp 0x11d468e7 */
  goto L_11d468e7;
L_11d46919:;
  /* 11d46919 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d4691b call 0x11d48e20 */
  push32(0x11d46920u); f_11d48e20();
  /* 11d46920 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d46923:;
  /* 11d46923 mov esp, ebp */
  ESP = (EBP);
  /* 11d46925 pop ebp */
  EBP = (pop32());
  /* 11d46926 ret  */
  ESPCHK(0x11d468c0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x11d46930 (75 bytes, 28 insns) */
void f_11d46930(void) {
  FTRACE(0x11d46930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d46930 push ebp */
  push32((uint32_t)(EBP));
  /* 11d46931 mov ebp, esp */
  EBP = (ESP);
  /* 11d46933 push ecx */
  push32((uint32_t)(ECX));
  /* 11d46934 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46938 je 0x11d4696d */
  if (C.zf) goto L_11d4696d;
  /* 11d4693a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4693d push eax */
  push32((uint32_t)(EAX));
  /* 11d4693e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d46941 push ecx */
  push32((uint32_t)(ECX));
  /* 11d46942 call dword ptr [0x11d74394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74394))), 0x11d46948u);
  /* 11d46948 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4694a jne 0x11d4696d */
  if (!C.zf) goto L_11d4696d;
  /* 11d4694c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46950 je 0x11d46964 */
  if (C.zf) goto L_11d46964;
  /* 11d46952 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d46955 push edx */
  push32((uint32_t)(EDX));
  /* 11d46956 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d46959 push eax */
  push32((uint32_t)(EAX));
  /* 11d4695a call dword ptr [0x11d74398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74398))), 0x11d46960u);
  /* 11d46960 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d46962 jne 0x11d4696d */
  if (!C.zf) goto L_11d4696d;
L_11d46964:;
  /* 11d46964 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11d4696b jmp 0x11d46974 */
  goto L_11d46974;
L_11d4696d:;
  /* 11d4696d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11d46974:;
  /* 11d46974 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46977 mov esp, ebp */
  ESP = (EBP);
  /* 11d46979 pop ebp */
  EBP = (pop32());
  /* 11d4697a ret  */
  ESPCHK(0x11d46930u, _esp0);
  ESP += 4; return;
}

/* FUN_10006980 @ 0x11d46980 (134 bytes, 50 insns) */
void f_11d46980(void) {
  FTRACE(0x11d46980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d46980 push ebp */
  push32((uint32_t)(EBP));
  /* 11d46981 mov ebp, esp */
  EBP = (ESP);
  /* 11d46983 push ecx */
  push32((uint32_t)(ECX));
  /* 11d46984 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46988 jne 0x11d4698e */
  if (!C.zf) goto L_11d4698e;
  /* 11d4698a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4698c jmp 0x11d46a02 */
  goto L_11d46a02;
L_11d4698e:;
  /* 11d4698e push 1 */
  push32((uint32_t)(0x1u));
  /* 11d46990 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11d46992 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d46995 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d46998 push eax */
  push32((uint32_t)(EAX));
  /* 11d46999 call 0x11d46930 */
  push32(0x11d4699eu); f_11d46930();
  /* 11d4699e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d469a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d469a3 jne 0x11d469a9 */
  if (!C.zf) goto L_11d469a9;
  /* 11d469a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d469a7 jmp 0x11d46a02 */
  goto L_11d46a02;
L_11d469a9:;
  /* 11d469a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d469ac sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d469af push ecx */
  push32((uint32_t)(ECX));
  /* 11d469b0 call 0x11d49680 */
  push32(0x11d469b5u); f_11d49680();
  /* 11d469b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d469b8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d469bb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d469bf je 0x11d469d6 */
  if (C.zf) goto L_11d469d6;
  /* 11d469c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d469c4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d469c7 push edx */
  push32((uint32_t)(EDX));
  /* 11d469c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d469cb push eax */
  push32((uint32_t)(EAX));
  /* 11d469cc call 0x11d496e0 */
  push32(0x11d469d1u); f_11d496e0();
  /* 11d469d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d469d4 jmp 0x11d46a02 */
  goto L_11d46a02;
L_11d469d6:;
  /* 11d469d6 mov ecx, dword ptr [0x11d71654] */
  ECX = (r32((uint32_t)(0x11d71654)));
  /* 11d469dc and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11d469e2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d469e4 je 0x11d469ed */
  if (C.zf) goto L_11d469ed;
  /* 11d469e6 mov eax, 1 */
  EAX = (0x1u);
  /* 11d469eb jmp 0x11d46a02 */
  goto L_11d46a02;
L_11d469ed:;
  /* 11d469ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d469f0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d469f3 push edx */
  push32((uint32_t)(EDX));
  /* 11d469f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d469f6 mov eax, dword ptr [0x11d72fec] */
  EAX = (r32((uint32_t)(0x11d72fec)));
  /* 11d469fb push eax */
  push32((uint32_t)(EAX));
  /* 11d469fc call dword ptr [0x11d74390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74390))), 0x11d46a02u);
L_11d46a02:;
  /* 11d46a02 mov esp, ebp */
  ESP = (EBP);
  /* 11d46a04 pop ebp */
  EBP = (pop32());
  /* 11d46a05 ret  */
  ESPCHK(0x11d46980u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a10 @ 0x11d46a10 (227 bytes, 80 insns) */
void f_11d46a10(void) {
  FTRACE(0x11d46a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d46a10 push ebp */
  push32((uint32_t)(EBP));
  /* 11d46a11 mov ebp, esp */
  EBP = (ESP);
  /* 11d46a13 push ecx */
  push32((uint32_t)(ECX));
  /* 11d46a14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d46a17 push eax */
  push32((uint32_t)(EAX));
  /* 11d46a18 call 0x11d46980 */
  push32(0x11d46a1du); f_11d46980();
  /* 11d46a1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46a20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d46a22 jne 0x11d46a2b */
  if (!C.zf) goto L_11d46a2b;
  /* 11d46a24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d46a26 jmp 0x11d46aef */
  goto L_11d46aef;
L_11d46a2b:;
  /* 11d46a2b push 9 */
  push32((uint32_t)(0x9u));
  /* 11d46a2d call 0x11d48d80 */
  push32(0x11d46a32u); f_11d48d80();
  /* 11d46a32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46a35 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d46a38 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d46a3b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d46a3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46a41 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d46a44 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d46a49 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46a4c je 0x11d46a70 */
  if (C.zf) goto L_11d46a70;
  /* 11d46a4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46a51 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46a55 je 0x11d46a70 */
  if (C.zf) goto L_11d46a70;
  /* 11d46a57 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46a5a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d46a5d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d46a62 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46a65 je 0x11d46a70 */
  if (C.zf) goto L_11d46a70;
  /* 11d46a67 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46a6a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46a6e jne 0x11d46ae3 */
  if (!C.zf) goto L_11d46ae3;
L_11d46a70:;
  /* 11d46a70 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d46a72 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d46a75 push edx */
  push32((uint32_t)(EDX));
  /* 11d46a76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d46a79 push eax */
  push32((uint32_t)(EAX));
  /* 11d46a7a call 0x11d46930 */
  push32(0x11d46a7fu); f_11d46930();
  /* 11d46a7f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46a82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d46a84 je 0x11d46ae3 */
  if (C.zf) goto L_11d46ae3;
  /* 11d46a86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46a89 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11d46a8c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46a8f jne 0x11d46ae3 */
  if (!C.zf) goto L_11d46ae3;
  /* 11d46a91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46a94 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11d46a97 cmp ecx, dword ptr [0x11d6fa88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11d6fa88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46a9d jg 0x11d46ae3 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d46ae3;
  /* 11d46a9f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46aa3 je 0x11d46ab0 */
  if (C.zf) goto L_11d46ab0;
  /* 11d46aa5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d46aa8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46aab mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11d46aae mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11d46ab0:;
  /* 11d46ab0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46ab4 je 0x11d46ac1 */
  if (C.zf) goto L_11d46ac1;
  /* 11d46ab6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d46ab9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46abc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11d46abf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11d46ac1:;
  /* 11d46ac1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46ac5 je 0x11d46ad2 */
  if (C.zf) goto L_11d46ad2;
  /* 11d46ac7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d46aca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46acd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11d46ad0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11d46ad2:;
  /* 11d46ad2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d46ad4 call 0x11d48e20 */
  push32(0x11d46ad9u); f_11d48e20();
  /* 11d46ad9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46adc mov eax, 1 */
  EAX = (0x1u);
  /* 11d46ae1 jmp 0x11d46aef */
  goto L_11d46aef;
L_11d46ae3:;
  /* 11d46ae3 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d46ae5 call 0x11d48e20 */
  push32(0x11d46aeau); f_11d48e20();
  /* 11d46aea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46aed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d46aef:;
  /* 11d46aef mov esp, ebp */
  ESP = (EBP);
  /* 11d46af1 pop ebp */
  EBP = (pop32());
  /* 11d46af2 ret  */
  ESPCHK(0x11d46a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b00 @ 0x11d46b00 (28 bytes, 11 insns) */
void f_11d46b00(void) {
  FTRACE(0x11d46b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d46b00 push ebp */
  push32((uint32_t)(EBP));
  /* 11d46b01 mov ebp, esp */
  EBP = (ESP);
  /* 11d46b03 push ecx */
  push32((uint32_t)(ECX));
  /* 11d46b04 mov eax, dword ptr [0x11d72ff8] */
  EAX = (r32((uint32_t)(0x11d72ff8)));
  /* 11d46b09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d46b0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d46b0f mov dword ptr [0x11d72ff8], ecx */
  w32((uint32_t)(0x11d72ff8), (ECX));
  /* 11d46b15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46b18 mov esp, ebp */
  ESP = (EBP);
  /* 11d46b1a pop ebp */
  EBP = (pop32());
  /* 11d46b1b ret  */
  ESPCHK(0x11d46b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b20 @ 0x11d46b20 (362 bytes, 116 insns) */
void f_11d46b20(void) {
  FTRACE(0x11d46b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d46b20 push ebp */
  push32((uint32_t)(EBP));
  /* 11d46b21 mov ebp, esp */
  EBP = (ESP);
  /* 11d46b23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d46b26 push ebx */
  push32((uint32_t)(EBX));
  /* 11d46b27 push esi */
  push32((uint32_t)(ESI));
  /* 11d46b28 push edi */
  push32((uint32_t)(EDI));
  /* 11d46b29 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46b2d jne 0x11d46b5a */
  if (!C.zf) goto L_11d46b5a;
L_11d46b2f:;
  /* 11d46b2f push 0x11d6cc4c */
  push32((uint32_t)(0x11d6cc4cu));
  /* 11d46b34 push 0x11d6c764 */
  push32((uint32_t)(0x11d6c764u));
  /* 11d46b39 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46b3b push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46b3d push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46b3f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46b41 call 0x11d44440 */
  push32(0x11d46b46u); f_11d44440();
  /* 11d46b46 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46b49 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46b4c jne 0x11d46b4f */
  if (!C.zf) goto L_11d46b4f;
  /* 11d46b4e int3  */
  x86_unimpl("int3 @ 0x11d46b4e");
L_11d46b4f:;
  /* 11d46b4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d46b51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d46b53 jne 0x11d46b2f */
  if (!C.zf) goto L_11d46b2f;
  /* 11d46b55 jmp 0x11d46c83 */
  goto L_11d46c83;
L_11d46b5a:;
  /* 11d46b5a push 9 */
  push32((uint32_t)(0x9u));
  /* 11d46b5c call 0x11d48d80 */
  push32(0x11d46b61u); f_11d48d80();
  /* 11d46b61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46b64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d46b67 mov edx, dword ptr [0x11d716a0] */
  EDX = (r32((uint32_t)(0x11d716a0)));
  /* 11d46b6d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11d46b6f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d46b76 jmp 0x11d46b81 */
  goto L_11d46b81;
L_11d46b78:;
  /* 11d46b78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46b7b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46b7e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d46b81:;
  /* 11d46b81 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46b85 jge 0x11d46ba5 */
  if ((C.sf==C.of)) goto L_11d46ba5;
  /* 11d46b87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46b8a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d46b8d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 11d46b95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46b98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d46b9b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 11d46ba3 jmp 0x11d46b78 */
  goto L_11d46b78;
L_11d46ba5:;
  /* 11d46ba5 mov edx, dword ptr [0x11d716a0] */
  EDX = (r32((uint32_t)(0x11d716a0)));
  /* 11d46bab mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11d46bae jmp 0x11d46bb8 */
  goto L_11d46bb8;
L_11d46bb0:;
  /* 11d46bb0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d46bb3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d46bb5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11d46bb8:;
  /* 11d46bb8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46bbc je 0x11d46c61 */
  if (C.zf) goto L_11d46c61;
  /* 11d46bc2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d46bc5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d46bc8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d46bcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d46bcf jl 0x11d46c37 */
  if ((C.sf!=C.of)) goto L_11d46c37;
  /* 11d46bd1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d46bd4 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11d46bd7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d46bdd cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46be0 jge 0x11d46c37 */
  if ((C.sf==C.of)) goto L_11d46c37;
  /* 11d46be2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d46be5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11d46be8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d46bee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d46bf1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 11d46bf5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46bf8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d46bfb mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11d46bfe and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d46c04 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d46c07 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 11d46c0b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d46c0e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d46c11 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d46c16 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d46c19 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 11d46c1d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d46c20 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46c23 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d46c26 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11d46c29 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d46c2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d46c31 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11d46c35 jmp 0x11d46c5c */
  goto L_11d46c5c;
L_11d46c37:;
  /* 11d46c37 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d46c3a push edx */
  push32((uint32_t)(EDX));
  /* 11d46c3b push 0x11d6cc28 */
  push32((uint32_t)(0x11d6cc28u));
  /* 11d46c40 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46c42 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46c44 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46c46 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46c48 call 0x11d44440 */
  push32(0x11d46c4du); f_11d44440();
  /* 11d46c4d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46c50 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46c53 jne 0x11d46c56 */
  if (!C.zf) goto L_11d46c56;
  /* 11d46c55 int3  */
  x86_unimpl("int3 @ 0x11d46c55");
L_11d46c56:;
  /* 11d46c56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d46c58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d46c5a jne 0x11d46c37 */
  if (!C.zf) goto L_11d46c37;
L_11d46c5c:;
  /* 11d46c5c jmp 0x11d46bb0 */
  goto L_11d46bb0;
L_11d46c61:;
  /* 11d46c61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d46c64 mov edx, dword ptr [0x11d716a8] */
  EDX = (r32((uint32_t)(0x11d716a8)));
  /* 11d46c6a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 11d46c6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d46c70 mov ecx, dword ptr [0x11d7169c] */
  ECX = (r32((uint32_t)(0x11d7169c)));
  /* 11d46c76 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 11d46c79 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d46c7b call 0x11d48e20 */
  push32(0x11d46c80u); f_11d48e20();
  /* 11d46c80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d46c83:;
  /* 11d46c83 pop edi */
  EDI = (pop32());
  /* 11d46c84 pop esi */
  ESI = (pop32());
  /* 11d46c85 pop ebx */
  EBX = (pop32());
  /* 11d46c86 mov esp, ebp */
  ESP = (EBP);
  /* 11d46c88 pop ebp */
  EBP = (pop32());
  /* 11d46c89 ret  */
  ESPCHK(0x11d46b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c90 @ 0x11d46c90 (291 bytes, 95 insns) */
void f_11d46c90(void) {
  FTRACE(0x11d46c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d46c90 push ebp */
  push32((uint32_t)(EBP));
  /* 11d46c91 mov ebp, esp */
  EBP = (ESP);
  /* 11d46c93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d46c96 push ebx */
  push32((uint32_t)(EBX));
  /* 11d46c97 push esi */
  push32((uint32_t)(ESI));
  /* 11d46c98 push edi */
  push32((uint32_t)(EDI));
  /* 11d46c99 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11d46ca0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46ca4 je 0x11d46cb2 */
  if (C.zf) goto L_11d46cb2;
  /* 11d46ca6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46caa je 0x11d46cb2 */
  if (C.zf) goto L_11d46cb2;
  /* 11d46cac cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46cb0 jne 0x11d46ce0 */
  if (!C.zf) goto L_11d46ce0;
L_11d46cb2:;
  /* 11d46cb2 push 0x11d6cc74 */
  push32((uint32_t)(0x11d6cc74u));
  /* 11d46cb7 push 0x11d6c764 */
  push32((uint32_t)(0x11d6c764u));
  /* 11d46cbc push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46cbe push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46cc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46cc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46cc4 call 0x11d44440 */
  push32(0x11d46cc9u); f_11d44440();
  /* 11d46cc9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46ccc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46ccf jne 0x11d46cd2 */
  if (!C.zf) goto L_11d46cd2;
  /* 11d46cd1 int3  */
  x86_unimpl("int3 @ 0x11d46cd1");
L_11d46cd2:;
  /* 11d46cd2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d46cd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d46cd6 jne 0x11d46cb2 */
  if (!C.zf) goto L_11d46cb2;
  /* 11d46cd8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d46cdb jmp 0x11d46dac */
  goto L_11d46dac;
L_11d46ce0:;
  /* 11d46ce0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d46ce7 jmp 0x11d46cf2 */
  goto L_11d46cf2;
L_11d46ce9:;
  /* 11d46ce9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46cec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46cef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11d46cf2:;
  /* 11d46cf2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46cf6 jge 0x11d46d7c */
  if ((C.sf==C.of)) goto L_11d46d7c;
  /* 11d46cfc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46cff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d46d02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46d05 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11d46d08 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 11d46d0c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d46d10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46d13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d46d16 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11d46d1a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46d1d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d46d20 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46d23 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11d46d26 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 11d46d2a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d46d2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46d31 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d46d34 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 11d46d38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46d3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d46d3e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46d43 jne 0x11d46d52 */
  if (!C.zf) goto L_11d46d52;
  /* 11d46d45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46d48 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d46d4b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46d50 je 0x11d46d77 */
  if (C.zf) goto L_11d46d77;
L_11d46d52:;
  /* 11d46d52 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46d56 je 0x11d46d77 */
  if (C.zf) goto L_11d46d77;
  /* 11d46d58 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46d5c jne 0x11d46d70 */
  if (!C.zf) goto L_11d46d70;
  /* 11d46d5e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46d62 jne 0x11d46d77 */
  if (!C.zf) goto L_11d46d77;
  /* 11d46d64 mov eax, dword ptr [0x11d6fa84] */
  EAX = (r32((uint32_t)(0x11d6fa84)));
  /* 11d46d69 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11d46d6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d46d6e je 0x11d46d77 */
  if (C.zf) goto L_11d46d77;
L_11d46d70:;
  /* 11d46d70 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11d46d77:;
  /* 11d46d77 jmp 0x11d46ce9 */
  goto L_11d46ce9;
L_11d46d7c:;
  /* 11d46d7c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d46d7f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d46d82 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11d46d85 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d46d88 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d46d8b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 11d46d8e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d46d91 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d46d94 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 11d46d97 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d46d9a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d46d9d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 11d46da0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d46da3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11d46da9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11d46dac:;
  /* 11d46dac pop edi */
  EDI = (pop32());
  /* 11d46dad pop esi */
  ESI = (pop32());
  /* 11d46dae pop ebx */
  EBX = (pop32());
  /* 11d46daf mov esp, ebp */
  ESP = (EBP);
  /* 11d46db1 pop ebp */
  EBP = (pop32());
  /* 11d46db2 ret  */
  ESPCHK(0x11d46c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006dc0 @ 0x11d46dc0 (697 bytes, 253 insns) */
void f_11d46dc0(void) {
  FTRACE(0x11d46dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d46dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d46dc1 mov ebp, esp */
  EBP = (ESP);
  /* 11d46dc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d46dc6 push ebx */
  push32((uint32_t)(EBX));
  /* 11d46dc7 push esi */
  push32((uint32_t)(ESI));
  /* 11d46dc8 push edi */
  push32((uint32_t)(EDI));
  /* 11d46dc9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11d46dd0 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d46dd2 call 0x11d48d80 */
  push32(0x11d46dd7u); f_11d48d80();
  /* 11d46dd7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d46dda:;
  /* 11d46dda push 0x11d6cd6c */
  push32((uint32_t)(0x11d6cd6cu));
  /* 11d46ddf push 0x11d6c764 */
  push32((uint32_t)(0x11d6c764u));
  /* 11d46de4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46de6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46de8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46dea push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46dec call 0x11d44440 */
  push32(0x11d46df1u); f_11d44440();
  /* 11d46df1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46df4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46df7 jne 0x11d46dfa */
  if (!C.zf) goto L_11d46dfa;
  /* 11d46df9 int3  */
  x86_unimpl("int3 @ 0x11d46df9");
L_11d46dfa:;
  /* 11d46dfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d46dfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d46dfe jne 0x11d46dda */
  if (!C.zf) goto L_11d46dda;
  /* 11d46e00 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46e04 je 0x11d46e0e */
  if (C.zf) goto L_11d46e0e;
  /* 11d46e06 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d46e09 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d46e0b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11d46e0e:;
  /* 11d46e0e mov eax, dword ptr [0x11d716a0] */
  EAX = (r32((uint32_t)(0x11d716a0)));
  /* 11d46e13 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d46e16 jmp 0x11d46e20 */
  goto L_11d46e20;
L_11d46e18:;
  /* 11d46e18 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46e1b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d46e1d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11d46e20:;
  /* 11d46e20 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46e24 je 0x11d47042 */
  if (C.zf) goto L_11d47042;
  /* 11d46e2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46e2d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46e30 je 0x11d47042 */
  if (C.zf) goto L_11d47042;
  /* 11d46e36 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46e39 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11d46e3c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d46e42 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46e45 je 0x11d46e74 */
  if (C.zf) goto L_11d46e74;
  /* 11d46e47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46e4a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11d46e4d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d46e53 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d46e55 je 0x11d46e74 */
  if (C.zf) goto L_11d46e74;
  /* 11d46e57 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46e5a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d46e5d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d46e62 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46e65 jne 0x11d46e79 */
  if (!C.zf) goto L_11d46e79;
  /* 11d46e67 mov ecx, dword ptr [0x11d6fa84] */
  ECX = (r32((uint32_t)(0x11d6fa84)));
  /* 11d46e6d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11d46e70 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d46e72 jne 0x11d46e79 */
  if (!C.zf) goto L_11d46e79;
L_11d46e74:;
  /* 11d46e74 jmp 0x11d4703d */
  goto L_11d4703d;
L_11d46e79:;
  /* 11d46e79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46e7c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46e80 je 0x11d46ef2 */
  if (C.zf) goto L_11d46ef2;
  /* 11d46e82 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46e84 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d46e86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46e89 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11d46e8c push ecx */
  push32((uint32_t)(ECX));
  /* 11d46e8d call 0x11d46930 */
  push32(0x11d46e92u); f_11d46930();
  /* 11d46e92 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46e95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d46e97 jne 0x11d46ec3 */
  if (!C.zf) goto L_11d46ec3;
L_11d46e99:;
  /* 11d46e99 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46e9c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11d46e9f push eax */
  push32((uint32_t)(EAX));
  /* 11d46ea0 push 0x11d6cd58 */
  push32((uint32_t)(0x11d6cd58u));
  /* 11d46ea5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46ea7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46ea9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46eab push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46ead call 0x11d44440 */
  push32(0x11d46eb2u); f_11d44440();
  /* 11d46eb2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46eb5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46eb8 jne 0x11d46ebb */
  if (!C.zf) goto L_11d46ebb;
  /* 11d46eba int3  */
  x86_unimpl("int3 @ 0x11d46eba");
L_11d46ebb:;
  /* 11d46ebb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d46ebd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d46ebf jne 0x11d46e99 */
  if (!C.zf) goto L_11d46e99;
  /* 11d46ec1 jmp 0x11d46ef2 */
  goto L_11d46ef2;
L_11d46ec3:;
  /* 11d46ec3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46ec6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11d46ec9 push eax */
  push32((uint32_t)(EAX));
  /* 11d46eca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46ecd mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11d46ed0 push edx */
  push32((uint32_t)(EDX));
  /* 11d46ed1 push 0x11d6cd4c */
  push32((uint32_t)(0x11d6cd4cu));
  /* 11d46ed6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46ed8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46eda push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46edc push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46ede call 0x11d44440 */
  push32(0x11d46ee3u); f_11d44440();
  /* 11d46ee3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46ee6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46ee9 jne 0x11d46eec */
  if (!C.zf) goto L_11d46eec;
  /* 11d46eeb int3  */
  x86_unimpl("int3 @ 0x11d46eeb");
L_11d46eec:;
  /* 11d46eec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d46eee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d46ef0 jne 0x11d46ec3 */
  if (!C.zf) goto L_11d46ec3;
L_11d46ef2:;
  /* 11d46ef2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46ef5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11d46ef8 push edx */
  push32((uint32_t)(EDX));
  /* 11d46ef9 push 0x11d6cd44 */
  push32((uint32_t)(0x11d6cd44u));
  /* 11d46efe push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46f00 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46f02 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46f04 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46f06 call 0x11d44440 */
  push32(0x11d46f0bu); f_11d44440();
  /* 11d46f0b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46f0e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46f11 jne 0x11d46f14 */
  if (!C.zf) goto L_11d46f14;
  /* 11d46f13 int3  */
  x86_unimpl("int3 @ 0x11d46f13");
L_11d46f14:;
  /* 11d46f14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d46f16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d46f18 jne 0x11d46ef2 */
  if (!C.zf) goto L_11d46ef2;
  /* 11d46f1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46f1d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11d46f20 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d46f26 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46f29 jne 0x11d46f9c */
  if (!C.zf) goto L_11d46f9c;
L_11d46f2b:;
  /* 11d46f2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46f2e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d46f31 push ecx */
  push32((uint32_t)(ECX));
  /* 11d46f32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46f35 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d46f38 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11d46f3b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d46f40 push eax */
  push32((uint32_t)(EAX));
  /* 11d46f41 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46f44 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46f47 push ecx */
  push32((uint32_t)(ECX));
  /* 11d46f48 push 0x11d6cd10 */
  push32((uint32_t)(0x11d6cd10u));
  /* 11d46f4d push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46f4f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46f51 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46f53 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46f55 call 0x11d44440 */
  push32(0x11d46f5au); f_11d44440();
  /* 11d46f5a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46f5d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46f60 jne 0x11d46f63 */
  if (!C.zf) goto L_11d46f63;
  /* 11d46f62 int3  */
  x86_unimpl("int3 @ 0x11d46f62");
L_11d46f63:;
  /* 11d46f63 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d46f65 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d46f67 jne 0x11d46f2b */
  if (!C.zf) goto L_11d46f2b;
  /* 11d46f69 cmp dword ptr [0x11d72ff8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d72ff8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46f70 je 0x11d46f8b */
  if (C.zf) goto L_11d46f8b;
  /* 11d46f72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46f75 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d46f78 push ecx */
  push32((uint32_t)(ECX));
  /* 11d46f79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46f7c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46f7f push edx */
  push32((uint32_t)(EDX));
  /* 11d46f80 call dword ptr [0x11d72ff8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d72ff8))), 0x11d46f86u);
  /* 11d46f86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46f89 jmp 0x11d46f97 */
  goto L_11d46f97;
L_11d46f8b:;
  /* 11d46f8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46f8e push eax */
  push32((uint32_t)(EAX));
  /* 11d46f8f call 0x11d47080 */
  push32(0x11d46f94u); f_11d47080();
  /* 11d46f94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d46f97:;
  /* 11d46f97 jmp 0x11d4703d */
  goto L_11d4703d;
L_11d46f9c:;
  /* 11d46f9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46f9f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46fa3 jne 0x11d46fe2 */
  if (!C.zf) goto L_11d46fe2;
L_11d46fa5:;
  /* 11d46fa5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46fa8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11d46fab push eax */
  push32((uint32_t)(EAX));
  /* 11d46fac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46faf add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46fb2 push ecx */
  push32((uint32_t)(ECX));
  /* 11d46fb3 push 0x11d6cce8 */
  push32((uint32_t)(0x11d6cce8u));
  /* 11d46fb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46fba push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46fbc push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46fbe push 0 */
  push32((uint32_t)(0x0u));
  /* 11d46fc0 call 0x11d44440 */
  push32(0x11d46fc5u); f_11d44440();
  /* 11d46fc5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46fc8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46fcb jne 0x11d46fce */
  if (!C.zf) goto L_11d46fce;
  /* 11d46fcd int3  */
  x86_unimpl("int3 @ 0x11d46fcd");
L_11d46fce:;
  /* 11d46fce xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d46fd0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d46fd2 jne 0x11d46fa5 */
  if (!C.zf) goto L_11d46fa5;
  /* 11d46fd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46fd7 push eax */
  push32((uint32_t)(EAX));
  /* 11d46fd8 call 0x11d47080 */
  push32(0x11d46fddu); f_11d47080();
  /* 11d46fdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d46fe0 jmp 0x11d4703d */
  goto L_11d4703d;
L_11d46fe2:;
  /* 11d46fe2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46fe5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11d46fe8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d46fee cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d46ff1 jne 0x11d4703d */
  if (!C.zf) goto L_11d4703d;
L_11d46ff3:;
  /* 11d46ff3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46ff6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d46ff9 push ecx */
  push32((uint32_t)(ECX));
  /* 11d46ffa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d46ffd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d47000 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11d47003 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d47008 push eax */
  push32((uint32_t)(EAX));
  /* 11d47009 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4700c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4700f push ecx */
  push32((uint32_t)(ECX));
  /* 11d47010 push 0x11d6ccb4 */
  push32((uint32_t)(0x11d6ccb4u));
  /* 11d47015 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d47017 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d47019 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4701b push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4701d call 0x11d44440 */
  push32(0x11d47022u); f_11d44440();
  /* 11d47022 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47025 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47028 jne 0x11d4702b */
  if (!C.zf) goto L_11d4702b;
  /* 11d4702a int3  */
  x86_unimpl("int3 @ 0x11d4702a");
L_11d4702b:;
  /* 11d4702b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4702d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4702f jne 0x11d46ff3 */
  if (!C.zf) goto L_11d46ff3;
  /* 11d47031 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47034 push eax */
  push32((uint32_t)(EAX));
  /* 11d47035 call 0x11d47080 */
  push32(0x11d4703au); f_11d47080();
  /* 11d4703a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d4703d:;
  /* 11d4703d jmp 0x11d46e18 */
  goto L_11d46e18;
L_11d47042:;
  /* 11d47042 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d47044 call 0x11d48e20 */
  push32(0x11d47049u); f_11d48e20();
  /* 11d47049 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d4704c:;
  /* 11d4704c push 0x11d6cc9c */
  push32((uint32_t)(0x11d6cc9cu));
  /* 11d47051 push 0x11d6c764 */
  push32((uint32_t)(0x11d6c764u));
  /* 11d47056 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d47058 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4705a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4705c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4705e call 0x11d44440 */
  push32(0x11d47063u); f_11d44440();
  /* 11d47063 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47066 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47069 jne 0x11d4706c */
  if (!C.zf) goto L_11d4706c;
  /* 11d4706b int3  */
  x86_unimpl("int3 @ 0x11d4706b");
L_11d4706c:;
  /* 11d4706c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d4706e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d47070 jne 0x11d4704c */
  if (!C.zf) goto L_11d4704c;
  /* 11d47072 pop edi */
  EDI = (pop32());
  /* 11d47073 pop esi */
  ESI = (pop32());
  /* 11d47074 pop ebx */
  EBX = (pop32());
  /* 11d47075 mov esp, ebp */
  ESP = (EBP);
  /* 11d47077 pop ebp */
  EBP = (pop32());
  /* 11d47078 ret  */
  ESPCHK(0x11d46dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007080 @ 0x11d47080 (276 bytes, 89 insns) */
void f_11d47080(void) {
  FTRACE(0x11d47080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d47080 push ebp */
  push32((uint32_t)(EBP));
  /* 11d47081 mov ebp, esp */
  EBP = (ESP);
  /* 11d47083 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d47086 push ebx */
  push32((uint32_t)(EBX));
  /* 11d47087 push esi */
  push32((uint32_t)(ESI));
  /* 11d47088 push edi */
  push32((uint32_t)(EDI));
  /* 11d47089 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 11d47090 jmp 0x11d4709b */
  goto L_11d4709b;
L_11d47092:;
  /* 11d47092 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11d47095 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47098 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_11d4709b:;
  /* 11d4709b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4709e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d470a2 jge 0x11d470af */
  if ((C.sf==C.of)) goto L_11d470af;
  /* 11d470a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d470a7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11d470aa mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 11d470ad jmp 0x11d470b6 */
  goto L_11d470b6;
L_11d470af:;
  /* 11d470af mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_11d470b6:;
  /* 11d470b6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11d470b9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d470bc jge 0x11d4715c */
  if ((C.sf==C.of)) goto L_11d4715c;
  /* 11d470c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d470c5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d470c8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 11d470cb mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 11d470ce cmp dword ptr [0x11d6fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11d6fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d470d5 jle 0x11d470f3 */
  if ((C.zf||C.sf!=C.of)) goto L_11d470f3;
  /* 11d470d7 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 11d470dc mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d470df and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d470e5 push ecx */
  push32((uint32_t)(ECX));
  /* 11d470e6 call 0x11d4b390 */
  push32(0x11d470ebu); f_11d4b390();
  /* 11d470eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d470ee mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 11d470f1 jmp 0x11d47110 */
  goto L_11d47110;
L_11d470f3:;
  /* 11d470f3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d470f6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d470fc mov eax, dword ptr [0x11d6fc98] */
  EAX = (r32((uint32_t)(0x11d6fc98)));
  /* 11d47101 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d47103 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11d47107 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 11d4710d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_11d47110:;
  /* 11d47110 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47114 je 0x11d47124 */
  if (C.zf) goto L_11d47124;
  /* 11d47116 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d47119 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d4711f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 11d47122 jmp 0x11d4712b */
  goto L_11d4712b;
L_11d47124:;
  /* 11d47124 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_11d4712b:;
  /* 11d4712b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11d4712e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 11d47131 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 11d47135 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11d47138 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d4713e push edx */
  push32((uint32_t)(EDX));
  /* 11d4713f push 0x11d6cd90 */
  push32((uint32_t)(0x11d6cd90u));
  /* 11d47144 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11d47147 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4714a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 11d4714e push ecx */
  push32((uint32_t)(ECX));
  /* 11d4714f call 0x11d4b290 */
  push32(0x11d47154u); f_11d4b290();
  /* 11d47154 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47157 jmp 0x11d47092 */
  goto L_11d47092;
L_11d4715c:;
  /* 11d4715c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11d4715f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_11d47164:;
  /* 11d47164 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11d47167 push eax */
  push32((uint32_t)(EAX));
  /* 11d47168 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 11d4716b push ecx */
  push32((uint32_t)(ECX));
  /* 11d4716c push 0x11d6cd80 */
  push32((uint32_t)(0x11d6cd80u));
  /* 11d47171 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d47173 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d47175 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d47177 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d47179 call 0x11d44440 */
  push32(0x11d4717eu); f_11d44440();
  /* 11d4717e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47181 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47184 jne 0x11d47187 */
  if (!C.zf) goto L_11d47187;
  /* 11d47186 int3  */
  x86_unimpl("int3 @ 0x11d47186");
L_11d47187:;
  /* 11d47187 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d47189 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4718b jne 0x11d47164 */
  if (!C.zf) goto L_11d47164;
  /* 11d4718d pop edi */
  EDI = (pop32());
  /* 11d4718e pop esi */
  ESI = (pop32());
  /* 11d4718f pop ebx */
  EBX = (pop32());
  /* 11d47190 mov esp, ebp */
  ESP = (EBP);
  /* 11d47192 pop ebp */
  EBP = (pop32());
  /* 11d47193 ret  */
  ESPCHK(0x11d47080u, _esp0);
  ESP += 4; return;
}

/* FUN_100071a0 @ 0x11d471a0 (116 bytes, 46 insns) */
void f_11d471a0(void) {
  FTRACE(0x11d471a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d471a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d471a1 mov ebp, esp */
  EBP = (ESP);
  /* 11d471a3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d471a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11d471a7 push esi */
  push32((uint32_t)(ESI));
  /* 11d471a8 push edi */
  push32((uint32_t)(EDI));
  /* 11d471a9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11d471ac push eax */
  push32((uint32_t)(EAX));
  /* 11d471ad call 0x11d46b20 */
  push32(0x11d471b2u); f_11d46b20();
  /* 11d471b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d471b5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d471b9 jne 0x11d471d4 */
  if (!C.zf) goto L_11d471d4;
  /* 11d471bb cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d471bf jne 0x11d471d4 */
  if (!C.zf) goto L_11d471d4;
  /* 11d471c1 mov ecx, dword ptr [0x11d6fa84] */
  ECX = (r32((uint32_t)(0x11d6fa84)));
  /* 11d471c7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11d471ca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d471cc je 0x11d4720b */
  if (C.zf) goto L_11d4720b;
  /* 11d471ce cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d471d2 je 0x11d4720b */
  if (C.zf) goto L_11d4720b;
L_11d471d4:;
  /* 11d471d4 push 0x11d6cd98 */
  push32((uint32_t)(0x11d6cd98u));
  /* 11d471d9 push 0x11d6c764 */
  push32((uint32_t)(0x11d6c764u));
  /* 11d471de push 0 */
  push32((uint32_t)(0x0u));
  /* 11d471e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d471e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d471e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d471e6 call 0x11d44440 */
  push32(0x11d471ebu); f_11d44440();
  /* 11d471eb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d471ee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d471f1 jne 0x11d471f4 */
  if (!C.zf) goto L_11d471f4;
  /* 11d471f3 int3  */
  x86_unimpl("int3 @ 0x11d471f3");
L_11d471f4:;
  /* 11d471f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d471f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d471f8 jne 0x11d471d4 */
  if (!C.zf) goto L_11d471d4;
  /* 11d471fa push 0 */
  push32((uint32_t)(0x0u));
  /* 11d471fc call 0x11d46dc0 */
  push32(0x11d47201u); f_11d46dc0();
  /* 11d47201 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47204 mov eax, 1 */
  EAX = (0x1u);
  /* 11d47209 jmp 0x11d4720d */
  goto L_11d4720d;
L_11d4720b:;
  /* 11d4720b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d4720d:;
  /* 11d4720d pop edi */
  EDI = (pop32());
  /* 11d4720e pop esi */
  ESI = (pop32());
  /* 11d4720f pop ebx */
  EBX = (pop32());
  /* 11d47210 mov esp, ebp */
  ESP = (EBP);
  /* 11d47212 pop ebp */
  EBP = (pop32());
  /* 11d47213 ret  */
  ESPCHK(0x11d471a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007220 @ 0x11d47220 (197 bytes, 79 insns) */
void f_11d47220(void) {
  FTRACE(0x11d47220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d47220 push ebp */
  push32((uint32_t)(EBP));
  /* 11d47221 mov ebp, esp */
  EBP = (ESP);
  /* 11d47223 push ecx */
  push32((uint32_t)(ECX));
  /* 11d47224 push ebx */
  push32((uint32_t)(EBX));
  /* 11d47225 push esi */
  push32((uint32_t)(ESI));
  /* 11d47226 push edi */
  push32((uint32_t)(EDI));
  /* 11d47227 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4722b jne 0x11d47232 */
  if (!C.zf) goto L_11d47232;
  /* 11d4722d jmp 0x11d472de */
  goto L_11d472de;
L_11d47232:;
  /* 11d47232 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d47239 jmp 0x11d47244 */
  goto L_11d47244;
L_11d4723b:;
  /* 11d4723b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4723e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47241 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d47244:;
  /* 11d47244 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47248 jge 0x11d4728e */
  if ((C.sf==C.of)) goto L_11d4728e;
L_11d4724a:;
  /* 11d4724a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4724d mov edx, dword ptr [ecx*4 + 0x11d6fa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11d6fa94)));
  /* 11d47254 push edx */
  push32((uint32_t)(EDX));
  /* 11d47255 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47258 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4725b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 11d4725f push edx */
  push32((uint32_t)(EDX));
  /* 11d47260 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47263 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d47266 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 11d4726a push edx */
  push32((uint32_t)(EDX));
  /* 11d4726b push 0x11d6cdf4 */
  push32((uint32_t)(0x11d6cdf4u));
  /* 11d47270 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d47272 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d47274 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d47276 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d47278 call 0x11d44440 */
  push32(0x11d4727du); f_11d44440();
  /* 11d4727d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47280 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47283 jne 0x11d47286 */
  if (!C.zf) goto L_11d47286;
  /* 11d47285 int3  */
  x86_unimpl("int3 @ 0x11d47285");
L_11d47286:;
  /* 11d47286 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d47288 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4728a jne 0x11d4724a */
  if (!C.zf) goto L_11d4724a;
  /* 11d4728c jmp 0x11d4723b */
  goto L_11d4723b;
L_11d4728e:;
  /* 11d4728e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d47291 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11d47294 push edx */
  push32((uint32_t)(EDX));
  /* 11d47295 push 0x11d6cdd0 */
  push32((uint32_t)(0x11d6cdd0u));
  /* 11d4729a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4729c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4729e push 0 */
  push32((uint32_t)(0x0u));
  /* 11d472a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d472a2 call 0x11d44440 */
  push32(0x11d472a7u); f_11d44440();
  /* 11d472a7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d472aa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d472ad jne 0x11d472b0 */
  if (!C.zf) goto L_11d472b0;
  /* 11d472af int3  */
  x86_unimpl("int3 @ 0x11d472af");
L_11d472b0:;
  /* 11d472b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d472b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d472b4 jne 0x11d4728e */
  if (!C.zf) goto L_11d4728e;
L_11d472b6:;
  /* 11d472b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d472b9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 11d472bc push edx */
  push32((uint32_t)(EDX));
  /* 11d472bd push 0x11d6cdb0 */
  push32((uint32_t)(0x11d6cdb0u));
  /* 11d472c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d472c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d472c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d472c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d472ca call 0x11d44440 */
  push32(0x11d472cfu); f_11d44440();
  /* 11d472cf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d472d2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d472d5 jne 0x11d472d8 */
  if (!C.zf) goto L_11d472d8;
  /* 11d472d7 int3  */
  x86_unimpl("int3 @ 0x11d472d7");
L_11d472d8:;
  /* 11d472d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d472da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d472dc jne 0x11d472b6 */
  if (!C.zf) goto L_11d472b6;
L_11d472de:;
  /* 11d472de pop edi */
  EDI = (pop32());
  /* 11d472df pop esi */
  ESI = (pop32());
  /* 11d472e0 pop ebx */
  EBX = (pop32());
  /* 11d472e1 mov esp, ebp */
  ESP = (EBP);
  /* 11d472e3 pop ebp */
  EBP = (pop32());
  /* 11d472e4 ret  */
  ESPCHK(0x11d47220u, _esp0);
  ESP += 4; return;
}

/* FUN_100072f0 @ 0x11d472f0 (329 bytes, 102 insns) */
void f_11d472f0(void) {
  FTRACE(0x11d472f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d472f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d472f1 mov ebp, esp */
  EBP = (ESP);
  /* 11d472f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d472f6 cmp dword ptr [0x11d73170], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d73170))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d472fd jne 0x11d47304 */
  if (!C.zf) goto L_11d47304;
  /* 11d472ff call 0x11d4bc30 */
  push32(0x11d47304u); f_11d4bc30();
L_11d47304:;
  /* 11d47304 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11d4730b mov eax, dword ptr [0x11d7163c] */
  EAX = (r32((uint32_t)(0x11d7163c)));
  /* 11d47310 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d47313:;
  /* 11d47313 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47316 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d47319 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4731b je 0x11d47349 */
  if (C.zf) goto L_11d47349;
  /* 11d4731d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47320 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d47323 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47326 je 0x11d47331 */
  if (C.zf) goto L_11d47331;
  /* 11d47328 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4732b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4732e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11d47331:;
  /* 11d47331 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47334 push eax */
  push32((uint32_t)(EAX));
  /* 11d47335 call 0x11d481b0 */
  push32(0x11d4733au); f_11d481b0();
  /* 11d4733a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4733d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47340 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11d47344 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d47347 jmp 0x11d47313 */
  goto L_11d47313;
L_11d47349:;
  /* 11d47349 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 11d4734b push 0x11d6ce14 */
  push32((uint32_t)(0x11d6ce14u));
  /* 11d47350 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d47352 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d47355 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 11d4735c push ecx */
  push32((uint32_t)(ECX));
  /* 11d4735d call 0x11d45380 */
  push32(0x11d47362u); f_11d45380();
  /* 11d47362 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47365 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d47368 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4736b mov dword ptr [0x11d71670], edx */
  w32((uint32_t)(0x11d71670), (EDX));
  /* 11d47371 cmp dword ptr [0x11d71670], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d71670))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47378 jne 0x11d47384 */
  if (!C.zf) goto L_11d47384;
  /* 11d4737a push 9 */
  push32((uint32_t)(0x9u));
  /* 11d4737c call 0x11d442f0 */
  push32(0x11d47381u); f_11d442f0();
  /* 11d47381 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d47384:;
  /* 11d47384 mov eax, dword ptr [0x11d7163c] */
  EAX = (r32((uint32_t)(0x11d7163c)));
  /* 11d47389 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d4738c jmp 0x11d47397 */
  goto L_11d47397;
L_11d4738e:;
  /* 11d4738e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47391 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47394 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11d47397:;
  /* 11d47397 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4739a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d4739d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4739f je 0x11d47407 */
  if (C.zf) goto L_11d47407;
  /* 11d473a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d473a4 push ecx */
  push32((uint32_t)(ECX));
  /* 11d473a5 call 0x11d481b0 */
  push32(0x11d473aau); f_11d481b0();
  /* 11d473aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d473ad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d473b0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11d473b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d473b6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d473b9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d473bc je 0x11d47405 */
  if (C.zf) goto L_11d47405;
  /* 11d473be push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11d473c0 push 0x11d6ce14 */
  push32((uint32_t)(0x11d6ce14u));
  /* 11d473c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d473c7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d473ca push ecx */
  push32((uint32_t)(ECX));
  /* 11d473cb call 0x11d45380 */
  push32(0x11d473d0u); f_11d45380();
  /* 11d473d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d473d3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d473d6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11d473d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d473db cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d473de jne 0x11d473ea */
  if (!C.zf) goto L_11d473ea;
  /* 11d473e0 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d473e2 call 0x11d442f0 */
  push32(0x11d473e7u); f_11d442f0();
  /* 11d473e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d473ea:;
  /* 11d473ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d473ed push ecx */
  push32((uint32_t)(ECX));
  /* 11d473ee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d473f1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d473f3 push eax */
  push32((uint32_t)(EAX));
  /* 11d473f4 call 0x11d48330 */
  push32(0x11d473f9u); f_11d48330();
  /* 11d473f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d473fc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d473ff add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47402 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11d47405:;
  /* 11d47405 jmp 0x11d4738e */
  goto L_11d4738e;
L_11d47407:;
  /* 11d47407 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d47409 mov edx, dword ptr [0x11d7163c] */
  EDX = (r32((uint32_t)(0x11d7163c)));
  /* 11d4740f push edx */
  push32((uint32_t)(EDX));
  /* 11d47410 call 0x11d45e10 */
  push32(0x11d47415u); f_11d45e10();
  /* 11d47415 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47418 mov dword ptr [0x11d7163c], 0 */
  w32((uint32_t)(0x11d7163c), (0x0u));
  /* 11d47422 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d47425 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11d4742b mov dword ptr [0x11d73160], 1 */
  w32((uint32_t)(0x11d73160), (0x1u));
  /* 11d47435 mov esp, ebp */
  ESP = (EBP);
  /* 11d47437 pop ebp */
  EBP = (pop32());
  /* 11d47438 ret  */
  ESPCHK(0x11d472f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007440 @ 0x11d47440 (216 bytes, 69 insns) */
void f_11d47440(void) {
  FTRACE(0x11d47440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d47440 push ebp */
  push32((uint32_t)(EBP));
  /* 11d47441 mov ebp, esp */
  EBP = (ESP);
  /* 11d47443 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d47446 cmp dword ptr [0x11d73170], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d73170))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4744d jne 0x11d47454 */
  if (!C.zf) goto L_11d47454;
  /* 11d4744f call 0x11d4bc30 */
  push32(0x11d47454u); f_11d4bc30();
L_11d47454:;
  /* 11d47454 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11d47459 push 0x11d716ac */
  push32((uint32_t)(0x11d716acu));
  /* 11d4745e push 0 */
  push32((uint32_t)(0x0u));
  /* 11d47460 call dword ptr [0x11d742e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d742e0))), 0x11d47466u);
  /* 11d47466 mov dword ptr [0x11d71680], 0x11d716ac */
  w32((uint32_t)(0x11d71680), (0x11d716acu));
  /* 11d47470 mov eax, dword ptr [0x11d7318c] */
  EAX = (r32((uint32_t)(0x11d7318c)));
  /* 11d47475 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d47478 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4747a jne 0x11d47487 */
  if (!C.zf) goto L_11d47487;
  /* 11d4747c mov edx, dword ptr [0x11d71680] */
  EDX = (r32((uint32_t)(0x11d71680)));
  /* 11d47482 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11d47485 jmp 0x11d4748f */
  goto L_11d4748f;
L_11d47487:;
  /* 11d47487 mov eax, dword ptr [0x11d7318c] */
  EAX = (r32((uint32_t)(0x11d7318c)));
  /* 11d4748c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11d4748f:;
  /* 11d4748f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d47492 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11d47495 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11d47498 push edx */
  push32((uint32_t)(EDX));
  /* 11d47499 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11d4749c push eax */
  push32((uint32_t)(EAX));
  /* 11d4749d push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4749f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d474a1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d474a4 push ecx */
  push32((uint32_t)(ECX));
  /* 11d474a5 call 0x11d47520 */
  push32(0x11d474aau); f_11d47520();
  /* 11d474aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d474ad push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11d474b2 push 0x11d6ce20 */
  push32((uint32_t)(0x11d6ce20u));
  /* 11d474b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d474b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d474bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d474bf lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 11d474c2 push ecx */
  push32((uint32_t)(ECX));
  /* 11d474c3 call 0x11d45380 */
  push32(0x11d474c8u); f_11d45380();
  /* 11d474c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d474cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d474ce cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d474d2 jne 0x11d474de */
  if (!C.zf) goto L_11d474de;
  /* 11d474d4 push 8 */
  push32((uint32_t)(0x8u));
  /* 11d474d6 call 0x11d442f0 */
  push32(0x11d474dbu); f_11d442f0();
  /* 11d474db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d474de:;
  /* 11d474de lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11d474e1 push edx */
  push32((uint32_t)(EDX));
  /* 11d474e2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11d474e5 push eax */
  push32((uint32_t)(EAX));
  /* 11d474e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d474e9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d474ec lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 11d474ef push eax */
  push32((uint32_t)(EAX));
  /* 11d474f0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d474f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d474f4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d474f7 push edx */
  push32((uint32_t)(EDX));
  /* 11d474f8 call 0x11d47520 */
  push32(0x11d474fdu); f_11d47520();
  /* 11d474fd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47500 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d47503 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d47506 mov dword ptr [0x11d71664], eax */
  w32((uint32_t)(0x11d71664), (EAX));
  /* 11d4750b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4750e mov dword ptr [0x11d71668], ecx */
  w32((uint32_t)(0x11d71668), (ECX));
  /* 11d47514 mov esp, ebp */
  ESP = (EBP);
  /* 11d47516 pop ebp */
  EBP = (pop32());
  /* 11d47517 ret  */
  ESPCHK(0x11d47440u, _esp0);
  ESP += 4; return;
}

/* FUN_10007520 @ 0x11d47520 (1060 bytes, 360 insns) */
void f_11d47520(void) {
  FTRACE(0x11d47520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d47520 push ebp */
  push32((uint32_t)(EBP));
  /* 11d47521 mov ebp, esp */
  EBP = (ESP);
  /* 11d47523 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d47526 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d47529 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11d4752f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d47532 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 11d47538 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4753b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d4753e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47542 je 0x11d47555 */
  if (C.zf) goto L_11d47555;
  /* 11d47544 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d47547 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d4754a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11d4754c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4754f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47552 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_11d47555:;
  /* 11d47555 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47558 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d4755b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4755e jne 0x11d4762d */
  if (!C.zf) goto L_11d4762d;
L_11d47564:;
  /* 11d47564 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47567 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4756a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d4756d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47570 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d47573 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47576 je 0x11d475f2 */
  if (C.zf) goto L_11d475f2;
  /* 11d47578 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4757b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d4757e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d47580 je 0x11d475f2 */
  if (C.zf) goto L_11d475f2;
  /* 11d47582 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47585 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d47587 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d47589 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4758b mov al, byte ptr [edx + 0x11d72ec1] */
  AL = (r8((uint32_t)(EDX + 0x11d72ec1)));
  /* 11d47591 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11d47594 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d47596 je 0x11d475c7 */
  if (C.zf) goto L_11d475c7;
  /* 11d47598 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d4759b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d4759d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d475a0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d475a3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11d475a5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d475a9 je 0x11d475c7 */
  if (C.zf) goto L_11d475c7;
  /* 11d475ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d475ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d475b1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d475b3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11d475b5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d475b8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d475bb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11d475be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d475c1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d475c4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11d475c7:;
  /* 11d475c7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d475ca mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d475cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d475cf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d475d2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11d475d4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d475d8 je 0x11d475ed */
  if (C.zf) goto L_11d475ed;
  /* 11d475da mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d475dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d475e0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d475e2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11d475e4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d475e7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d475ea mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11d475ed:;
  /* 11d475ed jmp 0x11d47564 */
  goto L_11d47564;
L_11d475f2:;
  /* 11d475f2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d475f5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d475f7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d475fa mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d475fd mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11d475ff cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47603 je 0x11d47614 */
  if (C.zf) goto L_11d47614;
  /* 11d47605 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d47608 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11d4760b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d4760e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47611 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11d47614:;
  /* 11d47614 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47617 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d4761a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4761d jne 0x11d47628 */
  if (!C.zf) goto L_11d47628;
  /* 11d4761f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47622 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47625 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11d47628:;
  /* 11d47628 jmp 0x11d476fc */
  goto L_11d476fc;
L_11d4762d:;
  /* 11d4762d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d47630 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d47632 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47635 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d47638 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11d4763a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4763e je 0x11d47653 */
  if (C.zf) goto L_11d47653;
  /* 11d47640 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d47643 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47646 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d47648 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11d4764a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d4764d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47650 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11d47653:;
  /* 11d47653 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47656 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d47658 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 11d4765b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4765e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47661 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d47664 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d47667 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d4766d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4766f mov dl, byte ptr [ecx + 0x11d72ec1] */
  DL = (r8((uint32_t)(ECX + 0x11d72ec1)));
  /* 11d47675 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11d47678 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4767a je 0x11d476ab */
  if (C.zf) goto L_11d476ab;
  /* 11d4767c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d4767f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d47681 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47684 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d47687 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11d47689 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4768d je 0x11d476a2 */
  if (C.zf) goto L_11d476a2;
  /* 11d4768f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d47692 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47695 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d47697 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11d47699 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d4769c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4769f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11d476a2:;
  /* 11d476a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d476a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d476a8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11d476ab:;
  /* 11d476ab mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d476ae and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d476b4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d476b7 je 0x11d476d7 */
  if (C.zf) goto L_11d476d7;
  /* 11d476b9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d476bc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d476c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d476c3 je 0x11d476d7 */
  if (C.zf) goto L_11d476d7;
  /* 11d476c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d476c8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d476ce cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d476d1 jne 0x11d4762d */
  if (!C.zf) goto L_11d4762d;
L_11d476d7:;
  /* 11d476d7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d476da and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d476e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d476e2 jne 0x11d476ef */
  if (!C.zf) goto L_11d476ef;
  /* 11d476e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d476e7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d476ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d476ed jmp 0x11d476fc */
  goto L_11d476fc;
L_11d476ef:;
  /* 11d476ef cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d476f3 je 0x11d476fc */
  if (C.zf) goto L_11d476fc;
  /* 11d476f5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d476f8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_11d476fc:;
  /* 11d476fc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11d47703:;
  /* 11d47703 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47706 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d47709 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4770b je 0x11d4772e */
  if (C.zf) goto L_11d4772e;
L_11d4770d:;
  /* 11d4770d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47710 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d47713 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47716 je 0x11d47723 */
  if (C.zf) goto L_11d47723;
  /* 11d47718 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4771b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d4771e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47721 jne 0x11d4772e */
  if (!C.zf) goto L_11d4772e;
L_11d47723:;
  /* 11d47723 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47726 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47729 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d4772c jmp 0x11d4770d */
  goto L_11d4770d;
L_11d4772e:;
  /* 11d4772e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47731 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d47734 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d47736 jne 0x11d4773d */
  if (!C.zf) goto L_11d4773d;
  /* 11d47738 jmp 0x11d4791b */
  goto L_11d4791b;
L_11d4773d:;
  /* 11d4773d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47741 je 0x11d47754 */
  if (C.zf) goto L_11d47754;
  /* 11d47743 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d47746 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d47749 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11d4774b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4774e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47751 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11d47754:;
  /* 11d47754 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d47757 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d47759 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4775c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d4775f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11d47761:;
  /* 11d47761 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11d47768 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11d4776f:;
  /* 11d4776f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47772 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d47775 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47778 jne 0x11d4778e */
  if (!C.zf) goto L_11d4778e;
  /* 11d4777a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4777d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47780 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d47783 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d47786 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47789 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11d4778c jmp 0x11d4776f */
  goto L_11d4776f;
L_11d4778e:;
  /* 11d4778e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47791 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d47794 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47797 jne 0x11d477ea */
  if (!C.zf) goto L_11d477ea;
  /* 11d47799 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d4779c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4779e mov ecx, 2 */
  ECX = (0x2u);
  /* 11d477a3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d477a5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d477a7 jne 0x11d477e2 */
  if (!C.zf) goto L_11d477e2;
  /* 11d477a9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d477ad je 0x11d477cf */
  if (C.zf) goto L_11d477cf;
  /* 11d477af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d477b2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11d477b6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d477b9 jne 0x11d477c6 */
  if (!C.zf) goto L_11d477c6;
  /* 11d477bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d477be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d477c1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d477c4 jmp 0x11d477cd */
  goto L_11d477cd;
L_11d477c6:;
  /* 11d477c6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11d477cd:;
  /* 11d477cd jmp 0x11d477d6 */
  goto L_11d477d6;
L_11d477cf:;
  /* 11d477cf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11d477d6:;
  /* 11d477d6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d477d8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d477dc sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11d477df mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11d477e2:;
  /* 11d477e2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d477e5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11d477e7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11d477ea:;
  /* 11d477ea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d477ed mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d477f0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d477f3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11d477f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d477f8 je 0x11d4781e */
  if (C.zf) goto L_11d4781e;
  /* 11d477fa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d477fe je 0x11d4780f */
  if (C.zf) goto L_11d4780f;
  /* 11d47800 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d47803 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 11d47806 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d47809 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4780c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_11d4780f:;
  /* 11d4780f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d47812 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d47814 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47817 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d4781a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11d4781c jmp 0x11d477ea */
  goto L_11d477ea;
L_11d4781e:;
  /* 11d4781e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47821 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d47824 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d47826 je 0x11d47844 */
  if (C.zf) goto L_11d47844;
  /* 11d47828 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4782c jne 0x11d47849 */
  if (!C.zf) goto L_11d47849;
  /* 11d4782e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47831 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d47834 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47837 je 0x11d47844 */
  if (C.zf) goto L_11d47844;
  /* 11d47839 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4783c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d4783f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47842 jne 0x11d47849 */
  if (!C.zf) goto L_11d47849;
L_11d47844:;
  /* 11d47844 jmp 0x11d478f4 */
  goto L_11d478f4;
L_11d47849:;
  /* 11d47849 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4784d je 0x11d478e6 */
  if (C.zf) goto L_11d478e6;
  /* 11d47853 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47857 je 0x11d478ad */
  if (C.zf) goto L_11d478ad;
  /* 11d47859 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4785c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4785e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d47860 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d47862 mov cl, byte ptr [eax + 0x11d72ec1] */
  CL = (r8((uint32_t)(EAX + 0x11d72ec1)));
  /* 11d47868 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11d4786b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d4786d je 0x11d47898 */
  if (C.zf) goto L_11d47898;
  /* 11d4786f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d47872 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47875 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11d47877 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11d47879 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d4787c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4787f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 11d47882 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47885 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47888 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d4788b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d4788e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d47890 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47893 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d47896 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11d47898:;
  /* 11d47898 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d4789b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4789e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d478a0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11d478a2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d478a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d478a8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11d478ab jmp 0x11d478d9 */
  goto L_11d478d9;
L_11d478ad:;
  /* 11d478ad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d478b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d478b2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d478b4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d478b6 mov cl, byte ptr [eax + 0x11d72ec1] */
  CL = (r8((uint32_t)(EAX + 0x11d72ec1)));
  /* 11d478bc and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11d478bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d478c1 je 0x11d478d9 */
  if (C.zf) goto L_11d478d9;
  /* 11d478c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d478c6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d478c9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d478cc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d478cf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d478d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d478d4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d478d7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11d478d9:;
  /* 11d478d9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d478dc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d478de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d478e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d478e4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11d478e6:;
  /* 11d478e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d478e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d478ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d478ef jmp 0x11d47761 */
  goto L_11d47761;
L_11d478f4:;
  /* 11d478f4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d478f8 je 0x11d47909 */
  if (C.zf) goto L_11d47909;
  /* 11d478fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d478fd mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11d47900 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d47903 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47906 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11d47909:;
  /* 11d47909 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d4790c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d4790e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47911 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d47914 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11d47916 jmp 0x11d47703 */
  goto L_11d47703;
L_11d4791b:;
  /* 11d4791b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4791f je 0x11d47933 */
  if (C.zf) goto L_11d47933;
  /* 11d47921 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d47924 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11d4792a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4792d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47930 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11d47933:;
  /* 11d47933 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d47936 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d47938 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4793b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d4793e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11d47940 mov esp, ebp */
  ESP = (EBP);
  /* 11d47942 pop ebp */
  EBP = (pop32());
  /* 11d47943 ret  */
  ESPCHK(0x11d47520u, _esp0);
  ESP += 4; return;
}

/* FUN_10007950 @ 0x11d47950 (537 bytes, 173 insns) */
void f_11d47950(void) {
  FTRACE(0x11d47950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d47950 push ebp */
  push32((uint32_t)(EBP));
  /* 11d47951 mov ebp, esp */
  EBP = (ESP);
  /* 11d47953 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d47956 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11d4795d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11d47964 cmp dword ptr [0x11d717b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d717b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4796b jne 0x11d479aa */
  if (!C.zf) goto L_11d479aa;
  /* 11d4796d call dword ptr [0x11d7437c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7437c))), 0x11d47973u);
  /* 11d47973 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11d47976 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4797a je 0x11d47988 */
  if (C.zf) goto L_11d47988;
  /* 11d4797c mov dword ptr [0x11d717b0], 1 */
  w32((uint32_t)(0x11d717b0), (0x1u));
  /* 11d47986 jmp 0x11d479aa */
  goto L_11d479aa;
L_11d47988:;
  /* 11d47988 call dword ptr [0x11d74380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74380))), 0x11d4798eu);
  /* 11d4798e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11d47991 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47995 je 0x11d479a3 */
  if (C.zf) goto L_11d479a3;
  /* 11d47997 mov dword ptr [0x11d717b0], 2 */
  w32((uint32_t)(0x11d717b0), (0x2u));
  /* 11d479a1 jmp 0x11d479aa */
  goto L_11d479aa;
L_11d479a3:;
  /* 11d479a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d479a5 jmp 0x11d47b65 */
  goto L_11d47b65;
L_11d479aa:;
  /* 11d479aa cmp dword ptr [0x11d717b0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11d717b0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d479b1 jne 0x11d47aae */
  if (!C.zf) goto L_11d47aae;
  /* 11d479b7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d479bb jne 0x11d479d3 */
  if (!C.zf) goto L_11d479d3;
  /* 11d479bd call dword ptr [0x11d7437c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7437c))), 0x11d479c3u);
  /* 11d479c3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11d479c6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d479ca jne 0x11d479d3 */
  if (!C.zf) goto L_11d479d3;
  /* 11d479cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d479ce jmp 0x11d47b65 */
  goto L_11d47b65;
L_11d479d3:;
  /* 11d479d3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d479d6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11d479d9:;
  /* 11d479d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d479dc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d479de mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11d479e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d479e3 je 0x11d47a05 */
  if (C.zf) goto L_11d47a05;
  /* 11d479e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d479e8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d479eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d479ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d479f1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d479f3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11d479f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d479f8 jne 0x11d47a03 */
  if (!C.zf) goto L_11d47a03;
  /* 11d479fa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d479fd add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47a00 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11d47a03:;
  /* 11d47a03 jmp 0x11d479d9 */
  goto L_11d479d9;
L_11d47a05:;
  /* 11d47a05 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d47a08 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d47a0b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11d47a0d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47a10 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d47a13 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d47a15 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d47a17 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d47a19 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d47a1b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47a1e push edx */
  push32((uint32_t)(EDX));
  /* 11d47a1f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d47a22 push eax */
  push32((uint32_t)(EAX));
  /* 11d47a23 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d47a25 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d47a27 call dword ptr [0x11d74384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74384))), 0x11d47a2du);
  /* 11d47a2d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11d47a30 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47a34 je 0x11d47a54 */
  if (C.zf) goto L_11d47a54;
  /* 11d47a36 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11d47a38 push 0x11d6ce2c */
  push32((uint32_t)(0x11d6ce2cu));
  /* 11d47a3d push 2 */
  push32((uint32_t)(0x2u));
  /* 11d47a3f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d47a42 push ecx */
  push32((uint32_t)(ECX));
  /* 11d47a43 call 0x11d45380 */
  push32(0x11d47a48u); f_11d45380();
  /* 11d47a48 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47a4b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11d47a4e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47a52 jne 0x11d47a65 */
  if (!C.zf) goto L_11d47a65;
L_11d47a54:;
  /* 11d47a54 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d47a57 push edx */
  push32((uint32_t)(EDX));
  /* 11d47a58 call dword ptr [0x11d74388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74388))), 0x11d47a5eu);
  /* 11d47a5e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d47a60 jmp 0x11d47b65 */
  goto L_11d47b65;
L_11d47a65:;
  /* 11d47a65 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d47a67 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d47a69 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d47a6c push eax */
  push32((uint32_t)(EAX));
  /* 11d47a6d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d47a70 push ecx */
  push32((uint32_t)(ECX));
  /* 11d47a71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47a74 push edx */
  push32((uint32_t)(EDX));
  /* 11d47a75 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d47a78 push eax */
  push32((uint32_t)(EAX));
  /* 11d47a79 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d47a7b push 0 */
  push32((uint32_t)(0x0u));
  /* 11d47a7d call dword ptr [0x11d74384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74384))), 0x11d47a83u);
  /* 11d47a83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d47a85 jne 0x11d47a9c */
  if (!C.zf) goto L_11d47a9c;
  /* 11d47a87 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d47a89 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d47a8c push ecx */
  push32((uint32_t)(ECX));
  /* 11d47a8d call 0x11d45e10 */
  push32(0x11d47a92u); f_11d45e10();
  /* 11d47a92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47a95 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_11d47a9c:;
  /* 11d47a9c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d47a9f push edx */
  push32((uint32_t)(EDX));
  /* 11d47aa0 call dword ptr [0x11d74388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74388))), 0x11d47aa6u);
  /* 11d47aa6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d47aa9 jmp 0x11d47b65 */
  goto L_11d47b65;
L_11d47aae:;
  /* 11d47aae cmp dword ptr [0x11d717b0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11d717b0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47ab5 jne 0x11d47b63 */
  if (!C.zf) goto L_11d47b63;
  /* 11d47abb cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47abf jne 0x11d47ad7 */
  if (!C.zf) goto L_11d47ad7;
  /* 11d47ac1 call dword ptr [0x11d74380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74380))), 0x11d47ac7u);
  /* 11d47ac7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11d47aca cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47ace jne 0x11d47ad7 */
  if (!C.zf) goto L_11d47ad7;
  /* 11d47ad0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d47ad2 jmp 0x11d47b65 */
  goto L_11d47b65;
L_11d47ad7:;
  /* 11d47ad7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d47ada mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11d47add:;
  /* 11d47add mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d47ae0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d47ae3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d47ae5 je 0x11d47b05 */
  if (C.zf) goto L_11d47b05;
  /* 11d47ae7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d47aea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47aed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d47af0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d47af3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d47af6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d47af8 jne 0x11d47b03 */
  if (!C.zf) goto L_11d47b03;
  /* 11d47afa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d47afd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47b00 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11d47b03:;
  /* 11d47b03 jmp 0x11d47add */
  goto L_11d47add;
L_11d47b05:;
  /* 11d47b05 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d47b08 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d47b0b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47b0e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11d47b11 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 11d47b16 push 0x11d6ce2c */
  push32((uint32_t)(0x11d6ce2cu));
  /* 11d47b1b push 2 */
  push32((uint32_t)(0x2u));
  /* 11d47b1d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d47b20 push edx */
  push32((uint32_t)(EDX));
  /* 11d47b21 call 0x11d45380 */
  push32(0x11d47b26u); f_11d45380();
  /* 11d47b26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47b29 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d47b2c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47b30 jne 0x11d47b40 */
  if (!C.zf) goto L_11d47b40;
  /* 11d47b32 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d47b35 push eax */
  push32((uint32_t)(EAX));
  /* 11d47b36 call dword ptr [0x11d7438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7438c))), 0x11d47b3cu);
  /* 11d47b3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d47b3e jmp 0x11d47b65 */
  goto L_11d47b65;
L_11d47b40:;
  /* 11d47b40 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d47b43 push ecx */
  push32((uint32_t)(ECX));
  /* 11d47b44 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d47b47 push edx */
  push32((uint32_t)(EDX));
  /* 11d47b48 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d47b4b push eax */
  push32((uint32_t)(EAX));
  /* 11d47b4c call 0x11d4bc60 */
  push32(0x11d47b51u); f_11d4bc60();
  /* 11d47b51 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47b54 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d47b57 push ecx */
  push32((uint32_t)(ECX));
  /* 11d47b58 call dword ptr [0x11d7438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7438c))), 0x11d47b5eu);
  /* 11d47b5e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d47b61 jmp 0x11d47b65 */
  goto L_11d47b65;
L_11d47b63:;
  /* 11d47b63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d47b65:;
  /* 11d47b65 mov esp, ebp */
  ESP = (EBP);
  /* 11d47b67 pop ebp */
  EBP = (pop32());
  /* 11d47b68 ret  */
  ESPCHK(0x11d47950u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b70 @ 0x11d47b70 (77 bytes, 25 insns) */
void f_11d47b70(void) {
  FTRACE(0x11d47b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d47b70 push ebp */
  push32((uint32_t)(EBP));
  /* 11d47b71 mov ebp, esp */
  EBP = (ESP);
  /* 11d47b73 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d47b75 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11d47b7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d47b7c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47b80 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11d47b83 push eax */
  push32((uint32_t)(EAX));
  /* 11d47b84 call dword ptr [0x11d74374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74374))), 0x11d47b8au);
  /* 11d47b8a mov dword ptr [0x11d72fec], eax */
  w32((uint32_t)(0x11d72fec), (EAX));
  /* 11d47b8f cmp dword ptr [0x11d72fec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d72fec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47b96 jne 0x11d47b9c */
  if (!C.zf) goto L_11d47b9c;
  /* 11d47b98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d47b9a jmp 0x11d47bbb */
  goto L_11d47bbb;
L_11d47b9c:;
  /* 11d47b9c call 0x11d49620 */
  push32(0x11d47ba1u); f_11d49620();
  /* 11d47ba1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d47ba3 jne 0x11d47bb6 */
  if (!C.zf) goto L_11d47bb6;
  /* 11d47ba5 mov ecx, dword ptr [0x11d72fec] */
  ECX = (r32((uint32_t)(0x11d72fec)));
  /* 11d47bab push ecx */
  push32((uint32_t)(ECX));
  /* 11d47bac call dword ptr [0x11d74378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74378))), 0x11d47bb2u);
  /* 11d47bb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d47bb4 jmp 0x11d47bbb */
  goto L_11d47bbb;
L_11d47bb6:;
  /* 11d47bb6 mov eax, 1 */
  EAX = (0x1u);
L_11d47bbb:;
  /* 11d47bbb pop ebp */
  EBP = (pop32());
  /* 11d47bbc ret  */
  ESPCHK(0x11d47b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007bc0 @ 0x11d47bc0 (156 bytes, 48 insns) */
void f_11d47bc0(void) {
  FTRACE(0x11d47bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d47bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d47bc1 mov ebp, esp */
  EBP = (ESP);
  /* 11d47bc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d47bc6 mov eax, dword ptr [0x11d72fe8] */
  EAX = (r32((uint32_t)(0x11d72fe8)));
  /* 11d47bcb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d47bce mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d47bd5 jmp 0x11d47be0 */
  goto L_11d47be0;
L_11d47bd7:;
  /* 11d47bd7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47bda add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47bdd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11d47be0:;
  /* 11d47be0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47be3 cmp edx, dword ptr [0x11d72fe4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11d72fe4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47be9 jge 0x11d47c36 */
  if ((C.sf==C.of)) goto L_11d47c36;
  /* 11d47beb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11d47bf0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11d47bf5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d47bf8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11d47bfb push ecx */
  push32((uint32_t)(ECX));
  /* 11d47bfc call dword ptr [0x11d7436c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7436c))), 0x11d47c02u);
  /* 11d47c02 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11d47c07 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d47c09 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d47c0c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11d47c0f push eax */
  push32((uint32_t)(EAX));
  /* 11d47c10 call dword ptr [0x11d7436c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7436c))), 0x11d47c16u);
  /* 11d47c16 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d47c19 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11d47c1c push edx */
  push32((uint32_t)(EDX));
  /* 11d47c1d push 0 */
  push32((uint32_t)(0x0u));
  /* 11d47c1f mov eax, dword ptr [0x11d72fec] */
  EAX = (r32((uint32_t)(0x11d72fec)));
  /* 11d47c24 push eax */
  push32((uint32_t)(EAX));
  /* 11d47c25 call dword ptr [0x11d74370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74370))), 0x11d47c2bu);
  /* 11d47c2b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d47c2e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47c31 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d47c34 jmp 0x11d47bd7 */
  goto L_11d47bd7;
L_11d47c36:;
  /* 11d47c36 mov edx, dword ptr [0x11d72fe8] */
  EDX = (r32((uint32_t)(0x11d72fe8)));
  /* 11d47c3c push edx */
  push32((uint32_t)(EDX));
  /* 11d47c3d push 0 */
  push32((uint32_t)(0x0u));
  /* 11d47c3f mov eax, dword ptr [0x11d72fec] */
  EAX = (r32((uint32_t)(0x11d72fec)));
  /* 11d47c44 push eax */
  push32((uint32_t)(EAX));
  /* 11d47c45 call dword ptr [0x11d74370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74370))), 0x11d47c4bu);
  /* 11d47c4b mov ecx, dword ptr [0x11d72fec] */
  ECX = (r32((uint32_t)(0x11d72fec)));
  /* 11d47c51 push ecx */
  push32((uint32_t)(ECX));
  /* 11d47c52 call dword ptr [0x11d74378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74378))), 0x11d47c58u);
  /* 11d47c58 mov esp, ebp */
  ESP = (EBP);
  /* 11d47c5a pop ebp */
  EBP = (pop32());
  /* 11d47c5b ret  */
  ESPCHK(0x11d47bc0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x11d47c60 (73 bytes, 19 insns) */
void f_11d47c60(void) {
  FTRACE(0x11d47c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d47c60 push ebp */
  push32((uint32_t)(EBP));
  /* 11d47c61 mov ebp, esp */
  EBP = (ESP);
  /* 11d47c63 cmp dword ptr [0x11d71644], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11d71644))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47c6a je 0x11d47c7e */
  if (C.zf) goto L_11d47c7e;
  /* 11d47c6c cmp dword ptr [0x11d71644], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d71644))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47c73 jne 0x11d47ca7 */
  if (!C.zf) goto L_11d47ca7;
  /* 11d47c75 cmp dword ptr [0x11d71648], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11d71648))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47c7c jne 0x11d47ca7 */
  if (!C.zf) goto L_11d47ca7;
L_11d47c7e:;
  /* 11d47c7e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11d47c83 call 0x11d47cb0 */
  push32(0x11d47c88u); f_11d47cb0();
  /* 11d47c88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47c8b cmp dword ptr [0x11d717b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d717b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47c92 je 0x11d47c9a */
  if (C.zf) goto L_11d47c9a;
  /* 11d47c94 call dword ptr [0x11d717b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d717b4))), 0x11d47c9au);
L_11d47c9a:;
  /* 11d47c9a push 0xff */
  push32((uint32_t)(0xffu));
  /* 11d47c9f call 0x11d47cb0 */
  push32(0x11d47ca4u); f_11d47cb0();
  /* 11d47ca4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d47ca7:;
  /* 11d47ca7 pop ebp */
  EBP = (pop32());
  /* 11d47ca8 ret  */
  ESPCHK(0x11d47c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cb0 @ 0x11d47cb0 (447 bytes, 131 insns) */
void f_11d47cb0(void) {
  FTRACE(0x11d47cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d47cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d47cb1 mov ebp, esp */
  EBP = (ESP);
  /* 11d47cb3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d47cb9 push ebx */
  push32((uint32_t)(EBX));
  /* 11d47cba push esi */
  push32((uint32_t)(ESI));
  /* 11d47cbb push edi */
  push32((uint32_t)(EDI));
  /* 11d47cbc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11d47cc3 jmp 0x11d47cce */
  goto L_11d47cce;
L_11d47cc5:;
  /* 11d47cc5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d47cc8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47ccb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11d47cce:;
  /* 11d47cce cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47cd2 jae 0x11d47ce7 */
  if (!C.cf) goto L_11d47ce7;
  /* 11d47cd4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d47cd7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d47cda cmp edx, dword ptr [ecx*8 + 0x11d6fab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x11d6fab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47ce1 jne 0x11d47ce5 */
  if (!C.zf) goto L_11d47ce5;
  /* 11d47ce3 jmp 0x11d47ce7 */
  goto L_11d47ce7;
L_11d47ce5:;
  /* 11d47ce5 jmp 0x11d47cc5 */
  goto L_11d47cc5;
L_11d47ce7:;
  /* 11d47ce7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d47cea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d47ced cmp ecx, dword ptr [eax*8 + 0x11d6fab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11d6fab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47cf4 jne 0x11d47e68 */
  if (!C.zf) goto L_11d47e68;
  /* 11d47cfa cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47d01 je 0x11d47d24 */
  if (C.zf) goto L_11d47d24;
  /* 11d47d03 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d47d06 mov eax, dword ptr [edx*8 + 0x11d6fab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11d6fab4)));
  /* 11d47d0d push eax */
  push32((uint32_t)(EAX));
  /* 11d47d0e push 0 */
  push32((uint32_t)(0x0u));
  /* 11d47d10 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d47d12 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d47d14 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d47d16 call 0x11d44440 */
  push32(0x11d47d1bu); f_11d44440();
  /* 11d47d1b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47d1e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47d21 jne 0x11d47d24 */
  if (!C.zf) goto L_11d47d24;
  /* 11d47d23 int3  */
  x86_unimpl("int3 @ 0x11d47d23");
L_11d47d24:;
  /* 11d47d24 cmp dword ptr [0x11d71644], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11d71644))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47d2b je 0x11d47d3f */
  if (C.zf) goto L_11d47d3f;
  /* 11d47d2d cmp dword ptr [0x11d71644], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d71644))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47d34 jne 0x11d47d78 */
  if (!C.zf) goto L_11d47d78;
  /* 11d47d36 cmp dword ptr [0x11d71648], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11d71648))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47d3d jne 0x11d47d78 */
  if (!C.zf) goto L_11d47d78;
L_11d47d3f:;
  /* 11d47d3f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d47d41 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11d47d44 push ecx */
  push32((uint32_t)(ECX));
  /* 11d47d45 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d47d48 mov eax, dword ptr [edx*8 + 0x11d6fab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11d6fab4)));
  /* 11d47d4f push eax */
  push32((uint32_t)(EAX));
  /* 11d47d50 call 0x11d481b0 */
  push32(0x11d47d55u); f_11d481b0();
  /* 11d47d55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47d58 push eax */
  push32((uint32_t)(EAX));
  /* 11d47d59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d47d5c mov edx, dword ptr [ecx*8 + 0x11d6fab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x11d6fab4)));
  /* 11d47d63 push edx */
  push32((uint32_t)(EDX));
  /* 11d47d64 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11d47d66 call dword ptr [0x11d743b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743b0))), 0x11d47d6cu);
  /* 11d47d6c push eax */
  push32((uint32_t)(EAX));
  /* 11d47d6d call dword ptr [0x11d743b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743b4))), 0x11d47d73u);
  /* 11d47d73 jmp 0x11d47e68 */
  goto L_11d47e68;
L_11d47d78:;
  /* 11d47d78 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47d7f je 0x11d47e68 */
  if (C.zf) goto L_11d47e68;
  /* 11d47d85 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11d47d8a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 11d47d90 push eax */
  push32((uint32_t)(EAX));
  /* 11d47d91 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d47d93 call dword ptr [0x11d742e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d742e0))), 0x11d47d99u);
  /* 11d47d99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d47d9b jne 0x11d47db1 */
  if (!C.zf) goto L_11d47db1;
  /* 11d47d9d push 0x11d6c694 */
  push32((uint32_t)(0x11d6c694u));
  /* 11d47da2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11d47da8 push ecx */
  push32((uint32_t)(ECX));
  /* 11d47da9 call 0x11d48330 */
  push32(0x11d47daeu); f_11d48330();
  /* 11d47dae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d47db1:;
  /* 11d47db1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 11d47db7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11d47dba mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d47dbd push eax */
  push32((uint32_t)(EAX));
  /* 11d47dbe call 0x11d481b0 */
  push32(0x11d47dc3u); f_11d481b0();
  /* 11d47dc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47dc6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47dc9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47dcc jbe 0x11d47dfa */
  if ((C.cf||C.zf)) goto L_11d47dfa;
  /* 11d47dce lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11d47dd4 push ecx */
  push32((uint32_t)(ECX));
  /* 11d47dd5 call 0x11d481b0 */
  push32(0x11d47ddau); f_11d481b0();
  /* 11d47dda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47ddd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d47de0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 11d47de4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d47de7 push 3 */
  push32((uint32_t)(0x3u));
  /* 11d47de9 push 0x11d6c690 */
  push32((uint32_t)(0x11d6c690u));
  /* 11d47dee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d47df1 push ecx */
  push32((uint32_t)(ECX));
  /* 11d47df2 call 0x11d48ba0 */
  push32(0x11d47df7u); f_11d48ba0();
  /* 11d47df7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d47dfa:;
  /* 11d47dfa push 0x11d6d0e8 */
  push32((uint32_t)(0x11d6d0e8u));
  /* 11d47dff lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11d47e05 push edx */
  push32((uint32_t)(EDX));
  /* 11d47e06 call 0x11d48330 */
  push32(0x11d47e0bu); f_11d48330();
  /* 11d47e0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47e0e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d47e11 push eax */
  push32((uint32_t)(EAX));
  /* 11d47e12 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 11d47e18 push ecx */
  push32((uint32_t)(ECX));
  /* 11d47e19 call 0x11d48340 */
  push32(0x11d47e1eu); f_11d48340();
  /* 11d47e1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47e21 push 0x11d6c608 */
  push32((uint32_t)(0x11d6c608u));
  /* 11d47e26 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11d47e2c push edx */
  push32((uint32_t)(EDX));
  /* 11d47e2d call 0x11d48340 */
  push32(0x11d47e32u); f_11d48340();
  /* 11d47e32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47e35 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d47e38 mov ecx, dword ptr [eax*8 + 0x11d6fab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x11d6fab4)));
  /* 11d47e3f push ecx */
  push32((uint32_t)(ECX));
  /* 11d47e40 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11d47e46 push edx */
  push32((uint32_t)(EDX));
  /* 11d47e47 call 0x11d48340 */
  push32(0x11d47e4cu); f_11d48340();
  /* 11d47e4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47e4f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11d47e54 push 0x11d6d0c0 */
  push32((uint32_t)(0x11d6d0c0u));
  /* 11d47e59 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 11d47e5f push eax */
  push32((uint32_t)(EAX));
  /* 11d47e60 call 0x11d48ae0 */
  push32(0x11d47e65u); f_11d48ae0();
  /* 11d47e65 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d47e68:;
  /* 11d47e68 pop edi */
  EDI = (pop32());
  /* 11d47e69 pop esi */
  ESI = (pop32());
  /* 11d47e6a pop ebx */
  EBX = (pop32());
  /* 11d47e6b mov esp, ebp */
  ESP = (EBP);
  /* 11d47e6d pop ebp */
  EBP = (pop32());
  /* 11d47e6e ret  */
  ESPCHK(0x11d47cb0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x11d47e70 (80 bytes, 27 insns) */
void f_11d47e70(void) {
  FTRACE(0x11d47e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d47e70 push ebp */
  push32((uint32_t)(EBP));
  /* 11d47e71 mov ebp, esp */
  EBP = (ESP);
  /* 11d47e73 push ecx */
  push32((uint32_t)(ECX));
  /* 11d47e74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d47e7b jmp 0x11d47e86 */
  goto L_11d47e86;
L_11d47e7d:;
  /* 11d47e7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47e80 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47e83 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d47e86:;
  /* 11d47e86 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47e8a jae 0x11d47e9f */
  if (!C.cf) goto L_11d47e9f;
  /* 11d47e8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47e8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d47e92 cmp edx, dword ptr [ecx*8 + 0x11d6fab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x11d6fab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47e99 jne 0x11d47e9d */
  if (!C.zf) goto L_11d47e9d;
  /* 11d47e9b jmp 0x11d47e9f */
  goto L_11d47e9f;
L_11d47e9d:;
  /* 11d47e9d jmp 0x11d47e7d */
  goto L_11d47e7d;
L_11d47e9f:;
  /* 11d47e9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47ea2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d47ea5 cmp ecx, dword ptr [eax*8 + 0x11d6fab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11d6fab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47eac jne 0x11d47eba */
  if (!C.zf) goto L_11d47eba;
  /* 11d47eae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47eb1 mov eax, dword ptr [edx*8 + 0x11d6fab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11d6fab4)));
  /* 11d47eb8 jmp 0x11d47ebc */
  goto L_11d47ebc;
L_11d47eba:;
  /* 11d47eba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d47ebc:;
  /* 11d47ebc mov esp, ebp */
  ESP = (EBP);
  /* 11d47ebe pop ebp */
  EBP = (pop32());
  /* 11d47ebf ret  */
  ESPCHK(0x11d47e70u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x11d47ec0 (66 bytes, 28 insns) */
void f_11d47ec0(void) {
  FTRACE(0x11d47ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d47ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d47ec1 mov ebp, esp */
  EBP = (ESP);
  /* 11d47ec3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47ec7 jne 0x11d47ee7 */
  if (!C.zf) goto L_11d47ee7;
  /* 11d47ec9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47ecd jge 0x11d47ee7 */
  if ((C.sf==C.of)) goto L_11d47ee7;
  /* 11d47ecf push 1 */
  push32((uint32_t)(0x1u));
  /* 11d47ed1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d47ed4 push eax */
  push32((uint32_t)(EAX));
  /* 11d47ed5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d47ed8 push ecx */
  push32((uint32_t)(ECX));
  /* 11d47ed9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d47edc push edx */
  push32((uint32_t)(EDX));
  /* 11d47edd call 0x11d47f10 */
  push32(0x11d47ee2u); f_11d47f10();
  /* 11d47ee2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47ee5 jmp 0x11d47efd */
  goto L_11d47efd;
L_11d47ee7:;
  /* 11d47ee7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d47ee9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d47eec push eax */
  push32((uint32_t)(EAX));
  /* 11d47eed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d47ef0 push ecx */
  push32((uint32_t)(ECX));
  /* 11d47ef1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d47ef4 push edx */
  push32((uint32_t)(EDX));
  /* 11d47ef5 call 0x11d47f10 */
  push32(0x11d47efau); f_11d47f10();
  /* 11d47efa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d47efd:;
  /* 11d47efd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d47f00 pop ebp */
  EBP = (pop32());
  /* 11d47f01 ret  */
  ESPCHK(0x11d47ec0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x11d47f10 (194 bytes, 71 insns) */
void f_11d47f10(void) {
  FTRACE(0x11d47f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d47f10 push ebp */
  push32((uint32_t)(EBP));
  /* 11d47f11 mov ebp, esp */
  EBP = (ESP);
  /* 11d47f13 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d47f16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d47f19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d47f1c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47f20 je 0x11d47f39 */
  if (C.zf) goto L_11d47f39;
  /* 11d47f22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47f25 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11d47f28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47f2b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47f2e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d47f31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d47f34 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d47f36 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11d47f39:;
  /* 11d47f39 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47f3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11d47f3f:;
  /* 11d47f3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d47f42 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d47f44 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d47f47 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11d47f4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d47f4d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d47f4f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d47f52 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d47f55 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47f59 jbe 0x11d47f71 */
  if ((C.cf||C.zf)) goto L_11d47f71;
  /* 11d47f5b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d47f5e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47f61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47f64 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11d47f66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47f69 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47f6c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d47f6f jmp 0x11d47f85 */
  goto L_11d47f85;
L_11d47f71:;
  /* 11d47f71 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d47f74 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47f77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47f7a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11d47f7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47f7f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47f82 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11d47f85:;
  /* 11d47f85 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47f89 ja 0x11d47f3f */
  if ((!C.cf&&!C.zf)) goto L_11d47f3f;
  /* 11d47f8b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47f8e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11d47f91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47f94 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d47f97 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d47f9a:;
  /* 11d47f9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47f9d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d47f9f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11d47fa2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47fa5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d47fa8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d47faa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11d47fac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d47faf mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11d47fb2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11d47fb4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d47fb7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d47fba mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d47fbd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d47fc0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d47fc3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d47fc6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d47fc9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47fcc jb 0x11d47f9a */
  if (C.cf) goto L_11d47f9a;
  /* 11d47fce mov esp, ebp */
  ESP = (EBP);
  /* 11d47fd0 pop ebp */
  EBP = (pop32());
  /* 11d47fd1 ret  */
  ESPCHK(0x11d47f10u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x11d47fe0 (63 bytes, 24 insns) */
void f_11d47fe0(void) {
  FTRACE(0x11d47fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d47fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d47fe1 mov ebp, esp */
  EBP = (ESP);
  /* 11d47fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d47fe4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47fe8 jne 0x11d47ff9 */
  if (!C.zf) goto L_11d47ff9;
  /* 11d47fea cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d47fee jge 0x11d47ff9 */
  if ((C.sf==C.of)) goto L_11d47ff9;
  /* 11d47ff0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11d47ff7 jmp 0x11d48000 */
  goto L_11d48000;
L_11d47ff9:;
  /* 11d47ff9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11d48000:;
  /* 11d48000 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d48003 push eax */
  push32((uint32_t)(EAX));
  /* 11d48004 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d48007 push ecx */
  push32((uint32_t)(ECX));
  /* 11d48008 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4800b push edx */
  push32((uint32_t)(EDX));
  /* 11d4800c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4800f push eax */
  push32((uint32_t)(EAX));
  /* 11d48010 call 0x11d47f10 */
  push32(0x11d48015u); f_11d47f10();
  /* 11d48015 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d48018 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4801b mov esp, ebp */
  ESP = (EBP);
  /* 11d4801d pop ebp */
  EBP = (pop32());
  /* 11d4801e ret  */
  ESPCHK(0x11d47fe0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x11d48020 (30 bytes, 14 insns) */
void f_11d48020(void) {
  FTRACE(0x11d48020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d48020 push ebp */
  push32((uint32_t)(EBP));
  /* 11d48021 mov ebp, esp */
  EBP = (ESP);
  /* 11d48023 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d48025 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d48028 push eax */
  push32((uint32_t)(EAX));
  /* 11d48029 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4802c push ecx */
  push32((uint32_t)(ECX));
  /* 11d4802d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d48030 push edx */
  push32((uint32_t)(EDX));
  /* 11d48031 call 0x11d47f10 */
  push32(0x11d48036u); f_11d47f10();
  /* 11d48036 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d48039 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4803c pop ebp */
  EBP = (pop32());
  /* 11d4803d ret  */
  ESPCHK(0x11d48020u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x11d48040 (72 bytes, 28 insns) */
void f_11d48040(void) {
  FTRACE(0x11d48040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d48040 push ebp */
  push32((uint32_t)(EBP));
  /* 11d48041 mov ebp, esp */
  EBP = (ESP);
  /* 11d48043 push ecx */
  push32((uint32_t)(ECX));
  /* 11d48044 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48048 jne 0x11d48061 */
  if (!C.zf) goto L_11d48061;
  /* 11d4804a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4804e jg 0x11d48061 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d48061;
  /* 11d48050 jl 0x11d48058 */
  if ((C.sf!=C.of)) goto L_11d48058;
  /* 11d48052 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48056 jae 0x11d48061 */
  if (!C.cf) goto L_11d48061;
L_11d48058:;
  /* 11d48058 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11d4805f jmp 0x11d48068 */
  goto L_11d48068;
L_11d48061:;
  /* 11d48061 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11d48068:;
  /* 11d48068 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4806b push eax */
  push32((uint32_t)(EAX));
  /* 11d4806c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d4806f push ecx */
  push32((uint32_t)(ECX));
  /* 11d48070 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d48073 push edx */
  push32((uint32_t)(EDX));
  /* 11d48074 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d48077 push eax */
  push32((uint32_t)(EAX));
  /* 11d48078 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4807b push ecx */
  push32((uint32_t)(ECX));
  /* 11d4807c call 0x11d48090 */
  push32(0x11d48081u); f_11d48090();
  /* 11d48081 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d48084 mov esp, ebp */
  ESP = (EBP);
  /* 11d48086 pop ebp */
  EBP = (pop32());
  /* 11d48087 ret  */
  ESPCHK(0x11d48040u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x11d48090 (242 bytes, 91 insns) */
void f_11d48090(void) {
  FTRACE(0x11d48090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d48090 push ebp */
  push32((uint32_t)(EBP));
  /* 11d48091 mov ebp, esp */
  EBP = (ESP);
  /* 11d48093 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d48096 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d48099 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d4809c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d480a0 je 0x11d480c4 */
  if (C.zf) goto L_11d480c4;
  /* 11d480a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d480a5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11d480a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d480ab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d480ae mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d480b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d480b4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d480b6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d480b9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d480bc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d480be mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d480c1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11d480c4:;
  /* 11d480c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d480c7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11d480ca:;
  /* 11d480ca mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d480cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d480cf push ecx */
  push32((uint32_t)(ECX));
  /* 11d480d0 push eax */
  push32((uint32_t)(EAX));
  /* 11d480d1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d480d4 push edx */
  push32((uint32_t)(EDX));
  /* 11d480d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d480d8 push eax */
  push32((uint32_t)(EAX));
  /* 11d480d9 call 0x11d4c010 */
  push32(0x11d480deu); f_11d4c010();
  /* 11d480de mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d480e1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d480e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d480e6 push edx */
  push32((uint32_t)(EDX));
  /* 11d480e7 push ecx */
  push32((uint32_t)(ECX));
  /* 11d480e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d480eb push eax */
  push32((uint32_t)(EAX));
  /* 11d480ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d480ef push ecx */
  push32((uint32_t)(ECX));
  /* 11d480f0 call 0x11d4bfa0 */
  push32(0x11d480f5u); f_11d4bfa0();
  /* 11d480f5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d480f8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11d480fb cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d480ff jbe 0x11d48117 */
  if ((C.cf||C.zf)) goto L_11d48117;
  /* 11d48101 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d48104 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d48107 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4810a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11d4810c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4810f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d48112 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d48115 jmp 0x11d4812b */
  goto L_11d4812b;
L_11d48117:;
  /* 11d48117 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4811a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4811d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d48120 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11d48122 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d48125 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d48128 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11d4812b:;
  /* 11d4812b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4812f ja 0x11d480ca */
  if ((!C.cf&&!C.zf)) goto L_11d480ca;
  /* 11d48131 jb 0x11d48139 */
  if (C.cf) goto L_11d48139;
  /* 11d48133 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48137 ja 0x11d480ca */
  if ((!C.cf&&!C.zf)) goto L_11d480ca;
L_11d48139:;
  /* 11d48139 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4813c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11d4813f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d48142 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d48145 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d48148:;
  /* 11d48148 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4814b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d4814d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11d48150 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d48153 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d48156 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d48158 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11d4815a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4815d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11d48160 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11d48162 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d48165 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d48168 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d4816b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4816e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d48171 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d48174 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d48177 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4817a jb 0x11d48148 */
  if (C.cf) goto L_11d48148;
  /* 11d4817c mov esp, ebp */
  ESP = (EBP);
  /* 11d4817e pop ebp */
  EBP = (pop32());
  /* 11d4817f ret 0x14 */
  ESPCHK(0x11d48090u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x11d48190 (31 bytes, 15 insns) */
void f_11d48190(void) {
  FTRACE(0x11d48190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d48190 push ebp */
  push32((uint32_t)(EBP));
  /* 11d48191 mov ebp, esp */
  EBP = (ESP);
  /* 11d48193 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d48195 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d48198 push eax */
  push32((uint32_t)(EAX));
  /* 11d48199 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d4819c push ecx */
  push32((uint32_t)(ECX));
  /* 11d4819d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d481a0 push edx */
  push32((uint32_t)(EDX));
  /* 11d481a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d481a4 push eax */
  push32((uint32_t)(EAX));
  /* 11d481a5 call 0x11d48090 */
  push32(0x11d481aau); f_11d48090();
  /* 11d481aa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d481ad pop ebp */
  EBP = (pop32());
  /* 11d481ae ret  */
  ESPCHK(0x11d48190u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11d481b0 (123 bytes, 44 insns) */
void f_11d481b0(void) {
  FTRACE(0x11d481b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d481b0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d481b4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11d481ba je 0x11d481d0 */
  if (C.zf) goto L_11d481d0;
L_11d481bc:;
  /* 11d481bc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11d481be inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11d481bf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d481c1 je 0x11d48203 */
  if (C.zf) goto L_11d48203;
  /* 11d481c3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11d481c9 jne 0x11d481bc */
  if (!C.zf) goto L_11d481bc;
  /* 11d481cb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11d481d0:;
  /* 11d481d0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11d481d2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11d481d7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d481d9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d481dc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d481de add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d481e1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11d481e6 je 0x11d481d0 */
  if (C.zf) goto L_11d481d0;
  /* 11d481e8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11d481eb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d481ed je 0x11d48221 */
  if (C.zf) goto L_11d48221;
  /* 11d481ef test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11d481f1 je 0x11d48217 */
  if (C.zf) goto L_11d48217;
  /* 11d481f3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11d481f8 je 0x11d4820d */
  if (C.zf) goto L_11d4820d;
  /* 11d481fa test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11d481ff je 0x11d48203 */
  if (C.zf) goto L_11d48203;
  /* 11d48201 jmp 0x11d481d0 */
  goto L_11d481d0;
L_11d48203:;
  /* 11d48203 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11d48206 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d4820a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4820c ret  */
  ESPCHK(0x11d481b0u, _esp0);
  ESP += 4; return;
L_11d4820d:;
  /* 11d4820d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11d48210 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d48214 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d48216 ret  */
  ESPCHK(0x11d481b0u, _esp0);
  ESP += 4; return;
L_11d48217:;
  /* 11d48217 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11d4821a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d4821e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d48220 ret  */
  ESPCHK(0x11d481b0u, _esp0);
  ESP += 4; return;
L_11d48221:;
  /* 11d48221 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11d48224 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d48228 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d4822a ret  */
  ESPCHK(0x11d481b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008230 @ 0x11d48230 (249 bytes, 93 insns) */
void f_11d48230(void) {
  FTRACE(0x11d48230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d48230 push ebp */
  push32((uint32_t)(EBP));
  /* 11d48231 mov ebp, esp */
  EBP = (ESP);
  /* 11d48233 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d48236 push ebx */
  push32((uint32_t)(EBX));
  /* 11d48237 push esi */
  push32((uint32_t)(ESI));
  /* 11d48238 push edi */
  push32((uint32_t)(EDI));
  /* 11d48239 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11d4823c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11d4823f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 11d48242 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11d48245:;
  /* 11d48245 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48249 jne 0x11d48269 */
  if (!C.zf) goto L_11d48269;
  /* 11d4824b push 0x11d6d120 */
  push32((uint32_t)(0x11d6d120u));
  /* 11d48250 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d48252 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11d48254 push 0x11d6d114 */
  push32((uint32_t)(0x11d6d114u));
  /* 11d48259 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d4825b call 0x11d44440 */
  push32(0x11d48260u); f_11d44440();
  /* 11d48260 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d48263 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48266 jne 0x11d48269 */
  if (!C.zf) goto L_11d48269;
  /* 11d48268 int3  */
  x86_unimpl("int3 @ 0x11d48268");
L_11d48269:;
  /* 11d48269 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4826b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d4826d jne 0x11d48245 */
  if (!C.zf) goto L_11d48245;
L_11d4826f:;
  /* 11d4826f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48273 jne 0x11d48293 */
  if (!C.zf) goto L_11d48293;
  /* 11d48275 push 0x11d6d104 */
  push32((uint32_t)(0x11d6d104u));
  /* 11d4827a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4827c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11d4827e push 0x11d6d114 */
  push32((uint32_t)(0x11d6d114u));
  /* 11d48283 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d48285 call 0x11d44440 */
  push32(0x11d4828au); f_11d44440();
  /* 11d4828a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4828d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48290 jne 0x11d48293 */
  if (!C.zf) goto L_11d48293;
  /* 11d48292 int3  */
  x86_unimpl("int3 @ 0x11d48292");
L_11d48293:;
  /* 11d48293 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d48295 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d48297 jne 0x11d4826f */
  if (!C.zf) goto L_11d4826f;
  /* 11d48299 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4829c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 11d482a3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d482a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d482a9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11d482ac mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d482af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d482b2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11d482b4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d482b7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d482ba mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11d482bd mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d482c0 push edx */
  push32((uint32_t)(EDX));
  /* 11d482c1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d482c4 push eax */
  push32((uint32_t)(EAX));
  /* 11d482c5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d482c8 push ecx */
  push32((uint32_t)(ECX));
  /* 11d482c9 call 0x11d4c310 */
  push32(0x11d482ceu); f_11d4c310();
  /* 11d482ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d482d1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11d482d4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d482d7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11d482da sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d482dd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d482e0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11d482e3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d482e6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d482ea jl 0x11d4830e */
  if ((C.sf!=C.of)) goto L_11d4830e;
  /* 11d482ec mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d482ef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d482f1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11d482f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d482f6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d482fc mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11d482ff mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d48302 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d48304 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d48307 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d4830a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11d4830c jmp 0x11d4831f */
  goto L_11d4831f;
L_11d4830e:;
  /* 11d4830e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d48311 push eax */
  push32((uint32_t)(EAX));
  /* 11d48312 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d48314 call 0x11d4c090 */
  push32(0x11d48319u); f_11d4c090();
  /* 11d48319 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4831c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11d4831f:;
  /* 11d4831f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d48322 pop edi */
  EDI = (pop32());
  /* 11d48323 pop esi */
  ESI = (pop32());
  /* 11d48324 pop ebx */
  EBX = (pop32());
  /* 11d48325 mov esp, ebp */
  ESP = (EBP);
  /* 11d48327 pop ebp */
  EBP = (pop32());
  /* 11d48328 ret  */
  ESPCHK(0x11d48230u, _esp0);
  ESP += 4; return;
}

/* FUN_10008330 @ 0x11d48330 (7 bytes, 3 insns) */
void f_11d48330(void) {
  FTRACE(0x11d48330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d48330 push edi */
  push32((uint32_t)(EDI));
  /* 11d48331 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11d48335 jmp 0x11d483a1 */
  jmp_ind(0x11d483a1u); return;
}

/* FUN_10008340 @ 0x11d48340 (224 bytes, 84 insns) */
void f_11d48340(void) {
  FTRACE(0x11d48340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d48340 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d48344 push edi */
  push32((uint32_t)(EDI));
  /* 11d48345 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11d4834b je 0x11d4835c */
  if (C.zf) goto L_11d4835c;
L_11d4834d:;
  /* 11d4834d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11d4834f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11d48350 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d48352 je 0x11d4838f */
  if (C.zf) goto L_11d4838f;
  /* 11d48354 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11d4835a jne 0x11d4834d */
  if (!C.zf) goto L_11d4834d;
L_11d4835c:;
  /* 11d4835c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11d4835e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11d48363 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d48365 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d48368 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4836a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4836d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11d48372 je 0x11d4835c */
  if (C.zf) goto L_11d4835c;
  /* 11d48374 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11d48377 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d48379 je 0x11d4839e */
  if (C.zf) goto L_11d4839e;
  /* 11d4837b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11d4837d je 0x11d48399 */
  if (C.zf) goto L_11d48399;
  /* 11d4837f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11d48384 je 0x11d48394 */
  if (C.zf) goto L_11d48394;
  /* 11d48386 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11d4838b je 0x11d4838f */
  if (C.zf) goto L_11d4838f;
  /* 11d4838d jmp 0x11d4835c */
  goto L_11d4835c;
L_11d4838f:;
  /* 11d4838f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11d48392 jmp 0x11d483a1 */
  goto L_11d483a1;
L_11d48394:;
  /* 11d48394 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11d48397 jmp 0x11d483a1 */
  goto L_11d483a1;
L_11d48399:;
  /* 11d48399 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11d4839c jmp 0x11d483a1 */
  goto L_11d483a1;
L_11d4839e:;
  /* 11d4839e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11d483a1:;
  /* 11d483a1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11d483a5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11d483ab je 0x11d483c6 */
  if (C.zf) goto L_11d483c6;
L_11d483ad:;
  /* 11d483ad mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d483af inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11d483b0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11d483b2 je 0x11d48418 */
  if (C.zf) goto L_11d48418;
  /* 11d483b4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11d483b6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d483b7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11d483bd jne 0x11d483ad */
  if (!C.zf) goto L_11d483ad;
  /* 11d483bf jmp 0x11d483c6 */
  goto L_11d483c6;
L_11d483c1:;
  /* 11d483c1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11d483c3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11d483c6:;
  /* 11d483c6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11d483cb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11d483cd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d483cf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d483d2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d483d4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d483d6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d483d9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11d483de je 0x11d483c1 */
  if (C.zf) goto L_11d483c1;
  /* 11d483e0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11d483e2 je 0x11d48418 */
  if (C.zf) goto L_11d48418;
  /* 11d483e4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11d483e6 je 0x11d4840f */
  if (C.zf) goto L_11d4840f;
  /* 11d483e8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11d483ee je 0x11d48402 */
  if (C.zf) goto L_11d48402;
  /* 11d483f0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11d483f6 je 0x11d483fa */
  if (C.zf) goto L_11d483fa;
  /* 11d483f8 jmp 0x11d483c1 */
  goto L_11d483c1;
L_11d483fa:;
  /* 11d483fa mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11d483fc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d48400 pop edi */
  EDI = (pop32());
  /* 11d48401 ret  */
  ESPCHK(0x11d48340u, _esp0);
  ESP += 4; return;
L_11d48402:;
  /* 11d48402 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11d48405 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d48409 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11d4840d pop edi */
  EDI = (pop32());
  /* 11d4840e ret  */
  ESPCHK(0x11d48340u, _esp0);
  ESP += 4; return;
L_11d4840f:;
  /* 11d4840f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11d48412 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d48416 pop edi */
  EDI = (pop32());
  /* 11d48417 ret  */
  ESPCHK(0x11d48340u, _esp0);
  ESP += 4; return;
L_11d48418:;
  /* 11d48418 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11d4841a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d4841e pop edi */
  EDI = (pop32());
  /* 11d4841f ret  */
  ESPCHK(0x11d48340u, _esp0);
  ESP += 4; return;
}

/* FUN_10008420 @ 0x11d48420 (243 bytes, 91 insns) */
void f_11d48420(void) {
  FTRACE(0x11d48420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d48420 push ebp */
  push32((uint32_t)(EBP));
  /* 11d48421 mov ebp, esp */
  EBP = (ESP);
  /* 11d48423 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d48426 push ebx */
  push32((uint32_t)(EBX));
  /* 11d48427 push esi */
  push32((uint32_t)(ESI));
  /* 11d48428 push edi */
  push32((uint32_t)(EDI));
  /* 11d48429 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11d4842c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11d4842f:;
  /* 11d4842f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48433 jne 0x11d48453 */
  if (!C.zf) goto L_11d48453;
  /* 11d48435 push 0x11d6d120 */
  push32((uint32_t)(0x11d6d120u));
  /* 11d4843a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4843c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 11d4843e push 0x11d6d130 */
  push32((uint32_t)(0x11d6d130u));
  /* 11d48443 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d48445 call 0x11d44440 */
  push32(0x11d4844au); f_11d44440();
  /* 11d4844a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4844d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48450 jne 0x11d48453 */
  if (!C.zf) goto L_11d48453;
  /* 11d48452 int3  */
  x86_unimpl("int3 @ 0x11d48452");
L_11d48453:;
  /* 11d48453 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d48455 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d48457 jne 0x11d4842f */
  if (!C.zf) goto L_11d4842f;
L_11d48459:;
  /* 11d48459 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4845d jne 0x11d4847d */
  if (!C.zf) goto L_11d4847d;
  /* 11d4845f push 0x11d6d104 */
  push32((uint32_t)(0x11d6d104u));
  /* 11d48464 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d48466 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11d48468 push 0x11d6d130 */
  push32((uint32_t)(0x11d6d130u));
  /* 11d4846d push 2 */
  push32((uint32_t)(0x2u));
  /* 11d4846f call 0x11d44440 */
  push32(0x11d48474u); f_11d44440();
  /* 11d48474 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d48477 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4847a jne 0x11d4847d */
  if (!C.zf) goto L_11d4847d;
  /* 11d4847c int3  */
  x86_unimpl("int3 @ 0x11d4847c");
L_11d4847d:;
  /* 11d4847d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4847f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d48481 jne 0x11d48459 */
  if (!C.zf) goto L_11d48459;
  /* 11d48483 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d48486 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 11d4848d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d48490 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d48493 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11d48496 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d48499 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4849c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11d4849e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d484a1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d484a4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11d484a7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d484aa push ecx */
  push32((uint32_t)(ECX));
  /* 11d484ab mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d484ae push edx */
  push32((uint32_t)(EDX));
  /* 11d484af mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d484b2 push eax */
  push32((uint32_t)(EAX));
  /* 11d484b3 call 0x11d4c310 */
  push32(0x11d484b8u); f_11d4c310();
  /* 11d484b8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d484bb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11d484be mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d484c1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d484c4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d484c7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d484ca mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11d484cd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d484d0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d484d4 jl 0x11d484f8 */
  if ((C.sf!=C.of)) goto L_11d484f8;
  /* 11d484d6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d484d9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d484db mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11d484de xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d484e0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d484e6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11d484e9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d484ec mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d484ee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d484f1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d484f4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11d484f6 jmp 0x11d48509 */
  goto L_11d48509;
L_11d484f8:;
  /* 11d484f8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d484fb push edx */
  push32((uint32_t)(EDX));
  /* 11d484fc push 0 */
  push32((uint32_t)(0x0u));
  /* 11d484fe call 0x11d4c090 */
  push32(0x11d48503u); f_11d4c090();
  /* 11d48503 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d48506 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_11d48509:;
  /* 11d48509 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d4850c pop edi */
  EDI = (pop32());
  /* 11d4850d pop esi */
  ESI = (pop32());
  /* 11d4850e pop ebx */
  EBX = (pop32());
  /* 11d4850f mov esp, ebp */
  ESP = (EBP);
  /* 11d48511 pop ebp */
  EBP = (pop32());
  /* 11d48512 ret  */
  ESPCHK(0x11d48420u, _esp0);
  ESP += 4; return;
}

/* FUN_10008520 @ 0x11d48520 (47 bytes, 17 insns) */
void f_11d48520(void) {
  FTRACE(0x11d48520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d48520 push ecx */
  push32((uint32_t)(ECX));
  /* 11d48521 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48526 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11d4852a jb 0x11d48540 */
  if (C.cf) goto L_11d48540;
L_11d4852c:;
  /* 11d4852c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d48532 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d48537 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11d48539 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4853e jae 0x11d4852c */
  if (!C.cf) goto L_11d4852c;
L_11d48540:;
  /* 11d48540 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d48542 mov eax, esp */
  EAX = (ESP);
  /* 11d48544 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11d48546 mov esp, ecx */
  ESP = (ECX);
  /* 11d48548 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d4854a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d4854d push eax */
  push32((uint32_t)(EAX));
  /* 11d4854e ret  */
  ESPCHK(0x11d48520u, _esp0);
  ESP += 4; return;
}

/* FUN_10008550 @ 0x11d48550 (507 bytes, 151 insns) [1 switch table(s)] */
void f_11d48550(void) {
  FTRACE(0x11d48550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d48550 push ebp */
  push32((uint32_t)(EBP));
  /* 11d48551 mov ebp, esp */
  EBP = (ESP);
  /* 11d48553 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d48556 push esi */
  push32((uint32_t)(ESI));
  /* 11d48557 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4855b je 0x11d48563 */
  if (C.zf) goto L_11d48563;
  /* 11d4855d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48561 jne 0x11d48568 */
  if (!C.zf) goto L_11d48568;
L_11d48563:;
  /* 11d48563 jmp 0x11d48738 */
  goto L_11d48738;
L_11d48568:;
  /* 11d48568 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4856c je 0x11d48584 */
  if (C.zf) goto L_11d48584;
  /* 11d4856e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48572 je 0x11d48584 */
  if (C.zf) goto L_11d48584;
  /* 11d48574 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48578 je 0x11d48584 */
  if (C.zf) goto L_11d48584;
  /* 11d4857a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4857e jne 0x11d48661 */
  if (!C.zf) goto L_11d48661;
L_11d48584:;
  /* 11d48584 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d48586 call 0x11d48d80 */
  push32(0x11d4858bu); f_11d48d80();
  /* 11d4858b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4858e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48592 je 0x11d4859a */
  if (C.zf) goto L_11d4859a;
  /* 11d48594 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48598 jne 0x11d485df */
  if (!C.zf) goto L_11d485df;
L_11d4859a:;
  /* 11d4859a cmp dword ptr [0x11d717c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d717c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d485a1 jne 0x11d485df */
  if (!C.zf) goto L_11d485df;
  /* 11d485a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d485a5 push 0x11d48780 */
  push32((uint32_t)(0x11d48780u));
  /* 11d485aa call dword ptr [0x11d74368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74368))), 0x11d485b0u);
  /* 11d485b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d485b3 jne 0x11d485c1 */
  if (!C.zf) goto L_11d485c1;
  /* 11d485b5 mov dword ptr [0x11d717c8], 1 */
  w32((uint32_t)(0x11d717c8), (0x1u));
  /* 11d485bf jmp 0x11d485df */
  goto L_11d485df;
L_11d485c1:;
  /* 11d485c1 call dword ptr [0x11d743f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743f0))), 0x11d485c7u);
  /* 11d485c7 mov esi, eax */
  ESI = (EAX);
  /* 11d485c9 call 0x11d4d260 */
  push32(0x11d485ceu); f_11d4d260();
  /* 11d485ce mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11d485d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d485d2 call 0x11d48e20 */
  push32(0x11d485d7u); f_11d48e20();
  /* 11d485d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d485da jmp 0x11d48738 */
  goto L_11d48738;
L_11d485df:;
  /* 11d485df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d485e2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11d485e5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d485e8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d485eb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11d485ee cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d485f2 ja 0x11d48652 */
  if ((!C.cf&&!C.zf)) goto L_11d48652;
  /* 11d485f4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d485f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d485f9 mov dl, byte ptr [eax + 0x11d4875f] */
  DL = (r8((uint32_t)(EAX + 0x11d4875f)));
  /* 11d485ff jmp dword ptr [edx*4 + 0x11d4874b] */
  switch (EDX) {
    case 0: goto L_11d48606;
    case 1: goto L_11d48640;
    case 2: goto L_11d4861a;
    case 3: goto L_11d4862d;
    case 4: goto L_11d48652;
    default: x86_unimpl("switch@0x11d485ff out of table"); return;
  }
L_11d48606:;
  /* 11d48606 mov ecx, dword ptr [0x11d717b8] */
  ECX = (r32((uint32_t)(0x11d717b8)));
  /* 11d4860c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d4860f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d48612 mov dword ptr [0x11d717b8], edx */
  w32((uint32_t)(0x11d717b8), (EDX));
  /* 11d48618 jmp 0x11d48652 */
  goto L_11d48652;
L_11d4861a:;
  /* 11d4861a mov eax, dword ptr [0x11d717bc] */
  EAX = (r32((uint32_t)(0x11d717bc)));
  /* 11d4861f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d48622 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d48625 mov dword ptr [0x11d717bc], ecx */
  w32((uint32_t)(0x11d717bc), (ECX));
  /* 11d4862b jmp 0x11d48652 */
  goto L_11d48652;
L_11d4862d:;
  /* 11d4862d mov edx, dword ptr [0x11d717c0] */
  EDX = (r32((uint32_t)(0x11d717c0)));
  /* 11d48633 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11d48636 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d48639 mov dword ptr [0x11d717c0], eax */
  w32((uint32_t)(0x11d717c0), (EAX));
  /* 11d4863e jmp 0x11d48652 */
  goto L_11d48652;
L_11d48640:;
  /* 11d48640 mov ecx, dword ptr [0x11d717c4] */
  ECX = (r32((uint32_t)(0x11d717c4)));
  /* 11d48646 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d48649 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4864c mov dword ptr [0x11d717c4], edx */
  w32((uint32_t)(0x11d717c4), (EDX));
L_11d48652:;
  /* 11d48652 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d48654 call 0x11d48e20 */
  push32(0x11d48659u); f_11d48e20();
  /* 11d48659 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4865c jmp 0x11d48733 */
  goto L_11d48733;
L_11d48661:;
  /* 11d48661 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48665 je 0x11d48678 */
  if (C.zf) goto L_11d48678;
  /* 11d48667 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4866b je 0x11d48678 */
  if (C.zf) goto L_11d48678;
  /* 11d4866d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48671 je 0x11d48678 */
  if (C.zf) goto L_11d48678;
  /* 11d48673 jmp 0x11d48738 */
  goto L_11d48738;
L_11d48678:;
  /* 11d48678 call 0x11d44dc0 */
  push32(0x11d4867du); f_11d44dc0();
  /* 11d4867d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d48680 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d48683 cmp dword ptr [eax + 0x50], 0x11d6fc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x11d6fc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4868a jne 0x11d486d5 */
  if (!C.zf) goto L_11d486d5;
  /* 11d4868c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 11d48691 push 0x11d6d13c */
  push32((uint32_t)(0x11d6d13cu));
  /* 11d48696 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d48698 mov ecx, dword ptr [0x11d6fc80] */
  ECX = (r32((uint32_t)(0x11d6fc80)));
  /* 11d4869e push ecx */
  push32((uint32_t)(ECX));
  /* 11d4869f call 0x11d45380 */
  push32(0x11d486a4u); f_11d45380();
  /* 11d486a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d486a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d486aa mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 11d486ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d486b0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d486b4 je 0x11d486d3 */
  if (C.zf) goto L_11d486d3;
  /* 11d486b6 mov ecx, dword ptr [0x11d6fc80] */
  ECX = (r32((uint32_t)(0x11d6fc80)));
  /* 11d486bc push ecx */
  push32((uint32_t)(ECX));
  /* 11d486bd push 0x11d6fc00 */
  push32((uint32_t)(0x11d6fc00u));
  /* 11d486c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d486c5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11d486c8 push eax */
  push32((uint32_t)(EAX));
  /* 11d486c9 call 0x11d4bc60 */
  push32(0x11d486ceu); f_11d4bc60();
  /* 11d486ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d486d1 jmp 0x11d486d5 */
  goto L_11d486d5;
L_11d486d3:;
  /* 11d486d3 jmp 0x11d48738 */
  goto L_11d48738;
L_11d486d5:;
  /* 11d486d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d486d8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11d486db push edx */
  push32((uint32_t)(EDX));
  /* 11d486dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d486df push eax */
  push32((uint32_t)(EAX));
  /* 11d486e0 call 0x11d48a60 */
  push32(0x11d486e5u); f_11d48a60();
  /* 11d486e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d486e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d486eb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d486ef jne 0x11d486f3 */
  if (!C.zf) goto L_11d486f3;
  /* 11d486f1 jmp 0x11d48738 */
  goto L_11d48738;
L_11d486f3:;
  /* 11d486f3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d486f6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11d486f9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11d486fc:;
  /* 11d486fc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d486ff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d48702 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48705 jne 0x11d48733 */
  if (!C.zf) goto L_11d48733;
  /* 11d48707 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4870a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4870d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11d48710 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d48713 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d48716 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d48719 mov edx, dword ptr [0x11d6fc84] */
  EDX = (r32((uint32_t)(0x11d6fc84)));
  /* 11d4871f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d48722 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d48725 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11d48728 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4872a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4872d jb 0x11d48731 */
  if (C.cf) goto L_11d48731;
  /* 11d4872f jmp 0x11d48733 */
  goto L_11d48733;
L_11d48731:;
  /* 11d48731 jmp 0x11d486fc */
  goto L_11d486fc;
L_11d48733:;
  /* 11d48733 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d48736 jmp 0x11d48746 */
  goto L_11d48746;
L_11d48738:;
  /* 11d48738 call 0x11d4d250 */
  push32(0x11d4873du); f_11d4d250();
  /* 11d4873d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 11d48743 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11d48746:;
  /* 11d48746 pop esi */
  ESI = (pop32());
  /* 11d48747 mov esp, ebp */
  ESP = (EBP);
  /* 11d48749 pop ebp */
  EBP = (pop32());
  /* 11d4874a ret  */
  ESPCHK(0x11d48550u, _esp0);
  ESP += 4; return;
}

/* FUN_10008780 @ 0x11d48780 (146 bytes, 45 insns) */
void f_11d48780(void) {
  FTRACE(0x11d48780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d48780 push ebp */
  push32((uint32_t)(EBP));
  /* 11d48781 mov ebp, esp */
  EBP = (ESP);
  /* 11d48783 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d48786 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d48788 call 0x11d48d80 */
  push32(0x11d4878du); f_11d48d80();
  /* 11d4878d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d48790 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48794 jne 0x11d487ae */
  if (!C.zf) goto L_11d487ae;
  /* 11d48796 mov dword ptr [ebp - 8], 0x11d717b8 */
  w32((uint32_t)(EBP + -0x8), (0x11d717b8u));
  /* 11d4879d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d487a0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d487a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d487a5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11d487ac jmp 0x11d487c4 */
  goto L_11d487c4;
L_11d487ae:;
  /* 11d487ae mov dword ptr [ebp - 8], 0x11d717bc */
  w32((uint32_t)(EBP + -0x8), (0x11d717bcu));
  /* 11d487b5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d487b8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d487ba mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d487bd mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_11d487c4:;
  /* 11d487c4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d487c8 jne 0x11d487d8 */
  if (!C.zf) goto L_11d487d8;
  /* 11d487ca push 1 */
  push32((uint32_t)(0x1u));
  /* 11d487cc call 0x11d48e20 */
  push32(0x11d487d1u); f_11d48e20();
  /* 11d487d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d487d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d487d6 jmp 0x11d4880c */
  goto L_11d4880c;
L_11d487d8:;
  /* 11d487d8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d487dc je 0x11d487fd */
  if (C.zf) goto L_11d487fd;
  /* 11d487de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d487e1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11d487e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d487e9 call 0x11d48e20 */
  push32(0x11d487eeu); f_11d48e20();
  /* 11d487ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d487f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d487f4 push edx */
  push32((uint32_t)(EDX));
  /* 11d487f5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x11d487f8u);
  /* 11d487f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d487fb jmp 0x11d48807 */
  goto L_11d48807;
L_11d487fd:;
  /* 11d487fd push 1 */
  push32((uint32_t)(0x1u));
  /* 11d487ff call 0x11d48e20 */
  push32(0x11d48804u); f_11d48e20();
  /* 11d48804 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d48807:;
  /* 11d48807 mov eax, 1 */
  EAX = (0x1u);
L_11d4880c:;
  /* 11d4880c mov esp, ebp */
  ESP = (EBP);
  /* 11d4880e pop ebp */
  EBP = (pop32());
  /* 11d4880f ret 4 */
  ESPCHK(0x11d48780u, _esp0);
  ESP += 8; return;
}

/* FUN_10008820 @ 0x11d48820 (522 bytes, 162 insns) [1 switch table(s)] */
void f_11d48820(void) {
  FTRACE(0x11d48820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d48820 push ebp */
  push32((uint32_t)(EBP));
  /* 11d48821 mov ebp, esp */
  EBP = (ESP);
  /* 11d48823 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d48826 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11d4882d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d48830 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11d48833 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d48836 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d48839 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11d4883c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48840 ja 0x11d488ee */
  if ((!C.cf&&!C.zf)) goto L_11d488ee;
  /* 11d48846 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d48849 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d4884b mov dl, byte ptr [eax + 0x11d48a42] */
  DL = (r8((uint32_t)(EAX + 0x11d48a42)));
  /* 11d48851 jmp dword ptr [edx*4 + 0x11d48a2a] */
  switch (EDX) {
    case 0: goto L_11d48858;
    case 1: goto L_11d488c3;
    case 2: goto L_11d488a9;
    case 3: goto L_11d48875;
    case 4: goto L_11d4888f;
    case 5: goto L_11d488ee;
    default: x86_unimpl("switch@0x11d48851 out of table"); return;
  }
L_11d48858:;
  /* 11d48858 mov dword ptr [ebp - 0x18], 0x11d717b8 */
  w32((uint32_t)(EBP + -0x18), (0x11d717b8u));
  /* 11d4885f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d48862 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d48864 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11d48867 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d4886a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4886d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d48870 jmp 0x11d488f6 */
  goto L_11d488f6;
L_11d48875:;
  /* 11d48875 mov dword ptr [ebp - 0x18], 0x11d717bc */
  w32((uint32_t)(EBP + -0x18), (0x11d717bcu));
  /* 11d4887c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d4887f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d48881 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11d48884 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d48887 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4888a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d4888d jmp 0x11d488f6 */
  goto L_11d488f6;
L_11d4888f:;
  /* 11d4888f mov dword ptr [ebp - 0x18], 0x11d717c0 */
  w32((uint32_t)(EBP + -0x18), (0x11d717c0u));
  /* 11d48896 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d48899 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d4889b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11d4889e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d488a1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d488a4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d488a7 jmp 0x11d488f6 */
  goto L_11d488f6;
L_11d488a9:;
  /* 11d488a9 mov dword ptr [ebp - 0x18], 0x11d717c4 */
  w32((uint32_t)(EBP + -0x18), (0x11d717c4u));
  /* 11d488b0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d488b3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d488b5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11d488b8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d488bb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d488be mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d488c1 jmp 0x11d488f6 */
  goto L_11d488f6;
L_11d488c3:;
  /* 11d488c3 call 0x11d44dc0 */
  push32(0x11d488c8u); f_11d44dc0();
  /* 11d488c8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d488cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d488ce mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11d488d1 push edx */
  push32((uint32_t)(EDX));
  /* 11d488d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d488d5 push eax */
  push32((uint32_t)(EAX));
  /* 11d488d6 call 0x11d48a60 */
  push32(0x11d488dbu); f_11d48a60();
  /* 11d488db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d488de add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d488e1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11d488e4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d488e7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d488e9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11d488ec jmp 0x11d488f6 */
  goto L_11d488f6;
L_11d488ee:;
  /* 11d488ee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d488f1 jmp 0x11d48a26 */
  goto L_11d48a26;
L_11d488f6:;
  /* 11d488f6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d488fa je 0x11d48906 */
  if (C.zf) goto L_11d48906;
  /* 11d488fc push 1 */
  push32((uint32_t)(0x1u));
  /* 11d488fe call 0x11d48d80 */
  push32(0x11d48903u); f_11d48d80();
  /* 11d48903 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d48906:;
  /* 11d48906 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4890a jne 0x11d48923 */
  if (!C.zf) goto L_11d48923;
  /* 11d4890c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48910 je 0x11d4891c */
  if (C.zf) goto L_11d4891c;
  /* 11d48912 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d48914 call 0x11d48e20 */
  push32(0x11d48919u); f_11d48e20();
  /* 11d48919 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d4891c:;
  /* 11d4891c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4891e jmp 0x11d48a26 */
  goto L_11d48a26;
L_11d48923:;
  /* 11d48923 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48927 jne 0x11d48940 */
  if (!C.zf) goto L_11d48940;
  /* 11d48929 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4892d je 0x11d48939 */
  if (C.zf) goto L_11d48939;
  /* 11d4892f push 1 */
  push32((uint32_t)(0x1u));
  /* 11d48931 call 0x11d48e20 */
  push32(0x11d48936u); f_11d48e20();
  /* 11d48936 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d48939:;
  /* 11d48939 push 3 */
  push32((uint32_t)(0x3u));
  /* 11d4893b call 0x11d44b40 */
  push32(0x11d48940u); f_11d44b40();
L_11d48940:;
  /* 11d48940 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48944 je 0x11d48952 */
  if (C.zf) goto L_11d48952;
  /* 11d48946 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4894a je 0x11d48952 */
  if (C.zf) goto L_11d48952;
  /* 11d4894c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48950 jne 0x11d4897e */
  if (!C.zf) goto L_11d4897e;
L_11d48952:;
  /* 11d48952 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d48955 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11d48958 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11d4895b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4895e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 11d48965 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48969 jne 0x11d4897e */
  if (!C.zf) goto L_11d4897e;
  /* 11d4896b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4896e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11d48971 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d48974 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d48977 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_11d4897e:;
  /* 11d4897e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48982 jne 0x11d489c0 */
  if (!C.zf) goto L_11d489c0;
  /* 11d48984 mov eax, dword ptr [0x11d6fc78] */
  EAX = (r32((uint32_t)(0x11d6fc78)));
  /* 11d48989 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11d4898c jmp 0x11d48997 */
  goto L_11d48997;
L_11d4898e:;
  /* 11d4898e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d48991 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d48994 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11d48997:;
  /* 11d48997 mov edx, dword ptr [0x11d6fc78] */
  EDX = (r32((uint32_t)(0x11d6fc78)));
  /* 11d4899d add edx, dword ptr [0x11d6fc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11d6fc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d489a3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d489a6 jge 0x11d489be */
  if ((C.sf==C.of)) goto L_11d489be;
  /* 11d489a8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d489ab imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d489ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d489b1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11d489b4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 11d489bc jmp 0x11d4898e */
  goto L_11d4898e;
L_11d489be:;
  /* 11d489be jmp 0x11d489c9 */
  goto L_11d489c9;
L_11d489c0:;
  /* 11d489c0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d489c3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11d489c9:;
  /* 11d489c9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d489cd je 0x11d489d9 */
  if (C.zf) goto L_11d489d9;
  /* 11d489cf push 1 */
  push32((uint32_t)(0x1u));
  /* 11d489d1 call 0x11d48e20 */
  push32(0x11d489d6u); f_11d48e20();
  /* 11d489d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d489d9:;
  /* 11d489d9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d489dd jne 0x11d489f0 */
  if (!C.zf) goto L_11d489f0;
  /* 11d489df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d489e2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 11d489e5 push edx */
  push32((uint32_t)(EDX));
  /* 11d489e6 push 8 */
  push32((uint32_t)(0x8u));
  /* 11d489e8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x11d489ebu);
  /* 11d489eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d489ee jmp 0x11d489fa */
  goto L_11d489fa;
L_11d489f0:;
  /* 11d489f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d489f3 push eax */
  push32((uint32_t)(EAX));
  /* 11d489f4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x11d489f7u);
  /* 11d489f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d489fa:;
  /* 11d489fa cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d489fe je 0x11d48a0c */
  if (C.zf) goto L_11d48a0c;
  /* 11d48a00 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48a04 je 0x11d48a0c */
  if (C.zf) goto L_11d48a0c;
  /* 11d48a06 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48a0a jne 0x11d48a24 */
  if (!C.zf) goto L_11d48a24;
L_11d48a0c:;
  /* 11d48a0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d48a0f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d48a12 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 11d48a15 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48a19 jne 0x11d48a24 */
  if (!C.zf) goto L_11d48a24;
  /* 11d48a1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d48a1e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d48a21 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_11d48a24:;
  /* 11d48a24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d48a26:;
  /* 11d48a26 mov esp, ebp */
  ESP = (EBP);
  /* 11d48a28 pop ebp */
  EBP = (pop32());
  /* 11d48a29 ret  */
  ESPCHK(0x11d48820u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a60 @ 0x11d48a60 (91 bytes, 35 insns) */
void f_11d48a60(void) {
  FTRACE(0x11d48a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d48a60 push ebp */
  push32((uint32_t)(EBP));
  /* 11d48a61 mov ebp, esp */
  EBP = (ESP);
  /* 11d48a63 push ecx */
  push32((uint32_t)(ECX));
  /* 11d48a64 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d48a67 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d48a6a:;
  /* 11d48a6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d48a6d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d48a70 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48a73 je 0x11d48a93 */
  if (C.zf) goto L_11d48a93;
  /* 11d48a75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d48a78 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d48a7b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d48a7e mov ecx, dword ptr [0x11d6fc84] */
  ECX = (r32((uint32_t)(0x11d6fc84)));
  /* 11d48a84 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d48a87 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d48a8a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d48a8c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48a8f jae 0x11d48a93 */
  if (!C.cf) goto L_11d48a93;
  /* 11d48a91 jmp 0x11d48a6a */
  goto L_11d48a6a;
L_11d48a93:;
  /* 11d48a93 mov eax, dword ptr [0x11d6fc84] */
  EAX = (r32((uint32_t)(0x11d6fc84)));
  /* 11d48a98 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d48a9b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d48a9e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d48aa0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48aa3 jae 0x11d48ab5 */
  if (!C.cf) goto L_11d48ab5;
  /* 11d48aa5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d48aa8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11d48aab cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48aae jne 0x11d48ab5 */
  if (!C.zf) goto L_11d48ab5;
  /* 11d48ab0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d48ab3 jmp 0x11d48ab7 */
  goto L_11d48ab7;
L_11d48ab5:;
  /* 11d48ab5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d48ab7:;
  /* 11d48ab7 mov esp, ebp */
  ESP = (EBP);
  /* 11d48ab9 pop ebp */
  EBP = (pop32());
  /* 11d48aba ret  */
  ESPCHK(0x11d48a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ac0 @ 0x11d48ac0 (13 bytes, 6 insns) */
void f_11d48ac0(void) {
  FTRACE(0x11d48ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d48ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d48ac1 mov ebp, esp */
  EBP = (ESP);
  /* 11d48ac3 call 0x11d44dc0 */
  push32(0x11d48ac8u); f_11d44dc0();
  /* 11d48ac8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d48acb pop ebp */
  EBP = (pop32());
  /* 11d48acc ret  */
  ESPCHK(0x11d48ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ad0 @ 0x11d48ad0 (13 bytes, 6 insns) */
void f_11d48ad0(void) {
  FTRACE(0x11d48ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d48ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d48ad1 mov ebp, esp */
  EBP = (ESP);
  /* 11d48ad3 call 0x11d44dc0 */
  push32(0x11d48ad8u); f_11d44dc0();
  /* 11d48ad8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d48adb pop ebp */
  EBP = (pop32());
  /* 11d48adc ret  */
  ESPCHK(0x11d48ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ae0 @ 0x11d48ae0 (187 bytes, 54 insns) */
void f_11d48ae0(void) {
  FTRACE(0x11d48ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d48ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d48ae1 mov ebp, esp */
  EBP = (ESP);
  /* 11d48ae3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d48ae6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d48aed cmp dword ptr [0x11d717cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d717cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48af4 jne 0x11d48b53 */
  if (!C.zf) goto L_11d48b53;
  /* 11d48af6 push 0x11d6c568 */
  push32((uint32_t)(0x11d6c568u));
  /* 11d48afb call dword ptr [0x11d743c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743c4))), 0x11d48b01u);
  /* 11d48b01 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d48b04 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48b08 je 0x11d48b27 */
  if (C.zf) goto L_11d48b27;
  /* 11d48b0a push 0x11d6d16c */
  push32((uint32_t)(0x11d6d16cu));
  /* 11d48b0f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d48b12 push eax */
  push32((uint32_t)(EAX));
  /* 11d48b13 call dword ptr [0x11d743c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743c0))), 0x11d48b19u);
  /* 11d48b19 mov dword ptr [0x11d717cc], eax */
  w32((uint32_t)(0x11d717cc), (EAX));
  /* 11d48b1e cmp dword ptr [0x11d717cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d717cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48b25 jne 0x11d48b2b */
  if (!C.zf) goto L_11d48b2b;
L_11d48b27:;
  /* 11d48b27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d48b29 jmp 0x11d48b97 */
  goto L_11d48b97;
L_11d48b2b:;
  /* 11d48b2b push 0x11d6d15c */
  push32((uint32_t)(0x11d6d15cu));
  /* 11d48b30 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d48b33 push ecx */
  push32((uint32_t)(ECX));
  /* 11d48b34 call dword ptr [0x11d743c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743c0))), 0x11d48b3au);
  /* 11d48b3a mov dword ptr [0x11d717d0], eax */
  w32((uint32_t)(0x11d717d0), (EAX));
  /* 11d48b3f push 0x11d6d148 */
  push32((uint32_t)(0x11d6d148u));
  /* 11d48b44 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d48b47 push edx */
  push32((uint32_t)(EDX));
  /* 11d48b48 call dword ptr [0x11d743c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743c0))), 0x11d48b4eu);
  /* 11d48b4e mov dword ptr [0x11d717d4], eax */
  w32((uint32_t)(0x11d717d4), (EAX));
L_11d48b53:;
  /* 11d48b53 cmp dword ptr [0x11d717d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d717d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48b5a je 0x11d48b65 */
  if (C.zf) goto L_11d48b65;
  /* 11d48b5c call dword ptr [0x11d717d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d717d0))), 0x11d48b62u);
  /* 11d48b62 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d48b65:;
  /* 11d48b65 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48b69 je 0x11d48b81 */
  if (C.zf) goto L_11d48b81;
  /* 11d48b6b cmp dword ptr [0x11d717d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d717d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48b72 je 0x11d48b81 */
  if (C.zf) goto L_11d48b81;
  /* 11d48b74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d48b77 push eax */
  push32((uint32_t)(EAX));
  /* 11d48b78 call dword ptr [0x11d717d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d717d4))), 0x11d48b7eu);
  /* 11d48b7e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d48b81:;
  /* 11d48b81 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d48b84 push ecx */
  push32((uint32_t)(ECX));
  /* 11d48b85 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d48b88 push edx */
  push32((uint32_t)(EDX));
  /* 11d48b89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d48b8c push eax */
  push32((uint32_t)(EAX));
  /* 11d48b8d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d48b90 push ecx */
  push32((uint32_t)(ECX));
  /* 11d48b91 call dword ptr [0x11d717cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d717cc))), 0x11d48b97u);
L_11d48b97:;
  /* 11d48b97 mov esp, ebp */
  ESP = (EBP);
  /* 11d48b99 pop ebp */
  EBP = (pop32());
  /* 11d48b9a ret  */
  ESPCHK(0x11d48ae0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x11d48ba0 (254 bytes, 109 insns) */
void f_11d48ba0(void) {
  FTRACE(0x11d48ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d48ba0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11d48ba4 push edi */
  push32((uint32_t)(EDI));
  /* 11d48ba5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d48ba7 je 0x11d48c23 */
  if (C.zf) goto L_11d48c23;
  /* 11d48ba9 push esi */
  push32((uint32_t)(ESI));
  /* 11d48baa push ebx */
  push32((uint32_t)(EBX));
  /* 11d48bab mov ebx, ecx */
  EBX = (ECX);
  /* 11d48bad mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11d48bb1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11d48bb7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11d48bbb jne 0x11d48bc4 */
  if (!C.zf) goto L_11d48bc4;
  /* 11d48bbd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d48bc0 jne 0x11d48c31 */
  if (!C.zf) goto L_11d48c31;
  /* 11d48bc2 jmp 0x11d48be5 */
  goto L_11d48be5;
L_11d48bc4:;
  /* 11d48bc4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d48bc6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d48bc7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d48bc9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d48bca dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11d48bcb je 0x11d48bf2 */
  if (C.zf) goto L_11d48bf2;
  /* 11d48bcd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d48bcf je 0x11d48bfa */
  if (C.zf) goto L_11d48bfa;
  /* 11d48bd1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11d48bd7 jne 0x11d48bc4 */
  if (!C.zf) goto L_11d48bc4;
  /* 11d48bd9 mov ebx, ecx */
  EBX = (ECX);
  /* 11d48bdb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d48bde jne 0x11d48c31 */
  if (!C.zf) goto L_11d48c31;
L_11d48be0:;
  /* 11d48be0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11d48be3 je 0x11d48bf2 */
  if (C.zf) goto L_11d48bf2;
L_11d48be5:;
  /* 11d48be5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d48be7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d48be8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d48bea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d48beb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d48bed je 0x11d48c1e */
  if (C.zf) goto L_11d48c1e;
  /* 11d48bef dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11d48bf0 jne 0x11d48be5 */
  if (!C.zf) goto L_11d48be5;
L_11d48bf2:;
  /* 11d48bf2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11d48bf6 pop ebx */
  EBX = (pop32());
  /* 11d48bf7 pop esi */
  ESI = (pop32());
  /* 11d48bf8 pop edi */
  EDI = (pop32());
  /* 11d48bf9 ret  */
  ESPCHK(0x11d48ba0u, _esp0);
  ESP += 4; return;
L_11d48bfa:;
  /* 11d48bfa test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11d48c00 je 0x11d48c14 */
  if (C.zf) goto L_11d48c14;
L_11d48c02:;
  /* 11d48c02 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d48c04 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d48c05 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11d48c06 je 0x11d48c96 */
  if (C.zf) goto L_11d48c96;
  /* 11d48c0c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11d48c12 jne 0x11d48c02 */
  if (!C.zf) goto L_11d48c02;
L_11d48c14:;
  /* 11d48c14 mov ebx, ecx */
  EBX = (ECX);
  /* 11d48c16 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d48c19 jne 0x11d48c87 */
  if (!C.zf) goto L_11d48c87;
L_11d48c1b:;
  /* 11d48c1b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d48c1d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11d48c1e:;
  /* 11d48c1e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11d48c1f jne 0x11d48c1b */
  if (!C.zf) goto L_11d48c1b;
  /* 11d48c21 pop ebx */
  EBX = (pop32());
  /* 11d48c22 pop esi */
  ESI = (pop32());
L_11d48c23:;
  /* 11d48c23 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d48c27 pop edi */
  EDI = (pop32());
  /* 11d48c28 ret  */
  ESPCHK(0x11d48ba0u, _esp0);
  ESP += 4; return;
L_11d48c29:;
  /* 11d48c29 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11d48c2b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d48c2e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11d48c2f je 0x11d48be0 */
  if (C.zf) goto L_11d48be0;
L_11d48c31:;
  /* 11d48c31 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11d48c36 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11d48c38 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d48c3a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d48c3d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d48c3f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11d48c41 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d48c44 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11d48c49 je 0x11d48c29 */
  if (C.zf) goto L_11d48c29;
  /* 11d48c4b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11d48c4d je 0x11d48c7b */
  if (C.zf) goto L_11d48c7b;
  /* 11d48c4f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11d48c51 je 0x11d48c71 */
  if (C.zf) goto L_11d48c71;
  /* 11d48c53 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11d48c59 je 0x11d48c67 */
  if (C.zf) goto L_11d48c67;
  /* 11d48c5b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11d48c61 jne 0x11d48c29 */
  if (!C.zf) goto L_11d48c29;
  /* 11d48c63 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11d48c65 jmp 0x11d48c7f */
  goto L_11d48c7f;
L_11d48c67:;
  /* 11d48c67 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d48c6d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11d48c6f jmp 0x11d48c7f */
  goto L_11d48c7f;
L_11d48c71:;
  /* 11d48c71 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d48c77 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11d48c79 jmp 0x11d48c7f */
  goto L_11d48c7f;
L_11d48c7b:;
  /* 11d48c7b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d48c7d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11d48c7f:;
  /* 11d48c7f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d48c82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d48c84 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11d48c85 je 0x11d48c91 */
  if (C.zf) goto L_11d48c91;
L_11d48c87:;
  /* 11d48c87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d48c89:;
  /* 11d48c89 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11d48c8b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d48c8e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11d48c8f jne 0x11d48c89 */
  if (!C.zf) goto L_11d48c89;
L_11d48c91:;
  /* 11d48c91 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11d48c94 jne 0x11d48c1b */
  if (!C.zf) goto L_11d48c1b;
L_11d48c96:;
  /* 11d48c96 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11d48c9a pop ebx */
  EBX = (pop32());
  /* 11d48c9b pop esi */
  ESI = (pop32());
  /* 11d48c9c pop edi */
  EDI = (pop32());
  /* 11d48c9d ret  */
  ESPCHK(0x11d48ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ca0 @ 0x11d48ca0 (55 bytes, 16 insns) */
void f_11d48ca0(void) {
  FTRACE(0x11d48ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d48ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d48ca1 mov ebp, esp */
  EBP = (ESP);
  /* 11d48ca3 mov eax, dword ptr [0x11d6fb84] */
  EAX = (r32((uint32_t)(0x11d6fb84)));
  /* 11d48ca8 push eax */
  push32((uint32_t)(EAX));
  /* 11d48ca9 call dword ptr [0x11d74364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74364))), 0x11d48cafu);
  /* 11d48caf mov ecx, dword ptr [0x11d6fb74] */
  ECX = (r32((uint32_t)(0x11d6fb74)));
  /* 11d48cb5 push ecx */
  push32((uint32_t)(ECX));
  /* 11d48cb6 call dword ptr [0x11d74364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74364))), 0x11d48cbcu);
  /* 11d48cbc mov edx, dword ptr [0x11d6fb64] */
  EDX = (r32((uint32_t)(0x11d6fb64)));
  /* 11d48cc2 push edx */
  push32((uint32_t)(EDX));
  /* 11d48cc3 call dword ptr [0x11d74364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74364))), 0x11d48cc9u);
  /* 11d48cc9 mov eax, dword ptr [0x11d6fb44] */
  EAX = (r32((uint32_t)(0x11d6fb44)));
  /* 11d48cce push eax */
  push32((uint32_t)(EAX));
  /* 11d48ccf call dword ptr [0x11d74364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74364))), 0x11d48cd5u);
  /* 11d48cd5 pop ebp */
  EBP = (pop32());
  /* 11d48cd6 ret  */
  ESPCHK(0x11d48ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ce0 @ 0x11d48ce0 (159 bytes, 47 insns) */
void f_11d48ce0(void) {
  FTRACE(0x11d48ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d48ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d48ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11d48ce3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d48ce4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d48ceb jmp 0x11d48cf6 */
  goto L_11d48cf6;
L_11d48ced:;
  /* 11d48ced mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d48cf0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d48cf3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d48cf6:;
  /* 11d48cf6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48cfa jge 0x11d48d49 */
  if ((C.sf==C.of)) goto L_11d48d49;
  /* 11d48cfc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d48cff cmp dword ptr [ecx*4 + 0x11d6fb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11d6fb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48d07 je 0x11d48d47 */
  if (C.zf) goto L_11d48d47;
  /* 11d48d09 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48d0d je 0x11d48d47 */
  if (C.zf) goto L_11d48d47;
  /* 11d48d0f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48d13 je 0x11d48d47 */
  if (C.zf) goto L_11d48d47;
  /* 11d48d15 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48d19 je 0x11d48d47 */
  if (C.zf) goto L_11d48d47;
  /* 11d48d1b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48d1f je 0x11d48d47 */
  if (C.zf) goto L_11d48d47;
  /* 11d48d21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d48d24 mov eax, dword ptr [edx*4 + 0x11d6fb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11d6fb40)));
  /* 11d48d2b push eax */
  push32((uint32_t)(EAX));
  /* 11d48d2c call dword ptr [0x11d7439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7439c))), 0x11d48d32u);
  /* 11d48d32 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d48d34 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d48d37 mov edx, dword ptr [ecx*4 + 0x11d6fb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11d6fb40)));
  /* 11d48d3e push edx */
  push32((uint32_t)(EDX));
  /* 11d48d3f call 0x11d45e10 */
  push32(0x11d48d44u); f_11d45e10();
  /* 11d48d44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d48d47:;
  /* 11d48d47 jmp 0x11d48ced */
  goto L_11d48ced;
L_11d48d49:;
  /* 11d48d49 mov eax, dword ptr [0x11d6fb64] */
  EAX = (r32((uint32_t)(0x11d6fb64)));
  /* 11d48d4e push eax */
  push32((uint32_t)(EAX));
  /* 11d48d4f call dword ptr [0x11d7439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7439c))), 0x11d48d55u);
  /* 11d48d55 mov ecx, dword ptr [0x11d6fb74] */
  ECX = (r32((uint32_t)(0x11d6fb74)));
  /* 11d48d5b push ecx */
  push32((uint32_t)(ECX));
  /* 11d48d5c call dword ptr [0x11d7439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7439c))), 0x11d48d62u);
  /* 11d48d62 mov edx, dword ptr [0x11d6fb84] */
  EDX = (r32((uint32_t)(0x11d6fb84)));
  /* 11d48d68 push edx */
  push32((uint32_t)(EDX));
  /* 11d48d69 call dword ptr [0x11d7439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7439c))), 0x11d48d6fu);
  /* 11d48d6f mov eax, dword ptr [0x11d6fb44] */
  EAX = (r32((uint32_t)(0x11d6fb44)));
  /* 11d48d74 push eax */
  push32((uint32_t)(EAX));
  /* 11d48d75 call dword ptr [0x11d7439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7439c))), 0x11d48d7bu);
  /* 11d48d7b mov esp, ebp */
  ESP = (EBP);
  /* 11d48d7d pop ebp */
  EBP = (pop32());
  /* 11d48d7e ret  */
  ESPCHK(0x11d48ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d80 @ 0x11d48d80 (151 bytes, 46 insns) */
void f_11d48d80(void) {
  FTRACE(0x11d48d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d48d80 push ebp */
  push32((uint32_t)(EBP));
  /* 11d48d81 mov ebp, esp */
  EBP = (ESP);
  /* 11d48d83 push ecx */
  push32((uint32_t)(ECX));
  /* 11d48d84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d48d87 cmp dword ptr [eax*4 + 0x11d6fb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11d6fb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48d8f jne 0x11d48e02 */
  if (!C.zf) goto L_11d48e02;
  /* 11d48d91 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 11d48d96 push 0x11d6d178 */
  push32((uint32_t)(0x11d6d178u));
  /* 11d48d9b push 2 */
  push32((uint32_t)(0x2u));
  /* 11d48d9d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11d48d9f call 0x11d45380 */
  push32(0x11d48da4u); f_11d45380();
  /* 11d48da4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d48da7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d48daa cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48dae jne 0x11d48dba */
  if (!C.zf) goto L_11d48dba;
  /* 11d48db0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11d48db2 call 0x11d442f0 */
  push32(0x11d48db7u); f_11d442f0();
  /* 11d48db7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d48dba:;
  /* 11d48dba push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11d48dbc call 0x11d48d80 */
  push32(0x11d48dc1u); f_11d48d80();
  /* 11d48dc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d48dc4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d48dc7 cmp dword ptr [ecx*4 + 0x11d6fb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11d6fb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48dcf jne 0x11d48dea */
  if (!C.zf) goto L_11d48dea;
  /* 11d48dd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d48dd4 push edx */
  push32((uint32_t)(EDX));
  /* 11d48dd5 call dword ptr [0x11d74364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74364))), 0x11d48ddbu);
  /* 11d48ddb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d48dde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d48de1 mov dword ptr [eax*4 + 0x11d6fb40], ecx */
  w32((uint32_t)(EAX*4 + 0x11d6fb40), (ECX));
  /* 11d48de8 jmp 0x11d48df8 */
  goto L_11d48df8;
L_11d48dea:;
  /* 11d48dea push 2 */
  push32((uint32_t)(0x2u));
  /* 11d48dec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d48def push edx */
  push32((uint32_t)(EDX));
  /* 11d48df0 call 0x11d45e10 */
  push32(0x11d48df5u); f_11d45e10();
  /* 11d48df5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d48df8:;
  /* 11d48df8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11d48dfa call 0x11d48e20 */
  push32(0x11d48dffu); f_11d48e20();
  /* 11d48dff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d48e02:;
  /* 11d48e02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d48e05 mov ecx, dword ptr [eax*4 + 0x11d6fb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11d6fb40)));
  /* 11d48e0c push ecx */
  push32((uint32_t)(ECX));
  /* 11d48e0d call dword ptr [0x11d74360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74360))), 0x11d48e13u);
  /* 11d48e13 mov esp, ebp */
  ESP = (EBP);
  /* 11d48e15 pop ebp */
  EBP = (pop32());
  /* 11d48e16 ret  */
  ESPCHK(0x11d48d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e20 @ 0x11d48e20 (22 bytes, 8 insns) */
void f_11d48e20(void) {
  FTRACE(0x11d48e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d48e20 push ebp */
  push32((uint32_t)(EBP));
  /* 11d48e21 mov ebp, esp */
  EBP = (ESP);
  /* 11d48e23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d48e26 mov ecx, dword ptr [eax*4 + 0x11d6fb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11d6fb40)));
  /* 11d48e2d push ecx */
  push32((uint32_t)(ECX));
  /* 11d48e2e call dword ptr [0x11d7435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7435c))), 0x11d48e34u);
  /* 11d48e34 pop ebp */
  EBP = (pop32());
  /* 11d48e35 ret  */
  ESPCHK(0x11d48e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e40 @ 0x11d48e40 (26 bytes, 10 insns) */
void f_11d48e40(void) {
  FTRACE(0x11d48e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d48e40 push ebp */
  push32((uint32_t)(EBP));
  /* 11d48e41 mov ebp, esp */
  EBP = (ESP);
  /* 11d48e43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d48e46 push eax */
  push32((uint32_t)(EAX));
  /* 11d48e47 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d48e49 call dword ptr [0x11d74358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74358))), 0x11d48e4fu);
  /* 11d48e4f push 0xff */
  push32((uint32_t)(0xffu));
  /* 11d48e54 call dword ptr [0x11d742dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d742dc))), 0x11d48e5au);
  /* 11d48e5a pop ebp */
  EBP = (pop32());
  /* 11d48e5b ret  */
  ESPCHK(0x11d48e40u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x11d48e60 (446 bytes, 130 insns) */
void f_11d48e60(void) {
  FTRACE(0x11d48e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d48e60 push ebp */
  push32((uint32_t)(EBP));
  /* 11d48e61 mov ebp, esp */
  EBP = (ESP);
  /* 11d48e63 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d48e66 call 0x11d44dc0 */
  push32(0x11d48e6bu); f_11d44dc0();
  /* 11d48e6b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d48e6e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d48e71 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11d48e74 push ecx */
  push32((uint32_t)(ECX));
  /* 11d48e75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d48e78 push edx */
  push32((uint32_t)(EDX));
  /* 11d48e79 call 0x11d49020 */
  push32(0x11d48e7eu); f_11d49020();
  /* 11d48e7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d48e81 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11d48e84 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48e88 je 0x11d48e93 */
  if (C.zf) goto L_11d48e93;
  /* 11d48e8a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d48e8d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48e91 jne 0x11d48ea2 */
  if (!C.zf) goto L_11d48ea2;
L_11d48e93:;
  /* 11d48e93 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d48e96 push ecx */
  push32((uint32_t)(ECX));
  /* 11d48e97 call dword ptr [0x11d74354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74354))), 0x11d48e9du);
  /* 11d48e9d jmp 0x11d4901a */
  goto L_11d4901a;
L_11d48ea2:;
  /* 11d48ea2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d48ea5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48ea9 jne 0x11d48ebf */
  if (!C.zf) goto L_11d48ebf;
  /* 11d48eab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d48eae mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11d48eb5 mov eax, 1 */
  EAX = (0x1u);
  /* 11d48eba jmp 0x11d4901a */
  goto L_11d4901a;
L_11d48ebf:;
  /* 11d48ebf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d48ec2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48ec6 jne 0x11d48ed0 */
  if (!C.zf) goto L_11d48ed0;
  /* 11d48ec8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d48ecb jmp 0x11d4901a */
  goto L_11d4901a;
L_11d48ed0:;
  /* 11d48ed0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d48ed3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11d48ed6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d48ed9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d48edc mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 11d48edf mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11d48ee2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d48ee5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d48ee8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 11d48eeb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d48eee cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48ef2 jne 0x11d48ff7 */
  if (!C.zf) goto L_11d48ff7;
  /* 11d48ef8 mov eax, dword ptr [0x11d6fc78] */
  EAX = (r32((uint32_t)(0x11d6fc78)));
  /* 11d48efd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11d48f00 jmp 0x11d48f0b */
  goto L_11d48f0b;
L_11d48f02:;
  /* 11d48f02 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d48f05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d48f08 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11d48f0b:;
  /* 11d48f0b mov edx, dword ptr [0x11d6fc78] */
  EDX = (r32((uint32_t)(0x11d6fc78)));
  /* 11d48f11 add edx, dword ptr [0x11d6fc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11d6fc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d48f17 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48f1a jge 0x11d48f32 */
  if ((C.sf==C.of)) goto L_11d48f32;
  /* 11d48f1c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d48f1f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d48f22 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d48f25 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11d48f28 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 11d48f30 jmp 0x11d48f02 */
  goto L_11d48f02;
L_11d48f32:;
  /* 11d48f32 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d48f35 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11d48f38 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d48f3b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d48f3e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48f44 jne 0x11d48f55 */
  if (!C.zf) goto L_11d48f55;
  /* 11d48f46 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d48f49 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 11d48f50 jmp 0x11d48fdd */
  goto L_11d48fdd;
L_11d48f55:;
  /* 11d48f55 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d48f58 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48f5e jne 0x11d48f6c */
  if (!C.zf) goto L_11d48f6c;
  /* 11d48f60 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d48f63 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 11d48f6a jmp 0x11d48fdd */
  goto L_11d48fdd;
L_11d48f6c:;
  /* 11d48f6c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d48f6f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48f75 jne 0x11d48f83 */
  if (!C.zf) goto L_11d48f83;
  /* 11d48f77 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d48f7a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 11d48f81 jmp 0x11d48fdd */
  goto L_11d48fdd;
L_11d48f83:;
  /* 11d48f83 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d48f86 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48f8c jne 0x11d48f9a */
  if (!C.zf) goto L_11d48f9a;
  /* 11d48f8e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d48f91 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 11d48f98 jmp 0x11d48fdd */
  goto L_11d48fdd;
L_11d48f9a:;
  /* 11d48f9a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d48f9d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48fa3 jne 0x11d48fb1 */
  if (!C.zf) goto L_11d48fb1;
  /* 11d48fa5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d48fa8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 11d48faf jmp 0x11d48fdd */
  goto L_11d48fdd;
L_11d48fb1:;
  /* 11d48fb1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d48fb4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48fba jne 0x11d48fc8 */
  if (!C.zf) goto L_11d48fc8;
  /* 11d48fbc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d48fbf mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 11d48fc6 jmp 0x11d48fdd */
  goto L_11d48fdd;
L_11d48fc8:;
  /* 11d48fc8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d48fcb cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d48fd1 jne 0x11d48fdd */
  if (!C.zf) goto L_11d48fdd;
  /* 11d48fd3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d48fd6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_11d48fdd:;
  /* 11d48fdd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d48fe0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 11d48fe3 push edx */
  push32((uint32_t)(EDX));
  /* 11d48fe4 push 8 */
  push32((uint32_t)(0x8u));
  /* 11d48fe6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11d48fe9u);
  /* 11d48fe9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d48fec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d48fef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d48ff2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 11d48ff5 jmp 0x11d4900e */
  goto L_11d4900e;
L_11d48ff7:;
  /* 11d48ff7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d48ffa mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11d49001 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d49004 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d49007 push ecx */
  push32((uint32_t)(ECX));
  /* 11d49008 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11d4900bu);
  /* 11d4900b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d4900e:;
  /* 11d4900e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d49011 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d49014 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 11d49017 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11d4901a:;
  /* 11d4901a mov esp, ebp */
  ESP = (EBP);
  /* 11d4901c pop ebp */
  EBP = (pop32());
  /* 11d4901d ret  */
  ESPCHK(0x11d48e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10009020 @ 0x11d49020 (89 bytes, 35 insns) */
void f_11d49020(void) {
  FTRACE(0x11d49020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d49020 push ebp */
  push32((uint32_t)(EBP));
  /* 11d49021 mov ebp, esp */
  EBP = (ESP);
  /* 11d49023 push ecx */
  push32((uint32_t)(ECX));
  /* 11d49024 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d49027 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d4902a:;
  /* 11d4902a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4902d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d4902f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49032 je 0x11d49052 */
  if (C.zf) goto L_11d49052;
  /* 11d49034 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d49037 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4903a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d4903d mov ecx, dword ptr [0x11d6fc84] */
  ECX = (r32((uint32_t)(0x11d6fc84)));
  /* 11d49043 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d49046 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d49049 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4904b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4904e jae 0x11d49052 */
  if (!C.cf) goto L_11d49052;
  /* 11d49050 jmp 0x11d4902a */
  goto L_11d4902a;
L_11d49052:;
  /* 11d49052 mov eax, dword ptr [0x11d6fc84] */
  EAX = (r32((uint32_t)(0x11d6fc84)));
  /* 11d49057 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d4905a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4905d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4905f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49062 jae 0x11d4906e */
  if (!C.cf) goto L_11d4906e;
  /* 11d49064 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d49067 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d49069 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4906c je 0x11d49072 */
  if (C.zf) goto L_11d49072;
L_11d4906e:;
  /* 11d4906e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d49070 jmp 0x11d49075 */
  goto L_11d49075;
L_11d49072:;
  /* 11d49072 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11d49075:;
  /* 11d49075 mov esp, ebp */
  ESP = (EBP);
  /* 11d49077 pop ebp */
  EBP = (pop32());
  /* 11d49078 ret  */
  ESPCHK(0x11d49020u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x11d49080 (48 bytes, 17 insns) */
void f_11d49080(void) {
  FTRACE(0x11d49080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d49080 push ebp */
  push32((uint32_t)(EBP));
  /* 11d49081 mov ebp, esp */
  EBP = (ESP);
  /* 11d49083 push ecx */
  push32((uint32_t)(ECX));
  /* 11d49084 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d49086 call 0x11d48d80 */
  push32(0x11d4908bu); f_11d48d80();
  /* 11d4908b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4908e mov eax, dword ptr [0x11d7183c] */
  EAX = (r32((uint32_t)(0x11d7183c)));
  /* 11d49093 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d49096 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d49099 mov dword ptr [0x11d7183c], ecx */
  w32((uint32_t)(0x11d7183c), (ECX));
  /* 11d4909f push 9 */
  push32((uint32_t)(0x9u));
  /* 11d490a1 call 0x11d48e20 */
  push32(0x11d490a6u); f_11d48e20();
  /* 11d490a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d490a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d490ac mov esp, ebp */
  ESP = (EBP);
  /* 11d490ae pop ebp */
  EBP = (pop32());
  /* 11d490af ret  */
  ESPCHK(0x11d49080u, _esp0);
  ESP += 4; return;
}

/* FUN_100090b0 @ 0x11d490b0 (10 bytes, 5 insns) */
void f_11d490b0(void) {
  FTRACE(0x11d490b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d490b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d490b1 mov ebp, esp */
  EBP = (ESP);
  /* 11d490b3 mov eax, dword ptr [0x11d7183c] */
  EAX = (r32((uint32_t)(0x11d7183c)));
  /* 11d490b8 pop ebp */
  EBP = (pop32());
  /* 11d490b9 ret  */
  ESPCHK(0x11d490b0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x11d490c0 (45 bytes, 19 insns) */
void f_11d490c0(void) {
  FTRACE(0x11d490c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d490c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d490c1 mov ebp, esp */
  EBP = (ESP);
  /* 11d490c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d490c4 mov eax, dword ptr [0x11d7183c] */
  EAX = (r32((uint32_t)(0x11d7183c)));
  /* 11d490c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d490cc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d490d0 je 0x11d490e0 */
  if (C.zf) goto L_11d490e0;
  /* 11d490d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d490d5 push ecx */
  push32((uint32_t)(ECX));
  /* 11d490d6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11d490d9u);
  /* 11d490d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d490dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d490de jne 0x11d490e4 */
  if (!C.zf) goto L_11d490e4;
L_11d490e0:;
  /* 11d490e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d490e2 jmp 0x11d490e9 */
  goto L_11d490e9;
L_11d490e4:;
  /* 11d490e4 mov eax, 1 */
  EAX = (0x1u);
L_11d490e9:;
  /* 11d490e9 mov esp, ebp */
  ESP = (EBP);
  /* 11d490eb pop ebp */
  EBP = (pop32());
  /* 11d490ec ret  */
  ESPCHK(0x11d490c0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11d490f0 (88 bytes, 40 insns) */
void f_11d490f0(void) {
  FTRACE(0x11d490f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d490f0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11d490f4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d490f8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d490fa je 0x11d49143 */
  if (C.zf) goto L_11d49143;
  /* 11d490fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d490fe mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11d49102 push edi */
  push32((uint32_t)(EDI));
  /* 11d49103 mov edi, ecx */
  EDI = (ECX);
  /* 11d49105 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49108 jb 0x11d49137 */
  if (C.cf) goto L_11d49137;
  /* 11d4910a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d4910c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11d4910f je 0x11d49119 */
  if (C.zf) goto L_11d49119;
  /* 11d49111 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11d49113:;
  /* 11d49113 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d49115 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d49116 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11d49117 jne 0x11d49113 */
  if (!C.zf) goto L_11d49113;
L_11d49119:;
  /* 11d49119 mov ecx, eax */
  ECX = (EAX);
  /* 11d4911b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11d4911e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49120 mov ecx, eax */
  ECX = (EAX);
  /* 11d49122 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11d49125 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49127 mov ecx, edx */
  ECX = (EDX);
  /* 11d49129 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11d4912c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d4912f je 0x11d49137 */
  if (C.zf) goto L_11d49137;
  /* 11d49131 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11d49133 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d49135 je 0x11d4913d */
  if (C.zf) goto L_11d4913d;
L_11d49137:;
  /* 11d49137 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d49139 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d4913a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11d4913b jne 0x11d49137 */
  if (!C.zf) goto L_11d49137;
L_11d4913d:;
  /* 11d4913d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d49141 pop edi */
  EDI = (pop32());
  /* 11d49142 ret  */
  ESPCHK(0x11d490f0u, _esp0);
  ESP += 4; return;
L_11d49143:;
  /* 11d49143 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d49147 ret  */
  ESPCHK(0x11d490f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009150 @ 0x11d49150 (23 bytes, 10 insns) */
void f_11d49150(void) {
  FTRACE(0x11d49150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d49150 push ebp */
  push32((uint32_t)(EBP));
  /* 11d49151 mov ebp, esp */
  EBP = (ESP);
  /* 11d49153 mov eax, dword ptr [0x11d71838] */
  EAX = (r32((uint32_t)(0x11d71838)));
  /* 11d49158 push eax */
  push32((uint32_t)(EAX));
  /* 11d49159 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4915c push ecx */
  push32((uint32_t)(ECX));
  /* 11d4915d call 0x11d49170 */
  push32(0x11d49162u); f_11d49170();
  /* 11d49162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49165 pop ebp */
  EBP = (pop32());
  /* 11d49166 ret  */
  ESPCHK(0x11d49150u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x11d49170 (87 bytes, 34 insns) */
void f_11d49170(void) {
  FTRACE(0x11d49170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d49170 push ebp */
  push32((uint32_t)(EBP));
  /* 11d49171 mov ebp, esp */
  EBP = (ESP);
  /* 11d49173 push ecx */
  push32((uint32_t)(ECX));
  /* 11d49174 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49178 jbe 0x11d4917e */
  if ((C.cf||C.zf)) goto L_11d4917e;
  /* 11d4917a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4917c jmp 0x11d491c3 */
  goto L_11d491c3;
L_11d4917e:;
  /* 11d4917e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49182 ja 0x11d49195 */
  if ((!C.cf&&!C.zf)) goto L_11d49195;
  /* 11d49184 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d49187 push eax */
  push32((uint32_t)(EAX));
  /* 11d49188 call 0x11d491d0 */
  push32(0x11d4918du); f_11d491d0();
  /* 11d4918d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49190 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d49193 jmp 0x11d4919c */
  goto L_11d4919c;
L_11d49195:;
  /* 11d49195 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11d4919c:;
  /* 11d4919c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d491a0 jne 0x11d491a8 */
  if (!C.zf) goto L_11d491a8;
  /* 11d491a2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d491a6 jne 0x11d491ad */
  if (!C.zf) goto L_11d491ad;
L_11d491a8:;
  /* 11d491a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d491ab jmp 0x11d491c3 */
  goto L_11d491c3;
L_11d491ad:;
  /* 11d491ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d491b0 push ecx */
  push32((uint32_t)(ECX));
  /* 11d491b1 call 0x11d490c0 */
  push32(0x11d491b6u); f_11d490c0();
  /* 11d491b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d491b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d491bb jne 0x11d491c1 */
  if (!C.zf) goto L_11d491c1;
  /* 11d491bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d491bf jmp 0x11d491c3 */
  goto L_11d491c3;
L_11d491c1:;
  /* 11d491c1 jmp 0x11d4917e */
  goto L_11d4917e;
L_11d491c3:;
  /* 11d491c3 mov esp, ebp */
  ESP = (EBP);
  /* 11d491c5 pop ebp */
  EBP = (pop32());
  /* 11d491c6 ret  */
  ESPCHK(0x11d49170u, _esp0);
  ESP += 4; return;
}

/* FUN_100091d0 @ 0x11d491d0 (109 bytes, 37 insns) */
void f_11d491d0(void) {
  FTRACE(0x11d491d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d491d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d491d1 mov ebp, esp */
  EBP = (ESP);
  /* 11d491d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d491d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d491d7 cmp eax, dword ptr [0x11d6fc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11d6fc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d491dd ja 0x11d4920d */
  if ((!C.cf&&!C.zf)) goto L_11d4920d;
  /* 11d491df push 9 */
  push32((uint32_t)(0x9u));
  /* 11d491e1 call 0x11d48d80 */
  push32(0x11d491e6u); f_11d48d80();
  /* 11d491e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d491e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d491ec push ecx */
  push32((uint32_t)(ECX));
  /* 11d491ed call 0x11d49d10 */
  push32(0x11d491f2u); f_11d49d10();
  /* 11d491f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d491f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d491f8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d491fa call 0x11d48e20 */
  push32(0x11d491ffu); f_11d48e20();
  /* 11d491ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49202 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49206 je 0x11d4920d */
  if (C.zf) goto L_11d4920d;
  /* 11d49208 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d4920b jmp 0x11d49239 */
  goto L_11d49239;
L_11d4920d:;
  /* 11d4920d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49211 jne 0x11d4921a */
  if (!C.zf) goto L_11d4921a;
  /* 11d49213 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_11d4921a:;
  /* 11d4921a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4921d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49220 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11d49223 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11d49226 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d49229 push eax */
  push32((uint32_t)(EAX));
  /* 11d4922a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d4922c mov ecx, dword ptr [0x11d72fec] */
  ECX = (r32((uint32_t)(0x11d72fec)));
  /* 11d49232 push ecx */
  push32((uint32_t)(ECX));
  /* 11d49233 call dword ptr [0x11d74350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74350))), 0x11d49239u);
L_11d49239:;
  /* 11d49239 mov esp, ebp */
  ESP = (EBP);
  /* 11d4923b pop ebp */
  EBP = (pop32());
  /* 11d4923c ret  */
  ESPCHK(0x11d491d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009240 @ 0x11d49240 (10 bytes, 5 insns) */
void f_11d49240(void) {
  FTRACE(0x11d49240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d49240 push ebp */
  push32((uint32_t)(EBP));
  /* 11d49241 mov ebp, esp */
  EBP = (ESP);
  /* 11d49243 mov eax, 1 */
  EAX = (0x1u);
  /* 11d49248 pop ebp */
  EBP = (pop32());
  /* 11d49249 ret  */
  ESPCHK(0x11d49240u, _esp0);
  ESP += 4; return;
}

/* FUN_10009250 @ 0x11d49250 (173 bytes, 59 insns) */
void f_11d49250(void) {
  FTRACE(0x11d49250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d49250 push ebp */
  push32((uint32_t)(EBP));
  /* 11d49251 mov ebp, esp */
  EBP = (ESP);
  /* 11d49253 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d49256 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4925a jbe 0x11d49263 */
  if ((C.cf||C.zf)) goto L_11d49263;
  /* 11d4925c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d4925e jmp 0x11d492f9 */
  goto L_11d492f9;
L_11d49263:;
  /* 11d49263 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d49265 call 0x11d48d80 */
  push32(0x11d4926au); f_11d48d80();
  /* 11d4926a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4926d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d49270 push eax */
  push32((uint32_t)(EAX));
  /* 11d49271 call 0x11d49680 */
  push32(0x11d49276u); f_11d49680();
  /* 11d49276 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49279 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d4927c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49280 je 0x11d492c1 */
  if (C.zf) goto L_11d492c1;
  /* 11d49282 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d49289 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4928c cmp ecx, dword ptr [0x11d6fc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11d6fc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49292 ja 0x11d492b2 */
  if ((!C.cf&&!C.zf)) goto L_11d492b2;
  /* 11d49294 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d49297 push edx */
  push32((uint32_t)(EDX));
  /* 11d49298 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4929b push eax */
  push32((uint32_t)(EAX));
  /* 11d4929c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d4929f push ecx */
  push32((uint32_t)(ECX));
  /* 11d492a0 call 0x11d4a550 */
  push32(0x11d492a5u); f_11d4a550();
  /* 11d492a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d492a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d492aa je 0x11d492b2 */
  if (C.zf) goto L_11d492b2;
  /* 11d492ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d492af mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11d492b2:;
  /* 11d492b2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d492b4 call 0x11d48e20 */
  push32(0x11d492b9u); f_11d48e20();
  /* 11d492b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d492bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d492bf jmp 0x11d492f9 */
  goto L_11d492f9;
L_11d492c1:;
  /* 11d492c1 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d492c3 call 0x11d48e20 */
  push32(0x11d492c8u); f_11d48e20();
  /* 11d492c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d492cb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d492cf jne 0x11d492d8 */
  if (!C.zf) goto L_11d492d8;
  /* 11d492d1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11d492d8:;
  /* 11d492d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d492db add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d492de and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11d492e0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11d492e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d492e6 push ecx */
  push32((uint32_t)(ECX));
  /* 11d492e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d492ea push edx */
  push32((uint32_t)(EDX));
  /* 11d492eb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11d492ed mov eax, dword ptr [0x11d72fec] */
  EAX = (r32((uint32_t)(0x11d72fec)));
  /* 11d492f2 push eax */
  push32((uint32_t)(EAX));
  /* 11d492f3 call dword ptr [0x11d7434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7434c))), 0x11d492f9u);
L_11d492f9:;
  /* 11d492f9 mov esp, ebp */
  ESP = (EBP);
  /* 11d492fb pop ebp */
  EBP = (pop32());
  /* 11d492fc ret  */
  ESPCHK(0x11d49250u, _esp0);
  ESP += 4; return;
}

/* FUN_10009300 @ 0x11d49300 (490 bytes, 165 insns) */
void f_11d49300(void) {
  FTRACE(0x11d49300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d49300 push ebp */
  push32((uint32_t)(EBP));
  /* 11d49301 mov ebp, esp */
  EBP = (ESP);
  /* 11d49303 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d49306 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4930a jne 0x11d4931d */
  if (!C.zf) goto L_11d4931d;
  /* 11d4930c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4930f push eax */
  push32((uint32_t)(EAX));
  /* 11d49310 call 0x11d49150 */
  push32(0x11d49315u); f_11d49150();
  /* 11d49315 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49318 jmp 0x11d494e6 */
  goto L_11d494e6;
L_11d4931d:;
  /* 11d4931d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49321 jne 0x11d49336 */
  if (!C.zf) goto L_11d49336;
  /* 11d49323 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d49326 push ecx */
  push32((uint32_t)(ECX));
  /* 11d49327 call 0x11d494f0 */
  push32(0x11d4932cu); f_11d494f0();
  /* 11d4932c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4932f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d49331 jmp 0x11d494e6 */
  goto L_11d494e6;
L_11d49336:;
  /* 11d49336 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11d4933d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49341 ja 0x11d494b9 */
  if ((!C.cf&&!C.zf)) goto L_11d494b9;
  /* 11d49347 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d49349 call 0x11d48d80 */
  push32(0x11d4934eu); f_11d48d80();
  /* 11d4934e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49351 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d49354 push edx */
  push32((uint32_t)(EDX));
  /* 11d49355 call 0x11d49680 */
  push32(0x11d4935au); f_11d49680();
  /* 11d4935a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4935d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d49360 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49364 je 0x11d4947c */
  if (C.zf) goto L_11d4947c;
  /* 11d4936a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d4936d cmp eax, dword ptr [0x11d6fc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11d6fc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49373 ja 0x11d493f0 */
  if ((!C.cf&&!C.zf)) goto L_11d493f0;
  /* 11d49375 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d49378 push ecx */
  push32((uint32_t)(ECX));
  /* 11d49379 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4937c push edx */
  push32((uint32_t)(EDX));
  /* 11d4937d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d49380 push eax */
  push32((uint32_t)(EAX));
  /* 11d49381 call 0x11d4a550 */
  push32(0x11d49386u); f_11d4a550();
  /* 11d49386 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49389 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4938b je 0x11d49395 */
  if (C.zf) goto L_11d49395;
  /* 11d4938d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d49390 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d49393 jmp 0x11d493f0 */
  goto L_11d493f0;
L_11d49395:;
  /* 11d49395 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d49398 push edx */
  push32((uint32_t)(EDX));
  /* 11d49399 call 0x11d49d10 */
  push32(0x11d4939eu); f_11d49d10();
  /* 11d4939e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d493a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d493a4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d493a8 je 0x11d493f0 */
  if (C.zf) goto L_11d493f0;
  /* 11d493aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d493ad mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 11d493b0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d493b3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d493b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d493b9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d493bc jae 0x11d493c6 */
  if (!C.cf) goto L_11d493c6;
  /* 11d493be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d493c1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11d493c4 jmp 0x11d493cc */
  goto L_11d493cc;
L_11d493c6:;
  /* 11d493c6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d493c9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11d493cc:;
  /* 11d493cc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d493cf push edx */
  push32((uint32_t)(EDX));
  /* 11d493d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d493d3 push eax */
  push32((uint32_t)(EAX));
  /* 11d493d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d493d7 push ecx */
  push32((uint32_t)(ECX));
  /* 11d493d8 call 0x11d4bc60 */
  push32(0x11d493ddu); f_11d4bc60();
  /* 11d493dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d493e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d493e3 push edx */
  push32((uint32_t)(EDX));
  /* 11d493e4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d493e7 push eax */
  push32((uint32_t)(EAX));
  /* 11d493e8 call 0x11d49740 */
  push32(0x11d493edu); f_11d49740();
  /* 11d493ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d493f0:;
  /* 11d493f0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d493f4 jne 0x11d49470 */
  if (!C.zf) goto L_11d49470;
  /* 11d493f6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d493fa jne 0x11d49403 */
  if (!C.zf) goto L_11d49403;
  /* 11d493fc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11d49403:;
  /* 11d49403 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d49406 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49409 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11d4940c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11d4940f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d49412 push edx */
  push32((uint32_t)(EDX));
  /* 11d49413 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d49415 mov eax, dword ptr [0x11d72fec] */
  EAX = (r32((uint32_t)(0x11d72fec)));
  /* 11d4941a push eax */
  push32((uint32_t)(EAX));
  /* 11d4941b call dword ptr [0x11d74350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74350))), 0x11d49421u);
  /* 11d49421 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d49424 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49428 je 0x11d49470 */
  if (C.zf) goto L_11d49470;
  /* 11d4942a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4942d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11d49430 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d49433 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d49436 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d49439 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4943c jae 0x11d49446 */
  if (!C.cf) goto L_11d49446;
  /* 11d4943e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d49441 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11d49444 jmp 0x11d4944c */
  goto L_11d4944c;
L_11d49446:;
  /* 11d49446 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d49449 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11d4944c:;
  /* 11d4944c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d4944f push eax */
  push32((uint32_t)(EAX));
  /* 11d49450 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d49453 push ecx */
  push32((uint32_t)(ECX));
  /* 11d49454 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d49457 push edx */
  push32((uint32_t)(EDX));
  /* 11d49458 call 0x11d4bc60 */
  push32(0x11d4945du); f_11d4bc60();
  /* 11d4945d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49460 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d49463 push eax */
  push32((uint32_t)(EAX));
  /* 11d49464 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d49467 push ecx */
  push32((uint32_t)(ECX));
  /* 11d49468 call 0x11d49740 */
  push32(0x11d4946du); f_11d49740();
  /* 11d4946d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d49470:;
  /* 11d49470 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d49472 call 0x11d48e20 */
  push32(0x11d49477u); f_11d48e20();
  /* 11d49477 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4947a jmp 0x11d494b9 */
  goto L_11d494b9;
L_11d4947c:;
  /* 11d4947c push 9 */
  push32((uint32_t)(0x9u));
  /* 11d4947e call 0x11d48e20 */
  push32(0x11d49483u); f_11d48e20();
  /* 11d49483 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49486 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d4948a jne 0x11d49493 */
  if (!C.zf) goto L_11d49493;
  /* 11d4948c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11d49493:;
  /* 11d49493 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d49496 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49499 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11d4949c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11d4949f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d494a2 push eax */
  push32((uint32_t)(EAX));
  /* 11d494a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d494a6 push ecx */
  push32((uint32_t)(ECX));
  /* 11d494a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d494a9 mov edx, dword ptr [0x11d72fec] */
  EDX = (r32((uint32_t)(0x11d72fec)));
  /* 11d494af push edx */
  push32((uint32_t)(EDX));
  /* 11d494b0 call dword ptr [0x11d7434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d7434c))), 0x11d494b6u);
  /* 11d494b6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11d494b9:;
  /* 11d494b9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d494bd jne 0x11d494c8 */
  if (!C.zf) goto L_11d494c8;
  /* 11d494bf cmp dword ptr [0x11d71838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d71838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d494c6 jne 0x11d494cd */
  if (!C.zf) goto L_11d494cd;
L_11d494c8:;
  /* 11d494c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d494cb jmp 0x11d494e6 */
  goto L_11d494e6;
L_11d494cd:;
  /* 11d494cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d494d0 push eax */
  push32((uint32_t)(EAX));
  /* 11d494d1 call 0x11d490c0 */
  push32(0x11d494d6u); f_11d490c0();
  /* 11d494d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d494d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d494db jne 0x11d494e1 */
  if (!C.zf) goto L_11d494e1;
  /* 11d494dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d494df jmp 0x11d494e6 */
  goto L_11d494e6;
L_11d494e1:;
  /* 11d494e1 jmp 0x11d49336 */
  goto L_11d49336;
L_11d494e6:;
  /* 11d494e6 mov esp, ebp */
  ESP = (EBP);
  /* 11d494e8 pop ebp */
  EBP = (pop32());
  /* 11d494e9 ret  */
  ESPCHK(0x11d49300u, _esp0);
  ESP += 4; return;
}

/* FUN_100094f0 @ 0x11d494f0 (104 bytes, 38 insns) */
void f_11d494f0(void) {
  FTRACE(0x11d494f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d494f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d494f1 mov ebp, esp */
  EBP = (ESP);
  /* 11d494f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d494f4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d494f8 jne 0x11d494fc */
  if (!C.zf) goto L_11d494fc;
  /* 11d494fa jmp 0x11d49554 */
  goto L_11d49554;
L_11d494fc:;
  /* 11d494fc push 9 */
  push32((uint32_t)(0x9u));
  /* 11d494fe call 0x11d48d80 */
  push32(0x11d49503u); f_11d48d80();
  /* 11d49503 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49506 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d49509 push eax */
  push32((uint32_t)(EAX));
  /* 11d4950a call 0x11d49680 */
  push32(0x11d4950fu); f_11d49680();
  /* 11d4950f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49512 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d49515 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d49519 je 0x11d49537 */
  if (C.zf) goto L_11d49537;
  /* 11d4951b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d4951e push ecx */
  push32((uint32_t)(ECX));
  /* 11d4951f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d49522 push edx */
  push32((uint32_t)(EDX));
  /* 11d49523 call 0x11d49740 */
  push32(0x11d49528u); f_11d49740();
  /* 11d49528 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4952b push 9 */
  push32((uint32_t)(0x9u));
  /* 11d4952d call 0x11d48e20 */
  push32(0x11d49532u); f_11d48e20();
  /* 11d49532 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49535 jmp 0x11d49554 */
  goto L_11d49554;
L_11d49537:;
  /* 11d49537 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d49539 call 0x11d48e20 */
  push32(0x11d4953eu); f_11d48e20();
  /* 11d4953e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49541 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d49544 push eax */
  push32((uint32_t)(EAX));
  /* 11d49545 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d49547 mov ecx, dword ptr [0x11d72fec] */
  ECX = (r32((uint32_t)(0x11d72fec)));
  /* 11d4954d push ecx */
  push32((uint32_t)(ECX));
  /* 11d4954e call dword ptr [0x11d74370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74370))), 0x11d49554u);
L_11d49554:;
  /* 11d49554 mov esp, ebp */
  ESP = (EBP);
  /* 11d49556 pop ebp */
  EBP = (pop32());
  /* 11d49557 ret  */
  ESPCHK(0x11d494f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009560 @ 0x11d49560 (116 bytes, 34 insns) */
void f_11d49560(void) {
  FTRACE(0x11d49560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d49560 push ebp */
  push32((uint32_t)(EBP));
  /* 11d49561 mov ebp, esp */
  EBP = (ESP);
  /* 11d49563 push ecx */
  push32((uint32_t)(ECX));
  /* 11d49564 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 11d4956b push 9 */
  push32((uint32_t)(0x9u));
  /* 11d4956d call 0x11d48d80 */
  push32(0x11d49572u); f_11d48d80();
  /* 11d49572 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d49575 call 0x11d4ac70 */
  push32(0x11d4957au); f_11d4ac70();
  /* 11d4957a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d4957c jge 0x11d49585 */
  if ((C.sf==C.of)) goto L_11d49585;
  /* 11d4957e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_11d49585:;
  /* 11d49585 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d49587 call 0x11d48e20 */
  push32(0x11d4958cu); f_11d48e20();
  /* 11d4958c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d4958f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d49591 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d49593 mov eax, dword ptr [0x11d72fec] */
  EAX = (r32((uint32_t)(0x11d72fec)));
  /* 11d49598 push eax */
  push32((uint32_t)(EAX));
  /* 11d49599 call dword ptr [0x11d74390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74390))), 0x11d4959fu);
  /* 11d4959f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d495a1 jne 0x11d495cd */
  if (!C.zf) goto L_11d495cd;
  /* 11d495a3 call dword ptr [0x11d743f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743f0))), 0x11d495a9u);
  /* 11d495a9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d495ac jne 0x11d495c6 */
  if (!C.zf) goto L_11d495c6;
  /* 11d495ae call 0x11d4d260 */
  push32(0x11d495b3u); f_11d4d260();
  /* 11d495b3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 11d495b9 call 0x11d4d250 */
  push32(0x11d495beu); f_11d4d250();
  /* 11d495be mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 11d495c4 jmp 0x11d495cd */
  goto L_11d495cd;
L_11d495c6:;
  /* 11d495c6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_11d495cd:;
  /* 11d495cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d495d0 mov esp, ebp */
  ESP = (EBP);
  /* 11d495d2 pop ebp */
  EBP = (pop32());
  /* 11d495d3 ret  */
  ESPCHK(0x11d49560u, _esp0);
  ESP += 4; return;
}

/* FUN_100095e0 @ 0x11d495e0 (10 bytes, 5 insns) */
void f_11d495e0(void) {
  FTRACE(0x11d495e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d495e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d495e1 mov ebp, esp */
  EBP = (ESP);
  /* 11d495e3 call 0x11d49560 */
  push32(0x11d495e8u); f_11d49560();
  /* 11d495e8 pop ebp */
  EBP = (pop32());
  /* 11d495e9 ret  */
  ESPCHK(0x11d495e0u, _esp0);
  ESP += 4; return;
}

