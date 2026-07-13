#include "recomp.h"

/* InitAI @ 0x10031000 (5554 bytes, 1455 insns) */
void f_10031000(void) {
  FTRACE(0x10031000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10031000 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031005 sub esp, 0x60 */
  { uint32_t _a=(ESP),_b=(0x60u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10031008 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003100a je 0x10031068 */
  if (C.zf) goto L_10031068;
  /* 1003100c push 0x1003fec8 */
  push32((uint32_t)(0x1003fec8u));
  /* 10031011 push 0x10046058 */
  push32((uint32_t)(0x10046058u));
  /* 10031016 call eax */
  call_ind((uint32_t)(EAX), 0x10031018u);
  /* 10031018 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 1003101d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031020 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031022 je 0x10031068 */
  if (C.zf) goto L_10031068;
  /* 10031024 push 0x1003fec0 */
  push32((uint32_t)(0x1003fec0u));
  /* 10031029 push 0x10045ff8 */
  push32((uint32_t)(0x10045ff8u));
  /* 1003102e call eax */
  call_ind((uint32_t)(EAX), 0x10031030u);
  /* 10031030 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031035 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031038 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003103a je 0x10031068 */
  if (C.zf) goto L_10031068;
  /* 1003103c push 0x1003feb8 */
  push32((uint32_t)(0x1003feb8u));
  /* 10031041 push 0x10046050 */
  push32((uint32_t)(0x10046050u));
  /* 10031046 call eax */
  call_ind((uint32_t)(EAX), 0x10031048u);
  /* 10031048 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 1003104d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031050 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031052 je 0x10031068 */
  if (C.zf) goto L_10031068;
  /* 10031054 push 0x1003feb0 */
  push32((uint32_t)(0x1003feb0u));
  /* 10031059 push 0x10046060 */
  push32((uint32_t)(0x10046060u));
  /* 1003105e call eax */
  call_ind((uint32_t)(EAX), 0x10031060u);
  /* 10031060 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031065 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10031068:;
  /* 10031068 mov ecx, dword ptr [0x100463c8] */
  ECX = (r32((uint32_t)(0x100463c8)));
  /* 1003106e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10031070 je 0x10031086 */
  if (C.zf) goto L_10031086;
  /* 10031072 push 0x1003fea4 */
  push32((uint32_t)(0x1003fea4u));
  /* 10031077 push 0x10043660 */
  push32((uint32_t)(0x10043660u));
  /* 1003107c call ecx */
  call_ind((uint32_t)(ECX), 0x1003107eu);
  /* 1003107e mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031083 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10031086:;
  /* 10031086 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031088 je 0x10031312 */
  if (C.zf) goto L_10031312;
  /* 1003108e push 0x1003fe90 */
  push32((uint32_t)(0x1003fe90u));
  /* 10031093 push 0x100438d0 */
  push32((uint32_t)(0x100438d0u));
  /* 10031098 call eax */
  call_ind((uint32_t)(EAX), 0x1003109au);
  /* 1003109a mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 1003109f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100310a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100310a4 je 0x10031312 */
  if (C.zf) goto L_10031312;
  /* 100310aa push 0x1003fe7c */
  push32((uint32_t)(0x1003fe7cu));
  /* 100310af push 0x100438c8 */
  push32((uint32_t)(0x100438c8u));
  /* 100310b4 call eax */
  call_ind((uint32_t)(EAX), 0x100310b6u);
  /* 100310b6 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 100310bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100310be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100310c0 je 0x10031312 */
  if (C.zf) goto L_10031312;
  /* 100310c6 push 0x1003fe68 */
  push32((uint32_t)(0x1003fe68u));
  /* 100310cb push 0x100438c0 */
  push32((uint32_t)(0x100438c0u));
  /* 100310d0 call eax */
  call_ind((uint32_t)(EAX), 0x100310d2u);
  /* 100310d2 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 100310d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100310da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100310dc je 0x10031312 */
  if (C.zf) goto L_10031312;
  /* 100310e2 push 0x1003fe54 */
  push32((uint32_t)(0x1003fe54u));
  /* 100310e7 push 0x10043908 */
  push32((uint32_t)(0x10043908u));
  /* 100310ec call eax */
  call_ind((uint32_t)(EAX), 0x100310eeu);
  /* 100310ee mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 100310f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100310f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100310f8 je 0x10031312 */
  if (C.zf) goto L_10031312;
  /* 100310fe push 0x1003fe40 */
  push32((uint32_t)(0x1003fe40u));
  /* 10031103 push 0x100438f8 */
  push32((uint32_t)(0x100438f8u));
  /* 10031108 call eax */
  call_ind((uint32_t)(EAX), 0x1003110au);
  /* 1003110a mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 1003110f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031112 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031114 je 0x10031312 */
  if (C.zf) goto L_10031312;
  /* 1003111a push 0x1003fe2c */
  push32((uint32_t)(0x1003fe2cu));
  /* 1003111f push 0x100438f0 */
  push32((uint32_t)(0x100438f0u));
  /* 10031124 call eax */
  call_ind((uint32_t)(EAX), 0x10031126u);
  /* 10031126 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 1003112b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003112e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031130 je 0x10031312 */
  if (C.zf) goto L_10031312;
  /* 10031136 push 0x1003fe18 */
  push32((uint32_t)(0x1003fe18u));
  /* 1003113b push 0x100436a8 */
  push32((uint32_t)(0x100436a8u));
  /* 10031140 call eax */
  call_ind((uint32_t)(EAX), 0x10031142u);
  /* 10031142 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031147 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003114a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003114c je 0x10031312 */
  if (C.zf) goto L_10031312;
  /* 10031152 push 0x1003fe04 */
  push32((uint32_t)(0x1003fe04u));
  /* 10031157 push 0x10043698 */
  push32((uint32_t)(0x10043698u));
  /* 1003115c call eax */
  call_ind((uint32_t)(EAX), 0x1003115eu);
  /* 1003115e mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031163 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031166 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031168 je 0x10031312 */
  if (C.zf) goto L_10031312;
  /* 1003116e push 0x1003fdf0 */
  push32((uint32_t)(0x1003fdf0u));
  /* 10031173 push 0x10043890 */
  push32((uint32_t)(0x10043890u));
  /* 10031178 call eax */
  call_ind((uint32_t)(EAX), 0x1003117au);
  /* 1003117a mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 1003117f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031182 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031184 je 0x10031312 */
  if (C.zf) goto L_10031312;
  /* 1003118a push 0x1003fddc */
  push32((uint32_t)(0x1003fddcu));
  /* 1003118f push 0x10043888 */
  push32((uint32_t)(0x10043888u));
  /* 10031194 call eax */
  call_ind((uint32_t)(EAX), 0x10031196u);
  /* 10031196 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 1003119b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003119e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100311a0 je 0x10031312 */
  if (C.zf) goto L_10031312;
  /* 100311a6 push 0x1003fdc8 */
  push32((uint32_t)(0x1003fdc8u));
  /* 100311ab push 0x10043880 */
  push32((uint32_t)(0x10043880u));
  /* 100311b0 call eax */
  call_ind((uint32_t)(EAX), 0x100311b2u);
  /* 100311b2 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 100311b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100311ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100311bc je 0x10031312 */
  if (C.zf) goto L_10031312;
  /* 100311c2 push 0x1003fdb4 */
  push32((uint32_t)(0x1003fdb4u));
  /* 100311c7 push 0x10043878 */
  push32((uint32_t)(0x10043878u));
  /* 100311cc call eax */
  call_ind((uint32_t)(EAX), 0x100311ceu);
  /* 100311ce mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 100311d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100311d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100311d8 je 0x10031312 */
  if (C.zf) goto L_10031312;
  /* 100311de push 0x1003fe90 */
  push32((uint32_t)(0x1003fe90u));
  /* 100311e3 push 0x100438d0 */
  push32((uint32_t)(0x100438d0u));
  /* 100311e8 call eax */
  call_ind((uint32_t)(EAX), 0x100311eau);
  /* 100311ea mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 100311ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100311f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100311f4 je 0x10031312 */
  if (C.zf) goto L_10031312;
  /* 100311fa push 0x1003fe7c */
  push32((uint32_t)(0x1003fe7cu));
  /* 100311ff push 0x100438c8 */
  push32((uint32_t)(0x100438c8u));
  /* 10031204 call eax */
  call_ind((uint32_t)(EAX), 0x10031206u);
  /* 10031206 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 1003120b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003120e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031210 je 0x10031312 */
  if (C.zf) goto L_10031312;
  /* 10031216 push 0x1003fe68 */
  push32((uint32_t)(0x1003fe68u));
  /* 1003121b push 0x100438c0 */
  push32((uint32_t)(0x100438c0u));
  /* 10031220 call eax */
  call_ind((uint32_t)(EAX), 0x10031222u);
  /* 10031222 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031227 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003122a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003122c je 0x10031312 */
  if (C.zf) goto L_10031312;
  /* 10031232 push 0x1003fe54 */
  push32((uint32_t)(0x1003fe54u));
  /* 10031237 push 0x10043908 */
  push32((uint32_t)(0x10043908u));
  /* 1003123c call eax */
  call_ind((uint32_t)(EAX), 0x1003123eu);
  /* 1003123e mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031243 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031246 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031248 je 0x10031312 */
  if (C.zf) goto L_10031312;
  /* 1003124e push 0x1003fe40 */
  push32((uint32_t)(0x1003fe40u));
  /* 10031253 push 0x100438f8 */
  push32((uint32_t)(0x100438f8u));
  /* 10031258 call eax */
  call_ind((uint32_t)(EAX), 0x1003125au);
  /* 1003125a mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 1003125f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031262 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031264 je 0x10031312 */
  if (C.zf) goto L_10031312;
  /* 1003126a push 0x1003fe2c */
  push32((uint32_t)(0x1003fe2cu));
  /* 1003126f push 0x100438f0 */
  push32((uint32_t)(0x100438f0u));
  /* 10031274 call eax */
  call_ind((uint32_t)(EAX), 0x10031276u);
  /* 10031276 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 1003127b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003127e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031280 je 0x10031312 */
  if (C.zf) goto L_10031312;
  /* 10031286 push 0x1003fe18 */
  push32((uint32_t)(0x1003fe18u));
  /* 1003128b push 0x100436a8 */
  push32((uint32_t)(0x100436a8u));
  /* 10031290 call eax */
  call_ind((uint32_t)(EAX), 0x10031292u);
  /* 10031292 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031297 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003129a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003129c je 0x10031312 */
  if (C.zf) goto L_10031312;
  /* 1003129e push 0x1003fe04 */
  push32((uint32_t)(0x1003fe04u));
  /* 100312a3 push 0x10043698 */
  push32((uint32_t)(0x10043698u));
  /* 100312a8 call eax */
  call_ind((uint32_t)(EAX), 0x100312aau);
  /* 100312aa mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 100312af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100312b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100312b4 je 0x10031312 */
  if (C.zf) goto L_10031312;
  /* 100312b6 push 0x1003fdf0 */
  push32((uint32_t)(0x1003fdf0u));
  /* 100312bb push 0x10043890 */
  push32((uint32_t)(0x10043890u));
  /* 100312c0 call eax */
  call_ind((uint32_t)(EAX), 0x100312c2u);
  /* 100312c2 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 100312c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100312ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100312cc je 0x10031312 */
  if (C.zf) goto L_10031312;
  /* 100312ce push 0x1003fddc */
  push32((uint32_t)(0x1003fddcu));
  /* 100312d3 push 0x10043888 */
  push32((uint32_t)(0x10043888u));
  /* 100312d8 call eax */
  call_ind((uint32_t)(EAX), 0x100312dau);
  /* 100312da mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 100312df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100312e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100312e4 je 0x10031312 */
  if (C.zf) goto L_10031312;
  /* 100312e6 push 0x1003fdc8 */
  push32((uint32_t)(0x1003fdc8u));
  /* 100312eb push 0x10043880 */
  push32((uint32_t)(0x10043880u));
  /* 100312f0 call eax */
  call_ind((uint32_t)(EAX), 0x100312f2u);
  /* 100312f2 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 100312f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100312fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100312fc je 0x10031312 */
  if (C.zf) goto L_10031312;
  /* 100312fe push 0x1003fdb4 */
  push32((uint32_t)(0x1003fdb4u));
  /* 10031303 push 0x10043878 */
  push32((uint32_t)(0x10043878u));
  /* 10031308 call eax */
  call_ind((uint32_t)(EAX), 0x1003130au);
  /* 1003130a mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 1003130f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10031312:;
  /* 10031312 mov ecx, dword ptr [0x100463c8] */
  ECX = (r32((uint32_t)(0x100463c8)));
  /* 10031318 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1003131a je 0x10031330 */
  if (C.zf) goto L_10031330;
  /* 1003131c push 0x1003fda4 */
  push32((uint32_t)(0x1003fda4u));
  /* 10031321 push 0x10043650 */
  push32((uint32_t)(0x10043650u));
  /* 10031326 call ecx */
  call_ind((uint32_t)(ECX), 0x10031328u);
  /* 10031328 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 1003132d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10031330:;
  /* 10031330 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031332 je 0x100315b7 */
  if (C.zf) goto L_100315b7;
  /* 10031338 push 0x1003fd90 */
  push32((uint32_t)(0x1003fd90u));
  /* 1003133d push 0x10043628 */
  push32((uint32_t)(0x10043628u));
  /* 10031342 call eax */
  call_ind((uint32_t)(EAX), 0x10031344u);
  /* 10031344 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031349 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003134c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003134e je 0x100315b7 */
  if (C.zf) goto L_100315b7;
  /* 10031354 push 0x1003fd78 */
  push32((uint32_t)(0x1003fd78u));
  /* 10031359 push 0x10043620 */
  push32((uint32_t)(0x10043620u));
  /* 1003135e call eax */
  call_ind((uint32_t)(EAX), 0x10031360u);
  /* 10031360 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031365 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031368 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003136a je 0x100315b7 */
  if (C.zf) goto L_100315b7;
  /* 10031370 push 0x1003fd60 */
  push32((uint32_t)(0x1003fd60u));
  /* 10031375 push 0x10043618 */
  push32((uint32_t)(0x10043618u));
  /* 1003137a call eax */
  call_ind((uint32_t)(EAX), 0x1003137cu);
  /* 1003137c mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031381 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031384 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031386 je 0x100315b7 */
  if (C.zf) goto L_100315b7;
  /* 1003138c push 0x1003fd48 */
  push32((uint32_t)(0x1003fd48u));
  /* 10031391 push 0x100462e8 */
  push32((uint32_t)(0x100462e8u));
  /* 10031396 call eax */
  call_ind((uint32_t)(EAX), 0x10031398u);
  /* 10031398 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 1003139d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100313a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100313a2 je 0x100315b7 */
  if (C.zf) goto L_100315b7;
  /* 100313a8 push 0x1003fd30 */
  push32((uint32_t)(0x1003fd30u));
  /* 100313ad push 0x100462e0 */
  push32((uint32_t)(0x100462e0u));
  /* 100313b2 call eax */
  call_ind((uint32_t)(EAX), 0x100313b4u);
  /* 100313b4 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 100313b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100313bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100313be je 0x100315b7 */
  if (C.zf) goto L_100315b7;
  /* 100313c4 push 0x1003fd18 */
  push32((uint32_t)(0x1003fd18u));
  /* 100313c9 push 0x100462d8 */
  push32((uint32_t)(0x100462d8u));
  /* 100313ce call eax */
  call_ind((uint32_t)(EAX), 0x100313d0u);
  /* 100313d0 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 100313d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100313d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100313da je 0x100315b7 */
  if (C.zf) goto L_100315b7;
  /* 100313e0 push 0x1003fd04 */
  push32((uint32_t)(0x1003fd04u));
  /* 100313e5 push 0x10046360 */
  push32((uint32_t)(0x10046360u));
  /* 100313ea call eax */
  call_ind((uint32_t)(EAX), 0x100313ecu);
  /* 100313ec mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 100313f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100313f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100313f6 je 0x100315b7 */
  if (C.zf) goto L_100315b7;
  /* 100313fc push 0x1003fcec */
  push32((uint32_t)(0x1003fcecu));
  /* 10031401 push 0x10046358 */
  push32((uint32_t)(0x10046358u));
  /* 10031406 call eax */
  call_ind((uint32_t)(EAX), 0x10031408u);
  /* 10031408 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 1003140d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031410 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031412 je 0x100315b7 */
  if (C.zf) goto L_100315b7;
  /* 10031418 push 0x1003fcd4 */
  push32((uint32_t)(0x1003fcd4u));
  /* 1003141d push 0x100463a8 */
  push32((uint32_t)(0x100463a8u));
  /* 10031422 call eax */
  call_ind((uint32_t)(EAX), 0x10031424u);
  /* 10031424 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031429 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003142c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003142e je 0x100315b7 */
  if (C.zf) goto L_100315b7;
  /* 10031434 push 0x1003fcbc */
  push32((uint32_t)(0x1003fcbcu));
  /* 10031439 push 0x100463a0 */
  push32((uint32_t)(0x100463a0u));
  /* 1003143e call eax */
  call_ind((uint32_t)(EAX), 0x10031440u);
  /* 10031440 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031445 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031448 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003144a je 0x100315b7 */
  if (C.zf) goto L_100315b7;
  /* 10031450 push 0x1003fca4 */
  push32((uint32_t)(0x1003fca4u));
  /* 10031455 push 0x10046398 */
  push32((uint32_t)(0x10046398u));
  /* 1003145a call eax */
  call_ind((uint32_t)(EAX), 0x1003145cu);
  /* 1003145c mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031461 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031464 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031466 je 0x100315b7 */
  if (C.zf) goto L_100315b7;
  /* 1003146c push 0x1003fc8c */
  push32((uint32_t)(0x1003fc8cu));
  /* 10031471 push 0x10046390 */
  push32((uint32_t)(0x10046390u));
  /* 10031476 call eax */
  call_ind((uint32_t)(EAX), 0x10031478u);
  /* 10031478 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 1003147d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031480 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031482 je 0x100315b7 */
  if (C.zf) goto L_100315b7;
  /* 10031488 push 0x1003fd90 */
  push32((uint32_t)(0x1003fd90u));
  /* 1003148d push 0x10043628 */
  push32((uint32_t)(0x10043628u));
  /* 10031492 call eax */
  call_ind((uint32_t)(EAX), 0x10031494u);
  /* 10031494 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031499 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003149c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003149e je 0x100315b7 */
  if (C.zf) goto L_100315b7;
  /* 100314a4 push 0x1003fd78 */
  push32((uint32_t)(0x1003fd78u));
  /* 100314a9 push 0x10043620 */
  push32((uint32_t)(0x10043620u));
  /* 100314ae call eax */
  call_ind((uint32_t)(EAX), 0x100314b0u);
  /* 100314b0 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 100314b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100314b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100314ba je 0x100315b7 */
  if (C.zf) goto L_100315b7;
  /* 100314c0 push 0x1003fd60 */
  push32((uint32_t)(0x1003fd60u));
  /* 100314c5 push 0x10043618 */
  push32((uint32_t)(0x10043618u));
  /* 100314ca call eax */
  call_ind((uint32_t)(EAX), 0x100314ccu);
  /* 100314cc mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 100314d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100314d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100314d6 je 0x100315b7 */
  if (C.zf) goto L_100315b7;
  /* 100314dc push 0x1003fd48 */
  push32((uint32_t)(0x1003fd48u));
  /* 100314e1 push 0x100462e8 */
  push32((uint32_t)(0x100462e8u));
  /* 100314e6 call eax */
  call_ind((uint32_t)(EAX), 0x100314e8u);
  /* 100314e8 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 100314ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100314f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100314f2 je 0x100315b7 */
  if (C.zf) goto L_100315b7;
  /* 100314f8 push 0x1003fd30 */
  push32((uint32_t)(0x1003fd30u));
  /* 100314fd push 0x100462e0 */
  push32((uint32_t)(0x100462e0u));
  /* 10031502 call eax */
  call_ind((uint32_t)(EAX), 0x10031504u);
  /* 10031504 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031509 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003150c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003150e je 0x100315b7 */
  if (C.zf) goto L_100315b7;
  /* 10031514 push 0x1003fd18 */
  push32((uint32_t)(0x1003fd18u));
  /* 10031519 push 0x100462d8 */
  push32((uint32_t)(0x100462d8u));
  /* 1003151e call eax */
  call_ind((uint32_t)(EAX), 0x10031520u);
  /* 10031520 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031525 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031528 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003152a je 0x100315b7 */
  if (C.zf) goto L_100315b7;
  /* 10031530 push 0x1003fd04 */
  push32((uint32_t)(0x1003fd04u));
  /* 10031535 push 0x10046360 */
  push32((uint32_t)(0x10046360u));
  /* 1003153a call eax */
  call_ind((uint32_t)(EAX), 0x1003153cu);
  /* 1003153c mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031541 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031544 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031546 je 0x100315b7 */
  if (C.zf) goto L_100315b7;
  /* 10031548 push 0x1003fcec */
  push32((uint32_t)(0x1003fcecu));
  /* 1003154d push 0x10046358 */
  push32((uint32_t)(0x10046358u));
  /* 10031552 call eax */
  call_ind((uint32_t)(EAX), 0x10031554u);
  /* 10031554 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031559 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003155c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003155e je 0x100315b7 */
  if (C.zf) goto L_100315b7;
  /* 10031560 push 0x1003fcd4 */
  push32((uint32_t)(0x1003fcd4u));
  /* 10031565 push 0x100463a8 */
  push32((uint32_t)(0x100463a8u));
  /* 1003156a call eax */
  call_ind((uint32_t)(EAX), 0x1003156cu);
  /* 1003156c mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031571 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031574 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031576 je 0x100315b7 */
  if (C.zf) goto L_100315b7;
  /* 10031578 push 0x1003fcbc */
  push32((uint32_t)(0x1003fcbcu));
  /* 1003157d push 0x100463a0 */
  push32((uint32_t)(0x100463a0u));
  /* 10031582 call eax */
  call_ind((uint32_t)(EAX), 0x10031584u);
  /* 10031584 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031589 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003158c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003158e je 0x100315b7 */
  if (C.zf) goto L_100315b7;
  /* 10031590 push 0x1003fca4 */
  push32((uint32_t)(0x1003fca4u));
  /* 10031595 push 0x10046398 */
  push32((uint32_t)(0x10046398u));
  /* 1003159a call eax */
  call_ind((uint32_t)(EAX), 0x1003159cu);
  /* 1003159c mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 100315a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100315a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100315a6 je 0x100315b7 */
  if (C.zf) goto L_100315b7;
  /* 100315a8 push 0x1003fc8c */
  push32((uint32_t)(0x1003fc8cu));
  /* 100315ad push 0x10046390 */
  push32((uint32_t)(0x10046390u));
  /* 100315b2 call eax */
  call_ind((uint32_t)(EAX), 0x100315b4u);
  /* 100315b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100315b7:;
  /* 100315b7 mov eax, dword ptr [0x100463c8] */
  EAX = (r32((uint32_t)(0x100463c8)));
  /* 100315bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100315be je 0x100315cf */
  if (C.zf) goto L_100315cf;
  /* 100315c0 push 0x1003fc78 */
  push32((uint32_t)(0x1003fc78u));
  /* 100315c5 push 0x10045fb0 */
  push32((uint32_t)(0x10045fb0u));
  /* 100315ca call eax */
  call_ind((uint32_t)(EAX), 0x100315ccu);
  /* 100315cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100315cf:;
  /* 100315cf call dword ptr [0x100464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d0))), 0x100315d5u);
  /* 100315d5 mov dword ptr [0x10046284], eax */
  w32((uint32_t)(0x10046284), (EAX));
  /* 100315da call 0x100326a0 */
  push32(0x100315dfu); f_100326a0();
  /* 100315df mov ecx, eax */
  ECX = (EAX);
  /* 100315e1 mov eax, dword ptr [0x10046284] */
  EAX = (r32((uint32_t)(0x10046284)));
  /* 100315e6 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 100315ec mov dword ptr [eax*4 + 0x10045f68], ecx */
  w32((uint32_t)(EAX*4 + 0x10045f68), (ECX));
  /* 100315f3 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 100315f6 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 100315f9 lea edx, [ecx + ecx*4] */
  EDX = ((uint32_t)(ECX + ECX*4));
  /* 100315fc lea eax, [eax + edx*2] */
  EAX = ((uint32_t)(EAX + EDX*2));
  /* 100315ff shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10031602 mov dword ptr [eax + 0x10043ac0], 0 */
  w32((uint32_t)(EAX + 0x10043ac0), (0x0u));
  /* 1003160c mov dword ptr [eax + 0x10043c54], 0 */
  w32((uint32_t)(EAX + 0x10043c54), (0x0u));
  /* 10031616 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 1003161b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003161d je 0x1003162e */
  if (C.zf) goto L_1003162e;
  /* 1003161f push 0x1003fc5c */
  push32((uint32_t)(0x1003fc5cu));
  /* 10031624 push 0x100460a0 */
  push32((uint32_t)(0x100460a0u));
  /* 10031629 call eax */
  call_ind((uint32_t)(EAX), 0x1003162bu);
  /* 1003162b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1003162e:;
  /* 1003162e mov eax, dword ptr [0x100463c8] */
  EAX = (r32((uint32_t)(0x100463c8)));
  /* 10031633 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031635 je 0x10031646 */
  if (C.zf) goto L_10031646;
  /* 10031637 push 0x1003fc48 */
  push32((uint32_t)(0x1003fc48u));
  /* 1003163c push 0x10043858 */
  push32((uint32_t)(0x10043858u));
  /* 10031641 call eax */
  call_ind((uint32_t)(EAX), 0x10031643u);
  /* 10031643 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10031646:;
  /* 10031646 push esi */
  push32((uint32_t)(ESI));
  /* 10031647 push edi */
  push32((uint32_t)(EDI));
  /* 10031648 call 0x100326a0 */
  push32(0x1003164du); f_100326a0();
  /* 1003164d mov edi, 0x1003fc38 */
  EDI = (0x1003fc38u);
  /* 10031652 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10031655 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10031657 lea edx, [esp + 8] */
  EDX = ((uint32_t)(ESP + 0x8));
  /* 1003165b repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1003165d not ecx */
  ECX = (~(ECX));
  /* 1003165f sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10031661 mov eax, ecx */
  EAX = (ECX);
  /* 10031663 mov esi, edi */
  ESI = (EDI);
  /* 10031665 mov edi, edx */
  EDI = (EDX);
  /* 10031667 lea edx, [esp + 0x38] */
  EDX = ((uint32_t)(ESP + 0x38));
  /* 1003166b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1003166e rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10031670 mov ecx, eax */
  ECX = (EAX);
  /* 10031672 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10031674 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10031677 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 10031679 mov edi, 0x1003fc24 */
  EDI = (0x1003fc24u);
  /* 1003167e or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10031681 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10031683 not ecx */
  ECX = (~(ECX));
  /* 10031685 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10031687 mov eax, ecx */
  EAX = (ECX);
  /* 10031689 mov esi, edi */
  ESI = (EDI);
  /* 1003168b mov edi, edx */
  EDI = (EDX);
  /* 1003168d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10031690 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10031692 mov ecx, eax */
  ECX = (EAX);
  /* 10031694 mov eax, dword ptr [0x100463c8] */
  EAX = (r32((uint32_t)(0x100463c8)));
  /* 10031699 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1003169c rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 1003169e pop edi */
  EDI = (pop32());
  /* 1003169f pop esi */
  ESI = (pop32());
  /* 100316a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100316a2 je 0x100316e8 */
  if (C.zf) goto L_100316e8;
  /* 100316a4 push 0x1003fc0c */
  push32((uint32_t)(0x1003fc0cu));
  /* 100316a9 push 0x10046248 */
  push32((uint32_t)(0x10046248u));
  /* 100316ae call eax */
  call_ind((uint32_t)(EAX), 0x100316b0u);
  /* 100316b0 mov eax, dword ptr [0x100463c8] */
  EAX = (r32((uint32_t)(0x100463c8)));
  /* 100316b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100316b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100316ba je 0x100316e8 */
  if (C.zf) goto L_100316e8;
  /* 100316bc push 0x1003fbf4 */
  push32((uint32_t)(0x1003fbf4u));
  /* 100316c1 push 0x100462f8 */
  push32((uint32_t)(0x100462f8u));
  /* 100316c6 call eax */
  call_ind((uint32_t)(EAX), 0x100316c8u);
  /* 100316c8 mov eax, dword ptr [0x100463c8] */
  EAX = (r32((uint32_t)(0x100463c8)));
  /* 100316cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100316d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100316d2 je 0x100316e8 */
  if (C.zf) goto L_100316e8;
  /* 100316d4 push 0x1003fbe0 */
  push32((uint32_t)(0x1003fbe0u));
  /* 100316d9 push 0x100436d0 */
  push32((uint32_t)(0x100436d0u));
  /* 100316de call eax */
  call_ind((uint32_t)(EAX), 0x100316e0u);
  /* 100316e0 mov eax, dword ptr [0x100463c8] */
  EAX = (r32((uint32_t)(0x100463c8)));
  /* 100316e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100316e8:;
  /* 100316e8 mov ecx, dword ptr [0x100463cc] */
  ECX = (r32((uint32_t)(0x100463cc)));
  /* 100316ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100316f0 je 0x1003171e */
  if (C.zf) goto L_1003171e;
  /* 100316f2 push 0x1003fbc8 */
  push32((uint32_t)(0x1003fbc8u));
  /* 100316f7 push 0x10046230 */
  push32((uint32_t)(0x10046230u));
  /* 100316fc call ecx */
  call_ind((uint32_t)(ECX), 0x100316feu);
  /* 100316fe mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031703 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031706 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031708 je 0x10031719 */
  if (C.zf) goto L_10031719;
  /* 1003170a push 0x1003fbb0 */
  push32((uint32_t)(0x1003fbb0u));
  /* 1003170f push 0x10045f98 */
  push32((uint32_t)(0x10045f98u));
  /* 10031714 call eax */
  call_ind((uint32_t)(EAX), 0x10031716u);
  /* 10031716 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10031719:;
  /* 10031719 mov eax, dword ptr [0x100463c8] */
  EAX = (r32((uint32_t)(0x100463c8)));
L_1003171e:;
  /* 1003171e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031720 je 0x10031731 */
  if (C.zf) goto L_10031731;
  /* 10031722 push 0x1003fb9c */
  push32((uint32_t)(0x1003fb9cu));
  /* 10031727 push 0x10043610 */
  push32((uint32_t)(0x10043610u));
  /* 1003172c call eax */
  call_ind((uint32_t)(EAX), 0x1003172eu);
  /* 1003172e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10031731:;
  /* 10031731 push 0x1003fb88 */
  push32((uint32_t)(0x1003fb88u));
  /* 10031736 call 0x10032670 */
  push32(0x1003173bu); f_10032670();
  /* 1003173b mov eax, dword ptr [0x100463c8] */
  EAX = (r32((uint32_t)(0x100463c8)));
  /* 10031740 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031743 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031745 je 0x10031a72 */
  if (C.zf) goto L_10031a72;
  /* 1003174b push 0x1003fb88 */
  push32((uint32_t)(0x1003fb88u));
  /* 10031750 push 0x10043658 */
  push32((uint32_t)(0x10043658u));
  /* 10031755 call eax */
  call_ind((uint32_t)(EAX), 0x10031757u);
  /* 10031757 mov eax, dword ptr [0x100463c8] */
  EAX = (r32((uint32_t)(0x100463c8)));
  /* 1003175c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003175f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031761 je 0x10031a72 */
  if (C.zf) goto L_10031a72;
  /* 10031767 push 0x1003fb74 */
  push32((uint32_t)(0x1003fb74u));
  /* 1003176c push 0x10046160 */
  push32((uint32_t)(0x10046160u));
  /* 10031771 call eax */
  call_ind((uint32_t)(EAX), 0x10031773u);
  /* 10031773 mov eax, dword ptr [0x100463c8] */
  EAX = (r32((uint32_t)(0x100463c8)));
  /* 10031778 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003177b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003177d je 0x10031a72 */
  if (C.zf) goto L_10031a72;
  /* 10031783 push 0x1003fb60 */
  push32((uint32_t)(0x1003fb60u));
  /* 10031788 push 0x10046130 */
  push32((uint32_t)(0x10046130u));
  /* 1003178d call eax */
  call_ind((uint32_t)(EAX), 0x1003178fu);
  /* 1003178f mov eax, dword ptr [0x100463c8] */
  EAX = (r32((uint32_t)(0x100463c8)));
  /* 10031794 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031797 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031799 je 0x10031a72 */
  if (C.zf) goto L_10031a72;
  /* 1003179f push 0x1003fb4c */
  push32((uint32_t)(0x1003fb4cu));
  /* 100317a4 push 0x100460b0 */
  push32((uint32_t)(0x100460b0u));
  /* 100317a9 call eax */
  call_ind((uint32_t)(EAX), 0x100317abu);
  /* 100317ab mov eax, dword ptr [0x100463c8] */
  EAX = (r32((uint32_t)(0x100463c8)));
  /* 100317b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100317b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100317b5 je 0x10031a72 */
  if (C.zf) goto L_10031a72;
  /* 100317bb lea ecx, [esp] */
  ECX = ((uint32_t)(ESP));
  /* 100317bf push ecx */
  push32((uint32_t)(ECX));
  /* 100317c0 push 0x10046380 */
  push32((uint32_t)(0x10046380u));
  /* 100317c5 call eax */
  call_ind((uint32_t)(EAX), 0x100317c7u);
  /* 100317c7 mov eax, dword ptr [0x100463c8] */
  EAX = (r32((uint32_t)(0x100463c8)));
  /* 100317cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100317cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100317d1 je 0x10031a72 */
  if (C.zf) goto L_10031a72;
  /* 100317d7 push 0x1003fb40 */
  push32((uint32_t)(0x1003fb40u));
  /* 100317dc push 0x10046300 */
  push32((uint32_t)(0x10046300u));
  /* 100317e1 call eax */
  call_ind((uint32_t)(EAX), 0x100317e3u);
  /* 100317e3 mov eax, dword ptr [0x100463c8] */
  EAX = (r32((uint32_t)(0x100463c8)));
  /* 100317e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100317eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100317ed je 0x10031a72 */
  if (C.zf) goto L_10031a72;
  /* 100317f3 lea edx, [esp + 0x30] */
  EDX = ((uint32_t)(ESP + 0x30));
  /* 100317f7 push edx */
  push32((uint32_t)(EDX));
  /* 100317f8 push 0x10045f50 */
  push32((uint32_t)(0x10045f50u));
  /* 100317fd call eax */
  call_ind((uint32_t)(EAX), 0x100317ffu);
  /* 100317ff mov eax, dword ptr [0x100463c8] */
  EAX = (r32((uint32_t)(0x100463c8)));
  /* 10031804 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031807 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031809 je 0x10031a72 */
  if (C.zf) goto L_10031a72;
  /* 1003180f push 0x1003fb34 */
  push32((uint32_t)(0x1003fb34u));
  /* 10031814 push 0x10046340 */
  push32((uint32_t)(0x10046340u));
  /* 10031819 call eax */
  call_ind((uint32_t)(EAX), 0x1003181bu);
  /* 1003181b mov eax, dword ptr [0x100463c8] */
  EAX = (r32((uint32_t)(0x100463c8)));
  /* 10031820 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031823 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031825 je 0x10031a72 */
  if (C.zf) goto L_10031a72;
  /* 1003182b push 0x1003fb28 */
  push32((uint32_t)(0x1003fb28u));
  /* 10031830 push 0x10043638 */
  push32((uint32_t)(0x10043638u));
  /* 10031835 call eax */
  call_ind((uint32_t)(EAX), 0x10031837u);
  /* 10031837 mov eax, dword ptr [0x100463c8] */
  EAX = (r32((uint32_t)(0x100463c8)));
  /* 1003183c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003183f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031841 je 0x10031a72 */
  if (C.zf) goto L_10031a72;
  /* 10031847 push 0x1003fb18 */
  push32((uint32_t)(0x1003fb18u));
  /* 1003184c push 0x10043898 */
  push32((uint32_t)(0x10043898u));
  /* 10031851 call eax */
  call_ind((uint32_t)(EAX), 0x10031853u);
  /* 10031853 mov eax, dword ptr [0x100463c8] */
  EAX = (r32((uint32_t)(0x100463c8)));
  /* 10031858 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003185b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003185d je 0x10031a72 */
  if (C.zf) goto L_10031a72;
  /* 10031863 push 0x1003fb0c */
  push32((uint32_t)(0x1003fb0cu));
  /* 10031868 push 0x100461c0 */
  push32((uint32_t)(0x100461c0u));
  /* 1003186d call eax */
  call_ind((uint32_t)(EAX), 0x1003186fu);
  /* 1003186f mov eax, dword ptr [0x100463c8] */
  EAX = (r32((uint32_t)(0x100463c8)));
  /* 10031874 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031877 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031879 je 0x10031a72 */
  if (C.zf) goto L_10031a72;
  /* 1003187f push 0x1003fb00 */
  push32((uint32_t)(0x1003fb00u));
  /* 10031884 push 0x10045f88 */
  push32((uint32_t)(0x10045f88u));
  /* 10031889 call eax */
  call_ind((uint32_t)(EAX), 0x1003188bu);
  /* 1003188b mov eax, dword ptr [0x100463c8] */
  EAX = (r32((uint32_t)(0x100463c8)));
  /* 10031890 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031893 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031895 je 0x10031a72 */
  if (C.zf) goto L_10031a72;
  /* 1003189b push 0x1003faf4 */
  push32((uint32_t)(0x1003faf4u));
  /* 100318a0 push 0x10045fa8 */
  push32((uint32_t)(0x10045fa8u));
  /* 100318a5 call eax */
  call_ind((uint32_t)(EAX), 0x100318a7u);
  /* 100318a7 mov eax, dword ptr [0x100463c8] */
  EAX = (r32((uint32_t)(0x100463c8)));
  /* 100318ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100318af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100318b1 je 0x10031a72 */
  if (C.zf) goto L_10031a72;
  /* 100318b7 push 0x1003fae0 */
  push32((uint32_t)(0x1003fae0u));
  /* 100318bc push 0x10046220 */
  push32((uint32_t)(0x10046220u));
  /* 100318c1 call eax */
  call_ind((uint32_t)(EAX), 0x100318c3u);
  /* 100318c3 mov eax, dword ptr [0x100463c8] */
  EAX = (r32((uint32_t)(0x100463c8)));
  /* 100318c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100318cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100318cd je 0x10031a72 */
  if (C.zf) goto L_10031a72;
  /* 100318d3 push 0x1003fad4 */
  push32((uint32_t)(0x1003fad4u));
  /* 100318d8 push 0x10046228 */
  push32((uint32_t)(0x10046228u));
  /* 100318dd call eax */
  call_ind((uint32_t)(EAX), 0x100318dfu);
  /* 100318df mov eax, dword ptr [0x100463c8] */
  EAX = (r32((uint32_t)(0x100463c8)));
  /* 100318e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100318e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100318e9 je 0x10031a72 */
  if (C.zf) goto L_10031a72;
  /* 100318ef push 0x1003fac8 */
  push32((uint32_t)(0x1003fac8u));
  /* 100318f4 push 0x10045fa0 */
  push32((uint32_t)(0x10045fa0u));
  /* 100318f9 call eax */
  call_ind((uint32_t)(EAX), 0x100318fbu);
  /* 100318fb mov eax, dword ptr [0x100463c8] */
  EAX = (r32((uint32_t)(0x100463c8)));
  /* 10031900 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031903 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031905 je 0x10031a72 */
  if (C.zf) goto L_10031a72;
  /* 1003190b push 0x1003fab8 */
  push32((uint32_t)(0x1003fab8u));
  /* 10031910 push 0x10045ef0 */
  push32((uint32_t)(0x10045ef0u));
  /* 10031915 call eax */
  call_ind((uint32_t)(EAX), 0x10031917u);
  /* 10031917 mov eax, dword ptr [0x100463c8] */
  EAX = (r32((uint32_t)(0x100463c8)));
  /* 1003191c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003191f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031921 je 0x10031a72 */
  if (C.zf) goto L_10031a72;
  /* 10031927 push 0x1003faa0 */
  push32((uint32_t)(0x1003faa0u));
  /* 1003192c push 0x100460a8 */
  push32((uint32_t)(0x100460a8u));
  /* 10031931 call eax */
  call_ind((uint32_t)(EAX), 0x10031933u);
  /* 10031933 mov eax, dword ptr [0x100463c8] */
  EAX = (r32((uint32_t)(0x100463c8)));
  /* 10031938 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003193b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003193d je 0x10031a72 */
  if (C.zf) goto L_10031a72;
  /* 10031943 push 0x1003fa90 */
  push32((uint32_t)(0x1003fa90u));
  /* 10031948 push 0x10045fb8 */
  push32((uint32_t)(0x10045fb8u));
  /* 1003194d call eax */
  call_ind((uint32_t)(EAX), 0x1003194fu);
  /* 1003194f mov eax, dword ptr [0x100463c8] */
  EAX = (r32((uint32_t)(0x100463c8)));
  /* 10031954 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031957 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031959 je 0x10031a72 */
  if (C.zf) goto L_10031a72;
  /* 1003195f push 0x1003fa7c */
  push32((uint32_t)(0x1003fa7cu));
  /* 10031964 push 0x100435e8 */
  push32((uint32_t)(0x100435e8u));
  /* 10031969 call eax */
  call_ind((uint32_t)(EAX), 0x1003196bu);
  /* 1003196b mov eax, dword ptr [0x100463c8] */
  EAX = (r32((uint32_t)(0x100463c8)));
  /* 10031970 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031973 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031975 je 0x10031a72 */
  if (C.zf) goto L_10031a72;
  /* 1003197b push 0x1003fa70 */
  push32((uint32_t)(0x1003fa70u));
  /* 10031980 push 0x10043848 */
  push32((uint32_t)(0x10043848u));
  /* 10031985 call eax */
  call_ind((uint32_t)(EAX), 0x10031987u);
  /* 10031987 mov eax, dword ptr [0x100463c8] */
  EAX = (r32((uint32_t)(0x100463c8)));
  /* 1003198c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003198f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031991 je 0x10031a72 */
  if (C.zf) goto L_10031a72;
  /* 10031997 push 0x1003fa64 */
  push32((uint32_t)(0x1003fa64u));
  /* 1003199c push 0x100438a8 */
  push32((uint32_t)(0x100438a8u));
  /* 100319a1 call eax */
  call_ind((uint32_t)(EAX), 0x100319a3u);
  /* 100319a3 mov eax, dword ptr [0x100463c8] */
  EAX = (r32((uint32_t)(0x100463c8)));
  /* 100319a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100319ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100319ad je 0x10031a72 */
  if (C.zf) goto L_10031a72;
  /* 100319b3 push 0x1003fa58 */
  push32((uint32_t)(0x1003fa58u));
  /* 100319b8 push 0x100461b8 */
  push32((uint32_t)(0x100461b8u));
  /* 100319bd call eax */
  call_ind((uint32_t)(EAX), 0x100319bfu);
  /* 100319bf mov eax, dword ptr [0x100463c8] */
  EAX = (r32((uint32_t)(0x100463c8)));
  /* 100319c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100319c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100319c9 je 0x10031a72 */
  if (C.zf) goto L_10031a72;
  /* 100319cf push 0x1003fa44 */
  push32((uint32_t)(0x1003fa44u));
  /* 100319d4 push 0x100460c8 */
  push32((uint32_t)(0x100460c8u));
  /* 100319d9 call eax */
  call_ind((uint32_t)(EAX), 0x100319dbu);
  /* 100319db mov eax, dword ptr [0x100463c8] */
  EAX = (r32((uint32_t)(0x100463c8)));
  /* 100319e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100319e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100319e5 je 0x10031a72 */
  if (C.zf) goto L_10031a72;
  /* 100319eb push 0x1003fa38 */
  push32((uint32_t)(0x1003fa38u));
  /* 100319f0 push 0x100462a8 */
  push32((uint32_t)(0x100462a8u));
  /* 100319f5 call eax */
  call_ind((uint32_t)(EAX), 0x100319f7u);
  /* 100319f7 mov eax, dword ptr [0x100463c8] */
  EAX = (r32((uint32_t)(0x100463c8)));
  /* 100319fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100319ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031a01 je 0x10031a72 */
  if (C.zf) goto L_10031a72;
  /* 10031a03 push 0x1003fa2c */
  push32((uint32_t)(0x1003fa2cu));
  /* 10031a08 push 0x100438b8 */
  push32((uint32_t)(0x100438b8u));
  /* 10031a0d call eax */
  call_ind((uint32_t)(EAX), 0x10031a0fu);
  /* 10031a0f mov eax, dword ptr [0x100463c8] */
  EAX = (r32((uint32_t)(0x100463c8)));
  /* 10031a14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031a17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031a19 je 0x10031a72 */
  if (C.zf) goto L_10031a72;
  /* 10031a1b push 0x1003fa20 */
  push32((uint32_t)(0x1003fa20u));
  /* 10031a20 push 0x10045f60 */
  push32((uint32_t)(0x10045f60u));
  /* 10031a25 call eax */
  call_ind((uint32_t)(EAX), 0x10031a27u);
  /* 10031a27 mov eax, dword ptr [0x100463c8] */
  EAX = (r32((uint32_t)(0x100463c8)));
  /* 10031a2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031a2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031a31 je 0x10031a72 */
  if (C.zf) goto L_10031a72;
  /* 10031a33 push 0x1003fa14 */
  push32((uint32_t)(0x1003fa14u));
  /* 10031a38 push 0x10046368 */
  push32((uint32_t)(0x10046368u));
  /* 10031a3d call eax */
  call_ind((uint32_t)(EAX), 0x10031a3fu);
  /* 10031a3f mov eax, dword ptr [0x100463c8] */
  EAX = (r32((uint32_t)(0x100463c8)));
  /* 10031a44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031a47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031a49 je 0x10031a72 */
  if (C.zf) goto L_10031a72;
  /* 10031a4b push 0x1003fa08 */
  push32((uint32_t)(0x1003fa08u));
  /* 10031a50 push 0x10045f58 */
  push32((uint32_t)(0x10045f58u));
  /* 10031a55 call eax */
  call_ind((uint32_t)(EAX), 0x10031a57u);
  /* 10031a57 mov eax, dword ptr [0x100463c8] */
  EAX = (r32((uint32_t)(0x100463c8)));
  /* 10031a5c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031a5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031a61 je 0x10031a72 */
  if (C.zf) goto L_10031a72;
  /* 10031a63 push 0x1003f9f8 */
  push32((uint32_t)(0x1003f9f8u));
  /* 10031a68 push 0x10043870 */
  push32((uint32_t)(0x10043870u));
  /* 10031a6d call eax */
  call_ind((uint32_t)(EAX), 0x10031a6fu);
  /* 10031a6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10031a72:;
  /* 10031a72 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031a77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031a79 je 0x10031c72 */
  if (C.zf) goto L_10031c72;
  /* 10031a7f push 0x1003f9e4 */
  push32((uint32_t)(0x1003f9e4u));
  /* 10031a84 push 0x10046348 */
  push32((uint32_t)(0x10046348u));
  /* 10031a89 call eax */
  call_ind((uint32_t)(EAX), 0x10031a8bu);
  /* 10031a8b mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031a90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031a93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031a95 je 0x10031c72 */
  if (C.zf) goto L_10031c72;
  /* 10031a9b push 0x1003f9d0 */
  push32((uint32_t)(0x1003f9d0u));
  /* 10031aa0 push 0x100460d0 */
  push32((uint32_t)(0x100460d0u));
  /* 10031aa5 call eax */
  call_ind((uint32_t)(EAX), 0x10031aa7u);
  /* 10031aa7 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031aac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031aaf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031ab1 je 0x10031c72 */
  if (C.zf) goto L_10031c72;
  /* 10031ab7 push 0x1003f9c8 */
  push32((uint32_t)(0x1003f9c8u));
  /* 10031abc push 0x10043630 */
  push32((uint32_t)(0x10043630u));
  /* 10031ac1 call eax */
  call_ind((uint32_t)(EAX), 0x10031ac3u);
  /* 10031ac3 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031ac8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031acb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031acd je 0x10031c72 */
  if (C.zf) goto L_10031c72;
  /* 10031ad3 push 0x1003f9b0 */
  push32((uint32_t)(0x1003f9b0u));
  /* 10031ad8 push 0x10046320 */
  push32((uint32_t)(0x10046320u));
  /* 10031add call eax */
  call_ind((uint32_t)(EAX), 0x10031adfu);
  /* 10031adf mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031ae4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031ae7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031ae9 je 0x10031c72 */
  if (C.zf) goto L_10031c72;
  /* 10031aef push 0x1003f998 */
  push32((uint32_t)(0x1003f998u));
  /* 10031af4 push 0x10046328 */
  push32((uint32_t)(0x10046328u));
  /* 10031af9 call eax */
  call_ind((uint32_t)(EAX), 0x10031afbu);
  /* 10031afb mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031b00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031b03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031b05 je 0x10031c72 */
  if (C.zf) goto L_10031c72;
  /* 10031b0b push 0x1003f980 */
  push32((uint32_t)(0x1003f980u));
  /* 10031b10 push 0x10046310 */
  push32((uint32_t)(0x10046310u));
  /* 10031b15 call eax */
  call_ind((uint32_t)(EAX), 0x10031b17u);
  /* 10031b17 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031b1c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031b1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031b21 je 0x10031c72 */
  if (C.zf) goto L_10031c72;
  /* 10031b27 push 0x1003f968 */
  push32((uint32_t)(0x1003f968u));
  /* 10031b2c push 0x10046318 */
  push32((uint32_t)(0x10046318u));
  /* 10031b31 call eax */
  call_ind((uint32_t)(EAX), 0x10031b33u);
  /* 10031b33 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031b38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031b3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031b3d je 0x10031c72 */
  if (C.zf) goto L_10031c72;
  /* 10031b43 push 0x1003f950 */
  push32((uint32_t)(0x1003f950u));
  /* 10031b48 push 0x10046330 */
  push32((uint32_t)(0x10046330u));
  /* 10031b4d call eax */
  call_ind((uint32_t)(EAX), 0x10031b4fu);
  /* 10031b4f mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031b54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031b57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031b59 je 0x10031c72 */
  if (C.zf) goto L_10031c72;
  /* 10031b5f push 0x1003f938 */
  push32((uint32_t)(0x1003f938u));
  /* 10031b64 push 0x10046268 */
  push32((uint32_t)(0x10046268u));
  /* 10031b69 call eax */
  call_ind((uint32_t)(EAX), 0x10031b6bu);
  /* 10031b6b mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031b70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031b73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031b75 je 0x10031c72 */
  if (C.zf) goto L_10031c72;
  /* 10031b7b push 0x1003f920 */
  push32((uint32_t)(0x1003f920u));
  /* 10031b80 push 0x10046250 */
  push32((uint32_t)(0x10046250u));
  /* 10031b85 call eax */
  call_ind((uint32_t)(EAX), 0x10031b87u);
  /* 10031b87 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031b8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031b8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031b91 je 0x10031c72 */
  if (C.zf) goto L_10031c72;
  /* 10031b97 push 0x1003f908 */
  push32((uint32_t)(0x1003f908u));
  /* 10031b9c push 0x10046258 */
  push32((uint32_t)(0x10046258u));
  /* 10031ba1 call eax */
  call_ind((uint32_t)(EAX), 0x10031ba3u);
  /* 10031ba3 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031ba8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031bab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031bad je 0x10031c72 */
  if (C.zf) goto L_10031c72;
  /* 10031bb3 push 0x1003f8f0 */
  push32((uint32_t)(0x1003f8f0u));
  /* 10031bb8 push 0x10046270 */
  push32((uint32_t)(0x10046270u));
  /* 10031bbd call eax */
  call_ind((uint32_t)(EAX), 0x10031bbfu);
  /* 10031bbf mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031bc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031bc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031bc9 je 0x10031c72 */
  if (C.zf) goto L_10031c72;
  /* 10031bcf push 0x1003f8d8 */
  push32((uint32_t)(0x1003f8d8u));
  /* 10031bd4 push 0x10046278 */
  push32((uint32_t)(0x10046278u));
  /* 10031bd9 call eax */
  call_ind((uint32_t)(EAX), 0x10031bdbu);
  /* 10031bdb mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031be0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031be3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031be5 je 0x10031c72 */
  if (C.zf) goto L_10031c72;
  /* 10031beb push 0x1003f8c0 */
  push32((uint32_t)(0x1003f8c0u));
  /* 10031bf0 push 0x100438e0 */
  push32((uint32_t)(0x100438e0u));
  /* 10031bf5 call eax */
  call_ind((uint32_t)(EAX), 0x10031bf7u);
  /* 10031bf7 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031bfc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031bff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031c01 je 0x10031c72 */
  if (C.zf) goto L_10031c72;
  /* 10031c03 push 0x1003f8a8 */
  push32((uint32_t)(0x1003f8a8u));
  /* 10031c08 push 0x100438e8 */
  push32((uint32_t)(0x100438e8u));
  /* 10031c0d call eax */
  call_ind((uint32_t)(EAX), 0x10031c0fu);
  /* 10031c0f mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031c14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031c17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031c19 je 0x10031c72 */
  if (C.zf) goto L_10031c72;
  /* 10031c1b push 0x1003f890 */
  push32((uint32_t)(0x1003f890u));
  /* 10031c20 push 0x100438d8 */
  push32((uint32_t)(0x100438d8u));
  /* 10031c25 call eax */
  call_ind((uint32_t)(EAX), 0x10031c27u);
  /* 10031c27 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031c2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031c2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031c31 je 0x10031c72 */
  if (C.zf) goto L_10031c72;
  /* 10031c33 push 0x1003f878 */
  push32((uint32_t)(0x1003f878u));
  /* 10031c38 push 0x10045f48 */
  push32((uint32_t)(0x10045f48u));
  /* 10031c3d call eax */
  call_ind((uint32_t)(EAX), 0x10031c3fu);
  /* 10031c3f mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031c44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031c47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031c49 je 0x10031c72 */
  if (C.zf) goto L_10031c72;
  /* 10031c4b push 0x1003f860 */
  push32((uint32_t)(0x1003f860u));
  /* 10031c50 push 0x10045f38 */
  push32((uint32_t)(0x10045f38u));
  /* 10031c55 call eax */
  call_ind((uint32_t)(EAX), 0x10031c57u);
  /* 10031c57 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031c5c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031c5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031c61 je 0x10031c72 */
  if (C.zf) goto L_10031c72;
  /* 10031c63 push 0x1003f848 */
  push32((uint32_t)(0x1003f848u));
  /* 10031c68 push 0x10045f40 */
  push32((uint32_t)(0x10045f40u));
  /* 10031c6d call eax */
  call_ind((uint32_t)(EAX), 0x10031c6fu);
  /* 10031c6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10031c72:;
  /* 10031c72 lea eax, [esp] */
  EAX = ((uint32_t)(ESP));
  /* 10031c76 push 0x1003f840 */
  push32((uint32_t)(0x1003f840u));
  /* 10031c7b push eax */
  push32((uint32_t)(EAX));
  /* 10031c7c call 0x10032f10 */
  push32(0x10031c81u); f_10032f10();
  /* 10031c81 push eax */
  push32((uint32_t)(EAX));
  /* 10031c82 push 0x10045fe8 */
  push32((uint32_t)(0x10045fe8u));
  /* 10031c87 call 0x10032680 */
  push32(0x10031c8cu); f_10032680();
  /* 10031c8c lea ecx, [esp + 0x10] */
  ECX = ((uint32_t)(ESP + 0x10));
  /* 10031c90 push 0x1003f838 */
  push32((uint32_t)(0x1003f838u));
  /* 10031c95 push ecx */
  push32((uint32_t)(ECX));
  /* 10031c96 call 0x10032f10 */
  push32(0x10031c9bu); f_10032f10();
  /* 10031c9b push eax */
  push32((uint32_t)(EAX));
  /* 10031c9c push 0x10045fe0 */
  push32((uint32_t)(0x10045fe0u));
  /* 10031ca1 call 0x10032680 */
  push32(0x10031ca6u); f_10032680();
  /* 10031ca6 lea edx, [esp + 0x20] */
  EDX = ((uint32_t)(ESP + 0x20));
  /* 10031caa push 0x1003f830 */
  push32((uint32_t)(0x1003f830u));
  /* 10031caf push edx */
  push32((uint32_t)(EDX));
  /* 10031cb0 call 0x10032f10 */
  push32(0x10031cb5u); f_10032f10();
  /* 10031cb5 push eax */
  push32((uint32_t)(EAX));
  /* 10031cb6 push 0x10045fd8 */
  push32((uint32_t)(0x10045fd8u));
  /* 10031cbb call 0x10032680 */
  push32(0x10031cc0u); f_10032680();
  /* 10031cc0 lea eax, [esp + 0x30] */
  EAX = ((uint32_t)(ESP + 0x30));
  /* 10031cc4 push 0x1003f828 */
  push32((uint32_t)(0x1003f828u));
  /* 10031cc9 push eax */
  push32((uint32_t)(EAX));
  /* 10031cca call 0x10032f10 */
  push32(0x10031ccfu); f_10032f10();
  /* 10031ccf push eax */
  push32((uint32_t)(EAX));
  /* 10031cd0 push 0x10045fd0 */
  push32((uint32_t)(0x10045fd0u));
  /* 10031cd5 call 0x10032680 */
  push32(0x10031cdau); f_10032680();
  /* 10031cda add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031cdd lea ecx, [esp] */
  ECX = ((uint32_t)(ESP));
  /* 10031ce1 push 0x1003f820 */
  push32((uint32_t)(0x1003f820u));
  /* 10031ce6 push ecx */
  push32((uint32_t)(ECX));
  /* 10031ce7 call 0x10032f10 */
  push32(0x10031cecu); f_10032f10();
  /* 10031cec push eax */
  push32((uint32_t)(EAX));
  /* 10031ced push 0x10045fc8 */
  push32((uint32_t)(0x10045fc8u));
  /* 10031cf2 call 0x10032680 */
  push32(0x10031cf7u); f_10032680();
  /* 10031cf7 lea edx, [esp + 0x10] */
  EDX = ((uint32_t)(ESP + 0x10));
  /* 10031cfb push 0x1003f818 */
  push32((uint32_t)(0x1003f818u));
  /* 10031d00 push edx */
  push32((uint32_t)(EDX));
  /* 10031d01 call 0x10032f10 */
  push32(0x10031d06u); f_10032f10();
  /* 10031d06 push eax */
  push32((uint32_t)(EAX));
  /* 10031d07 push 0x10045fc0 */
  push32((uint32_t)(0x10045fc0u));
  /* 10031d0c call 0x10032680 */
  push32(0x10031d11u); f_10032680();
  /* 10031d11 lea eax, [esp + 0x20] */
  EAX = ((uint32_t)(ESP + 0x20));
  /* 10031d15 push 0x1003f810 */
  push32((uint32_t)(0x1003f810u));
  /* 10031d1a push eax */
  push32((uint32_t)(EAX));
  /* 10031d1b call 0x10032f10 */
  push32(0x10031d20u); f_10032f10();
  /* 10031d20 push eax */
  push32((uint32_t)(EAX));
  /* 10031d21 push 0x10046100 */
  push32((uint32_t)(0x10046100u));
  /* 10031d26 call 0x10032680 */
  push32(0x10031d2bu); f_10032680();
  /* 10031d2b lea ecx, [esp + 0x30] */
  ECX = ((uint32_t)(ESP + 0x30));
  /* 10031d2f push 0x1003f808 */
  push32((uint32_t)(0x1003f808u));
  /* 10031d34 push ecx */
  push32((uint32_t)(ECX));
  /* 10031d35 call 0x10032f10 */
  push32(0x10031d3au); f_10032f10();
  /* 10031d3a push eax */
  push32((uint32_t)(EAX));
  /* 10031d3b push 0x100460f8 */
  push32((uint32_t)(0x100460f8u));
  /* 10031d40 call 0x10032680 */
  push32(0x10031d45u); f_10032680();
  /* 10031d45 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031d48 lea edx, [esp] */
  EDX = ((uint32_t)(ESP));
  /* 10031d4c push 0x1003f800 */
  push32((uint32_t)(0x1003f800u));
  /* 10031d51 push edx */
  push32((uint32_t)(EDX));
  /* 10031d52 call 0x10032f10 */
  push32(0x10031d57u); f_10032f10();
  /* 10031d57 push eax */
  push32((uint32_t)(EAX));
  /* 10031d58 push 0x100460f0 */
  push32((uint32_t)(0x100460f0u));
  /* 10031d5d call 0x10032680 */
  push32(0x10031d62u); f_10032680();
  /* 10031d62 lea eax, [esp + 0x10] */
  EAX = ((uint32_t)(ESP + 0x10));
  /* 10031d66 push 0x1003f7f8 */
  push32((uint32_t)(0x1003f7f8u));
  /* 10031d6b push eax */
  push32((uint32_t)(EAX));
  /* 10031d6c call 0x10032f10 */
  push32(0x10031d71u); f_10032f10();
  /* 10031d71 push eax */
  push32((uint32_t)(EAX));
  /* 10031d72 push 0x100460e8 */
  push32((uint32_t)(0x100460e8u));
  /* 10031d77 call 0x10032680 */
  push32(0x10031d7cu); f_10032680();
  /* 10031d7c lea ecx, [esp + 0x20] */
  ECX = ((uint32_t)(ESP + 0x20));
  /* 10031d80 push 0x1003f7f0 */
  push32((uint32_t)(0x1003f7f0u));
  /* 10031d85 push ecx */
  push32((uint32_t)(ECX));
  /* 10031d86 call 0x10032f10 */
  push32(0x10031d8bu); f_10032f10();
  /* 10031d8b push eax */
  push32((uint32_t)(EAX));
  /* 10031d8c push 0x100460d8 */
  push32((uint32_t)(0x100460d8u));
  /* 10031d91 call 0x10032680 */
  push32(0x10031d96u); f_10032680();
  /* 10031d96 push 0x1003f7e8 */
  push32((uint32_t)(0x1003f7e8u));
  /* 10031d9b lea edx, [esp + 0x34] */
  EDX = ((uint32_t)(ESP + 0x34));
  /* 10031d9f push edx */
  push32((uint32_t)(EDX));
  /* 10031da0 call 0x10032f10 */
  push32(0x10031da5u); f_10032f10();
  /* 10031da5 push eax */
  push32((uint32_t)(EAX));
  /* 10031da6 push 0x10046128 */
  push32((uint32_t)(0x10046128u));
  /* 10031dab call 0x10032680 */
  push32(0x10031db0u); f_10032680();
  /* 10031db0 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031db5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031db8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031dba je 0x10031eef */
  if (C.zf) goto L_10031eef;
  /* 10031dc0 push 0x1003f7d4 */
  push32((uint32_t)(0x1003f7d4u));
  /* 10031dc5 push 0x10043688 */
  push32((uint32_t)(0x10043688u));
  /* 10031dca call eax */
  call_ind((uint32_t)(EAX), 0x10031dccu);
  /* 10031dcc mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031dd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031dd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031dd6 je 0x10031eef */
  if (C.zf) goto L_10031eef;
  /* 10031ddc push 0x1003f7c0 */
  push32((uint32_t)(0x1003f7c0u));
  /* 10031de1 push 0x10043680 */
  push32((uint32_t)(0x10043680u));
  /* 10031de6 call eax */
  call_ind((uint32_t)(EAX), 0x10031de8u);
  /* 10031de8 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031ded add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031df0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031df2 je 0x10031eef */
  if (C.zf) goto L_10031eef;
  /* 10031df8 push 0x1003f7ac */
  push32((uint32_t)(0x1003f7acu));
  /* 10031dfd push 0x10043678 */
  push32((uint32_t)(0x10043678u));
  /* 10031e02 call eax */
  call_ind((uint32_t)(EAX), 0x10031e04u);
  /* 10031e04 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031e09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031e0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031e0e je 0x10031eef */
  if (C.zf) goto L_10031eef;
  /* 10031e14 push 0x1003f798 */
  push32((uint32_t)(0x1003f798u));
  /* 10031e19 push 0x10043670 */
  push32((uint32_t)(0x10043670u));
  /* 10031e1e call eax */
  call_ind((uint32_t)(EAX), 0x10031e20u);
  /* 10031e20 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031e25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031e28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031e2a je 0x10031eef */
  if (C.zf) goto L_10031eef;
  /* 10031e30 push 0x1003f784 */
  push32((uint32_t)(0x1003f784u));
  /* 10031e35 push 0x10043648 */
  push32((uint32_t)(0x10043648u));
  /* 10031e3a call eax */
  call_ind((uint32_t)(EAX), 0x10031e3cu);
  /* 10031e3c mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031e41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031e44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031e46 je 0x10031eef */
  if (C.zf) goto L_10031eef;
  /* 10031e4c push 0x1003f770 */
  push32((uint32_t)(0x1003f770u));
  /* 10031e51 push 0x10043640 */
  push32((uint32_t)(0x10043640u));
  /* 10031e56 call eax */
  call_ind((uint32_t)(EAX), 0x10031e58u);
  /* 10031e58 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031e5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031e60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031e62 je 0x10031eef */
  if (C.zf) goto L_10031eef;
  /* 10031e68 push 0x1003f75c */
  push32((uint32_t)(0x1003f75cu));
  /* 10031e6d push 0x10043718 */
  push32((uint32_t)(0x10043718u));
  /* 10031e72 call eax */
  call_ind((uint32_t)(EAX), 0x10031e74u);
  /* 10031e74 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031e79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031e7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031e7e je 0x10031eef */
  if (C.zf) goto L_10031eef;
  /* 10031e80 push 0x1003f748 */
  push32((uint32_t)(0x1003f748u));
  /* 10031e85 push 0x10043710 */
  push32((uint32_t)(0x10043710u));
  /* 10031e8a call eax */
  call_ind((uint32_t)(EAX), 0x10031e8cu);
  /* 10031e8c mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031e91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031e94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031e96 je 0x10031eef */
  if (C.zf) goto L_10031eef;
  /* 10031e98 push 0x1003f734 */
  push32((uint32_t)(0x1003f734u));
  /* 10031e9d push 0x10043708 */
  push32((uint32_t)(0x10043708u));
  /* 10031ea2 call eax */
  call_ind((uint32_t)(EAX), 0x10031ea4u);
  /* 10031ea4 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031ea9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031eac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031eae je 0x10031eef */
  if (C.zf) goto L_10031eef;
  /* 10031eb0 push 0x1003f720 */
  push32((uint32_t)(0x1003f720u));
  /* 10031eb5 push 0x100436f0 */
  push32((uint32_t)(0x100436f0u));
  /* 10031eba call eax */
  call_ind((uint32_t)(EAX), 0x10031ebcu);
  /* 10031ebc mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031ec1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031ec4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031ec6 je 0x10031eef */
  if (C.zf) goto L_10031eef;
  /* 10031ec8 push 0x1003f70c */
  push32((uint32_t)(0x1003f70cu));
  /* 10031ecd push 0x100436e8 */
  push32((uint32_t)(0x100436e8u));
  /* 10031ed2 call eax */
  call_ind((uint32_t)(EAX), 0x10031ed4u);
  /* 10031ed4 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10031ed9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031edc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10031ede je 0x10031eef */
  if (C.zf) goto L_10031eef;
  /* 10031ee0 push 0x1003f6f8 */
  push32((uint32_t)(0x1003f6f8u));
  /* 10031ee5 push 0x100436e0 */
  push32((uint32_t)(0x100436e0u));
  /* 10031eea call eax */
  call_ind((uint32_t)(EAX), 0x10031eecu);
  /* 10031eec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10031eef:;
  /* 10031eef lea eax, [esp + 0x30] */
  EAX = ((uint32_t)(ESP + 0x30));
  /* 10031ef3 push 0x1003f840 */
  push32((uint32_t)(0x1003f840u));
  /* 10031ef8 push eax */
  push32((uint32_t)(EAX));
  /* 10031ef9 call 0x10032f10 */
  push32(0x10031efeu); f_10032f10();
  /* 10031efe push eax */
  push32((uint32_t)(EAX));
  /* 10031eff push 0x100436b0 */
  push32((uint32_t)(0x100436b0u));
  /* 10031f04 call 0x10032680 */
  push32(0x10031f09u); f_10032680();
  /* 10031f09 lea ecx, [esp + 0x40] */
  ECX = ((uint32_t)(ESP + 0x40));
  /* 10031f0d push 0x1003f838 */
  push32((uint32_t)(0x1003f838u));
  /* 10031f12 push ecx */
  push32((uint32_t)(ECX));
  /* 10031f13 call 0x10032f10 */
  push32(0x10031f18u); f_10032f10();
  /* 10031f18 push eax */
  push32((uint32_t)(EAX));
  /* 10031f19 push 0x100436b8 */
  push32((uint32_t)(0x100436b8u));
  /* 10031f1e call 0x10032680 */
  push32(0x10031f23u); f_10032680();
  /* 10031f23 lea edx, [esp + 0x50] */
  EDX = ((uint32_t)(ESP + 0x50));
  /* 10031f27 push 0x1003f830 */
  push32((uint32_t)(0x1003f830u));
  /* 10031f2c push edx */
  push32((uint32_t)(EDX));
  /* 10031f2d call 0x10032f10 */
  push32(0x10031f32u); f_10032f10();
  /* 10031f32 push eax */
  push32((uint32_t)(EAX));
  /* 10031f33 push 0x100436c0 */
  push32((uint32_t)(0x100436c0u));
  /* 10031f38 call 0x10032680 */
  push32(0x10031f3du); f_10032680();
  /* 10031f3d lea eax, [esp + 0x60] */
  EAX = ((uint32_t)(ESP + 0x60));
  /* 10031f41 push 0x1003f828 */
  push32((uint32_t)(0x1003f828u));
  /* 10031f46 push eax */
  push32((uint32_t)(EAX));
  /* 10031f47 call 0x10032f10 */
  push32(0x10031f4cu); f_10032f10();
  /* 10031f4c push eax */
  push32((uint32_t)(EAX));
  /* 10031f4d push 0x100436c8 */
  push32((uint32_t)(0x100436c8u));
  /* 10031f52 call 0x10032680 */
  push32(0x10031f57u); f_10032680();
  /* 10031f57 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031f5a lea ecx, [esp + 0x30] */
  ECX = ((uint32_t)(ESP + 0x30));
  /* 10031f5e push 0x1003f820 */
  push32((uint32_t)(0x1003f820u));
  /* 10031f63 push ecx */
  push32((uint32_t)(ECX));
  /* 10031f64 call 0x10032f10 */
  push32(0x10031f69u); f_10032f10();
  /* 10031f69 push eax */
  push32((uint32_t)(EAX));
  /* 10031f6a push 0x10043690 */
  push32((uint32_t)(0x10043690u));
  /* 10031f6f call 0x10032680 */
  push32(0x10031f74u); f_10032680();
  /* 10031f74 lea edx, [esp + 0x40] */
  EDX = ((uint32_t)(ESP + 0x40));
  /* 10031f78 push 0x1003f818 */
  push32((uint32_t)(0x1003f818u));
  /* 10031f7d push edx */
  push32((uint32_t)(EDX));
  /* 10031f7e call 0x10032f10 */
  push32(0x10031f83u); f_10032f10();
  /* 10031f83 push eax */
  push32((uint32_t)(EAX));
  /* 10031f84 push 0x100436a0 */
  push32((uint32_t)(0x100436a0u));
  /* 10031f89 call 0x10032680 */
  push32(0x10031f8eu); f_10032680();
  /* 10031f8e lea eax, [esp + 0x50] */
  EAX = ((uint32_t)(ESP + 0x50));
  /* 10031f92 push 0x1003f810 */
  push32((uint32_t)(0x1003f810u));
  /* 10031f97 push eax */
  push32((uint32_t)(EAX));
  /* 10031f98 call 0x10032f10 */
  push32(0x10031f9du); f_10032f10();
  /* 10031f9d push eax */
  push32((uint32_t)(EAX));
  /* 10031f9e push 0x10043758 */
  push32((uint32_t)(0x10043758u));
  /* 10031fa3 call 0x10032680 */
  push32(0x10031fa8u); f_10032680();
  /* 10031fa8 lea ecx, [esp + 0x60] */
  ECX = ((uint32_t)(ESP + 0x60));
  /* 10031fac push 0x1003f808 */
  push32((uint32_t)(0x1003f808u));
  /* 10031fb1 push ecx */
  push32((uint32_t)(ECX));
  /* 10031fb2 call 0x10032f10 */
  push32(0x10031fb7u); f_10032f10();
  /* 10031fb7 push eax */
  push32((uint32_t)(EAX));
  /* 10031fb8 push 0x10043760 */
  push32((uint32_t)(0x10043760u));
  /* 10031fbd call 0x10032680 */
  push32(0x10031fc2u); f_10032680();
  /* 10031fc2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10031fc5 lea edx, [esp + 0x30] */
  EDX = ((uint32_t)(ESP + 0x30));
  /* 10031fc9 push 0x1003f800 */
  push32((uint32_t)(0x1003f800u));
  /* 10031fce push edx */
  push32((uint32_t)(EDX));
  /* 10031fcf call 0x10032f10 */
  push32(0x10031fd4u); f_10032f10();
  /* 10031fd4 push eax */
  push32((uint32_t)(EAX));
  /* 10031fd5 push 0x10043768 */
  push32((uint32_t)(0x10043768u));
  /* 10031fda call 0x10032680 */
  push32(0x10031fdfu); f_10032680();
  /* 10031fdf lea eax, [esp + 0x40] */
  EAX = ((uint32_t)(ESP + 0x40));
  /* 10031fe3 push 0x1003f7f8 */
  push32((uint32_t)(0x1003f7f8u));
  /* 10031fe8 push eax */
  push32((uint32_t)(EAX));
  /* 10031fe9 call 0x10032f10 */
  push32(0x10031feeu); f_10032f10();
  /* 10031fee push eax */
  push32((uint32_t)(EAX));
  /* 10031fef push 0x10043740 */
  push32((uint32_t)(0x10043740u));
  /* 10031ff4 call 0x10032680 */
  push32(0x10031ff9u); f_10032680();
  /* 10031ff9 lea ecx, [esp + 0x50] */
  ECX = ((uint32_t)(ESP + 0x50));
  /* 10031ffd push 0x1003f7f0 */
  push32((uint32_t)(0x1003f7f0u));
  /* 10032002 push ecx */
  push32((uint32_t)(ECX));
  /* 10032003 call 0x10032f10 */
  push32(0x10032008u); f_10032f10();
  /* 10032008 push eax */
  push32((uint32_t)(EAX));
  /* 10032009 push 0x10043748 */
  push32((uint32_t)(0x10043748u));
  /* 1003200e call 0x10032680 */
  push32(0x10032013u); f_10032680();
  /* 10032013 push 0x1003f7e8 */
  push32((uint32_t)(0x1003f7e8u));
  /* 10032018 lea edx, [esp + 0x64] */
  EDX = ((uint32_t)(ESP + 0x64));
  /* 1003201c push edx */
  push32((uint32_t)(EDX));
  /* 1003201d call 0x10032f10 */
  push32(0x10032022u); f_10032f10();
  /* 10032022 push eax */
  push32((uint32_t)(EAX));
  /* 10032023 push 0x10043750 */
  push32((uint32_t)(0x10043750u));
  /* 10032028 call 0x10032680 */
  push32(0x1003202du); f_10032680();
  /* 1003202d mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10032032 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10032035 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10032037 je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 1003203d push 0x1003f6e8 */
  push32((uint32_t)(0x1003f6e8u));
  /* 10032042 push 0x100461a8 */
  push32((uint32_t)(0x100461a8u));
  /* 10032047 call eax */
  call_ind((uint32_t)(EAX), 0x10032049u);
  /* 10032049 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 1003204e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10032051 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10032053 je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 10032059 push 0x1003f6d4 */
  push32((uint32_t)(0x1003f6d4u));
  /* 1003205e push 0x100461a0 */
  push32((uint32_t)(0x100461a0u));
  /* 10032063 call eax */
  call_ind((uint32_t)(EAX), 0x10032065u);
  /* 10032065 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 1003206a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003206d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003206f je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 10032075 push 0x1003f6c0 */
  push32((uint32_t)(0x1003f6c0u));
  /* 1003207a push 0x10046170 */
  push32((uint32_t)(0x10046170u));
  /* 1003207f call eax */
  call_ind((uint32_t)(EAX), 0x10032081u);
  /* 10032081 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10032086 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10032089 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003208b je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 10032091 push 0x1003f6ac */
  push32((uint32_t)(0x1003f6acu));
  /* 10032096 push 0x10046168 */
  push32((uint32_t)(0x10046168u));
  /* 1003209b call eax */
  call_ind((uint32_t)(EAX), 0x1003209du);
  /* 1003209d mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 100320a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100320a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100320a7 je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 100320ad push 0x1003f698 */
  push32((uint32_t)(0x1003f698u));
  /* 100320b2 push 0x10046178 */
  push32((uint32_t)(0x10046178u));
  /* 100320b7 call eax */
  call_ind((uint32_t)(EAX), 0x100320b9u);
  /* 100320b9 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 100320be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100320c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100320c3 je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 100320c9 push 0x1003f684 */
  push32((uint32_t)(0x1003f684u));
  /* 100320ce push 0x10046068 */
  push32((uint32_t)(0x10046068u));
  /* 100320d3 call eax */
  call_ind((uint32_t)(EAX), 0x100320d5u);
  /* 100320d5 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 100320da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100320dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100320df je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 100320e5 push 0x1003f670 */
  push32((uint32_t)(0x1003f670u));
  /* 100320ea push 0x10046070 */
  push32((uint32_t)(0x10046070u));
  /* 100320ef call eax */
  call_ind((uint32_t)(EAX), 0x100320f1u);
  /* 100320f1 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 100320f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100320f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100320fb je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 10032101 push 0x1003f65c */
  push32((uint32_t)(0x1003f65cu));
  /* 10032106 push 0x10046078 */
  push32((uint32_t)(0x10046078u));
  /* 1003210b call eax */
  call_ind((uint32_t)(EAX), 0x1003210du);
  /* 1003210d mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10032112 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10032115 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10032117 je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 1003211d push 0x1003f648 */
  push32((uint32_t)(0x1003f648u));
  /* 10032122 push 0x10046080 */
  push32((uint32_t)(0x10046080u));
  /* 10032127 call eax */
  call_ind((uint32_t)(EAX), 0x10032129u);
  /* 10032129 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 1003212e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10032131 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10032133 je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 10032139 push 0x1003f640 */
  push32((uint32_t)(0x1003f640u));
  /* 1003213e push 0x10046188 */
  push32((uint32_t)(0x10046188u));
  /* 10032143 call eax */
  call_ind((uint32_t)(EAX), 0x10032145u);
  /* 10032145 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 1003214a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003214d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003214f je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 10032155 push 0x1003f638 */
  push32((uint32_t)(0x1003f638u));
  /* 1003215a push 0x10045ff0 */
  push32((uint32_t)(0x10045ff0u));
  /* 1003215f call eax */
  call_ind((uint32_t)(EAX), 0x10032161u);
  /* 10032161 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10032166 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10032169 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003216b je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 10032171 push 0x1003f630 */
  push32((uint32_t)(0x1003f630u));
  /* 10032176 push 0x10043928 */
  push32((uint32_t)(0x10043928u));
  /* 1003217b call eax */
  call_ind((uint32_t)(EAX), 0x1003217du);
  /* 1003217d mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10032182 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10032185 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10032187 je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 1003218d push 0x1003f628 */
  push32((uint32_t)(0x1003f628u));
  /* 10032192 push 0x10046048 */
  push32((uint32_t)(0x10046048u));
  /* 10032197 call eax */
  call_ind((uint32_t)(EAX), 0x10032199u);
  /* 10032199 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 1003219e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100321a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100321a3 je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 100321a9 push 0x1003f620 */
  push32((uint32_t)(0x1003f620u));
  /* 100321ae push 0x10046000 */
  push32((uint32_t)(0x10046000u));
  /* 100321b3 call eax */
  call_ind((uint32_t)(EAX), 0x100321b5u);
  /* 100321b5 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 100321ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100321bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100321bf je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 100321c5 push 0x1003f618 */
  push32((uint32_t)(0x1003f618u));
  /* 100321ca push 0x10046008 */
  push32((uint32_t)(0x10046008u));
  /* 100321cf call eax */
  call_ind((uint32_t)(EAX), 0x100321d1u);
  /* 100321d1 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 100321d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100321d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100321db je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 100321e1 push 0x1003f610 */
  push32((uint32_t)(0x1003f610u));
  /* 100321e6 push 0x10046010 */
  push32((uint32_t)(0x10046010u));
  /* 100321eb call eax */
  call_ind((uint32_t)(EAX), 0x100321edu);
  /* 100321ed mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 100321f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100321f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100321f7 je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 100321fd push 0x1003f608 */
  push32((uint32_t)(0x1003f608u));
  /* 10032202 push 0x10046240 */
  push32((uint32_t)(0x10046240u));
  /* 10032207 call eax */
  call_ind((uint32_t)(EAX), 0x10032209u);
  /* 10032209 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 1003220e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10032211 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10032213 je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 10032219 push 0x1003f600 */
  push32((uint32_t)(0x1003f600u));
  /* 1003221e push 0x100460e0 */
  push32((uint32_t)(0x100460e0u));
  /* 10032223 call eax */
  call_ind((uint32_t)(EAX), 0x10032225u);
  /* 10032225 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 1003222a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003222d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003222f je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 10032235 push 0x1003f5f8 */
  push32((uint32_t)(0x1003f5f8u));
  /* 1003223a push 0x10046120 */
  push32((uint32_t)(0x10046120u));
  /* 1003223f call eax */
  call_ind((uint32_t)(EAX), 0x10032241u);
  /* 10032241 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10032246 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10032249 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003224b je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 10032251 push 0x1003f5f0 */
  push32((uint32_t)(0x1003f5f0u));
  /* 10032256 push 0x100461d8 */
  push32((uint32_t)(0x100461d8u));
  /* 1003225b call eax */
  call_ind((uint32_t)(EAX), 0x1003225du);
  /* 1003225d mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10032262 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10032265 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10032267 je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 1003226d push 0x1003f5e8 */
  push32((uint32_t)(0x1003f5e8u));
  /* 10032272 push 0x100461e0 */
  push32((uint32_t)(0x100461e0u));
  /* 10032277 call eax */
  call_ind((uint32_t)(EAX), 0x10032279u);
  /* 10032279 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 1003227e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10032281 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10032283 je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 10032289 push 0x1003f5e0 */
  push32((uint32_t)(0x1003f5e0u));
  /* 1003228e push 0x10046138 */
  push32((uint32_t)(0x10046138u));
  /* 10032293 call eax */
  call_ind((uint32_t)(EAX), 0x10032295u);
  /* 10032295 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 1003229a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003229d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003229f je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 100322a5 push 0x1003f5d8 */
  push32((uint32_t)(0x1003f5d8u));
  /* 100322aa push 0x10046148 */
  push32((uint32_t)(0x10046148u));
  /* 100322af call eax */
  call_ind((uint32_t)(EAX), 0x100322b1u);
  /* 100322b1 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 100322b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100322b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100322bb je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 100322c1 push 0x1003f5d0 */
  push32((uint32_t)(0x1003f5d0u));
  /* 100322c6 push 0x10046150 */
  push32((uint32_t)(0x10046150u));
  /* 100322cb call eax */
  call_ind((uint32_t)(EAX), 0x100322cdu);
  /* 100322cd mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 100322d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100322d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100322d7 je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 100322dd push 0x1003f5c8 */
  push32((uint32_t)(0x1003f5c8u));
  /* 100322e2 push 0x10046140 */
  push32((uint32_t)(0x10046140u));
  /* 100322e7 call eax */
  call_ind((uint32_t)(EAX), 0x100322e9u);
  /* 100322e9 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 100322ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100322f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100322f3 je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 100322f9 push 0x1003f5c0 */
  push32((uint32_t)(0x1003f5c0u));
  /* 100322fe push 0x10043920 */
  push32((uint32_t)(0x10043920u));
  /* 10032303 call eax */
  call_ind((uint32_t)(EAX), 0x10032305u);
  /* 10032305 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 1003230a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003230d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003230f je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 10032315 push 0x1003f5b8 */
  push32((uint32_t)(0x1003f5b8u));
  /* 1003231a push 0x100438b0 */
  push32((uint32_t)(0x100438b0u));
  /* 1003231f call eax */
  call_ind((uint32_t)(EAX), 0x10032321u);
  /* 10032321 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10032326 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10032329 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003232b je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 10032331 push 0x1003f5b0 */
  push32((uint32_t)(0x1003f5b0u));
  /* 10032336 push 0x10043770 */
  push32((uint32_t)(0x10043770u));
  /* 1003233b call eax */
  call_ind((uint32_t)(EAX), 0x1003233du);
  /* 1003233d mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10032342 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10032345 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10032347 je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 1003234d push 0x1003f5a8 */
  push32((uint32_t)(0x1003f5a8u));
  /* 10032352 push 0x100460c0 */
  push32((uint32_t)(0x100460c0u));
  /* 10032357 call eax */
  call_ind((uint32_t)(EAX), 0x10032359u);
  /* 10032359 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 1003235e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10032361 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10032363 je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 10032369 push 0x1003f5a0 */
  push32((uint32_t)(0x1003f5a0u));
  /* 1003236e push 0x10043910 */
  push32((uint32_t)(0x10043910u));
  /* 10032373 call eax */
  call_ind((uint32_t)(EAX), 0x10032375u);
  /* 10032375 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 1003237a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003237d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003237f je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 10032385 push 0x1003f598 */
  push32((uint32_t)(0x1003f598u));
  /* 1003238a push 0x100461c8 */
  push32((uint32_t)(0x100461c8u));
  /* 1003238f call eax */
  call_ind((uint32_t)(EAX), 0x10032391u);
  /* 10032391 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10032396 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10032399 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003239b je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 100323a1 push 0x1003f590 */
  push32((uint32_t)(0x1003f590u));
  /* 100323a6 push 0x100461d0 */
  push32((uint32_t)(0x100461d0u));
  /* 100323ab call eax */
  call_ind((uint32_t)(EAX), 0x100323adu);
  /* 100323ad mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 100323b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100323b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100323b7 je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 100323bd push 0x1003f588 */
  push32((uint32_t)(0x1003f588u));
  /* 100323c2 push 0x10043840 */
  push32((uint32_t)(0x10043840u));
  /* 100323c7 call eax */
  call_ind((uint32_t)(EAX), 0x100323c9u);
  /* 100323c9 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 100323ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100323d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100323d3 je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 100323d9 push 0x1003f580 */
  push32((uint32_t)(0x1003f580u));
  /* 100323de push 0x10043850 */
  push32((uint32_t)(0x10043850u));
  /* 100323e3 call eax */
  call_ind((uint32_t)(EAX), 0x100323e5u);
  /* 100323e5 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 100323ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100323ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100323ef je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 100323f5 push 0x1003f578 */
  push32((uint32_t)(0x1003f578u));
  /* 100323fa push 0x10043738 */
  push32((uint32_t)(0x10043738u));
  /* 100323ff call eax */
  call_ind((uint32_t)(EAX), 0x10032401u);
  /* 10032401 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10032406 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10032409 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003240b je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 10032411 push 0x1003f570 */
  push32((uint32_t)(0x1003f570u));
  /* 10032416 push 0x100435f8 */
  push32((uint32_t)(0x100435f8u));
  /* 1003241b call eax */
  call_ind((uint32_t)(EAX), 0x1003241du);
  /* 1003241d mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10032422 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10032425 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10032427 je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 1003242d push 0x1003f568 */
  push32((uint32_t)(0x1003f568u));
  /* 10032432 push 0x100436d8 */
  push32((uint32_t)(0x100436d8u));
  /* 10032437 call eax */
  call_ind((uint32_t)(EAX), 0x10032439u);
  /* 10032439 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 1003243e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10032441 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10032443 je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 10032449 push 0x1003f560 */
  push32((uint32_t)(0x1003f560u));
  /* 1003244e push 0x10043600 */
  push32((uint32_t)(0x10043600u));
  /* 10032453 call eax */
  call_ind((uint32_t)(EAX), 0x10032455u);
  /* 10032455 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 1003245a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003245d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003245f je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 10032465 push 0x1003f54c */
  push32((uint32_t)(0x1003f54cu));
  /* 1003246a push 0x100462b8 */
  push32((uint32_t)(0x100462b8u));
  /* 1003246f call eax */
  call_ind((uint32_t)(EAX), 0x10032471u);
  /* 10032471 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 10032476 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10032479 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003247b je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 1003247d push 0x1003f538 */
  push32((uint32_t)(0x1003f538u));
  /* 10032482 push 0x100462a0 */
  push32((uint32_t)(0x100462a0u));
  /* 10032487 call eax */
  call_ind((uint32_t)(EAX), 0x10032489u);
  /* 10032489 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 1003248e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10032491 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10032493 je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 10032495 push 0x1003f524 */
  push32((uint32_t)(0x1003f524u));
  /* 1003249a push 0x100462b0 */
  push32((uint32_t)(0x100462b0u));
  /* 1003249f call eax */
  call_ind((uint32_t)(EAX), 0x100324a1u);
  /* 100324a1 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 100324a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100324a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100324ab je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 100324ad push 0x1003f510 */
  push32((uint32_t)(0x1003f510u));
  /* 100324b2 push 0x10046290 */
  push32((uint32_t)(0x10046290u));
  /* 100324b7 call eax */
  call_ind((uint32_t)(EAX), 0x100324b9u);
  /* 100324b9 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 100324be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100324c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100324c3 je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 100324c5 push 0x1003f4fc */
  push32((uint32_t)(0x1003f4fcu));
  /* 100324ca push 0x10046298 */
  push32((uint32_t)(0x10046298u));
  /* 100324cf call eax */
  call_ind((uint32_t)(EAX), 0x100324d1u);
  /* 100324d1 mov eax, dword ptr [0x100463cc] */
  EAX = (r32((uint32_t)(0x100463cc)));
  /* 100324d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100324d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100324db je 0x100324ec */
  if (C.zf) goto L_100324ec;
  /* 100324dd push 0x1003f4e8 */
  push32((uint32_t)(0x1003f4e8u));
  /* 100324e2 push 0x10046288 */
  push32((uint32_t)(0x10046288u));
  /* 100324e7 call eax */
  call_ind((uint32_t)(EAX), 0x100324e9u);
  /* 100324e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100324ec:;
  /* 100324ec push 6 */
  push32((uint32_t)(0x6u));
  /* 100324ee call dword ptr [0x100464f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464f0))), 0x100324f4u);
  /* 100324f4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100324f6 push 0x1003f4d4 */
  push32((uint32_t)(0x1003f4d4u));
  /* 100324fb push 0 */
  push32((uint32_t)(0x0u));
  /* 100324fd call dword ptr [0x100464f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464f4))), 0x10032503u);
  /* 10032503 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10032505 push 0x1003f4c0 */
  push32((uint32_t)(0x1003f4c0u));
  /* 1003250a push 1 */
  push32((uint32_t)(0x1u));
  /* 1003250c call dword ptr [0x100464f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464f4))), 0x10032512u);
  /* 10032512 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10032514 push 0x1003f4ac */
  push32((uint32_t)(0x1003f4acu));
  /* 10032519 push 2 */
  push32((uint32_t)(0x2u));
  /* 1003251b call dword ptr [0x100464f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464f4))), 0x10032521u);
  /* 10032521 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10032523 push 0x1003f498 */
  push32((uint32_t)(0x1003f498u));
  /* 10032528 push 3 */
  push32((uint32_t)(0x3u));
  /* 1003252a call dword ptr [0x100464f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464f4))), 0x10032530u);
  /* 10032530 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10032532 push 0x1003f484 */
  push32((uint32_t)(0x1003f484u));
  /* 10032537 push 4 */
  push32((uint32_t)(0x4u));
  /* 10032539 call dword ptr [0x100464f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464f4))), 0x1003253fu);
  /* 1003253f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10032542 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10032544 push 0x1003f470 */
  push32((uint32_t)(0x1003f470u));
  /* 10032549 push 5 */
  push32((uint32_t)(0x5u));
  /* 1003254b call dword ptr [0x100464f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464f4))), 0x10032551u);
  /* 10032551 push 0x1003fb74 */
  push32((uint32_t)(0x1003fb74u));
  /* 10032556 call dword ptr [0x10046530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046530))), 0x1003255cu);
  /* 1003255c push 0x1003f464 */
  push32((uint32_t)(0x1003f464u));
  /* 10032561 call dword ptr [0x1004652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004652c))), 0x10032567u);
  /* 10032567 push 0x1003f454 */
  push32((uint32_t)(0x1003f454u));
  /* 1003256c call dword ptr [0x10046534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046534))), 0x10032572u);
  /* 10032572 push 0x1003f448 */
  push32((uint32_t)(0x1003f448u));
  /* 10032577 call dword ptr [0x1004653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004653c))), 0x1003257du);
  /* 1003257d push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10032582 call dword ptr [0x100464f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464f8))), 0x10032588u);
  /* 10032588 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1003258a call dword ptr [0x100464fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464fc))), 0x10032590u);
  /* 10032590 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10032592 call dword ptr [0x10046500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046500))), 0x10032598u);
  /* 10032598 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 1003259d call dword ptr [0x10046504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046504))), 0x100325a3u);
  /* 100325a3 push 5 */
  push32((uint32_t)(0x5u));
  /* 100325a5 call dword ptr [0x10046508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046508))), 0x100325abu);
  /* 100325ab add esp, 0x90 */
  { uint32_t _a=(ESP),_b=(0x90u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100325b1 ret  */
  ESPCHK(0x10031000u, _esp0);
  ESP += 4; return;
}

/* ProcessAI @ 0x100325c0 (16 bytes, 3 insns) */
void f_100325c0(void) {
  FTRACE(0x100325c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100325c0 call dword ptr [0x100464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d0))), 0x100325c6u);
  /* 100325c6 mov dword ptr [0x10046284], eax */
  w32((uint32_t)(0x10046284), (EAX));
  /* 100325cb jmp 0x10036d20 */
  f_10036d20(); return;
}

/* FUN_100025d0 @ 0x100325d0 (20 bytes, 7 insns) */
void f_100325d0(void) {
  FTRACE(0x100325d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100325d0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100325d4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100325d8 push eax */
  push32((uint32_t)(EAX));
  /* 100325d9 push ecx */
  push32((uint32_t)(ECX));
  /* 100325da call dword ptr [0x100464e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464e0))), 0x100325e0u);
  /* 100325e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100325e3 ret  */
  ESPCHK(0x100325d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100025f0 @ 0x100325f0 (25 bytes, 9 insns) */
void f_100325f0(void) {
  FTRACE(0x100325f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100325f0 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 100325f4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 100325f8 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 100325fc push eax */
  push32((uint32_t)(EAX));
  /* 100325fd push ecx */
  push32((uint32_t)(ECX));
  /* 100325fe push edx */
  push32((uint32_t)(EDX));
  /* 100325ff call dword ptr [0x100464ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464ec))), 0x10032605u);
  /* 10032605 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10032608 ret  */
  ESPCHK(0x100325f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002610 @ 0x10032610 (6 bytes, 1 insns) */
void f_10032610(void) {
  FTRACE(0x10032610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10032610 jmp dword ptr [0x10046518] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10046518)))); return;
}

/* FUN_10002620 @ 0x10032620 (20 bytes, 7 insns) */
void f_10032620(void) {
  FTRACE(0x10032620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10032620 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10032624 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10032628 push eax */
  push32((uint32_t)(EAX));
  /* 10032629 push ecx */
  push32((uint32_t)(ECX));
  /* 1003262a call dword ptr [0x10046538] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046538))), 0x10032630u);
  /* 10032630 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10032633 ret  */
  ESPCHK(0x10032620u, _esp0);
  ESP += 4; return;
}

/* FUN_10002640 @ 0x10032640 (6 bytes, 1 insns) */
void f_10032640(void) {
  FTRACE(0x10032640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10032640 jmp dword ptr [0x10046544] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10046544)))); return;
}

/* FUN_10002650 @ 0x10032650 (6 bytes, 1 insns) */
void f_10032650(void) {
  FTRACE(0x10032650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10032650 jmp dword ptr [0x10046548] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10046548)))); return;
}

/* FUN_10002660 @ 0x10032660 (6 bytes, 1 insns) */
void f_10032660(void) {
  FTRACE(0x10032660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10032660 jmp dword ptr [0x10046550] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10046550)))); return;
}

/* FUN_10002670 @ 0x10032670 (13 bytes, 5 insns) */
void f_10032670(void) {
  FTRACE(0x10032670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10032670 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10032674 push eax */
  push32((uint32_t)(EAX));
  /* 10032675 call dword ptr [0x10046554] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046554))), 0x1003267bu);
  /* 1003267b pop ecx */
  ECX = (pop32());
  /* 1003267c ret  */
  ESPCHK(0x10032670u, _esp0);
  ESP += 4; return;
}

/* FUN_10002680 @ 0x10032680 (20 bytes, 7 insns) */
void f_10032680(void) {
  FTRACE(0x10032680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10032680 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10032684 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10032688 push eax */
  push32((uint32_t)(EAX));
  /* 10032689 push ecx */
  push32((uint32_t)(ECX));
  /* 1003268a call dword ptr [0x10046558] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046558))), 0x10032690u);
  /* 10032690 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10032693 ret  */
  ESPCHK(0x10032680u, _esp0);
  ESP += 4; return;
}

/* FUN_100026a0 @ 0x100326a0 (6 bytes, 1 insns) */
void f_100326a0(void) {
  FTRACE(0x100326a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100326a0 jmp dword ptr [0x1004655c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1004655c)))); return;
}

/* FUN_100026b0 @ 0x100326b0 (20 bytes, 7 insns) */
void f_100326b0(void) {
  FTRACE(0x100326b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100326b0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100326b4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100326b8 push eax */
  push32((uint32_t)(EAX));
  /* 100326b9 push ecx */
  push32((uint32_t)(ECX));
  /* 100326ba call dword ptr [0x10046238] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046238))), 0x100326c0u);
  /* 100326c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100326c3 ret  */
  ESPCHK(0x100326b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100026d0 @ 0x100326d0 (15 bytes, 5 insns) */
void f_100326d0(void) {
  FTRACE(0x100326d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100326d0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100326d4 push eax */
  push32((uint32_t)(EAX));
  /* 100326d5 call dword ptr [0x10046280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046280))), 0x100326dbu);
  /* 100326db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100326de ret  */
  ESPCHK(0x100326d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100026e0 @ 0x100326e0 (20 bytes, 7 insns) */
void f_100326e0(void) {
  FTRACE(0x100326e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100326e0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100326e4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100326e8 push eax */
  push32((uint32_t)(EAX));
  /* 100326e9 push ecx */
  push32((uint32_t)(ECX));
  /* 100326ea call dword ptr [0x10043700] */
  call_ind((uint32_t)(r32((uint32_t)(0x10043700))), 0x100326f0u);
  /* 100326f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100326f3 ret  */
  ESPCHK(0x100326e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002700 @ 0x10032700 (13 bytes, 5 insns) */
void f_10032700(void) {
  FTRACE(0x10032700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10032700 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10032704 push eax */
  push32((uint32_t)(EAX));
  /* 10032705 call dword ptr [0x100438a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100438a0))), 0x1003270bu);
  /* 1003270b pop ecx */
  ECX = (pop32());
  /* 1003270c ret  */
  ESPCHK(0x10032700u, _esp0);
  ESP += 4; return;
}

/* FUN_10002710 @ 0x10032710 (15 bytes, 5 insns) */
void f_10032710(void) {
  FTRACE(0x10032710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10032710 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10032714 push eax */
  push32((uint32_t)(EAX));
  /* 10032715 call dword ptr [0x10046560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046560))), 0x1003271bu);
  /* 1003271b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003271e ret  */
  ESPCHK(0x10032710u, _esp0);
  ESP += 4; return;
}

/* FUN_10002720 @ 0x10032720 (25 bytes, 9 insns) */
void f_10032720(void) {
  FTRACE(0x10032720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10032720 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10032724 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10032728 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1003272c push eax */
  push32((uint32_t)(EAX));
  /* 1003272d push ecx */
  push32((uint32_t)(ECX));
  /* 1003272e push edx */
  push32((uint32_t)(EDX));
  /* 1003272f call dword ptr [0x10045f90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10045f90))), 0x10032735u);
  /* 10032735 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10032738 ret  */
  ESPCHK(0x10032720u, _esp0);
  ESP += 4; return;
}

/* FUN_10002740 @ 0x10032740 (13 bytes, 5 insns) */
void f_10032740(void) {
  FTRACE(0x10032740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10032740 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10032744 push eax */
  push32((uint32_t)(EAX));
  /* 10032745 call dword ptr [0x10043900] */
  call_ind((uint32_t)(r32((uint32_t)(0x10043900))), 0x1003274bu);
  /* 1003274b pop ecx */
  ECX = (pop32());
  /* 1003274c ret  */
  ESPCHK(0x10032740u, _esp0);
  ESP += 4; return;
}

/* FUN_10002750 @ 0x10032750 (6 bytes, 1 insns) */
void f_10032750(void) {
  FTRACE(0x10032750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10032750 jmp dword ptr [0x10046218] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10046218)))); return;
}

/* FUN_10002760 @ 0x10032760 (6 bytes, 1 insns) */
void f_10032760(void) {
  FTRACE(0x10032760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10032760 jmp dword ptr [0x10043918] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10043918)))); return;
}

/* FUN_10002770 @ 0x10032770 (82 bytes, 28 insns) */
void f_10032770(void) {
  FTRACE(0x10032770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10032770 mov eax, dword ptr [0x100463b0] */
  EAX = (r32((uint32_t)(0x100463b0)));
  /* 10032775 sub esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003277b push esi */
  push32((uint32_t)(ESI));
  /* 1003277c push edi */
  push32((uint32_t)(EDI));
  /* 1003277d mov edi, dword ptr [esp + 0x10c] */
  EDI = (r32((uint32_t)(ESP + 0x10c)));
  /* 10032784 push edi */
  push32((uint32_t)(EDI));
  /* 10032785 push eax */
  push32((uint32_t)(EAX));
  /* 10032786 call dword ptr [0x1003e088] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e088))), 0x1003278cu);
  /* 1003278c mov esi, eax */
  ESI = (EAX);
  /* 1003278e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10032790 jne 0x100327b7 */
  if (!C.zf) goto L_100327b7;
  /* 10032792 push edi */
  push32((uint32_t)(EDI));
  /* 10032793 lea ecx, [esp + 0xc] */
  ECX = ((uint32_t)(ESP + 0xc));
  /* 10032797 push 0x1003fee0 */
  push32((uint32_t)(0x1003fee0u));
  /* 1003279c push ecx */
  push32((uint32_t)(ECX));
  /* 1003279d call 0x10036e50 */
  push32(0x100327a2u); f_10036e50();
  /* 100327a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100327a5 lea edx, [esp + 8] */
  EDX = ((uint32_t)(ESP + 0x8));
  /* 100327a9 push esi */
  push32((uint32_t)(ESI));
  /* 100327aa push 0x1003fed0 */
  push32((uint32_t)(0x1003fed0u));
  /* 100327af push edx */
  push32((uint32_t)(EDX));
  /* 100327b0 push esi */
  push32((uint32_t)(ESI));
  /* 100327b1 call dword ptr [0x1003e0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e0dc))), 0x100327b7u);
L_100327b7:;
  /* 100327b7 mov eax, esi */
  EAX = (ESI);
  /* 100327b9 pop edi */
  EDI = (pop32());
  /* 100327ba pop esi */
  ESI = (pop32());
  /* 100327bb add esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100327c1 ret  */
  ESPCHK(0x10032770u, _esp0);
  ESP += 4; return;
}

/* FUN_100027d0 @ 0x100327d0 (1844 bytes, 376 insns) */
void f_100327d0(void) {
  FTRACE(0x100327d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100327d0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100327d4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100327d5 jne 0x10032efc */
  if (!C.zf) goto L_10032efc;
  /* 100327db push 0x10040634 */
  push32((uint32_t)(0x10040634u));
  /* 100327e0 call dword ptr [0x1003e004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e004))), 0x100327e6u);
  /* 100327e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100327e8 mov dword ptr [0x100463b0], eax */
  w32((uint32_t)(0x100463b0), (EAX));
  /* 100327ed jne 0x10032809 */
  if (!C.zf) goto L_10032809;
  /* 100327ef push eax */
  push32((uint32_t)(EAX));
  /* 100327f0 push 0x1004062c */
  push32((uint32_t)(0x1004062cu));
  /* 100327f5 push 0x10040614 */
  push32((uint32_t)(0x10040614u));
  /* 100327fa push eax */
  push32((uint32_t)(EAX));
  /* 100327fb call dword ptr [0x1003e0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e0dc))), 0x10032801u);
  /* 10032801 mov eax, 1 */
  EAX = (0x1u);
  /* 10032806 ret 0xc */
  ESPCHK(0x100327d0u, _esp0);
  ESP += 16; return;
L_10032809:;
  /* 10032809 push 0x10040604 */
  push32((uint32_t)(0x10040604u));
  /* 1003280e call 0x10032770 */
  push32(0x10032813u); f_10032770();
  /* 10032813 push 0x100405f4 */
  push32((uint32_t)(0x100405f4u));
  /* 10032818 mov dword ptr [0x100463b4], eax */
  w32((uint32_t)(0x100463b4), (EAX));
  /* 1003281d call 0x10032770 */
  push32(0x10032822u); f_10032770();
  /* 10032822 push 0x100405e4 */
  push32((uint32_t)(0x100405e4u));
  /* 10032827 mov dword ptr [0x100463b8], eax */
  w32((uint32_t)(0x100463b8), (EAX));
  /* 1003282c call 0x10032770 */
  push32(0x10032831u); f_10032770();
  /* 10032831 push 0x100405d8 */
  push32((uint32_t)(0x100405d8u));
  /* 10032836 mov dword ptr [0x100463bc], eax */
  w32((uint32_t)(0x100463bc), (EAX));
  /* 1003283b call 0x10032770 */
  push32(0x10032840u); f_10032770();
  /* 10032840 push 0x100405c8 */
  push32((uint32_t)(0x100405c8u));
  /* 10032845 mov dword ptr [0x100463c0], eax */
  w32((uint32_t)(0x100463c0), (EAX));
  /* 1003284a call 0x10032770 */
  push32(0x1003284fu); f_10032770();
  /* 1003284f push 0x100405b4 */
  push32((uint32_t)(0x100405b4u));
  /* 10032854 mov dword ptr [0x100463c4], eax */
  w32((uint32_t)(0x100463c4), (EAX));
  /* 10032859 call 0x10032770 */
  push32(0x1003285eu); f_10032770();
  /* 1003285e push 0x100405a4 */
  push32((uint32_t)(0x100405a4u));
  /* 10032863 mov dword ptr [0x100463c8], eax */
  w32((uint32_t)(0x100463c8), (EAX));
  /* 10032868 call 0x10032770 */
  push32(0x1003286du); f_10032770();
  /* 1003286d push 0x10040594 */
  push32((uint32_t)(0x10040594u));
  /* 10032872 mov dword ptr [0x100463cc], eax */
  w32((uint32_t)(0x100463cc), (EAX));
  /* 10032877 call 0x10032770 */
  push32(0x1003287cu); f_10032770();
  /* 1003287c push 0x10040580 */
  push32((uint32_t)(0x10040580u));
  /* 10032881 mov dword ptr [0x100463d0], eax */
  w32((uint32_t)(0x100463d0), (EAX));
  /* 10032886 call 0x10032770 */
  push32(0x1003288bu); f_10032770();
  /* 1003288b push 0x1004056c */
  push32((uint32_t)(0x1004056cu));
  /* 10032890 mov dword ptr [0x100463d4], eax */
  w32((uint32_t)(0x100463d4), (EAX));
  /* 10032895 call 0x10032770 */
  push32(0x1003289au); f_10032770();
  /* 1003289a push 0x1004055c */
  push32((uint32_t)(0x1004055cu));
  /* 1003289f mov dword ptr [0x100463d8], eax */
  w32((uint32_t)(0x100463d8), (EAX));
  /* 100328a4 call 0x10032770 */
  push32(0x100328a9u); f_10032770();
  /* 100328a9 push 0x1004054c */
  push32((uint32_t)(0x1004054cu));
  /* 100328ae mov dword ptr [0x100463dc], eax */
  w32((uint32_t)(0x100463dc), (EAX));
  /* 100328b3 call 0x10032770 */
  push32(0x100328b8u); f_10032770();
  /* 100328b8 push 0x1004053c */
  push32((uint32_t)(0x1004053cu));
  /* 100328bd mov dword ptr [0x100463e0], eax */
  w32((uint32_t)(0x100463e0), (EAX));
  /* 100328c2 call 0x10032770 */
  push32(0x100328c7u); f_10032770();
  /* 100328c7 push 0x1004052c */
  push32((uint32_t)(0x1004052cu));
  /* 100328cc mov dword ptr [0x100463e4], eax */
  w32((uint32_t)(0x100463e4), (EAX));
  /* 100328d1 call 0x10032770 */
  push32(0x100328d6u); f_10032770();
  /* 100328d6 push 0x1004051c */
  push32((uint32_t)(0x1004051cu));
  /* 100328db mov dword ptr [0x100463e8], eax */
  w32((uint32_t)(0x100463e8), (EAX));
  /* 100328e0 call 0x10032770 */
  push32(0x100328e5u); f_10032770();
  /* 100328e5 push 0x1004050c */
  push32((uint32_t)(0x1004050cu));
  /* 100328ea mov dword ptr [0x100463ec], eax */
  w32((uint32_t)(0x100463ec), (EAX));
  /* 100328ef call 0x10032770 */
  push32(0x100328f4u); f_10032770();
  /* 100328f4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100328f7 mov dword ptr [0x100463f0], eax */
  w32((uint32_t)(0x100463f0), (EAX));
  /* 100328fc push 0x100404fc */
  push32((uint32_t)(0x100404fcu));
  /* 10032901 call 0x10032770 */
  push32(0x10032906u); f_10032770();
  /* 10032906 push 0x100404ec */
  push32((uint32_t)(0x100404ecu));
  /* 1003290b mov dword ptr [0x100463f4], eax */
  w32((uint32_t)(0x100463f4), (EAX));
  /* 10032910 call 0x10032770 */
  push32(0x10032915u); f_10032770();
  /* 10032915 push 0x100404d8 */
  push32((uint32_t)(0x100404d8u));
  /* 1003291a mov dword ptr [0x100463f8], eax */
  w32((uint32_t)(0x100463f8), (EAX));
  /* 1003291f call 0x10032770 */
  push32(0x10032924u); f_10032770();
  /* 10032924 push 0x100404d0 */
  push32((uint32_t)(0x100404d0u));
  /* 10032929 mov dword ptr [0x100463fc], eax */
  w32((uint32_t)(0x100463fc), (EAX));
  /* 1003292e call 0x10032770 */
  push32(0x10032933u); f_10032770();
  /* 10032933 push 0x100404c0 */
  push32((uint32_t)(0x100404c0u));
  /* 10032938 mov dword ptr [0x10046400], eax */
  w32((uint32_t)(0x10046400), (EAX));
  /* 1003293d call 0x10032770 */
  push32(0x10032942u); f_10032770();
  /* 10032942 push 0x100404b0 */
  push32((uint32_t)(0x100404b0u));
  /* 10032947 mov dword ptr [0x10046404], eax */
  w32((uint32_t)(0x10046404), (EAX));
  /* 1003294c call 0x10032770 */
  push32(0x10032951u); f_10032770();
  /* 10032951 push 0x100404a4 */
  push32((uint32_t)(0x100404a4u));
  /* 10032956 mov dword ptr [0x10046408], eax */
  w32((uint32_t)(0x10046408), (EAX));
  /* 1003295b call 0x10032770 */
  push32(0x10032960u); f_10032770();
  /* 10032960 push 0x10040494 */
  push32((uint32_t)(0x10040494u));
  /* 10032965 mov dword ptr [0x1004640c], eax */
  w32((uint32_t)(0x1004640c), (EAX));
  /* 1003296a call 0x10032770 */
  push32(0x1003296fu); f_10032770();
  /* 1003296f push 0x1004048c */
  push32((uint32_t)(0x1004048cu));
  /* 10032974 mov dword ptr [0x10046410], eax */
  w32((uint32_t)(0x10046410), (EAX));
  /* 10032979 call 0x10032770 */
  push32(0x1003297eu); f_10032770();
  /* 1003297e push 0x1004047c */
  push32((uint32_t)(0x1004047cu));
  /* 10032983 mov dword ptr [0x10046428], eax */
  w32((uint32_t)(0x10046428), (EAX));
  /* 10032988 call 0x10032770 */
  push32(0x1003298du); f_10032770();
  /* 1003298d push 0x1004046c */
  push32((uint32_t)(0x1004046cu));
  /* 10032992 mov dword ptr [0x1004642c], eax */
  w32((uint32_t)(0x1004642c), (EAX));
  /* 10032997 call 0x10032770 */
  push32(0x1003299cu); f_10032770();
  /* 1003299c push 0x10040460 */
  push32((uint32_t)(0x10040460u));
  /* 100329a1 mov dword ptr [0x10046430], eax */
  w32((uint32_t)(0x10046430), (EAX));
  /* 100329a6 call 0x10032770 */
  push32(0x100329abu); f_10032770();
  /* 100329ab push 0x10040450 */
  push32((uint32_t)(0x10040450u));
  /* 100329b0 mov dword ptr [0x10046434], eax */
  w32((uint32_t)(0x10046434), (EAX));
  /* 100329b5 call 0x10032770 */
  push32(0x100329bau); f_10032770();
  /* 100329ba push 0x10040444 */
  push32((uint32_t)(0x10040444u));
  /* 100329bf mov dword ptr [0x10046438], eax */
  w32((uint32_t)(0x10046438), (EAX));
  /* 100329c4 call 0x10032770 */
  push32(0x100329c9u); f_10032770();
  /* 100329c9 push 0x10040434 */
  push32((uint32_t)(0x10040434u));
  /* 100329ce mov dword ptr [0x10046454], eax */
  w32((uint32_t)(0x10046454), (EAX));
  /* 100329d3 call 0x10032770 */
  push32(0x100329d8u); f_10032770();
  /* 100329d8 push 0x1004042c */
  push32((uint32_t)(0x1004042cu));
  /* 100329dd mov dword ptr [0x1004643c], eax */
  w32((uint32_t)(0x1004643c), (EAX));
  /* 100329e2 call 0x10032770 */
  push32(0x100329e7u); f_10032770();
  /* 100329e7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100329ea mov dword ptr [0x10046440], eax */
  w32((uint32_t)(0x10046440), (EAX));
  /* 100329ef push 0x1004041c */
  push32((uint32_t)(0x1004041cu));
  /* 100329f4 call 0x10032770 */
  push32(0x100329f9u); f_10032770();
  /* 100329f9 push 0x1004040c */
  push32((uint32_t)(0x1004040cu));
  /* 100329fe mov dword ptr [0x10046444], eax */
  w32((uint32_t)(0x10046444), (EAX));
  /* 10032a03 call 0x10032770 */
  push32(0x10032a08u); f_10032770();
  /* 10032a08 push 0x100403fc */
  push32((uint32_t)(0x100403fcu));
  /* 10032a0d mov dword ptr [0x10046448], eax */
  w32((uint32_t)(0x10046448), (EAX));
  /* 10032a12 call 0x10032770 */
  push32(0x10032a17u); f_10032770();
  /* 10032a17 push 0x100403f0 */
  push32((uint32_t)(0x100403f0u));
  /* 10032a1c mov dword ptr [0x1004644c], eax */
  w32((uint32_t)(0x1004644c), (EAX));
  /* 10032a21 call 0x10032770 */
  push32(0x10032a26u); f_10032770();
  /* 10032a26 push 0x100403e8 */
  push32((uint32_t)(0x100403e8u));
  /* 10032a2b mov dword ptr [0x10046450], eax */
  w32((uint32_t)(0x10046450), (EAX));
  /* 10032a30 call 0x10032770 */
  push32(0x10032a35u); f_10032770();
  /* 10032a35 push 0x100403d8 */
  push32((uint32_t)(0x100403d8u));
  /* 10032a3a mov dword ptr [0x10046458], eax */
  w32((uint32_t)(0x10046458), (EAX));
  /* 10032a3f call 0x10032770 */
  push32(0x10032a44u); f_10032770();
  /* 10032a44 push 0x100403c8 */
  push32((uint32_t)(0x100403c8u));
  /* 10032a49 mov dword ptr [0x1004645c], eax */
  w32((uint32_t)(0x1004645c), (EAX));
  /* 10032a4e call 0x10032770 */
  push32(0x10032a53u); f_10032770();
  /* 10032a53 push 0x100403b8 */
  push32((uint32_t)(0x100403b8u));
  /* 10032a58 mov dword ptr [0x10046460], eax */
  w32((uint32_t)(0x10046460), (EAX));
  /* 10032a5d call 0x10032770 */
  push32(0x10032a62u); f_10032770();
  /* 10032a62 push 0x100403a8 */
  push32((uint32_t)(0x100403a8u));
  /* 10032a67 mov dword ptr [0x10046464], eax */
  w32((uint32_t)(0x10046464), (EAX));
  /* 10032a6c call 0x10032770 */
  push32(0x10032a71u); f_10032770();
  /* 10032a71 push 0x1004039c */
  push32((uint32_t)(0x1004039cu));
  /* 10032a76 mov dword ptr [0x10046468], eax */
  w32((uint32_t)(0x10046468), (EAX));
  /* 10032a7b call 0x10032770 */
  push32(0x10032a80u); f_10032770();
  /* 10032a80 push 0x10040390 */
  push32((uint32_t)(0x10040390u));
  /* 10032a85 mov dword ptr [0x1004646c], eax */
  w32((uint32_t)(0x1004646c), (EAX));
  /* 10032a8a call 0x10032770 */
  push32(0x10032a8fu); f_10032770();
  /* 10032a8f push 0x10040380 */
  push32((uint32_t)(0x10040380u));
  /* 10032a94 mov dword ptr [0x10046470], eax */
  w32((uint32_t)(0x10046470), (EAX));
  /* 10032a99 call 0x10032770 */
  push32(0x10032a9eu); f_10032770();
  /* 10032a9e push 0x10040374 */
  push32((uint32_t)(0x10040374u));
  /* 10032aa3 mov dword ptr [0x10046474], eax */
  w32((uint32_t)(0x10046474), (EAX));
  /* 10032aa8 call 0x10032770 */
  push32(0x10032aadu); f_10032770();
  /* 10032aad push 0x10040368 */
  push32((uint32_t)(0x10040368u));
  /* 10032ab2 mov dword ptr [0x10046478], eax */
  w32((uint32_t)(0x10046478), (EAX));
  /* 10032ab7 call 0x10032770 */
  push32(0x10032abcu); f_10032770();
  /* 10032abc push 0x1004035c */
  push32((uint32_t)(0x1004035cu));
  /* 10032ac1 mov dword ptr [0x1004647c], eax */
  w32((uint32_t)(0x1004647c), (EAX));
  /* 10032ac6 call 0x10032770 */
  push32(0x10032acbu); f_10032770();
  /* 10032acb push 0x10040350 */
  push32((uint32_t)(0x10040350u));
  /* 10032ad0 mov dword ptr [0x100461b0], eax */
  w32((uint32_t)(0x100461b0), (EAX));
  /* 10032ad5 call 0x10032770 */
  push32(0x10032adau); f_10032770();
  /* 10032ada add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10032add mov dword ptr [0x10046480], eax */
  w32((uint32_t)(0x10046480), (EAX));
  /* 10032ae2 push 0x10040344 */
  push32((uint32_t)(0x10040344u));
  /* 10032ae7 call 0x10032770 */
  push32(0x10032aecu); f_10032770();
  /* 10032aec push 0x10040338 */
  push32((uint32_t)(0x10040338u));
  /* 10032af1 mov dword ptr [0x10046484], eax */
  w32((uint32_t)(0x10046484), (EAX));
  /* 10032af6 call 0x10032770 */
  push32(0x10032afbu); f_10032770();
  /* 10032afb push 0x10040328 */
  push32((uint32_t)(0x10040328u));
  /* 10032b00 mov dword ptr [0x10046488], eax */
  w32((uint32_t)(0x10046488), (EAX));
  /* 10032b05 call 0x10032770 */
  push32(0x10032b0au); f_10032770();
  /* 10032b0a push 0x1004031c */
  push32((uint32_t)(0x1004031cu));
  /* 10032b0f mov dword ptr [0x1004648c], eax */
  w32((uint32_t)(0x1004648c), (EAX));
  /* 10032b14 call 0x10032770 */
  push32(0x10032b19u); f_10032770();
  /* 10032b19 push 0x10040310 */
  push32((uint32_t)(0x10040310u));
  /* 10032b1e mov dword ptr [0x10046490], eax */
  w32((uint32_t)(0x10046490), (EAX));
  /* 10032b23 call 0x10032770 */
  push32(0x10032b28u); f_10032770();
  /* 10032b28 mov dword ptr [0x10046494], eax */
  w32((uint32_t)(0x10046494), (EAX));
  /* 10032b2d push 0x10040300 */
  push32((uint32_t)(0x10040300u));
  /* 10032b32 call 0x10032770 */
  push32(0x10032b37u); f_10032770();
  /* 10032b37 push 0x100402f0 */
  push32((uint32_t)(0x100402f0u));
  /* 10032b3c mov dword ptr [0x10046498], eax */
  w32((uint32_t)(0x10046498), (EAX));
  /* 10032b41 call 0x10032770 */
  push32(0x10032b46u); f_10032770();
  /* 10032b46 push 0x100402e4 */
  push32((uint32_t)(0x100402e4u));
  /* 10032b4b mov dword ptr [0x1004649c], eax */
  w32((uint32_t)(0x1004649c), (EAX));
  /* 10032b50 call 0x10032770 */
  push32(0x10032b55u); f_10032770();
  /* 10032b55 push 0x100402dc */
  push32((uint32_t)(0x100402dcu));
  /* 10032b5a mov dword ptr [0x100464a0], eax */
  w32((uint32_t)(0x100464a0), (EAX));
  /* 10032b5f call 0x10032770 */
  push32(0x10032b64u); f_10032770();
  /* 10032b64 push 0x100402cc */
  push32((uint32_t)(0x100402ccu));
  /* 10032b69 mov dword ptr [0x100464a4], eax */
  w32((uint32_t)(0x100464a4), (EAX));
  /* 10032b6e call 0x10032770 */
  push32(0x10032b73u); f_10032770();
  /* 10032b73 push 0x100402c4 */
  push32((uint32_t)(0x100402c4u));
  /* 10032b78 mov dword ptr [0x100464a8], eax */
  w32((uint32_t)(0x100464a8), (EAX));
  /* 10032b7d call 0x10032770 */
  push32(0x10032b82u); f_10032770();
  /* 10032b82 push 0x100402b8 */
  push32((uint32_t)(0x100402b8u));
  /* 10032b87 mov dword ptr [0x100464ac], eax */
  w32((uint32_t)(0x100464ac), (EAX));
  /* 10032b8c call 0x10032770 */
  push32(0x10032b91u); f_10032770();
  /* 10032b91 push 0x100402b0 */
  push32((uint32_t)(0x100402b0u));
  /* 10032b96 mov dword ptr [0x100464b0], eax */
  w32((uint32_t)(0x100464b0), (EAX));
  /* 10032b9b call 0x10032770 */
  push32(0x10032ba0u); f_10032770();
  /* 10032ba0 push 0x1004029c */
  push32((uint32_t)(0x1004029cu));
  /* 10032ba5 mov dword ptr [0x100464b4], eax */
  w32((uint32_t)(0x100464b4), (EAX));
  /* 10032baa call 0x10032770 */
  push32(0x10032bafu); f_10032770();
  /* 10032baf push 0x10040290 */
  push32((uint32_t)(0x10040290u));
  /* 10032bb4 mov dword ptr [0x10043608], eax */
  w32((uint32_t)(0x10043608), (EAX));
  /* 10032bb9 call 0x10032770 */
  push32(0x10032bbeu); f_10032770();
  /* 10032bbe push 0x10040284 */
  push32((uint32_t)(0x10040284u));
  /* 10032bc3 mov dword ptr [0x100464c0], eax */
  w32((uint32_t)(0x100464c0), (EAX));
  /* 10032bc8 call 0x10032770 */
  push32(0x10032bcdu); f_10032770();
  /* 10032bcd add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10032bd0 mov dword ptr [0x100464bc], eax */
  w32((uint32_t)(0x100464bc), (EAX));
  /* 10032bd5 push 0x10040270 */
  push32((uint32_t)(0x10040270u));
  /* 10032bda call 0x10032770 */
  push32(0x10032bdfu); f_10032770();
  /* 10032bdf push 0x10040260 */
  push32((uint32_t)(0x10040260u));
  /* 10032be4 mov dword ptr [0x100464c4], eax */
  w32((uint32_t)(0x100464c4), (EAX));
  /* 10032be9 call 0x10032770 */
  push32(0x10032beeu); f_10032770();
  /* 10032bee push 0x10040250 */
  push32((uint32_t)(0x10040250u));
  /* 10032bf3 mov dword ptr [0x100464c8], eax */
  w32((uint32_t)(0x100464c8), (EAX));
  /* 10032bf8 call 0x10032770 */
  push32(0x10032bfdu); f_10032770();
  /* 10032bfd push 0x10040240 */
  push32((uint32_t)(0x10040240u));
  /* 10032c02 mov dword ptr [0x100464cc], eax */
  w32((uint32_t)(0x100464cc), (EAX));
  /* 10032c07 call 0x10032770 */
  push32(0x10032c0cu); f_10032770();
  /* 10032c0c push 0x10040234 */
  push32((uint32_t)(0x10040234u));
  /* 10032c11 mov dword ptr [0x10046418], eax */
  w32((uint32_t)(0x10046418), (EAX));
  /* 10032c16 call 0x10032770 */
  push32(0x10032c1bu); f_10032770();
  /* 10032c1b push 0x10040224 */
  push32((uint32_t)(0x10040224u));
  /* 10032c20 mov dword ptr [0x10046414], eax */
  w32((uint32_t)(0x10046414), (EAX));
  /* 10032c25 call 0x10032770 */
  push32(0x10032c2au); f_10032770();
  /* 10032c2a push 0x10040210 */
  push32((uint32_t)(0x10040210u));
  /* 10032c2f mov dword ptr [0x1004641c], eax */
  w32((uint32_t)(0x1004641c), (EAX));
  /* 10032c34 call 0x10032770 */
  push32(0x10032c39u); f_10032770();
  /* 10032c39 push 0x100401f8 */
  push32((uint32_t)(0x100401f8u));
  /* 10032c3e mov dword ptr [0x10046420], eax */
  w32((uint32_t)(0x10046420), (EAX));
  /* 10032c43 call 0x10032770 */
  push32(0x10032c48u); f_10032770();
  /* 10032c48 push 0x100401e8 */
  push32((uint32_t)(0x100401e8u));
  /* 10032c4d mov dword ptr [0x10046424], eax */
  w32((uint32_t)(0x10046424), (EAX));
  /* 10032c52 call 0x10032770 */
  push32(0x10032c57u); f_10032770();
  /* 10032c57 push 0x100401d0 */
  push32((uint32_t)(0x100401d0u));
  /* 10032c5c mov dword ptr [0x100464e8], eax */
  w32((uint32_t)(0x100464e8), (EAX));
  /* 10032c61 call 0x10032770 */
  push32(0x10032c66u); f_10032770();
  /* 10032c66 push 0x100401c0 */
  push32((uint32_t)(0x100401c0u));
  /* 10032c6b mov dword ptr [0x10046518], eax */
  w32((uint32_t)(0x10046518), (EAX));
  /* 10032c70 call 0x10032770 */
  push32(0x10032c75u); f_10032770();
  /* 10032c75 push 0x100401b8 */
  push32((uint32_t)(0x100401b8u));
  /* 10032c7a mov dword ptr [0x100464e0], eax */
  w32((uint32_t)(0x100464e0), (EAX));
  /* 10032c7f call 0x10032770 */
  push32(0x10032c84u); f_10032770();
  /* 10032c84 push 0x100401a8 */
  push32((uint32_t)(0x100401a8u));
  /* 10032c89 mov dword ptr [0x100464ec], eax */
  w32((uint32_t)(0x100464ec), (EAX));
  /* 10032c8e call 0x10032770 */
  push32(0x10032c93u); f_10032770();
  /* 10032c93 push 0x1004019c */
  push32((uint32_t)(0x1004019cu));
  /* 10032c98 mov dword ptr [0x10046538], eax */
  w32((uint32_t)(0x10046538), (EAX));
  /* 10032c9d call 0x10032770 */
  push32(0x10032ca2u); f_10032770();
  /* 10032ca2 push 0x10040194 */
  push32((uint32_t)(0x10040194u));
  /* 10032ca7 mov dword ptr [0x100464d0], eax */
  w32((uint32_t)(0x100464d0), (EAX));
  /* 10032cac call 0x10032770 */
  push32(0x10032cb1u); f_10032770();
  /* 10032cb1 push 0x10040188 */
  push32((uint32_t)(0x10040188u));
  /* 10032cb6 mov dword ptr [0x100464d4], eax */
  w32((uint32_t)(0x100464d4), (EAX));
  /* 10032cbb call 0x10032770 */
  push32(0x10032cc0u); f_10032770();
  /* 10032cc0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10032cc3 mov dword ptr [0x100464d8], eax */
  w32((uint32_t)(0x100464d8), (EAX));
  /* 10032cc8 push 0x10040178 */
  push32((uint32_t)(0x10040178u));
  /* 10032ccd call 0x10032770 */
  push32(0x10032cd2u); f_10032770();
  /* 10032cd2 push 0x10040164 */
  push32((uint32_t)(0x10040164u));
  /* 10032cd7 mov dword ptr [0x100464dc], eax */
  w32((uint32_t)(0x100464dc), (EAX));
  /* 10032cdc call 0x10032770 */
  push32(0x10032ce1u); f_10032770();
  /* 10032ce1 push 0x10040148 */
  push32((uint32_t)(0x10040148u));
  /* 10032ce6 mov dword ptr [0x100464e4], eax */
  w32((uint32_t)(0x100464e4), (EAX));
  /* 10032ceb call 0x10032770 */
  push32(0x10032cf0u); f_10032770();
  /* 10032cf0 push 0x10040134 */
  push32((uint32_t)(0x10040134u));
  /* 10032cf5 mov dword ptr [0x100464f0], eax */
  w32((uint32_t)(0x100464f0), (EAX));
  /* 10032cfa call 0x10032770 */
  push32(0x10032cffu); f_10032770();
  /* 10032cff push 0x10040128 */
  push32((uint32_t)(0x10040128u));
  /* 10032d04 mov dword ptr [0x100464f4], eax */
  w32((uint32_t)(0x100464f4), (EAX));
  /* 10032d09 call 0x10032770 */
  push32(0x10032d0eu); f_10032770();
  /* 10032d0e push 0x10040118 */
  push32((uint32_t)(0x10040118u));
  /* 10032d13 mov dword ptr [0x1004652c], eax */
  w32((uint32_t)(0x1004652c), (EAX));
  /* 10032d18 call 0x10032770 */
  push32(0x10032d1du); f_10032770();
  /* 10032d1d push 0x1004010c */
  push32((uint32_t)(0x1004010cu));
  /* 10032d22 mov dword ptr [0x10046530], eax */
  w32((uint32_t)(0x10046530), (EAX));
  /* 10032d27 call 0x10032770 */
  push32(0x10032d2cu); f_10032770();
  /* 10032d2c push 0x10040100 */
  push32((uint32_t)(0x10040100u));
  /* 10032d31 mov dword ptr [0x10046534], eax */
  w32((uint32_t)(0x10046534), (EAX));
  /* 10032d36 call 0x10032770 */
  push32(0x10032d3bu); f_10032770();
  /* 10032d3b push 0x100400e8 */
  push32((uint32_t)(0x100400e8u));
  /* 10032d40 mov dword ptr [0x1004653c], eax */
  w32((uint32_t)(0x1004653c), (EAX));
  /* 10032d45 call 0x10032770 */
  push32(0x10032d4au); f_10032770();
  /* 10032d4a push 0x100400cc */
  push32((uint32_t)(0x100400ccu));
  /* 10032d4f mov dword ptr [0x100464f8], eax */
  w32((uint32_t)(0x100464f8), (EAX));
  /* 10032d54 call 0x10032770 */
  push32(0x10032d59u); f_10032770();
  /* 10032d59 push 0x100400b0 */
  push32((uint32_t)(0x100400b0u));
  /* 10032d5e mov dword ptr [0x100464fc], eax */
  w32((uint32_t)(0x100464fc), (EAX));
  /* 10032d63 call 0x10032770 */
  push32(0x10032d68u); f_10032770();
  /* 10032d68 push 0x10040098 */
  push32((uint32_t)(0x10040098u));
  /* 10032d6d mov dword ptr [0x10046500], eax */
  w32((uint32_t)(0x10046500), (EAX));
  /* 10032d72 call 0x10032770 */
  push32(0x10032d77u); f_10032770();
  /* 10032d77 push 0x10040080 */
  push32((uint32_t)(0x10040080u));
  /* 10032d7c mov dword ptr [0x10046504], eax */
  w32((uint32_t)(0x10046504), (EAX));
  /* 10032d81 call 0x10032770 */
  push32(0x10032d86u); f_10032770();
  /* 10032d86 push 0x10040074 */
  push32((uint32_t)(0x10040074u));
  /* 10032d8b mov dword ptr [0x10046508], eax */
  w32((uint32_t)(0x10046508), (EAX));
  /* 10032d90 call 0x10032770 */
  push32(0x10032d95u); f_10032770();
  /* 10032d95 push 0x10040068 */
  push32((uint32_t)(0x10040068u));
  /* 10032d9a mov dword ptr [0x1004650c], eax */
  w32((uint32_t)(0x1004650c), (EAX));
  /* 10032d9f call 0x10032770 */
  push32(0x10032da4u); f_10032770();
  /* 10032da4 push 0x10040058 */
  push32((uint32_t)(0x10040058u));
  /* 10032da9 mov dword ptr [0x10046510], eax */
  w32((uint32_t)(0x10046510), (EAX));
  /* 10032dae call 0x10032770 */
  push32(0x10032db3u); f_10032770();
  /* 10032db3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10032db6 mov dword ptr [0x10046514], eax */
  w32((uint32_t)(0x10046514), (EAX));
  /* 10032dbb push 0x1004004c */
  push32((uint32_t)(0x1004004cu));
  /* 10032dc0 call 0x10032770 */
  push32(0x10032dc5u); f_10032770();
  /* 10032dc5 push 0x10040040 */
  push32((uint32_t)(0x10040040u));
  /* 10032dca mov dword ptr [0x1004651c], eax */
  w32((uint32_t)(0x1004651c), (EAX));
  /* 10032dcf call 0x10032770 */
  push32(0x10032dd4u); f_10032770();
  /* 10032dd4 push 0x10040034 */
  push32((uint32_t)(0x10040034u));
  /* 10032dd9 mov dword ptr [0x10046520], eax */
  w32((uint32_t)(0x10046520), (EAX));
  /* 10032dde call 0x10032770 */
  push32(0x10032de3u); f_10032770();
  /* 10032de3 push 0x10040024 */
  push32((uint32_t)(0x10040024u));
  /* 10032de8 mov dword ptr [0x10046540], eax */
  w32((uint32_t)(0x10046540), (EAX));
  /* 10032ded call 0x10032770 */
  push32(0x10032df2u); f_10032770();
  /* 10032df2 push 0x10040018 */
  push32((uint32_t)(0x10040018u));
  /* 10032df7 mov dword ptr [0x10046544], eax */
  w32((uint32_t)(0x10046544), (EAX));
  /* 10032dfc call 0x10032770 */
  push32(0x10032e01u); f_10032770();
  /* 10032e01 push 0x1004000c */
  push32((uint32_t)(0x1004000cu));
  /* 10032e06 mov dword ptr [0x10046548], eax */
  w32((uint32_t)(0x10046548), (EAX));
  /* 10032e0b call 0x10032770 */
  push32(0x10032e10u); f_10032770();
  /* 10032e10 push 0x10040000 */
  push32((uint32_t)(0x10040000u));
  /* 10032e15 mov dword ptr [0x1004654c], eax */
  w32((uint32_t)(0x1004654c), (EAX));
  /* 10032e1a call 0x10032770 */
  push32(0x10032e1fu); f_10032770();
  /* 10032e1f push 0x1003fff0 */
  push32((uint32_t)(0x1003fff0u));
  /* 10032e24 mov dword ptr [0x10046550], eax */
  w32((uint32_t)(0x10046550), (EAX));
  /* 10032e29 call 0x10032770 */
  push32(0x10032e2eu); f_10032770();
  /* 10032e2e push 0x1003ffe0 */
  push32((uint32_t)(0x1003ffe0u));
  /* 10032e33 mov dword ptr [0x10046554], eax */
  w32((uint32_t)(0x10046554), (EAX));
  /* 10032e38 call 0x10032770 */
  push32(0x10032e3du); f_10032770();
  /* 10032e3d push 0x1003ffcc */
  push32((uint32_t)(0x1003ffccu));
  /* 10032e42 mov dword ptr [0x1004655c], eax */
  w32((uint32_t)(0x1004655c), (EAX));
  /* 10032e47 call 0x10032770 */
  push32(0x10032e4cu); f_10032770();
  /* 10032e4c mov dword ptr [0x10046558], eax */
  w32((uint32_t)(0x10046558), (EAX));
  /* 10032e51 push 0x1003ffb4 */
  push32((uint32_t)(0x1003ffb4u));
  /* 10032e56 call 0x10032770 */
  push32(0x10032e5bu); f_10032770();
  /* 10032e5b push 0x1003ff9c */
  push32((uint32_t)(0x1003ff9cu));
  /* 10032e60 mov dword ptr [0x100438a0], eax */
  w32((uint32_t)(0x100438a0), (EAX));
  /* 10032e65 call 0x10032770 */
  push32(0x10032e6au); f_10032770();
  /* 10032e6a push 0x1003ff8c */
  push32((uint32_t)(0x1003ff8cu));
  /* 10032e6f mov dword ptr [0x10043700], eax */
  w32((uint32_t)(0x10043700), (EAX));
  /* 10032e74 call 0x10032770 */
  push32(0x10032e79u); f_10032770();
  /* 10032e79 push 0x1003ff7c */
  push32((uint32_t)(0x1003ff7cu));
  /* 10032e7e mov dword ptr [0x10046560], eax */
  w32((uint32_t)(0x10046560), (EAX));
  /* 10032e83 call 0x10032770 */
  push32(0x10032e88u); f_10032770();
  /* 10032e88 push 0x1003ff6c */
  push32((uint32_t)(0x1003ff6cu));
  /* 10032e8d mov dword ptr [0x10046524], eax */
  w32((uint32_t)(0x10046524), (EAX));
  /* 10032e92 call 0x10032770 */
  push32(0x10032e97u); f_10032770();
  /* 10032e97 push 0x1003ff5c */
  push32((uint32_t)(0x1003ff5cu));
  /* 10032e9c mov dword ptr [0x10046528], eax */
  w32((uint32_t)(0x10046528), (EAX));
  /* 10032ea1 call 0x10032770 */
  push32(0x10032ea6u); f_10032770();
  /* 10032ea6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10032ea9 mov dword ptr [0x10046280], eax */
  w32((uint32_t)(0x10046280), (EAX));
  /* 10032eae push 0x1003ff4c */
  push32((uint32_t)(0x1003ff4cu));
  /* 10032eb3 call 0x10032770 */
  push32(0x10032eb8u); f_10032770();
  /* 10032eb8 push 0x1003ff3c */
  push32((uint32_t)(0x1003ff3cu));
  /* 10032ebd mov dword ptr [0x10046238], eax */
  w32((uint32_t)(0x10046238), (EAX));
  /* 10032ec2 call 0x10032770 */
  push32(0x10032ec7u); f_10032770();
  /* 10032ec7 push 0x1003ff2c */
  push32((uint32_t)(0x1003ff2cu));
  /* 10032ecc mov dword ptr [0x10045f90], eax */
  w32((uint32_t)(0x10045f90), (EAX));
  /* 10032ed1 call 0x10032770 */
  push32(0x10032ed6u); f_10032770();
  /* 10032ed6 push 0x1003ff1c */
  push32((uint32_t)(0x1003ff1cu));
  /* 10032edb mov dword ptr [0x10043900], eax */
  w32((uint32_t)(0x10043900), (EAX));
  /* 10032ee0 call 0x10032770 */
  push32(0x10032ee5u); f_10032770();
  /* 10032ee5 push 0x1003ff08 */
  push32((uint32_t)(0x1003ff08u));
  /* 10032eea mov dword ptr [0x10046218], eax */
  w32((uint32_t)(0x10046218), (EAX));
  /* 10032eef call 0x10032770 */
  push32(0x10032ef4u); f_10032770();
  /* 10032ef4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10032ef7 mov dword ptr [0x10043918], eax */
  w32((uint32_t)(0x10043918), (EAX));
L_10032efc:;
  /* 10032efc mov eax, 1 */
  EAX = (0x1u);
  /* 10032f01 ret 0xc */
  ESPCHK(0x100327d0u, _esp0);
  ESP += 16; return;
}

/* FUN_10002f10 @ 0x10032f10 (34 bytes, 10 insns) */
void f_10032f10(void) {
  FTRACE(0x10032f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10032f10 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10032f14 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10032f18 push eax */
  push32((uint32_t)(EAX));
  /* 10032f19 push ecx */
  push32((uint32_t)(ECX));
  /* 10032f1a push 0x10040640 */
  push32((uint32_t)(0x10040640u));
  /* 10032f1f push 0x10043778 */
  push32((uint32_t)(0x10043778u));
  /* 10032f24 call 0x10036e50 */
  push32(0x10032f29u); f_10036e50();
  /* 10032f29 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10032f2c mov eax, 0x10043778 */
  EAX = (0x10043778u);
  /* 10032f31 ret  */
  ESPCHK(0x10032f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f40 @ 0x10032f40 (45 bytes, 16 insns) */
void f_10032f40(void) {
  FTRACE(0x10032f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10032f40 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10032f44 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10032f48 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10032f4d push eax */
  push32((uint32_t)(EAX));
  /* 10032f4e push ecx */
  push32((uint32_t)(ECX));
  /* 10032f4f call 0x10032720 */
  push32(0x10032f54u); f_10032720();
  /* 10032f54 mov ecx, eax */
  ECX = (EAX);
  /* 10032f56 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10032f5a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10032f5d lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10032f60 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10032f63 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10032f66 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10032f69 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10032f6a idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10032f6c ret  */
  ESPCHK(0x10032f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f70 @ 0x10032f70 (171 bytes, 77 insns) */
void f_10032f70(void) {
  FTRACE(0x10032f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10032f70 push ebx */
  push32((uint32_t)(EBX));
  /* 10032f71 push ebp */
  push32((uint32_t)(EBP));
  /* 10032f72 push esi */
  push32((uint32_t)(ESI));
  /* 10032f73 push edi */
  push32((uint32_t)(EDI));
  /* 10032f74 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 10032f78 push edi */
  push32((uint32_t)(EDI));
  /* 10032f79 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10032f7fu);
  /* 10032f7f mov esi, dword ptr [esp + 0x1c] */
  ESI = (r32((uint32_t)(ESP + 0x1c)));
  /* 10032f83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10032f86 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10032f88 jl 0x10032f91 */
  if ((C.sf!=C.of)) goto L_10032f91;
  /* 10032f8a pop edi */
  EDI = (pop32());
  /* 10032f8b pop esi */
  ESI = (pop32());
  /* 10032f8c pop ebp */
  EBP = (pop32());
  /* 10032f8d mov al, 1 */
  AL = (0x1u);
  /* 10032f8f pop ebx */
  EBX = (pop32());
  /* 10032f90 ret  */
  ESPCHK(0x10032f70u, _esp0);
  ESP += 4; return;
L_10032f91:;
  /* 10032f91 push edi */
  push32((uint32_t)(EDI));
  /* 10032f92 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10032f98u);
  /* 10032f98 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 10032f9c sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10032f9e push esi */
  push32((uint32_t)(ESI));
  /* 10032f9f push edi */
  push32((uint32_t)(EDI));
  /* 10032fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10032fa1 mov dword ptr [esp + 0x24], esi */
  w32((uint32_t)(ESP + 0x24), (ESI));
  /* 10032fa5 call 0x10032f40 */
  push32(0x10032faau); f_10032f40();
  /* 10032faa push ebp */
  push32((uint32_t)(EBP));
  /* 10032fab mov ebx, eax */
  EBX = (EAX);
  /* 10032fad call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10032fb3u);
  /* 10032fb3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10032fb6 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10032fb8 jle 0x10033014 */
  if ((C.zf||C.sf!=C.of)) goto L_10033014;
  /* 10032fba cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10032fc0 jle 0x10033014 */
  if ((C.zf||C.sf!=C.of)) goto L_10033014;
  /* 10032fc2 mov eax, 0x45e7b273 */
  EAX = (0x45e7b273u);
  /* 10032fc7 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10032fc9 imul ebx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(EBX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10032fcb sar edx, 0xc */
  EDX = (sh_sar((uint32_t)(EDX), (0xcu)&0x1f, 32));
  /* 10032fce mov eax, edx */
  EAX = (EDX);
  /* 10032fd0 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 10032fd3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10032fd5 mov ebx, edx */
  EBX = (EDX);
L_10032fd7:;
  /* 10032fd7 cmp ebx, 0xf */
  { uint32_t _a=(EBX),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10032fda mov eax, 0xf */
  EAX = (0xfu);
  /* 10032fdf jg 0x10032fe3 */
  if ((!C.zf&&C.sf==C.of)) goto L_10032fe3;
  /* 10032fe1 mov eax, ebx */
  EAX = (EBX);
L_10032fe3:;
  /* 10032fe3 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10032fe5 jge 0x10032ff6 */
  if ((C.sf==C.of)) goto L_10032ff6;
  /* 10032fe7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10032fe9 push ebp */
  push32((uint32_t)(EBP));
  /* 10032fea push edi */
  push32((uint32_t)(EDI));
  /* 10032feb call 0x100325f0 */
  push32(0x10032ff0u); f_100325f0();
  /* 10032ff0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10032ff3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10032ff4 jmp 0x10032fd7 */
  goto L_10032fd7;
L_10032ff6:;
  /* 10032ff6 mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 10032ffa push ecx */
  push32((uint32_t)(ECX));
  /* 10032ffb push edi */
  push32((uint32_t)(EDI));
  /* 10032ffc push ebp */
  push32((uint32_t)(EBP));
  /* 10032ffd call 0x10032f40 */
  push32(0x10033002u); f_10032f40();
  /* 10033002 push eax */
  push32((uint32_t)(EAX));
  /* 10033003 push edi */
  push32((uint32_t)(EDI));
  /* 10033004 push ebp */
  push32((uint32_t)(EBP));
  /* 10033005 call 0x100325f0 */
  push32(0x1003300au); f_100325f0();
  /* 1003300a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003300d mov al, 1 */
  AL = (0x1u);
  /* 1003300f pop edi */
  EDI = (pop32());
  /* 10033010 pop esi */
  ESI = (pop32());
  /* 10033011 pop ebp */
  EBP = (pop32());
  /* 10033012 pop ebx */
  EBX = (pop32());
  /* 10033013 ret  */
  ESPCHK(0x10032f70u, _esp0);
  ESP += 4; return;
L_10033014:;
  /* 10033014 pop edi */
  EDI = (pop32());
  /* 10033015 pop esi */
  ESI = (pop32());
  /* 10033016 pop ebp */
  EBP = (pop32());
  /* 10033017 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 10033019 pop ebx */
  EBX = (pop32());
  /* 1003301a ret  */
  ESPCHK(0x10032f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10003020 @ 0x10033020 (369 bytes, 82 insns) */
void f_10033020(void) {
  FTRACE(0x10033020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10033020 push ebx */
  push32((uint32_t)(EBX));
  /* 10033021 push esi */
  push32((uint32_t)(ESI));
  /* 10033022 call dword ptr [0x100464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d0))), 0x10033028u);
  /* 10033028 push 0x10046160 */
  push32((uint32_t)(0x10046160u));
  /* 1003302d mov dword ptr [0x10046284], eax */
  w32((uint32_t)(0x10046284), (EAX));
  /* 10033032 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x10033038u);
  /* 10033038 mov ebx, 1 */
  EBX = (0x1u);
  /* 1003303d mov esi, eax */
  ESI = (EAX);
  /* 1003303f push ebx */
  push32((uint32_t)(EBX));
  /* 10033040 call 0x10032710 */
  push32(0x10033045u); f_10032710();
  /* 10033045 push 4 */
  push32((uint32_t)(0x4u));
  /* 10033047 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10033049 call 0x10032710 */
  push32(0x1003304eu); f_10032710();
  /* 1003304e push 5 */
  push32((uint32_t)(0x5u));
  /* 10033050 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10033052 call 0x10032710 */
  push32(0x10033057u); f_10032710();
  /* 10033057 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10033059 mov eax, dword ptr [0x10046284] */
  EAX = (r32((uint32_t)(0x10046284)));
  /* 1003305e push 3 */
  push32((uint32_t)(0x3u));
  /* 10033060 mov dword ptr [0x10046180], esi */
  w32((uint32_t)(0x10046180), (ESI));
  /* 10033066 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 10033069 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 1003306c lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 1003306f lea eax, [eax + ecx*2] */
  EAX = ((uint32_t)(EAX + ECX*2));
  /* 10033072 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10033075 mov ecx, dword ptr [eax + 0x10043ac0] */
  ECX = (r32((uint32_t)(EAX + 0x10043ac0)));
  /* 1003307b lea edx, [eax + 0x10043930] */
  EDX = ((uint32_t)(EAX + 0x10043930));
  /* 10033081 mov dword ptr [0x10046190], edx */
  w32((uint32_t)(0x10046190), (EDX));
  /* 10033087 lea edx, [eax + 0x10043ac4] */
  EDX = ((uint32_t)(EAX + 0x10043ac4));
  /* 1003308d mov dword ptr [0x100465d4], ecx */
  w32((uint32_t)(0x100465d4), (ECX));
  /* 10033093 mov ecx, dword ptr [eax + 0x10043c54] */
  ECX = (r32((uint32_t)(EAX + 0x10043c54)));
  /* 10033099 mov dword ptr [0x10046194], edx */
  w32((uint32_t)(0x10046194), (EDX));
  /* 1003309f lea edx, [eax + 0x10043c58] */
  EDX = ((uint32_t)(EAX + 0x10043c58));
  /* 100330a5 mov dword ptr [0x100465d8], ecx */
  w32((uint32_t)(0x100465d8), (ECX));
  /* 100330ab mov dword ptr [0x1004621c], edx */
  w32((uint32_t)(0x1004621c), (EDX));
  /* 100330b1 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x100330b7u);
  /* 100330b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 100330b9 mov dword ptr [0x10046260], eax */
  w32((uint32_t)(0x10046260), (EAX));
  /* 100330be call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x100330c4u);
  /* 100330c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 100330c6 mov dword ptr [0x100435f0], eax */
  w32((uint32_t)(0x100435f0), (EAX));
  /* 100330cb call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x100330d1u);
  /* 100330d1 push 4 */
  push32((uint32_t)(0x4u));
  /* 100330d3 mov dword ptr [0x10046350], eax */
  w32((uint32_t)(0x10046350), (EAX));
  /* 100330d8 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x100330deu);
  /* 100330de push 5 */
  push32((uint32_t)(0x5u));
  /* 100330e0 mov dword ptr [0x100436f8], eax */
  w32((uint32_t)(0x100436f8), (EAX));
  /* 100330e5 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x100330ebu);
  /* 100330eb push ebx */
  push32((uint32_t)(EBX));
  /* 100330ec mov dword ptr [0x100460b8], eax */
  w32((uint32_t)(0x100460b8), (EAX));
  /* 100330f1 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x100330f7u);
  /* 100330f7 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100330fa mov dword ptr [0x10046308], eax */
  w32((uint32_t)(0x10046308), (EAX));
  /* 100330ff call 0x10032650 */
  push32(0x10033104u); f_10032650();
  /* 10033104 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10033106 jne 0x10033112 */
  if (!C.zf) goto L_10033112;
  /* 10033108 mov dword ptr [0x1003f248], 4 */
  w32((uint32_t)(0x1003f248), (0x4u));
L_10033112:;
  /* 10033112 push 0x1003f114 */
  push32((uint32_t)(0x1003f114u));
  /* 10033117 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10033119 call dword ptr [0x100464dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464dc))), 0x1003311fu);
  /* 1003311f push 0x10046568 */
  push32((uint32_t)(0x10046568u));
  /* 10033124 call 0x10032700 */
  push32(0x10033129u); f_10032700();
  /* 10033129 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1003312b push 0x1003f244 */
  push32((uint32_t)(0x1003f244u));
  /* 10033130 call 0x100326e0 */
  push32(0x10033135u); f_100326e0();
  /* 10033135 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033138 mov byte ptr [0x10046158], bl */
  w8((uint32_t)(0x10046158), (BL));
  /* 1003313e mov byte ptr [0x1004615a], bl */
  w8((uint32_t)(0x1004615a), (BL));
  /* 10033144 mov byte ptr [0x1004615c], bl */
  w8((uint32_t)(0x1004615c), (BL));
  /* 1003314a mov byte ptr [0x1004615d], bl */
  w8((uint32_t)(0x1004615d), (BL));
  /* 10033150 mov byte ptr [0x100462f3], bl */
  w8((uint32_t)(0x100462f3), (BL));
  /* 10033156 mov byte ptr [0x100462f1], bl */
  w8((uint32_t)(0x100462f1), (BL));
  /* 1003315c mov byte ptr [0x100462f4], bl */
  w8((uint32_t)(0x100462f4), (BL));
  /* 10033162 mov byte ptr [0x100462f5], bl */
  w8((uint32_t)(0x100462f5), (BL));
  /* 10033168 pop esi */
  ESI = (pop32());
  /* 10033169 mov byte ptr [0x1004615b], 0 */
  w8((uint32_t)(0x1004615b), (0x0u));
  /* 10033170 mov byte ptr [0x10046159], 0 */
  w8((uint32_t)(0x10046159), (0x0u));
  /* 10033177 mov byte ptr [0x100462f0], 0 */
  w8((uint32_t)(0x100462f0), (0x0u));
  /* 1003317e mov byte ptr [0x100462f2], 0 */
  w8((uint32_t)(0x100462f2), (0x0u));
  /* 10033185 mov dword ptr [0x1004661c], 0 */
  w32((uint32_t)(0x1004661c), (0x0u));
  /* 1003318f pop ebx */
  EBX = (pop32());
  /* 10033190 ret  */
  ESPCHK(0x10033020u, _esp0);
  ESP += 4; return;
}

/* FUN_100031a0 @ 0x100331a0 (85 bytes, 29 insns) */
void f_100331a0(void) {
  FTRACE(0x100331a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100331a0 mov eax, dword ptr [0x10045f28] */
  EAX = (r32((uint32_t)(0x10045f28)));
  /* 100331a5 push esi */
  push32((uint32_t)(ESI));
  /* 100331a6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100331a9 jg 0x100331f3 */
  if ((!C.zf&&C.sf==C.of)) goto L_100331f3;
  /* 100331ab push 0x10043658 */
  push32((uint32_t)(0x10043658u));
  /* 100331b0 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x100331b6u);
  /* 100331b6 mov ecx, eax */
  ECX = (EAX);
  /* 100331b8 mov eax, 0x38e38e39 */
  EAX = (0x38e38e39u);
  /* 100331bd imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100331bf sar edx, 3 */
  EDX = (sh_sar((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 100331c2 mov eax, edx */
  EAX = (EDX);
  /* 100331c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100331c7 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100331ca add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100331cc mov esi, edx */
  ESI = (EDX);
  /* 100331ce je 0x100331f3 */
  if (C.zf) goto L_100331f3;
  /* 100331d0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100331d2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100331d4 push esi */
  push32((uint32_t)(ESI));
  /* 100331d5 push 0x100436d0 */
  push32((uint32_t)(0x100436d0u));
  /* 100331da call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x100331e0u);
  /* 100331e0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100331e2 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100331e4 push esi */
  push32((uint32_t)(ESI));
  /* 100331e5 push 0x10043610 */
  push32((uint32_t)(0x10043610u));
  /* 100331ea call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x100331f0u);
  /* 100331f0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100331f3:;
  /* 100331f3 pop esi */
  ESI = (pop32());
  /* 100331f4 ret  */
  ESPCHK(0x100331a0u, _esp0);
  ESP += 4; return;
}

/* ProcessLandAI @ 0x10033200 (1 bytes, 1 insns) */
void f_10033200(void) {
  FTRACE(0x10033200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10033200 ret  */
  ESPCHK(0x10033200u, _esp0);
  ESP += 4; return;
}

/* FUN_10003210 @ 0x10033210 (157 bytes, 43 insns) */
void f_10033210(void) {
  FTRACE(0x10033210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10033210 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10033212 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10033214 push 0x10046320 */
  push32((uint32_t)(0x10046320u));
  /* 10033219 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003321fu);
  /* 1003321f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10033221 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10033223 push 0x10046328 */
  push32((uint32_t)(0x10046328u));
  /* 10033228 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003322eu);
  /* 1003322e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10033230 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10033232 push 0x10046310 */
  push32((uint32_t)(0x10046310u));
  /* 10033237 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003323du);
  /* 1003323d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003323f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10033241 push 0x10046318 */
  push32((uint32_t)(0x10046318u));
  /* 10033246 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003324cu);
  /* 1003324c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003324e push 0xa */
  push32((uint32_t)(0xau));
  /* 10033250 push 0x10046330 */
  push32((uint32_t)(0x10046330u));
  /* 10033255 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003325bu);
  /* 1003325b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003325d push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1003325f push 0x10046268 */
  push32((uint32_t)(0x10046268u));
  /* 10033264 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003326au);
  /* 1003326a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003326d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003326f push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10033271 push 0x10046250 */
  push32((uint32_t)(0x10046250u));
  /* 10033276 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003327cu);
  /* 1003327c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003327e push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10033280 push 0x10046258 */
  push32((uint32_t)(0x10046258u));
  /* 10033285 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003328bu);
  /* 1003328b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003328d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1003328f push 0x10046270 */
  push32((uint32_t)(0x10046270u));
  /* 10033294 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003329au);
  /* 1003329a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003329c push 0xa */
  push32((uint32_t)(0xau));
  /* 1003329e push 0x10046278 */
  push32((uint32_t)(0x10046278u));
  /* 100332a3 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100332a9u);
  /* 100332a9 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100332ac ret  */
  ESPCHK(0x10033210u, _esp0);
  ESP += 4; return;
}

/* FUN_100032b0 @ 0x100332b0 (79 bytes, 22 insns) */
void f_100332b0(void) {
  FTRACE(0x100332b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100332b0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100332b2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100332b4 push 0x100438e0 */
  push32((uint32_t)(0x100438e0u));
  /* 100332b9 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100332bfu);
  /* 100332bf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100332c1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100332c3 push 0x100438e8 */
  push32((uint32_t)(0x100438e8u));
  /* 100332c8 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100332ceu);
  /* 100332ce push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100332d0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100332d2 push 0x100438d8 */
  push32((uint32_t)(0x100438d8u));
  /* 100332d7 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100332ddu);
  /* 100332dd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100332df push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100332e1 push 0x10045f48 */
  push32((uint32_t)(0x10045f48u));
  /* 100332e6 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100332ecu);
  /* 100332ec push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100332ee push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100332f0 push 0x10045f38 */
  push32((uint32_t)(0x10045f38u));
  /* 100332f5 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100332fbu);
  /* 100332fb add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100332fe ret  */
  ESPCHK(0x100332b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003300 @ 0x10033300 (64 bytes, 18 insns) */
void f_10033300(void) {
  FTRACE(0x10033300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10033300 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10033302 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10033304 push 0x10046068 */
  push32((uint32_t)(0x10046068u));
  /* 10033309 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003330fu);
  /* 1003330f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10033311 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10033313 push 0x10046070 */
  push32((uint32_t)(0x10046070u));
  /* 10033318 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003331eu);
  /* 1003331e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10033320 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10033322 push 0x10046078 */
  push32((uint32_t)(0x10046078u));
  /* 10033327 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003332du);
  /* 1003332d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1003332f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10033331 push 0x10046080 */
  push32((uint32_t)(0x10046080u));
  /* 10033336 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003333cu);
  /* 1003333c add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003333f ret  */
  ESPCHK(0x10033300u, _esp0);
  ESP += 4; return;
}

/* FUN_10003340 @ 0x10033340 (3787 bytes, 1079 insns) */
void f_10033340(void) {
  FTRACE(0x10033340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10033340 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10033343 push ebx */
  push32((uint32_t)(EBX));
  /* 10033344 push ebp */
  push32((uint32_t)(EBP));
  /* 10033345 push esi */
  push32((uint32_t)(ESI));
  /* 10033346 push edi */
  push32((uint32_t)(EDI));
  /* 10033347 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 1003334c push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 10033351 call dword ptr [0x100464e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464e8))), 0x10033357u);
  /* 10033357 push 0 */
  push32((uint32_t)(0x0u));
  /* 10033359 call 0x10032740 */
  push32(0x1003335eu); f_10032740();
  /* 1003335e push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10033360 push 0 */
  push32((uint32_t)(0x0u));
  /* 10033362 call 0x10032620 */
  push32(0x10033367u); f_10032620();
  /* 10033367 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10033369 push 0 */
  push32((uint32_t)(0x0u));
  /* 1003336b mov dword ptr [esp + 0x40], eax */
  w32((uint32_t)(ESP + 0x40), (EAX));
  /* 1003336f call 0x10032620 */
  push32(0x10033374u); f_10032620();
  /* 10033374 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 10033376 push 0 */
  push32((uint32_t)(0x0u));
  /* 10033378 mov edi, eax */
  EDI = (EAX);
  /* 1003337a call 0x10032620 */
  push32(0x1003337fu); f_10032620();
  /* 1003337f push 0xe */
  push32((uint32_t)(0xeu));
  /* 10033381 push 0 */
  push32((uint32_t)(0x0u));
  /* 10033383 mov esi, eax */
  ESI = (EAX);
  /* 10033385 call 0x10032620 */
  push32(0x1003338au); f_10032620();
  /* 1003338a push 0x10045ff0 */
  push32((uint32_t)(0x10045ff0u));
  /* 1003338f mov ebx, eax */
  EBX = (EAX);
  /* 10033391 call dword ptr [0x1004651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004651c))), 0x10033397u);
  /* 10033397 sar esi, 2 */
  ESI = (sh_sar((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 1003339a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1003339f add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100333a1 mov dword ptr [esp + 0x50], eax */
  w32((uint32_t)(ESP + 0x50), (EAX));
  /* 100333a5 push 0x100462a8 */
  push32((uint32_t)(0x100462a8u));
  /* 100333aa lea eax, [esi + ebx*4] */
  EAX = ((uint32_t)(ESI + EBX*4));
  /* 100333ad mov dword ptr [esp + 0x5c], eax */
  w32((uint32_t)(ESP + 0x5c), (EAX));
  /* 100333b1 call dword ptr [0x10046514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046514))), 0x100333b7u);
  /* 100333b7 push 0x10045f88 */
  push32((uint32_t)(0x10045f88u));
  /* 100333bc mov ebx, eax */
  EBX = (EAX);
  /* 100333be call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x100333c4u);
  /* 100333c4 push 0x10045f88 */
  push32((uint32_t)(0x10045f88u));
  /* 100333c9 mov ebp, eax */
  EBP = (EAX);
  /* 100333cb call dword ptr [0x10046514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046514))), 0x100333d1u);
  /* 100333d1 push 0x10045fb8 */
  push32((uint32_t)(0x10045fb8u));
  /* 100333d6 mov dword ptr [esp + 0x5c], eax */
  w32((uint32_t)(ESP + 0x5c), (EAX));
  /* 100333da call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x100333e0u);
  /* 100333e0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100333e3 mov edi, eax */
  EDI = (EAX);
  /* 100333e5 push 0x10045fb8 */
  push32((uint32_t)(0x10045fb8u));
  /* 100333ea call dword ptr [0x10046514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046514))), 0x100333f0u);
  /* 100333f0 push 0x100460a8 */
  push32((uint32_t)(0x100460a8u));
  /* 100333f5 mov dword ptr [esp + 0x20], eax */
  w32((uint32_t)(ESP + 0x20), (EAX));
  /* 100333f9 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x100333ffu);
  /* 100333ff push 0x100460a8 */
  push32((uint32_t)(0x100460a8u));
  /* 10033404 mov esi, eax */
  ESI = (EAX);
  /* 10033406 call dword ptr [0x10046514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046514))), 0x1003340cu);
  /* 1003340c push 0x100462a8 */
  push32((uint32_t)(0x100462a8u));
  /* 10033411 mov dword ptr [esp + 0x24], eax */
  w32((uint32_t)(ESP + 0x24), (EAX));
  /* 10033415 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x1003341bu);
  /* 1003341b mov edx, dword ptr [esp + 0x24] */
  EDX = (r32((uint32_t)(ESP + 0x24)));
  /* 1003341f mov ecx, dword ptr [esp + 0x28] */
  ECX = (r32((uint32_t)(ESP + 0x28)));
  /* 10033423 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10033425 mov edx, dword ptr [esp + 0x2c] */
  EDX = (r32((uint32_t)(ESP + 0x2c)));
  /* 10033429 sub esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003342b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1003342d sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003342f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10033431 sub esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10033433 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10033435 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10033437 push 0x10045ff0 */
  push32((uint32_t)(0x10045ff0u));
  /* 1003343c add esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1003343e mov dword ptr [esp + 0x38], esi */
  w32((uint32_t)(ESP + 0x38), (ESI));
  /* 10033442 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10033448u);
  /* 10033448 push 3 */
  push32((uint32_t)(0x3u));
  /* 1003344a mov bl, 1 */
  BL = (0x1u);
  /* 1003344c call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10033452u);
  /* 10033452 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033455 cmp eax, 0xd6d8 */
  { uint32_t _a=(EAX),_b=(0xd6d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003345a jle 0x1003348a */
  if ((C.zf||C.sf!=C.of)) goto L_1003348a;
  /* 1003345c push 1 */
  push32((uint32_t)(0x1u));
  /* 1003345e call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10033464u);
  /* 10033464 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033467 cmp eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003346c jle 0x1003348a */
  if ((C.zf||C.sf!=C.of)) goto L_1003348a;
  /* 1003346e push 4 */
  push32((uint32_t)(0x4u));
  /* 10033470 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10033476u);
  /* 10033476 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033479 cmp eax, 0x1b58 */
  { uint32_t _a=(EAX),_b=(0x1b58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003347e jle 0x1003348a */
  if ((C.zf||C.sf!=C.of)) goto L_1003348a;
  /* 10033480 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 10033484 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10033486 jne 0x1003348a */
  if (!C.zf) goto L_1003348a;
  /* 10033488 xor bl, bl */
  { uint32_t _r=(BL)^(BL); BL = (_r); fl_logic(_r,8); }
L_1003348a:;
  /* 1003348a push 0x10046160 */
  push32((uint32_t)(0x10046160u));
  /* 1003348f call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x10033495u);
  /* 10033495 push 3 */
  push32((uint32_t)(0x3u));
  /* 10033497 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 1003349b call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x100334a1u);
  /* 100334a1 push 0x10046188 */
  push32((uint32_t)(0x10046188u));
  /* 100334a6 mov esi, eax */
  ESI = (EAX);
  /* 100334a8 call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x100334aeu);
  /* 100334ae push 0x10043658 */
  push32((uint32_t)(0x10043658u));
  /* 100334b3 mov byte ptr [esp + 0x22], al */
  w8((uint32_t)(ESP + 0x22), (AL));
  /* 100334b7 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x100334bdu);
  /* 100334bd push 0x100460b0 */
  push32((uint32_t)(0x100460b0u));
  /* 100334c2 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x100334c8u);
  /* 100334c8 push 0x10046380 */
  push32((uint32_t)(0x10046380u));
  /* 100334cd mov dword ptr [esp + 0x2c], eax */
  w32((uint32_t)(ESP + 0x2c), (EAX));
  /* 100334d1 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x100334d7u);
  /* 100334d7 push 0x10046300 */
  push32((uint32_t)(0x10046300u));
  /* 100334dc mov edi, eax */
  EDI = (EAX);
  /* 100334de call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x100334e4u);
  /* 100334e4 push 0x10043658 */
  push32((uint32_t)(0x10043658u));
  /* 100334e9 mov ebp, eax */
  EBP = (EAX);
  /* 100334eb call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x100334f1u);
  /* 100334f1 add eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100334f3 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100334f5 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100334f7 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100334f9 push 0x100460e0 */
  push32((uint32_t)(0x100460e0u));
  /* 100334fe mov dword ptr [esp + 0x44], eax */
  w32((uint32_t)(ESP + 0x44), (EAX));
  /* 10033502 mov byte ptr [esp + 0x3f], 1 */
  w8((uint32_t)(ESP + 0x3f), (0x1u));
  /* 10033507 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003350du);
  /* 1003350d push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1003350f push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10033511 push 0x10046120 */
  push32((uint32_t)(0x10046120u));
  /* 10033516 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003351cu);
  /* 1003351c push 0x100438a8 */
  push32((uint32_t)(0x100438a8u));
  /* 10033521 call dword ptr [0x10046514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046514))), 0x10033527u);
  /* 10033527 push 0x100438a8 */
  push32((uint32_t)(0x100438a8u));
  /* 1003352c mov edi, eax */
  EDI = (EAX);
  /* 1003352e call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x10033534u);
  /* 10033534 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033537 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10033539 je 0x10033540 */
  if (C.zf) goto L_10033540;
  /* 1003353b mov byte ptr [esp + 0x13], 0 */
  w8((uint32_t)(ESP + 0x13), (0x0u));
L_10033540:;
  /* 10033540 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 10033544 test ebp, ebp */
  { uint32_t _r=(EBP)&(EBP); fl_logic(_r,32); }
  /* 10033546 je 0x10033f0d */
  if (C.zf) goto L_10033f0d;
  /* 1003354c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003354e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10033550 push 1 */
  push32((uint32_t)(0x1u));
  /* 10033552 push 0x10045fa8 */
  push32((uint32_t)(0x10045fa8u));
  /* 10033557 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x1003355du);
  /* 1003355d push 0x10045fa8 */
  push32((uint32_t)(0x10045fa8u));
  /* 10033562 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x10033568u);
  /* 10033568 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003356b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003356d je 0x10034203 */
  if (C.zf) goto L_10034203;
  /* 10033573 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10033575 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10033577 push 0x10046348 */
  push32((uint32_t)(0x10046348u));
  /* 1003357c call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10033582u);
  /* 10033582 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033585 call dword ptr [0x10046540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046540))), 0x1003358bu);
  /* 1003358b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1003358d jne 0x100335d0 */
  if (!C.zf) goto L_100335d0;
  /* 1003358f cmp esi, 0x2bc */
  { uint32_t _a=(ESI),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10033595 jle 0x100335bc */
  if ((C.zf||C.sf!=C.of)) goto L_100335bc;
  /* 10033597 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10033599 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003359b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003359d push 0x10046160 */
  push32((uint32_t)(0x10046160u));
  /* 100335a2 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x100335a8u);
  /* 100335a8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100335aa push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100335ac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100335ae push 0x10043658 */
  push32((uint32_t)(0x10043658u));
  /* 100335b3 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x100335b9u);
  /* 100335b9 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100335bc:;
  /* 100335bc push 1 */
  push32((uint32_t)(0x1u));
  /* 100335be push 1 */
  push32((uint32_t)(0x1u));
  /* 100335c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 100335c2 call dword ptr [0x100464e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464e4))), 0x100335c8u);
  /* 100335c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100335cb jmp 0x100336de */
  goto L_100336de;
L_100335d0:;
  /* 100335d0 push 0x10043770 */
  push32((uint32_t)(0x10043770u));
  /* 100335d5 call dword ptr [0x1004651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004651c))), 0x100335dbu);
  /* 100335db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100335de test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100335e0 je 0x1003360a */
  if (C.zf) goto L_1003360a;
  /* 100335e2 cmp esi, 0x2ee0 */
  { uint32_t _a=(ESI),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100335e8 jle 0x100335f2 */
  if ((C.zf||C.sf!=C.of)) goto L_100335f2;
  /* 100335ea push 6 */
  push32((uint32_t)(0x6u));
  /* 100335ec push 8 */
  push32((uint32_t)(0x8u));
  /* 100335ee push 9 */
  push32((uint32_t)(0x9u));
  /* 100335f0 jmp 0x10033630 */
  goto L_10033630;
L_100335f2:;
  /* 100335f2 cmp esi, 0x1770 */
  { uint32_t _a=(ESI),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100335f8 jle 0x10033602 */
  if ((C.zf||C.sf!=C.of)) goto L_10033602;
  /* 100335fa push 3 */
  push32((uint32_t)(0x3u));
  /* 100335fc push 5 */
  push32((uint32_t)(0x5u));
  /* 100335fe push 9 */
  push32((uint32_t)(0x9u));
  /* 10033600 jmp 0x10033630 */
  goto L_10033630;
L_10033602:;
  /* 10033602 push 1 */
  push32((uint32_t)(0x1u));
  /* 10033604 push 4 */
  push32((uint32_t)(0x4u));
  /* 10033606 push 9 */
  push32((uint32_t)(0x9u));
  /* 10033608 jmp 0x10033630 */
  goto L_10033630;
L_1003360a:;
  /* 1003360a cmp esi, 0x2ee0 */
  { uint32_t _a=(ESI),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10033610 jle 0x1003361a */
  if ((C.zf||C.sf!=C.of)) goto L_1003361a;
  /* 10033612 push 8 */
  push32((uint32_t)(0x8u));
  /* 10033614 push 8 */
  push32((uint32_t)(0x8u));
  /* 10033616 push 9 */
  push32((uint32_t)(0x9u));
  /* 10033618 jmp 0x10033630 */
  goto L_10033630;
L_1003361a:;
  /* 1003361a cmp esi, 0x1770 */
  { uint32_t _a=(ESI),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10033620 jle 0x1003362a */
  if ((C.zf||C.sf!=C.of)) goto L_1003362a;
  /* 10033622 push 5 */
  push32((uint32_t)(0x5u));
  /* 10033624 push 5 */
  push32((uint32_t)(0x5u));
  /* 10033626 push 9 */
  push32((uint32_t)(0x9u));
  /* 10033628 jmp 0x10033630 */
  goto L_10033630;
L_1003362a:;
  /* 1003362a push 4 */
  push32((uint32_t)(0x4u));
  /* 1003362c push 4 */
  push32((uint32_t)(0x4u));
  /* 1003362e push 0xa */
  push32((uint32_t)(0xau));
L_10033630:;
  /* 10033630 call dword ptr [0x100464e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464e4))), 0x10033636u);
  /* 10033636 mov al, byte ptr [esp + 0x1e] */
  AL = (r8((uint32_t)(ESP + 0x1e)));
  /* 1003363a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003363d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1003363f mov edi, 0x15e */
  EDI = (0x15eu);
  /* 10033644 je 0x1003364b */
  if (C.zf) goto L_1003364b;
  /* 10033646 mov edi, 0x12c */
  EDI = (0x12cu);
L_1003364b:;
  /* 1003364b cmp ebp, 0x19 */
  { uint32_t _a=(EBP),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003364e jge 0x1003366c */
  if ((C.sf==C.of)) goto L_1003366c;
  /* 10033650 cmp esi, 0x12c */
  { uint32_t _a=(ESI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10033656 jle 0x1003366c */
  if ((C.zf||C.sf!=C.of)) goto L_1003366c;
  /* 10033658 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003365a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003365c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003365e push 0x10046160 */
  push32((uint32_t)(0x10046160u));
  /* 10033663 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10033669u);
  /* 10033669 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1003366c:;
  /* 1003366c cmp esi, 0xc8 */
  { uint32_t _a=(ESI),_b=(0xc8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10033672 jle 0x100336ad */
  if ((C.zf||C.sf!=C.of)) goto L_100336ad;
  /* 10033674 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10033676 je 0x10033692 */
  if (C.zf) goto L_10033692;
  /* 10033678 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003367a push 0xe8 */
  push32((uint32_t)(0xe8u));
  /* 1003367f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10033684 push 0x10046160 */
  push32((uint32_t)(0x10046160u));
  /* 10033689 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x1003368fu);
  /* 1003368f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10033692:;
  /* 10033692 cmp esi, 0x12c */
  { uint32_t _a=(ESI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10033698 jle 0x100336ad */
  if ((C.zf||C.sf!=C.of)) goto L_100336ad;
  /* 1003369a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1003369c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003369e push edi */
  push32((uint32_t)(EDI));
  /* 1003369f push 0x10043658 */
  push32((uint32_t)(0x10043658u));
  /* 100336a4 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x100336aau);
  /* 100336aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100336ad:;
  /* 100336ad push 0x10046240 */
  push32((uint32_t)(0x10046240u));
  /* 100336b2 call dword ptr [0x1004651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004651c))), 0x100336b8u);
  /* 100336b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100336bb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100336bd je 0x100336de */
  if (C.zf) goto L_100336de;
  /* 100336bf cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100336c5 jle 0x100336de */
  if ((C.zf||C.sf!=C.of)) goto L_100336de;
  /* 100336c7 push 0x100462a8 */
  push32((uint32_t)(0x100462a8u));
  /* 100336cc call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x100336d2u);
  /* 100336d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100336d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100336d7 jle 0x100336de */
  if ((C.zf||C.sf!=C.of)) goto L_100336de;
  /* 100336d9 call 0x10033210 */
  push32(0x100336deu); f_10033210();
L_100336de:;
  /* 100336de mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 100336e2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100336e4 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100336e7 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 100336e9 jge 0x100336ef */
  if ((C.sf==C.of)) goto L_100336ef;
  /* 100336eb push 5 */
  push32((uint32_t)(0x5u));
  /* 100336ed jmp 0x100336f3 */
  goto L_100336f3;
L_100336ef:;
  /* 100336ef add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100336f2 push eax */
  push32((uint32_t)(EAX));
L_100336f3:;
  /* 100336f3 push 0x10045f60 */
  push32((uint32_t)(0x10045f60u));
  /* 100336f8 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x100336feu);
  /* 100336fe mov edi, dword ptr [esp + 0x38] */
  EDI = (r32((uint32_t)(ESP + 0x38)));
  /* 10033702 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033705 cmp edi, 5 */
  { uint32_t _a=(EDI),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10033708 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1003370a jge 0x10033720 */
  if ((C.sf==C.of)) goto L_10033720;
  /* 1003370c push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1003370e push 0xc */
  push32((uint32_t)(0xcu));
  /* 10033710 push 0x100438b8 */
  push32((uint32_t)(0x100438b8u));
  /* 10033715 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x1003371bu);
  /* 1003371b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003371e jmp 0x1003375a */
  goto L_1003375a;
L_10033720:;
  /* 10033720 lea ecx, [edi + 6] */
  ECX = ((uint32_t)(EDI + 0x6));
  /* 10033723 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10033725 push ecx */
  push32((uint32_t)(ECX));
  /* 10033726 push 0x100438b8 */
  push32((uint32_t)(0x100438b8u));
  /* 1003372b call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10033731u);
  /* 10033731 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10033733 lea edx, [edi + 9] */
  EDX = ((uint32_t)(EDI + 0x9));
  /* 10033736 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10033738 push edx */
  push32((uint32_t)(EDX));
  /* 10033739 push 0x100438b8 */
  push32((uint32_t)(0x100438b8u));
  /* 1003373e call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10033744u);
  /* 10033744 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10033746 add edi, 0xa */
  { uint32_t _a=(EDI),_b=(0xau),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10033749 push 0xa */
  push32((uint32_t)(0xau));
  /* 1003374b push edi */
  push32((uint32_t)(EDI));
  /* 1003374c push 0x100438b8 */
  push32((uint32_t)(0x100438b8u));
  /* 10033751 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10033757u);
  /* 10033757 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1003375a:;
  /* 1003375a push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1003375c push 0 */
  push32((uint32_t)(0x0u));
  /* 1003375e call 0x10032620 */
  push32(0x10033763u); f_10032620();
  /* 10033763 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033766 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10033768 je 0x100337c7 */
  if (C.zf) goto L_100337c7;
  /* 1003376a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1003376c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1003376e push 0x100462b8 */
  push32((uint32_t)(0x100462b8u));
  /* 10033773 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10033779u);
  /* 10033779 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1003377b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1003377d push 0x100462a0 */
  push32((uint32_t)(0x100462a0u));
  /* 10033782 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10033788u);
  /* 10033788 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1003378a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1003378c push 0x100462b0 */
  push32((uint32_t)(0x100462b0u));
  /* 10033791 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10033797u);
  /* 10033797 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10033799 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1003379b push 0x10046290 */
  push32((uint32_t)(0x10046290u));
  /* 100337a0 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100337a6u);
  /* 100337a6 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100337a8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100337aa push 0x10046298 */
  push32((uint32_t)(0x10046298u));
  /* 100337af call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100337b5u);
  /* 100337b5 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100337b7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100337b9 push 0x10046288 */
  push32((uint32_t)(0x10046288u));
  /* 100337be call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100337c4u);
  /* 100337c4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100337c7:;
  /* 100337c7 push 0xa */
  push32((uint32_t)(0xau));
  /* 100337c9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100337cb push 3 */
  push32((uint32_t)(0x3u));
  /* 100337cd push 0x10043870 */
  push32((uint32_t)(0x10043870u));
  /* 100337d2 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x100337d8u);
  /* 100337d8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100337da push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100337dc push 1 */
  push32((uint32_t)(0x1u));
  /* 100337de push 0x10045f88 */
  push32((uint32_t)(0x10045f88u));
  /* 100337e3 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x100337e9u);
  /* 100337e9 push 5 */
  push32((uint32_t)(0x5u));
  /* 100337eb push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100337ed push 2 */
  push32((uint32_t)(0x2u));
  /* 100337ef push 0x10045f88 */
  push32((uint32_t)(0x10045f88u));
  /* 100337f4 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x100337fau);
  /* 100337fa mov esi, dword ptr [esp + 0x4c] */
  ESI = (r32((uint32_t)(ESP + 0x4c)));
  /* 100337fe add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033801 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10033803 jne 0x10033819 */
  if (!C.zf) goto L_10033819;
  /* 10033805 push 5 */
  push32((uint32_t)(0x5u));
  /* 10033807 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10033809 push 3 */
  push32((uint32_t)(0x3u));
  /* 1003380b push 0x10045f88 */
  push32((uint32_t)(0x10045f88u));
  /* 10033810 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10033816u);
  /* 10033816 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10033819:;
  /* 10033819 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003381b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003381d push 1 */
  push32((uint32_t)(0x1u));
  /* 1003381f push 0x100461b8 */
  push32((uint32_t)(0x100461b8u));
  /* 10033824 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x1003382au);
  /* 1003382a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003382c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003382e push 1 */
  push32((uint32_t)(0x1u));
  /* 10033830 push 0x10046220 */
  push32((uint32_t)(0x10046220u));
  /* 10033835 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x1003383bu);
  /* 1003383b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1003383d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1003383f push 1 */
  push32((uint32_t)(0x1u));
  /* 10033841 push 0x10045fa0 */
  push32((uint32_t)(0x10045fa0u));
  /* 10033846 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x1003384cu);
  /* 1003384c push 5 */
  push32((uint32_t)(0x5u));
  /* 1003384e push 0xa */
  push32((uint32_t)(0xau));
  /* 10033850 push 2 */
  push32((uint32_t)(0x2u));
  /* 10033852 push 0x100461b8 */
  push32((uint32_t)(0x100461b8u));
  /* 10033857 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x1003385du);
  /* 1003385d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033860 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10033862 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10033864 push 1 */
  push32((uint32_t)(0x1u));
  /* 10033866 push 0x100460a8 */
  push32((uint32_t)(0x100460a8u));
  /* 1003386b call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10033871u);
  /* 10033871 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10033873 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10033875 push 0x10043630 */
  push32((uint32_t)(0x10043630u));
  /* 1003387a call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10033880u);
  /* 10033880 push 0x10045ef0 */
  push32((uint32_t)(0x10045ef0u));
  /* 10033885 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x1003388bu);
  /* 1003388b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003388e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10033890 jle 0x100338b7 */
  if ((C.zf||C.sf!=C.of)) goto L_100338b7;
  /* 10033892 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10033894 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10033896 push 1 */
  push32((uint32_t)(0x1u));
  /* 10033898 push 0x10043848 */
  push32((uint32_t)(0x10043848u));
  /* 1003389d call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x100338a3u);
  /* 100338a3 push 3 */
  push32((uint32_t)(0x3u));
  /* 100338a5 push 5 */
  push32((uint32_t)(0x5u));
  /* 100338a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 100338a9 push 0x100460c8 */
  push32((uint32_t)(0x100460c8u));
  /* 100338ae call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x100338b4u);
  /* 100338b4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100338b7:;
  /* 100338b7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100338b9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100338bb push 1 */
  push32((uint32_t)(0x1u));
  /* 100338bd push 0x10045ef0 */
  push32((uint32_t)(0x10045ef0u));
  /* 100338c2 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x100338c8u);
  /* 100338c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100338cb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100338cd jne 0x100338e3 */
  if (!C.zf) goto L_100338e3;
  /* 100338cf push 0xa */
  push32((uint32_t)(0xau));
  /* 100338d1 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100338d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 100338d5 push 0x10045fb8 */
  push32((uint32_t)(0x10045fb8u));
  /* 100338da call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x100338e0u);
  /* 100338e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100338e3:;
  /* 100338e3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100338e5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100338e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 100338e9 push 0x100435e8 */
  push32((uint32_t)(0x100435e8u));
  /* 100338ee call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x100338f4u);
  /* 100338f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100338f7 cmp ebp, 0x19 */
  { uint32_t _a=(EBP),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100338fa jle 0x10033910 */
  if ((C.zf||C.sf!=C.of)) goto L_10033910;
  /* 100338fc push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100338fe push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10033900 push 2 */
  push32((uint32_t)(0x2u));
  /* 10033902 push 0x10045fa8 */
  push32((uint32_t)(0x10045fa8u));
  /* 10033907 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x1003390du);
  /* 1003390d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10033910:;
  /* 10033910 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10033912 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10033914 push 1 */
  push32((uint32_t)(0x1u));
  /* 10033916 push 0x10046228 */
  push32((uint32_t)(0x10046228u));
  /* 1003391b call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10033921u);
  /* 10033921 push 5 */
  push32((uint32_t)(0x5u));
  /* 10033923 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10033925 push 2 */
  push32((uint32_t)(0x2u));
  /* 10033927 push 0x10046228 */
  push32((uint32_t)(0x10046228u));
  /* 1003392c call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10033932u);
  /* 10033932 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10033934 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10033936 push 0x10046048 */
  push32((uint32_t)(0x10046048u));
  /* 1003393b call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10033941u);
  /* 10033941 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10033943 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10033945 push 0x10046000 */
  push32((uint32_t)(0x10046000u));
  /* 1003394a call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10033950u);
  /* 10033950 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10033952 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10033954 push 0x10046008 */
  push32((uint32_t)(0x10046008u));
  /* 10033959 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003395fu);
  /* 1003395f add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033962 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10033964 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10033966 push 0x10046010 */
  push32((uint32_t)(0x10046010u));
  /* 1003396b call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10033971u);
  /* 10033971 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10033973 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10033975 push 0x10046240 */
  push32((uint32_t)(0x10046240u));
  /* 1003397a call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10033980u);
  /* 10033980 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10033982 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10033984 push 0x10046188 */
  push32((uint32_t)(0x10046188u));
  /* 10033989 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003398fu);
  /* 1003398f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10033991 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10033993 push 1 */
  push32((uint32_t)(0x1u));
  /* 10033995 push 0x100462a8 */
  push32((uint32_t)(0x100462a8u));
  /* 1003399a call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x100339a0u);
  /* 100339a0 push 5 */
  push32((uint32_t)(0x5u));
  /* 100339a2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100339a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 100339a6 push 0x100462a8 */
  push32((uint32_t)(0x100462a8u));
  /* 100339ab call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x100339b1u);
  /* 100339b1 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100339b4 push 5 */
  push32((uint32_t)(0x5u));
  /* 100339b6 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100339b8 push 3 */
  push32((uint32_t)(0x3u));
  /* 100339ba push 0x100462a8 */
  push32((uint32_t)(0x100462a8u));
  /* 100339bf call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x100339c5u);
  /* 100339c5 push 5 */
  push32((uint32_t)(0x5u));
  /* 100339c7 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100339c9 push 5 */
  push32((uint32_t)(0x5u));
  /* 100339cb push 0x100462a8 */
  push32((uint32_t)(0x100462a8u));
  /* 100339d0 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x100339d6u);
  /* 100339d6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100339d8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100339da push 0x10043928 */
  push32((uint32_t)(0x10043928u));
  /* 100339df call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100339e5u);
  /* 100339e5 call 0x10032610 */
  push32(0x100339eau); f_10032610();
  /* 100339ea push 0x10046240 */
  push32((uint32_t)(0x10046240u));
  /* 100339ef mov edi, eax */
  EDI = (EAX);
  /* 100339f1 call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x100339f7u);
  /* 100339f7 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100339fa test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100339fc je 0x10033a1f */
  if (C.zf) goto L_10033a1f;
  /* 100339fe push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10033a00 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10033a02 push 0x10043928 */
  push32((uint32_t)(0x10043928u));
  /* 10033a07 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10033a0du);
  /* 10033a0d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10033a0f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10033a11 push 0x10043840 */
  push32((uint32_t)(0x10043840u));
  /* 10033a16 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10033a1cu);
  /* 10033a1c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10033a1f:;
  /* 10033a1f push 0x10043928 */
  push32((uint32_t)(0x10043928u));
  /* 10033a24 call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x10033a2au);
  /* 10033a2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033a2d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10033a2f je 0x10033a57 */
  if (C.zf) goto L_10033a57;
  /* 10033a31 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10033a33 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10033a35 push 0x10043910 */
  push32((uint32_t)(0x10043910u));
  /* 10033a3a call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10033a40u);
  /* 10033a40 push 0xa */
  push32((uint32_t)(0xau));
  /* 10033a42 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10033a44 push 0x10043850 */
  push32((uint32_t)(0x10043850u));
  /* 10033a49 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10033a4fu);
  /* 10033a4f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033a52 call 0x10033300 */
  push32(0x10033a57u); f_10033300();
L_10033a57:;
  /* 10033a57 push 0x10046080 */
  push32((uint32_t)(0x10046080u));
  /* 10033a5c call dword ptr [0x1004651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004651c))), 0x10033a62u);
  /* 10033a62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033a65 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10033a67 je 0x10033a8e */
  if (C.zf) goto L_10033a8e;
  /* 10033a69 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10033a6b push 0xa */
  push32((uint32_t)(0xau));
  /* 10033a6d push 0xa */
  push32((uint32_t)(0xau));
  /* 10033a6f push 0x10043638 */
  push32((uint32_t)(0x10043638u));
  /* 10033a74 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10033a7au);
  /* 10033a7a push 0xa */
  push32((uint32_t)(0xau));
  /* 10033a7c push 3 */
  push32((uint32_t)(0x3u));
  /* 10033a7e push 0xf */
  push32((uint32_t)(0xfu));
  /* 10033a80 push 0x10043638 */
  push32((uint32_t)(0x10043638u));
  /* 10033a85 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10033a8bu);
  /* 10033a8b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10033a8e:;
  /* 10033a8e push 0 */
  push32((uint32_t)(0x0u));
  /* 10033a90 push 1 */
  push32((uint32_t)(0x1u));
  /* 10033a92 call 0x100325d0 */
  push32(0x10033a97u); f_100325d0();
  /* 10033a97 push 0 */
  push32((uint32_t)(0x0u));
  /* 10033a99 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10033a9fu);
  /* 10033a9f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033aa2 cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10033aa7 jle 0x10033aeb */
  if ((C.zf||C.sf!=C.of)) goto L_10033aeb;
  /* 10033aa9 push 0x10043770 */
  push32((uint32_t)(0x10043770u));
  /* 10033aae call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x10033ab4u);
  /* 10033ab4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033ab7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10033ab9 je 0x10033aeb */
  if (C.zf) goto L_10033aeb;
  /* 10033abb push 1 */
  push32((uint32_t)(0x1u));
  /* 10033abd call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10033ac3u);
  /* 10033ac3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033ac6 cmp eax, 0x1d4c */
  { uint32_t _a=(EAX),_b=(0x1d4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10033acb jge 0x10033aeb */
  if ((C.sf==C.of)) goto L_10033aeb;
  /* 10033acd push 0x10043928 */
  push32((uint32_t)(0x10043928u));
  /* 10033ad2 call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x10033ad8u);
  /* 10033ad8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033adb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10033add jne 0x10033aeb */
  if (!C.zf) goto L_10033aeb;
  /* 10033adf push 1 */
  push32((uint32_t)(0x1u));
  /* 10033ae1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10033ae3 call 0x100325d0 */
  push32(0x10033ae8u); f_100325d0();
  /* 10033ae8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10033aeb:;
  /* 10033aeb push 0x10043928 */
  push32((uint32_t)(0x10043928u));
  /* 10033af0 call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x10033af6u);
  /* 10033af6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033af9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10033afb je 0x10033c7c */
  if (C.zf) goto L_10033c7c;
  /* 10033b01 push 0x100460c0 */
  push32((uint32_t)(0x100460c0u));
  /* 10033b06 call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x10033b0cu);
  /* 10033b0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033b0f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10033b11 je 0x10033c7c */
  if (C.zf) goto L_10033c7c;
  /* 10033b17 push 0x10046188 */
  push32((uint32_t)(0x10046188u));
  /* 10033b1c call dword ptr [0x1004651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004651c))), 0x10033b22u);
  /* 10033b22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033b25 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10033b27 je 0x10033c7c */
  if (C.zf) goto L_10033c7c;
  /* 10033b2d cmp edi, 0xa */
  { uint32_t _a=(EDI),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10033b30 je 0x10033b37 */
  if (C.zf) goto L_10033b37;
  /* 10033b32 cmp edi, 0x12 */
  { uint32_t _a=(EDI),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10033b35 jne 0x10033b67 */
  if (!C.zf) goto L_10033b67;
L_10033b37:;
  /* 10033b37 push 3 */
  push32((uint32_t)(0x3u));
  /* 10033b39 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10033b3fu);
  /* 10033b3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033b42 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10033b47 jle 0x10033b67 */
  if ((C.zf||C.sf!=C.of)) goto L_10033b67;
  /* 10033b49 push 1 */
  push32((uint32_t)(0x1u));
  /* 10033b4b call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10033b51u);
  /* 10033b51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033b54 cmp eax, 0x2008 */
  { uint32_t _a=(EAX),_b=(0x2008u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10033b59 jge 0x10033b67 */
  if ((C.sf==C.of)) goto L_10033b67;
  /* 10033b5b push 1 */
  push32((uint32_t)(0x1u));
  /* 10033b5d push 1 */
  push32((uint32_t)(0x1u));
  /* 10033b5f call 0x100325d0 */
  push32(0x10033b64u); f_100325d0();
  /* 10033b64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10033b67:;
  /* 10033b67 push 0x10045ff0 */
  push32((uint32_t)(0x10045ff0u));
  /* 10033b6c call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x10033b72u);
  /* 10033b72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033b75 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10033b77 jne 0x10033ba9 */
  if (!C.zf) goto L_10033ba9;
  /* 10033b79 push 3 */
  push32((uint32_t)(0x3u));
  /* 10033b7b call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10033b81u);
  /* 10033b81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033b84 cmp eax, 0xea60 */
  { uint32_t _a=(EAX),_b=(0xea60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10033b89 jle 0x10033ba9 */
  if ((C.zf||C.sf!=C.of)) goto L_10033ba9;
  /* 10033b8b push 1 */
  push32((uint32_t)(0x1u));
  /* 10033b8d call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10033b93u);
  /* 10033b93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033b96 cmp eax, 0x2af8 */
  { uint32_t _a=(EAX),_b=(0x2af8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10033b9b jge 0x10033ba9 */
  if ((C.sf==C.of)) goto L_10033ba9;
  /* 10033b9d push 1 */
  push32((uint32_t)(0x1u));
  /* 10033b9f push 1 */
  push32((uint32_t)(0x1u));
  /* 10033ba1 call 0x100325d0 */
  push32(0x10033ba6u); f_100325d0();
  /* 10033ba6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10033ba9:;
  /* 10033ba9 push 0x10045ff0 */
  push32((uint32_t)(0x10045ff0u));
  /* 10033bae call dword ptr [0x1004651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004651c))), 0x10033bb4u);
  /* 10033bb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033bb7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10033bb9 je 0x10033c7c */
  if (C.zf) goto L_10033c7c;
  /* 10033bbf cmp edi, 0x1c */
  { uint32_t _a=(EDI),_b=(0x1cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10033bc2 jne 0x10033c02 */
  if (!C.zf) goto L_10033c02;
  /* 10033bc4 push 3 */
  push32((uint32_t)(0x3u));
  /* 10033bc6 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10033bccu);
  /* 10033bcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033bcf cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10033bd4 jle 0x10033cd7 */
  if ((C.zf||C.sf!=C.of)) goto L_10033cd7;
  /* 10033bda push 4 */
  push32((uint32_t)(0x4u));
  /* 10033bdc call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10033be2u);
  /* 10033be2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033be5 cmp eax, 0x1c84 */
  { uint32_t _a=(EAX),_b=(0x1c84u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10033bea jle 0x10033cd7 */
  if ((C.zf||C.sf!=C.of)) goto L_10033cd7;
  /* 10033bf0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10033bf2 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10033bf8u);
  /* 10033bf8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033bfb cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10033c00 jmp 0x10033c6c */
  goto L_10033c6c;
L_10033c02:;
  /* 10033c02 cmp edi, 0x28 */
  { uint32_t _a=(EDI),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10033c05 jne 0x10033c45 */
  if (!C.zf) goto L_10033c45;
  /* 10033c07 push 3 */
  push32((uint32_t)(0x3u));
  /* 10033c09 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10033c0fu);
  /* 10033c0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033c12 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10033c17 jle 0x10033cd7 */
  if ((C.zf||C.sf!=C.of)) goto L_10033cd7;
  /* 10033c1d push 4 */
  push32((uint32_t)(0x4u));
  /* 10033c1f call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10033c25u);
  /* 10033c25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033c28 cmp eax, 0x2648 */
  { uint32_t _a=(EAX),_b=(0x2648u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10033c2d jle 0x10033cd7 */
  if ((C.zf||C.sf!=C.of)) goto L_10033cd7;
  /* 10033c33 push 1 */
  push32((uint32_t)(0x1u));
  /* 10033c35 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10033c3bu);
  /* 10033c3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033c3e cmp eax, 0x5dc0 */
  { uint32_t _a=(EAX),_b=(0x5dc0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10033c43 jmp 0x10033c6c */
  goto L_10033c6c;
L_10033c45:;
  /* 10033c45 cmp edi, 0x37 */
  { uint32_t _a=(EDI),_b=(0x37u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10033c48 jne 0x10033c7c */
  if (!C.zf) goto L_10033c7c;
  /* 10033c4a push 3 */
  push32((uint32_t)(0x3u));
  /* 10033c4c call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10033c52u);
  /* 10033c52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033c55 cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10033c5a jle 0x10033cd7 */
  if ((C.zf||C.sf!=C.of)) goto L_10033cd7;
  /* 10033c5c push 1 */
  push32((uint32_t)(0x1u));
  /* 10033c5e call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10033c64u);
  /* 10033c64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033c67 cmp eax, 0x6590 */
  { uint32_t _a=(EAX),_b=(0x6590u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10033c6c:;
  /* 10033c6c jge 0x10033cd7 */
  if ((C.sf==C.of)) goto L_10033cd7;
  /* 10033c6e push 1 */
  push32((uint32_t)(0x1u));
  /* 10033c70 push 1 */
  push32((uint32_t)(0x1u));
  /* 10033c72 call 0x100325d0 */
  push32(0x10033c77u); f_100325d0();
  /* 10033c77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033c7a jmp 0x10033cd7 */
  goto L_10033cd7;
L_10033c7c:;
  /* 10033c7c cmp edi, 0x5f */
  { uint32_t _a=(EDI),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10033c7f jne 0x10033cd7 */
  if (!C.zf) goto L_10033cd7;
  /* 10033c81 push 0xa */
  push32((uint32_t)(0xau));
  /* 10033c83 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10033c85 push 0x10043738 */
  push32((uint32_t)(0x10043738u));
  /* 10033c8a call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10033c90u);
  /* 10033c90 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10033c92 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10033c94 push 1 */
  push32((uint32_t)(0x1u));
  /* 10033c96 push 0x10046368 */
  push32((uint32_t)(0x10046368u));
  /* 10033c9b call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10033ca1u);
  /* 10033ca1 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10033ca3 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10033ca5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10033ca7 push 0x10046368 */
  push32((uint32_t)(0x10046368u));
  /* 10033cac call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10033cb2u);
  /* 10033cb2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10033cb4 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10033cb6 push 3 */
  push32((uint32_t)(0x3u));
  /* 10033cb8 push 0x10046368 */
  push32((uint32_t)(0x10046368u));
  /* 10033cbd call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10033cc3u);
  /* 10033cc3 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10033cc5 push 0xa */
  push32((uint32_t)(0xau));
  /* 10033cc7 push 5 */
  push32((uint32_t)(0x5u));
  /* 10033cc9 push 0x10046368 */
  push32((uint32_t)(0x10046368u));
  /* 10033cce call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10033cd4u);
  /* 10033cd4 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10033cd7:;
  /* 10033cd7 cmp ebp, 0x50 */
  { uint32_t _a=(EBP),_b=(0x50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10033cda jle 0x10033d33 */
  if ((C.zf||C.sf!=C.of)) goto L_10033d33;
  /* 10033cdc mov al, byte ptr [esp + 0x13] */
  AL = (r8((uint32_t)(ESP + 0x13)));
  /* 10033ce0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10033ce2 je 0x10033d33 */
  if (C.zf) goto L_10033d33;
  /* 10033ce4 push 0xa */
  push32((uint32_t)(0xau));
  /* 10033ce6 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10033ce8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10033cea push 0x100438a8 */
  push32((uint32_t)(0x100438a8u));
  /* 10033cef call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10033cf5u);
  /* 10033cf5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033cf8 cmp ebp, 0x5f */
  { uint32_t _a=(EBP),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10033cfb jle 0x10033d33 */
  if ((C.zf||C.sf!=C.of)) goto L_10033d33;
  /* 10033cfd push 0xa */
  push32((uint32_t)(0xau));
  /* 10033cff push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10033d01 push 2 */
  push32((uint32_t)(0x2u));
  /* 10033d03 push 0x100438a8 */
  push32((uint32_t)(0x100438a8u));
  /* 10033d08 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10033d0eu);
  /* 10033d0e push 0xa */
  push32((uint32_t)(0xau));
  /* 10033d10 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10033d12 push 3 */
  push32((uint32_t)(0x3u));
  /* 10033d14 push 0x100438a8 */
  push32((uint32_t)(0x100438a8u));
  /* 10033d19 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10033d1fu);
  /* 10033d1f push 0xa */
  push32((uint32_t)(0xau));
  /* 10033d21 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10033d23 push 4 */
  push32((uint32_t)(0x4u));
  /* 10033d25 push 0x100438a8 */
  push32((uint32_t)(0x100438a8u));
  /* 10033d2a call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10033d30u);
  /* 10033d30 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10033d33:;
  /* 10033d33 mov bl, byte ptr [esp + 0x12] */
  BL = (r8((uint32_t)(ESP + 0x12)));
  /* 10033d37 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10033d39 je 0x10033d77 */
  if (C.zf) goto L_10033d77;
  /* 10033d3b push 0x10046240 */
  push32((uint32_t)(0x10046240u));
  /* 10033d40 call dword ptr [0x1004651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004651c))), 0x10033d46u);
  /* 10033d46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033d49 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10033d4b je 0x10033d77 */
  if (C.zf) goto L_10033d77;
  /* 10033d4d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10033d4f push 1 */
  push32((uint32_t)(0x1u));
  /* 10033d51 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10033d53 push 0x10046130 */
  push32((uint32_t)(0x10046130u));
  /* 10033d58 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10033d5eu);
  /* 10033d5e push 0x10046168 */
  push32((uint32_t)(0x10046168u));
  /* 10033d63 call dword ptr [0x1004651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004651c))), 0x10033d69u);
  /* 10033d69 push 0x10046080 */
  push32((uint32_t)(0x10046080u));
  /* 10033d6e call dword ptr [0x1004651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004651c))), 0x10033d74u);
  /* 10033d74 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10033d77:;
  /* 10033d77 push 0x100435e8 */
  push32((uint32_t)(0x100435e8u));
  /* 10033d7c call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x10033d82u);
  /* 10033d82 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10033d84 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10033d86 push 3 */
  push32((uint32_t)(0x3u));
  /* 10033d88 push 0x100461c0 */
  push32((uint32_t)(0x100461c0u));
  /* 10033d8d call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10033d93u);
  /* 10033d93 push 0x100460c0 */
  push32((uint32_t)(0x100460c0u));
  /* 10033d98 call dword ptr [0x1004651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004651c))), 0x10033d9eu);
  /* 10033d9e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033da1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10033da3 je 0x10033db9 */
  if (C.zf) goto L_10033db9;
  /* 10033da5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10033da7 push 0xa */
  push32((uint32_t)(0xau));
  /* 10033da9 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10033dab push 0x100461c0 */
  push32((uint32_t)(0x100461c0u));
  /* 10033db0 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10033db6u);
  /* 10033db6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10033db9:;
  /* 10033db9 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10033dbb je 0x10033ea5 */
  if (C.zf) goto L_10033ea5;
  /* 10033dc1 push 0x10046240 */
  push32((uint32_t)(0x10046240u));
  /* 10033dc6 call dword ptr [0x1004651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004651c))), 0x10033dccu);
  /* 10033dcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033dcf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10033dd1 je 0x10033ea5 */
  if (C.zf) goto L_10033ea5;
  /* 10033dd7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10033dd9 jne 0x10033e11 */
  if (!C.zf) goto L_10033e11;
  /* 10033ddb push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10033ddd push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10033ddf push 2 */
  push32((uint32_t)(0x2u));
  /* 10033de1 push 0x100460a8 */
  push32((uint32_t)(0x100460a8u));
  /* 10033de6 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10033decu);
  /* 10033dec push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10033dee push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10033df0 push 3 */
  push32((uint32_t)(0x3u));
  /* 10033df2 push 0x100460a8 */
  push32((uint32_t)(0x100460a8u));
  /* 10033df7 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10033dfdu);
  /* 10033dfd push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10033dff push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10033e01 push 4 */
  push32((uint32_t)(0x4u));
  /* 10033e03 push 0x100460a8 */
  push32((uint32_t)(0x100460a8u));
  /* 10033e08 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10033e0eu);
  /* 10033e0e add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10033e11:;
  /* 10033e11 push 0x100460b0 */
  push32((uint32_t)(0x100460b0u));
  /* 10033e16 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x10033e1cu);
  /* 10033e1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033e1f cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10033e22 jle 0x10033e45 */
  if ((C.zf||C.sf!=C.of)) goto L_10033e45;
  /* 10033e24 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10033e26 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10033e28 push 0x100461d8 */
  push32((uint32_t)(0x100461d8u));
  /* 10033e2d call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10033e33u);
  /* 10033e33 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10033e35 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10033e37 push 0x100461e0 */
  push32((uint32_t)(0x100461e0u));
  /* 10033e3c call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10033e42u);
  /* 10033e42 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10033e45:;
  /* 10033e45 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10033e47 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10033e49 push 0x100460c0 */
  push32((uint32_t)(0x100460c0u));
  /* 10033e4e call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10033e54u);
  /* 10033e54 push 0x100438d8 */
  push32((uint32_t)(0x100438d8u));
  /* 10033e59 call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x10033e5fu);
  /* 10033e5f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033e62 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10033e64 je 0x10033ea5 */
  if (C.zf) goto L_10033ea5;
  /* 10033e66 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10033e68 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10033e6a push 0x10046138 */
  push32((uint32_t)(0x10046138u));
  /* 10033e6f call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10033e75u);
  /* 10033e75 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10033e77 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10033e79 push 0x10046148 */
  push32((uint32_t)(0x10046148u));
  /* 10033e7e call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10033e84u);
  /* 10033e84 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10033e86 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10033e88 push 0x10046150 */
  push32((uint32_t)(0x10046150u));
  /* 10033e8d call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10033e93u);
  /* 10033e93 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10033e95 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10033e97 push 0x10046140 */
  push32((uint32_t)(0x10046140u));
  /* 10033e9c call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10033ea2u);
  /* 10033ea2 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10033ea5:;
  /* 10033ea5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10033ea7 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10033ea9 push 0x10043770 */
  push32((uint32_t)(0x10043770u));
  /* 10033eae call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10033eb4u);
  /* 10033eb4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10033eb6 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10033eb8 push 0x100438b0 */
  push32((uint32_t)(0x100438b0u));
  /* 10033ebd call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10033ec3u);
  /* 10033ec3 push 0x10046220 */
  push32((uint32_t)(0x10046220u));
  /* 10033ec8 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x10033eceu);
  /* 10033ece add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033ed1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10033ed4 jle 0x10033f11 */
  if ((C.zf||C.sf!=C.of)) goto L_10033f11;
  /* 10033ed6 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10033eda cmp eax, 0x12c */
  { uint32_t _a=(EAX),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10033edf jle 0x10033f11 */
  if ((C.zf||C.sf!=C.of)) goto L_10033f11;
  /* 10033ee1 lea ecx, [eax - 0x32] */
  ECX = ((uint32_t)(EAX + -0x32));
  /* 10033ee4 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10033ee8 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 10033eeb cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10033eed jge 0x10033f06 */
  if ((C.sf==C.of)) goto L_10033f06;
  /* 10033eef push 0xa */
  push32((uint32_t)(0xau));
  /* 10033ef1 push 0xa */
  push32((uint32_t)(0xau));
  /* 10033ef3 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10033ef8 push 0x100460b0 */
  push32((uint32_t)(0x100460b0u));
  /* 10033efd call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10033f03u);
  /* 10033f03 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10033f06:;
  /* 10033f06 call 0x100332b0 */
  push32(0x10033f0bu); f_100332b0();
  /* 10033f0b jmp 0x10033f11 */
  goto L_10033f11;
L_10033f0d:;
  /* 10033f0d mov bl, byte ptr [esp + 0x12] */
  BL = (r8((uint32_t)(ESP + 0x12)));
L_10033f11:;
  /* 10033f11 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10033f13 je 0x10033f56 */
  if (C.zf) goto L_10033f56;
  /* 10033f15 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10033f17 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10033f19 push 0x10043600 */
  push32((uint32_t)(0x10043600u));
  /* 10033f1e call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10033f24u);
  /* 10033f24 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10033f26 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10033f28 push 0x100436d8 */
  push32((uint32_t)(0x100436d8u));
  /* 10033f2d call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10033f33u);
  /* 10033f33 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10033f35 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10033f37 push 0x100435f8 */
  push32((uint32_t)(0x100435f8u));
  /* 10033f3c call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10033f42u);
  /* 10033f42 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10033f44 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10033f46 push 2 */
  push32((uint32_t)(0x2u));
  /* 10033f48 push 0x10046220 */
  push32((uint32_t)(0x10046220u));
  /* 10033f4d call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10033f53u);
  /* 10033f53 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10033f56:;
  /* 10033f56 push 0x10043770 */
  push32((uint32_t)(0x10043770u));
  /* 10033f5b call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x10033f61u);
  /* 10033f61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033f64 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10033f66 je 0x10033f89 */
  if (C.zf) goto L_10033f89;
  /* 10033f68 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10033f6a push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10033f6c push 0x100461c8 */
  push32((uint32_t)(0x100461c8u));
  /* 10033f71 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10033f77u);
  /* 10033f77 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10033f79 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10033f7b push 0x100461d0 */
  push32((uint32_t)(0x100461d0u));
  /* 10033f80 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10033f86u);
  /* 10033f86 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10033f89:;
  /* 10033f89 push 0x10043848 */
  push32((uint32_t)(0x10043848u));
  /* 10033f8e call dword ptr [0x10046514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046514))), 0x10033f94u);
  /* 10033f94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033f97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10033f99 je 0x10034203 */
  if (C.zf) goto L_10034203;
  /* 10033f9f push 0x10045ef0 */
  push32((uint32_t)(0x10045ef0u));
  /* 10033fa4 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x10033faau);
  /* 10033faa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033fad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10033faf je 0x1003400a */
  if (C.zf) goto L_1003400a;
  /* 10033fb1 push 0x10046240 */
  push32((uint32_t)(0x10046240u));
  /* 10033fb6 call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x10033fbcu);
  /* 10033fbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033fbf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10033fc1 jne 0x1003400a */
  if (!C.zf) goto L_1003400a;
  /* 10033fc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10033fc5 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10033fcbu);
  /* 10033fcb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033fce cmp eax, 0x320 */
  { uint32_t _a=(EAX),_b=(0x320u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10033fd3 jle 0x1003400a */
  if ((C.zf||C.sf!=C.of)) goto L_1003400a;
  /* 10033fd5 push 3 */
  push32((uint32_t)(0x3u));
  /* 10033fd7 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10033fddu);
  /* 10033fdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033fe0 cmp eax, 0x1770 */
  { uint32_t _a=(EAX),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10033fe5 jge 0x1003400a */
  if ((C.sf==C.of)) goto L_1003400a;
  /* 10033fe7 push 4 */
  push32((uint32_t)(0x4u));
  /* 10033fe9 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10033fefu);
  /* 10033fef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10033ff2 cmp eax, 0xbb8 */
  { uint32_t _a=(EAX),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10033ff7 jle 0x1003400a */
  if ((C.zf||C.sf!=C.of)) goto L_1003400a;
  /* 10033ff9 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10033ffe push 3 */
  push32((uint32_t)(0x3u));
  /* 10034000 push 4 */
  push32((uint32_t)(0x4u));
  /* 10034002 call 0x100325f0 */
  push32(0x10034007u); f_100325f0();
  /* 10034007 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1003400a:;
  /* 1003400a push 3 */
  push32((uint32_t)(0x3u));
  /* 1003400c call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10034012u);
  /* 10034012 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034015 cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003401a jge 0x1003403f */
  if ((C.sf==C.of)) goto L_1003403f;
  /* 1003401c push 2 */
  push32((uint32_t)(0x2u));
  /* 1003401e call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10034024u);
  /* 10034024 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034027 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003402c jle 0x1003403f */
  if ((C.zf||C.sf!=C.of)) goto L_1003403f;
  /* 1003402e push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10034033 push 3 */
  push32((uint32_t)(0x3u));
  /* 10034035 push 2 */
  push32((uint32_t)(0x2u));
  /* 10034037 call 0x100325f0 */
  push32(0x1003403cu); f_100325f0();
  /* 1003403c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1003403f:;
  /* 1003403f push 0x100461c8 */
  push32((uint32_t)(0x100461c8u));
  /* 10034044 call dword ptr [0x1004651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004651c))), 0x1003404au);
  /* 1003404a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003404d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1003404f je 0x10034177 */
  if (C.zf) goto L_10034177;
  /* 10034055 push 0x100461d0 */
  push32((uint32_t)(0x100461d0u));
  /* 1003405a call dword ptr [0x1004651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004651c))), 0x10034060u);
  /* 10034060 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034063 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10034065 je 0x10034177 */
  if (C.zf) goto L_10034177;
  /* 1003406b push 2 */
  push32((uint32_t)(0x2u));
  /* 1003406d call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10034073u);
  /* 10034073 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034076 cmp eax, 0x1adb0 */
  { uint32_t _a=(EAX),_b=(0x1adb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003407b jle 0x1003408e */
  if ((C.zf||C.sf!=C.of)) goto L_1003408e;
  /* 1003407d push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 10034082 push 1 */
  push32((uint32_t)(0x1u));
  /* 10034084 push 2 */
  push32((uint32_t)(0x2u));
  /* 10034086 call 0x100325f0 */
  push32(0x1003408bu); f_100325f0();
  /* 1003408b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1003408e:;
  /* 1003408e push 0 */
  push32((uint32_t)(0x0u));
  /* 10034090 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10034096u);
  /* 10034096 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034099 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003409b je 0x1003419a */
  if (C.zf) goto L_1003419a;
  /* 100340a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 100340a3 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x100340a9u);
  /* 100340a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100340ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100340ae je 0x1003411b */
  if (C.zf) goto L_1003411b;
  /* 100340b0 push 4 */
  push32((uint32_t)(0x4u));
  /* 100340b2 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x100340b8u);
  /* 100340b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100340bb cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100340c0 jge 0x1003411b */
  if ((C.sf==C.of)) goto L_1003411b;
  /* 100340c2 push 4 */
  push32((uint32_t)(0x4u));
  /* 100340c4 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x100340cau);
  /* 100340ca push 5 */
  push32((uint32_t)(0x5u));
  /* 100340cc mov esi, eax */
  ESI = (EAX);
  /* 100340ce call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x100340d4u);
  /* 100340d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100340d7 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100340d9 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 100340de jge 0x100340ff */
  if ((C.sf==C.of)) goto L_100340ff;
  /* 100340e0 push 5 */
  push32((uint32_t)(0x5u));
  /* 100340e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 100340e4 call 0x100325f0 */
  push32(0x100340e9u); f_100325f0();
  /* 100340e9 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 100340ee push 4 */
  push32((uint32_t)(0x4u));
  /* 100340f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 100340f2 call 0x100325f0 */
  push32(0x100340f7u); f_100325f0();
  /* 100340f7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100340fa jmp 0x1003419a */
  goto L_1003419a;
L_100340ff:;
  /* 100340ff push 4 */
  push32((uint32_t)(0x4u));
  /* 10034101 push 2 */
  push32((uint32_t)(0x2u));
  /* 10034103 call 0x100325f0 */
  push32(0x10034108u); f_100325f0();
  /* 10034108 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 1003410d push 5 */
  push32((uint32_t)(0x5u));
  /* 1003410f push 2 */
  push32((uint32_t)(0x2u));
  /* 10034111 call 0x100325f0 */
  push32(0x10034116u); f_100325f0();
  /* 10034116 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034119 jmp 0x1003419a */
  goto L_1003419a;
L_1003411b:;
  /* 1003411b push 5 */
  push32((uint32_t)(0x5u));
  /* 1003411d call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10034123u);
  /* 10034123 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034126 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003412b jge 0x1003414d */
  if ((C.sf==C.of)) goto L_1003414d;
  /* 1003412d push 0 */
  push32((uint32_t)(0x0u));
  /* 1003412f call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10034135u);
  /* 10034135 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034138 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003413a je 0x1003414d */
  if (C.zf) goto L_1003414d;
  /* 1003413c push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10034141 push 5 */
  push32((uint32_t)(0x5u));
  /* 10034143 push 2 */
  push32((uint32_t)(0x2u));
  /* 10034145 call 0x100325f0 */
  push32(0x1003414au); f_100325f0();
  /* 1003414a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1003414d:;
  /* 1003414d push 5 */
  push32((uint32_t)(0x5u));
  /* 1003414f call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10034155u);
  /* 10034155 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034158 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003415d jge 0x1003419a */
  if ((C.sf==C.of)) goto L_1003419a;
  /* 1003415f push 0 */
  push32((uint32_t)(0x0u));
  /* 10034161 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10034167u);
  /* 10034167 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003416a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003416c je 0x1003419a */
  if (C.zf) goto L_1003419a;
  /* 1003416e push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10034173 push 5 */
  push32((uint32_t)(0x5u));
  /* 10034175 jmp 0x10034190 */
  goto L_10034190;
L_10034177:;
  /* 10034177 push 2 */
  push32((uint32_t)(0x2u));
  /* 10034179 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x1003417fu);
  /* 1003417f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034182 cmp eax, 0x1adb0 */
  { uint32_t _a=(EAX),_b=(0x1adb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10034187 jle 0x1003419a */
  if ((C.zf||C.sf!=C.of)) goto L_1003419a;
  /* 10034189 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 1003418e push 1 */
  push32((uint32_t)(0x1u));
L_10034190:;
  /* 10034190 push 2 */
  push32((uint32_t)(0x2u));
  /* 10034192 call 0x100325f0 */
  push32(0x10034197u); f_100325f0();
  /* 10034197 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1003419a:;
  /* 1003419a push 0 */
  push32((uint32_t)(0x0u));
  /* 1003419c call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x100341a2u);
  /* 100341a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100341a5 cmp eax, 0x249f0 */
  { uint32_t _a=(EAX),_b=(0x249f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100341aa jle 0x100341bd */
  if ((C.zf||C.sf!=C.of)) goto L_100341bd;
  /* 100341ac push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 100341b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 100341b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 100341b5 call 0x100325f0 */
  push32(0x100341bau); f_100325f0();
  /* 100341ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100341bd:;
  /* 100341bd push 4 */
  push32((uint32_t)(0x4u));
  /* 100341bf call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x100341c5u);
  /* 100341c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100341c8 cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100341cd jle 0x100341e0 */
  if ((C.zf||C.sf!=C.of)) goto L_100341e0;
  /* 100341cf push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 100341d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100341d6 push 4 */
  push32((uint32_t)(0x4u));
  /* 100341d8 call 0x100325f0 */
  push32(0x100341ddu); f_100325f0();
  /* 100341dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100341e0:;
  /* 100341e0 push 5 */
  push32((uint32_t)(0x5u));
  /* 100341e2 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x100341e8u);
  /* 100341e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100341eb cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100341f0 jle 0x10034203 */
  if ((C.zf||C.sf!=C.of)) goto L_10034203;
  /* 100341f2 push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 100341f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 100341f9 push 5 */
  push32((uint32_t)(0x5u));
  /* 100341fb call 0x100325f0 */
  push32(0x10034200u); f_100325f0();
  /* 10034200 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10034203:;
  /* 10034203 pop edi */
  EDI = (pop32());
  /* 10034204 pop esi */
  ESI = (pop32());
  /* 10034205 pop ebp */
  EBP = (pop32());
  /* 10034206 pop ebx */
  EBX = (pop32());
  /* 10034207 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003420a ret  */
  ESPCHK(0x10033340u, _esp0);
  ESP += 4; return;
}

/* FUN_10004210 @ 0x10034210 (209 bytes, 56 insns) */
void f_10034210(void) {
  FTRACE(0x10034210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10034210 push 3 */
  push32((uint32_t)(0x3u));
  /* 10034212 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10034218u);
  /* 10034218 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003421b cmp eax, 0x672 */
  { uint32_t _a=(EAX),_b=(0x672u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10034220 jle 0x100342e0 */
  if ((C.zf||C.sf!=C.of)) goto L_100342e0;
  /* 10034226 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10034228 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1003422a push 0x10046320 */
  push32((uint32_t)(0x10046320u));
  /* 1003422f call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10034235u);
  /* 10034235 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10034237 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10034239 push 0x10046328 */
  push32((uint32_t)(0x10046328u));
  /* 1003423e call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10034244u);
  /* 10034244 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10034246 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10034248 push 0x10046310 */
  push32((uint32_t)(0x10046310u));
  /* 1003424d call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10034253u);
  /* 10034253 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10034255 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10034257 push 0x10046318 */
  push32((uint32_t)(0x10046318u));
  /* 1003425c call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10034262u);
  /* 10034262 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10034264 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10034266 push 0x10046330 */
  push32((uint32_t)(0x10046330u));
  /* 1003426b call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10034271u);
  /* 10034271 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10034273 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10034275 push 0x10046268 */
  push32((uint32_t)(0x10046268u));
  /* 1003427a call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10034280u);
  /* 10034280 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034283 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10034285 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10034287 push 0x10046250 */
  push32((uint32_t)(0x10046250u));
  /* 1003428c call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10034292u);
  /* 10034292 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10034294 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10034296 push 0x10046258 */
  push32((uint32_t)(0x10046258u));
  /* 1003429b call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100342a1u);
  /* 100342a1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100342a3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100342a5 push 0x10046270 */
  push32((uint32_t)(0x10046270u));
  /* 100342aa call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100342b0u);
  /* 100342b0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100342b2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100342b4 push 0x10046278 */
  push32((uint32_t)(0x10046278u));
  /* 100342b9 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100342bfu);
  /* 100342bf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100342c1 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100342c3 push 0x10046230 */
  push32((uint32_t)(0x10046230u));
  /* 100342c8 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100342ceu);
  /* 100342ce push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100342d0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100342d2 push 0x10045f98 */
  push32((uint32_t)(0x10045f98u));
  /* 100342d7 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100342ddu);
  /* 100342dd add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100342e0:;
  /* 100342e0 ret  */
  ESPCHK(0x10034210u, _esp0);
  ESP += 4; return;
}

/* FUN_100042f0 @ 0x100342f0 (79 bytes, 22 insns) */
void f_100342f0(void) {
  FTRACE(0x100342f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100342f0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100342f2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100342f4 push 0x100438e0 */
  push32((uint32_t)(0x100438e0u));
  /* 100342f9 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100342ffu);
  /* 100342ff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10034301 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10034303 push 0x100438e8 */
  push32((uint32_t)(0x100438e8u));
  /* 10034308 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003430eu);
  /* 1003430e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10034310 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10034312 push 0x100438d8 */
  push32((uint32_t)(0x100438d8u));
  /* 10034317 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003431du);
  /* 1003431d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003431f push 0xa */
  push32((uint32_t)(0xau));
  /* 10034321 push 0x10045f48 */
  push32((uint32_t)(0x10045f48u));
  /* 10034326 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003432cu);
  /* 1003432c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003432e push 0xa */
  push32((uint32_t)(0xau));
  /* 10034330 push 0x10045f38 */
  push32((uint32_t)(0x10045f38u));
  /* 10034335 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003433bu);
  /* 1003433b add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003433e ret  */
  ESPCHK(0x100342f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004340 @ 0x10034340 (127 bytes, 35 insns) */
void f_10034340(void) {
  FTRACE(0x10034340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10034340 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10034342 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10034344 push 0x100461a8 */
  push32((uint32_t)(0x100461a8u));
  /* 10034349 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003434fu);
  /* 1003434f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10034351 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10034353 push 0x100461a0 */
  push32((uint32_t)(0x100461a0u));
  /* 10034358 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003435eu);
  /* 1003435e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10034360 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10034362 push 0x10046170 */
  push32((uint32_t)(0x10046170u));
  /* 10034367 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003436du);
  /* 1003436d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1003436f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10034371 push 0x10046168 */
  push32((uint32_t)(0x10046168u));
  /* 10034376 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003437cu);
  /* 1003437c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1003437e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10034380 push 0x10046068 */
  push32((uint32_t)(0x10046068u));
  /* 10034385 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003438bu);
  /* 1003438b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1003438d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1003438f push 0x10046070 */
  push32((uint32_t)(0x10046070u));
  /* 10034394 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003439au);
  /* 1003439a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003439d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1003439f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100343a1 push 0x10046078 */
  push32((uint32_t)(0x10046078u));
  /* 100343a6 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100343acu);
  /* 100343ac push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100343ae push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100343b0 push 0x10046080 */
  push32((uint32_t)(0x10046080u));
  /* 100343b5 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100343bbu);
  /* 100343bb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100343be ret  */
  ESPCHK(0x10034340u, _esp0);
  ESP += 4; return;
}

/* ProcessMiddleSeaAI @ 0x100343c0 (3643 bytes, 1035 insns) */
void f_100343c0(void) {
  FTRACE(0x100343c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100343c0 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100343c3 push ebx */
  push32((uint32_t)(EBX));
  /* 100343c4 push ebp */
  push32((uint32_t)(EBP));
  /* 100343c5 push esi */
  push32((uint32_t)(ESI));
  /* 100343c6 push edi */
  push32((uint32_t)(EDI));
  /* 100343c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 100343c9 call 0x10032740 */
  push32(0x100343ceu); f_10032740();
  /* 100343ce push 0x1003f030 */
  push32((uint32_t)(0x1003f030u));
  /* 100343d3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100343d5 call dword ptr [0x100464dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464dc))), 0x100343dbu);
  /* 100343db push 0x10046160 */
  push32((uint32_t)(0x10046160u));
  /* 100343e0 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x100343e6u);
  /* 100343e6 push 3 */
  push32((uint32_t)(0x3u));
  /* 100343e8 mov ebx, eax */
  EBX = (EAX);
  /* 100343ea call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x100343f0u);
  /* 100343f0 mov ebp, eax */
  EBP = (EAX);
  /* 100343f2 push 0x10046188 */
  push32((uint32_t)(0x10046188u));
  /* 100343f7 mov dword ptr [esp + 0x30], ebp */
  w32((uint32_t)(ESP + 0x30), (EBP));
  /* 100343fb call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x10034401u);
  /* 10034401 push 0x10043658 */
  push32((uint32_t)(0x10043658u));
  /* 10034406 mov byte ptr [esp + 0x2f], al */
  w8((uint32_t)(ESP + 0x2f), (AL));
  /* 1003440a call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x10034410u);
  /* 10034410 push 0x10045ff0 */
  push32((uint32_t)(0x10045ff0u));
  /* 10034415 call dword ptr [0x1004651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004651c))), 0x1003441bu);
  /* 1003441b push 0x100460b0 */
  push32((uint32_t)(0x100460b0u));
  /* 10034420 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x10034426u);
  /* 10034426 push 0x10046380 */
  push32((uint32_t)(0x10046380u));
  /* 1003442b call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x10034431u);
  /* 10034431 push 0x10046300 */
  push32((uint32_t)(0x10046300u));
  /* 10034436 mov esi, eax */
  ESI = (EAX);
  /* 10034438 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x1003443eu);
  /* 1003443e push 0x10043658 */
  push32((uint32_t)(0x10043658u));
  /* 10034443 mov edi, eax */
  EDI = (EAX);
  /* 10034445 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x1003444bu);
  /* 1003444b add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003444d add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034450 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10034452 mov byte ptr [esp + 0x12], 1 */
  w8((uint32_t)(ESP + 0x12), (0x1u));
  /* 10034457 mov dword ptr [esp + 0x14], eax */
  w32((uint32_t)(ESP + 0x14), (EAX));
  /* 1003445b call 0x10032640 */
  push32(0x10034460u); f_10032640();
  /* 10034460 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10034462 jle 0x10034478 */
  if ((C.zf||C.sf!=C.of)) goto L_10034478;
  /* 10034464 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10034466 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10034468 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1003446a push 0x100462f8 */
  push32((uint32_t)(0x100462f8u));
  /* 1003446f call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10034475u);
  /* 10034475 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10034478:;
  /* 10034478 push 0x100438a8 */
  push32((uint32_t)(0x100438a8u));
  /* 1003447d call dword ptr [0x10046514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046514))), 0x10034483u);
  /* 10034483 push 0x100438a8 */
  push32((uint32_t)(0x100438a8u));
  /* 10034488 mov esi, eax */
  ESI = (EAX);
  /* 1003448a call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x10034490u);
  /* 10034490 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034493 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10034495 je 0x1003449c */
  if (C.zf) goto L_1003449c;
  /* 10034497 mov byte ptr [esp + 0x12], 0 */
  w8((uint32_t)(ESP + 0x12), (0x0u));
L_1003449c:;
  /* 1003449c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1003449e je 0x100351f3 */
  if (C.zf) goto L_100351f3;
  /* 100344a4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100344a6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100344a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 100344aa push 0x10045fa8 */
  push32((uint32_t)(0x10045fa8u));
  /* 100344af call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x100344b5u);
  /* 100344b5 push 0x10045fa8 */
  push32((uint32_t)(0x10045fa8u));
  /* 100344ba call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x100344c0u);
  /* 100344c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100344c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100344c5 je 0x100351f3 */
  if (C.zf) goto L_100351f3;
  /* 100344cb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100344cd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100344cf push 0x10046348 */
  push32((uint32_t)(0x10046348u));
  /* 100344d4 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100344dau);
  /* 100344da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100344dd call dword ptr [0x10046540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046540))), 0x100344e3u);
  /* 100344e3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100344e5 jne 0x1003453c */
  if (!C.zf) goto L_1003453c;
  /* 100344e7 cmp ebp, 0x2bc */
  { uint32_t _a=(EBP),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100344ed jle 0x10034514 */
  if ((C.zf||C.sf!=C.of)) goto L_10034514;
  /* 100344ef push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100344f1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100344f3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100344f5 push 0x10046160 */
  push32((uint32_t)(0x10046160u));
  /* 100344fa call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10034500u);
  /* 10034500 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10034502 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10034504 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10034506 push 0x10043658 */
  push32((uint32_t)(0x10043658u));
  /* 1003450b call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10034511u);
  /* 10034511 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10034514:;
  /* 10034514 cmp ebp, 0x3e8 */
  { uint32_t _a=(EBP),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003451a jle 0x10034528 */
  if ((C.zf||C.sf!=C.of)) goto L_10034528;
  /* 1003451c cmp dword ptr [esp + 0x14], 0x1e */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10034521 jle 0x10034528 */
  if ((C.zf||C.sf!=C.of)) goto L_10034528;
  /* 10034523 call 0x10034210 */
  push32(0x10034528u); f_10034210();
L_10034528:;
  /* 10034528 push 1 */
  push32((uint32_t)(0x1u));
  /* 1003452a push 1 */
  push32((uint32_t)(0x1u));
  /* 1003452c push 0 */
  push32((uint32_t)(0x0u));
  /* 1003452e call dword ptr [0x100464e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464e4))), 0x10034534u);
  /* 10034534 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034537 jmp 0x100345ff */
  goto L_100345ff;
L_1003453c:;
  /* 1003453c mov eax, dword ptr [0x10046564] */
  EAX = (r32((uint32_t)(0x10046564)));
  /* 10034541 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10034544 je 0x10034558 */
  if (C.zf) goto L_10034558;
  /* 10034546 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10034547 je 0x10034552 */
  if (C.zf) goto L_10034552;
  /* 10034549 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1003454a jne 0x10034584 */
  if (!C.zf) goto L_10034584;
  /* 1003454c push 9 */
  push32((uint32_t)(0x9u));
  /* 1003454e push 4 */
  push32((uint32_t)(0x4u));
  /* 10034550 jmp 0x10034579 */
  goto L_10034579;
L_10034552:;
  /* 10034552 push 4 */
  push32((uint32_t)(0x4u));
  /* 10034554 push 9 */
  push32((uint32_t)(0x9u));
  /* 10034556 jmp 0x10034579 */
  goto L_10034579;
L_10034558:;
  /* 10034558 cmp ebp, 0x2ee0 */
  { uint32_t _a=(EBP),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003455e jle 0x1003456f */
  if ((C.zf||C.sf!=C.of)) goto L_1003456f;
  /* 10034560 push 6 */
  push32((uint32_t)(0x6u));
  /* 10034562 push 6 */
  push32((uint32_t)(0x6u));
  /* 10034564 push 9 */
  push32((uint32_t)(0x9u));
  /* 10034566 call dword ptr [0x100464e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464e4))), 0x1003456cu);
  /* 1003456c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1003456f:;
  /* 1003456f push 5 */
  push32((uint32_t)(0x5u));
  /* 10034571 cmp ebp, 0x1f40 */
  { uint32_t _a=(EBP),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10034577 push 5 */
  push32((uint32_t)(0x5u));
L_10034579:;
  /* 10034579 push 9 */
  push32((uint32_t)(0x9u));
  /* 1003457b call dword ptr [0x100464e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464e4))), 0x10034581u);
  /* 10034581 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10034584:;
  /* 10034584 mov al, byte ptr [esp + 0x13] */
  AL = (r8((uint32_t)(ESP + 0x13)));
  /* 10034588 mov esi, 0x1c2 */
  ESI = (0x1c2u);
  /* 1003458d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1003458f je 0x10034596 */
  if (C.zf) goto L_10034596;
  /* 10034591 mov esi, 0x17c */
  ESI = (0x17cu);
L_10034596:;
  /* 10034596 cmp ebx, 0x19 */
  { uint32_t _a=(EBX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10034599 jge 0x100345b7 */
  if ((C.sf==C.of)) goto L_100345b7;
  /* 1003459b cmp ebp, 0x12c */
  { uint32_t _a=(EBP),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100345a1 jle 0x100345f3 */
  if ((C.zf||C.sf!=C.of)) goto L_100345f3;
  /* 100345a3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100345a5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100345a7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100345a9 push 0x10046160 */
  push32((uint32_t)(0x10046160u));
  /* 100345ae call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x100345b4u);
  /* 100345b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100345b7:;
  /* 100345b7 cmp ebp, 0x12c */
  { uint32_t _a=(EBP),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100345bd jle 0x100345f3 */
  if ((C.zf||C.sf!=C.of)) goto L_100345f3;
  /* 100345bf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100345c1 push 0xe8 */
  push32((uint32_t)(0xe8u));
  /* 100345c6 push esi */
  push32((uint32_t)(ESI));
  /* 100345c7 push 0x10046160 */
  push32((uint32_t)(0x10046160u));
  /* 100345cc call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x100345d2u);
  /* 100345d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100345d5 cmp ebp, 0x190 */
  { uint32_t _a=(EBP),_b=(0x190u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100345db jle 0x100345f3 */
  if ((C.zf||C.sf!=C.of)) goto L_100345f3;
  /* 100345dd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100345df push 0xf4 */
  push32((uint32_t)(0xf4u));
  /* 100345e4 push esi */
  push32((uint32_t)(ESI));
  /* 100345e5 push 0x10043658 */
  push32((uint32_t)(0x10043658u));
  /* 100345ea call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x100345f0u);
  /* 100345f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100345f3:;
  /* 100345f3 cmp dword ptr [esp + 0x14], 0x1e */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100345f8 jle 0x100345ff */
  if ((C.zf||C.sf!=C.of)) goto L_100345ff;
  /* 100345fa call 0x10034210 */
  push32(0x100345ffu); f_10034210();
L_100345ff:;
  /* 100345ff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10034601 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10034603 push 1 */
  push32((uint32_t)(0x1u));
  /* 10034605 push 0x10045f88 */
  push32((uint32_t)(0x10045f88u));
  /* 1003460a call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10034610u);
  /* 10034610 push 5 */
  push32((uint32_t)(0x5u));
  /* 10034612 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10034614 push 2 */
  push32((uint32_t)(0x2u));
  /* 10034616 push 0x10045f88 */
  push32((uint32_t)(0x10045f88u));
  /* 1003461b call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10034621u);
  /* 10034621 push 5 */
  push32((uint32_t)(0x5u));
  /* 10034623 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10034625 push 3 */
  push32((uint32_t)(0x3u));
  /* 10034627 push 0x10045f88 */
  push32((uint32_t)(0x10045f88u));
  /* 1003462c call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10034632u);
  /* 10034632 push 0x10046220 */
  push32((uint32_t)(0x10046220u));
  /* 10034637 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x1003463du);
  /* 1003463d add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034640 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10034643 jle 0x100346b6 */
  if ((C.zf||C.sf!=C.of)) goto L_100346b6;
  /* 10034645 push 5 */
  push32((uint32_t)(0x5u));
  /* 10034647 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10034649 push 2 */
  push32((uint32_t)(0x2u));
  /* 1003464b push 0x10045f88 */
  push32((uint32_t)(0x10045f88u));
  /* 10034650 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10034656u);
  /* 10034656 push 0x10045f88 */
  push32((uint32_t)(0x10045f88u));
  /* 1003465b call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x10034661u);
  /* 10034661 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034664 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10034667 jle 0x1003467d */
  if ((C.zf||C.sf!=C.of)) goto L_1003467d;
  /* 10034669 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1003466b push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1003466d push 1 */
  push32((uint32_t)(0x1u));
  /* 1003466f push 0x100460a8 */
  push32((uint32_t)(0x100460a8u));
  /* 10034674 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x1003467au);
  /* 1003467a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1003467d:;
  /* 1003467d push 0x10045f88 */
  push32((uint32_t)(0x10045f88u));
  /* 10034682 call dword ptr [0x10046514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046514))), 0x10034688u);
  /* 10034688 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003468b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003468e jle 0x100346a4 */
  if ((C.zf||C.sf!=C.of)) goto L_100346a4;
  /* 10034690 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10034692 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10034694 push 1 */
  push32((uint32_t)(0x1u));
  /* 10034696 push 0x10043848 */
  push32((uint32_t)(0x10043848u));
  /* 1003469b call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x100346a1u);
  /* 100346a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100346a4:;
  /* 100346a4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100346a6 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100346a8 push 0x100460e0 */
  push32((uint32_t)(0x100460e0u));
  /* 100346ad call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100346b3u);
  /* 100346b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100346b6:;
  /* 100346b6 push 0x10046160 */
  push32((uint32_t)(0x10046160u));
  /* 100346bb call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x100346c1u);
  /* 100346c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100346c4 cmp eax, 0x23 */
  { uint32_t _a=(EAX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100346c7 jle 0x100346dd */
  if ((C.zf||C.sf!=C.of)) goto L_100346dd;
  /* 100346c9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100346cb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100346cd push 1 */
  push32((uint32_t)(0x1u));
  /* 100346cf push 0x10043848 */
  push32((uint32_t)(0x10043848u));
  /* 100346d4 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x100346dau);
  /* 100346da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100346dd:;
  /* 100346dd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100346df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100346e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 100346e3 push 0x100461b8 */
  push32((uint32_t)(0x100461b8u));
  /* 100346e8 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x100346eeu);
  /* 100346ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100346f0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100346f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 100346f4 push 0x10046220 */
  push32((uint32_t)(0x10046220u));
  /* 100346f9 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x100346ffu);
  /* 100346ff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10034701 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10034703 push 2 */
  push32((uint32_t)(0x2u));
  /* 10034705 push 0x10046220 */
  push32((uint32_t)(0x10046220u));
  /* 1003470a call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10034710u);
  /* 10034710 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10034712 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10034714 push 1 */
  push32((uint32_t)(0x1u));
  /* 10034716 push 0x10045fa0 */
  push32((uint32_t)(0x10045fa0u));
  /* 1003471b call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10034721u);
  /* 10034721 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034724 push 5 */
  push32((uint32_t)(0x5u));
  /* 10034726 push 0xa */
  push32((uint32_t)(0xau));
  /* 10034728 push 2 */
  push32((uint32_t)(0x2u));
  /* 1003472a push 0x100461b8 */
  push32((uint32_t)(0x100461b8u));
  /* 1003472f call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10034735u);
  /* 10034735 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10034737 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10034739 push 0x10043630 */
  push32((uint32_t)(0x10043630u));
  /* 1003473e call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10034744u);
  /* 10034744 push 0x10045ef0 */
  push32((uint32_t)(0x10045ef0u));
  /* 10034749 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x1003474fu);
  /* 1003474f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034752 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10034754 jle 0x1003476a */
  if ((C.zf||C.sf!=C.of)) goto L_1003476a;
  /* 10034756 push 3 */
  push32((uint32_t)(0x3u));
  /* 10034758 push 5 */
  push32((uint32_t)(0x5u));
  /* 1003475a push 1 */
  push32((uint32_t)(0x1u));
  /* 1003475c push 0x100460c8 */
  push32((uint32_t)(0x100460c8u));
  /* 10034761 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10034767u);
  /* 10034767 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1003476a:;
  /* 1003476a call dword ptr [0x10046540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046540))), 0x10034770u);
  /* 10034770 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10034772 je 0x10034788 */
  if (C.zf) goto L_10034788;
  /* 10034774 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10034776 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10034778 push 1 */
  push32((uint32_t)(0x1u));
  /* 1003477a push 0x10045ef0 */
  push32((uint32_t)(0x10045ef0u));
  /* 1003477f call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10034785u);
  /* 10034785 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10034788:;
  /* 10034788 push 0xa */
  push32((uint32_t)(0xau));
  /* 1003478a push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1003478c push 1 */
  push32((uint32_t)(0x1u));
  /* 1003478e push 0x10045fb8 */
  push32((uint32_t)(0x10045fb8u));
  /* 10034793 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10034799u);
  /* 10034799 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1003479b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1003479d push 1 */
  push32((uint32_t)(0x1u));
  /* 1003479f push 0x100435e8 */
  push32((uint32_t)(0x100435e8u));
  /* 100347a4 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x100347aau);
  /* 100347aa add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100347ad cmp ebx, 0x19 */
  { uint32_t _a=(EBX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100347b0 jle 0x100347c6 */
  if ((C.zf||C.sf!=C.of)) goto L_100347c6;
  /* 100347b2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100347b4 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100347b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 100347b8 push 0x10045fa8 */
  push32((uint32_t)(0x10045fa8u));
  /* 100347bd call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x100347c3u);
  /* 100347c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100347c6:;
  /* 100347c6 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100347c8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100347ca push 1 */
  push32((uint32_t)(0x1u));
  /* 100347cc push 0x10046228 */
  push32((uint32_t)(0x10046228u));
  /* 100347d1 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x100347d7u);
  /* 100347d7 push 5 */
  push32((uint32_t)(0x5u));
  /* 100347d9 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100347db push 2 */
  push32((uint32_t)(0x2u));
  /* 100347dd push 0x10046228 */
  push32((uint32_t)(0x10046228u));
  /* 100347e2 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x100347e8u);
  /* 100347e8 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100347ea push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100347ec push 0x10046048 */
  push32((uint32_t)(0x10046048u));
  /* 100347f1 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100347f7u);
  /* 100347f7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100347f9 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100347fb push 0x10046240 */
  push32((uint32_t)(0x10046240u));
  /* 10034800 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10034806u);
  /* 10034806 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10034808 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003480a push 0x10046188 */
  push32((uint32_t)(0x10046188u));
  /* 1003480f call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10034815u);
  /* 10034815 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034818 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1003481a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1003481c push 0x10046010 */
  push32((uint32_t)(0x10046010u));
  /* 10034821 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10034827u);
  /* 10034827 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10034829 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1003482b push 0x10046000 */
  push32((uint32_t)(0x10046000u));
  /* 10034830 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10034836u);
  /* 10034836 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10034838 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1003483a push 0x10046008 */
  push32((uint32_t)(0x10046008u));
  /* 1003483f call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10034845u);
  /* 10034845 push 0x100460a8 */
  push32((uint32_t)(0x100460a8u));
  /* 1003484a call dword ptr [0x10046514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046514))), 0x10034850u);
  /* 10034850 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034853 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10034855 je 0x10034914 */
  if (C.zf) goto L_10034914;
  /* 1003485b push 0x10046188 */
  push32((uint32_t)(0x10046188u));
  /* 10034860 call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x10034866u);
  /* 10034866 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034869 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1003486b jne 0x10034914 */
  if (!C.zf) goto L_10034914;
  /* 10034871 push 1 */
  push32((uint32_t)(0x1u));
  /* 10034873 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10034879u);
  /* 10034879 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003487c cmp eax, 0xe74 */
  { uint32_t _a=(EAX),_b=(0xe74u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10034881 jle 0x100348a7 */
  if ((C.zf||C.sf!=C.of)) goto L_100348a7;
  /* 10034883 push 4 */
  push32((uint32_t)(0x4u));
  /* 10034885 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x1003488bu);
  /* 1003488b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003488e cmp eax, 0x157c */
  { uint32_t _a=(EAX),_b=(0x157cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10034893 jle 0x100348a7 */
  if ((C.zf||C.sf!=C.of)) goto L_100348a7;
  /* 10034895 push 5 */
  push32((uint32_t)(0x5u));
  /* 10034897 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x1003489du);
  /* 1003489d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100348a0 cmp eax, 0x20d0 */
  { uint32_t _a=(EAX),_b=(0x20d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100348a5 jg 0x10034914 */
  if ((!C.zf&&C.sf==C.of)) goto L_10034914;
L_100348a7:;
  /* 100348a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 100348a9 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x100348afu);
  /* 100348af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100348b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100348b4 je 0x1003493b */
  if (C.zf) goto L_1003493b;
  /* 100348ba push 5 */
  push32((uint32_t)(0x5u));
  /* 100348bc call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x100348c2u);
  /* 100348c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100348c5 cmp eax, 0x20d0 */
  { uint32_t _a=(EAX),_b=(0x20d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100348ca jle 0x1003493b */
  if ((C.zf||C.sf!=C.of)) goto L_1003493b;
  /* 100348cc push 5 */
  push32((uint32_t)(0x5u));
  /* 100348ce call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x100348d4u);
  /* 100348d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100348d7 cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100348dc jle 0x100348ef */
  if ((C.zf||C.sf!=C.of)) goto L_100348ef;
  /* 100348de push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 100348e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 100348e5 push 5 */
  push32((uint32_t)(0x5u));
  /* 100348e7 call 0x100325f0 */
  push32(0x100348ecu); f_100325f0();
  /* 100348ec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100348ef:;
  /* 100348ef push 4 */
  push32((uint32_t)(0x4u));
  /* 100348f1 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x100348f7u);
  /* 100348f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100348fa cmp eax, 0x32c8 */
  { uint32_t _a=(EAX),_b=(0x32c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100348ff jle 0x1003493b */
  if ((C.zf||C.sf!=C.of)) goto L_1003493b;
  /* 10034901 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10034906 push 1 */
  push32((uint32_t)(0x1u));
  /* 10034908 push 4 */
  push32((uint32_t)(0x4u));
  /* 1003490a call 0x100325f0 */
  push32(0x1003490fu); f_100325f0();
  /* 1003490f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034912 jmp 0x1003493b */
  goto L_1003493b;
L_10034914:;
  /* 10034914 push 0 */
  push32((uint32_t)(0x0u));
  /* 10034916 push 1 */
  push32((uint32_t)(0x1u));
  /* 10034918 call 0x100325d0 */
  push32(0x1003491du); f_100325d0();
  /* 1003491d push 0 */
  push32((uint32_t)(0x0u));
  /* 1003491f push 4 */
  push32((uint32_t)(0x4u));
  /* 10034921 call 0x100325d0 */
  push32(0x10034926u); f_100325d0();
  /* 10034926 push 0 */
  push32((uint32_t)(0x0u));
  /* 10034928 push 3 */
  push32((uint32_t)(0x3u));
  /* 1003492a call 0x100325d0 */
  push32(0x1003492fu); f_100325d0();
  /* 1003492f push 0 */
  push32((uint32_t)(0x0u));
  /* 10034931 push 1 */
  push32((uint32_t)(0x1u));
  /* 10034933 call 0x100325d0 */
  push32(0x10034938u); f_100325d0();
  /* 10034938 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1003493b:;
  /* 1003493b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003493d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003493f push 0x10043770 */
  push32((uint32_t)(0x10043770u));
  /* 10034944 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003494au);
  /* 1003494a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1003494c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1003494e push 1 */
  push32((uint32_t)(0x1u));
  /* 10034950 push 0x100462a8 */
  push32((uint32_t)(0x100462a8u));
  /* 10034955 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x1003495bu);
  /* 1003495b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1003495d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1003495f push 2 */
  push32((uint32_t)(0x2u));
  /* 10034961 push 0x100462a8 */
  push32((uint32_t)(0x100462a8u));
  /* 10034966 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x1003496cu);
  /* 1003496c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1003496e push 0xa */
  push32((uint32_t)(0xau));
  /* 10034970 push 3 */
  push32((uint32_t)(0x3u));
  /* 10034972 push 0x100462a8 */
  push32((uint32_t)(0x100462a8u));
  /* 10034977 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x1003497du);
  /* 1003497d push 0x10043928 */
  push32((uint32_t)(0x10043928u));
  /* 10034982 call dword ptr [0x1004651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004651c))), 0x10034988u);
  /* 10034988 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003498b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1003498d jne 0x100349d8 */
  if (!C.zf) goto L_100349d8;
  /* 1003498f push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 10034991 push 0 */
  push32((uint32_t)(0x0u));
  /* 10034993 call 0x10032620 */
  push32(0x10034998u); f_10032620();
  /* 10034998 mov esi, eax */
  ESI = (EAX);
  /* 1003499a push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1003499c push 0 */
  push32((uint32_t)(0x0u));
  /* 1003499e sar esi, 2 */
  ESI = (sh_sar((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 100349a1 call 0x10032620 */
  push32(0x100349a6u); f_10032620();
  /* 100349a6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 100349a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 100349aa add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100349ac call 0x10032620 */
  push32(0x100349b1u); f_10032620();
  /* 100349b1 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100349b3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100349b6 cmp esi, 6 */
  { uint32_t _a=(ESI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100349b9 jle 0x100349c8 */
  if ((C.zf||C.sf!=C.of)) goto L_100349c8;
  /* 100349bb push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100349bd push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100349bf push 6 */
  push32((uint32_t)(0x6u));
  /* 100349c1 push 0x10045f60 */
  push32((uint32_t)(0x10045f60u));
  /* 100349c6 jmp 0x100349e3 */
  goto L_100349e3;
L_100349c8:;
  /* 100349c8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100349ca je 0x100349ec */
  if (C.zf) goto L_100349ec;
  /* 100349cc push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100349ce push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100349d0 push esi */
  push32((uint32_t)(ESI));
  /* 100349d1 push 0x10045f60 */
  push32((uint32_t)(0x10045f60u));
  /* 100349d6 jmp 0x100349e3 */
  goto L_100349e3;
L_100349d8:;
  /* 100349d8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100349da push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100349dc push 0xa */
  push32((uint32_t)(0xau));
  /* 100349de push 0x100438b8 */
  push32((uint32_t)(0x100438b8u));
L_100349e3:;
  /* 100349e3 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x100349e9u);
  /* 100349e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100349ec:;
  /* 100349ec push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100349ee push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100349f0 push 0x10043928 */
  push32((uint32_t)(0x10043928u));
  /* 100349f5 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100349fbu);
  /* 100349fb push 0x10046240 */
  push32((uint32_t)(0x10046240u));
  /* 10034a00 call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x10034a06u);
  /* 10034a06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034a09 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10034a0b je 0x10034a2e */
  if (C.zf) goto L_10034a2e;
  /* 10034a0d push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10034a0f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10034a11 push 0x10043928 */
  push32((uint32_t)(0x10043928u));
  /* 10034a16 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10034a1cu);
  /* 10034a1c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10034a1e push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10034a20 push 0x10043840 */
  push32((uint32_t)(0x10043840u));
  /* 10034a25 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10034a2bu);
  /* 10034a2b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10034a2e:;
  /* 10034a2e push 0x10043928 */
  push32((uint32_t)(0x10043928u));
  /* 10034a33 call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x10034a39u);
  /* 10034a39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034a3c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10034a3e je 0x10034a66 */
  if (C.zf) goto L_10034a66;
  /* 10034a40 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10034a42 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10034a44 push 0x10043910 */
  push32((uint32_t)(0x10043910u));
  /* 10034a49 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10034a4fu);
  /* 10034a4f push 0xa */
  push32((uint32_t)(0xau));
  /* 10034a51 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10034a53 push 0x10043850 */
  push32((uint32_t)(0x10043850u));
  /* 10034a58 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10034a5eu);
  /* 10034a5e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034a61 call 0x10033300 */
  push32(0x10034a66u); f_10033300();
L_10034a66:;
  /* 10034a66 push 0 */
  push32((uint32_t)(0x0u));
  /* 10034a68 push 1 */
  push32((uint32_t)(0x1u));
  /* 10034a6a call 0x100325d0 */
  push32(0x10034a6fu); f_100325d0();
  /* 10034a6f push 0 */
  push32((uint32_t)(0x0u));
  /* 10034a71 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10034a77u);
  /* 10034a77 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034a7a cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10034a7f jle 0x10034ac3 */
  if ((C.zf||C.sf!=C.of)) goto L_10034ac3;
  /* 10034a81 push 0x10043770 */
  push32((uint32_t)(0x10043770u));
  /* 10034a86 call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x10034a8cu);
  /* 10034a8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034a8f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10034a91 je 0x10034ac3 */
  if (C.zf) goto L_10034ac3;
  /* 10034a93 push 1 */
  push32((uint32_t)(0x1u));
  /* 10034a95 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10034a9bu);
  /* 10034a9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034a9e cmp eax, 0x1d4c */
  { uint32_t _a=(EAX),_b=(0x1d4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10034aa3 jge 0x10034ac3 */
  if ((C.sf==C.of)) goto L_10034ac3;
  /* 10034aa5 push 0x10043928 */
  push32((uint32_t)(0x10043928u));
  /* 10034aaa call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x10034ab0u);
  /* 10034ab0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034ab3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10034ab5 jne 0x10034ac3 */
  if (!C.zf) goto L_10034ac3;
  /* 10034ab7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10034ab9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10034abb call 0x100325d0 */
  push32(0x10034ac0u); f_100325d0();
  /* 10034ac0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10034ac3:;
  /* 10034ac3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10034ac5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10034ac7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10034ac9 push 0x100461c0 */
  push32((uint32_t)(0x100461c0u));
  /* 10034ace call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10034ad4u);
  /* 10034ad4 push 0x100460c0 */
  push32((uint32_t)(0x100460c0u));
  /* 10034ad9 call dword ptr [0x1004651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004651c))), 0x10034adfu);
  /* 10034adf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034ae2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10034ae4 je 0x10034afa */
  if (C.zf) goto L_10034afa;
  /* 10034ae6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10034ae8 push 0xa */
  push32((uint32_t)(0xau));
  /* 10034aea push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10034aec push 0x100461c0 */
  push32((uint32_t)(0x100461c0u));
  /* 10034af1 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10034af7u);
  /* 10034af7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10034afa:;
  /* 10034afa push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10034afc push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10034afe push 0x100460c0 */
  push32((uint32_t)(0x100460c0u));
  /* 10034b03 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10034b09u);
  /* 10034b09 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10034b0b push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10034b0d push 0x100460d0 */
  push32((uint32_t)(0x100460d0u));
  /* 10034b12 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10034b18u);
  /* 10034b18 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10034b1a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10034b1c push 0x100462b8 */
  push32((uint32_t)(0x100462b8u));
  /* 10034b21 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10034b27u);
  /* 10034b27 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10034b29 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10034b2b push 0x100462a0 */
  push32((uint32_t)(0x100462a0u));
  /* 10034b30 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10034b36u);
  /* 10034b36 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10034b38 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10034b3a push 0x100462b0 */
  push32((uint32_t)(0x100462b0u));
  /* 10034b3f call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10034b45u);
  /* 10034b45 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10034b47 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10034b49 push 0x10046290 */
  push32((uint32_t)(0x10046290u));
  /* 10034b4e call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10034b54u);
  /* 10034b54 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034b57 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10034b59 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10034b5b push 0x10046298 */
  push32((uint32_t)(0x10046298u));
  /* 10034b60 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10034b66u);
  /* 10034b66 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10034b68 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10034b6a push 0x10046288 */
  push32((uint32_t)(0x10046288u));
  /* 10034b6f call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10034b75u);
  /* 10034b75 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034b78 cmp ebx, 0x23 */
  { uint32_t _a=(EBX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10034b7b jle 0x10034bd4 */
  if ((C.zf||C.sf!=C.of)) goto L_10034bd4;
  /* 10034b7d mov al, byte ptr [esp + 0x12] */
  AL = (r8((uint32_t)(ESP + 0x12)));
  /* 10034b81 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10034b83 je 0x10034bd4 */
  if (C.zf) goto L_10034bd4;
  /* 10034b85 push 0xa */
  push32((uint32_t)(0xau));
  /* 10034b87 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10034b89 push 1 */
  push32((uint32_t)(0x1u));
  /* 10034b8b push 0x100438a8 */
  push32((uint32_t)(0x100438a8u));
  /* 10034b90 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10034b96u);
  /* 10034b96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034b99 cmp ebx, 0x3c */
  { uint32_t _a=(EBX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10034b9c jle 0x10034bd4 */
  if ((C.zf||C.sf!=C.of)) goto L_10034bd4;
  /* 10034b9e push 0xa */
  push32((uint32_t)(0xau));
  /* 10034ba0 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10034ba2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10034ba4 push 0x100438a8 */
  push32((uint32_t)(0x100438a8u));
  /* 10034ba9 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10034bafu);
  /* 10034baf push 0xa */
  push32((uint32_t)(0xau));
  /* 10034bb1 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10034bb3 push 3 */
  push32((uint32_t)(0x3u));
  /* 10034bb5 push 0x100438a8 */
  push32((uint32_t)(0x100438a8u));
  /* 10034bba call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10034bc0u);
  /* 10034bc0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10034bc2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10034bc4 push 4 */
  push32((uint32_t)(0x4u));
  /* 10034bc6 push 0x100438a8 */
  push32((uint32_t)(0x100438a8u));
  /* 10034bcb call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10034bd1u);
  /* 10034bd1 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10034bd4:;
  /* 10034bd4 mov bl, byte ptr [esp + 0x13] */
  BL = (r8((uint32_t)(ESP + 0x13)));
  /* 10034bd8 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10034bda je 0x10034cbe */
  if (C.zf) goto L_10034cbe;
  /* 10034be0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10034be2 push 0xa */
  push32((uint32_t)(0xau));
  /* 10034be4 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10034be6 push 0x10043898 */
  push32((uint32_t)(0x10043898u));
  /* 10034beb call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10034bf1u);
  /* 10034bf1 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10034bf3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10034bf5 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10034bf7 push 0x10046130 */
  push32((uint32_t)(0x10046130u));
  /* 10034bfc call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10034c02u);
  /* 10034c02 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10034c04 push 1 */
  push32((uint32_t)(0x1u));
  /* 10034c06 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10034c08 push 0x10046248 */
  push32((uint32_t)(0x10046248u));
  /* 10034c0d call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10034c13u);
  /* 10034c13 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10034c15 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10034c17 push 0x10043600 */
  push32((uint32_t)(0x10043600u));
  /* 10034c1c call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10034c22u);
  /* 10034c22 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10034c24 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10034c26 push 0x100436d8 */
  push32((uint32_t)(0x100436d8u));
  /* 10034c2b call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10034c31u);
  /* 10034c31 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034c34 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10034c36 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10034c38 push 0x100435f8 */
  push32((uint32_t)(0x100435f8u));
  /* 10034c3d call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10034c43u);
  /* 10034c43 push 0x10046168 */
  push32((uint32_t)(0x10046168u));
  /* 10034c48 call dword ptr [0x1004651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004651c))), 0x10034c4eu);
  /* 10034c4e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034c51 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10034c53 je 0x10034c69 */
  if (C.zf) goto L_10034c69;
  /* 10034c55 push 0xa */
  push32((uint32_t)(0xau));
  /* 10034c57 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10034c59 push 5 */
  push32((uint32_t)(0x5u));
  /* 10034c5b push 0x10046340 */
  push32((uint32_t)(0x10046340u));
  /* 10034c60 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10034c66u);
  /* 10034c66 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10034c69:;
  /* 10034c69 push 0x10046080 */
  push32((uint32_t)(0x10046080u));
  /* 10034c6e call dword ptr [0x1004651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004651c))), 0x10034c74u);
  /* 10034c74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034c77 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10034c79 je 0x10034c8f */
  if (C.zf) goto L_10034c8f;
  /* 10034c7b push 0xa */
  push32((uint32_t)(0xau));
  /* 10034c7d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10034c7f push 0xa */
  push32((uint32_t)(0xau));
  /* 10034c81 push 0x10043638 */
  push32((uint32_t)(0x10043638u));
  /* 10034c86 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10034c8cu);
  /* 10034c8c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10034c8f:;
  /* 10034c8f call 0x10034340 */
  push32(0x10034c94u); f_10034340();
L_10034c94:;
  /* 10034c94 push 0x10045ff0 */
  push32((uint32_t)(0x10045ff0u));
  /* 10034c99 call dword ptr [0x1004651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004651c))), 0x10034c9fu);
  /* 10034c9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034ca2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10034ca4 je 0x10034cf4 */
  if (C.zf) goto L_10034cf4;
  /* 10034ca6 push 0x100460d0 */
  push32((uint32_t)(0x100460d0u));
  /* 10034cab call dword ptr [0x1004651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004651c))), 0x10034cb1u);
  /* 10034cb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034cb4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10034cb6 jne 0x10034ce5 */
  if (!C.zf) goto L_10034ce5;
  /* 10034cb8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10034cba push 2 */
  push32((uint32_t)(0x2u));
  /* 10034cbc jmp 0x10034ce9 */
  goto L_10034ce9;
L_10034cbe:;
  /* 10034cbe push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10034cc0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10034cc2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10034cc4 push 0x10046130 */
  push32((uint32_t)(0x10046130u));
  /* 10034cc9 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10034ccfu);
  /* 10034ccf push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10034cd1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10034cd3 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10034cd5 push 0x10046248 */
  push32((uint32_t)(0x10046248u));
  /* 10034cda call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10034ce0u);
  /* 10034ce0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034ce3 jmp 0x10034c94 */
  goto L_10034c94;
L_10034ce5:;
  /* 10034ce5 push 4 */
  push32((uint32_t)(0x4u));
  /* 10034ce7 push 4 */
  push32((uint32_t)(0x4u));
L_10034ce9:;
  /* 10034ce9 push 8 */
  push32((uint32_t)(0x8u));
  /* 10034ceb call dword ptr [0x100464e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464e4))), 0x10034cf1u);
  /* 10034cf1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10034cf4:;
  /* 10034cf4 push 0x100460a8 */
  push32((uint32_t)(0x100460a8u));
  /* 10034cf9 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x10034cffu);
  /* 10034cff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034d02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10034d04 je 0x10034d1a */
  if (C.zf) goto L_10034d1a;
  /* 10034d06 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10034d08 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10034d0a push 6 */
  push32((uint32_t)(0x6u));
  /* 10034d0c push 0x100461c0 */
  push32((uint32_t)(0x100461c0u));
  /* 10034d11 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10034d17u);
  /* 10034d17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10034d1a:;
  /* 10034d1a push 0x100460c0 */
  push32((uint32_t)(0x100460c0u));
  /* 10034d1f call dword ptr [0x1004651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004651c))), 0x10034d25u);
  /* 10034d25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034d28 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10034d2a je 0x10034d40 */
  if (C.zf) goto L_10034d40;
  /* 10034d2c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10034d2e push 0xa */
  push32((uint32_t)(0xau));
  /* 10034d30 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10034d32 push 0x100461c0 */
  push32((uint32_t)(0x100461c0u));
  /* 10034d37 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10034d3du);
  /* 10034d3d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10034d40:;
  /* 10034d40 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10034d42 je 0x10034e43 */
  if (C.zf) goto L_10034e43;
  /* 10034d48 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10034d4a push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10034d4c push 2 */
  push32((uint32_t)(0x2u));
  /* 10034d4e push 0x100460a8 */
  push32((uint32_t)(0x100460a8u));
  /* 10034d53 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10034d59u);
  /* 10034d59 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10034d5b push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10034d5d push 3 */
  push32((uint32_t)(0x3u));
  /* 10034d5f push 0x100460a8 */
  push32((uint32_t)(0x100460a8u));
  /* 10034d64 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10034d6au);
  /* 10034d6a push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10034d6c push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10034d6e push 4 */
  push32((uint32_t)(0x4u));
  /* 10034d70 push 0x100460a8 */
  push32((uint32_t)(0x100460a8u));
  /* 10034d75 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10034d7bu);
  /* 10034d7b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10034d7d push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10034d7f push 5 */
  push32((uint32_t)(0x5u));
  /* 10034d81 push 0x100460a8 */
  push32((uint32_t)(0x100460a8u));
  /* 10034d86 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10034d8cu);
  /* 10034d8c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034d8f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10034d91 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10034d93 push 6 */
  push32((uint32_t)(0x6u));
  /* 10034d95 push 0x100460a8 */
  push32((uint32_t)(0x100460a8u));
  /* 10034d9a call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10034da0u);
  /* 10034da0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10034da2 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10034da4 push 0x10045ff0 */
  push32((uint32_t)(0x10045ff0u));
  /* 10034da9 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10034dafu);
  /* 10034daf push 0x100460b0 */
  push32((uint32_t)(0x100460b0u));
  /* 10034db4 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x10034dbau);
  /* 10034dba add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034dbd cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10034dc0 jle 0x10034de3 */
  if ((C.zf||C.sf!=C.of)) goto L_10034de3;
  /* 10034dc2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10034dc4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10034dc6 push 0x100461d8 */
  push32((uint32_t)(0x100461d8u));
  /* 10034dcb call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10034dd1u);
  /* 10034dd1 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10034dd3 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10034dd5 push 0x100461e0 */
  push32((uint32_t)(0x100461e0u));
  /* 10034dda call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10034de0u);
  /* 10034de0 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10034de3:;
  /* 10034de3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10034de5 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10034de7 push 0x100460c0 */
  push32((uint32_t)(0x100460c0u));
  /* 10034dec call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10034df2u);
  /* 10034df2 push 0x100438d8 */
  push32((uint32_t)(0x100438d8u));
  /* 10034df7 call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x10034dfdu);
  /* 10034dfd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034e00 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10034e02 je 0x10034e43 */
  if (C.zf) goto L_10034e43;
  /* 10034e04 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10034e06 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10034e08 push 0x10046138 */
  push32((uint32_t)(0x10046138u));
  /* 10034e0d call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10034e13u);
  /* 10034e13 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10034e15 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10034e17 push 0x10046148 */
  push32((uint32_t)(0x10046148u));
  /* 10034e1c call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10034e22u);
  /* 10034e22 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10034e24 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10034e26 push 0x10046150 */
  push32((uint32_t)(0x10046150u));
  /* 10034e2b call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10034e31u);
  /* 10034e31 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10034e33 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10034e35 push 0x10046140 */
  push32((uint32_t)(0x10046140u));
  /* 10034e3a call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10034e40u);
  /* 10034e40 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10034e43:;
  /* 10034e43 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10034e45 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10034e47 push 0x10043770 */
  push32((uint32_t)(0x10043770u));
  /* 10034e4c call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10034e52u);
  /* 10034e52 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10034e54 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10034e56 push 0x100438b0 */
  push32((uint32_t)(0x100438b0u));
  /* 10034e5b call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10034e61u);
  /* 10034e61 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10034e63 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10034e65 push 0x10046120 */
  push32((uint32_t)(0x10046120u));
  /* 10034e6a call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10034e70u);
  /* 10034e70 mov eax, dword ptr [esp + 0x38] */
  EAX = (r32((uint32_t)(ESP + 0x38)));
  /* 10034e74 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034e77 cmp eax, 0x15e */
  { uint32_t _a=(EAX),_b=(0x15eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10034e7c jle 0x10034e9a */
  if ((C.zf||C.sf!=C.of)) goto L_10034e9a;
  /* 10034e7e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10034e80 push 0xa */
  push32((uint32_t)(0xau));
  /* 10034e82 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10034e87 push 0x100460b0 */
  push32((uint32_t)(0x100460b0u));
  /* 10034e8c call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10034e92u);
  /* 10034e92 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034e95 call 0x100342f0 */
  push32(0x10034e9au); f_100342f0();
L_10034e9a:;
  /* 10034e9a push 0x10043848 */
  push32((uint32_t)(0x10043848u));
  /* 10034e9f call dword ptr [0x10046514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046514))), 0x10034ea5u);
  /* 10034ea5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034ea8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10034eaa je 0x100351f3 */
  if (C.zf) goto L_100351f3;
  /* 10034eb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10034eb2 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10034eb8u);
  /* 10034eb8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10034eba mov edi, eax */
  EDI = (EAX);
  /* 10034ebc call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10034ec2u);
  /* 10034ec2 push 4 */
  push32((uint32_t)(0x4u));
  /* 10034ec4 mov esi, eax */
  ESI = (EAX);
  /* 10034ec6 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10034eccu);
  /* 10034ecc push 5 */
  push32((uint32_t)(0x5u));
  /* 10034ece mov ebp, eax */
  EBP = (EAX);
  /* 10034ed0 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10034ed6u);
  /* 10034ed6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10034ed8 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 10034edc call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10034ee2u);
  /* 10034ee2 mov ebx, eax */
  EBX = (EAX);
  /* 10034ee4 mov eax, dword ptr [esp + 0x2c] */
  EAX = (r32((uint32_t)(ESP + 0x2c)));
  /* 10034ee8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034eeb cmp eax, 0x96 */
  { uint32_t _a=(EAX),_b=(0x96u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10034ef0 jge 0x10034f83 */
  if ((C.sf==C.of)) goto L_10034f83;
  /* 10034ef6 cmp esi, 0x1388 */
  { uint32_t _a=(ESI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10034efc jle 0x10034f09 */
  if ((C.zf||C.sf!=C.of)) goto L_10034f09;
  /* 10034efe push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10034f03 push 3 */
  push32((uint32_t)(0x3u));
  /* 10034f05 push 2 */
  push32((uint32_t)(0x2u));
  /* 10034f07 jmp 0x10034f7b */
  goto L_10034f7b;
L_10034f09:;
  /* 10034f09 cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10034f0f jle 0x10034f1c */
  if ((C.zf||C.sf!=C.of)) goto L_10034f1c;
  /* 10034f11 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 10034f16 push 3 */
  push32((uint32_t)(0x3u));
  /* 10034f18 push 2 */
  push32((uint32_t)(0x2u));
  /* 10034f1a jmp 0x10034f7b */
  goto L_10034f7b;
L_10034f1c:;
  /* 10034f1c cmp edi, 0x1388 */
  { uint32_t _a=(EDI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10034f22 jle 0x10034f2f */
  if ((C.zf||C.sf!=C.of)) goto L_10034f2f;
  /* 10034f24 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10034f29 push 3 */
  push32((uint32_t)(0x3u));
  /* 10034f2b push 0 */
  push32((uint32_t)(0x0u));
  /* 10034f2d jmp 0x10034f7b */
  goto L_10034f7b;
L_10034f2f:;
  /* 10034f2f cmp edi, 0x3e8 */
  { uint32_t _a=(EDI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10034f35 jle 0x10034f42 */
  if ((C.zf||C.sf!=C.of)) goto L_10034f42;
  /* 10034f37 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 10034f3c push 3 */
  push32((uint32_t)(0x3u));
  /* 10034f3e push 0 */
  push32((uint32_t)(0x0u));
  /* 10034f40 jmp 0x10034f7b */
  goto L_10034f7b;
L_10034f42:;
  /* 10034f42 cmp dword ptr [esp + 0x14], 0x7d0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10034f4a jle 0x10034f57 */
  if ((C.zf||C.sf!=C.of)) goto L_10034f57;
  /* 10034f4c push 0x320 */
  push32((uint32_t)(0x320u));
  /* 10034f51 push 3 */
  push32((uint32_t)(0x3u));
  /* 10034f53 push 5 */
  push32((uint32_t)(0x5u));
  /* 10034f55 jmp 0x10034f7b */
  goto L_10034f7b;
L_10034f57:;
  /* 10034f57 cmp ebp, 0x7d0 */
  { uint32_t _a=(EBP),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10034f5d jle 0x10034f6a */
  if ((C.zf||C.sf!=C.of)) goto L_10034f6a;
  /* 10034f5f push 0x320 */
  push32((uint32_t)(0x320u));
  /* 10034f64 push 3 */
  push32((uint32_t)(0x3u));
  /* 10034f66 push 4 */
  push32((uint32_t)(0x4u));
  /* 10034f68 jmp 0x10034f7b */
  goto L_10034f7b;
L_10034f6a:;
  /* 10034f6a cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10034f70 jle 0x10034f83 */
  if ((C.zf||C.sf!=C.of)) goto L_10034f83;
  /* 10034f72 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10034f77 push 3 */
  push32((uint32_t)(0x3u));
  /* 10034f79 push 1 */
  push32((uint32_t)(0x1u));
L_10034f7b:;
  /* 10034f7b call 0x100325f0 */
  push32(0x10034f80u); f_100325f0();
  /* 10034f80 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10034f83:;
  /* 10034f83 push 0x10045ef0 */
  push32((uint32_t)(0x10045ef0u));
  /* 10034f88 call dword ptr [0x10046514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046514))), 0x10034f8eu);
  /* 10034f8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034f91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10034f93 je 0x10034fe3 */
  if (C.zf) goto L_10034fe3;
  /* 10034f95 cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10034f9b jle 0x10034fe3 */
  if ((C.zf||C.sf!=C.of)) goto L_10034fe3;
  /* 10034f9d push 0x10046240 */
  push32((uint32_t)(0x10046240u));
  /* 10034fa2 call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x10034fa8u);
  /* 10034fa8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034fab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10034fad jne 0x10034fe3 */
  if (!C.zf) goto L_10034fe3;
  /* 10034faf cmp ebp, 0xbb8 */
  { uint32_t _a=(EBP),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10034fb5 jle 0x10034fc8 */
  if ((C.zf||C.sf!=C.of)) goto L_10034fc8;
  /* 10034fb7 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10034fbc push 3 */
  push32((uint32_t)(0x3u));
  /* 10034fbe push 4 */
  push32((uint32_t)(0x4u));
  /* 10034fc0 call 0x100325f0 */
  push32(0x10034fc5u); f_100325f0();
  /* 10034fc5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10034fc8:;
  /* 10034fc8 cmp dword ptr [esp + 0x14], 0xfa0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10034fd0 jle 0x10034fe3 */
  if ((C.zf||C.sf!=C.of)) goto L_10034fe3;
  /* 10034fd2 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10034fd7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10034fd9 push 5 */
  push32((uint32_t)(0x5u));
  /* 10034fdb call 0x100325f0 */
  push32(0x10034fe0u); f_100325f0();
  /* 10034fe0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10034fe3:;
  /* 10034fe3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10034fe5 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10034febu);
  /* 10034feb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10034fee cmp eax, 0x1d4c0 */
  { uint32_t _a=(EAX),_b=(0x1d4c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10034ff3 jle 0x10035006 */
  if ((C.zf||C.sf!=C.of)) goto L_10035006;
  /* 10034ff5 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 10034ffa push 1 */
  push32((uint32_t)(0x1u));
  /* 10034ffc push 2 */
  push32((uint32_t)(0x2u));
  /* 10034ffe call 0x100325f0 */
  push32(0x10035003u); f_100325f0();
  /* 10035003 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10035006:;
  /* 10035006 push 0 */
  push32((uint32_t)(0x0u));
  /* 10035008 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x1003500eu);
  /* 1003500e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035011 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10035016 jle 0x10035029 */
  if ((C.zf||C.sf!=C.of)) goto L_10035029;
  /* 10035018 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 1003501d push 1 */
  push32((uint32_t)(0x1u));
  /* 1003501f push 0 */
  push32((uint32_t)(0x0u));
  /* 10035021 call 0x100325f0 */
  push32(0x10035026u); f_100325f0();
  /* 10035026 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10035029:;
  /* 10035029 push 0x100461b8 */
  push32((uint32_t)(0x100461b8u));
  /* 1003502e call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x10035034u);
  /* 10035034 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035037 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10035039 je 0x100351c0 */
  if (C.zf) goto L_100351c0;
  /* 1003503f push 0x10046188 */
  push32((uint32_t)(0x10046188u));
  /* 10035044 call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x1003504au);
  /* 1003504a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003504d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1003504f jne 0x100351c0 */
  if (!C.zf) goto L_100351c0;
  /* 10035055 push 5 */
  push32((uint32_t)(0x5u));
  /* 10035057 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x1003505du);
  /* 1003505d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035060 cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10035065 jle 0x10035120 */
  if ((C.zf||C.sf!=C.of)) goto L_10035120;
  /* 1003506b push 0 */
  push32((uint32_t)(0x0u));
  /* 1003506d call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10035073u);
  /* 10035073 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035076 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10035078 je 0x10035120 */
  if (C.zf) goto L_10035120;
  /* 1003507e push 1 */
  push32((uint32_t)(0x1u));
  /* 10035080 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10035086u);
  /* 10035086 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035089 cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003508e jge 0x10035120 */
  if ((C.sf==C.of)) goto L_10035120;
  /* 10035094 push 5 */
  push32((uint32_t)(0x5u));
  /* 10035096 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x1003509cu);
  /* 1003509c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003509f cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100350a4 jle 0x100350b7 */
  if ((C.zf||C.sf!=C.of)) goto L_100350b7;
  /* 100350a6 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 100350ab push 1 */
  push32((uint32_t)(0x1u));
  /* 100350ad push 5 */
  push32((uint32_t)(0x5u));
  /* 100350af call 0x100325f0 */
  push32(0x100350b4u); f_100325f0();
  /* 100350b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100350b7:;
  /* 100350b7 push 4 */
  push32((uint32_t)(0x4u));
  /* 100350b9 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x100350bfu);
  /* 100350bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100350c2 cmp eax, 0x1f40 */
  { uint32_t _a=(EAX),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100350c7 jle 0x100350da */
  if ((C.zf||C.sf!=C.of)) goto L_100350da;
  /* 100350c9 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 100350ce push 1 */
  push32((uint32_t)(0x1u));
  /* 100350d0 push 4 */
  push32((uint32_t)(0x4u));
  /* 100350d2 call 0x100325f0 */
  push32(0x100350d7u); f_100325f0();
  /* 100350d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100350da:;
  /* 100350da push 2 */
  push32((uint32_t)(0x2u));
  /* 100350dc call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x100350e2u);
  /* 100350e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100350e5 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100350ea jle 0x100350fd */
  if ((C.zf||C.sf!=C.of)) goto L_100350fd;
  /* 100350ec push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 100350f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 100350f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 100350f5 call 0x100325f0 */
  push32(0x100350fau); f_100325f0();
  /* 100350fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100350fd:;
  /* 100350fd push 3 */
  push32((uint32_t)(0x3u));
  /* 100350ff call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10035105u);
  /* 10035105 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035108 cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003510d jle 0x10035120 */
  if ((C.zf||C.sf!=C.of)) goto L_10035120;
  /* 1003510f push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 10035114 push 1 */
  push32((uint32_t)(0x1u));
  /* 10035116 push 3 */
  push32((uint32_t)(0x3u));
  /* 10035118 call 0x100325f0 */
  push32(0x1003511du); f_100325f0();
  /* 1003511d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10035120:;
  /* 10035120 push 5 */
  push32((uint32_t)(0x5u));
  /* 10035122 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10035128u);
  /* 10035128 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003512b cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10035130 jle 0x100351c0 */
  if ((C.zf||C.sf!=C.of)) goto L_100351c0;
  /* 10035136 push 1 */
  push32((uint32_t)(0x1u));
  /* 10035138 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x1003513eu);
  /* 1003513e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035141 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10035143 je 0x100351c0 */
  if (C.zf) goto L_100351c0;
  /* 10035145 push 1 */
  push32((uint32_t)(0x1u));
  /* 10035147 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x1003514du);
  /* 1003514d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035150 cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10035155 jle 0x100351c0 */
  if ((C.zf||C.sf!=C.of)) goto L_100351c0;
  /* 10035157 push 5 */
  push32((uint32_t)(0x5u));
  /* 10035159 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x1003515fu);
  /* 1003515f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035162 cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10035167 jle 0x1003517a */
  if ((C.zf||C.sf!=C.of)) goto L_1003517a;
  /* 10035169 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1003516e push 4 */
  push32((uint32_t)(0x4u));
  /* 10035170 push 5 */
  push32((uint32_t)(0x5u));
  /* 10035172 call 0x100325f0 */
  push32(0x10035177u); f_100325f0();
  /* 10035177 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1003517a:;
  /* 1003517a push 2 */
  push32((uint32_t)(0x2u));
  /* 1003517c call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10035182u);
  /* 10035182 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035185 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003518a jle 0x1003519d */
  if ((C.zf||C.sf!=C.of)) goto L_1003519d;
  /* 1003518c push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 10035191 push 4 */
  push32((uint32_t)(0x4u));
  /* 10035193 push 2 */
  push32((uint32_t)(0x2u));
  /* 10035195 call 0x100325f0 */
  push32(0x1003519au); f_100325f0();
  /* 1003519a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1003519d:;
  /* 1003519d push 3 */
  push32((uint32_t)(0x3u));
  /* 1003519f call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x100351a5u);
  /* 100351a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100351a8 cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100351ad jle 0x100351c0 */
  if ((C.zf||C.sf!=C.of)) goto L_100351c0;
  /* 100351af push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 100351b4 push 4 */
  push32((uint32_t)(0x4u));
  /* 100351b6 push 3 */
  push32((uint32_t)(0x3u));
  /* 100351b8 call 0x100325f0 */
  push32(0x100351bdu); f_100325f0();
  /* 100351bd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100351c0:;
  /* 100351c0 call dword ptr [0x100464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d0))), 0x100351c6u);
  /* 100351c6 mov ecx, dword ptr [eax*4 + 0x100465dc] */
  ECX = (r32((uint32_t)(EAX*4 + 0x100465dc)));
  /* 100351cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100351cf jne 0x100351f3 */
  if (!C.zf) goto L_100351f3;
  /* 100351d1 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 100351d6 push 3 */
  push32((uint32_t)(0x3u));
  /* 100351d8 push 5 */
  push32((uint32_t)(0x5u));
  /* 100351da call 0x100325f0 */
  push32(0x100351dfu); f_100325f0();
  /* 100351df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100351e2 call dword ptr [0x100464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d0))), 0x100351e8u);
  /* 100351e8 mov dword ptr [eax*4 + 0x100465dc], 1 */
  w32((uint32_t)(EAX*4 + 0x100465dc), (0x1u));
L_100351f3:;
  /* 100351f3 pop edi */
  EDI = (pop32());
  /* 100351f4 pop esi */
  ESI = (pop32());
  /* 100351f5 pop ebp */
  EBP = (pop32());
  /* 100351f6 pop ebx */
  EBX = (pop32());
  /* 100351f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100351fa ret  */
  ESPCHK(0x100343c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005200 @ 0x10035200 (72 bytes, 22 insns) */
void f_10035200(void) {
  FTRACE(0x10035200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10035200 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035202 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035204 push 1 */
  push32((uint32_t)(0x1u));
  /* 10035206 push 0x10045fa8 */
  push32((uint32_t)(0x10045fa8u));
  /* 1003520b call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10035211u);
  /* 10035211 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035213 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035215 push 1 */
  push32((uint32_t)(0x1u));
  /* 10035217 push 0x10045f88 */
  push32((uint32_t)(0x10045f88u));
  /* 1003521c call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10035222u);
  /* 10035222 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035224 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035226 push 1 */
  push32((uint32_t)(0x1u));
  /* 10035228 push 0x10045fa0 */
  push32((uint32_t)(0x10045fa0u));
  /* 1003522d call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10035233u);
  /* 10035233 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035235 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035237 push 1 */
  push32((uint32_t)(0x1u));
  /* 10035239 push 0x10043848 */
  push32((uint32_t)(0x10043848u));
  /* 1003523e call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10035244u);
  /* 10035244 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035247 ret  */
  ESPCHK(0x10035200u, _esp0);
  ESP += 4; return;
}

/* FUN_10005250 @ 0x10035250 (55 bytes, 16 insns) */
void f_10035250(void) {
  FTRACE(0x10035250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10035250 cmp dword ptr [esp + 4], 0x10043658 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0x10043658u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10035258 jne 0x10035284 */
  if (!C.zf) goto L_10035284;
  /* 1003525a push 0x10046310 */
  push32((uint32_t)(0x10046310u));
  /* 1003525f call dword ptr [0x1004651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004651c))), 0x10035265u);
  /* 10035265 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035268 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1003526a je 0x10035284 */
  if (C.zf) goto L_10035284;
  /* 1003526c push 0x10046258 */
  push32((uint32_t)(0x10046258u));
  /* 10035271 call dword ptr [0x1004651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004651c))), 0x10035277u);
  /* 10035277 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003527a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1003527c je 0x10035284 */
  if (C.zf) goto L_10035284;
  /* 1003527e mov eax, 1 */
  EAX = (0x1u);
  /* 10035283 ret  */
  ESPCHK(0x10035250u, _esp0);
  ESP += 4; return;
L_10035284:;
  /* 10035284 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10035286 ret  */
  ESPCHK(0x10035250u, _esp0);
  ESP += 4; return;
}

/* FUN_10005290 @ 0x10035290 (2008 bytes, 535 insns) */
void f_10035290(void) {
  FTRACE(0x10035290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10035290 push 0x10046248 */
  push32((uint32_t)(0x10046248u));
  /* 10035295 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x1003529bu);
  /* 1003529b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003529e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100352a0 jne 0x100352b4 */
  if (!C.zf) goto L_100352b4;
  /* 100352a2 push 0x10043898 */
  push32((uint32_t)(0x10043898u));
  /* 100352a7 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x100352adu);
  /* 100352ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100352b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100352b2 je 0x100352e4 */
  if (C.zf) goto L_100352e4;
L_100352b4:;
  /* 100352b4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100352b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100352b8 push 0x10043920 */
  push32((uint32_t)(0x10043920u));
  /* 100352bd call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100352c3u);
  /* 100352c3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100352c5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100352c7 push 0x100461c8 */
  push32((uint32_t)(0x100461c8u));
  /* 100352cc call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100352d2u);
  /* 100352d2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100352d4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100352d6 push 0x100461d0 */
  push32((uint32_t)(0x100461d0u));
  /* 100352db call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100352e1u);
  /* 100352e1 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100352e4:;
  /* 100352e4 push 0x10046380 */
  push32((uint32_t)(0x10046380u));
  /* 100352e9 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x100352efu);
  /* 100352ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100352f2 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100352f5 jg 0x1003531f */
  if ((!C.zf&&C.sf==C.of)) goto L_1003531f;
  /* 100352f7 push 0x10046300 */
  push32((uint32_t)(0x10046300u));
  /* 100352fc call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x10035302u);
  /* 10035302 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035305 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10035308 jg 0x1003531f */
  if ((!C.zf&&C.sf==C.of)) goto L_1003531f;
  /* 1003530a push 0x10043658 */
  push32((uint32_t)(0x10043658u));
  /* 1003530f call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x10035315u);
  /* 10035315 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035318 cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003531d jle 0x1003537d */
  if ((C.zf||C.sf!=C.of)) goto L_1003537d;
L_1003531f:;
  /* 1003531f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035321 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10035323 push 0x100435f8 */
  push32((uint32_t)(0x100435f8u));
  /* 10035328 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003532eu);
  /* 1003532e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035330 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10035332 push 0x10043600 */
  push32((uint32_t)(0x10043600u));
  /* 10035337 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003533du);
  /* 1003533d push 0x10046380 */
  push32((uint32_t)(0x10046380u));
  /* 10035342 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x10035348u);
  /* 10035348 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003534b cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10035350 jg 0x1003536b */
  if ((!C.zf&&C.sf==C.of)) goto L_1003536b;
  /* 10035352 push 0x10046300 */
  push32((uint32_t)(0x10046300u));
  /* 10035357 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x1003535du);
  /* 1003535d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035360 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10035363 jg 0x1003536b */
  if ((!C.zf&&C.sf==C.of)) goto L_1003536b;
  /* 10035365 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035367 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10035369 jmp 0x1003536f */
  goto L_1003536f;
L_1003536b:;
  /* 1003536b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003536d push 0x5f */
  push32((uint32_t)(0x5fu));
L_1003536f:;
  /* 1003536f push 0x100436d8 */
  push32((uint32_t)(0x100436d8u));
  /* 10035374 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003537au);
  /* 1003537a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1003537d:;
  /* 1003537d push 0x10043658 */
  push32((uint32_t)(0x10043658u));
  /* 10035382 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x10035388u);
  /* 10035388 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003538b cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003538e jle 0x10035443 */
  if ((C.zf||C.sf!=C.of)) goto L_10035443;
  /* 10035394 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035396 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10035398 push 0x10046320 */
  push32((uint32_t)(0x10046320u));
  /* 1003539d call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100353a3u);
  /* 100353a3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100353a5 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 100353a7 push 0x10046328 */
  push32((uint32_t)(0x10046328u));
  /* 100353ac call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100353b2u);
  /* 100353b2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100353b4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100353b6 push 0x10046310 */
  push32((uint32_t)(0x10046310u));
  /* 100353bb call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100353c1u);
  /* 100353c1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100353c3 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100353c5 push 0x10046268 */
  push32((uint32_t)(0x10046268u));
  /* 100353ca call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100353d0u);
  /* 100353d0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100353d2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 100353d4 push 0x10046250 */
  push32((uint32_t)(0x10046250u));
  /* 100353d9 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100353dfu);
  /* 100353df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100353e1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100353e3 push 0x10046258 */
  push32((uint32_t)(0x10046258u));
  /* 100353e8 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100353eeu);
  /* 100353ee add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100353f1 push 0x10043658 */
  push32((uint32_t)(0x10043658u));
  /* 100353f6 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x100353fcu);
  /* 100353fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100353ff cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10035402 jle 0x10035443 */
  if ((C.zf||C.sf!=C.of)) goto L_10035443;
  /* 10035404 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035406 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10035408 push 0x10046318 */
  push32((uint32_t)(0x10046318u));
  /* 1003540d call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035413u);
  /* 10035413 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035415 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10035417 push 0x10046330 */
  push32((uint32_t)(0x10046330u));
  /* 1003541c call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035422u);
  /* 10035422 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035424 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10035426 push 0x10046270 */
  push32((uint32_t)(0x10046270u));
  /* 1003542b call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035431u);
  /* 10035431 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035433 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10035435 push 0x10046278 */
  push32((uint32_t)(0x10046278u));
  /* 1003543a call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035440u);
  /* 10035440 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10035443:;
  /* 10035443 push 0x100460b0 */
  push32((uint32_t)(0x100460b0u));
  /* 10035448 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x1003544eu);
  /* 1003544e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035451 cmp eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10035454 jle 0x100354eb */
  if ((C.zf||C.sf!=C.of)) goto L_100354eb;
  /* 1003545a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003545c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1003545e push 0x100438e0 */
  push32((uint32_t)(0x100438e0u));
  /* 10035463 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035469u);
  /* 10035469 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003546b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1003546d push 0x100438e8 */
  push32((uint32_t)(0x100438e8u));
  /* 10035472 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035478u);
  /* 10035478 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003547a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1003547c push 0x100438d8 */
  push32((uint32_t)(0x100438d8u));
  /* 10035481 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035487u);
  /* 10035487 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035489 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1003548b push 0x10045f48 */
  push32((uint32_t)(0x10045f48u));
  /* 10035490 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035496u);
  /* 10035496 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035498 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1003549a push 0x10045f38 */
  push32((uint32_t)(0x10045f38u));
  /* 1003549f call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100354a5u);
  /* 100354a5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100354a7 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100354a9 push 0x10045f40 */
  push32((uint32_t)(0x10045f40u));
  /* 100354ae call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100354b4u);
  /* 100354b4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100354b7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100354b9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100354bb push 0x100461d8 */
  push32((uint32_t)(0x100461d8u));
  /* 100354c0 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100354c6u);
  /* 100354c6 push 0x100460b0 */
  push32((uint32_t)(0x100460b0u));
  /* 100354cb call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x100354d1u);
  /* 100354d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100354d4 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100354d7 jle 0x100354eb */
  if ((C.zf||C.sf!=C.of)) goto L_100354eb;
  /* 100354d9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100354db push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100354dd push 0x100461e0 */
  push32((uint32_t)(0x100461e0u));
  /* 100354e2 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100354e8u);
  /* 100354e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100354eb:;
  /* 100354eb push 0x100436d0 */
  push32((uint32_t)(0x100436d0u));
  /* 100354f0 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x100354f6u);
  /* 100354f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100354f9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100354fc jle 0x1003551f */
  if ((C.zf||C.sf!=C.of)) goto L_1003551f;
  /* 100354fe push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035500 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10035502 push 0x10046230 */
  push32((uint32_t)(0x10046230u));
  /* 10035507 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003550du);
  /* 1003550d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003550f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10035511 push 0x10045f98 */
  push32((uint32_t)(0x10045f98u));
  /* 10035516 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003551cu);
  /* 1003551c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1003551f:;
  /* 1003551f push 0x10046380 */
  push32((uint32_t)(0x10046380u));
  /* 10035524 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x1003552au);
  /* 1003552a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003552d cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10035530 jle 0x10035603 */
  if ((C.zf||C.sf!=C.of)) goto L_10035603;
  /* 10035536 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035538 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1003553a push 0x10046100 */
  push32((uint32_t)(0x10046100u));
  /* 1003553f call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035545u);
  /* 10035545 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035547 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10035549 push 0x100460f8 */
  push32((uint32_t)(0x100460f8u));
  /* 1003554e call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035554u);
  /* 10035554 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035556 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10035558 push 0x100460f0 */
  push32((uint32_t)(0x100460f0u));
  /* 1003555d call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035563u);
  /* 10035563 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035565 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10035567 push 0x10045fe8 */
  push32((uint32_t)(0x10045fe8u));
  /* 1003556c call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035572u);
  /* 10035572 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035574 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10035576 push 0x10045fe0 */
  push32((uint32_t)(0x10045fe0u));
  /* 1003557b call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035581u);
  /* 10035581 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035583 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10035585 push 0x10045fd8 */
  push32((uint32_t)(0x10045fd8u));
  /* 1003558a call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035590u);
  /* 10035590 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035593 push 0x10046380 */
  push32((uint32_t)(0x10046380u));
  /* 10035598 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x1003559eu);
  /* 1003559e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100355a1 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100355a4 jle 0x10035603 */
  if ((C.zf||C.sf!=C.of)) goto L_10035603;
  /* 100355a6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100355a8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100355aa push 0x100460e8 */
  push32((uint32_t)(0x100460e8u));
  /* 100355af call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100355b5u);
  /* 100355b5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100355b7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100355b9 push 0x100460d8 */
  push32((uint32_t)(0x100460d8u));
  /* 100355be call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100355c4u);
  /* 100355c4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100355c6 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100355c8 push 0x10046128 */
  push32((uint32_t)(0x10046128u));
  /* 100355cd call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100355d3u);
  /* 100355d3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100355d5 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100355d7 push 0x10045fd0 */
  push32((uint32_t)(0x10045fd0u));
  /* 100355dc call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100355e2u);
  /* 100355e2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100355e4 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100355e6 push 0x10045fc8 */
  push32((uint32_t)(0x10045fc8u));
  /* 100355eb call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100355f1u);
  /* 100355f1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100355f3 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100355f5 push 0x10045fc0 */
  push32((uint32_t)(0x10045fc0u));
  /* 100355fa call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035600u);
  /* 10035600 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10035603:;
  /* 10035603 push 0x10046300 */
  push32((uint32_t)(0x10046300u));
  /* 10035608 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x1003560eu);
  /* 1003560e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035611 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10035614 jle 0x100356e6 */
  if ((C.zf||C.sf!=C.of)) goto L_100356e6;
  /* 1003561a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003561c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1003561e push 0x10043718 */
  push32((uint32_t)(0x10043718u));
  /* 10035623 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035629u);
  /* 10035629 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003562b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1003562d push 0x10043710 */
  push32((uint32_t)(0x10043710u));
  /* 10035632 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035638u);
  /* 10035638 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003563a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1003563c push 0x10043708 */
  push32((uint32_t)(0x10043708u));
  /* 10035641 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035647u);
  /* 10035647 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035649 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1003564b push 0x10043688 */
  push32((uint32_t)(0x10043688u));
  /* 10035650 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035656u);
  /* 10035656 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035658 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1003565a push 0x10043680 */
  push32((uint32_t)(0x10043680u));
  /* 1003565f call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035665u);
  /* 10035665 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035667 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10035669 push 0x10043678 */
  push32((uint32_t)(0x10043678u));
  /* 1003566e call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035674u);
  /* 10035674 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035677 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035679 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1003567b push 0x10043670 */
  push32((uint32_t)(0x10043670u));
  /* 10035680 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035686u);
  /* 10035686 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035688 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1003568a push 0x10043648 */
  push32((uint32_t)(0x10043648u));
  /* 1003568f call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035695u);
  /* 10035695 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035697 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10035699 push 0x10043640 */
  push32((uint32_t)(0x10043640u));
  /* 1003569e call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100356a4u);
  /* 100356a4 push 0x10043640 */
  push32((uint32_t)(0x10043640u));
  /* 100356a9 call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x100356afu);
  /* 100356af add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100356b2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100356b4 je 0x100356e6 */
  if (C.zf) goto L_100356e6;
  /* 100356b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100356b8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100356ba push 0x100436f0 */
  push32((uint32_t)(0x100436f0u));
  /* 100356bf call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100356c5u);
  /* 100356c5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100356c7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100356c9 push 0x100436e8 */
  push32((uint32_t)(0x100436e8u));
  /* 100356ce call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100356d4u);
  /* 100356d4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100356d6 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100356d8 push 0x100436e0 */
  push32((uint32_t)(0x100436e0u));
  /* 100356dd call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100356e3u);
  /* 100356e3 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100356e6:;
  /* 100356e6 push 0x10043660 */
  push32((uint32_t)(0x10043660u));
  /* 100356eb call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x100356f1u);
  /* 100356f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100356f4 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100356f7 jle 0x1003577f */
  if ((C.zf||C.sf!=C.of)) goto L_1003577f;
  /* 100356fd push 0x10043650 */
  push32((uint32_t)(0x10043650u));
  /* 10035702 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x10035708u);
  /* 10035708 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003570b cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003570e jge 0x1003577f */
  if ((C.sf==C.of)) goto L_1003577f;
  /* 10035710 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035712 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10035714 push 0x100438d0 */
  push32((uint32_t)(0x100438d0u));
  /* 10035719 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003571fu);
  /* 1003571f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035721 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10035723 push 0x100438c8 */
  push32((uint32_t)(0x100438c8u));
  /* 10035728 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003572eu);
  /* 1003572e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035730 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10035732 push 0x100438c0 */
  push32((uint32_t)(0x100438c0u));
  /* 10035737 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003573du);
  /* 1003573d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003573f push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10035741 push 0x10043888 */
  push32((uint32_t)(0x10043888u));
  /* 10035746 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003574cu);
  /* 1003574c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003574e push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10035750 push 0x10043880 */
  push32((uint32_t)(0x10043880u));
  /* 10035755 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003575bu);
  /* 1003575b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003575d push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1003575f push 0x10043878 */
  push32((uint32_t)(0x10043878u));
  /* 10035764 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003576au);
  /* 1003576a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003576d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003576f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10035771 push 0x100461d8 */
  push32((uint32_t)(0x100461d8u));
  /* 10035776 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003577cu);
  /* 1003577c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1003577f:;
  /* 1003577f push 0x10043650 */
  push32((uint32_t)(0x10043650u));
  /* 10035784 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x1003578au);
  /* 1003578a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003578d cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10035790 jle 0x10035871 */
  if ((C.zf||C.sf!=C.of)) goto L_10035871;
  /* 10035796 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035798 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1003579a push 0x10043628 */
  push32((uint32_t)(0x10043628u));
  /* 1003579f call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100357a5u);
  /* 100357a5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100357a7 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 100357a9 push 0x10043620 */
  push32((uint32_t)(0x10043620u));
  /* 100357ae call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100357b4u);
  /* 100357b4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100357b6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100357b8 push 0x10043618 */
  push32((uint32_t)(0x10043618u));
  /* 100357bd call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100357c3u);
  /* 100357c3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100357c5 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100357c7 push 0x100462e8 */
  push32((uint32_t)(0x100462e8u));
  /* 100357cc call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100357d2u);
  /* 100357d2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100357d4 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100357d6 push 0x100462e0 */
  push32((uint32_t)(0x100462e0u));
  /* 100357db call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100357e1u);
  /* 100357e1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100357e3 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100357e5 push 0x100462d8 */
  push32((uint32_t)(0x100462d8u));
  /* 100357ea call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100357f0u);
  /* 100357f0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100357f3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100357f5 push 0xa */
  push32((uint32_t)(0xau));
  /* 100357f7 push 0x10046360 */
  push32((uint32_t)(0x10046360u));
  /* 100357fc call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035802u);
  /* 10035802 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035804 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10035806 push 0x10046358 */
  push32((uint32_t)(0x10046358u));
  /* 1003580b call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035811u);
  /* 10035811 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035813 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10035815 push 0x100463a8 */
  push32((uint32_t)(0x100463a8u));
  /* 1003581a call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035820u);
  /* 10035820 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035822 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10035824 push 0x100463a0 */
  push32((uint32_t)(0x100463a0u));
  /* 10035829 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003582fu);
  /* 1003582f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035831 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10035833 push 0x10046398 */
  push32((uint32_t)(0x10046398u));
  /* 10035838 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003583eu);
  /* 1003583e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035840 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10035842 push 0x10046390 */
  push32((uint32_t)(0x10046390u));
  /* 10035847 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003584du);
  /* 1003584d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035850 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035852 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10035854 push 0x100461d8 */
  push32((uint32_t)(0x100461d8u));
  /* 10035859 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003585fu);
  /* 1003585f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035861 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10035863 push 0x100461e0 */
  push32((uint32_t)(0x100461e0u));
  /* 10035868 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003586eu);
  /* 1003586e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10035871:;
  /* 10035871 push 0x10045f50 */
  push32((uint32_t)(0x10045f50u));
  /* 10035876 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x1003587cu);
  /* 1003587c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003587f cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10035882 jle 0x100359e0 */
  if ((C.zf||C.sf!=C.of)) goto L_100359e0;
  /* 10035888 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003588a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1003588c push 0x100436b0 */
  push32((uint32_t)(0x100436b0u));
  /* 10035891 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035897u);
  /* 10035897 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035899 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1003589b push 0x100436b8 */
  push32((uint32_t)(0x100436b8u));
  /* 100358a0 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100358a6u);
  /* 100358a6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100358a8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100358aa push 0x100436c0 */
  push32((uint32_t)(0x100436c0u));
  /* 100358af call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100358b5u);
  /* 100358b5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100358b7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100358b9 push 0x100436c8 */
  push32((uint32_t)(0x100436c8u));
  /* 100358be call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100358c4u);
  /* 100358c4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100358c6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100358c8 push 0x10043690 */
  push32((uint32_t)(0x10043690u));
  /* 100358cd call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100358d3u);
  /* 100358d3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100358d5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100358d7 push 0x100436a0 */
  push32((uint32_t)(0x100436a0u));
  /* 100358dc call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100358e2u);
  /* 100358e2 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100358e5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100358e7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100358e9 push 0x10043758 */
  push32((uint32_t)(0x10043758u));
  /* 100358ee call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100358f4u);
  /* 100358f4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100358f6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100358f8 push 0x10043760 */
  push32((uint32_t)(0x10043760u));
  /* 100358fd call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035903u);
  /* 10035903 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035905 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10035907 push 0x10043768 */
  push32((uint32_t)(0x10043768u));
  /* 1003590c call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035912u);
  /* 10035912 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035914 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10035916 push 0x10043740 */
  push32((uint32_t)(0x10043740u));
  /* 1003591b call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035921u);
  /* 10035921 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035923 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10035925 push 0x10043748 */
  push32((uint32_t)(0x10043748u));
  /* 1003592a call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035930u);
  /* 10035930 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035932 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10035934 push 0x10043750 */
  push32((uint32_t)(0x10043750u));
  /* 10035939 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003593fu);
  /* 1003593f add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035942 push 0x10045f50 */
  push32((uint32_t)(0x10045f50u));
  /* 10035947 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x1003594du);
  /* 1003594d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035950 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10035953 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035955 jle 0x1003596a */
  if ((C.zf||C.sf!=C.of)) goto L_1003596a;
  /* 10035957 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10035959 push 0x10045ff8 */
  push32((uint32_t)(0x10045ff8u));
  /* 1003595e call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035964u);
  /* 10035964 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035966 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10035968 jmp 0x1003597b */
  goto L_1003597b;
L_1003596a:;
  /* 1003596a push 0xf */
  push32((uint32_t)(0xfu));
  /* 1003596c push 0x10045ff8 */
  push32((uint32_t)(0x10045ff8u));
  /* 10035971 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035977u);
  /* 10035977 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035979 push 0xf */
  push32((uint32_t)(0xfu));
L_1003597b:;
  /* 1003597b push 0x10046058 */
  push32((uint32_t)(0x10046058u));
  /* 10035980 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035986u);
  /* 10035986 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035989 push 0x10045ff8 */
  push32((uint32_t)(0x10045ff8u));
  /* 1003598e call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x10035994u);
  /* 10035994 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035997 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10035999 je 0x100359bf */
  if (C.zf) goto L_100359bf;
  /* 1003599b push 0x10046058 */
  push32((uint32_t)(0x10046058u));
  /* 100359a0 call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x100359a6u);
  /* 100359a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100359a9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100359ab je 0x100359bf */
  if (C.zf) goto L_100359bf;
  /* 100359ad push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100359af push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100359b1 push 0x10046050 */
  push32((uint32_t)(0x10046050u));
  /* 100359b6 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100359bcu);
  /* 100359bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100359bf:;
  /* 100359bf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100359c1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100359c3 push 0x100461d8 */
  push32((uint32_t)(0x100461d8u));
  /* 100359c8 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100359ceu);
  /* 100359ce push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100359d0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100359d2 push 0x100461e0 */
  push32((uint32_t)(0x100461e0u));
  /* 100359d7 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100359ddu);
  /* 100359dd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100359e0:;
  /* 100359e0 push 0x100462d8 */
  push32((uint32_t)(0x100462d8u));
  /* 100359e5 call dword ptr [0x1004651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004651c))), 0x100359ebu);
  /* 100359eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100359ee test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100359f0 je 0x10035a67 */
  if (C.zf) goto L_10035a67;
  /* 100359f2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100359f4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100359f6 push 0x10046140 */
  push32((uint32_t)(0x10046140u));
  /* 100359fb call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035a01u);
  /* 10035a01 push 0x10046140 */
  push32((uint32_t)(0x10046140u));
  /* 10035a06 call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x10035a0cu);
  /* 10035a0c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035a0f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10035a11 je 0x10035a67 */
  if (C.zf) goto L_10035a67;
  /* 10035a13 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035a15 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10035a17 push 0x10046150 */
  push32((uint32_t)(0x10046150u));
  /* 10035a1c call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035a22u);
  /* 10035a22 push 0x10046150 */
  push32((uint32_t)(0x10046150u));
  /* 10035a27 call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x10035a2du);
  /* 10035a2d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035a30 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10035a32 je 0x10035a67 */
  if (C.zf) goto L_10035a67;
  /* 10035a34 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035a36 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10035a38 push 0x10046148 */
  push32((uint32_t)(0x10046148u));
  /* 10035a3d call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035a43u);
  /* 10035a43 push 0x10046148 */
  push32((uint32_t)(0x10046148u));
  /* 10035a48 call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x10035a4eu);
  /* 10035a4e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035a51 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10035a53 je 0x10035a67 */
  if (C.zf) goto L_10035a67;
  /* 10035a55 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035a57 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10035a59 push 0x10046138 */
  push32((uint32_t)(0x10046138u));
  /* 10035a5e call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035a64u);
  /* 10035a64 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10035a67:;
  /* 10035a67 ret  */
  ESPCHK(0x10035290u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a70 @ 0x10035a70 (305 bytes, 86 insns) */
void f_10035a70(void) {
  FTRACE(0x10035a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10035a70 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035a72 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10035a74 push 0x10046348 */
  push32((uint32_t)(0x10046348u));
  /* 10035a79 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035a7fu);
  /* 10035a7f push 0x10045ef0 */
  push32((uint32_t)(0x10045ef0u));
  /* 10035a84 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x10035a8au);
  /* 10035a8a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035a8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10035a8f je 0x10035aa3 */
  if (C.zf) goto L_10035aa3;
  /* 10035a91 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035a93 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035a95 push 0x10043630 */
  push32((uint32_t)(0x10043630u));
  /* 10035a9a call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035aa0u);
  /* 10035aa0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10035aa3:;
  /* 10035aa3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035aa5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035aa7 push 0x10046048 */
  push32((uint32_t)(0x10046048u));
  /* 10035aac call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035ab2u);
  /* 10035ab2 push 0x10043658 */
  push32((uint32_t)(0x10043658u));
  /* 10035ab7 call 0x10035250 */
  push32(0x10035abcu); f_10035250();
  /* 10035abc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035abf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10035ac1 jne 0x10035ad1 */
  if (!C.zf) goto L_10035ad1;
  /* 10035ac3 mov eax, dword ptr [0x10045f28] */
  EAX = (r32((uint32_t)(0x10045f28)));
  /* 10035ac8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10035aca je 0x10035ae3 */
  if (C.zf) goto L_10035ae3;
  /* 10035acc cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10035acf je 0x10035ae3 */
  if (C.zf) goto L_10035ae3;
L_10035ad1:;
  /* 10035ad1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035ad3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10035ad5 push 0x10046240 */
  push32((uint32_t)(0x10046240u));
  /* 10035ada call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035ae0u);
  /* 10035ae0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10035ae3:;
  /* 10035ae3 push 0x10045fb8 */
  push32((uint32_t)(0x10045fb8u));
  /* 10035ae8 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x10035aeeu);
  /* 10035aee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035af1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10035af3 je 0x10035b07 */
  if (C.zf) goto L_10035b07;
  /* 10035af5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035af7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035af9 push 0x10046010 */
  push32((uint32_t)(0x10046010u));
  /* 10035afe call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035b04u);
  /* 10035b04 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10035b07:;
  /* 10035b07 push 0x10046120 */
  push32((uint32_t)(0x10046120u));
  /* 10035b0c call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x10035b12u);
  /* 10035b12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035b15 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10035b17 je 0x10035b2b */
  if (C.zf) goto L_10035b2b;
  /* 10035b19 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035b1b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035b1d push 0x10046000 */
  push32((uint32_t)(0x10046000u));
  /* 10035b22 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035b28u);
  /* 10035b28 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10035b2b:;
  /* 10035b2b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035b2d push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10035b2f push 0x10046120 */
  push32((uint32_t)(0x10046120u));
  /* 10035b34 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035b3au);
  /* 10035b3a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035b3c push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10035b3e push 0x100460d0 */
  push32((uint32_t)(0x100460d0u));
  /* 10035b43 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035b49u);
  /* 10035b49 push 0x100460a8 */
  push32((uint32_t)(0x100460a8u));
  /* 10035b4e call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x10035b54u);
  /* 10035b54 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035b57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10035b59 je 0x10035b6d */
  if (C.zf) goto L_10035b6d;
  /* 10035b5b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035b5d push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10035b5f push 0x10046188 */
  push32((uint32_t)(0x10046188u));
  /* 10035b64 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035b6au);
  /* 10035b6a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10035b6d:;
  /* 10035b6d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035b6f push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10035b71 push 0x10045ff0 */
  push32((uint32_t)(0x10045ff0u));
  /* 10035b76 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035b7cu);
  /* 10035b7c push 0x10046228 */
  push32((uint32_t)(0x10046228u));
  /* 10035b81 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x10035b87u);
  /* 10035b87 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035b8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10035b8c je 0x10035ba0 */
  if (C.zf) goto L_10035ba0;
  /* 10035b8e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035b90 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035b92 push 0x100438b0 */
  push32((uint32_t)(0x100438b0u));
  /* 10035b97 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x10035b9du);
  /* 10035b9d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10035ba0:;
  /* 10035ba0 ret  */
  ESPCHK(0x10035a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bb0 @ 0x10035bb0 (536 bytes, 150 insns) */
void f_10035bb0(void) {
  FTRACE(0x10035bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10035bb0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035bb2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035bb4 push 3 */
  push32((uint32_t)(0x3u));
  /* 10035bb6 push 0x10046228 */
  push32((uint32_t)(0x10046228u));
  /* 10035bbb call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10035bc1u);
  /* 10035bc1 push 0x10045fb8 */
  push32((uint32_t)(0x10045fb8u));
  /* 10035bc6 call dword ptr [0x10046514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046514))), 0x10035bccu);
  /* 10035bcc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035bcf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10035bd1 je 0x10035bf8 */
  if (C.zf) goto L_10035bf8;
  /* 10035bd3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035bd5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035bd7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10035bd9 push 0x10045fa8 */
  push32((uint32_t)(0x10045fa8u));
  /* 10035bde call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10035be4u);
  /* 10035be4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035be6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035be8 push 4 */
  push32((uint32_t)(0x4u));
  /* 10035bea push 0x10045fa0 */
  push32((uint32_t)(0x10045fa0u));
  /* 10035bef call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10035bf5u);
  /* 10035bf5 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10035bf8:;
  /* 10035bf8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035bfa push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035bfc push 1 */
  push32((uint32_t)(0x1u));
  /* 10035bfe push 0x10045fa8 */
  push32((uint32_t)(0x10045fa8u));
  /* 10035c03 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10035c09u);
  /* 10035c09 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035c0b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035c0d push 1 */
  push32((uint32_t)(0x1u));
  /* 10035c0f push 0x10045f88 */
  push32((uint32_t)(0x10045f88u));
  /* 10035c14 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10035c1au);
  /* 10035c1a mov eax, dword ptr [0x10046284] */
  EAX = (r32((uint32_t)(0x10046284)));
  /* 10035c1f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035c22 mov ecx, dword ptr [eax*4 + 0x10045f68] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10045f68)));
  /* 10035c29 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10035c2b jne 0x10035c48 */
  if (!C.zf) goto L_10035c48;
  /* 10035c2d call 0x10035200 */
  push32(0x10035c32u); f_10035200();
  /* 10035c32 push 0x10043848 */
  push32((uint32_t)(0x10043848u));
  /* 10035c37 call dword ptr [0x10046514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046514))), 0x10035c3du);
  /* 10035c3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035c40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10035c42 je 0x10035dc7 */
  if (C.zf) goto L_10035dc7;
L_10035c48:;
  /* 10035c48 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035c4a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035c4c push 1 */
  push32((uint32_t)(0x1u));
  /* 10035c4e push 0x100461b8 */
  push32((uint32_t)(0x100461b8u));
  /* 10035c53 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10035c59u);
  /* 10035c59 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035c5b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035c5d push 2 */
  push32((uint32_t)(0x2u));
  /* 10035c5f push 0x10045f88 */
  push32((uint32_t)(0x10045f88u));
  /* 10035c64 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10035c6au);
  /* 10035c6a push 0x10045f88 */
  push32((uint32_t)(0x10045f88u));
  /* 10035c6f call dword ptr [0x10046514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046514))), 0x10035c75u);
  /* 10035c75 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035c78 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10035c7b jge 0x10035c8a */
  if ((C.sf==C.of)) goto L_10035c8a;
  /* 10035c7d call 0x10032650 */
  push32(0x10035c82u); f_10032650();
  /* 10035c82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10035c84 jne 0x10035dc7 */
  if (!C.zf) goto L_10035dc7;
L_10035c8a:;
  /* 10035c8a push esi */
  push32((uint32_t)(ESI));
  /* 10035c8b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035c8d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035c8f push 2 */
  push32((uint32_t)(0x2u));
  /* 10035c91 push 0x10046220 */
  push32((uint32_t)(0x10046220u));
  /* 10035c96 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10035c9cu);
  /* 10035c9c push 0x10046220 */
  push32((uint32_t)(0x10046220u));
  /* 10035ca1 call dword ptr [0x10046514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046514))), 0x10035ca7u);
  /* 10035ca7 push 0x10046220 */
  push32((uint32_t)(0x10046220u));
  /* 10035cac mov esi, eax */
  ESI = (EAX);
  /* 10035cae call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x10035cb4u);
  /* 10035cb4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035cb7 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10035cb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10035cbb pop esi */
  ESI = (pop32());
  /* 10035cbc jg 0x10035dc7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10035dc7;
  /* 10035cc2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035cc4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035cc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10035cc8 push 0x10045ef0 */
  push32((uint32_t)(0x10045ef0u));
  /* 10035ccd call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10035cd3u);
  /* 10035cd3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035cd6 call 0x10032760 */
  push32(0x10035cdbu); f_10032760();
  /* 10035cdb cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10035cde jge 0x10035d07 */
  if ((C.sf==C.of)) goto L_10035d07;
  /* 10035ce0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035ce2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035ce4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10035ce6 push 0x10045fb8 */
  push32((uint32_t)(0x10045fb8u));
  /* 10035ceb call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10035cf1u);
  /* 10035cf1 push 0x10045fb8 */
  push32((uint32_t)(0x10045fb8u));
  /* 10035cf6 call dword ptr [0x10046514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046514))), 0x10035cfcu);
  /* 10035cfc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035cff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10035d01 je 0x10035dc7 */
  if (C.zf) goto L_10035dc7;
L_10035d07:;
  /* 10035d07 call 0x10035200 */
  push32(0x10035d0cu); f_10035200();
  /* 10035d0c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035d0e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035d10 push 4 */
  push32((uint32_t)(0x4u));
  /* 10035d12 push 0x10045f88 */
  push32((uint32_t)(0x10045f88u));
  /* 10035d17 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10035d1du);
  /* 10035d1d push 0x10045f88 */
  push32((uint32_t)(0x10045f88u));
  /* 10035d22 call dword ptr [0x10046514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046514))), 0x10035d28u);
  /* 10035d28 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035d2b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10035d2e jl 0x10035dc7 */
  if ((C.sf!=C.of)) goto L_10035dc7;
  /* 10035d34 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035d36 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035d38 push 3 */
  push32((uint32_t)(0x3u));
  /* 10035d3a push 0x100460a8 */
  push32((uint32_t)(0x100460a8u));
  /* 10035d3f call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10035d45u);
  /* 10035d45 push 0x10046228 */
  push32((uint32_t)(0x10046228u));
  /* 10035d4a call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x10035d50u);
  /* 10035d50 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035d53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10035d55 je 0x10035d6b */
  if (C.zf) goto L_10035d6b;
  /* 10035d57 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035d59 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035d5b push 4 */
  push32((uint32_t)(0x4u));
  /* 10035d5d push 0x100460a8 */
  push32((uint32_t)(0x100460a8u));
  /* 10035d62 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10035d68u);
  /* 10035d68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10035d6b:;
  /* 10035d6b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035d6d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035d6f push 1 */
  push32((uint32_t)(0x1u));
  /* 10035d71 push 0x100435e8 */
  push32((uint32_t)(0x100435e8u));
  /* 10035d76 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10035d7cu);
  /* 10035d7c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035d7e push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10035d80 push 3 */
  push32((uint32_t)(0x3u));
  /* 10035d82 push 0x100435e8 */
  push32((uint32_t)(0x100435e8u));
  /* 10035d87 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10035d8du);
  /* 10035d8d push 0x100438b0 */
  push32((uint32_t)(0x100438b0u));
  /* 10035d92 call dword ptr [0x1004651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004651c))), 0x10035d98u);
  /* 10035d98 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035d9b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10035d9d je 0x10035db3 */
  if (C.zf) goto L_10035db3;
  /* 10035d9f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035da1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035da3 push 5 */
  push32((uint32_t)(0x5u));
  /* 10035da5 push 0x100460a8 */
  push32((uint32_t)(0x100460a8u));
  /* 10035daa call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10035db0u);
  /* 10035db0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10035db3:;
  /* 10035db3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035db5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035db7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10035db9 push 0x100460c8 */
  push32((uint32_t)(0x100460c8u));
  /* 10035dbe call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10035dc4u);
  /* 10035dc4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10035dc7:;
  /* 10035dc7 ret  */
  ESPCHK(0x10035bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005dd0 @ 0x10035dd0 (472 bytes, 137 insns) */
void f_10035dd0(void) {
  FTRACE(0x10035dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10035dd0 push ecx */
  push32((uint32_t)(ECX));
  /* 10035dd1 push 0x10046248 */
  push32((uint32_t)(0x10046248u));
  /* 10035dd6 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x10035ddcu);
  /* 10035ddc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035ddf cmp eax, 0x28 */
  { uint32_t _a=(EAX),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10035de2 jge 0x10035df7 */
  if ((C.sf==C.of)) goto L_10035df7;
  /* 10035de4 mov eax, dword ptr [0x10046284] */
  EAX = (r32((uint32_t)(0x10046284)));
  /* 10035de9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10035deb add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10035dee push eax */
  push32((uint32_t)(EAX));
  /* 10035def call 0x100326b0 */
  push32(0x10035df4u); f_100326b0();
  /* 10035df4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10035df7:;
  /* 10035df7 push 0x10046248 */
  push32((uint32_t)(0x10046248u));
  /* 10035dfc call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x10035e02u);
  /* 10035e02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035e05 cmp eax, 0x9c */
  { uint32_t _a=(EAX),_b=(0x9cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10035e0a jg 0x10035e1e */
  if ((!C.zf&&C.sf==C.of)) goto L_10035e1e;
  /* 10035e0c push 0x100460a8 */
  push32((uint32_t)(0x100460a8u));
  /* 10035e11 call dword ptr [0x10046514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046514))), 0x10035e17u);
  /* 10035e17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035e1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10035e1c je 0x10035e32 */
  if (C.zf) goto L_10035e32;
L_10035e1e:;
  /* 10035e1e mov ecx, dword ptr [0x10046284] */
  ECX = (r32((uint32_t)(0x10046284)));
  /* 10035e24 push 1 */
  push32((uint32_t)(0x1u));
  /* 10035e26 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10035e29 push ecx */
  push32((uint32_t)(ECX));
  /* 10035e2a call 0x100326b0 */
  push32(0x10035e2fu); f_100326b0();
  /* 10035e2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10035e32:;
  /* 10035e32 push esi */
  push32((uint32_t)(ESI));
  /* 10035e33 push edi */
  push32((uint32_t)(EDI));
  /* 10035e34 mov edi, 2 */
  EDI = (0x2u);
L_10035e39:;
  /* 10035e39 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035e3b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10035e3d push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10035e42 push 0x10046160 */
  push32((uint32_t)(0x10046160u));
  /* 10035e47 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10035e4du);
  /* 10035e4d push 0x10043658 */
  push32((uint32_t)(0x10043658u));
  /* 10035e52 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x10035e58u);
  /* 10035e58 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035e5b cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10035e60 jge 0x10035e7b */
  if ((C.sf==C.of)) goto L_10035e7b;
  /* 10035e62 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035e64 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10035e66 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10035e6b push 0x10043658 */
  push32((uint32_t)(0x10043658u));
  /* 10035e70 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10035e76u);
  /* 10035e76 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035e79 jmp 0x10035ea6 */
  goto L_10035ea6;
L_10035e7b:;
  /* 10035e7b push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10035e7d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10035e7f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10035e84 push 0x10043658 */
  push32((uint32_t)(0x10043658u));
  /* 10035e89 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10035e8fu);
  /* 10035e8f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035e91 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10035e93 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10035e98 push 0x100460b0 */
  push32((uint32_t)(0x100460b0u));
  /* 10035e9d call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10035ea3u);
  /* 10035ea3 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10035ea6:;
  /* 10035ea6 mov edx, dword ptr [0x10046284] */
  EDX = (r32((uint32_t)(0x10046284)));
  /* 10035eac add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10035eaf push edx */
  push32((uint32_t)(EDX));
  /* 10035eb0 call 0x100326d0 */
  push32(0x10035eb5u); f_100326d0();
  /* 10035eb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035eb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10035eba jne 0x10035edd */
  if (!C.zf) goto L_10035edd;
  /* 10035ebc call 0x10032760 */
  push32(0x10035ec1u); f_10032760();
  /* 10035ec1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10035ec4 jge 0x10035edd */
  if ((C.sf==C.of)) goto L_10035edd;
  /* 10035ec6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035ec8 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10035eca push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10035ecf push 0x10046248 */
  push32((uint32_t)(0x10046248u));
  /* 10035ed4 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10035edau);
  /* 10035eda add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10035edd:;
  /* 10035edd mov al, byte ptr [0x10046284] */
  AL = (r8((uint32_t)(0x10046284)));
  /* 10035ee2 mov byte ptr [esp + 8], al */
  w8((uint32_t)(ESP + 0x8), (AL));
  /* 10035ee6 mov eax, dword ptr [0x10046488] */
  EAX = (r32((uint32_t)(0x10046488)));
  /* 10035eeb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10035eed je 0x10035f05 */
  if (C.zf) goto L_10035f05;
  /* 10035eef mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10035ef3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10035ef5 push 0x10043858 */
  push32((uint32_t)(0x10043858u));
  /* 10035efa push ecx */
  push32((uint32_t)(ECX));
  /* 10035efb call eax */
  call_ind((uint32_t)(EAX), 0x10035efdu);
  /* 10035efd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035f00 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10035f03 jge 0x10035f45 */
  if ((C.sf==C.of)) goto L_10035f45;
L_10035f05:;
  /* 10035f05 push 5 */
  push32((uint32_t)(0x5u));
  /* 10035f07 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10035f0du);
  /* 10035f0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035f10 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10035f15 jle 0x10035f45 */
  if ((C.zf||C.sf!=C.of)) goto L_10035f45;
  /* 10035f17 push 4 */
  push32((uint32_t)(0x4u));
  /* 10035f19 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10035f1fu);
  /* 10035f1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035f22 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10035f27 jle 0x10035f45 */
  if ((C.zf||C.sf!=C.of)) goto L_10035f45;
  /* 10035f29 mov esi, 0x1e */
  ESI = (0x1eu);
L_10035f2e:;
  /* 10035f2e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035f30 push 0xa */
  push32((uint32_t)(0xau));
  /* 10035f32 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10035f34 push 0x10043858 */
  push32((uint32_t)(0x10043858u));
  /* 10035f39 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10035f3fu);
  /* 10035f3f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035f42 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10035f43 jne 0x10035f2e */
  if (!C.zf) goto L_10035f2e;
L_10035f45:;
  /* 10035f45 push 0x10045ff0 */
  push32((uint32_t)(0x10045ff0u));
  /* 10035f4a call dword ptr [0x1004651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004651c))), 0x10035f50u);
  /* 10035f50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035f53 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10035f55 je 0x10035f5b */
  if (C.zf) goto L_10035f5b;
  /* 10035f57 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10035f59 jmp 0x10035f5d */
  goto L_10035f5d;
L_10035f5b:;
  /* 10035f5b push 0x64 */
  push32((uint32_t)(0x64u));
L_10035f5d:;
  /* 10035f5d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10035f5f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10035f64 push 0x10046380 */
  push32((uint32_t)(0x10046380u));
  /* 10035f69 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10035f6fu);
  /* 10035f6f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035f72 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035f74 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10035f76 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10035f7b push 0x10043650 */
  push32((uint32_t)(0x10043650u));
  /* 10035f80 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10035f86u);
  /* 10035f86 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10035f88 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10035f8a push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10035f8f push 0x10045f50 */
  push32((uint32_t)(0x10045f50u));
  /* 10035f94 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10035f9au);
  /* 10035f9a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035f9d dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10035f9e jne 0x10035e39 */
  if (!C.zf) goto L_10035e39;
  /* 10035fa4 pop edi */
  EDI = (pop32());
  /* 10035fa5 pop esi */
  ESI = (pop32());
  /* 10035fa6 pop ecx */
  ECX = (pop32());
  /* 10035fa7 ret  */
  ESPCHK(0x10035dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fb0 @ 0x10035fb0 (789 bytes, 244 insns) */
void f_10035fb0(void) {
  FTRACE(0x10035fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10035fb0 push ecx */
  push32((uint32_t)(ECX));
  /* 10035fb1 push 0x10043848 */
  push32((uint32_t)(0x10043848u));
  /* 10035fb6 call dword ptr [0x10046514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046514))), 0x10035fbcu);
  /* 10035fbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035fbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10035fc1 je 0x100362c3 */
  if (C.zf) goto L_100362c3;
  /* 10035fc7 call 0x10032650 */
  push32(0x10035fccu); f_10032650();
  /* 10035fcc cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10035fcf jne 0x10036016 */
  if (!C.zf) goto L_10036016;
  /* 10035fd1 mov eax, dword ptr [0x10046284] */
  EAX = (r32((uint32_t)(0x10046284)));
  /* 10035fd6 push eax */
  push32((uint32_t)(EAX));
  /* 10035fd7 call 0x100326d0 */
  push32(0x10035fdcu); f_100326d0();
  /* 10035fdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10035fdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10035fe1 jne 0x100362c3 */
  if (!C.zf) goto L_100362c3;
  /* 10035fe7 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10035fec push 3 */
  push32((uint32_t)(0x3u));
  /* 10035fee push 2 */
  push32((uint32_t)(0x2u));
  /* 10035ff0 call 0x100325f0 */
  push32(0x10035ff5u); f_100325f0();
  /* 10035ff5 push 0x13880 */
  push32((uint32_t)(0x13880u));
  /* 10035ffa push 3 */
  push32((uint32_t)(0x3u));
  /* 10035ffc push 0 */
  push32((uint32_t)(0x0u));
  /* 10035ffe call 0x100325f0 */
  push32(0x10036003u); f_100325f0();
  /* 10036003 mov ecx, dword ptr [0x10046284] */
  ECX = (r32((uint32_t)(0x10046284)));
  /* 10036009 push 1 */
  push32((uint32_t)(0x1u));
  /* 1003600b push ecx */
  push32((uint32_t)(ECX));
  /* 1003600c call 0x100326b0 */
  push32(0x10036011u); f_100326b0();
  /* 10036011 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036014 pop ecx */
  ECX = (pop32());
  /* 10036015 ret  */
  ESPCHK(0x10035fb0u, _esp0);
  ESP += 4; return;
L_10036016:;
  /* 10036016 push 0x10043848 */
  push32((uint32_t)(0x10043848u));
  /* 1003601b call dword ptr [0x10046514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046514))), 0x10036021u);
  /* 10036021 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036024 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10036026 je 0x100362c3 */
  if (C.zf) goto L_100362c3;
  /* 1003602c mov edx, dword ptr [0x10046284] */
  EDX = (r32((uint32_t)(0x10046284)));
  /* 10036032 push edx */
  push32((uint32_t)(EDX));
  /* 10036033 call 0x100326d0 */
  push32(0x10036038u); f_100326d0();
  /* 10036038 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003603b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003603d jne 0x100360b2 */
  if (!C.zf) goto L_100360b2;
  /* 1003603f push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10036044 push 3 */
  push32((uint32_t)(0x3u));
  /* 10036046 push 5 */
  push32((uint32_t)(0x5u));
  /* 10036048 call 0x100325f0 */
  push32(0x1003604du); f_100325f0();
  /* 1003604d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036050 call 0x10032650 */
  push32(0x10036055u); f_10032650();
  /* 10036055 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10036058 jne 0x10036079 */
  if (!C.zf) goto L_10036079;
  /* 1003605a push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 1003605f push 0 */
  push32((uint32_t)(0x0u));
  /* 10036061 push 4 */
  push32((uint32_t)(0x4u));
  /* 10036063 call 0x100325f0 */
  push32(0x10036068u); f_100325f0();
  /* 10036068 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 1003606d push 2 */
  push32((uint32_t)(0x2u));
  /* 1003606f push 4 */
  push32((uint32_t)(0x4u));
  /* 10036071 call 0x100325f0 */
  push32(0x10036076u); f_100325f0();
  /* 10036076 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10036079:;
  /* 10036079 call 0x10032650 */
  push32(0x1003607eu); f_10032650();
  /* 1003607e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10036081 jne 0x100360a2 */
  if (!C.zf) goto L_100360a2;
  /* 10036083 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 10036088 push 0 */
  push32((uint32_t)(0x0u));
  /* 1003608a push 4 */
  push32((uint32_t)(0x4u));
  /* 1003608c call 0x100325f0 */
  push32(0x10036091u); f_100325f0();
  /* 10036091 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 10036096 push 2 */
  push32((uint32_t)(0x2u));
  /* 10036098 push 4 */
  push32((uint32_t)(0x4u));
  /* 1003609a call 0x100325f0 */
  push32(0x1003609fu); f_100325f0();
  /* 1003609f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100360a2:;
  /* 100360a2 mov eax, dword ptr [0x10046284] */
  EAX = (r32((uint32_t)(0x10046284)));
  /* 100360a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 100360a9 push eax */
  push32((uint32_t)(EAX));
  /* 100360aa call 0x100326b0 */
  push32(0x100360afu); f_100326b0();
  /* 100360af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100360b2:;
  /* 100360b2 push 0x10046240 */
  push32((uint32_t)(0x10046240u));
  /* 100360b7 call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x100360bdu);
  /* 100360bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100360c0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100360c2 je 0x10036134 */
  if (C.zf) goto L_10036134;
  /* 100360c4 push 0x10046120 */
  push32((uint32_t)(0x10046120u));
  /* 100360c9 call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x100360cfu);
  /* 100360cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100360d2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100360d4 jne 0x10036134 */
  if (!C.zf) goto L_10036134;
  /* 100360d6 push 0x10045ef0 */
  push32((uint32_t)(0x10045ef0u));
  /* 100360db call dword ptr [0x10046514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046514))), 0x100360e1u);
  /* 100360e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100360e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100360e6 je 0x10036134 */
  if (C.zf) goto L_10036134;
  /* 100360e8 mov eax, dword ptr [0x1004648c] */
  EAX = (r32((uint32_t)(0x1004648c)));
  /* 100360ed mov cl, byte ptr [0x10046284] */
  CL = (r8((uint32_t)(0x10046284)));
  /* 100360f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100360f5 mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 100360f9 je 0x1003610e */
  if (C.zf) goto L_1003610e;
  /* 100360fb mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 100360ff push 5 */
  push32((uint32_t)(0x5u));
  /* 10036101 push 0x10046120 */
  push32((uint32_t)(0x10046120u));
  /* 10036106 push edx */
  push32((uint32_t)(EDX));
  /* 10036107 call eax */
  call_ind((uint32_t)(EAX), 0x10036109u);
  /* 10036109 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003610c jmp 0x10036110 */
  goto L_10036110;
L_1003610e:;
  /* 1003610e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10036110:;
  /* 10036110 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10036113 push 0 */
  push32((uint32_t)(0x0u));
  /* 10036115 lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 10036118 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 1003611d imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1003611f sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10036122 mov eax, edx */
  EAX = (EDX);
  /* 10036124 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 10036127 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10036129 push edx */
  push32((uint32_t)(EDX));
  /* 1003612a push 5 */
  push32((uint32_t)(0x5u));
  /* 1003612c call 0x10032f70 */
  push32(0x10036131u); f_10032f70();
  /* 10036131 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10036134:;
  /* 10036134 push 0x10046120 */
  push32((uint32_t)(0x10046120u));
  /* 10036139 call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x1003613fu);
  /* 1003613f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036142 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10036144 je 0x10036259 */
  if (C.zf) goto L_10036259;
  /* 1003614a push 0x10045ff0 */
  push32((uint32_t)(0x10045ff0u));
  /* 1003614f call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x10036155u);
  /* 10036155 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036158 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1003615a jne 0x10036259 */
  if (!C.zf) goto L_10036259;
  /* 10036160 mov eax, dword ptr [0x1004648c] */
  EAX = (r32((uint32_t)(0x1004648c)));
  /* 10036165 mov cl, byte ptr [0x10046284] */
  CL = (r8((uint32_t)(0x10046284)));
  /* 1003616b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003616d mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 10036171 je 0x10036186 */
  if (C.zf) goto L_10036186;
  /* 10036173 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 10036177 push 3 */
  push32((uint32_t)(0x3u));
  /* 10036179 push 0x10045ff0 */
  push32((uint32_t)(0x10045ff0u));
  /* 1003617e push edx */
  push32((uint32_t)(EDX));
  /* 1003617f call eax */
  call_ind((uint32_t)(EAX), 0x10036181u);
  /* 10036181 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036184 jmp 0x10036188 */
  goto L_10036188;
L_10036186:;
  /* 10036186 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10036188:;
  /* 10036188 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1003618b push 2 */
  push32((uint32_t)(0x2u));
  /* 1003618d lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 10036190 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10036195 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10036197 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 1003619a mov eax, edx */
  EAX = (EDX);
  /* 1003619c shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 1003619f add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100361a1 push edx */
  push32((uint32_t)(EDX));
  /* 100361a2 push 3 */
  push32((uint32_t)(0x3u));
  /* 100361a4 call 0x10032f70 */
  push32(0x100361a9u); f_10032f70();
  /* 100361a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100361ac test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100361ae je 0x10036259 */
  if (C.zf) goto L_10036259;
  /* 100361b4 mov eax, dword ptr [0x1004648c] */
  EAX = (r32((uint32_t)(0x1004648c)));
  /* 100361b9 mov cl, byte ptr [0x10046284] */
  CL = (r8((uint32_t)(0x10046284)));
  /* 100361bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100361c1 mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 100361c5 je 0x100361da */
  if (C.zf) goto L_100361da;
  /* 100361c7 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 100361cb push 1 */
  push32((uint32_t)(0x1u));
  /* 100361cd push 0x10045ff0 */
  push32((uint32_t)(0x10045ff0u));
  /* 100361d2 push edx */
  push32((uint32_t)(EDX));
  /* 100361d3 call eax */
  call_ind((uint32_t)(EAX), 0x100361d5u);
  /* 100361d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100361d8 jmp 0x100361dc */
  goto L_100361dc;
L_100361da:;
  /* 100361da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100361dc:;
  /* 100361dc lea ecx, [eax*8] */
  ECX = ((uint32_t)(EAX*8));
  /* 100361e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 100361e5 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100361e7 lea eax, [ecx + ecx*2] */
  EAX = ((uint32_t)(ECX + ECX*2));
  /* 100361ea lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 100361ed mov eax, 0x51eb851f */
  EAX = (0x51eb851fu);
  /* 100361f2 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100361f4 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 100361f7 mov eax, edx */
  EAX = (EDX);
  /* 100361f9 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100361fc add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100361fe push edx */
  push32((uint32_t)(EDX));
  /* 100361ff push 1 */
  push32((uint32_t)(0x1u));
  /* 10036201 call 0x10032f70 */
  push32(0x10036206u); f_10032f70();
  /* 10036206 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036209 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1003620b je 0x10036259 */
  if (C.zf) goto L_10036259;
  /* 1003620d mov eax, dword ptr [0x1004648c] */
  EAX = (r32((uint32_t)(0x1004648c)));
  /* 10036212 mov cl, byte ptr [0x10046284] */
  CL = (r8((uint32_t)(0x10046284)));
  /* 10036218 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003621a mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 1003621e je 0x10036233 */
  if (C.zf) goto L_10036233;
  /* 10036220 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 10036224 push 4 */
  push32((uint32_t)(0x4u));
  /* 10036226 push 0x10045ff0 */
  push32((uint32_t)(0x10045ff0u));
  /* 1003622b push edx */
  push32((uint32_t)(EDX));
  /* 1003622c call eax */
  call_ind((uint32_t)(EAX), 0x1003622eu);
  /* 1003622e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036231 jmp 0x10036235 */
  goto L_10036235;
L_10036233:;
  /* 10036233 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10036235:;
  /* 10036235 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10036238 push 2 */
  push32((uint32_t)(0x2u));
  /* 1003623a lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 1003623d mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10036242 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10036244 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10036247 mov eax, edx */
  EAX = (EDX);
  /* 10036249 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 1003624c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003624e push edx */
  push32((uint32_t)(EDX));
  /* 1003624f push 4 */
  push32((uint32_t)(0x4u));
  /* 10036251 call 0x10032f70 */
  push32(0x10036256u); f_10032f70();
  /* 10036256 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10036259:;
  /* 10036259 push 2 */
  push32((uint32_t)(0x2u));
  /* 1003625b call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10036261u);
  /* 10036261 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036264 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10036269 jle 0x1003628e */
  if ((C.zf||C.sf!=C.of)) goto L_1003628e;
  /* 1003626b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10036270 push 2 */
  push32((uint32_t)(0x2u));
  /* 10036272 push 0 */
  push32((uint32_t)(0x0u));
  /* 10036274 call 0x100325f0 */
  push32(0x10036279u); f_100325f0();
  /* 10036279 push 2 */
  push32((uint32_t)(0x2u));
  /* 1003627b call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10036281u);
  /* 10036281 push eax */
  push32((uint32_t)(EAX));
  /* 10036282 push 1 */
  push32((uint32_t)(0x1u));
  /* 10036284 push 2 */
  push32((uint32_t)(0x2u));
  /* 10036286 call 0x100325f0 */
  push32(0x1003628bu); f_100325f0();
  /* 1003628b add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1003628e:;
  /* 1003628e push 0 */
  push32((uint32_t)(0x0u));
  /* 10036290 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10036296u);
  /* 10036296 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036299 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003629e jle 0x100362c3 */
  if ((C.zf||C.sf!=C.of)) goto L_100362c3;
  /* 100362a0 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 100362a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 100362a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 100362a9 call 0x100325f0 */
  push32(0x100362aeu); f_100325f0();
  /* 100362ae push 0 */
  push32((uint32_t)(0x0u));
  /* 100362b0 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x100362b6u);
  /* 100362b6 push eax */
  push32((uint32_t)(EAX));
  /* 100362b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 100362b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 100362bb call 0x100325f0 */
  push32(0x100362c0u); f_100325f0();
  /* 100362c0 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100362c3:;
  /* 100362c3 pop ecx */
  ECX = (pop32());
  /* 100362c4 ret  */
  ESPCHK(0x10035fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100062d0 @ 0x100362d0 (818 bytes, 268 insns) */
void f_100362d0(void) {
  FTRACE(0x100362d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100362d0 push ecx */
  push32((uint32_t)(ECX));
  /* 100362d1 push 4 */
  push32((uint32_t)(0x4u));
  /* 100362d3 push 4 */
  push32((uint32_t)(0x4u));
  /* 100362d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 100362d7 call dword ptr [0x100464e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464e4))), 0x100362ddu);
  /* 100362dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100362e0 call dword ptr [0x10046540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046540))), 0x100362e6u);
  /* 100362e6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100362e8 je 0x10036600 */
  if (C.zf) goto L_10036600;
  /* 100362ee push 4 */
  push32((uint32_t)(0x4u));
  /* 100362f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 100362f2 push 9 */
  push32((uint32_t)(0x9u));
  /* 100362f4 call dword ptr [0x100464e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464e4))), 0x100362fau);
  /* 100362fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100362fd call 0x10032650 */
  push32(0x10036302u); f_10032650();
  /* 10036302 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10036305 je 0x10036600 */
  if (C.zf) goto L_10036600;
  /* 1003630b call dword ptr [0x10046540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046540))), 0x10036311u);
  /* 10036311 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10036313 je 0x100365f1 */
  if (C.zf) goto L_100365f1;
  /* 10036319 push esi */
  push32((uint32_t)(ESI));
  /* 1003631a push edi */
  push32((uint32_t)(EDI));
  /* 1003631b push 4 */
  push32((uint32_t)(0x4u));
  /* 1003631d push 4 */
  push32((uint32_t)(0x4u));
  /* 1003631f push 9 */
  push32((uint32_t)(0x9u));
  /* 10036321 call dword ptr [0x100464e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464e4))), 0x10036327u);
  /* 10036327 push 0x100460d0 */
  push32((uint32_t)(0x100460d0u));
  /* 1003632c call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x10036332u);
  /* 10036332 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036335 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10036337 jne 0x1003639f */
  if (!C.zf) goto L_1003639f;
  /* 10036339 mov al, byte ptr [0x10046284] */
  AL = (r8((uint32_t)(0x10046284)));
  /* 1003633e mov byte ptr [esp + 8], al */
  w8((uint32_t)(ESP + 0x8), (AL));
  /* 10036342 mov eax, dword ptr [0x1004648c] */
  EAX = (r32((uint32_t)(0x1004648c)));
  /* 10036347 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10036349 je 0x10036360 */
  if (C.zf) goto L_10036360;
  /* 1003634b mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1003634f push 3 */
  push32((uint32_t)(0x3u));
  /* 10036351 push 0x100460d0 */
  push32((uint32_t)(0x100460d0u));
  /* 10036356 push ecx */
  push32((uint32_t)(ECX));
  /* 10036357 call eax */
  call_ind((uint32_t)(EAX), 0x10036359u);
  /* 10036359 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003635c mov esi, eax */
  ESI = (EAX);
  /* 1003635e jmp 0x10036362 */
  goto L_10036362;
L_10036360:;
  /* 10036360 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10036362:;
  /* 10036362 push 3 */
  push32((uint32_t)(0x3u));
  /* 10036364 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x1003636au);
  /* 1003636a lea edx, [esi + esi*4] */
  EDX = ((uint32_t)(ESI + ESI*4));
  /* 1003636d mov edi, eax */
  EDI = (EAX);
  /* 1003636f mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10036374 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036377 lea ecx, [esi + edx*2] */
  ECX = ((uint32_t)(ESI + EDX*2));
  /* 1003637a imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1003637c sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 1003637f mov eax, edx */
  EAX = (EDX);
  /* 10036381 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 10036384 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10036386 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10036388 jge 0x10036390 */
  if ((C.sf==C.of)) goto L_10036390;
  /* 1003638a push 4 */
  push32((uint32_t)(0x4u));
  /* 1003638c push 4 */
  push32((uint32_t)(0x4u));
  /* 1003638e jmp 0x10036394 */
  goto L_10036394;
L_10036390:;
  /* 10036390 push 6 */
  push32((uint32_t)(0x6u));
  /* 10036392 push 6 */
  push32((uint32_t)(0x6u));
L_10036394:;
  /* 10036394 push 9 */
  push32((uint32_t)(0x9u));
  /* 10036396 call dword ptr [0x100464e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464e4))), 0x1003639cu);
  /* 1003639c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1003639f:;
  /* 1003639f push 0x10045ff0 */
  push32((uint32_t)(0x10045ff0u));
  /* 100363a4 call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x100363aau);
  /* 100363aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100363ad test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100363af jne 0x10036418 */
  if (!C.zf) goto L_10036418;
  /* 100363b1 mov eax, dword ptr [0x1004648c] */
  EAX = (r32((uint32_t)(0x1004648c)));
  /* 100363b6 mov cl, byte ptr [0x10046284] */
  CL = (r8((uint32_t)(0x10046284)));
  /* 100363bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100363be mov byte ptr [esp + 8], cl */
  w8((uint32_t)(ESP + 0x8), (CL));
  /* 100363c2 je 0x100363d9 */
  if (C.zf) goto L_100363d9;
  /* 100363c4 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 100363c8 push 3 */
  push32((uint32_t)(0x3u));
  /* 100363ca push 0x10045ff0 */
  push32((uint32_t)(0x10045ff0u));
  /* 100363cf push edx */
  push32((uint32_t)(EDX));
  /* 100363d0 call eax */
  call_ind((uint32_t)(EAX), 0x100363d2u);
  /* 100363d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100363d5 mov esi, eax */
  ESI = (EAX);
  /* 100363d7 jmp 0x100363db */
  goto L_100363db;
L_100363d9:;
  /* 100363d9 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_100363db:;
  /* 100363db push 3 */
  push32((uint32_t)(0x3u));
  /* 100363dd call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x100363e3u);
  /* 100363e3 mov edi, eax */
  EDI = (EAX);
  /* 100363e5 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 100363e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100363eb lea ecx, [esi + eax*2] */
  ECX = ((uint32_t)(ESI + EAX*2));
  /* 100363ee mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 100363f3 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100363f5 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 100363f8 mov ecx, edx */
  ECX = (EDX);
  /* 100363fa shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 100363fd add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100363ff cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10036401 jge 0x10036409 */
  if ((C.sf==C.of)) goto L_10036409;
  /* 10036403 push 9 */
  push32((uint32_t)(0x9u));
  /* 10036405 push 2 */
  push32((uint32_t)(0x2u));
  /* 10036407 jmp 0x1003640d */
  goto L_1003640d;
L_10036409:;
  /* 10036409 push 6 */
  push32((uint32_t)(0x6u));
  /* 1003640b push 6 */
  push32((uint32_t)(0x6u));
L_1003640d:;
  /* 1003640d push 9 */
  push32((uint32_t)(0x9u));
  /* 1003640f call dword ptr [0x100464e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464e4))), 0x10036415u);
  /* 10036415 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10036418:;
  /* 10036418 push 0x10046120 */
  push32((uint32_t)(0x10046120u));
  /* 1003641d call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x10036423u);
  /* 10036423 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036426 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10036428 jne 0x1003648f */
  if (!C.zf) goto L_1003648f;
  /* 1003642a mov eax, dword ptr [0x1004648c] */
  EAX = (r32((uint32_t)(0x1004648c)));
  /* 1003642f mov dl, byte ptr [0x10046284] */
  DL = (r8((uint32_t)(0x10046284)));
  /* 10036435 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10036437 mov byte ptr [esp + 8], dl */
  w8((uint32_t)(ESP + 0x8), (DL));
  /* 1003643b je 0x10036452 */
  if (C.zf) goto L_10036452;
  /* 1003643d mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10036441 push 3 */
  push32((uint32_t)(0x3u));
  /* 10036443 push 0x10046120 */
  push32((uint32_t)(0x10046120u));
  /* 10036448 push ecx */
  push32((uint32_t)(ECX));
  /* 10036449 call eax */
  call_ind((uint32_t)(EAX), 0x1003644bu);
  /* 1003644b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003644e mov esi, eax */
  ESI = (EAX);
  /* 10036450 jmp 0x10036454 */
  goto L_10036454;
L_10036452:;
  /* 10036452 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10036454:;
  /* 10036454 push 3 */
  push32((uint32_t)(0x3u));
  /* 10036456 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x1003645cu);
  /* 1003645c lea edx, [esi + esi*2] */
  EDX = ((uint32_t)(ESI + ESI*2));
  /* 1003645f mov edi, eax */
  EDI = (EAX);
  /* 10036461 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10036466 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036469 lea ecx, [esi + edx*4] */
  ECX = ((uint32_t)(ESI + EDX*4));
  /* 1003646c imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1003646e sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10036471 mov eax, edx */
  EAX = (EDX);
  /* 10036473 push 1 */
  push32((uint32_t)(0x1u));
  /* 10036475 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 10036478 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003647a push 9 */
  push32((uint32_t)(0x9u));
  /* 1003647c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003647e jge 0x10036484 */
  if ((C.sf==C.of)) goto L_10036484;
  /* 10036480 push 9 */
  push32((uint32_t)(0x9u));
  /* 10036482 jmp 0x10036486 */
  goto L_10036486;
L_10036484:;
  /* 10036484 push 6 */
  push32((uint32_t)(0x6u));
L_10036486:;
  /* 10036486 call dword ptr [0x100464e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464e4))), 0x1003648cu);
  /* 1003648c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1003648f:;
  /* 1003648f push 0x10046310 */
  push32((uint32_t)(0x10046310u));
  /* 10036494 call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x1003649au);
  /* 1003649a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003649d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1003649f je 0x100364b3 */
  if (C.zf) goto L_100364b3;
  /* 100364a1 push 0x10046258 */
  push32((uint32_t)(0x10046258u));
  /* 100364a6 call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x100364acu);
  /* 100364ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100364af test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100364b1 jne 0x100364d4 */
  if (!C.zf) goto L_100364d4;
L_100364b3:;
  /* 100364b3 push 3 */
  push32((uint32_t)(0x3u));
  /* 100364b5 call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x100364bbu);
  /* 100364bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100364be cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100364c3 jge 0x100364d4 */
  if ((C.sf==C.of)) goto L_100364d4;
  /* 100364c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 100364c7 push 4 */
  push32((uint32_t)(0x4u));
  /* 100364c9 push 9 */
  push32((uint32_t)(0x9u));
  /* 100364cb call dword ptr [0x100464e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464e4))), 0x100364d1u);
  /* 100364d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100364d4:;
  /* 100364d4 push 0x10045fb8 */
  push32((uint32_t)(0x10045fb8u));
  /* 100364d9 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x100364dfu);
  /* 100364df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100364e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100364e4 jne 0x10036557 */
  if (!C.zf) goto L_10036557;
  /* 100364e6 call 0x10032760 */
  push32(0x100364ebu); f_10032760();
  /* 100364eb cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100364ee jge 0x10036557 */
  if ((C.sf==C.of)) goto L_10036557;
  /* 100364f0 mov eax, dword ptr [0x10046488] */
  EAX = (r32((uint32_t)(0x10046488)));
  /* 100364f5 mov cl, byte ptr [0x10046284] */
  CL = (r8((uint32_t)(0x10046284)));
  /* 100364fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100364fd mov byte ptr [esp + 8], cl */
  w8((uint32_t)(ESP + 0x8), (CL));
  /* 10036501 je 0x10036518 */
  if (C.zf) goto L_10036518;
  /* 10036503 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10036507 push 2 */
  push32((uint32_t)(0x2u));
  /* 10036509 push 0x10045fb8 */
  push32((uint32_t)(0x10045fb8u));
  /* 1003650e push edx */
  push32((uint32_t)(EDX));
  /* 1003650f call eax */
  call_ind((uint32_t)(EAX), 0x10036511u);
  /* 10036511 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036514 mov esi, eax */
  ESI = (EAX);
  /* 10036516 jmp 0x1003651a */
  goto L_1003651a;
L_10036518:;
  /* 10036518 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1003651a:;
  /* 1003651a push 2 */
  push32((uint32_t)(0x2u));
  /* 1003651c call dword ptr [0x1004650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004650c))), 0x10036522u);
  /* 10036522 mov edi, eax */
  EDI = (EAX);
  /* 10036524 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 10036527 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003652a lea ecx, [esi + eax*2] */
  ECX = ((uint32_t)(ESI + EAX*2));
  /* 1003652d mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10036532 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10036534 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10036537 mov ecx, edx */
  ECX = (EDX);
  /* 10036539 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 1003653c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003653e cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10036540 jge 0x10036548 */
  if ((C.sf==C.of)) goto L_10036548;
  /* 10036542 push 3 */
  push32((uint32_t)(0x3u));
  /* 10036544 push 5 */
  push32((uint32_t)(0x5u));
  /* 10036546 jmp 0x1003654c */
  goto L_1003654c;
L_10036548:;
  /* 10036548 push 1 */
  push32((uint32_t)(0x1u));
  /* 1003654a push 7 */
  push32((uint32_t)(0x7u));
L_1003654c:;
  /* 1003654c push 9 */
  push32((uint32_t)(0x9u));
  /* 1003654e call dword ptr [0x100464e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464e4))), 0x10036554u);
  /* 10036554 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10036557:;
  /* 10036557 push 0x10046240 */
  push32((uint32_t)(0x10046240u));
  /* 1003655c call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x10036562u);
  /* 10036562 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036565 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10036567 pop edi */
  EDI = (pop32());
  /* 10036568 pop esi */
  ESI = (pop32());
  /* 10036569 jne 0x1003657a */
  if (!C.zf) goto L_1003657a;
  /* 1003656b push 1 */
  push32((uint32_t)(0x1u));
  /* 1003656d push 1 */
  push32((uint32_t)(0x1u));
  /* 1003656f push 9 */
  push32((uint32_t)(0x9u));
  /* 10036571 call dword ptr [0x100464e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464e4))), 0x10036577u);
  /* 10036577 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1003657a:;
  /* 1003657a push 0x10046048 */
  push32((uint32_t)(0x10046048u));
  /* 1003657f call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x10036585u);
  /* 10036585 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036588 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1003658a je 0x1003659e */
  if (C.zf) goto L_1003659e;
  /* 1003658c push 0x10043630 */
  push32((uint32_t)(0x10043630u));
  /* 10036591 call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x10036597u);
  /* 10036597 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003659a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1003659c jne 0x100365ad */
  if (!C.zf) goto L_100365ad;
L_1003659e:;
  /* 1003659e push 1 */
  push32((uint32_t)(0x1u));
  /* 100365a0 push 4 */
  push32((uint32_t)(0x4u));
  /* 100365a2 push 9 */
  push32((uint32_t)(0x9u));
  /* 100365a4 call dword ptr [0x100464e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464e4))), 0x100365aau);
  /* 100365aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100365ad:;
  /* 100365ad push 0x10045ef0 */
  push32((uint32_t)(0x10045ef0u));
  /* 100365b2 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x100365b8u);
  /* 100365b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100365bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100365bd jne 0x100365ce */
  if (!C.zf) goto L_100365ce;
  /* 100365bf push 4 */
  push32((uint32_t)(0x4u));
  /* 100365c1 push 4 */
  push32((uint32_t)(0x4u));
  /* 100365c3 push 6 */
  push32((uint32_t)(0x6u));
  /* 100365c5 call dword ptr [0x100464e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464e4))), 0x100365cbu);
  /* 100365cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100365ce:;
  /* 100365ce push 0x10046348 */
  push32((uint32_t)(0x10046348u));
  /* 100365d3 call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x100365d9u);
  /* 100365d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100365dc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100365de jne 0x10036600 */
  if (!C.zf) goto L_10036600;
  /* 100365e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 100365e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 100365e4 push 9 */
  push32((uint32_t)(0x9u));
  /* 100365e6 call dword ptr [0x100464e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464e4))), 0x100365ecu);
  /* 100365ec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100365ef pop ecx */
  ECX = (pop32());
  /* 100365f0 ret  */
  ESPCHK(0x100362d0u, _esp0);
  ESP += 4; return;
L_100365f1:;
  /* 100365f1 push 3 */
  push32((uint32_t)(0x3u));
  /* 100365f3 push 6 */
  push32((uint32_t)(0x6u));
  /* 100365f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 100365f7 call dword ptr [0x100464e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464e4))), 0x100365fdu);
  /* 100365fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10036600:;
  /* 10036600 pop ecx */
  ECX = (pop32());
  /* 10036601 ret  */
  ESPCHK(0x100362d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006610 @ 0x10036610 (174 bytes, 50 insns) */
void f_10036610(void) {
  FTRACE(0x10036610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10036610 push 0x10046568 */
  push32((uint32_t)(0x10046568u));
  /* 10036615 call 0x10032700 */
  push32(0x1003661au); f_10032700();
  /* 1003661a push 0x10046310 */
  push32((uint32_t)(0x10046310u));
  /* 1003661f call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x10036625u);
  /* 10036625 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036628 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1003662a je 0x1003664c */
  if (C.zf) goto L_1003664c;
  /* 1003662c push 0x10046258 */
  push32((uint32_t)(0x10046258u));
  /* 10036631 call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x10036637u);
  /* 10036637 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003663a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1003663c je 0x1003664c */
  if (C.zf) goto L_1003664c;
  /* 1003663e push 0x1003f16c */
  push32((uint32_t)(0x1003f16cu));
  /* 10036643 call 0x10032700 */
  push32(0x10036648u); f_10032700();
  /* 10036648 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003664b ret  */
  ESPCHK(0x10036610u, _esp0);
  ESP += 4; return;
L_1003664c:;
  /* 1003664c mov eax, dword ptr [0x10045f28] */
  EAX = (r32((uint32_t)(0x10045f28)));
  /* 10036651 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10036654 je 0x100366b2 */
  if (C.zf) goto L_100366b2;
  /* 10036656 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10036659 je 0x100366b2 */
  if (C.zf) goto L_100366b2;
  /* 1003665b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003665e je 0x100366b2 */
  if (C.zf) goto L_100366b2;
  /* 10036660 push 0x10046240 */
  push32((uint32_t)(0x10046240u));
  /* 10036665 call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x1003666bu);
  /* 1003666b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003666e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10036670 je 0x10036692 */
  if (C.zf) goto L_10036692;
  /* 10036672 push 0x10046120 */
  push32((uint32_t)(0x10046120u));
  /* 10036677 call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x1003667du);
  /* 1003667d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036680 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10036682 jne 0x10036692 */
  if (!C.zf) goto L_10036692;
  /* 10036684 push 0x10046568 */
  push32((uint32_t)(0x10046568u));
  /* 10036689 call 0x10032700 */
  push32(0x1003668eu); f_10032700();
  /* 1003668e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036691 ret  */
  ESPCHK(0x10036610u, _esp0);
  ESP += 4; return;
L_10036692:;
  /* 10036692 push 0x10046120 */
  push32((uint32_t)(0x10046120u));
  /* 10036697 call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x1003669du);
  /* 1003669d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100366a0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100366a2 je 0x100366bd */
  if (C.zf) goto L_100366bd;
  /* 100366a4 push 0x1003f1d8 */
  push32((uint32_t)(0x1003f1d8u));
  /* 100366a9 call 0x10032700 */
  push32(0x100366aeu); f_10032700();
  /* 100366ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100366b1 ret  */
  ESPCHK(0x10036610u, _esp0);
  ESP += 4; return;
L_100366b2:;
  /* 100366b2 push 0x1003f1d8 */
  push32((uint32_t)(0x1003f1d8u));
  /* 100366b7 call 0x10032700 */
  push32(0x100366bcu); f_10032700();
  /* 100366bc pop ecx */
  ECX = (pop32());
L_100366bd:;
  /* 100366bd ret  */
  ESPCHK(0x10036610u, _esp0);
  ESP += 4; return;
}

/* FUN_100066c0 @ 0x100366c0 (70 bytes, 22 insns) */
void f_100366c0(void) {
  FTRACE(0x100366c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100366c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 100366c2 call 0x10032740 */
  push32(0x100366c7u); f_10032740();
  /* 100366c7 push 0x10043658 */
  push32((uint32_t)(0x10043658u));
  /* 100366cc call 0x10035250 */
  push32(0x100366d1u); f_10035250();
  /* 100366d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100366d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100366d6 je 0x100366e2 */
  if (C.zf) goto L_100366e2;
  /* 100366d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 100366da call 0x10032740 */
  push32(0x100366dfu); f_10032740();
  /* 100366df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100366e2:;
  /* 100366e2 call 0x10032750 */
  push32(0x100366e7u); f_10032750();
  /* 100366e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100366e9 jg 0x100366fd */
  if ((!C.zf&&C.sf==C.of)) goto L_100366fd;
  /* 100366eb push 0x100438a8 */
  push32((uint32_t)(0x100438a8u));
  /* 100366f0 call dword ptr [0x10046514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046514))), 0x100366f6u);
  /* 100366f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100366f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100366fb jle 0x10036705 */
  if ((C.zf||C.sf!=C.of)) goto L_10036705;
L_100366fd:;
  /* 100366fd push 0 */
  push32((uint32_t)(0x0u));
  /* 100366ff call 0x10032740 */
  push32(0x10036704u); f_10032740();
  /* 10036704 pop ecx */
  ECX = (pop32());
L_10036705:;
  /* 10036705 ret  */
  ESPCHK(0x100366c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006710 @ 0x10036710 (235 bytes, 66 insns) */
void f_10036710(void) {
  FTRACE(0x10036710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10036710 push 0x10046168 */
  push32((uint32_t)(0x10046168u));
  /* 10036715 call dword ptr [0x1004651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004651c))), 0x1003671bu);
  /* 1003671b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003671e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10036720 je 0x10036736 */
  if (C.zf) goto L_10036736;
  /* 10036722 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10036724 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10036726 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10036728 push 0x10046340 */
  push32((uint32_t)(0x10046340u));
  /* 1003672d call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10036733u);
  /* 10036733 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10036736:;
  /* 10036736 push 0x10046080 */
  push32((uint32_t)(0x10046080u));
  /* 1003673b call dword ptr [0x1004651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004651c))), 0x10036741u);
  /* 10036741 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036744 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10036746 je 0x1003675c */
  if (C.zf) goto L_1003675c;
  /* 10036748 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1003674a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1003674c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1003674e push 0x10043638 */
  push32((uint32_t)(0x10043638u));
  /* 10036753 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10036759u);
  /* 10036759 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1003675c:;
  /* 1003675c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003675e push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10036760 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10036762 push 0x10043898 */
  push32((uint32_t)(0x10043898u));
  /* 10036767 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x1003676du);
  /* 1003676d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003676f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10036771 push 0x100461a8 */
  push32((uint32_t)(0x100461a8u));
  /* 10036776 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003677cu);
  /* 1003677c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003677e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10036780 push 0x100461a0 */
  push32((uint32_t)(0x100461a0u));
  /* 10036785 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003678bu);
  /* 1003678b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003678d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1003678f push 0x10046170 */
  push32((uint32_t)(0x10046170u));
  /* 10036794 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003679au);
  /* 1003679a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003679c push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1003679e push 0x10046168 */
  push32((uint32_t)(0x10046168u));
  /* 100367a3 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100367a9u);
  /* 100367a9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100367ac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100367ae push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100367b0 push 0x10046178 */
  push32((uint32_t)(0x10046178u));
  /* 100367b5 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100367bbu);
  /* 100367bb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100367bd push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100367bf push 0x10046068 */
  push32((uint32_t)(0x10046068u));
  /* 100367c4 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100367cau);
  /* 100367ca push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100367cc push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100367ce push 0x10046070 */
  push32((uint32_t)(0x10046070u));
  /* 100367d3 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100367d9u);
  /* 100367d9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100367db push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100367dd push 0x10046078 */
  push32((uint32_t)(0x10046078u));
  /* 100367e2 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100367e8u);
  /* 100367e8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100367ea push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100367ec push 0x10046080 */
  push32((uint32_t)(0x10046080u));
  /* 100367f1 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100367f7u);
  /* 100367f7 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100367fa ret  */
  ESPCHK(0x10036710u, _esp0);
  ESP += 4; return;
}

/* FUN_10006800 @ 0x10036800 (303 bytes, 90 insns) */
void f_10036800(void) {
  FTRACE(0x10036800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10036800 push ecx */
  push32((uint32_t)(ECX));
  /* 10036801 push ebx */
  push32((uint32_t)(EBX));
  /* 10036802 push ebp */
  push32((uint32_t)(EBP));
  /* 10036803 push esi */
  push32((uint32_t)(ESI));
  /* 10036804 push edi */
  push32((uint32_t)(EDI));
  /* 10036805 push 0x100438a8 */
  push32((uint32_t)(0x100438a8u));
  /* 1003680a call dword ptr [0x10046514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046514))), 0x10036810u);
  /* 10036810 push 0x10046220 */
  push32((uint32_t)(0x10046220u));
  /* 10036815 mov ebx, eax */
  EBX = (EAX);
  /* 10036817 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x1003681du);
  /* 1003681d push 0x10046220 */
  push32((uint32_t)(0x10046220u));
  /* 10036822 mov edi, eax */
  EDI = (EAX);
  /* 10036824 call dword ptr [0x10046514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046514))), 0x1003682au);
  /* 1003682a push 0x10045ef0 */
  push32((uint32_t)(0x10045ef0u));
  /* 1003682f mov ebp, eax */
  EBP = (EAX);
  /* 10036831 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x10036837u);
  /* 10036837 push 0x10045ef0 */
  push32((uint32_t)(0x10045ef0u));
  /* 1003683c mov esi, eax */
  ESI = (EAX);
  /* 1003683e call dword ptr [0x10046514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046514))), 0x10036844u);
  /* 10036844 push 0x100438a8 */
  push32((uint32_t)(0x100438a8u));
  /* 10036849 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 1003684d call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x10036853u);
  /* 10036853 mov edx, dword ptr [esp + 0x28] */
  EDX = (r32((uint32_t)(ESP + 0x28)));
  /* 10036857 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003685a sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003685c add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1003685e sub esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10036860 sub esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10036862 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10036864 pop edi */
  EDI = (pop32());
  /* 10036865 pop esi */
  ESI = (pop32());
  /* 10036866 pop ebp */
  EBP = (pop32());
  /* 10036867 pop ebx */
  EBX = (pop32());
  /* 10036868 jne 0x100368d0 */
  if (!C.zf) goto L_100368d0;
  /* 1003686a cmp dword ptr [0x10046180], 0x28 */
  { uint32_t _a=(r32((uint32_t)(0x10046180))),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10036871 jle 0x100368d0 */
  if ((C.zf||C.sf!=C.of)) goto L_100368d0;
  /* 10036873 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10036875 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10036877 push 4 */
  push32((uint32_t)(0x4u));
  /* 10036879 push 0x100438a8 */
  push32((uint32_t)(0x100438a8u));
  /* 1003687e call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10036884u);
  /* 10036884 push 0x10046188 */
  push32((uint32_t)(0x10046188u));
  /* 10036889 call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x1003688fu);
  /* 1003688f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036892 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10036894 je 0x100368aa */
  if (C.zf) goto L_100368aa;
  /* 10036896 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10036898 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1003689a push 6 */
  push32((uint32_t)(0x6u));
  /* 1003689c push 0x100438a8 */
  push32((uint32_t)(0x100438a8u));
  /* 100368a1 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x100368a7u);
  /* 100368a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100368aa:;
  /* 100368aa push 0x10045ff0 */
  push32((uint32_t)(0x10045ff0u));
  /* 100368af call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x100368b5u);
  /* 100368b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100368b8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100368ba je 0x100368d0 */
  if (C.zf) goto L_100368d0;
  /* 100368bc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100368be push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100368c0 push 8 */
  push32((uint32_t)(0x8u));
  /* 100368c2 push 0x100438a8 */
  push32((uint32_t)(0x100438a8u));
  /* 100368c7 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x100368cdu);
  /* 100368cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100368d0:;
  /* 100368d0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100368d2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100368d4 push 0x100462b8 */
  push32((uint32_t)(0x100462b8u));
  /* 100368d9 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100368dfu);
  /* 100368df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100368e1 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 100368e3 push 0x100462a0 */
  push32((uint32_t)(0x100462a0u));
  /* 100368e8 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100368eeu);
  /* 100368ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100368f0 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100368f2 push 0x100462b0 */
  push32((uint32_t)(0x100462b0u));
  /* 100368f7 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x100368fdu);
  /* 100368fd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100368ff push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10036901 push 0x10046290 */
  push32((uint32_t)(0x10046290u));
  /* 10036906 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003690cu);
  /* 1003690c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003690e push 0xf */
  push32((uint32_t)(0xfu));
  /* 10036910 push 0x10046298 */
  push32((uint32_t)(0x10046298u));
  /* 10036915 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003691bu);
  /* 1003691b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003691d push 0xa */
  push32((uint32_t)(0xau));
  /* 1003691f push 0x10046288 */
  push32((uint32_t)(0x10046288u));
  /* 10036924 call dword ptr [0x100464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d8))), 0x1003692au);
  /* 1003692a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003692d pop ecx */
  ECX = (pop32());
  /* 1003692e ret  */
  ESPCHK(0x10036800u, _esp0);
  ESP += 4; return;
}

/* FUN_10006930 @ 0x10036930 (517 bytes, 145 insns) */
void f_10036930(void) {
  FTRACE(0x10036930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10036930 push esi */
  push32((uint32_t)(ESI));
  /* 10036931 push 0x10046228 */
  push32((uint32_t)(0x10046228u));
  /* 10036936 call dword ptr [0x10046514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046514))), 0x1003693cu);
  /* 1003693c push 0x10046228 */
  push32((uint32_t)(0x10046228u));
  /* 10036941 mov esi, eax */
  ESI = (EAX);
  /* 10036943 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x10036949u);
  /* 10036949 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003694c sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003694e jne 0x10036964 */
  if (!C.zf) goto L_10036964;
  /* 10036950 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10036952 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10036954 push 5 */
  push32((uint32_t)(0x5u));
  /* 10036956 push 0x10046228 */
  push32((uint32_t)(0x10046228u));
  /* 1003695b call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10036961u);
  /* 10036961 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10036964:;
  /* 10036964 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10036966 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10036968 push 1 */
  push32((uint32_t)(0x1u));
  /* 1003696a push 0x10045f88 */
  push32((uint32_t)(0x10045f88u));
  /* 1003696f call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10036975u);
  /* 10036975 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10036977 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10036979 push 1 */
  push32((uint32_t)(0x1u));
  /* 1003697b push 0x100461b8 */
  push32((uint32_t)(0x100461b8u));
  /* 10036980 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10036986u);
  /* 10036986 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10036988 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1003698a push 2 */
  push32((uint32_t)(0x2u));
  /* 1003698c push 0x10046220 */
  push32((uint32_t)(0x10046220u));
  /* 10036991 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10036997u);
  /* 10036997 push 0x10046220 */
  push32((uint32_t)(0x10046220u));
  /* 1003699c call dword ptr [0x10046514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046514))), 0x100369a2u);
  /* 100369a2 push 0x10046220 */
  push32((uint32_t)(0x10046220u));
  /* 100369a7 mov esi, eax */
  ESI = (EAX);
  /* 100369a9 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x100369afu);
  /* 100369af add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100369b2 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100369b4 jne 0x10036b33 */
  if (!C.zf) goto L_10036b33;
  /* 100369ba push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100369bc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100369be push 1 */
  push32((uint32_t)(0x1u));
  /* 100369c0 push 0x10045ef0 */
  push32((uint32_t)(0x10045ef0u));
  /* 100369c5 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x100369cbu);
  /* 100369cb push 0x10045ef0 */
  push32((uint32_t)(0x10045ef0u));
  /* 100369d0 call dword ptr [0x10046514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046514))), 0x100369d6u);
  /* 100369d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100369d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100369db je 0x10036b33 */
  if (C.zf) goto L_10036b33;
  /* 100369e1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100369e3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100369e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 100369e7 push 0x10045fa0 */
  push32((uint32_t)(0x10045fa0u));
  /* 100369ec call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x100369f2u);
  /* 100369f2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100369f4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100369f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 100369f8 push 0x10045fa8 */
  push32((uint32_t)(0x10045fa8u));
  /* 100369fd call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10036a03u);
  /* 10036a03 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10036a05 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10036a07 push 1 */
  push32((uint32_t)(0x1u));
  /* 10036a09 push 0x10043848 */
  push32((uint32_t)(0x10043848u));
  /* 10036a0e call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10036a14u);
  /* 10036a14 push 0x10043848 */
  push32((uint32_t)(0x10043848u));
  /* 10036a19 call dword ptr [0x10046514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046514))), 0x10036a1fu);
  /* 10036a1f add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036a22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10036a24 je 0x10036b33 */
  if (C.zf) goto L_10036b33;
  /* 10036a2a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10036a2c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10036a2e push 1 */
  push32((uint32_t)(0x1u));
  /* 10036a30 push 0x10045fb8 */
  push32((uint32_t)(0x10045fb8u));
  /* 10036a35 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10036a3bu);
  /* 10036a3b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10036a3d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10036a3f push 1 */
  push32((uint32_t)(0x1u));
  /* 10036a41 push 0x100460c8 */
  push32((uint32_t)(0x100460c8u));
  /* 10036a46 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10036a4cu);
  /* 10036a4c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10036a4e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10036a50 push 1 */
  push32((uint32_t)(0x1u));
  /* 10036a52 push 0x100435e8 */
  push32((uint32_t)(0x100435e8u));
  /* 10036a57 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10036a5du);
  /* 10036a5d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10036a5f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10036a61 push 1 */
  push32((uint32_t)(0x1u));
  /* 10036a63 push 0x100460a8 */
  push32((uint32_t)(0x100460a8u));
  /* 10036a68 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10036a6eu);
  /* 10036a6e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036a71 push 0x10045ff0 */
  push32((uint32_t)(0x10045ff0u));
  /* 10036a76 call dword ptr [0x10046520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046520))), 0x10036a7cu);
  /* 10036a7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036a7f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10036a81 je 0x10036b33 */
  if (C.zf) goto L_10036b33;
  /* 10036a87 push 0x10045f88 */
  push32((uint32_t)(0x10045f88u));
  /* 10036a8c call dword ptr [0x10046514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046514))), 0x10036a92u);
  /* 10036a92 push 0x10045f88 */
  push32((uint32_t)(0x10045f88u));
  /* 10036a97 mov esi, eax */
  ESI = (EAX);
  /* 10036a99 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x10036a9fu);
  /* 10036a9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036aa2 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10036aa4 jne 0x10036acd */
  if (!C.zf) goto L_10036acd;
  /* 10036aa6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10036aa8 call 0x10032710 */
  push32(0x10036aadu); f_10032710();
  /* 10036aad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036ab0 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10036ab3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10036ab5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10036ab7 jge 0x10036abd */
  if ((C.sf==C.of)) goto L_10036abd;
  /* 10036ab9 push 6 */
  push32((uint32_t)(0x6u));
  /* 10036abb jmp 0x10036abf */
  goto L_10036abf;
L_10036abd:;
  /* 10036abd push 4 */
  push32((uint32_t)(0x4u));
L_10036abf:;
  /* 10036abf push 0x10045f88 */
  push32((uint32_t)(0x10045f88u));
  /* 10036ac4 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10036acau);
  /* 10036aca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10036acd:;
  /* 10036acd push 0x100460a8 */
  push32((uint32_t)(0x100460a8u));
  /* 10036ad2 call dword ptr [0x10046514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046514))), 0x10036ad8u);
  /* 10036ad8 push 0x100460a8 */
  push32((uint32_t)(0x100460a8u));
  /* 10036add mov esi, eax */
  ESI = (EAX);
  /* 10036adf call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x10036ae5u);
  /* 10036ae5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036ae8 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10036aea jne 0x10036b00 */
  if (!C.zf) goto L_10036b00;
  /* 10036aec push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10036aee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10036af0 push 7 */
  push32((uint32_t)(0x7u));
  /* 10036af2 push 0x100460a8 */
  push32((uint32_t)(0x100460a8u));
  /* 10036af7 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10036afdu);
  /* 10036afd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10036b00:;
  /* 10036b00 push 0x100435e8 */
  push32((uint32_t)(0x100435e8u));
  /* 10036b05 call dword ptr [0x10046514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046514))), 0x10036b0bu);
  /* 10036b0b push 0x100435e8 */
  push32((uint32_t)(0x100435e8u));
  /* 10036b10 mov esi, eax */
  ESI = (EAX);
  /* 10036b12 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x10036b18u);
  /* 10036b18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036b1b sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10036b1d jne 0x10036b33 */
  if (!C.zf) goto L_10036b33;
  /* 10036b1f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10036b21 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10036b23 push 3 */
  push32((uint32_t)(0x3u));
  /* 10036b25 push 0x100435e8 */
  push32((uint32_t)(0x100435e8u));
  /* 10036b2a call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10036b30u);
  /* 10036b30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10036b33:;
  /* 10036b33 pop esi */
  ESI = (pop32());
  /* 10036b34 ret  */
  ESPCHK(0x10036930u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b40 @ 0x10036b40 (121 bytes, 36 insns) */
void f_10036b40(void) {
  FTRACE(0x10036b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10036b40 push 1 */
  push32((uint32_t)(0x1u));
  /* 10036b42 call 0x10032740 */
  push32(0x10036b47u); f_10032740();
  /* 10036b47 push 0x10043858 */
  push32((uint32_t)(0x10043858u));
  /* 10036b4c call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x10036b52u);
  /* 10036b52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036b55 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10036b58 jge 0x10036b6d */
  if ((C.sf==C.of)) goto L_10036b6d;
  /* 10036b5a mov eax, dword ptr [0x10046284] */
  EAX = (r32((uint32_t)(0x10046284)));
  /* 10036b5f push 0 */
  push32((uint32_t)(0x0u));
  /* 10036b61 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10036b64 push eax */
  push32((uint32_t)(EAX));
  /* 10036b65 call 0x100326b0 */
  push32(0x10036b6au); f_100326b0();
  /* 10036b6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10036b6d:;
  /* 10036b6d push 0x10043858 */
  push32((uint32_t)(0x10043858u));
  /* 10036b72 call dword ptr [0x10046510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046510))), 0x10036b78u);
  /* 10036b78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036b7b cmp eax, 0x5f */
  { uint32_t _a=(EAX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10036b7e jle 0x10036b94 */
  if ((C.zf||C.sf!=C.of)) goto L_10036b94;
  /* 10036b80 mov ecx, dword ptr [0x10046284] */
  ECX = (r32((uint32_t)(0x10046284)));
  /* 10036b86 push 1 */
  push32((uint32_t)(0x1u));
  /* 10036b88 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10036b8b push ecx */
  push32((uint32_t)(ECX));
  /* 10036b8c call 0x100326b0 */
  push32(0x10036b91u); f_100326b0();
  /* 10036b91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10036b94:;
  /* 10036b94 mov edx, dword ptr [0x10046284] */
  EDX = (r32((uint32_t)(0x10046284)));
  /* 10036b9a add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10036b9d push edx */
  push32((uint32_t)(EDX));
  /* 10036b9e call 0x100326d0 */
  push32(0x10036ba3u); f_100326d0();
  /* 10036ba3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10036ba5 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10036ba8 push eax */
  push32((uint32_t)(EAX));
  /* 10036ba9 call 0x10032740 */
  push32(0x10036baeu); f_10032740();
  /* 10036bae push 0 */
  push32((uint32_t)(0x0u));
  /* 10036bb0 call 0x10032740 */
  push32(0x10036bb5u); f_10032740();
  /* 10036bb5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036bb8 ret  */
  ESPCHK(0x10036b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bc0 @ 0x10036bc0 (86 bytes, 20 insns) */
void f_10036bc0(void) {
  FTRACE(0x10036bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10036bc0 mov eax, dword ptr [0x10046284] */
  EAX = (r32((uint32_t)(0x10046284)));
  /* 10036bc5 mov ecx, dword ptr [eax*4 + 0x10045f68] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10045f68)));
  /* 10036bcc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10036bce je 0x10036bd5 */
  if (C.zf) goto L_10036bd5;
  /* 10036bd0 call 0x100366c0 */
  push32(0x10036bd5u); f_100366c0();
L_10036bd5:;
  /* 10036bd5 call 0x10035dd0 */
  push32(0x10036bdau); f_10035dd0();
  /* 10036bda call 0x10036710 */
  push32(0x10036bdfu); f_10036710();
  /* 10036bdf call 0x10032760 */
  push32(0x10036be4u); f_10032760();
  /* 10036be4 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10036be7 jge 0x10036bee */
  if ((C.sf==C.of)) goto L_10036bee;
  /* 10036be9 call 0x10036800 */
  push32(0x10036beeu); f_10036800();
L_10036bee:;
  /* 10036bee call 0x10035bb0 */
  push32(0x10036bf3u); f_10035bb0();
  /* 10036bf3 call 0x10035a70 */
  push32(0x10036bf8u); f_10035a70();
  /* 10036bf8 call 0x10032760 */
  push32(0x10036bfdu); f_10032760();
  /* 10036bfd cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10036c00 jge 0x10036c07 */
  if ((C.sf==C.of)) goto L_10036c07;
  /* 10036c02 call 0x10035290 */
  push32(0x10036c07u); f_10035290();
L_10036c07:;
  /* 10036c07 call 0x10035fb0 */
  push32(0x10036c0cu); f_10035fb0();
  /* 10036c0c call 0x100362d0 */
  push32(0x10036c11u); f_100362d0();
  /* 10036c11 jmp 0x10036610 */
  f_10036610(); return;
}

/* FUN_10006c20 @ 0x10036c20 (247 bytes, 70 insns) */
void f_10036c20(void) {
  FTRACE(0x10036c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10036c20 push esi */
  push32((uint32_t)(ESI));
  /* 10036c21 push edi */
  push32((uint32_t)(EDI));
  /* 10036c22 call 0x10036b40 */
  push32(0x10036c27u); f_10036b40();
  /* 10036c27 call 0x10036930 */
  push32(0x10036c2cu); f_10036930();
  /* 10036c2c mov edi, 2 */
  EDI = (0x2u);
L_10036c31:;
  /* 10036c31 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10036c33 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10036c35 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10036c3a push 0x10046160 */
  push32((uint32_t)(0x10046160u));
  /* 10036c3f call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10036c45u);
  /* 10036c45 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10036c47 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10036c49 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10036c4e push 0x10043658 */
  push32((uint32_t)(0x10043658u));
  /* 10036c53 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10036c59u);
  /* 10036c59 mov eax, dword ptr [0x10046284] */
  EAX = (r32((uint32_t)(0x10046284)));
  /* 10036c5e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10036c61 push eax */
  push32((uint32_t)(EAX));
  /* 10036c62 call 0x100326d0 */
  push32(0x10036c67u); f_100326d0();
  /* 10036c67 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036c6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10036c6c jne 0x10036c8c */
  if (!C.zf) goto L_10036c8c;
  /* 10036c6e mov esi, 0x64 */
  ESI = (0x64u);
L_10036c73:;
  /* 10036c73 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10036c75 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10036c77 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 10036c79 push 0x10043858 */
  push32((uint32_t)(0x10043858u));
  /* 10036c7e call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10036c84u);
  /* 10036c84 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036c87 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10036c88 jne 0x10036c73 */
  if (!C.zf) goto L_10036c73;
  /* 10036c8a jmp 0x10036ca0 */
  goto L_10036ca0;
L_10036c8c:;
  /* 10036c8c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10036c8e push 0xa */
  push32((uint32_t)(0xau));
  /* 10036c90 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10036c92 push 0x10046130 */
  push32((uint32_t)(0x10046130u));
  /* 10036c97 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10036c9du);
  /* 10036c9d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10036ca0:;
  /* 10036ca0 push 0x10045ff0 */
  push32((uint32_t)(0x10045ff0u));
  /* 10036ca5 call dword ptr [0x1004651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004651c))), 0x10036cabu);
  /* 10036cab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036cae test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10036cb0 jne 0x10036cc9 */
  if (!C.zf) goto L_10036cc9;
  /* 10036cb2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10036cb4 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10036cb6 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10036cbb push 0x10043660 */
  push32((uint32_t)(0x10043660u));
  /* 10036cc0 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10036cc6u);
  /* 10036cc6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10036cc9:;
  /* 10036cc9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10036ccb push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10036ccd push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10036cd2 push 0x10043650 */
  push32((uint32_t)(0x10043650u));
  /* 10036cd7 call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10036cddu);
  /* 10036cdd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10036cdf push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10036ce1 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10036ce6 push 0x10045f50 */
  push32((uint32_t)(0x10045f50u));
  /* 10036ceb call dword ptr [0x100464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464d4))), 0x10036cf1u);
  /* 10036cf1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036cf4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10036cf5 jne 0x10036c31 */
  if (!C.zf) goto L_10036c31;
  /* 10036cfb call 0x10036710 */
  push32(0x10036d00u); f_10036710();
  /* 10036d00 call 0x10035fb0 */
  push32(0x10036d05u); f_10035fb0();
  /* 10036d05 call 0x100362d0 */
  push32(0x10036d0au); f_100362d0();
  /* 10036d0a call 0x10035290 */
  push32(0x10036d0fu); f_10035290();
  /* 10036d0f call 0x10035a70 */
  push32(0x10036d14u); f_10035a70();
  /* 10036d14 pop edi */
  EDI = (pop32());
  /* 10036d15 pop esi */
  ESI = (pop32());
  /* 10036d16 ret  */
  ESPCHK(0x10036c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d20 @ 0x10036d20 (279 bytes, 62 insns) [1 switch table(s)] */
void f_10036d20(void) {
  FTRACE(0x10036d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10036d20 call 0x10032660 */
  push32(0x10036d25u); f_10032660();
  /* 10036d25 mov dword ptr [0x10045f28], eax */
  w32((uint32_t)(0x10045f28), (EAX));
  /* 10036d2a call 0x10032640 */
  push32(0x10036d2fu); f_10032640();
  /* 10036d2f mov dword ptr [0x10046338], eax */
  w32((uint32_t)(0x10046338), (EAX));
  /* 10036d34 call 0x10032650 */
  push32(0x10036d39u); f_10032650();
  /* 10036d39 mov dword ptr [0x10043868], eax */
  w32((uint32_t)(0x10043868), (EAX));
  /* 10036d3e call 0x10033020 */
  push32(0x10036d43u); f_10033020();
  /* 10036d43 push 0x1003f114 */
  push32((uint32_t)(0x1003f114u));
  /* 10036d48 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10036d4a call dword ptr [0x100464dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464dc))), 0x10036d50u);
  /* 10036d50 call 0x10036610 */
  push32(0x10036d55u); f_10036610();
  /* 10036d55 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10036d57 push 0x1003f244 */
  push32((uint32_t)(0x1003f244u));
  /* 10036d5c call 0x100326e0 */
  push32(0x10036d61u); f_100326e0();
  /* 10036d61 mov eax, dword ptr [0x10045f28] */
  EAX = (r32((uint32_t)(0x10045f28)));
  /* 10036d66 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036d69 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10036d6c ja 0x10036e32 */
  if ((!C.cf&&!C.zf)) goto L_10036e32;
  /* 10036d72 jmp dword ptr [eax*4 + 0x10036e38] */
  switch (EAX) {
    case 0: goto L_10036d79;
    case 1: goto L_10036df5;
    case 2: goto L_10036dfc;
    case 3: goto L_10036dfc;
    case 4: goto L_10036dfc;
    case 5: goto L_10036d79;
    default: x86_unimpl("switch@0x10036d72 out of table"); return;
  }
L_10036d79:;
  /* 10036d79 cmp dword ptr [0x10043868], 3 */
  { uint32_t _a=(r32((uint32_t)(0x10043868))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10036d80 jne 0x10036db2 */
  if (!C.zf) goto L_10036db2;
  /* 10036d82 push 0x1003f160 */
  push32((uint32_t)(0x1003f160u));
  /* 10036d87 push 3 */
  push32((uint32_t)(0x3u));
  /* 10036d89 call dword ptr [0x100464dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464dc))), 0x10036d8fu);
  /* 10036d8f push 0x1003f16c */
  push32((uint32_t)(0x1003f16cu));
  /* 10036d94 call 0x10032700 */
  push32(0x10036d99u); f_10032700();
  /* 10036d99 push 5 */
  push32((uint32_t)(0x5u));
  /* 10036d9b push 0x1003f41c */
  push32((uint32_t)(0x1003f41cu));
  /* 10036da0 call 0x100326e0 */
  push32(0x10036da5u); f_100326e0();
  /* 10036da5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036da8 call 0x10036c20 */
  push32(0x10036dadu); f_10036c20();
  /* 10036dad jmp 0x10036e32 */
  goto L_10036e32;
L_10036db2:;
  /* 10036db2 push 0x1003f114 */
  push32((uint32_t)(0x1003f114u));
  /* 10036db7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10036db9 call dword ptr [0x100464dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464dc))), 0x10036dbfu);
  /* 10036dbf push 0x10046568 */
  push32((uint32_t)(0x10046568u));
  /* 10036dc4 call 0x10032700 */
  push32(0x10036dc9u); f_10032700();
  /* 10036dc9 mov eax, dword ptr [0x10043868] */
  EAX = (r32((uint32_t)(0x10043868)));
  /* 10036dce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036dd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10036dd3 jne 0x10036ddf */
  if (!C.zf) goto L_10036ddf;
  /* 10036dd5 mov dword ptr [0x1003f248], 4 */
  w32((uint32_t)(0x1003f248), (0x4u));
L_10036ddf:;
  /* 10036ddf push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10036de1 push 0x1003f244 */
  push32((uint32_t)(0x1003f244u));
  /* 10036de6 call 0x100326e0 */
  push32(0x10036debu); f_100326e0();
  /* 10036deb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036dee call 0x10036bc0 */
  push32(0x10036df3u); f_10036bc0();
  /* 10036df3 jmp 0x10036e32 */
  goto L_10036e32;
L_10036df5:;
  /* 10036df5 call 0x100343c0 */
  push32(0x10036dfau); f_100343c0();
  /* 10036dfa jmp 0x10036e32 */
  goto L_10036e32;
L_10036dfc:;
  /* 10036dfc push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10036e01 call dword ptr [0x100464f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464f8))), 0x10036e07u);
  /* 10036e07 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10036e0c call dword ptr [0x100464fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464fc))), 0x10036e12u);
  /* 10036e12 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10036e17 call dword ptr [0x10046500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10046500))), 0x10036e1du);
  /* 10036e1d push 0x1003f07c */
  push32((uint32_t)(0x1003f07cu));
  /* 10036e22 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10036e24 call dword ptr [0x100464dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100464dc))), 0x10036e2au);
  /* 10036e2a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036e2d call 0x10033340 */
  push32(0x10036e32u); f_10033340();
L_10036e32:;
  /* 10036e32 jmp 0x100331a0 */
  f_100331a0(); return;
}

/* FUN_10006e50 @ 0x10036e50 (82 bytes, 32 insns) */
void f_10036e50(void) {
  FTRACE(0x10036e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10036e50 push ebp */
  push32((uint32_t)(EBP));
  /* 10036e51 mov ebp, esp */
  EBP = (ESP);
  /* 10036e53 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10036e56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10036e59 push esi */
  push32((uint32_t)(ESI));
  /* 10036e5a mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10036e5d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10036e60 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10036e63 mov dword ptr [ebp - 0x14], 0x42 */
  w32((uint32_t)(EBP + -0x14), (0x42u));
  /* 10036e6a push eax */
  push32((uint32_t)(EAX));
  /* 10036e6b lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10036e6e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10036e71 mov dword ptr [ebp - 0x1c], 0x7fffffff */
  w32((uint32_t)(EBP + -0x1c), (0x7fffffffu));
  /* 10036e78 push eax */
  push32((uint32_t)(EAX));
  /* 10036e79 call 0x100371dc */
  push32(0x10036e7eu); f_100371dc();
  /* 10036e7e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036e81 dec dword ptr [ebp - 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))-1; w32((uint32_t)(EBP + -0x1c), (_r)); fl_dec(_r,32); }
  /* 10036e84 mov esi, eax */
  ESI = (EAX);
  /* 10036e86 js 0x10036e90 */
  if (C.sf) goto L_10036e90;
  /* 10036e88 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10036e8b and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 10036e8e jmp 0x10036e9d */
  goto L_10036e9d;
L_10036e90:;
  /* 10036e90 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10036e93 push eax */
  push32((uint32_t)(EAX));
  /* 10036e94 push 0 */
  push32((uint32_t)(0x0u));
  /* 10036e96 call 0x100370c4 */
  push32(0x10036e9bu); f_100370c4();
  /* 10036e9b pop ecx */
  ECX = (pop32());
  /* 10036e9c pop ecx */
  ECX = (pop32());
L_10036e9d:;
  /* 10036e9d mov eax, esi */
  EAX = (ESI);
  /* 10036e9f pop esi */
  ESI = (pop32());
  /* 10036ea0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10036ea1 ret  */
  ESPCHK(0x10036e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ea2 @ 0x10036ea2 (23 bytes, 6 insns) */
void f_10036ea2(void) {
  FTRACE(0x10036ea2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10036ea2 call 0x10036eba */
  push32(0x10036ea7u); f_10036eba();
  /* 10036ea7 call 0x10037a36 */
  push32(0x10036eacu); f_10037a36();
  /* 10036eac mov dword ptr [0x10046630], eax */
  w32((uint32_t)(0x10046630), (EAX));
  /* 10036eb1 call 0x100379e6 */
  push32(0x10036eb6u); f_100379e6();
  /* 10036eb6 fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 10036eb8 ret  */
  ESPCHK(0x10036ea2u, _esp0);
  ESP += 4; return;
}

/* FUN_10006eba @ 0x10036eba (56 bytes, 8 insns) */
void f_10036eba(void) {
  FTRACE(0x10036ebau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10036eba mov eax, 0x10037e0f */
  EAX = (0x10037e0fu);
  /* 10036ebf mov dword ptr [0x1004066c], 0x10037ab9 */
  w32((uint32_t)(0x1004066c), (0x10037ab9u));
  /* 10036ec9 mov dword ptr [0x10040668], eax */
  w32((uint32_t)(0x10040668), (EAX));
  /* 10036ece mov dword ptr [0x10040670], 0x10037b1f */
  w32((uint32_t)(0x10040670), (0x10037b1fu));
  /* 10036ed8 mov dword ptr [0x10040674], 0x10037a5f */
  w32((uint32_t)(0x10040674), (0x10037a5fu));
  /* 10036ee2 mov dword ptr [0x10040678], 0x10037b07 */
  w32((uint32_t)(0x10040678), (0x10037b07u));
  /* 10036eec mov dword ptr [0x1004067c], eax */
  w32((uint32_t)(0x1004067c), (EAX));
  /* 10036ef1 ret  */
  ESPCHK(0x10036ebau, _esp0);
  ESP += 4; return;
}

/* __ftol @ 0x10036ef4 (39 bytes, 16 insns) */
void f_10036ef4(void) {
  FTRACE(0x10036ef4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10036ef4 push ebp */
  push32((uint32_t)(EBP));
  /* 10036ef5 mov ebp, esp */
  EBP = (ESP);
  /* 10036ef7 add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10036efa wait  */
  /* wait (no observable integer/reg state) */
  /* 10036efb fnstcw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), C.fcw);
  /* 10036efe wait  */
  /* wait (no observable integer/reg state) */
  /* 10036eff mov ax, word ptr [ebp - 2] */
  AX = (r16((uint32_t)(EBP + -0x2)));
  /* 10036f03 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 10036f06 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10036f0a fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 10036f0d fistp qword ptr [ebp - 0xc] */
  { int64_t _q=fpu_to_i64(FPU_ST(0)); w32((uint32_t)(EBP + -0xc),(uint32_t)_q); w32((uint32_t)(EBP + -0xc)+4,(uint32_t)((uint64_t)_q>>32)); }
  (void)fpu_pop();
  /* 10036f10 fldcw word ptr [ebp - 2] */
  C.fcw = r16((uint32_t)(EBP + -0x2));
  /* 10036f13 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10036f16 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10036f19 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10036f1a ret  */
  ESPCHK(0x10036ef4u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f1b @ 0x10036f1b (217 bytes, 57 insns) */
void f_10036f1b(void) {
  FTRACE(0x10036f1bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10036f1b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10036f1f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10036f22 jne 0x10036fb0 */
  if (!C.zf) goto L_10036fb0;
  /* 10036f28 call dword ptr [0x1003e014] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e014))), 0x10036f2eu);
  /* 10036f2e push 1 */
  push32((uint32_t)(0x1u));
  /* 10036f30 mov dword ptr [0x1004664c], eax */
  w32((uint32_t)(0x1004664c), (EAX));
  /* 10036f35 call 0x100388ec */
  push32(0x10036f3au); f_100388ec();
  /* 10036f3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10036f3c pop ecx */
  ECX = (pop32());
  /* 10036f3d je 0x10036f7b */
  if (C.zf) goto L_10036f7b;
  /* 10036f3f mov eax, dword ptr [0x1004664c] */
  EAX = (r32((uint32_t)(0x1004664c)));
  /* 10036f44 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10036f46 mov cl, byte ptr [0x1004664d] */
  CL = (r8((uint32_t)(0x1004664d)));
  /* 10036f4c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10036f51 shr dword ptr [0x1004664c], 0x10 */
  w32((uint32_t)(0x1004664c), (sh_shr((uint32_t)(r32((uint32_t)(0x1004664c))), (0x10u)&0x1f, 32)));
  /* 10036f58 mov dword ptr [0x10046654], eax */
  w32((uint32_t)(0x10046654), (EAX));
  /* 10036f5d mov dword ptr [0x10046658], ecx */
  w32((uint32_t)(0x10046658), (ECX));
  /* 10036f63 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10036f66 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10036f68 mov dword ptr [0x10046650], eax */
  w32((uint32_t)(0x10046650), (EAX));
  /* 10036f6d call 0x10037fa3 */
  push32(0x10036f72u); f_10037fa3();
  /* 10036f72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10036f74 jne 0x10036f7f */
  if (!C.zf) goto L_10036f7f;
  /* 10036f76 call 0x10038949 */
  push32(0x10036f7bu); f_10038949();
L_10036f7b:;
  /* 10036f7b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10036f7d jmp 0x10036ff1 */
  goto L_10036ff1;
L_10036f7f:;
  /* 10036f7f call dword ptr [0x1003e010] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e010))), 0x10036f85u);
  /* 10036f85 mov dword ptr [0x10047d34], eax */
  w32((uint32_t)(0x10047d34), (EAX));
  /* 10036f8a call 0x10038645 */
  push32(0x10036f8fu); f_10038645();
  /* 10036f8f mov dword ptr [0x10046638], eax */
  w32((uint32_t)(0x10046638), (EAX));
  /* 10036f94 call 0x1003812f */
  push32(0x10036f99u); f_1003812f();
  /* 10036f99 call 0x100383f8 */
  push32(0x10036f9eu); f_100383f8();
  /* 10036f9e call 0x1003833f */
  push32(0x10036fa3u); f_1003833f();
  /* 10036fa3 call 0x10037e85 */
  push32(0x10036fa8u); f_10037e85();
  /* 10036fa8 inc dword ptr [0x10046634] */
  { uint32_t _r=(r32((uint32_t)(0x10046634)))+1; w32((uint32_t)(0x10046634), (_r)); fl_inc(_r,32); }
  /* 10036fae jmp 0x10036fee */
  goto L_10036fee;
L_10036fb0:;
  /* 10036fb0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10036fb2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10036fb4 jne 0x10036fe2 */
  if (!C.zf) goto L_10036fe2;
  /* 10036fb6 cmp dword ptr [0x10046634], ecx */
  { uint32_t _a=(r32((uint32_t)(0x10046634))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10036fbc jle 0x10036f7b */
  if ((C.zf||C.sf!=C.of)) goto L_10036f7b;
  /* 10036fbe dec dword ptr [0x10046634] */
  { uint32_t _r=(r32((uint32_t)(0x10046634)))-1; w32((uint32_t)(0x10046634), (_r)); fl_dec(_r,32); }
  /* 10036fc4 cmp dword ptr [0x10046684], ecx */
  { uint32_t _a=(r32((uint32_t)(0x10046684))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10036fca jne 0x10036fd1 */
  if (!C.zf) goto L_10036fd1;
  /* 10036fcc call 0x10037ec3 */
  push32(0x10036fd1u); f_10037ec3();
L_10036fd1:;
  /* 10036fd1 call 0x100382eb */
  push32(0x10036fd6u); f_100382eb();
  /* 10036fd6 call 0x10037ff7 */
  push32(0x10036fdbu); f_10037ff7();
  /* 10036fdb call 0x10038949 */
  push32(0x10036fe0u); f_10038949();
  /* 10036fe0 jmp 0x10036fee */
  goto L_10036fee;
L_10036fe2:;
  /* 10036fe2 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10036fe5 jne 0x10036fee */
  if (!C.zf) goto L_10036fee;
  /* 10036fe7 push ecx */
  push32((uint32_t)(ECX));
  /* 10036fe8 call 0x1003808f */
  push32(0x10036fedu); f_1003808f();
  /* 10036fed pop ecx */
  ECX = (pop32());
L_10036fee:;
  /* 10036fee push 1 */
  push32((uint32_t)(0x1u));
  /* 10036ff0 pop eax */
  EAX = (pop32());
L_10036ff1:;
  /* 10036ff1 ret 0xc */
  ESPCHK(0x10036f1bu, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10036ff4 (157 bytes, 73 insns) */
void f_10036ff4(void) {
  FTRACE(0x10036ff4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10036ff4 push ebp */
  push32((uint32_t)(EBP));
  /* 10036ff5 mov ebp, esp */
  EBP = (ESP);
  /* 10036ff7 push ebx */
  push32((uint32_t)(EBX));
  /* 10036ff8 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10036ffb push esi */
  push32((uint32_t)(ESI));
  /* 10036ffc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10036fff push edi */
  push32((uint32_t)(EDI));
  /* 10037000 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 10037003 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10037005 jne 0x10037010 */
  if (!C.zf) goto L_10037010;
  /* 10037007 cmp dword ptr [0x10046634], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10046634))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003700e jmp 0x10037036 */
  goto L_10037036;
L_10037010:;
  /* 10037010 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037013 je 0x1003701a */
  if (C.zf) goto L_1003701a;
  /* 10037015 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037018 jne 0x1003703c */
  if (!C.zf) goto L_1003703c;
L_1003701a:;
  /* 1003701a mov eax, dword ptr [0x10047d38] */
  EAX = (r32((uint32_t)(0x10047d38)));
  /* 1003701f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10037021 je 0x1003702c */
  if (C.zf) goto L_1003702c;
  /* 10037023 push edi */
  push32((uint32_t)(EDI));
  /* 10037024 push esi */
  push32((uint32_t)(ESI));
  /* 10037025 push ebx */
  push32((uint32_t)(EBX));
  /* 10037026 call eax */
  call_ind((uint32_t)(EAX), 0x10037028u);
  /* 10037028 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003702a je 0x10037038 */
  if (C.zf) goto L_10037038;
L_1003702c:;
  /* 1003702c push edi */
  push32((uint32_t)(EDI));
  /* 1003702d push esi */
  push32((uint32_t)(ESI));
  /* 1003702e push ebx */
  push32((uint32_t)(EBX));
  /* 1003702f call 0x10036f1b */
  push32(0x10037034u); f_10036f1b();
  /* 10037034 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_10037036:;
  /* 10037036 jne 0x1003703c */
  if (!C.zf) goto L_1003703c;
L_10037038:;
  /* 10037038 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1003703a jmp 0x1003708a */
  goto L_1003708a;
L_1003703c:;
  /* 1003703c push edi */
  push32((uint32_t)(EDI));
  /* 1003703d push esi */
  push32((uint32_t)(ESI));
  /* 1003703e push ebx */
  push32((uint32_t)(EBX));
  /* 1003703f call 0x100327d0 */
  push32(0x10037044u); f_100327d0();
  /* 10037044 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037047 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1003704a jne 0x10037058 */
  if (!C.zf) goto L_10037058;
  /* 1003704c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003704e jne 0x10037087 */
  if (!C.zf) goto L_10037087;
  /* 10037050 push edi */
  push32((uint32_t)(EDI));
  /* 10037051 push eax */
  push32((uint32_t)(EAX));
  /* 10037052 push ebx */
  push32((uint32_t)(EBX));
  /* 10037053 call 0x10036f1b */
  push32(0x10037058u); f_10036f1b();
L_10037058:;
  /* 10037058 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1003705a je 0x10037061 */
  if (C.zf) goto L_10037061;
  /* 1003705c cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003705f jne 0x10037087 */
  if (!C.zf) goto L_10037087;
L_10037061:;
  /* 10037061 push edi */
  push32((uint32_t)(EDI));
  /* 10037062 push esi */
  push32((uint32_t)(ESI));
  /* 10037063 push ebx */
  push32((uint32_t)(EBX));
  /* 10037064 call 0x10036f1b */
  push32(0x10037069u); f_10036f1b();
  /* 10037069 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003706b jne 0x10037070 */
  if (!C.zf) goto L_10037070;
  /* 1003706d and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_10037070:;
  /* 10037070 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037074 je 0x10037087 */
  if (C.zf) goto L_10037087;
  /* 10037076 mov eax, dword ptr [0x10047d38] */
  EAX = (r32((uint32_t)(0x10047d38)));
  /* 1003707b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003707d je 0x10037087 */
  if (C.zf) goto L_10037087;
  /* 1003707f push edi */
  push32((uint32_t)(EDI));
  /* 10037080 push esi */
  push32((uint32_t)(ESI));
  /* 10037081 push ebx */
  push32((uint32_t)(EBX));
  /* 10037082 call eax */
  call_ind((uint32_t)(EAX), 0x10037084u);
  /* 10037084 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10037087:;
  /* 10037087 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1003708a:;
  /* 1003708a pop edi */
  EDI = (pop32());
  /* 1003708b pop esi */
  ESI = (pop32());
  /* 1003708c pop ebx */
  EBX = (pop32());
  /* 1003708d pop ebp */
  EBP = (pop32());
  /* 1003708e ret 0xc */
  ESPCHK(0x10036ff4u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10037091 (48 bytes, 15 insns) */
void f_10037091(void) {
  FTRACE(0x10037091u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10037091 mov eax, dword ptr [0x10046640] */
  EAX = (r32((uint32_t)(0x10046640)));
  /* 10037096 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037099 je 0x100370a8 */
  if (C.zf) goto L_100370a8;
  /* 1003709b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003709d jne 0x100370ad */
  if (!C.zf) goto L_100370ad;
  /* 1003709f cmp dword ptr [0x10046644], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10046644))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100370a6 jne 0x100370ad */
  if (!C.zf) goto L_100370ad;
L_100370a8:;
  /* 100370a8 call 0x100389f1 */
  push32(0x100370adu); f_100389f1();
L_100370ad:;
  /* 100370ad push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 100370b1 call 0x10038a2a */
  push32(0x100370b6u); f_10038a2a();
  /* 100370b6 push 0xff */
  push32((uint32_t)(0xffu));
  /* 100370bb call dword ptr [0x1004065c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004065c))), 0x100370c1u);
  /* 100370c1 pop ecx */
  ECX = (pop32());
  /* 100370c2 pop ecx */
  ECX = (pop32());
  /* 100370c3 ret  */
  ESPCHK(0x10037091u, _esp0);
  ESP += 4; return;
}

/* FUN_100070c4 @ 0x100370c4 (280 bytes, 106 insns) */
void f_100370c4(void) {
  FTRACE(0x100370c4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100370c4 push ebp */
  push32((uint32_t)(EBP));
  /* 100370c5 mov ebp, esp */
  EBP = (ESP);
  /* 100370c7 push ebx */
  push32((uint32_t)(EBX));
  /* 100370c8 push esi */
  push32((uint32_t)(ESI));
  /* 100370c9 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 100370cc mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 100370cf mov ebx, dword ptr [esi + 0x10] */
  EBX = (r32((uint32_t)(ESI + 0x10)));
  /* 100370d2 test al, 0x82 */
  { uint32_t _r=(AL)&(0x82u); fl_logic(_r,8); }
  /* 100370d4 je 0x100371d0 */
  if (C.zf) goto L_100371d0;
  /* 100370da test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 100370dc jne 0x100371d0 */
  if (!C.zf) goto L_100371d0;
  /* 100370e2 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 100370e4 je 0x100370fc */
  if (C.zf) goto L_100370fc;
  /* 100370e6 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 100370ea test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 100370ec je 0x100371d0 */
  if (C.zf) goto L_100371d0;
  /* 100370f2 mov ecx, dword ptr [esi + 8] */
  ECX = (r32((uint32_t)(ESI + 0x8)));
  /* 100370f5 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 100370f7 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 100370f9 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_100370fc:;
  /* 100370fc mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 100370ff and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10037103 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 10037107 and al, 0xef */
  { uint32_t _r=(AL)&(0xefu); AL = (_r); fl_logic(_r,8); }
  /* 10037109 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1003710b test ax, 0x10c */
  { uint32_t _r=(AX)&(0x10cu); fl_logic(_r,16); }
  /* 1003710f mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 10037112 jne 0x10037136 */
  if (!C.zf) goto L_10037136;
  /* 10037114 cmp esi, 0x10040760 */
  { uint32_t _a=(ESI),_b=(0x10040760u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003711a je 0x10037124 */
  if (C.zf) goto L_10037124;
  /* 1003711c cmp esi, 0x10040780 */
  { uint32_t _a=(ESI),_b=(0x10040780u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037122 jne 0x1003712f */
  if (!C.zf) goto L_1003712f;
L_10037124:;
  /* 10037124 push ebx */
  push32((uint32_t)(EBX));
  /* 10037125 call 0x10038e89 */
  push32(0x1003712au); f_10038e89();
  /* 1003712a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003712c pop ecx */
  ECX = (pop32());
  /* 1003712d jne 0x10037136 */
  if (!C.zf) goto L_10037136;
L_1003712f:;
  /* 1003712f push esi */
  push32((uint32_t)(ESI));
  /* 10037130 call 0x10038e45 */
  push32(0x10037135u); f_10038e45();
  /* 10037135 pop ecx */
  ECX = (pop32());
L_10037136:;
  /* 10037136 test word ptr [esi + 0xc], 0x108 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0x108u); fl_logic(_r,16); }
  /* 1003713c push edi */
  push32((uint32_t)(EDI));
  /* 1003713d je 0x100371a6 */
  if (C.zf) goto L_100371a6;
  /* 1003713f mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 10037142 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 10037144 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10037146 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 10037149 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1003714b mov ecx, dword ptr [esi + 0x18] */
  ECX = (r32((uint32_t)(ESI + 0x18)));
  /* 1003714e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1003714f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10037151 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 10037154 jle 0x10037166 */
  if ((C.zf||C.sf!=C.of)) goto L_10037166;
  /* 10037156 push edi */
  push32((uint32_t)(EDI));
  /* 10037157 push eax */
  push32((uint32_t)(EAX));
  /* 10037158 push ebx */
  push32((uint32_t)(EBX));
  /* 10037159 call 0x10038c55 */
  push32(0x1003715eu); f_10038c55();
  /* 1003715e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10037161 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10037164 jmp 0x1003719c */
  goto L_1003719c;
L_10037166:;
  /* 10037166 cmp ebx, -1 */
  { uint32_t _a=(EBX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037169 je 0x10037184 */
  if (C.zf) goto L_10037184;
  /* 1003716b mov ecx, ebx */
  ECX = (EBX);
  /* 1003716d mov eax, ebx */
  EAX = (EBX);
  /* 1003716f sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10037172 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10037175 mov ecx, dword ptr [ecx*4 + 0x10047c20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10047c20)));
  /* 1003717c lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1003717f lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 10037182 jmp 0x10037189 */
  goto L_10037189;
L_10037184:;
  /* 10037184 mov eax, 0x10040688 */
  EAX = (0x10040688u);
L_10037189:;
  /* 10037189 test byte ptr [eax + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 1003718d je 0x1003719c */
  if (C.zf) goto L_1003719c;
  /* 1003718f push 2 */
  push32((uint32_t)(0x2u));
  /* 10037191 push 0 */
  push32((uint32_t)(0x0u));
  /* 10037193 push ebx */
  push32((uint32_t)(EBX));
  /* 10037194 call 0x10038b7d */
  push32(0x10037199u); f_10038b7d();
  /* 10037199 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1003719c:;
  /* 1003719c mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1003719f mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 100371a2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 100371a4 jmp 0x100371ba */
  goto L_100371ba;
L_100371a6:;
  /* 100371a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 100371a8 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 100371ab pop edi */
  EDI = (pop32());
  /* 100371ac push edi */
  push32((uint32_t)(EDI));
  /* 100371ad push eax */
  push32((uint32_t)(EAX));
  /* 100371ae push ebx */
  push32((uint32_t)(EBX));
  /* 100371af call 0x10038c55 */
  push32(0x100371b4u); f_10038c55();
  /* 100371b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100371b7 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_100371ba:;
  /* 100371ba cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100371bd pop edi */
  EDI = (pop32());
  /* 100371be je 0x100371c6 */
  if (C.zf) goto L_100371c6;
  /* 100371c0 or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 100371c4 jmp 0x100371d5 */
  goto L_100371d5;
L_100371c6:;
  /* 100371c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100371c9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 100371ce jmp 0x100371d8 */
  goto L_100371d8;
L_100371d0:;
  /* 100371d0 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 100371d2 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_100371d5:;
  /* 100371d5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_100371d8:;
  /* 100371d8 pop esi */
  ESI = (pop32());
  /* 100371d9 pop ebx */
  EBX = (pop32());
  /* 100371da pop ebp */
  EBP = (pop32());
  /* 100371db ret  */
  ESPCHK(0x100370c4u, _esp0);
  ESP += 4; return;
}

/* FUN_100071dc @ 0x100371dc (1825 bytes, 595 insns) [1 switch table(s)] */
void f_100371dc(void) {
  FTRACE(0x100371dcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100371dc push ebp */
  push32((uint32_t)(EBP));
  /* 100371dd mov ebp, esp */
  EBP = (ESP);
  /* 100371df sub esp, 0x248 */
  { uint32_t _a=(ESP),_b=(0x248u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100371e5 push ebx */
  push32((uint32_t)(EBX));
  /* 100371e6 push esi */
  push32((uint32_t)(ESI));
  /* 100371e7 push edi */
  push32((uint32_t)(EDI));
  /* 100371e8 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 100371eb xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100371ed mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100371ef inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100371f0 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 100371f2 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 100371f5 mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 100371f8 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 100371fb je 0x100378f5 */
  if (C.zf) goto L_100378f5;
  /* 10037201 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10037204 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10037206 jmp 0x10037210 */
  goto L_10037210;
L_10037208:;
  /* 10037208 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1003720b mov esi, dword ptr [ebp - 0x30] */
  ESI = (r32((uint32_t)(EBP + -0x30)));
  /* 1003720e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_10037210:;
  /* 10037210 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037213 jl 0x100378f5 */
  if ((C.sf!=C.of)) goto L_100378f5;
  /* 10037219 cmp bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003721c jl 0x10037231 */
  if ((C.sf!=C.of)) goto L_10037231;
  /* 1003721e cmp bl, 0x78 */
  { uint32_t _a=(BL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10037221 jg 0x10037231 */
  if ((!C.zf&&C.sf==C.of)) goto L_10037231;
  /* 10037223 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10037226 mov al, byte ptr [eax + 0x1003e0c8] */
  AL = (r8((uint32_t)(EAX + 0x1003e0c8)));
  /* 1003722c and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1003722f jmp 0x10037233 */
  goto L_10037233;
L_10037231:;
  /* 10037231 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10037233:;
  /* 10037233 movsx eax, byte ptr [esi + eax*8 + 0x1003e0e8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI + EAX*8 + 0x1003e0e8))));
  /* 1003723b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1003723e cmp eax, 7 */
  { uint32_t _a=(EAX),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037241 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10037244 ja 0x100378e4 */
  if ((!C.cf&&!C.zf)) goto L_100378e4;
  /* 1003724a jmp dword ptr [eax*4 + 0x100378fd] */
  switch (EAX) {
    case 0: goto L_1003737b;
    case 1: goto L_10037251;
    case 2: goto L_1003726c;
    case 3: goto L_100372b8;
    case 4: goto L_100372ef;
    case 5: goto L_100372f7;
    case 6: goto L_1003732c;
    case 7: goto L_100373bf;
    default: x86_unimpl("switch@0x1003724a out of table"); return;
  }
L_10037251:;
  /* 10037251 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 10037255 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10037258 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1003725b mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1003725e mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10037261 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10037264 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10037267 jmp 0x100378e4 */
  goto L_100378e4;
L_1003726c:;
  /* 1003726c movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1003726f sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10037272 je 0x100372af */
  if (C.zf) goto L_100372af;
  /* 10037274 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10037277 je 0x100372a6 */
  if (C.zf) goto L_100372a6;
  /* 10037279 sub eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003727c je 0x1003729d */
  if (C.zf) goto L_1003729d;
  /* 1003727e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1003727f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10037280 je 0x10037294 */
  if (C.zf) goto L_10037294;
  /* 10037282 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10037285 jne 0x100378e4 */
  if (!C.zf) goto L_100378e4;
  /* 1003728b or dword ptr [ebp - 4], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x8u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1003728f jmp 0x100378e4 */
  goto L_100378e4;
L_10037294:;
  /* 10037294 or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10037298 jmp 0x100378e4 */
  goto L_100378e4;
L_1003729d:;
  /* 1003729d or dword ptr [ebp - 4], 1 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x1u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100372a1 jmp 0x100378e4 */
  goto L_100378e4;
L_100372a6:;
  /* 100372a6 or byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))|(0x80u); w8((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,8); }
  /* 100372aa jmp 0x100378e4 */
  goto L_100378e4;
L_100372af:;
  /* 100372af or dword ptr [ebp - 4], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x2u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100372b3 jmp 0x100378e4 */
  goto L_100378e4;
L_100372b8:;
  /* 100372b8 cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100372bb jne 0x100372e0 */
  if (!C.zf) goto L_100372e0;
  /* 100372bd lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100372c0 push eax */
  push32((uint32_t)(EAX));
  /* 100372c1 call 0x100379bb */
  push32(0x100372c6u); f_100379bb();
  /* 100372c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100372c8 pop ecx */
  ECX = (pop32());
  /* 100372c9 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 100372cc jge 0x100378e4 */
  if ((C.sf==C.of)) goto L_100378e4;
  /* 100372d2 or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100372d6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_100372d8:;
  /* 100372d8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 100372db jmp 0x100378e4 */
  goto L_100378e4;
L_100372e0:;
  /* 100372e0 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 100372e3 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100372e6 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 100372e9 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 100372ed jmp 0x100372d8 */
  goto L_100372d8;
L_100372ef:;
  /* 100372ef mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 100372f2 jmp 0x100378e4 */
  goto L_100378e4;
L_100372f7:;
  /* 100372f7 cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100372fa jne 0x1003731a */
  if (!C.zf) goto L_1003731a;
  /* 100372fc lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100372ff push eax */
  push32((uint32_t)(EAX));
  /* 10037300 call 0x100379bb */
  push32(0x10037305u); f_100379bb();
  /* 10037305 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10037307 pop ecx */
  ECX = (pop32());
  /* 10037308 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1003730b jge 0x100378e4 */
  if ((C.sf==C.of)) goto L_100378e4;
  /* 10037311 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 10037315 jmp 0x100378e4 */
  goto L_100378e4;
L_1003731a:;
  /* 1003731a lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 1003731d movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10037320 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 10037324 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10037327 jmp 0x100378e4 */
  goto L_100378e4;
L_1003732c:;
  /* 1003732c cmp bl, 0x49 */
  { uint32_t _a=(BL),_b=(0x49u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003732f je 0x1003735f */
  if (C.zf) goto L_1003735f;
  /* 10037331 cmp bl, 0x68 */
  { uint32_t _a=(BL),_b=(0x68u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10037334 je 0x10037356 */
  if (C.zf) goto L_10037356;
  /* 10037336 cmp bl, 0x6c */
  { uint32_t _a=(BL),_b=(0x6cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10037339 je 0x1003734d */
  if (C.zf) goto L_1003734d;
  /* 1003733b cmp bl, 0x77 */
  { uint32_t _a=(BL),_b=(0x77u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003733e jne 0x100378e4 */
  if (!C.zf) goto L_100378e4;
  /* 10037344 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10037348 jmp 0x100378e4 */
  goto L_100378e4;
L_1003734d:;
  /* 1003734d or dword ptr [ebp - 4], 0x10 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x10u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10037351 jmp 0x100378e4 */
  goto L_100378e4;
L_10037356:;
  /* 10037356 or dword ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x20u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1003735a jmp 0x100378e4 */
  goto L_100378e4;
L_1003735f:;
  /* 1003735f cmp byte ptr [edi], 0x36 */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10037362 jne 0x10037378 */
  if (!C.zf) goto L_10037378;
  /* 10037364 cmp byte ptr [edi + 1], 0x34 */
  { uint32_t _a=(r8((uint32_t)(EDI + 0x1))),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10037368 jne 0x10037378 */
  if (!C.zf) goto L_10037378;
  /* 1003736a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1003736b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1003736c or byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x80u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10037370 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 10037373 jmp 0x100378e4 */
  goto L_100378e4;
L_10037378:;
  /* 10037378 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_1003737b:;
  /* 1003737b mov ecx, dword ptr [0x100409c0] */
  ECX = (r32((uint32_t)(0x100409c0)));
  /* 10037381 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10037384 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 10037387 test byte ptr [ecx + eax*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 1003738c je 0x100373a7 */
  if (C.zf) goto L_100373a7;
  /* 1003738e lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10037391 push eax */
  push32((uint32_t)(EAX));
  /* 10037392 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10037395 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10037398 push eax */
  push32((uint32_t)(EAX));
  /* 10037399 call 0x1003791d */
  push32(0x1003739eu); f_1003791d();
  /* 1003739e mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100373a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100373a3 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100373a4 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_100373a7:;
  /* 100373a7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100373aa push eax */
  push32((uint32_t)(EAX));
  /* 100373ab push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100373ae movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100373b1 push eax */
  push32((uint32_t)(EAX));
  /* 100373b2 call 0x1003791d */
  push32(0x100373b7u); f_1003791d();
  /* 100373b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100373ba jmp 0x100378e4 */
  goto L_100378e4;
L_100373bf:;
  /* 100373bf movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100373c2 cmp eax, 0x67 */
  { uint32_t _a=(EAX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100373c5 jg 0x100375e7 */
  if ((!C.zf&&C.sf==C.of)) goto L_100375e7;
  /* 100373cb cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100373ce jge 0x1003746a */
  if ((C.sf==C.of)) goto L_1003746a;
  /* 100373d4 cmp eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100373d7 jg 0x100374c8 */
  if ((!C.zf&&C.sf==C.of)) goto L_100374c8;
  /* 100373dd je 0x1003765b */
  if (C.zf) goto L_1003765b;
  /* 100373e3 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100373e6 je 0x1003748b */
  if (C.zf) goto L_1003748b;
  /* 100373ec dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100373ed dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100373ee je 0x10037460 */
  if (C.zf) goto L_10037460;
  /* 100373f0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100373f1 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100373f2 je 0x10037460 */
  if (C.zf) goto L_10037460;
  /* 100373f4 sub eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100373f7 jne 0x100377e6 */
  if (!C.zf) goto L_100377e6;
  /* 100373fd test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 10037403 jne 0x10037409 */
  if (!C.zf) goto L_10037409;
  /* 10037405 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_10037409:;
  /* 10037409 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 1003740c cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003740f jne 0x10037416 */
  if (!C.zf) goto L_10037416;
  /* 10037411 mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
L_10037416:;
  /* 10037416 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10037419 push eax */
  push32((uint32_t)(EAX));
  /* 1003741a call 0x100379bb */
  push32(0x1003741fu); f_100379bb();
  /* 1003741f test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 10037425 pop ecx */
  ECX = (pop32());
  /* 10037426 mov ecx, eax */
  ECX = (EAX);
  /* 10037428 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1003742b je 0x1003762f */
  if (C.zf) goto L_1003762f;
  /* 10037431 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10037433 jne 0x1003743e */
  if (!C.zf) goto L_1003743e;
  /* 10037435 mov ecx, dword ptr [0x10040664] */
  ECX = (r32((uint32_t)(0x10040664)));
  /* 1003743b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1003743e:;
  /* 1003743e mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10037445 mov eax, ecx */
  EAX = (ECX);
L_10037447:;
  /* 10037447 mov edx, esi */
  EDX = (ESI);
  /* 10037449 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1003744a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1003744c je 0x10037626 */
  if (C.zf) goto L_10037626;
  /* 10037452 cmp word ptr [eax], 0 */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10037456 je 0x10037626 */
  if (C.zf) goto L_10037626;
  /* 1003745c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1003745d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1003745e jmp 0x10037447 */
  goto L_10037447;
L_10037460:;
  /* 10037460 mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 10037467 add bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a+_b; BL = (_r); fl_add(_a,_b,_r,8); }
L_1003746a:;
  /* 1003746a or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1003746e lea edi, [ebp - 0x248] */
  EDI = ((uint32_t)(EBP + -0x248));
  /* 10037474 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037476 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 10037479 jge 0x1003754e */
  if ((C.sf==C.of)) goto L_1003754e;
  /* 1003747f mov dword ptr [ebp - 0x10], 6 */
  w32((uint32_t)(EBP + -0x10), (0x6u));
  /* 10037486 jmp 0x1003755c */
  goto L_1003755c;
L_1003748b:;
  /* 1003748b test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 10037491 jne 0x10037497 */
  if (!C.zf) goto L_10037497;
  /* 10037493 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_10037497:;
  /* 10037497 test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 1003749d lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100374a0 push eax */
  push32((uint32_t)(EAX));
  /* 100374a1 je 0x100374de */
  if (C.zf) goto L_100374de;
  /* 100374a3 call 0x100379d8 */
  push32(0x100374a8u); f_100379d8();
  /* 100374a8 push eax */
  push32((uint32_t)(EAX));
  /* 100374a9 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 100374af push eax */
  push32((uint32_t)(EAX));
  /* 100374b0 call 0x1003909b */
  push32(0x100374b5u); f_1003909b();
  /* 100374b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100374b8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 100374bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100374bd jge 0x100374f1 */
  if ((C.sf==C.of)) goto L_100374f1;
  /* 100374bf mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 100374c6 jmp 0x100374f1 */
  goto L_100374f1;
L_100374c8:;
  /* 100374c8 sub eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100374cb je 0x100374ff */
  if (C.zf) goto L_100374ff;
  /* 100374cd sub eax, 9 */
  { uint32_t _a=(EAX),_b=(0x9u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100374d0 je 0x10037497 */
  if (C.zf) goto L_10037497;
  /* 100374d2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100374d3 je 0x100376c1 */
  if (C.zf) goto L_100376c1;
  /* 100374d9 jmp 0x100377e6 */
  goto L_100377e6;
L_100374de:;
  /* 100374de call 0x100379bb */
  push32(0x100374e3u); f_100379bb();
  /* 100374e3 pop ecx */
  ECX = (pop32());
  /* 100374e4 mov byte ptr [ebp - 0x248], al */
  w8((uint32_t)(EBP + -0x248), (AL));
  /* 100374ea mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_100374f1:;
  /* 100374f1 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 100374f7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 100374fa jmp 0x100377e6 */
  goto L_100377e6;
L_100374ff:;
  /* 100374ff lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10037502 push eax */
  push32((uint32_t)(EAX));
  /* 10037503 call 0x100379bb */
  push32(0x10037508u); f_100379bb();
  /* 10037508 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003750a pop ecx */
  ECX = (pop32());
  /* 1003750b je 0x10037540 */
  if (C.zf) goto L_10037540;
  /* 1003750d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10037510 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10037512 je 0x10037540 */
  if (C.zf) goto L_10037540;
  /* 10037514 test byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x8u); fl_logic(_r,8); }
  /* 10037518 je 0x10037531 */
  if (C.zf) goto L_10037531;
  /* 1003751a movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 1003751d shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1003751f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10037522 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10037525 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1003752c jmp 0x100377e6 */
  goto L_100377e6;
L_10037531:;
  /* 10037531 and dword ptr [ebp - 0x24], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x24)))&(0x0u); w32((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,32); }
  /* 10037535 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10037538 movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 1003753b jmp 0x100377e3 */
  goto L_100377e3;
L_10037540:;
  /* 10037540 mov eax, dword ptr [0x10040660] */
  EAX = (r32((uint32_t)(0x10040660)));
  /* 10037545 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10037548 push eax */
  push32((uint32_t)(EAX));
  /* 10037549 jmp 0x100375dc */
  goto L_100375dc;
L_1003754e:;
  /* 1003754e jne 0x1003755c */
  if (!C.zf) goto L_1003755c;
  /* 10037550 cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10037553 jne 0x1003755c */
  if (!C.zf) goto L_1003755c;
  /* 10037555 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1003755c:;
  /* 1003755c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1003755f push dword ptr [ebp - 0x34] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x34))));
  /* 10037562 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10037565 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10037568 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 1003756b mov ecx, dword ptr [eax - 8] */
  ECX = (r32((uint32_t)(EAX + -0x8)));
  /* 1003756e mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
  /* 10037571 mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 10037574 mov dword ptr [ebp - 0x44], eax */
  w32((uint32_t)(EBP + -0x44), (EAX));
  /* 10037577 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1003757a push eax */
  push32((uint32_t)(EAX));
  /* 1003757b lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 10037581 push eax */
  push32((uint32_t)(EAX));
  /* 10037582 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 10037585 push eax */
  push32((uint32_t)(EAX));
  /* 10037586 call dword ptr [0x10040668] */
  call_ind((uint32_t)(r32((uint32_t)(0x10040668))), 0x1003758cu);
  /* 1003758c mov esi, dword ptr [ebp - 4] */
  ESI = (r32((uint32_t)(EBP + -0x4)));
  /* 1003758f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10037592 and esi, 0x80 */
  { uint32_t _r=(ESI)&(0x80u); ESI = (_r); fl_logic(_r,32); }
  /* 10037598 je 0x100375ae */
  if (C.zf) goto L_100375ae;
  /* 1003759a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003759e jne 0x100375ae */
  if (!C.zf) goto L_100375ae;
  /* 100375a0 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 100375a6 push eax */
  push32((uint32_t)(EAX));
  /* 100375a7 call dword ptr [0x10040674] */
  call_ind((uint32_t)(r32((uint32_t)(0x10040674))), 0x100375adu);
  /* 100375ad pop ecx */
  ECX = (pop32());
L_100375ae:;
  /* 100375ae cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100375b1 jne 0x100375c5 */
  if (!C.zf) goto L_100375c5;
  /* 100375b3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100375b5 jne 0x100375c5 */
  if (!C.zf) goto L_100375c5;
  /* 100375b7 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 100375bd push eax */
  push32((uint32_t)(EAX));
  /* 100375be call dword ptr [0x1004066c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1004066c))), 0x100375c4u);
  /* 100375c4 pop ecx */
  ECX = (pop32());
L_100375c5:;
  /* 100375c5 cmp byte ptr [ebp - 0x248], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x248))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100375cc jne 0x100375db */
  if (!C.zf) goto L_100375db;
  /* 100375ce or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 100375d2 lea edi, [ebp - 0x247] */
  EDI = ((uint32_t)(EBP + -0x247));
  /* 100375d8 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
L_100375db:;
  /* 100375db push edi */
  push32((uint32_t)(EDI));
L_100375dc:;
  /* 100375dc call 0x10039020 */
  push32(0x100375e1u); f_10039020();
  /* 100375e1 pop ecx */
  ECX = (pop32());
  /* 100375e2 jmp 0x100377e3 */
  goto L_100377e3;
L_100375e7:;
  /* 100375e7 sub eax, 0x69 */
  { uint32_t _a=(EAX),_b=(0x69u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100375ea je 0x100376c1 */
  if (C.zf) goto L_100376c1;
  /* 100375f0 sub eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100375f3 je 0x10037697 */
  if (C.zf) goto L_10037697;
  /* 100375f9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100375fa je 0x10037684 */
  if (C.zf) goto L_10037684;
  /* 10037600 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10037601 je 0x10037654 */
  if (C.zf) goto L_10037654;
  /* 10037603 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10037606 je 0x10037409 */
  if (C.zf) goto L_10037409;
  /* 1003760c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1003760d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1003760e je 0x100376c5 */
  if (C.zf) goto L_100376c5;
  /* 10037614 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10037617 jne 0x100377e6 */
  if (!C.zf) goto L_100377e6;
  /* 1003761d mov dword ptr [ebp - 0x2c], 0x27 */
  w32((uint32_t)(EBP + -0x2c), (0x27u));
  /* 10037624 jmp 0x10037662 */
  goto L_10037662;
L_10037626:;
  /* 10037626 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10037628 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1003762a jmp 0x100377e3 */
  goto L_100377e3;
L_1003762f:;
  /* 1003762f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10037631 jne 0x1003763c */
  if (!C.zf) goto L_1003763c;
  /* 10037633 mov ecx, dword ptr [0x10040660] */
  ECX = (r32((uint32_t)(0x10040660)));
  /* 10037639 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1003763c:;
  /* 1003763c mov eax, ecx */
  EAX = (ECX);
L_1003763e:;
  /* 1003763e mov edx, esi */
  EDX = (ESI);
  /* 10037640 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10037641 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10037643 je 0x1003764d */
  if (C.zf) goto L_1003764d;
  /* 10037645 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10037648 je 0x1003764d */
  if (C.zf) goto L_1003764d;
  /* 1003764a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1003764b jmp 0x1003763e */
  goto L_1003763e;
L_1003764d:;
  /* 1003764d sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003764f jmp 0x100377e3 */
  goto L_100377e3;
L_10037654:;
  /* 10037654 mov dword ptr [ebp - 0x10], 8 */
  w32((uint32_t)(EBP + -0x10), (0x8u));
L_1003765b:;
  /* 1003765b mov dword ptr [ebp - 0x2c], 7 */
  w32((uint32_t)(EBP + -0x2c), (0x7u));
L_10037662:;
  /* 10037662 test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 10037666 mov dword ptr [ebp - 0xc], 0x10 */
  w32((uint32_t)(EBP + -0xc), (0x10u));
  /* 1003766d je 0x100376cc */
  if (C.zf) goto L_100376cc;
  /* 1003766f mov al, byte ptr [ebp - 0x2c] */
  AL = (r8((uint32_t)(EBP + -0x2c)));
  /* 10037672 mov byte ptr [ebp - 0x16], 0x30 */
  w8((uint32_t)(EBP + -0x16), (0x30u));
  /* 10037676 add al, 0x51 */
  { uint32_t _a=(AL),_b=(0x51u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10037678 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 1003767f mov byte ptr [ebp - 0x15], al */
  w8((uint32_t)(EBP + -0x15), (AL));
  /* 10037682 jmp 0x100376cc */
  goto L_100376cc;
L_10037684:;
  /* 10037684 test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 10037688 mov dword ptr [ebp - 0xc], 8 */
  w32((uint32_t)(EBP + -0xc), (0x8u));
  /* 1003768f je 0x100376cc */
  if (C.zf) goto L_100376cc;
  /* 10037691 or byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x2u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10037695 jmp 0x100376cc */
  goto L_100376cc;
L_10037697:;
  /* 10037697 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1003769a push eax */
  push32((uint32_t)(EAX));
  /* 1003769b call 0x100379bb */
  push32(0x100376a0u); f_100379bb();
  /* 100376a0 test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 100376a4 pop ecx */
  ECX = (pop32());
  /* 100376a5 je 0x100376b0 */
  if (C.zf) goto L_100376b0;
  /* 100376a7 mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 100376ab mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 100376ae jmp 0x100376b5 */
  goto L_100376b5;
L_100376b0:;
  /* 100376b0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 100376b3 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_100376b5:;
  /* 100376b5 mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 100376bc jmp 0x100378e4 */
  goto L_100378e4;
L_100376c1:;
  /* 100376c1 or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_100376c5:;
  /* 100376c5 mov dword ptr [ebp - 0xc], 0xa */
  w32((uint32_t)(EBP + -0xc), (0xau));
L_100376cc:;
  /* 100376cc test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 100376d0 je 0x100376de */
  if (C.zf) goto L_100376de;
  /* 100376d2 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100376d5 push eax */
  push32((uint32_t)(EAX));
  /* 100376d6 call 0x100379c8 */
  push32(0x100376dbu); f_100379c8();
  /* 100376db pop ecx */
  ECX = (pop32());
  /* 100376dc jmp 0x1003771f */
  goto L_1003771f;
L_100376de:;
  /* 100376de test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 100376e2 je 0x10037705 */
  if (C.zf) goto L_10037705;
  /* 100376e4 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 100376e8 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100376eb push eax */
  push32((uint32_t)(EAX));
  /* 100376ec je 0x100376fa */
  if (C.zf) goto L_100376fa;
  /* 100376ee call 0x100379bb */
  push32(0x100376f3u); f_100379bb();
  /* 100376f3 pop ecx */
  ECX = (pop32());
  /* 100376f4 movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
L_100376f7:;
  /* 100376f7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100376f8 jmp 0x1003771f */
  goto L_1003771f;
L_100376fa:;
  /* 100376fa call 0x100379bb */
  push32(0x100376ffu); f_100379bb();
  /* 100376ff pop ecx */
  ECX = (pop32());
  /* 10037700 movzx eax, ax */
  EAX = ((uint32_t)(AX));
  /* 10037703 jmp 0x100376f7 */
  goto L_100376f7;
L_10037705:;
  /* 10037705 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10037709 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1003770c push eax */
  push32((uint32_t)(EAX));
  /* 1003770d je 0x10037717 */
  if (C.zf) goto L_10037717;
  /* 1003770f call 0x100379bb */
  push32(0x10037714u); f_100379bb();
  /* 10037714 pop ecx */
  ECX = (pop32());
  /* 10037715 jmp 0x100376f7 */
  goto L_100376f7;
L_10037717:;
  /* 10037717 call 0x100379bb */
  push32(0x1003771cu); f_100379bb();
  /* 1003771c pop ecx */
  ECX = (pop32());
  /* 1003771d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_1003771f:;
  /* 1003771f test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10037723 je 0x10037740 */
  if (C.zf) goto L_10037740;
  /* 10037725 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10037727 jg 0x10037740 */
  if ((!C.zf&&C.sf==C.of)) goto L_10037740;
  /* 10037729 jl 0x1003772f */
  if ((C.sf!=C.of)) goto L_1003772f;
  /* 1003772b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003772d jae 0x10037740 */
  if (!C.cf) goto L_10037740;
L_1003772f:;
  /* 1003772f neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10037731 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10037734 mov esi, eax */
  ESI = (EAX);
  /* 10037736 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10037738 or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 1003773c mov edi, edx */
  EDI = (EDX);
  /* 1003773e jmp 0x10037744 */
  goto L_10037744;
L_10037740:;
  /* 10037740 mov esi, eax */
  ESI = (EAX);
  /* 10037742 mov edi, edx */
  EDI = (EDX);
L_10037744:;
  /* 10037744 test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 10037748 jne 0x1003774d */
  if (!C.zf) goto L_1003774d;
  /* 1003774a and edi, 0 */
  { uint32_t _r=(EDI)&(0x0u); EDI = (_r); fl_logic(_r,32); }
L_1003774d:;
  /* 1003774d cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037751 jge 0x1003775c */
  if ((C.sf==C.of)) goto L_1003775c;
  /* 10037753 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1003775a jmp 0x10037760 */
  goto L_10037760;
L_1003775c:;
  /* 1003775c and dword ptr [ebp - 4], 0xfffffff7 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0xfffffff7u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_10037760:;
  /* 10037760 mov eax, esi */
  EAX = (ESI);
  /* 10037762 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 10037764 jne 0x1003776a */
  if (!C.zf) goto L_1003776a;
  /* 10037766 and dword ptr [ebp - 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))&(0x0u); w32((uint32_t)(EBP + -0x1c), (_r)); fl_logic(_r,32); }
L_1003776a:;
  /* 1003776a lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 1003776d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10037770:;
  /* 10037770 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10037773 dec dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))-1; w32((uint32_t)(EBP + -0x10), (_r)); fl_dec(_r,32); }
  /* 10037776 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10037778 jg 0x10037780 */
  if ((!C.zf&&C.sf==C.of)) goto L_10037780;
  /* 1003777a mov eax, esi */
  EAX = (ESI);
  /* 1003777c or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 1003777e je 0x100377bb */
  if (C.zf) goto L_100377bb;
L_10037780:;
  /* 10037780 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10037783 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10037784 push edx */
  push32((uint32_t)(EDX));
  /* 10037785 push eax */
  push32((uint32_t)(EAX));
  /* 10037786 push edi */
  push32((uint32_t)(EDI));
  /* 10037787 push esi */
  push32((uint32_t)(ESI));
  /* 10037788 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 1003778b mov dword ptr [ebp - 0x3c], edx */
  w32((uint32_t)(EBP + -0x3c), (EDX));
  /* 1003778e call 0x100391d0 */
  push32(0x10037793u); f_100391d0();
  /* 10037793 push dword ptr [ebp - 0x3c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x3c))));
  /* 10037796 mov ebx, eax */
  EBX = (EAX);
  /* 10037798 add ebx, 0x30 */
  { uint32_t _a=(EBX),_b=(0x30u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003779b push dword ptr [ebp - 0x40] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x40))));
  /* 1003779e push edi */
  push32((uint32_t)(EDI));
  /* 1003779f push esi */
  push32((uint32_t)(ESI));
  /* 100377a0 call 0x10039160 */
  push32(0x100377a5u); f_10039160();
  /* 100377a5 cmp ebx, 0x39 */
  { uint32_t _a=(EBX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100377a8 mov esi, eax */
  ESI = (EAX);
  /* 100377aa mov edi, edx */
  EDI = (EDX);
  /* 100377ac jle 0x100377b1 */
  if ((C.zf||C.sf!=C.of)) goto L_100377b1;
  /* 100377ae add ebx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
L_100377b1:;
  /* 100377b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 100377b4 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 100377b7 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 100377b9 jmp 0x10037770 */
  goto L_10037770;
L_100377bb:;
  /* 100377bb lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 100377be sub eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100377c1 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 100377c4 test byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x2u); fl_logic(_r,8); }
  /* 100377c8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 100377cb je 0x100377e6 */
  if (C.zf) goto L_100377e6;
  /* 100377cd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 100377d0 cmp byte ptr [ecx], 0x30 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100377d3 jne 0x100377d9 */
  if (!C.zf) goto L_100377d9;
  /* 100377d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100377d7 jne 0x100377e6 */
  if (!C.zf) goto L_100377e6;
L_100377d9:;
  /* 100377d9 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 100377dc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100377dd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 100377e0 mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_100377e3:;
  /* 100377e3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_100377e6:;
  /* 100377e6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100377ea jne 0x100378e4 */
  if (!C.zf) goto L_100378e4;
  /* 100377f0 mov ebx, dword ptr [ebp - 4] */
  EBX = (r32((uint32_t)(EBP + -0x4)));
  /* 100377f3 test bl, 0x40 */
  { uint32_t _r=(BL)&(0x40u); fl_logic(_r,8); }
  /* 100377f6 je 0x1003781e */
  if (C.zf) goto L_1003781e;
  /* 100377f8 test bh, 1 */
  { uint32_t _r=(C.b.b.h)&(0x1u); fl_logic(_r,8); }
  /* 100377fb je 0x10037803 */
  if (C.zf) goto L_10037803;
  /* 100377fd mov byte ptr [ebp - 0x16], 0x2d */
  w8((uint32_t)(EBP + -0x16), (0x2du));
  /* 10037801 jmp 0x10037817 */
  goto L_10037817;
L_10037803:;
  /* 10037803 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 10037806 je 0x1003780e */
  if (C.zf) goto L_1003780e;
  /* 10037808 mov byte ptr [ebp - 0x16], 0x2b */
  w8((uint32_t)(EBP + -0x16), (0x2bu));
  /* 1003780c jmp 0x10037817 */
  goto L_10037817;
L_1003780e:;
  /* 1003780e test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 10037811 je 0x1003781e */
  if (C.zf) goto L_1003781e;
  /* 10037813 mov byte ptr [ebp - 0x16], 0x20 */
  w8((uint32_t)(EBP + -0x16), (0x20u));
L_10037817:;
  /* 10037817 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
L_1003781e:;
  /* 1003781e mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
  /* 10037821 sub esi, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10037824 sub esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10037827 test bl, 0xc */
  { uint32_t _r=(BL)&(0xcu); fl_logic(_r,8); }
  /* 1003782a jne 0x1003783e */
  if (!C.zf) goto L_1003783e;
  /* 1003782c lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1003782f push eax */
  push32((uint32_t)(EAX));
  /* 10037830 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10037833 push esi */
  push32((uint32_t)(ESI));
  /* 10037834 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10037836 call 0x10037952 */
  push32(0x1003783bu); f_10037952();
  /* 1003783b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1003783e:;
  /* 1003783e lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10037841 push eax */
  push32((uint32_t)(EAX));
  /* 10037842 lea eax, [ebp - 0x16] */
  EAX = ((uint32_t)(EBP + -0x16));
  /* 10037845 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10037848 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 1003784b push eax */
  push32((uint32_t)(EAX));
  /* 1003784c call 0x10037983 */
  push32(0x10037851u); f_10037983();
  /* 10037851 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10037854 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 10037857 je 0x10037870 */
  if (C.zf) goto L_10037870;
  /* 10037859 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 1003785c jne 0x10037870 */
  if (!C.zf) goto L_10037870;
  /* 1003785e lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10037861 push eax */
  push32((uint32_t)(EAX));
  /* 10037862 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10037865 push esi */
  push32((uint32_t)(ESI));
  /* 10037866 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10037868 call 0x10037952 */
  push32(0x1003786du); f_10037952();
  /* 1003786d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10037870:;
  /* 10037870 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037874 je 0x100378b7 */
  if (C.zf) goto L_100378b7;
  /* 10037876 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003787a jle 0x100378b7 */
  if ((C.zf||C.sf!=C.of)) goto L_100378b7;
  /* 1003787c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1003787f mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 10037882 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
L_10037885:;
  /* 10037885 mov ax, word ptr [ebx] */
  AX = (r16((uint32_t)(EBX)));
  /* 10037888 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10037889 push eax */
  push32((uint32_t)(EAX));
  /* 1003788a lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 1003788d push eax */
  push32((uint32_t)(EAX));
  /* 1003788e inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1003788f call 0x1003909b */
  push32(0x10037894u); f_1003909b();
  /* 10037894 pop ecx */
  ECX = (pop32());
  /* 10037895 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10037897 pop ecx */
  ECX = (pop32());
  /* 10037898 jle 0x100378cc */
  if ((C.zf||C.sf!=C.of)) goto L_100378cc;
  /* 1003789a lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 1003789d push ecx */
  push32((uint32_t)(ECX));
  /* 1003789e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100378a1 push eax */
  push32((uint32_t)(EAX));
  /* 100378a2 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 100378a5 push eax */
  push32((uint32_t)(EAX));
  /* 100378a6 call 0x10037983 */
  push32(0x100378abu); f_10037983();
  /* 100378ab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100378ae mov eax, edi */
  EAX = (EDI);
  /* 100378b0 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100378b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100378b3 jne 0x10037885 */
  if (!C.zf) goto L_10037885;
  /* 100378b5 jmp 0x100378cc */
  goto L_100378cc;
L_100378b7:;
  /* 100378b7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100378ba push eax */
  push32((uint32_t)(EAX));
  /* 100378bb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100378be push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 100378c1 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 100378c4 call 0x10037983 */
  push32(0x100378c9u); f_10037983();
  /* 100378c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100378cc:;
  /* 100378cc test byte ptr [ebp - 4], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x4u); fl_logic(_r,8); }
  /* 100378d0 je 0x100378e4 */
  if (C.zf) goto L_100378e4;
  /* 100378d2 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100378d5 push eax */
  push32((uint32_t)(EAX));
  /* 100378d6 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100378d9 push esi */
  push32((uint32_t)(ESI));
  /* 100378da push 0x20 */
  push32((uint32_t)(0x20u));
  /* 100378dc call 0x10037952 */
  push32(0x100378e1u); f_10037952();
  /* 100378e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100378e4:;
  /* 100378e4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 100378e7 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100378e9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100378ea test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 100378ec mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 100378ef jne 0x10037208 */
  if (!C.zf) goto L_10037208;
L_100378f5:;
  /* 100378f5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 100378f8 pop edi */
  EDI = (pop32());
  /* 100378f9 pop esi */
  ESI = (pop32());
  /* 100378fa pop ebx */
  EBX = (pop32());
  /* 100378fb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100378fc ret  */
  ESPCHK(0x100371dcu, _esp0);
  ESP += 4; return;
}

/* FUN_1000791d @ 0x1003791d (53 bytes, 25 insns) */
void f_1003791d(void) {
  FTRACE(0x1003791du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003791d push ebp */
  push32((uint32_t)(EBP));
  /* 1003791e mov ebp, esp */
  EBP = (ESP);
  /* 10037920 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10037923 dec dword ptr [ecx + 4] */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))-1; w32((uint32_t)(ECX + 0x4), (_r)); fl_dec(_r,32); }
  /* 10037926 js 0x10037936 */
  if (C.sf) goto L_10037936;
  /* 10037928 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1003792a mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1003792d mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1003792f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10037931 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 10037934 jmp 0x10037941 */
  goto L_10037941;
L_10037936:;
  /* 10037936 push ecx */
  push32((uint32_t)(ECX));
  /* 10037937 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1003793a call 0x100370c4 */
  push32(0x1003793fu); f_100370c4();
  /* 1003793f pop ecx */
  ECX = (pop32());
  /* 10037940 pop ecx */
  ECX = (pop32());
L_10037941:;
  /* 10037941 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037944 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10037947 jne 0x1003794e */
  if (!C.zf) goto L_1003794e;
  /* 10037949 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1003794c pop ebp */
  EBP = (pop32());
  /* 1003794d ret  */
  ESPCHK(0x1003791du, _esp0);
  ESP += 4; return;
L_1003794e:;
  /* 1003794e inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 10037950 pop ebp */
  EBP = (pop32());
  /* 10037951 ret  */
  ESPCHK(0x1003791du, _esp0);
  ESP += 4; return;
}

/* FUN_10007952 @ 0x10037952 (49 bytes, 22 insns) */
void f_10037952(void) {
  FTRACE(0x10037952u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10037952 push esi */
  push32((uint32_t)(ESI));
  /* 10037953 push edi */
  push32((uint32_t)(EDI));
  /* 10037954 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10037958 mov eax, edi */
  EAX = (EDI);
  /* 1003795a dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1003795b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003795d jle 0x10037980 */
  if ((C.zf||C.sf!=C.of)) goto L_10037980;
  /* 1003795f mov esi, dword ptr [esp + 0x18] */
  ESI = (r32((uint32_t)(ESP + 0x18)));
L_10037963:;
  /* 10037963 push esi */
  push32((uint32_t)(ESI));
  /* 10037964 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10037968 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 1003796c call 0x1003791d */
  push32(0x10037971u); f_1003791d();
  /* 10037971 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10037974 cmp dword ptr [esi], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037977 je 0x10037980 */
  if (C.zf) goto L_10037980;
  /* 10037979 mov eax, edi */
  EAX = (EDI);
  /* 1003797b dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1003797c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003797e jg 0x10037963 */
  if ((!C.zf&&C.sf==C.of)) goto L_10037963;
L_10037980:;
  /* 10037980 pop edi */
  EDI = (pop32());
  /* 10037981 pop esi */
  ESI = (pop32());
  /* 10037982 ret  */
  ESPCHK(0x10037952u, _esp0);
  ESP += 4; return;
}

/* FUN_10007983 @ 0x10037983 (56 bytes, 27 insns) */
void f_10037983(void) {
  FTRACE(0x10037983u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10037983 push ebx */
  push32((uint32_t)(EBX));
  /* 10037984 mov ebx, dword ptr [esp + 0xc] */
  EBX = (r32((uint32_t)(ESP + 0xc)));
  /* 10037988 mov eax, ebx */
  EAX = (EBX);
  /* 1003798a dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1003798b push esi */
  push32((uint32_t)(ESI));
  /* 1003798c push edi */
  push32((uint32_t)(EDI));
  /* 1003798d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1003798f jle 0x100379b7 */
  if ((C.zf||C.sf!=C.of)) goto L_100379b7;
  /* 10037991 mov edi, dword ptr [esp + 0x1c] */
  EDI = (r32((uint32_t)(ESP + 0x1c)));
  /* 10037995 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
L_10037999:;
  /* 10037999 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 1003799c push edi */
  push32((uint32_t)(EDI));
  /* 1003799d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1003799e push dword ptr [esp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x1c))));
  /* 100379a2 push eax */
  push32((uint32_t)(EAX));
  /* 100379a3 call 0x1003791d */
  push32(0x100379a8u); f_1003791d();
  /* 100379a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100379ab cmp dword ptr [edi], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100379ae je 0x100379b7 */
  if (C.zf) goto L_100379b7;
  /* 100379b0 mov eax, ebx */
  EAX = (EBX);
  /* 100379b2 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100379b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100379b5 jg 0x10037999 */
  if ((!C.zf&&C.sf==C.of)) goto L_10037999;
L_100379b7:;
  /* 100379b7 pop edi */
  EDI = (pop32());
  /* 100379b8 pop esi */
  ESI = (pop32());
  /* 100379b9 pop ebx */
  EBX = (pop32());
  /* 100379ba ret  */
  ESPCHK(0x10037983u, _esp0);
  ESP += 4; return;
}

/* FUN_100079bb @ 0x100379bb (13 bytes, 5 insns) */
void f_100379bb(void) {
  FTRACE(0x100379bbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100379bb mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100379bf add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 100379c2 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 100379c4 mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 100379c7 ret  */
  ESPCHK(0x100379bbu, _esp0);
  ESP += 4; return;
}

/* FUN_100079c8 @ 0x100379c8 (16 bytes, 6 insns) */
void f_100379c8(void) {
  FTRACE(0x100379c8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100379c8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100379cc add dword ptr [eax], 8 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x8u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 100379cf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 100379d1 mov eax, dword ptr [ecx - 8] */
  EAX = (r32((uint32_t)(ECX + -0x8)));
  /* 100379d4 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 100379d7 ret  */
  ESPCHK(0x100379c8u, _esp0);
  ESP += 4; return;
}

/* FUN_100079d8 @ 0x100379d8 (14 bytes, 5 insns) */
void f_100379d8(void) {
  FTRACE(0x100379d8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100379d8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100379dc add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 100379df mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 100379e1 mov ax, word ptr [eax - 4] */
  AX = (r16((uint32_t)(EAX + -0x4)));
  /* 100379e5 ret  */
  ESPCHK(0x100379d8u, _esp0);
  ESP += 4; return;
}

/* FUN_100079e6 @ 0x100379e6 (18 bytes, 6 insns) */
void f_100379e6(void) {
  FTRACE(0x100379e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100379e6 push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 100379eb push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 100379f0 call 0x1003927a */
  push32(0x100379f5u); f_1003927a();
  /* 100379f5 pop ecx */
  ECX = (pop32());
  /* 100379f6 pop ecx */
  ECX = (pop32());
  /* 100379f7 ret  */
  ESPCHK(0x100379e6u, _esp0);
  ESP += 4; return;
}

/* FUN_100079f8 @ 0x100379f8 (62 bytes, 24 insns) */
void f_100379f8(void) {
  FTRACE(0x100379f8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100379f8 push ebp */
  push32((uint32_t)(EBP));
  /* 100379f9 mov ebp, esp */
  EBP = (ESP);
  /* 100379fb sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100379fe fld qword ptr [0x1003e170] */
  fpu_push(rf64((uint32_t)(0x1003e170)));
  /* 10037a04 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 10037a07 fld qword ptr [0x1003e168] */
  fpu_push(rf64((uint32_t)(0x1003e168)));
  /* 10037a0d fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 10037a10 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 10037a13 fdiv qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x8)));
  /* 10037a16 fmul qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x8)));
  /* 10037a19 fsubr qword ptr [ebp - 0x10] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x10))) - FPU_ST(0);
  /* 10037a1c fstp qword ptr [ebp - 0x18] */
  wf64((uint32_t)(EBP + -0x18), FPU_ST(0));
  (void)fpu_pop();
  /* 10037a1f fld qword ptr [ebp - 0x18] */
  fpu_push(rf64((uint32_t)(EBP + -0x18)));
  /* 10037a22 fcomp qword ptr [0x1003e160] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x1003e160)));
  (void)fpu_pop();
  /* 10037a28 fnstsw ax */
  AX = fpu_status();
  /* 10037a2a sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10037a2b jbe 0x10037a32 */
  if ((C.cf||C.zf)) goto L_10037a32;
  /* 10037a2d push 1 */
  push32((uint32_t)(0x1u));
  /* 10037a2f pop eax */
  EAX = (pop32());
  /* 10037a30 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10037a31 ret  */
  ESPCHK(0x100379f8u, _esp0);
  ESP += 4; return;
L_10037a32:;
  /* 10037a32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10037a34 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10037a35 ret  */
  ESPCHK(0x100379f8u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a36 @ 0x10037a36 (41 bytes, 13 insns) */
void f_10037a36(void) {
  FTRACE(0x10037a36u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10037a36 push 0x1003e194 */
  push32((uint32_t)(0x1003e194u));
  /* 10037a3b call dword ptr [0x1003e004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e004))), 0x10037a41u);
  /* 10037a41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10037a43 je 0x10037a5a */
  if (C.zf) goto L_10037a5a;
  /* 10037a45 push 0x1003e178 */
  push32((uint32_t)(0x1003e178u));
  /* 10037a4a push eax */
  push32((uint32_t)(EAX));
  /* 10037a4b call dword ptr [0x1003e088] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e088))), 0x10037a51u);
  /* 10037a51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10037a53 je 0x10037a5a */
  if (C.zf) goto L_10037a5a;
  /* 10037a55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10037a57 call eax */
  call_ind((uint32_t)(EAX), 0x10037a59u);
  /* 10037a59 ret  */
  ESPCHK(0x10037a36u, _esp0);
  ESP += 4; return;
L_10037a5a:;
  /* 10037a5a jmp 0x100379f8 */
  f_100379f8(); return;
}

/* FUN_10007a5f @ 0x10037a5f (90 bytes, 37 insns) */
void f_10037a5f(void) {
  FTRACE(0x10037a5fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10037a5f push esi */
  push32((uint32_t)(ESI));
  /* 10037a60 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10037a64 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10037a67 push eax */
  push32((uint32_t)(EAX));
  /* 10037a68 call 0x10039420 */
  push32(0x10037a6du); f_10039420();
  /* 10037a6d cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037a70 pop ecx */
  ECX = (pop32());
  /* 10037a71 je 0x10037a9f */
  if (C.zf) goto L_10037a9f;
L_10037a73:;
  /* 10037a73 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10037a74 cmp dword ptr [0x10040bd0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10040bd0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037a7b jle 0x10037a8c */
  if ((C.zf||C.sf!=C.of)) goto L_10037a8c;
  /* 10037a7d movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10037a80 push 4 */
  push32((uint32_t)(0x4u));
  /* 10037a82 push eax */
  push32((uint32_t)(EAX));
  /* 10037a83 call 0x100393ab */
  push32(0x10037a88u); f_100393ab();
  /* 10037a88 pop ecx */
  ECX = (pop32());
  /* 10037a89 pop ecx */
  ECX = (pop32());
  /* 10037a8a jmp 0x10037a9b */
  goto L_10037a9b;
L_10037a8c:;
  /* 10037a8c movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10037a8f mov ecx, dword ptr [0x100409c0] */
  ECX = (r32((uint32_t)(0x100409c0)));
  /* 10037a95 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 10037a98 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_10037a9b:;
  /* 10037a9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10037a9d jne 0x10037a73 */
  if (!C.zf) goto L_10037a73;
L_10037a9f:;
  /* 10037a9f mov cl, byte ptr [0x10040bd4] */
  CL = (r8((uint32_t)(0x10040bd4)));
  /* 10037aa5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10037aa7 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 10037aa9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10037aaa:;
  /* 10037aaa mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 10037aac mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
  /* 10037aae mov al, cl */
  AL = (CL);
  /* 10037ab0 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 10037ab2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10037ab3 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10037ab5 jne 0x10037aaa */
  if (!C.zf) goto L_10037aaa;
  /* 10037ab7 pop esi */
  ESI = (pop32());
  /* 10037ab8 ret  */
  ESPCHK(0x10037a5fu, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x10037b1f (62 bytes, 29 insns) */
void f_10037b1f(void) {
  FTRACE(0x10037b1fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10037b1f push ebp */
  push32((uint32_t)(EBP));
  /* 10037b20 mov ebp, esp */
  EBP = (ESP);
  /* 10037b22 push ecx */
  push32((uint32_t)(ECX));
  /* 10037b23 push ecx */
  push32((uint32_t)(ECX));
  /* 10037b24 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037b28 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10037b2b je 0x10037b48 */
  if (C.zf) goto L_10037b48;
  /* 10037b2d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10037b30 push eax */
  push32((uint32_t)(EAX));
  /* 10037b31 call 0x100398ec */
  push32(0x10037b36u); f_100398ec();
  /* 10037b36 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10037b39 pop ecx */
  ECX = (pop32());
  /* 10037b3a pop ecx */
  ECX = (pop32());
  /* 10037b3b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10037b3e mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10037b40 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10037b43 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10037b46 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10037b47 ret  */
  ESPCHK(0x10037b1fu, _esp0);
  ESP += 4; return;
L_10037b48:;
  /* 10037b48 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10037b4b push eax */
  push32((uint32_t)(EAX));
  /* 10037b4c call 0x10039919 */
  push32(0x10037b51u); f_10039919();
  /* 10037b51 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10037b54 pop ecx */
  ECX = (pop32());
  /* 10037b55 pop ecx */
  ECX = (pop32());
  /* 10037b56 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10037b59 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10037b5b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10037b5c ret  */
  ESPCHK(0x10037b1fu, _esp0);
  ESP += 4; return;
}

/* FUN_10007b5d @ 0x10037b5d (97 bytes, 42 insns) */
void f_10037b5d(void) {
  FTRACE(0x10037b5du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10037b5d push ebp */
  push32((uint32_t)(EBP));
  /* 10037b5e mov ebp, esp */
  EBP = (ESP);
  /* 10037b60 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10037b63 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10037b66 push esi */
  push32((uint32_t)(ESI));
  /* 10037b67 push eax */
  push32((uint32_t)(EAX));
  /* 10037b68 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10037b6b push eax */
  push32((uint32_t)(EAX));
  /* 10037b6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10037b6f push ecx */
  push32((uint32_t)(ECX));
  /* 10037b70 push ecx */
  push32((uint32_t)(ECX));
  /* 10037b71 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10037b73 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10037b76 call 0x100399bd */
  push32(0x10037b7bu); f_100399bd();
  /* 10037b7b mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10037b7e lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10037b81 push eax */
  push32((uint32_t)(EAX));
  /* 10037b82 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10037b85 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 10037b88 push eax */
  push32((uint32_t)(EAX));
  /* 10037b89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10037b8b cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037b8f sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10037b92 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10037b94 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10037b96 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 10037b99 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10037b9b add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10037b9d push ecx */
  push32((uint32_t)(ECX));
  /* 10037b9e call 0x10039946 */
  push32(0x10037ba3u); f_10039946();
  /* 10037ba3 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10037ba6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10037ba8 push eax */
  push32((uint32_t)(EAX));
  /* 10037ba9 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10037bac push esi */
  push32((uint32_t)(ESI));
  /* 10037bad push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10037bb0 call 0x10037bbe */
  push32(0x10037bb5u); f_10037bbe();
  /* 10037bb5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10037bb8 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10037bbb pop esi */
  ESI = (pop32());
  /* 10037bbc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10037bbd ret  */
  ESPCHK(0x10037b5du, _esp0);
  ESP += 4; return;
}

/* FUN_10007bbe @ 0x10037bbe (194 bytes, 91 insns) */
void f_10037bbe(void) {
  FTRACE(0x10037bbeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10037bbe push ebp */
  push32((uint32_t)(EBP));
  /* 10037bbf mov ebp, esp */
  EBP = (ESP);
  /* 10037bc1 push ebx */
  push32((uint32_t)(EBX));
  /* 10037bc2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10037bc4 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10037bc7 push esi */
  push32((uint32_t)(ESI));
  /* 10037bc8 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 10037bcb push edi */
  push32((uint32_t)(EDI));
  /* 10037bcc mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10037bcf je 0x10037bec */
  if (C.zf) goto L_10037bec;
  /* 10037bd1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10037bd3 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037bd6 setg al */
  AL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 10037bd9 push eax */
  push32((uint32_t)(EAX));
  /* 10037bda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10037bdc cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037bdf sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10037be2 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10037be4 push eax */
  push32((uint32_t)(EAX));
  /* 10037be5 call 0x10037e60 */
  push32(0x10037beau); f_10037e60();
  /* 10037bea pop ecx */
  ECX = (pop32());
  /* 10037beb pop ecx */
  ECX = (pop32());
L_10037bec:;
  /* 10037bec cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037bef mov eax, edi */
  EAX = (EDI);
  /* 10037bf1 jne 0x10037bf9 */
  if (!C.zf) goto L_10037bf9;
  /* 10037bf3 mov byte ptr [edi], 0x2d */
  w8((uint32_t)(EDI), (0x2du));
  /* 10037bf6 lea eax, [edi + 1] */
  EAX = ((uint32_t)(EDI + 0x1));
L_10037bf9:;
  /* 10037bf9 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037bfc jle 0x10037c10 */
  if ((C.zf||C.sf!=C.of)) goto L_10037c10;
  /* 10037bfe mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 10037c01 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 10037c04 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10037c06 mov eax, ecx */
  EAX = (ECX);
  /* 10037c08 mov cl, byte ptr [0x10040bd4] */
  CL = (r8((uint32_t)(0x10040bd4)));
  /* 10037c0e mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
L_10037c10:;
  /* 10037c10 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10037c12 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10037c15 push 0x1003e1a8 */
  push32((uint32_t)(0x1003e1a8u));
  /* 10037c1a sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10037c1d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10037c1f add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10037c22 push ecx */
  push32((uint32_t)(ECX));
  /* 10037c23 call 0x10039ad0 */
  push32(0x10037c28u); f_10039ad0();
  /* 10037c28 cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037c2b pop ecx */
  ECX = (pop32());
  /* 10037c2c pop ecx */
  ECX = (pop32());
  /* 10037c2d mov ecx, eax */
  ECX = (EAX);
  /* 10037c2f je 0x10037c34 */
  if (C.zf) goto L_10037c34;
  /* 10037c31 mov byte ptr [ecx], 0x45 */
  w8((uint32_t)(ECX), (0x45u));
L_10037c34:;
  /* 10037c34 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 10037c37 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10037c38 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10037c3b je 0x10037c79 */
  if (C.zf) goto L_10037c79;
  /* 10037c3d mov ebx, dword ptr [esi + 4] */
  EBX = (r32((uint32_t)(ESI + 0x4)));
  /* 10037c40 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10037c41 jns 0x10037c48 */
  if (!C.sf) goto L_10037c48;
  /* 10037c43 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 10037c45 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
L_10037c48:;
  /* 10037c48 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10037c49 cmp ebx, 0x64 */
  { uint32_t _a=(EBX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037c4c jl 0x10037c5f */
  if ((C.sf!=C.of)) goto L_10037c5f;
  /* 10037c4e mov eax, ebx */
  EAX = (EBX);
  /* 10037c50 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10037c52 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10037c53 pop esi */
  ESI = (pop32());
  /* 10037c54 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10037c56 add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10037c58 mov eax, ebx */
  EAX = (EBX);
  /* 10037c5a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10037c5b idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10037c5d mov ebx, edx */
  EBX = (EDX);
L_10037c5f:;
  /* 10037c5f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10037c60 cmp ebx, 0xa */
  { uint32_t _a=(EBX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037c63 jl 0x10037c76 */
  if ((C.sf!=C.of)) goto L_10037c76;
  /* 10037c65 mov eax, ebx */
  EAX = (EBX);
  /* 10037c67 push 0xa */
  push32((uint32_t)(0xau));
  /* 10037c69 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10037c6a pop esi */
  ESI = (pop32());
  /* 10037c6b idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10037c6d add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10037c6f mov eax, ebx */
  EAX = (EBX);
  /* 10037c71 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10037c72 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10037c74 mov ebx, edx */
  EBX = (EDX);
L_10037c76:;
  /* 10037c76 add byte ptr [ecx + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x1))),_b=(BL),_r=_a+_b; w8((uint32_t)(ECX + 0x1), (_r)); fl_add(_a,_b,_r,8); }
L_10037c79:;
  /* 10037c79 mov eax, edi */
  EAX = (EDI);
  /* 10037c7b pop edi */
  EDI = (pop32());
  /* 10037c7c pop esi */
  ESI = (pop32());
  /* 10037c7d pop ebx */
  EBX = (pop32());
  /* 10037c7e pop ebp */
  EBP = (pop32());
  /* 10037c7f ret  */
  ESPCHK(0x10037bbeu, _esp0);
  ESP += 4; return;
}

/* FUN_10007c80 @ 0x10037c80 (85 bytes, 37 insns) */
void f_10037c80(void) {
  FTRACE(0x10037c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10037c80 push ebp */
  push32((uint32_t)(EBP));
  /* 10037c81 mov ebp, esp */
  EBP = (ESP);
  /* 10037c83 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10037c86 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10037c89 push esi */
  push32((uint32_t)(ESI));
  /* 10037c8a push eax */
  push32((uint32_t)(EAX));
  /* 10037c8b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10037c8e push eax */
  push32((uint32_t)(EAX));
  /* 10037c8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10037c92 push ecx */
  push32((uint32_t)(ECX));
  /* 10037c93 push ecx */
  push32((uint32_t)(ECX));
  /* 10037c94 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10037c96 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10037c99 call 0x100399bd */
  push32(0x10037c9eu); f_100399bd();
  /* 10037c9e mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10037ca1 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10037ca4 push eax */
  push32((uint32_t)(EAX));
  /* 10037ca5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10037ca8 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10037caa push eax */
  push32((uint32_t)(EAX));
  /* 10037cab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10037cad cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037cb1 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10037cb4 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10037cb7 push eax */
  push32((uint32_t)(EAX));
  /* 10037cb8 call 0x10039946 */
  push32(0x10037cbdu); f_10039946();
  /* 10037cbd lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10037cc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10037cc2 push eax */
  push32((uint32_t)(EAX));
  /* 10037cc3 push esi */
  push32((uint32_t)(ESI));
  /* 10037cc4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10037cc7 call 0x10037cd5 */
  push32(0x10037cccu); f_10037cd5();
  /* 10037ccc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10037ccf add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10037cd2 pop esi */
  ESI = (pop32());
  /* 10037cd3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10037cd4 ret  */
  ESPCHK(0x10037c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cd5 @ 0x10037cd5 (167 bytes, 73 insns) */
void f_10037cd5(void) {
  FTRACE(0x10037cd5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10037cd5 push ebp */
  push32((uint32_t)(EBP));
  /* 10037cd6 mov ebp, esp */
  EBP = (ESP);
  /* 10037cd8 push ebx */
  push32((uint32_t)(EBX));
  /* 10037cd9 push esi */
  push32((uint32_t)(ESI));
  /* 10037cda mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10037cdd mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10037ce0 push edi */
  push32((uint32_t)(EDI));
  /* 10037ce1 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 10037ce4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10037ce5 cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10037ce9 je 0x10037d05 */
  if (C.zf) goto L_10037d05;
  /* 10037ceb cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037cee jne 0x10037d05 */
  if (!C.zf) goto L_10037d05;
  /* 10037cf0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10037cf2 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037cf5 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10037cf8 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10037cfa add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10037cfc mov eax, ecx */
  EAX = (ECX);
  /* 10037cfe mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 10037d01 and byte ptr [eax + 1], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1)))&(0x0u); w8((uint32_t)(EAX + 0x1), (_r)); fl_logic(_r,8); }
L_10037d05:;
  /* 10037d05 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037d08 mov edi, ebx */
  EDI = (EBX);
  /* 10037d0a jne 0x10037d12 */
  if (!C.zf) goto L_10037d12;
  /* 10037d0c mov byte ptr [ebx], 0x2d */
  w8((uint32_t)(EBX), (0x2du));
  /* 10037d0f lea edi, [ebx + 1] */
  EDI = ((uint32_t)(EBX + 0x1));
L_10037d12:;
  /* 10037d12 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 10037d15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10037d17 jg 0x10037d29 */
  if ((!C.zf&&C.sf==C.of)) goto L_10037d29;
  /* 10037d19 push 1 */
  push32((uint32_t)(0x1u));
  /* 10037d1b push edi */
  push32((uint32_t)(EDI));
  /* 10037d1c call 0x10037e60 */
  push32(0x10037d21u); f_10037e60();
  /* 10037d21 pop ecx */
  ECX = (pop32());
  /* 10037d22 mov byte ptr [edi], 0x30 */
  w8((uint32_t)(EDI), (0x30u));
  /* 10037d25 pop ecx */
  ECX = (pop32());
  /* 10037d26 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10037d27 jmp 0x10037d2b */
  goto L_10037d2b;
L_10037d29:;
  /* 10037d29 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10037d2b:;
  /* 10037d2b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037d2f jle 0x10037d75 */
  if ((C.zf||C.sf!=C.of)) goto L_10037d75;
  /* 10037d31 push 1 */
  push32((uint32_t)(0x1u));
  /* 10037d33 push edi */
  push32((uint32_t)(EDI));
  /* 10037d34 call 0x10037e60 */
  push32(0x10037d39u); f_10037e60();
  /* 10037d39 mov al, byte ptr [0x10040bd4] */
  AL = (r8((uint32_t)(0x10040bd4)));
  /* 10037d3e pop ecx */
  ECX = (pop32());
  /* 10037d3f mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10037d41 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 10037d44 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10037d45 pop ecx */
  ECX = (pop32());
  /* 10037d46 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10037d48 jge 0x10037d75 */
  if ((C.sf==C.of)) goto L_10037d75;
  /* 10037d4a cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10037d4e je 0x10037d54 */
  if (C.zf) goto L_10037d54;
  /* 10037d50 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 10037d52 jmp 0x10037d5b */
  goto L_10037d5b;
L_10037d54:;
  /* 10037d54 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 10037d56 cmp dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037d59 jl 0x10037d5e */
  if ((C.sf!=C.of)) goto L_10037d5e;
L_10037d5b:;
  /* 10037d5b mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_10037d5e:;
  /* 10037d5e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10037d61 push edi */
  push32((uint32_t)(EDI));
  /* 10037d62 call 0x10037e60 */
  push32(0x10037d67u); f_10037e60();
  /* 10037d67 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10037d6a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10037d6c push edi */
  push32((uint32_t)(EDI));
  /* 10037d6d call 0x10039bc0 */
  push32(0x10037d72u); f_10039bc0();
  /* 10037d72 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10037d75:;
  /* 10037d75 pop edi */
  EDI = (pop32());
  /* 10037d76 mov eax, ebx */
  EAX = (EBX);
  /* 10037d78 pop esi */
  ESI = (pop32());
  /* 10037d79 pop ebx */
  EBX = (pop32());
  /* 10037d7a pop ebp */
  EBP = (pop32());
  /* 10037d7b ret  */
  ESPCHK(0x10037cd5u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d7c @ 0x10037d7c (147 bytes, 66 insns) */
void f_10037d7c(void) {
  FTRACE(0x10037d7cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10037d7c push ebp */
  push32((uint32_t)(EBP));
  /* 10037d7d mov ebp, esp */
  EBP = (ESP);
  /* 10037d7f sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10037d82 push ebx */
  push32((uint32_t)(EBX));
  /* 10037d83 push esi */
  push32((uint32_t)(ESI));
  /* 10037d84 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10037d87 push edi */
  push32((uint32_t)(EDI));
  /* 10037d88 push eax */
  push32((uint32_t)(EAX));
  /* 10037d89 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10037d8c push eax */
  push32((uint32_t)(EAX));
  /* 10037d8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10037d90 push ecx */
  push32((uint32_t)(ECX));
  /* 10037d91 push ecx */
  push32((uint32_t)(ECX));
  /* 10037d92 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10037d94 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10037d97 call 0x100399bd */
  push32(0x10037d9cu); f_100399bd();
  /* 10037d9c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10037d9f mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 10037da2 lea esi, [eax - 1] */
  ESI = ((uint32_t)(EAX + -0x1));
  /* 10037da5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10037da7 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037dab sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10037dae add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10037db1 mov edi, eax */
  EDI = (EAX);
  /* 10037db3 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10037db6 push eax */
  push32((uint32_t)(EAX));
  /* 10037db7 push ebx */
  push32((uint32_t)(EBX));
  /* 10037db8 push edi */
  push32((uint32_t)(EDI));
  /* 10037db9 call 0x10039946 */
  push32(0x10037dbeu); f_10039946();
  /* 10037dbe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10037dc1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10037dc4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10037dc5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037dc7 setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 10037dca cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037dcd jl 0x10037df5 */
  if ((C.sf!=C.of)) goto L_10037df5;
  /* 10037dcf cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037dd1 jge 0x10037df5 */
  if ((C.sf==C.of)) goto L_10037df5;
  /* 10037dd3 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10037dd5 je 0x10037de1 */
  if (C.zf) goto L_10037de1;
L_10037dd7:;
  /* 10037dd7 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10037dd9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10037dda test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10037ddc jne 0x10037dd7 */
  if (!C.zf) goto L_10037dd7;
  /* 10037dde and byte ptr [edi - 2], al */
  { uint32_t _r=(r8((uint32_t)(EDI + -0x2)))&(AL); w8((uint32_t)(EDI + -0x2), (_r)); fl_logic(_r,8); }
L_10037de1:;
  /* 10037de1 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10037de4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10037de6 push eax */
  push32((uint32_t)(EAX));
  /* 10037de7 push ebx */
  push32((uint32_t)(EBX));
  /* 10037de8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10037deb call 0x10037cd5 */
  push32(0x10037df0u); f_10037cd5();
  /* 10037df0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10037df3 jmp 0x10037e0a */
  goto L_10037e0a;
L_10037df5:;
  /* 10037df5 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10037df8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10037dfa push eax */
  push32((uint32_t)(EAX));
  /* 10037dfb push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10037dfe push ebx */
  push32((uint32_t)(EBX));
  /* 10037dff push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10037e02 call 0x10037bbe */
  push32(0x10037e07u); f_10037bbe();
  /* 10037e07 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10037e0a:;
  /* 10037e0a pop edi */
  EDI = (pop32());
  /* 10037e0b pop esi */
  ESI = (pop32());
  /* 10037e0c pop ebx */
  EBX = (pop32());
  /* 10037e0d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10037e0e ret  */
  ESPCHK(0x10037d7cu, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x10037e0f (81 bytes, 29 insns) */
void f_10037e0f(void) {
  FTRACE(0x10037e0fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10037e0f push ebp */
  push32((uint32_t)(EBP));
  /* 10037e10 mov ebp, esp */
  EBP = (ESP);
  /* 10037e12 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037e16 je 0x10037e4a */
  if (C.zf) goto L_10037e4a;
  /* 10037e18 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037e1c je 0x10037e4a */
  if (C.zf) goto L_10037e4a;
  /* 10037e1e cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037e22 jne 0x10037e37 */
  if (!C.zf) goto L_10037e37;
  /* 10037e24 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10037e27 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10037e2a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10037e2d call 0x10037c80 */
  push32(0x10037e32u); f_10037c80();
  /* 10037e32 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10037e35 pop ebp */
  EBP = (pop32());
  /* 10037e36 ret  */
  ESPCHK(0x10037e0fu, _esp0);
  ESP += 4; return;
L_10037e37:;
  /* 10037e37 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10037e3a push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10037e3d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10037e40 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10037e43 call 0x10037d7c */
  push32(0x10037e48u); f_10037d7c();
  /* 10037e48 jmp 0x10037e5b */
  goto L_10037e5b;
L_10037e4a:;
  /* 10037e4a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10037e4d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10037e50 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10037e53 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10037e56 call 0x10037b5d */
  push32(0x10037e5bu); f_10037b5d();
L_10037e5b:;
  /* 10037e5b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10037e5e pop ebp */
  EBP = (pop32());
  /* 10037e5f ret  */
  ESPCHK(0x10037e0fu, _esp0);
  ESP += 4; return;
}

/* FUN_10007e60 @ 0x10037e60 (37 bytes, 18 insns) */
void f_10037e60(void) {
  FTRACE(0x10037e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10037e60 push edi */
  push32((uint32_t)(EDI));
  /* 10037e61 mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 10037e65 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10037e67 je 0x10037e83 */
  if (C.zf) goto L_10037e83;
  /* 10037e69 push esi */
  push32((uint32_t)(ESI));
  /* 10037e6a mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 10037e6e push esi */
  push32((uint32_t)(ESI));
  /* 10037e6f call 0x10039020 */
  push32(0x10037e74u); f_10039020();
  /* 10037e74 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10037e75 push eax */
  push32((uint32_t)(EAX));
  /* 10037e76 push esi */
  push32((uint32_t)(ESI));
  /* 10037e77 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10037e79 push esi */
  push32((uint32_t)(ESI));
  /* 10037e7a call 0x10039c20 */
  push32(0x10037e7fu); f_10039c20();
  /* 10037e7f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10037e82 pop esi */
  ESI = (pop32());
L_10037e83:;
  /* 10037e83 pop edi */
  EDI = (pop32());
  /* 10037e84 ret  */
  ESPCHK(0x10037e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e85 @ 0x10037e85 (45 bytes, 12 insns) */
void f_10037e85(void) {
  FTRACE(0x10037e85u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10037e85 mov eax, dword ptr [0x10040650] */
  EAX = (r32((uint32_t)(0x10040650)));
  /* 10037e8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10037e8c je 0x10037e90 */
  if (C.zf) goto L_10037e90;
  /* 10037e8e call eax */
  call_ind((uint32_t)(EAX), 0x10037e90u);
L_10037e90:;
  /* 10037e90 push 0x1003f014 */
  push32((uint32_t)(0x1003f014u));
  /* 10037e95 push 0x1003f008 */
  push32((uint32_t)(0x1003f008u));
  /* 10037e9a call 0x10037f89 */
  push32(0x10037e9fu); f_10037f89();
  /* 10037e9f push 0x1003f004 */
  push32((uint32_t)(0x1003f004u));
  /* 10037ea4 push 0x1003f000 */
  push32((uint32_t)(0x1003f000u));
  /* 10037ea9 call 0x10037f89 */
  push32(0x10037eaeu); f_10037f89();
  /* 10037eae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10037eb1 ret  */
  ESPCHK(0x10037e85u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10037eb2 (17 bytes, 6 insns) */
void f_10037eb2(void) {
  FTRACE(0x10037eb2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10037eb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10037eb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10037eb6 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10037eba call 0x10037ed2 */
  push32(0x10037ebfu); f_10037ed2();
  /* 10037ebf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10037ec2 ret  */
  ESPCHK(0x10037eb2u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ec3 @ 0x10037ec3 (15 bytes, 6 insns) */
void f_10037ec3(void) {
  FTRACE(0x10037ec3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10037ec3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10037ec5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10037ec7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10037ec9 call 0x10037ed2 */
  push32(0x10037eceu); f_10037ed2();
  /* 10037ece add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10037ed1 ret  */
  ESPCHK(0x10037ec3u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ed2 @ 0x10037ed2 (163 bytes, 53 insns) */
void f_10037ed2(void) {
  FTRACE(0x10037ed2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10037ed2 push edi */
  push32((uint32_t)(EDI));
  /* 10037ed3 call 0x10037f77 */
  push32(0x10037ed8u); f_10037f77();
  /* 10037ed8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10037eda pop edi */
  EDI = (pop32());
  /* 10037edb cmp dword ptr [0x10046688], edi */
  { uint32_t _a=(r32((uint32_t)(0x10046688))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037ee1 jne 0x10037ef4 */
  if (!C.zf) goto L_10037ef4;
  /* 10037ee3 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10037ee7 call dword ptr [0x1003e020] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e020))), 0x10037eedu);
  /* 10037eed push eax */
  push32((uint32_t)(EAX));
  /* 10037eee call dword ptr [0x1003e01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e01c))), 0x10037ef4u);
L_10037ef4:;
  /* 10037ef4 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037ef9 push ebx */
  push32((uint32_t)(EBX));
  /* 10037efa mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10037efe mov dword ptr [0x10046684], edi */
  w32((uint32_t)(0x10046684), (EDI));
  /* 10037f04 mov byte ptr [0x10046680], bl */
  w8((uint32_t)(0x10046680), (BL));
  /* 10037f0a jne 0x10037f48 */
  if (!C.zf) goto L_10037f48;
  /* 10037f0c mov eax, dword ptr [0x10047d30] */
  EAX = (r32((uint32_t)(0x10047d30)));
  /* 10037f11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10037f13 je 0x10037f37 */
  if (C.zf) goto L_10037f37;
  /* 10037f15 mov ecx, dword ptr [0x10047d2c] */
  ECX = (r32((uint32_t)(0x10047d2c)));
  /* 10037f1b push esi */
  push32((uint32_t)(ESI));
  /* 10037f1c lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 10037f1f cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037f21 jb 0x10037f36 */
  if (C.cf) goto L_10037f36;
L_10037f23:;
  /* 10037f23 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10037f25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10037f27 je 0x10037f2b */
  if (C.zf) goto L_10037f2b;
  /* 10037f29 call eax */
  call_ind((uint32_t)(EAX), 0x10037f2bu);
L_10037f2b:;
  /* 10037f2b sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10037f2e cmp esi, dword ptr [0x10047d30] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10047d30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037f34 jae 0x10037f23 */
  if (!C.cf) goto L_10037f23;
L_10037f36:;
  /* 10037f36 pop esi */
  ESI = (pop32());
L_10037f37:;
  /* 10037f37 push 0x1003f020 */
  push32((uint32_t)(0x1003f020u));
  /* 10037f3c push 0x1003f018 */
  push32((uint32_t)(0x1003f018u));
  /* 10037f41 call 0x10037f89 */
  push32(0x10037f46u); f_10037f89();
  /* 10037f46 pop ecx */
  ECX = (pop32());
  /* 10037f47 pop ecx */
  ECX = (pop32());
L_10037f48:;
  /* 10037f48 push 0x1003f028 */
  push32((uint32_t)(0x1003f028u));
  /* 10037f4d push 0x1003f024 */
  push32((uint32_t)(0x1003f024u));
  /* 10037f52 call 0x10037f89 */
  push32(0x10037f57u); f_10037f89();
  /* 10037f57 pop ecx */
  ECX = (pop32());
  /* 10037f58 pop ecx */
  ECX = (pop32());
  /* 10037f59 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10037f5b pop ebx */
  EBX = (pop32());
  /* 10037f5c je 0x10037f65 */
  if (C.zf) goto L_10037f65;
  /* 10037f5e call 0x10037f80 */
  push32(0x10037f63u); f_10037f80();
  /* 10037f63 pop edi */
  EDI = (pop32());
  /* 10037f64 ret  */
  ESPCHK(0x10037ed2u, _esp0);
  ESP += 4; return;
L_10037f65:;
  /* 10037f65 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10037f69 mov dword ptr [0x10046688], edi */
  w32((uint32_t)(0x10046688), (EDI));
  /* 10037f6f call dword ptr [0x1003e018] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e018))), 0x10037f75u);
  /* 10037f75 pop edi */
  EDI = (pop32());
  /* 10037f76 ret  */
  ESPCHK(0x10037ed2u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f77 @ 0x10037f77 (9 bytes, 4 insns) */
void f_10037f77(void) {
  FTRACE(0x10037f77u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10037f77 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10037f79 call 0x10039ff3 */
  push32(0x10037f7eu); f_10039ff3();
  /* 10037f7e pop ecx */
  ECX = (pop32());
  /* 10037f7f ret  */
  ESPCHK(0x10037f77u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f80 @ 0x10037f80 (9 bytes, 4 insns) */
void f_10037f80(void) {
  FTRACE(0x10037f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10037f80 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10037f82 call 0x1003a054 */
  push32(0x10037f87u); f_1003a054();
  /* 10037f87 pop ecx */
  ECX = (pop32());
  /* 10037f88 ret  */
  ESPCHK(0x10037f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f89 @ 0x10037f89 (26 bytes, 12 insns) */
void f_10037f89(void) {
  FTRACE(0x10037f89u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10037f89 push esi */
  push32((uint32_t)(ESI));
  /* 10037f8a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_10037f8e:;
  /* 10037f8e cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037f92 jae 0x10037fa1 */
  if (!C.cf) goto L_10037fa1;
  /* 10037f94 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10037f96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10037f98 je 0x10037f9c */
  if (C.zf) goto L_10037f9c;
  /* 10037f9a call eax */
  call_ind((uint32_t)(EAX), 0x10037f9cu);
L_10037f9c:;
  /* 10037f9c add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10037f9f jmp 0x10037f8e */
  goto L_10037f8e;
L_10037fa1:;
  /* 10037fa1 pop esi */
  ESI = (pop32());
  /* 10037fa2 ret  */
  ESPCHK(0x10037f89u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fa3 @ 0x10037fa3 (84 bytes, 32 insns) */
void f_10037fa3(void) {
  FTRACE(0x10037fa3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10037fa3 push esi */
  push32((uint32_t)(ESI));
  /* 10037fa4 call 0x10039f5e */
  push32(0x10037fa9u); f_10039f5e();
  /* 10037fa9 call dword ptr [0x1003e02c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e02c))), 0x10037fafu);
  /* 10037faf cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10037fb2 mov dword ptr [0x10040680], eax */
  w32((uint32_t)(0x10040680), (EAX));
  /* 10037fb7 je 0x10037ff3 */
  if (C.zf) goto L_10037ff3;
  /* 10037fb9 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10037fbb push 1 */
  push32((uint32_t)(0x1u));
  /* 10037fbd call 0x1003a069 */
  push32(0x10037fc2u); f_1003a069();
  /* 10037fc2 mov esi, eax */
  ESI = (EAX);
  /* 10037fc4 pop ecx */
  ECX = (pop32());
  /* 10037fc5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10037fc7 pop ecx */
  ECX = (pop32());
  /* 10037fc8 je 0x10037ff3 */
  if (C.zf) goto L_10037ff3;
  /* 10037fca push esi */
  push32((uint32_t)(ESI));
  /* 10037fcb push dword ptr [0x10040680] */
  push32((uint32_t)(r32((uint32_t)(0x10040680))));
  /* 10037fd1 call dword ptr [0x1003e028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e028))), 0x10037fd7u);
  /* 10037fd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10037fd9 je 0x10037ff3 */
  if (C.zf) goto L_10037ff3;
  /* 10037fdb push esi */
  push32((uint32_t)(ESI));
  /* 10037fdc call 0x10038015 */
  push32(0x10037fe1u); f_10038015();
  /* 10037fe1 pop ecx */
  ECX = (pop32());
  /* 10037fe2 call dword ptr [0x1003e024] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e024))), 0x10037fe8u);
  /* 10037fe8 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10037fec push 1 */
  push32((uint32_t)(0x1u));
  /* 10037fee mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10037ff0 pop eax */
  EAX = (pop32());
  /* 10037ff1 pop esi */
  ESI = (pop32());
  /* 10037ff2 ret  */
  ESPCHK(0x10037fa3u, _esp0);
  ESP += 4; return;
L_10037ff3:;
  /* 10037ff3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10037ff5 pop esi */
  ESI = (pop32());
  /* 10037ff6 ret  */
  ESPCHK(0x10037fa3u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ff7 @ 0x10037ff7 (30 bytes, 8 insns) */
void f_10037ff7(void) {
  FTRACE(0x10037ff7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10037ff7 call 0x10039f87 */
  push32(0x10037ffcu); f_10039f87();
  /* 10037ffc mov eax, dword ptr [0x10040680] */
  EAX = (r32((uint32_t)(0x10040680)));
  /* 10038001 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038004 je 0x10038014 */
  if (C.zf) goto L_10038014;
  /* 10038006 push eax */
  push32((uint32_t)(EAX));
  /* 10038007 call dword ptr [0x1003e030] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e030))), 0x1003800du);
  /* 1003800d or dword ptr [0x10040680], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x10040680)))|(0xffffffffu); w32((uint32_t)(0x10040680), (_r)); fl_logic(_r,32); }
L_10038014:;
  /* 10038014 ret  */
  ESPCHK(0x10037ff7u, _esp0);
  ESP += 4; return;
}

/* FUN_10008015 @ 0x10038015 (19 bytes, 4 insns) */
void f_10038015(void) {
  FTRACE(0x10038015u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10038015 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10038019 mov dword ptr [eax + 0x50], 0x10040cd0 */
  w32((uint32_t)(EAX + 0x50), (0x10040cd0u));
  /* 10038020 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 10038027 ret  */
  ESPCHK(0x10038015u, _esp0);
  ESP += 4; return;
}

/* FUN_10008028 @ 0x10038028 (103 bytes, 38 insns) */
void f_10038028(void) {
  FTRACE(0x10038028u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10038028 push esi */
  push32((uint32_t)(ESI));
  /* 10038029 push edi */
  push32((uint32_t)(EDI));
  /* 1003802a call dword ptr [0x1003e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e03c))), 0x10038030u);
  /* 10038030 push dword ptr [0x10040680] */
  push32((uint32_t)(r32((uint32_t)(0x10040680))));
  /* 10038036 mov edi, eax */
  EDI = (EAX);
  /* 10038038 call dword ptr [0x1003e038] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e038))), 0x1003803eu);
  /* 1003803e mov esi, eax */
  ESI = (EAX);
  /* 10038040 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10038042 jne 0x10038083 */
  if (!C.zf) goto L_10038083;
  /* 10038044 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10038046 push 1 */
  push32((uint32_t)(0x1u));
  /* 10038048 call 0x1003a069 */
  push32(0x1003804du); f_1003a069();
  /* 1003804d mov esi, eax */
  ESI = (EAX);
  /* 1003804f pop ecx */
  ECX = (pop32());
  /* 10038050 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10038052 pop ecx */
  ECX = (pop32());
  /* 10038053 je 0x1003807b */
  if (C.zf) goto L_1003807b;
  /* 10038055 push esi */
  push32((uint32_t)(ESI));
  /* 10038056 push dword ptr [0x10040680] */
  push32((uint32_t)(r32((uint32_t)(0x10040680))));
  /* 1003805c call dword ptr [0x1003e028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e028))), 0x10038062u);
  /* 10038062 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10038064 je 0x1003807b */
  if (C.zf) goto L_1003807b;
  /* 10038066 push esi */
  push32((uint32_t)(ESI));
  /* 10038067 call 0x10038015 */
  push32(0x1003806cu); f_10038015();
  /* 1003806c pop ecx */
  ECX = (pop32());
  /* 1003806d call dword ptr [0x1003e024] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e024))), 0x10038073u);
  /* 10038073 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10038077 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10038079 jmp 0x10038083 */
  goto L_10038083;
L_1003807b:;
  /* 1003807b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1003807d call 0x10037091 */
  push32(0x10038082u); f_10037091();
  /* 10038082 pop ecx */
  ECX = (pop32());
L_10038083:;
  /* 10038083 push edi */
  push32((uint32_t)(EDI));
  /* 10038084 call dword ptr [0x1003e034] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e034))), 0x1003808au);
  /* 1003808a mov eax, esi */
  EAX = (ESI);
  /* 1003808c pop edi */
  EDI = (pop32());
  /* 1003808d pop esi */
  ESI = (pop32());
  /* 1003808e ret  */
  ESPCHK(0x10038028u, _esp0);
  ESP += 4; return;
}

/* FUN_1000808f @ 0x1003808f (160 bytes, 62 insns) */
void f_1003808f(void) {
  FTRACE(0x1003808fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003808f mov eax, dword ptr [0x10040680] */
  EAX = (r32((uint32_t)(0x10040680)));
  /* 10038094 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038097 je 0x1003812e */
  if (C.zf) goto L_1003812e;
  /* 1003809d push esi */
  push32((uint32_t)(ESI));
  /* 1003809e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100380a2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100380a4 jne 0x100380b3 */
  if (!C.zf) goto L_100380b3;
  /* 100380a6 push eax */
  push32((uint32_t)(EAX));
  /* 100380a7 call dword ptr [0x1003e038] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e038))), 0x100380adu);
  /* 100380ad mov esi, eax */
  ESI = (EAX);
  /* 100380af test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100380b1 je 0x1003811f */
  if (C.zf) goto L_1003811f;
L_100380b3:;
  /* 100380b3 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 100380b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100380b8 je 0x100380c1 */
  if (C.zf) goto L_100380c1;
  /* 100380ba push eax */
  push32((uint32_t)(EAX));
  /* 100380bb call 0x1003a1a6 */
  push32(0x100380c0u); f_1003a1a6();
  /* 100380c0 pop ecx */
  ECX = (pop32());
L_100380c1:;
  /* 100380c1 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 100380c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100380c6 je 0x100380cf */
  if (C.zf) goto L_100380cf;
  /* 100380c8 push eax */
  push32((uint32_t)(EAX));
  /* 100380c9 call 0x1003a1a6 */
  push32(0x100380ceu); f_1003a1a6();
  /* 100380ce pop ecx */
  ECX = (pop32());
L_100380cf:;
  /* 100380cf mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 100380d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100380d4 je 0x100380dd */
  if (C.zf) goto L_100380dd;
  /* 100380d6 push eax */
  push32((uint32_t)(EAX));
  /* 100380d7 call 0x1003a1a6 */
  push32(0x100380dcu); f_1003a1a6();
  /* 100380dc pop ecx */
  ECX = (pop32());
L_100380dd:;
  /* 100380dd mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 100380e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100380e2 je 0x100380eb */
  if (C.zf) goto L_100380eb;
  /* 100380e4 push eax */
  push32((uint32_t)(EAX));
  /* 100380e5 call 0x1003a1a6 */
  push32(0x100380eau); f_1003a1a6();
  /* 100380ea pop ecx */
  ECX = (pop32());
L_100380eb:;
  /* 100380eb mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 100380ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100380f0 je 0x100380f9 */
  if (C.zf) goto L_100380f9;
  /* 100380f2 push eax */
  push32((uint32_t)(EAX));
  /* 100380f3 call 0x1003a1a6 */
  push32(0x100380f8u); f_1003a1a6();
  /* 100380f8 pop ecx */
  ECX = (pop32());
L_100380f9:;
  /* 100380f9 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 100380fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100380fe je 0x10038107 */
  if (C.zf) goto L_10038107;
  /* 10038100 push eax */
  push32((uint32_t)(EAX));
  /* 10038101 call 0x1003a1a6 */
  push32(0x10038106u); f_1003a1a6();
  /* 10038106 pop ecx */
  ECX = (pop32());
L_10038107:;
  /* 10038107 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 1003810a cmp eax, 0x10040cd0 */
  { uint32_t _a=(EAX),_b=(0x10040cd0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003810f je 0x10038118 */
  if (C.zf) goto L_10038118;
  /* 10038111 push eax */
  push32((uint32_t)(EAX));
  /* 10038112 call 0x1003a1a6 */
  push32(0x10038117u); f_1003a1a6();
  /* 10038117 pop ecx */
  ECX = (pop32());
L_10038118:;
  /* 10038118 push esi */
  push32((uint32_t)(ESI));
  /* 10038119 call 0x1003a1a6 */
  push32(0x1003811eu); f_1003a1a6();
  /* 1003811e pop ecx */
  ECX = (pop32());
L_1003811f:;
  /* 1003811f push 0 */
  push32((uint32_t)(0x0u));
  /* 10038121 push dword ptr [0x10040680] */
  push32((uint32_t)(r32((uint32_t)(0x10040680))));
  /* 10038127 call dword ptr [0x1003e028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e028))), 0x1003812du);
  /* 1003812d pop esi */
  ESI = (pop32());
L_1003812e:;
  /* 1003812e ret  */
  ESPCHK(0x1003808fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000812f @ 0x1003812f (444 bytes, 150 insns) */
void f_1003812f(void) {
  FTRACE(0x1003812fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003812f push ebp */
  push32((uint32_t)(EBP));
  /* 10038130 mov ebp, esp */
  EBP = (ESP);
  /* 10038132 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10038135 push ebx */
  push32((uint32_t)(EBX));
  /* 10038136 push esi */
  push32((uint32_t)(ESI));
  /* 10038137 push edi */
  push32((uint32_t)(EDI));
  /* 10038138 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1003813d call 0x1003a28f */
  push32(0x10038142u); f_1003a28f();
  /* 10038142 mov esi, eax */
  ESI = (EAX);
  /* 10038144 pop ecx */
  ECX = (pop32());
  /* 10038145 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10038147 jne 0x10038151 */
  if (!C.zf) goto L_10038151;
  /* 10038149 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1003814b call 0x10037091 */
  push32(0x10038150u); f_10037091();
  /* 10038150 pop ecx */
  ECX = (pop32());
L_10038151:;
  /* 10038151 mov dword ptr [0x10047c20], esi */
  w32((uint32_t)(0x10047c20), (ESI));
  /* 10038157 mov dword ptr [0x10047d20], 0x20 */
  w32((uint32_t)(0x10047d20), (0x20u));
  /* 10038161 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_10038167:;
  /* 10038167 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038169 jae 0x10038189 */
  if (!C.cf) goto L_10038189;
  /* 1003816b and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 1003816f or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 10038172 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 10038176 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 1003817a mov eax, dword ptr [0x10047c20] */
  EAX = (r32((uint32_t)(0x10047c20)));
  /* 1003817f add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10038182 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10038187 jmp 0x10038167 */
  goto L_10038167;
L_10038189:;
  /* 10038189 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 1003818c push eax */
  push32((uint32_t)(EAX));
  /* 1003818d call dword ptr [0x1003e04c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e04c))), 0x10038193u);
  /* 10038193 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10038198 je 0x1003826f */
  if (C.zf) goto L_1003826f;
  /* 1003819e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 100381a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100381a3 je 0x1003826f */
  if (C.zf) goto L_1003826f;
  /* 100381a9 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 100381ab lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 100381ae lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 100381b1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 100381b4 mov eax, 0x800 */
  EAX = (0x800u);
  /* 100381b9 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100381bb jl 0x100381bf */
  if ((C.sf!=C.of)) goto L_100381bf;
  /* 100381bd mov edi, eax */
  EDI = (EAX);
L_100381bf:;
  /* 100381bf cmp dword ptr [0x10047d20], edi */
  { uint32_t _a=(r32((uint32_t)(0x10047d20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100381c5 jge 0x1003821d */
  if ((C.sf==C.of)) goto L_1003821d;
  /* 100381c7 mov esi, 0x10047c24 */
  ESI = (0x10047c24u);
L_100381cc:;
  /* 100381cc push 0x480 */
  push32((uint32_t)(0x480u));
  /* 100381d1 call 0x1003a28f */
  push32(0x100381d6u); f_1003a28f();
  /* 100381d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100381d8 pop ecx */
  ECX = (pop32());
  /* 100381d9 je 0x10038217 */
  if (C.zf) goto L_10038217;
  /* 100381db add dword ptr [0x10047d20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10047d20))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x10047d20), (_r)); fl_add(_a,_b,_r,32); }
  /* 100381e2 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 100381e4 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_100381ea:;
  /* 100381ea cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100381ec jae 0x1003820a */
  if (!C.cf) goto L_1003820a;
  /* 100381ee and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 100381f2 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 100381f5 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 100381f9 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 100381fd mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 100381ff add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10038202 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10038208 jmp 0x100381ea */
  goto L_100381ea;
L_1003820a:;
  /* 1003820a add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1003820d cmp dword ptr [0x10047d20], edi */
  { uint32_t _a=(r32((uint32_t)(0x10047d20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038213 jl 0x100381cc */
  if ((C.sf!=C.of)) goto L_100381cc;
  /* 10038215 jmp 0x1003821d */
  goto L_1003821d;
L_10038217:;
  /* 10038217 mov edi, dword ptr [0x10047d20] */
  EDI = (r32((uint32_t)(0x10047d20)));
L_1003821d:;
  /* 1003821d xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1003821f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10038221 jle 0x1003826f */
  if ((C.zf||C.sf!=C.of)) goto L_1003826f;
L_10038223:;
  /* 10038223 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10038226 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10038228 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003822b je 0x10038265 */
  if (C.zf) goto L_10038265;
  /* 1003822d mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 1003822f test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 10038231 je 0x10038265 */
  if (C.zf) goto L_10038265;
  /* 10038233 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 10038235 jne 0x10038242 */
  if (!C.zf) goto L_10038242;
  /* 10038237 push ecx */
  push32((uint32_t)(ECX));
  /* 10038238 call dword ptr [0x1003e048] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e048))), 0x1003823eu);
  /* 1003823e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10038240 je 0x10038265 */
  if (C.zf) goto L_10038265;
L_10038242:;
  /* 10038242 mov ecx, esi */
  ECX = (ESI);
  /* 10038244 mov eax, esi */
  EAX = (ESI);
  /* 10038246 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10038249 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1003824c mov ecx, dword ptr [ecx*4 + 0x10047c20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10047c20)));
  /* 10038253 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10038256 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 10038259 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1003825c mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 1003825e mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10038260 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 10038262 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_10038265:;
  /* 10038265 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 10038269 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1003826a inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1003826b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003826d jl 0x10038223 */
  if ((C.sf!=C.of)) goto L_10038223;
L_1003826f:;
  /* 1003826f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10038271:;
  /* 10038271 mov ecx, dword ptr [0x10047c20] */
  ECX = (r32((uint32_t)(0x10047c20)));
  /* 10038277 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 1003827a cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003827e lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 10038281 jne 0x100382d0 */
  if (!C.zf) goto L_100382d0;
  /* 10038283 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10038285 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 10038289 jne 0x10038290 */
  if (!C.zf) goto L_10038290;
  /* 1003828b push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1003828d pop eax */
  EAX = (pop32());
  /* 1003828e jmp 0x1003829a */
  goto L_1003829a;
L_10038290:;
  /* 10038290 mov eax, ebx */
  EAX = (EBX);
  /* 10038292 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10038293 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10038295 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10038297 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1003829a:;
  /* 1003829a push eax */
  push32((uint32_t)(EAX));
  /* 1003829b call dword ptr [0x1003e044] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e044))), 0x100382a1u);
  /* 100382a1 mov edi, eax */
  EDI = (EAX);
  /* 100382a3 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100382a6 je 0x100382bf */
  if (C.zf) goto L_100382bf;
  /* 100382a8 push edi */
  push32((uint32_t)(EDI));
  /* 100382a9 call dword ptr [0x1003e048] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e048))), 0x100382afu);
  /* 100382af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100382b1 je 0x100382bf */
  if (C.zf) goto L_100382bf;
  /* 100382b3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 100382b8 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 100382ba cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100382bd jne 0x100382c5 */
  if (!C.zf) goto L_100382c5;
L_100382bf:;
  /* 100382bf or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 100382c3 jmp 0x100382d4 */
  goto L_100382d4;
L_100382c5:;
  /* 100382c5 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100382c8 jne 0x100382d4 */
  if (!C.zf) goto L_100382d4;
  /* 100382ca or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 100382ce jmp 0x100382d4 */
  goto L_100382d4;
L_100382d0:;
  /* 100382d0 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_100382d4:;
  /* 100382d4 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100382d5 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100382d8 jl 0x10038271 */
  if ((C.sf!=C.of)) goto L_10038271;
  /* 100382da push dword ptr [0x10047d20] */
  push32((uint32_t)(r32((uint32_t)(0x10047d20))));
  /* 100382e0 call dword ptr [0x1003e040] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e040))), 0x100382e6u);
  /* 100382e6 pop edi */
  EDI = (pop32());
  /* 100382e7 pop esi */
  ESI = (pop32());
  /* 100382e8 pop ebx */
  EBX = (pop32());
  /* 100382e9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100382ea ret  */
  ESPCHK(0x1003812fu, _esp0);
  ESP += 4; return;
}

/* FUN_100082eb @ 0x100382eb (84 bytes, 33 insns) */
void f_100382eb(void) {
  FTRACE(0x100382ebu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100382eb push ebx */
  push32((uint32_t)(EBX));
  /* 100382ec push esi */
  push32((uint32_t)(ESI));
  /* 100382ed push edi */
  push32((uint32_t)(EDI));
  /* 100382ee mov esi, 0x10047c20 */
  ESI = (0x10047c20u);
L_100382f3:;
  /* 100382f3 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 100382f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100382f7 je 0x10038330 */
  if (C.zf) goto L_10038330;
  /* 100382f9 mov edi, eax */
  EDI = (EAX);
  /* 100382fb add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10038300 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038302 jae 0x10038325 */
  if (!C.cf) goto L_10038325;
  /* 10038304 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_10038307:;
  /* 10038307 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003830b je 0x10038314 */
  if (C.zf) goto L_10038314;
  /* 1003830d push ebx */
  push32((uint32_t)(EBX));
  /* 1003830e call dword ptr [0x1003e050] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e050))), 0x10038314u);
L_10038314:;
  /* 10038314 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10038316 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10038319 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003831e add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10038321 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038323 jb 0x10038307 */
  if (C.cf) goto L_10038307;
L_10038325:;
  /* 10038325 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10038327 call 0x1003a1a6 */
  push32(0x1003832cu); f_1003a1a6();
  /* 1003832c and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 1003832f pop ecx */
  ECX = (pop32());
L_10038330:;
  /* 10038330 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10038333 cmp esi, 0x10047d20 */
  { uint32_t _a=(ESI),_b=(0x10047d20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038339 jl 0x100382f3 */
  if ((C.sf!=C.of)) goto L_100382f3;
  /* 1003833b pop edi */
  EDI = (pop32());
  /* 1003833c pop esi */
  ESI = (pop32());
  /* 1003833d pop ebx */
  EBX = (pop32());
  /* 1003833e ret  */
  ESPCHK(0x100382ebu, _esp0);
  ESP += 4; return;
}

/* FUN_1000833f @ 0x1003833f (185 bytes, 71 insns) */
void f_1003833f(void) {
  FTRACE(0x1003833fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003833f push ebx */
  push32((uint32_t)(EBX));
  /* 10038340 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10038342 cmp dword ptr [0x10047d28], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10047d28))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038348 push esi */
  push32((uint32_t)(ESI));
  /* 10038349 push edi */
  push32((uint32_t)(EDI));
  /* 1003834a jne 0x10038351 */
  if (!C.zf) goto L_10038351;
  /* 1003834c call 0x1003a7a1 */
  push32(0x10038351u); f_1003a7a1();
L_10038351:;
  /* 10038351 mov esi, dword ptr [0x10046638] */
  ESI = (r32((uint32_t)(0x10046638)));
  /* 10038357 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10038359:;
  /* 10038359 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1003835b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003835d je 0x10038371 */
  if (C.zf) goto L_10038371;
  /* 1003835f cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10038361 je 0x10038364 */
  if (C.zf) goto L_10038364;
  /* 10038363 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10038364:;
  /* 10038364 push esi */
  push32((uint32_t)(ESI));
  /* 10038365 call 0x10039020 */
  push32(0x1003836au); f_10039020();
  /* 1003836a pop ecx */
  ECX = (pop32());
  /* 1003836b lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 1003836f jmp 0x10038359 */
  goto L_10038359;
L_10038371:;
  /* 10038371 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 10038378 push eax */
  push32((uint32_t)(EAX));
  /* 10038379 call 0x1003a28f */
  push32(0x1003837eu); f_1003a28f();
  /* 1003837e mov esi, eax */
  ESI = (EAX);
  /* 10038380 pop ecx */
  ECX = (pop32());
  /* 10038381 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038383 mov dword ptr [0x10046668], esi */
  w32((uint32_t)(0x10046668), (ESI));
  /* 10038389 jne 0x10038393 */
  if (!C.zf) goto L_10038393;
  /* 1003838b push 9 */
  push32((uint32_t)(0x9u));
  /* 1003838d call 0x10037091 */
  push32(0x10038392u); f_10037091();
  /* 10038392 pop ecx */
  ECX = (pop32());
L_10038393:;
  /* 10038393 mov edi, dword ptr [0x10046638] */
  EDI = (r32((uint32_t)(0x10046638)));
  /* 10038399 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003839b je 0x100383d6 */
  if (C.zf) goto L_100383d6;
  /* 1003839d push ebp */
  push32((uint32_t)(EBP));
L_1003839e:;
  /* 1003839e push edi */
  push32((uint32_t)(EDI));
  /* 1003839f call 0x10039020 */
  push32(0x100383a4u); f_10039020();
  /* 100383a4 mov ebp, eax */
  EBP = (EAX);
  /* 100383a6 pop ecx */
  ECX = (pop32());
  /* 100383a7 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 100383a8 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100383ab je 0x100383cf */
  if (C.zf) goto L_100383cf;
  /* 100383ad push ebp */
  push32((uint32_t)(EBP));
  /* 100383ae call 0x1003a28f */
  push32(0x100383b3u); f_1003a28f();
  /* 100383b3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100383b5 pop ecx */
  ECX = (pop32());
  /* 100383b6 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 100383b8 jne 0x100383c2 */
  if (!C.zf) goto L_100383c2;
  /* 100383ba push 9 */
  push32((uint32_t)(0x9u));
  /* 100383bc call 0x10037091 */
  push32(0x100383c1u); f_10037091();
  /* 100383c1 pop ecx */
  ECX = (pop32());
L_100383c2:;
  /* 100383c2 push edi */
  push32((uint32_t)(EDI));
  /* 100383c3 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 100383c5 call 0x10039ad0 */
  push32(0x100383cau); f_10039ad0();
  /* 100383ca pop ecx */
  ECX = (pop32());
  /* 100383cb add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100383ce pop ecx */
  ECX = (pop32());
L_100383cf:;
  /* 100383cf add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100383d1 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100383d3 jne 0x1003839e */
  if (!C.zf) goto L_1003839e;
  /* 100383d5 pop ebp */
  EBP = (pop32());
L_100383d6:;
  /* 100383d6 push dword ptr [0x10046638] */
  push32((uint32_t)(r32((uint32_t)(0x10046638))));
  /* 100383dc call 0x1003a1a6 */
  push32(0x100383e1u); f_1003a1a6();
  /* 100383e1 pop ecx */
  ECX = (pop32());
  /* 100383e2 mov dword ptr [0x10046638], ebx */
  w32((uint32_t)(0x10046638), (EBX));
  /* 100383e8 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 100383ea pop edi */
  EDI = (pop32());
  /* 100383eb pop esi */
  ESI = (pop32());
  /* 100383ec mov dword ptr [0x10047d24], 1 */
  w32((uint32_t)(0x10047d24), (0x1u));
  /* 100383f6 pop ebx */
  EBX = (pop32());
  /* 100383f7 ret  */
  ESPCHK(0x1003833fu, _esp0);
  ESP += 4; return;
}

/* FUN_100083f8 @ 0x100383f8 (153 bytes, 62 insns) */
void f_100383f8(void) {
  FTRACE(0x100383f8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100383f8 push ebp */
  push32((uint32_t)(EBP));
  /* 100383f9 mov ebp, esp */
  EBP = (ESP);
  /* 100383fb push ecx */
  push32((uint32_t)(ECX));
  /* 100383fc push ecx */
  push32((uint32_t)(ECX));
  /* 100383fd push ebx */
  push32((uint32_t)(EBX));
  /* 100383fe xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10038400 cmp dword ptr [0x10047d28], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10047d28))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038406 push esi */
  push32((uint32_t)(ESI));
  /* 10038407 push edi */
  push32((uint32_t)(EDI));
  /* 10038408 jne 0x1003840f */
  if (!C.zf) goto L_1003840f;
  /* 1003840a call 0x1003a7a1 */
  push32(0x1003840fu); f_1003a7a1();
L_1003840f:;
  /* 1003840f mov esi, 0x1004668c */
  ESI = (0x1004668cu);
  /* 10038414 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10038419 push esi */
  push32((uint32_t)(ESI));
  /* 1003841a push ebx */
  push32((uint32_t)(EBX));
  /* 1003841b call dword ptr [0x1003e054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e054))), 0x10038421u);
  /* 10038421 mov eax, dword ptr [0x10047d34] */
  EAX = (r32((uint32_t)(0x10047d34)));
  /* 10038426 mov dword ptr [0x10046678], esi */
  w32((uint32_t)(0x10046678), (ESI));
  /* 1003842c mov edi, esi */
  EDI = (ESI);
  /* 1003842e cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10038430 je 0x10038434 */
  if (C.zf) goto L_10038434;
  /* 10038432 mov edi, eax */
  EDI = (EAX);
L_10038434:;
  /* 10038434 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10038437 push eax */
  push32((uint32_t)(EAX));
  /* 10038438 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 1003843b push eax */
  push32((uint32_t)(EAX));
  /* 1003843c push ebx */
  push32((uint32_t)(EBX));
  /* 1003843d push ebx */
  push32((uint32_t)(EBX));
  /* 1003843e push edi */
  push32((uint32_t)(EDI));
  /* 1003843f call 0x10038491 */
  push32(0x10038444u); f_10038491();
  /* 10038444 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10038447 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1003844a lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 1003844d push eax */
  push32((uint32_t)(EAX));
  /* 1003844e call 0x1003a28f */
  push32(0x10038453u); f_1003a28f();
  /* 10038453 mov esi, eax */
  ESI = (EAX);
  /* 10038455 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10038458 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003845a jne 0x10038464 */
  if (!C.zf) goto L_10038464;
  /* 1003845c push 8 */
  push32((uint32_t)(0x8u));
  /* 1003845e call 0x10037091 */
  push32(0x10038463u); f_10037091();
  /* 10038463 pop ecx */
  ECX = (pop32());
L_10038464:;
  /* 10038464 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10038467 push eax */
  push32((uint32_t)(EAX));
  /* 10038468 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 1003846b push eax */
  push32((uint32_t)(EAX));
  /* 1003846c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1003846f lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 10038472 push eax */
  push32((uint32_t)(EAX));
  /* 10038473 push esi */
  push32((uint32_t)(ESI));
  /* 10038474 push edi */
  push32((uint32_t)(EDI));
  /* 10038475 call 0x10038491 */
  push32(0x1003847au); f_10038491();
  /* 1003847a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1003847d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10038480 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10038481 mov dword ptr [0x10046660], esi */
  w32((uint32_t)(0x10046660), (ESI));
  /* 10038487 pop edi */
  EDI = (pop32());
  /* 10038488 pop esi */
  ESI = (pop32());
  /* 10038489 mov dword ptr [0x1004665c], eax */
  w32((uint32_t)(0x1004665c), (EAX));
  /* 1003848e pop ebx */
  EBX = (pop32());
  /* 1003848f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10038490 ret  */
  ESPCHK(0x100383f8u, _esp0);
  ESP += 4; return;
}

/* FUN_10008491 @ 0x10038491 (436 bytes, 187 insns) */
void f_10038491(void) {
  FTRACE(0x10038491u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10038491 push ebp */
  push32((uint32_t)(EBP));
  /* 10038492 mov ebp, esp */
  EBP = (ESP);
  /* 10038494 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10038497 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1003849a push ebx */
  push32((uint32_t)(EBX));
  /* 1003849b push esi */
  push32((uint32_t)(ESI));
  /* 1003849c and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1003849f mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 100384a2 push edi */
  push32((uint32_t)(EDI));
  /* 100384a3 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 100384a6 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 100384ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100384af test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100384b1 je 0x100384bb */
  if (C.zf) goto L_100384bb;
  /* 100384b3 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 100384b5 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100384b8 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_100384bb:;
  /* 100384bb cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100384be jne 0x10038504 */
  if (!C.zf) goto L_10038504;
L_100384c0:;
  /* 100384c0 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 100384c3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100384c4 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100384c7 je 0x100384f2 */
  if (C.zf) goto L_100384f2;
  /* 100384c9 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100384cb je 0x100384f2 */
  if (C.zf) goto L_100384f2;
  /* 100384cd movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 100384d0 test byte ptr [edx + 0x10046ae1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10046ae1)))&(0x4u); fl_logic(_r,8); }
  /* 100384d7 je 0x100384e5 */
  if (C.zf) goto L_100384e5;
  /* 100384d9 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 100384db test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100384dd je 0x100384e5 */
  if (C.zf) goto L_100384e5;
  /* 100384df mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 100384e1 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 100384e3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100384e4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_100384e5:;
  /* 100384e5 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 100384e7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100384e9 je 0x100384c0 */
  if (C.zf) goto L_100384c0;
  /* 100384eb mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 100384ed mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 100384ef inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100384f0 jmp 0x100384c0 */
  goto L_100384c0;
L_100384f2:;
  /* 100384f2 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 100384f4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100384f6 je 0x100384fc */
  if (C.zf) goto L_100384fc;
  /* 100384f8 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 100384fb inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_100384fc:;
  /* 100384fc cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100384ff jne 0x10038547 */
  if (!C.zf) goto L_10038547;
  /* 10038501 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10038502 jmp 0x10038547 */
  goto L_10038547;
L_10038504:;
  /* 10038504 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10038506 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10038508 je 0x1003850f */
  if (C.zf) goto L_1003850f;
  /* 1003850a mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1003850c mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1003850e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1003850f:;
  /* 1003850f mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10038511 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10038512 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10038515 test byte ptr [ebx + 0x10046ae1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10046ae1)))&(0x4u); fl_logic(_r,8); }
  /* 1003851c je 0x1003852a */
  if (C.zf) goto L_1003852a;
  /* 1003851e inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10038520 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10038522 je 0x10038529 */
  if (C.zf) goto L_10038529;
  /* 10038524 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 10038526 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 10038528 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10038529:;
  /* 10038529 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1003852a:;
  /* 1003852a cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003852d je 0x10038538 */
  if (C.zf) goto L_10038538;
  /* 1003852f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10038531 je 0x1003853c */
  if (C.zf) goto L_1003853c;
  /* 10038533 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10038536 jne 0x10038504 */
  if (!C.zf) goto L_10038504;
L_10038538:;
  /* 10038538 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1003853a jne 0x1003853f */
  if (!C.zf) goto L_1003853f;
L_1003853c:;
  /* 1003853c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1003853d jmp 0x10038547 */
  goto L_10038547;
L_1003853f:;
  /* 1003853f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10038541 je 0x10038547 */
  if (C.zf) goto L_10038547;
  /* 10038543 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_10038547:;
  /* 10038547 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_1003854b:;
  /* 1003854b cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003854e je 0x10038634 */
  if (C.zf) goto L_10038634;
L_10038554:;
  /* 10038554 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10038556 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10038559 je 0x10038560 */
  if (C.zf) goto L_10038560;
  /* 1003855b cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003855e jne 0x10038563 */
  if (!C.zf) goto L_10038563;
L_10038560:;
  /* 10038560 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10038561 jmp 0x10038554 */
  goto L_10038554;
L_10038563:;
  /* 10038563 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10038566 je 0x10038634 */
  if (C.zf) goto L_10038634;
  /* 1003856c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1003856e je 0x10038578 */
  if (C.zf) goto L_10038578;
  /* 10038570 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10038572 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10038575 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10038578:;
  /* 10038578 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1003857b inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_1003857d:;
  /* 1003857d mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 10038584 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10038586:;
  /* 10038586 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10038589 jne 0x1003858f */
  if (!C.zf) goto L_1003858f;
  /* 1003858b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1003858c inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1003858d jmp 0x10038586 */
  goto L_10038586;
L_1003858f:;
  /* 1003858f cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10038592 jne 0x100385c0 */
  if (!C.zf) goto L_100385c0;
  /* 10038594 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 10038597 jne 0x100385be */
  if (!C.zf) goto L_100385be;
  /* 10038599 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1003859b cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003859e je 0x100385ad */
  if (C.zf) goto L_100385ad;
  /* 100385a0 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100385a4 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 100385a7 jne 0x100385ad */
  if (!C.zf) goto L_100385ad;
  /* 100385a9 mov eax, edx */
  EAX = (EDX);
  /* 100385ab jmp 0x100385b0 */
  goto L_100385b0;
L_100385ad:;
  /* 100385ad mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_100385b0:;
  /* 100385b0 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 100385b3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100385b5 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100385b8 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 100385bb mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_100385be:;
  /* 100385be shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_100385c0:;
  /* 100385c0 mov edx, ebx */
  EDX = (EBX);
  /* 100385c2 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100385c3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 100385c5 je 0x100385d5 */
  if (C.zf) goto L_100385d5;
  /* 100385c7 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_100385c8:;
  /* 100385c8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100385ca je 0x100385d0 */
  if (C.zf) goto L_100385d0;
  /* 100385cc mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 100385cf inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_100385d0:;
  /* 100385d0 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 100385d2 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100385d3 jne 0x100385c8 */
  if (!C.zf) goto L_100385c8;
L_100385d5:;
  /* 100385d5 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 100385d7 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100385d9 je 0x10038625 */
  if (C.zf) goto L_10038625;
  /* 100385db cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100385df jne 0x100385eb */
  if (!C.zf) goto L_100385eb;
  /* 100385e1 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100385e4 je 0x10038625 */
  if (C.zf) goto L_10038625;
  /* 100385e6 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100385e9 je 0x10038625 */
  if (C.zf) goto L_10038625;
L_100385eb:;
  /* 100385eb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100385ef je 0x1003861f */
  if (C.zf) goto L_1003861f;
  /* 100385f1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100385f3 je 0x1003860e */
  if (C.zf) goto L_1003860e;
  /* 100385f5 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 100385f8 test byte ptr [ebx + 0x10046ae1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10046ae1)))&(0x4u); fl_logic(_r,8); }
  /* 100385ff je 0x10038607 */
  if (C.zf) goto L_10038607;
  /* 10038601 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10038603 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10038604 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10038605 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10038607:;
  /* 10038607 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10038609 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1003860b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1003860c jmp 0x1003861d */
  goto L_1003861d;
L_1003860e:;
  /* 1003860e movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 10038611 test byte ptr [edx + 0x10046ae1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10046ae1)))&(0x4u); fl_logic(_r,8); }
  /* 10038618 je 0x1003861d */
  if (C.zf) goto L_1003861d;
  /* 1003861a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1003861b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1003861d:;
  /* 1003861d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1003861f:;
  /* 1003861f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10038620 jmp 0x1003857d */
  goto L_1003857d;
L_10038625:;
  /* 10038625 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10038627 je 0x1003862d */
  if (C.zf) goto L_1003862d;
  /* 10038629 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 1003862c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1003862d:;
  /* 1003862d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1003862f jmp 0x1003854b */
  goto L_1003854b;
L_10038634:;
  /* 10038634 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10038636 je 0x1003863b */
  if (C.zf) goto L_1003863b;
  /* 10038638 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1003863b:;
  /* 1003863b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1003863e pop edi */
  EDI = (pop32());
  /* 1003863f pop esi */
  ESI = (pop32());
  /* 10038640 pop ebx */
  EBX = (pop32());
  /* 10038641 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 10038643 pop ebp */
  EBP = (pop32());
  /* 10038644 ret  */
  ESPCHK(0x10038491u, _esp0);
  ESP += 4; return;
}

/* FUN_10008645 @ 0x10038645 (306 bytes, 132 insns) */
void f_10038645(void) {
  FTRACE(0x10038645u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10038645 push ecx */
  push32((uint32_t)(ECX));
  /* 10038646 push ecx */
  push32((uint32_t)(ECX));
  /* 10038647 mov eax, dword ptr [0x10046790] */
  EAX = (r32((uint32_t)(0x10046790)));
  /* 1003864c push ebx */
  push32((uint32_t)(EBX));
  /* 1003864d push ebp */
  push32((uint32_t)(EBP));
  /* 1003864e mov ebp, dword ptr [0x1003e068] */
  EBP = (r32((uint32_t)(0x1003e068)));
  /* 10038654 push esi */
  push32((uint32_t)(ESI));
  /* 10038655 push edi */
  push32((uint32_t)(EDI));
  /* 10038656 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10038658 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1003865a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1003865c cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003865e jne 0x10038693 */
  if (!C.zf) goto L_10038693;
  /* 10038660 call ebp */
  call_ind((uint32_t)(EBP), 0x10038662u);
  /* 10038662 mov esi, eax */
  ESI = (EAX);
  /* 10038664 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038666 je 0x10038674 */
  if (C.zf) goto L_10038674;
  /* 10038668 mov dword ptr [0x10046790], 1 */
  w32((uint32_t)(0x10046790), (0x1u));
  /* 10038672 jmp 0x1003869c */
  goto L_1003869c;
L_10038674:;
  /* 10038674 call dword ptr [0x1003e064] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e064))), 0x1003867au);
  /* 1003867a mov edi, eax */
  EDI = (EAX);
  /* 1003867c cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003867e je 0x1003876e */
  if (C.zf) goto L_1003876e;
  /* 10038684 mov dword ptr [0x10046790], 2 */
  w32((uint32_t)(0x10046790), (0x2u));
  /* 1003868e jmp 0x10038722 */
  goto L_10038722;
L_10038693:;
  /* 10038693 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038696 jne 0x1003871d */
  if (!C.zf) goto L_1003871d;
L_1003869c:;
  /* 1003869c cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003869e jne 0x100386ac */
  if (!C.zf) goto L_100386ac;
  /* 100386a0 call ebp */
  call_ind((uint32_t)(EBP), 0x100386a2u);
  /* 100386a2 mov esi, eax */
  ESI = (EAX);
  /* 100386a4 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100386a6 je 0x1003876e */
  if (C.zf) goto L_1003876e;
L_100386ac:;
  /* 100386ac cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100386af mov eax, esi */
  EAX = (ESI);
  /* 100386b1 je 0x100386c1 */
  if (C.zf) goto L_100386c1;
L_100386b3:;
  /* 100386b3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100386b4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100386b5 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100386b8 jne 0x100386b3 */
  if (!C.zf) goto L_100386b3;
  /* 100386ba inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100386bb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100386bc cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100386bf jne 0x100386b3 */
  if (!C.zf) goto L_100386b3;
L_100386c1:;
  /* 100386c1 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100386c3 mov edi, dword ptr [0x1003e060] */
  EDI = (r32((uint32_t)(0x1003e060)));
  /* 100386c9 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 100386cb push ebx */
  push32((uint32_t)(EBX));
  /* 100386cc push ebx */
  push32((uint32_t)(EBX));
  /* 100386cd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100386ce push ebx */
  push32((uint32_t)(EBX));
  /* 100386cf push ebx */
  push32((uint32_t)(EBX));
  /* 100386d0 push eax */
  push32((uint32_t)(EAX));
  /* 100386d1 push esi */
  push32((uint32_t)(ESI));
  /* 100386d2 push ebx */
  push32((uint32_t)(EBX));
  /* 100386d3 push ebx */
  push32((uint32_t)(EBX));
  /* 100386d4 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 100386d8 call edi */
  call_ind((uint32_t)(EDI), 0x100386dau);
  /* 100386da mov ebp, eax */
  EBP = (EAX);
  /* 100386dc cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100386de je 0x10038712 */
  if (C.zf) goto L_10038712;
  /* 100386e0 push ebp */
  push32((uint32_t)(EBP));
  /* 100386e1 call 0x1003a28f */
  push32(0x100386e6u); f_1003a28f();
  /* 100386e6 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100386e8 pop ecx */
  ECX = (pop32());
  /* 100386e9 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 100386ed je 0x10038712 */
  if (C.zf) goto L_10038712;
  /* 100386ef push ebx */
  push32((uint32_t)(EBX));
  /* 100386f0 push ebx */
  push32((uint32_t)(EBX));
  /* 100386f1 push ebp */
  push32((uint32_t)(EBP));
  /* 100386f2 push eax */
  push32((uint32_t)(EAX));
  /* 100386f3 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 100386f7 push esi */
  push32((uint32_t)(ESI));
  /* 100386f8 push ebx */
  push32((uint32_t)(EBX));
  /* 100386f9 push ebx */
  push32((uint32_t)(EBX));
  /* 100386fa call edi */
  call_ind((uint32_t)(EDI), 0x100386fcu);
  /* 100386fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100386fe jne 0x1003870e */
  if (!C.zf) goto L_1003870e;
  /* 10038700 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 10038704 call 0x1003a1a6 */
  push32(0x10038709u); f_1003a1a6();
  /* 10038709 pop ecx */
  ECX = (pop32());
  /* 1003870a mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_1003870e:;
  /* 1003870e mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_10038712:;
  /* 10038712 push esi */
  push32((uint32_t)(ESI));
  /* 10038713 call dword ptr [0x1003e05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e05c))), 0x10038719u);
  /* 10038719 mov eax, ebx */
  EAX = (EBX);
  /* 1003871b jmp 0x10038770 */
  goto L_10038770;
L_1003871d:;
  /* 1003871d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038720 jne 0x1003876e */
  if (!C.zf) goto L_1003876e;
L_10038722:;
  /* 10038722 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038724 jne 0x10038732 */
  if (!C.zf) goto L_10038732;
  /* 10038726 call dword ptr [0x1003e064] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e064))), 0x1003872cu);
  /* 1003872c mov edi, eax */
  EDI = (EAX);
  /* 1003872e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038730 je 0x1003876e */
  if (C.zf) goto L_1003876e;
L_10038732:;
  /* 10038732 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10038734 mov eax, edi */
  EAX = (EDI);
  /* 10038736 je 0x10038742 */
  if (C.zf) goto L_10038742;
L_10038738:;
  /* 10038738 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10038739 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003873b jne 0x10038738 */
  if (!C.zf) goto L_10038738;
  /* 1003873d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1003873e cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10038740 jne 0x10038738 */
  if (!C.zf) goto L_10038738;
L_10038742:;
  /* 10038742 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10038744 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10038745 mov ebp, eax */
  EBP = (EAX);
  /* 10038747 push ebp */
  push32((uint32_t)(EBP));
  /* 10038748 call 0x1003a28f */
  push32(0x1003874du); f_1003a28f();
  /* 1003874d mov esi, eax */
  ESI = (EAX);
  /* 1003874f pop ecx */
  ECX = (pop32());
  /* 10038750 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038752 jne 0x10038758 */
  if (!C.zf) goto L_10038758;
  /* 10038754 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10038756 jmp 0x10038763 */
  goto L_10038763;
L_10038758:;
  /* 10038758 push ebp */
  push32((uint32_t)(EBP));
  /* 10038759 push edi */
  push32((uint32_t)(EDI));
  /* 1003875a push esi */
  push32((uint32_t)(ESI));
  /* 1003875b call 0x1003a7c0 */
  push32(0x10038760u); f_1003a7c0();
  /* 10038760 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10038763:;
  /* 10038763 push edi */
  push32((uint32_t)(EDI));
  /* 10038764 call dword ptr [0x1003e058] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e058))), 0x1003876au);
  /* 1003876a mov eax, esi */
  EAX = (ESI);
  /* 1003876c jmp 0x10038770 */
  goto L_10038770;
L_1003876e:;
  /* 1003876e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10038770:;
  /* 10038770 pop edi */
  EDI = (pop32());
  /* 10038771 pop esi */
  ESI = (pop32());
  /* 10038772 pop ebp */
  EBP = (pop32());
  /* 10038773 pop ebx */
  EBX = (pop32());
  /* 10038774 pop ecx */
  ECX = (pop32());
  /* 10038775 pop ecx */
  ECX = (pop32());
  /* 10038776 ret  */
  ESPCHK(0x10038645u, _esp0);
  ESP += 4; return;
}

/* FUN_10008777 @ 0x10038777 (45 bytes, 17 insns) */
void f_10038777(void) {
  FTRACE(0x10038777u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10038777 push esi */
  push32((uint32_t)(ESI));
  /* 10038778 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1003877c push 0 */
  push32((uint32_t)(0x0u));
  /* 1003877e and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 10038781 call dword ptr [0x1003e004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e004))), 0x10038787u);
  /* 10038787 cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1003878c jne 0x100387a2 */
  if (!C.zf) goto L_100387a2;
  /* 1003878e mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 10038791 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10038793 je 0x100387a2 */
  if (C.zf) goto L_100387a2;
  /* 10038795 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10038797 mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 1003879a mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 1003879c mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 1003879f mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_100387a2:;
  /* 100387a2 pop esi */
  ESI = (pop32());
  /* 100387a3 ret  */
  ESPCHK(0x10038777u, _esp0);
  ESP += 4; return;
}

/* FUN_100087a4 @ 0x100387a4 (328 bytes, 115 insns) */
void f_100387a4(void) {
  FTRACE(0x100387a4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100387a4 push ebp */
  push32((uint32_t)(EBP));
  /* 100387a5 mov ebp, esp */
  EBP = (ESP);
  /* 100387a7 mov eax, 0x122c */
  EAX = (0x122cu);
  /* 100387ac call 0x1003aeb0 */
  push32(0x100387b1u); f_1003aeb0();
  /* 100387b1 lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 100387b7 push ebx */
  push32((uint32_t)(EBX));
  /* 100387b8 push eax */
  push32((uint32_t)(EAX));
  /* 100387b9 mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 100387c3 call dword ptr [0x1003e070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e070))), 0x100387c9u);
  /* 100387c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100387cb je 0x100387e7 */
  if (C.zf) goto L_100387e7;
  /* 100387cd cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100387d4 jne 0x100387e7 */
  if (!C.zf) goto L_100387e7;
  /* 100387d6 cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100387dd jb 0x100387e7 */
  if (C.cf) goto L_100387e7;
  /* 100387df push 1 */
  push32((uint32_t)(0x1u));
  /* 100387e1 pop eax */
  EAX = (pop32());
  /* 100387e2 jmp 0x100388e9 */
  goto L_100388e9;
L_100387e7:;
  /* 100387e7 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 100387ed push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 100387f2 push eax */
  push32((uint32_t)(EAX));
  /* 100387f3 push 0x1003e1c8 */
  push32((uint32_t)(0x1003e1c8u));
  /* 100387f8 call dword ptr [0x1003e06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e06c))), 0x100387feu);
  /* 100387fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10038800 je 0x100388d6 */
  if (C.zf) goto L_100388d6;
  /* 10038806 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10038808 lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 1003880e cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10038814 je 0x10038829 */
  if (C.zf) goto L_10038829;
L_10038816:;
  /* 10038816 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10038818 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003881a jl 0x10038824 */
  if ((C.sf!=C.of)) goto L_10038824;
  /* 1003881c cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003881e jg 0x10038824 */
  if ((!C.zf&&C.sf==C.of)) goto L_10038824;
  /* 10038820 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10038822 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_10038824:;
  /* 10038824 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10038825 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10038827 jne 0x10038816 */
  if (!C.zf) goto L_10038816;
L_10038829:;
  /* 10038829 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 1003882f push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10038831 push eax */
  push32((uint32_t)(EAX));
  /* 10038832 push 0x1003e1b0 */
  push32((uint32_t)(0x1003e1b0u));
  /* 10038837 call 0x1003ae70 */
  push32(0x1003883cu); f_1003ae70();
  /* 1003883c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1003883f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10038841 jne 0x1003884b */
  if (!C.zf) goto L_1003884b;
  /* 10038843 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 10038849 jmp 0x10038894 */
  goto L_10038894;
L_1003884b:;
  /* 1003884b lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 10038851 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10038856 push eax */
  push32((uint32_t)(EAX));
  /* 10038857 push ebx */
  push32((uint32_t)(EBX));
  /* 10038858 call dword ptr [0x1003e054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e054))), 0x1003885eu);
  /* 1003885e cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10038864 lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 1003886a je 0x1003887f */
  if (C.zf) goto L_1003887f;
L_1003886c:;
  /* 1003886c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1003886e cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10038870 jl 0x1003887a */
  if ((C.sf!=C.of)) goto L_1003887a;
  /* 10038872 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10038874 jg 0x1003887a */
  if ((!C.zf&&C.sf==C.of)) goto L_1003887a;
  /* 10038876 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10038878 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_1003887a:;
  /* 1003887a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1003887b cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1003887d jne 0x1003886c */
  if (!C.zf) goto L_1003886c;
L_1003887f:;
  /* 1003887f lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 10038885 push eax */
  push32((uint32_t)(EAX));
  /* 10038886 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 1003888c push eax */
  push32((uint32_t)(EAX));
  /* 1003888d call 0x1003adf0 */
  push32(0x10038892u); f_1003adf0();
  /* 10038892 pop ecx */
  ECX = (pop32());
  /* 10038893 pop ecx */
  ECX = (pop32());
L_10038894:;
  /* 10038894 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038896 je 0x100388d6 */
  if (C.zf) goto L_100388d6;
  /* 10038898 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1003889a push eax */
  push32((uint32_t)(EAX));
  /* 1003889b call 0x1003ad30 */
  push32(0x100388a0u); f_1003ad30();
  /* 100388a0 pop ecx */
  ECX = (pop32());
  /* 100388a1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100388a3 pop ecx */
  ECX = (pop32());
  /* 100388a4 je 0x100388d6 */
  if (C.zf) goto L_100388d6;
  /* 100388a6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100388a7 mov ecx, eax */
  ECX = (EAX);
  /* 100388a9 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100388ab je 0x100388bb */
  if (C.zf) goto L_100388bb;
L_100388ad:;
  /* 100388ad cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100388b0 jne 0x100388b6 */
  if (!C.zf) goto L_100388b6;
  /* 100388b2 mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 100388b4 jmp 0x100388b7 */
  goto L_100388b7;
L_100388b6:;
  /* 100388b6 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_100388b7:;
  /* 100388b7 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100388b9 jne 0x100388ad */
  if (!C.zf) goto L_100388ad;
L_100388bb:;
  /* 100388bb push 0xa */
  push32((uint32_t)(0xau));
  /* 100388bd push ebx */
  push32((uint32_t)(EBX));
  /* 100388be push eax */
  push32((uint32_t)(EAX));
  /* 100388bf call 0x1003aaf5 */
  push32(0x100388c4u); f_1003aaf5();
  /* 100388c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100388c7 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100388ca je 0x100388e9 */
  if (C.zf) goto L_100388e9;
  /* 100388cc cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100388cf je 0x100388e9 */
  if (C.zf) goto L_100388e9;
  /* 100388d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100388d4 je 0x100388e9 */
  if (C.zf) goto L_100388e9;
L_100388d6:;
  /* 100388d6 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 100388d9 push eax */
  push32((uint32_t)(EAX));
  /* 100388da call 0x10038777 */
  push32(0x100388dfu); f_10038777();
  /* 100388df cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100388e3 pop ecx */
  ECX = (pop32());
  /* 100388e4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100388e6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_100388e9:;
  /* 100388e9 pop ebx */
  EBX = (pop32());
  /* 100388ea leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100388eb ret  */
  ESPCHK(0x100387a4u, _esp0);
  ESP += 4; return;
}

/* FUN_100088ec @ 0x100388ec (93 bytes, 30 insns) */
void f_100388ec(void) {
  FTRACE(0x100388ecu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100388ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100388ee push 0 */
  push32((uint32_t)(0x0u));
  /* 100388f0 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100388f4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 100388f9 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 100388fc push eax */
  push32((uint32_t)(EAX));
  /* 100388fd call dword ptr [0x1003e078] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e078))), 0x10038903u);
  /* 10038903 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10038905 mov dword ptr [0x10047c04], eax */
  w32((uint32_t)(0x10047c04), (EAX));
  /* 1003890a je 0x10038942 */
  if (C.zf) goto L_10038942;
  /* 1003890c call 0x100387a4 */
  push32(0x10038911u); f_100387a4();
  /* 10038911 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038914 mov dword ptr [0x10047c08], eax */
  w32((uint32_t)(0x10047c08), (EAX));
  /* 10038919 jne 0x10038928 */
  if (!C.zf) goto L_10038928;
  /* 1003891b push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 10038920 call 0x1003aedf */
  push32(0x10038925u); f_1003aedf();
  /* 10038925 pop ecx */
  ECX = (pop32());
  /* 10038926 jmp 0x10038932 */
  goto L_10038932;
L_10038928:;
  /* 10038928 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003892b jne 0x10038945 */
  if (!C.zf) goto L_10038945;
  /* 1003892d call 0x1003b730 */
  push32(0x10038932u); f_1003b730();
L_10038932:;
  /* 10038932 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10038934 jne 0x10038945 */
  if (!C.zf) goto L_10038945;
  /* 10038936 push dword ptr [0x10047c04] */
  push32((uint32_t)(r32((uint32_t)(0x10047c04))));
  /* 1003893c call dword ptr [0x1003e074] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e074))), 0x10038942u);
L_10038942:;
  /* 10038942 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10038944 ret  */
  ESPCHK(0x100388ecu, _esp0);
  ESP += 4; return;
L_10038945:;
  /* 10038945 push 1 */
  push32((uint32_t)(0x1u));
  /* 10038947 pop eax */
  EAX = (pop32());
  /* 10038948 ret  */
  ESPCHK(0x100388ecu, _esp0);
  ESP += 4; return;
}

/* FUN_10008949 @ 0x10038949 (168 bytes, 56 insns) */
void f_10038949(void) {
  FTRACE(0x10038949u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10038949 mov eax, dword ptr [0x10047c08] */
  EAX = (r32((uint32_t)(0x10047c08)));
  /* 1003894e push esi */
  push32((uint32_t)(ESI));
  /* 1003894f cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038952 push edi */
  push32((uint32_t)(EDI));
  /* 10038953 jne 0x100389bb */
  if (!C.zf) goto L_100389bb;
  /* 10038955 push ebx */
  push32((uint32_t)(EBX));
  /* 10038956 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10038958 cmp dword ptr [0x100469b8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100469b8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003895e push ebp */
  push32((uint32_t)(EBP));
  /* 1003895f mov ebp, dword ptr [0x1003e080] */
  EBP = (r32((uint32_t)(0x1003e080)));
  /* 10038965 jle 0x100389a7 */
  if ((C.zf||C.sf!=C.of)) goto L_100389a7;
  /* 10038967 mov eax, dword ptr [0x100469bc] */
  EAX = (r32((uint32_t)(0x100469bc)));
  /* 1003896c mov edi, dword ptr [0x1003e07c] */
  EDI = (r32((uint32_t)(0x1003e07c)));
  /* 10038972 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_10038975:;
  /* 10038975 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1003897a push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1003897f push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10038981 call edi */
  call_ind((uint32_t)(EDI), 0x10038983u);
  /* 10038983 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10038988 push 0 */
  push32((uint32_t)(0x0u));
  /* 1003898a push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1003898c call edi */
  call_ind((uint32_t)(EDI), 0x1003898eu);
  /* 1003898e push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 10038991 push 0 */
  push32((uint32_t)(0x0u));
  /* 10038993 push dword ptr [0x10047c04] */
  push32((uint32_t)(r32((uint32_t)(0x10047c04))));
  /* 10038999 call ebp */
  call_ind((uint32_t)(EBP), 0x1003899bu);
  /* 1003899b add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1003899e inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1003899f cmp ebx, dword ptr [0x100469b8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x100469b8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100389a5 jl 0x10038975 */
  if ((C.sf!=C.of)) goto L_10038975;
L_100389a7:;
  /* 100389a7 push dword ptr [0x100469bc] */
  push32((uint32_t)(r32((uint32_t)(0x100469bc))));
  /* 100389ad push 0 */
  push32((uint32_t)(0x0u));
  /* 100389af push dword ptr [0x10047c04] */
  push32((uint32_t)(r32((uint32_t)(0x10047c04))));
  /* 100389b5 call ebp */
  call_ind((uint32_t)(EBP), 0x100389b7u);
  /* 100389b7 pop ebp */
  EBP = (pop32());
  /* 100389b8 pop ebx */
  EBX = (pop32());
  /* 100389b9 jmp 0x100389e2 */
  goto L_100389e2;
L_100389bb:;
  /* 100389bb cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100389be jne 0x100389e2 */
  if (!C.zf) goto L_100389e2;
  /* 100389c0 mov edi, 0x10040e50 */
  EDI = (0x10040e50u);
  /* 100389c5 mov esi, edi */
  ESI = (EDI);
L_100389c7:;
  /* 100389c7 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 100389ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100389cc je 0x100389dc */
  if (C.zf) goto L_100389dc;
  /* 100389ce push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 100389d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 100389d5 push eax */
  push32((uint32_t)(EAX));
  /* 100389d6 call dword ptr [0x1003e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e07c))), 0x100389dcu);
L_100389dc:;
  /* 100389dc mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 100389de cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100389e0 jne 0x100389c7 */
  if (!C.zf) goto L_100389c7;
L_100389e2:;
  /* 100389e2 push dword ptr [0x10047c04] */
  push32((uint32_t)(r32((uint32_t)(0x10047c04))));
  /* 100389e8 call dword ptr [0x1003e074] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e074))), 0x100389eeu);
  /* 100389ee pop edi */
  EDI = (pop32());
  /* 100389ef pop esi */
  ESI = (pop32());
  /* 100389f0 ret  */
  ESPCHK(0x10038949u, _esp0);
  ESP += 4; return;
}

/* FUN_100089f1 @ 0x100389f1 (57 bytes, 18 insns) */
void f_100389f1(void) {
  FTRACE(0x100389f1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100389f1 mov eax, dword ptr [0x10046640] */
  EAX = (r32((uint32_t)(0x10046640)));
  /* 100389f6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100389f9 je 0x10038a08 */
  if (C.zf) goto L_10038a08;
  /* 100389fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100389fd jne 0x10038a29 */
  if (!C.zf) goto L_10038a29;
  /* 100389ff cmp dword ptr [0x10046644], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10046644))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038a06 jne 0x10038a29 */
  if (!C.zf) goto L_10038a29;
L_10038a08:;
  /* 10038a08 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10038a0d call 0x10038a2a */
  push32(0x10038a12u); f_10038a2a();
  /* 10038a12 mov eax, dword ptr [0x10046794] */
  EAX = (r32((uint32_t)(0x10046794)));
  /* 10038a17 pop ecx */
  ECX = (pop32());
  /* 10038a18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10038a1a je 0x10038a1e */
  if (C.zf) goto L_10038a1e;
  /* 10038a1c call eax */
  call_ind((uint32_t)(EAX), 0x10038a1eu);
L_10038a1e:;
  /* 10038a1e push 0xff */
  push32((uint32_t)(0xffu));
  /* 10038a23 call 0x10038a2a */
  push32(0x10038a28u); f_10038a2a();
  /* 10038a28 pop ecx */
  ECX = (pop32());
L_10038a29:;
  /* 10038a29 ret  */
  ESPCHK(0x100389f1u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a2a @ 0x10038a2a (339 bytes, 100 insns) */
void f_10038a2a(void) {
  FTRACE(0x10038a2au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10038a2a push ebp */
  push32((uint32_t)(EBP));
  /* 10038a2b mov ebp, esp */
  EBP = (ESP);
  /* 10038a2d sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10038a33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10038a36 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10038a38 mov eax, 0x100406b0 */
  EAX = (0x100406b0u);
L_10038a3d:;
  /* 10038a3d cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038a3f je 0x10038a4c */
  if (C.zf) goto L_10038a4c;
  /* 10038a41 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10038a44 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10038a45 cmp eax, 0x10040740 */
  { uint32_t _a=(EAX),_b=(0x10040740u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038a4a jl 0x10038a3d */
  if ((C.sf!=C.of)) goto L_10038a3d;
L_10038a4c:;
  /* 10038a4c push esi */
  push32((uint32_t)(ESI));
  /* 10038a4d mov esi, ecx */
  ESI = (ECX);
  /* 10038a4f shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 10038a52 cmp edx, dword ptr [esi + 0x100406b0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x100406b0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038a58 jne 0x10038b7a */
  if (!C.zf) goto L_10038b7a;
  /* 10038a5e mov eax, dword ptr [0x10046640] */
  EAX = (r32((uint32_t)(0x10046640)));
  /* 10038a63 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038a66 je 0x10038b54 */
  if (C.zf) goto L_10038b54;
  /* 10038a6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10038a6e jne 0x10038a7d */
  if (!C.zf) goto L_10038a7d;
  /* 10038a70 cmp dword ptr [0x10046644], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10046644))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038a77 je 0x10038b54 */
  if (C.zf) goto L_10038b54;
L_10038a7d:;
  /* 10038a7d cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038a83 je 0x10038b7a */
  if (C.zf) goto L_10038b7a;
  /* 10038a89 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10038a8f push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10038a94 push eax */
  push32((uint32_t)(EAX));
  /* 10038a95 push 0 */
  push32((uint32_t)(0x0u));
  /* 10038a97 call dword ptr [0x1003e054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e054))), 0x10038a9du);
  /* 10038a9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10038a9f jne 0x10038ab4 */
  if (!C.zf) goto L_10038ab4;
  /* 10038aa1 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10038aa7 push 0x1003e4b8 */
  push32((uint32_t)(0x1003e4b8u));
  /* 10038aac push eax */
  push32((uint32_t)(EAX));
  /* 10038aad call 0x10039ad0 */
  push32(0x10038ab2u); f_10039ad0();
  /* 10038ab2 pop ecx */
  ECX = (pop32());
  /* 10038ab3 pop ecx */
  ECX = (pop32());
L_10038ab4:;
  /* 10038ab4 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10038aba push edi */
  push32((uint32_t)(EDI));
  /* 10038abb push eax */
  push32((uint32_t)(EAX));
  /* 10038abc lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 10038ac2 call 0x10039020 */
  push32(0x10038ac7u); f_10039020();
  /* 10038ac7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10038ac8 pop ecx */
  ECX = (pop32());
  /* 10038ac9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038acc jbe 0x10038af7 */
  if ((C.cf||C.zf)) goto L_10038af7;
  /* 10038ace lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10038ad4 push eax */
  push32((uint32_t)(EAX));
  /* 10038ad5 call 0x10039020 */
  push32(0x10038adau); f_10039020();
  /* 10038ada mov edi, eax */
  EDI = (EAX);
  /* 10038adc lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10038ae2 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10038ae5 push 3 */
  push32((uint32_t)(0x3u));
  /* 10038ae7 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10038ae9 push 0x1003e4b4 */
  push32((uint32_t)(0x1003e4b4u));
  /* 10038aee push edi */
  push32((uint32_t)(EDI));
  /* 10038aef call 0x1003bde0 */
  push32(0x10038af4u); f_1003bde0();
  /* 10038af4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10038af7:;
  /* 10038af7 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10038afd push 0x1003e498 */
  push32((uint32_t)(0x1003e498u));
  /* 10038b02 push eax */
  push32((uint32_t)(EAX));
  /* 10038b03 call 0x10039ad0 */
  push32(0x10038b08u); f_10039ad0();
  /* 10038b08 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10038b0e push edi */
  push32((uint32_t)(EDI));
  /* 10038b0f push eax */
  push32((uint32_t)(EAX));
  /* 10038b10 call 0x10039ae0 */
  push32(0x10038b15u); f_10039ae0();
  /* 10038b15 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10038b1b push 0x1003e494 */
  push32((uint32_t)(0x1003e494u));
  /* 10038b20 push eax */
  push32((uint32_t)(EAX));
  /* 10038b21 call 0x10039ae0 */
  push32(0x10038b26u); f_10039ae0();
  /* 10038b26 push dword ptr [esi + 0x100406b4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x100406b4))));
  /* 10038b2c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10038b32 push eax */
  push32((uint32_t)(EAX));
  /* 10038b33 call 0x10039ae0 */
  push32(0x10038b38u); f_10039ae0();
  /* 10038b38 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10038b3d lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10038b43 push 0x1003e46c */
  push32((uint32_t)(0x1003e46cu));
  /* 10038b48 push eax */
  push32((uint32_t)(EAX));
  /* 10038b49 call 0x1003bd54 */
  push32(0x10038b4eu); f_1003bd54();
  /* 10038b4e add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10038b51 pop edi */
  EDI = (pop32());
  /* 10038b52 jmp 0x10038b7a */
  goto L_10038b7a;
L_10038b54:;
  /* 10038b54 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10038b57 lea esi, [esi + 0x100406b4] */
  ESI = ((uint32_t)(ESI + 0x100406b4));
  /* 10038b5d push 0 */
  push32((uint32_t)(0x0u));
  /* 10038b5f push eax */
  push32((uint32_t)(EAX));
  /* 10038b60 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10038b62 call 0x10039020 */
  push32(0x10038b67u); f_10039020();
  /* 10038b67 pop ecx */
  ECX = (pop32());
  /* 10038b68 push eax */
  push32((uint32_t)(EAX));
  /* 10038b69 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10038b6b push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10038b6d call dword ptr [0x1003e044] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e044))), 0x10038b73u);
  /* 10038b73 push eax */
  push32((uint32_t)(EAX));
  /* 10038b74 call dword ptr [0x1003e084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e084))), 0x10038b7au);
L_10038b7a:;
  /* 10038b7a pop esi */
  ESI = (pop32());
  /* 10038b7b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10038b7c ret  */
  ESPCHK(0x10038a2au, _esp0);
  ESP += 4; return;
}

/* FUN_10008b7d @ 0x10038b7d (101 bytes, 34 insns) */
void f_10038b7d(void) {
  FTRACE(0x10038b7du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10038b7d push esi */
  push32((uint32_t)(ESI));
  /* 10038b7e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10038b82 cmp esi, dword ptr [0x10047d20] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10047d20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038b88 jae 0x10038bca */
  if (!C.cf) goto L_10038bca;
  /* 10038b8a mov ecx, esi */
  ECX = (ESI);
  /* 10038b8c mov eax, esi */
  EAX = (ESI);
  /* 10038b8e sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10038b91 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10038b94 mov ecx, dword ptr [ecx*4 + 0x10047c20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10047c20)));
  /* 10038b9b lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10038b9e test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10038ba3 je 0x10038bca */
  if (C.zf) goto L_10038bca;
  /* 10038ba5 push edi */
  push32((uint32_t)(EDI));
  /* 10038ba6 push esi */
  push32((uint32_t)(ESI));
  /* 10038ba7 call 0x1003c024 */
  push32(0x10038bacu); f_1003c024();
  /* 10038bac push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10038bb0 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10038bb4 push esi */
  push32((uint32_t)(ESI));
  /* 10038bb5 call 0x10038be2 */
  push32(0x10038bbau); f_10038be2();
  /* 10038bba push esi */
  push32((uint32_t)(ESI));
  /* 10038bbb mov edi, eax */
  EDI = (EAX);
  /* 10038bbd call 0x1003c083 */
  push32(0x10038bc2u); f_1003c083();
  /* 10038bc2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10038bc5 mov eax, edi */
  EAX = (EDI);
  /* 10038bc7 pop edi */
  EDI = (pop32());
  /* 10038bc8 pop esi */
  ESI = (pop32());
  /* 10038bc9 ret  */
  ESPCHK(0x10038b7du, _esp0);
  ESP += 4; return;
L_10038bca:;
  /* 10038bca call 0x1003bf51 */
  push32(0x10038bcfu); f_1003bf51();
  /* 10038bcf mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10038bd5 call 0x1003bf5a */
  push32(0x10038bdau); f_1003bf5a();
  /* 10038bda and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10038bdd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10038be0 pop esi */
  ESI = (pop32());
  /* 10038be1 ret  */
  ESPCHK(0x10038b7du, _esp0);
  ESP += 4; return;
}

/* FUN_10008be2 @ 0x10038be2 (115 bytes, 41 insns) */
void f_10038be2(void) {
  FTRACE(0x10038be2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10038be2 push esi */
  push32((uint32_t)(ESI));
  /* 10038be3 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10038be7 push edi */
  push32((uint32_t)(EDI));
  /* 10038be8 push esi */
  push32((uint32_t)(ESI));
  /* 10038be9 call 0x1003bfe2 */
  push32(0x10038beeu); f_1003bfe2();
  /* 10038bee cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038bf1 pop ecx */
  ECX = (pop32());
  /* 10038bf2 jne 0x10038c01 */
  if (!C.zf) goto L_10038c01;
  /* 10038bf4 call 0x1003bf51 */
  push32(0x10038bf9u); f_1003bf51();
  /* 10038bf9 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10038bff jmp 0x10038c2e */
  goto L_10038c2e;
L_10038c01:;
  /* 10038c01 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 10038c05 push 0 */
  push32((uint32_t)(0x0u));
  /* 10038c07 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10038c0b push eax */
  push32((uint32_t)(EAX));
  /* 10038c0c call dword ptr [0x1003e000] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e000))), 0x10038c12u);
  /* 10038c12 mov edi, eax */
  EDI = (EAX);
  /* 10038c14 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038c17 jne 0x10038c21 */
  if (!C.zf) goto L_10038c21;
  /* 10038c19 call dword ptr [0x1003e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e03c))), 0x10038c1fu);
  /* 10038c1f jmp 0x10038c23 */
  goto L_10038c23;
L_10038c21:;
  /* 10038c21 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10038c23:;
  /* 10038c23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10038c25 je 0x10038c33 */
  if (C.zf) goto L_10038c33;
  /* 10038c27 push eax */
  push32((uint32_t)(EAX));
  /* 10038c28 call 0x1003bede */
  push32(0x10038c2du); f_1003bede();
  /* 10038c2d pop ecx */
  ECX = (pop32());
L_10038c2e:;
  /* 10038c2e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10038c31 jmp 0x10038c52 */
  goto L_10038c52;
L_10038c33:;
  /* 10038c33 mov ecx, esi */
  ECX = (ESI);
  /* 10038c35 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 10038c38 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10038c3b mov eax, esi */
  EAX = (ESI);
  /* 10038c3d mov ecx, dword ptr [ecx*4 + 0x10047c20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10047c20)));
  /* 10038c44 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10038c47 and byte ptr [ecx + eax*4 + 4], 0xfd */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0xfdu); w8((uint32_t)(ECX + EAX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 10038c4c lea eax, [ecx + eax*4 + 4] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 10038c50 mov eax, edi */
  EAX = (EDI);
L_10038c52:;
  /* 10038c52 pop edi */
  EDI = (pop32());
  /* 10038c53 pop esi */
  ESI = (pop32());
  /* 10038c54 ret  */
  ESPCHK(0x10038be2u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c55 @ 0x10038c55 (101 bytes, 34 insns) */
void f_10038c55(void) {
  FTRACE(0x10038c55u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10038c55 push esi */
  push32((uint32_t)(ESI));
  /* 10038c56 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10038c5a cmp esi, dword ptr [0x10047d20] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10047d20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038c60 jae 0x10038ca2 */
  if (!C.cf) goto L_10038ca2;
  /* 10038c62 mov ecx, esi */
  ECX = (ESI);
  /* 10038c64 mov eax, esi */
  EAX = (ESI);
  /* 10038c66 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10038c69 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10038c6c mov ecx, dword ptr [ecx*4 + 0x10047c20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10047c20)));
  /* 10038c73 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10038c76 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10038c7b je 0x10038ca2 */
  if (C.zf) goto L_10038ca2;
  /* 10038c7d push edi */
  push32((uint32_t)(EDI));
  /* 10038c7e push esi */
  push32((uint32_t)(ESI));
  /* 10038c7f call 0x1003c024 */
  push32(0x10038c84u); f_1003c024();
  /* 10038c84 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10038c88 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10038c8c push esi */
  push32((uint32_t)(ESI));
  /* 10038c8d call 0x10038cba */
  push32(0x10038c92u); f_10038cba();
  /* 10038c92 push esi */
  push32((uint32_t)(ESI));
  /* 10038c93 mov edi, eax */
  EDI = (EAX);
  /* 10038c95 call 0x1003c083 */
  push32(0x10038c9au); f_1003c083();
  /* 10038c9a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10038c9d mov eax, edi */
  EAX = (EDI);
  /* 10038c9f pop edi */
  EDI = (pop32());
  /* 10038ca0 pop esi */
  ESI = (pop32());
  /* 10038ca1 ret  */
  ESPCHK(0x10038c55u, _esp0);
  ESP += 4; return;
L_10038ca2:;
  /* 10038ca2 call 0x1003bf51 */
  push32(0x10038ca7u); f_1003bf51();
  /* 10038ca7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10038cad call 0x1003bf5a */
  push32(0x10038cb2u); f_1003bf5a();
  /* 10038cb2 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10038cb5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10038cb8 pop esi */
  ESI = (pop32());
  /* 10038cb9 ret  */
  ESPCHK(0x10038c55u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cba @ 0x10038cba (395 bytes, 135 insns) */
void f_10038cba(void) {
  FTRACE(0x10038cbau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10038cba push ebp */
  push32((uint32_t)(EBP));
  /* 10038cbb mov ebp, esp */
  EBP = (ESP);
  /* 10038cbd sub esp, 0x414 */
  { uint32_t _a=(ESP),_b=(0x414u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10038cc3 push ebx */
  push32((uint32_t)(EBX));
  /* 10038cc4 push esi */
  push32((uint32_t)(ESI));
  /* 10038cc5 push edi */
  push32((uint32_t)(EDI));
  /* 10038cc6 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10038cc8 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038ccb mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 10038cce mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 10038cd1 jne 0x10038cda */
  if (!C.zf) goto L_10038cda;
L_10038cd3:;
  /* 10038cd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10038cd5 jmp 0x10038e40 */
  goto L_10038e40;
L_10038cda:;
  /* 10038cda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10038cdd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10038ce0 lea ebx, [eax*4 + 0x10047c20] */
  EBX = ((uint32_t)(EAX*4 + 0x10047c20));
  /* 10038ce7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10038cea and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10038ced lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 10038cf0 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10038cf2 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 10038cf5 test byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 10038cfa je 0x10038d0a */
  if (C.zf) goto L_10038d0a;
  /* 10038cfc push 2 */
  push32((uint32_t)(0x2u));
  /* 10038cfe push edi */
  push32((uint32_t)(EDI));
  /* 10038cff push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10038d02 call 0x10038be2 */
  push32(0x10038d07u); f_10038be2();
  /* 10038d07 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10038d0a:;
  /* 10038d0a mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10038d0c add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10038d0e test byte ptr [eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 10038d12 je 0x10038dd9 */
  if (C.zf) goto L_10038dd9;
  /* 10038d18 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10038d1b cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038d1e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10038d21 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 10038d24 jbe 0x10038e14 */
  if ((C.cf||C.zf)) goto L_10038e14;
L_10038d2a:;
  /* 10038d2a lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
L_10038d30:;
  /* 10038d30 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10038d33 sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10038d36 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038d39 jae 0x10038d64 */
  if (!C.cf) goto L_10038d64;
  /* 10038d3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10038d3e inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10038d41 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 10038d43 cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10038d46 jne 0x10038d4f */
  if (!C.zf) goto L_10038d4f;
  /* 10038d48 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 10038d4b mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 10038d4e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10038d4f:;
  /* 10038d4f mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10038d51 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10038d52 mov ecx, eax */
  ECX = (EAX);
  /* 10038d54 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10038d5a sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10038d5c cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038d62 jl 0x10038d30 */
  if ((C.sf!=C.of)) goto L_10038d30;
L_10038d64:;
  /* 10038d64 mov edi, eax */
  EDI = (EAX);
  /* 10038d66 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10038d6c sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10038d6e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10038d71 push 0 */
  push32((uint32_t)(0x0u));
  /* 10038d73 push eax */
  push32((uint32_t)(EAX));
  /* 10038d74 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10038d7a push edi */
  push32((uint32_t)(EDI));
  /* 10038d7b push eax */
  push32((uint32_t)(EAX));
  /* 10038d7c mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10038d7e push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 10038d81 call dword ptr [0x1003e084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e084))), 0x10038d87u);
  /* 10038d87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10038d89 je 0x10038dce */
  if (C.zf) goto L_10038dce;
  /* 10038d8b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10038d8e add dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 10038d91 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038d93 jl 0x10038da0 */
  if ((C.sf!=C.of)) goto L_10038da0;
  /* 10038d95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10038d98 sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10038d9b cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038d9e jb 0x10038d2a */
  if (C.cf) goto L_10038d2a;
L_10038da0:;
  /* 10038da0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10038da2:;
  /* 10038da2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10038da5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038da7 jne 0x10038e3d */
  if (!C.zf) goto L_10038e3d;
  /* 10038dad cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038db0 je 0x10038e14 */
  if (C.zf) goto L_10038e14;
  /* 10038db2 push 5 */
  push32((uint32_t)(0x5u));
  /* 10038db4 pop esi */
  ESI = (pop32());
  /* 10038db5 cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038db8 jne 0x10038e06 */
  if (!C.zf) goto L_10038e06;
  /* 10038dba call 0x1003bf51 */
  push32(0x10038dbfu); f_1003bf51();
  /* 10038dbf mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10038dc5 call 0x1003bf5a */
  push32(0x10038dcau); f_1003bf5a();
  /* 10038dca mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10038dcc jmp 0x10038e0f */
  goto L_10038e0f;
L_10038dce:;
  /* 10038dce call dword ptr [0x1003e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e03c))), 0x10038dd4u);
  /* 10038dd4 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10038dd7 jmp 0x10038da0 */
  goto L_10038da0;
L_10038dd9:;
  /* 10038dd9 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 10038ddc push edi */
  push32((uint32_t)(EDI));
  /* 10038ddd push ecx */
  push32((uint32_t)(ECX));
  /* 10038dde push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10038de1 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10038de4 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 10038de6 call dword ptr [0x1003e084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e084))), 0x10038decu);
  /* 10038dec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10038dee je 0x10038dfb */
  if (C.zf) goto L_10038dfb;
  /* 10038df0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10038df3 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 10038df6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10038df9 jmp 0x10038da2 */
  goto L_10038da2;
L_10038dfb:;
  /* 10038dfb call dword ptr [0x1003e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e03c))), 0x10038e01u);
  /* 10038e01 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10038e04 jmp 0x10038da2 */
  goto L_10038da2;
L_10038e06:;
  /* 10038e06 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10038e09 call 0x1003bede */
  push32(0x10038e0eu); f_1003bede();
  /* 10038e0e pop ecx */
  ECX = (pop32());
L_10038e0f:;
  /* 10038e0f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10038e12 jmp 0x10038e40 */
  goto L_10038e40;
L_10038e14:;
  /* 10038e14 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10038e16 test byte ptr [eax + esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10038e1b je 0x10038e29 */
  if (C.zf) goto L_10038e29;
  /* 10038e1d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10038e20 cmp byte ptr [eax], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10038e23 je 0x10038cd3 */
  if (C.zf) goto L_10038cd3;
L_10038e29:;
  /* 10038e29 call 0x1003bf51 */
  push32(0x10038e2eu); f_1003bf51();
  /* 10038e2e mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 10038e34 call 0x1003bf5a */
  push32(0x10038e39u); f_1003bf5a();
  /* 10038e39 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 10038e3b jmp 0x10038e0f */
  goto L_10038e0f;
L_10038e3d:;
  /* 10038e3d sub eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10038e40:;
  /* 10038e40 pop edi */
  EDI = (pop32());
  /* 10038e41 pop esi */
  ESI = (pop32());
  /* 10038e42 pop ebx */
  EBX = (pop32());
  /* 10038e43 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10038e44 ret  */
  ESPCHK(0x10038cbau, _esp0);
  ESP += 4; return;
}

/* FUN_10008e45 @ 0x10038e45 (68 bytes, 19 insns) */
void f_10038e45(void) {
  FTRACE(0x10038e45u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10038e45 inc dword ptr [0x10046798] */
  { uint32_t _r=(r32((uint32_t)(0x10046798)))+1; w32((uint32_t)(0x10046798), (_r)); fl_inc(_r,32); }
  /* 10038e4b push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10038e50 call 0x1003a28f */
  push32(0x10038e55u); f_1003a28f();
  /* 10038e55 pop ecx */
  ECX = (pop32());
  /* 10038e56 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10038e5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10038e5c mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10038e5f je 0x10038e6e */
  if (C.zf) goto L_10038e6e;
  /* 10038e61 or dword ptr [ecx + 0xc], 8 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x8u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 10038e65 mov dword ptr [ecx + 0x18], 0x1000 */
  w32((uint32_t)(ECX + 0x18), (0x1000u));
  /* 10038e6c jmp 0x10038e7f */
  goto L_10038e7f;
L_10038e6e:;
  /* 10038e6e or dword ptr [ecx + 0xc], 4 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x4u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 10038e72 lea eax, [ecx + 0x14] */
  EAX = ((uint32_t)(ECX + 0x14));
  /* 10038e75 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10038e78 mov dword ptr [ecx + 0x18], 2 */
  w32((uint32_t)(ECX + 0x18), (0x2u));
L_10038e7f:;
  /* 10038e7f mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 10038e82 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10038e86 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10038e88 ret  */
  ESPCHK(0x10038e45u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e89 @ 0x10038e89 (41 bytes, 13 insns) */
void f_10038e89(void) {
  FTRACE(0x10038e89u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10038e89 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10038e8d cmp eax, dword ptr [0x10047d20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10047d20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038e93 jb 0x10038e98 */
  if (C.cf) goto L_10038e98;
  /* 10038e95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10038e97 ret  */
  ESPCHK(0x10038e89u, _esp0);
  ESP += 4; return;
L_10038e98:;
  /* 10038e98 mov ecx, eax */
  ECX = (EAX);
  /* 10038e9a and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10038e9d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10038ea0 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10038ea3 mov ecx, dword ptr [ecx*4 + 0x10047c20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10047c20)));
  /* 10038eaa mov al, byte ptr [ecx + eax*4 + 4] */
  AL = (r8((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 10038eae and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10038eb1 ret  */
  ESPCHK(0x10038e89u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f6e @ 0x10038f6e (47 bytes, 17 insns) */
void f_10038f6e(void) {
  FTRACE(0x10038f6eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10038f6e mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10038f72 mov ecx, 0x10040740 */
  ECX = (0x10040740u);
  /* 10038f77 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038f79 jb 0x10038f92 */
  if (C.cf) goto L_10038f92;
  /* 10038f7b cmp eax, 0x100409a0 */
  { uint32_t _a=(EAX),_b=(0x100409a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038f80 ja 0x10038f92 */
  if ((!C.cf&&!C.zf)) goto L_10038f92;
  /* 10038f82 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10038f84 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10038f87 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10038f8a push eax */
  push32((uint32_t)(EAX));
  /* 10038f8b call 0x10039ff3 */
  push32(0x10038f90u); f_10039ff3();
  /* 10038f90 pop ecx */
  ECX = (pop32());
  /* 10038f91 ret  */
  ESPCHK(0x10038f6eu, _esp0);
  ESP += 4; return;
L_10038f92:;
  /* 10038f92 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10038f95 push eax */
  push32((uint32_t)(EAX));
  /* 10038f96 call dword ptr [0x1003e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e00c))), 0x10038f9cu);
  /* 10038f9c ret  */
  ESPCHK(0x10038f6eu, _esp0);
  ESP += 4; return;
}

/* FUN_10008f9d @ 0x10038f9d (35 bytes, 13 insns) */
void f_10038f9d(void) {
  FTRACE(0x10038f9du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10038f9d mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10038fa1 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038fa4 jge 0x10038fb1 */
  if ((C.sf==C.of)) goto L_10038fb1;
  /* 10038fa6 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10038fa9 push eax */
  push32((uint32_t)(EAX));
  /* 10038faa call 0x10039ff3 */
  push32(0x10038fafu); f_10039ff3();
  /* 10038faf pop ecx */
  ECX = (pop32());
  /* 10038fb0 ret  */
  ESPCHK(0x10038f9du, _esp0);
  ESP += 4; return;
L_10038fb1:;
  /* 10038fb1 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10038fb5 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10038fb8 push eax */
  push32((uint32_t)(EAX));
  /* 10038fb9 call dword ptr [0x1003e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e00c))), 0x10038fbfu);
  /* 10038fbf ret  */
  ESPCHK(0x10038f9du, _esp0);
  ESP += 4; return;
}

/* FUN_10008fc0 @ 0x10038fc0 (47 bytes, 17 insns) */
void f_10038fc0(void) {
  FTRACE(0x10038fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10038fc0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10038fc4 mov ecx, 0x10040740 */
  ECX = (0x10040740u);
  /* 10038fc9 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038fcb jb 0x10038fe4 */
  if (C.cf) goto L_10038fe4;
  /* 10038fcd cmp eax, 0x100409a0 */
  { uint32_t _a=(EAX),_b=(0x100409a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038fd2 ja 0x10038fe4 */
  if ((!C.cf&&!C.zf)) goto L_10038fe4;
  /* 10038fd4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10038fd6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10038fd9 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10038fdc push eax */
  push32((uint32_t)(EAX));
  /* 10038fdd call 0x1003a054 */
  push32(0x10038fe2u); f_1003a054();
  /* 10038fe2 pop ecx */
  ECX = (pop32());
  /* 10038fe3 ret  */
  ESPCHK(0x10038fc0u, _esp0);
  ESP += 4; return;
L_10038fe4:;
  /* 10038fe4 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10038fe7 push eax */
  push32((uint32_t)(EAX));
  /* 10038fe8 call dword ptr [0x1003e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e008))), 0x10038feeu);
  /* 10038fee ret  */
  ESPCHK(0x10038fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008fef @ 0x10038fef (35 bytes, 13 insns) */
void f_10038fef(void) {
  FTRACE(0x10038fefu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10038fef mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10038ff3 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10038ff6 jge 0x10039003 */
  if ((C.sf==C.of)) goto L_10039003;
  /* 10038ff8 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10038ffb push eax */
  push32((uint32_t)(EAX));
  /* 10038ffc call 0x1003a054 */
  push32(0x10039001u); f_1003a054();
  /* 10039001 pop ecx */
  ECX = (pop32());
  /* 10039002 ret  */
  ESPCHK(0x10038fefu, _esp0);
  ESP += 4; return;
L_10039003:;
  /* 10039003 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10039007 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003900a push eax */
  push32((uint32_t)(EAX));
  /* 1003900b call dword ptr [0x1003e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e008))), 0x10039011u);
  /* 10039011 ret  */
  ESPCHK(0x10038fefu, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10039020 (123 bytes, 44 insns) */
void f_10039020(void) {
  FTRACE(0x10039020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10039020 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10039024 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1003902a je 0x10039040 */
  if (C.zf) goto L_10039040;
L_1003902c:;
  /* 1003902c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1003902e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1003902f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10039031 je 0x10039073 */
  if (C.zf) goto L_10039073;
  /* 10039033 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10039039 jne 0x1003902c */
  if (!C.zf) goto L_1003902c;
  /* 1003903b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10039040:;
  /* 10039040 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10039042 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10039047 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10039049 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1003904c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1003904e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10039051 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10039056 je 0x10039040 */
  if (C.zf) goto L_10039040;
  /* 10039058 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1003905b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1003905d je 0x10039091 */
  if (C.zf) goto L_10039091;
  /* 1003905f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10039061 je 0x10039087 */
  if (C.zf) goto L_10039087;
  /* 10039063 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10039068 je 0x1003907d */
  if (C.zf) goto L_1003907d;
  /* 1003906a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1003906f je 0x10039073 */
  if (C.zf) goto L_10039073;
  /* 10039071 jmp 0x10039040 */
  goto L_10039040;
L_10039073:;
  /* 10039073 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10039076 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1003907a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003907c ret  */
  ESPCHK(0x10039020u, _esp0);
  ESP += 4; return;
L_1003907d:;
  /* 1003907d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10039080 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10039084 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10039086 ret  */
  ESPCHK(0x10039020u, _esp0);
  ESP += 4; return;
L_10039087:;
  /* 10039087 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1003908a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1003908e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10039090 ret  */
  ESPCHK(0x10039020u, _esp0);
  ESP += 4; return;
L_10039091:;
  /* 10039091 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10039094 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10039098 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003909a ret  */
  ESPCHK(0x10039020u, _esp0);
  ESP += 4; return;
}

/* FUN_1000909b @ 0x1003909b (89 bytes, 39 insns) */
void f_1003909b(void) {
  FTRACE(0x1003909bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1003909b push ebp */
  push32((uint32_t)(EBP));
  /* 1003909c mov ebp, esp */
  EBP = (ESP);
  /* 1003909e push ebx */
  push32((uint32_t)(EBX));
  /* 1003909f push esi */
  push32((uint32_t)(ESI));
  /* 100390a0 mov esi, 0x100469a4 */
  ESI = (0x100469a4u);
  /* 100390a5 push edi */
  push32((uint32_t)(EDI));
  /* 100390a6 push esi */
  push32((uint32_t)(ESI));
  /* 100390a7 call dword ptr [0x1003e090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e090))), 0x100390adu);
  /* 100390ad mov edi, dword ptr [0x1003e08c] */
  EDI = (r32((uint32_t)(0x1003e08c)));
  /* 100390b3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100390b5 cmp dword ptr [0x100469a0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100469a0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100390bb je 0x100390cb */
  if (C.zf) goto L_100390cb;
  /* 100390bd push esi */
  push32((uint32_t)(ESI));
  /* 100390be call edi */
  call_ind((uint32_t)(EDI), 0x100390c0u);
  /* 100390c0 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100390c2 call 0x10039ff3 */
  push32(0x100390c7u); f_10039ff3();
  /* 100390c7 pop ecx */
  ECX = (pop32());
  /* 100390c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 100390ca pop ebx */
  EBX = (pop32());
L_100390cb:;
  /* 100390cb push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100390ce push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100390d1 call 0x100390f4 */
  push32(0x100390d6u); f_100390f4();
  /* 100390d6 pop ecx */
  ECX = (pop32());
  /* 100390d7 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 100390da test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100390dc pop ecx */
  ECX = (pop32());
  /* 100390dd je 0x100390e9 */
  if (C.zf) goto L_100390e9;
  /* 100390df push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100390e1 call 0x1003a054 */
  push32(0x100390e6u); f_1003a054();
  /* 100390e6 pop ecx */
  ECX = (pop32());
  /* 100390e7 jmp 0x100390ec */
  goto L_100390ec;
L_100390e9:;
  /* 100390e9 push esi */
  push32((uint32_t)(ESI));
  /* 100390ea call edi */
  call_ind((uint32_t)(EDI), 0x100390ecu);
L_100390ec:;
  /* 100390ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100390ef pop edi */
  EDI = (pop32());
  /* 100390f0 pop esi */
  ESI = (pop32());
  /* 100390f1 pop ebx */
  EBX = (pop32());
  /* 100390f2 pop ebp */
  EBP = (pop32());
  /* 100390f3 ret  */
  ESPCHK(0x1003909bu, _esp0);
  ESP += 4; return;
}

/* FUN_100090f4 @ 0x100390f4 (105 bytes, 38 insns) */
void f_100390f4(void) {
  FTRACE(0x100390f4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100390f4 push ebp */
  push32((uint32_t)(EBP));
  /* 100390f5 mov ebp, esp */
  EBP = (ESP);
  /* 100390f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100390fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100390fc jne 0x10039100 */
  if (!C.zf) goto L_10039100;
  /* 100390fe pop ebp */
  EBP = (pop32());
  /* 100390ff ret  */
  ESPCHK(0x100390f4u, _esp0);
  ESP += 4; return;
L_10039100:;
  /* 10039100 cmp dword ptr [0x10046828], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10046828))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10039107 jne 0x1003911b */
  if (!C.zf) goto L_1003911b;
  /* 10039109 mov cx, word ptr [ebp + 0xc] */
  CX = (r16((uint32_t)(EBP + 0xc)));
  /* 1003910d cmp cx, 0xff */
  { uint32_t _a=(CX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10039112 ja 0x1003914d */
  if ((!C.cf&&!C.zf)) goto L_1003914d;
  /* 10039114 push 1 */
  push32((uint32_t)(0x1u));
  /* 10039116 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10039118 pop eax */
  EAX = (pop32());
  /* 10039119 pop ebp */
  EBP = (pop32());
  /* 1003911a ret  */
  ESPCHK(0x100390f4u, _esp0);
  ESP += 4; return;
L_1003911b:;
  /* 1003911b lea ecx, [ebp + 8] */
  ECX = ((uint32_t)(EBP + 0x8));
  /* 1003911e and dword ptr [ebp + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))&(0x0u); w32((uint32_t)(EBP + 0x8), (_r)); fl_logic(_r,32); }
  /* 10039122 push ecx */
  push32((uint32_t)(ECX));
  /* 10039123 push 0 */
  push32((uint32_t)(0x0u));
  /* 10039125 push dword ptr [0x10040bd0] */
  push32((uint32_t)(r32((uint32_t)(0x10040bd0))));
  /* 1003912b push eax */
  push32((uint32_t)(EAX));
  /* 1003912c lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1003912f push 1 */
  push32((uint32_t)(0x1u));
  /* 10039131 push eax */
  push32((uint32_t)(EAX));
  /* 10039132 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10039137 push dword ptr [0x10046838] */
  push32((uint32_t)(r32((uint32_t)(0x10046838))));
  /* 1003913d call dword ptr [0x1003e060] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003e060))), 0x10039143u);
  /* 10039143 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10039145 je 0x1003914d */
  if (C.zf) goto L_1003914d;
  /* 10039147 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1003914b je 0x1003915b */
  if (C.zf) goto L_1003915b;
L_1003914d:;
  /* 1003914d call 0x1003bf51 */
  push32(0x10039152u); f_1003bf51();
  /* 10039152 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10039158 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1003915b:;
  /* 1003915b pop ebp */
  EBP = (pop32());
  /* 1003915c ret  */
  ESPCHK(0x100390f4u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x10039160 (104 bytes, 43 insns) */
void f_10039160(void) {
  FTRACE(0x10039160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10039160 push ebx */
  push32((uint32_t)(EBX));
  /* 10039161 push esi */
  push32((uint32_t)(ESI));
  /* 10039162 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10039166 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10039168 jne 0x10039182 */
  if (!C.zf) goto L_10039182;
  /* 1003916a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1003916e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10039172 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10039174 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10039176 mov ebx, eax */
  EBX = (EAX);
  /* 10039178 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1003917c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1003917e mov edx, ebx */
  EDX = (EBX);
  /* 10039180 jmp 0x100391c3 */
  goto L_100391c3;
L_10039182:;
  /* 10039182 mov ecx, eax */
  ECX = (EAX);
  /* 10039184 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10039188 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1003918c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_10039190:;
  /* 10039190 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10039192 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10039194 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10039196 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10039198 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1003919a jne 0x10039190 */
  if (!C.zf) goto L_10039190;
  /* 1003919c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1003919e mov esi, eax */
  ESI = (EAX);
  /* 100391a0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 100391a4 mov ecx, eax */
  ECX = (EAX);
  /* 100391a6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 100391aa mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 100391ac add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100391ae jb 0x100391be */
  if (C.cf) goto L_100391be;
  /* 100391b0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100391b4 ja 0x100391be */
  if ((!C.cf&&!C.zf)) goto L_100391be;
  /* 100391b6 jb 0x100391bf */
  if (C.cf) goto L_100391bf;
  /* 100391b8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100391bc jbe 0x100391bf */
  if ((C.cf||C.zf)) goto L_100391bf;
L_100391be:;
  /* 100391be dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_100391bf:;
  /* 100391bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100391c1 mov eax, esi */
  EAX = (ESI);
L_100391c3:;
  /* 100391c3 pop esi */
  ESI = (pop32());
  /* 100391c4 pop ebx */
  EBX = (pop32());
  /* 100391c5 ret 0x10 */
  ESPCHK(0x10039160u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x100391d0 (117 bytes, 44 insns) */
void f_100391d0(void) {
  FTRACE(0x100391d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100391d0 push ebx */
  push32((uint32_t)(EBX));
  /* 100391d1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 100391d5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100391d7 jne 0x100391f1 */
  if (!C.zf) goto L_100391f1;
  /* 100391d9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 100391dd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 100391e1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100391e3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100391e5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100391e9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100391eb mov eax, edx */
  EAX = (EDX);
  /* 100391ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100391ef jmp 0x10039241 */
  goto L_10039241;
L_100391f1:;
  /* 100391f1 mov ecx, eax */
  ECX = (EAX);
  /* 100391f3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 100391f7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 100391fb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_100391ff:;
  /* 100391ff shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10039201 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10039203 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10039205 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10039207 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10039209 jne 0x100391ff */
  if (!C.zf) goto L_100391ff;
  /* 1003920b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1003920d mov ecx, eax */
  ECX = (EAX);
  /* 1003920f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10039213 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 10039214 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10039218 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1003921a jb 0x1003922a */
  if (C.cf) goto L_1003922a;
  /* 1003921c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10039220 ja 0x1003922a */
  if ((!C.cf&&!C.zf)) goto L_1003922a;
  /* 10039222 jb 0x10039232 */
  if (C.cf) goto L_10039232;
  /* 10039224 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10039228 jbe 0x10039232 */
  if ((C.cf||C.zf)) goto L_10039232;
L_1003922a:;
  /* 1003922a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003922e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10039232:;
  /* 10039232 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10039236 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1003923a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1003923c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1003923e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10039241:;
  /* 10039241 pop ebx */
  EBX = (pop32());
  /* 10039242 ret 0x10 */
  ESPCHK(0x100391d0u, _esp0);
  ESP += 20; return;
}

