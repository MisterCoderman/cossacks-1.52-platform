#include "recomp.h"

/* ProcessAI @ 0x10161000 (16 bytes, 3 insns) */
void f_10161000(void) {
  FTRACE(0x10161000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10161000 call dword ptr [0x10176560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176560))), 0x10161006u);
  /* 10161006 mov dword ptr [0x10176314], eax */
  w32((uint32_t)(0x10176314), (EAX));
  /* 1016100b jmp 0x10166d40 */
  f_10166d40(); return;
}

/* InitAI @ 0x10161010 (5595 bytes, 1470 insns) */
void f_10161010(void) {
  FTRACE(0x10161010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10161010 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161015 sub esp, 0x60 */
  { uint32_t _a=(ESP),_b=(0x60u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10161018 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016101a je 0x10161078 */
  if (C.zf) goto L_10161078;
  /* 1016101c push 0x1016ff54 */
  push32((uint32_t)(0x1016ff54u));
  /* 10161021 push 0x101760e8 */
  push32((uint32_t)(0x101760e8u));
  /* 10161026 call eax */
  call_ind((uint32_t)(EAX), 0x10161028u);
  /* 10161028 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 1016102d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161030 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161032 je 0x10161078 */
  if (C.zf) goto L_10161078;
  /* 10161034 push 0x1016ff4c */
  push32((uint32_t)(0x1016ff4cu));
  /* 10161039 push 0x10176088 */
  push32((uint32_t)(0x10176088u));
  /* 1016103e call eax */
  call_ind((uint32_t)(EAX), 0x10161040u);
  /* 10161040 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161045 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161048 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016104a je 0x10161078 */
  if (C.zf) goto L_10161078;
  /* 1016104c push 0x1016ff44 */
  push32((uint32_t)(0x1016ff44u));
  /* 10161051 push 0x101760e0 */
  push32((uint32_t)(0x101760e0u));
  /* 10161056 call eax */
  call_ind((uint32_t)(EAX), 0x10161058u);
  /* 10161058 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 1016105d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161060 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161062 je 0x10161078 */
  if (C.zf) goto L_10161078;
  /* 10161064 push 0x1016ff3c */
  push32((uint32_t)(0x1016ff3cu));
  /* 10161069 push 0x101760f0 */
  push32((uint32_t)(0x101760f0u));
  /* 1016106e call eax */
  call_ind((uint32_t)(EAX), 0x10161070u);
  /* 10161070 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161075 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10161078:;
  /* 10161078 mov ecx, dword ptr [0x10176458] */
  ECX = (r32((uint32_t)(0x10176458)));
  /* 1016107e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10161080 je 0x10161096 */
  if (C.zf) goto L_10161096;
  /* 10161082 push 0x1016ff30 */
  push32((uint32_t)(0x1016ff30u));
  /* 10161087 push 0x101736f0 */
  push32((uint32_t)(0x101736f0u));
  /* 1016108c call ecx */
  call_ind((uint32_t)(ECX), 0x1016108eu);
  /* 1016108e mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161093 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10161096:;
  /* 10161096 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161098 je 0x10161322 */
  if (C.zf) goto L_10161322;
  /* 1016109e push 0x1016ff1c */
  push32((uint32_t)(0x1016ff1cu));
  /* 101610a3 push 0x10173960 */
  push32((uint32_t)(0x10173960u));
  /* 101610a8 call eax */
  call_ind((uint32_t)(EAX), 0x101610aau);
  /* 101610aa mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 101610af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101610b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101610b4 je 0x10161322 */
  if (C.zf) goto L_10161322;
  /* 101610ba push 0x1016ff08 */
  push32((uint32_t)(0x1016ff08u));
  /* 101610bf push 0x10173958 */
  push32((uint32_t)(0x10173958u));
  /* 101610c4 call eax */
  call_ind((uint32_t)(EAX), 0x101610c6u);
  /* 101610c6 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 101610cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101610ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101610d0 je 0x10161322 */
  if (C.zf) goto L_10161322;
  /* 101610d6 push 0x1016fef4 */
  push32((uint32_t)(0x1016fef4u));
  /* 101610db push 0x10173950 */
  push32((uint32_t)(0x10173950u));
  /* 101610e0 call eax */
  call_ind((uint32_t)(EAX), 0x101610e2u);
  /* 101610e2 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 101610e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101610ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101610ec je 0x10161322 */
  if (C.zf) goto L_10161322;
  /* 101610f2 push 0x1016fee0 */
  push32((uint32_t)(0x1016fee0u));
  /* 101610f7 push 0x10173998 */
  push32((uint32_t)(0x10173998u));
  /* 101610fc call eax */
  call_ind((uint32_t)(EAX), 0x101610feu);
  /* 101610fe mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161103 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161106 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161108 je 0x10161322 */
  if (C.zf) goto L_10161322;
  /* 1016110e push 0x1016fecc */
  push32((uint32_t)(0x1016feccu));
  /* 10161113 push 0x10173988 */
  push32((uint32_t)(0x10173988u));
  /* 10161118 call eax */
  call_ind((uint32_t)(EAX), 0x1016111au);
  /* 1016111a mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 1016111f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161122 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161124 je 0x10161322 */
  if (C.zf) goto L_10161322;
  /* 1016112a push 0x1016feb8 */
  push32((uint32_t)(0x1016feb8u));
  /* 1016112f push 0x10173980 */
  push32((uint32_t)(0x10173980u));
  /* 10161134 call eax */
  call_ind((uint32_t)(EAX), 0x10161136u);
  /* 10161136 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 1016113b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016113e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161140 je 0x10161322 */
  if (C.zf) goto L_10161322;
  /* 10161146 push 0x1016fea4 */
  push32((uint32_t)(0x1016fea4u));
  /* 1016114b push 0x10173738 */
  push32((uint32_t)(0x10173738u));
  /* 10161150 call eax */
  call_ind((uint32_t)(EAX), 0x10161152u);
  /* 10161152 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161157 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016115a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016115c je 0x10161322 */
  if (C.zf) goto L_10161322;
  /* 10161162 push 0x1016fe90 */
  push32((uint32_t)(0x1016fe90u));
  /* 10161167 push 0x10173728 */
  push32((uint32_t)(0x10173728u));
  /* 1016116c call eax */
  call_ind((uint32_t)(EAX), 0x1016116eu);
  /* 1016116e mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161173 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161176 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161178 je 0x10161322 */
  if (C.zf) goto L_10161322;
  /* 1016117e push 0x1016fe7c */
  push32((uint32_t)(0x1016fe7cu));
  /* 10161183 push 0x10173920 */
  push32((uint32_t)(0x10173920u));
  /* 10161188 call eax */
  call_ind((uint32_t)(EAX), 0x1016118au);
  /* 1016118a mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 1016118f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161192 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161194 je 0x10161322 */
  if (C.zf) goto L_10161322;
  /* 1016119a push 0x1016fe68 */
  push32((uint32_t)(0x1016fe68u));
  /* 1016119f push 0x10173918 */
  push32((uint32_t)(0x10173918u));
  /* 101611a4 call eax */
  call_ind((uint32_t)(EAX), 0x101611a6u);
  /* 101611a6 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 101611ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101611ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101611b0 je 0x10161322 */
  if (C.zf) goto L_10161322;
  /* 101611b6 push 0x1016fe54 */
  push32((uint32_t)(0x1016fe54u));
  /* 101611bb push 0x10173910 */
  push32((uint32_t)(0x10173910u));
  /* 101611c0 call eax */
  call_ind((uint32_t)(EAX), 0x101611c2u);
  /* 101611c2 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 101611c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101611ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101611cc je 0x10161322 */
  if (C.zf) goto L_10161322;
  /* 101611d2 push 0x1016fe40 */
  push32((uint32_t)(0x1016fe40u));
  /* 101611d7 push 0x10173908 */
  push32((uint32_t)(0x10173908u));
  /* 101611dc call eax */
  call_ind((uint32_t)(EAX), 0x101611deu);
  /* 101611de mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 101611e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101611e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101611e8 je 0x10161322 */
  if (C.zf) goto L_10161322;
  /* 101611ee push 0x1016ff1c */
  push32((uint32_t)(0x1016ff1cu));
  /* 101611f3 push 0x10173960 */
  push32((uint32_t)(0x10173960u));
  /* 101611f8 call eax */
  call_ind((uint32_t)(EAX), 0x101611fau);
  /* 101611fa mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 101611ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161202 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161204 je 0x10161322 */
  if (C.zf) goto L_10161322;
  /* 1016120a push 0x1016ff08 */
  push32((uint32_t)(0x1016ff08u));
  /* 1016120f push 0x10173958 */
  push32((uint32_t)(0x10173958u));
  /* 10161214 call eax */
  call_ind((uint32_t)(EAX), 0x10161216u);
  /* 10161216 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 1016121b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016121e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161220 je 0x10161322 */
  if (C.zf) goto L_10161322;
  /* 10161226 push 0x1016fef4 */
  push32((uint32_t)(0x1016fef4u));
  /* 1016122b push 0x10173950 */
  push32((uint32_t)(0x10173950u));
  /* 10161230 call eax */
  call_ind((uint32_t)(EAX), 0x10161232u);
  /* 10161232 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161237 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016123a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016123c je 0x10161322 */
  if (C.zf) goto L_10161322;
  /* 10161242 push 0x1016fee0 */
  push32((uint32_t)(0x1016fee0u));
  /* 10161247 push 0x10173998 */
  push32((uint32_t)(0x10173998u));
  /* 1016124c call eax */
  call_ind((uint32_t)(EAX), 0x1016124eu);
  /* 1016124e mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161253 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161256 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161258 je 0x10161322 */
  if (C.zf) goto L_10161322;
  /* 1016125e push 0x1016fecc */
  push32((uint32_t)(0x1016feccu));
  /* 10161263 push 0x10173988 */
  push32((uint32_t)(0x10173988u));
  /* 10161268 call eax */
  call_ind((uint32_t)(EAX), 0x1016126au);
  /* 1016126a mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 1016126f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161272 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161274 je 0x10161322 */
  if (C.zf) goto L_10161322;
  /* 1016127a push 0x1016feb8 */
  push32((uint32_t)(0x1016feb8u));
  /* 1016127f push 0x10173980 */
  push32((uint32_t)(0x10173980u));
  /* 10161284 call eax */
  call_ind((uint32_t)(EAX), 0x10161286u);
  /* 10161286 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 1016128b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016128e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161290 je 0x10161322 */
  if (C.zf) goto L_10161322;
  /* 10161296 push 0x1016fea4 */
  push32((uint32_t)(0x1016fea4u));
  /* 1016129b push 0x10173738 */
  push32((uint32_t)(0x10173738u));
  /* 101612a0 call eax */
  call_ind((uint32_t)(EAX), 0x101612a2u);
  /* 101612a2 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 101612a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101612aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101612ac je 0x10161322 */
  if (C.zf) goto L_10161322;
  /* 101612ae push 0x1016fe90 */
  push32((uint32_t)(0x1016fe90u));
  /* 101612b3 push 0x10173728 */
  push32((uint32_t)(0x10173728u));
  /* 101612b8 call eax */
  call_ind((uint32_t)(EAX), 0x101612bau);
  /* 101612ba mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 101612bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101612c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101612c4 je 0x10161322 */
  if (C.zf) goto L_10161322;
  /* 101612c6 push 0x1016fe7c */
  push32((uint32_t)(0x1016fe7cu));
  /* 101612cb push 0x10173920 */
  push32((uint32_t)(0x10173920u));
  /* 101612d0 call eax */
  call_ind((uint32_t)(EAX), 0x101612d2u);
  /* 101612d2 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 101612d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101612da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101612dc je 0x10161322 */
  if (C.zf) goto L_10161322;
  /* 101612de push 0x1016fe68 */
  push32((uint32_t)(0x1016fe68u));
  /* 101612e3 push 0x10173918 */
  push32((uint32_t)(0x10173918u));
  /* 101612e8 call eax */
  call_ind((uint32_t)(EAX), 0x101612eau);
  /* 101612ea mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 101612ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101612f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101612f4 je 0x10161322 */
  if (C.zf) goto L_10161322;
  /* 101612f6 push 0x1016fe54 */
  push32((uint32_t)(0x1016fe54u));
  /* 101612fb push 0x10173910 */
  push32((uint32_t)(0x10173910u));
  /* 10161300 call eax */
  call_ind((uint32_t)(EAX), 0x10161302u);
  /* 10161302 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161307 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016130a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016130c je 0x10161322 */
  if (C.zf) goto L_10161322;
  /* 1016130e push 0x1016fe40 */
  push32((uint32_t)(0x1016fe40u));
  /* 10161313 push 0x10173908 */
  push32((uint32_t)(0x10173908u));
  /* 10161318 call eax */
  call_ind((uint32_t)(EAX), 0x1016131au);
  /* 1016131a mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 1016131f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10161322:;
  /* 10161322 mov ecx, dword ptr [0x10176458] */
  ECX = (r32((uint32_t)(0x10176458)));
  /* 10161328 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1016132a je 0x10161340 */
  if (C.zf) goto L_10161340;
  /* 1016132c push 0x1016fe30 */
  push32((uint32_t)(0x1016fe30u));
  /* 10161331 push 0x101736e0 */
  push32((uint32_t)(0x101736e0u));
  /* 10161336 call ecx */
  call_ind((uint32_t)(ECX), 0x10161338u);
  /* 10161338 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 1016133d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10161340:;
  /* 10161340 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161342 je 0x101615c7 */
  if (C.zf) goto L_101615c7;
  /* 10161348 push 0x1016fe1c */
  push32((uint32_t)(0x1016fe1cu));
  /* 1016134d push 0x101736b8 */
  push32((uint32_t)(0x101736b8u));
  /* 10161352 call eax */
  call_ind((uint32_t)(EAX), 0x10161354u);
  /* 10161354 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161359 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016135c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016135e je 0x101615c7 */
  if (C.zf) goto L_101615c7;
  /* 10161364 push 0x1016fe04 */
  push32((uint32_t)(0x1016fe04u));
  /* 10161369 push 0x101736b0 */
  push32((uint32_t)(0x101736b0u));
  /* 1016136e call eax */
  call_ind((uint32_t)(EAX), 0x10161370u);
  /* 10161370 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161375 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161378 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016137a je 0x101615c7 */
  if (C.zf) goto L_101615c7;
  /* 10161380 push 0x1016fdec */
  push32((uint32_t)(0x1016fdecu));
  /* 10161385 push 0x101736a8 */
  push32((uint32_t)(0x101736a8u));
  /* 1016138a call eax */
  call_ind((uint32_t)(EAX), 0x1016138cu);
  /* 1016138c mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161391 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161394 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161396 je 0x101615c7 */
  if (C.zf) goto L_101615c7;
  /* 1016139c push 0x1016fdd4 */
  push32((uint32_t)(0x1016fdd4u));
  /* 101613a1 push 0x10176378 */
  push32((uint32_t)(0x10176378u));
  /* 101613a6 call eax */
  call_ind((uint32_t)(EAX), 0x101613a8u);
  /* 101613a8 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 101613ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101613b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101613b2 je 0x101615c7 */
  if (C.zf) goto L_101615c7;
  /* 101613b8 push 0x1016fdbc */
  push32((uint32_t)(0x1016fdbcu));
  /* 101613bd push 0x10176370 */
  push32((uint32_t)(0x10176370u));
  /* 101613c2 call eax */
  call_ind((uint32_t)(EAX), 0x101613c4u);
  /* 101613c4 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 101613c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101613cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101613ce je 0x101615c7 */
  if (C.zf) goto L_101615c7;
  /* 101613d4 push 0x1016fda4 */
  push32((uint32_t)(0x1016fda4u));
  /* 101613d9 push 0x10176368 */
  push32((uint32_t)(0x10176368u));
  /* 101613de call eax */
  call_ind((uint32_t)(EAX), 0x101613e0u);
  /* 101613e0 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 101613e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101613e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101613ea je 0x101615c7 */
  if (C.zf) goto L_101615c7;
  /* 101613f0 push 0x1016fd90 */
  push32((uint32_t)(0x1016fd90u));
  /* 101613f5 push 0x101763f0 */
  push32((uint32_t)(0x101763f0u));
  /* 101613fa call eax */
  call_ind((uint32_t)(EAX), 0x101613fcu);
  /* 101613fc mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161401 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161404 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161406 je 0x101615c7 */
  if (C.zf) goto L_101615c7;
  /* 1016140c push 0x1016fd78 */
  push32((uint32_t)(0x1016fd78u));
  /* 10161411 push 0x101763e8 */
  push32((uint32_t)(0x101763e8u));
  /* 10161416 call eax */
  call_ind((uint32_t)(EAX), 0x10161418u);
  /* 10161418 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 1016141d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161420 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161422 je 0x101615c7 */
  if (C.zf) goto L_101615c7;
  /* 10161428 push 0x1016fd60 */
  push32((uint32_t)(0x1016fd60u));
  /* 1016142d push 0x10176438 */
  push32((uint32_t)(0x10176438u));
  /* 10161432 call eax */
  call_ind((uint32_t)(EAX), 0x10161434u);
  /* 10161434 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161439 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016143c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016143e je 0x101615c7 */
  if (C.zf) goto L_101615c7;
  /* 10161444 push 0x1016fd48 */
  push32((uint32_t)(0x1016fd48u));
  /* 10161449 push 0x10176430 */
  push32((uint32_t)(0x10176430u));
  /* 1016144e call eax */
  call_ind((uint32_t)(EAX), 0x10161450u);
  /* 10161450 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161455 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161458 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016145a je 0x101615c7 */
  if (C.zf) goto L_101615c7;
  /* 10161460 push 0x1016fd30 */
  push32((uint32_t)(0x1016fd30u));
  /* 10161465 push 0x10176428 */
  push32((uint32_t)(0x10176428u));
  /* 1016146a call eax */
  call_ind((uint32_t)(EAX), 0x1016146cu);
  /* 1016146c mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161471 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161474 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161476 je 0x101615c7 */
  if (C.zf) goto L_101615c7;
  /* 1016147c push 0x1016fd18 */
  push32((uint32_t)(0x1016fd18u));
  /* 10161481 push 0x10176420 */
  push32((uint32_t)(0x10176420u));
  /* 10161486 call eax */
  call_ind((uint32_t)(EAX), 0x10161488u);
  /* 10161488 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 1016148d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161490 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161492 je 0x101615c7 */
  if (C.zf) goto L_101615c7;
  /* 10161498 push 0x1016fe1c */
  push32((uint32_t)(0x1016fe1cu));
  /* 1016149d push 0x101736b8 */
  push32((uint32_t)(0x101736b8u));
  /* 101614a2 call eax */
  call_ind((uint32_t)(EAX), 0x101614a4u);
  /* 101614a4 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 101614a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101614ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101614ae je 0x101615c7 */
  if (C.zf) goto L_101615c7;
  /* 101614b4 push 0x1016fe04 */
  push32((uint32_t)(0x1016fe04u));
  /* 101614b9 push 0x101736b0 */
  push32((uint32_t)(0x101736b0u));
  /* 101614be call eax */
  call_ind((uint32_t)(EAX), 0x101614c0u);
  /* 101614c0 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 101614c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101614c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101614ca je 0x101615c7 */
  if (C.zf) goto L_101615c7;
  /* 101614d0 push 0x1016fdec */
  push32((uint32_t)(0x1016fdecu));
  /* 101614d5 push 0x101736a8 */
  push32((uint32_t)(0x101736a8u));
  /* 101614da call eax */
  call_ind((uint32_t)(EAX), 0x101614dcu);
  /* 101614dc mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 101614e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101614e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101614e6 je 0x101615c7 */
  if (C.zf) goto L_101615c7;
  /* 101614ec push 0x1016fdd4 */
  push32((uint32_t)(0x1016fdd4u));
  /* 101614f1 push 0x10176378 */
  push32((uint32_t)(0x10176378u));
  /* 101614f6 call eax */
  call_ind((uint32_t)(EAX), 0x101614f8u);
  /* 101614f8 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 101614fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161500 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161502 je 0x101615c7 */
  if (C.zf) goto L_101615c7;
  /* 10161508 push 0x1016fdbc */
  push32((uint32_t)(0x1016fdbcu));
  /* 1016150d push 0x10176370 */
  push32((uint32_t)(0x10176370u));
  /* 10161512 call eax */
  call_ind((uint32_t)(EAX), 0x10161514u);
  /* 10161514 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161519 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016151c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016151e je 0x101615c7 */
  if (C.zf) goto L_101615c7;
  /* 10161524 push 0x1016fda4 */
  push32((uint32_t)(0x1016fda4u));
  /* 10161529 push 0x10176368 */
  push32((uint32_t)(0x10176368u));
  /* 1016152e call eax */
  call_ind((uint32_t)(EAX), 0x10161530u);
  /* 10161530 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161535 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161538 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016153a je 0x101615c7 */
  if (C.zf) goto L_101615c7;
  /* 10161540 push 0x1016fd90 */
  push32((uint32_t)(0x1016fd90u));
  /* 10161545 push 0x101763f0 */
  push32((uint32_t)(0x101763f0u));
  /* 1016154a call eax */
  call_ind((uint32_t)(EAX), 0x1016154cu);
  /* 1016154c mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161551 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161554 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161556 je 0x101615c7 */
  if (C.zf) goto L_101615c7;
  /* 10161558 push 0x1016fd78 */
  push32((uint32_t)(0x1016fd78u));
  /* 1016155d push 0x101763e8 */
  push32((uint32_t)(0x101763e8u));
  /* 10161562 call eax */
  call_ind((uint32_t)(EAX), 0x10161564u);
  /* 10161564 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161569 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016156c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016156e je 0x101615c7 */
  if (C.zf) goto L_101615c7;
  /* 10161570 push 0x1016fd60 */
  push32((uint32_t)(0x1016fd60u));
  /* 10161575 push 0x10176438 */
  push32((uint32_t)(0x10176438u));
  /* 1016157a call eax */
  call_ind((uint32_t)(EAX), 0x1016157cu);
  /* 1016157c mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161581 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161584 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161586 je 0x101615c7 */
  if (C.zf) goto L_101615c7;
  /* 10161588 push 0x1016fd48 */
  push32((uint32_t)(0x1016fd48u));
  /* 1016158d push 0x10176430 */
  push32((uint32_t)(0x10176430u));
  /* 10161592 call eax */
  call_ind((uint32_t)(EAX), 0x10161594u);
  /* 10161594 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161599 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016159c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016159e je 0x101615c7 */
  if (C.zf) goto L_101615c7;
  /* 101615a0 push 0x1016fd30 */
  push32((uint32_t)(0x1016fd30u));
  /* 101615a5 push 0x10176428 */
  push32((uint32_t)(0x10176428u));
  /* 101615aa call eax */
  call_ind((uint32_t)(EAX), 0x101615acu);
  /* 101615ac mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 101615b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101615b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101615b6 je 0x101615c7 */
  if (C.zf) goto L_101615c7;
  /* 101615b8 push 0x1016fd18 */
  push32((uint32_t)(0x1016fd18u));
  /* 101615bd push 0x10176420 */
  push32((uint32_t)(0x10176420u));
  /* 101615c2 call eax */
  call_ind((uint32_t)(EAX), 0x101615c4u);
  /* 101615c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101615c7:;
  /* 101615c7 mov eax, dword ptr [0x10176458] */
  EAX = (r32((uint32_t)(0x10176458)));
  /* 101615cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101615ce je 0x101615df */
  if (C.zf) goto L_101615df;
  /* 101615d0 push 0x1016fd04 */
  push32((uint32_t)(0x1016fd04u));
  /* 101615d5 push 0x10176040 */
  push32((uint32_t)(0x10176040u));
  /* 101615da call eax */
  call_ind((uint32_t)(EAX), 0x101615dcu);
  /* 101615dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101615df:;
  /* 101615df call dword ptr [0x10176560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176560))), 0x101615e5u);
  /* 101615e5 mov dword ptr [0x10176314], eax */
  w32((uint32_t)(0x10176314), (EAX));
  /* 101615ea call 0x101626c0 */
  push32(0x101615efu); f_101626c0();
  /* 101615ef mov ecx, eax */
  ECX = (EAX);
  /* 101615f1 mov eax, dword ptr [0x10176314] */
  EAX = (r32((uint32_t)(0x10176314)));
  /* 101615f6 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 101615fc mov dword ptr [eax*4 + 0x10175ff8], ecx */
  w32((uint32_t)(EAX*4 + 0x10175ff8), (ECX));
  /* 10161603 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 10161606 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 10161609 lea edx, [ecx + ecx*4] */
  EDX = ((uint32_t)(ECX + ECX*4));
  /* 1016160c lea eax, [eax + edx*2] */
  EAX = ((uint32_t)(EAX + EDX*2));
  /* 1016160f shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10161612 mov dword ptr [eax + 0x10173b50], 0 */
  w32((uint32_t)(EAX + 0x10173b50), (0x0u));
  /* 1016161c mov dword ptr [eax + 0x10173ce4], 0 */
  w32((uint32_t)(EAX + 0x10173ce4), (0x0u));
  /* 10161626 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 1016162b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016162d je 0x1016163e */
  if (C.zf) goto L_1016163e;
  /* 1016162f push 0x1016fce8 */
  push32((uint32_t)(0x1016fce8u));
  /* 10161634 push 0x10176130 */
  push32((uint32_t)(0x10176130u));
  /* 10161639 call eax */
  call_ind((uint32_t)(EAX), 0x1016163bu);
  /* 1016163b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1016163e:;
  /* 1016163e mov eax, dword ptr [0x10176458] */
  EAX = (r32((uint32_t)(0x10176458)));
  /* 10161643 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161645 je 0x10161656 */
  if (C.zf) goto L_10161656;
  /* 10161647 push 0x1016fcd4 */
  push32((uint32_t)(0x1016fcd4u));
  /* 1016164c push 0x101738e8 */
  push32((uint32_t)(0x101738e8u));
  /* 10161651 call eax */
  call_ind((uint32_t)(EAX), 0x10161653u);
  /* 10161653 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10161656:;
  /* 10161656 push ebp */
  push32((uint32_t)(EBP));
  /* 10161657 push esi */
  push32((uint32_t)(ESI));
  /* 10161658 push edi */
  push32((uint32_t)(EDI));
  /* 10161659 call 0x101626c0 */
  push32(0x1016165eu); f_101626c0();
  /* 1016165e mov edx, eax */
  EDX = (EAX);
  /* 10161660 and eax, 6 */
  { uint32_t _r=(EAX)&(0x6u); EAX = (_r); fl_logic(_r,32); }
  /* 10161663 cmp al, 2 */
  { uint32_t _a=(AL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10161665 lea ebp, [esp + 0xc] */
  EBP = ((uint32_t)(ESP + 0xc));
  /* 10161669 mov edi, 0x1016ff30 */
  EDI = (0x1016ff30u);
  /* 1016166e je 0x10161675 */
  if (C.zf) goto L_10161675;
  /* 10161670 mov edi, 0x1016fcc4 */
  EDI = (0x1016fcc4u);
L_10161675:;
  /* 10161675 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10161678 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016167a repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1016167c not ecx */
  ECX = (~(ECX));
  /* 1016167e sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10161680 and edx, 0x18 */
  { uint32_t _r=(EDX)&(0x18u); EDX = (_r); fl_logic(_r,32); }
  /* 10161683 mov eax, ecx */
  EAX = (ECX);
  /* 10161685 mov esi, edi */
  ESI = (EDI);
  /* 10161687 mov edi, ebp */
  EDI = (EBP);
  /* 10161689 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1016168c rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1016168e mov ecx, eax */
  ECX = (EAX);
  /* 10161690 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10161693 cmp dl, 8 */
  { uint32_t _a=(DL),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10161696 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 10161698 lea edx, [esp + 0x3c] */
  EDX = ((uint32_t)(ESP + 0x3c));
  /* 1016169c mov edi, 0x1016fcac */
  EDI = (0x1016fcacu);
  /* 101616a1 je 0x101616a8 */
  if (C.zf) goto L_101616a8;
  /* 101616a3 mov edi, 0x1016fc98 */
  EDI = (0x1016fc98u);
L_101616a8:;
  /* 101616a8 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 101616ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101616ad repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 101616af not ecx */
  ECX = (~(ECX));
  /* 101616b1 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101616b3 mov eax, ecx */
  EAX = (ECX);
  /* 101616b5 mov esi, edi */
  ESI = (EDI);
  /* 101616b7 mov edi, edx */
  EDI = (EDX);
  /* 101616b9 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101616bc rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101616be mov ecx, eax */
  ECX = (EAX);
  /* 101616c0 mov eax, dword ptr [0x10176458] */
  EAX = (r32((uint32_t)(0x10176458)));
  /* 101616c5 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 101616c8 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 101616ca pop edi */
  EDI = (pop32());
  /* 101616cb pop esi */
  ESI = (pop32());
  /* 101616cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101616ce pop ebp */
  EBP = (pop32());
  /* 101616cf je 0x10161715 */
  if (C.zf) goto L_10161715;
  /* 101616d1 push 0x1016fc80 */
  push32((uint32_t)(0x1016fc80u));
  /* 101616d6 push 0x101762d8 */
  push32((uint32_t)(0x101762d8u));
  /* 101616db call eax */
  call_ind((uint32_t)(EAX), 0x101616ddu);
  /* 101616dd mov eax, dword ptr [0x10176458] */
  EAX = (r32((uint32_t)(0x10176458)));
  /* 101616e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101616e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101616e7 je 0x10161715 */
  if (C.zf) goto L_10161715;
  /* 101616e9 push 0x1016fc68 */
  push32((uint32_t)(0x1016fc68u));
  /* 101616ee push 0x10176388 */
  push32((uint32_t)(0x10176388u));
  /* 101616f3 call eax */
  call_ind((uint32_t)(EAX), 0x101616f5u);
  /* 101616f5 mov eax, dword ptr [0x10176458] */
  EAX = (r32((uint32_t)(0x10176458)));
  /* 101616fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101616fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101616ff je 0x10161715 */
  if (C.zf) goto L_10161715;
  /* 10161701 push 0x1016fc54 */
  push32((uint32_t)(0x1016fc54u));
  /* 10161706 push 0x10173760 */
  push32((uint32_t)(0x10173760u));
  /* 1016170b call eax */
  call_ind((uint32_t)(EAX), 0x1016170du);
  /* 1016170d mov eax, dword ptr [0x10176458] */
  EAX = (r32((uint32_t)(0x10176458)));
  /* 10161712 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10161715:;
  /* 10161715 mov ecx, dword ptr [0x1017645c] */
  ECX = (r32((uint32_t)(0x1017645c)));
  /* 1016171b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1016171d je 0x1016174b */
  if (C.zf) goto L_1016174b;
  /* 1016171f push 0x1016fc3c */
  push32((uint32_t)(0x1016fc3cu));
  /* 10161724 push 0x101762c0 */
  push32((uint32_t)(0x101762c0u));
  /* 10161729 call ecx */
  call_ind((uint32_t)(ECX), 0x1016172bu);
  /* 1016172b mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161730 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161733 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161735 je 0x10161746 */
  if (C.zf) goto L_10161746;
  /* 10161737 push 0x1016fc24 */
  push32((uint32_t)(0x1016fc24u));
  /* 1016173c push 0x10176028 */
  push32((uint32_t)(0x10176028u));
  /* 10161741 call eax */
  call_ind((uint32_t)(EAX), 0x10161743u);
  /* 10161743 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10161746:;
  /* 10161746 mov eax, dword ptr [0x10176458] */
  EAX = (r32((uint32_t)(0x10176458)));
L_1016174b:;
  /* 1016174b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016174d je 0x1016175e */
  if (C.zf) goto L_1016175e;
  /* 1016174f push 0x1016fc10 */
  push32((uint32_t)(0x1016fc10u));
  /* 10161754 push 0x101736a0 */
  push32((uint32_t)(0x101736a0u));
  /* 10161759 call eax */
  call_ind((uint32_t)(EAX), 0x1016175bu);
  /* 1016175b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1016175e:;
  /* 1016175e push 0x1016fbfc */
  push32((uint32_t)(0x1016fbfcu));
  /* 10161763 call 0x10162690 */
  push32(0x10161768u); f_10162690();
  /* 10161768 mov eax, dword ptr [0x10176458] */
  EAX = (r32((uint32_t)(0x10176458)));
  /* 1016176d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161770 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161772 je 0x10161a9f */
  if (C.zf) goto L_10161a9f;
  /* 10161778 push 0x1016fbfc */
  push32((uint32_t)(0x1016fbfcu));
  /* 1016177d push 0x101736e8 */
  push32((uint32_t)(0x101736e8u));
  /* 10161782 call eax */
  call_ind((uint32_t)(EAX), 0x10161784u);
  /* 10161784 mov eax, dword ptr [0x10176458] */
  EAX = (r32((uint32_t)(0x10176458)));
  /* 10161789 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016178c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016178e je 0x10161a9f */
  if (C.zf) goto L_10161a9f;
  /* 10161794 push 0x1016fbe8 */
  push32((uint32_t)(0x1016fbe8u));
  /* 10161799 push 0x101761f0 */
  push32((uint32_t)(0x101761f0u));
  /* 1016179e call eax */
  call_ind((uint32_t)(EAX), 0x101617a0u);
  /* 101617a0 mov eax, dword ptr [0x10176458] */
  EAX = (r32((uint32_t)(0x10176458)));
  /* 101617a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101617a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101617aa je 0x10161a9f */
  if (C.zf) goto L_10161a9f;
  /* 101617b0 push 0x1016fbd4 */
  push32((uint32_t)(0x1016fbd4u));
  /* 101617b5 push 0x101761c0 */
  push32((uint32_t)(0x101761c0u));
  /* 101617ba call eax */
  call_ind((uint32_t)(EAX), 0x101617bcu);
  /* 101617bc mov eax, dword ptr [0x10176458] */
  EAX = (r32((uint32_t)(0x10176458)));
  /* 101617c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101617c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101617c6 je 0x10161a9f */
  if (C.zf) goto L_10161a9f;
  /* 101617cc push 0x1016fcac */
  push32((uint32_t)(0x1016fcacu));
  /* 101617d1 push 0x10176140 */
  push32((uint32_t)(0x10176140u));
  /* 101617d6 call eax */
  call_ind((uint32_t)(EAX), 0x101617d8u);
  /* 101617d8 mov eax, dword ptr [0x10176458] */
  EAX = (r32((uint32_t)(0x10176458)));
  /* 101617dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101617e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101617e2 je 0x10161a9f */
  if (C.zf) goto L_10161a9f;
  /* 101617e8 lea ecx, [esp] */
  ECX = ((uint32_t)(ESP));
  /* 101617ec push ecx */
  push32((uint32_t)(ECX));
  /* 101617ed push 0x10176410 */
  push32((uint32_t)(0x10176410u));
  /* 101617f2 call eax */
  call_ind((uint32_t)(EAX), 0x101617f4u);
  /* 101617f4 mov eax, dword ptr [0x10176458] */
  EAX = (r32((uint32_t)(0x10176458)));
  /* 101617f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101617fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101617fe je 0x10161a9f */
  if (C.zf) goto L_10161a9f;
  /* 10161804 push 0x1016fbc0 */
  push32((uint32_t)(0x1016fbc0u));
  /* 10161809 push 0x10176390 */
  push32((uint32_t)(0x10176390u));
  /* 1016180e call eax */
  call_ind((uint32_t)(EAX), 0x10161810u);
  /* 10161810 mov eax, dword ptr [0x10176458] */
  EAX = (r32((uint32_t)(0x10176458)));
  /* 10161815 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161818 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016181a je 0x10161a9f */
  if (C.zf) goto L_10161a9f;
  /* 10161820 lea edx, [esp + 0x30] */
  EDX = ((uint32_t)(ESP + 0x30));
  /* 10161824 push edx */
  push32((uint32_t)(EDX));
  /* 10161825 push 0x10175fe0 */
  push32((uint32_t)(0x10175fe0u));
  /* 1016182a call eax */
  call_ind((uint32_t)(EAX), 0x1016182cu);
  /* 1016182c mov eax, dword ptr [0x10176458] */
  EAX = (r32((uint32_t)(0x10176458)));
  /* 10161831 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161834 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161836 je 0x10161a9f */
  if (C.zf) goto L_10161a9f;
  /* 1016183c push 0x1016fbb4 */
  push32((uint32_t)(0x1016fbb4u));
  /* 10161841 push 0x101763d0 */
  push32((uint32_t)(0x101763d0u));
  /* 10161846 call eax */
  call_ind((uint32_t)(EAX), 0x10161848u);
  /* 10161848 mov eax, dword ptr [0x10176458] */
  EAX = (r32((uint32_t)(0x10176458)));
  /* 1016184d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161850 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161852 je 0x10161a9f */
  if (C.zf) goto L_10161a9f;
  /* 10161858 push 0x1016fba8 */
  push32((uint32_t)(0x1016fba8u));
  /* 1016185d push 0x101736c8 */
  push32((uint32_t)(0x101736c8u));
  /* 10161862 call eax */
  call_ind((uint32_t)(EAX), 0x10161864u);
  /* 10161864 mov eax, dword ptr [0x10176458] */
  EAX = (r32((uint32_t)(0x10176458)));
  /* 10161869 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016186c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016186e je 0x10161a9f */
  if (C.zf) goto L_10161a9f;
  /* 10161874 push 0x1016fb98 */
  push32((uint32_t)(0x1016fb98u));
  /* 10161879 push 0x10173928 */
  push32((uint32_t)(0x10173928u));
  /* 1016187e call eax */
  call_ind((uint32_t)(EAX), 0x10161880u);
  /* 10161880 mov eax, dword ptr [0x10176458] */
  EAX = (r32((uint32_t)(0x10176458)));
  /* 10161885 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161888 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016188a je 0x10161a9f */
  if (C.zf) goto L_10161a9f;
  /* 10161890 push 0x1016fb8c */
  push32((uint32_t)(0x1016fb8cu));
  /* 10161895 push 0x10176250 */
  push32((uint32_t)(0x10176250u));
  /* 1016189a call eax */
  call_ind((uint32_t)(EAX), 0x1016189cu);
  /* 1016189c mov eax, dword ptr [0x10176458] */
  EAX = (r32((uint32_t)(0x10176458)));
  /* 101618a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101618a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101618a6 je 0x10161a9f */
  if (C.zf) goto L_10161a9f;
  /* 101618ac push 0x1016fb78 */
  push32((uint32_t)(0x1016fb78u));
  /* 101618b1 push 0x10176018 */
  push32((uint32_t)(0x10176018u));
  /* 101618b6 call eax */
  call_ind((uint32_t)(EAX), 0x101618b8u);
  /* 101618b8 mov eax, dword ptr [0x10176458] */
  EAX = (r32((uint32_t)(0x10176458)));
  /* 101618bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101618c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101618c2 je 0x10161a9f */
  if (C.zf) goto L_10161a9f;
  /* 101618c8 push 0x1016fb6c */
  push32((uint32_t)(0x1016fb6cu));
  /* 101618cd push 0x10176038 */
  push32((uint32_t)(0x10176038u));
  /* 101618d2 call eax */
  call_ind((uint32_t)(EAX), 0x101618d4u);
  /* 101618d4 mov eax, dword ptr [0x10176458] */
  EAX = (r32((uint32_t)(0x10176458)));
  /* 101618d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101618dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101618de je 0x10161a9f */
  if (C.zf) goto L_10161a9f;
  /* 101618e4 push 0x1016fb58 */
  push32((uint32_t)(0x1016fb58u));
  /* 101618e9 push 0x101762b0 */
  push32((uint32_t)(0x101762b0u));
  /* 101618ee call eax */
  call_ind((uint32_t)(EAX), 0x101618f0u);
  /* 101618f0 mov eax, dword ptr [0x10176458] */
  EAX = (r32((uint32_t)(0x10176458)));
  /* 101618f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101618f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101618fa je 0x10161a9f */
  if (C.zf) goto L_10161a9f;
  /* 10161900 push 0x1016fb4c */
  push32((uint32_t)(0x1016fb4cu));
  /* 10161905 push 0x101762b8 */
  push32((uint32_t)(0x101762b8u));
  /* 1016190a call eax */
  call_ind((uint32_t)(EAX), 0x1016190cu);
  /* 1016190c mov eax, dword ptr [0x10176458] */
  EAX = (r32((uint32_t)(0x10176458)));
  /* 10161911 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161914 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161916 je 0x10161a9f */
  if (C.zf) goto L_10161a9f;
  /* 1016191c push 0x1016fb40 */
  push32((uint32_t)(0x1016fb40u));
  /* 10161921 push 0x10176030 */
  push32((uint32_t)(0x10176030u));
  /* 10161926 call eax */
  call_ind((uint32_t)(EAX), 0x10161928u);
  /* 10161928 mov eax, dword ptr [0x10176458] */
  EAX = (r32((uint32_t)(0x10176458)));
  /* 1016192d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161930 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161932 je 0x10161a9f */
  if (C.zf) goto L_10161a9f;
  /* 10161938 push 0x1016fb30 */
  push32((uint32_t)(0x1016fb30u));
  /* 1016193d push 0x10175f80 */
  push32((uint32_t)(0x10175f80u));
  /* 10161942 call eax */
  call_ind((uint32_t)(EAX), 0x10161944u);
  /* 10161944 mov eax, dword ptr [0x10176458] */
  EAX = (r32((uint32_t)(0x10176458)));
  /* 10161949 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016194c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016194e je 0x10161a9f */
  if (C.zf) goto L_10161a9f;
  /* 10161954 push 0x1016fb18 */
  push32((uint32_t)(0x1016fb18u));
  /* 10161959 push 0x10176138 */
  push32((uint32_t)(0x10176138u));
  /* 1016195e call eax */
  call_ind((uint32_t)(EAX), 0x10161960u);
  /* 10161960 mov eax, dword ptr [0x10176458] */
  EAX = (r32((uint32_t)(0x10176458)));
  /* 10161965 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161968 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016196a je 0x10161a9f */
  if (C.zf) goto L_10161a9f;
  /* 10161970 push 0x1016fb08 */
  push32((uint32_t)(0x1016fb08u));
  /* 10161975 push 0x10176048 */
  push32((uint32_t)(0x10176048u));
  /* 1016197a call eax */
  call_ind((uint32_t)(EAX), 0x1016197cu);
  /* 1016197c mov eax, dword ptr [0x10176458] */
  EAX = (r32((uint32_t)(0x10176458)));
  /* 10161981 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161984 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161986 je 0x10161a9f */
  if (C.zf) goto L_10161a9f;
  /* 1016198c push 0x1016faf4 */
  push32((uint32_t)(0x1016faf4u));
  /* 10161991 push 0x10173678 */
  push32((uint32_t)(0x10173678u));
  /* 10161996 call eax */
  call_ind((uint32_t)(EAX), 0x10161998u);
  /* 10161998 mov eax, dword ptr [0x10176458] */
  EAX = (r32((uint32_t)(0x10176458)));
  /* 1016199d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101619a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101619a2 je 0x10161a9f */
  if (C.zf) goto L_10161a9f;
  /* 101619a8 push 0x1016fae8 */
  push32((uint32_t)(0x1016fae8u));
  /* 101619ad push 0x101738d8 */
  push32((uint32_t)(0x101738d8u));
  /* 101619b2 call eax */
  call_ind((uint32_t)(EAX), 0x101619b4u);
  /* 101619b4 mov eax, dword ptr [0x10176458] */
  EAX = (r32((uint32_t)(0x10176458)));
  /* 101619b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101619bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101619be je 0x10161a9f */
  if (C.zf) goto L_10161a9f;
  /* 101619c4 push 0x1016fadc */
  push32((uint32_t)(0x1016fadcu));
  /* 101619c9 push 0x10173938 */
  push32((uint32_t)(0x10173938u));
  /* 101619ce call eax */
  call_ind((uint32_t)(EAX), 0x101619d0u);
  /* 101619d0 mov eax, dword ptr [0x10176458] */
  EAX = (r32((uint32_t)(0x10176458)));
  /* 101619d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101619d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101619da je 0x10161a9f */
  if (C.zf) goto L_10161a9f;
  /* 101619e0 push 0x1016fad0 */
  push32((uint32_t)(0x1016fad0u));
  /* 101619e5 push 0x10176248 */
  push32((uint32_t)(0x10176248u));
  /* 101619ea call eax */
  call_ind((uint32_t)(EAX), 0x101619ecu);
  /* 101619ec mov eax, dword ptr [0x10176458] */
  EAX = (r32((uint32_t)(0x10176458)));
  /* 101619f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101619f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101619f6 je 0x10161a9f */
  if (C.zf) goto L_10161a9f;
  /* 101619fc push 0x1016fabc */
  push32((uint32_t)(0x1016fabcu));
  /* 10161a01 push 0x10176158 */
  push32((uint32_t)(0x10176158u));
  /* 10161a06 call eax */
  call_ind((uint32_t)(EAX), 0x10161a08u);
  /* 10161a08 mov eax, dword ptr [0x10176458] */
  EAX = (r32((uint32_t)(0x10176458)));
  /* 10161a0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161a10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161a12 je 0x10161a9f */
  if (C.zf) goto L_10161a9f;
  /* 10161a18 push 0x1016fab0 */
  push32((uint32_t)(0x1016fab0u));
  /* 10161a1d push 0x10176338 */
  push32((uint32_t)(0x10176338u));
  /* 10161a22 call eax */
  call_ind((uint32_t)(EAX), 0x10161a24u);
  /* 10161a24 mov eax, dword ptr [0x10176458] */
  EAX = (r32((uint32_t)(0x10176458)));
  /* 10161a29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161a2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161a2e je 0x10161a9f */
  if (C.zf) goto L_10161a9f;
  /* 10161a30 push 0x1016faa4 */
  push32((uint32_t)(0x1016faa4u));
  /* 10161a35 push 0x10173948 */
  push32((uint32_t)(0x10173948u));
  /* 10161a3a call eax */
  call_ind((uint32_t)(EAX), 0x10161a3cu);
  /* 10161a3c mov eax, dword ptr [0x10176458] */
  EAX = (r32((uint32_t)(0x10176458)));
  /* 10161a41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161a44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161a46 je 0x10161a9f */
  if (C.zf) goto L_10161a9f;
  /* 10161a48 push 0x1016fa98 */
  push32((uint32_t)(0x1016fa98u));
  /* 10161a4d push 0x10175ff0 */
  push32((uint32_t)(0x10175ff0u));
  /* 10161a52 call eax */
  call_ind((uint32_t)(EAX), 0x10161a54u);
  /* 10161a54 mov eax, dword ptr [0x10176458] */
  EAX = (r32((uint32_t)(0x10176458)));
  /* 10161a59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161a5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161a5e je 0x10161a9f */
  if (C.zf) goto L_10161a9f;
  /* 10161a60 push 0x1016fa8c */
  push32((uint32_t)(0x1016fa8cu));
  /* 10161a65 push 0x101763f8 */
  push32((uint32_t)(0x101763f8u));
  /* 10161a6a call eax */
  call_ind((uint32_t)(EAX), 0x10161a6cu);
  /* 10161a6c mov eax, dword ptr [0x10176458] */
  EAX = (r32((uint32_t)(0x10176458)));
  /* 10161a71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161a74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161a76 je 0x10161a9f */
  if (C.zf) goto L_10161a9f;
  /* 10161a78 push 0x1016fa80 */
  push32((uint32_t)(0x1016fa80u));
  /* 10161a7d push 0x10175fe8 */
  push32((uint32_t)(0x10175fe8u));
  /* 10161a82 call eax */
  call_ind((uint32_t)(EAX), 0x10161a84u);
  /* 10161a84 mov eax, dword ptr [0x10176458] */
  EAX = (r32((uint32_t)(0x10176458)));
  /* 10161a89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161a8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161a8e je 0x10161a9f */
  if (C.zf) goto L_10161a9f;
  /* 10161a90 push 0x1016fa70 */
  push32((uint32_t)(0x1016fa70u));
  /* 10161a95 push 0x10173900 */
  push32((uint32_t)(0x10173900u));
  /* 10161a9a call eax */
  call_ind((uint32_t)(EAX), 0x10161a9cu);
  /* 10161a9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10161a9f:;
  /* 10161a9f mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161aa4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161aa6 je 0x10161c9f */
  if (C.zf) goto L_10161c9f;
  /* 10161aac push 0x1016fa5c */
  push32((uint32_t)(0x1016fa5cu));
  /* 10161ab1 push 0x101763d8 */
  push32((uint32_t)(0x101763d8u));
  /* 10161ab6 call eax */
  call_ind((uint32_t)(EAX), 0x10161ab8u);
  /* 10161ab8 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161abd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161ac0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161ac2 je 0x10161c9f */
  if (C.zf) goto L_10161c9f;
  /* 10161ac8 push 0x1016fa48 */
  push32((uint32_t)(0x1016fa48u));
  /* 10161acd push 0x10176160 */
  push32((uint32_t)(0x10176160u));
  /* 10161ad2 call eax */
  call_ind((uint32_t)(EAX), 0x10161ad4u);
  /* 10161ad4 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161ad9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161adc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161ade je 0x10161c9f */
  if (C.zf) goto L_10161c9f;
  /* 10161ae4 push 0x1016fa40 */
  push32((uint32_t)(0x1016fa40u));
  /* 10161ae9 push 0x101736c0 */
  push32((uint32_t)(0x101736c0u));
  /* 10161aee call eax */
  call_ind((uint32_t)(EAX), 0x10161af0u);
  /* 10161af0 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161af5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161af8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161afa je 0x10161c9f */
  if (C.zf) goto L_10161c9f;
  /* 10161b00 push 0x1016fa28 */
  push32((uint32_t)(0x1016fa28u));
  /* 10161b05 push 0x101763b0 */
  push32((uint32_t)(0x101763b0u));
  /* 10161b0a call eax */
  call_ind((uint32_t)(EAX), 0x10161b0cu);
  /* 10161b0c mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161b11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161b14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161b16 je 0x10161c9f */
  if (C.zf) goto L_10161c9f;
  /* 10161b1c push 0x1016fa10 */
  push32((uint32_t)(0x1016fa10u));
  /* 10161b21 push 0x101763b8 */
  push32((uint32_t)(0x101763b8u));
  /* 10161b26 call eax */
  call_ind((uint32_t)(EAX), 0x10161b28u);
  /* 10161b28 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161b2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161b30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161b32 je 0x10161c9f */
  if (C.zf) goto L_10161c9f;
  /* 10161b38 push 0x1016f9f8 */
  push32((uint32_t)(0x1016f9f8u));
  /* 10161b3d push 0x101763a0 */
  push32((uint32_t)(0x101763a0u));
  /* 10161b42 call eax */
  call_ind((uint32_t)(EAX), 0x10161b44u);
  /* 10161b44 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161b49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161b4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161b4e je 0x10161c9f */
  if (C.zf) goto L_10161c9f;
  /* 10161b54 push 0x1016f9e0 */
  push32((uint32_t)(0x1016f9e0u));
  /* 10161b59 push 0x101763a8 */
  push32((uint32_t)(0x101763a8u));
  /* 10161b5e call eax */
  call_ind((uint32_t)(EAX), 0x10161b60u);
  /* 10161b60 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161b65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161b68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161b6a je 0x10161c9f */
  if (C.zf) goto L_10161c9f;
  /* 10161b70 push 0x1016f9c8 */
  push32((uint32_t)(0x1016f9c8u));
  /* 10161b75 push 0x101763c0 */
  push32((uint32_t)(0x101763c0u));
  /* 10161b7a call eax */
  call_ind((uint32_t)(EAX), 0x10161b7cu);
  /* 10161b7c mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161b81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161b84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161b86 je 0x10161c9f */
  if (C.zf) goto L_10161c9f;
  /* 10161b8c push 0x1016f9b0 */
  push32((uint32_t)(0x1016f9b0u));
  /* 10161b91 push 0x101762f8 */
  push32((uint32_t)(0x101762f8u));
  /* 10161b96 call eax */
  call_ind((uint32_t)(EAX), 0x10161b98u);
  /* 10161b98 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161b9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161ba0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161ba2 je 0x10161c9f */
  if (C.zf) goto L_10161c9f;
  /* 10161ba8 push 0x1016f998 */
  push32((uint32_t)(0x1016f998u));
  /* 10161bad push 0x101762e0 */
  push32((uint32_t)(0x101762e0u));
  /* 10161bb2 call eax */
  call_ind((uint32_t)(EAX), 0x10161bb4u);
  /* 10161bb4 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161bb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161bbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161bbe je 0x10161c9f */
  if (C.zf) goto L_10161c9f;
  /* 10161bc4 push 0x1016f980 */
  push32((uint32_t)(0x1016f980u));
  /* 10161bc9 push 0x101762e8 */
  push32((uint32_t)(0x101762e8u));
  /* 10161bce call eax */
  call_ind((uint32_t)(EAX), 0x10161bd0u);
  /* 10161bd0 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161bd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161bd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161bda je 0x10161c9f */
  if (C.zf) goto L_10161c9f;
  /* 10161be0 push 0x1016f968 */
  push32((uint32_t)(0x1016f968u));
  /* 10161be5 push 0x10176300 */
  push32((uint32_t)(0x10176300u));
  /* 10161bea call eax */
  call_ind((uint32_t)(EAX), 0x10161becu);
  /* 10161bec mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161bf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161bf4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161bf6 je 0x10161c9f */
  if (C.zf) goto L_10161c9f;
  /* 10161bfc push 0x1016f950 */
  push32((uint32_t)(0x1016f950u));
  /* 10161c01 push 0x10176308 */
  push32((uint32_t)(0x10176308u));
  /* 10161c06 call eax */
  call_ind((uint32_t)(EAX), 0x10161c08u);
  /* 10161c08 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161c0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161c10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161c12 je 0x10161c9f */
  if (C.zf) goto L_10161c9f;
  /* 10161c18 push 0x1016f934 */
  push32((uint32_t)(0x1016f934u));
  /* 10161c1d push 0x10173970 */
  push32((uint32_t)(0x10173970u));
  /* 10161c22 call eax */
  call_ind((uint32_t)(EAX), 0x10161c24u);
  /* 10161c24 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161c29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161c2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161c2e je 0x10161c9f */
  if (C.zf) goto L_10161c9f;
  /* 10161c30 push 0x1016f918 */
  push32((uint32_t)(0x1016f918u));
  /* 10161c35 push 0x10173978 */
  push32((uint32_t)(0x10173978u));
  /* 10161c3a call eax */
  call_ind((uint32_t)(EAX), 0x10161c3cu);
  /* 10161c3c mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161c41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161c44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161c46 je 0x10161c9f */
  if (C.zf) goto L_10161c9f;
  /* 10161c48 push 0x1016f8fc */
  push32((uint32_t)(0x1016f8fcu));
  /* 10161c4d push 0x10173968 */
  push32((uint32_t)(0x10173968u));
  /* 10161c52 call eax */
  call_ind((uint32_t)(EAX), 0x10161c54u);
  /* 10161c54 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161c59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161c5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161c5e je 0x10161c9f */
  if (C.zf) goto L_10161c9f;
  /* 10161c60 push 0x1016f8e0 */
  push32((uint32_t)(0x1016f8e0u));
  /* 10161c65 push 0x10175fd8 */
  push32((uint32_t)(0x10175fd8u));
  /* 10161c6a call eax */
  call_ind((uint32_t)(EAX), 0x10161c6cu);
  /* 10161c6c mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161c71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161c74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161c76 je 0x10161c9f */
  if (C.zf) goto L_10161c9f;
  /* 10161c78 push 0x1016f8c4 */
  push32((uint32_t)(0x1016f8c4u));
  /* 10161c7d push 0x10175fc8 */
  push32((uint32_t)(0x10175fc8u));
  /* 10161c82 call eax */
  call_ind((uint32_t)(EAX), 0x10161c84u);
  /* 10161c84 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161c89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161c8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161c8e je 0x10161c9f */
  if (C.zf) goto L_10161c9f;
  /* 10161c90 push 0x1016f8a8 */
  push32((uint32_t)(0x1016f8a8u));
  /* 10161c95 push 0x10175fd0 */
  push32((uint32_t)(0x10175fd0u));
  /* 10161c9a call eax */
  call_ind((uint32_t)(EAX), 0x10161c9cu);
  /* 10161c9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10161c9f:;
  /* 10161c9f lea eax, [esp] */
  EAX = ((uint32_t)(ESP));
  /* 10161ca3 push 0x1016f8a0 */
  push32((uint32_t)(0x1016f8a0u));
  /* 10161ca8 push eax */
  push32((uint32_t)(EAX));
  /* 10161ca9 call 0x10162f30 */
  push32(0x10161caeu); f_10162f30();
  /* 10161cae push eax */
  push32((uint32_t)(EAX));
  /* 10161caf push 0x10176078 */
  push32((uint32_t)(0x10176078u));
  /* 10161cb4 call 0x101626a0 */
  push32(0x10161cb9u); f_101626a0();
  /* 10161cb9 lea ecx, [esp + 0x10] */
  ECX = ((uint32_t)(ESP + 0x10));
  /* 10161cbd push 0x1016f898 */
  push32((uint32_t)(0x1016f898u));
  /* 10161cc2 push ecx */
  push32((uint32_t)(ECX));
  /* 10161cc3 call 0x10162f30 */
  push32(0x10161cc8u); f_10162f30();
  /* 10161cc8 push eax */
  push32((uint32_t)(EAX));
  /* 10161cc9 push 0x10176070 */
  push32((uint32_t)(0x10176070u));
  /* 10161cce call 0x101626a0 */
  push32(0x10161cd3u); f_101626a0();
  /* 10161cd3 lea edx, [esp + 0x20] */
  EDX = ((uint32_t)(ESP + 0x20));
  /* 10161cd7 push 0x1016f890 */
  push32((uint32_t)(0x1016f890u));
  /* 10161cdc push edx */
  push32((uint32_t)(EDX));
  /* 10161cdd call 0x10162f30 */
  push32(0x10161ce2u); f_10162f30();
  /* 10161ce2 push eax */
  push32((uint32_t)(EAX));
  /* 10161ce3 push 0x10176068 */
  push32((uint32_t)(0x10176068u));
  /* 10161ce8 call 0x101626a0 */
  push32(0x10161cedu); f_101626a0();
  /* 10161ced lea eax, [esp + 0x30] */
  EAX = ((uint32_t)(ESP + 0x30));
  /* 10161cf1 push 0x1016f888 */
  push32((uint32_t)(0x1016f888u));
  /* 10161cf6 push eax */
  push32((uint32_t)(EAX));
  /* 10161cf7 call 0x10162f30 */
  push32(0x10161cfcu); f_10162f30();
  /* 10161cfc push eax */
  push32((uint32_t)(EAX));
  /* 10161cfd push 0x10176060 */
  push32((uint32_t)(0x10176060u));
  /* 10161d02 call 0x101626a0 */
  push32(0x10161d07u); f_101626a0();
  /* 10161d07 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161d0a lea ecx, [esp] */
  ECX = ((uint32_t)(ESP));
  /* 10161d0e push 0x1016f880 */
  push32((uint32_t)(0x1016f880u));
  /* 10161d13 push ecx */
  push32((uint32_t)(ECX));
  /* 10161d14 call 0x10162f30 */
  push32(0x10161d19u); f_10162f30();
  /* 10161d19 push eax */
  push32((uint32_t)(EAX));
  /* 10161d1a push 0x10176058 */
  push32((uint32_t)(0x10176058u));
  /* 10161d1f call 0x101626a0 */
  push32(0x10161d24u); f_101626a0();
  /* 10161d24 lea edx, [esp + 0x10] */
  EDX = ((uint32_t)(ESP + 0x10));
  /* 10161d28 push 0x1016f878 */
  push32((uint32_t)(0x1016f878u));
  /* 10161d2d push edx */
  push32((uint32_t)(EDX));
  /* 10161d2e call 0x10162f30 */
  push32(0x10161d33u); f_10162f30();
  /* 10161d33 push eax */
  push32((uint32_t)(EAX));
  /* 10161d34 push 0x10176050 */
  push32((uint32_t)(0x10176050u));
  /* 10161d39 call 0x101626a0 */
  push32(0x10161d3eu); f_101626a0();
  /* 10161d3e lea eax, [esp + 0x20] */
  EAX = ((uint32_t)(ESP + 0x20));
  /* 10161d42 push 0x1016f870 */
  push32((uint32_t)(0x1016f870u));
  /* 10161d47 push eax */
  push32((uint32_t)(EAX));
  /* 10161d48 call 0x10162f30 */
  push32(0x10161d4du); f_10162f30();
  /* 10161d4d push eax */
  push32((uint32_t)(EAX));
  /* 10161d4e push 0x10176190 */
  push32((uint32_t)(0x10176190u));
  /* 10161d53 call 0x101626a0 */
  push32(0x10161d58u); f_101626a0();
  /* 10161d58 lea ecx, [esp + 0x30] */
  ECX = ((uint32_t)(ESP + 0x30));
  /* 10161d5c push 0x1016f868 */
  push32((uint32_t)(0x1016f868u));
  /* 10161d61 push ecx */
  push32((uint32_t)(ECX));
  /* 10161d62 call 0x10162f30 */
  push32(0x10161d67u); f_10162f30();
  /* 10161d67 push eax */
  push32((uint32_t)(EAX));
  /* 10161d68 push 0x10176188 */
  push32((uint32_t)(0x10176188u));
  /* 10161d6d call 0x101626a0 */
  push32(0x10161d72u); f_101626a0();
  /* 10161d72 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161d75 lea edx, [esp] */
  EDX = ((uint32_t)(ESP));
  /* 10161d79 push 0x1016f860 */
  push32((uint32_t)(0x1016f860u));
  /* 10161d7e push edx */
  push32((uint32_t)(EDX));
  /* 10161d7f call 0x10162f30 */
  push32(0x10161d84u); f_10162f30();
  /* 10161d84 push eax */
  push32((uint32_t)(EAX));
  /* 10161d85 push 0x10176180 */
  push32((uint32_t)(0x10176180u));
  /* 10161d8a call 0x101626a0 */
  push32(0x10161d8fu); f_101626a0();
  /* 10161d8f lea eax, [esp + 0x10] */
  EAX = ((uint32_t)(ESP + 0x10));
  /* 10161d93 push 0x1016f858 */
  push32((uint32_t)(0x1016f858u));
  /* 10161d98 push eax */
  push32((uint32_t)(EAX));
  /* 10161d99 call 0x10162f30 */
  push32(0x10161d9eu); f_10162f30();
  /* 10161d9e push eax */
  push32((uint32_t)(EAX));
  /* 10161d9f push 0x10176178 */
  push32((uint32_t)(0x10176178u));
  /* 10161da4 call 0x101626a0 */
  push32(0x10161da9u); f_101626a0();
  /* 10161da9 lea ecx, [esp + 0x20] */
  ECX = ((uint32_t)(ESP + 0x20));
  /* 10161dad push 0x1016f850 */
  push32((uint32_t)(0x1016f850u));
  /* 10161db2 push ecx */
  push32((uint32_t)(ECX));
  /* 10161db3 call 0x10162f30 */
  push32(0x10161db8u); f_10162f30();
  /* 10161db8 push eax */
  push32((uint32_t)(EAX));
  /* 10161db9 push 0x10176168 */
  push32((uint32_t)(0x10176168u));
  /* 10161dbe call 0x101626a0 */
  push32(0x10161dc3u); f_101626a0();
  /* 10161dc3 push 0x1016f848 */
  push32((uint32_t)(0x1016f848u));
  /* 10161dc8 lea edx, [esp + 0x34] */
  EDX = ((uint32_t)(ESP + 0x34));
  /* 10161dcc push edx */
  push32((uint32_t)(EDX));
  /* 10161dcd call 0x10162f30 */
  push32(0x10161dd2u); f_10162f30();
  /* 10161dd2 push eax */
  push32((uint32_t)(EAX));
  /* 10161dd3 push 0x101761b8 */
  push32((uint32_t)(0x101761b8u));
  /* 10161dd8 call 0x101626a0 */
  push32(0x10161dddu); f_101626a0();
  /* 10161ddd mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161de2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161de5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161de7 je 0x10161f1c */
  if (C.zf) goto L_10161f1c;
  /* 10161ded push 0x1016f82c */
  push32((uint32_t)(0x1016f82cu));
  /* 10161df2 push 0x10173718 */
  push32((uint32_t)(0x10173718u));
  /* 10161df7 call eax */
  call_ind((uint32_t)(EAX), 0x10161df9u);
  /* 10161df9 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161dfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161e01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161e03 je 0x10161f1c */
  if (C.zf) goto L_10161f1c;
  /* 10161e09 push 0x1016f810 */
  push32((uint32_t)(0x1016f810u));
  /* 10161e0e push 0x10173710 */
  push32((uint32_t)(0x10173710u));
  /* 10161e13 call eax */
  call_ind((uint32_t)(EAX), 0x10161e15u);
  /* 10161e15 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161e1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161e1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161e1f je 0x10161f1c */
  if (C.zf) goto L_10161f1c;
  /* 10161e25 push 0x1016f7f4 */
  push32((uint32_t)(0x1016f7f4u));
  /* 10161e2a push 0x10173708 */
  push32((uint32_t)(0x10173708u));
  /* 10161e2f call eax */
  call_ind((uint32_t)(EAX), 0x10161e31u);
  /* 10161e31 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161e36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161e39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161e3b je 0x10161f1c */
  if (C.zf) goto L_10161f1c;
  /* 10161e41 push 0x1016f7d8 */
  push32((uint32_t)(0x1016f7d8u));
  /* 10161e46 push 0x10173700 */
  push32((uint32_t)(0x10173700u));
  /* 10161e4b call eax */
  call_ind((uint32_t)(EAX), 0x10161e4du);
  /* 10161e4d mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161e52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161e55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161e57 je 0x10161f1c */
  if (C.zf) goto L_10161f1c;
  /* 10161e5d push 0x1016f7bc */
  push32((uint32_t)(0x1016f7bcu));
  /* 10161e62 push 0x101736d8 */
  push32((uint32_t)(0x101736d8u));
  /* 10161e67 call eax */
  call_ind((uint32_t)(EAX), 0x10161e69u);
  /* 10161e69 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161e6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161e71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161e73 je 0x10161f1c */
  if (C.zf) goto L_10161f1c;
  /* 10161e79 push 0x1016f7a0 */
  push32((uint32_t)(0x1016f7a0u));
  /* 10161e7e push 0x101736d0 */
  push32((uint32_t)(0x101736d0u));
  /* 10161e83 call eax */
  call_ind((uint32_t)(EAX), 0x10161e85u);
  /* 10161e85 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161e8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161e8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161e8f je 0x10161f1c */
  if (C.zf) goto L_10161f1c;
  /* 10161e95 push 0x1016f784 */
  push32((uint32_t)(0x1016f784u));
  /* 10161e9a push 0x101737a8 */
  push32((uint32_t)(0x101737a8u));
  /* 10161e9f call eax */
  call_ind((uint32_t)(EAX), 0x10161ea1u);
  /* 10161ea1 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161ea6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161ea9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161eab je 0x10161f1c */
  if (C.zf) goto L_10161f1c;
  /* 10161ead push 0x1016f768 */
  push32((uint32_t)(0x1016f768u));
  /* 10161eb2 push 0x101737a0 */
  push32((uint32_t)(0x101737a0u));
  /* 10161eb7 call eax */
  call_ind((uint32_t)(EAX), 0x10161eb9u);
  /* 10161eb9 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161ebe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161ec1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161ec3 je 0x10161f1c */
  if (C.zf) goto L_10161f1c;
  /* 10161ec5 push 0x1016f74c */
  push32((uint32_t)(0x1016f74cu));
  /* 10161eca push 0x10173798 */
  push32((uint32_t)(0x10173798u));
  /* 10161ecf call eax */
  call_ind((uint32_t)(EAX), 0x10161ed1u);
  /* 10161ed1 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161ed6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161ed9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161edb je 0x10161f1c */
  if (C.zf) goto L_10161f1c;
  /* 10161edd push 0x1016f730 */
  push32((uint32_t)(0x1016f730u));
  /* 10161ee2 push 0x10173780 */
  push32((uint32_t)(0x10173780u));
  /* 10161ee7 call eax */
  call_ind((uint32_t)(EAX), 0x10161ee9u);
  /* 10161ee9 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161eee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161ef1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161ef3 je 0x10161f1c */
  if (C.zf) goto L_10161f1c;
  /* 10161ef5 push 0x1016f714 */
  push32((uint32_t)(0x1016f714u));
  /* 10161efa push 0x10173778 */
  push32((uint32_t)(0x10173778u));
  /* 10161eff call eax */
  call_ind((uint32_t)(EAX), 0x10161f01u);
  /* 10161f01 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10161f06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161f09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10161f0b je 0x10161f1c */
  if (C.zf) goto L_10161f1c;
  /* 10161f0d push 0x1016f6f8 */
  push32((uint32_t)(0x1016f6f8u));
  /* 10161f12 push 0x10173770 */
  push32((uint32_t)(0x10173770u));
  /* 10161f17 call eax */
  call_ind((uint32_t)(EAX), 0x10161f19u);
  /* 10161f19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10161f1c:;
  /* 10161f1c lea eax, [esp + 0x30] */
  EAX = ((uint32_t)(ESP + 0x30));
  /* 10161f20 push 0x1016f8a0 */
  push32((uint32_t)(0x1016f8a0u));
  /* 10161f25 push eax */
  push32((uint32_t)(EAX));
  /* 10161f26 call 0x10162f30 */
  push32(0x10161f2bu); f_10162f30();
  /* 10161f2b push eax */
  push32((uint32_t)(EAX));
  /* 10161f2c push 0x10173740 */
  push32((uint32_t)(0x10173740u));
  /* 10161f31 call 0x101626a0 */
  push32(0x10161f36u); f_101626a0();
  /* 10161f36 lea ecx, [esp + 0x40] */
  ECX = ((uint32_t)(ESP + 0x40));
  /* 10161f3a push 0x1016f898 */
  push32((uint32_t)(0x1016f898u));
  /* 10161f3f push ecx */
  push32((uint32_t)(ECX));
  /* 10161f40 call 0x10162f30 */
  push32(0x10161f45u); f_10162f30();
  /* 10161f45 push eax */
  push32((uint32_t)(EAX));
  /* 10161f46 push 0x10173748 */
  push32((uint32_t)(0x10173748u));
  /* 10161f4b call 0x101626a0 */
  push32(0x10161f50u); f_101626a0();
  /* 10161f50 lea edx, [esp + 0x50] */
  EDX = ((uint32_t)(ESP + 0x50));
  /* 10161f54 push 0x1016f890 */
  push32((uint32_t)(0x1016f890u));
  /* 10161f59 push edx */
  push32((uint32_t)(EDX));
  /* 10161f5a call 0x10162f30 */
  push32(0x10161f5fu); f_10162f30();
  /* 10161f5f push eax */
  push32((uint32_t)(EAX));
  /* 10161f60 push 0x10173750 */
  push32((uint32_t)(0x10173750u));
  /* 10161f65 call 0x101626a0 */
  push32(0x10161f6au); f_101626a0();
  /* 10161f6a lea eax, [esp + 0x60] */
  EAX = ((uint32_t)(ESP + 0x60));
  /* 10161f6e push 0x1016f888 */
  push32((uint32_t)(0x1016f888u));
  /* 10161f73 push eax */
  push32((uint32_t)(EAX));
  /* 10161f74 call 0x10162f30 */
  push32(0x10161f79u); f_10162f30();
  /* 10161f79 push eax */
  push32((uint32_t)(EAX));
  /* 10161f7a push 0x10173758 */
  push32((uint32_t)(0x10173758u));
  /* 10161f7f call 0x101626a0 */
  push32(0x10161f84u); f_101626a0();
  /* 10161f84 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161f87 lea ecx, [esp + 0x30] */
  ECX = ((uint32_t)(ESP + 0x30));
  /* 10161f8b push 0x1016f880 */
  push32((uint32_t)(0x1016f880u));
  /* 10161f90 push ecx */
  push32((uint32_t)(ECX));
  /* 10161f91 call 0x10162f30 */
  push32(0x10161f96u); f_10162f30();
  /* 10161f96 push eax */
  push32((uint32_t)(EAX));
  /* 10161f97 push 0x10173720 */
  push32((uint32_t)(0x10173720u));
  /* 10161f9c call 0x101626a0 */
  push32(0x10161fa1u); f_101626a0();
  /* 10161fa1 lea edx, [esp + 0x40] */
  EDX = ((uint32_t)(ESP + 0x40));
  /* 10161fa5 push 0x1016f878 */
  push32((uint32_t)(0x1016f878u));
  /* 10161faa push edx */
  push32((uint32_t)(EDX));
  /* 10161fab call 0x10162f30 */
  push32(0x10161fb0u); f_10162f30();
  /* 10161fb0 push eax */
  push32((uint32_t)(EAX));
  /* 10161fb1 push 0x10173730 */
  push32((uint32_t)(0x10173730u));
  /* 10161fb6 call 0x101626a0 */
  push32(0x10161fbbu); f_101626a0();
  /* 10161fbb lea eax, [esp + 0x50] */
  EAX = ((uint32_t)(ESP + 0x50));
  /* 10161fbf push 0x1016f870 */
  push32((uint32_t)(0x1016f870u));
  /* 10161fc4 push eax */
  push32((uint32_t)(EAX));
  /* 10161fc5 call 0x10162f30 */
  push32(0x10161fcau); f_10162f30();
  /* 10161fca push eax */
  push32((uint32_t)(EAX));
  /* 10161fcb push 0x101737e8 */
  push32((uint32_t)(0x101737e8u));
  /* 10161fd0 call 0x101626a0 */
  push32(0x10161fd5u); f_101626a0();
  /* 10161fd5 lea ecx, [esp + 0x60] */
  ECX = ((uint32_t)(ESP + 0x60));
  /* 10161fd9 push 0x1016f868 */
  push32((uint32_t)(0x1016f868u));
  /* 10161fde push ecx */
  push32((uint32_t)(ECX));
  /* 10161fdf call 0x10162f30 */
  push32(0x10161fe4u); f_10162f30();
  /* 10161fe4 push eax */
  push32((uint32_t)(EAX));
  /* 10161fe5 push 0x101737f0 */
  push32((uint32_t)(0x101737f0u));
  /* 10161fea call 0x101626a0 */
  push32(0x10161fefu); f_101626a0();
  /* 10161fef add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10161ff2 lea edx, [esp + 0x30] */
  EDX = ((uint32_t)(ESP + 0x30));
  /* 10161ff6 push 0x1016f860 */
  push32((uint32_t)(0x1016f860u));
  /* 10161ffb push edx */
  push32((uint32_t)(EDX));
  /* 10161ffc call 0x10162f30 */
  push32(0x10162001u); f_10162f30();
  /* 10162001 push eax */
  push32((uint32_t)(EAX));
  /* 10162002 push 0x101737f8 */
  push32((uint32_t)(0x101737f8u));
  /* 10162007 call 0x101626a0 */
  push32(0x1016200cu); f_101626a0();
  /* 1016200c lea eax, [esp + 0x40] */
  EAX = ((uint32_t)(ESP + 0x40));
  /* 10162010 push 0x1016f858 */
  push32((uint32_t)(0x1016f858u));
  /* 10162015 push eax */
  push32((uint32_t)(EAX));
  /* 10162016 call 0x10162f30 */
  push32(0x1016201bu); f_10162f30();
  /* 1016201b push eax */
  push32((uint32_t)(EAX));
  /* 1016201c push 0x101737d0 */
  push32((uint32_t)(0x101737d0u));
  /* 10162021 call 0x101626a0 */
  push32(0x10162026u); f_101626a0();
  /* 10162026 lea ecx, [esp + 0x50] */
  ECX = ((uint32_t)(ESP + 0x50));
  /* 1016202a push 0x1016f850 */
  push32((uint32_t)(0x1016f850u));
  /* 1016202f push ecx */
  push32((uint32_t)(ECX));
  /* 10162030 call 0x10162f30 */
  push32(0x10162035u); f_10162f30();
  /* 10162035 push eax */
  push32((uint32_t)(EAX));
  /* 10162036 push 0x101737d8 */
  push32((uint32_t)(0x101737d8u));
  /* 1016203b call 0x101626a0 */
  push32(0x10162040u); f_101626a0();
  /* 10162040 push 0x1016f848 */
  push32((uint32_t)(0x1016f848u));
  /* 10162045 lea edx, [esp + 0x64] */
  EDX = ((uint32_t)(ESP + 0x64));
  /* 10162049 push edx */
  push32((uint32_t)(EDX));
  /* 1016204a call 0x10162f30 */
  push32(0x1016204fu); f_10162f30();
  /* 1016204f push eax */
  push32((uint32_t)(EAX));
  /* 10162050 push 0x101737e0 */
  push32((uint32_t)(0x101737e0u));
  /* 10162055 call 0x101626a0 */
  push32(0x1016205au); f_101626a0();
  /* 1016205a mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 1016205f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10162062 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10162064 je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 1016206a push 0x1016f6e8 */
  push32((uint32_t)(0x1016f6e8u));
  /* 1016206f push 0x10176238 */
  push32((uint32_t)(0x10176238u));
  /* 10162074 call eax */
  call_ind((uint32_t)(EAX), 0x10162076u);
  /* 10162076 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 1016207b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016207e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10162080 je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 10162086 push 0x1016f6d4 */
  push32((uint32_t)(0x1016f6d4u));
  /* 1016208b push 0x10176230 */
  push32((uint32_t)(0x10176230u));
  /* 10162090 call eax */
  call_ind((uint32_t)(EAX), 0x10162092u);
  /* 10162092 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10162097 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016209a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016209c je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 101620a2 push 0x1016f6c0 */
  push32((uint32_t)(0x1016f6c0u));
  /* 101620a7 push 0x10176200 */
  push32((uint32_t)(0x10176200u));
  /* 101620ac call eax */
  call_ind((uint32_t)(EAX), 0x101620aeu);
  /* 101620ae mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 101620b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101620b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101620b8 je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 101620be push 0x1016f6ac */
  push32((uint32_t)(0x1016f6acu));
  /* 101620c3 push 0x101761f8 */
  push32((uint32_t)(0x101761f8u));
  /* 101620c8 call eax */
  call_ind((uint32_t)(EAX), 0x101620cau);
  /* 101620ca mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 101620cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101620d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101620d4 je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 101620da push 0x1016f698 */
  push32((uint32_t)(0x1016f698u));
  /* 101620df push 0x10176208 */
  push32((uint32_t)(0x10176208u));
  /* 101620e4 call eax */
  call_ind((uint32_t)(EAX), 0x101620e6u);
  /* 101620e6 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 101620eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101620ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101620f0 je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 101620f6 push 0x1016f684 */
  push32((uint32_t)(0x1016f684u));
  /* 101620fb push 0x101760f8 */
  push32((uint32_t)(0x101760f8u));
  /* 10162100 call eax */
  call_ind((uint32_t)(EAX), 0x10162102u);
  /* 10162102 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10162107 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016210a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016210c je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 10162112 push 0x1016f670 */
  push32((uint32_t)(0x1016f670u));
  /* 10162117 push 0x10176100 */
  push32((uint32_t)(0x10176100u));
  /* 1016211c call eax */
  call_ind((uint32_t)(EAX), 0x1016211eu);
  /* 1016211e mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10162123 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10162126 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10162128 je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 1016212e push 0x1016f65c */
  push32((uint32_t)(0x1016f65cu));
  /* 10162133 push 0x10176108 */
  push32((uint32_t)(0x10176108u));
  /* 10162138 call eax */
  call_ind((uint32_t)(EAX), 0x1016213au);
  /* 1016213a mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 1016213f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10162142 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10162144 je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 1016214a push 0x1016f648 */
  push32((uint32_t)(0x1016f648u));
  /* 1016214f push 0x10176110 */
  push32((uint32_t)(0x10176110u));
  /* 10162154 call eax */
  call_ind((uint32_t)(EAX), 0x10162156u);
  /* 10162156 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 1016215b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016215e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10162160 je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 10162166 push 0x1016f640 */
  push32((uint32_t)(0x1016f640u));
  /* 1016216b push 0x10176218 */
  push32((uint32_t)(0x10176218u));
  /* 10162170 call eax */
  call_ind((uint32_t)(EAX), 0x10162172u);
  /* 10162172 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10162177 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016217a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016217c je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 10162182 push 0x1016f638 */
  push32((uint32_t)(0x1016f638u));
  /* 10162187 push 0x10176080 */
  push32((uint32_t)(0x10176080u));
  /* 1016218c call eax */
  call_ind((uint32_t)(EAX), 0x1016218eu);
  /* 1016218e mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10162193 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10162196 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10162198 je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 1016219e push 0x1016f630 */
  push32((uint32_t)(0x1016f630u));
  /* 101621a3 push 0x101739b8 */
  push32((uint32_t)(0x101739b8u));
  /* 101621a8 call eax */
  call_ind((uint32_t)(EAX), 0x101621aau);
  /* 101621aa mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 101621af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101621b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101621b4 je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 101621ba push 0x1016f628 */
  push32((uint32_t)(0x1016f628u));
  /* 101621bf push 0x101760d8 */
  push32((uint32_t)(0x101760d8u));
  /* 101621c4 call eax */
  call_ind((uint32_t)(EAX), 0x101621c6u);
  /* 101621c6 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 101621cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101621ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101621d0 je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 101621d6 push 0x1016f620 */
  push32((uint32_t)(0x1016f620u));
  /* 101621db push 0x10176090 */
  push32((uint32_t)(0x10176090u));
  /* 101621e0 call eax */
  call_ind((uint32_t)(EAX), 0x101621e2u);
  /* 101621e2 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 101621e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101621ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101621ec je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 101621f2 push 0x1016f618 */
  push32((uint32_t)(0x1016f618u));
  /* 101621f7 push 0x10176098 */
  push32((uint32_t)(0x10176098u));
  /* 101621fc call eax */
  call_ind((uint32_t)(EAX), 0x101621feu);
  /* 101621fe mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10162203 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10162206 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10162208 je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 1016220e push 0x1016f610 */
  push32((uint32_t)(0x1016f610u));
  /* 10162213 push 0x101760a0 */
  push32((uint32_t)(0x101760a0u));
  /* 10162218 call eax */
  call_ind((uint32_t)(EAX), 0x1016221au);
  /* 1016221a mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 1016221f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10162222 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10162224 je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 1016222a push 0x1016f608 */
  push32((uint32_t)(0x1016f608u));
  /* 1016222f push 0x101762d0 */
  push32((uint32_t)(0x101762d0u));
  /* 10162234 call eax */
  call_ind((uint32_t)(EAX), 0x10162236u);
  /* 10162236 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 1016223b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016223e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10162240 je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 10162246 push 0x1016f600 */
  push32((uint32_t)(0x1016f600u));
  /* 1016224b push 0x10176170 */
  push32((uint32_t)(0x10176170u));
  /* 10162250 call eax */
  call_ind((uint32_t)(EAX), 0x10162252u);
  /* 10162252 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10162257 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016225a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016225c je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 10162262 push 0x1016f5f8 */
  push32((uint32_t)(0x1016f5f8u));
  /* 10162267 push 0x101761b0 */
  push32((uint32_t)(0x101761b0u));
  /* 1016226c call eax */
  call_ind((uint32_t)(EAX), 0x1016226eu);
  /* 1016226e mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10162273 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10162276 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10162278 je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 1016227e push 0x1016f5f0 */
  push32((uint32_t)(0x1016f5f0u));
  /* 10162283 push 0x10176268 */
  push32((uint32_t)(0x10176268u));
  /* 10162288 call eax */
  call_ind((uint32_t)(EAX), 0x1016228au);
  /* 1016228a mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 1016228f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10162292 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10162294 je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 1016229a push 0x1016f5e8 */
  push32((uint32_t)(0x1016f5e8u));
  /* 1016229f push 0x10176270 */
  push32((uint32_t)(0x10176270u));
  /* 101622a4 call eax */
  call_ind((uint32_t)(EAX), 0x101622a6u);
  /* 101622a6 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 101622ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101622ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101622b0 je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 101622b6 push 0x1016f5e0 */
  push32((uint32_t)(0x1016f5e0u));
  /* 101622bb push 0x101761c8 */
  push32((uint32_t)(0x101761c8u));
  /* 101622c0 call eax */
  call_ind((uint32_t)(EAX), 0x101622c2u);
  /* 101622c2 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 101622c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101622ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101622cc je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 101622d2 push 0x1016f5d8 */
  push32((uint32_t)(0x1016f5d8u));
  /* 101622d7 push 0x101761d8 */
  push32((uint32_t)(0x101761d8u));
  /* 101622dc call eax */
  call_ind((uint32_t)(EAX), 0x101622deu);
  /* 101622de mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 101622e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101622e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101622e8 je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 101622ee push 0x1016f5d0 */
  push32((uint32_t)(0x1016f5d0u));
  /* 101622f3 push 0x101761e0 */
  push32((uint32_t)(0x101761e0u));
  /* 101622f8 call eax */
  call_ind((uint32_t)(EAX), 0x101622fau);
  /* 101622fa mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 101622ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10162302 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10162304 je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 1016230a push 0x1016f5c8 */
  push32((uint32_t)(0x1016f5c8u));
  /* 1016230f push 0x101761d0 */
  push32((uint32_t)(0x101761d0u));
  /* 10162314 call eax */
  call_ind((uint32_t)(EAX), 0x10162316u);
  /* 10162316 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 1016231b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016231e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10162320 je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 10162326 push 0x1016f5c0 */
  push32((uint32_t)(0x1016f5c0u));
  /* 1016232b push 0x101739b0 */
  push32((uint32_t)(0x101739b0u));
  /* 10162330 call eax */
  call_ind((uint32_t)(EAX), 0x10162332u);
  /* 10162332 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10162337 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016233a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016233c je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 10162342 push 0x1016f5b8 */
  push32((uint32_t)(0x1016f5b8u));
  /* 10162347 push 0x10173940 */
  push32((uint32_t)(0x10173940u));
  /* 1016234c call eax */
  call_ind((uint32_t)(EAX), 0x1016234eu);
  /* 1016234e mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10162353 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10162356 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10162358 je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 1016235e push 0x1016f5b0 */
  push32((uint32_t)(0x1016f5b0u));
  /* 10162363 push 0x10173800 */
  push32((uint32_t)(0x10173800u));
  /* 10162368 call eax */
  call_ind((uint32_t)(EAX), 0x1016236au);
  /* 1016236a mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 1016236f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10162372 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10162374 je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 1016237a push 0x1016f5a8 */
  push32((uint32_t)(0x1016f5a8u));
  /* 1016237f push 0x10176150 */
  push32((uint32_t)(0x10176150u));
  /* 10162384 call eax */
  call_ind((uint32_t)(EAX), 0x10162386u);
  /* 10162386 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 1016238b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016238e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10162390 je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 10162396 push 0x1016f5a0 */
  push32((uint32_t)(0x1016f5a0u));
  /* 1016239b push 0x101739a0 */
  push32((uint32_t)(0x101739a0u));
  /* 101623a0 call eax */
  call_ind((uint32_t)(EAX), 0x101623a2u);
  /* 101623a2 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 101623a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101623aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101623ac je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 101623b2 push 0x1016f598 */
  push32((uint32_t)(0x1016f598u));
  /* 101623b7 push 0x10176258 */
  push32((uint32_t)(0x10176258u));
  /* 101623bc call eax */
  call_ind((uint32_t)(EAX), 0x101623beu);
  /* 101623be mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 101623c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101623c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101623c8 je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 101623ce push 0x1016f590 */
  push32((uint32_t)(0x1016f590u));
  /* 101623d3 push 0x10176260 */
  push32((uint32_t)(0x10176260u));
  /* 101623d8 call eax */
  call_ind((uint32_t)(EAX), 0x101623dau);
  /* 101623da mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 101623df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101623e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101623e4 je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 101623ea push 0x1016f588 */
  push32((uint32_t)(0x1016f588u));
  /* 101623ef push 0x101738d0 */
  push32((uint32_t)(0x101738d0u));
  /* 101623f4 call eax */
  call_ind((uint32_t)(EAX), 0x101623f6u);
  /* 101623f6 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 101623fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101623fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10162400 je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 10162406 push 0x1016f580 */
  push32((uint32_t)(0x1016f580u));
  /* 1016240b push 0x101738e0 */
  push32((uint32_t)(0x101738e0u));
  /* 10162410 call eax */
  call_ind((uint32_t)(EAX), 0x10162412u);
  /* 10162412 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10162417 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016241a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016241c je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 10162422 push 0x1016f578 */
  push32((uint32_t)(0x1016f578u));
  /* 10162427 push 0x101737c8 */
  push32((uint32_t)(0x101737c8u));
  /* 1016242c call eax */
  call_ind((uint32_t)(EAX), 0x1016242eu);
  /* 1016242e mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10162433 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10162436 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10162438 je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 1016243e push 0x1016f570 */
  push32((uint32_t)(0x1016f570u));
  /* 10162443 push 0x10173688 */
  push32((uint32_t)(0x10173688u));
  /* 10162448 call eax */
  call_ind((uint32_t)(EAX), 0x1016244au);
  /* 1016244a mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 1016244f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10162452 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10162454 je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 1016245a push 0x1016f568 */
  push32((uint32_t)(0x1016f568u));
  /* 1016245f push 0x10173768 */
  push32((uint32_t)(0x10173768u));
  /* 10162464 call eax */
  call_ind((uint32_t)(EAX), 0x10162466u);
  /* 10162466 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 1016246b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016246e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10162470 je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 10162476 push 0x1016f560 */
  push32((uint32_t)(0x1016f560u));
  /* 1016247b push 0x10173690 */
  push32((uint32_t)(0x10173690u));
  /* 10162480 call eax */
  call_ind((uint32_t)(EAX), 0x10162482u);
  /* 10162482 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10162487 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016248a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016248c je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 10162492 push 0x1016f54c */
  push32((uint32_t)(0x1016f54cu));
  /* 10162497 push 0x10176348 */
  push32((uint32_t)(0x10176348u));
  /* 1016249c call eax */
  call_ind((uint32_t)(EAX), 0x1016249eu);
  /* 1016249e mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 101624a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101624a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101624a8 je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 101624aa push 0x1016f538 */
  push32((uint32_t)(0x1016f538u));
  /* 101624af push 0x10176330 */
  push32((uint32_t)(0x10176330u));
  /* 101624b4 call eax */
  call_ind((uint32_t)(EAX), 0x101624b6u);
  /* 101624b6 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 101624bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101624be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101624c0 je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 101624c2 push 0x1016f524 */
  push32((uint32_t)(0x1016f524u));
  /* 101624c7 push 0x10176340 */
  push32((uint32_t)(0x10176340u));
  /* 101624cc call eax */
  call_ind((uint32_t)(EAX), 0x101624ceu);
  /* 101624ce mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 101624d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101624d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101624d8 je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 101624da push 0x1016f510 */
  push32((uint32_t)(0x1016f510u));
  /* 101624df push 0x10176320 */
  push32((uint32_t)(0x10176320u));
  /* 101624e4 call eax */
  call_ind((uint32_t)(EAX), 0x101624e6u);
  /* 101624e6 mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 101624eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101624ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101624f0 je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 101624f2 push 0x1016f4fc */
  push32((uint32_t)(0x1016f4fcu));
  /* 101624f7 push 0x10176328 */
  push32((uint32_t)(0x10176328u));
  /* 101624fc call eax */
  call_ind((uint32_t)(EAX), 0x101624feu);
  /* 101624fe mov eax, dword ptr [0x1017645c] */
  EAX = (r32((uint32_t)(0x1017645c)));
  /* 10162503 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10162506 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10162508 je 0x10162519 */
  if (C.zf) goto L_10162519;
  /* 1016250a push 0x1016f4e8 */
  push32((uint32_t)(0x1016f4e8u));
  /* 1016250f push 0x10176318 */
  push32((uint32_t)(0x10176318u));
  /* 10162514 call eax */
  call_ind((uint32_t)(EAX), 0x10162516u);
  /* 10162516 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10162519:;
  /* 10162519 push 4 */
  push32((uint32_t)(0x4u));
  /* 1016251b push 4 */
  push32((uint32_t)(0x4u));
  /* 1016251d push 9 */
  push32((uint32_t)(0x9u));
  /* 1016251f call dword ptr [0x10176574] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176574))), 0x10162525u);
  /* 10162525 push 6 */
  push32((uint32_t)(0x6u));
  /* 10162527 call dword ptr [0x10176580] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176580))), 0x1016252du);
  /* 1016252d push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1016252f push 0x1016f4d4 */
  push32((uint32_t)(0x1016f4d4u));
  /* 10162534 push 0 */
  push32((uint32_t)(0x0u));
  /* 10162536 call dword ptr [0x10176584] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176584))), 0x1016253cu);
  /* 1016253c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1016253e push 0x1016f4c0 */
  push32((uint32_t)(0x1016f4c0u));
  /* 10162543 push 1 */
  push32((uint32_t)(0x1u));
  /* 10162545 call dword ptr [0x10176584] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176584))), 0x1016254bu);
  /* 1016254b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1016254d push 0x1016f4ac */
  push32((uint32_t)(0x1016f4acu));
  /* 10162552 push 2 */
  push32((uint32_t)(0x2u));
  /* 10162554 call dword ptr [0x10176584] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176584))), 0x1016255au);
  /* 1016255a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1016255c push 0x1016f498 */
  push32((uint32_t)(0x1016f498u));
  /* 10162561 push 3 */
  push32((uint32_t)(0x3u));
  /* 10162563 call dword ptr [0x10176584] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176584))), 0x10162569u);
  /* 10162569 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016256c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1016256e push 0x1016f484 */
  push32((uint32_t)(0x1016f484u));
  /* 10162573 push 4 */
  push32((uint32_t)(0x4u));
  /* 10162575 call dword ptr [0x10176584] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176584))), 0x1016257bu);
  /* 1016257b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1016257d push 0x1016f470 */
  push32((uint32_t)(0x1016f470u));
  /* 10162582 push 5 */
  push32((uint32_t)(0x5u));
  /* 10162584 call dword ptr [0x10176584] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176584))), 0x1016258au);
  /* 1016258a push 0x1016fbe8 */
  push32((uint32_t)(0x1016fbe8u));
  /* 1016258f call dword ptr [0x101765c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765c0))), 0x10162595u);
  /* 10162595 push 0x1016f464 */
  push32((uint32_t)(0x1016f464u));
  /* 1016259a call dword ptr [0x101765bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765bc))), 0x101625a0u);
  /* 101625a0 push 0x1016f454 */
  push32((uint32_t)(0x1016f454u));
  /* 101625a5 call dword ptr [0x101765c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765c4))), 0x101625abu);
  /* 101625ab push 0x1016f448 */
  push32((uint32_t)(0x1016f448u));
  /* 101625b0 call dword ptr [0x101765cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765cc))), 0x101625b6u);
  /* 101625b6 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 101625bb call dword ptr [0x10176588] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176588))), 0x101625c1u);
  /* 101625c1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101625c3 call dword ptr [0x1017658c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017658c))), 0x101625c9u);
  /* 101625c9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101625cb call dword ptr [0x10176590] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176590))), 0x101625d1u);
  /* 101625d1 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 101625d6 call dword ptr [0x10176594] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176594))), 0x101625dcu);
  /* 101625dc push 5 */
  push32((uint32_t)(0x5u));
  /* 101625de call dword ptr [0x10176598] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176598))), 0x101625e4u);
  /* 101625e4 add esp, 0x9c */
  { uint32_t _a=(ESP),_b=(0x9cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101625ea ret  */
  ESPCHK(0x10161010u, _esp0);
  ESP += 4; return;
}

/* FUN_100025f0 @ 0x101625f0 (20 bytes, 7 insns) */
void f_101625f0(void) {
  FTRACE(0x101625f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101625f0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101625f4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101625f8 push eax */
  push32((uint32_t)(EAX));
  /* 101625f9 push ecx */
  push32((uint32_t)(ECX));
  /* 101625fa call dword ptr [0x10176570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176570))), 0x10162600u);
  /* 10162600 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10162603 ret  */
  ESPCHK(0x101625f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002610 @ 0x10162610 (25 bytes, 9 insns) */
void f_10162610(void) {
  FTRACE(0x10162610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10162610 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10162614 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10162618 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1016261c push eax */
  push32((uint32_t)(EAX));
  /* 1016261d push ecx */
  push32((uint32_t)(ECX));
  /* 1016261e push edx */
  push32((uint32_t)(EDX));
  /* 1016261f call dword ptr [0x1017657c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017657c))), 0x10162625u);
  /* 10162625 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10162628 ret  */
  ESPCHK(0x10162610u, _esp0);
  ESP += 4; return;
}

/* FUN_10002630 @ 0x10162630 (6 bytes, 1 insns) */
void f_10162630(void) {
  FTRACE(0x10162630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10162630 jmp dword ptr [0x101765a8] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x101765a8)))); return;
}

/* FUN_10002640 @ 0x10162640 (20 bytes, 7 insns) */
void f_10162640(void) {
  FTRACE(0x10162640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10162640 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10162644 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10162648 push eax */
  push32((uint32_t)(EAX));
  /* 10162649 push ecx */
  push32((uint32_t)(ECX));
  /* 1016264a call dword ptr [0x101765c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765c8))), 0x10162650u);
  /* 10162650 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10162653 ret  */
  ESPCHK(0x10162640u, _esp0);
  ESP += 4; return;
}

/* FUN_10002660 @ 0x10162660 (6 bytes, 1 insns) */
void f_10162660(void) {
  FTRACE(0x10162660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10162660 jmp dword ptr [0x101765d4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x101765d4)))); return;
}

/* FUN_10002670 @ 0x10162670 (6 bytes, 1 insns) */
void f_10162670(void) {
  FTRACE(0x10162670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10162670 jmp dword ptr [0x101765d8] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x101765d8)))); return;
}

/* FUN_10002680 @ 0x10162680 (6 bytes, 1 insns) */
void f_10162680(void) {
  FTRACE(0x10162680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10162680 jmp dword ptr [0x101765e0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x101765e0)))); return;
}

/* FUN_10002690 @ 0x10162690 (13 bytes, 5 insns) */
void f_10162690(void) {
  FTRACE(0x10162690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10162690 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10162694 push eax */
  push32((uint32_t)(EAX));
  /* 10162695 call dword ptr [0x101765e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765e4))), 0x1016269bu);
  /* 1016269b pop ecx */
  ECX = (pop32());
  /* 1016269c ret  */
  ESPCHK(0x10162690u, _esp0);
  ESP += 4; return;
}

/* FUN_100026a0 @ 0x101626a0 (20 bytes, 7 insns) */
void f_101626a0(void) {
  FTRACE(0x101626a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101626a0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101626a4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101626a8 push eax */
  push32((uint32_t)(EAX));
  /* 101626a9 push ecx */
  push32((uint32_t)(ECX));
  /* 101626aa call dword ptr [0x101765e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765e8))), 0x101626b0u);
  /* 101626b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101626b3 ret  */
  ESPCHK(0x101626a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100026c0 @ 0x101626c0 (6 bytes, 1 insns) */
void f_101626c0(void) {
  FTRACE(0x101626c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101626c0 jmp dword ptr [0x101765ec] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x101765ec)))); return;
}

/* FUN_100026d0 @ 0x101626d0 (20 bytes, 7 insns) */
void f_101626d0(void) {
  FTRACE(0x101626d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101626d0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101626d4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101626d8 push eax */
  push32((uint32_t)(EAX));
  /* 101626d9 push ecx */
  push32((uint32_t)(ECX));
  /* 101626da call dword ptr [0x101762c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101762c8))), 0x101626e0u);
  /* 101626e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101626e3 ret  */
  ESPCHK(0x101626d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100026f0 @ 0x101626f0 (15 bytes, 5 insns) */
void f_101626f0(void) {
  FTRACE(0x101626f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101626f0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101626f4 push eax */
  push32((uint32_t)(EAX));
  /* 101626f5 call dword ptr [0x10176310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176310))), 0x101626fbu);
  /* 101626fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101626fe ret  */
  ESPCHK(0x101626f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002700 @ 0x10162700 (20 bytes, 7 insns) */
void f_10162700(void) {
  FTRACE(0x10162700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10162700 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10162704 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10162708 push eax */
  push32((uint32_t)(EAX));
  /* 10162709 push ecx */
  push32((uint32_t)(ECX));
  /* 1016270a call dword ptr [0x10173790] */
  call_ind((uint32_t)(r32((uint32_t)(0x10173790))), 0x10162710u);
  /* 10162710 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10162713 ret  */
  ESPCHK(0x10162700u, _esp0);
  ESP += 4; return;
}

/* FUN_10002720 @ 0x10162720 (13 bytes, 5 insns) */
void f_10162720(void) {
  FTRACE(0x10162720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10162720 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10162724 push eax */
  push32((uint32_t)(EAX));
  /* 10162725 call dword ptr [0x10173930] */
  call_ind((uint32_t)(r32((uint32_t)(0x10173930))), 0x1016272bu);
  /* 1016272b pop ecx */
  ECX = (pop32());
  /* 1016272c ret  */
  ESPCHK(0x10162720u, _esp0);
  ESP += 4; return;
}

/* FUN_10002730 @ 0x10162730 (15 bytes, 5 insns) */
void f_10162730(void) {
  FTRACE(0x10162730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10162730 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10162734 push eax */
  push32((uint32_t)(EAX));
  /* 10162735 call dword ptr [0x101765f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765f0))), 0x1016273bu);
  /* 1016273b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016273e ret  */
  ESPCHK(0x10162730u, _esp0);
  ESP += 4; return;
}

/* FUN_10002740 @ 0x10162740 (25 bytes, 9 insns) */
void f_10162740(void) {
  FTRACE(0x10162740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10162740 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10162744 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10162748 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1016274c push eax */
  push32((uint32_t)(EAX));
  /* 1016274d push ecx */
  push32((uint32_t)(ECX));
  /* 1016274e push edx */
  push32((uint32_t)(EDX));
  /* 1016274f call dword ptr [0x10176020] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176020))), 0x10162755u);
  /* 10162755 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10162758 ret  */
  ESPCHK(0x10162740u, _esp0);
  ESP += 4; return;
}

/* FUN_10002760 @ 0x10162760 (13 bytes, 5 insns) */
void f_10162760(void) {
  FTRACE(0x10162760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10162760 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10162764 push eax */
  push32((uint32_t)(EAX));
  /* 10162765 call dword ptr [0x10173990] */
  call_ind((uint32_t)(r32((uint32_t)(0x10173990))), 0x1016276bu);
  /* 1016276b pop ecx */
  ECX = (pop32());
  /* 1016276c ret  */
  ESPCHK(0x10162760u, _esp0);
  ESP += 4; return;
}

/* FUN_10002770 @ 0x10162770 (6 bytes, 1 insns) */
void f_10162770(void) {
  FTRACE(0x10162770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10162770 jmp dword ptr [0x101762a8] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x101762a8)))); return;
}

/* FUN_10002780 @ 0x10162780 (6 bytes, 1 insns) */
void f_10162780(void) {
  FTRACE(0x10162780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10162780 jmp dword ptr [0x101739a8] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x101739a8)))); return;
}

/* FUN_10002790 @ 0x10162790 (82 bytes, 28 insns) */
void f_10162790(void) {
  FTRACE(0x10162790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10162790 mov eax, dword ptr [0x10176440] */
  EAX = (r32((uint32_t)(0x10176440)));
  /* 10162795 sub esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016279b push esi */
  push32((uint32_t)(ESI));
  /* 1016279c push edi */
  push32((uint32_t)(EDI));
  /* 1016279d mov edi, dword ptr [esp + 0x10c] */
  EDI = (r32((uint32_t)(ESP + 0x10c)));
  /* 101627a4 push edi */
  push32((uint32_t)(EDI));
  /* 101627a5 push eax */
  push32((uint32_t)(EAX));
  /* 101627a6 call dword ptr [0x1016e088] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e088))), 0x101627acu);
  /* 101627ac mov esi, eax */
  ESI = (EAX);
  /* 101627ae test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101627b0 jne 0x101627d7 */
  if (!C.zf) goto L_101627d7;
  /* 101627b2 push edi */
  push32((uint32_t)(EDI));
  /* 101627b3 lea ecx, [esp + 0xc] */
  ECX = ((uint32_t)(ESP + 0xc));
  /* 101627b7 push 0x1016ff6c */
  push32((uint32_t)(0x1016ff6cu));
  /* 101627bc push ecx */
  push32((uint32_t)(ECX));
  /* 101627bd call 0x10166e70 */
  push32(0x101627c2u); f_10166e70();
  /* 101627c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101627c5 lea edx, [esp + 8] */
  EDX = ((uint32_t)(ESP + 0x8));
  /* 101627c9 push esi */
  push32((uint32_t)(ESI));
  /* 101627ca push 0x1016ff5c */
  push32((uint32_t)(0x1016ff5cu));
  /* 101627cf push edx */
  push32((uint32_t)(EDX));
  /* 101627d0 push esi */
  push32((uint32_t)(ESI));
  /* 101627d1 call dword ptr [0x1016e0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e0dc))), 0x101627d7u);
L_101627d7:;
  /* 101627d7 mov eax, esi */
  EAX = (ESI);
  /* 101627d9 pop edi */
  EDI = (pop32());
  /* 101627da pop esi */
  ESI = (pop32());
  /* 101627db add esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101627e1 ret  */
  ESPCHK(0x10162790u, _esp0);
  ESP += 4; return;
}

/* FUN_100027f0 @ 0x101627f0 (1844 bytes, 376 insns) */
void f_101627f0(void) {
  FTRACE(0x101627f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101627f0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101627f4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101627f5 jne 0x10162f1c */
  if (!C.zf) goto L_10162f1c;
  /* 101627fb push 0x101706c0 */
  push32((uint32_t)(0x101706c0u));
  /* 10162800 call dword ptr [0x1016e004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e004))), 0x10162806u);
  /* 10162806 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10162808 mov dword ptr [0x10176440], eax */
  w32((uint32_t)(0x10176440), (EAX));
  /* 1016280d jne 0x10162829 */
  if (!C.zf) goto L_10162829;
  /* 1016280f push eax */
  push32((uint32_t)(EAX));
  /* 10162810 push 0x101706b8 */
  push32((uint32_t)(0x101706b8u));
  /* 10162815 push 0x101706a0 */
  push32((uint32_t)(0x101706a0u));
  /* 1016281a push eax */
  push32((uint32_t)(EAX));
  /* 1016281b call dword ptr [0x1016e0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e0dc))), 0x10162821u);
  /* 10162821 mov eax, 1 */
  EAX = (0x1u);
  /* 10162826 ret 0xc */
  ESPCHK(0x101627f0u, _esp0);
  ESP += 16; return;
L_10162829:;
  /* 10162829 push 0x10170690 */
  push32((uint32_t)(0x10170690u));
  /* 1016282e call 0x10162790 */
  push32(0x10162833u); f_10162790();
  /* 10162833 push 0x10170680 */
  push32((uint32_t)(0x10170680u));
  /* 10162838 mov dword ptr [0x10176444], eax */
  w32((uint32_t)(0x10176444), (EAX));
  /* 1016283d call 0x10162790 */
  push32(0x10162842u); f_10162790();
  /* 10162842 push 0x10170670 */
  push32((uint32_t)(0x10170670u));
  /* 10162847 mov dword ptr [0x10176448], eax */
  w32((uint32_t)(0x10176448), (EAX));
  /* 1016284c call 0x10162790 */
  push32(0x10162851u); f_10162790();
  /* 10162851 push 0x10170664 */
  push32((uint32_t)(0x10170664u));
  /* 10162856 mov dword ptr [0x1017644c], eax */
  w32((uint32_t)(0x1017644c), (EAX));
  /* 1016285b call 0x10162790 */
  push32(0x10162860u); f_10162790();
  /* 10162860 push 0x10170654 */
  push32((uint32_t)(0x10170654u));
  /* 10162865 mov dword ptr [0x10176450], eax */
  w32((uint32_t)(0x10176450), (EAX));
  /* 1016286a call 0x10162790 */
  push32(0x1016286fu); f_10162790();
  /* 1016286f push 0x10170640 */
  push32((uint32_t)(0x10170640u));
  /* 10162874 mov dword ptr [0x10176454], eax */
  w32((uint32_t)(0x10176454), (EAX));
  /* 10162879 call 0x10162790 */
  push32(0x1016287eu); f_10162790();
  /* 1016287e push 0x10170630 */
  push32((uint32_t)(0x10170630u));
  /* 10162883 mov dword ptr [0x10176458], eax */
  w32((uint32_t)(0x10176458), (EAX));
  /* 10162888 call 0x10162790 */
  push32(0x1016288du); f_10162790();
  /* 1016288d push 0x10170620 */
  push32((uint32_t)(0x10170620u));
  /* 10162892 mov dword ptr [0x1017645c], eax */
  w32((uint32_t)(0x1017645c), (EAX));
  /* 10162897 call 0x10162790 */
  push32(0x1016289cu); f_10162790();
  /* 1016289c push 0x1017060c */
  push32((uint32_t)(0x1017060cu));
  /* 101628a1 mov dword ptr [0x10176460], eax */
  w32((uint32_t)(0x10176460), (EAX));
  /* 101628a6 call 0x10162790 */
  push32(0x101628abu); f_10162790();
  /* 101628ab push 0x101705f8 */
  push32((uint32_t)(0x101705f8u));
  /* 101628b0 mov dword ptr [0x10176464], eax */
  w32((uint32_t)(0x10176464), (EAX));
  /* 101628b5 call 0x10162790 */
  push32(0x101628bau); f_10162790();
  /* 101628ba push 0x101705e8 */
  push32((uint32_t)(0x101705e8u));
  /* 101628bf mov dword ptr [0x10176468], eax */
  w32((uint32_t)(0x10176468), (EAX));
  /* 101628c4 call 0x10162790 */
  push32(0x101628c9u); f_10162790();
  /* 101628c9 push 0x101705d8 */
  push32((uint32_t)(0x101705d8u));
  /* 101628ce mov dword ptr [0x1017646c], eax */
  w32((uint32_t)(0x1017646c), (EAX));
  /* 101628d3 call 0x10162790 */
  push32(0x101628d8u); f_10162790();
  /* 101628d8 push 0x101705c8 */
  push32((uint32_t)(0x101705c8u));
  /* 101628dd mov dword ptr [0x10176470], eax */
  w32((uint32_t)(0x10176470), (EAX));
  /* 101628e2 call 0x10162790 */
  push32(0x101628e7u); f_10162790();
  /* 101628e7 push 0x101705b8 */
  push32((uint32_t)(0x101705b8u));
  /* 101628ec mov dword ptr [0x10176474], eax */
  w32((uint32_t)(0x10176474), (EAX));
  /* 101628f1 call 0x10162790 */
  push32(0x101628f6u); f_10162790();
  /* 101628f6 push 0x101705a8 */
  push32((uint32_t)(0x101705a8u));
  /* 101628fb mov dword ptr [0x10176478], eax */
  w32((uint32_t)(0x10176478), (EAX));
  /* 10162900 call 0x10162790 */
  push32(0x10162905u); f_10162790();
  /* 10162905 push 0x10170598 */
  push32((uint32_t)(0x10170598u));
  /* 1016290a mov dword ptr [0x1017647c], eax */
  w32((uint32_t)(0x1017647c), (EAX));
  /* 1016290f call 0x10162790 */
  push32(0x10162914u); f_10162790();
  /* 10162914 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10162917 mov dword ptr [0x10176480], eax */
  w32((uint32_t)(0x10176480), (EAX));
  /* 1016291c push 0x10170588 */
  push32((uint32_t)(0x10170588u));
  /* 10162921 call 0x10162790 */
  push32(0x10162926u); f_10162790();
  /* 10162926 push 0x10170578 */
  push32((uint32_t)(0x10170578u));
  /* 1016292b mov dword ptr [0x10176484], eax */
  w32((uint32_t)(0x10176484), (EAX));
  /* 10162930 call 0x10162790 */
  push32(0x10162935u); f_10162790();
  /* 10162935 push 0x10170564 */
  push32((uint32_t)(0x10170564u));
  /* 1016293a mov dword ptr [0x10176488], eax */
  w32((uint32_t)(0x10176488), (EAX));
  /* 1016293f call 0x10162790 */
  push32(0x10162944u); f_10162790();
  /* 10162944 push 0x1017055c */
  push32((uint32_t)(0x1017055cu));
  /* 10162949 mov dword ptr [0x1017648c], eax */
  w32((uint32_t)(0x1017648c), (EAX));
  /* 1016294e call 0x10162790 */
  push32(0x10162953u); f_10162790();
  /* 10162953 push 0x1017054c */
  push32((uint32_t)(0x1017054cu));
  /* 10162958 mov dword ptr [0x10176490], eax */
  w32((uint32_t)(0x10176490), (EAX));
  /* 1016295d call 0x10162790 */
  push32(0x10162962u); f_10162790();
  /* 10162962 push 0x1017053c */
  push32((uint32_t)(0x1017053cu));
  /* 10162967 mov dword ptr [0x10176494], eax */
  w32((uint32_t)(0x10176494), (EAX));
  /* 1016296c call 0x10162790 */
  push32(0x10162971u); f_10162790();
  /* 10162971 push 0x10170530 */
  push32((uint32_t)(0x10170530u));
  /* 10162976 mov dword ptr [0x10176498], eax */
  w32((uint32_t)(0x10176498), (EAX));
  /* 1016297b call 0x10162790 */
  push32(0x10162980u); f_10162790();
  /* 10162980 push 0x10170520 */
  push32((uint32_t)(0x10170520u));
  /* 10162985 mov dword ptr [0x1017649c], eax */
  w32((uint32_t)(0x1017649c), (EAX));
  /* 1016298a call 0x10162790 */
  push32(0x1016298fu); f_10162790();
  /* 1016298f push 0x10170518 */
  push32((uint32_t)(0x10170518u));
  /* 10162994 mov dword ptr [0x101764a0], eax */
  w32((uint32_t)(0x101764a0), (EAX));
  /* 10162999 call 0x10162790 */
  push32(0x1016299eu); f_10162790();
  /* 1016299e push 0x10170508 */
  push32((uint32_t)(0x10170508u));
  /* 101629a3 mov dword ptr [0x101764b8], eax */
  w32((uint32_t)(0x101764b8), (EAX));
  /* 101629a8 call 0x10162790 */
  push32(0x101629adu); f_10162790();
  /* 101629ad push 0x101704f8 */
  push32((uint32_t)(0x101704f8u));
  /* 101629b2 mov dword ptr [0x101764bc], eax */
  w32((uint32_t)(0x101764bc), (EAX));
  /* 101629b7 call 0x10162790 */
  push32(0x101629bcu); f_10162790();
  /* 101629bc push 0x101704ec */
  push32((uint32_t)(0x101704ecu));
  /* 101629c1 mov dword ptr [0x101764c0], eax */
  w32((uint32_t)(0x101764c0), (EAX));
  /* 101629c6 call 0x10162790 */
  push32(0x101629cbu); f_10162790();
  /* 101629cb push 0x101704dc */
  push32((uint32_t)(0x101704dcu));
  /* 101629d0 mov dword ptr [0x101764c4], eax */
  w32((uint32_t)(0x101764c4), (EAX));
  /* 101629d5 call 0x10162790 */
  push32(0x101629dau); f_10162790();
  /* 101629da push 0x101704d0 */
  push32((uint32_t)(0x101704d0u));
  /* 101629df mov dword ptr [0x101764c8], eax */
  w32((uint32_t)(0x101764c8), (EAX));
  /* 101629e4 call 0x10162790 */
  push32(0x101629e9u); f_10162790();
  /* 101629e9 push 0x101704c0 */
  push32((uint32_t)(0x101704c0u));
  /* 101629ee mov dword ptr [0x101764e4], eax */
  w32((uint32_t)(0x101764e4), (EAX));
  /* 101629f3 call 0x10162790 */
  push32(0x101629f8u); f_10162790();
  /* 101629f8 push 0x101704b8 */
  push32((uint32_t)(0x101704b8u));
  /* 101629fd mov dword ptr [0x101764cc], eax */
  w32((uint32_t)(0x101764cc), (EAX));
  /* 10162a02 call 0x10162790 */
  push32(0x10162a07u); f_10162790();
  /* 10162a07 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10162a0a mov dword ptr [0x101764d0], eax */
  w32((uint32_t)(0x101764d0), (EAX));
  /* 10162a0f push 0x101704a8 */
  push32((uint32_t)(0x101704a8u));
  /* 10162a14 call 0x10162790 */
  push32(0x10162a19u); f_10162790();
  /* 10162a19 push 0x10170498 */
  push32((uint32_t)(0x10170498u));
  /* 10162a1e mov dword ptr [0x101764d4], eax */
  w32((uint32_t)(0x101764d4), (EAX));
  /* 10162a23 call 0x10162790 */
  push32(0x10162a28u); f_10162790();
  /* 10162a28 push 0x10170488 */
  push32((uint32_t)(0x10170488u));
  /* 10162a2d mov dword ptr [0x101764d8], eax */
  w32((uint32_t)(0x101764d8), (EAX));
  /* 10162a32 call 0x10162790 */
  push32(0x10162a37u); f_10162790();
  /* 10162a37 push 0x1017047c */
  push32((uint32_t)(0x1017047cu));
  /* 10162a3c mov dword ptr [0x101764dc], eax */
  w32((uint32_t)(0x101764dc), (EAX));
  /* 10162a41 call 0x10162790 */
  push32(0x10162a46u); f_10162790();
  /* 10162a46 push 0x10170474 */
  push32((uint32_t)(0x10170474u));
  /* 10162a4b mov dword ptr [0x101764e0], eax */
  w32((uint32_t)(0x101764e0), (EAX));
  /* 10162a50 call 0x10162790 */
  push32(0x10162a55u); f_10162790();
  /* 10162a55 push 0x10170464 */
  push32((uint32_t)(0x10170464u));
  /* 10162a5a mov dword ptr [0x101764e8], eax */
  w32((uint32_t)(0x101764e8), (EAX));
  /* 10162a5f call 0x10162790 */
  push32(0x10162a64u); f_10162790();
  /* 10162a64 push 0x10170454 */
  push32((uint32_t)(0x10170454u));
  /* 10162a69 mov dword ptr [0x101764ec], eax */
  w32((uint32_t)(0x101764ec), (EAX));
  /* 10162a6e call 0x10162790 */
  push32(0x10162a73u); f_10162790();
  /* 10162a73 push 0x10170444 */
  push32((uint32_t)(0x10170444u));
  /* 10162a78 mov dword ptr [0x101764f0], eax */
  w32((uint32_t)(0x101764f0), (EAX));
  /* 10162a7d call 0x10162790 */
  push32(0x10162a82u); f_10162790();
  /* 10162a82 push 0x10170434 */
  push32((uint32_t)(0x10170434u));
  /* 10162a87 mov dword ptr [0x101764f4], eax */
  w32((uint32_t)(0x101764f4), (EAX));
  /* 10162a8c call 0x10162790 */
  push32(0x10162a91u); f_10162790();
  /* 10162a91 push 0x10170428 */
  push32((uint32_t)(0x10170428u));
  /* 10162a96 mov dword ptr [0x101764f8], eax */
  w32((uint32_t)(0x101764f8), (EAX));
  /* 10162a9b call 0x10162790 */
  push32(0x10162aa0u); f_10162790();
  /* 10162aa0 push 0x1017041c */
  push32((uint32_t)(0x1017041cu));
  /* 10162aa5 mov dword ptr [0x101764fc], eax */
  w32((uint32_t)(0x101764fc), (EAX));
  /* 10162aaa call 0x10162790 */
  push32(0x10162aafu); f_10162790();
  /* 10162aaf push 0x1017040c */
  push32((uint32_t)(0x1017040cu));
  /* 10162ab4 mov dword ptr [0x10176500], eax */
  w32((uint32_t)(0x10176500), (EAX));
  /* 10162ab9 call 0x10162790 */
  push32(0x10162abeu); f_10162790();
  /* 10162abe push 0x10170400 */
  push32((uint32_t)(0x10170400u));
  /* 10162ac3 mov dword ptr [0x10176504], eax */
  w32((uint32_t)(0x10176504), (EAX));
  /* 10162ac8 call 0x10162790 */
  push32(0x10162acdu); f_10162790();
  /* 10162acd push 0x101703f4 */
  push32((uint32_t)(0x101703f4u));
  /* 10162ad2 mov dword ptr [0x10176508], eax */
  w32((uint32_t)(0x10176508), (EAX));
  /* 10162ad7 call 0x10162790 */
  push32(0x10162adcu); f_10162790();
  /* 10162adc push 0x101703e8 */
  push32((uint32_t)(0x101703e8u));
  /* 10162ae1 mov dword ptr [0x1017650c], eax */
  w32((uint32_t)(0x1017650c), (EAX));
  /* 10162ae6 call 0x10162790 */
  push32(0x10162aebu); f_10162790();
  /* 10162aeb push 0x101703dc */
  push32((uint32_t)(0x101703dcu));
  /* 10162af0 mov dword ptr [0x10176240], eax */
  w32((uint32_t)(0x10176240), (EAX));
  /* 10162af5 call 0x10162790 */
  push32(0x10162afau); f_10162790();
  /* 10162afa add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10162afd mov dword ptr [0x10176510], eax */
  w32((uint32_t)(0x10176510), (EAX));
  /* 10162b02 push 0x101703d0 */
  push32((uint32_t)(0x101703d0u));
  /* 10162b07 call 0x10162790 */
  push32(0x10162b0cu); f_10162790();
  /* 10162b0c push 0x101703c4 */
  push32((uint32_t)(0x101703c4u));
  /* 10162b11 mov dword ptr [0x10176514], eax */
  w32((uint32_t)(0x10176514), (EAX));
  /* 10162b16 call 0x10162790 */
  push32(0x10162b1bu); f_10162790();
  /* 10162b1b push 0x101703b4 */
  push32((uint32_t)(0x101703b4u));
  /* 10162b20 mov dword ptr [0x10176518], eax */
  w32((uint32_t)(0x10176518), (EAX));
  /* 10162b25 call 0x10162790 */
  push32(0x10162b2au); f_10162790();
  /* 10162b2a push 0x101703a8 */
  push32((uint32_t)(0x101703a8u));
  /* 10162b2f mov dword ptr [0x1017651c], eax */
  w32((uint32_t)(0x1017651c), (EAX));
  /* 10162b34 call 0x10162790 */
  push32(0x10162b39u); f_10162790();
  /* 10162b39 push 0x1017039c */
  push32((uint32_t)(0x1017039cu));
  /* 10162b3e mov dword ptr [0x10176520], eax */
  w32((uint32_t)(0x10176520), (EAX));
  /* 10162b43 call 0x10162790 */
  push32(0x10162b48u); f_10162790();
  /* 10162b48 mov dword ptr [0x10176524], eax */
  w32((uint32_t)(0x10176524), (EAX));
  /* 10162b4d push 0x1017038c */
  push32((uint32_t)(0x1017038cu));
  /* 10162b52 call 0x10162790 */
  push32(0x10162b57u); f_10162790();
  /* 10162b57 push 0x1017037c */
  push32((uint32_t)(0x1017037cu));
  /* 10162b5c mov dword ptr [0x10176528], eax */
  w32((uint32_t)(0x10176528), (EAX));
  /* 10162b61 call 0x10162790 */
  push32(0x10162b66u); f_10162790();
  /* 10162b66 push 0x10170370 */
  push32((uint32_t)(0x10170370u));
  /* 10162b6b mov dword ptr [0x1017652c], eax */
  w32((uint32_t)(0x1017652c), (EAX));
  /* 10162b70 call 0x10162790 */
  push32(0x10162b75u); f_10162790();
  /* 10162b75 push 0x10170368 */
  push32((uint32_t)(0x10170368u));
  /* 10162b7a mov dword ptr [0x10176530], eax */
  w32((uint32_t)(0x10176530), (EAX));
  /* 10162b7f call 0x10162790 */
  push32(0x10162b84u); f_10162790();
  /* 10162b84 push 0x10170358 */
  push32((uint32_t)(0x10170358u));
  /* 10162b89 mov dword ptr [0x10176534], eax */
  w32((uint32_t)(0x10176534), (EAX));
  /* 10162b8e call 0x10162790 */
  push32(0x10162b93u); f_10162790();
  /* 10162b93 push 0x10170350 */
  push32((uint32_t)(0x10170350u));
  /* 10162b98 mov dword ptr [0x10176538], eax */
  w32((uint32_t)(0x10176538), (EAX));
  /* 10162b9d call 0x10162790 */
  push32(0x10162ba2u); f_10162790();
  /* 10162ba2 push 0x10170344 */
  push32((uint32_t)(0x10170344u));
  /* 10162ba7 mov dword ptr [0x1017653c], eax */
  w32((uint32_t)(0x1017653c), (EAX));
  /* 10162bac call 0x10162790 */
  push32(0x10162bb1u); f_10162790();
  /* 10162bb1 push 0x1017033c */
  push32((uint32_t)(0x1017033cu));
  /* 10162bb6 mov dword ptr [0x10176540], eax */
  w32((uint32_t)(0x10176540), (EAX));
  /* 10162bbb call 0x10162790 */
  push32(0x10162bc0u); f_10162790();
  /* 10162bc0 push 0x10170328 */
  push32((uint32_t)(0x10170328u));
  /* 10162bc5 mov dword ptr [0x10176544], eax */
  w32((uint32_t)(0x10176544), (EAX));
  /* 10162bca call 0x10162790 */
  push32(0x10162bcfu); f_10162790();
  /* 10162bcf push 0x1017031c */
  push32((uint32_t)(0x1017031cu));
  /* 10162bd4 mov dword ptr [0x10173698], eax */
  w32((uint32_t)(0x10173698), (EAX));
  /* 10162bd9 call 0x10162790 */
  push32(0x10162bdeu); f_10162790();
  /* 10162bde push 0x10170310 */
  push32((uint32_t)(0x10170310u));
  /* 10162be3 mov dword ptr [0x10176550], eax */
  w32((uint32_t)(0x10176550), (EAX));
  /* 10162be8 call 0x10162790 */
  push32(0x10162bedu); f_10162790();
  /* 10162bed add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10162bf0 mov dword ptr [0x1017654c], eax */
  w32((uint32_t)(0x1017654c), (EAX));
  /* 10162bf5 push 0x101702fc */
  push32((uint32_t)(0x101702fcu));
  /* 10162bfa call 0x10162790 */
  push32(0x10162bffu); f_10162790();
  /* 10162bff push 0x101702ec */
  push32((uint32_t)(0x101702ecu));
  /* 10162c04 mov dword ptr [0x10176554], eax */
  w32((uint32_t)(0x10176554), (EAX));
  /* 10162c09 call 0x10162790 */
  push32(0x10162c0eu); f_10162790();
  /* 10162c0e push 0x101702dc */
  push32((uint32_t)(0x101702dcu));
  /* 10162c13 mov dword ptr [0x10176558], eax */
  w32((uint32_t)(0x10176558), (EAX));
  /* 10162c18 call 0x10162790 */
  push32(0x10162c1du); f_10162790();
  /* 10162c1d push 0x101702cc */
  push32((uint32_t)(0x101702ccu));
  /* 10162c22 mov dword ptr [0x1017655c], eax */
  w32((uint32_t)(0x1017655c), (EAX));
  /* 10162c27 call 0x10162790 */
  push32(0x10162c2cu); f_10162790();
  /* 10162c2c push 0x101702c0 */
  push32((uint32_t)(0x101702c0u));
  /* 10162c31 mov dword ptr [0x101764a8], eax */
  w32((uint32_t)(0x101764a8), (EAX));
  /* 10162c36 call 0x10162790 */
  push32(0x10162c3bu); f_10162790();
  /* 10162c3b push 0x101702b0 */
  push32((uint32_t)(0x101702b0u));
  /* 10162c40 mov dword ptr [0x101764a4], eax */
  w32((uint32_t)(0x101764a4), (EAX));
  /* 10162c45 call 0x10162790 */
  push32(0x10162c4au); f_10162790();
  /* 10162c4a push 0x1017029c */
  push32((uint32_t)(0x1017029cu));
  /* 10162c4f mov dword ptr [0x101764ac], eax */
  w32((uint32_t)(0x101764ac), (EAX));
  /* 10162c54 call 0x10162790 */
  push32(0x10162c59u); f_10162790();
  /* 10162c59 push 0x10170284 */
  push32((uint32_t)(0x10170284u));
  /* 10162c5e mov dword ptr [0x101764b0], eax */
  w32((uint32_t)(0x101764b0), (EAX));
  /* 10162c63 call 0x10162790 */
  push32(0x10162c68u); f_10162790();
  /* 10162c68 push 0x10170274 */
  push32((uint32_t)(0x10170274u));
  /* 10162c6d mov dword ptr [0x101764b4], eax */
  w32((uint32_t)(0x101764b4), (EAX));
  /* 10162c72 call 0x10162790 */
  push32(0x10162c77u); f_10162790();
  /* 10162c77 push 0x1017025c */
  push32((uint32_t)(0x1017025cu));
  /* 10162c7c mov dword ptr [0x10176578], eax */
  w32((uint32_t)(0x10176578), (EAX));
  /* 10162c81 call 0x10162790 */
  push32(0x10162c86u); f_10162790();
  /* 10162c86 push 0x1017024c */
  push32((uint32_t)(0x1017024cu));
  /* 10162c8b mov dword ptr [0x101765a8], eax */
  w32((uint32_t)(0x101765a8), (EAX));
  /* 10162c90 call 0x10162790 */
  push32(0x10162c95u); f_10162790();
  /* 10162c95 push 0x10170244 */
  push32((uint32_t)(0x10170244u));
  /* 10162c9a mov dword ptr [0x10176570], eax */
  w32((uint32_t)(0x10176570), (EAX));
  /* 10162c9f call 0x10162790 */
  push32(0x10162ca4u); f_10162790();
  /* 10162ca4 push 0x10170234 */
  push32((uint32_t)(0x10170234u));
  /* 10162ca9 mov dword ptr [0x1017657c], eax */
  w32((uint32_t)(0x1017657c), (EAX));
  /* 10162cae call 0x10162790 */
  push32(0x10162cb3u); f_10162790();
  /* 10162cb3 push 0x10170228 */
  push32((uint32_t)(0x10170228u));
  /* 10162cb8 mov dword ptr [0x101765c8], eax */
  w32((uint32_t)(0x101765c8), (EAX));
  /* 10162cbd call 0x10162790 */
  push32(0x10162cc2u); f_10162790();
  /* 10162cc2 push 0x10170220 */
  push32((uint32_t)(0x10170220u));
  /* 10162cc7 mov dword ptr [0x10176560], eax */
  w32((uint32_t)(0x10176560), (EAX));
  /* 10162ccc call 0x10162790 */
  push32(0x10162cd1u); f_10162790();
  /* 10162cd1 push 0x10170214 */
  push32((uint32_t)(0x10170214u));
  /* 10162cd6 mov dword ptr [0x10176564], eax */
  w32((uint32_t)(0x10176564), (EAX));
  /* 10162cdb call 0x10162790 */
  push32(0x10162ce0u); f_10162790();
  /* 10162ce0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10162ce3 mov dword ptr [0x10176568], eax */
  w32((uint32_t)(0x10176568), (EAX));
  /* 10162ce8 push 0x10170204 */
  push32((uint32_t)(0x10170204u));
  /* 10162ced call 0x10162790 */
  push32(0x10162cf2u); f_10162790();
  /* 10162cf2 push 0x101701f0 */
  push32((uint32_t)(0x101701f0u));
  /* 10162cf7 mov dword ptr [0x1017656c], eax */
  w32((uint32_t)(0x1017656c), (EAX));
  /* 10162cfc call 0x10162790 */
  push32(0x10162d01u); f_10162790();
  /* 10162d01 push 0x101701d4 */
  push32((uint32_t)(0x101701d4u));
  /* 10162d06 mov dword ptr [0x10176574], eax */
  w32((uint32_t)(0x10176574), (EAX));
  /* 10162d0b call 0x10162790 */
  push32(0x10162d10u); f_10162790();
  /* 10162d10 push 0x101701c0 */
  push32((uint32_t)(0x101701c0u));
  /* 10162d15 mov dword ptr [0x10176580], eax */
  w32((uint32_t)(0x10176580), (EAX));
  /* 10162d1a call 0x10162790 */
  push32(0x10162d1fu); f_10162790();
  /* 10162d1f push 0x101701b4 */
  push32((uint32_t)(0x101701b4u));
  /* 10162d24 mov dword ptr [0x10176584], eax */
  w32((uint32_t)(0x10176584), (EAX));
  /* 10162d29 call 0x10162790 */
  push32(0x10162d2eu); f_10162790();
  /* 10162d2e push 0x101701a4 */
  push32((uint32_t)(0x101701a4u));
  /* 10162d33 mov dword ptr [0x101765bc], eax */
  w32((uint32_t)(0x101765bc), (EAX));
  /* 10162d38 call 0x10162790 */
  push32(0x10162d3du); f_10162790();
  /* 10162d3d push 0x10170198 */
  push32((uint32_t)(0x10170198u));
  /* 10162d42 mov dword ptr [0x101765c0], eax */
  w32((uint32_t)(0x101765c0), (EAX));
  /* 10162d47 call 0x10162790 */
  push32(0x10162d4cu); f_10162790();
  /* 10162d4c push 0x1017018c */
  push32((uint32_t)(0x1017018cu));
  /* 10162d51 mov dword ptr [0x101765c4], eax */
  w32((uint32_t)(0x101765c4), (EAX));
  /* 10162d56 call 0x10162790 */
  push32(0x10162d5bu); f_10162790();
  /* 10162d5b push 0x10170174 */
  push32((uint32_t)(0x10170174u));
  /* 10162d60 mov dword ptr [0x101765cc], eax */
  w32((uint32_t)(0x101765cc), (EAX));
  /* 10162d65 call 0x10162790 */
  push32(0x10162d6au); f_10162790();
  /* 10162d6a push 0x10170158 */
  push32((uint32_t)(0x10170158u));
  /* 10162d6f mov dword ptr [0x10176588], eax */
  w32((uint32_t)(0x10176588), (EAX));
  /* 10162d74 call 0x10162790 */
  push32(0x10162d79u); f_10162790();
  /* 10162d79 push 0x1017013c */
  push32((uint32_t)(0x1017013cu));
  /* 10162d7e mov dword ptr [0x1017658c], eax */
  w32((uint32_t)(0x1017658c), (EAX));
  /* 10162d83 call 0x10162790 */
  push32(0x10162d88u); f_10162790();
  /* 10162d88 push 0x10170124 */
  push32((uint32_t)(0x10170124u));
  /* 10162d8d mov dword ptr [0x10176590], eax */
  w32((uint32_t)(0x10176590), (EAX));
  /* 10162d92 call 0x10162790 */
  push32(0x10162d97u); f_10162790();
  /* 10162d97 push 0x1017010c */
  push32((uint32_t)(0x1017010cu));
  /* 10162d9c mov dword ptr [0x10176594], eax */
  w32((uint32_t)(0x10176594), (EAX));
  /* 10162da1 call 0x10162790 */
  push32(0x10162da6u); f_10162790();
  /* 10162da6 push 0x10170100 */
  push32((uint32_t)(0x10170100u));
  /* 10162dab mov dword ptr [0x10176598], eax */
  w32((uint32_t)(0x10176598), (EAX));
  /* 10162db0 call 0x10162790 */
  push32(0x10162db5u); f_10162790();
  /* 10162db5 push 0x101700f4 */
  push32((uint32_t)(0x101700f4u));
  /* 10162dba mov dword ptr [0x1017659c], eax */
  w32((uint32_t)(0x1017659c), (EAX));
  /* 10162dbf call 0x10162790 */
  push32(0x10162dc4u); f_10162790();
  /* 10162dc4 push 0x101700e4 */
  push32((uint32_t)(0x101700e4u));
  /* 10162dc9 mov dword ptr [0x101765a0], eax */
  w32((uint32_t)(0x101765a0), (EAX));
  /* 10162dce call 0x10162790 */
  push32(0x10162dd3u); f_10162790();
  /* 10162dd3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10162dd6 mov dword ptr [0x101765a4], eax */
  w32((uint32_t)(0x101765a4), (EAX));
  /* 10162ddb push 0x101700d8 */
  push32((uint32_t)(0x101700d8u));
  /* 10162de0 call 0x10162790 */
  push32(0x10162de5u); f_10162790();
  /* 10162de5 push 0x101700cc */
  push32((uint32_t)(0x101700ccu));
  /* 10162dea mov dword ptr [0x101765ac], eax */
  w32((uint32_t)(0x101765ac), (EAX));
  /* 10162def call 0x10162790 */
  push32(0x10162df4u); f_10162790();
  /* 10162df4 push 0x101700c0 */
  push32((uint32_t)(0x101700c0u));
  /* 10162df9 mov dword ptr [0x101765b0], eax */
  w32((uint32_t)(0x101765b0), (EAX));
  /* 10162dfe call 0x10162790 */
  push32(0x10162e03u); f_10162790();
  /* 10162e03 push 0x101700b0 */
  push32((uint32_t)(0x101700b0u));
  /* 10162e08 mov dword ptr [0x101765d0], eax */
  w32((uint32_t)(0x101765d0), (EAX));
  /* 10162e0d call 0x10162790 */
  push32(0x10162e12u); f_10162790();
  /* 10162e12 push 0x101700a4 */
  push32((uint32_t)(0x101700a4u));
  /* 10162e17 mov dword ptr [0x101765d4], eax */
  w32((uint32_t)(0x101765d4), (EAX));
  /* 10162e1c call 0x10162790 */
  push32(0x10162e21u); f_10162790();
  /* 10162e21 push 0x10170098 */
  push32((uint32_t)(0x10170098u));
  /* 10162e26 mov dword ptr [0x101765d8], eax */
  w32((uint32_t)(0x101765d8), (EAX));
  /* 10162e2b call 0x10162790 */
  push32(0x10162e30u); f_10162790();
  /* 10162e30 push 0x1017008c */
  push32((uint32_t)(0x1017008cu));
  /* 10162e35 mov dword ptr [0x101765dc], eax */
  w32((uint32_t)(0x101765dc), (EAX));
  /* 10162e3a call 0x10162790 */
  push32(0x10162e3fu); f_10162790();
  /* 10162e3f push 0x1017007c */
  push32((uint32_t)(0x1017007cu));
  /* 10162e44 mov dword ptr [0x101765e0], eax */
  w32((uint32_t)(0x101765e0), (EAX));
  /* 10162e49 call 0x10162790 */
  push32(0x10162e4eu); f_10162790();
  /* 10162e4e push 0x1017006c */
  push32((uint32_t)(0x1017006cu));
  /* 10162e53 mov dword ptr [0x101765e4], eax */
  w32((uint32_t)(0x101765e4), (EAX));
  /* 10162e58 call 0x10162790 */
  push32(0x10162e5du); f_10162790();
  /* 10162e5d push 0x10170058 */
  push32((uint32_t)(0x10170058u));
  /* 10162e62 mov dword ptr [0x101765ec], eax */
  w32((uint32_t)(0x101765ec), (EAX));
  /* 10162e67 call 0x10162790 */
  push32(0x10162e6cu); f_10162790();
  /* 10162e6c mov dword ptr [0x101765e8], eax */
  w32((uint32_t)(0x101765e8), (EAX));
  /* 10162e71 push 0x10170040 */
  push32((uint32_t)(0x10170040u));
  /* 10162e76 call 0x10162790 */
  push32(0x10162e7bu); f_10162790();
  /* 10162e7b push 0x10170028 */
  push32((uint32_t)(0x10170028u));
  /* 10162e80 mov dword ptr [0x10173930], eax */
  w32((uint32_t)(0x10173930), (EAX));
  /* 10162e85 call 0x10162790 */
  push32(0x10162e8au); f_10162790();
  /* 10162e8a push 0x10170018 */
  push32((uint32_t)(0x10170018u));
  /* 10162e8f mov dword ptr [0x10173790], eax */
  w32((uint32_t)(0x10173790), (EAX));
  /* 10162e94 call 0x10162790 */
  push32(0x10162e99u); f_10162790();
  /* 10162e99 push 0x10170008 */
  push32((uint32_t)(0x10170008u));
  /* 10162e9e mov dword ptr [0x101765f0], eax */
  w32((uint32_t)(0x101765f0), (EAX));
  /* 10162ea3 call 0x10162790 */
  push32(0x10162ea8u); f_10162790();
  /* 10162ea8 push 0x1016fff8 */
  push32((uint32_t)(0x1016fff8u));
  /* 10162ead mov dword ptr [0x101765b4], eax */
  w32((uint32_t)(0x101765b4), (EAX));
  /* 10162eb2 call 0x10162790 */
  push32(0x10162eb7u); f_10162790();
  /* 10162eb7 push 0x1016ffe8 */
  push32((uint32_t)(0x1016ffe8u));
  /* 10162ebc mov dword ptr [0x101765b8], eax */
  w32((uint32_t)(0x101765b8), (EAX));
  /* 10162ec1 call 0x10162790 */
  push32(0x10162ec6u); f_10162790();
  /* 10162ec6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10162ec9 mov dword ptr [0x10176310], eax */
  w32((uint32_t)(0x10176310), (EAX));
  /* 10162ece push 0x1016ffd8 */
  push32((uint32_t)(0x1016ffd8u));
  /* 10162ed3 call 0x10162790 */
  push32(0x10162ed8u); f_10162790();
  /* 10162ed8 push 0x1016ffc8 */
  push32((uint32_t)(0x1016ffc8u));
  /* 10162edd mov dword ptr [0x101762c8], eax */
  w32((uint32_t)(0x101762c8), (EAX));
  /* 10162ee2 call 0x10162790 */
  push32(0x10162ee7u); f_10162790();
  /* 10162ee7 push 0x1016ffb8 */
  push32((uint32_t)(0x1016ffb8u));
  /* 10162eec mov dword ptr [0x10176020], eax */
  w32((uint32_t)(0x10176020), (EAX));
  /* 10162ef1 call 0x10162790 */
  push32(0x10162ef6u); f_10162790();
  /* 10162ef6 push 0x1016ffa8 */
  push32((uint32_t)(0x1016ffa8u));
  /* 10162efb mov dword ptr [0x10173990], eax */
  w32((uint32_t)(0x10173990), (EAX));
  /* 10162f00 call 0x10162790 */
  push32(0x10162f05u); f_10162790();
  /* 10162f05 push 0x1016ff94 */
  push32((uint32_t)(0x1016ff94u));
  /* 10162f0a mov dword ptr [0x101762a8], eax */
  w32((uint32_t)(0x101762a8), (EAX));
  /* 10162f0f call 0x10162790 */
  push32(0x10162f14u); f_10162790();
  /* 10162f14 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10162f17 mov dword ptr [0x101739a8], eax */
  w32((uint32_t)(0x101739a8), (EAX));
L_10162f1c:;
  /* 10162f1c mov eax, 1 */
  EAX = (0x1u);
  /* 10162f21 ret 0xc */
  ESPCHK(0x101627f0u, _esp0);
  ESP += 16; return;
}

/* FUN_10002f30 @ 0x10162f30 (34 bytes, 10 insns) */
void f_10162f30(void) {
  FTRACE(0x10162f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10162f30 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10162f34 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10162f38 push eax */
  push32((uint32_t)(EAX));
  /* 10162f39 push ecx */
  push32((uint32_t)(ECX));
  /* 10162f3a push 0x101706cc */
  push32((uint32_t)(0x101706ccu));
  /* 10162f3f push 0x10173808 */
  push32((uint32_t)(0x10173808u));
  /* 10162f44 call 0x10166e70 */
  push32(0x10162f49u); f_10166e70();
  /* 10162f49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10162f4c mov eax, 0x10173808 */
  EAX = (0x10173808u);
  /* 10162f51 ret  */
  ESPCHK(0x10162f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f60 @ 0x10162f60 (45 bytes, 16 insns) */
void f_10162f60(void) {
  FTRACE(0x10162f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10162f60 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10162f64 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10162f68 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10162f6d push eax */
  push32((uint32_t)(EAX));
  /* 10162f6e push ecx */
  push32((uint32_t)(ECX));
  /* 10162f6f call 0x10162740 */
  push32(0x10162f74u); f_10162740();
  /* 10162f74 mov ecx, eax */
  ECX = (EAX);
  /* 10162f76 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10162f7a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10162f7d lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10162f80 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10162f83 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10162f86 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10162f89 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10162f8a idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10162f8c ret  */
  ESPCHK(0x10162f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f90 @ 0x10162f90 (171 bytes, 77 insns) */
void f_10162f90(void) {
  FTRACE(0x10162f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10162f90 push ebx */
  push32((uint32_t)(EBX));
  /* 10162f91 push ebp */
  push32((uint32_t)(EBP));
  /* 10162f92 push esi */
  push32((uint32_t)(ESI));
  /* 10162f93 push edi */
  push32((uint32_t)(EDI));
  /* 10162f94 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 10162f98 push edi */
  push32((uint32_t)(EDI));
  /* 10162f99 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10162f9fu);
  /* 10162f9f mov esi, dword ptr [esp + 0x1c] */
  ESI = (r32((uint32_t)(ESP + 0x1c)));
  /* 10162fa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10162fa6 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10162fa8 jl 0x10162fb1 */
  if ((C.sf!=C.of)) goto L_10162fb1;
  /* 10162faa pop edi */
  EDI = (pop32());
  /* 10162fab pop esi */
  ESI = (pop32());
  /* 10162fac pop ebp */
  EBP = (pop32());
  /* 10162fad mov al, 1 */
  AL = (0x1u);
  /* 10162faf pop ebx */
  EBX = (pop32());
  /* 10162fb0 ret  */
  ESPCHK(0x10162f90u, _esp0);
  ESP += 4; return;
L_10162fb1:;
  /* 10162fb1 push edi */
  push32((uint32_t)(EDI));
  /* 10162fb2 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10162fb8u);
  /* 10162fb8 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 10162fbc sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10162fbe push esi */
  push32((uint32_t)(ESI));
  /* 10162fbf push edi */
  push32((uint32_t)(EDI));
  /* 10162fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10162fc1 mov dword ptr [esp + 0x24], esi */
  w32((uint32_t)(ESP + 0x24), (ESI));
  /* 10162fc5 call 0x10162f60 */
  push32(0x10162fcau); f_10162f60();
  /* 10162fca push ebp */
  push32((uint32_t)(EBP));
  /* 10162fcb mov ebx, eax */
  EBX = (EAX);
  /* 10162fcd call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10162fd3u);
  /* 10162fd3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10162fd6 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10162fd8 jle 0x10163034 */
  if ((C.zf||C.sf!=C.of)) goto L_10163034;
  /* 10162fda cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10162fe0 jle 0x10163034 */
  if ((C.zf||C.sf!=C.of)) goto L_10163034;
  /* 10162fe2 mov eax, 0x45e7b273 */
  EAX = (0x45e7b273u);
  /* 10162fe7 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10162fe9 imul ebx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(EBX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10162feb sar edx, 0xc */
  EDX = (sh_sar((uint32_t)(EDX), (0xcu)&0x1f, 32));
  /* 10162fee mov eax, edx */
  EAX = (EDX);
  /* 10162ff0 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 10162ff3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10162ff5 mov ebx, edx */
  EBX = (EDX);
L_10162ff7:;
  /* 10162ff7 cmp ebx, 0xf */
  { uint32_t _a=(EBX),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10162ffa mov eax, 0xf */
  EAX = (0xfu);
  /* 10162fff jg 0x10163003 */
  if ((!C.zf&&C.sf==C.of)) goto L_10163003;
  /* 10163001 mov eax, ebx */
  EAX = (EBX);
L_10163003:;
  /* 10163003 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10163005 jge 0x10163016 */
  if ((C.sf==C.of)) goto L_10163016;
  /* 10163007 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10163009 push ebp */
  push32((uint32_t)(EBP));
  /* 1016300a push edi */
  push32((uint32_t)(EDI));
  /* 1016300b call 0x10162610 */
  push32(0x10163010u); f_10162610();
  /* 10163010 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163013 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10163014 jmp 0x10162ff7 */
  goto L_10162ff7;
L_10163016:;
  /* 10163016 mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1016301a push ecx */
  push32((uint32_t)(ECX));
  /* 1016301b push edi */
  push32((uint32_t)(EDI));
  /* 1016301c push ebp */
  push32((uint32_t)(EBP));
  /* 1016301d call 0x10162f60 */
  push32(0x10163022u); f_10162f60();
  /* 10163022 push eax */
  push32((uint32_t)(EAX));
  /* 10163023 push edi */
  push32((uint32_t)(EDI));
  /* 10163024 push ebp */
  push32((uint32_t)(EBP));
  /* 10163025 call 0x10162610 */
  push32(0x1016302au); f_10162610();
  /* 1016302a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016302d mov al, 1 */
  AL = (0x1u);
  /* 1016302f pop edi */
  EDI = (pop32());
  /* 10163030 pop esi */
  ESI = (pop32());
  /* 10163031 pop ebp */
  EBP = (pop32());
  /* 10163032 pop ebx */
  EBX = (pop32());
  /* 10163033 ret  */
  ESPCHK(0x10162f90u, _esp0);
  ESP += 4; return;
L_10163034:;
  /* 10163034 pop edi */
  EDI = (pop32());
  /* 10163035 pop esi */
  ESI = (pop32());
  /* 10163036 pop ebp */
  EBP = (pop32());
  /* 10163037 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 10163039 pop ebx */
  EBX = (pop32());
  /* 1016303a ret  */
  ESPCHK(0x10162f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003040 @ 0x10163040 (369 bytes, 82 insns) */
void f_10163040(void) {
  FTRACE(0x10163040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10163040 push ebx */
  push32((uint32_t)(EBX));
  /* 10163041 push esi */
  push32((uint32_t)(ESI));
  /* 10163042 call dword ptr [0x10176560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176560))), 0x10163048u);
  /* 10163048 push 0x101761f0 */
  push32((uint32_t)(0x101761f0u));
  /* 1016304d mov dword ptr [0x10176314], eax */
  w32((uint32_t)(0x10176314), (EAX));
  /* 10163052 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10163058u);
  /* 10163058 mov ebx, 1 */
  EBX = (0x1u);
  /* 1016305d mov esi, eax */
  ESI = (EAX);
  /* 1016305f push ebx */
  push32((uint32_t)(EBX));
  /* 10163060 call 0x10162730 */
  push32(0x10163065u); f_10162730();
  /* 10163065 push 4 */
  push32((uint32_t)(0x4u));
  /* 10163067 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10163069 call 0x10162730 */
  push32(0x1016306eu); f_10162730();
  /* 1016306e push 5 */
  push32((uint32_t)(0x5u));
  /* 10163070 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10163072 call 0x10162730 */
  push32(0x10163077u); f_10162730();
  /* 10163077 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10163079 mov eax, dword ptr [0x10176314] */
  EAX = (r32((uint32_t)(0x10176314)));
  /* 1016307e push 3 */
  push32((uint32_t)(0x3u));
  /* 10163080 mov dword ptr [0x10176210], esi */
  w32((uint32_t)(0x10176210), (ESI));
  /* 10163086 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 10163089 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 1016308c lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 1016308f lea eax, [eax + ecx*2] */
  EAX = ((uint32_t)(EAX + ECX*2));
  /* 10163092 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10163095 mov ecx, dword ptr [eax + 0x10173b50] */
  ECX = (r32((uint32_t)(EAX + 0x10173b50)));
  /* 1016309b lea edx, [eax + 0x101739c0] */
  EDX = ((uint32_t)(EAX + 0x101739c0));
  /* 101630a1 mov dword ptr [0x10176220], edx */
  w32((uint32_t)(0x10176220), (EDX));
  /* 101630a7 lea edx, [eax + 0x10173b54] */
  EDX = ((uint32_t)(EAX + 0x10173b54));
  /* 101630ad mov dword ptr [0x10176664], ecx */
  w32((uint32_t)(0x10176664), (ECX));
  /* 101630b3 mov ecx, dword ptr [eax + 0x10173ce4] */
  ECX = (r32((uint32_t)(EAX + 0x10173ce4)));
  /* 101630b9 mov dword ptr [0x10176224], edx */
  w32((uint32_t)(0x10176224), (EDX));
  /* 101630bf lea edx, [eax + 0x10173ce8] */
  EDX = ((uint32_t)(EAX + 0x10173ce8));
  /* 101630c5 mov dword ptr [0x10176668], ecx */
  w32((uint32_t)(0x10176668), (ECX));
  /* 101630cb mov dword ptr [0x101762ac], edx */
  w32((uint32_t)(0x101762ac), (EDX));
  /* 101630d1 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x101630d7u);
  /* 101630d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 101630d9 mov dword ptr [0x101762f0], eax */
  w32((uint32_t)(0x101762f0), (EAX));
  /* 101630de call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x101630e4u);
  /* 101630e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 101630e6 mov dword ptr [0x10173680], eax */
  w32((uint32_t)(0x10173680), (EAX));
  /* 101630eb call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x101630f1u);
  /* 101630f1 push 4 */
  push32((uint32_t)(0x4u));
  /* 101630f3 mov dword ptr [0x101763e0], eax */
  w32((uint32_t)(0x101763e0), (EAX));
  /* 101630f8 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x101630feu);
  /* 101630fe push 5 */
  push32((uint32_t)(0x5u));
  /* 10163100 mov dword ptr [0x10173788], eax */
  w32((uint32_t)(0x10173788), (EAX));
  /* 10163105 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x1016310bu);
  /* 1016310b push ebx */
  push32((uint32_t)(EBX));
  /* 1016310c mov dword ptr [0x10176148], eax */
  w32((uint32_t)(0x10176148), (EAX));
  /* 10163111 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10163117u);
  /* 10163117 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016311a mov dword ptr [0x10176398], eax */
  w32((uint32_t)(0x10176398), (EAX));
  /* 1016311f call 0x10162670 */
  push32(0x10163124u); f_10162670();
  /* 10163124 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10163126 jne 0x10163132 */
  if (!C.zf) goto L_10163132;
  /* 10163128 mov dword ptr [0x1016f248], 4 */
  w32((uint32_t)(0x1016f248), (0x4u));
L_10163132:;
  /* 10163132 push 0x1016f114 */
  push32((uint32_t)(0x1016f114u));
  /* 10163137 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10163139 call dword ptr [0x1017656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017656c))), 0x1016313fu);
  /* 1016313f push 0x101765f8 */
  push32((uint32_t)(0x101765f8u));
  /* 10163144 call 0x10162720 */
  push32(0x10163149u); f_10162720();
  /* 10163149 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1016314b push 0x1016f244 */
  push32((uint32_t)(0x1016f244u));
  /* 10163150 call 0x10162700 */
  push32(0x10163155u); f_10162700();
  /* 10163155 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163158 mov byte ptr [0x101761e8], bl */
  w8((uint32_t)(0x101761e8), (BL));
  /* 1016315e mov byte ptr [0x101761ea], bl */
  w8((uint32_t)(0x101761ea), (BL));
  /* 10163164 mov byte ptr [0x101761ec], bl */
  w8((uint32_t)(0x101761ec), (BL));
  /* 1016316a mov byte ptr [0x101761ed], bl */
  w8((uint32_t)(0x101761ed), (BL));
  /* 10163170 mov byte ptr [0x10176383], bl */
  w8((uint32_t)(0x10176383), (BL));
  /* 10163176 mov byte ptr [0x10176381], bl */
  w8((uint32_t)(0x10176381), (BL));
  /* 1016317c mov byte ptr [0x10176384], bl */
  w8((uint32_t)(0x10176384), (BL));
  /* 10163182 mov byte ptr [0x10176385], bl */
  w8((uint32_t)(0x10176385), (BL));
  /* 10163188 pop esi */
  ESI = (pop32());
  /* 10163189 mov byte ptr [0x101761eb], 0 */
  w8((uint32_t)(0x101761eb), (0x0u));
  /* 10163190 mov byte ptr [0x101761e9], 0 */
  w8((uint32_t)(0x101761e9), (0x0u));
  /* 10163197 mov byte ptr [0x10176380], 0 */
  w8((uint32_t)(0x10176380), (0x0u));
  /* 1016319e mov byte ptr [0x10176382], 0 */
  w8((uint32_t)(0x10176382), (0x0u));
  /* 101631a5 mov dword ptr [0x101766ac], 0 */
  w32((uint32_t)(0x101766ac), (0x0u));
  /* 101631af pop ebx */
  EBX = (pop32());
  /* 101631b0 ret  */
  ESPCHK(0x10163040u, _esp0);
  ESP += 4; return;
}

/* FUN_100031c0 @ 0x101631c0 (85 bytes, 29 insns) */
void f_101631c0(void) {
  FTRACE(0x101631c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101631c0 mov eax, dword ptr [0x10175fb8] */
  EAX = (r32((uint32_t)(0x10175fb8)));
  /* 101631c5 push esi */
  push32((uint32_t)(ESI));
  /* 101631c6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101631c9 jg 0x10163213 */
  if ((!C.zf&&C.sf==C.of)) goto L_10163213;
  /* 101631cb push 0x101736e8 */
  push32((uint32_t)(0x101736e8u));
  /* 101631d0 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x101631d6u);
  /* 101631d6 mov ecx, eax */
  ECX = (EAX);
  /* 101631d8 mov eax, 0x38e38e39 */
  EAX = (0x38e38e39u);
  /* 101631dd imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 101631df sar edx, 3 */
  EDX = (sh_sar((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 101631e2 mov eax, edx */
  EAX = (EDX);
  /* 101631e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101631e7 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 101631ea add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101631ec mov esi, edx */
  ESI = (EDX);
  /* 101631ee je 0x10163213 */
  if (C.zf) goto L_10163213;
  /* 101631f0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101631f2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101631f4 push esi */
  push32((uint32_t)(ESI));
  /* 101631f5 push 0x10173760 */
  push32((uint32_t)(0x10173760u));
  /* 101631fa call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10163200u);
  /* 10163200 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10163202 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10163204 push esi */
  push32((uint32_t)(ESI));
  /* 10163205 push 0x101736a0 */
  push32((uint32_t)(0x101736a0u));
  /* 1016320a call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10163210u);
  /* 10163210 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10163213:;
  /* 10163213 pop esi */
  ESI = (pop32());
  /* 10163214 ret  */
  ESPCHK(0x101631c0u, _esp0);
  ESP += 4; return;
}

/* ProcessLandAI @ 0x10163220 (1 bytes, 1 insns) */
void f_10163220(void) {
  FTRACE(0x10163220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10163220 ret  */
  ESPCHK(0x10163220u, _esp0);
  ESP += 4; return;
}

/* FUN_10003230 @ 0x10163230 (157 bytes, 43 insns) */
void f_10163230(void) {
  FTRACE(0x10163230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10163230 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10163232 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10163234 push 0x101763b0 */
  push32((uint32_t)(0x101763b0u));
  /* 10163239 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016323fu);
  /* 1016323f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10163241 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10163243 push 0x101763b8 */
  push32((uint32_t)(0x101763b8u));
  /* 10163248 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016324eu);
  /* 1016324e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10163250 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10163252 push 0x101763a0 */
  push32((uint32_t)(0x101763a0u));
  /* 10163257 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016325du);
  /* 1016325d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1016325f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10163261 push 0x101763a8 */
  push32((uint32_t)(0x101763a8u));
  /* 10163266 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016326cu);
  /* 1016326c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1016326e push 0xa */
  push32((uint32_t)(0xau));
  /* 10163270 push 0x101763c0 */
  push32((uint32_t)(0x101763c0u));
  /* 10163275 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016327bu);
  /* 1016327b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1016327d push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1016327f push 0x101762f8 */
  push32((uint32_t)(0x101762f8u));
  /* 10163284 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016328au);
  /* 1016328a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016328d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1016328f push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10163291 push 0x101762e0 */
  push32((uint32_t)(0x101762e0u));
  /* 10163296 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016329cu);
  /* 1016329c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1016329e push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101632a0 push 0x101762e8 */
  push32((uint32_t)(0x101762e8u));
  /* 101632a5 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101632abu);
  /* 101632ab push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101632ad push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101632af push 0x10176300 */
  push32((uint32_t)(0x10176300u));
  /* 101632b4 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101632bau);
  /* 101632ba push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101632bc push 0xa */
  push32((uint32_t)(0xau));
  /* 101632be push 0x10176308 */
  push32((uint32_t)(0x10176308u));
  /* 101632c3 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101632c9u);
  /* 101632c9 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101632cc ret  */
  ESPCHK(0x10163230u, _esp0);
  ESP += 4; return;
}

/* FUN_100032d0 @ 0x101632d0 (79 bytes, 22 insns) */
void f_101632d0(void) {
  FTRACE(0x101632d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101632d0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101632d2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101632d4 push 0x10173970 */
  push32((uint32_t)(0x10173970u));
  /* 101632d9 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101632dfu);
  /* 101632df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101632e1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101632e3 push 0x10173978 */
  push32((uint32_t)(0x10173978u));
  /* 101632e8 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101632eeu);
  /* 101632ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101632f0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101632f2 push 0x10173968 */
  push32((uint32_t)(0x10173968u));
  /* 101632f7 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101632fdu);
  /* 101632fd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101632ff push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10163301 push 0x10175fd8 */
  push32((uint32_t)(0x10175fd8u));
  /* 10163306 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016330cu);
  /* 1016330c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1016330e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10163310 push 0x10175fc8 */
  push32((uint32_t)(0x10175fc8u));
  /* 10163315 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016331bu);
  /* 1016331b add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016331e ret  */
  ESPCHK(0x101632d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003320 @ 0x10163320 (64 bytes, 18 insns) */
void f_10163320(void) {
  FTRACE(0x10163320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10163320 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10163322 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10163324 push 0x101760f8 */
  push32((uint32_t)(0x101760f8u));
  /* 10163329 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016332fu);
  /* 1016332f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10163331 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10163333 push 0x10176100 */
  push32((uint32_t)(0x10176100u));
  /* 10163338 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016333eu);
  /* 1016333e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10163340 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10163342 push 0x10176108 */
  push32((uint32_t)(0x10176108u));
  /* 10163347 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016334du);
  /* 1016334d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1016334f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10163351 push 0x10176110 */
  push32((uint32_t)(0x10176110u));
  /* 10163356 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016335cu);
  /* 1016335c add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016335f ret  */
  ESPCHK(0x10163320u, _esp0);
  ESP += 4; return;
}

/* FUN_10003360 @ 0x10163360 (3787 bytes, 1079 insns) */
void f_10163360(void) {
  FTRACE(0x10163360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10163360 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10163363 push ebx */
  push32((uint32_t)(EBX));
  /* 10163364 push ebp */
  push32((uint32_t)(EBP));
  /* 10163365 push esi */
  push32((uint32_t)(ESI));
  /* 10163366 push edi */
  push32((uint32_t)(EDI));
  /* 10163367 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 1016336c push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 10163371 call dword ptr [0x10176578] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176578))), 0x10163377u);
  /* 10163377 push 0 */
  push32((uint32_t)(0x0u));
  /* 10163379 call 0x10162760 */
  push32(0x1016337eu); f_10162760();
  /* 1016337e push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10163380 push 0 */
  push32((uint32_t)(0x0u));
  /* 10163382 call 0x10162640 */
  push32(0x10163387u); f_10162640();
  /* 10163387 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10163389 push 0 */
  push32((uint32_t)(0x0u));
  /* 1016338b mov dword ptr [esp + 0x40], eax */
  w32((uint32_t)(ESP + 0x40), (EAX));
  /* 1016338f call 0x10162640 */
  push32(0x10163394u); f_10162640();
  /* 10163394 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 10163396 push 0 */
  push32((uint32_t)(0x0u));
  /* 10163398 mov edi, eax */
  EDI = (EAX);
  /* 1016339a call 0x10162640 */
  push32(0x1016339fu); f_10162640();
  /* 1016339f push 0xe */
  push32((uint32_t)(0xeu));
  /* 101633a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 101633a3 mov esi, eax */
  ESI = (EAX);
  /* 101633a5 call 0x10162640 */
  push32(0x101633aau); f_10162640();
  /* 101633aa push 0x10176080 */
  push32((uint32_t)(0x10176080u));
  /* 101633af mov ebx, eax */
  EBX = (EAX);
  /* 101633b1 call dword ptr [0x101765ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765ac))), 0x101633b7u);
  /* 101633b7 sar esi, 2 */
  ESI = (sh_sar((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 101633ba and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 101633bf add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101633c1 mov dword ptr [esp + 0x50], eax */
  w32((uint32_t)(ESP + 0x50), (EAX));
  /* 101633c5 push 0x10176338 */
  push32((uint32_t)(0x10176338u));
  /* 101633ca lea eax, [esi + ebx*4] */
  EAX = ((uint32_t)(ESI + EBX*4));
  /* 101633cd mov dword ptr [esp + 0x5c], eax */
  w32((uint32_t)(ESP + 0x5c), (EAX));
  /* 101633d1 call dword ptr [0x101765a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a4))), 0x101633d7u);
  /* 101633d7 push 0x10176018 */
  push32((uint32_t)(0x10176018u));
  /* 101633dc mov ebx, eax */
  EBX = (EAX);
  /* 101633de call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x101633e4u);
  /* 101633e4 push 0x10176018 */
  push32((uint32_t)(0x10176018u));
  /* 101633e9 mov ebp, eax */
  EBP = (EAX);
  /* 101633eb call dword ptr [0x101765a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a4))), 0x101633f1u);
  /* 101633f1 push 0x10176048 */
  push32((uint32_t)(0x10176048u));
  /* 101633f6 mov dword ptr [esp + 0x5c], eax */
  w32((uint32_t)(ESP + 0x5c), (EAX));
  /* 101633fa call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10163400u);
  /* 10163400 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163403 mov edi, eax */
  EDI = (EAX);
  /* 10163405 push 0x10176048 */
  push32((uint32_t)(0x10176048u));
  /* 1016340a call dword ptr [0x101765a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a4))), 0x10163410u);
  /* 10163410 push 0x10176138 */
  push32((uint32_t)(0x10176138u));
  /* 10163415 mov dword ptr [esp + 0x20], eax */
  w32((uint32_t)(ESP + 0x20), (EAX));
  /* 10163419 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x1016341fu);
  /* 1016341f push 0x10176138 */
  push32((uint32_t)(0x10176138u));
  /* 10163424 mov esi, eax */
  ESI = (EAX);
  /* 10163426 call dword ptr [0x101765a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a4))), 0x1016342cu);
  /* 1016342c push 0x10176338 */
  push32((uint32_t)(0x10176338u));
  /* 10163431 mov dword ptr [esp + 0x24], eax */
  w32((uint32_t)(ESP + 0x24), (EAX));
  /* 10163435 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x1016343bu);
  /* 1016343b mov edx, dword ptr [esp + 0x24] */
  EDX = (r32((uint32_t)(ESP + 0x24)));
  /* 1016343f mov ecx, dword ptr [esp + 0x28] */
  ECX = (r32((uint32_t)(ESP + 0x28)));
  /* 10163443 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10163445 mov edx, dword ptr [esp + 0x2c] */
  EDX = (r32((uint32_t)(ESP + 0x2c)));
  /* 10163449 sub esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016344b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1016344d sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016344f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10163451 sub esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10163453 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10163455 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10163457 push 0x10176080 */
  push32((uint32_t)(0x10176080u));
  /* 1016345c add esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1016345e mov dword ptr [esp + 0x38], esi */
  w32((uint32_t)(ESP + 0x38), (ESI));
  /* 10163462 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10163468u);
  /* 10163468 push 3 */
  push32((uint32_t)(0x3u));
  /* 1016346a mov bl, 1 */
  BL = (0x1u);
  /* 1016346c call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10163472u);
  /* 10163472 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163475 cmp eax, 0xd6d8 */
  { uint32_t _a=(EAX),_b=(0xd6d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016347a jle 0x101634aa */
  if ((C.zf||C.sf!=C.of)) goto L_101634aa;
  /* 1016347c push 1 */
  push32((uint32_t)(0x1u));
  /* 1016347e call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10163484u);
  /* 10163484 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163487 cmp eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016348c jle 0x101634aa */
  if ((C.zf||C.sf!=C.of)) goto L_101634aa;
  /* 1016348e push 4 */
  push32((uint32_t)(0x4u));
  /* 10163490 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10163496u);
  /* 10163496 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163499 cmp eax, 0x1b58 */
  { uint32_t _a=(EAX),_b=(0x1b58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016349e jle 0x101634aa */
  if ((C.zf||C.sf!=C.of)) goto L_101634aa;
  /* 101634a0 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 101634a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101634a6 jne 0x101634aa */
  if (!C.zf) goto L_101634aa;
  /* 101634a8 xor bl, bl */
  { uint32_t _r=(BL)^(BL); BL = (_r); fl_logic(_r,8); }
L_101634aa:;
  /* 101634aa push 0x101761f0 */
  push32((uint32_t)(0x101761f0u));
  /* 101634af call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x101634b5u);
  /* 101634b5 push 3 */
  push32((uint32_t)(0x3u));
  /* 101634b7 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 101634bb call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x101634c1u);
  /* 101634c1 push 0x10176218 */
  push32((uint32_t)(0x10176218u));
  /* 101634c6 mov esi, eax */
  ESI = (EAX);
  /* 101634c8 call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x101634ceu);
  /* 101634ce push 0x101736e8 */
  push32((uint32_t)(0x101736e8u));
  /* 101634d3 mov byte ptr [esp + 0x22], al */
  w8((uint32_t)(ESP + 0x22), (AL));
  /* 101634d7 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x101634ddu);
  /* 101634dd push 0x10176140 */
  push32((uint32_t)(0x10176140u));
  /* 101634e2 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x101634e8u);
  /* 101634e8 push 0x10176410 */
  push32((uint32_t)(0x10176410u));
  /* 101634ed mov dword ptr [esp + 0x2c], eax */
  w32((uint32_t)(ESP + 0x2c), (EAX));
  /* 101634f1 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x101634f7u);
  /* 101634f7 push 0x10176390 */
  push32((uint32_t)(0x10176390u));
  /* 101634fc mov edi, eax */
  EDI = (EAX);
  /* 101634fe call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10163504u);
  /* 10163504 push 0x101736e8 */
  push32((uint32_t)(0x101736e8u));
  /* 10163509 mov ebp, eax */
  EBP = (EAX);
  /* 1016350b call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10163511u);
  /* 10163511 add eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10163513 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10163515 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10163517 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10163519 push 0x10176170 */
  push32((uint32_t)(0x10176170u));
  /* 1016351e mov dword ptr [esp + 0x44], eax */
  w32((uint32_t)(ESP + 0x44), (EAX));
  /* 10163522 mov byte ptr [esp + 0x3f], 1 */
  w8((uint32_t)(ESP + 0x3f), (0x1u));
  /* 10163527 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016352du);
  /* 1016352d push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1016352f push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10163531 push 0x101761b0 */
  push32((uint32_t)(0x101761b0u));
  /* 10163536 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016353cu);
  /* 1016353c push 0x10173938 */
  push32((uint32_t)(0x10173938u));
  /* 10163541 call dword ptr [0x101765a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a4))), 0x10163547u);
  /* 10163547 push 0x10173938 */
  push32((uint32_t)(0x10173938u));
  /* 1016354c mov edi, eax */
  EDI = (EAX);
  /* 1016354e call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10163554u);
  /* 10163554 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163557 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10163559 je 0x10163560 */
  if (C.zf) goto L_10163560;
  /* 1016355b mov byte ptr [esp + 0x13], 0 */
  w8((uint32_t)(ESP + 0x13), (0x0u));
L_10163560:;
  /* 10163560 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 10163564 test ebp, ebp */
  { uint32_t _r=(EBP)&(EBP); fl_logic(_r,32); }
  /* 10163566 je 0x10163f2d */
  if (C.zf) goto L_10163f2d;
  /* 1016356c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1016356e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10163570 push 1 */
  push32((uint32_t)(0x1u));
  /* 10163572 push 0x10176038 */
  push32((uint32_t)(0x10176038u));
  /* 10163577 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x1016357du);
  /* 1016357d push 0x10176038 */
  push32((uint32_t)(0x10176038u));
  /* 10163582 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10163588u);
  /* 10163588 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016358b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016358d je 0x10164223 */
  if (C.zf) goto L_10164223;
  /* 10163593 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10163595 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10163597 push 0x101763d8 */
  push32((uint32_t)(0x101763d8u));
  /* 1016359c call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101635a2u);
  /* 101635a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101635a5 call dword ptr [0x101765d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765d0))), 0x101635abu);
  /* 101635ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101635ad jne 0x101635f0 */
  if (!C.zf) goto L_101635f0;
  /* 101635af cmp esi, 0x2bc */
  { uint32_t _a=(ESI),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101635b5 jle 0x101635dc */
  if ((C.zf||C.sf!=C.of)) goto L_101635dc;
  /* 101635b7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101635b9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101635bb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101635bd push 0x101761f0 */
  push32((uint32_t)(0x101761f0u));
  /* 101635c2 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x101635c8u);
  /* 101635c8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101635ca push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101635cc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101635ce push 0x101736e8 */
  push32((uint32_t)(0x101736e8u));
  /* 101635d3 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x101635d9u);
  /* 101635d9 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101635dc:;
  /* 101635dc push 1 */
  push32((uint32_t)(0x1u));
  /* 101635de push 1 */
  push32((uint32_t)(0x1u));
  /* 101635e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 101635e2 call dword ptr [0x10176574] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176574))), 0x101635e8u);
  /* 101635e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101635eb jmp 0x101636fe */
  goto L_101636fe;
L_101635f0:;
  /* 101635f0 push 0x10173800 */
  push32((uint32_t)(0x10173800u));
  /* 101635f5 call dword ptr [0x101765ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765ac))), 0x101635fbu);
  /* 101635fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101635fe test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10163600 je 0x1016362a */
  if (C.zf) goto L_1016362a;
  /* 10163602 cmp esi, 0x2ee0 */
  { uint32_t _a=(ESI),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10163608 jle 0x10163612 */
  if ((C.zf||C.sf!=C.of)) goto L_10163612;
  /* 1016360a push 6 */
  push32((uint32_t)(0x6u));
  /* 1016360c push 8 */
  push32((uint32_t)(0x8u));
  /* 1016360e push 9 */
  push32((uint32_t)(0x9u));
  /* 10163610 jmp 0x10163650 */
  goto L_10163650;
L_10163612:;
  /* 10163612 cmp esi, 0x1770 */
  { uint32_t _a=(ESI),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10163618 jle 0x10163622 */
  if ((C.zf||C.sf!=C.of)) goto L_10163622;
  /* 1016361a push 3 */
  push32((uint32_t)(0x3u));
  /* 1016361c push 5 */
  push32((uint32_t)(0x5u));
  /* 1016361e push 9 */
  push32((uint32_t)(0x9u));
  /* 10163620 jmp 0x10163650 */
  goto L_10163650;
L_10163622:;
  /* 10163622 push 1 */
  push32((uint32_t)(0x1u));
  /* 10163624 push 4 */
  push32((uint32_t)(0x4u));
  /* 10163626 push 9 */
  push32((uint32_t)(0x9u));
  /* 10163628 jmp 0x10163650 */
  goto L_10163650;
L_1016362a:;
  /* 1016362a cmp esi, 0x2ee0 */
  { uint32_t _a=(ESI),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10163630 jle 0x1016363a */
  if ((C.zf||C.sf!=C.of)) goto L_1016363a;
  /* 10163632 push 8 */
  push32((uint32_t)(0x8u));
  /* 10163634 push 8 */
  push32((uint32_t)(0x8u));
  /* 10163636 push 9 */
  push32((uint32_t)(0x9u));
  /* 10163638 jmp 0x10163650 */
  goto L_10163650;
L_1016363a:;
  /* 1016363a cmp esi, 0x1770 */
  { uint32_t _a=(ESI),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10163640 jle 0x1016364a */
  if ((C.zf||C.sf!=C.of)) goto L_1016364a;
  /* 10163642 push 5 */
  push32((uint32_t)(0x5u));
  /* 10163644 push 5 */
  push32((uint32_t)(0x5u));
  /* 10163646 push 9 */
  push32((uint32_t)(0x9u));
  /* 10163648 jmp 0x10163650 */
  goto L_10163650;
L_1016364a:;
  /* 1016364a push 4 */
  push32((uint32_t)(0x4u));
  /* 1016364c push 4 */
  push32((uint32_t)(0x4u));
  /* 1016364e push 0xa */
  push32((uint32_t)(0xau));
L_10163650:;
  /* 10163650 call dword ptr [0x10176574] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176574))), 0x10163656u);
  /* 10163656 mov al, byte ptr [esp + 0x1e] */
  AL = (r8((uint32_t)(ESP + 0x1e)));
  /* 1016365a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016365d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1016365f mov edi, 0x15e */
  EDI = (0x15eu);
  /* 10163664 je 0x1016366b */
  if (C.zf) goto L_1016366b;
  /* 10163666 mov edi, 0x12c */
  EDI = (0x12cu);
L_1016366b:;
  /* 1016366b cmp ebp, 0x19 */
  { uint32_t _a=(EBP),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016366e jge 0x1016368c */
  if ((C.sf==C.of)) goto L_1016368c;
  /* 10163670 cmp esi, 0x12c */
  { uint32_t _a=(ESI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10163676 jle 0x1016368c */
  if ((C.zf||C.sf!=C.of)) goto L_1016368c;
  /* 10163678 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1016367a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1016367c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1016367e push 0x101761f0 */
  push32((uint32_t)(0x101761f0u));
  /* 10163683 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10163689u);
  /* 10163689 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1016368c:;
  /* 1016368c cmp esi, 0xc8 */
  { uint32_t _a=(ESI),_b=(0xc8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10163692 jle 0x101636cd */
  if ((C.zf||C.sf!=C.of)) goto L_101636cd;
  /* 10163694 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10163696 je 0x101636b2 */
  if (C.zf) goto L_101636b2;
  /* 10163698 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1016369a push 0xe8 */
  push32((uint32_t)(0xe8u));
  /* 1016369f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101636a4 push 0x101761f0 */
  push32((uint32_t)(0x101761f0u));
  /* 101636a9 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x101636afu);
  /* 101636af add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101636b2:;
  /* 101636b2 cmp esi, 0x12c */
  { uint32_t _a=(ESI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101636b8 jle 0x101636cd */
  if ((C.zf||C.sf!=C.of)) goto L_101636cd;
  /* 101636ba push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101636bc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101636be push edi */
  push32((uint32_t)(EDI));
  /* 101636bf push 0x101736e8 */
  push32((uint32_t)(0x101736e8u));
  /* 101636c4 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x101636cau);
  /* 101636ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101636cd:;
  /* 101636cd push 0x101762d0 */
  push32((uint32_t)(0x101762d0u));
  /* 101636d2 call dword ptr [0x101765ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765ac))), 0x101636d8u);
  /* 101636d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101636db test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101636dd je 0x101636fe */
  if (C.zf) goto L_101636fe;
  /* 101636df cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101636e5 jle 0x101636fe */
  if ((C.zf||C.sf!=C.of)) goto L_101636fe;
  /* 101636e7 push 0x10176338 */
  push32((uint32_t)(0x10176338u));
  /* 101636ec call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x101636f2u);
  /* 101636f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101636f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101636f7 jle 0x101636fe */
  if ((C.zf||C.sf!=C.of)) goto L_101636fe;
  /* 101636f9 call 0x10163230 */
  push32(0x101636feu); f_10163230();
L_101636fe:;
  /* 101636fe mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 10163702 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10163704 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10163707 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10163709 jge 0x1016370f */
  if ((C.sf==C.of)) goto L_1016370f;
  /* 1016370b push 5 */
  push32((uint32_t)(0x5u));
  /* 1016370d jmp 0x10163713 */
  goto L_10163713;
L_1016370f:;
  /* 1016370f add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10163712 push eax */
  push32((uint32_t)(EAX));
L_10163713:;
  /* 10163713 push 0x10175ff0 */
  push32((uint32_t)(0x10175ff0u));
  /* 10163718 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x1016371eu);
  /* 1016371e mov edi, dword ptr [esp + 0x38] */
  EDI = (r32((uint32_t)(ESP + 0x38)));
  /* 10163722 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163725 cmp edi, 5 */
  { uint32_t _a=(EDI),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10163728 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1016372a jge 0x10163740 */
  if ((C.sf==C.of)) goto L_10163740;
  /* 1016372c push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1016372e push 0xc */
  push32((uint32_t)(0xcu));
  /* 10163730 push 0x10173948 */
  push32((uint32_t)(0x10173948u));
  /* 10163735 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x1016373bu);
  /* 1016373b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016373e jmp 0x1016377a */
  goto L_1016377a;
L_10163740:;
  /* 10163740 lea ecx, [edi + 6] */
  ECX = ((uint32_t)(EDI + 0x6));
  /* 10163743 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10163745 push ecx */
  push32((uint32_t)(ECX));
  /* 10163746 push 0x10173948 */
  push32((uint32_t)(0x10173948u));
  /* 1016374b call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10163751u);
  /* 10163751 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10163753 lea edx, [edi + 9] */
  EDX = ((uint32_t)(EDI + 0x9));
  /* 10163756 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10163758 push edx */
  push32((uint32_t)(EDX));
  /* 10163759 push 0x10173948 */
  push32((uint32_t)(0x10173948u));
  /* 1016375e call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10163764u);
  /* 10163764 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10163766 add edi, 0xa */
  { uint32_t _a=(EDI),_b=(0xau),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10163769 push 0xa */
  push32((uint32_t)(0xau));
  /* 1016376b push edi */
  push32((uint32_t)(EDI));
  /* 1016376c push 0x10173948 */
  push32((uint32_t)(0x10173948u));
  /* 10163771 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10163777u);
  /* 10163777 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1016377a:;
  /* 1016377a push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1016377c push 0 */
  push32((uint32_t)(0x0u));
  /* 1016377e call 0x10162640 */
  push32(0x10163783u); f_10162640();
  /* 10163783 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163786 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10163788 je 0x101637e7 */
  if (C.zf) goto L_101637e7;
  /* 1016378a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1016378c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1016378e push 0x10176348 */
  push32((uint32_t)(0x10176348u));
  /* 10163793 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10163799u);
  /* 10163799 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1016379b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1016379d push 0x10176330 */
  push32((uint32_t)(0x10176330u));
  /* 101637a2 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101637a8u);
  /* 101637a8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101637aa push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101637ac push 0x10176340 */
  push32((uint32_t)(0x10176340u));
  /* 101637b1 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101637b7u);
  /* 101637b7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101637b9 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101637bb push 0x10176320 */
  push32((uint32_t)(0x10176320u));
  /* 101637c0 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101637c6u);
  /* 101637c6 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101637c8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101637ca push 0x10176328 */
  push32((uint32_t)(0x10176328u));
  /* 101637cf call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101637d5u);
  /* 101637d5 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101637d7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101637d9 push 0x10176318 */
  push32((uint32_t)(0x10176318u));
  /* 101637de call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101637e4u);
  /* 101637e4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101637e7:;
  /* 101637e7 push 0xa */
  push32((uint32_t)(0xau));
  /* 101637e9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101637eb push 3 */
  push32((uint32_t)(0x3u));
  /* 101637ed push 0x10173900 */
  push32((uint32_t)(0x10173900u));
  /* 101637f2 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x101637f8u);
  /* 101637f8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101637fa push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101637fc push 1 */
  push32((uint32_t)(0x1u));
  /* 101637fe push 0x10176018 */
  push32((uint32_t)(0x10176018u));
  /* 10163803 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10163809u);
  /* 10163809 push 5 */
  push32((uint32_t)(0x5u));
  /* 1016380b push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1016380d push 2 */
  push32((uint32_t)(0x2u));
  /* 1016380f push 0x10176018 */
  push32((uint32_t)(0x10176018u));
  /* 10163814 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x1016381au);
  /* 1016381a mov esi, dword ptr [esp + 0x4c] */
  ESI = (r32((uint32_t)(ESP + 0x4c)));
  /* 1016381e add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163821 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10163823 jne 0x10163839 */
  if (!C.zf) goto L_10163839;
  /* 10163825 push 5 */
  push32((uint32_t)(0x5u));
  /* 10163827 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10163829 push 3 */
  push32((uint32_t)(0x3u));
  /* 1016382b push 0x10176018 */
  push32((uint32_t)(0x10176018u));
  /* 10163830 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10163836u);
  /* 10163836 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10163839:;
  /* 10163839 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1016383b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1016383d push 1 */
  push32((uint32_t)(0x1u));
  /* 1016383f push 0x10176248 */
  push32((uint32_t)(0x10176248u));
  /* 10163844 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x1016384au);
  /* 1016384a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1016384c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1016384e push 1 */
  push32((uint32_t)(0x1u));
  /* 10163850 push 0x101762b0 */
  push32((uint32_t)(0x101762b0u));
  /* 10163855 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x1016385bu);
  /* 1016385b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1016385d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1016385f push 1 */
  push32((uint32_t)(0x1u));
  /* 10163861 push 0x10176030 */
  push32((uint32_t)(0x10176030u));
  /* 10163866 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x1016386cu);
  /* 1016386c push 5 */
  push32((uint32_t)(0x5u));
  /* 1016386e push 0xa */
  push32((uint32_t)(0xau));
  /* 10163870 push 2 */
  push32((uint32_t)(0x2u));
  /* 10163872 push 0x10176248 */
  push32((uint32_t)(0x10176248u));
  /* 10163877 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x1016387du);
  /* 1016387d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163880 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10163882 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10163884 push 1 */
  push32((uint32_t)(0x1u));
  /* 10163886 push 0x10176138 */
  push32((uint32_t)(0x10176138u));
  /* 1016388b call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10163891u);
  /* 10163891 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10163893 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10163895 push 0x101736c0 */
  push32((uint32_t)(0x101736c0u));
  /* 1016389a call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101638a0u);
  /* 101638a0 push 0x10175f80 */
  push32((uint32_t)(0x10175f80u));
  /* 101638a5 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x101638abu);
  /* 101638ab add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101638ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101638b0 jle 0x101638d7 */
  if ((C.zf||C.sf!=C.of)) goto L_101638d7;
  /* 101638b2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 101638b4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101638b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 101638b8 push 0x101738d8 */
  push32((uint32_t)(0x101738d8u));
  /* 101638bd call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x101638c3u);
  /* 101638c3 push 3 */
  push32((uint32_t)(0x3u));
  /* 101638c5 push 5 */
  push32((uint32_t)(0x5u));
  /* 101638c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 101638c9 push 0x10176158 */
  push32((uint32_t)(0x10176158u));
  /* 101638ce call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x101638d4u);
  /* 101638d4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101638d7:;
  /* 101638d7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101638d9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101638db push 1 */
  push32((uint32_t)(0x1u));
  /* 101638dd push 0x10175f80 */
  push32((uint32_t)(0x10175f80u));
  /* 101638e2 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x101638e8u);
  /* 101638e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101638eb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101638ed jne 0x10163903 */
  if (!C.zf) goto L_10163903;
  /* 101638ef push 0xa */
  push32((uint32_t)(0xau));
  /* 101638f1 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101638f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 101638f5 push 0x10176048 */
  push32((uint32_t)(0x10176048u));
  /* 101638fa call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10163900u);
  /* 10163900 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10163903:;
  /* 10163903 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10163905 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10163907 push 1 */
  push32((uint32_t)(0x1u));
  /* 10163909 push 0x10173678 */
  push32((uint32_t)(0x10173678u));
  /* 1016390e call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10163914u);
  /* 10163914 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163917 cmp ebp, 0x19 */
  { uint32_t _a=(EBP),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016391a jle 0x10163930 */
  if ((C.zf||C.sf!=C.of)) goto L_10163930;
  /* 1016391c push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1016391e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10163920 push 2 */
  push32((uint32_t)(0x2u));
  /* 10163922 push 0x10176038 */
  push32((uint32_t)(0x10176038u));
  /* 10163927 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x1016392du);
  /* 1016392d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10163930:;
  /* 10163930 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10163932 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10163934 push 1 */
  push32((uint32_t)(0x1u));
  /* 10163936 push 0x101762b8 */
  push32((uint32_t)(0x101762b8u));
  /* 1016393b call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10163941u);
  /* 10163941 push 5 */
  push32((uint32_t)(0x5u));
  /* 10163943 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10163945 push 2 */
  push32((uint32_t)(0x2u));
  /* 10163947 push 0x101762b8 */
  push32((uint32_t)(0x101762b8u));
  /* 1016394c call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10163952u);
  /* 10163952 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10163954 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10163956 push 0x101760d8 */
  push32((uint32_t)(0x101760d8u));
  /* 1016395b call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10163961u);
  /* 10163961 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10163963 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10163965 push 0x10176090 */
  push32((uint32_t)(0x10176090u));
  /* 1016396a call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10163970u);
  /* 10163970 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10163972 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10163974 push 0x10176098 */
  push32((uint32_t)(0x10176098u));
  /* 10163979 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016397fu);
  /* 1016397f add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163982 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10163984 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10163986 push 0x101760a0 */
  push32((uint32_t)(0x101760a0u));
  /* 1016398b call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10163991u);
  /* 10163991 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10163993 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10163995 push 0x101762d0 */
  push32((uint32_t)(0x101762d0u));
  /* 1016399a call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101639a0u);
  /* 101639a0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101639a2 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101639a4 push 0x10176218 */
  push32((uint32_t)(0x10176218u));
  /* 101639a9 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101639afu);
  /* 101639af push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101639b1 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101639b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 101639b5 push 0x10176338 */
  push32((uint32_t)(0x10176338u));
  /* 101639ba call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x101639c0u);
  /* 101639c0 push 5 */
  push32((uint32_t)(0x5u));
  /* 101639c2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101639c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 101639c6 push 0x10176338 */
  push32((uint32_t)(0x10176338u));
  /* 101639cb call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x101639d1u);
  /* 101639d1 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101639d4 push 5 */
  push32((uint32_t)(0x5u));
  /* 101639d6 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101639d8 push 3 */
  push32((uint32_t)(0x3u));
  /* 101639da push 0x10176338 */
  push32((uint32_t)(0x10176338u));
  /* 101639df call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x101639e5u);
  /* 101639e5 push 5 */
  push32((uint32_t)(0x5u));
  /* 101639e7 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101639e9 push 5 */
  push32((uint32_t)(0x5u));
  /* 101639eb push 0x10176338 */
  push32((uint32_t)(0x10176338u));
  /* 101639f0 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x101639f6u);
  /* 101639f6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101639f8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101639fa push 0x101739b8 */
  push32((uint32_t)(0x101739b8u));
  /* 101639ff call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10163a05u);
  /* 10163a05 call 0x10162630 */
  push32(0x10163a0au); f_10162630();
  /* 10163a0a push 0x101762d0 */
  push32((uint32_t)(0x101762d0u));
  /* 10163a0f mov edi, eax */
  EDI = (EAX);
  /* 10163a11 call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x10163a17u);
  /* 10163a17 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163a1a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10163a1c je 0x10163a3f */
  if (C.zf) goto L_10163a3f;
  /* 10163a1e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10163a20 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10163a22 push 0x101739b8 */
  push32((uint32_t)(0x101739b8u));
  /* 10163a27 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10163a2du);
  /* 10163a2d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10163a2f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10163a31 push 0x101738d0 */
  push32((uint32_t)(0x101738d0u));
  /* 10163a36 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10163a3cu);
  /* 10163a3c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10163a3f:;
  /* 10163a3f push 0x101739b8 */
  push32((uint32_t)(0x101739b8u));
  /* 10163a44 call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x10163a4au);
  /* 10163a4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163a4d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10163a4f je 0x10163a77 */
  if (C.zf) goto L_10163a77;
  /* 10163a51 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10163a53 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10163a55 push 0x101739a0 */
  push32((uint32_t)(0x101739a0u));
  /* 10163a5a call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10163a60u);
  /* 10163a60 push 0xa */
  push32((uint32_t)(0xau));
  /* 10163a62 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10163a64 push 0x101738e0 */
  push32((uint32_t)(0x101738e0u));
  /* 10163a69 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10163a6fu);
  /* 10163a6f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163a72 call 0x10163320 */
  push32(0x10163a77u); f_10163320();
L_10163a77:;
  /* 10163a77 push 0x10176110 */
  push32((uint32_t)(0x10176110u));
  /* 10163a7c call dword ptr [0x101765ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765ac))), 0x10163a82u);
  /* 10163a82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163a85 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10163a87 je 0x10163aae */
  if (C.zf) goto L_10163aae;
  /* 10163a89 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10163a8b push 0xa */
  push32((uint32_t)(0xau));
  /* 10163a8d push 0xa */
  push32((uint32_t)(0xau));
  /* 10163a8f push 0x101736c8 */
  push32((uint32_t)(0x101736c8u));
  /* 10163a94 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10163a9au);
  /* 10163a9a push 0xa */
  push32((uint32_t)(0xau));
  /* 10163a9c push 3 */
  push32((uint32_t)(0x3u));
  /* 10163a9e push 0xf */
  push32((uint32_t)(0xfu));
  /* 10163aa0 push 0x101736c8 */
  push32((uint32_t)(0x101736c8u));
  /* 10163aa5 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10163aabu);
  /* 10163aab add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10163aae:;
  /* 10163aae push 0 */
  push32((uint32_t)(0x0u));
  /* 10163ab0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10163ab2 call 0x101625f0 */
  push32(0x10163ab7u); f_101625f0();
  /* 10163ab7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10163ab9 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10163abfu);
  /* 10163abf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163ac2 cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10163ac7 jle 0x10163b0b */
  if ((C.zf||C.sf!=C.of)) goto L_10163b0b;
  /* 10163ac9 push 0x10173800 */
  push32((uint32_t)(0x10173800u));
  /* 10163ace call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x10163ad4u);
  /* 10163ad4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163ad7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10163ad9 je 0x10163b0b */
  if (C.zf) goto L_10163b0b;
  /* 10163adb push 1 */
  push32((uint32_t)(0x1u));
  /* 10163add call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10163ae3u);
  /* 10163ae3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163ae6 cmp eax, 0x1d4c */
  { uint32_t _a=(EAX),_b=(0x1d4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10163aeb jge 0x10163b0b */
  if ((C.sf==C.of)) goto L_10163b0b;
  /* 10163aed push 0x101739b8 */
  push32((uint32_t)(0x101739b8u));
  /* 10163af2 call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x10163af8u);
  /* 10163af8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163afb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10163afd jne 0x10163b0b */
  if (!C.zf) goto L_10163b0b;
  /* 10163aff push 1 */
  push32((uint32_t)(0x1u));
  /* 10163b01 push 1 */
  push32((uint32_t)(0x1u));
  /* 10163b03 call 0x101625f0 */
  push32(0x10163b08u); f_101625f0();
  /* 10163b08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10163b0b:;
  /* 10163b0b push 0x101739b8 */
  push32((uint32_t)(0x101739b8u));
  /* 10163b10 call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x10163b16u);
  /* 10163b16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163b19 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10163b1b je 0x10163c9c */
  if (C.zf) goto L_10163c9c;
  /* 10163b21 push 0x10176150 */
  push32((uint32_t)(0x10176150u));
  /* 10163b26 call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x10163b2cu);
  /* 10163b2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163b2f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10163b31 je 0x10163c9c */
  if (C.zf) goto L_10163c9c;
  /* 10163b37 push 0x10176218 */
  push32((uint32_t)(0x10176218u));
  /* 10163b3c call dword ptr [0x101765ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765ac))), 0x10163b42u);
  /* 10163b42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163b45 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10163b47 je 0x10163c9c */
  if (C.zf) goto L_10163c9c;
  /* 10163b4d cmp edi, 0xa */
  { uint32_t _a=(EDI),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10163b50 je 0x10163b57 */
  if (C.zf) goto L_10163b57;
  /* 10163b52 cmp edi, 0x12 */
  { uint32_t _a=(EDI),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10163b55 jne 0x10163b87 */
  if (!C.zf) goto L_10163b87;
L_10163b57:;
  /* 10163b57 push 3 */
  push32((uint32_t)(0x3u));
  /* 10163b59 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10163b5fu);
  /* 10163b5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163b62 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10163b67 jle 0x10163b87 */
  if ((C.zf||C.sf!=C.of)) goto L_10163b87;
  /* 10163b69 push 1 */
  push32((uint32_t)(0x1u));
  /* 10163b6b call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10163b71u);
  /* 10163b71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163b74 cmp eax, 0x2008 */
  { uint32_t _a=(EAX),_b=(0x2008u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10163b79 jge 0x10163b87 */
  if ((C.sf==C.of)) goto L_10163b87;
  /* 10163b7b push 1 */
  push32((uint32_t)(0x1u));
  /* 10163b7d push 1 */
  push32((uint32_t)(0x1u));
  /* 10163b7f call 0x101625f0 */
  push32(0x10163b84u); f_101625f0();
  /* 10163b84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10163b87:;
  /* 10163b87 push 0x10176080 */
  push32((uint32_t)(0x10176080u));
  /* 10163b8c call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x10163b92u);
  /* 10163b92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163b95 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10163b97 jne 0x10163bc9 */
  if (!C.zf) goto L_10163bc9;
  /* 10163b99 push 3 */
  push32((uint32_t)(0x3u));
  /* 10163b9b call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10163ba1u);
  /* 10163ba1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163ba4 cmp eax, 0xea60 */
  { uint32_t _a=(EAX),_b=(0xea60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10163ba9 jle 0x10163bc9 */
  if ((C.zf||C.sf!=C.of)) goto L_10163bc9;
  /* 10163bab push 1 */
  push32((uint32_t)(0x1u));
  /* 10163bad call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10163bb3u);
  /* 10163bb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163bb6 cmp eax, 0x2af8 */
  { uint32_t _a=(EAX),_b=(0x2af8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10163bbb jge 0x10163bc9 */
  if ((C.sf==C.of)) goto L_10163bc9;
  /* 10163bbd push 1 */
  push32((uint32_t)(0x1u));
  /* 10163bbf push 1 */
  push32((uint32_t)(0x1u));
  /* 10163bc1 call 0x101625f0 */
  push32(0x10163bc6u); f_101625f0();
  /* 10163bc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10163bc9:;
  /* 10163bc9 push 0x10176080 */
  push32((uint32_t)(0x10176080u));
  /* 10163bce call dword ptr [0x101765ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765ac))), 0x10163bd4u);
  /* 10163bd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163bd7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10163bd9 je 0x10163c9c */
  if (C.zf) goto L_10163c9c;
  /* 10163bdf cmp edi, 0x1c */
  { uint32_t _a=(EDI),_b=(0x1cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10163be2 jne 0x10163c22 */
  if (!C.zf) goto L_10163c22;
  /* 10163be4 push 3 */
  push32((uint32_t)(0x3u));
  /* 10163be6 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10163becu);
  /* 10163bec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163bef cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10163bf4 jle 0x10163cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_10163cf7;
  /* 10163bfa push 4 */
  push32((uint32_t)(0x4u));
  /* 10163bfc call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10163c02u);
  /* 10163c02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163c05 cmp eax, 0x1c84 */
  { uint32_t _a=(EAX),_b=(0x1c84u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10163c0a jle 0x10163cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_10163cf7;
  /* 10163c10 push 1 */
  push32((uint32_t)(0x1u));
  /* 10163c12 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10163c18u);
  /* 10163c18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163c1b cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10163c20 jmp 0x10163c8c */
  goto L_10163c8c;
L_10163c22:;
  /* 10163c22 cmp edi, 0x28 */
  { uint32_t _a=(EDI),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10163c25 jne 0x10163c65 */
  if (!C.zf) goto L_10163c65;
  /* 10163c27 push 3 */
  push32((uint32_t)(0x3u));
  /* 10163c29 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10163c2fu);
  /* 10163c2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163c32 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10163c37 jle 0x10163cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_10163cf7;
  /* 10163c3d push 4 */
  push32((uint32_t)(0x4u));
  /* 10163c3f call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10163c45u);
  /* 10163c45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163c48 cmp eax, 0x2648 */
  { uint32_t _a=(EAX),_b=(0x2648u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10163c4d jle 0x10163cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_10163cf7;
  /* 10163c53 push 1 */
  push32((uint32_t)(0x1u));
  /* 10163c55 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10163c5bu);
  /* 10163c5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163c5e cmp eax, 0x5dc0 */
  { uint32_t _a=(EAX),_b=(0x5dc0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10163c63 jmp 0x10163c8c */
  goto L_10163c8c;
L_10163c65:;
  /* 10163c65 cmp edi, 0x37 */
  { uint32_t _a=(EDI),_b=(0x37u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10163c68 jne 0x10163c9c */
  if (!C.zf) goto L_10163c9c;
  /* 10163c6a push 3 */
  push32((uint32_t)(0x3u));
  /* 10163c6c call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10163c72u);
  /* 10163c72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163c75 cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10163c7a jle 0x10163cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_10163cf7;
  /* 10163c7c push 1 */
  push32((uint32_t)(0x1u));
  /* 10163c7e call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10163c84u);
  /* 10163c84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163c87 cmp eax, 0x6590 */
  { uint32_t _a=(EAX),_b=(0x6590u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10163c8c:;
  /* 10163c8c jge 0x10163cf7 */
  if ((C.sf==C.of)) goto L_10163cf7;
  /* 10163c8e push 1 */
  push32((uint32_t)(0x1u));
  /* 10163c90 push 1 */
  push32((uint32_t)(0x1u));
  /* 10163c92 call 0x101625f0 */
  push32(0x10163c97u); f_101625f0();
  /* 10163c97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163c9a jmp 0x10163cf7 */
  goto L_10163cf7;
L_10163c9c:;
  /* 10163c9c cmp edi, 0x5f */
  { uint32_t _a=(EDI),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10163c9f jne 0x10163cf7 */
  if (!C.zf) goto L_10163cf7;
  /* 10163ca1 push 0xa */
  push32((uint32_t)(0xau));
  /* 10163ca3 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10163ca5 push 0x101737c8 */
  push32((uint32_t)(0x101737c8u));
  /* 10163caa call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10163cb0u);
  /* 10163cb0 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10163cb2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10163cb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10163cb6 push 0x101763f8 */
  push32((uint32_t)(0x101763f8u));
  /* 10163cbb call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10163cc1u);
  /* 10163cc1 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10163cc3 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10163cc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10163cc7 push 0x101763f8 */
  push32((uint32_t)(0x101763f8u));
  /* 10163ccc call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10163cd2u);
  /* 10163cd2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10163cd4 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10163cd6 push 3 */
  push32((uint32_t)(0x3u));
  /* 10163cd8 push 0x101763f8 */
  push32((uint32_t)(0x101763f8u));
  /* 10163cdd call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10163ce3u);
  /* 10163ce3 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10163ce5 push 0xa */
  push32((uint32_t)(0xau));
  /* 10163ce7 push 5 */
  push32((uint32_t)(0x5u));
  /* 10163ce9 push 0x101763f8 */
  push32((uint32_t)(0x101763f8u));
  /* 10163cee call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10163cf4u);
  /* 10163cf4 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10163cf7:;
  /* 10163cf7 cmp ebp, 0x50 */
  { uint32_t _a=(EBP),_b=(0x50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10163cfa jle 0x10163d53 */
  if ((C.zf||C.sf!=C.of)) goto L_10163d53;
  /* 10163cfc mov al, byte ptr [esp + 0x13] */
  AL = (r8((uint32_t)(ESP + 0x13)));
  /* 10163d00 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10163d02 je 0x10163d53 */
  if (C.zf) goto L_10163d53;
  /* 10163d04 push 0xa */
  push32((uint32_t)(0xau));
  /* 10163d06 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10163d08 push 1 */
  push32((uint32_t)(0x1u));
  /* 10163d0a push 0x10173938 */
  push32((uint32_t)(0x10173938u));
  /* 10163d0f call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10163d15u);
  /* 10163d15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163d18 cmp ebp, 0x5f */
  { uint32_t _a=(EBP),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10163d1b jle 0x10163d53 */
  if ((C.zf||C.sf!=C.of)) goto L_10163d53;
  /* 10163d1d push 0xa */
  push32((uint32_t)(0xau));
  /* 10163d1f push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10163d21 push 2 */
  push32((uint32_t)(0x2u));
  /* 10163d23 push 0x10173938 */
  push32((uint32_t)(0x10173938u));
  /* 10163d28 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10163d2eu);
  /* 10163d2e push 0xa */
  push32((uint32_t)(0xau));
  /* 10163d30 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10163d32 push 3 */
  push32((uint32_t)(0x3u));
  /* 10163d34 push 0x10173938 */
  push32((uint32_t)(0x10173938u));
  /* 10163d39 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10163d3fu);
  /* 10163d3f push 0xa */
  push32((uint32_t)(0xau));
  /* 10163d41 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10163d43 push 4 */
  push32((uint32_t)(0x4u));
  /* 10163d45 push 0x10173938 */
  push32((uint32_t)(0x10173938u));
  /* 10163d4a call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10163d50u);
  /* 10163d50 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10163d53:;
  /* 10163d53 mov bl, byte ptr [esp + 0x12] */
  BL = (r8((uint32_t)(ESP + 0x12)));
  /* 10163d57 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10163d59 je 0x10163d97 */
  if (C.zf) goto L_10163d97;
  /* 10163d5b push 0x101762d0 */
  push32((uint32_t)(0x101762d0u));
  /* 10163d60 call dword ptr [0x101765ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765ac))), 0x10163d66u);
  /* 10163d66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163d69 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10163d6b je 0x10163d97 */
  if (C.zf) goto L_10163d97;
  /* 10163d6d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10163d6f push 1 */
  push32((uint32_t)(0x1u));
  /* 10163d71 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10163d73 push 0x101761c0 */
  push32((uint32_t)(0x101761c0u));
  /* 10163d78 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10163d7eu);
  /* 10163d7e push 0x101761f8 */
  push32((uint32_t)(0x101761f8u));
  /* 10163d83 call dword ptr [0x101765ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765ac))), 0x10163d89u);
  /* 10163d89 push 0x10176110 */
  push32((uint32_t)(0x10176110u));
  /* 10163d8e call dword ptr [0x101765ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765ac))), 0x10163d94u);
  /* 10163d94 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10163d97:;
  /* 10163d97 push 0x10173678 */
  push32((uint32_t)(0x10173678u));
  /* 10163d9c call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10163da2u);
  /* 10163da2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10163da4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10163da6 push 3 */
  push32((uint32_t)(0x3u));
  /* 10163da8 push 0x10176250 */
  push32((uint32_t)(0x10176250u));
  /* 10163dad call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10163db3u);
  /* 10163db3 push 0x10176150 */
  push32((uint32_t)(0x10176150u));
  /* 10163db8 call dword ptr [0x101765ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765ac))), 0x10163dbeu);
  /* 10163dbe add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163dc1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10163dc3 je 0x10163dd9 */
  if (C.zf) goto L_10163dd9;
  /* 10163dc5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10163dc7 push 0xa */
  push32((uint32_t)(0xau));
  /* 10163dc9 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10163dcb push 0x10176250 */
  push32((uint32_t)(0x10176250u));
  /* 10163dd0 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10163dd6u);
  /* 10163dd6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10163dd9:;
  /* 10163dd9 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10163ddb je 0x10163ec5 */
  if (C.zf) goto L_10163ec5;
  /* 10163de1 push 0x101762d0 */
  push32((uint32_t)(0x101762d0u));
  /* 10163de6 call dword ptr [0x101765ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765ac))), 0x10163decu);
  /* 10163dec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163def test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10163df1 je 0x10163ec5 */
  if (C.zf) goto L_10163ec5;
  /* 10163df7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10163df9 jne 0x10163e31 */
  if (!C.zf) goto L_10163e31;
  /* 10163dfb push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10163dfd push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10163dff push 2 */
  push32((uint32_t)(0x2u));
  /* 10163e01 push 0x10176138 */
  push32((uint32_t)(0x10176138u));
  /* 10163e06 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10163e0cu);
  /* 10163e0c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10163e0e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10163e10 push 3 */
  push32((uint32_t)(0x3u));
  /* 10163e12 push 0x10176138 */
  push32((uint32_t)(0x10176138u));
  /* 10163e17 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10163e1du);
  /* 10163e1d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10163e1f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10163e21 push 4 */
  push32((uint32_t)(0x4u));
  /* 10163e23 push 0x10176138 */
  push32((uint32_t)(0x10176138u));
  /* 10163e28 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10163e2eu);
  /* 10163e2e add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10163e31:;
  /* 10163e31 push 0x10176140 */
  push32((uint32_t)(0x10176140u));
  /* 10163e36 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10163e3cu);
  /* 10163e3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163e3f cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10163e42 jle 0x10163e65 */
  if ((C.zf||C.sf!=C.of)) goto L_10163e65;
  /* 10163e44 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10163e46 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10163e48 push 0x10176268 */
  push32((uint32_t)(0x10176268u));
  /* 10163e4d call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10163e53u);
  /* 10163e53 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10163e55 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10163e57 push 0x10176270 */
  push32((uint32_t)(0x10176270u));
  /* 10163e5c call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10163e62u);
  /* 10163e62 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10163e65:;
  /* 10163e65 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10163e67 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10163e69 push 0x10176150 */
  push32((uint32_t)(0x10176150u));
  /* 10163e6e call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10163e74u);
  /* 10163e74 push 0x10173968 */
  push32((uint32_t)(0x10173968u));
  /* 10163e79 call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x10163e7fu);
  /* 10163e7f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163e82 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10163e84 je 0x10163ec5 */
  if (C.zf) goto L_10163ec5;
  /* 10163e86 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10163e88 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10163e8a push 0x101761c8 */
  push32((uint32_t)(0x101761c8u));
  /* 10163e8f call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10163e95u);
  /* 10163e95 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10163e97 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10163e99 push 0x101761d8 */
  push32((uint32_t)(0x101761d8u));
  /* 10163e9e call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10163ea4u);
  /* 10163ea4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10163ea6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10163ea8 push 0x101761e0 */
  push32((uint32_t)(0x101761e0u));
  /* 10163ead call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10163eb3u);
  /* 10163eb3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10163eb5 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10163eb7 push 0x101761d0 */
  push32((uint32_t)(0x101761d0u));
  /* 10163ebc call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10163ec2u);
  /* 10163ec2 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10163ec5:;
  /* 10163ec5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10163ec7 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10163ec9 push 0x10173800 */
  push32((uint32_t)(0x10173800u));
  /* 10163ece call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10163ed4u);
  /* 10163ed4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10163ed6 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10163ed8 push 0x10173940 */
  push32((uint32_t)(0x10173940u));
  /* 10163edd call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10163ee3u);
  /* 10163ee3 push 0x101762b0 */
  push32((uint32_t)(0x101762b0u));
  /* 10163ee8 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10163eeeu);
  /* 10163eee add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163ef1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10163ef4 jle 0x10163f31 */
  if ((C.zf||C.sf!=C.of)) goto L_10163f31;
  /* 10163ef6 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10163efa cmp eax, 0x12c */
  { uint32_t _a=(EAX),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10163eff jle 0x10163f31 */
  if ((C.zf||C.sf!=C.of)) goto L_10163f31;
  /* 10163f01 lea ecx, [eax - 0x32] */
  ECX = ((uint32_t)(EAX + -0x32));
  /* 10163f04 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10163f08 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 10163f0b cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10163f0d jge 0x10163f26 */
  if ((C.sf==C.of)) goto L_10163f26;
  /* 10163f0f push 0xa */
  push32((uint32_t)(0xau));
  /* 10163f11 push 0xa */
  push32((uint32_t)(0xau));
  /* 10163f13 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10163f18 push 0x10176140 */
  push32((uint32_t)(0x10176140u));
  /* 10163f1d call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10163f23u);
  /* 10163f23 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10163f26:;
  /* 10163f26 call 0x101632d0 */
  push32(0x10163f2bu); f_101632d0();
  /* 10163f2b jmp 0x10163f31 */
  goto L_10163f31;
L_10163f2d:;
  /* 10163f2d mov bl, byte ptr [esp + 0x12] */
  BL = (r8((uint32_t)(ESP + 0x12)));
L_10163f31:;
  /* 10163f31 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10163f33 je 0x10163f76 */
  if (C.zf) goto L_10163f76;
  /* 10163f35 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10163f37 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10163f39 push 0x10173690 */
  push32((uint32_t)(0x10173690u));
  /* 10163f3e call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10163f44u);
  /* 10163f44 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10163f46 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10163f48 push 0x10173768 */
  push32((uint32_t)(0x10173768u));
  /* 10163f4d call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10163f53u);
  /* 10163f53 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10163f55 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10163f57 push 0x10173688 */
  push32((uint32_t)(0x10173688u));
  /* 10163f5c call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10163f62u);
  /* 10163f62 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10163f64 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10163f66 push 2 */
  push32((uint32_t)(0x2u));
  /* 10163f68 push 0x101762b0 */
  push32((uint32_t)(0x101762b0u));
  /* 10163f6d call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10163f73u);
  /* 10163f73 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10163f76:;
  /* 10163f76 push 0x10173800 */
  push32((uint32_t)(0x10173800u));
  /* 10163f7b call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x10163f81u);
  /* 10163f81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163f84 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10163f86 je 0x10163fa9 */
  if (C.zf) goto L_10163fa9;
  /* 10163f88 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10163f8a push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10163f8c push 0x10176258 */
  push32((uint32_t)(0x10176258u));
  /* 10163f91 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10163f97u);
  /* 10163f97 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10163f99 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10163f9b push 0x10176260 */
  push32((uint32_t)(0x10176260u));
  /* 10163fa0 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10163fa6u);
  /* 10163fa6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10163fa9:;
  /* 10163fa9 push 0x101738d8 */
  push32((uint32_t)(0x101738d8u));
  /* 10163fae call dword ptr [0x101765a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a4))), 0x10163fb4u);
  /* 10163fb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163fb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10163fb9 je 0x10164223 */
  if (C.zf) goto L_10164223;
  /* 10163fbf push 0x10175f80 */
  push32((uint32_t)(0x10175f80u));
  /* 10163fc4 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10163fcau);
  /* 10163fca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163fcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10163fcf je 0x1016402a */
  if (C.zf) goto L_1016402a;
  /* 10163fd1 push 0x101762d0 */
  push32((uint32_t)(0x101762d0u));
  /* 10163fd6 call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x10163fdcu);
  /* 10163fdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163fdf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10163fe1 jne 0x1016402a */
  if (!C.zf) goto L_1016402a;
  /* 10163fe3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10163fe5 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10163febu);
  /* 10163feb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10163fee cmp eax, 0x320 */
  { uint32_t _a=(EAX),_b=(0x320u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10163ff3 jle 0x1016402a */
  if ((C.zf||C.sf!=C.of)) goto L_1016402a;
  /* 10163ff5 push 3 */
  push32((uint32_t)(0x3u));
  /* 10163ff7 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10163ffdu);
  /* 10163ffd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164000 cmp eax, 0x1770 */
  { uint32_t _a=(EAX),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10164005 jge 0x1016402a */
  if ((C.sf==C.of)) goto L_1016402a;
  /* 10164007 push 4 */
  push32((uint32_t)(0x4u));
  /* 10164009 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x1016400fu);
  /* 1016400f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164012 cmp eax, 0xbb8 */
  { uint32_t _a=(EAX),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10164017 jle 0x1016402a */
  if ((C.zf||C.sf!=C.of)) goto L_1016402a;
  /* 10164019 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1016401e push 3 */
  push32((uint32_t)(0x3u));
  /* 10164020 push 4 */
  push32((uint32_t)(0x4u));
  /* 10164022 call 0x10162610 */
  push32(0x10164027u); f_10162610();
  /* 10164027 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1016402a:;
  /* 1016402a push 3 */
  push32((uint32_t)(0x3u));
  /* 1016402c call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10164032u);
  /* 10164032 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164035 cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016403a jge 0x1016405f */
  if ((C.sf==C.of)) goto L_1016405f;
  /* 1016403c push 2 */
  push32((uint32_t)(0x2u));
  /* 1016403e call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10164044u);
  /* 10164044 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164047 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016404c jle 0x1016405f */
  if ((C.zf||C.sf!=C.of)) goto L_1016405f;
  /* 1016404e push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10164053 push 3 */
  push32((uint32_t)(0x3u));
  /* 10164055 push 2 */
  push32((uint32_t)(0x2u));
  /* 10164057 call 0x10162610 */
  push32(0x1016405cu); f_10162610();
  /* 1016405c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1016405f:;
  /* 1016405f push 0x10176258 */
  push32((uint32_t)(0x10176258u));
  /* 10164064 call dword ptr [0x101765ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765ac))), 0x1016406au);
  /* 1016406a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016406d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1016406f je 0x10164197 */
  if (C.zf) goto L_10164197;
  /* 10164075 push 0x10176260 */
  push32((uint32_t)(0x10176260u));
  /* 1016407a call dword ptr [0x101765ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765ac))), 0x10164080u);
  /* 10164080 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164083 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10164085 je 0x10164197 */
  if (C.zf) goto L_10164197;
  /* 1016408b push 2 */
  push32((uint32_t)(0x2u));
  /* 1016408d call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10164093u);
  /* 10164093 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164096 cmp eax, 0x1adb0 */
  { uint32_t _a=(EAX),_b=(0x1adb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016409b jle 0x101640ae */
  if ((C.zf||C.sf!=C.of)) goto L_101640ae;
  /* 1016409d push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 101640a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 101640a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 101640a6 call 0x10162610 */
  push32(0x101640abu); f_10162610();
  /* 101640ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101640ae:;
  /* 101640ae push 0 */
  push32((uint32_t)(0x0u));
  /* 101640b0 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x101640b6u);
  /* 101640b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101640b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101640bb je 0x101641ba */
  if (C.zf) goto L_101641ba;
  /* 101640c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 101640c3 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x101640c9u);
  /* 101640c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101640cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101640ce je 0x1016413b */
  if (C.zf) goto L_1016413b;
  /* 101640d0 push 4 */
  push32((uint32_t)(0x4u));
  /* 101640d2 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x101640d8u);
  /* 101640d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101640db cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101640e0 jge 0x1016413b */
  if ((C.sf==C.of)) goto L_1016413b;
  /* 101640e2 push 4 */
  push32((uint32_t)(0x4u));
  /* 101640e4 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x101640eau);
  /* 101640ea push 5 */
  push32((uint32_t)(0x5u));
  /* 101640ec mov esi, eax */
  ESI = (EAX);
  /* 101640ee call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x101640f4u);
  /* 101640f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101640f7 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101640f9 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 101640fe jge 0x1016411f */
  if ((C.sf==C.of)) goto L_1016411f;
  /* 10164100 push 5 */
  push32((uint32_t)(0x5u));
  /* 10164102 push 2 */
  push32((uint32_t)(0x2u));
  /* 10164104 call 0x10162610 */
  push32(0x10164109u); f_10162610();
  /* 10164109 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 1016410e push 4 */
  push32((uint32_t)(0x4u));
  /* 10164110 push 2 */
  push32((uint32_t)(0x2u));
  /* 10164112 call 0x10162610 */
  push32(0x10164117u); f_10162610();
  /* 10164117 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016411a jmp 0x101641ba */
  goto L_101641ba;
L_1016411f:;
  /* 1016411f push 4 */
  push32((uint32_t)(0x4u));
  /* 10164121 push 2 */
  push32((uint32_t)(0x2u));
  /* 10164123 call 0x10162610 */
  push32(0x10164128u); f_10162610();
  /* 10164128 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 1016412d push 5 */
  push32((uint32_t)(0x5u));
  /* 1016412f push 2 */
  push32((uint32_t)(0x2u));
  /* 10164131 call 0x10162610 */
  push32(0x10164136u); f_10162610();
  /* 10164136 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164139 jmp 0x101641ba */
  goto L_101641ba;
L_1016413b:;
  /* 1016413b push 5 */
  push32((uint32_t)(0x5u));
  /* 1016413d call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10164143u);
  /* 10164143 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164146 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016414b jge 0x1016416d */
  if ((C.sf==C.of)) goto L_1016416d;
  /* 1016414d push 0 */
  push32((uint32_t)(0x0u));
  /* 1016414f call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10164155u);
  /* 10164155 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164158 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016415a je 0x1016416d */
  if (C.zf) goto L_1016416d;
  /* 1016415c push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10164161 push 5 */
  push32((uint32_t)(0x5u));
  /* 10164163 push 2 */
  push32((uint32_t)(0x2u));
  /* 10164165 call 0x10162610 */
  push32(0x1016416au); f_10162610();
  /* 1016416a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1016416d:;
  /* 1016416d push 5 */
  push32((uint32_t)(0x5u));
  /* 1016416f call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10164175u);
  /* 10164175 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164178 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016417d jge 0x101641ba */
  if ((C.sf==C.of)) goto L_101641ba;
  /* 1016417f push 0 */
  push32((uint32_t)(0x0u));
  /* 10164181 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10164187u);
  /* 10164187 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016418a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016418c je 0x101641ba */
  if (C.zf) goto L_101641ba;
  /* 1016418e push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10164193 push 5 */
  push32((uint32_t)(0x5u));
  /* 10164195 jmp 0x101641b0 */
  goto L_101641b0;
L_10164197:;
  /* 10164197 push 2 */
  push32((uint32_t)(0x2u));
  /* 10164199 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x1016419fu);
  /* 1016419f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101641a2 cmp eax, 0x1adb0 */
  { uint32_t _a=(EAX),_b=(0x1adb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101641a7 jle 0x101641ba */
  if ((C.zf||C.sf!=C.of)) goto L_101641ba;
  /* 101641a9 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 101641ae push 1 */
  push32((uint32_t)(0x1u));
L_101641b0:;
  /* 101641b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 101641b2 call 0x10162610 */
  push32(0x101641b7u); f_10162610();
  /* 101641b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101641ba:;
  /* 101641ba push 0 */
  push32((uint32_t)(0x0u));
  /* 101641bc call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x101641c2u);
  /* 101641c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101641c5 cmp eax, 0x249f0 */
  { uint32_t _a=(EAX),_b=(0x249f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101641ca jle 0x101641dd */
  if ((C.zf||C.sf!=C.of)) goto L_101641dd;
  /* 101641cc push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 101641d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 101641d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 101641d5 call 0x10162610 */
  push32(0x101641dau); f_10162610();
  /* 101641da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101641dd:;
  /* 101641dd push 4 */
  push32((uint32_t)(0x4u));
  /* 101641df call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x101641e5u);
  /* 101641e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101641e8 cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101641ed jle 0x10164200 */
  if ((C.zf||C.sf!=C.of)) goto L_10164200;
  /* 101641ef push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 101641f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 101641f6 push 4 */
  push32((uint32_t)(0x4u));
  /* 101641f8 call 0x10162610 */
  push32(0x101641fdu); f_10162610();
  /* 101641fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10164200:;
  /* 10164200 push 5 */
  push32((uint32_t)(0x5u));
  /* 10164202 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10164208u);
  /* 10164208 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016420b cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10164210 jle 0x10164223 */
  if ((C.zf||C.sf!=C.of)) goto L_10164223;
  /* 10164212 push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 10164217 push 1 */
  push32((uint32_t)(0x1u));
  /* 10164219 push 5 */
  push32((uint32_t)(0x5u));
  /* 1016421b call 0x10162610 */
  push32(0x10164220u); f_10162610();
  /* 10164220 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10164223:;
  /* 10164223 pop edi */
  EDI = (pop32());
  /* 10164224 pop esi */
  ESI = (pop32());
  /* 10164225 pop ebp */
  EBP = (pop32());
  /* 10164226 pop ebx */
  EBX = (pop32());
  /* 10164227 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016422a ret  */
  ESPCHK(0x10163360u, _esp0);
  ESP += 4; return;
}

/* FUN_10004230 @ 0x10164230 (209 bytes, 56 insns) */
void f_10164230(void) {
  FTRACE(0x10164230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10164230 push 3 */
  push32((uint32_t)(0x3u));
  /* 10164232 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10164238u);
  /* 10164238 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016423b cmp eax, 0x672 */
  { uint32_t _a=(EAX),_b=(0x672u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10164240 jle 0x10164300 */
  if ((C.zf||C.sf!=C.of)) goto L_10164300;
  /* 10164246 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10164248 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1016424a push 0x101763b0 */
  push32((uint32_t)(0x101763b0u));
  /* 1016424f call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10164255u);
  /* 10164255 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10164257 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10164259 push 0x101763b8 */
  push32((uint32_t)(0x101763b8u));
  /* 1016425e call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10164264u);
  /* 10164264 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10164266 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10164268 push 0x101763a0 */
  push32((uint32_t)(0x101763a0u));
  /* 1016426d call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10164273u);
  /* 10164273 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10164275 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10164277 push 0x101763a8 */
  push32((uint32_t)(0x101763a8u));
  /* 1016427c call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10164282u);
  /* 10164282 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10164284 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10164286 push 0x101763c0 */
  push32((uint32_t)(0x101763c0u));
  /* 1016428b call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10164291u);
  /* 10164291 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10164293 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10164295 push 0x101762f8 */
  push32((uint32_t)(0x101762f8u));
  /* 1016429a call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101642a0u);
  /* 101642a0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101642a3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101642a5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101642a7 push 0x101762e0 */
  push32((uint32_t)(0x101762e0u));
  /* 101642ac call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101642b2u);
  /* 101642b2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101642b4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101642b6 push 0x101762e8 */
  push32((uint32_t)(0x101762e8u));
  /* 101642bb call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101642c1u);
  /* 101642c1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101642c3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101642c5 push 0x10176300 */
  push32((uint32_t)(0x10176300u));
  /* 101642ca call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101642d0u);
  /* 101642d0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101642d2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101642d4 push 0x10176308 */
  push32((uint32_t)(0x10176308u));
  /* 101642d9 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101642dfu);
  /* 101642df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101642e1 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101642e3 push 0x101762c0 */
  push32((uint32_t)(0x101762c0u));
  /* 101642e8 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101642eeu);
  /* 101642ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101642f0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101642f2 push 0x10176028 */
  push32((uint32_t)(0x10176028u));
  /* 101642f7 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101642fdu);
  /* 101642fd add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10164300:;
  /* 10164300 ret  */
  ESPCHK(0x10164230u, _esp0);
  ESP += 4; return;
}

/* FUN_10004310 @ 0x10164310 (79 bytes, 22 insns) */
void f_10164310(void) {
  FTRACE(0x10164310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10164310 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10164312 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10164314 push 0x10173970 */
  push32((uint32_t)(0x10173970u));
  /* 10164319 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016431fu);
  /* 1016431f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10164321 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10164323 push 0x10173978 */
  push32((uint32_t)(0x10173978u));
  /* 10164328 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016432eu);
  /* 1016432e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10164330 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10164332 push 0x10173968 */
  push32((uint32_t)(0x10173968u));
  /* 10164337 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016433du);
  /* 1016433d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1016433f push 0xa */
  push32((uint32_t)(0xau));
  /* 10164341 push 0x10175fd8 */
  push32((uint32_t)(0x10175fd8u));
  /* 10164346 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016434cu);
  /* 1016434c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1016434e push 0xa */
  push32((uint32_t)(0xau));
  /* 10164350 push 0x10175fc8 */
  push32((uint32_t)(0x10175fc8u));
  /* 10164355 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016435bu);
  /* 1016435b add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016435e ret  */
  ESPCHK(0x10164310u, _esp0);
  ESP += 4; return;
}

/* FUN_10004360 @ 0x10164360 (127 bytes, 35 insns) */
void f_10164360(void) {
  FTRACE(0x10164360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10164360 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10164362 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10164364 push 0x10176238 */
  push32((uint32_t)(0x10176238u));
  /* 10164369 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016436fu);
  /* 1016436f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10164371 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10164373 push 0x10176230 */
  push32((uint32_t)(0x10176230u));
  /* 10164378 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016437eu);
  /* 1016437e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10164380 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10164382 push 0x10176200 */
  push32((uint32_t)(0x10176200u));
  /* 10164387 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016438du);
  /* 1016438d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1016438f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10164391 push 0x101761f8 */
  push32((uint32_t)(0x101761f8u));
  /* 10164396 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016439cu);
  /* 1016439c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1016439e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101643a0 push 0x101760f8 */
  push32((uint32_t)(0x101760f8u));
  /* 101643a5 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101643abu);
  /* 101643ab push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101643ad push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101643af push 0x10176100 */
  push32((uint32_t)(0x10176100u));
  /* 101643b4 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101643bau);
  /* 101643ba add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101643bd push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101643bf push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101643c1 push 0x10176108 */
  push32((uint32_t)(0x10176108u));
  /* 101643c6 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101643ccu);
  /* 101643cc push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101643ce push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101643d0 push 0x10176110 */
  push32((uint32_t)(0x10176110u));
  /* 101643d5 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101643dbu);
  /* 101643db add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101643de ret  */
  ESPCHK(0x10164360u, _esp0);
  ESP += 4; return;
}

/* ProcessMiddleSeaAI @ 0x101643e0 (3643 bytes, 1035 insns) */
void f_101643e0(void) {
  FTRACE(0x101643e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101643e0 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101643e3 push ebx */
  push32((uint32_t)(EBX));
  /* 101643e4 push ebp */
  push32((uint32_t)(EBP));
  /* 101643e5 push esi */
  push32((uint32_t)(ESI));
  /* 101643e6 push edi */
  push32((uint32_t)(EDI));
  /* 101643e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 101643e9 call 0x10162760 */
  push32(0x101643eeu); f_10162760();
  /* 101643ee push 0x1016f030 */
  push32((uint32_t)(0x1016f030u));
  /* 101643f3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101643f5 call dword ptr [0x1017656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017656c))), 0x101643fbu);
  /* 101643fb push 0x101761f0 */
  push32((uint32_t)(0x101761f0u));
  /* 10164400 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10164406u);
  /* 10164406 push 3 */
  push32((uint32_t)(0x3u));
  /* 10164408 mov ebx, eax */
  EBX = (EAX);
  /* 1016440a call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10164410u);
  /* 10164410 mov ebp, eax */
  EBP = (EAX);
  /* 10164412 push 0x10176218 */
  push32((uint32_t)(0x10176218u));
  /* 10164417 mov dword ptr [esp + 0x30], ebp */
  w32((uint32_t)(ESP + 0x30), (EBP));
  /* 1016441b call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x10164421u);
  /* 10164421 push 0x101736e8 */
  push32((uint32_t)(0x101736e8u));
  /* 10164426 mov byte ptr [esp + 0x2f], al */
  w8((uint32_t)(ESP + 0x2f), (AL));
  /* 1016442a call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10164430u);
  /* 10164430 push 0x10176080 */
  push32((uint32_t)(0x10176080u));
  /* 10164435 call dword ptr [0x101765ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765ac))), 0x1016443bu);
  /* 1016443b push 0x10176140 */
  push32((uint32_t)(0x10176140u));
  /* 10164440 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10164446u);
  /* 10164446 push 0x10176410 */
  push32((uint32_t)(0x10176410u));
  /* 1016444b call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10164451u);
  /* 10164451 push 0x10176390 */
  push32((uint32_t)(0x10176390u));
  /* 10164456 mov esi, eax */
  ESI = (EAX);
  /* 10164458 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x1016445eu);
  /* 1016445e push 0x101736e8 */
  push32((uint32_t)(0x101736e8u));
  /* 10164463 mov edi, eax */
  EDI = (EAX);
  /* 10164465 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x1016446bu);
  /* 1016446b add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016446d add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164470 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10164472 mov byte ptr [esp + 0x12], 1 */
  w8((uint32_t)(ESP + 0x12), (0x1u));
  /* 10164477 mov dword ptr [esp + 0x14], eax */
  w32((uint32_t)(ESP + 0x14), (EAX));
  /* 1016447b call 0x10162660 */
  push32(0x10164480u); f_10162660();
  /* 10164480 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10164482 jle 0x10164498 */
  if ((C.zf||C.sf!=C.of)) goto L_10164498;
  /* 10164484 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10164486 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10164488 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1016448a push 0x10176388 */
  push32((uint32_t)(0x10176388u));
  /* 1016448f call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10164495u);
  /* 10164495 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10164498:;
  /* 10164498 push 0x10173938 */
  push32((uint32_t)(0x10173938u));
  /* 1016449d call dword ptr [0x101765a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a4))), 0x101644a3u);
  /* 101644a3 push 0x10173938 */
  push32((uint32_t)(0x10173938u));
  /* 101644a8 mov esi, eax */
  ESI = (EAX);
  /* 101644aa call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x101644b0u);
  /* 101644b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101644b3 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101644b5 je 0x101644bc */
  if (C.zf) goto L_101644bc;
  /* 101644b7 mov byte ptr [esp + 0x12], 0 */
  w8((uint32_t)(ESP + 0x12), (0x0u));
L_101644bc:;
  /* 101644bc test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101644be je 0x10165213 */
  if (C.zf) goto L_10165213;
  /* 101644c4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101644c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101644c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 101644ca push 0x10176038 */
  push32((uint32_t)(0x10176038u));
  /* 101644cf call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x101644d5u);
  /* 101644d5 push 0x10176038 */
  push32((uint32_t)(0x10176038u));
  /* 101644da call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x101644e0u);
  /* 101644e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101644e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101644e5 je 0x10165213 */
  if (C.zf) goto L_10165213;
  /* 101644eb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101644ed push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101644ef push 0x101763d8 */
  push32((uint32_t)(0x101763d8u));
  /* 101644f4 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101644fau);
  /* 101644fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101644fd call dword ptr [0x101765d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765d0))), 0x10164503u);
  /* 10164503 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10164505 jne 0x1016455c */
  if (!C.zf) goto L_1016455c;
  /* 10164507 cmp ebp, 0x2bc */
  { uint32_t _a=(EBP),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016450d jle 0x10164534 */
  if ((C.zf||C.sf!=C.of)) goto L_10164534;
  /* 1016450f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10164511 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10164513 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10164515 push 0x101761f0 */
  push32((uint32_t)(0x101761f0u));
  /* 1016451a call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10164520u);
  /* 10164520 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10164522 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10164524 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10164526 push 0x101736e8 */
  push32((uint32_t)(0x101736e8u));
  /* 1016452b call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10164531u);
  /* 10164531 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10164534:;
  /* 10164534 cmp ebp, 0x3e8 */
  { uint32_t _a=(EBP),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016453a jle 0x10164548 */
  if ((C.zf||C.sf!=C.of)) goto L_10164548;
  /* 1016453c cmp dword ptr [esp + 0x14], 0x1e */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10164541 jle 0x10164548 */
  if ((C.zf||C.sf!=C.of)) goto L_10164548;
  /* 10164543 call 0x10164230 */
  push32(0x10164548u); f_10164230();
L_10164548:;
  /* 10164548 push 1 */
  push32((uint32_t)(0x1u));
  /* 1016454a push 1 */
  push32((uint32_t)(0x1u));
  /* 1016454c push 0 */
  push32((uint32_t)(0x0u));
  /* 1016454e call dword ptr [0x10176574] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176574))), 0x10164554u);
  /* 10164554 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164557 jmp 0x1016461f */
  goto L_1016461f;
L_1016455c:;
  /* 1016455c mov eax, dword ptr [0x101765f4] */
  EAX = (r32((uint32_t)(0x101765f4)));
  /* 10164561 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10164564 je 0x10164578 */
  if (C.zf) goto L_10164578;
  /* 10164566 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10164567 je 0x10164572 */
  if (C.zf) goto L_10164572;
  /* 10164569 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1016456a jne 0x101645a4 */
  if (!C.zf) goto L_101645a4;
  /* 1016456c push 9 */
  push32((uint32_t)(0x9u));
  /* 1016456e push 4 */
  push32((uint32_t)(0x4u));
  /* 10164570 jmp 0x10164599 */
  goto L_10164599;
L_10164572:;
  /* 10164572 push 4 */
  push32((uint32_t)(0x4u));
  /* 10164574 push 9 */
  push32((uint32_t)(0x9u));
  /* 10164576 jmp 0x10164599 */
  goto L_10164599;
L_10164578:;
  /* 10164578 cmp ebp, 0x2ee0 */
  { uint32_t _a=(EBP),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016457e jle 0x1016458f */
  if ((C.zf||C.sf!=C.of)) goto L_1016458f;
  /* 10164580 push 6 */
  push32((uint32_t)(0x6u));
  /* 10164582 push 6 */
  push32((uint32_t)(0x6u));
  /* 10164584 push 9 */
  push32((uint32_t)(0x9u));
  /* 10164586 call dword ptr [0x10176574] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176574))), 0x1016458cu);
  /* 1016458c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1016458f:;
  /* 1016458f push 5 */
  push32((uint32_t)(0x5u));
  /* 10164591 cmp ebp, 0x1f40 */
  { uint32_t _a=(EBP),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10164597 push 5 */
  push32((uint32_t)(0x5u));
L_10164599:;
  /* 10164599 push 9 */
  push32((uint32_t)(0x9u));
  /* 1016459b call dword ptr [0x10176574] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176574))), 0x101645a1u);
  /* 101645a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101645a4:;
  /* 101645a4 mov al, byte ptr [esp + 0x13] */
  AL = (r8((uint32_t)(ESP + 0x13)));
  /* 101645a8 mov esi, 0x1c2 */
  ESI = (0x1c2u);
  /* 101645ad test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101645af je 0x101645b6 */
  if (C.zf) goto L_101645b6;
  /* 101645b1 mov esi, 0x17c */
  ESI = (0x17cu);
L_101645b6:;
  /* 101645b6 cmp ebx, 0x19 */
  { uint32_t _a=(EBX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101645b9 jge 0x101645d7 */
  if ((C.sf==C.of)) goto L_101645d7;
  /* 101645bb cmp ebp, 0x12c */
  { uint32_t _a=(EBP),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101645c1 jle 0x10164613 */
  if ((C.zf||C.sf!=C.of)) goto L_10164613;
  /* 101645c3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101645c5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101645c7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101645c9 push 0x101761f0 */
  push32((uint32_t)(0x101761f0u));
  /* 101645ce call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x101645d4u);
  /* 101645d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101645d7:;
  /* 101645d7 cmp ebp, 0x12c */
  { uint32_t _a=(EBP),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101645dd jle 0x10164613 */
  if ((C.zf||C.sf!=C.of)) goto L_10164613;
  /* 101645df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101645e1 push 0xe8 */
  push32((uint32_t)(0xe8u));
  /* 101645e6 push esi */
  push32((uint32_t)(ESI));
  /* 101645e7 push 0x101761f0 */
  push32((uint32_t)(0x101761f0u));
  /* 101645ec call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x101645f2u);
  /* 101645f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101645f5 cmp ebp, 0x190 */
  { uint32_t _a=(EBP),_b=(0x190u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101645fb jle 0x10164613 */
  if ((C.zf||C.sf!=C.of)) goto L_10164613;
  /* 101645fd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101645ff push 0xf4 */
  push32((uint32_t)(0xf4u));
  /* 10164604 push esi */
  push32((uint32_t)(ESI));
  /* 10164605 push 0x101736e8 */
  push32((uint32_t)(0x101736e8u));
  /* 1016460a call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10164610u);
  /* 10164610 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10164613:;
  /* 10164613 cmp dword ptr [esp + 0x14], 0x1e */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10164618 jle 0x1016461f */
  if ((C.zf||C.sf!=C.of)) goto L_1016461f;
  /* 1016461a call 0x10164230 */
  push32(0x1016461fu); f_10164230();
L_1016461f:;
  /* 1016461f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10164621 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10164623 push 1 */
  push32((uint32_t)(0x1u));
  /* 10164625 push 0x10176018 */
  push32((uint32_t)(0x10176018u));
  /* 1016462a call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10164630u);
  /* 10164630 push 5 */
  push32((uint32_t)(0x5u));
  /* 10164632 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10164634 push 2 */
  push32((uint32_t)(0x2u));
  /* 10164636 push 0x10176018 */
  push32((uint32_t)(0x10176018u));
  /* 1016463b call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10164641u);
  /* 10164641 push 5 */
  push32((uint32_t)(0x5u));
  /* 10164643 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10164645 push 3 */
  push32((uint32_t)(0x3u));
  /* 10164647 push 0x10176018 */
  push32((uint32_t)(0x10176018u));
  /* 1016464c call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10164652u);
  /* 10164652 push 0x101762b0 */
  push32((uint32_t)(0x101762b0u));
  /* 10164657 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x1016465du);
  /* 1016465d add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164660 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10164663 jle 0x101646d6 */
  if ((C.zf||C.sf!=C.of)) goto L_101646d6;
  /* 10164665 push 5 */
  push32((uint32_t)(0x5u));
  /* 10164667 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10164669 push 2 */
  push32((uint32_t)(0x2u));
  /* 1016466b push 0x10176018 */
  push32((uint32_t)(0x10176018u));
  /* 10164670 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10164676u);
  /* 10164676 push 0x10176018 */
  push32((uint32_t)(0x10176018u));
  /* 1016467b call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10164681u);
  /* 10164681 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164684 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10164687 jle 0x1016469d */
  if ((C.zf||C.sf!=C.of)) goto L_1016469d;
  /* 10164689 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1016468b push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1016468d push 1 */
  push32((uint32_t)(0x1u));
  /* 1016468f push 0x10176138 */
  push32((uint32_t)(0x10176138u));
  /* 10164694 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x1016469au);
  /* 1016469a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1016469d:;
  /* 1016469d push 0x10176018 */
  push32((uint32_t)(0x10176018u));
  /* 101646a2 call dword ptr [0x101765a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a4))), 0x101646a8u);
  /* 101646a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101646ab cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101646ae jle 0x101646c4 */
  if ((C.zf||C.sf!=C.of)) goto L_101646c4;
  /* 101646b0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101646b2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101646b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 101646b6 push 0x101738d8 */
  push32((uint32_t)(0x101738d8u));
  /* 101646bb call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x101646c1u);
  /* 101646c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101646c4:;
  /* 101646c4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101646c6 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101646c8 push 0x10176170 */
  push32((uint32_t)(0x10176170u));
  /* 101646cd call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101646d3u);
  /* 101646d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101646d6:;
  /* 101646d6 push 0x101761f0 */
  push32((uint32_t)(0x101761f0u));
  /* 101646db call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x101646e1u);
  /* 101646e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101646e4 cmp eax, 0x23 */
  { uint32_t _a=(EAX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101646e7 jle 0x101646fd */
  if ((C.zf||C.sf!=C.of)) goto L_101646fd;
  /* 101646e9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101646eb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101646ed push 1 */
  push32((uint32_t)(0x1u));
  /* 101646ef push 0x101738d8 */
  push32((uint32_t)(0x101738d8u));
  /* 101646f4 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x101646fau);
  /* 101646fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101646fd:;
  /* 101646fd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101646ff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10164701 push 1 */
  push32((uint32_t)(0x1u));
  /* 10164703 push 0x10176248 */
  push32((uint32_t)(0x10176248u));
  /* 10164708 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x1016470eu);
  /* 1016470e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10164710 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10164712 push 1 */
  push32((uint32_t)(0x1u));
  /* 10164714 push 0x101762b0 */
  push32((uint32_t)(0x101762b0u));
  /* 10164719 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x1016471fu);
  /* 1016471f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10164721 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10164723 push 2 */
  push32((uint32_t)(0x2u));
  /* 10164725 push 0x101762b0 */
  push32((uint32_t)(0x101762b0u));
  /* 1016472a call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10164730u);
  /* 10164730 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10164732 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10164734 push 1 */
  push32((uint32_t)(0x1u));
  /* 10164736 push 0x10176030 */
  push32((uint32_t)(0x10176030u));
  /* 1016473b call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10164741u);
  /* 10164741 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164744 push 5 */
  push32((uint32_t)(0x5u));
  /* 10164746 push 0xa */
  push32((uint32_t)(0xau));
  /* 10164748 push 2 */
  push32((uint32_t)(0x2u));
  /* 1016474a push 0x10176248 */
  push32((uint32_t)(0x10176248u));
  /* 1016474f call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10164755u);
  /* 10164755 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10164757 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10164759 push 0x101736c0 */
  push32((uint32_t)(0x101736c0u));
  /* 1016475e call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10164764u);
  /* 10164764 push 0x10175f80 */
  push32((uint32_t)(0x10175f80u));
  /* 10164769 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x1016476fu);
  /* 1016476f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164772 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10164774 jle 0x1016478a */
  if ((C.zf||C.sf!=C.of)) goto L_1016478a;
  /* 10164776 push 3 */
  push32((uint32_t)(0x3u));
  /* 10164778 push 5 */
  push32((uint32_t)(0x5u));
  /* 1016477a push 1 */
  push32((uint32_t)(0x1u));
  /* 1016477c push 0x10176158 */
  push32((uint32_t)(0x10176158u));
  /* 10164781 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10164787u);
  /* 10164787 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1016478a:;
  /* 1016478a call dword ptr [0x101765d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765d0))), 0x10164790u);
  /* 10164790 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10164792 je 0x101647a8 */
  if (C.zf) goto L_101647a8;
  /* 10164794 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10164796 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10164798 push 1 */
  push32((uint32_t)(0x1u));
  /* 1016479a push 0x10175f80 */
  push32((uint32_t)(0x10175f80u));
  /* 1016479f call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x101647a5u);
  /* 101647a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101647a8:;
  /* 101647a8 push 0xa */
  push32((uint32_t)(0xau));
  /* 101647aa push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101647ac push 1 */
  push32((uint32_t)(0x1u));
  /* 101647ae push 0x10176048 */
  push32((uint32_t)(0x10176048u));
  /* 101647b3 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x101647b9u);
  /* 101647b9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101647bb push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101647bd push 1 */
  push32((uint32_t)(0x1u));
  /* 101647bf push 0x10173678 */
  push32((uint32_t)(0x10173678u));
  /* 101647c4 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x101647cau);
  /* 101647ca add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101647cd cmp ebx, 0x19 */
  { uint32_t _a=(EBX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101647d0 jle 0x101647e6 */
  if ((C.zf||C.sf!=C.of)) goto L_101647e6;
  /* 101647d2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101647d4 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101647d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 101647d8 push 0x10176038 */
  push32((uint32_t)(0x10176038u));
  /* 101647dd call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x101647e3u);
  /* 101647e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101647e6:;
  /* 101647e6 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101647e8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101647ea push 1 */
  push32((uint32_t)(0x1u));
  /* 101647ec push 0x101762b8 */
  push32((uint32_t)(0x101762b8u));
  /* 101647f1 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x101647f7u);
  /* 101647f7 push 5 */
  push32((uint32_t)(0x5u));
  /* 101647f9 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101647fb push 2 */
  push32((uint32_t)(0x2u));
  /* 101647fd push 0x101762b8 */
  push32((uint32_t)(0x101762b8u));
  /* 10164802 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10164808u);
  /* 10164808 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1016480a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1016480c push 0x101760d8 */
  push32((uint32_t)(0x101760d8u));
  /* 10164811 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10164817u);
  /* 10164817 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10164819 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1016481b push 0x101762d0 */
  push32((uint32_t)(0x101762d0u));
  /* 10164820 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10164826u);
  /* 10164826 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10164828 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1016482a push 0x10176218 */
  push32((uint32_t)(0x10176218u));
  /* 1016482f call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10164835u);
  /* 10164835 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164838 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1016483a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1016483c push 0x101760a0 */
  push32((uint32_t)(0x101760a0u));
  /* 10164841 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10164847u);
  /* 10164847 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10164849 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1016484b push 0x10176090 */
  push32((uint32_t)(0x10176090u));
  /* 10164850 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10164856u);
  /* 10164856 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10164858 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1016485a push 0x10176098 */
  push32((uint32_t)(0x10176098u));
  /* 1016485f call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10164865u);
  /* 10164865 push 0x10176138 */
  push32((uint32_t)(0x10176138u));
  /* 1016486a call dword ptr [0x101765a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a4))), 0x10164870u);
  /* 10164870 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164873 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10164875 je 0x10164934 */
  if (C.zf) goto L_10164934;
  /* 1016487b push 0x10176218 */
  push32((uint32_t)(0x10176218u));
  /* 10164880 call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x10164886u);
  /* 10164886 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164889 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1016488b jne 0x10164934 */
  if (!C.zf) goto L_10164934;
  /* 10164891 push 1 */
  push32((uint32_t)(0x1u));
  /* 10164893 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10164899u);
  /* 10164899 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016489c cmp eax, 0xe74 */
  { uint32_t _a=(EAX),_b=(0xe74u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101648a1 jle 0x101648c7 */
  if ((C.zf||C.sf!=C.of)) goto L_101648c7;
  /* 101648a3 push 4 */
  push32((uint32_t)(0x4u));
  /* 101648a5 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x101648abu);
  /* 101648ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101648ae cmp eax, 0x157c */
  { uint32_t _a=(EAX),_b=(0x157cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101648b3 jle 0x101648c7 */
  if ((C.zf||C.sf!=C.of)) goto L_101648c7;
  /* 101648b5 push 5 */
  push32((uint32_t)(0x5u));
  /* 101648b7 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x101648bdu);
  /* 101648bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101648c0 cmp eax, 0x20d0 */
  { uint32_t _a=(EAX),_b=(0x20d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101648c5 jg 0x10164934 */
  if ((!C.zf&&C.sf==C.of)) goto L_10164934;
L_101648c7:;
  /* 101648c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 101648c9 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x101648cfu);
  /* 101648cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101648d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101648d4 je 0x1016495b */
  if (C.zf) goto L_1016495b;
  /* 101648da push 5 */
  push32((uint32_t)(0x5u));
  /* 101648dc call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x101648e2u);
  /* 101648e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101648e5 cmp eax, 0x20d0 */
  { uint32_t _a=(EAX),_b=(0x20d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101648ea jle 0x1016495b */
  if ((C.zf||C.sf!=C.of)) goto L_1016495b;
  /* 101648ec push 5 */
  push32((uint32_t)(0x5u));
  /* 101648ee call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x101648f4u);
  /* 101648f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101648f7 cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101648fc jle 0x1016490f */
  if ((C.zf||C.sf!=C.of)) goto L_1016490f;
  /* 101648fe push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10164903 push 1 */
  push32((uint32_t)(0x1u));
  /* 10164905 push 5 */
  push32((uint32_t)(0x5u));
  /* 10164907 call 0x10162610 */
  push32(0x1016490cu); f_10162610();
  /* 1016490c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1016490f:;
  /* 1016490f push 4 */
  push32((uint32_t)(0x4u));
  /* 10164911 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10164917u);
  /* 10164917 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016491a cmp eax, 0x32c8 */
  { uint32_t _a=(EAX),_b=(0x32c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016491f jle 0x1016495b */
  if ((C.zf||C.sf!=C.of)) goto L_1016495b;
  /* 10164921 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10164926 push 1 */
  push32((uint32_t)(0x1u));
  /* 10164928 push 4 */
  push32((uint32_t)(0x4u));
  /* 1016492a call 0x10162610 */
  push32(0x1016492fu); f_10162610();
  /* 1016492f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164932 jmp 0x1016495b */
  goto L_1016495b;
L_10164934:;
  /* 10164934 push 0 */
  push32((uint32_t)(0x0u));
  /* 10164936 push 1 */
  push32((uint32_t)(0x1u));
  /* 10164938 call 0x101625f0 */
  push32(0x1016493du); f_101625f0();
  /* 1016493d push 0 */
  push32((uint32_t)(0x0u));
  /* 1016493f push 4 */
  push32((uint32_t)(0x4u));
  /* 10164941 call 0x101625f0 */
  push32(0x10164946u); f_101625f0();
  /* 10164946 push 0 */
  push32((uint32_t)(0x0u));
  /* 10164948 push 3 */
  push32((uint32_t)(0x3u));
  /* 1016494a call 0x101625f0 */
  push32(0x1016494fu); f_101625f0();
  /* 1016494f push 0 */
  push32((uint32_t)(0x0u));
  /* 10164951 push 1 */
  push32((uint32_t)(0x1u));
  /* 10164953 call 0x101625f0 */
  push32(0x10164958u); f_101625f0();
  /* 10164958 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1016495b:;
  /* 1016495b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1016495d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1016495f push 0x10173800 */
  push32((uint32_t)(0x10173800u));
  /* 10164964 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016496au);
  /* 1016496a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1016496c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1016496e push 1 */
  push32((uint32_t)(0x1u));
  /* 10164970 push 0x10176338 */
  push32((uint32_t)(0x10176338u));
  /* 10164975 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x1016497bu);
  /* 1016497b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1016497d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1016497f push 2 */
  push32((uint32_t)(0x2u));
  /* 10164981 push 0x10176338 */
  push32((uint32_t)(0x10176338u));
  /* 10164986 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x1016498cu);
  /* 1016498c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1016498e push 0xa */
  push32((uint32_t)(0xau));
  /* 10164990 push 3 */
  push32((uint32_t)(0x3u));
  /* 10164992 push 0x10176338 */
  push32((uint32_t)(0x10176338u));
  /* 10164997 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x1016499du);
  /* 1016499d push 0x101739b8 */
  push32((uint32_t)(0x101739b8u));
  /* 101649a2 call dword ptr [0x101765ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765ac))), 0x101649a8u);
  /* 101649a8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101649ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101649ad jne 0x101649f8 */
  if (!C.zf) goto L_101649f8;
  /* 101649af push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 101649b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 101649b3 call 0x10162640 */
  push32(0x101649b8u); f_10162640();
  /* 101649b8 mov esi, eax */
  ESI = (EAX);
  /* 101649ba push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 101649bc push 0 */
  push32((uint32_t)(0x0u));
  /* 101649be sar esi, 2 */
  ESI = (sh_sar((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 101649c1 call 0x10162640 */
  push32(0x101649c6u); f_10162640();
  /* 101649c6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 101649c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 101649ca add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101649cc call 0x10162640 */
  push32(0x101649d1u); f_10162640();
  /* 101649d1 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101649d3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101649d6 cmp esi, 6 */
  { uint32_t _a=(ESI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101649d9 jle 0x101649e8 */
  if ((C.zf||C.sf!=C.of)) goto L_101649e8;
  /* 101649db push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101649dd push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101649df push 6 */
  push32((uint32_t)(0x6u));
  /* 101649e1 push 0x10175ff0 */
  push32((uint32_t)(0x10175ff0u));
  /* 101649e6 jmp 0x10164a03 */
  goto L_10164a03;
L_101649e8:;
  /* 101649e8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101649ea je 0x10164a0c */
  if (C.zf) goto L_10164a0c;
  /* 101649ec push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101649ee push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101649f0 push esi */
  push32((uint32_t)(ESI));
  /* 101649f1 push 0x10175ff0 */
  push32((uint32_t)(0x10175ff0u));
  /* 101649f6 jmp 0x10164a03 */
  goto L_10164a03;
L_101649f8:;
  /* 101649f8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101649fa push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101649fc push 0xa */
  push32((uint32_t)(0xau));
  /* 101649fe push 0x10173948 */
  push32((uint32_t)(0x10173948u));
L_10164a03:;
  /* 10164a03 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10164a09u);
  /* 10164a09 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10164a0c:;
  /* 10164a0c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10164a0e push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10164a10 push 0x101739b8 */
  push32((uint32_t)(0x101739b8u));
  /* 10164a15 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10164a1bu);
  /* 10164a1b push 0x101762d0 */
  push32((uint32_t)(0x101762d0u));
  /* 10164a20 call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x10164a26u);
  /* 10164a26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164a29 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10164a2b je 0x10164a4e */
  if (C.zf) goto L_10164a4e;
  /* 10164a2d push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10164a2f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10164a31 push 0x101739b8 */
  push32((uint32_t)(0x101739b8u));
  /* 10164a36 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10164a3cu);
  /* 10164a3c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10164a3e push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10164a40 push 0x101738d0 */
  push32((uint32_t)(0x101738d0u));
  /* 10164a45 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10164a4bu);
  /* 10164a4b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10164a4e:;
  /* 10164a4e push 0x101739b8 */
  push32((uint32_t)(0x101739b8u));
  /* 10164a53 call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x10164a59u);
  /* 10164a59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164a5c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10164a5e je 0x10164a86 */
  if (C.zf) goto L_10164a86;
  /* 10164a60 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10164a62 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10164a64 push 0x101739a0 */
  push32((uint32_t)(0x101739a0u));
  /* 10164a69 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10164a6fu);
  /* 10164a6f push 0xa */
  push32((uint32_t)(0xau));
  /* 10164a71 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10164a73 push 0x101738e0 */
  push32((uint32_t)(0x101738e0u));
  /* 10164a78 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10164a7eu);
  /* 10164a7e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164a81 call 0x10163320 */
  push32(0x10164a86u); f_10163320();
L_10164a86:;
  /* 10164a86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10164a88 push 1 */
  push32((uint32_t)(0x1u));
  /* 10164a8a call 0x101625f0 */
  push32(0x10164a8fu); f_101625f0();
  /* 10164a8f push 0 */
  push32((uint32_t)(0x0u));
  /* 10164a91 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10164a97u);
  /* 10164a97 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164a9a cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10164a9f jle 0x10164ae3 */
  if ((C.zf||C.sf!=C.of)) goto L_10164ae3;
  /* 10164aa1 push 0x10173800 */
  push32((uint32_t)(0x10173800u));
  /* 10164aa6 call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x10164aacu);
  /* 10164aac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164aaf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10164ab1 je 0x10164ae3 */
  if (C.zf) goto L_10164ae3;
  /* 10164ab3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10164ab5 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10164abbu);
  /* 10164abb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164abe cmp eax, 0x1d4c */
  { uint32_t _a=(EAX),_b=(0x1d4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10164ac3 jge 0x10164ae3 */
  if ((C.sf==C.of)) goto L_10164ae3;
  /* 10164ac5 push 0x101739b8 */
  push32((uint32_t)(0x101739b8u));
  /* 10164aca call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x10164ad0u);
  /* 10164ad0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164ad3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10164ad5 jne 0x10164ae3 */
  if (!C.zf) goto L_10164ae3;
  /* 10164ad7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10164ad9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10164adb call 0x101625f0 */
  push32(0x10164ae0u); f_101625f0();
  /* 10164ae0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10164ae3:;
  /* 10164ae3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10164ae5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10164ae7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10164ae9 push 0x10176250 */
  push32((uint32_t)(0x10176250u));
  /* 10164aee call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10164af4u);
  /* 10164af4 push 0x10176150 */
  push32((uint32_t)(0x10176150u));
  /* 10164af9 call dword ptr [0x101765ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765ac))), 0x10164affu);
  /* 10164aff add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164b02 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10164b04 je 0x10164b1a */
  if (C.zf) goto L_10164b1a;
  /* 10164b06 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10164b08 push 0xa */
  push32((uint32_t)(0xau));
  /* 10164b0a push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10164b0c push 0x10176250 */
  push32((uint32_t)(0x10176250u));
  /* 10164b11 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10164b17u);
  /* 10164b17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10164b1a:;
  /* 10164b1a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10164b1c push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10164b1e push 0x10176150 */
  push32((uint32_t)(0x10176150u));
  /* 10164b23 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10164b29u);
  /* 10164b29 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10164b2b push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10164b2d push 0x10176160 */
  push32((uint32_t)(0x10176160u));
  /* 10164b32 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10164b38u);
  /* 10164b38 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10164b3a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10164b3c push 0x10176348 */
  push32((uint32_t)(0x10176348u));
  /* 10164b41 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10164b47u);
  /* 10164b47 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10164b49 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10164b4b push 0x10176330 */
  push32((uint32_t)(0x10176330u));
  /* 10164b50 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10164b56u);
  /* 10164b56 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10164b58 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10164b5a push 0x10176340 */
  push32((uint32_t)(0x10176340u));
  /* 10164b5f call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10164b65u);
  /* 10164b65 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10164b67 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10164b69 push 0x10176320 */
  push32((uint32_t)(0x10176320u));
  /* 10164b6e call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10164b74u);
  /* 10164b74 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164b77 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10164b79 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10164b7b push 0x10176328 */
  push32((uint32_t)(0x10176328u));
  /* 10164b80 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10164b86u);
  /* 10164b86 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10164b88 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10164b8a push 0x10176318 */
  push32((uint32_t)(0x10176318u));
  /* 10164b8f call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10164b95u);
  /* 10164b95 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164b98 cmp ebx, 0x23 */
  { uint32_t _a=(EBX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10164b9b jle 0x10164bf4 */
  if ((C.zf||C.sf!=C.of)) goto L_10164bf4;
  /* 10164b9d mov al, byte ptr [esp + 0x12] */
  AL = (r8((uint32_t)(ESP + 0x12)));
  /* 10164ba1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10164ba3 je 0x10164bf4 */
  if (C.zf) goto L_10164bf4;
  /* 10164ba5 push 0xa */
  push32((uint32_t)(0xau));
  /* 10164ba7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10164ba9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10164bab push 0x10173938 */
  push32((uint32_t)(0x10173938u));
  /* 10164bb0 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10164bb6u);
  /* 10164bb6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164bb9 cmp ebx, 0x3c */
  { uint32_t _a=(EBX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10164bbc jle 0x10164bf4 */
  if ((C.zf||C.sf!=C.of)) goto L_10164bf4;
  /* 10164bbe push 0xa */
  push32((uint32_t)(0xau));
  /* 10164bc0 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10164bc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10164bc4 push 0x10173938 */
  push32((uint32_t)(0x10173938u));
  /* 10164bc9 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10164bcfu);
  /* 10164bcf push 0xa */
  push32((uint32_t)(0xau));
  /* 10164bd1 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10164bd3 push 3 */
  push32((uint32_t)(0x3u));
  /* 10164bd5 push 0x10173938 */
  push32((uint32_t)(0x10173938u));
  /* 10164bda call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10164be0u);
  /* 10164be0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10164be2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10164be4 push 4 */
  push32((uint32_t)(0x4u));
  /* 10164be6 push 0x10173938 */
  push32((uint32_t)(0x10173938u));
  /* 10164beb call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10164bf1u);
  /* 10164bf1 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10164bf4:;
  /* 10164bf4 mov bl, byte ptr [esp + 0x13] */
  BL = (r8((uint32_t)(ESP + 0x13)));
  /* 10164bf8 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10164bfa je 0x10164cde */
  if (C.zf) goto L_10164cde;
  /* 10164c00 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10164c02 push 0xa */
  push32((uint32_t)(0xau));
  /* 10164c04 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10164c06 push 0x10173928 */
  push32((uint32_t)(0x10173928u));
  /* 10164c0b call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10164c11u);
  /* 10164c11 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10164c13 push 1 */
  push32((uint32_t)(0x1u));
  /* 10164c15 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10164c17 push 0x101761c0 */
  push32((uint32_t)(0x101761c0u));
  /* 10164c1c call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10164c22u);
  /* 10164c22 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10164c24 push 1 */
  push32((uint32_t)(0x1u));
  /* 10164c26 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10164c28 push 0x101762d8 */
  push32((uint32_t)(0x101762d8u));
  /* 10164c2d call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10164c33u);
  /* 10164c33 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10164c35 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10164c37 push 0x10173690 */
  push32((uint32_t)(0x10173690u));
  /* 10164c3c call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10164c42u);
  /* 10164c42 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10164c44 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10164c46 push 0x10173768 */
  push32((uint32_t)(0x10173768u));
  /* 10164c4b call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10164c51u);
  /* 10164c51 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164c54 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10164c56 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10164c58 push 0x10173688 */
  push32((uint32_t)(0x10173688u));
  /* 10164c5d call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10164c63u);
  /* 10164c63 push 0x101761f8 */
  push32((uint32_t)(0x101761f8u));
  /* 10164c68 call dword ptr [0x101765ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765ac))), 0x10164c6eu);
  /* 10164c6e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164c71 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10164c73 je 0x10164c89 */
  if (C.zf) goto L_10164c89;
  /* 10164c75 push 0xa */
  push32((uint32_t)(0xau));
  /* 10164c77 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10164c79 push 5 */
  push32((uint32_t)(0x5u));
  /* 10164c7b push 0x101763d0 */
  push32((uint32_t)(0x101763d0u));
  /* 10164c80 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10164c86u);
  /* 10164c86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10164c89:;
  /* 10164c89 push 0x10176110 */
  push32((uint32_t)(0x10176110u));
  /* 10164c8e call dword ptr [0x101765ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765ac))), 0x10164c94u);
  /* 10164c94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164c97 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10164c99 je 0x10164caf */
  if (C.zf) goto L_10164caf;
  /* 10164c9b push 0xa */
  push32((uint32_t)(0xau));
  /* 10164c9d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10164c9f push 0xa */
  push32((uint32_t)(0xau));
  /* 10164ca1 push 0x101736c8 */
  push32((uint32_t)(0x101736c8u));
  /* 10164ca6 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10164cacu);
  /* 10164cac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10164caf:;
  /* 10164caf call 0x10164360 */
  push32(0x10164cb4u); f_10164360();
L_10164cb4:;
  /* 10164cb4 push 0x10176080 */
  push32((uint32_t)(0x10176080u));
  /* 10164cb9 call dword ptr [0x101765ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765ac))), 0x10164cbfu);
  /* 10164cbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164cc2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10164cc4 je 0x10164d14 */
  if (C.zf) goto L_10164d14;
  /* 10164cc6 push 0x10176160 */
  push32((uint32_t)(0x10176160u));
  /* 10164ccb call dword ptr [0x101765ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765ac))), 0x10164cd1u);
  /* 10164cd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164cd4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10164cd6 jne 0x10164d05 */
  if (!C.zf) goto L_10164d05;
  /* 10164cd8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10164cda push 2 */
  push32((uint32_t)(0x2u));
  /* 10164cdc jmp 0x10164d09 */
  goto L_10164d09;
L_10164cde:;
  /* 10164cde push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10164ce0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10164ce2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10164ce4 push 0x101761c0 */
  push32((uint32_t)(0x101761c0u));
  /* 10164ce9 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10164cefu);
  /* 10164cef push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10164cf1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10164cf3 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10164cf5 push 0x101762d8 */
  push32((uint32_t)(0x101762d8u));
  /* 10164cfa call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10164d00u);
  /* 10164d00 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164d03 jmp 0x10164cb4 */
  goto L_10164cb4;
L_10164d05:;
  /* 10164d05 push 4 */
  push32((uint32_t)(0x4u));
  /* 10164d07 push 4 */
  push32((uint32_t)(0x4u));
L_10164d09:;
  /* 10164d09 push 8 */
  push32((uint32_t)(0x8u));
  /* 10164d0b call dword ptr [0x10176574] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176574))), 0x10164d11u);
  /* 10164d11 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10164d14:;
  /* 10164d14 push 0x10176138 */
  push32((uint32_t)(0x10176138u));
  /* 10164d19 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10164d1fu);
  /* 10164d1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164d22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10164d24 je 0x10164d3a */
  if (C.zf) goto L_10164d3a;
  /* 10164d26 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10164d28 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10164d2a push 6 */
  push32((uint32_t)(0x6u));
  /* 10164d2c push 0x10176250 */
  push32((uint32_t)(0x10176250u));
  /* 10164d31 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10164d37u);
  /* 10164d37 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10164d3a:;
  /* 10164d3a push 0x10176150 */
  push32((uint32_t)(0x10176150u));
  /* 10164d3f call dword ptr [0x101765ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765ac))), 0x10164d45u);
  /* 10164d45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164d48 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10164d4a je 0x10164d60 */
  if (C.zf) goto L_10164d60;
  /* 10164d4c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10164d4e push 0xa */
  push32((uint32_t)(0xau));
  /* 10164d50 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10164d52 push 0x10176250 */
  push32((uint32_t)(0x10176250u));
  /* 10164d57 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10164d5du);
  /* 10164d5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10164d60:;
  /* 10164d60 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10164d62 je 0x10164e63 */
  if (C.zf) goto L_10164e63;
  /* 10164d68 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10164d6a push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10164d6c push 2 */
  push32((uint32_t)(0x2u));
  /* 10164d6e push 0x10176138 */
  push32((uint32_t)(0x10176138u));
  /* 10164d73 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10164d79u);
  /* 10164d79 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10164d7b push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10164d7d push 3 */
  push32((uint32_t)(0x3u));
  /* 10164d7f push 0x10176138 */
  push32((uint32_t)(0x10176138u));
  /* 10164d84 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10164d8au);
  /* 10164d8a push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10164d8c push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10164d8e push 4 */
  push32((uint32_t)(0x4u));
  /* 10164d90 push 0x10176138 */
  push32((uint32_t)(0x10176138u));
  /* 10164d95 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10164d9bu);
  /* 10164d9b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10164d9d push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10164d9f push 5 */
  push32((uint32_t)(0x5u));
  /* 10164da1 push 0x10176138 */
  push32((uint32_t)(0x10176138u));
  /* 10164da6 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10164dacu);
  /* 10164dac add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164daf push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10164db1 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10164db3 push 6 */
  push32((uint32_t)(0x6u));
  /* 10164db5 push 0x10176138 */
  push32((uint32_t)(0x10176138u));
  /* 10164dba call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10164dc0u);
  /* 10164dc0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10164dc2 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10164dc4 push 0x10176080 */
  push32((uint32_t)(0x10176080u));
  /* 10164dc9 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10164dcfu);
  /* 10164dcf push 0x10176140 */
  push32((uint32_t)(0x10176140u));
  /* 10164dd4 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10164ddau);
  /* 10164dda add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164ddd cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10164de0 jle 0x10164e03 */
  if ((C.zf||C.sf!=C.of)) goto L_10164e03;
  /* 10164de2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10164de4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10164de6 push 0x10176268 */
  push32((uint32_t)(0x10176268u));
  /* 10164deb call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10164df1u);
  /* 10164df1 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10164df3 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10164df5 push 0x10176270 */
  push32((uint32_t)(0x10176270u));
  /* 10164dfa call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10164e00u);
  /* 10164e00 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10164e03:;
  /* 10164e03 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10164e05 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10164e07 push 0x10176150 */
  push32((uint32_t)(0x10176150u));
  /* 10164e0c call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10164e12u);
  /* 10164e12 push 0x10173968 */
  push32((uint32_t)(0x10173968u));
  /* 10164e17 call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x10164e1du);
  /* 10164e1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164e20 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10164e22 je 0x10164e63 */
  if (C.zf) goto L_10164e63;
  /* 10164e24 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10164e26 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10164e28 push 0x101761c8 */
  push32((uint32_t)(0x101761c8u));
  /* 10164e2d call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10164e33u);
  /* 10164e33 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10164e35 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10164e37 push 0x101761d8 */
  push32((uint32_t)(0x101761d8u));
  /* 10164e3c call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10164e42u);
  /* 10164e42 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10164e44 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10164e46 push 0x101761e0 */
  push32((uint32_t)(0x101761e0u));
  /* 10164e4b call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10164e51u);
  /* 10164e51 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10164e53 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10164e55 push 0x101761d0 */
  push32((uint32_t)(0x101761d0u));
  /* 10164e5a call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10164e60u);
  /* 10164e60 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10164e63:;
  /* 10164e63 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10164e65 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10164e67 push 0x10173800 */
  push32((uint32_t)(0x10173800u));
  /* 10164e6c call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10164e72u);
  /* 10164e72 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10164e74 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10164e76 push 0x10173940 */
  push32((uint32_t)(0x10173940u));
  /* 10164e7b call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10164e81u);
  /* 10164e81 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10164e83 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10164e85 push 0x101761b0 */
  push32((uint32_t)(0x101761b0u));
  /* 10164e8a call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10164e90u);
  /* 10164e90 mov eax, dword ptr [esp + 0x38] */
  EAX = (r32((uint32_t)(ESP + 0x38)));
  /* 10164e94 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164e97 cmp eax, 0x15e */
  { uint32_t _a=(EAX),_b=(0x15eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10164e9c jle 0x10164eba */
  if ((C.zf||C.sf!=C.of)) goto L_10164eba;
  /* 10164e9e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10164ea0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10164ea2 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10164ea7 push 0x10176140 */
  push32((uint32_t)(0x10176140u));
  /* 10164eac call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10164eb2u);
  /* 10164eb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164eb5 call 0x10164310 */
  push32(0x10164ebau); f_10164310();
L_10164eba:;
  /* 10164eba push 0x101738d8 */
  push32((uint32_t)(0x101738d8u));
  /* 10164ebf call dword ptr [0x101765a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a4))), 0x10164ec5u);
  /* 10164ec5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164ec8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10164eca je 0x10165213 */
  if (C.zf) goto L_10165213;
  /* 10164ed0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10164ed2 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10164ed8u);
  /* 10164ed8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10164eda mov edi, eax */
  EDI = (EAX);
  /* 10164edc call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10164ee2u);
  /* 10164ee2 push 4 */
  push32((uint32_t)(0x4u));
  /* 10164ee4 mov esi, eax */
  ESI = (EAX);
  /* 10164ee6 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10164eecu);
  /* 10164eec push 5 */
  push32((uint32_t)(0x5u));
  /* 10164eee mov ebp, eax */
  EBP = (EAX);
  /* 10164ef0 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10164ef6u);
  /* 10164ef6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10164ef8 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 10164efc call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10164f02u);
  /* 10164f02 mov ebx, eax */
  EBX = (EAX);
  /* 10164f04 mov eax, dword ptr [esp + 0x2c] */
  EAX = (r32((uint32_t)(ESP + 0x2c)));
  /* 10164f08 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164f0b cmp eax, 0x96 */
  { uint32_t _a=(EAX),_b=(0x96u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10164f10 jge 0x10164fa3 */
  if ((C.sf==C.of)) goto L_10164fa3;
  /* 10164f16 cmp esi, 0x1388 */
  { uint32_t _a=(ESI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10164f1c jle 0x10164f29 */
  if ((C.zf||C.sf!=C.of)) goto L_10164f29;
  /* 10164f1e push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10164f23 push 3 */
  push32((uint32_t)(0x3u));
  /* 10164f25 push 2 */
  push32((uint32_t)(0x2u));
  /* 10164f27 jmp 0x10164f9b */
  goto L_10164f9b;
L_10164f29:;
  /* 10164f29 cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10164f2f jle 0x10164f3c */
  if ((C.zf||C.sf!=C.of)) goto L_10164f3c;
  /* 10164f31 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 10164f36 push 3 */
  push32((uint32_t)(0x3u));
  /* 10164f38 push 2 */
  push32((uint32_t)(0x2u));
  /* 10164f3a jmp 0x10164f9b */
  goto L_10164f9b;
L_10164f3c:;
  /* 10164f3c cmp edi, 0x1388 */
  { uint32_t _a=(EDI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10164f42 jle 0x10164f4f */
  if ((C.zf||C.sf!=C.of)) goto L_10164f4f;
  /* 10164f44 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10164f49 push 3 */
  push32((uint32_t)(0x3u));
  /* 10164f4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10164f4d jmp 0x10164f9b */
  goto L_10164f9b;
L_10164f4f:;
  /* 10164f4f cmp edi, 0x3e8 */
  { uint32_t _a=(EDI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10164f55 jle 0x10164f62 */
  if ((C.zf||C.sf!=C.of)) goto L_10164f62;
  /* 10164f57 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 10164f5c push 3 */
  push32((uint32_t)(0x3u));
  /* 10164f5e push 0 */
  push32((uint32_t)(0x0u));
  /* 10164f60 jmp 0x10164f9b */
  goto L_10164f9b;
L_10164f62:;
  /* 10164f62 cmp dword ptr [esp + 0x14], 0x7d0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10164f6a jle 0x10164f77 */
  if ((C.zf||C.sf!=C.of)) goto L_10164f77;
  /* 10164f6c push 0x320 */
  push32((uint32_t)(0x320u));
  /* 10164f71 push 3 */
  push32((uint32_t)(0x3u));
  /* 10164f73 push 5 */
  push32((uint32_t)(0x5u));
  /* 10164f75 jmp 0x10164f9b */
  goto L_10164f9b;
L_10164f77:;
  /* 10164f77 cmp ebp, 0x7d0 */
  { uint32_t _a=(EBP),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10164f7d jle 0x10164f8a */
  if ((C.zf||C.sf!=C.of)) goto L_10164f8a;
  /* 10164f7f push 0x320 */
  push32((uint32_t)(0x320u));
  /* 10164f84 push 3 */
  push32((uint32_t)(0x3u));
  /* 10164f86 push 4 */
  push32((uint32_t)(0x4u));
  /* 10164f88 jmp 0x10164f9b */
  goto L_10164f9b;
L_10164f8a:;
  /* 10164f8a cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10164f90 jle 0x10164fa3 */
  if ((C.zf||C.sf!=C.of)) goto L_10164fa3;
  /* 10164f92 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10164f97 push 3 */
  push32((uint32_t)(0x3u));
  /* 10164f99 push 1 */
  push32((uint32_t)(0x1u));
L_10164f9b:;
  /* 10164f9b call 0x10162610 */
  push32(0x10164fa0u); f_10162610();
  /* 10164fa0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10164fa3:;
  /* 10164fa3 push 0x10175f80 */
  push32((uint32_t)(0x10175f80u));
  /* 10164fa8 call dword ptr [0x101765a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a4))), 0x10164faeu);
  /* 10164fae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164fb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10164fb3 je 0x10165003 */
  if (C.zf) goto L_10165003;
  /* 10164fb5 cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10164fbb jle 0x10165003 */
  if ((C.zf||C.sf!=C.of)) goto L_10165003;
  /* 10164fbd push 0x101762d0 */
  push32((uint32_t)(0x101762d0u));
  /* 10164fc2 call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x10164fc8u);
  /* 10164fc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10164fcb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10164fcd jne 0x10165003 */
  if (!C.zf) goto L_10165003;
  /* 10164fcf cmp ebp, 0xbb8 */
  { uint32_t _a=(EBP),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10164fd5 jle 0x10164fe8 */
  if ((C.zf||C.sf!=C.of)) goto L_10164fe8;
  /* 10164fd7 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10164fdc push 3 */
  push32((uint32_t)(0x3u));
  /* 10164fde push 4 */
  push32((uint32_t)(0x4u));
  /* 10164fe0 call 0x10162610 */
  push32(0x10164fe5u); f_10162610();
  /* 10164fe5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10164fe8:;
  /* 10164fe8 cmp dword ptr [esp + 0x14], 0xfa0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10164ff0 jle 0x10165003 */
  if ((C.zf||C.sf!=C.of)) goto L_10165003;
  /* 10164ff2 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10164ff7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10164ff9 push 5 */
  push32((uint32_t)(0x5u));
  /* 10164ffb call 0x10162610 */
  push32(0x10165000u); f_10162610();
  /* 10165000 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10165003:;
  /* 10165003 push 2 */
  push32((uint32_t)(0x2u));
  /* 10165005 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x1016500bu);
  /* 1016500b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016500e cmp eax, 0x1d4c0 */
  { uint32_t _a=(EAX),_b=(0x1d4c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10165013 jle 0x10165026 */
  if ((C.zf||C.sf!=C.of)) goto L_10165026;
  /* 10165015 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 1016501a push 1 */
  push32((uint32_t)(0x1u));
  /* 1016501c push 2 */
  push32((uint32_t)(0x2u));
  /* 1016501e call 0x10162610 */
  push32(0x10165023u); f_10162610();
  /* 10165023 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10165026:;
  /* 10165026 push 0 */
  push32((uint32_t)(0x0u));
  /* 10165028 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x1016502eu);
  /* 1016502e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165031 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10165036 jle 0x10165049 */
  if ((C.zf||C.sf!=C.of)) goto L_10165049;
  /* 10165038 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 1016503d push 1 */
  push32((uint32_t)(0x1u));
  /* 1016503f push 0 */
  push32((uint32_t)(0x0u));
  /* 10165041 call 0x10162610 */
  push32(0x10165046u); f_10162610();
  /* 10165046 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10165049:;
  /* 10165049 push 0x10176248 */
  push32((uint32_t)(0x10176248u));
  /* 1016504e call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10165054u);
  /* 10165054 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165057 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10165059 je 0x101651e0 */
  if (C.zf) goto L_101651e0;
  /* 1016505f push 0x10176218 */
  push32((uint32_t)(0x10176218u));
  /* 10165064 call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x1016506au);
  /* 1016506a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016506d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1016506f jne 0x101651e0 */
  if (!C.zf) goto L_101651e0;
  /* 10165075 push 5 */
  push32((uint32_t)(0x5u));
  /* 10165077 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x1016507du);
  /* 1016507d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165080 cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10165085 jle 0x10165140 */
  if ((C.zf||C.sf!=C.of)) goto L_10165140;
  /* 1016508b push 0 */
  push32((uint32_t)(0x0u));
  /* 1016508d call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10165093u);
  /* 10165093 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165096 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10165098 je 0x10165140 */
  if (C.zf) goto L_10165140;
  /* 1016509e push 1 */
  push32((uint32_t)(0x1u));
  /* 101650a0 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x101650a6u);
  /* 101650a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101650a9 cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101650ae jge 0x10165140 */
  if ((C.sf==C.of)) goto L_10165140;
  /* 101650b4 push 5 */
  push32((uint32_t)(0x5u));
  /* 101650b6 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x101650bcu);
  /* 101650bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101650bf cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101650c4 jle 0x101650d7 */
  if ((C.zf||C.sf!=C.of)) goto L_101650d7;
  /* 101650c6 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 101650cb push 1 */
  push32((uint32_t)(0x1u));
  /* 101650cd push 5 */
  push32((uint32_t)(0x5u));
  /* 101650cf call 0x10162610 */
  push32(0x101650d4u); f_10162610();
  /* 101650d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101650d7:;
  /* 101650d7 push 4 */
  push32((uint32_t)(0x4u));
  /* 101650d9 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x101650dfu);
  /* 101650df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101650e2 cmp eax, 0x1f40 */
  { uint32_t _a=(EAX),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101650e7 jle 0x101650fa */
  if ((C.zf||C.sf!=C.of)) goto L_101650fa;
  /* 101650e9 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 101650ee push 1 */
  push32((uint32_t)(0x1u));
  /* 101650f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 101650f2 call 0x10162610 */
  push32(0x101650f7u); f_10162610();
  /* 101650f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101650fa:;
  /* 101650fa push 2 */
  push32((uint32_t)(0x2u));
  /* 101650fc call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10165102u);
  /* 10165102 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165105 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016510a jle 0x1016511d */
  if ((C.zf||C.sf!=C.of)) goto L_1016511d;
  /* 1016510c push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 10165111 push 1 */
  push32((uint32_t)(0x1u));
  /* 10165113 push 2 */
  push32((uint32_t)(0x2u));
  /* 10165115 call 0x10162610 */
  push32(0x1016511au); f_10162610();
  /* 1016511a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1016511d:;
  /* 1016511d push 3 */
  push32((uint32_t)(0x3u));
  /* 1016511f call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10165125u);
  /* 10165125 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165128 cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016512d jle 0x10165140 */
  if ((C.zf||C.sf!=C.of)) goto L_10165140;
  /* 1016512f push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 10165134 push 1 */
  push32((uint32_t)(0x1u));
  /* 10165136 push 3 */
  push32((uint32_t)(0x3u));
  /* 10165138 call 0x10162610 */
  push32(0x1016513du); f_10162610();
  /* 1016513d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10165140:;
  /* 10165140 push 5 */
  push32((uint32_t)(0x5u));
  /* 10165142 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10165148u);
  /* 10165148 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016514b cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10165150 jle 0x101651e0 */
  if ((C.zf||C.sf!=C.of)) goto L_101651e0;
  /* 10165156 push 1 */
  push32((uint32_t)(0x1u));
  /* 10165158 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x1016515eu);
  /* 1016515e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165161 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10165163 je 0x101651e0 */
  if (C.zf) goto L_101651e0;
  /* 10165165 push 1 */
  push32((uint32_t)(0x1u));
  /* 10165167 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x1016516du);
  /* 1016516d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165170 cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10165175 jle 0x101651e0 */
  if ((C.zf||C.sf!=C.of)) goto L_101651e0;
  /* 10165177 push 5 */
  push32((uint32_t)(0x5u));
  /* 10165179 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x1016517fu);
  /* 1016517f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165182 cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10165187 jle 0x1016519a */
  if ((C.zf||C.sf!=C.of)) goto L_1016519a;
  /* 10165189 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1016518e push 4 */
  push32((uint32_t)(0x4u));
  /* 10165190 push 5 */
  push32((uint32_t)(0x5u));
  /* 10165192 call 0x10162610 */
  push32(0x10165197u); f_10162610();
  /* 10165197 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1016519a:;
  /* 1016519a push 2 */
  push32((uint32_t)(0x2u));
  /* 1016519c call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x101651a2u);
  /* 101651a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101651a5 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101651aa jle 0x101651bd */
  if ((C.zf||C.sf!=C.of)) goto L_101651bd;
  /* 101651ac push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 101651b1 push 4 */
  push32((uint32_t)(0x4u));
  /* 101651b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 101651b5 call 0x10162610 */
  push32(0x101651bau); f_10162610();
  /* 101651ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101651bd:;
  /* 101651bd push 3 */
  push32((uint32_t)(0x3u));
  /* 101651bf call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x101651c5u);
  /* 101651c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101651c8 cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101651cd jle 0x101651e0 */
  if ((C.zf||C.sf!=C.of)) goto L_101651e0;
  /* 101651cf push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 101651d4 push 4 */
  push32((uint32_t)(0x4u));
  /* 101651d6 push 3 */
  push32((uint32_t)(0x3u));
  /* 101651d8 call 0x10162610 */
  push32(0x101651ddu); f_10162610();
  /* 101651dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101651e0:;
  /* 101651e0 call dword ptr [0x10176560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176560))), 0x101651e6u);
  /* 101651e6 mov ecx, dword ptr [eax*4 + 0x1017666c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1017666c)));
  /* 101651ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101651ef jne 0x10165213 */
  if (!C.zf) goto L_10165213;
  /* 101651f1 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 101651f6 push 3 */
  push32((uint32_t)(0x3u));
  /* 101651f8 push 5 */
  push32((uint32_t)(0x5u));
  /* 101651fa call 0x10162610 */
  push32(0x101651ffu); f_10162610();
  /* 101651ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165202 call dword ptr [0x10176560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176560))), 0x10165208u);
  /* 10165208 mov dword ptr [eax*4 + 0x1017666c], 1 */
  w32((uint32_t)(EAX*4 + 0x1017666c), (0x1u));
L_10165213:;
  /* 10165213 pop edi */
  EDI = (pop32());
  /* 10165214 pop esi */
  ESI = (pop32());
  /* 10165215 pop ebp */
  EBP = (pop32());
  /* 10165216 pop ebx */
  EBX = (pop32());
  /* 10165217 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016521a ret  */
  ESPCHK(0x101643e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005220 @ 0x10165220 (72 bytes, 22 insns) */
void f_10165220(void) {
  FTRACE(0x10165220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10165220 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165222 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165224 push 1 */
  push32((uint32_t)(0x1u));
  /* 10165226 push 0x10176038 */
  push32((uint32_t)(0x10176038u));
  /* 1016522b call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10165231u);
  /* 10165231 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165233 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165235 push 1 */
  push32((uint32_t)(0x1u));
  /* 10165237 push 0x10176018 */
  push32((uint32_t)(0x10176018u));
  /* 1016523c call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10165242u);
  /* 10165242 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165244 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165246 push 1 */
  push32((uint32_t)(0x1u));
  /* 10165248 push 0x10176030 */
  push32((uint32_t)(0x10176030u));
  /* 1016524d call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10165253u);
  /* 10165253 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165255 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165257 push 1 */
  push32((uint32_t)(0x1u));
  /* 10165259 push 0x101738d8 */
  push32((uint32_t)(0x101738d8u));
  /* 1016525e call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10165264u);
  /* 10165264 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165267 ret  */
  ESPCHK(0x10165220u, _esp0);
  ESP += 4; return;
}

/* FUN_10005270 @ 0x10165270 (55 bytes, 16 insns) */
void f_10165270(void) {
  FTRACE(0x10165270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10165270 cmp dword ptr [esp + 4], 0x101736e8 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0x101736e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10165278 jne 0x101652a4 */
  if (!C.zf) goto L_101652a4;
  /* 1016527a push 0x101763a0 */
  push32((uint32_t)(0x101763a0u));
  /* 1016527f call dword ptr [0x101765ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765ac))), 0x10165285u);
  /* 10165285 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165288 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1016528a je 0x101652a4 */
  if (C.zf) goto L_101652a4;
  /* 1016528c push 0x101762e8 */
  push32((uint32_t)(0x101762e8u));
  /* 10165291 call dword ptr [0x101765ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765ac))), 0x10165297u);
  /* 10165297 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016529a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1016529c je 0x101652a4 */
  if (C.zf) goto L_101652a4;
  /* 1016529e mov eax, 1 */
  EAX = (0x1u);
  /* 101652a3 ret  */
  ESPCHK(0x10165270u, _esp0);
  ESP += 4; return;
L_101652a4:;
  /* 101652a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101652a6 ret  */
  ESPCHK(0x10165270u, _esp0);
  ESP += 4; return;
}

/* FUN_100052b0 @ 0x101652b0 (2008 bytes, 535 insns) */
void f_101652b0(void) {
  FTRACE(0x101652b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101652b0 push 0x101762d8 */
  push32((uint32_t)(0x101762d8u));
  /* 101652b5 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x101652bbu);
  /* 101652bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101652be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101652c0 jne 0x101652d4 */
  if (!C.zf) goto L_101652d4;
  /* 101652c2 push 0x10173928 */
  push32((uint32_t)(0x10173928u));
  /* 101652c7 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x101652cdu);
  /* 101652cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101652d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101652d2 je 0x10165304 */
  if (C.zf) goto L_10165304;
L_101652d4:;
  /* 101652d4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101652d6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101652d8 push 0x101739b0 */
  push32((uint32_t)(0x101739b0u));
  /* 101652dd call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101652e3u);
  /* 101652e3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101652e5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101652e7 push 0x10176258 */
  push32((uint32_t)(0x10176258u));
  /* 101652ec call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101652f2u);
  /* 101652f2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101652f4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101652f6 push 0x10176260 */
  push32((uint32_t)(0x10176260u));
  /* 101652fb call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165301u);
  /* 10165301 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10165304:;
  /* 10165304 push 0x10176410 */
  push32((uint32_t)(0x10176410u));
  /* 10165309 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x1016530fu);
  /* 1016530f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165312 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10165315 jg 0x1016533f */
  if ((!C.zf&&C.sf==C.of)) goto L_1016533f;
  /* 10165317 push 0x10176390 */
  push32((uint32_t)(0x10176390u));
  /* 1016531c call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10165322u);
  /* 10165322 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165325 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10165328 jg 0x1016533f */
  if ((!C.zf&&C.sf==C.of)) goto L_1016533f;
  /* 1016532a push 0x101736e8 */
  push32((uint32_t)(0x101736e8u));
  /* 1016532f call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10165335u);
  /* 10165335 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165338 cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016533d jle 0x1016539d */
  if ((C.zf||C.sf!=C.of)) goto L_1016539d;
L_1016533f:;
  /* 1016533f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165341 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10165343 push 0x10173688 */
  push32((uint32_t)(0x10173688u));
  /* 10165348 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016534eu);
  /* 1016534e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165350 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10165352 push 0x10173690 */
  push32((uint32_t)(0x10173690u));
  /* 10165357 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016535du);
  /* 1016535d push 0x10176410 */
  push32((uint32_t)(0x10176410u));
  /* 10165362 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10165368u);
  /* 10165368 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016536b cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10165370 jg 0x1016538b */
  if ((!C.zf&&C.sf==C.of)) goto L_1016538b;
  /* 10165372 push 0x10176390 */
  push32((uint32_t)(0x10176390u));
  /* 10165377 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x1016537du);
  /* 1016537d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165380 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10165383 jg 0x1016538b */
  if ((!C.zf&&C.sf==C.of)) goto L_1016538b;
  /* 10165385 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165387 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10165389 jmp 0x1016538f */
  goto L_1016538f;
L_1016538b:;
  /* 1016538b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1016538d push 0x5f */
  push32((uint32_t)(0x5fu));
L_1016538f:;
  /* 1016538f push 0x10173768 */
  push32((uint32_t)(0x10173768u));
  /* 10165394 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016539au);
  /* 1016539a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1016539d:;
  /* 1016539d push 0x101736e8 */
  push32((uint32_t)(0x101736e8u));
  /* 101653a2 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x101653a8u);
  /* 101653a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101653ab cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101653ae jle 0x10165463 */
  if ((C.zf||C.sf!=C.of)) goto L_10165463;
  /* 101653b4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101653b6 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101653b8 push 0x101763b0 */
  push32((uint32_t)(0x101763b0u));
  /* 101653bd call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101653c3u);
  /* 101653c3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101653c5 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 101653c7 push 0x101763b8 */
  push32((uint32_t)(0x101763b8u));
  /* 101653cc call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101653d2u);
  /* 101653d2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101653d4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101653d6 push 0x101763a0 */
  push32((uint32_t)(0x101763a0u));
  /* 101653db call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101653e1u);
  /* 101653e1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101653e3 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101653e5 push 0x101762f8 */
  push32((uint32_t)(0x101762f8u));
  /* 101653ea call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101653f0u);
  /* 101653f0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101653f2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 101653f4 push 0x101762e0 */
  push32((uint32_t)(0x101762e0u));
  /* 101653f9 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101653ffu);
  /* 101653ff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165401 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10165403 push 0x101762e8 */
  push32((uint32_t)(0x101762e8u));
  /* 10165408 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016540eu);
  /* 1016540e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165411 push 0x101736e8 */
  push32((uint32_t)(0x101736e8u));
  /* 10165416 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x1016541cu);
  /* 1016541c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016541f cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10165422 jle 0x10165463 */
  if ((C.zf||C.sf!=C.of)) goto L_10165463;
  /* 10165424 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165426 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10165428 push 0x101763a8 */
  push32((uint32_t)(0x101763a8u));
  /* 1016542d call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165433u);
  /* 10165433 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165435 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10165437 push 0x101763c0 */
  push32((uint32_t)(0x101763c0u));
  /* 1016543c call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165442u);
  /* 10165442 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165444 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10165446 push 0x10176300 */
  push32((uint32_t)(0x10176300u));
  /* 1016544b call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165451u);
  /* 10165451 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165453 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10165455 push 0x10176308 */
  push32((uint32_t)(0x10176308u));
  /* 1016545a call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165460u);
  /* 10165460 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10165463:;
  /* 10165463 push 0x10176140 */
  push32((uint32_t)(0x10176140u));
  /* 10165468 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x1016546eu);
  /* 1016546e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165471 cmp eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10165474 jle 0x1016550b */
  if ((C.zf||C.sf!=C.of)) goto L_1016550b;
  /* 1016547a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1016547c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1016547e push 0x10173970 */
  push32((uint32_t)(0x10173970u));
  /* 10165483 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165489u);
  /* 10165489 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1016548b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1016548d push 0x10173978 */
  push32((uint32_t)(0x10173978u));
  /* 10165492 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165498u);
  /* 10165498 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1016549a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1016549c push 0x10173968 */
  push32((uint32_t)(0x10173968u));
  /* 101654a1 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101654a7u);
  /* 101654a7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101654a9 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101654ab push 0x10175fd8 */
  push32((uint32_t)(0x10175fd8u));
  /* 101654b0 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101654b6u);
  /* 101654b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101654b8 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101654ba push 0x10175fc8 */
  push32((uint32_t)(0x10175fc8u));
  /* 101654bf call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101654c5u);
  /* 101654c5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101654c7 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101654c9 push 0x10175fd0 */
  push32((uint32_t)(0x10175fd0u));
  /* 101654ce call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101654d4u);
  /* 101654d4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101654d7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101654d9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101654db push 0x10176268 */
  push32((uint32_t)(0x10176268u));
  /* 101654e0 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101654e6u);
  /* 101654e6 push 0x10176140 */
  push32((uint32_t)(0x10176140u));
  /* 101654eb call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x101654f1u);
  /* 101654f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101654f4 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101654f7 jle 0x1016550b */
  if ((C.zf||C.sf!=C.of)) goto L_1016550b;
  /* 101654f9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101654fb push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101654fd push 0x10176270 */
  push32((uint32_t)(0x10176270u));
  /* 10165502 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165508u);
  /* 10165508 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1016550b:;
  /* 1016550b push 0x10173760 */
  push32((uint32_t)(0x10173760u));
  /* 10165510 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10165516u);
  /* 10165516 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165519 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016551c jle 0x1016553f */
  if ((C.zf||C.sf!=C.of)) goto L_1016553f;
  /* 1016551e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165520 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10165522 push 0x101762c0 */
  push32((uint32_t)(0x101762c0u));
  /* 10165527 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016552du);
  /* 1016552d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1016552f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10165531 push 0x10176028 */
  push32((uint32_t)(0x10176028u));
  /* 10165536 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016553cu);
  /* 1016553c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1016553f:;
  /* 1016553f push 0x10176410 */
  push32((uint32_t)(0x10176410u));
  /* 10165544 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x1016554au);
  /* 1016554a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016554d cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10165550 jle 0x10165623 */
  if ((C.zf||C.sf!=C.of)) goto L_10165623;
  /* 10165556 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165558 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1016555a push 0x10176190 */
  push32((uint32_t)(0x10176190u));
  /* 1016555f call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165565u);
  /* 10165565 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165567 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10165569 push 0x10176188 */
  push32((uint32_t)(0x10176188u));
  /* 1016556e call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165574u);
  /* 10165574 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165576 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10165578 push 0x10176180 */
  push32((uint32_t)(0x10176180u));
  /* 1016557d call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165583u);
  /* 10165583 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165585 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10165587 push 0x10176078 */
  push32((uint32_t)(0x10176078u));
  /* 1016558c call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165592u);
  /* 10165592 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165594 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10165596 push 0x10176070 */
  push32((uint32_t)(0x10176070u));
  /* 1016559b call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101655a1u);
  /* 101655a1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101655a3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101655a5 push 0x10176068 */
  push32((uint32_t)(0x10176068u));
  /* 101655aa call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101655b0u);
  /* 101655b0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101655b3 push 0x10176410 */
  push32((uint32_t)(0x10176410u));
  /* 101655b8 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x101655beu);
  /* 101655be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101655c1 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101655c4 jle 0x10165623 */
  if ((C.zf||C.sf!=C.of)) goto L_10165623;
  /* 101655c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101655c8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101655ca push 0x10176178 */
  push32((uint32_t)(0x10176178u));
  /* 101655cf call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101655d5u);
  /* 101655d5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101655d7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101655d9 push 0x10176168 */
  push32((uint32_t)(0x10176168u));
  /* 101655de call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101655e4u);
  /* 101655e4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101655e6 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101655e8 push 0x101761b8 */
  push32((uint32_t)(0x101761b8u));
  /* 101655ed call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101655f3u);
  /* 101655f3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101655f5 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101655f7 push 0x10176060 */
  push32((uint32_t)(0x10176060u));
  /* 101655fc call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165602u);
  /* 10165602 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165604 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10165606 push 0x10176058 */
  push32((uint32_t)(0x10176058u));
  /* 1016560b call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165611u);
  /* 10165611 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165613 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10165615 push 0x10176050 */
  push32((uint32_t)(0x10176050u));
  /* 1016561a call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165620u);
  /* 10165620 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10165623:;
  /* 10165623 push 0x10176390 */
  push32((uint32_t)(0x10176390u));
  /* 10165628 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x1016562eu);
  /* 1016562e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165631 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10165634 jle 0x10165706 */
  if ((C.zf||C.sf!=C.of)) goto L_10165706;
  /* 1016563a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1016563c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1016563e push 0x101737a8 */
  push32((uint32_t)(0x101737a8u));
  /* 10165643 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165649u);
  /* 10165649 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1016564b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1016564d push 0x101737a0 */
  push32((uint32_t)(0x101737a0u));
  /* 10165652 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165658u);
  /* 10165658 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1016565a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1016565c push 0x10173798 */
  push32((uint32_t)(0x10173798u));
  /* 10165661 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165667u);
  /* 10165667 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165669 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1016566b push 0x10173718 */
  push32((uint32_t)(0x10173718u));
  /* 10165670 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165676u);
  /* 10165676 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165678 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1016567a push 0x10173710 */
  push32((uint32_t)(0x10173710u));
  /* 1016567f call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165685u);
  /* 10165685 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165687 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10165689 push 0x10173708 */
  push32((uint32_t)(0x10173708u));
  /* 1016568e call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165694u);
  /* 10165694 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165697 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165699 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1016569b push 0x10173700 */
  push32((uint32_t)(0x10173700u));
  /* 101656a0 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101656a6u);
  /* 101656a6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101656a8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101656aa push 0x101736d8 */
  push32((uint32_t)(0x101736d8u));
  /* 101656af call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101656b5u);
  /* 101656b5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101656b7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101656b9 push 0x101736d0 */
  push32((uint32_t)(0x101736d0u));
  /* 101656be call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101656c4u);
  /* 101656c4 push 0x101736d0 */
  push32((uint32_t)(0x101736d0u));
  /* 101656c9 call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x101656cfu);
  /* 101656cf add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101656d2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101656d4 je 0x10165706 */
  if (C.zf) goto L_10165706;
  /* 101656d6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101656d8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101656da push 0x10173780 */
  push32((uint32_t)(0x10173780u));
  /* 101656df call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101656e5u);
  /* 101656e5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101656e7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101656e9 push 0x10173778 */
  push32((uint32_t)(0x10173778u));
  /* 101656ee call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101656f4u);
  /* 101656f4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101656f6 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101656f8 push 0x10173770 */
  push32((uint32_t)(0x10173770u));
  /* 101656fd call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165703u);
  /* 10165703 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10165706:;
  /* 10165706 push 0x101736f0 */
  push32((uint32_t)(0x101736f0u));
  /* 1016570b call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10165711u);
  /* 10165711 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165714 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10165717 jle 0x1016579f */
  if ((C.zf||C.sf!=C.of)) goto L_1016579f;
  /* 1016571d push 0x101736e0 */
  push32((uint32_t)(0x101736e0u));
  /* 10165722 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10165728u);
  /* 10165728 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016572b cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016572e jge 0x1016579f */
  if ((C.sf==C.of)) goto L_1016579f;
  /* 10165730 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165732 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10165734 push 0x10173960 */
  push32((uint32_t)(0x10173960u));
  /* 10165739 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016573fu);
  /* 1016573f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165741 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10165743 push 0x10173958 */
  push32((uint32_t)(0x10173958u));
  /* 10165748 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016574eu);
  /* 1016574e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165750 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10165752 push 0x10173950 */
  push32((uint32_t)(0x10173950u));
  /* 10165757 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016575du);
  /* 1016575d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1016575f push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10165761 push 0x10173918 */
  push32((uint32_t)(0x10173918u));
  /* 10165766 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016576cu);
  /* 1016576c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1016576e push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10165770 push 0x10173910 */
  push32((uint32_t)(0x10173910u));
  /* 10165775 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016577bu);
  /* 1016577b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1016577d push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1016577f push 0x10173908 */
  push32((uint32_t)(0x10173908u));
  /* 10165784 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016578au);
  /* 1016578a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016578d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1016578f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10165791 push 0x10176268 */
  push32((uint32_t)(0x10176268u));
  /* 10165796 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016579cu);
  /* 1016579c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1016579f:;
  /* 1016579f push 0x101736e0 */
  push32((uint32_t)(0x101736e0u));
  /* 101657a4 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x101657aau);
  /* 101657aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101657ad cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101657b0 jle 0x10165891 */
  if ((C.zf||C.sf!=C.of)) goto L_10165891;
  /* 101657b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101657b8 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101657ba push 0x101736b8 */
  push32((uint32_t)(0x101736b8u));
  /* 101657bf call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101657c5u);
  /* 101657c5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101657c7 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 101657c9 push 0x101736b0 */
  push32((uint32_t)(0x101736b0u));
  /* 101657ce call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101657d4u);
  /* 101657d4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101657d6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101657d8 push 0x101736a8 */
  push32((uint32_t)(0x101736a8u));
  /* 101657dd call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101657e3u);
  /* 101657e3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101657e5 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101657e7 push 0x10176378 */
  push32((uint32_t)(0x10176378u));
  /* 101657ec call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101657f2u);
  /* 101657f2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101657f4 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101657f6 push 0x10176370 */
  push32((uint32_t)(0x10176370u));
  /* 101657fb call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165801u);
  /* 10165801 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165803 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10165805 push 0x10176368 */
  push32((uint32_t)(0x10176368u));
  /* 1016580a call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165810u);
  /* 10165810 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165813 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165815 push 0xa */
  push32((uint32_t)(0xau));
  /* 10165817 push 0x101763f0 */
  push32((uint32_t)(0x101763f0u));
  /* 1016581c call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165822u);
  /* 10165822 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165824 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10165826 push 0x101763e8 */
  push32((uint32_t)(0x101763e8u));
  /* 1016582b call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165831u);
  /* 10165831 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165833 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10165835 push 0x10176438 */
  push32((uint32_t)(0x10176438u));
  /* 1016583a call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165840u);
  /* 10165840 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165842 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10165844 push 0x10176430 */
  push32((uint32_t)(0x10176430u));
  /* 10165849 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016584fu);
  /* 1016584f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165851 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10165853 push 0x10176428 */
  push32((uint32_t)(0x10176428u));
  /* 10165858 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016585eu);
  /* 1016585e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165860 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10165862 push 0x10176420 */
  push32((uint32_t)(0x10176420u));
  /* 10165867 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016586du);
  /* 1016586d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165870 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165872 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10165874 push 0x10176268 */
  push32((uint32_t)(0x10176268u));
  /* 10165879 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016587fu);
  /* 1016587f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165881 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10165883 push 0x10176270 */
  push32((uint32_t)(0x10176270u));
  /* 10165888 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016588eu);
  /* 1016588e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10165891:;
  /* 10165891 push 0x10175fe0 */
  push32((uint32_t)(0x10175fe0u));
  /* 10165896 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x1016589cu);
  /* 1016589c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016589f cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101658a2 jle 0x10165a00 */
  if ((C.zf||C.sf!=C.of)) goto L_10165a00;
  /* 101658a8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101658aa push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101658ac push 0x10173740 */
  push32((uint32_t)(0x10173740u));
  /* 101658b1 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101658b7u);
  /* 101658b7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101658b9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101658bb push 0x10173748 */
  push32((uint32_t)(0x10173748u));
  /* 101658c0 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101658c6u);
  /* 101658c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101658c8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101658ca push 0x10173750 */
  push32((uint32_t)(0x10173750u));
  /* 101658cf call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101658d5u);
  /* 101658d5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101658d7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101658d9 push 0x10173758 */
  push32((uint32_t)(0x10173758u));
  /* 101658de call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101658e4u);
  /* 101658e4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101658e6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101658e8 push 0x10173720 */
  push32((uint32_t)(0x10173720u));
  /* 101658ed call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101658f3u);
  /* 101658f3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101658f5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101658f7 push 0x10173730 */
  push32((uint32_t)(0x10173730u));
  /* 101658fc call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165902u);
  /* 10165902 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165905 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165907 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10165909 push 0x101737e8 */
  push32((uint32_t)(0x101737e8u));
  /* 1016590e call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165914u);
  /* 10165914 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165916 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10165918 push 0x101737f0 */
  push32((uint32_t)(0x101737f0u));
  /* 1016591d call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165923u);
  /* 10165923 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165925 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10165927 push 0x101737f8 */
  push32((uint32_t)(0x101737f8u));
  /* 1016592c call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165932u);
  /* 10165932 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165934 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10165936 push 0x101737d0 */
  push32((uint32_t)(0x101737d0u));
  /* 1016593b call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165941u);
  /* 10165941 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165943 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10165945 push 0x101737d8 */
  push32((uint32_t)(0x101737d8u));
  /* 1016594a call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165950u);
  /* 10165950 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165952 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10165954 push 0x101737e0 */
  push32((uint32_t)(0x101737e0u));
  /* 10165959 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016595fu);
  /* 1016595f add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165962 push 0x10175fe0 */
  push32((uint32_t)(0x10175fe0u));
  /* 10165967 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x1016596du);
  /* 1016596d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165970 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10165973 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165975 jle 0x1016598a */
  if ((C.zf||C.sf!=C.of)) goto L_1016598a;
  /* 10165977 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10165979 push 0x10176088 */
  push32((uint32_t)(0x10176088u));
  /* 1016597e call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165984u);
  /* 10165984 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165986 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10165988 jmp 0x1016599b */
  goto L_1016599b;
L_1016598a:;
  /* 1016598a push 0xf */
  push32((uint32_t)(0xfu));
  /* 1016598c push 0x10176088 */
  push32((uint32_t)(0x10176088u));
  /* 10165991 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165997u);
  /* 10165997 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165999 push 0xf */
  push32((uint32_t)(0xfu));
L_1016599b:;
  /* 1016599b push 0x101760e8 */
  push32((uint32_t)(0x101760e8u));
  /* 101659a0 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101659a6u);
  /* 101659a6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101659a9 push 0x10176088 */
  push32((uint32_t)(0x10176088u));
  /* 101659ae call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x101659b4u);
  /* 101659b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101659b7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101659b9 je 0x101659df */
  if (C.zf) goto L_101659df;
  /* 101659bb push 0x101760e8 */
  push32((uint32_t)(0x101760e8u));
  /* 101659c0 call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x101659c6u);
  /* 101659c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101659c9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101659cb je 0x101659df */
  if (C.zf) goto L_101659df;
  /* 101659cd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101659cf push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101659d1 push 0x101760e0 */
  push32((uint32_t)(0x101760e0u));
  /* 101659d6 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101659dcu);
  /* 101659dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101659df:;
  /* 101659df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101659e1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101659e3 push 0x10176268 */
  push32((uint32_t)(0x10176268u));
  /* 101659e8 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101659eeu);
  /* 101659ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101659f0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101659f2 push 0x10176270 */
  push32((uint32_t)(0x10176270u));
  /* 101659f7 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101659fdu);
  /* 101659fd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10165a00:;
  /* 10165a00 push 0x10176368 */
  push32((uint32_t)(0x10176368u));
  /* 10165a05 call dword ptr [0x101765ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765ac))), 0x10165a0bu);
  /* 10165a0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165a0e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10165a10 je 0x10165a87 */
  if (C.zf) goto L_10165a87;
  /* 10165a12 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165a14 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10165a16 push 0x101761d0 */
  push32((uint32_t)(0x101761d0u));
  /* 10165a1b call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165a21u);
  /* 10165a21 push 0x101761d0 */
  push32((uint32_t)(0x101761d0u));
  /* 10165a26 call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x10165a2cu);
  /* 10165a2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165a2f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10165a31 je 0x10165a87 */
  if (C.zf) goto L_10165a87;
  /* 10165a33 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165a35 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10165a37 push 0x101761e0 */
  push32((uint32_t)(0x101761e0u));
  /* 10165a3c call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165a42u);
  /* 10165a42 push 0x101761e0 */
  push32((uint32_t)(0x101761e0u));
  /* 10165a47 call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x10165a4du);
  /* 10165a4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165a50 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10165a52 je 0x10165a87 */
  if (C.zf) goto L_10165a87;
  /* 10165a54 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165a56 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10165a58 push 0x101761d8 */
  push32((uint32_t)(0x101761d8u));
  /* 10165a5d call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165a63u);
  /* 10165a63 push 0x101761d8 */
  push32((uint32_t)(0x101761d8u));
  /* 10165a68 call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x10165a6eu);
  /* 10165a6e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165a71 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10165a73 je 0x10165a87 */
  if (C.zf) goto L_10165a87;
  /* 10165a75 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165a77 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10165a79 push 0x101761c8 */
  push32((uint32_t)(0x101761c8u));
  /* 10165a7e call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165a84u);
  /* 10165a84 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10165a87:;
  /* 10165a87 ret  */
  ESPCHK(0x101652b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a90 @ 0x10165a90 (305 bytes, 86 insns) */
void f_10165a90(void) {
  FTRACE(0x10165a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10165a90 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165a92 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10165a94 push 0x101763d8 */
  push32((uint32_t)(0x101763d8u));
  /* 10165a99 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165a9fu);
  /* 10165a9f push 0x10175f80 */
  push32((uint32_t)(0x10175f80u));
  /* 10165aa4 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10165aaau);
  /* 10165aaa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165aad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10165aaf je 0x10165ac3 */
  if (C.zf) goto L_10165ac3;
  /* 10165ab1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165ab3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165ab5 push 0x101736c0 */
  push32((uint32_t)(0x101736c0u));
  /* 10165aba call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165ac0u);
  /* 10165ac0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10165ac3:;
  /* 10165ac3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165ac5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165ac7 push 0x101760d8 */
  push32((uint32_t)(0x101760d8u));
  /* 10165acc call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165ad2u);
  /* 10165ad2 push 0x101736e8 */
  push32((uint32_t)(0x101736e8u));
  /* 10165ad7 call 0x10165270 */
  push32(0x10165adcu); f_10165270();
  /* 10165adc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165adf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10165ae1 jne 0x10165af1 */
  if (!C.zf) goto L_10165af1;
  /* 10165ae3 mov eax, dword ptr [0x10175fb8] */
  EAX = (r32((uint32_t)(0x10175fb8)));
  /* 10165ae8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10165aea je 0x10165b03 */
  if (C.zf) goto L_10165b03;
  /* 10165aec cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10165aef je 0x10165b03 */
  if (C.zf) goto L_10165b03;
L_10165af1:;
  /* 10165af1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165af3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10165af5 push 0x101762d0 */
  push32((uint32_t)(0x101762d0u));
  /* 10165afa call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165b00u);
  /* 10165b00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10165b03:;
  /* 10165b03 push 0x10176048 */
  push32((uint32_t)(0x10176048u));
  /* 10165b08 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10165b0eu);
  /* 10165b0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165b11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10165b13 je 0x10165b27 */
  if (C.zf) goto L_10165b27;
  /* 10165b15 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165b17 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165b19 push 0x101760a0 */
  push32((uint32_t)(0x101760a0u));
  /* 10165b1e call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165b24u);
  /* 10165b24 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10165b27:;
  /* 10165b27 push 0x101761b0 */
  push32((uint32_t)(0x101761b0u));
  /* 10165b2c call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x10165b32u);
  /* 10165b32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165b35 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10165b37 je 0x10165b4b */
  if (C.zf) goto L_10165b4b;
  /* 10165b39 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165b3b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165b3d push 0x10176090 */
  push32((uint32_t)(0x10176090u));
  /* 10165b42 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165b48u);
  /* 10165b48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10165b4b:;
  /* 10165b4b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165b4d push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10165b4f push 0x101761b0 */
  push32((uint32_t)(0x101761b0u));
  /* 10165b54 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165b5au);
  /* 10165b5a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165b5c push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10165b5e push 0x10176160 */
  push32((uint32_t)(0x10176160u));
  /* 10165b63 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165b69u);
  /* 10165b69 push 0x10176138 */
  push32((uint32_t)(0x10176138u));
  /* 10165b6e call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10165b74u);
  /* 10165b74 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165b77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10165b79 je 0x10165b8d */
  if (C.zf) goto L_10165b8d;
  /* 10165b7b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165b7d push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10165b7f push 0x10176218 */
  push32((uint32_t)(0x10176218u));
  /* 10165b84 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165b8au);
  /* 10165b8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10165b8d:;
  /* 10165b8d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165b8f push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10165b91 push 0x10176080 */
  push32((uint32_t)(0x10176080u));
  /* 10165b96 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165b9cu);
  /* 10165b9c push 0x101762b8 */
  push32((uint32_t)(0x101762b8u));
  /* 10165ba1 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10165ba7u);
  /* 10165ba7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165baa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10165bac je 0x10165bc0 */
  if (C.zf) goto L_10165bc0;
  /* 10165bae push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165bb0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165bb2 push 0x10173940 */
  push32((uint32_t)(0x10173940u));
  /* 10165bb7 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10165bbdu);
  /* 10165bbd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10165bc0:;
  /* 10165bc0 ret  */
  ESPCHK(0x10165a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bd0 @ 0x10165bd0 (536 bytes, 150 insns) */
void f_10165bd0(void) {
  FTRACE(0x10165bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10165bd0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165bd2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165bd4 push 3 */
  push32((uint32_t)(0x3u));
  /* 10165bd6 push 0x101762b8 */
  push32((uint32_t)(0x101762b8u));
  /* 10165bdb call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10165be1u);
  /* 10165be1 push 0x10176048 */
  push32((uint32_t)(0x10176048u));
  /* 10165be6 call dword ptr [0x101765a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a4))), 0x10165becu);
  /* 10165bec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165bef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10165bf1 je 0x10165c18 */
  if (C.zf) goto L_10165c18;
  /* 10165bf3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165bf5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165bf7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10165bf9 push 0x10176038 */
  push32((uint32_t)(0x10176038u));
  /* 10165bfe call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10165c04u);
  /* 10165c04 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165c06 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165c08 push 4 */
  push32((uint32_t)(0x4u));
  /* 10165c0a push 0x10176030 */
  push32((uint32_t)(0x10176030u));
  /* 10165c0f call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10165c15u);
  /* 10165c15 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10165c18:;
  /* 10165c18 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165c1a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165c1c push 1 */
  push32((uint32_t)(0x1u));
  /* 10165c1e push 0x10176038 */
  push32((uint32_t)(0x10176038u));
  /* 10165c23 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10165c29u);
  /* 10165c29 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165c2b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165c2d push 1 */
  push32((uint32_t)(0x1u));
  /* 10165c2f push 0x10176018 */
  push32((uint32_t)(0x10176018u));
  /* 10165c34 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10165c3au);
  /* 10165c3a mov eax, dword ptr [0x10176314] */
  EAX = (r32((uint32_t)(0x10176314)));
  /* 10165c3f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165c42 mov ecx, dword ptr [eax*4 + 0x10175ff8] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10175ff8)));
  /* 10165c49 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10165c4b jne 0x10165c68 */
  if (!C.zf) goto L_10165c68;
  /* 10165c4d call 0x10165220 */
  push32(0x10165c52u); f_10165220();
  /* 10165c52 push 0x101738d8 */
  push32((uint32_t)(0x101738d8u));
  /* 10165c57 call dword ptr [0x101765a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a4))), 0x10165c5du);
  /* 10165c5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165c60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10165c62 je 0x10165de7 */
  if (C.zf) goto L_10165de7;
L_10165c68:;
  /* 10165c68 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165c6a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165c6c push 1 */
  push32((uint32_t)(0x1u));
  /* 10165c6e push 0x10176248 */
  push32((uint32_t)(0x10176248u));
  /* 10165c73 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10165c79u);
  /* 10165c79 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165c7b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165c7d push 2 */
  push32((uint32_t)(0x2u));
  /* 10165c7f push 0x10176018 */
  push32((uint32_t)(0x10176018u));
  /* 10165c84 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10165c8au);
  /* 10165c8a push 0x10176018 */
  push32((uint32_t)(0x10176018u));
  /* 10165c8f call dword ptr [0x101765a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a4))), 0x10165c95u);
  /* 10165c95 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165c98 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10165c9b jge 0x10165caa */
  if ((C.sf==C.of)) goto L_10165caa;
  /* 10165c9d call 0x10162670 */
  push32(0x10165ca2u); f_10162670();
  /* 10165ca2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10165ca4 jne 0x10165de7 */
  if (!C.zf) goto L_10165de7;
L_10165caa:;
  /* 10165caa push esi */
  push32((uint32_t)(ESI));
  /* 10165cab push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165cad push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165caf push 2 */
  push32((uint32_t)(0x2u));
  /* 10165cb1 push 0x101762b0 */
  push32((uint32_t)(0x101762b0u));
  /* 10165cb6 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10165cbcu);
  /* 10165cbc push 0x101762b0 */
  push32((uint32_t)(0x101762b0u));
  /* 10165cc1 call dword ptr [0x101765a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a4))), 0x10165cc7u);
  /* 10165cc7 push 0x101762b0 */
  push32((uint32_t)(0x101762b0u));
  /* 10165ccc mov esi, eax */
  ESI = (EAX);
  /* 10165cce call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10165cd4u);
  /* 10165cd4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165cd7 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10165cd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10165cdb pop esi */
  ESI = (pop32());
  /* 10165cdc jg 0x10165de7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10165de7;
  /* 10165ce2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165ce4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165ce6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10165ce8 push 0x10175f80 */
  push32((uint32_t)(0x10175f80u));
  /* 10165ced call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10165cf3u);
  /* 10165cf3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165cf6 call 0x10162780 */
  push32(0x10165cfbu); f_10162780();
  /* 10165cfb cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10165cfe jge 0x10165d27 */
  if ((C.sf==C.of)) goto L_10165d27;
  /* 10165d00 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165d02 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165d04 push 1 */
  push32((uint32_t)(0x1u));
  /* 10165d06 push 0x10176048 */
  push32((uint32_t)(0x10176048u));
  /* 10165d0b call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10165d11u);
  /* 10165d11 push 0x10176048 */
  push32((uint32_t)(0x10176048u));
  /* 10165d16 call dword ptr [0x101765a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a4))), 0x10165d1cu);
  /* 10165d1c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165d1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10165d21 je 0x10165de7 */
  if (C.zf) goto L_10165de7;
L_10165d27:;
  /* 10165d27 call 0x10165220 */
  push32(0x10165d2cu); f_10165220();
  /* 10165d2c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165d2e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165d30 push 4 */
  push32((uint32_t)(0x4u));
  /* 10165d32 push 0x10176018 */
  push32((uint32_t)(0x10176018u));
  /* 10165d37 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10165d3du);
  /* 10165d3d push 0x10176018 */
  push32((uint32_t)(0x10176018u));
  /* 10165d42 call dword ptr [0x101765a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a4))), 0x10165d48u);
  /* 10165d48 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165d4b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10165d4e jl 0x10165de7 */
  if ((C.sf!=C.of)) goto L_10165de7;
  /* 10165d54 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165d56 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165d58 push 3 */
  push32((uint32_t)(0x3u));
  /* 10165d5a push 0x10176138 */
  push32((uint32_t)(0x10176138u));
  /* 10165d5f call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10165d65u);
  /* 10165d65 push 0x101762b8 */
  push32((uint32_t)(0x101762b8u));
  /* 10165d6a call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10165d70u);
  /* 10165d70 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165d73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10165d75 je 0x10165d8b */
  if (C.zf) goto L_10165d8b;
  /* 10165d77 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165d79 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165d7b push 4 */
  push32((uint32_t)(0x4u));
  /* 10165d7d push 0x10176138 */
  push32((uint32_t)(0x10176138u));
  /* 10165d82 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10165d88u);
  /* 10165d88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10165d8b:;
  /* 10165d8b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165d8d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165d8f push 1 */
  push32((uint32_t)(0x1u));
  /* 10165d91 push 0x10173678 */
  push32((uint32_t)(0x10173678u));
  /* 10165d96 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10165d9cu);
  /* 10165d9c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165d9e push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10165da0 push 3 */
  push32((uint32_t)(0x3u));
  /* 10165da2 push 0x10173678 */
  push32((uint32_t)(0x10173678u));
  /* 10165da7 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10165dadu);
  /* 10165dad push 0x10173940 */
  push32((uint32_t)(0x10173940u));
  /* 10165db2 call dword ptr [0x101765ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765ac))), 0x10165db8u);
  /* 10165db8 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165dbb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10165dbd je 0x10165dd3 */
  if (C.zf) goto L_10165dd3;
  /* 10165dbf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165dc1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165dc3 push 5 */
  push32((uint32_t)(0x5u));
  /* 10165dc5 push 0x10176138 */
  push32((uint32_t)(0x10176138u));
  /* 10165dca call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10165dd0u);
  /* 10165dd0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10165dd3:;
  /* 10165dd3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165dd5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165dd7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10165dd9 push 0x10176158 */
  push32((uint32_t)(0x10176158u));
  /* 10165dde call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10165de4u);
  /* 10165de4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10165de7:;
  /* 10165de7 ret  */
  ESPCHK(0x10165bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005df0 @ 0x10165df0 (472 bytes, 137 insns) */
void f_10165df0(void) {
  FTRACE(0x10165df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10165df0 push ecx */
  push32((uint32_t)(ECX));
  /* 10165df1 push 0x101762d8 */
  push32((uint32_t)(0x101762d8u));
  /* 10165df6 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10165dfcu);
  /* 10165dfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165dff cmp eax, 0x28 */
  { uint32_t _a=(EAX),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10165e02 jge 0x10165e17 */
  if ((C.sf==C.of)) goto L_10165e17;
  /* 10165e04 mov eax, dword ptr [0x10176314] */
  EAX = (r32((uint32_t)(0x10176314)));
  /* 10165e09 push 0 */
  push32((uint32_t)(0x0u));
  /* 10165e0b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10165e0e push eax */
  push32((uint32_t)(EAX));
  /* 10165e0f call 0x101626d0 */
  push32(0x10165e14u); f_101626d0();
  /* 10165e14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10165e17:;
  /* 10165e17 push 0x101762d8 */
  push32((uint32_t)(0x101762d8u));
  /* 10165e1c call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10165e22u);
  /* 10165e22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165e25 cmp eax, 0x9c */
  { uint32_t _a=(EAX),_b=(0x9cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10165e2a jg 0x10165e3e */
  if ((!C.zf&&C.sf==C.of)) goto L_10165e3e;
  /* 10165e2c push 0x10176138 */
  push32((uint32_t)(0x10176138u));
  /* 10165e31 call dword ptr [0x101765a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a4))), 0x10165e37u);
  /* 10165e37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165e3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10165e3c je 0x10165e52 */
  if (C.zf) goto L_10165e52;
L_10165e3e:;
  /* 10165e3e mov ecx, dword ptr [0x10176314] */
  ECX = (r32((uint32_t)(0x10176314)));
  /* 10165e44 push 1 */
  push32((uint32_t)(0x1u));
  /* 10165e46 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10165e49 push ecx */
  push32((uint32_t)(ECX));
  /* 10165e4a call 0x101626d0 */
  push32(0x10165e4fu); f_101626d0();
  /* 10165e4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10165e52:;
  /* 10165e52 push esi */
  push32((uint32_t)(ESI));
  /* 10165e53 push edi */
  push32((uint32_t)(EDI));
  /* 10165e54 mov edi, 2 */
  EDI = (0x2u);
L_10165e59:;
  /* 10165e59 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165e5b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10165e5d push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10165e62 push 0x101761f0 */
  push32((uint32_t)(0x101761f0u));
  /* 10165e67 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10165e6du);
  /* 10165e6d push 0x101736e8 */
  push32((uint32_t)(0x101736e8u));
  /* 10165e72 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10165e78u);
  /* 10165e78 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165e7b cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10165e80 jge 0x10165e9b */
  if ((C.sf==C.of)) goto L_10165e9b;
  /* 10165e82 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165e84 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10165e86 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10165e8b push 0x101736e8 */
  push32((uint32_t)(0x101736e8u));
  /* 10165e90 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10165e96u);
  /* 10165e96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165e99 jmp 0x10165ec6 */
  goto L_10165ec6;
L_10165e9b:;
  /* 10165e9b push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10165e9d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10165e9f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10165ea4 push 0x101736e8 */
  push32((uint32_t)(0x101736e8u));
  /* 10165ea9 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10165eafu);
  /* 10165eaf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165eb1 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10165eb3 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10165eb8 push 0x10176140 */
  push32((uint32_t)(0x10176140u));
  /* 10165ebd call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10165ec3u);
  /* 10165ec3 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10165ec6:;
  /* 10165ec6 mov edx, dword ptr [0x10176314] */
  EDX = (r32((uint32_t)(0x10176314)));
  /* 10165ecc add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10165ecf push edx */
  push32((uint32_t)(EDX));
  /* 10165ed0 call 0x101626f0 */
  push32(0x10165ed5u); f_101626f0();
  /* 10165ed5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165ed8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10165eda jne 0x10165efd */
  if (!C.zf) goto L_10165efd;
  /* 10165edc call 0x10162780 */
  push32(0x10165ee1u); f_10162780();
  /* 10165ee1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10165ee4 jge 0x10165efd */
  if ((C.sf==C.of)) goto L_10165efd;
  /* 10165ee6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165ee8 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10165eea push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10165eef push 0x101762d8 */
  push32((uint32_t)(0x101762d8u));
  /* 10165ef4 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10165efau);
  /* 10165efa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10165efd:;
  /* 10165efd mov al, byte ptr [0x10176314] */
  AL = (r8((uint32_t)(0x10176314)));
  /* 10165f02 mov byte ptr [esp + 8], al */
  w8((uint32_t)(ESP + 0x8), (AL));
  /* 10165f06 mov eax, dword ptr [0x10176518] */
  EAX = (r32((uint32_t)(0x10176518)));
  /* 10165f0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10165f0d je 0x10165f25 */
  if (C.zf) goto L_10165f25;
  /* 10165f0f mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10165f13 push 1 */
  push32((uint32_t)(0x1u));
  /* 10165f15 push 0x101738e8 */
  push32((uint32_t)(0x101738e8u));
  /* 10165f1a push ecx */
  push32((uint32_t)(ECX));
  /* 10165f1b call eax */
  call_ind((uint32_t)(EAX), 0x10165f1du);
  /* 10165f1d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165f20 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10165f23 jge 0x10165f65 */
  if ((C.sf==C.of)) goto L_10165f65;
L_10165f25:;
  /* 10165f25 push 5 */
  push32((uint32_t)(0x5u));
  /* 10165f27 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10165f2du);
  /* 10165f2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165f30 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10165f35 jle 0x10165f65 */
  if ((C.zf||C.sf!=C.of)) goto L_10165f65;
  /* 10165f37 push 4 */
  push32((uint32_t)(0x4u));
  /* 10165f39 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10165f3fu);
  /* 10165f3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165f42 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10165f47 jle 0x10165f65 */
  if ((C.zf||C.sf!=C.of)) goto L_10165f65;
  /* 10165f49 mov esi, 0x1e */
  ESI = (0x1eu);
L_10165f4e:;
  /* 10165f4e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165f50 push 0xa */
  push32((uint32_t)(0xau));
  /* 10165f52 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10165f54 push 0x101738e8 */
  push32((uint32_t)(0x101738e8u));
  /* 10165f59 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10165f5fu);
  /* 10165f5f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165f62 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10165f63 jne 0x10165f4e */
  if (!C.zf) goto L_10165f4e;
L_10165f65:;
  /* 10165f65 push 0x10176080 */
  push32((uint32_t)(0x10176080u));
  /* 10165f6a call dword ptr [0x101765ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765ac))), 0x10165f70u);
  /* 10165f70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165f73 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10165f75 je 0x10165f7b */
  if (C.zf) goto L_10165f7b;
  /* 10165f77 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10165f79 jmp 0x10165f7d */
  goto L_10165f7d;
L_10165f7b:;
  /* 10165f7b push 0x64 */
  push32((uint32_t)(0x64u));
L_10165f7d:;
  /* 10165f7d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10165f7f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10165f84 push 0x10176410 */
  push32((uint32_t)(0x10176410u));
  /* 10165f89 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10165f8fu);
  /* 10165f8f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165f92 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165f94 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10165f96 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10165f9b push 0x101736e0 */
  push32((uint32_t)(0x101736e0u));
  /* 10165fa0 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10165fa6u);
  /* 10165fa6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10165fa8 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10165faa push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10165faf push 0x10175fe0 */
  push32((uint32_t)(0x10175fe0u));
  /* 10165fb4 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10165fbau);
  /* 10165fba add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165fbd dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10165fbe jne 0x10165e59 */
  if (!C.zf) goto L_10165e59;
  /* 10165fc4 pop edi */
  EDI = (pop32());
  /* 10165fc5 pop esi */
  ESI = (pop32());
  /* 10165fc6 pop ecx */
  ECX = (pop32());
  /* 10165fc7 ret  */
  ESPCHK(0x10165df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fd0 @ 0x10165fd0 (789 bytes, 244 insns) */
void f_10165fd0(void) {
  FTRACE(0x10165fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10165fd0 push ecx */
  push32((uint32_t)(ECX));
  /* 10165fd1 push 0x101738d8 */
  push32((uint32_t)(0x101738d8u));
  /* 10165fd6 call dword ptr [0x101765a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a4))), 0x10165fdcu);
  /* 10165fdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165fdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10165fe1 je 0x101662e3 */
  if (C.zf) goto L_101662e3;
  /* 10165fe7 call 0x10162670 */
  push32(0x10165fecu); f_10162670();
  /* 10165fec cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10165fef jne 0x10166036 */
  if (!C.zf) goto L_10166036;
  /* 10165ff1 mov eax, dword ptr [0x10176314] */
  EAX = (r32((uint32_t)(0x10176314)));
  /* 10165ff6 push eax */
  push32((uint32_t)(EAX));
  /* 10165ff7 call 0x101626f0 */
  push32(0x10165ffcu); f_101626f0();
  /* 10165ffc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10165fff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10166001 jne 0x101662e3 */
  if (!C.zf) goto L_101662e3;
  /* 10166007 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 1016600c push 3 */
  push32((uint32_t)(0x3u));
  /* 1016600e push 2 */
  push32((uint32_t)(0x2u));
  /* 10166010 call 0x10162610 */
  push32(0x10166015u); f_10162610();
  /* 10166015 push 0x13880 */
  push32((uint32_t)(0x13880u));
  /* 1016601a push 3 */
  push32((uint32_t)(0x3u));
  /* 1016601c push 0 */
  push32((uint32_t)(0x0u));
  /* 1016601e call 0x10162610 */
  push32(0x10166023u); f_10162610();
  /* 10166023 mov ecx, dword ptr [0x10176314] */
  ECX = (r32((uint32_t)(0x10176314)));
  /* 10166029 push 1 */
  push32((uint32_t)(0x1u));
  /* 1016602b push ecx */
  push32((uint32_t)(ECX));
  /* 1016602c call 0x101626d0 */
  push32(0x10166031u); f_101626d0();
  /* 10166031 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166034 pop ecx */
  ECX = (pop32());
  /* 10166035 ret  */
  ESPCHK(0x10165fd0u, _esp0);
  ESP += 4; return;
L_10166036:;
  /* 10166036 push 0x101738d8 */
  push32((uint32_t)(0x101738d8u));
  /* 1016603b call dword ptr [0x101765a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a4))), 0x10166041u);
  /* 10166041 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166044 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10166046 je 0x101662e3 */
  if (C.zf) goto L_101662e3;
  /* 1016604c mov edx, dword ptr [0x10176314] */
  EDX = (r32((uint32_t)(0x10176314)));
  /* 10166052 push edx */
  push32((uint32_t)(EDX));
  /* 10166053 call 0x101626f0 */
  push32(0x10166058u); f_101626f0();
  /* 10166058 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016605b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016605d jne 0x101660d2 */
  if (!C.zf) goto L_101660d2;
  /* 1016605f push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10166064 push 3 */
  push32((uint32_t)(0x3u));
  /* 10166066 push 5 */
  push32((uint32_t)(0x5u));
  /* 10166068 call 0x10162610 */
  push32(0x1016606du); f_10162610();
  /* 1016606d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166070 call 0x10162670 */
  push32(0x10166075u); f_10162670();
  /* 10166075 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10166078 jne 0x10166099 */
  if (!C.zf) goto L_10166099;
  /* 1016607a push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 1016607f push 0 */
  push32((uint32_t)(0x0u));
  /* 10166081 push 4 */
  push32((uint32_t)(0x4u));
  /* 10166083 call 0x10162610 */
  push32(0x10166088u); f_10162610();
  /* 10166088 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 1016608d push 2 */
  push32((uint32_t)(0x2u));
  /* 1016608f push 4 */
  push32((uint32_t)(0x4u));
  /* 10166091 call 0x10162610 */
  push32(0x10166096u); f_10162610();
  /* 10166096 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10166099:;
  /* 10166099 call 0x10162670 */
  push32(0x1016609eu); f_10162670();
  /* 1016609e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101660a1 jne 0x101660c2 */
  if (!C.zf) goto L_101660c2;
  /* 101660a3 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 101660a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 101660aa push 4 */
  push32((uint32_t)(0x4u));
  /* 101660ac call 0x10162610 */
  push32(0x101660b1u); f_10162610();
  /* 101660b1 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 101660b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 101660b8 push 4 */
  push32((uint32_t)(0x4u));
  /* 101660ba call 0x10162610 */
  push32(0x101660bfu); f_10162610();
  /* 101660bf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101660c2:;
  /* 101660c2 mov eax, dword ptr [0x10176314] */
  EAX = (r32((uint32_t)(0x10176314)));
  /* 101660c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 101660c9 push eax */
  push32((uint32_t)(EAX));
  /* 101660ca call 0x101626d0 */
  push32(0x101660cfu); f_101626d0();
  /* 101660cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101660d2:;
  /* 101660d2 push 0x101762d0 */
  push32((uint32_t)(0x101762d0u));
  /* 101660d7 call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x101660ddu);
  /* 101660dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101660e0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101660e2 je 0x10166154 */
  if (C.zf) goto L_10166154;
  /* 101660e4 push 0x101761b0 */
  push32((uint32_t)(0x101761b0u));
  /* 101660e9 call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x101660efu);
  /* 101660ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101660f2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101660f4 jne 0x10166154 */
  if (!C.zf) goto L_10166154;
  /* 101660f6 push 0x10175f80 */
  push32((uint32_t)(0x10175f80u));
  /* 101660fb call dword ptr [0x101765a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a4))), 0x10166101u);
  /* 10166101 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166104 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10166106 je 0x10166154 */
  if (C.zf) goto L_10166154;
  /* 10166108 mov eax, dword ptr [0x1017651c] */
  EAX = (r32((uint32_t)(0x1017651c)));
  /* 1016610d mov cl, byte ptr [0x10176314] */
  CL = (r8((uint32_t)(0x10176314)));
  /* 10166113 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10166115 mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 10166119 je 0x1016612e */
  if (C.zf) goto L_1016612e;
  /* 1016611b mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 1016611f push 5 */
  push32((uint32_t)(0x5u));
  /* 10166121 push 0x101761b0 */
  push32((uint32_t)(0x101761b0u));
  /* 10166126 push edx */
  push32((uint32_t)(EDX));
  /* 10166127 call eax */
  call_ind((uint32_t)(EAX), 0x10166129u);
  /* 10166129 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016612c jmp 0x10166130 */
  goto L_10166130;
L_1016612e:;
  /* 1016612e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10166130:;
  /* 10166130 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10166133 push 0 */
  push32((uint32_t)(0x0u));
  /* 10166135 lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 10166138 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 1016613d imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1016613f sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10166142 mov eax, edx */
  EAX = (EDX);
  /* 10166144 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 10166147 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10166149 push edx */
  push32((uint32_t)(EDX));
  /* 1016614a push 5 */
  push32((uint32_t)(0x5u));
  /* 1016614c call 0x10162f90 */
  push32(0x10166151u); f_10162f90();
  /* 10166151 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10166154:;
  /* 10166154 push 0x101761b0 */
  push32((uint32_t)(0x101761b0u));
  /* 10166159 call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x1016615fu);
  /* 1016615f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166162 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10166164 je 0x10166279 */
  if (C.zf) goto L_10166279;
  /* 1016616a push 0x10176080 */
  push32((uint32_t)(0x10176080u));
  /* 1016616f call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x10166175u);
  /* 10166175 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166178 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1016617a jne 0x10166279 */
  if (!C.zf) goto L_10166279;
  /* 10166180 mov eax, dword ptr [0x1017651c] */
  EAX = (r32((uint32_t)(0x1017651c)));
  /* 10166185 mov cl, byte ptr [0x10176314] */
  CL = (r8((uint32_t)(0x10176314)));
  /* 1016618b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016618d mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 10166191 je 0x101661a6 */
  if (C.zf) goto L_101661a6;
  /* 10166193 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 10166197 push 3 */
  push32((uint32_t)(0x3u));
  /* 10166199 push 0x10176080 */
  push32((uint32_t)(0x10176080u));
  /* 1016619e push edx */
  push32((uint32_t)(EDX));
  /* 1016619f call eax */
  call_ind((uint32_t)(EAX), 0x101661a1u);
  /* 101661a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101661a4 jmp 0x101661a8 */
  goto L_101661a8;
L_101661a6:;
  /* 101661a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101661a8:;
  /* 101661a8 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 101661ab push 2 */
  push32((uint32_t)(0x2u));
  /* 101661ad lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 101661b0 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 101661b5 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 101661b7 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 101661ba mov eax, edx */
  EAX = (EDX);
  /* 101661bc shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 101661bf add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101661c1 push edx */
  push32((uint32_t)(EDX));
  /* 101661c2 push 3 */
  push32((uint32_t)(0x3u));
  /* 101661c4 call 0x10162f90 */
  push32(0x101661c9u); f_10162f90();
  /* 101661c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101661cc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101661ce je 0x10166279 */
  if (C.zf) goto L_10166279;
  /* 101661d4 mov eax, dword ptr [0x1017651c] */
  EAX = (r32((uint32_t)(0x1017651c)));
  /* 101661d9 mov cl, byte ptr [0x10176314] */
  CL = (r8((uint32_t)(0x10176314)));
  /* 101661df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101661e1 mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 101661e5 je 0x101661fa */
  if (C.zf) goto L_101661fa;
  /* 101661e7 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 101661eb push 1 */
  push32((uint32_t)(0x1u));
  /* 101661ed push 0x10176080 */
  push32((uint32_t)(0x10176080u));
  /* 101661f2 push edx */
  push32((uint32_t)(EDX));
  /* 101661f3 call eax */
  call_ind((uint32_t)(EAX), 0x101661f5u);
  /* 101661f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101661f8 jmp 0x101661fc */
  goto L_101661fc;
L_101661fa:;
  /* 101661fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101661fc:;
  /* 101661fc lea ecx, [eax*8] */
  ECX = ((uint32_t)(EAX*8));
  /* 10166203 push 2 */
  push32((uint32_t)(0x2u));
  /* 10166205 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10166207 lea eax, [ecx + ecx*2] */
  EAX = ((uint32_t)(ECX + ECX*2));
  /* 1016620a lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1016620d mov eax, 0x51eb851f */
  EAX = (0x51eb851fu);
  /* 10166212 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10166214 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10166217 mov eax, edx */
  EAX = (EDX);
  /* 10166219 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 1016621c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016621e push edx */
  push32((uint32_t)(EDX));
  /* 1016621f push 1 */
  push32((uint32_t)(0x1u));
  /* 10166221 call 0x10162f90 */
  push32(0x10166226u); f_10162f90();
  /* 10166226 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166229 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1016622b je 0x10166279 */
  if (C.zf) goto L_10166279;
  /* 1016622d mov eax, dword ptr [0x1017651c] */
  EAX = (r32((uint32_t)(0x1017651c)));
  /* 10166232 mov cl, byte ptr [0x10176314] */
  CL = (r8((uint32_t)(0x10176314)));
  /* 10166238 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016623a mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 1016623e je 0x10166253 */
  if (C.zf) goto L_10166253;
  /* 10166240 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 10166244 push 4 */
  push32((uint32_t)(0x4u));
  /* 10166246 push 0x10176080 */
  push32((uint32_t)(0x10176080u));
  /* 1016624b push edx */
  push32((uint32_t)(EDX));
  /* 1016624c call eax */
  call_ind((uint32_t)(EAX), 0x1016624eu);
  /* 1016624e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166251 jmp 0x10166255 */
  goto L_10166255;
L_10166253:;
  /* 10166253 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10166255:;
  /* 10166255 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10166258 push 2 */
  push32((uint32_t)(0x2u));
  /* 1016625a lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 1016625d mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10166262 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10166264 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10166267 mov eax, edx */
  EAX = (EDX);
  /* 10166269 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 1016626c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016626e push edx */
  push32((uint32_t)(EDX));
  /* 1016626f push 4 */
  push32((uint32_t)(0x4u));
  /* 10166271 call 0x10162f90 */
  push32(0x10166276u); f_10162f90();
  /* 10166276 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10166279:;
  /* 10166279 push 2 */
  push32((uint32_t)(0x2u));
  /* 1016627b call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10166281u);
  /* 10166281 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166284 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10166289 jle 0x101662ae */
  if ((C.zf||C.sf!=C.of)) goto L_101662ae;
  /* 1016628b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10166290 push 2 */
  push32((uint32_t)(0x2u));
  /* 10166292 push 0 */
  push32((uint32_t)(0x0u));
  /* 10166294 call 0x10162610 */
  push32(0x10166299u); f_10162610();
  /* 10166299 push 2 */
  push32((uint32_t)(0x2u));
  /* 1016629b call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x101662a1u);
  /* 101662a1 push eax */
  push32((uint32_t)(EAX));
  /* 101662a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 101662a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 101662a6 call 0x10162610 */
  push32(0x101662abu); f_10162610();
  /* 101662ab add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101662ae:;
  /* 101662ae push 0 */
  push32((uint32_t)(0x0u));
  /* 101662b0 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x101662b6u);
  /* 101662b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101662b9 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101662be jle 0x101662e3 */
  if ((C.zf||C.sf!=C.of)) goto L_101662e3;
  /* 101662c0 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 101662c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 101662c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 101662c9 call 0x10162610 */
  push32(0x101662ceu); f_10162610();
  /* 101662ce push 0 */
  push32((uint32_t)(0x0u));
  /* 101662d0 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x101662d6u);
  /* 101662d6 push eax */
  push32((uint32_t)(EAX));
  /* 101662d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 101662d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 101662db call 0x10162610 */
  push32(0x101662e0u); f_10162610();
  /* 101662e0 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101662e3:;
  /* 101662e3 pop ecx */
  ECX = (pop32());
  /* 101662e4 ret  */
  ESPCHK(0x10165fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_100062f0 @ 0x101662f0 (818 bytes, 268 insns) */
void f_101662f0(void) {
  FTRACE(0x101662f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101662f0 push ecx */
  push32((uint32_t)(ECX));
  /* 101662f1 push 4 */
  push32((uint32_t)(0x4u));
  /* 101662f3 push 4 */
  push32((uint32_t)(0x4u));
  /* 101662f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 101662f7 call dword ptr [0x10176574] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176574))), 0x101662fdu);
  /* 101662fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166300 call dword ptr [0x101765d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765d0))), 0x10166306u);
  /* 10166306 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10166308 je 0x10166620 */
  if (C.zf) goto L_10166620;
  /* 1016630e push 4 */
  push32((uint32_t)(0x4u));
  /* 10166310 push 4 */
  push32((uint32_t)(0x4u));
  /* 10166312 push 9 */
  push32((uint32_t)(0x9u));
  /* 10166314 call dword ptr [0x10176574] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176574))), 0x1016631au);
  /* 1016631a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016631d call 0x10162670 */
  push32(0x10166322u); f_10162670();
  /* 10166322 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10166325 je 0x10166620 */
  if (C.zf) goto L_10166620;
  /* 1016632b call dword ptr [0x101765d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765d0))), 0x10166331u);
  /* 10166331 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10166333 je 0x10166611 */
  if (C.zf) goto L_10166611;
  /* 10166339 push esi */
  push32((uint32_t)(ESI));
  /* 1016633a push edi */
  push32((uint32_t)(EDI));
  /* 1016633b push 4 */
  push32((uint32_t)(0x4u));
  /* 1016633d push 4 */
  push32((uint32_t)(0x4u));
  /* 1016633f push 9 */
  push32((uint32_t)(0x9u));
  /* 10166341 call dword ptr [0x10176574] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176574))), 0x10166347u);
  /* 10166347 push 0x10176160 */
  push32((uint32_t)(0x10176160u));
  /* 1016634c call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x10166352u);
  /* 10166352 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166355 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10166357 jne 0x101663bf */
  if (!C.zf) goto L_101663bf;
  /* 10166359 mov al, byte ptr [0x10176314] */
  AL = (r8((uint32_t)(0x10176314)));
  /* 1016635e mov byte ptr [esp + 8], al */
  w8((uint32_t)(ESP + 0x8), (AL));
  /* 10166362 mov eax, dword ptr [0x1017651c] */
  EAX = (r32((uint32_t)(0x1017651c)));
  /* 10166367 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10166369 je 0x10166380 */
  if (C.zf) goto L_10166380;
  /* 1016636b mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1016636f push 3 */
  push32((uint32_t)(0x3u));
  /* 10166371 push 0x10176160 */
  push32((uint32_t)(0x10176160u));
  /* 10166376 push ecx */
  push32((uint32_t)(ECX));
  /* 10166377 call eax */
  call_ind((uint32_t)(EAX), 0x10166379u);
  /* 10166379 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016637c mov esi, eax */
  ESI = (EAX);
  /* 1016637e jmp 0x10166382 */
  goto L_10166382;
L_10166380:;
  /* 10166380 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10166382:;
  /* 10166382 push 3 */
  push32((uint32_t)(0x3u));
  /* 10166384 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x1016638au);
  /* 1016638a lea edx, [esi + esi*4] */
  EDX = ((uint32_t)(ESI + ESI*4));
  /* 1016638d mov edi, eax */
  EDI = (EAX);
  /* 1016638f mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10166394 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166397 lea ecx, [esi + edx*2] */
  ECX = ((uint32_t)(ESI + EDX*2));
  /* 1016639a imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1016639c sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 1016639f mov eax, edx */
  EAX = (EDX);
  /* 101663a1 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 101663a4 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101663a6 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101663a8 jge 0x101663b0 */
  if ((C.sf==C.of)) goto L_101663b0;
  /* 101663aa push 4 */
  push32((uint32_t)(0x4u));
  /* 101663ac push 4 */
  push32((uint32_t)(0x4u));
  /* 101663ae jmp 0x101663b4 */
  goto L_101663b4;
L_101663b0:;
  /* 101663b0 push 6 */
  push32((uint32_t)(0x6u));
  /* 101663b2 push 6 */
  push32((uint32_t)(0x6u));
L_101663b4:;
  /* 101663b4 push 9 */
  push32((uint32_t)(0x9u));
  /* 101663b6 call dword ptr [0x10176574] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176574))), 0x101663bcu);
  /* 101663bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101663bf:;
  /* 101663bf push 0x10176080 */
  push32((uint32_t)(0x10176080u));
  /* 101663c4 call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x101663cau);
  /* 101663ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101663cd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101663cf jne 0x10166438 */
  if (!C.zf) goto L_10166438;
  /* 101663d1 mov eax, dword ptr [0x1017651c] */
  EAX = (r32((uint32_t)(0x1017651c)));
  /* 101663d6 mov cl, byte ptr [0x10176314] */
  CL = (r8((uint32_t)(0x10176314)));
  /* 101663dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101663de mov byte ptr [esp + 8], cl */
  w8((uint32_t)(ESP + 0x8), (CL));
  /* 101663e2 je 0x101663f9 */
  if (C.zf) goto L_101663f9;
  /* 101663e4 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 101663e8 push 3 */
  push32((uint32_t)(0x3u));
  /* 101663ea push 0x10176080 */
  push32((uint32_t)(0x10176080u));
  /* 101663ef push edx */
  push32((uint32_t)(EDX));
  /* 101663f0 call eax */
  call_ind((uint32_t)(EAX), 0x101663f2u);
  /* 101663f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101663f5 mov esi, eax */
  ESI = (EAX);
  /* 101663f7 jmp 0x101663fb */
  goto L_101663fb;
L_101663f9:;
  /* 101663f9 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_101663fb:;
  /* 101663fb push 3 */
  push32((uint32_t)(0x3u));
  /* 101663fd call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10166403u);
  /* 10166403 mov edi, eax */
  EDI = (EAX);
  /* 10166405 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 10166408 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016640b lea ecx, [esi + eax*2] */
  ECX = ((uint32_t)(ESI + EAX*2));
  /* 1016640e mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10166413 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10166415 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10166418 mov ecx, edx */
  ECX = (EDX);
  /* 1016641a shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 1016641d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016641f cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10166421 jge 0x10166429 */
  if ((C.sf==C.of)) goto L_10166429;
  /* 10166423 push 9 */
  push32((uint32_t)(0x9u));
  /* 10166425 push 2 */
  push32((uint32_t)(0x2u));
  /* 10166427 jmp 0x1016642d */
  goto L_1016642d;
L_10166429:;
  /* 10166429 push 6 */
  push32((uint32_t)(0x6u));
  /* 1016642b push 6 */
  push32((uint32_t)(0x6u));
L_1016642d:;
  /* 1016642d push 9 */
  push32((uint32_t)(0x9u));
  /* 1016642f call dword ptr [0x10176574] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176574))), 0x10166435u);
  /* 10166435 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10166438:;
  /* 10166438 push 0x101761b0 */
  push32((uint32_t)(0x101761b0u));
  /* 1016643d call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x10166443u);
  /* 10166443 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166446 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10166448 jne 0x101664af */
  if (!C.zf) goto L_101664af;
  /* 1016644a mov eax, dword ptr [0x1017651c] */
  EAX = (r32((uint32_t)(0x1017651c)));
  /* 1016644f mov dl, byte ptr [0x10176314] */
  DL = (r8((uint32_t)(0x10176314)));
  /* 10166455 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10166457 mov byte ptr [esp + 8], dl */
  w8((uint32_t)(ESP + 0x8), (DL));
  /* 1016645b je 0x10166472 */
  if (C.zf) goto L_10166472;
  /* 1016645d mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10166461 push 3 */
  push32((uint32_t)(0x3u));
  /* 10166463 push 0x101761b0 */
  push32((uint32_t)(0x101761b0u));
  /* 10166468 push ecx */
  push32((uint32_t)(ECX));
  /* 10166469 call eax */
  call_ind((uint32_t)(EAX), 0x1016646bu);
  /* 1016646b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016646e mov esi, eax */
  ESI = (EAX);
  /* 10166470 jmp 0x10166474 */
  goto L_10166474;
L_10166472:;
  /* 10166472 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10166474:;
  /* 10166474 push 3 */
  push32((uint32_t)(0x3u));
  /* 10166476 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x1016647cu);
  /* 1016647c lea edx, [esi + esi*2] */
  EDX = ((uint32_t)(ESI + ESI*2));
  /* 1016647f mov edi, eax */
  EDI = (EAX);
  /* 10166481 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10166486 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166489 lea ecx, [esi + edx*4] */
  ECX = ((uint32_t)(ESI + EDX*4));
  /* 1016648c imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1016648e sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10166491 mov eax, edx */
  EAX = (EDX);
  /* 10166493 push 1 */
  push32((uint32_t)(0x1u));
  /* 10166495 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 10166498 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016649a push 9 */
  push32((uint32_t)(0x9u));
  /* 1016649c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016649e jge 0x101664a4 */
  if ((C.sf==C.of)) goto L_101664a4;
  /* 101664a0 push 9 */
  push32((uint32_t)(0x9u));
  /* 101664a2 jmp 0x101664a6 */
  goto L_101664a6;
L_101664a4:;
  /* 101664a4 push 6 */
  push32((uint32_t)(0x6u));
L_101664a6:;
  /* 101664a6 call dword ptr [0x10176574] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176574))), 0x101664acu);
  /* 101664ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101664af:;
  /* 101664af push 0x101763a0 */
  push32((uint32_t)(0x101763a0u));
  /* 101664b4 call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x101664bau);
  /* 101664ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101664bd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101664bf je 0x101664d3 */
  if (C.zf) goto L_101664d3;
  /* 101664c1 push 0x101762e8 */
  push32((uint32_t)(0x101762e8u));
  /* 101664c6 call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x101664ccu);
  /* 101664cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101664cf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101664d1 jne 0x101664f4 */
  if (!C.zf) goto L_101664f4;
L_101664d3:;
  /* 101664d3 push 3 */
  push32((uint32_t)(0x3u));
  /* 101664d5 call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x101664dbu);
  /* 101664db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101664de cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101664e3 jge 0x101664f4 */
  if ((C.sf==C.of)) goto L_101664f4;
  /* 101664e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 101664e7 push 4 */
  push32((uint32_t)(0x4u));
  /* 101664e9 push 9 */
  push32((uint32_t)(0x9u));
  /* 101664eb call dword ptr [0x10176574] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176574))), 0x101664f1u);
  /* 101664f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101664f4:;
  /* 101664f4 push 0x10176048 */
  push32((uint32_t)(0x10176048u));
  /* 101664f9 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x101664ffu);
  /* 101664ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166502 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10166504 jne 0x10166577 */
  if (!C.zf) goto L_10166577;
  /* 10166506 call 0x10162780 */
  push32(0x1016650bu); f_10162780();
  /* 1016650b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016650e jge 0x10166577 */
  if ((C.sf==C.of)) goto L_10166577;
  /* 10166510 mov eax, dword ptr [0x10176518] */
  EAX = (r32((uint32_t)(0x10176518)));
  /* 10166515 mov cl, byte ptr [0x10176314] */
  CL = (r8((uint32_t)(0x10176314)));
  /* 1016651b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016651d mov byte ptr [esp + 8], cl */
  w8((uint32_t)(ESP + 0x8), (CL));
  /* 10166521 je 0x10166538 */
  if (C.zf) goto L_10166538;
  /* 10166523 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10166527 push 2 */
  push32((uint32_t)(0x2u));
  /* 10166529 push 0x10176048 */
  push32((uint32_t)(0x10176048u));
  /* 1016652e push edx */
  push32((uint32_t)(EDX));
  /* 1016652f call eax */
  call_ind((uint32_t)(EAX), 0x10166531u);
  /* 10166531 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166534 mov esi, eax */
  ESI = (EAX);
  /* 10166536 jmp 0x1016653a */
  goto L_1016653a;
L_10166538:;
  /* 10166538 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1016653a:;
  /* 1016653a push 2 */
  push32((uint32_t)(0x2u));
  /* 1016653c call dword ptr [0x1017659c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017659c))), 0x10166542u);
  /* 10166542 mov edi, eax */
  EDI = (EAX);
  /* 10166544 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 10166547 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016654a lea ecx, [esi + eax*2] */
  ECX = ((uint32_t)(ESI + EAX*2));
  /* 1016654d mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10166552 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10166554 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10166557 mov ecx, edx */
  ECX = (EDX);
  /* 10166559 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 1016655c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016655e cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10166560 jge 0x10166568 */
  if ((C.sf==C.of)) goto L_10166568;
  /* 10166562 push 3 */
  push32((uint32_t)(0x3u));
  /* 10166564 push 5 */
  push32((uint32_t)(0x5u));
  /* 10166566 jmp 0x1016656c */
  goto L_1016656c;
L_10166568:;
  /* 10166568 push 1 */
  push32((uint32_t)(0x1u));
  /* 1016656a push 7 */
  push32((uint32_t)(0x7u));
L_1016656c:;
  /* 1016656c push 9 */
  push32((uint32_t)(0x9u));
  /* 1016656e call dword ptr [0x10176574] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176574))), 0x10166574u);
  /* 10166574 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10166577:;
  /* 10166577 push 0x101762d0 */
  push32((uint32_t)(0x101762d0u));
  /* 1016657c call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x10166582u);
  /* 10166582 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166585 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10166587 pop edi */
  EDI = (pop32());
  /* 10166588 pop esi */
  ESI = (pop32());
  /* 10166589 jne 0x1016659a */
  if (!C.zf) goto L_1016659a;
  /* 1016658b push 1 */
  push32((uint32_t)(0x1u));
  /* 1016658d push 1 */
  push32((uint32_t)(0x1u));
  /* 1016658f push 9 */
  push32((uint32_t)(0x9u));
  /* 10166591 call dword ptr [0x10176574] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176574))), 0x10166597u);
  /* 10166597 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1016659a:;
  /* 1016659a push 0x101760d8 */
  push32((uint32_t)(0x101760d8u));
  /* 1016659f call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x101665a5u);
  /* 101665a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101665a8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101665aa je 0x101665be */
  if (C.zf) goto L_101665be;
  /* 101665ac push 0x101736c0 */
  push32((uint32_t)(0x101736c0u));
  /* 101665b1 call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x101665b7u);
  /* 101665b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101665ba test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101665bc jne 0x101665cd */
  if (!C.zf) goto L_101665cd;
L_101665be:;
  /* 101665be push 1 */
  push32((uint32_t)(0x1u));
  /* 101665c0 push 4 */
  push32((uint32_t)(0x4u));
  /* 101665c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 101665c4 call dword ptr [0x10176574] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176574))), 0x101665cau);
  /* 101665ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101665cd:;
  /* 101665cd push 0x10175f80 */
  push32((uint32_t)(0x10175f80u));
  /* 101665d2 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x101665d8u);
  /* 101665d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101665db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101665dd jne 0x101665ee */
  if (!C.zf) goto L_101665ee;
  /* 101665df push 4 */
  push32((uint32_t)(0x4u));
  /* 101665e1 push 4 */
  push32((uint32_t)(0x4u));
  /* 101665e3 push 6 */
  push32((uint32_t)(0x6u));
  /* 101665e5 call dword ptr [0x10176574] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176574))), 0x101665ebu);
  /* 101665eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101665ee:;
  /* 101665ee push 0x101763d8 */
  push32((uint32_t)(0x101763d8u));
  /* 101665f3 call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x101665f9u);
  /* 101665f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101665fc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101665fe jne 0x10166620 */
  if (!C.zf) goto L_10166620;
  /* 10166600 push 1 */
  push32((uint32_t)(0x1u));
  /* 10166602 push 1 */
  push32((uint32_t)(0x1u));
  /* 10166604 push 9 */
  push32((uint32_t)(0x9u));
  /* 10166606 call dword ptr [0x10176574] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176574))), 0x1016660cu);
  /* 1016660c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016660f pop ecx */
  ECX = (pop32());
  /* 10166610 ret  */
  ESPCHK(0x101662f0u, _esp0);
  ESP += 4; return;
L_10166611:;
  /* 10166611 push 3 */
  push32((uint32_t)(0x3u));
  /* 10166613 push 6 */
  push32((uint32_t)(0x6u));
  /* 10166615 push 0 */
  push32((uint32_t)(0x0u));
  /* 10166617 call dword ptr [0x10176574] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176574))), 0x1016661du);
  /* 1016661d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10166620:;
  /* 10166620 pop ecx */
  ECX = (pop32());
  /* 10166621 ret  */
  ESPCHK(0x101662f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006630 @ 0x10166630 (174 bytes, 50 insns) */
void f_10166630(void) {
  FTRACE(0x10166630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10166630 push 0x101765f8 */
  push32((uint32_t)(0x101765f8u));
  /* 10166635 call 0x10162720 */
  push32(0x1016663au); f_10162720();
  /* 1016663a push 0x101763a0 */
  push32((uint32_t)(0x101763a0u));
  /* 1016663f call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x10166645u);
  /* 10166645 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166648 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1016664a je 0x1016666c */
  if (C.zf) goto L_1016666c;
  /* 1016664c push 0x101762e8 */
  push32((uint32_t)(0x101762e8u));
  /* 10166651 call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x10166657u);
  /* 10166657 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016665a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1016665c je 0x1016666c */
  if (C.zf) goto L_1016666c;
  /* 1016665e push 0x1016f16c */
  push32((uint32_t)(0x1016f16cu));
  /* 10166663 call 0x10162720 */
  push32(0x10166668u); f_10162720();
  /* 10166668 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016666b ret  */
  ESPCHK(0x10166630u, _esp0);
  ESP += 4; return;
L_1016666c:;
  /* 1016666c mov eax, dword ptr [0x10175fb8] */
  EAX = (r32((uint32_t)(0x10175fb8)));
  /* 10166671 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10166674 je 0x101666d2 */
  if (C.zf) goto L_101666d2;
  /* 10166676 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10166679 je 0x101666d2 */
  if (C.zf) goto L_101666d2;
  /* 1016667b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016667e je 0x101666d2 */
  if (C.zf) goto L_101666d2;
  /* 10166680 push 0x101762d0 */
  push32((uint32_t)(0x101762d0u));
  /* 10166685 call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x1016668bu);
  /* 1016668b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016668e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10166690 je 0x101666b2 */
  if (C.zf) goto L_101666b2;
  /* 10166692 push 0x101761b0 */
  push32((uint32_t)(0x101761b0u));
  /* 10166697 call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x1016669du);
  /* 1016669d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101666a0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101666a2 jne 0x101666b2 */
  if (!C.zf) goto L_101666b2;
  /* 101666a4 push 0x101765f8 */
  push32((uint32_t)(0x101765f8u));
  /* 101666a9 call 0x10162720 */
  push32(0x101666aeu); f_10162720();
  /* 101666ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101666b1 ret  */
  ESPCHK(0x10166630u, _esp0);
  ESP += 4; return;
L_101666b2:;
  /* 101666b2 push 0x101761b0 */
  push32((uint32_t)(0x101761b0u));
  /* 101666b7 call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x101666bdu);
  /* 101666bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101666c0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101666c2 je 0x101666dd */
  if (C.zf) goto L_101666dd;
  /* 101666c4 push 0x1016f1d8 */
  push32((uint32_t)(0x1016f1d8u));
  /* 101666c9 call 0x10162720 */
  push32(0x101666ceu); f_10162720();
  /* 101666ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101666d1 ret  */
  ESPCHK(0x10166630u, _esp0);
  ESP += 4; return;
L_101666d2:;
  /* 101666d2 push 0x1016f1d8 */
  push32((uint32_t)(0x1016f1d8u));
  /* 101666d7 call 0x10162720 */
  push32(0x101666dcu); f_10162720();
  /* 101666dc pop ecx */
  ECX = (pop32());
L_101666dd:;
  /* 101666dd ret  */
  ESPCHK(0x10166630u, _esp0);
  ESP += 4; return;
}

/* FUN_100066e0 @ 0x101666e0 (70 bytes, 22 insns) */
void f_101666e0(void) {
  FTRACE(0x101666e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101666e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 101666e2 call 0x10162760 */
  push32(0x101666e7u); f_10162760();
  /* 101666e7 push 0x101736e8 */
  push32((uint32_t)(0x101736e8u));
  /* 101666ec call 0x10165270 */
  push32(0x101666f1u); f_10165270();
  /* 101666f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101666f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101666f6 je 0x10166702 */
  if (C.zf) goto L_10166702;
  /* 101666f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 101666fa call 0x10162760 */
  push32(0x101666ffu); f_10162760();
  /* 101666ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10166702:;
  /* 10166702 call 0x10162770 */
  push32(0x10166707u); f_10162770();
  /* 10166707 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10166709 jg 0x1016671d */
  if ((!C.zf&&C.sf==C.of)) goto L_1016671d;
  /* 1016670b push 0x10173938 */
  push32((uint32_t)(0x10173938u));
  /* 10166710 call dword ptr [0x101765a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a4))), 0x10166716u);
  /* 10166716 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166719 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016671b jle 0x10166725 */
  if ((C.zf||C.sf!=C.of)) goto L_10166725;
L_1016671d:;
  /* 1016671d push 0 */
  push32((uint32_t)(0x0u));
  /* 1016671f call 0x10162760 */
  push32(0x10166724u); f_10162760();
  /* 10166724 pop ecx */
  ECX = (pop32());
L_10166725:;
  /* 10166725 ret  */
  ESPCHK(0x101666e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006730 @ 0x10166730 (235 bytes, 66 insns) */
void f_10166730(void) {
  FTRACE(0x10166730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10166730 push 0x101761f8 */
  push32((uint32_t)(0x101761f8u));
  /* 10166735 call dword ptr [0x101765ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765ac))), 0x1016673bu);
  /* 1016673b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016673e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10166740 je 0x10166756 */
  if (C.zf) goto L_10166756;
  /* 10166742 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10166744 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10166746 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10166748 push 0x101763d0 */
  push32((uint32_t)(0x101763d0u));
  /* 1016674d call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10166753u);
  /* 10166753 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10166756:;
  /* 10166756 push 0x10176110 */
  push32((uint32_t)(0x10176110u));
  /* 1016675b call dword ptr [0x101765ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765ac))), 0x10166761u);
  /* 10166761 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166764 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10166766 je 0x1016677c */
  if (C.zf) goto L_1016677c;
  /* 10166768 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1016676a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1016676c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1016676e push 0x101736c8 */
  push32((uint32_t)(0x101736c8u));
  /* 10166773 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10166779u);
  /* 10166779 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1016677c:;
  /* 1016677c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1016677e push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10166780 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10166782 push 0x10173928 */
  push32((uint32_t)(0x10173928u));
  /* 10166787 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x1016678du);
  /* 1016678d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1016678f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10166791 push 0x10176238 */
  push32((uint32_t)(0x10176238u));
  /* 10166796 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016679cu);
  /* 1016679c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1016679e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101667a0 push 0x10176230 */
  push32((uint32_t)(0x10176230u));
  /* 101667a5 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101667abu);
  /* 101667ab push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101667ad push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101667af push 0x10176200 */
  push32((uint32_t)(0x10176200u));
  /* 101667b4 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101667bau);
  /* 101667ba push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101667bc push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101667be push 0x101761f8 */
  push32((uint32_t)(0x101761f8u));
  /* 101667c3 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101667c9u);
  /* 101667c9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101667cc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101667ce push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101667d0 push 0x10176208 */
  push32((uint32_t)(0x10176208u));
  /* 101667d5 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101667dbu);
  /* 101667db push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101667dd push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101667df push 0x101760f8 */
  push32((uint32_t)(0x101760f8u));
  /* 101667e4 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101667eau);
  /* 101667ea push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101667ec push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101667ee push 0x10176100 */
  push32((uint32_t)(0x10176100u));
  /* 101667f3 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101667f9u);
  /* 101667f9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101667fb push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101667fd push 0x10176108 */
  push32((uint32_t)(0x10176108u));
  /* 10166802 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10166808u);
  /* 10166808 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1016680a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1016680c push 0x10176110 */
  push32((uint32_t)(0x10176110u));
  /* 10166811 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x10166817u);
  /* 10166817 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016681a ret  */
  ESPCHK(0x10166730u, _esp0);
  ESP += 4; return;
}

/* FUN_10006820 @ 0x10166820 (303 bytes, 90 insns) */
void f_10166820(void) {
  FTRACE(0x10166820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10166820 push ecx */
  push32((uint32_t)(ECX));
  /* 10166821 push ebx */
  push32((uint32_t)(EBX));
  /* 10166822 push ebp */
  push32((uint32_t)(EBP));
  /* 10166823 push esi */
  push32((uint32_t)(ESI));
  /* 10166824 push edi */
  push32((uint32_t)(EDI));
  /* 10166825 push 0x10173938 */
  push32((uint32_t)(0x10173938u));
  /* 1016682a call dword ptr [0x101765a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a4))), 0x10166830u);
  /* 10166830 push 0x101762b0 */
  push32((uint32_t)(0x101762b0u));
  /* 10166835 mov ebx, eax */
  EBX = (EAX);
  /* 10166837 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x1016683du);
  /* 1016683d push 0x101762b0 */
  push32((uint32_t)(0x101762b0u));
  /* 10166842 mov edi, eax */
  EDI = (EAX);
  /* 10166844 call dword ptr [0x101765a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a4))), 0x1016684au);
  /* 1016684a push 0x10175f80 */
  push32((uint32_t)(0x10175f80u));
  /* 1016684f mov ebp, eax */
  EBP = (EAX);
  /* 10166851 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10166857u);
  /* 10166857 push 0x10175f80 */
  push32((uint32_t)(0x10175f80u));
  /* 1016685c mov esi, eax */
  ESI = (EAX);
  /* 1016685e call dword ptr [0x101765a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a4))), 0x10166864u);
  /* 10166864 push 0x10173938 */
  push32((uint32_t)(0x10173938u));
  /* 10166869 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 1016686d call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10166873u);
  /* 10166873 mov edx, dword ptr [esp + 0x28] */
  EDX = (r32((uint32_t)(ESP + 0x28)));
  /* 10166877 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016687a sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016687c add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1016687e sub esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10166880 sub esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10166882 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10166884 pop edi */
  EDI = (pop32());
  /* 10166885 pop esi */
  ESI = (pop32());
  /* 10166886 pop ebp */
  EBP = (pop32());
  /* 10166887 pop ebx */
  EBX = (pop32());
  /* 10166888 jne 0x101668f0 */
  if (!C.zf) goto L_101668f0;
  /* 1016688a cmp dword ptr [0x10176210], 0x28 */
  { uint32_t _a=(r32((uint32_t)(0x10176210))),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10166891 jle 0x101668f0 */
  if ((C.zf||C.sf!=C.of)) goto L_101668f0;
  /* 10166893 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10166895 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10166897 push 4 */
  push32((uint32_t)(0x4u));
  /* 10166899 push 0x10173938 */
  push32((uint32_t)(0x10173938u));
  /* 1016689e call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x101668a4u);
  /* 101668a4 push 0x10176218 */
  push32((uint32_t)(0x10176218u));
  /* 101668a9 call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x101668afu);
  /* 101668af add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101668b2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101668b4 je 0x101668ca */
  if (C.zf) goto L_101668ca;
  /* 101668b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101668b8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101668ba push 6 */
  push32((uint32_t)(0x6u));
  /* 101668bc push 0x10173938 */
  push32((uint32_t)(0x10173938u));
  /* 101668c1 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x101668c7u);
  /* 101668c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101668ca:;
  /* 101668ca push 0x10176080 */
  push32((uint32_t)(0x10176080u));
  /* 101668cf call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x101668d5u);
  /* 101668d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101668d8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101668da je 0x101668f0 */
  if (C.zf) goto L_101668f0;
  /* 101668dc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101668de push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101668e0 push 8 */
  push32((uint32_t)(0x8u));
  /* 101668e2 push 0x10173938 */
  push32((uint32_t)(0x10173938u));
  /* 101668e7 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x101668edu);
  /* 101668ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101668f0:;
  /* 101668f0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101668f2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101668f4 push 0x10176348 */
  push32((uint32_t)(0x10176348u));
  /* 101668f9 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x101668ffu);
  /* 101668ff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10166901 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10166903 push 0x10176330 */
  push32((uint32_t)(0x10176330u));
  /* 10166908 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016690eu);
  /* 1016690e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10166910 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10166912 push 0x10176340 */
  push32((uint32_t)(0x10176340u));
  /* 10166917 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016691du);
  /* 1016691d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1016691f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10166921 push 0x10176320 */
  push32((uint32_t)(0x10176320u));
  /* 10166926 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016692cu);
  /* 1016692c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1016692e push 0xf */
  push32((uint32_t)(0xfu));
  /* 10166930 push 0x10176328 */
  push32((uint32_t)(0x10176328u));
  /* 10166935 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016693bu);
  /* 1016693b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1016693d push 0xa */
  push32((uint32_t)(0xau));
  /* 1016693f push 0x10176318 */
  push32((uint32_t)(0x10176318u));
  /* 10166944 call dword ptr [0x10176568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176568))), 0x1016694au);
  /* 1016694a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016694d pop ecx */
  ECX = (pop32());
  /* 1016694e ret  */
  ESPCHK(0x10166820u, _esp0);
  ESP += 4; return;
}

/* FUN_10006950 @ 0x10166950 (517 bytes, 145 insns) */
void f_10166950(void) {
  FTRACE(0x10166950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10166950 push esi */
  push32((uint32_t)(ESI));
  /* 10166951 push 0x101762b8 */
  push32((uint32_t)(0x101762b8u));
  /* 10166956 call dword ptr [0x101765a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a4))), 0x1016695cu);
  /* 1016695c push 0x101762b8 */
  push32((uint32_t)(0x101762b8u));
  /* 10166961 mov esi, eax */
  ESI = (EAX);
  /* 10166963 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10166969u);
  /* 10166969 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016696c sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016696e jne 0x10166984 */
  if (!C.zf) goto L_10166984;
  /* 10166970 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10166972 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10166974 push 5 */
  push32((uint32_t)(0x5u));
  /* 10166976 push 0x101762b8 */
  push32((uint32_t)(0x101762b8u));
  /* 1016697b call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10166981u);
  /* 10166981 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10166984:;
  /* 10166984 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10166986 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10166988 push 1 */
  push32((uint32_t)(0x1u));
  /* 1016698a push 0x10176018 */
  push32((uint32_t)(0x10176018u));
  /* 1016698f call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10166995u);
  /* 10166995 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10166997 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10166999 push 1 */
  push32((uint32_t)(0x1u));
  /* 1016699b push 0x10176248 */
  push32((uint32_t)(0x10176248u));
  /* 101669a0 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x101669a6u);
  /* 101669a6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101669a8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101669aa push 2 */
  push32((uint32_t)(0x2u));
  /* 101669ac push 0x101762b0 */
  push32((uint32_t)(0x101762b0u));
  /* 101669b1 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x101669b7u);
  /* 101669b7 push 0x101762b0 */
  push32((uint32_t)(0x101762b0u));
  /* 101669bc call dword ptr [0x101765a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a4))), 0x101669c2u);
  /* 101669c2 push 0x101762b0 */
  push32((uint32_t)(0x101762b0u));
  /* 101669c7 mov esi, eax */
  ESI = (EAX);
  /* 101669c9 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x101669cfu);
  /* 101669cf add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101669d2 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101669d4 jne 0x10166b53 */
  if (!C.zf) goto L_10166b53;
  /* 101669da push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101669dc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101669de push 1 */
  push32((uint32_t)(0x1u));
  /* 101669e0 push 0x10175f80 */
  push32((uint32_t)(0x10175f80u));
  /* 101669e5 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x101669ebu);
  /* 101669eb push 0x10175f80 */
  push32((uint32_t)(0x10175f80u));
  /* 101669f0 call dword ptr [0x101765a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a4))), 0x101669f6u);
  /* 101669f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101669f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101669fb je 0x10166b53 */
  if (C.zf) goto L_10166b53;
  /* 10166a01 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10166a03 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10166a05 push 1 */
  push32((uint32_t)(0x1u));
  /* 10166a07 push 0x10176030 */
  push32((uint32_t)(0x10176030u));
  /* 10166a0c call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10166a12u);
  /* 10166a12 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10166a14 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10166a16 push 1 */
  push32((uint32_t)(0x1u));
  /* 10166a18 push 0x10176038 */
  push32((uint32_t)(0x10176038u));
  /* 10166a1d call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10166a23u);
  /* 10166a23 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10166a25 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10166a27 push 1 */
  push32((uint32_t)(0x1u));
  /* 10166a29 push 0x101738d8 */
  push32((uint32_t)(0x101738d8u));
  /* 10166a2e call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10166a34u);
  /* 10166a34 push 0x101738d8 */
  push32((uint32_t)(0x101738d8u));
  /* 10166a39 call dword ptr [0x101765a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a4))), 0x10166a3fu);
  /* 10166a3f add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166a42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10166a44 je 0x10166b53 */
  if (C.zf) goto L_10166b53;
  /* 10166a4a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10166a4c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10166a4e push 1 */
  push32((uint32_t)(0x1u));
  /* 10166a50 push 0x10176048 */
  push32((uint32_t)(0x10176048u));
  /* 10166a55 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10166a5bu);
  /* 10166a5b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10166a5d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10166a5f push 1 */
  push32((uint32_t)(0x1u));
  /* 10166a61 push 0x10176158 */
  push32((uint32_t)(0x10176158u));
  /* 10166a66 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10166a6cu);
  /* 10166a6c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10166a6e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10166a70 push 1 */
  push32((uint32_t)(0x1u));
  /* 10166a72 push 0x10173678 */
  push32((uint32_t)(0x10173678u));
  /* 10166a77 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10166a7du);
  /* 10166a7d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10166a7f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10166a81 push 1 */
  push32((uint32_t)(0x1u));
  /* 10166a83 push 0x10176138 */
  push32((uint32_t)(0x10176138u));
  /* 10166a88 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10166a8eu);
  /* 10166a8e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166a91 push 0x10176080 */
  push32((uint32_t)(0x10176080u));
  /* 10166a96 call dword ptr [0x101765b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765b0))), 0x10166a9cu);
  /* 10166a9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166a9f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10166aa1 je 0x10166b53 */
  if (C.zf) goto L_10166b53;
  /* 10166aa7 push 0x10176018 */
  push32((uint32_t)(0x10176018u));
  /* 10166aac call dword ptr [0x101765a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a4))), 0x10166ab2u);
  /* 10166ab2 push 0x10176018 */
  push32((uint32_t)(0x10176018u));
  /* 10166ab7 mov esi, eax */
  ESI = (EAX);
  /* 10166ab9 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10166abfu);
  /* 10166abf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166ac2 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10166ac4 jne 0x10166aed */
  if (!C.zf) goto L_10166aed;
  /* 10166ac6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10166ac8 call 0x10162730 */
  push32(0x10166acdu); f_10162730();
  /* 10166acd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166ad0 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10166ad3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10166ad5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10166ad7 jge 0x10166add */
  if ((C.sf==C.of)) goto L_10166add;
  /* 10166ad9 push 6 */
  push32((uint32_t)(0x6u));
  /* 10166adb jmp 0x10166adf */
  goto L_10166adf;
L_10166add:;
  /* 10166add push 4 */
  push32((uint32_t)(0x4u));
L_10166adf:;
  /* 10166adf push 0x10176018 */
  push32((uint32_t)(0x10176018u));
  /* 10166ae4 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10166aeau);
  /* 10166aea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10166aed:;
  /* 10166aed push 0x10176138 */
  push32((uint32_t)(0x10176138u));
  /* 10166af2 call dword ptr [0x101765a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a4))), 0x10166af8u);
  /* 10166af8 push 0x10176138 */
  push32((uint32_t)(0x10176138u));
  /* 10166afd mov esi, eax */
  ESI = (EAX);
  /* 10166aff call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10166b05u);
  /* 10166b05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166b08 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10166b0a jne 0x10166b20 */
  if (!C.zf) goto L_10166b20;
  /* 10166b0c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10166b0e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10166b10 push 7 */
  push32((uint32_t)(0x7u));
  /* 10166b12 push 0x10176138 */
  push32((uint32_t)(0x10176138u));
  /* 10166b17 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10166b1du);
  /* 10166b1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10166b20:;
  /* 10166b20 push 0x10173678 */
  push32((uint32_t)(0x10173678u));
  /* 10166b25 call dword ptr [0x101765a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a4))), 0x10166b2bu);
  /* 10166b2b push 0x10173678 */
  push32((uint32_t)(0x10173678u));
  /* 10166b30 mov esi, eax */
  ESI = (EAX);
  /* 10166b32 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10166b38u);
  /* 10166b38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166b3b sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10166b3d jne 0x10166b53 */
  if (!C.zf) goto L_10166b53;
  /* 10166b3f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10166b41 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10166b43 push 3 */
  push32((uint32_t)(0x3u));
  /* 10166b45 push 0x10173678 */
  push32((uint32_t)(0x10173678u));
  /* 10166b4a call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10166b50u);
  /* 10166b50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10166b53:;
  /* 10166b53 pop esi */
  ESI = (pop32());
  /* 10166b54 ret  */
  ESPCHK(0x10166950u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b60 @ 0x10166b60 (121 bytes, 36 insns) */
void f_10166b60(void) {
  FTRACE(0x10166b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10166b60 push 1 */
  push32((uint32_t)(0x1u));
  /* 10166b62 call 0x10162760 */
  push32(0x10166b67u); f_10162760();
  /* 10166b67 push 0x101738e8 */
  push32((uint32_t)(0x101738e8u));
  /* 10166b6c call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10166b72u);
  /* 10166b72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166b75 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10166b78 jge 0x10166b8d */
  if ((C.sf==C.of)) goto L_10166b8d;
  /* 10166b7a mov eax, dword ptr [0x10176314] */
  EAX = (r32((uint32_t)(0x10176314)));
  /* 10166b7f push 0 */
  push32((uint32_t)(0x0u));
  /* 10166b81 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10166b84 push eax */
  push32((uint32_t)(EAX));
  /* 10166b85 call 0x101626d0 */
  push32(0x10166b8au); f_101626d0();
  /* 10166b8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10166b8d:;
  /* 10166b8d push 0x101738e8 */
  push32((uint32_t)(0x101738e8u));
  /* 10166b92 call dword ptr [0x101765a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765a0))), 0x10166b98u);
  /* 10166b98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166b9b cmp eax, 0x5f */
  { uint32_t _a=(EAX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10166b9e jle 0x10166bb4 */
  if ((C.zf||C.sf!=C.of)) goto L_10166bb4;
  /* 10166ba0 mov ecx, dword ptr [0x10176314] */
  ECX = (r32((uint32_t)(0x10176314)));
  /* 10166ba6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10166ba8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10166bab push ecx */
  push32((uint32_t)(ECX));
  /* 10166bac call 0x101626d0 */
  push32(0x10166bb1u); f_101626d0();
  /* 10166bb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10166bb4:;
  /* 10166bb4 mov edx, dword ptr [0x10176314] */
  EDX = (r32((uint32_t)(0x10176314)));
  /* 10166bba add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10166bbd push edx */
  push32((uint32_t)(EDX));
  /* 10166bbe call 0x101626f0 */
  push32(0x10166bc3u); f_101626f0();
  /* 10166bc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10166bc5 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10166bc8 push eax */
  push32((uint32_t)(EAX));
  /* 10166bc9 call 0x10162760 */
  push32(0x10166bceu); f_10162760();
  /* 10166bce push 0 */
  push32((uint32_t)(0x0u));
  /* 10166bd0 call 0x10162760 */
  push32(0x10166bd5u); f_10162760();
  /* 10166bd5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166bd8 ret  */
  ESPCHK(0x10166b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006be0 @ 0x10166be0 (86 bytes, 20 insns) */
void f_10166be0(void) {
  FTRACE(0x10166be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10166be0 mov eax, dword ptr [0x10176314] */
  EAX = (r32((uint32_t)(0x10176314)));
  /* 10166be5 mov ecx, dword ptr [eax*4 + 0x10175ff8] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10175ff8)));
  /* 10166bec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10166bee je 0x10166bf5 */
  if (C.zf) goto L_10166bf5;
  /* 10166bf0 call 0x101666e0 */
  push32(0x10166bf5u); f_101666e0();
L_10166bf5:;
  /* 10166bf5 call 0x10165df0 */
  push32(0x10166bfau); f_10165df0();
  /* 10166bfa call 0x10166730 */
  push32(0x10166bffu); f_10166730();
  /* 10166bff call 0x10162780 */
  push32(0x10166c04u); f_10162780();
  /* 10166c04 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10166c07 jge 0x10166c0e */
  if ((C.sf==C.of)) goto L_10166c0e;
  /* 10166c09 call 0x10166820 */
  push32(0x10166c0eu); f_10166820();
L_10166c0e:;
  /* 10166c0e call 0x10165bd0 */
  push32(0x10166c13u); f_10165bd0();
  /* 10166c13 call 0x10165a90 */
  push32(0x10166c18u); f_10165a90();
  /* 10166c18 call 0x10162780 */
  push32(0x10166c1du); f_10162780();
  /* 10166c1d cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10166c20 jge 0x10166c27 */
  if ((C.sf==C.of)) goto L_10166c27;
  /* 10166c22 call 0x101652b0 */
  push32(0x10166c27u); f_101652b0();
L_10166c27:;
  /* 10166c27 call 0x10165fd0 */
  push32(0x10166c2cu); f_10165fd0();
  /* 10166c2c call 0x101662f0 */
  push32(0x10166c31u); f_101662f0();
  /* 10166c31 jmp 0x10166630 */
  f_10166630(); return;
}

/* FUN_10006c40 @ 0x10166c40 (247 bytes, 70 insns) */
void f_10166c40(void) {
  FTRACE(0x10166c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10166c40 push esi */
  push32((uint32_t)(ESI));
  /* 10166c41 push edi */
  push32((uint32_t)(EDI));
  /* 10166c42 call 0x10166b60 */
  push32(0x10166c47u); f_10166b60();
  /* 10166c47 call 0x10166950 */
  push32(0x10166c4cu); f_10166950();
  /* 10166c4c mov edi, 2 */
  EDI = (0x2u);
L_10166c51:;
  /* 10166c51 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10166c53 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10166c55 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10166c5a push 0x101761f0 */
  push32((uint32_t)(0x101761f0u));
  /* 10166c5f call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10166c65u);
  /* 10166c65 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10166c67 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10166c69 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10166c6e push 0x101736e8 */
  push32((uint32_t)(0x101736e8u));
  /* 10166c73 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10166c79u);
  /* 10166c79 mov eax, dword ptr [0x10176314] */
  EAX = (r32((uint32_t)(0x10176314)));
  /* 10166c7e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10166c81 push eax */
  push32((uint32_t)(EAX));
  /* 10166c82 call 0x101626f0 */
  push32(0x10166c87u); f_101626f0();
  /* 10166c87 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166c8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10166c8c jne 0x10166cac */
  if (!C.zf) goto L_10166cac;
  /* 10166c8e mov esi, 0x64 */
  ESI = (0x64u);
L_10166c93:;
  /* 10166c93 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10166c95 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10166c97 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 10166c99 push 0x101738e8 */
  push32((uint32_t)(0x101738e8u));
  /* 10166c9e call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10166ca4u);
  /* 10166ca4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166ca7 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10166ca8 jne 0x10166c93 */
  if (!C.zf) goto L_10166c93;
  /* 10166caa jmp 0x10166cc0 */
  goto L_10166cc0;
L_10166cac:;
  /* 10166cac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10166cae push 0xa */
  push32((uint32_t)(0xau));
  /* 10166cb0 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10166cb2 push 0x101761c0 */
  push32((uint32_t)(0x101761c0u));
  /* 10166cb7 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10166cbdu);
  /* 10166cbd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10166cc0:;
  /* 10166cc0 push 0x10176080 */
  push32((uint32_t)(0x10176080u));
  /* 10166cc5 call dword ptr [0x101765ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x101765ac))), 0x10166ccbu);
  /* 10166ccb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166cce test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10166cd0 jne 0x10166ce9 */
  if (!C.zf) goto L_10166ce9;
  /* 10166cd2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10166cd4 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10166cd6 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10166cdb push 0x101736f0 */
  push32((uint32_t)(0x101736f0u));
  /* 10166ce0 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10166ce6u);
  /* 10166ce6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10166ce9:;
  /* 10166ce9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10166ceb push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10166ced push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10166cf2 push 0x101736e0 */
  push32((uint32_t)(0x101736e0u));
  /* 10166cf7 call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10166cfdu);
  /* 10166cfd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10166cff push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10166d01 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10166d06 push 0x10175fe0 */
  push32((uint32_t)(0x10175fe0u));
  /* 10166d0b call dword ptr [0x10176564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176564))), 0x10166d11u);
  /* 10166d11 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166d14 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10166d15 jne 0x10166c51 */
  if (!C.zf) goto L_10166c51;
  /* 10166d1b call 0x10166730 */
  push32(0x10166d20u); f_10166730();
  /* 10166d20 call 0x10165fd0 */
  push32(0x10166d25u); f_10165fd0();
  /* 10166d25 call 0x101662f0 */
  push32(0x10166d2au); f_101662f0();
  /* 10166d2a call 0x101652b0 */
  push32(0x10166d2fu); f_101652b0();
  /* 10166d2f call 0x10165a90 */
  push32(0x10166d34u); f_10165a90();
  /* 10166d34 pop edi */
  EDI = (pop32());
  /* 10166d35 pop esi */
  ESI = (pop32());
  /* 10166d36 ret  */
  ESPCHK(0x10166c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d40 @ 0x10166d40 (279 bytes, 62 insns) [1 switch table(s)] */
void f_10166d40(void) {
  FTRACE(0x10166d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10166d40 call 0x10162680 */
  push32(0x10166d45u); f_10162680();
  /* 10166d45 mov dword ptr [0x10175fb8], eax */
  w32((uint32_t)(0x10175fb8), (EAX));
  /* 10166d4a call 0x10162660 */
  push32(0x10166d4fu); f_10162660();
  /* 10166d4f mov dword ptr [0x101763c8], eax */
  w32((uint32_t)(0x101763c8), (EAX));
  /* 10166d54 call 0x10162670 */
  push32(0x10166d59u); f_10162670();
  /* 10166d59 mov dword ptr [0x101738f8], eax */
  w32((uint32_t)(0x101738f8), (EAX));
  /* 10166d5e call 0x10163040 */
  push32(0x10166d63u); f_10163040();
  /* 10166d63 push 0x1016f114 */
  push32((uint32_t)(0x1016f114u));
  /* 10166d68 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10166d6a call dword ptr [0x1017656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017656c))), 0x10166d70u);
  /* 10166d70 call 0x10166630 */
  push32(0x10166d75u); f_10166630();
  /* 10166d75 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10166d77 push 0x1016f244 */
  push32((uint32_t)(0x1016f244u));
  /* 10166d7c call 0x10162700 */
  push32(0x10166d81u); f_10162700();
  /* 10166d81 mov eax, dword ptr [0x10175fb8] */
  EAX = (r32((uint32_t)(0x10175fb8)));
  /* 10166d86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166d89 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10166d8c ja 0x10166e52 */
  if ((!C.cf&&!C.zf)) goto L_10166e52;
  /* 10166d92 jmp dword ptr [eax*4 + 0x10166e58] */
  switch (EAX) {
    case 0: goto L_10166d99;
    case 1: goto L_10166e15;
    case 2: goto L_10166e1c;
    case 3: goto L_10166e1c;
    case 4: goto L_10166e1c;
    case 5: goto L_10166d99;
    default: x86_unimpl("switch@0x10166d92 out of table"); return;
  }
L_10166d99:;
  /* 10166d99 cmp dword ptr [0x101738f8], 3 */
  { uint32_t _a=(r32((uint32_t)(0x101738f8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10166da0 jne 0x10166dd2 */
  if (!C.zf) goto L_10166dd2;
  /* 10166da2 push 0x1016f160 */
  push32((uint32_t)(0x1016f160u));
  /* 10166da7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10166da9 call dword ptr [0x1017656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017656c))), 0x10166dafu);
  /* 10166daf push 0x1016f16c */
  push32((uint32_t)(0x1016f16cu));
  /* 10166db4 call 0x10162720 */
  push32(0x10166db9u); f_10162720();
  /* 10166db9 push 5 */
  push32((uint32_t)(0x5u));
  /* 10166dbb push 0x1016f41c */
  push32((uint32_t)(0x1016f41cu));
  /* 10166dc0 call 0x10162700 */
  push32(0x10166dc5u); f_10162700();
  /* 10166dc5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166dc8 call 0x10166c40 */
  push32(0x10166dcdu); f_10166c40();
  /* 10166dcd jmp 0x10166e52 */
  goto L_10166e52;
L_10166dd2:;
  /* 10166dd2 push 0x1016f114 */
  push32((uint32_t)(0x1016f114u));
  /* 10166dd7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10166dd9 call dword ptr [0x1017656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017656c))), 0x10166ddfu);
  /* 10166ddf push 0x101765f8 */
  push32((uint32_t)(0x101765f8u));
  /* 10166de4 call 0x10162720 */
  push32(0x10166de9u); f_10162720();
  /* 10166de9 mov eax, dword ptr [0x101738f8] */
  EAX = (r32((uint32_t)(0x101738f8)));
  /* 10166dee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166df1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10166df3 jne 0x10166dff */
  if (!C.zf) goto L_10166dff;
  /* 10166df5 mov dword ptr [0x1016f248], 4 */
  w32((uint32_t)(0x1016f248), (0x4u));
L_10166dff:;
  /* 10166dff push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10166e01 push 0x1016f244 */
  push32((uint32_t)(0x1016f244u));
  /* 10166e06 call 0x10162700 */
  push32(0x10166e0bu); f_10162700();
  /* 10166e0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166e0e call 0x10166be0 */
  push32(0x10166e13u); f_10166be0();
  /* 10166e13 jmp 0x10166e52 */
  goto L_10166e52;
L_10166e15:;
  /* 10166e15 call 0x101643e0 */
  push32(0x10166e1au); f_101643e0();
  /* 10166e1a jmp 0x10166e52 */
  goto L_10166e52;
L_10166e1c:;
  /* 10166e1c push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10166e21 call dword ptr [0x10176588] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176588))), 0x10166e27u);
  /* 10166e27 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10166e2c call dword ptr [0x1017658c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017658c))), 0x10166e32u);
  /* 10166e32 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10166e37 call dword ptr [0x10176590] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176590))), 0x10166e3du);
  /* 10166e3d push 0x1016f07c */
  push32((uint32_t)(0x1016f07cu));
  /* 10166e42 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10166e44 call dword ptr [0x1017656c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1017656c))), 0x10166e4au);
  /* 10166e4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166e4d call 0x10163360 */
  push32(0x10166e52u); f_10163360();
L_10166e52:;
  /* 10166e52 jmp 0x101631c0 */
  f_101631c0(); return;
}

/* FUN_10006e70 @ 0x10166e70 (82 bytes, 32 insns) */
void f_10166e70(void) {
  FTRACE(0x10166e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10166e70 push ebp */
  push32((uint32_t)(EBP));
  /* 10166e71 mov ebp, esp */
  EBP = (ESP);
  /* 10166e73 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10166e76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10166e79 push esi */
  push32((uint32_t)(ESI));
  /* 10166e7a mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10166e7d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10166e80 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10166e83 mov dword ptr [ebp - 0x14], 0x42 */
  w32((uint32_t)(EBP + -0x14), (0x42u));
  /* 10166e8a push eax */
  push32((uint32_t)(EAX));
  /* 10166e8b lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10166e8e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10166e91 mov dword ptr [ebp - 0x1c], 0x7fffffff */
  w32((uint32_t)(EBP + -0x1c), (0x7fffffffu));
  /* 10166e98 push eax */
  push32((uint32_t)(EAX));
  /* 10166e99 call 0x101671fc */
  push32(0x10166e9eu); f_101671fc();
  /* 10166e9e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166ea1 dec dword ptr [ebp - 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))-1; w32((uint32_t)(EBP + -0x1c), (_r)); fl_dec(_r,32); }
  /* 10166ea4 mov esi, eax */
  ESI = (EAX);
  /* 10166ea6 js 0x10166eb0 */
  if (C.sf) goto L_10166eb0;
  /* 10166ea8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10166eab and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 10166eae jmp 0x10166ebd */
  goto L_10166ebd;
L_10166eb0:;
  /* 10166eb0 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10166eb3 push eax */
  push32((uint32_t)(EAX));
  /* 10166eb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10166eb6 call 0x101670e4 */
  push32(0x10166ebbu); f_101670e4();
  /* 10166ebb pop ecx */
  ECX = (pop32());
  /* 10166ebc pop ecx */
  ECX = (pop32());
L_10166ebd:;
  /* 10166ebd mov eax, esi */
  EAX = (ESI);
  /* 10166ebf pop esi */
  ESI = (pop32());
  /* 10166ec0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10166ec1 ret  */
  ESPCHK(0x10166e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ec2 @ 0x10166ec2 (23 bytes, 6 insns) */
void f_10166ec2(void) {
  FTRACE(0x10166ec2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10166ec2 call 0x10166eda */
  push32(0x10166ec7u); f_10166eda();
  /* 10166ec7 call 0x10167a56 */
  push32(0x10166eccu); f_10167a56();
  /* 10166ecc mov dword ptr [0x101766c0], eax */
  w32((uint32_t)(0x101766c0), (EAX));
  /* 10166ed1 call 0x10167a06 */
  push32(0x10166ed6u); f_10167a06();
  /* 10166ed6 fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 10166ed8 ret  */
  ESPCHK(0x10166ec2u, _esp0);
  ESP += 4; return;
}

/* FUN_10006eda @ 0x10166eda (56 bytes, 8 insns) */
void f_10166eda(void) {
  FTRACE(0x10166edau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10166eda mov eax, 0x10167e2f */
  EAX = (0x10167e2fu);
  /* 10166edf mov dword ptr [0x101706f8], 0x10167ad9 */
  w32((uint32_t)(0x101706f8), (0x10167ad9u));
  /* 10166ee9 mov dword ptr [0x101706f4], eax */
  w32((uint32_t)(0x101706f4), (EAX));
  /* 10166eee mov dword ptr [0x101706fc], 0x10167b3f */
  w32((uint32_t)(0x101706fc), (0x10167b3fu));
  /* 10166ef8 mov dword ptr [0x10170700], 0x10167a7f */
  w32((uint32_t)(0x10170700), (0x10167a7fu));
  /* 10166f02 mov dword ptr [0x10170704], 0x10167b27 */
  w32((uint32_t)(0x10170704), (0x10167b27u));
  /* 10166f0c mov dword ptr [0x10170708], eax */
  w32((uint32_t)(0x10170708), (EAX));
  /* 10166f11 ret  */
  ESPCHK(0x10166edau, _esp0);
  ESP += 4; return;
}

/* __ftol @ 0x10166f14 (39 bytes, 16 insns) */
void f_10166f14(void) {
  FTRACE(0x10166f14u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10166f14 push ebp */
  push32((uint32_t)(EBP));
  /* 10166f15 mov ebp, esp */
  EBP = (ESP);
  /* 10166f17 add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10166f1a wait  */
  /* wait (no observable integer/reg state) */
  /* 10166f1b fnstcw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), C.fcw);
  /* 10166f1e wait  */
  /* wait (no observable integer/reg state) */
  /* 10166f1f mov ax, word ptr [ebp - 2] */
  AX = (r16((uint32_t)(EBP + -0x2)));
  /* 10166f23 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 10166f26 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10166f2a fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 10166f2d fistp qword ptr [ebp - 0xc] */
  { int64_t _q=fpu_to_i64(FPU_ST(0)); w32((uint32_t)(EBP + -0xc),(uint32_t)_q); w32((uint32_t)(EBP + -0xc)+4,(uint32_t)((uint64_t)_q>>32)); }
  (void)fpu_pop();
  /* 10166f30 fldcw word ptr [ebp - 2] */
  C.fcw = r16((uint32_t)(EBP + -0x2));
  /* 10166f33 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10166f36 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10166f39 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10166f3a ret  */
  ESPCHK(0x10166f14u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f3b @ 0x10166f3b (217 bytes, 57 insns) */
void f_10166f3b(void) {
  FTRACE(0x10166f3bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10166f3b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10166f3f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10166f42 jne 0x10166fd0 */
  if (!C.zf) goto L_10166fd0;
  /* 10166f48 call dword ptr [0x1016e014] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e014))), 0x10166f4eu);
  /* 10166f4e push 1 */
  push32((uint32_t)(0x1u));
  /* 10166f50 mov dword ptr [0x101766dc], eax */
  w32((uint32_t)(0x101766dc), (EAX));
  /* 10166f55 call 0x1016890c */
  push32(0x10166f5au); f_1016890c();
  /* 10166f5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10166f5c pop ecx */
  ECX = (pop32());
  /* 10166f5d je 0x10166f9b */
  if (C.zf) goto L_10166f9b;
  /* 10166f5f mov eax, dword ptr [0x101766dc] */
  EAX = (r32((uint32_t)(0x101766dc)));
  /* 10166f64 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10166f66 mov cl, byte ptr [0x101766dd] */
  CL = (r8((uint32_t)(0x101766dd)));
  /* 10166f6c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10166f71 shr dword ptr [0x101766dc], 0x10 */
  w32((uint32_t)(0x101766dc), (sh_shr((uint32_t)(r32((uint32_t)(0x101766dc))), (0x10u)&0x1f, 32)));
  /* 10166f78 mov dword ptr [0x101766e4], eax */
  w32((uint32_t)(0x101766e4), (EAX));
  /* 10166f7d mov dword ptr [0x101766e8], ecx */
  w32((uint32_t)(0x101766e8), (ECX));
  /* 10166f83 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10166f86 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10166f88 mov dword ptr [0x101766e0], eax */
  w32((uint32_t)(0x101766e0), (EAX));
  /* 10166f8d call 0x10167fc3 */
  push32(0x10166f92u); f_10167fc3();
  /* 10166f92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10166f94 jne 0x10166f9f */
  if (!C.zf) goto L_10166f9f;
  /* 10166f96 call 0x10168969 */
  push32(0x10166f9bu); f_10168969();
L_10166f9b:;
  /* 10166f9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10166f9d jmp 0x10167011 */
  goto L_10167011;
L_10166f9f:;
  /* 10166f9f call dword ptr [0x1016e010] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e010))), 0x10166fa5u);
  /* 10166fa5 mov dword ptr [0x10177dd4], eax */
  w32((uint32_t)(0x10177dd4), (EAX));
  /* 10166faa call 0x10168665 */
  push32(0x10166fafu); f_10168665();
  /* 10166faf mov dword ptr [0x101766c8], eax */
  w32((uint32_t)(0x101766c8), (EAX));
  /* 10166fb4 call 0x1016814f */
  push32(0x10166fb9u); f_1016814f();
  /* 10166fb9 call 0x10168418 */
  push32(0x10166fbeu); f_10168418();
  /* 10166fbe call 0x1016835f */
  push32(0x10166fc3u); f_1016835f();
  /* 10166fc3 call 0x10167ea5 */
  push32(0x10166fc8u); f_10167ea5();
  /* 10166fc8 inc dword ptr [0x101766c4] */
  { uint32_t _r=(r32((uint32_t)(0x101766c4)))+1; w32((uint32_t)(0x101766c4), (_r)); fl_inc(_r,32); }
  /* 10166fce jmp 0x1016700e */
  goto L_1016700e;
L_10166fd0:;
  /* 10166fd0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10166fd2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10166fd4 jne 0x10167002 */
  if (!C.zf) goto L_10167002;
  /* 10166fd6 cmp dword ptr [0x101766c4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x101766c4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10166fdc jle 0x10166f9b */
  if ((C.zf||C.sf!=C.of)) goto L_10166f9b;
  /* 10166fde dec dword ptr [0x101766c4] */
  { uint32_t _r=(r32((uint32_t)(0x101766c4)))-1; w32((uint32_t)(0x101766c4), (_r)); fl_dec(_r,32); }
  /* 10166fe4 cmp dword ptr [0x10176714], ecx */
  { uint32_t _a=(r32((uint32_t)(0x10176714))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10166fea jne 0x10166ff1 */
  if (!C.zf) goto L_10166ff1;
  /* 10166fec call 0x10167ee3 */
  push32(0x10166ff1u); f_10167ee3();
L_10166ff1:;
  /* 10166ff1 call 0x1016830b */
  push32(0x10166ff6u); f_1016830b();
  /* 10166ff6 call 0x10168017 */
  push32(0x10166ffbu); f_10168017();
  /* 10166ffb call 0x10168969 */
  push32(0x10167000u); f_10168969();
  /* 10167000 jmp 0x1016700e */
  goto L_1016700e;
L_10167002:;
  /* 10167002 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167005 jne 0x1016700e */
  if (!C.zf) goto L_1016700e;
  /* 10167007 push ecx */
  push32((uint32_t)(ECX));
  /* 10167008 call 0x101680af */
  push32(0x1016700du); f_101680af();
  /* 1016700d pop ecx */
  ECX = (pop32());
L_1016700e:;
  /* 1016700e push 1 */
  push32((uint32_t)(0x1u));
  /* 10167010 pop eax */
  EAX = (pop32());
L_10167011:;
  /* 10167011 ret 0xc */
  ESPCHK(0x10166f3bu, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10167014 (157 bytes, 73 insns) */
void f_10167014(void) {
  FTRACE(0x10167014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10167014 push ebp */
  push32((uint32_t)(EBP));
  /* 10167015 mov ebp, esp */
  EBP = (ESP);
  /* 10167017 push ebx */
  push32((uint32_t)(EBX));
  /* 10167018 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016701b push esi */
  push32((uint32_t)(ESI));
  /* 1016701c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1016701f push edi */
  push32((uint32_t)(EDI));
  /* 10167020 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 10167023 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10167025 jne 0x10167030 */
  if (!C.zf) goto L_10167030;
  /* 10167027 cmp dword ptr [0x101766c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x101766c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016702e jmp 0x10167056 */
  goto L_10167056;
L_10167030:;
  /* 10167030 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167033 je 0x1016703a */
  if (C.zf) goto L_1016703a;
  /* 10167035 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167038 jne 0x1016705c */
  if (!C.zf) goto L_1016705c;
L_1016703a:;
  /* 1016703a mov eax, dword ptr [0x10177dd8] */
  EAX = (r32((uint32_t)(0x10177dd8)));
  /* 1016703f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10167041 je 0x1016704c */
  if (C.zf) goto L_1016704c;
  /* 10167043 push edi */
  push32((uint32_t)(EDI));
  /* 10167044 push esi */
  push32((uint32_t)(ESI));
  /* 10167045 push ebx */
  push32((uint32_t)(EBX));
  /* 10167046 call eax */
  call_ind((uint32_t)(EAX), 0x10167048u);
  /* 10167048 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016704a je 0x10167058 */
  if (C.zf) goto L_10167058;
L_1016704c:;
  /* 1016704c push edi */
  push32((uint32_t)(EDI));
  /* 1016704d push esi */
  push32((uint32_t)(ESI));
  /* 1016704e push ebx */
  push32((uint32_t)(EBX));
  /* 1016704f call 0x10166f3b */
  push32(0x10167054u); f_10166f3b();
  /* 10167054 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_10167056:;
  /* 10167056 jne 0x1016705c */
  if (!C.zf) goto L_1016705c;
L_10167058:;
  /* 10167058 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016705a jmp 0x101670aa */
  goto L_101670aa;
L_1016705c:;
  /* 1016705c push edi */
  push32((uint32_t)(EDI));
  /* 1016705d push esi */
  push32((uint32_t)(ESI));
  /* 1016705e push ebx */
  push32((uint32_t)(EBX));
  /* 1016705f call 0x101627f0 */
  push32(0x10167064u); f_101627f0();
  /* 10167064 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167067 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1016706a jne 0x10167078 */
  if (!C.zf) goto L_10167078;
  /* 1016706c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016706e jne 0x101670a7 */
  if (!C.zf) goto L_101670a7;
  /* 10167070 push edi */
  push32((uint32_t)(EDI));
  /* 10167071 push eax */
  push32((uint32_t)(EAX));
  /* 10167072 push ebx */
  push32((uint32_t)(EBX));
  /* 10167073 call 0x10166f3b */
  push32(0x10167078u); f_10166f3b();
L_10167078:;
  /* 10167078 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1016707a je 0x10167081 */
  if (C.zf) goto L_10167081;
  /* 1016707c cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016707f jne 0x101670a7 */
  if (!C.zf) goto L_101670a7;
L_10167081:;
  /* 10167081 push edi */
  push32((uint32_t)(EDI));
  /* 10167082 push esi */
  push32((uint32_t)(ESI));
  /* 10167083 push ebx */
  push32((uint32_t)(EBX));
  /* 10167084 call 0x10166f3b */
  push32(0x10167089u); f_10166f3b();
  /* 10167089 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016708b jne 0x10167090 */
  if (!C.zf) goto L_10167090;
  /* 1016708d and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_10167090:;
  /* 10167090 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167094 je 0x101670a7 */
  if (C.zf) goto L_101670a7;
  /* 10167096 mov eax, dword ptr [0x10177dd8] */
  EAX = (r32((uint32_t)(0x10177dd8)));
  /* 1016709b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016709d je 0x101670a7 */
  if (C.zf) goto L_101670a7;
  /* 1016709f push edi */
  push32((uint32_t)(EDI));
  /* 101670a0 push esi */
  push32((uint32_t)(ESI));
  /* 101670a1 push ebx */
  push32((uint32_t)(EBX));
  /* 101670a2 call eax */
  call_ind((uint32_t)(EAX), 0x101670a4u);
  /* 101670a4 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_101670a7:;
  /* 101670a7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_101670aa:;
  /* 101670aa pop edi */
  EDI = (pop32());
  /* 101670ab pop esi */
  ESI = (pop32());
  /* 101670ac pop ebx */
  EBX = (pop32());
  /* 101670ad pop ebp */
  EBP = (pop32());
  /* 101670ae ret 0xc */
  ESPCHK(0x10167014u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x101670b1 (48 bytes, 15 insns) */
void f_101670b1(void) {
  FTRACE(0x101670b1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101670b1 mov eax, dword ptr [0x101766d0] */
  EAX = (r32((uint32_t)(0x101766d0)));
  /* 101670b6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101670b9 je 0x101670c8 */
  if (C.zf) goto L_101670c8;
  /* 101670bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101670bd jne 0x101670cd */
  if (!C.zf) goto L_101670cd;
  /* 101670bf cmp dword ptr [0x101766d4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x101766d4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101670c6 jne 0x101670cd */
  if (!C.zf) goto L_101670cd;
L_101670c8:;
  /* 101670c8 call 0x10168a11 */
  push32(0x101670cdu); f_10168a11();
L_101670cd:;
  /* 101670cd push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 101670d1 call 0x10168a4a */
  push32(0x101670d6u); f_10168a4a();
  /* 101670d6 push 0xff */
  push32((uint32_t)(0xffu));
  /* 101670db call dword ptr [0x101706e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101706e8))), 0x101670e1u);
  /* 101670e1 pop ecx */
  ECX = (pop32());
  /* 101670e2 pop ecx */
  ECX = (pop32());
  /* 101670e3 ret  */
  ESPCHK(0x101670b1u, _esp0);
  ESP += 4; return;
}

/* FUN_100070e4 @ 0x101670e4 (280 bytes, 106 insns) */
void f_101670e4(void) {
  FTRACE(0x101670e4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101670e4 push ebp */
  push32((uint32_t)(EBP));
  /* 101670e5 mov ebp, esp */
  EBP = (ESP);
  /* 101670e7 push ebx */
  push32((uint32_t)(EBX));
  /* 101670e8 push esi */
  push32((uint32_t)(ESI));
  /* 101670e9 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 101670ec mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 101670ef mov ebx, dword ptr [esi + 0x10] */
  EBX = (r32((uint32_t)(ESI + 0x10)));
  /* 101670f2 test al, 0x82 */
  { uint32_t _r=(AL)&(0x82u); fl_logic(_r,8); }
  /* 101670f4 je 0x101671f0 */
  if (C.zf) goto L_101671f0;
  /* 101670fa test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 101670fc jne 0x101671f0 */
  if (!C.zf) goto L_101671f0;
  /* 10167102 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 10167104 je 0x1016711c */
  if (C.zf) goto L_1016711c;
  /* 10167106 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1016710a test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 1016710c je 0x101671f0 */
  if (C.zf) goto L_101671f0;
  /* 10167112 mov ecx, dword ptr [esi + 8] */
  ECX = (r32((uint32_t)(ESI + 0x8)));
  /* 10167115 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10167117 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 10167119 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_1016711c:;
  /* 1016711c mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1016711f and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10167123 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 10167127 and al, 0xef */
  { uint32_t _r=(AL)&(0xefu); AL = (_r); fl_logic(_r,8); }
  /* 10167129 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1016712b test ax, 0x10c */
  { uint32_t _r=(AX)&(0x10cu); fl_logic(_r,16); }
  /* 1016712f mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 10167132 jne 0x10167156 */
  if (!C.zf) goto L_10167156;
  /* 10167134 cmp esi, 0x101707e8 */
  { uint32_t _a=(ESI),_b=(0x101707e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016713a je 0x10167144 */
  if (C.zf) goto L_10167144;
  /* 1016713c cmp esi, 0x10170808 */
  { uint32_t _a=(ESI),_b=(0x10170808u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167142 jne 0x1016714f */
  if (!C.zf) goto L_1016714f;
L_10167144:;
  /* 10167144 push ebx */
  push32((uint32_t)(EBX));
  /* 10167145 call 0x10168ea9 */
  push32(0x1016714au); f_10168ea9();
  /* 1016714a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016714c pop ecx */
  ECX = (pop32());
  /* 1016714d jne 0x10167156 */
  if (!C.zf) goto L_10167156;
L_1016714f:;
  /* 1016714f push esi */
  push32((uint32_t)(ESI));
  /* 10167150 call 0x10168e65 */
  push32(0x10167155u); f_10168e65();
  /* 10167155 pop ecx */
  ECX = (pop32());
L_10167156:;
  /* 10167156 test word ptr [esi + 0xc], 0x108 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0x108u); fl_logic(_r,16); }
  /* 1016715c push edi */
  push32((uint32_t)(EDI));
  /* 1016715d je 0x101671c6 */
  if (C.zf) goto L_101671c6;
  /* 1016715f mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 10167162 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 10167164 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10167166 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 10167169 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1016716b mov ecx, dword ptr [esi + 0x18] */
  ECX = (r32((uint32_t)(ESI + 0x18)));
  /* 1016716e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1016716f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10167171 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 10167174 jle 0x10167186 */
  if ((C.zf||C.sf!=C.of)) goto L_10167186;
  /* 10167176 push edi */
  push32((uint32_t)(EDI));
  /* 10167177 push eax */
  push32((uint32_t)(EAX));
  /* 10167178 push ebx */
  push32((uint32_t)(EBX));
  /* 10167179 call 0x10168c75 */
  push32(0x1016717eu); f_10168c75();
  /* 1016717e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10167181 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10167184 jmp 0x101671bc */
  goto L_101671bc;
L_10167186:;
  /* 10167186 cmp ebx, -1 */
  { uint32_t _a=(EBX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167189 je 0x101671a4 */
  if (C.zf) goto L_101671a4;
  /* 1016718b mov ecx, ebx */
  ECX = (EBX);
  /* 1016718d mov eax, ebx */
  EAX = (EBX);
  /* 1016718f sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10167192 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10167195 mov ecx, dword ptr [ecx*4 + 0x10177cc0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10177cc0)));
  /* 1016719c lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1016719f lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 101671a2 jmp 0x101671a9 */
  goto L_101671a9;
L_101671a4:;
  /* 101671a4 mov eax, 0x10170710 */
  EAX = (0x10170710u);
L_101671a9:;
  /* 101671a9 test byte ptr [eax + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 101671ad je 0x101671bc */
  if (C.zf) goto L_101671bc;
  /* 101671af push 2 */
  push32((uint32_t)(0x2u));
  /* 101671b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 101671b3 push ebx */
  push32((uint32_t)(EBX));
  /* 101671b4 call 0x10168b9d */
  push32(0x101671b9u); f_10168b9d();
  /* 101671b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101671bc:;
  /* 101671bc mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 101671bf mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 101671c2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 101671c4 jmp 0x101671da */
  goto L_101671da;
L_101671c6:;
  /* 101671c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 101671c8 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 101671cb pop edi */
  EDI = (pop32());
  /* 101671cc push edi */
  push32((uint32_t)(EDI));
  /* 101671cd push eax */
  push32((uint32_t)(EAX));
  /* 101671ce push ebx */
  push32((uint32_t)(EBX));
  /* 101671cf call 0x10168c75 */
  push32(0x101671d4u); f_10168c75();
  /* 101671d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101671d7 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_101671da:;
  /* 101671da cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101671dd pop edi */
  EDI = (pop32());
  /* 101671de je 0x101671e6 */
  if (C.zf) goto L_101671e6;
  /* 101671e0 or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 101671e4 jmp 0x101671f5 */
  goto L_101671f5;
L_101671e6:;
  /* 101671e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101671e9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 101671ee jmp 0x101671f8 */
  goto L_101671f8;
L_101671f0:;
  /* 101671f0 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 101671f2 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_101671f5:;
  /* 101671f5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_101671f8:;
  /* 101671f8 pop esi */
  ESI = (pop32());
  /* 101671f9 pop ebx */
  EBX = (pop32());
  /* 101671fa pop ebp */
  EBP = (pop32());
  /* 101671fb ret  */
  ESPCHK(0x101670e4u, _esp0);
  ESP += 4; return;
}

/* FUN_100071fc @ 0x101671fc (1825 bytes, 595 insns) [1 switch table(s)] */
void f_101671fc(void) {
  FTRACE(0x101671fcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101671fc push ebp */
  push32((uint32_t)(EBP));
  /* 101671fd mov ebp, esp */
  EBP = (ESP);
  /* 101671ff sub esp, 0x248 */
  { uint32_t _a=(ESP),_b=(0x248u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10167205 push ebx */
  push32((uint32_t)(EBX));
  /* 10167206 push esi */
  push32((uint32_t)(ESI));
  /* 10167207 push edi */
  push32((uint32_t)(EDI));
  /* 10167208 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1016720b xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1016720d mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1016720f inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10167210 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10167212 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10167215 mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 10167218 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 1016721b je 0x10167915 */
  if (C.zf) goto L_10167915;
  /* 10167221 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10167224 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10167226 jmp 0x10167230 */
  goto L_10167230;
L_10167228:;
  /* 10167228 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1016722b mov esi, dword ptr [ebp - 0x30] */
  ESI = (r32((uint32_t)(EBP + -0x30)));
  /* 1016722e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_10167230:;
  /* 10167230 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167233 jl 0x10167915 */
  if ((C.sf!=C.of)) goto L_10167915;
  /* 10167239 cmp bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016723c jl 0x10167251 */
  if ((C.sf!=C.of)) goto L_10167251;
  /* 1016723e cmp bl, 0x78 */
  { uint32_t _a=(BL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10167241 jg 0x10167251 */
  if ((!C.zf&&C.sf==C.of)) goto L_10167251;
  /* 10167243 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10167246 mov al, byte ptr [eax + 0x1016e0c8] */
  AL = (r8((uint32_t)(EAX + 0x1016e0c8)));
  /* 1016724c and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1016724f jmp 0x10167253 */
  goto L_10167253;
L_10167251:;
  /* 10167251 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10167253:;
  /* 10167253 movsx eax, byte ptr [esi + eax*8 + 0x1016e0e8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI + EAX*8 + 0x1016e0e8))));
  /* 1016725b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1016725e cmp eax, 7 */
  { uint32_t _a=(EAX),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167261 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10167264 ja 0x10167904 */
  if ((!C.cf&&!C.zf)) goto L_10167904;
  /* 1016726a jmp dword ptr [eax*4 + 0x1016791d] */
  switch (EAX) {
    case 0: goto L_1016739b;
    case 1: goto L_10167271;
    case 2: goto L_1016728c;
    case 3: goto L_101672d8;
    case 4: goto L_1016730f;
    case 5: goto L_10167317;
    case 6: goto L_1016734c;
    case 7: goto L_101673df;
    default: x86_unimpl("switch@0x1016726a out of table"); return;
  }
L_10167271:;
  /* 10167271 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 10167275 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10167278 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1016727b mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1016727e mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10167281 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10167284 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10167287 jmp 0x10167904 */
  goto L_10167904;
L_1016728c:;
  /* 1016728c movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1016728f sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10167292 je 0x101672cf */
  if (C.zf) goto L_101672cf;
  /* 10167294 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10167297 je 0x101672c6 */
  if (C.zf) goto L_101672c6;
  /* 10167299 sub eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016729c je 0x101672bd */
  if (C.zf) goto L_101672bd;
  /* 1016729e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1016729f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101672a0 je 0x101672b4 */
  if (C.zf) goto L_101672b4;
  /* 101672a2 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101672a5 jne 0x10167904 */
  if (!C.zf) goto L_10167904;
  /* 101672ab or dword ptr [ebp - 4], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x8u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101672af jmp 0x10167904 */
  goto L_10167904;
L_101672b4:;
  /* 101672b4 or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101672b8 jmp 0x10167904 */
  goto L_10167904;
L_101672bd:;
  /* 101672bd or dword ptr [ebp - 4], 1 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x1u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101672c1 jmp 0x10167904 */
  goto L_10167904;
L_101672c6:;
  /* 101672c6 or byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))|(0x80u); w8((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,8); }
  /* 101672ca jmp 0x10167904 */
  goto L_10167904;
L_101672cf:;
  /* 101672cf or dword ptr [ebp - 4], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x2u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101672d3 jmp 0x10167904 */
  goto L_10167904;
L_101672d8:;
  /* 101672d8 cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101672db jne 0x10167300 */
  if (!C.zf) goto L_10167300;
  /* 101672dd lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101672e0 push eax */
  push32((uint32_t)(EAX));
  /* 101672e1 call 0x101679db */
  push32(0x101672e6u); f_101679db();
  /* 101672e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101672e8 pop ecx */
  ECX = (pop32());
  /* 101672e9 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 101672ec jge 0x10167904 */
  if ((C.sf==C.of)) goto L_10167904;
  /* 101672f2 or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101672f6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_101672f8:;
  /* 101672f8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 101672fb jmp 0x10167904 */
  goto L_10167904;
L_10167300:;
  /* 10167300 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10167303 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10167306 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10167309 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 1016730d jmp 0x101672f8 */
  goto L_101672f8;
L_1016730f:;
  /* 1016730f mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10167312 jmp 0x10167904 */
  goto L_10167904;
L_10167317:;
  /* 10167317 cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016731a jne 0x1016733a */
  if (!C.zf) goto L_1016733a;
  /* 1016731c lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1016731f push eax */
  push32((uint32_t)(EAX));
  /* 10167320 call 0x101679db */
  push32(0x10167325u); f_101679db();
  /* 10167325 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10167327 pop ecx */
  ECX = (pop32());
  /* 10167328 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1016732b jge 0x10167904 */
  if ((C.sf==C.of)) goto L_10167904;
  /* 10167331 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 10167335 jmp 0x10167904 */
  goto L_10167904;
L_1016733a:;
  /* 1016733a lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 1016733d movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10167340 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 10167344 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10167347 jmp 0x10167904 */
  goto L_10167904;
L_1016734c:;
  /* 1016734c cmp bl, 0x49 */
  { uint32_t _a=(BL),_b=(0x49u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016734f je 0x1016737f */
  if (C.zf) goto L_1016737f;
  /* 10167351 cmp bl, 0x68 */
  { uint32_t _a=(BL),_b=(0x68u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10167354 je 0x10167376 */
  if (C.zf) goto L_10167376;
  /* 10167356 cmp bl, 0x6c */
  { uint32_t _a=(BL),_b=(0x6cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10167359 je 0x1016736d */
  if (C.zf) goto L_1016736d;
  /* 1016735b cmp bl, 0x77 */
  { uint32_t _a=(BL),_b=(0x77u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016735e jne 0x10167904 */
  if (!C.zf) goto L_10167904;
  /* 10167364 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10167368 jmp 0x10167904 */
  goto L_10167904;
L_1016736d:;
  /* 1016736d or dword ptr [ebp - 4], 0x10 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x10u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10167371 jmp 0x10167904 */
  goto L_10167904;
L_10167376:;
  /* 10167376 or dword ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x20u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1016737a jmp 0x10167904 */
  goto L_10167904;
L_1016737f:;
  /* 1016737f cmp byte ptr [edi], 0x36 */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10167382 jne 0x10167398 */
  if (!C.zf) goto L_10167398;
  /* 10167384 cmp byte ptr [edi + 1], 0x34 */
  { uint32_t _a=(r8((uint32_t)(EDI + 0x1))),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10167388 jne 0x10167398 */
  if (!C.zf) goto L_10167398;
  /* 1016738a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1016738b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1016738c or byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x80u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10167390 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 10167393 jmp 0x10167904 */
  goto L_10167904;
L_10167398:;
  /* 10167398 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_1016739b:;
  /* 1016739b mov ecx, dword ptr [0x10170a50] */
  ECX = (r32((uint32_t)(0x10170a50)));
  /* 101673a1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 101673a4 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101673a7 test byte ptr [ecx + eax*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 101673ac je 0x101673c7 */
  if (C.zf) goto L_101673c7;
  /* 101673ae lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101673b1 push eax */
  push32((uint32_t)(EAX));
  /* 101673b2 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101673b5 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101673b8 push eax */
  push32((uint32_t)(EAX));
  /* 101673b9 call 0x1016793d */
  push32(0x101673beu); f_1016793d();
  /* 101673be mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101673c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101673c3 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101673c4 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_101673c7:;
  /* 101673c7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101673ca push eax */
  push32((uint32_t)(EAX));
  /* 101673cb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101673ce movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101673d1 push eax */
  push32((uint32_t)(EAX));
  /* 101673d2 call 0x1016793d */
  push32(0x101673d7u); f_1016793d();
  /* 101673d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101673da jmp 0x10167904 */
  goto L_10167904;
L_101673df:;
  /* 101673df movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101673e2 cmp eax, 0x67 */
  { uint32_t _a=(EAX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101673e5 jg 0x10167607 */
  if ((!C.zf&&C.sf==C.of)) goto L_10167607;
  /* 101673eb cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101673ee jge 0x1016748a */
  if ((C.sf==C.of)) goto L_1016748a;
  /* 101673f4 cmp eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101673f7 jg 0x101674e8 */
  if ((!C.zf&&C.sf==C.of)) goto L_101674e8;
  /* 101673fd je 0x1016767b */
  if (C.zf) goto L_1016767b;
  /* 10167403 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10167406 je 0x101674ab */
  if (C.zf) goto L_101674ab;
  /* 1016740c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1016740d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1016740e je 0x10167480 */
  if (C.zf) goto L_10167480;
  /* 10167410 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10167411 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10167412 je 0x10167480 */
  if (C.zf) goto L_10167480;
  /* 10167414 sub eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10167417 jne 0x10167806 */
  if (!C.zf) goto L_10167806;
  /* 1016741d test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 10167423 jne 0x10167429 */
  if (!C.zf) goto L_10167429;
  /* 10167425 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_10167429:;
  /* 10167429 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 1016742c cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016742f jne 0x10167436 */
  if (!C.zf) goto L_10167436;
  /* 10167431 mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
L_10167436:;
  /* 10167436 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10167439 push eax */
  push32((uint32_t)(EAX));
  /* 1016743a call 0x101679db */
  push32(0x1016743fu); f_101679db();
  /* 1016743f test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 10167445 pop ecx */
  ECX = (pop32());
  /* 10167446 mov ecx, eax */
  ECX = (EAX);
  /* 10167448 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1016744b je 0x1016764f */
  if (C.zf) goto L_1016764f;
  /* 10167451 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10167453 jne 0x1016745e */
  if (!C.zf) goto L_1016745e;
  /* 10167455 mov ecx, dword ptr [0x101706f0] */
  ECX = (r32((uint32_t)(0x101706f0)));
  /* 1016745b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1016745e:;
  /* 1016745e mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10167465 mov eax, ecx */
  EAX = (ECX);
L_10167467:;
  /* 10167467 mov edx, esi */
  EDX = (ESI);
  /* 10167469 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1016746a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1016746c je 0x10167646 */
  if (C.zf) goto L_10167646;
  /* 10167472 cmp word ptr [eax], 0 */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10167476 je 0x10167646 */
  if (C.zf) goto L_10167646;
  /* 1016747c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1016747d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1016747e jmp 0x10167467 */
  goto L_10167467;
L_10167480:;
  /* 10167480 mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 10167487 add bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a+_b; BL = (_r); fl_add(_a,_b,_r,8); }
L_1016748a:;
  /* 1016748a or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1016748e lea edi, [ebp - 0x248] */
  EDI = ((uint32_t)(EBP + -0x248));
  /* 10167494 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167496 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 10167499 jge 0x1016756e */
  if ((C.sf==C.of)) goto L_1016756e;
  /* 1016749f mov dword ptr [ebp - 0x10], 6 */
  w32((uint32_t)(EBP + -0x10), (0x6u));
  /* 101674a6 jmp 0x1016757c */
  goto L_1016757c;
L_101674ab:;
  /* 101674ab test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 101674b1 jne 0x101674b7 */
  if (!C.zf) goto L_101674b7;
  /* 101674b3 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_101674b7:;
  /* 101674b7 test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 101674bd lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101674c0 push eax */
  push32((uint32_t)(EAX));
  /* 101674c1 je 0x101674fe */
  if (C.zf) goto L_101674fe;
  /* 101674c3 call 0x101679f8 */
  push32(0x101674c8u); f_101679f8();
  /* 101674c8 push eax */
  push32((uint32_t)(EAX));
  /* 101674c9 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 101674cf push eax */
  push32((uint32_t)(EAX));
  /* 101674d0 call 0x101690bb */
  push32(0x101674d5u); f_101690bb();
  /* 101674d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101674d8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 101674db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101674dd jge 0x10167511 */
  if ((C.sf==C.of)) goto L_10167511;
  /* 101674df mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 101674e6 jmp 0x10167511 */
  goto L_10167511;
L_101674e8:;
  /* 101674e8 sub eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101674eb je 0x1016751f */
  if (C.zf) goto L_1016751f;
  /* 101674ed sub eax, 9 */
  { uint32_t _a=(EAX),_b=(0x9u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101674f0 je 0x101674b7 */
  if (C.zf) goto L_101674b7;
  /* 101674f2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101674f3 je 0x101676e1 */
  if (C.zf) goto L_101676e1;
  /* 101674f9 jmp 0x10167806 */
  goto L_10167806;
L_101674fe:;
  /* 101674fe call 0x101679db */
  push32(0x10167503u); f_101679db();
  /* 10167503 pop ecx */
  ECX = (pop32());
  /* 10167504 mov byte ptr [ebp - 0x248], al */
  w8((uint32_t)(EBP + -0x248), (AL));
  /* 1016750a mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10167511:;
  /* 10167511 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 10167517 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1016751a jmp 0x10167806 */
  goto L_10167806;
L_1016751f:;
  /* 1016751f lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10167522 push eax */
  push32((uint32_t)(EAX));
  /* 10167523 call 0x101679db */
  push32(0x10167528u); f_101679db();
  /* 10167528 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016752a pop ecx */
  ECX = (pop32());
  /* 1016752b je 0x10167560 */
  if (C.zf) goto L_10167560;
  /* 1016752d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10167530 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10167532 je 0x10167560 */
  if (C.zf) goto L_10167560;
  /* 10167534 test byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x8u); fl_logic(_r,8); }
  /* 10167538 je 0x10167551 */
  if (C.zf) goto L_10167551;
  /* 1016753a movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 1016753d shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1016753f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10167542 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10167545 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1016754c jmp 0x10167806 */
  goto L_10167806;
L_10167551:;
  /* 10167551 and dword ptr [ebp - 0x24], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x24)))&(0x0u); w32((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,32); }
  /* 10167555 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10167558 movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 1016755b jmp 0x10167803 */
  goto L_10167803;
L_10167560:;
  /* 10167560 mov eax, dword ptr [0x101706ec] */
  EAX = (r32((uint32_t)(0x101706ec)));
  /* 10167565 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10167568 push eax */
  push32((uint32_t)(EAX));
  /* 10167569 jmp 0x101675fc */
  goto L_101675fc;
L_1016756e:;
  /* 1016756e jne 0x1016757c */
  if (!C.zf) goto L_1016757c;
  /* 10167570 cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10167573 jne 0x1016757c */
  if (!C.zf) goto L_1016757c;
  /* 10167575 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1016757c:;
  /* 1016757c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1016757f push dword ptr [ebp - 0x34] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x34))));
  /* 10167582 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10167585 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10167588 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 1016758b mov ecx, dword ptr [eax - 8] */
  ECX = (r32((uint32_t)(EAX + -0x8)));
  /* 1016758e mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
  /* 10167591 mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 10167594 mov dword ptr [ebp - 0x44], eax */
  w32((uint32_t)(EBP + -0x44), (EAX));
  /* 10167597 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1016759a push eax */
  push32((uint32_t)(EAX));
  /* 1016759b lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 101675a1 push eax */
  push32((uint32_t)(EAX));
  /* 101675a2 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 101675a5 push eax */
  push32((uint32_t)(EAX));
  /* 101675a6 call dword ptr [0x101706f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101706f4))), 0x101675acu);
  /* 101675ac mov esi, dword ptr [ebp - 4] */
  ESI = (r32((uint32_t)(EBP + -0x4)));
  /* 101675af add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101675b2 and esi, 0x80 */
  { uint32_t _r=(ESI)&(0x80u); ESI = (_r); fl_logic(_r,32); }
  /* 101675b8 je 0x101675ce */
  if (C.zf) goto L_101675ce;
  /* 101675ba cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101675be jne 0x101675ce */
  if (!C.zf) goto L_101675ce;
  /* 101675c0 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 101675c6 push eax */
  push32((uint32_t)(EAX));
  /* 101675c7 call dword ptr [0x10170700] */
  call_ind((uint32_t)(r32((uint32_t)(0x10170700))), 0x101675cdu);
  /* 101675cd pop ecx */
  ECX = (pop32());
L_101675ce:;
  /* 101675ce cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101675d1 jne 0x101675e5 */
  if (!C.zf) goto L_101675e5;
  /* 101675d3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101675d5 jne 0x101675e5 */
  if (!C.zf) goto L_101675e5;
  /* 101675d7 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 101675dd push eax */
  push32((uint32_t)(EAX));
  /* 101675de call dword ptr [0x101706f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101706f8))), 0x101675e4u);
  /* 101675e4 pop ecx */
  ECX = (pop32());
L_101675e5:;
  /* 101675e5 cmp byte ptr [ebp - 0x248], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x248))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101675ec jne 0x101675fb */
  if (!C.zf) goto L_101675fb;
  /* 101675ee or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 101675f2 lea edi, [ebp - 0x247] */
  EDI = ((uint32_t)(EBP + -0x247));
  /* 101675f8 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
L_101675fb:;
  /* 101675fb push edi */
  push32((uint32_t)(EDI));
L_101675fc:;
  /* 101675fc call 0x10169040 */
  push32(0x10167601u); f_10169040();
  /* 10167601 pop ecx */
  ECX = (pop32());
  /* 10167602 jmp 0x10167803 */
  goto L_10167803;
L_10167607:;
  /* 10167607 sub eax, 0x69 */
  { uint32_t _a=(EAX),_b=(0x69u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016760a je 0x101676e1 */
  if (C.zf) goto L_101676e1;
  /* 10167610 sub eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10167613 je 0x101676b7 */
  if (C.zf) goto L_101676b7;
  /* 10167619 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1016761a je 0x101676a4 */
  if (C.zf) goto L_101676a4;
  /* 10167620 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10167621 je 0x10167674 */
  if (C.zf) goto L_10167674;
  /* 10167623 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10167626 je 0x10167429 */
  if (C.zf) goto L_10167429;
  /* 1016762c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1016762d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1016762e je 0x101676e5 */
  if (C.zf) goto L_101676e5;
  /* 10167634 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10167637 jne 0x10167806 */
  if (!C.zf) goto L_10167806;
  /* 1016763d mov dword ptr [ebp - 0x2c], 0x27 */
  w32((uint32_t)(EBP + -0x2c), (0x27u));
  /* 10167644 jmp 0x10167682 */
  goto L_10167682;
L_10167646:;
  /* 10167646 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10167648 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1016764a jmp 0x10167803 */
  goto L_10167803;
L_1016764f:;
  /* 1016764f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10167651 jne 0x1016765c */
  if (!C.zf) goto L_1016765c;
  /* 10167653 mov ecx, dword ptr [0x101706ec] */
  ECX = (r32((uint32_t)(0x101706ec)));
  /* 10167659 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1016765c:;
  /* 1016765c mov eax, ecx */
  EAX = (ECX);
L_1016765e:;
  /* 1016765e mov edx, esi */
  EDX = (ESI);
  /* 10167660 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10167661 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10167663 je 0x1016766d */
  if (C.zf) goto L_1016766d;
  /* 10167665 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10167668 je 0x1016766d */
  if (C.zf) goto L_1016766d;
  /* 1016766a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1016766b jmp 0x1016765e */
  goto L_1016765e;
L_1016766d:;
  /* 1016766d sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016766f jmp 0x10167803 */
  goto L_10167803;
L_10167674:;
  /* 10167674 mov dword ptr [ebp - 0x10], 8 */
  w32((uint32_t)(EBP + -0x10), (0x8u));
L_1016767b:;
  /* 1016767b mov dword ptr [ebp - 0x2c], 7 */
  w32((uint32_t)(EBP + -0x2c), (0x7u));
L_10167682:;
  /* 10167682 test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 10167686 mov dword ptr [ebp - 0xc], 0x10 */
  w32((uint32_t)(EBP + -0xc), (0x10u));
  /* 1016768d je 0x101676ec */
  if (C.zf) goto L_101676ec;
  /* 1016768f mov al, byte ptr [ebp - 0x2c] */
  AL = (r8((uint32_t)(EBP + -0x2c)));
  /* 10167692 mov byte ptr [ebp - 0x16], 0x30 */
  w8((uint32_t)(EBP + -0x16), (0x30u));
  /* 10167696 add al, 0x51 */
  { uint32_t _a=(AL),_b=(0x51u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10167698 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 1016769f mov byte ptr [ebp - 0x15], al */
  w8((uint32_t)(EBP + -0x15), (AL));
  /* 101676a2 jmp 0x101676ec */
  goto L_101676ec;
L_101676a4:;
  /* 101676a4 test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 101676a8 mov dword ptr [ebp - 0xc], 8 */
  w32((uint32_t)(EBP + -0xc), (0x8u));
  /* 101676af je 0x101676ec */
  if (C.zf) goto L_101676ec;
  /* 101676b1 or byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x2u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 101676b5 jmp 0x101676ec */
  goto L_101676ec;
L_101676b7:;
  /* 101676b7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101676ba push eax */
  push32((uint32_t)(EAX));
  /* 101676bb call 0x101679db */
  push32(0x101676c0u); f_101679db();
  /* 101676c0 test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 101676c4 pop ecx */
  ECX = (pop32());
  /* 101676c5 je 0x101676d0 */
  if (C.zf) goto L_101676d0;
  /* 101676c7 mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 101676cb mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 101676ce jmp 0x101676d5 */
  goto L_101676d5;
L_101676d0:;
  /* 101676d0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 101676d3 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_101676d5:;
  /* 101676d5 mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 101676dc jmp 0x10167904 */
  goto L_10167904;
L_101676e1:;
  /* 101676e1 or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_101676e5:;
  /* 101676e5 mov dword ptr [ebp - 0xc], 0xa */
  w32((uint32_t)(EBP + -0xc), (0xau));
L_101676ec:;
  /* 101676ec test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 101676f0 je 0x101676fe */
  if (C.zf) goto L_101676fe;
  /* 101676f2 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101676f5 push eax */
  push32((uint32_t)(EAX));
  /* 101676f6 call 0x101679e8 */
  push32(0x101676fbu); f_101679e8();
  /* 101676fb pop ecx */
  ECX = (pop32());
  /* 101676fc jmp 0x1016773f */
  goto L_1016773f;
L_101676fe:;
  /* 101676fe test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 10167702 je 0x10167725 */
  if (C.zf) goto L_10167725;
  /* 10167704 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10167708 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1016770b push eax */
  push32((uint32_t)(EAX));
  /* 1016770c je 0x1016771a */
  if (C.zf) goto L_1016771a;
  /* 1016770e call 0x101679db */
  push32(0x10167713u); f_101679db();
  /* 10167713 pop ecx */
  ECX = (pop32());
  /* 10167714 movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
L_10167717:;
  /* 10167717 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10167718 jmp 0x1016773f */
  goto L_1016773f;
L_1016771a:;
  /* 1016771a call 0x101679db */
  push32(0x1016771fu); f_101679db();
  /* 1016771f pop ecx */
  ECX = (pop32());
  /* 10167720 movzx eax, ax */
  EAX = ((uint32_t)(AX));
  /* 10167723 jmp 0x10167717 */
  goto L_10167717;
L_10167725:;
  /* 10167725 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10167729 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1016772c push eax */
  push32((uint32_t)(EAX));
  /* 1016772d je 0x10167737 */
  if (C.zf) goto L_10167737;
  /* 1016772f call 0x101679db */
  push32(0x10167734u); f_101679db();
  /* 10167734 pop ecx */
  ECX = (pop32());
  /* 10167735 jmp 0x10167717 */
  goto L_10167717;
L_10167737:;
  /* 10167737 call 0x101679db */
  push32(0x1016773cu); f_101679db();
  /* 1016773c pop ecx */
  ECX = (pop32());
  /* 1016773d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_1016773f:;
  /* 1016773f test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10167743 je 0x10167760 */
  if (C.zf) goto L_10167760;
  /* 10167745 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10167747 jg 0x10167760 */
  if ((!C.zf&&C.sf==C.of)) goto L_10167760;
  /* 10167749 jl 0x1016774f */
  if ((C.sf!=C.of)) goto L_1016774f;
  /* 1016774b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016774d jae 0x10167760 */
  if (!C.cf) goto L_10167760;
L_1016774f:;
  /* 1016774f neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10167751 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10167754 mov esi, eax */
  ESI = (EAX);
  /* 10167756 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10167758 or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 1016775c mov edi, edx */
  EDI = (EDX);
  /* 1016775e jmp 0x10167764 */
  goto L_10167764;
L_10167760:;
  /* 10167760 mov esi, eax */
  ESI = (EAX);
  /* 10167762 mov edi, edx */
  EDI = (EDX);
L_10167764:;
  /* 10167764 test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 10167768 jne 0x1016776d */
  if (!C.zf) goto L_1016776d;
  /* 1016776a and edi, 0 */
  { uint32_t _r=(EDI)&(0x0u); EDI = (_r); fl_logic(_r,32); }
L_1016776d:;
  /* 1016776d cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167771 jge 0x1016777c */
  if ((C.sf==C.of)) goto L_1016777c;
  /* 10167773 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1016777a jmp 0x10167780 */
  goto L_10167780;
L_1016777c:;
  /* 1016777c and dword ptr [ebp - 4], 0xfffffff7 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0xfffffff7u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_10167780:;
  /* 10167780 mov eax, esi */
  EAX = (ESI);
  /* 10167782 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 10167784 jne 0x1016778a */
  if (!C.zf) goto L_1016778a;
  /* 10167786 and dword ptr [ebp - 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))&(0x0u); w32((uint32_t)(EBP + -0x1c), (_r)); fl_logic(_r,32); }
L_1016778a:;
  /* 1016778a lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 1016778d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10167790:;
  /* 10167790 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10167793 dec dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))-1; w32((uint32_t)(EBP + -0x10), (_r)); fl_dec(_r,32); }
  /* 10167796 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10167798 jg 0x101677a0 */
  if ((!C.zf&&C.sf==C.of)) goto L_101677a0;
  /* 1016779a mov eax, esi */
  EAX = (ESI);
  /* 1016779c or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 1016779e je 0x101677db */
  if (C.zf) goto L_101677db;
L_101677a0:;
  /* 101677a0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101677a3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101677a4 push edx */
  push32((uint32_t)(EDX));
  /* 101677a5 push eax */
  push32((uint32_t)(EAX));
  /* 101677a6 push edi */
  push32((uint32_t)(EDI));
  /* 101677a7 push esi */
  push32((uint32_t)(ESI));
  /* 101677a8 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 101677ab mov dword ptr [ebp - 0x3c], edx */
  w32((uint32_t)(EBP + -0x3c), (EDX));
  /* 101677ae call 0x101691f0 */
  push32(0x101677b3u); f_101691f0();
  /* 101677b3 push dword ptr [ebp - 0x3c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x3c))));
  /* 101677b6 mov ebx, eax */
  EBX = (EAX);
  /* 101677b8 add ebx, 0x30 */
  { uint32_t _a=(EBX),_b=(0x30u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 101677bb push dword ptr [ebp - 0x40] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x40))));
  /* 101677be push edi */
  push32((uint32_t)(EDI));
  /* 101677bf push esi */
  push32((uint32_t)(ESI));
  /* 101677c0 call 0x10169180 */
  push32(0x101677c5u); f_10169180();
  /* 101677c5 cmp ebx, 0x39 */
  { uint32_t _a=(EBX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101677c8 mov esi, eax */
  ESI = (EAX);
  /* 101677ca mov edi, edx */
  EDI = (EDX);
  /* 101677cc jle 0x101677d1 */
  if ((C.zf||C.sf!=C.of)) goto L_101677d1;
  /* 101677ce add ebx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
L_101677d1:;
  /* 101677d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 101677d4 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 101677d7 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 101677d9 jmp 0x10167790 */
  goto L_10167790;
L_101677db:;
  /* 101677db lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 101677de sub eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101677e1 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 101677e4 test byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x2u); fl_logic(_r,8); }
  /* 101677e8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 101677eb je 0x10167806 */
  if (C.zf) goto L_10167806;
  /* 101677ed mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 101677f0 cmp byte ptr [ecx], 0x30 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101677f3 jne 0x101677f9 */
  if (!C.zf) goto L_101677f9;
  /* 101677f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101677f7 jne 0x10167806 */
  if (!C.zf) goto L_10167806;
L_101677f9:;
  /* 101677f9 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 101677fc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101677fd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10167800 mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_10167803:;
  /* 10167803 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10167806:;
  /* 10167806 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016780a jne 0x10167904 */
  if (!C.zf) goto L_10167904;
  /* 10167810 mov ebx, dword ptr [ebp - 4] */
  EBX = (r32((uint32_t)(EBP + -0x4)));
  /* 10167813 test bl, 0x40 */
  { uint32_t _r=(BL)&(0x40u); fl_logic(_r,8); }
  /* 10167816 je 0x1016783e */
  if (C.zf) goto L_1016783e;
  /* 10167818 test bh, 1 */
  { uint32_t _r=(C.b.b.h)&(0x1u); fl_logic(_r,8); }
  /* 1016781b je 0x10167823 */
  if (C.zf) goto L_10167823;
  /* 1016781d mov byte ptr [ebp - 0x16], 0x2d */
  w8((uint32_t)(EBP + -0x16), (0x2du));
  /* 10167821 jmp 0x10167837 */
  goto L_10167837;
L_10167823:;
  /* 10167823 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 10167826 je 0x1016782e */
  if (C.zf) goto L_1016782e;
  /* 10167828 mov byte ptr [ebp - 0x16], 0x2b */
  w8((uint32_t)(EBP + -0x16), (0x2bu));
  /* 1016782c jmp 0x10167837 */
  goto L_10167837;
L_1016782e:;
  /* 1016782e test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 10167831 je 0x1016783e */
  if (C.zf) goto L_1016783e;
  /* 10167833 mov byte ptr [ebp - 0x16], 0x20 */
  w8((uint32_t)(EBP + -0x16), (0x20u));
L_10167837:;
  /* 10167837 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
L_1016783e:;
  /* 1016783e mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
  /* 10167841 sub esi, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10167844 sub esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10167847 test bl, 0xc */
  { uint32_t _r=(BL)&(0xcu); fl_logic(_r,8); }
  /* 1016784a jne 0x1016785e */
  if (!C.zf) goto L_1016785e;
  /* 1016784c lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1016784f push eax */
  push32((uint32_t)(EAX));
  /* 10167850 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10167853 push esi */
  push32((uint32_t)(ESI));
  /* 10167854 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10167856 call 0x10167972 */
  push32(0x1016785bu); f_10167972();
  /* 1016785b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1016785e:;
  /* 1016785e lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10167861 push eax */
  push32((uint32_t)(EAX));
  /* 10167862 lea eax, [ebp - 0x16] */
  EAX = ((uint32_t)(EBP + -0x16));
  /* 10167865 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10167868 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 1016786b push eax */
  push32((uint32_t)(EAX));
  /* 1016786c call 0x101679a3 */
  push32(0x10167871u); f_101679a3();
  /* 10167871 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10167874 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 10167877 je 0x10167890 */
  if (C.zf) goto L_10167890;
  /* 10167879 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 1016787c jne 0x10167890 */
  if (!C.zf) goto L_10167890;
  /* 1016787e lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10167881 push eax */
  push32((uint32_t)(EAX));
  /* 10167882 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10167885 push esi */
  push32((uint32_t)(ESI));
  /* 10167886 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10167888 call 0x10167972 */
  push32(0x1016788du); f_10167972();
  /* 1016788d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10167890:;
  /* 10167890 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167894 je 0x101678d7 */
  if (C.zf) goto L_101678d7;
  /* 10167896 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016789a jle 0x101678d7 */
  if ((C.zf||C.sf!=C.of)) goto L_101678d7;
  /* 1016789c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1016789f mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 101678a2 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
L_101678a5:;
  /* 101678a5 mov ax, word ptr [ebx] */
  AX = (r16((uint32_t)(EBX)));
  /* 101678a8 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101678a9 push eax */
  push32((uint32_t)(EAX));
  /* 101678aa lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 101678ad push eax */
  push32((uint32_t)(EAX));
  /* 101678ae inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101678af call 0x101690bb */
  push32(0x101678b4u); f_101690bb();
  /* 101678b4 pop ecx */
  ECX = (pop32());
  /* 101678b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101678b7 pop ecx */
  ECX = (pop32());
  /* 101678b8 jle 0x101678ec */
  if ((C.zf||C.sf!=C.of)) goto L_101678ec;
  /* 101678ba lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 101678bd push ecx */
  push32((uint32_t)(ECX));
  /* 101678be push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101678c1 push eax */
  push32((uint32_t)(EAX));
  /* 101678c2 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 101678c5 push eax */
  push32((uint32_t)(EAX));
  /* 101678c6 call 0x101679a3 */
  push32(0x101678cbu); f_101679a3();
  /* 101678cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101678ce mov eax, edi */
  EAX = (EDI);
  /* 101678d0 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101678d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101678d3 jne 0x101678a5 */
  if (!C.zf) goto L_101678a5;
  /* 101678d5 jmp 0x101678ec */
  goto L_101678ec;
L_101678d7:;
  /* 101678d7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101678da push eax */
  push32((uint32_t)(EAX));
  /* 101678db push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101678de push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 101678e1 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 101678e4 call 0x101679a3 */
  push32(0x101678e9u); f_101679a3();
  /* 101678e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101678ec:;
  /* 101678ec test byte ptr [ebp - 4], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x4u); fl_logic(_r,8); }
  /* 101678f0 je 0x10167904 */
  if (C.zf) goto L_10167904;
  /* 101678f2 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101678f5 push eax */
  push32((uint32_t)(EAX));
  /* 101678f6 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101678f9 push esi */
  push32((uint32_t)(ESI));
  /* 101678fa push 0x20 */
  push32((uint32_t)(0x20u));
  /* 101678fc call 0x10167972 */
  push32(0x10167901u); f_10167972();
  /* 10167901 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10167904:;
  /* 10167904 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10167907 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10167909 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1016790a test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 1016790c mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 1016790f jne 0x10167228 */
  if (!C.zf) goto L_10167228;
L_10167915:;
  /* 10167915 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10167918 pop edi */
  EDI = (pop32());
  /* 10167919 pop esi */
  ESI = (pop32());
  /* 1016791a pop ebx */
  EBX = (pop32());
  /* 1016791b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1016791c ret  */
  ESPCHK(0x101671fcu, _esp0);
  ESP += 4; return;
}

/* FUN_1000793d @ 0x1016793d (53 bytes, 25 insns) */
void f_1016793d(void) {
  FTRACE(0x1016793du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016793d push ebp */
  push32((uint32_t)(EBP));
  /* 1016793e mov ebp, esp */
  EBP = (ESP);
  /* 10167940 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10167943 dec dword ptr [ecx + 4] */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))-1; w32((uint32_t)(ECX + 0x4), (_r)); fl_dec(_r,32); }
  /* 10167946 js 0x10167956 */
  if (C.sf) goto L_10167956;
  /* 10167948 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1016794a mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1016794d mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1016794f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10167951 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 10167954 jmp 0x10167961 */
  goto L_10167961;
L_10167956:;
  /* 10167956 push ecx */
  push32((uint32_t)(ECX));
  /* 10167957 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1016795a call 0x101670e4 */
  push32(0x1016795fu); f_101670e4();
  /* 1016795f pop ecx */
  ECX = (pop32());
  /* 10167960 pop ecx */
  ECX = (pop32());
L_10167961:;
  /* 10167961 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167964 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10167967 jne 0x1016796e */
  if (!C.zf) goto L_1016796e;
  /* 10167969 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1016796c pop ebp */
  EBP = (pop32());
  /* 1016796d ret  */
  ESPCHK(0x1016793du, _esp0);
  ESP += 4; return;
L_1016796e:;
  /* 1016796e inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 10167970 pop ebp */
  EBP = (pop32());
  /* 10167971 ret  */
  ESPCHK(0x1016793du, _esp0);
  ESP += 4; return;
}

/* FUN_10007972 @ 0x10167972 (49 bytes, 22 insns) */
void f_10167972(void) {
  FTRACE(0x10167972u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10167972 push esi */
  push32((uint32_t)(ESI));
  /* 10167973 push edi */
  push32((uint32_t)(EDI));
  /* 10167974 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10167978 mov eax, edi */
  EAX = (EDI);
  /* 1016797a dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1016797b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016797d jle 0x101679a0 */
  if ((C.zf||C.sf!=C.of)) goto L_101679a0;
  /* 1016797f mov esi, dword ptr [esp + 0x18] */
  ESI = (r32((uint32_t)(ESP + 0x18)));
L_10167983:;
  /* 10167983 push esi */
  push32((uint32_t)(ESI));
  /* 10167984 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10167988 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 1016798c call 0x1016793d */
  push32(0x10167991u); f_1016793d();
  /* 10167991 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10167994 cmp dword ptr [esi], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167997 je 0x101679a0 */
  if (C.zf) goto L_101679a0;
  /* 10167999 mov eax, edi */
  EAX = (EDI);
  /* 1016799b dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1016799c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016799e jg 0x10167983 */
  if ((!C.zf&&C.sf==C.of)) goto L_10167983;
L_101679a0:;
  /* 101679a0 pop edi */
  EDI = (pop32());
  /* 101679a1 pop esi */
  ESI = (pop32());
  /* 101679a2 ret  */
  ESPCHK(0x10167972u, _esp0);
  ESP += 4; return;
}

/* FUN_100079a3 @ 0x101679a3 (56 bytes, 27 insns) */
void f_101679a3(void) {
  FTRACE(0x101679a3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101679a3 push ebx */
  push32((uint32_t)(EBX));
  /* 101679a4 mov ebx, dword ptr [esp + 0xc] */
  EBX = (r32((uint32_t)(ESP + 0xc)));
  /* 101679a8 mov eax, ebx */
  EAX = (EBX);
  /* 101679aa dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101679ab push esi */
  push32((uint32_t)(ESI));
  /* 101679ac push edi */
  push32((uint32_t)(EDI));
  /* 101679ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101679af jle 0x101679d7 */
  if ((C.zf||C.sf!=C.of)) goto L_101679d7;
  /* 101679b1 mov edi, dword ptr [esp + 0x1c] */
  EDI = (r32((uint32_t)(ESP + 0x1c)));
  /* 101679b5 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
L_101679b9:;
  /* 101679b9 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 101679bc push edi */
  push32((uint32_t)(EDI));
  /* 101679bd inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101679be push dword ptr [esp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x1c))));
  /* 101679c2 push eax */
  push32((uint32_t)(EAX));
  /* 101679c3 call 0x1016793d */
  push32(0x101679c8u); f_1016793d();
  /* 101679c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101679cb cmp dword ptr [edi], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101679ce je 0x101679d7 */
  if (C.zf) goto L_101679d7;
  /* 101679d0 mov eax, ebx */
  EAX = (EBX);
  /* 101679d2 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101679d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101679d5 jg 0x101679b9 */
  if ((!C.zf&&C.sf==C.of)) goto L_101679b9;
L_101679d7:;
  /* 101679d7 pop edi */
  EDI = (pop32());
  /* 101679d8 pop esi */
  ESI = (pop32());
  /* 101679d9 pop ebx */
  EBX = (pop32());
  /* 101679da ret  */
  ESPCHK(0x101679a3u, _esp0);
  ESP += 4; return;
}

/* FUN_100079db @ 0x101679db (13 bytes, 5 insns) */
void f_101679db(void) {
  FTRACE(0x101679dbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101679db mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101679df add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 101679e2 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 101679e4 mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 101679e7 ret  */
  ESPCHK(0x101679dbu, _esp0);
  ESP += 4; return;
}

/* FUN_100079e8 @ 0x101679e8 (16 bytes, 6 insns) */
void f_101679e8(void) {
  FTRACE(0x101679e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101679e8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101679ec add dword ptr [eax], 8 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x8u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 101679ef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 101679f1 mov eax, dword ptr [ecx - 8] */
  EAX = (r32((uint32_t)(ECX + -0x8)));
  /* 101679f4 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 101679f7 ret  */
  ESPCHK(0x101679e8u, _esp0);
  ESP += 4; return;
}

/* FUN_100079f8 @ 0x101679f8 (14 bytes, 5 insns) */
void f_101679f8(void) {
  FTRACE(0x101679f8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101679f8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101679fc add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 101679ff mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 10167a01 mov ax, word ptr [eax - 4] */
  AX = (r16((uint32_t)(EAX + -0x4)));
  /* 10167a05 ret  */
  ESPCHK(0x101679f8u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a06 @ 0x10167a06 (18 bytes, 6 insns) */
void f_10167a06(void) {
  FTRACE(0x10167a06u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10167a06 push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 10167a0b push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 10167a10 call 0x1016929a */
  push32(0x10167a15u); f_1016929a();
  /* 10167a15 pop ecx */
  ECX = (pop32());
  /* 10167a16 pop ecx */
  ECX = (pop32());
  /* 10167a17 ret  */
  ESPCHK(0x10167a06u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a18 @ 0x10167a18 (62 bytes, 24 insns) */
void f_10167a18(void) {
  FTRACE(0x10167a18u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10167a18 push ebp */
  push32((uint32_t)(EBP));
  /* 10167a19 mov ebp, esp */
  EBP = (ESP);
  /* 10167a1b sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10167a1e fld qword ptr [0x1016e170] */
  fpu_push(rf64((uint32_t)(0x1016e170)));
  /* 10167a24 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 10167a27 fld qword ptr [0x1016e168] */
  fpu_push(rf64((uint32_t)(0x1016e168)));
  /* 10167a2d fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 10167a30 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 10167a33 fdiv qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x8)));
  /* 10167a36 fmul qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x8)));
  /* 10167a39 fsubr qword ptr [ebp - 0x10] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x10))) - FPU_ST(0);
  /* 10167a3c fstp qword ptr [ebp - 0x18] */
  wf64((uint32_t)(EBP + -0x18), FPU_ST(0));
  (void)fpu_pop();
  /* 10167a3f fld qword ptr [ebp - 0x18] */
  fpu_push(rf64((uint32_t)(EBP + -0x18)));
  /* 10167a42 fcomp qword ptr [0x1016e160] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x1016e160)));
  (void)fpu_pop();
  /* 10167a48 fnstsw ax */
  AX = fpu_status();
  /* 10167a4a sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10167a4b jbe 0x10167a52 */
  if ((C.cf||C.zf)) goto L_10167a52;
  /* 10167a4d push 1 */
  push32((uint32_t)(0x1u));
  /* 10167a4f pop eax */
  EAX = (pop32());
  /* 10167a50 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10167a51 ret  */
  ESPCHK(0x10167a18u, _esp0);
  ESP += 4; return;
L_10167a52:;
  /* 10167a52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10167a54 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10167a55 ret  */
  ESPCHK(0x10167a18u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a56 @ 0x10167a56 (41 bytes, 13 insns) */
void f_10167a56(void) {
  FTRACE(0x10167a56u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10167a56 push 0x1016e194 */
  push32((uint32_t)(0x1016e194u));
  /* 10167a5b call dword ptr [0x1016e004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e004))), 0x10167a61u);
  /* 10167a61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10167a63 je 0x10167a7a */
  if (C.zf) goto L_10167a7a;
  /* 10167a65 push 0x1016e178 */
  push32((uint32_t)(0x1016e178u));
  /* 10167a6a push eax */
  push32((uint32_t)(EAX));
  /* 10167a6b call dword ptr [0x1016e088] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e088))), 0x10167a71u);
  /* 10167a71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10167a73 je 0x10167a7a */
  if (C.zf) goto L_10167a7a;
  /* 10167a75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10167a77 call eax */
  call_ind((uint32_t)(EAX), 0x10167a79u);
  /* 10167a79 ret  */
  ESPCHK(0x10167a56u, _esp0);
  ESP += 4; return;
L_10167a7a:;
  /* 10167a7a jmp 0x10167a18 */
  f_10167a18(); return;
}

/* FUN_10007a7f @ 0x10167a7f (90 bytes, 37 insns) */
void f_10167a7f(void) {
  FTRACE(0x10167a7fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10167a7f push esi */
  push32((uint32_t)(ESI));
  /* 10167a80 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10167a84 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10167a87 push eax */
  push32((uint32_t)(EAX));
  /* 10167a88 call 0x10169440 */
  push32(0x10167a8du); f_10169440();
  /* 10167a8d cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167a90 pop ecx */
  ECX = (pop32());
  /* 10167a91 je 0x10167abf */
  if (C.zf) goto L_10167abf;
L_10167a93:;
  /* 10167a93 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10167a94 cmp dword ptr [0x10170c60], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10170c60))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167a9b jle 0x10167aac */
  if ((C.zf||C.sf!=C.of)) goto L_10167aac;
  /* 10167a9d movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10167aa0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10167aa2 push eax */
  push32((uint32_t)(EAX));
  /* 10167aa3 call 0x101693cb */
  push32(0x10167aa8u); f_101693cb();
  /* 10167aa8 pop ecx */
  ECX = (pop32());
  /* 10167aa9 pop ecx */
  ECX = (pop32());
  /* 10167aaa jmp 0x10167abb */
  goto L_10167abb;
L_10167aac:;
  /* 10167aac movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10167aaf mov ecx, dword ptr [0x10170a50] */
  ECX = (r32((uint32_t)(0x10170a50)));
  /* 10167ab5 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 10167ab8 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_10167abb:;
  /* 10167abb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10167abd jne 0x10167a93 */
  if (!C.zf) goto L_10167a93;
L_10167abf:;
  /* 10167abf mov cl, byte ptr [0x10170c64] */
  CL = (r8((uint32_t)(0x10170c64)));
  /* 10167ac5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10167ac7 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 10167ac9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10167aca:;
  /* 10167aca mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 10167acc mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
  /* 10167ace mov al, cl */
  AL = (CL);
  /* 10167ad0 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 10167ad2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10167ad3 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10167ad5 jne 0x10167aca */
  if (!C.zf) goto L_10167aca;
  /* 10167ad7 pop esi */
  ESI = (pop32());
  /* 10167ad8 ret  */
  ESPCHK(0x10167a7fu, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x10167b3f (62 bytes, 29 insns) */
void f_10167b3f(void) {
  FTRACE(0x10167b3fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10167b3f push ebp */
  push32((uint32_t)(EBP));
  /* 10167b40 mov ebp, esp */
  EBP = (ESP);
  /* 10167b42 push ecx */
  push32((uint32_t)(ECX));
  /* 10167b43 push ecx */
  push32((uint32_t)(ECX));
  /* 10167b44 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167b48 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10167b4b je 0x10167b68 */
  if (C.zf) goto L_10167b68;
  /* 10167b4d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10167b50 push eax */
  push32((uint32_t)(EAX));
  /* 10167b51 call 0x1016990c */
  push32(0x10167b56u); f_1016990c();
  /* 10167b56 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10167b59 pop ecx */
  ECX = (pop32());
  /* 10167b5a pop ecx */
  ECX = (pop32());
  /* 10167b5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10167b5e mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10167b60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10167b63 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10167b66 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10167b67 ret  */
  ESPCHK(0x10167b3fu, _esp0);
  ESP += 4; return;
L_10167b68:;
  /* 10167b68 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10167b6b push eax */
  push32((uint32_t)(EAX));
  /* 10167b6c call 0x10169939 */
  push32(0x10167b71u); f_10169939();
  /* 10167b71 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10167b74 pop ecx */
  ECX = (pop32());
  /* 10167b75 pop ecx */
  ECX = (pop32());
  /* 10167b76 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10167b79 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10167b7b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10167b7c ret  */
  ESPCHK(0x10167b3fu, _esp0);
  ESP += 4; return;
}

/* FUN_10007b7d @ 0x10167b7d (97 bytes, 42 insns) */
void f_10167b7d(void) {
  FTRACE(0x10167b7du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10167b7d push ebp */
  push32((uint32_t)(EBP));
  /* 10167b7e mov ebp, esp */
  EBP = (ESP);
  /* 10167b80 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10167b83 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10167b86 push esi */
  push32((uint32_t)(ESI));
  /* 10167b87 push eax */
  push32((uint32_t)(EAX));
  /* 10167b88 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10167b8b push eax */
  push32((uint32_t)(EAX));
  /* 10167b8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10167b8f push ecx */
  push32((uint32_t)(ECX));
  /* 10167b90 push ecx */
  push32((uint32_t)(ECX));
  /* 10167b91 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10167b93 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10167b96 call 0x101699dd */
  push32(0x10167b9bu); f_101699dd();
  /* 10167b9b mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10167b9e lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10167ba1 push eax */
  push32((uint32_t)(EAX));
  /* 10167ba2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10167ba5 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 10167ba8 push eax */
  push32((uint32_t)(EAX));
  /* 10167ba9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10167bab cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167baf sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10167bb2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10167bb4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10167bb6 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 10167bb9 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10167bbb add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10167bbd push ecx */
  push32((uint32_t)(ECX));
  /* 10167bbe call 0x10169966 */
  push32(0x10167bc3u); f_10169966();
  /* 10167bc3 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10167bc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10167bc8 push eax */
  push32((uint32_t)(EAX));
  /* 10167bc9 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10167bcc push esi */
  push32((uint32_t)(ESI));
  /* 10167bcd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10167bd0 call 0x10167bde */
  push32(0x10167bd5u); f_10167bde();
  /* 10167bd5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10167bd8 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10167bdb pop esi */
  ESI = (pop32());
  /* 10167bdc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10167bdd ret  */
  ESPCHK(0x10167b7du, _esp0);
  ESP += 4; return;
}

/* FUN_10007bde @ 0x10167bde (194 bytes, 91 insns) */
void f_10167bde(void) {
  FTRACE(0x10167bdeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10167bde push ebp */
  push32((uint32_t)(EBP));
  /* 10167bdf mov ebp, esp */
  EBP = (ESP);
  /* 10167be1 push ebx */
  push32((uint32_t)(EBX));
  /* 10167be2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10167be4 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10167be7 push esi */
  push32((uint32_t)(ESI));
  /* 10167be8 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 10167beb push edi */
  push32((uint32_t)(EDI));
  /* 10167bec mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10167bef je 0x10167c0c */
  if (C.zf) goto L_10167c0c;
  /* 10167bf1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10167bf3 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167bf6 setg al */
  AL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 10167bf9 push eax */
  push32((uint32_t)(EAX));
  /* 10167bfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10167bfc cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167bff sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10167c02 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10167c04 push eax */
  push32((uint32_t)(EAX));
  /* 10167c05 call 0x10167e80 */
  push32(0x10167c0au); f_10167e80();
  /* 10167c0a pop ecx */
  ECX = (pop32());
  /* 10167c0b pop ecx */
  ECX = (pop32());
L_10167c0c:;
  /* 10167c0c cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167c0f mov eax, edi */
  EAX = (EDI);
  /* 10167c11 jne 0x10167c19 */
  if (!C.zf) goto L_10167c19;
  /* 10167c13 mov byte ptr [edi], 0x2d */
  w8((uint32_t)(EDI), (0x2du));
  /* 10167c16 lea eax, [edi + 1] */
  EAX = ((uint32_t)(EDI + 0x1));
L_10167c19:;
  /* 10167c19 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167c1c jle 0x10167c30 */
  if ((C.zf||C.sf!=C.of)) goto L_10167c30;
  /* 10167c1e mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 10167c21 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 10167c24 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10167c26 mov eax, ecx */
  EAX = (ECX);
  /* 10167c28 mov cl, byte ptr [0x10170c64] */
  CL = (r8((uint32_t)(0x10170c64)));
  /* 10167c2e mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
L_10167c30:;
  /* 10167c30 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10167c32 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10167c35 push 0x1016e1a8 */
  push32((uint32_t)(0x1016e1a8u));
  /* 10167c3a sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10167c3d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10167c3f add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10167c42 push ecx */
  push32((uint32_t)(ECX));
  /* 10167c43 call 0x10169af0 */
  push32(0x10167c48u); f_10169af0();
  /* 10167c48 cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167c4b pop ecx */
  ECX = (pop32());
  /* 10167c4c pop ecx */
  ECX = (pop32());
  /* 10167c4d mov ecx, eax */
  ECX = (EAX);
  /* 10167c4f je 0x10167c54 */
  if (C.zf) goto L_10167c54;
  /* 10167c51 mov byte ptr [ecx], 0x45 */
  w8((uint32_t)(ECX), (0x45u));
L_10167c54:;
  /* 10167c54 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 10167c57 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10167c58 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10167c5b je 0x10167c99 */
  if (C.zf) goto L_10167c99;
  /* 10167c5d mov ebx, dword ptr [esi + 4] */
  EBX = (r32((uint32_t)(ESI + 0x4)));
  /* 10167c60 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10167c61 jns 0x10167c68 */
  if (!C.sf) goto L_10167c68;
  /* 10167c63 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 10167c65 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
L_10167c68:;
  /* 10167c68 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10167c69 cmp ebx, 0x64 */
  { uint32_t _a=(EBX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167c6c jl 0x10167c7f */
  if ((C.sf!=C.of)) goto L_10167c7f;
  /* 10167c6e mov eax, ebx */
  EAX = (EBX);
  /* 10167c70 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10167c72 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10167c73 pop esi */
  ESI = (pop32());
  /* 10167c74 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10167c76 add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10167c78 mov eax, ebx */
  EAX = (EBX);
  /* 10167c7a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10167c7b idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10167c7d mov ebx, edx */
  EBX = (EDX);
L_10167c7f:;
  /* 10167c7f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10167c80 cmp ebx, 0xa */
  { uint32_t _a=(EBX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167c83 jl 0x10167c96 */
  if ((C.sf!=C.of)) goto L_10167c96;
  /* 10167c85 mov eax, ebx */
  EAX = (EBX);
  /* 10167c87 push 0xa */
  push32((uint32_t)(0xau));
  /* 10167c89 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10167c8a pop esi */
  ESI = (pop32());
  /* 10167c8b idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10167c8d add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10167c8f mov eax, ebx */
  EAX = (EBX);
  /* 10167c91 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10167c92 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10167c94 mov ebx, edx */
  EBX = (EDX);
L_10167c96:;
  /* 10167c96 add byte ptr [ecx + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x1))),_b=(BL),_r=_a+_b; w8((uint32_t)(ECX + 0x1), (_r)); fl_add(_a,_b,_r,8); }
L_10167c99:;
  /* 10167c99 mov eax, edi */
  EAX = (EDI);
  /* 10167c9b pop edi */
  EDI = (pop32());
  /* 10167c9c pop esi */
  ESI = (pop32());
  /* 10167c9d pop ebx */
  EBX = (pop32());
  /* 10167c9e pop ebp */
  EBP = (pop32());
  /* 10167c9f ret  */
  ESPCHK(0x10167bdeu, _esp0);
  ESP += 4; return;
}

/* FUN_10007ca0 @ 0x10167ca0 (85 bytes, 37 insns) */
void f_10167ca0(void) {
  FTRACE(0x10167ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10167ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 10167ca1 mov ebp, esp */
  EBP = (ESP);
  /* 10167ca3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10167ca6 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10167ca9 push esi */
  push32((uint32_t)(ESI));
  /* 10167caa push eax */
  push32((uint32_t)(EAX));
  /* 10167cab lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10167cae push eax */
  push32((uint32_t)(EAX));
  /* 10167caf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10167cb2 push ecx */
  push32((uint32_t)(ECX));
  /* 10167cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10167cb4 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10167cb6 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10167cb9 call 0x101699dd */
  push32(0x10167cbeu); f_101699dd();
  /* 10167cbe mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10167cc1 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10167cc4 push eax */
  push32((uint32_t)(EAX));
  /* 10167cc5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10167cc8 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10167cca push eax */
  push32((uint32_t)(EAX));
  /* 10167ccb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10167ccd cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167cd1 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10167cd4 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10167cd7 push eax */
  push32((uint32_t)(EAX));
  /* 10167cd8 call 0x10169966 */
  push32(0x10167cddu); f_10169966();
  /* 10167cdd lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10167ce0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10167ce2 push eax */
  push32((uint32_t)(EAX));
  /* 10167ce3 push esi */
  push32((uint32_t)(ESI));
  /* 10167ce4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10167ce7 call 0x10167cf5 */
  push32(0x10167cecu); f_10167cf5();
  /* 10167cec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10167cef add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10167cf2 pop esi */
  ESI = (pop32());
  /* 10167cf3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10167cf4 ret  */
  ESPCHK(0x10167ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cf5 @ 0x10167cf5 (167 bytes, 73 insns) */
void f_10167cf5(void) {
  FTRACE(0x10167cf5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10167cf5 push ebp */
  push32((uint32_t)(EBP));
  /* 10167cf6 mov ebp, esp */
  EBP = (ESP);
  /* 10167cf8 push ebx */
  push32((uint32_t)(EBX));
  /* 10167cf9 push esi */
  push32((uint32_t)(ESI));
  /* 10167cfa mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10167cfd mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10167d00 push edi */
  push32((uint32_t)(EDI));
  /* 10167d01 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 10167d04 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10167d05 cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10167d09 je 0x10167d25 */
  if (C.zf) goto L_10167d25;
  /* 10167d0b cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167d0e jne 0x10167d25 */
  if (!C.zf) goto L_10167d25;
  /* 10167d10 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10167d12 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167d15 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10167d18 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10167d1a add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10167d1c mov eax, ecx */
  EAX = (ECX);
  /* 10167d1e mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 10167d21 and byte ptr [eax + 1], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1)))&(0x0u); w8((uint32_t)(EAX + 0x1), (_r)); fl_logic(_r,8); }
L_10167d25:;
  /* 10167d25 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167d28 mov edi, ebx */
  EDI = (EBX);
  /* 10167d2a jne 0x10167d32 */
  if (!C.zf) goto L_10167d32;
  /* 10167d2c mov byte ptr [ebx], 0x2d */
  w8((uint32_t)(EBX), (0x2du));
  /* 10167d2f lea edi, [ebx + 1] */
  EDI = ((uint32_t)(EBX + 0x1));
L_10167d32:;
  /* 10167d32 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 10167d35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10167d37 jg 0x10167d49 */
  if ((!C.zf&&C.sf==C.of)) goto L_10167d49;
  /* 10167d39 push 1 */
  push32((uint32_t)(0x1u));
  /* 10167d3b push edi */
  push32((uint32_t)(EDI));
  /* 10167d3c call 0x10167e80 */
  push32(0x10167d41u); f_10167e80();
  /* 10167d41 pop ecx */
  ECX = (pop32());
  /* 10167d42 mov byte ptr [edi], 0x30 */
  w8((uint32_t)(EDI), (0x30u));
  /* 10167d45 pop ecx */
  ECX = (pop32());
  /* 10167d46 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10167d47 jmp 0x10167d4b */
  goto L_10167d4b;
L_10167d49:;
  /* 10167d49 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10167d4b:;
  /* 10167d4b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167d4f jle 0x10167d95 */
  if ((C.zf||C.sf!=C.of)) goto L_10167d95;
  /* 10167d51 push 1 */
  push32((uint32_t)(0x1u));
  /* 10167d53 push edi */
  push32((uint32_t)(EDI));
  /* 10167d54 call 0x10167e80 */
  push32(0x10167d59u); f_10167e80();
  /* 10167d59 mov al, byte ptr [0x10170c64] */
  AL = (r8((uint32_t)(0x10170c64)));
  /* 10167d5e pop ecx */
  ECX = (pop32());
  /* 10167d5f mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10167d61 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 10167d64 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10167d65 pop ecx */
  ECX = (pop32());
  /* 10167d66 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10167d68 jge 0x10167d95 */
  if ((C.sf==C.of)) goto L_10167d95;
  /* 10167d6a cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10167d6e je 0x10167d74 */
  if (C.zf) goto L_10167d74;
  /* 10167d70 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 10167d72 jmp 0x10167d7b */
  goto L_10167d7b;
L_10167d74:;
  /* 10167d74 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 10167d76 cmp dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167d79 jl 0x10167d7e */
  if ((C.sf!=C.of)) goto L_10167d7e;
L_10167d7b:;
  /* 10167d7b mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_10167d7e:;
  /* 10167d7e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10167d81 push edi */
  push32((uint32_t)(EDI));
  /* 10167d82 call 0x10167e80 */
  push32(0x10167d87u); f_10167e80();
  /* 10167d87 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10167d8a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10167d8c push edi */
  push32((uint32_t)(EDI));
  /* 10167d8d call 0x10169be0 */
  push32(0x10167d92u); f_10169be0();
  /* 10167d92 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10167d95:;
  /* 10167d95 pop edi */
  EDI = (pop32());
  /* 10167d96 mov eax, ebx */
  EAX = (EBX);
  /* 10167d98 pop esi */
  ESI = (pop32());
  /* 10167d99 pop ebx */
  EBX = (pop32());
  /* 10167d9a pop ebp */
  EBP = (pop32());
  /* 10167d9b ret  */
  ESPCHK(0x10167cf5u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d9c @ 0x10167d9c (147 bytes, 66 insns) */
void f_10167d9c(void) {
  FTRACE(0x10167d9cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10167d9c push ebp */
  push32((uint32_t)(EBP));
  /* 10167d9d mov ebp, esp */
  EBP = (ESP);
  /* 10167d9f sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10167da2 push ebx */
  push32((uint32_t)(EBX));
  /* 10167da3 push esi */
  push32((uint32_t)(ESI));
  /* 10167da4 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10167da7 push edi */
  push32((uint32_t)(EDI));
  /* 10167da8 push eax */
  push32((uint32_t)(EAX));
  /* 10167da9 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10167dac push eax */
  push32((uint32_t)(EAX));
  /* 10167dad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10167db0 push ecx */
  push32((uint32_t)(ECX));
  /* 10167db1 push ecx */
  push32((uint32_t)(ECX));
  /* 10167db2 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10167db4 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10167db7 call 0x101699dd */
  push32(0x10167dbcu); f_101699dd();
  /* 10167dbc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10167dbf mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 10167dc2 lea esi, [eax - 1] */
  ESI = ((uint32_t)(EAX + -0x1));
  /* 10167dc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10167dc7 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167dcb sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10167dce add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10167dd1 mov edi, eax */
  EDI = (EAX);
  /* 10167dd3 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10167dd6 push eax */
  push32((uint32_t)(EAX));
  /* 10167dd7 push ebx */
  push32((uint32_t)(EBX));
  /* 10167dd8 push edi */
  push32((uint32_t)(EDI));
  /* 10167dd9 call 0x10169966 */
  push32(0x10167ddeu); f_10169966();
  /* 10167dde mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10167de1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10167de4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10167de5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167de7 setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 10167dea cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167ded jl 0x10167e15 */
  if ((C.sf!=C.of)) goto L_10167e15;
  /* 10167def cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167df1 jge 0x10167e15 */
  if ((C.sf==C.of)) goto L_10167e15;
  /* 10167df3 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10167df5 je 0x10167e01 */
  if (C.zf) goto L_10167e01;
L_10167df7:;
  /* 10167df7 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10167df9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10167dfa test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10167dfc jne 0x10167df7 */
  if (!C.zf) goto L_10167df7;
  /* 10167dfe and byte ptr [edi - 2], al */
  { uint32_t _r=(r8((uint32_t)(EDI + -0x2)))&(AL); w8((uint32_t)(EDI + -0x2), (_r)); fl_logic(_r,8); }
L_10167e01:;
  /* 10167e01 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10167e04 push 1 */
  push32((uint32_t)(0x1u));
  /* 10167e06 push eax */
  push32((uint32_t)(EAX));
  /* 10167e07 push ebx */
  push32((uint32_t)(EBX));
  /* 10167e08 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10167e0b call 0x10167cf5 */
  push32(0x10167e10u); f_10167cf5();
  /* 10167e10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10167e13 jmp 0x10167e2a */
  goto L_10167e2a;
L_10167e15:;
  /* 10167e15 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10167e18 push 1 */
  push32((uint32_t)(0x1u));
  /* 10167e1a push eax */
  push32((uint32_t)(EAX));
  /* 10167e1b push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10167e1e push ebx */
  push32((uint32_t)(EBX));
  /* 10167e1f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10167e22 call 0x10167bde */
  push32(0x10167e27u); f_10167bde();
  /* 10167e27 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10167e2a:;
  /* 10167e2a pop edi */
  EDI = (pop32());
  /* 10167e2b pop esi */
  ESI = (pop32());
  /* 10167e2c pop ebx */
  EBX = (pop32());
  /* 10167e2d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10167e2e ret  */
  ESPCHK(0x10167d9cu, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x10167e2f (81 bytes, 29 insns) */
void f_10167e2f(void) {
  FTRACE(0x10167e2fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10167e2f push ebp */
  push32((uint32_t)(EBP));
  /* 10167e30 mov ebp, esp */
  EBP = (ESP);
  /* 10167e32 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167e36 je 0x10167e6a */
  if (C.zf) goto L_10167e6a;
  /* 10167e38 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167e3c je 0x10167e6a */
  if (C.zf) goto L_10167e6a;
  /* 10167e3e cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167e42 jne 0x10167e57 */
  if (!C.zf) goto L_10167e57;
  /* 10167e44 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10167e47 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10167e4a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10167e4d call 0x10167ca0 */
  push32(0x10167e52u); f_10167ca0();
  /* 10167e52 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10167e55 pop ebp */
  EBP = (pop32());
  /* 10167e56 ret  */
  ESPCHK(0x10167e2fu, _esp0);
  ESP += 4; return;
L_10167e57:;
  /* 10167e57 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10167e5a push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10167e5d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10167e60 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10167e63 call 0x10167d9c */
  push32(0x10167e68u); f_10167d9c();
  /* 10167e68 jmp 0x10167e7b */
  goto L_10167e7b;
L_10167e6a:;
  /* 10167e6a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10167e6d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10167e70 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10167e73 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10167e76 call 0x10167b7d */
  push32(0x10167e7bu); f_10167b7d();
L_10167e7b:;
  /* 10167e7b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10167e7e pop ebp */
  EBP = (pop32());
  /* 10167e7f ret  */
  ESPCHK(0x10167e2fu, _esp0);
  ESP += 4; return;
}

/* FUN_10007e80 @ 0x10167e80 (37 bytes, 18 insns) */
void f_10167e80(void) {
  FTRACE(0x10167e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10167e80 push edi */
  push32((uint32_t)(EDI));
  /* 10167e81 mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 10167e85 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10167e87 je 0x10167ea3 */
  if (C.zf) goto L_10167ea3;
  /* 10167e89 push esi */
  push32((uint32_t)(ESI));
  /* 10167e8a mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 10167e8e push esi */
  push32((uint32_t)(ESI));
  /* 10167e8f call 0x10169040 */
  push32(0x10167e94u); f_10169040();
  /* 10167e94 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10167e95 push eax */
  push32((uint32_t)(EAX));
  /* 10167e96 push esi */
  push32((uint32_t)(ESI));
  /* 10167e97 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10167e99 push esi */
  push32((uint32_t)(ESI));
  /* 10167e9a call 0x10169c40 */
  push32(0x10167e9fu); f_10169c40();
  /* 10167e9f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10167ea2 pop esi */
  ESI = (pop32());
L_10167ea3:;
  /* 10167ea3 pop edi */
  EDI = (pop32());
  /* 10167ea4 ret  */
  ESPCHK(0x10167e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ea5 @ 0x10167ea5 (45 bytes, 12 insns) */
void f_10167ea5(void) {
  FTRACE(0x10167ea5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10167ea5 mov eax, dword ptr [0x101706dc] */
  EAX = (r32((uint32_t)(0x101706dc)));
  /* 10167eaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10167eac je 0x10167eb0 */
  if (C.zf) goto L_10167eb0;
  /* 10167eae call eax */
  call_ind((uint32_t)(EAX), 0x10167eb0u);
L_10167eb0:;
  /* 10167eb0 push 0x1016f014 */
  push32((uint32_t)(0x1016f014u));
  /* 10167eb5 push 0x1016f008 */
  push32((uint32_t)(0x1016f008u));
  /* 10167eba call 0x10167fa9 */
  push32(0x10167ebfu); f_10167fa9();
  /* 10167ebf push 0x1016f004 */
  push32((uint32_t)(0x1016f004u));
  /* 10167ec4 push 0x1016f000 */
  push32((uint32_t)(0x1016f000u));
  /* 10167ec9 call 0x10167fa9 */
  push32(0x10167eceu); f_10167fa9();
  /* 10167ece add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10167ed1 ret  */
  ESPCHK(0x10167ea5u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10167ed2 (17 bytes, 6 insns) */
void f_10167ed2(void) {
  FTRACE(0x10167ed2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10167ed2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10167ed4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10167ed6 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10167eda call 0x10167ef2 */
  push32(0x10167edfu); f_10167ef2();
  /* 10167edf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10167ee2 ret  */
  ESPCHK(0x10167ed2u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ee3 @ 0x10167ee3 (15 bytes, 6 insns) */
void f_10167ee3(void) {
  FTRACE(0x10167ee3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10167ee3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10167ee5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10167ee7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10167ee9 call 0x10167ef2 */
  push32(0x10167eeeu); f_10167ef2();
  /* 10167eee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10167ef1 ret  */
  ESPCHK(0x10167ee3u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ef2 @ 0x10167ef2 (163 bytes, 53 insns) */
void f_10167ef2(void) {
  FTRACE(0x10167ef2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10167ef2 push edi */
  push32((uint32_t)(EDI));
  /* 10167ef3 call 0x10167f97 */
  push32(0x10167ef8u); f_10167f97();
  /* 10167ef8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10167efa pop edi */
  EDI = (pop32());
  /* 10167efb cmp dword ptr [0x10176718], edi */
  { uint32_t _a=(r32((uint32_t)(0x10176718))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167f01 jne 0x10167f14 */
  if (!C.zf) goto L_10167f14;
  /* 10167f03 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10167f07 call dword ptr [0x1016e020] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e020))), 0x10167f0du);
  /* 10167f0d push eax */
  push32((uint32_t)(EAX));
  /* 10167f0e call dword ptr [0x1016e01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e01c))), 0x10167f14u);
L_10167f14:;
  /* 10167f14 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167f19 push ebx */
  push32((uint32_t)(EBX));
  /* 10167f1a mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10167f1e mov dword ptr [0x10176714], edi */
  w32((uint32_t)(0x10176714), (EDI));
  /* 10167f24 mov byte ptr [0x10176710], bl */
  w8((uint32_t)(0x10176710), (BL));
  /* 10167f2a jne 0x10167f68 */
  if (!C.zf) goto L_10167f68;
  /* 10167f2c mov eax, dword ptr [0x10177dd0] */
  EAX = (r32((uint32_t)(0x10177dd0)));
  /* 10167f31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10167f33 je 0x10167f57 */
  if (C.zf) goto L_10167f57;
  /* 10167f35 mov ecx, dword ptr [0x10177dcc] */
  ECX = (r32((uint32_t)(0x10177dcc)));
  /* 10167f3b push esi */
  push32((uint32_t)(ESI));
  /* 10167f3c lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 10167f3f cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167f41 jb 0x10167f56 */
  if (C.cf) goto L_10167f56;
L_10167f43:;
  /* 10167f43 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10167f45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10167f47 je 0x10167f4b */
  if (C.zf) goto L_10167f4b;
  /* 10167f49 call eax */
  call_ind((uint32_t)(EAX), 0x10167f4bu);
L_10167f4b:;
  /* 10167f4b sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10167f4e cmp esi, dword ptr [0x10177dd0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10177dd0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167f54 jae 0x10167f43 */
  if (!C.cf) goto L_10167f43;
L_10167f56:;
  /* 10167f56 pop esi */
  ESI = (pop32());
L_10167f57:;
  /* 10167f57 push 0x1016f020 */
  push32((uint32_t)(0x1016f020u));
  /* 10167f5c push 0x1016f018 */
  push32((uint32_t)(0x1016f018u));
  /* 10167f61 call 0x10167fa9 */
  push32(0x10167f66u); f_10167fa9();
  /* 10167f66 pop ecx */
  ECX = (pop32());
  /* 10167f67 pop ecx */
  ECX = (pop32());
L_10167f68:;
  /* 10167f68 push 0x1016f028 */
  push32((uint32_t)(0x1016f028u));
  /* 10167f6d push 0x1016f024 */
  push32((uint32_t)(0x1016f024u));
  /* 10167f72 call 0x10167fa9 */
  push32(0x10167f77u); f_10167fa9();
  /* 10167f77 pop ecx */
  ECX = (pop32());
  /* 10167f78 pop ecx */
  ECX = (pop32());
  /* 10167f79 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10167f7b pop ebx */
  EBX = (pop32());
  /* 10167f7c je 0x10167f85 */
  if (C.zf) goto L_10167f85;
  /* 10167f7e call 0x10167fa0 */
  push32(0x10167f83u); f_10167fa0();
  /* 10167f83 pop edi */
  EDI = (pop32());
  /* 10167f84 ret  */
  ESPCHK(0x10167ef2u, _esp0);
  ESP += 4; return;
L_10167f85:;
  /* 10167f85 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10167f89 mov dword ptr [0x10176718], edi */
  w32((uint32_t)(0x10176718), (EDI));
  /* 10167f8f call dword ptr [0x1016e018] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e018))), 0x10167f95u);
  /* 10167f95 pop edi */
  EDI = (pop32());
  /* 10167f96 ret  */
  ESPCHK(0x10167ef2u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f97 @ 0x10167f97 (9 bytes, 4 insns) */
void f_10167f97(void) {
  FTRACE(0x10167f97u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10167f97 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10167f99 call 0x1016a013 */
  push32(0x10167f9eu); f_1016a013();
  /* 10167f9e pop ecx */
  ECX = (pop32());
  /* 10167f9f ret  */
  ESPCHK(0x10167f97u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fa0 @ 0x10167fa0 (9 bytes, 4 insns) */
void f_10167fa0(void) {
  FTRACE(0x10167fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10167fa0 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10167fa2 call 0x1016a074 */
  push32(0x10167fa7u); f_1016a074();
  /* 10167fa7 pop ecx */
  ECX = (pop32());
  /* 10167fa8 ret  */
  ESPCHK(0x10167fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fa9 @ 0x10167fa9 (26 bytes, 12 insns) */
void f_10167fa9(void) {
  FTRACE(0x10167fa9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10167fa9 push esi */
  push32((uint32_t)(ESI));
  /* 10167faa mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_10167fae:;
  /* 10167fae cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167fb2 jae 0x10167fc1 */
  if (!C.cf) goto L_10167fc1;
  /* 10167fb4 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10167fb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10167fb8 je 0x10167fbc */
  if (C.zf) goto L_10167fbc;
  /* 10167fba call eax */
  call_ind((uint32_t)(EAX), 0x10167fbcu);
L_10167fbc:;
  /* 10167fbc add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10167fbf jmp 0x10167fae */
  goto L_10167fae;
L_10167fc1:;
  /* 10167fc1 pop esi */
  ESI = (pop32());
  /* 10167fc2 ret  */
  ESPCHK(0x10167fa9u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fc3 @ 0x10167fc3 (84 bytes, 32 insns) */
void f_10167fc3(void) {
  FTRACE(0x10167fc3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10167fc3 push esi */
  push32((uint32_t)(ESI));
  /* 10167fc4 call 0x10169f7e */
  push32(0x10167fc9u); f_10169f7e();
  /* 10167fc9 call dword ptr [0x1016e02c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e02c))), 0x10167fcfu);
  /* 10167fcf cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10167fd2 mov dword ptr [0x1017070c], eax */
  w32((uint32_t)(0x1017070c), (EAX));
  /* 10167fd7 je 0x10168013 */
  if (C.zf) goto L_10168013;
  /* 10167fd9 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10167fdb push 1 */
  push32((uint32_t)(0x1u));
  /* 10167fdd call 0x1016a089 */
  push32(0x10167fe2u); f_1016a089();
  /* 10167fe2 mov esi, eax */
  ESI = (EAX);
  /* 10167fe4 pop ecx */
  ECX = (pop32());
  /* 10167fe5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10167fe7 pop ecx */
  ECX = (pop32());
  /* 10167fe8 je 0x10168013 */
  if (C.zf) goto L_10168013;
  /* 10167fea push esi */
  push32((uint32_t)(ESI));
  /* 10167feb push dword ptr [0x1017070c] */
  push32((uint32_t)(r32((uint32_t)(0x1017070c))));
  /* 10167ff1 call dword ptr [0x1016e028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e028))), 0x10167ff7u);
  /* 10167ff7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10167ff9 je 0x10168013 */
  if (C.zf) goto L_10168013;
  /* 10167ffb push esi */
  push32((uint32_t)(ESI));
  /* 10167ffc call 0x10168035 */
  push32(0x10168001u); f_10168035();
  /* 10168001 pop ecx */
  ECX = (pop32());
  /* 10168002 call dword ptr [0x1016e024] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e024))), 0x10168008u);
  /* 10168008 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1016800c push 1 */
  push32((uint32_t)(0x1u));
  /* 1016800e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10168010 pop eax */
  EAX = (pop32());
  /* 10168011 pop esi */
  ESI = (pop32());
  /* 10168012 ret  */
  ESPCHK(0x10167fc3u, _esp0);
  ESP += 4; return;
L_10168013:;
  /* 10168013 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10168015 pop esi */
  ESI = (pop32());
  /* 10168016 ret  */
  ESPCHK(0x10167fc3u, _esp0);
  ESP += 4; return;
}

/* FUN_10008017 @ 0x10168017 (30 bytes, 8 insns) */
void f_10168017(void) {
  FTRACE(0x10168017u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10168017 call 0x10169fa7 */
  push32(0x1016801cu); f_10169fa7();
  /* 1016801c mov eax, dword ptr [0x1017070c] */
  EAX = (r32((uint32_t)(0x1017070c)));
  /* 10168021 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168024 je 0x10168034 */
  if (C.zf) goto L_10168034;
  /* 10168026 push eax */
  push32((uint32_t)(EAX));
  /* 10168027 call dword ptr [0x1016e030] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e030))), 0x1016802du);
  /* 1016802d or dword ptr [0x1017070c], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x1017070c)))|(0xffffffffu); w32((uint32_t)(0x1017070c), (_r)); fl_logic(_r,32); }
L_10168034:;
  /* 10168034 ret  */
  ESPCHK(0x10168017u, _esp0);
  ESP += 4; return;
}

/* FUN_10008035 @ 0x10168035 (19 bytes, 4 insns) */
void f_10168035(void) {
  FTRACE(0x10168035u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10168035 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10168039 mov dword ptr [eax + 0x50], 0x10170d60 */
  w32((uint32_t)(EAX + 0x50), (0x10170d60u));
  /* 10168040 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 10168047 ret  */
  ESPCHK(0x10168035u, _esp0);
  ESP += 4; return;
}

/* FUN_10008048 @ 0x10168048 (103 bytes, 38 insns) */
void f_10168048(void) {
  FTRACE(0x10168048u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10168048 push esi */
  push32((uint32_t)(ESI));
  /* 10168049 push edi */
  push32((uint32_t)(EDI));
  /* 1016804a call dword ptr [0x1016e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e03c))), 0x10168050u);
  /* 10168050 push dword ptr [0x1017070c] */
  push32((uint32_t)(r32((uint32_t)(0x1017070c))));
  /* 10168056 mov edi, eax */
  EDI = (EAX);
  /* 10168058 call dword ptr [0x1016e038] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e038))), 0x1016805eu);
  /* 1016805e mov esi, eax */
  ESI = (EAX);
  /* 10168060 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10168062 jne 0x101680a3 */
  if (!C.zf) goto L_101680a3;
  /* 10168064 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10168066 push 1 */
  push32((uint32_t)(0x1u));
  /* 10168068 call 0x1016a089 */
  push32(0x1016806du); f_1016a089();
  /* 1016806d mov esi, eax */
  ESI = (EAX);
  /* 1016806f pop ecx */
  ECX = (pop32());
  /* 10168070 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10168072 pop ecx */
  ECX = (pop32());
  /* 10168073 je 0x1016809b */
  if (C.zf) goto L_1016809b;
  /* 10168075 push esi */
  push32((uint32_t)(ESI));
  /* 10168076 push dword ptr [0x1017070c] */
  push32((uint32_t)(r32((uint32_t)(0x1017070c))));
  /* 1016807c call dword ptr [0x1016e028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e028))), 0x10168082u);
  /* 10168082 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10168084 je 0x1016809b */
  if (C.zf) goto L_1016809b;
  /* 10168086 push esi */
  push32((uint32_t)(ESI));
  /* 10168087 call 0x10168035 */
  push32(0x1016808cu); f_10168035();
  /* 1016808c pop ecx */
  ECX = (pop32());
  /* 1016808d call dword ptr [0x1016e024] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e024))), 0x10168093u);
  /* 10168093 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10168097 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10168099 jmp 0x101680a3 */
  goto L_101680a3;
L_1016809b:;
  /* 1016809b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1016809d call 0x101670b1 */
  push32(0x101680a2u); f_101670b1();
  /* 101680a2 pop ecx */
  ECX = (pop32());
L_101680a3:;
  /* 101680a3 push edi */
  push32((uint32_t)(EDI));
  /* 101680a4 call dword ptr [0x1016e034] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e034))), 0x101680aau);
  /* 101680aa mov eax, esi */
  EAX = (ESI);
  /* 101680ac pop edi */
  EDI = (pop32());
  /* 101680ad pop esi */
  ESI = (pop32());
  /* 101680ae ret  */
  ESPCHK(0x10168048u, _esp0);
  ESP += 4; return;
}

/* FUN_100080af @ 0x101680af (160 bytes, 62 insns) */
void f_101680af(void) {
  FTRACE(0x101680afu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101680af mov eax, dword ptr [0x1017070c] */
  EAX = (r32((uint32_t)(0x1017070c)));
  /* 101680b4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101680b7 je 0x1016814e */
  if (C.zf) goto L_1016814e;
  /* 101680bd push esi */
  push32((uint32_t)(ESI));
  /* 101680be mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101680c2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101680c4 jne 0x101680d3 */
  if (!C.zf) goto L_101680d3;
  /* 101680c6 push eax */
  push32((uint32_t)(EAX));
  /* 101680c7 call dword ptr [0x1016e038] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e038))), 0x101680cdu);
  /* 101680cd mov esi, eax */
  ESI = (EAX);
  /* 101680cf test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101680d1 je 0x1016813f */
  if (C.zf) goto L_1016813f;
L_101680d3:;
  /* 101680d3 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 101680d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101680d8 je 0x101680e1 */
  if (C.zf) goto L_101680e1;
  /* 101680da push eax */
  push32((uint32_t)(EAX));
  /* 101680db call 0x1016a1c6 */
  push32(0x101680e0u); f_1016a1c6();
  /* 101680e0 pop ecx */
  ECX = (pop32());
L_101680e1:;
  /* 101680e1 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 101680e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101680e6 je 0x101680ef */
  if (C.zf) goto L_101680ef;
  /* 101680e8 push eax */
  push32((uint32_t)(EAX));
  /* 101680e9 call 0x1016a1c6 */
  push32(0x101680eeu); f_1016a1c6();
  /* 101680ee pop ecx */
  ECX = (pop32());
L_101680ef:;
  /* 101680ef mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 101680f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101680f4 je 0x101680fd */
  if (C.zf) goto L_101680fd;
  /* 101680f6 push eax */
  push32((uint32_t)(EAX));
  /* 101680f7 call 0x1016a1c6 */
  push32(0x101680fcu); f_1016a1c6();
  /* 101680fc pop ecx */
  ECX = (pop32());
L_101680fd:;
  /* 101680fd mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 10168100 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10168102 je 0x1016810b */
  if (C.zf) goto L_1016810b;
  /* 10168104 push eax */
  push32((uint32_t)(EAX));
  /* 10168105 call 0x1016a1c6 */
  push32(0x1016810au); f_1016a1c6();
  /* 1016810a pop ecx */
  ECX = (pop32());
L_1016810b:;
  /* 1016810b mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 1016810e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10168110 je 0x10168119 */
  if (C.zf) goto L_10168119;
  /* 10168112 push eax */
  push32((uint32_t)(EAX));
  /* 10168113 call 0x1016a1c6 */
  push32(0x10168118u); f_1016a1c6();
  /* 10168118 pop ecx */
  ECX = (pop32());
L_10168119:;
  /* 10168119 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 1016811c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016811e je 0x10168127 */
  if (C.zf) goto L_10168127;
  /* 10168120 push eax */
  push32((uint32_t)(EAX));
  /* 10168121 call 0x1016a1c6 */
  push32(0x10168126u); f_1016a1c6();
  /* 10168126 pop ecx */
  ECX = (pop32());
L_10168127:;
  /* 10168127 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 1016812a cmp eax, 0x10170d60 */
  { uint32_t _a=(EAX),_b=(0x10170d60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016812f je 0x10168138 */
  if (C.zf) goto L_10168138;
  /* 10168131 push eax */
  push32((uint32_t)(EAX));
  /* 10168132 call 0x1016a1c6 */
  push32(0x10168137u); f_1016a1c6();
  /* 10168137 pop ecx */
  ECX = (pop32());
L_10168138:;
  /* 10168138 push esi */
  push32((uint32_t)(ESI));
  /* 10168139 call 0x1016a1c6 */
  push32(0x1016813eu); f_1016a1c6();
  /* 1016813e pop ecx */
  ECX = (pop32());
L_1016813f:;
  /* 1016813f push 0 */
  push32((uint32_t)(0x0u));
  /* 10168141 push dword ptr [0x1017070c] */
  push32((uint32_t)(r32((uint32_t)(0x1017070c))));
  /* 10168147 call dword ptr [0x1016e028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e028))), 0x1016814du);
  /* 1016814d pop esi */
  ESI = (pop32());
L_1016814e:;
  /* 1016814e ret  */
  ESPCHK(0x101680afu, _esp0);
  ESP += 4; return;
}

/* FUN_1000814f @ 0x1016814f (444 bytes, 150 insns) */
void f_1016814f(void) {
  FTRACE(0x1016814fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016814f push ebp */
  push32((uint32_t)(EBP));
  /* 10168150 mov ebp, esp */
  EBP = (ESP);
  /* 10168152 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10168155 push ebx */
  push32((uint32_t)(EBX));
  /* 10168156 push esi */
  push32((uint32_t)(ESI));
  /* 10168157 push edi */
  push32((uint32_t)(EDI));
  /* 10168158 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1016815d call 0x1016a2af */
  push32(0x10168162u); f_1016a2af();
  /* 10168162 mov esi, eax */
  ESI = (EAX);
  /* 10168164 pop ecx */
  ECX = (pop32());
  /* 10168165 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10168167 jne 0x10168171 */
  if (!C.zf) goto L_10168171;
  /* 10168169 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1016816b call 0x101670b1 */
  push32(0x10168170u); f_101670b1();
  /* 10168170 pop ecx */
  ECX = (pop32());
L_10168171:;
  /* 10168171 mov dword ptr [0x10177cc0], esi */
  w32((uint32_t)(0x10177cc0), (ESI));
  /* 10168177 mov dword ptr [0x10177dc0], 0x20 */
  w32((uint32_t)(0x10177dc0), (0x20u));
  /* 10168181 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_10168187:;
  /* 10168187 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168189 jae 0x101681a9 */
  if (!C.cf) goto L_101681a9;
  /* 1016818b and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 1016818f or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 10168192 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 10168196 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 1016819a mov eax, dword ptr [0x10177cc0] */
  EAX = (r32((uint32_t)(0x10177cc0)));
  /* 1016819f add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101681a2 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101681a7 jmp 0x10168187 */
  goto L_10168187;
L_101681a9:;
  /* 101681a9 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 101681ac push eax */
  push32((uint32_t)(EAX));
  /* 101681ad call dword ptr [0x1016e04c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e04c))), 0x101681b3u);
  /* 101681b3 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101681b8 je 0x1016828f */
  if (C.zf) goto L_1016828f;
  /* 101681be mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 101681c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101681c3 je 0x1016828f */
  if (C.zf) goto L_1016828f;
  /* 101681c9 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 101681cb lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 101681ce lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 101681d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 101681d4 mov eax, 0x800 */
  EAX = (0x800u);
  /* 101681d9 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101681db jl 0x101681df */
  if ((C.sf!=C.of)) goto L_101681df;
  /* 101681dd mov edi, eax */
  EDI = (EAX);
L_101681df:;
  /* 101681df cmp dword ptr [0x10177dc0], edi */
  { uint32_t _a=(r32((uint32_t)(0x10177dc0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101681e5 jge 0x1016823d */
  if ((C.sf==C.of)) goto L_1016823d;
  /* 101681e7 mov esi, 0x10177cc4 */
  ESI = (0x10177cc4u);
L_101681ec:;
  /* 101681ec push 0x480 */
  push32((uint32_t)(0x480u));
  /* 101681f1 call 0x1016a2af */
  push32(0x101681f6u); f_1016a2af();
  /* 101681f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101681f8 pop ecx */
  ECX = (pop32());
  /* 101681f9 je 0x10168237 */
  if (C.zf) goto L_10168237;
  /* 101681fb add dword ptr [0x10177dc0], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10177dc0))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x10177dc0), (_r)); fl_add(_a,_b,_r,32); }
  /* 10168202 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10168204 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_1016820a:;
  /* 1016820a cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016820c jae 0x1016822a */
  if (!C.cf) goto L_1016822a;
  /* 1016820e and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 10168212 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10168215 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10168219 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 1016821d mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1016821f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10168222 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10168228 jmp 0x1016820a */
  goto L_1016820a;
L_1016822a:;
  /* 1016822a add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1016822d cmp dword ptr [0x10177dc0], edi */
  { uint32_t _a=(r32((uint32_t)(0x10177dc0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168233 jl 0x101681ec */
  if ((C.sf!=C.of)) goto L_101681ec;
  /* 10168235 jmp 0x1016823d */
  goto L_1016823d;
L_10168237:;
  /* 10168237 mov edi, dword ptr [0x10177dc0] */
  EDI = (r32((uint32_t)(0x10177dc0)));
L_1016823d:;
  /* 1016823d xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1016823f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10168241 jle 0x1016828f */
  if ((C.zf||C.sf!=C.of)) goto L_1016828f;
L_10168243:;
  /* 10168243 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10168246 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10168248 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016824b je 0x10168285 */
  if (C.zf) goto L_10168285;
  /* 1016824d mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 1016824f test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 10168251 je 0x10168285 */
  if (C.zf) goto L_10168285;
  /* 10168253 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 10168255 jne 0x10168262 */
  if (!C.zf) goto L_10168262;
  /* 10168257 push ecx */
  push32((uint32_t)(ECX));
  /* 10168258 call dword ptr [0x1016e048] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e048))), 0x1016825eu);
  /* 1016825e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10168260 je 0x10168285 */
  if (C.zf) goto L_10168285;
L_10168262:;
  /* 10168262 mov ecx, esi */
  ECX = (ESI);
  /* 10168264 mov eax, esi */
  EAX = (ESI);
  /* 10168266 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10168269 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1016826c mov ecx, dword ptr [ecx*4 + 0x10177cc0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10177cc0)));
  /* 10168273 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10168276 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 10168279 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1016827c mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 1016827e mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10168280 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 10168282 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_10168285:;
  /* 10168285 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 10168289 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1016828a inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1016828b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016828d jl 0x10168243 */
  if ((C.sf!=C.of)) goto L_10168243;
L_1016828f:;
  /* 1016828f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10168291:;
  /* 10168291 mov ecx, dword ptr [0x10177cc0] */
  ECX = (r32((uint32_t)(0x10177cc0)));
  /* 10168297 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 1016829a cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016829e lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 101682a1 jne 0x101682f0 */
  if (!C.zf) goto L_101682f0;
  /* 101682a3 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101682a5 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 101682a9 jne 0x101682b0 */
  if (!C.zf) goto L_101682b0;
  /* 101682ab push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 101682ad pop eax */
  EAX = (pop32());
  /* 101682ae jmp 0x101682ba */
  goto L_101682ba;
L_101682b0:;
  /* 101682b0 mov eax, ebx */
  EAX = (EBX);
  /* 101682b2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101682b3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 101682b5 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101682b7 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_101682ba:;
  /* 101682ba push eax */
  push32((uint32_t)(EAX));
  /* 101682bb call dword ptr [0x1016e044] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e044))), 0x101682c1u);
  /* 101682c1 mov edi, eax */
  EDI = (EAX);
  /* 101682c3 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101682c6 je 0x101682df */
  if (C.zf) goto L_101682df;
  /* 101682c8 push edi */
  push32((uint32_t)(EDI));
  /* 101682c9 call dword ptr [0x1016e048] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e048))), 0x101682cfu);
  /* 101682cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101682d1 je 0x101682df */
  if (C.zf) goto L_101682df;
  /* 101682d3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 101682d8 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 101682da cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101682dd jne 0x101682e5 */
  if (!C.zf) goto L_101682e5;
L_101682df:;
  /* 101682df or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 101682e3 jmp 0x101682f4 */
  goto L_101682f4;
L_101682e5:;
  /* 101682e5 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101682e8 jne 0x101682f4 */
  if (!C.zf) goto L_101682f4;
  /* 101682ea or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 101682ee jmp 0x101682f4 */
  goto L_101682f4;
L_101682f0:;
  /* 101682f0 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_101682f4:;
  /* 101682f4 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101682f5 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101682f8 jl 0x10168291 */
  if ((C.sf!=C.of)) goto L_10168291;
  /* 101682fa push dword ptr [0x10177dc0] */
  push32((uint32_t)(r32((uint32_t)(0x10177dc0))));
  /* 10168300 call dword ptr [0x1016e040] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e040))), 0x10168306u);
  /* 10168306 pop edi */
  EDI = (pop32());
  /* 10168307 pop esi */
  ESI = (pop32());
  /* 10168308 pop ebx */
  EBX = (pop32());
  /* 10168309 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1016830a ret  */
  ESPCHK(0x1016814fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000830b @ 0x1016830b (84 bytes, 33 insns) */
void f_1016830b(void) {
  FTRACE(0x1016830bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016830b push ebx */
  push32((uint32_t)(EBX));
  /* 1016830c push esi */
  push32((uint32_t)(ESI));
  /* 1016830d push edi */
  push32((uint32_t)(EDI));
  /* 1016830e mov esi, 0x10177cc0 */
  ESI = (0x10177cc0u);
L_10168313:;
  /* 10168313 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10168315 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10168317 je 0x10168350 */
  if (C.zf) goto L_10168350;
  /* 10168319 mov edi, eax */
  EDI = (EAX);
  /* 1016831b add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10168320 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168322 jae 0x10168345 */
  if (!C.cf) goto L_10168345;
  /* 10168324 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_10168327:;
  /* 10168327 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016832b je 0x10168334 */
  if (C.zf) goto L_10168334;
  /* 1016832d push ebx */
  push32((uint32_t)(EBX));
  /* 1016832e call dword ptr [0x1016e050] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e050))), 0x10168334u);
L_10168334:;
  /* 10168334 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10168336 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10168339 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016833e add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10168341 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168343 jb 0x10168327 */
  if (C.cf) goto L_10168327;
L_10168345:;
  /* 10168345 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10168347 call 0x1016a1c6 */
  push32(0x1016834cu); f_1016a1c6();
  /* 1016834c and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 1016834f pop ecx */
  ECX = (pop32());
L_10168350:;
  /* 10168350 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10168353 cmp esi, 0x10177dc0 */
  { uint32_t _a=(ESI),_b=(0x10177dc0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168359 jl 0x10168313 */
  if ((C.sf!=C.of)) goto L_10168313;
  /* 1016835b pop edi */
  EDI = (pop32());
  /* 1016835c pop esi */
  ESI = (pop32());
  /* 1016835d pop ebx */
  EBX = (pop32());
  /* 1016835e ret  */
  ESPCHK(0x1016830bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000835f @ 0x1016835f (185 bytes, 71 insns) */
void f_1016835f(void) {
  FTRACE(0x1016835fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016835f push ebx */
  push32((uint32_t)(EBX));
  /* 10168360 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10168362 cmp dword ptr [0x10177dc8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10177dc8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168368 push esi */
  push32((uint32_t)(ESI));
  /* 10168369 push edi */
  push32((uint32_t)(EDI));
  /* 1016836a jne 0x10168371 */
  if (!C.zf) goto L_10168371;
  /* 1016836c call 0x1016a7c1 */
  push32(0x10168371u); f_1016a7c1();
L_10168371:;
  /* 10168371 mov esi, dword ptr [0x101766c8] */
  ESI = (r32((uint32_t)(0x101766c8)));
  /* 10168377 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10168379:;
  /* 10168379 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1016837b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016837d je 0x10168391 */
  if (C.zf) goto L_10168391;
  /* 1016837f cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10168381 je 0x10168384 */
  if (C.zf) goto L_10168384;
  /* 10168383 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10168384:;
  /* 10168384 push esi */
  push32((uint32_t)(ESI));
  /* 10168385 call 0x10169040 */
  push32(0x1016838au); f_10169040();
  /* 1016838a pop ecx */
  ECX = (pop32());
  /* 1016838b lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 1016838f jmp 0x10168379 */
  goto L_10168379;
L_10168391:;
  /* 10168391 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 10168398 push eax */
  push32((uint32_t)(EAX));
  /* 10168399 call 0x1016a2af */
  push32(0x1016839eu); f_1016a2af();
  /* 1016839e mov esi, eax */
  ESI = (EAX);
  /* 101683a0 pop ecx */
  ECX = (pop32());
  /* 101683a1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101683a3 mov dword ptr [0x101766f8], esi */
  w32((uint32_t)(0x101766f8), (ESI));
  /* 101683a9 jne 0x101683b3 */
  if (!C.zf) goto L_101683b3;
  /* 101683ab push 9 */
  push32((uint32_t)(0x9u));
  /* 101683ad call 0x101670b1 */
  push32(0x101683b2u); f_101670b1();
  /* 101683b2 pop ecx */
  ECX = (pop32());
L_101683b3:;
  /* 101683b3 mov edi, dword ptr [0x101766c8] */
  EDI = (r32((uint32_t)(0x101766c8)));
  /* 101683b9 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101683bb je 0x101683f6 */
  if (C.zf) goto L_101683f6;
  /* 101683bd push ebp */
  push32((uint32_t)(EBP));
L_101683be:;
  /* 101683be push edi */
  push32((uint32_t)(EDI));
  /* 101683bf call 0x10169040 */
  push32(0x101683c4u); f_10169040();
  /* 101683c4 mov ebp, eax */
  EBP = (EAX);
  /* 101683c6 pop ecx */
  ECX = (pop32());
  /* 101683c7 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 101683c8 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101683cb je 0x101683ef */
  if (C.zf) goto L_101683ef;
  /* 101683cd push ebp */
  push32((uint32_t)(EBP));
  /* 101683ce call 0x1016a2af */
  push32(0x101683d3u); f_1016a2af();
  /* 101683d3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101683d5 pop ecx */
  ECX = (pop32());
  /* 101683d6 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 101683d8 jne 0x101683e2 */
  if (!C.zf) goto L_101683e2;
  /* 101683da push 9 */
  push32((uint32_t)(0x9u));
  /* 101683dc call 0x101670b1 */
  push32(0x101683e1u); f_101670b1();
  /* 101683e1 pop ecx */
  ECX = (pop32());
L_101683e2:;
  /* 101683e2 push edi */
  push32((uint32_t)(EDI));
  /* 101683e3 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101683e5 call 0x10169af0 */
  push32(0x101683eau); f_10169af0();
  /* 101683ea pop ecx */
  ECX = (pop32());
  /* 101683eb add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101683ee pop ecx */
  ECX = (pop32());
L_101683ef:;
  /* 101683ef add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101683f1 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101683f3 jne 0x101683be */
  if (!C.zf) goto L_101683be;
  /* 101683f5 pop ebp */
  EBP = (pop32());
L_101683f6:;
  /* 101683f6 push dword ptr [0x101766c8] */
  push32((uint32_t)(r32((uint32_t)(0x101766c8))));
  /* 101683fc call 0x1016a1c6 */
  push32(0x10168401u); f_1016a1c6();
  /* 10168401 pop ecx */
  ECX = (pop32());
  /* 10168402 mov dword ptr [0x101766c8], ebx */
  w32((uint32_t)(0x101766c8), (EBX));
  /* 10168408 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 1016840a pop edi */
  EDI = (pop32());
  /* 1016840b pop esi */
  ESI = (pop32());
  /* 1016840c mov dword ptr [0x10177dc4], 1 */
  w32((uint32_t)(0x10177dc4), (0x1u));
  /* 10168416 pop ebx */
  EBX = (pop32());
  /* 10168417 ret  */
  ESPCHK(0x1016835fu, _esp0);
  ESP += 4; return;
}

/* FUN_10008418 @ 0x10168418 (153 bytes, 62 insns) */
void f_10168418(void) {
  FTRACE(0x10168418u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10168418 push ebp */
  push32((uint32_t)(EBP));
  /* 10168419 mov ebp, esp */
  EBP = (ESP);
  /* 1016841b push ecx */
  push32((uint32_t)(ECX));
  /* 1016841c push ecx */
  push32((uint32_t)(ECX));
  /* 1016841d push ebx */
  push32((uint32_t)(EBX));
  /* 1016841e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10168420 cmp dword ptr [0x10177dc8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10177dc8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168426 push esi */
  push32((uint32_t)(ESI));
  /* 10168427 push edi */
  push32((uint32_t)(EDI));
  /* 10168428 jne 0x1016842f */
  if (!C.zf) goto L_1016842f;
  /* 1016842a call 0x1016a7c1 */
  push32(0x1016842fu); f_1016a7c1();
L_1016842f:;
  /* 1016842f mov esi, 0x1017671c */
  ESI = (0x1017671cu);
  /* 10168434 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10168439 push esi */
  push32((uint32_t)(ESI));
  /* 1016843a push ebx */
  push32((uint32_t)(EBX));
  /* 1016843b call dword ptr [0x1016e054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e054))), 0x10168441u);
  /* 10168441 mov eax, dword ptr [0x10177dd4] */
  EAX = (r32((uint32_t)(0x10177dd4)));
  /* 10168446 mov dword ptr [0x10176708], esi */
  w32((uint32_t)(0x10176708), (ESI));
  /* 1016844c mov edi, esi */
  EDI = (ESI);
  /* 1016844e cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10168450 je 0x10168454 */
  if (C.zf) goto L_10168454;
  /* 10168452 mov edi, eax */
  EDI = (EAX);
L_10168454:;
  /* 10168454 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10168457 push eax */
  push32((uint32_t)(EAX));
  /* 10168458 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 1016845b push eax */
  push32((uint32_t)(EAX));
  /* 1016845c push ebx */
  push32((uint32_t)(EBX));
  /* 1016845d push ebx */
  push32((uint32_t)(EBX));
  /* 1016845e push edi */
  push32((uint32_t)(EDI));
  /* 1016845f call 0x101684b1 */
  push32(0x10168464u); f_101684b1();
  /* 10168464 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10168467 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1016846a lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 1016846d push eax */
  push32((uint32_t)(EAX));
  /* 1016846e call 0x1016a2af */
  push32(0x10168473u); f_1016a2af();
  /* 10168473 mov esi, eax */
  ESI = (EAX);
  /* 10168475 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10168478 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016847a jne 0x10168484 */
  if (!C.zf) goto L_10168484;
  /* 1016847c push 8 */
  push32((uint32_t)(0x8u));
  /* 1016847e call 0x101670b1 */
  push32(0x10168483u); f_101670b1();
  /* 10168483 pop ecx */
  ECX = (pop32());
L_10168484:;
  /* 10168484 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10168487 push eax */
  push32((uint32_t)(EAX));
  /* 10168488 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 1016848b push eax */
  push32((uint32_t)(EAX));
  /* 1016848c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1016848f lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 10168492 push eax */
  push32((uint32_t)(EAX));
  /* 10168493 push esi */
  push32((uint32_t)(ESI));
  /* 10168494 push edi */
  push32((uint32_t)(EDI));
  /* 10168495 call 0x101684b1 */
  push32(0x1016849au); f_101684b1();
  /* 1016849a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1016849d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101684a0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101684a1 mov dword ptr [0x101766f0], esi */
  w32((uint32_t)(0x101766f0), (ESI));
  /* 101684a7 pop edi */
  EDI = (pop32());
  /* 101684a8 pop esi */
  ESI = (pop32());
  /* 101684a9 mov dword ptr [0x101766ec], eax */
  w32((uint32_t)(0x101766ec), (EAX));
  /* 101684ae pop ebx */
  EBX = (pop32());
  /* 101684af leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101684b0 ret  */
  ESPCHK(0x10168418u, _esp0);
  ESP += 4; return;
}

/* FUN_100084b1 @ 0x101684b1 (436 bytes, 187 insns) */
void f_101684b1(void) {
  FTRACE(0x101684b1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101684b1 push ebp */
  push32((uint32_t)(EBP));
  /* 101684b2 mov ebp, esp */
  EBP = (ESP);
  /* 101684b4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 101684b7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 101684ba push ebx */
  push32((uint32_t)(EBX));
  /* 101684bb push esi */
  push32((uint32_t)(ESI));
  /* 101684bc and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 101684bf mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 101684c2 push edi */
  push32((uint32_t)(EDI));
  /* 101684c3 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 101684c6 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 101684cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101684cf test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101684d1 je 0x101684db */
  if (C.zf) goto L_101684db;
  /* 101684d3 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 101684d5 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101684d8 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_101684db:;
  /* 101684db cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101684de jne 0x10168524 */
  if (!C.zf) goto L_10168524;
L_101684e0:;
  /* 101684e0 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 101684e3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101684e4 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101684e7 je 0x10168512 */
  if (C.zf) goto L_10168512;
  /* 101684e9 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101684eb je 0x10168512 */
  if (C.zf) goto L_10168512;
  /* 101684ed movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 101684f0 test byte ptr [edx + 0x10176b81], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10176b81)))&(0x4u); fl_logic(_r,8); }
  /* 101684f7 je 0x10168505 */
  if (C.zf) goto L_10168505;
  /* 101684f9 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 101684fb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101684fd je 0x10168505 */
  if (C.zf) goto L_10168505;
  /* 101684ff mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10168501 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10168503 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10168504 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10168505:;
  /* 10168505 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10168507 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10168509 je 0x101684e0 */
  if (C.zf) goto L_101684e0;
  /* 1016850b mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1016850d mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1016850f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10168510 jmp 0x101684e0 */
  goto L_101684e0;
L_10168512:;
  /* 10168512 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10168514 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10168516 je 0x1016851c */
  if (C.zf) goto L_1016851c;
  /* 10168518 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 1016851b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1016851c:;
  /* 1016851c cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016851f jne 0x10168567 */
  if (!C.zf) goto L_10168567;
  /* 10168521 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10168522 jmp 0x10168567 */
  goto L_10168567;
L_10168524:;
  /* 10168524 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10168526 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10168528 je 0x1016852f */
  if (C.zf) goto L_1016852f;
  /* 1016852a mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1016852c mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1016852e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1016852f:;
  /* 1016852f mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10168531 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10168532 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10168535 test byte ptr [ebx + 0x10176b81], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10176b81)))&(0x4u); fl_logic(_r,8); }
  /* 1016853c je 0x1016854a */
  if (C.zf) goto L_1016854a;
  /* 1016853e inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10168540 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10168542 je 0x10168549 */
  if (C.zf) goto L_10168549;
  /* 10168544 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 10168546 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 10168548 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10168549:;
  /* 10168549 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1016854a:;
  /* 1016854a cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016854d je 0x10168558 */
  if (C.zf) goto L_10168558;
  /* 1016854f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10168551 je 0x1016855c */
  if (C.zf) goto L_1016855c;
  /* 10168553 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10168556 jne 0x10168524 */
  if (!C.zf) goto L_10168524;
L_10168558:;
  /* 10168558 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1016855a jne 0x1016855f */
  if (!C.zf) goto L_1016855f;
L_1016855c:;
  /* 1016855c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1016855d jmp 0x10168567 */
  goto L_10168567;
L_1016855f:;
  /* 1016855f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10168561 je 0x10168567 */
  if (C.zf) goto L_10168567;
  /* 10168563 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_10168567:;
  /* 10168567 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_1016856b:;
  /* 1016856b cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016856e je 0x10168654 */
  if (C.zf) goto L_10168654;
L_10168574:;
  /* 10168574 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10168576 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10168579 je 0x10168580 */
  if (C.zf) goto L_10168580;
  /* 1016857b cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016857e jne 0x10168583 */
  if (!C.zf) goto L_10168583;
L_10168580:;
  /* 10168580 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10168581 jmp 0x10168574 */
  goto L_10168574;
L_10168583:;
  /* 10168583 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10168586 je 0x10168654 */
  if (C.zf) goto L_10168654;
  /* 1016858c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1016858e je 0x10168598 */
  if (C.zf) goto L_10168598;
  /* 10168590 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10168592 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10168595 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10168598:;
  /* 10168598 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1016859b inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_1016859d:;
  /* 1016859d mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 101685a4 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_101685a6:;
  /* 101685a6 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101685a9 jne 0x101685af */
  if (!C.zf) goto L_101685af;
  /* 101685ab inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101685ac inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101685ad jmp 0x101685a6 */
  goto L_101685a6;
L_101685af:;
  /* 101685af cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101685b2 jne 0x101685e0 */
  if (!C.zf) goto L_101685e0;
  /* 101685b4 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 101685b7 jne 0x101685de */
  if (!C.zf) goto L_101685de;
  /* 101685b9 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 101685bb cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101685be je 0x101685cd */
  if (C.zf) goto L_101685cd;
  /* 101685c0 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101685c4 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 101685c7 jne 0x101685cd */
  if (!C.zf) goto L_101685cd;
  /* 101685c9 mov eax, edx */
  EAX = (EDX);
  /* 101685cb jmp 0x101685d0 */
  goto L_101685d0;
L_101685cd:;
  /* 101685cd mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_101685d0:;
  /* 101685d0 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 101685d3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101685d5 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101685d8 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 101685db mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_101685de:;
  /* 101685de shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_101685e0:;
  /* 101685e0 mov edx, ebx */
  EDX = (EBX);
  /* 101685e2 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101685e3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 101685e5 je 0x101685f5 */
  if (C.zf) goto L_101685f5;
  /* 101685e7 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_101685e8:;
  /* 101685e8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101685ea je 0x101685f0 */
  if (C.zf) goto L_101685f0;
  /* 101685ec mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 101685ef inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_101685f0:;
  /* 101685f0 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 101685f2 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101685f3 jne 0x101685e8 */
  if (!C.zf) goto L_101685e8;
L_101685f5:;
  /* 101685f5 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 101685f7 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101685f9 je 0x10168645 */
  if (C.zf) goto L_10168645;
  /* 101685fb cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101685ff jne 0x1016860b */
  if (!C.zf) goto L_1016860b;
  /* 10168601 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10168604 je 0x10168645 */
  if (C.zf) goto L_10168645;
  /* 10168606 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10168609 je 0x10168645 */
  if (C.zf) goto L_10168645;
L_1016860b:;
  /* 1016860b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016860f je 0x1016863f */
  if (C.zf) goto L_1016863f;
  /* 10168611 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10168613 je 0x1016862e */
  if (C.zf) goto L_1016862e;
  /* 10168615 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10168618 test byte ptr [ebx + 0x10176b81], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10176b81)))&(0x4u); fl_logic(_r,8); }
  /* 1016861f je 0x10168627 */
  if (C.zf) goto L_10168627;
  /* 10168621 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10168623 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10168624 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10168625 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10168627:;
  /* 10168627 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10168629 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1016862b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1016862c jmp 0x1016863d */
  goto L_1016863d;
L_1016862e:;
  /* 1016862e movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 10168631 test byte ptr [edx + 0x10176b81], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10176b81)))&(0x4u); fl_logic(_r,8); }
  /* 10168638 je 0x1016863d */
  if (C.zf) goto L_1016863d;
  /* 1016863a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1016863b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1016863d:;
  /* 1016863d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1016863f:;
  /* 1016863f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10168640 jmp 0x1016859d */
  goto L_1016859d;
L_10168645:;
  /* 10168645 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10168647 je 0x1016864d */
  if (C.zf) goto L_1016864d;
  /* 10168649 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 1016864c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1016864d:;
  /* 1016864d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1016864f jmp 0x1016856b */
  goto L_1016856b;
L_10168654:;
  /* 10168654 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10168656 je 0x1016865b */
  if (C.zf) goto L_1016865b;
  /* 10168658 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1016865b:;
  /* 1016865b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1016865e pop edi */
  EDI = (pop32());
  /* 1016865f pop esi */
  ESI = (pop32());
  /* 10168660 pop ebx */
  EBX = (pop32());
  /* 10168661 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 10168663 pop ebp */
  EBP = (pop32());
  /* 10168664 ret  */
  ESPCHK(0x101684b1u, _esp0);
  ESP += 4; return;
}

/* FUN_10008665 @ 0x10168665 (306 bytes, 132 insns) */
void f_10168665(void) {
  FTRACE(0x10168665u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10168665 push ecx */
  push32((uint32_t)(ECX));
  /* 10168666 push ecx */
  push32((uint32_t)(ECX));
  /* 10168667 mov eax, dword ptr [0x10176820] */
  EAX = (r32((uint32_t)(0x10176820)));
  /* 1016866c push ebx */
  push32((uint32_t)(EBX));
  /* 1016866d push ebp */
  push32((uint32_t)(EBP));
  /* 1016866e mov ebp, dword ptr [0x1016e068] */
  EBP = (r32((uint32_t)(0x1016e068)));
  /* 10168674 push esi */
  push32((uint32_t)(ESI));
  /* 10168675 push edi */
  push32((uint32_t)(EDI));
  /* 10168676 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10168678 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1016867a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1016867c cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016867e jne 0x101686b3 */
  if (!C.zf) goto L_101686b3;
  /* 10168680 call ebp */
  call_ind((uint32_t)(EBP), 0x10168682u);
  /* 10168682 mov esi, eax */
  ESI = (EAX);
  /* 10168684 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168686 je 0x10168694 */
  if (C.zf) goto L_10168694;
  /* 10168688 mov dword ptr [0x10176820], 1 */
  w32((uint32_t)(0x10176820), (0x1u));
  /* 10168692 jmp 0x101686bc */
  goto L_101686bc;
L_10168694:;
  /* 10168694 call dword ptr [0x1016e064] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e064))), 0x1016869au);
  /* 1016869a mov edi, eax */
  EDI = (EAX);
  /* 1016869c cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016869e je 0x1016878e */
  if (C.zf) goto L_1016878e;
  /* 101686a4 mov dword ptr [0x10176820], 2 */
  w32((uint32_t)(0x10176820), (0x2u));
  /* 101686ae jmp 0x10168742 */
  goto L_10168742;
L_101686b3:;
  /* 101686b3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101686b6 jne 0x1016873d */
  if (!C.zf) goto L_1016873d;
L_101686bc:;
  /* 101686bc cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101686be jne 0x101686cc */
  if (!C.zf) goto L_101686cc;
  /* 101686c0 call ebp */
  call_ind((uint32_t)(EBP), 0x101686c2u);
  /* 101686c2 mov esi, eax */
  ESI = (EAX);
  /* 101686c4 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101686c6 je 0x1016878e */
  if (C.zf) goto L_1016878e;
L_101686cc:;
  /* 101686cc cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101686cf mov eax, esi */
  EAX = (ESI);
  /* 101686d1 je 0x101686e1 */
  if (C.zf) goto L_101686e1;
L_101686d3:;
  /* 101686d3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101686d4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101686d5 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101686d8 jne 0x101686d3 */
  if (!C.zf) goto L_101686d3;
  /* 101686da inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101686db inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101686dc cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101686df jne 0x101686d3 */
  if (!C.zf) goto L_101686d3;
L_101686e1:;
  /* 101686e1 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101686e3 mov edi, dword ptr [0x1016e060] */
  EDI = (r32((uint32_t)(0x1016e060)));
  /* 101686e9 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 101686eb push ebx */
  push32((uint32_t)(EBX));
  /* 101686ec push ebx */
  push32((uint32_t)(EBX));
  /* 101686ed inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101686ee push ebx */
  push32((uint32_t)(EBX));
  /* 101686ef push ebx */
  push32((uint32_t)(EBX));
  /* 101686f0 push eax */
  push32((uint32_t)(EAX));
  /* 101686f1 push esi */
  push32((uint32_t)(ESI));
  /* 101686f2 push ebx */
  push32((uint32_t)(EBX));
  /* 101686f3 push ebx */
  push32((uint32_t)(EBX));
  /* 101686f4 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 101686f8 call edi */
  call_ind((uint32_t)(EDI), 0x101686fau);
  /* 101686fa mov ebp, eax */
  EBP = (EAX);
  /* 101686fc cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101686fe je 0x10168732 */
  if (C.zf) goto L_10168732;
  /* 10168700 push ebp */
  push32((uint32_t)(EBP));
  /* 10168701 call 0x1016a2af */
  push32(0x10168706u); f_1016a2af();
  /* 10168706 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168708 pop ecx */
  ECX = (pop32());
  /* 10168709 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 1016870d je 0x10168732 */
  if (C.zf) goto L_10168732;
  /* 1016870f push ebx */
  push32((uint32_t)(EBX));
  /* 10168710 push ebx */
  push32((uint32_t)(EBX));
  /* 10168711 push ebp */
  push32((uint32_t)(EBP));
  /* 10168712 push eax */
  push32((uint32_t)(EAX));
  /* 10168713 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 10168717 push esi */
  push32((uint32_t)(ESI));
  /* 10168718 push ebx */
  push32((uint32_t)(EBX));
  /* 10168719 push ebx */
  push32((uint32_t)(EBX));
  /* 1016871a call edi */
  call_ind((uint32_t)(EDI), 0x1016871cu);
  /* 1016871c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016871e jne 0x1016872e */
  if (!C.zf) goto L_1016872e;
  /* 10168720 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 10168724 call 0x1016a1c6 */
  push32(0x10168729u); f_1016a1c6();
  /* 10168729 pop ecx */
  ECX = (pop32());
  /* 1016872a mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_1016872e:;
  /* 1016872e mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_10168732:;
  /* 10168732 push esi */
  push32((uint32_t)(ESI));
  /* 10168733 call dword ptr [0x1016e05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e05c))), 0x10168739u);
  /* 10168739 mov eax, ebx */
  EAX = (EBX);
  /* 1016873b jmp 0x10168790 */
  goto L_10168790;
L_1016873d:;
  /* 1016873d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168740 jne 0x1016878e */
  if (!C.zf) goto L_1016878e;
L_10168742:;
  /* 10168742 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168744 jne 0x10168752 */
  if (!C.zf) goto L_10168752;
  /* 10168746 call dword ptr [0x1016e064] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e064))), 0x1016874cu);
  /* 1016874c mov edi, eax */
  EDI = (EAX);
  /* 1016874e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168750 je 0x1016878e */
  if (C.zf) goto L_1016878e;
L_10168752:;
  /* 10168752 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10168754 mov eax, edi */
  EAX = (EDI);
  /* 10168756 je 0x10168762 */
  if (C.zf) goto L_10168762;
L_10168758:;
  /* 10168758 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10168759 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016875b jne 0x10168758 */
  if (!C.zf) goto L_10168758;
  /* 1016875d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1016875e cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10168760 jne 0x10168758 */
  if (!C.zf) goto L_10168758;
L_10168762:;
  /* 10168762 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10168764 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10168765 mov ebp, eax */
  EBP = (EAX);
  /* 10168767 push ebp */
  push32((uint32_t)(EBP));
  /* 10168768 call 0x1016a2af */
  push32(0x1016876du); f_1016a2af();
  /* 1016876d mov esi, eax */
  ESI = (EAX);
  /* 1016876f pop ecx */
  ECX = (pop32());
  /* 10168770 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168772 jne 0x10168778 */
  if (!C.zf) goto L_10168778;
  /* 10168774 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10168776 jmp 0x10168783 */
  goto L_10168783;
L_10168778:;
  /* 10168778 push ebp */
  push32((uint32_t)(EBP));
  /* 10168779 push edi */
  push32((uint32_t)(EDI));
  /* 1016877a push esi */
  push32((uint32_t)(ESI));
  /* 1016877b call 0x1016a7e0 */
  push32(0x10168780u); f_1016a7e0();
  /* 10168780 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10168783:;
  /* 10168783 push edi */
  push32((uint32_t)(EDI));
  /* 10168784 call dword ptr [0x1016e058] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e058))), 0x1016878au);
  /* 1016878a mov eax, esi */
  EAX = (ESI);
  /* 1016878c jmp 0x10168790 */
  goto L_10168790;
L_1016878e:;
  /* 1016878e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10168790:;
  /* 10168790 pop edi */
  EDI = (pop32());
  /* 10168791 pop esi */
  ESI = (pop32());
  /* 10168792 pop ebp */
  EBP = (pop32());
  /* 10168793 pop ebx */
  EBX = (pop32());
  /* 10168794 pop ecx */
  ECX = (pop32());
  /* 10168795 pop ecx */
  ECX = (pop32());
  /* 10168796 ret  */
  ESPCHK(0x10168665u, _esp0);
  ESP += 4; return;
}

/* FUN_10008797 @ 0x10168797 (45 bytes, 17 insns) */
void f_10168797(void) {
  FTRACE(0x10168797u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10168797 push esi */
  push32((uint32_t)(ESI));
  /* 10168798 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1016879c push 0 */
  push32((uint32_t)(0x0u));
  /* 1016879e and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 101687a1 call dword ptr [0x1016e004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e004))), 0x101687a7u);
  /* 101687a7 cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101687ac jne 0x101687c2 */
  if (!C.zf) goto L_101687c2;
  /* 101687ae mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 101687b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101687b3 je 0x101687c2 */
  if (C.zf) goto L_101687c2;
  /* 101687b5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101687b7 mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 101687ba mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 101687bc mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 101687bf mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_101687c2:;
  /* 101687c2 pop esi */
  ESI = (pop32());
  /* 101687c3 ret  */
  ESPCHK(0x10168797u, _esp0);
  ESP += 4; return;
}

/* FUN_100087c4 @ 0x101687c4 (328 bytes, 115 insns) */
void f_101687c4(void) {
  FTRACE(0x101687c4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101687c4 push ebp */
  push32((uint32_t)(EBP));
  /* 101687c5 mov ebp, esp */
  EBP = (ESP);
  /* 101687c7 mov eax, 0x122c */
  EAX = (0x122cu);
  /* 101687cc call 0x1016aed0 */
  push32(0x101687d1u); f_1016aed0();
  /* 101687d1 lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 101687d7 push ebx */
  push32((uint32_t)(EBX));
  /* 101687d8 push eax */
  push32((uint32_t)(EAX));
  /* 101687d9 mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 101687e3 call dword ptr [0x1016e070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e070))), 0x101687e9u);
  /* 101687e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101687eb je 0x10168807 */
  if (C.zf) goto L_10168807;
  /* 101687ed cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101687f4 jne 0x10168807 */
  if (!C.zf) goto L_10168807;
  /* 101687f6 cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101687fd jb 0x10168807 */
  if (C.cf) goto L_10168807;
  /* 101687ff push 1 */
  push32((uint32_t)(0x1u));
  /* 10168801 pop eax */
  EAX = (pop32());
  /* 10168802 jmp 0x10168909 */
  goto L_10168909;
L_10168807:;
  /* 10168807 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 1016880d push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 10168812 push eax */
  push32((uint32_t)(EAX));
  /* 10168813 push 0x1016e1c8 */
  push32((uint32_t)(0x1016e1c8u));
  /* 10168818 call dword ptr [0x1016e06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e06c))), 0x1016881eu);
  /* 1016881e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10168820 je 0x101688f6 */
  if (C.zf) goto L_101688f6;
  /* 10168826 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10168828 lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 1016882e cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10168834 je 0x10168849 */
  if (C.zf) goto L_10168849;
L_10168836:;
  /* 10168836 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10168838 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016883a jl 0x10168844 */
  if ((C.sf!=C.of)) goto L_10168844;
  /* 1016883c cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016883e jg 0x10168844 */
  if ((!C.zf&&C.sf==C.of)) goto L_10168844;
  /* 10168840 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10168842 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_10168844:;
  /* 10168844 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10168845 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10168847 jne 0x10168836 */
  if (!C.zf) goto L_10168836;
L_10168849:;
  /* 10168849 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 1016884f push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10168851 push eax */
  push32((uint32_t)(EAX));
  /* 10168852 push 0x1016e1b0 */
  push32((uint32_t)(0x1016e1b0u));
  /* 10168857 call 0x1016ae90 */
  push32(0x1016885cu); f_1016ae90();
  /* 1016885c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016885f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10168861 jne 0x1016886b */
  if (!C.zf) goto L_1016886b;
  /* 10168863 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 10168869 jmp 0x101688b4 */
  goto L_101688b4;
L_1016886b:;
  /* 1016886b lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 10168871 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10168876 push eax */
  push32((uint32_t)(EAX));
  /* 10168877 push ebx */
  push32((uint32_t)(EBX));
  /* 10168878 call dword ptr [0x1016e054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e054))), 0x1016887eu);
  /* 1016887e cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10168884 lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 1016888a je 0x1016889f */
  if (C.zf) goto L_1016889f;
L_1016888c:;
  /* 1016888c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1016888e cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10168890 jl 0x1016889a */
  if ((C.sf!=C.of)) goto L_1016889a;
  /* 10168892 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10168894 jg 0x1016889a */
  if ((!C.zf&&C.sf==C.of)) goto L_1016889a;
  /* 10168896 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10168898 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_1016889a:;
  /* 1016889a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1016889b cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016889d jne 0x1016888c */
  if (!C.zf) goto L_1016888c;
L_1016889f:;
  /* 1016889f lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 101688a5 push eax */
  push32((uint32_t)(EAX));
  /* 101688a6 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 101688ac push eax */
  push32((uint32_t)(EAX));
  /* 101688ad call 0x1016ae10 */
  push32(0x101688b2u); f_1016ae10();
  /* 101688b2 pop ecx */
  ECX = (pop32());
  /* 101688b3 pop ecx */
  ECX = (pop32());
L_101688b4:;
  /* 101688b4 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101688b6 je 0x101688f6 */
  if (C.zf) goto L_101688f6;
  /* 101688b8 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 101688ba push eax */
  push32((uint32_t)(EAX));
  /* 101688bb call 0x1016ad50 */
  push32(0x101688c0u); f_1016ad50();
  /* 101688c0 pop ecx */
  ECX = (pop32());
  /* 101688c1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101688c3 pop ecx */
  ECX = (pop32());
  /* 101688c4 je 0x101688f6 */
  if (C.zf) goto L_101688f6;
  /* 101688c6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101688c7 mov ecx, eax */
  ECX = (EAX);
  /* 101688c9 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101688cb je 0x101688db */
  if (C.zf) goto L_101688db;
L_101688cd:;
  /* 101688cd cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101688d0 jne 0x101688d6 */
  if (!C.zf) goto L_101688d6;
  /* 101688d2 mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 101688d4 jmp 0x101688d7 */
  goto L_101688d7;
L_101688d6:;
  /* 101688d6 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_101688d7:;
  /* 101688d7 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101688d9 jne 0x101688cd */
  if (!C.zf) goto L_101688cd;
L_101688db:;
  /* 101688db push 0xa */
  push32((uint32_t)(0xau));
  /* 101688dd push ebx */
  push32((uint32_t)(EBX));
  /* 101688de push eax */
  push32((uint32_t)(EAX));
  /* 101688df call 0x1016ab15 */
  push32(0x101688e4u); f_1016ab15();
  /* 101688e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101688e7 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101688ea je 0x10168909 */
  if (C.zf) goto L_10168909;
  /* 101688ec cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101688ef je 0x10168909 */
  if (C.zf) goto L_10168909;
  /* 101688f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101688f4 je 0x10168909 */
  if (C.zf) goto L_10168909;
L_101688f6:;
  /* 101688f6 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 101688f9 push eax */
  push32((uint32_t)(EAX));
  /* 101688fa call 0x10168797 */
  push32(0x101688ffu); f_10168797();
  /* 101688ff cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10168903 pop ecx */
  ECX = (pop32());
  /* 10168904 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10168906 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10168909:;
  /* 10168909 pop ebx */
  EBX = (pop32());
  /* 1016890a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1016890b ret  */
  ESPCHK(0x101687c4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000890c @ 0x1016890c (93 bytes, 30 insns) */
void f_1016890c(void) {
  FTRACE(0x1016890cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016890c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016890e push 0 */
  push32((uint32_t)(0x0u));
  /* 10168910 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168914 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10168919 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 1016891c push eax */
  push32((uint32_t)(EAX));
  /* 1016891d call dword ptr [0x1016e078] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e078))), 0x10168923u);
  /* 10168923 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10168925 mov dword ptr [0x10177ca4], eax */
  w32((uint32_t)(0x10177ca4), (EAX));
  /* 1016892a je 0x10168962 */
  if (C.zf) goto L_10168962;
  /* 1016892c call 0x101687c4 */
  push32(0x10168931u); f_101687c4();
  /* 10168931 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168934 mov dword ptr [0x10177ca8], eax */
  w32((uint32_t)(0x10177ca8), (EAX));
  /* 10168939 jne 0x10168948 */
  if (!C.zf) goto L_10168948;
  /* 1016893b push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 10168940 call 0x1016aeff */
  push32(0x10168945u); f_1016aeff();
  /* 10168945 pop ecx */
  ECX = (pop32());
  /* 10168946 jmp 0x10168952 */
  goto L_10168952;
L_10168948:;
  /* 10168948 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016894b jne 0x10168965 */
  if (!C.zf) goto L_10168965;
  /* 1016894d call 0x1016b750 */
  push32(0x10168952u); f_1016b750();
L_10168952:;
  /* 10168952 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10168954 jne 0x10168965 */
  if (!C.zf) goto L_10168965;
  /* 10168956 push dword ptr [0x10177ca4] */
  push32((uint32_t)(r32((uint32_t)(0x10177ca4))));
  /* 1016895c call dword ptr [0x1016e074] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e074))), 0x10168962u);
L_10168962:;
  /* 10168962 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10168964 ret  */
  ESPCHK(0x1016890cu, _esp0);
  ESP += 4; return;
L_10168965:;
  /* 10168965 push 1 */
  push32((uint32_t)(0x1u));
  /* 10168967 pop eax */
  EAX = (pop32());
  /* 10168968 ret  */
  ESPCHK(0x1016890cu, _esp0);
  ESP += 4; return;
}

/* FUN_10008969 @ 0x10168969 (168 bytes, 56 insns) */
void f_10168969(void) {
  FTRACE(0x10168969u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10168969 mov eax, dword ptr [0x10177ca8] */
  EAX = (r32((uint32_t)(0x10177ca8)));
  /* 1016896e push esi */
  push32((uint32_t)(ESI));
  /* 1016896f cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168972 push edi */
  push32((uint32_t)(EDI));
  /* 10168973 jne 0x101689db */
  if (!C.zf) goto L_101689db;
  /* 10168975 push ebx */
  push32((uint32_t)(EBX));
  /* 10168976 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10168978 cmp dword ptr [0x10176a48], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10176a48))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016897e push ebp */
  push32((uint32_t)(EBP));
  /* 1016897f mov ebp, dword ptr [0x1016e080] */
  EBP = (r32((uint32_t)(0x1016e080)));
  /* 10168985 jle 0x101689c7 */
  if ((C.zf||C.sf!=C.of)) goto L_101689c7;
  /* 10168987 mov eax, dword ptr [0x10176a4c] */
  EAX = (r32((uint32_t)(0x10176a4c)));
  /* 1016898c mov edi, dword ptr [0x1016e07c] */
  EDI = (r32((uint32_t)(0x1016e07c)));
  /* 10168992 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_10168995:;
  /* 10168995 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1016899a push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1016899f push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101689a1 call edi */
  call_ind((uint32_t)(EDI), 0x101689a3u);
  /* 101689a3 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 101689a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 101689aa push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101689ac call edi */
  call_ind((uint32_t)(EDI), 0x101689aeu);
  /* 101689ae push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 101689b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 101689b3 push dword ptr [0x10177ca4] */
  push32((uint32_t)(r32((uint32_t)(0x10177ca4))));
  /* 101689b9 call ebp */
  call_ind((uint32_t)(EBP), 0x101689bbu);
  /* 101689bb add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101689be inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101689bf cmp ebx, dword ptr [0x10176a48] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10176a48))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101689c5 jl 0x10168995 */
  if ((C.sf!=C.of)) goto L_10168995;
L_101689c7:;
  /* 101689c7 push dword ptr [0x10176a4c] */
  push32((uint32_t)(r32((uint32_t)(0x10176a4c))));
  /* 101689cd push 0 */
  push32((uint32_t)(0x0u));
  /* 101689cf push dword ptr [0x10177ca4] */
  push32((uint32_t)(r32((uint32_t)(0x10177ca4))));
  /* 101689d5 call ebp */
  call_ind((uint32_t)(EBP), 0x101689d7u);
  /* 101689d7 pop ebp */
  EBP = (pop32());
  /* 101689d8 pop ebx */
  EBX = (pop32());
  /* 101689d9 jmp 0x10168a02 */
  goto L_10168a02;
L_101689db:;
  /* 101689db cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101689de jne 0x10168a02 */
  if (!C.zf) goto L_10168a02;
  /* 101689e0 mov edi, 0x10170ee0 */
  EDI = (0x10170ee0u);
  /* 101689e5 mov esi, edi */
  ESI = (EDI);
L_101689e7:;
  /* 101689e7 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 101689ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101689ec je 0x101689fc */
  if (C.zf) goto L_101689fc;
  /* 101689ee push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 101689f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 101689f5 push eax */
  push32((uint32_t)(EAX));
  /* 101689f6 call dword ptr [0x1016e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e07c))), 0x101689fcu);
L_101689fc:;
  /* 101689fc mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 101689fe cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168a00 jne 0x101689e7 */
  if (!C.zf) goto L_101689e7;
L_10168a02:;
  /* 10168a02 push dword ptr [0x10177ca4] */
  push32((uint32_t)(r32((uint32_t)(0x10177ca4))));
  /* 10168a08 call dword ptr [0x1016e074] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e074))), 0x10168a0eu);
  /* 10168a0e pop edi */
  EDI = (pop32());
  /* 10168a0f pop esi */
  ESI = (pop32());
  /* 10168a10 ret  */
  ESPCHK(0x10168969u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a11 @ 0x10168a11 (57 bytes, 18 insns) */
void f_10168a11(void) {
  FTRACE(0x10168a11u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10168a11 mov eax, dword ptr [0x101766d0] */
  EAX = (r32((uint32_t)(0x101766d0)));
  /* 10168a16 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168a19 je 0x10168a28 */
  if (C.zf) goto L_10168a28;
  /* 10168a1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10168a1d jne 0x10168a49 */
  if (!C.zf) goto L_10168a49;
  /* 10168a1f cmp dword ptr [0x101766d4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x101766d4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168a26 jne 0x10168a49 */
  if (!C.zf) goto L_10168a49;
L_10168a28:;
  /* 10168a28 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10168a2d call 0x10168a4a */
  push32(0x10168a32u); f_10168a4a();
  /* 10168a32 mov eax, dword ptr [0x10176824] */
  EAX = (r32((uint32_t)(0x10176824)));
  /* 10168a37 pop ecx */
  ECX = (pop32());
  /* 10168a38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10168a3a je 0x10168a3e */
  if (C.zf) goto L_10168a3e;
  /* 10168a3c call eax */
  call_ind((uint32_t)(EAX), 0x10168a3eu);
L_10168a3e:;
  /* 10168a3e push 0xff */
  push32((uint32_t)(0xffu));
  /* 10168a43 call 0x10168a4a */
  push32(0x10168a48u); f_10168a4a();
  /* 10168a48 pop ecx */
  ECX = (pop32());
L_10168a49:;
  /* 10168a49 ret  */
  ESPCHK(0x10168a11u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a4a @ 0x10168a4a (339 bytes, 100 insns) */
void f_10168a4a(void) {
  FTRACE(0x10168a4au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10168a4a push ebp */
  push32((uint32_t)(EBP));
  /* 10168a4b mov ebp, esp */
  EBP = (ESP);
  /* 10168a4d sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10168a53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10168a56 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10168a58 mov eax, 0x10170738 */
  EAX = (0x10170738u);
L_10168a5d:;
  /* 10168a5d cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168a5f je 0x10168a6c */
  if (C.zf) goto L_10168a6c;
  /* 10168a61 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10168a64 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10168a65 cmp eax, 0x101707c8 */
  { uint32_t _a=(EAX),_b=(0x101707c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168a6a jl 0x10168a5d */
  if ((C.sf!=C.of)) goto L_10168a5d;
L_10168a6c:;
  /* 10168a6c push esi */
  push32((uint32_t)(ESI));
  /* 10168a6d mov esi, ecx */
  ESI = (ECX);
  /* 10168a6f shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 10168a72 cmp edx, dword ptr [esi + 0x10170738] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x10170738))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168a78 jne 0x10168b9a */
  if (!C.zf) goto L_10168b9a;
  /* 10168a7e mov eax, dword ptr [0x101766d0] */
  EAX = (r32((uint32_t)(0x101766d0)));
  /* 10168a83 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168a86 je 0x10168b74 */
  if (C.zf) goto L_10168b74;
  /* 10168a8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10168a8e jne 0x10168a9d */
  if (!C.zf) goto L_10168a9d;
  /* 10168a90 cmp dword ptr [0x101766d4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x101766d4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168a97 je 0x10168b74 */
  if (C.zf) goto L_10168b74;
L_10168a9d:;
  /* 10168a9d cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168aa3 je 0x10168b9a */
  if (C.zf) goto L_10168b9a;
  /* 10168aa9 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10168aaf push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10168ab4 push eax */
  push32((uint32_t)(EAX));
  /* 10168ab5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10168ab7 call dword ptr [0x1016e054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e054))), 0x10168abdu);
  /* 10168abd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10168abf jne 0x10168ad4 */
  if (!C.zf) goto L_10168ad4;
  /* 10168ac1 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10168ac7 push 0x1016e4b8 */
  push32((uint32_t)(0x1016e4b8u));
  /* 10168acc push eax */
  push32((uint32_t)(EAX));
  /* 10168acd call 0x10169af0 */
  push32(0x10168ad2u); f_10169af0();
  /* 10168ad2 pop ecx */
  ECX = (pop32());
  /* 10168ad3 pop ecx */
  ECX = (pop32());
L_10168ad4:;
  /* 10168ad4 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10168ada push edi */
  push32((uint32_t)(EDI));
  /* 10168adb push eax */
  push32((uint32_t)(EAX));
  /* 10168adc lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 10168ae2 call 0x10169040 */
  push32(0x10168ae7u); f_10169040();
  /* 10168ae7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10168ae8 pop ecx */
  ECX = (pop32());
  /* 10168ae9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168aec jbe 0x10168b17 */
  if ((C.cf||C.zf)) goto L_10168b17;
  /* 10168aee lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10168af4 push eax */
  push32((uint32_t)(EAX));
  /* 10168af5 call 0x10169040 */
  push32(0x10168afau); f_10169040();
  /* 10168afa mov edi, eax */
  EDI = (EAX);
  /* 10168afc lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10168b02 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10168b05 push 3 */
  push32((uint32_t)(0x3u));
  /* 10168b07 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10168b09 push 0x1016e4b4 */
  push32((uint32_t)(0x1016e4b4u));
  /* 10168b0e push edi */
  push32((uint32_t)(EDI));
  /* 10168b0f call 0x1016be00 */
  push32(0x10168b14u); f_1016be00();
  /* 10168b14 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10168b17:;
  /* 10168b17 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10168b1d push 0x1016e498 */
  push32((uint32_t)(0x1016e498u));
  /* 10168b22 push eax */
  push32((uint32_t)(EAX));
  /* 10168b23 call 0x10169af0 */
  push32(0x10168b28u); f_10169af0();
  /* 10168b28 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10168b2e push edi */
  push32((uint32_t)(EDI));
  /* 10168b2f push eax */
  push32((uint32_t)(EAX));
  /* 10168b30 call 0x10169b00 */
  push32(0x10168b35u); f_10169b00();
  /* 10168b35 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10168b3b push 0x1016e494 */
  push32((uint32_t)(0x1016e494u));
  /* 10168b40 push eax */
  push32((uint32_t)(EAX));
  /* 10168b41 call 0x10169b00 */
  push32(0x10168b46u); f_10169b00();
  /* 10168b46 push dword ptr [esi + 0x1017073c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x1017073c))));
  /* 10168b4c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10168b52 push eax */
  push32((uint32_t)(EAX));
  /* 10168b53 call 0x10169b00 */
  push32(0x10168b58u); f_10169b00();
  /* 10168b58 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10168b5d lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10168b63 push 0x1016e46c */
  push32((uint32_t)(0x1016e46cu));
  /* 10168b68 push eax */
  push32((uint32_t)(EAX));
  /* 10168b69 call 0x1016bd74 */
  push32(0x10168b6eu); f_1016bd74();
  /* 10168b6e add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10168b71 pop edi */
  EDI = (pop32());
  /* 10168b72 jmp 0x10168b9a */
  goto L_10168b9a;
L_10168b74:;
  /* 10168b74 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10168b77 lea esi, [esi + 0x1017073c] */
  ESI = ((uint32_t)(ESI + 0x1017073c));
  /* 10168b7d push 0 */
  push32((uint32_t)(0x0u));
  /* 10168b7f push eax */
  push32((uint32_t)(EAX));
  /* 10168b80 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10168b82 call 0x10169040 */
  push32(0x10168b87u); f_10169040();
  /* 10168b87 pop ecx */
  ECX = (pop32());
  /* 10168b88 push eax */
  push32((uint32_t)(EAX));
  /* 10168b89 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10168b8b push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10168b8d call dword ptr [0x1016e044] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e044))), 0x10168b93u);
  /* 10168b93 push eax */
  push32((uint32_t)(EAX));
  /* 10168b94 call dword ptr [0x1016e084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e084))), 0x10168b9au);
L_10168b9a:;
  /* 10168b9a pop esi */
  ESI = (pop32());
  /* 10168b9b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10168b9c ret  */
  ESPCHK(0x10168a4au, _esp0);
  ESP += 4; return;
}

/* FUN_10008b9d @ 0x10168b9d (101 bytes, 34 insns) */
void f_10168b9d(void) {
  FTRACE(0x10168b9du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10168b9d push esi */
  push32((uint32_t)(ESI));
  /* 10168b9e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10168ba2 cmp esi, dword ptr [0x10177dc0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10177dc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168ba8 jae 0x10168bea */
  if (!C.cf) goto L_10168bea;
  /* 10168baa mov ecx, esi */
  ECX = (ESI);
  /* 10168bac mov eax, esi */
  EAX = (ESI);
  /* 10168bae sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10168bb1 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10168bb4 mov ecx, dword ptr [ecx*4 + 0x10177cc0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10177cc0)));
  /* 10168bbb lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10168bbe test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10168bc3 je 0x10168bea */
  if (C.zf) goto L_10168bea;
  /* 10168bc5 push edi */
  push32((uint32_t)(EDI));
  /* 10168bc6 push esi */
  push32((uint32_t)(ESI));
  /* 10168bc7 call 0x1016c044 */
  push32(0x10168bccu); f_1016c044();
  /* 10168bcc push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10168bd0 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10168bd4 push esi */
  push32((uint32_t)(ESI));
  /* 10168bd5 call 0x10168c02 */
  push32(0x10168bdau); f_10168c02();
  /* 10168bda push esi */
  push32((uint32_t)(ESI));
  /* 10168bdb mov edi, eax */
  EDI = (EAX);
  /* 10168bdd call 0x1016c0a3 */
  push32(0x10168be2u); f_1016c0a3();
  /* 10168be2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10168be5 mov eax, edi */
  EAX = (EDI);
  /* 10168be7 pop edi */
  EDI = (pop32());
  /* 10168be8 pop esi */
  ESI = (pop32());
  /* 10168be9 ret  */
  ESPCHK(0x10168b9du, _esp0);
  ESP += 4; return;
L_10168bea:;
  /* 10168bea call 0x1016bf71 */
  push32(0x10168befu); f_1016bf71();
  /* 10168bef mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10168bf5 call 0x1016bf7a */
  push32(0x10168bfau); f_1016bf7a();
  /* 10168bfa and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10168bfd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10168c00 pop esi */
  ESI = (pop32());
  /* 10168c01 ret  */
  ESPCHK(0x10168b9du, _esp0);
  ESP += 4; return;
}

/* FUN_10008c02 @ 0x10168c02 (115 bytes, 41 insns) */
void f_10168c02(void) {
  FTRACE(0x10168c02u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10168c02 push esi */
  push32((uint32_t)(ESI));
  /* 10168c03 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10168c07 push edi */
  push32((uint32_t)(EDI));
  /* 10168c08 push esi */
  push32((uint32_t)(ESI));
  /* 10168c09 call 0x1016c002 */
  push32(0x10168c0eu); f_1016c002();
  /* 10168c0e cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168c11 pop ecx */
  ECX = (pop32());
  /* 10168c12 jne 0x10168c21 */
  if (!C.zf) goto L_10168c21;
  /* 10168c14 call 0x1016bf71 */
  push32(0x10168c19u); f_1016bf71();
  /* 10168c19 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10168c1f jmp 0x10168c4e */
  goto L_10168c4e;
L_10168c21:;
  /* 10168c21 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 10168c25 push 0 */
  push32((uint32_t)(0x0u));
  /* 10168c27 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10168c2b push eax */
  push32((uint32_t)(EAX));
  /* 10168c2c call dword ptr [0x1016e000] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e000))), 0x10168c32u);
  /* 10168c32 mov edi, eax */
  EDI = (EAX);
  /* 10168c34 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168c37 jne 0x10168c41 */
  if (!C.zf) goto L_10168c41;
  /* 10168c39 call dword ptr [0x1016e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e03c))), 0x10168c3fu);
  /* 10168c3f jmp 0x10168c43 */
  goto L_10168c43;
L_10168c41:;
  /* 10168c41 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10168c43:;
  /* 10168c43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10168c45 je 0x10168c53 */
  if (C.zf) goto L_10168c53;
  /* 10168c47 push eax */
  push32((uint32_t)(EAX));
  /* 10168c48 call 0x1016befe */
  push32(0x10168c4du); f_1016befe();
  /* 10168c4d pop ecx */
  ECX = (pop32());
L_10168c4e:;
  /* 10168c4e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10168c51 jmp 0x10168c72 */
  goto L_10168c72;
L_10168c53:;
  /* 10168c53 mov ecx, esi */
  ECX = (ESI);
  /* 10168c55 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 10168c58 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10168c5b mov eax, esi */
  EAX = (ESI);
  /* 10168c5d mov ecx, dword ptr [ecx*4 + 0x10177cc0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10177cc0)));
  /* 10168c64 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10168c67 and byte ptr [ecx + eax*4 + 4], 0xfd */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0xfdu); w8((uint32_t)(ECX + EAX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 10168c6c lea eax, [ecx + eax*4 + 4] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 10168c70 mov eax, edi */
  EAX = (EDI);
L_10168c72:;
  /* 10168c72 pop edi */
  EDI = (pop32());
  /* 10168c73 pop esi */
  ESI = (pop32());
  /* 10168c74 ret  */
  ESPCHK(0x10168c02u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c75 @ 0x10168c75 (101 bytes, 34 insns) */
void f_10168c75(void) {
  FTRACE(0x10168c75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10168c75 push esi */
  push32((uint32_t)(ESI));
  /* 10168c76 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10168c7a cmp esi, dword ptr [0x10177dc0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10177dc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168c80 jae 0x10168cc2 */
  if (!C.cf) goto L_10168cc2;
  /* 10168c82 mov ecx, esi */
  ECX = (ESI);
  /* 10168c84 mov eax, esi */
  EAX = (ESI);
  /* 10168c86 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10168c89 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10168c8c mov ecx, dword ptr [ecx*4 + 0x10177cc0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10177cc0)));
  /* 10168c93 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10168c96 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10168c9b je 0x10168cc2 */
  if (C.zf) goto L_10168cc2;
  /* 10168c9d push edi */
  push32((uint32_t)(EDI));
  /* 10168c9e push esi */
  push32((uint32_t)(ESI));
  /* 10168c9f call 0x1016c044 */
  push32(0x10168ca4u); f_1016c044();
  /* 10168ca4 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10168ca8 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10168cac push esi */
  push32((uint32_t)(ESI));
  /* 10168cad call 0x10168cda */
  push32(0x10168cb2u); f_10168cda();
  /* 10168cb2 push esi */
  push32((uint32_t)(ESI));
  /* 10168cb3 mov edi, eax */
  EDI = (EAX);
  /* 10168cb5 call 0x1016c0a3 */
  push32(0x10168cbau); f_1016c0a3();
  /* 10168cba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10168cbd mov eax, edi */
  EAX = (EDI);
  /* 10168cbf pop edi */
  EDI = (pop32());
  /* 10168cc0 pop esi */
  ESI = (pop32());
  /* 10168cc1 ret  */
  ESPCHK(0x10168c75u, _esp0);
  ESP += 4; return;
L_10168cc2:;
  /* 10168cc2 call 0x1016bf71 */
  push32(0x10168cc7u); f_1016bf71();
  /* 10168cc7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10168ccd call 0x1016bf7a */
  push32(0x10168cd2u); f_1016bf7a();
  /* 10168cd2 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10168cd5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10168cd8 pop esi */
  ESI = (pop32());
  /* 10168cd9 ret  */
  ESPCHK(0x10168c75u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cda @ 0x10168cda (395 bytes, 135 insns) */
void f_10168cda(void) {
  FTRACE(0x10168cdau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10168cda push ebp */
  push32((uint32_t)(EBP));
  /* 10168cdb mov ebp, esp */
  EBP = (ESP);
  /* 10168cdd sub esp, 0x414 */
  { uint32_t _a=(ESP),_b=(0x414u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10168ce3 push ebx */
  push32((uint32_t)(EBX));
  /* 10168ce4 push esi */
  push32((uint32_t)(ESI));
  /* 10168ce5 push edi */
  push32((uint32_t)(EDI));
  /* 10168ce6 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10168ce8 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168ceb mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 10168cee mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 10168cf1 jne 0x10168cfa */
  if (!C.zf) goto L_10168cfa;
L_10168cf3:;
  /* 10168cf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10168cf5 jmp 0x10168e60 */
  goto L_10168e60;
L_10168cfa:;
  /* 10168cfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10168cfd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10168d00 lea ebx, [eax*4 + 0x10177cc0] */
  EBX = ((uint32_t)(EAX*4 + 0x10177cc0));
  /* 10168d07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10168d0a and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10168d0d lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 10168d10 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10168d12 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 10168d15 test byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 10168d1a je 0x10168d2a */
  if (C.zf) goto L_10168d2a;
  /* 10168d1c push 2 */
  push32((uint32_t)(0x2u));
  /* 10168d1e push edi */
  push32((uint32_t)(EDI));
  /* 10168d1f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10168d22 call 0x10168c02 */
  push32(0x10168d27u); f_10168c02();
  /* 10168d27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10168d2a:;
  /* 10168d2a mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10168d2c add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10168d2e test byte ptr [eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 10168d32 je 0x10168df9 */
  if (C.zf) goto L_10168df9;
  /* 10168d38 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10168d3b cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168d3e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10168d41 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 10168d44 jbe 0x10168e34 */
  if ((C.cf||C.zf)) goto L_10168e34;
L_10168d4a:;
  /* 10168d4a lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
L_10168d50:;
  /* 10168d50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10168d53 sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10168d56 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168d59 jae 0x10168d84 */
  if (!C.cf) goto L_10168d84;
  /* 10168d5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10168d5e inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10168d61 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 10168d63 cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10168d66 jne 0x10168d6f */
  if (!C.zf) goto L_10168d6f;
  /* 10168d68 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 10168d6b mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 10168d6e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10168d6f:;
  /* 10168d6f mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10168d71 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10168d72 mov ecx, eax */
  ECX = (EAX);
  /* 10168d74 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10168d7a sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10168d7c cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168d82 jl 0x10168d50 */
  if ((C.sf!=C.of)) goto L_10168d50;
L_10168d84:;
  /* 10168d84 mov edi, eax */
  EDI = (EAX);
  /* 10168d86 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10168d8c sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10168d8e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10168d91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10168d93 push eax */
  push32((uint32_t)(EAX));
  /* 10168d94 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10168d9a push edi */
  push32((uint32_t)(EDI));
  /* 10168d9b push eax */
  push32((uint32_t)(EAX));
  /* 10168d9c mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10168d9e push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 10168da1 call dword ptr [0x1016e084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e084))), 0x10168da7u);
  /* 10168da7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10168da9 je 0x10168dee */
  if (C.zf) goto L_10168dee;
  /* 10168dab mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10168dae add dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 10168db1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168db3 jl 0x10168dc0 */
  if ((C.sf!=C.of)) goto L_10168dc0;
  /* 10168db5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10168db8 sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10168dbb cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168dbe jb 0x10168d4a */
  if (C.cf) goto L_10168d4a;
L_10168dc0:;
  /* 10168dc0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10168dc2:;
  /* 10168dc2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10168dc5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168dc7 jne 0x10168e5d */
  if (!C.zf) goto L_10168e5d;
  /* 10168dcd cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168dd0 je 0x10168e34 */
  if (C.zf) goto L_10168e34;
  /* 10168dd2 push 5 */
  push32((uint32_t)(0x5u));
  /* 10168dd4 pop esi */
  ESI = (pop32());
  /* 10168dd5 cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168dd8 jne 0x10168e26 */
  if (!C.zf) goto L_10168e26;
  /* 10168dda call 0x1016bf71 */
  push32(0x10168ddfu); f_1016bf71();
  /* 10168ddf mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10168de5 call 0x1016bf7a */
  push32(0x10168deau); f_1016bf7a();
  /* 10168dea mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10168dec jmp 0x10168e2f */
  goto L_10168e2f;
L_10168dee:;
  /* 10168dee call dword ptr [0x1016e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e03c))), 0x10168df4u);
  /* 10168df4 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10168df7 jmp 0x10168dc0 */
  goto L_10168dc0;
L_10168df9:;
  /* 10168df9 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 10168dfc push edi */
  push32((uint32_t)(EDI));
  /* 10168dfd push ecx */
  push32((uint32_t)(ECX));
  /* 10168dfe push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10168e01 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10168e04 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 10168e06 call dword ptr [0x1016e084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e084))), 0x10168e0cu);
  /* 10168e0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10168e0e je 0x10168e1b */
  if (C.zf) goto L_10168e1b;
  /* 10168e10 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10168e13 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 10168e16 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10168e19 jmp 0x10168dc2 */
  goto L_10168dc2;
L_10168e1b:;
  /* 10168e1b call dword ptr [0x1016e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e03c))), 0x10168e21u);
  /* 10168e21 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10168e24 jmp 0x10168dc2 */
  goto L_10168dc2;
L_10168e26:;
  /* 10168e26 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10168e29 call 0x1016befe */
  push32(0x10168e2eu); f_1016befe();
  /* 10168e2e pop ecx */
  ECX = (pop32());
L_10168e2f:;
  /* 10168e2f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10168e32 jmp 0x10168e60 */
  goto L_10168e60;
L_10168e34:;
  /* 10168e34 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10168e36 test byte ptr [eax + esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10168e3b je 0x10168e49 */
  if (C.zf) goto L_10168e49;
  /* 10168e3d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10168e40 cmp byte ptr [eax], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10168e43 je 0x10168cf3 */
  if (C.zf) goto L_10168cf3;
L_10168e49:;
  /* 10168e49 call 0x1016bf71 */
  push32(0x10168e4eu); f_1016bf71();
  /* 10168e4e mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 10168e54 call 0x1016bf7a */
  push32(0x10168e59u); f_1016bf7a();
  /* 10168e59 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 10168e5b jmp 0x10168e2f */
  goto L_10168e2f;
L_10168e5d:;
  /* 10168e5d sub eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10168e60:;
  /* 10168e60 pop edi */
  EDI = (pop32());
  /* 10168e61 pop esi */
  ESI = (pop32());
  /* 10168e62 pop ebx */
  EBX = (pop32());
  /* 10168e63 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10168e64 ret  */
  ESPCHK(0x10168cdau, _esp0);
  ESP += 4; return;
}

/* FUN_10008e65 @ 0x10168e65 (68 bytes, 19 insns) */
void f_10168e65(void) {
  FTRACE(0x10168e65u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10168e65 inc dword ptr [0x10176828] */
  { uint32_t _r=(r32((uint32_t)(0x10176828)))+1; w32((uint32_t)(0x10176828), (_r)); fl_inc(_r,32); }
  /* 10168e6b push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10168e70 call 0x1016a2af */
  push32(0x10168e75u); f_1016a2af();
  /* 10168e75 pop ecx */
  ECX = (pop32());
  /* 10168e76 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10168e7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10168e7c mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10168e7f je 0x10168e8e */
  if (C.zf) goto L_10168e8e;
  /* 10168e81 or dword ptr [ecx + 0xc], 8 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x8u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 10168e85 mov dword ptr [ecx + 0x18], 0x1000 */
  w32((uint32_t)(ECX + 0x18), (0x1000u));
  /* 10168e8c jmp 0x10168e9f */
  goto L_10168e9f;
L_10168e8e:;
  /* 10168e8e or dword ptr [ecx + 0xc], 4 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x4u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 10168e92 lea eax, [ecx + 0x14] */
  EAX = ((uint32_t)(ECX + 0x14));
  /* 10168e95 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10168e98 mov dword ptr [ecx + 0x18], 2 */
  w32((uint32_t)(ECX + 0x18), (0x2u));
L_10168e9f:;
  /* 10168e9f mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 10168ea2 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10168ea6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10168ea8 ret  */
  ESPCHK(0x10168e65u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ea9 @ 0x10168ea9 (41 bytes, 13 insns) */
void f_10168ea9(void) {
  FTRACE(0x10168ea9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10168ea9 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10168ead cmp eax, dword ptr [0x10177dc0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10177dc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168eb3 jb 0x10168eb8 */
  if (C.cf) goto L_10168eb8;
  /* 10168eb5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10168eb7 ret  */
  ESPCHK(0x10168ea9u, _esp0);
  ESP += 4; return;
L_10168eb8:;
  /* 10168eb8 mov ecx, eax */
  ECX = (EAX);
  /* 10168eba and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10168ebd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10168ec0 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10168ec3 mov ecx, dword ptr [ecx*4 + 0x10177cc0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10177cc0)));
  /* 10168eca mov al, byte ptr [ecx + eax*4 + 4] */
  AL = (r8((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 10168ece and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10168ed1 ret  */
  ESPCHK(0x10168ea9u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f8e @ 0x10168f8e (47 bytes, 17 insns) */
void f_10168f8e(void) {
  FTRACE(0x10168f8eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10168f8e mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10168f92 mov ecx, 0x101707c8 */
  ECX = (0x101707c8u);
  /* 10168f97 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168f99 jb 0x10168fb2 */
  if (C.cf) goto L_10168fb2;
  /* 10168f9b cmp eax, 0x10170a28 */
  { uint32_t _a=(EAX),_b=(0x10170a28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168fa0 ja 0x10168fb2 */
  if ((!C.cf&&!C.zf)) goto L_10168fb2;
  /* 10168fa2 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10168fa4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10168fa7 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10168faa push eax */
  push32((uint32_t)(EAX));
  /* 10168fab call 0x1016a013 */
  push32(0x10168fb0u); f_1016a013();
  /* 10168fb0 pop ecx */
  ECX = (pop32());
  /* 10168fb1 ret  */
  ESPCHK(0x10168f8eu, _esp0);
  ESP += 4; return;
L_10168fb2:;
  /* 10168fb2 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10168fb5 push eax */
  push32((uint32_t)(EAX));
  /* 10168fb6 call dword ptr [0x1016e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e00c))), 0x10168fbcu);
  /* 10168fbc ret  */
  ESPCHK(0x10168f8eu, _esp0);
  ESP += 4; return;
}

/* FUN_10008fbd @ 0x10168fbd (35 bytes, 13 insns) */
void f_10168fbd(void) {
  FTRACE(0x10168fbdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10168fbd mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10168fc1 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168fc4 jge 0x10168fd1 */
  if ((C.sf==C.of)) goto L_10168fd1;
  /* 10168fc6 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10168fc9 push eax */
  push32((uint32_t)(EAX));
  /* 10168fca call 0x1016a013 */
  push32(0x10168fcfu); f_1016a013();
  /* 10168fcf pop ecx */
  ECX = (pop32());
  /* 10168fd0 ret  */
  ESPCHK(0x10168fbdu, _esp0);
  ESP += 4; return;
L_10168fd1:;
  /* 10168fd1 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10168fd5 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10168fd8 push eax */
  push32((uint32_t)(EAX));
  /* 10168fd9 call dword ptr [0x1016e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e00c))), 0x10168fdfu);
  /* 10168fdf ret  */
  ESPCHK(0x10168fbdu, _esp0);
  ESP += 4; return;
}

/* FUN_10008fe0 @ 0x10168fe0 (47 bytes, 17 insns) */
void f_10168fe0(void) {
  FTRACE(0x10168fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10168fe0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10168fe4 mov ecx, 0x101707c8 */
  ECX = (0x101707c8u);
  /* 10168fe9 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168feb jb 0x10169004 */
  if (C.cf) goto L_10169004;
  /* 10168fed cmp eax, 0x10170a28 */
  { uint32_t _a=(EAX),_b=(0x10170a28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10168ff2 ja 0x10169004 */
  if ((!C.cf&&!C.zf)) goto L_10169004;
  /* 10168ff4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10168ff6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10168ff9 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10168ffc push eax */
  push32((uint32_t)(EAX));
  /* 10168ffd call 0x1016a074 */
  push32(0x10169002u); f_1016a074();
  /* 10169002 pop ecx */
  ECX = (pop32());
  /* 10169003 ret  */
  ESPCHK(0x10168fe0u, _esp0);
  ESP += 4; return;
L_10169004:;
  /* 10169004 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10169007 push eax */
  push32((uint32_t)(EAX));
  /* 10169008 call dword ptr [0x1016e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e008))), 0x1016900eu);
  /* 1016900e ret  */
  ESPCHK(0x10168fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000900f @ 0x1016900f (35 bytes, 13 insns) */
void f_1016900f(void) {
  FTRACE(0x1016900fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016900f mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10169013 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10169016 jge 0x10169023 */
  if ((C.sf==C.of)) goto L_10169023;
  /* 10169018 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016901b push eax */
  push32((uint32_t)(EAX));
  /* 1016901c call 0x1016a074 */
  push32(0x10169021u); f_1016a074();
  /* 10169021 pop ecx */
  ECX = (pop32());
  /* 10169022 ret  */
  ESPCHK(0x1016900fu, _esp0);
  ESP += 4; return;
L_10169023:;
  /* 10169023 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10169027 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016902a push eax */
  push32((uint32_t)(EAX));
  /* 1016902b call dword ptr [0x1016e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e008))), 0x10169031u);
  /* 10169031 ret  */
  ESPCHK(0x1016900fu, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10169040 (123 bytes, 44 insns) */
void f_10169040(void) {
  FTRACE(0x10169040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10169040 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10169044 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1016904a je 0x10169060 */
  if (C.zf) goto L_10169060;
L_1016904c:;
  /* 1016904c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1016904e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1016904f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10169051 je 0x10169093 */
  if (C.zf) goto L_10169093;
  /* 10169053 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10169059 jne 0x1016904c */
  if (!C.zf) goto L_1016904c;
  /* 1016905b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10169060:;
  /* 10169060 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10169062 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10169067 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10169069 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1016906c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1016906e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10169071 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10169076 je 0x10169060 */
  if (C.zf) goto L_10169060;
  /* 10169078 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1016907b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1016907d je 0x101690b1 */
  if (C.zf) goto L_101690b1;
  /* 1016907f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10169081 je 0x101690a7 */
  if (C.zf) goto L_101690a7;
  /* 10169083 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10169088 je 0x1016909d */
  if (C.zf) goto L_1016909d;
  /* 1016908a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1016908f je 0x10169093 */
  if (C.zf) goto L_10169093;
  /* 10169091 jmp 0x10169060 */
  goto L_10169060;
L_10169093:;
  /* 10169093 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10169096 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1016909a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016909c ret  */
  ESPCHK(0x10169040u, _esp0);
  ESP += 4; return;
L_1016909d:;
  /* 1016909d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 101690a0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101690a4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101690a6 ret  */
  ESPCHK(0x10169040u, _esp0);
  ESP += 4; return;
L_101690a7:;
  /* 101690a7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 101690aa mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101690ae sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101690b0 ret  */
  ESPCHK(0x10169040u, _esp0);
  ESP += 4; return;
L_101690b1:;
  /* 101690b1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 101690b4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101690b8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101690ba ret  */
  ESPCHK(0x10169040u, _esp0);
  ESP += 4; return;
}

/* FUN_100090bb @ 0x101690bb (89 bytes, 39 insns) */
void f_101690bb(void) {
  FTRACE(0x101690bbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101690bb push ebp */
  push32((uint32_t)(EBP));
  /* 101690bc mov ebp, esp */
  EBP = (ESP);
  /* 101690be push ebx */
  push32((uint32_t)(EBX));
  /* 101690bf push esi */
  push32((uint32_t)(ESI));
  /* 101690c0 mov esi, 0x10176a34 */
  ESI = (0x10176a34u);
  /* 101690c5 push edi */
  push32((uint32_t)(EDI));
  /* 101690c6 push esi */
  push32((uint32_t)(ESI));
  /* 101690c7 call dword ptr [0x1016e090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e090))), 0x101690cdu);
  /* 101690cd mov edi, dword ptr [0x1016e08c] */
  EDI = (r32((uint32_t)(0x1016e08c)));
  /* 101690d3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101690d5 cmp dword ptr [0x10176a30], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10176a30))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101690db je 0x101690eb */
  if (C.zf) goto L_101690eb;
  /* 101690dd push esi */
  push32((uint32_t)(ESI));
  /* 101690de call edi */
  call_ind((uint32_t)(EDI), 0x101690e0u);
  /* 101690e0 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101690e2 call 0x1016a013 */
  push32(0x101690e7u); f_1016a013();
  /* 101690e7 pop ecx */
  ECX = (pop32());
  /* 101690e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 101690ea pop ebx */
  EBX = (pop32());
L_101690eb:;
  /* 101690eb push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101690ee push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101690f1 call 0x10169114 */
  push32(0x101690f6u); f_10169114();
  /* 101690f6 pop ecx */
  ECX = (pop32());
  /* 101690f7 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 101690fa test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101690fc pop ecx */
  ECX = (pop32());
  /* 101690fd je 0x10169109 */
  if (C.zf) goto L_10169109;
  /* 101690ff push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10169101 call 0x1016a074 */
  push32(0x10169106u); f_1016a074();
  /* 10169106 pop ecx */
  ECX = (pop32());
  /* 10169107 jmp 0x1016910c */
  goto L_1016910c;
L_10169109:;
  /* 10169109 push esi */
  push32((uint32_t)(ESI));
  /* 1016910a call edi */
  call_ind((uint32_t)(EDI), 0x1016910cu);
L_1016910c:;
  /* 1016910c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1016910f pop edi */
  EDI = (pop32());
  /* 10169110 pop esi */
  ESI = (pop32());
  /* 10169111 pop ebx */
  EBX = (pop32());
  /* 10169112 pop ebp */
  EBP = (pop32());
  /* 10169113 ret  */
  ESPCHK(0x101690bbu, _esp0);
  ESP += 4; return;
}

/* FUN_10009114 @ 0x10169114 (105 bytes, 38 insns) */
void f_10169114(void) {
  FTRACE(0x10169114u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10169114 push ebp */
  push32((uint32_t)(EBP));
  /* 10169115 mov ebp, esp */
  EBP = (ESP);
  /* 10169117 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016911a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016911c jne 0x10169120 */
  if (!C.zf) goto L_10169120;
  /* 1016911e pop ebp */
  EBP = (pop32());
  /* 1016911f ret  */
  ESPCHK(0x10169114u, _esp0);
  ESP += 4; return;
L_10169120:;
  /* 10169120 cmp dword ptr [0x101768b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x101768b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10169127 jne 0x1016913b */
  if (!C.zf) goto L_1016913b;
  /* 10169129 mov cx, word ptr [ebp + 0xc] */
  CX = (r16((uint32_t)(EBP + 0xc)));
  /* 1016912d cmp cx, 0xff */
  { uint32_t _a=(CX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10169132 ja 0x1016916d */
  if ((!C.cf&&!C.zf)) goto L_1016916d;
  /* 10169134 push 1 */
  push32((uint32_t)(0x1u));
  /* 10169136 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10169138 pop eax */
  EAX = (pop32());
  /* 10169139 pop ebp */
  EBP = (pop32());
  /* 1016913a ret  */
  ESPCHK(0x10169114u, _esp0);
  ESP += 4; return;
L_1016913b:;
  /* 1016913b lea ecx, [ebp + 8] */
  ECX = ((uint32_t)(EBP + 0x8));
  /* 1016913e and dword ptr [ebp + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))&(0x0u); w32((uint32_t)(EBP + 0x8), (_r)); fl_logic(_r,32); }
  /* 10169142 push ecx */
  push32((uint32_t)(ECX));
  /* 10169143 push 0 */
  push32((uint32_t)(0x0u));
  /* 10169145 push dword ptr [0x10170c60] */
  push32((uint32_t)(r32((uint32_t)(0x10170c60))));
  /* 1016914b push eax */
  push32((uint32_t)(EAX));
  /* 1016914c lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1016914f push 1 */
  push32((uint32_t)(0x1u));
  /* 10169151 push eax */
  push32((uint32_t)(EAX));
  /* 10169152 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10169157 push dword ptr [0x101768c8] */
  push32((uint32_t)(r32((uint32_t)(0x101768c8))));
  /* 1016915d call dword ptr [0x1016e060] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e060))), 0x10169163u);
  /* 10169163 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10169165 je 0x1016916d */
  if (C.zf) goto L_1016916d;
  /* 10169167 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016916b je 0x1016917b */
  if (C.zf) goto L_1016917b;
L_1016916d:;
  /* 1016916d call 0x1016bf71 */
  push32(0x10169172u); f_1016bf71();
  /* 10169172 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10169178 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1016917b:;
  /* 1016917b pop ebp */
  EBP = (pop32());
  /* 1016917c ret  */
  ESPCHK(0x10169114u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x10169180 (104 bytes, 43 insns) */
void f_10169180(void) {
  FTRACE(0x10169180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10169180 push ebx */
  push32((uint32_t)(EBX));
  /* 10169181 push esi */
  push32((uint32_t)(ESI));
  /* 10169182 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10169186 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10169188 jne 0x101691a2 */
  if (!C.zf) goto L_101691a2;
  /* 1016918a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1016918e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10169192 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10169194 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10169196 mov ebx, eax */
  EBX = (EAX);
  /* 10169198 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1016919c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1016919e mov edx, ebx */
  EDX = (EBX);
  /* 101691a0 jmp 0x101691e3 */
  goto L_101691e3;
L_101691a2:;
  /* 101691a2 mov ecx, eax */
  ECX = (EAX);
  /* 101691a4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 101691a8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 101691ac mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_101691b0:;
  /* 101691b0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 101691b2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 101691b4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 101691b6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 101691b8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101691ba jne 0x101691b0 */
  if (!C.zf) goto L_101691b0;
  /* 101691bc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101691be mov esi, eax */
  ESI = (EAX);
  /* 101691c0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 101691c4 mov ecx, eax */
  ECX = (EAX);
  /* 101691c6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 101691ca mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 101691cc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101691ce jb 0x101691de */
  if (C.cf) goto L_101691de;
  /* 101691d0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101691d4 ja 0x101691de */
  if ((!C.cf&&!C.zf)) goto L_101691de;
  /* 101691d6 jb 0x101691df */
  if (C.cf) goto L_101691df;
  /* 101691d8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101691dc jbe 0x101691df */
  if ((C.cf||C.zf)) goto L_101691df;
L_101691de:;
  /* 101691de dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_101691df:;
  /* 101691df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101691e1 mov eax, esi */
  EAX = (ESI);
L_101691e3:;
  /* 101691e3 pop esi */
  ESI = (pop32());
  /* 101691e4 pop ebx */
  EBX = (pop32());
  /* 101691e5 ret 0x10 */
  ESPCHK(0x10169180u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x101691f0 (117 bytes, 44 insns) */
void f_101691f0(void) {
  FTRACE(0x101691f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101691f0 push ebx */
  push32((uint32_t)(EBX));
  /* 101691f1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 101691f5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101691f7 jne 0x10169211 */
  if (!C.zf) goto L_10169211;
  /* 101691f9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 101691fd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10169201 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10169203 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10169205 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10169209 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1016920b mov eax, edx */
  EAX = (EDX);
  /* 1016920d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1016920f jmp 0x10169261 */
  goto L_10169261;
L_10169211:;
  /* 10169211 mov ecx, eax */
  ECX = (EAX);
  /* 10169213 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 10169217 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1016921b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1016921f:;
  /* 1016921f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10169221 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10169223 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10169225 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10169227 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10169229 jne 0x1016921f */
  if (!C.zf) goto L_1016921f;
  /* 1016922b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1016922d mov ecx, eax */
  ECX = (EAX);
  /* 1016922f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10169233 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 10169234 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10169238 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016923a jb 0x1016924a */
  if (C.cf) goto L_1016924a;
  /* 1016923c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10169240 ja 0x1016924a */
  if ((!C.cf&&!C.zf)) goto L_1016924a;
  /* 10169242 jb 0x10169252 */
  if (C.cf) goto L_10169252;
  /* 10169244 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10169248 jbe 0x10169252 */
  if ((C.cf||C.zf)) goto L_10169252;
L_1016924a:;
  /* 1016924a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016924e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10169252:;
  /* 10169252 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10169256 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016925a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1016925c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1016925e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10169261:;
  /* 10169261 pop ebx */
  EBX = (pop32());
  /* 10169262 ret 0x10 */
  ESPCHK(0x101691f0u, _esp0);
  ESP += 20; return;
}

