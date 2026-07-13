#include "recomp.h"

/* ProcessAI @ 0x10211000 (16 bytes, 3 insns) */
void f_10211000(void) {
  FTRACE(0x10211000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10211000 call dword ptr [0x102264e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e0))), 0x10211006u);
  /* 10211006 mov dword ptr [0x10226294], eax */
  w32((uint32_t)(0x10226294), (EAX));
  /* 1021100b jmp 0x10216d40 */
  f_10216d40(); return;
}

/* InitAI @ 0x10211010 (5593 bytes, 1469 insns) */
void f_10211010(void) {
  FTRACE(0x10211010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10211010 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211015 sub esp, 0x60 */
  { uint32_t _a=(ESP),_b=(0x60u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10211018 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021101a je 0x10211078 */
  if (C.zf) goto L_10211078;
  /* 1021101c push 0x1021fed8 */
  push32((uint32_t)(0x1021fed8u));
  /* 10211021 push 0x10226068 */
  push32((uint32_t)(0x10226068u));
  /* 10211026 call eax */
  call_ind((uint32_t)(EAX), 0x10211028u);
  /* 10211028 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 1021102d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211030 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211032 je 0x10211078 */
  if (C.zf) goto L_10211078;
  /* 10211034 push 0x1021fed0 */
  push32((uint32_t)(0x1021fed0u));
  /* 10211039 push 0x10226008 */
  push32((uint32_t)(0x10226008u));
  /* 1021103e call eax */
  call_ind((uint32_t)(EAX), 0x10211040u);
  /* 10211040 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211045 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211048 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021104a je 0x10211078 */
  if (C.zf) goto L_10211078;
  /* 1021104c push 0x1021fec8 */
  push32((uint32_t)(0x1021fec8u));
  /* 10211051 push 0x10226060 */
  push32((uint32_t)(0x10226060u));
  /* 10211056 call eax */
  call_ind((uint32_t)(EAX), 0x10211058u);
  /* 10211058 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 1021105d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211060 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211062 je 0x10211078 */
  if (C.zf) goto L_10211078;
  /* 10211064 push 0x1021fec0 */
  push32((uint32_t)(0x1021fec0u));
  /* 10211069 push 0x10226070 */
  push32((uint32_t)(0x10226070u));
  /* 1021106e call eax */
  call_ind((uint32_t)(EAX), 0x10211070u);
  /* 10211070 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211075 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10211078:;
  /* 10211078 mov ecx, dword ptr [0x102263d8] */
  ECX = (r32((uint32_t)(0x102263d8)));
  /* 1021107e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10211080 je 0x10211096 */
  if (C.zf) goto L_10211096;
  /* 10211082 push 0x1021feb4 */
  push32((uint32_t)(0x1021feb4u));
  /* 10211087 push 0x10223670 */
  push32((uint32_t)(0x10223670u));
  /* 1021108c call ecx */
  call_ind((uint32_t)(ECX), 0x1021108eu);
  /* 1021108e mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211093 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10211096:;
  /* 10211096 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211098 je 0x10211322 */
  if (C.zf) goto L_10211322;
  /* 1021109e push 0x1021fea0 */
  push32((uint32_t)(0x1021fea0u));
  /* 102110a3 push 0x102238e0 */
  push32((uint32_t)(0x102238e0u));
  /* 102110a8 call eax */
  call_ind((uint32_t)(EAX), 0x102110aau);
  /* 102110aa mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 102110af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102110b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102110b4 je 0x10211322 */
  if (C.zf) goto L_10211322;
  /* 102110ba push 0x1021fe8c */
  push32((uint32_t)(0x1021fe8cu));
  /* 102110bf push 0x102238d8 */
  push32((uint32_t)(0x102238d8u));
  /* 102110c4 call eax */
  call_ind((uint32_t)(EAX), 0x102110c6u);
  /* 102110c6 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 102110cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102110ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102110d0 je 0x10211322 */
  if (C.zf) goto L_10211322;
  /* 102110d6 push 0x1021fe78 */
  push32((uint32_t)(0x1021fe78u));
  /* 102110db push 0x102238d0 */
  push32((uint32_t)(0x102238d0u));
  /* 102110e0 call eax */
  call_ind((uint32_t)(EAX), 0x102110e2u);
  /* 102110e2 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 102110e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102110ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102110ec je 0x10211322 */
  if (C.zf) goto L_10211322;
  /* 102110f2 push 0x1021fe64 */
  push32((uint32_t)(0x1021fe64u));
  /* 102110f7 push 0x10223918 */
  push32((uint32_t)(0x10223918u));
  /* 102110fc call eax */
  call_ind((uint32_t)(EAX), 0x102110feu);
  /* 102110fe mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211103 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211106 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211108 je 0x10211322 */
  if (C.zf) goto L_10211322;
  /* 1021110e push 0x1021fe50 */
  push32((uint32_t)(0x1021fe50u));
  /* 10211113 push 0x10223908 */
  push32((uint32_t)(0x10223908u));
  /* 10211118 call eax */
  call_ind((uint32_t)(EAX), 0x1021111au);
  /* 1021111a mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 1021111f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211122 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211124 je 0x10211322 */
  if (C.zf) goto L_10211322;
  /* 1021112a push 0x1021fe3c */
  push32((uint32_t)(0x1021fe3cu));
  /* 1021112f push 0x10223900 */
  push32((uint32_t)(0x10223900u));
  /* 10211134 call eax */
  call_ind((uint32_t)(EAX), 0x10211136u);
  /* 10211136 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 1021113b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021113e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211140 je 0x10211322 */
  if (C.zf) goto L_10211322;
  /* 10211146 push 0x1021fe28 */
  push32((uint32_t)(0x1021fe28u));
  /* 1021114b push 0x102236b8 */
  push32((uint32_t)(0x102236b8u));
  /* 10211150 call eax */
  call_ind((uint32_t)(EAX), 0x10211152u);
  /* 10211152 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211157 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021115a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021115c je 0x10211322 */
  if (C.zf) goto L_10211322;
  /* 10211162 push 0x1021fe14 */
  push32((uint32_t)(0x1021fe14u));
  /* 10211167 push 0x102236a8 */
  push32((uint32_t)(0x102236a8u));
  /* 1021116c call eax */
  call_ind((uint32_t)(EAX), 0x1021116eu);
  /* 1021116e mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211173 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211176 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211178 je 0x10211322 */
  if (C.zf) goto L_10211322;
  /* 1021117e push 0x1021fe00 */
  push32((uint32_t)(0x1021fe00u));
  /* 10211183 push 0x102238a0 */
  push32((uint32_t)(0x102238a0u));
  /* 10211188 call eax */
  call_ind((uint32_t)(EAX), 0x1021118au);
  /* 1021118a mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 1021118f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211192 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211194 je 0x10211322 */
  if (C.zf) goto L_10211322;
  /* 1021119a push 0x1021fdec */
  push32((uint32_t)(0x1021fdecu));
  /* 1021119f push 0x10223898 */
  push32((uint32_t)(0x10223898u));
  /* 102111a4 call eax */
  call_ind((uint32_t)(EAX), 0x102111a6u);
  /* 102111a6 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 102111ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102111ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102111b0 je 0x10211322 */
  if (C.zf) goto L_10211322;
  /* 102111b6 push 0x1021fdd8 */
  push32((uint32_t)(0x1021fdd8u));
  /* 102111bb push 0x10223890 */
  push32((uint32_t)(0x10223890u));
  /* 102111c0 call eax */
  call_ind((uint32_t)(EAX), 0x102111c2u);
  /* 102111c2 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 102111c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102111ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102111cc je 0x10211322 */
  if (C.zf) goto L_10211322;
  /* 102111d2 push 0x1021fdc4 */
  push32((uint32_t)(0x1021fdc4u));
  /* 102111d7 push 0x10223888 */
  push32((uint32_t)(0x10223888u));
  /* 102111dc call eax */
  call_ind((uint32_t)(EAX), 0x102111deu);
  /* 102111de mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 102111e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102111e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102111e8 je 0x10211322 */
  if (C.zf) goto L_10211322;
  /* 102111ee push 0x1021fea0 */
  push32((uint32_t)(0x1021fea0u));
  /* 102111f3 push 0x102238e0 */
  push32((uint32_t)(0x102238e0u));
  /* 102111f8 call eax */
  call_ind((uint32_t)(EAX), 0x102111fau);
  /* 102111fa mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 102111ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211202 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211204 je 0x10211322 */
  if (C.zf) goto L_10211322;
  /* 1021120a push 0x1021fe8c */
  push32((uint32_t)(0x1021fe8cu));
  /* 1021120f push 0x102238d8 */
  push32((uint32_t)(0x102238d8u));
  /* 10211214 call eax */
  call_ind((uint32_t)(EAX), 0x10211216u);
  /* 10211216 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 1021121b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021121e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211220 je 0x10211322 */
  if (C.zf) goto L_10211322;
  /* 10211226 push 0x1021fe78 */
  push32((uint32_t)(0x1021fe78u));
  /* 1021122b push 0x102238d0 */
  push32((uint32_t)(0x102238d0u));
  /* 10211230 call eax */
  call_ind((uint32_t)(EAX), 0x10211232u);
  /* 10211232 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211237 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021123a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021123c je 0x10211322 */
  if (C.zf) goto L_10211322;
  /* 10211242 push 0x1021fe64 */
  push32((uint32_t)(0x1021fe64u));
  /* 10211247 push 0x10223918 */
  push32((uint32_t)(0x10223918u));
  /* 1021124c call eax */
  call_ind((uint32_t)(EAX), 0x1021124eu);
  /* 1021124e mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211253 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211256 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211258 je 0x10211322 */
  if (C.zf) goto L_10211322;
  /* 1021125e push 0x1021fe50 */
  push32((uint32_t)(0x1021fe50u));
  /* 10211263 push 0x10223908 */
  push32((uint32_t)(0x10223908u));
  /* 10211268 call eax */
  call_ind((uint32_t)(EAX), 0x1021126au);
  /* 1021126a mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 1021126f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211272 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211274 je 0x10211322 */
  if (C.zf) goto L_10211322;
  /* 1021127a push 0x1021fe3c */
  push32((uint32_t)(0x1021fe3cu));
  /* 1021127f push 0x10223900 */
  push32((uint32_t)(0x10223900u));
  /* 10211284 call eax */
  call_ind((uint32_t)(EAX), 0x10211286u);
  /* 10211286 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 1021128b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021128e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211290 je 0x10211322 */
  if (C.zf) goto L_10211322;
  /* 10211296 push 0x1021fe28 */
  push32((uint32_t)(0x1021fe28u));
  /* 1021129b push 0x102236b8 */
  push32((uint32_t)(0x102236b8u));
  /* 102112a0 call eax */
  call_ind((uint32_t)(EAX), 0x102112a2u);
  /* 102112a2 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 102112a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102112aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102112ac je 0x10211322 */
  if (C.zf) goto L_10211322;
  /* 102112ae push 0x1021fe14 */
  push32((uint32_t)(0x1021fe14u));
  /* 102112b3 push 0x102236a8 */
  push32((uint32_t)(0x102236a8u));
  /* 102112b8 call eax */
  call_ind((uint32_t)(EAX), 0x102112bau);
  /* 102112ba mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 102112bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102112c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102112c4 je 0x10211322 */
  if (C.zf) goto L_10211322;
  /* 102112c6 push 0x1021fe00 */
  push32((uint32_t)(0x1021fe00u));
  /* 102112cb push 0x102238a0 */
  push32((uint32_t)(0x102238a0u));
  /* 102112d0 call eax */
  call_ind((uint32_t)(EAX), 0x102112d2u);
  /* 102112d2 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 102112d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102112da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102112dc je 0x10211322 */
  if (C.zf) goto L_10211322;
  /* 102112de push 0x1021fdec */
  push32((uint32_t)(0x1021fdecu));
  /* 102112e3 push 0x10223898 */
  push32((uint32_t)(0x10223898u));
  /* 102112e8 call eax */
  call_ind((uint32_t)(EAX), 0x102112eau);
  /* 102112ea mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 102112ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102112f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102112f4 je 0x10211322 */
  if (C.zf) goto L_10211322;
  /* 102112f6 push 0x1021fdd8 */
  push32((uint32_t)(0x1021fdd8u));
  /* 102112fb push 0x10223890 */
  push32((uint32_t)(0x10223890u));
  /* 10211300 call eax */
  call_ind((uint32_t)(EAX), 0x10211302u);
  /* 10211302 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211307 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021130a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021130c je 0x10211322 */
  if (C.zf) goto L_10211322;
  /* 1021130e push 0x1021fdc4 */
  push32((uint32_t)(0x1021fdc4u));
  /* 10211313 push 0x10223888 */
  push32((uint32_t)(0x10223888u));
  /* 10211318 call eax */
  call_ind((uint32_t)(EAX), 0x1021131au);
  /* 1021131a mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 1021131f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10211322:;
  /* 10211322 mov ecx, dword ptr [0x102263d8] */
  ECX = (r32((uint32_t)(0x102263d8)));
  /* 10211328 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1021132a je 0x10211340 */
  if (C.zf) goto L_10211340;
  /* 1021132c push 0x1021fdb4 */
  push32((uint32_t)(0x1021fdb4u));
  /* 10211331 push 0x10223660 */
  push32((uint32_t)(0x10223660u));
  /* 10211336 call ecx */
  call_ind((uint32_t)(ECX), 0x10211338u);
  /* 10211338 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 1021133d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10211340:;
  /* 10211340 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211342 je 0x102115c7 */
  if (C.zf) goto L_102115c7;
  /* 10211348 push 0x1021fda0 */
  push32((uint32_t)(0x1021fda0u));
  /* 1021134d push 0x10223638 */
  push32((uint32_t)(0x10223638u));
  /* 10211352 call eax */
  call_ind((uint32_t)(EAX), 0x10211354u);
  /* 10211354 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211359 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021135c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021135e je 0x102115c7 */
  if (C.zf) goto L_102115c7;
  /* 10211364 push 0x1021fd88 */
  push32((uint32_t)(0x1021fd88u));
  /* 10211369 push 0x10223630 */
  push32((uint32_t)(0x10223630u));
  /* 1021136e call eax */
  call_ind((uint32_t)(EAX), 0x10211370u);
  /* 10211370 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211375 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211378 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021137a je 0x102115c7 */
  if (C.zf) goto L_102115c7;
  /* 10211380 push 0x1021fd70 */
  push32((uint32_t)(0x1021fd70u));
  /* 10211385 push 0x10223628 */
  push32((uint32_t)(0x10223628u));
  /* 1021138a call eax */
  call_ind((uint32_t)(EAX), 0x1021138cu);
  /* 1021138c mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211391 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211394 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211396 je 0x102115c7 */
  if (C.zf) goto L_102115c7;
  /* 1021139c push 0x1021fd58 */
  push32((uint32_t)(0x1021fd58u));
  /* 102113a1 push 0x102262f8 */
  push32((uint32_t)(0x102262f8u));
  /* 102113a6 call eax */
  call_ind((uint32_t)(EAX), 0x102113a8u);
  /* 102113a8 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 102113ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102113b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102113b2 je 0x102115c7 */
  if (C.zf) goto L_102115c7;
  /* 102113b8 push 0x1021fd40 */
  push32((uint32_t)(0x1021fd40u));
  /* 102113bd push 0x102262f0 */
  push32((uint32_t)(0x102262f0u));
  /* 102113c2 call eax */
  call_ind((uint32_t)(EAX), 0x102113c4u);
  /* 102113c4 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 102113c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102113cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102113ce je 0x102115c7 */
  if (C.zf) goto L_102115c7;
  /* 102113d4 push 0x1021fd28 */
  push32((uint32_t)(0x1021fd28u));
  /* 102113d9 push 0x102262e8 */
  push32((uint32_t)(0x102262e8u));
  /* 102113de call eax */
  call_ind((uint32_t)(EAX), 0x102113e0u);
  /* 102113e0 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 102113e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102113e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102113ea je 0x102115c7 */
  if (C.zf) goto L_102115c7;
  /* 102113f0 push 0x1021fd14 */
  push32((uint32_t)(0x1021fd14u));
  /* 102113f5 push 0x10226370 */
  push32((uint32_t)(0x10226370u));
  /* 102113fa call eax */
  call_ind((uint32_t)(EAX), 0x102113fcu);
  /* 102113fc mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211401 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211404 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211406 je 0x102115c7 */
  if (C.zf) goto L_102115c7;
  /* 1021140c push 0x1021fcfc */
  push32((uint32_t)(0x1021fcfcu));
  /* 10211411 push 0x10226368 */
  push32((uint32_t)(0x10226368u));
  /* 10211416 call eax */
  call_ind((uint32_t)(EAX), 0x10211418u);
  /* 10211418 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 1021141d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211420 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211422 je 0x102115c7 */
  if (C.zf) goto L_102115c7;
  /* 10211428 push 0x1021fce4 */
  push32((uint32_t)(0x1021fce4u));
  /* 1021142d push 0x102263b8 */
  push32((uint32_t)(0x102263b8u));
  /* 10211432 call eax */
  call_ind((uint32_t)(EAX), 0x10211434u);
  /* 10211434 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211439 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021143c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021143e je 0x102115c7 */
  if (C.zf) goto L_102115c7;
  /* 10211444 push 0x1021fccc */
  push32((uint32_t)(0x1021fcccu));
  /* 10211449 push 0x102263b0 */
  push32((uint32_t)(0x102263b0u));
  /* 1021144e call eax */
  call_ind((uint32_t)(EAX), 0x10211450u);
  /* 10211450 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211455 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211458 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021145a je 0x102115c7 */
  if (C.zf) goto L_102115c7;
  /* 10211460 push 0x1021fcb4 */
  push32((uint32_t)(0x1021fcb4u));
  /* 10211465 push 0x102263a8 */
  push32((uint32_t)(0x102263a8u));
  /* 1021146a call eax */
  call_ind((uint32_t)(EAX), 0x1021146cu);
  /* 1021146c mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211471 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211474 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211476 je 0x102115c7 */
  if (C.zf) goto L_102115c7;
  /* 1021147c push 0x1021fc9c */
  push32((uint32_t)(0x1021fc9cu));
  /* 10211481 push 0x102263a0 */
  push32((uint32_t)(0x102263a0u));
  /* 10211486 call eax */
  call_ind((uint32_t)(EAX), 0x10211488u);
  /* 10211488 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 1021148d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211490 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211492 je 0x102115c7 */
  if (C.zf) goto L_102115c7;
  /* 10211498 push 0x1021fda0 */
  push32((uint32_t)(0x1021fda0u));
  /* 1021149d push 0x10223638 */
  push32((uint32_t)(0x10223638u));
  /* 102114a2 call eax */
  call_ind((uint32_t)(EAX), 0x102114a4u);
  /* 102114a4 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 102114a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102114ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102114ae je 0x102115c7 */
  if (C.zf) goto L_102115c7;
  /* 102114b4 push 0x1021fd88 */
  push32((uint32_t)(0x1021fd88u));
  /* 102114b9 push 0x10223630 */
  push32((uint32_t)(0x10223630u));
  /* 102114be call eax */
  call_ind((uint32_t)(EAX), 0x102114c0u);
  /* 102114c0 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 102114c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102114c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102114ca je 0x102115c7 */
  if (C.zf) goto L_102115c7;
  /* 102114d0 push 0x1021fd70 */
  push32((uint32_t)(0x1021fd70u));
  /* 102114d5 push 0x10223628 */
  push32((uint32_t)(0x10223628u));
  /* 102114da call eax */
  call_ind((uint32_t)(EAX), 0x102114dcu);
  /* 102114dc mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 102114e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102114e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102114e6 je 0x102115c7 */
  if (C.zf) goto L_102115c7;
  /* 102114ec push 0x1021fd58 */
  push32((uint32_t)(0x1021fd58u));
  /* 102114f1 push 0x102262f8 */
  push32((uint32_t)(0x102262f8u));
  /* 102114f6 call eax */
  call_ind((uint32_t)(EAX), 0x102114f8u);
  /* 102114f8 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 102114fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211500 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211502 je 0x102115c7 */
  if (C.zf) goto L_102115c7;
  /* 10211508 push 0x1021fd40 */
  push32((uint32_t)(0x1021fd40u));
  /* 1021150d push 0x102262f0 */
  push32((uint32_t)(0x102262f0u));
  /* 10211512 call eax */
  call_ind((uint32_t)(EAX), 0x10211514u);
  /* 10211514 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211519 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021151c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021151e je 0x102115c7 */
  if (C.zf) goto L_102115c7;
  /* 10211524 push 0x1021fd28 */
  push32((uint32_t)(0x1021fd28u));
  /* 10211529 push 0x102262e8 */
  push32((uint32_t)(0x102262e8u));
  /* 1021152e call eax */
  call_ind((uint32_t)(EAX), 0x10211530u);
  /* 10211530 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211535 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211538 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021153a je 0x102115c7 */
  if (C.zf) goto L_102115c7;
  /* 10211540 push 0x1021fd14 */
  push32((uint32_t)(0x1021fd14u));
  /* 10211545 push 0x10226370 */
  push32((uint32_t)(0x10226370u));
  /* 1021154a call eax */
  call_ind((uint32_t)(EAX), 0x1021154cu);
  /* 1021154c mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211551 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211554 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211556 je 0x102115c7 */
  if (C.zf) goto L_102115c7;
  /* 10211558 push 0x1021fcfc */
  push32((uint32_t)(0x1021fcfcu));
  /* 1021155d push 0x10226368 */
  push32((uint32_t)(0x10226368u));
  /* 10211562 call eax */
  call_ind((uint32_t)(EAX), 0x10211564u);
  /* 10211564 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211569 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021156c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021156e je 0x102115c7 */
  if (C.zf) goto L_102115c7;
  /* 10211570 push 0x1021fce4 */
  push32((uint32_t)(0x1021fce4u));
  /* 10211575 push 0x102263b8 */
  push32((uint32_t)(0x102263b8u));
  /* 1021157a call eax */
  call_ind((uint32_t)(EAX), 0x1021157cu);
  /* 1021157c mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211581 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211584 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211586 je 0x102115c7 */
  if (C.zf) goto L_102115c7;
  /* 10211588 push 0x1021fccc */
  push32((uint32_t)(0x1021fcccu));
  /* 1021158d push 0x102263b0 */
  push32((uint32_t)(0x102263b0u));
  /* 10211592 call eax */
  call_ind((uint32_t)(EAX), 0x10211594u);
  /* 10211594 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211599 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021159c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021159e je 0x102115c7 */
  if (C.zf) goto L_102115c7;
  /* 102115a0 push 0x1021fcb4 */
  push32((uint32_t)(0x1021fcb4u));
  /* 102115a5 push 0x102263a8 */
  push32((uint32_t)(0x102263a8u));
  /* 102115aa call eax */
  call_ind((uint32_t)(EAX), 0x102115acu);
  /* 102115ac mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 102115b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102115b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102115b6 je 0x102115c7 */
  if (C.zf) goto L_102115c7;
  /* 102115b8 push 0x1021fc9c */
  push32((uint32_t)(0x1021fc9cu));
  /* 102115bd push 0x102263a0 */
  push32((uint32_t)(0x102263a0u));
  /* 102115c2 call eax */
  call_ind((uint32_t)(EAX), 0x102115c4u);
  /* 102115c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102115c7:;
  /* 102115c7 mov eax, dword ptr [0x102263d8] */
  EAX = (r32((uint32_t)(0x102263d8)));
  /* 102115cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102115ce je 0x102115df */
  if (C.zf) goto L_102115df;
  /* 102115d0 push 0x1021fc88 */
  push32((uint32_t)(0x1021fc88u));
  /* 102115d5 push 0x10225fc0 */
  push32((uint32_t)(0x10225fc0u));
  /* 102115da call eax */
  call_ind((uint32_t)(EAX), 0x102115dcu);
  /* 102115dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102115df:;
  /* 102115df call dword ptr [0x102264e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e0))), 0x102115e5u);
  /* 102115e5 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 102115e8 mov dword ptr [0x10226294], eax */
  w32((uint32_t)(0x10226294), (EAX));
  /* 102115ed lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 102115f0 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 102115f3 lea eax, [eax + ecx*2] */
  EAX = ((uint32_t)(EAX + ECX*2));
  /* 102115f6 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 102115f9 mov dword ptr [eax + 0x10223ad0], 0 */
  w32((uint32_t)(EAX + 0x10223ad0), (0x0u));
  /* 10211603 mov dword ptr [eax + 0x10223c64], 0 */
  w32((uint32_t)(EAX + 0x10223c64), (0x0u));
  /* 1021160d call 0x102126c0 */
  push32(0x10211612u); f_102126c0();
  /* 10211612 mov edx, dword ptr [0x10226294] */
  EDX = (r32((uint32_t)(0x10226294)));
  /* 10211618 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1021161d mov dword ptr [edx*4 + 0x10225f78], eax */
  w32((uint32_t)(EDX*4 + 0x10225f78), (EAX));
  /* 10211624 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211629 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021162b je 0x1021163c */
  if (C.zf) goto L_1021163c;
  /* 1021162d push 0x1021fc6c */
  push32((uint32_t)(0x1021fc6cu));
  /* 10211632 push 0x102260b0 */
  push32((uint32_t)(0x102260b0u));
  /* 10211637 call eax */
  call_ind((uint32_t)(EAX), 0x10211639u);
  /* 10211639 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1021163c:;
  /* 1021163c mov eax, dword ptr [0x102263d8] */
  EAX = (r32((uint32_t)(0x102263d8)));
  /* 10211641 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211643 je 0x10211654 */
  if (C.zf) goto L_10211654;
  /* 10211645 push 0x1021fc58 */
  push32((uint32_t)(0x1021fc58u));
  /* 1021164a push 0x10223868 */
  push32((uint32_t)(0x10223868u));
  /* 1021164f call eax */
  call_ind((uint32_t)(EAX), 0x10211651u);
  /* 10211651 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10211654:;
  /* 10211654 push ebp */
  push32((uint32_t)(EBP));
  /* 10211655 push esi */
  push32((uint32_t)(ESI));
  /* 10211656 push edi */
  push32((uint32_t)(EDI));
  /* 10211657 call 0x102126c0 */
  push32(0x1021165cu); f_102126c0();
  /* 1021165c mov edx, eax */
  EDX = (EAX);
  /* 1021165e and eax, 6 */
  { uint32_t _r=(EAX)&(0x6u); EAX = (_r); fl_logic(_r,32); }
  /* 10211661 cmp al, 2 */
  { uint32_t _a=(AL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10211663 lea ebp, [esp + 0xc] */
  EBP = ((uint32_t)(ESP + 0xc));
  /* 10211667 mov edi, 0x1021feb4 */
  EDI = (0x1021feb4u);
  /* 1021166c je 0x10211673 */
  if (C.zf) goto L_10211673;
  /* 1021166e mov edi, 0x1021fc48 */
  EDI = (0x1021fc48u);
L_10211673:;
  /* 10211673 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10211676 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10211678 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1021167a not ecx */
  ECX = (~(ECX));
  /* 1021167c sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021167e and edx, 0x18 */
  { uint32_t _r=(EDX)&(0x18u); EDX = (_r); fl_logic(_r,32); }
  /* 10211681 mov eax, ecx */
  EAX = (ECX);
  /* 10211683 mov esi, edi */
  ESI = (EDI);
  /* 10211685 mov edi, ebp */
  EDI = (EBP);
  /* 10211687 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1021168a rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1021168c mov ecx, eax */
  ECX = (EAX);
  /* 1021168e and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10211691 cmp dl, 8 */
  { uint32_t _a=(DL),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10211694 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 10211696 lea edx, [esp + 0x3c] */
  EDX = ((uint32_t)(ESP + 0x3c));
  /* 1021169a mov edi, 0x1021fc38 */
  EDI = (0x1021fc38u);
  /* 1021169f je 0x102116a6 */
  if (C.zf) goto L_102116a6;
  /* 102116a1 mov edi, 0x1021fc28 */
  EDI = (0x1021fc28u);
L_102116a6:;
  /* 102116a6 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 102116a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102116ab repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 102116ad not ecx */
  ECX = (~(ECX));
  /* 102116af sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102116b1 mov eax, ecx */
  EAX = (ECX);
  /* 102116b3 mov esi, edi */
  ESI = (EDI);
  /* 102116b5 mov edi, edx */
  EDI = (EDX);
  /* 102116b7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102116ba rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102116bc mov ecx, eax */
  ECX = (EAX);
  /* 102116be mov eax, dword ptr [0x102263d8] */
  EAX = (r32((uint32_t)(0x102263d8)));
  /* 102116c3 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 102116c6 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 102116c8 pop edi */
  EDI = (pop32());
  /* 102116c9 pop esi */
  ESI = (pop32());
  /* 102116ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102116cc pop ebp */
  EBP = (pop32());
  /* 102116cd je 0x10211713 */
  if (C.zf) goto L_10211713;
  /* 102116cf push 0x1021fc10 */
  push32((uint32_t)(0x1021fc10u));
  /* 102116d4 push 0x10226258 */
  push32((uint32_t)(0x10226258u));
  /* 102116d9 call eax */
  call_ind((uint32_t)(EAX), 0x102116dbu);
  /* 102116db mov eax, dword ptr [0x102263d8] */
  EAX = (r32((uint32_t)(0x102263d8)));
  /* 102116e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102116e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102116e5 je 0x10211713 */
  if (C.zf) goto L_10211713;
  /* 102116e7 push 0x1021fbf8 */
  push32((uint32_t)(0x1021fbf8u));
  /* 102116ec push 0x10226308 */
  push32((uint32_t)(0x10226308u));
  /* 102116f1 call eax */
  call_ind((uint32_t)(EAX), 0x102116f3u);
  /* 102116f3 mov eax, dword ptr [0x102263d8] */
  EAX = (r32((uint32_t)(0x102263d8)));
  /* 102116f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102116fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102116fd je 0x10211713 */
  if (C.zf) goto L_10211713;
  /* 102116ff push 0x1021fbe4 */
  push32((uint32_t)(0x1021fbe4u));
  /* 10211704 push 0x102236e0 */
  push32((uint32_t)(0x102236e0u));
  /* 10211709 call eax */
  call_ind((uint32_t)(EAX), 0x1021170bu);
  /* 1021170b mov eax, dword ptr [0x102263d8] */
  EAX = (r32((uint32_t)(0x102263d8)));
  /* 10211710 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10211713:;
  /* 10211713 mov ecx, dword ptr [0x102263dc] */
  ECX = (r32((uint32_t)(0x102263dc)));
  /* 10211719 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1021171b je 0x10211749 */
  if (C.zf) goto L_10211749;
  /* 1021171d push 0x1021fbcc */
  push32((uint32_t)(0x1021fbccu));
  /* 10211722 push 0x10226240 */
  push32((uint32_t)(0x10226240u));
  /* 10211727 call ecx */
  call_ind((uint32_t)(ECX), 0x10211729u);
  /* 10211729 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 1021172e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211731 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211733 je 0x10211744 */
  if (C.zf) goto L_10211744;
  /* 10211735 push 0x1021fbb4 */
  push32((uint32_t)(0x1021fbb4u));
  /* 1021173a push 0x10225fa8 */
  push32((uint32_t)(0x10225fa8u));
  /* 1021173f call eax */
  call_ind((uint32_t)(EAX), 0x10211741u);
  /* 10211741 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10211744:;
  /* 10211744 mov eax, dword ptr [0x102263d8] */
  EAX = (r32((uint32_t)(0x102263d8)));
L_10211749:;
  /* 10211749 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021174b je 0x1021175c */
  if (C.zf) goto L_1021175c;
  /* 1021174d push 0x1021fba0 */
  push32((uint32_t)(0x1021fba0u));
  /* 10211752 push 0x10223620 */
  push32((uint32_t)(0x10223620u));
  /* 10211757 call eax */
  call_ind((uint32_t)(EAX), 0x10211759u);
  /* 10211759 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1021175c:;
  /* 1021175c push 0x1021fb8c */
  push32((uint32_t)(0x1021fb8cu));
  /* 10211761 call 0x10212690 */
  push32(0x10211766u); f_10212690();
  /* 10211766 mov eax, dword ptr [0x102263d8] */
  EAX = (r32((uint32_t)(0x102263d8)));
  /* 1021176b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021176e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211770 je 0x10211a9d */
  if (C.zf) goto L_10211a9d;
  /* 10211776 push 0x1021fb8c */
  push32((uint32_t)(0x1021fb8cu));
  /* 1021177b push 0x10223668 */
  push32((uint32_t)(0x10223668u));
  /* 10211780 call eax */
  call_ind((uint32_t)(EAX), 0x10211782u);
  /* 10211782 mov eax, dword ptr [0x102263d8] */
  EAX = (r32((uint32_t)(0x102263d8)));
  /* 10211787 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021178a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021178c je 0x10211a9d */
  if (C.zf) goto L_10211a9d;
  /* 10211792 push 0x1021fb74 */
  push32((uint32_t)(0x1021fb74u));
  /* 10211797 push 0x10226170 */
  push32((uint32_t)(0x10226170u));
  /* 1021179c call eax */
  call_ind((uint32_t)(EAX), 0x1021179eu);
  /* 1021179e mov eax, dword ptr [0x102263d8] */
  EAX = (r32((uint32_t)(0x102263d8)));
  /* 102117a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102117a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102117a8 je 0x10211a9d */
  if (C.zf) goto L_10211a9d;
  /* 102117ae push 0x1021fb60 */
  push32((uint32_t)(0x1021fb60u));
  /* 102117b3 push 0x10226140 */
  push32((uint32_t)(0x10226140u));
  /* 102117b8 call eax */
  call_ind((uint32_t)(EAX), 0x102117bau);
  /* 102117ba mov eax, dword ptr [0x102263d8] */
  EAX = (r32((uint32_t)(0x102263d8)));
  /* 102117bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102117c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102117c4 je 0x10211a9d */
  if (C.zf) goto L_10211a9d;
  /* 102117ca push 0x1021fb4c */
  push32((uint32_t)(0x1021fb4cu));
  /* 102117cf push 0x102260c0 */
  push32((uint32_t)(0x102260c0u));
  /* 102117d4 call eax */
  call_ind((uint32_t)(EAX), 0x102117d6u);
  /* 102117d6 mov eax, dword ptr [0x102263d8] */
  EAX = (r32((uint32_t)(0x102263d8)));
  /* 102117db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102117de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102117e0 je 0x10211a9d */
  if (C.zf) goto L_10211a9d;
  /* 102117e6 lea ecx, [esp] */
  ECX = ((uint32_t)(ESP));
  /* 102117ea push ecx */
  push32((uint32_t)(ECX));
  /* 102117eb push 0x10226390 */
  push32((uint32_t)(0x10226390u));
  /* 102117f0 call eax */
  call_ind((uint32_t)(EAX), 0x102117f2u);
  /* 102117f2 mov eax, dword ptr [0x102263d8] */
  EAX = (r32((uint32_t)(0x102263d8)));
  /* 102117f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102117fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102117fc je 0x10211a9d */
  if (C.zf) goto L_10211a9d;
  /* 10211802 push 0x1021fb40 */
  push32((uint32_t)(0x1021fb40u));
  /* 10211807 push 0x10226310 */
  push32((uint32_t)(0x10226310u));
  /* 1021180c call eax */
  call_ind((uint32_t)(EAX), 0x1021180eu);
  /* 1021180e mov eax, dword ptr [0x102263d8] */
  EAX = (r32((uint32_t)(0x102263d8)));
  /* 10211813 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211816 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211818 je 0x10211a9d */
  if (C.zf) goto L_10211a9d;
  /* 1021181e lea edx, [esp + 0x30] */
  EDX = ((uint32_t)(ESP + 0x30));
  /* 10211822 push edx */
  push32((uint32_t)(EDX));
  /* 10211823 push 0x10225f60 */
  push32((uint32_t)(0x10225f60u));
  /* 10211828 call eax */
  call_ind((uint32_t)(EAX), 0x1021182au);
  /* 1021182a mov eax, dword ptr [0x102263d8] */
  EAX = (r32((uint32_t)(0x102263d8)));
  /* 1021182f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211832 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211834 je 0x10211a9d */
  if (C.zf) goto L_10211a9d;
  /* 1021183a push 0x1021fb34 */
  push32((uint32_t)(0x1021fb34u));
  /* 1021183f push 0x10226350 */
  push32((uint32_t)(0x10226350u));
  /* 10211844 call eax */
  call_ind((uint32_t)(EAX), 0x10211846u);
  /* 10211846 mov eax, dword ptr [0x102263d8] */
  EAX = (r32((uint32_t)(0x102263d8)));
  /* 1021184b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021184e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211850 je 0x10211a9d */
  if (C.zf) goto L_10211a9d;
  /* 10211856 push 0x1021fb28 */
  push32((uint32_t)(0x1021fb28u));
  /* 1021185b push 0x10223648 */
  push32((uint32_t)(0x10223648u));
  /* 10211860 call eax */
  call_ind((uint32_t)(EAX), 0x10211862u);
  /* 10211862 mov eax, dword ptr [0x102263d8] */
  EAX = (r32((uint32_t)(0x102263d8)));
  /* 10211867 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021186a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021186c je 0x10211a9d */
  if (C.zf) goto L_10211a9d;
  /* 10211872 push 0x1021fb18 */
  push32((uint32_t)(0x1021fb18u));
  /* 10211877 push 0x102238a8 */
  push32((uint32_t)(0x102238a8u));
  /* 1021187c call eax */
  call_ind((uint32_t)(EAX), 0x1021187eu);
  /* 1021187e mov eax, dword ptr [0x102263d8] */
  EAX = (r32((uint32_t)(0x102263d8)));
  /* 10211883 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211886 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211888 je 0x10211a9d */
  if (C.zf) goto L_10211a9d;
  /* 1021188e push 0x1021fb0c */
  push32((uint32_t)(0x1021fb0cu));
  /* 10211893 push 0x102261d0 */
  push32((uint32_t)(0x102261d0u));
  /* 10211898 call eax */
  call_ind((uint32_t)(EAX), 0x1021189au);
  /* 1021189a mov eax, dword ptr [0x102263d8] */
  EAX = (r32((uint32_t)(0x102263d8)));
  /* 1021189f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102118a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102118a4 je 0x10211a9d */
  if (C.zf) goto L_10211a9d;
  /* 102118aa push 0x1021faf8 */
  push32((uint32_t)(0x1021faf8u));
  /* 102118af push 0x10225f98 */
  push32((uint32_t)(0x10225f98u));
  /* 102118b4 call eax */
  call_ind((uint32_t)(EAX), 0x102118b6u);
  /* 102118b6 mov eax, dword ptr [0x102263d8] */
  EAX = (r32((uint32_t)(0x102263d8)));
  /* 102118bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102118be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102118c0 je 0x10211a9d */
  if (C.zf) goto L_10211a9d;
  /* 102118c6 push 0x1021faec */
  push32((uint32_t)(0x1021faecu));
  /* 102118cb push 0x10225fb8 */
  push32((uint32_t)(0x10225fb8u));
  /* 102118d0 call eax */
  call_ind((uint32_t)(EAX), 0x102118d2u);
  /* 102118d2 mov eax, dword ptr [0x102263d8] */
  EAX = (r32((uint32_t)(0x102263d8)));
  /* 102118d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102118da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102118dc je 0x10211a9d */
  if (C.zf) goto L_10211a9d;
  /* 102118e2 push 0x1021fad8 */
  push32((uint32_t)(0x1021fad8u));
  /* 102118e7 push 0x10226230 */
  push32((uint32_t)(0x10226230u));
  /* 102118ec call eax */
  call_ind((uint32_t)(EAX), 0x102118eeu);
  /* 102118ee mov eax, dword ptr [0x102263d8] */
  EAX = (r32((uint32_t)(0x102263d8)));
  /* 102118f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102118f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102118f8 je 0x10211a9d */
  if (C.zf) goto L_10211a9d;
  /* 102118fe push 0x1021facc */
  push32((uint32_t)(0x1021faccu));
  /* 10211903 push 0x10226238 */
  push32((uint32_t)(0x10226238u));
  /* 10211908 call eax */
  call_ind((uint32_t)(EAX), 0x1021190au);
  /* 1021190a mov eax, dword ptr [0x102263d8] */
  EAX = (r32((uint32_t)(0x102263d8)));
  /* 1021190f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211912 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211914 je 0x10211a9d */
  if (C.zf) goto L_10211a9d;
  /* 1021191a push 0x1021fac0 */
  push32((uint32_t)(0x1021fac0u));
  /* 1021191f push 0x10225fb0 */
  push32((uint32_t)(0x10225fb0u));
  /* 10211924 call eax */
  call_ind((uint32_t)(EAX), 0x10211926u);
  /* 10211926 mov eax, dword ptr [0x102263d8] */
  EAX = (r32((uint32_t)(0x102263d8)));
  /* 1021192b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021192e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211930 je 0x10211a9d */
  if (C.zf) goto L_10211a9d;
  /* 10211936 push 0x1021fab0 */
  push32((uint32_t)(0x1021fab0u));
  /* 1021193b push 0x10225f00 */
  push32((uint32_t)(0x10225f00u));
  /* 10211940 call eax */
  call_ind((uint32_t)(EAX), 0x10211942u);
  /* 10211942 mov eax, dword ptr [0x102263d8] */
  EAX = (r32((uint32_t)(0x102263d8)));
  /* 10211947 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021194a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021194c je 0x10211a9d */
  if (C.zf) goto L_10211a9d;
  /* 10211952 push 0x1021fa98 */
  push32((uint32_t)(0x1021fa98u));
  /* 10211957 push 0x102260b8 */
  push32((uint32_t)(0x102260b8u));
  /* 1021195c call eax */
  call_ind((uint32_t)(EAX), 0x1021195eu);
  /* 1021195e mov eax, dword ptr [0x102263d8] */
  EAX = (r32((uint32_t)(0x102263d8)));
  /* 10211963 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211966 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211968 je 0x10211a9d */
  if (C.zf) goto L_10211a9d;
  /* 1021196e push 0x1021fa88 */
  push32((uint32_t)(0x1021fa88u));
  /* 10211973 push 0x10225fc8 */
  push32((uint32_t)(0x10225fc8u));
  /* 10211978 call eax */
  call_ind((uint32_t)(EAX), 0x1021197au);
  /* 1021197a mov eax, dword ptr [0x102263d8] */
  EAX = (r32((uint32_t)(0x102263d8)));
  /* 1021197f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211982 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211984 je 0x10211a9d */
  if (C.zf) goto L_10211a9d;
  /* 1021198a push 0x1021fa74 */
  push32((uint32_t)(0x1021fa74u));
  /* 1021198f push 0x102235f8 */
  push32((uint32_t)(0x102235f8u));
  /* 10211994 call eax */
  call_ind((uint32_t)(EAX), 0x10211996u);
  /* 10211996 mov eax, dword ptr [0x102263d8] */
  EAX = (r32((uint32_t)(0x102263d8)));
  /* 1021199b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021199e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102119a0 je 0x10211a9d */
  if (C.zf) goto L_10211a9d;
  /* 102119a6 push 0x1021fa68 */
  push32((uint32_t)(0x1021fa68u));
  /* 102119ab push 0x10223858 */
  push32((uint32_t)(0x10223858u));
  /* 102119b0 call eax */
  call_ind((uint32_t)(EAX), 0x102119b2u);
  /* 102119b2 mov eax, dword ptr [0x102263d8] */
  EAX = (r32((uint32_t)(0x102263d8)));
  /* 102119b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102119ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102119bc je 0x10211a9d */
  if (C.zf) goto L_10211a9d;
  /* 102119c2 push 0x1021fa5c */
  push32((uint32_t)(0x1021fa5cu));
  /* 102119c7 push 0x102238b8 */
  push32((uint32_t)(0x102238b8u));
  /* 102119cc call eax */
  call_ind((uint32_t)(EAX), 0x102119ceu);
  /* 102119ce mov eax, dword ptr [0x102263d8] */
  EAX = (r32((uint32_t)(0x102263d8)));
  /* 102119d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102119d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102119d8 je 0x10211a9d */
  if (C.zf) goto L_10211a9d;
  /* 102119de push 0x1021fa50 */
  push32((uint32_t)(0x1021fa50u));
  /* 102119e3 push 0x102261c8 */
  push32((uint32_t)(0x102261c8u));
  /* 102119e8 call eax */
  call_ind((uint32_t)(EAX), 0x102119eau);
  /* 102119ea mov eax, dword ptr [0x102263d8] */
  EAX = (r32((uint32_t)(0x102263d8)));
  /* 102119ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102119f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102119f4 je 0x10211a9d */
  if (C.zf) goto L_10211a9d;
  /* 102119fa push 0x1021fa44 */
  push32((uint32_t)(0x1021fa44u));
  /* 102119ff push 0x102260d8 */
  push32((uint32_t)(0x102260d8u));
  /* 10211a04 call eax */
  call_ind((uint32_t)(EAX), 0x10211a06u);
  /* 10211a06 mov eax, dword ptr [0x102263d8] */
  EAX = (r32((uint32_t)(0x102263d8)));
  /* 10211a0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211a0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211a10 je 0x10211a9d */
  if (C.zf) goto L_10211a9d;
  /* 10211a16 push 0x1021fa38 */
  push32((uint32_t)(0x1021fa38u));
  /* 10211a1b push 0x102262b8 */
  push32((uint32_t)(0x102262b8u));
  /* 10211a20 call eax */
  call_ind((uint32_t)(EAX), 0x10211a22u);
  /* 10211a22 mov eax, dword ptr [0x102263d8] */
  EAX = (r32((uint32_t)(0x102263d8)));
  /* 10211a27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211a2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211a2c je 0x10211a9d */
  if (C.zf) goto L_10211a9d;
  /* 10211a2e push 0x1021fa2c */
  push32((uint32_t)(0x1021fa2cu));
  /* 10211a33 push 0x102238c8 */
  push32((uint32_t)(0x102238c8u));
  /* 10211a38 call eax */
  call_ind((uint32_t)(EAX), 0x10211a3au);
  /* 10211a3a mov eax, dword ptr [0x102263d8] */
  EAX = (r32((uint32_t)(0x102263d8)));
  /* 10211a3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211a42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211a44 je 0x10211a9d */
  if (C.zf) goto L_10211a9d;
  /* 10211a46 push 0x1021fa20 */
  push32((uint32_t)(0x1021fa20u));
  /* 10211a4b push 0x10225f70 */
  push32((uint32_t)(0x10225f70u));
  /* 10211a50 call eax */
  call_ind((uint32_t)(EAX), 0x10211a52u);
  /* 10211a52 mov eax, dword ptr [0x102263d8] */
  EAX = (r32((uint32_t)(0x102263d8)));
  /* 10211a57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211a5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211a5c je 0x10211a9d */
  if (C.zf) goto L_10211a9d;
  /* 10211a5e push 0x1021fa14 */
  push32((uint32_t)(0x1021fa14u));
  /* 10211a63 push 0x10226378 */
  push32((uint32_t)(0x10226378u));
  /* 10211a68 call eax */
  call_ind((uint32_t)(EAX), 0x10211a6au);
  /* 10211a6a mov eax, dword ptr [0x102263d8] */
  EAX = (r32((uint32_t)(0x102263d8)));
  /* 10211a6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211a72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211a74 je 0x10211a9d */
  if (C.zf) goto L_10211a9d;
  /* 10211a76 push 0x1021fa08 */
  push32((uint32_t)(0x1021fa08u));
  /* 10211a7b push 0x10225f68 */
  push32((uint32_t)(0x10225f68u));
  /* 10211a80 call eax */
  call_ind((uint32_t)(EAX), 0x10211a82u);
  /* 10211a82 mov eax, dword ptr [0x102263d8] */
  EAX = (r32((uint32_t)(0x102263d8)));
  /* 10211a87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211a8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211a8c je 0x10211a9d */
  if (C.zf) goto L_10211a9d;
  /* 10211a8e push 0x1021f9f8 */
  push32((uint32_t)(0x1021f9f8u));
  /* 10211a93 push 0x10223880 */
  push32((uint32_t)(0x10223880u));
  /* 10211a98 call eax */
  call_ind((uint32_t)(EAX), 0x10211a9au);
  /* 10211a9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10211a9d:;
  /* 10211a9d mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211aa2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211aa4 je 0x10211c9d */
  if (C.zf) goto L_10211c9d;
  /* 10211aaa push 0x1021f9e4 */
  push32((uint32_t)(0x1021f9e4u));
  /* 10211aaf push 0x10226358 */
  push32((uint32_t)(0x10226358u));
  /* 10211ab4 call eax */
  call_ind((uint32_t)(EAX), 0x10211ab6u);
  /* 10211ab6 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211abb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211abe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211ac0 je 0x10211c9d */
  if (C.zf) goto L_10211c9d;
  /* 10211ac6 push 0x1021f9d0 */
  push32((uint32_t)(0x1021f9d0u));
  /* 10211acb push 0x102260e0 */
  push32((uint32_t)(0x102260e0u));
  /* 10211ad0 call eax */
  call_ind((uint32_t)(EAX), 0x10211ad2u);
  /* 10211ad2 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211ad7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211ada test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211adc je 0x10211c9d */
  if (C.zf) goto L_10211c9d;
  /* 10211ae2 push 0x1021f9c8 */
  push32((uint32_t)(0x1021f9c8u));
  /* 10211ae7 push 0x10223640 */
  push32((uint32_t)(0x10223640u));
  /* 10211aec call eax */
  call_ind((uint32_t)(EAX), 0x10211aeeu);
  /* 10211aee mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211af3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211af6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211af8 je 0x10211c9d */
  if (C.zf) goto L_10211c9d;
  /* 10211afe push 0x1021f9b0 */
  push32((uint32_t)(0x1021f9b0u));
  /* 10211b03 push 0x10226330 */
  push32((uint32_t)(0x10226330u));
  /* 10211b08 call eax */
  call_ind((uint32_t)(EAX), 0x10211b0au);
  /* 10211b0a mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211b0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211b12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211b14 je 0x10211c9d */
  if (C.zf) goto L_10211c9d;
  /* 10211b1a push 0x1021f998 */
  push32((uint32_t)(0x1021f998u));
  /* 10211b1f push 0x10226338 */
  push32((uint32_t)(0x10226338u));
  /* 10211b24 call eax */
  call_ind((uint32_t)(EAX), 0x10211b26u);
  /* 10211b26 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211b2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211b2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211b30 je 0x10211c9d */
  if (C.zf) goto L_10211c9d;
  /* 10211b36 push 0x1021f980 */
  push32((uint32_t)(0x1021f980u));
  /* 10211b3b push 0x10226320 */
  push32((uint32_t)(0x10226320u));
  /* 10211b40 call eax */
  call_ind((uint32_t)(EAX), 0x10211b42u);
  /* 10211b42 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211b47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211b4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211b4c je 0x10211c9d */
  if (C.zf) goto L_10211c9d;
  /* 10211b52 push 0x1021f968 */
  push32((uint32_t)(0x1021f968u));
  /* 10211b57 push 0x10226328 */
  push32((uint32_t)(0x10226328u));
  /* 10211b5c call eax */
  call_ind((uint32_t)(EAX), 0x10211b5eu);
  /* 10211b5e mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211b63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211b66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211b68 je 0x10211c9d */
  if (C.zf) goto L_10211c9d;
  /* 10211b6e push 0x1021f950 */
  push32((uint32_t)(0x1021f950u));
  /* 10211b73 push 0x10226340 */
  push32((uint32_t)(0x10226340u));
  /* 10211b78 call eax */
  call_ind((uint32_t)(EAX), 0x10211b7au);
  /* 10211b7a mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211b7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211b82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211b84 je 0x10211c9d */
  if (C.zf) goto L_10211c9d;
  /* 10211b8a push 0x1021f938 */
  push32((uint32_t)(0x1021f938u));
  /* 10211b8f push 0x10226278 */
  push32((uint32_t)(0x10226278u));
  /* 10211b94 call eax */
  call_ind((uint32_t)(EAX), 0x10211b96u);
  /* 10211b96 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211b9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211b9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211ba0 je 0x10211c9d */
  if (C.zf) goto L_10211c9d;
  /* 10211ba6 push 0x1021f920 */
  push32((uint32_t)(0x1021f920u));
  /* 10211bab push 0x10226260 */
  push32((uint32_t)(0x10226260u));
  /* 10211bb0 call eax */
  call_ind((uint32_t)(EAX), 0x10211bb2u);
  /* 10211bb2 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211bb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211bba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211bbc je 0x10211c9d */
  if (C.zf) goto L_10211c9d;
  /* 10211bc2 push 0x1021f908 */
  push32((uint32_t)(0x1021f908u));
  /* 10211bc7 push 0x10226268 */
  push32((uint32_t)(0x10226268u));
  /* 10211bcc call eax */
  call_ind((uint32_t)(EAX), 0x10211bceu);
  /* 10211bce mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211bd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211bd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211bd8 je 0x10211c9d */
  if (C.zf) goto L_10211c9d;
  /* 10211bde push 0x1021f8f0 */
  push32((uint32_t)(0x1021f8f0u));
  /* 10211be3 push 0x10226280 */
  push32((uint32_t)(0x10226280u));
  /* 10211be8 call eax */
  call_ind((uint32_t)(EAX), 0x10211beau);
  /* 10211bea mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211bef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211bf2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211bf4 je 0x10211c9d */
  if (C.zf) goto L_10211c9d;
  /* 10211bfa push 0x1021f8d8 */
  push32((uint32_t)(0x1021f8d8u));
  /* 10211bff push 0x10226288 */
  push32((uint32_t)(0x10226288u));
  /* 10211c04 call eax */
  call_ind((uint32_t)(EAX), 0x10211c06u);
  /* 10211c06 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211c0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211c0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211c10 je 0x10211c9d */
  if (C.zf) goto L_10211c9d;
  /* 10211c16 push 0x1021f8c0 */
  push32((uint32_t)(0x1021f8c0u));
  /* 10211c1b push 0x102238f0 */
  push32((uint32_t)(0x102238f0u));
  /* 10211c20 call eax */
  call_ind((uint32_t)(EAX), 0x10211c22u);
  /* 10211c22 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211c27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211c2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211c2c je 0x10211c9d */
  if (C.zf) goto L_10211c9d;
  /* 10211c2e push 0x1021f8a8 */
  push32((uint32_t)(0x1021f8a8u));
  /* 10211c33 push 0x102238f8 */
  push32((uint32_t)(0x102238f8u));
  /* 10211c38 call eax */
  call_ind((uint32_t)(EAX), 0x10211c3au);
  /* 10211c3a mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211c3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211c42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211c44 je 0x10211c9d */
  if (C.zf) goto L_10211c9d;
  /* 10211c46 push 0x1021f890 */
  push32((uint32_t)(0x1021f890u));
  /* 10211c4b push 0x102238e8 */
  push32((uint32_t)(0x102238e8u));
  /* 10211c50 call eax */
  call_ind((uint32_t)(EAX), 0x10211c52u);
  /* 10211c52 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211c57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211c5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211c5c je 0x10211c9d */
  if (C.zf) goto L_10211c9d;
  /* 10211c5e push 0x1021f878 */
  push32((uint32_t)(0x1021f878u));
  /* 10211c63 push 0x10225f58 */
  push32((uint32_t)(0x10225f58u));
  /* 10211c68 call eax */
  call_ind((uint32_t)(EAX), 0x10211c6au);
  /* 10211c6a mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211c6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211c72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211c74 je 0x10211c9d */
  if (C.zf) goto L_10211c9d;
  /* 10211c76 push 0x1021f860 */
  push32((uint32_t)(0x1021f860u));
  /* 10211c7b push 0x10225f48 */
  push32((uint32_t)(0x10225f48u));
  /* 10211c80 call eax */
  call_ind((uint32_t)(EAX), 0x10211c82u);
  /* 10211c82 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211c87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211c8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211c8c je 0x10211c9d */
  if (C.zf) goto L_10211c9d;
  /* 10211c8e push 0x1021f848 */
  push32((uint32_t)(0x1021f848u));
  /* 10211c93 push 0x10225f50 */
  push32((uint32_t)(0x10225f50u));
  /* 10211c98 call eax */
  call_ind((uint32_t)(EAX), 0x10211c9au);
  /* 10211c9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10211c9d:;
  /* 10211c9d lea eax, [esp] */
  EAX = ((uint32_t)(ESP));
  /* 10211ca1 push 0x1021f840 */
  push32((uint32_t)(0x1021f840u));
  /* 10211ca6 push eax */
  push32((uint32_t)(EAX));
  /* 10211ca7 call 0x10212f30 */
  push32(0x10211cacu); f_10212f30();
  /* 10211cac push eax */
  push32((uint32_t)(EAX));
  /* 10211cad push 0x10225ff8 */
  push32((uint32_t)(0x10225ff8u));
  /* 10211cb2 call 0x102126a0 */
  push32(0x10211cb7u); f_102126a0();
  /* 10211cb7 lea ecx, [esp + 0x10] */
  ECX = ((uint32_t)(ESP + 0x10));
  /* 10211cbb push 0x1021f838 */
  push32((uint32_t)(0x1021f838u));
  /* 10211cc0 push ecx */
  push32((uint32_t)(ECX));
  /* 10211cc1 call 0x10212f30 */
  push32(0x10211cc6u); f_10212f30();
  /* 10211cc6 push eax */
  push32((uint32_t)(EAX));
  /* 10211cc7 push 0x10225ff0 */
  push32((uint32_t)(0x10225ff0u));
  /* 10211ccc call 0x102126a0 */
  push32(0x10211cd1u); f_102126a0();
  /* 10211cd1 lea edx, [esp + 0x20] */
  EDX = ((uint32_t)(ESP + 0x20));
  /* 10211cd5 push 0x1021f830 */
  push32((uint32_t)(0x1021f830u));
  /* 10211cda push edx */
  push32((uint32_t)(EDX));
  /* 10211cdb call 0x10212f30 */
  push32(0x10211ce0u); f_10212f30();
  /* 10211ce0 push eax */
  push32((uint32_t)(EAX));
  /* 10211ce1 push 0x10225fe8 */
  push32((uint32_t)(0x10225fe8u));
  /* 10211ce6 call 0x102126a0 */
  push32(0x10211cebu); f_102126a0();
  /* 10211ceb lea eax, [esp + 0x30] */
  EAX = ((uint32_t)(ESP + 0x30));
  /* 10211cef push 0x1021f828 */
  push32((uint32_t)(0x1021f828u));
  /* 10211cf4 push eax */
  push32((uint32_t)(EAX));
  /* 10211cf5 call 0x10212f30 */
  push32(0x10211cfau); f_10212f30();
  /* 10211cfa push eax */
  push32((uint32_t)(EAX));
  /* 10211cfb push 0x10225fe0 */
  push32((uint32_t)(0x10225fe0u));
  /* 10211d00 call 0x102126a0 */
  push32(0x10211d05u); f_102126a0();
  /* 10211d05 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211d08 lea ecx, [esp] */
  ECX = ((uint32_t)(ESP));
  /* 10211d0c push 0x1021f820 */
  push32((uint32_t)(0x1021f820u));
  /* 10211d11 push ecx */
  push32((uint32_t)(ECX));
  /* 10211d12 call 0x10212f30 */
  push32(0x10211d17u); f_10212f30();
  /* 10211d17 push eax */
  push32((uint32_t)(EAX));
  /* 10211d18 push 0x10225fd8 */
  push32((uint32_t)(0x10225fd8u));
  /* 10211d1d call 0x102126a0 */
  push32(0x10211d22u); f_102126a0();
  /* 10211d22 lea edx, [esp + 0x10] */
  EDX = ((uint32_t)(ESP + 0x10));
  /* 10211d26 push 0x1021f818 */
  push32((uint32_t)(0x1021f818u));
  /* 10211d2b push edx */
  push32((uint32_t)(EDX));
  /* 10211d2c call 0x10212f30 */
  push32(0x10211d31u); f_10212f30();
  /* 10211d31 push eax */
  push32((uint32_t)(EAX));
  /* 10211d32 push 0x10225fd0 */
  push32((uint32_t)(0x10225fd0u));
  /* 10211d37 call 0x102126a0 */
  push32(0x10211d3cu); f_102126a0();
  /* 10211d3c lea eax, [esp + 0x20] */
  EAX = ((uint32_t)(ESP + 0x20));
  /* 10211d40 push 0x1021f810 */
  push32((uint32_t)(0x1021f810u));
  /* 10211d45 push eax */
  push32((uint32_t)(EAX));
  /* 10211d46 call 0x10212f30 */
  push32(0x10211d4bu); f_10212f30();
  /* 10211d4b push eax */
  push32((uint32_t)(EAX));
  /* 10211d4c push 0x10226110 */
  push32((uint32_t)(0x10226110u));
  /* 10211d51 call 0x102126a0 */
  push32(0x10211d56u); f_102126a0();
  /* 10211d56 lea ecx, [esp + 0x30] */
  ECX = ((uint32_t)(ESP + 0x30));
  /* 10211d5a push 0x1021f808 */
  push32((uint32_t)(0x1021f808u));
  /* 10211d5f push ecx */
  push32((uint32_t)(ECX));
  /* 10211d60 call 0x10212f30 */
  push32(0x10211d65u); f_10212f30();
  /* 10211d65 push eax */
  push32((uint32_t)(EAX));
  /* 10211d66 push 0x10226108 */
  push32((uint32_t)(0x10226108u));
  /* 10211d6b call 0x102126a0 */
  push32(0x10211d70u); f_102126a0();
  /* 10211d70 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211d73 lea edx, [esp] */
  EDX = ((uint32_t)(ESP));
  /* 10211d77 push 0x1021f800 */
  push32((uint32_t)(0x1021f800u));
  /* 10211d7c push edx */
  push32((uint32_t)(EDX));
  /* 10211d7d call 0x10212f30 */
  push32(0x10211d82u); f_10212f30();
  /* 10211d82 push eax */
  push32((uint32_t)(EAX));
  /* 10211d83 push 0x10226100 */
  push32((uint32_t)(0x10226100u));
  /* 10211d88 call 0x102126a0 */
  push32(0x10211d8du); f_102126a0();
  /* 10211d8d lea eax, [esp + 0x10] */
  EAX = ((uint32_t)(ESP + 0x10));
  /* 10211d91 push 0x1021f7f8 */
  push32((uint32_t)(0x1021f7f8u));
  /* 10211d96 push eax */
  push32((uint32_t)(EAX));
  /* 10211d97 call 0x10212f30 */
  push32(0x10211d9cu); f_10212f30();
  /* 10211d9c push eax */
  push32((uint32_t)(EAX));
  /* 10211d9d push 0x102260f8 */
  push32((uint32_t)(0x102260f8u));
  /* 10211da2 call 0x102126a0 */
  push32(0x10211da7u); f_102126a0();
  /* 10211da7 lea ecx, [esp + 0x20] */
  ECX = ((uint32_t)(ESP + 0x20));
  /* 10211dab push 0x1021f7f0 */
  push32((uint32_t)(0x1021f7f0u));
  /* 10211db0 push ecx */
  push32((uint32_t)(ECX));
  /* 10211db1 call 0x10212f30 */
  push32(0x10211db6u); f_10212f30();
  /* 10211db6 push eax */
  push32((uint32_t)(EAX));
  /* 10211db7 push 0x102260e8 */
  push32((uint32_t)(0x102260e8u));
  /* 10211dbc call 0x102126a0 */
  push32(0x10211dc1u); f_102126a0();
  /* 10211dc1 push 0x1021f7e8 */
  push32((uint32_t)(0x1021f7e8u));
  /* 10211dc6 lea edx, [esp + 0x34] */
  EDX = ((uint32_t)(ESP + 0x34));
  /* 10211dca push edx */
  push32((uint32_t)(EDX));
  /* 10211dcb call 0x10212f30 */
  push32(0x10211dd0u); f_10212f30();
  /* 10211dd0 push eax */
  push32((uint32_t)(EAX));
  /* 10211dd1 push 0x10226138 */
  push32((uint32_t)(0x10226138u));
  /* 10211dd6 call 0x102126a0 */
  push32(0x10211ddbu); f_102126a0();
  /* 10211ddb mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211de0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211de3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211de5 je 0x10211f1a */
  if (C.zf) goto L_10211f1a;
  /* 10211deb push 0x1021f7d4 */
  push32((uint32_t)(0x1021f7d4u));
  /* 10211df0 push 0x10223698 */
  push32((uint32_t)(0x10223698u));
  /* 10211df5 call eax */
  call_ind((uint32_t)(EAX), 0x10211df7u);
  /* 10211df7 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211dfc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211dff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211e01 je 0x10211f1a */
  if (C.zf) goto L_10211f1a;
  /* 10211e07 push 0x1021f7c0 */
  push32((uint32_t)(0x1021f7c0u));
  /* 10211e0c push 0x10223690 */
  push32((uint32_t)(0x10223690u));
  /* 10211e11 call eax */
  call_ind((uint32_t)(EAX), 0x10211e13u);
  /* 10211e13 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211e18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211e1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211e1d je 0x10211f1a */
  if (C.zf) goto L_10211f1a;
  /* 10211e23 push 0x1021f7ac */
  push32((uint32_t)(0x1021f7acu));
  /* 10211e28 push 0x10223688 */
  push32((uint32_t)(0x10223688u));
  /* 10211e2d call eax */
  call_ind((uint32_t)(EAX), 0x10211e2fu);
  /* 10211e2f mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211e34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211e37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211e39 je 0x10211f1a */
  if (C.zf) goto L_10211f1a;
  /* 10211e3f push 0x1021f798 */
  push32((uint32_t)(0x1021f798u));
  /* 10211e44 push 0x10223680 */
  push32((uint32_t)(0x10223680u));
  /* 10211e49 call eax */
  call_ind((uint32_t)(EAX), 0x10211e4bu);
  /* 10211e4b mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211e50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211e53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211e55 je 0x10211f1a */
  if (C.zf) goto L_10211f1a;
  /* 10211e5b push 0x1021f784 */
  push32((uint32_t)(0x1021f784u));
  /* 10211e60 push 0x10223658 */
  push32((uint32_t)(0x10223658u));
  /* 10211e65 call eax */
  call_ind((uint32_t)(EAX), 0x10211e67u);
  /* 10211e67 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211e6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211e6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211e71 je 0x10211f1a */
  if (C.zf) goto L_10211f1a;
  /* 10211e77 push 0x1021f770 */
  push32((uint32_t)(0x1021f770u));
  /* 10211e7c push 0x10223650 */
  push32((uint32_t)(0x10223650u));
  /* 10211e81 call eax */
  call_ind((uint32_t)(EAX), 0x10211e83u);
  /* 10211e83 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211e88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211e8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211e8d je 0x10211f1a */
  if (C.zf) goto L_10211f1a;
  /* 10211e93 push 0x1021f75c */
  push32((uint32_t)(0x1021f75cu));
  /* 10211e98 push 0x10223728 */
  push32((uint32_t)(0x10223728u));
  /* 10211e9d call eax */
  call_ind((uint32_t)(EAX), 0x10211e9fu);
  /* 10211e9f mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211ea4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211ea7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211ea9 je 0x10211f1a */
  if (C.zf) goto L_10211f1a;
  /* 10211eab push 0x1021f748 */
  push32((uint32_t)(0x1021f748u));
  /* 10211eb0 push 0x10223720 */
  push32((uint32_t)(0x10223720u));
  /* 10211eb5 call eax */
  call_ind((uint32_t)(EAX), 0x10211eb7u);
  /* 10211eb7 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211ebc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211ebf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211ec1 je 0x10211f1a */
  if (C.zf) goto L_10211f1a;
  /* 10211ec3 push 0x1021f734 */
  push32((uint32_t)(0x1021f734u));
  /* 10211ec8 push 0x10223718 */
  push32((uint32_t)(0x10223718u));
  /* 10211ecd call eax */
  call_ind((uint32_t)(EAX), 0x10211ecfu);
  /* 10211ecf mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211ed4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211ed7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211ed9 je 0x10211f1a */
  if (C.zf) goto L_10211f1a;
  /* 10211edb push 0x1021f720 */
  push32((uint32_t)(0x1021f720u));
  /* 10211ee0 push 0x10223700 */
  push32((uint32_t)(0x10223700u));
  /* 10211ee5 call eax */
  call_ind((uint32_t)(EAX), 0x10211ee7u);
  /* 10211ee7 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211eec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211eef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211ef1 je 0x10211f1a */
  if (C.zf) goto L_10211f1a;
  /* 10211ef3 push 0x1021f70c */
  push32((uint32_t)(0x1021f70cu));
  /* 10211ef8 push 0x102236f8 */
  push32((uint32_t)(0x102236f8u));
  /* 10211efd call eax */
  call_ind((uint32_t)(EAX), 0x10211effu);
  /* 10211eff mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10211f04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211f07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10211f09 je 0x10211f1a */
  if (C.zf) goto L_10211f1a;
  /* 10211f0b push 0x1021f6f8 */
  push32((uint32_t)(0x1021f6f8u));
  /* 10211f10 push 0x102236f0 */
  push32((uint32_t)(0x102236f0u));
  /* 10211f15 call eax */
  call_ind((uint32_t)(EAX), 0x10211f17u);
  /* 10211f17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10211f1a:;
  /* 10211f1a lea eax, [esp + 0x30] */
  EAX = ((uint32_t)(ESP + 0x30));
  /* 10211f1e push 0x1021f840 */
  push32((uint32_t)(0x1021f840u));
  /* 10211f23 push eax */
  push32((uint32_t)(EAX));
  /* 10211f24 call 0x10212f30 */
  push32(0x10211f29u); f_10212f30();
  /* 10211f29 push eax */
  push32((uint32_t)(EAX));
  /* 10211f2a push 0x102236c0 */
  push32((uint32_t)(0x102236c0u));
  /* 10211f2f call 0x102126a0 */
  push32(0x10211f34u); f_102126a0();
  /* 10211f34 lea ecx, [esp + 0x40] */
  ECX = ((uint32_t)(ESP + 0x40));
  /* 10211f38 push 0x1021f838 */
  push32((uint32_t)(0x1021f838u));
  /* 10211f3d push ecx */
  push32((uint32_t)(ECX));
  /* 10211f3e call 0x10212f30 */
  push32(0x10211f43u); f_10212f30();
  /* 10211f43 push eax */
  push32((uint32_t)(EAX));
  /* 10211f44 push 0x102236c8 */
  push32((uint32_t)(0x102236c8u));
  /* 10211f49 call 0x102126a0 */
  push32(0x10211f4eu); f_102126a0();
  /* 10211f4e lea edx, [esp + 0x50] */
  EDX = ((uint32_t)(ESP + 0x50));
  /* 10211f52 push 0x1021f830 */
  push32((uint32_t)(0x1021f830u));
  /* 10211f57 push edx */
  push32((uint32_t)(EDX));
  /* 10211f58 call 0x10212f30 */
  push32(0x10211f5du); f_10212f30();
  /* 10211f5d push eax */
  push32((uint32_t)(EAX));
  /* 10211f5e push 0x102236d0 */
  push32((uint32_t)(0x102236d0u));
  /* 10211f63 call 0x102126a0 */
  push32(0x10211f68u); f_102126a0();
  /* 10211f68 lea eax, [esp + 0x60] */
  EAX = ((uint32_t)(ESP + 0x60));
  /* 10211f6c push 0x1021f828 */
  push32((uint32_t)(0x1021f828u));
  /* 10211f71 push eax */
  push32((uint32_t)(EAX));
  /* 10211f72 call 0x10212f30 */
  push32(0x10211f77u); f_10212f30();
  /* 10211f77 push eax */
  push32((uint32_t)(EAX));
  /* 10211f78 push 0x102236d8 */
  push32((uint32_t)(0x102236d8u));
  /* 10211f7d call 0x102126a0 */
  push32(0x10211f82u); f_102126a0();
  /* 10211f82 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211f85 lea ecx, [esp + 0x30] */
  ECX = ((uint32_t)(ESP + 0x30));
  /* 10211f89 push 0x1021f820 */
  push32((uint32_t)(0x1021f820u));
  /* 10211f8e push ecx */
  push32((uint32_t)(ECX));
  /* 10211f8f call 0x10212f30 */
  push32(0x10211f94u); f_10212f30();
  /* 10211f94 push eax */
  push32((uint32_t)(EAX));
  /* 10211f95 push 0x102236a0 */
  push32((uint32_t)(0x102236a0u));
  /* 10211f9a call 0x102126a0 */
  push32(0x10211f9fu); f_102126a0();
  /* 10211f9f lea edx, [esp + 0x40] */
  EDX = ((uint32_t)(ESP + 0x40));
  /* 10211fa3 push 0x1021f818 */
  push32((uint32_t)(0x1021f818u));
  /* 10211fa8 push edx */
  push32((uint32_t)(EDX));
  /* 10211fa9 call 0x10212f30 */
  push32(0x10211faeu); f_10212f30();
  /* 10211fae push eax */
  push32((uint32_t)(EAX));
  /* 10211faf push 0x102236b0 */
  push32((uint32_t)(0x102236b0u));
  /* 10211fb4 call 0x102126a0 */
  push32(0x10211fb9u); f_102126a0();
  /* 10211fb9 lea eax, [esp + 0x50] */
  EAX = ((uint32_t)(ESP + 0x50));
  /* 10211fbd push 0x1021f810 */
  push32((uint32_t)(0x1021f810u));
  /* 10211fc2 push eax */
  push32((uint32_t)(EAX));
  /* 10211fc3 call 0x10212f30 */
  push32(0x10211fc8u); f_10212f30();
  /* 10211fc8 push eax */
  push32((uint32_t)(EAX));
  /* 10211fc9 push 0x10223768 */
  push32((uint32_t)(0x10223768u));
  /* 10211fce call 0x102126a0 */
  push32(0x10211fd3u); f_102126a0();
  /* 10211fd3 lea ecx, [esp + 0x60] */
  ECX = ((uint32_t)(ESP + 0x60));
  /* 10211fd7 push 0x1021f808 */
  push32((uint32_t)(0x1021f808u));
  /* 10211fdc push ecx */
  push32((uint32_t)(ECX));
  /* 10211fdd call 0x10212f30 */
  push32(0x10211fe2u); f_10212f30();
  /* 10211fe2 push eax */
  push32((uint32_t)(EAX));
  /* 10211fe3 push 0x10223770 */
  push32((uint32_t)(0x10223770u));
  /* 10211fe8 call 0x102126a0 */
  push32(0x10211fedu); f_102126a0();
  /* 10211fed add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10211ff0 lea edx, [esp + 0x30] */
  EDX = ((uint32_t)(ESP + 0x30));
  /* 10211ff4 push 0x1021f800 */
  push32((uint32_t)(0x1021f800u));
  /* 10211ff9 push edx */
  push32((uint32_t)(EDX));
  /* 10211ffa call 0x10212f30 */
  push32(0x10211fffu); f_10212f30();
  /* 10211fff push eax */
  push32((uint32_t)(EAX));
  /* 10212000 push 0x10223778 */
  push32((uint32_t)(0x10223778u));
  /* 10212005 call 0x102126a0 */
  push32(0x1021200au); f_102126a0();
  /* 1021200a lea eax, [esp + 0x40] */
  EAX = ((uint32_t)(ESP + 0x40));
  /* 1021200e push 0x1021f7f8 */
  push32((uint32_t)(0x1021f7f8u));
  /* 10212013 push eax */
  push32((uint32_t)(EAX));
  /* 10212014 call 0x10212f30 */
  push32(0x10212019u); f_10212f30();
  /* 10212019 push eax */
  push32((uint32_t)(EAX));
  /* 1021201a push 0x10223750 */
  push32((uint32_t)(0x10223750u));
  /* 1021201f call 0x102126a0 */
  push32(0x10212024u); f_102126a0();
  /* 10212024 lea ecx, [esp + 0x50] */
  ECX = ((uint32_t)(ESP + 0x50));
  /* 10212028 push 0x1021f7f0 */
  push32((uint32_t)(0x1021f7f0u));
  /* 1021202d push ecx */
  push32((uint32_t)(ECX));
  /* 1021202e call 0x10212f30 */
  push32(0x10212033u); f_10212f30();
  /* 10212033 push eax */
  push32((uint32_t)(EAX));
  /* 10212034 push 0x10223758 */
  push32((uint32_t)(0x10223758u));
  /* 10212039 call 0x102126a0 */
  push32(0x1021203eu); f_102126a0();
  /* 1021203e push 0x1021f7e8 */
  push32((uint32_t)(0x1021f7e8u));
  /* 10212043 lea edx, [esp + 0x64] */
  EDX = ((uint32_t)(ESP + 0x64));
  /* 10212047 push edx */
  push32((uint32_t)(EDX));
  /* 10212048 call 0x10212f30 */
  push32(0x1021204du); f_10212f30();
  /* 1021204d push eax */
  push32((uint32_t)(EAX));
  /* 1021204e push 0x10223760 */
  push32((uint32_t)(0x10223760u));
  /* 10212053 call 0x102126a0 */
  push32(0x10212058u); f_102126a0();
  /* 10212058 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 1021205d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10212060 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10212062 je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 10212068 push 0x1021f6e8 */
  push32((uint32_t)(0x1021f6e8u));
  /* 1021206d push 0x102261b8 */
  push32((uint32_t)(0x102261b8u));
  /* 10212072 call eax */
  call_ind((uint32_t)(EAX), 0x10212074u);
  /* 10212074 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10212079 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021207c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021207e je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 10212084 push 0x1021f6d4 */
  push32((uint32_t)(0x1021f6d4u));
  /* 10212089 push 0x102261b0 */
  push32((uint32_t)(0x102261b0u));
  /* 1021208e call eax */
  call_ind((uint32_t)(EAX), 0x10212090u);
  /* 10212090 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10212095 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10212098 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021209a je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 102120a0 push 0x1021f6c0 */
  push32((uint32_t)(0x1021f6c0u));
  /* 102120a5 push 0x10226180 */
  push32((uint32_t)(0x10226180u));
  /* 102120aa call eax */
  call_ind((uint32_t)(EAX), 0x102120acu);
  /* 102120ac mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 102120b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102120b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102120b6 je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 102120bc push 0x1021f6ac */
  push32((uint32_t)(0x1021f6acu));
  /* 102120c1 push 0x10226178 */
  push32((uint32_t)(0x10226178u));
  /* 102120c6 call eax */
  call_ind((uint32_t)(EAX), 0x102120c8u);
  /* 102120c8 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 102120cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102120d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102120d2 je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 102120d8 push 0x1021f698 */
  push32((uint32_t)(0x1021f698u));
  /* 102120dd push 0x10226188 */
  push32((uint32_t)(0x10226188u));
  /* 102120e2 call eax */
  call_ind((uint32_t)(EAX), 0x102120e4u);
  /* 102120e4 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 102120e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102120ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102120ee je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 102120f4 push 0x1021f684 */
  push32((uint32_t)(0x1021f684u));
  /* 102120f9 push 0x10226078 */
  push32((uint32_t)(0x10226078u));
  /* 102120fe call eax */
  call_ind((uint32_t)(EAX), 0x10212100u);
  /* 10212100 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10212105 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10212108 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021210a je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 10212110 push 0x1021f670 */
  push32((uint32_t)(0x1021f670u));
  /* 10212115 push 0x10226080 */
  push32((uint32_t)(0x10226080u));
  /* 1021211a call eax */
  call_ind((uint32_t)(EAX), 0x1021211cu);
  /* 1021211c mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10212121 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10212124 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10212126 je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 1021212c push 0x1021f65c */
  push32((uint32_t)(0x1021f65cu));
  /* 10212131 push 0x10226088 */
  push32((uint32_t)(0x10226088u));
  /* 10212136 call eax */
  call_ind((uint32_t)(EAX), 0x10212138u);
  /* 10212138 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 1021213d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10212140 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10212142 je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 10212148 push 0x1021f648 */
  push32((uint32_t)(0x1021f648u));
  /* 1021214d push 0x10226090 */
  push32((uint32_t)(0x10226090u));
  /* 10212152 call eax */
  call_ind((uint32_t)(EAX), 0x10212154u);
  /* 10212154 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10212159 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021215c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021215e je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 10212164 push 0x1021f640 */
  push32((uint32_t)(0x1021f640u));
  /* 10212169 push 0x10226198 */
  push32((uint32_t)(0x10226198u));
  /* 1021216e call eax */
  call_ind((uint32_t)(EAX), 0x10212170u);
  /* 10212170 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10212175 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10212178 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021217a je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 10212180 push 0x1021f638 */
  push32((uint32_t)(0x1021f638u));
  /* 10212185 push 0x10226000 */
  push32((uint32_t)(0x10226000u));
  /* 1021218a call eax */
  call_ind((uint32_t)(EAX), 0x1021218cu);
  /* 1021218c mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10212191 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10212194 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10212196 je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 1021219c push 0x1021f630 */
  push32((uint32_t)(0x1021f630u));
  /* 102121a1 push 0x10223938 */
  push32((uint32_t)(0x10223938u));
  /* 102121a6 call eax */
  call_ind((uint32_t)(EAX), 0x102121a8u);
  /* 102121a8 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 102121ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102121b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102121b2 je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 102121b8 push 0x1021f628 */
  push32((uint32_t)(0x1021f628u));
  /* 102121bd push 0x10226058 */
  push32((uint32_t)(0x10226058u));
  /* 102121c2 call eax */
  call_ind((uint32_t)(EAX), 0x102121c4u);
  /* 102121c4 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 102121c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102121cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102121ce je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 102121d4 push 0x1021f620 */
  push32((uint32_t)(0x1021f620u));
  /* 102121d9 push 0x10226010 */
  push32((uint32_t)(0x10226010u));
  /* 102121de call eax */
  call_ind((uint32_t)(EAX), 0x102121e0u);
  /* 102121e0 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 102121e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102121e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102121ea je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 102121f0 push 0x1021f618 */
  push32((uint32_t)(0x1021f618u));
  /* 102121f5 push 0x10226018 */
  push32((uint32_t)(0x10226018u));
  /* 102121fa call eax */
  call_ind((uint32_t)(EAX), 0x102121fcu);
  /* 102121fc mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10212201 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10212204 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10212206 je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 1021220c push 0x1021f610 */
  push32((uint32_t)(0x1021f610u));
  /* 10212211 push 0x10226020 */
  push32((uint32_t)(0x10226020u));
  /* 10212216 call eax */
  call_ind((uint32_t)(EAX), 0x10212218u);
  /* 10212218 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 1021221d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10212220 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10212222 je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 10212228 push 0x1021f608 */
  push32((uint32_t)(0x1021f608u));
  /* 1021222d push 0x10226250 */
  push32((uint32_t)(0x10226250u));
  /* 10212232 call eax */
  call_ind((uint32_t)(EAX), 0x10212234u);
  /* 10212234 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10212239 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021223c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021223e je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 10212244 push 0x1021f600 */
  push32((uint32_t)(0x1021f600u));
  /* 10212249 push 0x102260f0 */
  push32((uint32_t)(0x102260f0u));
  /* 1021224e call eax */
  call_ind((uint32_t)(EAX), 0x10212250u);
  /* 10212250 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10212255 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10212258 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021225a je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 10212260 push 0x1021f5f8 */
  push32((uint32_t)(0x1021f5f8u));
  /* 10212265 push 0x10226130 */
  push32((uint32_t)(0x10226130u));
  /* 1021226a call eax */
  call_ind((uint32_t)(EAX), 0x1021226cu);
  /* 1021226c mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10212271 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10212274 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10212276 je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 1021227c push 0x1021f5f0 */
  push32((uint32_t)(0x1021f5f0u));
  /* 10212281 push 0x102261e8 */
  push32((uint32_t)(0x102261e8u));
  /* 10212286 call eax */
  call_ind((uint32_t)(EAX), 0x10212288u);
  /* 10212288 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 1021228d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10212290 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10212292 je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 10212298 push 0x1021f5e8 */
  push32((uint32_t)(0x1021f5e8u));
  /* 1021229d push 0x102261f0 */
  push32((uint32_t)(0x102261f0u));
  /* 102122a2 call eax */
  call_ind((uint32_t)(EAX), 0x102122a4u);
  /* 102122a4 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 102122a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102122ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102122ae je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 102122b4 push 0x1021f5e0 */
  push32((uint32_t)(0x1021f5e0u));
  /* 102122b9 push 0x10226148 */
  push32((uint32_t)(0x10226148u));
  /* 102122be call eax */
  call_ind((uint32_t)(EAX), 0x102122c0u);
  /* 102122c0 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 102122c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102122c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102122ca je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 102122d0 push 0x1021f5d8 */
  push32((uint32_t)(0x1021f5d8u));
  /* 102122d5 push 0x10226158 */
  push32((uint32_t)(0x10226158u));
  /* 102122da call eax */
  call_ind((uint32_t)(EAX), 0x102122dcu);
  /* 102122dc mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 102122e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102122e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102122e6 je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 102122ec push 0x1021f5d0 */
  push32((uint32_t)(0x1021f5d0u));
  /* 102122f1 push 0x10226160 */
  push32((uint32_t)(0x10226160u));
  /* 102122f6 call eax */
  call_ind((uint32_t)(EAX), 0x102122f8u);
  /* 102122f8 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 102122fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10212300 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10212302 je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 10212308 push 0x1021f5c8 */
  push32((uint32_t)(0x1021f5c8u));
  /* 1021230d push 0x10226150 */
  push32((uint32_t)(0x10226150u));
  /* 10212312 call eax */
  call_ind((uint32_t)(EAX), 0x10212314u);
  /* 10212314 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10212319 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021231c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021231e je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 10212324 push 0x1021f5c0 */
  push32((uint32_t)(0x1021f5c0u));
  /* 10212329 push 0x10223930 */
  push32((uint32_t)(0x10223930u));
  /* 1021232e call eax */
  call_ind((uint32_t)(EAX), 0x10212330u);
  /* 10212330 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10212335 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10212338 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021233a je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 10212340 push 0x1021f5b8 */
  push32((uint32_t)(0x1021f5b8u));
  /* 10212345 push 0x102238c0 */
  push32((uint32_t)(0x102238c0u));
  /* 1021234a call eax */
  call_ind((uint32_t)(EAX), 0x1021234cu);
  /* 1021234c mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10212351 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10212354 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10212356 je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 1021235c push 0x1021f5b0 */
  push32((uint32_t)(0x1021f5b0u));
  /* 10212361 push 0x10223780 */
  push32((uint32_t)(0x10223780u));
  /* 10212366 call eax */
  call_ind((uint32_t)(EAX), 0x10212368u);
  /* 10212368 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 1021236d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10212370 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10212372 je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 10212378 push 0x1021f5a8 */
  push32((uint32_t)(0x1021f5a8u));
  /* 1021237d push 0x102260d0 */
  push32((uint32_t)(0x102260d0u));
  /* 10212382 call eax */
  call_ind((uint32_t)(EAX), 0x10212384u);
  /* 10212384 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10212389 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021238c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021238e je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 10212394 push 0x1021f5a0 */
  push32((uint32_t)(0x1021f5a0u));
  /* 10212399 push 0x10223920 */
  push32((uint32_t)(0x10223920u));
  /* 1021239e call eax */
  call_ind((uint32_t)(EAX), 0x102123a0u);
  /* 102123a0 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 102123a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102123a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102123aa je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 102123b0 push 0x1021f598 */
  push32((uint32_t)(0x1021f598u));
  /* 102123b5 push 0x102261d8 */
  push32((uint32_t)(0x102261d8u));
  /* 102123ba call eax */
  call_ind((uint32_t)(EAX), 0x102123bcu);
  /* 102123bc mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 102123c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102123c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102123c6 je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 102123cc push 0x1021f590 */
  push32((uint32_t)(0x1021f590u));
  /* 102123d1 push 0x102261e0 */
  push32((uint32_t)(0x102261e0u));
  /* 102123d6 call eax */
  call_ind((uint32_t)(EAX), 0x102123d8u);
  /* 102123d8 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 102123dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102123e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102123e2 je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 102123e8 push 0x1021f588 */
  push32((uint32_t)(0x1021f588u));
  /* 102123ed push 0x10223850 */
  push32((uint32_t)(0x10223850u));
  /* 102123f2 call eax */
  call_ind((uint32_t)(EAX), 0x102123f4u);
  /* 102123f4 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 102123f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102123fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102123fe je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 10212404 push 0x1021f580 */
  push32((uint32_t)(0x1021f580u));
  /* 10212409 push 0x10223860 */
  push32((uint32_t)(0x10223860u));
  /* 1021240e call eax */
  call_ind((uint32_t)(EAX), 0x10212410u);
  /* 10212410 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10212415 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10212418 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021241a je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 10212420 push 0x1021f578 */
  push32((uint32_t)(0x1021f578u));
  /* 10212425 push 0x10223748 */
  push32((uint32_t)(0x10223748u));
  /* 1021242a call eax */
  call_ind((uint32_t)(EAX), 0x1021242cu);
  /* 1021242c mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10212431 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10212434 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10212436 je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 1021243c push 0x1021f570 */
  push32((uint32_t)(0x1021f570u));
  /* 10212441 push 0x10223608 */
  push32((uint32_t)(0x10223608u));
  /* 10212446 call eax */
  call_ind((uint32_t)(EAX), 0x10212448u);
  /* 10212448 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 1021244d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10212450 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10212452 je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 10212458 push 0x1021f568 */
  push32((uint32_t)(0x1021f568u));
  /* 1021245d push 0x102236e8 */
  push32((uint32_t)(0x102236e8u));
  /* 10212462 call eax */
  call_ind((uint32_t)(EAX), 0x10212464u);
  /* 10212464 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10212469 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021246c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021246e je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 10212474 push 0x1021f560 */
  push32((uint32_t)(0x1021f560u));
  /* 10212479 push 0x10223610 */
  push32((uint32_t)(0x10223610u));
  /* 1021247e call eax */
  call_ind((uint32_t)(EAX), 0x10212480u);
  /* 10212480 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10212485 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10212488 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021248a je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 10212490 push 0x1021f54c */
  push32((uint32_t)(0x1021f54cu));
  /* 10212495 push 0x102262c8 */
  push32((uint32_t)(0x102262c8u));
  /* 1021249a call eax */
  call_ind((uint32_t)(EAX), 0x1021249cu);
  /* 1021249c mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 102124a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102124a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102124a6 je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 102124a8 push 0x1021f538 */
  push32((uint32_t)(0x1021f538u));
  /* 102124ad push 0x102262b0 */
  push32((uint32_t)(0x102262b0u));
  /* 102124b2 call eax */
  call_ind((uint32_t)(EAX), 0x102124b4u);
  /* 102124b4 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 102124b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102124bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102124be je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 102124c0 push 0x1021f524 */
  push32((uint32_t)(0x1021f524u));
  /* 102124c5 push 0x102262c0 */
  push32((uint32_t)(0x102262c0u));
  /* 102124ca call eax */
  call_ind((uint32_t)(EAX), 0x102124ccu);
  /* 102124cc mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 102124d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102124d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102124d6 je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 102124d8 push 0x1021f510 */
  push32((uint32_t)(0x1021f510u));
  /* 102124dd push 0x102262a0 */
  push32((uint32_t)(0x102262a0u));
  /* 102124e2 call eax */
  call_ind((uint32_t)(EAX), 0x102124e4u);
  /* 102124e4 mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 102124e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102124ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102124ee je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 102124f0 push 0x1021f4fc */
  push32((uint32_t)(0x1021f4fcu));
  /* 102124f5 push 0x102262a8 */
  push32((uint32_t)(0x102262a8u));
  /* 102124fa call eax */
  call_ind((uint32_t)(EAX), 0x102124fcu);
  /* 102124fc mov eax, dword ptr [0x102263dc] */
  EAX = (r32((uint32_t)(0x102263dc)));
  /* 10212501 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10212504 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10212506 je 0x10212517 */
  if (C.zf) goto L_10212517;
  /* 10212508 push 0x1021f4e8 */
  push32((uint32_t)(0x1021f4e8u));
  /* 1021250d push 0x10226298 */
  push32((uint32_t)(0x10226298u));
  /* 10212512 call eax */
  call_ind((uint32_t)(EAX), 0x10212514u);
  /* 10212514 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10212517:;
  /* 10212517 push 4 */
  push32((uint32_t)(0x4u));
  /* 10212519 push 4 */
  push32((uint32_t)(0x4u));
  /* 1021251b push 9 */
  push32((uint32_t)(0x9u));
  /* 1021251d call dword ptr [0x102264f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264f4))), 0x10212523u);
  /* 10212523 push 6 */
  push32((uint32_t)(0x6u));
  /* 10212525 call dword ptr [0x10226500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226500))), 0x1021252bu);
  /* 1021252b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1021252d push 0x1021f4d4 */
  push32((uint32_t)(0x1021f4d4u));
  /* 10212532 push 0 */
  push32((uint32_t)(0x0u));
  /* 10212534 call dword ptr [0x10226504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226504))), 0x1021253au);
  /* 1021253a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1021253c push 0x1021f4c0 */
  push32((uint32_t)(0x1021f4c0u));
  /* 10212541 push 1 */
  push32((uint32_t)(0x1u));
  /* 10212543 call dword ptr [0x10226504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226504))), 0x10212549u);
  /* 10212549 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1021254b push 0x1021f4ac */
  push32((uint32_t)(0x1021f4acu));
  /* 10212550 push 2 */
  push32((uint32_t)(0x2u));
  /* 10212552 call dword ptr [0x10226504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226504))), 0x10212558u);
  /* 10212558 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1021255a push 0x1021f498 */
  push32((uint32_t)(0x1021f498u));
  /* 1021255f push 3 */
  push32((uint32_t)(0x3u));
  /* 10212561 call dword ptr [0x10226504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226504))), 0x10212567u);
  /* 10212567 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021256a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1021256c push 0x1021f484 */
  push32((uint32_t)(0x1021f484u));
  /* 10212571 push 4 */
  push32((uint32_t)(0x4u));
  /* 10212573 call dword ptr [0x10226504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226504))), 0x10212579u);
  /* 10212579 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1021257b push 0x1021f470 */
  push32((uint32_t)(0x1021f470u));
  /* 10212580 push 5 */
  push32((uint32_t)(0x5u));
  /* 10212582 call dword ptr [0x10226504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226504))), 0x10212588u);
  /* 10212588 push 0x1021fb74 */
  push32((uint32_t)(0x1021fb74u));
  /* 1021258d call dword ptr [0x10226540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226540))), 0x10212593u);
  /* 10212593 push 0x1021f464 */
  push32((uint32_t)(0x1021f464u));
  /* 10212598 call dword ptr [0x1022653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022653c))), 0x1021259eu);
  /* 1021259e push 0x1021f454 */
  push32((uint32_t)(0x1021f454u));
  /* 102125a3 call dword ptr [0x10226544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226544))), 0x102125a9u);
  /* 102125a9 push 0x1021f448 */
  push32((uint32_t)(0x1021f448u));
  /* 102125ae call dword ptr [0x1022654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022654c))), 0x102125b4u);
  /* 102125b4 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 102125b9 call dword ptr [0x10226508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226508))), 0x102125bfu);
  /* 102125bf push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102125c1 call dword ptr [0x1022650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022650c))), 0x102125c7u);
  /* 102125c7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102125c9 call dword ptr [0x10226510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226510))), 0x102125cfu);
  /* 102125cf push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 102125d4 call dword ptr [0x10226514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226514))), 0x102125dau);
  /* 102125da push 5 */
  push32((uint32_t)(0x5u));
  /* 102125dc call dword ptr [0x10226518] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226518))), 0x102125e2u);
  /* 102125e2 add esp, 0x9c */
  { uint32_t _a=(ESP),_b=(0x9cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102125e8 ret  */
  ESPCHK(0x10211010u, _esp0);
  ESP += 4; return;
}

/* FUN_100025f0 @ 0x102125f0 (20 bytes, 7 insns) */
void f_102125f0(void) {
  FTRACE(0x102125f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102125f0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102125f4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102125f8 push eax */
  push32((uint32_t)(EAX));
  /* 102125f9 push ecx */
  push32((uint32_t)(ECX));
  /* 102125fa call dword ptr [0x102264f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264f0))), 0x10212600u);
  /* 10212600 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10212603 ret  */
  ESPCHK(0x102125f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002610 @ 0x10212610 (25 bytes, 9 insns) */
void f_10212610(void) {
  FTRACE(0x10212610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10212610 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10212614 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10212618 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1021261c push eax */
  push32((uint32_t)(EAX));
  /* 1021261d push ecx */
  push32((uint32_t)(ECX));
  /* 1021261e push edx */
  push32((uint32_t)(EDX));
  /* 1021261f call dword ptr [0x102264fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264fc))), 0x10212625u);
  /* 10212625 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10212628 ret  */
  ESPCHK(0x10212610u, _esp0);
  ESP += 4; return;
}

/* FUN_10002630 @ 0x10212630 (6 bytes, 1 insns) */
void f_10212630(void) {
  FTRACE(0x10212630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10212630 jmp dword ptr [0x10226528] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10226528)))); return;
}

/* FUN_10002640 @ 0x10212640 (20 bytes, 7 insns) */
void f_10212640(void) {
  FTRACE(0x10212640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10212640 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10212644 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10212648 push eax */
  push32((uint32_t)(EAX));
  /* 10212649 push ecx */
  push32((uint32_t)(ECX));
  /* 1021264a call dword ptr [0x10226548] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226548))), 0x10212650u);
  /* 10212650 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10212653 ret  */
  ESPCHK(0x10212640u, _esp0);
  ESP += 4; return;
}

/* FUN_10002660 @ 0x10212660 (6 bytes, 1 insns) */
void f_10212660(void) {
  FTRACE(0x10212660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10212660 jmp dword ptr [0x10226554] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10226554)))); return;
}

/* FUN_10002670 @ 0x10212670 (6 bytes, 1 insns) */
void f_10212670(void) {
  FTRACE(0x10212670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10212670 jmp dword ptr [0x10226558] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10226558)))); return;
}

/* FUN_10002680 @ 0x10212680 (6 bytes, 1 insns) */
void f_10212680(void) {
  FTRACE(0x10212680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10212680 jmp dword ptr [0x10226560] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10226560)))); return;
}

/* FUN_10002690 @ 0x10212690 (13 bytes, 5 insns) */
void f_10212690(void) {
  FTRACE(0x10212690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10212690 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10212694 push eax */
  push32((uint32_t)(EAX));
  /* 10212695 call dword ptr [0x10226564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226564))), 0x1021269bu);
  /* 1021269b pop ecx */
  ECX = (pop32());
  /* 1021269c ret  */
  ESPCHK(0x10212690u, _esp0);
  ESP += 4; return;
}

/* FUN_100026a0 @ 0x102126a0 (20 bytes, 7 insns) */
void f_102126a0(void) {
  FTRACE(0x102126a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102126a0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102126a4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102126a8 push eax */
  push32((uint32_t)(EAX));
  /* 102126a9 push ecx */
  push32((uint32_t)(ECX));
  /* 102126aa call dword ptr [0x10226568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226568))), 0x102126b0u);
  /* 102126b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102126b3 ret  */
  ESPCHK(0x102126a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100026c0 @ 0x102126c0 (6 bytes, 1 insns) */
void f_102126c0(void) {
  FTRACE(0x102126c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102126c0 jmp dword ptr [0x1022656c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1022656c)))); return;
}

/* FUN_100026d0 @ 0x102126d0 (20 bytes, 7 insns) */
void f_102126d0(void) {
  FTRACE(0x102126d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102126d0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102126d4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102126d8 push eax */
  push32((uint32_t)(EAX));
  /* 102126d9 push ecx */
  push32((uint32_t)(ECX));
  /* 102126da call dword ptr [0x10226248] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226248))), 0x102126e0u);
  /* 102126e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102126e3 ret  */
  ESPCHK(0x102126d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100026f0 @ 0x102126f0 (15 bytes, 5 insns) */
void f_102126f0(void) {
  FTRACE(0x102126f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102126f0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102126f4 push eax */
  push32((uint32_t)(EAX));
  /* 102126f5 call dword ptr [0x10226290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226290))), 0x102126fbu);
  /* 102126fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102126fe ret  */
  ESPCHK(0x102126f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002700 @ 0x10212700 (20 bytes, 7 insns) */
void f_10212700(void) {
  FTRACE(0x10212700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10212700 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10212704 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10212708 push eax */
  push32((uint32_t)(EAX));
  /* 10212709 push ecx */
  push32((uint32_t)(ECX));
  /* 1021270a call dword ptr [0x10223710] */
  call_ind((uint32_t)(r32((uint32_t)(0x10223710))), 0x10212710u);
  /* 10212710 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10212713 ret  */
  ESPCHK(0x10212700u, _esp0);
  ESP += 4; return;
}

/* FUN_10002720 @ 0x10212720 (13 bytes, 5 insns) */
void f_10212720(void) {
  FTRACE(0x10212720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10212720 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10212724 push eax */
  push32((uint32_t)(EAX));
  /* 10212725 call dword ptr [0x102238b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102238b0))), 0x1021272bu);
  /* 1021272b pop ecx */
  ECX = (pop32());
  /* 1021272c ret  */
  ESPCHK(0x10212720u, _esp0);
  ESP += 4; return;
}

/* FUN_10002730 @ 0x10212730 (15 bytes, 5 insns) */
void f_10212730(void) {
  FTRACE(0x10212730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10212730 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10212734 push eax */
  push32((uint32_t)(EAX));
  /* 10212735 call dword ptr [0x10226570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226570))), 0x1021273bu);
  /* 1021273b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021273e ret  */
  ESPCHK(0x10212730u, _esp0);
  ESP += 4; return;
}

/* FUN_10002740 @ 0x10212740 (25 bytes, 9 insns) */
void f_10212740(void) {
  FTRACE(0x10212740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10212740 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10212744 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10212748 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1021274c push eax */
  push32((uint32_t)(EAX));
  /* 1021274d push ecx */
  push32((uint32_t)(ECX));
  /* 1021274e push edx */
  push32((uint32_t)(EDX));
  /* 1021274f call dword ptr [0x10225fa0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10225fa0))), 0x10212755u);
  /* 10212755 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10212758 ret  */
  ESPCHK(0x10212740u, _esp0);
  ESP += 4; return;
}

/* FUN_10002760 @ 0x10212760 (13 bytes, 5 insns) */
void f_10212760(void) {
  FTRACE(0x10212760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10212760 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10212764 push eax */
  push32((uint32_t)(EAX));
  /* 10212765 call dword ptr [0x10223910] */
  call_ind((uint32_t)(r32((uint32_t)(0x10223910))), 0x1021276bu);
  /* 1021276b pop ecx */
  ECX = (pop32());
  /* 1021276c ret  */
  ESPCHK(0x10212760u, _esp0);
  ESP += 4; return;
}

/* FUN_10002770 @ 0x10212770 (6 bytes, 1 insns) */
void f_10212770(void) {
  FTRACE(0x10212770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10212770 jmp dword ptr [0x10226228] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10226228)))); return;
}

/* FUN_10002780 @ 0x10212780 (6 bytes, 1 insns) */
void f_10212780(void) {
  FTRACE(0x10212780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10212780 jmp dword ptr [0x10223928] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10223928)))); return;
}

/* FUN_10002790 @ 0x10212790 (82 bytes, 28 insns) */
void f_10212790(void) {
  FTRACE(0x10212790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10212790 mov eax, dword ptr [0x102263c0] */
  EAX = (r32((uint32_t)(0x102263c0)));
  /* 10212795 sub esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021279b push esi */
  push32((uint32_t)(ESI));
  /* 1021279c push edi */
  push32((uint32_t)(EDI));
  /* 1021279d mov edi, dword ptr [esp + 0x10c] */
  EDI = (r32((uint32_t)(ESP + 0x10c)));
  /* 102127a4 push edi */
  push32((uint32_t)(EDI));
  /* 102127a5 push eax */
  push32((uint32_t)(EAX));
  /* 102127a6 call dword ptr [0x1021e088] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e088))), 0x102127acu);
  /* 102127ac mov esi, eax */
  ESI = (EAX);
  /* 102127ae test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102127b0 jne 0x102127d7 */
  if (!C.zf) goto L_102127d7;
  /* 102127b2 push edi */
  push32((uint32_t)(EDI));
  /* 102127b3 lea ecx, [esp + 0xc] */
  ECX = ((uint32_t)(ESP + 0xc));
  /* 102127b7 push 0x1021fef0 */
  push32((uint32_t)(0x1021fef0u));
  /* 102127bc push ecx */
  push32((uint32_t)(ECX));
  /* 102127bd call 0x10216e70 */
  push32(0x102127c2u); f_10216e70();
  /* 102127c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102127c5 lea edx, [esp + 8] */
  EDX = ((uint32_t)(ESP + 0x8));
  /* 102127c9 push esi */
  push32((uint32_t)(ESI));
  /* 102127ca push 0x1021fee0 */
  push32((uint32_t)(0x1021fee0u));
  /* 102127cf push edx */
  push32((uint32_t)(EDX));
  /* 102127d0 push esi */
  push32((uint32_t)(ESI));
  /* 102127d1 call dword ptr [0x1021e0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e0dc))), 0x102127d7u);
L_102127d7:;
  /* 102127d7 mov eax, esi */
  EAX = (ESI);
  /* 102127d9 pop edi */
  EDI = (pop32());
  /* 102127da pop esi */
  ESI = (pop32());
  /* 102127db add esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102127e1 ret  */
  ESPCHK(0x10212790u, _esp0);
  ESP += 4; return;
}

/* FUN_100027f0 @ 0x102127f0 (1844 bytes, 376 insns) */
void f_102127f0(void) {
  FTRACE(0x102127f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102127f0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102127f4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102127f5 jne 0x10212f1c */
  if (!C.zf) goto L_10212f1c;
  /* 102127fb push 0x10220644 */
  push32((uint32_t)(0x10220644u));
  /* 10212800 call dword ptr [0x1021e004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e004))), 0x10212806u);
  /* 10212806 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10212808 mov dword ptr [0x102263c0], eax */
  w32((uint32_t)(0x102263c0), (EAX));
  /* 1021280d jne 0x10212829 */
  if (!C.zf) goto L_10212829;
  /* 1021280f push eax */
  push32((uint32_t)(EAX));
  /* 10212810 push 0x1022063c */
  push32((uint32_t)(0x1022063cu));
  /* 10212815 push 0x10220624 */
  push32((uint32_t)(0x10220624u));
  /* 1021281a push eax */
  push32((uint32_t)(EAX));
  /* 1021281b call dword ptr [0x1021e0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e0dc))), 0x10212821u);
  /* 10212821 mov eax, 1 */
  EAX = (0x1u);
  /* 10212826 ret 0xc */
  ESPCHK(0x102127f0u, _esp0);
  ESP += 16; return;
L_10212829:;
  /* 10212829 push 0x10220614 */
  push32((uint32_t)(0x10220614u));
  /* 1021282e call 0x10212790 */
  push32(0x10212833u); f_10212790();
  /* 10212833 push 0x10220604 */
  push32((uint32_t)(0x10220604u));
  /* 10212838 mov dword ptr [0x102263c4], eax */
  w32((uint32_t)(0x102263c4), (EAX));
  /* 1021283d call 0x10212790 */
  push32(0x10212842u); f_10212790();
  /* 10212842 push 0x102205f4 */
  push32((uint32_t)(0x102205f4u));
  /* 10212847 mov dword ptr [0x102263c8], eax */
  w32((uint32_t)(0x102263c8), (EAX));
  /* 1021284c call 0x10212790 */
  push32(0x10212851u); f_10212790();
  /* 10212851 push 0x102205e8 */
  push32((uint32_t)(0x102205e8u));
  /* 10212856 mov dword ptr [0x102263cc], eax */
  w32((uint32_t)(0x102263cc), (EAX));
  /* 1021285b call 0x10212790 */
  push32(0x10212860u); f_10212790();
  /* 10212860 push 0x102205d8 */
  push32((uint32_t)(0x102205d8u));
  /* 10212865 mov dword ptr [0x102263d0], eax */
  w32((uint32_t)(0x102263d0), (EAX));
  /* 1021286a call 0x10212790 */
  push32(0x1021286fu); f_10212790();
  /* 1021286f push 0x102205c4 */
  push32((uint32_t)(0x102205c4u));
  /* 10212874 mov dword ptr [0x102263d4], eax */
  w32((uint32_t)(0x102263d4), (EAX));
  /* 10212879 call 0x10212790 */
  push32(0x1021287eu); f_10212790();
  /* 1021287e push 0x102205b4 */
  push32((uint32_t)(0x102205b4u));
  /* 10212883 mov dword ptr [0x102263d8], eax */
  w32((uint32_t)(0x102263d8), (EAX));
  /* 10212888 call 0x10212790 */
  push32(0x1021288du); f_10212790();
  /* 1021288d push 0x102205a4 */
  push32((uint32_t)(0x102205a4u));
  /* 10212892 mov dword ptr [0x102263dc], eax */
  w32((uint32_t)(0x102263dc), (EAX));
  /* 10212897 call 0x10212790 */
  push32(0x1021289cu); f_10212790();
  /* 1021289c push 0x10220590 */
  push32((uint32_t)(0x10220590u));
  /* 102128a1 mov dword ptr [0x102263e0], eax */
  w32((uint32_t)(0x102263e0), (EAX));
  /* 102128a6 call 0x10212790 */
  push32(0x102128abu); f_10212790();
  /* 102128ab push 0x1022057c */
  push32((uint32_t)(0x1022057cu));
  /* 102128b0 mov dword ptr [0x102263e4], eax */
  w32((uint32_t)(0x102263e4), (EAX));
  /* 102128b5 call 0x10212790 */
  push32(0x102128bau); f_10212790();
  /* 102128ba push 0x1022056c */
  push32((uint32_t)(0x1022056cu));
  /* 102128bf mov dword ptr [0x102263e8], eax */
  w32((uint32_t)(0x102263e8), (EAX));
  /* 102128c4 call 0x10212790 */
  push32(0x102128c9u); f_10212790();
  /* 102128c9 push 0x1022055c */
  push32((uint32_t)(0x1022055cu));
  /* 102128ce mov dword ptr [0x102263ec], eax */
  w32((uint32_t)(0x102263ec), (EAX));
  /* 102128d3 call 0x10212790 */
  push32(0x102128d8u); f_10212790();
  /* 102128d8 push 0x1022054c */
  push32((uint32_t)(0x1022054cu));
  /* 102128dd mov dword ptr [0x102263f0], eax */
  w32((uint32_t)(0x102263f0), (EAX));
  /* 102128e2 call 0x10212790 */
  push32(0x102128e7u); f_10212790();
  /* 102128e7 push 0x1022053c */
  push32((uint32_t)(0x1022053cu));
  /* 102128ec mov dword ptr [0x102263f4], eax */
  w32((uint32_t)(0x102263f4), (EAX));
  /* 102128f1 call 0x10212790 */
  push32(0x102128f6u); f_10212790();
  /* 102128f6 push 0x1022052c */
  push32((uint32_t)(0x1022052cu));
  /* 102128fb mov dword ptr [0x102263f8], eax */
  w32((uint32_t)(0x102263f8), (EAX));
  /* 10212900 call 0x10212790 */
  push32(0x10212905u); f_10212790();
  /* 10212905 push 0x1022051c */
  push32((uint32_t)(0x1022051cu));
  /* 1021290a mov dword ptr [0x102263fc], eax */
  w32((uint32_t)(0x102263fc), (EAX));
  /* 1021290f call 0x10212790 */
  push32(0x10212914u); f_10212790();
  /* 10212914 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10212917 mov dword ptr [0x10226400], eax */
  w32((uint32_t)(0x10226400), (EAX));
  /* 1021291c push 0x1022050c */
  push32((uint32_t)(0x1022050cu));
  /* 10212921 call 0x10212790 */
  push32(0x10212926u); f_10212790();
  /* 10212926 push 0x102204fc */
  push32((uint32_t)(0x102204fcu));
  /* 1021292b mov dword ptr [0x10226404], eax */
  w32((uint32_t)(0x10226404), (EAX));
  /* 10212930 call 0x10212790 */
  push32(0x10212935u); f_10212790();
  /* 10212935 push 0x102204e8 */
  push32((uint32_t)(0x102204e8u));
  /* 1021293a mov dword ptr [0x10226408], eax */
  w32((uint32_t)(0x10226408), (EAX));
  /* 1021293f call 0x10212790 */
  push32(0x10212944u); f_10212790();
  /* 10212944 push 0x102204e0 */
  push32((uint32_t)(0x102204e0u));
  /* 10212949 mov dword ptr [0x1022640c], eax */
  w32((uint32_t)(0x1022640c), (EAX));
  /* 1021294e call 0x10212790 */
  push32(0x10212953u); f_10212790();
  /* 10212953 push 0x102204d0 */
  push32((uint32_t)(0x102204d0u));
  /* 10212958 mov dword ptr [0x10226410], eax */
  w32((uint32_t)(0x10226410), (EAX));
  /* 1021295d call 0x10212790 */
  push32(0x10212962u); f_10212790();
  /* 10212962 push 0x102204c0 */
  push32((uint32_t)(0x102204c0u));
  /* 10212967 mov dword ptr [0x10226414], eax */
  w32((uint32_t)(0x10226414), (EAX));
  /* 1021296c call 0x10212790 */
  push32(0x10212971u); f_10212790();
  /* 10212971 push 0x102204b4 */
  push32((uint32_t)(0x102204b4u));
  /* 10212976 mov dword ptr [0x10226418], eax */
  w32((uint32_t)(0x10226418), (EAX));
  /* 1021297b call 0x10212790 */
  push32(0x10212980u); f_10212790();
  /* 10212980 push 0x102204a4 */
  push32((uint32_t)(0x102204a4u));
  /* 10212985 mov dword ptr [0x1022641c], eax */
  w32((uint32_t)(0x1022641c), (EAX));
  /* 1021298a call 0x10212790 */
  push32(0x1021298fu); f_10212790();
  /* 1021298f push 0x1022049c */
  push32((uint32_t)(0x1022049cu));
  /* 10212994 mov dword ptr [0x10226420], eax */
  w32((uint32_t)(0x10226420), (EAX));
  /* 10212999 call 0x10212790 */
  push32(0x1021299eu); f_10212790();
  /* 1021299e push 0x1022048c */
  push32((uint32_t)(0x1022048cu));
  /* 102129a3 mov dword ptr [0x10226438], eax */
  w32((uint32_t)(0x10226438), (EAX));
  /* 102129a8 call 0x10212790 */
  push32(0x102129adu); f_10212790();
  /* 102129ad push 0x1022047c */
  push32((uint32_t)(0x1022047cu));
  /* 102129b2 mov dword ptr [0x1022643c], eax */
  w32((uint32_t)(0x1022643c), (EAX));
  /* 102129b7 call 0x10212790 */
  push32(0x102129bcu); f_10212790();
  /* 102129bc push 0x10220470 */
  push32((uint32_t)(0x10220470u));
  /* 102129c1 mov dword ptr [0x10226440], eax */
  w32((uint32_t)(0x10226440), (EAX));
  /* 102129c6 call 0x10212790 */
  push32(0x102129cbu); f_10212790();
  /* 102129cb push 0x10220460 */
  push32((uint32_t)(0x10220460u));
  /* 102129d0 mov dword ptr [0x10226444], eax */
  w32((uint32_t)(0x10226444), (EAX));
  /* 102129d5 call 0x10212790 */
  push32(0x102129dau); f_10212790();
  /* 102129da push 0x10220454 */
  push32((uint32_t)(0x10220454u));
  /* 102129df mov dword ptr [0x10226448], eax */
  w32((uint32_t)(0x10226448), (EAX));
  /* 102129e4 call 0x10212790 */
  push32(0x102129e9u); f_10212790();
  /* 102129e9 push 0x10220444 */
  push32((uint32_t)(0x10220444u));
  /* 102129ee mov dword ptr [0x10226464], eax */
  w32((uint32_t)(0x10226464), (EAX));
  /* 102129f3 call 0x10212790 */
  push32(0x102129f8u); f_10212790();
  /* 102129f8 push 0x1022043c */
  push32((uint32_t)(0x1022043cu));
  /* 102129fd mov dword ptr [0x1022644c], eax */
  w32((uint32_t)(0x1022644c), (EAX));
  /* 10212a02 call 0x10212790 */
  push32(0x10212a07u); f_10212790();
  /* 10212a07 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10212a0a mov dword ptr [0x10226450], eax */
  w32((uint32_t)(0x10226450), (EAX));
  /* 10212a0f push 0x1022042c */
  push32((uint32_t)(0x1022042cu));
  /* 10212a14 call 0x10212790 */
  push32(0x10212a19u); f_10212790();
  /* 10212a19 push 0x1022041c */
  push32((uint32_t)(0x1022041cu));
  /* 10212a1e mov dword ptr [0x10226454], eax */
  w32((uint32_t)(0x10226454), (EAX));
  /* 10212a23 call 0x10212790 */
  push32(0x10212a28u); f_10212790();
  /* 10212a28 push 0x1022040c */
  push32((uint32_t)(0x1022040cu));
  /* 10212a2d mov dword ptr [0x10226458], eax */
  w32((uint32_t)(0x10226458), (EAX));
  /* 10212a32 call 0x10212790 */
  push32(0x10212a37u); f_10212790();
  /* 10212a37 push 0x10220400 */
  push32((uint32_t)(0x10220400u));
  /* 10212a3c mov dword ptr [0x1022645c], eax */
  w32((uint32_t)(0x1022645c), (EAX));
  /* 10212a41 call 0x10212790 */
  push32(0x10212a46u); f_10212790();
  /* 10212a46 push 0x102203f8 */
  push32((uint32_t)(0x102203f8u));
  /* 10212a4b mov dword ptr [0x10226460], eax */
  w32((uint32_t)(0x10226460), (EAX));
  /* 10212a50 call 0x10212790 */
  push32(0x10212a55u); f_10212790();
  /* 10212a55 push 0x102203e8 */
  push32((uint32_t)(0x102203e8u));
  /* 10212a5a mov dword ptr [0x10226468], eax */
  w32((uint32_t)(0x10226468), (EAX));
  /* 10212a5f call 0x10212790 */
  push32(0x10212a64u); f_10212790();
  /* 10212a64 push 0x102203d8 */
  push32((uint32_t)(0x102203d8u));
  /* 10212a69 mov dword ptr [0x1022646c], eax */
  w32((uint32_t)(0x1022646c), (EAX));
  /* 10212a6e call 0x10212790 */
  push32(0x10212a73u); f_10212790();
  /* 10212a73 push 0x102203c8 */
  push32((uint32_t)(0x102203c8u));
  /* 10212a78 mov dword ptr [0x10226470], eax */
  w32((uint32_t)(0x10226470), (EAX));
  /* 10212a7d call 0x10212790 */
  push32(0x10212a82u); f_10212790();
  /* 10212a82 push 0x102203b8 */
  push32((uint32_t)(0x102203b8u));
  /* 10212a87 mov dword ptr [0x10226474], eax */
  w32((uint32_t)(0x10226474), (EAX));
  /* 10212a8c call 0x10212790 */
  push32(0x10212a91u); f_10212790();
  /* 10212a91 push 0x102203ac */
  push32((uint32_t)(0x102203acu));
  /* 10212a96 mov dword ptr [0x10226478], eax */
  w32((uint32_t)(0x10226478), (EAX));
  /* 10212a9b call 0x10212790 */
  push32(0x10212aa0u); f_10212790();
  /* 10212aa0 push 0x102203a0 */
  push32((uint32_t)(0x102203a0u));
  /* 10212aa5 mov dword ptr [0x1022647c], eax */
  w32((uint32_t)(0x1022647c), (EAX));
  /* 10212aaa call 0x10212790 */
  push32(0x10212aafu); f_10212790();
  /* 10212aaf push 0x10220390 */
  push32((uint32_t)(0x10220390u));
  /* 10212ab4 mov dword ptr [0x10226480], eax */
  w32((uint32_t)(0x10226480), (EAX));
  /* 10212ab9 call 0x10212790 */
  push32(0x10212abeu); f_10212790();
  /* 10212abe push 0x10220384 */
  push32((uint32_t)(0x10220384u));
  /* 10212ac3 mov dword ptr [0x10226484], eax */
  w32((uint32_t)(0x10226484), (EAX));
  /* 10212ac8 call 0x10212790 */
  push32(0x10212acdu); f_10212790();
  /* 10212acd push 0x10220378 */
  push32((uint32_t)(0x10220378u));
  /* 10212ad2 mov dword ptr [0x10226488], eax */
  w32((uint32_t)(0x10226488), (EAX));
  /* 10212ad7 call 0x10212790 */
  push32(0x10212adcu); f_10212790();
  /* 10212adc push 0x1022036c */
  push32((uint32_t)(0x1022036cu));
  /* 10212ae1 mov dword ptr [0x1022648c], eax */
  w32((uint32_t)(0x1022648c), (EAX));
  /* 10212ae6 call 0x10212790 */
  push32(0x10212aebu); f_10212790();
  /* 10212aeb push 0x10220360 */
  push32((uint32_t)(0x10220360u));
  /* 10212af0 mov dword ptr [0x102261c0], eax */
  w32((uint32_t)(0x102261c0), (EAX));
  /* 10212af5 call 0x10212790 */
  push32(0x10212afau); f_10212790();
  /* 10212afa add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10212afd mov dword ptr [0x10226490], eax */
  w32((uint32_t)(0x10226490), (EAX));
  /* 10212b02 push 0x10220354 */
  push32((uint32_t)(0x10220354u));
  /* 10212b07 call 0x10212790 */
  push32(0x10212b0cu); f_10212790();
  /* 10212b0c push 0x10220348 */
  push32((uint32_t)(0x10220348u));
  /* 10212b11 mov dword ptr [0x10226494], eax */
  w32((uint32_t)(0x10226494), (EAX));
  /* 10212b16 call 0x10212790 */
  push32(0x10212b1bu); f_10212790();
  /* 10212b1b push 0x10220338 */
  push32((uint32_t)(0x10220338u));
  /* 10212b20 mov dword ptr [0x10226498], eax */
  w32((uint32_t)(0x10226498), (EAX));
  /* 10212b25 call 0x10212790 */
  push32(0x10212b2au); f_10212790();
  /* 10212b2a push 0x1022032c */
  push32((uint32_t)(0x1022032cu));
  /* 10212b2f mov dword ptr [0x1022649c], eax */
  w32((uint32_t)(0x1022649c), (EAX));
  /* 10212b34 call 0x10212790 */
  push32(0x10212b39u); f_10212790();
  /* 10212b39 push 0x10220320 */
  push32((uint32_t)(0x10220320u));
  /* 10212b3e mov dword ptr [0x102264a0], eax */
  w32((uint32_t)(0x102264a0), (EAX));
  /* 10212b43 call 0x10212790 */
  push32(0x10212b48u); f_10212790();
  /* 10212b48 mov dword ptr [0x102264a4], eax */
  w32((uint32_t)(0x102264a4), (EAX));
  /* 10212b4d push 0x10220310 */
  push32((uint32_t)(0x10220310u));
  /* 10212b52 call 0x10212790 */
  push32(0x10212b57u); f_10212790();
  /* 10212b57 push 0x10220300 */
  push32((uint32_t)(0x10220300u));
  /* 10212b5c mov dword ptr [0x102264a8], eax */
  w32((uint32_t)(0x102264a8), (EAX));
  /* 10212b61 call 0x10212790 */
  push32(0x10212b66u); f_10212790();
  /* 10212b66 push 0x102202f4 */
  push32((uint32_t)(0x102202f4u));
  /* 10212b6b mov dword ptr [0x102264ac], eax */
  w32((uint32_t)(0x102264ac), (EAX));
  /* 10212b70 call 0x10212790 */
  push32(0x10212b75u); f_10212790();
  /* 10212b75 push 0x102202ec */
  push32((uint32_t)(0x102202ecu));
  /* 10212b7a mov dword ptr [0x102264b0], eax */
  w32((uint32_t)(0x102264b0), (EAX));
  /* 10212b7f call 0x10212790 */
  push32(0x10212b84u); f_10212790();
  /* 10212b84 push 0x102202dc */
  push32((uint32_t)(0x102202dcu));
  /* 10212b89 mov dword ptr [0x102264b4], eax */
  w32((uint32_t)(0x102264b4), (EAX));
  /* 10212b8e call 0x10212790 */
  push32(0x10212b93u); f_10212790();
  /* 10212b93 push 0x102202d4 */
  push32((uint32_t)(0x102202d4u));
  /* 10212b98 mov dword ptr [0x102264b8], eax */
  w32((uint32_t)(0x102264b8), (EAX));
  /* 10212b9d call 0x10212790 */
  push32(0x10212ba2u); f_10212790();
  /* 10212ba2 push 0x102202c8 */
  push32((uint32_t)(0x102202c8u));
  /* 10212ba7 mov dword ptr [0x102264bc], eax */
  w32((uint32_t)(0x102264bc), (EAX));
  /* 10212bac call 0x10212790 */
  push32(0x10212bb1u); f_10212790();
  /* 10212bb1 push 0x102202c0 */
  push32((uint32_t)(0x102202c0u));
  /* 10212bb6 mov dword ptr [0x102264c0], eax */
  w32((uint32_t)(0x102264c0), (EAX));
  /* 10212bbb call 0x10212790 */
  push32(0x10212bc0u); f_10212790();
  /* 10212bc0 push 0x102202ac */
  push32((uint32_t)(0x102202acu));
  /* 10212bc5 mov dword ptr [0x102264c4], eax */
  w32((uint32_t)(0x102264c4), (EAX));
  /* 10212bca call 0x10212790 */
  push32(0x10212bcfu); f_10212790();
  /* 10212bcf push 0x102202a0 */
  push32((uint32_t)(0x102202a0u));
  /* 10212bd4 mov dword ptr [0x10223618], eax */
  w32((uint32_t)(0x10223618), (EAX));
  /* 10212bd9 call 0x10212790 */
  push32(0x10212bdeu); f_10212790();
  /* 10212bde push 0x10220294 */
  push32((uint32_t)(0x10220294u));
  /* 10212be3 mov dword ptr [0x102264d0], eax */
  w32((uint32_t)(0x102264d0), (EAX));
  /* 10212be8 call 0x10212790 */
  push32(0x10212bedu); f_10212790();
  /* 10212bed add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10212bf0 mov dword ptr [0x102264cc], eax */
  w32((uint32_t)(0x102264cc), (EAX));
  /* 10212bf5 push 0x10220280 */
  push32((uint32_t)(0x10220280u));
  /* 10212bfa call 0x10212790 */
  push32(0x10212bffu); f_10212790();
  /* 10212bff push 0x10220270 */
  push32((uint32_t)(0x10220270u));
  /* 10212c04 mov dword ptr [0x102264d4], eax */
  w32((uint32_t)(0x102264d4), (EAX));
  /* 10212c09 call 0x10212790 */
  push32(0x10212c0eu); f_10212790();
  /* 10212c0e push 0x10220260 */
  push32((uint32_t)(0x10220260u));
  /* 10212c13 mov dword ptr [0x102264d8], eax */
  w32((uint32_t)(0x102264d8), (EAX));
  /* 10212c18 call 0x10212790 */
  push32(0x10212c1du); f_10212790();
  /* 10212c1d push 0x10220250 */
  push32((uint32_t)(0x10220250u));
  /* 10212c22 mov dword ptr [0x102264dc], eax */
  w32((uint32_t)(0x102264dc), (EAX));
  /* 10212c27 call 0x10212790 */
  push32(0x10212c2cu); f_10212790();
  /* 10212c2c push 0x10220244 */
  push32((uint32_t)(0x10220244u));
  /* 10212c31 mov dword ptr [0x10226428], eax */
  w32((uint32_t)(0x10226428), (EAX));
  /* 10212c36 call 0x10212790 */
  push32(0x10212c3bu); f_10212790();
  /* 10212c3b push 0x10220234 */
  push32((uint32_t)(0x10220234u));
  /* 10212c40 mov dword ptr [0x10226424], eax */
  w32((uint32_t)(0x10226424), (EAX));
  /* 10212c45 call 0x10212790 */
  push32(0x10212c4au); f_10212790();
  /* 10212c4a push 0x10220220 */
  push32((uint32_t)(0x10220220u));
  /* 10212c4f mov dword ptr [0x1022642c], eax */
  w32((uint32_t)(0x1022642c), (EAX));
  /* 10212c54 call 0x10212790 */
  push32(0x10212c59u); f_10212790();
  /* 10212c59 push 0x10220208 */
  push32((uint32_t)(0x10220208u));
  /* 10212c5e mov dword ptr [0x10226430], eax */
  w32((uint32_t)(0x10226430), (EAX));
  /* 10212c63 call 0x10212790 */
  push32(0x10212c68u); f_10212790();
  /* 10212c68 push 0x102201f8 */
  push32((uint32_t)(0x102201f8u));
  /* 10212c6d mov dword ptr [0x10226434], eax */
  w32((uint32_t)(0x10226434), (EAX));
  /* 10212c72 call 0x10212790 */
  push32(0x10212c77u); f_10212790();
  /* 10212c77 push 0x102201e0 */
  push32((uint32_t)(0x102201e0u));
  /* 10212c7c mov dword ptr [0x102264f8], eax */
  w32((uint32_t)(0x102264f8), (EAX));
  /* 10212c81 call 0x10212790 */
  push32(0x10212c86u); f_10212790();
  /* 10212c86 push 0x102201d0 */
  push32((uint32_t)(0x102201d0u));
  /* 10212c8b mov dword ptr [0x10226528], eax */
  w32((uint32_t)(0x10226528), (EAX));
  /* 10212c90 call 0x10212790 */
  push32(0x10212c95u); f_10212790();
  /* 10212c95 push 0x102201c8 */
  push32((uint32_t)(0x102201c8u));
  /* 10212c9a mov dword ptr [0x102264f0], eax */
  w32((uint32_t)(0x102264f0), (EAX));
  /* 10212c9f call 0x10212790 */
  push32(0x10212ca4u); f_10212790();
  /* 10212ca4 push 0x102201b8 */
  push32((uint32_t)(0x102201b8u));
  /* 10212ca9 mov dword ptr [0x102264fc], eax */
  w32((uint32_t)(0x102264fc), (EAX));
  /* 10212cae call 0x10212790 */
  push32(0x10212cb3u); f_10212790();
  /* 10212cb3 push 0x102201ac */
  push32((uint32_t)(0x102201acu));
  /* 10212cb8 mov dword ptr [0x10226548], eax */
  w32((uint32_t)(0x10226548), (EAX));
  /* 10212cbd call 0x10212790 */
  push32(0x10212cc2u); f_10212790();
  /* 10212cc2 push 0x102201a4 */
  push32((uint32_t)(0x102201a4u));
  /* 10212cc7 mov dword ptr [0x102264e0], eax */
  w32((uint32_t)(0x102264e0), (EAX));
  /* 10212ccc call 0x10212790 */
  push32(0x10212cd1u); f_10212790();
  /* 10212cd1 push 0x10220198 */
  push32((uint32_t)(0x10220198u));
  /* 10212cd6 mov dword ptr [0x102264e4], eax */
  w32((uint32_t)(0x102264e4), (EAX));
  /* 10212cdb call 0x10212790 */
  push32(0x10212ce0u); f_10212790();
  /* 10212ce0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10212ce3 mov dword ptr [0x102264e8], eax */
  w32((uint32_t)(0x102264e8), (EAX));
  /* 10212ce8 push 0x10220188 */
  push32((uint32_t)(0x10220188u));
  /* 10212ced call 0x10212790 */
  push32(0x10212cf2u); f_10212790();
  /* 10212cf2 push 0x10220174 */
  push32((uint32_t)(0x10220174u));
  /* 10212cf7 mov dword ptr [0x102264ec], eax */
  w32((uint32_t)(0x102264ec), (EAX));
  /* 10212cfc call 0x10212790 */
  push32(0x10212d01u); f_10212790();
  /* 10212d01 push 0x10220158 */
  push32((uint32_t)(0x10220158u));
  /* 10212d06 mov dword ptr [0x102264f4], eax */
  w32((uint32_t)(0x102264f4), (EAX));
  /* 10212d0b call 0x10212790 */
  push32(0x10212d10u); f_10212790();
  /* 10212d10 push 0x10220144 */
  push32((uint32_t)(0x10220144u));
  /* 10212d15 mov dword ptr [0x10226500], eax */
  w32((uint32_t)(0x10226500), (EAX));
  /* 10212d1a call 0x10212790 */
  push32(0x10212d1fu); f_10212790();
  /* 10212d1f push 0x10220138 */
  push32((uint32_t)(0x10220138u));
  /* 10212d24 mov dword ptr [0x10226504], eax */
  w32((uint32_t)(0x10226504), (EAX));
  /* 10212d29 call 0x10212790 */
  push32(0x10212d2eu); f_10212790();
  /* 10212d2e push 0x10220128 */
  push32((uint32_t)(0x10220128u));
  /* 10212d33 mov dword ptr [0x1022653c], eax */
  w32((uint32_t)(0x1022653c), (EAX));
  /* 10212d38 call 0x10212790 */
  push32(0x10212d3du); f_10212790();
  /* 10212d3d push 0x1022011c */
  push32((uint32_t)(0x1022011cu));
  /* 10212d42 mov dword ptr [0x10226540], eax */
  w32((uint32_t)(0x10226540), (EAX));
  /* 10212d47 call 0x10212790 */
  push32(0x10212d4cu); f_10212790();
  /* 10212d4c push 0x10220110 */
  push32((uint32_t)(0x10220110u));
  /* 10212d51 mov dword ptr [0x10226544], eax */
  w32((uint32_t)(0x10226544), (EAX));
  /* 10212d56 call 0x10212790 */
  push32(0x10212d5bu); f_10212790();
  /* 10212d5b push 0x102200f8 */
  push32((uint32_t)(0x102200f8u));
  /* 10212d60 mov dword ptr [0x1022654c], eax */
  w32((uint32_t)(0x1022654c), (EAX));
  /* 10212d65 call 0x10212790 */
  push32(0x10212d6au); f_10212790();
  /* 10212d6a push 0x102200dc */
  push32((uint32_t)(0x102200dcu));
  /* 10212d6f mov dword ptr [0x10226508], eax */
  w32((uint32_t)(0x10226508), (EAX));
  /* 10212d74 call 0x10212790 */
  push32(0x10212d79u); f_10212790();
  /* 10212d79 push 0x102200c0 */
  push32((uint32_t)(0x102200c0u));
  /* 10212d7e mov dword ptr [0x1022650c], eax */
  w32((uint32_t)(0x1022650c), (EAX));
  /* 10212d83 call 0x10212790 */
  push32(0x10212d88u); f_10212790();
  /* 10212d88 push 0x102200a8 */
  push32((uint32_t)(0x102200a8u));
  /* 10212d8d mov dword ptr [0x10226510], eax */
  w32((uint32_t)(0x10226510), (EAX));
  /* 10212d92 call 0x10212790 */
  push32(0x10212d97u); f_10212790();
  /* 10212d97 push 0x10220090 */
  push32((uint32_t)(0x10220090u));
  /* 10212d9c mov dword ptr [0x10226514], eax */
  w32((uint32_t)(0x10226514), (EAX));
  /* 10212da1 call 0x10212790 */
  push32(0x10212da6u); f_10212790();
  /* 10212da6 push 0x10220084 */
  push32((uint32_t)(0x10220084u));
  /* 10212dab mov dword ptr [0x10226518], eax */
  w32((uint32_t)(0x10226518), (EAX));
  /* 10212db0 call 0x10212790 */
  push32(0x10212db5u); f_10212790();
  /* 10212db5 push 0x10220078 */
  push32((uint32_t)(0x10220078u));
  /* 10212dba mov dword ptr [0x1022651c], eax */
  w32((uint32_t)(0x1022651c), (EAX));
  /* 10212dbf call 0x10212790 */
  push32(0x10212dc4u); f_10212790();
  /* 10212dc4 push 0x10220068 */
  push32((uint32_t)(0x10220068u));
  /* 10212dc9 mov dword ptr [0x10226520], eax */
  w32((uint32_t)(0x10226520), (EAX));
  /* 10212dce call 0x10212790 */
  push32(0x10212dd3u); f_10212790();
  /* 10212dd3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10212dd6 mov dword ptr [0x10226524], eax */
  w32((uint32_t)(0x10226524), (EAX));
  /* 10212ddb push 0x1022005c */
  push32((uint32_t)(0x1022005cu));
  /* 10212de0 call 0x10212790 */
  push32(0x10212de5u); f_10212790();
  /* 10212de5 push 0x10220050 */
  push32((uint32_t)(0x10220050u));
  /* 10212dea mov dword ptr [0x1022652c], eax */
  w32((uint32_t)(0x1022652c), (EAX));
  /* 10212def call 0x10212790 */
  push32(0x10212df4u); f_10212790();
  /* 10212df4 push 0x10220044 */
  push32((uint32_t)(0x10220044u));
  /* 10212df9 mov dword ptr [0x10226530], eax */
  w32((uint32_t)(0x10226530), (EAX));
  /* 10212dfe call 0x10212790 */
  push32(0x10212e03u); f_10212790();
  /* 10212e03 push 0x10220034 */
  push32((uint32_t)(0x10220034u));
  /* 10212e08 mov dword ptr [0x10226550], eax */
  w32((uint32_t)(0x10226550), (EAX));
  /* 10212e0d call 0x10212790 */
  push32(0x10212e12u); f_10212790();
  /* 10212e12 push 0x10220028 */
  push32((uint32_t)(0x10220028u));
  /* 10212e17 mov dword ptr [0x10226554], eax */
  w32((uint32_t)(0x10226554), (EAX));
  /* 10212e1c call 0x10212790 */
  push32(0x10212e21u); f_10212790();
  /* 10212e21 push 0x1022001c */
  push32((uint32_t)(0x1022001cu));
  /* 10212e26 mov dword ptr [0x10226558], eax */
  w32((uint32_t)(0x10226558), (EAX));
  /* 10212e2b call 0x10212790 */
  push32(0x10212e30u); f_10212790();
  /* 10212e30 push 0x10220010 */
  push32((uint32_t)(0x10220010u));
  /* 10212e35 mov dword ptr [0x1022655c], eax */
  w32((uint32_t)(0x1022655c), (EAX));
  /* 10212e3a call 0x10212790 */
  push32(0x10212e3fu); f_10212790();
  /* 10212e3f push 0x10220000 */
  push32((uint32_t)(0x10220000u));
  /* 10212e44 mov dword ptr [0x10226560], eax */
  w32((uint32_t)(0x10226560), (EAX));
  /* 10212e49 call 0x10212790 */
  push32(0x10212e4eu); f_10212790();
  /* 10212e4e push 0x1021fff0 */
  push32((uint32_t)(0x1021fff0u));
  /* 10212e53 mov dword ptr [0x10226564], eax */
  w32((uint32_t)(0x10226564), (EAX));
  /* 10212e58 call 0x10212790 */
  push32(0x10212e5du); f_10212790();
  /* 10212e5d push 0x1021ffdc */
  push32((uint32_t)(0x1021ffdcu));
  /* 10212e62 mov dword ptr [0x1022656c], eax */
  w32((uint32_t)(0x1022656c), (EAX));
  /* 10212e67 call 0x10212790 */
  push32(0x10212e6cu); f_10212790();
  /* 10212e6c mov dword ptr [0x10226568], eax */
  w32((uint32_t)(0x10226568), (EAX));
  /* 10212e71 push 0x1021ffc4 */
  push32((uint32_t)(0x1021ffc4u));
  /* 10212e76 call 0x10212790 */
  push32(0x10212e7bu); f_10212790();
  /* 10212e7b push 0x1021ffac */
  push32((uint32_t)(0x1021ffacu));
  /* 10212e80 mov dword ptr [0x102238b0], eax */
  w32((uint32_t)(0x102238b0), (EAX));
  /* 10212e85 call 0x10212790 */
  push32(0x10212e8au); f_10212790();
  /* 10212e8a push 0x1021ff9c */
  push32((uint32_t)(0x1021ff9cu));
  /* 10212e8f mov dword ptr [0x10223710], eax */
  w32((uint32_t)(0x10223710), (EAX));
  /* 10212e94 call 0x10212790 */
  push32(0x10212e99u); f_10212790();
  /* 10212e99 push 0x1021ff8c */
  push32((uint32_t)(0x1021ff8cu));
  /* 10212e9e mov dword ptr [0x10226570], eax */
  w32((uint32_t)(0x10226570), (EAX));
  /* 10212ea3 call 0x10212790 */
  push32(0x10212ea8u); f_10212790();
  /* 10212ea8 push 0x1021ff7c */
  push32((uint32_t)(0x1021ff7cu));
  /* 10212ead mov dword ptr [0x10226534], eax */
  w32((uint32_t)(0x10226534), (EAX));
  /* 10212eb2 call 0x10212790 */
  push32(0x10212eb7u); f_10212790();
  /* 10212eb7 push 0x1021ff6c */
  push32((uint32_t)(0x1021ff6cu));
  /* 10212ebc mov dword ptr [0x10226538], eax */
  w32((uint32_t)(0x10226538), (EAX));
  /* 10212ec1 call 0x10212790 */
  push32(0x10212ec6u); f_10212790();
  /* 10212ec6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10212ec9 mov dword ptr [0x10226290], eax */
  w32((uint32_t)(0x10226290), (EAX));
  /* 10212ece push 0x1021ff5c */
  push32((uint32_t)(0x1021ff5cu));
  /* 10212ed3 call 0x10212790 */
  push32(0x10212ed8u); f_10212790();
  /* 10212ed8 push 0x1021ff4c */
  push32((uint32_t)(0x1021ff4cu));
  /* 10212edd mov dword ptr [0x10226248], eax */
  w32((uint32_t)(0x10226248), (EAX));
  /* 10212ee2 call 0x10212790 */
  push32(0x10212ee7u); f_10212790();
  /* 10212ee7 push 0x1021ff3c */
  push32((uint32_t)(0x1021ff3cu));
  /* 10212eec mov dword ptr [0x10225fa0], eax */
  w32((uint32_t)(0x10225fa0), (EAX));
  /* 10212ef1 call 0x10212790 */
  push32(0x10212ef6u); f_10212790();
  /* 10212ef6 push 0x1021ff2c */
  push32((uint32_t)(0x1021ff2cu));
  /* 10212efb mov dword ptr [0x10223910], eax */
  w32((uint32_t)(0x10223910), (EAX));
  /* 10212f00 call 0x10212790 */
  push32(0x10212f05u); f_10212790();
  /* 10212f05 push 0x1021ff18 */
  push32((uint32_t)(0x1021ff18u));
  /* 10212f0a mov dword ptr [0x10226228], eax */
  w32((uint32_t)(0x10226228), (EAX));
  /* 10212f0f call 0x10212790 */
  push32(0x10212f14u); f_10212790();
  /* 10212f14 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10212f17 mov dword ptr [0x10223928], eax */
  w32((uint32_t)(0x10223928), (EAX));
L_10212f1c:;
  /* 10212f1c mov eax, 1 */
  EAX = (0x1u);
  /* 10212f21 ret 0xc */
  ESPCHK(0x102127f0u, _esp0);
  ESP += 16; return;
}

/* FUN_10002f30 @ 0x10212f30 (34 bytes, 10 insns) */
void f_10212f30(void) {
  FTRACE(0x10212f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10212f30 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10212f34 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10212f38 push eax */
  push32((uint32_t)(EAX));
  /* 10212f39 push ecx */
  push32((uint32_t)(ECX));
  /* 10212f3a push 0x10220650 */
  push32((uint32_t)(0x10220650u));
  /* 10212f3f push 0x10223788 */
  push32((uint32_t)(0x10223788u));
  /* 10212f44 call 0x10216e70 */
  push32(0x10212f49u); f_10216e70();
  /* 10212f49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10212f4c mov eax, 0x10223788 */
  EAX = (0x10223788u);
  /* 10212f51 ret  */
  ESPCHK(0x10212f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f60 @ 0x10212f60 (45 bytes, 16 insns) */
void f_10212f60(void) {
  FTRACE(0x10212f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10212f60 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10212f64 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10212f68 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10212f6d push eax */
  push32((uint32_t)(EAX));
  /* 10212f6e push ecx */
  push32((uint32_t)(ECX));
  /* 10212f6f call 0x10212740 */
  push32(0x10212f74u); f_10212740();
  /* 10212f74 mov ecx, eax */
  ECX = (EAX);
  /* 10212f76 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10212f7a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10212f7d lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10212f80 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10212f83 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10212f86 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10212f89 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10212f8a idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10212f8c ret  */
  ESPCHK(0x10212f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f90 @ 0x10212f90 (171 bytes, 77 insns) */
void f_10212f90(void) {
  FTRACE(0x10212f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10212f90 push ebx */
  push32((uint32_t)(EBX));
  /* 10212f91 push ebp */
  push32((uint32_t)(EBP));
  /* 10212f92 push esi */
  push32((uint32_t)(ESI));
  /* 10212f93 push edi */
  push32((uint32_t)(EDI));
  /* 10212f94 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 10212f98 push edi */
  push32((uint32_t)(EDI));
  /* 10212f99 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10212f9fu);
  /* 10212f9f mov esi, dword ptr [esp + 0x1c] */
  ESI = (r32((uint32_t)(ESP + 0x1c)));
  /* 10212fa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10212fa6 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10212fa8 jl 0x10212fb1 */
  if ((C.sf!=C.of)) goto L_10212fb1;
  /* 10212faa pop edi */
  EDI = (pop32());
  /* 10212fab pop esi */
  ESI = (pop32());
  /* 10212fac pop ebp */
  EBP = (pop32());
  /* 10212fad mov al, 1 */
  AL = (0x1u);
  /* 10212faf pop ebx */
  EBX = (pop32());
  /* 10212fb0 ret  */
  ESPCHK(0x10212f90u, _esp0);
  ESP += 4; return;
L_10212fb1:;
  /* 10212fb1 push edi */
  push32((uint32_t)(EDI));
  /* 10212fb2 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10212fb8u);
  /* 10212fb8 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 10212fbc sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10212fbe push esi */
  push32((uint32_t)(ESI));
  /* 10212fbf push edi */
  push32((uint32_t)(EDI));
  /* 10212fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10212fc1 mov dword ptr [esp + 0x24], esi */
  w32((uint32_t)(ESP + 0x24), (ESI));
  /* 10212fc5 call 0x10212f60 */
  push32(0x10212fcau); f_10212f60();
  /* 10212fca push ebp */
  push32((uint32_t)(EBP));
  /* 10212fcb mov ebx, eax */
  EBX = (EAX);
  /* 10212fcd call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10212fd3u);
  /* 10212fd3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10212fd6 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10212fd8 jle 0x10213034 */
  if ((C.zf||C.sf!=C.of)) goto L_10213034;
  /* 10212fda cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10212fe0 jle 0x10213034 */
  if ((C.zf||C.sf!=C.of)) goto L_10213034;
  /* 10212fe2 mov eax, 0x45e7b273 */
  EAX = (0x45e7b273u);
  /* 10212fe7 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10212fe9 imul ebx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(EBX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10212feb sar edx, 0xc */
  EDX = (sh_sar((uint32_t)(EDX), (0xcu)&0x1f, 32));
  /* 10212fee mov eax, edx */
  EAX = (EDX);
  /* 10212ff0 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 10212ff3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10212ff5 mov ebx, edx */
  EBX = (EDX);
L_10212ff7:;
  /* 10212ff7 cmp ebx, 0xf */
  { uint32_t _a=(EBX),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10212ffa mov eax, 0xf */
  EAX = (0xfu);
  /* 10212fff jg 0x10213003 */
  if ((!C.zf&&C.sf==C.of)) goto L_10213003;
  /* 10213001 mov eax, ebx */
  EAX = (EBX);
L_10213003:;
  /* 10213003 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10213005 jge 0x10213016 */
  if ((C.sf==C.of)) goto L_10213016;
  /* 10213007 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10213009 push ebp */
  push32((uint32_t)(EBP));
  /* 1021300a push edi */
  push32((uint32_t)(EDI));
  /* 1021300b call 0x10212610 */
  push32(0x10213010u); f_10212610();
  /* 10213010 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213013 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10213014 jmp 0x10212ff7 */
  goto L_10212ff7;
L_10213016:;
  /* 10213016 mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1021301a push ecx */
  push32((uint32_t)(ECX));
  /* 1021301b push edi */
  push32((uint32_t)(EDI));
  /* 1021301c push ebp */
  push32((uint32_t)(EBP));
  /* 1021301d call 0x10212f60 */
  push32(0x10213022u); f_10212f60();
  /* 10213022 push eax */
  push32((uint32_t)(EAX));
  /* 10213023 push edi */
  push32((uint32_t)(EDI));
  /* 10213024 push ebp */
  push32((uint32_t)(EBP));
  /* 10213025 call 0x10212610 */
  push32(0x1021302au); f_10212610();
  /* 1021302a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021302d mov al, 1 */
  AL = (0x1u);
  /* 1021302f pop edi */
  EDI = (pop32());
  /* 10213030 pop esi */
  ESI = (pop32());
  /* 10213031 pop ebp */
  EBP = (pop32());
  /* 10213032 pop ebx */
  EBX = (pop32());
  /* 10213033 ret  */
  ESPCHK(0x10212f90u, _esp0);
  ESP += 4; return;
L_10213034:;
  /* 10213034 pop edi */
  EDI = (pop32());
  /* 10213035 pop esi */
  ESI = (pop32());
  /* 10213036 pop ebp */
  EBP = (pop32());
  /* 10213037 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 10213039 pop ebx */
  EBX = (pop32());
  /* 1021303a ret  */
  ESPCHK(0x10212f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003040 @ 0x10213040 (369 bytes, 82 insns) */
void f_10213040(void) {
  FTRACE(0x10213040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10213040 push ebx */
  push32((uint32_t)(EBX));
  /* 10213041 push esi */
  push32((uint32_t)(ESI));
  /* 10213042 call dword ptr [0x102264e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e0))), 0x10213048u);
  /* 10213048 push 0x10226170 */
  push32((uint32_t)(0x10226170u));
  /* 1021304d mov dword ptr [0x10226294], eax */
  w32((uint32_t)(0x10226294), (EAX));
  /* 10213052 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10213058u);
  /* 10213058 mov ebx, 1 */
  EBX = (0x1u);
  /* 1021305d mov esi, eax */
  ESI = (EAX);
  /* 1021305f push ebx */
  push32((uint32_t)(EBX));
  /* 10213060 call 0x10212730 */
  push32(0x10213065u); f_10212730();
  /* 10213065 push 4 */
  push32((uint32_t)(0x4u));
  /* 10213067 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10213069 call 0x10212730 */
  push32(0x1021306eu); f_10212730();
  /* 1021306e push 5 */
  push32((uint32_t)(0x5u));
  /* 10213070 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10213072 call 0x10212730 */
  push32(0x10213077u); f_10212730();
  /* 10213077 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10213079 mov eax, dword ptr [0x10226294] */
  EAX = (r32((uint32_t)(0x10226294)));
  /* 1021307e push 3 */
  push32((uint32_t)(0x3u));
  /* 10213080 mov dword ptr [0x10226190], esi */
  w32((uint32_t)(0x10226190), (ESI));
  /* 10213086 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 10213089 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 1021308c lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 1021308f lea eax, [eax + ecx*2] */
  EAX = ((uint32_t)(EAX + ECX*2));
  /* 10213092 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10213095 mov ecx, dword ptr [eax + 0x10223ad0] */
  ECX = (r32((uint32_t)(EAX + 0x10223ad0)));
  /* 1021309b lea edx, [eax + 0x10223940] */
  EDX = ((uint32_t)(EAX + 0x10223940));
  /* 102130a1 mov dword ptr [0x102261a0], edx */
  w32((uint32_t)(0x102261a0), (EDX));
  /* 102130a7 lea edx, [eax + 0x10223ad4] */
  EDX = ((uint32_t)(EAX + 0x10223ad4));
  /* 102130ad mov dword ptr [0x102265e4], ecx */
  w32((uint32_t)(0x102265e4), (ECX));
  /* 102130b3 mov ecx, dword ptr [eax + 0x10223c64] */
  ECX = (r32((uint32_t)(EAX + 0x10223c64)));
  /* 102130b9 mov dword ptr [0x102261a4], edx */
  w32((uint32_t)(0x102261a4), (EDX));
  /* 102130bf lea edx, [eax + 0x10223c68] */
  EDX = ((uint32_t)(EAX + 0x10223c68));
  /* 102130c5 mov dword ptr [0x102265e8], ecx */
  w32((uint32_t)(0x102265e8), (ECX));
  /* 102130cb mov dword ptr [0x1022622c], edx */
  w32((uint32_t)(0x1022622c), (EDX));
  /* 102130d1 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x102130d7u);
  /* 102130d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 102130d9 mov dword ptr [0x10226270], eax */
  w32((uint32_t)(0x10226270), (EAX));
  /* 102130de call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x102130e4u);
  /* 102130e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 102130e6 mov dword ptr [0x10223600], eax */
  w32((uint32_t)(0x10223600), (EAX));
  /* 102130eb call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x102130f1u);
  /* 102130f1 push 4 */
  push32((uint32_t)(0x4u));
  /* 102130f3 mov dword ptr [0x10226360], eax */
  w32((uint32_t)(0x10226360), (EAX));
  /* 102130f8 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x102130feu);
  /* 102130fe push 5 */
  push32((uint32_t)(0x5u));
  /* 10213100 mov dword ptr [0x10223708], eax */
  w32((uint32_t)(0x10223708), (EAX));
  /* 10213105 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x1021310bu);
  /* 1021310b push ebx */
  push32((uint32_t)(EBX));
  /* 1021310c mov dword ptr [0x102260c8], eax */
  w32((uint32_t)(0x102260c8), (EAX));
  /* 10213111 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10213117u);
  /* 10213117 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021311a mov dword ptr [0x10226318], eax */
  w32((uint32_t)(0x10226318), (EAX));
  /* 1021311f call 0x10212670 */
  push32(0x10213124u); f_10212670();
  /* 10213124 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10213126 jne 0x10213132 */
  if (!C.zf) goto L_10213132;
  /* 10213128 mov dword ptr [0x1021f248], 4 */
  w32((uint32_t)(0x1021f248), (0x4u));
L_10213132:;
  /* 10213132 push 0x1021f114 */
  push32((uint32_t)(0x1021f114u));
  /* 10213137 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10213139 call dword ptr [0x102264ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264ec))), 0x1021313fu);
  /* 1021313f push 0x10226578 */
  push32((uint32_t)(0x10226578u));
  /* 10213144 call 0x10212720 */
  push32(0x10213149u); f_10212720();
  /* 10213149 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1021314b push 0x1021f244 */
  push32((uint32_t)(0x1021f244u));
  /* 10213150 call 0x10212700 */
  push32(0x10213155u); f_10212700();
  /* 10213155 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213158 mov byte ptr [0x10226168], bl */
  w8((uint32_t)(0x10226168), (BL));
  /* 1021315e mov byte ptr [0x1022616a], bl */
  w8((uint32_t)(0x1022616a), (BL));
  /* 10213164 mov byte ptr [0x1022616c], bl */
  w8((uint32_t)(0x1022616c), (BL));
  /* 1021316a mov byte ptr [0x1022616d], bl */
  w8((uint32_t)(0x1022616d), (BL));
  /* 10213170 mov byte ptr [0x10226303], bl */
  w8((uint32_t)(0x10226303), (BL));
  /* 10213176 mov byte ptr [0x10226301], bl */
  w8((uint32_t)(0x10226301), (BL));
  /* 1021317c mov byte ptr [0x10226304], bl */
  w8((uint32_t)(0x10226304), (BL));
  /* 10213182 mov byte ptr [0x10226305], bl */
  w8((uint32_t)(0x10226305), (BL));
  /* 10213188 pop esi */
  ESI = (pop32());
  /* 10213189 mov byte ptr [0x1022616b], 0 */
  w8((uint32_t)(0x1022616b), (0x0u));
  /* 10213190 mov byte ptr [0x10226169], 0 */
  w8((uint32_t)(0x10226169), (0x0u));
  /* 10213197 mov byte ptr [0x10226300], 0 */
  w8((uint32_t)(0x10226300), (0x0u));
  /* 1021319e mov byte ptr [0x10226302], 0 */
  w8((uint32_t)(0x10226302), (0x0u));
  /* 102131a5 mov dword ptr [0x1022662c], 0 */
  w32((uint32_t)(0x1022662c), (0x0u));
  /* 102131af pop ebx */
  EBX = (pop32());
  /* 102131b0 ret  */
  ESPCHK(0x10213040u, _esp0);
  ESP += 4; return;
}

/* FUN_100031c0 @ 0x102131c0 (85 bytes, 29 insns) */
void f_102131c0(void) {
  FTRACE(0x102131c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102131c0 mov eax, dword ptr [0x10225f38] */
  EAX = (r32((uint32_t)(0x10225f38)));
  /* 102131c5 push esi */
  push32((uint32_t)(ESI));
  /* 102131c6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102131c9 jg 0x10213213 */
  if ((!C.zf&&C.sf==C.of)) goto L_10213213;
  /* 102131cb push 0x10223668 */
  push32((uint32_t)(0x10223668u));
  /* 102131d0 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x102131d6u);
  /* 102131d6 mov ecx, eax */
  ECX = (EAX);
  /* 102131d8 mov eax, 0x38e38e39 */
  EAX = (0x38e38e39u);
  /* 102131dd imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 102131df sar edx, 3 */
  EDX = (sh_sar((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 102131e2 mov eax, edx */
  EAX = (EDX);
  /* 102131e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102131e7 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 102131ea add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102131ec mov esi, edx */
  ESI = (EDX);
  /* 102131ee je 0x10213213 */
  if (C.zf) goto L_10213213;
  /* 102131f0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102131f2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102131f4 push esi */
  push32((uint32_t)(ESI));
  /* 102131f5 push 0x102236e0 */
  push32((uint32_t)(0x102236e0u));
  /* 102131fa call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10213200u);
  /* 10213200 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10213202 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10213204 push esi */
  push32((uint32_t)(ESI));
  /* 10213205 push 0x10223620 */
  push32((uint32_t)(0x10223620u));
  /* 1021320a call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10213210u);
  /* 10213210 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10213213:;
  /* 10213213 pop esi */
  ESI = (pop32());
  /* 10213214 ret  */
  ESPCHK(0x102131c0u, _esp0);
  ESP += 4; return;
}

/* ProcessLandAI @ 0x10213220 (1 bytes, 1 insns) */
void f_10213220(void) {
  FTRACE(0x10213220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10213220 ret  */
  ESPCHK(0x10213220u, _esp0);
  ESP += 4; return;
}

/* FUN_10003230 @ 0x10213230 (157 bytes, 43 insns) */
void f_10213230(void) {
  FTRACE(0x10213230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10213230 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10213232 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10213234 push 0x10226330 */
  push32((uint32_t)(0x10226330u));
  /* 10213239 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021323fu);
  /* 1021323f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10213241 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10213243 push 0x10226338 */
  push32((uint32_t)(0x10226338u));
  /* 10213248 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021324eu);
  /* 1021324e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10213250 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10213252 push 0x10226320 */
  push32((uint32_t)(0x10226320u));
  /* 10213257 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021325du);
  /* 1021325d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1021325f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10213261 push 0x10226328 */
  push32((uint32_t)(0x10226328u));
  /* 10213266 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021326cu);
  /* 1021326c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1021326e push 0xa */
  push32((uint32_t)(0xau));
  /* 10213270 push 0x10226340 */
  push32((uint32_t)(0x10226340u));
  /* 10213275 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021327bu);
  /* 1021327b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1021327d push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1021327f push 0x10226278 */
  push32((uint32_t)(0x10226278u));
  /* 10213284 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021328au);
  /* 1021328a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021328d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1021328f push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10213291 push 0x10226260 */
  push32((uint32_t)(0x10226260u));
  /* 10213296 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021329cu);
  /* 1021329c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1021329e push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 102132a0 push 0x10226268 */
  push32((uint32_t)(0x10226268u));
  /* 102132a5 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102132abu);
  /* 102132ab push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102132ad push 0x14 */
  push32((uint32_t)(0x14u));
  /* 102132af push 0x10226280 */
  push32((uint32_t)(0x10226280u));
  /* 102132b4 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102132bau);
  /* 102132ba push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102132bc push 0xa */
  push32((uint32_t)(0xau));
  /* 102132be push 0x10226288 */
  push32((uint32_t)(0x10226288u));
  /* 102132c3 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102132c9u);
  /* 102132c9 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102132cc ret  */
  ESPCHK(0x10213230u, _esp0);
  ESP += 4; return;
}

/* FUN_100032d0 @ 0x102132d0 (79 bytes, 22 insns) */
void f_102132d0(void) {
  FTRACE(0x102132d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102132d0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102132d2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102132d4 push 0x102238f0 */
  push32((uint32_t)(0x102238f0u));
  /* 102132d9 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102132dfu);
  /* 102132df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102132e1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102132e3 push 0x102238f8 */
  push32((uint32_t)(0x102238f8u));
  /* 102132e8 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102132eeu);
  /* 102132ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102132f0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102132f2 push 0x102238e8 */
  push32((uint32_t)(0x102238e8u));
  /* 102132f7 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102132fdu);
  /* 102132fd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102132ff push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10213301 push 0x10225f58 */
  push32((uint32_t)(0x10225f58u));
  /* 10213306 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021330cu);
  /* 1021330c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1021330e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10213310 push 0x10225f48 */
  push32((uint32_t)(0x10225f48u));
  /* 10213315 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021331bu);
  /* 1021331b add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021331e ret  */
  ESPCHK(0x102132d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003320 @ 0x10213320 (64 bytes, 18 insns) */
void f_10213320(void) {
  FTRACE(0x10213320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10213320 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10213322 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10213324 push 0x10226078 */
  push32((uint32_t)(0x10226078u));
  /* 10213329 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021332fu);
  /* 1021332f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10213331 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10213333 push 0x10226080 */
  push32((uint32_t)(0x10226080u));
  /* 10213338 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021333eu);
  /* 1021333e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10213340 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10213342 push 0x10226088 */
  push32((uint32_t)(0x10226088u));
  /* 10213347 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021334du);
  /* 1021334d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1021334f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10213351 push 0x10226090 */
  push32((uint32_t)(0x10226090u));
  /* 10213356 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021335cu);
  /* 1021335c add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021335f ret  */
  ESPCHK(0x10213320u, _esp0);
  ESP += 4; return;
}

/* FUN_10003360 @ 0x10213360 (3787 bytes, 1079 insns) */
void f_10213360(void) {
  FTRACE(0x10213360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10213360 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10213363 push ebx */
  push32((uint32_t)(EBX));
  /* 10213364 push ebp */
  push32((uint32_t)(EBP));
  /* 10213365 push esi */
  push32((uint32_t)(ESI));
  /* 10213366 push edi */
  push32((uint32_t)(EDI));
  /* 10213367 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 1021336c push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 10213371 call dword ptr [0x102264f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264f8))), 0x10213377u);
  /* 10213377 push 0 */
  push32((uint32_t)(0x0u));
  /* 10213379 call 0x10212760 */
  push32(0x1021337eu); f_10212760();
  /* 1021337e push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10213380 push 0 */
  push32((uint32_t)(0x0u));
  /* 10213382 call 0x10212640 */
  push32(0x10213387u); f_10212640();
  /* 10213387 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10213389 push 0 */
  push32((uint32_t)(0x0u));
  /* 1021338b mov dword ptr [esp + 0x40], eax */
  w32((uint32_t)(ESP + 0x40), (EAX));
  /* 1021338f call 0x10212640 */
  push32(0x10213394u); f_10212640();
  /* 10213394 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 10213396 push 0 */
  push32((uint32_t)(0x0u));
  /* 10213398 mov edi, eax */
  EDI = (EAX);
  /* 1021339a call 0x10212640 */
  push32(0x1021339fu); f_10212640();
  /* 1021339f push 0xe */
  push32((uint32_t)(0xeu));
  /* 102133a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 102133a3 mov esi, eax */
  ESI = (EAX);
  /* 102133a5 call 0x10212640 */
  push32(0x102133aau); f_10212640();
  /* 102133aa push 0x10226000 */
  push32((uint32_t)(0x10226000u));
  /* 102133af mov ebx, eax */
  EBX = (EAX);
  /* 102133b1 call dword ptr [0x1022652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022652c))), 0x102133b7u);
  /* 102133b7 sar esi, 2 */
  ESI = (sh_sar((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 102133ba and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 102133bf add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102133c1 mov dword ptr [esp + 0x50], eax */
  w32((uint32_t)(ESP + 0x50), (EAX));
  /* 102133c5 push 0x102262b8 */
  push32((uint32_t)(0x102262b8u));
  /* 102133ca lea eax, [esi + ebx*4] */
  EAX = ((uint32_t)(ESI + EBX*4));
  /* 102133cd mov dword ptr [esp + 0x5c], eax */
  w32((uint32_t)(ESP + 0x5c), (EAX));
  /* 102133d1 call dword ptr [0x10226524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226524))), 0x102133d7u);
  /* 102133d7 push 0x10225f98 */
  push32((uint32_t)(0x10225f98u));
  /* 102133dc mov ebx, eax */
  EBX = (EAX);
  /* 102133de call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x102133e4u);
  /* 102133e4 push 0x10225f98 */
  push32((uint32_t)(0x10225f98u));
  /* 102133e9 mov ebp, eax */
  EBP = (EAX);
  /* 102133eb call dword ptr [0x10226524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226524))), 0x102133f1u);
  /* 102133f1 push 0x10225fc8 */
  push32((uint32_t)(0x10225fc8u));
  /* 102133f6 mov dword ptr [esp + 0x5c], eax */
  w32((uint32_t)(ESP + 0x5c), (EAX));
  /* 102133fa call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10213400u);
  /* 10213400 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213403 mov edi, eax */
  EDI = (EAX);
  /* 10213405 push 0x10225fc8 */
  push32((uint32_t)(0x10225fc8u));
  /* 1021340a call dword ptr [0x10226524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226524))), 0x10213410u);
  /* 10213410 push 0x102260b8 */
  push32((uint32_t)(0x102260b8u));
  /* 10213415 mov dword ptr [esp + 0x20], eax */
  w32((uint32_t)(ESP + 0x20), (EAX));
  /* 10213419 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x1021341fu);
  /* 1021341f push 0x102260b8 */
  push32((uint32_t)(0x102260b8u));
  /* 10213424 mov esi, eax */
  ESI = (EAX);
  /* 10213426 call dword ptr [0x10226524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226524))), 0x1021342cu);
  /* 1021342c push 0x102262b8 */
  push32((uint32_t)(0x102262b8u));
  /* 10213431 mov dword ptr [esp + 0x24], eax */
  w32((uint32_t)(ESP + 0x24), (EAX));
  /* 10213435 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x1021343bu);
  /* 1021343b mov edx, dword ptr [esp + 0x24] */
  EDX = (r32((uint32_t)(ESP + 0x24)));
  /* 1021343f mov ecx, dword ptr [esp + 0x28] */
  ECX = (r32((uint32_t)(ESP + 0x28)));
  /* 10213443 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10213445 mov edx, dword ptr [esp + 0x2c] */
  EDX = (r32((uint32_t)(ESP + 0x2c)));
  /* 10213449 sub esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021344b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1021344d sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021344f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10213451 sub esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10213453 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10213455 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10213457 push 0x10226000 */
  push32((uint32_t)(0x10226000u));
  /* 1021345c add esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1021345e mov dword ptr [esp + 0x38], esi */
  w32((uint32_t)(ESP + 0x38), (ESI));
  /* 10213462 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10213468u);
  /* 10213468 push 3 */
  push32((uint32_t)(0x3u));
  /* 1021346a mov bl, 1 */
  BL = (0x1u);
  /* 1021346c call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10213472u);
  /* 10213472 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213475 cmp eax, 0xd6d8 */
  { uint32_t _a=(EAX),_b=(0xd6d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021347a jle 0x102134aa */
  if ((C.zf||C.sf!=C.of)) goto L_102134aa;
  /* 1021347c push 1 */
  push32((uint32_t)(0x1u));
  /* 1021347e call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10213484u);
  /* 10213484 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213487 cmp eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021348c jle 0x102134aa */
  if ((C.zf||C.sf!=C.of)) goto L_102134aa;
  /* 1021348e push 4 */
  push32((uint32_t)(0x4u));
  /* 10213490 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10213496u);
  /* 10213496 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213499 cmp eax, 0x1b58 */
  { uint32_t _a=(EAX),_b=(0x1b58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021349e jle 0x102134aa */
  if ((C.zf||C.sf!=C.of)) goto L_102134aa;
  /* 102134a0 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 102134a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102134a6 jne 0x102134aa */
  if (!C.zf) goto L_102134aa;
  /* 102134a8 xor bl, bl */
  { uint32_t _r=(BL)^(BL); BL = (_r); fl_logic(_r,8); }
L_102134aa:;
  /* 102134aa push 0x10226170 */
  push32((uint32_t)(0x10226170u));
  /* 102134af call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x102134b5u);
  /* 102134b5 push 3 */
  push32((uint32_t)(0x3u));
  /* 102134b7 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 102134bb call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x102134c1u);
  /* 102134c1 push 0x10226198 */
  push32((uint32_t)(0x10226198u));
  /* 102134c6 mov esi, eax */
  ESI = (EAX);
  /* 102134c8 call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x102134ceu);
  /* 102134ce push 0x10223668 */
  push32((uint32_t)(0x10223668u));
  /* 102134d3 mov byte ptr [esp + 0x22], al */
  w8((uint32_t)(ESP + 0x22), (AL));
  /* 102134d7 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x102134ddu);
  /* 102134dd push 0x102260c0 */
  push32((uint32_t)(0x102260c0u));
  /* 102134e2 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x102134e8u);
  /* 102134e8 push 0x10226390 */
  push32((uint32_t)(0x10226390u));
  /* 102134ed mov dword ptr [esp + 0x2c], eax */
  w32((uint32_t)(ESP + 0x2c), (EAX));
  /* 102134f1 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x102134f7u);
  /* 102134f7 push 0x10226310 */
  push32((uint32_t)(0x10226310u));
  /* 102134fc mov edi, eax */
  EDI = (EAX);
  /* 102134fe call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10213504u);
  /* 10213504 push 0x10223668 */
  push32((uint32_t)(0x10223668u));
  /* 10213509 mov ebp, eax */
  EBP = (EAX);
  /* 1021350b call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10213511u);
  /* 10213511 add eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10213513 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10213515 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10213517 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10213519 push 0x102260f0 */
  push32((uint32_t)(0x102260f0u));
  /* 1021351e mov dword ptr [esp + 0x44], eax */
  w32((uint32_t)(ESP + 0x44), (EAX));
  /* 10213522 mov byte ptr [esp + 0x3f], 1 */
  w8((uint32_t)(ESP + 0x3f), (0x1u));
  /* 10213527 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021352du);
  /* 1021352d push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1021352f push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10213531 push 0x10226130 */
  push32((uint32_t)(0x10226130u));
  /* 10213536 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021353cu);
  /* 1021353c push 0x102238b8 */
  push32((uint32_t)(0x102238b8u));
  /* 10213541 call dword ptr [0x10226524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226524))), 0x10213547u);
  /* 10213547 push 0x102238b8 */
  push32((uint32_t)(0x102238b8u));
  /* 1021354c mov edi, eax */
  EDI = (EAX);
  /* 1021354e call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10213554u);
  /* 10213554 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213557 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10213559 je 0x10213560 */
  if (C.zf) goto L_10213560;
  /* 1021355b mov byte ptr [esp + 0x13], 0 */
  w8((uint32_t)(ESP + 0x13), (0x0u));
L_10213560:;
  /* 10213560 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 10213564 test ebp, ebp */
  { uint32_t _r=(EBP)&(EBP); fl_logic(_r,32); }
  /* 10213566 je 0x10213f2d */
  if (C.zf) goto L_10213f2d;
  /* 1021356c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1021356e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10213570 push 1 */
  push32((uint32_t)(0x1u));
  /* 10213572 push 0x10225fb8 */
  push32((uint32_t)(0x10225fb8u));
  /* 10213577 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x1021357du);
  /* 1021357d push 0x10225fb8 */
  push32((uint32_t)(0x10225fb8u));
  /* 10213582 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10213588u);
  /* 10213588 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021358b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021358d je 0x10214223 */
  if (C.zf) goto L_10214223;
  /* 10213593 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10213595 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10213597 push 0x10226358 */
  push32((uint32_t)(0x10226358u));
  /* 1021359c call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102135a2u);
  /* 102135a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102135a5 call dword ptr [0x10226550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226550))), 0x102135abu);
  /* 102135ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102135ad jne 0x102135f0 */
  if (!C.zf) goto L_102135f0;
  /* 102135af cmp esi, 0x2bc */
  { uint32_t _a=(ESI),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102135b5 jle 0x102135dc */
  if ((C.zf||C.sf!=C.of)) goto L_102135dc;
  /* 102135b7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102135b9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102135bb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102135bd push 0x10226170 */
  push32((uint32_t)(0x10226170u));
  /* 102135c2 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x102135c8u);
  /* 102135c8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102135ca push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102135cc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102135ce push 0x10223668 */
  push32((uint32_t)(0x10223668u));
  /* 102135d3 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x102135d9u);
  /* 102135d9 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102135dc:;
  /* 102135dc push 1 */
  push32((uint32_t)(0x1u));
  /* 102135de push 1 */
  push32((uint32_t)(0x1u));
  /* 102135e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 102135e2 call dword ptr [0x102264f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264f4))), 0x102135e8u);
  /* 102135e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102135eb jmp 0x102136fe */
  goto L_102136fe;
L_102135f0:;
  /* 102135f0 push 0x10223780 */
  push32((uint32_t)(0x10223780u));
  /* 102135f5 call dword ptr [0x1022652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022652c))), 0x102135fbu);
  /* 102135fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102135fe test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10213600 je 0x1021362a */
  if (C.zf) goto L_1021362a;
  /* 10213602 cmp esi, 0x2ee0 */
  { uint32_t _a=(ESI),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10213608 jle 0x10213612 */
  if ((C.zf||C.sf!=C.of)) goto L_10213612;
  /* 1021360a push 6 */
  push32((uint32_t)(0x6u));
  /* 1021360c push 8 */
  push32((uint32_t)(0x8u));
  /* 1021360e push 9 */
  push32((uint32_t)(0x9u));
  /* 10213610 jmp 0x10213650 */
  goto L_10213650;
L_10213612:;
  /* 10213612 cmp esi, 0x1770 */
  { uint32_t _a=(ESI),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10213618 jle 0x10213622 */
  if ((C.zf||C.sf!=C.of)) goto L_10213622;
  /* 1021361a push 3 */
  push32((uint32_t)(0x3u));
  /* 1021361c push 5 */
  push32((uint32_t)(0x5u));
  /* 1021361e push 9 */
  push32((uint32_t)(0x9u));
  /* 10213620 jmp 0x10213650 */
  goto L_10213650;
L_10213622:;
  /* 10213622 push 1 */
  push32((uint32_t)(0x1u));
  /* 10213624 push 4 */
  push32((uint32_t)(0x4u));
  /* 10213626 push 9 */
  push32((uint32_t)(0x9u));
  /* 10213628 jmp 0x10213650 */
  goto L_10213650;
L_1021362a:;
  /* 1021362a cmp esi, 0x2ee0 */
  { uint32_t _a=(ESI),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10213630 jle 0x1021363a */
  if ((C.zf||C.sf!=C.of)) goto L_1021363a;
  /* 10213632 push 8 */
  push32((uint32_t)(0x8u));
  /* 10213634 push 8 */
  push32((uint32_t)(0x8u));
  /* 10213636 push 9 */
  push32((uint32_t)(0x9u));
  /* 10213638 jmp 0x10213650 */
  goto L_10213650;
L_1021363a:;
  /* 1021363a cmp esi, 0x1770 */
  { uint32_t _a=(ESI),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10213640 jle 0x1021364a */
  if ((C.zf||C.sf!=C.of)) goto L_1021364a;
  /* 10213642 push 5 */
  push32((uint32_t)(0x5u));
  /* 10213644 push 5 */
  push32((uint32_t)(0x5u));
  /* 10213646 push 9 */
  push32((uint32_t)(0x9u));
  /* 10213648 jmp 0x10213650 */
  goto L_10213650;
L_1021364a:;
  /* 1021364a push 4 */
  push32((uint32_t)(0x4u));
  /* 1021364c push 4 */
  push32((uint32_t)(0x4u));
  /* 1021364e push 0xa */
  push32((uint32_t)(0xau));
L_10213650:;
  /* 10213650 call dword ptr [0x102264f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264f4))), 0x10213656u);
  /* 10213656 mov al, byte ptr [esp + 0x1e] */
  AL = (r8((uint32_t)(ESP + 0x1e)));
  /* 1021365a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021365d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1021365f mov edi, 0x15e */
  EDI = (0x15eu);
  /* 10213664 je 0x1021366b */
  if (C.zf) goto L_1021366b;
  /* 10213666 mov edi, 0x12c */
  EDI = (0x12cu);
L_1021366b:;
  /* 1021366b cmp ebp, 0x19 */
  { uint32_t _a=(EBP),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021366e jge 0x1021368c */
  if ((C.sf==C.of)) goto L_1021368c;
  /* 10213670 cmp esi, 0x12c */
  { uint32_t _a=(ESI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10213676 jle 0x1021368c */
  if ((C.zf||C.sf!=C.of)) goto L_1021368c;
  /* 10213678 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1021367a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1021367c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1021367e push 0x10226170 */
  push32((uint32_t)(0x10226170u));
  /* 10213683 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10213689u);
  /* 10213689 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1021368c:;
  /* 1021368c cmp esi, 0xc8 */
  { uint32_t _a=(ESI),_b=(0xc8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10213692 jle 0x102136cd */
  if ((C.zf||C.sf!=C.of)) goto L_102136cd;
  /* 10213694 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10213696 je 0x102136b2 */
  if (C.zf) goto L_102136b2;
  /* 10213698 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1021369a push 0xe8 */
  push32((uint32_t)(0xe8u));
  /* 1021369f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 102136a4 push 0x10226170 */
  push32((uint32_t)(0x10226170u));
  /* 102136a9 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x102136afu);
  /* 102136af add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102136b2:;
  /* 102136b2 cmp esi, 0x12c */
  { uint32_t _a=(ESI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102136b8 jle 0x102136cd */
  if ((C.zf||C.sf!=C.of)) goto L_102136cd;
  /* 102136ba push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 102136bc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102136be push edi */
  push32((uint32_t)(EDI));
  /* 102136bf push 0x10223668 */
  push32((uint32_t)(0x10223668u));
  /* 102136c4 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x102136cau);
  /* 102136ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102136cd:;
  /* 102136cd push 0x10226250 */
  push32((uint32_t)(0x10226250u));
  /* 102136d2 call dword ptr [0x1022652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022652c))), 0x102136d8u);
  /* 102136d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102136db test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102136dd je 0x102136fe */
  if (C.zf) goto L_102136fe;
  /* 102136df cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102136e5 jle 0x102136fe */
  if ((C.zf||C.sf!=C.of)) goto L_102136fe;
  /* 102136e7 push 0x102262b8 */
  push32((uint32_t)(0x102262b8u));
  /* 102136ec call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x102136f2u);
  /* 102136f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102136f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102136f7 jle 0x102136fe */
  if ((C.zf||C.sf!=C.of)) goto L_102136fe;
  /* 102136f9 call 0x10213230 */
  push32(0x102136feu); f_10213230();
L_102136fe:;
  /* 102136fe mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 10213702 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10213704 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10213707 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10213709 jge 0x1021370f */
  if ((C.sf==C.of)) goto L_1021370f;
  /* 1021370b push 5 */
  push32((uint32_t)(0x5u));
  /* 1021370d jmp 0x10213713 */
  goto L_10213713;
L_1021370f:;
  /* 1021370f add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10213712 push eax */
  push32((uint32_t)(EAX));
L_10213713:;
  /* 10213713 push 0x10225f70 */
  push32((uint32_t)(0x10225f70u));
  /* 10213718 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x1021371eu);
  /* 1021371e mov edi, dword ptr [esp + 0x38] */
  EDI = (r32((uint32_t)(ESP + 0x38)));
  /* 10213722 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213725 cmp edi, 5 */
  { uint32_t _a=(EDI),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10213728 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1021372a jge 0x10213740 */
  if ((C.sf==C.of)) goto L_10213740;
  /* 1021372c push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1021372e push 0xc */
  push32((uint32_t)(0xcu));
  /* 10213730 push 0x102238c8 */
  push32((uint32_t)(0x102238c8u));
  /* 10213735 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x1021373bu);
  /* 1021373b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021373e jmp 0x1021377a */
  goto L_1021377a;
L_10213740:;
  /* 10213740 lea ecx, [edi + 6] */
  ECX = ((uint32_t)(EDI + 0x6));
  /* 10213743 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10213745 push ecx */
  push32((uint32_t)(ECX));
  /* 10213746 push 0x102238c8 */
  push32((uint32_t)(0x102238c8u));
  /* 1021374b call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10213751u);
  /* 10213751 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10213753 lea edx, [edi + 9] */
  EDX = ((uint32_t)(EDI + 0x9));
  /* 10213756 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10213758 push edx */
  push32((uint32_t)(EDX));
  /* 10213759 push 0x102238c8 */
  push32((uint32_t)(0x102238c8u));
  /* 1021375e call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10213764u);
  /* 10213764 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10213766 add edi, 0xa */
  { uint32_t _a=(EDI),_b=(0xau),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10213769 push 0xa */
  push32((uint32_t)(0xau));
  /* 1021376b push edi */
  push32((uint32_t)(EDI));
  /* 1021376c push 0x102238c8 */
  push32((uint32_t)(0x102238c8u));
  /* 10213771 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10213777u);
  /* 10213777 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1021377a:;
  /* 1021377a push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1021377c push 0 */
  push32((uint32_t)(0x0u));
  /* 1021377e call 0x10212640 */
  push32(0x10213783u); f_10212640();
  /* 10213783 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213786 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10213788 je 0x102137e7 */
  if (C.zf) goto L_102137e7;
  /* 1021378a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1021378c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1021378e push 0x102262c8 */
  push32((uint32_t)(0x102262c8u));
  /* 10213793 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10213799u);
  /* 10213799 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1021379b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1021379d push 0x102262b0 */
  push32((uint32_t)(0x102262b0u));
  /* 102137a2 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102137a8u);
  /* 102137a8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102137aa push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102137ac push 0x102262c0 */
  push32((uint32_t)(0x102262c0u));
  /* 102137b1 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102137b7u);
  /* 102137b7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102137b9 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102137bb push 0x102262a0 */
  push32((uint32_t)(0x102262a0u));
  /* 102137c0 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102137c6u);
  /* 102137c6 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102137c8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102137ca push 0x102262a8 */
  push32((uint32_t)(0x102262a8u));
  /* 102137cf call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102137d5u);
  /* 102137d5 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102137d7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102137d9 push 0x10226298 */
  push32((uint32_t)(0x10226298u));
  /* 102137de call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102137e4u);
  /* 102137e4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102137e7:;
  /* 102137e7 push 0xa */
  push32((uint32_t)(0xau));
  /* 102137e9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102137eb push 3 */
  push32((uint32_t)(0x3u));
  /* 102137ed push 0x10223880 */
  push32((uint32_t)(0x10223880u));
  /* 102137f2 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x102137f8u);
  /* 102137f8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102137fa push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102137fc push 1 */
  push32((uint32_t)(0x1u));
  /* 102137fe push 0x10225f98 */
  push32((uint32_t)(0x10225f98u));
  /* 10213803 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10213809u);
  /* 10213809 push 5 */
  push32((uint32_t)(0x5u));
  /* 1021380b push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1021380d push 2 */
  push32((uint32_t)(0x2u));
  /* 1021380f push 0x10225f98 */
  push32((uint32_t)(0x10225f98u));
  /* 10213814 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x1021381au);
  /* 1021381a mov esi, dword ptr [esp + 0x4c] */
  ESI = (r32((uint32_t)(ESP + 0x4c)));
  /* 1021381e add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213821 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10213823 jne 0x10213839 */
  if (!C.zf) goto L_10213839;
  /* 10213825 push 5 */
  push32((uint32_t)(0x5u));
  /* 10213827 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10213829 push 3 */
  push32((uint32_t)(0x3u));
  /* 1021382b push 0x10225f98 */
  push32((uint32_t)(0x10225f98u));
  /* 10213830 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10213836u);
  /* 10213836 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10213839:;
  /* 10213839 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1021383b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1021383d push 1 */
  push32((uint32_t)(0x1u));
  /* 1021383f push 0x102261c8 */
  push32((uint32_t)(0x102261c8u));
  /* 10213844 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x1021384au);
  /* 1021384a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1021384c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1021384e push 1 */
  push32((uint32_t)(0x1u));
  /* 10213850 push 0x10226230 */
  push32((uint32_t)(0x10226230u));
  /* 10213855 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x1021385bu);
  /* 1021385b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1021385d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1021385f push 1 */
  push32((uint32_t)(0x1u));
  /* 10213861 push 0x10225fb0 */
  push32((uint32_t)(0x10225fb0u));
  /* 10213866 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x1021386cu);
  /* 1021386c push 5 */
  push32((uint32_t)(0x5u));
  /* 1021386e push 0xa */
  push32((uint32_t)(0xau));
  /* 10213870 push 2 */
  push32((uint32_t)(0x2u));
  /* 10213872 push 0x102261c8 */
  push32((uint32_t)(0x102261c8u));
  /* 10213877 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x1021387du);
  /* 1021387d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213880 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10213882 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10213884 push 1 */
  push32((uint32_t)(0x1u));
  /* 10213886 push 0x102260b8 */
  push32((uint32_t)(0x102260b8u));
  /* 1021388b call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10213891u);
  /* 10213891 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10213893 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10213895 push 0x10223640 */
  push32((uint32_t)(0x10223640u));
  /* 1021389a call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102138a0u);
  /* 102138a0 push 0x10225f00 */
  push32((uint32_t)(0x10225f00u));
  /* 102138a5 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x102138abu);
  /* 102138ab add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102138ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102138b0 jle 0x102138d7 */
  if ((C.zf||C.sf!=C.of)) goto L_102138d7;
  /* 102138b2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 102138b4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102138b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 102138b8 push 0x10223858 */
  push32((uint32_t)(0x10223858u));
  /* 102138bd call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x102138c3u);
  /* 102138c3 push 3 */
  push32((uint32_t)(0x3u));
  /* 102138c5 push 5 */
  push32((uint32_t)(0x5u));
  /* 102138c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 102138c9 push 0x102260d8 */
  push32((uint32_t)(0x102260d8u));
  /* 102138ce call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x102138d4u);
  /* 102138d4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102138d7:;
  /* 102138d7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102138d9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102138db push 1 */
  push32((uint32_t)(0x1u));
  /* 102138dd push 0x10225f00 */
  push32((uint32_t)(0x10225f00u));
  /* 102138e2 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x102138e8u);
  /* 102138e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102138eb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102138ed jne 0x10213903 */
  if (!C.zf) goto L_10213903;
  /* 102138ef push 0xa */
  push32((uint32_t)(0xau));
  /* 102138f1 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 102138f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 102138f5 push 0x10225fc8 */
  push32((uint32_t)(0x10225fc8u));
  /* 102138fa call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10213900u);
  /* 10213900 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10213903:;
  /* 10213903 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10213905 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10213907 push 1 */
  push32((uint32_t)(0x1u));
  /* 10213909 push 0x102235f8 */
  push32((uint32_t)(0x102235f8u));
  /* 1021390e call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10213914u);
  /* 10213914 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213917 cmp ebp, 0x19 */
  { uint32_t _a=(EBP),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021391a jle 0x10213930 */
  if ((C.zf||C.sf!=C.of)) goto L_10213930;
  /* 1021391c push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1021391e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10213920 push 2 */
  push32((uint32_t)(0x2u));
  /* 10213922 push 0x10225fb8 */
  push32((uint32_t)(0x10225fb8u));
  /* 10213927 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x1021392du);
  /* 1021392d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10213930:;
  /* 10213930 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10213932 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10213934 push 1 */
  push32((uint32_t)(0x1u));
  /* 10213936 push 0x10226238 */
  push32((uint32_t)(0x10226238u));
  /* 1021393b call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10213941u);
  /* 10213941 push 5 */
  push32((uint32_t)(0x5u));
  /* 10213943 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10213945 push 2 */
  push32((uint32_t)(0x2u));
  /* 10213947 push 0x10226238 */
  push32((uint32_t)(0x10226238u));
  /* 1021394c call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10213952u);
  /* 10213952 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10213954 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10213956 push 0x10226058 */
  push32((uint32_t)(0x10226058u));
  /* 1021395b call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10213961u);
  /* 10213961 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10213963 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10213965 push 0x10226010 */
  push32((uint32_t)(0x10226010u));
  /* 1021396a call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10213970u);
  /* 10213970 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10213972 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10213974 push 0x10226018 */
  push32((uint32_t)(0x10226018u));
  /* 10213979 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021397fu);
  /* 1021397f add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213982 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10213984 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10213986 push 0x10226020 */
  push32((uint32_t)(0x10226020u));
  /* 1021398b call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10213991u);
  /* 10213991 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10213993 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10213995 push 0x10226250 */
  push32((uint32_t)(0x10226250u));
  /* 1021399a call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102139a0u);
  /* 102139a0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102139a2 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 102139a4 push 0x10226198 */
  push32((uint32_t)(0x10226198u));
  /* 102139a9 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102139afu);
  /* 102139af push 0x14 */
  push32((uint32_t)(0x14u));
  /* 102139b1 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 102139b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 102139b5 push 0x102262b8 */
  push32((uint32_t)(0x102262b8u));
  /* 102139ba call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x102139c0u);
  /* 102139c0 push 5 */
  push32((uint32_t)(0x5u));
  /* 102139c2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102139c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 102139c6 push 0x102262b8 */
  push32((uint32_t)(0x102262b8u));
  /* 102139cb call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x102139d1u);
  /* 102139d1 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102139d4 push 5 */
  push32((uint32_t)(0x5u));
  /* 102139d6 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 102139d8 push 3 */
  push32((uint32_t)(0x3u));
  /* 102139da push 0x102262b8 */
  push32((uint32_t)(0x102262b8u));
  /* 102139df call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x102139e5u);
  /* 102139e5 push 5 */
  push32((uint32_t)(0x5u));
  /* 102139e7 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 102139e9 push 5 */
  push32((uint32_t)(0x5u));
  /* 102139eb push 0x102262b8 */
  push32((uint32_t)(0x102262b8u));
  /* 102139f0 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x102139f6u);
  /* 102139f6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102139f8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 102139fa push 0x10223938 */
  push32((uint32_t)(0x10223938u));
  /* 102139ff call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10213a05u);
  /* 10213a05 call 0x10212630 */
  push32(0x10213a0au); f_10212630();
  /* 10213a0a push 0x10226250 */
  push32((uint32_t)(0x10226250u));
  /* 10213a0f mov edi, eax */
  EDI = (EAX);
  /* 10213a11 call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x10213a17u);
  /* 10213a17 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213a1a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10213a1c je 0x10213a3f */
  if (C.zf) goto L_10213a3f;
  /* 10213a1e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10213a20 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10213a22 push 0x10223938 */
  push32((uint32_t)(0x10223938u));
  /* 10213a27 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10213a2du);
  /* 10213a2d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10213a2f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10213a31 push 0x10223850 */
  push32((uint32_t)(0x10223850u));
  /* 10213a36 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10213a3cu);
  /* 10213a3c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10213a3f:;
  /* 10213a3f push 0x10223938 */
  push32((uint32_t)(0x10223938u));
  /* 10213a44 call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x10213a4au);
  /* 10213a4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213a4d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10213a4f je 0x10213a77 */
  if (C.zf) goto L_10213a77;
  /* 10213a51 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10213a53 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10213a55 push 0x10223920 */
  push32((uint32_t)(0x10223920u));
  /* 10213a5a call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10213a60u);
  /* 10213a60 push 0xa */
  push32((uint32_t)(0xau));
  /* 10213a62 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10213a64 push 0x10223860 */
  push32((uint32_t)(0x10223860u));
  /* 10213a69 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10213a6fu);
  /* 10213a6f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213a72 call 0x10213320 */
  push32(0x10213a77u); f_10213320();
L_10213a77:;
  /* 10213a77 push 0x10226090 */
  push32((uint32_t)(0x10226090u));
  /* 10213a7c call dword ptr [0x1022652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022652c))), 0x10213a82u);
  /* 10213a82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213a85 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10213a87 je 0x10213aae */
  if (C.zf) goto L_10213aae;
  /* 10213a89 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10213a8b push 0xa */
  push32((uint32_t)(0xau));
  /* 10213a8d push 0xa */
  push32((uint32_t)(0xau));
  /* 10213a8f push 0x10223648 */
  push32((uint32_t)(0x10223648u));
  /* 10213a94 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10213a9au);
  /* 10213a9a push 0xa */
  push32((uint32_t)(0xau));
  /* 10213a9c push 3 */
  push32((uint32_t)(0x3u));
  /* 10213a9e push 0xf */
  push32((uint32_t)(0xfu));
  /* 10213aa0 push 0x10223648 */
  push32((uint32_t)(0x10223648u));
  /* 10213aa5 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10213aabu);
  /* 10213aab add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10213aae:;
  /* 10213aae push 0 */
  push32((uint32_t)(0x0u));
  /* 10213ab0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10213ab2 call 0x102125f0 */
  push32(0x10213ab7u); f_102125f0();
  /* 10213ab7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10213ab9 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10213abfu);
  /* 10213abf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213ac2 cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10213ac7 jle 0x10213b0b */
  if ((C.zf||C.sf!=C.of)) goto L_10213b0b;
  /* 10213ac9 push 0x10223780 */
  push32((uint32_t)(0x10223780u));
  /* 10213ace call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x10213ad4u);
  /* 10213ad4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213ad7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10213ad9 je 0x10213b0b */
  if (C.zf) goto L_10213b0b;
  /* 10213adb push 1 */
  push32((uint32_t)(0x1u));
  /* 10213add call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10213ae3u);
  /* 10213ae3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213ae6 cmp eax, 0x1d4c */
  { uint32_t _a=(EAX),_b=(0x1d4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10213aeb jge 0x10213b0b */
  if ((C.sf==C.of)) goto L_10213b0b;
  /* 10213aed push 0x10223938 */
  push32((uint32_t)(0x10223938u));
  /* 10213af2 call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x10213af8u);
  /* 10213af8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213afb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10213afd jne 0x10213b0b */
  if (!C.zf) goto L_10213b0b;
  /* 10213aff push 1 */
  push32((uint32_t)(0x1u));
  /* 10213b01 push 1 */
  push32((uint32_t)(0x1u));
  /* 10213b03 call 0x102125f0 */
  push32(0x10213b08u); f_102125f0();
  /* 10213b08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10213b0b:;
  /* 10213b0b push 0x10223938 */
  push32((uint32_t)(0x10223938u));
  /* 10213b10 call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x10213b16u);
  /* 10213b16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213b19 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10213b1b je 0x10213c9c */
  if (C.zf) goto L_10213c9c;
  /* 10213b21 push 0x102260d0 */
  push32((uint32_t)(0x102260d0u));
  /* 10213b26 call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x10213b2cu);
  /* 10213b2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213b2f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10213b31 je 0x10213c9c */
  if (C.zf) goto L_10213c9c;
  /* 10213b37 push 0x10226198 */
  push32((uint32_t)(0x10226198u));
  /* 10213b3c call dword ptr [0x1022652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022652c))), 0x10213b42u);
  /* 10213b42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213b45 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10213b47 je 0x10213c9c */
  if (C.zf) goto L_10213c9c;
  /* 10213b4d cmp edi, 0xa */
  { uint32_t _a=(EDI),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10213b50 je 0x10213b57 */
  if (C.zf) goto L_10213b57;
  /* 10213b52 cmp edi, 0x12 */
  { uint32_t _a=(EDI),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10213b55 jne 0x10213b87 */
  if (!C.zf) goto L_10213b87;
L_10213b57:;
  /* 10213b57 push 3 */
  push32((uint32_t)(0x3u));
  /* 10213b59 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10213b5fu);
  /* 10213b5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213b62 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10213b67 jle 0x10213b87 */
  if ((C.zf||C.sf!=C.of)) goto L_10213b87;
  /* 10213b69 push 1 */
  push32((uint32_t)(0x1u));
  /* 10213b6b call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10213b71u);
  /* 10213b71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213b74 cmp eax, 0x2008 */
  { uint32_t _a=(EAX),_b=(0x2008u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10213b79 jge 0x10213b87 */
  if ((C.sf==C.of)) goto L_10213b87;
  /* 10213b7b push 1 */
  push32((uint32_t)(0x1u));
  /* 10213b7d push 1 */
  push32((uint32_t)(0x1u));
  /* 10213b7f call 0x102125f0 */
  push32(0x10213b84u); f_102125f0();
  /* 10213b84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10213b87:;
  /* 10213b87 push 0x10226000 */
  push32((uint32_t)(0x10226000u));
  /* 10213b8c call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x10213b92u);
  /* 10213b92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213b95 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10213b97 jne 0x10213bc9 */
  if (!C.zf) goto L_10213bc9;
  /* 10213b99 push 3 */
  push32((uint32_t)(0x3u));
  /* 10213b9b call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10213ba1u);
  /* 10213ba1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213ba4 cmp eax, 0xea60 */
  { uint32_t _a=(EAX),_b=(0xea60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10213ba9 jle 0x10213bc9 */
  if ((C.zf||C.sf!=C.of)) goto L_10213bc9;
  /* 10213bab push 1 */
  push32((uint32_t)(0x1u));
  /* 10213bad call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10213bb3u);
  /* 10213bb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213bb6 cmp eax, 0x2af8 */
  { uint32_t _a=(EAX),_b=(0x2af8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10213bbb jge 0x10213bc9 */
  if ((C.sf==C.of)) goto L_10213bc9;
  /* 10213bbd push 1 */
  push32((uint32_t)(0x1u));
  /* 10213bbf push 1 */
  push32((uint32_t)(0x1u));
  /* 10213bc1 call 0x102125f0 */
  push32(0x10213bc6u); f_102125f0();
  /* 10213bc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10213bc9:;
  /* 10213bc9 push 0x10226000 */
  push32((uint32_t)(0x10226000u));
  /* 10213bce call dword ptr [0x1022652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022652c))), 0x10213bd4u);
  /* 10213bd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213bd7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10213bd9 je 0x10213c9c */
  if (C.zf) goto L_10213c9c;
  /* 10213bdf cmp edi, 0x1c */
  { uint32_t _a=(EDI),_b=(0x1cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10213be2 jne 0x10213c22 */
  if (!C.zf) goto L_10213c22;
  /* 10213be4 push 3 */
  push32((uint32_t)(0x3u));
  /* 10213be6 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10213becu);
  /* 10213bec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213bef cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10213bf4 jle 0x10213cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_10213cf7;
  /* 10213bfa push 4 */
  push32((uint32_t)(0x4u));
  /* 10213bfc call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10213c02u);
  /* 10213c02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213c05 cmp eax, 0x1c84 */
  { uint32_t _a=(EAX),_b=(0x1c84u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10213c0a jle 0x10213cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_10213cf7;
  /* 10213c10 push 1 */
  push32((uint32_t)(0x1u));
  /* 10213c12 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10213c18u);
  /* 10213c18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213c1b cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10213c20 jmp 0x10213c8c */
  goto L_10213c8c;
L_10213c22:;
  /* 10213c22 cmp edi, 0x28 */
  { uint32_t _a=(EDI),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10213c25 jne 0x10213c65 */
  if (!C.zf) goto L_10213c65;
  /* 10213c27 push 3 */
  push32((uint32_t)(0x3u));
  /* 10213c29 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10213c2fu);
  /* 10213c2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213c32 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10213c37 jle 0x10213cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_10213cf7;
  /* 10213c3d push 4 */
  push32((uint32_t)(0x4u));
  /* 10213c3f call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10213c45u);
  /* 10213c45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213c48 cmp eax, 0x2648 */
  { uint32_t _a=(EAX),_b=(0x2648u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10213c4d jle 0x10213cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_10213cf7;
  /* 10213c53 push 1 */
  push32((uint32_t)(0x1u));
  /* 10213c55 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10213c5bu);
  /* 10213c5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213c5e cmp eax, 0x5dc0 */
  { uint32_t _a=(EAX),_b=(0x5dc0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10213c63 jmp 0x10213c8c */
  goto L_10213c8c;
L_10213c65:;
  /* 10213c65 cmp edi, 0x37 */
  { uint32_t _a=(EDI),_b=(0x37u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10213c68 jne 0x10213c9c */
  if (!C.zf) goto L_10213c9c;
  /* 10213c6a push 3 */
  push32((uint32_t)(0x3u));
  /* 10213c6c call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10213c72u);
  /* 10213c72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213c75 cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10213c7a jle 0x10213cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_10213cf7;
  /* 10213c7c push 1 */
  push32((uint32_t)(0x1u));
  /* 10213c7e call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10213c84u);
  /* 10213c84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213c87 cmp eax, 0x6590 */
  { uint32_t _a=(EAX),_b=(0x6590u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10213c8c:;
  /* 10213c8c jge 0x10213cf7 */
  if ((C.sf==C.of)) goto L_10213cf7;
  /* 10213c8e push 1 */
  push32((uint32_t)(0x1u));
  /* 10213c90 push 1 */
  push32((uint32_t)(0x1u));
  /* 10213c92 call 0x102125f0 */
  push32(0x10213c97u); f_102125f0();
  /* 10213c97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213c9a jmp 0x10213cf7 */
  goto L_10213cf7;
L_10213c9c:;
  /* 10213c9c cmp edi, 0x5f */
  { uint32_t _a=(EDI),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10213c9f jne 0x10213cf7 */
  if (!C.zf) goto L_10213cf7;
  /* 10213ca1 push 0xa */
  push32((uint32_t)(0xau));
  /* 10213ca3 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10213ca5 push 0x10223748 */
  push32((uint32_t)(0x10223748u));
  /* 10213caa call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10213cb0u);
  /* 10213cb0 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10213cb2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10213cb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10213cb6 push 0x10226378 */
  push32((uint32_t)(0x10226378u));
  /* 10213cbb call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10213cc1u);
  /* 10213cc1 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10213cc3 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10213cc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10213cc7 push 0x10226378 */
  push32((uint32_t)(0x10226378u));
  /* 10213ccc call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10213cd2u);
  /* 10213cd2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10213cd4 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10213cd6 push 3 */
  push32((uint32_t)(0x3u));
  /* 10213cd8 push 0x10226378 */
  push32((uint32_t)(0x10226378u));
  /* 10213cdd call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10213ce3u);
  /* 10213ce3 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10213ce5 push 0xa */
  push32((uint32_t)(0xau));
  /* 10213ce7 push 5 */
  push32((uint32_t)(0x5u));
  /* 10213ce9 push 0x10226378 */
  push32((uint32_t)(0x10226378u));
  /* 10213cee call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10213cf4u);
  /* 10213cf4 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10213cf7:;
  /* 10213cf7 cmp ebp, 0x50 */
  { uint32_t _a=(EBP),_b=(0x50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10213cfa jle 0x10213d53 */
  if ((C.zf||C.sf!=C.of)) goto L_10213d53;
  /* 10213cfc mov al, byte ptr [esp + 0x13] */
  AL = (r8((uint32_t)(ESP + 0x13)));
  /* 10213d00 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10213d02 je 0x10213d53 */
  if (C.zf) goto L_10213d53;
  /* 10213d04 push 0xa */
  push32((uint32_t)(0xau));
  /* 10213d06 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10213d08 push 1 */
  push32((uint32_t)(0x1u));
  /* 10213d0a push 0x102238b8 */
  push32((uint32_t)(0x102238b8u));
  /* 10213d0f call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10213d15u);
  /* 10213d15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213d18 cmp ebp, 0x5f */
  { uint32_t _a=(EBP),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10213d1b jle 0x10213d53 */
  if ((C.zf||C.sf!=C.of)) goto L_10213d53;
  /* 10213d1d push 0xa */
  push32((uint32_t)(0xau));
  /* 10213d1f push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10213d21 push 2 */
  push32((uint32_t)(0x2u));
  /* 10213d23 push 0x102238b8 */
  push32((uint32_t)(0x102238b8u));
  /* 10213d28 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10213d2eu);
  /* 10213d2e push 0xa */
  push32((uint32_t)(0xau));
  /* 10213d30 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10213d32 push 3 */
  push32((uint32_t)(0x3u));
  /* 10213d34 push 0x102238b8 */
  push32((uint32_t)(0x102238b8u));
  /* 10213d39 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10213d3fu);
  /* 10213d3f push 0xa */
  push32((uint32_t)(0xau));
  /* 10213d41 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10213d43 push 4 */
  push32((uint32_t)(0x4u));
  /* 10213d45 push 0x102238b8 */
  push32((uint32_t)(0x102238b8u));
  /* 10213d4a call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10213d50u);
  /* 10213d50 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10213d53:;
  /* 10213d53 mov bl, byte ptr [esp + 0x12] */
  BL = (r8((uint32_t)(ESP + 0x12)));
  /* 10213d57 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10213d59 je 0x10213d97 */
  if (C.zf) goto L_10213d97;
  /* 10213d5b push 0x10226250 */
  push32((uint32_t)(0x10226250u));
  /* 10213d60 call dword ptr [0x1022652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022652c))), 0x10213d66u);
  /* 10213d66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213d69 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10213d6b je 0x10213d97 */
  if (C.zf) goto L_10213d97;
  /* 10213d6d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10213d6f push 1 */
  push32((uint32_t)(0x1u));
  /* 10213d71 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10213d73 push 0x10226140 */
  push32((uint32_t)(0x10226140u));
  /* 10213d78 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10213d7eu);
  /* 10213d7e push 0x10226178 */
  push32((uint32_t)(0x10226178u));
  /* 10213d83 call dword ptr [0x1022652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022652c))), 0x10213d89u);
  /* 10213d89 push 0x10226090 */
  push32((uint32_t)(0x10226090u));
  /* 10213d8e call dword ptr [0x1022652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022652c))), 0x10213d94u);
  /* 10213d94 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10213d97:;
  /* 10213d97 push 0x102235f8 */
  push32((uint32_t)(0x102235f8u));
  /* 10213d9c call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10213da2u);
  /* 10213da2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10213da4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10213da6 push 3 */
  push32((uint32_t)(0x3u));
  /* 10213da8 push 0x102261d0 */
  push32((uint32_t)(0x102261d0u));
  /* 10213dad call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10213db3u);
  /* 10213db3 push 0x102260d0 */
  push32((uint32_t)(0x102260d0u));
  /* 10213db8 call dword ptr [0x1022652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022652c))), 0x10213dbeu);
  /* 10213dbe add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213dc1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10213dc3 je 0x10213dd9 */
  if (C.zf) goto L_10213dd9;
  /* 10213dc5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10213dc7 push 0xa */
  push32((uint32_t)(0xau));
  /* 10213dc9 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10213dcb push 0x102261d0 */
  push32((uint32_t)(0x102261d0u));
  /* 10213dd0 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10213dd6u);
  /* 10213dd6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10213dd9:;
  /* 10213dd9 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10213ddb je 0x10213ec5 */
  if (C.zf) goto L_10213ec5;
  /* 10213de1 push 0x10226250 */
  push32((uint32_t)(0x10226250u));
  /* 10213de6 call dword ptr [0x1022652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022652c))), 0x10213decu);
  /* 10213dec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213def test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10213df1 je 0x10213ec5 */
  if (C.zf) goto L_10213ec5;
  /* 10213df7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10213df9 jne 0x10213e31 */
  if (!C.zf) goto L_10213e31;
  /* 10213dfb push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10213dfd push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10213dff push 2 */
  push32((uint32_t)(0x2u));
  /* 10213e01 push 0x102260b8 */
  push32((uint32_t)(0x102260b8u));
  /* 10213e06 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10213e0cu);
  /* 10213e0c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10213e0e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10213e10 push 3 */
  push32((uint32_t)(0x3u));
  /* 10213e12 push 0x102260b8 */
  push32((uint32_t)(0x102260b8u));
  /* 10213e17 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10213e1du);
  /* 10213e1d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10213e1f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10213e21 push 4 */
  push32((uint32_t)(0x4u));
  /* 10213e23 push 0x102260b8 */
  push32((uint32_t)(0x102260b8u));
  /* 10213e28 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10213e2eu);
  /* 10213e2e add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10213e31:;
  /* 10213e31 push 0x102260c0 */
  push32((uint32_t)(0x102260c0u));
  /* 10213e36 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10213e3cu);
  /* 10213e3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213e3f cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10213e42 jle 0x10213e65 */
  if ((C.zf||C.sf!=C.of)) goto L_10213e65;
  /* 10213e44 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10213e46 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10213e48 push 0x102261e8 */
  push32((uint32_t)(0x102261e8u));
  /* 10213e4d call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10213e53u);
  /* 10213e53 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10213e55 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10213e57 push 0x102261f0 */
  push32((uint32_t)(0x102261f0u));
  /* 10213e5c call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10213e62u);
  /* 10213e62 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10213e65:;
  /* 10213e65 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10213e67 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10213e69 push 0x102260d0 */
  push32((uint32_t)(0x102260d0u));
  /* 10213e6e call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10213e74u);
  /* 10213e74 push 0x102238e8 */
  push32((uint32_t)(0x102238e8u));
  /* 10213e79 call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x10213e7fu);
  /* 10213e7f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213e82 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10213e84 je 0x10213ec5 */
  if (C.zf) goto L_10213ec5;
  /* 10213e86 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10213e88 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10213e8a push 0x10226148 */
  push32((uint32_t)(0x10226148u));
  /* 10213e8f call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10213e95u);
  /* 10213e95 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10213e97 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10213e99 push 0x10226158 */
  push32((uint32_t)(0x10226158u));
  /* 10213e9e call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10213ea4u);
  /* 10213ea4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10213ea6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10213ea8 push 0x10226160 */
  push32((uint32_t)(0x10226160u));
  /* 10213ead call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10213eb3u);
  /* 10213eb3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10213eb5 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10213eb7 push 0x10226150 */
  push32((uint32_t)(0x10226150u));
  /* 10213ebc call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10213ec2u);
  /* 10213ec2 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10213ec5:;
  /* 10213ec5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10213ec7 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10213ec9 push 0x10223780 */
  push32((uint32_t)(0x10223780u));
  /* 10213ece call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10213ed4u);
  /* 10213ed4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10213ed6 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10213ed8 push 0x102238c0 */
  push32((uint32_t)(0x102238c0u));
  /* 10213edd call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10213ee3u);
  /* 10213ee3 push 0x10226230 */
  push32((uint32_t)(0x10226230u));
  /* 10213ee8 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10213eeeu);
  /* 10213eee add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213ef1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10213ef4 jle 0x10213f31 */
  if ((C.zf||C.sf!=C.of)) goto L_10213f31;
  /* 10213ef6 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10213efa cmp eax, 0x12c */
  { uint32_t _a=(EAX),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10213eff jle 0x10213f31 */
  if ((C.zf||C.sf!=C.of)) goto L_10213f31;
  /* 10213f01 lea ecx, [eax - 0x32] */
  ECX = ((uint32_t)(EAX + -0x32));
  /* 10213f04 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10213f08 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 10213f0b cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10213f0d jge 0x10213f26 */
  if ((C.sf==C.of)) goto L_10213f26;
  /* 10213f0f push 0xa */
  push32((uint32_t)(0xau));
  /* 10213f11 push 0xa */
  push32((uint32_t)(0xau));
  /* 10213f13 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10213f18 push 0x102260c0 */
  push32((uint32_t)(0x102260c0u));
  /* 10213f1d call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10213f23u);
  /* 10213f23 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10213f26:;
  /* 10213f26 call 0x102132d0 */
  push32(0x10213f2bu); f_102132d0();
  /* 10213f2b jmp 0x10213f31 */
  goto L_10213f31;
L_10213f2d:;
  /* 10213f2d mov bl, byte ptr [esp + 0x12] */
  BL = (r8((uint32_t)(ESP + 0x12)));
L_10213f31:;
  /* 10213f31 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10213f33 je 0x10213f76 */
  if (C.zf) goto L_10213f76;
  /* 10213f35 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10213f37 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10213f39 push 0x10223610 */
  push32((uint32_t)(0x10223610u));
  /* 10213f3e call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10213f44u);
  /* 10213f44 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10213f46 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10213f48 push 0x102236e8 */
  push32((uint32_t)(0x102236e8u));
  /* 10213f4d call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10213f53u);
  /* 10213f53 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10213f55 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10213f57 push 0x10223608 */
  push32((uint32_t)(0x10223608u));
  /* 10213f5c call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10213f62u);
  /* 10213f62 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10213f64 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10213f66 push 2 */
  push32((uint32_t)(0x2u));
  /* 10213f68 push 0x10226230 */
  push32((uint32_t)(0x10226230u));
  /* 10213f6d call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10213f73u);
  /* 10213f73 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10213f76:;
  /* 10213f76 push 0x10223780 */
  push32((uint32_t)(0x10223780u));
  /* 10213f7b call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x10213f81u);
  /* 10213f81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213f84 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10213f86 je 0x10213fa9 */
  if (C.zf) goto L_10213fa9;
  /* 10213f88 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10213f8a push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10213f8c push 0x102261d8 */
  push32((uint32_t)(0x102261d8u));
  /* 10213f91 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10213f97u);
  /* 10213f97 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10213f99 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10213f9b push 0x102261e0 */
  push32((uint32_t)(0x102261e0u));
  /* 10213fa0 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10213fa6u);
  /* 10213fa6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10213fa9:;
  /* 10213fa9 push 0x10223858 */
  push32((uint32_t)(0x10223858u));
  /* 10213fae call dword ptr [0x10226524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226524))), 0x10213fb4u);
  /* 10213fb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213fb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10213fb9 je 0x10214223 */
  if (C.zf) goto L_10214223;
  /* 10213fbf push 0x10225f00 */
  push32((uint32_t)(0x10225f00u));
  /* 10213fc4 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10213fcau);
  /* 10213fca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213fcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10213fcf je 0x1021402a */
  if (C.zf) goto L_1021402a;
  /* 10213fd1 push 0x10226250 */
  push32((uint32_t)(0x10226250u));
  /* 10213fd6 call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x10213fdcu);
  /* 10213fdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213fdf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10213fe1 jne 0x1021402a */
  if (!C.zf) goto L_1021402a;
  /* 10213fe3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10213fe5 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10213febu);
  /* 10213feb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10213fee cmp eax, 0x320 */
  { uint32_t _a=(EAX),_b=(0x320u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10213ff3 jle 0x1021402a */
  if ((C.zf||C.sf!=C.of)) goto L_1021402a;
  /* 10213ff5 push 3 */
  push32((uint32_t)(0x3u));
  /* 10213ff7 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10213ffdu);
  /* 10213ffd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214000 cmp eax, 0x1770 */
  { uint32_t _a=(EAX),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10214005 jge 0x1021402a */
  if ((C.sf==C.of)) goto L_1021402a;
  /* 10214007 push 4 */
  push32((uint32_t)(0x4u));
  /* 10214009 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x1021400fu);
  /* 1021400f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214012 cmp eax, 0xbb8 */
  { uint32_t _a=(EAX),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10214017 jle 0x1021402a */
  if ((C.zf||C.sf!=C.of)) goto L_1021402a;
  /* 10214019 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1021401e push 3 */
  push32((uint32_t)(0x3u));
  /* 10214020 push 4 */
  push32((uint32_t)(0x4u));
  /* 10214022 call 0x10212610 */
  push32(0x10214027u); f_10212610();
  /* 10214027 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1021402a:;
  /* 1021402a push 3 */
  push32((uint32_t)(0x3u));
  /* 1021402c call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10214032u);
  /* 10214032 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214035 cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021403a jge 0x1021405f */
  if ((C.sf==C.of)) goto L_1021405f;
  /* 1021403c push 2 */
  push32((uint32_t)(0x2u));
  /* 1021403e call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10214044u);
  /* 10214044 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214047 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021404c jle 0x1021405f */
  if ((C.zf||C.sf!=C.of)) goto L_1021405f;
  /* 1021404e push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10214053 push 3 */
  push32((uint32_t)(0x3u));
  /* 10214055 push 2 */
  push32((uint32_t)(0x2u));
  /* 10214057 call 0x10212610 */
  push32(0x1021405cu); f_10212610();
  /* 1021405c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1021405f:;
  /* 1021405f push 0x102261d8 */
  push32((uint32_t)(0x102261d8u));
  /* 10214064 call dword ptr [0x1022652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022652c))), 0x1021406au);
  /* 1021406a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021406d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1021406f je 0x10214197 */
  if (C.zf) goto L_10214197;
  /* 10214075 push 0x102261e0 */
  push32((uint32_t)(0x102261e0u));
  /* 1021407a call dword ptr [0x1022652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022652c))), 0x10214080u);
  /* 10214080 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214083 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10214085 je 0x10214197 */
  if (C.zf) goto L_10214197;
  /* 1021408b push 2 */
  push32((uint32_t)(0x2u));
  /* 1021408d call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10214093u);
  /* 10214093 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214096 cmp eax, 0x1adb0 */
  { uint32_t _a=(EAX),_b=(0x1adb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021409b jle 0x102140ae */
  if ((C.zf||C.sf!=C.of)) goto L_102140ae;
  /* 1021409d push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 102140a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 102140a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 102140a6 call 0x10212610 */
  push32(0x102140abu); f_10212610();
  /* 102140ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102140ae:;
  /* 102140ae push 0 */
  push32((uint32_t)(0x0u));
  /* 102140b0 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x102140b6u);
  /* 102140b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102140b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102140bb je 0x102141ba */
  if (C.zf) goto L_102141ba;
  /* 102140c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 102140c3 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x102140c9u);
  /* 102140c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102140cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102140ce je 0x1021413b */
  if (C.zf) goto L_1021413b;
  /* 102140d0 push 4 */
  push32((uint32_t)(0x4u));
  /* 102140d2 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x102140d8u);
  /* 102140d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102140db cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102140e0 jge 0x1021413b */
  if ((C.sf==C.of)) goto L_1021413b;
  /* 102140e2 push 4 */
  push32((uint32_t)(0x4u));
  /* 102140e4 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x102140eau);
  /* 102140ea push 5 */
  push32((uint32_t)(0x5u));
  /* 102140ec mov esi, eax */
  ESI = (EAX);
  /* 102140ee call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x102140f4u);
  /* 102140f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102140f7 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102140f9 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 102140fe jge 0x1021411f */
  if ((C.sf==C.of)) goto L_1021411f;
  /* 10214100 push 5 */
  push32((uint32_t)(0x5u));
  /* 10214102 push 2 */
  push32((uint32_t)(0x2u));
  /* 10214104 call 0x10212610 */
  push32(0x10214109u); f_10212610();
  /* 10214109 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 1021410e push 4 */
  push32((uint32_t)(0x4u));
  /* 10214110 push 2 */
  push32((uint32_t)(0x2u));
  /* 10214112 call 0x10212610 */
  push32(0x10214117u); f_10212610();
  /* 10214117 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021411a jmp 0x102141ba */
  goto L_102141ba;
L_1021411f:;
  /* 1021411f push 4 */
  push32((uint32_t)(0x4u));
  /* 10214121 push 2 */
  push32((uint32_t)(0x2u));
  /* 10214123 call 0x10212610 */
  push32(0x10214128u); f_10212610();
  /* 10214128 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 1021412d push 5 */
  push32((uint32_t)(0x5u));
  /* 1021412f push 2 */
  push32((uint32_t)(0x2u));
  /* 10214131 call 0x10212610 */
  push32(0x10214136u); f_10212610();
  /* 10214136 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214139 jmp 0x102141ba */
  goto L_102141ba;
L_1021413b:;
  /* 1021413b push 5 */
  push32((uint32_t)(0x5u));
  /* 1021413d call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10214143u);
  /* 10214143 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214146 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021414b jge 0x1021416d */
  if ((C.sf==C.of)) goto L_1021416d;
  /* 1021414d push 0 */
  push32((uint32_t)(0x0u));
  /* 1021414f call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10214155u);
  /* 10214155 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214158 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021415a je 0x1021416d */
  if (C.zf) goto L_1021416d;
  /* 1021415c push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10214161 push 5 */
  push32((uint32_t)(0x5u));
  /* 10214163 push 2 */
  push32((uint32_t)(0x2u));
  /* 10214165 call 0x10212610 */
  push32(0x1021416au); f_10212610();
  /* 1021416a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1021416d:;
  /* 1021416d push 5 */
  push32((uint32_t)(0x5u));
  /* 1021416f call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10214175u);
  /* 10214175 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214178 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021417d jge 0x102141ba */
  if ((C.sf==C.of)) goto L_102141ba;
  /* 1021417f push 0 */
  push32((uint32_t)(0x0u));
  /* 10214181 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10214187u);
  /* 10214187 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021418a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021418c je 0x102141ba */
  if (C.zf) goto L_102141ba;
  /* 1021418e push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10214193 push 5 */
  push32((uint32_t)(0x5u));
  /* 10214195 jmp 0x102141b0 */
  goto L_102141b0;
L_10214197:;
  /* 10214197 push 2 */
  push32((uint32_t)(0x2u));
  /* 10214199 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x1021419fu);
  /* 1021419f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102141a2 cmp eax, 0x1adb0 */
  { uint32_t _a=(EAX),_b=(0x1adb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102141a7 jle 0x102141ba */
  if ((C.zf||C.sf!=C.of)) goto L_102141ba;
  /* 102141a9 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 102141ae push 1 */
  push32((uint32_t)(0x1u));
L_102141b0:;
  /* 102141b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 102141b2 call 0x10212610 */
  push32(0x102141b7u); f_10212610();
  /* 102141b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102141ba:;
  /* 102141ba push 0 */
  push32((uint32_t)(0x0u));
  /* 102141bc call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x102141c2u);
  /* 102141c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102141c5 cmp eax, 0x249f0 */
  { uint32_t _a=(EAX),_b=(0x249f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102141ca jle 0x102141dd */
  if ((C.zf||C.sf!=C.of)) goto L_102141dd;
  /* 102141cc push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 102141d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 102141d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 102141d5 call 0x10212610 */
  push32(0x102141dau); f_10212610();
  /* 102141da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102141dd:;
  /* 102141dd push 4 */
  push32((uint32_t)(0x4u));
  /* 102141df call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x102141e5u);
  /* 102141e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102141e8 cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102141ed jle 0x10214200 */
  if ((C.zf||C.sf!=C.of)) goto L_10214200;
  /* 102141ef push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 102141f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 102141f6 push 4 */
  push32((uint32_t)(0x4u));
  /* 102141f8 call 0x10212610 */
  push32(0x102141fdu); f_10212610();
  /* 102141fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10214200:;
  /* 10214200 push 5 */
  push32((uint32_t)(0x5u));
  /* 10214202 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10214208u);
  /* 10214208 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021420b cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10214210 jle 0x10214223 */
  if ((C.zf||C.sf!=C.of)) goto L_10214223;
  /* 10214212 push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 10214217 push 1 */
  push32((uint32_t)(0x1u));
  /* 10214219 push 5 */
  push32((uint32_t)(0x5u));
  /* 1021421b call 0x10212610 */
  push32(0x10214220u); f_10212610();
  /* 10214220 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10214223:;
  /* 10214223 pop edi */
  EDI = (pop32());
  /* 10214224 pop esi */
  ESI = (pop32());
  /* 10214225 pop ebp */
  EBP = (pop32());
  /* 10214226 pop ebx */
  EBX = (pop32());
  /* 10214227 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021422a ret  */
  ESPCHK(0x10213360u, _esp0);
  ESP += 4; return;
}

/* FUN_10004230 @ 0x10214230 (209 bytes, 56 insns) */
void f_10214230(void) {
  FTRACE(0x10214230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10214230 push 3 */
  push32((uint32_t)(0x3u));
  /* 10214232 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10214238u);
  /* 10214238 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021423b cmp eax, 0x672 */
  { uint32_t _a=(EAX),_b=(0x672u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10214240 jle 0x10214300 */
  if ((C.zf||C.sf!=C.of)) goto L_10214300;
  /* 10214246 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10214248 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1021424a push 0x10226330 */
  push32((uint32_t)(0x10226330u));
  /* 1021424f call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10214255u);
  /* 10214255 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10214257 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10214259 push 0x10226338 */
  push32((uint32_t)(0x10226338u));
  /* 1021425e call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10214264u);
  /* 10214264 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10214266 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10214268 push 0x10226320 */
  push32((uint32_t)(0x10226320u));
  /* 1021426d call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10214273u);
  /* 10214273 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10214275 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10214277 push 0x10226328 */
  push32((uint32_t)(0x10226328u));
  /* 1021427c call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10214282u);
  /* 10214282 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10214284 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10214286 push 0x10226340 */
  push32((uint32_t)(0x10226340u));
  /* 1021428b call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10214291u);
  /* 10214291 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10214293 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10214295 push 0x10226278 */
  push32((uint32_t)(0x10226278u));
  /* 1021429a call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102142a0u);
  /* 102142a0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102142a3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102142a5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102142a7 push 0x10226260 */
  push32((uint32_t)(0x10226260u));
  /* 102142ac call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102142b2u);
  /* 102142b2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102142b4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102142b6 push 0x10226268 */
  push32((uint32_t)(0x10226268u));
  /* 102142bb call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102142c1u);
  /* 102142c1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102142c3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102142c5 push 0x10226280 */
  push32((uint32_t)(0x10226280u));
  /* 102142ca call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102142d0u);
  /* 102142d0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102142d2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102142d4 push 0x10226288 */
  push32((uint32_t)(0x10226288u));
  /* 102142d9 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102142dfu);
  /* 102142df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102142e1 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102142e3 push 0x10226240 */
  push32((uint32_t)(0x10226240u));
  /* 102142e8 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102142eeu);
  /* 102142ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102142f0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102142f2 push 0x10225fa8 */
  push32((uint32_t)(0x10225fa8u));
  /* 102142f7 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102142fdu);
  /* 102142fd add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10214300:;
  /* 10214300 ret  */
  ESPCHK(0x10214230u, _esp0);
  ESP += 4; return;
}

/* FUN_10004310 @ 0x10214310 (79 bytes, 22 insns) */
void f_10214310(void) {
  FTRACE(0x10214310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10214310 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10214312 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10214314 push 0x102238f0 */
  push32((uint32_t)(0x102238f0u));
  /* 10214319 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021431fu);
  /* 1021431f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10214321 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10214323 push 0x102238f8 */
  push32((uint32_t)(0x102238f8u));
  /* 10214328 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021432eu);
  /* 1021432e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10214330 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10214332 push 0x102238e8 */
  push32((uint32_t)(0x102238e8u));
  /* 10214337 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021433du);
  /* 1021433d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1021433f push 0xa */
  push32((uint32_t)(0xau));
  /* 10214341 push 0x10225f58 */
  push32((uint32_t)(0x10225f58u));
  /* 10214346 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021434cu);
  /* 1021434c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1021434e push 0xa */
  push32((uint32_t)(0xau));
  /* 10214350 push 0x10225f48 */
  push32((uint32_t)(0x10225f48u));
  /* 10214355 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021435bu);
  /* 1021435b add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021435e ret  */
  ESPCHK(0x10214310u, _esp0);
  ESP += 4; return;
}

/* FUN_10004360 @ 0x10214360 (127 bytes, 35 insns) */
void f_10214360(void) {
  FTRACE(0x10214360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10214360 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10214362 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10214364 push 0x102261b8 */
  push32((uint32_t)(0x102261b8u));
  /* 10214369 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021436fu);
  /* 1021436f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10214371 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10214373 push 0x102261b0 */
  push32((uint32_t)(0x102261b0u));
  /* 10214378 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021437eu);
  /* 1021437e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10214380 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10214382 push 0x10226180 */
  push32((uint32_t)(0x10226180u));
  /* 10214387 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021438du);
  /* 1021438d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1021438f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10214391 push 0x10226178 */
  push32((uint32_t)(0x10226178u));
  /* 10214396 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021439cu);
  /* 1021439c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1021439e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 102143a0 push 0x10226078 */
  push32((uint32_t)(0x10226078u));
  /* 102143a5 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102143abu);
  /* 102143ab push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102143ad push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 102143af push 0x10226080 */
  push32((uint32_t)(0x10226080u));
  /* 102143b4 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102143bau);
  /* 102143ba add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102143bd push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102143bf push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 102143c1 push 0x10226088 */
  push32((uint32_t)(0x10226088u));
  /* 102143c6 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102143ccu);
  /* 102143cc push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102143ce push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 102143d0 push 0x10226090 */
  push32((uint32_t)(0x10226090u));
  /* 102143d5 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102143dbu);
  /* 102143db add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102143de ret  */
  ESPCHK(0x10214360u, _esp0);
  ESP += 4; return;
}

/* ProcessMiddleSeaAI @ 0x102143e0 (3643 bytes, 1035 insns) */
void f_102143e0(void) {
  FTRACE(0x102143e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102143e0 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102143e3 push ebx */
  push32((uint32_t)(EBX));
  /* 102143e4 push ebp */
  push32((uint32_t)(EBP));
  /* 102143e5 push esi */
  push32((uint32_t)(ESI));
  /* 102143e6 push edi */
  push32((uint32_t)(EDI));
  /* 102143e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 102143e9 call 0x10212760 */
  push32(0x102143eeu); f_10212760();
  /* 102143ee push 0x1021f030 */
  push32((uint32_t)(0x1021f030u));
  /* 102143f3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 102143f5 call dword ptr [0x102264ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264ec))), 0x102143fbu);
  /* 102143fb push 0x10226170 */
  push32((uint32_t)(0x10226170u));
  /* 10214400 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10214406u);
  /* 10214406 push 3 */
  push32((uint32_t)(0x3u));
  /* 10214408 mov ebx, eax */
  EBX = (EAX);
  /* 1021440a call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10214410u);
  /* 10214410 mov ebp, eax */
  EBP = (EAX);
  /* 10214412 push 0x10226198 */
  push32((uint32_t)(0x10226198u));
  /* 10214417 mov dword ptr [esp + 0x30], ebp */
  w32((uint32_t)(ESP + 0x30), (EBP));
  /* 1021441b call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x10214421u);
  /* 10214421 push 0x10223668 */
  push32((uint32_t)(0x10223668u));
  /* 10214426 mov byte ptr [esp + 0x2f], al */
  w8((uint32_t)(ESP + 0x2f), (AL));
  /* 1021442a call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10214430u);
  /* 10214430 push 0x10226000 */
  push32((uint32_t)(0x10226000u));
  /* 10214435 call dword ptr [0x1022652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022652c))), 0x1021443bu);
  /* 1021443b push 0x102260c0 */
  push32((uint32_t)(0x102260c0u));
  /* 10214440 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10214446u);
  /* 10214446 push 0x10226390 */
  push32((uint32_t)(0x10226390u));
  /* 1021444b call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10214451u);
  /* 10214451 push 0x10226310 */
  push32((uint32_t)(0x10226310u));
  /* 10214456 mov esi, eax */
  ESI = (EAX);
  /* 10214458 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x1021445eu);
  /* 1021445e push 0x10223668 */
  push32((uint32_t)(0x10223668u));
  /* 10214463 mov edi, eax */
  EDI = (EAX);
  /* 10214465 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x1021446bu);
  /* 1021446b add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021446d add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214470 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10214472 mov byte ptr [esp + 0x12], 1 */
  w8((uint32_t)(ESP + 0x12), (0x1u));
  /* 10214477 mov dword ptr [esp + 0x14], eax */
  w32((uint32_t)(ESP + 0x14), (EAX));
  /* 1021447b call 0x10212660 */
  push32(0x10214480u); f_10212660();
  /* 10214480 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10214482 jle 0x10214498 */
  if ((C.zf||C.sf!=C.of)) goto L_10214498;
  /* 10214484 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10214486 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10214488 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1021448a push 0x10226308 */
  push32((uint32_t)(0x10226308u));
  /* 1021448f call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10214495u);
  /* 10214495 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10214498:;
  /* 10214498 push 0x102238b8 */
  push32((uint32_t)(0x102238b8u));
  /* 1021449d call dword ptr [0x10226524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226524))), 0x102144a3u);
  /* 102144a3 push 0x102238b8 */
  push32((uint32_t)(0x102238b8u));
  /* 102144a8 mov esi, eax */
  ESI = (EAX);
  /* 102144aa call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x102144b0u);
  /* 102144b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102144b3 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102144b5 je 0x102144bc */
  if (C.zf) goto L_102144bc;
  /* 102144b7 mov byte ptr [esp + 0x12], 0 */
  w8((uint32_t)(ESP + 0x12), (0x0u));
L_102144bc:;
  /* 102144bc test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 102144be je 0x10215213 */
  if (C.zf) goto L_10215213;
  /* 102144c4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102144c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102144c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 102144ca push 0x10225fb8 */
  push32((uint32_t)(0x10225fb8u));
  /* 102144cf call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x102144d5u);
  /* 102144d5 push 0x10225fb8 */
  push32((uint32_t)(0x10225fb8u));
  /* 102144da call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x102144e0u);
  /* 102144e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102144e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102144e5 je 0x10215213 */
  if (C.zf) goto L_10215213;
  /* 102144eb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102144ed push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102144ef push 0x10226358 */
  push32((uint32_t)(0x10226358u));
  /* 102144f4 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102144fau);
  /* 102144fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102144fd call dword ptr [0x10226550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226550))), 0x10214503u);
  /* 10214503 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10214505 jne 0x1021455c */
  if (!C.zf) goto L_1021455c;
  /* 10214507 cmp ebp, 0x2bc */
  { uint32_t _a=(EBP),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021450d jle 0x10214534 */
  if ((C.zf||C.sf!=C.of)) goto L_10214534;
  /* 1021450f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10214511 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10214513 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10214515 push 0x10226170 */
  push32((uint32_t)(0x10226170u));
  /* 1021451a call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10214520u);
  /* 10214520 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10214522 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10214524 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10214526 push 0x10223668 */
  push32((uint32_t)(0x10223668u));
  /* 1021452b call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10214531u);
  /* 10214531 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10214534:;
  /* 10214534 cmp ebp, 0x3e8 */
  { uint32_t _a=(EBP),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021453a jle 0x10214548 */
  if ((C.zf||C.sf!=C.of)) goto L_10214548;
  /* 1021453c cmp dword ptr [esp + 0x14], 0x1e */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10214541 jle 0x10214548 */
  if ((C.zf||C.sf!=C.of)) goto L_10214548;
  /* 10214543 call 0x10214230 */
  push32(0x10214548u); f_10214230();
L_10214548:;
  /* 10214548 push 1 */
  push32((uint32_t)(0x1u));
  /* 1021454a push 1 */
  push32((uint32_t)(0x1u));
  /* 1021454c push 0 */
  push32((uint32_t)(0x0u));
  /* 1021454e call dword ptr [0x102264f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264f4))), 0x10214554u);
  /* 10214554 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214557 jmp 0x1021461f */
  goto L_1021461f;
L_1021455c:;
  /* 1021455c mov eax, dword ptr [0x10226574] */
  EAX = (r32((uint32_t)(0x10226574)));
  /* 10214561 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10214564 je 0x10214578 */
  if (C.zf) goto L_10214578;
  /* 10214566 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10214567 je 0x10214572 */
  if (C.zf) goto L_10214572;
  /* 10214569 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1021456a jne 0x102145a4 */
  if (!C.zf) goto L_102145a4;
  /* 1021456c push 9 */
  push32((uint32_t)(0x9u));
  /* 1021456e push 4 */
  push32((uint32_t)(0x4u));
  /* 10214570 jmp 0x10214599 */
  goto L_10214599;
L_10214572:;
  /* 10214572 push 4 */
  push32((uint32_t)(0x4u));
  /* 10214574 push 9 */
  push32((uint32_t)(0x9u));
  /* 10214576 jmp 0x10214599 */
  goto L_10214599;
L_10214578:;
  /* 10214578 cmp ebp, 0x2ee0 */
  { uint32_t _a=(EBP),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021457e jle 0x1021458f */
  if ((C.zf||C.sf!=C.of)) goto L_1021458f;
  /* 10214580 push 6 */
  push32((uint32_t)(0x6u));
  /* 10214582 push 6 */
  push32((uint32_t)(0x6u));
  /* 10214584 push 9 */
  push32((uint32_t)(0x9u));
  /* 10214586 call dword ptr [0x102264f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264f4))), 0x1021458cu);
  /* 1021458c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1021458f:;
  /* 1021458f push 5 */
  push32((uint32_t)(0x5u));
  /* 10214591 cmp ebp, 0x1f40 */
  { uint32_t _a=(EBP),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10214597 push 5 */
  push32((uint32_t)(0x5u));
L_10214599:;
  /* 10214599 push 9 */
  push32((uint32_t)(0x9u));
  /* 1021459b call dword ptr [0x102264f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264f4))), 0x102145a1u);
  /* 102145a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102145a4:;
  /* 102145a4 mov al, byte ptr [esp + 0x13] */
  AL = (r8((uint32_t)(ESP + 0x13)));
  /* 102145a8 mov esi, 0x1c2 */
  ESI = (0x1c2u);
  /* 102145ad test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102145af je 0x102145b6 */
  if (C.zf) goto L_102145b6;
  /* 102145b1 mov esi, 0x17c */
  ESI = (0x17cu);
L_102145b6:;
  /* 102145b6 cmp ebx, 0x19 */
  { uint32_t _a=(EBX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102145b9 jge 0x102145d7 */
  if ((C.sf==C.of)) goto L_102145d7;
  /* 102145bb cmp ebp, 0x12c */
  { uint32_t _a=(EBP),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102145c1 jle 0x10214613 */
  if ((C.zf||C.sf!=C.of)) goto L_10214613;
  /* 102145c3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102145c5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102145c7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102145c9 push 0x10226170 */
  push32((uint32_t)(0x10226170u));
  /* 102145ce call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x102145d4u);
  /* 102145d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102145d7:;
  /* 102145d7 cmp ebp, 0x12c */
  { uint32_t _a=(EBP),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102145dd jle 0x10214613 */
  if ((C.zf||C.sf!=C.of)) goto L_10214613;
  /* 102145df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102145e1 push 0xe8 */
  push32((uint32_t)(0xe8u));
  /* 102145e6 push esi */
  push32((uint32_t)(ESI));
  /* 102145e7 push 0x10226170 */
  push32((uint32_t)(0x10226170u));
  /* 102145ec call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x102145f2u);
  /* 102145f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102145f5 cmp ebp, 0x190 */
  { uint32_t _a=(EBP),_b=(0x190u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102145fb jle 0x10214613 */
  if ((C.zf||C.sf!=C.of)) goto L_10214613;
  /* 102145fd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102145ff push 0xf4 */
  push32((uint32_t)(0xf4u));
  /* 10214604 push esi */
  push32((uint32_t)(ESI));
  /* 10214605 push 0x10223668 */
  push32((uint32_t)(0x10223668u));
  /* 1021460a call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10214610u);
  /* 10214610 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10214613:;
  /* 10214613 cmp dword ptr [esp + 0x14], 0x1e */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10214618 jle 0x1021461f */
  if ((C.zf||C.sf!=C.of)) goto L_1021461f;
  /* 1021461a call 0x10214230 */
  push32(0x1021461fu); f_10214230();
L_1021461f:;
  /* 1021461f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10214621 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10214623 push 1 */
  push32((uint32_t)(0x1u));
  /* 10214625 push 0x10225f98 */
  push32((uint32_t)(0x10225f98u));
  /* 1021462a call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10214630u);
  /* 10214630 push 5 */
  push32((uint32_t)(0x5u));
  /* 10214632 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10214634 push 2 */
  push32((uint32_t)(0x2u));
  /* 10214636 push 0x10225f98 */
  push32((uint32_t)(0x10225f98u));
  /* 1021463b call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10214641u);
  /* 10214641 push 5 */
  push32((uint32_t)(0x5u));
  /* 10214643 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10214645 push 3 */
  push32((uint32_t)(0x3u));
  /* 10214647 push 0x10225f98 */
  push32((uint32_t)(0x10225f98u));
  /* 1021464c call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10214652u);
  /* 10214652 push 0x10226230 */
  push32((uint32_t)(0x10226230u));
  /* 10214657 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x1021465du);
  /* 1021465d add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214660 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10214663 jle 0x102146d6 */
  if ((C.zf||C.sf!=C.of)) goto L_102146d6;
  /* 10214665 push 5 */
  push32((uint32_t)(0x5u));
  /* 10214667 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10214669 push 2 */
  push32((uint32_t)(0x2u));
  /* 1021466b push 0x10225f98 */
  push32((uint32_t)(0x10225f98u));
  /* 10214670 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10214676u);
  /* 10214676 push 0x10225f98 */
  push32((uint32_t)(0x10225f98u));
  /* 1021467b call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10214681u);
  /* 10214681 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214684 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10214687 jle 0x1021469d */
  if ((C.zf||C.sf!=C.of)) goto L_1021469d;
  /* 10214689 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1021468b push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1021468d push 1 */
  push32((uint32_t)(0x1u));
  /* 1021468f push 0x102260b8 */
  push32((uint32_t)(0x102260b8u));
  /* 10214694 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x1021469au);
  /* 1021469a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1021469d:;
  /* 1021469d push 0x10225f98 */
  push32((uint32_t)(0x10225f98u));
  /* 102146a2 call dword ptr [0x10226524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226524))), 0x102146a8u);
  /* 102146a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102146ab cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102146ae jle 0x102146c4 */
  if ((C.zf||C.sf!=C.of)) goto L_102146c4;
  /* 102146b0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102146b2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102146b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 102146b6 push 0x10223858 */
  push32((uint32_t)(0x10223858u));
  /* 102146bb call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x102146c1u);
  /* 102146c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102146c4:;
  /* 102146c4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102146c6 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 102146c8 push 0x102260f0 */
  push32((uint32_t)(0x102260f0u));
  /* 102146cd call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102146d3u);
  /* 102146d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102146d6:;
  /* 102146d6 push 0x10226170 */
  push32((uint32_t)(0x10226170u));
  /* 102146db call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x102146e1u);
  /* 102146e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102146e4 cmp eax, 0x23 */
  { uint32_t _a=(EAX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102146e7 jle 0x102146fd */
  if ((C.zf||C.sf!=C.of)) goto L_102146fd;
  /* 102146e9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102146eb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102146ed push 1 */
  push32((uint32_t)(0x1u));
  /* 102146ef push 0x10223858 */
  push32((uint32_t)(0x10223858u));
  /* 102146f4 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x102146fau);
  /* 102146fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102146fd:;
  /* 102146fd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102146ff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10214701 push 1 */
  push32((uint32_t)(0x1u));
  /* 10214703 push 0x102261c8 */
  push32((uint32_t)(0x102261c8u));
  /* 10214708 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x1021470eu);
  /* 1021470e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10214710 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10214712 push 1 */
  push32((uint32_t)(0x1u));
  /* 10214714 push 0x10226230 */
  push32((uint32_t)(0x10226230u));
  /* 10214719 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x1021471fu);
  /* 1021471f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10214721 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10214723 push 2 */
  push32((uint32_t)(0x2u));
  /* 10214725 push 0x10226230 */
  push32((uint32_t)(0x10226230u));
  /* 1021472a call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10214730u);
  /* 10214730 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10214732 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10214734 push 1 */
  push32((uint32_t)(0x1u));
  /* 10214736 push 0x10225fb0 */
  push32((uint32_t)(0x10225fb0u));
  /* 1021473b call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10214741u);
  /* 10214741 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214744 push 5 */
  push32((uint32_t)(0x5u));
  /* 10214746 push 0xa */
  push32((uint32_t)(0xau));
  /* 10214748 push 2 */
  push32((uint32_t)(0x2u));
  /* 1021474a push 0x102261c8 */
  push32((uint32_t)(0x102261c8u));
  /* 1021474f call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10214755u);
  /* 10214755 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10214757 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10214759 push 0x10223640 */
  push32((uint32_t)(0x10223640u));
  /* 1021475e call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10214764u);
  /* 10214764 push 0x10225f00 */
  push32((uint32_t)(0x10225f00u));
  /* 10214769 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x1021476fu);
  /* 1021476f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214772 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10214774 jle 0x1021478a */
  if ((C.zf||C.sf!=C.of)) goto L_1021478a;
  /* 10214776 push 3 */
  push32((uint32_t)(0x3u));
  /* 10214778 push 5 */
  push32((uint32_t)(0x5u));
  /* 1021477a push 1 */
  push32((uint32_t)(0x1u));
  /* 1021477c push 0x102260d8 */
  push32((uint32_t)(0x102260d8u));
  /* 10214781 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10214787u);
  /* 10214787 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1021478a:;
  /* 1021478a call dword ptr [0x10226550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226550))), 0x10214790u);
  /* 10214790 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10214792 je 0x102147a8 */
  if (C.zf) goto L_102147a8;
  /* 10214794 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10214796 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10214798 push 1 */
  push32((uint32_t)(0x1u));
  /* 1021479a push 0x10225f00 */
  push32((uint32_t)(0x10225f00u));
  /* 1021479f call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x102147a5u);
  /* 102147a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102147a8:;
  /* 102147a8 push 0xa */
  push32((uint32_t)(0xau));
  /* 102147aa push 0x63 */
  push32((uint32_t)(0x63u));
  /* 102147ac push 1 */
  push32((uint32_t)(0x1u));
  /* 102147ae push 0x10225fc8 */
  push32((uint32_t)(0x10225fc8u));
  /* 102147b3 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x102147b9u);
  /* 102147b9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102147bb push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102147bd push 1 */
  push32((uint32_t)(0x1u));
  /* 102147bf push 0x102235f8 */
  push32((uint32_t)(0x102235f8u));
  /* 102147c4 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x102147cau);
  /* 102147ca add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102147cd cmp ebx, 0x19 */
  { uint32_t _a=(EBX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102147d0 jle 0x102147e6 */
  if ((C.zf||C.sf!=C.of)) goto L_102147e6;
  /* 102147d2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 102147d4 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 102147d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 102147d8 push 0x10225fb8 */
  push32((uint32_t)(0x10225fb8u));
  /* 102147dd call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x102147e3u);
  /* 102147e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102147e6:;
  /* 102147e6 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 102147e8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102147ea push 1 */
  push32((uint32_t)(0x1u));
  /* 102147ec push 0x10226238 */
  push32((uint32_t)(0x10226238u));
  /* 102147f1 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x102147f7u);
  /* 102147f7 push 5 */
  push32((uint32_t)(0x5u));
  /* 102147f9 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 102147fb push 2 */
  push32((uint32_t)(0x2u));
  /* 102147fd push 0x10226238 */
  push32((uint32_t)(0x10226238u));
  /* 10214802 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10214808u);
  /* 10214808 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1021480a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1021480c push 0x10226058 */
  push32((uint32_t)(0x10226058u));
  /* 10214811 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10214817u);
  /* 10214817 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10214819 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1021481b push 0x10226250 */
  push32((uint32_t)(0x10226250u));
  /* 10214820 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10214826u);
  /* 10214826 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10214828 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1021482a push 0x10226198 */
  push32((uint32_t)(0x10226198u));
  /* 1021482f call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10214835u);
  /* 10214835 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214838 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1021483a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1021483c push 0x10226020 */
  push32((uint32_t)(0x10226020u));
  /* 10214841 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10214847u);
  /* 10214847 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10214849 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1021484b push 0x10226010 */
  push32((uint32_t)(0x10226010u));
  /* 10214850 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10214856u);
  /* 10214856 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10214858 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1021485a push 0x10226018 */
  push32((uint32_t)(0x10226018u));
  /* 1021485f call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10214865u);
  /* 10214865 push 0x102260b8 */
  push32((uint32_t)(0x102260b8u));
  /* 1021486a call dword ptr [0x10226524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226524))), 0x10214870u);
  /* 10214870 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214873 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10214875 je 0x10214934 */
  if (C.zf) goto L_10214934;
  /* 1021487b push 0x10226198 */
  push32((uint32_t)(0x10226198u));
  /* 10214880 call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x10214886u);
  /* 10214886 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214889 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1021488b jne 0x10214934 */
  if (!C.zf) goto L_10214934;
  /* 10214891 push 1 */
  push32((uint32_t)(0x1u));
  /* 10214893 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10214899u);
  /* 10214899 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021489c cmp eax, 0xe74 */
  { uint32_t _a=(EAX),_b=(0xe74u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102148a1 jle 0x102148c7 */
  if ((C.zf||C.sf!=C.of)) goto L_102148c7;
  /* 102148a3 push 4 */
  push32((uint32_t)(0x4u));
  /* 102148a5 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x102148abu);
  /* 102148ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102148ae cmp eax, 0x157c */
  { uint32_t _a=(EAX),_b=(0x157cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102148b3 jle 0x102148c7 */
  if ((C.zf||C.sf!=C.of)) goto L_102148c7;
  /* 102148b5 push 5 */
  push32((uint32_t)(0x5u));
  /* 102148b7 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x102148bdu);
  /* 102148bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102148c0 cmp eax, 0x20d0 */
  { uint32_t _a=(EAX),_b=(0x20d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102148c5 jg 0x10214934 */
  if ((!C.zf&&C.sf==C.of)) goto L_10214934;
L_102148c7:;
  /* 102148c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 102148c9 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x102148cfu);
  /* 102148cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102148d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102148d4 je 0x1021495b */
  if (C.zf) goto L_1021495b;
  /* 102148da push 5 */
  push32((uint32_t)(0x5u));
  /* 102148dc call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x102148e2u);
  /* 102148e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102148e5 cmp eax, 0x20d0 */
  { uint32_t _a=(EAX),_b=(0x20d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102148ea jle 0x1021495b */
  if ((C.zf||C.sf!=C.of)) goto L_1021495b;
  /* 102148ec push 5 */
  push32((uint32_t)(0x5u));
  /* 102148ee call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x102148f4u);
  /* 102148f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102148f7 cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102148fc jle 0x1021490f */
  if ((C.zf||C.sf!=C.of)) goto L_1021490f;
  /* 102148fe push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10214903 push 1 */
  push32((uint32_t)(0x1u));
  /* 10214905 push 5 */
  push32((uint32_t)(0x5u));
  /* 10214907 call 0x10212610 */
  push32(0x1021490cu); f_10212610();
  /* 1021490c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1021490f:;
  /* 1021490f push 4 */
  push32((uint32_t)(0x4u));
  /* 10214911 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10214917u);
  /* 10214917 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021491a cmp eax, 0x32c8 */
  { uint32_t _a=(EAX),_b=(0x32c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021491f jle 0x1021495b */
  if ((C.zf||C.sf!=C.of)) goto L_1021495b;
  /* 10214921 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10214926 push 1 */
  push32((uint32_t)(0x1u));
  /* 10214928 push 4 */
  push32((uint32_t)(0x4u));
  /* 1021492a call 0x10212610 */
  push32(0x1021492fu); f_10212610();
  /* 1021492f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214932 jmp 0x1021495b */
  goto L_1021495b;
L_10214934:;
  /* 10214934 push 0 */
  push32((uint32_t)(0x0u));
  /* 10214936 push 1 */
  push32((uint32_t)(0x1u));
  /* 10214938 call 0x102125f0 */
  push32(0x1021493du); f_102125f0();
  /* 1021493d push 0 */
  push32((uint32_t)(0x0u));
  /* 1021493f push 4 */
  push32((uint32_t)(0x4u));
  /* 10214941 call 0x102125f0 */
  push32(0x10214946u); f_102125f0();
  /* 10214946 push 0 */
  push32((uint32_t)(0x0u));
  /* 10214948 push 3 */
  push32((uint32_t)(0x3u));
  /* 1021494a call 0x102125f0 */
  push32(0x1021494fu); f_102125f0();
  /* 1021494f push 0 */
  push32((uint32_t)(0x0u));
  /* 10214951 push 1 */
  push32((uint32_t)(0x1u));
  /* 10214953 call 0x102125f0 */
  push32(0x10214958u); f_102125f0();
  /* 10214958 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1021495b:;
  /* 1021495b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1021495d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1021495f push 0x10223780 */
  push32((uint32_t)(0x10223780u));
  /* 10214964 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021496au);
  /* 1021496a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1021496c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1021496e push 1 */
  push32((uint32_t)(0x1u));
  /* 10214970 push 0x102262b8 */
  push32((uint32_t)(0x102262b8u));
  /* 10214975 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x1021497bu);
  /* 1021497b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1021497d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1021497f push 2 */
  push32((uint32_t)(0x2u));
  /* 10214981 push 0x102262b8 */
  push32((uint32_t)(0x102262b8u));
  /* 10214986 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x1021498cu);
  /* 1021498c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1021498e push 0xa */
  push32((uint32_t)(0xau));
  /* 10214990 push 3 */
  push32((uint32_t)(0x3u));
  /* 10214992 push 0x102262b8 */
  push32((uint32_t)(0x102262b8u));
  /* 10214997 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x1021499du);
  /* 1021499d push 0x10223938 */
  push32((uint32_t)(0x10223938u));
  /* 102149a2 call dword ptr [0x1022652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022652c))), 0x102149a8u);
  /* 102149a8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102149ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102149ad jne 0x102149f8 */
  if (!C.zf) goto L_102149f8;
  /* 102149af push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 102149b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 102149b3 call 0x10212640 */
  push32(0x102149b8u); f_10212640();
  /* 102149b8 mov esi, eax */
  ESI = (EAX);
  /* 102149ba push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 102149bc push 0 */
  push32((uint32_t)(0x0u));
  /* 102149be sar esi, 2 */
  ESI = (sh_sar((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 102149c1 call 0x10212640 */
  push32(0x102149c6u); f_10212640();
  /* 102149c6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 102149c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 102149ca add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102149cc call 0x10212640 */
  push32(0x102149d1u); f_10212640();
  /* 102149d1 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102149d3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102149d6 cmp esi, 6 */
  { uint32_t _a=(ESI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102149d9 jle 0x102149e8 */
  if ((C.zf||C.sf!=C.of)) goto L_102149e8;
  /* 102149db push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102149dd push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102149df push 6 */
  push32((uint32_t)(0x6u));
  /* 102149e1 push 0x10225f70 */
  push32((uint32_t)(0x10225f70u));
  /* 102149e6 jmp 0x10214a03 */
  goto L_10214a03;
L_102149e8:;
  /* 102149e8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102149ea je 0x10214a0c */
  if (C.zf) goto L_10214a0c;
  /* 102149ec push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102149ee push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102149f0 push esi */
  push32((uint32_t)(ESI));
  /* 102149f1 push 0x10225f70 */
  push32((uint32_t)(0x10225f70u));
  /* 102149f6 jmp 0x10214a03 */
  goto L_10214a03;
L_102149f8:;
  /* 102149f8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102149fa push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102149fc push 0xa */
  push32((uint32_t)(0xau));
  /* 102149fe push 0x102238c8 */
  push32((uint32_t)(0x102238c8u));
L_10214a03:;
  /* 10214a03 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10214a09u);
  /* 10214a09 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10214a0c:;
  /* 10214a0c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10214a0e push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10214a10 push 0x10223938 */
  push32((uint32_t)(0x10223938u));
  /* 10214a15 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10214a1bu);
  /* 10214a1b push 0x10226250 */
  push32((uint32_t)(0x10226250u));
  /* 10214a20 call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x10214a26u);
  /* 10214a26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214a29 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10214a2b je 0x10214a4e */
  if (C.zf) goto L_10214a4e;
  /* 10214a2d push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10214a2f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10214a31 push 0x10223938 */
  push32((uint32_t)(0x10223938u));
  /* 10214a36 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10214a3cu);
  /* 10214a3c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10214a3e push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10214a40 push 0x10223850 */
  push32((uint32_t)(0x10223850u));
  /* 10214a45 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10214a4bu);
  /* 10214a4b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10214a4e:;
  /* 10214a4e push 0x10223938 */
  push32((uint32_t)(0x10223938u));
  /* 10214a53 call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x10214a59u);
  /* 10214a59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214a5c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10214a5e je 0x10214a86 */
  if (C.zf) goto L_10214a86;
  /* 10214a60 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10214a62 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10214a64 push 0x10223920 */
  push32((uint32_t)(0x10223920u));
  /* 10214a69 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10214a6fu);
  /* 10214a6f push 0xa */
  push32((uint32_t)(0xau));
  /* 10214a71 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10214a73 push 0x10223860 */
  push32((uint32_t)(0x10223860u));
  /* 10214a78 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10214a7eu);
  /* 10214a7e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214a81 call 0x10213320 */
  push32(0x10214a86u); f_10213320();
L_10214a86:;
  /* 10214a86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10214a88 push 1 */
  push32((uint32_t)(0x1u));
  /* 10214a8a call 0x102125f0 */
  push32(0x10214a8fu); f_102125f0();
  /* 10214a8f push 0 */
  push32((uint32_t)(0x0u));
  /* 10214a91 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10214a97u);
  /* 10214a97 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214a9a cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10214a9f jle 0x10214ae3 */
  if ((C.zf||C.sf!=C.of)) goto L_10214ae3;
  /* 10214aa1 push 0x10223780 */
  push32((uint32_t)(0x10223780u));
  /* 10214aa6 call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x10214aacu);
  /* 10214aac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214aaf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10214ab1 je 0x10214ae3 */
  if (C.zf) goto L_10214ae3;
  /* 10214ab3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10214ab5 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10214abbu);
  /* 10214abb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214abe cmp eax, 0x1d4c */
  { uint32_t _a=(EAX),_b=(0x1d4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10214ac3 jge 0x10214ae3 */
  if ((C.sf==C.of)) goto L_10214ae3;
  /* 10214ac5 push 0x10223938 */
  push32((uint32_t)(0x10223938u));
  /* 10214aca call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x10214ad0u);
  /* 10214ad0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214ad3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10214ad5 jne 0x10214ae3 */
  if (!C.zf) goto L_10214ae3;
  /* 10214ad7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10214ad9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10214adb call 0x102125f0 */
  push32(0x10214ae0u); f_102125f0();
  /* 10214ae0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10214ae3:;
  /* 10214ae3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10214ae5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10214ae7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10214ae9 push 0x102261d0 */
  push32((uint32_t)(0x102261d0u));
  /* 10214aee call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10214af4u);
  /* 10214af4 push 0x102260d0 */
  push32((uint32_t)(0x102260d0u));
  /* 10214af9 call dword ptr [0x1022652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022652c))), 0x10214affu);
  /* 10214aff add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214b02 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10214b04 je 0x10214b1a */
  if (C.zf) goto L_10214b1a;
  /* 10214b06 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10214b08 push 0xa */
  push32((uint32_t)(0xau));
  /* 10214b0a push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10214b0c push 0x102261d0 */
  push32((uint32_t)(0x102261d0u));
  /* 10214b11 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10214b17u);
  /* 10214b17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10214b1a:;
  /* 10214b1a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10214b1c push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10214b1e push 0x102260d0 */
  push32((uint32_t)(0x102260d0u));
  /* 10214b23 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10214b29u);
  /* 10214b29 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10214b2b push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10214b2d push 0x102260e0 */
  push32((uint32_t)(0x102260e0u));
  /* 10214b32 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10214b38u);
  /* 10214b38 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10214b3a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10214b3c push 0x102262c8 */
  push32((uint32_t)(0x102262c8u));
  /* 10214b41 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10214b47u);
  /* 10214b47 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10214b49 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10214b4b push 0x102262b0 */
  push32((uint32_t)(0x102262b0u));
  /* 10214b50 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10214b56u);
  /* 10214b56 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10214b58 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10214b5a push 0x102262c0 */
  push32((uint32_t)(0x102262c0u));
  /* 10214b5f call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10214b65u);
  /* 10214b65 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10214b67 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10214b69 push 0x102262a0 */
  push32((uint32_t)(0x102262a0u));
  /* 10214b6e call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10214b74u);
  /* 10214b74 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214b77 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10214b79 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10214b7b push 0x102262a8 */
  push32((uint32_t)(0x102262a8u));
  /* 10214b80 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10214b86u);
  /* 10214b86 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10214b88 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10214b8a push 0x10226298 */
  push32((uint32_t)(0x10226298u));
  /* 10214b8f call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10214b95u);
  /* 10214b95 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214b98 cmp ebx, 0x23 */
  { uint32_t _a=(EBX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10214b9b jle 0x10214bf4 */
  if ((C.zf||C.sf!=C.of)) goto L_10214bf4;
  /* 10214b9d mov al, byte ptr [esp + 0x12] */
  AL = (r8((uint32_t)(ESP + 0x12)));
  /* 10214ba1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10214ba3 je 0x10214bf4 */
  if (C.zf) goto L_10214bf4;
  /* 10214ba5 push 0xa */
  push32((uint32_t)(0xau));
  /* 10214ba7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10214ba9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10214bab push 0x102238b8 */
  push32((uint32_t)(0x102238b8u));
  /* 10214bb0 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10214bb6u);
  /* 10214bb6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214bb9 cmp ebx, 0x3c */
  { uint32_t _a=(EBX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10214bbc jle 0x10214bf4 */
  if ((C.zf||C.sf!=C.of)) goto L_10214bf4;
  /* 10214bbe push 0xa */
  push32((uint32_t)(0xau));
  /* 10214bc0 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10214bc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10214bc4 push 0x102238b8 */
  push32((uint32_t)(0x102238b8u));
  /* 10214bc9 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10214bcfu);
  /* 10214bcf push 0xa */
  push32((uint32_t)(0xau));
  /* 10214bd1 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10214bd3 push 3 */
  push32((uint32_t)(0x3u));
  /* 10214bd5 push 0x102238b8 */
  push32((uint32_t)(0x102238b8u));
  /* 10214bda call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10214be0u);
  /* 10214be0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10214be2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10214be4 push 4 */
  push32((uint32_t)(0x4u));
  /* 10214be6 push 0x102238b8 */
  push32((uint32_t)(0x102238b8u));
  /* 10214beb call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10214bf1u);
  /* 10214bf1 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10214bf4:;
  /* 10214bf4 mov bl, byte ptr [esp + 0x13] */
  BL = (r8((uint32_t)(ESP + 0x13)));
  /* 10214bf8 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10214bfa je 0x10214cde */
  if (C.zf) goto L_10214cde;
  /* 10214c00 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10214c02 push 0xa */
  push32((uint32_t)(0xau));
  /* 10214c04 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10214c06 push 0x102238a8 */
  push32((uint32_t)(0x102238a8u));
  /* 10214c0b call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10214c11u);
  /* 10214c11 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10214c13 push 1 */
  push32((uint32_t)(0x1u));
  /* 10214c15 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10214c17 push 0x10226140 */
  push32((uint32_t)(0x10226140u));
  /* 10214c1c call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10214c22u);
  /* 10214c22 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10214c24 push 1 */
  push32((uint32_t)(0x1u));
  /* 10214c26 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10214c28 push 0x10226258 */
  push32((uint32_t)(0x10226258u));
  /* 10214c2d call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10214c33u);
  /* 10214c33 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10214c35 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10214c37 push 0x10223610 */
  push32((uint32_t)(0x10223610u));
  /* 10214c3c call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10214c42u);
  /* 10214c42 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10214c44 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10214c46 push 0x102236e8 */
  push32((uint32_t)(0x102236e8u));
  /* 10214c4b call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10214c51u);
  /* 10214c51 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214c54 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10214c56 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10214c58 push 0x10223608 */
  push32((uint32_t)(0x10223608u));
  /* 10214c5d call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10214c63u);
  /* 10214c63 push 0x10226178 */
  push32((uint32_t)(0x10226178u));
  /* 10214c68 call dword ptr [0x1022652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022652c))), 0x10214c6eu);
  /* 10214c6e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214c71 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10214c73 je 0x10214c89 */
  if (C.zf) goto L_10214c89;
  /* 10214c75 push 0xa */
  push32((uint32_t)(0xau));
  /* 10214c77 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10214c79 push 5 */
  push32((uint32_t)(0x5u));
  /* 10214c7b push 0x10226350 */
  push32((uint32_t)(0x10226350u));
  /* 10214c80 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10214c86u);
  /* 10214c86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10214c89:;
  /* 10214c89 push 0x10226090 */
  push32((uint32_t)(0x10226090u));
  /* 10214c8e call dword ptr [0x1022652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022652c))), 0x10214c94u);
  /* 10214c94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214c97 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10214c99 je 0x10214caf */
  if (C.zf) goto L_10214caf;
  /* 10214c9b push 0xa */
  push32((uint32_t)(0xau));
  /* 10214c9d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10214c9f push 0xa */
  push32((uint32_t)(0xau));
  /* 10214ca1 push 0x10223648 */
  push32((uint32_t)(0x10223648u));
  /* 10214ca6 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10214cacu);
  /* 10214cac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10214caf:;
  /* 10214caf call 0x10214360 */
  push32(0x10214cb4u); f_10214360();
L_10214cb4:;
  /* 10214cb4 push 0x10226000 */
  push32((uint32_t)(0x10226000u));
  /* 10214cb9 call dword ptr [0x1022652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022652c))), 0x10214cbfu);
  /* 10214cbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214cc2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10214cc4 je 0x10214d14 */
  if (C.zf) goto L_10214d14;
  /* 10214cc6 push 0x102260e0 */
  push32((uint32_t)(0x102260e0u));
  /* 10214ccb call dword ptr [0x1022652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022652c))), 0x10214cd1u);
  /* 10214cd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214cd4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10214cd6 jne 0x10214d05 */
  if (!C.zf) goto L_10214d05;
  /* 10214cd8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10214cda push 2 */
  push32((uint32_t)(0x2u));
  /* 10214cdc jmp 0x10214d09 */
  goto L_10214d09;
L_10214cde:;
  /* 10214cde push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10214ce0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10214ce2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10214ce4 push 0x10226140 */
  push32((uint32_t)(0x10226140u));
  /* 10214ce9 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10214cefu);
  /* 10214cef push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10214cf1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10214cf3 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10214cf5 push 0x10226258 */
  push32((uint32_t)(0x10226258u));
  /* 10214cfa call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10214d00u);
  /* 10214d00 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214d03 jmp 0x10214cb4 */
  goto L_10214cb4;
L_10214d05:;
  /* 10214d05 push 4 */
  push32((uint32_t)(0x4u));
  /* 10214d07 push 4 */
  push32((uint32_t)(0x4u));
L_10214d09:;
  /* 10214d09 push 8 */
  push32((uint32_t)(0x8u));
  /* 10214d0b call dword ptr [0x102264f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264f4))), 0x10214d11u);
  /* 10214d11 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10214d14:;
  /* 10214d14 push 0x102260b8 */
  push32((uint32_t)(0x102260b8u));
  /* 10214d19 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10214d1fu);
  /* 10214d1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214d22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10214d24 je 0x10214d3a */
  if (C.zf) goto L_10214d3a;
  /* 10214d26 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10214d28 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10214d2a push 6 */
  push32((uint32_t)(0x6u));
  /* 10214d2c push 0x102261d0 */
  push32((uint32_t)(0x102261d0u));
  /* 10214d31 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10214d37u);
  /* 10214d37 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10214d3a:;
  /* 10214d3a push 0x102260d0 */
  push32((uint32_t)(0x102260d0u));
  /* 10214d3f call dword ptr [0x1022652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022652c))), 0x10214d45u);
  /* 10214d45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214d48 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10214d4a je 0x10214d60 */
  if (C.zf) goto L_10214d60;
  /* 10214d4c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10214d4e push 0xa */
  push32((uint32_t)(0xau));
  /* 10214d50 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10214d52 push 0x102261d0 */
  push32((uint32_t)(0x102261d0u));
  /* 10214d57 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10214d5du);
  /* 10214d5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10214d60:;
  /* 10214d60 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10214d62 je 0x10214e63 */
  if (C.zf) goto L_10214e63;
  /* 10214d68 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10214d6a push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10214d6c push 2 */
  push32((uint32_t)(0x2u));
  /* 10214d6e push 0x102260b8 */
  push32((uint32_t)(0x102260b8u));
  /* 10214d73 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10214d79u);
  /* 10214d79 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10214d7b push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10214d7d push 3 */
  push32((uint32_t)(0x3u));
  /* 10214d7f push 0x102260b8 */
  push32((uint32_t)(0x102260b8u));
  /* 10214d84 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10214d8au);
  /* 10214d8a push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10214d8c push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10214d8e push 4 */
  push32((uint32_t)(0x4u));
  /* 10214d90 push 0x102260b8 */
  push32((uint32_t)(0x102260b8u));
  /* 10214d95 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10214d9bu);
  /* 10214d9b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10214d9d push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10214d9f push 5 */
  push32((uint32_t)(0x5u));
  /* 10214da1 push 0x102260b8 */
  push32((uint32_t)(0x102260b8u));
  /* 10214da6 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10214dacu);
  /* 10214dac add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214daf push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10214db1 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10214db3 push 6 */
  push32((uint32_t)(0x6u));
  /* 10214db5 push 0x102260b8 */
  push32((uint32_t)(0x102260b8u));
  /* 10214dba call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10214dc0u);
  /* 10214dc0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10214dc2 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10214dc4 push 0x10226000 */
  push32((uint32_t)(0x10226000u));
  /* 10214dc9 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10214dcfu);
  /* 10214dcf push 0x102260c0 */
  push32((uint32_t)(0x102260c0u));
  /* 10214dd4 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10214ddau);
  /* 10214dda add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214ddd cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10214de0 jle 0x10214e03 */
  if ((C.zf||C.sf!=C.of)) goto L_10214e03;
  /* 10214de2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10214de4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10214de6 push 0x102261e8 */
  push32((uint32_t)(0x102261e8u));
  /* 10214deb call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10214df1u);
  /* 10214df1 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10214df3 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10214df5 push 0x102261f0 */
  push32((uint32_t)(0x102261f0u));
  /* 10214dfa call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10214e00u);
  /* 10214e00 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10214e03:;
  /* 10214e03 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10214e05 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10214e07 push 0x102260d0 */
  push32((uint32_t)(0x102260d0u));
  /* 10214e0c call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10214e12u);
  /* 10214e12 push 0x102238e8 */
  push32((uint32_t)(0x102238e8u));
  /* 10214e17 call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x10214e1du);
  /* 10214e1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214e20 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10214e22 je 0x10214e63 */
  if (C.zf) goto L_10214e63;
  /* 10214e24 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10214e26 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10214e28 push 0x10226148 */
  push32((uint32_t)(0x10226148u));
  /* 10214e2d call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10214e33u);
  /* 10214e33 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10214e35 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10214e37 push 0x10226158 */
  push32((uint32_t)(0x10226158u));
  /* 10214e3c call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10214e42u);
  /* 10214e42 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10214e44 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10214e46 push 0x10226160 */
  push32((uint32_t)(0x10226160u));
  /* 10214e4b call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10214e51u);
  /* 10214e51 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10214e53 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10214e55 push 0x10226150 */
  push32((uint32_t)(0x10226150u));
  /* 10214e5a call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10214e60u);
  /* 10214e60 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10214e63:;
  /* 10214e63 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10214e65 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10214e67 push 0x10223780 */
  push32((uint32_t)(0x10223780u));
  /* 10214e6c call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10214e72u);
  /* 10214e72 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10214e74 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10214e76 push 0x102238c0 */
  push32((uint32_t)(0x102238c0u));
  /* 10214e7b call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10214e81u);
  /* 10214e81 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10214e83 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10214e85 push 0x10226130 */
  push32((uint32_t)(0x10226130u));
  /* 10214e8a call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10214e90u);
  /* 10214e90 mov eax, dword ptr [esp + 0x38] */
  EAX = (r32((uint32_t)(ESP + 0x38)));
  /* 10214e94 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214e97 cmp eax, 0x15e */
  { uint32_t _a=(EAX),_b=(0x15eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10214e9c jle 0x10214eba */
  if ((C.zf||C.sf!=C.of)) goto L_10214eba;
  /* 10214e9e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10214ea0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10214ea2 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10214ea7 push 0x102260c0 */
  push32((uint32_t)(0x102260c0u));
  /* 10214eac call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10214eb2u);
  /* 10214eb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214eb5 call 0x10214310 */
  push32(0x10214ebau); f_10214310();
L_10214eba:;
  /* 10214eba push 0x10223858 */
  push32((uint32_t)(0x10223858u));
  /* 10214ebf call dword ptr [0x10226524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226524))), 0x10214ec5u);
  /* 10214ec5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214ec8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10214eca je 0x10215213 */
  if (C.zf) goto L_10215213;
  /* 10214ed0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10214ed2 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10214ed8u);
  /* 10214ed8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10214eda mov edi, eax */
  EDI = (EAX);
  /* 10214edc call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10214ee2u);
  /* 10214ee2 push 4 */
  push32((uint32_t)(0x4u));
  /* 10214ee4 mov esi, eax */
  ESI = (EAX);
  /* 10214ee6 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10214eecu);
  /* 10214eec push 5 */
  push32((uint32_t)(0x5u));
  /* 10214eee mov ebp, eax */
  EBP = (EAX);
  /* 10214ef0 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10214ef6u);
  /* 10214ef6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10214ef8 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 10214efc call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10214f02u);
  /* 10214f02 mov ebx, eax */
  EBX = (EAX);
  /* 10214f04 mov eax, dword ptr [esp + 0x2c] */
  EAX = (r32((uint32_t)(ESP + 0x2c)));
  /* 10214f08 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214f0b cmp eax, 0x96 */
  { uint32_t _a=(EAX),_b=(0x96u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10214f10 jge 0x10214fa3 */
  if ((C.sf==C.of)) goto L_10214fa3;
  /* 10214f16 cmp esi, 0x1388 */
  { uint32_t _a=(ESI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10214f1c jle 0x10214f29 */
  if ((C.zf||C.sf!=C.of)) goto L_10214f29;
  /* 10214f1e push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10214f23 push 3 */
  push32((uint32_t)(0x3u));
  /* 10214f25 push 2 */
  push32((uint32_t)(0x2u));
  /* 10214f27 jmp 0x10214f9b */
  goto L_10214f9b;
L_10214f29:;
  /* 10214f29 cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10214f2f jle 0x10214f3c */
  if ((C.zf||C.sf!=C.of)) goto L_10214f3c;
  /* 10214f31 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 10214f36 push 3 */
  push32((uint32_t)(0x3u));
  /* 10214f38 push 2 */
  push32((uint32_t)(0x2u));
  /* 10214f3a jmp 0x10214f9b */
  goto L_10214f9b;
L_10214f3c:;
  /* 10214f3c cmp edi, 0x1388 */
  { uint32_t _a=(EDI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10214f42 jle 0x10214f4f */
  if ((C.zf||C.sf!=C.of)) goto L_10214f4f;
  /* 10214f44 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10214f49 push 3 */
  push32((uint32_t)(0x3u));
  /* 10214f4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10214f4d jmp 0x10214f9b */
  goto L_10214f9b;
L_10214f4f:;
  /* 10214f4f cmp edi, 0x3e8 */
  { uint32_t _a=(EDI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10214f55 jle 0x10214f62 */
  if ((C.zf||C.sf!=C.of)) goto L_10214f62;
  /* 10214f57 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 10214f5c push 3 */
  push32((uint32_t)(0x3u));
  /* 10214f5e push 0 */
  push32((uint32_t)(0x0u));
  /* 10214f60 jmp 0x10214f9b */
  goto L_10214f9b;
L_10214f62:;
  /* 10214f62 cmp dword ptr [esp + 0x14], 0x7d0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10214f6a jle 0x10214f77 */
  if ((C.zf||C.sf!=C.of)) goto L_10214f77;
  /* 10214f6c push 0x320 */
  push32((uint32_t)(0x320u));
  /* 10214f71 push 3 */
  push32((uint32_t)(0x3u));
  /* 10214f73 push 5 */
  push32((uint32_t)(0x5u));
  /* 10214f75 jmp 0x10214f9b */
  goto L_10214f9b;
L_10214f77:;
  /* 10214f77 cmp ebp, 0x7d0 */
  { uint32_t _a=(EBP),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10214f7d jle 0x10214f8a */
  if ((C.zf||C.sf!=C.of)) goto L_10214f8a;
  /* 10214f7f push 0x320 */
  push32((uint32_t)(0x320u));
  /* 10214f84 push 3 */
  push32((uint32_t)(0x3u));
  /* 10214f86 push 4 */
  push32((uint32_t)(0x4u));
  /* 10214f88 jmp 0x10214f9b */
  goto L_10214f9b;
L_10214f8a:;
  /* 10214f8a cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10214f90 jle 0x10214fa3 */
  if ((C.zf||C.sf!=C.of)) goto L_10214fa3;
  /* 10214f92 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10214f97 push 3 */
  push32((uint32_t)(0x3u));
  /* 10214f99 push 1 */
  push32((uint32_t)(0x1u));
L_10214f9b:;
  /* 10214f9b call 0x10212610 */
  push32(0x10214fa0u); f_10212610();
  /* 10214fa0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10214fa3:;
  /* 10214fa3 push 0x10225f00 */
  push32((uint32_t)(0x10225f00u));
  /* 10214fa8 call dword ptr [0x10226524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226524))), 0x10214faeu);
  /* 10214fae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214fb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10214fb3 je 0x10215003 */
  if (C.zf) goto L_10215003;
  /* 10214fb5 cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10214fbb jle 0x10215003 */
  if ((C.zf||C.sf!=C.of)) goto L_10215003;
  /* 10214fbd push 0x10226250 */
  push32((uint32_t)(0x10226250u));
  /* 10214fc2 call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x10214fc8u);
  /* 10214fc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10214fcb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10214fcd jne 0x10215003 */
  if (!C.zf) goto L_10215003;
  /* 10214fcf cmp ebp, 0xbb8 */
  { uint32_t _a=(EBP),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10214fd5 jle 0x10214fe8 */
  if ((C.zf||C.sf!=C.of)) goto L_10214fe8;
  /* 10214fd7 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10214fdc push 3 */
  push32((uint32_t)(0x3u));
  /* 10214fde push 4 */
  push32((uint32_t)(0x4u));
  /* 10214fe0 call 0x10212610 */
  push32(0x10214fe5u); f_10212610();
  /* 10214fe5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10214fe8:;
  /* 10214fe8 cmp dword ptr [esp + 0x14], 0xfa0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10214ff0 jle 0x10215003 */
  if ((C.zf||C.sf!=C.of)) goto L_10215003;
  /* 10214ff2 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10214ff7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10214ff9 push 5 */
  push32((uint32_t)(0x5u));
  /* 10214ffb call 0x10212610 */
  push32(0x10215000u); f_10212610();
  /* 10215000 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10215003:;
  /* 10215003 push 2 */
  push32((uint32_t)(0x2u));
  /* 10215005 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x1021500bu);
  /* 1021500b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021500e cmp eax, 0x1d4c0 */
  { uint32_t _a=(EAX),_b=(0x1d4c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10215013 jle 0x10215026 */
  if ((C.zf||C.sf!=C.of)) goto L_10215026;
  /* 10215015 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 1021501a push 1 */
  push32((uint32_t)(0x1u));
  /* 1021501c push 2 */
  push32((uint32_t)(0x2u));
  /* 1021501e call 0x10212610 */
  push32(0x10215023u); f_10212610();
  /* 10215023 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10215026:;
  /* 10215026 push 0 */
  push32((uint32_t)(0x0u));
  /* 10215028 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x1021502eu);
  /* 1021502e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215031 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10215036 jle 0x10215049 */
  if ((C.zf||C.sf!=C.of)) goto L_10215049;
  /* 10215038 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 1021503d push 1 */
  push32((uint32_t)(0x1u));
  /* 1021503f push 0 */
  push32((uint32_t)(0x0u));
  /* 10215041 call 0x10212610 */
  push32(0x10215046u); f_10212610();
  /* 10215046 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10215049:;
  /* 10215049 push 0x102261c8 */
  push32((uint32_t)(0x102261c8u));
  /* 1021504e call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10215054u);
  /* 10215054 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215057 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10215059 je 0x102151e0 */
  if (C.zf) goto L_102151e0;
  /* 1021505f push 0x10226198 */
  push32((uint32_t)(0x10226198u));
  /* 10215064 call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x1021506au);
  /* 1021506a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021506d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1021506f jne 0x102151e0 */
  if (!C.zf) goto L_102151e0;
  /* 10215075 push 5 */
  push32((uint32_t)(0x5u));
  /* 10215077 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x1021507du);
  /* 1021507d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215080 cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10215085 jle 0x10215140 */
  if ((C.zf||C.sf!=C.of)) goto L_10215140;
  /* 1021508b push 0 */
  push32((uint32_t)(0x0u));
  /* 1021508d call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10215093u);
  /* 10215093 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215096 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10215098 je 0x10215140 */
  if (C.zf) goto L_10215140;
  /* 1021509e push 1 */
  push32((uint32_t)(0x1u));
  /* 102150a0 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x102150a6u);
  /* 102150a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102150a9 cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102150ae jge 0x10215140 */
  if ((C.sf==C.of)) goto L_10215140;
  /* 102150b4 push 5 */
  push32((uint32_t)(0x5u));
  /* 102150b6 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x102150bcu);
  /* 102150bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102150bf cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102150c4 jle 0x102150d7 */
  if ((C.zf||C.sf!=C.of)) goto L_102150d7;
  /* 102150c6 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 102150cb push 1 */
  push32((uint32_t)(0x1u));
  /* 102150cd push 5 */
  push32((uint32_t)(0x5u));
  /* 102150cf call 0x10212610 */
  push32(0x102150d4u); f_10212610();
  /* 102150d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102150d7:;
  /* 102150d7 push 4 */
  push32((uint32_t)(0x4u));
  /* 102150d9 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x102150dfu);
  /* 102150df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102150e2 cmp eax, 0x1f40 */
  { uint32_t _a=(EAX),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102150e7 jle 0x102150fa */
  if ((C.zf||C.sf!=C.of)) goto L_102150fa;
  /* 102150e9 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 102150ee push 1 */
  push32((uint32_t)(0x1u));
  /* 102150f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 102150f2 call 0x10212610 */
  push32(0x102150f7u); f_10212610();
  /* 102150f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102150fa:;
  /* 102150fa push 2 */
  push32((uint32_t)(0x2u));
  /* 102150fc call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10215102u);
  /* 10215102 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215105 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021510a jle 0x1021511d */
  if ((C.zf||C.sf!=C.of)) goto L_1021511d;
  /* 1021510c push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 10215111 push 1 */
  push32((uint32_t)(0x1u));
  /* 10215113 push 2 */
  push32((uint32_t)(0x2u));
  /* 10215115 call 0x10212610 */
  push32(0x1021511au); f_10212610();
  /* 1021511a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1021511d:;
  /* 1021511d push 3 */
  push32((uint32_t)(0x3u));
  /* 1021511f call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10215125u);
  /* 10215125 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215128 cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021512d jle 0x10215140 */
  if ((C.zf||C.sf!=C.of)) goto L_10215140;
  /* 1021512f push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 10215134 push 1 */
  push32((uint32_t)(0x1u));
  /* 10215136 push 3 */
  push32((uint32_t)(0x3u));
  /* 10215138 call 0x10212610 */
  push32(0x1021513du); f_10212610();
  /* 1021513d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10215140:;
  /* 10215140 push 5 */
  push32((uint32_t)(0x5u));
  /* 10215142 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10215148u);
  /* 10215148 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021514b cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10215150 jle 0x102151e0 */
  if ((C.zf||C.sf!=C.of)) goto L_102151e0;
  /* 10215156 push 1 */
  push32((uint32_t)(0x1u));
  /* 10215158 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x1021515eu);
  /* 1021515e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215161 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10215163 je 0x102151e0 */
  if (C.zf) goto L_102151e0;
  /* 10215165 push 1 */
  push32((uint32_t)(0x1u));
  /* 10215167 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x1021516du);
  /* 1021516d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215170 cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10215175 jle 0x102151e0 */
  if ((C.zf||C.sf!=C.of)) goto L_102151e0;
  /* 10215177 push 5 */
  push32((uint32_t)(0x5u));
  /* 10215179 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x1021517fu);
  /* 1021517f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215182 cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10215187 jle 0x1021519a */
  if ((C.zf||C.sf!=C.of)) goto L_1021519a;
  /* 10215189 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1021518e push 4 */
  push32((uint32_t)(0x4u));
  /* 10215190 push 5 */
  push32((uint32_t)(0x5u));
  /* 10215192 call 0x10212610 */
  push32(0x10215197u); f_10212610();
  /* 10215197 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1021519a:;
  /* 1021519a push 2 */
  push32((uint32_t)(0x2u));
  /* 1021519c call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x102151a2u);
  /* 102151a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102151a5 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102151aa jle 0x102151bd */
  if ((C.zf||C.sf!=C.of)) goto L_102151bd;
  /* 102151ac push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 102151b1 push 4 */
  push32((uint32_t)(0x4u));
  /* 102151b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 102151b5 call 0x10212610 */
  push32(0x102151bau); f_10212610();
  /* 102151ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102151bd:;
  /* 102151bd push 3 */
  push32((uint32_t)(0x3u));
  /* 102151bf call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x102151c5u);
  /* 102151c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102151c8 cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102151cd jle 0x102151e0 */
  if ((C.zf||C.sf!=C.of)) goto L_102151e0;
  /* 102151cf push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 102151d4 push 4 */
  push32((uint32_t)(0x4u));
  /* 102151d6 push 3 */
  push32((uint32_t)(0x3u));
  /* 102151d8 call 0x10212610 */
  push32(0x102151ddu); f_10212610();
  /* 102151dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102151e0:;
  /* 102151e0 call dword ptr [0x102264e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e0))), 0x102151e6u);
  /* 102151e6 mov ecx, dword ptr [eax*4 + 0x102265ec] */
  ECX = (r32((uint32_t)(EAX*4 + 0x102265ec)));
  /* 102151ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102151ef jne 0x10215213 */
  if (!C.zf) goto L_10215213;
  /* 102151f1 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 102151f6 push 3 */
  push32((uint32_t)(0x3u));
  /* 102151f8 push 5 */
  push32((uint32_t)(0x5u));
  /* 102151fa call 0x10212610 */
  push32(0x102151ffu); f_10212610();
  /* 102151ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215202 call dword ptr [0x102264e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e0))), 0x10215208u);
  /* 10215208 mov dword ptr [eax*4 + 0x102265ec], 1 */
  w32((uint32_t)(EAX*4 + 0x102265ec), (0x1u));
L_10215213:;
  /* 10215213 pop edi */
  EDI = (pop32());
  /* 10215214 pop esi */
  ESI = (pop32());
  /* 10215215 pop ebp */
  EBP = (pop32());
  /* 10215216 pop ebx */
  EBX = (pop32());
  /* 10215217 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021521a ret  */
  ESPCHK(0x102143e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005220 @ 0x10215220 (72 bytes, 22 insns) */
void f_10215220(void) {
  FTRACE(0x10215220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10215220 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215222 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215224 push 1 */
  push32((uint32_t)(0x1u));
  /* 10215226 push 0x10225fb8 */
  push32((uint32_t)(0x10225fb8u));
  /* 1021522b call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10215231u);
  /* 10215231 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215233 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215235 push 1 */
  push32((uint32_t)(0x1u));
  /* 10215237 push 0x10225f98 */
  push32((uint32_t)(0x10225f98u));
  /* 1021523c call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10215242u);
  /* 10215242 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215244 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215246 push 1 */
  push32((uint32_t)(0x1u));
  /* 10215248 push 0x10225fb0 */
  push32((uint32_t)(0x10225fb0u));
  /* 1021524d call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10215253u);
  /* 10215253 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215255 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215257 push 1 */
  push32((uint32_t)(0x1u));
  /* 10215259 push 0x10223858 */
  push32((uint32_t)(0x10223858u));
  /* 1021525e call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10215264u);
  /* 10215264 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215267 ret  */
  ESPCHK(0x10215220u, _esp0);
  ESP += 4; return;
}

/* FUN_10005270 @ 0x10215270 (55 bytes, 16 insns) */
void f_10215270(void) {
  FTRACE(0x10215270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10215270 cmp dword ptr [esp + 4], 0x10223668 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0x10223668u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10215278 jne 0x102152a4 */
  if (!C.zf) goto L_102152a4;
  /* 1021527a push 0x10226320 */
  push32((uint32_t)(0x10226320u));
  /* 1021527f call dword ptr [0x1022652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022652c))), 0x10215285u);
  /* 10215285 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215288 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1021528a je 0x102152a4 */
  if (C.zf) goto L_102152a4;
  /* 1021528c push 0x10226268 */
  push32((uint32_t)(0x10226268u));
  /* 10215291 call dword ptr [0x1022652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022652c))), 0x10215297u);
  /* 10215297 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021529a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1021529c je 0x102152a4 */
  if (C.zf) goto L_102152a4;
  /* 1021529e mov eax, 1 */
  EAX = (0x1u);
  /* 102152a3 ret  */
  ESPCHK(0x10215270u, _esp0);
  ESP += 4; return;
L_102152a4:;
  /* 102152a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102152a6 ret  */
  ESPCHK(0x10215270u, _esp0);
  ESP += 4; return;
}

/* FUN_100052b0 @ 0x102152b0 (2008 bytes, 535 insns) */
void f_102152b0(void) {
  FTRACE(0x102152b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102152b0 push 0x10226258 */
  push32((uint32_t)(0x10226258u));
  /* 102152b5 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x102152bbu);
  /* 102152bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102152be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102152c0 jne 0x102152d4 */
  if (!C.zf) goto L_102152d4;
  /* 102152c2 push 0x102238a8 */
  push32((uint32_t)(0x102238a8u));
  /* 102152c7 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x102152cdu);
  /* 102152cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102152d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102152d2 je 0x10215304 */
  if (C.zf) goto L_10215304;
L_102152d4:;
  /* 102152d4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102152d6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102152d8 push 0x10223930 */
  push32((uint32_t)(0x10223930u));
  /* 102152dd call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102152e3u);
  /* 102152e3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102152e5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102152e7 push 0x102261d8 */
  push32((uint32_t)(0x102261d8u));
  /* 102152ec call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102152f2u);
  /* 102152f2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102152f4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102152f6 push 0x102261e0 */
  push32((uint32_t)(0x102261e0u));
  /* 102152fb call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215301u);
  /* 10215301 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10215304:;
  /* 10215304 push 0x10226390 */
  push32((uint32_t)(0x10226390u));
  /* 10215309 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x1021530fu);
  /* 1021530f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215312 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10215315 jg 0x1021533f */
  if ((!C.zf&&C.sf==C.of)) goto L_1021533f;
  /* 10215317 push 0x10226310 */
  push32((uint32_t)(0x10226310u));
  /* 1021531c call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10215322u);
  /* 10215322 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215325 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10215328 jg 0x1021533f */
  if ((!C.zf&&C.sf==C.of)) goto L_1021533f;
  /* 1021532a push 0x10223668 */
  push32((uint32_t)(0x10223668u));
  /* 1021532f call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10215335u);
  /* 10215335 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215338 cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021533d jle 0x1021539d */
  if ((C.zf||C.sf!=C.of)) goto L_1021539d;
L_1021533f:;
  /* 1021533f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215341 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10215343 push 0x10223608 */
  push32((uint32_t)(0x10223608u));
  /* 10215348 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021534eu);
  /* 1021534e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215350 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10215352 push 0x10223610 */
  push32((uint32_t)(0x10223610u));
  /* 10215357 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021535du);
  /* 1021535d push 0x10226390 */
  push32((uint32_t)(0x10226390u));
  /* 10215362 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10215368u);
  /* 10215368 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021536b cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10215370 jg 0x1021538b */
  if ((!C.zf&&C.sf==C.of)) goto L_1021538b;
  /* 10215372 push 0x10226310 */
  push32((uint32_t)(0x10226310u));
  /* 10215377 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x1021537du);
  /* 1021537d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215380 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10215383 jg 0x1021538b */
  if ((!C.zf&&C.sf==C.of)) goto L_1021538b;
  /* 10215385 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215387 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10215389 jmp 0x1021538f */
  goto L_1021538f;
L_1021538b:;
  /* 1021538b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1021538d push 0x5f */
  push32((uint32_t)(0x5fu));
L_1021538f:;
  /* 1021538f push 0x102236e8 */
  push32((uint32_t)(0x102236e8u));
  /* 10215394 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021539au);
  /* 1021539a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1021539d:;
  /* 1021539d push 0x10223668 */
  push32((uint32_t)(0x10223668u));
  /* 102153a2 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x102153a8u);
  /* 102153a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102153ab cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102153ae jle 0x10215463 */
  if ((C.zf||C.sf!=C.of)) goto L_10215463;
  /* 102153b4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102153b6 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 102153b8 push 0x10226330 */
  push32((uint32_t)(0x10226330u));
  /* 102153bd call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102153c3u);
  /* 102153c3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102153c5 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 102153c7 push 0x10226338 */
  push32((uint32_t)(0x10226338u));
  /* 102153cc call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102153d2u);
  /* 102153d2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102153d4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102153d6 push 0x10226320 */
  push32((uint32_t)(0x10226320u));
  /* 102153db call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102153e1u);
  /* 102153e1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102153e3 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 102153e5 push 0x10226278 */
  push32((uint32_t)(0x10226278u));
  /* 102153ea call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102153f0u);
  /* 102153f0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102153f2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 102153f4 push 0x10226260 */
  push32((uint32_t)(0x10226260u));
  /* 102153f9 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102153ffu);
  /* 102153ff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215401 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10215403 push 0x10226268 */
  push32((uint32_t)(0x10226268u));
  /* 10215408 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021540eu);
  /* 1021540e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215411 push 0x10223668 */
  push32((uint32_t)(0x10223668u));
  /* 10215416 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x1021541cu);
  /* 1021541c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021541f cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10215422 jle 0x10215463 */
  if ((C.zf||C.sf!=C.of)) goto L_10215463;
  /* 10215424 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215426 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10215428 push 0x10226328 */
  push32((uint32_t)(0x10226328u));
  /* 1021542d call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215433u);
  /* 10215433 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215435 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10215437 push 0x10226340 */
  push32((uint32_t)(0x10226340u));
  /* 1021543c call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215442u);
  /* 10215442 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215444 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10215446 push 0x10226280 */
  push32((uint32_t)(0x10226280u));
  /* 1021544b call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215451u);
  /* 10215451 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215453 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10215455 push 0x10226288 */
  push32((uint32_t)(0x10226288u));
  /* 1021545a call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215460u);
  /* 10215460 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10215463:;
  /* 10215463 push 0x102260c0 */
  push32((uint32_t)(0x102260c0u));
  /* 10215468 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x1021546eu);
  /* 1021546e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215471 cmp eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10215474 jle 0x1021550b */
  if ((C.zf||C.sf!=C.of)) goto L_1021550b;
  /* 1021547a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1021547c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1021547e push 0x102238f0 */
  push32((uint32_t)(0x102238f0u));
  /* 10215483 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215489u);
  /* 10215489 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1021548b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1021548d push 0x102238f8 */
  push32((uint32_t)(0x102238f8u));
  /* 10215492 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215498u);
  /* 10215498 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1021549a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1021549c push 0x102238e8 */
  push32((uint32_t)(0x102238e8u));
  /* 102154a1 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102154a7u);
  /* 102154a7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102154a9 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 102154ab push 0x10225f58 */
  push32((uint32_t)(0x10225f58u));
  /* 102154b0 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102154b6u);
  /* 102154b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102154b8 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 102154ba push 0x10225f48 */
  push32((uint32_t)(0x10225f48u));
  /* 102154bf call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102154c5u);
  /* 102154c5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102154c7 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 102154c9 push 0x10225f50 */
  push32((uint32_t)(0x10225f50u));
  /* 102154ce call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102154d4u);
  /* 102154d4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102154d7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102154d9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102154db push 0x102261e8 */
  push32((uint32_t)(0x102261e8u));
  /* 102154e0 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102154e6u);
  /* 102154e6 push 0x102260c0 */
  push32((uint32_t)(0x102260c0u));
  /* 102154eb call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x102154f1u);
  /* 102154f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102154f4 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102154f7 jle 0x1021550b */
  if ((C.zf||C.sf!=C.of)) goto L_1021550b;
  /* 102154f9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102154fb push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102154fd push 0x102261f0 */
  push32((uint32_t)(0x102261f0u));
  /* 10215502 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215508u);
  /* 10215508 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1021550b:;
  /* 1021550b push 0x102236e0 */
  push32((uint32_t)(0x102236e0u));
  /* 10215510 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10215516u);
  /* 10215516 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215519 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021551c jle 0x1021553f */
  if ((C.zf||C.sf!=C.of)) goto L_1021553f;
  /* 1021551e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215520 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10215522 push 0x10226240 */
  push32((uint32_t)(0x10226240u));
  /* 10215527 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021552du);
  /* 1021552d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1021552f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10215531 push 0x10225fa8 */
  push32((uint32_t)(0x10225fa8u));
  /* 10215536 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021553cu);
  /* 1021553c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1021553f:;
  /* 1021553f push 0x10226390 */
  push32((uint32_t)(0x10226390u));
  /* 10215544 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x1021554au);
  /* 1021554a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021554d cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10215550 jle 0x10215623 */
  if ((C.zf||C.sf!=C.of)) goto L_10215623;
  /* 10215556 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215558 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1021555a push 0x10226110 */
  push32((uint32_t)(0x10226110u));
  /* 1021555f call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215565u);
  /* 10215565 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215567 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10215569 push 0x10226108 */
  push32((uint32_t)(0x10226108u));
  /* 1021556e call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215574u);
  /* 10215574 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215576 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10215578 push 0x10226100 */
  push32((uint32_t)(0x10226100u));
  /* 1021557d call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215583u);
  /* 10215583 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215585 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10215587 push 0x10225ff8 */
  push32((uint32_t)(0x10225ff8u));
  /* 1021558c call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215592u);
  /* 10215592 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215594 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10215596 push 0x10225ff0 */
  push32((uint32_t)(0x10225ff0u));
  /* 1021559b call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102155a1u);
  /* 102155a1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102155a3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102155a5 push 0x10225fe8 */
  push32((uint32_t)(0x10225fe8u));
  /* 102155aa call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102155b0u);
  /* 102155b0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102155b3 push 0x10226390 */
  push32((uint32_t)(0x10226390u));
  /* 102155b8 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x102155beu);
  /* 102155be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102155c1 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102155c4 jle 0x10215623 */
  if ((C.zf||C.sf!=C.of)) goto L_10215623;
  /* 102155c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102155c8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 102155ca push 0x102260f8 */
  push32((uint32_t)(0x102260f8u));
  /* 102155cf call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102155d5u);
  /* 102155d5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102155d7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 102155d9 push 0x102260e8 */
  push32((uint32_t)(0x102260e8u));
  /* 102155de call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102155e4u);
  /* 102155e4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102155e6 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 102155e8 push 0x10226138 */
  push32((uint32_t)(0x10226138u));
  /* 102155ed call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102155f3u);
  /* 102155f3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102155f5 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 102155f7 push 0x10225fe0 */
  push32((uint32_t)(0x10225fe0u));
  /* 102155fc call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215602u);
  /* 10215602 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215604 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10215606 push 0x10225fd8 */
  push32((uint32_t)(0x10225fd8u));
  /* 1021560b call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215611u);
  /* 10215611 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215613 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10215615 push 0x10225fd0 */
  push32((uint32_t)(0x10225fd0u));
  /* 1021561a call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215620u);
  /* 10215620 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10215623:;
  /* 10215623 push 0x10226310 */
  push32((uint32_t)(0x10226310u));
  /* 10215628 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x1021562eu);
  /* 1021562e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215631 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10215634 jle 0x10215706 */
  if ((C.zf||C.sf!=C.of)) goto L_10215706;
  /* 1021563a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1021563c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1021563e push 0x10223728 */
  push32((uint32_t)(0x10223728u));
  /* 10215643 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215649u);
  /* 10215649 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1021564b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1021564d push 0x10223720 */
  push32((uint32_t)(0x10223720u));
  /* 10215652 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215658u);
  /* 10215658 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1021565a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1021565c push 0x10223718 */
  push32((uint32_t)(0x10223718u));
  /* 10215661 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215667u);
  /* 10215667 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215669 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1021566b push 0x10223698 */
  push32((uint32_t)(0x10223698u));
  /* 10215670 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215676u);
  /* 10215676 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215678 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1021567a push 0x10223690 */
  push32((uint32_t)(0x10223690u));
  /* 1021567f call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215685u);
  /* 10215685 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215687 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10215689 push 0x10223688 */
  push32((uint32_t)(0x10223688u));
  /* 1021568e call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215694u);
  /* 10215694 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215697 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215699 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1021569b push 0x10223680 */
  push32((uint32_t)(0x10223680u));
  /* 102156a0 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102156a6u);
  /* 102156a6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102156a8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 102156aa push 0x10223658 */
  push32((uint32_t)(0x10223658u));
  /* 102156af call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102156b5u);
  /* 102156b5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102156b7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 102156b9 push 0x10223650 */
  push32((uint32_t)(0x10223650u));
  /* 102156be call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102156c4u);
  /* 102156c4 push 0x10223650 */
  push32((uint32_t)(0x10223650u));
  /* 102156c9 call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x102156cfu);
  /* 102156cf add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102156d2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102156d4 je 0x10215706 */
  if (C.zf) goto L_10215706;
  /* 102156d6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102156d8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 102156da push 0x10223700 */
  push32((uint32_t)(0x10223700u));
  /* 102156df call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102156e5u);
  /* 102156e5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102156e7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 102156e9 push 0x102236f8 */
  push32((uint32_t)(0x102236f8u));
  /* 102156ee call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102156f4u);
  /* 102156f4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102156f6 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 102156f8 push 0x102236f0 */
  push32((uint32_t)(0x102236f0u));
  /* 102156fd call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215703u);
  /* 10215703 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10215706:;
  /* 10215706 push 0x10223670 */
  push32((uint32_t)(0x10223670u));
  /* 1021570b call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10215711u);
  /* 10215711 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215714 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10215717 jle 0x1021579f */
  if ((C.zf||C.sf!=C.of)) goto L_1021579f;
  /* 1021571d push 0x10223660 */
  push32((uint32_t)(0x10223660u));
  /* 10215722 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10215728u);
  /* 10215728 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021572b cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021572e jge 0x1021579f */
  if ((C.sf==C.of)) goto L_1021579f;
  /* 10215730 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215732 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10215734 push 0x102238e0 */
  push32((uint32_t)(0x102238e0u));
  /* 10215739 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021573fu);
  /* 1021573f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215741 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10215743 push 0x102238d8 */
  push32((uint32_t)(0x102238d8u));
  /* 10215748 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021574eu);
  /* 1021574e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215750 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10215752 push 0x102238d0 */
  push32((uint32_t)(0x102238d0u));
  /* 10215757 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021575du);
  /* 1021575d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1021575f push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10215761 push 0x10223898 */
  push32((uint32_t)(0x10223898u));
  /* 10215766 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021576cu);
  /* 1021576c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1021576e push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10215770 push 0x10223890 */
  push32((uint32_t)(0x10223890u));
  /* 10215775 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021577bu);
  /* 1021577b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1021577d push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1021577f push 0x10223888 */
  push32((uint32_t)(0x10223888u));
  /* 10215784 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021578au);
  /* 1021578a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021578d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1021578f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10215791 push 0x102261e8 */
  push32((uint32_t)(0x102261e8u));
  /* 10215796 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021579cu);
  /* 1021579c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1021579f:;
  /* 1021579f push 0x10223660 */
  push32((uint32_t)(0x10223660u));
  /* 102157a4 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x102157aau);
  /* 102157aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102157ad cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102157b0 jle 0x10215891 */
  if ((C.zf||C.sf!=C.of)) goto L_10215891;
  /* 102157b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102157b8 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 102157ba push 0x10223638 */
  push32((uint32_t)(0x10223638u));
  /* 102157bf call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102157c5u);
  /* 102157c5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102157c7 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 102157c9 push 0x10223630 */
  push32((uint32_t)(0x10223630u));
  /* 102157ce call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102157d4u);
  /* 102157d4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102157d6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102157d8 push 0x10223628 */
  push32((uint32_t)(0x10223628u));
  /* 102157dd call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102157e3u);
  /* 102157e3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102157e5 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 102157e7 push 0x102262f8 */
  push32((uint32_t)(0x102262f8u));
  /* 102157ec call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102157f2u);
  /* 102157f2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102157f4 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 102157f6 push 0x102262f0 */
  push32((uint32_t)(0x102262f0u));
  /* 102157fb call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215801u);
  /* 10215801 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215803 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10215805 push 0x102262e8 */
  push32((uint32_t)(0x102262e8u));
  /* 1021580a call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215810u);
  /* 10215810 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215813 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215815 push 0xa */
  push32((uint32_t)(0xau));
  /* 10215817 push 0x10226370 */
  push32((uint32_t)(0x10226370u));
  /* 1021581c call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215822u);
  /* 10215822 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215824 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10215826 push 0x10226368 */
  push32((uint32_t)(0x10226368u));
  /* 1021582b call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215831u);
  /* 10215831 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215833 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10215835 push 0x102263b8 */
  push32((uint32_t)(0x102263b8u));
  /* 1021583a call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215840u);
  /* 10215840 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215842 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10215844 push 0x102263b0 */
  push32((uint32_t)(0x102263b0u));
  /* 10215849 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021584fu);
  /* 1021584f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215851 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10215853 push 0x102263a8 */
  push32((uint32_t)(0x102263a8u));
  /* 10215858 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021585eu);
  /* 1021585e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215860 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10215862 push 0x102263a0 */
  push32((uint32_t)(0x102263a0u));
  /* 10215867 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021586du);
  /* 1021586d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215870 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215872 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10215874 push 0x102261e8 */
  push32((uint32_t)(0x102261e8u));
  /* 10215879 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021587fu);
  /* 1021587f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215881 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10215883 push 0x102261f0 */
  push32((uint32_t)(0x102261f0u));
  /* 10215888 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021588eu);
  /* 1021588e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10215891:;
  /* 10215891 push 0x10225f60 */
  push32((uint32_t)(0x10225f60u));
  /* 10215896 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x1021589cu);
  /* 1021589c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021589f cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102158a2 jle 0x10215a00 */
  if ((C.zf||C.sf!=C.of)) goto L_10215a00;
  /* 102158a8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102158aa push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102158ac push 0x102236c0 */
  push32((uint32_t)(0x102236c0u));
  /* 102158b1 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102158b7u);
  /* 102158b7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102158b9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102158bb push 0x102236c8 */
  push32((uint32_t)(0x102236c8u));
  /* 102158c0 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102158c6u);
  /* 102158c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102158c8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102158ca push 0x102236d0 */
  push32((uint32_t)(0x102236d0u));
  /* 102158cf call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102158d5u);
  /* 102158d5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102158d7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102158d9 push 0x102236d8 */
  push32((uint32_t)(0x102236d8u));
  /* 102158de call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102158e4u);
  /* 102158e4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102158e6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102158e8 push 0x102236a0 */
  push32((uint32_t)(0x102236a0u));
  /* 102158ed call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102158f3u);
  /* 102158f3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102158f5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102158f7 push 0x102236b0 */
  push32((uint32_t)(0x102236b0u));
  /* 102158fc call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215902u);
  /* 10215902 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215905 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215907 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10215909 push 0x10223768 */
  push32((uint32_t)(0x10223768u));
  /* 1021590e call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215914u);
  /* 10215914 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215916 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10215918 push 0x10223770 */
  push32((uint32_t)(0x10223770u));
  /* 1021591d call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215923u);
  /* 10215923 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215925 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10215927 push 0x10223778 */
  push32((uint32_t)(0x10223778u));
  /* 1021592c call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215932u);
  /* 10215932 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215934 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10215936 push 0x10223750 */
  push32((uint32_t)(0x10223750u));
  /* 1021593b call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215941u);
  /* 10215941 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215943 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10215945 push 0x10223758 */
  push32((uint32_t)(0x10223758u));
  /* 1021594a call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215950u);
  /* 10215950 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215952 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10215954 push 0x10223760 */
  push32((uint32_t)(0x10223760u));
  /* 10215959 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021595fu);
  /* 1021595f add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215962 push 0x10225f60 */
  push32((uint32_t)(0x10225f60u));
  /* 10215967 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x1021596du);
  /* 1021596d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215970 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10215973 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215975 jle 0x1021598a */
  if ((C.zf||C.sf!=C.of)) goto L_1021598a;
  /* 10215977 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10215979 push 0x10226008 */
  push32((uint32_t)(0x10226008u));
  /* 1021597e call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215984u);
  /* 10215984 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215986 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10215988 jmp 0x1021599b */
  goto L_1021599b;
L_1021598a:;
  /* 1021598a push 0xf */
  push32((uint32_t)(0xfu));
  /* 1021598c push 0x10226008 */
  push32((uint32_t)(0x10226008u));
  /* 10215991 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215997u);
  /* 10215997 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215999 push 0xf */
  push32((uint32_t)(0xfu));
L_1021599b:;
  /* 1021599b push 0x10226068 */
  push32((uint32_t)(0x10226068u));
  /* 102159a0 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102159a6u);
  /* 102159a6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102159a9 push 0x10226008 */
  push32((uint32_t)(0x10226008u));
  /* 102159ae call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x102159b4u);
  /* 102159b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102159b7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102159b9 je 0x102159df */
  if (C.zf) goto L_102159df;
  /* 102159bb push 0x10226068 */
  push32((uint32_t)(0x10226068u));
  /* 102159c0 call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x102159c6u);
  /* 102159c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102159c9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102159cb je 0x102159df */
  if (C.zf) goto L_102159df;
  /* 102159cd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102159cf push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102159d1 push 0x10226060 */
  push32((uint32_t)(0x10226060u));
  /* 102159d6 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102159dcu);
  /* 102159dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102159df:;
  /* 102159df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102159e1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102159e3 push 0x102261e8 */
  push32((uint32_t)(0x102261e8u));
  /* 102159e8 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102159eeu);
  /* 102159ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102159f0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102159f2 push 0x102261f0 */
  push32((uint32_t)(0x102261f0u));
  /* 102159f7 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102159fdu);
  /* 102159fd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10215a00:;
  /* 10215a00 push 0x102262e8 */
  push32((uint32_t)(0x102262e8u));
  /* 10215a05 call dword ptr [0x1022652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022652c))), 0x10215a0bu);
  /* 10215a0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215a0e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10215a10 je 0x10215a87 */
  if (C.zf) goto L_10215a87;
  /* 10215a12 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215a14 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10215a16 push 0x10226150 */
  push32((uint32_t)(0x10226150u));
  /* 10215a1b call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215a21u);
  /* 10215a21 push 0x10226150 */
  push32((uint32_t)(0x10226150u));
  /* 10215a26 call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x10215a2cu);
  /* 10215a2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215a2f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10215a31 je 0x10215a87 */
  if (C.zf) goto L_10215a87;
  /* 10215a33 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215a35 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10215a37 push 0x10226160 */
  push32((uint32_t)(0x10226160u));
  /* 10215a3c call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215a42u);
  /* 10215a42 push 0x10226160 */
  push32((uint32_t)(0x10226160u));
  /* 10215a47 call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x10215a4du);
  /* 10215a4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215a50 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10215a52 je 0x10215a87 */
  if (C.zf) goto L_10215a87;
  /* 10215a54 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215a56 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10215a58 push 0x10226158 */
  push32((uint32_t)(0x10226158u));
  /* 10215a5d call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215a63u);
  /* 10215a63 push 0x10226158 */
  push32((uint32_t)(0x10226158u));
  /* 10215a68 call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x10215a6eu);
  /* 10215a6e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215a71 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10215a73 je 0x10215a87 */
  if (C.zf) goto L_10215a87;
  /* 10215a75 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215a77 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10215a79 push 0x10226148 */
  push32((uint32_t)(0x10226148u));
  /* 10215a7e call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215a84u);
  /* 10215a84 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10215a87:;
  /* 10215a87 ret  */
  ESPCHK(0x102152b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a90 @ 0x10215a90 (305 bytes, 86 insns) */
void f_10215a90(void) {
  FTRACE(0x10215a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10215a90 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215a92 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10215a94 push 0x10226358 */
  push32((uint32_t)(0x10226358u));
  /* 10215a99 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215a9fu);
  /* 10215a9f push 0x10225f00 */
  push32((uint32_t)(0x10225f00u));
  /* 10215aa4 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10215aaau);
  /* 10215aaa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215aad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10215aaf je 0x10215ac3 */
  if (C.zf) goto L_10215ac3;
  /* 10215ab1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215ab3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215ab5 push 0x10223640 */
  push32((uint32_t)(0x10223640u));
  /* 10215aba call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215ac0u);
  /* 10215ac0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10215ac3:;
  /* 10215ac3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215ac5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215ac7 push 0x10226058 */
  push32((uint32_t)(0x10226058u));
  /* 10215acc call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215ad2u);
  /* 10215ad2 push 0x10223668 */
  push32((uint32_t)(0x10223668u));
  /* 10215ad7 call 0x10215270 */
  push32(0x10215adcu); f_10215270();
  /* 10215adc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215adf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10215ae1 jne 0x10215af1 */
  if (!C.zf) goto L_10215af1;
  /* 10215ae3 mov eax, dword ptr [0x10225f38] */
  EAX = (r32((uint32_t)(0x10225f38)));
  /* 10215ae8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10215aea je 0x10215b03 */
  if (C.zf) goto L_10215b03;
  /* 10215aec cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10215aef je 0x10215b03 */
  if (C.zf) goto L_10215b03;
L_10215af1:;
  /* 10215af1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215af3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10215af5 push 0x10226250 */
  push32((uint32_t)(0x10226250u));
  /* 10215afa call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215b00u);
  /* 10215b00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10215b03:;
  /* 10215b03 push 0x10225fc8 */
  push32((uint32_t)(0x10225fc8u));
  /* 10215b08 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10215b0eu);
  /* 10215b0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215b11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10215b13 je 0x10215b27 */
  if (C.zf) goto L_10215b27;
  /* 10215b15 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215b17 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215b19 push 0x10226020 */
  push32((uint32_t)(0x10226020u));
  /* 10215b1e call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215b24u);
  /* 10215b24 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10215b27:;
  /* 10215b27 push 0x10226130 */
  push32((uint32_t)(0x10226130u));
  /* 10215b2c call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x10215b32u);
  /* 10215b32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215b35 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10215b37 je 0x10215b4b */
  if (C.zf) goto L_10215b4b;
  /* 10215b39 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215b3b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215b3d push 0x10226010 */
  push32((uint32_t)(0x10226010u));
  /* 10215b42 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215b48u);
  /* 10215b48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10215b4b:;
  /* 10215b4b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215b4d push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10215b4f push 0x10226130 */
  push32((uint32_t)(0x10226130u));
  /* 10215b54 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215b5au);
  /* 10215b5a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215b5c push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10215b5e push 0x102260e0 */
  push32((uint32_t)(0x102260e0u));
  /* 10215b63 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215b69u);
  /* 10215b69 push 0x102260b8 */
  push32((uint32_t)(0x102260b8u));
  /* 10215b6e call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10215b74u);
  /* 10215b74 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215b77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10215b79 je 0x10215b8d */
  if (C.zf) goto L_10215b8d;
  /* 10215b7b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215b7d push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10215b7f push 0x10226198 */
  push32((uint32_t)(0x10226198u));
  /* 10215b84 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215b8au);
  /* 10215b8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10215b8d:;
  /* 10215b8d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215b8f push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10215b91 push 0x10226000 */
  push32((uint32_t)(0x10226000u));
  /* 10215b96 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215b9cu);
  /* 10215b9c push 0x10226238 */
  push32((uint32_t)(0x10226238u));
  /* 10215ba1 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10215ba7u);
  /* 10215ba7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215baa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10215bac je 0x10215bc0 */
  if (C.zf) goto L_10215bc0;
  /* 10215bae push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215bb0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215bb2 push 0x102238c0 */
  push32((uint32_t)(0x102238c0u));
  /* 10215bb7 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10215bbdu);
  /* 10215bbd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10215bc0:;
  /* 10215bc0 ret  */
  ESPCHK(0x10215a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bd0 @ 0x10215bd0 (536 bytes, 150 insns) */
void f_10215bd0(void) {
  FTRACE(0x10215bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10215bd0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215bd2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215bd4 push 3 */
  push32((uint32_t)(0x3u));
  /* 10215bd6 push 0x10226238 */
  push32((uint32_t)(0x10226238u));
  /* 10215bdb call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10215be1u);
  /* 10215be1 push 0x10225fc8 */
  push32((uint32_t)(0x10225fc8u));
  /* 10215be6 call dword ptr [0x10226524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226524))), 0x10215becu);
  /* 10215bec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215bef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10215bf1 je 0x10215c18 */
  if (C.zf) goto L_10215c18;
  /* 10215bf3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215bf5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215bf7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10215bf9 push 0x10225fb8 */
  push32((uint32_t)(0x10225fb8u));
  /* 10215bfe call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10215c04u);
  /* 10215c04 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215c06 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215c08 push 4 */
  push32((uint32_t)(0x4u));
  /* 10215c0a push 0x10225fb0 */
  push32((uint32_t)(0x10225fb0u));
  /* 10215c0f call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10215c15u);
  /* 10215c15 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10215c18:;
  /* 10215c18 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215c1a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215c1c push 1 */
  push32((uint32_t)(0x1u));
  /* 10215c1e push 0x10225fb8 */
  push32((uint32_t)(0x10225fb8u));
  /* 10215c23 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10215c29u);
  /* 10215c29 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215c2b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215c2d push 1 */
  push32((uint32_t)(0x1u));
  /* 10215c2f push 0x10225f98 */
  push32((uint32_t)(0x10225f98u));
  /* 10215c34 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10215c3au);
  /* 10215c3a mov eax, dword ptr [0x10226294] */
  EAX = (r32((uint32_t)(0x10226294)));
  /* 10215c3f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215c42 mov ecx, dword ptr [eax*4 + 0x10225f78] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10225f78)));
  /* 10215c49 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10215c4b jne 0x10215c68 */
  if (!C.zf) goto L_10215c68;
  /* 10215c4d call 0x10215220 */
  push32(0x10215c52u); f_10215220();
  /* 10215c52 push 0x10223858 */
  push32((uint32_t)(0x10223858u));
  /* 10215c57 call dword ptr [0x10226524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226524))), 0x10215c5du);
  /* 10215c5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215c60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10215c62 je 0x10215de7 */
  if (C.zf) goto L_10215de7;
L_10215c68:;
  /* 10215c68 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215c6a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215c6c push 1 */
  push32((uint32_t)(0x1u));
  /* 10215c6e push 0x102261c8 */
  push32((uint32_t)(0x102261c8u));
  /* 10215c73 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10215c79u);
  /* 10215c79 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215c7b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215c7d push 2 */
  push32((uint32_t)(0x2u));
  /* 10215c7f push 0x10225f98 */
  push32((uint32_t)(0x10225f98u));
  /* 10215c84 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10215c8au);
  /* 10215c8a push 0x10225f98 */
  push32((uint32_t)(0x10225f98u));
  /* 10215c8f call dword ptr [0x10226524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226524))), 0x10215c95u);
  /* 10215c95 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215c98 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10215c9b jge 0x10215caa */
  if ((C.sf==C.of)) goto L_10215caa;
  /* 10215c9d call 0x10212670 */
  push32(0x10215ca2u); f_10212670();
  /* 10215ca2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10215ca4 jne 0x10215de7 */
  if (!C.zf) goto L_10215de7;
L_10215caa:;
  /* 10215caa push esi */
  push32((uint32_t)(ESI));
  /* 10215cab push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215cad push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215caf push 2 */
  push32((uint32_t)(0x2u));
  /* 10215cb1 push 0x10226230 */
  push32((uint32_t)(0x10226230u));
  /* 10215cb6 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10215cbcu);
  /* 10215cbc push 0x10226230 */
  push32((uint32_t)(0x10226230u));
  /* 10215cc1 call dword ptr [0x10226524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226524))), 0x10215cc7u);
  /* 10215cc7 push 0x10226230 */
  push32((uint32_t)(0x10226230u));
  /* 10215ccc mov esi, eax */
  ESI = (EAX);
  /* 10215cce call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10215cd4u);
  /* 10215cd4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215cd7 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10215cd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10215cdb pop esi */
  ESI = (pop32());
  /* 10215cdc jg 0x10215de7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10215de7;
  /* 10215ce2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215ce4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215ce6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10215ce8 push 0x10225f00 */
  push32((uint32_t)(0x10225f00u));
  /* 10215ced call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10215cf3u);
  /* 10215cf3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215cf6 call 0x10212780 */
  push32(0x10215cfbu); f_10212780();
  /* 10215cfb cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10215cfe jge 0x10215d27 */
  if ((C.sf==C.of)) goto L_10215d27;
  /* 10215d00 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215d02 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215d04 push 1 */
  push32((uint32_t)(0x1u));
  /* 10215d06 push 0x10225fc8 */
  push32((uint32_t)(0x10225fc8u));
  /* 10215d0b call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10215d11u);
  /* 10215d11 push 0x10225fc8 */
  push32((uint32_t)(0x10225fc8u));
  /* 10215d16 call dword ptr [0x10226524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226524))), 0x10215d1cu);
  /* 10215d1c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215d1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10215d21 je 0x10215de7 */
  if (C.zf) goto L_10215de7;
L_10215d27:;
  /* 10215d27 call 0x10215220 */
  push32(0x10215d2cu); f_10215220();
  /* 10215d2c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215d2e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215d30 push 4 */
  push32((uint32_t)(0x4u));
  /* 10215d32 push 0x10225f98 */
  push32((uint32_t)(0x10225f98u));
  /* 10215d37 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10215d3du);
  /* 10215d3d push 0x10225f98 */
  push32((uint32_t)(0x10225f98u));
  /* 10215d42 call dword ptr [0x10226524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226524))), 0x10215d48u);
  /* 10215d48 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215d4b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10215d4e jl 0x10215de7 */
  if ((C.sf!=C.of)) goto L_10215de7;
  /* 10215d54 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215d56 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215d58 push 3 */
  push32((uint32_t)(0x3u));
  /* 10215d5a push 0x102260b8 */
  push32((uint32_t)(0x102260b8u));
  /* 10215d5f call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10215d65u);
  /* 10215d65 push 0x10226238 */
  push32((uint32_t)(0x10226238u));
  /* 10215d6a call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10215d70u);
  /* 10215d70 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215d73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10215d75 je 0x10215d8b */
  if (C.zf) goto L_10215d8b;
  /* 10215d77 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215d79 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215d7b push 4 */
  push32((uint32_t)(0x4u));
  /* 10215d7d push 0x102260b8 */
  push32((uint32_t)(0x102260b8u));
  /* 10215d82 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10215d88u);
  /* 10215d88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10215d8b:;
  /* 10215d8b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215d8d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215d8f push 1 */
  push32((uint32_t)(0x1u));
  /* 10215d91 push 0x102235f8 */
  push32((uint32_t)(0x102235f8u));
  /* 10215d96 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10215d9cu);
  /* 10215d9c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215d9e push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10215da0 push 3 */
  push32((uint32_t)(0x3u));
  /* 10215da2 push 0x102235f8 */
  push32((uint32_t)(0x102235f8u));
  /* 10215da7 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10215dadu);
  /* 10215dad push 0x102238c0 */
  push32((uint32_t)(0x102238c0u));
  /* 10215db2 call dword ptr [0x1022652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022652c))), 0x10215db8u);
  /* 10215db8 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215dbb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10215dbd je 0x10215dd3 */
  if (C.zf) goto L_10215dd3;
  /* 10215dbf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215dc1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215dc3 push 5 */
  push32((uint32_t)(0x5u));
  /* 10215dc5 push 0x102260b8 */
  push32((uint32_t)(0x102260b8u));
  /* 10215dca call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10215dd0u);
  /* 10215dd0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10215dd3:;
  /* 10215dd3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215dd5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215dd7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10215dd9 push 0x102260d8 */
  push32((uint32_t)(0x102260d8u));
  /* 10215dde call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10215de4u);
  /* 10215de4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10215de7:;
  /* 10215de7 ret  */
  ESPCHK(0x10215bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005df0 @ 0x10215df0 (472 bytes, 137 insns) */
void f_10215df0(void) {
  FTRACE(0x10215df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10215df0 push ecx */
  push32((uint32_t)(ECX));
  /* 10215df1 push 0x10226258 */
  push32((uint32_t)(0x10226258u));
  /* 10215df6 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10215dfcu);
  /* 10215dfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215dff cmp eax, 0x28 */
  { uint32_t _a=(EAX),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10215e02 jge 0x10215e17 */
  if ((C.sf==C.of)) goto L_10215e17;
  /* 10215e04 mov eax, dword ptr [0x10226294] */
  EAX = (r32((uint32_t)(0x10226294)));
  /* 10215e09 push 0 */
  push32((uint32_t)(0x0u));
  /* 10215e0b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10215e0e push eax */
  push32((uint32_t)(EAX));
  /* 10215e0f call 0x102126d0 */
  push32(0x10215e14u); f_102126d0();
  /* 10215e14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10215e17:;
  /* 10215e17 push 0x10226258 */
  push32((uint32_t)(0x10226258u));
  /* 10215e1c call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10215e22u);
  /* 10215e22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215e25 cmp eax, 0x9c */
  { uint32_t _a=(EAX),_b=(0x9cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10215e2a jg 0x10215e3e */
  if ((!C.zf&&C.sf==C.of)) goto L_10215e3e;
  /* 10215e2c push 0x102260b8 */
  push32((uint32_t)(0x102260b8u));
  /* 10215e31 call dword ptr [0x10226524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226524))), 0x10215e37u);
  /* 10215e37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215e3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10215e3c je 0x10215e52 */
  if (C.zf) goto L_10215e52;
L_10215e3e:;
  /* 10215e3e mov ecx, dword ptr [0x10226294] */
  ECX = (r32((uint32_t)(0x10226294)));
  /* 10215e44 push 1 */
  push32((uint32_t)(0x1u));
  /* 10215e46 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10215e49 push ecx */
  push32((uint32_t)(ECX));
  /* 10215e4a call 0x102126d0 */
  push32(0x10215e4fu); f_102126d0();
  /* 10215e4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10215e52:;
  /* 10215e52 push esi */
  push32((uint32_t)(ESI));
  /* 10215e53 push edi */
  push32((uint32_t)(EDI));
  /* 10215e54 mov edi, 2 */
  EDI = (0x2u);
L_10215e59:;
  /* 10215e59 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215e5b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10215e5d push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10215e62 push 0x10226170 */
  push32((uint32_t)(0x10226170u));
  /* 10215e67 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10215e6du);
  /* 10215e6d push 0x10223668 */
  push32((uint32_t)(0x10223668u));
  /* 10215e72 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10215e78u);
  /* 10215e78 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215e7b cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10215e80 jge 0x10215e9b */
  if ((C.sf==C.of)) goto L_10215e9b;
  /* 10215e82 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215e84 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10215e86 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10215e8b push 0x10223668 */
  push32((uint32_t)(0x10223668u));
  /* 10215e90 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10215e96u);
  /* 10215e96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215e99 jmp 0x10215ec6 */
  goto L_10215ec6;
L_10215e9b:;
  /* 10215e9b push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10215e9d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10215e9f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10215ea4 push 0x10223668 */
  push32((uint32_t)(0x10223668u));
  /* 10215ea9 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10215eafu);
  /* 10215eaf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215eb1 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10215eb3 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10215eb8 push 0x102260c0 */
  push32((uint32_t)(0x102260c0u));
  /* 10215ebd call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10215ec3u);
  /* 10215ec3 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10215ec6:;
  /* 10215ec6 mov edx, dword ptr [0x10226294] */
  EDX = (r32((uint32_t)(0x10226294)));
  /* 10215ecc add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10215ecf push edx */
  push32((uint32_t)(EDX));
  /* 10215ed0 call 0x102126f0 */
  push32(0x10215ed5u); f_102126f0();
  /* 10215ed5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215ed8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10215eda jne 0x10215efd */
  if (!C.zf) goto L_10215efd;
  /* 10215edc call 0x10212780 */
  push32(0x10215ee1u); f_10212780();
  /* 10215ee1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10215ee4 jge 0x10215efd */
  if ((C.sf==C.of)) goto L_10215efd;
  /* 10215ee6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215ee8 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10215eea push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10215eef push 0x10226258 */
  push32((uint32_t)(0x10226258u));
  /* 10215ef4 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10215efau);
  /* 10215efa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10215efd:;
  /* 10215efd mov al, byte ptr [0x10226294] */
  AL = (r8((uint32_t)(0x10226294)));
  /* 10215f02 mov byte ptr [esp + 8], al */
  w8((uint32_t)(ESP + 0x8), (AL));
  /* 10215f06 mov eax, dword ptr [0x10226498] */
  EAX = (r32((uint32_t)(0x10226498)));
  /* 10215f0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10215f0d je 0x10215f25 */
  if (C.zf) goto L_10215f25;
  /* 10215f0f mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10215f13 push 1 */
  push32((uint32_t)(0x1u));
  /* 10215f15 push 0x10223868 */
  push32((uint32_t)(0x10223868u));
  /* 10215f1a push ecx */
  push32((uint32_t)(ECX));
  /* 10215f1b call eax */
  call_ind((uint32_t)(EAX), 0x10215f1du);
  /* 10215f1d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215f20 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10215f23 jge 0x10215f65 */
  if ((C.sf==C.of)) goto L_10215f65;
L_10215f25:;
  /* 10215f25 push 5 */
  push32((uint32_t)(0x5u));
  /* 10215f27 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10215f2du);
  /* 10215f2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215f30 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10215f35 jle 0x10215f65 */
  if ((C.zf||C.sf!=C.of)) goto L_10215f65;
  /* 10215f37 push 4 */
  push32((uint32_t)(0x4u));
  /* 10215f39 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10215f3fu);
  /* 10215f3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215f42 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10215f47 jle 0x10215f65 */
  if ((C.zf||C.sf!=C.of)) goto L_10215f65;
  /* 10215f49 mov esi, 0x1e */
  ESI = (0x1eu);
L_10215f4e:;
  /* 10215f4e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215f50 push 0xa */
  push32((uint32_t)(0xau));
  /* 10215f52 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10215f54 push 0x10223868 */
  push32((uint32_t)(0x10223868u));
  /* 10215f59 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10215f5fu);
  /* 10215f5f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215f62 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10215f63 jne 0x10215f4e */
  if (!C.zf) goto L_10215f4e;
L_10215f65:;
  /* 10215f65 push 0x10226000 */
  push32((uint32_t)(0x10226000u));
  /* 10215f6a call dword ptr [0x1022652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022652c))), 0x10215f70u);
  /* 10215f70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215f73 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10215f75 je 0x10215f7b */
  if (C.zf) goto L_10215f7b;
  /* 10215f77 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10215f79 jmp 0x10215f7d */
  goto L_10215f7d;
L_10215f7b:;
  /* 10215f7b push 0x64 */
  push32((uint32_t)(0x64u));
L_10215f7d:;
  /* 10215f7d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10215f7f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10215f84 push 0x10226390 */
  push32((uint32_t)(0x10226390u));
  /* 10215f89 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10215f8fu);
  /* 10215f8f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215f92 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215f94 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10215f96 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10215f9b push 0x10223660 */
  push32((uint32_t)(0x10223660u));
  /* 10215fa0 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10215fa6u);
  /* 10215fa6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10215fa8 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10215faa push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10215faf push 0x10225f60 */
  push32((uint32_t)(0x10225f60u));
  /* 10215fb4 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10215fbau);
  /* 10215fba add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215fbd dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10215fbe jne 0x10215e59 */
  if (!C.zf) goto L_10215e59;
  /* 10215fc4 pop edi */
  EDI = (pop32());
  /* 10215fc5 pop esi */
  ESI = (pop32());
  /* 10215fc6 pop ecx */
  ECX = (pop32());
  /* 10215fc7 ret  */
  ESPCHK(0x10215df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fd0 @ 0x10215fd0 (789 bytes, 244 insns) */
void f_10215fd0(void) {
  FTRACE(0x10215fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10215fd0 push ecx */
  push32((uint32_t)(ECX));
  /* 10215fd1 push 0x10223858 */
  push32((uint32_t)(0x10223858u));
  /* 10215fd6 call dword ptr [0x10226524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226524))), 0x10215fdcu);
  /* 10215fdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215fdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10215fe1 je 0x102162e3 */
  if (C.zf) goto L_102162e3;
  /* 10215fe7 call 0x10212670 */
  push32(0x10215fecu); f_10212670();
  /* 10215fec cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10215fef jne 0x10216036 */
  if (!C.zf) goto L_10216036;
  /* 10215ff1 mov eax, dword ptr [0x10226294] */
  EAX = (r32((uint32_t)(0x10226294)));
  /* 10215ff6 push eax */
  push32((uint32_t)(EAX));
  /* 10215ff7 call 0x102126f0 */
  push32(0x10215ffcu); f_102126f0();
  /* 10215ffc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10215fff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10216001 jne 0x102162e3 */
  if (!C.zf) goto L_102162e3;
  /* 10216007 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 1021600c push 3 */
  push32((uint32_t)(0x3u));
  /* 1021600e push 2 */
  push32((uint32_t)(0x2u));
  /* 10216010 call 0x10212610 */
  push32(0x10216015u); f_10212610();
  /* 10216015 push 0x13880 */
  push32((uint32_t)(0x13880u));
  /* 1021601a push 3 */
  push32((uint32_t)(0x3u));
  /* 1021601c push 0 */
  push32((uint32_t)(0x0u));
  /* 1021601e call 0x10212610 */
  push32(0x10216023u); f_10212610();
  /* 10216023 mov ecx, dword ptr [0x10226294] */
  ECX = (r32((uint32_t)(0x10226294)));
  /* 10216029 push 1 */
  push32((uint32_t)(0x1u));
  /* 1021602b push ecx */
  push32((uint32_t)(ECX));
  /* 1021602c call 0x102126d0 */
  push32(0x10216031u); f_102126d0();
  /* 10216031 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216034 pop ecx */
  ECX = (pop32());
  /* 10216035 ret  */
  ESPCHK(0x10215fd0u, _esp0);
  ESP += 4; return;
L_10216036:;
  /* 10216036 push 0x10223858 */
  push32((uint32_t)(0x10223858u));
  /* 1021603b call dword ptr [0x10226524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226524))), 0x10216041u);
  /* 10216041 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216044 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10216046 je 0x102162e3 */
  if (C.zf) goto L_102162e3;
  /* 1021604c mov edx, dword ptr [0x10226294] */
  EDX = (r32((uint32_t)(0x10226294)));
  /* 10216052 push edx */
  push32((uint32_t)(EDX));
  /* 10216053 call 0x102126f0 */
  push32(0x10216058u); f_102126f0();
  /* 10216058 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021605b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021605d jne 0x102160d2 */
  if (!C.zf) goto L_102160d2;
  /* 1021605f push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10216064 push 3 */
  push32((uint32_t)(0x3u));
  /* 10216066 push 5 */
  push32((uint32_t)(0x5u));
  /* 10216068 call 0x10212610 */
  push32(0x1021606du); f_10212610();
  /* 1021606d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216070 call 0x10212670 */
  push32(0x10216075u); f_10212670();
  /* 10216075 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10216078 jne 0x10216099 */
  if (!C.zf) goto L_10216099;
  /* 1021607a push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 1021607f push 0 */
  push32((uint32_t)(0x0u));
  /* 10216081 push 4 */
  push32((uint32_t)(0x4u));
  /* 10216083 call 0x10212610 */
  push32(0x10216088u); f_10212610();
  /* 10216088 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 1021608d push 2 */
  push32((uint32_t)(0x2u));
  /* 1021608f push 4 */
  push32((uint32_t)(0x4u));
  /* 10216091 call 0x10212610 */
  push32(0x10216096u); f_10212610();
  /* 10216096 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10216099:;
  /* 10216099 call 0x10212670 */
  push32(0x1021609eu); f_10212670();
  /* 1021609e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102160a1 jne 0x102160c2 */
  if (!C.zf) goto L_102160c2;
  /* 102160a3 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 102160a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 102160aa push 4 */
  push32((uint32_t)(0x4u));
  /* 102160ac call 0x10212610 */
  push32(0x102160b1u); f_10212610();
  /* 102160b1 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 102160b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 102160b8 push 4 */
  push32((uint32_t)(0x4u));
  /* 102160ba call 0x10212610 */
  push32(0x102160bfu); f_10212610();
  /* 102160bf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102160c2:;
  /* 102160c2 mov eax, dword ptr [0x10226294] */
  EAX = (r32((uint32_t)(0x10226294)));
  /* 102160c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 102160c9 push eax */
  push32((uint32_t)(EAX));
  /* 102160ca call 0x102126d0 */
  push32(0x102160cfu); f_102126d0();
  /* 102160cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102160d2:;
  /* 102160d2 push 0x10226250 */
  push32((uint32_t)(0x10226250u));
  /* 102160d7 call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x102160ddu);
  /* 102160dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102160e0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102160e2 je 0x10216154 */
  if (C.zf) goto L_10216154;
  /* 102160e4 push 0x10226130 */
  push32((uint32_t)(0x10226130u));
  /* 102160e9 call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x102160efu);
  /* 102160ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102160f2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102160f4 jne 0x10216154 */
  if (!C.zf) goto L_10216154;
  /* 102160f6 push 0x10225f00 */
  push32((uint32_t)(0x10225f00u));
  /* 102160fb call dword ptr [0x10226524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226524))), 0x10216101u);
  /* 10216101 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216104 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10216106 je 0x10216154 */
  if (C.zf) goto L_10216154;
  /* 10216108 mov eax, dword ptr [0x1022649c] */
  EAX = (r32((uint32_t)(0x1022649c)));
  /* 1021610d mov cl, byte ptr [0x10226294] */
  CL = (r8((uint32_t)(0x10226294)));
  /* 10216113 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10216115 mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 10216119 je 0x1021612e */
  if (C.zf) goto L_1021612e;
  /* 1021611b mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 1021611f push 5 */
  push32((uint32_t)(0x5u));
  /* 10216121 push 0x10226130 */
  push32((uint32_t)(0x10226130u));
  /* 10216126 push edx */
  push32((uint32_t)(EDX));
  /* 10216127 call eax */
  call_ind((uint32_t)(EAX), 0x10216129u);
  /* 10216129 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021612c jmp 0x10216130 */
  goto L_10216130;
L_1021612e:;
  /* 1021612e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10216130:;
  /* 10216130 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10216133 push 0 */
  push32((uint32_t)(0x0u));
  /* 10216135 lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 10216138 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 1021613d imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1021613f sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10216142 mov eax, edx */
  EAX = (EDX);
  /* 10216144 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 10216147 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10216149 push edx */
  push32((uint32_t)(EDX));
  /* 1021614a push 5 */
  push32((uint32_t)(0x5u));
  /* 1021614c call 0x10212f90 */
  push32(0x10216151u); f_10212f90();
  /* 10216151 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10216154:;
  /* 10216154 push 0x10226130 */
  push32((uint32_t)(0x10226130u));
  /* 10216159 call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x1021615fu);
  /* 1021615f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216162 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10216164 je 0x10216279 */
  if (C.zf) goto L_10216279;
  /* 1021616a push 0x10226000 */
  push32((uint32_t)(0x10226000u));
  /* 1021616f call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x10216175u);
  /* 10216175 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216178 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1021617a jne 0x10216279 */
  if (!C.zf) goto L_10216279;
  /* 10216180 mov eax, dword ptr [0x1022649c] */
  EAX = (r32((uint32_t)(0x1022649c)));
  /* 10216185 mov cl, byte ptr [0x10226294] */
  CL = (r8((uint32_t)(0x10226294)));
  /* 1021618b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021618d mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 10216191 je 0x102161a6 */
  if (C.zf) goto L_102161a6;
  /* 10216193 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 10216197 push 3 */
  push32((uint32_t)(0x3u));
  /* 10216199 push 0x10226000 */
  push32((uint32_t)(0x10226000u));
  /* 1021619e push edx */
  push32((uint32_t)(EDX));
  /* 1021619f call eax */
  call_ind((uint32_t)(EAX), 0x102161a1u);
  /* 102161a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102161a4 jmp 0x102161a8 */
  goto L_102161a8;
L_102161a6:;
  /* 102161a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102161a8:;
  /* 102161a8 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 102161ab push 2 */
  push32((uint32_t)(0x2u));
  /* 102161ad lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 102161b0 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 102161b5 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 102161b7 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 102161ba mov eax, edx */
  EAX = (EDX);
  /* 102161bc shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 102161bf add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102161c1 push edx */
  push32((uint32_t)(EDX));
  /* 102161c2 push 3 */
  push32((uint32_t)(0x3u));
  /* 102161c4 call 0x10212f90 */
  push32(0x102161c9u); f_10212f90();
  /* 102161c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102161cc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102161ce je 0x10216279 */
  if (C.zf) goto L_10216279;
  /* 102161d4 mov eax, dword ptr [0x1022649c] */
  EAX = (r32((uint32_t)(0x1022649c)));
  /* 102161d9 mov cl, byte ptr [0x10226294] */
  CL = (r8((uint32_t)(0x10226294)));
  /* 102161df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102161e1 mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 102161e5 je 0x102161fa */
  if (C.zf) goto L_102161fa;
  /* 102161e7 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 102161eb push 1 */
  push32((uint32_t)(0x1u));
  /* 102161ed push 0x10226000 */
  push32((uint32_t)(0x10226000u));
  /* 102161f2 push edx */
  push32((uint32_t)(EDX));
  /* 102161f3 call eax */
  call_ind((uint32_t)(EAX), 0x102161f5u);
  /* 102161f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102161f8 jmp 0x102161fc */
  goto L_102161fc;
L_102161fa:;
  /* 102161fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102161fc:;
  /* 102161fc lea ecx, [eax*8] */
  ECX = ((uint32_t)(EAX*8));
  /* 10216203 push 2 */
  push32((uint32_t)(0x2u));
  /* 10216205 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10216207 lea eax, [ecx + ecx*2] */
  EAX = ((uint32_t)(ECX + ECX*2));
  /* 1021620a lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1021620d mov eax, 0x51eb851f */
  EAX = (0x51eb851fu);
  /* 10216212 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10216214 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10216217 mov eax, edx */
  EAX = (EDX);
  /* 10216219 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 1021621c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021621e push edx */
  push32((uint32_t)(EDX));
  /* 1021621f push 1 */
  push32((uint32_t)(0x1u));
  /* 10216221 call 0x10212f90 */
  push32(0x10216226u); f_10212f90();
  /* 10216226 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216229 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1021622b je 0x10216279 */
  if (C.zf) goto L_10216279;
  /* 1021622d mov eax, dword ptr [0x1022649c] */
  EAX = (r32((uint32_t)(0x1022649c)));
  /* 10216232 mov cl, byte ptr [0x10226294] */
  CL = (r8((uint32_t)(0x10226294)));
  /* 10216238 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021623a mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 1021623e je 0x10216253 */
  if (C.zf) goto L_10216253;
  /* 10216240 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 10216244 push 4 */
  push32((uint32_t)(0x4u));
  /* 10216246 push 0x10226000 */
  push32((uint32_t)(0x10226000u));
  /* 1021624b push edx */
  push32((uint32_t)(EDX));
  /* 1021624c call eax */
  call_ind((uint32_t)(EAX), 0x1021624eu);
  /* 1021624e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216251 jmp 0x10216255 */
  goto L_10216255;
L_10216253:;
  /* 10216253 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10216255:;
  /* 10216255 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10216258 push 2 */
  push32((uint32_t)(0x2u));
  /* 1021625a lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 1021625d mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10216262 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10216264 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10216267 mov eax, edx */
  EAX = (EDX);
  /* 10216269 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 1021626c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021626e push edx */
  push32((uint32_t)(EDX));
  /* 1021626f push 4 */
  push32((uint32_t)(0x4u));
  /* 10216271 call 0x10212f90 */
  push32(0x10216276u); f_10212f90();
  /* 10216276 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10216279:;
  /* 10216279 push 2 */
  push32((uint32_t)(0x2u));
  /* 1021627b call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10216281u);
  /* 10216281 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216284 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10216289 jle 0x102162ae */
  if ((C.zf||C.sf!=C.of)) goto L_102162ae;
  /* 1021628b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10216290 push 2 */
  push32((uint32_t)(0x2u));
  /* 10216292 push 0 */
  push32((uint32_t)(0x0u));
  /* 10216294 call 0x10212610 */
  push32(0x10216299u); f_10212610();
  /* 10216299 push 2 */
  push32((uint32_t)(0x2u));
  /* 1021629b call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x102162a1u);
  /* 102162a1 push eax */
  push32((uint32_t)(EAX));
  /* 102162a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 102162a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 102162a6 call 0x10212610 */
  push32(0x102162abu); f_10212610();
  /* 102162ab add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102162ae:;
  /* 102162ae push 0 */
  push32((uint32_t)(0x0u));
  /* 102162b0 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x102162b6u);
  /* 102162b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102162b9 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102162be jle 0x102162e3 */
  if ((C.zf||C.sf!=C.of)) goto L_102162e3;
  /* 102162c0 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 102162c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 102162c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 102162c9 call 0x10212610 */
  push32(0x102162ceu); f_10212610();
  /* 102162ce push 0 */
  push32((uint32_t)(0x0u));
  /* 102162d0 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x102162d6u);
  /* 102162d6 push eax */
  push32((uint32_t)(EAX));
  /* 102162d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 102162d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 102162db call 0x10212610 */
  push32(0x102162e0u); f_10212610();
  /* 102162e0 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102162e3:;
  /* 102162e3 pop ecx */
  ECX = (pop32());
  /* 102162e4 ret  */
  ESPCHK(0x10215fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_100062f0 @ 0x102162f0 (818 bytes, 268 insns) */
void f_102162f0(void) {
  FTRACE(0x102162f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102162f0 push ecx */
  push32((uint32_t)(ECX));
  /* 102162f1 push 4 */
  push32((uint32_t)(0x4u));
  /* 102162f3 push 4 */
  push32((uint32_t)(0x4u));
  /* 102162f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 102162f7 call dword ptr [0x102264f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264f4))), 0x102162fdu);
  /* 102162fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216300 call dword ptr [0x10226550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226550))), 0x10216306u);
  /* 10216306 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10216308 je 0x10216620 */
  if (C.zf) goto L_10216620;
  /* 1021630e push 4 */
  push32((uint32_t)(0x4u));
  /* 10216310 push 4 */
  push32((uint32_t)(0x4u));
  /* 10216312 push 9 */
  push32((uint32_t)(0x9u));
  /* 10216314 call dword ptr [0x102264f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264f4))), 0x1021631au);
  /* 1021631a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021631d call 0x10212670 */
  push32(0x10216322u); f_10212670();
  /* 10216322 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10216325 je 0x10216620 */
  if (C.zf) goto L_10216620;
  /* 1021632b call dword ptr [0x10226550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226550))), 0x10216331u);
  /* 10216331 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10216333 je 0x10216611 */
  if (C.zf) goto L_10216611;
  /* 10216339 push esi */
  push32((uint32_t)(ESI));
  /* 1021633a push edi */
  push32((uint32_t)(EDI));
  /* 1021633b push 4 */
  push32((uint32_t)(0x4u));
  /* 1021633d push 4 */
  push32((uint32_t)(0x4u));
  /* 1021633f push 9 */
  push32((uint32_t)(0x9u));
  /* 10216341 call dword ptr [0x102264f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264f4))), 0x10216347u);
  /* 10216347 push 0x102260e0 */
  push32((uint32_t)(0x102260e0u));
  /* 1021634c call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x10216352u);
  /* 10216352 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216355 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10216357 jne 0x102163bf */
  if (!C.zf) goto L_102163bf;
  /* 10216359 mov al, byte ptr [0x10226294] */
  AL = (r8((uint32_t)(0x10226294)));
  /* 1021635e mov byte ptr [esp + 8], al */
  w8((uint32_t)(ESP + 0x8), (AL));
  /* 10216362 mov eax, dword ptr [0x1022649c] */
  EAX = (r32((uint32_t)(0x1022649c)));
  /* 10216367 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10216369 je 0x10216380 */
  if (C.zf) goto L_10216380;
  /* 1021636b mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1021636f push 3 */
  push32((uint32_t)(0x3u));
  /* 10216371 push 0x102260e0 */
  push32((uint32_t)(0x102260e0u));
  /* 10216376 push ecx */
  push32((uint32_t)(ECX));
  /* 10216377 call eax */
  call_ind((uint32_t)(EAX), 0x10216379u);
  /* 10216379 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021637c mov esi, eax */
  ESI = (EAX);
  /* 1021637e jmp 0x10216382 */
  goto L_10216382;
L_10216380:;
  /* 10216380 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10216382:;
  /* 10216382 push 3 */
  push32((uint32_t)(0x3u));
  /* 10216384 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x1021638au);
  /* 1021638a lea edx, [esi + esi*4] */
  EDX = ((uint32_t)(ESI + ESI*4));
  /* 1021638d mov edi, eax */
  EDI = (EAX);
  /* 1021638f mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10216394 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216397 lea ecx, [esi + edx*2] */
  ECX = ((uint32_t)(ESI + EDX*2));
  /* 1021639a imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1021639c sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 1021639f mov eax, edx */
  EAX = (EDX);
  /* 102163a1 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 102163a4 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102163a6 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102163a8 jge 0x102163b0 */
  if ((C.sf==C.of)) goto L_102163b0;
  /* 102163aa push 4 */
  push32((uint32_t)(0x4u));
  /* 102163ac push 4 */
  push32((uint32_t)(0x4u));
  /* 102163ae jmp 0x102163b4 */
  goto L_102163b4;
L_102163b0:;
  /* 102163b0 push 6 */
  push32((uint32_t)(0x6u));
  /* 102163b2 push 6 */
  push32((uint32_t)(0x6u));
L_102163b4:;
  /* 102163b4 push 9 */
  push32((uint32_t)(0x9u));
  /* 102163b6 call dword ptr [0x102264f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264f4))), 0x102163bcu);
  /* 102163bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102163bf:;
  /* 102163bf push 0x10226000 */
  push32((uint32_t)(0x10226000u));
  /* 102163c4 call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x102163cau);
  /* 102163ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102163cd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102163cf jne 0x10216438 */
  if (!C.zf) goto L_10216438;
  /* 102163d1 mov eax, dword ptr [0x1022649c] */
  EAX = (r32((uint32_t)(0x1022649c)));
  /* 102163d6 mov cl, byte ptr [0x10226294] */
  CL = (r8((uint32_t)(0x10226294)));
  /* 102163dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102163de mov byte ptr [esp + 8], cl */
  w8((uint32_t)(ESP + 0x8), (CL));
  /* 102163e2 je 0x102163f9 */
  if (C.zf) goto L_102163f9;
  /* 102163e4 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 102163e8 push 3 */
  push32((uint32_t)(0x3u));
  /* 102163ea push 0x10226000 */
  push32((uint32_t)(0x10226000u));
  /* 102163ef push edx */
  push32((uint32_t)(EDX));
  /* 102163f0 call eax */
  call_ind((uint32_t)(EAX), 0x102163f2u);
  /* 102163f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102163f5 mov esi, eax */
  ESI = (EAX);
  /* 102163f7 jmp 0x102163fb */
  goto L_102163fb;
L_102163f9:;
  /* 102163f9 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_102163fb:;
  /* 102163fb push 3 */
  push32((uint32_t)(0x3u));
  /* 102163fd call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10216403u);
  /* 10216403 mov edi, eax */
  EDI = (EAX);
  /* 10216405 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 10216408 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021640b lea ecx, [esi + eax*2] */
  ECX = ((uint32_t)(ESI + EAX*2));
  /* 1021640e mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10216413 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10216415 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10216418 mov ecx, edx */
  ECX = (EDX);
  /* 1021641a shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 1021641d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021641f cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10216421 jge 0x10216429 */
  if ((C.sf==C.of)) goto L_10216429;
  /* 10216423 push 9 */
  push32((uint32_t)(0x9u));
  /* 10216425 push 2 */
  push32((uint32_t)(0x2u));
  /* 10216427 jmp 0x1021642d */
  goto L_1021642d;
L_10216429:;
  /* 10216429 push 6 */
  push32((uint32_t)(0x6u));
  /* 1021642b push 6 */
  push32((uint32_t)(0x6u));
L_1021642d:;
  /* 1021642d push 9 */
  push32((uint32_t)(0x9u));
  /* 1021642f call dword ptr [0x102264f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264f4))), 0x10216435u);
  /* 10216435 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10216438:;
  /* 10216438 push 0x10226130 */
  push32((uint32_t)(0x10226130u));
  /* 1021643d call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x10216443u);
  /* 10216443 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216446 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10216448 jne 0x102164af */
  if (!C.zf) goto L_102164af;
  /* 1021644a mov eax, dword ptr [0x1022649c] */
  EAX = (r32((uint32_t)(0x1022649c)));
  /* 1021644f mov dl, byte ptr [0x10226294] */
  DL = (r8((uint32_t)(0x10226294)));
  /* 10216455 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10216457 mov byte ptr [esp + 8], dl */
  w8((uint32_t)(ESP + 0x8), (DL));
  /* 1021645b je 0x10216472 */
  if (C.zf) goto L_10216472;
  /* 1021645d mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10216461 push 3 */
  push32((uint32_t)(0x3u));
  /* 10216463 push 0x10226130 */
  push32((uint32_t)(0x10226130u));
  /* 10216468 push ecx */
  push32((uint32_t)(ECX));
  /* 10216469 call eax */
  call_ind((uint32_t)(EAX), 0x1021646bu);
  /* 1021646b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021646e mov esi, eax */
  ESI = (EAX);
  /* 10216470 jmp 0x10216474 */
  goto L_10216474;
L_10216472:;
  /* 10216472 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10216474:;
  /* 10216474 push 3 */
  push32((uint32_t)(0x3u));
  /* 10216476 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x1021647cu);
  /* 1021647c lea edx, [esi + esi*2] */
  EDX = ((uint32_t)(ESI + ESI*2));
  /* 1021647f mov edi, eax */
  EDI = (EAX);
  /* 10216481 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10216486 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216489 lea ecx, [esi + edx*4] */
  ECX = ((uint32_t)(ESI + EDX*4));
  /* 1021648c imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1021648e sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10216491 mov eax, edx */
  EAX = (EDX);
  /* 10216493 push 1 */
  push32((uint32_t)(0x1u));
  /* 10216495 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 10216498 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021649a push 9 */
  push32((uint32_t)(0x9u));
  /* 1021649c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021649e jge 0x102164a4 */
  if ((C.sf==C.of)) goto L_102164a4;
  /* 102164a0 push 9 */
  push32((uint32_t)(0x9u));
  /* 102164a2 jmp 0x102164a6 */
  goto L_102164a6;
L_102164a4:;
  /* 102164a4 push 6 */
  push32((uint32_t)(0x6u));
L_102164a6:;
  /* 102164a6 call dword ptr [0x102264f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264f4))), 0x102164acu);
  /* 102164ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102164af:;
  /* 102164af push 0x10226320 */
  push32((uint32_t)(0x10226320u));
  /* 102164b4 call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x102164bau);
  /* 102164ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102164bd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102164bf je 0x102164d3 */
  if (C.zf) goto L_102164d3;
  /* 102164c1 push 0x10226268 */
  push32((uint32_t)(0x10226268u));
  /* 102164c6 call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x102164ccu);
  /* 102164cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102164cf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102164d1 jne 0x102164f4 */
  if (!C.zf) goto L_102164f4;
L_102164d3:;
  /* 102164d3 push 3 */
  push32((uint32_t)(0x3u));
  /* 102164d5 call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x102164dbu);
  /* 102164db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102164de cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102164e3 jge 0x102164f4 */
  if ((C.sf==C.of)) goto L_102164f4;
  /* 102164e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 102164e7 push 4 */
  push32((uint32_t)(0x4u));
  /* 102164e9 push 9 */
  push32((uint32_t)(0x9u));
  /* 102164eb call dword ptr [0x102264f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264f4))), 0x102164f1u);
  /* 102164f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102164f4:;
  /* 102164f4 push 0x10225fc8 */
  push32((uint32_t)(0x10225fc8u));
  /* 102164f9 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x102164ffu);
  /* 102164ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216502 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10216504 jne 0x10216577 */
  if (!C.zf) goto L_10216577;
  /* 10216506 call 0x10212780 */
  push32(0x1021650bu); f_10212780();
  /* 1021650b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021650e jge 0x10216577 */
  if ((C.sf==C.of)) goto L_10216577;
  /* 10216510 mov eax, dword ptr [0x10226498] */
  EAX = (r32((uint32_t)(0x10226498)));
  /* 10216515 mov cl, byte ptr [0x10226294] */
  CL = (r8((uint32_t)(0x10226294)));
  /* 1021651b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021651d mov byte ptr [esp + 8], cl */
  w8((uint32_t)(ESP + 0x8), (CL));
  /* 10216521 je 0x10216538 */
  if (C.zf) goto L_10216538;
  /* 10216523 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10216527 push 2 */
  push32((uint32_t)(0x2u));
  /* 10216529 push 0x10225fc8 */
  push32((uint32_t)(0x10225fc8u));
  /* 1021652e push edx */
  push32((uint32_t)(EDX));
  /* 1021652f call eax */
  call_ind((uint32_t)(EAX), 0x10216531u);
  /* 10216531 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216534 mov esi, eax */
  ESI = (EAX);
  /* 10216536 jmp 0x1021653a */
  goto L_1021653a;
L_10216538:;
  /* 10216538 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1021653a:;
  /* 1021653a push 2 */
  push32((uint32_t)(0x2u));
  /* 1021653c call dword ptr [0x1022651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022651c))), 0x10216542u);
  /* 10216542 mov edi, eax */
  EDI = (EAX);
  /* 10216544 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 10216547 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021654a lea ecx, [esi + eax*2] */
  ECX = ((uint32_t)(ESI + EAX*2));
  /* 1021654d mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10216552 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10216554 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10216557 mov ecx, edx */
  ECX = (EDX);
  /* 10216559 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 1021655c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021655e cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10216560 jge 0x10216568 */
  if ((C.sf==C.of)) goto L_10216568;
  /* 10216562 push 3 */
  push32((uint32_t)(0x3u));
  /* 10216564 push 5 */
  push32((uint32_t)(0x5u));
  /* 10216566 jmp 0x1021656c */
  goto L_1021656c;
L_10216568:;
  /* 10216568 push 1 */
  push32((uint32_t)(0x1u));
  /* 1021656a push 7 */
  push32((uint32_t)(0x7u));
L_1021656c:;
  /* 1021656c push 9 */
  push32((uint32_t)(0x9u));
  /* 1021656e call dword ptr [0x102264f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264f4))), 0x10216574u);
  /* 10216574 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10216577:;
  /* 10216577 push 0x10226250 */
  push32((uint32_t)(0x10226250u));
  /* 1021657c call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x10216582u);
  /* 10216582 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216585 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10216587 pop edi */
  EDI = (pop32());
  /* 10216588 pop esi */
  ESI = (pop32());
  /* 10216589 jne 0x1021659a */
  if (!C.zf) goto L_1021659a;
  /* 1021658b push 1 */
  push32((uint32_t)(0x1u));
  /* 1021658d push 1 */
  push32((uint32_t)(0x1u));
  /* 1021658f push 9 */
  push32((uint32_t)(0x9u));
  /* 10216591 call dword ptr [0x102264f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264f4))), 0x10216597u);
  /* 10216597 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1021659a:;
  /* 1021659a push 0x10226058 */
  push32((uint32_t)(0x10226058u));
  /* 1021659f call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x102165a5u);
  /* 102165a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102165a8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102165aa je 0x102165be */
  if (C.zf) goto L_102165be;
  /* 102165ac push 0x10223640 */
  push32((uint32_t)(0x10223640u));
  /* 102165b1 call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x102165b7u);
  /* 102165b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102165ba test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102165bc jne 0x102165cd */
  if (!C.zf) goto L_102165cd;
L_102165be:;
  /* 102165be push 1 */
  push32((uint32_t)(0x1u));
  /* 102165c0 push 4 */
  push32((uint32_t)(0x4u));
  /* 102165c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 102165c4 call dword ptr [0x102264f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264f4))), 0x102165cau);
  /* 102165ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102165cd:;
  /* 102165cd push 0x10225f00 */
  push32((uint32_t)(0x10225f00u));
  /* 102165d2 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x102165d8u);
  /* 102165d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102165db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102165dd jne 0x102165ee */
  if (!C.zf) goto L_102165ee;
  /* 102165df push 4 */
  push32((uint32_t)(0x4u));
  /* 102165e1 push 4 */
  push32((uint32_t)(0x4u));
  /* 102165e3 push 6 */
  push32((uint32_t)(0x6u));
  /* 102165e5 call dword ptr [0x102264f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264f4))), 0x102165ebu);
  /* 102165eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102165ee:;
  /* 102165ee push 0x10226358 */
  push32((uint32_t)(0x10226358u));
  /* 102165f3 call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x102165f9u);
  /* 102165f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102165fc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102165fe jne 0x10216620 */
  if (!C.zf) goto L_10216620;
  /* 10216600 push 1 */
  push32((uint32_t)(0x1u));
  /* 10216602 push 1 */
  push32((uint32_t)(0x1u));
  /* 10216604 push 9 */
  push32((uint32_t)(0x9u));
  /* 10216606 call dword ptr [0x102264f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264f4))), 0x1021660cu);
  /* 1021660c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021660f pop ecx */
  ECX = (pop32());
  /* 10216610 ret  */
  ESPCHK(0x102162f0u, _esp0);
  ESP += 4; return;
L_10216611:;
  /* 10216611 push 3 */
  push32((uint32_t)(0x3u));
  /* 10216613 push 6 */
  push32((uint32_t)(0x6u));
  /* 10216615 push 0 */
  push32((uint32_t)(0x0u));
  /* 10216617 call dword ptr [0x102264f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264f4))), 0x1021661du);
  /* 1021661d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10216620:;
  /* 10216620 pop ecx */
  ECX = (pop32());
  /* 10216621 ret  */
  ESPCHK(0x102162f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006630 @ 0x10216630 (174 bytes, 50 insns) */
void f_10216630(void) {
  FTRACE(0x10216630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10216630 push 0x10226578 */
  push32((uint32_t)(0x10226578u));
  /* 10216635 call 0x10212720 */
  push32(0x1021663au); f_10212720();
  /* 1021663a push 0x10226320 */
  push32((uint32_t)(0x10226320u));
  /* 1021663f call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x10216645u);
  /* 10216645 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216648 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1021664a je 0x1021666c */
  if (C.zf) goto L_1021666c;
  /* 1021664c push 0x10226268 */
  push32((uint32_t)(0x10226268u));
  /* 10216651 call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x10216657u);
  /* 10216657 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021665a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1021665c je 0x1021666c */
  if (C.zf) goto L_1021666c;
  /* 1021665e push 0x1021f16c */
  push32((uint32_t)(0x1021f16cu));
  /* 10216663 call 0x10212720 */
  push32(0x10216668u); f_10212720();
  /* 10216668 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021666b ret  */
  ESPCHK(0x10216630u, _esp0);
  ESP += 4; return;
L_1021666c:;
  /* 1021666c mov eax, dword ptr [0x10225f38] */
  EAX = (r32((uint32_t)(0x10225f38)));
  /* 10216671 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10216674 je 0x102166d2 */
  if (C.zf) goto L_102166d2;
  /* 10216676 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10216679 je 0x102166d2 */
  if (C.zf) goto L_102166d2;
  /* 1021667b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021667e je 0x102166d2 */
  if (C.zf) goto L_102166d2;
  /* 10216680 push 0x10226250 */
  push32((uint32_t)(0x10226250u));
  /* 10216685 call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x1021668bu);
  /* 1021668b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021668e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10216690 je 0x102166b2 */
  if (C.zf) goto L_102166b2;
  /* 10216692 push 0x10226130 */
  push32((uint32_t)(0x10226130u));
  /* 10216697 call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x1021669du);
  /* 1021669d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102166a0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102166a2 jne 0x102166b2 */
  if (!C.zf) goto L_102166b2;
  /* 102166a4 push 0x10226578 */
  push32((uint32_t)(0x10226578u));
  /* 102166a9 call 0x10212720 */
  push32(0x102166aeu); f_10212720();
  /* 102166ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102166b1 ret  */
  ESPCHK(0x10216630u, _esp0);
  ESP += 4; return;
L_102166b2:;
  /* 102166b2 push 0x10226130 */
  push32((uint32_t)(0x10226130u));
  /* 102166b7 call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x102166bdu);
  /* 102166bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102166c0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102166c2 je 0x102166dd */
  if (C.zf) goto L_102166dd;
  /* 102166c4 push 0x1021f1d8 */
  push32((uint32_t)(0x1021f1d8u));
  /* 102166c9 call 0x10212720 */
  push32(0x102166ceu); f_10212720();
  /* 102166ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102166d1 ret  */
  ESPCHK(0x10216630u, _esp0);
  ESP += 4; return;
L_102166d2:;
  /* 102166d2 push 0x1021f1d8 */
  push32((uint32_t)(0x1021f1d8u));
  /* 102166d7 call 0x10212720 */
  push32(0x102166dcu); f_10212720();
  /* 102166dc pop ecx */
  ECX = (pop32());
L_102166dd:;
  /* 102166dd ret  */
  ESPCHK(0x10216630u, _esp0);
  ESP += 4; return;
}

/* FUN_100066e0 @ 0x102166e0 (70 bytes, 22 insns) */
void f_102166e0(void) {
  FTRACE(0x102166e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102166e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 102166e2 call 0x10212760 */
  push32(0x102166e7u); f_10212760();
  /* 102166e7 push 0x10223668 */
  push32((uint32_t)(0x10223668u));
  /* 102166ec call 0x10215270 */
  push32(0x102166f1u); f_10215270();
  /* 102166f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102166f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102166f6 je 0x10216702 */
  if (C.zf) goto L_10216702;
  /* 102166f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 102166fa call 0x10212760 */
  push32(0x102166ffu); f_10212760();
  /* 102166ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10216702:;
  /* 10216702 call 0x10212770 */
  push32(0x10216707u); f_10212770();
  /* 10216707 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10216709 jg 0x1021671d */
  if ((!C.zf&&C.sf==C.of)) goto L_1021671d;
  /* 1021670b push 0x102238b8 */
  push32((uint32_t)(0x102238b8u));
  /* 10216710 call dword ptr [0x10226524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226524))), 0x10216716u);
  /* 10216716 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216719 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021671b jle 0x10216725 */
  if ((C.zf||C.sf!=C.of)) goto L_10216725;
L_1021671d:;
  /* 1021671d push 0 */
  push32((uint32_t)(0x0u));
  /* 1021671f call 0x10212760 */
  push32(0x10216724u); f_10212760();
  /* 10216724 pop ecx */
  ECX = (pop32());
L_10216725:;
  /* 10216725 ret  */
  ESPCHK(0x102166e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006730 @ 0x10216730 (235 bytes, 66 insns) */
void f_10216730(void) {
  FTRACE(0x10216730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10216730 push 0x10226178 */
  push32((uint32_t)(0x10226178u));
  /* 10216735 call dword ptr [0x1022652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022652c))), 0x1021673bu);
  /* 1021673b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021673e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10216740 je 0x10216756 */
  if (C.zf) goto L_10216756;
  /* 10216742 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10216744 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10216746 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10216748 push 0x10226350 */
  push32((uint32_t)(0x10226350u));
  /* 1021674d call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10216753u);
  /* 10216753 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10216756:;
  /* 10216756 push 0x10226090 */
  push32((uint32_t)(0x10226090u));
  /* 1021675b call dword ptr [0x1022652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022652c))), 0x10216761u);
  /* 10216761 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216764 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10216766 je 0x1021677c */
  if (C.zf) goto L_1021677c;
  /* 10216768 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1021676a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1021676c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1021676e push 0x10223648 */
  push32((uint32_t)(0x10223648u));
  /* 10216773 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10216779u);
  /* 10216779 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1021677c:;
  /* 1021677c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1021677e push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10216780 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10216782 push 0x102238a8 */
  push32((uint32_t)(0x102238a8u));
  /* 10216787 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x1021678du);
  /* 1021678d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1021678f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10216791 push 0x102261b8 */
  push32((uint32_t)(0x102261b8u));
  /* 10216796 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021679cu);
  /* 1021679c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1021679e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 102167a0 push 0x102261b0 */
  push32((uint32_t)(0x102261b0u));
  /* 102167a5 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102167abu);
  /* 102167ab push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102167ad push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 102167af push 0x10226180 */
  push32((uint32_t)(0x10226180u));
  /* 102167b4 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102167bau);
  /* 102167ba push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102167bc push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 102167be push 0x10226178 */
  push32((uint32_t)(0x10226178u));
  /* 102167c3 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102167c9u);
  /* 102167c9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102167cc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102167ce push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 102167d0 push 0x10226188 */
  push32((uint32_t)(0x10226188u));
  /* 102167d5 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102167dbu);
  /* 102167db push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102167dd push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 102167df push 0x10226078 */
  push32((uint32_t)(0x10226078u));
  /* 102167e4 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102167eau);
  /* 102167ea push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102167ec push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 102167ee push 0x10226080 */
  push32((uint32_t)(0x10226080u));
  /* 102167f3 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102167f9u);
  /* 102167f9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102167fb push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 102167fd push 0x10226088 */
  push32((uint32_t)(0x10226088u));
  /* 10216802 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10216808u);
  /* 10216808 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1021680a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1021680c push 0x10226090 */
  push32((uint32_t)(0x10226090u));
  /* 10216811 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x10216817u);
  /* 10216817 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021681a ret  */
  ESPCHK(0x10216730u, _esp0);
  ESP += 4; return;
}

/* FUN_10006820 @ 0x10216820 (303 bytes, 90 insns) */
void f_10216820(void) {
  FTRACE(0x10216820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10216820 push ecx */
  push32((uint32_t)(ECX));
  /* 10216821 push ebx */
  push32((uint32_t)(EBX));
  /* 10216822 push ebp */
  push32((uint32_t)(EBP));
  /* 10216823 push esi */
  push32((uint32_t)(ESI));
  /* 10216824 push edi */
  push32((uint32_t)(EDI));
  /* 10216825 push 0x102238b8 */
  push32((uint32_t)(0x102238b8u));
  /* 1021682a call dword ptr [0x10226524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226524))), 0x10216830u);
  /* 10216830 push 0x10226230 */
  push32((uint32_t)(0x10226230u));
  /* 10216835 mov ebx, eax */
  EBX = (EAX);
  /* 10216837 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x1021683du);
  /* 1021683d push 0x10226230 */
  push32((uint32_t)(0x10226230u));
  /* 10216842 mov edi, eax */
  EDI = (EAX);
  /* 10216844 call dword ptr [0x10226524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226524))), 0x1021684au);
  /* 1021684a push 0x10225f00 */
  push32((uint32_t)(0x10225f00u));
  /* 1021684f mov ebp, eax */
  EBP = (EAX);
  /* 10216851 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10216857u);
  /* 10216857 push 0x10225f00 */
  push32((uint32_t)(0x10225f00u));
  /* 1021685c mov esi, eax */
  ESI = (EAX);
  /* 1021685e call dword ptr [0x10226524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226524))), 0x10216864u);
  /* 10216864 push 0x102238b8 */
  push32((uint32_t)(0x102238b8u));
  /* 10216869 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 1021686d call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10216873u);
  /* 10216873 mov edx, dword ptr [esp + 0x28] */
  EDX = (r32((uint32_t)(ESP + 0x28)));
  /* 10216877 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021687a sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021687c add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1021687e sub esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10216880 sub esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10216882 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10216884 pop edi */
  EDI = (pop32());
  /* 10216885 pop esi */
  ESI = (pop32());
  /* 10216886 pop ebp */
  EBP = (pop32());
  /* 10216887 pop ebx */
  EBX = (pop32());
  /* 10216888 jne 0x102168f0 */
  if (!C.zf) goto L_102168f0;
  /* 1021688a cmp dword ptr [0x10226190], 0x28 */
  { uint32_t _a=(r32((uint32_t)(0x10226190))),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10216891 jle 0x102168f0 */
  if ((C.zf||C.sf!=C.of)) goto L_102168f0;
  /* 10216893 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10216895 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10216897 push 4 */
  push32((uint32_t)(0x4u));
  /* 10216899 push 0x102238b8 */
  push32((uint32_t)(0x102238b8u));
  /* 1021689e call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x102168a4u);
  /* 102168a4 push 0x10226198 */
  push32((uint32_t)(0x10226198u));
  /* 102168a9 call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x102168afu);
  /* 102168af add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102168b2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102168b4 je 0x102168ca */
  if (C.zf) goto L_102168ca;
  /* 102168b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102168b8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102168ba push 6 */
  push32((uint32_t)(0x6u));
  /* 102168bc push 0x102238b8 */
  push32((uint32_t)(0x102238b8u));
  /* 102168c1 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x102168c7u);
  /* 102168c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102168ca:;
  /* 102168ca push 0x10226000 */
  push32((uint32_t)(0x10226000u));
  /* 102168cf call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x102168d5u);
  /* 102168d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102168d8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102168da je 0x102168f0 */
  if (C.zf) goto L_102168f0;
  /* 102168dc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102168de push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102168e0 push 8 */
  push32((uint32_t)(0x8u));
  /* 102168e2 push 0x102238b8 */
  push32((uint32_t)(0x102238b8u));
  /* 102168e7 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x102168edu);
  /* 102168ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102168f0:;
  /* 102168f0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102168f2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102168f4 push 0x102262c8 */
  push32((uint32_t)(0x102262c8u));
  /* 102168f9 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x102168ffu);
  /* 102168ff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10216901 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10216903 push 0x102262b0 */
  push32((uint32_t)(0x102262b0u));
  /* 10216908 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021690eu);
  /* 1021690e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10216910 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10216912 push 0x102262c0 */
  push32((uint32_t)(0x102262c0u));
  /* 10216917 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021691du);
  /* 1021691d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1021691f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10216921 push 0x102262a0 */
  push32((uint32_t)(0x102262a0u));
  /* 10216926 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021692cu);
  /* 1021692c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1021692e push 0xf */
  push32((uint32_t)(0xfu));
  /* 10216930 push 0x102262a8 */
  push32((uint32_t)(0x102262a8u));
  /* 10216935 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021693bu);
  /* 1021693b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1021693d push 0xa */
  push32((uint32_t)(0xau));
  /* 1021693f push 0x10226298 */
  push32((uint32_t)(0x10226298u));
  /* 10216944 call dword ptr [0x102264e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e8))), 0x1021694au);
  /* 1021694a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021694d pop ecx */
  ECX = (pop32());
  /* 1021694e ret  */
  ESPCHK(0x10216820u, _esp0);
  ESP += 4; return;
}

/* FUN_10006950 @ 0x10216950 (517 bytes, 145 insns) */
void f_10216950(void) {
  FTRACE(0x10216950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10216950 push esi */
  push32((uint32_t)(ESI));
  /* 10216951 push 0x10226238 */
  push32((uint32_t)(0x10226238u));
  /* 10216956 call dword ptr [0x10226524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226524))), 0x1021695cu);
  /* 1021695c push 0x10226238 */
  push32((uint32_t)(0x10226238u));
  /* 10216961 mov esi, eax */
  ESI = (EAX);
  /* 10216963 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10216969u);
  /* 10216969 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021696c sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021696e jne 0x10216984 */
  if (!C.zf) goto L_10216984;
  /* 10216970 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10216972 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10216974 push 5 */
  push32((uint32_t)(0x5u));
  /* 10216976 push 0x10226238 */
  push32((uint32_t)(0x10226238u));
  /* 1021697b call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10216981u);
  /* 10216981 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10216984:;
  /* 10216984 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10216986 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10216988 push 1 */
  push32((uint32_t)(0x1u));
  /* 1021698a push 0x10225f98 */
  push32((uint32_t)(0x10225f98u));
  /* 1021698f call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10216995u);
  /* 10216995 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10216997 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10216999 push 1 */
  push32((uint32_t)(0x1u));
  /* 1021699b push 0x102261c8 */
  push32((uint32_t)(0x102261c8u));
  /* 102169a0 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x102169a6u);
  /* 102169a6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102169a8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102169aa push 2 */
  push32((uint32_t)(0x2u));
  /* 102169ac push 0x10226230 */
  push32((uint32_t)(0x10226230u));
  /* 102169b1 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x102169b7u);
  /* 102169b7 push 0x10226230 */
  push32((uint32_t)(0x10226230u));
  /* 102169bc call dword ptr [0x10226524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226524))), 0x102169c2u);
  /* 102169c2 push 0x10226230 */
  push32((uint32_t)(0x10226230u));
  /* 102169c7 mov esi, eax */
  ESI = (EAX);
  /* 102169c9 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x102169cfu);
  /* 102169cf add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102169d2 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102169d4 jne 0x10216b53 */
  if (!C.zf) goto L_10216b53;
  /* 102169da push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102169dc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102169de push 1 */
  push32((uint32_t)(0x1u));
  /* 102169e0 push 0x10225f00 */
  push32((uint32_t)(0x10225f00u));
  /* 102169e5 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x102169ebu);
  /* 102169eb push 0x10225f00 */
  push32((uint32_t)(0x10225f00u));
  /* 102169f0 call dword ptr [0x10226524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226524))), 0x102169f6u);
  /* 102169f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102169f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102169fb je 0x10216b53 */
  if (C.zf) goto L_10216b53;
  /* 10216a01 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10216a03 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10216a05 push 1 */
  push32((uint32_t)(0x1u));
  /* 10216a07 push 0x10225fb0 */
  push32((uint32_t)(0x10225fb0u));
  /* 10216a0c call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10216a12u);
  /* 10216a12 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10216a14 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10216a16 push 1 */
  push32((uint32_t)(0x1u));
  /* 10216a18 push 0x10225fb8 */
  push32((uint32_t)(0x10225fb8u));
  /* 10216a1d call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10216a23u);
  /* 10216a23 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10216a25 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10216a27 push 1 */
  push32((uint32_t)(0x1u));
  /* 10216a29 push 0x10223858 */
  push32((uint32_t)(0x10223858u));
  /* 10216a2e call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10216a34u);
  /* 10216a34 push 0x10223858 */
  push32((uint32_t)(0x10223858u));
  /* 10216a39 call dword ptr [0x10226524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226524))), 0x10216a3fu);
  /* 10216a3f add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216a42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10216a44 je 0x10216b53 */
  if (C.zf) goto L_10216b53;
  /* 10216a4a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10216a4c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10216a4e push 1 */
  push32((uint32_t)(0x1u));
  /* 10216a50 push 0x10225fc8 */
  push32((uint32_t)(0x10225fc8u));
  /* 10216a55 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10216a5bu);
  /* 10216a5b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10216a5d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10216a5f push 1 */
  push32((uint32_t)(0x1u));
  /* 10216a61 push 0x102260d8 */
  push32((uint32_t)(0x102260d8u));
  /* 10216a66 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10216a6cu);
  /* 10216a6c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10216a6e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10216a70 push 1 */
  push32((uint32_t)(0x1u));
  /* 10216a72 push 0x102235f8 */
  push32((uint32_t)(0x102235f8u));
  /* 10216a77 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10216a7du);
  /* 10216a7d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10216a7f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10216a81 push 1 */
  push32((uint32_t)(0x1u));
  /* 10216a83 push 0x102260b8 */
  push32((uint32_t)(0x102260b8u));
  /* 10216a88 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10216a8eu);
  /* 10216a8e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216a91 push 0x10226000 */
  push32((uint32_t)(0x10226000u));
  /* 10216a96 call dword ptr [0x10226530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226530))), 0x10216a9cu);
  /* 10216a9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216a9f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10216aa1 je 0x10216b53 */
  if (C.zf) goto L_10216b53;
  /* 10216aa7 push 0x10225f98 */
  push32((uint32_t)(0x10225f98u));
  /* 10216aac call dword ptr [0x10226524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226524))), 0x10216ab2u);
  /* 10216ab2 push 0x10225f98 */
  push32((uint32_t)(0x10225f98u));
  /* 10216ab7 mov esi, eax */
  ESI = (EAX);
  /* 10216ab9 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10216abfu);
  /* 10216abf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216ac2 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10216ac4 jne 0x10216aed */
  if (!C.zf) goto L_10216aed;
  /* 10216ac6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10216ac8 call 0x10212730 */
  push32(0x10216acdu); f_10212730();
  /* 10216acd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216ad0 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10216ad3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10216ad5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10216ad7 jge 0x10216add */
  if ((C.sf==C.of)) goto L_10216add;
  /* 10216ad9 push 6 */
  push32((uint32_t)(0x6u));
  /* 10216adb jmp 0x10216adf */
  goto L_10216adf;
L_10216add:;
  /* 10216add push 4 */
  push32((uint32_t)(0x4u));
L_10216adf:;
  /* 10216adf push 0x10225f98 */
  push32((uint32_t)(0x10225f98u));
  /* 10216ae4 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10216aeau);
  /* 10216aea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10216aed:;
  /* 10216aed push 0x102260b8 */
  push32((uint32_t)(0x102260b8u));
  /* 10216af2 call dword ptr [0x10226524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226524))), 0x10216af8u);
  /* 10216af8 push 0x102260b8 */
  push32((uint32_t)(0x102260b8u));
  /* 10216afd mov esi, eax */
  ESI = (EAX);
  /* 10216aff call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10216b05u);
  /* 10216b05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216b08 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10216b0a jne 0x10216b20 */
  if (!C.zf) goto L_10216b20;
  /* 10216b0c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10216b0e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10216b10 push 7 */
  push32((uint32_t)(0x7u));
  /* 10216b12 push 0x102260b8 */
  push32((uint32_t)(0x102260b8u));
  /* 10216b17 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10216b1du);
  /* 10216b1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10216b20:;
  /* 10216b20 push 0x102235f8 */
  push32((uint32_t)(0x102235f8u));
  /* 10216b25 call dword ptr [0x10226524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226524))), 0x10216b2bu);
  /* 10216b2b push 0x102235f8 */
  push32((uint32_t)(0x102235f8u));
  /* 10216b30 mov esi, eax */
  ESI = (EAX);
  /* 10216b32 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10216b38u);
  /* 10216b38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216b3b sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10216b3d jne 0x10216b53 */
  if (!C.zf) goto L_10216b53;
  /* 10216b3f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10216b41 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10216b43 push 3 */
  push32((uint32_t)(0x3u));
  /* 10216b45 push 0x102235f8 */
  push32((uint32_t)(0x102235f8u));
  /* 10216b4a call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10216b50u);
  /* 10216b50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10216b53:;
  /* 10216b53 pop esi */
  ESI = (pop32());
  /* 10216b54 ret  */
  ESPCHK(0x10216950u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b60 @ 0x10216b60 (121 bytes, 36 insns) */
void f_10216b60(void) {
  FTRACE(0x10216b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10216b60 push 1 */
  push32((uint32_t)(0x1u));
  /* 10216b62 call 0x10212760 */
  push32(0x10216b67u); f_10212760();
  /* 10216b67 push 0x10223868 */
  push32((uint32_t)(0x10223868u));
  /* 10216b6c call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10216b72u);
  /* 10216b72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216b75 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10216b78 jge 0x10216b8d */
  if ((C.sf==C.of)) goto L_10216b8d;
  /* 10216b7a mov eax, dword ptr [0x10226294] */
  EAX = (r32((uint32_t)(0x10226294)));
  /* 10216b7f push 0 */
  push32((uint32_t)(0x0u));
  /* 10216b81 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10216b84 push eax */
  push32((uint32_t)(EAX));
  /* 10216b85 call 0x102126d0 */
  push32(0x10216b8au); f_102126d0();
  /* 10216b8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10216b8d:;
  /* 10216b8d push 0x10223868 */
  push32((uint32_t)(0x10223868u));
  /* 10216b92 call dword ptr [0x10226520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226520))), 0x10216b98u);
  /* 10216b98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216b9b cmp eax, 0x5f */
  { uint32_t _a=(EAX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10216b9e jle 0x10216bb4 */
  if ((C.zf||C.sf!=C.of)) goto L_10216bb4;
  /* 10216ba0 mov ecx, dword ptr [0x10226294] */
  ECX = (r32((uint32_t)(0x10226294)));
  /* 10216ba6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10216ba8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10216bab push ecx */
  push32((uint32_t)(ECX));
  /* 10216bac call 0x102126d0 */
  push32(0x10216bb1u); f_102126d0();
  /* 10216bb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10216bb4:;
  /* 10216bb4 mov edx, dword ptr [0x10226294] */
  EDX = (r32((uint32_t)(0x10226294)));
  /* 10216bba add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10216bbd push edx */
  push32((uint32_t)(EDX));
  /* 10216bbe call 0x102126f0 */
  push32(0x10216bc3u); f_102126f0();
  /* 10216bc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10216bc5 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10216bc8 push eax */
  push32((uint32_t)(EAX));
  /* 10216bc9 call 0x10212760 */
  push32(0x10216bceu); f_10212760();
  /* 10216bce push 0 */
  push32((uint32_t)(0x0u));
  /* 10216bd0 call 0x10212760 */
  push32(0x10216bd5u); f_10212760();
  /* 10216bd5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216bd8 ret  */
  ESPCHK(0x10216b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006be0 @ 0x10216be0 (86 bytes, 20 insns) */
void f_10216be0(void) {
  FTRACE(0x10216be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10216be0 mov eax, dword ptr [0x10226294] */
  EAX = (r32((uint32_t)(0x10226294)));
  /* 10216be5 mov ecx, dword ptr [eax*4 + 0x10225f78] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10225f78)));
  /* 10216bec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10216bee je 0x10216bf5 */
  if (C.zf) goto L_10216bf5;
  /* 10216bf0 call 0x102166e0 */
  push32(0x10216bf5u); f_102166e0();
L_10216bf5:;
  /* 10216bf5 call 0x10215df0 */
  push32(0x10216bfau); f_10215df0();
  /* 10216bfa call 0x10216730 */
  push32(0x10216bffu); f_10216730();
  /* 10216bff call 0x10212780 */
  push32(0x10216c04u); f_10212780();
  /* 10216c04 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10216c07 jge 0x10216c0e */
  if ((C.sf==C.of)) goto L_10216c0e;
  /* 10216c09 call 0x10216820 */
  push32(0x10216c0eu); f_10216820();
L_10216c0e:;
  /* 10216c0e call 0x10215bd0 */
  push32(0x10216c13u); f_10215bd0();
  /* 10216c13 call 0x10215a90 */
  push32(0x10216c18u); f_10215a90();
  /* 10216c18 call 0x10212780 */
  push32(0x10216c1du); f_10212780();
  /* 10216c1d cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10216c20 jge 0x10216c27 */
  if ((C.sf==C.of)) goto L_10216c27;
  /* 10216c22 call 0x102152b0 */
  push32(0x10216c27u); f_102152b0();
L_10216c27:;
  /* 10216c27 call 0x10215fd0 */
  push32(0x10216c2cu); f_10215fd0();
  /* 10216c2c call 0x102162f0 */
  push32(0x10216c31u); f_102162f0();
  /* 10216c31 jmp 0x10216630 */
  f_10216630(); return;
}

/* FUN_10006c40 @ 0x10216c40 (247 bytes, 70 insns) */
void f_10216c40(void) {
  FTRACE(0x10216c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10216c40 push esi */
  push32((uint32_t)(ESI));
  /* 10216c41 push edi */
  push32((uint32_t)(EDI));
  /* 10216c42 call 0x10216b60 */
  push32(0x10216c47u); f_10216b60();
  /* 10216c47 call 0x10216950 */
  push32(0x10216c4cu); f_10216950();
  /* 10216c4c mov edi, 2 */
  EDI = (0x2u);
L_10216c51:;
  /* 10216c51 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10216c53 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10216c55 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10216c5a push 0x10226170 */
  push32((uint32_t)(0x10226170u));
  /* 10216c5f call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10216c65u);
  /* 10216c65 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10216c67 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10216c69 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10216c6e push 0x10223668 */
  push32((uint32_t)(0x10223668u));
  /* 10216c73 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10216c79u);
  /* 10216c79 mov eax, dword ptr [0x10226294] */
  EAX = (r32((uint32_t)(0x10226294)));
  /* 10216c7e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10216c81 push eax */
  push32((uint32_t)(EAX));
  /* 10216c82 call 0x102126f0 */
  push32(0x10216c87u); f_102126f0();
  /* 10216c87 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216c8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10216c8c jne 0x10216cac */
  if (!C.zf) goto L_10216cac;
  /* 10216c8e mov esi, 0x64 */
  ESI = (0x64u);
L_10216c93:;
  /* 10216c93 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10216c95 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10216c97 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 10216c99 push 0x10223868 */
  push32((uint32_t)(0x10223868u));
  /* 10216c9e call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10216ca4u);
  /* 10216ca4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216ca7 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10216ca8 jne 0x10216c93 */
  if (!C.zf) goto L_10216c93;
  /* 10216caa jmp 0x10216cc0 */
  goto L_10216cc0;
L_10216cac:;
  /* 10216cac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10216cae push 0xa */
  push32((uint32_t)(0xau));
  /* 10216cb0 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10216cb2 push 0x10226140 */
  push32((uint32_t)(0x10226140u));
  /* 10216cb7 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10216cbdu);
  /* 10216cbd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10216cc0:;
  /* 10216cc0 push 0x10226000 */
  push32((uint32_t)(0x10226000u));
  /* 10216cc5 call dword ptr [0x1022652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022652c))), 0x10216ccbu);
  /* 10216ccb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216cce test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10216cd0 jne 0x10216ce9 */
  if (!C.zf) goto L_10216ce9;
  /* 10216cd2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10216cd4 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10216cd6 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10216cdb push 0x10223670 */
  push32((uint32_t)(0x10223670u));
  /* 10216ce0 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10216ce6u);
  /* 10216ce6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10216ce9:;
  /* 10216ce9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10216ceb push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10216ced push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10216cf2 push 0x10223660 */
  push32((uint32_t)(0x10223660u));
  /* 10216cf7 call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10216cfdu);
  /* 10216cfd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10216cff push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10216d01 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10216d06 push 0x10225f60 */
  push32((uint32_t)(0x10225f60u));
  /* 10216d0b call dword ptr [0x102264e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264e4))), 0x10216d11u);
  /* 10216d11 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216d14 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10216d15 jne 0x10216c51 */
  if (!C.zf) goto L_10216c51;
  /* 10216d1b call 0x10216730 */
  push32(0x10216d20u); f_10216730();
  /* 10216d20 call 0x10215fd0 */
  push32(0x10216d25u); f_10215fd0();
  /* 10216d25 call 0x102162f0 */
  push32(0x10216d2au); f_102162f0();
  /* 10216d2a call 0x102152b0 */
  push32(0x10216d2fu); f_102152b0();
  /* 10216d2f call 0x10215a90 */
  push32(0x10216d34u); f_10215a90();
  /* 10216d34 pop edi */
  EDI = (pop32());
  /* 10216d35 pop esi */
  ESI = (pop32());
  /* 10216d36 ret  */
  ESPCHK(0x10216c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d40 @ 0x10216d40 (279 bytes, 62 insns) [1 switch table(s)] */
void f_10216d40(void) {
  FTRACE(0x10216d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10216d40 call 0x10212680 */
  push32(0x10216d45u); f_10212680();
  /* 10216d45 mov dword ptr [0x10225f38], eax */
  w32((uint32_t)(0x10225f38), (EAX));
  /* 10216d4a call 0x10212660 */
  push32(0x10216d4fu); f_10212660();
  /* 10216d4f mov dword ptr [0x10226348], eax */
  w32((uint32_t)(0x10226348), (EAX));
  /* 10216d54 call 0x10212670 */
  push32(0x10216d59u); f_10212670();
  /* 10216d59 mov dword ptr [0x10223878], eax */
  w32((uint32_t)(0x10223878), (EAX));
  /* 10216d5e call 0x10213040 */
  push32(0x10216d63u); f_10213040();
  /* 10216d63 push 0x1021f114 */
  push32((uint32_t)(0x1021f114u));
  /* 10216d68 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10216d6a call dword ptr [0x102264ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264ec))), 0x10216d70u);
  /* 10216d70 call 0x10216630 */
  push32(0x10216d75u); f_10216630();
  /* 10216d75 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10216d77 push 0x1021f244 */
  push32((uint32_t)(0x1021f244u));
  /* 10216d7c call 0x10212700 */
  push32(0x10216d81u); f_10212700();
  /* 10216d81 mov eax, dword ptr [0x10225f38] */
  EAX = (r32((uint32_t)(0x10225f38)));
  /* 10216d86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216d89 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10216d8c ja 0x10216e52 */
  if ((!C.cf&&!C.zf)) goto L_10216e52;
  /* 10216d92 jmp dword ptr [eax*4 + 0x10216e58] */
  switch (EAX) {
    case 0: goto L_10216d99;
    case 1: goto L_10216e15;
    case 2: goto L_10216e1c;
    case 3: goto L_10216e1c;
    case 4: goto L_10216e1c;
    case 5: goto L_10216d99;
    default: x86_unimpl("switch@0x10216d92 out of table"); return;
  }
L_10216d99:;
  /* 10216d99 cmp dword ptr [0x10223878], 3 */
  { uint32_t _a=(r32((uint32_t)(0x10223878))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10216da0 jne 0x10216dd2 */
  if (!C.zf) goto L_10216dd2;
  /* 10216da2 push 0x1021f160 */
  push32((uint32_t)(0x1021f160u));
  /* 10216da7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10216da9 call dword ptr [0x102264ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264ec))), 0x10216dafu);
  /* 10216daf push 0x1021f16c */
  push32((uint32_t)(0x1021f16cu));
  /* 10216db4 call 0x10212720 */
  push32(0x10216db9u); f_10212720();
  /* 10216db9 push 5 */
  push32((uint32_t)(0x5u));
  /* 10216dbb push 0x1021f41c */
  push32((uint32_t)(0x1021f41cu));
  /* 10216dc0 call 0x10212700 */
  push32(0x10216dc5u); f_10212700();
  /* 10216dc5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216dc8 call 0x10216c40 */
  push32(0x10216dcdu); f_10216c40();
  /* 10216dcd jmp 0x10216e52 */
  goto L_10216e52;
L_10216dd2:;
  /* 10216dd2 push 0x1021f114 */
  push32((uint32_t)(0x1021f114u));
  /* 10216dd7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10216dd9 call dword ptr [0x102264ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264ec))), 0x10216ddfu);
  /* 10216ddf push 0x10226578 */
  push32((uint32_t)(0x10226578u));
  /* 10216de4 call 0x10212720 */
  push32(0x10216de9u); f_10212720();
  /* 10216de9 mov eax, dword ptr [0x10223878] */
  EAX = (r32((uint32_t)(0x10223878)));
  /* 10216dee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216df1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10216df3 jne 0x10216dff */
  if (!C.zf) goto L_10216dff;
  /* 10216df5 mov dword ptr [0x1021f248], 4 */
  w32((uint32_t)(0x1021f248), (0x4u));
L_10216dff:;
  /* 10216dff push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10216e01 push 0x1021f244 */
  push32((uint32_t)(0x1021f244u));
  /* 10216e06 call 0x10212700 */
  push32(0x10216e0bu); f_10212700();
  /* 10216e0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216e0e call 0x10216be0 */
  push32(0x10216e13u); f_10216be0();
  /* 10216e13 jmp 0x10216e52 */
  goto L_10216e52;
L_10216e15:;
  /* 10216e15 call 0x102143e0 */
  push32(0x10216e1au); f_102143e0();
  /* 10216e1a jmp 0x10216e52 */
  goto L_10216e52;
L_10216e1c:;
  /* 10216e1c push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10216e21 call dword ptr [0x10226508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226508))), 0x10216e27u);
  /* 10216e27 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10216e2c call dword ptr [0x1022650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022650c))), 0x10216e32u);
  /* 10216e32 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10216e37 call dword ptr [0x10226510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10226510))), 0x10216e3du);
  /* 10216e3d push 0x1021f07c */
  push32((uint32_t)(0x1021f07cu));
  /* 10216e42 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10216e44 call dword ptr [0x102264ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x102264ec))), 0x10216e4au);
  /* 10216e4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216e4d call 0x10213360 */
  push32(0x10216e52u); f_10213360();
L_10216e52:;
  /* 10216e52 jmp 0x102131c0 */
  f_102131c0(); return;
}

/* FUN_10006e70 @ 0x10216e70 (82 bytes, 32 insns) */
void f_10216e70(void) {
  FTRACE(0x10216e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10216e70 push ebp */
  push32((uint32_t)(EBP));
  /* 10216e71 mov ebp, esp */
  EBP = (ESP);
  /* 10216e73 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10216e76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10216e79 push esi */
  push32((uint32_t)(ESI));
  /* 10216e7a mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10216e7d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10216e80 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10216e83 mov dword ptr [ebp - 0x14], 0x42 */
  w32((uint32_t)(EBP + -0x14), (0x42u));
  /* 10216e8a push eax */
  push32((uint32_t)(EAX));
  /* 10216e8b lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10216e8e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10216e91 mov dword ptr [ebp - 0x1c], 0x7fffffff */
  w32((uint32_t)(EBP + -0x1c), (0x7fffffffu));
  /* 10216e98 push eax */
  push32((uint32_t)(EAX));
  /* 10216e99 call 0x102171fc */
  push32(0x10216e9eu); f_102171fc();
  /* 10216e9e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216ea1 dec dword ptr [ebp - 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))-1; w32((uint32_t)(EBP + -0x1c), (_r)); fl_dec(_r,32); }
  /* 10216ea4 mov esi, eax */
  ESI = (EAX);
  /* 10216ea6 js 0x10216eb0 */
  if (C.sf) goto L_10216eb0;
  /* 10216ea8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10216eab and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 10216eae jmp 0x10216ebd */
  goto L_10216ebd;
L_10216eb0:;
  /* 10216eb0 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10216eb3 push eax */
  push32((uint32_t)(EAX));
  /* 10216eb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10216eb6 call 0x102170e4 */
  push32(0x10216ebbu); f_102170e4();
  /* 10216ebb pop ecx */
  ECX = (pop32());
  /* 10216ebc pop ecx */
  ECX = (pop32());
L_10216ebd:;
  /* 10216ebd mov eax, esi */
  EAX = (ESI);
  /* 10216ebf pop esi */
  ESI = (pop32());
  /* 10216ec0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10216ec1 ret  */
  ESPCHK(0x10216e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ec2 @ 0x10216ec2 (23 bytes, 6 insns) */
void f_10216ec2(void) {
  FTRACE(0x10216ec2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10216ec2 call 0x10216eda */
  push32(0x10216ec7u); f_10216eda();
  /* 10216ec7 call 0x10217a56 */
  push32(0x10216eccu); f_10217a56();
  /* 10216ecc mov dword ptr [0x10226640], eax */
  w32((uint32_t)(0x10226640), (EAX));
  /* 10216ed1 call 0x10217a06 */
  push32(0x10216ed6u); f_10217a06();
  /* 10216ed6 fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 10216ed8 ret  */
  ESPCHK(0x10216ec2u, _esp0);
  ESP += 4; return;
}

/* FUN_10006eda @ 0x10216eda (56 bytes, 8 insns) */
void f_10216eda(void) {
  FTRACE(0x10216edau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10216eda mov eax, 0x10217e2f */
  EAX = (0x10217e2fu);
  /* 10216edf mov dword ptr [0x1022067c], 0x10217ad9 */
  w32((uint32_t)(0x1022067c), (0x10217ad9u));
  /* 10216ee9 mov dword ptr [0x10220678], eax */
  w32((uint32_t)(0x10220678), (EAX));
  /* 10216eee mov dword ptr [0x10220680], 0x10217b3f */
  w32((uint32_t)(0x10220680), (0x10217b3fu));
  /* 10216ef8 mov dword ptr [0x10220684], 0x10217a7f */
  w32((uint32_t)(0x10220684), (0x10217a7fu));
  /* 10216f02 mov dword ptr [0x10220688], 0x10217b27 */
  w32((uint32_t)(0x10220688), (0x10217b27u));
  /* 10216f0c mov dword ptr [0x1022068c], eax */
  w32((uint32_t)(0x1022068c), (EAX));
  /* 10216f11 ret  */
  ESPCHK(0x10216edau, _esp0);
  ESP += 4; return;
}

/* __ftol @ 0x10216f14 (39 bytes, 16 insns) */
void f_10216f14(void) {
  FTRACE(0x10216f14u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10216f14 push ebp */
  push32((uint32_t)(EBP));
  /* 10216f15 mov ebp, esp */
  EBP = (ESP);
  /* 10216f17 add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10216f1a wait  */
  /* wait (no observable integer/reg state) */
  /* 10216f1b fnstcw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), C.fcw);
  /* 10216f1e wait  */
  /* wait (no observable integer/reg state) */
  /* 10216f1f mov ax, word ptr [ebp - 2] */
  AX = (r16((uint32_t)(EBP + -0x2)));
  /* 10216f23 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 10216f26 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10216f2a fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 10216f2d fistp qword ptr [ebp - 0xc] */
  { int64_t _q=fpu_to_i64(FPU_ST(0)); w32((uint32_t)(EBP + -0xc),(uint32_t)_q); w32((uint32_t)(EBP + -0xc)+4,(uint32_t)((uint64_t)_q>>32)); }
  (void)fpu_pop();
  /* 10216f30 fldcw word ptr [ebp - 2] */
  C.fcw = r16((uint32_t)(EBP + -0x2));
  /* 10216f33 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10216f36 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10216f39 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10216f3a ret  */
  ESPCHK(0x10216f14u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f3b @ 0x10216f3b (217 bytes, 57 insns) */
void f_10216f3b(void) {
  FTRACE(0x10216f3bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10216f3b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10216f3f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10216f42 jne 0x10216fd0 */
  if (!C.zf) goto L_10216fd0;
  /* 10216f48 call dword ptr [0x1021e014] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e014))), 0x10216f4eu);
  /* 10216f4e push 1 */
  push32((uint32_t)(0x1u));
  /* 10216f50 mov dword ptr [0x1022665c], eax */
  w32((uint32_t)(0x1022665c), (EAX));
  /* 10216f55 call 0x1021890c */
  push32(0x10216f5au); f_1021890c();
  /* 10216f5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10216f5c pop ecx */
  ECX = (pop32());
  /* 10216f5d je 0x10216f9b */
  if (C.zf) goto L_10216f9b;
  /* 10216f5f mov eax, dword ptr [0x1022665c] */
  EAX = (r32((uint32_t)(0x1022665c)));
  /* 10216f64 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10216f66 mov cl, byte ptr [0x1022665d] */
  CL = (r8((uint32_t)(0x1022665d)));
  /* 10216f6c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10216f71 shr dword ptr [0x1022665c], 0x10 */
  w32((uint32_t)(0x1022665c), (sh_shr((uint32_t)(r32((uint32_t)(0x1022665c))), (0x10u)&0x1f, 32)));
  /* 10216f78 mov dword ptr [0x10226664], eax */
  w32((uint32_t)(0x10226664), (EAX));
  /* 10216f7d mov dword ptr [0x10226668], ecx */
  w32((uint32_t)(0x10226668), (ECX));
  /* 10216f83 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10216f86 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10216f88 mov dword ptr [0x10226660], eax */
  w32((uint32_t)(0x10226660), (EAX));
  /* 10216f8d call 0x10217fc3 */
  push32(0x10216f92u); f_10217fc3();
  /* 10216f92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10216f94 jne 0x10216f9f */
  if (!C.zf) goto L_10216f9f;
  /* 10216f96 call 0x10218969 */
  push32(0x10216f9bu); f_10218969();
L_10216f9b:;
  /* 10216f9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10216f9d jmp 0x10217011 */
  goto L_10217011;
L_10216f9f:;
  /* 10216f9f call dword ptr [0x1021e010] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e010))), 0x10216fa5u);
  /* 10216fa5 mov dword ptr [0x10227d54], eax */
  w32((uint32_t)(0x10227d54), (EAX));
  /* 10216faa call 0x10218665 */
  push32(0x10216fafu); f_10218665();
  /* 10216faf mov dword ptr [0x10226648], eax */
  w32((uint32_t)(0x10226648), (EAX));
  /* 10216fb4 call 0x1021814f */
  push32(0x10216fb9u); f_1021814f();
  /* 10216fb9 call 0x10218418 */
  push32(0x10216fbeu); f_10218418();
  /* 10216fbe call 0x1021835f */
  push32(0x10216fc3u); f_1021835f();
  /* 10216fc3 call 0x10217ea5 */
  push32(0x10216fc8u); f_10217ea5();
  /* 10216fc8 inc dword ptr [0x10226644] */
  { uint32_t _r=(r32((uint32_t)(0x10226644)))+1; w32((uint32_t)(0x10226644), (_r)); fl_inc(_r,32); }
  /* 10216fce jmp 0x1021700e */
  goto L_1021700e;
L_10216fd0:;
  /* 10216fd0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10216fd2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10216fd4 jne 0x10217002 */
  if (!C.zf) goto L_10217002;
  /* 10216fd6 cmp dword ptr [0x10226644], ecx */
  { uint32_t _a=(r32((uint32_t)(0x10226644))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10216fdc jle 0x10216f9b */
  if ((C.zf||C.sf!=C.of)) goto L_10216f9b;
  /* 10216fde dec dword ptr [0x10226644] */
  { uint32_t _r=(r32((uint32_t)(0x10226644)))-1; w32((uint32_t)(0x10226644), (_r)); fl_dec(_r,32); }
  /* 10216fe4 cmp dword ptr [0x10226694], ecx */
  { uint32_t _a=(r32((uint32_t)(0x10226694))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10216fea jne 0x10216ff1 */
  if (!C.zf) goto L_10216ff1;
  /* 10216fec call 0x10217ee3 */
  push32(0x10216ff1u); f_10217ee3();
L_10216ff1:;
  /* 10216ff1 call 0x1021830b */
  push32(0x10216ff6u); f_1021830b();
  /* 10216ff6 call 0x10218017 */
  push32(0x10216ffbu); f_10218017();
  /* 10216ffb call 0x10218969 */
  push32(0x10217000u); f_10218969();
  /* 10217000 jmp 0x1021700e */
  goto L_1021700e;
L_10217002:;
  /* 10217002 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217005 jne 0x1021700e */
  if (!C.zf) goto L_1021700e;
  /* 10217007 push ecx */
  push32((uint32_t)(ECX));
  /* 10217008 call 0x102180af */
  push32(0x1021700du); f_102180af();
  /* 1021700d pop ecx */
  ECX = (pop32());
L_1021700e:;
  /* 1021700e push 1 */
  push32((uint32_t)(0x1u));
  /* 10217010 pop eax */
  EAX = (pop32());
L_10217011:;
  /* 10217011 ret 0xc */
  ESPCHK(0x10216f3bu, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10217014 (157 bytes, 73 insns) */
void f_10217014(void) {
  FTRACE(0x10217014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10217014 push ebp */
  push32((uint32_t)(EBP));
  /* 10217015 mov ebp, esp */
  EBP = (ESP);
  /* 10217017 push ebx */
  push32((uint32_t)(EBX));
  /* 10217018 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021701b push esi */
  push32((uint32_t)(ESI));
  /* 1021701c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1021701f push edi */
  push32((uint32_t)(EDI));
  /* 10217020 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 10217023 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10217025 jne 0x10217030 */
  if (!C.zf) goto L_10217030;
  /* 10217027 cmp dword ptr [0x10226644], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10226644))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021702e jmp 0x10217056 */
  goto L_10217056;
L_10217030:;
  /* 10217030 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217033 je 0x1021703a */
  if (C.zf) goto L_1021703a;
  /* 10217035 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217038 jne 0x1021705c */
  if (!C.zf) goto L_1021705c;
L_1021703a:;
  /* 1021703a mov eax, dword ptr [0x10227d58] */
  EAX = (r32((uint32_t)(0x10227d58)));
  /* 1021703f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10217041 je 0x1021704c */
  if (C.zf) goto L_1021704c;
  /* 10217043 push edi */
  push32((uint32_t)(EDI));
  /* 10217044 push esi */
  push32((uint32_t)(ESI));
  /* 10217045 push ebx */
  push32((uint32_t)(EBX));
  /* 10217046 call eax */
  call_ind((uint32_t)(EAX), 0x10217048u);
  /* 10217048 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021704a je 0x10217058 */
  if (C.zf) goto L_10217058;
L_1021704c:;
  /* 1021704c push edi */
  push32((uint32_t)(EDI));
  /* 1021704d push esi */
  push32((uint32_t)(ESI));
  /* 1021704e push ebx */
  push32((uint32_t)(EBX));
  /* 1021704f call 0x10216f3b */
  push32(0x10217054u); f_10216f3b();
  /* 10217054 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_10217056:;
  /* 10217056 jne 0x1021705c */
  if (!C.zf) goto L_1021705c;
L_10217058:;
  /* 10217058 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021705a jmp 0x102170aa */
  goto L_102170aa;
L_1021705c:;
  /* 1021705c push edi */
  push32((uint32_t)(EDI));
  /* 1021705d push esi */
  push32((uint32_t)(ESI));
  /* 1021705e push ebx */
  push32((uint32_t)(EBX));
  /* 1021705f call 0x102127f0 */
  push32(0x10217064u); f_102127f0();
  /* 10217064 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217067 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1021706a jne 0x10217078 */
  if (!C.zf) goto L_10217078;
  /* 1021706c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021706e jne 0x102170a7 */
  if (!C.zf) goto L_102170a7;
  /* 10217070 push edi */
  push32((uint32_t)(EDI));
  /* 10217071 push eax */
  push32((uint32_t)(EAX));
  /* 10217072 push ebx */
  push32((uint32_t)(EBX));
  /* 10217073 call 0x10216f3b */
  push32(0x10217078u); f_10216f3b();
L_10217078:;
  /* 10217078 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1021707a je 0x10217081 */
  if (C.zf) goto L_10217081;
  /* 1021707c cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021707f jne 0x102170a7 */
  if (!C.zf) goto L_102170a7;
L_10217081:;
  /* 10217081 push edi */
  push32((uint32_t)(EDI));
  /* 10217082 push esi */
  push32((uint32_t)(ESI));
  /* 10217083 push ebx */
  push32((uint32_t)(EBX));
  /* 10217084 call 0x10216f3b */
  push32(0x10217089u); f_10216f3b();
  /* 10217089 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021708b jne 0x10217090 */
  if (!C.zf) goto L_10217090;
  /* 1021708d and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_10217090:;
  /* 10217090 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217094 je 0x102170a7 */
  if (C.zf) goto L_102170a7;
  /* 10217096 mov eax, dword ptr [0x10227d58] */
  EAX = (r32((uint32_t)(0x10227d58)));
  /* 1021709b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021709d je 0x102170a7 */
  if (C.zf) goto L_102170a7;
  /* 1021709f push edi */
  push32((uint32_t)(EDI));
  /* 102170a0 push esi */
  push32((uint32_t)(ESI));
  /* 102170a1 push ebx */
  push32((uint32_t)(EBX));
  /* 102170a2 call eax */
  call_ind((uint32_t)(EAX), 0x102170a4u);
  /* 102170a4 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_102170a7:;
  /* 102170a7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_102170aa:;
  /* 102170aa pop edi */
  EDI = (pop32());
  /* 102170ab pop esi */
  ESI = (pop32());
  /* 102170ac pop ebx */
  EBX = (pop32());
  /* 102170ad pop ebp */
  EBP = (pop32());
  /* 102170ae ret 0xc */
  ESPCHK(0x10217014u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x102170b1 (48 bytes, 15 insns) */
void f_102170b1(void) {
  FTRACE(0x102170b1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102170b1 mov eax, dword ptr [0x10226650] */
  EAX = (r32((uint32_t)(0x10226650)));
  /* 102170b6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102170b9 je 0x102170c8 */
  if (C.zf) goto L_102170c8;
  /* 102170bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102170bd jne 0x102170cd */
  if (!C.zf) goto L_102170cd;
  /* 102170bf cmp dword ptr [0x10226654], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10226654))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102170c6 jne 0x102170cd */
  if (!C.zf) goto L_102170cd;
L_102170c8:;
  /* 102170c8 call 0x10218a11 */
  push32(0x102170cdu); f_10218a11();
L_102170cd:;
  /* 102170cd push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 102170d1 call 0x10218a4a */
  push32(0x102170d6u); f_10218a4a();
  /* 102170d6 push 0xff */
  push32((uint32_t)(0xffu));
  /* 102170db call dword ptr [0x1022066c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022066c))), 0x102170e1u);
  /* 102170e1 pop ecx */
  ECX = (pop32());
  /* 102170e2 pop ecx */
  ECX = (pop32());
  /* 102170e3 ret  */
  ESPCHK(0x102170b1u, _esp0);
  ESP += 4; return;
}

/* FUN_100070e4 @ 0x102170e4 (280 bytes, 106 insns) */
void f_102170e4(void) {
  FTRACE(0x102170e4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102170e4 push ebp */
  push32((uint32_t)(EBP));
  /* 102170e5 mov ebp, esp */
  EBP = (ESP);
  /* 102170e7 push ebx */
  push32((uint32_t)(EBX));
  /* 102170e8 push esi */
  push32((uint32_t)(ESI));
  /* 102170e9 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 102170ec mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 102170ef mov ebx, dword ptr [esi + 0x10] */
  EBX = (r32((uint32_t)(ESI + 0x10)));
  /* 102170f2 test al, 0x82 */
  { uint32_t _r=(AL)&(0x82u); fl_logic(_r,8); }
  /* 102170f4 je 0x102171f0 */
  if (C.zf) goto L_102171f0;
  /* 102170fa test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 102170fc jne 0x102171f0 */
  if (!C.zf) goto L_102171f0;
  /* 10217102 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 10217104 je 0x1021711c */
  if (C.zf) goto L_1021711c;
  /* 10217106 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1021710a test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 1021710c je 0x102171f0 */
  if (C.zf) goto L_102171f0;
  /* 10217112 mov ecx, dword ptr [esi + 8] */
  ECX = (r32((uint32_t)(ESI + 0x8)));
  /* 10217115 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10217117 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 10217119 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_1021711c:;
  /* 1021711c mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1021711f and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10217123 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 10217127 and al, 0xef */
  { uint32_t _r=(AL)&(0xefu); AL = (_r); fl_logic(_r,8); }
  /* 10217129 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1021712b test ax, 0x10c */
  { uint32_t _r=(AX)&(0x10cu); fl_logic(_r,16); }
  /* 1021712f mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 10217132 jne 0x10217156 */
  if (!C.zf) goto L_10217156;
  /* 10217134 cmp esi, 0x10220770 */
  { uint32_t _a=(ESI),_b=(0x10220770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021713a je 0x10217144 */
  if (C.zf) goto L_10217144;
  /* 1021713c cmp esi, 0x10220790 */
  { uint32_t _a=(ESI),_b=(0x10220790u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217142 jne 0x1021714f */
  if (!C.zf) goto L_1021714f;
L_10217144:;
  /* 10217144 push ebx */
  push32((uint32_t)(EBX));
  /* 10217145 call 0x10218ea9 */
  push32(0x1021714au); f_10218ea9();
  /* 1021714a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021714c pop ecx */
  ECX = (pop32());
  /* 1021714d jne 0x10217156 */
  if (!C.zf) goto L_10217156;
L_1021714f:;
  /* 1021714f push esi */
  push32((uint32_t)(ESI));
  /* 10217150 call 0x10218e65 */
  push32(0x10217155u); f_10218e65();
  /* 10217155 pop ecx */
  ECX = (pop32());
L_10217156:;
  /* 10217156 test word ptr [esi + 0xc], 0x108 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0x108u); fl_logic(_r,16); }
  /* 1021715c push edi */
  push32((uint32_t)(EDI));
  /* 1021715d je 0x102171c6 */
  if (C.zf) goto L_102171c6;
  /* 1021715f mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 10217162 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 10217164 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10217166 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 10217169 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1021716b mov ecx, dword ptr [esi + 0x18] */
  ECX = (r32((uint32_t)(ESI + 0x18)));
  /* 1021716e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1021716f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10217171 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 10217174 jle 0x10217186 */
  if ((C.zf||C.sf!=C.of)) goto L_10217186;
  /* 10217176 push edi */
  push32((uint32_t)(EDI));
  /* 10217177 push eax */
  push32((uint32_t)(EAX));
  /* 10217178 push ebx */
  push32((uint32_t)(EBX));
  /* 10217179 call 0x10218c75 */
  push32(0x1021717eu); f_10218c75();
  /* 1021717e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10217181 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10217184 jmp 0x102171bc */
  goto L_102171bc;
L_10217186:;
  /* 10217186 cmp ebx, -1 */
  { uint32_t _a=(EBX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217189 je 0x102171a4 */
  if (C.zf) goto L_102171a4;
  /* 1021718b mov ecx, ebx */
  ECX = (EBX);
  /* 1021718d mov eax, ebx */
  EAX = (EBX);
  /* 1021718f sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10217192 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10217195 mov ecx, dword ptr [ecx*4 + 0x10227c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10227c40)));
  /* 1021719c lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1021719f lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 102171a2 jmp 0x102171a9 */
  goto L_102171a9;
L_102171a4:;
  /* 102171a4 mov eax, 0x10220698 */
  EAX = (0x10220698u);
L_102171a9:;
  /* 102171a9 test byte ptr [eax + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 102171ad je 0x102171bc */
  if (C.zf) goto L_102171bc;
  /* 102171af push 2 */
  push32((uint32_t)(0x2u));
  /* 102171b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 102171b3 push ebx */
  push32((uint32_t)(EBX));
  /* 102171b4 call 0x10218b9d */
  push32(0x102171b9u); f_10218b9d();
  /* 102171b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102171bc:;
  /* 102171bc mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 102171bf mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 102171c2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 102171c4 jmp 0x102171da */
  goto L_102171da;
L_102171c6:;
  /* 102171c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 102171c8 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 102171cb pop edi */
  EDI = (pop32());
  /* 102171cc push edi */
  push32((uint32_t)(EDI));
  /* 102171cd push eax */
  push32((uint32_t)(EAX));
  /* 102171ce push ebx */
  push32((uint32_t)(EBX));
  /* 102171cf call 0x10218c75 */
  push32(0x102171d4u); f_10218c75();
  /* 102171d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102171d7 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_102171da:;
  /* 102171da cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102171dd pop edi */
  EDI = (pop32());
  /* 102171de je 0x102171e6 */
  if (C.zf) goto L_102171e6;
  /* 102171e0 or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 102171e4 jmp 0x102171f5 */
  goto L_102171f5;
L_102171e6:;
  /* 102171e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102171e9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 102171ee jmp 0x102171f8 */
  goto L_102171f8;
L_102171f0:;
  /* 102171f0 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 102171f2 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_102171f5:;
  /* 102171f5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_102171f8:;
  /* 102171f8 pop esi */
  ESI = (pop32());
  /* 102171f9 pop ebx */
  EBX = (pop32());
  /* 102171fa pop ebp */
  EBP = (pop32());
  /* 102171fb ret  */
  ESPCHK(0x102170e4u, _esp0);
  ESP += 4; return;
}

/* FUN_100071fc @ 0x102171fc (1825 bytes, 595 insns) [1 switch table(s)] */
void f_102171fc(void) {
  FTRACE(0x102171fcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102171fc push ebp */
  push32((uint32_t)(EBP));
  /* 102171fd mov ebp, esp */
  EBP = (ESP);
  /* 102171ff sub esp, 0x248 */
  { uint32_t _a=(ESP),_b=(0x248u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10217205 push ebx */
  push32((uint32_t)(EBX));
  /* 10217206 push esi */
  push32((uint32_t)(ESI));
  /* 10217207 push edi */
  push32((uint32_t)(EDI));
  /* 10217208 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1021720b xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1021720d mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1021720f inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10217210 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10217212 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10217215 mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 10217218 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 1021721b je 0x10217915 */
  if (C.zf) goto L_10217915;
  /* 10217221 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10217224 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10217226 jmp 0x10217230 */
  goto L_10217230;
L_10217228:;
  /* 10217228 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1021722b mov esi, dword ptr [ebp - 0x30] */
  ESI = (r32((uint32_t)(EBP + -0x30)));
  /* 1021722e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_10217230:;
  /* 10217230 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217233 jl 0x10217915 */
  if ((C.sf!=C.of)) goto L_10217915;
  /* 10217239 cmp bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021723c jl 0x10217251 */
  if ((C.sf!=C.of)) goto L_10217251;
  /* 1021723e cmp bl, 0x78 */
  { uint32_t _a=(BL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10217241 jg 0x10217251 */
  if ((!C.zf&&C.sf==C.of)) goto L_10217251;
  /* 10217243 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10217246 mov al, byte ptr [eax + 0x1021e0c8] */
  AL = (r8((uint32_t)(EAX + 0x1021e0c8)));
  /* 1021724c and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1021724f jmp 0x10217253 */
  goto L_10217253;
L_10217251:;
  /* 10217251 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10217253:;
  /* 10217253 movsx eax, byte ptr [esi + eax*8 + 0x1021e0e8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI + EAX*8 + 0x1021e0e8))));
  /* 1021725b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1021725e cmp eax, 7 */
  { uint32_t _a=(EAX),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217261 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10217264 ja 0x10217904 */
  if ((!C.cf&&!C.zf)) goto L_10217904;
  /* 1021726a jmp dword ptr [eax*4 + 0x1021791d] */
  switch (EAX) {
    case 0: goto L_1021739b;
    case 1: goto L_10217271;
    case 2: goto L_1021728c;
    case 3: goto L_102172d8;
    case 4: goto L_1021730f;
    case 5: goto L_10217317;
    case 6: goto L_1021734c;
    case 7: goto L_102173df;
    default: x86_unimpl("switch@0x1021726a out of table"); return;
  }
L_10217271:;
  /* 10217271 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 10217275 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10217278 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1021727b mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1021727e mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10217281 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10217284 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10217287 jmp 0x10217904 */
  goto L_10217904;
L_1021728c:;
  /* 1021728c movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1021728f sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10217292 je 0x102172cf */
  if (C.zf) goto L_102172cf;
  /* 10217294 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10217297 je 0x102172c6 */
  if (C.zf) goto L_102172c6;
  /* 10217299 sub eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021729c je 0x102172bd */
  if (C.zf) goto L_102172bd;
  /* 1021729e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1021729f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102172a0 je 0x102172b4 */
  if (C.zf) goto L_102172b4;
  /* 102172a2 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102172a5 jne 0x10217904 */
  if (!C.zf) goto L_10217904;
  /* 102172ab or dword ptr [ebp - 4], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x8u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102172af jmp 0x10217904 */
  goto L_10217904;
L_102172b4:;
  /* 102172b4 or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102172b8 jmp 0x10217904 */
  goto L_10217904;
L_102172bd:;
  /* 102172bd or dword ptr [ebp - 4], 1 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x1u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102172c1 jmp 0x10217904 */
  goto L_10217904;
L_102172c6:;
  /* 102172c6 or byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))|(0x80u); w8((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,8); }
  /* 102172ca jmp 0x10217904 */
  goto L_10217904;
L_102172cf:;
  /* 102172cf or dword ptr [ebp - 4], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x2u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102172d3 jmp 0x10217904 */
  goto L_10217904;
L_102172d8:;
  /* 102172d8 cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102172db jne 0x10217300 */
  if (!C.zf) goto L_10217300;
  /* 102172dd lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 102172e0 push eax */
  push32((uint32_t)(EAX));
  /* 102172e1 call 0x102179db */
  push32(0x102172e6u); f_102179db();
  /* 102172e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102172e8 pop ecx */
  ECX = (pop32());
  /* 102172e9 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 102172ec jge 0x10217904 */
  if ((C.sf==C.of)) goto L_10217904;
  /* 102172f2 or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102172f6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_102172f8:;
  /* 102172f8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 102172fb jmp 0x10217904 */
  goto L_10217904;
L_10217300:;
  /* 10217300 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10217303 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10217306 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10217309 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 1021730d jmp 0x102172f8 */
  goto L_102172f8;
L_1021730f:;
  /* 1021730f mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10217312 jmp 0x10217904 */
  goto L_10217904;
L_10217317:;
  /* 10217317 cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021731a jne 0x1021733a */
  if (!C.zf) goto L_1021733a;
  /* 1021731c lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1021731f push eax */
  push32((uint32_t)(EAX));
  /* 10217320 call 0x102179db */
  push32(0x10217325u); f_102179db();
  /* 10217325 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10217327 pop ecx */
  ECX = (pop32());
  /* 10217328 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1021732b jge 0x10217904 */
  if ((C.sf==C.of)) goto L_10217904;
  /* 10217331 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 10217335 jmp 0x10217904 */
  goto L_10217904;
L_1021733a:;
  /* 1021733a lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 1021733d movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10217340 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 10217344 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10217347 jmp 0x10217904 */
  goto L_10217904;
L_1021734c:;
  /* 1021734c cmp bl, 0x49 */
  { uint32_t _a=(BL),_b=(0x49u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021734f je 0x1021737f */
  if (C.zf) goto L_1021737f;
  /* 10217351 cmp bl, 0x68 */
  { uint32_t _a=(BL),_b=(0x68u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10217354 je 0x10217376 */
  if (C.zf) goto L_10217376;
  /* 10217356 cmp bl, 0x6c */
  { uint32_t _a=(BL),_b=(0x6cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10217359 je 0x1021736d */
  if (C.zf) goto L_1021736d;
  /* 1021735b cmp bl, 0x77 */
  { uint32_t _a=(BL),_b=(0x77u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021735e jne 0x10217904 */
  if (!C.zf) goto L_10217904;
  /* 10217364 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10217368 jmp 0x10217904 */
  goto L_10217904;
L_1021736d:;
  /* 1021736d or dword ptr [ebp - 4], 0x10 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x10u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10217371 jmp 0x10217904 */
  goto L_10217904;
L_10217376:;
  /* 10217376 or dword ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x20u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1021737a jmp 0x10217904 */
  goto L_10217904;
L_1021737f:;
  /* 1021737f cmp byte ptr [edi], 0x36 */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10217382 jne 0x10217398 */
  if (!C.zf) goto L_10217398;
  /* 10217384 cmp byte ptr [edi + 1], 0x34 */
  { uint32_t _a=(r8((uint32_t)(EDI + 0x1))),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10217388 jne 0x10217398 */
  if (!C.zf) goto L_10217398;
  /* 1021738a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1021738b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1021738c or byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x80u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10217390 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 10217393 jmp 0x10217904 */
  goto L_10217904;
L_10217398:;
  /* 10217398 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_1021739b:;
  /* 1021739b mov ecx, dword ptr [0x102209d0] */
  ECX = (r32((uint32_t)(0x102209d0)));
  /* 102173a1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 102173a4 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 102173a7 test byte ptr [ecx + eax*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 102173ac je 0x102173c7 */
  if (C.zf) goto L_102173c7;
  /* 102173ae lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 102173b1 push eax */
  push32((uint32_t)(EAX));
  /* 102173b2 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102173b5 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 102173b8 push eax */
  push32((uint32_t)(EAX));
  /* 102173b9 call 0x1021793d */
  push32(0x102173beu); f_1021793d();
  /* 102173be mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 102173c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102173c3 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102173c4 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_102173c7:;
  /* 102173c7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 102173ca push eax */
  push32((uint32_t)(EAX));
  /* 102173cb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102173ce movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 102173d1 push eax */
  push32((uint32_t)(EAX));
  /* 102173d2 call 0x1021793d */
  push32(0x102173d7u); f_1021793d();
  /* 102173d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102173da jmp 0x10217904 */
  goto L_10217904;
L_102173df:;
  /* 102173df movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 102173e2 cmp eax, 0x67 */
  { uint32_t _a=(EAX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102173e5 jg 0x10217607 */
  if ((!C.zf&&C.sf==C.of)) goto L_10217607;
  /* 102173eb cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102173ee jge 0x1021748a */
  if ((C.sf==C.of)) goto L_1021748a;
  /* 102173f4 cmp eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102173f7 jg 0x102174e8 */
  if ((!C.zf&&C.sf==C.of)) goto L_102174e8;
  /* 102173fd je 0x1021767b */
  if (C.zf) goto L_1021767b;
  /* 10217403 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10217406 je 0x102174ab */
  if (C.zf) goto L_102174ab;
  /* 1021740c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1021740d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1021740e je 0x10217480 */
  if (C.zf) goto L_10217480;
  /* 10217410 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10217411 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10217412 je 0x10217480 */
  if (C.zf) goto L_10217480;
  /* 10217414 sub eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10217417 jne 0x10217806 */
  if (!C.zf) goto L_10217806;
  /* 1021741d test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 10217423 jne 0x10217429 */
  if (!C.zf) goto L_10217429;
  /* 10217425 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_10217429:;
  /* 10217429 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 1021742c cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021742f jne 0x10217436 */
  if (!C.zf) goto L_10217436;
  /* 10217431 mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
L_10217436:;
  /* 10217436 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10217439 push eax */
  push32((uint32_t)(EAX));
  /* 1021743a call 0x102179db */
  push32(0x1021743fu); f_102179db();
  /* 1021743f test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 10217445 pop ecx */
  ECX = (pop32());
  /* 10217446 mov ecx, eax */
  ECX = (EAX);
  /* 10217448 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1021744b je 0x1021764f */
  if (C.zf) goto L_1021764f;
  /* 10217451 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10217453 jne 0x1021745e */
  if (!C.zf) goto L_1021745e;
  /* 10217455 mov ecx, dword ptr [0x10220674] */
  ECX = (r32((uint32_t)(0x10220674)));
  /* 1021745b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1021745e:;
  /* 1021745e mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10217465 mov eax, ecx */
  EAX = (ECX);
L_10217467:;
  /* 10217467 mov edx, esi */
  EDX = (ESI);
  /* 10217469 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1021746a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1021746c je 0x10217646 */
  if (C.zf) goto L_10217646;
  /* 10217472 cmp word ptr [eax], 0 */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10217476 je 0x10217646 */
  if (C.zf) goto L_10217646;
  /* 1021747c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1021747d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1021747e jmp 0x10217467 */
  goto L_10217467;
L_10217480:;
  /* 10217480 mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 10217487 add bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a+_b; BL = (_r); fl_add(_a,_b,_r,8); }
L_1021748a:;
  /* 1021748a or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1021748e lea edi, [ebp - 0x248] */
  EDI = ((uint32_t)(EBP + -0x248));
  /* 10217494 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217496 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 10217499 jge 0x1021756e */
  if ((C.sf==C.of)) goto L_1021756e;
  /* 1021749f mov dword ptr [ebp - 0x10], 6 */
  w32((uint32_t)(EBP + -0x10), (0x6u));
  /* 102174a6 jmp 0x1021757c */
  goto L_1021757c;
L_102174ab:;
  /* 102174ab test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 102174b1 jne 0x102174b7 */
  if (!C.zf) goto L_102174b7;
  /* 102174b3 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_102174b7:;
  /* 102174b7 test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 102174bd lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 102174c0 push eax */
  push32((uint32_t)(EAX));
  /* 102174c1 je 0x102174fe */
  if (C.zf) goto L_102174fe;
  /* 102174c3 call 0x102179f8 */
  push32(0x102174c8u); f_102179f8();
  /* 102174c8 push eax */
  push32((uint32_t)(EAX));
  /* 102174c9 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 102174cf push eax */
  push32((uint32_t)(EAX));
  /* 102174d0 call 0x102190bb */
  push32(0x102174d5u); f_102190bb();
  /* 102174d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102174d8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 102174db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102174dd jge 0x10217511 */
  if ((C.sf==C.of)) goto L_10217511;
  /* 102174df mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 102174e6 jmp 0x10217511 */
  goto L_10217511;
L_102174e8:;
  /* 102174e8 sub eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102174eb je 0x1021751f */
  if (C.zf) goto L_1021751f;
  /* 102174ed sub eax, 9 */
  { uint32_t _a=(EAX),_b=(0x9u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102174f0 je 0x102174b7 */
  if (C.zf) goto L_102174b7;
  /* 102174f2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102174f3 je 0x102176e1 */
  if (C.zf) goto L_102176e1;
  /* 102174f9 jmp 0x10217806 */
  goto L_10217806;
L_102174fe:;
  /* 102174fe call 0x102179db */
  push32(0x10217503u); f_102179db();
  /* 10217503 pop ecx */
  ECX = (pop32());
  /* 10217504 mov byte ptr [ebp - 0x248], al */
  w8((uint32_t)(EBP + -0x248), (AL));
  /* 1021750a mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10217511:;
  /* 10217511 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 10217517 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1021751a jmp 0x10217806 */
  goto L_10217806;
L_1021751f:;
  /* 1021751f lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10217522 push eax */
  push32((uint32_t)(EAX));
  /* 10217523 call 0x102179db */
  push32(0x10217528u); f_102179db();
  /* 10217528 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021752a pop ecx */
  ECX = (pop32());
  /* 1021752b je 0x10217560 */
  if (C.zf) goto L_10217560;
  /* 1021752d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10217530 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10217532 je 0x10217560 */
  if (C.zf) goto L_10217560;
  /* 10217534 test byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x8u); fl_logic(_r,8); }
  /* 10217538 je 0x10217551 */
  if (C.zf) goto L_10217551;
  /* 1021753a movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 1021753d shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1021753f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10217542 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10217545 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1021754c jmp 0x10217806 */
  goto L_10217806;
L_10217551:;
  /* 10217551 and dword ptr [ebp - 0x24], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x24)))&(0x0u); w32((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,32); }
  /* 10217555 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10217558 movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 1021755b jmp 0x10217803 */
  goto L_10217803;
L_10217560:;
  /* 10217560 mov eax, dword ptr [0x10220670] */
  EAX = (r32((uint32_t)(0x10220670)));
  /* 10217565 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10217568 push eax */
  push32((uint32_t)(EAX));
  /* 10217569 jmp 0x102175fc */
  goto L_102175fc;
L_1021756e:;
  /* 1021756e jne 0x1021757c */
  if (!C.zf) goto L_1021757c;
  /* 10217570 cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10217573 jne 0x1021757c */
  if (!C.zf) goto L_1021757c;
  /* 10217575 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1021757c:;
  /* 1021757c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1021757f push dword ptr [ebp - 0x34] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x34))));
  /* 10217582 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10217585 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10217588 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 1021758b mov ecx, dword ptr [eax - 8] */
  ECX = (r32((uint32_t)(EAX + -0x8)));
  /* 1021758e mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
  /* 10217591 mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 10217594 mov dword ptr [ebp - 0x44], eax */
  w32((uint32_t)(EBP + -0x44), (EAX));
  /* 10217597 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1021759a push eax */
  push32((uint32_t)(EAX));
  /* 1021759b lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 102175a1 push eax */
  push32((uint32_t)(EAX));
  /* 102175a2 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 102175a5 push eax */
  push32((uint32_t)(EAX));
  /* 102175a6 call dword ptr [0x10220678] */
  call_ind((uint32_t)(r32((uint32_t)(0x10220678))), 0x102175acu);
  /* 102175ac mov esi, dword ptr [ebp - 4] */
  ESI = (r32((uint32_t)(EBP + -0x4)));
  /* 102175af add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102175b2 and esi, 0x80 */
  { uint32_t _r=(ESI)&(0x80u); ESI = (_r); fl_logic(_r,32); }
  /* 102175b8 je 0x102175ce */
  if (C.zf) goto L_102175ce;
  /* 102175ba cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102175be jne 0x102175ce */
  if (!C.zf) goto L_102175ce;
  /* 102175c0 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 102175c6 push eax */
  push32((uint32_t)(EAX));
  /* 102175c7 call dword ptr [0x10220684] */
  call_ind((uint32_t)(r32((uint32_t)(0x10220684))), 0x102175cdu);
  /* 102175cd pop ecx */
  ECX = (pop32());
L_102175ce:;
  /* 102175ce cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102175d1 jne 0x102175e5 */
  if (!C.zf) goto L_102175e5;
  /* 102175d3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102175d5 jne 0x102175e5 */
  if (!C.zf) goto L_102175e5;
  /* 102175d7 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 102175dd push eax */
  push32((uint32_t)(EAX));
  /* 102175de call dword ptr [0x1022067c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1022067c))), 0x102175e4u);
  /* 102175e4 pop ecx */
  ECX = (pop32());
L_102175e5:;
  /* 102175e5 cmp byte ptr [ebp - 0x248], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x248))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102175ec jne 0x102175fb */
  if (!C.zf) goto L_102175fb;
  /* 102175ee or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 102175f2 lea edi, [ebp - 0x247] */
  EDI = ((uint32_t)(EBP + -0x247));
  /* 102175f8 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
L_102175fb:;
  /* 102175fb push edi */
  push32((uint32_t)(EDI));
L_102175fc:;
  /* 102175fc call 0x10219040 */
  push32(0x10217601u); f_10219040();
  /* 10217601 pop ecx */
  ECX = (pop32());
  /* 10217602 jmp 0x10217803 */
  goto L_10217803;
L_10217607:;
  /* 10217607 sub eax, 0x69 */
  { uint32_t _a=(EAX),_b=(0x69u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021760a je 0x102176e1 */
  if (C.zf) goto L_102176e1;
  /* 10217610 sub eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10217613 je 0x102176b7 */
  if (C.zf) goto L_102176b7;
  /* 10217619 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1021761a je 0x102176a4 */
  if (C.zf) goto L_102176a4;
  /* 10217620 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10217621 je 0x10217674 */
  if (C.zf) goto L_10217674;
  /* 10217623 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10217626 je 0x10217429 */
  if (C.zf) goto L_10217429;
  /* 1021762c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1021762d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1021762e je 0x102176e5 */
  if (C.zf) goto L_102176e5;
  /* 10217634 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10217637 jne 0x10217806 */
  if (!C.zf) goto L_10217806;
  /* 1021763d mov dword ptr [ebp - 0x2c], 0x27 */
  w32((uint32_t)(EBP + -0x2c), (0x27u));
  /* 10217644 jmp 0x10217682 */
  goto L_10217682;
L_10217646:;
  /* 10217646 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10217648 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1021764a jmp 0x10217803 */
  goto L_10217803;
L_1021764f:;
  /* 1021764f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10217651 jne 0x1021765c */
  if (!C.zf) goto L_1021765c;
  /* 10217653 mov ecx, dword ptr [0x10220670] */
  ECX = (r32((uint32_t)(0x10220670)));
  /* 10217659 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1021765c:;
  /* 1021765c mov eax, ecx */
  EAX = (ECX);
L_1021765e:;
  /* 1021765e mov edx, esi */
  EDX = (ESI);
  /* 10217660 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10217661 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10217663 je 0x1021766d */
  if (C.zf) goto L_1021766d;
  /* 10217665 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10217668 je 0x1021766d */
  if (C.zf) goto L_1021766d;
  /* 1021766a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1021766b jmp 0x1021765e */
  goto L_1021765e;
L_1021766d:;
  /* 1021766d sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021766f jmp 0x10217803 */
  goto L_10217803;
L_10217674:;
  /* 10217674 mov dword ptr [ebp - 0x10], 8 */
  w32((uint32_t)(EBP + -0x10), (0x8u));
L_1021767b:;
  /* 1021767b mov dword ptr [ebp - 0x2c], 7 */
  w32((uint32_t)(EBP + -0x2c), (0x7u));
L_10217682:;
  /* 10217682 test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 10217686 mov dword ptr [ebp - 0xc], 0x10 */
  w32((uint32_t)(EBP + -0xc), (0x10u));
  /* 1021768d je 0x102176ec */
  if (C.zf) goto L_102176ec;
  /* 1021768f mov al, byte ptr [ebp - 0x2c] */
  AL = (r8((uint32_t)(EBP + -0x2c)));
  /* 10217692 mov byte ptr [ebp - 0x16], 0x30 */
  w8((uint32_t)(EBP + -0x16), (0x30u));
  /* 10217696 add al, 0x51 */
  { uint32_t _a=(AL),_b=(0x51u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10217698 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 1021769f mov byte ptr [ebp - 0x15], al */
  w8((uint32_t)(EBP + -0x15), (AL));
  /* 102176a2 jmp 0x102176ec */
  goto L_102176ec;
L_102176a4:;
  /* 102176a4 test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 102176a8 mov dword ptr [ebp - 0xc], 8 */
  w32((uint32_t)(EBP + -0xc), (0x8u));
  /* 102176af je 0x102176ec */
  if (C.zf) goto L_102176ec;
  /* 102176b1 or byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x2u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 102176b5 jmp 0x102176ec */
  goto L_102176ec;
L_102176b7:;
  /* 102176b7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 102176ba push eax */
  push32((uint32_t)(EAX));
  /* 102176bb call 0x102179db */
  push32(0x102176c0u); f_102179db();
  /* 102176c0 test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 102176c4 pop ecx */
  ECX = (pop32());
  /* 102176c5 je 0x102176d0 */
  if (C.zf) goto L_102176d0;
  /* 102176c7 mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 102176cb mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 102176ce jmp 0x102176d5 */
  goto L_102176d5;
L_102176d0:;
  /* 102176d0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 102176d3 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_102176d5:;
  /* 102176d5 mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 102176dc jmp 0x10217904 */
  goto L_10217904;
L_102176e1:;
  /* 102176e1 or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_102176e5:;
  /* 102176e5 mov dword ptr [ebp - 0xc], 0xa */
  w32((uint32_t)(EBP + -0xc), (0xau));
L_102176ec:;
  /* 102176ec test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 102176f0 je 0x102176fe */
  if (C.zf) goto L_102176fe;
  /* 102176f2 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 102176f5 push eax */
  push32((uint32_t)(EAX));
  /* 102176f6 call 0x102179e8 */
  push32(0x102176fbu); f_102179e8();
  /* 102176fb pop ecx */
  ECX = (pop32());
  /* 102176fc jmp 0x1021773f */
  goto L_1021773f;
L_102176fe:;
  /* 102176fe test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 10217702 je 0x10217725 */
  if (C.zf) goto L_10217725;
  /* 10217704 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10217708 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1021770b push eax */
  push32((uint32_t)(EAX));
  /* 1021770c je 0x1021771a */
  if (C.zf) goto L_1021771a;
  /* 1021770e call 0x102179db */
  push32(0x10217713u); f_102179db();
  /* 10217713 pop ecx */
  ECX = (pop32());
  /* 10217714 movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
L_10217717:;
  /* 10217717 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10217718 jmp 0x1021773f */
  goto L_1021773f;
L_1021771a:;
  /* 1021771a call 0x102179db */
  push32(0x1021771fu); f_102179db();
  /* 1021771f pop ecx */
  ECX = (pop32());
  /* 10217720 movzx eax, ax */
  EAX = ((uint32_t)(AX));
  /* 10217723 jmp 0x10217717 */
  goto L_10217717;
L_10217725:;
  /* 10217725 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10217729 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1021772c push eax */
  push32((uint32_t)(EAX));
  /* 1021772d je 0x10217737 */
  if (C.zf) goto L_10217737;
  /* 1021772f call 0x102179db */
  push32(0x10217734u); f_102179db();
  /* 10217734 pop ecx */
  ECX = (pop32());
  /* 10217735 jmp 0x10217717 */
  goto L_10217717;
L_10217737:;
  /* 10217737 call 0x102179db */
  push32(0x1021773cu); f_102179db();
  /* 1021773c pop ecx */
  ECX = (pop32());
  /* 1021773d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_1021773f:;
  /* 1021773f test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10217743 je 0x10217760 */
  if (C.zf) goto L_10217760;
  /* 10217745 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10217747 jg 0x10217760 */
  if ((!C.zf&&C.sf==C.of)) goto L_10217760;
  /* 10217749 jl 0x1021774f */
  if ((C.sf!=C.of)) goto L_1021774f;
  /* 1021774b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021774d jae 0x10217760 */
  if (!C.cf) goto L_10217760;
L_1021774f:;
  /* 1021774f neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10217751 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10217754 mov esi, eax */
  ESI = (EAX);
  /* 10217756 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10217758 or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 1021775c mov edi, edx */
  EDI = (EDX);
  /* 1021775e jmp 0x10217764 */
  goto L_10217764;
L_10217760:;
  /* 10217760 mov esi, eax */
  ESI = (EAX);
  /* 10217762 mov edi, edx */
  EDI = (EDX);
L_10217764:;
  /* 10217764 test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 10217768 jne 0x1021776d */
  if (!C.zf) goto L_1021776d;
  /* 1021776a and edi, 0 */
  { uint32_t _r=(EDI)&(0x0u); EDI = (_r); fl_logic(_r,32); }
L_1021776d:;
  /* 1021776d cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217771 jge 0x1021777c */
  if ((C.sf==C.of)) goto L_1021777c;
  /* 10217773 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1021777a jmp 0x10217780 */
  goto L_10217780;
L_1021777c:;
  /* 1021777c and dword ptr [ebp - 4], 0xfffffff7 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0xfffffff7u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_10217780:;
  /* 10217780 mov eax, esi */
  EAX = (ESI);
  /* 10217782 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 10217784 jne 0x1021778a */
  if (!C.zf) goto L_1021778a;
  /* 10217786 and dword ptr [ebp - 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))&(0x0u); w32((uint32_t)(EBP + -0x1c), (_r)); fl_logic(_r,32); }
L_1021778a:;
  /* 1021778a lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 1021778d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10217790:;
  /* 10217790 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10217793 dec dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))-1; w32((uint32_t)(EBP + -0x10), (_r)); fl_dec(_r,32); }
  /* 10217796 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10217798 jg 0x102177a0 */
  if ((!C.zf&&C.sf==C.of)) goto L_102177a0;
  /* 1021779a mov eax, esi */
  EAX = (ESI);
  /* 1021779c or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 1021779e je 0x102177db */
  if (C.zf) goto L_102177db;
L_102177a0:;
  /* 102177a0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 102177a3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 102177a4 push edx */
  push32((uint32_t)(EDX));
  /* 102177a5 push eax */
  push32((uint32_t)(EAX));
  /* 102177a6 push edi */
  push32((uint32_t)(EDI));
  /* 102177a7 push esi */
  push32((uint32_t)(ESI));
  /* 102177a8 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 102177ab mov dword ptr [ebp - 0x3c], edx */
  w32((uint32_t)(EBP + -0x3c), (EDX));
  /* 102177ae call 0x102191f0 */
  push32(0x102177b3u); f_102191f0();
  /* 102177b3 push dword ptr [ebp - 0x3c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x3c))));
  /* 102177b6 mov ebx, eax */
  EBX = (EAX);
  /* 102177b8 add ebx, 0x30 */
  { uint32_t _a=(EBX),_b=(0x30u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102177bb push dword ptr [ebp - 0x40] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x40))));
  /* 102177be push edi */
  push32((uint32_t)(EDI));
  /* 102177bf push esi */
  push32((uint32_t)(ESI));
  /* 102177c0 call 0x10219180 */
  push32(0x102177c5u); f_10219180();
  /* 102177c5 cmp ebx, 0x39 */
  { uint32_t _a=(EBX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102177c8 mov esi, eax */
  ESI = (EAX);
  /* 102177ca mov edi, edx */
  EDI = (EDX);
  /* 102177cc jle 0x102177d1 */
  if ((C.zf||C.sf!=C.of)) goto L_102177d1;
  /* 102177ce add ebx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
L_102177d1:;
  /* 102177d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 102177d4 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 102177d7 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 102177d9 jmp 0x10217790 */
  goto L_10217790;
L_102177db:;
  /* 102177db lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 102177de sub eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102177e1 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 102177e4 test byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x2u); fl_logic(_r,8); }
  /* 102177e8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 102177eb je 0x10217806 */
  if (C.zf) goto L_10217806;
  /* 102177ed mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 102177f0 cmp byte ptr [ecx], 0x30 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102177f3 jne 0x102177f9 */
  if (!C.zf) goto L_102177f9;
  /* 102177f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102177f7 jne 0x10217806 */
  if (!C.zf) goto L_10217806;
L_102177f9:;
  /* 102177f9 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 102177fc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102177fd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10217800 mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_10217803:;
  /* 10217803 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10217806:;
  /* 10217806 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021780a jne 0x10217904 */
  if (!C.zf) goto L_10217904;
  /* 10217810 mov ebx, dword ptr [ebp - 4] */
  EBX = (r32((uint32_t)(EBP + -0x4)));
  /* 10217813 test bl, 0x40 */
  { uint32_t _r=(BL)&(0x40u); fl_logic(_r,8); }
  /* 10217816 je 0x1021783e */
  if (C.zf) goto L_1021783e;
  /* 10217818 test bh, 1 */
  { uint32_t _r=(C.b.b.h)&(0x1u); fl_logic(_r,8); }
  /* 1021781b je 0x10217823 */
  if (C.zf) goto L_10217823;
  /* 1021781d mov byte ptr [ebp - 0x16], 0x2d */
  w8((uint32_t)(EBP + -0x16), (0x2du));
  /* 10217821 jmp 0x10217837 */
  goto L_10217837;
L_10217823:;
  /* 10217823 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 10217826 je 0x1021782e */
  if (C.zf) goto L_1021782e;
  /* 10217828 mov byte ptr [ebp - 0x16], 0x2b */
  w8((uint32_t)(EBP + -0x16), (0x2bu));
  /* 1021782c jmp 0x10217837 */
  goto L_10217837;
L_1021782e:;
  /* 1021782e test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 10217831 je 0x1021783e */
  if (C.zf) goto L_1021783e;
  /* 10217833 mov byte ptr [ebp - 0x16], 0x20 */
  w8((uint32_t)(EBP + -0x16), (0x20u));
L_10217837:;
  /* 10217837 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
L_1021783e:;
  /* 1021783e mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
  /* 10217841 sub esi, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10217844 sub esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10217847 test bl, 0xc */
  { uint32_t _r=(BL)&(0xcu); fl_logic(_r,8); }
  /* 1021784a jne 0x1021785e */
  if (!C.zf) goto L_1021785e;
  /* 1021784c lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1021784f push eax */
  push32((uint32_t)(EAX));
  /* 10217850 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10217853 push esi */
  push32((uint32_t)(ESI));
  /* 10217854 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10217856 call 0x10217972 */
  push32(0x1021785bu); f_10217972();
  /* 1021785b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1021785e:;
  /* 1021785e lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10217861 push eax */
  push32((uint32_t)(EAX));
  /* 10217862 lea eax, [ebp - 0x16] */
  EAX = ((uint32_t)(EBP + -0x16));
  /* 10217865 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10217868 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 1021786b push eax */
  push32((uint32_t)(EAX));
  /* 1021786c call 0x102179a3 */
  push32(0x10217871u); f_102179a3();
  /* 10217871 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10217874 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 10217877 je 0x10217890 */
  if (C.zf) goto L_10217890;
  /* 10217879 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 1021787c jne 0x10217890 */
  if (!C.zf) goto L_10217890;
  /* 1021787e lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10217881 push eax */
  push32((uint32_t)(EAX));
  /* 10217882 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10217885 push esi */
  push32((uint32_t)(ESI));
  /* 10217886 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10217888 call 0x10217972 */
  push32(0x1021788du); f_10217972();
  /* 1021788d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10217890:;
  /* 10217890 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217894 je 0x102178d7 */
  if (C.zf) goto L_102178d7;
  /* 10217896 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021789a jle 0x102178d7 */
  if ((C.zf||C.sf!=C.of)) goto L_102178d7;
  /* 1021789c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1021789f mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 102178a2 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
L_102178a5:;
  /* 102178a5 mov ax, word ptr [ebx] */
  AX = (r16((uint32_t)(EBX)));
  /* 102178a8 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 102178a9 push eax */
  push32((uint32_t)(EAX));
  /* 102178aa lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 102178ad push eax */
  push32((uint32_t)(EAX));
  /* 102178ae inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 102178af call 0x102190bb */
  push32(0x102178b4u); f_102190bb();
  /* 102178b4 pop ecx */
  ECX = (pop32());
  /* 102178b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102178b7 pop ecx */
  ECX = (pop32());
  /* 102178b8 jle 0x102178ec */
  if ((C.zf||C.sf!=C.of)) goto L_102178ec;
  /* 102178ba lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 102178bd push ecx */
  push32((uint32_t)(ECX));
  /* 102178be push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102178c1 push eax */
  push32((uint32_t)(EAX));
  /* 102178c2 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 102178c5 push eax */
  push32((uint32_t)(EAX));
  /* 102178c6 call 0x102179a3 */
  push32(0x102178cbu); f_102179a3();
  /* 102178cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102178ce mov eax, edi */
  EAX = (EDI);
  /* 102178d0 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 102178d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102178d3 jne 0x102178a5 */
  if (!C.zf) goto L_102178a5;
  /* 102178d5 jmp 0x102178ec */
  goto L_102178ec;
L_102178d7:;
  /* 102178d7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 102178da push eax */
  push32((uint32_t)(EAX));
  /* 102178db push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102178de push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 102178e1 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 102178e4 call 0x102179a3 */
  push32(0x102178e9u); f_102179a3();
  /* 102178e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102178ec:;
  /* 102178ec test byte ptr [ebp - 4], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x4u); fl_logic(_r,8); }
  /* 102178f0 je 0x10217904 */
  if (C.zf) goto L_10217904;
  /* 102178f2 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 102178f5 push eax */
  push32((uint32_t)(EAX));
  /* 102178f6 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102178f9 push esi */
  push32((uint32_t)(ESI));
  /* 102178fa push 0x20 */
  push32((uint32_t)(0x20u));
  /* 102178fc call 0x10217972 */
  push32(0x10217901u); f_10217972();
  /* 10217901 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10217904:;
  /* 10217904 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10217907 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10217909 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1021790a test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 1021790c mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 1021790f jne 0x10217228 */
  if (!C.zf) goto L_10217228;
L_10217915:;
  /* 10217915 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10217918 pop edi */
  EDI = (pop32());
  /* 10217919 pop esi */
  ESI = (pop32());
  /* 1021791a pop ebx */
  EBX = (pop32());
  /* 1021791b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1021791c ret  */
  ESPCHK(0x102171fcu, _esp0);
  ESP += 4; return;
}

/* FUN_1000793d @ 0x1021793d (53 bytes, 25 insns) */
void f_1021793d(void) {
  FTRACE(0x1021793du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021793d push ebp */
  push32((uint32_t)(EBP));
  /* 1021793e mov ebp, esp */
  EBP = (ESP);
  /* 10217940 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10217943 dec dword ptr [ecx + 4] */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))-1; w32((uint32_t)(ECX + 0x4), (_r)); fl_dec(_r,32); }
  /* 10217946 js 0x10217956 */
  if (C.sf) goto L_10217956;
  /* 10217948 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1021794a mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1021794d mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1021794f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10217951 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 10217954 jmp 0x10217961 */
  goto L_10217961;
L_10217956:;
  /* 10217956 push ecx */
  push32((uint32_t)(ECX));
  /* 10217957 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1021795a call 0x102170e4 */
  push32(0x1021795fu); f_102170e4();
  /* 1021795f pop ecx */
  ECX = (pop32());
  /* 10217960 pop ecx */
  ECX = (pop32());
L_10217961:;
  /* 10217961 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217964 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10217967 jne 0x1021796e */
  if (!C.zf) goto L_1021796e;
  /* 10217969 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1021796c pop ebp */
  EBP = (pop32());
  /* 1021796d ret  */
  ESPCHK(0x1021793du, _esp0);
  ESP += 4; return;
L_1021796e:;
  /* 1021796e inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 10217970 pop ebp */
  EBP = (pop32());
  /* 10217971 ret  */
  ESPCHK(0x1021793du, _esp0);
  ESP += 4; return;
}

/* FUN_10007972 @ 0x10217972 (49 bytes, 22 insns) */
void f_10217972(void) {
  FTRACE(0x10217972u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10217972 push esi */
  push32((uint32_t)(ESI));
  /* 10217973 push edi */
  push32((uint32_t)(EDI));
  /* 10217974 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10217978 mov eax, edi */
  EAX = (EDI);
  /* 1021797a dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1021797b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021797d jle 0x102179a0 */
  if ((C.zf||C.sf!=C.of)) goto L_102179a0;
  /* 1021797f mov esi, dword ptr [esp + 0x18] */
  ESI = (r32((uint32_t)(ESP + 0x18)));
L_10217983:;
  /* 10217983 push esi */
  push32((uint32_t)(ESI));
  /* 10217984 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10217988 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 1021798c call 0x1021793d */
  push32(0x10217991u); f_1021793d();
  /* 10217991 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10217994 cmp dword ptr [esi], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217997 je 0x102179a0 */
  if (C.zf) goto L_102179a0;
  /* 10217999 mov eax, edi */
  EAX = (EDI);
  /* 1021799b dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1021799c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021799e jg 0x10217983 */
  if ((!C.zf&&C.sf==C.of)) goto L_10217983;
L_102179a0:;
  /* 102179a0 pop edi */
  EDI = (pop32());
  /* 102179a1 pop esi */
  ESI = (pop32());
  /* 102179a2 ret  */
  ESPCHK(0x10217972u, _esp0);
  ESP += 4; return;
}

/* FUN_100079a3 @ 0x102179a3 (56 bytes, 27 insns) */
void f_102179a3(void) {
  FTRACE(0x102179a3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102179a3 push ebx */
  push32((uint32_t)(EBX));
  /* 102179a4 mov ebx, dword ptr [esp + 0xc] */
  EBX = (r32((uint32_t)(ESP + 0xc)));
  /* 102179a8 mov eax, ebx */
  EAX = (EBX);
  /* 102179aa dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 102179ab push esi */
  push32((uint32_t)(ESI));
  /* 102179ac push edi */
  push32((uint32_t)(EDI));
  /* 102179ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102179af jle 0x102179d7 */
  if ((C.zf||C.sf!=C.of)) goto L_102179d7;
  /* 102179b1 mov edi, dword ptr [esp + 0x1c] */
  EDI = (r32((uint32_t)(ESP + 0x1c)));
  /* 102179b5 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
L_102179b9:;
  /* 102179b9 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 102179bc push edi */
  push32((uint32_t)(EDI));
  /* 102179bd inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102179be push dword ptr [esp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x1c))));
  /* 102179c2 push eax */
  push32((uint32_t)(EAX));
  /* 102179c3 call 0x1021793d */
  push32(0x102179c8u); f_1021793d();
  /* 102179c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102179cb cmp dword ptr [edi], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102179ce je 0x102179d7 */
  if (C.zf) goto L_102179d7;
  /* 102179d0 mov eax, ebx */
  EAX = (EBX);
  /* 102179d2 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 102179d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102179d5 jg 0x102179b9 */
  if ((!C.zf&&C.sf==C.of)) goto L_102179b9;
L_102179d7:;
  /* 102179d7 pop edi */
  EDI = (pop32());
  /* 102179d8 pop esi */
  ESI = (pop32());
  /* 102179d9 pop ebx */
  EBX = (pop32());
  /* 102179da ret  */
  ESPCHK(0x102179a3u, _esp0);
  ESP += 4; return;
}

/* FUN_100079db @ 0x102179db (13 bytes, 5 insns) */
void f_102179db(void) {
  FTRACE(0x102179dbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102179db mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102179df add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 102179e2 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 102179e4 mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 102179e7 ret  */
  ESPCHK(0x102179dbu, _esp0);
  ESP += 4; return;
}

/* FUN_100079e8 @ 0x102179e8 (16 bytes, 6 insns) */
void f_102179e8(void) {
  FTRACE(0x102179e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102179e8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102179ec add dword ptr [eax], 8 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x8u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 102179ef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 102179f1 mov eax, dword ptr [ecx - 8] */
  EAX = (r32((uint32_t)(ECX + -0x8)));
  /* 102179f4 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 102179f7 ret  */
  ESPCHK(0x102179e8u, _esp0);
  ESP += 4; return;
}

/* FUN_100079f8 @ 0x102179f8 (14 bytes, 5 insns) */
void f_102179f8(void) {
  FTRACE(0x102179f8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102179f8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102179fc add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 102179ff mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 10217a01 mov ax, word ptr [eax - 4] */
  AX = (r16((uint32_t)(EAX + -0x4)));
  /* 10217a05 ret  */
  ESPCHK(0x102179f8u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a06 @ 0x10217a06 (18 bytes, 6 insns) */
void f_10217a06(void) {
  FTRACE(0x10217a06u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10217a06 push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 10217a0b push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 10217a10 call 0x1021929a */
  push32(0x10217a15u); f_1021929a();
  /* 10217a15 pop ecx */
  ECX = (pop32());
  /* 10217a16 pop ecx */
  ECX = (pop32());
  /* 10217a17 ret  */
  ESPCHK(0x10217a06u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a18 @ 0x10217a18 (62 bytes, 24 insns) */
void f_10217a18(void) {
  FTRACE(0x10217a18u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10217a18 push ebp */
  push32((uint32_t)(EBP));
  /* 10217a19 mov ebp, esp */
  EBP = (ESP);
  /* 10217a1b sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10217a1e fld qword ptr [0x1021e170] */
  fpu_push(rf64((uint32_t)(0x1021e170)));
  /* 10217a24 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 10217a27 fld qword ptr [0x1021e168] */
  fpu_push(rf64((uint32_t)(0x1021e168)));
  /* 10217a2d fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 10217a30 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 10217a33 fdiv qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x8)));
  /* 10217a36 fmul qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x8)));
  /* 10217a39 fsubr qword ptr [ebp - 0x10] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x10))) - FPU_ST(0);
  /* 10217a3c fstp qword ptr [ebp - 0x18] */
  wf64((uint32_t)(EBP + -0x18), FPU_ST(0));
  (void)fpu_pop();
  /* 10217a3f fld qword ptr [ebp - 0x18] */
  fpu_push(rf64((uint32_t)(EBP + -0x18)));
  /* 10217a42 fcomp qword ptr [0x1021e160] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x1021e160)));
  (void)fpu_pop();
  /* 10217a48 fnstsw ax */
  AX = fpu_status();
  /* 10217a4a sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10217a4b jbe 0x10217a52 */
  if ((C.cf||C.zf)) goto L_10217a52;
  /* 10217a4d push 1 */
  push32((uint32_t)(0x1u));
  /* 10217a4f pop eax */
  EAX = (pop32());
  /* 10217a50 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10217a51 ret  */
  ESPCHK(0x10217a18u, _esp0);
  ESP += 4; return;
L_10217a52:;
  /* 10217a52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10217a54 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10217a55 ret  */
  ESPCHK(0x10217a18u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a56 @ 0x10217a56 (41 bytes, 13 insns) */
void f_10217a56(void) {
  FTRACE(0x10217a56u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10217a56 push 0x1021e194 */
  push32((uint32_t)(0x1021e194u));
  /* 10217a5b call dword ptr [0x1021e004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e004))), 0x10217a61u);
  /* 10217a61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10217a63 je 0x10217a7a */
  if (C.zf) goto L_10217a7a;
  /* 10217a65 push 0x1021e178 */
  push32((uint32_t)(0x1021e178u));
  /* 10217a6a push eax */
  push32((uint32_t)(EAX));
  /* 10217a6b call dword ptr [0x1021e088] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e088))), 0x10217a71u);
  /* 10217a71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10217a73 je 0x10217a7a */
  if (C.zf) goto L_10217a7a;
  /* 10217a75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10217a77 call eax */
  call_ind((uint32_t)(EAX), 0x10217a79u);
  /* 10217a79 ret  */
  ESPCHK(0x10217a56u, _esp0);
  ESP += 4; return;
L_10217a7a:;
  /* 10217a7a jmp 0x10217a18 */
  f_10217a18(); return;
}

/* FUN_10007a7f @ 0x10217a7f (90 bytes, 37 insns) */
void f_10217a7f(void) {
  FTRACE(0x10217a7fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10217a7f push esi */
  push32((uint32_t)(ESI));
  /* 10217a80 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10217a84 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10217a87 push eax */
  push32((uint32_t)(EAX));
  /* 10217a88 call 0x10219440 */
  push32(0x10217a8du); f_10219440();
  /* 10217a8d cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217a90 pop ecx */
  ECX = (pop32());
  /* 10217a91 je 0x10217abf */
  if (C.zf) goto L_10217abf;
L_10217a93:;
  /* 10217a93 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10217a94 cmp dword ptr [0x10220be0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10220be0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217a9b jle 0x10217aac */
  if ((C.zf||C.sf!=C.of)) goto L_10217aac;
  /* 10217a9d movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10217aa0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10217aa2 push eax */
  push32((uint32_t)(EAX));
  /* 10217aa3 call 0x102193cb */
  push32(0x10217aa8u); f_102193cb();
  /* 10217aa8 pop ecx */
  ECX = (pop32());
  /* 10217aa9 pop ecx */
  ECX = (pop32());
  /* 10217aaa jmp 0x10217abb */
  goto L_10217abb;
L_10217aac:;
  /* 10217aac movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10217aaf mov ecx, dword ptr [0x102209d0] */
  ECX = (r32((uint32_t)(0x102209d0)));
  /* 10217ab5 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 10217ab8 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_10217abb:;
  /* 10217abb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10217abd jne 0x10217a93 */
  if (!C.zf) goto L_10217a93;
L_10217abf:;
  /* 10217abf mov cl, byte ptr [0x10220be4] */
  CL = (r8((uint32_t)(0x10220be4)));
  /* 10217ac5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10217ac7 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 10217ac9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10217aca:;
  /* 10217aca mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 10217acc mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
  /* 10217ace mov al, cl */
  AL = (CL);
  /* 10217ad0 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 10217ad2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10217ad3 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10217ad5 jne 0x10217aca */
  if (!C.zf) goto L_10217aca;
  /* 10217ad7 pop esi */
  ESI = (pop32());
  /* 10217ad8 ret  */
  ESPCHK(0x10217a7fu, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x10217b3f (62 bytes, 29 insns) */
void f_10217b3f(void) {
  FTRACE(0x10217b3fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10217b3f push ebp */
  push32((uint32_t)(EBP));
  /* 10217b40 mov ebp, esp */
  EBP = (ESP);
  /* 10217b42 push ecx */
  push32((uint32_t)(ECX));
  /* 10217b43 push ecx */
  push32((uint32_t)(ECX));
  /* 10217b44 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217b48 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10217b4b je 0x10217b68 */
  if (C.zf) goto L_10217b68;
  /* 10217b4d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10217b50 push eax */
  push32((uint32_t)(EAX));
  /* 10217b51 call 0x1021990c */
  push32(0x10217b56u); f_1021990c();
  /* 10217b56 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10217b59 pop ecx */
  ECX = (pop32());
  /* 10217b5a pop ecx */
  ECX = (pop32());
  /* 10217b5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10217b5e mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10217b60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10217b63 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10217b66 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10217b67 ret  */
  ESPCHK(0x10217b3fu, _esp0);
  ESP += 4; return;
L_10217b68:;
  /* 10217b68 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10217b6b push eax */
  push32((uint32_t)(EAX));
  /* 10217b6c call 0x10219939 */
  push32(0x10217b71u); f_10219939();
  /* 10217b71 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10217b74 pop ecx */
  ECX = (pop32());
  /* 10217b75 pop ecx */
  ECX = (pop32());
  /* 10217b76 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10217b79 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10217b7b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10217b7c ret  */
  ESPCHK(0x10217b3fu, _esp0);
  ESP += 4; return;
}

/* FUN_10007b7d @ 0x10217b7d (97 bytes, 42 insns) */
void f_10217b7d(void) {
  FTRACE(0x10217b7du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10217b7d push ebp */
  push32((uint32_t)(EBP));
  /* 10217b7e mov ebp, esp */
  EBP = (ESP);
  /* 10217b80 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10217b83 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10217b86 push esi */
  push32((uint32_t)(ESI));
  /* 10217b87 push eax */
  push32((uint32_t)(EAX));
  /* 10217b88 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10217b8b push eax */
  push32((uint32_t)(EAX));
  /* 10217b8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10217b8f push ecx */
  push32((uint32_t)(ECX));
  /* 10217b90 push ecx */
  push32((uint32_t)(ECX));
  /* 10217b91 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10217b93 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10217b96 call 0x102199dd */
  push32(0x10217b9bu); f_102199dd();
  /* 10217b9b mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10217b9e lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10217ba1 push eax */
  push32((uint32_t)(EAX));
  /* 10217ba2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10217ba5 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 10217ba8 push eax */
  push32((uint32_t)(EAX));
  /* 10217ba9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10217bab cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217baf sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10217bb2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10217bb4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10217bb6 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 10217bb9 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10217bbb add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10217bbd push ecx */
  push32((uint32_t)(ECX));
  /* 10217bbe call 0x10219966 */
  push32(0x10217bc3u); f_10219966();
  /* 10217bc3 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10217bc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10217bc8 push eax */
  push32((uint32_t)(EAX));
  /* 10217bc9 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10217bcc push esi */
  push32((uint32_t)(ESI));
  /* 10217bcd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10217bd0 call 0x10217bde */
  push32(0x10217bd5u); f_10217bde();
  /* 10217bd5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10217bd8 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10217bdb pop esi */
  ESI = (pop32());
  /* 10217bdc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10217bdd ret  */
  ESPCHK(0x10217b7du, _esp0);
  ESP += 4; return;
}

/* FUN_10007bde @ 0x10217bde (194 bytes, 91 insns) */
void f_10217bde(void) {
  FTRACE(0x10217bdeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10217bde push ebp */
  push32((uint32_t)(EBP));
  /* 10217bdf mov ebp, esp */
  EBP = (ESP);
  /* 10217be1 push ebx */
  push32((uint32_t)(EBX));
  /* 10217be2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10217be4 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10217be7 push esi */
  push32((uint32_t)(ESI));
  /* 10217be8 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 10217beb push edi */
  push32((uint32_t)(EDI));
  /* 10217bec mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10217bef je 0x10217c0c */
  if (C.zf) goto L_10217c0c;
  /* 10217bf1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10217bf3 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217bf6 setg al */
  AL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 10217bf9 push eax */
  push32((uint32_t)(EAX));
  /* 10217bfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10217bfc cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217bff sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10217c02 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10217c04 push eax */
  push32((uint32_t)(EAX));
  /* 10217c05 call 0x10217e80 */
  push32(0x10217c0au); f_10217e80();
  /* 10217c0a pop ecx */
  ECX = (pop32());
  /* 10217c0b pop ecx */
  ECX = (pop32());
L_10217c0c:;
  /* 10217c0c cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217c0f mov eax, edi */
  EAX = (EDI);
  /* 10217c11 jne 0x10217c19 */
  if (!C.zf) goto L_10217c19;
  /* 10217c13 mov byte ptr [edi], 0x2d */
  w8((uint32_t)(EDI), (0x2du));
  /* 10217c16 lea eax, [edi + 1] */
  EAX = ((uint32_t)(EDI + 0x1));
L_10217c19:;
  /* 10217c19 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217c1c jle 0x10217c30 */
  if ((C.zf||C.sf!=C.of)) goto L_10217c30;
  /* 10217c1e mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 10217c21 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 10217c24 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10217c26 mov eax, ecx */
  EAX = (ECX);
  /* 10217c28 mov cl, byte ptr [0x10220be4] */
  CL = (r8((uint32_t)(0x10220be4)));
  /* 10217c2e mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
L_10217c30:;
  /* 10217c30 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10217c32 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10217c35 push 0x1021e1a8 */
  push32((uint32_t)(0x1021e1a8u));
  /* 10217c3a sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10217c3d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10217c3f add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10217c42 push ecx */
  push32((uint32_t)(ECX));
  /* 10217c43 call 0x10219af0 */
  push32(0x10217c48u); f_10219af0();
  /* 10217c48 cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217c4b pop ecx */
  ECX = (pop32());
  /* 10217c4c pop ecx */
  ECX = (pop32());
  /* 10217c4d mov ecx, eax */
  ECX = (EAX);
  /* 10217c4f je 0x10217c54 */
  if (C.zf) goto L_10217c54;
  /* 10217c51 mov byte ptr [ecx], 0x45 */
  w8((uint32_t)(ECX), (0x45u));
L_10217c54:;
  /* 10217c54 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 10217c57 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10217c58 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10217c5b je 0x10217c99 */
  if (C.zf) goto L_10217c99;
  /* 10217c5d mov ebx, dword ptr [esi + 4] */
  EBX = (r32((uint32_t)(ESI + 0x4)));
  /* 10217c60 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10217c61 jns 0x10217c68 */
  if (!C.sf) goto L_10217c68;
  /* 10217c63 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 10217c65 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
L_10217c68:;
  /* 10217c68 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10217c69 cmp ebx, 0x64 */
  { uint32_t _a=(EBX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217c6c jl 0x10217c7f */
  if ((C.sf!=C.of)) goto L_10217c7f;
  /* 10217c6e mov eax, ebx */
  EAX = (EBX);
  /* 10217c70 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10217c72 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10217c73 pop esi */
  ESI = (pop32());
  /* 10217c74 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10217c76 add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10217c78 mov eax, ebx */
  EAX = (EBX);
  /* 10217c7a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10217c7b idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10217c7d mov ebx, edx */
  EBX = (EDX);
L_10217c7f:;
  /* 10217c7f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10217c80 cmp ebx, 0xa */
  { uint32_t _a=(EBX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217c83 jl 0x10217c96 */
  if ((C.sf!=C.of)) goto L_10217c96;
  /* 10217c85 mov eax, ebx */
  EAX = (EBX);
  /* 10217c87 push 0xa */
  push32((uint32_t)(0xau));
  /* 10217c89 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10217c8a pop esi */
  ESI = (pop32());
  /* 10217c8b idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10217c8d add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10217c8f mov eax, ebx */
  EAX = (EBX);
  /* 10217c91 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10217c92 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10217c94 mov ebx, edx */
  EBX = (EDX);
L_10217c96:;
  /* 10217c96 add byte ptr [ecx + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x1))),_b=(BL),_r=_a+_b; w8((uint32_t)(ECX + 0x1), (_r)); fl_add(_a,_b,_r,8); }
L_10217c99:;
  /* 10217c99 mov eax, edi */
  EAX = (EDI);
  /* 10217c9b pop edi */
  EDI = (pop32());
  /* 10217c9c pop esi */
  ESI = (pop32());
  /* 10217c9d pop ebx */
  EBX = (pop32());
  /* 10217c9e pop ebp */
  EBP = (pop32());
  /* 10217c9f ret  */
  ESPCHK(0x10217bdeu, _esp0);
  ESP += 4; return;
}

/* FUN_10007ca0 @ 0x10217ca0 (85 bytes, 37 insns) */
void f_10217ca0(void) {
  FTRACE(0x10217ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10217ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 10217ca1 mov ebp, esp */
  EBP = (ESP);
  /* 10217ca3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10217ca6 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10217ca9 push esi */
  push32((uint32_t)(ESI));
  /* 10217caa push eax */
  push32((uint32_t)(EAX));
  /* 10217cab lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10217cae push eax */
  push32((uint32_t)(EAX));
  /* 10217caf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10217cb2 push ecx */
  push32((uint32_t)(ECX));
  /* 10217cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10217cb4 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10217cb6 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10217cb9 call 0x102199dd */
  push32(0x10217cbeu); f_102199dd();
  /* 10217cbe mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10217cc1 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10217cc4 push eax */
  push32((uint32_t)(EAX));
  /* 10217cc5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10217cc8 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10217cca push eax */
  push32((uint32_t)(EAX));
  /* 10217ccb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10217ccd cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217cd1 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10217cd4 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10217cd7 push eax */
  push32((uint32_t)(EAX));
  /* 10217cd8 call 0x10219966 */
  push32(0x10217cddu); f_10219966();
  /* 10217cdd lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10217ce0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10217ce2 push eax */
  push32((uint32_t)(EAX));
  /* 10217ce3 push esi */
  push32((uint32_t)(ESI));
  /* 10217ce4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10217ce7 call 0x10217cf5 */
  push32(0x10217cecu); f_10217cf5();
  /* 10217cec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10217cef add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10217cf2 pop esi */
  ESI = (pop32());
  /* 10217cf3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10217cf4 ret  */
  ESPCHK(0x10217ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cf5 @ 0x10217cf5 (167 bytes, 73 insns) */
void f_10217cf5(void) {
  FTRACE(0x10217cf5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10217cf5 push ebp */
  push32((uint32_t)(EBP));
  /* 10217cf6 mov ebp, esp */
  EBP = (ESP);
  /* 10217cf8 push ebx */
  push32((uint32_t)(EBX));
  /* 10217cf9 push esi */
  push32((uint32_t)(ESI));
  /* 10217cfa mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10217cfd mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10217d00 push edi */
  push32((uint32_t)(EDI));
  /* 10217d01 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 10217d04 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10217d05 cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10217d09 je 0x10217d25 */
  if (C.zf) goto L_10217d25;
  /* 10217d0b cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217d0e jne 0x10217d25 */
  if (!C.zf) goto L_10217d25;
  /* 10217d10 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10217d12 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217d15 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10217d18 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10217d1a add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10217d1c mov eax, ecx */
  EAX = (ECX);
  /* 10217d1e mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 10217d21 and byte ptr [eax + 1], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1)))&(0x0u); w8((uint32_t)(EAX + 0x1), (_r)); fl_logic(_r,8); }
L_10217d25:;
  /* 10217d25 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217d28 mov edi, ebx */
  EDI = (EBX);
  /* 10217d2a jne 0x10217d32 */
  if (!C.zf) goto L_10217d32;
  /* 10217d2c mov byte ptr [ebx], 0x2d */
  w8((uint32_t)(EBX), (0x2du));
  /* 10217d2f lea edi, [ebx + 1] */
  EDI = ((uint32_t)(EBX + 0x1));
L_10217d32:;
  /* 10217d32 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 10217d35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10217d37 jg 0x10217d49 */
  if ((!C.zf&&C.sf==C.of)) goto L_10217d49;
  /* 10217d39 push 1 */
  push32((uint32_t)(0x1u));
  /* 10217d3b push edi */
  push32((uint32_t)(EDI));
  /* 10217d3c call 0x10217e80 */
  push32(0x10217d41u); f_10217e80();
  /* 10217d41 pop ecx */
  ECX = (pop32());
  /* 10217d42 mov byte ptr [edi], 0x30 */
  w8((uint32_t)(EDI), (0x30u));
  /* 10217d45 pop ecx */
  ECX = (pop32());
  /* 10217d46 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10217d47 jmp 0x10217d4b */
  goto L_10217d4b;
L_10217d49:;
  /* 10217d49 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10217d4b:;
  /* 10217d4b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217d4f jle 0x10217d95 */
  if ((C.zf||C.sf!=C.of)) goto L_10217d95;
  /* 10217d51 push 1 */
  push32((uint32_t)(0x1u));
  /* 10217d53 push edi */
  push32((uint32_t)(EDI));
  /* 10217d54 call 0x10217e80 */
  push32(0x10217d59u); f_10217e80();
  /* 10217d59 mov al, byte ptr [0x10220be4] */
  AL = (r8((uint32_t)(0x10220be4)));
  /* 10217d5e pop ecx */
  ECX = (pop32());
  /* 10217d5f mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10217d61 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 10217d64 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10217d65 pop ecx */
  ECX = (pop32());
  /* 10217d66 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10217d68 jge 0x10217d95 */
  if ((C.sf==C.of)) goto L_10217d95;
  /* 10217d6a cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10217d6e je 0x10217d74 */
  if (C.zf) goto L_10217d74;
  /* 10217d70 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 10217d72 jmp 0x10217d7b */
  goto L_10217d7b;
L_10217d74:;
  /* 10217d74 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 10217d76 cmp dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217d79 jl 0x10217d7e */
  if ((C.sf!=C.of)) goto L_10217d7e;
L_10217d7b:;
  /* 10217d7b mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_10217d7e:;
  /* 10217d7e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10217d81 push edi */
  push32((uint32_t)(EDI));
  /* 10217d82 call 0x10217e80 */
  push32(0x10217d87u); f_10217e80();
  /* 10217d87 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10217d8a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10217d8c push edi */
  push32((uint32_t)(EDI));
  /* 10217d8d call 0x10219be0 */
  push32(0x10217d92u); f_10219be0();
  /* 10217d92 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10217d95:;
  /* 10217d95 pop edi */
  EDI = (pop32());
  /* 10217d96 mov eax, ebx */
  EAX = (EBX);
  /* 10217d98 pop esi */
  ESI = (pop32());
  /* 10217d99 pop ebx */
  EBX = (pop32());
  /* 10217d9a pop ebp */
  EBP = (pop32());
  /* 10217d9b ret  */
  ESPCHK(0x10217cf5u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d9c @ 0x10217d9c (147 bytes, 66 insns) */
void f_10217d9c(void) {
  FTRACE(0x10217d9cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10217d9c push ebp */
  push32((uint32_t)(EBP));
  /* 10217d9d mov ebp, esp */
  EBP = (ESP);
  /* 10217d9f sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10217da2 push ebx */
  push32((uint32_t)(EBX));
  /* 10217da3 push esi */
  push32((uint32_t)(ESI));
  /* 10217da4 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10217da7 push edi */
  push32((uint32_t)(EDI));
  /* 10217da8 push eax */
  push32((uint32_t)(EAX));
  /* 10217da9 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10217dac push eax */
  push32((uint32_t)(EAX));
  /* 10217dad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10217db0 push ecx */
  push32((uint32_t)(ECX));
  /* 10217db1 push ecx */
  push32((uint32_t)(ECX));
  /* 10217db2 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10217db4 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10217db7 call 0x102199dd */
  push32(0x10217dbcu); f_102199dd();
  /* 10217dbc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10217dbf mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 10217dc2 lea esi, [eax - 1] */
  ESI = ((uint32_t)(EAX + -0x1));
  /* 10217dc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10217dc7 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217dcb sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10217dce add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10217dd1 mov edi, eax */
  EDI = (EAX);
  /* 10217dd3 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10217dd6 push eax */
  push32((uint32_t)(EAX));
  /* 10217dd7 push ebx */
  push32((uint32_t)(EBX));
  /* 10217dd8 push edi */
  push32((uint32_t)(EDI));
  /* 10217dd9 call 0x10219966 */
  push32(0x10217ddeu); f_10219966();
  /* 10217dde mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10217de1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10217de4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10217de5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217de7 setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 10217dea cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217ded jl 0x10217e15 */
  if ((C.sf!=C.of)) goto L_10217e15;
  /* 10217def cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217df1 jge 0x10217e15 */
  if ((C.sf==C.of)) goto L_10217e15;
  /* 10217df3 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10217df5 je 0x10217e01 */
  if (C.zf) goto L_10217e01;
L_10217df7:;
  /* 10217df7 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10217df9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10217dfa test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10217dfc jne 0x10217df7 */
  if (!C.zf) goto L_10217df7;
  /* 10217dfe and byte ptr [edi - 2], al */
  { uint32_t _r=(r8((uint32_t)(EDI + -0x2)))&(AL); w8((uint32_t)(EDI + -0x2), (_r)); fl_logic(_r,8); }
L_10217e01:;
  /* 10217e01 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10217e04 push 1 */
  push32((uint32_t)(0x1u));
  /* 10217e06 push eax */
  push32((uint32_t)(EAX));
  /* 10217e07 push ebx */
  push32((uint32_t)(EBX));
  /* 10217e08 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10217e0b call 0x10217cf5 */
  push32(0x10217e10u); f_10217cf5();
  /* 10217e10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10217e13 jmp 0x10217e2a */
  goto L_10217e2a;
L_10217e15:;
  /* 10217e15 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10217e18 push 1 */
  push32((uint32_t)(0x1u));
  /* 10217e1a push eax */
  push32((uint32_t)(EAX));
  /* 10217e1b push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10217e1e push ebx */
  push32((uint32_t)(EBX));
  /* 10217e1f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10217e22 call 0x10217bde */
  push32(0x10217e27u); f_10217bde();
  /* 10217e27 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10217e2a:;
  /* 10217e2a pop edi */
  EDI = (pop32());
  /* 10217e2b pop esi */
  ESI = (pop32());
  /* 10217e2c pop ebx */
  EBX = (pop32());
  /* 10217e2d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10217e2e ret  */
  ESPCHK(0x10217d9cu, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x10217e2f (81 bytes, 29 insns) */
void f_10217e2f(void) {
  FTRACE(0x10217e2fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10217e2f push ebp */
  push32((uint32_t)(EBP));
  /* 10217e30 mov ebp, esp */
  EBP = (ESP);
  /* 10217e32 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217e36 je 0x10217e6a */
  if (C.zf) goto L_10217e6a;
  /* 10217e38 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217e3c je 0x10217e6a */
  if (C.zf) goto L_10217e6a;
  /* 10217e3e cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217e42 jne 0x10217e57 */
  if (!C.zf) goto L_10217e57;
  /* 10217e44 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10217e47 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10217e4a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10217e4d call 0x10217ca0 */
  push32(0x10217e52u); f_10217ca0();
  /* 10217e52 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10217e55 pop ebp */
  EBP = (pop32());
  /* 10217e56 ret  */
  ESPCHK(0x10217e2fu, _esp0);
  ESP += 4; return;
L_10217e57:;
  /* 10217e57 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10217e5a push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10217e5d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10217e60 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10217e63 call 0x10217d9c */
  push32(0x10217e68u); f_10217d9c();
  /* 10217e68 jmp 0x10217e7b */
  goto L_10217e7b;
L_10217e6a:;
  /* 10217e6a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10217e6d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10217e70 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10217e73 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10217e76 call 0x10217b7d */
  push32(0x10217e7bu); f_10217b7d();
L_10217e7b:;
  /* 10217e7b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10217e7e pop ebp */
  EBP = (pop32());
  /* 10217e7f ret  */
  ESPCHK(0x10217e2fu, _esp0);
  ESP += 4; return;
}

/* FUN_10007e80 @ 0x10217e80 (37 bytes, 18 insns) */
void f_10217e80(void) {
  FTRACE(0x10217e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10217e80 push edi */
  push32((uint32_t)(EDI));
  /* 10217e81 mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 10217e85 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10217e87 je 0x10217ea3 */
  if (C.zf) goto L_10217ea3;
  /* 10217e89 push esi */
  push32((uint32_t)(ESI));
  /* 10217e8a mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 10217e8e push esi */
  push32((uint32_t)(ESI));
  /* 10217e8f call 0x10219040 */
  push32(0x10217e94u); f_10219040();
  /* 10217e94 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10217e95 push eax */
  push32((uint32_t)(EAX));
  /* 10217e96 push esi */
  push32((uint32_t)(ESI));
  /* 10217e97 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10217e99 push esi */
  push32((uint32_t)(ESI));
  /* 10217e9a call 0x10219c40 */
  push32(0x10217e9fu); f_10219c40();
  /* 10217e9f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10217ea2 pop esi */
  ESI = (pop32());
L_10217ea3:;
  /* 10217ea3 pop edi */
  EDI = (pop32());
  /* 10217ea4 ret  */
  ESPCHK(0x10217e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ea5 @ 0x10217ea5 (45 bytes, 12 insns) */
void f_10217ea5(void) {
  FTRACE(0x10217ea5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10217ea5 mov eax, dword ptr [0x10220660] */
  EAX = (r32((uint32_t)(0x10220660)));
  /* 10217eaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10217eac je 0x10217eb0 */
  if (C.zf) goto L_10217eb0;
  /* 10217eae call eax */
  call_ind((uint32_t)(EAX), 0x10217eb0u);
L_10217eb0:;
  /* 10217eb0 push 0x1021f014 */
  push32((uint32_t)(0x1021f014u));
  /* 10217eb5 push 0x1021f008 */
  push32((uint32_t)(0x1021f008u));
  /* 10217eba call 0x10217fa9 */
  push32(0x10217ebfu); f_10217fa9();
  /* 10217ebf push 0x1021f004 */
  push32((uint32_t)(0x1021f004u));
  /* 10217ec4 push 0x1021f000 */
  push32((uint32_t)(0x1021f000u));
  /* 10217ec9 call 0x10217fa9 */
  push32(0x10217eceu); f_10217fa9();
  /* 10217ece add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10217ed1 ret  */
  ESPCHK(0x10217ea5u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10217ed2 (17 bytes, 6 insns) */
void f_10217ed2(void) {
  FTRACE(0x10217ed2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10217ed2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10217ed4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10217ed6 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10217eda call 0x10217ef2 */
  push32(0x10217edfu); f_10217ef2();
  /* 10217edf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10217ee2 ret  */
  ESPCHK(0x10217ed2u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ee3 @ 0x10217ee3 (15 bytes, 6 insns) */
void f_10217ee3(void) {
  FTRACE(0x10217ee3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10217ee3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10217ee5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10217ee7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10217ee9 call 0x10217ef2 */
  push32(0x10217eeeu); f_10217ef2();
  /* 10217eee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10217ef1 ret  */
  ESPCHK(0x10217ee3u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ef2 @ 0x10217ef2 (163 bytes, 53 insns) */
void f_10217ef2(void) {
  FTRACE(0x10217ef2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10217ef2 push edi */
  push32((uint32_t)(EDI));
  /* 10217ef3 call 0x10217f97 */
  push32(0x10217ef8u); f_10217f97();
  /* 10217ef8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10217efa pop edi */
  EDI = (pop32());
  /* 10217efb cmp dword ptr [0x10226698], edi */
  { uint32_t _a=(r32((uint32_t)(0x10226698))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217f01 jne 0x10217f14 */
  if (!C.zf) goto L_10217f14;
  /* 10217f03 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10217f07 call dword ptr [0x1021e020] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e020))), 0x10217f0du);
  /* 10217f0d push eax */
  push32((uint32_t)(EAX));
  /* 10217f0e call dword ptr [0x1021e01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e01c))), 0x10217f14u);
L_10217f14:;
  /* 10217f14 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217f19 push ebx */
  push32((uint32_t)(EBX));
  /* 10217f1a mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10217f1e mov dword ptr [0x10226694], edi */
  w32((uint32_t)(0x10226694), (EDI));
  /* 10217f24 mov byte ptr [0x10226690], bl */
  w8((uint32_t)(0x10226690), (BL));
  /* 10217f2a jne 0x10217f68 */
  if (!C.zf) goto L_10217f68;
  /* 10217f2c mov eax, dword ptr [0x10227d50] */
  EAX = (r32((uint32_t)(0x10227d50)));
  /* 10217f31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10217f33 je 0x10217f57 */
  if (C.zf) goto L_10217f57;
  /* 10217f35 mov ecx, dword ptr [0x10227d4c] */
  ECX = (r32((uint32_t)(0x10227d4c)));
  /* 10217f3b push esi */
  push32((uint32_t)(ESI));
  /* 10217f3c lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 10217f3f cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217f41 jb 0x10217f56 */
  if (C.cf) goto L_10217f56;
L_10217f43:;
  /* 10217f43 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10217f45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10217f47 je 0x10217f4b */
  if (C.zf) goto L_10217f4b;
  /* 10217f49 call eax */
  call_ind((uint32_t)(EAX), 0x10217f4bu);
L_10217f4b:;
  /* 10217f4b sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10217f4e cmp esi, dword ptr [0x10227d50] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10227d50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217f54 jae 0x10217f43 */
  if (!C.cf) goto L_10217f43;
L_10217f56:;
  /* 10217f56 pop esi */
  ESI = (pop32());
L_10217f57:;
  /* 10217f57 push 0x1021f020 */
  push32((uint32_t)(0x1021f020u));
  /* 10217f5c push 0x1021f018 */
  push32((uint32_t)(0x1021f018u));
  /* 10217f61 call 0x10217fa9 */
  push32(0x10217f66u); f_10217fa9();
  /* 10217f66 pop ecx */
  ECX = (pop32());
  /* 10217f67 pop ecx */
  ECX = (pop32());
L_10217f68:;
  /* 10217f68 push 0x1021f028 */
  push32((uint32_t)(0x1021f028u));
  /* 10217f6d push 0x1021f024 */
  push32((uint32_t)(0x1021f024u));
  /* 10217f72 call 0x10217fa9 */
  push32(0x10217f77u); f_10217fa9();
  /* 10217f77 pop ecx */
  ECX = (pop32());
  /* 10217f78 pop ecx */
  ECX = (pop32());
  /* 10217f79 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10217f7b pop ebx */
  EBX = (pop32());
  /* 10217f7c je 0x10217f85 */
  if (C.zf) goto L_10217f85;
  /* 10217f7e call 0x10217fa0 */
  push32(0x10217f83u); f_10217fa0();
  /* 10217f83 pop edi */
  EDI = (pop32());
  /* 10217f84 ret  */
  ESPCHK(0x10217ef2u, _esp0);
  ESP += 4; return;
L_10217f85:;
  /* 10217f85 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10217f89 mov dword ptr [0x10226698], edi */
  w32((uint32_t)(0x10226698), (EDI));
  /* 10217f8f call dword ptr [0x1021e018] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e018))), 0x10217f95u);
  /* 10217f95 pop edi */
  EDI = (pop32());
  /* 10217f96 ret  */
  ESPCHK(0x10217ef2u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f97 @ 0x10217f97 (9 bytes, 4 insns) */
void f_10217f97(void) {
  FTRACE(0x10217f97u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10217f97 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10217f99 call 0x1021a013 */
  push32(0x10217f9eu); f_1021a013();
  /* 10217f9e pop ecx */
  ECX = (pop32());
  /* 10217f9f ret  */
  ESPCHK(0x10217f97u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fa0 @ 0x10217fa0 (9 bytes, 4 insns) */
void f_10217fa0(void) {
  FTRACE(0x10217fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10217fa0 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10217fa2 call 0x1021a074 */
  push32(0x10217fa7u); f_1021a074();
  /* 10217fa7 pop ecx */
  ECX = (pop32());
  /* 10217fa8 ret  */
  ESPCHK(0x10217fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fa9 @ 0x10217fa9 (26 bytes, 12 insns) */
void f_10217fa9(void) {
  FTRACE(0x10217fa9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10217fa9 push esi */
  push32((uint32_t)(ESI));
  /* 10217faa mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_10217fae:;
  /* 10217fae cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217fb2 jae 0x10217fc1 */
  if (!C.cf) goto L_10217fc1;
  /* 10217fb4 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10217fb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10217fb8 je 0x10217fbc */
  if (C.zf) goto L_10217fbc;
  /* 10217fba call eax */
  call_ind((uint32_t)(EAX), 0x10217fbcu);
L_10217fbc:;
  /* 10217fbc add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10217fbf jmp 0x10217fae */
  goto L_10217fae;
L_10217fc1:;
  /* 10217fc1 pop esi */
  ESI = (pop32());
  /* 10217fc2 ret  */
  ESPCHK(0x10217fa9u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fc3 @ 0x10217fc3 (84 bytes, 32 insns) */
void f_10217fc3(void) {
  FTRACE(0x10217fc3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10217fc3 push esi */
  push32((uint32_t)(ESI));
  /* 10217fc4 call 0x10219f7e */
  push32(0x10217fc9u); f_10219f7e();
  /* 10217fc9 call dword ptr [0x1021e02c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e02c))), 0x10217fcfu);
  /* 10217fcf cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10217fd2 mov dword ptr [0x10220690], eax */
  w32((uint32_t)(0x10220690), (EAX));
  /* 10217fd7 je 0x10218013 */
  if (C.zf) goto L_10218013;
  /* 10217fd9 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10217fdb push 1 */
  push32((uint32_t)(0x1u));
  /* 10217fdd call 0x1021a089 */
  push32(0x10217fe2u); f_1021a089();
  /* 10217fe2 mov esi, eax */
  ESI = (EAX);
  /* 10217fe4 pop ecx */
  ECX = (pop32());
  /* 10217fe5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10217fe7 pop ecx */
  ECX = (pop32());
  /* 10217fe8 je 0x10218013 */
  if (C.zf) goto L_10218013;
  /* 10217fea push esi */
  push32((uint32_t)(ESI));
  /* 10217feb push dword ptr [0x10220690] */
  push32((uint32_t)(r32((uint32_t)(0x10220690))));
  /* 10217ff1 call dword ptr [0x1021e028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e028))), 0x10217ff7u);
  /* 10217ff7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10217ff9 je 0x10218013 */
  if (C.zf) goto L_10218013;
  /* 10217ffb push esi */
  push32((uint32_t)(ESI));
  /* 10217ffc call 0x10218035 */
  push32(0x10218001u); f_10218035();
  /* 10218001 pop ecx */
  ECX = (pop32());
  /* 10218002 call dword ptr [0x1021e024] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e024))), 0x10218008u);
  /* 10218008 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1021800c push 1 */
  push32((uint32_t)(0x1u));
  /* 1021800e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10218010 pop eax */
  EAX = (pop32());
  /* 10218011 pop esi */
  ESI = (pop32());
  /* 10218012 ret  */
  ESPCHK(0x10217fc3u, _esp0);
  ESP += 4; return;
L_10218013:;
  /* 10218013 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10218015 pop esi */
  ESI = (pop32());
  /* 10218016 ret  */
  ESPCHK(0x10217fc3u, _esp0);
  ESP += 4; return;
}

/* FUN_10008017 @ 0x10218017 (30 bytes, 8 insns) */
void f_10218017(void) {
  FTRACE(0x10218017u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10218017 call 0x10219fa7 */
  push32(0x1021801cu); f_10219fa7();
  /* 1021801c mov eax, dword ptr [0x10220690] */
  EAX = (r32((uint32_t)(0x10220690)));
  /* 10218021 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218024 je 0x10218034 */
  if (C.zf) goto L_10218034;
  /* 10218026 push eax */
  push32((uint32_t)(EAX));
  /* 10218027 call dword ptr [0x1021e030] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e030))), 0x1021802du);
  /* 1021802d or dword ptr [0x10220690], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x10220690)))|(0xffffffffu); w32((uint32_t)(0x10220690), (_r)); fl_logic(_r,32); }
L_10218034:;
  /* 10218034 ret  */
  ESPCHK(0x10218017u, _esp0);
  ESP += 4; return;
}

/* FUN_10008035 @ 0x10218035 (19 bytes, 4 insns) */
void f_10218035(void) {
  FTRACE(0x10218035u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10218035 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10218039 mov dword ptr [eax + 0x50], 0x10220ce0 */
  w32((uint32_t)(EAX + 0x50), (0x10220ce0u));
  /* 10218040 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 10218047 ret  */
  ESPCHK(0x10218035u, _esp0);
  ESP += 4; return;
}

/* FUN_10008048 @ 0x10218048 (103 bytes, 38 insns) */
void f_10218048(void) {
  FTRACE(0x10218048u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10218048 push esi */
  push32((uint32_t)(ESI));
  /* 10218049 push edi */
  push32((uint32_t)(EDI));
  /* 1021804a call dword ptr [0x1021e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e03c))), 0x10218050u);
  /* 10218050 push dword ptr [0x10220690] */
  push32((uint32_t)(r32((uint32_t)(0x10220690))));
  /* 10218056 mov edi, eax */
  EDI = (EAX);
  /* 10218058 call dword ptr [0x1021e038] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e038))), 0x1021805eu);
  /* 1021805e mov esi, eax */
  ESI = (EAX);
  /* 10218060 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10218062 jne 0x102180a3 */
  if (!C.zf) goto L_102180a3;
  /* 10218064 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10218066 push 1 */
  push32((uint32_t)(0x1u));
  /* 10218068 call 0x1021a089 */
  push32(0x1021806du); f_1021a089();
  /* 1021806d mov esi, eax */
  ESI = (EAX);
  /* 1021806f pop ecx */
  ECX = (pop32());
  /* 10218070 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10218072 pop ecx */
  ECX = (pop32());
  /* 10218073 je 0x1021809b */
  if (C.zf) goto L_1021809b;
  /* 10218075 push esi */
  push32((uint32_t)(ESI));
  /* 10218076 push dword ptr [0x10220690] */
  push32((uint32_t)(r32((uint32_t)(0x10220690))));
  /* 1021807c call dword ptr [0x1021e028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e028))), 0x10218082u);
  /* 10218082 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10218084 je 0x1021809b */
  if (C.zf) goto L_1021809b;
  /* 10218086 push esi */
  push32((uint32_t)(ESI));
  /* 10218087 call 0x10218035 */
  push32(0x1021808cu); f_10218035();
  /* 1021808c pop ecx */
  ECX = (pop32());
  /* 1021808d call dword ptr [0x1021e024] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e024))), 0x10218093u);
  /* 10218093 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10218097 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10218099 jmp 0x102180a3 */
  goto L_102180a3;
L_1021809b:;
  /* 1021809b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1021809d call 0x102170b1 */
  push32(0x102180a2u); f_102170b1();
  /* 102180a2 pop ecx */
  ECX = (pop32());
L_102180a3:;
  /* 102180a3 push edi */
  push32((uint32_t)(EDI));
  /* 102180a4 call dword ptr [0x1021e034] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e034))), 0x102180aau);
  /* 102180aa mov eax, esi */
  EAX = (ESI);
  /* 102180ac pop edi */
  EDI = (pop32());
  /* 102180ad pop esi */
  ESI = (pop32());
  /* 102180ae ret  */
  ESPCHK(0x10218048u, _esp0);
  ESP += 4; return;
}

/* FUN_100080af @ 0x102180af (160 bytes, 62 insns) */
void f_102180af(void) {
  FTRACE(0x102180afu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102180af mov eax, dword ptr [0x10220690] */
  EAX = (r32((uint32_t)(0x10220690)));
  /* 102180b4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102180b7 je 0x1021814e */
  if (C.zf) goto L_1021814e;
  /* 102180bd push esi */
  push32((uint32_t)(ESI));
  /* 102180be mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 102180c2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102180c4 jne 0x102180d3 */
  if (!C.zf) goto L_102180d3;
  /* 102180c6 push eax */
  push32((uint32_t)(EAX));
  /* 102180c7 call dword ptr [0x1021e038] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e038))), 0x102180cdu);
  /* 102180cd mov esi, eax */
  ESI = (EAX);
  /* 102180cf test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102180d1 je 0x1021813f */
  if (C.zf) goto L_1021813f;
L_102180d3:;
  /* 102180d3 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 102180d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102180d8 je 0x102180e1 */
  if (C.zf) goto L_102180e1;
  /* 102180da push eax */
  push32((uint32_t)(EAX));
  /* 102180db call 0x1021a1c6 */
  push32(0x102180e0u); f_1021a1c6();
  /* 102180e0 pop ecx */
  ECX = (pop32());
L_102180e1:;
  /* 102180e1 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 102180e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102180e6 je 0x102180ef */
  if (C.zf) goto L_102180ef;
  /* 102180e8 push eax */
  push32((uint32_t)(EAX));
  /* 102180e9 call 0x1021a1c6 */
  push32(0x102180eeu); f_1021a1c6();
  /* 102180ee pop ecx */
  ECX = (pop32());
L_102180ef:;
  /* 102180ef mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 102180f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102180f4 je 0x102180fd */
  if (C.zf) goto L_102180fd;
  /* 102180f6 push eax */
  push32((uint32_t)(EAX));
  /* 102180f7 call 0x1021a1c6 */
  push32(0x102180fcu); f_1021a1c6();
  /* 102180fc pop ecx */
  ECX = (pop32());
L_102180fd:;
  /* 102180fd mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 10218100 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10218102 je 0x1021810b */
  if (C.zf) goto L_1021810b;
  /* 10218104 push eax */
  push32((uint32_t)(EAX));
  /* 10218105 call 0x1021a1c6 */
  push32(0x1021810au); f_1021a1c6();
  /* 1021810a pop ecx */
  ECX = (pop32());
L_1021810b:;
  /* 1021810b mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 1021810e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10218110 je 0x10218119 */
  if (C.zf) goto L_10218119;
  /* 10218112 push eax */
  push32((uint32_t)(EAX));
  /* 10218113 call 0x1021a1c6 */
  push32(0x10218118u); f_1021a1c6();
  /* 10218118 pop ecx */
  ECX = (pop32());
L_10218119:;
  /* 10218119 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 1021811c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021811e je 0x10218127 */
  if (C.zf) goto L_10218127;
  /* 10218120 push eax */
  push32((uint32_t)(EAX));
  /* 10218121 call 0x1021a1c6 */
  push32(0x10218126u); f_1021a1c6();
  /* 10218126 pop ecx */
  ECX = (pop32());
L_10218127:;
  /* 10218127 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 1021812a cmp eax, 0x10220ce0 */
  { uint32_t _a=(EAX),_b=(0x10220ce0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021812f je 0x10218138 */
  if (C.zf) goto L_10218138;
  /* 10218131 push eax */
  push32((uint32_t)(EAX));
  /* 10218132 call 0x1021a1c6 */
  push32(0x10218137u); f_1021a1c6();
  /* 10218137 pop ecx */
  ECX = (pop32());
L_10218138:;
  /* 10218138 push esi */
  push32((uint32_t)(ESI));
  /* 10218139 call 0x1021a1c6 */
  push32(0x1021813eu); f_1021a1c6();
  /* 1021813e pop ecx */
  ECX = (pop32());
L_1021813f:;
  /* 1021813f push 0 */
  push32((uint32_t)(0x0u));
  /* 10218141 push dword ptr [0x10220690] */
  push32((uint32_t)(r32((uint32_t)(0x10220690))));
  /* 10218147 call dword ptr [0x1021e028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e028))), 0x1021814du);
  /* 1021814d pop esi */
  ESI = (pop32());
L_1021814e:;
  /* 1021814e ret  */
  ESPCHK(0x102180afu, _esp0);
  ESP += 4; return;
}

/* FUN_1000814f @ 0x1021814f (444 bytes, 150 insns) */
void f_1021814f(void) {
  FTRACE(0x1021814fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021814f push ebp */
  push32((uint32_t)(EBP));
  /* 10218150 mov ebp, esp */
  EBP = (ESP);
  /* 10218152 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10218155 push ebx */
  push32((uint32_t)(EBX));
  /* 10218156 push esi */
  push32((uint32_t)(ESI));
  /* 10218157 push edi */
  push32((uint32_t)(EDI));
  /* 10218158 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1021815d call 0x1021a2af */
  push32(0x10218162u); f_1021a2af();
  /* 10218162 mov esi, eax */
  ESI = (EAX);
  /* 10218164 pop ecx */
  ECX = (pop32());
  /* 10218165 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10218167 jne 0x10218171 */
  if (!C.zf) goto L_10218171;
  /* 10218169 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1021816b call 0x102170b1 */
  push32(0x10218170u); f_102170b1();
  /* 10218170 pop ecx */
  ECX = (pop32());
L_10218171:;
  /* 10218171 mov dword ptr [0x10227c40], esi */
  w32((uint32_t)(0x10227c40), (ESI));
  /* 10218177 mov dword ptr [0x10227d40], 0x20 */
  w32((uint32_t)(0x10227d40), (0x20u));
  /* 10218181 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_10218187:;
  /* 10218187 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218189 jae 0x102181a9 */
  if (!C.cf) goto L_102181a9;
  /* 1021818b and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 1021818f or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 10218192 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 10218196 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 1021819a mov eax, dword ptr [0x10227c40] */
  EAX = (r32((uint32_t)(0x10227c40)));
  /* 1021819f add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102181a2 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102181a7 jmp 0x10218187 */
  goto L_10218187;
L_102181a9:;
  /* 102181a9 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 102181ac push eax */
  push32((uint32_t)(EAX));
  /* 102181ad call dword ptr [0x1021e04c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e04c))), 0x102181b3u);
  /* 102181b3 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102181b8 je 0x1021828f */
  if (C.zf) goto L_1021828f;
  /* 102181be mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 102181c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102181c3 je 0x1021828f */
  if (C.zf) goto L_1021828f;
  /* 102181c9 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 102181cb lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 102181ce lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 102181d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 102181d4 mov eax, 0x800 */
  EAX = (0x800u);
  /* 102181d9 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102181db jl 0x102181df */
  if ((C.sf!=C.of)) goto L_102181df;
  /* 102181dd mov edi, eax */
  EDI = (EAX);
L_102181df:;
  /* 102181df cmp dword ptr [0x10227d40], edi */
  { uint32_t _a=(r32((uint32_t)(0x10227d40))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102181e5 jge 0x1021823d */
  if ((C.sf==C.of)) goto L_1021823d;
  /* 102181e7 mov esi, 0x10227c44 */
  ESI = (0x10227c44u);
L_102181ec:;
  /* 102181ec push 0x480 */
  push32((uint32_t)(0x480u));
  /* 102181f1 call 0x1021a2af */
  push32(0x102181f6u); f_1021a2af();
  /* 102181f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102181f8 pop ecx */
  ECX = (pop32());
  /* 102181f9 je 0x10218237 */
  if (C.zf) goto L_10218237;
  /* 102181fb add dword ptr [0x10227d40], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10227d40))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x10227d40), (_r)); fl_add(_a,_b,_r,32); }
  /* 10218202 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10218204 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_1021820a:;
  /* 1021820a cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021820c jae 0x1021822a */
  if (!C.cf) goto L_1021822a;
  /* 1021820e and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 10218212 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10218215 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10218219 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 1021821d mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1021821f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10218222 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10218228 jmp 0x1021820a */
  goto L_1021820a;
L_1021822a:;
  /* 1021822a add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1021822d cmp dword ptr [0x10227d40], edi */
  { uint32_t _a=(r32((uint32_t)(0x10227d40))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218233 jl 0x102181ec */
  if ((C.sf!=C.of)) goto L_102181ec;
  /* 10218235 jmp 0x1021823d */
  goto L_1021823d;
L_10218237:;
  /* 10218237 mov edi, dword ptr [0x10227d40] */
  EDI = (r32((uint32_t)(0x10227d40)));
L_1021823d:;
  /* 1021823d xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1021823f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10218241 jle 0x1021828f */
  if ((C.zf||C.sf!=C.of)) goto L_1021828f;
L_10218243:;
  /* 10218243 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10218246 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10218248 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021824b je 0x10218285 */
  if (C.zf) goto L_10218285;
  /* 1021824d mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 1021824f test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 10218251 je 0x10218285 */
  if (C.zf) goto L_10218285;
  /* 10218253 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 10218255 jne 0x10218262 */
  if (!C.zf) goto L_10218262;
  /* 10218257 push ecx */
  push32((uint32_t)(ECX));
  /* 10218258 call dword ptr [0x1021e048] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e048))), 0x1021825eu);
  /* 1021825e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10218260 je 0x10218285 */
  if (C.zf) goto L_10218285;
L_10218262:;
  /* 10218262 mov ecx, esi */
  ECX = (ESI);
  /* 10218264 mov eax, esi */
  EAX = (ESI);
  /* 10218266 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10218269 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1021826c mov ecx, dword ptr [ecx*4 + 0x10227c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10227c40)));
  /* 10218273 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10218276 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 10218279 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1021827c mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 1021827e mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10218280 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 10218282 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_10218285:;
  /* 10218285 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 10218289 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1021828a inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1021828b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021828d jl 0x10218243 */
  if ((C.sf!=C.of)) goto L_10218243;
L_1021828f:;
  /* 1021828f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10218291:;
  /* 10218291 mov ecx, dword ptr [0x10227c40] */
  ECX = (r32((uint32_t)(0x10227c40)));
  /* 10218297 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 1021829a cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021829e lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 102182a1 jne 0x102182f0 */
  if (!C.zf) goto L_102182f0;
  /* 102182a3 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 102182a5 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 102182a9 jne 0x102182b0 */
  if (!C.zf) goto L_102182b0;
  /* 102182ab push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 102182ad pop eax */
  EAX = (pop32());
  /* 102182ae jmp 0x102182ba */
  goto L_102182ba;
L_102182b0:;
  /* 102182b0 mov eax, ebx */
  EAX = (EBX);
  /* 102182b2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102182b3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 102182b5 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102182b7 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_102182ba:;
  /* 102182ba push eax */
  push32((uint32_t)(EAX));
  /* 102182bb call dword ptr [0x1021e044] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e044))), 0x102182c1u);
  /* 102182c1 mov edi, eax */
  EDI = (EAX);
  /* 102182c3 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102182c6 je 0x102182df */
  if (C.zf) goto L_102182df;
  /* 102182c8 push edi */
  push32((uint32_t)(EDI));
  /* 102182c9 call dword ptr [0x1021e048] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e048))), 0x102182cfu);
  /* 102182cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102182d1 je 0x102182df */
  if (C.zf) goto L_102182df;
  /* 102182d3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 102182d8 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 102182da cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102182dd jne 0x102182e5 */
  if (!C.zf) goto L_102182e5;
L_102182df:;
  /* 102182df or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 102182e3 jmp 0x102182f4 */
  goto L_102182f4;
L_102182e5:;
  /* 102182e5 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102182e8 jne 0x102182f4 */
  if (!C.zf) goto L_102182f4;
  /* 102182ea or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 102182ee jmp 0x102182f4 */
  goto L_102182f4;
L_102182f0:;
  /* 102182f0 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_102182f4:;
  /* 102182f4 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 102182f5 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102182f8 jl 0x10218291 */
  if ((C.sf!=C.of)) goto L_10218291;
  /* 102182fa push dword ptr [0x10227d40] */
  push32((uint32_t)(r32((uint32_t)(0x10227d40))));
  /* 10218300 call dword ptr [0x1021e040] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e040))), 0x10218306u);
  /* 10218306 pop edi */
  EDI = (pop32());
  /* 10218307 pop esi */
  ESI = (pop32());
  /* 10218308 pop ebx */
  EBX = (pop32());
  /* 10218309 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1021830a ret  */
  ESPCHK(0x1021814fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000830b @ 0x1021830b (84 bytes, 33 insns) */
void f_1021830b(void) {
  FTRACE(0x1021830bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021830b push ebx */
  push32((uint32_t)(EBX));
  /* 1021830c push esi */
  push32((uint32_t)(ESI));
  /* 1021830d push edi */
  push32((uint32_t)(EDI));
  /* 1021830e mov esi, 0x10227c40 */
  ESI = (0x10227c40u);
L_10218313:;
  /* 10218313 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10218315 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10218317 je 0x10218350 */
  if (C.zf) goto L_10218350;
  /* 10218319 mov edi, eax */
  EDI = (EAX);
  /* 1021831b add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10218320 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218322 jae 0x10218345 */
  if (!C.cf) goto L_10218345;
  /* 10218324 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_10218327:;
  /* 10218327 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021832b je 0x10218334 */
  if (C.zf) goto L_10218334;
  /* 1021832d push ebx */
  push32((uint32_t)(EBX));
  /* 1021832e call dword ptr [0x1021e050] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e050))), 0x10218334u);
L_10218334:;
  /* 10218334 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10218336 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10218339 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021833e add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10218341 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218343 jb 0x10218327 */
  if (C.cf) goto L_10218327;
L_10218345:;
  /* 10218345 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10218347 call 0x1021a1c6 */
  push32(0x1021834cu); f_1021a1c6();
  /* 1021834c and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 1021834f pop ecx */
  ECX = (pop32());
L_10218350:;
  /* 10218350 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10218353 cmp esi, 0x10227d40 */
  { uint32_t _a=(ESI),_b=(0x10227d40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218359 jl 0x10218313 */
  if ((C.sf!=C.of)) goto L_10218313;
  /* 1021835b pop edi */
  EDI = (pop32());
  /* 1021835c pop esi */
  ESI = (pop32());
  /* 1021835d pop ebx */
  EBX = (pop32());
  /* 1021835e ret  */
  ESPCHK(0x1021830bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000835f @ 0x1021835f (185 bytes, 71 insns) */
void f_1021835f(void) {
  FTRACE(0x1021835fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021835f push ebx */
  push32((uint32_t)(EBX));
  /* 10218360 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10218362 cmp dword ptr [0x10227d48], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10227d48))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218368 push esi */
  push32((uint32_t)(ESI));
  /* 10218369 push edi */
  push32((uint32_t)(EDI));
  /* 1021836a jne 0x10218371 */
  if (!C.zf) goto L_10218371;
  /* 1021836c call 0x1021a7c1 */
  push32(0x10218371u); f_1021a7c1();
L_10218371:;
  /* 10218371 mov esi, dword ptr [0x10226648] */
  ESI = (r32((uint32_t)(0x10226648)));
  /* 10218377 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10218379:;
  /* 10218379 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1021837b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021837d je 0x10218391 */
  if (C.zf) goto L_10218391;
  /* 1021837f cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10218381 je 0x10218384 */
  if (C.zf) goto L_10218384;
  /* 10218383 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10218384:;
  /* 10218384 push esi */
  push32((uint32_t)(ESI));
  /* 10218385 call 0x10219040 */
  push32(0x1021838au); f_10219040();
  /* 1021838a pop ecx */
  ECX = (pop32());
  /* 1021838b lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 1021838f jmp 0x10218379 */
  goto L_10218379;
L_10218391:;
  /* 10218391 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 10218398 push eax */
  push32((uint32_t)(EAX));
  /* 10218399 call 0x1021a2af */
  push32(0x1021839eu); f_1021a2af();
  /* 1021839e mov esi, eax */
  ESI = (EAX);
  /* 102183a0 pop ecx */
  ECX = (pop32());
  /* 102183a1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102183a3 mov dword ptr [0x10226678], esi */
  w32((uint32_t)(0x10226678), (ESI));
  /* 102183a9 jne 0x102183b3 */
  if (!C.zf) goto L_102183b3;
  /* 102183ab push 9 */
  push32((uint32_t)(0x9u));
  /* 102183ad call 0x102170b1 */
  push32(0x102183b2u); f_102170b1();
  /* 102183b2 pop ecx */
  ECX = (pop32());
L_102183b3:;
  /* 102183b3 mov edi, dword ptr [0x10226648] */
  EDI = (r32((uint32_t)(0x10226648)));
  /* 102183b9 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102183bb je 0x102183f6 */
  if (C.zf) goto L_102183f6;
  /* 102183bd push ebp */
  push32((uint32_t)(EBP));
L_102183be:;
  /* 102183be push edi */
  push32((uint32_t)(EDI));
  /* 102183bf call 0x10219040 */
  push32(0x102183c4u); f_10219040();
  /* 102183c4 mov ebp, eax */
  EBP = (EAX);
  /* 102183c6 pop ecx */
  ECX = (pop32());
  /* 102183c7 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 102183c8 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102183cb je 0x102183ef */
  if (C.zf) goto L_102183ef;
  /* 102183cd push ebp */
  push32((uint32_t)(EBP));
  /* 102183ce call 0x1021a2af */
  push32(0x102183d3u); f_1021a2af();
  /* 102183d3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102183d5 pop ecx */
  ECX = (pop32());
  /* 102183d6 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 102183d8 jne 0x102183e2 */
  if (!C.zf) goto L_102183e2;
  /* 102183da push 9 */
  push32((uint32_t)(0x9u));
  /* 102183dc call 0x102170b1 */
  push32(0x102183e1u); f_102170b1();
  /* 102183e1 pop ecx */
  ECX = (pop32());
L_102183e2:;
  /* 102183e2 push edi */
  push32((uint32_t)(EDI));
  /* 102183e3 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102183e5 call 0x10219af0 */
  push32(0x102183eau); f_10219af0();
  /* 102183ea pop ecx */
  ECX = (pop32());
  /* 102183eb add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102183ee pop ecx */
  ECX = (pop32());
L_102183ef:;
  /* 102183ef add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102183f1 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102183f3 jne 0x102183be */
  if (!C.zf) goto L_102183be;
  /* 102183f5 pop ebp */
  EBP = (pop32());
L_102183f6:;
  /* 102183f6 push dword ptr [0x10226648] */
  push32((uint32_t)(r32((uint32_t)(0x10226648))));
  /* 102183fc call 0x1021a1c6 */
  push32(0x10218401u); f_1021a1c6();
  /* 10218401 pop ecx */
  ECX = (pop32());
  /* 10218402 mov dword ptr [0x10226648], ebx */
  w32((uint32_t)(0x10226648), (EBX));
  /* 10218408 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 1021840a pop edi */
  EDI = (pop32());
  /* 1021840b pop esi */
  ESI = (pop32());
  /* 1021840c mov dword ptr [0x10227d44], 1 */
  w32((uint32_t)(0x10227d44), (0x1u));
  /* 10218416 pop ebx */
  EBX = (pop32());
  /* 10218417 ret  */
  ESPCHK(0x1021835fu, _esp0);
  ESP += 4; return;
}

/* FUN_10008418 @ 0x10218418 (153 bytes, 62 insns) */
void f_10218418(void) {
  FTRACE(0x10218418u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10218418 push ebp */
  push32((uint32_t)(EBP));
  /* 10218419 mov ebp, esp */
  EBP = (ESP);
  /* 1021841b push ecx */
  push32((uint32_t)(ECX));
  /* 1021841c push ecx */
  push32((uint32_t)(ECX));
  /* 1021841d push ebx */
  push32((uint32_t)(EBX));
  /* 1021841e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10218420 cmp dword ptr [0x10227d48], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10227d48))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218426 push esi */
  push32((uint32_t)(ESI));
  /* 10218427 push edi */
  push32((uint32_t)(EDI));
  /* 10218428 jne 0x1021842f */
  if (!C.zf) goto L_1021842f;
  /* 1021842a call 0x1021a7c1 */
  push32(0x1021842fu); f_1021a7c1();
L_1021842f:;
  /* 1021842f mov esi, 0x1022669c */
  ESI = (0x1022669cu);
  /* 10218434 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10218439 push esi */
  push32((uint32_t)(ESI));
  /* 1021843a push ebx */
  push32((uint32_t)(EBX));
  /* 1021843b call dword ptr [0x1021e054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e054))), 0x10218441u);
  /* 10218441 mov eax, dword ptr [0x10227d54] */
  EAX = (r32((uint32_t)(0x10227d54)));
  /* 10218446 mov dword ptr [0x10226688], esi */
  w32((uint32_t)(0x10226688), (ESI));
  /* 1021844c mov edi, esi */
  EDI = (ESI);
  /* 1021844e cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10218450 je 0x10218454 */
  if (C.zf) goto L_10218454;
  /* 10218452 mov edi, eax */
  EDI = (EAX);
L_10218454:;
  /* 10218454 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10218457 push eax */
  push32((uint32_t)(EAX));
  /* 10218458 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 1021845b push eax */
  push32((uint32_t)(EAX));
  /* 1021845c push ebx */
  push32((uint32_t)(EBX));
  /* 1021845d push ebx */
  push32((uint32_t)(EBX));
  /* 1021845e push edi */
  push32((uint32_t)(EDI));
  /* 1021845f call 0x102184b1 */
  push32(0x10218464u); f_102184b1();
  /* 10218464 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10218467 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1021846a lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 1021846d push eax */
  push32((uint32_t)(EAX));
  /* 1021846e call 0x1021a2af */
  push32(0x10218473u); f_1021a2af();
  /* 10218473 mov esi, eax */
  ESI = (EAX);
  /* 10218475 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10218478 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021847a jne 0x10218484 */
  if (!C.zf) goto L_10218484;
  /* 1021847c push 8 */
  push32((uint32_t)(0x8u));
  /* 1021847e call 0x102170b1 */
  push32(0x10218483u); f_102170b1();
  /* 10218483 pop ecx */
  ECX = (pop32());
L_10218484:;
  /* 10218484 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10218487 push eax */
  push32((uint32_t)(EAX));
  /* 10218488 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 1021848b push eax */
  push32((uint32_t)(EAX));
  /* 1021848c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1021848f lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 10218492 push eax */
  push32((uint32_t)(EAX));
  /* 10218493 push esi */
  push32((uint32_t)(ESI));
  /* 10218494 push edi */
  push32((uint32_t)(EDI));
  /* 10218495 call 0x102184b1 */
  push32(0x1021849au); f_102184b1();
  /* 1021849a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1021849d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102184a0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102184a1 mov dword ptr [0x10226670], esi */
  w32((uint32_t)(0x10226670), (ESI));
  /* 102184a7 pop edi */
  EDI = (pop32());
  /* 102184a8 pop esi */
  ESI = (pop32());
  /* 102184a9 mov dword ptr [0x1022666c], eax */
  w32((uint32_t)(0x1022666c), (EAX));
  /* 102184ae pop ebx */
  EBX = (pop32());
  /* 102184af leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102184b0 ret  */
  ESPCHK(0x10218418u, _esp0);
  ESP += 4; return;
}

/* FUN_100084b1 @ 0x102184b1 (436 bytes, 187 insns) */
void f_102184b1(void) {
  FTRACE(0x102184b1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102184b1 push ebp */
  push32((uint32_t)(EBP));
  /* 102184b2 mov ebp, esp */
  EBP = (ESP);
  /* 102184b4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 102184b7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 102184ba push ebx */
  push32((uint32_t)(EBX));
  /* 102184bb push esi */
  push32((uint32_t)(ESI));
  /* 102184bc and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 102184bf mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 102184c2 push edi */
  push32((uint32_t)(EDI));
  /* 102184c3 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 102184c6 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 102184cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102184cf test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102184d1 je 0x102184db */
  if (C.zf) goto L_102184db;
  /* 102184d3 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 102184d5 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102184d8 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_102184db:;
  /* 102184db cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102184de jne 0x10218524 */
  if (!C.zf) goto L_10218524;
L_102184e0:;
  /* 102184e0 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 102184e3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102184e4 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102184e7 je 0x10218512 */
  if (C.zf) goto L_10218512;
  /* 102184e9 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102184eb je 0x10218512 */
  if (C.zf) goto L_10218512;
  /* 102184ed movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 102184f0 test byte ptr [edx + 0x10226b01], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10226b01)))&(0x4u); fl_logic(_r,8); }
  /* 102184f7 je 0x10218505 */
  if (C.zf) goto L_10218505;
  /* 102184f9 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102184fb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102184fd je 0x10218505 */
  if (C.zf) goto L_10218505;
  /* 102184ff mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10218501 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10218503 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10218504 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10218505:;
  /* 10218505 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10218507 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10218509 je 0x102184e0 */
  if (C.zf) goto L_102184e0;
  /* 1021850b mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1021850d mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1021850f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10218510 jmp 0x102184e0 */
  goto L_102184e0;
L_10218512:;
  /* 10218512 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10218514 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10218516 je 0x1021851c */
  if (C.zf) goto L_1021851c;
  /* 10218518 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 1021851b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1021851c:;
  /* 1021851c cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021851f jne 0x10218567 */
  if (!C.zf) goto L_10218567;
  /* 10218521 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10218522 jmp 0x10218567 */
  goto L_10218567;
L_10218524:;
  /* 10218524 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10218526 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10218528 je 0x1021852f */
  if (C.zf) goto L_1021852f;
  /* 1021852a mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1021852c mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1021852e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1021852f:;
  /* 1021852f mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10218531 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10218532 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10218535 test byte ptr [ebx + 0x10226b01], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10226b01)))&(0x4u); fl_logic(_r,8); }
  /* 1021853c je 0x1021854a */
  if (C.zf) goto L_1021854a;
  /* 1021853e inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10218540 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10218542 je 0x10218549 */
  if (C.zf) goto L_10218549;
  /* 10218544 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 10218546 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 10218548 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10218549:;
  /* 10218549 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1021854a:;
  /* 1021854a cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021854d je 0x10218558 */
  if (C.zf) goto L_10218558;
  /* 1021854f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10218551 je 0x1021855c */
  if (C.zf) goto L_1021855c;
  /* 10218553 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10218556 jne 0x10218524 */
  if (!C.zf) goto L_10218524;
L_10218558:;
  /* 10218558 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1021855a jne 0x1021855f */
  if (!C.zf) goto L_1021855f;
L_1021855c:;
  /* 1021855c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1021855d jmp 0x10218567 */
  goto L_10218567;
L_1021855f:;
  /* 1021855f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10218561 je 0x10218567 */
  if (C.zf) goto L_10218567;
  /* 10218563 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_10218567:;
  /* 10218567 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_1021856b:;
  /* 1021856b cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021856e je 0x10218654 */
  if (C.zf) goto L_10218654;
L_10218574:;
  /* 10218574 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10218576 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10218579 je 0x10218580 */
  if (C.zf) goto L_10218580;
  /* 1021857b cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021857e jne 0x10218583 */
  if (!C.zf) goto L_10218583;
L_10218580:;
  /* 10218580 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10218581 jmp 0x10218574 */
  goto L_10218574;
L_10218583:;
  /* 10218583 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10218586 je 0x10218654 */
  if (C.zf) goto L_10218654;
  /* 1021858c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1021858e je 0x10218598 */
  if (C.zf) goto L_10218598;
  /* 10218590 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10218592 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10218595 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10218598:;
  /* 10218598 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1021859b inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_1021859d:;
  /* 1021859d mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 102185a4 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_102185a6:;
  /* 102185a6 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102185a9 jne 0x102185af */
  if (!C.zf) goto L_102185af;
  /* 102185ab inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102185ac inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 102185ad jmp 0x102185a6 */
  goto L_102185a6;
L_102185af:;
  /* 102185af cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102185b2 jne 0x102185e0 */
  if (!C.zf) goto L_102185e0;
  /* 102185b4 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 102185b7 jne 0x102185de */
  if (!C.zf) goto L_102185de;
  /* 102185b9 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102185bb cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102185be je 0x102185cd */
  if (C.zf) goto L_102185cd;
  /* 102185c0 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102185c4 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 102185c7 jne 0x102185cd */
  if (!C.zf) goto L_102185cd;
  /* 102185c9 mov eax, edx */
  EAX = (EDX);
  /* 102185cb jmp 0x102185d0 */
  goto L_102185d0;
L_102185cd:;
  /* 102185cd mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_102185d0:;
  /* 102185d0 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 102185d3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102185d5 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102185d8 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 102185db mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_102185de:;
  /* 102185de shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_102185e0:;
  /* 102185e0 mov edx, ebx */
  EDX = (EBX);
  /* 102185e2 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 102185e3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102185e5 je 0x102185f5 */
  if (C.zf) goto L_102185f5;
  /* 102185e7 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_102185e8:;
  /* 102185e8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102185ea je 0x102185f0 */
  if (C.zf) goto L_102185f0;
  /* 102185ec mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 102185ef inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_102185f0:;
  /* 102185f0 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102185f2 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 102185f3 jne 0x102185e8 */
  if (!C.zf) goto L_102185e8;
L_102185f5:;
  /* 102185f5 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102185f7 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102185f9 je 0x10218645 */
  if (C.zf) goto L_10218645;
  /* 102185fb cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102185ff jne 0x1021860b */
  if (!C.zf) goto L_1021860b;
  /* 10218601 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10218604 je 0x10218645 */
  if (C.zf) goto L_10218645;
  /* 10218606 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10218609 je 0x10218645 */
  if (C.zf) goto L_10218645;
L_1021860b:;
  /* 1021860b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021860f je 0x1021863f */
  if (C.zf) goto L_1021863f;
  /* 10218611 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10218613 je 0x1021862e */
  if (C.zf) goto L_1021862e;
  /* 10218615 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10218618 test byte ptr [ebx + 0x10226b01], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10226b01)))&(0x4u); fl_logic(_r,8); }
  /* 1021861f je 0x10218627 */
  if (C.zf) goto L_10218627;
  /* 10218621 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10218623 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10218624 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10218625 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10218627:;
  /* 10218627 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10218629 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1021862b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1021862c jmp 0x1021863d */
  goto L_1021863d;
L_1021862e:;
  /* 1021862e movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 10218631 test byte ptr [edx + 0x10226b01], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10226b01)))&(0x4u); fl_logic(_r,8); }
  /* 10218638 je 0x1021863d */
  if (C.zf) goto L_1021863d;
  /* 1021863a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1021863b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1021863d:;
  /* 1021863d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1021863f:;
  /* 1021863f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10218640 jmp 0x1021859d */
  goto L_1021859d;
L_10218645:;
  /* 10218645 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10218647 je 0x1021864d */
  if (C.zf) goto L_1021864d;
  /* 10218649 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 1021864c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1021864d:;
  /* 1021864d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1021864f jmp 0x1021856b */
  goto L_1021856b;
L_10218654:;
  /* 10218654 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10218656 je 0x1021865b */
  if (C.zf) goto L_1021865b;
  /* 10218658 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1021865b:;
  /* 1021865b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1021865e pop edi */
  EDI = (pop32());
  /* 1021865f pop esi */
  ESI = (pop32());
  /* 10218660 pop ebx */
  EBX = (pop32());
  /* 10218661 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 10218663 pop ebp */
  EBP = (pop32());
  /* 10218664 ret  */
  ESPCHK(0x102184b1u, _esp0);
  ESP += 4; return;
}

/* FUN_10008665 @ 0x10218665 (306 bytes, 132 insns) */
void f_10218665(void) {
  FTRACE(0x10218665u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10218665 push ecx */
  push32((uint32_t)(ECX));
  /* 10218666 push ecx */
  push32((uint32_t)(ECX));
  /* 10218667 mov eax, dword ptr [0x102267a0] */
  EAX = (r32((uint32_t)(0x102267a0)));
  /* 1021866c push ebx */
  push32((uint32_t)(EBX));
  /* 1021866d push ebp */
  push32((uint32_t)(EBP));
  /* 1021866e mov ebp, dword ptr [0x1021e068] */
  EBP = (r32((uint32_t)(0x1021e068)));
  /* 10218674 push esi */
  push32((uint32_t)(ESI));
  /* 10218675 push edi */
  push32((uint32_t)(EDI));
  /* 10218676 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10218678 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1021867a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1021867c cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021867e jne 0x102186b3 */
  if (!C.zf) goto L_102186b3;
  /* 10218680 call ebp */
  call_ind((uint32_t)(EBP), 0x10218682u);
  /* 10218682 mov esi, eax */
  ESI = (EAX);
  /* 10218684 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218686 je 0x10218694 */
  if (C.zf) goto L_10218694;
  /* 10218688 mov dword ptr [0x102267a0], 1 */
  w32((uint32_t)(0x102267a0), (0x1u));
  /* 10218692 jmp 0x102186bc */
  goto L_102186bc;
L_10218694:;
  /* 10218694 call dword ptr [0x1021e064] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e064))), 0x1021869au);
  /* 1021869a mov edi, eax */
  EDI = (EAX);
  /* 1021869c cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021869e je 0x1021878e */
  if (C.zf) goto L_1021878e;
  /* 102186a4 mov dword ptr [0x102267a0], 2 */
  w32((uint32_t)(0x102267a0), (0x2u));
  /* 102186ae jmp 0x10218742 */
  goto L_10218742;
L_102186b3:;
  /* 102186b3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102186b6 jne 0x1021873d */
  if (!C.zf) goto L_1021873d;
L_102186bc:;
  /* 102186bc cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102186be jne 0x102186cc */
  if (!C.zf) goto L_102186cc;
  /* 102186c0 call ebp */
  call_ind((uint32_t)(EBP), 0x102186c2u);
  /* 102186c2 mov esi, eax */
  ESI = (EAX);
  /* 102186c4 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102186c6 je 0x1021878e */
  if (C.zf) goto L_1021878e;
L_102186cc:;
  /* 102186cc cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102186cf mov eax, esi */
  EAX = (ESI);
  /* 102186d1 je 0x102186e1 */
  if (C.zf) goto L_102186e1;
L_102186d3:;
  /* 102186d3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102186d4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102186d5 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102186d8 jne 0x102186d3 */
  if (!C.zf) goto L_102186d3;
  /* 102186da inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102186db inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102186dc cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102186df jne 0x102186d3 */
  if (!C.zf) goto L_102186d3;
L_102186e1:;
  /* 102186e1 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102186e3 mov edi, dword ptr [0x1021e060] */
  EDI = (r32((uint32_t)(0x1021e060)));
  /* 102186e9 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 102186eb push ebx */
  push32((uint32_t)(EBX));
  /* 102186ec push ebx */
  push32((uint32_t)(EBX));
  /* 102186ed inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102186ee push ebx */
  push32((uint32_t)(EBX));
  /* 102186ef push ebx */
  push32((uint32_t)(EBX));
  /* 102186f0 push eax */
  push32((uint32_t)(EAX));
  /* 102186f1 push esi */
  push32((uint32_t)(ESI));
  /* 102186f2 push ebx */
  push32((uint32_t)(EBX));
  /* 102186f3 push ebx */
  push32((uint32_t)(EBX));
  /* 102186f4 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 102186f8 call edi */
  call_ind((uint32_t)(EDI), 0x102186fau);
  /* 102186fa mov ebp, eax */
  EBP = (EAX);
  /* 102186fc cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102186fe je 0x10218732 */
  if (C.zf) goto L_10218732;
  /* 10218700 push ebp */
  push32((uint32_t)(EBP));
  /* 10218701 call 0x1021a2af */
  push32(0x10218706u); f_1021a2af();
  /* 10218706 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218708 pop ecx */
  ECX = (pop32());
  /* 10218709 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 1021870d je 0x10218732 */
  if (C.zf) goto L_10218732;
  /* 1021870f push ebx */
  push32((uint32_t)(EBX));
  /* 10218710 push ebx */
  push32((uint32_t)(EBX));
  /* 10218711 push ebp */
  push32((uint32_t)(EBP));
  /* 10218712 push eax */
  push32((uint32_t)(EAX));
  /* 10218713 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 10218717 push esi */
  push32((uint32_t)(ESI));
  /* 10218718 push ebx */
  push32((uint32_t)(EBX));
  /* 10218719 push ebx */
  push32((uint32_t)(EBX));
  /* 1021871a call edi */
  call_ind((uint32_t)(EDI), 0x1021871cu);
  /* 1021871c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021871e jne 0x1021872e */
  if (!C.zf) goto L_1021872e;
  /* 10218720 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 10218724 call 0x1021a1c6 */
  push32(0x10218729u); f_1021a1c6();
  /* 10218729 pop ecx */
  ECX = (pop32());
  /* 1021872a mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_1021872e:;
  /* 1021872e mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_10218732:;
  /* 10218732 push esi */
  push32((uint32_t)(ESI));
  /* 10218733 call dword ptr [0x1021e05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e05c))), 0x10218739u);
  /* 10218739 mov eax, ebx */
  EAX = (EBX);
  /* 1021873b jmp 0x10218790 */
  goto L_10218790;
L_1021873d:;
  /* 1021873d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218740 jne 0x1021878e */
  if (!C.zf) goto L_1021878e;
L_10218742:;
  /* 10218742 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218744 jne 0x10218752 */
  if (!C.zf) goto L_10218752;
  /* 10218746 call dword ptr [0x1021e064] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e064))), 0x1021874cu);
  /* 1021874c mov edi, eax */
  EDI = (EAX);
  /* 1021874e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218750 je 0x1021878e */
  if (C.zf) goto L_1021878e;
L_10218752:;
  /* 10218752 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10218754 mov eax, edi */
  EAX = (EDI);
  /* 10218756 je 0x10218762 */
  if (C.zf) goto L_10218762;
L_10218758:;
  /* 10218758 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10218759 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021875b jne 0x10218758 */
  if (!C.zf) goto L_10218758;
  /* 1021875d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1021875e cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10218760 jne 0x10218758 */
  if (!C.zf) goto L_10218758;
L_10218762:;
  /* 10218762 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10218764 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10218765 mov ebp, eax */
  EBP = (EAX);
  /* 10218767 push ebp */
  push32((uint32_t)(EBP));
  /* 10218768 call 0x1021a2af */
  push32(0x1021876du); f_1021a2af();
  /* 1021876d mov esi, eax */
  ESI = (EAX);
  /* 1021876f pop ecx */
  ECX = (pop32());
  /* 10218770 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218772 jne 0x10218778 */
  if (!C.zf) goto L_10218778;
  /* 10218774 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10218776 jmp 0x10218783 */
  goto L_10218783;
L_10218778:;
  /* 10218778 push ebp */
  push32((uint32_t)(EBP));
  /* 10218779 push edi */
  push32((uint32_t)(EDI));
  /* 1021877a push esi */
  push32((uint32_t)(ESI));
  /* 1021877b call 0x1021a7e0 */
  push32(0x10218780u); f_1021a7e0();
  /* 10218780 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10218783:;
  /* 10218783 push edi */
  push32((uint32_t)(EDI));
  /* 10218784 call dword ptr [0x1021e058] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e058))), 0x1021878au);
  /* 1021878a mov eax, esi */
  EAX = (ESI);
  /* 1021878c jmp 0x10218790 */
  goto L_10218790;
L_1021878e:;
  /* 1021878e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10218790:;
  /* 10218790 pop edi */
  EDI = (pop32());
  /* 10218791 pop esi */
  ESI = (pop32());
  /* 10218792 pop ebp */
  EBP = (pop32());
  /* 10218793 pop ebx */
  EBX = (pop32());
  /* 10218794 pop ecx */
  ECX = (pop32());
  /* 10218795 pop ecx */
  ECX = (pop32());
  /* 10218796 ret  */
  ESPCHK(0x10218665u, _esp0);
  ESP += 4; return;
}

/* FUN_10008797 @ 0x10218797 (45 bytes, 17 insns) */
void f_10218797(void) {
  FTRACE(0x10218797u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10218797 push esi */
  push32((uint32_t)(ESI));
  /* 10218798 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1021879c push 0 */
  push32((uint32_t)(0x0u));
  /* 1021879e and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 102187a1 call dword ptr [0x1021e004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e004))), 0x102187a7u);
  /* 102187a7 cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102187ac jne 0x102187c2 */
  if (!C.zf) goto L_102187c2;
  /* 102187ae mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 102187b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102187b3 je 0x102187c2 */
  if (C.zf) goto L_102187c2;
  /* 102187b5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102187b7 mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 102187ba mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 102187bc mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 102187bf mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_102187c2:;
  /* 102187c2 pop esi */
  ESI = (pop32());
  /* 102187c3 ret  */
  ESPCHK(0x10218797u, _esp0);
  ESP += 4; return;
}

/* FUN_100087c4 @ 0x102187c4 (328 bytes, 115 insns) */
void f_102187c4(void) {
  FTRACE(0x102187c4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102187c4 push ebp */
  push32((uint32_t)(EBP));
  /* 102187c5 mov ebp, esp */
  EBP = (ESP);
  /* 102187c7 mov eax, 0x122c */
  EAX = (0x122cu);
  /* 102187cc call 0x1021aed0 */
  push32(0x102187d1u); f_1021aed0();
  /* 102187d1 lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 102187d7 push ebx */
  push32((uint32_t)(EBX));
  /* 102187d8 push eax */
  push32((uint32_t)(EAX));
  /* 102187d9 mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 102187e3 call dword ptr [0x1021e070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e070))), 0x102187e9u);
  /* 102187e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102187eb je 0x10218807 */
  if (C.zf) goto L_10218807;
  /* 102187ed cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102187f4 jne 0x10218807 */
  if (!C.zf) goto L_10218807;
  /* 102187f6 cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102187fd jb 0x10218807 */
  if (C.cf) goto L_10218807;
  /* 102187ff push 1 */
  push32((uint32_t)(0x1u));
  /* 10218801 pop eax */
  EAX = (pop32());
  /* 10218802 jmp 0x10218909 */
  goto L_10218909;
L_10218807:;
  /* 10218807 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 1021880d push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 10218812 push eax */
  push32((uint32_t)(EAX));
  /* 10218813 push 0x1021e1c8 */
  push32((uint32_t)(0x1021e1c8u));
  /* 10218818 call dword ptr [0x1021e06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e06c))), 0x1021881eu);
  /* 1021881e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10218820 je 0x102188f6 */
  if (C.zf) goto L_102188f6;
  /* 10218826 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10218828 lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 1021882e cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10218834 je 0x10218849 */
  if (C.zf) goto L_10218849;
L_10218836:;
  /* 10218836 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10218838 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021883a jl 0x10218844 */
  if ((C.sf!=C.of)) goto L_10218844;
  /* 1021883c cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021883e jg 0x10218844 */
  if ((!C.zf&&C.sf==C.of)) goto L_10218844;
  /* 10218840 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10218842 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_10218844:;
  /* 10218844 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10218845 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10218847 jne 0x10218836 */
  if (!C.zf) goto L_10218836;
L_10218849:;
  /* 10218849 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 1021884f push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10218851 push eax */
  push32((uint32_t)(EAX));
  /* 10218852 push 0x1021e1b0 */
  push32((uint32_t)(0x1021e1b0u));
  /* 10218857 call 0x1021ae90 */
  push32(0x1021885cu); f_1021ae90();
  /* 1021885c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1021885f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10218861 jne 0x1021886b */
  if (!C.zf) goto L_1021886b;
  /* 10218863 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 10218869 jmp 0x102188b4 */
  goto L_102188b4;
L_1021886b:;
  /* 1021886b lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 10218871 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10218876 push eax */
  push32((uint32_t)(EAX));
  /* 10218877 push ebx */
  push32((uint32_t)(EBX));
  /* 10218878 call dword ptr [0x1021e054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e054))), 0x1021887eu);
  /* 1021887e cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10218884 lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 1021888a je 0x1021889f */
  if (C.zf) goto L_1021889f;
L_1021888c:;
  /* 1021888c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1021888e cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10218890 jl 0x1021889a */
  if ((C.sf!=C.of)) goto L_1021889a;
  /* 10218892 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10218894 jg 0x1021889a */
  if ((!C.zf&&C.sf==C.of)) goto L_1021889a;
  /* 10218896 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10218898 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_1021889a:;
  /* 1021889a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1021889b cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1021889d jne 0x1021888c */
  if (!C.zf) goto L_1021888c;
L_1021889f:;
  /* 1021889f lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 102188a5 push eax */
  push32((uint32_t)(EAX));
  /* 102188a6 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 102188ac push eax */
  push32((uint32_t)(EAX));
  /* 102188ad call 0x1021ae10 */
  push32(0x102188b2u); f_1021ae10();
  /* 102188b2 pop ecx */
  ECX = (pop32());
  /* 102188b3 pop ecx */
  ECX = (pop32());
L_102188b4:;
  /* 102188b4 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102188b6 je 0x102188f6 */
  if (C.zf) goto L_102188f6;
  /* 102188b8 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 102188ba push eax */
  push32((uint32_t)(EAX));
  /* 102188bb call 0x1021ad50 */
  push32(0x102188c0u); f_1021ad50();
  /* 102188c0 pop ecx */
  ECX = (pop32());
  /* 102188c1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102188c3 pop ecx */
  ECX = (pop32());
  /* 102188c4 je 0x102188f6 */
  if (C.zf) goto L_102188f6;
  /* 102188c6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102188c7 mov ecx, eax */
  ECX = (EAX);
  /* 102188c9 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102188cb je 0x102188db */
  if (C.zf) goto L_102188db;
L_102188cd:;
  /* 102188cd cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102188d0 jne 0x102188d6 */
  if (!C.zf) goto L_102188d6;
  /* 102188d2 mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 102188d4 jmp 0x102188d7 */
  goto L_102188d7;
L_102188d6:;
  /* 102188d6 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_102188d7:;
  /* 102188d7 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102188d9 jne 0x102188cd */
  if (!C.zf) goto L_102188cd;
L_102188db:;
  /* 102188db push 0xa */
  push32((uint32_t)(0xau));
  /* 102188dd push ebx */
  push32((uint32_t)(EBX));
  /* 102188de push eax */
  push32((uint32_t)(EAX));
  /* 102188df call 0x1021ab15 */
  push32(0x102188e4u); f_1021ab15();
  /* 102188e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102188e7 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102188ea je 0x10218909 */
  if (C.zf) goto L_10218909;
  /* 102188ec cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102188ef je 0x10218909 */
  if (C.zf) goto L_10218909;
  /* 102188f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102188f4 je 0x10218909 */
  if (C.zf) goto L_10218909;
L_102188f6:;
  /* 102188f6 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 102188f9 push eax */
  push32((uint32_t)(EAX));
  /* 102188fa call 0x10218797 */
  push32(0x102188ffu); f_10218797();
  /* 102188ff cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10218903 pop ecx */
  ECX = (pop32());
  /* 10218904 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10218906 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10218909:;
  /* 10218909 pop ebx */
  EBX = (pop32());
  /* 1021890a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1021890b ret  */
  ESPCHK(0x102187c4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000890c @ 0x1021890c (93 bytes, 30 insns) */
void f_1021890c(void) {
  FTRACE(0x1021890cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021890c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1021890e push 0 */
  push32((uint32_t)(0x0u));
  /* 10218910 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218914 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10218919 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 1021891c push eax */
  push32((uint32_t)(EAX));
  /* 1021891d call dword ptr [0x1021e078] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e078))), 0x10218923u);
  /* 10218923 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10218925 mov dword ptr [0x10227c24], eax */
  w32((uint32_t)(0x10227c24), (EAX));
  /* 1021892a je 0x10218962 */
  if (C.zf) goto L_10218962;
  /* 1021892c call 0x102187c4 */
  push32(0x10218931u); f_102187c4();
  /* 10218931 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218934 mov dword ptr [0x10227c28], eax */
  w32((uint32_t)(0x10227c28), (EAX));
  /* 10218939 jne 0x10218948 */
  if (!C.zf) goto L_10218948;
  /* 1021893b push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 10218940 call 0x1021aeff */
  push32(0x10218945u); f_1021aeff();
  /* 10218945 pop ecx */
  ECX = (pop32());
  /* 10218946 jmp 0x10218952 */
  goto L_10218952;
L_10218948:;
  /* 10218948 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021894b jne 0x10218965 */
  if (!C.zf) goto L_10218965;
  /* 1021894d call 0x1021b750 */
  push32(0x10218952u); f_1021b750();
L_10218952:;
  /* 10218952 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10218954 jne 0x10218965 */
  if (!C.zf) goto L_10218965;
  /* 10218956 push dword ptr [0x10227c24] */
  push32((uint32_t)(r32((uint32_t)(0x10227c24))));
  /* 1021895c call dword ptr [0x1021e074] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e074))), 0x10218962u);
L_10218962:;
  /* 10218962 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10218964 ret  */
  ESPCHK(0x1021890cu, _esp0);
  ESP += 4; return;
L_10218965:;
  /* 10218965 push 1 */
  push32((uint32_t)(0x1u));
  /* 10218967 pop eax */
  EAX = (pop32());
  /* 10218968 ret  */
  ESPCHK(0x1021890cu, _esp0);
  ESP += 4; return;
}

/* FUN_10008969 @ 0x10218969 (168 bytes, 56 insns) */
void f_10218969(void) {
  FTRACE(0x10218969u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10218969 mov eax, dword ptr [0x10227c28] */
  EAX = (r32((uint32_t)(0x10227c28)));
  /* 1021896e push esi */
  push32((uint32_t)(ESI));
  /* 1021896f cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218972 push edi */
  push32((uint32_t)(EDI));
  /* 10218973 jne 0x102189db */
  if (!C.zf) goto L_102189db;
  /* 10218975 push ebx */
  push32((uint32_t)(EBX));
  /* 10218976 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10218978 cmp dword ptr [0x102269c8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x102269c8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021897e push ebp */
  push32((uint32_t)(EBP));
  /* 1021897f mov ebp, dword ptr [0x1021e080] */
  EBP = (r32((uint32_t)(0x1021e080)));
  /* 10218985 jle 0x102189c7 */
  if ((C.zf||C.sf!=C.of)) goto L_102189c7;
  /* 10218987 mov eax, dword ptr [0x102269cc] */
  EAX = (r32((uint32_t)(0x102269cc)));
  /* 1021898c mov edi, dword ptr [0x1021e07c] */
  EDI = (r32((uint32_t)(0x1021e07c)));
  /* 10218992 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_10218995:;
  /* 10218995 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1021899a push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1021899f push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102189a1 call edi */
  call_ind((uint32_t)(EDI), 0x102189a3u);
  /* 102189a3 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 102189a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 102189aa push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102189ac call edi */
  call_ind((uint32_t)(EDI), 0x102189aeu);
  /* 102189ae push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 102189b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 102189b3 push dword ptr [0x10227c24] */
  push32((uint32_t)(r32((uint32_t)(0x10227c24))));
  /* 102189b9 call ebp */
  call_ind((uint32_t)(EBP), 0x102189bbu);
  /* 102189bb add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102189be inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 102189bf cmp ebx, dword ptr [0x102269c8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x102269c8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102189c5 jl 0x10218995 */
  if ((C.sf!=C.of)) goto L_10218995;
L_102189c7:;
  /* 102189c7 push dword ptr [0x102269cc] */
  push32((uint32_t)(r32((uint32_t)(0x102269cc))));
  /* 102189cd push 0 */
  push32((uint32_t)(0x0u));
  /* 102189cf push dword ptr [0x10227c24] */
  push32((uint32_t)(r32((uint32_t)(0x10227c24))));
  /* 102189d5 call ebp */
  call_ind((uint32_t)(EBP), 0x102189d7u);
  /* 102189d7 pop ebp */
  EBP = (pop32());
  /* 102189d8 pop ebx */
  EBX = (pop32());
  /* 102189d9 jmp 0x10218a02 */
  goto L_10218a02;
L_102189db:;
  /* 102189db cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102189de jne 0x10218a02 */
  if (!C.zf) goto L_10218a02;
  /* 102189e0 mov edi, 0x10220e60 */
  EDI = (0x10220e60u);
  /* 102189e5 mov esi, edi */
  ESI = (EDI);
L_102189e7:;
  /* 102189e7 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 102189ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102189ec je 0x102189fc */
  if (C.zf) goto L_102189fc;
  /* 102189ee push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 102189f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 102189f5 push eax */
  push32((uint32_t)(EAX));
  /* 102189f6 call dword ptr [0x1021e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e07c))), 0x102189fcu);
L_102189fc:;
  /* 102189fc mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 102189fe cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218a00 jne 0x102189e7 */
  if (!C.zf) goto L_102189e7;
L_10218a02:;
  /* 10218a02 push dword ptr [0x10227c24] */
  push32((uint32_t)(r32((uint32_t)(0x10227c24))));
  /* 10218a08 call dword ptr [0x1021e074] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e074))), 0x10218a0eu);
  /* 10218a0e pop edi */
  EDI = (pop32());
  /* 10218a0f pop esi */
  ESI = (pop32());
  /* 10218a10 ret  */
  ESPCHK(0x10218969u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a11 @ 0x10218a11 (57 bytes, 18 insns) */
void f_10218a11(void) {
  FTRACE(0x10218a11u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10218a11 mov eax, dword ptr [0x10226650] */
  EAX = (r32((uint32_t)(0x10226650)));
  /* 10218a16 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218a19 je 0x10218a28 */
  if (C.zf) goto L_10218a28;
  /* 10218a1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10218a1d jne 0x10218a49 */
  if (!C.zf) goto L_10218a49;
  /* 10218a1f cmp dword ptr [0x10226654], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10226654))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218a26 jne 0x10218a49 */
  if (!C.zf) goto L_10218a49;
L_10218a28:;
  /* 10218a28 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10218a2d call 0x10218a4a */
  push32(0x10218a32u); f_10218a4a();
  /* 10218a32 mov eax, dword ptr [0x102267a4] */
  EAX = (r32((uint32_t)(0x102267a4)));
  /* 10218a37 pop ecx */
  ECX = (pop32());
  /* 10218a38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10218a3a je 0x10218a3e */
  if (C.zf) goto L_10218a3e;
  /* 10218a3c call eax */
  call_ind((uint32_t)(EAX), 0x10218a3eu);
L_10218a3e:;
  /* 10218a3e push 0xff */
  push32((uint32_t)(0xffu));
  /* 10218a43 call 0x10218a4a */
  push32(0x10218a48u); f_10218a4a();
  /* 10218a48 pop ecx */
  ECX = (pop32());
L_10218a49:;
  /* 10218a49 ret  */
  ESPCHK(0x10218a11u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a4a @ 0x10218a4a (339 bytes, 100 insns) */
void f_10218a4a(void) {
  FTRACE(0x10218a4au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10218a4a push ebp */
  push32((uint32_t)(EBP));
  /* 10218a4b mov ebp, esp */
  EBP = (ESP);
  /* 10218a4d sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10218a53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10218a56 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10218a58 mov eax, 0x102206c0 */
  EAX = (0x102206c0u);
L_10218a5d:;
  /* 10218a5d cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218a5f je 0x10218a6c */
  if (C.zf) goto L_10218a6c;
  /* 10218a61 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10218a64 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10218a65 cmp eax, 0x10220750 */
  { uint32_t _a=(EAX),_b=(0x10220750u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218a6a jl 0x10218a5d */
  if ((C.sf!=C.of)) goto L_10218a5d;
L_10218a6c:;
  /* 10218a6c push esi */
  push32((uint32_t)(ESI));
  /* 10218a6d mov esi, ecx */
  ESI = (ECX);
  /* 10218a6f shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 10218a72 cmp edx, dword ptr [esi + 0x102206c0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x102206c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218a78 jne 0x10218b9a */
  if (!C.zf) goto L_10218b9a;
  /* 10218a7e mov eax, dword ptr [0x10226650] */
  EAX = (r32((uint32_t)(0x10226650)));
  /* 10218a83 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218a86 je 0x10218b74 */
  if (C.zf) goto L_10218b74;
  /* 10218a8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10218a8e jne 0x10218a9d */
  if (!C.zf) goto L_10218a9d;
  /* 10218a90 cmp dword ptr [0x10226654], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10226654))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218a97 je 0x10218b74 */
  if (C.zf) goto L_10218b74;
L_10218a9d:;
  /* 10218a9d cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218aa3 je 0x10218b9a */
  if (C.zf) goto L_10218b9a;
  /* 10218aa9 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10218aaf push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10218ab4 push eax */
  push32((uint32_t)(EAX));
  /* 10218ab5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10218ab7 call dword ptr [0x1021e054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e054))), 0x10218abdu);
  /* 10218abd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10218abf jne 0x10218ad4 */
  if (!C.zf) goto L_10218ad4;
  /* 10218ac1 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10218ac7 push 0x1021e4b8 */
  push32((uint32_t)(0x1021e4b8u));
  /* 10218acc push eax */
  push32((uint32_t)(EAX));
  /* 10218acd call 0x10219af0 */
  push32(0x10218ad2u); f_10219af0();
  /* 10218ad2 pop ecx */
  ECX = (pop32());
  /* 10218ad3 pop ecx */
  ECX = (pop32());
L_10218ad4:;
  /* 10218ad4 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10218ada push edi */
  push32((uint32_t)(EDI));
  /* 10218adb push eax */
  push32((uint32_t)(EAX));
  /* 10218adc lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 10218ae2 call 0x10219040 */
  push32(0x10218ae7u); f_10219040();
  /* 10218ae7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10218ae8 pop ecx */
  ECX = (pop32());
  /* 10218ae9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218aec jbe 0x10218b17 */
  if ((C.cf||C.zf)) goto L_10218b17;
  /* 10218aee lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10218af4 push eax */
  push32((uint32_t)(EAX));
  /* 10218af5 call 0x10219040 */
  push32(0x10218afau); f_10219040();
  /* 10218afa mov edi, eax */
  EDI = (EAX);
  /* 10218afc lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10218b02 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10218b05 push 3 */
  push32((uint32_t)(0x3u));
  /* 10218b07 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10218b09 push 0x1021e4b4 */
  push32((uint32_t)(0x1021e4b4u));
  /* 10218b0e push edi */
  push32((uint32_t)(EDI));
  /* 10218b0f call 0x1021be00 */
  push32(0x10218b14u); f_1021be00();
  /* 10218b14 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10218b17:;
  /* 10218b17 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10218b1d push 0x1021e498 */
  push32((uint32_t)(0x1021e498u));
  /* 10218b22 push eax */
  push32((uint32_t)(EAX));
  /* 10218b23 call 0x10219af0 */
  push32(0x10218b28u); f_10219af0();
  /* 10218b28 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10218b2e push edi */
  push32((uint32_t)(EDI));
  /* 10218b2f push eax */
  push32((uint32_t)(EAX));
  /* 10218b30 call 0x10219b00 */
  push32(0x10218b35u); f_10219b00();
  /* 10218b35 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10218b3b push 0x1021e494 */
  push32((uint32_t)(0x1021e494u));
  /* 10218b40 push eax */
  push32((uint32_t)(EAX));
  /* 10218b41 call 0x10219b00 */
  push32(0x10218b46u); f_10219b00();
  /* 10218b46 push dword ptr [esi + 0x102206c4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x102206c4))));
  /* 10218b4c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10218b52 push eax */
  push32((uint32_t)(EAX));
  /* 10218b53 call 0x10219b00 */
  push32(0x10218b58u); f_10219b00();
  /* 10218b58 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10218b5d lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10218b63 push 0x1021e46c */
  push32((uint32_t)(0x1021e46cu));
  /* 10218b68 push eax */
  push32((uint32_t)(EAX));
  /* 10218b69 call 0x1021bd74 */
  push32(0x10218b6eu); f_1021bd74();
  /* 10218b6e add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10218b71 pop edi */
  EDI = (pop32());
  /* 10218b72 jmp 0x10218b9a */
  goto L_10218b9a;
L_10218b74:;
  /* 10218b74 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10218b77 lea esi, [esi + 0x102206c4] */
  ESI = ((uint32_t)(ESI + 0x102206c4));
  /* 10218b7d push 0 */
  push32((uint32_t)(0x0u));
  /* 10218b7f push eax */
  push32((uint32_t)(EAX));
  /* 10218b80 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10218b82 call 0x10219040 */
  push32(0x10218b87u); f_10219040();
  /* 10218b87 pop ecx */
  ECX = (pop32());
  /* 10218b88 push eax */
  push32((uint32_t)(EAX));
  /* 10218b89 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10218b8b push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10218b8d call dword ptr [0x1021e044] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e044))), 0x10218b93u);
  /* 10218b93 push eax */
  push32((uint32_t)(EAX));
  /* 10218b94 call dword ptr [0x1021e084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e084))), 0x10218b9au);
L_10218b9a:;
  /* 10218b9a pop esi */
  ESI = (pop32());
  /* 10218b9b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10218b9c ret  */
  ESPCHK(0x10218a4au, _esp0);
  ESP += 4; return;
}

/* FUN_10008b9d @ 0x10218b9d (101 bytes, 34 insns) */
void f_10218b9d(void) {
  FTRACE(0x10218b9du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10218b9d push esi */
  push32((uint32_t)(ESI));
  /* 10218b9e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10218ba2 cmp esi, dword ptr [0x10227d40] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10227d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218ba8 jae 0x10218bea */
  if (!C.cf) goto L_10218bea;
  /* 10218baa mov ecx, esi */
  ECX = (ESI);
  /* 10218bac mov eax, esi */
  EAX = (ESI);
  /* 10218bae sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10218bb1 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10218bb4 mov ecx, dword ptr [ecx*4 + 0x10227c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10227c40)));
  /* 10218bbb lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10218bbe test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10218bc3 je 0x10218bea */
  if (C.zf) goto L_10218bea;
  /* 10218bc5 push edi */
  push32((uint32_t)(EDI));
  /* 10218bc6 push esi */
  push32((uint32_t)(ESI));
  /* 10218bc7 call 0x1021c044 */
  push32(0x10218bccu); f_1021c044();
  /* 10218bcc push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10218bd0 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10218bd4 push esi */
  push32((uint32_t)(ESI));
  /* 10218bd5 call 0x10218c02 */
  push32(0x10218bdau); f_10218c02();
  /* 10218bda push esi */
  push32((uint32_t)(ESI));
  /* 10218bdb mov edi, eax */
  EDI = (EAX);
  /* 10218bdd call 0x1021c0a3 */
  push32(0x10218be2u); f_1021c0a3();
  /* 10218be2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10218be5 mov eax, edi */
  EAX = (EDI);
  /* 10218be7 pop edi */
  EDI = (pop32());
  /* 10218be8 pop esi */
  ESI = (pop32());
  /* 10218be9 ret  */
  ESPCHK(0x10218b9du, _esp0);
  ESP += 4; return;
L_10218bea:;
  /* 10218bea call 0x1021bf71 */
  push32(0x10218befu); f_1021bf71();
  /* 10218bef mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10218bf5 call 0x1021bf7a */
  push32(0x10218bfau); f_1021bf7a();
  /* 10218bfa and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10218bfd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10218c00 pop esi */
  ESI = (pop32());
  /* 10218c01 ret  */
  ESPCHK(0x10218b9du, _esp0);
  ESP += 4; return;
}

/* FUN_10008c02 @ 0x10218c02 (115 bytes, 41 insns) */
void f_10218c02(void) {
  FTRACE(0x10218c02u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10218c02 push esi */
  push32((uint32_t)(ESI));
  /* 10218c03 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10218c07 push edi */
  push32((uint32_t)(EDI));
  /* 10218c08 push esi */
  push32((uint32_t)(ESI));
  /* 10218c09 call 0x1021c002 */
  push32(0x10218c0eu); f_1021c002();
  /* 10218c0e cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218c11 pop ecx */
  ECX = (pop32());
  /* 10218c12 jne 0x10218c21 */
  if (!C.zf) goto L_10218c21;
  /* 10218c14 call 0x1021bf71 */
  push32(0x10218c19u); f_1021bf71();
  /* 10218c19 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10218c1f jmp 0x10218c4e */
  goto L_10218c4e;
L_10218c21:;
  /* 10218c21 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 10218c25 push 0 */
  push32((uint32_t)(0x0u));
  /* 10218c27 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10218c2b push eax */
  push32((uint32_t)(EAX));
  /* 10218c2c call dword ptr [0x1021e000] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e000))), 0x10218c32u);
  /* 10218c32 mov edi, eax */
  EDI = (EAX);
  /* 10218c34 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218c37 jne 0x10218c41 */
  if (!C.zf) goto L_10218c41;
  /* 10218c39 call dword ptr [0x1021e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e03c))), 0x10218c3fu);
  /* 10218c3f jmp 0x10218c43 */
  goto L_10218c43;
L_10218c41:;
  /* 10218c41 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10218c43:;
  /* 10218c43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10218c45 je 0x10218c53 */
  if (C.zf) goto L_10218c53;
  /* 10218c47 push eax */
  push32((uint32_t)(EAX));
  /* 10218c48 call 0x1021befe */
  push32(0x10218c4du); f_1021befe();
  /* 10218c4d pop ecx */
  ECX = (pop32());
L_10218c4e:;
  /* 10218c4e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10218c51 jmp 0x10218c72 */
  goto L_10218c72;
L_10218c53:;
  /* 10218c53 mov ecx, esi */
  ECX = (ESI);
  /* 10218c55 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 10218c58 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10218c5b mov eax, esi */
  EAX = (ESI);
  /* 10218c5d mov ecx, dword ptr [ecx*4 + 0x10227c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10227c40)));
  /* 10218c64 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10218c67 and byte ptr [ecx + eax*4 + 4], 0xfd */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0xfdu); w8((uint32_t)(ECX + EAX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 10218c6c lea eax, [ecx + eax*4 + 4] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 10218c70 mov eax, edi */
  EAX = (EDI);
L_10218c72:;
  /* 10218c72 pop edi */
  EDI = (pop32());
  /* 10218c73 pop esi */
  ESI = (pop32());
  /* 10218c74 ret  */
  ESPCHK(0x10218c02u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c75 @ 0x10218c75 (101 bytes, 34 insns) */
void f_10218c75(void) {
  FTRACE(0x10218c75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10218c75 push esi */
  push32((uint32_t)(ESI));
  /* 10218c76 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10218c7a cmp esi, dword ptr [0x10227d40] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10227d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218c80 jae 0x10218cc2 */
  if (!C.cf) goto L_10218cc2;
  /* 10218c82 mov ecx, esi */
  ECX = (ESI);
  /* 10218c84 mov eax, esi */
  EAX = (ESI);
  /* 10218c86 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10218c89 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10218c8c mov ecx, dword ptr [ecx*4 + 0x10227c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10227c40)));
  /* 10218c93 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10218c96 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10218c9b je 0x10218cc2 */
  if (C.zf) goto L_10218cc2;
  /* 10218c9d push edi */
  push32((uint32_t)(EDI));
  /* 10218c9e push esi */
  push32((uint32_t)(ESI));
  /* 10218c9f call 0x1021c044 */
  push32(0x10218ca4u); f_1021c044();
  /* 10218ca4 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10218ca8 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10218cac push esi */
  push32((uint32_t)(ESI));
  /* 10218cad call 0x10218cda */
  push32(0x10218cb2u); f_10218cda();
  /* 10218cb2 push esi */
  push32((uint32_t)(ESI));
  /* 10218cb3 mov edi, eax */
  EDI = (EAX);
  /* 10218cb5 call 0x1021c0a3 */
  push32(0x10218cbau); f_1021c0a3();
  /* 10218cba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10218cbd mov eax, edi */
  EAX = (EDI);
  /* 10218cbf pop edi */
  EDI = (pop32());
  /* 10218cc0 pop esi */
  ESI = (pop32());
  /* 10218cc1 ret  */
  ESPCHK(0x10218c75u, _esp0);
  ESP += 4; return;
L_10218cc2:;
  /* 10218cc2 call 0x1021bf71 */
  push32(0x10218cc7u); f_1021bf71();
  /* 10218cc7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10218ccd call 0x1021bf7a */
  push32(0x10218cd2u); f_1021bf7a();
  /* 10218cd2 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10218cd5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10218cd8 pop esi */
  ESI = (pop32());
  /* 10218cd9 ret  */
  ESPCHK(0x10218c75u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cda @ 0x10218cda (395 bytes, 135 insns) */
void f_10218cda(void) {
  FTRACE(0x10218cdau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10218cda push ebp */
  push32((uint32_t)(EBP));
  /* 10218cdb mov ebp, esp */
  EBP = (ESP);
  /* 10218cdd sub esp, 0x414 */
  { uint32_t _a=(ESP),_b=(0x414u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10218ce3 push ebx */
  push32((uint32_t)(EBX));
  /* 10218ce4 push esi */
  push32((uint32_t)(ESI));
  /* 10218ce5 push edi */
  push32((uint32_t)(EDI));
  /* 10218ce6 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10218ce8 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218ceb mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 10218cee mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 10218cf1 jne 0x10218cfa */
  if (!C.zf) goto L_10218cfa;
L_10218cf3:;
  /* 10218cf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10218cf5 jmp 0x10218e60 */
  goto L_10218e60;
L_10218cfa:;
  /* 10218cfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10218cfd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10218d00 lea ebx, [eax*4 + 0x10227c40] */
  EBX = ((uint32_t)(EAX*4 + 0x10227c40));
  /* 10218d07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10218d0a and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10218d0d lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 10218d10 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10218d12 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 10218d15 test byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 10218d1a je 0x10218d2a */
  if (C.zf) goto L_10218d2a;
  /* 10218d1c push 2 */
  push32((uint32_t)(0x2u));
  /* 10218d1e push edi */
  push32((uint32_t)(EDI));
  /* 10218d1f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10218d22 call 0x10218c02 */
  push32(0x10218d27u); f_10218c02();
  /* 10218d27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10218d2a:;
  /* 10218d2a mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10218d2c add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10218d2e test byte ptr [eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 10218d32 je 0x10218df9 */
  if (C.zf) goto L_10218df9;
  /* 10218d38 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10218d3b cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218d3e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10218d41 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 10218d44 jbe 0x10218e34 */
  if ((C.cf||C.zf)) goto L_10218e34;
L_10218d4a:;
  /* 10218d4a lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
L_10218d50:;
  /* 10218d50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10218d53 sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10218d56 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218d59 jae 0x10218d84 */
  if (!C.cf) goto L_10218d84;
  /* 10218d5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10218d5e inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10218d61 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 10218d63 cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10218d66 jne 0x10218d6f */
  if (!C.zf) goto L_10218d6f;
  /* 10218d68 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 10218d6b mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 10218d6e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10218d6f:;
  /* 10218d6f mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10218d71 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10218d72 mov ecx, eax */
  ECX = (EAX);
  /* 10218d74 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10218d7a sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10218d7c cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218d82 jl 0x10218d50 */
  if ((C.sf!=C.of)) goto L_10218d50;
L_10218d84:;
  /* 10218d84 mov edi, eax */
  EDI = (EAX);
  /* 10218d86 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10218d8c sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10218d8e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10218d91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10218d93 push eax */
  push32((uint32_t)(EAX));
  /* 10218d94 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10218d9a push edi */
  push32((uint32_t)(EDI));
  /* 10218d9b push eax */
  push32((uint32_t)(EAX));
  /* 10218d9c mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10218d9e push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 10218da1 call dword ptr [0x1021e084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e084))), 0x10218da7u);
  /* 10218da7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10218da9 je 0x10218dee */
  if (C.zf) goto L_10218dee;
  /* 10218dab mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10218dae add dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 10218db1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218db3 jl 0x10218dc0 */
  if ((C.sf!=C.of)) goto L_10218dc0;
  /* 10218db5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10218db8 sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10218dbb cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218dbe jb 0x10218d4a */
  if (C.cf) goto L_10218d4a;
L_10218dc0:;
  /* 10218dc0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10218dc2:;
  /* 10218dc2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10218dc5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218dc7 jne 0x10218e5d */
  if (!C.zf) goto L_10218e5d;
  /* 10218dcd cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218dd0 je 0x10218e34 */
  if (C.zf) goto L_10218e34;
  /* 10218dd2 push 5 */
  push32((uint32_t)(0x5u));
  /* 10218dd4 pop esi */
  ESI = (pop32());
  /* 10218dd5 cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218dd8 jne 0x10218e26 */
  if (!C.zf) goto L_10218e26;
  /* 10218dda call 0x1021bf71 */
  push32(0x10218ddfu); f_1021bf71();
  /* 10218ddf mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10218de5 call 0x1021bf7a */
  push32(0x10218deau); f_1021bf7a();
  /* 10218dea mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10218dec jmp 0x10218e2f */
  goto L_10218e2f;
L_10218dee:;
  /* 10218dee call dword ptr [0x1021e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e03c))), 0x10218df4u);
  /* 10218df4 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10218df7 jmp 0x10218dc0 */
  goto L_10218dc0;
L_10218df9:;
  /* 10218df9 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 10218dfc push edi */
  push32((uint32_t)(EDI));
  /* 10218dfd push ecx */
  push32((uint32_t)(ECX));
  /* 10218dfe push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10218e01 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10218e04 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 10218e06 call dword ptr [0x1021e084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e084))), 0x10218e0cu);
  /* 10218e0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10218e0e je 0x10218e1b */
  if (C.zf) goto L_10218e1b;
  /* 10218e10 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10218e13 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 10218e16 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10218e19 jmp 0x10218dc2 */
  goto L_10218dc2;
L_10218e1b:;
  /* 10218e1b call dword ptr [0x1021e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e03c))), 0x10218e21u);
  /* 10218e21 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10218e24 jmp 0x10218dc2 */
  goto L_10218dc2;
L_10218e26:;
  /* 10218e26 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10218e29 call 0x1021befe */
  push32(0x10218e2eu); f_1021befe();
  /* 10218e2e pop ecx */
  ECX = (pop32());
L_10218e2f:;
  /* 10218e2f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10218e32 jmp 0x10218e60 */
  goto L_10218e60;
L_10218e34:;
  /* 10218e34 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10218e36 test byte ptr [eax + esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10218e3b je 0x10218e49 */
  if (C.zf) goto L_10218e49;
  /* 10218e3d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10218e40 cmp byte ptr [eax], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10218e43 je 0x10218cf3 */
  if (C.zf) goto L_10218cf3;
L_10218e49:;
  /* 10218e49 call 0x1021bf71 */
  push32(0x10218e4eu); f_1021bf71();
  /* 10218e4e mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 10218e54 call 0x1021bf7a */
  push32(0x10218e59u); f_1021bf7a();
  /* 10218e59 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 10218e5b jmp 0x10218e2f */
  goto L_10218e2f;
L_10218e5d:;
  /* 10218e5d sub eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10218e60:;
  /* 10218e60 pop edi */
  EDI = (pop32());
  /* 10218e61 pop esi */
  ESI = (pop32());
  /* 10218e62 pop ebx */
  EBX = (pop32());
  /* 10218e63 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10218e64 ret  */
  ESPCHK(0x10218cdau, _esp0);
  ESP += 4; return;
}

/* FUN_10008e65 @ 0x10218e65 (68 bytes, 19 insns) */
void f_10218e65(void) {
  FTRACE(0x10218e65u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10218e65 inc dword ptr [0x102267a8] */
  { uint32_t _r=(r32((uint32_t)(0x102267a8)))+1; w32((uint32_t)(0x102267a8), (_r)); fl_inc(_r,32); }
  /* 10218e6b push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10218e70 call 0x1021a2af */
  push32(0x10218e75u); f_1021a2af();
  /* 10218e75 pop ecx */
  ECX = (pop32());
  /* 10218e76 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10218e7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10218e7c mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10218e7f je 0x10218e8e */
  if (C.zf) goto L_10218e8e;
  /* 10218e81 or dword ptr [ecx + 0xc], 8 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x8u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 10218e85 mov dword ptr [ecx + 0x18], 0x1000 */
  w32((uint32_t)(ECX + 0x18), (0x1000u));
  /* 10218e8c jmp 0x10218e9f */
  goto L_10218e9f;
L_10218e8e:;
  /* 10218e8e or dword ptr [ecx + 0xc], 4 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x4u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 10218e92 lea eax, [ecx + 0x14] */
  EAX = ((uint32_t)(ECX + 0x14));
  /* 10218e95 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10218e98 mov dword ptr [ecx + 0x18], 2 */
  w32((uint32_t)(ECX + 0x18), (0x2u));
L_10218e9f:;
  /* 10218e9f mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 10218ea2 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10218ea6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10218ea8 ret  */
  ESPCHK(0x10218e65u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ea9 @ 0x10218ea9 (41 bytes, 13 insns) */
void f_10218ea9(void) {
  FTRACE(0x10218ea9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10218ea9 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10218ead cmp eax, dword ptr [0x10227d40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10227d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218eb3 jb 0x10218eb8 */
  if (C.cf) goto L_10218eb8;
  /* 10218eb5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10218eb7 ret  */
  ESPCHK(0x10218ea9u, _esp0);
  ESP += 4; return;
L_10218eb8:;
  /* 10218eb8 mov ecx, eax */
  ECX = (EAX);
  /* 10218eba and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10218ebd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10218ec0 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10218ec3 mov ecx, dword ptr [ecx*4 + 0x10227c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10227c40)));
  /* 10218eca mov al, byte ptr [ecx + eax*4 + 4] */
  AL = (r8((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 10218ece and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10218ed1 ret  */
  ESPCHK(0x10218ea9u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f8e @ 0x10218f8e (47 bytes, 17 insns) */
void f_10218f8e(void) {
  FTRACE(0x10218f8eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10218f8e mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10218f92 mov ecx, 0x10220750 */
  ECX = (0x10220750u);
  /* 10218f97 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218f99 jb 0x10218fb2 */
  if (C.cf) goto L_10218fb2;
  /* 10218f9b cmp eax, 0x102209b0 */
  { uint32_t _a=(EAX),_b=(0x102209b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218fa0 ja 0x10218fb2 */
  if ((!C.cf&&!C.zf)) goto L_10218fb2;
  /* 10218fa2 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10218fa4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10218fa7 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10218faa push eax */
  push32((uint32_t)(EAX));
  /* 10218fab call 0x1021a013 */
  push32(0x10218fb0u); f_1021a013();
  /* 10218fb0 pop ecx */
  ECX = (pop32());
  /* 10218fb1 ret  */
  ESPCHK(0x10218f8eu, _esp0);
  ESP += 4; return;
L_10218fb2:;
  /* 10218fb2 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10218fb5 push eax */
  push32((uint32_t)(EAX));
  /* 10218fb6 call dword ptr [0x1021e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e00c))), 0x10218fbcu);
  /* 10218fbc ret  */
  ESPCHK(0x10218f8eu, _esp0);
  ESP += 4; return;
}

/* FUN_10008fbd @ 0x10218fbd (35 bytes, 13 insns) */
void f_10218fbd(void) {
  FTRACE(0x10218fbdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10218fbd mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10218fc1 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218fc4 jge 0x10218fd1 */
  if ((C.sf==C.of)) goto L_10218fd1;
  /* 10218fc6 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10218fc9 push eax */
  push32((uint32_t)(EAX));
  /* 10218fca call 0x1021a013 */
  push32(0x10218fcfu); f_1021a013();
  /* 10218fcf pop ecx */
  ECX = (pop32());
  /* 10218fd0 ret  */
  ESPCHK(0x10218fbdu, _esp0);
  ESP += 4; return;
L_10218fd1:;
  /* 10218fd1 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10218fd5 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10218fd8 push eax */
  push32((uint32_t)(EAX));
  /* 10218fd9 call dword ptr [0x1021e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e00c))), 0x10218fdfu);
  /* 10218fdf ret  */
  ESPCHK(0x10218fbdu, _esp0);
  ESP += 4; return;
}

/* FUN_10008fe0 @ 0x10218fe0 (47 bytes, 17 insns) */
void f_10218fe0(void) {
  FTRACE(0x10218fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10218fe0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10218fe4 mov ecx, 0x10220750 */
  ECX = (0x10220750u);
  /* 10218fe9 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218feb jb 0x10219004 */
  if (C.cf) goto L_10219004;
  /* 10218fed cmp eax, 0x102209b0 */
  { uint32_t _a=(EAX),_b=(0x102209b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10218ff2 ja 0x10219004 */
  if ((!C.cf&&!C.zf)) goto L_10219004;
  /* 10218ff4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10218ff6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10218ff9 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10218ffc push eax */
  push32((uint32_t)(EAX));
  /* 10218ffd call 0x1021a074 */
  push32(0x10219002u); f_1021a074();
  /* 10219002 pop ecx */
  ECX = (pop32());
  /* 10219003 ret  */
  ESPCHK(0x10218fe0u, _esp0);
  ESP += 4; return;
L_10219004:;
  /* 10219004 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10219007 push eax */
  push32((uint32_t)(EAX));
  /* 10219008 call dword ptr [0x1021e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e008))), 0x1021900eu);
  /* 1021900e ret  */
  ESPCHK(0x10218fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000900f @ 0x1021900f (35 bytes, 13 insns) */
void f_1021900f(void) {
  FTRACE(0x1021900fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1021900f mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10219013 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10219016 jge 0x10219023 */
  if ((C.sf==C.of)) goto L_10219023;
  /* 10219018 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021901b push eax */
  push32((uint32_t)(EAX));
  /* 1021901c call 0x1021a074 */
  push32(0x10219021u); f_1021a074();
  /* 10219021 pop ecx */
  ECX = (pop32());
  /* 10219022 ret  */
  ESPCHK(0x1021900fu, _esp0);
  ESP += 4; return;
L_10219023:;
  /* 10219023 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10219027 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021902a push eax */
  push32((uint32_t)(EAX));
  /* 1021902b call dword ptr [0x1021e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e008))), 0x10219031u);
  /* 10219031 ret  */
  ESPCHK(0x1021900fu, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10219040 (123 bytes, 44 insns) */
void f_10219040(void) {
  FTRACE(0x10219040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10219040 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10219044 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1021904a je 0x10219060 */
  if (C.zf) goto L_10219060;
L_1021904c:;
  /* 1021904c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1021904e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1021904f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10219051 je 0x10219093 */
  if (C.zf) goto L_10219093;
  /* 10219053 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10219059 jne 0x1021904c */
  if (!C.zf) goto L_1021904c;
  /* 1021905b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10219060:;
  /* 10219060 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10219062 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10219067 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10219069 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1021906c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1021906e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10219071 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10219076 je 0x10219060 */
  if (C.zf) goto L_10219060;
  /* 10219078 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1021907b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1021907d je 0x102190b1 */
  if (C.zf) goto L_102190b1;
  /* 1021907f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10219081 je 0x102190a7 */
  if (C.zf) goto L_102190a7;
  /* 10219083 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10219088 je 0x1021909d */
  if (C.zf) goto L_1021909d;
  /* 1021908a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1021908f je 0x10219093 */
  if (C.zf) goto L_10219093;
  /* 10219091 jmp 0x10219060 */
  goto L_10219060;
L_10219093:;
  /* 10219093 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10219096 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1021909a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021909c ret  */
  ESPCHK(0x10219040u, _esp0);
  ESP += 4; return;
L_1021909d:;
  /* 1021909d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 102190a0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102190a4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102190a6 ret  */
  ESPCHK(0x10219040u, _esp0);
  ESP += 4; return;
L_102190a7:;
  /* 102190a7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 102190aa mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102190ae sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102190b0 ret  */
  ESPCHK(0x10219040u, _esp0);
  ESP += 4; return;
L_102190b1:;
  /* 102190b1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 102190b4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102190b8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102190ba ret  */
  ESPCHK(0x10219040u, _esp0);
  ESP += 4; return;
}

/* FUN_100090bb @ 0x102190bb (89 bytes, 39 insns) */
void f_102190bb(void) {
  FTRACE(0x102190bbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102190bb push ebp */
  push32((uint32_t)(EBP));
  /* 102190bc mov ebp, esp */
  EBP = (ESP);
  /* 102190be push ebx */
  push32((uint32_t)(EBX));
  /* 102190bf push esi */
  push32((uint32_t)(ESI));
  /* 102190c0 mov esi, 0x102269b4 */
  ESI = (0x102269b4u);
  /* 102190c5 push edi */
  push32((uint32_t)(EDI));
  /* 102190c6 push esi */
  push32((uint32_t)(ESI));
  /* 102190c7 call dword ptr [0x1021e090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e090))), 0x102190cdu);
  /* 102190cd mov edi, dword ptr [0x1021e08c] */
  EDI = (r32((uint32_t)(0x1021e08c)));
  /* 102190d3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102190d5 cmp dword ptr [0x102269b0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x102269b0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102190db je 0x102190eb */
  if (C.zf) goto L_102190eb;
  /* 102190dd push esi */
  push32((uint32_t)(ESI));
  /* 102190de call edi */
  call_ind((uint32_t)(EDI), 0x102190e0u);
  /* 102190e0 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 102190e2 call 0x1021a013 */
  push32(0x102190e7u); f_1021a013();
  /* 102190e7 pop ecx */
  ECX = (pop32());
  /* 102190e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 102190ea pop ebx */
  EBX = (pop32());
L_102190eb:;
  /* 102190eb push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102190ee push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102190f1 call 0x10219114 */
  push32(0x102190f6u); f_10219114();
  /* 102190f6 pop ecx */
  ECX = (pop32());
  /* 102190f7 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 102190fa test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 102190fc pop ecx */
  ECX = (pop32());
  /* 102190fd je 0x10219109 */
  if (C.zf) goto L_10219109;
  /* 102190ff push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10219101 call 0x1021a074 */
  push32(0x10219106u); f_1021a074();
  /* 10219106 pop ecx */
  ECX = (pop32());
  /* 10219107 jmp 0x1021910c */
  goto L_1021910c;
L_10219109:;
  /* 10219109 push esi */
  push32((uint32_t)(ESI));
  /* 1021910a call edi */
  call_ind((uint32_t)(EDI), 0x1021910cu);
L_1021910c:;
  /* 1021910c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1021910f pop edi */
  EDI = (pop32());
  /* 10219110 pop esi */
  ESI = (pop32());
  /* 10219111 pop ebx */
  EBX = (pop32());
  /* 10219112 pop ebp */
  EBP = (pop32());
  /* 10219113 ret  */
  ESPCHK(0x102190bbu, _esp0);
  ESP += 4; return;
}

/* FUN_10009114 @ 0x10219114 (105 bytes, 38 insns) */
void f_10219114(void) {
  FTRACE(0x10219114u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10219114 push ebp */
  push32((uint32_t)(EBP));
  /* 10219115 mov ebp, esp */
  EBP = (ESP);
  /* 10219117 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1021911a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1021911c jne 0x10219120 */
  if (!C.zf) goto L_10219120;
  /* 1021911e pop ebp */
  EBP = (pop32());
  /* 1021911f ret  */
  ESPCHK(0x10219114u, _esp0);
  ESP += 4; return;
L_10219120:;
  /* 10219120 cmp dword ptr [0x10226838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10226838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10219127 jne 0x1021913b */
  if (!C.zf) goto L_1021913b;
  /* 10219129 mov cx, word ptr [ebp + 0xc] */
  CX = (r16((uint32_t)(EBP + 0xc)));
  /* 1021912d cmp cx, 0xff */
  { uint32_t _a=(CX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10219132 ja 0x1021916d */
  if ((!C.cf&&!C.zf)) goto L_1021916d;
  /* 10219134 push 1 */
  push32((uint32_t)(0x1u));
  /* 10219136 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10219138 pop eax */
  EAX = (pop32());
  /* 10219139 pop ebp */
  EBP = (pop32());
  /* 1021913a ret  */
  ESPCHK(0x10219114u, _esp0);
  ESP += 4; return;
L_1021913b:;
  /* 1021913b lea ecx, [ebp + 8] */
  ECX = ((uint32_t)(EBP + 0x8));
  /* 1021913e and dword ptr [ebp + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))&(0x0u); w32((uint32_t)(EBP + 0x8), (_r)); fl_logic(_r,32); }
  /* 10219142 push ecx */
  push32((uint32_t)(ECX));
  /* 10219143 push 0 */
  push32((uint32_t)(0x0u));
  /* 10219145 push dword ptr [0x10220be0] */
  push32((uint32_t)(r32((uint32_t)(0x10220be0))));
  /* 1021914b push eax */
  push32((uint32_t)(EAX));
  /* 1021914c lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1021914f push 1 */
  push32((uint32_t)(0x1u));
  /* 10219151 push eax */
  push32((uint32_t)(EAX));
  /* 10219152 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10219157 push dword ptr [0x10226848] */
  push32((uint32_t)(r32((uint32_t)(0x10226848))));
  /* 1021915d call dword ptr [0x1021e060] */
  call_ind((uint32_t)(r32((uint32_t)(0x1021e060))), 0x10219163u);
  /* 10219163 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10219165 je 0x1021916d */
  if (C.zf) goto L_1021916d;
  /* 10219167 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1021916b je 0x1021917b */
  if (C.zf) goto L_1021917b;
L_1021916d:;
  /* 1021916d call 0x1021bf71 */
  push32(0x10219172u); f_1021bf71();
  /* 10219172 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10219178 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1021917b:;
  /* 1021917b pop ebp */
  EBP = (pop32());
  /* 1021917c ret  */
  ESPCHK(0x10219114u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x10219180 (104 bytes, 43 insns) */
void f_10219180(void) {
  FTRACE(0x10219180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10219180 push ebx */
  push32((uint32_t)(EBX));
  /* 10219181 push esi */
  push32((uint32_t)(ESI));
  /* 10219182 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10219186 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10219188 jne 0x102191a2 */
  if (!C.zf) goto L_102191a2;
  /* 1021918a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1021918e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10219192 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10219194 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10219196 mov ebx, eax */
  EBX = (EAX);
  /* 10219198 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1021919c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1021919e mov edx, ebx */
  EDX = (EBX);
  /* 102191a0 jmp 0x102191e3 */
  goto L_102191e3;
L_102191a2:;
  /* 102191a2 mov ecx, eax */
  ECX = (EAX);
  /* 102191a4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 102191a8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 102191ac mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_102191b0:;
  /* 102191b0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 102191b2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 102191b4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 102191b6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 102191b8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102191ba jne 0x102191b0 */
  if (!C.zf) goto L_102191b0;
  /* 102191bc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 102191be mov esi, eax */
  ESI = (EAX);
  /* 102191c0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 102191c4 mov ecx, eax */
  ECX = (EAX);
  /* 102191c6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 102191ca mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 102191cc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102191ce jb 0x102191de */
  if (C.cf) goto L_102191de;
  /* 102191d0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102191d4 ja 0x102191de */
  if ((!C.cf&&!C.zf)) goto L_102191de;
  /* 102191d6 jb 0x102191df */
  if (C.cf) goto L_102191df;
  /* 102191d8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102191dc jbe 0x102191df */
  if ((C.cf||C.zf)) goto L_102191df;
L_102191de:;
  /* 102191de dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_102191df:;
  /* 102191df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102191e1 mov eax, esi */
  EAX = (ESI);
L_102191e3:;
  /* 102191e3 pop esi */
  ESI = (pop32());
  /* 102191e4 pop ebx */
  EBX = (pop32());
  /* 102191e5 ret 0x10 */
  ESPCHK(0x10219180u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x102191f0 (117 bytes, 44 insns) */
void f_102191f0(void) {
  FTRACE(0x102191f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102191f0 push ebx */
  push32((uint32_t)(EBX));
  /* 102191f1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 102191f5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102191f7 jne 0x10219211 */
  if (!C.zf) goto L_10219211;
  /* 102191f9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 102191fd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10219201 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10219203 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10219205 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10219209 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1021920b mov eax, edx */
  EAX = (EDX);
  /* 1021920d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1021920f jmp 0x10219261 */
  goto L_10219261;
L_10219211:;
  /* 10219211 mov ecx, eax */
  ECX = (EAX);
  /* 10219213 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 10219217 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1021921b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1021921f:;
  /* 1021921f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10219221 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10219223 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10219225 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10219227 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10219229 jne 0x1021921f */
  if (!C.zf) goto L_1021921f;
  /* 1021922b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1021922d mov ecx, eax */
  ECX = (EAX);
  /* 1021922f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10219233 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 10219234 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10219238 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1021923a jb 0x1021924a */
  if (C.cf) goto L_1021924a;
  /* 1021923c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10219240 ja 0x1021924a */
  if ((!C.cf&&!C.zf)) goto L_1021924a;
  /* 10219242 jb 0x10219252 */
  if (C.cf) goto L_10219252;
  /* 10219244 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10219248 jbe 0x10219252 */
  if ((C.cf||C.zf)) goto L_10219252;
L_1021924a:;
  /* 1021924a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021924e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10219252:;
  /* 10219252 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10219256 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1021925a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1021925c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1021925e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10219261:;
  /* 10219261 pop ebx */
  EBX = (pop32());
  /* 10219262 ret 0x10 */
  ESPCHK(0x102191f0u, _esp0);
  ESP += 20; return;
}

