#include "recomp.h"

/* ProcessAI @ 0x10121000 (16 bytes, 3 insns) */
void f_10121000(void) {
  FTRACE(0x10121000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10121000 call dword ptr [0x10136500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136500))), 0x10121006u);
  /* 10121006 mov dword ptr [0x101362b4], eax */
  w32((uint32_t)(0x101362b4), (EAX));
  /* 1012100b jmp 0x10126d40 */
  f_10126d40(); return;
}

/* InitAI @ 0x10121010 (5595 bytes, 1470 insns) */
void f_10121010(void) {
  FTRACE(0x10121010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10121010 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121015 sub esp, 0x60 */
  { uint32_t _a=(ESP),_b=(0x60u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10121018 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012101a je 0x10121078 */
  if (C.zf) goto L_10121078;
  /* 1012101c push 0x1012fef0 */
  push32((uint32_t)(0x1012fef0u));
  /* 10121021 push 0x10136088 */
  push32((uint32_t)(0x10136088u));
  /* 10121026 call eax */
  call_ind((uint32_t)(EAX), 0x10121028u);
  /* 10121028 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 1012102d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121030 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121032 je 0x10121078 */
  if (C.zf) goto L_10121078;
  /* 10121034 push 0x1012fee8 */
  push32((uint32_t)(0x1012fee8u));
  /* 10121039 push 0x10136028 */
  push32((uint32_t)(0x10136028u));
  /* 1012103e call eax */
  call_ind((uint32_t)(EAX), 0x10121040u);
  /* 10121040 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121045 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121048 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012104a je 0x10121078 */
  if (C.zf) goto L_10121078;
  /* 1012104c push 0x1012fee0 */
  push32((uint32_t)(0x1012fee0u));
  /* 10121051 push 0x10136080 */
  push32((uint32_t)(0x10136080u));
  /* 10121056 call eax */
  call_ind((uint32_t)(EAX), 0x10121058u);
  /* 10121058 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 1012105d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121060 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121062 je 0x10121078 */
  if (C.zf) goto L_10121078;
  /* 10121064 push 0x1012fed8 */
  push32((uint32_t)(0x1012fed8u));
  /* 10121069 push 0x10136090 */
  push32((uint32_t)(0x10136090u));
  /* 1012106e call eax */
  call_ind((uint32_t)(EAX), 0x10121070u);
  /* 10121070 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121075 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10121078:;
  /* 10121078 mov ecx, dword ptr [0x101363f8] */
  ECX = (r32((uint32_t)(0x101363f8)));
  /* 1012107e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10121080 je 0x10121096 */
  if (C.zf) goto L_10121096;
  /* 10121082 push 0x1012fecc */
  push32((uint32_t)(0x1012feccu));
  /* 10121087 push 0x10133690 */
  push32((uint32_t)(0x10133690u));
  /* 1012108c call ecx */
  call_ind((uint32_t)(ECX), 0x1012108eu);
  /* 1012108e mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121093 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10121096:;
  /* 10121096 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121098 je 0x10121322 */
  if (C.zf) goto L_10121322;
  /* 1012109e push 0x1012feb8 */
  push32((uint32_t)(0x1012feb8u));
  /* 101210a3 push 0x10133900 */
  push32((uint32_t)(0x10133900u));
  /* 101210a8 call eax */
  call_ind((uint32_t)(EAX), 0x101210aau);
  /* 101210aa mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 101210af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101210b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101210b4 je 0x10121322 */
  if (C.zf) goto L_10121322;
  /* 101210ba push 0x1012fea4 */
  push32((uint32_t)(0x1012fea4u));
  /* 101210bf push 0x101338f8 */
  push32((uint32_t)(0x101338f8u));
  /* 101210c4 call eax */
  call_ind((uint32_t)(EAX), 0x101210c6u);
  /* 101210c6 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 101210cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101210ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101210d0 je 0x10121322 */
  if (C.zf) goto L_10121322;
  /* 101210d6 push 0x1012fe90 */
  push32((uint32_t)(0x1012fe90u));
  /* 101210db push 0x101338f0 */
  push32((uint32_t)(0x101338f0u));
  /* 101210e0 call eax */
  call_ind((uint32_t)(EAX), 0x101210e2u);
  /* 101210e2 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 101210e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101210ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101210ec je 0x10121322 */
  if (C.zf) goto L_10121322;
  /* 101210f2 push 0x1012fe7c */
  push32((uint32_t)(0x1012fe7cu));
  /* 101210f7 push 0x10133938 */
  push32((uint32_t)(0x10133938u));
  /* 101210fc call eax */
  call_ind((uint32_t)(EAX), 0x101210feu);
  /* 101210fe mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121103 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121106 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121108 je 0x10121322 */
  if (C.zf) goto L_10121322;
  /* 1012110e push 0x1012fe68 */
  push32((uint32_t)(0x1012fe68u));
  /* 10121113 push 0x10133928 */
  push32((uint32_t)(0x10133928u));
  /* 10121118 call eax */
  call_ind((uint32_t)(EAX), 0x1012111au);
  /* 1012111a mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 1012111f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121122 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121124 je 0x10121322 */
  if (C.zf) goto L_10121322;
  /* 1012112a push 0x1012fe54 */
  push32((uint32_t)(0x1012fe54u));
  /* 1012112f push 0x10133920 */
  push32((uint32_t)(0x10133920u));
  /* 10121134 call eax */
  call_ind((uint32_t)(EAX), 0x10121136u);
  /* 10121136 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 1012113b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012113e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121140 je 0x10121322 */
  if (C.zf) goto L_10121322;
  /* 10121146 push 0x1012fe40 */
  push32((uint32_t)(0x1012fe40u));
  /* 1012114b push 0x101336d8 */
  push32((uint32_t)(0x101336d8u));
  /* 10121150 call eax */
  call_ind((uint32_t)(EAX), 0x10121152u);
  /* 10121152 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121157 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012115a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012115c je 0x10121322 */
  if (C.zf) goto L_10121322;
  /* 10121162 push 0x1012fe2c */
  push32((uint32_t)(0x1012fe2cu));
  /* 10121167 push 0x101336c8 */
  push32((uint32_t)(0x101336c8u));
  /* 1012116c call eax */
  call_ind((uint32_t)(EAX), 0x1012116eu);
  /* 1012116e mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121173 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121176 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121178 je 0x10121322 */
  if (C.zf) goto L_10121322;
  /* 1012117e push 0x1012fe18 */
  push32((uint32_t)(0x1012fe18u));
  /* 10121183 push 0x101338c0 */
  push32((uint32_t)(0x101338c0u));
  /* 10121188 call eax */
  call_ind((uint32_t)(EAX), 0x1012118au);
  /* 1012118a mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 1012118f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121192 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121194 je 0x10121322 */
  if (C.zf) goto L_10121322;
  /* 1012119a push 0x1012fe04 */
  push32((uint32_t)(0x1012fe04u));
  /* 1012119f push 0x101338b8 */
  push32((uint32_t)(0x101338b8u));
  /* 101211a4 call eax */
  call_ind((uint32_t)(EAX), 0x101211a6u);
  /* 101211a6 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 101211ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101211ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101211b0 je 0x10121322 */
  if (C.zf) goto L_10121322;
  /* 101211b6 push 0x1012fdf0 */
  push32((uint32_t)(0x1012fdf0u));
  /* 101211bb push 0x101338b0 */
  push32((uint32_t)(0x101338b0u));
  /* 101211c0 call eax */
  call_ind((uint32_t)(EAX), 0x101211c2u);
  /* 101211c2 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 101211c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101211ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101211cc je 0x10121322 */
  if (C.zf) goto L_10121322;
  /* 101211d2 push 0x1012fddc */
  push32((uint32_t)(0x1012fddcu));
  /* 101211d7 push 0x101338a8 */
  push32((uint32_t)(0x101338a8u));
  /* 101211dc call eax */
  call_ind((uint32_t)(EAX), 0x101211deu);
  /* 101211de mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 101211e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101211e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101211e8 je 0x10121322 */
  if (C.zf) goto L_10121322;
  /* 101211ee push 0x1012feb8 */
  push32((uint32_t)(0x1012feb8u));
  /* 101211f3 push 0x10133900 */
  push32((uint32_t)(0x10133900u));
  /* 101211f8 call eax */
  call_ind((uint32_t)(EAX), 0x101211fau);
  /* 101211fa mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 101211ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121202 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121204 je 0x10121322 */
  if (C.zf) goto L_10121322;
  /* 1012120a push 0x1012fea4 */
  push32((uint32_t)(0x1012fea4u));
  /* 1012120f push 0x101338f8 */
  push32((uint32_t)(0x101338f8u));
  /* 10121214 call eax */
  call_ind((uint32_t)(EAX), 0x10121216u);
  /* 10121216 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 1012121b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012121e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121220 je 0x10121322 */
  if (C.zf) goto L_10121322;
  /* 10121226 push 0x1012fe90 */
  push32((uint32_t)(0x1012fe90u));
  /* 1012122b push 0x101338f0 */
  push32((uint32_t)(0x101338f0u));
  /* 10121230 call eax */
  call_ind((uint32_t)(EAX), 0x10121232u);
  /* 10121232 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121237 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012123a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012123c je 0x10121322 */
  if (C.zf) goto L_10121322;
  /* 10121242 push 0x1012fe7c */
  push32((uint32_t)(0x1012fe7cu));
  /* 10121247 push 0x10133938 */
  push32((uint32_t)(0x10133938u));
  /* 1012124c call eax */
  call_ind((uint32_t)(EAX), 0x1012124eu);
  /* 1012124e mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121253 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121256 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121258 je 0x10121322 */
  if (C.zf) goto L_10121322;
  /* 1012125e push 0x1012fe68 */
  push32((uint32_t)(0x1012fe68u));
  /* 10121263 push 0x10133928 */
  push32((uint32_t)(0x10133928u));
  /* 10121268 call eax */
  call_ind((uint32_t)(EAX), 0x1012126au);
  /* 1012126a mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 1012126f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121272 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121274 je 0x10121322 */
  if (C.zf) goto L_10121322;
  /* 1012127a push 0x1012fe54 */
  push32((uint32_t)(0x1012fe54u));
  /* 1012127f push 0x10133920 */
  push32((uint32_t)(0x10133920u));
  /* 10121284 call eax */
  call_ind((uint32_t)(EAX), 0x10121286u);
  /* 10121286 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 1012128b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012128e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121290 je 0x10121322 */
  if (C.zf) goto L_10121322;
  /* 10121296 push 0x1012fe40 */
  push32((uint32_t)(0x1012fe40u));
  /* 1012129b push 0x101336d8 */
  push32((uint32_t)(0x101336d8u));
  /* 101212a0 call eax */
  call_ind((uint32_t)(EAX), 0x101212a2u);
  /* 101212a2 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 101212a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101212aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101212ac je 0x10121322 */
  if (C.zf) goto L_10121322;
  /* 101212ae push 0x1012fe2c */
  push32((uint32_t)(0x1012fe2cu));
  /* 101212b3 push 0x101336c8 */
  push32((uint32_t)(0x101336c8u));
  /* 101212b8 call eax */
  call_ind((uint32_t)(EAX), 0x101212bau);
  /* 101212ba mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 101212bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101212c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101212c4 je 0x10121322 */
  if (C.zf) goto L_10121322;
  /* 101212c6 push 0x1012fe18 */
  push32((uint32_t)(0x1012fe18u));
  /* 101212cb push 0x101338c0 */
  push32((uint32_t)(0x101338c0u));
  /* 101212d0 call eax */
  call_ind((uint32_t)(EAX), 0x101212d2u);
  /* 101212d2 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 101212d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101212da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101212dc je 0x10121322 */
  if (C.zf) goto L_10121322;
  /* 101212de push 0x1012fe04 */
  push32((uint32_t)(0x1012fe04u));
  /* 101212e3 push 0x101338b8 */
  push32((uint32_t)(0x101338b8u));
  /* 101212e8 call eax */
  call_ind((uint32_t)(EAX), 0x101212eau);
  /* 101212ea mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 101212ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101212f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101212f4 je 0x10121322 */
  if (C.zf) goto L_10121322;
  /* 101212f6 push 0x1012fdf0 */
  push32((uint32_t)(0x1012fdf0u));
  /* 101212fb push 0x101338b0 */
  push32((uint32_t)(0x101338b0u));
  /* 10121300 call eax */
  call_ind((uint32_t)(EAX), 0x10121302u);
  /* 10121302 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121307 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012130a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012130c je 0x10121322 */
  if (C.zf) goto L_10121322;
  /* 1012130e push 0x1012fddc */
  push32((uint32_t)(0x1012fddcu));
  /* 10121313 push 0x101338a8 */
  push32((uint32_t)(0x101338a8u));
  /* 10121318 call eax */
  call_ind((uint32_t)(EAX), 0x1012131au);
  /* 1012131a mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 1012131f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10121322:;
  /* 10121322 mov ecx, dword ptr [0x101363f8] */
  ECX = (r32((uint32_t)(0x101363f8)));
  /* 10121328 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1012132a je 0x10121340 */
  if (C.zf) goto L_10121340;
  /* 1012132c push 0x1012fdcc */
  push32((uint32_t)(0x1012fdccu));
  /* 10121331 push 0x10133680 */
  push32((uint32_t)(0x10133680u));
  /* 10121336 call ecx */
  call_ind((uint32_t)(ECX), 0x10121338u);
  /* 10121338 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 1012133d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10121340:;
  /* 10121340 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121342 je 0x101215c7 */
  if (C.zf) goto L_101215c7;
  /* 10121348 push 0x1012fdb8 */
  push32((uint32_t)(0x1012fdb8u));
  /* 1012134d push 0x10133658 */
  push32((uint32_t)(0x10133658u));
  /* 10121352 call eax */
  call_ind((uint32_t)(EAX), 0x10121354u);
  /* 10121354 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121359 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012135c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012135e je 0x101215c7 */
  if (C.zf) goto L_101215c7;
  /* 10121364 push 0x1012fda0 */
  push32((uint32_t)(0x1012fda0u));
  /* 10121369 push 0x10133650 */
  push32((uint32_t)(0x10133650u));
  /* 1012136e call eax */
  call_ind((uint32_t)(EAX), 0x10121370u);
  /* 10121370 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121375 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121378 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012137a je 0x101215c7 */
  if (C.zf) goto L_101215c7;
  /* 10121380 push 0x1012fd88 */
  push32((uint32_t)(0x1012fd88u));
  /* 10121385 push 0x10133648 */
  push32((uint32_t)(0x10133648u));
  /* 1012138a call eax */
  call_ind((uint32_t)(EAX), 0x1012138cu);
  /* 1012138c mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121391 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121394 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121396 je 0x101215c7 */
  if (C.zf) goto L_101215c7;
  /* 1012139c push 0x1012fd70 */
  push32((uint32_t)(0x1012fd70u));
  /* 101213a1 push 0x10136318 */
  push32((uint32_t)(0x10136318u));
  /* 101213a6 call eax */
  call_ind((uint32_t)(EAX), 0x101213a8u);
  /* 101213a8 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 101213ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101213b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101213b2 je 0x101215c7 */
  if (C.zf) goto L_101215c7;
  /* 101213b8 push 0x1012fd58 */
  push32((uint32_t)(0x1012fd58u));
  /* 101213bd push 0x10136310 */
  push32((uint32_t)(0x10136310u));
  /* 101213c2 call eax */
  call_ind((uint32_t)(EAX), 0x101213c4u);
  /* 101213c4 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 101213c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101213cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101213ce je 0x101215c7 */
  if (C.zf) goto L_101215c7;
  /* 101213d4 push 0x1012fd40 */
  push32((uint32_t)(0x1012fd40u));
  /* 101213d9 push 0x10136308 */
  push32((uint32_t)(0x10136308u));
  /* 101213de call eax */
  call_ind((uint32_t)(EAX), 0x101213e0u);
  /* 101213e0 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 101213e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101213e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101213ea je 0x101215c7 */
  if (C.zf) goto L_101215c7;
  /* 101213f0 push 0x1012fd2c */
  push32((uint32_t)(0x1012fd2cu));
  /* 101213f5 push 0x10136390 */
  push32((uint32_t)(0x10136390u));
  /* 101213fa call eax */
  call_ind((uint32_t)(EAX), 0x101213fcu);
  /* 101213fc mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121401 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121404 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121406 je 0x101215c7 */
  if (C.zf) goto L_101215c7;
  /* 1012140c push 0x1012fd14 */
  push32((uint32_t)(0x1012fd14u));
  /* 10121411 push 0x10136388 */
  push32((uint32_t)(0x10136388u));
  /* 10121416 call eax */
  call_ind((uint32_t)(EAX), 0x10121418u);
  /* 10121418 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 1012141d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121420 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121422 je 0x101215c7 */
  if (C.zf) goto L_101215c7;
  /* 10121428 push 0x1012fcfc */
  push32((uint32_t)(0x1012fcfcu));
  /* 1012142d push 0x101363d8 */
  push32((uint32_t)(0x101363d8u));
  /* 10121432 call eax */
  call_ind((uint32_t)(EAX), 0x10121434u);
  /* 10121434 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121439 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012143c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012143e je 0x101215c7 */
  if (C.zf) goto L_101215c7;
  /* 10121444 push 0x1012fce4 */
  push32((uint32_t)(0x1012fce4u));
  /* 10121449 push 0x101363d0 */
  push32((uint32_t)(0x101363d0u));
  /* 1012144e call eax */
  call_ind((uint32_t)(EAX), 0x10121450u);
  /* 10121450 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121455 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121458 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012145a je 0x101215c7 */
  if (C.zf) goto L_101215c7;
  /* 10121460 push 0x1012fccc */
  push32((uint32_t)(0x1012fcccu));
  /* 10121465 push 0x101363c8 */
  push32((uint32_t)(0x101363c8u));
  /* 1012146a call eax */
  call_ind((uint32_t)(EAX), 0x1012146cu);
  /* 1012146c mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121471 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121474 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121476 je 0x101215c7 */
  if (C.zf) goto L_101215c7;
  /* 1012147c push 0x1012fcb4 */
  push32((uint32_t)(0x1012fcb4u));
  /* 10121481 push 0x101363c0 */
  push32((uint32_t)(0x101363c0u));
  /* 10121486 call eax */
  call_ind((uint32_t)(EAX), 0x10121488u);
  /* 10121488 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 1012148d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121490 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121492 je 0x101215c7 */
  if (C.zf) goto L_101215c7;
  /* 10121498 push 0x1012fdb8 */
  push32((uint32_t)(0x1012fdb8u));
  /* 1012149d push 0x10133658 */
  push32((uint32_t)(0x10133658u));
  /* 101214a2 call eax */
  call_ind((uint32_t)(EAX), 0x101214a4u);
  /* 101214a4 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 101214a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101214ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101214ae je 0x101215c7 */
  if (C.zf) goto L_101215c7;
  /* 101214b4 push 0x1012fda0 */
  push32((uint32_t)(0x1012fda0u));
  /* 101214b9 push 0x10133650 */
  push32((uint32_t)(0x10133650u));
  /* 101214be call eax */
  call_ind((uint32_t)(EAX), 0x101214c0u);
  /* 101214c0 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 101214c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101214c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101214ca je 0x101215c7 */
  if (C.zf) goto L_101215c7;
  /* 101214d0 push 0x1012fd88 */
  push32((uint32_t)(0x1012fd88u));
  /* 101214d5 push 0x10133648 */
  push32((uint32_t)(0x10133648u));
  /* 101214da call eax */
  call_ind((uint32_t)(EAX), 0x101214dcu);
  /* 101214dc mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 101214e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101214e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101214e6 je 0x101215c7 */
  if (C.zf) goto L_101215c7;
  /* 101214ec push 0x1012fd70 */
  push32((uint32_t)(0x1012fd70u));
  /* 101214f1 push 0x10136318 */
  push32((uint32_t)(0x10136318u));
  /* 101214f6 call eax */
  call_ind((uint32_t)(EAX), 0x101214f8u);
  /* 101214f8 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 101214fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121500 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121502 je 0x101215c7 */
  if (C.zf) goto L_101215c7;
  /* 10121508 push 0x1012fd58 */
  push32((uint32_t)(0x1012fd58u));
  /* 1012150d push 0x10136310 */
  push32((uint32_t)(0x10136310u));
  /* 10121512 call eax */
  call_ind((uint32_t)(EAX), 0x10121514u);
  /* 10121514 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121519 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012151c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012151e je 0x101215c7 */
  if (C.zf) goto L_101215c7;
  /* 10121524 push 0x1012fd40 */
  push32((uint32_t)(0x1012fd40u));
  /* 10121529 push 0x10136308 */
  push32((uint32_t)(0x10136308u));
  /* 1012152e call eax */
  call_ind((uint32_t)(EAX), 0x10121530u);
  /* 10121530 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121535 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121538 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012153a je 0x101215c7 */
  if (C.zf) goto L_101215c7;
  /* 10121540 push 0x1012fd2c */
  push32((uint32_t)(0x1012fd2cu));
  /* 10121545 push 0x10136390 */
  push32((uint32_t)(0x10136390u));
  /* 1012154a call eax */
  call_ind((uint32_t)(EAX), 0x1012154cu);
  /* 1012154c mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121551 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121554 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121556 je 0x101215c7 */
  if (C.zf) goto L_101215c7;
  /* 10121558 push 0x1012fd14 */
  push32((uint32_t)(0x1012fd14u));
  /* 1012155d push 0x10136388 */
  push32((uint32_t)(0x10136388u));
  /* 10121562 call eax */
  call_ind((uint32_t)(EAX), 0x10121564u);
  /* 10121564 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121569 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012156c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012156e je 0x101215c7 */
  if (C.zf) goto L_101215c7;
  /* 10121570 push 0x1012fcfc */
  push32((uint32_t)(0x1012fcfcu));
  /* 10121575 push 0x101363d8 */
  push32((uint32_t)(0x101363d8u));
  /* 1012157a call eax */
  call_ind((uint32_t)(EAX), 0x1012157cu);
  /* 1012157c mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121581 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121584 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121586 je 0x101215c7 */
  if (C.zf) goto L_101215c7;
  /* 10121588 push 0x1012fce4 */
  push32((uint32_t)(0x1012fce4u));
  /* 1012158d push 0x101363d0 */
  push32((uint32_t)(0x101363d0u));
  /* 10121592 call eax */
  call_ind((uint32_t)(EAX), 0x10121594u);
  /* 10121594 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121599 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012159c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012159e je 0x101215c7 */
  if (C.zf) goto L_101215c7;
  /* 101215a0 push 0x1012fccc */
  push32((uint32_t)(0x1012fcccu));
  /* 101215a5 push 0x101363c8 */
  push32((uint32_t)(0x101363c8u));
  /* 101215aa call eax */
  call_ind((uint32_t)(EAX), 0x101215acu);
  /* 101215ac mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 101215b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101215b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101215b6 je 0x101215c7 */
  if (C.zf) goto L_101215c7;
  /* 101215b8 push 0x1012fcb4 */
  push32((uint32_t)(0x1012fcb4u));
  /* 101215bd push 0x101363c0 */
  push32((uint32_t)(0x101363c0u));
  /* 101215c2 call eax */
  call_ind((uint32_t)(EAX), 0x101215c4u);
  /* 101215c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101215c7:;
  /* 101215c7 mov eax, dword ptr [0x101363f8] */
  EAX = (r32((uint32_t)(0x101363f8)));
  /* 101215cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101215ce je 0x101215df */
  if (C.zf) goto L_101215df;
  /* 101215d0 push 0x1012fca0 */
  push32((uint32_t)(0x1012fca0u));
  /* 101215d5 push 0x10135fe0 */
  push32((uint32_t)(0x10135fe0u));
  /* 101215da call eax */
  call_ind((uint32_t)(EAX), 0x101215dcu);
  /* 101215dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101215df:;
  /* 101215df push ebp */
  push32((uint32_t)(EBP));
  /* 101215e0 push esi */
  push32((uint32_t)(ESI));
  /* 101215e1 push edi */
  push32((uint32_t)(EDI));
  /* 101215e2 call dword ptr [0x10136500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136500))), 0x101215e8u);
  /* 101215e8 mov dword ptr [0x101362b4], eax */
  w32((uint32_t)(0x101362b4), (EAX));
  /* 101215ed call 0x101226c0 */
  push32(0x101215f2u); f_101226c0();
  /* 101215f2 mov ecx, eax */
  ECX = (EAX);
  /* 101215f4 mov eax, dword ptr [0x101362b4] */
  EAX = (r32((uint32_t)(0x101362b4)));
  /* 101215f9 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 101215ff mov dword ptr [eax*4 + 0x10135f98], ecx */
  w32((uint32_t)(EAX*4 + 0x10135f98), (ECX));
  /* 10121606 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 10121609 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 1012160c lea edx, [ecx + ecx*4] */
  EDX = ((uint32_t)(ECX + ECX*4));
  /* 1012160f lea eax, [eax + edx*2] */
  EAX = ((uint32_t)(EAX + EDX*2));
  /* 10121612 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10121615 mov dword ptr [eax + 0x10133af0], 0 */
  w32((uint32_t)(EAX + 0x10133af0), (0x0u));
  /* 1012161f mov dword ptr [eax + 0x10133c84], 0 */
  w32((uint32_t)(EAX + 0x10133c84), (0x0u));
  /* 10121629 call 0x101226c0 */
  push32(0x1012162eu); f_101226c0();
  /* 1012162e mov edx, eax */
  EDX = (EAX);
  /* 10121630 and eax, 6 */
  { uint32_t _r=(EAX)&(0x6u); EAX = (_r); fl_logic(_r,32); }
  /* 10121633 cmp al, 2 */
  { uint32_t _a=(AL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10121635 lea ebp, [esp + 0xc] */
  EBP = ((uint32_t)(ESP + 0xc));
  /* 10121639 mov edi, 0x1012fecc */
  EDI = (0x1012feccu);
  /* 1012163e je 0x10121645 */
  if (C.zf) goto L_10121645;
  /* 10121640 mov edi, 0x1012fc90 */
  EDI = (0x1012fc90u);
L_10121645:;
  /* 10121645 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10121648 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012164a repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1012164c not ecx */
  ECX = (~(ECX));
  /* 1012164e sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10121650 and edx, 0x18 */
  { uint32_t _r=(EDX)&(0x18u); EDX = (_r); fl_logic(_r,32); }
  /* 10121653 mov eax, ecx */
  EAX = (ECX);
  /* 10121655 mov esi, edi */
  ESI = (EDI);
  /* 10121657 mov edi, ebp */
  EDI = (EBP);
  /* 10121659 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1012165c rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1012165e mov ecx, eax */
  ECX = (EAX);
  /* 10121660 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10121663 cmp dl, 8 */
  { uint32_t _a=(DL),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10121666 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 10121668 lea edx, [esp + 0x3c] */
  EDX = ((uint32_t)(ESP + 0x3c));
  /* 1012166c mov edi, 0x1012fc80 */
  EDI = (0x1012fc80u);
  /* 10121671 je 0x10121678 */
  if (C.zf) goto L_10121678;
  /* 10121673 mov edi, 0x1012fc70 */
  EDI = (0x1012fc70u);
L_10121678:;
  /* 10121678 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1012167b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012167d repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1012167f not ecx */
  ECX = (~(ECX));
  /* 10121681 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10121683 mov eax, ecx */
  EAX = (ECX);
  /* 10121685 mov esi, edi */
  ESI = (EDI);
  /* 10121687 mov edi, edx */
  EDI = (EDX);
  /* 10121689 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1012168c rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1012168e mov ecx, eax */
  ECX = (EAX);
  /* 10121690 mov eax, dword ptr [0x101363f8] */
  EAX = (r32((uint32_t)(0x101363f8)));
  /* 10121695 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10121698 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 1012169a pop edi */
  EDI = (pop32());
  /* 1012169b pop esi */
  ESI = (pop32());
  /* 1012169c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012169e pop ebp */
  EBP = (pop32());
  /* 1012169f je 0x101216cd */
  if (C.zf) goto L_101216cd;
  /* 101216a1 push 0x1012fc5c */
  push32((uint32_t)(0x1012fc5cu));
  /* 101216a6 push 0x10133888 */
  push32((uint32_t)(0x10133888u));
  /* 101216ab call eax */
  call_ind((uint32_t)(EAX), 0x101216adu);
  /* 101216ad mov eax, dword ptr [0x101363f8] */
  EAX = (r32((uint32_t)(0x101363f8)));
  /* 101216b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101216b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101216b7 je 0x101216cd */
  if (C.zf) goto L_101216cd;
  /* 101216b9 push 0x1012fc48 */
  push32((uint32_t)(0x1012fc48u));
  /* 101216be push 0x10133640 */
  push32((uint32_t)(0x10133640u));
  /* 101216c3 call eax */
  call_ind((uint32_t)(EAX), 0x101216c5u);
  /* 101216c5 mov eax, dword ptr [0x101363f8] */
  EAX = (r32((uint32_t)(0x101363f8)));
  /* 101216ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101216cd:;
  /* 101216cd mov ecx, dword ptr [0x101363fc] */
  ECX = (r32((uint32_t)(0x101363fc)));
  /* 101216d3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101216d5 je 0x101216eb */
  if (C.zf) goto L_101216eb;
  /* 101216d7 push 0x1012fc2c */
  push32((uint32_t)(0x1012fc2cu));
  /* 101216dc push 0x101360d0 */
  push32((uint32_t)(0x101360d0u));
  /* 101216e1 call ecx */
  call_ind((uint32_t)(ECX), 0x101216e3u);
  /* 101216e3 mov eax, dword ptr [0x101363f8] */
  EAX = (r32((uint32_t)(0x101363f8)));
  /* 101216e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101216eb:;
  /* 101216eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101216ed je 0x1012172e */
  if (C.zf) goto L_1012172e;
  /* 101216ef push 0x1012fc14 */
  push32((uint32_t)(0x1012fc14u));
  /* 101216f4 push 0x10136278 */
  push32((uint32_t)(0x10136278u));
  /* 101216f9 call eax */
  call_ind((uint32_t)(EAX), 0x101216fbu);
  /* 101216fb mov eax, dword ptr [0x101363f8] */
  EAX = (r32((uint32_t)(0x101363f8)));
  /* 10121700 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121703 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121705 je 0x1012172e */
  if (C.zf) goto L_1012172e;
  /* 10121707 push 0x1012fbfc */
  push32((uint32_t)(0x1012fbfcu));
  /* 1012170c push 0x10136328 */
  push32((uint32_t)(0x10136328u));
  /* 10121711 call eax */
  call_ind((uint32_t)(EAX), 0x10121713u);
  /* 10121713 mov eax, dword ptr [0x101363f8] */
  EAX = (r32((uint32_t)(0x101363f8)));
  /* 10121718 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012171b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012171d je 0x1012172e */
  if (C.zf) goto L_1012172e;
  /* 1012171f push 0x1012fbe8 */
  push32((uint32_t)(0x1012fbe8u));
  /* 10121724 push 0x10133700 */
  push32((uint32_t)(0x10133700u));
  /* 10121729 call eax */
  call_ind((uint32_t)(EAX), 0x1012172bu);
  /* 1012172b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1012172e:;
  /* 1012172e mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121733 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121735 je 0x1012175e */
  if (C.zf) goto L_1012175e;
  /* 10121737 push 0x1012fbd0 */
  push32((uint32_t)(0x1012fbd0u));
  /* 1012173c push 0x10136260 */
  push32((uint32_t)(0x10136260u));
  /* 10121741 call eax */
  call_ind((uint32_t)(EAX), 0x10121743u);
  /* 10121743 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121748 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012174b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012174d je 0x1012175e */
  if (C.zf) goto L_1012175e;
  /* 1012174f push 0x1012fbb8 */
  push32((uint32_t)(0x1012fbb8u));
  /* 10121754 push 0x10135fc8 */
  push32((uint32_t)(0x10135fc8u));
  /* 10121759 call eax */
  call_ind((uint32_t)(EAX), 0x1012175bu);
  /* 1012175b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1012175e:;
  /* 1012175e push 0x1012fba4 */
  push32((uint32_t)(0x1012fba4u));
  /* 10121763 call 0x10122690 */
  push32(0x10121768u); f_10122690();
  /* 10121768 mov eax, dword ptr [0x101363f8] */
  EAX = (r32((uint32_t)(0x101363f8)));
  /* 1012176d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121770 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121772 je 0x10121a9f */
  if (C.zf) goto L_10121a9f;
  /* 10121778 push 0x1012fba4 */
  push32((uint32_t)(0x1012fba4u));
  /* 1012177d push 0x10133688 */
  push32((uint32_t)(0x10133688u));
  /* 10121782 call eax */
  call_ind((uint32_t)(EAX), 0x10121784u);
  /* 10121784 mov eax, dword ptr [0x101363f8] */
  EAX = (r32((uint32_t)(0x101363f8)));
  /* 10121789 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012178c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012178e je 0x10121a9f */
  if (C.zf) goto L_10121a9f;
  /* 10121794 push 0x1012fb8c */
  push32((uint32_t)(0x1012fb8cu));
  /* 10121799 push 0x10136190 */
  push32((uint32_t)(0x10136190u));
  /* 1012179e call eax */
  call_ind((uint32_t)(EAX), 0x101217a0u);
  /* 101217a0 mov eax, dword ptr [0x101363f8] */
  EAX = (r32((uint32_t)(0x101363f8)));
  /* 101217a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101217a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101217aa je 0x10121a9f */
  if (C.zf) goto L_10121a9f;
  /* 101217b0 push 0x1012fb78 */
  push32((uint32_t)(0x1012fb78u));
  /* 101217b5 push 0x10136160 */
  push32((uint32_t)(0x10136160u));
  /* 101217ba call eax */
  call_ind((uint32_t)(EAX), 0x101217bcu);
  /* 101217bc mov eax, dword ptr [0x101363f8] */
  EAX = (r32((uint32_t)(0x101363f8)));
  /* 101217c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101217c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101217c6 je 0x10121a9f */
  if (C.zf) goto L_10121a9f;
  /* 101217cc push 0x1012fb64 */
  push32((uint32_t)(0x1012fb64u));
  /* 101217d1 push 0x101360e0 */
  push32((uint32_t)(0x101360e0u));
  /* 101217d6 call eax */
  call_ind((uint32_t)(EAX), 0x101217d8u);
  /* 101217d8 mov eax, dword ptr [0x101363f8] */
  EAX = (r32((uint32_t)(0x101363f8)));
  /* 101217dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101217e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101217e2 je 0x10121a9f */
  if (C.zf) goto L_10121a9f;
  /* 101217e8 lea ecx, [esp] */
  ECX = ((uint32_t)(ESP));
  /* 101217ec push ecx */
  push32((uint32_t)(ECX));
  /* 101217ed push 0x101363b0 */
  push32((uint32_t)(0x101363b0u));
  /* 101217f2 call eax */
  call_ind((uint32_t)(EAX), 0x101217f4u);
  /* 101217f4 mov eax, dword ptr [0x101363f8] */
  EAX = (r32((uint32_t)(0x101363f8)));
  /* 101217f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101217fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101217fe je 0x10121a9f */
  if (C.zf) goto L_10121a9f;
  /* 10121804 push 0x1012fb58 */
  push32((uint32_t)(0x1012fb58u));
  /* 10121809 push 0x10136330 */
  push32((uint32_t)(0x10136330u));
  /* 1012180e call eax */
  call_ind((uint32_t)(EAX), 0x10121810u);
  /* 10121810 mov eax, dword ptr [0x101363f8] */
  EAX = (r32((uint32_t)(0x101363f8)));
  /* 10121815 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121818 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012181a je 0x10121a9f */
  if (C.zf) goto L_10121a9f;
  /* 10121820 lea edx, [esp + 0x30] */
  EDX = ((uint32_t)(ESP + 0x30));
  /* 10121824 push edx */
  push32((uint32_t)(EDX));
  /* 10121825 push 0x10135f80 */
  push32((uint32_t)(0x10135f80u));
  /* 1012182a call eax */
  call_ind((uint32_t)(EAX), 0x1012182cu);
  /* 1012182c mov eax, dword ptr [0x101363f8] */
  EAX = (r32((uint32_t)(0x101363f8)));
  /* 10121831 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121834 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121836 je 0x10121a9f */
  if (C.zf) goto L_10121a9f;
  /* 1012183c push 0x1012fb4c */
  push32((uint32_t)(0x1012fb4cu));
  /* 10121841 push 0x10136370 */
  push32((uint32_t)(0x10136370u));
  /* 10121846 call eax */
  call_ind((uint32_t)(EAX), 0x10121848u);
  /* 10121848 mov eax, dword ptr [0x101363f8] */
  EAX = (r32((uint32_t)(0x101363f8)));
  /* 1012184d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121850 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121852 je 0x10121a9f */
  if (C.zf) goto L_10121a9f;
  /* 10121858 push 0x1012fb40 */
  push32((uint32_t)(0x1012fb40u));
  /* 1012185d push 0x10133668 */
  push32((uint32_t)(0x10133668u));
  /* 10121862 call eax */
  call_ind((uint32_t)(EAX), 0x10121864u);
  /* 10121864 mov eax, dword ptr [0x101363f8] */
  EAX = (r32((uint32_t)(0x101363f8)));
  /* 10121869 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012186c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012186e je 0x10121a9f */
  if (C.zf) goto L_10121a9f;
  /* 10121874 push 0x1012fb30 */
  push32((uint32_t)(0x1012fb30u));
  /* 10121879 push 0x101338c8 */
  push32((uint32_t)(0x101338c8u));
  /* 1012187e call eax */
  call_ind((uint32_t)(EAX), 0x10121880u);
  /* 10121880 mov eax, dword ptr [0x101363f8] */
  EAX = (r32((uint32_t)(0x101363f8)));
  /* 10121885 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121888 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012188a je 0x10121a9f */
  if (C.zf) goto L_10121a9f;
  /* 10121890 push 0x1012fb24 */
  push32((uint32_t)(0x1012fb24u));
  /* 10121895 push 0x101361f0 */
  push32((uint32_t)(0x101361f0u));
  /* 1012189a call eax */
  call_ind((uint32_t)(EAX), 0x1012189cu);
  /* 1012189c mov eax, dword ptr [0x101363f8] */
  EAX = (r32((uint32_t)(0x101363f8)));
  /* 101218a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101218a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101218a6 je 0x10121a9f */
  if (C.zf) goto L_10121a9f;
  /* 101218ac push 0x1012fb10 */
  push32((uint32_t)(0x1012fb10u));
  /* 101218b1 push 0x10135fb8 */
  push32((uint32_t)(0x10135fb8u));
  /* 101218b6 call eax */
  call_ind((uint32_t)(EAX), 0x101218b8u);
  /* 101218b8 mov eax, dword ptr [0x101363f8] */
  EAX = (r32((uint32_t)(0x101363f8)));
  /* 101218bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101218c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101218c2 je 0x10121a9f */
  if (C.zf) goto L_10121a9f;
  /* 101218c8 push 0x1012fb04 */
  push32((uint32_t)(0x1012fb04u));
  /* 101218cd push 0x10135fd8 */
  push32((uint32_t)(0x10135fd8u));
  /* 101218d2 call eax */
  call_ind((uint32_t)(EAX), 0x101218d4u);
  /* 101218d4 mov eax, dword ptr [0x101363f8] */
  EAX = (r32((uint32_t)(0x101363f8)));
  /* 101218d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101218dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101218de je 0x10121a9f */
  if (C.zf) goto L_10121a9f;
  /* 101218e4 push 0x1012faf0 */
  push32((uint32_t)(0x1012faf0u));
  /* 101218e9 push 0x10136250 */
  push32((uint32_t)(0x10136250u));
  /* 101218ee call eax */
  call_ind((uint32_t)(EAX), 0x101218f0u);
  /* 101218f0 mov eax, dword ptr [0x101363f8] */
  EAX = (r32((uint32_t)(0x101363f8)));
  /* 101218f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101218f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101218fa je 0x10121a9f */
  if (C.zf) goto L_10121a9f;
  /* 10121900 push 0x1012fadc */
  push32((uint32_t)(0x1012fadcu));
  /* 10121905 push 0x10136258 */
  push32((uint32_t)(0x10136258u));
  /* 1012190a call eax */
  call_ind((uint32_t)(EAX), 0x1012190cu);
  /* 1012190c mov eax, dword ptr [0x101363f8] */
  EAX = (r32((uint32_t)(0x101363f8)));
  /* 10121911 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121914 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121916 je 0x10121a9f */
  if (C.zf) goto L_10121a9f;
  /* 1012191c push 0x1012fad0 */
  push32((uint32_t)(0x1012fad0u));
  /* 10121921 push 0x10135fd0 */
  push32((uint32_t)(0x10135fd0u));
  /* 10121926 call eax */
  call_ind((uint32_t)(EAX), 0x10121928u);
  /* 10121928 mov eax, dword ptr [0x101363f8] */
  EAX = (r32((uint32_t)(0x101363f8)));
  /* 1012192d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121930 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121932 je 0x10121a9f */
  if (C.zf) goto L_10121a9f;
  /* 10121938 push 0x1012fac0 */
  push32((uint32_t)(0x1012fac0u));
  /* 1012193d push 0x10135f20 */
  push32((uint32_t)(0x10135f20u));
  /* 10121942 call eax */
  call_ind((uint32_t)(EAX), 0x10121944u);
  /* 10121944 mov eax, dword ptr [0x101363f8] */
  EAX = (r32((uint32_t)(0x101363f8)));
  /* 10121949 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012194c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012194e je 0x10121a9f */
  if (C.zf) goto L_10121a9f;
  /* 10121954 push 0x1012faac */
  push32((uint32_t)(0x1012faacu));
  /* 10121959 push 0x101360d8 */
  push32((uint32_t)(0x101360d8u));
  /* 1012195e call eax */
  call_ind((uint32_t)(EAX), 0x10121960u);
  /* 10121960 mov eax, dword ptr [0x101363f8] */
  EAX = (r32((uint32_t)(0x101363f8)));
  /* 10121965 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121968 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012196a je 0x10121a9f */
  if (C.zf) goto L_10121a9f;
  /* 10121970 push 0x1012fa98 */
  push32((uint32_t)(0x1012fa98u));
  /* 10121975 push 0x10135fe8 */
  push32((uint32_t)(0x10135fe8u));
  /* 1012197a call eax */
  call_ind((uint32_t)(EAX), 0x1012197cu);
  /* 1012197c mov eax, dword ptr [0x101363f8] */
  EAX = (r32((uint32_t)(0x101363f8)));
  /* 10121981 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121984 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121986 je 0x10121a9f */
  if (C.zf) goto L_10121a9f;
  /* 1012198c push 0x1012fa80 */
  push32((uint32_t)(0x1012fa80u));
  /* 10121991 push 0x10133618 */
  push32((uint32_t)(0x10133618u));
  /* 10121996 call eax */
  call_ind((uint32_t)(EAX), 0x10121998u);
  /* 10121998 mov eax, dword ptr [0x101363f8] */
  EAX = (r32((uint32_t)(0x101363f8)));
  /* 1012199d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101219a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101219a2 je 0x10121a9f */
  if (C.zf) goto L_10121a9f;
  /* 101219a8 push 0x1012fa74 */
  push32((uint32_t)(0x1012fa74u));
  /* 101219ad push 0x10133878 */
  push32((uint32_t)(0x10133878u));
  /* 101219b2 call eax */
  call_ind((uint32_t)(EAX), 0x101219b4u);
  /* 101219b4 mov eax, dword ptr [0x101363f8] */
  EAX = (r32((uint32_t)(0x101363f8)));
  /* 101219b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101219bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101219be je 0x10121a9f */
  if (C.zf) goto L_10121a9f;
  /* 101219c4 push 0x1012fa68 */
  push32((uint32_t)(0x1012fa68u));
  /* 101219c9 push 0x101338d8 */
  push32((uint32_t)(0x101338d8u));
  /* 101219ce call eax */
  call_ind((uint32_t)(EAX), 0x101219d0u);
  /* 101219d0 mov eax, dword ptr [0x101363f8] */
  EAX = (r32((uint32_t)(0x101363f8)));
  /* 101219d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101219d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101219da je 0x10121a9f */
  if (C.zf) goto L_10121a9f;
  /* 101219e0 push 0x1012fa58 */
  push32((uint32_t)(0x1012fa58u));
  /* 101219e5 push 0x101361e8 */
  push32((uint32_t)(0x101361e8u));
  /* 101219ea call eax */
  call_ind((uint32_t)(EAX), 0x101219ecu);
  /* 101219ec mov eax, dword ptr [0x101363f8] */
  EAX = (r32((uint32_t)(0x101363f8)));
  /* 101219f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101219f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101219f6 je 0x10121a9f */
  if (C.zf) goto L_10121a9f;
  /* 101219fc push 0x1012fa48 */
  push32((uint32_t)(0x1012fa48u));
  /* 10121a01 push 0x101360f8 */
  push32((uint32_t)(0x101360f8u));
  /* 10121a06 call eax */
  call_ind((uint32_t)(EAX), 0x10121a08u);
  /* 10121a08 mov eax, dword ptr [0x101363f8] */
  EAX = (r32((uint32_t)(0x101363f8)));
  /* 10121a0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121a10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121a12 je 0x10121a9f */
  if (C.zf) goto L_10121a9f;
  /* 10121a18 push 0x1012fa3c */
  push32((uint32_t)(0x1012fa3cu));
  /* 10121a1d push 0x101362d8 */
  push32((uint32_t)(0x101362d8u));
  /* 10121a22 call eax */
  call_ind((uint32_t)(EAX), 0x10121a24u);
  /* 10121a24 mov eax, dword ptr [0x101363f8] */
  EAX = (r32((uint32_t)(0x101363f8)));
  /* 10121a29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121a2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121a2e je 0x10121a9f */
  if (C.zf) goto L_10121a9f;
  /* 10121a30 push 0x1012fa30 */
  push32((uint32_t)(0x1012fa30u));
  /* 10121a35 push 0x101338e8 */
  push32((uint32_t)(0x101338e8u));
  /* 10121a3a call eax */
  call_ind((uint32_t)(EAX), 0x10121a3cu);
  /* 10121a3c mov eax, dword ptr [0x101363f8] */
  EAX = (r32((uint32_t)(0x101363f8)));
  /* 10121a41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121a44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121a46 je 0x10121a9f */
  if (C.zf) goto L_10121a9f;
  /* 10121a48 push 0x1012fa24 */
  push32((uint32_t)(0x1012fa24u));
  /* 10121a4d push 0x10135f90 */
  push32((uint32_t)(0x10135f90u));
  /* 10121a52 call eax */
  call_ind((uint32_t)(EAX), 0x10121a54u);
  /* 10121a54 mov eax, dword ptr [0x101363f8] */
  EAX = (r32((uint32_t)(0x101363f8)));
  /* 10121a59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121a5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121a5e je 0x10121a9f */
  if (C.zf) goto L_10121a9f;
  /* 10121a60 push 0x1012fa18 */
  push32((uint32_t)(0x1012fa18u));
  /* 10121a65 push 0x10136398 */
  push32((uint32_t)(0x10136398u));
  /* 10121a6a call eax */
  call_ind((uint32_t)(EAX), 0x10121a6cu);
  /* 10121a6c mov eax, dword ptr [0x101363f8] */
  EAX = (r32((uint32_t)(0x101363f8)));
  /* 10121a71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121a74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121a76 je 0x10121a9f */
  if (C.zf) goto L_10121a9f;
  /* 10121a78 push 0x1012fa0c */
  push32((uint32_t)(0x1012fa0cu));
  /* 10121a7d push 0x10135f88 */
  push32((uint32_t)(0x10135f88u));
  /* 10121a82 call eax */
  call_ind((uint32_t)(EAX), 0x10121a84u);
  /* 10121a84 mov eax, dword ptr [0x101363f8] */
  EAX = (r32((uint32_t)(0x101363f8)));
  /* 10121a89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121a8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121a8e je 0x10121a9f */
  if (C.zf) goto L_10121a9f;
  /* 10121a90 push 0x1012f9fc */
  push32((uint32_t)(0x1012f9fcu));
  /* 10121a95 push 0x101338a0 */
  push32((uint32_t)(0x101338a0u));
  /* 10121a9a call eax */
  call_ind((uint32_t)(EAX), 0x10121a9cu);
  /* 10121a9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10121a9f:;
  /* 10121a9f mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121aa4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121aa6 je 0x10121c9f */
  if (C.zf) goto L_10121c9f;
  /* 10121aac push 0x1012f9e8 */
  push32((uint32_t)(0x1012f9e8u));
  /* 10121ab1 push 0x10136378 */
  push32((uint32_t)(0x10136378u));
  /* 10121ab6 call eax */
  call_ind((uint32_t)(EAX), 0x10121ab8u);
  /* 10121ab8 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121abd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121ac0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121ac2 je 0x10121c9f */
  if (C.zf) goto L_10121c9f;
  /* 10121ac8 push 0x1012f9d4 */
  push32((uint32_t)(0x1012f9d4u));
  /* 10121acd push 0x10136100 */
  push32((uint32_t)(0x10136100u));
  /* 10121ad2 call eax */
  call_ind((uint32_t)(EAX), 0x10121ad4u);
  /* 10121ad4 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121ad9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121adc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121ade je 0x10121c9f */
  if (C.zf) goto L_10121c9f;
  /* 10121ae4 push 0x1012f9cc */
  push32((uint32_t)(0x1012f9ccu));
  /* 10121ae9 push 0x10133660 */
  push32((uint32_t)(0x10133660u));
  /* 10121aee call eax */
  call_ind((uint32_t)(EAX), 0x10121af0u);
  /* 10121af0 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121af5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121af8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121afa je 0x10121c9f */
  if (C.zf) goto L_10121c9f;
  /* 10121b00 push 0x1012f9b4 */
  push32((uint32_t)(0x1012f9b4u));
  /* 10121b05 push 0x10136350 */
  push32((uint32_t)(0x10136350u));
  /* 10121b0a call eax */
  call_ind((uint32_t)(EAX), 0x10121b0cu);
  /* 10121b0c mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121b11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121b14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121b16 je 0x10121c9f */
  if (C.zf) goto L_10121c9f;
  /* 10121b1c push 0x1012f99c */
  push32((uint32_t)(0x1012f99cu));
  /* 10121b21 push 0x10136358 */
  push32((uint32_t)(0x10136358u));
  /* 10121b26 call eax */
  call_ind((uint32_t)(EAX), 0x10121b28u);
  /* 10121b28 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121b2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121b30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121b32 je 0x10121c9f */
  if (C.zf) goto L_10121c9f;
  /* 10121b38 push 0x1012f984 */
  push32((uint32_t)(0x1012f984u));
  /* 10121b3d push 0x10136340 */
  push32((uint32_t)(0x10136340u));
  /* 10121b42 call eax */
  call_ind((uint32_t)(EAX), 0x10121b44u);
  /* 10121b44 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121b49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121b4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121b4e je 0x10121c9f */
  if (C.zf) goto L_10121c9f;
  /* 10121b54 push 0x1012f96c */
  push32((uint32_t)(0x1012f96cu));
  /* 10121b59 push 0x10136348 */
  push32((uint32_t)(0x10136348u));
  /* 10121b5e call eax */
  call_ind((uint32_t)(EAX), 0x10121b60u);
  /* 10121b60 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121b65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121b68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121b6a je 0x10121c9f */
  if (C.zf) goto L_10121c9f;
  /* 10121b70 push 0x1012f954 */
  push32((uint32_t)(0x1012f954u));
  /* 10121b75 push 0x10136360 */
  push32((uint32_t)(0x10136360u));
  /* 10121b7a call eax */
  call_ind((uint32_t)(EAX), 0x10121b7cu);
  /* 10121b7c mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121b81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121b84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121b86 je 0x10121c9f */
  if (C.zf) goto L_10121c9f;
  /* 10121b8c push 0x1012f93c */
  push32((uint32_t)(0x1012f93cu));
  /* 10121b91 push 0x10136298 */
  push32((uint32_t)(0x10136298u));
  /* 10121b96 call eax */
  call_ind((uint32_t)(EAX), 0x10121b98u);
  /* 10121b98 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121b9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121ba0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121ba2 je 0x10121c9f */
  if (C.zf) goto L_10121c9f;
  /* 10121ba8 push 0x1012f924 */
  push32((uint32_t)(0x1012f924u));
  /* 10121bad push 0x10136280 */
  push32((uint32_t)(0x10136280u));
  /* 10121bb2 call eax */
  call_ind((uint32_t)(EAX), 0x10121bb4u);
  /* 10121bb4 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121bb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121bbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121bbe je 0x10121c9f */
  if (C.zf) goto L_10121c9f;
  /* 10121bc4 push 0x1012f90c */
  push32((uint32_t)(0x1012f90cu));
  /* 10121bc9 push 0x10136288 */
  push32((uint32_t)(0x10136288u));
  /* 10121bce call eax */
  call_ind((uint32_t)(EAX), 0x10121bd0u);
  /* 10121bd0 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121bd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121bd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121bda je 0x10121c9f */
  if (C.zf) goto L_10121c9f;
  /* 10121be0 push 0x1012f8f4 */
  push32((uint32_t)(0x1012f8f4u));
  /* 10121be5 push 0x101362a0 */
  push32((uint32_t)(0x101362a0u));
  /* 10121bea call eax */
  call_ind((uint32_t)(EAX), 0x10121becu);
  /* 10121bec mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121bf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121bf4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121bf6 je 0x10121c9f */
  if (C.zf) goto L_10121c9f;
  /* 10121bfc push 0x1012f8dc */
  push32((uint32_t)(0x1012f8dcu));
  /* 10121c01 push 0x101362a8 */
  push32((uint32_t)(0x101362a8u));
  /* 10121c06 call eax */
  call_ind((uint32_t)(EAX), 0x10121c08u);
  /* 10121c08 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121c0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121c10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121c12 je 0x10121c9f */
  if (C.zf) goto L_10121c9f;
  /* 10121c18 push 0x1012f8c4 */
  push32((uint32_t)(0x1012f8c4u));
  /* 10121c1d push 0x10133910 */
  push32((uint32_t)(0x10133910u));
  /* 10121c22 call eax */
  call_ind((uint32_t)(EAX), 0x10121c24u);
  /* 10121c24 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121c29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121c2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121c2e je 0x10121c9f */
  if (C.zf) goto L_10121c9f;
  /* 10121c30 push 0x1012f8ac */
  push32((uint32_t)(0x1012f8acu));
  /* 10121c35 push 0x10133918 */
  push32((uint32_t)(0x10133918u));
  /* 10121c3a call eax */
  call_ind((uint32_t)(EAX), 0x10121c3cu);
  /* 10121c3c mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121c41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121c44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121c46 je 0x10121c9f */
  if (C.zf) goto L_10121c9f;
  /* 10121c48 push 0x1012f894 */
  push32((uint32_t)(0x1012f894u));
  /* 10121c4d push 0x10133908 */
  push32((uint32_t)(0x10133908u));
  /* 10121c52 call eax */
  call_ind((uint32_t)(EAX), 0x10121c54u);
  /* 10121c54 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121c59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121c5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121c5e je 0x10121c9f */
  if (C.zf) goto L_10121c9f;
  /* 10121c60 push 0x1012f87c */
  push32((uint32_t)(0x1012f87cu));
  /* 10121c65 push 0x10135f78 */
  push32((uint32_t)(0x10135f78u));
  /* 10121c6a call eax */
  call_ind((uint32_t)(EAX), 0x10121c6cu);
  /* 10121c6c mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121c71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121c74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121c76 je 0x10121c9f */
  if (C.zf) goto L_10121c9f;
  /* 10121c78 push 0x1012f864 */
  push32((uint32_t)(0x1012f864u));
  /* 10121c7d push 0x10135f68 */
  push32((uint32_t)(0x10135f68u));
  /* 10121c82 call eax */
  call_ind((uint32_t)(EAX), 0x10121c84u);
  /* 10121c84 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121c89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121c8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121c8e je 0x10121c9f */
  if (C.zf) goto L_10121c9f;
  /* 10121c90 push 0x1012f84c */
  push32((uint32_t)(0x1012f84cu));
  /* 10121c95 push 0x10135f70 */
  push32((uint32_t)(0x10135f70u));
  /* 10121c9a call eax */
  call_ind((uint32_t)(EAX), 0x10121c9cu);
  /* 10121c9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10121c9f:;
  /* 10121c9f lea eax, [esp] */
  EAX = ((uint32_t)(ESP));
  /* 10121ca3 push 0x1012f844 */
  push32((uint32_t)(0x1012f844u));
  /* 10121ca8 push eax */
  push32((uint32_t)(EAX));
  /* 10121ca9 call 0x10122f30 */
  push32(0x10121caeu); f_10122f30();
  /* 10121cae push eax */
  push32((uint32_t)(EAX));
  /* 10121caf push 0x10136018 */
  push32((uint32_t)(0x10136018u));
  /* 10121cb4 call 0x101226a0 */
  push32(0x10121cb9u); f_101226a0();
  /* 10121cb9 lea ecx, [esp + 0x10] */
  ECX = ((uint32_t)(ESP + 0x10));
  /* 10121cbd push 0x1012f83c */
  push32((uint32_t)(0x1012f83cu));
  /* 10121cc2 push ecx */
  push32((uint32_t)(ECX));
  /* 10121cc3 call 0x10122f30 */
  push32(0x10121cc8u); f_10122f30();
  /* 10121cc8 push eax */
  push32((uint32_t)(EAX));
  /* 10121cc9 push 0x10136010 */
  push32((uint32_t)(0x10136010u));
  /* 10121cce call 0x101226a0 */
  push32(0x10121cd3u); f_101226a0();
  /* 10121cd3 lea edx, [esp + 0x20] */
  EDX = ((uint32_t)(ESP + 0x20));
  /* 10121cd7 push 0x1012f834 */
  push32((uint32_t)(0x1012f834u));
  /* 10121cdc push edx */
  push32((uint32_t)(EDX));
  /* 10121cdd call 0x10122f30 */
  push32(0x10121ce2u); f_10122f30();
  /* 10121ce2 push eax */
  push32((uint32_t)(EAX));
  /* 10121ce3 push 0x10136008 */
  push32((uint32_t)(0x10136008u));
  /* 10121ce8 call 0x101226a0 */
  push32(0x10121cedu); f_101226a0();
  /* 10121ced lea eax, [esp + 0x30] */
  EAX = ((uint32_t)(ESP + 0x30));
  /* 10121cf1 push 0x1012f82c */
  push32((uint32_t)(0x1012f82cu));
  /* 10121cf6 push eax */
  push32((uint32_t)(EAX));
  /* 10121cf7 call 0x10122f30 */
  push32(0x10121cfcu); f_10122f30();
  /* 10121cfc push eax */
  push32((uint32_t)(EAX));
  /* 10121cfd push 0x10136000 */
  push32((uint32_t)(0x10136000u));
  /* 10121d02 call 0x101226a0 */
  push32(0x10121d07u); f_101226a0();
  /* 10121d07 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121d0a lea ecx, [esp] */
  ECX = ((uint32_t)(ESP));
  /* 10121d0e push 0x1012f824 */
  push32((uint32_t)(0x1012f824u));
  /* 10121d13 push ecx */
  push32((uint32_t)(ECX));
  /* 10121d14 call 0x10122f30 */
  push32(0x10121d19u); f_10122f30();
  /* 10121d19 push eax */
  push32((uint32_t)(EAX));
  /* 10121d1a push 0x10135ff8 */
  push32((uint32_t)(0x10135ff8u));
  /* 10121d1f call 0x101226a0 */
  push32(0x10121d24u); f_101226a0();
  /* 10121d24 lea edx, [esp + 0x10] */
  EDX = ((uint32_t)(ESP + 0x10));
  /* 10121d28 push 0x1012f81c */
  push32((uint32_t)(0x1012f81cu));
  /* 10121d2d push edx */
  push32((uint32_t)(EDX));
  /* 10121d2e call 0x10122f30 */
  push32(0x10121d33u); f_10122f30();
  /* 10121d33 push eax */
  push32((uint32_t)(EAX));
  /* 10121d34 push 0x10135ff0 */
  push32((uint32_t)(0x10135ff0u));
  /* 10121d39 call 0x101226a0 */
  push32(0x10121d3eu); f_101226a0();
  /* 10121d3e lea eax, [esp + 0x20] */
  EAX = ((uint32_t)(ESP + 0x20));
  /* 10121d42 push 0x1012f814 */
  push32((uint32_t)(0x1012f814u));
  /* 10121d47 push eax */
  push32((uint32_t)(EAX));
  /* 10121d48 call 0x10122f30 */
  push32(0x10121d4du); f_10122f30();
  /* 10121d4d push eax */
  push32((uint32_t)(EAX));
  /* 10121d4e push 0x10136130 */
  push32((uint32_t)(0x10136130u));
  /* 10121d53 call 0x101226a0 */
  push32(0x10121d58u); f_101226a0();
  /* 10121d58 lea ecx, [esp + 0x30] */
  ECX = ((uint32_t)(ESP + 0x30));
  /* 10121d5c push 0x1012f80c */
  push32((uint32_t)(0x1012f80cu));
  /* 10121d61 push ecx */
  push32((uint32_t)(ECX));
  /* 10121d62 call 0x10122f30 */
  push32(0x10121d67u); f_10122f30();
  /* 10121d67 push eax */
  push32((uint32_t)(EAX));
  /* 10121d68 push 0x10136128 */
  push32((uint32_t)(0x10136128u));
  /* 10121d6d call 0x101226a0 */
  push32(0x10121d72u); f_101226a0();
  /* 10121d72 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121d75 lea edx, [esp] */
  EDX = ((uint32_t)(ESP));
  /* 10121d79 push 0x1012f804 */
  push32((uint32_t)(0x1012f804u));
  /* 10121d7e push edx */
  push32((uint32_t)(EDX));
  /* 10121d7f call 0x10122f30 */
  push32(0x10121d84u); f_10122f30();
  /* 10121d84 push eax */
  push32((uint32_t)(EAX));
  /* 10121d85 push 0x10136120 */
  push32((uint32_t)(0x10136120u));
  /* 10121d8a call 0x101226a0 */
  push32(0x10121d8fu); f_101226a0();
  /* 10121d8f lea eax, [esp + 0x10] */
  EAX = ((uint32_t)(ESP + 0x10));
  /* 10121d93 push 0x1012f7fc */
  push32((uint32_t)(0x1012f7fcu));
  /* 10121d98 push eax */
  push32((uint32_t)(EAX));
  /* 10121d99 call 0x10122f30 */
  push32(0x10121d9eu); f_10122f30();
  /* 10121d9e push eax */
  push32((uint32_t)(EAX));
  /* 10121d9f push 0x10136118 */
  push32((uint32_t)(0x10136118u));
  /* 10121da4 call 0x101226a0 */
  push32(0x10121da9u); f_101226a0();
  /* 10121da9 lea ecx, [esp + 0x20] */
  ECX = ((uint32_t)(ESP + 0x20));
  /* 10121dad push 0x1012f7f4 */
  push32((uint32_t)(0x1012f7f4u));
  /* 10121db2 push ecx */
  push32((uint32_t)(ECX));
  /* 10121db3 call 0x10122f30 */
  push32(0x10121db8u); f_10122f30();
  /* 10121db8 push eax */
  push32((uint32_t)(EAX));
  /* 10121db9 push 0x10136108 */
  push32((uint32_t)(0x10136108u));
  /* 10121dbe call 0x101226a0 */
  push32(0x10121dc3u); f_101226a0();
  /* 10121dc3 push 0x1012f7ec */
  push32((uint32_t)(0x1012f7ecu));
  /* 10121dc8 lea edx, [esp + 0x34] */
  EDX = ((uint32_t)(ESP + 0x34));
  /* 10121dcc push edx */
  push32((uint32_t)(EDX));
  /* 10121dcd call 0x10122f30 */
  push32(0x10121dd2u); f_10122f30();
  /* 10121dd2 push eax */
  push32((uint32_t)(EAX));
  /* 10121dd3 push 0x10136158 */
  push32((uint32_t)(0x10136158u));
  /* 10121dd8 call 0x101226a0 */
  push32(0x10121dddu); f_101226a0();
  /* 10121ddd mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121de2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121de5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121de7 je 0x10121f1c */
  if (C.zf) goto L_10121f1c;
  /* 10121ded push 0x1012f7d8 */
  push32((uint32_t)(0x1012f7d8u));
  /* 10121df2 push 0x101336b8 */
  push32((uint32_t)(0x101336b8u));
  /* 10121df7 call eax */
  call_ind((uint32_t)(EAX), 0x10121df9u);
  /* 10121df9 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121dfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121e01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121e03 je 0x10121f1c */
  if (C.zf) goto L_10121f1c;
  /* 10121e09 push 0x1012f7c4 */
  push32((uint32_t)(0x1012f7c4u));
  /* 10121e0e push 0x101336b0 */
  push32((uint32_t)(0x101336b0u));
  /* 10121e13 call eax */
  call_ind((uint32_t)(EAX), 0x10121e15u);
  /* 10121e15 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121e1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121e1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121e1f je 0x10121f1c */
  if (C.zf) goto L_10121f1c;
  /* 10121e25 push 0x1012f7b0 */
  push32((uint32_t)(0x1012f7b0u));
  /* 10121e2a push 0x101336a8 */
  push32((uint32_t)(0x101336a8u));
  /* 10121e2f call eax */
  call_ind((uint32_t)(EAX), 0x10121e31u);
  /* 10121e31 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121e36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121e39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121e3b je 0x10121f1c */
  if (C.zf) goto L_10121f1c;
  /* 10121e41 push 0x1012f79c */
  push32((uint32_t)(0x1012f79cu));
  /* 10121e46 push 0x101336a0 */
  push32((uint32_t)(0x101336a0u));
  /* 10121e4b call eax */
  call_ind((uint32_t)(EAX), 0x10121e4du);
  /* 10121e4d mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121e52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121e55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121e57 je 0x10121f1c */
  if (C.zf) goto L_10121f1c;
  /* 10121e5d push 0x1012f788 */
  push32((uint32_t)(0x1012f788u));
  /* 10121e62 push 0x10133678 */
  push32((uint32_t)(0x10133678u));
  /* 10121e67 call eax */
  call_ind((uint32_t)(EAX), 0x10121e69u);
  /* 10121e69 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121e6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121e71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121e73 je 0x10121f1c */
  if (C.zf) goto L_10121f1c;
  /* 10121e79 push 0x1012f774 */
  push32((uint32_t)(0x1012f774u));
  /* 10121e7e push 0x10133670 */
  push32((uint32_t)(0x10133670u));
  /* 10121e83 call eax */
  call_ind((uint32_t)(EAX), 0x10121e85u);
  /* 10121e85 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121e8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121e8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121e8f je 0x10121f1c */
  if (C.zf) goto L_10121f1c;
  /* 10121e95 push 0x1012f760 */
  push32((uint32_t)(0x1012f760u));
  /* 10121e9a push 0x10133748 */
  push32((uint32_t)(0x10133748u));
  /* 10121e9f call eax */
  call_ind((uint32_t)(EAX), 0x10121ea1u);
  /* 10121ea1 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121ea6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121ea9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121eab je 0x10121f1c */
  if (C.zf) goto L_10121f1c;
  /* 10121ead push 0x1012f74c */
  push32((uint32_t)(0x1012f74cu));
  /* 10121eb2 push 0x10133740 */
  push32((uint32_t)(0x10133740u));
  /* 10121eb7 call eax */
  call_ind((uint32_t)(EAX), 0x10121eb9u);
  /* 10121eb9 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121ebe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121ec1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121ec3 je 0x10121f1c */
  if (C.zf) goto L_10121f1c;
  /* 10121ec5 push 0x1012f738 */
  push32((uint32_t)(0x1012f738u));
  /* 10121eca push 0x10133738 */
  push32((uint32_t)(0x10133738u));
  /* 10121ecf call eax */
  call_ind((uint32_t)(EAX), 0x10121ed1u);
  /* 10121ed1 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121ed6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121ed9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121edb je 0x10121f1c */
  if (C.zf) goto L_10121f1c;
  /* 10121edd push 0x1012f724 */
  push32((uint32_t)(0x1012f724u));
  /* 10121ee2 push 0x10133720 */
  push32((uint32_t)(0x10133720u));
  /* 10121ee7 call eax */
  call_ind((uint32_t)(EAX), 0x10121ee9u);
  /* 10121ee9 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121eee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121ef1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121ef3 je 0x10121f1c */
  if (C.zf) goto L_10121f1c;
  /* 10121ef5 push 0x1012f710 */
  push32((uint32_t)(0x1012f710u));
  /* 10121efa push 0x10133718 */
  push32((uint32_t)(0x10133718u));
  /* 10121eff call eax */
  call_ind((uint32_t)(EAX), 0x10121f01u);
  /* 10121f01 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10121f06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121f09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10121f0b je 0x10121f1c */
  if (C.zf) goto L_10121f1c;
  /* 10121f0d push 0x1012f6fc */
  push32((uint32_t)(0x1012f6fcu));
  /* 10121f12 push 0x10133710 */
  push32((uint32_t)(0x10133710u));
  /* 10121f17 call eax */
  call_ind((uint32_t)(EAX), 0x10121f19u);
  /* 10121f19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10121f1c:;
  /* 10121f1c lea eax, [esp + 0x30] */
  EAX = ((uint32_t)(ESP + 0x30));
  /* 10121f20 push 0x1012f844 */
  push32((uint32_t)(0x1012f844u));
  /* 10121f25 push eax */
  push32((uint32_t)(EAX));
  /* 10121f26 call 0x10122f30 */
  push32(0x10121f2bu); f_10122f30();
  /* 10121f2b push eax */
  push32((uint32_t)(EAX));
  /* 10121f2c push 0x101336e0 */
  push32((uint32_t)(0x101336e0u));
  /* 10121f31 call 0x101226a0 */
  push32(0x10121f36u); f_101226a0();
  /* 10121f36 lea ecx, [esp + 0x40] */
  ECX = ((uint32_t)(ESP + 0x40));
  /* 10121f3a push 0x1012f83c */
  push32((uint32_t)(0x1012f83cu));
  /* 10121f3f push ecx */
  push32((uint32_t)(ECX));
  /* 10121f40 call 0x10122f30 */
  push32(0x10121f45u); f_10122f30();
  /* 10121f45 push eax */
  push32((uint32_t)(EAX));
  /* 10121f46 push 0x101336e8 */
  push32((uint32_t)(0x101336e8u));
  /* 10121f4b call 0x101226a0 */
  push32(0x10121f50u); f_101226a0();
  /* 10121f50 lea edx, [esp + 0x50] */
  EDX = ((uint32_t)(ESP + 0x50));
  /* 10121f54 push 0x1012f834 */
  push32((uint32_t)(0x1012f834u));
  /* 10121f59 push edx */
  push32((uint32_t)(EDX));
  /* 10121f5a call 0x10122f30 */
  push32(0x10121f5fu); f_10122f30();
  /* 10121f5f push eax */
  push32((uint32_t)(EAX));
  /* 10121f60 push 0x101336f0 */
  push32((uint32_t)(0x101336f0u));
  /* 10121f65 call 0x101226a0 */
  push32(0x10121f6au); f_101226a0();
  /* 10121f6a lea eax, [esp + 0x60] */
  EAX = ((uint32_t)(ESP + 0x60));
  /* 10121f6e push 0x1012f82c */
  push32((uint32_t)(0x1012f82cu));
  /* 10121f73 push eax */
  push32((uint32_t)(EAX));
  /* 10121f74 call 0x10122f30 */
  push32(0x10121f79u); f_10122f30();
  /* 10121f79 push eax */
  push32((uint32_t)(EAX));
  /* 10121f7a push 0x101336f8 */
  push32((uint32_t)(0x101336f8u));
  /* 10121f7f call 0x101226a0 */
  push32(0x10121f84u); f_101226a0();
  /* 10121f84 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121f87 lea ecx, [esp + 0x30] */
  ECX = ((uint32_t)(ESP + 0x30));
  /* 10121f8b push 0x1012f824 */
  push32((uint32_t)(0x1012f824u));
  /* 10121f90 push ecx */
  push32((uint32_t)(ECX));
  /* 10121f91 call 0x10122f30 */
  push32(0x10121f96u); f_10122f30();
  /* 10121f96 push eax */
  push32((uint32_t)(EAX));
  /* 10121f97 push 0x101336c0 */
  push32((uint32_t)(0x101336c0u));
  /* 10121f9c call 0x101226a0 */
  push32(0x10121fa1u); f_101226a0();
  /* 10121fa1 lea edx, [esp + 0x40] */
  EDX = ((uint32_t)(ESP + 0x40));
  /* 10121fa5 push 0x1012f81c */
  push32((uint32_t)(0x1012f81cu));
  /* 10121faa push edx */
  push32((uint32_t)(EDX));
  /* 10121fab call 0x10122f30 */
  push32(0x10121fb0u); f_10122f30();
  /* 10121fb0 push eax */
  push32((uint32_t)(EAX));
  /* 10121fb1 push 0x101336d0 */
  push32((uint32_t)(0x101336d0u));
  /* 10121fb6 call 0x101226a0 */
  push32(0x10121fbbu); f_101226a0();
  /* 10121fbb lea eax, [esp + 0x50] */
  EAX = ((uint32_t)(ESP + 0x50));
  /* 10121fbf push 0x1012f814 */
  push32((uint32_t)(0x1012f814u));
  /* 10121fc4 push eax */
  push32((uint32_t)(EAX));
  /* 10121fc5 call 0x10122f30 */
  push32(0x10121fcau); f_10122f30();
  /* 10121fca push eax */
  push32((uint32_t)(EAX));
  /* 10121fcb push 0x10133788 */
  push32((uint32_t)(0x10133788u));
  /* 10121fd0 call 0x101226a0 */
  push32(0x10121fd5u); f_101226a0();
  /* 10121fd5 lea ecx, [esp + 0x60] */
  ECX = ((uint32_t)(ESP + 0x60));
  /* 10121fd9 push 0x1012f80c */
  push32((uint32_t)(0x1012f80cu));
  /* 10121fde push ecx */
  push32((uint32_t)(ECX));
  /* 10121fdf call 0x10122f30 */
  push32(0x10121fe4u); f_10122f30();
  /* 10121fe4 push eax */
  push32((uint32_t)(EAX));
  /* 10121fe5 push 0x10133790 */
  push32((uint32_t)(0x10133790u));
  /* 10121fea call 0x101226a0 */
  push32(0x10121fefu); f_101226a0();
  /* 10121fef add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10121ff2 lea edx, [esp + 0x30] */
  EDX = ((uint32_t)(ESP + 0x30));
  /* 10121ff6 push 0x1012f804 */
  push32((uint32_t)(0x1012f804u));
  /* 10121ffb push edx */
  push32((uint32_t)(EDX));
  /* 10121ffc call 0x10122f30 */
  push32(0x10122001u); f_10122f30();
  /* 10122001 push eax */
  push32((uint32_t)(EAX));
  /* 10122002 push 0x10133798 */
  push32((uint32_t)(0x10133798u));
  /* 10122007 call 0x101226a0 */
  push32(0x1012200cu); f_101226a0();
  /* 1012200c lea eax, [esp + 0x40] */
  EAX = ((uint32_t)(ESP + 0x40));
  /* 10122010 push 0x1012f7fc */
  push32((uint32_t)(0x1012f7fcu));
  /* 10122015 push eax */
  push32((uint32_t)(EAX));
  /* 10122016 call 0x10122f30 */
  push32(0x1012201bu); f_10122f30();
  /* 1012201b push eax */
  push32((uint32_t)(EAX));
  /* 1012201c push 0x10133770 */
  push32((uint32_t)(0x10133770u));
  /* 10122021 call 0x101226a0 */
  push32(0x10122026u); f_101226a0();
  /* 10122026 lea ecx, [esp + 0x50] */
  ECX = ((uint32_t)(ESP + 0x50));
  /* 1012202a push 0x1012f7f4 */
  push32((uint32_t)(0x1012f7f4u));
  /* 1012202f push ecx */
  push32((uint32_t)(ECX));
  /* 10122030 call 0x10122f30 */
  push32(0x10122035u); f_10122f30();
  /* 10122035 push eax */
  push32((uint32_t)(EAX));
  /* 10122036 push 0x10133778 */
  push32((uint32_t)(0x10133778u));
  /* 1012203b call 0x101226a0 */
  push32(0x10122040u); f_101226a0();
  /* 10122040 push 0x1012f7ec */
  push32((uint32_t)(0x1012f7ecu));
  /* 10122045 lea edx, [esp + 0x64] */
  EDX = ((uint32_t)(ESP + 0x64));
  /* 10122049 push edx */
  push32((uint32_t)(EDX));
  /* 1012204a call 0x10122f30 */
  push32(0x1012204fu); f_10122f30();
  /* 1012204f push eax */
  push32((uint32_t)(EAX));
  /* 10122050 push 0x10133780 */
  push32((uint32_t)(0x10133780u));
  /* 10122055 call 0x101226a0 */
  push32(0x1012205au); f_101226a0();
  /* 1012205a mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 1012205f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10122062 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10122064 je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 1012206a push 0x1012f6ec */
  push32((uint32_t)(0x1012f6ecu));
  /* 1012206f push 0x101361d8 */
  push32((uint32_t)(0x101361d8u));
  /* 10122074 call eax */
  call_ind((uint32_t)(EAX), 0x10122076u);
  /* 10122076 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 1012207b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012207e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10122080 je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 10122086 push 0x1012f6d8 */
  push32((uint32_t)(0x1012f6d8u));
  /* 1012208b push 0x101361d0 */
  push32((uint32_t)(0x101361d0u));
  /* 10122090 call eax */
  call_ind((uint32_t)(EAX), 0x10122092u);
  /* 10122092 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10122097 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012209a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012209c je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 101220a2 push 0x1012f6c4 */
  push32((uint32_t)(0x1012f6c4u));
  /* 101220a7 push 0x101361a0 */
  push32((uint32_t)(0x101361a0u));
  /* 101220ac call eax */
  call_ind((uint32_t)(EAX), 0x101220aeu);
  /* 101220ae mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 101220b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101220b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101220b8 je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 101220be push 0x1012f6b0 */
  push32((uint32_t)(0x1012f6b0u));
  /* 101220c3 push 0x10136198 */
  push32((uint32_t)(0x10136198u));
  /* 101220c8 call eax */
  call_ind((uint32_t)(EAX), 0x101220cau);
  /* 101220ca mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 101220cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101220d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101220d4 je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 101220da push 0x1012f69c */
  push32((uint32_t)(0x1012f69cu));
  /* 101220df push 0x101361a8 */
  push32((uint32_t)(0x101361a8u));
  /* 101220e4 call eax */
  call_ind((uint32_t)(EAX), 0x101220e6u);
  /* 101220e6 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 101220eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101220ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101220f0 je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 101220f6 push 0x1012f688 */
  push32((uint32_t)(0x1012f688u));
  /* 101220fb push 0x10136098 */
  push32((uint32_t)(0x10136098u));
  /* 10122100 call eax */
  call_ind((uint32_t)(EAX), 0x10122102u);
  /* 10122102 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10122107 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012210a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012210c je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 10122112 push 0x1012f674 */
  push32((uint32_t)(0x1012f674u));
  /* 10122117 push 0x101360a0 */
  push32((uint32_t)(0x101360a0u));
  /* 1012211c call eax */
  call_ind((uint32_t)(EAX), 0x1012211eu);
  /* 1012211e mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10122123 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10122126 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10122128 je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 1012212e push 0x1012f660 */
  push32((uint32_t)(0x1012f660u));
  /* 10122133 push 0x101360a8 */
  push32((uint32_t)(0x101360a8u));
  /* 10122138 call eax */
  call_ind((uint32_t)(EAX), 0x1012213au);
  /* 1012213a mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 1012213f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10122142 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10122144 je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 1012214a push 0x1012f64c */
  push32((uint32_t)(0x1012f64cu));
  /* 1012214f push 0x101360b0 */
  push32((uint32_t)(0x101360b0u));
  /* 10122154 call eax */
  call_ind((uint32_t)(EAX), 0x10122156u);
  /* 10122156 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 1012215b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012215e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10122160 je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 10122166 push 0x1012f644 */
  push32((uint32_t)(0x1012f644u));
  /* 1012216b push 0x101361b8 */
  push32((uint32_t)(0x101361b8u));
  /* 10122170 call eax */
  call_ind((uint32_t)(EAX), 0x10122172u);
  /* 10122172 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10122177 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012217a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012217c je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 10122182 push 0x1012f63c */
  push32((uint32_t)(0x1012f63cu));
  /* 10122187 push 0x10136020 */
  push32((uint32_t)(0x10136020u));
  /* 1012218c call eax */
  call_ind((uint32_t)(EAX), 0x1012218eu);
  /* 1012218e mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10122193 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10122196 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10122198 je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 1012219e push 0x1012f634 */
  push32((uint32_t)(0x1012f634u));
  /* 101221a3 push 0x10133958 */
  push32((uint32_t)(0x10133958u));
  /* 101221a8 call eax */
  call_ind((uint32_t)(EAX), 0x101221aau);
  /* 101221aa mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 101221af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101221b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101221b4 je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 101221ba push 0x1012f62c */
  push32((uint32_t)(0x1012f62cu));
  /* 101221bf push 0x10136078 */
  push32((uint32_t)(0x10136078u));
  /* 101221c4 call eax */
  call_ind((uint32_t)(EAX), 0x101221c6u);
  /* 101221c6 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 101221cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101221ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101221d0 je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 101221d6 push 0x1012f624 */
  push32((uint32_t)(0x1012f624u));
  /* 101221db push 0x10136030 */
  push32((uint32_t)(0x10136030u));
  /* 101221e0 call eax */
  call_ind((uint32_t)(EAX), 0x101221e2u);
  /* 101221e2 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 101221e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101221ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101221ec je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 101221f2 push 0x1012f61c */
  push32((uint32_t)(0x1012f61cu));
  /* 101221f7 push 0x10136038 */
  push32((uint32_t)(0x10136038u));
  /* 101221fc call eax */
  call_ind((uint32_t)(EAX), 0x101221feu);
  /* 101221fe mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10122203 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10122206 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10122208 je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 1012220e push 0x1012f614 */
  push32((uint32_t)(0x1012f614u));
  /* 10122213 push 0x10136040 */
  push32((uint32_t)(0x10136040u));
  /* 10122218 call eax */
  call_ind((uint32_t)(EAX), 0x1012221au);
  /* 1012221a mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 1012221f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10122222 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10122224 je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 1012222a push 0x1012f60c */
  push32((uint32_t)(0x1012f60cu));
  /* 1012222f push 0x10136270 */
  push32((uint32_t)(0x10136270u));
  /* 10122234 call eax */
  call_ind((uint32_t)(EAX), 0x10122236u);
  /* 10122236 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 1012223b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012223e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10122240 je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 10122246 push 0x1012f604 */
  push32((uint32_t)(0x1012f604u));
  /* 1012224b push 0x10136110 */
  push32((uint32_t)(0x10136110u));
  /* 10122250 call eax */
  call_ind((uint32_t)(EAX), 0x10122252u);
  /* 10122252 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10122257 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012225a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012225c je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 10122262 push 0x1012f5fc */
  push32((uint32_t)(0x1012f5fcu));
  /* 10122267 push 0x10136150 */
  push32((uint32_t)(0x10136150u));
  /* 1012226c call eax */
  call_ind((uint32_t)(EAX), 0x1012226eu);
  /* 1012226e mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10122273 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10122276 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10122278 je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 1012227e push 0x1012f5f4 */
  push32((uint32_t)(0x1012f5f4u));
  /* 10122283 push 0x10136208 */
  push32((uint32_t)(0x10136208u));
  /* 10122288 call eax */
  call_ind((uint32_t)(EAX), 0x1012228au);
  /* 1012228a mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 1012228f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10122292 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10122294 je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 1012229a push 0x1012f5ec */
  push32((uint32_t)(0x1012f5ecu));
  /* 1012229f push 0x10136210 */
  push32((uint32_t)(0x10136210u));
  /* 101222a4 call eax */
  call_ind((uint32_t)(EAX), 0x101222a6u);
  /* 101222a6 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 101222ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101222ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101222b0 je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 101222b6 push 0x1012f5e4 */
  push32((uint32_t)(0x1012f5e4u));
  /* 101222bb push 0x10136168 */
  push32((uint32_t)(0x10136168u));
  /* 101222c0 call eax */
  call_ind((uint32_t)(EAX), 0x101222c2u);
  /* 101222c2 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 101222c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101222ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101222cc je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 101222d2 push 0x1012f5dc */
  push32((uint32_t)(0x1012f5dcu));
  /* 101222d7 push 0x10136178 */
  push32((uint32_t)(0x10136178u));
  /* 101222dc call eax */
  call_ind((uint32_t)(EAX), 0x101222deu);
  /* 101222de mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 101222e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101222e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101222e8 je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 101222ee push 0x1012f5d4 */
  push32((uint32_t)(0x1012f5d4u));
  /* 101222f3 push 0x10136180 */
  push32((uint32_t)(0x10136180u));
  /* 101222f8 call eax */
  call_ind((uint32_t)(EAX), 0x101222fau);
  /* 101222fa mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 101222ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10122302 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10122304 je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 1012230a push 0x1012f5cc */
  push32((uint32_t)(0x1012f5ccu));
  /* 1012230f push 0x10136170 */
  push32((uint32_t)(0x10136170u));
  /* 10122314 call eax */
  call_ind((uint32_t)(EAX), 0x10122316u);
  /* 10122316 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 1012231b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012231e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10122320 je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 10122326 push 0x1012f5c4 */
  push32((uint32_t)(0x1012f5c4u));
  /* 1012232b push 0x10133950 */
  push32((uint32_t)(0x10133950u));
  /* 10122330 call eax */
  call_ind((uint32_t)(EAX), 0x10122332u);
  /* 10122332 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10122337 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012233a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012233c je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 10122342 push 0x1012f5bc */
  push32((uint32_t)(0x1012f5bcu));
  /* 10122347 push 0x101338e0 */
  push32((uint32_t)(0x101338e0u));
  /* 1012234c call eax */
  call_ind((uint32_t)(EAX), 0x1012234eu);
  /* 1012234e mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10122353 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10122356 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10122358 je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 1012235e push 0x1012f5b4 */
  push32((uint32_t)(0x1012f5b4u));
  /* 10122363 push 0x101337a0 */
  push32((uint32_t)(0x101337a0u));
  /* 10122368 call eax */
  call_ind((uint32_t)(EAX), 0x1012236au);
  /* 1012236a mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 1012236f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10122372 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10122374 je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 1012237a push 0x1012f5ac */
  push32((uint32_t)(0x1012f5acu));
  /* 1012237f push 0x101360f0 */
  push32((uint32_t)(0x101360f0u));
  /* 10122384 call eax */
  call_ind((uint32_t)(EAX), 0x10122386u);
  /* 10122386 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 1012238b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012238e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10122390 je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 10122396 push 0x1012f5a4 */
  push32((uint32_t)(0x1012f5a4u));
  /* 1012239b push 0x10133940 */
  push32((uint32_t)(0x10133940u));
  /* 101223a0 call eax */
  call_ind((uint32_t)(EAX), 0x101223a2u);
  /* 101223a2 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 101223a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101223aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101223ac je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 101223b2 push 0x1012f59c */
  push32((uint32_t)(0x1012f59cu));
  /* 101223b7 push 0x101361f8 */
  push32((uint32_t)(0x101361f8u));
  /* 101223bc call eax */
  call_ind((uint32_t)(EAX), 0x101223beu);
  /* 101223be mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 101223c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101223c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101223c8 je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 101223ce push 0x1012f594 */
  push32((uint32_t)(0x1012f594u));
  /* 101223d3 push 0x10136200 */
  push32((uint32_t)(0x10136200u));
  /* 101223d8 call eax */
  call_ind((uint32_t)(EAX), 0x101223dau);
  /* 101223da mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 101223df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101223e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101223e4 je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 101223ea push 0x1012f58c */
  push32((uint32_t)(0x1012f58cu));
  /* 101223ef push 0x10133870 */
  push32((uint32_t)(0x10133870u));
  /* 101223f4 call eax */
  call_ind((uint32_t)(EAX), 0x101223f6u);
  /* 101223f6 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 101223fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101223fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10122400 je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 10122406 push 0x1012f584 */
  push32((uint32_t)(0x1012f584u));
  /* 1012240b push 0x10133880 */
  push32((uint32_t)(0x10133880u));
  /* 10122410 call eax */
  call_ind((uint32_t)(EAX), 0x10122412u);
  /* 10122412 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10122417 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012241a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012241c je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 10122422 push 0x1012f57c */
  push32((uint32_t)(0x1012f57cu));
  /* 10122427 push 0x10133768 */
  push32((uint32_t)(0x10133768u));
  /* 1012242c call eax */
  call_ind((uint32_t)(EAX), 0x1012242eu);
  /* 1012242e mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10122433 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10122436 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10122438 je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 1012243e push 0x1012f574 */
  push32((uint32_t)(0x1012f574u));
  /* 10122443 push 0x10133628 */
  push32((uint32_t)(0x10133628u));
  /* 10122448 call eax */
  call_ind((uint32_t)(EAX), 0x1012244au);
  /* 1012244a mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 1012244f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10122452 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10122454 je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 1012245a push 0x1012f56c */
  push32((uint32_t)(0x1012f56cu));
  /* 1012245f push 0x10133708 */
  push32((uint32_t)(0x10133708u));
  /* 10122464 call eax */
  call_ind((uint32_t)(EAX), 0x10122466u);
  /* 10122466 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 1012246b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012246e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10122470 je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 10122476 push 0x1012f564 */
  push32((uint32_t)(0x1012f564u));
  /* 1012247b push 0x10133630 */
  push32((uint32_t)(0x10133630u));
  /* 10122480 call eax */
  call_ind((uint32_t)(EAX), 0x10122482u);
  /* 10122482 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10122487 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012248a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012248c je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 10122492 push 0x1012f550 */
  push32((uint32_t)(0x1012f550u));
  /* 10122497 push 0x101362e8 */
  push32((uint32_t)(0x101362e8u));
  /* 1012249c call eax */
  call_ind((uint32_t)(EAX), 0x1012249eu);
  /* 1012249e mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 101224a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101224a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101224a8 je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 101224aa push 0x1012f53c */
  push32((uint32_t)(0x1012f53cu));
  /* 101224af push 0x101362d0 */
  push32((uint32_t)(0x101362d0u));
  /* 101224b4 call eax */
  call_ind((uint32_t)(EAX), 0x101224b6u);
  /* 101224b6 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 101224bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101224be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101224c0 je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 101224c2 push 0x1012f528 */
  push32((uint32_t)(0x1012f528u));
  /* 101224c7 push 0x101362e0 */
  push32((uint32_t)(0x101362e0u));
  /* 101224cc call eax */
  call_ind((uint32_t)(EAX), 0x101224ceu);
  /* 101224ce mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 101224d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101224d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101224d8 je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 101224da push 0x1012f514 */
  push32((uint32_t)(0x1012f514u));
  /* 101224df push 0x101362c0 */
  push32((uint32_t)(0x101362c0u));
  /* 101224e4 call eax */
  call_ind((uint32_t)(EAX), 0x101224e6u);
  /* 101224e6 mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 101224eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101224ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101224f0 je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 101224f2 push 0x1012f500 */
  push32((uint32_t)(0x1012f500u));
  /* 101224f7 push 0x101362c8 */
  push32((uint32_t)(0x101362c8u));
  /* 101224fc call eax */
  call_ind((uint32_t)(EAX), 0x101224feu);
  /* 101224fe mov eax, dword ptr [0x101363fc] */
  EAX = (r32((uint32_t)(0x101363fc)));
  /* 10122503 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10122506 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10122508 je 0x10122519 */
  if (C.zf) goto L_10122519;
  /* 1012250a push 0x1012f4ec */
  push32((uint32_t)(0x1012f4ecu));
  /* 1012250f push 0x101362b8 */
  push32((uint32_t)(0x101362b8u));
  /* 10122514 call eax */
  call_ind((uint32_t)(EAX), 0x10122516u);
  /* 10122516 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10122519:;
  /* 10122519 push 4 */
  push32((uint32_t)(0x4u));
  /* 1012251b push 4 */
  push32((uint32_t)(0x4u));
  /* 1012251d push 9 */
  push32((uint32_t)(0x9u));
  /* 1012251f call dword ptr [0x10136514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136514))), 0x10122525u);
  /* 10122525 push 6 */
  push32((uint32_t)(0x6u));
  /* 10122527 call dword ptr [0x10136520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136520))), 0x1012252du);
  /* 1012252d push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1012252f push 0x1012f4d8 */
  push32((uint32_t)(0x1012f4d8u));
  /* 10122534 push 0 */
  push32((uint32_t)(0x0u));
  /* 10122536 call dword ptr [0x10136524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136524))), 0x1012253cu);
  /* 1012253c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1012253e push 0x1012f4c4 */
  push32((uint32_t)(0x1012f4c4u));
  /* 10122543 push 1 */
  push32((uint32_t)(0x1u));
  /* 10122545 call dword ptr [0x10136524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136524))), 0x1012254bu);
  /* 1012254b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1012254d push 0x1012f4b0 */
  push32((uint32_t)(0x1012f4b0u));
  /* 10122552 push 2 */
  push32((uint32_t)(0x2u));
  /* 10122554 call dword ptr [0x10136524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136524))), 0x1012255au);
  /* 1012255a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1012255c push 0x1012f49c */
  push32((uint32_t)(0x1012f49cu));
  /* 10122561 push 3 */
  push32((uint32_t)(0x3u));
  /* 10122563 call dword ptr [0x10136524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136524))), 0x10122569u);
  /* 10122569 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012256c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1012256e push 0x1012f488 */
  push32((uint32_t)(0x1012f488u));
  /* 10122573 push 4 */
  push32((uint32_t)(0x4u));
  /* 10122575 call dword ptr [0x10136524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136524))), 0x1012257bu);
  /* 1012257b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1012257d push 0x1012f474 */
  push32((uint32_t)(0x1012f474u));
  /* 10122582 push 5 */
  push32((uint32_t)(0x5u));
  /* 10122584 call dword ptr [0x10136524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136524))), 0x1012258au);
  /* 1012258a push 0x1012fb8c */
  push32((uint32_t)(0x1012fb8cu));
  /* 1012258f call dword ptr [0x10136560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136560))), 0x10122595u);
  /* 10122595 push 0x1012f468 */
  push32((uint32_t)(0x1012f468u));
  /* 1012259a call dword ptr [0x1013655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013655c))), 0x101225a0u);
  /* 101225a0 push 0x1012f454 */
  push32((uint32_t)(0x1012f454u));
  /* 101225a5 call dword ptr [0x10136564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136564))), 0x101225abu);
  /* 101225ab push 0x1012f448 */
  push32((uint32_t)(0x1012f448u));
  /* 101225b0 call dword ptr [0x1013656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013656c))), 0x101225b6u);
  /* 101225b6 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 101225bb call dword ptr [0x10136528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136528))), 0x101225c1u);
  /* 101225c1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101225c3 call dword ptr [0x1013652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013652c))), 0x101225c9u);
  /* 101225c9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101225cb call dword ptr [0x10136530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136530))), 0x101225d1u);
  /* 101225d1 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 101225d6 call dword ptr [0x10136534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136534))), 0x101225dcu);
  /* 101225dc push 5 */
  push32((uint32_t)(0x5u));
  /* 101225de call dword ptr [0x10136538] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136538))), 0x101225e4u);
  /* 101225e4 add esp, 0x9c */
  { uint32_t _a=(ESP),_b=(0x9cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101225ea ret  */
  ESPCHK(0x10121010u, _esp0);
  ESP += 4; return;
}

/* FUN_100025f0 @ 0x101225f0 (20 bytes, 7 insns) */
void f_101225f0(void) {
  FTRACE(0x101225f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101225f0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101225f4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101225f8 push eax */
  push32((uint32_t)(EAX));
  /* 101225f9 push ecx */
  push32((uint32_t)(ECX));
  /* 101225fa call dword ptr [0x10136510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136510))), 0x10122600u);
  /* 10122600 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10122603 ret  */
  ESPCHK(0x101225f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002610 @ 0x10122610 (25 bytes, 9 insns) */
void f_10122610(void) {
  FTRACE(0x10122610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10122610 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10122614 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10122618 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1012261c push eax */
  push32((uint32_t)(EAX));
  /* 1012261d push ecx */
  push32((uint32_t)(ECX));
  /* 1012261e push edx */
  push32((uint32_t)(EDX));
  /* 1012261f call dword ptr [0x1013651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013651c))), 0x10122625u);
  /* 10122625 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10122628 ret  */
  ESPCHK(0x10122610u, _esp0);
  ESP += 4; return;
}

/* FUN_10002630 @ 0x10122630 (6 bytes, 1 insns) */
void f_10122630(void) {
  FTRACE(0x10122630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10122630 jmp dword ptr [0x10136548] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10136548)))); return;
}

/* FUN_10002640 @ 0x10122640 (20 bytes, 7 insns) */
void f_10122640(void) {
  FTRACE(0x10122640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10122640 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10122644 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10122648 push eax */
  push32((uint32_t)(EAX));
  /* 10122649 push ecx */
  push32((uint32_t)(ECX));
  /* 1012264a call dword ptr [0x10136568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136568))), 0x10122650u);
  /* 10122650 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10122653 ret  */
  ESPCHK(0x10122640u, _esp0);
  ESP += 4; return;
}

/* FUN_10002660 @ 0x10122660 (6 bytes, 1 insns) */
void f_10122660(void) {
  FTRACE(0x10122660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10122660 jmp dword ptr [0x10136574] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10136574)))); return;
}

/* FUN_10002670 @ 0x10122670 (6 bytes, 1 insns) */
void f_10122670(void) {
  FTRACE(0x10122670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10122670 jmp dword ptr [0x10136578] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10136578)))); return;
}

/* FUN_10002680 @ 0x10122680 (6 bytes, 1 insns) */
void f_10122680(void) {
  FTRACE(0x10122680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10122680 jmp dword ptr [0x10136580] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10136580)))); return;
}

/* FUN_10002690 @ 0x10122690 (13 bytes, 5 insns) */
void f_10122690(void) {
  FTRACE(0x10122690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10122690 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10122694 push eax */
  push32((uint32_t)(EAX));
  /* 10122695 call dword ptr [0x10136584] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136584))), 0x1012269bu);
  /* 1012269b pop ecx */
  ECX = (pop32());
  /* 1012269c ret  */
  ESPCHK(0x10122690u, _esp0);
  ESP += 4; return;
}

/* FUN_100026a0 @ 0x101226a0 (20 bytes, 7 insns) */
void f_101226a0(void) {
  FTRACE(0x101226a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101226a0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101226a4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101226a8 push eax */
  push32((uint32_t)(EAX));
  /* 101226a9 push ecx */
  push32((uint32_t)(ECX));
  /* 101226aa call dword ptr [0x10136588] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136588))), 0x101226b0u);
  /* 101226b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101226b3 ret  */
  ESPCHK(0x101226a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100026c0 @ 0x101226c0 (6 bytes, 1 insns) */
void f_101226c0(void) {
  FTRACE(0x101226c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101226c0 jmp dword ptr [0x1013658c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1013658c)))); return;
}

/* FUN_100026d0 @ 0x101226d0 (20 bytes, 7 insns) */
void f_101226d0(void) {
  FTRACE(0x101226d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101226d0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101226d4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101226d8 push eax */
  push32((uint32_t)(EAX));
  /* 101226d9 push ecx */
  push32((uint32_t)(ECX));
  /* 101226da call dword ptr [0x10136268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136268))), 0x101226e0u);
  /* 101226e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101226e3 ret  */
  ESPCHK(0x101226d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100026f0 @ 0x101226f0 (15 bytes, 5 insns) */
void f_101226f0(void) {
  FTRACE(0x101226f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101226f0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101226f4 push eax */
  push32((uint32_t)(EAX));
  /* 101226f5 call dword ptr [0x101362b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101362b0))), 0x101226fbu);
  /* 101226fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101226fe ret  */
  ESPCHK(0x101226f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002700 @ 0x10122700 (20 bytes, 7 insns) */
void f_10122700(void) {
  FTRACE(0x10122700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10122700 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10122704 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10122708 push eax */
  push32((uint32_t)(EAX));
  /* 10122709 push ecx */
  push32((uint32_t)(ECX));
  /* 1012270a call dword ptr [0x10133730] */
  call_ind((uint32_t)(r32((uint32_t)(0x10133730))), 0x10122710u);
  /* 10122710 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10122713 ret  */
  ESPCHK(0x10122700u, _esp0);
  ESP += 4; return;
}

/* FUN_10002720 @ 0x10122720 (13 bytes, 5 insns) */
void f_10122720(void) {
  FTRACE(0x10122720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10122720 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10122724 push eax */
  push32((uint32_t)(EAX));
  /* 10122725 call dword ptr [0x101338d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101338d0))), 0x1012272bu);
  /* 1012272b pop ecx */
  ECX = (pop32());
  /* 1012272c ret  */
  ESPCHK(0x10122720u, _esp0);
  ESP += 4; return;
}

/* FUN_10002730 @ 0x10122730 (15 bytes, 5 insns) */
void f_10122730(void) {
  FTRACE(0x10122730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10122730 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10122734 push eax */
  push32((uint32_t)(EAX));
  /* 10122735 call dword ptr [0x10136590] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136590))), 0x1012273bu);
  /* 1012273b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012273e ret  */
  ESPCHK(0x10122730u, _esp0);
  ESP += 4; return;
}

/* FUN_10002740 @ 0x10122740 (25 bytes, 9 insns) */
void f_10122740(void) {
  FTRACE(0x10122740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10122740 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10122744 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10122748 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1012274c push eax */
  push32((uint32_t)(EAX));
  /* 1012274d push ecx */
  push32((uint32_t)(ECX));
  /* 1012274e push edx */
  push32((uint32_t)(EDX));
  /* 1012274f call dword ptr [0x10135fc0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10135fc0))), 0x10122755u);
  /* 10122755 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10122758 ret  */
  ESPCHK(0x10122740u, _esp0);
  ESP += 4; return;
}

/* FUN_10002760 @ 0x10122760 (13 bytes, 5 insns) */
void f_10122760(void) {
  FTRACE(0x10122760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10122760 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10122764 push eax */
  push32((uint32_t)(EAX));
  /* 10122765 call dword ptr [0x10133930] */
  call_ind((uint32_t)(r32((uint32_t)(0x10133930))), 0x1012276bu);
  /* 1012276b pop ecx */
  ECX = (pop32());
  /* 1012276c ret  */
  ESPCHK(0x10122760u, _esp0);
  ESP += 4; return;
}

/* FUN_10002770 @ 0x10122770 (6 bytes, 1 insns) */
void f_10122770(void) {
  FTRACE(0x10122770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10122770 jmp dword ptr [0x10136248] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10136248)))); return;
}

/* FUN_10002780 @ 0x10122780 (6 bytes, 1 insns) */
void f_10122780(void) {
  FTRACE(0x10122780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10122780 jmp dword ptr [0x10133948] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10133948)))); return;
}

/* FUN_10002790 @ 0x10122790 (82 bytes, 28 insns) */
void f_10122790(void) {
  FTRACE(0x10122790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10122790 mov eax, dword ptr [0x101363e0] */
  EAX = (r32((uint32_t)(0x101363e0)));
  /* 10122795 sub esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012279b push esi */
  push32((uint32_t)(ESI));
  /* 1012279c push edi */
  push32((uint32_t)(EDI));
  /* 1012279d mov edi, dword ptr [esp + 0x10c] */
  EDI = (r32((uint32_t)(ESP + 0x10c)));
  /* 101227a4 push edi */
  push32((uint32_t)(EDI));
  /* 101227a5 push eax */
  push32((uint32_t)(EAX));
  /* 101227a6 call dword ptr [0x1012e088] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e088))), 0x101227acu);
  /* 101227ac mov esi, eax */
  ESI = (EAX);
  /* 101227ae test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101227b0 jne 0x101227d7 */
  if (!C.zf) goto L_101227d7;
  /* 101227b2 push edi */
  push32((uint32_t)(EDI));
  /* 101227b3 lea ecx, [esp + 0xc] */
  ECX = ((uint32_t)(ESP + 0xc));
  /* 101227b7 push 0x1012ff08 */
  push32((uint32_t)(0x1012ff08u));
  /* 101227bc push ecx */
  push32((uint32_t)(ECX));
  /* 101227bd call 0x10126e70 */
  push32(0x101227c2u); f_10126e70();
  /* 101227c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101227c5 lea edx, [esp + 8] */
  EDX = ((uint32_t)(ESP + 0x8));
  /* 101227c9 push esi */
  push32((uint32_t)(ESI));
  /* 101227ca push 0x1012fef8 */
  push32((uint32_t)(0x1012fef8u));
  /* 101227cf push edx */
  push32((uint32_t)(EDX));
  /* 101227d0 push esi */
  push32((uint32_t)(ESI));
  /* 101227d1 call dword ptr [0x1012e0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e0dc))), 0x101227d7u);
L_101227d7:;
  /* 101227d7 mov eax, esi */
  EAX = (ESI);
  /* 101227d9 pop edi */
  EDI = (pop32());
  /* 101227da pop esi */
  ESI = (pop32());
  /* 101227db add esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101227e1 ret  */
  ESPCHK(0x10122790u, _esp0);
  ESP += 4; return;
}

/* FUN_100027f0 @ 0x101227f0 (1844 bytes, 376 insns) */
void f_101227f0(void) {
  FTRACE(0x101227f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101227f0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101227f4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101227f5 jne 0x10122f1c */
  if (!C.zf) goto L_10122f1c;
  /* 101227fb push 0x1013065c */
  push32((uint32_t)(0x1013065cu));
  /* 10122800 call dword ptr [0x1012e004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e004))), 0x10122806u);
  /* 10122806 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10122808 mov dword ptr [0x101363e0], eax */
  w32((uint32_t)(0x101363e0), (EAX));
  /* 1012280d jne 0x10122829 */
  if (!C.zf) goto L_10122829;
  /* 1012280f push eax */
  push32((uint32_t)(EAX));
  /* 10122810 push 0x10130654 */
  push32((uint32_t)(0x10130654u));
  /* 10122815 push 0x1013063c */
  push32((uint32_t)(0x1013063cu));
  /* 1012281a push eax */
  push32((uint32_t)(EAX));
  /* 1012281b call dword ptr [0x1012e0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e0dc))), 0x10122821u);
  /* 10122821 mov eax, 1 */
  EAX = (0x1u);
  /* 10122826 ret 0xc */
  ESPCHK(0x101227f0u, _esp0);
  ESP += 16; return;
L_10122829:;
  /* 10122829 push 0x1013062c */
  push32((uint32_t)(0x1013062cu));
  /* 1012282e call 0x10122790 */
  push32(0x10122833u); f_10122790();
  /* 10122833 push 0x1013061c */
  push32((uint32_t)(0x1013061cu));
  /* 10122838 mov dword ptr [0x101363e4], eax */
  w32((uint32_t)(0x101363e4), (EAX));
  /* 1012283d call 0x10122790 */
  push32(0x10122842u); f_10122790();
  /* 10122842 push 0x1013060c */
  push32((uint32_t)(0x1013060cu));
  /* 10122847 mov dword ptr [0x101363e8], eax */
  w32((uint32_t)(0x101363e8), (EAX));
  /* 1012284c call 0x10122790 */
  push32(0x10122851u); f_10122790();
  /* 10122851 push 0x10130600 */
  push32((uint32_t)(0x10130600u));
  /* 10122856 mov dword ptr [0x101363ec], eax */
  w32((uint32_t)(0x101363ec), (EAX));
  /* 1012285b call 0x10122790 */
  push32(0x10122860u); f_10122790();
  /* 10122860 push 0x101305f0 */
  push32((uint32_t)(0x101305f0u));
  /* 10122865 mov dword ptr [0x101363f0], eax */
  w32((uint32_t)(0x101363f0), (EAX));
  /* 1012286a call 0x10122790 */
  push32(0x1012286fu); f_10122790();
  /* 1012286f push 0x101305dc */
  push32((uint32_t)(0x101305dcu));
  /* 10122874 mov dword ptr [0x101363f4], eax */
  w32((uint32_t)(0x101363f4), (EAX));
  /* 10122879 call 0x10122790 */
  push32(0x1012287eu); f_10122790();
  /* 1012287e push 0x101305cc */
  push32((uint32_t)(0x101305ccu));
  /* 10122883 mov dword ptr [0x101363f8], eax */
  w32((uint32_t)(0x101363f8), (EAX));
  /* 10122888 call 0x10122790 */
  push32(0x1012288du); f_10122790();
  /* 1012288d push 0x101305bc */
  push32((uint32_t)(0x101305bcu));
  /* 10122892 mov dword ptr [0x101363fc], eax */
  w32((uint32_t)(0x101363fc), (EAX));
  /* 10122897 call 0x10122790 */
  push32(0x1012289cu); f_10122790();
  /* 1012289c push 0x101305a8 */
  push32((uint32_t)(0x101305a8u));
  /* 101228a1 mov dword ptr [0x10136400], eax */
  w32((uint32_t)(0x10136400), (EAX));
  /* 101228a6 call 0x10122790 */
  push32(0x101228abu); f_10122790();
  /* 101228ab push 0x10130594 */
  push32((uint32_t)(0x10130594u));
  /* 101228b0 mov dword ptr [0x10136404], eax */
  w32((uint32_t)(0x10136404), (EAX));
  /* 101228b5 call 0x10122790 */
  push32(0x101228bau); f_10122790();
  /* 101228ba push 0x10130584 */
  push32((uint32_t)(0x10130584u));
  /* 101228bf mov dword ptr [0x10136408], eax */
  w32((uint32_t)(0x10136408), (EAX));
  /* 101228c4 call 0x10122790 */
  push32(0x101228c9u); f_10122790();
  /* 101228c9 push 0x10130574 */
  push32((uint32_t)(0x10130574u));
  /* 101228ce mov dword ptr [0x1013640c], eax */
  w32((uint32_t)(0x1013640c), (EAX));
  /* 101228d3 call 0x10122790 */
  push32(0x101228d8u); f_10122790();
  /* 101228d8 push 0x10130564 */
  push32((uint32_t)(0x10130564u));
  /* 101228dd mov dword ptr [0x10136410], eax */
  w32((uint32_t)(0x10136410), (EAX));
  /* 101228e2 call 0x10122790 */
  push32(0x101228e7u); f_10122790();
  /* 101228e7 push 0x10130554 */
  push32((uint32_t)(0x10130554u));
  /* 101228ec mov dword ptr [0x10136414], eax */
  w32((uint32_t)(0x10136414), (EAX));
  /* 101228f1 call 0x10122790 */
  push32(0x101228f6u); f_10122790();
  /* 101228f6 push 0x10130544 */
  push32((uint32_t)(0x10130544u));
  /* 101228fb mov dword ptr [0x10136418], eax */
  w32((uint32_t)(0x10136418), (EAX));
  /* 10122900 call 0x10122790 */
  push32(0x10122905u); f_10122790();
  /* 10122905 push 0x10130534 */
  push32((uint32_t)(0x10130534u));
  /* 1012290a mov dword ptr [0x1013641c], eax */
  w32((uint32_t)(0x1013641c), (EAX));
  /* 1012290f call 0x10122790 */
  push32(0x10122914u); f_10122790();
  /* 10122914 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10122917 mov dword ptr [0x10136420], eax */
  w32((uint32_t)(0x10136420), (EAX));
  /* 1012291c push 0x10130524 */
  push32((uint32_t)(0x10130524u));
  /* 10122921 call 0x10122790 */
  push32(0x10122926u); f_10122790();
  /* 10122926 push 0x10130514 */
  push32((uint32_t)(0x10130514u));
  /* 1012292b mov dword ptr [0x10136424], eax */
  w32((uint32_t)(0x10136424), (EAX));
  /* 10122930 call 0x10122790 */
  push32(0x10122935u); f_10122790();
  /* 10122935 push 0x10130500 */
  push32((uint32_t)(0x10130500u));
  /* 1012293a mov dword ptr [0x10136428], eax */
  w32((uint32_t)(0x10136428), (EAX));
  /* 1012293f call 0x10122790 */
  push32(0x10122944u); f_10122790();
  /* 10122944 push 0x101304f8 */
  push32((uint32_t)(0x101304f8u));
  /* 10122949 mov dword ptr [0x1013642c], eax */
  w32((uint32_t)(0x1013642c), (EAX));
  /* 1012294e call 0x10122790 */
  push32(0x10122953u); f_10122790();
  /* 10122953 push 0x101304e8 */
  push32((uint32_t)(0x101304e8u));
  /* 10122958 mov dword ptr [0x10136430], eax */
  w32((uint32_t)(0x10136430), (EAX));
  /* 1012295d call 0x10122790 */
  push32(0x10122962u); f_10122790();
  /* 10122962 push 0x101304d8 */
  push32((uint32_t)(0x101304d8u));
  /* 10122967 mov dword ptr [0x10136434], eax */
  w32((uint32_t)(0x10136434), (EAX));
  /* 1012296c call 0x10122790 */
  push32(0x10122971u); f_10122790();
  /* 10122971 push 0x101304cc */
  push32((uint32_t)(0x101304ccu));
  /* 10122976 mov dword ptr [0x10136438], eax */
  w32((uint32_t)(0x10136438), (EAX));
  /* 1012297b call 0x10122790 */
  push32(0x10122980u); f_10122790();
  /* 10122980 push 0x101304bc */
  push32((uint32_t)(0x101304bcu));
  /* 10122985 mov dword ptr [0x1013643c], eax */
  w32((uint32_t)(0x1013643c), (EAX));
  /* 1012298a call 0x10122790 */
  push32(0x1012298fu); f_10122790();
  /* 1012298f push 0x101304b4 */
  push32((uint32_t)(0x101304b4u));
  /* 10122994 mov dword ptr [0x10136440], eax */
  w32((uint32_t)(0x10136440), (EAX));
  /* 10122999 call 0x10122790 */
  push32(0x1012299eu); f_10122790();
  /* 1012299e push 0x101304a4 */
  push32((uint32_t)(0x101304a4u));
  /* 101229a3 mov dword ptr [0x10136458], eax */
  w32((uint32_t)(0x10136458), (EAX));
  /* 101229a8 call 0x10122790 */
  push32(0x101229adu); f_10122790();
  /* 101229ad push 0x10130494 */
  push32((uint32_t)(0x10130494u));
  /* 101229b2 mov dword ptr [0x1013645c], eax */
  w32((uint32_t)(0x1013645c), (EAX));
  /* 101229b7 call 0x10122790 */
  push32(0x101229bcu); f_10122790();
  /* 101229bc push 0x10130488 */
  push32((uint32_t)(0x10130488u));
  /* 101229c1 mov dword ptr [0x10136460], eax */
  w32((uint32_t)(0x10136460), (EAX));
  /* 101229c6 call 0x10122790 */
  push32(0x101229cbu); f_10122790();
  /* 101229cb push 0x10130478 */
  push32((uint32_t)(0x10130478u));
  /* 101229d0 mov dword ptr [0x10136464], eax */
  w32((uint32_t)(0x10136464), (EAX));
  /* 101229d5 call 0x10122790 */
  push32(0x101229dau); f_10122790();
  /* 101229da push 0x1013046c */
  push32((uint32_t)(0x1013046cu));
  /* 101229df mov dword ptr [0x10136468], eax */
  w32((uint32_t)(0x10136468), (EAX));
  /* 101229e4 call 0x10122790 */
  push32(0x101229e9u); f_10122790();
  /* 101229e9 push 0x1013045c */
  push32((uint32_t)(0x1013045cu));
  /* 101229ee mov dword ptr [0x10136484], eax */
  w32((uint32_t)(0x10136484), (EAX));
  /* 101229f3 call 0x10122790 */
  push32(0x101229f8u); f_10122790();
  /* 101229f8 push 0x10130454 */
  push32((uint32_t)(0x10130454u));
  /* 101229fd mov dword ptr [0x1013646c], eax */
  w32((uint32_t)(0x1013646c), (EAX));
  /* 10122a02 call 0x10122790 */
  push32(0x10122a07u); f_10122790();
  /* 10122a07 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10122a0a mov dword ptr [0x10136470], eax */
  w32((uint32_t)(0x10136470), (EAX));
  /* 10122a0f push 0x10130444 */
  push32((uint32_t)(0x10130444u));
  /* 10122a14 call 0x10122790 */
  push32(0x10122a19u); f_10122790();
  /* 10122a19 push 0x10130434 */
  push32((uint32_t)(0x10130434u));
  /* 10122a1e mov dword ptr [0x10136474], eax */
  w32((uint32_t)(0x10136474), (EAX));
  /* 10122a23 call 0x10122790 */
  push32(0x10122a28u); f_10122790();
  /* 10122a28 push 0x10130424 */
  push32((uint32_t)(0x10130424u));
  /* 10122a2d mov dword ptr [0x10136478], eax */
  w32((uint32_t)(0x10136478), (EAX));
  /* 10122a32 call 0x10122790 */
  push32(0x10122a37u); f_10122790();
  /* 10122a37 push 0x10130418 */
  push32((uint32_t)(0x10130418u));
  /* 10122a3c mov dword ptr [0x1013647c], eax */
  w32((uint32_t)(0x1013647c), (EAX));
  /* 10122a41 call 0x10122790 */
  push32(0x10122a46u); f_10122790();
  /* 10122a46 push 0x10130410 */
  push32((uint32_t)(0x10130410u));
  /* 10122a4b mov dword ptr [0x10136480], eax */
  w32((uint32_t)(0x10136480), (EAX));
  /* 10122a50 call 0x10122790 */
  push32(0x10122a55u); f_10122790();
  /* 10122a55 push 0x10130400 */
  push32((uint32_t)(0x10130400u));
  /* 10122a5a mov dword ptr [0x10136488], eax */
  w32((uint32_t)(0x10136488), (EAX));
  /* 10122a5f call 0x10122790 */
  push32(0x10122a64u); f_10122790();
  /* 10122a64 push 0x101303f0 */
  push32((uint32_t)(0x101303f0u));
  /* 10122a69 mov dword ptr [0x1013648c], eax */
  w32((uint32_t)(0x1013648c), (EAX));
  /* 10122a6e call 0x10122790 */
  push32(0x10122a73u); f_10122790();
  /* 10122a73 push 0x101303e0 */
  push32((uint32_t)(0x101303e0u));
  /* 10122a78 mov dword ptr [0x10136490], eax */
  w32((uint32_t)(0x10136490), (EAX));
  /* 10122a7d call 0x10122790 */
  push32(0x10122a82u); f_10122790();
  /* 10122a82 push 0x101303d0 */
  push32((uint32_t)(0x101303d0u));
  /* 10122a87 mov dword ptr [0x10136494], eax */
  w32((uint32_t)(0x10136494), (EAX));
  /* 10122a8c call 0x10122790 */
  push32(0x10122a91u); f_10122790();
  /* 10122a91 push 0x101303c4 */
  push32((uint32_t)(0x101303c4u));
  /* 10122a96 mov dword ptr [0x10136498], eax */
  w32((uint32_t)(0x10136498), (EAX));
  /* 10122a9b call 0x10122790 */
  push32(0x10122aa0u); f_10122790();
  /* 10122aa0 push 0x101303b8 */
  push32((uint32_t)(0x101303b8u));
  /* 10122aa5 mov dword ptr [0x1013649c], eax */
  w32((uint32_t)(0x1013649c), (EAX));
  /* 10122aaa call 0x10122790 */
  push32(0x10122aafu); f_10122790();
  /* 10122aaf push 0x101303a8 */
  push32((uint32_t)(0x101303a8u));
  /* 10122ab4 mov dword ptr [0x101364a0], eax */
  w32((uint32_t)(0x101364a0), (EAX));
  /* 10122ab9 call 0x10122790 */
  push32(0x10122abeu); f_10122790();
  /* 10122abe push 0x1013039c */
  push32((uint32_t)(0x1013039cu));
  /* 10122ac3 mov dword ptr [0x101364a4], eax */
  w32((uint32_t)(0x101364a4), (EAX));
  /* 10122ac8 call 0x10122790 */
  push32(0x10122acdu); f_10122790();
  /* 10122acd push 0x10130390 */
  push32((uint32_t)(0x10130390u));
  /* 10122ad2 mov dword ptr [0x101364a8], eax */
  w32((uint32_t)(0x101364a8), (EAX));
  /* 10122ad7 call 0x10122790 */
  push32(0x10122adcu); f_10122790();
  /* 10122adc push 0x10130384 */
  push32((uint32_t)(0x10130384u));
  /* 10122ae1 mov dword ptr [0x101364ac], eax */
  w32((uint32_t)(0x101364ac), (EAX));
  /* 10122ae6 call 0x10122790 */
  push32(0x10122aebu); f_10122790();
  /* 10122aeb push 0x10130378 */
  push32((uint32_t)(0x10130378u));
  /* 10122af0 mov dword ptr [0x101361e0], eax */
  w32((uint32_t)(0x101361e0), (EAX));
  /* 10122af5 call 0x10122790 */
  push32(0x10122afau); f_10122790();
  /* 10122afa add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10122afd mov dword ptr [0x101364b0], eax */
  w32((uint32_t)(0x101364b0), (EAX));
  /* 10122b02 push 0x1013036c */
  push32((uint32_t)(0x1013036cu));
  /* 10122b07 call 0x10122790 */
  push32(0x10122b0cu); f_10122790();
  /* 10122b0c push 0x10130360 */
  push32((uint32_t)(0x10130360u));
  /* 10122b11 mov dword ptr [0x101364b4], eax */
  w32((uint32_t)(0x101364b4), (EAX));
  /* 10122b16 call 0x10122790 */
  push32(0x10122b1bu); f_10122790();
  /* 10122b1b push 0x10130350 */
  push32((uint32_t)(0x10130350u));
  /* 10122b20 mov dword ptr [0x101364b8], eax */
  w32((uint32_t)(0x101364b8), (EAX));
  /* 10122b25 call 0x10122790 */
  push32(0x10122b2au); f_10122790();
  /* 10122b2a push 0x10130344 */
  push32((uint32_t)(0x10130344u));
  /* 10122b2f mov dword ptr [0x101364bc], eax */
  w32((uint32_t)(0x101364bc), (EAX));
  /* 10122b34 call 0x10122790 */
  push32(0x10122b39u); f_10122790();
  /* 10122b39 push 0x10130338 */
  push32((uint32_t)(0x10130338u));
  /* 10122b3e mov dword ptr [0x101364c0], eax */
  w32((uint32_t)(0x101364c0), (EAX));
  /* 10122b43 call 0x10122790 */
  push32(0x10122b48u); f_10122790();
  /* 10122b48 mov dword ptr [0x101364c4], eax */
  w32((uint32_t)(0x101364c4), (EAX));
  /* 10122b4d push 0x10130328 */
  push32((uint32_t)(0x10130328u));
  /* 10122b52 call 0x10122790 */
  push32(0x10122b57u); f_10122790();
  /* 10122b57 push 0x10130318 */
  push32((uint32_t)(0x10130318u));
  /* 10122b5c mov dword ptr [0x101364c8], eax */
  w32((uint32_t)(0x101364c8), (EAX));
  /* 10122b61 call 0x10122790 */
  push32(0x10122b66u); f_10122790();
  /* 10122b66 push 0x1013030c */
  push32((uint32_t)(0x1013030cu));
  /* 10122b6b mov dword ptr [0x101364cc], eax */
  w32((uint32_t)(0x101364cc), (EAX));
  /* 10122b70 call 0x10122790 */
  push32(0x10122b75u); f_10122790();
  /* 10122b75 push 0x10130304 */
  push32((uint32_t)(0x10130304u));
  /* 10122b7a mov dword ptr [0x101364d0], eax */
  w32((uint32_t)(0x101364d0), (EAX));
  /* 10122b7f call 0x10122790 */
  push32(0x10122b84u); f_10122790();
  /* 10122b84 push 0x101302f4 */
  push32((uint32_t)(0x101302f4u));
  /* 10122b89 mov dword ptr [0x101364d4], eax */
  w32((uint32_t)(0x101364d4), (EAX));
  /* 10122b8e call 0x10122790 */
  push32(0x10122b93u); f_10122790();
  /* 10122b93 push 0x101302ec */
  push32((uint32_t)(0x101302ecu));
  /* 10122b98 mov dword ptr [0x101364d8], eax */
  w32((uint32_t)(0x101364d8), (EAX));
  /* 10122b9d call 0x10122790 */
  push32(0x10122ba2u); f_10122790();
  /* 10122ba2 push 0x101302e0 */
  push32((uint32_t)(0x101302e0u));
  /* 10122ba7 mov dword ptr [0x101364dc], eax */
  w32((uint32_t)(0x101364dc), (EAX));
  /* 10122bac call 0x10122790 */
  push32(0x10122bb1u); f_10122790();
  /* 10122bb1 push 0x101302d8 */
  push32((uint32_t)(0x101302d8u));
  /* 10122bb6 mov dword ptr [0x101364e0], eax */
  w32((uint32_t)(0x101364e0), (EAX));
  /* 10122bbb call 0x10122790 */
  push32(0x10122bc0u); f_10122790();
  /* 10122bc0 push 0x101302c4 */
  push32((uint32_t)(0x101302c4u));
  /* 10122bc5 mov dword ptr [0x101364e4], eax */
  w32((uint32_t)(0x101364e4), (EAX));
  /* 10122bca call 0x10122790 */
  push32(0x10122bcfu); f_10122790();
  /* 10122bcf push 0x101302b8 */
  push32((uint32_t)(0x101302b8u));
  /* 10122bd4 mov dword ptr [0x10133638], eax */
  w32((uint32_t)(0x10133638), (EAX));
  /* 10122bd9 call 0x10122790 */
  push32(0x10122bdeu); f_10122790();
  /* 10122bde push 0x101302ac */
  push32((uint32_t)(0x101302acu));
  /* 10122be3 mov dword ptr [0x101364f0], eax */
  w32((uint32_t)(0x101364f0), (EAX));
  /* 10122be8 call 0x10122790 */
  push32(0x10122bedu); f_10122790();
  /* 10122bed add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10122bf0 mov dword ptr [0x101364ec], eax */
  w32((uint32_t)(0x101364ec), (EAX));
  /* 10122bf5 push 0x10130298 */
  push32((uint32_t)(0x10130298u));
  /* 10122bfa call 0x10122790 */
  push32(0x10122bffu); f_10122790();
  /* 10122bff push 0x10130288 */
  push32((uint32_t)(0x10130288u));
  /* 10122c04 mov dword ptr [0x101364f4], eax */
  w32((uint32_t)(0x101364f4), (EAX));
  /* 10122c09 call 0x10122790 */
  push32(0x10122c0eu); f_10122790();
  /* 10122c0e push 0x10130278 */
  push32((uint32_t)(0x10130278u));
  /* 10122c13 mov dword ptr [0x101364f8], eax */
  w32((uint32_t)(0x101364f8), (EAX));
  /* 10122c18 call 0x10122790 */
  push32(0x10122c1du); f_10122790();
  /* 10122c1d push 0x10130268 */
  push32((uint32_t)(0x10130268u));
  /* 10122c22 mov dword ptr [0x101364fc], eax */
  w32((uint32_t)(0x101364fc), (EAX));
  /* 10122c27 call 0x10122790 */
  push32(0x10122c2cu); f_10122790();
  /* 10122c2c push 0x1013025c */
  push32((uint32_t)(0x1013025cu));
  /* 10122c31 mov dword ptr [0x10136448], eax */
  w32((uint32_t)(0x10136448), (EAX));
  /* 10122c36 call 0x10122790 */
  push32(0x10122c3bu); f_10122790();
  /* 10122c3b push 0x1013024c */
  push32((uint32_t)(0x1013024cu));
  /* 10122c40 mov dword ptr [0x10136444], eax */
  w32((uint32_t)(0x10136444), (EAX));
  /* 10122c45 call 0x10122790 */
  push32(0x10122c4au); f_10122790();
  /* 10122c4a push 0x10130238 */
  push32((uint32_t)(0x10130238u));
  /* 10122c4f mov dword ptr [0x1013644c], eax */
  w32((uint32_t)(0x1013644c), (EAX));
  /* 10122c54 call 0x10122790 */
  push32(0x10122c59u); f_10122790();
  /* 10122c59 push 0x10130220 */
  push32((uint32_t)(0x10130220u));
  /* 10122c5e mov dword ptr [0x10136450], eax */
  w32((uint32_t)(0x10136450), (EAX));
  /* 10122c63 call 0x10122790 */
  push32(0x10122c68u); f_10122790();
  /* 10122c68 push 0x10130210 */
  push32((uint32_t)(0x10130210u));
  /* 10122c6d mov dword ptr [0x10136454], eax */
  w32((uint32_t)(0x10136454), (EAX));
  /* 10122c72 call 0x10122790 */
  push32(0x10122c77u); f_10122790();
  /* 10122c77 push 0x101301f8 */
  push32((uint32_t)(0x101301f8u));
  /* 10122c7c mov dword ptr [0x10136518], eax */
  w32((uint32_t)(0x10136518), (EAX));
  /* 10122c81 call 0x10122790 */
  push32(0x10122c86u); f_10122790();
  /* 10122c86 push 0x101301e8 */
  push32((uint32_t)(0x101301e8u));
  /* 10122c8b mov dword ptr [0x10136548], eax */
  w32((uint32_t)(0x10136548), (EAX));
  /* 10122c90 call 0x10122790 */
  push32(0x10122c95u); f_10122790();
  /* 10122c95 push 0x101301e0 */
  push32((uint32_t)(0x101301e0u));
  /* 10122c9a mov dword ptr [0x10136510], eax */
  w32((uint32_t)(0x10136510), (EAX));
  /* 10122c9f call 0x10122790 */
  push32(0x10122ca4u); f_10122790();
  /* 10122ca4 push 0x101301d0 */
  push32((uint32_t)(0x101301d0u));
  /* 10122ca9 mov dword ptr [0x1013651c], eax */
  w32((uint32_t)(0x1013651c), (EAX));
  /* 10122cae call 0x10122790 */
  push32(0x10122cb3u); f_10122790();
  /* 10122cb3 push 0x101301c4 */
  push32((uint32_t)(0x101301c4u));
  /* 10122cb8 mov dword ptr [0x10136568], eax */
  w32((uint32_t)(0x10136568), (EAX));
  /* 10122cbd call 0x10122790 */
  push32(0x10122cc2u); f_10122790();
  /* 10122cc2 push 0x101301bc */
  push32((uint32_t)(0x101301bcu));
  /* 10122cc7 mov dword ptr [0x10136500], eax */
  w32((uint32_t)(0x10136500), (EAX));
  /* 10122ccc call 0x10122790 */
  push32(0x10122cd1u); f_10122790();
  /* 10122cd1 push 0x101301b0 */
  push32((uint32_t)(0x101301b0u));
  /* 10122cd6 mov dword ptr [0x10136504], eax */
  w32((uint32_t)(0x10136504), (EAX));
  /* 10122cdb call 0x10122790 */
  push32(0x10122ce0u); f_10122790();
  /* 10122ce0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10122ce3 mov dword ptr [0x10136508], eax */
  w32((uint32_t)(0x10136508), (EAX));
  /* 10122ce8 push 0x101301a0 */
  push32((uint32_t)(0x101301a0u));
  /* 10122ced call 0x10122790 */
  push32(0x10122cf2u); f_10122790();
  /* 10122cf2 push 0x1013018c */
  push32((uint32_t)(0x1013018cu));
  /* 10122cf7 mov dword ptr [0x1013650c], eax */
  w32((uint32_t)(0x1013650c), (EAX));
  /* 10122cfc call 0x10122790 */
  push32(0x10122d01u); f_10122790();
  /* 10122d01 push 0x10130170 */
  push32((uint32_t)(0x10130170u));
  /* 10122d06 mov dword ptr [0x10136514], eax */
  w32((uint32_t)(0x10136514), (EAX));
  /* 10122d0b call 0x10122790 */
  push32(0x10122d10u); f_10122790();
  /* 10122d10 push 0x1013015c */
  push32((uint32_t)(0x1013015cu));
  /* 10122d15 mov dword ptr [0x10136520], eax */
  w32((uint32_t)(0x10136520), (EAX));
  /* 10122d1a call 0x10122790 */
  push32(0x10122d1fu); f_10122790();
  /* 10122d1f push 0x10130150 */
  push32((uint32_t)(0x10130150u));
  /* 10122d24 mov dword ptr [0x10136524], eax */
  w32((uint32_t)(0x10136524), (EAX));
  /* 10122d29 call 0x10122790 */
  push32(0x10122d2eu); f_10122790();
  /* 10122d2e push 0x10130140 */
  push32((uint32_t)(0x10130140u));
  /* 10122d33 mov dword ptr [0x1013655c], eax */
  w32((uint32_t)(0x1013655c), (EAX));
  /* 10122d38 call 0x10122790 */
  push32(0x10122d3du); f_10122790();
  /* 10122d3d push 0x10130134 */
  push32((uint32_t)(0x10130134u));
  /* 10122d42 mov dword ptr [0x10136560], eax */
  w32((uint32_t)(0x10136560), (EAX));
  /* 10122d47 call 0x10122790 */
  push32(0x10122d4cu); f_10122790();
  /* 10122d4c push 0x10130128 */
  push32((uint32_t)(0x10130128u));
  /* 10122d51 mov dword ptr [0x10136564], eax */
  w32((uint32_t)(0x10136564), (EAX));
  /* 10122d56 call 0x10122790 */
  push32(0x10122d5bu); f_10122790();
  /* 10122d5b push 0x10130110 */
  push32((uint32_t)(0x10130110u));
  /* 10122d60 mov dword ptr [0x1013656c], eax */
  w32((uint32_t)(0x1013656c), (EAX));
  /* 10122d65 call 0x10122790 */
  push32(0x10122d6au); f_10122790();
  /* 10122d6a push 0x101300f4 */
  push32((uint32_t)(0x101300f4u));
  /* 10122d6f mov dword ptr [0x10136528], eax */
  w32((uint32_t)(0x10136528), (EAX));
  /* 10122d74 call 0x10122790 */
  push32(0x10122d79u); f_10122790();
  /* 10122d79 push 0x101300d8 */
  push32((uint32_t)(0x101300d8u));
  /* 10122d7e mov dword ptr [0x1013652c], eax */
  w32((uint32_t)(0x1013652c), (EAX));
  /* 10122d83 call 0x10122790 */
  push32(0x10122d88u); f_10122790();
  /* 10122d88 push 0x101300c0 */
  push32((uint32_t)(0x101300c0u));
  /* 10122d8d mov dword ptr [0x10136530], eax */
  w32((uint32_t)(0x10136530), (EAX));
  /* 10122d92 call 0x10122790 */
  push32(0x10122d97u); f_10122790();
  /* 10122d97 push 0x101300a8 */
  push32((uint32_t)(0x101300a8u));
  /* 10122d9c mov dword ptr [0x10136534], eax */
  w32((uint32_t)(0x10136534), (EAX));
  /* 10122da1 call 0x10122790 */
  push32(0x10122da6u); f_10122790();
  /* 10122da6 push 0x1013009c */
  push32((uint32_t)(0x1013009cu));
  /* 10122dab mov dword ptr [0x10136538], eax */
  w32((uint32_t)(0x10136538), (EAX));
  /* 10122db0 call 0x10122790 */
  push32(0x10122db5u); f_10122790();
  /* 10122db5 push 0x10130090 */
  push32((uint32_t)(0x10130090u));
  /* 10122dba mov dword ptr [0x1013653c], eax */
  w32((uint32_t)(0x1013653c), (EAX));
  /* 10122dbf call 0x10122790 */
  push32(0x10122dc4u); f_10122790();
  /* 10122dc4 push 0x10130080 */
  push32((uint32_t)(0x10130080u));
  /* 10122dc9 mov dword ptr [0x10136540], eax */
  w32((uint32_t)(0x10136540), (EAX));
  /* 10122dce call 0x10122790 */
  push32(0x10122dd3u); f_10122790();
  /* 10122dd3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10122dd6 mov dword ptr [0x10136544], eax */
  w32((uint32_t)(0x10136544), (EAX));
  /* 10122ddb push 0x10130074 */
  push32((uint32_t)(0x10130074u));
  /* 10122de0 call 0x10122790 */
  push32(0x10122de5u); f_10122790();
  /* 10122de5 push 0x10130068 */
  push32((uint32_t)(0x10130068u));
  /* 10122dea mov dword ptr [0x1013654c], eax */
  w32((uint32_t)(0x1013654c), (EAX));
  /* 10122def call 0x10122790 */
  push32(0x10122df4u); f_10122790();
  /* 10122df4 push 0x1013005c */
  push32((uint32_t)(0x1013005cu));
  /* 10122df9 mov dword ptr [0x10136550], eax */
  w32((uint32_t)(0x10136550), (EAX));
  /* 10122dfe call 0x10122790 */
  push32(0x10122e03u); f_10122790();
  /* 10122e03 push 0x1013004c */
  push32((uint32_t)(0x1013004cu));
  /* 10122e08 mov dword ptr [0x10136570], eax */
  w32((uint32_t)(0x10136570), (EAX));
  /* 10122e0d call 0x10122790 */
  push32(0x10122e12u); f_10122790();
  /* 10122e12 push 0x10130040 */
  push32((uint32_t)(0x10130040u));
  /* 10122e17 mov dword ptr [0x10136574], eax */
  w32((uint32_t)(0x10136574), (EAX));
  /* 10122e1c call 0x10122790 */
  push32(0x10122e21u); f_10122790();
  /* 10122e21 push 0x10130034 */
  push32((uint32_t)(0x10130034u));
  /* 10122e26 mov dword ptr [0x10136578], eax */
  w32((uint32_t)(0x10136578), (EAX));
  /* 10122e2b call 0x10122790 */
  push32(0x10122e30u); f_10122790();
  /* 10122e30 push 0x10130028 */
  push32((uint32_t)(0x10130028u));
  /* 10122e35 mov dword ptr [0x1013657c], eax */
  w32((uint32_t)(0x1013657c), (EAX));
  /* 10122e3a call 0x10122790 */
  push32(0x10122e3fu); f_10122790();
  /* 10122e3f push 0x10130018 */
  push32((uint32_t)(0x10130018u));
  /* 10122e44 mov dword ptr [0x10136580], eax */
  w32((uint32_t)(0x10136580), (EAX));
  /* 10122e49 call 0x10122790 */
  push32(0x10122e4eu); f_10122790();
  /* 10122e4e push 0x10130008 */
  push32((uint32_t)(0x10130008u));
  /* 10122e53 mov dword ptr [0x10136584], eax */
  w32((uint32_t)(0x10136584), (EAX));
  /* 10122e58 call 0x10122790 */
  push32(0x10122e5du); f_10122790();
  /* 10122e5d push 0x1012fff4 */
  push32((uint32_t)(0x1012fff4u));
  /* 10122e62 mov dword ptr [0x1013658c], eax */
  w32((uint32_t)(0x1013658c), (EAX));
  /* 10122e67 call 0x10122790 */
  push32(0x10122e6cu); f_10122790();
  /* 10122e6c mov dword ptr [0x10136588], eax */
  w32((uint32_t)(0x10136588), (EAX));
  /* 10122e71 push 0x1012ffdc */
  push32((uint32_t)(0x1012ffdcu));
  /* 10122e76 call 0x10122790 */
  push32(0x10122e7bu); f_10122790();
  /* 10122e7b push 0x1012ffc4 */
  push32((uint32_t)(0x1012ffc4u));
  /* 10122e80 mov dword ptr [0x101338d0], eax */
  w32((uint32_t)(0x101338d0), (EAX));
  /* 10122e85 call 0x10122790 */
  push32(0x10122e8au); f_10122790();
  /* 10122e8a push 0x1012ffb4 */
  push32((uint32_t)(0x1012ffb4u));
  /* 10122e8f mov dword ptr [0x10133730], eax */
  w32((uint32_t)(0x10133730), (EAX));
  /* 10122e94 call 0x10122790 */
  push32(0x10122e99u); f_10122790();
  /* 10122e99 push 0x1012ffa4 */
  push32((uint32_t)(0x1012ffa4u));
  /* 10122e9e mov dword ptr [0x10136590], eax */
  w32((uint32_t)(0x10136590), (EAX));
  /* 10122ea3 call 0x10122790 */
  push32(0x10122ea8u); f_10122790();
  /* 10122ea8 push 0x1012ff94 */
  push32((uint32_t)(0x1012ff94u));
  /* 10122ead mov dword ptr [0x10136554], eax */
  w32((uint32_t)(0x10136554), (EAX));
  /* 10122eb2 call 0x10122790 */
  push32(0x10122eb7u); f_10122790();
  /* 10122eb7 push 0x1012ff84 */
  push32((uint32_t)(0x1012ff84u));
  /* 10122ebc mov dword ptr [0x10136558], eax */
  w32((uint32_t)(0x10136558), (EAX));
  /* 10122ec1 call 0x10122790 */
  push32(0x10122ec6u); f_10122790();
  /* 10122ec6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10122ec9 mov dword ptr [0x101362b0], eax */
  w32((uint32_t)(0x101362b0), (EAX));
  /* 10122ece push 0x1012ff74 */
  push32((uint32_t)(0x1012ff74u));
  /* 10122ed3 call 0x10122790 */
  push32(0x10122ed8u); f_10122790();
  /* 10122ed8 push 0x1012ff64 */
  push32((uint32_t)(0x1012ff64u));
  /* 10122edd mov dword ptr [0x10136268], eax */
  w32((uint32_t)(0x10136268), (EAX));
  /* 10122ee2 call 0x10122790 */
  push32(0x10122ee7u); f_10122790();
  /* 10122ee7 push 0x1012ff54 */
  push32((uint32_t)(0x1012ff54u));
  /* 10122eec mov dword ptr [0x10135fc0], eax */
  w32((uint32_t)(0x10135fc0), (EAX));
  /* 10122ef1 call 0x10122790 */
  push32(0x10122ef6u); f_10122790();
  /* 10122ef6 push 0x1012ff44 */
  push32((uint32_t)(0x1012ff44u));
  /* 10122efb mov dword ptr [0x10133930], eax */
  w32((uint32_t)(0x10133930), (EAX));
  /* 10122f00 call 0x10122790 */
  push32(0x10122f05u); f_10122790();
  /* 10122f05 push 0x1012ff30 */
  push32((uint32_t)(0x1012ff30u));
  /* 10122f0a mov dword ptr [0x10136248], eax */
  w32((uint32_t)(0x10136248), (EAX));
  /* 10122f0f call 0x10122790 */
  push32(0x10122f14u); f_10122790();
  /* 10122f14 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10122f17 mov dword ptr [0x10133948], eax */
  w32((uint32_t)(0x10133948), (EAX));
L_10122f1c:;
  /* 10122f1c mov eax, 1 */
  EAX = (0x1u);
  /* 10122f21 ret 0xc */
  ESPCHK(0x101227f0u, _esp0);
  ESP += 16; return;
}

/* FUN_10002f30 @ 0x10122f30 (34 bytes, 10 insns) */
void f_10122f30(void) {
  FTRACE(0x10122f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10122f30 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10122f34 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10122f38 push eax */
  push32((uint32_t)(EAX));
  /* 10122f39 push ecx */
  push32((uint32_t)(ECX));
  /* 10122f3a push 0x10130668 */
  push32((uint32_t)(0x10130668u));
  /* 10122f3f push 0x101337a8 */
  push32((uint32_t)(0x101337a8u));
  /* 10122f44 call 0x10126e70 */
  push32(0x10122f49u); f_10126e70();
  /* 10122f49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10122f4c mov eax, 0x101337a8 */
  EAX = (0x101337a8u);
  /* 10122f51 ret  */
  ESPCHK(0x10122f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f60 @ 0x10122f60 (45 bytes, 16 insns) */
void f_10122f60(void) {
  FTRACE(0x10122f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10122f60 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10122f64 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10122f68 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10122f6d push eax */
  push32((uint32_t)(EAX));
  /* 10122f6e push ecx */
  push32((uint32_t)(ECX));
  /* 10122f6f call 0x10122740 */
  push32(0x10122f74u); f_10122740();
  /* 10122f74 mov ecx, eax */
  ECX = (EAX);
  /* 10122f76 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10122f7a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10122f7d lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10122f80 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10122f83 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10122f86 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10122f89 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10122f8a idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10122f8c ret  */
  ESPCHK(0x10122f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f90 @ 0x10122f90 (171 bytes, 77 insns) */
void f_10122f90(void) {
  FTRACE(0x10122f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10122f90 push ebx */
  push32((uint32_t)(EBX));
  /* 10122f91 push ebp */
  push32((uint32_t)(EBP));
  /* 10122f92 push esi */
  push32((uint32_t)(ESI));
  /* 10122f93 push edi */
  push32((uint32_t)(EDI));
  /* 10122f94 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 10122f98 push edi */
  push32((uint32_t)(EDI));
  /* 10122f99 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10122f9fu);
  /* 10122f9f mov esi, dword ptr [esp + 0x1c] */
  ESI = (r32((uint32_t)(ESP + 0x1c)));
  /* 10122fa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10122fa6 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10122fa8 jl 0x10122fb1 */
  if ((C.sf!=C.of)) goto L_10122fb1;
  /* 10122faa pop edi */
  EDI = (pop32());
  /* 10122fab pop esi */
  ESI = (pop32());
  /* 10122fac pop ebp */
  EBP = (pop32());
  /* 10122fad mov al, 1 */
  AL = (0x1u);
  /* 10122faf pop ebx */
  EBX = (pop32());
  /* 10122fb0 ret  */
  ESPCHK(0x10122f90u, _esp0);
  ESP += 4; return;
L_10122fb1:;
  /* 10122fb1 push edi */
  push32((uint32_t)(EDI));
  /* 10122fb2 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10122fb8u);
  /* 10122fb8 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 10122fbc sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10122fbe push esi */
  push32((uint32_t)(ESI));
  /* 10122fbf push edi */
  push32((uint32_t)(EDI));
  /* 10122fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10122fc1 mov dword ptr [esp + 0x24], esi */
  w32((uint32_t)(ESP + 0x24), (ESI));
  /* 10122fc5 call 0x10122f60 */
  push32(0x10122fcau); f_10122f60();
  /* 10122fca push ebp */
  push32((uint32_t)(EBP));
  /* 10122fcb mov ebx, eax */
  EBX = (EAX);
  /* 10122fcd call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10122fd3u);
  /* 10122fd3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10122fd6 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10122fd8 jle 0x10123034 */
  if ((C.zf||C.sf!=C.of)) goto L_10123034;
  /* 10122fda cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10122fe0 jle 0x10123034 */
  if ((C.zf||C.sf!=C.of)) goto L_10123034;
  /* 10122fe2 mov eax, 0x45e7b273 */
  EAX = (0x45e7b273u);
  /* 10122fe7 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10122fe9 imul ebx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(EBX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10122feb sar edx, 0xc */
  EDX = (sh_sar((uint32_t)(EDX), (0xcu)&0x1f, 32));
  /* 10122fee mov eax, edx */
  EAX = (EDX);
  /* 10122ff0 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 10122ff3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10122ff5 mov ebx, edx */
  EBX = (EDX);
L_10122ff7:;
  /* 10122ff7 cmp ebx, 0xf */
  { uint32_t _a=(EBX),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10122ffa mov eax, 0xf */
  EAX = (0xfu);
  /* 10122fff jg 0x10123003 */
  if ((!C.zf&&C.sf==C.of)) goto L_10123003;
  /* 10123001 mov eax, ebx */
  EAX = (EBX);
L_10123003:;
  /* 10123003 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10123005 jge 0x10123016 */
  if ((C.sf==C.of)) goto L_10123016;
  /* 10123007 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10123009 push ebp */
  push32((uint32_t)(EBP));
  /* 1012300a push edi */
  push32((uint32_t)(EDI));
  /* 1012300b call 0x10122610 */
  push32(0x10123010u); f_10122610();
  /* 10123010 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123013 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10123014 jmp 0x10122ff7 */
  goto L_10122ff7;
L_10123016:;
  /* 10123016 mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1012301a push ecx */
  push32((uint32_t)(ECX));
  /* 1012301b push edi */
  push32((uint32_t)(EDI));
  /* 1012301c push ebp */
  push32((uint32_t)(EBP));
  /* 1012301d call 0x10122f60 */
  push32(0x10123022u); f_10122f60();
  /* 10123022 push eax */
  push32((uint32_t)(EAX));
  /* 10123023 push edi */
  push32((uint32_t)(EDI));
  /* 10123024 push ebp */
  push32((uint32_t)(EBP));
  /* 10123025 call 0x10122610 */
  push32(0x1012302au); f_10122610();
  /* 1012302a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012302d mov al, 1 */
  AL = (0x1u);
  /* 1012302f pop edi */
  EDI = (pop32());
  /* 10123030 pop esi */
  ESI = (pop32());
  /* 10123031 pop ebp */
  EBP = (pop32());
  /* 10123032 pop ebx */
  EBX = (pop32());
  /* 10123033 ret  */
  ESPCHK(0x10122f90u, _esp0);
  ESP += 4; return;
L_10123034:;
  /* 10123034 pop edi */
  EDI = (pop32());
  /* 10123035 pop esi */
  ESI = (pop32());
  /* 10123036 pop ebp */
  EBP = (pop32());
  /* 10123037 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 10123039 pop ebx */
  EBX = (pop32());
  /* 1012303a ret  */
  ESPCHK(0x10122f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003040 @ 0x10123040 (369 bytes, 82 insns) */
void f_10123040(void) {
  FTRACE(0x10123040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10123040 push ebx */
  push32((uint32_t)(EBX));
  /* 10123041 push esi */
  push32((uint32_t)(ESI));
  /* 10123042 call dword ptr [0x10136500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136500))), 0x10123048u);
  /* 10123048 push 0x10136190 */
  push32((uint32_t)(0x10136190u));
  /* 1012304d mov dword ptr [0x101362b4], eax */
  w32((uint32_t)(0x101362b4), (EAX));
  /* 10123052 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10123058u);
  /* 10123058 mov ebx, 1 */
  EBX = (0x1u);
  /* 1012305d mov esi, eax */
  ESI = (EAX);
  /* 1012305f push ebx */
  push32((uint32_t)(EBX));
  /* 10123060 call 0x10122730 */
  push32(0x10123065u); f_10122730();
  /* 10123065 push 4 */
  push32((uint32_t)(0x4u));
  /* 10123067 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10123069 call 0x10122730 */
  push32(0x1012306eu); f_10122730();
  /* 1012306e push 5 */
  push32((uint32_t)(0x5u));
  /* 10123070 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10123072 call 0x10122730 */
  push32(0x10123077u); f_10122730();
  /* 10123077 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10123079 mov eax, dword ptr [0x101362b4] */
  EAX = (r32((uint32_t)(0x101362b4)));
  /* 1012307e push 3 */
  push32((uint32_t)(0x3u));
  /* 10123080 mov dword ptr [0x101361b0], esi */
  w32((uint32_t)(0x101361b0), (ESI));
  /* 10123086 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 10123089 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 1012308c lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 1012308f lea eax, [eax + ecx*2] */
  EAX = ((uint32_t)(EAX + ECX*2));
  /* 10123092 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10123095 mov ecx, dword ptr [eax + 0x10133af0] */
  ECX = (r32((uint32_t)(EAX + 0x10133af0)));
  /* 1012309b lea edx, [eax + 0x10133960] */
  EDX = ((uint32_t)(EAX + 0x10133960));
  /* 101230a1 mov dword ptr [0x101361c0], edx */
  w32((uint32_t)(0x101361c0), (EDX));
  /* 101230a7 lea edx, [eax + 0x10133af4] */
  EDX = ((uint32_t)(EAX + 0x10133af4));
  /* 101230ad mov dword ptr [0x10136604], ecx */
  w32((uint32_t)(0x10136604), (ECX));
  /* 101230b3 mov ecx, dword ptr [eax + 0x10133c84] */
  ECX = (r32((uint32_t)(EAX + 0x10133c84)));
  /* 101230b9 mov dword ptr [0x101361c4], edx */
  w32((uint32_t)(0x101361c4), (EDX));
  /* 101230bf lea edx, [eax + 0x10133c88] */
  EDX = ((uint32_t)(EAX + 0x10133c88));
  /* 101230c5 mov dword ptr [0x10136608], ecx */
  w32((uint32_t)(0x10136608), (ECX));
  /* 101230cb mov dword ptr [0x1013624c], edx */
  w32((uint32_t)(0x1013624c), (EDX));
  /* 101230d1 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x101230d7u);
  /* 101230d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 101230d9 mov dword ptr [0x10136290], eax */
  w32((uint32_t)(0x10136290), (EAX));
  /* 101230de call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x101230e4u);
  /* 101230e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 101230e6 mov dword ptr [0x10133620], eax */
  w32((uint32_t)(0x10133620), (EAX));
  /* 101230eb call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x101230f1u);
  /* 101230f1 push 4 */
  push32((uint32_t)(0x4u));
  /* 101230f3 mov dword ptr [0x10136380], eax */
  w32((uint32_t)(0x10136380), (EAX));
  /* 101230f8 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x101230feu);
  /* 101230fe push 5 */
  push32((uint32_t)(0x5u));
  /* 10123100 mov dword ptr [0x10133728], eax */
  w32((uint32_t)(0x10133728), (EAX));
  /* 10123105 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x1012310bu);
  /* 1012310b push ebx */
  push32((uint32_t)(EBX));
  /* 1012310c mov dword ptr [0x101360e8], eax */
  w32((uint32_t)(0x101360e8), (EAX));
  /* 10123111 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10123117u);
  /* 10123117 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012311a mov dword ptr [0x10136338], eax */
  w32((uint32_t)(0x10136338), (EAX));
  /* 1012311f call 0x10122670 */
  push32(0x10123124u); f_10122670();
  /* 10123124 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10123126 jne 0x10123132 */
  if (!C.zf) goto L_10123132;
  /* 10123128 mov dword ptr [0x1012f248], 4 */
  w32((uint32_t)(0x1012f248), (0x4u));
L_10123132:;
  /* 10123132 push 0x1012f114 */
  push32((uint32_t)(0x1012f114u));
  /* 10123137 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10123139 call dword ptr [0x1013650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013650c))), 0x1012313fu);
  /* 1012313f push 0x10136598 */
  push32((uint32_t)(0x10136598u));
  /* 10123144 call 0x10122720 */
  push32(0x10123149u); f_10122720();
  /* 10123149 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1012314b push 0x1012f244 */
  push32((uint32_t)(0x1012f244u));
  /* 10123150 call 0x10122700 */
  push32(0x10123155u); f_10122700();
  /* 10123155 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123158 mov byte ptr [0x10136188], bl */
  w8((uint32_t)(0x10136188), (BL));
  /* 1012315e mov byte ptr [0x1013618a], bl */
  w8((uint32_t)(0x1013618a), (BL));
  /* 10123164 mov byte ptr [0x1013618c], bl */
  w8((uint32_t)(0x1013618c), (BL));
  /* 1012316a mov byte ptr [0x1013618d], bl */
  w8((uint32_t)(0x1013618d), (BL));
  /* 10123170 mov byte ptr [0x10136323], bl */
  w8((uint32_t)(0x10136323), (BL));
  /* 10123176 mov byte ptr [0x10136321], bl */
  w8((uint32_t)(0x10136321), (BL));
  /* 1012317c mov byte ptr [0x10136324], bl */
  w8((uint32_t)(0x10136324), (BL));
  /* 10123182 mov byte ptr [0x10136325], bl */
  w8((uint32_t)(0x10136325), (BL));
  /* 10123188 pop esi */
  ESI = (pop32());
  /* 10123189 mov byte ptr [0x1013618b], 0 */
  w8((uint32_t)(0x1013618b), (0x0u));
  /* 10123190 mov byte ptr [0x10136189], 0 */
  w8((uint32_t)(0x10136189), (0x0u));
  /* 10123197 mov byte ptr [0x10136320], 0 */
  w8((uint32_t)(0x10136320), (0x0u));
  /* 1012319e mov byte ptr [0x10136322], 0 */
  w8((uint32_t)(0x10136322), (0x0u));
  /* 101231a5 mov dword ptr [0x1013664c], 0 */
  w32((uint32_t)(0x1013664c), (0x0u));
  /* 101231af pop ebx */
  EBX = (pop32());
  /* 101231b0 ret  */
  ESPCHK(0x10123040u, _esp0);
  ESP += 4; return;
}

/* FUN_100031c0 @ 0x101231c0 (85 bytes, 29 insns) */
void f_101231c0(void) {
  FTRACE(0x101231c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101231c0 mov eax, dword ptr [0x10135f58] */
  EAX = (r32((uint32_t)(0x10135f58)));
  /* 101231c5 push esi */
  push32((uint32_t)(ESI));
  /* 101231c6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101231c9 jg 0x10123213 */
  if ((!C.zf&&C.sf==C.of)) goto L_10123213;
  /* 101231cb push 0x10133688 */
  push32((uint32_t)(0x10133688u));
  /* 101231d0 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x101231d6u);
  /* 101231d6 mov ecx, eax */
  ECX = (EAX);
  /* 101231d8 mov eax, 0x38e38e39 */
  EAX = (0x38e38e39u);
  /* 101231dd imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 101231df sar edx, 3 */
  EDX = (sh_sar((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 101231e2 mov eax, edx */
  EAX = (EDX);
  /* 101231e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101231e7 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 101231ea add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101231ec mov esi, edx */
  ESI = (EDX);
  /* 101231ee je 0x10123213 */
  if (C.zf) goto L_10123213;
  /* 101231f0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101231f2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101231f4 push esi */
  push32((uint32_t)(ESI));
  /* 101231f5 push 0x10133700 */
  push32((uint32_t)(0x10133700u));
  /* 101231fa call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10123200u);
  /* 10123200 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10123202 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10123204 push esi */
  push32((uint32_t)(ESI));
  /* 10123205 push 0x10133640 */
  push32((uint32_t)(0x10133640u));
  /* 1012320a call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10123210u);
  /* 10123210 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10123213:;
  /* 10123213 pop esi */
  ESI = (pop32());
  /* 10123214 ret  */
  ESPCHK(0x101231c0u, _esp0);
  ESP += 4; return;
}

/* ProcessLandAI @ 0x10123220 (1 bytes, 1 insns) */
void f_10123220(void) {
  FTRACE(0x10123220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10123220 ret  */
  ESPCHK(0x10123220u, _esp0);
  ESP += 4; return;
}

/* FUN_10003230 @ 0x10123230 (157 bytes, 43 insns) */
void f_10123230(void) {
  FTRACE(0x10123230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10123230 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10123232 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10123234 push 0x10136350 */
  push32((uint32_t)(0x10136350u));
  /* 10123239 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012323fu);
  /* 1012323f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10123241 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10123243 push 0x10136358 */
  push32((uint32_t)(0x10136358u));
  /* 10123248 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012324eu);
  /* 1012324e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10123250 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10123252 push 0x10136340 */
  push32((uint32_t)(0x10136340u));
  /* 10123257 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012325du);
  /* 1012325d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1012325f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10123261 push 0x10136348 */
  push32((uint32_t)(0x10136348u));
  /* 10123266 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012326cu);
  /* 1012326c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1012326e push 0xa */
  push32((uint32_t)(0xau));
  /* 10123270 push 0x10136360 */
  push32((uint32_t)(0x10136360u));
  /* 10123275 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012327bu);
  /* 1012327b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1012327d push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1012327f push 0x10136298 */
  push32((uint32_t)(0x10136298u));
  /* 10123284 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012328au);
  /* 1012328a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012328d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1012328f push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10123291 push 0x10136280 */
  push32((uint32_t)(0x10136280u));
  /* 10123296 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012329cu);
  /* 1012329c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1012329e push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101232a0 push 0x10136288 */
  push32((uint32_t)(0x10136288u));
  /* 101232a5 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101232abu);
  /* 101232ab push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101232ad push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101232af push 0x101362a0 */
  push32((uint32_t)(0x101362a0u));
  /* 101232b4 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101232bau);
  /* 101232ba push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101232bc push 0xa */
  push32((uint32_t)(0xau));
  /* 101232be push 0x101362a8 */
  push32((uint32_t)(0x101362a8u));
  /* 101232c3 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101232c9u);
  /* 101232c9 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101232cc ret  */
  ESPCHK(0x10123230u, _esp0);
  ESP += 4; return;
}

/* FUN_100032d0 @ 0x101232d0 (79 bytes, 22 insns) */
void f_101232d0(void) {
  FTRACE(0x101232d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101232d0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101232d2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101232d4 push 0x10133910 */
  push32((uint32_t)(0x10133910u));
  /* 101232d9 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101232dfu);
  /* 101232df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101232e1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101232e3 push 0x10133918 */
  push32((uint32_t)(0x10133918u));
  /* 101232e8 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101232eeu);
  /* 101232ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101232f0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101232f2 push 0x10133908 */
  push32((uint32_t)(0x10133908u));
  /* 101232f7 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101232fdu);
  /* 101232fd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101232ff push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10123301 push 0x10135f78 */
  push32((uint32_t)(0x10135f78u));
  /* 10123306 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012330cu);
  /* 1012330c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1012330e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10123310 push 0x10135f68 */
  push32((uint32_t)(0x10135f68u));
  /* 10123315 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012331bu);
  /* 1012331b add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012331e ret  */
  ESPCHK(0x101232d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003320 @ 0x10123320 (64 bytes, 18 insns) */
void f_10123320(void) {
  FTRACE(0x10123320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10123320 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10123322 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10123324 push 0x10136098 */
  push32((uint32_t)(0x10136098u));
  /* 10123329 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012332fu);
  /* 1012332f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10123331 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10123333 push 0x101360a0 */
  push32((uint32_t)(0x101360a0u));
  /* 10123338 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012333eu);
  /* 1012333e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10123340 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10123342 push 0x101360a8 */
  push32((uint32_t)(0x101360a8u));
  /* 10123347 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012334du);
  /* 1012334d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1012334f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10123351 push 0x101360b0 */
  push32((uint32_t)(0x101360b0u));
  /* 10123356 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012335cu);
  /* 1012335c add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012335f ret  */
  ESPCHK(0x10123320u, _esp0);
  ESP += 4; return;
}

/* FUN_10003360 @ 0x10123360 (3787 bytes, 1079 insns) */
void f_10123360(void) {
  FTRACE(0x10123360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10123360 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10123363 push ebx */
  push32((uint32_t)(EBX));
  /* 10123364 push ebp */
  push32((uint32_t)(EBP));
  /* 10123365 push esi */
  push32((uint32_t)(ESI));
  /* 10123366 push edi */
  push32((uint32_t)(EDI));
  /* 10123367 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 1012336c push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 10123371 call dword ptr [0x10136518] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136518))), 0x10123377u);
  /* 10123377 push 0 */
  push32((uint32_t)(0x0u));
  /* 10123379 call 0x10122760 */
  push32(0x1012337eu); f_10122760();
  /* 1012337e push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10123380 push 0 */
  push32((uint32_t)(0x0u));
  /* 10123382 call 0x10122640 */
  push32(0x10123387u); f_10122640();
  /* 10123387 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10123389 push 0 */
  push32((uint32_t)(0x0u));
  /* 1012338b mov dword ptr [esp + 0x40], eax */
  w32((uint32_t)(ESP + 0x40), (EAX));
  /* 1012338f call 0x10122640 */
  push32(0x10123394u); f_10122640();
  /* 10123394 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 10123396 push 0 */
  push32((uint32_t)(0x0u));
  /* 10123398 mov edi, eax */
  EDI = (EAX);
  /* 1012339a call 0x10122640 */
  push32(0x1012339fu); f_10122640();
  /* 1012339f push 0xe */
  push32((uint32_t)(0xeu));
  /* 101233a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 101233a3 mov esi, eax */
  ESI = (EAX);
  /* 101233a5 call 0x10122640 */
  push32(0x101233aau); f_10122640();
  /* 101233aa push 0x10136020 */
  push32((uint32_t)(0x10136020u));
  /* 101233af mov ebx, eax */
  EBX = (EAX);
  /* 101233b1 call dword ptr [0x1013654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013654c))), 0x101233b7u);
  /* 101233b7 sar esi, 2 */
  ESI = (sh_sar((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 101233ba and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 101233bf add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101233c1 mov dword ptr [esp + 0x50], eax */
  w32((uint32_t)(ESP + 0x50), (EAX));
  /* 101233c5 push 0x101362d8 */
  push32((uint32_t)(0x101362d8u));
  /* 101233ca lea eax, [esi + ebx*4] */
  EAX = ((uint32_t)(ESI + EBX*4));
  /* 101233cd mov dword ptr [esp + 0x5c], eax */
  w32((uint32_t)(ESP + 0x5c), (EAX));
  /* 101233d1 call dword ptr [0x10136544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136544))), 0x101233d7u);
  /* 101233d7 push 0x10135fb8 */
  push32((uint32_t)(0x10135fb8u));
  /* 101233dc mov ebx, eax */
  EBX = (EAX);
  /* 101233de call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x101233e4u);
  /* 101233e4 push 0x10135fb8 */
  push32((uint32_t)(0x10135fb8u));
  /* 101233e9 mov ebp, eax */
  EBP = (EAX);
  /* 101233eb call dword ptr [0x10136544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136544))), 0x101233f1u);
  /* 101233f1 push 0x10135fe8 */
  push32((uint32_t)(0x10135fe8u));
  /* 101233f6 mov dword ptr [esp + 0x5c], eax */
  w32((uint32_t)(ESP + 0x5c), (EAX));
  /* 101233fa call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10123400u);
  /* 10123400 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123403 mov edi, eax */
  EDI = (EAX);
  /* 10123405 push 0x10135fe8 */
  push32((uint32_t)(0x10135fe8u));
  /* 1012340a call dword ptr [0x10136544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136544))), 0x10123410u);
  /* 10123410 push 0x101360d8 */
  push32((uint32_t)(0x101360d8u));
  /* 10123415 mov dword ptr [esp + 0x20], eax */
  w32((uint32_t)(ESP + 0x20), (EAX));
  /* 10123419 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x1012341fu);
  /* 1012341f push 0x101360d8 */
  push32((uint32_t)(0x101360d8u));
  /* 10123424 mov esi, eax */
  ESI = (EAX);
  /* 10123426 call dword ptr [0x10136544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136544))), 0x1012342cu);
  /* 1012342c push 0x101362d8 */
  push32((uint32_t)(0x101362d8u));
  /* 10123431 mov dword ptr [esp + 0x24], eax */
  w32((uint32_t)(ESP + 0x24), (EAX));
  /* 10123435 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x1012343bu);
  /* 1012343b mov edx, dword ptr [esp + 0x24] */
  EDX = (r32((uint32_t)(ESP + 0x24)));
  /* 1012343f mov ecx, dword ptr [esp + 0x28] */
  ECX = (r32((uint32_t)(ESP + 0x28)));
  /* 10123443 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10123445 mov edx, dword ptr [esp + 0x2c] */
  EDX = (r32((uint32_t)(ESP + 0x2c)));
  /* 10123449 sub esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012344b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1012344d sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012344f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10123451 sub esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10123453 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10123455 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10123457 push 0x10136020 */
  push32((uint32_t)(0x10136020u));
  /* 1012345c add esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1012345e mov dword ptr [esp + 0x38], esi */
  w32((uint32_t)(ESP + 0x38), (ESI));
  /* 10123462 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10123468u);
  /* 10123468 push 3 */
  push32((uint32_t)(0x3u));
  /* 1012346a mov bl, 1 */
  BL = (0x1u);
  /* 1012346c call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10123472u);
  /* 10123472 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123475 cmp eax, 0xd6d8 */
  { uint32_t _a=(EAX),_b=(0xd6d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012347a jle 0x101234aa */
  if ((C.zf||C.sf!=C.of)) goto L_101234aa;
  /* 1012347c push 1 */
  push32((uint32_t)(0x1u));
  /* 1012347e call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10123484u);
  /* 10123484 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123487 cmp eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012348c jle 0x101234aa */
  if ((C.zf||C.sf!=C.of)) goto L_101234aa;
  /* 1012348e push 4 */
  push32((uint32_t)(0x4u));
  /* 10123490 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10123496u);
  /* 10123496 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123499 cmp eax, 0x1b58 */
  { uint32_t _a=(EAX),_b=(0x1b58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012349e jle 0x101234aa */
  if ((C.zf||C.sf!=C.of)) goto L_101234aa;
  /* 101234a0 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 101234a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101234a6 jne 0x101234aa */
  if (!C.zf) goto L_101234aa;
  /* 101234a8 xor bl, bl */
  { uint32_t _r=(BL)^(BL); BL = (_r); fl_logic(_r,8); }
L_101234aa:;
  /* 101234aa push 0x10136190 */
  push32((uint32_t)(0x10136190u));
  /* 101234af call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x101234b5u);
  /* 101234b5 push 3 */
  push32((uint32_t)(0x3u));
  /* 101234b7 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 101234bb call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x101234c1u);
  /* 101234c1 push 0x101361b8 */
  push32((uint32_t)(0x101361b8u));
  /* 101234c6 mov esi, eax */
  ESI = (EAX);
  /* 101234c8 call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x101234ceu);
  /* 101234ce push 0x10133688 */
  push32((uint32_t)(0x10133688u));
  /* 101234d3 mov byte ptr [esp + 0x22], al */
  w8((uint32_t)(ESP + 0x22), (AL));
  /* 101234d7 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x101234ddu);
  /* 101234dd push 0x101360e0 */
  push32((uint32_t)(0x101360e0u));
  /* 101234e2 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x101234e8u);
  /* 101234e8 push 0x101363b0 */
  push32((uint32_t)(0x101363b0u));
  /* 101234ed mov dword ptr [esp + 0x2c], eax */
  w32((uint32_t)(ESP + 0x2c), (EAX));
  /* 101234f1 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x101234f7u);
  /* 101234f7 push 0x10136330 */
  push32((uint32_t)(0x10136330u));
  /* 101234fc mov edi, eax */
  EDI = (EAX);
  /* 101234fe call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10123504u);
  /* 10123504 push 0x10133688 */
  push32((uint32_t)(0x10133688u));
  /* 10123509 mov ebp, eax */
  EBP = (EAX);
  /* 1012350b call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10123511u);
  /* 10123511 add eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10123513 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10123515 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10123517 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10123519 push 0x10136110 */
  push32((uint32_t)(0x10136110u));
  /* 1012351e mov dword ptr [esp + 0x44], eax */
  w32((uint32_t)(ESP + 0x44), (EAX));
  /* 10123522 mov byte ptr [esp + 0x3f], 1 */
  w8((uint32_t)(ESP + 0x3f), (0x1u));
  /* 10123527 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012352du);
  /* 1012352d push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1012352f push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10123531 push 0x10136150 */
  push32((uint32_t)(0x10136150u));
  /* 10123536 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012353cu);
  /* 1012353c push 0x101338d8 */
  push32((uint32_t)(0x101338d8u));
  /* 10123541 call dword ptr [0x10136544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136544))), 0x10123547u);
  /* 10123547 push 0x101338d8 */
  push32((uint32_t)(0x101338d8u));
  /* 1012354c mov edi, eax */
  EDI = (EAX);
  /* 1012354e call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10123554u);
  /* 10123554 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123557 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10123559 je 0x10123560 */
  if (C.zf) goto L_10123560;
  /* 1012355b mov byte ptr [esp + 0x13], 0 */
  w8((uint32_t)(ESP + 0x13), (0x0u));
L_10123560:;
  /* 10123560 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 10123564 test ebp, ebp */
  { uint32_t _r=(EBP)&(EBP); fl_logic(_r,32); }
  /* 10123566 je 0x10123f2d */
  if (C.zf) goto L_10123f2d;
  /* 1012356c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1012356e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10123570 push 1 */
  push32((uint32_t)(0x1u));
  /* 10123572 push 0x10135fd8 */
  push32((uint32_t)(0x10135fd8u));
  /* 10123577 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x1012357du);
  /* 1012357d push 0x10135fd8 */
  push32((uint32_t)(0x10135fd8u));
  /* 10123582 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10123588u);
  /* 10123588 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012358b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012358d je 0x10124223 */
  if (C.zf) goto L_10124223;
  /* 10123593 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10123595 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10123597 push 0x10136378 */
  push32((uint32_t)(0x10136378u));
  /* 1012359c call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101235a2u);
  /* 101235a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101235a5 call dword ptr [0x10136570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136570))), 0x101235abu);
  /* 101235ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101235ad jne 0x101235f0 */
  if (!C.zf) goto L_101235f0;
  /* 101235af cmp esi, 0x2bc */
  { uint32_t _a=(ESI),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101235b5 jle 0x101235dc */
  if ((C.zf||C.sf!=C.of)) goto L_101235dc;
  /* 101235b7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101235b9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101235bb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101235bd push 0x10136190 */
  push32((uint32_t)(0x10136190u));
  /* 101235c2 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x101235c8u);
  /* 101235c8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101235ca push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101235cc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101235ce push 0x10133688 */
  push32((uint32_t)(0x10133688u));
  /* 101235d3 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x101235d9u);
  /* 101235d9 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101235dc:;
  /* 101235dc push 1 */
  push32((uint32_t)(0x1u));
  /* 101235de push 1 */
  push32((uint32_t)(0x1u));
  /* 101235e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 101235e2 call dword ptr [0x10136514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136514))), 0x101235e8u);
  /* 101235e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101235eb jmp 0x101236fe */
  goto L_101236fe;
L_101235f0:;
  /* 101235f0 push 0x101337a0 */
  push32((uint32_t)(0x101337a0u));
  /* 101235f5 call dword ptr [0x1013654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013654c))), 0x101235fbu);
  /* 101235fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101235fe test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10123600 je 0x1012362a */
  if (C.zf) goto L_1012362a;
  /* 10123602 cmp esi, 0x2ee0 */
  { uint32_t _a=(ESI),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10123608 jle 0x10123612 */
  if ((C.zf||C.sf!=C.of)) goto L_10123612;
  /* 1012360a push 6 */
  push32((uint32_t)(0x6u));
  /* 1012360c push 8 */
  push32((uint32_t)(0x8u));
  /* 1012360e push 9 */
  push32((uint32_t)(0x9u));
  /* 10123610 jmp 0x10123650 */
  goto L_10123650;
L_10123612:;
  /* 10123612 cmp esi, 0x1770 */
  { uint32_t _a=(ESI),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10123618 jle 0x10123622 */
  if ((C.zf||C.sf!=C.of)) goto L_10123622;
  /* 1012361a push 3 */
  push32((uint32_t)(0x3u));
  /* 1012361c push 5 */
  push32((uint32_t)(0x5u));
  /* 1012361e push 9 */
  push32((uint32_t)(0x9u));
  /* 10123620 jmp 0x10123650 */
  goto L_10123650;
L_10123622:;
  /* 10123622 push 1 */
  push32((uint32_t)(0x1u));
  /* 10123624 push 4 */
  push32((uint32_t)(0x4u));
  /* 10123626 push 9 */
  push32((uint32_t)(0x9u));
  /* 10123628 jmp 0x10123650 */
  goto L_10123650;
L_1012362a:;
  /* 1012362a cmp esi, 0x2ee0 */
  { uint32_t _a=(ESI),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10123630 jle 0x1012363a */
  if ((C.zf||C.sf!=C.of)) goto L_1012363a;
  /* 10123632 push 8 */
  push32((uint32_t)(0x8u));
  /* 10123634 push 8 */
  push32((uint32_t)(0x8u));
  /* 10123636 push 9 */
  push32((uint32_t)(0x9u));
  /* 10123638 jmp 0x10123650 */
  goto L_10123650;
L_1012363a:;
  /* 1012363a cmp esi, 0x1770 */
  { uint32_t _a=(ESI),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10123640 jle 0x1012364a */
  if ((C.zf||C.sf!=C.of)) goto L_1012364a;
  /* 10123642 push 5 */
  push32((uint32_t)(0x5u));
  /* 10123644 push 5 */
  push32((uint32_t)(0x5u));
  /* 10123646 push 9 */
  push32((uint32_t)(0x9u));
  /* 10123648 jmp 0x10123650 */
  goto L_10123650;
L_1012364a:;
  /* 1012364a push 4 */
  push32((uint32_t)(0x4u));
  /* 1012364c push 4 */
  push32((uint32_t)(0x4u));
  /* 1012364e push 0xa */
  push32((uint32_t)(0xau));
L_10123650:;
  /* 10123650 call dword ptr [0x10136514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136514))), 0x10123656u);
  /* 10123656 mov al, byte ptr [esp + 0x1e] */
  AL = (r8((uint32_t)(ESP + 0x1e)));
  /* 1012365a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012365d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1012365f mov edi, 0x15e */
  EDI = (0x15eu);
  /* 10123664 je 0x1012366b */
  if (C.zf) goto L_1012366b;
  /* 10123666 mov edi, 0x12c */
  EDI = (0x12cu);
L_1012366b:;
  /* 1012366b cmp ebp, 0x19 */
  { uint32_t _a=(EBP),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012366e jge 0x1012368c */
  if ((C.sf==C.of)) goto L_1012368c;
  /* 10123670 cmp esi, 0x12c */
  { uint32_t _a=(ESI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10123676 jle 0x1012368c */
  if ((C.zf||C.sf!=C.of)) goto L_1012368c;
  /* 10123678 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1012367a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1012367c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1012367e push 0x10136190 */
  push32((uint32_t)(0x10136190u));
  /* 10123683 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10123689u);
  /* 10123689 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1012368c:;
  /* 1012368c cmp esi, 0xc8 */
  { uint32_t _a=(ESI),_b=(0xc8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10123692 jle 0x101236cd */
  if ((C.zf||C.sf!=C.of)) goto L_101236cd;
  /* 10123694 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10123696 je 0x101236b2 */
  if (C.zf) goto L_101236b2;
  /* 10123698 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1012369a push 0xe8 */
  push32((uint32_t)(0xe8u));
  /* 1012369f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101236a4 push 0x10136190 */
  push32((uint32_t)(0x10136190u));
  /* 101236a9 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x101236afu);
  /* 101236af add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101236b2:;
  /* 101236b2 cmp esi, 0x12c */
  { uint32_t _a=(ESI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101236b8 jle 0x101236cd */
  if ((C.zf||C.sf!=C.of)) goto L_101236cd;
  /* 101236ba push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101236bc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101236be push edi */
  push32((uint32_t)(EDI));
  /* 101236bf push 0x10133688 */
  push32((uint32_t)(0x10133688u));
  /* 101236c4 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x101236cau);
  /* 101236ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101236cd:;
  /* 101236cd push 0x10136270 */
  push32((uint32_t)(0x10136270u));
  /* 101236d2 call dword ptr [0x1013654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013654c))), 0x101236d8u);
  /* 101236d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101236db test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101236dd je 0x101236fe */
  if (C.zf) goto L_101236fe;
  /* 101236df cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101236e5 jle 0x101236fe */
  if ((C.zf||C.sf!=C.of)) goto L_101236fe;
  /* 101236e7 push 0x101362d8 */
  push32((uint32_t)(0x101362d8u));
  /* 101236ec call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x101236f2u);
  /* 101236f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101236f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101236f7 jle 0x101236fe */
  if ((C.zf||C.sf!=C.of)) goto L_101236fe;
  /* 101236f9 call 0x10123230 */
  push32(0x101236feu); f_10123230();
L_101236fe:;
  /* 101236fe mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 10123702 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10123704 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10123707 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10123709 jge 0x1012370f */
  if ((C.sf==C.of)) goto L_1012370f;
  /* 1012370b push 5 */
  push32((uint32_t)(0x5u));
  /* 1012370d jmp 0x10123713 */
  goto L_10123713;
L_1012370f:;
  /* 1012370f add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10123712 push eax */
  push32((uint32_t)(EAX));
L_10123713:;
  /* 10123713 push 0x10135f90 */
  push32((uint32_t)(0x10135f90u));
  /* 10123718 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x1012371eu);
  /* 1012371e mov edi, dword ptr [esp + 0x38] */
  EDI = (r32((uint32_t)(ESP + 0x38)));
  /* 10123722 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123725 cmp edi, 5 */
  { uint32_t _a=(EDI),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10123728 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1012372a jge 0x10123740 */
  if ((C.sf==C.of)) goto L_10123740;
  /* 1012372c push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1012372e push 0xc */
  push32((uint32_t)(0xcu));
  /* 10123730 push 0x101338e8 */
  push32((uint32_t)(0x101338e8u));
  /* 10123735 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x1012373bu);
  /* 1012373b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012373e jmp 0x1012377a */
  goto L_1012377a;
L_10123740:;
  /* 10123740 lea ecx, [edi + 6] */
  ECX = ((uint32_t)(EDI + 0x6));
  /* 10123743 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10123745 push ecx */
  push32((uint32_t)(ECX));
  /* 10123746 push 0x101338e8 */
  push32((uint32_t)(0x101338e8u));
  /* 1012374b call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10123751u);
  /* 10123751 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10123753 lea edx, [edi + 9] */
  EDX = ((uint32_t)(EDI + 0x9));
  /* 10123756 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10123758 push edx */
  push32((uint32_t)(EDX));
  /* 10123759 push 0x101338e8 */
  push32((uint32_t)(0x101338e8u));
  /* 1012375e call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10123764u);
  /* 10123764 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10123766 add edi, 0xa */
  { uint32_t _a=(EDI),_b=(0xau),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10123769 push 0xa */
  push32((uint32_t)(0xau));
  /* 1012376b push edi */
  push32((uint32_t)(EDI));
  /* 1012376c push 0x101338e8 */
  push32((uint32_t)(0x101338e8u));
  /* 10123771 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10123777u);
  /* 10123777 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1012377a:;
  /* 1012377a push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1012377c push 0 */
  push32((uint32_t)(0x0u));
  /* 1012377e call 0x10122640 */
  push32(0x10123783u); f_10122640();
  /* 10123783 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123786 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10123788 je 0x101237e7 */
  if (C.zf) goto L_101237e7;
  /* 1012378a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1012378c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1012378e push 0x101362e8 */
  push32((uint32_t)(0x101362e8u));
  /* 10123793 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10123799u);
  /* 10123799 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1012379b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1012379d push 0x101362d0 */
  push32((uint32_t)(0x101362d0u));
  /* 101237a2 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101237a8u);
  /* 101237a8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101237aa push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101237ac push 0x101362e0 */
  push32((uint32_t)(0x101362e0u));
  /* 101237b1 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101237b7u);
  /* 101237b7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101237b9 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101237bb push 0x101362c0 */
  push32((uint32_t)(0x101362c0u));
  /* 101237c0 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101237c6u);
  /* 101237c6 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101237c8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101237ca push 0x101362c8 */
  push32((uint32_t)(0x101362c8u));
  /* 101237cf call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101237d5u);
  /* 101237d5 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101237d7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101237d9 push 0x101362b8 */
  push32((uint32_t)(0x101362b8u));
  /* 101237de call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101237e4u);
  /* 101237e4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101237e7:;
  /* 101237e7 push 0xa */
  push32((uint32_t)(0xau));
  /* 101237e9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101237eb push 3 */
  push32((uint32_t)(0x3u));
  /* 101237ed push 0x101338a0 */
  push32((uint32_t)(0x101338a0u));
  /* 101237f2 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x101237f8u);
  /* 101237f8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101237fa push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101237fc push 1 */
  push32((uint32_t)(0x1u));
  /* 101237fe push 0x10135fb8 */
  push32((uint32_t)(0x10135fb8u));
  /* 10123803 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10123809u);
  /* 10123809 push 5 */
  push32((uint32_t)(0x5u));
  /* 1012380b push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1012380d push 2 */
  push32((uint32_t)(0x2u));
  /* 1012380f push 0x10135fb8 */
  push32((uint32_t)(0x10135fb8u));
  /* 10123814 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x1012381au);
  /* 1012381a mov esi, dword ptr [esp + 0x4c] */
  ESI = (r32((uint32_t)(ESP + 0x4c)));
  /* 1012381e add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123821 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10123823 jne 0x10123839 */
  if (!C.zf) goto L_10123839;
  /* 10123825 push 5 */
  push32((uint32_t)(0x5u));
  /* 10123827 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10123829 push 3 */
  push32((uint32_t)(0x3u));
  /* 1012382b push 0x10135fb8 */
  push32((uint32_t)(0x10135fb8u));
  /* 10123830 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10123836u);
  /* 10123836 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10123839:;
  /* 10123839 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1012383b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1012383d push 1 */
  push32((uint32_t)(0x1u));
  /* 1012383f push 0x101361e8 */
  push32((uint32_t)(0x101361e8u));
  /* 10123844 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x1012384au);
  /* 1012384a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1012384c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1012384e push 1 */
  push32((uint32_t)(0x1u));
  /* 10123850 push 0x10136250 */
  push32((uint32_t)(0x10136250u));
  /* 10123855 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x1012385bu);
  /* 1012385b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1012385d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1012385f push 1 */
  push32((uint32_t)(0x1u));
  /* 10123861 push 0x10135fd0 */
  push32((uint32_t)(0x10135fd0u));
  /* 10123866 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x1012386cu);
  /* 1012386c push 5 */
  push32((uint32_t)(0x5u));
  /* 1012386e push 0xa */
  push32((uint32_t)(0xau));
  /* 10123870 push 2 */
  push32((uint32_t)(0x2u));
  /* 10123872 push 0x101361e8 */
  push32((uint32_t)(0x101361e8u));
  /* 10123877 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x1012387du);
  /* 1012387d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123880 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10123882 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10123884 push 1 */
  push32((uint32_t)(0x1u));
  /* 10123886 push 0x101360d8 */
  push32((uint32_t)(0x101360d8u));
  /* 1012388b call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10123891u);
  /* 10123891 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10123893 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10123895 push 0x10133660 */
  push32((uint32_t)(0x10133660u));
  /* 1012389a call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101238a0u);
  /* 101238a0 push 0x10135f20 */
  push32((uint32_t)(0x10135f20u));
  /* 101238a5 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x101238abu);
  /* 101238ab add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101238ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101238b0 jle 0x101238d7 */
  if ((C.zf||C.sf!=C.of)) goto L_101238d7;
  /* 101238b2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 101238b4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101238b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 101238b8 push 0x10133878 */
  push32((uint32_t)(0x10133878u));
  /* 101238bd call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x101238c3u);
  /* 101238c3 push 3 */
  push32((uint32_t)(0x3u));
  /* 101238c5 push 5 */
  push32((uint32_t)(0x5u));
  /* 101238c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 101238c9 push 0x101360f8 */
  push32((uint32_t)(0x101360f8u));
  /* 101238ce call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x101238d4u);
  /* 101238d4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101238d7:;
  /* 101238d7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101238d9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101238db push 1 */
  push32((uint32_t)(0x1u));
  /* 101238dd push 0x10135f20 */
  push32((uint32_t)(0x10135f20u));
  /* 101238e2 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x101238e8u);
  /* 101238e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101238eb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101238ed jne 0x10123903 */
  if (!C.zf) goto L_10123903;
  /* 101238ef push 0xa */
  push32((uint32_t)(0xau));
  /* 101238f1 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101238f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 101238f5 push 0x10135fe8 */
  push32((uint32_t)(0x10135fe8u));
  /* 101238fa call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10123900u);
  /* 10123900 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10123903:;
  /* 10123903 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10123905 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10123907 push 1 */
  push32((uint32_t)(0x1u));
  /* 10123909 push 0x10133618 */
  push32((uint32_t)(0x10133618u));
  /* 1012390e call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10123914u);
  /* 10123914 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123917 cmp ebp, 0x19 */
  { uint32_t _a=(EBP),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012391a jle 0x10123930 */
  if ((C.zf||C.sf!=C.of)) goto L_10123930;
  /* 1012391c push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1012391e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10123920 push 2 */
  push32((uint32_t)(0x2u));
  /* 10123922 push 0x10135fd8 */
  push32((uint32_t)(0x10135fd8u));
  /* 10123927 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x1012392du);
  /* 1012392d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10123930:;
  /* 10123930 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10123932 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10123934 push 1 */
  push32((uint32_t)(0x1u));
  /* 10123936 push 0x10136258 */
  push32((uint32_t)(0x10136258u));
  /* 1012393b call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10123941u);
  /* 10123941 push 5 */
  push32((uint32_t)(0x5u));
  /* 10123943 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10123945 push 2 */
  push32((uint32_t)(0x2u));
  /* 10123947 push 0x10136258 */
  push32((uint32_t)(0x10136258u));
  /* 1012394c call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10123952u);
  /* 10123952 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10123954 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10123956 push 0x10136078 */
  push32((uint32_t)(0x10136078u));
  /* 1012395b call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10123961u);
  /* 10123961 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10123963 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10123965 push 0x10136030 */
  push32((uint32_t)(0x10136030u));
  /* 1012396a call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10123970u);
  /* 10123970 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10123972 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10123974 push 0x10136038 */
  push32((uint32_t)(0x10136038u));
  /* 10123979 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012397fu);
  /* 1012397f add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123982 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10123984 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10123986 push 0x10136040 */
  push32((uint32_t)(0x10136040u));
  /* 1012398b call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10123991u);
  /* 10123991 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10123993 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10123995 push 0x10136270 */
  push32((uint32_t)(0x10136270u));
  /* 1012399a call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101239a0u);
  /* 101239a0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101239a2 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101239a4 push 0x101361b8 */
  push32((uint32_t)(0x101361b8u));
  /* 101239a9 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101239afu);
  /* 101239af push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101239b1 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101239b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 101239b5 push 0x101362d8 */
  push32((uint32_t)(0x101362d8u));
  /* 101239ba call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x101239c0u);
  /* 101239c0 push 5 */
  push32((uint32_t)(0x5u));
  /* 101239c2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101239c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 101239c6 push 0x101362d8 */
  push32((uint32_t)(0x101362d8u));
  /* 101239cb call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x101239d1u);
  /* 101239d1 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101239d4 push 5 */
  push32((uint32_t)(0x5u));
  /* 101239d6 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101239d8 push 3 */
  push32((uint32_t)(0x3u));
  /* 101239da push 0x101362d8 */
  push32((uint32_t)(0x101362d8u));
  /* 101239df call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x101239e5u);
  /* 101239e5 push 5 */
  push32((uint32_t)(0x5u));
  /* 101239e7 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101239e9 push 5 */
  push32((uint32_t)(0x5u));
  /* 101239eb push 0x101362d8 */
  push32((uint32_t)(0x101362d8u));
  /* 101239f0 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x101239f6u);
  /* 101239f6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101239f8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101239fa push 0x10133958 */
  push32((uint32_t)(0x10133958u));
  /* 101239ff call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10123a05u);
  /* 10123a05 call 0x10122630 */
  push32(0x10123a0au); f_10122630();
  /* 10123a0a push 0x10136270 */
  push32((uint32_t)(0x10136270u));
  /* 10123a0f mov edi, eax */
  EDI = (EAX);
  /* 10123a11 call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x10123a17u);
  /* 10123a17 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123a1a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10123a1c je 0x10123a3f */
  if (C.zf) goto L_10123a3f;
  /* 10123a1e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10123a20 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10123a22 push 0x10133958 */
  push32((uint32_t)(0x10133958u));
  /* 10123a27 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10123a2du);
  /* 10123a2d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10123a2f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10123a31 push 0x10133870 */
  push32((uint32_t)(0x10133870u));
  /* 10123a36 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10123a3cu);
  /* 10123a3c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10123a3f:;
  /* 10123a3f push 0x10133958 */
  push32((uint32_t)(0x10133958u));
  /* 10123a44 call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x10123a4au);
  /* 10123a4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123a4d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10123a4f je 0x10123a77 */
  if (C.zf) goto L_10123a77;
  /* 10123a51 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10123a53 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10123a55 push 0x10133940 */
  push32((uint32_t)(0x10133940u));
  /* 10123a5a call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10123a60u);
  /* 10123a60 push 0xa */
  push32((uint32_t)(0xau));
  /* 10123a62 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10123a64 push 0x10133880 */
  push32((uint32_t)(0x10133880u));
  /* 10123a69 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10123a6fu);
  /* 10123a6f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123a72 call 0x10123320 */
  push32(0x10123a77u); f_10123320();
L_10123a77:;
  /* 10123a77 push 0x101360b0 */
  push32((uint32_t)(0x101360b0u));
  /* 10123a7c call dword ptr [0x1013654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013654c))), 0x10123a82u);
  /* 10123a82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123a85 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10123a87 je 0x10123aae */
  if (C.zf) goto L_10123aae;
  /* 10123a89 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10123a8b push 0xa */
  push32((uint32_t)(0xau));
  /* 10123a8d push 0xa */
  push32((uint32_t)(0xau));
  /* 10123a8f push 0x10133668 */
  push32((uint32_t)(0x10133668u));
  /* 10123a94 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10123a9au);
  /* 10123a9a push 0xa */
  push32((uint32_t)(0xau));
  /* 10123a9c push 3 */
  push32((uint32_t)(0x3u));
  /* 10123a9e push 0xf */
  push32((uint32_t)(0xfu));
  /* 10123aa0 push 0x10133668 */
  push32((uint32_t)(0x10133668u));
  /* 10123aa5 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10123aabu);
  /* 10123aab add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10123aae:;
  /* 10123aae push 0 */
  push32((uint32_t)(0x0u));
  /* 10123ab0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10123ab2 call 0x101225f0 */
  push32(0x10123ab7u); f_101225f0();
  /* 10123ab7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10123ab9 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10123abfu);
  /* 10123abf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123ac2 cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10123ac7 jle 0x10123b0b */
  if ((C.zf||C.sf!=C.of)) goto L_10123b0b;
  /* 10123ac9 push 0x101337a0 */
  push32((uint32_t)(0x101337a0u));
  /* 10123ace call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x10123ad4u);
  /* 10123ad4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123ad7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10123ad9 je 0x10123b0b */
  if (C.zf) goto L_10123b0b;
  /* 10123adb push 1 */
  push32((uint32_t)(0x1u));
  /* 10123add call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10123ae3u);
  /* 10123ae3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123ae6 cmp eax, 0x1d4c */
  { uint32_t _a=(EAX),_b=(0x1d4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10123aeb jge 0x10123b0b */
  if ((C.sf==C.of)) goto L_10123b0b;
  /* 10123aed push 0x10133958 */
  push32((uint32_t)(0x10133958u));
  /* 10123af2 call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x10123af8u);
  /* 10123af8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123afb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10123afd jne 0x10123b0b */
  if (!C.zf) goto L_10123b0b;
  /* 10123aff push 1 */
  push32((uint32_t)(0x1u));
  /* 10123b01 push 1 */
  push32((uint32_t)(0x1u));
  /* 10123b03 call 0x101225f0 */
  push32(0x10123b08u); f_101225f0();
  /* 10123b08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10123b0b:;
  /* 10123b0b push 0x10133958 */
  push32((uint32_t)(0x10133958u));
  /* 10123b10 call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x10123b16u);
  /* 10123b16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123b19 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10123b1b je 0x10123c9c */
  if (C.zf) goto L_10123c9c;
  /* 10123b21 push 0x101360f0 */
  push32((uint32_t)(0x101360f0u));
  /* 10123b26 call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x10123b2cu);
  /* 10123b2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123b2f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10123b31 je 0x10123c9c */
  if (C.zf) goto L_10123c9c;
  /* 10123b37 push 0x101361b8 */
  push32((uint32_t)(0x101361b8u));
  /* 10123b3c call dword ptr [0x1013654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013654c))), 0x10123b42u);
  /* 10123b42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123b45 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10123b47 je 0x10123c9c */
  if (C.zf) goto L_10123c9c;
  /* 10123b4d cmp edi, 0xa */
  { uint32_t _a=(EDI),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10123b50 je 0x10123b57 */
  if (C.zf) goto L_10123b57;
  /* 10123b52 cmp edi, 0x12 */
  { uint32_t _a=(EDI),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10123b55 jne 0x10123b87 */
  if (!C.zf) goto L_10123b87;
L_10123b57:;
  /* 10123b57 push 3 */
  push32((uint32_t)(0x3u));
  /* 10123b59 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10123b5fu);
  /* 10123b5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123b62 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10123b67 jle 0x10123b87 */
  if ((C.zf||C.sf!=C.of)) goto L_10123b87;
  /* 10123b69 push 1 */
  push32((uint32_t)(0x1u));
  /* 10123b6b call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10123b71u);
  /* 10123b71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123b74 cmp eax, 0x2008 */
  { uint32_t _a=(EAX),_b=(0x2008u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10123b79 jge 0x10123b87 */
  if ((C.sf==C.of)) goto L_10123b87;
  /* 10123b7b push 1 */
  push32((uint32_t)(0x1u));
  /* 10123b7d push 1 */
  push32((uint32_t)(0x1u));
  /* 10123b7f call 0x101225f0 */
  push32(0x10123b84u); f_101225f0();
  /* 10123b84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10123b87:;
  /* 10123b87 push 0x10136020 */
  push32((uint32_t)(0x10136020u));
  /* 10123b8c call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x10123b92u);
  /* 10123b92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123b95 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10123b97 jne 0x10123bc9 */
  if (!C.zf) goto L_10123bc9;
  /* 10123b99 push 3 */
  push32((uint32_t)(0x3u));
  /* 10123b9b call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10123ba1u);
  /* 10123ba1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123ba4 cmp eax, 0xea60 */
  { uint32_t _a=(EAX),_b=(0xea60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10123ba9 jle 0x10123bc9 */
  if ((C.zf||C.sf!=C.of)) goto L_10123bc9;
  /* 10123bab push 1 */
  push32((uint32_t)(0x1u));
  /* 10123bad call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10123bb3u);
  /* 10123bb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123bb6 cmp eax, 0x2af8 */
  { uint32_t _a=(EAX),_b=(0x2af8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10123bbb jge 0x10123bc9 */
  if ((C.sf==C.of)) goto L_10123bc9;
  /* 10123bbd push 1 */
  push32((uint32_t)(0x1u));
  /* 10123bbf push 1 */
  push32((uint32_t)(0x1u));
  /* 10123bc1 call 0x101225f0 */
  push32(0x10123bc6u); f_101225f0();
  /* 10123bc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10123bc9:;
  /* 10123bc9 push 0x10136020 */
  push32((uint32_t)(0x10136020u));
  /* 10123bce call dword ptr [0x1013654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013654c))), 0x10123bd4u);
  /* 10123bd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123bd7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10123bd9 je 0x10123c9c */
  if (C.zf) goto L_10123c9c;
  /* 10123bdf cmp edi, 0x1c */
  { uint32_t _a=(EDI),_b=(0x1cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10123be2 jne 0x10123c22 */
  if (!C.zf) goto L_10123c22;
  /* 10123be4 push 3 */
  push32((uint32_t)(0x3u));
  /* 10123be6 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10123becu);
  /* 10123bec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123bef cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10123bf4 jle 0x10123cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_10123cf7;
  /* 10123bfa push 4 */
  push32((uint32_t)(0x4u));
  /* 10123bfc call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10123c02u);
  /* 10123c02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123c05 cmp eax, 0x1c84 */
  { uint32_t _a=(EAX),_b=(0x1c84u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10123c0a jle 0x10123cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_10123cf7;
  /* 10123c10 push 1 */
  push32((uint32_t)(0x1u));
  /* 10123c12 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10123c18u);
  /* 10123c18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123c1b cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10123c20 jmp 0x10123c8c */
  goto L_10123c8c;
L_10123c22:;
  /* 10123c22 cmp edi, 0x28 */
  { uint32_t _a=(EDI),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10123c25 jne 0x10123c65 */
  if (!C.zf) goto L_10123c65;
  /* 10123c27 push 3 */
  push32((uint32_t)(0x3u));
  /* 10123c29 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10123c2fu);
  /* 10123c2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123c32 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10123c37 jle 0x10123cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_10123cf7;
  /* 10123c3d push 4 */
  push32((uint32_t)(0x4u));
  /* 10123c3f call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10123c45u);
  /* 10123c45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123c48 cmp eax, 0x2648 */
  { uint32_t _a=(EAX),_b=(0x2648u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10123c4d jle 0x10123cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_10123cf7;
  /* 10123c53 push 1 */
  push32((uint32_t)(0x1u));
  /* 10123c55 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10123c5bu);
  /* 10123c5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123c5e cmp eax, 0x5dc0 */
  { uint32_t _a=(EAX),_b=(0x5dc0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10123c63 jmp 0x10123c8c */
  goto L_10123c8c;
L_10123c65:;
  /* 10123c65 cmp edi, 0x37 */
  { uint32_t _a=(EDI),_b=(0x37u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10123c68 jne 0x10123c9c */
  if (!C.zf) goto L_10123c9c;
  /* 10123c6a push 3 */
  push32((uint32_t)(0x3u));
  /* 10123c6c call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10123c72u);
  /* 10123c72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123c75 cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10123c7a jle 0x10123cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_10123cf7;
  /* 10123c7c push 1 */
  push32((uint32_t)(0x1u));
  /* 10123c7e call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10123c84u);
  /* 10123c84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123c87 cmp eax, 0x6590 */
  { uint32_t _a=(EAX),_b=(0x6590u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10123c8c:;
  /* 10123c8c jge 0x10123cf7 */
  if ((C.sf==C.of)) goto L_10123cf7;
  /* 10123c8e push 1 */
  push32((uint32_t)(0x1u));
  /* 10123c90 push 1 */
  push32((uint32_t)(0x1u));
  /* 10123c92 call 0x101225f0 */
  push32(0x10123c97u); f_101225f0();
  /* 10123c97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123c9a jmp 0x10123cf7 */
  goto L_10123cf7;
L_10123c9c:;
  /* 10123c9c cmp edi, 0x5f */
  { uint32_t _a=(EDI),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10123c9f jne 0x10123cf7 */
  if (!C.zf) goto L_10123cf7;
  /* 10123ca1 push 0xa */
  push32((uint32_t)(0xau));
  /* 10123ca3 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10123ca5 push 0x10133768 */
  push32((uint32_t)(0x10133768u));
  /* 10123caa call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10123cb0u);
  /* 10123cb0 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10123cb2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10123cb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10123cb6 push 0x10136398 */
  push32((uint32_t)(0x10136398u));
  /* 10123cbb call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10123cc1u);
  /* 10123cc1 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10123cc3 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10123cc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10123cc7 push 0x10136398 */
  push32((uint32_t)(0x10136398u));
  /* 10123ccc call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10123cd2u);
  /* 10123cd2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10123cd4 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10123cd6 push 3 */
  push32((uint32_t)(0x3u));
  /* 10123cd8 push 0x10136398 */
  push32((uint32_t)(0x10136398u));
  /* 10123cdd call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10123ce3u);
  /* 10123ce3 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10123ce5 push 0xa */
  push32((uint32_t)(0xau));
  /* 10123ce7 push 5 */
  push32((uint32_t)(0x5u));
  /* 10123ce9 push 0x10136398 */
  push32((uint32_t)(0x10136398u));
  /* 10123cee call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10123cf4u);
  /* 10123cf4 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10123cf7:;
  /* 10123cf7 cmp ebp, 0x50 */
  { uint32_t _a=(EBP),_b=(0x50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10123cfa jle 0x10123d53 */
  if ((C.zf||C.sf!=C.of)) goto L_10123d53;
  /* 10123cfc mov al, byte ptr [esp + 0x13] */
  AL = (r8((uint32_t)(ESP + 0x13)));
  /* 10123d00 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10123d02 je 0x10123d53 */
  if (C.zf) goto L_10123d53;
  /* 10123d04 push 0xa */
  push32((uint32_t)(0xau));
  /* 10123d06 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10123d08 push 1 */
  push32((uint32_t)(0x1u));
  /* 10123d0a push 0x101338d8 */
  push32((uint32_t)(0x101338d8u));
  /* 10123d0f call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10123d15u);
  /* 10123d15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123d18 cmp ebp, 0x5f */
  { uint32_t _a=(EBP),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10123d1b jle 0x10123d53 */
  if ((C.zf||C.sf!=C.of)) goto L_10123d53;
  /* 10123d1d push 0xa */
  push32((uint32_t)(0xau));
  /* 10123d1f push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10123d21 push 2 */
  push32((uint32_t)(0x2u));
  /* 10123d23 push 0x101338d8 */
  push32((uint32_t)(0x101338d8u));
  /* 10123d28 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10123d2eu);
  /* 10123d2e push 0xa */
  push32((uint32_t)(0xau));
  /* 10123d30 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10123d32 push 3 */
  push32((uint32_t)(0x3u));
  /* 10123d34 push 0x101338d8 */
  push32((uint32_t)(0x101338d8u));
  /* 10123d39 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10123d3fu);
  /* 10123d3f push 0xa */
  push32((uint32_t)(0xau));
  /* 10123d41 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10123d43 push 4 */
  push32((uint32_t)(0x4u));
  /* 10123d45 push 0x101338d8 */
  push32((uint32_t)(0x101338d8u));
  /* 10123d4a call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10123d50u);
  /* 10123d50 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10123d53:;
  /* 10123d53 mov bl, byte ptr [esp + 0x12] */
  BL = (r8((uint32_t)(ESP + 0x12)));
  /* 10123d57 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10123d59 je 0x10123d97 */
  if (C.zf) goto L_10123d97;
  /* 10123d5b push 0x10136270 */
  push32((uint32_t)(0x10136270u));
  /* 10123d60 call dword ptr [0x1013654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013654c))), 0x10123d66u);
  /* 10123d66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123d69 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10123d6b je 0x10123d97 */
  if (C.zf) goto L_10123d97;
  /* 10123d6d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10123d6f push 1 */
  push32((uint32_t)(0x1u));
  /* 10123d71 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10123d73 push 0x10136160 */
  push32((uint32_t)(0x10136160u));
  /* 10123d78 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10123d7eu);
  /* 10123d7e push 0x10136198 */
  push32((uint32_t)(0x10136198u));
  /* 10123d83 call dword ptr [0x1013654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013654c))), 0x10123d89u);
  /* 10123d89 push 0x101360b0 */
  push32((uint32_t)(0x101360b0u));
  /* 10123d8e call dword ptr [0x1013654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013654c))), 0x10123d94u);
  /* 10123d94 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10123d97:;
  /* 10123d97 push 0x10133618 */
  push32((uint32_t)(0x10133618u));
  /* 10123d9c call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10123da2u);
  /* 10123da2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10123da4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10123da6 push 3 */
  push32((uint32_t)(0x3u));
  /* 10123da8 push 0x101361f0 */
  push32((uint32_t)(0x101361f0u));
  /* 10123dad call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10123db3u);
  /* 10123db3 push 0x101360f0 */
  push32((uint32_t)(0x101360f0u));
  /* 10123db8 call dword ptr [0x1013654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013654c))), 0x10123dbeu);
  /* 10123dbe add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123dc1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10123dc3 je 0x10123dd9 */
  if (C.zf) goto L_10123dd9;
  /* 10123dc5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10123dc7 push 0xa */
  push32((uint32_t)(0xau));
  /* 10123dc9 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10123dcb push 0x101361f0 */
  push32((uint32_t)(0x101361f0u));
  /* 10123dd0 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10123dd6u);
  /* 10123dd6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10123dd9:;
  /* 10123dd9 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10123ddb je 0x10123ec5 */
  if (C.zf) goto L_10123ec5;
  /* 10123de1 push 0x10136270 */
  push32((uint32_t)(0x10136270u));
  /* 10123de6 call dword ptr [0x1013654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013654c))), 0x10123decu);
  /* 10123dec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123def test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10123df1 je 0x10123ec5 */
  if (C.zf) goto L_10123ec5;
  /* 10123df7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10123df9 jne 0x10123e31 */
  if (!C.zf) goto L_10123e31;
  /* 10123dfb push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10123dfd push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10123dff push 2 */
  push32((uint32_t)(0x2u));
  /* 10123e01 push 0x101360d8 */
  push32((uint32_t)(0x101360d8u));
  /* 10123e06 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10123e0cu);
  /* 10123e0c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10123e0e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10123e10 push 3 */
  push32((uint32_t)(0x3u));
  /* 10123e12 push 0x101360d8 */
  push32((uint32_t)(0x101360d8u));
  /* 10123e17 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10123e1du);
  /* 10123e1d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10123e1f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10123e21 push 4 */
  push32((uint32_t)(0x4u));
  /* 10123e23 push 0x101360d8 */
  push32((uint32_t)(0x101360d8u));
  /* 10123e28 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10123e2eu);
  /* 10123e2e add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10123e31:;
  /* 10123e31 push 0x101360e0 */
  push32((uint32_t)(0x101360e0u));
  /* 10123e36 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10123e3cu);
  /* 10123e3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123e3f cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10123e42 jle 0x10123e65 */
  if ((C.zf||C.sf!=C.of)) goto L_10123e65;
  /* 10123e44 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10123e46 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10123e48 push 0x10136208 */
  push32((uint32_t)(0x10136208u));
  /* 10123e4d call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10123e53u);
  /* 10123e53 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10123e55 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10123e57 push 0x10136210 */
  push32((uint32_t)(0x10136210u));
  /* 10123e5c call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10123e62u);
  /* 10123e62 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10123e65:;
  /* 10123e65 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10123e67 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10123e69 push 0x101360f0 */
  push32((uint32_t)(0x101360f0u));
  /* 10123e6e call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10123e74u);
  /* 10123e74 push 0x10133908 */
  push32((uint32_t)(0x10133908u));
  /* 10123e79 call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x10123e7fu);
  /* 10123e7f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123e82 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10123e84 je 0x10123ec5 */
  if (C.zf) goto L_10123ec5;
  /* 10123e86 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10123e88 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10123e8a push 0x10136168 */
  push32((uint32_t)(0x10136168u));
  /* 10123e8f call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10123e95u);
  /* 10123e95 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10123e97 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10123e99 push 0x10136178 */
  push32((uint32_t)(0x10136178u));
  /* 10123e9e call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10123ea4u);
  /* 10123ea4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10123ea6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10123ea8 push 0x10136180 */
  push32((uint32_t)(0x10136180u));
  /* 10123ead call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10123eb3u);
  /* 10123eb3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10123eb5 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10123eb7 push 0x10136170 */
  push32((uint32_t)(0x10136170u));
  /* 10123ebc call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10123ec2u);
  /* 10123ec2 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10123ec5:;
  /* 10123ec5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10123ec7 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10123ec9 push 0x101337a0 */
  push32((uint32_t)(0x101337a0u));
  /* 10123ece call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10123ed4u);
  /* 10123ed4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10123ed6 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10123ed8 push 0x101338e0 */
  push32((uint32_t)(0x101338e0u));
  /* 10123edd call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10123ee3u);
  /* 10123ee3 push 0x10136250 */
  push32((uint32_t)(0x10136250u));
  /* 10123ee8 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10123eeeu);
  /* 10123eee add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123ef1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10123ef4 jle 0x10123f31 */
  if ((C.zf||C.sf!=C.of)) goto L_10123f31;
  /* 10123ef6 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10123efa cmp eax, 0x12c */
  { uint32_t _a=(EAX),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10123eff jle 0x10123f31 */
  if ((C.zf||C.sf!=C.of)) goto L_10123f31;
  /* 10123f01 lea ecx, [eax - 0x32] */
  ECX = ((uint32_t)(EAX + -0x32));
  /* 10123f04 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10123f08 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 10123f0b cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10123f0d jge 0x10123f26 */
  if ((C.sf==C.of)) goto L_10123f26;
  /* 10123f0f push 0xa */
  push32((uint32_t)(0xau));
  /* 10123f11 push 0xa */
  push32((uint32_t)(0xau));
  /* 10123f13 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10123f18 push 0x101360e0 */
  push32((uint32_t)(0x101360e0u));
  /* 10123f1d call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10123f23u);
  /* 10123f23 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10123f26:;
  /* 10123f26 call 0x101232d0 */
  push32(0x10123f2bu); f_101232d0();
  /* 10123f2b jmp 0x10123f31 */
  goto L_10123f31;
L_10123f2d:;
  /* 10123f2d mov bl, byte ptr [esp + 0x12] */
  BL = (r8((uint32_t)(ESP + 0x12)));
L_10123f31:;
  /* 10123f31 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10123f33 je 0x10123f76 */
  if (C.zf) goto L_10123f76;
  /* 10123f35 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10123f37 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10123f39 push 0x10133630 */
  push32((uint32_t)(0x10133630u));
  /* 10123f3e call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10123f44u);
  /* 10123f44 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10123f46 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10123f48 push 0x10133708 */
  push32((uint32_t)(0x10133708u));
  /* 10123f4d call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10123f53u);
  /* 10123f53 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10123f55 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10123f57 push 0x10133628 */
  push32((uint32_t)(0x10133628u));
  /* 10123f5c call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10123f62u);
  /* 10123f62 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10123f64 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10123f66 push 2 */
  push32((uint32_t)(0x2u));
  /* 10123f68 push 0x10136250 */
  push32((uint32_t)(0x10136250u));
  /* 10123f6d call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10123f73u);
  /* 10123f73 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10123f76:;
  /* 10123f76 push 0x101337a0 */
  push32((uint32_t)(0x101337a0u));
  /* 10123f7b call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x10123f81u);
  /* 10123f81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123f84 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10123f86 je 0x10123fa9 */
  if (C.zf) goto L_10123fa9;
  /* 10123f88 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10123f8a push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10123f8c push 0x101361f8 */
  push32((uint32_t)(0x101361f8u));
  /* 10123f91 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10123f97u);
  /* 10123f97 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10123f99 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10123f9b push 0x10136200 */
  push32((uint32_t)(0x10136200u));
  /* 10123fa0 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10123fa6u);
  /* 10123fa6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10123fa9:;
  /* 10123fa9 push 0x10133878 */
  push32((uint32_t)(0x10133878u));
  /* 10123fae call dword ptr [0x10136544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136544))), 0x10123fb4u);
  /* 10123fb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123fb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10123fb9 je 0x10124223 */
  if (C.zf) goto L_10124223;
  /* 10123fbf push 0x10135f20 */
  push32((uint32_t)(0x10135f20u));
  /* 10123fc4 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10123fcau);
  /* 10123fca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123fcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10123fcf je 0x1012402a */
  if (C.zf) goto L_1012402a;
  /* 10123fd1 push 0x10136270 */
  push32((uint32_t)(0x10136270u));
  /* 10123fd6 call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x10123fdcu);
  /* 10123fdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123fdf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10123fe1 jne 0x1012402a */
  if (!C.zf) goto L_1012402a;
  /* 10123fe3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10123fe5 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10123febu);
  /* 10123feb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10123fee cmp eax, 0x320 */
  { uint32_t _a=(EAX),_b=(0x320u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10123ff3 jle 0x1012402a */
  if ((C.zf||C.sf!=C.of)) goto L_1012402a;
  /* 10123ff5 push 3 */
  push32((uint32_t)(0x3u));
  /* 10123ff7 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10123ffdu);
  /* 10123ffd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124000 cmp eax, 0x1770 */
  { uint32_t _a=(EAX),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10124005 jge 0x1012402a */
  if ((C.sf==C.of)) goto L_1012402a;
  /* 10124007 push 4 */
  push32((uint32_t)(0x4u));
  /* 10124009 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x1012400fu);
  /* 1012400f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124012 cmp eax, 0xbb8 */
  { uint32_t _a=(EAX),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10124017 jle 0x1012402a */
  if ((C.zf||C.sf!=C.of)) goto L_1012402a;
  /* 10124019 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1012401e push 3 */
  push32((uint32_t)(0x3u));
  /* 10124020 push 4 */
  push32((uint32_t)(0x4u));
  /* 10124022 call 0x10122610 */
  push32(0x10124027u); f_10122610();
  /* 10124027 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1012402a:;
  /* 1012402a push 3 */
  push32((uint32_t)(0x3u));
  /* 1012402c call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10124032u);
  /* 10124032 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124035 cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012403a jge 0x1012405f */
  if ((C.sf==C.of)) goto L_1012405f;
  /* 1012403c push 2 */
  push32((uint32_t)(0x2u));
  /* 1012403e call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10124044u);
  /* 10124044 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124047 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012404c jle 0x1012405f */
  if ((C.zf||C.sf!=C.of)) goto L_1012405f;
  /* 1012404e push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10124053 push 3 */
  push32((uint32_t)(0x3u));
  /* 10124055 push 2 */
  push32((uint32_t)(0x2u));
  /* 10124057 call 0x10122610 */
  push32(0x1012405cu); f_10122610();
  /* 1012405c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1012405f:;
  /* 1012405f push 0x101361f8 */
  push32((uint32_t)(0x101361f8u));
  /* 10124064 call dword ptr [0x1013654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013654c))), 0x1012406au);
  /* 1012406a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012406d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1012406f je 0x10124197 */
  if (C.zf) goto L_10124197;
  /* 10124075 push 0x10136200 */
  push32((uint32_t)(0x10136200u));
  /* 1012407a call dword ptr [0x1013654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013654c))), 0x10124080u);
  /* 10124080 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124083 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10124085 je 0x10124197 */
  if (C.zf) goto L_10124197;
  /* 1012408b push 2 */
  push32((uint32_t)(0x2u));
  /* 1012408d call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10124093u);
  /* 10124093 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124096 cmp eax, 0x1adb0 */
  { uint32_t _a=(EAX),_b=(0x1adb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012409b jle 0x101240ae */
  if ((C.zf||C.sf!=C.of)) goto L_101240ae;
  /* 1012409d push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 101240a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 101240a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 101240a6 call 0x10122610 */
  push32(0x101240abu); f_10122610();
  /* 101240ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101240ae:;
  /* 101240ae push 0 */
  push32((uint32_t)(0x0u));
  /* 101240b0 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x101240b6u);
  /* 101240b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101240b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101240bb je 0x101241ba */
  if (C.zf) goto L_101241ba;
  /* 101240c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 101240c3 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x101240c9u);
  /* 101240c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101240cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101240ce je 0x1012413b */
  if (C.zf) goto L_1012413b;
  /* 101240d0 push 4 */
  push32((uint32_t)(0x4u));
  /* 101240d2 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x101240d8u);
  /* 101240d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101240db cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101240e0 jge 0x1012413b */
  if ((C.sf==C.of)) goto L_1012413b;
  /* 101240e2 push 4 */
  push32((uint32_t)(0x4u));
  /* 101240e4 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x101240eau);
  /* 101240ea push 5 */
  push32((uint32_t)(0x5u));
  /* 101240ec mov esi, eax */
  ESI = (EAX);
  /* 101240ee call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x101240f4u);
  /* 101240f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101240f7 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101240f9 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 101240fe jge 0x1012411f */
  if ((C.sf==C.of)) goto L_1012411f;
  /* 10124100 push 5 */
  push32((uint32_t)(0x5u));
  /* 10124102 push 2 */
  push32((uint32_t)(0x2u));
  /* 10124104 call 0x10122610 */
  push32(0x10124109u); f_10122610();
  /* 10124109 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 1012410e push 4 */
  push32((uint32_t)(0x4u));
  /* 10124110 push 2 */
  push32((uint32_t)(0x2u));
  /* 10124112 call 0x10122610 */
  push32(0x10124117u); f_10122610();
  /* 10124117 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012411a jmp 0x101241ba */
  goto L_101241ba;
L_1012411f:;
  /* 1012411f push 4 */
  push32((uint32_t)(0x4u));
  /* 10124121 push 2 */
  push32((uint32_t)(0x2u));
  /* 10124123 call 0x10122610 */
  push32(0x10124128u); f_10122610();
  /* 10124128 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 1012412d push 5 */
  push32((uint32_t)(0x5u));
  /* 1012412f push 2 */
  push32((uint32_t)(0x2u));
  /* 10124131 call 0x10122610 */
  push32(0x10124136u); f_10122610();
  /* 10124136 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124139 jmp 0x101241ba */
  goto L_101241ba;
L_1012413b:;
  /* 1012413b push 5 */
  push32((uint32_t)(0x5u));
  /* 1012413d call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10124143u);
  /* 10124143 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124146 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012414b jge 0x1012416d */
  if ((C.sf==C.of)) goto L_1012416d;
  /* 1012414d push 0 */
  push32((uint32_t)(0x0u));
  /* 1012414f call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10124155u);
  /* 10124155 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124158 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012415a je 0x1012416d */
  if (C.zf) goto L_1012416d;
  /* 1012415c push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10124161 push 5 */
  push32((uint32_t)(0x5u));
  /* 10124163 push 2 */
  push32((uint32_t)(0x2u));
  /* 10124165 call 0x10122610 */
  push32(0x1012416au); f_10122610();
  /* 1012416a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1012416d:;
  /* 1012416d push 5 */
  push32((uint32_t)(0x5u));
  /* 1012416f call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10124175u);
  /* 10124175 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124178 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012417d jge 0x101241ba */
  if ((C.sf==C.of)) goto L_101241ba;
  /* 1012417f push 0 */
  push32((uint32_t)(0x0u));
  /* 10124181 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10124187u);
  /* 10124187 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012418a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012418c je 0x101241ba */
  if (C.zf) goto L_101241ba;
  /* 1012418e push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10124193 push 5 */
  push32((uint32_t)(0x5u));
  /* 10124195 jmp 0x101241b0 */
  goto L_101241b0;
L_10124197:;
  /* 10124197 push 2 */
  push32((uint32_t)(0x2u));
  /* 10124199 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x1012419fu);
  /* 1012419f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101241a2 cmp eax, 0x1adb0 */
  { uint32_t _a=(EAX),_b=(0x1adb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101241a7 jle 0x101241ba */
  if ((C.zf||C.sf!=C.of)) goto L_101241ba;
  /* 101241a9 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 101241ae push 1 */
  push32((uint32_t)(0x1u));
L_101241b0:;
  /* 101241b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 101241b2 call 0x10122610 */
  push32(0x101241b7u); f_10122610();
  /* 101241b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101241ba:;
  /* 101241ba push 0 */
  push32((uint32_t)(0x0u));
  /* 101241bc call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x101241c2u);
  /* 101241c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101241c5 cmp eax, 0x249f0 */
  { uint32_t _a=(EAX),_b=(0x249f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101241ca jle 0x101241dd */
  if ((C.zf||C.sf!=C.of)) goto L_101241dd;
  /* 101241cc push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 101241d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 101241d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 101241d5 call 0x10122610 */
  push32(0x101241dau); f_10122610();
  /* 101241da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101241dd:;
  /* 101241dd push 4 */
  push32((uint32_t)(0x4u));
  /* 101241df call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x101241e5u);
  /* 101241e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101241e8 cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101241ed jle 0x10124200 */
  if ((C.zf||C.sf!=C.of)) goto L_10124200;
  /* 101241ef push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 101241f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 101241f6 push 4 */
  push32((uint32_t)(0x4u));
  /* 101241f8 call 0x10122610 */
  push32(0x101241fdu); f_10122610();
  /* 101241fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10124200:;
  /* 10124200 push 5 */
  push32((uint32_t)(0x5u));
  /* 10124202 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10124208u);
  /* 10124208 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012420b cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10124210 jle 0x10124223 */
  if ((C.zf||C.sf!=C.of)) goto L_10124223;
  /* 10124212 push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 10124217 push 1 */
  push32((uint32_t)(0x1u));
  /* 10124219 push 5 */
  push32((uint32_t)(0x5u));
  /* 1012421b call 0x10122610 */
  push32(0x10124220u); f_10122610();
  /* 10124220 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10124223:;
  /* 10124223 pop edi */
  EDI = (pop32());
  /* 10124224 pop esi */
  ESI = (pop32());
  /* 10124225 pop ebp */
  EBP = (pop32());
  /* 10124226 pop ebx */
  EBX = (pop32());
  /* 10124227 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012422a ret  */
  ESPCHK(0x10123360u, _esp0);
  ESP += 4; return;
}

/* FUN_10004230 @ 0x10124230 (209 bytes, 56 insns) */
void f_10124230(void) {
  FTRACE(0x10124230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10124230 push 3 */
  push32((uint32_t)(0x3u));
  /* 10124232 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10124238u);
  /* 10124238 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012423b cmp eax, 0x672 */
  { uint32_t _a=(EAX),_b=(0x672u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10124240 jle 0x10124300 */
  if ((C.zf||C.sf!=C.of)) goto L_10124300;
  /* 10124246 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10124248 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1012424a push 0x10136350 */
  push32((uint32_t)(0x10136350u));
  /* 1012424f call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10124255u);
  /* 10124255 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10124257 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10124259 push 0x10136358 */
  push32((uint32_t)(0x10136358u));
  /* 1012425e call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10124264u);
  /* 10124264 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10124266 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10124268 push 0x10136340 */
  push32((uint32_t)(0x10136340u));
  /* 1012426d call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10124273u);
  /* 10124273 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10124275 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10124277 push 0x10136348 */
  push32((uint32_t)(0x10136348u));
  /* 1012427c call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10124282u);
  /* 10124282 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10124284 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10124286 push 0x10136360 */
  push32((uint32_t)(0x10136360u));
  /* 1012428b call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10124291u);
  /* 10124291 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10124293 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10124295 push 0x10136298 */
  push32((uint32_t)(0x10136298u));
  /* 1012429a call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101242a0u);
  /* 101242a0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101242a3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101242a5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101242a7 push 0x10136280 */
  push32((uint32_t)(0x10136280u));
  /* 101242ac call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101242b2u);
  /* 101242b2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101242b4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101242b6 push 0x10136288 */
  push32((uint32_t)(0x10136288u));
  /* 101242bb call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101242c1u);
  /* 101242c1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101242c3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101242c5 push 0x101362a0 */
  push32((uint32_t)(0x101362a0u));
  /* 101242ca call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101242d0u);
  /* 101242d0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101242d2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101242d4 push 0x101362a8 */
  push32((uint32_t)(0x101362a8u));
  /* 101242d9 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101242dfu);
  /* 101242df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101242e1 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101242e3 push 0x10136260 */
  push32((uint32_t)(0x10136260u));
  /* 101242e8 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101242eeu);
  /* 101242ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101242f0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101242f2 push 0x10135fc8 */
  push32((uint32_t)(0x10135fc8u));
  /* 101242f7 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101242fdu);
  /* 101242fd add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10124300:;
  /* 10124300 ret  */
  ESPCHK(0x10124230u, _esp0);
  ESP += 4; return;
}

/* FUN_10004310 @ 0x10124310 (79 bytes, 22 insns) */
void f_10124310(void) {
  FTRACE(0x10124310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10124310 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10124312 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10124314 push 0x10133910 */
  push32((uint32_t)(0x10133910u));
  /* 10124319 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012431fu);
  /* 1012431f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10124321 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10124323 push 0x10133918 */
  push32((uint32_t)(0x10133918u));
  /* 10124328 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012432eu);
  /* 1012432e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10124330 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10124332 push 0x10133908 */
  push32((uint32_t)(0x10133908u));
  /* 10124337 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012433du);
  /* 1012433d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1012433f push 0xa */
  push32((uint32_t)(0xau));
  /* 10124341 push 0x10135f78 */
  push32((uint32_t)(0x10135f78u));
  /* 10124346 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012434cu);
  /* 1012434c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1012434e push 0xa */
  push32((uint32_t)(0xau));
  /* 10124350 push 0x10135f68 */
  push32((uint32_t)(0x10135f68u));
  /* 10124355 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012435bu);
  /* 1012435b add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012435e ret  */
  ESPCHK(0x10124310u, _esp0);
  ESP += 4; return;
}

/* FUN_10004360 @ 0x10124360 (127 bytes, 35 insns) */
void f_10124360(void) {
  FTRACE(0x10124360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10124360 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10124362 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10124364 push 0x101361d8 */
  push32((uint32_t)(0x101361d8u));
  /* 10124369 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012436fu);
  /* 1012436f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10124371 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10124373 push 0x101361d0 */
  push32((uint32_t)(0x101361d0u));
  /* 10124378 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012437eu);
  /* 1012437e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10124380 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10124382 push 0x101361a0 */
  push32((uint32_t)(0x101361a0u));
  /* 10124387 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012438du);
  /* 1012438d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1012438f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10124391 push 0x10136198 */
  push32((uint32_t)(0x10136198u));
  /* 10124396 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012439cu);
  /* 1012439c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1012439e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101243a0 push 0x10136098 */
  push32((uint32_t)(0x10136098u));
  /* 101243a5 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101243abu);
  /* 101243ab push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101243ad push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101243af push 0x101360a0 */
  push32((uint32_t)(0x101360a0u));
  /* 101243b4 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101243bau);
  /* 101243ba add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101243bd push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101243bf push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101243c1 push 0x101360a8 */
  push32((uint32_t)(0x101360a8u));
  /* 101243c6 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101243ccu);
  /* 101243cc push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101243ce push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101243d0 push 0x101360b0 */
  push32((uint32_t)(0x101360b0u));
  /* 101243d5 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101243dbu);
  /* 101243db add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101243de ret  */
  ESPCHK(0x10124360u, _esp0);
  ESP += 4; return;
}

/* ProcessMiddleSeaAI @ 0x101243e0 (3643 bytes, 1035 insns) */
void f_101243e0(void) {
  FTRACE(0x101243e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101243e0 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101243e3 push ebx */
  push32((uint32_t)(EBX));
  /* 101243e4 push ebp */
  push32((uint32_t)(EBP));
  /* 101243e5 push esi */
  push32((uint32_t)(ESI));
  /* 101243e6 push edi */
  push32((uint32_t)(EDI));
  /* 101243e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 101243e9 call 0x10122760 */
  push32(0x101243eeu); f_10122760();
  /* 101243ee push 0x1012f030 */
  push32((uint32_t)(0x1012f030u));
  /* 101243f3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101243f5 call dword ptr [0x1013650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013650c))), 0x101243fbu);
  /* 101243fb push 0x10136190 */
  push32((uint32_t)(0x10136190u));
  /* 10124400 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10124406u);
  /* 10124406 push 3 */
  push32((uint32_t)(0x3u));
  /* 10124408 mov ebx, eax */
  EBX = (EAX);
  /* 1012440a call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10124410u);
  /* 10124410 mov ebp, eax */
  EBP = (EAX);
  /* 10124412 push 0x101361b8 */
  push32((uint32_t)(0x101361b8u));
  /* 10124417 mov dword ptr [esp + 0x30], ebp */
  w32((uint32_t)(ESP + 0x30), (EBP));
  /* 1012441b call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x10124421u);
  /* 10124421 push 0x10133688 */
  push32((uint32_t)(0x10133688u));
  /* 10124426 mov byte ptr [esp + 0x2f], al */
  w8((uint32_t)(ESP + 0x2f), (AL));
  /* 1012442a call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10124430u);
  /* 10124430 push 0x10136020 */
  push32((uint32_t)(0x10136020u));
  /* 10124435 call dword ptr [0x1013654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013654c))), 0x1012443bu);
  /* 1012443b push 0x101360e0 */
  push32((uint32_t)(0x101360e0u));
  /* 10124440 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10124446u);
  /* 10124446 push 0x101363b0 */
  push32((uint32_t)(0x101363b0u));
  /* 1012444b call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10124451u);
  /* 10124451 push 0x10136330 */
  push32((uint32_t)(0x10136330u));
  /* 10124456 mov esi, eax */
  ESI = (EAX);
  /* 10124458 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x1012445eu);
  /* 1012445e push 0x10133688 */
  push32((uint32_t)(0x10133688u));
  /* 10124463 mov edi, eax */
  EDI = (EAX);
  /* 10124465 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x1012446bu);
  /* 1012446b add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012446d add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124470 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10124472 mov byte ptr [esp + 0x12], 1 */
  w8((uint32_t)(ESP + 0x12), (0x1u));
  /* 10124477 mov dword ptr [esp + 0x14], eax */
  w32((uint32_t)(ESP + 0x14), (EAX));
  /* 1012447b call 0x10122660 */
  push32(0x10124480u); f_10122660();
  /* 10124480 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10124482 jle 0x10124498 */
  if ((C.zf||C.sf!=C.of)) goto L_10124498;
  /* 10124484 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10124486 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10124488 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1012448a push 0x10136328 */
  push32((uint32_t)(0x10136328u));
  /* 1012448f call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10124495u);
  /* 10124495 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10124498:;
  /* 10124498 push 0x101338d8 */
  push32((uint32_t)(0x101338d8u));
  /* 1012449d call dword ptr [0x10136544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136544))), 0x101244a3u);
  /* 101244a3 push 0x101338d8 */
  push32((uint32_t)(0x101338d8u));
  /* 101244a8 mov esi, eax */
  ESI = (EAX);
  /* 101244aa call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x101244b0u);
  /* 101244b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101244b3 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101244b5 je 0x101244bc */
  if (C.zf) goto L_101244bc;
  /* 101244b7 mov byte ptr [esp + 0x12], 0 */
  w8((uint32_t)(ESP + 0x12), (0x0u));
L_101244bc:;
  /* 101244bc test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101244be je 0x10125213 */
  if (C.zf) goto L_10125213;
  /* 101244c4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101244c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101244c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 101244ca push 0x10135fd8 */
  push32((uint32_t)(0x10135fd8u));
  /* 101244cf call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x101244d5u);
  /* 101244d5 push 0x10135fd8 */
  push32((uint32_t)(0x10135fd8u));
  /* 101244da call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x101244e0u);
  /* 101244e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101244e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101244e5 je 0x10125213 */
  if (C.zf) goto L_10125213;
  /* 101244eb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101244ed push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101244ef push 0x10136378 */
  push32((uint32_t)(0x10136378u));
  /* 101244f4 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101244fau);
  /* 101244fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101244fd call dword ptr [0x10136570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136570))), 0x10124503u);
  /* 10124503 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10124505 jne 0x1012455c */
  if (!C.zf) goto L_1012455c;
  /* 10124507 cmp ebp, 0x2bc */
  { uint32_t _a=(EBP),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012450d jle 0x10124534 */
  if ((C.zf||C.sf!=C.of)) goto L_10124534;
  /* 1012450f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10124511 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10124513 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10124515 push 0x10136190 */
  push32((uint32_t)(0x10136190u));
  /* 1012451a call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10124520u);
  /* 10124520 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10124522 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10124524 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10124526 push 0x10133688 */
  push32((uint32_t)(0x10133688u));
  /* 1012452b call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10124531u);
  /* 10124531 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10124534:;
  /* 10124534 cmp ebp, 0x3e8 */
  { uint32_t _a=(EBP),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012453a jle 0x10124548 */
  if ((C.zf||C.sf!=C.of)) goto L_10124548;
  /* 1012453c cmp dword ptr [esp + 0x14], 0x1e */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10124541 jle 0x10124548 */
  if ((C.zf||C.sf!=C.of)) goto L_10124548;
  /* 10124543 call 0x10124230 */
  push32(0x10124548u); f_10124230();
L_10124548:;
  /* 10124548 push 1 */
  push32((uint32_t)(0x1u));
  /* 1012454a push 1 */
  push32((uint32_t)(0x1u));
  /* 1012454c push 0 */
  push32((uint32_t)(0x0u));
  /* 1012454e call dword ptr [0x10136514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136514))), 0x10124554u);
  /* 10124554 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124557 jmp 0x1012461f */
  goto L_1012461f;
L_1012455c:;
  /* 1012455c mov eax, dword ptr [0x10136594] */
  EAX = (r32((uint32_t)(0x10136594)));
  /* 10124561 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10124564 je 0x10124578 */
  if (C.zf) goto L_10124578;
  /* 10124566 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10124567 je 0x10124572 */
  if (C.zf) goto L_10124572;
  /* 10124569 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1012456a jne 0x101245a4 */
  if (!C.zf) goto L_101245a4;
  /* 1012456c push 9 */
  push32((uint32_t)(0x9u));
  /* 1012456e push 4 */
  push32((uint32_t)(0x4u));
  /* 10124570 jmp 0x10124599 */
  goto L_10124599;
L_10124572:;
  /* 10124572 push 4 */
  push32((uint32_t)(0x4u));
  /* 10124574 push 9 */
  push32((uint32_t)(0x9u));
  /* 10124576 jmp 0x10124599 */
  goto L_10124599;
L_10124578:;
  /* 10124578 cmp ebp, 0x2ee0 */
  { uint32_t _a=(EBP),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012457e jle 0x1012458f */
  if ((C.zf||C.sf!=C.of)) goto L_1012458f;
  /* 10124580 push 6 */
  push32((uint32_t)(0x6u));
  /* 10124582 push 6 */
  push32((uint32_t)(0x6u));
  /* 10124584 push 9 */
  push32((uint32_t)(0x9u));
  /* 10124586 call dword ptr [0x10136514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136514))), 0x1012458cu);
  /* 1012458c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1012458f:;
  /* 1012458f push 5 */
  push32((uint32_t)(0x5u));
  /* 10124591 cmp ebp, 0x1f40 */
  { uint32_t _a=(EBP),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10124597 push 5 */
  push32((uint32_t)(0x5u));
L_10124599:;
  /* 10124599 push 9 */
  push32((uint32_t)(0x9u));
  /* 1012459b call dword ptr [0x10136514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136514))), 0x101245a1u);
  /* 101245a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101245a4:;
  /* 101245a4 mov al, byte ptr [esp + 0x13] */
  AL = (r8((uint32_t)(ESP + 0x13)));
  /* 101245a8 mov esi, 0x1c2 */
  ESI = (0x1c2u);
  /* 101245ad test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101245af je 0x101245b6 */
  if (C.zf) goto L_101245b6;
  /* 101245b1 mov esi, 0x17c */
  ESI = (0x17cu);
L_101245b6:;
  /* 101245b6 cmp ebx, 0x19 */
  { uint32_t _a=(EBX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101245b9 jge 0x101245d7 */
  if ((C.sf==C.of)) goto L_101245d7;
  /* 101245bb cmp ebp, 0x12c */
  { uint32_t _a=(EBP),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101245c1 jle 0x10124613 */
  if ((C.zf||C.sf!=C.of)) goto L_10124613;
  /* 101245c3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101245c5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101245c7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101245c9 push 0x10136190 */
  push32((uint32_t)(0x10136190u));
  /* 101245ce call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x101245d4u);
  /* 101245d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101245d7:;
  /* 101245d7 cmp ebp, 0x12c */
  { uint32_t _a=(EBP),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101245dd jle 0x10124613 */
  if ((C.zf||C.sf!=C.of)) goto L_10124613;
  /* 101245df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101245e1 push 0xe8 */
  push32((uint32_t)(0xe8u));
  /* 101245e6 push esi */
  push32((uint32_t)(ESI));
  /* 101245e7 push 0x10136190 */
  push32((uint32_t)(0x10136190u));
  /* 101245ec call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x101245f2u);
  /* 101245f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101245f5 cmp ebp, 0x190 */
  { uint32_t _a=(EBP),_b=(0x190u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101245fb jle 0x10124613 */
  if ((C.zf||C.sf!=C.of)) goto L_10124613;
  /* 101245fd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101245ff push 0xf4 */
  push32((uint32_t)(0xf4u));
  /* 10124604 push esi */
  push32((uint32_t)(ESI));
  /* 10124605 push 0x10133688 */
  push32((uint32_t)(0x10133688u));
  /* 1012460a call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10124610u);
  /* 10124610 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10124613:;
  /* 10124613 cmp dword ptr [esp + 0x14], 0x1e */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10124618 jle 0x1012461f */
  if ((C.zf||C.sf!=C.of)) goto L_1012461f;
  /* 1012461a call 0x10124230 */
  push32(0x1012461fu); f_10124230();
L_1012461f:;
  /* 1012461f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10124621 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10124623 push 1 */
  push32((uint32_t)(0x1u));
  /* 10124625 push 0x10135fb8 */
  push32((uint32_t)(0x10135fb8u));
  /* 1012462a call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10124630u);
  /* 10124630 push 5 */
  push32((uint32_t)(0x5u));
  /* 10124632 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10124634 push 2 */
  push32((uint32_t)(0x2u));
  /* 10124636 push 0x10135fb8 */
  push32((uint32_t)(0x10135fb8u));
  /* 1012463b call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10124641u);
  /* 10124641 push 5 */
  push32((uint32_t)(0x5u));
  /* 10124643 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10124645 push 3 */
  push32((uint32_t)(0x3u));
  /* 10124647 push 0x10135fb8 */
  push32((uint32_t)(0x10135fb8u));
  /* 1012464c call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10124652u);
  /* 10124652 push 0x10136250 */
  push32((uint32_t)(0x10136250u));
  /* 10124657 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x1012465du);
  /* 1012465d add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124660 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10124663 jle 0x101246d6 */
  if ((C.zf||C.sf!=C.of)) goto L_101246d6;
  /* 10124665 push 5 */
  push32((uint32_t)(0x5u));
  /* 10124667 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10124669 push 2 */
  push32((uint32_t)(0x2u));
  /* 1012466b push 0x10135fb8 */
  push32((uint32_t)(0x10135fb8u));
  /* 10124670 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10124676u);
  /* 10124676 push 0x10135fb8 */
  push32((uint32_t)(0x10135fb8u));
  /* 1012467b call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10124681u);
  /* 10124681 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124684 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10124687 jle 0x1012469d */
  if ((C.zf||C.sf!=C.of)) goto L_1012469d;
  /* 10124689 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1012468b push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1012468d push 1 */
  push32((uint32_t)(0x1u));
  /* 1012468f push 0x101360d8 */
  push32((uint32_t)(0x101360d8u));
  /* 10124694 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x1012469au);
  /* 1012469a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1012469d:;
  /* 1012469d push 0x10135fb8 */
  push32((uint32_t)(0x10135fb8u));
  /* 101246a2 call dword ptr [0x10136544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136544))), 0x101246a8u);
  /* 101246a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101246ab cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101246ae jle 0x101246c4 */
  if ((C.zf||C.sf!=C.of)) goto L_101246c4;
  /* 101246b0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101246b2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101246b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 101246b6 push 0x10133878 */
  push32((uint32_t)(0x10133878u));
  /* 101246bb call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x101246c1u);
  /* 101246c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101246c4:;
  /* 101246c4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101246c6 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101246c8 push 0x10136110 */
  push32((uint32_t)(0x10136110u));
  /* 101246cd call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101246d3u);
  /* 101246d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101246d6:;
  /* 101246d6 push 0x10136190 */
  push32((uint32_t)(0x10136190u));
  /* 101246db call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x101246e1u);
  /* 101246e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101246e4 cmp eax, 0x23 */
  { uint32_t _a=(EAX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101246e7 jle 0x101246fd */
  if ((C.zf||C.sf!=C.of)) goto L_101246fd;
  /* 101246e9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101246eb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101246ed push 1 */
  push32((uint32_t)(0x1u));
  /* 101246ef push 0x10133878 */
  push32((uint32_t)(0x10133878u));
  /* 101246f4 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x101246fau);
  /* 101246fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101246fd:;
  /* 101246fd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101246ff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10124701 push 1 */
  push32((uint32_t)(0x1u));
  /* 10124703 push 0x101361e8 */
  push32((uint32_t)(0x101361e8u));
  /* 10124708 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x1012470eu);
  /* 1012470e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10124710 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10124712 push 1 */
  push32((uint32_t)(0x1u));
  /* 10124714 push 0x10136250 */
  push32((uint32_t)(0x10136250u));
  /* 10124719 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x1012471fu);
  /* 1012471f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10124721 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10124723 push 2 */
  push32((uint32_t)(0x2u));
  /* 10124725 push 0x10136250 */
  push32((uint32_t)(0x10136250u));
  /* 1012472a call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10124730u);
  /* 10124730 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10124732 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10124734 push 1 */
  push32((uint32_t)(0x1u));
  /* 10124736 push 0x10135fd0 */
  push32((uint32_t)(0x10135fd0u));
  /* 1012473b call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10124741u);
  /* 10124741 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124744 push 5 */
  push32((uint32_t)(0x5u));
  /* 10124746 push 0xa */
  push32((uint32_t)(0xau));
  /* 10124748 push 2 */
  push32((uint32_t)(0x2u));
  /* 1012474a push 0x101361e8 */
  push32((uint32_t)(0x101361e8u));
  /* 1012474f call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10124755u);
  /* 10124755 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10124757 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10124759 push 0x10133660 */
  push32((uint32_t)(0x10133660u));
  /* 1012475e call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10124764u);
  /* 10124764 push 0x10135f20 */
  push32((uint32_t)(0x10135f20u));
  /* 10124769 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x1012476fu);
  /* 1012476f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124772 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10124774 jle 0x1012478a */
  if ((C.zf||C.sf!=C.of)) goto L_1012478a;
  /* 10124776 push 3 */
  push32((uint32_t)(0x3u));
  /* 10124778 push 5 */
  push32((uint32_t)(0x5u));
  /* 1012477a push 1 */
  push32((uint32_t)(0x1u));
  /* 1012477c push 0x101360f8 */
  push32((uint32_t)(0x101360f8u));
  /* 10124781 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10124787u);
  /* 10124787 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1012478a:;
  /* 1012478a call dword ptr [0x10136570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136570))), 0x10124790u);
  /* 10124790 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10124792 je 0x101247a8 */
  if (C.zf) goto L_101247a8;
  /* 10124794 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10124796 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10124798 push 1 */
  push32((uint32_t)(0x1u));
  /* 1012479a push 0x10135f20 */
  push32((uint32_t)(0x10135f20u));
  /* 1012479f call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x101247a5u);
  /* 101247a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101247a8:;
  /* 101247a8 push 0xa */
  push32((uint32_t)(0xau));
  /* 101247aa push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101247ac push 1 */
  push32((uint32_t)(0x1u));
  /* 101247ae push 0x10135fe8 */
  push32((uint32_t)(0x10135fe8u));
  /* 101247b3 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x101247b9u);
  /* 101247b9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101247bb push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101247bd push 1 */
  push32((uint32_t)(0x1u));
  /* 101247bf push 0x10133618 */
  push32((uint32_t)(0x10133618u));
  /* 101247c4 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x101247cau);
  /* 101247ca add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101247cd cmp ebx, 0x19 */
  { uint32_t _a=(EBX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101247d0 jle 0x101247e6 */
  if ((C.zf||C.sf!=C.of)) goto L_101247e6;
  /* 101247d2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101247d4 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101247d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 101247d8 push 0x10135fd8 */
  push32((uint32_t)(0x10135fd8u));
  /* 101247dd call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x101247e3u);
  /* 101247e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101247e6:;
  /* 101247e6 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101247e8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101247ea push 1 */
  push32((uint32_t)(0x1u));
  /* 101247ec push 0x10136258 */
  push32((uint32_t)(0x10136258u));
  /* 101247f1 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x101247f7u);
  /* 101247f7 push 5 */
  push32((uint32_t)(0x5u));
  /* 101247f9 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101247fb push 2 */
  push32((uint32_t)(0x2u));
  /* 101247fd push 0x10136258 */
  push32((uint32_t)(0x10136258u));
  /* 10124802 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10124808u);
  /* 10124808 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1012480a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1012480c push 0x10136078 */
  push32((uint32_t)(0x10136078u));
  /* 10124811 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10124817u);
  /* 10124817 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10124819 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1012481b push 0x10136270 */
  push32((uint32_t)(0x10136270u));
  /* 10124820 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10124826u);
  /* 10124826 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10124828 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1012482a push 0x101361b8 */
  push32((uint32_t)(0x101361b8u));
  /* 1012482f call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10124835u);
  /* 10124835 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124838 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1012483a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1012483c push 0x10136040 */
  push32((uint32_t)(0x10136040u));
  /* 10124841 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10124847u);
  /* 10124847 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10124849 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1012484b push 0x10136030 */
  push32((uint32_t)(0x10136030u));
  /* 10124850 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10124856u);
  /* 10124856 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10124858 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1012485a push 0x10136038 */
  push32((uint32_t)(0x10136038u));
  /* 1012485f call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10124865u);
  /* 10124865 push 0x101360d8 */
  push32((uint32_t)(0x101360d8u));
  /* 1012486a call dword ptr [0x10136544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136544))), 0x10124870u);
  /* 10124870 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124873 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10124875 je 0x10124934 */
  if (C.zf) goto L_10124934;
  /* 1012487b push 0x101361b8 */
  push32((uint32_t)(0x101361b8u));
  /* 10124880 call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x10124886u);
  /* 10124886 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124889 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1012488b jne 0x10124934 */
  if (!C.zf) goto L_10124934;
  /* 10124891 push 1 */
  push32((uint32_t)(0x1u));
  /* 10124893 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10124899u);
  /* 10124899 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012489c cmp eax, 0xe74 */
  { uint32_t _a=(EAX),_b=(0xe74u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101248a1 jle 0x101248c7 */
  if ((C.zf||C.sf!=C.of)) goto L_101248c7;
  /* 101248a3 push 4 */
  push32((uint32_t)(0x4u));
  /* 101248a5 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x101248abu);
  /* 101248ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101248ae cmp eax, 0x157c */
  { uint32_t _a=(EAX),_b=(0x157cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101248b3 jle 0x101248c7 */
  if ((C.zf||C.sf!=C.of)) goto L_101248c7;
  /* 101248b5 push 5 */
  push32((uint32_t)(0x5u));
  /* 101248b7 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x101248bdu);
  /* 101248bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101248c0 cmp eax, 0x20d0 */
  { uint32_t _a=(EAX),_b=(0x20d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101248c5 jg 0x10124934 */
  if ((!C.zf&&C.sf==C.of)) goto L_10124934;
L_101248c7:;
  /* 101248c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 101248c9 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x101248cfu);
  /* 101248cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101248d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101248d4 je 0x1012495b */
  if (C.zf) goto L_1012495b;
  /* 101248da push 5 */
  push32((uint32_t)(0x5u));
  /* 101248dc call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x101248e2u);
  /* 101248e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101248e5 cmp eax, 0x20d0 */
  { uint32_t _a=(EAX),_b=(0x20d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101248ea jle 0x1012495b */
  if ((C.zf||C.sf!=C.of)) goto L_1012495b;
  /* 101248ec push 5 */
  push32((uint32_t)(0x5u));
  /* 101248ee call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x101248f4u);
  /* 101248f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101248f7 cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101248fc jle 0x1012490f */
  if ((C.zf||C.sf!=C.of)) goto L_1012490f;
  /* 101248fe push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10124903 push 1 */
  push32((uint32_t)(0x1u));
  /* 10124905 push 5 */
  push32((uint32_t)(0x5u));
  /* 10124907 call 0x10122610 */
  push32(0x1012490cu); f_10122610();
  /* 1012490c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1012490f:;
  /* 1012490f push 4 */
  push32((uint32_t)(0x4u));
  /* 10124911 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10124917u);
  /* 10124917 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012491a cmp eax, 0x32c8 */
  { uint32_t _a=(EAX),_b=(0x32c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012491f jle 0x1012495b */
  if ((C.zf||C.sf!=C.of)) goto L_1012495b;
  /* 10124921 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10124926 push 1 */
  push32((uint32_t)(0x1u));
  /* 10124928 push 4 */
  push32((uint32_t)(0x4u));
  /* 1012492a call 0x10122610 */
  push32(0x1012492fu); f_10122610();
  /* 1012492f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124932 jmp 0x1012495b */
  goto L_1012495b;
L_10124934:;
  /* 10124934 push 0 */
  push32((uint32_t)(0x0u));
  /* 10124936 push 1 */
  push32((uint32_t)(0x1u));
  /* 10124938 call 0x101225f0 */
  push32(0x1012493du); f_101225f0();
  /* 1012493d push 0 */
  push32((uint32_t)(0x0u));
  /* 1012493f push 4 */
  push32((uint32_t)(0x4u));
  /* 10124941 call 0x101225f0 */
  push32(0x10124946u); f_101225f0();
  /* 10124946 push 0 */
  push32((uint32_t)(0x0u));
  /* 10124948 push 3 */
  push32((uint32_t)(0x3u));
  /* 1012494a call 0x101225f0 */
  push32(0x1012494fu); f_101225f0();
  /* 1012494f push 0 */
  push32((uint32_t)(0x0u));
  /* 10124951 push 1 */
  push32((uint32_t)(0x1u));
  /* 10124953 call 0x101225f0 */
  push32(0x10124958u); f_101225f0();
  /* 10124958 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1012495b:;
  /* 1012495b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1012495d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1012495f push 0x101337a0 */
  push32((uint32_t)(0x101337a0u));
  /* 10124964 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012496au);
  /* 1012496a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1012496c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1012496e push 1 */
  push32((uint32_t)(0x1u));
  /* 10124970 push 0x101362d8 */
  push32((uint32_t)(0x101362d8u));
  /* 10124975 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x1012497bu);
  /* 1012497b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1012497d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1012497f push 2 */
  push32((uint32_t)(0x2u));
  /* 10124981 push 0x101362d8 */
  push32((uint32_t)(0x101362d8u));
  /* 10124986 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x1012498cu);
  /* 1012498c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1012498e push 0xa */
  push32((uint32_t)(0xau));
  /* 10124990 push 3 */
  push32((uint32_t)(0x3u));
  /* 10124992 push 0x101362d8 */
  push32((uint32_t)(0x101362d8u));
  /* 10124997 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x1012499du);
  /* 1012499d push 0x10133958 */
  push32((uint32_t)(0x10133958u));
  /* 101249a2 call dword ptr [0x1013654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013654c))), 0x101249a8u);
  /* 101249a8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101249ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101249ad jne 0x101249f8 */
  if (!C.zf) goto L_101249f8;
  /* 101249af push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 101249b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 101249b3 call 0x10122640 */
  push32(0x101249b8u); f_10122640();
  /* 101249b8 mov esi, eax */
  ESI = (EAX);
  /* 101249ba push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 101249bc push 0 */
  push32((uint32_t)(0x0u));
  /* 101249be sar esi, 2 */
  ESI = (sh_sar((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 101249c1 call 0x10122640 */
  push32(0x101249c6u); f_10122640();
  /* 101249c6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 101249c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 101249ca add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101249cc call 0x10122640 */
  push32(0x101249d1u); f_10122640();
  /* 101249d1 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101249d3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101249d6 cmp esi, 6 */
  { uint32_t _a=(ESI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101249d9 jle 0x101249e8 */
  if ((C.zf||C.sf!=C.of)) goto L_101249e8;
  /* 101249db push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101249dd push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101249df push 6 */
  push32((uint32_t)(0x6u));
  /* 101249e1 push 0x10135f90 */
  push32((uint32_t)(0x10135f90u));
  /* 101249e6 jmp 0x10124a03 */
  goto L_10124a03;
L_101249e8:;
  /* 101249e8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101249ea je 0x10124a0c */
  if (C.zf) goto L_10124a0c;
  /* 101249ec push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101249ee push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101249f0 push esi */
  push32((uint32_t)(ESI));
  /* 101249f1 push 0x10135f90 */
  push32((uint32_t)(0x10135f90u));
  /* 101249f6 jmp 0x10124a03 */
  goto L_10124a03;
L_101249f8:;
  /* 101249f8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101249fa push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101249fc push 0xa */
  push32((uint32_t)(0xau));
  /* 101249fe push 0x101338e8 */
  push32((uint32_t)(0x101338e8u));
L_10124a03:;
  /* 10124a03 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10124a09u);
  /* 10124a09 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10124a0c:;
  /* 10124a0c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10124a0e push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10124a10 push 0x10133958 */
  push32((uint32_t)(0x10133958u));
  /* 10124a15 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10124a1bu);
  /* 10124a1b push 0x10136270 */
  push32((uint32_t)(0x10136270u));
  /* 10124a20 call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x10124a26u);
  /* 10124a26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124a29 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10124a2b je 0x10124a4e */
  if (C.zf) goto L_10124a4e;
  /* 10124a2d push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10124a2f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10124a31 push 0x10133958 */
  push32((uint32_t)(0x10133958u));
  /* 10124a36 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10124a3cu);
  /* 10124a3c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10124a3e push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10124a40 push 0x10133870 */
  push32((uint32_t)(0x10133870u));
  /* 10124a45 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10124a4bu);
  /* 10124a4b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10124a4e:;
  /* 10124a4e push 0x10133958 */
  push32((uint32_t)(0x10133958u));
  /* 10124a53 call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x10124a59u);
  /* 10124a59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124a5c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10124a5e je 0x10124a86 */
  if (C.zf) goto L_10124a86;
  /* 10124a60 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10124a62 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10124a64 push 0x10133940 */
  push32((uint32_t)(0x10133940u));
  /* 10124a69 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10124a6fu);
  /* 10124a6f push 0xa */
  push32((uint32_t)(0xau));
  /* 10124a71 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10124a73 push 0x10133880 */
  push32((uint32_t)(0x10133880u));
  /* 10124a78 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10124a7eu);
  /* 10124a7e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124a81 call 0x10123320 */
  push32(0x10124a86u); f_10123320();
L_10124a86:;
  /* 10124a86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10124a88 push 1 */
  push32((uint32_t)(0x1u));
  /* 10124a8a call 0x101225f0 */
  push32(0x10124a8fu); f_101225f0();
  /* 10124a8f push 0 */
  push32((uint32_t)(0x0u));
  /* 10124a91 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10124a97u);
  /* 10124a97 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124a9a cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10124a9f jle 0x10124ae3 */
  if ((C.zf||C.sf!=C.of)) goto L_10124ae3;
  /* 10124aa1 push 0x101337a0 */
  push32((uint32_t)(0x101337a0u));
  /* 10124aa6 call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x10124aacu);
  /* 10124aac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124aaf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10124ab1 je 0x10124ae3 */
  if (C.zf) goto L_10124ae3;
  /* 10124ab3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10124ab5 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10124abbu);
  /* 10124abb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124abe cmp eax, 0x1d4c */
  { uint32_t _a=(EAX),_b=(0x1d4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10124ac3 jge 0x10124ae3 */
  if ((C.sf==C.of)) goto L_10124ae3;
  /* 10124ac5 push 0x10133958 */
  push32((uint32_t)(0x10133958u));
  /* 10124aca call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x10124ad0u);
  /* 10124ad0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124ad3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10124ad5 jne 0x10124ae3 */
  if (!C.zf) goto L_10124ae3;
  /* 10124ad7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10124ad9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10124adb call 0x101225f0 */
  push32(0x10124ae0u); f_101225f0();
  /* 10124ae0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10124ae3:;
  /* 10124ae3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10124ae5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10124ae7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10124ae9 push 0x101361f0 */
  push32((uint32_t)(0x101361f0u));
  /* 10124aee call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10124af4u);
  /* 10124af4 push 0x101360f0 */
  push32((uint32_t)(0x101360f0u));
  /* 10124af9 call dword ptr [0x1013654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013654c))), 0x10124affu);
  /* 10124aff add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124b02 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10124b04 je 0x10124b1a */
  if (C.zf) goto L_10124b1a;
  /* 10124b06 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10124b08 push 0xa */
  push32((uint32_t)(0xau));
  /* 10124b0a push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10124b0c push 0x101361f0 */
  push32((uint32_t)(0x101361f0u));
  /* 10124b11 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10124b17u);
  /* 10124b17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10124b1a:;
  /* 10124b1a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10124b1c push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10124b1e push 0x101360f0 */
  push32((uint32_t)(0x101360f0u));
  /* 10124b23 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10124b29u);
  /* 10124b29 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10124b2b push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10124b2d push 0x10136100 */
  push32((uint32_t)(0x10136100u));
  /* 10124b32 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10124b38u);
  /* 10124b38 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10124b3a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10124b3c push 0x101362e8 */
  push32((uint32_t)(0x101362e8u));
  /* 10124b41 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10124b47u);
  /* 10124b47 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10124b49 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10124b4b push 0x101362d0 */
  push32((uint32_t)(0x101362d0u));
  /* 10124b50 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10124b56u);
  /* 10124b56 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10124b58 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10124b5a push 0x101362e0 */
  push32((uint32_t)(0x101362e0u));
  /* 10124b5f call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10124b65u);
  /* 10124b65 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10124b67 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10124b69 push 0x101362c0 */
  push32((uint32_t)(0x101362c0u));
  /* 10124b6e call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10124b74u);
  /* 10124b74 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124b77 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10124b79 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10124b7b push 0x101362c8 */
  push32((uint32_t)(0x101362c8u));
  /* 10124b80 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10124b86u);
  /* 10124b86 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10124b88 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10124b8a push 0x101362b8 */
  push32((uint32_t)(0x101362b8u));
  /* 10124b8f call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10124b95u);
  /* 10124b95 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124b98 cmp ebx, 0x23 */
  { uint32_t _a=(EBX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10124b9b jle 0x10124bf4 */
  if ((C.zf||C.sf!=C.of)) goto L_10124bf4;
  /* 10124b9d mov al, byte ptr [esp + 0x12] */
  AL = (r8((uint32_t)(ESP + 0x12)));
  /* 10124ba1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10124ba3 je 0x10124bf4 */
  if (C.zf) goto L_10124bf4;
  /* 10124ba5 push 0xa */
  push32((uint32_t)(0xau));
  /* 10124ba7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10124ba9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10124bab push 0x101338d8 */
  push32((uint32_t)(0x101338d8u));
  /* 10124bb0 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10124bb6u);
  /* 10124bb6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124bb9 cmp ebx, 0x3c */
  { uint32_t _a=(EBX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10124bbc jle 0x10124bf4 */
  if ((C.zf||C.sf!=C.of)) goto L_10124bf4;
  /* 10124bbe push 0xa */
  push32((uint32_t)(0xau));
  /* 10124bc0 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10124bc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10124bc4 push 0x101338d8 */
  push32((uint32_t)(0x101338d8u));
  /* 10124bc9 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10124bcfu);
  /* 10124bcf push 0xa */
  push32((uint32_t)(0xau));
  /* 10124bd1 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10124bd3 push 3 */
  push32((uint32_t)(0x3u));
  /* 10124bd5 push 0x101338d8 */
  push32((uint32_t)(0x101338d8u));
  /* 10124bda call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10124be0u);
  /* 10124be0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10124be2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10124be4 push 4 */
  push32((uint32_t)(0x4u));
  /* 10124be6 push 0x101338d8 */
  push32((uint32_t)(0x101338d8u));
  /* 10124beb call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10124bf1u);
  /* 10124bf1 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10124bf4:;
  /* 10124bf4 mov bl, byte ptr [esp + 0x13] */
  BL = (r8((uint32_t)(ESP + 0x13)));
  /* 10124bf8 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10124bfa je 0x10124cde */
  if (C.zf) goto L_10124cde;
  /* 10124c00 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10124c02 push 0xa */
  push32((uint32_t)(0xau));
  /* 10124c04 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10124c06 push 0x101338c8 */
  push32((uint32_t)(0x101338c8u));
  /* 10124c0b call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10124c11u);
  /* 10124c11 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10124c13 push 1 */
  push32((uint32_t)(0x1u));
  /* 10124c15 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10124c17 push 0x10136160 */
  push32((uint32_t)(0x10136160u));
  /* 10124c1c call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10124c22u);
  /* 10124c22 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10124c24 push 1 */
  push32((uint32_t)(0x1u));
  /* 10124c26 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10124c28 push 0x10136278 */
  push32((uint32_t)(0x10136278u));
  /* 10124c2d call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10124c33u);
  /* 10124c33 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10124c35 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10124c37 push 0x10133630 */
  push32((uint32_t)(0x10133630u));
  /* 10124c3c call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10124c42u);
  /* 10124c42 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10124c44 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10124c46 push 0x10133708 */
  push32((uint32_t)(0x10133708u));
  /* 10124c4b call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10124c51u);
  /* 10124c51 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124c54 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10124c56 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10124c58 push 0x10133628 */
  push32((uint32_t)(0x10133628u));
  /* 10124c5d call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10124c63u);
  /* 10124c63 push 0x10136198 */
  push32((uint32_t)(0x10136198u));
  /* 10124c68 call dword ptr [0x1013654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013654c))), 0x10124c6eu);
  /* 10124c6e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124c71 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10124c73 je 0x10124c89 */
  if (C.zf) goto L_10124c89;
  /* 10124c75 push 0xa */
  push32((uint32_t)(0xau));
  /* 10124c77 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10124c79 push 5 */
  push32((uint32_t)(0x5u));
  /* 10124c7b push 0x10136370 */
  push32((uint32_t)(0x10136370u));
  /* 10124c80 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10124c86u);
  /* 10124c86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10124c89:;
  /* 10124c89 push 0x101360b0 */
  push32((uint32_t)(0x101360b0u));
  /* 10124c8e call dword ptr [0x1013654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013654c))), 0x10124c94u);
  /* 10124c94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124c97 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10124c99 je 0x10124caf */
  if (C.zf) goto L_10124caf;
  /* 10124c9b push 0xa */
  push32((uint32_t)(0xau));
  /* 10124c9d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10124c9f push 0xa */
  push32((uint32_t)(0xau));
  /* 10124ca1 push 0x10133668 */
  push32((uint32_t)(0x10133668u));
  /* 10124ca6 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10124cacu);
  /* 10124cac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10124caf:;
  /* 10124caf call 0x10124360 */
  push32(0x10124cb4u); f_10124360();
L_10124cb4:;
  /* 10124cb4 push 0x10136020 */
  push32((uint32_t)(0x10136020u));
  /* 10124cb9 call dword ptr [0x1013654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013654c))), 0x10124cbfu);
  /* 10124cbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124cc2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10124cc4 je 0x10124d14 */
  if (C.zf) goto L_10124d14;
  /* 10124cc6 push 0x10136100 */
  push32((uint32_t)(0x10136100u));
  /* 10124ccb call dword ptr [0x1013654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013654c))), 0x10124cd1u);
  /* 10124cd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124cd4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10124cd6 jne 0x10124d05 */
  if (!C.zf) goto L_10124d05;
  /* 10124cd8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10124cda push 2 */
  push32((uint32_t)(0x2u));
  /* 10124cdc jmp 0x10124d09 */
  goto L_10124d09;
L_10124cde:;
  /* 10124cde push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10124ce0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10124ce2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10124ce4 push 0x10136160 */
  push32((uint32_t)(0x10136160u));
  /* 10124ce9 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10124cefu);
  /* 10124cef push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10124cf1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10124cf3 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10124cf5 push 0x10136278 */
  push32((uint32_t)(0x10136278u));
  /* 10124cfa call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10124d00u);
  /* 10124d00 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124d03 jmp 0x10124cb4 */
  goto L_10124cb4;
L_10124d05:;
  /* 10124d05 push 4 */
  push32((uint32_t)(0x4u));
  /* 10124d07 push 4 */
  push32((uint32_t)(0x4u));
L_10124d09:;
  /* 10124d09 push 8 */
  push32((uint32_t)(0x8u));
  /* 10124d0b call dword ptr [0x10136514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136514))), 0x10124d11u);
  /* 10124d11 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10124d14:;
  /* 10124d14 push 0x101360d8 */
  push32((uint32_t)(0x101360d8u));
  /* 10124d19 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10124d1fu);
  /* 10124d1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124d22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10124d24 je 0x10124d3a */
  if (C.zf) goto L_10124d3a;
  /* 10124d26 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10124d28 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10124d2a push 6 */
  push32((uint32_t)(0x6u));
  /* 10124d2c push 0x101361f0 */
  push32((uint32_t)(0x101361f0u));
  /* 10124d31 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10124d37u);
  /* 10124d37 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10124d3a:;
  /* 10124d3a push 0x101360f0 */
  push32((uint32_t)(0x101360f0u));
  /* 10124d3f call dword ptr [0x1013654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013654c))), 0x10124d45u);
  /* 10124d45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124d48 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10124d4a je 0x10124d60 */
  if (C.zf) goto L_10124d60;
  /* 10124d4c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10124d4e push 0xa */
  push32((uint32_t)(0xau));
  /* 10124d50 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10124d52 push 0x101361f0 */
  push32((uint32_t)(0x101361f0u));
  /* 10124d57 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10124d5du);
  /* 10124d5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10124d60:;
  /* 10124d60 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10124d62 je 0x10124e63 */
  if (C.zf) goto L_10124e63;
  /* 10124d68 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10124d6a push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10124d6c push 2 */
  push32((uint32_t)(0x2u));
  /* 10124d6e push 0x101360d8 */
  push32((uint32_t)(0x101360d8u));
  /* 10124d73 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10124d79u);
  /* 10124d79 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10124d7b push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10124d7d push 3 */
  push32((uint32_t)(0x3u));
  /* 10124d7f push 0x101360d8 */
  push32((uint32_t)(0x101360d8u));
  /* 10124d84 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10124d8au);
  /* 10124d8a push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10124d8c push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10124d8e push 4 */
  push32((uint32_t)(0x4u));
  /* 10124d90 push 0x101360d8 */
  push32((uint32_t)(0x101360d8u));
  /* 10124d95 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10124d9bu);
  /* 10124d9b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10124d9d push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10124d9f push 5 */
  push32((uint32_t)(0x5u));
  /* 10124da1 push 0x101360d8 */
  push32((uint32_t)(0x101360d8u));
  /* 10124da6 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10124dacu);
  /* 10124dac add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124daf push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10124db1 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10124db3 push 6 */
  push32((uint32_t)(0x6u));
  /* 10124db5 push 0x101360d8 */
  push32((uint32_t)(0x101360d8u));
  /* 10124dba call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10124dc0u);
  /* 10124dc0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10124dc2 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10124dc4 push 0x10136020 */
  push32((uint32_t)(0x10136020u));
  /* 10124dc9 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10124dcfu);
  /* 10124dcf push 0x101360e0 */
  push32((uint32_t)(0x101360e0u));
  /* 10124dd4 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10124ddau);
  /* 10124dda add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124ddd cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10124de0 jle 0x10124e03 */
  if ((C.zf||C.sf!=C.of)) goto L_10124e03;
  /* 10124de2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10124de4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10124de6 push 0x10136208 */
  push32((uint32_t)(0x10136208u));
  /* 10124deb call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10124df1u);
  /* 10124df1 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10124df3 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10124df5 push 0x10136210 */
  push32((uint32_t)(0x10136210u));
  /* 10124dfa call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10124e00u);
  /* 10124e00 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10124e03:;
  /* 10124e03 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10124e05 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10124e07 push 0x101360f0 */
  push32((uint32_t)(0x101360f0u));
  /* 10124e0c call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10124e12u);
  /* 10124e12 push 0x10133908 */
  push32((uint32_t)(0x10133908u));
  /* 10124e17 call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x10124e1du);
  /* 10124e1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124e20 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10124e22 je 0x10124e63 */
  if (C.zf) goto L_10124e63;
  /* 10124e24 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10124e26 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10124e28 push 0x10136168 */
  push32((uint32_t)(0x10136168u));
  /* 10124e2d call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10124e33u);
  /* 10124e33 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10124e35 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10124e37 push 0x10136178 */
  push32((uint32_t)(0x10136178u));
  /* 10124e3c call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10124e42u);
  /* 10124e42 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10124e44 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10124e46 push 0x10136180 */
  push32((uint32_t)(0x10136180u));
  /* 10124e4b call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10124e51u);
  /* 10124e51 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10124e53 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10124e55 push 0x10136170 */
  push32((uint32_t)(0x10136170u));
  /* 10124e5a call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10124e60u);
  /* 10124e60 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10124e63:;
  /* 10124e63 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10124e65 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10124e67 push 0x101337a0 */
  push32((uint32_t)(0x101337a0u));
  /* 10124e6c call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10124e72u);
  /* 10124e72 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10124e74 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10124e76 push 0x101338e0 */
  push32((uint32_t)(0x101338e0u));
  /* 10124e7b call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10124e81u);
  /* 10124e81 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10124e83 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10124e85 push 0x10136150 */
  push32((uint32_t)(0x10136150u));
  /* 10124e8a call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10124e90u);
  /* 10124e90 mov eax, dword ptr [esp + 0x38] */
  EAX = (r32((uint32_t)(ESP + 0x38)));
  /* 10124e94 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124e97 cmp eax, 0x15e */
  { uint32_t _a=(EAX),_b=(0x15eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10124e9c jle 0x10124eba */
  if ((C.zf||C.sf!=C.of)) goto L_10124eba;
  /* 10124e9e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10124ea0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10124ea2 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10124ea7 push 0x101360e0 */
  push32((uint32_t)(0x101360e0u));
  /* 10124eac call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10124eb2u);
  /* 10124eb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124eb5 call 0x10124310 */
  push32(0x10124ebau); f_10124310();
L_10124eba:;
  /* 10124eba push 0x10133878 */
  push32((uint32_t)(0x10133878u));
  /* 10124ebf call dword ptr [0x10136544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136544))), 0x10124ec5u);
  /* 10124ec5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124ec8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10124eca je 0x10125213 */
  if (C.zf) goto L_10125213;
  /* 10124ed0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10124ed2 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10124ed8u);
  /* 10124ed8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10124eda mov edi, eax */
  EDI = (EAX);
  /* 10124edc call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10124ee2u);
  /* 10124ee2 push 4 */
  push32((uint32_t)(0x4u));
  /* 10124ee4 mov esi, eax */
  ESI = (EAX);
  /* 10124ee6 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10124eecu);
  /* 10124eec push 5 */
  push32((uint32_t)(0x5u));
  /* 10124eee mov ebp, eax */
  EBP = (EAX);
  /* 10124ef0 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10124ef6u);
  /* 10124ef6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10124ef8 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 10124efc call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10124f02u);
  /* 10124f02 mov ebx, eax */
  EBX = (EAX);
  /* 10124f04 mov eax, dword ptr [esp + 0x2c] */
  EAX = (r32((uint32_t)(ESP + 0x2c)));
  /* 10124f08 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124f0b cmp eax, 0x96 */
  { uint32_t _a=(EAX),_b=(0x96u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10124f10 jge 0x10124fa3 */
  if ((C.sf==C.of)) goto L_10124fa3;
  /* 10124f16 cmp esi, 0x1388 */
  { uint32_t _a=(ESI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10124f1c jle 0x10124f29 */
  if ((C.zf||C.sf!=C.of)) goto L_10124f29;
  /* 10124f1e push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10124f23 push 3 */
  push32((uint32_t)(0x3u));
  /* 10124f25 push 2 */
  push32((uint32_t)(0x2u));
  /* 10124f27 jmp 0x10124f9b */
  goto L_10124f9b;
L_10124f29:;
  /* 10124f29 cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10124f2f jle 0x10124f3c */
  if ((C.zf||C.sf!=C.of)) goto L_10124f3c;
  /* 10124f31 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 10124f36 push 3 */
  push32((uint32_t)(0x3u));
  /* 10124f38 push 2 */
  push32((uint32_t)(0x2u));
  /* 10124f3a jmp 0x10124f9b */
  goto L_10124f9b;
L_10124f3c:;
  /* 10124f3c cmp edi, 0x1388 */
  { uint32_t _a=(EDI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10124f42 jle 0x10124f4f */
  if ((C.zf||C.sf!=C.of)) goto L_10124f4f;
  /* 10124f44 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10124f49 push 3 */
  push32((uint32_t)(0x3u));
  /* 10124f4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10124f4d jmp 0x10124f9b */
  goto L_10124f9b;
L_10124f4f:;
  /* 10124f4f cmp edi, 0x3e8 */
  { uint32_t _a=(EDI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10124f55 jle 0x10124f62 */
  if ((C.zf||C.sf!=C.of)) goto L_10124f62;
  /* 10124f57 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 10124f5c push 3 */
  push32((uint32_t)(0x3u));
  /* 10124f5e push 0 */
  push32((uint32_t)(0x0u));
  /* 10124f60 jmp 0x10124f9b */
  goto L_10124f9b;
L_10124f62:;
  /* 10124f62 cmp dword ptr [esp + 0x14], 0x7d0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10124f6a jle 0x10124f77 */
  if ((C.zf||C.sf!=C.of)) goto L_10124f77;
  /* 10124f6c push 0x320 */
  push32((uint32_t)(0x320u));
  /* 10124f71 push 3 */
  push32((uint32_t)(0x3u));
  /* 10124f73 push 5 */
  push32((uint32_t)(0x5u));
  /* 10124f75 jmp 0x10124f9b */
  goto L_10124f9b;
L_10124f77:;
  /* 10124f77 cmp ebp, 0x7d0 */
  { uint32_t _a=(EBP),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10124f7d jle 0x10124f8a */
  if ((C.zf||C.sf!=C.of)) goto L_10124f8a;
  /* 10124f7f push 0x320 */
  push32((uint32_t)(0x320u));
  /* 10124f84 push 3 */
  push32((uint32_t)(0x3u));
  /* 10124f86 push 4 */
  push32((uint32_t)(0x4u));
  /* 10124f88 jmp 0x10124f9b */
  goto L_10124f9b;
L_10124f8a:;
  /* 10124f8a cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10124f90 jle 0x10124fa3 */
  if ((C.zf||C.sf!=C.of)) goto L_10124fa3;
  /* 10124f92 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10124f97 push 3 */
  push32((uint32_t)(0x3u));
  /* 10124f99 push 1 */
  push32((uint32_t)(0x1u));
L_10124f9b:;
  /* 10124f9b call 0x10122610 */
  push32(0x10124fa0u); f_10122610();
  /* 10124fa0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10124fa3:;
  /* 10124fa3 push 0x10135f20 */
  push32((uint32_t)(0x10135f20u));
  /* 10124fa8 call dword ptr [0x10136544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136544))), 0x10124faeu);
  /* 10124fae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124fb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10124fb3 je 0x10125003 */
  if (C.zf) goto L_10125003;
  /* 10124fb5 cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10124fbb jle 0x10125003 */
  if ((C.zf||C.sf!=C.of)) goto L_10125003;
  /* 10124fbd push 0x10136270 */
  push32((uint32_t)(0x10136270u));
  /* 10124fc2 call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x10124fc8u);
  /* 10124fc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10124fcb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10124fcd jne 0x10125003 */
  if (!C.zf) goto L_10125003;
  /* 10124fcf cmp ebp, 0xbb8 */
  { uint32_t _a=(EBP),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10124fd5 jle 0x10124fe8 */
  if ((C.zf||C.sf!=C.of)) goto L_10124fe8;
  /* 10124fd7 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10124fdc push 3 */
  push32((uint32_t)(0x3u));
  /* 10124fde push 4 */
  push32((uint32_t)(0x4u));
  /* 10124fe0 call 0x10122610 */
  push32(0x10124fe5u); f_10122610();
  /* 10124fe5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10124fe8:;
  /* 10124fe8 cmp dword ptr [esp + 0x14], 0xfa0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10124ff0 jle 0x10125003 */
  if ((C.zf||C.sf!=C.of)) goto L_10125003;
  /* 10124ff2 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10124ff7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10124ff9 push 5 */
  push32((uint32_t)(0x5u));
  /* 10124ffb call 0x10122610 */
  push32(0x10125000u); f_10122610();
  /* 10125000 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10125003:;
  /* 10125003 push 2 */
  push32((uint32_t)(0x2u));
  /* 10125005 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x1012500bu);
  /* 1012500b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012500e cmp eax, 0x1d4c0 */
  { uint32_t _a=(EAX),_b=(0x1d4c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10125013 jle 0x10125026 */
  if ((C.zf||C.sf!=C.of)) goto L_10125026;
  /* 10125015 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 1012501a push 1 */
  push32((uint32_t)(0x1u));
  /* 1012501c push 2 */
  push32((uint32_t)(0x2u));
  /* 1012501e call 0x10122610 */
  push32(0x10125023u); f_10122610();
  /* 10125023 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10125026:;
  /* 10125026 push 0 */
  push32((uint32_t)(0x0u));
  /* 10125028 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x1012502eu);
  /* 1012502e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125031 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10125036 jle 0x10125049 */
  if ((C.zf||C.sf!=C.of)) goto L_10125049;
  /* 10125038 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 1012503d push 1 */
  push32((uint32_t)(0x1u));
  /* 1012503f push 0 */
  push32((uint32_t)(0x0u));
  /* 10125041 call 0x10122610 */
  push32(0x10125046u); f_10122610();
  /* 10125046 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10125049:;
  /* 10125049 push 0x101361e8 */
  push32((uint32_t)(0x101361e8u));
  /* 1012504e call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10125054u);
  /* 10125054 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125057 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10125059 je 0x101251e0 */
  if (C.zf) goto L_101251e0;
  /* 1012505f push 0x101361b8 */
  push32((uint32_t)(0x101361b8u));
  /* 10125064 call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x1012506au);
  /* 1012506a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012506d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1012506f jne 0x101251e0 */
  if (!C.zf) goto L_101251e0;
  /* 10125075 push 5 */
  push32((uint32_t)(0x5u));
  /* 10125077 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x1012507du);
  /* 1012507d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125080 cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10125085 jle 0x10125140 */
  if ((C.zf||C.sf!=C.of)) goto L_10125140;
  /* 1012508b push 0 */
  push32((uint32_t)(0x0u));
  /* 1012508d call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10125093u);
  /* 10125093 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125096 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10125098 je 0x10125140 */
  if (C.zf) goto L_10125140;
  /* 1012509e push 1 */
  push32((uint32_t)(0x1u));
  /* 101250a0 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x101250a6u);
  /* 101250a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101250a9 cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101250ae jge 0x10125140 */
  if ((C.sf==C.of)) goto L_10125140;
  /* 101250b4 push 5 */
  push32((uint32_t)(0x5u));
  /* 101250b6 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x101250bcu);
  /* 101250bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101250bf cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101250c4 jle 0x101250d7 */
  if ((C.zf||C.sf!=C.of)) goto L_101250d7;
  /* 101250c6 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 101250cb push 1 */
  push32((uint32_t)(0x1u));
  /* 101250cd push 5 */
  push32((uint32_t)(0x5u));
  /* 101250cf call 0x10122610 */
  push32(0x101250d4u); f_10122610();
  /* 101250d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101250d7:;
  /* 101250d7 push 4 */
  push32((uint32_t)(0x4u));
  /* 101250d9 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x101250dfu);
  /* 101250df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101250e2 cmp eax, 0x1f40 */
  { uint32_t _a=(EAX),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101250e7 jle 0x101250fa */
  if ((C.zf||C.sf!=C.of)) goto L_101250fa;
  /* 101250e9 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 101250ee push 1 */
  push32((uint32_t)(0x1u));
  /* 101250f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 101250f2 call 0x10122610 */
  push32(0x101250f7u); f_10122610();
  /* 101250f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101250fa:;
  /* 101250fa push 2 */
  push32((uint32_t)(0x2u));
  /* 101250fc call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10125102u);
  /* 10125102 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125105 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012510a jle 0x1012511d */
  if ((C.zf||C.sf!=C.of)) goto L_1012511d;
  /* 1012510c push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 10125111 push 1 */
  push32((uint32_t)(0x1u));
  /* 10125113 push 2 */
  push32((uint32_t)(0x2u));
  /* 10125115 call 0x10122610 */
  push32(0x1012511au); f_10122610();
  /* 1012511a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1012511d:;
  /* 1012511d push 3 */
  push32((uint32_t)(0x3u));
  /* 1012511f call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10125125u);
  /* 10125125 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125128 cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012512d jle 0x10125140 */
  if ((C.zf||C.sf!=C.of)) goto L_10125140;
  /* 1012512f push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 10125134 push 1 */
  push32((uint32_t)(0x1u));
  /* 10125136 push 3 */
  push32((uint32_t)(0x3u));
  /* 10125138 call 0x10122610 */
  push32(0x1012513du); f_10122610();
  /* 1012513d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10125140:;
  /* 10125140 push 5 */
  push32((uint32_t)(0x5u));
  /* 10125142 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10125148u);
  /* 10125148 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012514b cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10125150 jle 0x101251e0 */
  if ((C.zf||C.sf!=C.of)) goto L_101251e0;
  /* 10125156 push 1 */
  push32((uint32_t)(0x1u));
  /* 10125158 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x1012515eu);
  /* 1012515e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125161 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10125163 je 0x101251e0 */
  if (C.zf) goto L_101251e0;
  /* 10125165 push 1 */
  push32((uint32_t)(0x1u));
  /* 10125167 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x1012516du);
  /* 1012516d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125170 cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10125175 jle 0x101251e0 */
  if ((C.zf||C.sf!=C.of)) goto L_101251e0;
  /* 10125177 push 5 */
  push32((uint32_t)(0x5u));
  /* 10125179 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x1012517fu);
  /* 1012517f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125182 cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10125187 jle 0x1012519a */
  if ((C.zf||C.sf!=C.of)) goto L_1012519a;
  /* 10125189 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1012518e push 4 */
  push32((uint32_t)(0x4u));
  /* 10125190 push 5 */
  push32((uint32_t)(0x5u));
  /* 10125192 call 0x10122610 */
  push32(0x10125197u); f_10122610();
  /* 10125197 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1012519a:;
  /* 1012519a push 2 */
  push32((uint32_t)(0x2u));
  /* 1012519c call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x101251a2u);
  /* 101251a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101251a5 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101251aa jle 0x101251bd */
  if ((C.zf||C.sf!=C.of)) goto L_101251bd;
  /* 101251ac push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 101251b1 push 4 */
  push32((uint32_t)(0x4u));
  /* 101251b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 101251b5 call 0x10122610 */
  push32(0x101251bau); f_10122610();
  /* 101251ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101251bd:;
  /* 101251bd push 3 */
  push32((uint32_t)(0x3u));
  /* 101251bf call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x101251c5u);
  /* 101251c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101251c8 cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101251cd jle 0x101251e0 */
  if ((C.zf||C.sf!=C.of)) goto L_101251e0;
  /* 101251cf push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 101251d4 push 4 */
  push32((uint32_t)(0x4u));
  /* 101251d6 push 3 */
  push32((uint32_t)(0x3u));
  /* 101251d8 call 0x10122610 */
  push32(0x101251ddu); f_10122610();
  /* 101251dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101251e0:;
  /* 101251e0 call dword ptr [0x10136500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136500))), 0x101251e6u);
  /* 101251e6 mov ecx, dword ptr [eax*4 + 0x1013660c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1013660c)));
  /* 101251ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101251ef jne 0x10125213 */
  if (!C.zf) goto L_10125213;
  /* 101251f1 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 101251f6 push 3 */
  push32((uint32_t)(0x3u));
  /* 101251f8 push 5 */
  push32((uint32_t)(0x5u));
  /* 101251fa call 0x10122610 */
  push32(0x101251ffu); f_10122610();
  /* 101251ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125202 call dword ptr [0x10136500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136500))), 0x10125208u);
  /* 10125208 mov dword ptr [eax*4 + 0x1013660c], 1 */
  w32((uint32_t)(EAX*4 + 0x1013660c), (0x1u));
L_10125213:;
  /* 10125213 pop edi */
  EDI = (pop32());
  /* 10125214 pop esi */
  ESI = (pop32());
  /* 10125215 pop ebp */
  EBP = (pop32());
  /* 10125216 pop ebx */
  EBX = (pop32());
  /* 10125217 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012521a ret  */
  ESPCHK(0x101243e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005220 @ 0x10125220 (72 bytes, 22 insns) */
void f_10125220(void) {
  FTRACE(0x10125220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10125220 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125222 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125224 push 1 */
  push32((uint32_t)(0x1u));
  /* 10125226 push 0x10135fd8 */
  push32((uint32_t)(0x10135fd8u));
  /* 1012522b call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10125231u);
  /* 10125231 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125233 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125235 push 1 */
  push32((uint32_t)(0x1u));
  /* 10125237 push 0x10135fb8 */
  push32((uint32_t)(0x10135fb8u));
  /* 1012523c call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10125242u);
  /* 10125242 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125244 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125246 push 1 */
  push32((uint32_t)(0x1u));
  /* 10125248 push 0x10135fd0 */
  push32((uint32_t)(0x10135fd0u));
  /* 1012524d call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10125253u);
  /* 10125253 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125255 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125257 push 1 */
  push32((uint32_t)(0x1u));
  /* 10125259 push 0x10133878 */
  push32((uint32_t)(0x10133878u));
  /* 1012525e call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10125264u);
  /* 10125264 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125267 ret  */
  ESPCHK(0x10125220u, _esp0);
  ESP += 4; return;
}

/* FUN_10005270 @ 0x10125270 (55 bytes, 16 insns) */
void f_10125270(void) {
  FTRACE(0x10125270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10125270 cmp dword ptr [esp + 4], 0x10133688 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0x10133688u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10125278 jne 0x101252a4 */
  if (!C.zf) goto L_101252a4;
  /* 1012527a push 0x10136340 */
  push32((uint32_t)(0x10136340u));
  /* 1012527f call dword ptr [0x1013654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013654c))), 0x10125285u);
  /* 10125285 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125288 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1012528a je 0x101252a4 */
  if (C.zf) goto L_101252a4;
  /* 1012528c push 0x10136288 */
  push32((uint32_t)(0x10136288u));
  /* 10125291 call dword ptr [0x1013654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013654c))), 0x10125297u);
  /* 10125297 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012529a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1012529c je 0x101252a4 */
  if (C.zf) goto L_101252a4;
  /* 1012529e mov eax, 1 */
  EAX = (0x1u);
  /* 101252a3 ret  */
  ESPCHK(0x10125270u, _esp0);
  ESP += 4; return;
L_101252a4:;
  /* 101252a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101252a6 ret  */
  ESPCHK(0x10125270u, _esp0);
  ESP += 4; return;
}

/* FUN_100052b0 @ 0x101252b0 (2008 bytes, 535 insns) */
void f_101252b0(void) {
  FTRACE(0x101252b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101252b0 push 0x10136278 */
  push32((uint32_t)(0x10136278u));
  /* 101252b5 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x101252bbu);
  /* 101252bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101252be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101252c0 jne 0x101252d4 */
  if (!C.zf) goto L_101252d4;
  /* 101252c2 push 0x101338c8 */
  push32((uint32_t)(0x101338c8u));
  /* 101252c7 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x101252cdu);
  /* 101252cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101252d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101252d2 je 0x10125304 */
  if (C.zf) goto L_10125304;
L_101252d4:;
  /* 101252d4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101252d6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101252d8 push 0x10133950 */
  push32((uint32_t)(0x10133950u));
  /* 101252dd call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101252e3u);
  /* 101252e3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101252e5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101252e7 push 0x101361f8 */
  push32((uint32_t)(0x101361f8u));
  /* 101252ec call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101252f2u);
  /* 101252f2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101252f4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101252f6 push 0x10136200 */
  push32((uint32_t)(0x10136200u));
  /* 101252fb call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125301u);
  /* 10125301 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10125304:;
  /* 10125304 push 0x101363b0 */
  push32((uint32_t)(0x101363b0u));
  /* 10125309 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x1012530fu);
  /* 1012530f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125312 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10125315 jg 0x1012533f */
  if ((!C.zf&&C.sf==C.of)) goto L_1012533f;
  /* 10125317 push 0x10136330 */
  push32((uint32_t)(0x10136330u));
  /* 1012531c call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10125322u);
  /* 10125322 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125325 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10125328 jg 0x1012533f */
  if ((!C.zf&&C.sf==C.of)) goto L_1012533f;
  /* 1012532a push 0x10133688 */
  push32((uint32_t)(0x10133688u));
  /* 1012532f call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10125335u);
  /* 10125335 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125338 cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012533d jle 0x1012539d */
  if ((C.zf||C.sf!=C.of)) goto L_1012539d;
L_1012533f:;
  /* 1012533f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125341 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10125343 push 0x10133628 */
  push32((uint32_t)(0x10133628u));
  /* 10125348 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012534eu);
  /* 1012534e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125350 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10125352 push 0x10133630 */
  push32((uint32_t)(0x10133630u));
  /* 10125357 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012535du);
  /* 1012535d push 0x101363b0 */
  push32((uint32_t)(0x101363b0u));
  /* 10125362 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10125368u);
  /* 10125368 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012536b cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10125370 jg 0x1012538b */
  if ((!C.zf&&C.sf==C.of)) goto L_1012538b;
  /* 10125372 push 0x10136330 */
  push32((uint32_t)(0x10136330u));
  /* 10125377 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x1012537du);
  /* 1012537d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125380 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10125383 jg 0x1012538b */
  if ((!C.zf&&C.sf==C.of)) goto L_1012538b;
  /* 10125385 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125387 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10125389 jmp 0x1012538f */
  goto L_1012538f;
L_1012538b:;
  /* 1012538b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1012538d push 0x5f */
  push32((uint32_t)(0x5fu));
L_1012538f:;
  /* 1012538f push 0x10133708 */
  push32((uint32_t)(0x10133708u));
  /* 10125394 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012539au);
  /* 1012539a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1012539d:;
  /* 1012539d push 0x10133688 */
  push32((uint32_t)(0x10133688u));
  /* 101253a2 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x101253a8u);
  /* 101253a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101253ab cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101253ae jle 0x10125463 */
  if ((C.zf||C.sf!=C.of)) goto L_10125463;
  /* 101253b4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101253b6 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101253b8 push 0x10136350 */
  push32((uint32_t)(0x10136350u));
  /* 101253bd call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101253c3u);
  /* 101253c3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101253c5 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 101253c7 push 0x10136358 */
  push32((uint32_t)(0x10136358u));
  /* 101253cc call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101253d2u);
  /* 101253d2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101253d4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101253d6 push 0x10136340 */
  push32((uint32_t)(0x10136340u));
  /* 101253db call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101253e1u);
  /* 101253e1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101253e3 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101253e5 push 0x10136298 */
  push32((uint32_t)(0x10136298u));
  /* 101253ea call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101253f0u);
  /* 101253f0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101253f2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 101253f4 push 0x10136280 */
  push32((uint32_t)(0x10136280u));
  /* 101253f9 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101253ffu);
  /* 101253ff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125401 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10125403 push 0x10136288 */
  push32((uint32_t)(0x10136288u));
  /* 10125408 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012540eu);
  /* 1012540e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125411 push 0x10133688 */
  push32((uint32_t)(0x10133688u));
  /* 10125416 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x1012541cu);
  /* 1012541c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012541f cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10125422 jle 0x10125463 */
  if ((C.zf||C.sf!=C.of)) goto L_10125463;
  /* 10125424 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125426 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10125428 push 0x10136348 */
  push32((uint32_t)(0x10136348u));
  /* 1012542d call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125433u);
  /* 10125433 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125435 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10125437 push 0x10136360 */
  push32((uint32_t)(0x10136360u));
  /* 1012543c call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125442u);
  /* 10125442 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125444 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10125446 push 0x101362a0 */
  push32((uint32_t)(0x101362a0u));
  /* 1012544b call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125451u);
  /* 10125451 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125453 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10125455 push 0x101362a8 */
  push32((uint32_t)(0x101362a8u));
  /* 1012545a call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125460u);
  /* 10125460 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10125463:;
  /* 10125463 push 0x101360e0 */
  push32((uint32_t)(0x101360e0u));
  /* 10125468 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x1012546eu);
  /* 1012546e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125471 cmp eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10125474 jle 0x1012550b */
  if ((C.zf||C.sf!=C.of)) goto L_1012550b;
  /* 1012547a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1012547c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1012547e push 0x10133910 */
  push32((uint32_t)(0x10133910u));
  /* 10125483 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125489u);
  /* 10125489 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1012548b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1012548d push 0x10133918 */
  push32((uint32_t)(0x10133918u));
  /* 10125492 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125498u);
  /* 10125498 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1012549a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1012549c push 0x10133908 */
  push32((uint32_t)(0x10133908u));
  /* 101254a1 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101254a7u);
  /* 101254a7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101254a9 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101254ab push 0x10135f78 */
  push32((uint32_t)(0x10135f78u));
  /* 101254b0 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101254b6u);
  /* 101254b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101254b8 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101254ba push 0x10135f68 */
  push32((uint32_t)(0x10135f68u));
  /* 101254bf call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101254c5u);
  /* 101254c5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101254c7 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101254c9 push 0x10135f70 */
  push32((uint32_t)(0x10135f70u));
  /* 101254ce call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101254d4u);
  /* 101254d4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101254d7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101254d9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101254db push 0x10136208 */
  push32((uint32_t)(0x10136208u));
  /* 101254e0 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101254e6u);
  /* 101254e6 push 0x101360e0 */
  push32((uint32_t)(0x101360e0u));
  /* 101254eb call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x101254f1u);
  /* 101254f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101254f4 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101254f7 jle 0x1012550b */
  if ((C.zf||C.sf!=C.of)) goto L_1012550b;
  /* 101254f9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101254fb push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101254fd push 0x10136210 */
  push32((uint32_t)(0x10136210u));
  /* 10125502 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125508u);
  /* 10125508 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1012550b:;
  /* 1012550b push 0x10133700 */
  push32((uint32_t)(0x10133700u));
  /* 10125510 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10125516u);
  /* 10125516 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125519 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012551c jle 0x1012553f */
  if ((C.zf||C.sf!=C.of)) goto L_1012553f;
  /* 1012551e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125520 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10125522 push 0x10136260 */
  push32((uint32_t)(0x10136260u));
  /* 10125527 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012552du);
  /* 1012552d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1012552f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10125531 push 0x10135fc8 */
  push32((uint32_t)(0x10135fc8u));
  /* 10125536 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012553cu);
  /* 1012553c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1012553f:;
  /* 1012553f push 0x101363b0 */
  push32((uint32_t)(0x101363b0u));
  /* 10125544 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x1012554au);
  /* 1012554a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012554d cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10125550 jle 0x10125623 */
  if ((C.zf||C.sf!=C.of)) goto L_10125623;
  /* 10125556 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125558 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1012555a push 0x10136130 */
  push32((uint32_t)(0x10136130u));
  /* 1012555f call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125565u);
  /* 10125565 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125567 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10125569 push 0x10136128 */
  push32((uint32_t)(0x10136128u));
  /* 1012556e call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125574u);
  /* 10125574 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125576 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10125578 push 0x10136120 */
  push32((uint32_t)(0x10136120u));
  /* 1012557d call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125583u);
  /* 10125583 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125585 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10125587 push 0x10136018 */
  push32((uint32_t)(0x10136018u));
  /* 1012558c call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125592u);
  /* 10125592 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125594 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10125596 push 0x10136010 */
  push32((uint32_t)(0x10136010u));
  /* 1012559b call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101255a1u);
  /* 101255a1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101255a3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101255a5 push 0x10136008 */
  push32((uint32_t)(0x10136008u));
  /* 101255aa call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101255b0u);
  /* 101255b0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101255b3 push 0x101363b0 */
  push32((uint32_t)(0x101363b0u));
  /* 101255b8 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x101255beu);
  /* 101255be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101255c1 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101255c4 jle 0x10125623 */
  if ((C.zf||C.sf!=C.of)) goto L_10125623;
  /* 101255c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101255c8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101255ca push 0x10136118 */
  push32((uint32_t)(0x10136118u));
  /* 101255cf call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101255d5u);
  /* 101255d5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101255d7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101255d9 push 0x10136108 */
  push32((uint32_t)(0x10136108u));
  /* 101255de call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101255e4u);
  /* 101255e4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101255e6 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101255e8 push 0x10136158 */
  push32((uint32_t)(0x10136158u));
  /* 101255ed call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101255f3u);
  /* 101255f3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101255f5 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101255f7 push 0x10136000 */
  push32((uint32_t)(0x10136000u));
  /* 101255fc call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125602u);
  /* 10125602 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125604 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10125606 push 0x10135ff8 */
  push32((uint32_t)(0x10135ff8u));
  /* 1012560b call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125611u);
  /* 10125611 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125613 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10125615 push 0x10135ff0 */
  push32((uint32_t)(0x10135ff0u));
  /* 1012561a call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125620u);
  /* 10125620 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10125623:;
  /* 10125623 push 0x10136330 */
  push32((uint32_t)(0x10136330u));
  /* 10125628 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x1012562eu);
  /* 1012562e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125631 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10125634 jle 0x10125706 */
  if ((C.zf||C.sf!=C.of)) goto L_10125706;
  /* 1012563a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1012563c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1012563e push 0x10133748 */
  push32((uint32_t)(0x10133748u));
  /* 10125643 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125649u);
  /* 10125649 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1012564b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1012564d push 0x10133740 */
  push32((uint32_t)(0x10133740u));
  /* 10125652 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125658u);
  /* 10125658 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1012565a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1012565c push 0x10133738 */
  push32((uint32_t)(0x10133738u));
  /* 10125661 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125667u);
  /* 10125667 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125669 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1012566b push 0x101336b8 */
  push32((uint32_t)(0x101336b8u));
  /* 10125670 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125676u);
  /* 10125676 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125678 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1012567a push 0x101336b0 */
  push32((uint32_t)(0x101336b0u));
  /* 1012567f call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125685u);
  /* 10125685 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125687 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10125689 push 0x101336a8 */
  push32((uint32_t)(0x101336a8u));
  /* 1012568e call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125694u);
  /* 10125694 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125697 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125699 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1012569b push 0x101336a0 */
  push32((uint32_t)(0x101336a0u));
  /* 101256a0 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101256a6u);
  /* 101256a6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101256a8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101256aa push 0x10133678 */
  push32((uint32_t)(0x10133678u));
  /* 101256af call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101256b5u);
  /* 101256b5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101256b7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101256b9 push 0x10133670 */
  push32((uint32_t)(0x10133670u));
  /* 101256be call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101256c4u);
  /* 101256c4 push 0x10133670 */
  push32((uint32_t)(0x10133670u));
  /* 101256c9 call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x101256cfu);
  /* 101256cf add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101256d2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101256d4 je 0x10125706 */
  if (C.zf) goto L_10125706;
  /* 101256d6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101256d8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101256da push 0x10133720 */
  push32((uint32_t)(0x10133720u));
  /* 101256df call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101256e5u);
  /* 101256e5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101256e7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101256e9 push 0x10133718 */
  push32((uint32_t)(0x10133718u));
  /* 101256ee call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101256f4u);
  /* 101256f4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101256f6 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101256f8 push 0x10133710 */
  push32((uint32_t)(0x10133710u));
  /* 101256fd call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125703u);
  /* 10125703 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10125706:;
  /* 10125706 push 0x10133690 */
  push32((uint32_t)(0x10133690u));
  /* 1012570b call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10125711u);
  /* 10125711 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125714 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10125717 jle 0x1012579f */
  if ((C.zf||C.sf!=C.of)) goto L_1012579f;
  /* 1012571d push 0x10133680 */
  push32((uint32_t)(0x10133680u));
  /* 10125722 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10125728u);
  /* 10125728 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012572b cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012572e jge 0x1012579f */
  if ((C.sf==C.of)) goto L_1012579f;
  /* 10125730 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125732 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10125734 push 0x10133900 */
  push32((uint32_t)(0x10133900u));
  /* 10125739 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012573fu);
  /* 1012573f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125741 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10125743 push 0x101338f8 */
  push32((uint32_t)(0x101338f8u));
  /* 10125748 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012574eu);
  /* 1012574e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125750 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10125752 push 0x101338f0 */
  push32((uint32_t)(0x101338f0u));
  /* 10125757 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012575du);
  /* 1012575d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1012575f push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10125761 push 0x101338b8 */
  push32((uint32_t)(0x101338b8u));
  /* 10125766 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012576cu);
  /* 1012576c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1012576e push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10125770 push 0x101338b0 */
  push32((uint32_t)(0x101338b0u));
  /* 10125775 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012577bu);
  /* 1012577b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1012577d push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1012577f push 0x101338a8 */
  push32((uint32_t)(0x101338a8u));
  /* 10125784 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012578au);
  /* 1012578a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012578d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1012578f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10125791 push 0x10136208 */
  push32((uint32_t)(0x10136208u));
  /* 10125796 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012579cu);
  /* 1012579c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1012579f:;
  /* 1012579f push 0x10133680 */
  push32((uint32_t)(0x10133680u));
  /* 101257a4 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x101257aau);
  /* 101257aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101257ad cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101257b0 jle 0x10125891 */
  if ((C.zf||C.sf!=C.of)) goto L_10125891;
  /* 101257b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101257b8 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101257ba push 0x10133658 */
  push32((uint32_t)(0x10133658u));
  /* 101257bf call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101257c5u);
  /* 101257c5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101257c7 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 101257c9 push 0x10133650 */
  push32((uint32_t)(0x10133650u));
  /* 101257ce call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101257d4u);
  /* 101257d4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101257d6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101257d8 push 0x10133648 */
  push32((uint32_t)(0x10133648u));
  /* 101257dd call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101257e3u);
  /* 101257e3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101257e5 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101257e7 push 0x10136318 */
  push32((uint32_t)(0x10136318u));
  /* 101257ec call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101257f2u);
  /* 101257f2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101257f4 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101257f6 push 0x10136310 */
  push32((uint32_t)(0x10136310u));
  /* 101257fb call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125801u);
  /* 10125801 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125803 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10125805 push 0x10136308 */
  push32((uint32_t)(0x10136308u));
  /* 1012580a call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125810u);
  /* 10125810 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125813 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125815 push 0xa */
  push32((uint32_t)(0xau));
  /* 10125817 push 0x10136390 */
  push32((uint32_t)(0x10136390u));
  /* 1012581c call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125822u);
  /* 10125822 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125824 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10125826 push 0x10136388 */
  push32((uint32_t)(0x10136388u));
  /* 1012582b call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125831u);
  /* 10125831 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125833 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10125835 push 0x101363d8 */
  push32((uint32_t)(0x101363d8u));
  /* 1012583a call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125840u);
  /* 10125840 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125842 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10125844 push 0x101363d0 */
  push32((uint32_t)(0x101363d0u));
  /* 10125849 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012584fu);
  /* 1012584f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125851 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10125853 push 0x101363c8 */
  push32((uint32_t)(0x101363c8u));
  /* 10125858 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012585eu);
  /* 1012585e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125860 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10125862 push 0x101363c0 */
  push32((uint32_t)(0x101363c0u));
  /* 10125867 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012586du);
  /* 1012586d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125870 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125872 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10125874 push 0x10136208 */
  push32((uint32_t)(0x10136208u));
  /* 10125879 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012587fu);
  /* 1012587f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125881 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10125883 push 0x10136210 */
  push32((uint32_t)(0x10136210u));
  /* 10125888 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012588eu);
  /* 1012588e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10125891:;
  /* 10125891 push 0x10135f80 */
  push32((uint32_t)(0x10135f80u));
  /* 10125896 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x1012589cu);
  /* 1012589c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012589f cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101258a2 jle 0x10125a00 */
  if ((C.zf||C.sf!=C.of)) goto L_10125a00;
  /* 101258a8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101258aa push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101258ac push 0x101336e0 */
  push32((uint32_t)(0x101336e0u));
  /* 101258b1 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101258b7u);
  /* 101258b7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101258b9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101258bb push 0x101336e8 */
  push32((uint32_t)(0x101336e8u));
  /* 101258c0 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101258c6u);
  /* 101258c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101258c8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101258ca push 0x101336f0 */
  push32((uint32_t)(0x101336f0u));
  /* 101258cf call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101258d5u);
  /* 101258d5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101258d7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101258d9 push 0x101336f8 */
  push32((uint32_t)(0x101336f8u));
  /* 101258de call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101258e4u);
  /* 101258e4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101258e6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101258e8 push 0x101336c0 */
  push32((uint32_t)(0x101336c0u));
  /* 101258ed call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101258f3u);
  /* 101258f3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101258f5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101258f7 push 0x101336d0 */
  push32((uint32_t)(0x101336d0u));
  /* 101258fc call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125902u);
  /* 10125902 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125905 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125907 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10125909 push 0x10133788 */
  push32((uint32_t)(0x10133788u));
  /* 1012590e call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125914u);
  /* 10125914 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125916 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10125918 push 0x10133790 */
  push32((uint32_t)(0x10133790u));
  /* 1012591d call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125923u);
  /* 10125923 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125925 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10125927 push 0x10133798 */
  push32((uint32_t)(0x10133798u));
  /* 1012592c call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125932u);
  /* 10125932 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125934 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10125936 push 0x10133770 */
  push32((uint32_t)(0x10133770u));
  /* 1012593b call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125941u);
  /* 10125941 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125943 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10125945 push 0x10133778 */
  push32((uint32_t)(0x10133778u));
  /* 1012594a call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125950u);
  /* 10125950 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125952 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10125954 push 0x10133780 */
  push32((uint32_t)(0x10133780u));
  /* 10125959 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012595fu);
  /* 1012595f add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125962 push 0x10135f80 */
  push32((uint32_t)(0x10135f80u));
  /* 10125967 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x1012596du);
  /* 1012596d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125970 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10125973 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125975 jle 0x1012598a */
  if ((C.zf||C.sf!=C.of)) goto L_1012598a;
  /* 10125977 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10125979 push 0x10136028 */
  push32((uint32_t)(0x10136028u));
  /* 1012597e call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125984u);
  /* 10125984 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125986 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10125988 jmp 0x1012599b */
  goto L_1012599b;
L_1012598a:;
  /* 1012598a push 0xf */
  push32((uint32_t)(0xfu));
  /* 1012598c push 0x10136028 */
  push32((uint32_t)(0x10136028u));
  /* 10125991 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125997u);
  /* 10125997 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125999 push 0xf */
  push32((uint32_t)(0xfu));
L_1012599b:;
  /* 1012599b push 0x10136088 */
  push32((uint32_t)(0x10136088u));
  /* 101259a0 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101259a6u);
  /* 101259a6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101259a9 push 0x10136028 */
  push32((uint32_t)(0x10136028u));
  /* 101259ae call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x101259b4u);
  /* 101259b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101259b7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101259b9 je 0x101259df */
  if (C.zf) goto L_101259df;
  /* 101259bb push 0x10136088 */
  push32((uint32_t)(0x10136088u));
  /* 101259c0 call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x101259c6u);
  /* 101259c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101259c9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101259cb je 0x101259df */
  if (C.zf) goto L_101259df;
  /* 101259cd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101259cf push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101259d1 push 0x10136080 */
  push32((uint32_t)(0x10136080u));
  /* 101259d6 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101259dcu);
  /* 101259dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101259df:;
  /* 101259df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101259e1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101259e3 push 0x10136208 */
  push32((uint32_t)(0x10136208u));
  /* 101259e8 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101259eeu);
  /* 101259ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101259f0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101259f2 push 0x10136210 */
  push32((uint32_t)(0x10136210u));
  /* 101259f7 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101259fdu);
  /* 101259fd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10125a00:;
  /* 10125a00 push 0x10136308 */
  push32((uint32_t)(0x10136308u));
  /* 10125a05 call dword ptr [0x1013654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013654c))), 0x10125a0bu);
  /* 10125a0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125a0e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10125a10 je 0x10125a87 */
  if (C.zf) goto L_10125a87;
  /* 10125a12 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125a14 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10125a16 push 0x10136170 */
  push32((uint32_t)(0x10136170u));
  /* 10125a1b call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125a21u);
  /* 10125a21 push 0x10136170 */
  push32((uint32_t)(0x10136170u));
  /* 10125a26 call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x10125a2cu);
  /* 10125a2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125a2f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10125a31 je 0x10125a87 */
  if (C.zf) goto L_10125a87;
  /* 10125a33 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125a35 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10125a37 push 0x10136180 */
  push32((uint32_t)(0x10136180u));
  /* 10125a3c call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125a42u);
  /* 10125a42 push 0x10136180 */
  push32((uint32_t)(0x10136180u));
  /* 10125a47 call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x10125a4du);
  /* 10125a4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125a50 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10125a52 je 0x10125a87 */
  if (C.zf) goto L_10125a87;
  /* 10125a54 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125a56 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10125a58 push 0x10136178 */
  push32((uint32_t)(0x10136178u));
  /* 10125a5d call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125a63u);
  /* 10125a63 push 0x10136178 */
  push32((uint32_t)(0x10136178u));
  /* 10125a68 call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x10125a6eu);
  /* 10125a6e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125a71 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10125a73 je 0x10125a87 */
  if (C.zf) goto L_10125a87;
  /* 10125a75 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125a77 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10125a79 push 0x10136168 */
  push32((uint32_t)(0x10136168u));
  /* 10125a7e call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125a84u);
  /* 10125a84 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10125a87:;
  /* 10125a87 ret  */
  ESPCHK(0x101252b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a90 @ 0x10125a90 (305 bytes, 86 insns) */
void f_10125a90(void) {
  FTRACE(0x10125a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10125a90 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125a92 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10125a94 push 0x10136378 */
  push32((uint32_t)(0x10136378u));
  /* 10125a99 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125a9fu);
  /* 10125a9f push 0x10135f20 */
  push32((uint32_t)(0x10135f20u));
  /* 10125aa4 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10125aaau);
  /* 10125aaa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125aad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10125aaf je 0x10125ac3 */
  if (C.zf) goto L_10125ac3;
  /* 10125ab1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125ab3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125ab5 push 0x10133660 */
  push32((uint32_t)(0x10133660u));
  /* 10125aba call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125ac0u);
  /* 10125ac0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10125ac3:;
  /* 10125ac3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125ac5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125ac7 push 0x10136078 */
  push32((uint32_t)(0x10136078u));
  /* 10125acc call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125ad2u);
  /* 10125ad2 push 0x10133688 */
  push32((uint32_t)(0x10133688u));
  /* 10125ad7 call 0x10125270 */
  push32(0x10125adcu); f_10125270();
  /* 10125adc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125adf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10125ae1 jne 0x10125af1 */
  if (!C.zf) goto L_10125af1;
  /* 10125ae3 mov eax, dword ptr [0x10135f58] */
  EAX = (r32((uint32_t)(0x10135f58)));
  /* 10125ae8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10125aea je 0x10125b03 */
  if (C.zf) goto L_10125b03;
  /* 10125aec cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10125aef je 0x10125b03 */
  if (C.zf) goto L_10125b03;
L_10125af1:;
  /* 10125af1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125af3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10125af5 push 0x10136270 */
  push32((uint32_t)(0x10136270u));
  /* 10125afa call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125b00u);
  /* 10125b00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10125b03:;
  /* 10125b03 push 0x10135fe8 */
  push32((uint32_t)(0x10135fe8u));
  /* 10125b08 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10125b0eu);
  /* 10125b0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125b11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10125b13 je 0x10125b27 */
  if (C.zf) goto L_10125b27;
  /* 10125b15 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125b17 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125b19 push 0x10136040 */
  push32((uint32_t)(0x10136040u));
  /* 10125b1e call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125b24u);
  /* 10125b24 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10125b27:;
  /* 10125b27 push 0x10136150 */
  push32((uint32_t)(0x10136150u));
  /* 10125b2c call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x10125b32u);
  /* 10125b32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125b35 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10125b37 je 0x10125b4b */
  if (C.zf) goto L_10125b4b;
  /* 10125b39 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125b3b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125b3d push 0x10136030 */
  push32((uint32_t)(0x10136030u));
  /* 10125b42 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125b48u);
  /* 10125b48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10125b4b:;
  /* 10125b4b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125b4d push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10125b4f push 0x10136150 */
  push32((uint32_t)(0x10136150u));
  /* 10125b54 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125b5au);
  /* 10125b5a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125b5c push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10125b5e push 0x10136100 */
  push32((uint32_t)(0x10136100u));
  /* 10125b63 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125b69u);
  /* 10125b69 push 0x101360d8 */
  push32((uint32_t)(0x101360d8u));
  /* 10125b6e call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10125b74u);
  /* 10125b74 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125b77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10125b79 je 0x10125b8d */
  if (C.zf) goto L_10125b8d;
  /* 10125b7b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125b7d push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10125b7f push 0x101361b8 */
  push32((uint32_t)(0x101361b8u));
  /* 10125b84 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125b8au);
  /* 10125b8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10125b8d:;
  /* 10125b8d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125b8f push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10125b91 push 0x10136020 */
  push32((uint32_t)(0x10136020u));
  /* 10125b96 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125b9cu);
  /* 10125b9c push 0x10136258 */
  push32((uint32_t)(0x10136258u));
  /* 10125ba1 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10125ba7u);
  /* 10125ba7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125baa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10125bac je 0x10125bc0 */
  if (C.zf) goto L_10125bc0;
  /* 10125bae push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125bb0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125bb2 push 0x101338e0 */
  push32((uint32_t)(0x101338e0u));
  /* 10125bb7 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10125bbdu);
  /* 10125bbd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10125bc0:;
  /* 10125bc0 ret  */
  ESPCHK(0x10125a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bd0 @ 0x10125bd0 (536 bytes, 150 insns) */
void f_10125bd0(void) {
  FTRACE(0x10125bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10125bd0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125bd2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125bd4 push 3 */
  push32((uint32_t)(0x3u));
  /* 10125bd6 push 0x10136258 */
  push32((uint32_t)(0x10136258u));
  /* 10125bdb call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10125be1u);
  /* 10125be1 push 0x10135fe8 */
  push32((uint32_t)(0x10135fe8u));
  /* 10125be6 call dword ptr [0x10136544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136544))), 0x10125becu);
  /* 10125bec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125bef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10125bf1 je 0x10125c18 */
  if (C.zf) goto L_10125c18;
  /* 10125bf3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125bf5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125bf7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10125bf9 push 0x10135fd8 */
  push32((uint32_t)(0x10135fd8u));
  /* 10125bfe call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10125c04u);
  /* 10125c04 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125c06 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125c08 push 4 */
  push32((uint32_t)(0x4u));
  /* 10125c0a push 0x10135fd0 */
  push32((uint32_t)(0x10135fd0u));
  /* 10125c0f call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10125c15u);
  /* 10125c15 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10125c18:;
  /* 10125c18 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125c1a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125c1c push 1 */
  push32((uint32_t)(0x1u));
  /* 10125c1e push 0x10135fd8 */
  push32((uint32_t)(0x10135fd8u));
  /* 10125c23 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10125c29u);
  /* 10125c29 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125c2b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125c2d push 1 */
  push32((uint32_t)(0x1u));
  /* 10125c2f push 0x10135fb8 */
  push32((uint32_t)(0x10135fb8u));
  /* 10125c34 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10125c3au);
  /* 10125c3a mov eax, dword ptr [0x101362b4] */
  EAX = (r32((uint32_t)(0x101362b4)));
  /* 10125c3f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125c42 mov ecx, dword ptr [eax*4 + 0x10135f98] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10135f98)));
  /* 10125c49 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10125c4b jne 0x10125c68 */
  if (!C.zf) goto L_10125c68;
  /* 10125c4d call 0x10125220 */
  push32(0x10125c52u); f_10125220();
  /* 10125c52 push 0x10133878 */
  push32((uint32_t)(0x10133878u));
  /* 10125c57 call dword ptr [0x10136544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136544))), 0x10125c5du);
  /* 10125c5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125c60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10125c62 je 0x10125de7 */
  if (C.zf) goto L_10125de7;
L_10125c68:;
  /* 10125c68 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125c6a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125c6c push 1 */
  push32((uint32_t)(0x1u));
  /* 10125c6e push 0x101361e8 */
  push32((uint32_t)(0x101361e8u));
  /* 10125c73 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10125c79u);
  /* 10125c79 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125c7b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125c7d push 2 */
  push32((uint32_t)(0x2u));
  /* 10125c7f push 0x10135fb8 */
  push32((uint32_t)(0x10135fb8u));
  /* 10125c84 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10125c8au);
  /* 10125c8a push 0x10135fb8 */
  push32((uint32_t)(0x10135fb8u));
  /* 10125c8f call dword ptr [0x10136544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136544))), 0x10125c95u);
  /* 10125c95 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125c98 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10125c9b jge 0x10125caa */
  if ((C.sf==C.of)) goto L_10125caa;
  /* 10125c9d call 0x10122670 */
  push32(0x10125ca2u); f_10122670();
  /* 10125ca2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10125ca4 jne 0x10125de7 */
  if (!C.zf) goto L_10125de7;
L_10125caa:;
  /* 10125caa push esi */
  push32((uint32_t)(ESI));
  /* 10125cab push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125cad push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125caf push 2 */
  push32((uint32_t)(0x2u));
  /* 10125cb1 push 0x10136250 */
  push32((uint32_t)(0x10136250u));
  /* 10125cb6 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10125cbcu);
  /* 10125cbc push 0x10136250 */
  push32((uint32_t)(0x10136250u));
  /* 10125cc1 call dword ptr [0x10136544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136544))), 0x10125cc7u);
  /* 10125cc7 push 0x10136250 */
  push32((uint32_t)(0x10136250u));
  /* 10125ccc mov esi, eax */
  ESI = (EAX);
  /* 10125cce call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10125cd4u);
  /* 10125cd4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125cd7 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10125cd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10125cdb pop esi */
  ESI = (pop32());
  /* 10125cdc jg 0x10125de7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10125de7;
  /* 10125ce2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125ce4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125ce6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10125ce8 push 0x10135f20 */
  push32((uint32_t)(0x10135f20u));
  /* 10125ced call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10125cf3u);
  /* 10125cf3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125cf6 call 0x10122780 */
  push32(0x10125cfbu); f_10122780();
  /* 10125cfb cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10125cfe jge 0x10125d27 */
  if ((C.sf==C.of)) goto L_10125d27;
  /* 10125d00 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125d02 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125d04 push 1 */
  push32((uint32_t)(0x1u));
  /* 10125d06 push 0x10135fe8 */
  push32((uint32_t)(0x10135fe8u));
  /* 10125d0b call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10125d11u);
  /* 10125d11 push 0x10135fe8 */
  push32((uint32_t)(0x10135fe8u));
  /* 10125d16 call dword ptr [0x10136544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136544))), 0x10125d1cu);
  /* 10125d1c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125d1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10125d21 je 0x10125de7 */
  if (C.zf) goto L_10125de7;
L_10125d27:;
  /* 10125d27 call 0x10125220 */
  push32(0x10125d2cu); f_10125220();
  /* 10125d2c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125d2e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125d30 push 4 */
  push32((uint32_t)(0x4u));
  /* 10125d32 push 0x10135fb8 */
  push32((uint32_t)(0x10135fb8u));
  /* 10125d37 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10125d3du);
  /* 10125d3d push 0x10135fb8 */
  push32((uint32_t)(0x10135fb8u));
  /* 10125d42 call dword ptr [0x10136544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136544))), 0x10125d48u);
  /* 10125d48 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125d4b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10125d4e jl 0x10125de7 */
  if ((C.sf!=C.of)) goto L_10125de7;
  /* 10125d54 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125d56 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125d58 push 3 */
  push32((uint32_t)(0x3u));
  /* 10125d5a push 0x101360d8 */
  push32((uint32_t)(0x101360d8u));
  /* 10125d5f call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10125d65u);
  /* 10125d65 push 0x10136258 */
  push32((uint32_t)(0x10136258u));
  /* 10125d6a call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10125d70u);
  /* 10125d70 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125d73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10125d75 je 0x10125d8b */
  if (C.zf) goto L_10125d8b;
  /* 10125d77 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125d79 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125d7b push 4 */
  push32((uint32_t)(0x4u));
  /* 10125d7d push 0x101360d8 */
  push32((uint32_t)(0x101360d8u));
  /* 10125d82 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10125d88u);
  /* 10125d88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10125d8b:;
  /* 10125d8b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125d8d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125d8f push 1 */
  push32((uint32_t)(0x1u));
  /* 10125d91 push 0x10133618 */
  push32((uint32_t)(0x10133618u));
  /* 10125d96 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10125d9cu);
  /* 10125d9c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125d9e push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10125da0 push 3 */
  push32((uint32_t)(0x3u));
  /* 10125da2 push 0x10133618 */
  push32((uint32_t)(0x10133618u));
  /* 10125da7 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10125dadu);
  /* 10125dad push 0x101338e0 */
  push32((uint32_t)(0x101338e0u));
  /* 10125db2 call dword ptr [0x1013654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013654c))), 0x10125db8u);
  /* 10125db8 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125dbb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10125dbd je 0x10125dd3 */
  if (C.zf) goto L_10125dd3;
  /* 10125dbf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125dc1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125dc3 push 5 */
  push32((uint32_t)(0x5u));
  /* 10125dc5 push 0x101360d8 */
  push32((uint32_t)(0x101360d8u));
  /* 10125dca call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10125dd0u);
  /* 10125dd0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10125dd3:;
  /* 10125dd3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125dd5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125dd7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10125dd9 push 0x101360f8 */
  push32((uint32_t)(0x101360f8u));
  /* 10125dde call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10125de4u);
  /* 10125de4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10125de7:;
  /* 10125de7 ret  */
  ESPCHK(0x10125bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005df0 @ 0x10125df0 (472 bytes, 137 insns) */
void f_10125df0(void) {
  FTRACE(0x10125df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10125df0 push ecx */
  push32((uint32_t)(ECX));
  /* 10125df1 push 0x10136278 */
  push32((uint32_t)(0x10136278u));
  /* 10125df6 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10125dfcu);
  /* 10125dfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125dff cmp eax, 0x28 */
  { uint32_t _a=(EAX),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10125e02 jge 0x10125e17 */
  if ((C.sf==C.of)) goto L_10125e17;
  /* 10125e04 mov eax, dword ptr [0x101362b4] */
  EAX = (r32((uint32_t)(0x101362b4)));
  /* 10125e09 push 0 */
  push32((uint32_t)(0x0u));
  /* 10125e0b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10125e0e push eax */
  push32((uint32_t)(EAX));
  /* 10125e0f call 0x101226d0 */
  push32(0x10125e14u); f_101226d0();
  /* 10125e14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10125e17:;
  /* 10125e17 push 0x10136278 */
  push32((uint32_t)(0x10136278u));
  /* 10125e1c call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10125e22u);
  /* 10125e22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125e25 cmp eax, 0x9c */
  { uint32_t _a=(EAX),_b=(0x9cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10125e2a jg 0x10125e3e */
  if ((!C.zf&&C.sf==C.of)) goto L_10125e3e;
  /* 10125e2c push 0x101360d8 */
  push32((uint32_t)(0x101360d8u));
  /* 10125e31 call dword ptr [0x10136544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136544))), 0x10125e37u);
  /* 10125e37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125e3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10125e3c je 0x10125e52 */
  if (C.zf) goto L_10125e52;
L_10125e3e:;
  /* 10125e3e mov ecx, dword ptr [0x101362b4] */
  ECX = (r32((uint32_t)(0x101362b4)));
  /* 10125e44 push 1 */
  push32((uint32_t)(0x1u));
  /* 10125e46 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10125e49 push ecx */
  push32((uint32_t)(ECX));
  /* 10125e4a call 0x101226d0 */
  push32(0x10125e4fu); f_101226d0();
  /* 10125e4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10125e52:;
  /* 10125e52 push esi */
  push32((uint32_t)(ESI));
  /* 10125e53 push edi */
  push32((uint32_t)(EDI));
  /* 10125e54 mov edi, 2 */
  EDI = (0x2u);
L_10125e59:;
  /* 10125e59 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125e5b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10125e5d push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10125e62 push 0x10136190 */
  push32((uint32_t)(0x10136190u));
  /* 10125e67 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10125e6du);
  /* 10125e6d push 0x10133688 */
  push32((uint32_t)(0x10133688u));
  /* 10125e72 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10125e78u);
  /* 10125e78 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125e7b cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10125e80 jge 0x10125e9b */
  if ((C.sf==C.of)) goto L_10125e9b;
  /* 10125e82 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125e84 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10125e86 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10125e8b push 0x10133688 */
  push32((uint32_t)(0x10133688u));
  /* 10125e90 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10125e96u);
  /* 10125e96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125e99 jmp 0x10125ec6 */
  goto L_10125ec6;
L_10125e9b:;
  /* 10125e9b push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10125e9d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10125e9f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10125ea4 push 0x10133688 */
  push32((uint32_t)(0x10133688u));
  /* 10125ea9 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10125eafu);
  /* 10125eaf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125eb1 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10125eb3 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10125eb8 push 0x101360e0 */
  push32((uint32_t)(0x101360e0u));
  /* 10125ebd call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10125ec3u);
  /* 10125ec3 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10125ec6:;
  /* 10125ec6 mov edx, dword ptr [0x101362b4] */
  EDX = (r32((uint32_t)(0x101362b4)));
  /* 10125ecc add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10125ecf push edx */
  push32((uint32_t)(EDX));
  /* 10125ed0 call 0x101226f0 */
  push32(0x10125ed5u); f_101226f0();
  /* 10125ed5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125ed8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10125eda jne 0x10125efd */
  if (!C.zf) goto L_10125efd;
  /* 10125edc call 0x10122780 */
  push32(0x10125ee1u); f_10122780();
  /* 10125ee1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10125ee4 jge 0x10125efd */
  if ((C.sf==C.of)) goto L_10125efd;
  /* 10125ee6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125ee8 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10125eea push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10125eef push 0x10136278 */
  push32((uint32_t)(0x10136278u));
  /* 10125ef4 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10125efau);
  /* 10125efa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10125efd:;
  /* 10125efd mov al, byte ptr [0x101362b4] */
  AL = (r8((uint32_t)(0x101362b4)));
  /* 10125f02 mov byte ptr [esp + 8], al */
  w8((uint32_t)(ESP + 0x8), (AL));
  /* 10125f06 mov eax, dword ptr [0x101364b8] */
  EAX = (r32((uint32_t)(0x101364b8)));
  /* 10125f0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10125f0d je 0x10125f25 */
  if (C.zf) goto L_10125f25;
  /* 10125f0f mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10125f13 push 1 */
  push32((uint32_t)(0x1u));
  /* 10125f15 push 0x10133888 */
  push32((uint32_t)(0x10133888u));
  /* 10125f1a push ecx */
  push32((uint32_t)(ECX));
  /* 10125f1b call eax */
  call_ind((uint32_t)(EAX), 0x10125f1du);
  /* 10125f1d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125f20 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10125f23 jge 0x10125f65 */
  if ((C.sf==C.of)) goto L_10125f65;
L_10125f25:;
  /* 10125f25 push 5 */
  push32((uint32_t)(0x5u));
  /* 10125f27 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10125f2du);
  /* 10125f2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125f30 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10125f35 jle 0x10125f65 */
  if ((C.zf||C.sf!=C.of)) goto L_10125f65;
  /* 10125f37 push 4 */
  push32((uint32_t)(0x4u));
  /* 10125f39 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10125f3fu);
  /* 10125f3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125f42 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10125f47 jle 0x10125f65 */
  if ((C.zf||C.sf!=C.of)) goto L_10125f65;
  /* 10125f49 mov esi, 0x1e */
  ESI = (0x1eu);
L_10125f4e:;
  /* 10125f4e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125f50 push 0xa */
  push32((uint32_t)(0xau));
  /* 10125f52 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10125f54 push 0x10133888 */
  push32((uint32_t)(0x10133888u));
  /* 10125f59 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10125f5fu);
  /* 10125f5f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125f62 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10125f63 jne 0x10125f4e */
  if (!C.zf) goto L_10125f4e;
L_10125f65:;
  /* 10125f65 push 0x10136020 */
  push32((uint32_t)(0x10136020u));
  /* 10125f6a call dword ptr [0x1013654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013654c))), 0x10125f70u);
  /* 10125f70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125f73 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10125f75 je 0x10125f7b */
  if (C.zf) goto L_10125f7b;
  /* 10125f77 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10125f79 jmp 0x10125f7d */
  goto L_10125f7d;
L_10125f7b:;
  /* 10125f7b push 0x64 */
  push32((uint32_t)(0x64u));
L_10125f7d:;
  /* 10125f7d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10125f7f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10125f84 push 0x101363b0 */
  push32((uint32_t)(0x101363b0u));
  /* 10125f89 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10125f8fu);
  /* 10125f8f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125f92 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125f94 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10125f96 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10125f9b push 0x10133680 */
  push32((uint32_t)(0x10133680u));
  /* 10125fa0 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10125fa6u);
  /* 10125fa6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10125fa8 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10125faa push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10125faf push 0x10135f80 */
  push32((uint32_t)(0x10135f80u));
  /* 10125fb4 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10125fbau);
  /* 10125fba add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125fbd dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10125fbe jne 0x10125e59 */
  if (!C.zf) goto L_10125e59;
  /* 10125fc4 pop edi */
  EDI = (pop32());
  /* 10125fc5 pop esi */
  ESI = (pop32());
  /* 10125fc6 pop ecx */
  ECX = (pop32());
  /* 10125fc7 ret  */
  ESPCHK(0x10125df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fd0 @ 0x10125fd0 (789 bytes, 244 insns) */
void f_10125fd0(void) {
  FTRACE(0x10125fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10125fd0 push ecx */
  push32((uint32_t)(ECX));
  /* 10125fd1 push 0x10133878 */
  push32((uint32_t)(0x10133878u));
  /* 10125fd6 call dword ptr [0x10136544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136544))), 0x10125fdcu);
  /* 10125fdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125fdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10125fe1 je 0x101262e3 */
  if (C.zf) goto L_101262e3;
  /* 10125fe7 call 0x10122670 */
  push32(0x10125fecu); f_10122670();
  /* 10125fec cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10125fef jne 0x10126036 */
  if (!C.zf) goto L_10126036;
  /* 10125ff1 mov eax, dword ptr [0x101362b4] */
  EAX = (r32((uint32_t)(0x101362b4)));
  /* 10125ff6 push eax */
  push32((uint32_t)(EAX));
  /* 10125ff7 call 0x101226f0 */
  push32(0x10125ffcu); f_101226f0();
  /* 10125ffc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10125fff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10126001 jne 0x101262e3 */
  if (!C.zf) goto L_101262e3;
  /* 10126007 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 1012600c push 3 */
  push32((uint32_t)(0x3u));
  /* 1012600e push 2 */
  push32((uint32_t)(0x2u));
  /* 10126010 call 0x10122610 */
  push32(0x10126015u); f_10122610();
  /* 10126015 push 0x13880 */
  push32((uint32_t)(0x13880u));
  /* 1012601a push 3 */
  push32((uint32_t)(0x3u));
  /* 1012601c push 0 */
  push32((uint32_t)(0x0u));
  /* 1012601e call 0x10122610 */
  push32(0x10126023u); f_10122610();
  /* 10126023 mov ecx, dword ptr [0x101362b4] */
  ECX = (r32((uint32_t)(0x101362b4)));
  /* 10126029 push 1 */
  push32((uint32_t)(0x1u));
  /* 1012602b push ecx */
  push32((uint32_t)(ECX));
  /* 1012602c call 0x101226d0 */
  push32(0x10126031u); f_101226d0();
  /* 10126031 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126034 pop ecx */
  ECX = (pop32());
  /* 10126035 ret  */
  ESPCHK(0x10125fd0u, _esp0);
  ESP += 4; return;
L_10126036:;
  /* 10126036 push 0x10133878 */
  push32((uint32_t)(0x10133878u));
  /* 1012603b call dword ptr [0x10136544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136544))), 0x10126041u);
  /* 10126041 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126044 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10126046 je 0x101262e3 */
  if (C.zf) goto L_101262e3;
  /* 1012604c mov edx, dword ptr [0x101362b4] */
  EDX = (r32((uint32_t)(0x101362b4)));
  /* 10126052 push edx */
  push32((uint32_t)(EDX));
  /* 10126053 call 0x101226f0 */
  push32(0x10126058u); f_101226f0();
  /* 10126058 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012605b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012605d jne 0x101260d2 */
  if (!C.zf) goto L_101260d2;
  /* 1012605f push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10126064 push 3 */
  push32((uint32_t)(0x3u));
  /* 10126066 push 5 */
  push32((uint32_t)(0x5u));
  /* 10126068 call 0x10122610 */
  push32(0x1012606du); f_10122610();
  /* 1012606d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126070 call 0x10122670 */
  push32(0x10126075u); f_10122670();
  /* 10126075 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10126078 jne 0x10126099 */
  if (!C.zf) goto L_10126099;
  /* 1012607a push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 1012607f push 0 */
  push32((uint32_t)(0x0u));
  /* 10126081 push 4 */
  push32((uint32_t)(0x4u));
  /* 10126083 call 0x10122610 */
  push32(0x10126088u); f_10122610();
  /* 10126088 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 1012608d push 2 */
  push32((uint32_t)(0x2u));
  /* 1012608f push 4 */
  push32((uint32_t)(0x4u));
  /* 10126091 call 0x10122610 */
  push32(0x10126096u); f_10122610();
  /* 10126096 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10126099:;
  /* 10126099 call 0x10122670 */
  push32(0x1012609eu); f_10122670();
  /* 1012609e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101260a1 jne 0x101260c2 */
  if (!C.zf) goto L_101260c2;
  /* 101260a3 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 101260a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 101260aa push 4 */
  push32((uint32_t)(0x4u));
  /* 101260ac call 0x10122610 */
  push32(0x101260b1u); f_10122610();
  /* 101260b1 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 101260b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 101260b8 push 4 */
  push32((uint32_t)(0x4u));
  /* 101260ba call 0x10122610 */
  push32(0x101260bfu); f_10122610();
  /* 101260bf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101260c2:;
  /* 101260c2 mov eax, dword ptr [0x101362b4] */
  EAX = (r32((uint32_t)(0x101362b4)));
  /* 101260c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 101260c9 push eax */
  push32((uint32_t)(EAX));
  /* 101260ca call 0x101226d0 */
  push32(0x101260cfu); f_101226d0();
  /* 101260cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101260d2:;
  /* 101260d2 push 0x10136270 */
  push32((uint32_t)(0x10136270u));
  /* 101260d7 call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x101260ddu);
  /* 101260dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101260e0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101260e2 je 0x10126154 */
  if (C.zf) goto L_10126154;
  /* 101260e4 push 0x10136150 */
  push32((uint32_t)(0x10136150u));
  /* 101260e9 call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x101260efu);
  /* 101260ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101260f2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101260f4 jne 0x10126154 */
  if (!C.zf) goto L_10126154;
  /* 101260f6 push 0x10135f20 */
  push32((uint32_t)(0x10135f20u));
  /* 101260fb call dword ptr [0x10136544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136544))), 0x10126101u);
  /* 10126101 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126104 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10126106 je 0x10126154 */
  if (C.zf) goto L_10126154;
  /* 10126108 mov eax, dword ptr [0x101364bc] */
  EAX = (r32((uint32_t)(0x101364bc)));
  /* 1012610d mov cl, byte ptr [0x101362b4] */
  CL = (r8((uint32_t)(0x101362b4)));
  /* 10126113 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10126115 mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 10126119 je 0x1012612e */
  if (C.zf) goto L_1012612e;
  /* 1012611b mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 1012611f push 5 */
  push32((uint32_t)(0x5u));
  /* 10126121 push 0x10136150 */
  push32((uint32_t)(0x10136150u));
  /* 10126126 push edx */
  push32((uint32_t)(EDX));
  /* 10126127 call eax */
  call_ind((uint32_t)(EAX), 0x10126129u);
  /* 10126129 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012612c jmp 0x10126130 */
  goto L_10126130;
L_1012612e:;
  /* 1012612e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10126130:;
  /* 10126130 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10126133 push 0 */
  push32((uint32_t)(0x0u));
  /* 10126135 lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 10126138 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 1012613d imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1012613f sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10126142 mov eax, edx */
  EAX = (EDX);
  /* 10126144 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 10126147 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10126149 push edx */
  push32((uint32_t)(EDX));
  /* 1012614a push 5 */
  push32((uint32_t)(0x5u));
  /* 1012614c call 0x10122f90 */
  push32(0x10126151u); f_10122f90();
  /* 10126151 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10126154:;
  /* 10126154 push 0x10136150 */
  push32((uint32_t)(0x10136150u));
  /* 10126159 call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x1012615fu);
  /* 1012615f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126162 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10126164 je 0x10126279 */
  if (C.zf) goto L_10126279;
  /* 1012616a push 0x10136020 */
  push32((uint32_t)(0x10136020u));
  /* 1012616f call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x10126175u);
  /* 10126175 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126178 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1012617a jne 0x10126279 */
  if (!C.zf) goto L_10126279;
  /* 10126180 mov eax, dword ptr [0x101364bc] */
  EAX = (r32((uint32_t)(0x101364bc)));
  /* 10126185 mov cl, byte ptr [0x101362b4] */
  CL = (r8((uint32_t)(0x101362b4)));
  /* 1012618b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012618d mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 10126191 je 0x101261a6 */
  if (C.zf) goto L_101261a6;
  /* 10126193 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 10126197 push 3 */
  push32((uint32_t)(0x3u));
  /* 10126199 push 0x10136020 */
  push32((uint32_t)(0x10136020u));
  /* 1012619e push edx */
  push32((uint32_t)(EDX));
  /* 1012619f call eax */
  call_ind((uint32_t)(EAX), 0x101261a1u);
  /* 101261a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101261a4 jmp 0x101261a8 */
  goto L_101261a8;
L_101261a6:;
  /* 101261a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101261a8:;
  /* 101261a8 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 101261ab push 2 */
  push32((uint32_t)(0x2u));
  /* 101261ad lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 101261b0 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 101261b5 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 101261b7 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 101261ba mov eax, edx */
  EAX = (EDX);
  /* 101261bc shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 101261bf add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101261c1 push edx */
  push32((uint32_t)(EDX));
  /* 101261c2 push 3 */
  push32((uint32_t)(0x3u));
  /* 101261c4 call 0x10122f90 */
  push32(0x101261c9u); f_10122f90();
  /* 101261c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101261cc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101261ce je 0x10126279 */
  if (C.zf) goto L_10126279;
  /* 101261d4 mov eax, dword ptr [0x101364bc] */
  EAX = (r32((uint32_t)(0x101364bc)));
  /* 101261d9 mov cl, byte ptr [0x101362b4] */
  CL = (r8((uint32_t)(0x101362b4)));
  /* 101261df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101261e1 mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 101261e5 je 0x101261fa */
  if (C.zf) goto L_101261fa;
  /* 101261e7 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 101261eb push 1 */
  push32((uint32_t)(0x1u));
  /* 101261ed push 0x10136020 */
  push32((uint32_t)(0x10136020u));
  /* 101261f2 push edx */
  push32((uint32_t)(EDX));
  /* 101261f3 call eax */
  call_ind((uint32_t)(EAX), 0x101261f5u);
  /* 101261f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101261f8 jmp 0x101261fc */
  goto L_101261fc;
L_101261fa:;
  /* 101261fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101261fc:;
  /* 101261fc lea ecx, [eax*8] */
  ECX = ((uint32_t)(EAX*8));
  /* 10126203 push 2 */
  push32((uint32_t)(0x2u));
  /* 10126205 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10126207 lea eax, [ecx + ecx*2] */
  EAX = ((uint32_t)(ECX + ECX*2));
  /* 1012620a lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1012620d mov eax, 0x51eb851f */
  EAX = (0x51eb851fu);
  /* 10126212 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10126214 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10126217 mov eax, edx */
  EAX = (EDX);
  /* 10126219 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 1012621c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012621e push edx */
  push32((uint32_t)(EDX));
  /* 1012621f push 1 */
  push32((uint32_t)(0x1u));
  /* 10126221 call 0x10122f90 */
  push32(0x10126226u); f_10122f90();
  /* 10126226 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126229 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1012622b je 0x10126279 */
  if (C.zf) goto L_10126279;
  /* 1012622d mov eax, dword ptr [0x101364bc] */
  EAX = (r32((uint32_t)(0x101364bc)));
  /* 10126232 mov cl, byte ptr [0x101362b4] */
  CL = (r8((uint32_t)(0x101362b4)));
  /* 10126238 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012623a mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 1012623e je 0x10126253 */
  if (C.zf) goto L_10126253;
  /* 10126240 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 10126244 push 4 */
  push32((uint32_t)(0x4u));
  /* 10126246 push 0x10136020 */
  push32((uint32_t)(0x10136020u));
  /* 1012624b push edx */
  push32((uint32_t)(EDX));
  /* 1012624c call eax */
  call_ind((uint32_t)(EAX), 0x1012624eu);
  /* 1012624e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126251 jmp 0x10126255 */
  goto L_10126255;
L_10126253:;
  /* 10126253 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10126255:;
  /* 10126255 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10126258 push 2 */
  push32((uint32_t)(0x2u));
  /* 1012625a lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 1012625d mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10126262 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10126264 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10126267 mov eax, edx */
  EAX = (EDX);
  /* 10126269 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 1012626c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012626e push edx */
  push32((uint32_t)(EDX));
  /* 1012626f push 4 */
  push32((uint32_t)(0x4u));
  /* 10126271 call 0x10122f90 */
  push32(0x10126276u); f_10122f90();
  /* 10126276 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10126279:;
  /* 10126279 push 2 */
  push32((uint32_t)(0x2u));
  /* 1012627b call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10126281u);
  /* 10126281 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126284 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10126289 jle 0x101262ae */
  if ((C.zf||C.sf!=C.of)) goto L_101262ae;
  /* 1012628b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10126290 push 2 */
  push32((uint32_t)(0x2u));
  /* 10126292 push 0 */
  push32((uint32_t)(0x0u));
  /* 10126294 call 0x10122610 */
  push32(0x10126299u); f_10122610();
  /* 10126299 push 2 */
  push32((uint32_t)(0x2u));
  /* 1012629b call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x101262a1u);
  /* 101262a1 push eax */
  push32((uint32_t)(EAX));
  /* 101262a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 101262a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 101262a6 call 0x10122610 */
  push32(0x101262abu); f_10122610();
  /* 101262ab add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101262ae:;
  /* 101262ae push 0 */
  push32((uint32_t)(0x0u));
  /* 101262b0 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x101262b6u);
  /* 101262b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101262b9 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101262be jle 0x101262e3 */
  if ((C.zf||C.sf!=C.of)) goto L_101262e3;
  /* 101262c0 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 101262c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 101262c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 101262c9 call 0x10122610 */
  push32(0x101262ceu); f_10122610();
  /* 101262ce push 0 */
  push32((uint32_t)(0x0u));
  /* 101262d0 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x101262d6u);
  /* 101262d6 push eax */
  push32((uint32_t)(EAX));
  /* 101262d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 101262d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 101262db call 0x10122610 */
  push32(0x101262e0u); f_10122610();
  /* 101262e0 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101262e3:;
  /* 101262e3 pop ecx */
  ECX = (pop32());
  /* 101262e4 ret  */
  ESPCHK(0x10125fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_100062f0 @ 0x101262f0 (818 bytes, 268 insns) */
void f_101262f0(void) {
  FTRACE(0x101262f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101262f0 push ecx */
  push32((uint32_t)(ECX));
  /* 101262f1 push 4 */
  push32((uint32_t)(0x4u));
  /* 101262f3 push 4 */
  push32((uint32_t)(0x4u));
  /* 101262f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 101262f7 call dword ptr [0x10136514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136514))), 0x101262fdu);
  /* 101262fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126300 call dword ptr [0x10136570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136570))), 0x10126306u);
  /* 10126306 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10126308 je 0x10126620 */
  if (C.zf) goto L_10126620;
  /* 1012630e push 4 */
  push32((uint32_t)(0x4u));
  /* 10126310 push 4 */
  push32((uint32_t)(0x4u));
  /* 10126312 push 9 */
  push32((uint32_t)(0x9u));
  /* 10126314 call dword ptr [0x10136514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136514))), 0x1012631au);
  /* 1012631a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012631d call 0x10122670 */
  push32(0x10126322u); f_10122670();
  /* 10126322 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10126325 je 0x10126620 */
  if (C.zf) goto L_10126620;
  /* 1012632b call dword ptr [0x10136570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136570))), 0x10126331u);
  /* 10126331 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10126333 je 0x10126611 */
  if (C.zf) goto L_10126611;
  /* 10126339 push esi */
  push32((uint32_t)(ESI));
  /* 1012633a push edi */
  push32((uint32_t)(EDI));
  /* 1012633b push 4 */
  push32((uint32_t)(0x4u));
  /* 1012633d push 4 */
  push32((uint32_t)(0x4u));
  /* 1012633f push 9 */
  push32((uint32_t)(0x9u));
  /* 10126341 call dword ptr [0x10136514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136514))), 0x10126347u);
  /* 10126347 push 0x10136100 */
  push32((uint32_t)(0x10136100u));
  /* 1012634c call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x10126352u);
  /* 10126352 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126355 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10126357 jne 0x101263bf */
  if (!C.zf) goto L_101263bf;
  /* 10126359 mov al, byte ptr [0x101362b4] */
  AL = (r8((uint32_t)(0x101362b4)));
  /* 1012635e mov byte ptr [esp + 8], al */
  w8((uint32_t)(ESP + 0x8), (AL));
  /* 10126362 mov eax, dword ptr [0x101364bc] */
  EAX = (r32((uint32_t)(0x101364bc)));
  /* 10126367 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10126369 je 0x10126380 */
  if (C.zf) goto L_10126380;
  /* 1012636b mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1012636f push 3 */
  push32((uint32_t)(0x3u));
  /* 10126371 push 0x10136100 */
  push32((uint32_t)(0x10136100u));
  /* 10126376 push ecx */
  push32((uint32_t)(ECX));
  /* 10126377 call eax */
  call_ind((uint32_t)(EAX), 0x10126379u);
  /* 10126379 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012637c mov esi, eax */
  ESI = (EAX);
  /* 1012637e jmp 0x10126382 */
  goto L_10126382;
L_10126380:;
  /* 10126380 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10126382:;
  /* 10126382 push 3 */
  push32((uint32_t)(0x3u));
  /* 10126384 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x1012638au);
  /* 1012638a lea edx, [esi + esi*4] */
  EDX = ((uint32_t)(ESI + ESI*4));
  /* 1012638d mov edi, eax */
  EDI = (EAX);
  /* 1012638f mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10126394 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126397 lea ecx, [esi + edx*2] */
  ECX = ((uint32_t)(ESI + EDX*2));
  /* 1012639a imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1012639c sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 1012639f mov eax, edx */
  EAX = (EDX);
  /* 101263a1 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 101263a4 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101263a6 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101263a8 jge 0x101263b0 */
  if ((C.sf==C.of)) goto L_101263b0;
  /* 101263aa push 4 */
  push32((uint32_t)(0x4u));
  /* 101263ac push 4 */
  push32((uint32_t)(0x4u));
  /* 101263ae jmp 0x101263b4 */
  goto L_101263b4;
L_101263b0:;
  /* 101263b0 push 6 */
  push32((uint32_t)(0x6u));
  /* 101263b2 push 6 */
  push32((uint32_t)(0x6u));
L_101263b4:;
  /* 101263b4 push 9 */
  push32((uint32_t)(0x9u));
  /* 101263b6 call dword ptr [0x10136514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136514))), 0x101263bcu);
  /* 101263bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101263bf:;
  /* 101263bf push 0x10136020 */
  push32((uint32_t)(0x10136020u));
  /* 101263c4 call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x101263cau);
  /* 101263ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101263cd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101263cf jne 0x10126438 */
  if (!C.zf) goto L_10126438;
  /* 101263d1 mov eax, dword ptr [0x101364bc] */
  EAX = (r32((uint32_t)(0x101364bc)));
  /* 101263d6 mov cl, byte ptr [0x101362b4] */
  CL = (r8((uint32_t)(0x101362b4)));
  /* 101263dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101263de mov byte ptr [esp + 8], cl */
  w8((uint32_t)(ESP + 0x8), (CL));
  /* 101263e2 je 0x101263f9 */
  if (C.zf) goto L_101263f9;
  /* 101263e4 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 101263e8 push 3 */
  push32((uint32_t)(0x3u));
  /* 101263ea push 0x10136020 */
  push32((uint32_t)(0x10136020u));
  /* 101263ef push edx */
  push32((uint32_t)(EDX));
  /* 101263f0 call eax */
  call_ind((uint32_t)(EAX), 0x101263f2u);
  /* 101263f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101263f5 mov esi, eax */
  ESI = (EAX);
  /* 101263f7 jmp 0x101263fb */
  goto L_101263fb;
L_101263f9:;
  /* 101263f9 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_101263fb:;
  /* 101263fb push 3 */
  push32((uint32_t)(0x3u));
  /* 101263fd call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10126403u);
  /* 10126403 mov edi, eax */
  EDI = (EAX);
  /* 10126405 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 10126408 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012640b lea ecx, [esi + eax*2] */
  ECX = ((uint32_t)(ESI + EAX*2));
  /* 1012640e mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10126413 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10126415 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10126418 mov ecx, edx */
  ECX = (EDX);
  /* 1012641a shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 1012641d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012641f cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10126421 jge 0x10126429 */
  if ((C.sf==C.of)) goto L_10126429;
  /* 10126423 push 9 */
  push32((uint32_t)(0x9u));
  /* 10126425 push 2 */
  push32((uint32_t)(0x2u));
  /* 10126427 jmp 0x1012642d */
  goto L_1012642d;
L_10126429:;
  /* 10126429 push 6 */
  push32((uint32_t)(0x6u));
  /* 1012642b push 6 */
  push32((uint32_t)(0x6u));
L_1012642d:;
  /* 1012642d push 9 */
  push32((uint32_t)(0x9u));
  /* 1012642f call dword ptr [0x10136514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136514))), 0x10126435u);
  /* 10126435 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10126438:;
  /* 10126438 push 0x10136150 */
  push32((uint32_t)(0x10136150u));
  /* 1012643d call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x10126443u);
  /* 10126443 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126446 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10126448 jne 0x101264af */
  if (!C.zf) goto L_101264af;
  /* 1012644a mov eax, dword ptr [0x101364bc] */
  EAX = (r32((uint32_t)(0x101364bc)));
  /* 1012644f mov dl, byte ptr [0x101362b4] */
  DL = (r8((uint32_t)(0x101362b4)));
  /* 10126455 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10126457 mov byte ptr [esp + 8], dl */
  w8((uint32_t)(ESP + 0x8), (DL));
  /* 1012645b je 0x10126472 */
  if (C.zf) goto L_10126472;
  /* 1012645d mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10126461 push 3 */
  push32((uint32_t)(0x3u));
  /* 10126463 push 0x10136150 */
  push32((uint32_t)(0x10136150u));
  /* 10126468 push ecx */
  push32((uint32_t)(ECX));
  /* 10126469 call eax */
  call_ind((uint32_t)(EAX), 0x1012646bu);
  /* 1012646b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012646e mov esi, eax */
  ESI = (EAX);
  /* 10126470 jmp 0x10126474 */
  goto L_10126474;
L_10126472:;
  /* 10126472 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10126474:;
  /* 10126474 push 3 */
  push32((uint32_t)(0x3u));
  /* 10126476 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x1012647cu);
  /* 1012647c lea edx, [esi + esi*2] */
  EDX = ((uint32_t)(ESI + ESI*2));
  /* 1012647f mov edi, eax */
  EDI = (EAX);
  /* 10126481 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10126486 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126489 lea ecx, [esi + edx*4] */
  ECX = ((uint32_t)(ESI + EDX*4));
  /* 1012648c imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1012648e sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10126491 mov eax, edx */
  EAX = (EDX);
  /* 10126493 push 1 */
  push32((uint32_t)(0x1u));
  /* 10126495 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 10126498 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012649a push 9 */
  push32((uint32_t)(0x9u));
  /* 1012649c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012649e jge 0x101264a4 */
  if ((C.sf==C.of)) goto L_101264a4;
  /* 101264a0 push 9 */
  push32((uint32_t)(0x9u));
  /* 101264a2 jmp 0x101264a6 */
  goto L_101264a6;
L_101264a4:;
  /* 101264a4 push 6 */
  push32((uint32_t)(0x6u));
L_101264a6:;
  /* 101264a6 call dword ptr [0x10136514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136514))), 0x101264acu);
  /* 101264ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101264af:;
  /* 101264af push 0x10136340 */
  push32((uint32_t)(0x10136340u));
  /* 101264b4 call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x101264bau);
  /* 101264ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101264bd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101264bf je 0x101264d3 */
  if (C.zf) goto L_101264d3;
  /* 101264c1 push 0x10136288 */
  push32((uint32_t)(0x10136288u));
  /* 101264c6 call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x101264ccu);
  /* 101264cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101264cf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101264d1 jne 0x101264f4 */
  if (!C.zf) goto L_101264f4;
L_101264d3:;
  /* 101264d3 push 3 */
  push32((uint32_t)(0x3u));
  /* 101264d5 call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x101264dbu);
  /* 101264db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101264de cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101264e3 jge 0x101264f4 */
  if ((C.sf==C.of)) goto L_101264f4;
  /* 101264e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 101264e7 push 4 */
  push32((uint32_t)(0x4u));
  /* 101264e9 push 9 */
  push32((uint32_t)(0x9u));
  /* 101264eb call dword ptr [0x10136514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136514))), 0x101264f1u);
  /* 101264f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101264f4:;
  /* 101264f4 push 0x10135fe8 */
  push32((uint32_t)(0x10135fe8u));
  /* 101264f9 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x101264ffu);
  /* 101264ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126502 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10126504 jne 0x10126577 */
  if (!C.zf) goto L_10126577;
  /* 10126506 call 0x10122780 */
  push32(0x1012650bu); f_10122780();
  /* 1012650b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012650e jge 0x10126577 */
  if ((C.sf==C.of)) goto L_10126577;
  /* 10126510 mov eax, dword ptr [0x101364b8] */
  EAX = (r32((uint32_t)(0x101364b8)));
  /* 10126515 mov cl, byte ptr [0x101362b4] */
  CL = (r8((uint32_t)(0x101362b4)));
  /* 1012651b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012651d mov byte ptr [esp + 8], cl */
  w8((uint32_t)(ESP + 0x8), (CL));
  /* 10126521 je 0x10126538 */
  if (C.zf) goto L_10126538;
  /* 10126523 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10126527 push 2 */
  push32((uint32_t)(0x2u));
  /* 10126529 push 0x10135fe8 */
  push32((uint32_t)(0x10135fe8u));
  /* 1012652e push edx */
  push32((uint32_t)(EDX));
  /* 1012652f call eax */
  call_ind((uint32_t)(EAX), 0x10126531u);
  /* 10126531 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126534 mov esi, eax */
  ESI = (EAX);
  /* 10126536 jmp 0x1012653a */
  goto L_1012653a;
L_10126538:;
  /* 10126538 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1012653a:;
  /* 1012653a push 2 */
  push32((uint32_t)(0x2u));
  /* 1012653c call dword ptr [0x1013653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013653c))), 0x10126542u);
  /* 10126542 mov edi, eax */
  EDI = (EAX);
  /* 10126544 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 10126547 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012654a lea ecx, [esi + eax*2] */
  ECX = ((uint32_t)(ESI + EAX*2));
  /* 1012654d mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10126552 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10126554 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10126557 mov ecx, edx */
  ECX = (EDX);
  /* 10126559 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 1012655c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012655e cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10126560 jge 0x10126568 */
  if ((C.sf==C.of)) goto L_10126568;
  /* 10126562 push 3 */
  push32((uint32_t)(0x3u));
  /* 10126564 push 5 */
  push32((uint32_t)(0x5u));
  /* 10126566 jmp 0x1012656c */
  goto L_1012656c;
L_10126568:;
  /* 10126568 push 1 */
  push32((uint32_t)(0x1u));
  /* 1012656a push 7 */
  push32((uint32_t)(0x7u));
L_1012656c:;
  /* 1012656c push 9 */
  push32((uint32_t)(0x9u));
  /* 1012656e call dword ptr [0x10136514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136514))), 0x10126574u);
  /* 10126574 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10126577:;
  /* 10126577 push 0x10136270 */
  push32((uint32_t)(0x10136270u));
  /* 1012657c call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x10126582u);
  /* 10126582 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126585 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10126587 pop edi */
  EDI = (pop32());
  /* 10126588 pop esi */
  ESI = (pop32());
  /* 10126589 jne 0x1012659a */
  if (!C.zf) goto L_1012659a;
  /* 1012658b push 1 */
  push32((uint32_t)(0x1u));
  /* 1012658d push 1 */
  push32((uint32_t)(0x1u));
  /* 1012658f push 9 */
  push32((uint32_t)(0x9u));
  /* 10126591 call dword ptr [0x10136514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136514))), 0x10126597u);
  /* 10126597 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1012659a:;
  /* 1012659a push 0x10136078 */
  push32((uint32_t)(0x10136078u));
  /* 1012659f call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x101265a5u);
  /* 101265a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101265a8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101265aa je 0x101265be */
  if (C.zf) goto L_101265be;
  /* 101265ac push 0x10133660 */
  push32((uint32_t)(0x10133660u));
  /* 101265b1 call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x101265b7u);
  /* 101265b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101265ba test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101265bc jne 0x101265cd */
  if (!C.zf) goto L_101265cd;
L_101265be:;
  /* 101265be push 1 */
  push32((uint32_t)(0x1u));
  /* 101265c0 push 4 */
  push32((uint32_t)(0x4u));
  /* 101265c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 101265c4 call dword ptr [0x10136514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136514))), 0x101265cau);
  /* 101265ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101265cd:;
  /* 101265cd push 0x10135f20 */
  push32((uint32_t)(0x10135f20u));
  /* 101265d2 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x101265d8u);
  /* 101265d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101265db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101265dd jne 0x101265ee */
  if (!C.zf) goto L_101265ee;
  /* 101265df push 4 */
  push32((uint32_t)(0x4u));
  /* 101265e1 push 4 */
  push32((uint32_t)(0x4u));
  /* 101265e3 push 6 */
  push32((uint32_t)(0x6u));
  /* 101265e5 call dword ptr [0x10136514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136514))), 0x101265ebu);
  /* 101265eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101265ee:;
  /* 101265ee push 0x10136378 */
  push32((uint32_t)(0x10136378u));
  /* 101265f3 call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x101265f9u);
  /* 101265f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101265fc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101265fe jne 0x10126620 */
  if (!C.zf) goto L_10126620;
  /* 10126600 push 1 */
  push32((uint32_t)(0x1u));
  /* 10126602 push 1 */
  push32((uint32_t)(0x1u));
  /* 10126604 push 9 */
  push32((uint32_t)(0x9u));
  /* 10126606 call dword ptr [0x10136514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136514))), 0x1012660cu);
  /* 1012660c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012660f pop ecx */
  ECX = (pop32());
  /* 10126610 ret  */
  ESPCHK(0x101262f0u, _esp0);
  ESP += 4; return;
L_10126611:;
  /* 10126611 push 3 */
  push32((uint32_t)(0x3u));
  /* 10126613 push 6 */
  push32((uint32_t)(0x6u));
  /* 10126615 push 0 */
  push32((uint32_t)(0x0u));
  /* 10126617 call dword ptr [0x10136514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136514))), 0x1012661du);
  /* 1012661d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10126620:;
  /* 10126620 pop ecx */
  ECX = (pop32());
  /* 10126621 ret  */
  ESPCHK(0x101262f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006630 @ 0x10126630 (174 bytes, 50 insns) */
void f_10126630(void) {
  FTRACE(0x10126630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10126630 push 0x10136598 */
  push32((uint32_t)(0x10136598u));
  /* 10126635 call 0x10122720 */
  push32(0x1012663au); f_10122720();
  /* 1012663a push 0x10136340 */
  push32((uint32_t)(0x10136340u));
  /* 1012663f call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x10126645u);
  /* 10126645 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126648 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1012664a je 0x1012666c */
  if (C.zf) goto L_1012666c;
  /* 1012664c push 0x10136288 */
  push32((uint32_t)(0x10136288u));
  /* 10126651 call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x10126657u);
  /* 10126657 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012665a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1012665c je 0x1012666c */
  if (C.zf) goto L_1012666c;
  /* 1012665e push 0x1012f16c */
  push32((uint32_t)(0x1012f16cu));
  /* 10126663 call 0x10122720 */
  push32(0x10126668u); f_10122720();
  /* 10126668 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012666b ret  */
  ESPCHK(0x10126630u, _esp0);
  ESP += 4; return;
L_1012666c:;
  /* 1012666c mov eax, dword ptr [0x10135f58] */
  EAX = (r32((uint32_t)(0x10135f58)));
  /* 10126671 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10126674 je 0x101266d2 */
  if (C.zf) goto L_101266d2;
  /* 10126676 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10126679 je 0x101266d2 */
  if (C.zf) goto L_101266d2;
  /* 1012667b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012667e je 0x101266d2 */
  if (C.zf) goto L_101266d2;
  /* 10126680 push 0x10136270 */
  push32((uint32_t)(0x10136270u));
  /* 10126685 call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x1012668bu);
  /* 1012668b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012668e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10126690 je 0x101266b2 */
  if (C.zf) goto L_101266b2;
  /* 10126692 push 0x10136150 */
  push32((uint32_t)(0x10136150u));
  /* 10126697 call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x1012669du);
  /* 1012669d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101266a0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101266a2 jne 0x101266b2 */
  if (!C.zf) goto L_101266b2;
  /* 101266a4 push 0x10136598 */
  push32((uint32_t)(0x10136598u));
  /* 101266a9 call 0x10122720 */
  push32(0x101266aeu); f_10122720();
  /* 101266ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101266b1 ret  */
  ESPCHK(0x10126630u, _esp0);
  ESP += 4; return;
L_101266b2:;
  /* 101266b2 push 0x10136150 */
  push32((uint32_t)(0x10136150u));
  /* 101266b7 call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x101266bdu);
  /* 101266bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101266c0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101266c2 je 0x101266dd */
  if (C.zf) goto L_101266dd;
  /* 101266c4 push 0x1012f1d8 */
  push32((uint32_t)(0x1012f1d8u));
  /* 101266c9 call 0x10122720 */
  push32(0x101266ceu); f_10122720();
  /* 101266ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101266d1 ret  */
  ESPCHK(0x10126630u, _esp0);
  ESP += 4; return;
L_101266d2:;
  /* 101266d2 push 0x1012f1d8 */
  push32((uint32_t)(0x1012f1d8u));
  /* 101266d7 call 0x10122720 */
  push32(0x101266dcu); f_10122720();
  /* 101266dc pop ecx */
  ECX = (pop32());
L_101266dd:;
  /* 101266dd ret  */
  ESPCHK(0x10126630u, _esp0);
  ESP += 4; return;
}

/* FUN_100066e0 @ 0x101266e0 (70 bytes, 22 insns) */
void f_101266e0(void) {
  FTRACE(0x101266e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101266e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 101266e2 call 0x10122760 */
  push32(0x101266e7u); f_10122760();
  /* 101266e7 push 0x10133688 */
  push32((uint32_t)(0x10133688u));
  /* 101266ec call 0x10125270 */
  push32(0x101266f1u); f_10125270();
  /* 101266f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101266f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101266f6 je 0x10126702 */
  if (C.zf) goto L_10126702;
  /* 101266f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 101266fa call 0x10122760 */
  push32(0x101266ffu); f_10122760();
  /* 101266ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10126702:;
  /* 10126702 call 0x10122770 */
  push32(0x10126707u); f_10122770();
  /* 10126707 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10126709 jg 0x1012671d */
  if ((!C.zf&&C.sf==C.of)) goto L_1012671d;
  /* 1012670b push 0x101338d8 */
  push32((uint32_t)(0x101338d8u));
  /* 10126710 call dword ptr [0x10136544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136544))), 0x10126716u);
  /* 10126716 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126719 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012671b jle 0x10126725 */
  if ((C.zf||C.sf!=C.of)) goto L_10126725;
L_1012671d:;
  /* 1012671d push 0 */
  push32((uint32_t)(0x0u));
  /* 1012671f call 0x10122760 */
  push32(0x10126724u); f_10122760();
  /* 10126724 pop ecx */
  ECX = (pop32());
L_10126725:;
  /* 10126725 ret  */
  ESPCHK(0x101266e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006730 @ 0x10126730 (235 bytes, 66 insns) */
void f_10126730(void) {
  FTRACE(0x10126730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10126730 push 0x10136198 */
  push32((uint32_t)(0x10136198u));
  /* 10126735 call dword ptr [0x1013654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013654c))), 0x1012673bu);
  /* 1012673b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012673e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10126740 je 0x10126756 */
  if (C.zf) goto L_10126756;
  /* 10126742 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10126744 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10126746 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10126748 push 0x10136370 */
  push32((uint32_t)(0x10136370u));
  /* 1012674d call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10126753u);
  /* 10126753 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10126756:;
  /* 10126756 push 0x101360b0 */
  push32((uint32_t)(0x101360b0u));
  /* 1012675b call dword ptr [0x1013654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013654c))), 0x10126761u);
  /* 10126761 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126764 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10126766 je 0x1012677c */
  if (C.zf) goto L_1012677c;
  /* 10126768 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1012676a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1012676c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1012676e push 0x10133668 */
  push32((uint32_t)(0x10133668u));
  /* 10126773 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10126779u);
  /* 10126779 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1012677c:;
  /* 1012677c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1012677e push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10126780 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10126782 push 0x101338c8 */
  push32((uint32_t)(0x101338c8u));
  /* 10126787 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x1012678du);
  /* 1012678d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1012678f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10126791 push 0x101361d8 */
  push32((uint32_t)(0x101361d8u));
  /* 10126796 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012679cu);
  /* 1012679c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1012679e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101267a0 push 0x101361d0 */
  push32((uint32_t)(0x101361d0u));
  /* 101267a5 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101267abu);
  /* 101267ab push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101267ad push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101267af push 0x101361a0 */
  push32((uint32_t)(0x101361a0u));
  /* 101267b4 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101267bau);
  /* 101267ba push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101267bc push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101267be push 0x10136198 */
  push32((uint32_t)(0x10136198u));
  /* 101267c3 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101267c9u);
  /* 101267c9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101267cc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101267ce push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101267d0 push 0x101361a8 */
  push32((uint32_t)(0x101361a8u));
  /* 101267d5 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101267dbu);
  /* 101267db push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101267dd push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101267df push 0x10136098 */
  push32((uint32_t)(0x10136098u));
  /* 101267e4 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101267eau);
  /* 101267ea push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101267ec push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101267ee push 0x101360a0 */
  push32((uint32_t)(0x101360a0u));
  /* 101267f3 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101267f9u);
  /* 101267f9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101267fb push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101267fd push 0x101360a8 */
  push32((uint32_t)(0x101360a8u));
  /* 10126802 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10126808u);
  /* 10126808 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1012680a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1012680c push 0x101360b0 */
  push32((uint32_t)(0x101360b0u));
  /* 10126811 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x10126817u);
  /* 10126817 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012681a ret  */
  ESPCHK(0x10126730u, _esp0);
  ESP += 4; return;
}

/* FUN_10006820 @ 0x10126820 (303 bytes, 90 insns) */
void f_10126820(void) {
  FTRACE(0x10126820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10126820 push ecx */
  push32((uint32_t)(ECX));
  /* 10126821 push ebx */
  push32((uint32_t)(EBX));
  /* 10126822 push ebp */
  push32((uint32_t)(EBP));
  /* 10126823 push esi */
  push32((uint32_t)(ESI));
  /* 10126824 push edi */
  push32((uint32_t)(EDI));
  /* 10126825 push 0x101338d8 */
  push32((uint32_t)(0x101338d8u));
  /* 1012682a call dword ptr [0x10136544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136544))), 0x10126830u);
  /* 10126830 push 0x10136250 */
  push32((uint32_t)(0x10136250u));
  /* 10126835 mov ebx, eax */
  EBX = (EAX);
  /* 10126837 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x1012683du);
  /* 1012683d push 0x10136250 */
  push32((uint32_t)(0x10136250u));
  /* 10126842 mov edi, eax */
  EDI = (EAX);
  /* 10126844 call dword ptr [0x10136544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136544))), 0x1012684au);
  /* 1012684a push 0x10135f20 */
  push32((uint32_t)(0x10135f20u));
  /* 1012684f mov ebp, eax */
  EBP = (EAX);
  /* 10126851 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10126857u);
  /* 10126857 push 0x10135f20 */
  push32((uint32_t)(0x10135f20u));
  /* 1012685c mov esi, eax */
  ESI = (EAX);
  /* 1012685e call dword ptr [0x10136544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136544))), 0x10126864u);
  /* 10126864 push 0x101338d8 */
  push32((uint32_t)(0x101338d8u));
  /* 10126869 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 1012686d call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10126873u);
  /* 10126873 mov edx, dword ptr [esp + 0x28] */
  EDX = (r32((uint32_t)(ESP + 0x28)));
  /* 10126877 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012687a sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012687c add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1012687e sub esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10126880 sub esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10126882 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10126884 pop edi */
  EDI = (pop32());
  /* 10126885 pop esi */
  ESI = (pop32());
  /* 10126886 pop ebp */
  EBP = (pop32());
  /* 10126887 pop ebx */
  EBX = (pop32());
  /* 10126888 jne 0x101268f0 */
  if (!C.zf) goto L_101268f0;
  /* 1012688a cmp dword ptr [0x101361b0], 0x28 */
  { uint32_t _a=(r32((uint32_t)(0x101361b0))),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10126891 jle 0x101268f0 */
  if ((C.zf||C.sf!=C.of)) goto L_101268f0;
  /* 10126893 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10126895 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10126897 push 4 */
  push32((uint32_t)(0x4u));
  /* 10126899 push 0x101338d8 */
  push32((uint32_t)(0x101338d8u));
  /* 1012689e call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x101268a4u);
  /* 101268a4 push 0x101361b8 */
  push32((uint32_t)(0x101361b8u));
  /* 101268a9 call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x101268afu);
  /* 101268af add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101268b2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101268b4 je 0x101268ca */
  if (C.zf) goto L_101268ca;
  /* 101268b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101268b8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101268ba push 6 */
  push32((uint32_t)(0x6u));
  /* 101268bc push 0x101338d8 */
  push32((uint32_t)(0x101338d8u));
  /* 101268c1 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x101268c7u);
  /* 101268c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101268ca:;
  /* 101268ca push 0x10136020 */
  push32((uint32_t)(0x10136020u));
  /* 101268cf call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x101268d5u);
  /* 101268d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101268d8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101268da je 0x101268f0 */
  if (C.zf) goto L_101268f0;
  /* 101268dc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101268de push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101268e0 push 8 */
  push32((uint32_t)(0x8u));
  /* 101268e2 push 0x101338d8 */
  push32((uint32_t)(0x101338d8u));
  /* 101268e7 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x101268edu);
  /* 101268ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101268f0:;
  /* 101268f0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101268f2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101268f4 push 0x101362e8 */
  push32((uint32_t)(0x101362e8u));
  /* 101268f9 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x101268ffu);
  /* 101268ff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10126901 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10126903 push 0x101362d0 */
  push32((uint32_t)(0x101362d0u));
  /* 10126908 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012690eu);
  /* 1012690e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10126910 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10126912 push 0x101362e0 */
  push32((uint32_t)(0x101362e0u));
  /* 10126917 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012691du);
  /* 1012691d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1012691f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10126921 push 0x101362c0 */
  push32((uint32_t)(0x101362c0u));
  /* 10126926 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012692cu);
  /* 1012692c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1012692e push 0xf */
  push32((uint32_t)(0xfu));
  /* 10126930 push 0x101362c8 */
  push32((uint32_t)(0x101362c8u));
  /* 10126935 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012693bu);
  /* 1012693b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1012693d push 0xa */
  push32((uint32_t)(0xau));
  /* 1012693f push 0x101362b8 */
  push32((uint32_t)(0x101362b8u));
  /* 10126944 call dword ptr [0x10136508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136508))), 0x1012694au);
  /* 1012694a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012694d pop ecx */
  ECX = (pop32());
  /* 1012694e ret  */
  ESPCHK(0x10126820u, _esp0);
  ESP += 4; return;
}

/* FUN_10006950 @ 0x10126950 (517 bytes, 145 insns) */
void f_10126950(void) {
  FTRACE(0x10126950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10126950 push esi */
  push32((uint32_t)(ESI));
  /* 10126951 push 0x10136258 */
  push32((uint32_t)(0x10136258u));
  /* 10126956 call dword ptr [0x10136544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136544))), 0x1012695cu);
  /* 1012695c push 0x10136258 */
  push32((uint32_t)(0x10136258u));
  /* 10126961 mov esi, eax */
  ESI = (EAX);
  /* 10126963 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10126969u);
  /* 10126969 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012696c sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012696e jne 0x10126984 */
  if (!C.zf) goto L_10126984;
  /* 10126970 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10126972 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10126974 push 5 */
  push32((uint32_t)(0x5u));
  /* 10126976 push 0x10136258 */
  push32((uint32_t)(0x10136258u));
  /* 1012697b call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10126981u);
  /* 10126981 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10126984:;
  /* 10126984 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10126986 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10126988 push 1 */
  push32((uint32_t)(0x1u));
  /* 1012698a push 0x10135fb8 */
  push32((uint32_t)(0x10135fb8u));
  /* 1012698f call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10126995u);
  /* 10126995 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10126997 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10126999 push 1 */
  push32((uint32_t)(0x1u));
  /* 1012699b push 0x101361e8 */
  push32((uint32_t)(0x101361e8u));
  /* 101269a0 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x101269a6u);
  /* 101269a6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101269a8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101269aa push 2 */
  push32((uint32_t)(0x2u));
  /* 101269ac push 0x10136250 */
  push32((uint32_t)(0x10136250u));
  /* 101269b1 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x101269b7u);
  /* 101269b7 push 0x10136250 */
  push32((uint32_t)(0x10136250u));
  /* 101269bc call dword ptr [0x10136544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136544))), 0x101269c2u);
  /* 101269c2 push 0x10136250 */
  push32((uint32_t)(0x10136250u));
  /* 101269c7 mov esi, eax */
  ESI = (EAX);
  /* 101269c9 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x101269cfu);
  /* 101269cf add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101269d2 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101269d4 jne 0x10126b53 */
  if (!C.zf) goto L_10126b53;
  /* 101269da push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101269dc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101269de push 1 */
  push32((uint32_t)(0x1u));
  /* 101269e0 push 0x10135f20 */
  push32((uint32_t)(0x10135f20u));
  /* 101269e5 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x101269ebu);
  /* 101269eb push 0x10135f20 */
  push32((uint32_t)(0x10135f20u));
  /* 101269f0 call dword ptr [0x10136544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136544))), 0x101269f6u);
  /* 101269f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101269f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101269fb je 0x10126b53 */
  if (C.zf) goto L_10126b53;
  /* 10126a01 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10126a03 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10126a05 push 1 */
  push32((uint32_t)(0x1u));
  /* 10126a07 push 0x10135fd0 */
  push32((uint32_t)(0x10135fd0u));
  /* 10126a0c call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10126a12u);
  /* 10126a12 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10126a14 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10126a16 push 1 */
  push32((uint32_t)(0x1u));
  /* 10126a18 push 0x10135fd8 */
  push32((uint32_t)(0x10135fd8u));
  /* 10126a1d call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10126a23u);
  /* 10126a23 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10126a25 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10126a27 push 1 */
  push32((uint32_t)(0x1u));
  /* 10126a29 push 0x10133878 */
  push32((uint32_t)(0x10133878u));
  /* 10126a2e call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10126a34u);
  /* 10126a34 push 0x10133878 */
  push32((uint32_t)(0x10133878u));
  /* 10126a39 call dword ptr [0x10136544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136544))), 0x10126a3fu);
  /* 10126a3f add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126a42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10126a44 je 0x10126b53 */
  if (C.zf) goto L_10126b53;
  /* 10126a4a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10126a4c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10126a4e push 1 */
  push32((uint32_t)(0x1u));
  /* 10126a50 push 0x10135fe8 */
  push32((uint32_t)(0x10135fe8u));
  /* 10126a55 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10126a5bu);
  /* 10126a5b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10126a5d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10126a5f push 1 */
  push32((uint32_t)(0x1u));
  /* 10126a61 push 0x101360f8 */
  push32((uint32_t)(0x101360f8u));
  /* 10126a66 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10126a6cu);
  /* 10126a6c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10126a6e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10126a70 push 1 */
  push32((uint32_t)(0x1u));
  /* 10126a72 push 0x10133618 */
  push32((uint32_t)(0x10133618u));
  /* 10126a77 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10126a7du);
  /* 10126a7d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10126a7f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10126a81 push 1 */
  push32((uint32_t)(0x1u));
  /* 10126a83 push 0x101360d8 */
  push32((uint32_t)(0x101360d8u));
  /* 10126a88 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10126a8eu);
  /* 10126a8e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126a91 push 0x10136020 */
  push32((uint32_t)(0x10136020u));
  /* 10126a96 call dword ptr [0x10136550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136550))), 0x10126a9cu);
  /* 10126a9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126a9f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10126aa1 je 0x10126b53 */
  if (C.zf) goto L_10126b53;
  /* 10126aa7 push 0x10135fb8 */
  push32((uint32_t)(0x10135fb8u));
  /* 10126aac call dword ptr [0x10136544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136544))), 0x10126ab2u);
  /* 10126ab2 push 0x10135fb8 */
  push32((uint32_t)(0x10135fb8u));
  /* 10126ab7 mov esi, eax */
  ESI = (EAX);
  /* 10126ab9 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10126abfu);
  /* 10126abf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126ac2 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10126ac4 jne 0x10126aed */
  if (!C.zf) goto L_10126aed;
  /* 10126ac6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10126ac8 call 0x10122730 */
  push32(0x10126acdu); f_10122730();
  /* 10126acd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126ad0 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10126ad3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10126ad5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10126ad7 jge 0x10126add */
  if ((C.sf==C.of)) goto L_10126add;
  /* 10126ad9 push 6 */
  push32((uint32_t)(0x6u));
  /* 10126adb jmp 0x10126adf */
  goto L_10126adf;
L_10126add:;
  /* 10126add push 4 */
  push32((uint32_t)(0x4u));
L_10126adf:;
  /* 10126adf push 0x10135fb8 */
  push32((uint32_t)(0x10135fb8u));
  /* 10126ae4 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10126aeau);
  /* 10126aea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10126aed:;
  /* 10126aed push 0x101360d8 */
  push32((uint32_t)(0x101360d8u));
  /* 10126af2 call dword ptr [0x10136544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136544))), 0x10126af8u);
  /* 10126af8 push 0x101360d8 */
  push32((uint32_t)(0x101360d8u));
  /* 10126afd mov esi, eax */
  ESI = (EAX);
  /* 10126aff call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10126b05u);
  /* 10126b05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126b08 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10126b0a jne 0x10126b20 */
  if (!C.zf) goto L_10126b20;
  /* 10126b0c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10126b0e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10126b10 push 7 */
  push32((uint32_t)(0x7u));
  /* 10126b12 push 0x101360d8 */
  push32((uint32_t)(0x101360d8u));
  /* 10126b17 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10126b1du);
  /* 10126b1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10126b20:;
  /* 10126b20 push 0x10133618 */
  push32((uint32_t)(0x10133618u));
  /* 10126b25 call dword ptr [0x10136544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136544))), 0x10126b2bu);
  /* 10126b2b push 0x10133618 */
  push32((uint32_t)(0x10133618u));
  /* 10126b30 mov esi, eax */
  ESI = (EAX);
  /* 10126b32 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10126b38u);
  /* 10126b38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126b3b sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10126b3d jne 0x10126b53 */
  if (!C.zf) goto L_10126b53;
  /* 10126b3f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10126b41 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10126b43 push 3 */
  push32((uint32_t)(0x3u));
  /* 10126b45 push 0x10133618 */
  push32((uint32_t)(0x10133618u));
  /* 10126b4a call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10126b50u);
  /* 10126b50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10126b53:;
  /* 10126b53 pop esi */
  ESI = (pop32());
  /* 10126b54 ret  */
  ESPCHK(0x10126950u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b60 @ 0x10126b60 (121 bytes, 36 insns) */
void f_10126b60(void) {
  FTRACE(0x10126b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10126b60 push 1 */
  push32((uint32_t)(0x1u));
  /* 10126b62 call 0x10122760 */
  push32(0x10126b67u); f_10122760();
  /* 10126b67 push 0x10133888 */
  push32((uint32_t)(0x10133888u));
  /* 10126b6c call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10126b72u);
  /* 10126b72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126b75 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10126b78 jge 0x10126b8d */
  if ((C.sf==C.of)) goto L_10126b8d;
  /* 10126b7a mov eax, dword ptr [0x101362b4] */
  EAX = (r32((uint32_t)(0x101362b4)));
  /* 10126b7f push 0 */
  push32((uint32_t)(0x0u));
  /* 10126b81 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10126b84 push eax */
  push32((uint32_t)(EAX));
  /* 10126b85 call 0x101226d0 */
  push32(0x10126b8au); f_101226d0();
  /* 10126b8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10126b8d:;
  /* 10126b8d push 0x10133888 */
  push32((uint32_t)(0x10133888u));
  /* 10126b92 call dword ptr [0x10136540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136540))), 0x10126b98u);
  /* 10126b98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126b9b cmp eax, 0x5f */
  { uint32_t _a=(EAX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10126b9e jle 0x10126bb4 */
  if ((C.zf||C.sf!=C.of)) goto L_10126bb4;
  /* 10126ba0 mov ecx, dword ptr [0x101362b4] */
  ECX = (r32((uint32_t)(0x101362b4)));
  /* 10126ba6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10126ba8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10126bab push ecx */
  push32((uint32_t)(ECX));
  /* 10126bac call 0x101226d0 */
  push32(0x10126bb1u); f_101226d0();
  /* 10126bb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10126bb4:;
  /* 10126bb4 mov edx, dword ptr [0x101362b4] */
  EDX = (r32((uint32_t)(0x101362b4)));
  /* 10126bba add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10126bbd push edx */
  push32((uint32_t)(EDX));
  /* 10126bbe call 0x101226f0 */
  push32(0x10126bc3u); f_101226f0();
  /* 10126bc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10126bc5 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10126bc8 push eax */
  push32((uint32_t)(EAX));
  /* 10126bc9 call 0x10122760 */
  push32(0x10126bceu); f_10122760();
  /* 10126bce push 0 */
  push32((uint32_t)(0x0u));
  /* 10126bd0 call 0x10122760 */
  push32(0x10126bd5u); f_10122760();
  /* 10126bd5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126bd8 ret  */
  ESPCHK(0x10126b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006be0 @ 0x10126be0 (86 bytes, 20 insns) */
void f_10126be0(void) {
  FTRACE(0x10126be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10126be0 mov eax, dword ptr [0x101362b4] */
  EAX = (r32((uint32_t)(0x101362b4)));
  /* 10126be5 mov ecx, dword ptr [eax*4 + 0x10135f98] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10135f98)));
  /* 10126bec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10126bee je 0x10126bf5 */
  if (C.zf) goto L_10126bf5;
  /* 10126bf0 call 0x101266e0 */
  push32(0x10126bf5u); f_101266e0();
L_10126bf5:;
  /* 10126bf5 call 0x10125df0 */
  push32(0x10126bfau); f_10125df0();
  /* 10126bfa call 0x10126730 */
  push32(0x10126bffu); f_10126730();
  /* 10126bff call 0x10122780 */
  push32(0x10126c04u); f_10122780();
  /* 10126c04 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10126c07 jge 0x10126c0e */
  if ((C.sf==C.of)) goto L_10126c0e;
  /* 10126c09 call 0x10126820 */
  push32(0x10126c0eu); f_10126820();
L_10126c0e:;
  /* 10126c0e call 0x10125bd0 */
  push32(0x10126c13u); f_10125bd0();
  /* 10126c13 call 0x10125a90 */
  push32(0x10126c18u); f_10125a90();
  /* 10126c18 call 0x10122780 */
  push32(0x10126c1du); f_10122780();
  /* 10126c1d cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10126c20 jge 0x10126c27 */
  if ((C.sf==C.of)) goto L_10126c27;
  /* 10126c22 call 0x101252b0 */
  push32(0x10126c27u); f_101252b0();
L_10126c27:;
  /* 10126c27 call 0x10125fd0 */
  push32(0x10126c2cu); f_10125fd0();
  /* 10126c2c call 0x101262f0 */
  push32(0x10126c31u); f_101262f0();
  /* 10126c31 jmp 0x10126630 */
  f_10126630(); return;
}

/* FUN_10006c40 @ 0x10126c40 (247 bytes, 70 insns) */
void f_10126c40(void) {
  FTRACE(0x10126c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10126c40 push esi */
  push32((uint32_t)(ESI));
  /* 10126c41 push edi */
  push32((uint32_t)(EDI));
  /* 10126c42 call 0x10126b60 */
  push32(0x10126c47u); f_10126b60();
  /* 10126c47 call 0x10126950 */
  push32(0x10126c4cu); f_10126950();
  /* 10126c4c mov edi, 2 */
  EDI = (0x2u);
L_10126c51:;
  /* 10126c51 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10126c53 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10126c55 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10126c5a push 0x10136190 */
  push32((uint32_t)(0x10136190u));
  /* 10126c5f call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10126c65u);
  /* 10126c65 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10126c67 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10126c69 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10126c6e push 0x10133688 */
  push32((uint32_t)(0x10133688u));
  /* 10126c73 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10126c79u);
  /* 10126c79 mov eax, dword ptr [0x101362b4] */
  EAX = (r32((uint32_t)(0x101362b4)));
  /* 10126c7e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10126c81 push eax */
  push32((uint32_t)(EAX));
  /* 10126c82 call 0x101226f0 */
  push32(0x10126c87u); f_101226f0();
  /* 10126c87 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126c8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10126c8c jne 0x10126cac */
  if (!C.zf) goto L_10126cac;
  /* 10126c8e mov esi, 0x64 */
  ESI = (0x64u);
L_10126c93:;
  /* 10126c93 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10126c95 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10126c97 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 10126c99 push 0x10133888 */
  push32((uint32_t)(0x10133888u));
  /* 10126c9e call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10126ca4u);
  /* 10126ca4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126ca7 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10126ca8 jne 0x10126c93 */
  if (!C.zf) goto L_10126c93;
  /* 10126caa jmp 0x10126cc0 */
  goto L_10126cc0;
L_10126cac:;
  /* 10126cac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10126cae push 0xa */
  push32((uint32_t)(0xau));
  /* 10126cb0 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10126cb2 push 0x10136160 */
  push32((uint32_t)(0x10136160u));
  /* 10126cb7 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10126cbdu);
  /* 10126cbd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10126cc0:;
  /* 10126cc0 push 0x10136020 */
  push32((uint32_t)(0x10136020u));
  /* 10126cc5 call dword ptr [0x1013654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013654c))), 0x10126ccbu);
  /* 10126ccb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126cce test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10126cd0 jne 0x10126ce9 */
  if (!C.zf) goto L_10126ce9;
  /* 10126cd2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10126cd4 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10126cd6 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10126cdb push 0x10133690 */
  push32((uint32_t)(0x10133690u));
  /* 10126ce0 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10126ce6u);
  /* 10126ce6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10126ce9:;
  /* 10126ce9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10126ceb push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10126ced push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10126cf2 push 0x10133680 */
  push32((uint32_t)(0x10133680u));
  /* 10126cf7 call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10126cfdu);
  /* 10126cfd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10126cff push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10126d01 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10126d06 push 0x10135f80 */
  push32((uint32_t)(0x10135f80u));
  /* 10126d0b call dword ptr [0x10136504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136504))), 0x10126d11u);
  /* 10126d11 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126d14 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10126d15 jne 0x10126c51 */
  if (!C.zf) goto L_10126c51;
  /* 10126d1b call 0x10126730 */
  push32(0x10126d20u); f_10126730();
  /* 10126d20 call 0x10125fd0 */
  push32(0x10126d25u); f_10125fd0();
  /* 10126d25 call 0x101262f0 */
  push32(0x10126d2au); f_101262f0();
  /* 10126d2a call 0x101252b0 */
  push32(0x10126d2fu); f_101252b0();
  /* 10126d2f call 0x10125a90 */
  push32(0x10126d34u); f_10125a90();
  /* 10126d34 pop edi */
  EDI = (pop32());
  /* 10126d35 pop esi */
  ESI = (pop32());
  /* 10126d36 ret  */
  ESPCHK(0x10126c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d40 @ 0x10126d40 (279 bytes, 62 insns) [1 switch table(s)] */
void f_10126d40(void) {
  FTRACE(0x10126d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10126d40 call 0x10122680 */
  push32(0x10126d45u); f_10122680();
  /* 10126d45 mov dword ptr [0x10135f58], eax */
  w32((uint32_t)(0x10135f58), (EAX));
  /* 10126d4a call 0x10122660 */
  push32(0x10126d4fu); f_10122660();
  /* 10126d4f mov dword ptr [0x10136368], eax */
  w32((uint32_t)(0x10136368), (EAX));
  /* 10126d54 call 0x10122670 */
  push32(0x10126d59u); f_10122670();
  /* 10126d59 mov dword ptr [0x10133898], eax */
  w32((uint32_t)(0x10133898), (EAX));
  /* 10126d5e call 0x10123040 */
  push32(0x10126d63u); f_10123040();
  /* 10126d63 push 0x1012f114 */
  push32((uint32_t)(0x1012f114u));
  /* 10126d68 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10126d6a call dword ptr [0x1013650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013650c))), 0x10126d70u);
  /* 10126d70 call 0x10126630 */
  push32(0x10126d75u); f_10126630();
  /* 10126d75 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10126d77 push 0x1012f244 */
  push32((uint32_t)(0x1012f244u));
  /* 10126d7c call 0x10122700 */
  push32(0x10126d81u); f_10122700();
  /* 10126d81 mov eax, dword ptr [0x10135f58] */
  EAX = (r32((uint32_t)(0x10135f58)));
  /* 10126d86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126d89 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10126d8c ja 0x10126e52 */
  if ((!C.cf&&!C.zf)) goto L_10126e52;
  /* 10126d92 jmp dword ptr [eax*4 + 0x10126e58] */
  switch (EAX) {
    case 0: goto L_10126d99;
    case 1: goto L_10126e15;
    case 2: goto L_10126e1c;
    case 3: goto L_10126e1c;
    case 4: goto L_10126e1c;
    case 5: goto L_10126d99;
    default: x86_unimpl("switch@0x10126d92 out of table"); return;
  }
L_10126d99:;
  /* 10126d99 cmp dword ptr [0x10133898], 3 */
  { uint32_t _a=(r32((uint32_t)(0x10133898))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10126da0 jne 0x10126dd2 */
  if (!C.zf) goto L_10126dd2;
  /* 10126da2 push 0x1012f160 */
  push32((uint32_t)(0x1012f160u));
  /* 10126da7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10126da9 call dword ptr [0x1013650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013650c))), 0x10126dafu);
  /* 10126daf push 0x1012f16c */
  push32((uint32_t)(0x1012f16cu));
  /* 10126db4 call 0x10122720 */
  push32(0x10126db9u); f_10122720();
  /* 10126db9 push 5 */
  push32((uint32_t)(0x5u));
  /* 10126dbb push 0x1012f41c */
  push32((uint32_t)(0x1012f41cu));
  /* 10126dc0 call 0x10122700 */
  push32(0x10126dc5u); f_10122700();
  /* 10126dc5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126dc8 call 0x10126c40 */
  push32(0x10126dcdu); f_10126c40();
  /* 10126dcd jmp 0x10126e52 */
  goto L_10126e52;
L_10126dd2:;
  /* 10126dd2 push 0x1012f114 */
  push32((uint32_t)(0x1012f114u));
  /* 10126dd7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10126dd9 call dword ptr [0x1013650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013650c))), 0x10126ddfu);
  /* 10126ddf push 0x10136598 */
  push32((uint32_t)(0x10136598u));
  /* 10126de4 call 0x10122720 */
  push32(0x10126de9u); f_10122720();
  /* 10126de9 mov eax, dword ptr [0x10133898] */
  EAX = (r32((uint32_t)(0x10133898)));
  /* 10126dee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126df1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10126df3 jne 0x10126dff */
  if (!C.zf) goto L_10126dff;
  /* 10126df5 mov dword ptr [0x1012f248], 4 */
  w32((uint32_t)(0x1012f248), (0x4u));
L_10126dff:;
  /* 10126dff push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10126e01 push 0x1012f244 */
  push32((uint32_t)(0x1012f244u));
  /* 10126e06 call 0x10122700 */
  push32(0x10126e0bu); f_10122700();
  /* 10126e0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126e0e call 0x10126be0 */
  push32(0x10126e13u); f_10126be0();
  /* 10126e13 jmp 0x10126e52 */
  goto L_10126e52;
L_10126e15:;
  /* 10126e15 call 0x101243e0 */
  push32(0x10126e1au); f_101243e0();
  /* 10126e1a jmp 0x10126e52 */
  goto L_10126e52;
L_10126e1c:;
  /* 10126e1c push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10126e21 call dword ptr [0x10136528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136528))), 0x10126e27u);
  /* 10126e27 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10126e2c call dword ptr [0x1013652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013652c))), 0x10126e32u);
  /* 10126e32 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10126e37 call dword ptr [0x10136530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136530))), 0x10126e3du);
  /* 10126e3d push 0x1012f07c */
  push32((uint32_t)(0x1012f07cu));
  /* 10126e42 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10126e44 call dword ptr [0x1013650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013650c))), 0x10126e4au);
  /* 10126e4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126e4d call 0x10123360 */
  push32(0x10126e52u); f_10123360();
L_10126e52:;
  /* 10126e52 jmp 0x101231c0 */
  f_101231c0(); return;
}

/* FUN_10006e70 @ 0x10126e70 (82 bytes, 32 insns) */
void f_10126e70(void) {
  FTRACE(0x10126e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10126e70 push ebp */
  push32((uint32_t)(EBP));
  /* 10126e71 mov ebp, esp */
  EBP = (ESP);
  /* 10126e73 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10126e76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10126e79 push esi */
  push32((uint32_t)(ESI));
  /* 10126e7a mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10126e7d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10126e80 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10126e83 mov dword ptr [ebp - 0x14], 0x42 */
  w32((uint32_t)(EBP + -0x14), (0x42u));
  /* 10126e8a push eax */
  push32((uint32_t)(EAX));
  /* 10126e8b lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10126e8e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10126e91 mov dword ptr [ebp - 0x1c], 0x7fffffff */
  w32((uint32_t)(EBP + -0x1c), (0x7fffffffu));
  /* 10126e98 push eax */
  push32((uint32_t)(EAX));
  /* 10126e99 call 0x101271fc */
  push32(0x10126e9eu); f_101271fc();
  /* 10126e9e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126ea1 dec dword ptr [ebp - 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))-1; w32((uint32_t)(EBP + -0x1c), (_r)); fl_dec(_r,32); }
  /* 10126ea4 mov esi, eax */
  ESI = (EAX);
  /* 10126ea6 js 0x10126eb0 */
  if (C.sf) goto L_10126eb0;
  /* 10126ea8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10126eab and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 10126eae jmp 0x10126ebd */
  goto L_10126ebd;
L_10126eb0:;
  /* 10126eb0 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10126eb3 push eax */
  push32((uint32_t)(EAX));
  /* 10126eb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10126eb6 call 0x101270e4 */
  push32(0x10126ebbu); f_101270e4();
  /* 10126ebb pop ecx */
  ECX = (pop32());
  /* 10126ebc pop ecx */
  ECX = (pop32());
L_10126ebd:;
  /* 10126ebd mov eax, esi */
  EAX = (ESI);
  /* 10126ebf pop esi */
  ESI = (pop32());
  /* 10126ec0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10126ec1 ret  */
  ESPCHK(0x10126e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ec2 @ 0x10126ec2 (23 bytes, 6 insns) */
void f_10126ec2(void) {
  FTRACE(0x10126ec2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10126ec2 call 0x10126eda */
  push32(0x10126ec7u); f_10126eda();
  /* 10126ec7 call 0x10127a56 */
  push32(0x10126eccu); f_10127a56();
  /* 10126ecc mov dword ptr [0x10136660], eax */
  w32((uint32_t)(0x10136660), (EAX));
  /* 10126ed1 call 0x10127a06 */
  push32(0x10126ed6u); f_10127a06();
  /* 10126ed6 fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 10126ed8 ret  */
  ESPCHK(0x10126ec2u, _esp0);
  ESP += 4; return;
}

/* FUN_10006eda @ 0x10126eda (56 bytes, 8 insns) */
void f_10126eda(void) {
  FTRACE(0x10126edau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10126eda mov eax, 0x10127e2f */
  EAX = (0x10127e2fu);
  /* 10126edf mov dword ptr [0x10130694], 0x10127ad9 */
  w32((uint32_t)(0x10130694), (0x10127ad9u));
  /* 10126ee9 mov dword ptr [0x10130690], eax */
  w32((uint32_t)(0x10130690), (EAX));
  /* 10126eee mov dword ptr [0x10130698], 0x10127b3f */
  w32((uint32_t)(0x10130698), (0x10127b3fu));
  /* 10126ef8 mov dword ptr [0x1013069c], 0x10127a7f */
  w32((uint32_t)(0x1013069c), (0x10127a7fu));
  /* 10126f02 mov dword ptr [0x101306a0], 0x10127b27 */
  w32((uint32_t)(0x101306a0), (0x10127b27u));
  /* 10126f0c mov dword ptr [0x101306a4], eax */
  w32((uint32_t)(0x101306a4), (EAX));
  /* 10126f11 ret  */
  ESPCHK(0x10126edau, _esp0);
  ESP += 4; return;
}

/* __ftol @ 0x10126f14 (39 bytes, 16 insns) */
void f_10126f14(void) {
  FTRACE(0x10126f14u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10126f14 push ebp */
  push32((uint32_t)(EBP));
  /* 10126f15 mov ebp, esp */
  EBP = (ESP);
  /* 10126f17 add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10126f1a wait  */
  /* wait (no observable integer/reg state) */
  /* 10126f1b fnstcw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), C.fcw);
  /* 10126f1e wait  */
  /* wait (no observable integer/reg state) */
  /* 10126f1f mov ax, word ptr [ebp - 2] */
  AX = (r16((uint32_t)(EBP + -0x2)));
  /* 10126f23 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 10126f26 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10126f2a fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 10126f2d fistp qword ptr [ebp - 0xc] */
  { int64_t _q=fpu_to_i64(FPU_ST(0)); w32((uint32_t)(EBP + -0xc),(uint32_t)_q); w32((uint32_t)(EBP + -0xc)+4,(uint32_t)((uint64_t)_q>>32)); }
  (void)fpu_pop();
  /* 10126f30 fldcw word ptr [ebp - 2] */
  C.fcw = r16((uint32_t)(EBP + -0x2));
  /* 10126f33 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10126f36 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10126f39 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10126f3a ret  */
  ESPCHK(0x10126f14u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f3b @ 0x10126f3b (217 bytes, 57 insns) */
void f_10126f3b(void) {
  FTRACE(0x10126f3bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10126f3b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10126f3f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10126f42 jne 0x10126fd0 */
  if (!C.zf) goto L_10126fd0;
  /* 10126f48 call dword ptr [0x1012e014] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e014))), 0x10126f4eu);
  /* 10126f4e push 1 */
  push32((uint32_t)(0x1u));
  /* 10126f50 mov dword ptr [0x1013667c], eax */
  w32((uint32_t)(0x1013667c), (EAX));
  /* 10126f55 call 0x1012890c */
  push32(0x10126f5au); f_1012890c();
  /* 10126f5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10126f5c pop ecx */
  ECX = (pop32());
  /* 10126f5d je 0x10126f9b */
  if (C.zf) goto L_10126f9b;
  /* 10126f5f mov eax, dword ptr [0x1013667c] */
  EAX = (r32((uint32_t)(0x1013667c)));
  /* 10126f64 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10126f66 mov cl, byte ptr [0x1013667d] */
  CL = (r8((uint32_t)(0x1013667d)));
  /* 10126f6c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10126f71 shr dword ptr [0x1013667c], 0x10 */
  w32((uint32_t)(0x1013667c), (sh_shr((uint32_t)(r32((uint32_t)(0x1013667c))), (0x10u)&0x1f, 32)));
  /* 10126f78 mov dword ptr [0x10136684], eax */
  w32((uint32_t)(0x10136684), (EAX));
  /* 10126f7d mov dword ptr [0x10136688], ecx */
  w32((uint32_t)(0x10136688), (ECX));
  /* 10126f83 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10126f86 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10126f88 mov dword ptr [0x10136680], eax */
  w32((uint32_t)(0x10136680), (EAX));
  /* 10126f8d call 0x10127fc3 */
  push32(0x10126f92u); f_10127fc3();
  /* 10126f92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10126f94 jne 0x10126f9f */
  if (!C.zf) goto L_10126f9f;
  /* 10126f96 call 0x10128969 */
  push32(0x10126f9bu); f_10128969();
L_10126f9b:;
  /* 10126f9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10126f9d jmp 0x10127011 */
  goto L_10127011;
L_10126f9f:;
  /* 10126f9f call dword ptr [0x1012e010] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e010))), 0x10126fa5u);
  /* 10126fa5 mov dword ptr [0x10137d74], eax */
  w32((uint32_t)(0x10137d74), (EAX));
  /* 10126faa call 0x10128665 */
  push32(0x10126fafu); f_10128665();
  /* 10126faf mov dword ptr [0x10136668], eax */
  w32((uint32_t)(0x10136668), (EAX));
  /* 10126fb4 call 0x1012814f */
  push32(0x10126fb9u); f_1012814f();
  /* 10126fb9 call 0x10128418 */
  push32(0x10126fbeu); f_10128418();
  /* 10126fbe call 0x1012835f */
  push32(0x10126fc3u); f_1012835f();
  /* 10126fc3 call 0x10127ea5 */
  push32(0x10126fc8u); f_10127ea5();
  /* 10126fc8 inc dword ptr [0x10136664] */
  { uint32_t _r=(r32((uint32_t)(0x10136664)))+1; w32((uint32_t)(0x10136664), (_r)); fl_inc(_r,32); }
  /* 10126fce jmp 0x1012700e */
  goto L_1012700e;
L_10126fd0:;
  /* 10126fd0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10126fd2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10126fd4 jne 0x10127002 */
  if (!C.zf) goto L_10127002;
  /* 10126fd6 cmp dword ptr [0x10136664], ecx */
  { uint32_t _a=(r32((uint32_t)(0x10136664))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10126fdc jle 0x10126f9b */
  if ((C.zf||C.sf!=C.of)) goto L_10126f9b;
  /* 10126fde dec dword ptr [0x10136664] */
  { uint32_t _r=(r32((uint32_t)(0x10136664)))-1; w32((uint32_t)(0x10136664), (_r)); fl_dec(_r,32); }
  /* 10126fe4 cmp dword ptr [0x101366b4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x101366b4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10126fea jne 0x10126ff1 */
  if (!C.zf) goto L_10126ff1;
  /* 10126fec call 0x10127ee3 */
  push32(0x10126ff1u); f_10127ee3();
L_10126ff1:;
  /* 10126ff1 call 0x1012830b */
  push32(0x10126ff6u); f_1012830b();
  /* 10126ff6 call 0x10128017 */
  push32(0x10126ffbu); f_10128017();
  /* 10126ffb call 0x10128969 */
  push32(0x10127000u); f_10128969();
  /* 10127000 jmp 0x1012700e */
  goto L_1012700e;
L_10127002:;
  /* 10127002 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127005 jne 0x1012700e */
  if (!C.zf) goto L_1012700e;
  /* 10127007 push ecx */
  push32((uint32_t)(ECX));
  /* 10127008 call 0x101280af */
  push32(0x1012700du); f_101280af();
  /* 1012700d pop ecx */
  ECX = (pop32());
L_1012700e:;
  /* 1012700e push 1 */
  push32((uint32_t)(0x1u));
  /* 10127010 pop eax */
  EAX = (pop32());
L_10127011:;
  /* 10127011 ret 0xc */
  ESPCHK(0x10126f3bu, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10127014 (157 bytes, 73 insns) */
void f_10127014(void) {
  FTRACE(0x10127014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10127014 push ebp */
  push32((uint32_t)(EBP));
  /* 10127015 mov ebp, esp */
  EBP = (ESP);
  /* 10127017 push ebx */
  push32((uint32_t)(EBX));
  /* 10127018 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012701b push esi */
  push32((uint32_t)(ESI));
  /* 1012701c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1012701f push edi */
  push32((uint32_t)(EDI));
  /* 10127020 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 10127023 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10127025 jne 0x10127030 */
  if (!C.zf) goto L_10127030;
  /* 10127027 cmp dword ptr [0x10136664], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10136664))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012702e jmp 0x10127056 */
  goto L_10127056;
L_10127030:;
  /* 10127030 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127033 je 0x1012703a */
  if (C.zf) goto L_1012703a;
  /* 10127035 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127038 jne 0x1012705c */
  if (!C.zf) goto L_1012705c;
L_1012703a:;
  /* 1012703a mov eax, dword ptr [0x10137d78] */
  EAX = (r32((uint32_t)(0x10137d78)));
  /* 1012703f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10127041 je 0x1012704c */
  if (C.zf) goto L_1012704c;
  /* 10127043 push edi */
  push32((uint32_t)(EDI));
  /* 10127044 push esi */
  push32((uint32_t)(ESI));
  /* 10127045 push ebx */
  push32((uint32_t)(EBX));
  /* 10127046 call eax */
  call_ind((uint32_t)(EAX), 0x10127048u);
  /* 10127048 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012704a je 0x10127058 */
  if (C.zf) goto L_10127058;
L_1012704c:;
  /* 1012704c push edi */
  push32((uint32_t)(EDI));
  /* 1012704d push esi */
  push32((uint32_t)(ESI));
  /* 1012704e push ebx */
  push32((uint32_t)(EBX));
  /* 1012704f call 0x10126f3b */
  push32(0x10127054u); f_10126f3b();
  /* 10127054 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_10127056:;
  /* 10127056 jne 0x1012705c */
  if (!C.zf) goto L_1012705c;
L_10127058:;
  /* 10127058 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012705a jmp 0x101270aa */
  goto L_101270aa;
L_1012705c:;
  /* 1012705c push edi */
  push32((uint32_t)(EDI));
  /* 1012705d push esi */
  push32((uint32_t)(ESI));
  /* 1012705e push ebx */
  push32((uint32_t)(EBX));
  /* 1012705f call 0x101227f0 */
  push32(0x10127064u); f_101227f0();
  /* 10127064 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127067 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1012706a jne 0x10127078 */
  if (!C.zf) goto L_10127078;
  /* 1012706c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012706e jne 0x101270a7 */
  if (!C.zf) goto L_101270a7;
  /* 10127070 push edi */
  push32((uint32_t)(EDI));
  /* 10127071 push eax */
  push32((uint32_t)(EAX));
  /* 10127072 push ebx */
  push32((uint32_t)(EBX));
  /* 10127073 call 0x10126f3b */
  push32(0x10127078u); f_10126f3b();
L_10127078:;
  /* 10127078 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1012707a je 0x10127081 */
  if (C.zf) goto L_10127081;
  /* 1012707c cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012707f jne 0x101270a7 */
  if (!C.zf) goto L_101270a7;
L_10127081:;
  /* 10127081 push edi */
  push32((uint32_t)(EDI));
  /* 10127082 push esi */
  push32((uint32_t)(ESI));
  /* 10127083 push ebx */
  push32((uint32_t)(EBX));
  /* 10127084 call 0x10126f3b */
  push32(0x10127089u); f_10126f3b();
  /* 10127089 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012708b jne 0x10127090 */
  if (!C.zf) goto L_10127090;
  /* 1012708d and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_10127090:;
  /* 10127090 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127094 je 0x101270a7 */
  if (C.zf) goto L_101270a7;
  /* 10127096 mov eax, dword ptr [0x10137d78] */
  EAX = (r32((uint32_t)(0x10137d78)));
  /* 1012709b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012709d je 0x101270a7 */
  if (C.zf) goto L_101270a7;
  /* 1012709f push edi */
  push32((uint32_t)(EDI));
  /* 101270a0 push esi */
  push32((uint32_t)(ESI));
  /* 101270a1 push ebx */
  push32((uint32_t)(EBX));
  /* 101270a2 call eax */
  call_ind((uint32_t)(EAX), 0x101270a4u);
  /* 101270a4 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_101270a7:;
  /* 101270a7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_101270aa:;
  /* 101270aa pop edi */
  EDI = (pop32());
  /* 101270ab pop esi */
  ESI = (pop32());
  /* 101270ac pop ebx */
  EBX = (pop32());
  /* 101270ad pop ebp */
  EBP = (pop32());
  /* 101270ae ret 0xc */
  ESPCHK(0x10127014u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x101270b1 (48 bytes, 15 insns) */
void f_101270b1(void) {
  FTRACE(0x101270b1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101270b1 mov eax, dword ptr [0x10136670] */
  EAX = (r32((uint32_t)(0x10136670)));
  /* 101270b6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101270b9 je 0x101270c8 */
  if (C.zf) goto L_101270c8;
  /* 101270bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101270bd jne 0x101270cd */
  if (!C.zf) goto L_101270cd;
  /* 101270bf cmp dword ptr [0x10136674], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10136674))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101270c6 jne 0x101270cd */
  if (!C.zf) goto L_101270cd;
L_101270c8:;
  /* 101270c8 call 0x10128a11 */
  push32(0x101270cdu); f_10128a11();
L_101270cd:;
  /* 101270cd push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 101270d1 call 0x10128a4a */
  push32(0x101270d6u); f_10128a4a();
  /* 101270d6 push 0xff */
  push32((uint32_t)(0xffu));
  /* 101270db call dword ptr [0x10130684] */
  call_ind((uint32_t)(r32((uint32_t)(0x10130684))), 0x101270e1u);
  /* 101270e1 pop ecx */
  ECX = (pop32());
  /* 101270e2 pop ecx */
  ECX = (pop32());
  /* 101270e3 ret  */
  ESPCHK(0x101270b1u, _esp0);
  ESP += 4; return;
}

/* FUN_100070e4 @ 0x101270e4 (280 bytes, 106 insns) */
void f_101270e4(void) {
  FTRACE(0x101270e4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101270e4 push ebp */
  push32((uint32_t)(EBP));
  /* 101270e5 mov ebp, esp */
  EBP = (ESP);
  /* 101270e7 push ebx */
  push32((uint32_t)(EBX));
  /* 101270e8 push esi */
  push32((uint32_t)(ESI));
  /* 101270e9 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 101270ec mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 101270ef mov ebx, dword ptr [esi + 0x10] */
  EBX = (r32((uint32_t)(ESI + 0x10)));
  /* 101270f2 test al, 0x82 */
  { uint32_t _r=(AL)&(0x82u); fl_logic(_r,8); }
  /* 101270f4 je 0x101271f0 */
  if (C.zf) goto L_101271f0;
  /* 101270fa test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 101270fc jne 0x101271f0 */
  if (!C.zf) goto L_101271f0;
  /* 10127102 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 10127104 je 0x1012711c */
  if (C.zf) goto L_1012711c;
  /* 10127106 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1012710a test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 1012710c je 0x101271f0 */
  if (C.zf) goto L_101271f0;
  /* 10127112 mov ecx, dword ptr [esi + 8] */
  ECX = (r32((uint32_t)(ESI + 0x8)));
  /* 10127115 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10127117 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 10127119 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_1012711c:;
  /* 1012711c mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1012711f and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10127123 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 10127127 and al, 0xef */
  { uint32_t _r=(AL)&(0xefu); AL = (_r); fl_logic(_r,8); }
  /* 10127129 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1012712b test ax, 0x10c */
  { uint32_t _r=(AX)&(0x10cu); fl_logic(_r,16); }
  /* 1012712f mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 10127132 jne 0x10127156 */
  if (!C.zf) goto L_10127156;
  /* 10127134 cmp esi, 0x10130788 */
  { uint32_t _a=(ESI),_b=(0x10130788u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012713a je 0x10127144 */
  if (C.zf) goto L_10127144;
  /* 1012713c cmp esi, 0x101307a8 */
  { uint32_t _a=(ESI),_b=(0x101307a8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127142 jne 0x1012714f */
  if (!C.zf) goto L_1012714f;
L_10127144:;
  /* 10127144 push ebx */
  push32((uint32_t)(EBX));
  /* 10127145 call 0x10128ea9 */
  push32(0x1012714au); f_10128ea9();
  /* 1012714a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012714c pop ecx */
  ECX = (pop32());
  /* 1012714d jne 0x10127156 */
  if (!C.zf) goto L_10127156;
L_1012714f:;
  /* 1012714f push esi */
  push32((uint32_t)(ESI));
  /* 10127150 call 0x10128e65 */
  push32(0x10127155u); f_10128e65();
  /* 10127155 pop ecx */
  ECX = (pop32());
L_10127156:;
  /* 10127156 test word ptr [esi + 0xc], 0x108 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0x108u); fl_logic(_r,16); }
  /* 1012715c push edi */
  push32((uint32_t)(EDI));
  /* 1012715d je 0x101271c6 */
  if (C.zf) goto L_101271c6;
  /* 1012715f mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 10127162 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 10127164 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10127166 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 10127169 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1012716b mov ecx, dword ptr [esi + 0x18] */
  ECX = (r32((uint32_t)(ESI + 0x18)));
  /* 1012716e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1012716f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10127171 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 10127174 jle 0x10127186 */
  if ((C.zf||C.sf!=C.of)) goto L_10127186;
  /* 10127176 push edi */
  push32((uint32_t)(EDI));
  /* 10127177 push eax */
  push32((uint32_t)(EAX));
  /* 10127178 push ebx */
  push32((uint32_t)(EBX));
  /* 10127179 call 0x10128c75 */
  push32(0x1012717eu); f_10128c75();
  /* 1012717e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10127181 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10127184 jmp 0x101271bc */
  goto L_101271bc;
L_10127186:;
  /* 10127186 cmp ebx, -1 */
  { uint32_t _a=(EBX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127189 je 0x101271a4 */
  if (C.zf) goto L_101271a4;
  /* 1012718b mov ecx, ebx */
  ECX = (EBX);
  /* 1012718d mov eax, ebx */
  EAX = (EBX);
  /* 1012718f sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10127192 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10127195 mov ecx, dword ptr [ecx*4 + 0x10137c60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10137c60)));
  /* 1012719c lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1012719f lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 101271a2 jmp 0x101271a9 */
  goto L_101271a9;
L_101271a4:;
  /* 101271a4 mov eax, 0x101306b0 */
  EAX = (0x101306b0u);
L_101271a9:;
  /* 101271a9 test byte ptr [eax + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 101271ad je 0x101271bc */
  if (C.zf) goto L_101271bc;
  /* 101271af push 2 */
  push32((uint32_t)(0x2u));
  /* 101271b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 101271b3 push ebx */
  push32((uint32_t)(EBX));
  /* 101271b4 call 0x10128b9d */
  push32(0x101271b9u); f_10128b9d();
  /* 101271b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101271bc:;
  /* 101271bc mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 101271bf mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 101271c2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 101271c4 jmp 0x101271da */
  goto L_101271da;
L_101271c6:;
  /* 101271c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 101271c8 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 101271cb pop edi */
  EDI = (pop32());
  /* 101271cc push edi */
  push32((uint32_t)(EDI));
  /* 101271cd push eax */
  push32((uint32_t)(EAX));
  /* 101271ce push ebx */
  push32((uint32_t)(EBX));
  /* 101271cf call 0x10128c75 */
  push32(0x101271d4u); f_10128c75();
  /* 101271d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101271d7 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_101271da:;
  /* 101271da cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101271dd pop edi */
  EDI = (pop32());
  /* 101271de je 0x101271e6 */
  if (C.zf) goto L_101271e6;
  /* 101271e0 or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 101271e4 jmp 0x101271f5 */
  goto L_101271f5;
L_101271e6:;
  /* 101271e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101271e9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 101271ee jmp 0x101271f8 */
  goto L_101271f8;
L_101271f0:;
  /* 101271f0 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 101271f2 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_101271f5:;
  /* 101271f5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_101271f8:;
  /* 101271f8 pop esi */
  ESI = (pop32());
  /* 101271f9 pop ebx */
  EBX = (pop32());
  /* 101271fa pop ebp */
  EBP = (pop32());
  /* 101271fb ret  */
  ESPCHK(0x101270e4u, _esp0);
  ESP += 4; return;
}

/* FUN_100071fc @ 0x101271fc (1825 bytes, 595 insns) [1 switch table(s)] */
void f_101271fc(void) {
  FTRACE(0x101271fcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101271fc push ebp */
  push32((uint32_t)(EBP));
  /* 101271fd mov ebp, esp */
  EBP = (ESP);
  /* 101271ff sub esp, 0x248 */
  { uint32_t _a=(ESP),_b=(0x248u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10127205 push ebx */
  push32((uint32_t)(EBX));
  /* 10127206 push esi */
  push32((uint32_t)(ESI));
  /* 10127207 push edi */
  push32((uint32_t)(EDI));
  /* 10127208 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1012720b xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1012720d mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1012720f inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10127210 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10127212 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10127215 mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 10127218 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 1012721b je 0x10127915 */
  if (C.zf) goto L_10127915;
  /* 10127221 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10127224 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10127226 jmp 0x10127230 */
  goto L_10127230;
L_10127228:;
  /* 10127228 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1012722b mov esi, dword ptr [ebp - 0x30] */
  ESI = (r32((uint32_t)(EBP + -0x30)));
  /* 1012722e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_10127230:;
  /* 10127230 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127233 jl 0x10127915 */
  if ((C.sf!=C.of)) goto L_10127915;
  /* 10127239 cmp bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012723c jl 0x10127251 */
  if ((C.sf!=C.of)) goto L_10127251;
  /* 1012723e cmp bl, 0x78 */
  { uint32_t _a=(BL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10127241 jg 0x10127251 */
  if ((!C.zf&&C.sf==C.of)) goto L_10127251;
  /* 10127243 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10127246 mov al, byte ptr [eax + 0x1012e0c8] */
  AL = (r8((uint32_t)(EAX + 0x1012e0c8)));
  /* 1012724c and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1012724f jmp 0x10127253 */
  goto L_10127253;
L_10127251:;
  /* 10127251 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10127253:;
  /* 10127253 movsx eax, byte ptr [esi + eax*8 + 0x1012e0e8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI + EAX*8 + 0x1012e0e8))));
  /* 1012725b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1012725e cmp eax, 7 */
  { uint32_t _a=(EAX),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127261 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10127264 ja 0x10127904 */
  if ((!C.cf&&!C.zf)) goto L_10127904;
  /* 1012726a jmp dword ptr [eax*4 + 0x1012791d] */
  switch (EAX) {
    case 0: goto L_1012739b;
    case 1: goto L_10127271;
    case 2: goto L_1012728c;
    case 3: goto L_101272d8;
    case 4: goto L_1012730f;
    case 5: goto L_10127317;
    case 6: goto L_1012734c;
    case 7: goto L_101273df;
    default: x86_unimpl("switch@0x1012726a out of table"); return;
  }
L_10127271:;
  /* 10127271 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 10127275 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10127278 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1012727b mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1012727e mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10127281 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10127284 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10127287 jmp 0x10127904 */
  goto L_10127904;
L_1012728c:;
  /* 1012728c movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1012728f sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10127292 je 0x101272cf */
  if (C.zf) goto L_101272cf;
  /* 10127294 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10127297 je 0x101272c6 */
  if (C.zf) goto L_101272c6;
  /* 10127299 sub eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012729c je 0x101272bd */
  if (C.zf) goto L_101272bd;
  /* 1012729e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1012729f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101272a0 je 0x101272b4 */
  if (C.zf) goto L_101272b4;
  /* 101272a2 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101272a5 jne 0x10127904 */
  if (!C.zf) goto L_10127904;
  /* 101272ab or dword ptr [ebp - 4], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x8u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101272af jmp 0x10127904 */
  goto L_10127904;
L_101272b4:;
  /* 101272b4 or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101272b8 jmp 0x10127904 */
  goto L_10127904;
L_101272bd:;
  /* 101272bd or dword ptr [ebp - 4], 1 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x1u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101272c1 jmp 0x10127904 */
  goto L_10127904;
L_101272c6:;
  /* 101272c6 or byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))|(0x80u); w8((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,8); }
  /* 101272ca jmp 0x10127904 */
  goto L_10127904;
L_101272cf:;
  /* 101272cf or dword ptr [ebp - 4], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x2u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101272d3 jmp 0x10127904 */
  goto L_10127904;
L_101272d8:;
  /* 101272d8 cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101272db jne 0x10127300 */
  if (!C.zf) goto L_10127300;
  /* 101272dd lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101272e0 push eax */
  push32((uint32_t)(EAX));
  /* 101272e1 call 0x101279db */
  push32(0x101272e6u); f_101279db();
  /* 101272e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101272e8 pop ecx */
  ECX = (pop32());
  /* 101272e9 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 101272ec jge 0x10127904 */
  if ((C.sf==C.of)) goto L_10127904;
  /* 101272f2 or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101272f6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_101272f8:;
  /* 101272f8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 101272fb jmp 0x10127904 */
  goto L_10127904;
L_10127300:;
  /* 10127300 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10127303 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10127306 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10127309 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 1012730d jmp 0x101272f8 */
  goto L_101272f8;
L_1012730f:;
  /* 1012730f mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10127312 jmp 0x10127904 */
  goto L_10127904;
L_10127317:;
  /* 10127317 cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012731a jne 0x1012733a */
  if (!C.zf) goto L_1012733a;
  /* 1012731c lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1012731f push eax */
  push32((uint32_t)(EAX));
  /* 10127320 call 0x101279db */
  push32(0x10127325u); f_101279db();
  /* 10127325 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10127327 pop ecx */
  ECX = (pop32());
  /* 10127328 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1012732b jge 0x10127904 */
  if ((C.sf==C.of)) goto L_10127904;
  /* 10127331 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 10127335 jmp 0x10127904 */
  goto L_10127904;
L_1012733a:;
  /* 1012733a lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 1012733d movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10127340 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 10127344 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10127347 jmp 0x10127904 */
  goto L_10127904;
L_1012734c:;
  /* 1012734c cmp bl, 0x49 */
  { uint32_t _a=(BL),_b=(0x49u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012734f je 0x1012737f */
  if (C.zf) goto L_1012737f;
  /* 10127351 cmp bl, 0x68 */
  { uint32_t _a=(BL),_b=(0x68u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10127354 je 0x10127376 */
  if (C.zf) goto L_10127376;
  /* 10127356 cmp bl, 0x6c */
  { uint32_t _a=(BL),_b=(0x6cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10127359 je 0x1012736d */
  if (C.zf) goto L_1012736d;
  /* 1012735b cmp bl, 0x77 */
  { uint32_t _a=(BL),_b=(0x77u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012735e jne 0x10127904 */
  if (!C.zf) goto L_10127904;
  /* 10127364 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10127368 jmp 0x10127904 */
  goto L_10127904;
L_1012736d:;
  /* 1012736d or dword ptr [ebp - 4], 0x10 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x10u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10127371 jmp 0x10127904 */
  goto L_10127904;
L_10127376:;
  /* 10127376 or dword ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x20u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1012737a jmp 0x10127904 */
  goto L_10127904;
L_1012737f:;
  /* 1012737f cmp byte ptr [edi], 0x36 */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10127382 jne 0x10127398 */
  if (!C.zf) goto L_10127398;
  /* 10127384 cmp byte ptr [edi + 1], 0x34 */
  { uint32_t _a=(r8((uint32_t)(EDI + 0x1))),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10127388 jne 0x10127398 */
  if (!C.zf) goto L_10127398;
  /* 1012738a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1012738b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1012738c or byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x80u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10127390 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 10127393 jmp 0x10127904 */
  goto L_10127904;
L_10127398:;
  /* 10127398 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_1012739b:;
  /* 1012739b mov ecx, dword ptr [0x101309f0] */
  ECX = (r32((uint32_t)(0x101309f0)));
  /* 101273a1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 101273a4 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101273a7 test byte ptr [ecx + eax*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 101273ac je 0x101273c7 */
  if (C.zf) goto L_101273c7;
  /* 101273ae lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101273b1 push eax */
  push32((uint32_t)(EAX));
  /* 101273b2 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101273b5 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101273b8 push eax */
  push32((uint32_t)(EAX));
  /* 101273b9 call 0x1012793d */
  push32(0x101273beu); f_1012793d();
  /* 101273be mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101273c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101273c3 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101273c4 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_101273c7:;
  /* 101273c7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101273ca push eax */
  push32((uint32_t)(EAX));
  /* 101273cb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101273ce movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101273d1 push eax */
  push32((uint32_t)(EAX));
  /* 101273d2 call 0x1012793d */
  push32(0x101273d7u); f_1012793d();
  /* 101273d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101273da jmp 0x10127904 */
  goto L_10127904;
L_101273df:;
  /* 101273df movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101273e2 cmp eax, 0x67 */
  { uint32_t _a=(EAX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101273e5 jg 0x10127607 */
  if ((!C.zf&&C.sf==C.of)) goto L_10127607;
  /* 101273eb cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101273ee jge 0x1012748a */
  if ((C.sf==C.of)) goto L_1012748a;
  /* 101273f4 cmp eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101273f7 jg 0x101274e8 */
  if ((!C.zf&&C.sf==C.of)) goto L_101274e8;
  /* 101273fd je 0x1012767b */
  if (C.zf) goto L_1012767b;
  /* 10127403 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10127406 je 0x101274ab */
  if (C.zf) goto L_101274ab;
  /* 1012740c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1012740d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1012740e je 0x10127480 */
  if (C.zf) goto L_10127480;
  /* 10127410 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10127411 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10127412 je 0x10127480 */
  if (C.zf) goto L_10127480;
  /* 10127414 sub eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10127417 jne 0x10127806 */
  if (!C.zf) goto L_10127806;
  /* 1012741d test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 10127423 jne 0x10127429 */
  if (!C.zf) goto L_10127429;
  /* 10127425 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_10127429:;
  /* 10127429 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 1012742c cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012742f jne 0x10127436 */
  if (!C.zf) goto L_10127436;
  /* 10127431 mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
L_10127436:;
  /* 10127436 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10127439 push eax */
  push32((uint32_t)(EAX));
  /* 1012743a call 0x101279db */
  push32(0x1012743fu); f_101279db();
  /* 1012743f test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 10127445 pop ecx */
  ECX = (pop32());
  /* 10127446 mov ecx, eax */
  ECX = (EAX);
  /* 10127448 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1012744b je 0x1012764f */
  if (C.zf) goto L_1012764f;
  /* 10127451 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10127453 jne 0x1012745e */
  if (!C.zf) goto L_1012745e;
  /* 10127455 mov ecx, dword ptr [0x1013068c] */
  ECX = (r32((uint32_t)(0x1013068c)));
  /* 1012745b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1012745e:;
  /* 1012745e mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10127465 mov eax, ecx */
  EAX = (ECX);
L_10127467:;
  /* 10127467 mov edx, esi */
  EDX = (ESI);
  /* 10127469 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1012746a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1012746c je 0x10127646 */
  if (C.zf) goto L_10127646;
  /* 10127472 cmp word ptr [eax], 0 */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10127476 je 0x10127646 */
  if (C.zf) goto L_10127646;
  /* 1012747c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1012747d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1012747e jmp 0x10127467 */
  goto L_10127467;
L_10127480:;
  /* 10127480 mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 10127487 add bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a+_b; BL = (_r); fl_add(_a,_b,_r,8); }
L_1012748a:;
  /* 1012748a or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1012748e lea edi, [ebp - 0x248] */
  EDI = ((uint32_t)(EBP + -0x248));
  /* 10127494 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127496 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 10127499 jge 0x1012756e */
  if ((C.sf==C.of)) goto L_1012756e;
  /* 1012749f mov dword ptr [ebp - 0x10], 6 */
  w32((uint32_t)(EBP + -0x10), (0x6u));
  /* 101274a6 jmp 0x1012757c */
  goto L_1012757c;
L_101274ab:;
  /* 101274ab test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 101274b1 jne 0x101274b7 */
  if (!C.zf) goto L_101274b7;
  /* 101274b3 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_101274b7:;
  /* 101274b7 test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 101274bd lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101274c0 push eax */
  push32((uint32_t)(EAX));
  /* 101274c1 je 0x101274fe */
  if (C.zf) goto L_101274fe;
  /* 101274c3 call 0x101279f8 */
  push32(0x101274c8u); f_101279f8();
  /* 101274c8 push eax */
  push32((uint32_t)(EAX));
  /* 101274c9 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 101274cf push eax */
  push32((uint32_t)(EAX));
  /* 101274d0 call 0x101290bb */
  push32(0x101274d5u); f_101290bb();
  /* 101274d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101274d8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 101274db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101274dd jge 0x10127511 */
  if ((C.sf==C.of)) goto L_10127511;
  /* 101274df mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 101274e6 jmp 0x10127511 */
  goto L_10127511;
L_101274e8:;
  /* 101274e8 sub eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101274eb je 0x1012751f */
  if (C.zf) goto L_1012751f;
  /* 101274ed sub eax, 9 */
  { uint32_t _a=(EAX),_b=(0x9u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101274f0 je 0x101274b7 */
  if (C.zf) goto L_101274b7;
  /* 101274f2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101274f3 je 0x101276e1 */
  if (C.zf) goto L_101276e1;
  /* 101274f9 jmp 0x10127806 */
  goto L_10127806;
L_101274fe:;
  /* 101274fe call 0x101279db */
  push32(0x10127503u); f_101279db();
  /* 10127503 pop ecx */
  ECX = (pop32());
  /* 10127504 mov byte ptr [ebp - 0x248], al */
  w8((uint32_t)(EBP + -0x248), (AL));
  /* 1012750a mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10127511:;
  /* 10127511 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 10127517 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1012751a jmp 0x10127806 */
  goto L_10127806;
L_1012751f:;
  /* 1012751f lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10127522 push eax */
  push32((uint32_t)(EAX));
  /* 10127523 call 0x101279db */
  push32(0x10127528u); f_101279db();
  /* 10127528 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012752a pop ecx */
  ECX = (pop32());
  /* 1012752b je 0x10127560 */
  if (C.zf) goto L_10127560;
  /* 1012752d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10127530 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10127532 je 0x10127560 */
  if (C.zf) goto L_10127560;
  /* 10127534 test byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x8u); fl_logic(_r,8); }
  /* 10127538 je 0x10127551 */
  if (C.zf) goto L_10127551;
  /* 1012753a movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 1012753d shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1012753f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10127542 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10127545 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1012754c jmp 0x10127806 */
  goto L_10127806;
L_10127551:;
  /* 10127551 and dword ptr [ebp - 0x24], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x24)))&(0x0u); w32((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,32); }
  /* 10127555 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10127558 movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 1012755b jmp 0x10127803 */
  goto L_10127803;
L_10127560:;
  /* 10127560 mov eax, dword ptr [0x10130688] */
  EAX = (r32((uint32_t)(0x10130688)));
  /* 10127565 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10127568 push eax */
  push32((uint32_t)(EAX));
  /* 10127569 jmp 0x101275fc */
  goto L_101275fc;
L_1012756e:;
  /* 1012756e jne 0x1012757c */
  if (!C.zf) goto L_1012757c;
  /* 10127570 cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10127573 jne 0x1012757c */
  if (!C.zf) goto L_1012757c;
  /* 10127575 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1012757c:;
  /* 1012757c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1012757f push dword ptr [ebp - 0x34] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x34))));
  /* 10127582 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10127585 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10127588 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 1012758b mov ecx, dword ptr [eax - 8] */
  ECX = (r32((uint32_t)(EAX + -0x8)));
  /* 1012758e mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
  /* 10127591 mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 10127594 mov dword ptr [ebp - 0x44], eax */
  w32((uint32_t)(EBP + -0x44), (EAX));
  /* 10127597 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1012759a push eax */
  push32((uint32_t)(EAX));
  /* 1012759b lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 101275a1 push eax */
  push32((uint32_t)(EAX));
  /* 101275a2 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 101275a5 push eax */
  push32((uint32_t)(EAX));
  /* 101275a6 call dword ptr [0x10130690] */
  call_ind((uint32_t)(r32((uint32_t)(0x10130690))), 0x101275acu);
  /* 101275ac mov esi, dword ptr [ebp - 4] */
  ESI = (r32((uint32_t)(EBP + -0x4)));
  /* 101275af add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101275b2 and esi, 0x80 */
  { uint32_t _r=(ESI)&(0x80u); ESI = (_r); fl_logic(_r,32); }
  /* 101275b8 je 0x101275ce */
  if (C.zf) goto L_101275ce;
  /* 101275ba cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101275be jne 0x101275ce */
  if (!C.zf) goto L_101275ce;
  /* 101275c0 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 101275c6 push eax */
  push32((uint32_t)(EAX));
  /* 101275c7 call dword ptr [0x1013069c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1013069c))), 0x101275cdu);
  /* 101275cd pop ecx */
  ECX = (pop32());
L_101275ce:;
  /* 101275ce cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101275d1 jne 0x101275e5 */
  if (!C.zf) goto L_101275e5;
  /* 101275d3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101275d5 jne 0x101275e5 */
  if (!C.zf) goto L_101275e5;
  /* 101275d7 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 101275dd push eax */
  push32((uint32_t)(EAX));
  /* 101275de call dword ptr [0x10130694] */
  call_ind((uint32_t)(r32((uint32_t)(0x10130694))), 0x101275e4u);
  /* 101275e4 pop ecx */
  ECX = (pop32());
L_101275e5:;
  /* 101275e5 cmp byte ptr [ebp - 0x248], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x248))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101275ec jne 0x101275fb */
  if (!C.zf) goto L_101275fb;
  /* 101275ee or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 101275f2 lea edi, [ebp - 0x247] */
  EDI = ((uint32_t)(EBP + -0x247));
  /* 101275f8 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
L_101275fb:;
  /* 101275fb push edi */
  push32((uint32_t)(EDI));
L_101275fc:;
  /* 101275fc call 0x10129040 */
  push32(0x10127601u); f_10129040();
  /* 10127601 pop ecx */
  ECX = (pop32());
  /* 10127602 jmp 0x10127803 */
  goto L_10127803;
L_10127607:;
  /* 10127607 sub eax, 0x69 */
  { uint32_t _a=(EAX),_b=(0x69u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012760a je 0x101276e1 */
  if (C.zf) goto L_101276e1;
  /* 10127610 sub eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10127613 je 0x101276b7 */
  if (C.zf) goto L_101276b7;
  /* 10127619 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1012761a je 0x101276a4 */
  if (C.zf) goto L_101276a4;
  /* 10127620 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10127621 je 0x10127674 */
  if (C.zf) goto L_10127674;
  /* 10127623 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10127626 je 0x10127429 */
  if (C.zf) goto L_10127429;
  /* 1012762c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1012762d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1012762e je 0x101276e5 */
  if (C.zf) goto L_101276e5;
  /* 10127634 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10127637 jne 0x10127806 */
  if (!C.zf) goto L_10127806;
  /* 1012763d mov dword ptr [ebp - 0x2c], 0x27 */
  w32((uint32_t)(EBP + -0x2c), (0x27u));
  /* 10127644 jmp 0x10127682 */
  goto L_10127682;
L_10127646:;
  /* 10127646 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10127648 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1012764a jmp 0x10127803 */
  goto L_10127803;
L_1012764f:;
  /* 1012764f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10127651 jne 0x1012765c */
  if (!C.zf) goto L_1012765c;
  /* 10127653 mov ecx, dword ptr [0x10130688] */
  ECX = (r32((uint32_t)(0x10130688)));
  /* 10127659 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1012765c:;
  /* 1012765c mov eax, ecx */
  EAX = (ECX);
L_1012765e:;
  /* 1012765e mov edx, esi */
  EDX = (ESI);
  /* 10127660 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10127661 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10127663 je 0x1012766d */
  if (C.zf) goto L_1012766d;
  /* 10127665 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10127668 je 0x1012766d */
  if (C.zf) goto L_1012766d;
  /* 1012766a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1012766b jmp 0x1012765e */
  goto L_1012765e;
L_1012766d:;
  /* 1012766d sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012766f jmp 0x10127803 */
  goto L_10127803;
L_10127674:;
  /* 10127674 mov dword ptr [ebp - 0x10], 8 */
  w32((uint32_t)(EBP + -0x10), (0x8u));
L_1012767b:;
  /* 1012767b mov dword ptr [ebp - 0x2c], 7 */
  w32((uint32_t)(EBP + -0x2c), (0x7u));
L_10127682:;
  /* 10127682 test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 10127686 mov dword ptr [ebp - 0xc], 0x10 */
  w32((uint32_t)(EBP + -0xc), (0x10u));
  /* 1012768d je 0x101276ec */
  if (C.zf) goto L_101276ec;
  /* 1012768f mov al, byte ptr [ebp - 0x2c] */
  AL = (r8((uint32_t)(EBP + -0x2c)));
  /* 10127692 mov byte ptr [ebp - 0x16], 0x30 */
  w8((uint32_t)(EBP + -0x16), (0x30u));
  /* 10127696 add al, 0x51 */
  { uint32_t _a=(AL),_b=(0x51u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10127698 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 1012769f mov byte ptr [ebp - 0x15], al */
  w8((uint32_t)(EBP + -0x15), (AL));
  /* 101276a2 jmp 0x101276ec */
  goto L_101276ec;
L_101276a4:;
  /* 101276a4 test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 101276a8 mov dword ptr [ebp - 0xc], 8 */
  w32((uint32_t)(EBP + -0xc), (0x8u));
  /* 101276af je 0x101276ec */
  if (C.zf) goto L_101276ec;
  /* 101276b1 or byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x2u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 101276b5 jmp 0x101276ec */
  goto L_101276ec;
L_101276b7:;
  /* 101276b7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101276ba push eax */
  push32((uint32_t)(EAX));
  /* 101276bb call 0x101279db */
  push32(0x101276c0u); f_101279db();
  /* 101276c0 test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 101276c4 pop ecx */
  ECX = (pop32());
  /* 101276c5 je 0x101276d0 */
  if (C.zf) goto L_101276d0;
  /* 101276c7 mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 101276cb mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 101276ce jmp 0x101276d5 */
  goto L_101276d5;
L_101276d0:;
  /* 101276d0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 101276d3 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_101276d5:;
  /* 101276d5 mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 101276dc jmp 0x10127904 */
  goto L_10127904;
L_101276e1:;
  /* 101276e1 or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_101276e5:;
  /* 101276e5 mov dword ptr [ebp - 0xc], 0xa */
  w32((uint32_t)(EBP + -0xc), (0xau));
L_101276ec:;
  /* 101276ec test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 101276f0 je 0x101276fe */
  if (C.zf) goto L_101276fe;
  /* 101276f2 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101276f5 push eax */
  push32((uint32_t)(EAX));
  /* 101276f6 call 0x101279e8 */
  push32(0x101276fbu); f_101279e8();
  /* 101276fb pop ecx */
  ECX = (pop32());
  /* 101276fc jmp 0x1012773f */
  goto L_1012773f;
L_101276fe:;
  /* 101276fe test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 10127702 je 0x10127725 */
  if (C.zf) goto L_10127725;
  /* 10127704 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10127708 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1012770b push eax */
  push32((uint32_t)(EAX));
  /* 1012770c je 0x1012771a */
  if (C.zf) goto L_1012771a;
  /* 1012770e call 0x101279db */
  push32(0x10127713u); f_101279db();
  /* 10127713 pop ecx */
  ECX = (pop32());
  /* 10127714 movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
L_10127717:;
  /* 10127717 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10127718 jmp 0x1012773f */
  goto L_1012773f;
L_1012771a:;
  /* 1012771a call 0x101279db */
  push32(0x1012771fu); f_101279db();
  /* 1012771f pop ecx */
  ECX = (pop32());
  /* 10127720 movzx eax, ax */
  EAX = ((uint32_t)(AX));
  /* 10127723 jmp 0x10127717 */
  goto L_10127717;
L_10127725:;
  /* 10127725 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10127729 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1012772c push eax */
  push32((uint32_t)(EAX));
  /* 1012772d je 0x10127737 */
  if (C.zf) goto L_10127737;
  /* 1012772f call 0x101279db */
  push32(0x10127734u); f_101279db();
  /* 10127734 pop ecx */
  ECX = (pop32());
  /* 10127735 jmp 0x10127717 */
  goto L_10127717;
L_10127737:;
  /* 10127737 call 0x101279db */
  push32(0x1012773cu); f_101279db();
  /* 1012773c pop ecx */
  ECX = (pop32());
  /* 1012773d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_1012773f:;
  /* 1012773f test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10127743 je 0x10127760 */
  if (C.zf) goto L_10127760;
  /* 10127745 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10127747 jg 0x10127760 */
  if ((!C.zf&&C.sf==C.of)) goto L_10127760;
  /* 10127749 jl 0x1012774f */
  if ((C.sf!=C.of)) goto L_1012774f;
  /* 1012774b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012774d jae 0x10127760 */
  if (!C.cf) goto L_10127760;
L_1012774f:;
  /* 1012774f neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10127751 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10127754 mov esi, eax */
  ESI = (EAX);
  /* 10127756 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10127758 or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 1012775c mov edi, edx */
  EDI = (EDX);
  /* 1012775e jmp 0x10127764 */
  goto L_10127764;
L_10127760:;
  /* 10127760 mov esi, eax */
  ESI = (EAX);
  /* 10127762 mov edi, edx */
  EDI = (EDX);
L_10127764:;
  /* 10127764 test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 10127768 jne 0x1012776d */
  if (!C.zf) goto L_1012776d;
  /* 1012776a and edi, 0 */
  { uint32_t _r=(EDI)&(0x0u); EDI = (_r); fl_logic(_r,32); }
L_1012776d:;
  /* 1012776d cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127771 jge 0x1012777c */
  if ((C.sf==C.of)) goto L_1012777c;
  /* 10127773 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1012777a jmp 0x10127780 */
  goto L_10127780;
L_1012777c:;
  /* 1012777c and dword ptr [ebp - 4], 0xfffffff7 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0xfffffff7u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_10127780:;
  /* 10127780 mov eax, esi */
  EAX = (ESI);
  /* 10127782 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 10127784 jne 0x1012778a */
  if (!C.zf) goto L_1012778a;
  /* 10127786 and dword ptr [ebp - 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))&(0x0u); w32((uint32_t)(EBP + -0x1c), (_r)); fl_logic(_r,32); }
L_1012778a:;
  /* 1012778a lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 1012778d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10127790:;
  /* 10127790 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10127793 dec dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))-1; w32((uint32_t)(EBP + -0x10), (_r)); fl_dec(_r,32); }
  /* 10127796 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10127798 jg 0x101277a0 */
  if ((!C.zf&&C.sf==C.of)) goto L_101277a0;
  /* 1012779a mov eax, esi */
  EAX = (ESI);
  /* 1012779c or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 1012779e je 0x101277db */
  if (C.zf) goto L_101277db;
L_101277a0:;
  /* 101277a0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101277a3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101277a4 push edx */
  push32((uint32_t)(EDX));
  /* 101277a5 push eax */
  push32((uint32_t)(EAX));
  /* 101277a6 push edi */
  push32((uint32_t)(EDI));
  /* 101277a7 push esi */
  push32((uint32_t)(ESI));
  /* 101277a8 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 101277ab mov dword ptr [ebp - 0x3c], edx */
  w32((uint32_t)(EBP + -0x3c), (EDX));
  /* 101277ae call 0x101291f0 */
  push32(0x101277b3u); f_101291f0();
  /* 101277b3 push dword ptr [ebp - 0x3c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x3c))));
  /* 101277b6 mov ebx, eax */
  EBX = (EAX);
  /* 101277b8 add ebx, 0x30 */
  { uint32_t _a=(EBX),_b=(0x30u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 101277bb push dword ptr [ebp - 0x40] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x40))));
  /* 101277be push edi */
  push32((uint32_t)(EDI));
  /* 101277bf push esi */
  push32((uint32_t)(ESI));
  /* 101277c0 call 0x10129180 */
  push32(0x101277c5u); f_10129180();
  /* 101277c5 cmp ebx, 0x39 */
  { uint32_t _a=(EBX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101277c8 mov esi, eax */
  ESI = (EAX);
  /* 101277ca mov edi, edx */
  EDI = (EDX);
  /* 101277cc jle 0x101277d1 */
  if ((C.zf||C.sf!=C.of)) goto L_101277d1;
  /* 101277ce add ebx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
L_101277d1:;
  /* 101277d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 101277d4 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 101277d7 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 101277d9 jmp 0x10127790 */
  goto L_10127790;
L_101277db:;
  /* 101277db lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 101277de sub eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101277e1 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 101277e4 test byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x2u); fl_logic(_r,8); }
  /* 101277e8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 101277eb je 0x10127806 */
  if (C.zf) goto L_10127806;
  /* 101277ed mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 101277f0 cmp byte ptr [ecx], 0x30 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101277f3 jne 0x101277f9 */
  if (!C.zf) goto L_101277f9;
  /* 101277f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101277f7 jne 0x10127806 */
  if (!C.zf) goto L_10127806;
L_101277f9:;
  /* 101277f9 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 101277fc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101277fd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10127800 mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_10127803:;
  /* 10127803 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10127806:;
  /* 10127806 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012780a jne 0x10127904 */
  if (!C.zf) goto L_10127904;
  /* 10127810 mov ebx, dword ptr [ebp - 4] */
  EBX = (r32((uint32_t)(EBP + -0x4)));
  /* 10127813 test bl, 0x40 */
  { uint32_t _r=(BL)&(0x40u); fl_logic(_r,8); }
  /* 10127816 je 0x1012783e */
  if (C.zf) goto L_1012783e;
  /* 10127818 test bh, 1 */
  { uint32_t _r=(C.b.b.h)&(0x1u); fl_logic(_r,8); }
  /* 1012781b je 0x10127823 */
  if (C.zf) goto L_10127823;
  /* 1012781d mov byte ptr [ebp - 0x16], 0x2d */
  w8((uint32_t)(EBP + -0x16), (0x2du));
  /* 10127821 jmp 0x10127837 */
  goto L_10127837;
L_10127823:;
  /* 10127823 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 10127826 je 0x1012782e */
  if (C.zf) goto L_1012782e;
  /* 10127828 mov byte ptr [ebp - 0x16], 0x2b */
  w8((uint32_t)(EBP + -0x16), (0x2bu));
  /* 1012782c jmp 0x10127837 */
  goto L_10127837;
L_1012782e:;
  /* 1012782e test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 10127831 je 0x1012783e */
  if (C.zf) goto L_1012783e;
  /* 10127833 mov byte ptr [ebp - 0x16], 0x20 */
  w8((uint32_t)(EBP + -0x16), (0x20u));
L_10127837:;
  /* 10127837 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
L_1012783e:;
  /* 1012783e mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
  /* 10127841 sub esi, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10127844 sub esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10127847 test bl, 0xc */
  { uint32_t _r=(BL)&(0xcu); fl_logic(_r,8); }
  /* 1012784a jne 0x1012785e */
  if (!C.zf) goto L_1012785e;
  /* 1012784c lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1012784f push eax */
  push32((uint32_t)(EAX));
  /* 10127850 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10127853 push esi */
  push32((uint32_t)(ESI));
  /* 10127854 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10127856 call 0x10127972 */
  push32(0x1012785bu); f_10127972();
  /* 1012785b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1012785e:;
  /* 1012785e lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10127861 push eax */
  push32((uint32_t)(EAX));
  /* 10127862 lea eax, [ebp - 0x16] */
  EAX = ((uint32_t)(EBP + -0x16));
  /* 10127865 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10127868 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 1012786b push eax */
  push32((uint32_t)(EAX));
  /* 1012786c call 0x101279a3 */
  push32(0x10127871u); f_101279a3();
  /* 10127871 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10127874 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 10127877 je 0x10127890 */
  if (C.zf) goto L_10127890;
  /* 10127879 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 1012787c jne 0x10127890 */
  if (!C.zf) goto L_10127890;
  /* 1012787e lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10127881 push eax */
  push32((uint32_t)(EAX));
  /* 10127882 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10127885 push esi */
  push32((uint32_t)(ESI));
  /* 10127886 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10127888 call 0x10127972 */
  push32(0x1012788du); f_10127972();
  /* 1012788d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10127890:;
  /* 10127890 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127894 je 0x101278d7 */
  if (C.zf) goto L_101278d7;
  /* 10127896 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012789a jle 0x101278d7 */
  if ((C.zf||C.sf!=C.of)) goto L_101278d7;
  /* 1012789c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1012789f mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 101278a2 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
L_101278a5:;
  /* 101278a5 mov ax, word ptr [ebx] */
  AX = (r16((uint32_t)(EBX)));
  /* 101278a8 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101278a9 push eax */
  push32((uint32_t)(EAX));
  /* 101278aa lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 101278ad push eax */
  push32((uint32_t)(EAX));
  /* 101278ae inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101278af call 0x101290bb */
  push32(0x101278b4u); f_101290bb();
  /* 101278b4 pop ecx */
  ECX = (pop32());
  /* 101278b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101278b7 pop ecx */
  ECX = (pop32());
  /* 101278b8 jle 0x101278ec */
  if ((C.zf||C.sf!=C.of)) goto L_101278ec;
  /* 101278ba lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 101278bd push ecx */
  push32((uint32_t)(ECX));
  /* 101278be push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101278c1 push eax */
  push32((uint32_t)(EAX));
  /* 101278c2 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 101278c5 push eax */
  push32((uint32_t)(EAX));
  /* 101278c6 call 0x101279a3 */
  push32(0x101278cbu); f_101279a3();
  /* 101278cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101278ce mov eax, edi */
  EAX = (EDI);
  /* 101278d0 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101278d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101278d3 jne 0x101278a5 */
  if (!C.zf) goto L_101278a5;
  /* 101278d5 jmp 0x101278ec */
  goto L_101278ec;
L_101278d7:;
  /* 101278d7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101278da push eax */
  push32((uint32_t)(EAX));
  /* 101278db push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101278de push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 101278e1 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 101278e4 call 0x101279a3 */
  push32(0x101278e9u); f_101279a3();
  /* 101278e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101278ec:;
  /* 101278ec test byte ptr [ebp - 4], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x4u); fl_logic(_r,8); }
  /* 101278f0 je 0x10127904 */
  if (C.zf) goto L_10127904;
  /* 101278f2 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101278f5 push eax */
  push32((uint32_t)(EAX));
  /* 101278f6 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101278f9 push esi */
  push32((uint32_t)(ESI));
  /* 101278fa push 0x20 */
  push32((uint32_t)(0x20u));
  /* 101278fc call 0x10127972 */
  push32(0x10127901u); f_10127972();
  /* 10127901 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10127904:;
  /* 10127904 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10127907 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10127909 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1012790a test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 1012790c mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 1012790f jne 0x10127228 */
  if (!C.zf) goto L_10127228;
L_10127915:;
  /* 10127915 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10127918 pop edi */
  EDI = (pop32());
  /* 10127919 pop esi */
  ESI = (pop32());
  /* 1012791a pop ebx */
  EBX = (pop32());
  /* 1012791b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1012791c ret  */
  ESPCHK(0x101271fcu, _esp0);
  ESP += 4; return;
}

/* FUN_1000793d @ 0x1012793d (53 bytes, 25 insns) */
void f_1012793d(void) {
  FTRACE(0x1012793du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012793d push ebp */
  push32((uint32_t)(EBP));
  /* 1012793e mov ebp, esp */
  EBP = (ESP);
  /* 10127940 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10127943 dec dword ptr [ecx + 4] */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))-1; w32((uint32_t)(ECX + 0x4), (_r)); fl_dec(_r,32); }
  /* 10127946 js 0x10127956 */
  if (C.sf) goto L_10127956;
  /* 10127948 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1012794a mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1012794d mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1012794f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10127951 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 10127954 jmp 0x10127961 */
  goto L_10127961;
L_10127956:;
  /* 10127956 push ecx */
  push32((uint32_t)(ECX));
  /* 10127957 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1012795a call 0x101270e4 */
  push32(0x1012795fu); f_101270e4();
  /* 1012795f pop ecx */
  ECX = (pop32());
  /* 10127960 pop ecx */
  ECX = (pop32());
L_10127961:;
  /* 10127961 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127964 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10127967 jne 0x1012796e */
  if (!C.zf) goto L_1012796e;
  /* 10127969 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1012796c pop ebp */
  EBP = (pop32());
  /* 1012796d ret  */
  ESPCHK(0x1012793du, _esp0);
  ESP += 4; return;
L_1012796e:;
  /* 1012796e inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 10127970 pop ebp */
  EBP = (pop32());
  /* 10127971 ret  */
  ESPCHK(0x1012793du, _esp0);
  ESP += 4; return;
}

/* FUN_10007972 @ 0x10127972 (49 bytes, 22 insns) */
void f_10127972(void) {
  FTRACE(0x10127972u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10127972 push esi */
  push32((uint32_t)(ESI));
  /* 10127973 push edi */
  push32((uint32_t)(EDI));
  /* 10127974 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10127978 mov eax, edi */
  EAX = (EDI);
  /* 1012797a dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1012797b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012797d jle 0x101279a0 */
  if ((C.zf||C.sf!=C.of)) goto L_101279a0;
  /* 1012797f mov esi, dword ptr [esp + 0x18] */
  ESI = (r32((uint32_t)(ESP + 0x18)));
L_10127983:;
  /* 10127983 push esi */
  push32((uint32_t)(ESI));
  /* 10127984 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10127988 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 1012798c call 0x1012793d */
  push32(0x10127991u); f_1012793d();
  /* 10127991 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10127994 cmp dword ptr [esi], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127997 je 0x101279a0 */
  if (C.zf) goto L_101279a0;
  /* 10127999 mov eax, edi */
  EAX = (EDI);
  /* 1012799b dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1012799c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012799e jg 0x10127983 */
  if ((!C.zf&&C.sf==C.of)) goto L_10127983;
L_101279a0:;
  /* 101279a0 pop edi */
  EDI = (pop32());
  /* 101279a1 pop esi */
  ESI = (pop32());
  /* 101279a2 ret  */
  ESPCHK(0x10127972u, _esp0);
  ESP += 4; return;
}

/* FUN_100079a3 @ 0x101279a3 (56 bytes, 27 insns) */
void f_101279a3(void) {
  FTRACE(0x101279a3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101279a3 push ebx */
  push32((uint32_t)(EBX));
  /* 101279a4 mov ebx, dword ptr [esp + 0xc] */
  EBX = (r32((uint32_t)(ESP + 0xc)));
  /* 101279a8 mov eax, ebx */
  EAX = (EBX);
  /* 101279aa dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101279ab push esi */
  push32((uint32_t)(ESI));
  /* 101279ac push edi */
  push32((uint32_t)(EDI));
  /* 101279ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101279af jle 0x101279d7 */
  if ((C.zf||C.sf!=C.of)) goto L_101279d7;
  /* 101279b1 mov edi, dword ptr [esp + 0x1c] */
  EDI = (r32((uint32_t)(ESP + 0x1c)));
  /* 101279b5 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
L_101279b9:;
  /* 101279b9 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 101279bc push edi */
  push32((uint32_t)(EDI));
  /* 101279bd inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101279be push dword ptr [esp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x1c))));
  /* 101279c2 push eax */
  push32((uint32_t)(EAX));
  /* 101279c3 call 0x1012793d */
  push32(0x101279c8u); f_1012793d();
  /* 101279c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101279cb cmp dword ptr [edi], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101279ce je 0x101279d7 */
  if (C.zf) goto L_101279d7;
  /* 101279d0 mov eax, ebx */
  EAX = (EBX);
  /* 101279d2 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101279d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101279d5 jg 0x101279b9 */
  if ((!C.zf&&C.sf==C.of)) goto L_101279b9;
L_101279d7:;
  /* 101279d7 pop edi */
  EDI = (pop32());
  /* 101279d8 pop esi */
  ESI = (pop32());
  /* 101279d9 pop ebx */
  EBX = (pop32());
  /* 101279da ret  */
  ESPCHK(0x101279a3u, _esp0);
  ESP += 4; return;
}

/* FUN_100079db @ 0x101279db (13 bytes, 5 insns) */
void f_101279db(void) {
  FTRACE(0x101279dbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101279db mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101279df add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 101279e2 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 101279e4 mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 101279e7 ret  */
  ESPCHK(0x101279dbu, _esp0);
  ESP += 4; return;
}

/* FUN_100079e8 @ 0x101279e8 (16 bytes, 6 insns) */
void f_101279e8(void) {
  FTRACE(0x101279e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101279e8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101279ec add dword ptr [eax], 8 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x8u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 101279ef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 101279f1 mov eax, dword ptr [ecx - 8] */
  EAX = (r32((uint32_t)(ECX + -0x8)));
  /* 101279f4 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 101279f7 ret  */
  ESPCHK(0x101279e8u, _esp0);
  ESP += 4; return;
}

/* FUN_100079f8 @ 0x101279f8 (14 bytes, 5 insns) */
void f_101279f8(void) {
  FTRACE(0x101279f8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101279f8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101279fc add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 101279ff mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 10127a01 mov ax, word ptr [eax - 4] */
  AX = (r16((uint32_t)(EAX + -0x4)));
  /* 10127a05 ret  */
  ESPCHK(0x101279f8u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a06 @ 0x10127a06 (18 bytes, 6 insns) */
void f_10127a06(void) {
  FTRACE(0x10127a06u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10127a06 push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 10127a0b push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 10127a10 call 0x1012929a */
  push32(0x10127a15u); f_1012929a();
  /* 10127a15 pop ecx */
  ECX = (pop32());
  /* 10127a16 pop ecx */
  ECX = (pop32());
  /* 10127a17 ret  */
  ESPCHK(0x10127a06u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a18 @ 0x10127a18 (62 bytes, 24 insns) */
void f_10127a18(void) {
  FTRACE(0x10127a18u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10127a18 push ebp */
  push32((uint32_t)(EBP));
  /* 10127a19 mov ebp, esp */
  EBP = (ESP);
  /* 10127a1b sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10127a1e fld qword ptr [0x1012e170] */
  fpu_push(rf64((uint32_t)(0x1012e170)));
  /* 10127a24 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 10127a27 fld qword ptr [0x1012e168] */
  fpu_push(rf64((uint32_t)(0x1012e168)));
  /* 10127a2d fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 10127a30 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 10127a33 fdiv qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x8)));
  /* 10127a36 fmul qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x8)));
  /* 10127a39 fsubr qword ptr [ebp - 0x10] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x10))) - FPU_ST(0);
  /* 10127a3c fstp qword ptr [ebp - 0x18] */
  wf64((uint32_t)(EBP + -0x18), FPU_ST(0));
  (void)fpu_pop();
  /* 10127a3f fld qword ptr [ebp - 0x18] */
  fpu_push(rf64((uint32_t)(EBP + -0x18)));
  /* 10127a42 fcomp qword ptr [0x1012e160] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x1012e160)));
  (void)fpu_pop();
  /* 10127a48 fnstsw ax */
  AX = fpu_status();
  /* 10127a4a sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10127a4b jbe 0x10127a52 */
  if ((C.cf||C.zf)) goto L_10127a52;
  /* 10127a4d push 1 */
  push32((uint32_t)(0x1u));
  /* 10127a4f pop eax */
  EAX = (pop32());
  /* 10127a50 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10127a51 ret  */
  ESPCHK(0x10127a18u, _esp0);
  ESP += 4; return;
L_10127a52:;
  /* 10127a52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10127a54 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10127a55 ret  */
  ESPCHK(0x10127a18u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a56 @ 0x10127a56 (41 bytes, 13 insns) */
void f_10127a56(void) {
  FTRACE(0x10127a56u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10127a56 push 0x1012e194 */
  push32((uint32_t)(0x1012e194u));
  /* 10127a5b call dword ptr [0x1012e004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e004))), 0x10127a61u);
  /* 10127a61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10127a63 je 0x10127a7a */
  if (C.zf) goto L_10127a7a;
  /* 10127a65 push 0x1012e178 */
  push32((uint32_t)(0x1012e178u));
  /* 10127a6a push eax */
  push32((uint32_t)(EAX));
  /* 10127a6b call dword ptr [0x1012e088] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e088))), 0x10127a71u);
  /* 10127a71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10127a73 je 0x10127a7a */
  if (C.zf) goto L_10127a7a;
  /* 10127a75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10127a77 call eax */
  call_ind((uint32_t)(EAX), 0x10127a79u);
  /* 10127a79 ret  */
  ESPCHK(0x10127a56u, _esp0);
  ESP += 4; return;
L_10127a7a:;
  /* 10127a7a jmp 0x10127a18 */
  f_10127a18(); return;
}

/* FUN_10007a7f @ 0x10127a7f (90 bytes, 37 insns) */
void f_10127a7f(void) {
  FTRACE(0x10127a7fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10127a7f push esi */
  push32((uint32_t)(ESI));
  /* 10127a80 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10127a84 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10127a87 push eax */
  push32((uint32_t)(EAX));
  /* 10127a88 call 0x10129440 */
  push32(0x10127a8du); f_10129440();
  /* 10127a8d cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127a90 pop ecx */
  ECX = (pop32());
  /* 10127a91 je 0x10127abf */
  if (C.zf) goto L_10127abf;
L_10127a93:;
  /* 10127a93 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10127a94 cmp dword ptr [0x10130c00], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10130c00))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127a9b jle 0x10127aac */
  if ((C.zf||C.sf!=C.of)) goto L_10127aac;
  /* 10127a9d movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10127aa0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10127aa2 push eax */
  push32((uint32_t)(EAX));
  /* 10127aa3 call 0x101293cb */
  push32(0x10127aa8u); f_101293cb();
  /* 10127aa8 pop ecx */
  ECX = (pop32());
  /* 10127aa9 pop ecx */
  ECX = (pop32());
  /* 10127aaa jmp 0x10127abb */
  goto L_10127abb;
L_10127aac:;
  /* 10127aac movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10127aaf mov ecx, dword ptr [0x101309f0] */
  ECX = (r32((uint32_t)(0x101309f0)));
  /* 10127ab5 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 10127ab8 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_10127abb:;
  /* 10127abb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10127abd jne 0x10127a93 */
  if (!C.zf) goto L_10127a93;
L_10127abf:;
  /* 10127abf mov cl, byte ptr [0x10130c04] */
  CL = (r8((uint32_t)(0x10130c04)));
  /* 10127ac5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10127ac7 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 10127ac9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10127aca:;
  /* 10127aca mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 10127acc mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
  /* 10127ace mov al, cl */
  AL = (CL);
  /* 10127ad0 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 10127ad2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10127ad3 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10127ad5 jne 0x10127aca */
  if (!C.zf) goto L_10127aca;
  /* 10127ad7 pop esi */
  ESI = (pop32());
  /* 10127ad8 ret  */
  ESPCHK(0x10127a7fu, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x10127b3f (62 bytes, 29 insns) */
void f_10127b3f(void) {
  FTRACE(0x10127b3fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10127b3f push ebp */
  push32((uint32_t)(EBP));
  /* 10127b40 mov ebp, esp */
  EBP = (ESP);
  /* 10127b42 push ecx */
  push32((uint32_t)(ECX));
  /* 10127b43 push ecx */
  push32((uint32_t)(ECX));
  /* 10127b44 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127b48 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10127b4b je 0x10127b68 */
  if (C.zf) goto L_10127b68;
  /* 10127b4d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10127b50 push eax */
  push32((uint32_t)(EAX));
  /* 10127b51 call 0x1012990c */
  push32(0x10127b56u); f_1012990c();
  /* 10127b56 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10127b59 pop ecx */
  ECX = (pop32());
  /* 10127b5a pop ecx */
  ECX = (pop32());
  /* 10127b5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10127b5e mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10127b60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10127b63 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10127b66 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10127b67 ret  */
  ESPCHK(0x10127b3fu, _esp0);
  ESP += 4; return;
L_10127b68:;
  /* 10127b68 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10127b6b push eax */
  push32((uint32_t)(EAX));
  /* 10127b6c call 0x10129939 */
  push32(0x10127b71u); f_10129939();
  /* 10127b71 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10127b74 pop ecx */
  ECX = (pop32());
  /* 10127b75 pop ecx */
  ECX = (pop32());
  /* 10127b76 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10127b79 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10127b7b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10127b7c ret  */
  ESPCHK(0x10127b3fu, _esp0);
  ESP += 4; return;
}

/* FUN_10007b7d @ 0x10127b7d (97 bytes, 42 insns) */
void f_10127b7d(void) {
  FTRACE(0x10127b7du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10127b7d push ebp */
  push32((uint32_t)(EBP));
  /* 10127b7e mov ebp, esp */
  EBP = (ESP);
  /* 10127b80 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10127b83 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10127b86 push esi */
  push32((uint32_t)(ESI));
  /* 10127b87 push eax */
  push32((uint32_t)(EAX));
  /* 10127b88 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10127b8b push eax */
  push32((uint32_t)(EAX));
  /* 10127b8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10127b8f push ecx */
  push32((uint32_t)(ECX));
  /* 10127b90 push ecx */
  push32((uint32_t)(ECX));
  /* 10127b91 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10127b93 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10127b96 call 0x101299dd */
  push32(0x10127b9bu); f_101299dd();
  /* 10127b9b mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10127b9e lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10127ba1 push eax */
  push32((uint32_t)(EAX));
  /* 10127ba2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10127ba5 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 10127ba8 push eax */
  push32((uint32_t)(EAX));
  /* 10127ba9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10127bab cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127baf sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10127bb2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10127bb4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10127bb6 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 10127bb9 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10127bbb add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10127bbd push ecx */
  push32((uint32_t)(ECX));
  /* 10127bbe call 0x10129966 */
  push32(0x10127bc3u); f_10129966();
  /* 10127bc3 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10127bc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10127bc8 push eax */
  push32((uint32_t)(EAX));
  /* 10127bc9 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10127bcc push esi */
  push32((uint32_t)(ESI));
  /* 10127bcd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10127bd0 call 0x10127bde */
  push32(0x10127bd5u); f_10127bde();
  /* 10127bd5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10127bd8 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10127bdb pop esi */
  ESI = (pop32());
  /* 10127bdc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10127bdd ret  */
  ESPCHK(0x10127b7du, _esp0);
  ESP += 4; return;
}

/* FUN_10007bde @ 0x10127bde (194 bytes, 91 insns) */
void f_10127bde(void) {
  FTRACE(0x10127bdeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10127bde push ebp */
  push32((uint32_t)(EBP));
  /* 10127bdf mov ebp, esp */
  EBP = (ESP);
  /* 10127be1 push ebx */
  push32((uint32_t)(EBX));
  /* 10127be2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10127be4 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10127be7 push esi */
  push32((uint32_t)(ESI));
  /* 10127be8 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 10127beb push edi */
  push32((uint32_t)(EDI));
  /* 10127bec mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10127bef je 0x10127c0c */
  if (C.zf) goto L_10127c0c;
  /* 10127bf1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10127bf3 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127bf6 setg al */
  AL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 10127bf9 push eax */
  push32((uint32_t)(EAX));
  /* 10127bfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10127bfc cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127bff sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10127c02 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10127c04 push eax */
  push32((uint32_t)(EAX));
  /* 10127c05 call 0x10127e80 */
  push32(0x10127c0au); f_10127e80();
  /* 10127c0a pop ecx */
  ECX = (pop32());
  /* 10127c0b pop ecx */
  ECX = (pop32());
L_10127c0c:;
  /* 10127c0c cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127c0f mov eax, edi */
  EAX = (EDI);
  /* 10127c11 jne 0x10127c19 */
  if (!C.zf) goto L_10127c19;
  /* 10127c13 mov byte ptr [edi], 0x2d */
  w8((uint32_t)(EDI), (0x2du));
  /* 10127c16 lea eax, [edi + 1] */
  EAX = ((uint32_t)(EDI + 0x1));
L_10127c19:;
  /* 10127c19 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127c1c jle 0x10127c30 */
  if ((C.zf||C.sf!=C.of)) goto L_10127c30;
  /* 10127c1e mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 10127c21 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 10127c24 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10127c26 mov eax, ecx */
  EAX = (ECX);
  /* 10127c28 mov cl, byte ptr [0x10130c04] */
  CL = (r8((uint32_t)(0x10130c04)));
  /* 10127c2e mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
L_10127c30:;
  /* 10127c30 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10127c32 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10127c35 push 0x1012e1a8 */
  push32((uint32_t)(0x1012e1a8u));
  /* 10127c3a sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10127c3d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10127c3f add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10127c42 push ecx */
  push32((uint32_t)(ECX));
  /* 10127c43 call 0x10129af0 */
  push32(0x10127c48u); f_10129af0();
  /* 10127c48 cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127c4b pop ecx */
  ECX = (pop32());
  /* 10127c4c pop ecx */
  ECX = (pop32());
  /* 10127c4d mov ecx, eax */
  ECX = (EAX);
  /* 10127c4f je 0x10127c54 */
  if (C.zf) goto L_10127c54;
  /* 10127c51 mov byte ptr [ecx], 0x45 */
  w8((uint32_t)(ECX), (0x45u));
L_10127c54:;
  /* 10127c54 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 10127c57 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10127c58 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10127c5b je 0x10127c99 */
  if (C.zf) goto L_10127c99;
  /* 10127c5d mov ebx, dword ptr [esi + 4] */
  EBX = (r32((uint32_t)(ESI + 0x4)));
  /* 10127c60 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10127c61 jns 0x10127c68 */
  if (!C.sf) goto L_10127c68;
  /* 10127c63 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 10127c65 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
L_10127c68:;
  /* 10127c68 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10127c69 cmp ebx, 0x64 */
  { uint32_t _a=(EBX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127c6c jl 0x10127c7f */
  if ((C.sf!=C.of)) goto L_10127c7f;
  /* 10127c6e mov eax, ebx */
  EAX = (EBX);
  /* 10127c70 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10127c72 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10127c73 pop esi */
  ESI = (pop32());
  /* 10127c74 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10127c76 add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10127c78 mov eax, ebx */
  EAX = (EBX);
  /* 10127c7a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10127c7b idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10127c7d mov ebx, edx */
  EBX = (EDX);
L_10127c7f:;
  /* 10127c7f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10127c80 cmp ebx, 0xa */
  { uint32_t _a=(EBX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127c83 jl 0x10127c96 */
  if ((C.sf!=C.of)) goto L_10127c96;
  /* 10127c85 mov eax, ebx */
  EAX = (EBX);
  /* 10127c87 push 0xa */
  push32((uint32_t)(0xau));
  /* 10127c89 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10127c8a pop esi */
  ESI = (pop32());
  /* 10127c8b idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10127c8d add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10127c8f mov eax, ebx */
  EAX = (EBX);
  /* 10127c91 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10127c92 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10127c94 mov ebx, edx */
  EBX = (EDX);
L_10127c96:;
  /* 10127c96 add byte ptr [ecx + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x1))),_b=(BL),_r=_a+_b; w8((uint32_t)(ECX + 0x1), (_r)); fl_add(_a,_b,_r,8); }
L_10127c99:;
  /* 10127c99 mov eax, edi */
  EAX = (EDI);
  /* 10127c9b pop edi */
  EDI = (pop32());
  /* 10127c9c pop esi */
  ESI = (pop32());
  /* 10127c9d pop ebx */
  EBX = (pop32());
  /* 10127c9e pop ebp */
  EBP = (pop32());
  /* 10127c9f ret  */
  ESPCHK(0x10127bdeu, _esp0);
  ESP += 4; return;
}

/* FUN_10007ca0 @ 0x10127ca0 (85 bytes, 37 insns) */
void f_10127ca0(void) {
  FTRACE(0x10127ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10127ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 10127ca1 mov ebp, esp */
  EBP = (ESP);
  /* 10127ca3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10127ca6 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10127ca9 push esi */
  push32((uint32_t)(ESI));
  /* 10127caa push eax */
  push32((uint32_t)(EAX));
  /* 10127cab lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10127cae push eax */
  push32((uint32_t)(EAX));
  /* 10127caf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10127cb2 push ecx */
  push32((uint32_t)(ECX));
  /* 10127cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10127cb4 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10127cb6 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10127cb9 call 0x101299dd */
  push32(0x10127cbeu); f_101299dd();
  /* 10127cbe mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10127cc1 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10127cc4 push eax */
  push32((uint32_t)(EAX));
  /* 10127cc5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10127cc8 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10127cca push eax */
  push32((uint32_t)(EAX));
  /* 10127ccb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10127ccd cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127cd1 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10127cd4 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10127cd7 push eax */
  push32((uint32_t)(EAX));
  /* 10127cd8 call 0x10129966 */
  push32(0x10127cddu); f_10129966();
  /* 10127cdd lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10127ce0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10127ce2 push eax */
  push32((uint32_t)(EAX));
  /* 10127ce3 push esi */
  push32((uint32_t)(ESI));
  /* 10127ce4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10127ce7 call 0x10127cf5 */
  push32(0x10127cecu); f_10127cf5();
  /* 10127cec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10127cef add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10127cf2 pop esi */
  ESI = (pop32());
  /* 10127cf3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10127cf4 ret  */
  ESPCHK(0x10127ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cf5 @ 0x10127cf5 (167 bytes, 73 insns) */
void f_10127cf5(void) {
  FTRACE(0x10127cf5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10127cf5 push ebp */
  push32((uint32_t)(EBP));
  /* 10127cf6 mov ebp, esp */
  EBP = (ESP);
  /* 10127cf8 push ebx */
  push32((uint32_t)(EBX));
  /* 10127cf9 push esi */
  push32((uint32_t)(ESI));
  /* 10127cfa mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10127cfd mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10127d00 push edi */
  push32((uint32_t)(EDI));
  /* 10127d01 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 10127d04 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10127d05 cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10127d09 je 0x10127d25 */
  if (C.zf) goto L_10127d25;
  /* 10127d0b cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127d0e jne 0x10127d25 */
  if (!C.zf) goto L_10127d25;
  /* 10127d10 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10127d12 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127d15 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10127d18 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10127d1a add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10127d1c mov eax, ecx */
  EAX = (ECX);
  /* 10127d1e mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 10127d21 and byte ptr [eax + 1], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1)))&(0x0u); w8((uint32_t)(EAX + 0x1), (_r)); fl_logic(_r,8); }
L_10127d25:;
  /* 10127d25 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127d28 mov edi, ebx */
  EDI = (EBX);
  /* 10127d2a jne 0x10127d32 */
  if (!C.zf) goto L_10127d32;
  /* 10127d2c mov byte ptr [ebx], 0x2d */
  w8((uint32_t)(EBX), (0x2du));
  /* 10127d2f lea edi, [ebx + 1] */
  EDI = ((uint32_t)(EBX + 0x1));
L_10127d32:;
  /* 10127d32 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 10127d35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10127d37 jg 0x10127d49 */
  if ((!C.zf&&C.sf==C.of)) goto L_10127d49;
  /* 10127d39 push 1 */
  push32((uint32_t)(0x1u));
  /* 10127d3b push edi */
  push32((uint32_t)(EDI));
  /* 10127d3c call 0x10127e80 */
  push32(0x10127d41u); f_10127e80();
  /* 10127d41 pop ecx */
  ECX = (pop32());
  /* 10127d42 mov byte ptr [edi], 0x30 */
  w8((uint32_t)(EDI), (0x30u));
  /* 10127d45 pop ecx */
  ECX = (pop32());
  /* 10127d46 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10127d47 jmp 0x10127d4b */
  goto L_10127d4b;
L_10127d49:;
  /* 10127d49 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10127d4b:;
  /* 10127d4b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127d4f jle 0x10127d95 */
  if ((C.zf||C.sf!=C.of)) goto L_10127d95;
  /* 10127d51 push 1 */
  push32((uint32_t)(0x1u));
  /* 10127d53 push edi */
  push32((uint32_t)(EDI));
  /* 10127d54 call 0x10127e80 */
  push32(0x10127d59u); f_10127e80();
  /* 10127d59 mov al, byte ptr [0x10130c04] */
  AL = (r8((uint32_t)(0x10130c04)));
  /* 10127d5e pop ecx */
  ECX = (pop32());
  /* 10127d5f mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10127d61 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 10127d64 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10127d65 pop ecx */
  ECX = (pop32());
  /* 10127d66 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10127d68 jge 0x10127d95 */
  if ((C.sf==C.of)) goto L_10127d95;
  /* 10127d6a cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10127d6e je 0x10127d74 */
  if (C.zf) goto L_10127d74;
  /* 10127d70 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 10127d72 jmp 0x10127d7b */
  goto L_10127d7b;
L_10127d74:;
  /* 10127d74 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 10127d76 cmp dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127d79 jl 0x10127d7e */
  if ((C.sf!=C.of)) goto L_10127d7e;
L_10127d7b:;
  /* 10127d7b mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_10127d7e:;
  /* 10127d7e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10127d81 push edi */
  push32((uint32_t)(EDI));
  /* 10127d82 call 0x10127e80 */
  push32(0x10127d87u); f_10127e80();
  /* 10127d87 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10127d8a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10127d8c push edi */
  push32((uint32_t)(EDI));
  /* 10127d8d call 0x10129be0 */
  push32(0x10127d92u); f_10129be0();
  /* 10127d92 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10127d95:;
  /* 10127d95 pop edi */
  EDI = (pop32());
  /* 10127d96 mov eax, ebx */
  EAX = (EBX);
  /* 10127d98 pop esi */
  ESI = (pop32());
  /* 10127d99 pop ebx */
  EBX = (pop32());
  /* 10127d9a pop ebp */
  EBP = (pop32());
  /* 10127d9b ret  */
  ESPCHK(0x10127cf5u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d9c @ 0x10127d9c (147 bytes, 66 insns) */
void f_10127d9c(void) {
  FTRACE(0x10127d9cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10127d9c push ebp */
  push32((uint32_t)(EBP));
  /* 10127d9d mov ebp, esp */
  EBP = (ESP);
  /* 10127d9f sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10127da2 push ebx */
  push32((uint32_t)(EBX));
  /* 10127da3 push esi */
  push32((uint32_t)(ESI));
  /* 10127da4 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10127da7 push edi */
  push32((uint32_t)(EDI));
  /* 10127da8 push eax */
  push32((uint32_t)(EAX));
  /* 10127da9 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10127dac push eax */
  push32((uint32_t)(EAX));
  /* 10127dad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10127db0 push ecx */
  push32((uint32_t)(ECX));
  /* 10127db1 push ecx */
  push32((uint32_t)(ECX));
  /* 10127db2 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10127db4 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10127db7 call 0x101299dd */
  push32(0x10127dbcu); f_101299dd();
  /* 10127dbc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10127dbf mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 10127dc2 lea esi, [eax - 1] */
  ESI = ((uint32_t)(EAX + -0x1));
  /* 10127dc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10127dc7 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127dcb sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10127dce add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10127dd1 mov edi, eax */
  EDI = (EAX);
  /* 10127dd3 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10127dd6 push eax */
  push32((uint32_t)(EAX));
  /* 10127dd7 push ebx */
  push32((uint32_t)(EBX));
  /* 10127dd8 push edi */
  push32((uint32_t)(EDI));
  /* 10127dd9 call 0x10129966 */
  push32(0x10127ddeu); f_10129966();
  /* 10127dde mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10127de1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10127de4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10127de5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127de7 setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 10127dea cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127ded jl 0x10127e15 */
  if ((C.sf!=C.of)) goto L_10127e15;
  /* 10127def cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127df1 jge 0x10127e15 */
  if ((C.sf==C.of)) goto L_10127e15;
  /* 10127df3 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10127df5 je 0x10127e01 */
  if (C.zf) goto L_10127e01;
L_10127df7:;
  /* 10127df7 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10127df9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10127dfa test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10127dfc jne 0x10127df7 */
  if (!C.zf) goto L_10127df7;
  /* 10127dfe and byte ptr [edi - 2], al */
  { uint32_t _r=(r8((uint32_t)(EDI + -0x2)))&(AL); w8((uint32_t)(EDI + -0x2), (_r)); fl_logic(_r,8); }
L_10127e01:;
  /* 10127e01 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10127e04 push 1 */
  push32((uint32_t)(0x1u));
  /* 10127e06 push eax */
  push32((uint32_t)(EAX));
  /* 10127e07 push ebx */
  push32((uint32_t)(EBX));
  /* 10127e08 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10127e0b call 0x10127cf5 */
  push32(0x10127e10u); f_10127cf5();
  /* 10127e10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10127e13 jmp 0x10127e2a */
  goto L_10127e2a;
L_10127e15:;
  /* 10127e15 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10127e18 push 1 */
  push32((uint32_t)(0x1u));
  /* 10127e1a push eax */
  push32((uint32_t)(EAX));
  /* 10127e1b push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10127e1e push ebx */
  push32((uint32_t)(EBX));
  /* 10127e1f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10127e22 call 0x10127bde */
  push32(0x10127e27u); f_10127bde();
  /* 10127e27 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10127e2a:;
  /* 10127e2a pop edi */
  EDI = (pop32());
  /* 10127e2b pop esi */
  ESI = (pop32());
  /* 10127e2c pop ebx */
  EBX = (pop32());
  /* 10127e2d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10127e2e ret  */
  ESPCHK(0x10127d9cu, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x10127e2f (81 bytes, 29 insns) */
void f_10127e2f(void) {
  FTRACE(0x10127e2fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10127e2f push ebp */
  push32((uint32_t)(EBP));
  /* 10127e30 mov ebp, esp */
  EBP = (ESP);
  /* 10127e32 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127e36 je 0x10127e6a */
  if (C.zf) goto L_10127e6a;
  /* 10127e38 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127e3c je 0x10127e6a */
  if (C.zf) goto L_10127e6a;
  /* 10127e3e cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127e42 jne 0x10127e57 */
  if (!C.zf) goto L_10127e57;
  /* 10127e44 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10127e47 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10127e4a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10127e4d call 0x10127ca0 */
  push32(0x10127e52u); f_10127ca0();
  /* 10127e52 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10127e55 pop ebp */
  EBP = (pop32());
  /* 10127e56 ret  */
  ESPCHK(0x10127e2fu, _esp0);
  ESP += 4; return;
L_10127e57:;
  /* 10127e57 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10127e5a push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10127e5d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10127e60 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10127e63 call 0x10127d9c */
  push32(0x10127e68u); f_10127d9c();
  /* 10127e68 jmp 0x10127e7b */
  goto L_10127e7b;
L_10127e6a:;
  /* 10127e6a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10127e6d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10127e70 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10127e73 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10127e76 call 0x10127b7d */
  push32(0x10127e7bu); f_10127b7d();
L_10127e7b:;
  /* 10127e7b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10127e7e pop ebp */
  EBP = (pop32());
  /* 10127e7f ret  */
  ESPCHK(0x10127e2fu, _esp0);
  ESP += 4; return;
}

/* FUN_10007e80 @ 0x10127e80 (37 bytes, 18 insns) */
void f_10127e80(void) {
  FTRACE(0x10127e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10127e80 push edi */
  push32((uint32_t)(EDI));
  /* 10127e81 mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 10127e85 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10127e87 je 0x10127ea3 */
  if (C.zf) goto L_10127ea3;
  /* 10127e89 push esi */
  push32((uint32_t)(ESI));
  /* 10127e8a mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 10127e8e push esi */
  push32((uint32_t)(ESI));
  /* 10127e8f call 0x10129040 */
  push32(0x10127e94u); f_10129040();
  /* 10127e94 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10127e95 push eax */
  push32((uint32_t)(EAX));
  /* 10127e96 push esi */
  push32((uint32_t)(ESI));
  /* 10127e97 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10127e99 push esi */
  push32((uint32_t)(ESI));
  /* 10127e9a call 0x10129c40 */
  push32(0x10127e9fu); f_10129c40();
  /* 10127e9f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10127ea2 pop esi */
  ESI = (pop32());
L_10127ea3:;
  /* 10127ea3 pop edi */
  EDI = (pop32());
  /* 10127ea4 ret  */
  ESPCHK(0x10127e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ea5 @ 0x10127ea5 (45 bytes, 12 insns) */
void f_10127ea5(void) {
  FTRACE(0x10127ea5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10127ea5 mov eax, dword ptr [0x10130678] */
  EAX = (r32((uint32_t)(0x10130678)));
  /* 10127eaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10127eac je 0x10127eb0 */
  if (C.zf) goto L_10127eb0;
  /* 10127eae call eax */
  call_ind((uint32_t)(EAX), 0x10127eb0u);
L_10127eb0:;
  /* 10127eb0 push 0x1012f014 */
  push32((uint32_t)(0x1012f014u));
  /* 10127eb5 push 0x1012f008 */
  push32((uint32_t)(0x1012f008u));
  /* 10127eba call 0x10127fa9 */
  push32(0x10127ebfu); f_10127fa9();
  /* 10127ebf push 0x1012f004 */
  push32((uint32_t)(0x1012f004u));
  /* 10127ec4 push 0x1012f000 */
  push32((uint32_t)(0x1012f000u));
  /* 10127ec9 call 0x10127fa9 */
  push32(0x10127eceu); f_10127fa9();
  /* 10127ece add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10127ed1 ret  */
  ESPCHK(0x10127ea5u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10127ed2 (17 bytes, 6 insns) */
void f_10127ed2(void) {
  FTRACE(0x10127ed2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10127ed2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10127ed4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10127ed6 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10127eda call 0x10127ef2 */
  push32(0x10127edfu); f_10127ef2();
  /* 10127edf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10127ee2 ret  */
  ESPCHK(0x10127ed2u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ee3 @ 0x10127ee3 (15 bytes, 6 insns) */
void f_10127ee3(void) {
  FTRACE(0x10127ee3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10127ee3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10127ee5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10127ee7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10127ee9 call 0x10127ef2 */
  push32(0x10127eeeu); f_10127ef2();
  /* 10127eee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10127ef1 ret  */
  ESPCHK(0x10127ee3u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ef2 @ 0x10127ef2 (163 bytes, 53 insns) */
void f_10127ef2(void) {
  FTRACE(0x10127ef2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10127ef2 push edi */
  push32((uint32_t)(EDI));
  /* 10127ef3 call 0x10127f97 */
  push32(0x10127ef8u); f_10127f97();
  /* 10127ef8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10127efa pop edi */
  EDI = (pop32());
  /* 10127efb cmp dword ptr [0x101366b8], edi */
  { uint32_t _a=(r32((uint32_t)(0x101366b8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127f01 jne 0x10127f14 */
  if (!C.zf) goto L_10127f14;
  /* 10127f03 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10127f07 call dword ptr [0x1012e020] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e020))), 0x10127f0du);
  /* 10127f0d push eax */
  push32((uint32_t)(EAX));
  /* 10127f0e call dword ptr [0x1012e01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e01c))), 0x10127f14u);
L_10127f14:;
  /* 10127f14 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127f19 push ebx */
  push32((uint32_t)(EBX));
  /* 10127f1a mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10127f1e mov dword ptr [0x101366b4], edi */
  w32((uint32_t)(0x101366b4), (EDI));
  /* 10127f24 mov byte ptr [0x101366b0], bl */
  w8((uint32_t)(0x101366b0), (BL));
  /* 10127f2a jne 0x10127f68 */
  if (!C.zf) goto L_10127f68;
  /* 10127f2c mov eax, dword ptr [0x10137d70] */
  EAX = (r32((uint32_t)(0x10137d70)));
  /* 10127f31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10127f33 je 0x10127f57 */
  if (C.zf) goto L_10127f57;
  /* 10127f35 mov ecx, dword ptr [0x10137d6c] */
  ECX = (r32((uint32_t)(0x10137d6c)));
  /* 10127f3b push esi */
  push32((uint32_t)(ESI));
  /* 10127f3c lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 10127f3f cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127f41 jb 0x10127f56 */
  if (C.cf) goto L_10127f56;
L_10127f43:;
  /* 10127f43 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10127f45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10127f47 je 0x10127f4b */
  if (C.zf) goto L_10127f4b;
  /* 10127f49 call eax */
  call_ind((uint32_t)(EAX), 0x10127f4bu);
L_10127f4b:;
  /* 10127f4b sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10127f4e cmp esi, dword ptr [0x10137d70] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10137d70))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127f54 jae 0x10127f43 */
  if (!C.cf) goto L_10127f43;
L_10127f56:;
  /* 10127f56 pop esi */
  ESI = (pop32());
L_10127f57:;
  /* 10127f57 push 0x1012f020 */
  push32((uint32_t)(0x1012f020u));
  /* 10127f5c push 0x1012f018 */
  push32((uint32_t)(0x1012f018u));
  /* 10127f61 call 0x10127fa9 */
  push32(0x10127f66u); f_10127fa9();
  /* 10127f66 pop ecx */
  ECX = (pop32());
  /* 10127f67 pop ecx */
  ECX = (pop32());
L_10127f68:;
  /* 10127f68 push 0x1012f028 */
  push32((uint32_t)(0x1012f028u));
  /* 10127f6d push 0x1012f024 */
  push32((uint32_t)(0x1012f024u));
  /* 10127f72 call 0x10127fa9 */
  push32(0x10127f77u); f_10127fa9();
  /* 10127f77 pop ecx */
  ECX = (pop32());
  /* 10127f78 pop ecx */
  ECX = (pop32());
  /* 10127f79 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10127f7b pop ebx */
  EBX = (pop32());
  /* 10127f7c je 0x10127f85 */
  if (C.zf) goto L_10127f85;
  /* 10127f7e call 0x10127fa0 */
  push32(0x10127f83u); f_10127fa0();
  /* 10127f83 pop edi */
  EDI = (pop32());
  /* 10127f84 ret  */
  ESPCHK(0x10127ef2u, _esp0);
  ESP += 4; return;
L_10127f85:;
  /* 10127f85 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10127f89 mov dword ptr [0x101366b8], edi */
  w32((uint32_t)(0x101366b8), (EDI));
  /* 10127f8f call dword ptr [0x1012e018] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e018))), 0x10127f95u);
  /* 10127f95 pop edi */
  EDI = (pop32());
  /* 10127f96 ret  */
  ESPCHK(0x10127ef2u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f97 @ 0x10127f97 (9 bytes, 4 insns) */
void f_10127f97(void) {
  FTRACE(0x10127f97u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10127f97 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10127f99 call 0x1012a013 */
  push32(0x10127f9eu); f_1012a013();
  /* 10127f9e pop ecx */
  ECX = (pop32());
  /* 10127f9f ret  */
  ESPCHK(0x10127f97u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fa0 @ 0x10127fa0 (9 bytes, 4 insns) */
void f_10127fa0(void) {
  FTRACE(0x10127fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10127fa0 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10127fa2 call 0x1012a074 */
  push32(0x10127fa7u); f_1012a074();
  /* 10127fa7 pop ecx */
  ECX = (pop32());
  /* 10127fa8 ret  */
  ESPCHK(0x10127fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fa9 @ 0x10127fa9 (26 bytes, 12 insns) */
void f_10127fa9(void) {
  FTRACE(0x10127fa9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10127fa9 push esi */
  push32((uint32_t)(ESI));
  /* 10127faa mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_10127fae:;
  /* 10127fae cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127fb2 jae 0x10127fc1 */
  if (!C.cf) goto L_10127fc1;
  /* 10127fb4 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10127fb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10127fb8 je 0x10127fbc */
  if (C.zf) goto L_10127fbc;
  /* 10127fba call eax */
  call_ind((uint32_t)(EAX), 0x10127fbcu);
L_10127fbc:;
  /* 10127fbc add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10127fbf jmp 0x10127fae */
  goto L_10127fae;
L_10127fc1:;
  /* 10127fc1 pop esi */
  ESI = (pop32());
  /* 10127fc2 ret  */
  ESPCHK(0x10127fa9u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fc3 @ 0x10127fc3 (84 bytes, 32 insns) */
void f_10127fc3(void) {
  FTRACE(0x10127fc3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10127fc3 push esi */
  push32((uint32_t)(ESI));
  /* 10127fc4 call 0x10129f7e */
  push32(0x10127fc9u); f_10129f7e();
  /* 10127fc9 call dword ptr [0x1012e02c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e02c))), 0x10127fcfu);
  /* 10127fcf cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10127fd2 mov dword ptr [0x101306a8], eax */
  w32((uint32_t)(0x101306a8), (EAX));
  /* 10127fd7 je 0x10128013 */
  if (C.zf) goto L_10128013;
  /* 10127fd9 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10127fdb push 1 */
  push32((uint32_t)(0x1u));
  /* 10127fdd call 0x1012a089 */
  push32(0x10127fe2u); f_1012a089();
  /* 10127fe2 mov esi, eax */
  ESI = (EAX);
  /* 10127fe4 pop ecx */
  ECX = (pop32());
  /* 10127fe5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10127fe7 pop ecx */
  ECX = (pop32());
  /* 10127fe8 je 0x10128013 */
  if (C.zf) goto L_10128013;
  /* 10127fea push esi */
  push32((uint32_t)(ESI));
  /* 10127feb push dword ptr [0x101306a8] */
  push32((uint32_t)(r32((uint32_t)(0x101306a8))));
  /* 10127ff1 call dword ptr [0x1012e028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e028))), 0x10127ff7u);
  /* 10127ff7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10127ff9 je 0x10128013 */
  if (C.zf) goto L_10128013;
  /* 10127ffb push esi */
  push32((uint32_t)(ESI));
  /* 10127ffc call 0x10128035 */
  push32(0x10128001u); f_10128035();
  /* 10128001 pop ecx */
  ECX = (pop32());
  /* 10128002 call dword ptr [0x1012e024] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e024))), 0x10128008u);
  /* 10128008 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1012800c push 1 */
  push32((uint32_t)(0x1u));
  /* 1012800e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10128010 pop eax */
  EAX = (pop32());
  /* 10128011 pop esi */
  ESI = (pop32());
  /* 10128012 ret  */
  ESPCHK(0x10127fc3u, _esp0);
  ESP += 4; return;
L_10128013:;
  /* 10128013 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10128015 pop esi */
  ESI = (pop32());
  /* 10128016 ret  */
  ESPCHK(0x10127fc3u, _esp0);
  ESP += 4; return;
}

/* FUN_10008017 @ 0x10128017 (30 bytes, 8 insns) */
void f_10128017(void) {
  FTRACE(0x10128017u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10128017 call 0x10129fa7 */
  push32(0x1012801cu); f_10129fa7();
  /* 1012801c mov eax, dword ptr [0x101306a8] */
  EAX = (r32((uint32_t)(0x101306a8)));
  /* 10128021 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128024 je 0x10128034 */
  if (C.zf) goto L_10128034;
  /* 10128026 push eax */
  push32((uint32_t)(EAX));
  /* 10128027 call dword ptr [0x1012e030] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e030))), 0x1012802du);
  /* 1012802d or dword ptr [0x101306a8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x101306a8)))|(0xffffffffu); w32((uint32_t)(0x101306a8), (_r)); fl_logic(_r,32); }
L_10128034:;
  /* 10128034 ret  */
  ESPCHK(0x10128017u, _esp0);
  ESP += 4; return;
}

/* FUN_10008035 @ 0x10128035 (19 bytes, 4 insns) */
void f_10128035(void) {
  FTRACE(0x10128035u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10128035 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10128039 mov dword ptr [eax + 0x50], 0x10130d00 */
  w32((uint32_t)(EAX + 0x50), (0x10130d00u));
  /* 10128040 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 10128047 ret  */
  ESPCHK(0x10128035u, _esp0);
  ESP += 4; return;
}

/* FUN_10008048 @ 0x10128048 (103 bytes, 38 insns) */
void f_10128048(void) {
  FTRACE(0x10128048u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10128048 push esi */
  push32((uint32_t)(ESI));
  /* 10128049 push edi */
  push32((uint32_t)(EDI));
  /* 1012804a call dword ptr [0x1012e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e03c))), 0x10128050u);
  /* 10128050 push dword ptr [0x101306a8] */
  push32((uint32_t)(r32((uint32_t)(0x101306a8))));
  /* 10128056 mov edi, eax */
  EDI = (EAX);
  /* 10128058 call dword ptr [0x1012e038] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e038))), 0x1012805eu);
  /* 1012805e mov esi, eax */
  ESI = (EAX);
  /* 10128060 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10128062 jne 0x101280a3 */
  if (!C.zf) goto L_101280a3;
  /* 10128064 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10128066 push 1 */
  push32((uint32_t)(0x1u));
  /* 10128068 call 0x1012a089 */
  push32(0x1012806du); f_1012a089();
  /* 1012806d mov esi, eax */
  ESI = (EAX);
  /* 1012806f pop ecx */
  ECX = (pop32());
  /* 10128070 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10128072 pop ecx */
  ECX = (pop32());
  /* 10128073 je 0x1012809b */
  if (C.zf) goto L_1012809b;
  /* 10128075 push esi */
  push32((uint32_t)(ESI));
  /* 10128076 push dword ptr [0x101306a8] */
  push32((uint32_t)(r32((uint32_t)(0x101306a8))));
  /* 1012807c call dword ptr [0x1012e028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e028))), 0x10128082u);
  /* 10128082 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10128084 je 0x1012809b */
  if (C.zf) goto L_1012809b;
  /* 10128086 push esi */
  push32((uint32_t)(ESI));
  /* 10128087 call 0x10128035 */
  push32(0x1012808cu); f_10128035();
  /* 1012808c pop ecx */
  ECX = (pop32());
  /* 1012808d call dword ptr [0x1012e024] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e024))), 0x10128093u);
  /* 10128093 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10128097 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10128099 jmp 0x101280a3 */
  goto L_101280a3;
L_1012809b:;
  /* 1012809b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1012809d call 0x101270b1 */
  push32(0x101280a2u); f_101270b1();
  /* 101280a2 pop ecx */
  ECX = (pop32());
L_101280a3:;
  /* 101280a3 push edi */
  push32((uint32_t)(EDI));
  /* 101280a4 call dword ptr [0x1012e034] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e034))), 0x101280aau);
  /* 101280aa mov eax, esi */
  EAX = (ESI);
  /* 101280ac pop edi */
  EDI = (pop32());
  /* 101280ad pop esi */
  ESI = (pop32());
  /* 101280ae ret  */
  ESPCHK(0x10128048u, _esp0);
  ESP += 4; return;
}

/* FUN_100080af @ 0x101280af (160 bytes, 62 insns) */
void f_101280af(void) {
  FTRACE(0x101280afu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101280af mov eax, dword ptr [0x101306a8] */
  EAX = (r32((uint32_t)(0x101306a8)));
  /* 101280b4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101280b7 je 0x1012814e */
  if (C.zf) goto L_1012814e;
  /* 101280bd push esi */
  push32((uint32_t)(ESI));
  /* 101280be mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101280c2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101280c4 jne 0x101280d3 */
  if (!C.zf) goto L_101280d3;
  /* 101280c6 push eax */
  push32((uint32_t)(EAX));
  /* 101280c7 call dword ptr [0x1012e038] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e038))), 0x101280cdu);
  /* 101280cd mov esi, eax */
  ESI = (EAX);
  /* 101280cf test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101280d1 je 0x1012813f */
  if (C.zf) goto L_1012813f;
L_101280d3:;
  /* 101280d3 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 101280d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101280d8 je 0x101280e1 */
  if (C.zf) goto L_101280e1;
  /* 101280da push eax */
  push32((uint32_t)(EAX));
  /* 101280db call 0x1012a1c6 */
  push32(0x101280e0u); f_1012a1c6();
  /* 101280e0 pop ecx */
  ECX = (pop32());
L_101280e1:;
  /* 101280e1 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 101280e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101280e6 je 0x101280ef */
  if (C.zf) goto L_101280ef;
  /* 101280e8 push eax */
  push32((uint32_t)(EAX));
  /* 101280e9 call 0x1012a1c6 */
  push32(0x101280eeu); f_1012a1c6();
  /* 101280ee pop ecx */
  ECX = (pop32());
L_101280ef:;
  /* 101280ef mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 101280f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101280f4 je 0x101280fd */
  if (C.zf) goto L_101280fd;
  /* 101280f6 push eax */
  push32((uint32_t)(EAX));
  /* 101280f7 call 0x1012a1c6 */
  push32(0x101280fcu); f_1012a1c6();
  /* 101280fc pop ecx */
  ECX = (pop32());
L_101280fd:;
  /* 101280fd mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 10128100 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10128102 je 0x1012810b */
  if (C.zf) goto L_1012810b;
  /* 10128104 push eax */
  push32((uint32_t)(EAX));
  /* 10128105 call 0x1012a1c6 */
  push32(0x1012810au); f_1012a1c6();
  /* 1012810a pop ecx */
  ECX = (pop32());
L_1012810b:;
  /* 1012810b mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 1012810e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10128110 je 0x10128119 */
  if (C.zf) goto L_10128119;
  /* 10128112 push eax */
  push32((uint32_t)(EAX));
  /* 10128113 call 0x1012a1c6 */
  push32(0x10128118u); f_1012a1c6();
  /* 10128118 pop ecx */
  ECX = (pop32());
L_10128119:;
  /* 10128119 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 1012811c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012811e je 0x10128127 */
  if (C.zf) goto L_10128127;
  /* 10128120 push eax */
  push32((uint32_t)(EAX));
  /* 10128121 call 0x1012a1c6 */
  push32(0x10128126u); f_1012a1c6();
  /* 10128126 pop ecx */
  ECX = (pop32());
L_10128127:;
  /* 10128127 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 1012812a cmp eax, 0x10130d00 */
  { uint32_t _a=(EAX),_b=(0x10130d00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012812f je 0x10128138 */
  if (C.zf) goto L_10128138;
  /* 10128131 push eax */
  push32((uint32_t)(EAX));
  /* 10128132 call 0x1012a1c6 */
  push32(0x10128137u); f_1012a1c6();
  /* 10128137 pop ecx */
  ECX = (pop32());
L_10128138:;
  /* 10128138 push esi */
  push32((uint32_t)(ESI));
  /* 10128139 call 0x1012a1c6 */
  push32(0x1012813eu); f_1012a1c6();
  /* 1012813e pop ecx */
  ECX = (pop32());
L_1012813f:;
  /* 1012813f push 0 */
  push32((uint32_t)(0x0u));
  /* 10128141 push dword ptr [0x101306a8] */
  push32((uint32_t)(r32((uint32_t)(0x101306a8))));
  /* 10128147 call dword ptr [0x1012e028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e028))), 0x1012814du);
  /* 1012814d pop esi */
  ESI = (pop32());
L_1012814e:;
  /* 1012814e ret  */
  ESPCHK(0x101280afu, _esp0);
  ESP += 4; return;
}

/* FUN_1000814f @ 0x1012814f (444 bytes, 150 insns) */
void f_1012814f(void) {
  FTRACE(0x1012814fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012814f push ebp */
  push32((uint32_t)(EBP));
  /* 10128150 mov ebp, esp */
  EBP = (ESP);
  /* 10128152 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10128155 push ebx */
  push32((uint32_t)(EBX));
  /* 10128156 push esi */
  push32((uint32_t)(ESI));
  /* 10128157 push edi */
  push32((uint32_t)(EDI));
  /* 10128158 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1012815d call 0x1012a2af */
  push32(0x10128162u); f_1012a2af();
  /* 10128162 mov esi, eax */
  ESI = (EAX);
  /* 10128164 pop ecx */
  ECX = (pop32());
  /* 10128165 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10128167 jne 0x10128171 */
  if (!C.zf) goto L_10128171;
  /* 10128169 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1012816b call 0x101270b1 */
  push32(0x10128170u); f_101270b1();
  /* 10128170 pop ecx */
  ECX = (pop32());
L_10128171:;
  /* 10128171 mov dword ptr [0x10137c60], esi */
  w32((uint32_t)(0x10137c60), (ESI));
  /* 10128177 mov dword ptr [0x10137d60], 0x20 */
  w32((uint32_t)(0x10137d60), (0x20u));
  /* 10128181 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_10128187:;
  /* 10128187 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128189 jae 0x101281a9 */
  if (!C.cf) goto L_101281a9;
  /* 1012818b and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 1012818f or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 10128192 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 10128196 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 1012819a mov eax, dword ptr [0x10137c60] */
  EAX = (r32((uint32_t)(0x10137c60)));
  /* 1012819f add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101281a2 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101281a7 jmp 0x10128187 */
  goto L_10128187;
L_101281a9:;
  /* 101281a9 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 101281ac push eax */
  push32((uint32_t)(EAX));
  /* 101281ad call dword ptr [0x1012e04c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e04c))), 0x101281b3u);
  /* 101281b3 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101281b8 je 0x1012828f */
  if (C.zf) goto L_1012828f;
  /* 101281be mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 101281c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101281c3 je 0x1012828f */
  if (C.zf) goto L_1012828f;
  /* 101281c9 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 101281cb lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 101281ce lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 101281d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 101281d4 mov eax, 0x800 */
  EAX = (0x800u);
  /* 101281d9 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101281db jl 0x101281df */
  if ((C.sf!=C.of)) goto L_101281df;
  /* 101281dd mov edi, eax */
  EDI = (EAX);
L_101281df:;
  /* 101281df cmp dword ptr [0x10137d60], edi */
  { uint32_t _a=(r32((uint32_t)(0x10137d60))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101281e5 jge 0x1012823d */
  if ((C.sf==C.of)) goto L_1012823d;
  /* 101281e7 mov esi, 0x10137c64 */
  ESI = (0x10137c64u);
L_101281ec:;
  /* 101281ec push 0x480 */
  push32((uint32_t)(0x480u));
  /* 101281f1 call 0x1012a2af */
  push32(0x101281f6u); f_1012a2af();
  /* 101281f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101281f8 pop ecx */
  ECX = (pop32());
  /* 101281f9 je 0x10128237 */
  if (C.zf) goto L_10128237;
  /* 101281fb add dword ptr [0x10137d60], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10137d60))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x10137d60), (_r)); fl_add(_a,_b,_r,32); }
  /* 10128202 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10128204 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_1012820a:;
  /* 1012820a cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012820c jae 0x1012822a */
  if (!C.cf) goto L_1012822a;
  /* 1012820e and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 10128212 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10128215 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10128219 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 1012821d mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1012821f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10128222 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10128228 jmp 0x1012820a */
  goto L_1012820a;
L_1012822a:;
  /* 1012822a add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1012822d cmp dword ptr [0x10137d60], edi */
  { uint32_t _a=(r32((uint32_t)(0x10137d60))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128233 jl 0x101281ec */
  if ((C.sf!=C.of)) goto L_101281ec;
  /* 10128235 jmp 0x1012823d */
  goto L_1012823d;
L_10128237:;
  /* 10128237 mov edi, dword ptr [0x10137d60] */
  EDI = (r32((uint32_t)(0x10137d60)));
L_1012823d:;
  /* 1012823d xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1012823f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10128241 jle 0x1012828f */
  if ((C.zf||C.sf!=C.of)) goto L_1012828f;
L_10128243:;
  /* 10128243 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10128246 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10128248 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012824b je 0x10128285 */
  if (C.zf) goto L_10128285;
  /* 1012824d mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 1012824f test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 10128251 je 0x10128285 */
  if (C.zf) goto L_10128285;
  /* 10128253 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 10128255 jne 0x10128262 */
  if (!C.zf) goto L_10128262;
  /* 10128257 push ecx */
  push32((uint32_t)(ECX));
  /* 10128258 call dword ptr [0x1012e048] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e048))), 0x1012825eu);
  /* 1012825e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10128260 je 0x10128285 */
  if (C.zf) goto L_10128285;
L_10128262:;
  /* 10128262 mov ecx, esi */
  ECX = (ESI);
  /* 10128264 mov eax, esi */
  EAX = (ESI);
  /* 10128266 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10128269 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1012826c mov ecx, dword ptr [ecx*4 + 0x10137c60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10137c60)));
  /* 10128273 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10128276 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 10128279 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1012827c mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 1012827e mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10128280 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 10128282 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_10128285:;
  /* 10128285 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 10128289 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1012828a inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1012828b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012828d jl 0x10128243 */
  if ((C.sf!=C.of)) goto L_10128243;
L_1012828f:;
  /* 1012828f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10128291:;
  /* 10128291 mov ecx, dword ptr [0x10137c60] */
  ECX = (r32((uint32_t)(0x10137c60)));
  /* 10128297 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 1012829a cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012829e lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 101282a1 jne 0x101282f0 */
  if (!C.zf) goto L_101282f0;
  /* 101282a3 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101282a5 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 101282a9 jne 0x101282b0 */
  if (!C.zf) goto L_101282b0;
  /* 101282ab push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 101282ad pop eax */
  EAX = (pop32());
  /* 101282ae jmp 0x101282ba */
  goto L_101282ba;
L_101282b0:;
  /* 101282b0 mov eax, ebx */
  EAX = (EBX);
  /* 101282b2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101282b3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 101282b5 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101282b7 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_101282ba:;
  /* 101282ba push eax */
  push32((uint32_t)(EAX));
  /* 101282bb call dword ptr [0x1012e044] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e044))), 0x101282c1u);
  /* 101282c1 mov edi, eax */
  EDI = (EAX);
  /* 101282c3 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101282c6 je 0x101282df */
  if (C.zf) goto L_101282df;
  /* 101282c8 push edi */
  push32((uint32_t)(EDI));
  /* 101282c9 call dword ptr [0x1012e048] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e048))), 0x101282cfu);
  /* 101282cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101282d1 je 0x101282df */
  if (C.zf) goto L_101282df;
  /* 101282d3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 101282d8 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 101282da cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101282dd jne 0x101282e5 */
  if (!C.zf) goto L_101282e5;
L_101282df:;
  /* 101282df or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 101282e3 jmp 0x101282f4 */
  goto L_101282f4;
L_101282e5:;
  /* 101282e5 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101282e8 jne 0x101282f4 */
  if (!C.zf) goto L_101282f4;
  /* 101282ea or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 101282ee jmp 0x101282f4 */
  goto L_101282f4;
L_101282f0:;
  /* 101282f0 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_101282f4:;
  /* 101282f4 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101282f5 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101282f8 jl 0x10128291 */
  if ((C.sf!=C.of)) goto L_10128291;
  /* 101282fa push dword ptr [0x10137d60] */
  push32((uint32_t)(r32((uint32_t)(0x10137d60))));
  /* 10128300 call dword ptr [0x1012e040] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e040))), 0x10128306u);
  /* 10128306 pop edi */
  EDI = (pop32());
  /* 10128307 pop esi */
  ESI = (pop32());
  /* 10128308 pop ebx */
  EBX = (pop32());
  /* 10128309 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1012830a ret  */
  ESPCHK(0x1012814fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000830b @ 0x1012830b (84 bytes, 33 insns) */
void f_1012830b(void) {
  FTRACE(0x1012830bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012830b push ebx */
  push32((uint32_t)(EBX));
  /* 1012830c push esi */
  push32((uint32_t)(ESI));
  /* 1012830d push edi */
  push32((uint32_t)(EDI));
  /* 1012830e mov esi, 0x10137c60 */
  ESI = (0x10137c60u);
L_10128313:;
  /* 10128313 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10128315 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10128317 je 0x10128350 */
  if (C.zf) goto L_10128350;
  /* 10128319 mov edi, eax */
  EDI = (EAX);
  /* 1012831b add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10128320 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128322 jae 0x10128345 */
  if (!C.cf) goto L_10128345;
  /* 10128324 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_10128327:;
  /* 10128327 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012832b je 0x10128334 */
  if (C.zf) goto L_10128334;
  /* 1012832d push ebx */
  push32((uint32_t)(EBX));
  /* 1012832e call dword ptr [0x1012e050] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e050))), 0x10128334u);
L_10128334:;
  /* 10128334 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10128336 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10128339 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012833e add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10128341 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128343 jb 0x10128327 */
  if (C.cf) goto L_10128327;
L_10128345:;
  /* 10128345 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10128347 call 0x1012a1c6 */
  push32(0x1012834cu); f_1012a1c6();
  /* 1012834c and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 1012834f pop ecx */
  ECX = (pop32());
L_10128350:;
  /* 10128350 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10128353 cmp esi, 0x10137d60 */
  { uint32_t _a=(ESI),_b=(0x10137d60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128359 jl 0x10128313 */
  if ((C.sf!=C.of)) goto L_10128313;
  /* 1012835b pop edi */
  EDI = (pop32());
  /* 1012835c pop esi */
  ESI = (pop32());
  /* 1012835d pop ebx */
  EBX = (pop32());
  /* 1012835e ret  */
  ESPCHK(0x1012830bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000835f @ 0x1012835f (185 bytes, 71 insns) */
void f_1012835f(void) {
  FTRACE(0x1012835fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012835f push ebx */
  push32((uint32_t)(EBX));
  /* 10128360 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10128362 cmp dword ptr [0x10137d68], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10137d68))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128368 push esi */
  push32((uint32_t)(ESI));
  /* 10128369 push edi */
  push32((uint32_t)(EDI));
  /* 1012836a jne 0x10128371 */
  if (!C.zf) goto L_10128371;
  /* 1012836c call 0x1012a7c1 */
  push32(0x10128371u); f_1012a7c1();
L_10128371:;
  /* 10128371 mov esi, dword ptr [0x10136668] */
  ESI = (r32((uint32_t)(0x10136668)));
  /* 10128377 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10128379:;
  /* 10128379 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1012837b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012837d je 0x10128391 */
  if (C.zf) goto L_10128391;
  /* 1012837f cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10128381 je 0x10128384 */
  if (C.zf) goto L_10128384;
  /* 10128383 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10128384:;
  /* 10128384 push esi */
  push32((uint32_t)(ESI));
  /* 10128385 call 0x10129040 */
  push32(0x1012838au); f_10129040();
  /* 1012838a pop ecx */
  ECX = (pop32());
  /* 1012838b lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 1012838f jmp 0x10128379 */
  goto L_10128379;
L_10128391:;
  /* 10128391 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 10128398 push eax */
  push32((uint32_t)(EAX));
  /* 10128399 call 0x1012a2af */
  push32(0x1012839eu); f_1012a2af();
  /* 1012839e mov esi, eax */
  ESI = (EAX);
  /* 101283a0 pop ecx */
  ECX = (pop32());
  /* 101283a1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101283a3 mov dword ptr [0x10136698], esi */
  w32((uint32_t)(0x10136698), (ESI));
  /* 101283a9 jne 0x101283b3 */
  if (!C.zf) goto L_101283b3;
  /* 101283ab push 9 */
  push32((uint32_t)(0x9u));
  /* 101283ad call 0x101270b1 */
  push32(0x101283b2u); f_101270b1();
  /* 101283b2 pop ecx */
  ECX = (pop32());
L_101283b3:;
  /* 101283b3 mov edi, dword ptr [0x10136668] */
  EDI = (r32((uint32_t)(0x10136668)));
  /* 101283b9 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101283bb je 0x101283f6 */
  if (C.zf) goto L_101283f6;
  /* 101283bd push ebp */
  push32((uint32_t)(EBP));
L_101283be:;
  /* 101283be push edi */
  push32((uint32_t)(EDI));
  /* 101283bf call 0x10129040 */
  push32(0x101283c4u); f_10129040();
  /* 101283c4 mov ebp, eax */
  EBP = (EAX);
  /* 101283c6 pop ecx */
  ECX = (pop32());
  /* 101283c7 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 101283c8 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101283cb je 0x101283ef */
  if (C.zf) goto L_101283ef;
  /* 101283cd push ebp */
  push32((uint32_t)(EBP));
  /* 101283ce call 0x1012a2af */
  push32(0x101283d3u); f_1012a2af();
  /* 101283d3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101283d5 pop ecx */
  ECX = (pop32());
  /* 101283d6 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 101283d8 jne 0x101283e2 */
  if (!C.zf) goto L_101283e2;
  /* 101283da push 9 */
  push32((uint32_t)(0x9u));
  /* 101283dc call 0x101270b1 */
  push32(0x101283e1u); f_101270b1();
  /* 101283e1 pop ecx */
  ECX = (pop32());
L_101283e2:;
  /* 101283e2 push edi */
  push32((uint32_t)(EDI));
  /* 101283e3 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101283e5 call 0x10129af0 */
  push32(0x101283eau); f_10129af0();
  /* 101283ea pop ecx */
  ECX = (pop32());
  /* 101283eb add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101283ee pop ecx */
  ECX = (pop32());
L_101283ef:;
  /* 101283ef add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101283f1 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101283f3 jne 0x101283be */
  if (!C.zf) goto L_101283be;
  /* 101283f5 pop ebp */
  EBP = (pop32());
L_101283f6:;
  /* 101283f6 push dword ptr [0x10136668] */
  push32((uint32_t)(r32((uint32_t)(0x10136668))));
  /* 101283fc call 0x1012a1c6 */
  push32(0x10128401u); f_1012a1c6();
  /* 10128401 pop ecx */
  ECX = (pop32());
  /* 10128402 mov dword ptr [0x10136668], ebx */
  w32((uint32_t)(0x10136668), (EBX));
  /* 10128408 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 1012840a pop edi */
  EDI = (pop32());
  /* 1012840b pop esi */
  ESI = (pop32());
  /* 1012840c mov dword ptr [0x10137d64], 1 */
  w32((uint32_t)(0x10137d64), (0x1u));
  /* 10128416 pop ebx */
  EBX = (pop32());
  /* 10128417 ret  */
  ESPCHK(0x1012835fu, _esp0);
  ESP += 4; return;
}

/* FUN_10008418 @ 0x10128418 (153 bytes, 62 insns) */
void f_10128418(void) {
  FTRACE(0x10128418u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10128418 push ebp */
  push32((uint32_t)(EBP));
  /* 10128419 mov ebp, esp */
  EBP = (ESP);
  /* 1012841b push ecx */
  push32((uint32_t)(ECX));
  /* 1012841c push ecx */
  push32((uint32_t)(ECX));
  /* 1012841d push ebx */
  push32((uint32_t)(EBX));
  /* 1012841e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10128420 cmp dword ptr [0x10137d68], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10137d68))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128426 push esi */
  push32((uint32_t)(ESI));
  /* 10128427 push edi */
  push32((uint32_t)(EDI));
  /* 10128428 jne 0x1012842f */
  if (!C.zf) goto L_1012842f;
  /* 1012842a call 0x1012a7c1 */
  push32(0x1012842fu); f_1012a7c1();
L_1012842f:;
  /* 1012842f mov esi, 0x101366bc */
  ESI = (0x101366bcu);
  /* 10128434 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10128439 push esi */
  push32((uint32_t)(ESI));
  /* 1012843a push ebx */
  push32((uint32_t)(EBX));
  /* 1012843b call dword ptr [0x1012e054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e054))), 0x10128441u);
  /* 10128441 mov eax, dword ptr [0x10137d74] */
  EAX = (r32((uint32_t)(0x10137d74)));
  /* 10128446 mov dword ptr [0x101366a8], esi */
  w32((uint32_t)(0x101366a8), (ESI));
  /* 1012844c mov edi, esi */
  EDI = (ESI);
  /* 1012844e cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10128450 je 0x10128454 */
  if (C.zf) goto L_10128454;
  /* 10128452 mov edi, eax */
  EDI = (EAX);
L_10128454:;
  /* 10128454 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10128457 push eax */
  push32((uint32_t)(EAX));
  /* 10128458 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 1012845b push eax */
  push32((uint32_t)(EAX));
  /* 1012845c push ebx */
  push32((uint32_t)(EBX));
  /* 1012845d push ebx */
  push32((uint32_t)(EBX));
  /* 1012845e push edi */
  push32((uint32_t)(EDI));
  /* 1012845f call 0x101284b1 */
  push32(0x10128464u); f_101284b1();
  /* 10128464 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10128467 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1012846a lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 1012846d push eax */
  push32((uint32_t)(EAX));
  /* 1012846e call 0x1012a2af */
  push32(0x10128473u); f_1012a2af();
  /* 10128473 mov esi, eax */
  ESI = (EAX);
  /* 10128475 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10128478 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012847a jne 0x10128484 */
  if (!C.zf) goto L_10128484;
  /* 1012847c push 8 */
  push32((uint32_t)(0x8u));
  /* 1012847e call 0x101270b1 */
  push32(0x10128483u); f_101270b1();
  /* 10128483 pop ecx */
  ECX = (pop32());
L_10128484:;
  /* 10128484 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10128487 push eax */
  push32((uint32_t)(EAX));
  /* 10128488 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 1012848b push eax */
  push32((uint32_t)(EAX));
  /* 1012848c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1012848f lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 10128492 push eax */
  push32((uint32_t)(EAX));
  /* 10128493 push esi */
  push32((uint32_t)(ESI));
  /* 10128494 push edi */
  push32((uint32_t)(EDI));
  /* 10128495 call 0x101284b1 */
  push32(0x1012849au); f_101284b1();
  /* 1012849a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1012849d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101284a0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101284a1 mov dword ptr [0x10136690], esi */
  w32((uint32_t)(0x10136690), (ESI));
  /* 101284a7 pop edi */
  EDI = (pop32());
  /* 101284a8 pop esi */
  ESI = (pop32());
  /* 101284a9 mov dword ptr [0x1013668c], eax */
  w32((uint32_t)(0x1013668c), (EAX));
  /* 101284ae pop ebx */
  EBX = (pop32());
  /* 101284af leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101284b0 ret  */
  ESPCHK(0x10128418u, _esp0);
  ESP += 4; return;
}

/* FUN_100084b1 @ 0x101284b1 (436 bytes, 187 insns) */
void f_101284b1(void) {
  FTRACE(0x101284b1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101284b1 push ebp */
  push32((uint32_t)(EBP));
  /* 101284b2 mov ebp, esp */
  EBP = (ESP);
  /* 101284b4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 101284b7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 101284ba push ebx */
  push32((uint32_t)(EBX));
  /* 101284bb push esi */
  push32((uint32_t)(ESI));
  /* 101284bc and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 101284bf mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 101284c2 push edi */
  push32((uint32_t)(EDI));
  /* 101284c3 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 101284c6 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 101284cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101284cf test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101284d1 je 0x101284db */
  if (C.zf) goto L_101284db;
  /* 101284d3 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 101284d5 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101284d8 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_101284db:;
  /* 101284db cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101284de jne 0x10128524 */
  if (!C.zf) goto L_10128524;
L_101284e0:;
  /* 101284e0 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 101284e3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101284e4 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101284e7 je 0x10128512 */
  if (C.zf) goto L_10128512;
  /* 101284e9 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101284eb je 0x10128512 */
  if (C.zf) goto L_10128512;
  /* 101284ed movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 101284f0 test byte ptr [edx + 0x10136b21], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10136b21)))&(0x4u); fl_logic(_r,8); }
  /* 101284f7 je 0x10128505 */
  if (C.zf) goto L_10128505;
  /* 101284f9 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 101284fb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101284fd je 0x10128505 */
  if (C.zf) goto L_10128505;
  /* 101284ff mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10128501 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10128503 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10128504 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10128505:;
  /* 10128505 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10128507 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10128509 je 0x101284e0 */
  if (C.zf) goto L_101284e0;
  /* 1012850b mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1012850d mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1012850f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10128510 jmp 0x101284e0 */
  goto L_101284e0;
L_10128512:;
  /* 10128512 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10128514 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10128516 je 0x1012851c */
  if (C.zf) goto L_1012851c;
  /* 10128518 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 1012851b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1012851c:;
  /* 1012851c cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012851f jne 0x10128567 */
  if (!C.zf) goto L_10128567;
  /* 10128521 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10128522 jmp 0x10128567 */
  goto L_10128567;
L_10128524:;
  /* 10128524 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10128526 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10128528 je 0x1012852f */
  if (C.zf) goto L_1012852f;
  /* 1012852a mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1012852c mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1012852e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1012852f:;
  /* 1012852f mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10128531 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10128532 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10128535 test byte ptr [ebx + 0x10136b21], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10136b21)))&(0x4u); fl_logic(_r,8); }
  /* 1012853c je 0x1012854a */
  if (C.zf) goto L_1012854a;
  /* 1012853e inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10128540 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10128542 je 0x10128549 */
  if (C.zf) goto L_10128549;
  /* 10128544 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 10128546 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 10128548 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10128549:;
  /* 10128549 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1012854a:;
  /* 1012854a cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012854d je 0x10128558 */
  if (C.zf) goto L_10128558;
  /* 1012854f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10128551 je 0x1012855c */
  if (C.zf) goto L_1012855c;
  /* 10128553 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10128556 jne 0x10128524 */
  if (!C.zf) goto L_10128524;
L_10128558:;
  /* 10128558 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1012855a jne 0x1012855f */
  if (!C.zf) goto L_1012855f;
L_1012855c:;
  /* 1012855c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1012855d jmp 0x10128567 */
  goto L_10128567;
L_1012855f:;
  /* 1012855f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10128561 je 0x10128567 */
  if (C.zf) goto L_10128567;
  /* 10128563 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_10128567:;
  /* 10128567 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_1012856b:;
  /* 1012856b cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012856e je 0x10128654 */
  if (C.zf) goto L_10128654;
L_10128574:;
  /* 10128574 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10128576 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10128579 je 0x10128580 */
  if (C.zf) goto L_10128580;
  /* 1012857b cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012857e jne 0x10128583 */
  if (!C.zf) goto L_10128583;
L_10128580:;
  /* 10128580 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10128581 jmp 0x10128574 */
  goto L_10128574;
L_10128583:;
  /* 10128583 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10128586 je 0x10128654 */
  if (C.zf) goto L_10128654;
  /* 1012858c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1012858e je 0x10128598 */
  if (C.zf) goto L_10128598;
  /* 10128590 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10128592 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10128595 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10128598:;
  /* 10128598 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1012859b inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_1012859d:;
  /* 1012859d mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 101285a4 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_101285a6:;
  /* 101285a6 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101285a9 jne 0x101285af */
  if (!C.zf) goto L_101285af;
  /* 101285ab inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101285ac inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101285ad jmp 0x101285a6 */
  goto L_101285a6;
L_101285af:;
  /* 101285af cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101285b2 jne 0x101285e0 */
  if (!C.zf) goto L_101285e0;
  /* 101285b4 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 101285b7 jne 0x101285de */
  if (!C.zf) goto L_101285de;
  /* 101285b9 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 101285bb cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101285be je 0x101285cd */
  if (C.zf) goto L_101285cd;
  /* 101285c0 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101285c4 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 101285c7 jne 0x101285cd */
  if (!C.zf) goto L_101285cd;
  /* 101285c9 mov eax, edx */
  EAX = (EDX);
  /* 101285cb jmp 0x101285d0 */
  goto L_101285d0;
L_101285cd:;
  /* 101285cd mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_101285d0:;
  /* 101285d0 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 101285d3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101285d5 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101285d8 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 101285db mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_101285de:;
  /* 101285de shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_101285e0:;
  /* 101285e0 mov edx, ebx */
  EDX = (EBX);
  /* 101285e2 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101285e3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 101285e5 je 0x101285f5 */
  if (C.zf) goto L_101285f5;
  /* 101285e7 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_101285e8:;
  /* 101285e8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101285ea je 0x101285f0 */
  if (C.zf) goto L_101285f0;
  /* 101285ec mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 101285ef inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_101285f0:;
  /* 101285f0 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 101285f2 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101285f3 jne 0x101285e8 */
  if (!C.zf) goto L_101285e8;
L_101285f5:;
  /* 101285f5 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 101285f7 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101285f9 je 0x10128645 */
  if (C.zf) goto L_10128645;
  /* 101285fb cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101285ff jne 0x1012860b */
  if (!C.zf) goto L_1012860b;
  /* 10128601 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10128604 je 0x10128645 */
  if (C.zf) goto L_10128645;
  /* 10128606 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10128609 je 0x10128645 */
  if (C.zf) goto L_10128645;
L_1012860b:;
  /* 1012860b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012860f je 0x1012863f */
  if (C.zf) goto L_1012863f;
  /* 10128611 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10128613 je 0x1012862e */
  if (C.zf) goto L_1012862e;
  /* 10128615 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10128618 test byte ptr [ebx + 0x10136b21], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10136b21)))&(0x4u); fl_logic(_r,8); }
  /* 1012861f je 0x10128627 */
  if (C.zf) goto L_10128627;
  /* 10128621 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10128623 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10128624 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10128625 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10128627:;
  /* 10128627 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10128629 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1012862b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1012862c jmp 0x1012863d */
  goto L_1012863d;
L_1012862e:;
  /* 1012862e movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 10128631 test byte ptr [edx + 0x10136b21], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10136b21)))&(0x4u); fl_logic(_r,8); }
  /* 10128638 je 0x1012863d */
  if (C.zf) goto L_1012863d;
  /* 1012863a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1012863b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1012863d:;
  /* 1012863d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1012863f:;
  /* 1012863f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10128640 jmp 0x1012859d */
  goto L_1012859d;
L_10128645:;
  /* 10128645 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10128647 je 0x1012864d */
  if (C.zf) goto L_1012864d;
  /* 10128649 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 1012864c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1012864d:;
  /* 1012864d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1012864f jmp 0x1012856b */
  goto L_1012856b;
L_10128654:;
  /* 10128654 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10128656 je 0x1012865b */
  if (C.zf) goto L_1012865b;
  /* 10128658 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1012865b:;
  /* 1012865b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1012865e pop edi */
  EDI = (pop32());
  /* 1012865f pop esi */
  ESI = (pop32());
  /* 10128660 pop ebx */
  EBX = (pop32());
  /* 10128661 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 10128663 pop ebp */
  EBP = (pop32());
  /* 10128664 ret  */
  ESPCHK(0x101284b1u, _esp0);
  ESP += 4; return;
}

/* FUN_10008665 @ 0x10128665 (306 bytes, 132 insns) */
void f_10128665(void) {
  FTRACE(0x10128665u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10128665 push ecx */
  push32((uint32_t)(ECX));
  /* 10128666 push ecx */
  push32((uint32_t)(ECX));
  /* 10128667 mov eax, dword ptr [0x101367c0] */
  EAX = (r32((uint32_t)(0x101367c0)));
  /* 1012866c push ebx */
  push32((uint32_t)(EBX));
  /* 1012866d push ebp */
  push32((uint32_t)(EBP));
  /* 1012866e mov ebp, dword ptr [0x1012e068] */
  EBP = (r32((uint32_t)(0x1012e068)));
  /* 10128674 push esi */
  push32((uint32_t)(ESI));
  /* 10128675 push edi */
  push32((uint32_t)(EDI));
  /* 10128676 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10128678 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1012867a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1012867c cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012867e jne 0x101286b3 */
  if (!C.zf) goto L_101286b3;
  /* 10128680 call ebp */
  call_ind((uint32_t)(EBP), 0x10128682u);
  /* 10128682 mov esi, eax */
  ESI = (EAX);
  /* 10128684 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128686 je 0x10128694 */
  if (C.zf) goto L_10128694;
  /* 10128688 mov dword ptr [0x101367c0], 1 */
  w32((uint32_t)(0x101367c0), (0x1u));
  /* 10128692 jmp 0x101286bc */
  goto L_101286bc;
L_10128694:;
  /* 10128694 call dword ptr [0x1012e064] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e064))), 0x1012869au);
  /* 1012869a mov edi, eax */
  EDI = (EAX);
  /* 1012869c cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012869e je 0x1012878e */
  if (C.zf) goto L_1012878e;
  /* 101286a4 mov dword ptr [0x101367c0], 2 */
  w32((uint32_t)(0x101367c0), (0x2u));
  /* 101286ae jmp 0x10128742 */
  goto L_10128742;
L_101286b3:;
  /* 101286b3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101286b6 jne 0x1012873d */
  if (!C.zf) goto L_1012873d;
L_101286bc:;
  /* 101286bc cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101286be jne 0x101286cc */
  if (!C.zf) goto L_101286cc;
  /* 101286c0 call ebp */
  call_ind((uint32_t)(EBP), 0x101286c2u);
  /* 101286c2 mov esi, eax */
  ESI = (EAX);
  /* 101286c4 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101286c6 je 0x1012878e */
  if (C.zf) goto L_1012878e;
L_101286cc:;
  /* 101286cc cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101286cf mov eax, esi */
  EAX = (ESI);
  /* 101286d1 je 0x101286e1 */
  if (C.zf) goto L_101286e1;
L_101286d3:;
  /* 101286d3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101286d4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101286d5 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101286d8 jne 0x101286d3 */
  if (!C.zf) goto L_101286d3;
  /* 101286da inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101286db inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101286dc cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101286df jne 0x101286d3 */
  if (!C.zf) goto L_101286d3;
L_101286e1:;
  /* 101286e1 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101286e3 mov edi, dword ptr [0x1012e060] */
  EDI = (r32((uint32_t)(0x1012e060)));
  /* 101286e9 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 101286eb push ebx */
  push32((uint32_t)(EBX));
  /* 101286ec push ebx */
  push32((uint32_t)(EBX));
  /* 101286ed inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101286ee push ebx */
  push32((uint32_t)(EBX));
  /* 101286ef push ebx */
  push32((uint32_t)(EBX));
  /* 101286f0 push eax */
  push32((uint32_t)(EAX));
  /* 101286f1 push esi */
  push32((uint32_t)(ESI));
  /* 101286f2 push ebx */
  push32((uint32_t)(EBX));
  /* 101286f3 push ebx */
  push32((uint32_t)(EBX));
  /* 101286f4 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 101286f8 call edi */
  call_ind((uint32_t)(EDI), 0x101286fau);
  /* 101286fa mov ebp, eax */
  EBP = (EAX);
  /* 101286fc cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101286fe je 0x10128732 */
  if (C.zf) goto L_10128732;
  /* 10128700 push ebp */
  push32((uint32_t)(EBP));
  /* 10128701 call 0x1012a2af */
  push32(0x10128706u); f_1012a2af();
  /* 10128706 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128708 pop ecx */
  ECX = (pop32());
  /* 10128709 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 1012870d je 0x10128732 */
  if (C.zf) goto L_10128732;
  /* 1012870f push ebx */
  push32((uint32_t)(EBX));
  /* 10128710 push ebx */
  push32((uint32_t)(EBX));
  /* 10128711 push ebp */
  push32((uint32_t)(EBP));
  /* 10128712 push eax */
  push32((uint32_t)(EAX));
  /* 10128713 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 10128717 push esi */
  push32((uint32_t)(ESI));
  /* 10128718 push ebx */
  push32((uint32_t)(EBX));
  /* 10128719 push ebx */
  push32((uint32_t)(EBX));
  /* 1012871a call edi */
  call_ind((uint32_t)(EDI), 0x1012871cu);
  /* 1012871c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012871e jne 0x1012872e */
  if (!C.zf) goto L_1012872e;
  /* 10128720 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 10128724 call 0x1012a1c6 */
  push32(0x10128729u); f_1012a1c6();
  /* 10128729 pop ecx */
  ECX = (pop32());
  /* 1012872a mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_1012872e:;
  /* 1012872e mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_10128732:;
  /* 10128732 push esi */
  push32((uint32_t)(ESI));
  /* 10128733 call dword ptr [0x1012e05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e05c))), 0x10128739u);
  /* 10128739 mov eax, ebx */
  EAX = (EBX);
  /* 1012873b jmp 0x10128790 */
  goto L_10128790;
L_1012873d:;
  /* 1012873d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128740 jne 0x1012878e */
  if (!C.zf) goto L_1012878e;
L_10128742:;
  /* 10128742 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128744 jne 0x10128752 */
  if (!C.zf) goto L_10128752;
  /* 10128746 call dword ptr [0x1012e064] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e064))), 0x1012874cu);
  /* 1012874c mov edi, eax */
  EDI = (EAX);
  /* 1012874e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128750 je 0x1012878e */
  if (C.zf) goto L_1012878e;
L_10128752:;
  /* 10128752 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10128754 mov eax, edi */
  EAX = (EDI);
  /* 10128756 je 0x10128762 */
  if (C.zf) goto L_10128762;
L_10128758:;
  /* 10128758 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10128759 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012875b jne 0x10128758 */
  if (!C.zf) goto L_10128758;
  /* 1012875d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1012875e cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10128760 jne 0x10128758 */
  if (!C.zf) goto L_10128758;
L_10128762:;
  /* 10128762 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10128764 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10128765 mov ebp, eax */
  EBP = (EAX);
  /* 10128767 push ebp */
  push32((uint32_t)(EBP));
  /* 10128768 call 0x1012a2af */
  push32(0x1012876du); f_1012a2af();
  /* 1012876d mov esi, eax */
  ESI = (EAX);
  /* 1012876f pop ecx */
  ECX = (pop32());
  /* 10128770 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128772 jne 0x10128778 */
  if (!C.zf) goto L_10128778;
  /* 10128774 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10128776 jmp 0x10128783 */
  goto L_10128783;
L_10128778:;
  /* 10128778 push ebp */
  push32((uint32_t)(EBP));
  /* 10128779 push edi */
  push32((uint32_t)(EDI));
  /* 1012877a push esi */
  push32((uint32_t)(ESI));
  /* 1012877b call 0x1012a7e0 */
  push32(0x10128780u); f_1012a7e0();
  /* 10128780 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10128783:;
  /* 10128783 push edi */
  push32((uint32_t)(EDI));
  /* 10128784 call dword ptr [0x1012e058] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e058))), 0x1012878au);
  /* 1012878a mov eax, esi */
  EAX = (ESI);
  /* 1012878c jmp 0x10128790 */
  goto L_10128790;
L_1012878e:;
  /* 1012878e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10128790:;
  /* 10128790 pop edi */
  EDI = (pop32());
  /* 10128791 pop esi */
  ESI = (pop32());
  /* 10128792 pop ebp */
  EBP = (pop32());
  /* 10128793 pop ebx */
  EBX = (pop32());
  /* 10128794 pop ecx */
  ECX = (pop32());
  /* 10128795 pop ecx */
  ECX = (pop32());
  /* 10128796 ret  */
  ESPCHK(0x10128665u, _esp0);
  ESP += 4; return;
}

/* FUN_10008797 @ 0x10128797 (45 bytes, 17 insns) */
void f_10128797(void) {
  FTRACE(0x10128797u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10128797 push esi */
  push32((uint32_t)(ESI));
  /* 10128798 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1012879c push 0 */
  push32((uint32_t)(0x0u));
  /* 1012879e and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 101287a1 call dword ptr [0x1012e004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e004))), 0x101287a7u);
  /* 101287a7 cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101287ac jne 0x101287c2 */
  if (!C.zf) goto L_101287c2;
  /* 101287ae mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 101287b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101287b3 je 0x101287c2 */
  if (C.zf) goto L_101287c2;
  /* 101287b5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101287b7 mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 101287ba mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 101287bc mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 101287bf mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_101287c2:;
  /* 101287c2 pop esi */
  ESI = (pop32());
  /* 101287c3 ret  */
  ESPCHK(0x10128797u, _esp0);
  ESP += 4; return;
}

/* FUN_100087c4 @ 0x101287c4 (328 bytes, 115 insns) */
void f_101287c4(void) {
  FTRACE(0x101287c4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101287c4 push ebp */
  push32((uint32_t)(EBP));
  /* 101287c5 mov ebp, esp */
  EBP = (ESP);
  /* 101287c7 mov eax, 0x122c */
  EAX = (0x122cu);
  /* 101287cc call 0x1012aed0 */
  push32(0x101287d1u); f_1012aed0();
  /* 101287d1 lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 101287d7 push ebx */
  push32((uint32_t)(EBX));
  /* 101287d8 push eax */
  push32((uint32_t)(EAX));
  /* 101287d9 mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 101287e3 call dword ptr [0x1012e070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e070))), 0x101287e9u);
  /* 101287e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101287eb je 0x10128807 */
  if (C.zf) goto L_10128807;
  /* 101287ed cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101287f4 jne 0x10128807 */
  if (!C.zf) goto L_10128807;
  /* 101287f6 cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101287fd jb 0x10128807 */
  if (C.cf) goto L_10128807;
  /* 101287ff push 1 */
  push32((uint32_t)(0x1u));
  /* 10128801 pop eax */
  EAX = (pop32());
  /* 10128802 jmp 0x10128909 */
  goto L_10128909;
L_10128807:;
  /* 10128807 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 1012880d push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 10128812 push eax */
  push32((uint32_t)(EAX));
  /* 10128813 push 0x1012e1c8 */
  push32((uint32_t)(0x1012e1c8u));
  /* 10128818 call dword ptr [0x1012e06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e06c))), 0x1012881eu);
  /* 1012881e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10128820 je 0x101288f6 */
  if (C.zf) goto L_101288f6;
  /* 10128826 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10128828 lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 1012882e cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10128834 je 0x10128849 */
  if (C.zf) goto L_10128849;
L_10128836:;
  /* 10128836 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10128838 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012883a jl 0x10128844 */
  if ((C.sf!=C.of)) goto L_10128844;
  /* 1012883c cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012883e jg 0x10128844 */
  if ((!C.zf&&C.sf==C.of)) goto L_10128844;
  /* 10128840 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10128842 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_10128844:;
  /* 10128844 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10128845 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10128847 jne 0x10128836 */
  if (!C.zf) goto L_10128836;
L_10128849:;
  /* 10128849 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 1012884f push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10128851 push eax */
  push32((uint32_t)(EAX));
  /* 10128852 push 0x1012e1b0 */
  push32((uint32_t)(0x1012e1b0u));
  /* 10128857 call 0x1012ae90 */
  push32(0x1012885cu); f_1012ae90();
  /* 1012885c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012885f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10128861 jne 0x1012886b */
  if (!C.zf) goto L_1012886b;
  /* 10128863 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 10128869 jmp 0x101288b4 */
  goto L_101288b4;
L_1012886b:;
  /* 1012886b lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 10128871 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10128876 push eax */
  push32((uint32_t)(EAX));
  /* 10128877 push ebx */
  push32((uint32_t)(EBX));
  /* 10128878 call dword ptr [0x1012e054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e054))), 0x1012887eu);
  /* 1012887e cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10128884 lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 1012888a je 0x1012889f */
  if (C.zf) goto L_1012889f;
L_1012888c:;
  /* 1012888c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1012888e cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10128890 jl 0x1012889a */
  if ((C.sf!=C.of)) goto L_1012889a;
  /* 10128892 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10128894 jg 0x1012889a */
  if ((!C.zf&&C.sf==C.of)) goto L_1012889a;
  /* 10128896 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10128898 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_1012889a:;
  /* 1012889a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1012889b cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012889d jne 0x1012888c */
  if (!C.zf) goto L_1012888c;
L_1012889f:;
  /* 1012889f lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 101288a5 push eax */
  push32((uint32_t)(EAX));
  /* 101288a6 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 101288ac push eax */
  push32((uint32_t)(EAX));
  /* 101288ad call 0x1012ae10 */
  push32(0x101288b2u); f_1012ae10();
  /* 101288b2 pop ecx */
  ECX = (pop32());
  /* 101288b3 pop ecx */
  ECX = (pop32());
L_101288b4:;
  /* 101288b4 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101288b6 je 0x101288f6 */
  if (C.zf) goto L_101288f6;
  /* 101288b8 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 101288ba push eax */
  push32((uint32_t)(EAX));
  /* 101288bb call 0x1012ad50 */
  push32(0x101288c0u); f_1012ad50();
  /* 101288c0 pop ecx */
  ECX = (pop32());
  /* 101288c1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101288c3 pop ecx */
  ECX = (pop32());
  /* 101288c4 je 0x101288f6 */
  if (C.zf) goto L_101288f6;
  /* 101288c6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101288c7 mov ecx, eax */
  ECX = (EAX);
  /* 101288c9 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101288cb je 0x101288db */
  if (C.zf) goto L_101288db;
L_101288cd:;
  /* 101288cd cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101288d0 jne 0x101288d6 */
  if (!C.zf) goto L_101288d6;
  /* 101288d2 mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 101288d4 jmp 0x101288d7 */
  goto L_101288d7;
L_101288d6:;
  /* 101288d6 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_101288d7:;
  /* 101288d7 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101288d9 jne 0x101288cd */
  if (!C.zf) goto L_101288cd;
L_101288db:;
  /* 101288db push 0xa */
  push32((uint32_t)(0xau));
  /* 101288dd push ebx */
  push32((uint32_t)(EBX));
  /* 101288de push eax */
  push32((uint32_t)(EAX));
  /* 101288df call 0x1012ab15 */
  push32(0x101288e4u); f_1012ab15();
  /* 101288e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101288e7 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101288ea je 0x10128909 */
  if (C.zf) goto L_10128909;
  /* 101288ec cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101288ef je 0x10128909 */
  if (C.zf) goto L_10128909;
  /* 101288f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101288f4 je 0x10128909 */
  if (C.zf) goto L_10128909;
L_101288f6:;
  /* 101288f6 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 101288f9 push eax */
  push32((uint32_t)(EAX));
  /* 101288fa call 0x10128797 */
  push32(0x101288ffu); f_10128797();
  /* 101288ff cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10128903 pop ecx */
  ECX = (pop32());
  /* 10128904 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10128906 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10128909:;
  /* 10128909 pop ebx */
  EBX = (pop32());
  /* 1012890a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1012890b ret  */
  ESPCHK(0x101287c4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000890c @ 0x1012890c (93 bytes, 30 insns) */
void f_1012890c(void) {
  FTRACE(0x1012890cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012890c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012890e push 0 */
  push32((uint32_t)(0x0u));
  /* 10128910 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128914 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10128919 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 1012891c push eax */
  push32((uint32_t)(EAX));
  /* 1012891d call dword ptr [0x1012e078] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e078))), 0x10128923u);
  /* 10128923 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10128925 mov dword ptr [0x10137c44], eax */
  w32((uint32_t)(0x10137c44), (EAX));
  /* 1012892a je 0x10128962 */
  if (C.zf) goto L_10128962;
  /* 1012892c call 0x101287c4 */
  push32(0x10128931u); f_101287c4();
  /* 10128931 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128934 mov dword ptr [0x10137c48], eax */
  w32((uint32_t)(0x10137c48), (EAX));
  /* 10128939 jne 0x10128948 */
  if (!C.zf) goto L_10128948;
  /* 1012893b push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 10128940 call 0x1012aeff */
  push32(0x10128945u); f_1012aeff();
  /* 10128945 pop ecx */
  ECX = (pop32());
  /* 10128946 jmp 0x10128952 */
  goto L_10128952;
L_10128948:;
  /* 10128948 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012894b jne 0x10128965 */
  if (!C.zf) goto L_10128965;
  /* 1012894d call 0x1012b750 */
  push32(0x10128952u); f_1012b750();
L_10128952:;
  /* 10128952 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10128954 jne 0x10128965 */
  if (!C.zf) goto L_10128965;
  /* 10128956 push dword ptr [0x10137c44] */
  push32((uint32_t)(r32((uint32_t)(0x10137c44))));
  /* 1012895c call dword ptr [0x1012e074] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e074))), 0x10128962u);
L_10128962:;
  /* 10128962 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10128964 ret  */
  ESPCHK(0x1012890cu, _esp0);
  ESP += 4; return;
L_10128965:;
  /* 10128965 push 1 */
  push32((uint32_t)(0x1u));
  /* 10128967 pop eax */
  EAX = (pop32());
  /* 10128968 ret  */
  ESPCHK(0x1012890cu, _esp0);
  ESP += 4; return;
}

/* FUN_10008969 @ 0x10128969 (168 bytes, 56 insns) */
void f_10128969(void) {
  FTRACE(0x10128969u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10128969 mov eax, dword ptr [0x10137c48] */
  EAX = (r32((uint32_t)(0x10137c48)));
  /* 1012896e push esi */
  push32((uint32_t)(ESI));
  /* 1012896f cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128972 push edi */
  push32((uint32_t)(EDI));
  /* 10128973 jne 0x101289db */
  if (!C.zf) goto L_101289db;
  /* 10128975 push ebx */
  push32((uint32_t)(EBX));
  /* 10128976 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10128978 cmp dword ptr [0x101369e8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101369e8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012897e push ebp */
  push32((uint32_t)(EBP));
  /* 1012897f mov ebp, dword ptr [0x1012e080] */
  EBP = (r32((uint32_t)(0x1012e080)));
  /* 10128985 jle 0x101289c7 */
  if ((C.zf||C.sf!=C.of)) goto L_101289c7;
  /* 10128987 mov eax, dword ptr [0x101369ec] */
  EAX = (r32((uint32_t)(0x101369ec)));
  /* 1012898c mov edi, dword ptr [0x1012e07c] */
  EDI = (r32((uint32_t)(0x1012e07c)));
  /* 10128992 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_10128995:;
  /* 10128995 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1012899a push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1012899f push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101289a1 call edi */
  call_ind((uint32_t)(EDI), 0x101289a3u);
  /* 101289a3 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 101289a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 101289aa push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101289ac call edi */
  call_ind((uint32_t)(EDI), 0x101289aeu);
  /* 101289ae push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 101289b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 101289b3 push dword ptr [0x10137c44] */
  push32((uint32_t)(r32((uint32_t)(0x10137c44))));
  /* 101289b9 call ebp */
  call_ind((uint32_t)(EBP), 0x101289bbu);
  /* 101289bb add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101289be inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101289bf cmp ebx, dword ptr [0x101369e8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x101369e8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101289c5 jl 0x10128995 */
  if ((C.sf!=C.of)) goto L_10128995;
L_101289c7:;
  /* 101289c7 push dword ptr [0x101369ec] */
  push32((uint32_t)(r32((uint32_t)(0x101369ec))));
  /* 101289cd push 0 */
  push32((uint32_t)(0x0u));
  /* 101289cf push dword ptr [0x10137c44] */
  push32((uint32_t)(r32((uint32_t)(0x10137c44))));
  /* 101289d5 call ebp */
  call_ind((uint32_t)(EBP), 0x101289d7u);
  /* 101289d7 pop ebp */
  EBP = (pop32());
  /* 101289d8 pop ebx */
  EBX = (pop32());
  /* 101289d9 jmp 0x10128a02 */
  goto L_10128a02;
L_101289db:;
  /* 101289db cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101289de jne 0x10128a02 */
  if (!C.zf) goto L_10128a02;
  /* 101289e0 mov edi, 0x10130e80 */
  EDI = (0x10130e80u);
  /* 101289e5 mov esi, edi */
  ESI = (EDI);
L_101289e7:;
  /* 101289e7 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 101289ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101289ec je 0x101289fc */
  if (C.zf) goto L_101289fc;
  /* 101289ee push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 101289f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 101289f5 push eax */
  push32((uint32_t)(EAX));
  /* 101289f6 call dword ptr [0x1012e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e07c))), 0x101289fcu);
L_101289fc:;
  /* 101289fc mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 101289fe cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128a00 jne 0x101289e7 */
  if (!C.zf) goto L_101289e7;
L_10128a02:;
  /* 10128a02 push dword ptr [0x10137c44] */
  push32((uint32_t)(r32((uint32_t)(0x10137c44))));
  /* 10128a08 call dword ptr [0x1012e074] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e074))), 0x10128a0eu);
  /* 10128a0e pop edi */
  EDI = (pop32());
  /* 10128a0f pop esi */
  ESI = (pop32());
  /* 10128a10 ret  */
  ESPCHK(0x10128969u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a11 @ 0x10128a11 (57 bytes, 18 insns) */
void f_10128a11(void) {
  FTRACE(0x10128a11u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10128a11 mov eax, dword ptr [0x10136670] */
  EAX = (r32((uint32_t)(0x10136670)));
  /* 10128a16 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128a19 je 0x10128a28 */
  if (C.zf) goto L_10128a28;
  /* 10128a1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10128a1d jne 0x10128a49 */
  if (!C.zf) goto L_10128a49;
  /* 10128a1f cmp dword ptr [0x10136674], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10136674))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128a26 jne 0x10128a49 */
  if (!C.zf) goto L_10128a49;
L_10128a28:;
  /* 10128a28 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10128a2d call 0x10128a4a */
  push32(0x10128a32u); f_10128a4a();
  /* 10128a32 mov eax, dword ptr [0x101367c4] */
  EAX = (r32((uint32_t)(0x101367c4)));
  /* 10128a37 pop ecx */
  ECX = (pop32());
  /* 10128a38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10128a3a je 0x10128a3e */
  if (C.zf) goto L_10128a3e;
  /* 10128a3c call eax */
  call_ind((uint32_t)(EAX), 0x10128a3eu);
L_10128a3e:;
  /* 10128a3e push 0xff */
  push32((uint32_t)(0xffu));
  /* 10128a43 call 0x10128a4a */
  push32(0x10128a48u); f_10128a4a();
  /* 10128a48 pop ecx */
  ECX = (pop32());
L_10128a49:;
  /* 10128a49 ret  */
  ESPCHK(0x10128a11u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a4a @ 0x10128a4a (339 bytes, 100 insns) */
void f_10128a4a(void) {
  FTRACE(0x10128a4au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10128a4a push ebp */
  push32((uint32_t)(EBP));
  /* 10128a4b mov ebp, esp */
  EBP = (ESP);
  /* 10128a4d sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10128a53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10128a56 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10128a58 mov eax, 0x101306d8 */
  EAX = (0x101306d8u);
L_10128a5d:;
  /* 10128a5d cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128a5f je 0x10128a6c */
  if (C.zf) goto L_10128a6c;
  /* 10128a61 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10128a64 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10128a65 cmp eax, 0x10130768 */
  { uint32_t _a=(EAX),_b=(0x10130768u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128a6a jl 0x10128a5d */
  if ((C.sf!=C.of)) goto L_10128a5d;
L_10128a6c:;
  /* 10128a6c push esi */
  push32((uint32_t)(ESI));
  /* 10128a6d mov esi, ecx */
  ESI = (ECX);
  /* 10128a6f shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 10128a72 cmp edx, dword ptr [esi + 0x101306d8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x101306d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128a78 jne 0x10128b9a */
  if (!C.zf) goto L_10128b9a;
  /* 10128a7e mov eax, dword ptr [0x10136670] */
  EAX = (r32((uint32_t)(0x10136670)));
  /* 10128a83 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128a86 je 0x10128b74 */
  if (C.zf) goto L_10128b74;
  /* 10128a8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10128a8e jne 0x10128a9d */
  if (!C.zf) goto L_10128a9d;
  /* 10128a90 cmp dword ptr [0x10136674], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10136674))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128a97 je 0x10128b74 */
  if (C.zf) goto L_10128b74;
L_10128a9d:;
  /* 10128a9d cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128aa3 je 0x10128b9a */
  if (C.zf) goto L_10128b9a;
  /* 10128aa9 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10128aaf push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10128ab4 push eax */
  push32((uint32_t)(EAX));
  /* 10128ab5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10128ab7 call dword ptr [0x1012e054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e054))), 0x10128abdu);
  /* 10128abd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10128abf jne 0x10128ad4 */
  if (!C.zf) goto L_10128ad4;
  /* 10128ac1 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10128ac7 push 0x1012e4b8 */
  push32((uint32_t)(0x1012e4b8u));
  /* 10128acc push eax */
  push32((uint32_t)(EAX));
  /* 10128acd call 0x10129af0 */
  push32(0x10128ad2u); f_10129af0();
  /* 10128ad2 pop ecx */
  ECX = (pop32());
  /* 10128ad3 pop ecx */
  ECX = (pop32());
L_10128ad4:;
  /* 10128ad4 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10128ada push edi */
  push32((uint32_t)(EDI));
  /* 10128adb push eax */
  push32((uint32_t)(EAX));
  /* 10128adc lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 10128ae2 call 0x10129040 */
  push32(0x10128ae7u); f_10129040();
  /* 10128ae7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10128ae8 pop ecx */
  ECX = (pop32());
  /* 10128ae9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128aec jbe 0x10128b17 */
  if ((C.cf||C.zf)) goto L_10128b17;
  /* 10128aee lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10128af4 push eax */
  push32((uint32_t)(EAX));
  /* 10128af5 call 0x10129040 */
  push32(0x10128afau); f_10129040();
  /* 10128afa mov edi, eax */
  EDI = (EAX);
  /* 10128afc lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10128b02 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10128b05 push 3 */
  push32((uint32_t)(0x3u));
  /* 10128b07 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10128b09 push 0x1012e4b4 */
  push32((uint32_t)(0x1012e4b4u));
  /* 10128b0e push edi */
  push32((uint32_t)(EDI));
  /* 10128b0f call 0x1012be00 */
  push32(0x10128b14u); f_1012be00();
  /* 10128b14 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10128b17:;
  /* 10128b17 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10128b1d push 0x1012e498 */
  push32((uint32_t)(0x1012e498u));
  /* 10128b22 push eax */
  push32((uint32_t)(EAX));
  /* 10128b23 call 0x10129af0 */
  push32(0x10128b28u); f_10129af0();
  /* 10128b28 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10128b2e push edi */
  push32((uint32_t)(EDI));
  /* 10128b2f push eax */
  push32((uint32_t)(EAX));
  /* 10128b30 call 0x10129b00 */
  push32(0x10128b35u); f_10129b00();
  /* 10128b35 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10128b3b push 0x1012e494 */
  push32((uint32_t)(0x1012e494u));
  /* 10128b40 push eax */
  push32((uint32_t)(EAX));
  /* 10128b41 call 0x10129b00 */
  push32(0x10128b46u); f_10129b00();
  /* 10128b46 push dword ptr [esi + 0x101306dc] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x101306dc))));
  /* 10128b4c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10128b52 push eax */
  push32((uint32_t)(EAX));
  /* 10128b53 call 0x10129b00 */
  push32(0x10128b58u); f_10129b00();
  /* 10128b58 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10128b5d lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10128b63 push 0x1012e46c */
  push32((uint32_t)(0x1012e46cu));
  /* 10128b68 push eax */
  push32((uint32_t)(EAX));
  /* 10128b69 call 0x1012bd74 */
  push32(0x10128b6eu); f_1012bd74();
  /* 10128b6e add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10128b71 pop edi */
  EDI = (pop32());
  /* 10128b72 jmp 0x10128b9a */
  goto L_10128b9a;
L_10128b74:;
  /* 10128b74 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10128b77 lea esi, [esi + 0x101306dc] */
  ESI = ((uint32_t)(ESI + 0x101306dc));
  /* 10128b7d push 0 */
  push32((uint32_t)(0x0u));
  /* 10128b7f push eax */
  push32((uint32_t)(EAX));
  /* 10128b80 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10128b82 call 0x10129040 */
  push32(0x10128b87u); f_10129040();
  /* 10128b87 pop ecx */
  ECX = (pop32());
  /* 10128b88 push eax */
  push32((uint32_t)(EAX));
  /* 10128b89 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10128b8b push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10128b8d call dword ptr [0x1012e044] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e044))), 0x10128b93u);
  /* 10128b93 push eax */
  push32((uint32_t)(EAX));
  /* 10128b94 call dword ptr [0x1012e084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e084))), 0x10128b9au);
L_10128b9a:;
  /* 10128b9a pop esi */
  ESI = (pop32());
  /* 10128b9b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10128b9c ret  */
  ESPCHK(0x10128a4au, _esp0);
  ESP += 4; return;
}

/* FUN_10008b9d @ 0x10128b9d (101 bytes, 34 insns) */
void f_10128b9d(void) {
  FTRACE(0x10128b9du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10128b9d push esi */
  push32((uint32_t)(ESI));
  /* 10128b9e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10128ba2 cmp esi, dword ptr [0x10137d60] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10137d60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128ba8 jae 0x10128bea */
  if (!C.cf) goto L_10128bea;
  /* 10128baa mov ecx, esi */
  ECX = (ESI);
  /* 10128bac mov eax, esi */
  EAX = (ESI);
  /* 10128bae sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10128bb1 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10128bb4 mov ecx, dword ptr [ecx*4 + 0x10137c60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10137c60)));
  /* 10128bbb lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10128bbe test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10128bc3 je 0x10128bea */
  if (C.zf) goto L_10128bea;
  /* 10128bc5 push edi */
  push32((uint32_t)(EDI));
  /* 10128bc6 push esi */
  push32((uint32_t)(ESI));
  /* 10128bc7 call 0x1012c044 */
  push32(0x10128bccu); f_1012c044();
  /* 10128bcc push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10128bd0 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10128bd4 push esi */
  push32((uint32_t)(ESI));
  /* 10128bd5 call 0x10128c02 */
  push32(0x10128bdau); f_10128c02();
  /* 10128bda push esi */
  push32((uint32_t)(ESI));
  /* 10128bdb mov edi, eax */
  EDI = (EAX);
  /* 10128bdd call 0x1012c0a3 */
  push32(0x10128be2u); f_1012c0a3();
  /* 10128be2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10128be5 mov eax, edi */
  EAX = (EDI);
  /* 10128be7 pop edi */
  EDI = (pop32());
  /* 10128be8 pop esi */
  ESI = (pop32());
  /* 10128be9 ret  */
  ESPCHK(0x10128b9du, _esp0);
  ESP += 4; return;
L_10128bea:;
  /* 10128bea call 0x1012bf71 */
  push32(0x10128befu); f_1012bf71();
  /* 10128bef mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10128bf5 call 0x1012bf7a */
  push32(0x10128bfau); f_1012bf7a();
  /* 10128bfa and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10128bfd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10128c00 pop esi */
  ESI = (pop32());
  /* 10128c01 ret  */
  ESPCHK(0x10128b9du, _esp0);
  ESP += 4; return;
}

/* FUN_10008c02 @ 0x10128c02 (115 bytes, 41 insns) */
void f_10128c02(void) {
  FTRACE(0x10128c02u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10128c02 push esi */
  push32((uint32_t)(ESI));
  /* 10128c03 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10128c07 push edi */
  push32((uint32_t)(EDI));
  /* 10128c08 push esi */
  push32((uint32_t)(ESI));
  /* 10128c09 call 0x1012c002 */
  push32(0x10128c0eu); f_1012c002();
  /* 10128c0e cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128c11 pop ecx */
  ECX = (pop32());
  /* 10128c12 jne 0x10128c21 */
  if (!C.zf) goto L_10128c21;
  /* 10128c14 call 0x1012bf71 */
  push32(0x10128c19u); f_1012bf71();
  /* 10128c19 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10128c1f jmp 0x10128c4e */
  goto L_10128c4e;
L_10128c21:;
  /* 10128c21 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 10128c25 push 0 */
  push32((uint32_t)(0x0u));
  /* 10128c27 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10128c2b push eax */
  push32((uint32_t)(EAX));
  /* 10128c2c call dword ptr [0x1012e000] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e000))), 0x10128c32u);
  /* 10128c32 mov edi, eax */
  EDI = (EAX);
  /* 10128c34 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128c37 jne 0x10128c41 */
  if (!C.zf) goto L_10128c41;
  /* 10128c39 call dword ptr [0x1012e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e03c))), 0x10128c3fu);
  /* 10128c3f jmp 0x10128c43 */
  goto L_10128c43;
L_10128c41:;
  /* 10128c41 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10128c43:;
  /* 10128c43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10128c45 je 0x10128c53 */
  if (C.zf) goto L_10128c53;
  /* 10128c47 push eax */
  push32((uint32_t)(EAX));
  /* 10128c48 call 0x1012befe */
  push32(0x10128c4du); f_1012befe();
  /* 10128c4d pop ecx */
  ECX = (pop32());
L_10128c4e:;
  /* 10128c4e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10128c51 jmp 0x10128c72 */
  goto L_10128c72;
L_10128c53:;
  /* 10128c53 mov ecx, esi */
  ECX = (ESI);
  /* 10128c55 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 10128c58 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10128c5b mov eax, esi */
  EAX = (ESI);
  /* 10128c5d mov ecx, dword ptr [ecx*4 + 0x10137c60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10137c60)));
  /* 10128c64 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10128c67 and byte ptr [ecx + eax*4 + 4], 0xfd */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0xfdu); w8((uint32_t)(ECX + EAX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 10128c6c lea eax, [ecx + eax*4 + 4] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 10128c70 mov eax, edi */
  EAX = (EDI);
L_10128c72:;
  /* 10128c72 pop edi */
  EDI = (pop32());
  /* 10128c73 pop esi */
  ESI = (pop32());
  /* 10128c74 ret  */
  ESPCHK(0x10128c02u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c75 @ 0x10128c75 (101 bytes, 34 insns) */
void f_10128c75(void) {
  FTRACE(0x10128c75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10128c75 push esi */
  push32((uint32_t)(ESI));
  /* 10128c76 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10128c7a cmp esi, dword ptr [0x10137d60] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10137d60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128c80 jae 0x10128cc2 */
  if (!C.cf) goto L_10128cc2;
  /* 10128c82 mov ecx, esi */
  ECX = (ESI);
  /* 10128c84 mov eax, esi */
  EAX = (ESI);
  /* 10128c86 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10128c89 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10128c8c mov ecx, dword ptr [ecx*4 + 0x10137c60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10137c60)));
  /* 10128c93 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10128c96 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10128c9b je 0x10128cc2 */
  if (C.zf) goto L_10128cc2;
  /* 10128c9d push edi */
  push32((uint32_t)(EDI));
  /* 10128c9e push esi */
  push32((uint32_t)(ESI));
  /* 10128c9f call 0x1012c044 */
  push32(0x10128ca4u); f_1012c044();
  /* 10128ca4 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10128ca8 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10128cac push esi */
  push32((uint32_t)(ESI));
  /* 10128cad call 0x10128cda */
  push32(0x10128cb2u); f_10128cda();
  /* 10128cb2 push esi */
  push32((uint32_t)(ESI));
  /* 10128cb3 mov edi, eax */
  EDI = (EAX);
  /* 10128cb5 call 0x1012c0a3 */
  push32(0x10128cbau); f_1012c0a3();
  /* 10128cba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10128cbd mov eax, edi */
  EAX = (EDI);
  /* 10128cbf pop edi */
  EDI = (pop32());
  /* 10128cc0 pop esi */
  ESI = (pop32());
  /* 10128cc1 ret  */
  ESPCHK(0x10128c75u, _esp0);
  ESP += 4; return;
L_10128cc2:;
  /* 10128cc2 call 0x1012bf71 */
  push32(0x10128cc7u); f_1012bf71();
  /* 10128cc7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10128ccd call 0x1012bf7a */
  push32(0x10128cd2u); f_1012bf7a();
  /* 10128cd2 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10128cd5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10128cd8 pop esi */
  ESI = (pop32());
  /* 10128cd9 ret  */
  ESPCHK(0x10128c75u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cda @ 0x10128cda (395 bytes, 135 insns) */
void f_10128cda(void) {
  FTRACE(0x10128cdau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10128cda push ebp */
  push32((uint32_t)(EBP));
  /* 10128cdb mov ebp, esp */
  EBP = (ESP);
  /* 10128cdd sub esp, 0x414 */
  { uint32_t _a=(ESP),_b=(0x414u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10128ce3 push ebx */
  push32((uint32_t)(EBX));
  /* 10128ce4 push esi */
  push32((uint32_t)(ESI));
  /* 10128ce5 push edi */
  push32((uint32_t)(EDI));
  /* 10128ce6 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10128ce8 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128ceb mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 10128cee mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 10128cf1 jne 0x10128cfa */
  if (!C.zf) goto L_10128cfa;
L_10128cf3:;
  /* 10128cf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10128cf5 jmp 0x10128e60 */
  goto L_10128e60;
L_10128cfa:;
  /* 10128cfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10128cfd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10128d00 lea ebx, [eax*4 + 0x10137c60] */
  EBX = ((uint32_t)(EAX*4 + 0x10137c60));
  /* 10128d07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10128d0a and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10128d0d lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 10128d10 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10128d12 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 10128d15 test byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 10128d1a je 0x10128d2a */
  if (C.zf) goto L_10128d2a;
  /* 10128d1c push 2 */
  push32((uint32_t)(0x2u));
  /* 10128d1e push edi */
  push32((uint32_t)(EDI));
  /* 10128d1f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10128d22 call 0x10128c02 */
  push32(0x10128d27u); f_10128c02();
  /* 10128d27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10128d2a:;
  /* 10128d2a mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10128d2c add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10128d2e test byte ptr [eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 10128d32 je 0x10128df9 */
  if (C.zf) goto L_10128df9;
  /* 10128d38 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10128d3b cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128d3e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10128d41 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 10128d44 jbe 0x10128e34 */
  if ((C.cf||C.zf)) goto L_10128e34;
L_10128d4a:;
  /* 10128d4a lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
L_10128d50:;
  /* 10128d50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10128d53 sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10128d56 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128d59 jae 0x10128d84 */
  if (!C.cf) goto L_10128d84;
  /* 10128d5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10128d5e inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10128d61 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 10128d63 cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10128d66 jne 0x10128d6f */
  if (!C.zf) goto L_10128d6f;
  /* 10128d68 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 10128d6b mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 10128d6e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10128d6f:;
  /* 10128d6f mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10128d71 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10128d72 mov ecx, eax */
  ECX = (EAX);
  /* 10128d74 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10128d7a sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10128d7c cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128d82 jl 0x10128d50 */
  if ((C.sf!=C.of)) goto L_10128d50;
L_10128d84:;
  /* 10128d84 mov edi, eax */
  EDI = (EAX);
  /* 10128d86 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10128d8c sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10128d8e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10128d91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10128d93 push eax */
  push32((uint32_t)(EAX));
  /* 10128d94 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10128d9a push edi */
  push32((uint32_t)(EDI));
  /* 10128d9b push eax */
  push32((uint32_t)(EAX));
  /* 10128d9c mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10128d9e push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 10128da1 call dword ptr [0x1012e084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e084))), 0x10128da7u);
  /* 10128da7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10128da9 je 0x10128dee */
  if (C.zf) goto L_10128dee;
  /* 10128dab mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10128dae add dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 10128db1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128db3 jl 0x10128dc0 */
  if ((C.sf!=C.of)) goto L_10128dc0;
  /* 10128db5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10128db8 sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10128dbb cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128dbe jb 0x10128d4a */
  if (C.cf) goto L_10128d4a;
L_10128dc0:;
  /* 10128dc0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10128dc2:;
  /* 10128dc2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10128dc5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128dc7 jne 0x10128e5d */
  if (!C.zf) goto L_10128e5d;
  /* 10128dcd cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128dd0 je 0x10128e34 */
  if (C.zf) goto L_10128e34;
  /* 10128dd2 push 5 */
  push32((uint32_t)(0x5u));
  /* 10128dd4 pop esi */
  ESI = (pop32());
  /* 10128dd5 cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128dd8 jne 0x10128e26 */
  if (!C.zf) goto L_10128e26;
  /* 10128dda call 0x1012bf71 */
  push32(0x10128ddfu); f_1012bf71();
  /* 10128ddf mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10128de5 call 0x1012bf7a */
  push32(0x10128deau); f_1012bf7a();
  /* 10128dea mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10128dec jmp 0x10128e2f */
  goto L_10128e2f;
L_10128dee:;
  /* 10128dee call dword ptr [0x1012e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e03c))), 0x10128df4u);
  /* 10128df4 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10128df7 jmp 0x10128dc0 */
  goto L_10128dc0;
L_10128df9:;
  /* 10128df9 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 10128dfc push edi */
  push32((uint32_t)(EDI));
  /* 10128dfd push ecx */
  push32((uint32_t)(ECX));
  /* 10128dfe push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10128e01 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10128e04 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 10128e06 call dword ptr [0x1012e084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e084))), 0x10128e0cu);
  /* 10128e0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10128e0e je 0x10128e1b */
  if (C.zf) goto L_10128e1b;
  /* 10128e10 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10128e13 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 10128e16 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10128e19 jmp 0x10128dc2 */
  goto L_10128dc2;
L_10128e1b:;
  /* 10128e1b call dword ptr [0x1012e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e03c))), 0x10128e21u);
  /* 10128e21 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10128e24 jmp 0x10128dc2 */
  goto L_10128dc2;
L_10128e26:;
  /* 10128e26 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10128e29 call 0x1012befe */
  push32(0x10128e2eu); f_1012befe();
  /* 10128e2e pop ecx */
  ECX = (pop32());
L_10128e2f:;
  /* 10128e2f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10128e32 jmp 0x10128e60 */
  goto L_10128e60;
L_10128e34:;
  /* 10128e34 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10128e36 test byte ptr [eax + esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10128e3b je 0x10128e49 */
  if (C.zf) goto L_10128e49;
  /* 10128e3d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10128e40 cmp byte ptr [eax], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10128e43 je 0x10128cf3 */
  if (C.zf) goto L_10128cf3;
L_10128e49:;
  /* 10128e49 call 0x1012bf71 */
  push32(0x10128e4eu); f_1012bf71();
  /* 10128e4e mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 10128e54 call 0x1012bf7a */
  push32(0x10128e59u); f_1012bf7a();
  /* 10128e59 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 10128e5b jmp 0x10128e2f */
  goto L_10128e2f;
L_10128e5d:;
  /* 10128e5d sub eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10128e60:;
  /* 10128e60 pop edi */
  EDI = (pop32());
  /* 10128e61 pop esi */
  ESI = (pop32());
  /* 10128e62 pop ebx */
  EBX = (pop32());
  /* 10128e63 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10128e64 ret  */
  ESPCHK(0x10128cdau, _esp0);
  ESP += 4; return;
}

/* FUN_10008e65 @ 0x10128e65 (68 bytes, 19 insns) */
void f_10128e65(void) {
  FTRACE(0x10128e65u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10128e65 inc dword ptr [0x101367c8] */
  { uint32_t _r=(r32((uint32_t)(0x101367c8)))+1; w32((uint32_t)(0x101367c8), (_r)); fl_inc(_r,32); }
  /* 10128e6b push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10128e70 call 0x1012a2af */
  push32(0x10128e75u); f_1012a2af();
  /* 10128e75 pop ecx */
  ECX = (pop32());
  /* 10128e76 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10128e7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10128e7c mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10128e7f je 0x10128e8e */
  if (C.zf) goto L_10128e8e;
  /* 10128e81 or dword ptr [ecx + 0xc], 8 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x8u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 10128e85 mov dword ptr [ecx + 0x18], 0x1000 */
  w32((uint32_t)(ECX + 0x18), (0x1000u));
  /* 10128e8c jmp 0x10128e9f */
  goto L_10128e9f;
L_10128e8e:;
  /* 10128e8e or dword ptr [ecx + 0xc], 4 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x4u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 10128e92 lea eax, [ecx + 0x14] */
  EAX = ((uint32_t)(ECX + 0x14));
  /* 10128e95 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10128e98 mov dword ptr [ecx + 0x18], 2 */
  w32((uint32_t)(ECX + 0x18), (0x2u));
L_10128e9f:;
  /* 10128e9f mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 10128ea2 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10128ea6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10128ea8 ret  */
  ESPCHK(0x10128e65u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ea9 @ 0x10128ea9 (41 bytes, 13 insns) */
void f_10128ea9(void) {
  FTRACE(0x10128ea9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10128ea9 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10128ead cmp eax, dword ptr [0x10137d60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10137d60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128eb3 jb 0x10128eb8 */
  if (C.cf) goto L_10128eb8;
  /* 10128eb5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10128eb7 ret  */
  ESPCHK(0x10128ea9u, _esp0);
  ESP += 4; return;
L_10128eb8:;
  /* 10128eb8 mov ecx, eax */
  ECX = (EAX);
  /* 10128eba and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10128ebd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10128ec0 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10128ec3 mov ecx, dword ptr [ecx*4 + 0x10137c60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10137c60)));
  /* 10128eca mov al, byte ptr [ecx + eax*4 + 4] */
  AL = (r8((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 10128ece and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10128ed1 ret  */
  ESPCHK(0x10128ea9u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f8e @ 0x10128f8e (47 bytes, 17 insns) */
void f_10128f8e(void) {
  FTRACE(0x10128f8eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10128f8e mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10128f92 mov ecx, 0x10130768 */
  ECX = (0x10130768u);
  /* 10128f97 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128f99 jb 0x10128fb2 */
  if (C.cf) goto L_10128fb2;
  /* 10128f9b cmp eax, 0x101309c8 */
  { uint32_t _a=(EAX),_b=(0x101309c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128fa0 ja 0x10128fb2 */
  if ((!C.cf&&!C.zf)) goto L_10128fb2;
  /* 10128fa2 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10128fa4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10128fa7 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10128faa push eax */
  push32((uint32_t)(EAX));
  /* 10128fab call 0x1012a013 */
  push32(0x10128fb0u); f_1012a013();
  /* 10128fb0 pop ecx */
  ECX = (pop32());
  /* 10128fb1 ret  */
  ESPCHK(0x10128f8eu, _esp0);
  ESP += 4; return;
L_10128fb2:;
  /* 10128fb2 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10128fb5 push eax */
  push32((uint32_t)(EAX));
  /* 10128fb6 call dword ptr [0x1012e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e00c))), 0x10128fbcu);
  /* 10128fbc ret  */
  ESPCHK(0x10128f8eu, _esp0);
  ESP += 4; return;
}

/* FUN_10008fbd @ 0x10128fbd (35 bytes, 13 insns) */
void f_10128fbd(void) {
  FTRACE(0x10128fbdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10128fbd mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10128fc1 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128fc4 jge 0x10128fd1 */
  if ((C.sf==C.of)) goto L_10128fd1;
  /* 10128fc6 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10128fc9 push eax */
  push32((uint32_t)(EAX));
  /* 10128fca call 0x1012a013 */
  push32(0x10128fcfu); f_1012a013();
  /* 10128fcf pop ecx */
  ECX = (pop32());
  /* 10128fd0 ret  */
  ESPCHK(0x10128fbdu, _esp0);
  ESP += 4; return;
L_10128fd1:;
  /* 10128fd1 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10128fd5 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10128fd8 push eax */
  push32((uint32_t)(EAX));
  /* 10128fd9 call dword ptr [0x1012e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e00c))), 0x10128fdfu);
  /* 10128fdf ret  */
  ESPCHK(0x10128fbdu, _esp0);
  ESP += 4; return;
}

/* FUN_10008fe0 @ 0x10128fe0 (47 bytes, 17 insns) */
void f_10128fe0(void) {
  FTRACE(0x10128fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10128fe0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10128fe4 mov ecx, 0x10130768 */
  ECX = (0x10130768u);
  /* 10128fe9 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128feb jb 0x10129004 */
  if (C.cf) goto L_10129004;
  /* 10128fed cmp eax, 0x101309c8 */
  { uint32_t _a=(EAX),_b=(0x101309c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10128ff2 ja 0x10129004 */
  if ((!C.cf&&!C.zf)) goto L_10129004;
  /* 10128ff4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10128ff6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10128ff9 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10128ffc push eax */
  push32((uint32_t)(EAX));
  /* 10128ffd call 0x1012a074 */
  push32(0x10129002u); f_1012a074();
  /* 10129002 pop ecx */
  ECX = (pop32());
  /* 10129003 ret  */
  ESPCHK(0x10128fe0u, _esp0);
  ESP += 4; return;
L_10129004:;
  /* 10129004 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10129007 push eax */
  push32((uint32_t)(EAX));
  /* 10129008 call dword ptr [0x1012e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e008))), 0x1012900eu);
  /* 1012900e ret  */
  ESPCHK(0x10128fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000900f @ 0x1012900f (35 bytes, 13 insns) */
void f_1012900f(void) {
  FTRACE(0x1012900fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012900f mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10129013 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10129016 jge 0x10129023 */
  if ((C.sf==C.of)) goto L_10129023;
  /* 10129018 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012901b push eax */
  push32((uint32_t)(EAX));
  /* 1012901c call 0x1012a074 */
  push32(0x10129021u); f_1012a074();
  /* 10129021 pop ecx */
  ECX = (pop32());
  /* 10129022 ret  */
  ESPCHK(0x1012900fu, _esp0);
  ESP += 4; return;
L_10129023:;
  /* 10129023 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10129027 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012902a push eax */
  push32((uint32_t)(EAX));
  /* 1012902b call dword ptr [0x1012e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e008))), 0x10129031u);
  /* 10129031 ret  */
  ESPCHK(0x1012900fu, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10129040 (123 bytes, 44 insns) */
void f_10129040(void) {
  FTRACE(0x10129040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10129040 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10129044 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1012904a je 0x10129060 */
  if (C.zf) goto L_10129060;
L_1012904c:;
  /* 1012904c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1012904e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1012904f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10129051 je 0x10129093 */
  if (C.zf) goto L_10129093;
  /* 10129053 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10129059 jne 0x1012904c */
  if (!C.zf) goto L_1012904c;
  /* 1012905b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10129060:;
  /* 10129060 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10129062 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10129067 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10129069 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1012906c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1012906e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10129071 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10129076 je 0x10129060 */
  if (C.zf) goto L_10129060;
  /* 10129078 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1012907b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1012907d je 0x101290b1 */
  if (C.zf) goto L_101290b1;
  /* 1012907f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10129081 je 0x101290a7 */
  if (C.zf) goto L_101290a7;
  /* 10129083 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10129088 je 0x1012909d */
  if (C.zf) goto L_1012909d;
  /* 1012908a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1012908f je 0x10129093 */
  if (C.zf) goto L_10129093;
  /* 10129091 jmp 0x10129060 */
  goto L_10129060;
L_10129093:;
  /* 10129093 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10129096 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1012909a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012909c ret  */
  ESPCHK(0x10129040u, _esp0);
  ESP += 4; return;
L_1012909d:;
  /* 1012909d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 101290a0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101290a4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101290a6 ret  */
  ESPCHK(0x10129040u, _esp0);
  ESP += 4; return;
L_101290a7:;
  /* 101290a7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 101290aa mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101290ae sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101290b0 ret  */
  ESPCHK(0x10129040u, _esp0);
  ESP += 4; return;
L_101290b1:;
  /* 101290b1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 101290b4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101290b8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101290ba ret  */
  ESPCHK(0x10129040u, _esp0);
  ESP += 4; return;
}

/* FUN_100090bb @ 0x101290bb (89 bytes, 39 insns) */
void f_101290bb(void) {
  FTRACE(0x101290bbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101290bb push ebp */
  push32((uint32_t)(EBP));
  /* 101290bc mov ebp, esp */
  EBP = (ESP);
  /* 101290be push ebx */
  push32((uint32_t)(EBX));
  /* 101290bf push esi */
  push32((uint32_t)(ESI));
  /* 101290c0 mov esi, 0x101369d4 */
  ESI = (0x101369d4u);
  /* 101290c5 push edi */
  push32((uint32_t)(EDI));
  /* 101290c6 push esi */
  push32((uint32_t)(ESI));
  /* 101290c7 call dword ptr [0x1012e090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e090))), 0x101290cdu);
  /* 101290cd mov edi, dword ptr [0x1012e08c] */
  EDI = (r32((uint32_t)(0x1012e08c)));
  /* 101290d3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101290d5 cmp dword ptr [0x101369d0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101369d0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101290db je 0x101290eb */
  if (C.zf) goto L_101290eb;
  /* 101290dd push esi */
  push32((uint32_t)(ESI));
  /* 101290de call edi */
  call_ind((uint32_t)(EDI), 0x101290e0u);
  /* 101290e0 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101290e2 call 0x1012a013 */
  push32(0x101290e7u); f_1012a013();
  /* 101290e7 pop ecx */
  ECX = (pop32());
  /* 101290e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 101290ea pop ebx */
  EBX = (pop32());
L_101290eb:;
  /* 101290eb push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101290ee push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101290f1 call 0x10129114 */
  push32(0x101290f6u); f_10129114();
  /* 101290f6 pop ecx */
  ECX = (pop32());
  /* 101290f7 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 101290fa test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101290fc pop ecx */
  ECX = (pop32());
  /* 101290fd je 0x10129109 */
  if (C.zf) goto L_10129109;
  /* 101290ff push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10129101 call 0x1012a074 */
  push32(0x10129106u); f_1012a074();
  /* 10129106 pop ecx */
  ECX = (pop32());
  /* 10129107 jmp 0x1012910c */
  goto L_1012910c;
L_10129109:;
  /* 10129109 push esi */
  push32((uint32_t)(ESI));
  /* 1012910a call edi */
  call_ind((uint32_t)(EDI), 0x1012910cu);
L_1012910c:;
  /* 1012910c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1012910f pop edi */
  EDI = (pop32());
  /* 10129110 pop esi */
  ESI = (pop32());
  /* 10129111 pop ebx */
  EBX = (pop32());
  /* 10129112 pop ebp */
  EBP = (pop32());
  /* 10129113 ret  */
  ESPCHK(0x101290bbu, _esp0);
  ESP += 4; return;
}

/* FUN_10009114 @ 0x10129114 (105 bytes, 38 insns) */
void f_10129114(void) {
  FTRACE(0x10129114u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10129114 push ebp */
  push32((uint32_t)(EBP));
  /* 10129115 mov ebp, esp */
  EBP = (ESP);
  /* 10129117 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012911a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012911c jne 0x10129120 */
  if (!C.zf) goto L_10129120;
  /* 1012911e pop ebp */
  EBP = (pop32());
  /* 1012911f ret  */
  ESPCHK(0x10129114u, _esp0);
  ESP += 4; return;
L_10129120:;
  /* 10129120 cmp dword ptr [0x10136858], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10136858))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10129127 jne 0x1012913b */
  if (!C.zf) goto L_1012913b;
  /* 10129129 mov cx, word ptr [ebp + 0xc] */
  CX = (r16((uint32_t)(EBP + 0xc)));
  /* 1012912d cmp cx, 0xff */
  { uint32_t _a=(CX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10129132 ja 0x1012916d */
  if ((!C.cf&&!C.zf)) goto L_1012916d;
  /* 10129134 push 1 */
  push32((uint32_t)(0x1u));
  /* 10129136 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10129138 pop eax */
  EAX = (pop32());
  /* 10129139 pop ebp */
  EBP = (pop32());
  /* 1012913a ret  */
  ESPCHK(0x10129114u, _esp0);
  ESP += 4; return;
L_1012913b:;
  /* 1012913b lea ecx, [ebp + 8] */
  ECX = ((uint32_t)(EBP + 0x8));
  /* 1012913e and dword ptr [ebp + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))&(0x0u); w32((uint32_t)(EBP + 0x8), (_r)); fl_logic(_r,32); }
  /* 10129142 push ecx */
  push32((uint32_t)(ECX));
  /* 10129143 push 0 */
  push32((uint32_t)(0x0u));
  /* 10129145 push dword ptr [0x10130c00] */
  push32((uint32_t)(r32((uint32_t)(0x10130c00))));
  /* 1012914b push eax */
  push32((uint32_t)(EAX));
  /* 1012914c lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1012914f push 1 */
  push32((uint32_t)(0x1u));
  /* 10129151 push eax */
  push32((uint32_t)(EAX));
  /* 10129152 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10129157 push dword ptr [0x10136868] */
  push32((uint32_t)(r32((uint32_t)(0x10136868))));
  /* 1012915d call dword ptr [0x1012e060] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e060))), 0x10129163u);
  /* 10129163 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10129165 je 0x1012916d */
  if (C.zf) goto L_1012916d;
  /* 10129167 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012916b je 0x1012917b */
  if (C.zf) goto L_1012917b;
L_1012916d:;
  /* 1012916d call 0x1012bf71 */
  push32(0x10129172u); f_1012bf71();
  /* 10129172 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10129178 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1012917b:;
  /* 1012917b pop ebp */
  EBP = (pop32());
  /* 1012917c ret  */
  ESPCHK(0x10129114u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x10129180 (104 bytes, 43 insns) */
void f_10129180(void) {
  FTRACE(0x10129180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10129180 push ebx */
  push32((uint32_t)(EBX));
  /* 10129181 push esi */
  push32((uint32_t)(ESI));
  /* 10129182 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10129186 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10129188 jne 0x101291a2 */
  if (!C.zf) goto L_101291a2;
  /* 1012918a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1012918e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10129192 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10129194 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10129196 mov ebx, eax */
  EBX = (EAX);
  /* 10129198 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1012919c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1012919e mov edx, ebx */
  EDX = (EBX);
  /* 101291a0 jmp 0x101291e3 */
  goto L_101291e3;
L_101291a2:;
  /* 101291a2 mov ecx, eax */
  ECX = (EAX);
  /* 101291a4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 101291a8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 101291ac mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_101291b0:;
  /* 101291b0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 101291b2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 101291b4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 101291b6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 101291b8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101291ba jne 0x101291b0 */
  if (!C.zf) goto L_101291b0;
  /* 101291bc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101291be mov esi, eax */
  ESI = (EAX);
  /* 101291c0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 101291c4 mov ecx, eax */
  ECX = (EAX);
  /* 101291c6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 101291ca mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 101291cc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101291ce jb 0x101291de */
  if (C.cf) goto L_101291de;
  /* 101291d0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101291d4 ja 0x101291de */
  if ((!C.cf&&!C.zf)) goto L_101291de;
  /* 101291d6 jb 0x101291df */
  if (C.cf) goto L_101291df;
  /* 101291d8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101291dc jbe 0x101291df */
  if ((C.cf||C.zf)) goto L_101291df;
L_101291de:;
  /* 101291de dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_101291df:;
  /* 101291df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101291e1 mov eax, esi */
  EAX = (ESI);
L_101291e3:;
  /* 101291e3 pop esi */
  ESI = (pop32());
  /* 101291e4 pop ebx */
  EBX = (pop32());
  /* 101291e5 ret 0x10 */
  ESPCHK(0x10129180u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x101291f0 (117 bytes, 44 insns) */
void f_101291f0(void) {
  FTRACE(0x101291f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101291f0 push ebx */
  push32((uint32_t)(EBX));
  /* 101291f1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 101291f5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101291f7 jne 0x10129211 */
  if (!C.zf) goto L_10129211;
  /* 101291f9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 101291fd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10129201 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10129203 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10129205 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10129209 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1012920b mov eax, edx */
  EAX = (EDX);
  /* 1012920d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1012920f jmp 0x10129261 */
  goto L_10129261;
L_10129211:;
  /* 10129211 mov ecx, eax */
  ECX = (EAX);
  /* 10129213 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 10129217 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1012921b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1012921f:;
  /* 1012921f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10129221 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10129223 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10129225 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10129227 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10129229 jne 0x1012921f */
  if (!C.zf) goto L_1012921f;
  /* 1012922b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1012922d mov ecx, eax */
  ECX = (EAX);
  /* 1012922f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10129233 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 10129234 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10129238 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012923a jb 0x1012924a */
  if (C.cf) goto L_1012924a;
  /* 1012923c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10129240 ja 0x1012924a */
  if ((!C.cf&&!C.zf)) goto L_1012924a;
  /* 10129242 jb 0x10129252 */
  if (C.cf) goto L_10129252;
  /* 10129244 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10129248 jbe 0x10129252 */
  if ((C.cf||C.zf)) goto L_10129252;
L_1012924a:;
  /* 1012924a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012924e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10129252:;
  /* 10129252 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10129256 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012925a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1012925c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1012925e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10129261:;
  /* 10129261 pop ebx */
  EBX = (pop32());
  /* 10129262 ret 0x10 */
  ESPCHK(0x101291f0u, _esp0);
  ESP += 20; return;
}

