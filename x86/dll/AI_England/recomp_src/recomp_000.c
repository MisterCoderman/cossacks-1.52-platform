#include "recomp.h"

/* ProcessAI @ 0x10061000 (16 bytes, 3 insns) */
void f_10061000(void) {
  FTRACE(0x10061000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10061000 call dword ptr [0x100764f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f0))), 0x10061006u);
  /* 10061006 mov dword ptr [0x100762a4], eax */
  w32((uint32_t)(0x100762a4), (EAX));
  /* 1006100b jmp 0x10066d40 */
  f_10066d40(); return;
}

/* InitAI @ 0x10061010 (5592 bytes, 1470 insns) */
void f_10061010(void) {
  FTRACE(0x10061010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10061010 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061015 sub esp, 0x60 */
  { uint32_t _a=(ESP),_b=(0x60u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10061018 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006101a je 0x10061078 */
  if (C.zf) goto L_10061078;
  /* 1006101c push 0x1006fee4 */
  push32((uint32_t)(0x1006fee4u));
  /* 10061021 push 0x10076078 */
  push32((uint32_t)(0x10076078u));
  /* 10061026 call eax */
  call_ind((uint32_t)(EAX), 0x10061028u);
  /* 10061028 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 1006102d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061030 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061032 je 0x10061078 */
  if (C.zf) goto L_10061078;
  /* 10061034 push 0x1006fedc */
  push32((uint32_t)(0x1006fedcu));
  /* 10061039 push 0x10076018 */
  push32((uint32_t)(0x10076018u));
  /* 1006103e call eax */
  call_ind((uint32_t)(EAX), 0x10061040u);
  /* 10061040 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061045 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061048 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006104a je 0x10061078 */
  if (C.zf) goto L_10061078;
  /* 1006104c push 0x1006fed4 */
  push32((uint32_t)(0x1006fed4u));
  /* 10061051 push 0x10076070 */
  push32((uint32_t)(0x10076070u));
  /* 10061056 call eax */
  call_ind((uint32_t)(EAX), 0x10061058u);
  /* 10061058 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 1006105d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061060 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061062 je 0x10061078 */
  if (C.zf) goto L_10061078;
  /* 10061064 push 0x1006fecc */
  push32((uint32_t)(0x1006feccu));
  /* 10061069 push 0x10076080 */
  push32((uint32_t)(0x10076080u));
  /* 1006106e call eax */
  call_ind((uint32_t)(EAX), 0x10061070u);
  /* 10061070 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061075 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10061078:;
  /* 10061078 mov ecx, dword ptr [0x100763e8] */
  ECX = (r32((uint32_t)(0x100763e8)));
  /* 1006107e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10061080 je 0x10061096 */
  if (C.zf) goto L_10061096;
  /* 10061082 push 0x1006fec0 */
  push32((uint32_t)(0x1006fec0u));
  /* 10061087 push 0x10073680 */
  push32((uint32_t)(0x10073680u));
  /* 1006108c call ecx */
  call_ind((uint32_t)(ECX), 0x1006108eu);
  /* 1006108e mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061093 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10061096:;
  /* 10061096 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061098 je 0x10061322 */
  if (C.zf) goto L_10061322;
  /* 1006109e push 0x1006feac */
  push32((uint32_t)(0x1006feacu));
  /* 100610a3 push 0x100738f0 */
  push32((uint32_t)(0x100738f0u));
  /* 100610a8 call eax */
  call_ind((uint32_t)(EAX), 0x100610aau);
  /* 100610aa mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 100610af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100610b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100610b4 je 0x10061322 */
  if (C.zf) goto L_10061322;
  /* 100610ba push 0x1006fe98 */
  push32((uint32_t)(0x1006fe98u));
  /* 100610bf push 0x100738e8 */
  push32((uint32_t)(0x100738e8u));
  /* 100610c4 call eax */
  call_ind((uint32_t)(EAX), 0x100610c6u);
  /* 100610c6 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 100610cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100610ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100610d0 je 0x10061322 */
  if (C.zf) goto L_10061322;
  /* 100610d6 push 0x1006fe84 */
  push32((uint32_t)(0x1006fe84u));
  /* 100610db push 0x100738e0 */
  push32((uint32_t)(0x100738e0u));
  /* 100610e0 call eax */
  call_ind((uint32_t)(EAX), 0x100610e2u);
  /* 100610e2 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 100610e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100610ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100610ec je 0x10061322 */
  if (C.zf) goto L_10061322;
  /* 100610f2 push 0x1006fe70 */
  push32((uint32_t)(0x1006fe70u));
  /* 100610f7 push 0x10073928 */
  push32((uint32_t)(0x10073928u));
  /* 100610fc call eax */
  call_ind((uint32_t)(EAX), 0x100610feu);
  /* 100610fe mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061103 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061106 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061108 je 0x10061322 */
  if (C.zf) goto L_10061322;
  /* 1006110e push 0x1006fe5c */
  push32((uint32_t)(0x1006fe5cu));
  /* 10061113 push 0x10073918 */
  push32((uint32_t)(0x10073918u));
  /* 10061118 call eax */
  call_ind((uint32_t)(EAX), 0x1006111au);
  /* 1006111a mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 1006111f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061122 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061124 je 0x10061322 */
  if (C.zf) goto L_10061322;
  /* 1006112a push 0x1006fe48 */
  push32((uint32_t)(0x1006fe48u));
  /* 1006112f push 0x10073910 */
  push32((uint32_t)(0x10073910u));
  /* 10061134 call eax */
  call_ind((uint32_t)(EAX), 0x10061136u);
  /* 10061136 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 1006113b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006113e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061140 je 0x10061322 */
  if (C.zf) goto L_10061322;
  /* 10061146 push 0x1006fe34 */
  push32((uint32_t)(0x1006fe34u));
  /* 1006114b push 0x100736c8 */
  push32((uint32_t)(0x100736c8u));
  /* 10061150 call eax */
  call_ind((uint32_t)(EAX), 0x10061152u);
  /* 10061152 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061157 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006115a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006115c je 0x10061322 */
  if (C.zf) goto L_10061322;
  /* 10061162 push 0x1006fe20 */
  push32((uint32_t)(0x1006fe20u));
  /* 10061167 push 0x100736b8 */
  push32((uint32_t)(0x100736b8u));
  /* 1006116c call eax */
  call_ind((uint32_t)(EAX), 0x1006116eu);
  /* 1006116e mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061173 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061176 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061178 je 0x10061322 */
  if (C.zf) goto L_10061322;
  /* 1006117e push 0x1006fe0c */
  push32((uint32_t)(0x1006fe0cu));
  /* 10061183 push 0x100738b0 */
  push32((uint32_t)(0x100738b0u));
  /* 10061188 call eax */
  call_ind((uint32_t)(EAX), 0x1006118au);
  /* 1006118a mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 1006118f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061192 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061194 je 0x10061322 */
  if (C.zf) goto L_10061322;
  /* 1006119a push 0x1006fdf8 */
  push32((uint32_t)(0x1006fdf8u));
  /* 1006119f push 0x100738a8 */
  push32((uint32_t)(0x100738a8u));
  /* 100611a4 call eax */
  call_ind((uint32_t)(EAX), 0x100611a6u);
  /* 100611a6 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 100611ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100611ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100611b0 je 0x10061322 */
  if (C.zf) goto L_10061322;
  /* 100611b6 push 0x1006fde4 */
  push32((uint32_t)(0x1006fde4u));
  /* 100611bb push 0x100738a0 */
  push32((uint32_t)(0x100738a0u));
  /* 100611c0 call eax */
  call_ind((uint32_t)(EAX), 0x100611c2u);
  /* 100611c2 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 100611c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100611ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100611cc je 0x10061322 */
  if (C.zf) goto L_10061322;
  /* 100611d2 push 0x1006fdd0 */
  push32((uint32_t)(0x1006fdd0u));
  /* 100611d7 push 0x10073898 */
  push32((uint32_t)(0x10073898u));
  /* 100611dc call eax */
  call_ind((uint32_t)(EAX), 0x100611deu);
  /* 100611de mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 100611e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100611e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100611e8 je 0x10061322 */
  if (C.zf) goto L_10061322;
  /* 100611ee push 0x1006feac */
  push32((uint32_t)(0x1006feacu));
  /* 100611f3 push 0x100738f0 */
  push32((uint32_t)(0x100738f0u));
  /* 100611f8 call eax */
  call_ind((uint32_t)(EAX), 0x100611fau);
  /* 100611fa mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 100611ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061202 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061204 je 0x10061322 */
  if (C.zf) goto L_10061322;
  /* 1006120a push 0x1006fe98 */
  push32((uint32_t)(0x1006fe98u));
  /* 1006120f push 0x100738e8 */
  push32((uint32_t)(0x100738e8u));
  /* 10061214 call eax */
  call_ind((uint32_t)(EAX), 0x10061216u);
  /* 10061216 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 1006121b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006121e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061220 je 0x10061322 */
  if (C.zf) goto L_10061322;
  /* 10061226 push 0x1006fe84 */
  push32((uint32_t)(0x1006fe84u));
  /* 1006122b push 0x100738e0 */
  push32((uint32_t)(0x100738e0u));
  /* 10061230 call eax */
  call_ind((uint32_t)(EAX), 0x10061232u);
  /* 10061232 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061237 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006123a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006123c je 0x10061322 */
  if (C.zf) goto L_10061322;
  /* 10061242 push 0x1006fe70 */
  push32((uint32_t)(0x1006fe70u));
  /* 10061247 push 0x10073928 */
  push32((uint32_t)(0x10073928u));
  /* 1006124c call eax */
  call_ind((uint32_t)(EAX), 0x1006124eu);
  /* 1006124e mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061253 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061256 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061258 je 0x10061322 */
  if (C.zf) goto L_10061322;
  /* 1006125e push 0x1006fe5c */
  push32((uint32_t)(0x1006fe5cu));
  /* 10061263 push 0x10073918 */
  push32((uint32_t)(0x10073918u));
  /* 10061268 call eax */
  call_ind((uint32_t)(EAX), 0x1006126au);
  /* 1006126a mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 1006126f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061272 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061274 je 0x10061322 */
  if (C.zf) goto L_10061322;
  /* 1006127a push 0x1006fe48 */
  push32((uint32_t)(0x1006fe48u));
  /* 1006127f push 0x10073910 */
  push32((uint32_t)(0x10073910u));
  /* 10061284 call eax */
  call_ind((uint32_t)(EAX), 0x10061286u);
  /* 10061286 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 1006128b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006128e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061290 je 0x10061322 */
  if (C.zf) goto L_10061322;
  /* 10061296 push 0x1006fe34 */
  push32((uint32_t)(0x1006fe34u));
  /* 1006129b push 0x100736c8 */
  push32((uint32_t)(0x100736c8u));
  /* 100612a0 call eax */
  call_ind((uint32_t)(EAX), 0x100612a2u);
  /* 100612a2 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 100612a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100612aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100612ac je 0x10061322 */
  if (C.zf) goto L_10061322;
  /* 100612ae push 0x1006fe20 */
  push32((uint32_t)(0x1006fe20u));
  /* 100612b3 push 0x100736b8 */
  push32((uint32_t)(0x100736b8u));
  /* 100612b8 call eax */
  call_ind((uint32_t)(EAX), 0x100612bau);
  /* 100612ba mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 100612bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100612c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100612c4 je 0x10061322 */
  if (C.zf) goto L_10061322;
  /* 100612c6 push 0x1006fe0c */
  push32((uint32_t)(0x1006fe0cu));
  /* 100612cb push 0x100738b0 */
  push32((uint32_t)(0x100738b0u));
  /* 100612d0 call eax */
  call_ind((uint32_t)(EAX), 0x100612d2u);
  /* 100612d2 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 100612d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100612da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100612dc je 0x10061322 */
  if (C.zf) goto L_10061322;
  /* 100612de push 0x1006fdf8 */
  push32((uint32_t)(0x1006fdf8u));
  /* 100612e3 push 0x100738a8 */
  push32((uint32_t)(0x100738a8u));
  /* 100612e8 call eax */
  call_ind((uint32_t)(EAX), 0x100612eau);
  /* 100612ea mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 100612ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100612f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100612f4 je 0x10061322 */
  if (C.zf) goto L_10061322;
  /* 100612f6 push 0x1006fde4 */
  push32((uint32_t)(0x1006fde4u));
  /* 100612fb push 0x100738a0 */
  push32((uint32_t)(0x100738a0u));
  /* 10061300 call eax */
  call_ind((uint32_t)(EAX), 0x10061302u);
  /* 10061302 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061307 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006130a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006130c je 0x10061322 */
  if (C.zf) goto L_10061322;
  /* 1006130e push 0x1006fdd0 */
  push32((uint32_t)(0x1006fdd0u));
  /* 10061313 push 0x10073898 */
  push32((uint32_t)(0x10073898u));
  /* 10061318 call eax */
  call_ind((uint32_t)(EAX), 0x1006131au);
  /* 1006131a mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 1006131f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10061322:;
  /* 10061322 mov ecx, dword ptr [0x100763e8] */
  ECX = (r32((uint32_t)(0x100763e8)));
  /* 10061328 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1006132a je 0x10061340 */
  if (C.zf) goto L_10061340;
  /* 1006132c push 0x1006fdc0 */
  push32((uint32_t)(0x1006fdc0u));
  /* 10061331 push 0x10073670 */
  push32((uint32_t)(0x10073670u));
  /* 10061336 call ecx */
  call_ind((uint32_t)(ECX), 0x10061338u);
  /* 10061338 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 1006133d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10061340:;
  /* 10061340 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061342 je 0x100615c7 */
  if (C.zf) goto L_100615c7;
  /* 10061348 push 0x1006fdac */
  push32((uint32_t)(0x1006fdacu));
  /* 1006134d push 0x10073648 */
  push32((uint32_t)(0x10073648u));
  /* 10061352 call eax */
  call_ind((uint32_t)(EAX), 0x10061354u);
  /* 10061354 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061359 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006135c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006135e je 0x100615c7 */
  if (C.zf) goto L_100615c7;
  /* 10061364 push 0x1006fd94 */
  push32((uint32_t)(0x1006fd94u));
  /* 10061369 push 0x10073640 */
  push32((uint32_t)(0x10073640u));
  /* 1006136e call eax */
  call_ind((uint32_t)(EAX), 0x10061370u);
  /* 10061370 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061375 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061378 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006137a je 0x100615c7 */
  if (C.zf) goto L_100615c7;
  /* 10061380 push 0x1006fd7c */
  push32((uint32_t)(0x1006fd7cu));
  /* 10061385 push 0x10073638 */
  push32((uint32_t)(0x10073638u));
  /* 1006138a call eax */
  call_ind((uint32_t)(EAX), 0x1006138cu);
  /* 1006138c mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061391 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061394 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061396 je 0x100615c7 */
  if (C.zf) goto L_100615c7;
  /* 1006139c push 0x1006fd64 */
  push32((uint32_t)(0x1006fd64u));
  /* 100613a1 push 0x10076308 */
  push32((uint32_t)(0x10076308u));
  /* 100613a6 call eax */
  call_ind((uint32_t)(EAX), 0x100613a8u);
  /* 100613a8 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 100613ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100613b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100613b2 je 0x100615c7 */
  if (C.zf) goto L_100615c7;
  /* 100613b8 push 0x1006fd4c */
  push32((uint32_t)(0x1006fd4cu));
  /* 100613bd push 0x10076300 */
  push32((uint32_t)(0x10076300u));
  /* 100613c2 call eax */
  call_ind((uint32_t)(EAX), 0x100613c4u);
  /* 100613c4 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 100613c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100613cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100613ce je 0x100615c7 */
  if (C.zf) goto L_100615c7;
  /* 100613d4 push 0x1006fd34 */
  push32((uint32_t)(0x1006fd34u));
  /* 100613d9 push 0x100762f8 */
  push32((uint32_t)(0x100762f8u));
  /* 100613de call eax */
  call_ind((uint32_t)(EAX), 0x100613e0u);
  /* 100613e0 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 100613e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100613e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100613ea je 0x100615c7 */
  if (C.zf) goto L_100615c7;
  /* 100613f0 push 0x1006fd20 */
  push32((uint32_t)(0x1006fd20u));
  /* 100613f5 push 0x10076380 */
  push32((uint32_t)(0x10076380u));
  /* 100613fa call eax */
  call_ind((uint32_t)(EAX), 0x100613fcu);
  /* 100613fc mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061401 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061404 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061406 je 0x100615c7 */
  if (C.zf) goto L_100615c7;
  /* 1006140c push 0x1006fd08 */
  push32((uint32_t)(0x1006fd08u));
  /* 10061411 push 0x10076378 */
  push32((uint32_t)(0x10076378u));
  /* 10061416 call eax */
  call_ind((uint32_t)(EAX), 0x10061418u);
  /* 10061418 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 1006141d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061420 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061422 je 0x100615c7 */
  if (C.zf) goto L_100615c7;
  /* 10061428 push 0x1006fcf0 */
  push32((uint32_t)(0x1006fcf0u));
  /* 1006142d push 0x100763c8 */
  push32((uint32_t)(0x100763c8u));
  /* 10061432 call eax */
  call_ind((uint32_t)(EAX), 0x10061434u);
  /* 10061434 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061439 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006143c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006143e je 0x100615c7 */
  if (C.zf) goto L_100615c7;
  /* 10061444 push 0x1006fcd8 */
  push32((uint32_t)(0x1006fcd8u));
  /* 10061449 push 0x100763c0 */
  push32((uint32_t)(0x100763c0u));
  /* 1006144e call eax */
  call_ind((uint32_t)(EAX), 0x10061450u);
  /* 10061450 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061455 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061458 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006145a je 0x100615c7 */
  if (C.zf) goto L_100615c7;
  /* 10061460 push 0x1006fcc0 */
  push32((uint32_t)(0x1006fcc0u));
  /* 10061465 push 0x100763b8 */
  push32((uint32_t)(0x100763b8u));
  /* 1006146a call eax */
  call_ind((uint32_t)(EAX), 0x1006146cu);
  /* 1006146c mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061471 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061474 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061476 je 0x100615c7 */
  if (C.zf) goto L_100615c7;
  /* 1006147c push 0x1006fca8 */
  push32((uint32_t)(0x1006fca8u));
  /* 10061481 push 0x100763b0 */
  push32((uint32_t)(0x100763b0u));
  /* 10061486 call eax */
  call_ind((uint32_t)(EAX), 0x10061488u);
  /* 10061488 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 1006148d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061490 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061492 je 0x100615c7 */
  if (C.zf) goto L_100615c7;
  /* 10061498 push 0x1006fdac */
  push32((uint32_t)(0x1006fdacu));
  /* 1006149d push 0x10073648 */
  push32((uint32_t)(0x10073648u));
  /* 100614a2 call eax */
  call_ind((uint32_t)(EAX), 0x100614a4u);
  /* 100614a4 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 100614a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100614ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100614ae je 0x100615c7 */
  if (C.zf) goto L_100615c7;
  /* 100614b4 push 0x1006fd94 */
  push32((uint32_t)(0x1006fd94u));
  /* 100614b9 push 0x10073640 */
  push32((uint32_t)(0x10073640u));
  /* 100614be call eax */
  call_ind((uint32_t)(EAX), 0x100614c0u);
  /* 100614c0 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 100614c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100614c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100614ca je 0x100615c7 */
  if (C.zf) goto L_100615c7;
  /* 100614d0 push 0x1006fd7c */
  push32((uint32_t)(0x1006fd7cu));
  /* 100614d5 push 0x10073638 */
  push32((uint32_t)(0x10073638u));
  /* 100614da call eax */
  call_ind((uint32_t)(EAX), 0x100614dcu);
  /* 100614dc mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 100614e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100614e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100614e6 je 0x100615c7 */
  if (C.zf) goto L_100615c7;
  /* 100614ec push 0x1006fd64 */
  push32((uint32_t)(0x1006fd64u));
  /* 100614f1 push 0x10076308 */
  push32((uint32_t)(0x10076308u));
  /* 100614f6 call eax */
  call_ind((uint32_t)(EAX), 0x100614f8u);
  /* 100614f8 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 100614fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061500 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061502 je 0x100615c7 */
  if (C.zf) goto L_100615c7;
  /* 10061508 push 0x1006fd4c */
  push32((uint32_t)(0x1006fd4cu));
  /* 1006150d push 0x10076300 */
  push32((uint32_t)(0x10076300u));
  /* 10061512 call eax */
  call_ind((uint32_t)(EAX), 0x10061514u);
  /* 10061514 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061519 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006151c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006151e je 0x100615c7 */
  if (C.zf) goto L_100615c7;
  /* 10061524 push 0x1006fd34 */
  push32((uint32_t)(0x1006fd34u));
  /* 10061529 push 0x100762f8 */
  push32((uint32_t)(0x100762f8u));
  /* 1006152e call eax */
  call_ind((uint32_t)(EAX), 0x10061530u);
  /* 10061530 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061535 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061538 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006153a je 0x100615c7 */
  if (C.zf) goto L_100615c7;
  /* 10061540 push 0x1006fd20 */
  push32((uint32_t)(0x1006fd20u));
  /* 10061545 push 0x10076380 */
  push32((uint32_t)(0x10076380u));
  /* 1006154a call eax */
  call_ind((uint32_t)(EAX), 0x1006154cu);
  /* 1006154c mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061551 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061554 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061556 je 0x100615c7 */
  if (C.zf) goto L_100615c7;
  /* 10061558 push 0x1006fd08 */
  push32((uint32_t)(0x1006fd08u));
  /* 1006155d push 0x10076378 */
  push32((uint32_t)(0x10076378u));
  /* 10061562 call eax */
  call_ind((uint32_t)(EAX), 0x10061564u);
  /* 10061564 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061569 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006156c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006156e je 0x100615c7 */
  if (C.zf) goto L_100615c7;
  /* 10061570 push 0x1006fcf0 */
  push32((uint32_t)(0x1006fcf0u));
  /* 10061575 push 0x100763c8 */
  push32((uint32_t)(0x100763c8u));
  /* 1006157a call eax */
  call_ind((uint32_t)(EAX), 0x1006157cu);
  /* 1006157c mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061581 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061584 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061586 je 0x100615c7 */
  if (C.zf) goto L_100615c7;
  /* 10061588 push 0x1006fcd8 */
  push32((uint32_t)(0x1006fcd8u));
  /* 1006158d push 0x100763c0 */
  push32((uint32_t)(0x100763c0u));
  /* 10061592 call eax */
  call_ind((uint32_t)(EAX), 0x10061594u);
  /* 10061594 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061599 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006159c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006159e je 0x100615c7 */
  if (C.zf) goto L_100615c7;
  /* 100615a0 push 0x1006fcc0 */
  push32((uint32_t)(0x1006fcc0u));
  /* 100615a5 push 0x100763b8 */
  push32((uint32_t)(0x100763b8u));
  /* 100615aa call eax */
  call_ind((uint32_t)(EAX), 0x100615acu);
  /* 100615ac mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 100615b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100615b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100615b6 je 0x100615c7 */
  if (C.zf) goto L_100615c7;
  /* 100615b8 push 0x1006fca8 */
  push32((uint32_t)(0x1006fca8u));
  /* 100615bd push 0x100763b0 */
  push32((uint32_t)(0x100763b0u));
  /* 100615c2 call eax */
  call_ind((uint32_t)(EAX), 0x100615c4u);
  /* 100615c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100615c7:;
  /* 100615c7 mov eax, dword ptr [0x100763e8] */
  EAX = (r32((uint32_t)(0x100763e8)));
  /* 100615cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100615ce je 0x100615df */
  if (C.zf) goto L_100615df;
  /* 100615d0 push 0x1006fc94 */
  push32((uint32_t)(0x1006fc94u));
  /* 100615d5 push 0x10075fd0 */
  push32((uint32_t)(0x10075fd0u));
  /* 100615da call eax */
  call_ind((uint32_t)(EAX), 0x100615dcu);
  /* 100615dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100615df:;
  /* 100615df call dword ptr [0x100764f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f0))), 0x100615e5u);
  /* 100615e5 mov dword ptr [0x100762a4], eax */
  w32((uint32_t)(0x100762a4), (EAX));
  /* 100615ea call 0x100626c0 */
  push32(0x100615efu); f_100626c0();
  /* 100615ef mov ecx, eax */
  ECX = (EAX);
  /* 100615f1 mov eax, dword ptr [0x100762a4] */
  EAX = (r32((uint32_t)(0x100762a4)));
  /* 100615f6 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 100615fc mov dword ptr [eax*4 + 0x10075f88], ecx */
  w32((uint32_t)(EAX*4 + 0x10075f88), (ECX));
  /* 10061603 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 10061606 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 10061609 lea edx, [ecx + ecx*4] */
  EDX = ((uint32_t)(ECX + ECX*4));
  /* 1006160c lea eax, [eax + edx*2] */
  EAX = ((uint32_t)(EAX + EDX*2));
  /* 1006160f shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10061612 mov dword ptr [eax + 0x10073ae0], 0 */
  w32((uint32_t)(EAX + 0x10073ae0), (0x0u));
  /* 1006161c mov dword ptr [eax + 0x10073c74], 0 */
  w32((uint32_t)(EAX + 0x10073c74), (0x0u));
  /* 10061626 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 1006162b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006162d je 0x1006163e */
  if (C.zf) goto L_1006163e;
  /* 1006162f push 0x1006fc78 */
  push32((uint32_t)(0x1006fc78u));
  /* 10061634 push 0x100760c0 */
  push32((uint32_t)(0x100760c0u));
  /* 10061639 call eax */
  call_ind((uint32_t)(EAX), 0x1006163bu);
  /* 1006163b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1006163e:;
  /* 1006163e mov eax, dword ptr [0x100763e8] */
  EAX = (r32((uint32_t)(0x100763e8)));
  /* 10061643 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061645 je 0x10061656 */
  if (C.zf) goto L_10061656;
  /* 10061647 push 0x1006fc64 */
  push32((uint32_t)(0x1006fc64u));
  /* 1006164c push 0x10073878 */
  push32((uint32_t)(0x10073878u));
  /* 10061651 call eax */
  call_ind((uint32_t)(EAX), 0x10061653u);
  /* 10061653 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10061656:;
  /* 10061656 push ebp */
  push32((uint32_t)(EBP));
  /* 10061657 push esi */
  push32((uint32_t)(ESI));
  /* 10061658 push edi */
  push32((uint32_t)(EDI));
  /* 10061659 call 0x100626c0 */
  push32(0x1006165eu); f_100626c0();
  /* 1006165e mov edx, eax */
  EDX = (EAX);
  /* 10061660 and eax, 6 */
  { uint32_t _r=(EAX)&(0x6u); EAX = (_r); fl_logic(_r,32); }
  /* 10061663 cmp al, 2 */
  { uint32_t _a=(AL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10061665 lea ebp, [esp + 0xc] */
  EBP = ((uint32_t)(ESP + 0xc));
  /* 10061669 mov edi, 0x1006fec0 */
  EDI = (0x1006fec0u);
  /* 1006166e je 0x10061675 */
  if (C.zf) goto L_10061675;
  /* 10061670 mov edi, 0x1006fc54 */
  EDI = (0x1006fc54u);
L_10061675:;
  /* 10061675 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10061678 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006167a repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1006167c not ecx */
  ECX = (~(ECX));
  /* 1006167e sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10061680 and edx, 0x18 */
  { uint32_t _r=(EDX)&(0x18u); EDX = (_r); fl_logic(_r,32); }
  /* 10061683 mov eax, ecx */
  EAX = (ECX);
  /* 10061685 mov esi, edi */
  ESI = (EDI);
  /* 10061687 mov edi, ebp */
  EDI = (EBP);
  /* 10061689 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1006168c rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1006168e mov ecx, eax */
  ECX = (EAX);
  /* 10061690 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10061693 cmp dl, 8 */
  { uint32_t _a=(DL),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10061696 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 10061698 lea edx, [esp + 0x3c] */
  EDX = ((uint32_t)(ESP + 0x3c));
  /* 1006169c mov edi, 0x1006fc44 */
  EDI = (0x1006fc44u);
  /* 100616a1 je 0x100616a8 */
  if (C.zf) goto L_100616a8;
  /* 100616a3 mov edi, 0x1006fc34 */
  EDI = (0x1006fc34u);
L_100616a8:;
  /* 100616a8 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 100616ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100616ad repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 100616af not ecx */
  ECX = (~(ECX));
  /* 100616b1 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100616b3 mov eax, ecx */
  EAX = (ECX);
  /* 100616b5 mov esi, edi */
  ESI = (EDI);
  /* 100616b7 mov edi, edx */
  EDI = (EDX);
  /* 100616b9 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100616bc rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100616be mov ecx, eax */
  ECX = (EAX);
  /* 100616c0 mov eax, dword ptr [0x100763e8] */
  EAX = (r32((uint32_t)(0x100763e8)));
  /* 100616c5 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 100616c8 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 100616ca pop edi */
  EDI = (pop32());
  /* 100616cb pop esi */
  ESI = (pop32());
  /* 100616cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100616ce pop ebp */
  EBP = (pop32());
  /* 100616cf je 0x100616e0 */
  if (C.zf) goto L_100616e0;
  /* 100616d1 push 0x1006fc20 */
  push32((uint32_t)(0x1006fc20u));
  /* 100616d6 push 0x100736f0 */
  push32((uint32_t)(0x100736f0u));
  /* 100616db call eax */
  call_ind((uint32_t)(EAX), 0x100616ddu);
  /* 100616dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100616e0:;
  /* 100616e0 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 100616e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100616e7 je 0x10061710 */
  if (C.zf) goto L_10061710;
  /* 100616e9 push 0x1006fc08 */
  push32((uint32_t)(0x1006fc08u));
  /* 100616ee push 0x10076250 */
  push32((uint32_t)(0x10076250u));
  /* 100616f3 call eax */
  call_ind((uint32_t)(EAX), 0x100616f5u);
  /* 100616f5 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 100616fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100616fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100616ff je 0x10061710 */
  if (C.zf) goto L_10061710;
  /* 10061701 push 0x1006fbf0 */
  push32((uint32_t)(0x1006fbf0u));
  /* 10061706 push 0x10075fb8 */
  push32((uint32_t)(0x10075fb8u));
  /* 1006170b call eax */
  call_ind((uint32_t)(EAX), 0x1006170du);
  /* 1006170d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10061710:;
  /* 10061710 mov eax, dword ptr [0x100763e8] */
  EAX = (r32((uint32_t)(0x100763e8)));
  /* 10061715 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061717 je 0x10061728 */
  if (C.zf) goto L_10061728;
  /* 10061719 push 0x1006fbdc */
  push32((uint32_t)(0x1006fbdcu));
  /* 1006171e push 0x10073630 */
  push32((uint32_t)(0x10073630u));
  /* 10061723 call eax */
  call_ind((uint32_t)(EAX), 0x10061725u);
  /* 10061725 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10061728:;
  /* 10061728 push 0x1006fbc8 */
  push32((uint32_t)(0x1006fbc8u));
  /* 1006172d call 0x10062690 */
  push32(0x10061732u); f_10062690();
  /* 10061732 mov eax, dword ptr [0x100763e8] */
  EAX = (r32((uint32_t)(0x100763e8)));
  /* 10061737 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006173a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006173c je 0x10061765 */
  if (C.zf) goto L_10061765;
  /* 1006173e push 0x1006fbc8 */
  push32((uint32_t)(0x1006fbc8u));
  /* 10061743 push 0x10073678 */
  push32((uint32_t)(0x10073678u));
  /* 10061748 call eax */
  call_ind((uint32_t)(EAX), 0x1006174au);
  /* 1006174a mov eax, dword ptr [0x100763e8] */
  EAX = (r32((uint32_t)(0x100763e8)));
  /* 1006174f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061752 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061754 je 0x10061765 */
  if (C.zf) goto L_10061765;
  /* 10061756 push 0x1006fbb4 */
  push32((uint32_t)(0x1006fbb4u));
  /* 1006175b push 0x10076180 */
  push32((uint32_t)(0x10076180u));
  /* 10061760 call eax */
  call_ind((uint32_t)(EAX), 0x10061762u);
  /* 10061762 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10061765:;
  /* 10061765 push 0x1006fbb4 */
  push32((uint32_t)(0x1006fbb4u));
  /* 1006176a call dword ptr [0x10076550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076550))), 0x10061770u);
  /* 10061770 mov eax, dword ptr [0x100763e8] */
  EAX = (r32((uint32_t)(0x100763e8)));
  /* 10061775 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061778 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006177a je 0x10061aa7 */
  if (C.zf) goto L_10061aa7;
  /* 10061780 push 0x1006fba0 */
  push32((uint32_t)(0x1006fba0u));
  /* 10061785 push 0x10076150 */
  push32((uint32_t)(0x10076150u));
  /* 1006178a call eax */
  call_ind((uint32_t)(EAX), 0x1006178cu);
  /* 1006178c mov eax, dword ptr [0x100763e8] */
  EAX = (r32((uint32_t)(0x100763e8)));
  /* 10061791 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061794 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061796 je 0x10061aa7 */
  if (C.zf) goto L_10061aa7;
  /* 1006179c push 0x1006fb8c */
  push32((uint32_t)(0x1006fb8cu));
  /* 100617a1 push 0x100760d0 */
  push32((uint32_t)(0x100760d0u));
  /* 100617a6 call eax */
  call_ind((uint32_t)(EAX), 0x100617a8u);
  /* 100617a8 mov eax, dword ptr [0x100763e8] */
  EAX = (r32((uint32_t)(0x100763e8)));
  /* 100617ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100617b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100617b2 je 0x10061aa7 */
  if (C.zf) goto L_10061aa7;
  /* 100617b8 lea ecx, [esp] */
  ECX = ((uint32_t)(ESP));
  /* 100617bc push ecx */
  push32((uint32_t)(ECX));
  /* 100617bd push 0x100763a0 */
  push32((uint32_t)(0x100763a0u));
  /* 100617c2 call eax */
  call_ind((uint32_t)(EAX), 0x100617c4u);
  /* 100617c4 mov eax, dword ptr [0x100763e8] */
  EAX = (r32((uint32_t)(0x100763e8)));
  /* 100617c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100617cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100617ce je 0x10061aa7 */
  if (C.zf) goto L_10061aa7;
  /* 100617d4 push 0x1006fb80 */
  push32((uint32_t)(0x1006fb80u));
  /* 100617d9 push 0x10076320 */
  push32((uint32_t)(0x10076320u));
  /* 100617de call eax */
  call_ind((uint32_t)(EAX), 0x100617e0u);
  /* 100617e0 mov eax, dword ptr [0x100763e8] */
  EAX = (r32((uint32_t)(0x100763e8)));
  /* 100617e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100617e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100617ea je 0x10061aa7 */
  if (C.zf) goto L_10061aa7;
  /* 100617f0 lea edx, [esp + 0x30] */
  EDX = ((uint32_t)(ESP + 0x30));
  /* 100617f4 push edx */
  push32((uint32_t)(EDX));
  /* 100617f5 push 0x10075f70 */
  push32((uint32_t)(0x10075f70u));
  /* 100617fa call eax */
  call_ind((uint32_t)(EAX), 0x100617fcu);
  /* 100617fc mov eax, dword ptr [0x100763e8] */
  EAX = (r32((uint32_t)(0x100763e8)));
  /* 10061801 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061804 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061806 je 0x10061aa7 */
  if (C.zf) goto L_10061aa7;
  /* 1006180c push 0x1006fb74 */
  push32((uint32_t)(0x1006fb74u));
  /* 10061811 push 0x10076360 */
  push32((uint32_t)(0x10076360u));
  /* 10061816 call eax */
  call_ind((uint32_t)(EAX), 0x10061818u);
  /* 10061818 mov eax, dword ptr [0x100763e8] */
  EAX = (r32((uint32_t)(0x100763e8)));
  /* 1006181d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061820 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061822 je 0x10061aa7 */
  if (C.zf) goto L_10061aa7;
  /* 10061828 push 0x1006fb68 */
  push32((uint32_t)(0x1006fb68u));
  /* 1006182d push 0x10073658 */
  push32((uint32_t)(0x10073658u));
  /* 10061832 call eax */
  call_ind((uint32_t)(EAX), 0x10061834u);
  /* 10061834 mov eax, dword ptr [0x100763e8] */
  EAX = (r32((uint32_t)(0x100763e8)));
  /* 10061839 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006183c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006183e je 0x10061aa7 */
  if (C.zf) goto L_10061aa7;
  /* 10061844 push 0x1006fb58 */
  push32((uint32_t)(0x1006fb58u));
  /* 10061849 push 0x100738b8 */
  push32((uint32_t)(0x100738b8u));
  /* 1006184e call eax */
  call_ind((uint32_t)(EAX), 0x10061850u);
  /* 10061850 mov eax, dword ptr [0x100763e8] */
  EAX = (r32((uint32_t)(0x100763e8)));
  /* 10061855 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061858 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006185a je 0x10061aa7 */
  if (C.zf) goto L_10061aa7;
  /* 10061860 push 0x1006fb4c */
  push32((uint32_t)(0x1006fb4cu));
  /* 10061865 push 0x100761e0 */
  push32((uint32_t)(0x100761e0u));
  /* 1006186a call eax */
  call_ind((uint32_t)(EAX), 0x1006186cu);
  /* 1006186c mov eax, dword ptr [0x100763e8] */
  EAX = (r32((uint32_t)(0x100763e8)));
  /* 10061871 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061874 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061876 je 0x10061aa7 */
  if (C.zf) goto L_10061aa7;
  /* 1006187c push 0x1006fb34 */
  push32((uint32_t)(0x1006fb34u));
  /* 10061881 push 0x10076318 */
  push32((uint32_t)(0x10076318u));
  /* 10061886 call eax */
  call_ind((uint32_t)(EAX), 0x10061888u);
  /* 10061888 mov eax, dword ptr [0x100763e8] */
  EAX = (r32((uint32_t)(0x100763e8)));
  /* 1006188d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061890 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061892 je 0x10061aa7 */
  if (C.zf) goto L_10061aa7;
  /* 10061898 push 0x1006fb1c */
  push32((uint32_t)(0x1006fb1cu));
  /* 1006189d push 0x10076268 */
  push32((uint32_t)(0x10076268u));
  /* 100618a2 call eax */
  call_ind((uint32_t)(EAX), 0x100618a4u);
  /* 100618a4 mov eax, dword ptr [0x100763e8] */
  EAX = (r32((uint32_t)(0x100763e8)));
  /* 100618a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100618ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100618ae je 0x10061aa7 */
  if (C.zf) goto L_10061aa7;
  /* 100618b4 push 0x1006fb08 */
  push32((uint32_t)(0x1006fb08u));
  /* 100618b9 push 0x10075fa8 */
  push32((uint32_t)(0x10075fa8u));
  /* 100618be call eax */
  call_ind((uint32_t)(EAX), 0x100618c0u);
  /* 100618c0 mov eax, dword ptr [0x100763e8] */
  EAX = (r32((uint32_t)(0x100763e8)));
  /* 100618c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100618c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100618ca je 0x10061aa7 */
  if (C.zf) goto L_10061aa7;
  /* 100618d0 push 0x1006fafc */
  push32((uint32_t)(0x1006fafcu));
  /* 100618d5 push 0x10075fc8 */
  push32((uint32_t)(0x10075fc8u));
  /* 100618da call eax */
  call_ind((uint32_t)(EAX), 0x100618dcu);
  /* 100618dc mov eax, dword ptr [0x100763e8] */
  EAX = (r32((uint32_t)(0x100763e8)));
  /* 100618e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100618e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100618e6 je 0x10061aa7 */
  if (C.zf) goto L_10061aa7;
  /* 100618ec push 0x1006fae8 */
  push32((uint32_t)(0x1006fae8u));
  /* 100618f1 push 0x10076240 */
  push32((uint32_t)(0x10076240u));
  /* 100618f6 call eax */
  call_ind((uint32_t)(EAX), 0x100618f8u);
  /* 100618f8 mov eax, dword ptr [0x100763e8] */
  EAX = (r32((uint32_t)(0x100763e8)));
  /* 100618fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061900 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061902 je 0x10061aa7 */
  if (C.zf) goto L_10061aa7;
  /* 10061908 push 0x1006fad8 */
  push32((uint32_t)(0x1006fad8u));
  /* 1006190d push 0x10076248 */
  push32((uint32_t)(0x10076248u));
  /* 10061912 call eax */
  call_ind((uint32_t)(EAX), 0x10061914u);
  /* 10061914 mov eax, dword ptr [0x100763e8] */
  EAX = (r32((uint32_t)(0x100763e8)));
  /* 10061919 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006191c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006191e je 0x10061aa7 */
  if (C.zf) goto L_10061aa7;
  /* 10061924 push 0x1006facc */
  push32((uint32_t)(0x1006faccu));
  /* 10061929 push 0x10075fc0 */
  push32((uint32_t)(0x10075fc0u));
  /* 1006192e call eax */
  call_ind((uint32_t)(EAX), 0x10061930u);
  /* 10061930 mov eax, dword ptr [0x100763e8] */
  EAX = (r32((uint32_t)(0x100763e8)));
  /* 10061935 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061938 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006193a je 0x10061aa7 */
  if (C.zf) goto L_10061aa7;
  /* 10061940 push 0x1006fabc */
  push32((uint32_t)(0x1006fabcu));
  /* 10061945 push 0x10075f10 */
  push32((uint32_t)(0x10075f10u));
  /* 1006194a call eax */
  call_ind((uint32_t)(EAX), 0x1006194cu);
  /* 1006194c mov eax, dword ptr [0x100763e8] */
  EAX = (r32((uint32_t)(0x100763e8)));
  /* 10061951 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061954 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061956 je 0x10061aa7 */
  if (C.zf) goto L_10061aa7;
  /* 1006195c push 0x1006faa8 */
  push32((uint32_t)(0x1006faa8u));
  /* 10061961 push 0x100760c8 */
  push32((uint32_t)(0x100760c8u));
  /* 10061966 call eax */
  call_ind((uint32_t)(EAX), 0x10061968u);
  /* 10061968 mov eax, dword ptr [0x100763e8] */
  EAX = (r32((uint32_t)(0x100763e8)));
  /* 1006196d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061970 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061972 je 0x10061aa7 */
  if (C.zf) goto L_10061aa7;
  /* 10061978 push 0x1006fa94 */
  push32((uint32_t)(0x1006fa94u));
  /* 1006197d push 0x10075fd8 */
  push32((uint32_t)(0x10075fd8u));
  /* 10061982 call eax */
  call_ind((uint32_t)(EAX), 0x10061984u);
  /* 10061984 mov eax, dword ptr [0x100763e8] */
  EAX = (r32((uint32_t)(0x100763e8)));
  /* 10061989 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006198c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006198e je 0x10061aa7 */
  if (C.zf) goto L_10061aa7;
  /* 10061994 push 0x1006fa7c */
  push32((uint32_t)(0x1006fa7cu));
  /* 10061999 push 0x10073608 */
  push32((uint32_t)(0x10073608u));
  /* 1006199e call eax */
  call_ind((uint32_t)(EAX), 0x100619a0u);
  /* 100619a0 mov eax, dword ptr [0x100763e8] */
  EAX = (r32((uint32_t)(0x100763e8)));
  /* 100619a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100619a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100619aa je 0x10061aa7 */
  if (C.zf) goto L_10061aa7;
  /* 100619b0 push 0x1006fa70 */
  push32((uint32_t)(0x1006fa70u));
  /* 100619b5 push 0x10073868 */
  push32((uint32_t)(0x10073868u));
  /* 100619ba call eax */
  call_ind((uint32_t)(EAX), 0x100619bcu);
  /* 100619bc mov eax, dword ptr [0x100763e8] */
  EAX = (r32((uint32_t)(0x100763e8)));
  /* 100619c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100619c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100619c6 je 0x10061aa7 */
  if (C.zf) goto L_10061aa7;
  /* 100619cc push 0x1006fa64 */
  push32((uint32_t)(0x1006fa64u));
  /* 100619d1 push 0x100738c8 */
  push32((uint32_t)(0x100738c8u));
  /* 100619d6 call eax */
  call_ind((uint32_t)(EAX), 0x100619d8u);
  /* 100619d8 mov eax, dword ptr [0x100763e8] */
  EAX = (r32((uint32_t)(0x100763e8)));
  /* 100619dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100619e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100619e2 je 0x10061aa7 */
  if (C.zf) goto L_10061aa7;
  /* 100619e8 push 0x1006fa54 */
  push32((uint32_t)(0x1006fa54u));
  /* 100619ed push 0x100761d8 */
  push32((uint32_t)(0x100761d8u));
  /* 100619f2 call eax */
  call_ind((uint32_t)(EAX), 0x100619f4u);
  /* 100619f4 mov eax, dword ptr [0x100763e8] */
  EAX = (r32((uint32_t)(0x100763e8)));
  /* 100619f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100619fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100619fe je 0x10061aa7 */
  if (C.zf) goto L_10061aa7;
  /* 10061a04 push 0x1006fa44 */
  push32((uint32_t)(0x1006fa44u));
  /* 10061a09 push 0x100760e8 */
  push32((uint32_t)(0x100760e8u));
  /* 10061a0e call eax */
  call_ind((uint32_t)(EAX), 0x10061a10u);
  /* 10061a10 mov eax, dword ptr [0x100763e8] */
  EAX = (r32((uint32_t)(0x100763e8)));
  /* 10061a15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061a18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061a1a je 0x10061aa7 */
  if (C.zf) goto L_10061aa7;
  /* 10061a20 push 0x1006fa38 */
  push32((uint32_t)(0x1006fa38u));
  /* 10061a25 push 0x100762c8 */
  push32((uint32_t)(0x100762c8u));
  /* 10061a2a call eax */
  call_ind((uint32_t)(EAX), 0x10061a2cu);
  /* 10061a2c mov eax, dword ptr [0x100763e8] */
  EAX = (r32((uint32_t)(0x100763e8)));
  /* 10061a31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061a34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061a36 je 0x10061aa7 */
  if (C.zf) goto L_10061aa7;
  /* 10061a38 push 0x1006fa2c */
  push32((uint32_t)(0x1006fa2cu));
  /* 10061a3d push 0x100738d8 */
  push32((uint32_t)(0x100738d8u));
  /* 10061a42 call eax */
  call_ind((uint32_t)(EAX), 0x10061a44u);
  /* 10061a44 mov eax, dword ptr [0x100763e8] */
  EAX = (r32((uint32_t)(0x100763e8)));
  /* 10061a49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061a4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061a4e je 0x10061aa7 */
  if (C.zf) goto L_10061aa7;
  /* 10061a50 push 0x1006fa20 */
  push32((uint32_t)(0x1006fa20u));
  /* 10061a55 push 0x10075f80 */
  push32((uint32_t)(0x10075f80u));
  /* 10061a5a call eax */
  call_ind((uint32_t)(EAX), 0x10061a5cu);
  /* 10061a5c mov eax, dword ptr [0x100763e8] */
  EAX = (r32((uint32_t)(0x100763e8)));
  /* 10061a61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061a64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061a66 je 0x10061aa7 */
  if (C.zf) goto L_10061aa7;
  /* 10061a68 push 0x1006fa14 */
  push32((uint32_t)(0x1006fa14u));
  /* 10061a6d push 0x10076388 */
  push32((uint32_t)(0x10076388u));
  /* 10061a72 call eax */
  call_ind((uint32_t)(EAX), 0x10061a74u);
  /* 10061a74 mov eax, dword ptr [0x100763e8] */
  EAX = (r32((uint32_t)(0x100763e8)));
  /* 10061a79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061a7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061a7e je 0x10061aa7 */
  if (C.zf) goto L_10061aa7;
  /* 10061a80 push 0x1006fa08 */
  push32((uint32_t)(0x1006fa08u));
  /* 10061a85 push 0x10075f78 */
  push32((uint32_t)(0x10075f78u));
  /* 10061a8a call eax */
  call_ind((uint32_t)(EAX), 0x10061a8cu);
  /* 10061a8c mov eax, dword ptr [0x100763e8] */
  EAX = (r32((uint32_t)(0x100763e8)));
  /* 10061a91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061a94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061a96 je 0x10061aa7 */
  if (C.zf) goto L_10061aa7;
  /* 10061a98 push 0x1006f9f8 */
  push32((uint32_t)(0x1006f9f8u));
  /* 10061a9d push 0x10073890 */
  push32((uint32_t)(0x10073890u));
  /* 10061aa2 call eax */
  call_ind((uint32_t)(EAX), 0x10061aa4u);
  /* 10061aa4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10061aa7:;
  /* 10061aa7 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061aac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061aae je 0x10061ca7 */
  if (C.zf) goto L_10061ca7;
  /* 10061ab4 push 0x1006f9e4 */
  push32((uint32_t)(0x1006f9e4u));
  /* 10061ab9 push 0x10076368 */
  push32((uint32_t)(0x10076368u));
  /* 10061abe call eax */
  call_ind((uint32_t)(EAX), 0x10061ac0u);
  /* 10061ac0 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061ac5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061ac8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061aca je 0x10061ca7 */
  if (C.zf) goto L_10061ca7;
  /* 10061ad0 push 0x1006f9d0 */
  push32((uint32_t)(0x1006f9d0u));
  /* 10061ad5 push 0x100760f0 */
  push32((uint32_t)(0x100760f0u));
  /* 10061ada call eax */
  call_ind((uint32_t)(EAX), 0x10061adcu);
  /* 10061adc mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061ae1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061ae4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061ae6 je 0x10061ca7 */
  if (C.zf) goto L_10061ca7;
  /* 10061aec push 0x1006f9c8 */
  push32((uint32_t)(0x1006f9c8u));
  /* 10061af1 push 0x10073650 */
  push32((uint32_t)(0x10073650u));
  /* 10061af6 call eax */
  call_ind((uint32_t)(EAX), 0x10061af8u);
  /* 10061af8 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061afd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061b00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061b02 je 0x10061ca7 */
  if (C.zf) goto L_10061ca7;
  /* 10061b08 push 0x1006f9b0 */
  push32((uint32_t)(0x1006f9b0u));
  /* 10061b0d push 0x10076340 */
  push32((uint32_t)(0x10076340u));
  /* 10061b12 call eax */
  call_ind((uint32_t)(EAX), 0x10061b14u);
  /* 10061b14 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061b19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061b1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061b1e je 0x10061ca7 */
  if (C.zf) goto L_10061ca7;
  /* 10061b24 push 0x1006f998 */
  push32((uint32_t)(0x1006f998u));
  /* 10061b29 push 0x10076348 */
  push32((uint32_t)(0x10076348u));
  /* 10061b2e call eax */
  call_ind((uint32_t)(EAX), 0x10061b30u);
  /* 10061b30 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061b35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061b38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061b3a je 0x10061ca7 */
  if (C.zf) goto L_10061ca7;
  /* 10061b40 push 0x1006f980 */
  push32((uint32_t)(0x1006f980u));
  /* 10061b45 push 0x10076330 */
  push32((uint32_t)(0x10076330u));
  /* 10061b4a call eax */
  call_ind((uint32_t)(EAX), 0x10061b4cu);
  /* 10061b4c mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061b51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061b54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061b56 je 0x10061ca7 */
  if (C.zf) goto L_10061ca7;
  /* 10061b5c push 0x1006f968 */
  push32((uint32_t)(0x1006f968u));
  /* 10061b61 push 0x10076338 */
  push32((uint32_t)(0x10076338u));
  /* 10061b66 call eax */
  call_ind((uint32_t)(EAX), 0x10061b68u);
  /* 10061b68 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061b6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061b70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061b72 je 0x10061ca7 */
  if (C.zf) goto L_10061ca7;
  /* 10061b78 push 0x1006f950 */
  push32((uint32_t)(0x1006f950u));
  /* 10061b7d push 0x10076350 */
  push32((uint32_t)(0x10076350u));
  /* 10061b82 call eax */
  call_ind((uint32_t)(EAX), 0x10061b84u);
  /* 10061b84 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061b89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061b8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061b8e je 0x10061ca7 */
  if (C.zf) goto L_10061ca7;
  /* 10061b94 push 0x1006f938 */
  push32((uint32_t)(0x1006f938u));
  /* 10061b99 push 0x10076288 */
  push32((uint32_t)(0x10076288u));
  /* 10061b9e call eax */
  call_ind((uint32_t)(EAX), 0x10061ba0u);
  /* 10061ba0 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061ba5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061ba8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061baa je 0x10061ca7 */
  if (C.zf) goto L_10061ca7;
  /* 10061bb0 push 0x1006f920 */
  push32((uint32_t)(0x1006f920u));
  /* 10061bb5 push 0x10076270 */
  push32((uint32_t)(0x10076270u));
  /* 10061bba call eax */
  call_ind((uint32_t)(EAX), 0x10061bbcu);
  /* 10061bbc mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061bc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061bc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061bc6 je 0x10061ca7 */
  if (C.zf) goto L_10061ca7;
  /* 10061bcc push 0x1006f908 */
  push32((uint32_t)(0x1006f908u));
  /* 10061bd1 push 0x10076278 */
  push32((uint32_t)(0x10076278u));
  /* 10061bd6 call eax */
  call_ind((uint32_t)(EAX), 0x10061bd8u);
  /* 10061bd8 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061bdd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061be0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061be2 je 0x10061ca7 */
  if (C.zf) goto L_10061ca7;
  /* 10061be8 push 0x1006f8f0 */
  push32((uint32_t)(0x1006f8f0u));
  /* 10061bed push 0x10076290 */
  push32((uint32_t)(0x10076290u));
  /* 10061bf2 call eax */
  call_ind((uint32_t)(EAX), 0x10061bf4u);
  /* 10061bf4 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061bf9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061bfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061bfe je 0x10061ca7 */
  if (C.zf) goto L_10061ca7;
  /* 10061c04 push 0x1006f8d8 */
  push32((uint32_t)(0x1006f8d8u));
  /* 10061c09 push 0x10076298 */
  push32((uint32_t)(0x10076298u));
  /* 10061c0e call eax */
  call_ind((uint32_t)(EAX), 0x10061c10u);
  /* 10061c10 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061c15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061c18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061c1a je 0x10061ca7 */
  if (C.zf) goto L_10061ca7;
  /* 10061c20 push 0x1006f8c0 */
  push32((uint32_t)(0x1006f8c0u));
  /* 10061c25 push 0x10073900 */
  push32((uint32_t)(0x10073900u));
  /* 10061c2a call eax */
  call_ind((uint32_t)(EAX), 0x10061c2cu);
  /* 10061c2c mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061c31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061c34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061c36 je 0x10061ca7 */
  if (C.zf) goto L_10061ca7;
  /* 10061c38 push 0x1006f8a8 */
  push32((uint32_t)(0x1006f8a8u));
  /* 10061c3d push 0x10073908 */
  push32((uint32_t)(0x10073908u));
  /* 10061c42 call eax */
  call_ind((uint32_t)(EAX), 0x10061c44u);
  /* 10061c44 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061c49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061c4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061c4e je 0x10061ca7 */
  if (C.zf) goto L_10061ca7;
  /* 10061c50 push 0x1006f890 */
  push32((uint32_t)(0x1006f890u));
  /* 10061c55 push 0x100738f8 */
  push32((uint32_t)(0x100738f8u));
  /* 10061c5a call eax */
  call_ind((uint32_t)(EAX), 0x10061c5cu);
  /* 10061c5c mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061c61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061c64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061c66 je 0x10061ca7 */
  if (C.zf) goto L_10061ca7;
  /* 10061c68 push 0x1006f878 */
  push32((uint32_t)(0x1006f878u));
  /* 10061c6d push 0x10075f68 */
  push32((uint32_t)(0x10075f68u));
  /* 10061c72 call eax */
  call_ind((uint32_t)(EAX), 0x10061c74u);
  /* 10061c74 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061c79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061c7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061c7e je 0x10061ca7 */
  if (C.zf) goto L_10061ca7;
  /* 10061c80 push 0x1006f860 */
  push32((uint32_t)(0x1006f860u));
  /* 10061c85 push 0x10075f58 */
  push32((uint32_t)(0x10075f58u));
  /* 10061c8a call eax */
  call_ind((uint32_t)(EAX), 0x10061c8cu);
  /* 10061c8c mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061c91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061c94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061c96 je 0x10061ca7 */
  if (C.zf) goto L_10061ca7;
  /* 10061c98 push 0x1006f848 */
  push32((uint32_t)(0x1006f848u));
  /* 10061c9d push 0x10075f60 */
  push32((uint32_t)(0x10075f60u));
  /* 10061ca2 call eax */
  call_ind((uint32_t)(EAX), 0x10061ca4u);
  /* 10061ca4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10061ca7:;
  /* 10061ca7 lea eax, [esp] */
  EAX = ((uint32_t)(ESP));
  /* 10061cab push 0x1006f840 */
  push32((uint32_t)(0x1006f840u));
  /* 10061cb0 push eax */
  push32((uint32_t)(EAX));
  /* 10061cb1 call 0x10062f30 */
  push32(0x10061cb6u); f_10062f30();
  /* 10061cb6 push eax */
  push32((uint32_t)(EAX));
  /* 10061cb7 push 0x10076008 */
  push32((uint32_t)(0x10076008u));
  /* 10061cbc call 0x100626a0 */
  push32(0x10061cc1u); f_100626a0();
  /* 10061cc1 lea ecx, [esp + 0x10] */
  ECX = ((uint32_t)(ESP + 0x10));
  /* 10061cc5 push 0x1006f838 */
  push32((uint32_t)(0x1006f838u));
  /* 10061cca push ecx */
  push32((uint32_t)(ECX));
  /* 10061ccb call 0x10062f30 */
  push32(0x10061cd0u); f_10062f30();
  /* 10061cd0 push eax */
  push32((uint32_t)(EAX));
  /* 10061cd1 push 0x10076000 */
  push32((uint32_t)(0x10076000u));
  /* 10061cd6 call 0x100626a0 */
  push32(0x10061cdbu); f_100626a0();
  /* 10061cdb lea edx, [esp + 0x20] */
  EDX = ((uint32_t)(ESP + 0x20));
  /* 10061cdf push 0x1006f830 */
  push32((uint32_t)(0x1006f830u));
  /* 10061ce4 push edx */
  push32((uint32_t)(EDX));
  /* 10061ce5 call 0x10062f30 */
  push32(0x10061ceau); f_10062f30();
  /* 10061cea push eax */
  push32((uint32_t)(EAX));
  /* 10061ceb push 0x10075ff8 */
  push32((uint32_t)(0x10075ff8u));
  /* 10061cf0 call 0x100626a0 */
  push32(0x10061cf5u); f_100626a0();
  /* 10061cf5 lea eax, [esp + 0x30] */
  EAX = ((uint32_t)(ESP + 0x30));
  /* 10061cf9 push 0x1006f828 */
  push32((uint32_t)(0x1006f828u));
  /* 10061cfe push eax */
  push32((uint32_t)(EAX));
  /* 10061cff call 0x10062f30 */
  push32(0x10061d04u); f_10062f30();
  /* 10061d04 push eax */
  push32((uint32_t)(EAX));
  /* 10061d05 push 0x10075ff0 */
  push32((uint32_t)(0x10075ff0u));
  /* 10061d0a call 0x100626a0 */
  push32(0x10061d0fu); f_100626a0();
  /* 10061d0f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061d12 lea ecx, [esp] */
  ECX = ((uint32_t)(ESP));
  /* 10061d16 push 0x1006f820 */
  push32((uint32_t)(0x1006f820u));
  /* 10061d1b push ecx */
  push32((uint32_t)(ECX));
  /* 10061d1c call 0x10062f30 */
  push32(0x10061d21u); f_10062f30();
  /* 10061d21 push eax */
  push32((uint32_t)(EAX));
  /* 10061d22 push 0x10075fe8 */
  push32((uint32_t)(0x10075fe8u));
  /* 10061d27 call 0x100626a0 */
  push32(0x10061d2cu); f_100626a0();
  /* 10061d2c lea edx, [esp + 0x10] */
  EDX = ((uint32_t)(ESP + 0x10));
  /* 10061d30 push 0x1006f818 */
  push32((uint32_t)(0x1006f818u));
  /* 10061d35 push edx */
  push32((uint32_t)(EDX));
  /* 10061d36 call 0x10062f30 */
  push32(0x10061d3bu); f_10062f30();
  /* 10061d3b push eax */
  push32((uint32_t)(EAX));
  /* 10061d3c push 0x10075fe0 */
  push32((uint32_t)(0x10075fe0u));
  /* 10061d41 call 0x100626a0 */
  push32(0x10061d46u); f_100626a0();
  /* 10061d46 lea eax, [esp + 0x20] */
  EAX = ((uint32_t)(ESP + 0x20));
  /* 10061d4a push 0x1006f810 */
  push32((uint32_t)(0x1006f810u));
  /* 10061d4f push eax */
  push32((uint32_t)(EAX));
  /* 10061d50 call 0x10062f30 */
  push32(0x10061d55u); f_10062f30();
  /* 10061d55 push eax */
  push32((uint32_t)(EAX));
  /* 10061d56 push 0x10076120 */
  push32((uint32_t)(0x10076120u));
  /* 10061d5b call 0x100626a0 */
  push32(0x10061d60u); f_100626a0();
  /* 10061d60 lea ecx, [esp + 0x30] */
  ECX = ((uint32_t)(ESP + 0x30));
  /* 10061d64 push 0x1006f808 */
  push32((uint32_t)(0x1006f808u));
  /* 10061d69 push ecx */
  push32((uint32_t)(ECX));
  /* 10061d6a call 0x10062f30 */
  push32(0x10061d6fu); f_10062f30();
  /* 10061d6f push eax */
  push32((uint32_t)(EAX));
  /* 10061d70 push 0x10076118 */
  push32((uint32_t)(0x10076118u));
  /* 10061d75 call 0x100626a0 */
  push32(0x10061d7au); f_100626a0();
  /* 10061d7a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061d7d lea edx, [esp] */
  EDX = ((uint32_t)(ESP));
  /* 10061d81 push 0x1006f800 */
  push32((uint32_t)(0x1006f800u));
  /* 10061d86 push edx */
  push32((uint32_t)(EDX));
  /* 10061d87 call 0x10062f30 */
  push32(0x10061d8cu); f_10062f30();
  /* 10061d8c push eax */
  push32((uint32_t)(EAX));
  /* 10061d8d push 0x10076110 */
  push32((uint32_t)(0x10076110u));
  /* 10061d92 call 0x100626a0 */
  push32(0x10061d97u); f_100626a0();
  /* 10061d97 lea eax, [esp + 0x10] */
  EAX = ((uint32_t)(ESP + 0x10));
  /* 10061d9b push 0x1006f7f8 */
  push32((uint32_t)(0x1006f7f8u));
  /* 10061da0 push eax */
  push32((uint32_t)(EAX));
  /* 10061da1 call 0x10062f30 */
  push32(0x10061da6u); f_10062f30();
  /* 10061da6 push eax */
  push32((uint32_t)(EAX));
  /* 10061da7 push 0x10076108 */
  push32((uint32_t)(0x10076108u));
  /* 10061dac call 0x100626a0 */
  push32(0x10061db1u); f_100626a0();
  /* 10061db1 lea ecx, [esp + 0x20] */
  ECX = ((uint32_t)(ESP + 0x20));
  /* 10061db5 push 0x1006f7f0 */
  push32((uint32_t)(0x1006f7f0u));
  /* 10061dba push ecx */
  push32((uint32_t)(ECX));
  /* 10061dbb call 0x10062f30 */
  push32(0x10061dc0u); f_10062f30();
  /* 10061dc0 push eax */
  push32((uint32_t)(EAX));
  /* 10061dc1 push 0x100760f8 */
  push32((uint32_t)(0x100760f8u));
  /* 10061dc6 call 0x100626a0 */
  push32(0x10061dcbu); f_100626a0();
  /* 10061dcb push 0x1006f7e8 */
  push32((uint32_t)(0x1006f7e8u));
  /* 10061dd0 lea edx, [esp + 0x34] */
  EDX = ((uint32_t)(ESP + 0x34));
  /* 10061dd4 push edx */
  push32((uint32_t)(EDX));
  /* 10061dd5 call 0x10062f30 */
  push32(0x10061ddau); f_10062f30();
  /* 10061dda push eax */
  push32((uint32_t)(EAX));
  /* 10061ddb push 0x10076148 */
  push32((uint32_t)(0x10076148u));
  /* 10061de0 call 0x100626a0 */
  push32(0x10061de5u); f_100626a0();
  /* 10061de5 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061dea add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061ded test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061def je 0x10061f24 */
  if (C.zf) goto L_10061f24;
  /* 10061df5 push 0x1006f7d4 */
  push32((uint32_t)(0x1006f7d4u));
  /* 10061dfa push 0x100736a8 */
  push32((uint32_t)(0x100736a8u));
  /* 10061dff call eax */
  call_ind((uint32_t)(EAX), 0x10061e01u);
  /* 10061e01 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061e06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061e09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061e0b je 0x10061f24 */
  if (C.zf) goto L_10061f24;
  /* 10061e11 push 0x1006f7c0 */
  push32((uint32_t)(0x1006f7c0u));
  /* 10061e16 push 0x100736a0 */
  push32((uint32_t)(0x100736a0u));
  /* 10061e1b call eax */
  call_ind((uint32_t)(EAX), 0x10061e1du);
  /* 10061e1d mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061e22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061e25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061e27 je 0x10061f24 */
  if (C.zf) goto L_10061f24;
  /* 10061e2d push 0x1006f7ac */
  push32((uint32_t)(0x1006f7acu));
  /* 10061e32 push 0x10073698 */
  push32((uint32_t)(0x10073698u));
  /* 10061e37 call eax */
  call_ind((uint32_t)(EAX), 0x10061e39u);
  /* 10061e39 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061e3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061e41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061e43 je 0x10061f24 */
  if (C.zf) goto L_10061f24;
  /* 10061e49 push 0x1006f798 */
  push32((uint32_t)(0x1006f798u));
  /* 10061e4e push 0x10073690 */
  push32((uint32_t)(0x10073690u));
  /* 10061e53 call eax */
  call_ind((uint32_t)(EAX), 0x10061e55u);
  /* 10061e55 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061e5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061e5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061e5f je 0x10061f24 */
  if (C.zf) goto L_10061f24;
  /* 10061e65 push 0x1006f784 */
  push32((uint32_t)(0x1006f784u));
  /* 10061e6a push 0x10073668 */
  push32((uint32_t)(0x10073668u));
  /* 10061e6f call eax */
  call_ind((uint32_t)(EAX), 0x10061e71u);
  /* 10061e71 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061e76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061e79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061e7b je 0x10061f24 */
  if (C.zf) goto L_10061f24;
  /* 10061e81 push 0x1006f770 */
  push32((uint32_t)(0x1006f770u));
  /* 10061e86 push 0x10073660 */
  push32((uint32_t)(0x10073660u));
  /* 10061e8b call eax */
  call_ind((uint32_t)(EAX), 0x10061e8du);
  /* 10061e8d mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061e92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061e95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061e97 je 0x10061f24 */
  if (C.zf) goto L_10061f24;
  /* 10061e9d push 0x1006f75c */
  push32((uint32_t)(0x1006f75cu));
  /* 10061ea2 push 0x10073738 */
  push32((uint32_t)(0x10073738u));
  /* 10061ea7 call eax */
  call_ind((uint32_t)(EAX), 0x10061ea9u);
  /* 10061ea9 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061eae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061eb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061eb3 je 0x10061f24 */
  if (C.zf) goto L_10061f24;
  /* 10061eb5 push 0x1006f748 */
  push32((uint32_t)(0x1006f748u));
  /* 10061eba push 0x10073730 */
  push32((uint32_t)(0x10073730u));
  /* 10061ebf call eax */
  call_ind((uint32_t)(EAX), 0x10061ec1u);
  /* 10061ec1 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061ec6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061ec9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061ecb je 0x10061f24 */
  if (C.zf) goto L_10061f24;
  /* 10061ecd push 0x1006f734 */
  push32((uint32_t)(0x1006f734u));
  /* 10061ed2 push 0x10073728 */
  push32((uint32_t)(0x10073728u));
  /* 10061ed7 call eax */
  call_ind((uint32_t)(EAX), 0x10061ed9u);
  /* 10061ed9 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061ede add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061ee1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061ee3 je 0x10061f24 */
  if (C.zf) goto L_10061f24;
  /* 10061ee5 push 0x1006f720 */
  push32((uint32_t)(0x1006f720u));
  /* 10061eea push 0x10073710 */
  push32((uint32_t)(0x10073710u));
  /* 10061eef call eax */
  call_ind((uint32_t)(EAX), 0x10061ef1u);
  /* 10061ef1 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061ef6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061ef9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061efb je 0x10061f24 */
  if (C.zf) goto L_10061f24;
  /* 10061efd push 0x1006f70c */
  push32((uint32_t)(0x1006f70cu));
  /* 10061f02 push 0x10073708 */
  push32((uint32_t)(0x10073708u));
  /* 10061f07 call eax */
  call_ind((uint32_t)(EAX), 0x10061f09u);
  /* 10061f09 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10061f0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061f11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10061f13 je 0x10061f24 */
  if (C.zf) goto L_10061f24;
  /* 10061f15 push 0x1006f6f8 */
  push32((uint32_t)(0x1006f6f8u));
  /* 10061f1a push 0x10073700 */
  push32((uint32_t)(0x10073700u));
  /* 10061f1f call eax */
  call_ind((uint32_t)(EAX), 0x10061f21u);
  /* 10061f21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10061f24:;
  /* 10061f24 lea eax, [esp + 0x30] */
  EAX = ((uint32_t)(ESP + 0x30));
  /* 10061f28 push 0x1006f840 */
  push32((uint32_t)(0x1006f840u));
  /* 10061f2d push eax */
  push32((uint32_t)(EAX));
  /* 10061f2e call 0x10062f30 */
  push32(0x10061f33u); f_10062f30();
  /* 10061f33 push eax */
  push32((uint32_t)(EAX));
  /* 10061f34 push 0x100736d0 */
  push32((uint32_t)(0x100736d0u));
  /* 10061f39 call 0x100626a0 */
  push32(0x10061f3eu); f_100626a0();
  /* 10061f3e lea ecx, [esp + 0x40] */
  ECX = ((uint32_t)(ESP + 0x40));
  /* 10061f42 push 0x1006f838 */
  push32((uint32_t)(0x1006f838u));
  /* 10061f47 push ecx */
  push32((uint32_t)(ECX));
  /* 10061f48 call 0x10062f30 */
  push32(0x10061f4du); f_10062f30();
  /* 10061f4d push eax */
  push32((uint32_t)(EAX));
  /* 10061f4e push 0x100736d8 */
  push32((uint32_t)(0x100736d8u));
  /* 10061f53 call 0x100626a0 */
  push32(0x10061f58u); f_100626a0();
  /* 10061f58 lea edx, [esp + 0x50] */
  EDX = ((uint32_t)(ESP + 0x50));
  /* 10061f5c push 0x1006f830 */
  push32((uint32_t)(0x1006f830u));
  /* 10061f61 push edx */
  push32((uint32_t)(EDX));
  /* 10061f62 call 0x10062f30 */
  push32(0x10061f67u); f_10062f30();
  /* 10061f67 push eax */
  push32((uint32_t)(EAX));
  /* 10061f68 push 0x100736e0 */
  push32((uint32_t)(0x100736e0u));
  /* 10061f6d call 0x100626a0 */
  push32(0x10061f72u); f_100626a0();
  /* 10061f72 lea eax, [esp + 0x60] */
  EAX = ((uint32_t)(ESP + 0x60));
  /* 10061f76 push 0x1006f828 */
  push32((uint32_t)(0x1006f828u));
  /* 10061f7b push eax */
  push32((uint32_t)(EAX));
  /* 10061f7c call 0x10062f30 */
  push32(0x10061f81u); f_10062f30();
  /* 10061f81 push eax */
  push32((uint32_t)(EAX));
  /* 10061f82 push 0x100736e8 */
  push32((uint32_t)(0x100736e8u));
  /* 10061f87 call 0x100626a0 */
  push32(0x10061f8cu); f_100626a0();
  /* 10061f8c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061f8f lea ecx, [esp + 0x30] */
  ECX = ((uint32_t)(ESP + 0x30));
  /* 10061f93 push 0x1006f820 */
  push32((uint32_t)(0x1006f820u));
  /* 10061f98 push ecx */
  push32((uint32_t)(ECX));
  /* 10061f99 call 0x10062f30 */
  push32(0x10061f9eu); f_10062f30();
  /* 10061f9e push eax */
  push32((uint32_t)(EAX));
  /* 10061f9f push 0x100736b0 */
  push32((uint32_t)(0x100736b0u));
  /* 10061fa4 call 0x100626a0 */
  push32(0x10061fa9u); f_100626a0();
  /* 10061fa9 lea edx, [esp + 0x40] */
  EDX = ((uint32_t)(ESP + 0x40));
  /* 10061fad push 0x1006f818 */
  push32((uint32_t)(0x1006f818u));
  /* 10061fb2 push edx */
  push32((uint32_t)(EDX));
  /* 10061fb3 call 0x10062f30 */
  push32(0x10061fb8u); f_10062f30();
  /* 10061fb8 push eax */
  push32((uint32_t)(EAX));
  /* 10061fb9 push 0x100736c0 */
  push32((uint32_t)(0x100736c0u));
  /* 10061fbe call 0x100626a0 */
  push32(0x10061fc3u); f_100626a0();
  /* 10061fc3 lea eax, [esp + 0x50] */
  EAX = ((uint32_t)(ESP + 0x50));
  /* 10061fc7 push 0x1006f810 */
  push32((uint32_t)(0x1006f810u));
  /* 10061fcc push eax */
  push32((uint32_t)(EAX));
  /* 10061fcd call 0x10062f30 */
  push32(0x10061fd2u); f_10062f30();
  /* 10061fd2 push eax */
  push32((uint32_t)(EAX));
  /* 10061fd3 push 0x10073778 */
  push32((uint32_t)(0x10073778u));
  /* 10061fd8 call 0x100626a0 */
  push32(0x10061fddu); f_100626a0();
  /* 10061fdd lea ecx, [esp + 0x60] */
  ECX = ((uint32_t)(ESP + 0x60));
  /* 10061fe1 push 0x1006f808 */
  push32((uint32_t)(0x1006f808u));
  /* 10061fe6 push ecx */
  push32((uint32_t)(ECX));
  /* 10061fe7 call 0x10062f30 */
  push32(0x10061fecu); f_10062f30();
  /* 10061fec push eax */
  push32((uint32_t)(EAX));
  /* 10061fed push 0x10073780 */
  push32((uint32_t)(0x10073780u));
  /* 10061ff2 call 0x100626a0 */
  push32(0x10061ff7u); f_100626a0();
  /* 10061ff7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10061ffa lea edx, [esp + 0x30] */
  EDX = ((uint32_t)(ESP + 0x30));
  /* 10061ffe push 0x1006f800 */
  push32((uint32_t)(0x1006f800u));
  /* 10062003 push edx */
  push32((uint32_t)(EDX));
  /* 10062004 call 0x10062f30 */
  push32(0x10062009u); f_10062f30();
  /* 10062009 push eax */
  push32((uint32_t)(EAX));
  /* 1006200a push 0x10073788 */
  push32((uint32_t)(0x10073788u));
  /* 1006200f call 0x100626a0 */
  push32(0x10062014u); f_100626a0();
  /* 10062014 lea eax, [esp + 0x40] */
  EAX = ((uint32_t)(ESP + 0x40));
  /* 10062018 push 0x1006f7f8 */
  push32((uint32_t)(0x1006f7f8u));
  /* 1006201d push eax */
  push32((uint32_t)(EAX));
  /* 1006201e call 0x10062f30 */
  push32(0x10062023u); f_10062f30();
  /* 10062023 push eax */
  push32((uint32_t)(EAX));
  /* 10062024 push 0x10073760 */
  push32((uint32_t)(0x10073760u));
  /* 10062029 call 0x100626a0 */
  push32(0x1006202eu); f_100626a0();
  /* 1006202e lea ecx, [esp + 0x50] */
  ECX = ((uint32_t)(ESP + 0x50));
  /* 10062032 push 0x1006f7f0 */
  push32((uint32_t)(0x1006f7f0u));
  /* 10062037 push ecx */
  push32((uint32_t)(ECX));
  /* 10062038 call 0x10062f30 */
  push32(0x1006203du); f_10062f30();
  /* 1006203d push eax */
  push32((uint32_t)(EAX));
  /* 1006203e push 0x10073768 */
  push32((uint32_t)(0x10073768u));
  /* 10062043 call 0x100626a0 */
  push32(0x10062048u); f_100626a0();
  /* 10062048 push 0x1006f7e8 */
  push32((uint32_t)(0x1006f7e8u));
  /* 1006204d lea edx, [esp + 0x64] */
  EDX = ((uint32_t)(ESP + 0x64));
  /* 10062051 push edx */
  push32((uint32_t)(EDX));
  /* 10062052 call 0x10062f30 */
  push32(0x10062057u); f_10062f30();
  /* 10062057 push eax */
  push32((uint32_t)(EAX));
  /* 10062058 push 0x10073770 */
  push32((uint32_t)(0x10073770u));
  /* 1006205d call 0x100626a0 */
  push32(0x10062062u); f_100626a0();
  /* 10062062 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10062067 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006206a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006206c je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 10062072 push 0x1006f6e8 */
  push32((uint32_t)(0x1006f6e8u));
  /* 10062077 push 0x100761c8 */
  push32((uint32_t)(0x100761c8u));
  /* 1006207c call eax */
  call_ind((uint32_t)(EAX), 0x1006207eu);
  /* 1006207e mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10062083 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10062086 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10062088 je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 1006208e push 0x1006f6d4 */
  push32((uint32_t)(0x1006f6d4u));
  /* 10062093 push 0x100761c0 */
  push32((uint32_t)(0x100761c0u));
  /* 10062098 call eax */
  call_ind((uint32_t)(EAX), 0x1006209au);
  /* 1006209a mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 1006209f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100620a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100620a4 je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 100620aa push 0x1006f6c0 */
  push32((uint32_t)(0x1006f6c0u));
  /* 100620af push 0x10076190 */
  push32((uint32_t)(0x10076190u));
  /* 100620b4 call eax */
  call_ind((uint32_t)(EAX), 0x100620b6u);
  /* 100620b6 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 100620bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100620be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100620c0 je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 100620c6 push 0x1006f6ac */
  push32((uint32_t)(0x1006f6acu));
  /* 100620cb push 0x10076188 */
  push32((uint32_t)(0x10076188u));
  /* 100620d0 call eax */
  call_ind((uint32_t)(EAX), 0x100620d2u);
  /* 100620d2 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 100620d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100620da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100620dc je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 100620e2 push 0x1006f698 */
  push32((uint32_t)(0x1006f698u));
  /* 100620e7 push 0x10076198 */
  push32((uint32_t)(0x10076198u));
  /* 100620ec call eax */
  call_ind((uint32_t)(EAX), 0x100620eeu);
  /* 100620ee mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 100620f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100620f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100620f8 je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 100620fe push 0x1006f684 */
  push32((uint32_t)(0x1006f684u));
  /* 10062103 push 0x10076088 */
  push32((uint32_t)(0x10076088u));
  /* 10062108 call eax */
  call_ind((uint32_t)(EAX), 0x1006210au);
  /* 1006210a mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 1006210f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10062112 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10062114 je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 1006211a push 0x1006f670 */
  push32((uint32_t)(0x1006f670u));
  /* 1006211f push 0x10076090 */
  push32((uint32_t)(0x10076090u));
  /* 10062124 call eax */
  call_ind((uint32_t)(EAX), 0x10062126u);
  /* 10062126 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 1006212b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006212e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10062130 je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 10062136 push 0x1006f65c */
  push32((uint32_t)(0x1006f65cu));
  /* 1006213b push 0x10076098 */
  push32((uint32_t)(0x10076098u));
  /* 10062140 call eax */
  call_ind((uint32_t)(EAX), 0x10062142u);
  /* 10062142 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10062147 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006214a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006214c je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 10062152 push 0x1006f648 */
  push32((uint32_t)(0x1006f648u));
  /* 10062157 push 0x100760a0 */
  push32((uint32_t)(0x100760a0u));
  /* 1006215c call eax */
  call_ind((uint32_t)(EAX), 0x1006215eu);
  /* 1006215e mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10062163 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10062166 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10062168 je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 1006216e push 0x1006f640 */
  push32((uint32_t)(0x1006f640u));
  /* 10062173 push 0x100761a8 */
  push32((uint32_t)(0x100761a8u));
  /* 10062178 call eax */
  call_ind((uint32_t)(EAX), 0x1006217au);
  /* 1006217a mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 1006217f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10062182 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10062184 je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 1006218a push 0x1006f638 */
  push32((uint32_t)(0x1006f638u));
  /* 1006218f push 0x10076010 */
  push32((uint32_t)(0x10076010u));
  /* 10062194 call eax */
  call_ind((uint32_t)(EAX), 0x10062196u);
  /* 10062196 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 1006219b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006219e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100621a0 je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 100621a6 push 0x1006f630 */
  push32((uint32_t)(0x1006f630u));
  /* 100621ab push 0x10073948 */
  push32((uint32_t)(0x10073948u));
  /* 100621b0 call eax */
  call_ind((uint32_t)(EAX), 0x100621b2u);
  /* 100621b2 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 100621b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100621ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100621bc je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 100621c2 push 0x1006f628 */
  push32((uint32_t)(0x1006f628u));
  /* 100621c7 push 0x10076068 */
  push32((uint32_t)(0x10076068u));
  /* 100621cc call eax */
  call_ind((uint32_t)(EAX), 0x100621ceu);
  /* 100621ce mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 100621d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100621d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100621d8 je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 100621de push 0x1006f620 */
  push32((uint32_t)(0x1006f620u));
  /* 100621e3 push 0x10076020 */
  push32((uint32_t)(0x10076020u));
  /* 100621e8 call eax */
  call_ind((uint32_t)(EAX), 0x100621eau);
  /* 100621ea mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 100621ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100621f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100621f4 je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 100621fa push 0x1006f618 */
  push32((uint32_t)(0x1006f618u));
  /* 100621ff push 0x10076028 */
  push32((uint32_t)(0x10076028u));
  /* 10062204 call eax */
  call_ind((uint32_t)(EAX), 0x10062206u);
  /* 10062206 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 1006220b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006220e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10062210 je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 10062216 push 0x1006f610 */
  push32((uint32_t)(0x1006f610u));
  /* 1006221b push 0x10076030 */
  push32((uint32_t)(0x10076030u));
  /* 10062220 call eax */
  call_ind((uint32_t)(EAX), 0x10062222u);
  /* 10062222 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10062227 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006222a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006222c je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 10062232 push 0x1006f608 */
  push32((uint32_t)(0x1006f608u));
  /* 10062237 push 0x10076260 */
  push32((uint32_t)(0x10076260u));
  /* 1006223c call eax */
  call_ind((uint32_t)(EAX), 0x1006223eu);
  /* 1006223e mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10062243 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10062246 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10062248 je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 1006224e push 0x1006f600 */
  push32((uint32_t)(0x1006f600u));
  /* 10062253 push 0x10076100 */
  push32((uint32_t)(0x10076100u));
  /* 10062258 call eax */
  call_ind((uint32_t)(EAX), 0x1006225au);
  /* 1006225a mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 1006225f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10062262 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10062264 je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 1006226a push 0x1006f5f8 */
  push32((uint32_t)(0x1006f5f8u));
  /* 1006226f push 0x10076140 */
  push32((uint32_t)(0x10076140u));
  /* 10062274 call eax */
  call_ind((uint32_t)(EAX), 0x10062276u);
  /* 10062276 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 1006227b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006227e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10062280 je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 10062286 push 0x1006f5f0 */
  push32((uint32_t)(0x1006f5f0u));
  /* 1006228b push 0x100761f8 */
  push32((uint32_t)(0x100761f8u));
  /* 10062290 call eax */
  call_ind((uint32_t)(EAX), 0x10062292u);
  /* 10062292 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10062297 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006229a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006229c je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 100622a2 push 0x1006f5e8 */
  push32((uint32_t)(0x1006f5e8u));
  /* 100622a7 push 0x10076200 */
  push32((uint32_t)(0x10076200u));
  /* 100622ac call eax */
  call_ind((uint32_t)(EAX), 0x100622aeu);
  /* 100622ae mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 100622b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100622b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100622b8 je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 100622be push 0x1006f5e0 */
  push32((uint32_t)(0x1006f5e0u));
  /* 100622c3 push 0x10076158 */
  push32((uint32_t)(0x10076158u));
  /* 100622c8 call eax */
  call_ind((uint32_t)(EAX), 0x100622cau);
  /* 100622ca mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 100622cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100622d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100622d4 je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 100622da push 0x1006f5d8 */
  push32((uint32_t)(0x1006f5d8u));
  /* 100622df push 0x10076168 */
  push32((uint32_t)(0x10076168u));
  /* 100622e4 call eax */
  call_ind((uint32_t)(EAX), 0x100622e6u);
  /* 100622e6 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 100622eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100622ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100622f0 je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 100622f6 push 0x1006f5d0 */
  push32((uint32_t)(0x1006f5d0u));
  /* 100622fb push 0x10076170 */
  push32((uint32_t)(0x10076170u));
  /* 10062300 call eax */
  call_ind((uint32_t)(EAX), 0x10062302u);
  /* 10062302 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10062307 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006230a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006230c je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 10062312 push 0x1006f5c8 */
  push32((uint32_t)(0x1006f5c8u));
  /* 10062317 push 0x10076160 */
  push32((uint32_t)(0x10076160u));
  /* 1006231c call eax */
  call_ind((uint32_t)(EAX), 0x1006231eu);
  /* 1006231e mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10062323 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10062326 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10062328 je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 1006232e push 0x1006f5c0 */
  push32((uint32_t)(0x1006f5c0u));
  /* 10062333 push 0x10073940 */
  push32((uint32_t)(0x10073940u));
  /* 10062338 call eax */
  call_ind((uint32_t)(EAX), 0x1006233au);
  /* 1006233a mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 1006233f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10062342 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10062344 je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 1006234a push 0x1006f5b8 */
  push32((uint32_t)(0x1006f5b8u));
  /* 1006234f push 0x100738d0 */
  push32((uint32_t)(0x100738d0u));
  /* 10062354 call eax */
  call_ind((uint32_t)(EAX), 0x10062356u);
  /* 10062356 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 1006235b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006235e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10062360 je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 10062366 push 0x1006f5b0 */
  push32((uint32_t)(0x1006f5b0u));
  /* 1006236b push 0x10073790 */
  push32((uint32_t)(0x10073790u));
  /* 10062370 call eax */
  call_ind((uint32_t)(EAX), 0x10062372u);
  /* 10062372 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10062377 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006237a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006237c je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 10062382 push 0x1006f5a8 */
  push32((uint32_t)(0x1006f5a8u));
  /* 10062387 push 0x100760e0 */
  push32((uint32_t)(0x100760e0u));
  /* 1006238c call eax */
  call_ind((uint32_t)(EAX), 0x1006238eu);
  /* 1006238e mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10062393 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10062396 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10062398 je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 1006239e push 0x1006f5a0 */
  push32((uint32_t)(0x1006f5a0u));
  /* 100623a3 push 0x10073930 */
  push32((uint32_t)(0x10073930u));
  /* 100623a8 call eax */
  call_ind((uint32_t)(EAX), 0x100623aau);
  /* 100623aa mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 100623af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100623b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100623b4 je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 100623ba push 0x1006f598 */
  push32((uint32_t)(0x1006f598u));
  /* 100623bf push 0x100761e8 */
  push32((uint32_t)(0x100761e8u));
  /* 100623c4 call eax */
  call_ind((uint32_t)(EAX), 0x100623c6u);
  /* 100623c6 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 100623cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100623ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100623d0 je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 100623d6 push 0x1006f590 */
  push32((uint32_t)(0x1006f590u));
  /* 100623db push 0x100761f0 */
  push32((uint32_t)(0x100761f0u));
  /* 100623e0 call eax */
  call_ind((uint32_t)(EAX), 0x100623e2u);
  /* 100623e2 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 100623e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100623ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100623ec je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 100623f2 push 0x1006f588 */
  push32((uint32_t)(0x1006f588u));
  /* 100623f7 push 0x10073860 */
  push32((uint32_t)(0x10073860u));
  /* 100623fc call eax */
  call_ind((uint32_t)(EAX), 0x100623feu);
  /* 100623fe mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10062403 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10062406 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10062408 je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 1006240e push 0x1006f580 */
  push32((uint32_t)(0x1006f580u));
  /* 10062413 push 0x10073870 */
  push32((uint32_t)(0x10073870u));
  /* 10062418 call eax */
  call_ind((uint32_t)(EAX), 0x1006241au);
  /* 1006241a mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 1006241f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10062422 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10062424 je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 1006242a push 0x1006f578 */
  push32((uint32_t)(0x1006f578u));
  /* 1006242f push 0x10073758 */
  push32((uint32_t)(0x10073758u));
  /* 10062434 call eax */
  call_ind((uint32_t)(EAX), 0x10062436u);
  /* 10062436 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 1006243b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006243e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10062440 je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 10062446 push 0x1006f570 */
  push32((uint32_t)(0x1006f570u));
  /* 1006244b push 0x10073618 */
  push32((uint32_t)(0x10073618u));
  /* 10062450 call eax */
  call_ind((uint32_t)(EAX), 0x10062452u);
  /* 10062452 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10062457 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006245a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006245c je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 10062462 push 0x1006f568 */
  push32((uint32_t)(0x1006f568u));
  /* 10062467 push 0x100736f8 */
  push32((uint32_t)(0x100736f8u));
  /* 1006246c call eax */
  call_ind((uint32_t)(EAX), 0x1006246eu);
  /* 1006246e mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 10062473 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10062476 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10062478 je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 1006247e push 0x1006f560 */
  push32((uint32_t)(0x1006f560u));
  /* 10062483 push 0x10073620 */
  push32((uint32_t)(0x10073620u));
  /* 10062488 call eax */
  call_ind((uint32_t)(EAX), 0x1006248au);
  /* 1006248a mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 1006248f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10062492 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10062494 je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 1006249a push 0x1006f54c */
  push32((uint32_t)(0x1006f54cu));
  /* 1006249f push 0x100762d8 */
  push32((uint32_t)(0x100762d8u));
  /* 100624a4 call eax */
  call_ind((uint32_t)(EAX), 0x100624a6u);
  /* 100624a6 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 100624ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100624ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100624b0 je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 100624b2 push 0x1006f538 */
  push32((uint32_t)(0x1006f538u));
  /* 100624b7 push 0x100762c0 */
  push32((uint32_t)(0x100762c0u));
  /* 100624bc call eax */
  call_ind((uint32_t)(EAX), 0x100624beu);
  /* 100624be mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 100624c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100624c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100624c8 je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 100624ca push 0x1006f524 */
  push32((uint32_t)(0x1006f524u));
  /* 100624cf push 0x100762d0 */
  push32((uint32_t)(0x100762d0u));
  /* 100624d4 call eax */
  call_ind((uint32_t)(EAX), 0x100624d6u);
  /* 100624d6 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 100624db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100624de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100624e0 je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 100624e2 push 0x1006f510 */
  push32((uint32_t)(0x1006f510u));
  /* 100624e7 push 0x100762b0 */
  push32((uint32_t)(0x100762b0u));
  /* 100624ec call eax */
  call_ind((uint32_t)(EAX), 0x100624eeu);
  /* 100624ee mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 100624f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100624f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100624f8 je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 100624fa push 0x1006f4fc */
  push32((uint32_t)(0x1006f4fcu));
  /* 100624ff push 0x100762b8 */
  push32((uint32_t)(0x100762b8u));
  /* 10062504 call eax */
  call_ind((uint32_t)(EAX), 0x10062506u);
  /* 10062506 mov eax, dword ptr [0x100763ec] */
  EAX = (r32((uint32_t)(0x100763ec)));
  /* 1006250b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006250e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10062510 je 0x10062521 */
  if (C.zf) goto L_10062521;
  /* 10062512 push 0x1006f4e8 */
  push32((uint32_t)(0x1006f4e8u));
  /* 10062517 push 0x100762a8 */
  push32((uint32_t)(0x100762a8u));
  /* 1006251c call eax */
  call_ind((uint32_t)(EAX), 0x1006251eu);
  /* 1006251e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10062521:;
  /* 10062521 push 4 */
  push32((uint32_t)(0x4u));
  /* 10062523 push 4 */
  push32((uint32_t)(0x4u));
  /* 10062525 push 9 */
  push32((uint32_t)(0x9u));
  /* 10062527 call dword ptr [0x10076504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076504))), 0x1006252du);
  /* 1006252d push 6 */
  push32((uint32_t)(0x6u));
  /* 1006252f call dword ptr [0x10076510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076510))), 0x10062535u);
  /* 10062535 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10062537 push 0x1006f4d4 */
  push32((uint32_t)(0x1006f4d4u));
  /* 1006253c push 0 */
  push32((uint32_t)(0x0u));
  /* 1006253e call dword ptr [0x10076514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076514))), 0x10062544u);
  /* 10062544 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10062546 push 0x1006f4c0 */
  push32((uint32_t)(0x1006f4c0u));
  /* 1006254b push 1 */
  push32((uint32_t)(0x1u));
  /* 1006254d call dword ptr [0x10076514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076514))), 0x10062553u);
  /* 10062553 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10062555 push 0x1006f4ac */
  push32((uint32_t)(0x1006f4acu));
  /* 1006255a push 2 */
  push32((uint32_t)(0x2u));
  /* 1006255c call dword ptr [0x10076514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076514))), 0x10062562u);
  /* 10062562 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10062564 push 0x1006f498 */
  push32((uint32_t)(0x1006f498u));
  /* 10062569 push 3 */
  push32((uint32_t)(0x3u));
  /* 1006256b call dword ptr [0x10076514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076514))), 0x10062571u);
  /* 10062571 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10062574 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10062576 push 0x1006f484 */
  push32((uint32_t)(0x1006f484u));
  /* 1006257b push 4 */
  push32((uint32_t)(0x4u));
  /* 1006257d call dword ptr [0x10076514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076514))), 0x10062583u);
  /* 10062583 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10062585 push 0x1006f470 */
  push32((uint32_t)(0x1006f470u));
  /* 1006258a push 5 */
  push32((uint32_t)(0x5u));
  /* 1006258c call dword ptr [0x10076514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076514))), 0x10062592u);
  /* 10062592 push 0x1006f464 */
  push32((uint32_t)(0x1006f464u));
  /* 10062597 call dword ptr [0x1007654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007654c))), 0x1006259du);
  /* 1006259d push 0x1006f454 */
  push32((uint32_t)(0x1006f454u));
  /* 100625a2 call dword ptr [0x10076554] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076554))), 0x100625a8u);
  /* 100625a8 push 0x1006f448 */
  push32((uint32_t)(0x1006f448u));
  /* 100625ad call dword ptr [0x1007655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007655c))), 0x100625b3u);
  /* 100625b3 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 100625b8 call dword ptr [0x10076518] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076518))), 0x100625beu);
  /* 100625be push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100625c0 call dword ptr [0x1007651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007651c))), 0x100625c6u);
  /* 100625c6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100625c8 call dword ptr [0x10076520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076520))), 0x100625ceu);
  /* 100625ce push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 100625d3 call dword ptr [0x10076524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076524))), 0x100625d9u);
  /* 100625d9 push 5 */
  push32((uint32_t)(0x5u));
  /* 100625db call dword ptr [0x10076528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076528))), 0x100625e1u);
  /* 100625e1 add esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100625e7 ret  */
  ESPCHK(0x10061010u, _esp0);
  ESP += 4; return;
}

/* FUN_100025f0 @ 0x100625f0 (20 bytes, 7 insns) */
void f_100625f0(void) {
  FTRACE(0x100625f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100625f0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100625f4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100625f8 push eax */
  push32((uint32_t)(EAX));
  /* 100625f9 push ecx */
  push32((uint32_t)(ECX));
  /* 100625fa call dword ptr [0x10076500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076500))), 0x10062600u);
  /* 10062600 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10062603 ret  */
  ESPCHK(0x100625f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002610 @ 0x10062610 (25 bytes, 9 insns) */
void f_10062610(void) {
  FTRACE(0x10062610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10062610 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10062614 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10062618 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1006261c push eax */
  push32((uint32_t)(EAX));
  /* 1006261d push ecx */
  push32((uint32_t)(ECX));
  /* 1006261e push edx */
  push32((uint32_t)(EDX));
  /* 1006261f call dword ptr [0x1007650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007650c))), 0x10062625u);
  /* 10062625 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10062628 ret  */
  ESPCHK(0x10062610u, _esp0);
  ESP += 4; return;
}

/* FUN_10002630 @ 0x10062630 (6 bytes, 1 insns) */
void f_10062630(void) {
  FTRACE(0x10062630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10062630 jmp dword ptr [0x10076538] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10076538)))); return;
}

/* FUN_10002640 @ 0x10062640 (20 bytes, 7 insns) */
void f_10062640(void) {
  FTRACE(0x10062640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10062640 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10062644 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10062648 push eax */
  push32((uint32_t)(EAX));
  /* 10062649 push ecx */
  push32((uint32_t)(ECX));
  /* 1006264a call dword ptr [0x10076558] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076558))), 0x10062650u);
  /* 10062650 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10062653 ret  */
  ESPCHK(0x10062640u, _esp0);
  ESP += 4; return;
}

/* FUN_10002660 @ 0x10062660 (6 bytes, 1 insns) */
void f_10062660(void) {
  FTRACE(0x10062660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10062660 jmp dword ptr [0x10076564] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10076564)))); return;
}

/* FUN_10002670 @ 0x10062670 (6 bytes, 1 insns) */
void f_10062670(void) {
  FTRACE(0x10062670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10062670 jmp dword ptr [0x10076568] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10076568)))); return;
}

/* FUN_10002680 @ 0x10062680 (6 bytes, 1 insns) */
void f_10062680(void) {
  FTRACE(0x10062680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10062680 jmp dword ptr [0x10076570] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10076570)))); return;
}

/* FUN_10002690 @ 0x10062690 (13 bytes, 5 insns) */
void f_10062690(void) {
  FTRACE(0x10062690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10062690 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10062694 push eax */
  push32((uint32_t)(EAX));
  /* 10062695 call dword ptr [0x10076574] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076574))), 0x1006269bu);
  /* 1006269b pop ecx */
  ECX = (pop32());
  /* 1006269c ret  */
  ESPCHK(0x10062690u, _esp0);
  ESP += 4; return;
}

/* FUN_100026a0 @ 0x100626a0 (20 bytes, 7 insns) */
void f_100626a0(void) {
  FTRACE(0x100626a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100626a0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100626a4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100626a8 push eax */
  push32((uint32_t)(EAX));
  /* 100626a9 push ecx */
  push32((uint32_t)(ECX));
  /* 100626aa call dword ptr [0x10076578] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076578))), 0x100626b0u);
  /* 100626b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100626b3 ret  */
  ESPCHK(0x100626a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100026c0 @ 0x100626c0 (6 bytes, 1 insns) */
void f_100626c0(void) {
  FTRACE(0x100626c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100626c0 jmp dword ptr [0x1007657c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1007657c)))); return;
}

/* FUN_100026d0 @ 0x100626d0 (20 bytes, 7 insns) */
void f_100626d0(void) {
  FTRACE(0x100626d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100626d0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100626d4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100626d8 push eax */
  push32((uint32_t)(EAX));
  /* 100626d9 push ecx */
  push32((uint32_t)(ECX));
  /* 100626da call dword ptr [0x10076258] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076258))), 0x100626e0u);
  /* 100626e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100626e3 ret  */
  ESPCHK(0x100626d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100026f0 @ 0x100626f0 (15 bytes, 5 insns) */
void f_100626f0(void) {
  FTRACE(0x100626f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100626f0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100626f4 push eax */
  push32((uint32_t)(EAX));
  /* 100626f5 call dword ptr [0x100762a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100762a0))), 0x100626fbu);
  /* 100626fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100626fe ret  */
  ESPCHK(0x100626f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002700 @ 0x10062700 (20 bytes, 7 insns) */
void f_10062700(void) {
  FTRACE(0x10062700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10062700 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10062704 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10062708 push eax */
  push32((uint32_t)(EAX));
  /* 10062709 push ecx */
  push32((uint32_t)(ECX));
  /* 1006270a call dword ptr [0x10073720] */
  call_ind((uint32_t)(r32((uint32_t)(0x10073720))), 0x10062710u);
  /* 10062710 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10062713 ret  */
  ESPCHK(0x10062700u, _esp0);
  ESP += 4; return;
}

/* FUN_10002720 @ 0x10062720 (13 bytes, 5 insns) */
void f_10062720(void) {
  FTRACE(0x10062720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10062720 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10062724 push eax */
  push32((uint32_t)(EAX));
  /* 10062725 call dword ptr [0x100738c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100738c0))), 0x1006272bu);
  /* 1006272b pop ecx */
  ECX = (pop32());
  /* 1006272c ret  */
  ESPCHK(0x10062720u, _esp0);
  ESP += 4; return;
}

/* FUN_10002730 @ 0x10062730 (15 bytes, 5 insns) */
void f_10062730(void) {
  FTRACE(0x10062730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10062730 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10062734 push eax */
  push32((uint32_t)(EAX));
  /* 10062735 call dword ptr [0x10076580] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076580))), 0x1006273bu);
  /* 1006273b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006273e ret  */
  ESPCHK(0x10062730u, _esp0);
  ESP += 4; return;
}

/* FUN_10002740 @ 0x10062740 (25 bytes, 9 insns) */
void f_10062740(void) {
  FTRACE(0x10062740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10062740 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10062744 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10062748 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1006274c push eax */
  push32((uint32_t)(EAX));
  /* 1006274d push ecx */
  push32((uint32_t)(ECX));
  /* 1006274e push edx */
  push32((uint32_t)(EDX));
  /* 1006274f call dword ptr [0x10075fb0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10075fb0))), 0x10062755u);
  /* 10062755 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10062758 ret  */
  ESPCHK(0x10062740u, _esp0);
  ESP += 4; return;
}

/* FUN_10002760 @ 0x10062760 (13 bytes, 5 insns) */
void f_10062760(void) {
  FTRACE(0x10062760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10062760 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10062764 push eax */
  push32((uint32_t)(EAX));
  /* 10062765 call dword ptr [0x10073920] */
  call_ind((uint32_t)(r32((uint32_t)(0x10073920))), 0x1006276bu);
  /* 1006276b pop ecx */
  ECX = (pop32());
  /* 1006276c ret  */
  ESPCHK(0x10062760u, _esp0);
  ESP += 4; return;
}

/* FUN_10002770 @ 0x10062770 (6 bytes, 1 insns) */
void f_10062770(void) {
  FTRACE(0x10062770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10062770 jmp dword ptr [0x10076238] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10076238)))); return;
}

/* FUN_10002780 @ 0x10062780 (6 bytes, 1 insns) */
void f_10062780(void) {
  FTRACE(0x10062780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10062780 jmp dword ptr [0x10073938] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10073938)))); return;
}

/* FUN_10002790 @ 0x10062790 (82 bytes, 28 insns) */
void f_10062790(void) {
  FTRACE(0x10062790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10062790 mov eax, dword ptr [0x100763d0] */
  EAX = (r32((uint32_t)(0x100763d0)));
  /* 10062795 sub esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006279b push esi */
  push32((uint32_t)(ESI));
  /* 1006279c push edi */
  push32((uint32_t)(EDI));
  /* 1006279d mov edi, dword ptr [esp + 0x10c] */
  EDI = (r32((uint32_t)(ESP + 0x10c)));
  /* 100627a4 push edi */
  push32((uint32_t)(EDI));
  /* 100627a5 push eax */
  push32((uint32_t)(EAX));
  /* 100627a6 call dword ptr [0x1006e088] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e088))), 0x100627acu);
  /* 100627ac mov esi, eax */
  ESI = (EAX);
  /* 100627ae test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100627b0 jne 0x100627d7 */
  if (!C.zf) goto L_100627d7;
  /* 100627b2 push edi */
  push32((uint32_t)(EDI));
  /* 100627b3 lea ecx, [esp + 0xc] */
  ECX = ((uint32_t)(ESP + 0xc));
  /* 100627b7 push 0x1006fefc */
  push32((uint32_t)(0x1006fefcu));
  /* 100627bc push ecx */
  push32((uint32_t)(ECX));
  /* 100627bd call 0x10066e70 */
  push32(0x100627c2u); f_10066e70();
  /* 100627c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100627c5 lea edx, [esp + 8] */
  EDX = ((uint32_t)(ESP + 0x8));
  /* 100627c9 push esi */
  push32((uint32_t)(ESI));
  /* 100627ca push 0x1006feec */
  push32((uint32_t)(0x1006feecu));
  /* 100627cf push edx */
  push32((uint32_t)(EDX));
  /* 100627d0 push esi */
  push32((uint32_t)(ESI));
  /* 100627d1 call dword ptr [0x1006e0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e0dc))), 0x100627d7u);
L_100627d7:;
  /* 100627d7 mov eax, esi */
  EAX = (ESI);
  /* 100627d9 pop edi */
  EDI = (pop32());
  /* 100627da pop esi */
  ESI = (pop32());
  /* 100627db add esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100627e1 ret  */
  ESPCHK(0x10062790u, _esp0);
  ESP += 4; return;
}

/* FUN_100027f0 @ 0x100627f0 (1844 bytes, 376 insns) */
void f_100627f0(void) {
  FTRACE(0x100627f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100627f0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100627f4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100627f5 jne 0x10062f1c */
  if (!C.zf) goto L_10062f1c;
  /* 100627fb push 0x10070650 */
  push32((uint32_t)(0x10070650u));
  /* 10062800 call dword ptr [0x1006e004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e004))), 0x10062806u);
  /* 10062806 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10062808 mov dword ptr [0x100763d0], eax */
  w32((uint32_t)(0x100763d0), (EAX));
  /* 1006280d jne 0x10062829 */
  if (!C.zf) goto L_10062829;
  /* 1006280f push eax */
  push32((uint32_t)(EAX));
  /* 10062810 push 0x10070648 */
  push32((uint32_t)(0x10070648u));
  /* 10062815 push 0x10070630 */
  push32((uint32_t)(0x10070630u));
  /* 1006281a push eax */
  push32((uint32_t)(EAX));
  /* 1006281b call dword ptr [0x1006e0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e0dc))), 0x10062821u);
  /* 10062821 mov eax, 1 */
  EAX = (0x1u);
  /* 10062826 ret 0xc */
  ESPCHK(0x100627f0u, _esp0);
  ESP += 16; return;
L_10062829:;
  /* 10062829 push 0x10070620 */
  push32((uint32_t)(0x10070620u));
  /* 1006282e call 0x10062790 */
  push32(0x10062833u); f_10062790();
  /* 10062833 push 0x10070610 */
  push32((uint32_t)(0x10070610u));
  /* 10062838 mov dword ptr [0x100763d4], eax */
  w32((uint32_t)(0x100763d4), (EAX));
  /* 1006283d call 0x10062790 */
  push32(0x10062842u); f_10062790();
  /* 10062842 push 0x10070600 */
  push32((uint32_t)(0x10070600u));
  /* 10062847 mov dword ptr [0x100763d8], eax */
  w32((uint32_t)(0x100763d8), (EAX));
  /* 1006284c call 0x10062790 */
  push32(0x10062851u); f_10062790();
  /* 10062851 push 0x100705f4 */
  push32((uint32_t)(0x100705f4u));
  /* 10062856 mov dword ptr [0x100763dc], eax */
  w32((uint32_t)(0x100763dc), (EAX));
  /* 1006285b call 0x10062790 */
  push32(0x10062860u); f_10062790();
  /* 10062860 push 0x100705e4 */
  push32((uint32_t)(0x100705e4u));
  /* 10062865 mov dword ptr [0x100763e0], eax */
  w32((uint32_t)(0x100763e0), (EAX));
  /* 1006286a call 0x10062790 */
  push32(0x1006286fu); f_10062790();
  /* 1006286f push 0x100705d0 */
  push32((uint32_t)(0x100705d0u));
  /* 10062874 mov dword ptr [0x100763e4], eax */
  w32((uint32_t)(0x100763e4), (EAX));
  /* 10062879 call 0x10062790 */
  push32(0x1006287eu); f_10062790();
  /* 1006287e push 0x100705c0 */
  push32((uint32_t)(0x100705c0u));
  /* 10062883 mov dword ptr [0x100763e8], eax */
  w32((uint32_t)(0x100763e8), (EAX));
  /* 10062888 call 0x10062790 */
  push32(0x1006288du); f_10062790();
  /* 1006288d push 0x100705b0 */
  push32((uint32_t)(0x100705b0u));
  /* 10062892 mov dword ptr [0x100763ec], eax */
  w32((uint32_t)(0x100763ec), (EAX));
  /* 10062897 call 0x10062790 */
  push32(0x1006289cu); f_10062790();
  /* 1006289c push 0x1007059c */
  push32((uint32_t)(0x1007059cu));
  /* 100628a1 mov dword ptr [0x100763f0], eax */
  w32((uint32_t)(0x100763f0), (EAX));
  /* 100628a6 call 0x10062790 */
  push32(0x100628abu); f_10062790();
  /* 100628ab push 0x10070588 */
  push32((uint32_t)(0x10070588u));
  /* 100628b0 mov dword ptr [0x100763f4], eax */
  w32((uint32_t)(0x100763f4), (EAX));
  /* 100628b5 call 0x10062790 */
  push32(0x100628bau); f_10062790();
  /* 100628ba push 0x10070578 */
  push32((uint32_t)(0x10070578u));
  /* 100628bf mov dword ptr [0x100763f8], eax */
  w32((uint32_t)(0x100763f8), (EAX));
  /* 100628c4 call 0x10062790 */
  push32(0x100628c9u); f_10062790();
  /* 100628c9 push 0x10070568 */
  push32((uint32_t)(0x10070568u));
  /* 100628ce mov dword ptr [0x100763fc], eax */
  w32((uint32_t)(0x100763fc), (EAX));
  /* 100628d3 call 0x10062790 */
  push32(0x100628d8u); f_10062790();
  /* 100628d8 push 0x10070558 */
  push32((uint32_t)(0x10070558u));
  /* 100628dd mov dword ptr [0x10076400], eax */
  w32((uint32_t)(0x10076400), (EAX));
  /* 100628e2 call 0x10062790 */
  push32(0x100628e7u); f_10062790();
  /* 100628e7 push 0x10070548 */
  push32((uint32_t)(0x10070548u));
  /* 100628ec mov dword ptr [0x10076404], eax */
  w32((uint32_t)(0x10076404), (EAX));
  /* 100628f1 call 0x10062790 */
  push32(0x100628f6u); f_10062790();
  /* 100628f6 push 0x10070538 */
  push32((uint32_t)(0x10070538u));
  /* 100628fb mov dword ptr [0x10076408], eax */
  w32((uint32_t)(0x10076408), (EAX));
  /* 10062900 call 0x10062790 */
  push32(0x10062905u); f_10062790();
  /* 10062905 push 0x10070528 */
  push32((uint32_t)(0x10070528u));
  /* 1006290a mov dword ptr [0x1007640c], eax */
  w32((uint32_t)(0x1007640c), (EAX));
  /* 1006290f call 0x10062790 */
  push32(0x10062914u); f_10062790();
  /* 10062914 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10062917 mov dword ptr [0x10076410], eax */
  w32((uint32_t)(0x10076410), (EAX));
  /* 1006291c push 0x10070518 */
  push32((uint32_t)(0x10070518u));
  /* 10062921 call 0x10062790 */
  push32(0x10062926u); f_10062790();
  /* 10062926 push 0x10070508 */
  push32((uint32_t)(0x10070508u));
  /* 1006292b mov dword ptr [0x10076414], eax */
  w32((uint32_t)(0x10076414), (EAX));
  /* 10062930 call 0x10062790 */
  push32(0x10062935u); f_10062790();
  /* 10062935 push 0x100704f4 */
  push32((uint32_t)(0x100704f4u));
  /* 1006293a mov dword ptr [0x10076418], eax */
  w32((uint32_t)(0x10076418), (EAX));
  /* 1006293f call 0x10062790 */
  push32(0x10062944u); f_10062790();
  /* 10062944 push 0x100704ec */
  push32((uint32_t)(0x100704ecu));
  /* 10062949 mov dword ptr [0x1007641c], eax */
  w32((uint32_t)(0x1007641c), (EAX));
  /* 1006294e call 0x10062790 */
  push32(0x10062953u); f_10062790();
  /* 10062953 push 0x100704dc */
  push32((uint32_t)(0x100704dcu));
  /* 10062958 mov dword ptr [0x10076420], eax */
  w32((uint32_t)(0x10076420), (EAX));
  /* 1006295d call 0x10062790 */
  push32(0x10062962u); f_10062790();
  /* 10062962 push 0x100704cc */
  push32((uint32_t)(0x100704ccu));
  /* 10062967 mov dword ptr [0x10076424], eax */
  w32((uint32_t)(0x10076424), (EAX));
  /* 1006296c call 0x10062790 */
  push32(0x10062971u); f_10062790();
  /* 10062971 push 0x100704c0 */
  push32((uint32_t)(0x100704c0u));
  /* 10062976 mov dword ptr [0x10076428], eax */
  w32((uint32_t)(0x10076428), (EAX));
  /* 1006297b call 0x10062790 */
  push32(0x10062980u); f_10062790();
  /* 10062980 push 0x100704b0 */
  push32((uint32_t)(0x100704b0u));
  /* 10062985 mov dword ptr [0x1007642c], eax */
  w32((uint32_t)(0x1007642c), (EAX));
  /* 1006298a call 0x10062790 */
  push32(0x1006298fu); f_10062790();
  /* 1006298f push 0x100704a8 */
  push32((uint32_t)(0x100704a8u));
  /* 10062994 mov dword ptr [0x10076430], eax */
  w32((uint32_t)(0x10076430), (EAX));
  /* 10062999 call 0x10062790 */
  push32(0x1006299eu); f_10062790();
  /* 1006299e push 0x10070498 */
  push32((uint32_t)(0x10070498u));
  /* 100629a3 mov dword ptr [0x10076448], eax */
  w32((uint32_t)(0x10076448), (EAX));
  /* 100629a8 call 0x10062790 */
  push32(0x100629adu); f_10062790();
  /* 100629ad push 0x10070488 */
  push32((uint32_t)(0x10070488u));
  /* 100629b2 mov dword ptr [0x1007644c], eax */
  w32((uint32_t)(0x1007644c), (EAX));
  /* 100629b7 call 0x10062790 */
  push32(0x100629bcu); f_10062790();
  /* 100629bc push 0x1007047c */
  push32((uint32_t)(0x1007047cu));
  /* 100629c1 mov dword ptr [0x10076450], eax */
  w32((uint32_t)(0x10076450), (EAX));
  /* 100629c6 call 0x10062790 */
  push32(0x100629cbu); f_10062790();
  /* 100629cb push 0x1007046c */
  push32((uint32_t)(0x1007046cu));
  /* 100629d0 mov dword ptr [0x10076454], eax */
  w32((uint32_t)(0x10076454), (EAX));
  /* 100629d5 call 0x10062790 */
  push32(0x100629dau); f_10062790();
  /* 100629da push 0x10070460 */
  push32((uint32_t)(0x10070460u));
  /* 100629df mov dword ptr [0x10076458], eax */
  w32((uint32_t)(0x10076458), (EAX));
  /* 100629e4 call 0x10062790 */
  push32(0x100629e9u); f_10062790();
  /* 100629e9 push 0x10070450 */
  push32((uint32_t)(0x10070450u));
  /* 100629ee mov dword ptr [0x10076474], eax */
  w32((uint32_t)(0x10076474), (EAX));
  /* 100629f3 call 0x10062790 */
  push32(0x100629f8u); f_10062790();
  /* 100629f8 push 0x10070448 */
  push32((uint32_t)(0x10070448u));
  /* 100629fd mov dword ptr [0x1007645c], eax */
  w32((uint32_t)(0x1007645c), (EAX));
  /* 10062a02 call 0x10062790 */
  push32(0x10062a07u); f_10062790();
  /* 10062a07 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10062a0a mov dword ptr [0x10076460], eax */
  w32((uint32_t)(0x10076460), (EAX));
  /* 10062a0f push 0x10070438 */
  push32((uint32_t)(0x10070438u));
  /* 10062a14 call 0x10062790 */
  push32(0x10062a19u); f_10062790();
  /* 10062a19 push 0x10070428 */
  push32((uint32_t)(0x10070428u));
  /* 10062a1e mov dword ptr [0x10076464], eax */
  w32((uint32_t)(0x10076464), (EAX));
  /* 10062a23 call 0x10062790 */
  push32(0x10062a28u); f_10062790();
  /* 10062a28 push 0x10070418 */
  push32((uint32_t)(0x10070418u));
  /* 10062a2d mov dword ptr [0x10076468], eax */
  w32((uint32_t)(0x10076468), (EAX));
  /* 10062a32 call 0x10062790 */
  push32(0x10062a37u); f_10062790();
  /* 10062a37 push 0x1007040c */
  push32((uint32_t)(0x1007040cu));
  /* 10062a3c mov dword ptr [0x1007646c], eax */
  w32((uint32_t)(0x1007646c), (EAX));
  /* 10062a41 call 0x10062790 */
  push32(0x10062a46u); f_10062790();
  /* 10062a46 push 0x10070404 */
  push32((uint32_t)(0x10070404u));
  /* 10062a4b mov dword ptr [0x10076470], eax */
  w32((uint32_t)(0x10076470), (EAX));
  /* 10062a50 call 0x10062790 */
  push32(0x10062a55u); f_10062790();
  /* 10062a55 push 0x100703f4 */
  push32((uint32_t)(0x100703f4u));
  /* 10062a5a mov dword ptr [0x10076478], eax */
  w32((uint32_t)(0x10076478), (EAX));
  /* 10062a5f call 0x10062790 */
  push32(0x10062a64u); f_10062790();
  /* 10062a64 push 0x100703e4 */
  push32((uint32_t)(0x100703e4u));
  /* 10062a69 mov dword ptr [0x1007647c], eax */
  w32((uint32_t)(0x1007647c), (EAX));
  /* 10062a6e call 0x10062790 */
  push32(0x10062a73u); f_10062790();
  /* 10062a73 push 0x100703d4 */
  push32((uint32_t)(0x100703d4u));
  /* 10062a78 mov dword ptr [0x10076480], eax */
  w32((uint32_t)(0x10076480), (EAX));
  /* 10062a7d call 0x10062790 */
  push32(0x10062a82u); f_10062790();
  /* 10062a82 push 0x100703c4 */
  push32((uint32_t)(0x100703c4u));
  /* 10062a87 mov dword ptr [0x10076484], eax */
  w32((uint32_t)(0x10076484), (EAX));
  /* 10062a8c call 0x10062790 */
  push32(0x10062a91u); f_10062790();
  /* 10062a91 push 0x100703b8 */
  push32((uint32_t)(0x100703b8u));
  /* 10062a96 mov dword ptr [0x10076488], eax */
  w32((uint32_t)(0x10076488), (EAX));
  /* 10062a9b call 0x10062790 */
  push32(0x10062aa0u); f_10062790();
  /* 10062aa0 push 0x100703ac */
  push32((uint32_t)(0x100703acu));
  /* 10062aa5 mov dword ptr [0x1007648c], eax */
  w32((uint32_t)(0x1007648c), (EAX));
  /* 10062aaa call 0x10062790 */
  push32(0x10062aafu); f_10062790();
  /* 10062aaf push 0x1007039c */
  push32((uint32_t)(0x1007039cu));
  /* 10062ab4 mov dword ptr [0x10076490], eax */
  w32((uint32_t)(0x10076490), (EAX));
  /* 10062ab9 call 0x10062790 */
  push32(0x10062abeu); f_10062790();
  /* 10062abe push 0x10070390 */
  push32((uint32_t)(0x10070390u));
  /* 10062ac3 mov dword ptr [0x10076494], eax */
  w32((uint32_t)(0x10076494), (EAX));
  /* 10062ac8 call 0x10062790 */
  push32(0x10062acdu); f_10062790();
  /* 10062acd push 0x10070384 */
  push32((uint32_t)(0x10070384u));
  /* 10062ad2 mov dword ptr [0x10076498], eax */
  w32((uint32_t)(0x10076498), (EAX));
  /* 10062ad7 call 0x10062790 */
  push32(0x10062adcu); f_10062790();
  /* 10062adc push 0x10070378 */
  push32((uint32_t)(0x10070378u));
  /* 10062ae1 mov dword ptr [0x1007649c], eax */
  w32((uint32_t)(0x1007649c), (EAX));
  /* 10062ae6 call 0x10062790 */
  push32(0x10062aebu); f_10062790();
  /* 10062aeb push 0x1007036c */
  push32((uint32_t)(0x1007036cu));
  /* 10062af0 mov dword ptr [0x100761d0], eax */
  w32((uint32_t)(0x100761d0), (EAX));
  /* 10062af5 call 0x10062790 */
  push32(0x10062afau); f_10062790();
  /* 10062afa add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10062afd mov dword ptr [0x100764a0], eax */
  w32((uint32_t)(0x100764a0), (EAX));
  /* 10062b02 push 0x10070360 */
  push32((uint32_t)(0x10070360u));
  /* 10062b07 call 0x10062790 */
  push32(0x10062b0cu); f_10062790();
  /* 10062b0c push 0x10070354 */
  push32((uint32_t)(0x10070354u));
  /* 10062b11 mov dword ptr [0x100764a4], eax */
  w32((uint32_t)(0x100764a4), (EAX));
  /* 10062b16 call 0x10062790 */
  push32(0x10062b1bu); f_10062790();
  /* 10062b1b push 0x10070344 */
  push32((uint32_t)(0x10070344u));
  /* 10062b20 mov dword ptr [0x100764a8], eax */
  w32((uint32_t)(0x100764a8), (EAX));
  /* 10062b25 call 0x10062790 */
  push32(0x10062b2au); f_10062790();
  /* 10062b2a push 0x10070338 */
  push32((uint32_t)(0x10070338u));
  /* 10062b2f mov dword ptr [0x100764ac], eax */
  w32((uint32_t)(0x100764ac), (EAX));
  /* 10062b34 call 0x10062790 */
  push32(0x10062b39u); f_10062790();
  /* 10062b39 push 0x1007032c */
  push32((uint32_t)(0x1007032cu));
  /* 10062b3e mov dword ptr [0x100764b0], eax */
  w32((uint32_t)(0x100764b0), (EAX));
  /* 10062b43 call 0x10062790 */
  push32(0x10062b48u); f_10062790();
  /* 10062b48 mov dword ptr [0x100764b4], eax */
  w32((uint32_t)(0x100764b4), (EAX));
  /* 10062b4d push 0x1007031c */
  push32((uint32_t)(0x1007031cu));
  /* 10062b52 call 0x10062790 */
  push32(0x10062b57u); f_10062790();
  /* 10062b57 push 0x1007030c */
  push32((uint32_t)(0x1007030cu));
  /* 10062b5c mov dword ptr [0x100764b8], eax */
  w32((uint32_t)(0x100764b8), (EAX));
  /* 10062b61 call 0x10062790 */
  push32(0x10062b66u); f_10062790();
  /* 10062b66 push 0x10070300 */
  push32((uint32_t)(0x10070300u));
  /* 10062b6b mov dword ptr [0x100764bc], eax */
  w32((uint32_t)(0x100764bc), (EAX));
  /* 10062b70 call 0x10062790 */
  push32(0x10062b75u); f_10062790();
  /* 10062b75 push 0x100702f8 */
  push32((uint32_t)(0x100702f8u));
  /* 10062b7a mov dword ptr [0x100764c0], eax */
  w32((uint32_t)(0x100764c0), (EAX));
  /* 10062b7f call 0x10062790 */
  push32(0x10062b84u); f_10062790();
  /* 10062b84 push 0x100702e8 */
  push32((uint32_t)(0x100702e8u));
  /* 10062b89 mov dword ptr [0x100764c4], eax */
  w32((uint32_t)(0x100764c4), (EAX));
  /* 10062b8e call 0x10062790 */
  push32(0x10062b93u); f_10062790();
  /* 10062b93 push 0x100702e0 */
  push32((uint32_t)(0x100702e0u));
  /* 10062b98 mov dword ptr [0x100764c8], eax */
  w32((uint32_t)(0x100764c8), (EAX));
  /* 10062b9d call 0x10062790 */
  push32(0x10062ba2u); f_10062790();
  /* 10062ba2 push 0x100702d4 */
  push32((uint32_t)(0x100702d4u));
  /* 10062ba7 mov dword ptr [0x100764cc], eax */
  w32((uint32_t)(0x100764cc), (EAX));
  /* 10062bac call 0x10062790 */
  push32(0x10062bb1u); f_10062790();
  /* 10062bb1 push 0x100702cc */
  push32((uint32_t)(0x100702ccu));
  /* 10062bb6 mov dword ptr [0x100764d0], eax */
  w32((uint32_t)(0x100764d0), (EAX));
  /* 10062bbb call 0x10062790 */
  push32(0x10062bc0u); f_10062790();
  /* 10062bc0 push 0x100702b8 */
  push32((uint32_t)(0x100702b8u));
  /* 10062bc5 mov dword ptr [0x100764d4], eax */
  w32((uint32_t)(0x100764d4), (EAX));
  /* 10062bca call 0x10062790 */
  push32(0x10062bcfu); f_10062790();
  /* 10062bcf push 0x100702ac */
  push32((uint32_t)(0x100702acu));
  /* 10062bd4 mov dword ptr [0x10073628], eax */
  w32((uint32_t)(0x10073628), (EAX));
  /* 10062bd9 call 0x10062790 */
  push32(0x10062bdeu); f_10062790();
  /* 10062bde push 0x100702a0 */
  push32((uint32_t)(0x100702a0u));
  /* 10062be3 mov dword ptr [0x100764e0], eax */
  w32((uint32_t)(0x100764e0), (EAX));
  /* 10062be8 call 0x10062790 */
  push32(0x10062bedu); f_10062790();
  /* 10062bed add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10062bf0 mov dword ptr [0x100764dc], eax */
  w32((uint32_t)(0x100764dc), (EAX));
  /* 10062bf5 push 0x1007028c */
  push32((uint32_t)(0x1007028cu));
  /* 10062bfa call 0x10062790 */
  push32(0x10062bffu); f_10062790();
  /* 10062bff push 0x1007027c */
  push32((uint32_t)(0x1007027cu));
  /* 10062c04 mov dword ptr [0x100764e4], eax */
  w32((uint32_t)(0x100764e4), (EAX));
  /* 10062c09 call 0x10062790 */
  push32(0x10062c0eu); f_10062790();
  /* 10062c0e push 0x1007026c */
  push32((uint32_t)(0x1007026cu));
  /* 10062c13 mov dword ptr [0x100764e8], eax */
  w32((uint32_t)(0x100764e8), (EAX));
  /* 10062c18 call 0x10062790 */
  push32(0x10062c1du); f_10062790();
  /* 10062c1d push 0x1007025c */
  push32((uint32_t)(0x1007025cu));
  /* 10062c22 mov dword ptr [0x100764ec], eax */
  w32((uint32_t)(0x100764ec), (EAX));
  /* 10062c27 call 0x10062790 */
  push32(0x10062c2cu); f_10062790();
  /* 10062c2c push 0x10070250 */
  push32((uint32_t)(0x10070250u));
  /* 10062c31 mov dword ptr [0x10076438], eax */
  w32((uint32_t)(0x10076438), (EAX));
  /* 10062c36 call 0x10062790 */
  push32(0x10062c3bu); f_10062790();
  /* 10062c3b push 0x10070240 */
  push32((uint32_t)(0x10070240u));
  /* 10062c40 mov dword ptr [0x10076434], eax */
  w32((uint32_t)(0x10076434), (EAX));
  /* 10062c45 call 0x10062790 */
  push32(0x10062c4au); f_10062790();
  /* 10062c4a push 0x1007022c */
  push32((uint32_t)(0x1007022cu));
  /* 10062c4f mov dword ptr [0x1007643c], eax */
  w32((uint32_t)(0x1007643c), (EAX));
  /* 10062c54 call 0x10062790 */
  push32(0x10062c59u); f_10062790();
  /* 10062c59 push 0x10070214 */
  push32((uint32_t)(0x10070214u));
  /* 10062c5e mov dword ptr [0x10076440], eax */
  w32((uint32_t)(0x10076440), (EAX));
  /* 10062c63 call 0x10062790 */
  push32(0x10062c68u); f_10062790();
  /* 10062c68 push 0x10070204 */
  push32((uint32_t)(0x10070204u));
  /* 10062c6d mov dword ptr [0x10076444], eax */
  w32((uint32_t)(0x10076444), (EAX));
  /* 10062c72 call 0x10062790 */
  push32(0x10062c77u); f_10062790();
  /* 10062c77 push 0x100701ec */
  push32((uint32_t)(0x100701ecu));
  /* 10062c7c mov dword ptr [0x10076508], eax */
  w32((uint32_t)(0x10076508), (EAX));
  /* 10062c81 call 0x10062790 */
  push32(0x10062c86u); f_10062790();
  /* 10062c86 push 0x100701dc */
  push32((uint32_t)(0x100701dcu));
  /* 10062c8b mov dword ptr [0x10076538], eax */
  w32((uint32_t)(0x10076538), (EAX));
  /* 10062c90 call 0x10062790 */
  push32(0x10062c95u); f_10062790();
  /* 10062c95 push 0x100701d4 */
  push32((uint32_t)(0x100701d4u));
  /* 10062c9a mov dword ptr [0x10076500], eax */
  w32((uint32_t)(0x10076500), (EAX));
  /* 10062c9f call 0x10062790 */
  push32(0x10062ca4u); f_10062790();
  /* 10062ca4 push 0x100701c4 */
  push32((uint32_t)(0x100701c4u));
  /* 10062ca9 mov dword ptr [0x1007650c], eax */
  w32((uint32_t)(0x1007650c), (EAX));
  /* 10062cae call 0x10062790 */
  push32(0x10062cb3u); f_10062790();
  /* 10062cb3 push 0x100701b8 */
  push32((uint32_t)(0x100701b8u));
  /* 10062cb8 mov dword ptr [0x10076558], eax */
  w32((uint32_t)(0x10076558), (EAX));
  /* 10062cbd call 0x10062790 */
  push32(0x10062cc2u); f_10062790();
  /* 10062cc2 push 0x100701b0 */
  push32((uint32_t)(0x100701b0u));
  /* 10062cc7 mov dword ptr [0x100764f0], eax */
  w32((uint32_t)(0x100764f0), (EAX));
  /* 10062ccc call 0x10062790 */
  push32(0x10062cd1u); f_10062790();
  /* 10062cd1 push 0x100701a4 */
  push32((uint32_t)(0x100701a4u));
  /* 10062cd6 mov dword ptr [0x100764f4], eax */
  w32((uint32_t)(0x100764f4), (EAX));
  /* 10062cdb call 0x10062790 */
  push32(0x10062ce0u); f_10062790();
  /* 10062ce0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10062ce3 mov dword ptr [0x100764f8], eax */
  w32((uint32_t)(0x100764f8), (EAX));
  /* 10062ce8 push 0x10070194 */
  push32((uint32_t)(0x10070194u));
  /* 10062ced call 0x10062790 */
  push32(0x10062cf2u); f_10062790();
  /* 10062cf2 push 0x10070180 */
  push32((uint32_t)(0x10070180u));
  /* 10062cf7 mov dword ptr [0x100764fc], eax */
  w32((uint32_t)(0x100764fc), (EAX));
  /* 10062cfc call 0x10062790 */
  push32(0x10062d01u); f_10062790();
  /* 10062d01 push 0x10070164 */
  push32((uint32_t)(0x10070164u));
  /* 10062d06 mov dword ptr [0x10076504], eax */
  w32((uint32_t)(0x10076504), (EAX));
  /* 10062d0b call 0x10062790 */
  push32(0x10062d10u); f_10062790();
  /* 10062d10 push 0x10070150 */
  push32((uint32_t)(0x10070150u));
  /* 10062d15 mov dword ptr [0x10076510], eax */
  w32((uint32_t)(0x10076510), (EAX));
  /* 10062d1a call 0x10062790 */
  push32(0x10062d1fu); f_10062790();
  /* 10062d1f push 0x10070144 */
  push32((uint32_t)(0x10070144u));
  /* 10062d24 mov dword ptr [0x10076514], eax */
  w32((uint32_t)(0x10076514), (EAX));
  /* 10062d29 call 0x10062790 */
  push32(0x10062d2eu); f_10062790();
  /* 10062d2e push 0x10070134 */
  push32((uint32_t)(0x10070134u));
  /* 10062d33 mov dword ptr [0x1007654c], eax */
  w32((uint32_t)(0x1007654c), (EAX));
  /* 10062d38 call 0x10062790 */
  push32(0x10062d3du); f_10062790();
  /* 10062d3d push 0x10070128 */
  push32((uint32_t)(0x10070128u));
  /* 10062d42 mov dword ptr [0x10076550], eax */
  w32((uint32_t)(0x10076550), (EAX));
  /* 10062d47 call 0x10062790 */
  push32(0x10062d4cu); f_10062790();
  /* 10062d4c push 0x1007011c */
  push32((uint32_t)(0x1007011cu));
  /* 10062d51 mov dword ptr [0x10076554], eax */
  w32((uint32_t)(0x10076554), (EAX));
  /* 10062d56 call 0x10062790 */
  push32(0x10062d5bu); f_10062790();
  /* 10062d5b push 0x10070104 */
  push32((uint32_t)(0x10070104u));
  /* 10062d60 mov dword ptr [0x1007655c], eax */
  w32((uint32_t)(0x1007655c), (EAX));
  /* 10062d65 call 0x10062790 */
  push32(0x10062d6au); f_10062790();
  /* 10062d6a push 0x100700e8 */
  push32((uint32_t)(0x100700e8u));
  /* 10062d6f mov dword ptr [0x10076518], eax */
  w32((uint32_t)(0x10076518), (EAX));
  /* 10062d74 call 0x10062790 */
  push32(0x10062d79u); f_10062790();
  /* 10062d79 push 0x100700cc */
  push32((uint32_t)(0x100700ccu));
  /* 10062d7e mov dword ptr [0x1007651c], eax */
  w32((uint32_t)(0x1007651c), (EAX));
  /* 10062d83 call 0x10062790 */
  push32(0x10062d88u); f_10062790();
  /* 10062d88 push 0x100700b4 */
  push32((uint32_t)(0x100700b4u));
  /* 10062d8d mov dword ptr [0x10076520], eax */
  w32((uint32_t)(0x10076520), (EAX));
  /* 10062d92 call 0x10062790 */
  push32(0x10062d97u); f_10062790();
  /* 10062d97 push 0x1007009c */
  push32((uint32_t)(0x1007009cu));
  /* 10062d9c mov dword ptr [0x10076524], eax */
  w32((uint32_t)(0x10076524), (EAX));
  /* 10062da1 call 0x10062790 */
  push32(0x10062da6u); f_10062790();
  /* 10062da6 push 0x10070090 */
  push32((uint32_t)(0x10070090u));
  /* 10062dab mov dword ptr [0x10076528], eax */
  w32((uint32_t)(0x10076528), (EAX));
  /* 10062db0 call 0x10062790 */
  push32(0x10062db5u); f_10062790();
  /* 10062db5 push 0x10070084 */
  push32((uint32_t)(0x10070084u));
  /* 10062dba mov dword ptr [0x1007652c], eax */
  w32((uint32_t)(0x1007652c), (EAX));
  /* 10062dbf call 0x10062790 */
  push32(0x10062dc4u); f_10062790();
  /* 10062dc4 push 0x10070074 */
  push32((uint32_t)(0x10070074u));
  /* 10062dc9 mov dword ptr [0x10076530], eax */
  w32((uint32_t)(0x10076530), (EAX));
  /* 10062dce call 0x10062790 */
  push32(0x10062dd3u); f_10062790();
  /* 10062dd3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10062dd6 mov dword ptr [0x10076534], eax */
  w32((uint32_t)(0x10076534), (EAX));
  /* 10062ddb push 0x10070068 */
  push32((uint32_t)(0x10070068u));
  /* 10062de0 call 0x10062790 */
  push32(0x10062de5u); f_10062790();
  /* 10062de5 push 0x1007005c */
  push32((uint32_t)(0x1007005cu));
  /* 10062dea mov dword ptr [0x1007653c], eax */
  w32((uint32_t)(0x1007653c), (EAX));
  /* 10062def call 0x10062790 */
  push32(0x10062df4u); f_10062790();
  /* 10062df4 push 0x10070050 */
  push32((uint32_t)(0x10070050u));
  /* 10062df9 mov dword ptr [0x10076540], eax */
  w32((uint32_t)(0x10076540), (EAX));
  /* 10062dfe call 0x10062790 */
  push32(0x10062e03u); f_10062790();
  /* 10062e03 push 0x10070040 */
  push32((uint32_t)(0x10070040u));
  /* 10062e08 mov dword ptr [0x10076560], eax */
  w32((uint32_t)(0x10076560), (EAX));
  /* 10062e0d call 0x10062790 */
  push32(0x10062e12u); f_10062790();
  /* 10062e12 push 0x10070034 */
  push32((uint32_t)(0x10070034u));
  /* 10062e17 mov dword ptr [0x10076564], eax */
  w32((uint32_t)(0x10076564), (EAX));
  /* 10062e1c call 0x10062790 */
  push32(0x10062e21u); f_10062790();
  /* 10062e21 push 0x10070028 */
  push32((uint32_t)(0x10070028u));
  /* 10062e26 mov dword ptr [0x10076568], eax */
  w32((uint32_t)(0x10076568), (EAX));
  /* 10062e2b call 0x10062790 */
  push32(0x10062e30u); f_10062790();
  /* 10062e30 push 0x1007001c */
  push32((uint32_t)(0x1007001cu));
  /* 10062e35 mov dword ptr [0x1007656c], eax */
  w32((uint32_t)(0x1007656c), (EAX));
  /* 10062e3a call 0x10062790 */
  push32(0x10062e3fu); f_10062790();
  /* 10062e3f push 0x1007000c */
  push32((uint32_t)(0x1007000cu));
  /* 10062e44 mov dword ptr [0x10076570], eax */
  w32((uint32_t)(0x10076570), (EAX));
  /* 10062e49 call 0x10062790 */
  push32(0x10062e4eu); f_10062790();
  /* 10062e4e push 0x1006fffc */
  push32((uint32_t)(0x1006fffcu));
  /* 10062e53 mov dword ptr [0x10076574], eax */
  w32((uint32_t)(0x10076574), (EAX));
  /* 10062e58 call 0x10062790 */
  push32(0x10062e5du); f_10062790();
  /* 10062e5d push 0x1006ffe8 */
  push32((uint32_t)(0x1006ffe8u));
  /* 10062e62 mov dword ptr [0x1007657c], eax */
  w32((uint32_t)(0x1007657c), (EAX));
  /* 10062e67 call 0x10062790 */
  push32(0x10062e6cu); f_10062790();
  /* 10062e6c mov dword ptr [0x10076578], eax */
  w32((uint32_t)(0x10076578), (EAX));
  /* 10062e71 push 0x1006ffd0 */
  push32((uint32_t)(0x1006ffd0u));
  /* 10062e76 call 0x10062790 */
  push32(0x10062e7bu); f_10062790();
  /* 10062e7b push 0x1006ffb8 */
  push32((uint32_t)(0x1006ffb8u));
  /* 10062e80 mov dword ptr [0x100738c0], eax */
  w32((uint32_t)(0x100738c0), (EAX));
  /* 10062e85 call 0x10062790 */
  push32(0x10062e8au); f_10062790();
  /* 10062e8a push 0x1006ffa8 */
  push32((uint32_t)(0x1006ffa8u));
  /* 10062e8f mov dword ptr [0x10073720], eax */
  w32((uint32_t)(0x10073720), (EAX));
  /* 10062e94 call 0x10062790 */
  push32(0x10062e99u); f_10062790();
  /* 10062e99 push 0x1006ff98 */
  push32((uint32_t)(0x1006ff98u));
  /* 10062e9e mov dword ptr [0x10076580], eax */
  w32((uint32_t)(0x10076580), (EAX));
  /* 10062ea3 call 0x10062790 */
  push32(0x10062ea8u); f_10062790();
  /* 10062ea8 push 0x1006ff88 */
  push32((uint32_t)(0x1006ff88u));
  /* 10062ead mov dword ptr [0x10076544], eax */
  w32((uint32_t)(0x10076544), (EAX));
  /* 10062eb2 call 0x10062790 */
  push32(0x10062eb7u); f_10062790();
  /* 10062eb7 push 0x1006ff78 */
  push32((uint32_t)(0x1006ff78u));
  /* 10062ebc mov dword ptr [0x10076548], eax */
  w32((uint32_t)(0x10076548), (EAX));
  /* 10062ec1 call 0x10062790 */
  push32(0x10062ec6u); f_10062790();
  /* 10062ec6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10062ec9 mov dword ptr [0x100762a0], eax */
  w32((uint32_t)(0x100762a0), (EAX));
  /* 10062ece push 0x1006ff68 */
  push32((uint32_t)(0x1006ff68u));
  /* 10062ed3 call 0x10062790 */
  push32(0x10062ed8u); f_10062790();
  /* 10062ed8 push 0x1006ff58 */
  push32((uint32_t)(0x1006ff58u));
  /* 10062edd mov dword ptr [0x10076258], eax */
  w32((uint32_t)(0x10076258), (EAX));
  /* 10062ee2 call 0x10062790 */
  push32(0x10062ee7u); f_10062790();
  /* 10062ee7 push 0x1006ff48 */
  push32((uint32_t)(0x1006ff48u));
  /* 10062eec mov dword ptr [0x10075fb0], eax */
  w32((uint32_t)(0x10075fb0), (EAX));
  /* 10062ef1 call 0x10062790 */
  push32(0x10062ef6u); f_10062790();
  /* 10062ef6 push 0x1006ff38 */
  push32((uint32_t)(0x1006ff38u));
  /* 10062efb mov dword ptr [0x10073920], eax */
  w32((uint32_t)(0x10073920), (EAX));
  /* 10062f00 call 0x10062790 */
  push32(0x10062f05u); f_10062790();
  /* 10062f05 push 0x1006ff24 */
  push32((uint32_t)(0x1006ff24u));
  /* 10062f0a mov dword ptr [0x10076238], eax */
  w32((uint32_t)(0x10076238), (EAX));
  /* 10062f0f call 0x10062790 */
  push32(0x10062f14u); f_10062790();
  /* 10062f14 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10062f17 mov dword ptr [0x10073938], eax */
  w32((uint32_t)(0x10073938), (EAX));
L_10062f1c:;
  /* 10062f1c mov eax, 1 */
  EAX = (0x1u);
  /* 10062f21 ret 0xc */
  ESPCHK(0x100627f0u, _esp0);
  ESP += 16; return;
}

/* FUN_10002f30 @ 0x10062f30 (34 bytes, 10 insns) */
void f_10062f30(void) {
  FTRACE(0x10062f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10062f30 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10062f34 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10062f38 push eax */
  push32((uint32_t)(EAX));
  /* 10062f39 push ecx */
  push32((uint32_t)(ECX));
  /* 10062f3a push 0x1007065c */
  push32((uint32_t)(0x1007065cu));
  /* 10062f3f push 0x10073798 */
  push32((uint32_t)(0x10073798u));
  /* 10062f44 call 0x10066e70 */
  push32(0x10062f49u); f_10066e70();
  /* 10062f49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10062f4c mov eax, 0x10073798 */
  EAX = (0x10073798u);
  /* 10062f51 ret  */
  ESPCHK(0x10062f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f60 @ 0x10062f60 (45 bytes, 16 insns) */
void f_10062f60(void) {
  FTRACE(0x10062f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10062f60 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10062f64 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10062f68 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10062f6d push eax */
  push32((uint32_t)(EAX));
  /* 10062f6e push ecx */
  push32((uint32_t)(ECX));
  /* 10062f6f call 0x10062740 */
  push32(0x10062f74u); f_10062740();
  /* 10062f74 mov ecx, eax */
  ECX = (EAX);
  /* 10062f76 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10062f7a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10062f7d lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10062f80 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10062f83 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10062f86 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10062f89 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10062f8a idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10062f8c ret  */
  ESPCHK(0x10062f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f90 @ 0x10062f90 (171 bytes, 77 insns) */
void f_10062f90(void) {
  FTRACE(0x10062f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10062f90 push ebx */
  push32((uint32_t)(EBX));
  /* 10062f91 push ebp */
  push32((uint32_t)(EBP));
  /* 10062f92 push esi */
  push32((uint32_t)(ESI));
  /* 10062f93 push edi */
  push32((uint32_t)(EDI));
  /* 10062f94 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 10062f98 push edi */
  push32((uint32_t)(EDI));
  /* 10062f99 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10062f9fu);
  /* 10062f9f mov esi, dword ptr [esp + 0x1c] */
  ESI = (r32((uint32_t)(ESP + 0x1c)));
  /* 10062fa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10062fa6 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10062fa8 jl 0x10062fb1 */
  if ((C.sf!=C.of)) goto L_10062fb1;
  /* 10062faa pop edi */
  EDI = (pop32());
  /* 10062fab pop esi */
  ESI = (pop32());
  /* 10062fac pop ebp */
  EBP = (pop32());
  /* 10062fad mov al, 1 */
  AL = (0x1u);
  /* 10062faf pop ebx */
  EBX = (pop32());
  /* 10062fb0 ret  */
  ESPCHK(0x10062f90u, _esp0);
  ESP += 4; return;
L_10062fb1:;
  /* 10062fb1 push edi */
  push32((uint32_t)(EDI));
  /* 10062fb2 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10062fb8u);
  /* 10062fb8 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 10062fbc sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10062fbe push esi */
  push32((uint32_t)(ESI));
  /* 10062fbf push edi */
  push32((uint32_t)(EDI));
  /* 10062fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10062fc1 mov dword ptr [esp + 0x24], esi */
  w32((uint32_t)(ESP + 0x24), (ESI));
  /* 10062fc5 call 0x10062f60 */
  push32(0x10062fcau); f_10062f60();
  /* 10062fca push ebp */
  push32((uint32_t)(EBP));
  /* 10062fcb mov ebx, eax */
  EBX = (EAX);
  /* 10062fcd call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10062fd3u);
  /* 10062fd3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10062fd6 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10062fd8 jle 0x10063034 */
  if ((C.zf||C.sf!=C.of)) goto L_10063034;
  /* 10062fda cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10062fe0 jle 0x10063034 */
  if ((C.zf||C.sf!=C.of)) goto L_10063034;
  /* 10062fe2 mov eax, 0x45e7b273 */
  EAX = (0x45e7b273u);
  /* 10062fe7 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10062fe9 imul ebx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(EBX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10062feb sar edx, 0xc */
  EDX = (sh_sar((uint32_t)(EDX), (0xcu)&0x1f, 32));
  /* 10062fee mov eax, edx */
  EAX = (EDX);
  /* 10062ff0 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 10062ff3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10062ff5 mov ebx, edx */
  EBX = (EDX);
L_10062ff7:;
  /* 10062ff7 cmp ebx, 0xf */
  { uint32_t _a=(EBX),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10062ffa mov eax, 0xf */
  EAX = (0xfu);
  /* 10062fff jg 0x10063003 */
  if ((!C.zf&&C.sf==C.of)) goto L_10063003;
  /* 10063001 mov eax, ebx */
  EAX = (EBX);
L_10063003:;
  /* 10063003 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10063005 jge 0x10063016 */
  if ((C.sf==C.of)) goto L_10063016;
  /* 10063007 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10063009 push ebp */
  push32((uint32_t)(EBP));
  /* 1006300a push edi */
  push32((uint32_t)(EDI));
  /* 1006300b call 0x10062610 */
  push32(0x10063010u); f_10062610();
  /* 10063010 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063013 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10063014 jmp 0x10062ff7 */
  goto L_10062ff7;
L_10063016:;
  /* 10063016 mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1006301a push ecx */
  push32((uint32_t)(ECX));
  /* 1006301b push edi */
  push32((uint32_t)(EDI));
  /* 1006301c push ebp */
  push32((uint32_t)(EBP));
  /* 1006301d call 0x10062f60 */
  push32(0x10063022u); f_10062f60();
  /* 10063022 push eax */
  push32((uint32_t)(EAX));
  /* 10063023 push edi */
  push32((uint32_t)(EDI));
  /* 10063024 push ebp */
  push32((uint32_t)(EBP));
  /* 10063025 call 0x10062610 */
  push32(0x1006302au); f_10062610();
  /* 1006302a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006302d mov al, 1 */
  AL = (0x1u);
  /* 1006302f pop edi */
  EDI = (pop32());
  /* 10063030 pop esi */
  ESI = (pop32());
  /* 10063031 pop ebp */
  EBP = (pop32());
  /* 10063032 pop ebx */
  EBX = (pop32());
  /* 10063033 ret  */
  ESPCHK(0x10062f90u, _esp0);
  ESP += 4; return;
L_10063034:;
  /* 10063034 pop edi */
  EDI = (pop32());
  /* 10063035 pop esi */
  ESI = (pop32());
  /* 10063036 pop ebp */
  EBP = (pop32());
  /* 10063037 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 10063039 pop ebx */
  EBX = (pop32());
  /* 1006303a ret  */
  ESPCHK(0x10062f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003040 @ 0x10063040 (369 bytes, 82 insns) */
void f_10063040(void) {
  FTRACE(0x10063040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10063040 push ebx */
  push32((uint32_t)(EBX));
  /* 10063041 push esi */
  push32((uint32_t)(ESI));
  /* 10063042 call dword ptr [0x100764f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f0))), 0x10063048u);
  /* 10063048 push 0x10076180 */
  push32((uint32_t)(0x10076180u));
  /* 1006304d mov dword ptr [0x100762a4], eax */
  w32((uint32_t)(0x100762a4), (EAX));
  /* 10063052 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10063058u);
  /* 10063058 mov ebx, 1 */
  EBX = (0x1u);
  /* 1006305d mov esi, eax */
  ESI = (EAX);
  /* 1006305f push ebx */
  push32((uint32_t)(EBX));
  /* 10063060 call 0x10062730 */
  push32(0x10063065u); f_10062730();
  /* 10063065 push 4 */
  push32((uint32_t)(0x4u));
  /* 10063067 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10063069 call 0x10062730 */
  push32(0x1006306eu); f_10062730();
  /* 1006306e push 5 */
  push32((uint32_t)(0x5u));
  /* 10063070 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10063072 call 0x10062730 */
  push32(0x10063077u); f_10062730();
  /* 10063077 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10063079 mov eax, dword ptr [0x100762a4] */
  EAX = (r32((uint32_t)(0x100762a4)));
  /* 1006307e push 3 */
  push32((uint32_t)(0x3u));
  /* 10063080 mov dword ptr [0x100761a0], esi */
  w32((uint32_t)(0x100761a0), (ESI));
  /* 10063086 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 10063089 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 1006308c lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 1006308f lea eax, [eax + ecx*2] */
  EAX = ((uint32_t)(EAX + ECX*2));
  /* 10063092 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10063095 mov ecx, dword ptr [eax + 0x10073ae0] */
  ECX = (r32((uint32_t)(EAX + 0x10073ae0)));
  /* 1006309b lea edx, [eax + 0x10073950] */
  EDX = ((uint32_t)(EAX + 0x10073950));
  /* 100630a1 mov dword ptr [0x100761b0], edx */
  w32((uint32_t)(0x100761b0), (EDX));
  /* 100630a7 lea edx, [eax + 0x10073ae4] */
  EDX = ((uint32_t)(EAX + 0x10073ae4));
  /* 100630ad mov dword ptr [0x100765f4], ecx */
  w32((uint32_t)(0x100765f4), (ECX));
  /* 100630b3 mov ecx, dword ptr [eax + 0x10073c74] */
  ECX = (r32((uint32_t)(EAX + 0x10073c74)));
  /* 100630b9 mov dword ptr [0x100761b4], edx */
  w32((uint32_t)(0x100761b4), (EDX));
  /* 100630bf lea edx, [eax + 0x10073c78] */
  EDX = ((uint32_t)(EAX + 0x10073c78));
  /* 100630c5 mov dword ptr [0x100765f8], ecx */
  w32((uint32_t)(0x100765f8), (ECX));
  /* 100630cb mov dword ptr [0x1007623c], edx */
  w32((uint32_t)(0x1007623c), (EDX));
  /* 100630d1 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x100630d7u);
  /* 100630d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 100630d9 mov dword ptr [0x10076280], eax */
  w32((uint32_t)(0x10076280), (EAX));
  /* 100630de call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x100630e4u);
  /* 100630e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 100630e6 mov dword ptr [0x10073610], eax */
  w32((uint32_t)(0x10073610), (EAX));
  /* 100630eb call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x100630f1u);
  /* 100630f1 push 4 */
  push32((uint32_t)(0x4u));
  /* 100630f3 mov dword ptr [0x10076370], eax */
  w32((uint32_t)(0x10076370), (EAX));
  /* 100630f8 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x100630feu);
  /* 100630fe push 5 */
  push32((uint32_t)(0x5u));
  /* 10063100 mov dword ptr [0x10073718], eax */
  w32((uint32_t)(0x10073718), (EAX));
  /* 10063105 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x1006310bu);
  /* 1006310b push ebx */
  push32((uint32_t)(EBX));
  /* 1006310c mov dword ptr [0x100760d8], eax */
  w32((uint32_t)(0x100760d8), (EAX));
  /* 10063111 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10063117u);
  /* 10063117 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006311a mov dword ptr [0x10076328], eax */
  w32((uint32_t)(0x10076328), (EAX));
  /* 1006311f call 0x10062670 */
  push32(0x10063124u); f_10062670();
  /* 10063124 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10063126 jne 0x10063132 */
  if (!C.zf) goto L_10063132;
  /* 10063128 mov dword ptr [0x1006f248], 4 */
  w32((uint32_t)(0x1006f248), (0x4u));
L_10063132:;
  /* 10063132 push 0x1006f114 */
  push32((uint32_t)(0x1006f114u));
  /* 10063137 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10063139 call dword ptr [0x100764fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764fc))), 0x1006313fu);
  /* 1006313f push 0x10076588 */
  push32((uint32_t)(0x10076588u));
  /* 10063144 call 0x10062720 */
  push32(0x10063149u); f_10062720();
  /* 10063149 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1006314b push 0x1006f244 */
  push32((uint32_t)(0x1006f244u));
  /* 10063150 call 0x10062700 */
  push32(0x10063155u); f_10062700();
  /* 10063155 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063158 mov byte ptr [0x10076178], bl */
  w8((uint32_t)(0x10076178), (BL));
  /* 1006315e mov byte ptr [0x1007617a], bl */
  w8((uint32_t)(0x1007617a), (BL));
  /* 10063164 mov byte ptr [0x1007617c], bl */
  w8((uint32_t)(0x1007617c), (BL));
  /* 1006316a mov byte ptr [0x1007617d], bl */
  w8((uint32_t)(0x1007617d), (BL));
  /* 10063170 mov byte ptr [0x10076313], bl */
  w8((uint32_t)(0x10076313), (BL));
  /* 10063176 mov byte ptr [0x10076311], bl */
  w8((uint32_t)(0x10076311), (BL));
  /* 1006317c mov byte ptr [0x10076314], bl */
  w8((uint32_t)(0x10076314), (BL));
  /* 10063182 mov byte ptr [0x10076315], bl */
  w8((uint32_t)(0x10076315), (BL));
  /* 10063188 pop esi */
  ESI = (pop32());
  /* 10063189 mov byte ptr [0x1007617b], 0 */
  w8((uint32_t)(0x1007617b), (0x0u));
  /* 10063190 mov byte ptr [0x10076179], 0 */
  w8((uint32_t)(0x10076179), (0x0u));
  /* 10063197 mov byte ptr [0x10076310], 0 */
  w8((uint32_t)(0x10076310), (0x0u));
  /* 1006319e mov byte ptr [0x10076312], 0 */
  w8((uint32_t)(0x10076312), (0x0u));
  /* 100631a5 mov dword ptr [0x1007663c], 0 */
  w32((uint32_t)(0x1007663c), (0x0u));
  /* 100631af pop ebx */
  EBX = (pop32());
  /* 100631b0 ret  */
  ESPCHK(0x10063040u, _esp0);
  ESP += 4; return;
}

/* FUN_100031c0 @ 0x100631c0 (85 bytes, 29 insns) */
void f_100631c0(void) {
  FTRACE(0x100631c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100631c0 mov eax, dword ptr [0x10075f48] */
  EAX = (r32((uint32_t)(0x10075f48)));
  /* 100631c5 push esi */
  push32((uint32_t)(ESI));
  /* 100631c6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100631c9 jg 0x10063213 */
  if ((!C.zf&&C.sf==C.of)) goto L_10063213;
  /* 100631cb push 0x10073678 */
  push32((uint32_t)(0x10073678u));
  /* 100631d0 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x100631d6u);
  /* 100631d6 mov ecx, eax */
  ECX = (EAX);
  /* 100631d8 mov eax, 0x38e38e39 */
  EAX = (0x38e38e39u);
  /* 100631dd imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100631df sar edx, 3 */
  EDX = (sh_sar((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 100631e2 mov eax, edx */
  EAX = (EDX);
  /* 100631e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100631e7 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100631ea add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100631ec mov esi, edx */
  ESI = (EDX);
  /* 100631ee je 0x10063213 */
  if (C.zf) goto L_10063213;
  /* 100631f0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100631f2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100631f4 push esi */
  push32((uint32_t)(ESI));
  /* 100631f5 push 0x100736f0 */
  push32((uint32_t)(0x100736f0u));
  /* 100631fa call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10063200u);
  /* 10063200 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10063202 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10063204 push esi */
  push32((uint32_t)(ESI));
  /* 10063205 push 0x10073630 */
  push32((uint32_t)(0x10073630u));
  /* 1006320a call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10063210u);
  /* 10063210 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10063213:;
  /* 10063213 pop esi */
  ESI = (pop32());
  /* 10063214 ret  */
  ESPCHK(0x100631c0u, _esp0);
  ESP += 4; return;
}

/* ProcessLandAI @ 0x10063220 (1 bytes, 1 insns) */
void f_10063220(void) {
  FTRACE(0x10063220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10063220 ret  */
  ESPCHK(0x10063220u, _esp0);
  ESP += 4; return;
}

/* FUN_10003230 @ 0x10063230 (157 bytes, 43 insns) */
void f_10063230(void) {
  FTRACE(0x10063230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10063230 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10063232 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10063234 push 0x10076340 */
  push32((uint32_t)(0x10076340u));
  /* 10063239 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006323fu);
  /* 1006323f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10063241 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10063243 push 0x10076348 */
  push32((uint32_t)(0x10076348u));
  /* 10063248 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006324eu);
  /* 1006324e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10063250 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10063252 push 0x10076330 */
  push32((uint32_t)(0x10076330u));
  /* 10063257 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006325du);
  /* 1006325d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1006325f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10063261 push 0x10076338 */
  push32((uint32_t)(0x10076338u));
  /* 10063266 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006326cu);
  /* 1006326c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1006326e push 0xa */
  push32((uint32_t)(0xau));
  /* 10063270 push 0x10076350 */
  push32((uint32_t)(0x10076350u));
  /* 10063275 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006327bu);
  /* 1006327b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1006327d push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1006327f push 0x10076288 */
  push32((uint32_t)(0x10076288u));
  /* 10063284 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006328au);
  /* 1006328a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006328d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1006328f push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10063291 push 0x10076270 */
  push32((uint32_t)(0x10076270u));
  /* 10063296 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006329cu);
  /* 1006329c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1006329e push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100632a0 push 0x10076278 */
  push32((uint32_t)(0x10076278u));
  /* 100632a5 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100632abu);
  /* 100632ab push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100632ad push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100632af push 0x10076290 */
  push32((uint32_t)(0x10076290u));
  /* 100632b4 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100632bau);
  /* 100632ba push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100632bc push 0xa */
  push32((uint32_t)(0xau));
  /* 100632be push 0x10076298 */
  push32((uint32_t)(0x10076298u));
  /* 100632c3 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100632c9u);
  /* 100632c9 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100632cc ret  */
  ESPCHK(0x10063230u, _esp0);
  ESP += 4; return;
}

/* FUN_100032d0 @ 0x100632d0 (79 bytes, 22 insns) */
void f_100632d0(void) {
  FTRACE(0x100632d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100632d0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100632d2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100632d4 push 0x10073900 */
  push32((uint32_t)(0x10073900u));
  /* 100632d9 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100632dfu);
  /* 100632df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100632e1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100632e3 push 0x10073908 */
  push32((uint32_t)(0x10073908u));
  /* 100632e8 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100632eeu);
  /* 100632ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100632f0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100632f2 push 0x100738f8 */
  push32((uint32_t)(0x100738f8u));
  /* 100632f7 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100632fdu);
  /* 100632fd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100632ff push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10063301 push 0x10075f68 */
  push32((uint32_t)(0x10075f68u));
  /* 10063306 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006330cu);
  /* 1006330c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1006330e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10063310 push 0x10075f58 */
  push32((uint32_t)(0x10075f58u));
  /* 10063315 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006331bu);
  /* 1006331b add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006331e ret  */
  ESPCHK(0x100632d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003320 @ 0x10063320 (64 bytes, 18 insns) */
void f_10063320(void) {
  FTRACE(0x10063320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10063320 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10063322 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10063324 push 0x10076088 */
  push32((uint32_t)(0x10076088u));
  /* 10063329 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006332fu);
  /* 1006332f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10063331 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10063333 push 0x10076090 */
  push32((uint32_t)(0x10076090u));
  /* 10063338 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006333eu);
  /* 1006333e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10063340 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10063342 push 0x10076098 */
  push32((uint32_t)(0x10076098u));
  /* 10063347 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006334du);
  /* 1006334d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1006334f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10063351 push 0x100760a0 */
  push32((uint32_t)(0x100760a0u));
  /* 10063356 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006335cu);
  /* 1006335c add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006335f ret  */
  ESPCHK(0x10063320u, _esp0);
  ESP += 4; return;
}

/* FUN_10003360 @ 0x10063360 (3787 bytes, 1079 insns) */
void f_10063360(void) {
  FTRACE(0x10063360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10063360 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10063363 push ebx */
  push32((uint32_t)(EBX));
  /* 10063364 push ebp */
  push32((uint32_t)(EBP));
  /* 10063365 push esi */
  push32((uint32_t)(ESI));
  /* 10063366 push edi */
  push32((uint32_t)(EDI));
  /* 10063367 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 1006336c push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 10063371 call dword ptr [0x10076508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076508))), 0x10063377u);
  /* 10063377 push 0 */
  push32((uint32_t)(0x0u));
  /* 10063379 call 0x10062760 */
  push32(0x1006337eu); f_10062760();
  /* 1006337e push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10063380 push 0 */
  push32((uint32_t)(0x0u));
  /* 10063382 call 0x10062640 */
  push32(0x10063387u); f_10062640();
  /* 10063387 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10063389 push 0 */
  push32((uint32_t)(0x0u));
  /* 1006338b mov dword ptr [esp + 0x40], eax */
  w32((uint32_t)(ESP + 0x40), (EAX));
  /* 1006338f call 0x10062640 */
  push32(0x10063394u); f_10062640();
  /* 10063394 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 10063396 push 0 */
  push32((uint32_t)(0x0u));
  /* 10063398 mov edi, eax */
  EDI = (EAX);
  /* 1006339a call 0x10062640 */
  push32(0x1006339fu); f_10062640();
  /* 1006339f push 0xe */
  push32((uint32_t)(0xeu));
  /* 100633a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 100633a3 mov esi, eax */
  ESI = (EAX);
  /* 100633a5 call 0x10062640 */
  push32(0x100633aau); f_10062640();
  /* 100633aa push 0x10076010 */
  push32((uint32_t)(0x10076010u));
  /* 100633af mov ebx, eax */
  EBX = (EAX);
  /* 100633b1 call dword ptr [0x1007653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007653c))), 0x100633b7u);
  /* 100633b7 sar esi, 2 */
  ESI = (sh_sar((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 100633ba and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 100633bf add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100633c1 mov dword ptr [esp + 0x50], eax */
  w32((uint32_t)(ESP + 0x50), (EAX));
  /* 100633c5 push 0x100762c8 */
  push32((uint32_t)(0x100762c8u));
  /* 100633ca lea eax, [esi + ebx*4] */
  EAX = ((uint32_t)(ESI + EBX*4));
  /* 100633cd mov dword ptr [esp + 0x5c], eax */
  w32((uint32_t)(ESP + 0x5c), (EAX));
  /* 100633d1 call dword ptr [0x10076534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076534))), 0x100633d7u);
  /* 100633d7 push 0x10075fa8 */
  push32((uint32_t)(0x10075fa8u));
  /* 100633dc mov ebx, eax */
  EBX = (EAX);
  /* 100633de call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x100633e4u);
  /* 100633e4 push 0x10075fa8 */
  push32((uint32_t)(0x10075fa8u));
  /* 100633e9 mov ebp, eax */
  EBP = (EAX);
  /* 100633eb call dword ptr [0x10076534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076534))), 0x100633f1u);
  /* 100633f1 push 0x10075fd8 */
  push32((uint32_t)(0x10075fd8u));
  /* 100633f6 mov dword ptr [esp + 0x5c], eax */
  w32((uint32_t)(ESP + 0x5c), (EAX));
  /* 100633fa call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10063400u);
  /* 10063400 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063403 mov edi, eax */
  EDI = (EAX);
  /* 10063405 push 0x10075fd8 */
  push32((uint32_t)(0x10075fd8u));
  /* 1006340a call dword ptr [0x10076534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076534))), 0x10063410u);
  /* 10063410 push 0x100760c8 */
  push32((uint32_t)(0x100760c8u));
  /* 10063415 mov dword ptr [esp + 0x20], eax */
  w32((uint32_t)(ESP + 0x20), (EAX));
  /* 10063419 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x1006341fu);
  /* 1006341f push 0x100760c8 */
  push32((uint32_t)(0x100760c8u));
  /* 10063424 mov esi, eax */
  ESI = (EAX);
  /* 10063426 call dword ptr [0x10076534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076534))), 0x1006342cu);
  /* 1006342c push 0x100762c8 */
  push32((uint32_t)(0x100762c8u));
  /* 10063431 mov dword ptr [esp + 0x24], eax */
  w32((uint32_t)(ESP + 0x24), (EAX));
  /* 10063435 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x1006343bu);
  /* 1006343b mov edx, dword ptr [esp + 0x24] */
  EDX = (r32((uint32_t)(ESP + 0x24)));
  /* 1006343f mov ecx, dword ptr [esp + 0x28] */
  ECX = (r32((uint32_t)(ESP + 0x28)));
  /* 10063443 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10063445 mov edx, dword ptr [esp + 0x2c] */
  EDX = (r32((uint32_t)(ESP + 0x2c)));
  /* 10063449 sub esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006344b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1006344d sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006344f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10063451 sub esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10063453 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10063455 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10063457 push 0x10076010 */
  push32((uint32_t)(0x10076010u));
  /* 1006345c add esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1006345e mov dword ptr [esp + 0x38], esi */
  w32((uint32_t)(ESP + 0x38), (ESI));
  /* 10063462 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10063468u);
  /* 10063468 push 3 */
  push32((uint32_t)(0x3u));
  /* 1006346a mov bl, 1 */
  BL = (0x1u);
  /* 1006346c call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10063472u);
  /* 10063472 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063475 cmp eax, 0xd6d8 */
  { uint32_t _a=(EAX),_b=(0xd6d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006347a jle 0x100634aa */
  if ((C.zf||C.sf!=C.of)) goto L_100634aa;
  /* 1006347c push 1 */
  push32((uint32_t)(0x1u));
  /* 1006347e call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10063484u);
  /* 10063484 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063487 cmp eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006348c jle 0x100634aa */
  if ((C.zf||C.sf!=C.of)) goto L_100634aa;
  /* 1006348e push 4 */
  push32((uint32_t)(0x4u));
  /* 10063490 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10063496u);
  /* 10063496 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063499 cmp eax, 0x1b58 */
  { uint32_t _a=(EAX),_b=(0x1b58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006349e jle 0x100634aa */
  if ((C.zf||C.sf!=C.of)) goto L_100634aa;
  /* 100634a0 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 100634a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100634a6 jne 0x100634aa */
  if (!C.zf) goto L_100634aa;
  /* 100634a8 xor bl, bl */
  { uint32_t _r=(BL)^(BL); BL = (_r); fl_logic(_r,8); }
L_100634aa:;
  /* 100634aa push 0x10076180 */
  push32((uint32_t)(0x10076180u));
  /* 100634af call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x100634b5u);
  /* 100634b5 push 3 */
  push32((uint32_t)(0x3u));
  /* 100634b7 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 100634bb call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x100634c1u);
  /* 100634c1 push 0x100761a8 */
  push32((uint32_t)(0x100761a8u));
  /* 100634c6 mov esi, eax */
  ESI = (EAX);
  /* 100634c8 call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x100634ceu);
  /* 100634ce push 0x10073678 */
  push32((uint32_t)(0x10073678u));
  /* 100634d3 mov byte ptr [esp + 0x22], al */
  w8((uint32_t)(ESP + 0x22), (AL));
  /* 100634d7 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x100634ddu);
  /* 100634dd push 0x100760d0 */
  push32((uint32_t)(0x100760d0u));
  /* 100634e2 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x100634e8u);
  /* 100634e8 push 0x100763a0 */
  push32((uint32_t)(0x100763a0u));
  /* 100634ed mov dword ptr [esp + 0x2c], eax */
  w32((uint32_t)(ESP + 0x2c), (EAX));
  /* 100634f1 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x100634f7u);
  /* 100634f7 push 0x10076320 */
  push32((uint32_t)(0x10076320u));
  /* 100634fc mov edi, eax */
  EDI = (EAX);
  /* 100634fe call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10063504u);
  /* 10063504 push 0x10073678 */
  push32((uint32_t)(0x10073678u));
  /* 10063509 mov ebp, eax */
  EBP = (EAX);
  /* 1006350b call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10063511u);
  /* 10063511 add eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10063513 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10063515 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10063517 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10063519 push 0x10076100 */
  push32((uint32_t)(0x10076100u));
  /* 1006351e mov dword ptr [esp + 0x44], eax */
  w32((uint32_t)(ESP + 0x44), (EAX));
  /* 10063522 mov byte ptr [esp + 0x3f], 1 */
  w8((uint32_t)(ESP + 0x3f), (0x1u));
  /* 10063527 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006352du);
  /* 1006352d push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1006352f push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10063531 push 0x10076140 */
  push32((uint32_t)(0x10076140u));
  /* 10063536 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006353cu);
  /* 1006353c push 0x100738c8 */
  push32((uint32_t)(0x100738c8u));
  /* 10063541 call dword ptr [0x10076534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076534))), 0x10063547u);
  /* 10063547 push 0x100738c8 */
  push32((uint32_t)(0x100738c8u));
  /* 1006354c mov edi, eax */
  EDI = (EAX);
  /* 1006354e call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10063554u);
  /* 10063554 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063557 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10063559 je 0x10063560 */
  if (C.zf) goto L_10063560;
  /* 1006355b mov byte ptr [esp + 0x13], 0 */
  w8((uint32_t)(ESP + 0x13), (0x0u));
L_10063560:;
  /* 10063560 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 10063564 test ebp, ebp */
  { uint32_t _r=(EBP)&(EBP); fl_logic(_r,32); }
  /* 10063566 je 0x10063f2d */
  if (C.zf) goto L_10063f2d;
  /* 1006356c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1006356e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10063570 push 1 */
  push32((uint32_t)(0x1u));
  /* 10063572 push 0x10075fc8 */
  push32((uint32_t)(0x10075fc8u));
  /* 10063577 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x1006357du);
  /* 1006357d push 0x10075fc8 */
  push32((uint32_t)(0x10075fc8u));
  /* 10063582 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10063588u);
  /* 10063588 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006358b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006358d je 0x10064223 */
  if (C.zf) goto L_10064223;
  /* 10063593 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10063595 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10063597 push 0x10076368 */
  push32((uint32_t)(0x10076368u));
  /* 1006359c call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100635a2u);
  /* 100635a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100635a5 call dword ptr [0x10076560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076560))), 0x100635abu);
  /* 100635ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100635ad jne 0x100635f0 */
  if (!C.zf) goto L_100635f0;
  /* 100635af cmp esi, 0x2bc */
  { uint32_t _a=(ESI),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100635b5 jle 0x100635dc */
  if ((C.zf||C.sf!=C.of)) goto L_100635dc;
  /* 100635b7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100635b9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100635bb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100635bd push 0x10076180 */
  push32((uint32_t)(0x10076180u));
  /* 100635c2 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x100635c8u);
  /* 100635c8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100635ca push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100635cc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100635ce push 0x10073678 */
  push32((uint32_t)(0x10073678u));
  /* 100635d3 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x100635d9u);
  /* 100635d9 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100635dc:;
  /* 100635dc push 1 */
  push32((uint32_t)(0x1u));
  /* 100635de push 1 */
  push32((uint32_t)(0x1u));
  /* 100635e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 100635e2 call dword ptr [0x10076504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076504))), 0x100635e8u);
  /* 100635e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100635eb jmp 0x100636fe */
  goto L_100636fe;
L_100635f0:;
  /* 100635f0 push 0x10073790 */
  push32((uint32_t)(0x10073790u));
  /* 100635f5 call dword ptr [0x1007653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007653c))), 0x100635fbu);
  /* 100635fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100635fe test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10063600 je 0x1006362a */
  if (C.zf) goto L_1006362a;
  /* 10063602 cmp esi, 0x2ee0 */
  { uint32_t _a=(ESI),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10063608 jle 0x10063612 */
  if ((C.zf||C.sf!=C.of)) goto L_10063612;
  /* 1006360a push 6 */
  push32((uint32_t)(0x6u));
  /* 1006360c push 8 */
  push32((uint32_t)(0x8u));
  /* 1006360e push 9 */
  push32((uint32_t)(0x9u));
  /* 10063610 jmp 0x10063650 */
  goto L_10063650;
L_10063612:;
  /* 10063612 cmp esi, 0x1770 */
  { uint32_t _a=(ESI),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10063618 jle 0x10063622 */
  if ((C.zf||C.sf!=C.of)) goto L_10063622;
  /* 1006361a push 3 */
  push32((uint32_t)(0x3u));
  /* 1006361c push 5 */
  push32((uint32_t)(0x5u));
  /* 1006361e push 9 */
  push32((uint32_t)(0x9u));
  /* 10063620 jmp 0x10063650 */
  goto L_10063650;
L_10063622:;
  /* 10063622 push 1 */
  push32((uint32_t)(0x1u));
  /* 10063624 push 4 */
  push32((uint32_t)(0x4u));
  /* 10063626 push 9 */
  push32((uint32_t)(0x9u));
  /* 10063628 jmp 0x10063650 */
  goto L_10063650;
L_1006362a:;
  /* 1006362a cmp esi, 0x2ee0 */
  { uint32_t _a=(ESI),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10063630 jle 0x1006363a */
  if ((C.zf||C.sf!=C.of)) goto L_1006363a;
  /* 10063632 push 8 */
  push32((uint32_t)(0x8u));
  /* 10063634 push 8 */
  push32((uint32_t)(0x8u));
  /* 10063636 push 9 */
  push32((uint32_t)(0x9u));
  /* 10063638 jmp 0x10063650 */
  goto L_10063650;
L_1006363a:;
  /* 1006363a cmp esi, 0x1770 */
  { uint32_t _a=(ESI),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10063640 jle 0x1006364a */
  if ((C.zf||C.sf!=C.of)) goto L_1006364a;
  /* 10063642 push 5 */
  push32((uint32_t)(0x5u));
  /* 10063644 push 5 */
  push32((uint32_t)(0x5u));
  /* 10063646 push 9 */
  push32((uint32_t)(0x9u));
  /* 10063648 jmp 0x10063650 */
  goto L_10063650;
L_1006364a:;
  /* 1006364a push 4 */
  push32((uint32_t)(0x4u));
  /* 1006364c push 4 */
  push32((uint32_t)(0x4u));
  /* 1006364e push 0xa */
  push32((uint32_t)(0xau));
L_10063650:;
  /* 10063650 call dword ptr [0x10076504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076504))), 0x10063656u);
  /* 10063656 mov al, byte ptr [esp + 0x1e] */
  AL = (r8((uint32_t)(ESP + 0x1e)));
  /* 1006365a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006365d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1006365f mov edi, 0x15e */
  EDI = (0x15eu);
  /* 10063664 je 0x1006366b */
  if (C.zf) goto L_1006366b;
  /* 10063666 mov edi, 0x12c */
  EDI = (0x12cu);
L_1006366b:;
  /* 1006366b cmp ebp, 0x19 */
  { uint32_t _a=(EBP),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006366e jge 0x1006368c */
  if ((C.sf==C.of)) goto L_1006368c;
  /* 10063670 cmp esi, 0x12c */
  { uint32_t _a=(ESI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10063676 jle 0x1006368c */
  if ((C.zf||C.sf!=C.of)) goto L_1006368c;
  /* 10063678 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1006367a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1006367c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1006367e push 0x10076180 */
  push32((uint32_t)(0x10076180u));
  /* 10063683 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10063689u);
  /* 10063689 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1006368c:;
  /* 1006368c cmp esi, 0xc8 */
  { uint32_t _a=(ESI),_b=(0xc8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10063692 jle 0x100636cd */
  if ((C.zf||C.sf!=C.of)) goto L_100636cd;
  /* 10063694 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10063696 je 0x100636b2 */
  if (C.zf) goto L_100636b2;
  /* 10063698 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1006369a push 0xe8 */
  push32((uint32_t)(0xe8u));
  /* 1006369f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100636a4 push 0x10076180 */
  push32((uint32_t)(0x10076180u));
  /* 100636a9 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x100636afu);
  /* 100636af add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100636b2:;
  /* 100636b2 cmp esi, 0x12c */
  { uint32_t _a=(ESI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100636b8 jle 0x100636cd */
  if ((C.zf||C.sf!=C.of)) goto L_100636cd;
  /* 100636ba push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100636bc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100636be push edi */
  push32((uint32_t)(EDI));
  /* 100636bf push 0x10073678 */
  push32((uint32_t)(0x10073678u));
  /* 100636c4 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x100636cau);
  /* 100636ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100636cd:;
  /* 100636cd push 0x10076260 */
  push32((uint32_t)(0x10076260u));
  /* 100636d2 call dword ptr [0x1007653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007653c))), 0x100636d8u);
  /* 100636d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100636db test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100636dd je 0x100636fe */
  if (C.zf) goto L_100636fe;
  /* 100636df cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100636e5 jle 0x100636fe */
  if ((C.zf||C.sf!=C.of)) goto L_100636fe;
  /* 100636e7 push 0x100762c8 */
  push32((uint32_t)(0x100762c8u));
  /* 100636ec call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x100636f2u);
  /* 100636f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100636f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100636f7 jle 0x100636fe */
  if ((C.zf||C.sf!=C.of)) goto L_100636fe;
  /* 100636f9 call 0x10063230 */
  push32(0x100636feu); f_10063230();
L_100636fe:;
  /* 100636fe mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 10063702 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10063704 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10063707 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10063709 jge 0x1006370f */
  if ((C.sf==C.of)) goto L_1006370f;
  /* 1006370b push 5 */
  push32((uint32_t)(0x5u));
  /* 1006370d jmp 0x10063713 */
  goto L_10063713;
L_1006370f:;
  /* 1006370f add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10063712 push eax */
  push32((uint32_t)(EAX));
L_10063713:;
  /* 10063713 push 0x10075f80 */
  push32((uint32_t)(0x10075f80u));
  /* 10063718 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x1006371eu);
  /* 1006371e mov edi, dword ptr [esp + 0x38] */
  EDI = (r32((uint32_t)(ESP + 0x38)));
  /* 10063722 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063725 cmp edi, 5 */
  { uint32_t _a=(EDI),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10063728 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1006372a jge 0x10063740 */
  if ((C.sf==C.of)) goto L_10063740;
  /* 1006372c push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1006372e push 0xc */
  push32((uint32_t)(0xcu));
  /* 10063730 push 0x100738d8 */
  push32((uint32_t)(0x100738d8u));
  /* 10063735 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x1006373bu);
  /* 1006373b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006373e jmp 0x1006377a */
  goto L_1006377a;
L_10063740:;
  /* 10063740 lea ecx, [edi + 6] */
  ECX = ((uint32_t)(EDI + 0x6));
  /* 10063743 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10063745 push ecx */
  push32((uint32_t)(ECX));
  /* 10063746 push 0x100738d8 */
  push32((uint32_t)(0x100738d8u));
  /* 1006374b call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10063751u);
  /* 10063751 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10063753 lea edx, [edi + 9] */
  EDX = ((uint32_t)(EDI + 0x9));
  /* 10063756 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10063758 push edx */
  push32((uint32_t)(EDX));
  /* 10063759 push 0x100738d8 */
  push32((uint32_t)(0x100738d8u));
  /* 1006375e call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10063764u);
  /* 10063764 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10063766 add edi, 0xa */
  { uint32_t _a=(EDI),_b=(0xau),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10063769 push 0xa */
  push32((uint32_t)(0xau));
  /* 1006376b push edi */
  push32((uint32_t)(EDI));
  /* 1006376c push 0x100738d8 */
  push32((uint32_t)(0x100738d8u));
  /* 10063771 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10063777u);
  /* 10063777 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1006377a:;
  /* 1006377a push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1006377c push 0 */
  push32((uint32_t)(0x0u));
  /* 1006377e call 0x10062640 */
  push32(0x10063783u); f_10062640();
  /* 10063783 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063786 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10063788 je 0x100637e7 */
  if (C.zf) goto L_100637e7;
  /* 1006378a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1006378c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1006378e push 0x100762d8 */
  push32((uint32_t)(0x100762d8u));
  /* 10063793 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10063799u);
  /* 10063799 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1006379b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1006379d push 0x100762c0 */
  push32((uint32_t)(0x100762c0u));
  /* 100637a2 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100637a8u);
  /* 100637a8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100637aa push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100637ac push 0x100762d0 */
  push32((uint32_t)(0x100762d0u));
  /* 100637b1 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100637b7u);
  /* 100637b7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100637b9 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100637bb push 0x100762b0 */
  push32((uint32_t)(0x100762b0u));
  /* 100637c0 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100637c6u);
  /* 100637c6 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100637c8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100637ca push 0x100762b8 */
  push32((uint32_t)(0x100762b8u));
  /* 100637cf call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100637d5u);
  /* 100637d5 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100637d7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100637d9 push 0x100762a8 */
  push32((uint32_t)(0x100762a8u));
  /* 100637de call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100637e4u);
  /* 100637e4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100637e7:;
  /* 100637e7 push 0xa */
  push32((uint32_t)(0xau));
  /* 100637e9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100637eb push 3 */
  push32((uint32_t)(0x3u));
  /* 100637ed push 0x10073890 */
  push32((uint32_t)(0x10073890u));
  /* 100637f2 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x100637f8u);
  /* 100637f8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100637fa push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100637fc push 1 */
  push32((uint32_t)(0x1u));
  /* 100637fe push 0x10075fa8 */
  push32((uint32_t)(0x10075fa8u));
  /* 10063803 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10063809u);
  /* 10063809 push 5 */
  push32((uint32_t)(0x5u));
  /* 1006380b push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1006380d push 2 */
  push32((uint32_t)(0x2u));
  /* 1006380f push 0x10075fa8 */
  push32((uint32_t)(0x10075fa8u));
  /* 10063814 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x1006381au);
  /* 1006381a mov esi, dword ptr [esp + 0x4c] */
  ESI = (r32((uint32_t)(ESP + 0x4c)));
  /* 1006381e add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063821 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10063823 jne 0x10063839 */
  if (!C.zf) goto L_10063839;
  /* 10063825 push 5 */
  push32((uint32_t)(0x5u));
  /* 10063827 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10063829 push 3 */
  push32((uint32_t)(0x3u));
  /* 1006382b push 0x10075fa8 */
  push32((uint32_t)(0x10075fa8u));
  /* 10063830 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10063836u);
  /* 10063836 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10063839:;
  /* 10063839 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1006383b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1006383d push 1 */
  push32((uint32_t)(0x1u));
  /* 1006383f push 0x100761d8 */
  push32((uint32_t)(0x100761d8u));
  /* 10063844 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x1006384au);
  /* 1006384a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1006384c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1006384e push 1 */
  push32((uint32_t)(0x1u));
  /* 10063850 push 0x10076240 */
  push32((uint32_t)(0x10076240u));
  /* 10063855 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x1006385bu);
  /* 1006385b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1006385d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1006385f push 1 */
  push32((uint32_t)(0x1u));
  /* 10063861 push 0x10075fc0 */
  push32((uint32_t)(0x10075fc0u));
  /* 10063866 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x1006386cu);
  /* 1006386c push 5 */
  push32((uint32_t)(0x5u));
  /* 1006386e push 0xa */
  push32((uint32_t)(0xau));
  /* 10063870 push 2 */
  push32((uint32_t)(0x2u));
  /* 10063872 push 0x100761d8 */
  push32((uint32_t)(0x100761d8u));
  /* 10063877 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x1006387du);
  /* 1006387d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063880 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10063882 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10063884 push 1 */
  push32((uint32_t)(0x1u));
  /* 10063886 push 0x100760c8 */
  push32((uint32_t)(0x100760c8u));
  /* 1006388b call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10063891u);
  /* 10063891 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10063893 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10063895 push 0x10073650 */
  push32((uint32_t)(0x10073650u));
  /* 1006389a call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100638a0u);
  /* 100638a0 push 0x10075f10 */
  push32((uint32_t)(0x10075f10u));
  /* 100638a5 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x100638abu);
  /* 100638ab add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100638ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100638b0 jle 0x100638d7 */
  if ((C.zf||C.sf!=C.of)) goto L_100638d7;
  /* 100638b2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 100638b4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100638b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 100638b8 push 0x10073868 */
  push32((uint32_t)(0x10073868u));
  /* 100638bd call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x100638c3u);
  /* 100638c3 push 3 */
  push32((uint32_t)(0x3u));
  /* 100638c5 push 5 */
  push32((uint32_t)(0x5u));
  /* 100638c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 100638c9 push 0x100760e8 */
  push32((uint32_t)(0x100760e8u));
  /* 100638ce call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x100638d4u);
  /* 100638d4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100638d7:;
  /* 100638d7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100638d9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100638db push 1 */
  push32((uint32_t)(0x1u));
  /* 100638dd push 0x10075f10 */
  push32((uint32_t)(0x10075f10u));
  /* 100638e2 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x100638e8u);
  /* 100638e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100638eb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100638ed jne 0x10063903 */
  if (!C.zf) goto L_10063903;
  /* 100638ef push 0xa */
  push32((uint32_t)(0xau));
  /* 100638f1 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100638f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 100638f5 push 0x10075fd8 */
  push32((uint32_t)(0x10075fd8u));
  /* 100638fa call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10063900u);
  /* 10063900 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10063903:;
  /* 10063903 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10063905 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10063907 push 1 */
  push32((uint32_t)(0x1u));
  /* 10063909 push 0x10073608 */
  push32((uint32_t)(0x10073608u));
  /* 1006390e call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10063914u);
  /* 10063914 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063917 cmp ebp, 0x19 */
  { uint32_t _a=(EBP),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006391a jle 0x10063930 */
  if ((C.zf||C.sf!=C.of)) goto L_10063930;
  /* 1006391c push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1006391e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10063920 push 2 */
  push32((uint32_t)(0x2u));
  /* 10063922 push 0x10075fc8 */
  push32((uint32_t)(0x10075fc8u));
  /* 10063927 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x1006392du);
  /* 1006392d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10063930:;
  /* 10063930 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10063932 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10063934 push 1 */
  push32((uint32_t)(0x1u));
  /* 10063936 push 0x10076248 */
  push32((uint32_t)(0x10076248u));
  /* 1006393b call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10063941u);
  /* 10063941 push 5 */
  push32((uint32_t)(0x5u));
  /* 10063943 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10063945 push 2 */
  push32((uint32_t)(0x2u));
  /* 10063947 push 0x10076248 */
  push32((uint32_t)(0x10076248u));
  /* 1006394c call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10063952u);
  /* 10063952 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10063954 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10063956 push 0x10076068 */
  push32((uint32_t)(0x10076068u));
  /* 1006395b call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10063961u);
  /* 10063961 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10063963 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10063965 push 0x10076020 */
  push32((uint32_t)(0x10076020u));
  /* 1006396a call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10063970u);
  /* 10063970 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10063972 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10063974 push 0x10076028 */
  push32((uint32_t)(0x10076028u));
  /* 10063979 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006397fu);
  /* 1006397f add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063982 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10063984 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10063986 push 0x10076030 */
  push32((uint32_t)(0x10076030u));
  /* 1006398b call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10063991u);
  /* 10063991 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10063993 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10063995 push 0x10076260 */
  push32((uint32_t)(0x10076260u));
  /* 1006399a call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100639a0u);
  /* 100639a0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100639a2 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100639a4 push 0x100761a8 */
  push32((uint32_t)(0x100761a8u));
  /* 100639a9 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100639afu);
  /* 100639af push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100639b1 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100639b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 100639b5 push 0x100762c8 */
  push32((uint32_t)(0x100762c8u));
  /* 100639ba call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x100639c0u);
  /* 100639c0 push 5 */
  push32((uint32_t)(0x5u));
  /* 100639c2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100639c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 100639c6 push 0x100762c8 */
  push32((uint32_t)(0x100762c8u));
  /* 100639cb call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x100639d1u);
  /* 100639d1 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100639d4 push 5 */
  push32((uint32_t)(0x5u));
  /* 100639d6 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100639d8 push 3 */
  push32((uint32_t)(0x3u));
  /* 100639da push 0x100762c8 */
  push32((uint32_t)(0x100762c8u));
  /* 100639df call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x100639e5u);
  /* 100639e5 push 5 */
  push32((uint32_t)(0x5u));
  /* 100639e7 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100639e9 push 5 */
  push32((uint32_t)(0x5u));
  /* 100639eb push 0x100762c8 */
  push32((uint32_t)(0x100762c8u));
  /* 100639f0 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x100639f6u);
  /* 100639f6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100639f8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100639fa push 0x10073948 */
  push32((uint32_t)(0x10073948u));
  /* 100639ff call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10063a05u);
  /* 10063a05 call 0x10062630 */
  push32(0x10063a0au); f_10062630();
  /* 10063a0a push 0x10076260 */
  push32((uint32_t)(0x10076260u));
  /* 10063a0f mov edi, eax */
  EDI = (EAX);
  /* 10063a11 call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x10063a17u);
  /* 10063a17 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063a1a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10063a1c je 0x10063a3f */
  if (C.zf) goto L_10063a3f;
  /* 10063a1e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10063a20 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10063a22 push 0x10073948 */
  push32((uint32_t)(0x10073948u));
  /* 10063a27 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10063a2du);
  /* 10063a2d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10063a2f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10063a31 push 0x10073860 */
  push32((uint32_t)(0x10073860u));
  /* 10063a36 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10063a3cu);
  /* 10063a3c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10063a3f:;
  /* 10063a3f push 0x10073948 */
  push32((uint32_t)(0x10073948u));
  /* 10063a44 call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x10063a4au);
  /* 10063a4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063a4d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10063a4f je 0x10063a77 */
  if (C.zf) goto L_10063a77;
  /* 10063a51 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10063a53 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10063a55 push 0x10073930 */
  push32((uint32_t)(0x10073930u));
  /* 10063a5a call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10063a60u);
  /* 10063a60 push 0xa */
  push32((uint32_t)(0xau));
  /* 10063a62 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10063a64 push 0x10073870 */
  push32((uint32_t)(0x10073870u));
  /* 10063a69 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10063a6fu);
  /* 10063a6f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063a72 call 0x10063320 */
  push32(0x10063a77u); f_10063320();
L_10063a77:;
  /* 10063a77 push 0x100760a0 */
  push32((uint32_t)(0x100760a0u));
  /* 10063a7c call dword ptr [0x1007653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007653c))), 0x10063a82u);
  /* 10063a82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063a85 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10063a87 je 0x10063aae */
  if (C.zf) goto L_10063aae;
  /* 10063a89 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10063a8b push 0xa */
  push32((uint32_t)(0xau));
  /* 10063a8d push 0xa */
  push32((uint32_t)(0xau));
  /* 10063a8f push 0x10073658 */
  push32((uint32_t)(0x10073658u));
  /* 10063a94 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10063a9au);
  /* 10063a9a push 0xa */
  push32((uint32_t)(0xau));
  /* 10063a9c push 3 */
  push32((uint32_t)(0x3u));
  /* 10063a9e push 0xf */
  push32((uint32_t)(0xfu));
  /* 10063aa0 push 0x10073658 */
  push32((uint32_t)(0x10073658u));
  /* 10063aa5 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10063aabu);
  /* 10063aab add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10063aae:;
  /* 10063aae push 0 */
  push32((uint32_t)(0x0u));
  /* 10063ab0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10063ab2 call 0x100625f0 */
  push32(0x10063ab7u); f_100625f0();
  /* 10063ab7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10063ab9 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10063abfu);
  /* 10063abf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063ac2 cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10063ac7 jle 0x10063b0b */
  if ((C.zf||C.sf!=C.of)) goto L_10063b0b;
  /* 10063ac9 push 0x10073790 */
  push32((uint32_t)(0x10073790u));
  /* 10063ace call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x10063ad4u);
  /* 10063ad4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063ad7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10063ad9 je 0x10063b0b */
  if (C.zf) goto L_10063b0b;
  /* 10063adb push 1 */
  push32((uint32_t)(0x1u));
  /* 10063add call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10063ae3u);
  /* 10063ae3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063ae6 cmp eax, 0x1d4c */
  { uint32_t _a=(EAX),_b=(0x1d4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10063aeb jge 0x10063b0b */
  if ((C.sf==C.of)) goto L_10063b0b;
  /* 10063aed push 0x10073948 */
  push32((uint32_t)(0x10073948u));
  /* 10063af2 call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x10063af8u);
  /* 10063af8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063afb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10063afd jne 0x10063b0b */
  if (!C.zf) goto L_10063b0b;
  /* 10063aff push 1 */
  push32((uint32_t)(0x1u));
  /* 10063b01 push 1 */
  push32((uint32_t)(0x1u));
  /* 10063b03 call 0x100625f0 */
  push32(0x10063b08u); f_100625f0();
  /* 10063b08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10063b0b:;
  /* 10063b0b push 0x10073948 */
  push32((uint32_t)(0x10073948u));
  /* 10063b10 call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x10063b16u);
  /* 10063b16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063b19 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10063b1b je 0x10063c9c */
  if (C.zf) goto L_10063c9c;
  /* 10063b21 push 0x100760e0 */
  push32((uint32_t)(0x100760e0u));
  /* 10063b26 call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x10063b2cu);
  /* 10063b2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063b2f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10063b31 je 0x10063c9c */
  if (C.zf) goto L_10063c9c;
  /* 10063b37 push 0x100761a8 */
  push32((uint32_t)(0x100761a8u));
  /* 10063b3c call dword ptr [0x1007653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007653c))), 0x10063b42u);
  /* 10063b42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063b45 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10063b47 je 0x10063c9c */
  if (C.zf) goto L_10063c9c;
  /* 10063b4d cmp edi, 0xa */
  { uint32_t _a=(EDI),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10063b50 je 0x10063b57 */
  if (C.zf) goto L_10063b57;
  /* 10063b52 cmp edi, 0x12 */
  { uint32_t _a=(EDI),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10063b55 jne 0x10063b87 */
  if (!C.zf) goto L_10063b87;
L_10063b57:;
  /* 10063b57 push 3 */
  push32((uint32_t)(0x3u));
  /* 10063b59 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10063b5fu);
  /* 10063b5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063b62 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10063b67 jle 0x10063b87 */
  if ((C.zf||C.sf!=C.of)) goto L_10063b87;
  /* 10063b69 push 1 */
  push32((uint32_t)(0x1u));
  /* 10063b6b call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10063b71u);
  /* 10063b71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063b74 cmp eax, 0x2008 */
  { uint32_t _a=(EAX),_b=(0x2008u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10063b79 jge 0x10063b87 */
  if ((C.sf==C.of)) goto L_10063b87;
  /* 10063b7b push 1 */
  push32((uint32_t)(0x1u));
  /* 10063b7d push 1 */
  push32((uint32_t)(0x1u));
  /* 10063b7f call 0x100625f0 */
  push32(0x10063b84u); f_100625f0();
  /* 10063b84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10063b87:;
  /* 10063b87 push 0x10076010 */
  push32((uint32_t)(0x10076010u));
  /* 10063b8c call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x10063b92u);
  /* 10063b92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063b95 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10063b97 jne 0x10063bc9 */
  if (!C.zf) goto L_10063bc9;
  /* 10063b99 push 3 */
  push32((uint32_t)(0x3u));
  /* 10063b9b call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10063ba1u);
  /* 10063ba1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063ba4 cmp eax, 0xea60 */
  { uint32_t _a=(EAX),_b=(0xea60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10063ba9 jle 0x10063bc9 */
  if ((C.zf||C.sf!=C.of)) goto L_10063bc9;
  /* 10063bab push 1 */
  push32((uint32_t)(0x1u));
  /* 10063bad call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10063bb3u);
  /* 10063bb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063bb6 cmp eax, 0x2af8 */
  { uint32_t _a=(EAX),_b=(0x2af8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10063bbb jge 0x10063bc9 */
  if ((C.sf==C.of)) goto L_10063bc9;
  /* 10063bbd push 1 */
  push32((uint32_t)(0x1u));
  /* 10063bbf push 1 */
  push32((uint32_t)(0x1u));
  /* 10063bc1 call 0x100625f0 */
  push32(0x10063bc6u); f_100625f0();
  /* 10063bc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10063bc9:;
  /* 10063bc9 push 0x10076010 */
  push32((uint32_t)(0x10076010u));
  /* 10063bce call dword ptr [0x1007653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007653c))), 0x10063bd4u);
  /* 10063bd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063bd7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10063bd9 je 0x10063c9c */
  if (C.zf) goto L_10063c9c;
  /* 10063bdf cmp edi, 0x1c */
  { uint32_t _a=(EDI),_b=(0x1cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10063be2 jne 0x10063c22 */
  if (!C.zf) goto L_10063c22;
  /* 10063be4 push 3 */
  push32((uint32_t)(0x3u));
  /* 10063be6 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10063becu);
  /* 10063bec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063bef cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10063bf4 jle 0x10063cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_10063cf7;
  /* 10063bfa push 4 */
  push32((uint32_t)(0x4u));
  /* 10063bfc call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10063c02u);
  /* 10063c02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063c05 cmp eax, 0x1c84 */
  { uint32_t _a=(EAX),_b=(0x1c84u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10063c0a jle 0x10063cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_10063cf7;
  /* 10063c10 push 1 */
  push32((uint32_t)(0x1u));
  /* 10063c12 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10063c18u);
  /* 10063c18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063c1b cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10063c20 jmp 0x10063c8c */
  goto L_10063c8c;
L_10063c22:;
  /* 10063c22 cmp edi, 0x28 */
  { uint32_t _a=(EDI),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10063c25 jne 0x10063c65 */
  if (!C.zf) goto L_10063c65;
  /* 10063c27 push 3 */
  push32((uint32_t)(0x3u));
  /* 10063c29 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10063c2fu);
  /* 10063c2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063c32 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10063c37 jle 0x10063cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_10063cf7;
  /* 10063c3d push 4 */
  push32((uint32_t)(0x4u));
  /* 10063c3f call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10063c45u);
  /* 10063c45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063c48 cmp eax, 0x2648 */
  { uint32_t _a=(EAX),_b=(0x2648u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10063c4d jle 0x10063cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_10063cf7;
  /* 10063c53 push 1 */
  push32((uint32_t)(0x1u));
  /* 10063c55 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10063c5bu);
  /* 10063c5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063c5e cmp eax, 0x5dc0 */
  { uint32_t _a=(EAX),_b=(0x5dc0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10063c63 jmp 0x10063c8c */
  goto L_10063c8c;
L_10063c65:;
  /* 10063c65 cmp edi, 0x37 */
  { uint32_t _a=(EDI),_b=(0x37u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10063c68 jne 0x10063c9c */
  if (!C.zf) goto L_10063c9c;
  /* 10063c6a push 3 */
  push32((uint32_t)(0x3u));
  /* 10063c6c call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10063c72u);
  /* 10063c72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063c75 cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10063c7a jle 0x10063cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_10063cf7;
  /* 10063c7c push 1 */
  push32((uint32_t)(0x1u));
  /* 10063c7e call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10063c84u);
  /* 10063c84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063c87 cmp eax, 0x6590 */
  { uint32_t _a=(EAX),_b=(0x6590u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10063c8c:;
  /* 10063c8c jge 0x10063cf7 */
  if ((C.sf==C.of)) goto L_10063cf7;
  /* 10063c8e push 1 */
  push32((uint32_t)(0x1u));
  /* 10063c90 push 1 */
  push32((uint32_t)(0x1u));
  /* 10063c92 call 0x100625f0 */
  push32(0x10063c97u); f_100625f0();
  /* 10063c97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063c9a jmp 0x10063cf7 */
  goto L_10063cf7;
L_10063c9c:;
  /* 10063c9c cmp edi, 0x5f */
  { uint32_t _a=(EDI),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10063c9f jne 0x10063cf7 */
  if (!C.zf) goto L_10063cf7;
  /* 10063ca1 push 0xa */
  push32((uint32_t)(0xau));
  /* 10063ca3 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10063ca5 push 0x10073758 */
  push32((uint32_t)(0x10073758u));
  /* 10063caa call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10063cb0u);
  /* 10063cb0 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10063cb2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10063cb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10063cb6 push 0x10076388 */
  push32((uint32_t)(0x10076388u));
  /* 10063cbb call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10063cc1u);
  /* 10063cc1 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10063cc3 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10063cc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10063cc7 push 0x10076388 */
  push32((uint32_t)(0x10076388u));
  /* 10063ccc call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10063cd2u);
  /* 10063cd2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10063cd4 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10063cd6 push 3 */
  push32((uint32_t)(0x3u));
  /* 10063cd8 push 0x10076388 */
  push32((uint32_t)(0x10076388u));
  /* 10063cdd call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10063ce3u);
  /* 10063ce3 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10063ce5 push 0xa */
  push32((uint32_t)(0xau));
  /* 10063ce7 push 5 */
  push32((uint32_t)(0x5u));
  /* 10063ce9 push 0x10076388 */
  push32((uint32_t)(0x10076388u));
  /* 10063cee call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10063cf4u);
  /* 10063cf4 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10063cf7:;
  /* 10063cf7 cmp ebp, 0x50 */
  { uint32_t _a=(EBP),_b=(0x50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10063cfa jle 0x10063d53 */
  if ((C.zf||C.sf!=C.of)) goto L_10063d53;
  /* 10063cfc mov al, byte ptr [esp + 0x13] */
  AL = (r8((uint32_t)(ESP + 0x13)));
  /* 10063d00 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10063d02 je 0x10063d53 */
  if (C.zf) goto L_10063d53;
  /* 10063d04 push 0xa */
  push32((uint32_t)(0xau));
  /* 10063d06 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10063d08 push 1 */
  push32((uint32_t)(0x1u));
  /* 10063d0a push 0x100738c8 */
  push32((uint32_t)(0x100738c8u));
  /* 10063d0f call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10063d15u);
  /* 10063d15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063d18 cmp ebp, 0x5f */
  { uint32_t _a=(EBP),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10063d1b jle 0x10063d53 */
  if ((C.zf||C.sf!=C.of)) goto L_10063d53;
  /* 10063d1d push 0xa */
  push32((uint32_t)(0xau));
  /* 10063d1f push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10063d21 push 2 */
  push32((uint32_t)(0x2u));
  /* 10063d23 push 0x100738c8 */
  push32((uint32_t)(0x100738c8u));
  /* 10063d28 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10063d2eu);
  /* 10063d2e push 0xa */
  push32((uint32_t)(0xau));
  /* 10063d30 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10063d32 push 3 */
  push32((uint32_t)(0x3u));
  /* 10063d34 push 0x100738c8 */
  push32((uint32_t)(0x100738c8u));
  /* 10063d39 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10063d3fu);
  /* 10063d3f push 0xa */
  push32((uint32_t)(0xau));
  /* 10063d41 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10063d43 push 4 */
  push32((uint32_t)(0x4u));
  /* 10063d45 push 0x100738c8 */
  push32((uint32_t)(0x100738c8u));
  /* 10063d4a call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10063d50u);
  /* 10063d50 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10063d53:;
  /* 10063d53 mov bl, byte ptr [esp + 0x12] */
  BL = (r8((uint32_t)(ESP + 0x12)));
  /* 10063d57 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10063d59 je 0x10063d97 */
  if (C.zf) goto L_10063d97;
  /* 10063d5b push 0x10076260 */
  push32((uint32_t)(0x10076260u));
  /* 10063d60 call dword ptr [0x1007653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007653c))), 0x10063d66u);
  /* 10063d66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063d69 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10063d6b je 0x10063d97 */
  if (C.zf) goto L_10063d97;
  /* 10063d6d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10063d6f push 1 */
  push32((uint32_t)(0x1u));
  /* 10063d71 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10063d73 push 0x10076150 */
  push32((uint32_t)(0x10076150u));
  /* 10063d78 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10063d7eu);
  /* 10063d7e push 0x10076188 */
  push32((uint32_t)(0x10076188u));
  /* 10063d83 call dword ptr [0x1007653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007653c))), 0x10063d89u);
  /* 10063d89 push 0x100760a0 */
  push32((uint32_t)(0x100760a0u));
  /* 10063d8e call dword ptr [0x1007653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007653c))), 0x10063d94u);
  /* 10063d94 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10063d97:;
  /* 10063d97 push 0x10073608 */
  push32((uint32_t)(0x10073608u));
  /* 10063d9c call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10063da2u);
  /* 10063da2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10063da4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10063da6 push 3 */
  push32((uint32_t)(0x3u));
  /* 10063da8 push 0x100761e0 */
  push32((uint32_t)(0x100761e0u));
  /* 10063dad call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10063db3u);
  /* 10063db3 push 0x100760e0 */
  push32((uint32_t)(0x100760e0u));
  /* 10063db8 call dword ptr [0x1007653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007653c))), 0x10063dbeu);
  /* 10063dbe add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063dc1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10063dc3 je 0x10063dd9 */
  if (C.zf) goto L_10063dd9;
  /* 10063dc5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10063dc7 push 0xa */
  push32((uint32_t)(0xau));
  /* 10063dc9 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10063dcb push 0x100761e0 */
  push32((uint32_t)(0x100761e0u));
  /* 10063dd0 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10063dd6u);
  /* 10063dd6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10063dd9:;
  /* 10063dd9 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10063ddb je 0x10063ec5 */
  if (C.zf) goto L_10063ec5;
  /* 10063de1 push 0x10076260 */
  push32((uint32_t)(0x10076260u));
  /* 10063de6 call dword ptr [0x1007653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007653c))), 0x10063decu);
  /* 10063dec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063def test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10063df1 je 0x10063ec5 */
  if (C.zf) goto L_10063ec5;
  /* 10063df7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10063df9 jne 0x10063e31 */
  if (!C.zf) goto L_10063e31;
  /* 10063dfb push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10063dfd push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10063dff push 2 */
  push32((uint32_t)(0x2u));
  /* 10063e01 push 0x100760c8 */
  push32((uint32_t)(0x100760c8u));
  /* 10063e06 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10063e0cu);
  /* 10063e0c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10063e0e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10063e10 push 3 */
  push32((uint32_t)(0x3u));
  /* 10063e12 push 0x100760c8 */
  push32((uint32_t)(0x100760c8u));
  /* 10063e17 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10063e1du);
  /* 10063e1d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10063e1f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10063e21 push 4 */
  push32((uint32_t)(0x4u));
  /* 10063e23 push 0x100760c8 */
  push32((uint32_t)(0x100760c8u));
  /* 10063e28 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10063e2eu);
  /* 10063e2e add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10063e31:;
  /* 10063e31 push 0x100760d0 */
  push32((uint32_t)(0x100760d0u));
  /* 10063e36 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10063e3cu);
  /* 10063e3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063e3f cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10063e42 jle 0x10063e65 */
  if ((C.zf||C.sf!=C.of)) goto L_10063e65;
  /* 10063e44 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10063e46 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10063e48 push 0x100761f8 */
  push32((uint32_t)(0x100761f8u));
  /* 10063e4d call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10063e53u);
  /* 10063e53 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10063e55 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10063e57 push 0x10076200 */
  push32((uint32_t)(0x10076200u));
  /* 10063e5c call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10063e62u);
  /* 10063e62 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10063e65:;
  /* 10063e65 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10063e67 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10063e69 push 0x100760e0 */
  push32((uint32_t)(0x100760e0u));
  /* 10063e6e call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10063e74u);
  /* 10063e74 push 0x100738f8 */
  push32((uint32_t)(0x100738f8u));
  /* 10063e79 call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x10063e7fu);
  /* 10063e7f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063e82 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10063e84 je 0x10063ec5 */
  if (C.zf) goto L_10063ec5;
  /* 10063e86 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10063e88 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10063e8a push 0x10076158 */
  push32((uint32_t)(0x10076158u));
  /* 10063e8f call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10063e95u);
  /* 10063e95 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10063e97 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10063e99 push 0x10076168 */
  push32((uint32_t)(0x10076168u));
  /* 10063e9e call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10063ea4u);
  /* 10063ea4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10063ea6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10063ea8 push 0x10076170 */
  push32((uint32_t)(0x10076170u));
  /* 10063ead call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10063eb3u);
  /* 10063eb3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10063eb5 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10063eb7 push 0x10076160 */
  push32((uint32_t)(0x10076160u));
  /* 10063ebc call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10063ec2u);
  /* 10063ec2 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10063ec5:;
  /* 10063ec5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10063ec7 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10063ec9 push 0x10073790 */
  push32((uint32_t)(0x10073790u));
  /* 10063ece call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10063ed4u);
  /* 10063ed4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10063ed6 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10063ed8 push 0x100738d0 */
  push32((uint32_t)(0x100738d0u));
  /* 10063edd call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10063ee3u);
  /* 10063ee3 push 0x10076240 */
  push32((uint32_t)(0x10076240u));
  /* 10063ee8 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10063eeeu);
  /* 10063eee add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063ef1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10063ef4 jle 0x10063f31 */
  if ((C.zf||C.sf!=C.of)) goto L_10063f31;
  /* 10063ef6 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10063efa cmp eax, 0x12c */
  { uint32_t _a=(EAX),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10063eff jle 0x10063f31 */
  if ((C.zf||C.sf!=C.of)) goto L_10063f31;
  /* 10063f01 lea ecx, [eax - 0x32] */
  ECX = ((uint32_t)(EAX + -0x32));
  /* 10063f04 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10063f08 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 10063f0b cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10063f0d jge 0x10063f26 */
  if ((C.sf==C.of)) goto L_10063f26;
  /* 10063f0f push 0xa */
  push32((uint32_t)(0xau));
  /* 10063f11 push 0xa */
  push32((uint32_t)(0xau));
  /* 10063f13 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10063f18 push 0x100760d0 */
  push32((uint32_t)(0x100760d0u));
  /* 10063f1d call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10063f23u);
  /* 10063f23 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10063f26:;
  /* 10063f26 call 0x100632d0 */
  push32(0x10063f2bu); f_100632d0();
  /* 10063f2b jmp 0x10063f31 */
  goto L_10063f31;
L_10063f2d:;
  /* 10063f2d mov bl, byte ptr [esp + 0x12] */
  BL = (r8((uint32_t)(ESP + 0x12)));
L_10063f31:;
  /* 10063f31 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10063f33 je 0x10063f76 */
  if (C.zf) goto L_10063f76;
  /* 10063f35 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10063f37 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10063f39 push 0x10073620 */
  push32((uint32_t)(0x10073620u));
  /* 10063f3e call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10063f44u);
  /* 10063f44 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10063f46 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10063f48 push 0x100736f8 */
  push32((uint32_t)(0x100736f8u));
  /* 10063f4d call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10063f53u);
  /* 10063f53 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10063f55 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10063f57 push 0x10073618 */
  push32((uint32_t)(0x10073618u));
  /* 10063f5c call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10063f62u);
  /* 10063f62 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10063f64 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10063f66 push 2 */
  push32((uint32_t)(0x2u));
  /* 10063f68 push 0x10076240 */
  push32((uint32_t)(0x10076240u));
  /* 10063f6d call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10063f73u);
  /* 10063f73 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10063f76:;
  /* 10063f76 push 0x10073790 */
  push32((uint32_t)(0x10073790u));
  /* 10063f7b call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x10063f81u);
  /* 10063f81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063f84 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10063f86 je 0x10063fa9 */
  if (C.zf) goto L_10063fa9;
  /* 10063f88 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10063f8a push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10063f8c push 0x100761e8 */
  push32((uint32_t)(0x100761e8u));
  /* 10063f91 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10063f97u);
  /* 10063f97 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10063f99 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10063f9b push 0x100761f0 */
  push32((uint32_t)(0x100761f0u));
  /* 10063fa0 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10063fa6u);
  /* 10063fa6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10063fa9:;
  /* 10063fa9 push 0x10073868 */
  push32((uint32_t)(0x10073868u));
  /* 10063fae call dword ptr [0x10076534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076534))), 0x10063fb4u);
  /* 10063fb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063fb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10063fb9 je 0x10064223 */
  if (C.zf) goto L_10064223;
  /* 10063fbf push 0x10075f10 */
  push32((uint32_t)(0x10075f10u));
  /* 10063fc4 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10063fcau);
  /* 10063fca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063fcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10063fcf je 0x1006402a */
  if (C.zf) goto L_1006402a;
  /* 10063fd1 push 0x10076260 */
  push32((uint32_t)(0x10076260u));
  /* 10063fd6 call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x10063fdcu);
  /* 10063fdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063fdf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10063fe1 jne 0x1006402a */
  if (!C.zf) goto L_1006402a;
  /* 10063fe3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10063fe5 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10063febu);
  /* 10063feb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10063fee cmp eax, 0x320 */
  { uint32_t _a=(EAX),_b=(0x320u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10063ff3 jle 0x1006402a */
  if ((C.zf||C.sf!=C.of)) goto L_1006402a;
  /* 10063ff5 push 3 */
  push32((uint32_t)(0x3u));
  /* 10063ff7 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10063ffdu);
  /* 10063ffd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064000 cmp eax, 0x1770 */
  { uint32_t _a=(EAX),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10064005 jge 0x1006402a */
  if ((C.sf==C.of)) goto L_1006402a;
  /* 10064007 push 4 */
  push32((uint32_t)(0x4u));
  /* 10064009 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x1006400fu);
  /* 1006400f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064012 cmp eax, 0xbb8 */
  { uint32_t _a=(EAX),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10064017 jle 0x1006402a */
  if ((C.zf||C.sf!=C.of)) goto L_1006402a;
  /* 10064019 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1006401e push 3 */
  push32((uint32_t)(0x3u));
  /* 10064020 push 4 */
  push32((uint32_t)(0x4u));
  /* 10064022 call 0x10062610 */
  push32(0x10064027u); f_10062610();
  /* 10064027 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1006402a:;
  /* 1006402a push 3 */
  push32((uint32_t)(0x3u));
  /* 1006402c call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10064032u);
  /* 10064032 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064035 cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006403a jge 0x1006405f */
  if ((C.sf==C.of)) goto L_1006405f;
  /* 1006403c push 2 */
  push32((uint32_t)(0x2u));
  /* 1006403e call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10064044u);
  /* 10064044 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064047 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006404c jle 0x1006405f */
  if ((C.zf||C.sf!=C.of)) goto L_1006405f;
  /* 1006404e push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10064053 push 3 */
  push32((uint32_t)(0x3u));
  /* 10064055 push 2 */
  push32((uint32_t)(0x2u));
  /* 10064057 call 0x10062610 */
  push32(0x1006405cu); f_10062610();
  /* 1006405c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1006405f:;
  /* 1006405f push 0x100761e8 */
  push32((uint32_t)(0x100761e8u));
  /* 10064064 call dword ptr [0x1007653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007653c))), 0x1006406au);
  /* 1006406a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006406d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1006406f je 0x10064197 */
  if (C.zf) goto L_10064197;
  /* 10064075 push 0x100761f0 */
  push32((uint32_t)(0x100761f0u));
  /* 1006407a call dword ptr [0x1007653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007653c))), 0x10064080u);
  /* 10064080 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064083 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10064085 je 0x10064197 */
  if (C.zf) goto L_10064197;
  /* 1006408b push 2 */
  push32((uint32_t)(0x2u));
  /* 1006408d call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10064093u);
  /* 10064093 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064096 cmp eax, 0x1adb0 */
  { uint32_t _a=(EAX),_b=(0x1adb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006409b jle 0x100640ae */
  if ((C.zf||C.sf!=C.of)) goto L_100640ae;
  /* 1006409d push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 100640a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 100640a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 100640a6 call 0x10062610 */
  push32(0x100640abu); f_10062610();
  /* 100640ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100640ae:;
  /* 100640ae push 0 */
  push32((uint32_t)(0x0u));
  /* 100640b0 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x100640b6u);
  /* 100640b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100640b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100640bb je 0x100641ba */
  if (C.zf) goto L_100641ba;
  /* 100640c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 100640c3 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x100640c9u);
  /* 100640c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100640cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100640ce je 0x1006413b */
  if (C.zf) goto L_1006413b;
  /* 100640d0 push 4 */
  push32((uint32_t)(0x4u));
  /* 100640d2 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x100640d8u);
  /* 100640d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100640db cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100640e0 jge 0x1006413b */
  if ((C.sf==C.of)) goto L_1006413b;
  /* 100640e2 push 4 */
  push32((uint32_t)(0x4u));
  /* 100640e4 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x100640eau);
  /* 100640ea push 5 */
  push32((uint32_t)(0x5u));
  /* 100640ec mov esi, eax */
  ESI = (EAX);
  /* 100640ee call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x100640f4u);
  /* 100640f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100640f7 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100640f9 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 100640fe jge 0x1006411f */
  if ((C.sf==C.of)) goto L_1006411f;
  /* 10064100 push 5 */
  push32((uint32_t)(0x5u));
  /* 10064102 push 2 */
  push32((uint32_t)(0x2u));
  /* 10064104 call 0x10062610 */
  push32(0x10064109u); f_10062610();
  /* 10064109 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 1006410e push 4 */
  push32((uint32_t)(0x4u));
  /* 10064110 push 2 */
  push32((uint32_t)(0x2u));
  /* 10064112 call 0x10062610 */
  push32(0x10064117u); f_10062610();
  /* 10064117 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006411a jmp 0x100641ba */
  goto L_100641ba;
L_1006411f:;
  /* 1006411f push 4 */
  push32((uint32_t)(0x4u));
  /* 10064121 push 2 */
  push32((uint32_t)(0x2u));
  /* 10064123 call 0x10062610 */
  push32(0x10064128u); f_10062610();
  /* 10064128 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 1006412d push 5 */
  push32((uint32_t)(0x5u));
  /* 1006412f push 2 */
  push32((uint32_t)(0x2u));
  /* 10064131 call 0x10062610 */
  push32(0x10064136u); f_10062610();
  /* 10064136 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064139 jmp 0x100641ba */
  goto L_100641ba;
L_1006413b:;
  /* 1006413b push 5 */
  push32((uint32_t)(0x5u));
  /* 1006413d call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10064143u);
  /* 10064143 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064146 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006414b jge 0x1006416d */
  if ((C.sf==C.of)) goto L_1006416d;
  /* 1006414d push 0 */
  push32((uint32_t)(0x0u));
  /* 1006414f call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10064155u);
  /* 10064155 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064158 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006415a je 0x1006416d */
  if (C.zf) goto L_1006416d;
  /* 1006415c push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10064161 push 5 */
  push32((uint32_t)(0x5u));
  /* 10064163 push 2 */
  push32((uint32_t)(0x2u));
  /* 10064165 call 0x10062610 */
  push32(0x1006416au); f_10062610();
  /* 1006416a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1006416d:;
  /* 1006416d push 5 */
  push32((uint32_t)(0x5u));
  /* 1006416f call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10064175u);
  /* 10064175 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064178 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006417d jge 0x100641ba */
  if ((C.sf==C.of)) goto L_100641ba;
  /* 1006417f push 0 */
  push32((uint32_t)(0x0u));
  /* 10064181 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10064187u);
  /* 10064187 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006418a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006418c je 0x100641ba */
  if (C.zf) goto L_100641ba;
  /* 1006418e push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10064193 push 5 */
  push32((uint32_t)(0x5u));
  /* 10064195 jmp 0x100641b0 */
  goto L_100641b0;
L_10064197:;
  /* 10064197 push 2 */
  push32((uint32_t)(0x2u));
  /* 10064199 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x1006419fu);
  /* 1006419f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100641a2 cmp eax, 0x1adb0 */
  { uint32_t _a=(EAX),_b=(0x1adb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100641a7 jle 0x100641ba */
  if ((C.zf||C.sf!=C.of)) goto L_100641ba;
  /* 100641a9 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 100641ae push 1 */
  push32((uint32_t)(0x1u));
L_100641b0:;
  /* 100641b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 100641b2 call 0x10062610 */
  push32(0x100641b7u); f_10062610();
  /* 100641b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100641ba:;
  /* 100641ba push 0 */
  push32((uint32_t)(0x0u));
  /* 100641bc call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x100641c2u);
  /* 100641c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100641c5 cmp eax, 0x249f0 */
  { uint32_t _a=(EAX),_b=(0x249f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100641ca jle 0x100641dd */
  if ((C.zf||C.sf!=C.of)) goto L_100641dd;
  /* 100641cc push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 100641d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 100641d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 100641d5 call 0x10062610 */
  push32(0x100641dau); f_10062610();
  /* 100641da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100641dd:;
  /* 100641dd push 4 */
  push32((uint32_t)(0x4u));
  /* 100641df call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x100641e5u);
  /* 100641e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100641e8 cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100641ed jle 0x10064200 */
  if ((C.zf||C.sf!=C.of)) goto L_10064200;
  /* 100641ef push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 100641f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100641f6 push 4 */
  push32((uint32_t)(0x4u));
  /* 100641f8 call 0x10062610 */
  push32(0x100641fdu); f_10062610();
  /* 100641fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10064200:;
  /* 10064200 push 5 */
  push32((uint32_t)(0x5u));
  /* 10064202 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10064208u);
  /* 10064208 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006420b cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10064210 jle 0x10064223 */
  if ((C.zf||C.sf!=C.of)) goto L_10064223;
  /* 10064212 push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 10064217 push 1 */
  push32((uint32_t)(0x1u));
  /* 10064219 push 5 */
  push32((uint32_t)(0x5u));
  /* 1006421b call 0x10062610 */
  push32(0x10064220u); f_10062610();
  /* 10064220 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10064223:;
  /* 10064223 pop edi */
  EDI = (pop32());
  /* 10064224 pop esi */
  ESI = (pop32());
  /* 10064225 pop ebp */
  EBP = (pop32());
  /* 10064226 pop ebx */
  EBX = (pop32());
  /* 10064227 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006422a ret  */
  ESPCHK(0x10063360u, _esp0);
  ESP += 4; return;
}

/* FUN_10004230 @ 0x10064230 (209 bytes, 56 insns) */
void f_10064230(void) {
  FTRACE(0x10064230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10064230 push 3 */
  push32((uint32_t)(0x3u));
  /* 10064232 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10064238u);
  /* 10064238 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006423b cmp eax, 0x672 */
  { uint32_t _a=(EAX),_b=(0x672u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10064240 jle 0x10064300 */
  if ((C.zf||C.sf!=C.of)) goto L_10064300;
  /* 10064246 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10064248 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1006424a push 0x10076340 */
  push32((uint32_t)(0x10076340u));
  /* 1006424f call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10064255u);
  /* 10064255 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10064257 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10064259 push 0x10076348 */
  push32((uint32_t)(0x10076348u));
  /* 1006425e call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10064264u);
  /* 10064264 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10064266 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10064268 push 0x10076330 */
  push32((uint32_t)(0x10076330u));
  /* 1006426d call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10064273u);
  /* 10064273 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10064275 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10064277 push 0x10076338 */
  push32((uint32_t)(0x10076338u));
  /* 1006427c call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10064282u);
  /* 10064282 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10064284 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10064286 push 0x10076350 */
  push32((uint32_t)(0x10076350u));
  /* 1006428b call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10064291u);
  /* 10064291 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10064293 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10064295 push 0x10076288 */
  push32((uint32_t)(0x10076288u));
  /* 1006429a call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100642a0u);
  /* 100642a0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100642a3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100642a5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100642a7 push 0x10076270 */
  push32((uint32_t)(0x10076270u));
  /* 100642ac call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100642b2u);
  /* 100642b2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100642b4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100642b6 push 0x10076278 */
  push32((uint32_t)(0x10076278u));
  /* 100642bb call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100642c1u);
  /* 100642c1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100642c3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100642c5 push 0x10076290 */
  push32((uint32_t)(0x10076290u));
  /* 100642ca call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100642d0u);
  /* 100642d0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100642d2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100642d4 push 0x10076298 */
  push32((uint32_t)(0x10076298u));
  /* 100642d9 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100642dfu);
  /* 100642df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100642e1 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100642e3 push 0x10076250 */
  push32((uint32_t)(0x10076250u));
  /* 100642e8 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100642eeu);
  /* 100642ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100642f0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100642f2 push 0x10075fb8 */
  push32((uint32_t)(0x10075fb8u));
  /* 100642f7 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100642fdu);
  /* 100642fd add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10064300:;
  /* 10064300 ret  */
  ESPCHK(0x10064230u, _esp0);
  ESP += 4; return;
}

/* FUN_10004310 @ 0x10064310 (79 bytes, 22 insns) */
void f_10064310(void) {
  FTRACE(0x10064310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10064310 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10064312 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10064314 push 0x10073900 */
  push32((uint32_t)(0x10073900u));
  /* 10064319 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006431fu);
  /* 1006431f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10064321 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10064323 push 0x10073908 */
  push32((uint32_t)(0x10073908u));
  /* 10064328 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006432eu);
  /* 1006432e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10064330 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10064332 push 0x100738f8 */
  push32((uint32_t)(0x100738f8u));
  /* 10064337 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006433du);
  /* 1006433d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1006433f push 0xa */
  push32((uint32_t)(0xau));
  /* 10064341 push 0x10075f68 */
  push32((uint32_t)(0x10075f68u));
  /* 10064346 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006434cu);
  /* 1006434c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1006434e push 0xa */
  push32((uint32_t)(0xau));
  /* 10064350 push 0x10075f58 */
  push32((uint32_t)(0x10075f58u));
  /* 10064355 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006435bu);
  /* 1006435b add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006435e ret  */
  ESPCHK(0x10064310u, _esp0);
  ESP += 4; return;
}

/* FUN_10004360 @ 0x10064360 (127 bytes, 35 insns) */
void f_10064360(void) {
  FTRACE(0x10064360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10064360 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10064362 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10064364 push 0x100761c8 */
  push32((uint32_t)(0x100761c8u));
  /* 10064369 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006436fu);
  /* 1006436f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10064371 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10064373 push 0x100761c0 */
  push32((uint32_t)(0x100761c0u));
  /* 10064378 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006437eu);
  /* 1006437e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10064380 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10064382 push 0x10076190 */
  push32((uint32_t)(0x10076190u));
  /* 10064387 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006438du);
  /* 1006438d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1006438f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10064391 push 0x10076188 */
  push32((uint32_t)(0x10076188u));
  /* 10064396 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006439cu);
  /* 1006439c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1006439e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100643a0 push 0x10076088 */
  push32((uint32_t)(0x10076088u));
  /* 100643a5 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100643abu);
  /* 100643ab push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100643ad push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100643af push 0x10076090 */
  push32((uint32_t)(0x10076090u));
  /* 100643b4 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100643bau);
  /* 100643ba add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100643bd push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100643bf push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100643c1 push 0x10076098 */
  push32((uint32_t)(0x10076098u));
  /* 100643c6 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100643ccu);
  /* 100643cc push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100643ce push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100643d0 push 0x100760a0 */
  push32((uint32_t)(0x100760a0u));
  /* 100643d5 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100643dbu);
  /* 100643db add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100643de ret  */
  ESPCHK(0x10064360u, _esp0);
  ESP += 4; return;
}

/* ProcessMiddleSeaAI @ 0x100643e0 (3643 bytes, 1035 insns) */
void f_100643e0(void) {
  FTRACE(0x100643e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100643e0 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100643e3 push ebx */
  push32((uint32_t)(EBX));
  /* 100643e4 push ebp */
  push32((uint32_t)(EBP));
  /* 100643e5 push esi */
  push32((uint32_t)(ESI));
  /* 100643e6 push edi */
  push32((uint32_t)(EDI));
  /* 100643e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 100643e9 call 0x10062760 */
  push32(0x100643eeu); f_10062760();
  /* 100643ee push 0x1006f030 */
  push32((uint32_t)(0x1006f030u));
  /* 100643f3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100643f5 call dword ptr [0x100764fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764fc))), 0x100643fbu);
  /* 100643fb push 0x10076180 */
  push32((uint32_t)(0x10076180u));
  /* 10064400 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10064406u);
  /* 10064406 push 3 */
  push32((uint32_t)(0x3u));
  /* 10064408 mov ebx, eax */
  EBX = (EAX);
  /* 1006440a call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10064410u);
  /* 10064410 mov ebp, eax */
  EBP = (EAX);
  /* 10064412 push 0x100761a8 */
  push32((uint32_t)(0x100761a8u));
  /* 10064417 mov dword ptr [esp + 0x30], ebp */
  w32((uint32_t)(ESP + 0x30), (EBP));
  /* 1006441b call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x10064421u);
  /* 10064421 push 0x10073678 */
  push32((uint32_t)(0x10073678u));
  /* 10064426 mov byte ptr [esp + 0x2f], al */
  w8((uint32_t)(ESP + 0x2f), (AL));
  /* 1006442a call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10064430u);
  /* 10064430 push 0x10076010 */
  push32((uint32_t)(0x10076010u));
  /* 10064435 call dword ptr [0x1007653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007653c))), 0x1006443bu);
  /* 1006443b push 0x100760d0 */
  push32((uint32_t)(0x100760d0u));
  /* 10064440 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10064446u);
  /* 10064446 push 0x100763a0 */
  push32((uint32_t)(0x100763a0u));
  /* 1006444b call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10064451u);
  /* 10064451 push 0x10076320 */
  push32((uint32_t)(0x10076320u));
  /* 10064456 mov esi, eax */
  ESI = (EAX);
  /* 10064458 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x1006445eu);
  /* 1006445e push 0x10073678 */
  push32((uint32_t)(0x10073678u));
  /* 10064463 mov edi, eax */
  EDI = (EAX);
  /* 10064465 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x1006446bu);
  /* 1006446b add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006446d add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064470 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10064472 mov byte ptr [esp + 0x12], 1 */
  w8((uint32_t)(ESP + 0x12), (0x1u));
  /* 10064477 mov dword ptr [esp + 0x14], eax */
  w32((uint32_t)(ESP + 0x14), (EAX));
  /* 1006447b call 0x10062660 */
  push32(0x10064480u); f_10062660();
  /* 10064480 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10064482 jle 0x10064498 */
  if ((C.zf||C.sf!=C.of)) goto L_10064498;
  /* 10064484 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10064486 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10064488 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1006448a push 0x10076318 */
  push32((uint32_t)(0x10076318u));
  /* 1006448f call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10064495u);
  /* 10064495 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10064498:;
  /* 10064498 push 0x100738c8 */
  push32((uint32_t)(0x100738c8u));
  /* 1006449d call dword ptr [0x10076534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076534))), 0x100644a3u);
  /* 100644a3 push 0x100738c8 */
  push32((uint32_t)(0x100738c8u));
  /* 100644a8 mov esi, eax */
  ESI = (EAX);
  /* 100644aa call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x100644b0u);
  /* 100644b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100644b3 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100644b5 je 0x100644bc */
  if (C.zf) goto L_100644bc;
  /* 100644b7 mov byte ptr [esp + 0x12], 0 */
  w8((uint32_t)(ESP + 0x12), (0x0u));
L_100644bc:;
  /* 100644bc test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100644be je 0x10065213 */
  if (C.zf) goto L_10065213;
  /* 100644c4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100644c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100644c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 100644ca push 0x10075fc8 */
  push32((uint32_t)(0x10075fc8u));
  /* 100644cf call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x100644d5u);
  /* 100644d5 push 0x10075fc8 */
  push32((uint32_t)(0x10075fc8u));
  /* 100644da call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x100644e0u);
  /* 100644e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100644e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100644e5 je 0x10065213 */
  if (C.zf) goto L_10065213;
  /* 100644eb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100644ed push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100644ef push 0x10076368 */
  push32((uint32_t)(0x10076368u));
  /* 100644f4 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100644fau);
  /* 100644fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100644fd call dword ptr [0x10076560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076560))), 0x10064503u);
  /* 10064503 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10064505 jne 0x1006455c */
  if (!C.zf) goto L_1006455c;
  /* 10064507 cmp ebp, 0x2bc */
  { uint32_t _a=(EBP),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006450d jle 0x10064534 */
  if ((C.zf||C.sf!=C.of)) goto L_10064534;
  /* 1006450f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10064511 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10064513 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10064515 push 0x10076180 */
  push32((uint32_t)(0x10076180u));
  /* 1006451a call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10064520u);
  /* 10064520 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10064522 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10064524 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10064526 push 0x10073678 */
  push32((uint32_t)(0x10073678u));
  /* 1006452b call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10064531u);
  /* 10064531 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10064534:;
  /* 10064534 cmp ebp, 0x3e8 */
  { uint32_t _a=(EBP),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006453a jle 0x10064548 */
  if ((C.zf||C.sf!=C.of)) goto L_10064548;
  /* 1006453c cmp dword ptr [esp + 0x14], 0x1e */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10064541 jle 0x10064548 */
  if ((C.zf||C.sf!=C.of)) goto L_10064548;
  /* 10064543 call 0x10064230 */
  push32(0x10064548u); f_10064230();
L_10064548:;
  /* 10064548 push 1 */
  push32((uint32_t)(0x1u));
  /* 1006454a push 1 */
  push32((uint32_t)(0x1u));
  /* 1006454c push 0 */
  push32((uint32_t)(0x0u));
  /* 1006454e call dword ptr [0x10076504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076504))), 0x10064554u);
  /* 10064554 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064557 jmp 0x1006461f */
  goto L_1006461f;
L_1006455c:;
  /* 1006455c mov eax, dword ptr [0x10076584] */
  EAX = (r32((uint32_t)(0x10076584)));
  /* 10064561 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10064564 je 0x10064578 */
  if (C.zf) goto L_10064578;
  /* 10064566 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10064567 je 0x10064572 */
  if (C.zf) goto L_10064572;
  /* 10064569 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1006456a jne 0x100645a4 */
  if (!C.zf) goto L_100645a4;
  /* 1006456c push 9 */
  push32((uint32_t)(0x9u));
  /* 1006456e push 4 */
  push32((uint32_t)(0x4u));
  /* 10064570 jmp 0x10064599 */
  goto L_10064599;
L_10064572:;
  /* 10064572 push 4 */
  push32((uint32_t)(0x4u));
  /* 10064574 push 9 */
  push32((uint32_t)(0x9u));
  /* 10064576 jmp 0x10064599 */
  goto L_10064599;
L_10064578:;
  /* 10064578 cmp ebp, 0x2ee0 */
  { uint32_t _a=(EBP),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006457e jle 0x1006458f */
  if ((C.zf||C.sf!=C.of)) goto L_1006458f;
  /* 10064580 push 6 */
  push32((uint32_t)(0x6u));
  /* 10064582 push 6 */
  push32((uint32_t)(0x6u));
  /* 10064584 push 9 */
  push32((uint32_t)(0x9u));
  /* 10064586 call dword ptr [0x10076504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076504))), 0x1006458cu);
  /* 1006458c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1006458f:;
  /* 1006458f push 5 */
  push32((uint32_t)(0x5u));
  /* 10064591 cmp ebp, 0x1f40 */
  { uint32_t _a=(EBP),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10064597 push 5 */
  push32((uint32_t)(0x5u));
L_10064599:;
  /* 10064599 push 9 */
  push32((uint32_t)(0x9u));
  /* 1006459b call dword ptr [0x10076504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076504))), 0x100645a1u);
  /* 100645a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100645a4:;
  /* 100645a4 mov al, byte ptr [esp + 0x13] */
  AL = (r8((uint32_t)(ESP + 0x13)));
  /* 100645a8 mov esi, 0x1c2 */
  ESI = (0x1c2u);
  /* 100645ad test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100645af je 0x100645b6 */
  if (C.zf) goto L_100645b6;
  /* 100645b1 mov esi, 0x17c */
  ESI = (0x17cu);
L_100645b6:;
  /* 100645b6 cmp ebx, 0x19 */
  { uint32_t _a=(EBX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100645b9 jge 0x100645d7 */
  if ((C.sf==C.of)) goto L_100645d7;
  /* 100645bb cmp ebp, 0x12c */
  { uint32_t _a=(EBP),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100645c1 jle 0x10064613 */
  if ((C.zf||C.sf!=C.of)) goto L_10064613;
  /* 100645c3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100645c5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100645c7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100645c9 push 0x10076180 */
  push32((uint32_t)(0x10076180u));
  /* 100645ce call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x100645d4u);
  /* 100645d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100645d7:;
  /* 100645d7 cmp ebp, 0x12c */
  { uint32_t _a=(EBP),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100645dd jle 0x10064613 */
  if ((C.zf||C.sf!=C.of)) goto L_10064613;
  /* 100645df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100645e1 push 0xe8 */
  push32((uint32_t)(0xe8u));
  /* 100645e6 push esi */
  push32((uint32_t)(ESI));
  /* 100645e7 push 0x10076180 */
  push32((uint32_t)(0x10076180u));
  /* 100645ec call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x100645f2u);
  /* 100645f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100645f5 cmp ebp, 0x190 */
  { uint32_t _a=(EBP),_b=(0x190u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100645fb jle 0x10064613 */
  if ((C.zf||C.sf!=C.of)) goto L_10064613;
  /* 100645fd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100645ff push 0xf4 */
  push32((uint32_t)(0xf4u));
  /* 10064604 push esi */
  push32((uint32_t)(ESI));
  /* 10064605 push 0x10073678 */
  push32((uint32_t)(0x10073678u));
  /* 1006460a call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10064610u);
  /* 10064610 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10064613:;
  /* 10064613 cmp dword ptr [esp + 0x14], 0x1e */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10064618 jle 0x1006461f */
  if ((C.zf||C.sf!=C.of)) goto L_1006461f;
  /* 1006461a call 0x10064230 */
  push32(0x1006461fu); f_10064230();
L_1006461f:;
  /* 1006461f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10064621 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10064623 push 1 */
  push32((uint32_t)(0x1u));
  /* 10064625 push 0x10075fa8 */
  push32((uint32_t)(0x10075fa8u));
  /* 1006462a call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10064630u);
  /* 10064630 push 5 */
  push32((uint32_t)(0x5u));
  /* 10064632 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10064634 push 2 */
  push32((uint32_t)(0x2u));
  /* 10064636 push 0x10075fa8 */
  push32((uint32_t)(0x10075fa8u));
  /* 1006463b call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10064641u);
  /* 10064641 push 5 */
  push32((uint32_t)(0x5u));
  /* 10064643 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10064645 push 3 */
  push32((uint32_t)(0x3u));
  /* 10064647 push 0x10075fa8 */
  push32((uint32_t)(0x10075fa8u));
  /* 1006464c call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10064652u);
  /* 10064652 push 0x10076240 */
  push32((uint32_t)(0x10076240u));
  /* 10064657 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x1006465du);
  /* 1006465d add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064660 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10064663 jle 0x100646d6 */
  if ((C.zf||C.sf!=C.of)) goto L_100646d6;
  /* 10064665 push 5 */
  push32((uint32_t)(0x5u));
  /* 10064667 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10064669 push 2 */
  push32((uint32_t)(0x2u));
  /* 1006466b push 0x10075fa8 */
  push32((uint32_t)(0x10075fa8u));
  /* 10064670 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10064676u);
  /* 10064676 push 0x10075fa8 */
  push32((uint32_t)(0x10075fa8u));
  /* 1006467b call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10064681u);
  /* 10064681 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064684 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10064687 jle 0x1006469d */
  if ((C.zf||C.sf!=C.of)) goto L_1006469d;
  /* 10064689 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1006468b push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1006468d push 1 */
  push32((uint32_t)(0x1u));
  /* 1006468f push 0x100760c8 */
  push32((uint32_t)(0x100760c8u));
  /* 10064694 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x1006469au);
  /* 1006469a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1006469d:;
  /* 1006469d push 0x10075fa8 */
  push32((uint32_t)(0x10075fa8u));
  /* 100646a2 call dword ptr [0x10076534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076534))), 0x100646a8u);
  /* 100646a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100646ab cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100646ae jle 0x100646c4 */
  if ((C.zf||C.sf!=C.of)) goto L_100646c4;
  /* 100646b0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100646b2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100646b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100646b6 push 0x10073868 */
  push32((uint32_t)(0x10073868u));
  /* 100646bb call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x100646c1u);
  /* 100646c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100646c4:;
  /* 100646c4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100646c6 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100646c8 push 0x10076100 */
  push32((uint32_t)(0x10076100u));
  /* 100646cd call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100646d3u);
  /* 100646d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100646d6:;
  /* 100646d6 push 0x10076180 */
  push32((uint32_t)(0x10076180u));
  /* 100646db call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x100646e1u);
  /* 100646e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100646e4 cmp eax, 0x23 */
  { uint32_t _a=(EAX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100646e7 jle 0x100646fd */
  if ((C.zf||C.sf!=C.of)) goto L_100646fd;
  /* 100646e9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100646eb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100646ed push 1 */
  push32((uint32_t)(0x1u));
  /* 100646ef push 0x10073868 */
  push32((uint32_t)(0x10073868u));
  /* 100646f4 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x100646fau);
  /* 100646fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100646fd:;
  /* 100646fd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100646ff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10064701 push 1 */
  push32((uint32_t)(0x1u));
  /* 10064703 push 0x100761d8 */
  push32((uint32_t)(0x100761d8u));
  /* 10064708 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x1006470eu);
  /* 1006470e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10064710 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10064712 push 1 */
  push32((uint32_t)(0x1u));
  /* 10064714 push 0x10076240 */
  push32((uint32_t)(0x10076240u));
  /* 10064719 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x1006471fu);
  /* 1006471f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10064721 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10064723 push 2 */
  push32((uint32_t)(0x2u));
  /* 10064725 push 0x10076240 */
  push32((uint32_t)(0x10076240u));
  /* 1006472a call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10064730u);
  /* 10064730 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10064732 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10064734 push 1 */
  push32((uint32_t)(0x1u));
  /* 10064736 push 0x10075fc0 */
  push32((uint32_t)(0x10075fc0u));
  /* 1006473b call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10064741u);
  /* 10064741 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064744 push 5 */
  push32((uint32_t)(0x5u));
  /* 10064746 push 0xa */
  push32((uint32_t)(0xau));
  /* 10064748 push 2 */
  push32((uint32_t)(0x2u));
  /* 1006474a push 0x100761d8 */
  push32((uint32_t)(0x100761d8u));
  /* 1006474f call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10064755u);
  /* 10064755 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10064757 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10064759 push 0x10073650 */
  push32((uint32_t)(0x10073650u));
  /* 1006475e call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10064764u);
  /* 10064764 push 0x10075f10 */
  push32((uint32_t)(0x10075f10u));
  /* 10064769 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x1006476fu);
  /* 1006476f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064772 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10064774 jle 0x1006478a */
  if ((C.zf||C.sf!=C.of)) goto L_1006478a;
  /* 10064776 push 3 */
  push32((uint32_t)(0x3u));
  /* 10064778 push 5 */
  push32((uint32_t)(0x5u));
  /* 1006477a push 1 */
  push32((uint32_t)(0x1u));
  /* 1006477c push 0x100760e8 */
  push32((uint32_t)(0x100760e8u));
  /* 10064781 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10064787u);
  /* 10064787 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1006478a:;
  /* 1006478a call dword ptr [0x10076560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076560))), 0x10064790u);
  /* 10064790 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10064792 je 0x100647a8 */
  if (C.zf) goto L_100647a8;
  /* 10064794 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10064796 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10064798 push 1 */
  push32((uint32_t)(0x1u));
  /* 1006479a push 0x10075f10 */
  push32((uint32_t)(0x10075f10u));
  /* 1006479f call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x100647a5u);
  /* 100647a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100647a8:;
  /* 100647a8 push 0xa */
  push32((uint32_t)(0xau));
  /* 100647aa push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100647ac push 1 */
  push32((uint32_t)(0x1u));
  /* 100647ae push 0x10075fd8 */
  push32((uint32_t)(0x10075fd8u));
  /* 100647b3 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x100647b9u);
  /* 100647b9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100647bb push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100647bd push 1 */
  push32((uint32_t)(0x1u));
  /* 100647bf push 0x10073608 */
  push32((uint32_t)(0x10073608u));
  /* 100647c4 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x100647cau);
  /* 100647ca add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100647cd cmp ebx, 0x19 */
  { uint32_t _a=(EBX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100647d0 jle 0x100647e6 */
  if ((C.zf||C.sf!=C.of)) goto L_100647e6;
  /* 100647d2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100647d4 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100647d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 100647d8 push 0x10075fc8 */
  push32((uint32_t)(0x10075fc8u));
  /* 100647dd call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x100647e3u);
  /* 100647e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100647e6:;
  /* 100647e6 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100647e8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100647ea push 1 */
  push32((uint32_t)(0x1u));
  /* 100647ec push 0x10076248 */
  push32((uint32_t)(0x10076248u));
  /* 100647f1 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x100647f7u);
  /* 100647f7 push 5 */
  push32((uint32_t)(0x5u));
  /* 100647f9 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100647fb push 2 */
  push32((uint32_t)(0x2u));
  /* 100647fd push 0x10076248 */
  push32((uint32_t)(0x10076248u));
  /* 10064802 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10064808u);
  /* 10064808 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1006480a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1006480c push 0x10076068 */
  push32((uint32_t)(0x10076068u));
  /* 10064811 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10064817u);
  /* 10064817 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10064819 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1006481b push 0x10076260 */
  push32((uint32_t)(0x10076260u));
  /* 10064820 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10064826u);
  /* 10064826 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10064828 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1006482a push 0x100761a8 */
  push32((uint32_t)(0x100761a8u));
  /* 1006482f call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10064835u);
  /* 10064835 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064838 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1006483a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1006483c push 0x10076030 */
  push32((uint32_t)(0x10076030u));
  /* 10064841 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10064847u);
  /* 10064847 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10064849 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1006484b push 0x10076020 */
  push32((uint32_t)(0x10076020u));
  /* 10064850 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10064856u);
  /* 10064856 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10064858 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1006485a push 0x10076028 */
  push32((uint32_t)(0x10076028u));
  /* 1006485f call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10064865u);
  /* 10064865 push 0x100760c8 */
  push32((uint32_t)(0x100760c8u));
  /* 1006486a call dword ptr [0x10076534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076534))), 0x10064870u);
  /* 10064870 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064873 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10064875 je 0x10064934 */
  if (C.zf) goto L_10064934;
  /* 1006487b push 0x100761a8 */
  push32((uint32_t)(0x100761a8u));
  /* 10064880 call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x10064886u);
  /* 10064886 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064889 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1006488b jne 0x10064934 */
  if (!C.zf) goto L_10064934;
  /* 10064891 push 1 */
  push32((uint32_t)(0x1u));
  /* 10064893 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10064899u);
  /* 10064899 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006489c cmp eax, 0xe74 */
  { uint32_t _a=(EAX),_b=(0xe74u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100648a1 jle 0x100648c7 */
  if ((C.zf||C.sf!=C.of)) goto L_100648c7;
  /* 100648a3 push 4 */
  push32((uint32_t)(0x4u));
  /* 100648a5 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x100648abu);
  /* 100648ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100648ae cmp eax, 0x157c */
  { uint32_t _a=(EAX),_b=(0x157cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100648b3 jle 0x100648c7 */
  if ((C.zf||C.sf!=C.of)) goto L_100648c7;
  /* 100648b5 push 5 */
  push32((uint32_t)(0x5u));
  /* 100648b7 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x100648bdu);
  /* 100648bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100648c0 cmp eax, 0x20d0 */
  { uint32_t _a=(EAX),_b=(0x20d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100648c5 jg 0x10064934 */
  if ((!C.zf&&C.sf==C.of)) goto L_10064934;
L_100648c7:;
  /* 100648c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 100648c9 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x100648cfu);
  /* 100648cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100648d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100648d4 je 0x1006495b */
  if (C.zf) goto L_1006495b;
  /* 100648da push 5 */
  push32((uint32_t)(0x5u));
  /* 100648dc call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x100648e2u);
  /* 100648e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100648e5 cmp eax, 0x20d0 */
  { uint32_t _a=(EAX),_b=(0x20d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100648ea jle 0x1006495b */
  if ((C.zf||C.sf!=C.of)) goto L_1006495b;
  /* 100648ec push 5 */
  push32((uint32_t)(0x5u));
  /* 100648ee call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x100648f4u);
  /* 100648f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100648f7 cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100648fc jle 0x1006490f */
  if ((C.zf||C.sf!=C.of)) goto L_1006490f;
  /* 100648fe push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10064903 push 1 */
  push32((uint32_t)(0x1u));
  /* 10064905 push 5 */
  push32((uint32_t)(0x5u));
  /* 10064907 call 0x10062610 */
  push32(0x1006490cu); f_10062610();
  /* 1006490c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1006490f:;
  /* 1006490f push 4 */
  push32((uint32_t)(0x4u));
  /* 10064911 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10064917u);
  /* 10064917 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006491a cmp eax, 0x32c8 */
  { uint32_t _a=(EAX),_b=(0x32c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006491f jle 0x1006495b */
  if ((C.zf||C.sf!=C.of)) goto L_1006495b;
  /* 10064921 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10064926 push 1 */
  push32((uint32_t)(0x1u));
  /* 10064928 push 4 */
  push32((uint32_t)(0x4u));
  /* 1006492a call 0x10062610 */
  push32(0x1006492fu); f_10062610();
  /* 1006492f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064932 jmp 0x1006495b */
  goto L_1006495b;
L_10064934:;
  /* 10064934 push 0 */
  push32((uint32_t)(0x0u));
  /* 10064936 push 1 */
  push32((uint32_t)(0x1u));
  /* 10064938 call 0x100625f0 */
  push32(0x1006493du); f_100625f0();
  /* 1006493d push 0 */
  push32((uint32_t)(0x0u));
  /* 1006493f push 4 */
  push32((uint32_t)(0x4u));
  /* 10064941 call 0x100625f0 */
  push32(0x10064946u); f_100625f0();
  /* 10064946 push 0 */
  push32((uint32_t)(0x0u));
  /* 10064948 push 3 */
  push32((uint32_t)(0x3u));
  /* 1006494a call 0x100625f0 */
  push32(0x1006494fu); f_100625f0();
  /* 1006494f push 0 */
  push32((uint32_t)(0x0u));
  /* 10064951 push 1 */
  push32((uint32_t)(0x1u));
  /* 10064953 call 0x100625f0 */
  push32(0x10064958u); f_100625f0();
  /* 10064958 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1006495b:;
  /* 1006495b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1006495d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1006495f push 0x10073790 */
  push32((uint32_t)(0x10073790u));
  /* 10064964 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006496au);
  /* 1006496a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1006496c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1006496e push 1 */
  push32((uint32_t)(0x1u));
  /* 10064970 push 0x100762c8 */
  push32((uint32_t)(0x100762c8u));
  /* 10064975 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x1006497bu);
  /* 1006497b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1006497d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1006497f push 2 */
  push32((uint32_t)(0x2u));
  /* 10064981 push 0x100762c8 */
  push32((uint32_t)(0x100762c8u));
  /* 10064986 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x1006498cu);
  /* 1006498c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1006498e push 0xa */
  push32((uint32_t)(0xau));
  /* 10064990 push 3 */
  push32((uint32_t)(0x3u));
  /* 10064992 push 0x100762c8 */
  push32((uint32_t)(0x100762c8u));
  /* 10064997 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x1006499du);
  /* 1006499d push 0x10073948 */
  push32((uint32_t)(0x10073948u));
  /* 100649a2 call dword ptr [0x1007653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007653c))), 0x100649a8u);
  /* 100649a8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100649ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100649ad jne 0x100649f8 */
  if (!C.zf) goto L_100649f8;
  /* 100649af push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 100649b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 100649b3 call 0x10062640 */
  push32(0x100649b8u); f_10062640();
  /* 100649b8 mov esi, eax */
  ESI = (EAX);
  /* 100649ba push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 100649bc push 0 */
  push32((uint32_t)(0x0u));
  /* 100649be sar esi, 2 */
  ESI = (sh_sar((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 100649c1 call 0x10062640 */
  push32(0x100649c6u); f_10062640();
  /* 100649c6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 100649c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 100649ca add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100649cc call 0x10062640 */
  push32(0x100649d1u); f_10062640();
  /* 100649d1 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100649d3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100649d6 cmp esi, 6 */
  { uint32_t _a=(ESI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100649d9 jle 0x100649e8 */
  if ((C.zf||C.sf!=C.of)) goto L_100649e8;
  /* 100649db push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100649dd push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100649df push 6 */
  push32((uint32_t)(0x6u));
  /* 100649e1 push 0x10075f80 */
  push32((uint32_t)(0x10075f80u));
  /* 100649e6 jmp 0x10064a03 */
  goto L_10064a03;
L_100649e8:;
  /* 100649e8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100649ea je 0x10064a0c */
  if (C.zf) goto L_10064a0c;
  /* 100649ec push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100649ee push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100649f0 push esi */
  push32((uint32_t)(ESI));
  /* 100649f1 push 0x10075f80 */
  push32((uint32_t)(0x10075f80u));
  /* 100649f6 jmp 0x10064a03 */
  goto L_10064a03;
L_100649f8:;
  /* 100649f8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100649fa push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100649fc push 0xa */
  push32((uint32_t)(0xau));
  /* 100649fe push 0x100738d8 */
  push32((uint32_t)(0x100738d8u));
L_10064a03:;
  /* 10064a03 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10064a09u);
  /* 10064a09 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10064a0c:;
  /* 10064a0c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10064a0e push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10064a10 push 0x10073948 */
  push32((uint32_t)(0x10073948u));
  /* 10064a15 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10064a1bu);
  /* 10064a1b push 0x10076260 */
  push32((uint32_t)(0x10076260u));
  /* 10064a20 call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x10064a26u);
  /* 10064a26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064a29 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10064a2b je 0x10064a4e */
  if (C.zf) goto L_10064a4e;
  /* 10064a2d push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10064a2f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10064a31 push 0x10073948 */
  push32((uint32_t)(0x10073948u));
  /* 10064a36 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10064a3cu);
  /* 10064a3c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10064a3e push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10064a40 push 0x10073860 */
  push32((uint32_t)(0x10073860u));
  /* 10064a45 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10064a4bu);
  /* 10064a4b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10064a4e:;
  /* 10064a4e push 0x10073948 */
  push32((uint32_t)(0x10073948u));
  /* 10064a53 call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x10064a59u);
  /* 10064a59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064a5c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10064a5e je 0x10064a86 */
  if (C.zf) goto L_10064a86;
  /* 10064a60 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10064a62 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10064a64 push 0x10073930 */
  push32((uint32_t)(0x10073930u));
  /* 10064a69 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10064a6fu);
  /* 10064a6f push 0xa */
  push32((uint32_t)(0xau));
  /* 10064a71 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10064a73 push 0x10073870 */
  push32((uint32_t)(0x10073870u));
  /* 10064a78 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10064a7eu);
  /* 10064a7e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064a81 call 0x10063320 */
  push32(0x10064a86u); f_10063320();
L_10064a86:;
  /* 10064a86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10064a88 push 1 */
  push32((uint32_t)(0x1u));
  /* 10064a8a call 0x100625f0 */
  push32(0x10064a8fu); f_100625f0();
  /* 10064a8f push 0 */
  push32((uint32_t)(0x0u));
  /* 10064a91 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10064a97u);
  /* 10064a97 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064a9a cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10064a9f jle 0x10064ae3 */
  if ((C.zf||C.sf!=C.of)) goto L_10064ae3;
  /* 10064aa1 push 0x10073790 */
  push32((uint32_t)(0x10073790u));
  /* 10064aa6 call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x10064aacu);
  /* 10064aac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064aaf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10064ab1 je 0x10064ae3 */
  if (C.zf) goto L_10064ae3;
  /* 10064ab3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10064ab5 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10064abbu);
  /* 10064abb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064abe cmp eax, 0x1d4c */
  { uint32_t _a=(EAX),_b=(0x1d4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10064ac3 jge 0x10064ae3 */
  if ((C.sf==C.of)) goto L_10064ae3;
  /* 10064ac5 push 0x10073948 */
  push32((uint32_t)(0x10073948u));
  /* 10064aca call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x10064ad0u);
  /* 10064ad0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064ad3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10064ad5 jne 0x10064ae3 */
  if (!C.zf) goto L_10064ae3;
  /* 10064ad7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10064ad9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10064adb call 0x100625f0 */
  push32(0x10064ae0u); f_100625f0();
  /* 10064ae0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10064ae3:;
  /* 10064ae3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10064ae5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10064ae7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10064ae9 push 0x100761e0 */
  push32((uint32_t)(0x100761e0u));
  /* 10064aee call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10064af4u);
  /* 10064af4 push 0x100760e0 */
  push32((uint32_t)(0x100760e0u));
  /* 10064af9 call dword ptr [0x1007653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007653c))), 0x10064affu);
  /* 10064aff add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064b02 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10064b04 je 0x10064b1a */
  if (C.zf) goto L_10064b1a;
  /* 10064b06 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10064b08 push 0xa */
  push32((uint32_t)(0xau));
  /* 10064b0a push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10064b0c push 0x100761e0 */
  push32((uint32_t)(0x100761e0u));
  /* 10064b11 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10064b17u);
  /* 10064b17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10064b1a:;
  /* 10064b1a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10064b1c push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10064b1e push 0x100760e0 */
  push32((uint32_t)(0x100760e0u));
  /* 10064b23 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10064b29u);
  /* 10064b29 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10064b2b push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10064b2d push 0x100760f0 */
  push32((uint32_t)(0x100760f0u));
  /* 10064b32 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10064b38u);
  /* 10064b38 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10064b3a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10064b3c push 0x100762d8 */
  push32((uint32_t)(0x100762d8u));
  /* 10064b41 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10064b47u);
  /* 10064b47 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10064b49 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10064b4b push 0x100762c0 */
  push32((uint32_t)(0x100762c0u));
  /* 10064b50 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10064b56u);
  /* 10064b56 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10064b58 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10064b5a push 0x100762d0 */
  push32((uint32_t)(0x100762d0u));
  /* 10064b5f call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10064b65u);
  /* 10064b65 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10064b67 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10064b69 push 0x100762b0 */
  push32((uint32_t)(0x100762b0u));
  /* 10064b6e call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10064b74u);
  /* 10064b74 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064b77 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10064b79 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10064b7b push 0x100762b8 */
  push32((uint32_t)(0x100762b8u));
  /* 10064b80 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10064b86u);
  /* 10064b86 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10064b88 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10064b8a push 0x100762a8 */
  push32((uint32_t)(0x100762a8u));
  /* 10064b8f call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10064b95u);
  /* 10064b95 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064b98 cmp ebx, 0x23 */
  { uint32_t _a=(EBX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10064b9b jle 0x10064bf4 */
  if ((C.zf||C.sf!=C.of)) goto L_10064bf4;
  /* 10064b9d mov al, byte ptr [esp + 0x12] */
  AL = (r8((uint32_t)(ESP + 0x12)));
  /* 10064ba1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10064ba3 je 0x10064bf4 */
  if (C.zf) goto L_10064bf4;
  /* 10064ba5 push 0xa */
  push32((uint32_t)(0xau));
  /* 10064ba7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10064ba9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10064bab push 0x100738c8 */
  push32((uint32_t)(0x100738c8u));
  /* 10064bb0 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10064bb6u);
  /* 10064bb6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064bb9 cmp ebx, 0x3c */
  { uint32_t _a=(EBX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10064bbc jle 0x10064bf4 */
  if ((C.zf||C.sf!=C.of)) goto L_10064bf4;
  /* 10064bbe push 0xa */
  push32((uint32_t)(0xau));
  /* 10064bc0 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10064bc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10064bc4 push 0x100738c8 */
  push32((uint32_t)(0x100738c8u));
  /* 10064bc9 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10064bcfu);
  /* 10064bcf push 0xa */
  push32((uint32_t)(0xau));
  /* 10064bd1 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10064bd3 push 3 */
  push32((uint32_t)(0x3u));
  /* 10064bd5 push 0x100738c8 */
  push32((uint32_t)(0x100738c8u));
  /* 10064bda call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10064be0u);
  /* 10064be0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10064be2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10064be4 push 4 */
  push32((uint32_t)(0x4u));
  /* 10064be6 push 0x100738c8 */
  push32((uint32_t)(0x100738c8u));
  /* 10064beb call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10064bf1u);
  /* 10064bf1 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10064bf4:;
  /* 10064bf4 mov bl, byte ptr [esp + 0x13] */
  BL = (r8((uint32_t)(ESP + 0x13)));
  /* 10064bf8 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10064bfa je 0x10064cde */
  if (C.zf) goto L_10064cde;
  /* 10064c00 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10064c02 push 0xa */
  push32((uint32_t)(0xau));
  /* 10064c04 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10064c06 push 0x100738b8 */
  push32((uint32_t)(0x100738b8u));
  /* 10064c0b call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10064c11u);
  /* 10064c11 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10064c13 push 1 */
  push32((uint32_t)(0x1u));
  /* 10064c15 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10064c17 push 0x10076150 */
  push32((uint32_t)(0x10076150u));
  /* 10064c1c call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10064c22u);
  /* 10064c22 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10064c24 push 1 */
  push32((uint32_t)(0x1u));
  /* 10064c26 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10064c28 push 0x10076268 */
  push32((uint32_t)(0x10076268u));
  /* 10064c2d call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10064c33u);
  /* 10064c33 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10064c35 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10064c37 push 0x10073620 */
  push32((uint32_t)(0x10073620u));
  /* 10064c3c call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10064c42u);
  /* 10064c42 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10064c44 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10064c46 push 0x100736f8 */
  push32((uint32_t)(0x100736f8u));
  /* 10064c4b call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10064c51u);
  /* 10064c51 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064c54 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10064c56 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10064c58 push 0x10073618 */
  push32((uint32_t)(0x10073618u));
  /* 10064c5d call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10064c63u);
  /* 10064c63 push 0x10076188 */
  push32((uint32_t)(0x10076188u));
  /* 10064c68 call dword ptr [0x1007653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007653c))), 0x10064c6eu);
  /* 10064c6e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064c71 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10064c73 je 0x10064c89 */
  if (C.zf) goto L_10064c89;
  /* 10064c75 push 0xa */
  push32((uint32_t)(0xau));
  /* 10064c77 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10064c79 push 5 */
  push32((uint32_t)(0x5u));
  /* 10064c7b push 0x10076360 */
  push32((uint32_t)(0x10076360u));
  /* 10064c80 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10064c86u);
  /* 10064c86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10064c89:;
  /* 10064c89 push 0x100760a0 */
  push32((uint32_t)(0x100760a0u));
  /* 10064c8e call dword ptr [0x1007653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007653c))), 0x10064c94u);
  /* 10064c94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064c97 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10064c99 je 0x10064caf */
  if (C.zf) goto L_10064caf;
  /* 10064c9b push 0xa */
  push32((uint32_t)(0xau));
  /* 10064c9d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10064c9f push 0xa */
  push32((uint32_t)(0xau));
  /* 10064ca1 push 0x10073658 */
  push32((uint32_t)(0x10073658u));
  /* 10064ca6 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10064cacu);
  /* 10064cac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10064caf:;
  /* 10064caf call 0x10064360 */
  push32(0x10064cb4u); f_10064360();
L_10064cb4:;
  /* 10064cb4 push 0x10076010 */
  push32((uint32_t)(0x10076010u));
  /* 10064cb9 call dword ptr [0x1007653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007653c))), 0x10064cbfu);
  /* 10064cbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064cc2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10064cc4 je 0x10064d14 */
  if (C.zf) goto L_10064d14;
  /* 10064cc6 push 0x100760f0 */
  push32((uint32_t)(0x100760f0u));
  /* 10064ccb call dword ptr [0x1007653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007653c))), 0x10064cd1u);
  /* 10064cd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064cd4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10064cd6 jne 0x10064d05 */
  if (!C.zf) goto L_10064d05;
  /* 10064cd8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10064cda push 2 */
  push32((uint32_t)(0x2u));
  /* 10064cdc jmp 0x10064d09 */
  goto L_10064d09;
L_10064cde:;
  /* 10064cde push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10064ce0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10064ce2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10064ce4 push 0x10076150 */
  push32((uint32_t)(0x10076150u));
  /* 10064ce9 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10064cefu);
  /* 10064cef push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10064cf1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10064cf3 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10064cf5 push 0x10076268 */
  push32((uint32_t)(0x10076268u));
  /* 10064cfa call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10064d00u);
  /* 10064d00 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064d03 jmp 0x10064cb4 */
  goto L_10064cb4;
L_10064d05:;
  /* 10064d05 push 4 */
  push32((uint32_t)(0x4u));
  /* 10064d07 push 4 */
  push32((uint32_t)(0x4u));
L_10064d09:;
  /* 10064d09 push 8 */
  push32((uint32_t)(0x8u));
  /* 10064d0b call dword ptr [0x10076504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076504))), 0x10064d11u);
  /* 10064d11 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10064d14:;
  /* 10064d14 push 0x100760c8 */
  push32((uint32_t)(0x100760c8u));
  /* 10064d19 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10064d1fu);
  /* 10064d1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064d22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10064d24 je 0x10064d3a */
  if (C.zf) goto L_10064d3a;
  /* 10064d26 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10064d28 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10064d2a push 6 */
  push32((uint32_t)(0x6u));
  /* 10064d2c push 0x100761e0 */
  push32((uint32_t)(0x100761e0u));
  /* 10064d31 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10064d37u);
  /* 10064d37 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10064d3a:;
  /* 10064d3a push 0x100760e0 */
  push32((uint32_t)(0x100760e0u));
  /* 10064d3f call dword ptr [0x1007653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007653c))), 0x10064d45u);
  /* 10064d45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064d48 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10064d4a je 0x10064d60 */
  if (C.zf) goto L_10064d60;
  /* 10064d4c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10064d4e push 0xa */
  push32((uint32_t)(0xau));
  /* 10064d50 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10064d52 push 0x100761e0 */
  push32((uint32_t)(0x100761e0u));
  /* 10064d57 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10064d5du);
  /* 10064d5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10064d60:;
  /* 10064d60 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10064d62 je 0x10064e63 */
  if (C.zf) goto L_10064e63;
  /* 10064d68 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10064d6a push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10064d6c push 2 */
  push32((uint32_t)(0x2u));
  /* 10064d6e push 0x100760c8 */
  push32((uint32_t)(0x100760c8u));
  /* 10064d73 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10064d79u);
  /* 10064d79 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10064d7b push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10064d7d push 3 */
  push32((uint32_t)(0x3u));
  /* 10064d7f push 0x100760c8 */
  push32((uint32_t)(0x100760c8u));
  /* 10064d84 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10064d8au);
  /* 10064d8a push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10064d8c push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10064d8e push 4 */
  push32((uint32_t)(0x4u));
  /* 10064d90 push 0x100760c8 */
  push32((uint32_t)(0x100760c8u));
  /* 10064d95 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10064d9bu);
  /* 10064d9b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10064d9d push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10064d9f push 5 */
  push32((uint32_t)(0x5u));
  /* 10064da1 push 0x100760c8 */
  push32((uint32_t)(0x100760c8u));
  /* 10064da6 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10064dacu);
  /* 10064dac add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064daf push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10064db1 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10064db3 push 6 */
  push32((uint32_t)(0x6u));
  /* 10064db5 push 0x100760c8 */
  push32((uint32_t)(0x100760c8u));
  /* 10064dba call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10064dc0u);
  /* 10064dc0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10064dc2 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10064dc4 push 0x10076010 */
  push32((uint32_t)(0x10076010u));
  /* 10064dc9 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10064dcfu);
  /* 10064dcf push 0x100760d0 */
  push32((uint32_t)(0x100760d0u));
  /* 10064dd4 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10064ddau);
  /* 10064dda add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064ddd cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10064de0 jle 0x10064e03 */
  if ((C.zf||C.sf!=C.of)) goto L_10064e03;
  /* 10064de2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10064de4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10064de6 push 0x100761f8 */
  push32((uint32_t)(0x100761f8u));
  /* 10064deb call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10064df1u);
  /* 10064df1 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10064df3 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10064df5 push 0x10076200 */
  push32((uint32_t)(0x10076200u));
  /* 10064dfa call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10064e00u);
  /* 10064e00 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10064e03:;
  /* 10064e03 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10064e05 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10064e07 push 0x100760e0 */
  push32((uint32_t)(0x100760e0u));
  /* 10064e0c call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10064e12u);
  /* 10064e12 push 0x100738f8 */
  push32((uint32_t)(0x100738f8u));
  /* 10064e17 call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x10064e1du);
  /* 10064e1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064e20 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10064e22 je 0x10064e63 */
  if (C.zf) goto L_10064e63;
  /* 10064e24 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10064e26 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10064e28 push 0x10076158 */
  push32((uint32_t)(0x10076158u));
  /* 10064e2d call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10064e33u);
  /* 10064e33 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10064e35 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10064e37 push 0x10076168 */
  push32((uint32_t)(0x10076168u));
  /* 10064e3c call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10064e42u);
  /* 10064e42 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10064e44 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10064e46 push 0x10076170 */
  push32((uint32_t)(0x10076170u));
  /* 10064e4b call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10064e51u);
  /* 10064e51 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10064e53 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10064e55 push 0x10076160 */
  push32((uint32_t)(0x10076160u));
  /* 10064e5a call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10064e60u);
  /* 10064e60 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10064e63:;
  /* 10064e63 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10064e65 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10064e67 push 0x10073790 */
  push32((uint32_t)(0x10073790u));
  /* 10064e6c call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10064e72u);
  /* 10064e72 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10064e74 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10064e76 push 0x100738d0 */
  push32((uint32_t)(0x100738d0u));
  /* 10064e7b call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10064e81u);
  /* 10064e81 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10064e83 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10064e85 push 0x10076140 */
  push32((uint32_t)(0x10076140u));
  /* 10064e8a call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10064e90u);
  /* 10064e90 mov eax, dword ptr [esp + 0x38] */
  EAX = (r32((uint32_t)(ESP + 0x38)));
  /* 10064e94 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064e97 cmp eax, 0x15e */
  { uint32_t _a=(EAX),_b=(0x15eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10064e9c jle 0x10064eba */
  if ((C.zf||C.sf!=C.of)) goto L_10064eba;
  /* 10064e9e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10064ea0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10064ea2 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10064ea7 push 0x100760d0 */
  push32((uint32_t)(0x100760d0u));
  /* 10064eac call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10064eb2u);
  /* 10064eb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064eb5 call 0x10064310 */
  push32(0x10064ebau); f_10064310();
L_10064eba:;
  /* 10064eba push 0x10073868 */
  push32((uint32_t)(0x10073868u));
  /* 10064ebf call dword ptr [0x10076534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076534))), 0x10064ec5u);
  /* 10064ec5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064ec8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10064eca je 0x10065213 */
  if (C.zf) goto L_10065213;
  /* 10064ed0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10064ed2 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10064ed8u);
  /* 10064ed8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10064eda mov edi, eax */
  EDI = (EAX);
  /* 10064edc call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10064ee2u);
  /* 10064ee2 push 4 */
  push32((uint32_t)(0x4u));
  /* 10064ee4 mov esi, eax */
  ESI = (EAX);
  /* 10064ee6 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10064eecu);
  /* 10064eec push 5 */
  push32((uint32_t)(0x5u));
  /* 10064eee mov ebp, eax */
  EBP = (EAX);
  /* 10064ef0 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10064ef6u);
  /* 10064ef6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10064ef8 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 10064efc call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10064f02u);
  /* 10064f02 mov ebx, eax */
  EBX = (EAX);
  /* 10064f04 mov eax, dword ptr [esp + 0x2c] */
  EAX = (r32((uint32_t)(ESP + 0x2c)));
  /* 10064f08 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064f0b cmp eax, 0x96 */
  { uint32_t _a=(EAX),_b=(0x96u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10064f10 jge 0x10064fa3 */
  if ((C.sf==C.of)) goto L_10064fa3;
  /* 10064f16 cmp esi, 0x1388 */
  { uint32_t _a=(ESI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10064f1c jle 0x10064f29 */
  if ((C.zf||C.sf!=C.of)) goto L_10064f29;
  /* 10064f1e push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10064f23 push 3 */
  push32((uint32_t)(0x3u));
  /* 10064f25 push 2 */
  push32((uint32_t)(0x2u));
  /* 10064f27 jmp 0x10064f9b */
  goto L_10064f9b;
L_10064f29:;
  /* 10064f29 cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10064f2f jle 0x10064f3c */
  if ((C.zf||C.sf!=C.of)) goto L_10064f3c;
  /* 10064f31 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 10064f36 push 3 */
  push32((uint32_t)(0x3u));
  /* 10064f38 push 2 */
  push32((uint32_t)(0x2u));
  /* 10064f3a jmp 0x10064f9b */
  goto L_10064f9b;
L_10064f3c:;
  /* 10064f3c cmp edi, 0x1388 */
  { uint32_t _a=(EDI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10064f42 jle 0x10064f4f */
  if ((C.zf||C.sf!=C.of)) goto L_10064f4f;
  /* 10064f44 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10064f49 push 3 */
  push32((uint32_t)(0x3u));
  /* 10064f4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10064f4d jmp 0x10064f9b */
  goto L_10064f9b;
L_10064f4f:;
  /* 10064f4f cmp edi, 0x3e8 */
  { uint32_t _a=(EDI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10064f55 jle 0x10064f62 */
  if ((C.zf||C.sf!=C.of)) goto L_10064f62;
  /* 10064f57 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 10064f5c push 3 */
  push32((uint32_t)(0x3u));
  /* 10064f5e push 0 */
  push32((uint32_t)(0x0u));
  /* 10064f60 jmp 0x10064f9b */
  goto L_10064f9b;
L_10064f62:;
  /* 10064f62 cmp dword ptr [esp + 0x14], 0x7d0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10064f6a jle 0x10064f77 */
  if ((C.zf||C.sf!=C.of)) goto L_10064f77;
  /* 10064f6c push 0x320 */
  push32((uint32_t)(0x320u));
  /* 10064f71 push 3 */
  push32((uint32_t)(0x3u));
  /* 10064f73 push 5 */
  push32((uint32_t)(0x5u));
  /* 10064f75 jmp 0x10064f9b */
  goto L_10064f9b;
L_10064f77:;
  /* 10064f77 cmp ebp, 0x7d0 */
  { uint32_t _a=(EBP),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10064f7d jle 0x10064f8a */
  if ((C.zf||C.sf!=C.of)) goto L_10064f8a;
  /* 10064f7f push 0x320 */
  push32((uint32_t)(0x320u));
  /* 10064f84 push 3 */
  push32((uint32_t)(0x3u));
  /* 10064f86 push 4 */
  push32((uint32_t)(0x4u));
  /* 10064f88 jmp 0x10064f9b */
  goto L_10064f9b;
L_10064f8a:;
  /* 10064f8a cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10064f90 jle 0x10064fa3 */
  if ((C.zf||C.sf!=C.of)) goto L_10064fa3;
  /* 10064f92 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10064f97 push 3 */
  push32((uint32_t)(0x3u));
  /* 10064f99 push 1 */
  push32((uint32_t)(0x1u));
L_10064f9b:;
  /* 10064f9b call 0x10062610 */
  push32(0x10064fa0u); f_10062610();
  /* 10064fa0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10064fa3:;
  /* 10064fa3 push 0x10075f10 */
  push32((uint32_t)(0x10075f10u));
  /* 10064fa8 call dword ptr [0x10076534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076534))), 0x10064faeu);
  /* 10064fae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064fb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10064fb3 je 0x10065003 */
  if (C.zf) goto L_10065003;
  /* 10064fb5 cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10064fbb jle 0x10065003 */
  if ((C.zf||C.sf!=C.of)) goto L_10065003;
  /* 10064fbd push 0x10076260 */
  push32((uint32_t)(0x10076260u));
  /* 10064fc2 call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x10064fc8u);
  /* 10064fc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10064fcb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10064fcd jne 0x10065003 */
  if (!C.zf) goto L_10065003;
  /* 10064fcf cmp ebp, 0xbb8 */
  { uint32_t _a=(EBP),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10064fd5 jle 0x10064fe8 */
  if ((C.zf||C.sf!=C.of)) goto L_10064fe8;
  /* 10064fd7 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10064fdc push 3 */
  push32((uint32_t)(0x3u));
  /* 10064fde push 4 */
  push32((uint32_t)(0x4u));
  /* 10064fe0 call 0x10062610 */
  push32(0x10064fe5u); f_10062610();
  /* 10064fe5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10064fe8:;
  /* 10064fe8 cmp dword ptr [esp + 0x14], 0xfa0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10064ff0 jle 0x10065003 */
  if ((C.zf||C.sf!=C.of)) goto L_10065003;
  /* 10064ff2 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10064ff7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10064ff9 push 5 */
  push32((uint32_t)(0x5u));
  /* 10064ffb call 0x10062610 */
  push32(0x10065000u); f_10062610();
  /* 10065000 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10065003:;
  /* 10065003 push 2 */
  push32((uint32_t)(0x2u));
  /* 10065005 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x1006500bu);
  /* 1006500b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006500e cmp eax, 0x1d4c0 */
  { uint32_t _a=(EAX),_b=(0x1d4c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10065013 jle 0x10065026 */
  if ((C.zf||C.sf!=C.of)) goto L_10065026;
  /* 10065015 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 1006501a push 1 */
  push32((uint32_t)(0x1u));
  /* 1006501c push 2 */
  push32((uint32_t)(0x2u));
  /* 1006501e call 0x10062610 */
  push32(0x10065023u); f_10062610();
  /* 10065023 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10065026:;
  /* 10065026 push 0 */
  push32((uint32_t)(0x0u));
  /* 10065028 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x1006502eu);
  /* 1006502e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065031 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10065036 jle 0x10065049 */
  if ((C.zf||C.sf!=C.of)) goto L_10065049;
  /* 10065038 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 1006503d push 1 */
  push32((uint32_t)(0x1u));
  /* 1006503f push 0 */
  push32((uint32_t)(0x0u));
  /* 10065041 call 0x10062610 */
  push32(0x10065046u); f_10062610();
  /* 10065046 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10065049:;
  /* 10065049 push 0x100761d8 */
  push32((uint32_t)(0x100761d8u));
  /* 1006504e call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10065054u);
  /* 10065054 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065057 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10065059 je 0x100651e0 */
  if (C.zf) goto L_100651e0;
  /* 1006505f push 0x100761a8 */
  push32((uint32_t)(0x100761a8u));
  /* 10065064 call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x1006506au);
  /* 1006506a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006506d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1006506f jne 0x100651e0 */
  if (!C.zf) goto L_100651e0;
  /* 10065075 push 5 */
  push32((uint32_t)(0x5u));
  /* 10065077 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x1006507du);
  /* 1006507d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065080 cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10065085 jle 0x10065140 */
  if ((C.zf||C.sf!=C.of)) goto L_10065140;
  /* 1006508b push 0 */
  push32((uint32_t)(0x0u));
  /* 1006508d call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10065093u);
  /* 10065093 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065096 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10065098 je 0x10065140 */
  if (C.zf) goto L_10065140;
  /* 1006509e push 1 */
  push32((uint32_t)(0x1u));
  /* 100650a0 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x100650a6u);
  /* 100650a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100650a9 cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100650ae jge 0x10065140 */
  if ((C.sf==C.of)) goto L_10065140;
  /* 100650b4 push 5 */
  push32((uint32_t)(0x5u));
  /* 100650b6 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x100650bcu);
  /* 100650bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100650bf cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100650c4 jle 0x100650d7 */
  if ((C.zf||C.sf!=C.of)) goto L_100650d7;
  /* 100650c6 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 100650cb push 1 */
  push32((uint32_t)(0x1u));
  /* 100650cd push 5 */
  push32((uint32_t)(0x5u));
  /* 100650cf call 0x10062610 */
  push32(0x100650d4u); f_10062610();
  /* 100650d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100650d7:;
  /* 100650d7 push 4 */
  push32((uint32_t)(0x4u));
  /* 100650d9 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x100650dfu);
  /* 100650df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100650e2 cmp eax, 0x1f40 */
  { uint32_t _a=(EAX),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100650e7 jle 0x100650fa */
  if ((C.zf||C.sf!=C.of)) goto L_100650fa;
  /* 100650e9 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 100650ee push 1 */
  push32((uint32_t)(0x1u));
  /* 100650f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 100650f2 call 0x10062610 */
  push32(0x100650f7u); f_10062610();
  /* 100650f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100650fa:;
  /* 100650fa push 2 */
  push32((uint32_t)(0x2u));
  /* 100650fc call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10065102u);
  /* 10065102 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065105 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006510a jle 0x1006511d */
  if ((C.zf||C.sf!=C.of)) goto L_1006511d;
  /* 1006510c push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 10065111 push 1 */
  push32((uint32_t)(0x1u));
  /* 10065113 push 2 */
  push32((uint32_t)(0x2u));
  /* 10065115 call 0x10062610 */
  push32(0x1006511au); f_10062610();
  /* 1006511a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1006511d:;
  /* 1006511d push 3 */
  push32((uint32_t)(0x3u));
  /* 1006511f call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10065125u);
  /* 10065125 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065128 cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006512d jle 0x10065140 */
  if ((C.zf||C.sf!=C.of)) goto L_10065140;
  /* 1006512f push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 10065134 push 1 */
  push32((uint32_t)(0x1u));
  /* 10065136 push 3 */
  push32((uint32_t)(0x3u));
  /* 10065138 call 0x10062610 */
  push32(0x1006513du); f_10062610();
  /* 1006513d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10065140:;
  /* 10065140 push 5 */
  push32((uint32_t)(0x5u));
  /* 10065142 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10065148u);
  /* 10065148 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006514b cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10065150 jle 0x100651e0 */
  if ((C.zf||C.sf!=C.of)) goto L_100651e0;
  /* 10065156 push 1 */
  push32((uint32_t)(0x1u));
  /* 10065158 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x1006515eu);
  /* 1006515e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065161 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10065163 je 0x100651e0 */
  if (C.zf) goto L_100651e0;
  /* 10065165 push 1 */
  push32((uint32_t)(0x1u));
  /* 10065167 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x1006516du);
  /* 1006516d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065170 cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10065175 jle 0x100651e0 */
  if ((C.zf||C.sf!=C.of)) goto L_100651e0;
  /* 10065177 push 5 */
  push32((uint32_t)(0x5u));
  /* 10065179 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x1006517fu);
  /* 1006517f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065182 cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10065187 jle 0x1006519a */
  if ((C.zf||C.sf!=C.of)) goto L_1006519a;
  /* 10065189 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1006518e push 4 */
  push32((uint32_t)(0x4u));
  /* 10065190 push 5 */
  push32((uint32_t)(0x5u));
  /* 10065192 call 0x10062610 */
  push32(0x10065197u); f_10062610();
  /* 10065197 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1006519a:;
  /* 1006519a push 2 */
  push32((uint32_t)(0x2u));
  /* 1006519c call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x100651a2u);
  /* 100651a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100651a5 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100651aa jle 0x100651bd */
  if ((C.zf||C.sf!=C.of)) goto L_100651bd;
  /* 100651ac push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 100651b1 push 4 */
  push32((uint32_t)(0x4u));
  /* 100651b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 100651b5 call 0x10062610 */
  push32(0x100651bau); f_10062610();
  /* 100651ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100651bd:;
  /* 100651bd push 3 */
  push32((uint32_t)(0x3u));
  /* 100651bf call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x100651c5u);
  /* 100651c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100651c8 cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100651cd jle 0x100651e0 */
  if ((C.zf||C.sf!=C.of)) goto L_100651e0;
  /* 100651cf push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 100651d4 push 4 */
  push32((uint32_t)(0x4u));
  /* 100651d6 push 3 */
  push32((uint32_t)(0x3u));
  /* 100651d8 call 0x10062610 */
  push32(0x100651ddu); f_10062610();
  /* 100651dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100651e0:;
  /* 100651e0 call dword ptr [0x100764f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f0))), 0x100651e6u);
  /* 100651e6 mov ecx, dword ptr [eax*4 + 0x100765fc] */
  ECX = (r32((uint32_t)(EAX*4 + 0x100765fc)));
  /* 100651ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100651ef jne 0x10065213 */
  if (!C.zf) goto L_10065213;
  /* 100651f1 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 100651f6 push 3 */
  push32((uint32_t)(0x3u));
  /* 100651f8 push 5 */
  push32((uint32_t)(0x5u));
  /* 100651fa call 0x10062610 */
  push32(0x100651ffu); f_10062610();
  /* 100651ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065202 call dword ptr [0x100764f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f0))), 0x10065208u);
  /* 10065208 mov dword ptr [eax*4 + 0x100765fc], 1 */
  w32((uint32_t)(EAX*4 + 0x100765fc), (0x1u));
L_10065213:;
  /* 10065213 pop edi */
  EDI = (pop32());
  /* 10065214 pop esi */
  ESI = (pop32());
  /* 10065215 pop ebp */
  EBP = (pop32());
  /* 10065216 pop ebx */
  EBX = (pop32());
  /* 10065217 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006521a ret  */
  ESPCHK(0x100643e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005220 @ 0x10065220 (72 bytes, 22 insns) */
void f_10065220(void) {
  FTRACE(0x10065220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10065220 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065222 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065224 push 1 */
  push32((uint32_t)(0x1u));
  /* 10065226 push 0x10075fc8 */
  push32((uint32_t)(0x10075fc8u));
  /* 1006522b call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10065231u);
  /* 10065231 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065233 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065235 push 1 */
  push32((uint32_t)(0x1u));
  /* 10065237 push 0x10075fa8 */
  push32((uint32_t)(0x10075fa8u));
  /* 1006523c call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10065242u);
  /* 10065242 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065244 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065246 push 1 */
  push32((uint32_t)(0x1u));
  /* 10065248 push 0x10075fc0 */
  push32((uint32_t)(0x10075fc0u));
  /* 1006524d call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10065253u);
  /* 10065253 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065255 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065257 push 1 */
  push32((uint32_t)(0x1u));
  /* 10065259 push 0x10073868 */
  push32((uint32_t)(0x10073868u));
  /* 1006525e call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10065264u);
  /* 10065264 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065267 ret  */
  ESPCHK(0x10065220u, _esp0);
  ESP += 4; return;
}

/* FUN_10005270 @ 0x10065270 (55 bytes, 16 insns) */
void f_10065270(void) {
  FTRACE(0x10065270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10065270 cmp dword ptr [esp + 4], 0x10073678 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0x10073678u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10065278 jne 0x100652a4 */
  if (!C.zf) goto L_100652a4;
  /* 1006527a push 0x10076330 */
  push32((uint32_t)(0x10076330u));
  /* 1006527f call dword ptr [0x1007653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007653c))), 0x10065285u);
  /* 10065285 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065288 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1006528a je 0x100652a4 */
  if (C.zf) goto L_100652a4;
  /* 1006528c push 0x10076278 */
  push32((uint32_t)(0x10076278u));
  /* 10065291 call dword ptr [0x1007653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007653c))), 0x10065297u);
  /* 10065297 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006529a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1006529c je 0x100652a4 */
  if (C.zf) goto L_100652a4;
  /* 1006529e mov eax, 1 */
  EAX = (0x1u);
  /* 100652a3 ret  */
  ESPCHK(0x10065270u, _esp0);
  ESP += 4; return;
L_100652a4:;
  /* 100652a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100652a6 ret  */
  ESPCHK(0x10065270u, _esp0);
  ESP += 4; return;
}

/* FUN_100052b0 @ 0x100652b0 (2008 bytes, 535 insns) */
void f_100652b0(void) {
  FTRACE(0x100652b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100652b0 push 0x10076268 */
  push32((uint32_t)(0x10076268u));
  /* 100652b5 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x100652bbu);
  /* 100652bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100652be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100652c0 jne 0x100652d4 */
  if (!C.zf) goto L_100652d4;
  /* 100652c2 push 0x100738b8 */
  push32((uint32_t)(0x100738b8u));
  /* 100652c7 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x100652cdu);
  /* 100652cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100652d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100652d2 je 0x10065304 */
  if (C.zf) goto L_10065304;
L_100652d4:;
  /* 100652d4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100652d6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100652d8 push 0x10073940 */
  push32((uint32_t)(0x10073940u));
  /* 100652dd call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100652e3u);
  /* 100652e3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100652e5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100652e7 push 0x100761e8 */
  push32((uint32_t)(0x100761e8u));
  /* 100652ec call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100652f2u);
  /* 100652f2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100652f4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100652f6 push 0x100761f0 */
  push32((uint32_t)(0x100761f0u));
  /* 100652fb call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065301u);
  /* 10065301 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10065304:;
  /* 10065304 push 0x100763a0 */
  push32((uint32_t)(0x100763a0u));
  /* 10065309 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x1006530fu);
  /* 1006530f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065312 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10065315 jg 0x1006533f */
  if ((!C.zf&&C.sf==C.of)) goto L_1006533f;
  /* 10065317 push 0x10076320 */
  push32((uint32_t)(0x10076320u));
  /* 1006531c call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10065322u);
  /* 10065322 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065325 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10065328 jg 0x1006533f */
  if ((!C.zf&&C.sf==C.of)) goto L_1006533f;
  /* 1006532a push 0x10073678 */
  push32((uint32_t)(0x10073678u));
  /* 1006532f call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10065335u);
  /* 10065335 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065338 cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006533d jle 0x1006539d */
  if ((C.zf||C.sf!=C.of)) goto L_1006539d;
L_1006533f:;
  /* 1006533f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065341 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10065343 push 0x10073618 */
  push32((uint32_t)(0x10073618u));
  /* 10065348 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006534eu);
  /* 1006534e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065350 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10065352 push 0x10073620 */
  push32((uint32_t)(0x10073620u));
  /* 10065357 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006535du);
  /* 1006535d push 0x100763a0 */
  push32((uint32_t)(0x100763a0u));
  /* 10065362 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10065368u);
  /* 10065368 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006536b cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10065370 jg 0x1006538b */
  if ((!C.zf&&C.sf==C.of)) goto L_1006538b;
  /* 10065372 push 0x10076320 */
  push32((uint32_t)(0x10076320u));
  /* 10065377 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x1006537du);
  /* 1006537d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065380 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10065383 jg 0x1006538b */
  if ((!C.zf&&C.sf==C.of)) goto L_1006538b;
  /* 10065385 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065387 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10065389 jmp 0x1006538f */
  goto L_1006538f;
L_1006538b:;
  /* 1006538b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1006538d push 0x5f */
  push32((uint32_t)(0x5fu));
L_1006538f:;
  /* 1006538f push 0x100736f8 */
  push32((uint32_t)(0x100736f8u));
  /* 10065394 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006539au);
  /* 1006539a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1006539d:;
  /* 1006539d push 0x10073678 */
  push32((uint32_t)(0x10073678u));
  /* 100653a2 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x100653a8u);
  /* 100653a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100653ab cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100653ae jle 0x10065463 */
  if ((C.zf||C.sf!=C.of)) goto L_10065463;
  /* 100653b4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100653b6 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100653b8 push 0x10076340 */
  push32((uint32_t)(0x10076340u));
  /* 100653bd call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100653c3u);
  /* 100653c3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100653c5 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 100653c7 push 0x10076348 */
  push32((uint32_t)(0x10076348u));
  /* 100653cc call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100653d2u);
  /* 100653d2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100653d4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100653d6 push 0x10076330 */
  push32((uint32_t)(0x10076330u));
  /* 100653db call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100653e1u);
  /* 100653e1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100653e3 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100653e5 push 0x10076288 */
  push32((uint32_t)(0x10076288u));
  /* 100653ea call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100653f0u);
  /* 100653f0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100653f2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 100653f4 push 0x10076270 */
  push32((uint32_t)(0x10076270u));
  /* 100653f9 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100653ffu);
  /* 100653ff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065401 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10065403 push 0x10076278 */
  push32((uint32_t)(0x10076278u));
  /* 10065408 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006540eu);
  /* 1006540e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065411 push 0x10073678 */
  push32((uint32_t)(0x10073678u));
  /* 10065416 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x1006541cu);
  /* 1006541c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006541f cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10065422 jle 0x10065463 */
  if ((C.zf||C.sf!=C.of)) goto L_10065463;
  /* 10065424 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065426 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10065428 push 0x10076338 */
  push32((uint32_t)(0x10076338u));
  /* 1006542d call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065433u);
  /* 10065433 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065435 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10065437 push 0x10076350 */
  push32((uint32_t)(0x10076350u));
  /* 1006543c call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065442u);
  /* 10065442 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065444 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10065446 push 0x10076290 */
  push32((uint32_t)(0x10076290u));
  /* 1006544b call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065451u);
  /* 10065451 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065453 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10065455 push 0x10076298 */
  push32((uint32_t)(0x10076298u));
  /* 1006545a call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065460u);
  /* 10065460 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10065463:;
  /* 10065463 push 0x100760d0 */
  push32((uint32_t)(0x100760d0u));
  /* 10065468 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x1006546eu);
  /* 1006546e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065471 cmp eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10065474 jle 0x1006550b */
  if ((C.zf||C.sf!=C.of)) goto L_1006550b;
  /* 1006547a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1006547c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1006547e push 0x10073900 */
  push32((uint32_t)(0x10073900u));
  /* 10065483 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065489u);
  /* 10065489 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1006548b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1006548d push 0x10073908 */
  push32((uint32_t)(0x10073908u));
  /* 10065492 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065498u);
  /* 10065498 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1006549a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1006549c push 0x100738f8 */
  push32((uint32_t)(0x100738f8u));
  /* 100654a1 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100654a7u);
  /* 100654a7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100654a9 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100654ab push 0x10075f68 */
  push32((uint32_t)(0x10075f68u));
  /* 100654b0 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100654b6u);
  /* 100654b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100654b8 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100654ba push 0x10075f58 */
  push32((uint32_t)(0x10075f58u));
  /* 100654bf call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100654c5u);
  /* 100654c5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100654c7 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100654c9 push 0x10075f60 */
  push32((uint32_t)(0x10075f60u));
  /* 100654ce call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100654d4u);
  /* 100654d4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100654d7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100654d9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100654db push 0x100761f8 */
  push32((uint32_t)(0x100761f8u));
  /* 100654e0 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100654e6u);
  /* 100654e6 push 0x100760d0 */
  push32((uint32_t)(0x100760d0u));
  /* 100654eb call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x100654f1u);
  /* 100654f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100654f4 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100654f7 jle 0x1006550b */
  if ((C.zf||C.sf!=C.of)) goto L_1006550b;
  /* 100654f9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100654fb push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100654fd push 0x10076200 */
  push32((uint32_t)(0x10076200u));
  /* 10065502 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065508u);
  /* 10065508 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1006550b:;
  /* 1006550b push 0x100736f0 */
  push32((uint32_t)(0x100736f0u));
  /* 10065510 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10065516u);
  /* 10065516 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065519 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006551c jle 0x1006553f */
  if ((C.zf||C.sf!=C.of)) goto L_1006553f;
  /* 1006551e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065520 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10065522 push 0x10076250 */
  push32((uint32_t)(0x10076250u));
  /* 10065527 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006552du);
  /* 1006552d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1006552f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10065531 push 0x10075fb8 */
  push32((uint32_t)(0x10075fb8u));
  /* 10065536 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006553cu);
  /* 1006553c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1006553f:;
  /* 1006553f push 0x100763a0 */
  push32((uint32_t)(0x100763a0u));
  /* 10065544 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x1006554au);
  /* 1006554a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006554d cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10065550 jle 0x10065623 */
  if ((C.zf||C.sf!=C.of)) goto L_10065623;
  /* 10065556 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065558 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1006555a push 0x10076120 */
  push32((uint32_t)(0x10076120u));
  /* 1006555f call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065565u);
  /* 10065565 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065567 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10065569 push 0x10076118 */
  push32((uint32_t)(0x10076118u));
  /* 1006556e call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065574u);
  /* 10065574 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065576 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10065578 push 0x10076110 */
  push32((uint32_t)(0x10076110u));
  /* 1006557d call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065583u);
  /* 10065583 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065585 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10065587 push 0x10076008 */
  push32((uint32_t)(0x10076008u));
  /* 1006558c call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065592u);
  /* 10065592 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065594 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10065596 push 0x10076000 */
  push32((uint32_t)(0x10076000u));
  /* 1006559b call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100655a1u);
  /* 100655a1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100655a3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100655a5 push 0x10075ff8 */
  push32((uint32_t)(0x10075ff8u));
  /* 100655aa call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100655b0u);
  /* 100655b0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100655b3 push 0x100763a0 */
  push32((uint32_t)(0x100763a0u));
  /* 100655b8 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x100655beu);
  /* 100655be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100655c1 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100655c4 jle 0x10065623 */
  if ((C.zf||C.sf!=C.of)) goto L_10065623;
  /* 100655c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100655c8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100655ca push 0x10076108 */
  push32((uint32_t)(0x10076108u));
  /* 100655cf call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100655d5u);
  /* 100655d5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100655d7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100655d9 push 0x100760f8 */
  push32((uint32_t)(0x100760f8u));
  /* 100655de call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100655e4u);
  /* 100655e4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100655e6 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100655e8 push 0x10076148 */
  push32((uint32_t)(0x10076148u));
  /* 100655ed call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100655f3u);
  /* 100655f3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100655f5 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100655f7 push 0x10075ff0 */
  push32((uint32_t)(0x10075ff0u));
  /* 100655fc call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065602u);
  /* 10065602 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065604 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10065606 push 0x10075fe8 */
  push32((uint32_t)(0x10075fe8u));
  /* 1006560b call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065611u);
  /* 10065611 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065613 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10065615 push 0x10075fe0 */
  push32((uint32_t)(0x10075fe0u));
  /* 1006561a call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065620u);
  /* 10065620 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10065623:;
  /* 10065623 push 0x10076320 */
  push32((uint32_t)(0x10076320u));
  /* 10065628 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x1006562eu);
  /* 1006562e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065631 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10065634 jle 0x10065706 */
  if ((C.zf||C.sf!=C.of)) goto L_10065706;
  /* 1006563a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1006563c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1006563e push 0x10073738 */
  push32((uint32_t)(0x10073738u));
  /* 10065643 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065649u);
  /* 10065649 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1006564b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1006564d push 0x10073730 */
  push32((uint32_t)(0x10073730u));
  /* 10065652 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065658u);
  /* 10065658 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1006565a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1006565c push 0x10073728 */
  push32((uint32_t)(0x10073728u));
  /* 10065661 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065667u);
  /* 10065667 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065669 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1006566b push 0x100736a8 */
  push32((uint32_t)(0x100736a8u));
  /* 10065670 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065676u);
  /* 10065676 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065678 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1006567a push 0x100736a0 */
  push32((uint32_t)(0x100736a0u));
  /* 1006567f call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065685u);
  /* 10065685 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065687 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10065689 push 0x10073698 */
  push32((uint32_t)(0x10073698u));
  /* 1006568e call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065694u);
  /* 10065694 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065697 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065699 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1006569b push 0x10073690 */
  push32((uint32_t)(0x10073690u));
  /* 100656a0 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100656a6u);
  /* 100656a6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100656a8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100656aa push 0x10073668 */
  push32((uint32_t)(0x10073668u));
  /* 100656af call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100656b5u);
  /* 100656b5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100656b7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100656b9 push 0x10073660 */
  push32((uint32_t)(0x10073660u));
  /* 100656be call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100656c4u);
  /* 100656c4 push 0x10073660 */
  push32((uint32_t)(0x10073660u));
  /* 100656c9 call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x100656cfu);
  /* 100656cf add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100656d2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100656d4 je 0x10065706 */
  if (C.zf) goto L_10065706;
  /* 100656d6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100656d8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100656da push 0x10073710 */
  push32((uint32_t)(0x10073710u));
  /* 100656df call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100656e5u);
  /* 100656e5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100656e7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100656e9 push 0x10073708 */
  push32((uint32_t)(0x10073708u));
  /* 100656ee call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100656f4u);
  /* 100656f4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100656f6 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100656f8 push 0x10073700 */
  push32((uint32_t)(0x10073700u));
  /* 100656fd call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065703u);
  /* 10065703 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10065706:;
  /* 10065706 push 0x10073680 */
  push32((uint32_t)(0x10073680u));
  /* 1006570b call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10065711u);
  /* 10065711 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065714 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10065717 jle 0x1006579f */
  if ((C.zf||C.sf!=C.of)) goto L_1006579f;
  /* 1006571d push 0x10073670 */
  push32((uint32_t)(0x10073670u));
  /* 10065722 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10065728u);
  /* 10065728 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006572b cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006572e jge 0x1006579f */
  if ((C.sf==C.of)) goto L_1006579f;
  /* 10065730 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065732 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10065734 push 0x100738f0 */
  push32((uint32_t)(0x100738f0u));
  /* 10065739 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006573fu);
  /* 1006573f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065741 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10065743 push 0x100738e8 */
  push32((uint32_t)(0x100738e8u));
  /* 10065748 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006574eu);
  /* 1006574e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065750 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10065752 push 0x100738e0 */
  push32((uint32_t)(0x100738e0u));
  /* 10065757 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006575du);
  /* 1006575d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1006575f push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10065761 push 0x100738a8 */
  push32((uint32_t)(0x100738a8u));
  /* 10065766 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006576cu);
  /* 1006576c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1006576e push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10065770 push 0x100738a0 */
  push32((uint32_t)(0x100738a0u));
  /* 10065775 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006577bu);
  /* 1006577b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1006577d push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1006577f push 0x10073898 */
  push32((uint32_t)(0x10073898u));
  /* 10065784 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006578au);
  /* 1006578a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006578d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1006578f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10065791 push 0x100761f8 */
  push32((uint32_t)(0x100761f8u));
  /* 10065796 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006579cu);
  /* 1006579c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1006579f:;
  /* 1006579f push 0x10073670 */
  push32((uint32_t)(0x10073670u));
  /* 100657a4 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x100657aau);
  /* 100657aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100657ad cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100657b0 jle 0x10065891 */
  if ((C.zf||C.sf!=C.of)) goto L_10065891;
  /* 100657b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100657b8 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100657ba push 0x10073648 */
  push32((uint32_t)(0x10073648u));
  /* 100657bf call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100657c5u);
  /* 100657c5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100657c7 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 100657c9 push 0x10073640 */
  push32((uint32_t)(0x10073640u));
  /* 100657ce call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100657d4u);
  /* 100657d4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100657d6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100657d8 push 0x10073638 */
  push32((uint32_t)(0x10073638u));
  /* 100657dd call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100657e3u);
  /* 100657e3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100657e5 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100657e7 push 0x10076308 */
  push32((uint32_t)(0x10076308u));
  /* 100657ec call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100657f2u);
  /* 100657f2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100657f4 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100657f6 push 0x10076300 */
  push32((uint32_t)(0x10076300u));
  /* 100657fb call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065801u);
  /* 10065801 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065803 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10065805 push 0x100762f8 */
  push32((uint32_t)(0x100762f8u));
  /* 1006580a call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065810u);
  /* 10065810 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065813 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065815 push 0xa */
  push32((uint32_t)(0xau));
  /* 10065817 push 0x10076380 */
  push32((uint32_t)(0x10076380u));
  /* 1006581c call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065822u);
  /* 10065822 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065824 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10065826 push 0x10076378 */
  push32((uint32_t)(0x10076378u));
  /* 1006582b call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065831u);
  /* 10065831 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065833 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10065835 push 0x100763c8 */
  push32((uint32_t)(0x100763c8u));
  /* 1006583a call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065840u);
  /* 10065840 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065842 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10065844 push 0x100763c0 */
  push32((uint32_t)(0x100763c0u));
  /* 10065849 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006584fu);
  /* 1006584f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065851 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10065853 push 0x100763b8 */
  push32((uint32_t)(0x100763b8u));
  /* 10065858 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006585eu);
  /* 1006585e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065860 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10065862 push 0x100763b0 */
  push32((uint32_t)(0x100763b0u));
  /* 10065867 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006586du);
  /* 1006586d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065870 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065872 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10065874 push 0x100761f8 */
  push32((uint32_t)(0x100761f8u));
  /* 10065879 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006587fu);
  /* 1006587f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065881 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10065883 push 0x10076200 */
  push32((uint32_t)(0x10076200u));
  /* 10065888 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006588eu);
  /* 1006588e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10065891:;
  /* 10065891 push 0x10075f70 */
  push32((uint32_t)(0x10075f70u));
  /* 10065896 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x1006589cu);
  /* 1006589c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006589f cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100658a2 jle 0x10065a00 */
  if ((C.zf||C.sf!=C.of)) goto L_10065a00;
  /* 100658a8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100658aa push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100658ac push 0x100736d0 */
  push32((uint32_t)(0x100736d0u));
  /* 100658b1 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100658b7u);
  /* 100658b7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100658b9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100658bb push 0x100736d8 */
  push32((uint32_t)(0x100736d8u));
  /* 100658c0 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100658c6u);
  /* 100658c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100658c8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100658ca push 0x100736e0 */
  push32((uint32_t)(0x100736e0u));
  /* 100658cf call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100658d5u);
  /* 100658d5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100658d7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100658d9 push 0x100736e8 */
  push32((uint32_t)(0x100736e8u));
  /* 100658de call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100658e4u);
  /* 100658e4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100658e6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100658e8 push 0x100736b0 */
  push32((uint32_t)(0x100736b0u));
  /* 100658ed call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100658f3u);
  /* 100658f3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100658f5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100658f7 push 0x100736c0 */
  push32((uint32_t)(0x100736c0u));
  /* 100658fc call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065902u);
  /* 10065902 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065905 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065907 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10065909 push 0x10073778 */
  push32((uint32_t)(0x10073778u));
  /* 1006590e call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065914u);
  /* 10065914 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065916 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10065918 push 0x10073780 */
  push32((uint32_t)(0x10073780u));
  /* 1006591d call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065923u);
  /* 10065923 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065925 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10065927 push 0x10073788 */
  push32((uint32_t)(0x10073788u));
  /* 1006592c call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065932u);
  /* 10065932 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065934 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10065936 push 0x10073760 */
  push32((uint32_t)(0x10073760u));
  /* 1006593b call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065941u);
  /* 10065941 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065943 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10065945 push 0x10073768 */
  push32((uint32_t)(0x10073768u));
  /* 1006594a call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065950u);
  /* 10065950 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065952 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10065954 push 0x10073770 */
  push32((uint32_t)(0x10073770u));
  /* 10065959 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006595fu);
  /* 1006595f add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065962 push 0x10075f70 */
  push32((uint32_t)(0x10075f70u));
  /* 10065967 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x1006596du);
  /* 1006596d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065970 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10065973 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065975 jle 0x1006598a */
  if ((C.zf||C.sf!=C.of)) goto L_1006598a;
  /* 10065977 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10065979 push 0x10076018 */
  push32((uint32_t)(0x10076018u));
  /* 1006597e call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065984u);
  /* 10065984 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065986 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10065988 jmp 0x1006599b */
  goto L_1006599b;
L_1006598a:;
  /* 1006598a push 0xf */
  push32((uint32_t)(0xfu));
  /* 1006598c push 0x10076018 */
  push32((uint32_t)(0x10076018u));
  /* 10065991 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065997u);
  /* 10065997 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065999 push 0xf */
  push32((uint32_t)(0xfu));
L_1006599b:;
  /* 1006599b push 0x10076078 */
  push32((uint32_t)(0x10076078u));
  /* 100659a0 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100659a6u);
  /* 100659a6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100659a9 push 0x10076018 */
  push32((uint32_t)(0x10076018u));
  /* 100659ae call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x100659b4u);
  /* 100659b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100659b7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100659b9 je 0x100659df */
  if (C.zf) goto L_100659df;
  /* 100659bb push 0x10076078 */
  push32((uint32_t)(0x10076078u));
  /* 100659c0 call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x100659c6u);
  /* 100659c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100659c9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100659cb je 0x100659df */
  if (C.zf) goto L_100659df;
  /* 100659cd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100659cf push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100659d1 push 0x10076070 */
  push32((uint32_t)(0x10076070u));
  /* 100659d6 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100659dcu);
  /* 100659dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100659df:;
  /* 100659df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100659e1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100659e3 push 0x100761f8 */
  push32((uint32_t)(0x100761f8u));
  /* 100659e8 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100659eeu);
  /* 100659ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100659f0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100659f2 push 0x10076200 */
  push32((uint32_t)(0x10076200u));
  /* 100659f7 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100659fdu);
  /* 100659fd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10065a00:;
  /* 10065a00 push 0x100762f8 */
  push32((uint32_t)(0x100762f8u));
  /* 10065a05 call dword ptr [0x1007653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007653c))), 0x10065a0bu);
  /* 10065a0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065a0e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10065a10 je 0x10065a87 */
  if (C.zf) goto L_10065a87;
  /* 10065a12 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065a14 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10065a16 push 0x10076160 */
  push32((uint32_t)(0x10076160u));
  /* 10065a1b call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065a21u);
  /* 10065a21 push 0x10076160 */
  push32((uint32_t)(0x10076160u));
  /* 10065a26 call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x10065a2cu);
  /* 10065a2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065a2f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10065a31 je 0x10065a87 */
  if (C.zf) goto L_10065a87;
  /* 10065a33 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065a35 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10065a37 push 0x10076170 */
  push32((uint32_t)(0x10076170u));
  /* 10065a3c call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065a42u);
  /* 10065a42 push 0x10076170 */
  push32((uint32_t)(0x10076170u));
  /* 10065a47 call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x10065a4du);
  /* 10065a4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065a50 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10065a52 je 0x10065a87 */
  if (C.zf) goto L_10065a87;
  /* 10065a54 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065a56 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10065a58 push 0x10076168 */
  push32((uint32_t)(0x10076168u));
  /* 10065a5d call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065a63u);
  /* 10065a63 push 0x10076168 */
  push32((uint32_t)(0x10076168u));
  /* 10065a68 call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x10065a6eu);
  /* 10065a6e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065a71 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10065a73 je 0x10065a87 */
  if (C.zf) goto L_10065a87;
  /* 10065a75 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065a77 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10065a79 push 0x10076158 */
  push32((uint32_t)(0x10076158u));
  /* 10065a7e call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065a84u);
  /* 10065a84 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10065a87:;
  /* 10065a87 ret  */
  ESPCHK(0x100652b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a90 @ 0x10065a90 (305 bytes, 86 insns) */
void f_10065a90(void) {
  FTRACE(0x10065a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10065a90 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065a92 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10065a94 push 0x10076368 */
  push32((uint32_t)(0x10076368u));
  /* 10065a99 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065a9fu);
  /* 10065a9f push 0x10075f10 */
  push32((uint32_t)(0x10075f10u));
  /* 10065aa4 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10065aaau);
  /* 10065aaa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065aad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10065aaf je 0x10065ac3 */
  if (C.zf) goto L_10065ac3;
  /* 10065ab1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065ab3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065ab5 push 0x10073650 */
  push32((uint32_t)(0x10073650u));
  /* 10065aba call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065ac0u);
  /* 10065ac0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10065ac3:;
  /* 10065ac3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065ac5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065ac7 push 0x10076068 */
  push32((uint32_t)(0x10076068u));
  /* 10065acc call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065ad2u);
  /* 10065ad2 push 0x10073678 */
  push32((uint32_t)(0x10073678u));
  /* 10065ad7 call 0x10065270 */
  push32(0x10065adcu); f_10065270();
  /* 10065adc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065adf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10065ae1 jne 0x10065af1 */
  if (!C.zf) goto L_10065af1;
  /* 10065ae3 mov eax, dword ptr [0x10075f48] */
  EAX = (r32((uint32_t)(0x10075f48)));
  /* 10065ae8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10065aea je 0x10065b03 */
  if (C.zf) goto L_10065b03;
  /* 10065aec cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10065aef je 0x10065b03 */
  if (C.zf) goto L_10065b03;
L_10065af1:;
  /* 10065af1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065af3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10065af5 push 0x10076260 */
  push32((uint32_t)(0x10076260u));
  /* 10065afa call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065b00u);
  /* 10065b00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10065b03:;
  /* 10065b03 push 0x10075fd8 */
  push32((uint32_t)(0x10075fd8u));
  /* 10065b08 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10065b0eu);
  /* 10065b0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065b11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10065b13 je 0x10065b27 */
  if (C.zf) goto L_10065b27;
  /* 10065b15 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065b17 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065b19 push 0x10076030 */
  push32((uint32_t)(0x10076030u));
  /* 10065b1e call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065b24u);
  /* 10065b24 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10065b27:;
  /* 10065b27 push 0x10076140 */
  push32((uint32_t)(0x10076140u));
  /* 10065b2c call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x10065b32u);
  /* 10065b32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065b35 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10065b37 je 0x10065b4b */
  if (C.zf) goto L_10065b4b;
  /* 10065b39 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065b3b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065b3d push 0x10076020 */
  push32((uint32_t)(0x10076020u));
  /* 10065b42 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065b48u);
  /* 10065b48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10065b4b:;
  /* 10065b4b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065b4d push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10065b4f push 0x10076140 */
  push32((uint32_t)(0x10076140u));
  /* 10065b54 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065b5au);
  /* 10065b5a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065b5c push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10065b5e push 0x100760f0 */
  push32((uint32_t)(0x100760f0u));
  /* 10065b63 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065b69u);
  /* 10065b69 push 0x100760c8 */
  push32((uint32_t)(0x100760c8u));
  /* 10065b6e call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10065b74u);
  /* 10065b74 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065b77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10065b79 je 0x10065b8d */
  if (C.zf) goto L_10065b8d;
  /* 10065b7b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065b7d push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10065b7f push 0x100761a8 */
  push32((uint32_t)(0x100761a8u));
  /* 10065b84 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065b8au);
  /* 10065b8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10065b8d:;
  /* 10065b8d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065b8f push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10065b91 push 0x10076010 */
  push32((uint32_t)(0x10076010u));
  /* 10065b96 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065b9cu);
  /* 10065b9c push 0x10076248 */
  push32((uint32_t)(0x10076248u));
  /* 10065ba1 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10065ba7u);
  /* 10065ba7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065baa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10065bac je 0x10065bc0 */
  if (C.zf) goto L_10065bc0;
  /* 10065bae push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065bb0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065bb2 push 0x100738d0 */
  push32((uint32_t)(0x100738d0u));
  /* 10065bb7 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10065bbdu);
  /* 10065bbd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10065bc0:;
  /* 10065bc0 ret  */
  ESPCHK(0x10065a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bd0 @ 0x10065bd0 (536 bytes, 150 insns) */
void f_10065bd0(void) {
  FTRACE(0x10065bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10065bd0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065bd2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065bd4 push 3 */
  push32((uint32_t)(0x3u));
  /* 10065bd6 push 0x10076248 */
  push32((uint32_t)(0x10076248u));
  /* 10065bdb call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10065be1u);
  /* 10065be1 push 0x10075fd8 */
  push32((uint32_t)(0x10075fd8u));
  /* 10065be6 call dword ptr [0x10076534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076534))), 0x10065becu);
  /* 10065bec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065bef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10065bf1 je 0x10065c18 */
  if (C.zf) goto L_10065c18;
  /* 10065bf3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065bf5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065bf7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10065bf9 push 0x10075fc8 */
  push32((uint32_t)(0x10075fc8u));
  /* 10065bfe call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10065c04u);
  /* 10065c04 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065c06 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065c08 push 4 */
  push32((uint32_t)(0x4u));
  /* 10065c0a push 0x10075fc0 */
  push32((uint32_t)(0x10075fc0u));
  /* 10065c0f call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10065c15u);
  /* 10065c15 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10065c18:;
  /* 10065c18 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065c1a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065c1c push 1 */
  push32((uint32_t)(0x1u));
  /* 10065c1e push 0x10075fc8 */
  push32((uint32_t)(0x10075fc8u));
  /* 10065c23 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10065c29u);
  /* 10065c29 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065c2b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065c2d push 1 */
  push32((uint32_t)(0x1u));
  /* 10065c2f push 0x10075fa8 */
  push32((uint32_t)(0x10075fa8u));
  /* 10065c34 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10065c3au);
  /* 10065c3a mov eax, dword ptr [0x100762a4] */
  EAX = (r32((uint32_t)(0x100762a4)));
  /* 10065c3f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065c42 mov ecx, dword ptr [eax*4 + 0x10075f88] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10075f88)));
  /* 10065c49 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10065c4b jne 0x10065c68 */
  if (!C.zf) goto L_10065c68;
  /* 10065c4d call 0x10065220 */
  push32(0x10065c52u); f_10065220();
  /* 10065c52 push 0x10073868 */
  push32((uint32_t)(0x10073868u));
  /* 10065c57 call dword ptr [0x10076534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076534))), 0x10065c5du);
  /* 10065c5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065c60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10065c62 je 0x10065de7 */
  if (C.zf) goto L_10065de7;
L_10065c68:;
  /* 10065c68 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065c6a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065c6c push 1 */
  push32((uint32_t)(0x1u));
  /* 10065c6e push 0x100761d8 */
  push32((uint32_t)(0x100761d8u));
  /* 10065c73 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10065c79u);
  /* 10065c79 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065c7b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065c7d push 2 */
  push32((uint32_t)(0x2u));
  /* 10065c7f push 0x10075fa8 */
  push32((uint32_t)(0x10075fa8u));
  /* 10065c84 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10065c8au);
  /* 10065c8a push 0x10075fa8 */
  push32((uint32_t)(0x10075fa8u));
  /* 10065c8f call dword ptr [0x10076534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076534))), 0x10065c95u);
  /* 10065c95 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065c98 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10065c9b jge 0x10065caa */
  if ((C.sf==C.of)) goto L_10065caa;
  /* 10065c9d call 0x10062670 */
  push32(0x10065ca2u); f_10062670();
  /* 10065ca2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10065ca4 jne 0x10065de7 */
  if (!C.zf) goto L_10065de7;
L_10065caa:;
  /* 10065caa push esi */
  push32((uint32_t)(ESI));
  /* 10065cab push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065cad push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065caf push 2 */
  push32((uint32_t)(0x2u));
  /* 10065cb1 push 0x10076240 */
  push32((uint32_t)(0x10076240u));
  /* 10065cb6 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10065cbcu);
  /* 10065cbc push 0x10076240 */
  push32((uint32_t)(0x10076240u));
  /* 10065cc1 call dword ptr [0x10076534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076534))), 0x10065cc7u);
  /* 10065cc7 push 0x10076240 */
  push32((uint32_t)(0x10076240u));
  /* 10065ccc mov esi, eax */
  ESI = (EAX);
  /* 10065cce call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10065cd4u);
  /* 10065cd4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065cd7 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10065cd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10065cdb pop esi */
  ESI = (pop32());
  /* 10065cdc jg 0x10065de7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10065de7;
  /* 10065ce2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065ce4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065ce6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10065ce8 push 0x10075f10 */
  push32((uint32_t)(0x10075f10u));
  /* 10065ced call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10065cf3u);
  /* 10065cf3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065cf6 call 0x10062780 */
  push32(0x10065cfbu); f_10062780();
  /* 10065cfb cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10065cfe jge 0x10065d27 */
  if ((C.sf==C.of)) goto L_10065d27;
  /* 10065d00 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065d02 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065d04 push 1 */
  push32((uint32_t)(0x1u));
  /* 10065d06 push 0x10075fd8 */
  push32((uint32_t)(0x10075fd8u));
  /* 10065d0b call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10065d11u);
  /* 10065d11 push 0x10075fd8 */
  push32((uint32_t)(0x10075fd8u));
  /* 10065d16 call dword ptr [0x10076534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076534))), 0x10065d1cu);
  /* 10065d1c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065d1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10065d21 je 0x10065de7 */
  if (C.zf) goto L_10065de7;
L_10065d27:;
  /* 10065d27 call 0x10065220 */
  push32(0x10065d2cu); f_10065220();
  /* 10065d2c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065d2e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065d30 push 4 */
  push32((uint32_t)(0x4u));
  /* 10065d32 push 0x10075fa8 */
  push32((uint32_t)(0x10075fa8u));
  /* 10065d37 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10065d3du);
  /* 10065d3d push 0x10075fa8 */
  push32((uint32_t)(0x10075fa8u));
  /* 10065d42 call dword ptr [0x10076534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076534))), 0x10065d48u);
  /* 10065d48 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065d4b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10065d4e jl 0x10065de7 */
  if ((C.sf!=C.of)) goto L_10065de7;
  /* 10065d54 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065d56 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065d58 push 3 */
  push32((uint32_t)(0x3u));
  /* 10065d5a push 0x100760c8 */
  push32((uint32_t)(0x100760c8u));
  /* 10065d5f call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10065d65u);
  /* 10065d65 push 0x10076248 */
  push32((uint32_t)(0x10076248u));
  /* 10065d6a call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10065d70u);
  /* 10065d70 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065d73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10065d75 je 0x10065d8b */
  if (C.zf) goto L_10065d8b;
  /* 10065d77 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065d79 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065d7b push 4 */
  push32((uint32_t)(0x4u));
  /* 10065d7d push 0x100760c8 */
  push32((uint32_t)(0x100760c8u));
  /* 10065d82 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10065d88u);
  /* 10065d88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10065d8b:;
  /* 10065d8b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065d8d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065d8f push 1 */
  push32((uint32_t)(0x1u));
  /* 10065d91 push 0x10073608 */
  push32((uint32_t)(0x10073608u));
  /* 10065d96 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10065d9cu);
  /* 10065d9c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065d9e push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10065da0 push 3 */
  push32((uint32_t)(0x3u));
  /* 10065da2 push 0x10073608 */
  push32((uint32_t)(0x10073608u));
  /* 10065da7 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10065dadu);
  /* 10065dad push 0x100738d0 */
  push32((uint32_t)(0x100738d0u));
  /* 10065db2 call dword ptr [0x1007653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007653c))), 0x10065db8u);
  /* 10065db8 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065dbb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10065dbd je 0x10065dd3 */
  if (C.zf) goto L_10065dd3;
  /* 10065dbf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065dc1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065dc3 push 5 */
  push32((uint32_t)(0x5u));
  /* 10065dc5 push 0x100760c8 */
  push32((uint32_t)(0x100760c8u));
  /* 10065dca call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10065dd0u);
  /* 10065dd0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10065dd3:;
  /* 10065dd3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065dd5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065dd7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10065dd9 push 0x100760e8 */
  push32((uint32_t)(0x100760e8u));
  /* 10065dde call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10065de4u);
  /* 10065de4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10065de7:;
  /* 10065de7 ret  */
  ESPCHK(0x10065bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005df0 @ 0x10065df0 (472 bytes, 137 insns) */
void f_10065df0(void) {
  FTRACE(0x10065df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10065df0 push ecx */
  push32((uint32_t)(ECX));
  /* 10065df1 push 0x10076268 */
  push32((uint32_t)(0x10076268u));
  /* 10065df6 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10065dfcu);
  /* 10065dfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065dff cmp eax, 0x28 */
  { uint32_t _a=(EAX),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10065e02 jge 0x10065e17 */
  if ((C.sf==C.of)) goto L_10065e17;
  /* 10065e04 mov eax, dword ptr [0x100762a4] */
  EAX = (r32((uint32_t)(0x100762a4)));
  /* 10065e09 push 0 */
  push32((uint32_t)(0x0u));
  /* 10065e0b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10065e0e push eax */
  push32((uint32_t)(EAX));
  /* 10065e0f call 0x100626d0 */
  push32(0x10065e14u); f_100626d0();
  /* 10065e14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10065e17:;
  /* 10065e17 push 0x10076268 */
  push32((uint32_t)(0x10076268u));
  /* 10065e1c call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10065e22u);
  /* 10065e22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065e25 cmp eax, 0x9c */
  { uint32_t _a=(EAX),_b=(0x9cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10065e2a jg 0x10065e3e */
  if ((!C.zf&&C.sf==C.of)) goto L_10065e3e;
  /* 10065e2c push 0x100760c8 */
  push32((uint32_t)(0x100760c8u));
  /* 10065e31 call dword ptr [0x10076534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076534))), 0x10065e37u);
  /* 10065e37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065e3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10065e3c je 0x10065e52 */
  if (C.zf) goto L_10065e52;
L_10065e3e:;
  /* 10065e3e mov ecx, dword ptr [0x100762a4] */
  ECX = (r32((uint32_t)(0x100762a4)));
  /* 10065e44 push 1 */
  push32((uint32_t)(0x1u));
  /* 10065e46 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10065e49 push ecx */
  push32((uint32_t)(ECX));
  /* 10065e4a call 0x100626d0 */
  push32(0x10065e4fu); f_100626d0();
  /* 10065e4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10065e52:;
  /* 10065e52 push esi */
  push32((uint32_t)(ESI));
  /* 10065e53 push edi */
  push32((uint32_t)(EDI));
  /* 10065e54 mov edi, 2 */
  EDI = (0x2u);
L_10065e59:;
  /* 10065e59 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065e5b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10065e5d push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10065e62 push 0x10076180 */
  push32((uint32_t)(0x10076180u));
  /* 10065e67 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10065e6du);
  /* 10065e6d push 0x10073678 */
  push32((uint32_t)(0x10073678u));
  /* 10065e72 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10065e78u);
  /* 10065e78 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065e7b cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10065e80 jge 0x10065e9b */
  if ((C.sf==C.of)) goto L_10065e9b;
  /* 10065e82 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065e84 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10065e86 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10065e8b push 0x10073678 */
  push32((uint32_t)(0x10073678u));
  /* 10065e90 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10065e96u);
  /* 10065e96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065e99 jmp 0x10065ec6 */
  goto L_10065ec6;
L_10065e9b:;
  /* 10065e9b push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10065e9d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10065e9f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10065ea4 push 0x10073678 */
  push32((uint32_t)(0x10073678u));
  /* 10065ea9 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10065eafu);
  /* 10065eaf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065eb1 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10065eb3 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10065eb8 push 0x100760d0 */
  push32((uint32_t)(0x100760d0u));
  /* 10065ebd call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10065ec3u);
  /* 10065ec3 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10065ec6:;
  /* 10065ec6 mov edx, dword ptr [0x100762a4] */
  EDX = (r32((uint32_t)(0x100762a4)));
  /* 10065ecc add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10065ecf push edx */
  push32((uint32_t)(EDX));
  /* 10065ed0 call 0x100626f0 */
  push32(0x10065ed5u); f_100626f0();
  /* 10065ed5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065ed8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10065eda jne 0x10065efd */
  if (!C.zf) goto L_10065efd;
  /* 10065edc call 0x10062780 */
  push32(0x10065ee1u); f_10062780();
  /* 10065ee1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10065ee4 jge 0x10065efd */
  if ((C.sf==C.of)) goto L_10065efd;
  /* 10065ee6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065ee8 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10065eea push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10065eef push 0x10076268 */
  push32((uint32_t)(0x10076268u));
  /* 10065ef4 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10065efau);
  /* 10065efa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10065efd:;
  /* 10065efd mov al, byte ptr [0x100762a4] */
  AL = (r8((uint32_t)(0x100762a4)));
  /* 10065f02 mov byte ptr [esp + 8], al */
  w8((uint32_t)(ESP + 0x8), (AL));
  /* 10065f06 mov eax, dword ptr [0x100764a8] */
  EAX = (r32((uint32_t)(0x100764a8)));
  /* 10065f0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10065f0d je 0x10065f25 */
  if (C.zf) goto L_10065f25;
  /* 10065f0f mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10065f13 push 1 */
  push32((uint32_t)(0x1u));
  /* 10065f15 push 0x10073878 */
  push32((uint32_t)(0x10073878u));
  /* 10065f1a push ecx */
  push32((uint32_t)(ECX));
  /* 10065f1b call eax */
  call_ind((uint32_t)(EAX), 0x10065f1du);
  /* 10065f1d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065f20 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10065f23 jge 0x10065f65 */
  if ((C.sf==C.of)) goto L_10065f65;
L_10065f25:;
  /* 10065f25 push 5 */
  push32((uint32_t)(0x5u));
  /* 10065f27 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10065f2du);
  /* 10065f2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065f30 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10065f35 jle 0x10065f65 */
  if ((C.zf||C.sf!=C.of)) goto L_10065f65;
  /* 10065f37 push 4 */
  push32((uint32_t)(0x4u));
  /* 10065f39 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10065f3fu);
  /* 10065f3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065f42 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10065f47 jle 0x10065f65 */
  if ((C.zf||C.sf!=C.of)) goto L_10065f65;
  /* 10065f49 mov esi, 0x1e */
  ESI = (0x1eu);
L_10065f4e:;
  /* 10065f4e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065f50 push 0xa */
  push32((uint32_t)(0xau));
  /* 10065f52 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10065f54 push 0x10073878 */
  push32((uint32_t)(0x10073878u));
  /* 10065f59 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10065f5fu);
  /* 10065f5f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065f62 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10065f63 jne 0x10065f4e */
  if (!C.zf) goto L_10065f4e;
L_10065f65:;
  /* 10065f65 push 0x10076010 */
  push32((uint32_t)(0x10076010u));
  /* 10065f6a call dword ptr [0x1007653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007653c))), 0x10065f70u);
  /* 10065f70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065f73 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10065f75 je 0x10065f7b */
  if (C.zf) goto L_10065f7b;
  /* 10065f77 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10065f79 jmp 0x10065f7d */
  goto L_10065f7d;
L_10065f7b:;
  /* 10065f7b push 0x64 */
  push32((uint32_t)(0x64u));
L_10065f7d:;
  /* 10065f7d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10065f7f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10065f84 push 0x100763a0 */
  push32((uint32_t)(0x100763a0u));
  /* 10065f89 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10065f8fu);
  /* 10065f8f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065f92 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065f94 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10065f96 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10065f9b push 0x10073670 */
  push32((uint32_t)(0x10073670u));
  /* 10065fa0 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10065fa6u);
  /* 10065fa6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10065fa8 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10065faa push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10065faf push 0x10075f70 */
  push32((uint32_t)(0x10075f70u));
  /* 10065fb4 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10065fbau);
  /* 10065fba add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065fbd dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10065fbe jne 0x10065e59 */
  if (!C.zf) goto L_10065e59;
  /* 10065fc4 pop edi */
  EDI = (pop32());
  /* 10065fc5 pop esi */
  ESI = (pop32());
  /* 10065fc6 pop ecx */
  ECX = (pop32());
  /* 10065fc7 ret  */
  ESPCHK(0x10065df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fd0 @ 0x10065fd0 (789 bytes, 244 insns) */
void f_10065fd0(void) {
  FTRACE(0x10065fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10065fd0 push ecx */
  push32((uint32_t)(ECX));
  /* 10065fd1 push 0x10073868 */
  push32((uint32_t)(0x10073868u));
  /* 10065fd6 call dword ptr [0x10076534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076534))), 0x10065fdcu);
  /* 10065fdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065fdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10065fe1 je 0x100662e3 */
  if (C.zf) goto L_100662e3;
  /* 10065fe7 call 0x10062670 */
  push32(0x10065fecu); f_10062670();
  /* 10065fec cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10065fef jne 0x10066036 */
  if (!C.zf) goto L_10066036;
  /* 10065ff1 mov eax, dword ptr [0x100762a4] */
  EAX = (r32((uint32_t)(0x100762a4)));
  /* 10065ff6 push eax */
  push32((uint32_t)(EAX));
  /* 10065ff7 call 0x100626f0 */
  push32(0x10065ffcu); f_100626f0();
  /* 10065ffc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10065fff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10066001 jne 0x100662e3 */
  if (!C.zf) goto L_100662e3;
  /* 10066007 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 1006600c push 3 */
  push32((uint32_t)(0x3u));
  /* 1006600e push 2 */
  push32((uint32_t)(0x2u));
  /* 10066010 call 0x10062610 */
  push32(0x10066015u); f_10062610();
  /* 10066015 push 0x13880 */
  push32((uint32_t)(0x13880u));
  /* 1006601a push 3 */
  push32((uint32_t)(0x3u));
  /* 1006601c push 0 */
  push32((uint32_t)(0x0u));
  /* 1006601e call 0x10062610 */
  push32(0x10066023u); f_10062610();
  /* 10066023 mov ecx, dword ptr [0x100762a4] */
  ECX = (r32((uint32_t)(0x100762a4)));
  /* 10066029 push 1 */
  push32((uint32_t)(0x1u));
  /* 1006602b push ecx */
  push32((uint32_t)(ECX));
  /* 1006602c call 0x100626d0 */
  push32(0x10066031u); f_100626d0();
  /* 10066031 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066034 pop ecx */
  ECX = (pop32());
  /* 10066035 ret  */
  ESPCHK(0x10065fd0u, _esp0);
  ESP += 4; return;
L_10066036:;
  /* 10066036 push 0x10073868 */
  push32((uint32_t)(0x10073868u));
  /* 1006603b call dword ptr [0x10076534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076534))), 0x10066041u);
  /* 10066041 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066044 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10066046 je 0x100662e3 */
  if (C.zf) goto L_100662e3;
  /* 1006604c mov edx, dword ptr [0x100762a4] */
  EDX = (r32((uint32_t)(0x100762a4)));
  /* 10066052 push edx */
  push32((uint32_t)(EDX));
  /* 10066053 call 0x100626f0 */
  push32(0x10066058u); f_100626f0();
  /* 10066058 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006605b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006605d jne 0x100660d2 */
  if (!C.zf) goto L_100660d2;
  /* 1006605f push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10066064 push 3 */
  push32((uint32_t)(0x3u));
  /* 10066066 push 5 */
  push32((uint32_t)(0x5u));
  /* 10066068 call 0x10062610 */
  push32(0x1006606du); f_10062610();
  /* 1006606d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066070 call 0x10062670 */
  push32(0x10066075u); f_10062670();
  /* 10066075 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10066078 jne 0x10066099 */
  if (!C.zf) goto L_10066099;
  /* 1006607a push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 1006607f push 0 */
  push32((uint32_t)(0x0u));
  /* 10066081 push 4 */
  push32((uint32_t)(0x4u));
  /* 10066083 call 0x10062610 */
  push32(0x10066088u); f_10062610();
  /* 10066088 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 1006608d push 2 */
  push32((uint32_t)(0x2u));
  /* 1006608f push 4 */
  push32((uint32_t)(0x4u));
  /* 10066091 call 0x10062610 */
  push32(0x10066096u); f_10062610();
  /* 10066096 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10066099:;
  /* 10066099 call 0x10062670 */
  push32(0x1006609eu); f_10062670();
  /* 1006609e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100660a1 jne 0x100660c2 */
  if (!C.zf) goto L_100660c2;
  /* 100660a3 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 100660a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 100660aa push 4 */
  push32((uint32_t)(0x4u));
  /* 100660ac call 0x10062610 */
  push32(0x100660b1u); f_10062610();
  /* 100660b1 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 100660b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 100660b8 push 4 */
  push32((uint32_t)(0x4u));
  /* 100660ba call 0x10062610 */
  push32(0x100660bfu); f_10062610();
  /* 100660bf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100660c2:;
  /* 100660c2 mov eax, dword ptr [0x100762a4] */
  EAX = (r32((uint32_t)(0x100762a4)));
  /* 100660c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 100660c9 push eax */
  push32((uint32_t)(EAX));
  /* 100660ca call 0x100626d0 */
  push32(0x100660cfu); f_100626d0();
  /* 100660cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100660d2:;
  /* 100660d2 push 0x10076260 */
  push32((uint32_t)(0x10076260u));
  /* 100660d7 call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x100660ddu);
  /* 100660dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100660e0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100660e2 je 0x10066154 */
  if (C.zf) goto L_10066154;
  /* 100660e4 push 0x10076140 */
  push32((uint32_t)(0x10076140u));
  /* 100660e9 call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x100660efu);
  /* 100660ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100660f2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100660f4 jne 0x10066154 */
  if (!C.zf) goto L_10066154;
  /* 100660f6 push 0x10075f10 */
  push32((uint32_t)(0x10075f10u));
  /* 100660fb call dword ptr [0x10076534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076534))), 0x10066101u);
  /* 10066101 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066104 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10066106 je 0x10066154 */
  if (C.zf) goto L_10066154;
  /* 10066108 mov eax, dword ptr [0x100764ac] */
  EAX = (r32((uint32_t)(0x100764ac)));
  /* 1006610d mov cl, byte ptr [0x100762a4] */
  CL = (r8((uint32_t)(0x100762a4)));
  /* 10066113 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10066115 mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 10066119 je 0x1006612e */
  if (C.zf) goto L_1006612e;
  /* 1006611b mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 1006611f push 5 */
  push32((uint32_t)(0x5u));
  /* 10066121 push 0x10076140 */
  push32((uint32_t)(0x10076140u));
  /* 10066126 push edx */
  push32((uint32_t)(EDX));
  /* 10066127 call eax */
  call_ind((uint32_t)(EAX), 0x10066129u);
  /* 10066129 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006612c jmp 0x10066130 */
  goto L_10066130;
L_1006612e:;
  /* 1006612e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10066130:;
  /* 10066130 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10066133 push 0 */
  push32((uint32_t)(0x0u));
  /* 10066135 lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 10066138 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 1006613d imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1006613f sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10066142 mov eax, edx */
  EAX = (EDX);
  /* 10066144 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 10066147 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10066149 push edx */
  push32((uint32_t)(EDX));
  /* 1006614a push 5 */
  push32((uint32_t)(0x5u));
  /* 1006614c call 0x10062f90 */
  push32(0x10066151u); f_10062f90();
  /* 10066151 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10066154:;
  /* 10066154 push 0x10076140 */
  push32((uint32_t)(0x10076140u));
  /* 10066159 call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x1006615fu);
  /* 1006615f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066162 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10066164 je 0x10066279 */
  if (C.zf) goto L_10066279;
  /* 1006616a push 0x10076010 */
  push32((uint32_t)(0x10076010u));
  /* 1006616f call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x10066175u);
  /* 10066175 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066178 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1006617a jne 0x10066279 */
  if (!C.zf) goto L_10066279;
  /* 10066180 mov eax, dword ptr [0x100764ac] */
  EAX = (r32((uint32_t)(0x100764ac)));
  /* 10066185 mov cl, byte ptr [0x100762a4] */
  CL = (r8((uint32_t)(0x100762a4)));
  /* 1006618b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006618d mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 10066191 je 0x100661a6 */
  if (C.zf) goto L_100661a6;
  /* 10066193 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 10066197 push 3 */
  push32((uint32_t)(0x3u));
  /* 10066199 push 0x10076010 */
  push32((uint32_t)(0x10076010u));
  /* 1006619e push edx */
  push32((uint32_t)(EDX));
  /* 1006619f call eax */
  call_ind((uint32_t)(EAX), 0x100661a1u);
  /* 100661a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100661a4 jmp 0x100661a8 */
  goto L_100661a8;
L_100661a6:;
  /* 100661a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100661a8:;
  /* 100661a8 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 100661ab push 2 */
  push32((uint32_t)(0x2u));
  /* 100661ad lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 100661b0 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 100661b5 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100661b7 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 100661ba mov eax, edx */
  EAX = (EDX);
  /* 100661bc shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100661bf add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100661c1 push edx */
  push32((uint32_t)(EDX));
  /* 100661c2 push 3 */
  push32((uint32_t)(0x3u));
  /* 100661c4 call 0x10062f90 */
  push32(0x100661c9u); f_10062f90();
  /* 100661c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100661cc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100661ce je 0x10066279 */
  if (C.zf) goto L_10066279;
  /* 100661d4 mov eax, dword ptr [0x100764ac] */
  EAX = (r32((uint32_t)(0x100764ac)));
  /* 100661d9 mov cl, byte ptr [0x100762a4] */
  CL = (r8((uint32_t)(0x100762a4)));
  /* 100661df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100661e1 mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 100661e5 je 0x100661fa */
  if (C.zf) goto L_100661fa;
  /* 100661e7 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 100661eb push 1 */
  push32((uint32_t)(0x1u));
  /* 100661ed push 0x10076010 */
  push32((uint32_t)(0x10076010u));
  /* 100661f2 push edx */
  push32((uint32_t)(EDX));
  /* 100661f3 call eax */
  call_ind((uint32_t)(EAX), 0x100661f5u);
  /* 100661f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100661f8 jmp 0x100661fc */
  goto L_100661fc;
L_100661fa:;
  /* 100661fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100661fc:;
  /* 100661fc lea ecx, [eax*8] */
  ECX = ((uint32_t)(EAX*8));
  /* 10066203 push 2 */
  push32((uint32_t)(0x2u));
  /* 10066205 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10066207 lea eax, [ecx + ecx*2] */
  EAX = ((uint32_t)(ECX + ECX*2));
  /* 1006620a lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1006620d mov eax, 0x51eb851f */
  EAX = (0x51eb851fu);
  /* 10066212 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10066214 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10066217 mov eax, edx */
  EAX = (EDX);
  /* 10066219 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 1006621c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006621e push edx */
  push32((uint32_t)(EDX));
  /* 1006621f push 1 */
  push32((uint32_t)(0x1u));
  /* 10066221 call 0x10062f90 */
  push32(0x10066226u); f_10062f90();
  /* 10066226 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066229 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1006622b je 0x10066279 */
  if (C.zf) goto L_10066279;
  /* 1006622d mov eax, dword ptr [0x100764ac] */
  EAX = (r32((uint32_t)(0x100764ac)));
  /* 10066232 mov cl, byte ptr [0x100762a4] */
  CL = (r8((uint32_t)(0x100762a4)));
  /* 10066238 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006623a mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 1006623e je 0x10066253 */
  if (C.zf) goto L_10066253;
  /* 10066240 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 10066244 push 4 */
  push32((uint32_t)(0x4u));
  /* 10066246 push 0x10076010 */
  push32((uint32_t)(0x10076010u));
  /* 1006624b push edx */
  push32((uint32_t)(EDX));
  /* 1006624c call eax */
  call_ind((uint32_t)(EAX), 0x1006624eu);
  /* 1006624e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066251 jmp 0x10066255 */
  goto L_10066255;
L_10066253:;
  /* 10066253 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10066255:;
  /* 10066255 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10066258 push 2 */
  push32((uint32_t)(0x2u));
  /* 1006625a lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 1006625d mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10066262 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10066264 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10066267 mov eax, edx */
  EAX = (EDX);
  /* 10066269 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 1006626c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006626e push edx */
  push32((uint32_t)(EDX));
  /* 1006626f push 4 */
  push32((uint32_t)(0x4u));
  /* 10066271 call 0x10062f90 */
  push32(0x10066276u); f_10062f90();
  /* 10066276 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10066279:;
  /* 10066279 push 2 */
  push32((uint32_t)(0x2u));
  /* 1006627b call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10066281u);
  /* 10066281 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066284 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10066289 jle 0x100662ae */
  if ((C.zf||C.sf!=C.of)) goto L_100662ae;
  /* 1006628b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10066290 push 2 */
  push32((uint32_t)(0x2u));
  /* 10066292 push 0 */
  push32((uint32_t)(0x0u));
  /* 10066294 call 0x10062610 */
  push32(0x10066299u); f_10062610();
  /* 10066299 push 2 */
  push32((uint32_t)(0x2u));
  /* 1006629b call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x100662a1u);
  /* 100662a1 push eax */
  push32((uint32_t)(EAX));
  /* 100662a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 100662a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 100662a6 call 0x10062610 */
  push32(0x100662abu); f_10062610();
  /* 100662ab add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100662ae:;
  /* 100662ae push 0 */
  push32((uint32_t)(0x0u));
  /* 100662b0 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x100662b6u);
  /* 100662b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100662b9 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100662be jle 0x100662e3 */
  if ((C.zf||C.sf!=C.of)) goto L_100662e3;
  /* 100662c0 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 100662c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 100662c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 100662c9 call 0x10062610 */
  push32(0x100662ceu); f_10062610();
  /* 100662ce push 0 */
  push32((uint32_t)(0x0u));
  /* 100662d0 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x100662d6u);
  /* 100662d6 push eax */
  push32((uint32_t)(EAX));
  /* 100662d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 100662d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 100662db call 0x10062610 */
  push32(0x100662e0u); f_10062610();
  /* 100662e0 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100662e3:;
  /* 100662e3 pop ecx */
  ECX = (pop32());
  /* 100662e4 ret  */
  ESPCHK(0x10065fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_100062f0 @ 0x100662f0 (818 bytes, 268 insns) */
void f_100662f0(void) {
  FTRACE(0x100662f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100662f0 push ecx */
  push32((uint32_t)(ECX));
  /* 100662f1 push 4 */
  push32((uint32_t)(0x4u));
  /* 100662f3 push 4 */
  push32((uint32_t)(0x4u));
  /* 100662f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 100662f7 call dword ptr [0x10076504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076504))), 0x100662fdu);
  /* 100662fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066300 call dword ptr [0x10076560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076560))), 0x10066306u);
  /* 10066306 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10066308 je 0x10066620 */
  if (C.zf) goto L_10066620;
  /* 1006630e push 4 */
  push32((uint32_t)(0x4u));
  /* 10066310 push 4 */
  push32((uint32_t)(0x4u));
  /* 10066312 push 9 */
  push32((uint32_t)(0x9u));
  /* 10066314 call dword ptr [0x10076504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076504))), 0x1006631au);
  /* 1006631a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006631d call 0x10062670 */
  push32(0x10066322u); f_10062670();
  /* 10066322 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10066325 je 0x10066620 */
  if (C.zf) goto L_10066620;
  /* 1006632b call dword ptr [0x10076560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076560))), 0x10066331u);
  /* 10066331 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10066333 je 0x10066611 */
  if (C.zf) goto L_10066611;
  /* 10066339 push esi */
  push32((uint32_t)(ESI));
  /* 1006633a push edi */
  push32((uint32_t)(EDI));
  /* 1006633b push 4 */
  push32((uint32_t)(0x4u));
  /* 1006633d push 4 */
  push32((uint32_t)(0x4u));
  /* 1006633f push 9 */
  push32((uint32_t)(0x9u));
  /* 10066341 call dword ptr [0x10076504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076504))), 0x10066347u);
  /* 10066347 push 0x100760f0 */
  push32((uint32_t)(0x100760f0u));
  /* 1006634c call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x10066352u);
  /* 10066352 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066355 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10066357 jne 0x100663bf */
  if (!C.zf) goto L_100663bf;
  /* 10066359 mov al, byte ptr [0x100762a4] */
  AL = (r8((uint32_t)(0x100762a4)));
  /* 1006635e mov byte ptr [esp + 8], al */
  w8((uint32_t)(ESP + 0x8), (AL));
  /* 10066362 mov eax, dword ptr [0x100764ac] */
  EAX = (r32((uint32_t)(0x100764ac)));
  /* 10066367 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10066369 je 0x10066380 */
  if (C.zf) goto L_10066380;
  /* 1006636b mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1006636f push 3 */
  push32((uint32_t)(0x3u));
  /* 10066371 push 0x100760f0 */
  push32((uint32_t)(0x100760f0u));
  /* 10066376 push ecx */
  push32((uint32_t)(ECX));
  /* 10066377 call eax */
  call_ind((uint32_t)(EAX), 0x10066379u);
  /* 10066379 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006637c mov esi, eax */
  ESI = (EAX);
  /* 1006637e jmp 0x10066382 */
  goto L_10066382;
L_10066380:;
  /* 10066380 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10066382:;
  /* 10066382 push 3 */
  push32((uint32_t)(0x3u));
  /* 10066384 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x1006638au);
  /* 1006638a lea edx, [esi + esi*4] */
  EDX = ((uint32_t)(ESI + ESI*4));
  /* 1006638d mov edi, eax */
  EDI = (EAX);
  /* 1006638f mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10066394 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066397 lea ecx, [esi + edx*2] */
  ECX = ((uint32_t)(ESI + EDX*2));
  /* 1006639a imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1006639c sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 1006639f mov eax, edx */
  EAX = (EDX);
  /* 100663a1 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100663a4 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100663a6 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100663a8 jge 0x100663b0 */
  if ((C.sf==C.of)) goto L_100663b0;
  /* 100663aa push 4 */
  push32((uint32_t)(0x4u));
  /* 100663ac push 4 */
  push32((uint32_t)(0x4u));
  /* 100663ae jmp 0x100663b4 */
  goto L_100663b4;
L_100663b0:;
  /* 100663b0 push 6 */
  push32((uint32_t)(0x6u));
  /* 100663b2 push 6 */
  push32((uint32_t)(0x6u));
L_100663b4:;
  /* 100663b4 push 9 */
  push32((uint32_t)(0x9u));
  /* 100663b6 call dword ptr [0x10076504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076504))), 0x100663bcu);
  /* 100663bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100663bf:;
  /* 100663bf push 0x10076010 */
  push32((uint32_t)(0x10076010u));
  /* 100663c4 call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x100663cau);
  /* 100663ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100663cd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100663cf jne 0x10066438 */
  if (!C.zf) goto L_10066438;
  /* 100663d1 mov eax, dword ptr [0x100764ac] */
  EAX = (r32((uint32_t)(0x100764ac)));
  /* 100663d6 mov cl, byte ptr [0x100762a4] */
  CL = (r8((uint32_t)(0x100762a4)));
  /* 100663dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100663de mov byte ptr [esp + 8], cl */
  w8((uint32_t)(ESP + 0x8), (CL));
  /* 100663e2 je 0x100663f9 */
  if (C.zf) goto L_100663f9;
  /* 100663e4 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 100663e8 push 3 */
  push32((uint32_t)(0x3u));
  /* 100663ea push 0x10076010 */
  push32((uint32_t)(0x10076010u));
  /* 100663ef push edx */
  push32((uint32_t)(EDX));
  /* 100663f0 call eax */
  call_ind((uint32_t)(EAX), 0x100663f2u);
  /* 100663f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100663f5 mov esi, eax */
  ESI = (EAX);
  /* 100663f7 jmp 0x100663fb */
  goto L_100663fb;
L_100663f9:;
  /* 100663f9 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_100663fb:;
  /* 100663fb push 3 */
  push32((uint32_t)(0x3u));
  /* 100663fd call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10066403u);
  /* 10066403 mov edi, eax */
  EDI = (EAX);
  /* 10066405 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 10066408 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006640b lea ecx, [esi + eax*2] */
  ECX = ((uint32_t)(ESI + EAX*2));
  /* 1006640e mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10066413 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10066415 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10066418 mov ecx, edx */
  ECX = (EDX);
  /* 1006641a shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 1006641d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006641f cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10066421 jge 0x10066429 */
  if ((C.sf==C.of)) goto L_10066429;
  /* 10066423 push 9 */
  push32((uint32_t)(0x9u));
  /* 10066425 push 2 */
  push32((uint32_t)(0x2u));
  /* 10066427 jmp 0x1006642d */
  goto L_1006642d;
L_10066429:;
  /* 10066429 push 6 */
  push32((uint32_t)(0x6u));
  /* 1006642b push 6 */
  push32((uint32_t)(0x6u));
L_1006642d:;
  /* 1006642d push 9 */
  push32((uint32_t)(0x9u));
  /* 1006642f call dword ptr [0x10076504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076504))), 0x10066435u);
  /* 10066435 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10066438:;
  /* 10066438 push 0x10076140 */
  push32((uint32_t)(0x10076140u));
  /* 1006643d call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x10066443u);
  /* 10066443 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066446 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10066448 jne 0x100664af */
  if (!C.zf) goto L_100664af;
  /* 1006644a mov eax, dword ptr [0x100764ac] */
  EAX = (r32((uint32_t)(0x100764ac)));
  /* 1006644f mov dl, byte ptr [0x100762a4] */
  DL = (r8((uint32_t)(0x100762a4)));
  /* 10066455 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10066457 mov byte ptr [esp + 8], dl */
  w8((uint32_t)(ESP + 0x8), (DL));
  /* 1006645b je 0x10066472 */
  if (C.zf) goto L_10066472;
  /* 1006645d mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10066461 push 3 */
  push32((uint32_t)(0x3u));
  /* 10066463 push 0x10076140 */
  push32((uint32_t)(0x10076140u));
  /* 10066468 push ecx */
  push32((uint32_t)(ECX));
  /* 10066469 call eax */
  call_ind((uint32_t)(EAX), 0x1006646bu);
  /* 1006646b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006646e mov esi, eax */
  ESI = (EAX);
  /* 10066470 jmp 0x10066474 */
  goto L_10066474;
L_10066472:;
  /* 10066472 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10066474:;
  /* 10066474 push 3 */
  push32((uint32_t)(0x3u));
  /* 10066476 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x1006647cu);
  /* 1006647c lea edx, [esi + esi*2] */
  EDX = ((uint32_t)(ESI + ESI*2));
  /* 1006647f mov edi, eax */
  EDI = (EAX);
  /* 10066481 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10066486 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066489 lea ecx, [esi + edx*4] */
  ECX = ((uint32_t)(ESI + EDX*4));
  /* 1006648c imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1006648e sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10066491 mov eax, edx */
  EAX = (EDX);
  /* 10066493 push 1 */
  push32((uint32_t)(0x1u));
  /* 10066495 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 10066498 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006649a push 9 */
  push32((uint32_t)(0x9u));
  /* 1006649c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006649e jge 0x100664a4 */
  if ((C.sf==C.of)) goto L_100664a4;
  /* 100664a0 push 9 */
  push32((uint32_t)(0x9u));
  /* 100664a2 jmp 0x100664a6 */
  goto L_100664a6;
L_100664a4:;
  /* 100664a4 push 6 */
  push32((uint32_t)(0x6u));
L_100664a6:;
  /* 100664a6 call dword ptr [0x10076504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076504))), 0x100664acu);
  /* 100664ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100664af:;
  /* 100664af push 0x10076330 */
  push32((uint32_t)(0x10076330u));
  /* 100664b4 call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x100664bau);
  /* 100664ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100664bd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100664bf je 0x100664d3 */
  if (C.zf) goto L_100664d3;
  /* 100664c1 push 0x10076278 */
  push32((uint32_t)(0x10076278u));
  /* 100664c6 call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x100664ccu);
  /* 100664cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100664cf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100664d1 jne 0x100664f4 */
  if (!C.zf) goto L_100664f4;
L_100664d3:;
  /* 100664d3 push 3 */
  push32((uint32_t)(0x3u));
  /* 100664d5 call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x100664dbu);
  /* 100664db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100664de cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100664e3 jge 0x100664f4 */
  if ((C.sf==C.of)) goto L_100664f4;
  /* 100664e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 100664e7 push 4 */
  push32((uint32_t)(0x4u));
  /* 100664e9 push 9 */
  push32((uint32_t)(0x9u));
  /* 100664eb call dword ptr [0x10076504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076504))), 0x100664f1u);
  /* 100664f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100664f4:;
  /* 100664f4 push 0x10075fd8 */
  push32((uint32_t)(0x10075fd8u));
  /* 100664f9 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x100664ffu);
  /* 100664ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066502 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10066504 jne 0x10066577 */
  if (!C.zf) goto L_10066577;
  /* 10066506 call 0x10062780 */
  push32(0x1006650bu); f_10062780();
  /* 1006650b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006650e jge 0x10066577 */
  if ((C.sf==C.of)) goto L_10066577;
  /* 10066510 mov eax, dword ptr [0x100764a8] */
  EAX = (r32((uint32_t)(0x100764a8)));
  /* 10066515 mov cl, byte ptr [0x100762a4] */
  CL = (r8((uint32_t)(0x100762a4)));
  /* 1006651b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006651d mov byte ptr [esp + 8], cl */
  w8((uint32_t)(ESP + 0x8), (CL));
  /* 10066521 je 0x10066538 */
  if (C.zf) goto L_10066538;
  /* 10066523 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10066527 push 2 */
  push32((uint32_t)(0x2u));
  /* 10066529 push 0x10075fd8 */
  push32((uint32_t)(0x10075fd8u));
  /* 1006652e push edx */
  push32((uint32_t)(EDX));
  /* 1006652f call eax */
  call_ind((uint32_t)(EAX), 0x10066531u);
  /* 10066531 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066534 mov esi, eax */
  ESI = (EAX);
  /* 10066536 jmp 0x1006653a */
  goto L_1006653a;
L_10066538:;
  /* 10066538 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1006653a:;
  /* 1006653a push 2 */
  push32((uint32_t)(0x2u));
  /* 1006653c call dword ptr [0x1007652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007652c))), 0x10066542u);
  /* 10066542 mov edi, eax */
  EDI = (EAX);
  /* 10066544 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 10066547 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006654a lea ecx, [esi + eax*2] */
  ECX = ((uint32_t)(ESI + EAX*2));
  /* 1006654d mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10066552 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10066554 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10066557 mov ecx, edx */
  ECX = (EDX);
  /* 10066559 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 1006655c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006655e cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10066560 jge 0x10066568 */
  if ((C.sf==C.of)) goto L_10066568;
  /* 10066562 push 3 */
  push32((uint32_t)(0x3u));
  /* 10066564 push 5 */
  push32((uint32_t)(0x5u));
  /* 10066566 jmp 0x1006656c */
  goto L_1006656c;
L_10066568:;
  /* 10066568 push 1 */
  push32((uint32_t)(0x1u));
  /* 1006656a push 7 */
  push32((uint32_t)(0x7u));
L_1006656c:;
  /* 1006656c push 9 */
  push32((uint32_t)(0x9u));
  /* 1006656e call dword ptr [0x10076504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076504))), 0x10066574u);
  /* 10066574 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10066577:;
  /* 10066577 push 0x10076260 */
  push32((uint32_t)(0x10076260u));
  /* 1006657c call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x10066582u);
  /* 10066582 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066585 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10066587 pop edi */
  EDI = (pop32());
  /* 10066588 pop esi */
  ESI = (pop32());
  /* 10066589 jne 0x1006659a */
  if (!C.zf) goto L_1006659a;
  /* 1006658b push 1 */
  push32((uint32_t)(0x1u));
  /* 1006658d push 1 */
  push32((uint32_t)(0x1u));
  /* 1006658f push 9 */
  push32((uint32_t)(0x9u));
  /* 10066591 call dword ptr [0x10076504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076504))), 0x10066597u);
  /* 10066597 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1006659a:;
  /* 1006659a push 0x10076068 */
  push32((uint32_t)(0x10076068u));
  /* 1006659f call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x100665a5u);
  /* 100665a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100665a8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100665aa je 0x100665be */
  if (C.zf) goto L_100665be;
  /* 100665ac push 0x10073650 */
  push32((uint32_t)(0x10073650u));
  /* 100665b1 call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x100665b7u);
  /* 100665b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100665ba test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100665bc jne 0x100665cd */
  if (!C.zf) goto L_100665cd;
L_100665be:;
  /* 100665be push 1 */
  push32((uint32_t)(0x1u));
  /* 100665c0 push 4 */
  push32((uint32_t)(0x4u));
  /* 100665c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 100665c4 call dword ptr [0x10076504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076504))), 0x100665cau);
  /* 100665ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100665cd:;
  /* 100665cd push 0x10075f10 */
  push32((uint32_t)(0x10075f10u));
  /* 100665d2 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x100665d8u);
  /* 100665d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100665db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100665dd jne 0x100665ee */
  if (!C.zf) goto L_100665ee;
  /* 100665df push 4 */
  push32((uint32_t)(0x4u));
  /* 100665e1 push 4 */
  push32((uint32_t)(0x4u));
  /* 100665e3 push 6 */
  push32((uint32_t)(0x6u));
  /* 100665e5 call dword ptr [0x10076504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076504))), 0x100665ebu);
  /* 100665eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100665ee:;
  /* 100665ee push 0x10076368 */
  push32((uint32_t)(0x10076368u));
  /* 100665f3 call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x100665f9u);
  /* 100665f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100665fc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100665fe jne 0x10066620 */
  if (!C.zf) goto L_10066620;
  /* 10066600 push 1 */
  push32((uint32_t)(0x1u));
  /* 10066602 push 1 */
  push32((uint32_t)(0x1u));
  /* 10066604 push 9 */
  push32((uint32_t)(0x9u));
  /* 10066606 call dword ptr [0x10076504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076504))), 0x1006660cu);
  /* 1006660c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006660f pop ecx */
  ECX = (pop32());
  /* 10066610 ret  */
  ESPCHK(0x100662f0u, _esp0);
  ESP += 4; return;
L_10066611:;
  /* 10066611 push 3 */
  push32((uint32_t)(0x3u));
  /* 10066613 push 6 */
  push32((uint32_t)(0x6u));
  /* 10066615 push 0 */
  push32((uint32_t)(0x0u));
  /* 10066617 call dword ptr [0x10076504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076504))), 0x1006661du);
  /* 1006661d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10066620:;
  /* 10066620 pop ecx */
  ECX = (pop32());
  /* 10066621 ret  */
  ESPCHK(0x100662f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006630 @ 0x10066630 (174 bytes, 50 insns) */
void f_10066630(void) {
  FTRACE(0x10066630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10066630 push 0x10076588 */
  push32((uint32_t)(0x10076588u));
  /* 10066635 call 0x10062720 */
  push32(0x1006663au); f_10062720();
  /* 1006663a push 0x10076330 */
  push32((uint32_t)(0x10076330u));
  /* 1006663f call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x10066645u);
  /* 10066645 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066648 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1006664a je 0x1006666c */
  if (C.zf) goto L_1006666c;
  /* 1006664c push 0x10076278 */
  push32((uint32_t)(0x10076278u));
  /* 10066651 call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x10066657u);
  /* 10066657 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006665a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1006665c je 0x1006666c */
  if (C.zf) goto L_1006666c;
  /* 1006665e push 0x1006f16c */
  push32((uint32_t)(0x1006f16cu));
  /* 10066663 call 0x10062720 */
  push32(0x10066668u); f_10062720();
  /* 10066668 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006666b ret  */
  ESPCHK(0x10066630u, _esp0);
  ESP += 4; return;
L_1006666c:;
  /* 1006666c mov eax, dword ptr [0x10075f48] */
  EAX = (r32((uint32_t)(0x10075f48)));
  /* 10066671 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10066674 je 0x100666d2 */
  if (C.zf) goto L_100666d2;
  /* 10066676 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10066679 je 0x100666d2 */
  if (C.zf) goto L_100666d2;
  /* 1006667b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006667e je 0x100666d2 */
  if (C.zf) goto L_100666d2;
  /* 10066680 push 0x10076260 */
  push32((uint32_t)(0x10076260u));
  /* 10066685 call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x1006668bu);
  /* 1006668b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006668e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10066690 je 0x100666b2 */
  if (C.zf) goto L_100666b2;
  /* 10066692 push 0x10076140 */
  push32((uint32_t)(0x10076140u));
  /* 10066697 call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x1006669du);
  /* 1006669d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100666a0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100666a2 jne 0x100666b2 */
  if (!C.zf) goto L_100666b2;
  /* 100666a4 push 0x10076588 */
  push32((uint32_t)(0x10076588u));
  /* 100666a9 call 0x10062720 */
  push32(0x100666aeu); f_10062720();
  /* 100666ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100666b1 ret  */
  ESPCHK(0x10066630u, _esp0);
  ESP += 4; return;
L_100666b2:;
  /* 100666b2 push 0x10076140 */
  push32((uint32_t)(0x10076140u));
  /* 100666b7 call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x100666bdu);
  /* 100666bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100666c0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100666c2 je 0x100666dd */
  if (C.zf) goto L_100666dd;
  /* 100666c4 push 0x1006f1d8 */
  push32((uint32_t)(0x1006f1d8u));
  /* 100666c9 call 0x10062720 */
  push32(0x100666ceu); f_10062720();
  /* 100666ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100666d1 ret  */
  ESPCHK(0x10066630u, _esp0);
  ESP += 4; return;
L_100666d2:;
  /* 100666d2 push 0x1006f1d8 */
  push32((uint32_t)(0x1006f1d8u));
  /* 100666d7 call 0x10062720 */
  push32(0x100666dcu); f_10062720();
  /* 100666dc pop ecx */
  ECX = (pop32());
L_100666dd:;
  /* 100666dd ret  */
  ESPCHK(0x10066630u, _esp0);
  ESP += 4; return;
}

/* FUN_100066e0 @ 0x100666e0 (70 bytes, 22 insns) */
void f_100666e0(void) {
  FTRACE(0x100666e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100666e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 100666e2 call 0x10062760 */
  push32(0x100666e7u); f_10062760();
  /* 100666e7 push 0x10073678 */
  push32((uint32_t)(0x10073678u));
  /* 100666ec call 0x10065270 */
  push32(0x100666f1u); f_10065270();
  /* 100666f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100666f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100666f6 je 0x10066702 */
  if (C.zf) goto L_10066702;
  /* 100666f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 100666fa call 0x10062760 */
  push32(0x100666ffu); f_10062760();
  /* 100666ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10066702:;
  /* 10066702 call 0x10062770 */
  push32(0x10066707u); f_10062770();
  /* 10066707 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10066709 jg 0x1006671d */
  if ((!C.zf&&C.sf==C.of)) goto L_1006671d;
  /* 1006670b push 0x100738c8 */
  push32((uint32_t)(0x100738c8u));
  /* 10066710 call dword ptr [0x10076534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076534))), 0x10066716u);
  /* 10066716 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066719 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006671b jle 0x10066725 */
  if ((C.zf||C.sf!=C.of)) goto L_10066725;
L_1006671d:;
  /* 1006671d push 0 */
  push32((uint32_t)(0x0u));
  /* 1006671f call 0x10062760 */
  push32(0x10066724u); f_10062760();
  /* 10066724 pop ecx */
  ECX = (pop32());
L_10066725:;
  /* 10066725 ret  */
  ESPCHK(0x100666e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006730 @ 0x10066730 (235 bytes, 66 insns) */
void f_10066730(void) {
  FTRACE(0x10066730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10066730 push 0x10076188 */
  push32((uint32_t)(0x10076188u));
  /* 10066735 call dword ptr [0x1007653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007653c))), 0x1006673bu);
  /* 1006673b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006673e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10066740 je 0x10066756 */
  if (C.zf) goto L_10066756;
  /* 10066742 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10066744 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10066746 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10066748 push 0x10076360 */
  push32((uint32_t)(0x10076360u));
  /* 1006674d call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10066753u);
  /* 10066753 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10066756:;
  /* 10066756 push 0x100760a0 */
  push32((uint32_t)(0x100760a0u));
  /* 1006675b call dword ptr [0x1007653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007653c))), 0x10066761u);
  /* 10066761 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066764 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10066766 je 0x1006677c */
  if (C.zf) goto L_1006677c;
  /* 10066768 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1006676a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1006676c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1006676e push 0x10073658 */
  push32((uint32_t)(0x10073658u));
  /* 10066773 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10066779u);
  /* 10066779 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1006677c:;
  /* 1006677c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1006677e push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10066780 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10066782 push 0x100738b8 */
  push32((uint32_t)(0x100738b8u));
  /* 10066787 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x1006678du);
  /* 1006678d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1006678f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10066791 push 0x100761c8 */
  push32((uint32_t)(0x100761c8u));
  /* 10066796 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006679cu);
  /* 1006679c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1006679e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100667a0 push 0x100761c0 */
  push32((uint32_t)(0x100761c0u));
  /* 100667a5 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100667abu);
  /* 100667ab push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100667ad push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100667af push 0x10076190 */
  push32((uint32_t)(0x10076190u));
  /* 100667b4 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100667bau);
  /* 100667ba push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100667bc push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100667be push 0x10076188 */
  push32((uint32_t)(0x10076188u));
  /* 100667c3 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100667c9u);
  /* 100667c9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100667cc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100667ce push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100667d0 push 0x10076198 */
  push32((uint32_t)(0x10076198u));
  /* 100667d5 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100667dbu);
  /* 100667db push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100667dd push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100667df push 0x10076088 */
  push32((uint32_t)(0x10076088u));
  /* 100667e4 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100667eau);
  /* 100667ea push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100667ec push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100667ee push 0x10076090 */
  push32((uint32_t)(0x10076090u));
  /* 100667f3 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100667f9u);
  /* 100667f9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100667fb push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100667fd push 0x10076098 */
  push32((uint32_t)(0x10076098u));
  /* 10066802 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10066808u);
  /* 10066808 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1006680a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1006680c push 0x100760a0 */
  push32((uint32_t)(0x100760a0u));
  /* 10066811 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x10066817u);
  /* 10066817 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006681a ret  */
  ESPCHK(0x10066730u, _esp0);
  ESP += 4; return;
}

/* FUN_10006820 @ 0x10066820 (303 bytes, 90 insns) */
void f_10066820(void) {
  FTRACE(0x10066820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10066820 push ecx */
  push32((uint32_t)(ECX));
  /* 10066821 push ebx */
  push32((uint32_t)(EBX));
  /* 10066822 push ebp */
  push32((uint32_t)(EBP));
  /* 10066823 push esi */
  push32((uint32_t)(ESI));
  /* 10066824 push edi */
  push32((uint32_t)(EDI));
  /* 10066825 push 0x100738c8 */
  push32((uint32_t)(0x100738c8u));
  /* 1006682a call dword ptr [0x10076534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076534))), 0x10066830u);
  /* 10066830 push 0x10076240 */
  push32((uint32_t)(0x10076240u));
  /* 10066835 mov ebx, eax */
  EBX = (EAX);
  /* 10066837 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x1006683du);
  /* 1006683d push 0x10076240 */
  push32((uint32_t)(0x10076240u));
  /* 10066842 mov edi, eax */
  EDI = (EAX);
  /* 10066844 call dword ptr [0x10076534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076534))), 0x1006684au);
  /* 1006684a push 0x10075f10 */
  push32((uint32_t)(0x10075f10u));
  /* 1006684f mov ebp, eax */
  EBP = (EAX);
  /* 10066851 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10066857u);
  /* 10066857 push 0x10075f10 */
  push32((uint32_t)(0x10075f10u));
  /* 1006685c mov esi, eax */
  ESI = (EAX);
  /* 1006685e call dword ptr [0x10076534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076534))), 0x10066864u);
  /* 10066864 push 0x100738c8 */
  push32((uint32_t)(0x100738c8u));
  /* 10066869 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 1006686d call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10066873u);
  /* 10066873 mov edx, dword ptr [esp + 0x28] */
  EDX = (r32((uint32_t)(ESP + 0x28)));
  /* 10066877 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006687a sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006687c add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1006687e sub esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10066880 sub esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10066882 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10066884 pop edi */
  EDI = (pop32());
  /* 10066885 pop esi */
  ESI = (pop32());
  /* 10066886 pop ebp */
  EBP = (pop32());
  /* 10066887 pop ebx */
  EBX = (pop32());
  /* 10066888 jne 0x100668f0 */
  if (!C.zf) goto L_100668f0;
  /* 1006688a cmp dword ptr [0x100761a0], 0x28 */
  { uint32_t _a=(r32((uint32_t)(0x100761a0))),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10066891 jle 0x100668f0 */
  if ((C.zf||C.sf!=C.of)) goto L_100668f0;
  /* 10066893 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10066895 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10066897 push 4 */
  push32((uint32_t)(0x4u));
  /* 10066899 push 0x100738c8 */
  push32((uint32_t)(0x100738c8u));
  /* 1006689e call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x100668a4u);
  /* 100668a4 push 0x100761a8 */
  push32((uint32_t)(0x100761a8u));
  /* 100668a9 call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x100668afu);
  /* 100668af add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100668b2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100668b4 je 0x100668ca */
  if (C.zf) goto L_100668ca;
  /* 100668b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100668b8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100668ba push 6 */
  push32((uint32_t)(0x6u));
  /* 100668bc push 0x100738c8 */
  push32((uint32_t)(0x100738c8u));
  /* 100668c1 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x100668c7u);
  /* 100668c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100668ca:;
  /* 100668ca push 0x10076010 */
  push32((uint32_t)(0x10076010u));
  /* 100668cf call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x100668d5u);
  /* 100668d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100668d8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100668da je 0x100668f0 */
  if (C.zf) goto L_100668f0;
  /* 100668dc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100668de push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100668e0 push 8 */
  push32((uint32_t)(0x8u));
  /* 100668e2 push 0x100738c8 */
  push32((uint32_t)(0x100738c8u));
  /* 100668e7 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x100668edu);
  /* 100668ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100668f0:;
  /* 100668f0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100668f2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100668f4 push 0x100762d8 */
  push32((uint32_t)(0x100762d8u));
  /* 100668f9 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x100668ffu);
  /* 100668ff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10066901 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10066903 push 0x100762c0 */
  push32((uint32_t)(0x100762c0u));
  /* 10066908 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006690eu);
  /* 1006690e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10066910 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10066912 push 0x100762d0 */
  push32((uint32_t)(0x100762d0u));
  /* 10066917 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006691du);
  /* 1006691d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1006691f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10066921 push 0x100762b0 */
  push32((uint32_t)(0x100762b0u));
  /* 10066926 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006692cu);
  /* 1006692c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1006692e push 0xf */
  push32((uint32_t)(0xfu));
  /* 10066930 push 0x100762b8 */
  push32((uint32_t)(0x100762b8u));
  /* 10066935 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006693bu);
  /* 1006693b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1006693d push 0xa */
  push32((uint32_t)(0xau));
  /* 1006693f push 0x100762a8 */
  push32((uint32_t)(0x100762a8u));
  /* 10066944 call dword ptr [0x100764f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f8))), 0x1006694au);
  /* 1006694a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006694d pop ecx */
  ECX = (pop32());
  /* 1006694e ret  */
  ESPCHK(0x10066820u, _esp0);
  ESP += 4; return;
}

/* FUN_10006950 @ 0x10066950 (517 bytes, 145 insns) */
void f_10066950(void) {
  FTRACE(0x10066950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10066950 push esi */
  push32((uint32_t)(ESI));
  /* 10066951 push 0x10076248 */
  push32((uint32_t)(0x10076248u));
  /* 10066956 call dword ptr [0x10076534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076534))), 0x1006695cu);
  /* 1006695c push 0x10076248 */
  push32((uint32_t)(0x10076248u));
  /* 10066961 mov esi, eax */
  ESI = (EAX);
  /* 10066963 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10066969u);
  /* 10066969 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006696c sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006696e jne 0x10066984 */
  if (!C.zf) goto L_10066984;
  /* 10066970 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10066972 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10066974 push 5 */
  push32((uint32_t)(0x5u));
  /* 10066976 push 0x10076248 */
  push32((uint32_t)(0x10076248u));
  /* 1006697b call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10066981u);
  /* 10066981 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10066984:;
  /* 10066984 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10066986 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10066988 push 1 */
  push32((uint32_t)(0x1u));
  /* 1006698a push 0x10075fa8 */
  push32((uint32_t)(0x10075fa8u));
  /* 1006698f call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10066995u);
  /* 10066995 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10066997 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10066999 push 1 */
  push32((uint32_t)(0x1u));
  /* 1006699b push 0x100761d8 */
  push32((uint32_t)(0x100761d8u));
  /* 100669a0 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x100669a6u);
  /* 100669a6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100669a8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100669aa push 2 */
  push32((uint32_t)(0x2u));
  /* 100669ac push 0x10076240 */
  push32((uint32_t)(0x10076240u));
  /* 100669b1 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x100669b7u);
  /* 100669b7 push 0x10076240 */
  push32((uint32_t)(0x10076240u));
  /* 100669bc call dword ptr [0x10076534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076534))), 0x100669c2u);
  /* 100669c2 push 0x10076240 */
  push32((uint32_t)(0x10076240u));
  /* 100669c7 mov esi, eax */
  ESI = (EAX);
  /* 100669c9 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x100669cfu);
  /* 100669cf add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100669d2 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100669d4 jne 0x10066b53 */
  if (!C.zf) goto L_10066b53;
  /* 100669da push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100669dc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100669de push 1 */
  push32((uint32_t)(0x1u));
  /* 100669e0 push 0x10075f10 */
  push32((uint32_t)(0x10075f10u));
  /* 100669e5 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x100669ebu);
  /* 100669eb push 0x10075f10 */
  push32((uint32_t)(0x10075f10u));
  /* 100669f0 call dword ptr [0x10076534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076534))), 0x100669f6u);
  /* 100669f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100669f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100669fb je 0x10066b53 */
  if (C.zf) goto L_10066b53;
  /* 10066a01 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10066a03 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10066a05 push 1 */
  push32((uint32_t)(0x1u));
  /* 10066a07 push 0x10075fc0 */
  push32((uint32_t)(0x10075fc0u));
  /* 10066a0c call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10066a12u);
  /* 10066a12 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10066a14 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10066a16 push 1 */
  push32((uint32_t)(0x1u));
  /* 10066a18 push 0x10075fc8 */
  push32((uint32_t)(0x10075fc8u));
  /* 10066a1d call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10066a23u);
  /* 10066a23 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10066a25 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10066a27 push 1 */
  push32((uint32_t)(0x1u));
  /* 10066a29 push 0x10073868 */
  push32((uint32_t)(0x10073868u));
  /* 10066a2e call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10066a34u);
  /* 10066a34 push 0x10073868 */
  push32((uint32_t)(0x10073868u));
  /* 10066a39 call dword ptr [0x10076534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076534))), 0x10066a3fu);
  /* 10066a3f add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066a42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10066a44 je 0x10066b53 */
  if (C.zf) goto L_10066b53;
  /* 10066a4a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10066a4c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10066a4e push 1 */
  push32((uint32_t)(0x1u));
  /* 10066a50 push 0x10075fd8 */
  push32((uint32_t)(0x10075fd8u));
  /* 10066a55 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10066a5bu);
  /* 10066a5b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10066a5d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10066a5f push 1 */
  push32((uint32_t)(0x1u));
  /* 10066a61 push 0x100760e8 */
  push32((uint32_t)(0x100760e8u));
  /* 10066a66 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10066a6cu);
  /* 10066a6c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10066a6e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10066a70 push 1 */
  push32((uint32_t)(0x1u));
  /* 10066a72 push 0x10073608 */
  push32((uint32_t)(0x10073608u));
  /* 10066a77 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10066a7du);
  /* 10066a7d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10066a7f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10066a81 push 1 */
  push32((uint32_t)(0x1u));
  /* 10066a83 push 0x100760c8 */
  push32((uint32_t)(0x100760c8u));
  /* 10066a88 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10066a8eu);
  /* 10066a8e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066a91 push 0x10076010 */
  push32((uint32_t)(0x10076010u));
  /* 10066a96 call dword ptr [0x10076540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076540))), 0x10066a9cu);
  /* 10066a9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066a9f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10066aa1 je 0x10066b53 */
  if (C.zf) goto L_10066b53;
  /* 10066aa7 push 0x10075fa8 */
  push32((uint32_t)(0x10075fa8u));
  /* 10066aac call dword ptr [0x10076534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076534))), 0x10066ab2u);
  /* 10066ab2 push 0x10075fa8 */
  push32((uint32_t)(0x10075fa8u));
  /* 10066ab7 mov esi, eax */
  ESI = (EAX);
  /* 10066ab9 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10066abfu);
  /* 10066abf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066ac2 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10066ac4 jne 0x10066aed */
  if (!C.zf) goto L_10066aed;
  /* 10066ac6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10066ac8 call 0x10062730 */
  push32(0x10066acdu); f_10062730();
  /* 10066acd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066ad0 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10066ad3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10066ad5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10066ad7 jge 0x10066add */
  if ((C.sf==C.of)) goto L_10066add;
  /* 10066ad9 push 6 */
  push32((uint32_t)(0x6u));
  /* 10066adb jmp 0x10066adf */
  goto L_10066adf;
L_10066add:;
  /* 10066add push 4 */
  push32((uint32_t)(0x4u));
L_10066adf:;
  /* 10066adf push 0x10075fa8 */
  push32((uint32_t)(0x10075fa8u));
  /* 10066ae4 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10066aeau);
  /* 10066aea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10066aed:;
  /* 10066aed push 0x100760c8 */
  push32((uint32_t)(0x100760c8u));
  /* 10066af2 call dword ptr [0x10076534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076534))), 0x10066af8u);
  /* 10066af8 push 0x100760c8 */
  push32((uint32_t)(0x100760c8u));
  /* 10066afd mov esi, eax */
  ESI = (EAX);
  /* 10066aff call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10066b05u);
  /* 10066b05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066b08 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10066b0a jne 0x10066b20 */
  if (!C.zf) goto L_10066b20;
  /* 10066b0c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10066b0e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10066b10 push 7 */
  push32((uint32_t)(0x7u));
  /* 10066b12 push 0x100760c8 */
  push32((uint32_t)(0x100760c8u));
  /* 10066b17 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10066b1du);
  /* 10066b1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10066b20:;
  /* 10066b20 push 0x10073608 */
  push32((uint32_t)(0x10073608u));
  /* 10066b25 call dword ptr [0x10076534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076534))), 0x10066b2bu);
  /* 10066b2b push 0x10073608 */
  push32((uint32_t)(0x10073608u));
  /* 10066b30 mov esi, eax */
  ESI = (EAX);
  /* 10066b32 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10066b38u);
  /* 10066b38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066b3b sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10066b3d jne 0x10066b53 */
  if (!C.zf) goto L_10066b53;
  /* 10066b3f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10066b41 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10066b43 push 3 */
  push32((uint32_t)(0x3u));
  /* 10066b45 push 0x10073608 */
  push32((uint32_t)(0x10073608u));
  /* 10066b4a call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10066b50u);
  /* 10066b50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10066b53:;
  /* 10066b53 pop esi */
  ESI = (pop32());
  /* 10066b54 ret  */
  ESPCHK(0x10066950u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b60 @ 0x10066b60 (121 bytes, 36 insns) */
void f_10066b60(void) {
  FTRACE(0x10066b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10066b60 push 1 */
  push32((uint32_t)(0x1u));
  /* 10066b62 call 0x10062760 */
  push32(0x10066b67u); f_10062760();
  /* 10066b67 push 0x10073878 */
  push32((uint32_t)(0x10073878u));
  /* 10066b6c call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10066b72u);
  /* 10066b72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066b75 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10066b78 jge 0x10066b8d */
  if ((C.sf==C.of)) goto L_10066b8d;
  /* 10066b7a mov eax, dword ptr [0x100762a4] */
  EAX = (r32((uint32_t)(0x100762a4)));
  /* 10066b7f push 0 */
  push32((uint32_t)(0x0u));
  /* 10066b81 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10066b84 push eax */
  push32((uint32_t)(EAX));
  /* 10066b85 call 0x100626d0 */
  push32(0x10066b8au); f_100626d0();
  /* 10066b8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10066b8d:;
  /* 10066b8d push 0x10073878 */
  push32((uint32_t)(0x10073878u));
  /* 10066b92 call dword ptr [0x10076530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076530))), 0x10066b98u);
  /* 10066b98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066b9b cmp eax, 0x5f */
  { uint32_t _a=(EAX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10066b9e jle 0x10066bb4 */
  if ((C.zf||C.sf!=C.of)) goto L_10066bb4;
  /* 10066ba0 mov ecx, dword ptr [0x100762a4] */
  ECX = (r32((uint32_t)(0x100762a4)));
  /* 10066ba6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10066ba8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10066bab push ecx */
  push32((uint32_t)(ECX));
  /* 10066bac call 0x100626d0 */
  push32(0x10066bb1u); f_100626d0();
  /* 10066bb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10066bb4:;
  /* 10066bb4 mov edx, dword ptr [0x100762a4] */
  EDX = (r32((uint32_t)(0x100762a4)));
  /* 10066bba add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10066bbd push edx */
  push32((uint32_t)(EDX));
  /* 10066bbe call 0x100626f0 */
  push32(0x10066bc3u); f_100626f0();
  /* 10066bc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10066bc5 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10066bc8 push eax */
  push32((uint32_t)(EAX));
  /* 10066bc9 call 0x10062760 */
  push32(0x10066bceu); f_10062760();
  /* 10066bce push 0 */
  push32((uint32_t)(0x0u));
  /* 10066bd0 call 0x10062760 */
  push32(0x10066bd5u); f_10062760();
  /* 10066bd5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066bd8 ret  */
  ESPCHK(0x10066b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006be0 @ 0x10066be0 (86 bytes, 20 insns) */
void f_10066be0(void) {
  FTRACE(0x10066be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10066be0 mov eax, dword ptr [0x100762a4] */
  EAX = (r32((uint32_t)(0x100762a4)));
  /* 10066be5 mov ecx, dword ptr [eax*4 + 0x10075f88] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10075f88)));
  /* 10066bec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10066bee je 0x10066bf5 */
  if (C.zf) goto L_10066bf5;
  /* 10066bf0 call 0x100666e0 */
  push32(0x10066bf5u); f_100666e0();
L_10066bf5:;
  /* 10066bf5 call 0x10065df0 */
  push32(0x10066bfau); f_10065df0();
  /* 10066bfa call 0x10066730 */
  push32(0x10066bffu); f_10066730();
  /* 10066bff call 0x10062780 */
  push32(0x10066c04u); f_10062780();
  /* 10066c04 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10066c07 jge 0x10066c0e */
  if ((C.sf==C.of)) goto L_10066c0e;
  /* 10066c09 call 0x10066820 */
  push32(0x10066c0eu); f_10066820();
L_10066c0e:;
  /* 10066c0e call 0x10065bd0 */
  push32(0x10066c13u); f_10065bd0();
  /* 10066c13 call 0x10065a90 */
  push32(0x10066c18u); f_10065a90();
  /* 10066c18 call 0x10062780 */
  push32(0x10066c1du); f_10062780();
  /* 10066c1d cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10066c20 jge 0x10066c27 */
  if ((C.sf==C.of)) goto L_10066c27;
  /* 10066c22 call 0x100652b0 */
  push32(0x10066c27u); f_100652b0();
L_10066c27:;
  /* 10066c27 call 0x10065fd0 */
  push32(0x10066c2cu); f_10065fd0();
  /* 10066c2c call 0x100662f0 */
  push32(0x10066c31u); f_100662f0();
  /* 10066c31 jmp 0x10066630 */
  f_10066630(); return;
}

/* FUN_10006c40 @ 0x10066c40 (247 bytes, 70 insns) */
void f_10066c40(void) {
  FTRACE(0x10066c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10066c40 push esi */
  push32((uint32_t)(ESI));
  /* 10066c41 push edi */
  push32((uint32_t)(EDI));
  /* 10066c42 call 0x10066b60 */
  push32(0x10066c47u); f_10066b60();
  /* 10066c47 call 0x10066950 */
  push32(0x10066c4cu); f_10066950();
  /* 10066c4c mov edi, 2 */
  EDI = (0x2u);
L_10066c51:;
  /* 10066c51 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10066c53 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10066c55 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10066c5a push 0x10076180 */
  push32((uint32_t)(0x10076180u));
  /* 10066c5f call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10066c65u);
  /* 10066c65 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10066c67 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10066c69 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10066c6e push 0x10073678 */
  push32((uint32_t)(0x10073678u));
  /* 10066c73 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10066c79u);
  /* 10066c79 mov eax, dword ptr [0x100762a4] */
  EAX = (r32((uint32_t)(0x100762a4)));
  /* 10066c7e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10066c81 push eax */
  push32((uint32_t)(EAX));
  /* 10066c82 call 0x100626f0 */
  push32(0x10066c87u); f_100626f0();
  /* 10066c87 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066c8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10066c8c jne 0x10066cac */
  if (!C.zf) goto L_10066cac;
  /* 10066c8e mov esi, 0x64 */
  ESI = (0x64u);
L_10066c93:;
  /* 10066c93 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10066c95 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10066c97 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 10066c99 push 0x10073878 */
  push32((uint32_t)(0x10073878u));
  /* 10066c9e call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10066ca4u);
  /* 10066ca4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066ca7 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10066ca8 jne 0x10066c93 */
  if (!C.zf) goto L_10066c93;
  /* 10066caa jmp 0x10066cc0 */
  goto L_10066cc0;
L_10066cac:;
  /* 10066cac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10066cae push 0xa */
  push32((uint32_t)(0xau));
  /* 10066cb0 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10066cb2 push 0x10076150 */
  push32((uint32_t)(0x10076150u));
  /* 10066cb7 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10066cbdu);
  /* 10066cbd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10066cc0:;
  /* 10066cc0 push 0x10076010 */
  push32((uint32_t)(0x10076010u));
  /* 10066cc5 call dword ptr [0x1007653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007653c))), 0x10066ccbu);
  /* 10066ccb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066cce test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10066cd0 jne 0x10066ce9 */
  if (!C.zf) goto L_10066ce9;
  /* 10066cd2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10066cd4 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10066cd6 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10066cdb push 0x10073680 */
  push32((uint32_t)(0x10073680u));
  /* 10066ce0 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10066ce6u);
  /* 10066ce6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10066ce9:;
  /* 10066ce9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10066ceb push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10066ced push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10066cf2 push 0x10073670 */
  push32((uint32_t)(0x10073670u));
  /* 10066cf7 call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10066cfdu);
  /* 10066cfd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10066cff push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10066d01 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10066d06 push 0x10075f70 */
  push32((uint32_t)(0x10075f70u));
  /* 10066d0b call dword ptr [0x100764f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764f4))), 0x10066d11u);
  /* 10066d11 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066d14 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10066d15 jne 0x10066c51 */
  if (!C.zf) goto L_10066c51;
  /* 10066d1b call 0x10066730 */
  push32(0x10066d20u); f_10066730();
  /* 10066d20 call 0x10065fd0 */
  push32(0x10066d25u); f_10065fd0();
  /* 10066d25 call 0x100662f0 */
  push32(0x10066d2au); f_100662f0();
  /* 10066d2a call 0x100652b0 */
  push32(0x10066d2fu); f_100652b0();
  /* 10066d2f call 0x10065a90 */
  push32(0x10066d34u); f_10065a90();
  /* 10066d34 pop edi */
  EDI = (pop32());
  /* 10066d35 pop esi */
  ESI = (pop32());
  /* 10066d36 ret  */
  ESPCHK(0x10066c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d40 @ 0x10066d40 (279 bytes, 62 insns) [1 switch table(s)] */
void f_10066d40(void) {
  FTRACE(0x10066d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10066d40 call 0x10062680 */
  push32(0x10066d45u); f_10062680();
  /* 10066d45 mov dword ptr [0x10075f48], eax */
  w32((uint32_t)(0x10075f48), (EAX));
  /* 10066d4a call 0x10062660 */
  push32(0x10066d4fu); f_10062660();
  /* 10066d4f mov dword ptr [0x10076358], eax */
  w32((uint32_t)(0x10076358), (EAX));
  /* 10066d54 call 0x10062670 */
  push32(0x10066d59u); f_10062670();
  /* 10066d59 mov dword ptr [0x10073888], eax */
  w32((uint32_t)(0x10073888), (EAX));
  /* 10066d5e call 0x10063040 */
  push32(0x10066d63u); f_10063040();
  /* 10066d63 push 0x1006f114 */
  push32((uint32_t)(0x1006f114u));
  /* 10066d68 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10066d6a call dword ptr [0x100764fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764fc))), 0x10066d70u);
  /* 10066d70 call 0x10066630 */
  push32(0x10066d75u); f_10066630();
  /* 10066d75 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10066d77 push 0x1006f244 */
  push32((uint32_t)(0x1006f244u));
  /* 10066d7c call 0x10062700 */
  push32(0x10066d81u); f_10062700();
  /* 10066d81 mov eax, dword ptr [0x10075f48] */
  EAX = (r32((uint32_t)(0x10075f48)));
  /* 10066d86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066d89 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10066d8c ja 0x10066e52 */
  if ((!C.cf&&!C.zf)) goto L_10066e52;
  /* 10066d92 jmp dword ptr [eax*4 + 0x10066e58] */
  switch (EAX) {
    case 0: goto L_10066d99;
    case 1: goto L_10066e15;
    case 2: goto L_10066e1c;
    case 3: goto L_10066e1c;
    case 4: goto L_10066e1c;
    case 5: goto L_10066d99;
    default: x86_unimpl("switch@0x10066d92 out of table"); return;
  }
L_10066d99:;
  /* 10066d99 cmp dword ptr [0x10073888], 3 */
  { uint32_t _a=(r32((uint32_t)(0x10073888))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10066da0 jne 0x10066dd2 */
  if (!C.zf) goto L_10066dd2;
  /* 10066da2 push 0x1006f160 */
  push32((uint32_t)(0x1006f160u));
  /* 10066da7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10066da9 call dword ptr [0x100764fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764fc))), 0x10066dafu);
  /* 10066daf push 0x1006f16c */
  push32((uint32_t)(0x1006f16cu));
  /* 10066db4 call 0x10062720 */
  push32(0x10066db9u); f_10062720();
  /* 10066db9 push 5 */
  push32((uint32_t)(0x5u));
  /* 10066dbb push 0x1006f41c */
  push32((uint32_t)(0x1006f41cu));
  /* 10066dc0 call 0x10062700 */
  push32(0x10066dc5u); f_10062700();
  /* 10066dc5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066dc8 call 0x10066c40 */
  push32(0x10066dcdu); f_10066c40();
  /* 10066dcd jmp 0x10066e52 */
  goto L_10066e52;
L_10066dd2:;
  /* 10066dd2 push 0x1006f114 */
  push32((uint32_t)(0x1006f114u));
  /* 10066dd7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10066dd9 call dword ptr [0x100764fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764fc))), 0x10066ddfu);
  /* 10066ddf push 0x10076588 */
  push32((uint32_t)(0x10076588u));
  /* 10066de4 call 0x10062720 */
  push32(0x10066de9u); f_10062720();
  /* 10066de9 mov eax, dword ptr [0x10073888] */
  EAX = (r32((uint32_t)(0x10073888)));
  /* 10066dee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066df1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10066df3 jne 0x10066dff */
  if (!C.zf) goto L_10066dff;
  /* 10066df5 mov dword ptr [0x1006f248], 4 */
  w32((uint32_t)(0x1006f248), (0x4u));
L_10066dff:;
  /* 10066dff push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10066e01 push 0x1006f244 */
  push32((uint32_t)(0x1006f244u));
  /* 10066e06 call 0x10062700 */
  push32(0x10066e0bu); f_10062700();
  /* 10066e0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066e0e call 0x10066be0 */
  push32(0x10066e13u); f_10066be0();
  /* 10066e13 jmp 0x10066e52 */
  goto L_10066e52;
L_10066e15:;
  /* 10066e15 call 0x100643e0 */
  push32(0x10066e1au); f_100643e0();
  /* 10066e1a jmp 0x10066e52 */
  goto L_10066e52;
L_10066e1c:;
  /* 10066e1c push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10066e21 call dword ptr [0x10076518] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076518))), 0x10066e27u);
  /* 10066e27 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10066e2c call dword ptr [0x1007651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1007651c))), 0x10066e32u);
  /* 10066e32 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10066e37 call dword ptr [0x10076520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076520))), 0x10066e3du);
  /* 10066e3d push 0x1006f07c */
  push32((uint32_t)(0x1006f07cu));
  /* 10066e42 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10066e44 call dword ptr [0x100764fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100764fc))), 0x10066e4au);
  /* 10066e4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066e4d call 0x10063360 */
  push32(0x10066e52u); f_10063360();
L_10066e52:;
  /* 10066e52 jmp 0x100631c0 */
  f_100631c0(); return;
}

/* FUN_10006e70 @ 0x10066e70 (82 bytes, 32 insns) */
void f_10066e70(void) {
  FTRACE(0x10066e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10066e70 push ebp */
  push32((uint32_t)(EBP));
  /* 10066e71 mov ebp, esp */
  EBP = (ESP);
  /* 10066e73 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10066e76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10066e79 push esi */
  push32((uint32_t)(ESI));
  /* 10066e7a mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10066e7d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10066e80 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10066e83 mov dword ptr [ebp - 0x14], 0x42 */
  w32((uint32_t)(EBP + -0x14), (0x42u));
  /* 10066e8a push eax */
  push32((uint32_t)(EAX));
  /* 10066e8b lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10066e8e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10066e91 mov dword ptr [ebp - 0x1c], 0x7fffffff */
  w32((uint32_t)(EBP + -0x1c), (0x7fffffffu));
  /* 10066e98 push eax */
  push32((uint32_t)(EAX));
  /* 10066e99 call 0x100671fc */
  push32(0x10066e9eu); f_100671fc();
  /* 10066e9e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066ea1 dec dword ptr [ebp - 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))-1; w32((uint32_t)(EBP + -0x1c), (_r)); fl_dec(_r,32); }
  /* 10066ea4 mov esi, eax */
  ESI = (EAX);
  /* 10066ea6 js 0x10066eb0 */
  if (C.sf) goto L_10066eb0;
  /* 10066ea8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10066eab and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 10066eae jmp 0x10066ebd */
  goto L_10066ebd;
L_10066eb0:;
  /* 10066eb0 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10066eb3 push eax */
  push32((uint32_t)(EAX));
  /* 10066eb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10066eb6 call 0x100670e4 */
  push32(0x10066ebbu); f_100670e4();
  /* 10066ebb pop ecx */
  ECX = (pop32());
  /* 10066ebc pop ecx */
  ECX = (pop32());
L_10066ebd:;
  /* 10066ebd mov eax, esi */
  EAX = (ESI);
  /* 10066ebf pop esi */
  ESI = (pop32());
  /* 10066ec0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10066ec1 ret  */
  ESPCHK(0x10066e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ec2 @ 0x10066ec2 (23 bytes, 6 insns) */
void f_10066ec2(void) {
  FTRACE(0x10066ec2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10066ec2 call 0x10066eda */
  push32(0x10066ec7u); f_10066eda();
  /* 10066ec7 call 0x10067a56 */
  push32(0x10066eccu); f_10067a56();
  /* 10066ecc mov dword ptr [0x10076650], eax */
  w32((uint32_t)(0x10076650), (EAX));
  /* 10066ed1 call 0x10067a06 */
  push32(0x10066ed6u); f_10067a06();
  /* 10066ed6 fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 10066ed8 ret  */
  ESPCHK(0x10066ec2u, _esp0);
  ESP += 4; return;
}

/* FUN_10006eda @ 0x10066eda (56 bytes, 8 insns) */
void f_10066eda(void) {
  FTRACE(0x10066edau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10066eda mov eax, 0x10067e2f */
  EAX = (0x10067e2fu);
  /* 10066edf mov dword ptr [0x10070688], 0x10067ad9 */
  w32((uint32_t)(0x10070688), (0x10067ad9u));
  /* 10066ee9 mov dword ptr [0x10070684], eax */
  w32((uint32_t)(0x10070684), (EAX));
  /* 10066eee mov dword ptr [0x1007068c], 0x10067b3f */
  w32((uint32_t)(0x1007068c), (0x10067b3fu));
  /* 10066ef8 mov dword ptr [0x10070690], 0x10067a7f */
  w32((uint32_t)(0x10070690), (0x10067a7fu));
  /* 10066f02 mov dword ptr [0x10070694], 0x10067b27 */
  w32((uint32_t)(0x10070694), (0x10067b27u));
  /* 10066f0c mov dword ptr [0x10070698], eax */
  w32((uint32_t)(0x10070698), (EAX));
  /* 10066f11 ret  */
  ESPCHK(0x10066edau, _esp0);
  ESP += 4; return;
}

/* __ftol @ 0x10066f14 (39 bytes, 16 insns) */
void f_10066f14(void) {
  FTRACE(0x10066f14u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10066f14 push ebp */
  push32((uint32_t)(EBP));
  /* 10066f15 mov ebp, esp */
  EBP = (ESP);
  /* 10066f17 add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10066f1a wait  */
  /* wait (no observable integer/reg state) */
  /* 10066f1b fnstcw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), C.fcw);
  /* 10066f1e wait  */
  /* wait (no observable integer/reg state) */
  /* 10066f1f mov ax, word ptr [ebp - 2] */
  AX = (r16((uint32_t)(EBP + -0x2)));
  /* 10066f23 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 10066f26 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10066f2a fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 10066f2d fistp qword ptr [ebp - 0xc] */
  { int64_t _q=fpu_to_i64(FPU_ST(0)); w32((uint32_t)(EBP + -0xc),(uint32_t)_q); w32((uint32_t)(EBP + -0xc)+4,(uint32_t)((uint64_t)_q>>32)); }
  (void)fpu_pop();
  /* 10066f30 fldcw word ptr [ebp - 2] */
  C.fcw = r16((uint32_t)(EBP + -0x2));
  /* 10066f33 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10066f36 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10066f39 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10066f3a ret  */
  ESPCHK(0x10066f14u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f3b @ 0x10066f3b (217 bytes, 57 insns) */
void f_10066f3b(void) {
  FTRACE(0x10066f3bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10066f3b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10066f3f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10066f42 jne 0x10066fd0 */
  if (!C.zf) goto L_10066fd0;
  /* 10066f48 call dword ptr [0x1006e014] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e014))), 0x10066f4eu);
  /* 10066f4e push 1 */
  push32((uint32_t)(0x1u));
  /* 10066f50 mov dword ptr [0x1007666c], eax */
  w32((uint32_t)(0x1007666c), (EAX));
  /* 10066f55 call 0x1006890c */
  push32(0x10066f5au); f_1006890c();
  /* 10066f5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10066f5c pop ecx */
  ECX = (pop32());
  /* 10066f5d je 0x10066f9b */
  if (C.zf) goto L_10066f9b;
  /* 10066f5f mov eax, dword ptr [0x1007666c] */
  EAX = (r32((uint32_t)(0x1007666c)));
  /* 10066f64 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10066f66 mov cl, byte ptr [0x1007666d] */
  CL = (r8((uint32_t)(0x1007666d)));
  /* 10066f6c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10066f71 shr dword ptr [0x1007666c], 0x10 */
  w32((uint32_t)(0x1007666c), (sh_shr((uint32_t)(r32((uint32_t)(0x1007666c))), (0x10u)&0x1f, 32)));
  /* 10066f78 mov dword ptr [0x10076674], eax */
  w32((uint32_t)(0x10076674), (EAX));
  /* 10066f7d mov dword ptr [0x10076678], ecx */
  w32((uint32_t)(0x10076678), (ECX));
  /* 10066f83 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10066f86 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10066f88 mov dword ptr [0x10076670], eax */
  w32((uint32_t)(0x10076670), (EAX));
  /* 10066f8d call 0x10067fc3 */
  push32(0x10066f92u); f_10067fc3();
  /* 10066f92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10066f94 jne 0x10066f9f */
  if (!C.zf) goto L_10066f9f;
  /* 10066f96 call 0x10068969 */
  push32(0x10066f9bu); f_10068969();
L_10066f9b:;
  /* 10066f9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10066f9d jmp 0x10067011 */
  goto L_10067011;
L_10066f9f:;
  /* 10066f9f call dword ptr [0x1006e010] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e010))), 0x10066fa5u);
  /* 10066fa5 mov dword ptr [0x10077d54], eax */
  w32((uint32_t)(0x10077d54), (EAX));
  /* 10066faa call 0x10068665 */
  push32(0x10066fafu); f_10068665();
  /* 10066faf mov dword ptr [0x10076658], eax */
  w32((uint32_t)(0x10076658), (EAX));
  /* 10066fb4 call 0x1006814f */
  push32(0x10066fb9u); f_1006814f();
  /* 10066fb9 call 0x10068418 */
  push32(0x10066fbeu); f_10068418();
  /* 10066fbe call 0x1006835f */
  push32(0x10066fc3u); f_1006835f();
  /* 10066fc3 call 0x10067ea5 */
  push32(0x10066fc8u); f_10067ea5();
  /* 10066fc8 inc dword ptr [0x10076654] */
  { uint32_t _r=(r32((uint32_t)(0x10076654)))+1; w32((uint32_t)(0x10076654), (_r)); fl_inc(_r,32); }
  /* 10066fce jmp 0x1006700e */
  goto L_1006700e;
L_10066fd0:;
  /* 10066fd0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10066fd2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10066fd4 jne 0x10067002 */
  if (!C.zf) goto L_10067002;
  /* 10066fd6 cmp dword ptr [0x10076654], ecx */
  { uint32_t _a=(r32((uint32_t)(0x10076654))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10066fdc jle 0x10066f9b */
  if ((C.zf||C.sf!=C.of)) goto L_10066f9b;
  /* 10066fde dec dword ptr [0x10076654] */
  { uint32_t _r=(r32((uint32_t)(0x10076654)))-1; w32((uint32_t)(0x10076654), (_r)); fl_dec(_r,32); }
  /* 10066fe4 cmp dword ptr [0x100766a4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x100766a4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10066fea jne 0x10066ff1 */
  if (!C.zf) goto L_10066ff1;
  /* 10066fec call 0x10067ee3 */
  push32(0x10066ff1u); f_10067ee3();
L_10066ff1:;
  /* 10066ff1 call 0x1006830b */
  push32(0x10066ff6u); f_1006830b();
  /* 10066ff6 call 0x10068017 */
  push32(0x10066ffbu); f_10068017();
  /* 10066ffb call 0x10068969 */
  push32(0x10067000u); f_10068969();
  /* 10067000 jmp 0x1006700e */
  goto L_1006700e;
L_10067002:;
  /* 10067002 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067005 jne 0x1006700e */
  if (!C.zf) goto L_1006700e;
  /* 10067007 push ecx */
  push32((uint32_t)(ECX));
  /* 10067008 call 0x100680af */
  push32(0x1006700du); f_100680af();
  /* 1006700d pop ecx */
  ECX = (pop32());
L_1006700e:;
  /* 1006700e push 1 */
  push32((uint32_t)(0x1u));
  /* 10067010 pop eax */
  EAX = (pop32());
L_10067011:;
  /* 10067011 ret 0xc */
  ESPCHK(0x10066f3bu, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10067014 (157 bytes, 73 insns) */
void f_10067014(void) {
  FTRACE(0x10067014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10067014 push ebp */
  push32((uint32_t)(EBP));
  /* 10067015 mov ebp, esp */
  EBP = (ESP);
  /* 10067017 push ebx */
  push32((uint32_t)(EBX));
  /* 10067018 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006701b push esi */
  push32((uint32_t)(ESI));
  /* 1006701c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1006701f push edi */
  push32((uint32_t)(EDI));
  /* 10067020 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 10067023 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10067025 jne 0x10067030 */
  if (!C.zf) goto L_10067030;
  /* 10067027 cmp dword ptr [0x10076654], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10076654))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006702e jmp 0x10067056 */
  goto L_10067056;
L_10067030:;
  /* 10067030 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067033 je 0x1006703a */
  if (C.zf) goto L_1006703a;
  /* 10067035 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067038 jne 0x1006705c */
  if (!C.zf) goto L_1006705c;
L_1006703a:;
  /* 1006703a mov eax, dword ptr [0x10077d58] */
  EAX = (r32((uint32_t)(0x10077d58)));
  /* 1006703f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10067041 je 0x1006704c */
  if (C.zf) goto L_1006704c;
  /* 10067043 push edi */
  push32((uint32_t)(EDI));
  /* 10067044 push esi */
  push32((uint32_t)(ESI));
  /* 10067045 push ebx */
  push32((uint32_t)(EBX));
  /* 10067046 call eax */
  call_ind((uint32_t)(EAX), 0x10067048u);
  /* 10067048 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006704a je 0x10067058 */
  if (C.zf) goto L_10067058;
L_1006704c:;
  /* 1006704c push edi */
  push32((uint32_t)(EDI));
  /* 1006704d push esi */
  push32((uint32_t)(ESI));
  /* 1006704e push ebx */
  push32((uint32_t)(EBX));
  /* 1006704f call 0x10066f3b */
  push32(0x10067054u); f_10066f3b();
  /* 10067054 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_10067056:;
  /* 10067056 jne 0x1006705c */
  if (!C.zf) goto L_1006705c;
L_10067058:;
  /* 10067058 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006705a jmp 0x100670aa */
  goto L_100670aa;
L_1006705c:;
  /* 1006705c push edi */
  push32((uint32_t)(EDI));
  /* 1006705d push esi */
  push32((uint32_t)(ESI));
  /* 1006705e push ebx */
  push32((uint32_t)(EBX));
  /* 1006705f call 0x100627f0 */
  push32(0x10067064u); f_100627f0();
  /* 10067064 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067067 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1006706a jne 0x10067078 */
  if (!C.zf) goto L_10067078;
  /* 1006706c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006706e jne 0x100670a7 */
  if (!C.zf) goto L_100670a7;
  /* 10067070 push edi */
  push32((uint32_t)(EDI));
  /* 10067071 push eax */
  push32((uint32_t)(EAX));
  /* 10067072 push ebx */
  push32((uint32_t)(EBX));
  /* 10067073 call 0x10066f3b */
  push32(0x10067078u); f_10066f3b();
L_10067078:;
  /* 10067078 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1006707a je 0x10067081 */
  if (C.zf) goto L_10067081;
  /* 1006707c cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006707f jne 0x100670a7 */
  if (!C.zf) goto L_100670a7;
L_10067081:;
  /* 10067081 push edi */
  push32((uint32_t)(EDI));
  /* 10067082 push esi */
  push32((uint32_t)(ESI));
  /* 10067083 push ebx */
  push32((uint32_t)(EBX));
  /* 10067084 call 0x10066f3b */
  push32(0x10067089u); f_10066f3b();
  /* 10067089 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006708b jne 0x10067090 */
  if (!C.zf) goto L_10067090;
  /* 1006708d and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_10067090:;
  /* 10067090 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067094 je 0x100670a7 */
  if (C.zf) goto L_100670a7;
  /* 10067096 mov eax, dword ptr [0x10077d58] */
  EAX = (r32((uint32_t)(0x10077d58)));
  /* 1006709b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006709d je 0x100670a7 */
  if (C.zf) goto L_100670a7;
  /* 1006709f push edi */
  push32((uint32_t)(EDI));
  /* 100670a0 push esi */
  push32((uint32_t)(ESI));
  /* 100670a1 push ebx */
  push32((uint32_t)(EBX));
  /* 100670a2 call eax */
  call_ind((uint32_t)(EAX), 0x100670a4u);
  /* 100670a4 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_100670a7:;
  /* 100670a7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_100670aa:;
  /* 100670aa pop edi */
  EDI = (pop32());
  /* 100670ab pop esi */
  ESI = (pop32());
  /* 100670ac pop ebx */
  EBX = (pop32());
  /* 100670ad pop ebp */
  EBP = (pop32());
  /* 100670ae ret 0xc */
  ESPCHK(0x10067014u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x100670b1 (48 bytes, 15 insns) */
void f_100670b1(void) {
  FTRACE(0x100670b1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100670b1 mov eax, dword ptr [0x10076660] */
  EAX = (r32((uint32_t)(0x10076660)));
  /* 100670b6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100670b9 je 0x100670c8 */
  if (C.zf) goto L_100670c8;
  /* 100670bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100670bd jne 0x100670cd */
  if (!C.zf) goto L_100670cd;
  /* 100670bf cmp dword ptr [0x10076664], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10076664))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100670c6 jne 0x100670cd */
  if (!C.zf) goto L_100670cd;
L_100670c8:;
  /* 100670c8 call 0x10068a11 */
  push32(0x100670cdu); f_10068a11();
L_100670cd:;
  /* 100670cd push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 100670d1 call 0x10068a4a */
  push32(0x100670d6u); f_10068a4a();
  /* 100670d6 push 0xff */
  push32((uint32_t)(0xffu));
  /* 100670db call dword ptr [0x10070678] */
  call_ind((uint32_t)(r32((uint32_t)(0x10070678))), 0x100670e1u);
  /* 100670e1 pop ecx */
  ECX = (pop32());
  /* 100670e2 pop ecx */
  ECX = (pop32());
  /* 100670e3 ret  */
  ESPCHK(0x100670b1u, _esp0);
  ESP += 4; return;
}

/* FUN_100070e4 @ 0x100670e4 (280 bytes, 106 insns) */
void f_100670e4(void) {
  FTRACE(0x100670e4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100670e4 push ebp */
  push32((uint32_t)(EBP));
  /* 100670e5 mov ebp, esp */
  EBP = (ESP);
  /* 100670e7 push ebx */
  push32((uint32_t)(EBX));
  /* 100670e8 push esi */
  push32((uint32_t)(ESI));
  /* 100670e9 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 100670ec mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 100670ef mov ebx, dword ptr [esi + 0x10] */
  EBX = (r32((uint32_t)(ESI + 0x10)));
  /* 100670f2 test al, 0x82 */
  { uint32_t _r=(AL)&(0x82u); fl_logic(_r,8); }
  /* 100670f4 je 0x100671f0 */
  if (C.zf) goto L_100671f0;
  /* 100670fa test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 100670fc jne 0x100671f0 */
  if (!C.zf) goto L_100671f0;
  /* 10067102 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 10067104 je 0x1006711c */
  if (C.zf) goto L_1006711c;
  /* 10067106 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1006710a test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 1006710c je 0x100671f0 */
  if (C.zf) goto L_100671f0;
  /* 10067112 mov ecx, dword ptr [esi + 8] */
  ECX = (r32((uint32_t)(ESI + 0x8)));
  /* 10067115 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10067117 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 10067119 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_1006711c:;
  /* 1006711c mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1006711f and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10067123 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 10067127 and al, 0xef */
  { uint32_t _r=(AL)&(0xefu); AL = (_r); fl_logic(_r,8); }
  /* 10067129 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1006712b test ax, 0x10c */
  { uint32_t _r=(AX)&(0x10cu); fl_logic(_r,16); }
  /* 1006712f mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 10067132 jne 0x10067156 */
  if (!C.zf) goto L_10067156;
  /* 10067134 cmp esi, 0x10070778 */
  { uint32_t _a=(ESI),_b=(0x10070778u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006713a je 0x10067144 */
  if (C.zf) goto L_10067144;
  /* 1006713c cmp esi, 0x10070798 */
  { uint32_t _a=(ESI),_b=(0x10070798u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067142 jne 0x1006714f */
  if (!C.zf) goto L_1006714f;
L_10067144:;
  /* 10067144 push ebx */
  push32((uint32_t)(EBX));
  /* 10067145 call 0x10068ea9 */
  push32(0x1006714au); f_10068ea9();
  /* 1006714a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006714c pop ecx */
  ECX = (pop32());
  /* 1006714d jne 0x10067156 */
  if (!C.zf) goto L_10067156;
L_1006714f:;
  /* 1006714f push esi */
  push32((uint32_t)(ESI));
  /* 10067150 call 0x10068e65 */
  push32(0x10067155u); f_10068e65();
  /* 10067155 pop ecx */
  ECX = (pop32());
L_10067156:;
  /* 10067156 test word ptr [esi + 0xc], 0x108 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0x108u); fl_logic(_r,16); }
  /* 1006715c push edi */
  push32((uint32_t)(EDI));
  /* 1006715d je 0x100671c6 */
  if (C.zf) goto L_100671c6;
  /* 1006715f mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 10067162 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 10067164 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10067166 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 10067169 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1006716b mov ecx, dword ptr [esi + 0x18] */
  ECX = (r32((uint32_t)(ESI + 0x18)));
  /* 1006716e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1006716f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10067171 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 10067174 jle 0x10067186 */
  if ((C.zf||C.sf!=C.of)) goto L_10067186;
  /* 10067176 push edi */
  push32((uint32_t)(EDI));
  /* 10067177 push eax */
  push32((uint32_t)(EAX));
  /* 10067178 push ebx */
  push32((uint32_t)(EBX));
  /* 10067179 call 0x10068c75 */
  push32(0x1006717eu); f_10068c75();
  /* 1006717e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10067181 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10067184 jmp 0x100671bc */
  goto L_100671bc;
L_10067186:;
  /* 10067186 cmp ebx, -1 */
  { uint32_t _a=(EBX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067189 je 0x100671a4 */
  if (C.zf) goto L_100671a4;
  /* 1006718b mov ecx, ebx */
  ECX = (EBX);
  /* 1006718d mov eax, ebx */
  EAX = (EBX);
  /* 1006718f sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10067192 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10067195 mov ecx, dword ptr [ecx*4 + 0x10077c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10077c40)));
  /* 1006719c lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1006719f lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 100671a2 jmp 0x100671a9 */
  goto L_100671a9;
L_100671a4:;
  /* 100671a4 mov eax, 0x100706a0 */
  EAX = (0x100706a0u);
L_100671a9:;
  /* 100671a9 test byte ptr [eax + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 100671ad je 0x100671bc */
  if (C.zf) goto L_100671bc;
  /* 100671af push 2 */
  push32((uint32_t)(0x2u));
  /* 100671b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 100671b3 push ebx */
  push32((uint32_t)(EBX));
  /* 100671b4 call 0x10068b9d */
  push32(0x100671b9u); f_10068b9d();
  /* 100671b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100671bc:;
  /* 100671bc mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 100671bf mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 100671c2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 100671c4 jmp 0x100671da */
  goto L_100671da;
L_100671c6:;
  /* 100671c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 100671c8 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 100671cb pop edi */
  EDI = (pop32());
  /* 100671cc push edi */
  push32((uint32_t)(EDI));
  /* 100671cd push eax */
  push32((uint32_t)(EAX));
  /* 100671ce push ebx */
  push32((uint32_t)(EBX));
  /* 100671cf call 0x10068c75 */
  push32(0x100671d4u); f_10068c75();
  /* 100671d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100671d7 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_100671da:;
  /* 100671da cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100671dd pop edi */
  EDI = (pop32());
  /* 100671de je 0x100671e6 */
  if (C.zf) goto L_100671e6;
  /* 100671e0 or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 100671e4 jmp 0x100671f5 */
  goto L_100671f5;
L_100671e6:;
  /* 100671e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100671e9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 100671ee jmp 0x100671f8 */
  goto L_100671f8;
L_100671f0:;
  /* 100671f0 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 100671f2 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_100671f5:;
  /* 100671f5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_100671f8:;
  /* 100671f8 pop esi */
  ESI = (pop32());
  /* 100671f9 pop ebx */
  EBX = (pop32());
  /* 100671fa pop ebp */
  EBP = (pop32());
  /* 100671fb ret  */
  ESPCHK(0x100670e4u, _esp0);
  ESP += 4; return;
}

/* FUN_100071fc @ 0x100671fc (1825 bytes, 595 insns) [1 switch table(s)] */
void f_100671fc(void) {
  FTRACE(0x100671fcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100671fc push ebp */
  push32((uint32_t)(EBP));
  /* 100671fd mov ebp, esp */
  EBP = (ESP);
  /* 100671ff sub esp, 0x248 */
  { uint32_t _a=(ESP),_b=(0x248u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10067205 push ebx */
  push32((uint32_t)(EBX));
  /* 10067206 push esi */
  push32((uint32_t)(ESI));
  /* 10067207 push edi */
  push32((uint32_t)(EDI));
  /* 10067208 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1006720b xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1006720d mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1006720f inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10067210 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10067212 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10067215 mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 10067218 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 1006721b je 0x10067915 */
  if (C.zf) goto L_10067915;
  /* 10067221 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10067224 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10067226 jmp 0x10067230 */
  goto L_10067230;
L_10067228:;
  /* 10067228 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1006722b mov esi, dword ptr [ebp - 0x30] */
  ESI = (r32((uint32_t)(EBP + -0x30)));
  /* 1006722e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_10067230:;
  /* 10067230 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067233 jl 0x10067915 */
  if ((C.sf!=C.of)) goto L_10067915;
  /* 10067239 cmp bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006723c jl 0x10067251 */
  if ((C.sf!=C.of)) goto L_10067251;
  /* 1006723e cmp bl, 0x78 */
  { uint32_t _a=(BL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10067241 jg 0x10067251 */
  if ((!C.zf&&C.sf==C.of)) goto L_10067251;
  /* 10067243 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10067246 mov al, byte ptr [eax + 0x1006e0c8] */
  AL = (r8((uint32_t)(EAX + 0x1006e0c8)));
  /* 1006724c and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1006724f jmp 0x10067253 */
  goto L_10067253;
L_10067251:;
  /* 10067251 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10067253:;
  /* 10067253 movsx eax, byte ptr [esi + eax*8 + 0x1006e0e8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI + EAX*8 + 0x1006e0e8))));
  /* 1006725b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1006725e cmp eax, 7 */
  { uint32_t _a=(EAX),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067261 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10067264 ja 0x10067904 */
  if ((!C.cf&&!C.zf)) goto L_10067904;
  /* 1006726a jmp dword ptr [eax*4 + 0x1006791d] */
  switch (EAX) {
    case 0: goto L_1006739b;
    case 1: goto L_10067271;
    case 2: goto L_1006728c;
    case 3: goto L_100672d8;
    case 4: goto L_1006730f;
    case 5: goto L_10067317;
    case 6: goto L_1006734c;
    case 7: goto L_100673df;
    default: x86_unimpl("switch@0x1006726a out of table"); return;
  }
L_10067271:;
  /* 10067271 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 10067275 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10067278 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1006727b mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1006727e mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10067281 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10067284 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10067287 jmp 0x10067904 */
  goto L_10067904;
L_1006728c:;
  /* 1006728c movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1006728f sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10067292 je 0x100672cf */
  if (C.zf) goto L_100672cf;
  /* 10067294 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10067297 je 0x100672c6 */
  if (C.zf) goto L_100672c6;
  /* 10067299 sub eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006729c je 0x100672bd */
  if (C.zf) goto L_100672bd;
  /* 1006729e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1006729f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100672a0 je 0x100672b4 */
  if (C.zf) goto L_100672b4;
  /* 100672a2 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100672a5 jne 0x10067904 */
  if (!C.zf) goto L_10067904;
  /* 100672ab or dword ptr [ebp - 4], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x8u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100672af jmp 0x10067904 */
  goto L_10067904;
L_100672b4:;
  /* 100672b4 or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100672b8 jmp 0x10067904 */
  goto L_10067904;
L_100672bd:;
  /* 100672bd or dword ptr [ebp - 4], 1 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x1u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100672c1 jmp 0x10067904 */
  goto L_10067904;
L_100672c6:;
  /* 100672c6 or byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))|(0x80u); w8((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,8); }
  /* 100672ca jmp 0x10067904 */
  goto L_10067904;
L_100672cf:;
  /* 100672cf or dword ptr [ebp - 4], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x2u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100672d3 jmp 0x10067904 */
  goto L_10067904;
L_100672d8:;
  /* 100672d8 cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100672db jne 0x10067300 */
  if (!C.zf) goto L_10067300;
  /* 100672dd lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100672e0 push eax */
  push32((uint32_t)(EAX));
  /* 100672e1 call 0x100679db */
  push32(0x100672e6u); f_100679db();
  /* 100672e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100672e8 pop ecx */
  ECX = (pop32());
  /* 100672e9 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 100672ec jge 0x10067904 */
  if ((C.sf==C.of)) goto L_10067904;
  /* 100672f2 or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100672f6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_100672f8:;
  /* 100672f8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 100672fb jmp 0x10067904 */
  goto L_10067904;
L_10067300:;
  /* 10067300 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10067303 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10067306 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10067309 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 1006730d jmp 0x100672f8 */
  goto L_100672f8;
L_1006730f:;
  /* 1006730f mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10067312 jmp 0x10067904 */
  goto L_10067904;
L_10067317:;
  /* 10067317 cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006731a jne 0x1006733a */
  if (!C.zf) goto L_1006733a;
  /* 1006731c lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1006731f push eax */
  push32((uint32_t)(EAX));
  /* 10067320 call 0x100679db */
  push32(0x10067325u); f_100679db();
  /* 10067325 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10067327 pop ecx */
  ECX = (pop32());
  /* 10067328 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1006732b jge 0x10067904 */
  if ((C.sf==C.of)) goto L_10067904;
  /* 10067331 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 10067335 jmp 0x10067904 */
  goto L_10067904;
L_1006733a:;
  /* 1006733a lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 1006733d movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10067340 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 10067344 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10067347 jmp 0x10067904 */
  goto L_10067904;
L_1006734c:;
  /* 1006734c cmp bl, 0x49 */
  { uint32_t _a=(BL),_b=(0x49u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006734f je 0x1006737f */
  if (C.zf) goto L_1006737f;
  /* 10067351 cmp bl, 0x68 */
  { uint32_t _a=(BL),_b=(0x68u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10067354 je 0x10067376 */
  if (C.zf) goto L_10067376;
  /* 10067356 cmp bl, 0x6c */
  { uint32_t _a=(BL),_b=(0x6cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10067359 je 0x1006736d */
  if (C.zf) goto L_1006736d;
  /* 1006735b cmp bl, 0x77 */
  { uint32_t _a=(BL),_b=(0x77u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006735e jne 0x10067904 */
  if (!C.zf) goto L_10067904;
  /* 10067364 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10067368 jmp 0x10067904 */
  goto L_10067904;
L_1006736d:;
  /* 1006736d or dword ptr [ebp - 4], 0x10 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x10u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10067371 jmp 0x10067904 */
  goto L_10067904;
L_10067376:;
  /* 10067376 or dword ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x20u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1006737a jmp 0x10067904 */
  goto L_10067904;
L_1006737f:;
  /* 1006737f cmp byte ptr [edi], 0x36 */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10067382 jne 0x10067398 */
  if (!C.zf) goto L_10067398;
  /* 10067384 cmp byte ptr [edi + 1], 0x34 */
  { uint32_t _a=(r8((uint32_t)(EDI + 0x1))),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10067388 jne 0x10067398 */
  if (!C.zf) goto L_10067398;
  /* 1006738a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1006738b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1006738c or byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x80u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10067390 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 10067393 jmp 0x10067904 */
  goto L_10067904;
L_10067398:;
  /* 10067398 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_1006739b:;
  /* 1006739b mov ecx, dword ptr [0x100709e0] */
  ECX = (r32((uint32_t)(0x100709e0)));
  /* 100673a1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 100673a4 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100673a7 test byte ptr [ecx + eax*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 100673ac je 0x100673c7 */
  if (C.zf) goto L_100673c7;
  /* 100673ae lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100673b1 push eax */
  push32((uint32_t)(EAX));
  /* 100673b2 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100673b5 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100673b8 push eax */
  push32((uint32_t)(EAX));
  /* 100673b9 call 0x1006793d */
  push32(0x100673beu); f_1006793d();
  /* 100673be mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100673c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100673c3 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100673c4 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_100673c7:;
  /* 100673c7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100673ca push eax */
  push32((uint32_t)(EAX));
  /* 100673cb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100673ce movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100673d1 push eax */
  push32((uint32_t)(EAX));
  /* 100673d2 call 0x1006793d */
  push32(0x100673d7u); f_1006793d();
  /* 100673d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100673da jmp 0x10067904 */
  goto L_10067904;
L_100673df:;
  /* 100673df movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100673e2 cmp eax, 0x67 */
  { uint32_t _a=(EAX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100673e5 jg 0x10067607 */
  if ((!C.zf&&C.sf==C.of)) goto L_10067607;
  /* 100673eb cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100673ee jge 0x1006748a */
  if ((C.sf==C.of)) goto L_1006748a;
  /* 100673f4 cmp eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100673f7 jg 0x100674e8 */
  if ((!C.zf&&C.sf==C.of)) goto L_100674e8;
  /* 100673fd je 0x1006767b */
  if (C.zf) goto L_1006767b;
  /* 10067403 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10067406 je 0x100674ab */
  if (C.zf) goto L_100674ab;
  /* 1006740c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1006740d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1006740e je 0x10067480 */
  if (C.zf) goto L_10067480;
  /* 10067410 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10067411 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10067412 je 0x10067480 */
  if (C.zf) goto L_10067480;
  /* 10067414 sub eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10067417 jne 0x10067806 */
  if (!C.zf) goto L_10067806;
  /* 1006741d test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 10067423 jne 0x10067429 */
  if (!C.zf) goto L_10067429;
  /* 10067425 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_10067429:;
  /* 10067429 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 1006742c cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006742f jne 0x10067436 */
  if (!C.zf) goto L_10067436;
  /* 10067431 mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
L_10067436:;
  /* 10067436 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10067439 push eax */
  push32((uint32_t)(EAX));
  /* 1006743a call 0x100679db */
  push32(0x1006743fu); f_100679db();
  /* 1006743f test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 10067445 pop ecx */
  ECX = (pop32());
  /* 10067446 mov ecx, eax */
  ECX = (EAX);
  /* 10067448 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1006744b je 0x1006764f */
  if (C.zf) goto L_1006764f;
  /* 10067451 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10067453 jne 0x1006745e */
  if (!C.zf) goto L_1006745e;
  /* 10067455 mov ecx, dword ptr [0x10070680] */
  ECX = (r32((uint32_t)(0x10070680)));
  /* 1006745b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1006745e:;
  /* 1006745e mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10067465 mov eax, ecx */
  EAX = (ECX);
L_10067467:;
  /* 10067467 mov edx, esi */
  EDX = (ESI);
  /* 10067469 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1006746a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1006746c je 0x10067646 */
  if (C.zf) goto L_10067646;
  /* 10067472 cmp word ptr [eax], 0 */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10067476 je 0x10067646 */
  if (C.zf) goto L_10067646;
  /* 1006747c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1006747d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1006747e jmp 0x10067467 */
  goto L_10067467;
L_10067480:;
  /* 10067480 mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 10067487 add bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a+_b; BL = (_r); fl_add(_a,_b,_r,8); }
L_1006748a:;
  /* 1006748a or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1006748e lea edi, [ebp - 0x248] */
  EDI = ((uint32_t)(EBP + -0x248));
  /* 10067494 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067496 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 10067499 jge 0x1006756e */
  if ((C.sf==C.of)) goto L_1006756e;
  /* 1006749f mov dword ptr [ebp - 0x10], 6 */
  w32((uint32_t)(EBP + -0x10), (0x6u));
  /* 100674a6 jmp 0x1006757c */
  goto L_1006757c;
L_100674ab:;
  /* 100674ab test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 100674b1 jne 0x100674b7 */
  if (!C.zf) goto L_100674b7;
  /* 100674b3 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_100674b7:;
  /* 100674b7 test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 100674bd lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100674c0 push eax */
  push32((uint32_t)(EAX));
  /* 100674c1 je 0x100674fe */
  if (C.zf) goto L_100674fe;
  /* 100674c3 call 0x100679f8 */
  push32(0x100674c8u); f_100679f8();
  /* 100674c8 push eax */
  push32((uint32_t)(EAX));
  /* 100674c9 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 100674cf push eax */
  push32((uint32_t)(EAX));
  /* 100674d0 call 0x100690bb */
  push32(0x100674d5u); f_100690bb();
  /* 100674d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100674d8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 100674db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100674dd jge 0x10067511 */
  if ((C.sf==C.of)) goto L_10067511;
  /* 100674df mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 100674e6 jmp 0x10067511 */
  goto L_10067511;
L_100674e8:;
  /* 100674e8 sub eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100674eb je 0x1006751f */
  if (C.zf) goto L_1006751f;
  /* 100674ed sub eax, 9 */
  { uint32_t _a=(EAX),_b=(0x9u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100674f0 je 0x100674b7 */
  if (C.zf) goto L_100674b7;
  /* 100674f2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100674f3 je 0x100676e1 */
  if (C.zf) goto L_100676e1;
  /* 100674f9 jmp 0x10067806 */
  goto L_10067806;
L_100674fe:;
  /* 100674fe call 0x100679db */
  push32(0x10067503u); f_100679db();
  /* 10067503 pop ecx */
  ECX = (pop32());
  /* 10067504 mov byte ptr [ebp - 0x248], al */
  w8((uint32_t)(EBP + -0x248), (AL));
  /* 1006750a mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10067511:;
  /* 10067511 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 10067517 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1006751a jmp 0x10067806 */
  goto L_10067806;
L_1006751f:;
  /* 1006751f lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10067522 push eax */
  push32((uint32_t)(EAX));
  /* 10067523 call 0x100679db */
  push32(0x10067528u); f_100679db();
  /* 10067528 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006752a pop ecx */
  ECX = (pop32());
  /* 1006752b je 0x10067560 */
  if (C.zf) goto L_10067560;
  /* 1006752d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10067530 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10067532 je 0x10067560 */
  if (C.zf) goto L_10067560;
  /* 10067534 test byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x8u); fl_logic(_r,8); }
  /* 10067538 je 0x10067551 */
  if (C.zf) goto L_10067551;
  /* 1006753a movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 1006753d shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1006753f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10067542 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10067545 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1006754c jmp 0x10067806 */
  goto L_10067806;
L_10067551:;
  /* 10067551 and dword ptr [ebp - 0x24], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x24)))&(0x0u); w32((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,32); }
  /* 10067555 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10067558 movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 1006755b jmp 0x10067803 */
  goto L_10067803;
L_10067560:;
  /* 10067560 mov eax, dword ptr [0x1007067c] */
  EAX = (r32((uint32_t)(0x1007067c)));
  /* 10067565 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10067568 push eax */
  push32((uint32_t)(EAX));
  /* 10067569 jmp 0x100675fc */
  goto L_100675fc;
L_1006756e:;
  /* 1006756e jne 0x1006757c */
  if (!C.zf) goto L_1006757c;
  /* 10067570 cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10067573 jne 0x1006757c */
  if (!C.zf) goto L_1006757c;
  /* 10067575 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1006757c:;
  /* 1006757c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1006757f push dword ptr [ebp - 0x34] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x34))));
  /* 10067582 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10067585 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10067588 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 1006758b mov ecx, dword ptr [eax - 8] */
  ECX = (r32((uint32_t)(EAX + -0x8)));
  /* 1006758e mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
  /* 10067591 mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 10067594 mov dword ptr [ebp - 0x44], eax */
  w32((uint32_t)(EBP + -0x44), (EAX));
  /* 10067597 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1006759a push eax */
  push32((uint32_t)(EAX));
  /* 1006759b lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 100675a1 push eax */
  push32((uint32_t)(EAX));
  /* 100675a2 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 100675a5 push eax */
  push32((uint32_t)(EAX));
  /* 100675a6 call dword ptr [0x10070684] */
  call_ind((uint32_t)(r32((uint32_t)(0x10070684))), 0x100675acu);
  /* 100675ac mov esi, dword ptr [ebp - 4] */
  ESI = (r32((uint32_t)(EBP + -0x4)));
  /* 100675af add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100675b2 and esi, 0x80 */
  { uint32_t _r=(ESI)&(0x80u); ESI = (_r); fl_logic(_r,32); }
  /* 100675b8 je 0x100675ce */
  if (C.zf) goto L_100675ce;
  /* 100675ba cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100675be jne 0x100675ce */
  if (!C.zf) goto L_100675ce;
  /* 100675c0 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 100675c6 push eax */
  push32((uint32_t)(EAX));
  /* 100675c7 call dword ptr [0x10070690] */
  call_ind((uint32_t)(r32((uint32_t)(0x10070690))), 0x100675cdu);
  /* 100675cd pop ecx */
  ECX = (pop32());
L_100675ce:;
  /* 100675ce cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100675d1 jne 0x100675e5 */
  if (!C.zf) goto L_100675e5;
  /* 100675d3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100675d5 jne 0x100675e5 */
  if (!C.zf) goto L_100675e5;
  /* 100675d7 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 100675dd push eax */
  push32((uint32_t)(EAX));
  /* 100675de call dword ptr [0x10070688] */
  call_ind((uint32_t)(r32((uint32_t)(0x10070688))), 0x100675e4u);
  /* 100675e4 pop ecx */
  ECX = (pop32());
L_100675e5:;
  /* 100675e5 cmp byte ptr [ebp - 0x248], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x248))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100675ec jne 0x100675fb */
  if (!C.zf) goto L_100675fb;
  /* 100675ee or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 100675f2 lea edi, [ebp - 0x247] */
  EDI = ((uint32_t)(EBP + -0x247));
  /* 100675f8 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
L_100675fb:;
  /* 100675fb push edi */
  push32((uint32_t)(EDI));
L_100675fc:;
  /* 100675fc call 0x10069040 */
  push32(0x10067601u); f_10069040();
  /* 10067601 pop ecx */
  ECX = (pop32());
  /* 10067602 jmp 0x10067803 */
  goto L_10067803;
L_10067607:;
  /* 10067607 sub eax, 0x69 */
  { uint32_t _a=(EAX),_b=(0x69u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006760a je 0x100676e1 */
  if (C.zf) goto L_100676e1;
  /* 10067610 sub eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10067613 je 0x100676b7 */
  if (C.zf) goto L_100676b7;
  /* 10067619 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1006761a je 0x100676a4 */
  if (C.zf) goto L_100676a4;
  /* 10067620 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10067621 je 0x10067674 */
  if (C.zf) goto L_10067674;
  /* 10067623 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10067626 je 0x10067429 */
  if (C.zf) goto L_10067429;
  /* 1006762c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1006762d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1006762e je 0x100676e5 */
  if (C.zf) goto L_100676e5;
  /* 10067634 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10067637 jne 0x10067806 */
  if (!C.zf) goto L_10067806;
  /* 1006763d mov dword ptr [ebp - 0x2c], 0x27 */
  w32((uint32_t)(EBP + -0x2c), (0x27u));
  /* 10067644 jmp 0x10067682 */
  goto L_10067682;
L_10067646:;
  /* 10067646 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10067648 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1006764a jmp 0x10067803 */
  goto L_10067803;
L_1006764f:;
  /* 1006764f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10067651 jne 0x1006765c */
  if (!C.zf) goto L_1006765c;
  /* 10067653 mov ecx, dword ptr [0x1007067c] */
  ECX = (r32((uint32_t)(0x1007067c)));
  /* 10067659 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1006765c:;
  /* 1006765c mov eax, ecx */
  EAX = (ECX);
L_1006765e:;
  /* 1006765e mov edx, esi */
  EDX = (ESI);
  /* 10067660 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10067661 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10067663 je 0x1006766d */
  if (C.zf) goto L_1006766d;
  /* 10067665 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10067668 je 0x1006766d */
  if (C.zf) goto L_1006766d;
  /* 1006766a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1006766b jmp 0x1006765e */
  goto L_1006765e;
L_1006766d:;
  /* 1006766d sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006766f jmp 0x10067803 */
  goto L_10067803;
L_10067674:;
  /* 10067674 mov dword ptr [ebp - 0x10], 8 */
  w32((uint32_t)(EBP + -0x10), (0x8u));
L_1006767b:;
  /* 1006767b mov dword ptr [ebp - 0x2c], 7 */
  w32((uint32_t)(EBP + -0x2c), (0x7u));
L_10067682:;
  /* 10067682 test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 10067686 mov dword ptr [ebp - 0xc], 0x10 */
  w32((uint32_t)(EBP + -0xc), (0x10u));
  /* 1006768d je 0x100676ec */
  if (C.zf) goto L_100676ec;
  /* 1006768f mov al, byte ptr [ebp - 0x2c] */
  AL = (r8((uint32_t)(EBP + -0x2c)));
  /* 10067692 mov byte ptr [ebp - 0x16], 0x30 */
  w8((uint32_t)(EBP + -0x16), (0x30u));
  /* 10067696 add al, 0x51 */
  { uint32_t _a=(AL),_b=(0x51u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10067698 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 1006769f mov byte ptr [ebp - 0x15], al */
  w8((uint32_t)(EBP + -0x15), (AL));
  /* 100676a2 jmp 0x100676ec */
  goto L_100676ec;
L_100676a4:;
  /* 100676a4 test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 100676a8 mov dword ptr [ebp - 0xc], 8 */
  w32((uint32_t)(EBP + -0xc), (0x8u));
  /* 100676af je 0x100676ec */
  if (C.zf) goto L_100676ec;
  /* 100676b1 or byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x2u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 100676b5 jmp 0x100676ec */
  goto L_100676ec;
L_100676b7:;
  /* 100676b7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100676ba push eax */
  push32((uint32_t)(EAX));
  /* 100676bb call 0x100679db */
  push32(0x100676c0u); f_100679db();
  /* 100676c0 test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 100676c4 pop ecx */
  ECX = (pop32());
  /* 100676c5 je 0x100676d0 */
  if (C.zf) goto L_100676d0;
  /* 100676c7 mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 100676cb mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 100676ce jmp 0x100676d5 */
  goto L_100676d5;
L_100676d0:;
  /* 100676d0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 100676d3 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_100676d5:;
  /* 100676d5 mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 100676dc jmp 0x10067904 */
  goto L_10067904;
L_100676e1:;
  /* 100676e1 or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_100676e5:;
  /* 100676e5 mov dword ptr [ebp - 0xc], 0xa */
  w32((uint32_t)(EBP + -0xc), (0xau));
L_100676ec:;
  /* 100676ec test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 100676f0 je 0x100676fe */
  if (C.zf) goto L_100676fe;
  /* 100676f2 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100676f5 push eax */
  push32((uint32_t)(EAX));
  /* 100676f6 call 0x100679e8 */
  push32(0x100676fbu); f_100679e8();
  /* 100676fb pop ecx */
  ECX = (pop32());
  /* 100676fc jmp 0x1006773f */
  goto L_1006773f;
L_100676fe:;
  /* 100676fe test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 10067702 je 0x10067725 */
  if (C.zf) goto L_10067725;
  /* 10067704 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10067708 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1006770b push eax */
  push32((uint32_t)(EAX));
  /* 1006770c je 0x1006771a */
  if (C.zf) goto L_1006771a;
  /* 1006770e call 0x100679db */
  push32(0x10067713u); f_100679db();
  /* 10067713 pop ecx */
  ECX = (pop32());
  /* 10067714 movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
L_10067717:;
  /* 10067717 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10067718 jmp 0x1006773f */
  goto L_1006773f;
L_1006771a:;
  /* 1006771a call 0x100679db */
  push32(0x1006771fu); f_100679db();
  /* 1006771f pop ecx */
  ECX = (pop32());
  /* 10067720 movzx eax, ax */
  EAX = ((uint32_t)(AX));
  /* 10067723 jmp 0x10067717 */
  goto L_10067717;
L_10067725:;
  /* 10067725 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10067729 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1006772c push eax */
  push32((uint32_t)(EAX));
  /* 1006772d je 0x10067737 */
  if (C.zf) goto L_10067737;
  /* 1006772f call 0x100679db */
  push32(0x10067734u); f_100679db();
  /* 10067734 pop ecx */
  ECX = (pop32());
  /* 10067735 jmp 0x10067717 */
  goto L_10067717;
L_10067737:;
  /* 10067737 call 0x100679db */
  push32(0x1006773cu); f_100679db();
  /* 1006773c pop ecx */
  ECX = (pop32());
  /* 1006773d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_1006773f:;
  /* 1006773f test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10067743 je 0x10067760 */
  if (C.zf) goto L_10067760;
  /* 10067745 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10067747 jg 0x10067760 */
  if ((!C.zf&&C.sf==C.of)) goto L_10067760;
  /* 10067749 jl 0x1006774f */
  if ((C.sf!=C.of)) goto L_1006774f;
  /* 1006774b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006774d jae 0x10067760 */
  if (!C.cf) goto L_10067760;
L_1006774f:;
  /* 1006774f neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10067751 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10067754 mov esi, eax */
  ESI = (EAX);
  /* 10067756 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10067758 or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 1006775c mov edi, edx */
  EDI = (EDX);
  /* 1006775e jmp 0x10067764 */
  goto L_10067764;
L_10067760:;
  /* 10067760 mov esi, eax */
  ESI = (EAX);
  /* 10067762 mov edi, edx */
  EDI = (EDX);
L_10067764:;
  /* 10067764 test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 10067768 jne 0x1006776d */
  if (!C.zf) goto L_1006776d;
  /* 1006776a and edi, 0 */
  { uint32_t _r=(EDI)&(0x0u); EDI = (_r); fl_logic(_r,32); }
L_1006776d:;
  /* 1006776d cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067771 jge 0x1006777c */
  if ((C.sf==C.of)) goto L_1006777c;
  /* 10067773 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1006777a jmp 0x10067780 */
  goto L_10067780;
L_1006777c:;
  /* 1006777c and dword ptr [ebp - 4], 0xfffffff7 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0xfffffff7u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_10067780:;
  /* 10067780 mov eax, esi */
  EAX = (ESI);
  /* 10067782 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 10067784 jne 0x1006778a */
  if (!C.zf) goto L_1006778a;
  /* 10067786 and dword ptr [ebp - 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))&(0x0u); w32((uint32_t)(EBP + -0x1c), (_r)); fl_logic(_r,32); }
L_1006778a:;
  /* 1006778a lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 1006778d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10067790:;
  /* 10067790 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10067793 dec dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))-1; w32((uint32_t)(EBP + -0x10), (_r)); fl_dec(_r,32); }
  /* 10067796 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10067798 jg 0x100677a0 */
  if ((!C.zf&&C.sf==C.of)) goto L_100677a0;
  /* 1006779a mov eax, esi */
  EAX = (ESI);
  /* 1006779c or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 1006779e je 0x100677db */
  if (C.zf) goto L_100677db;
L_100677a0:;
  /* 100677a0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100677a3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100677a4 push edx */
  push32((uint32_t)(EDX));
  /* 100677a5 push eax */
  push32((uint32_t)(EAX));
  /* 100677a6 push edi */
  push32((uint32_t)(EDI));
  /* 100677a7 push esi */
  push32((uint32_t)(ESI));
  /* 100677a8 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 100677ab mov dword ptr [ebp - 0x3c], edx */
  w32((uint32_t)(EBP + -0x3c), (EDX));
  /* 100677ae call 0x100691f0 */
  push32(0x100677b3u); f_100691f0();
  /* 100677b3 push dword ptr [ebp - 0x3c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x3c))));
  /* 100677b6 mov ebx, eax */
  EBX = (EAX);
  /* 100677b8 add ebx, 0x30 */
  { uint32_t _a=(EBX),_b=(0x30u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 100677bb push dword ptr [ebp - 0x40] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x40))));
  /* 100677be push edi */
  push32((uint32_t)(EDI));
  /* 100677bf push esi */
  push32((uint32_t)(ESI));
  /* 100677c0 call 0x10069180 */
  push32(0x100677c5u); f_10069180();
  /* 100677c5 cmp ebx, 0x39 */
  { uint32_t _a=(EBX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100677c8 mov esi, eax */
  ESI = (EAX);
  /* 100677ca mov edi, edx */
  EDI = (EDX);
  /* 100677cc jle 0x100677d1 */
  if ((C.zf||C.sf!=C.of)) goto L_100677d1;
  /* 100677ce add ebx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
L_100677d1:;
  /* 100677d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 100677d4 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 100677d7 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 100677d9 jmp 0x10067790 */
  goto L_10067790;
L_100677db:;
  /* 100677db lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 100677de sub eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100677e1 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 100677e4 test byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x2u); fl_logic(_r,8); }
  /* 100677e8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 100677eb je 0x10067806 */
  if (C.zf) goto L_10067806;
  /* 100677ed mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 100677f0 cmp byte ptr [ecx], 0x30 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100677f3 jne 0x100677f9 */
  if (!C.zf) goto L_100677f9;
  /* 100677f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100677f7 jne 0x10067806 */
  if (!C.zf) goto L_10067806;
L_100677f9:;
  /* 100677f9 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 100677fc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100677fd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10067800 mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_10067803:;
  /* 10067803 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10067806:;
  /* 10067806 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006780a jne 0x10067904 */
  if (!C.zf) goto L_10067904;
  /* 10067810 mov ebx, dword ptr [ebp - 4] */
  EBX = (r32((uint32_t)(EBP + -0x4)));
  /* 10067813 test bl, 0x40 */
  { uint32_t _r=(BL)&(0x40u); fl_logic(_r,8); }
  /* 10067816 je 0x1006783e */
  if (C.zf) goto L_1006783e;
  /* 10067818 test bh, 1 */
  { uint32_t _r=(C.b.b.h)&(0x1u); fl_logic(_r,8); }
  /* 1006781b je 0x10067823 */
  if (C.zf) goto L_10067823;
  /* 1006781d mov byte ptr [ebp - 0x16], 0x2d */
  w8((uint32_t)(EBP + -0x16), (0x2du));
  /* 10067821 jmp 0x10067837 */
  goto L_10067837;
L_10067823:;
  /* 10067823 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 10067826 je 0x1006782e */
  if (C.zf) goto L_1006782e;
  /* 10067828 mov byte ptr [ebp - 0x16], 0x2b */
  w8((uint32_t)(EBP + -0x16), (0x2bu));
  /* 1006782c jmp 0x10067837 */
  goto L_10067837;
L_1006782e:;
  /* 1006782e test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 10067831 je 0x1006783e */
  if (C.zf) goto L_1006783e;
  /* 10067833 mov byte ptr [ebp - 0x16], 0x20 */
  w8((uint32_t)(EBP + -0x16), (0x20u));
L_10067837:;
  /* 10067837 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
L_1006783e:;
  /* 1006783e mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
  /* 10067841 sub esi, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10067844 sub esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10067847 test bl, 0xc */
  { uint32_t _r=(BL)&(0xcu); fl_logic(_r,8); }
  /* 1006784a jne 0x1006785e */
  if (!C.zf) goto L_1006785e;
  /* 1006784c lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1006784f push eax */
  push32((uint32_t)(EAX));
  /* 10067850 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10067853 push esi */
  push32((uint32_t)(ESI));
  /* 10067854 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10067856 call 0x10067972 */
  push32(0x1006785bu); f_10067972();
  /* 1006785b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1006785e:;
  /* 1006785e lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10067861 push eax */
  push32((uint32_t)(EAX));
  /* 10067862 lea eax, [ebp - 0x16] */
  EAX = ((uint32_t)(EBP + -0x16));
  /* 10067865 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10067868 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 1006786b push eax */
  push32((uint32_t)(EAX));
  /* 1006786c call 0x100679a3 */
  push32(0x10067871u); f_100679a3();
  /* 10067871 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10067874 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 10067877 je 0x10067890 */
  if (C.zf) goto L_10067890;
  /* 10067879 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 1006787c jne 0x10067890 */
  if (!C.zf) goto L_10067890;
  /* 1006787e lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10067881 push eax */
  push32((uint32_t)(EAX));
  /* 10067882 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10067885 push esi */
  push32((uint32_t)(ESI));
  /* 10067886 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10067888 call 0x10067972 */
  push32(0x1006788du); f_10067972();
  /* 1006788d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10067890:;
  /* 10067890 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067894 je 0x100678d7 */
  if (C.zf) goto L_100678d7;
  /* 10067896 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006789a jle 0x100678d7 */
  if ((C.zf||C.sf!=C.of)) goto L_100678d7;
  /* 1006789c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1006789f mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 100678a2 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
L_100678a5:;
  /* 100678a5 mov ax, word ptr [ebx] */
  AX = (r16((uint32_t)(EBX)));
  /* 100678a8 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100678a9 push eax */
  push32((uint32_t)(EAX));
  /* 100678aa lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 100678ad push eax */
  push32((uint32_t)(EAX));
  /* 100678ae inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100678af call 0x100690bb */
  push32(0x100678b4u); f_100690bb();
  /* 100678b4 pop ecx */
  ECX = (pop32());
  /* 100678b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100678b7 pop ecx */
  ECX = (pop32());
  /* 100678b8 jle 0x100678ec */
  if ((C.zf||C.sf!=C.of)) goto L_100678ec;
  /* 100678ba lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 100678bd push ecx */
  push32((uint32_t)(ECX));
  /* 100678be push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100678c1 push eax */
  push32((uint32_t)(EAX));
  /* 100678c2 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 100678c5 push eax */
  push32((uint32_t)(EAX));
  /* 100678c6 call 0x100679a3 */
  push32(0x100678cbu); f_100679a3();
  /* 100678cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100678ce mov eax, edi */
  EAX = (EDI);
  /* 100678d0 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100678d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100678d3 jne 0x100678a5 */
  if (!C.zf) goto L_100678a5;
  /* 100678d5 jmp 0x100678ec */
  goto L_100678ec;
L_100678d7:;
  /* 100678d7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100678da push eax */
  push32((uint32_t)(EAX));
  /* 100678db push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100678de push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 100678e1 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 100678e4 call 0x100679a3 */
  push32(0x100678e9u); f_100679a3();
  /* 100678e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100678ec:;
  /* 100678ec test byte ptr [ebp - 4], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x4u); fl_logic(_r,8); }
  /* 100678f0 je 0x10067904 */
  if (C.zf) goto L_10067904;
  /* 100678f2 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100678f5 push eax */
  push32((uint32_t)(EAX));
  /* 100678f6 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100678f9 push esi */
  push32((uint32_t)(ESI));
  /* 100678fa push 0x20 */
  push32((uint32_t)(0x20u));
  /* 100678fc call 0x10067972 */
  push32(0x10067901u); f_10067972();
  /* 10067901 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10067904:;
  /* 10067904 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10067907 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10067909 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1006790a test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 1006790c mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 1006790f jne 0x10067228 */
  if (!C.zf) goto L_10067228;
L_10067915:;
  /* 10067915 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10067918 pop edi */
  EDI = (pop32());
  /* 10067919 pop esi */
  ESI = (pop32());
  /* 1006791a pop ebx */
  EBX = (pop32());
  /* 1006791b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1006791c ret  */
  ESPCHK(0x100671fcu, _esp0);
  ESP += 4; return;
}

/* FUN_1000793d @ 0x1006793d (53 bytes, 25 insns) */
void f_1006793d(void) {
  FTRACE(0x1006793du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006793d push ebp */
  push32((uint32_t)(EBP));
  /* 1006793e mov ebp, esp */
  EBP = (ESP);
  /* 10067940 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10067943 dec dword ptr [ecx + 4] */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))-1; w32((uint32_t)(ECX + 0x4), (_r)); fl_dec(_r,32); }
  /* 10067946 js 0x10067956 */
  if (C.sf) goto L_10067956;
  /* 10067948 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1006794a mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1006794d mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1006794f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10067951 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 10067954 jmp 0x10067961 */
  goto L_10067961;
L_10067956:;
  /* 10067956 push ecx */
  push32((uint32_t)(ECX));
  /* 10067957 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1006795a call 0x100670e4 */
  push32(0x1006795fu); f_100670e4();
  /* 1006795f pop ecx */
  ECX = (pop32());
  /* 10067960 pop ecx */
  ECX = (pop32());
L_10067961:;
  /* 10067961 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067964 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10067967 jne 0x1006796e */
  if (!C.zf) goto L_1006796e;
  /* 10067969 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1006796c pop ebp */
  EBP = (pop32());
  /* 1006796d ret  */
  ESPCHK(0x1006793du, _esp0);
  ESP += 4; return;
L_1006796e:;
  /* 1006796e inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 10067970 pop ebp */
  EBP = (pop32());
  /* 10067971 ret  */
  ESPCHK(0x1006793du, _esp0);
  ESP += 4; return;
}

/* FUN_10007972 @ 0x10067972 (49 bytes, 22 insns) */
void f_10067972(void) {
  FTRACE(0x10067972u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10067972 push esi */
  push32((uint32_t)(ESI));
  /* 10067973 push edi */
  push32((uint32_t)(EDI));
  /* 10067974 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10067978 mov eax, edi */
  EAX = (EDI);
  /* 1006797a dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1006797b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006797d jle 0x100679a0 */
  if ((C.zf||C.sf!=C.of)) goto L_100679a0;
  /* 1006797f mov esi, dword ptr [esp + 0x18] */
  ESI = (r32((uint32_t)(ESP + 0x18)));
L_10067983:;
  /* 10067983 push esi */
  push32((uint32_t)(ESI));
  /* 10067984 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10067988 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 1006798c call 0x1006793d */
  push32(0x10067991u); f_1006793d();
  /* 10067991 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10067994 cmp dword ptr [esi], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067997 je 0x100679a0 */
  if (C.zf) goto L_100679a0;
  /* 10067999 mov eax, edi */
  EAX = (EDI);
  /* 1006799b dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1006799c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006799e jg 0x10067983 */
  if ((!C.zf&&C.sf==C.of)) goto L_10067983;
L_100679a0:;
  /* 100679a0 pop edi */
  EDI = (pop32());
  /* 100679a1 pop esi */
  ESI = (pop32());
  /* 100679a2 ret  */
  ESPCHK(0x10067972u, _esp0);
  ESP += 4; return;
}

/* FUN_100079a3 @ 0x100679a3 (56 bytes, 27 insns) */
void f_100679a3(void) {
  FTRACE(0x100679a3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100679a3 push ebx */
  push32((uint32_t)(EBX));
  /* 100679a4 mov ebx, dword ptr [esp + 0xc] */
  EBX = (r32((uint32_t)(ESP + 0xc)));
  /* 100679a8 mov eax, ebx */
  EAX = (EBX);
  /* 100679aa dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100679ab push esi */
  push32((uint32_t)(ESI));
  /* 100679ac push edi */
  push32((uint32_t)(EDI));
  /* 100679ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100679af jle 0x100679d7 */
  if ((C.zf||C.sf!=C.of)) goto L_100679d7;
  /* 100679b1 mov edi, dword ptr [esp + 0x1c] */
  EDI = (r32((uint32_t)(ESP + 0x1c)));
  /* 100679b5 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
L_100679b9:;
  /* 100679b9 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 100679bc push edi */
  push32((uint32_t)(EDI));
  /* 100679bd inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100679be push dword ptr [esp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x1c))));
  /* 100679c2 push eax */
  push32((uint32_t)(EAX));
  /* 100679c3 call 0x1006793d */
  push32(0x100679c8u); f_1006793d();
  /* 100679c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100679cb cmp dword ptr [edi], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100679ce je 0x100679d7 */
  if (C.zf) goto L_100679d7;
  /* 100679d0 mov eax, ebx */
  EAX = (EBX);
  /* 100679d2 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100679d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100679d5 jg 0x100679b9 */
  if ((!C.zf&&C.sf==C.of)) goto L_100679b9;
L_100679d7:;
  /* 100679d7 pop edi */
  EDI = (pop32());
  /* 100679d8 pop esi */
  ESI = (pop32());
  /* 100679d9 pop ebx */
  EBX = (pop32());
  /* 100679da ret  */
  ESPCHK(0x100679a3u, _esp0);
  ESP += 4; return;
}

/* FUN_100079db @ 0x100679db (13 bytes, 5 insns) */
void f_100679db(void) {
  FTRACE(0x100679dbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100679db mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100679df add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 100679e2 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 100679e4 mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 100679e7 ret  */
  ESPCHK(0x100679dbu, _esp0);
  ESP += 4; return;
}

/* FUN_100079e8 @ 0x100679e8 (16 bytes, 6 insns) */
void f_100679e8(void) {
  FTRACE(0x100679e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100679e8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100679ec add dword ptr [eax], 8 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x8u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 100679ef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 100679f1 mov eax, dword ptr [ecx - 8] */
  EAX = (r32((uint32_t)(ECX + -0x8)));
  /* 100679f4 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 100679f7 ret  */
  ESPCHK(0x100679e8u, _esp0);
  ESP += 4; return;
}

/* FUN_100079f8 @ 0x100679f8 (14 bytes, 5 insns) */
void f_100679f8(void) {
  FTRACE(0x100679f8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100679f8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100679fc add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 100679ff mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 10067a01 mov ax, word ptr [eax - 4] */
  AX = (r16((uint32_t)(EAX + -0x4)));
  /* 10067a05 ret  */
  ESPCHK(0x100679f8u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a06 @ 0x10067a06 (18 bytes, 6 insns) */
void f_10067a06(void) {
  FTRACE(0x10067a06u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10067a06 push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 10067a0b push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 10067a10 call 0x1006929a */
  push32(0x10067a15u); f_1006929a();
  /* 10067a15 pop ecx */
  ECX = (pop32());
  /* 10067a16 pop ecx */
  ECX = (pop32());
  /* 10067a17 ret  */
  ESPCHK(0x10067a06u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a18 @ 0x10067a18 (62 bytes, 24 insns) */
void f_10067a18(void) {
  FTRACE(0x10067a18u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10067a18 push ebp */
  push32((uint32_t)(EBP));
  /* 10067a19 mov ebp, esp */
  EBP = (ESP);
  /* 10067a1b sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10067a1e fld qword ptr [0x1006e170] */
  fpu_push(rf64((uint32_t)(0x1006e170)));
  /* 10067a24 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 10067a27 fld qword ptr [0x1006e168] */
  fpu_push(rf64((uint32_t)(0x1006e168)));
  /* 10067a2d fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 10067a30 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 10067a33 fdiv qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x8)));
  /* 10067a36 fmul qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x8)));
  /* 10067a39 fsubr qword ptr [ebp - 0x10] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x10))) - FPU_ST(0);
  /* 10067a3c fstp qword ptr [ebp - 0x18] */
  wf64((uint32_t)(EBP + -0x18), FPU_ST(0));
  (void)fpu_pop();
  /* 10067a3f fld qword ptr [ebp - 0x18] */
  fpu_push(rf64((uint32_t)(EBP + -0x18)));
  /* 10067a42 fcomp qword ptr [0x1006e160] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x1006e160)));
  (void)fpu_pop();
  /* 10067a48 fnstsw ax */
  AX = fpu_status();
  /* 10067a4a sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10067a4b jbe 0x10067a52 */
  if ((C.cf||C.zf)) goto L_10067a52;
  /* 10067a4d push 1 */
  push32((uint32_t)(0x1u));
  /* 10067a4f pop eax */
  EAX = (pop32());
  /* 10067a50 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10067a51 ret  */
  ESPCHK(0x10067a18u, _esp0);
  ESP += 4; return;
L_10067a52:;
  /* 10067a52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10067a54 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10067a55 ret  */
  ESPCHK(0x10067a18u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a56 @ 0x10067a56 (41 bytes, 13 insns) */
void f_10067a56(void) {
  FTRACE(0x10067a56u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10067a56 push 0x1006e194 */
  push32((uint32_t)(0x1006e194u));
  /* 10067a5b call dword ptr [0x1006e004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e004))), 0x10067a61u);
  /* 10067a61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10067a63 je 0x10067a7a */
  if (C.zf) goto L_10067a7a;
  /* 10067a65 push 0x1006e178 */
  push32((uint32_t)(0x1006e178u));
  /* 10067a6a push eax */
  push32((uint32_t)(EAX));
  /* 10067a6b call dword ptr [0x1006e088] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e088))), 0x10067a71u);
  /* 10067a71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10067a73 je 0x10067a7a */
  if (C.zf) goto L_10067a7a;
  /* 10067a75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10067a77 call eax */
  call_ind((uint32_t)(EAX), 0x10067a79u);
  /* 10067a79 ret  */
  ESPCHK(0x10067a56u, _esp0);
  ESP += 4; return;
L_10067a7a:;
  /* 10067a7a jmp 0x10067a18 */
  f_10067a18(); return;
}

/* FUN_10007a7f @ 0x10067a7f (90 bytes, 37 insns) */
void f_10067a7f(void) {
  FTRACE(0x10067a7fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10067a7f push esi */
  push32((uint32_t)(ESI));
  /* 10067a80 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10067a84 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10067a87 push eax */
  push32((uint32_t)(EAX));
  /* 10067a88 call 0x10069440 */
  push32(0x10067a8du); f_10069440();
  /* 10067a8d cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067a90 pop ecx */
  ECX = (pop32());
  /* 10067a91 je 0x10067abf */
  if (C.zf) goto L_10067abf;
L_10067a93:;
  /* 10067a93 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10067a94 cmp dword ptr [0x10070bf0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10070bf0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067a9b jle 0x10067aac */
  if ((C.zf||C.sf!=C.of)) goto L_10067aac;
  /* 10067a9d movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10067aa0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10067aa2 push eax */
  push32((uint32_t)(EAX));
  /* 10067aa3 call 0x100693cb */
  push32(0x10067aa8u); f_100693cb();
  /* 10067aa8 pop ecx */
  ECX = (pop32());
  /* 10067aa9 pop ecx */
  ECX = (pop32());
  /* 10067aaa jmp 0x10067abb */
  goto L_10067abb;
L_10067aac:;
  /* 10067aac movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10067aaf mov ecx, dword ptr [0x100709e0] */
  ECX = (r32((uint32_t)(0x100709e0)));
  /* 10067ab5 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 10067ab8 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_10067abb:;
  /* 10067abb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10067abd jne 0x10067a93 */
  if (!C.zf) goto L_10067a93;
L_10067abf:;
  /* 10067abf mov cl, byte ptr [0x10070bf4] */
  CL = (r8((uint32_t)(0x10070bf4)));
  /* 10067ac5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10067ac7 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 10067ac9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10067aca:;
  /* 10067aca mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 10067acc mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
  /* 10067ace mov al, cl */
  AL = (CL);
  /* 10067ad0 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 10067ad2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10067ad3 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10067ad5 jne 0x10067aca */
  if (!C.zf) goto L_10067aca;
  /* 10067ad7 pop esi */
  ESI = (pop32());
  /* 10067ad8 ret  */
  ESPCHK(0x10067a7fu, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x10067b3f (62 bytes, 29 insns) */
void f_10067b3f(void) {
  FTRACE(0x10067b3fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10067b3f push ebp */
  push32((uint32_t)(EBP));
  /* 10067b40 mov ebp, esp */
  EBP = (ESP);
  /* 10067b42 push ecx */
  push32((uint32_t)(ECX));
  /* 10067b43 push ecx */
  push32((uint32_t)(ECX));
  /* 10067b44 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067b48 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10067b4b je 0x10067b68 */
  if (C.zf) goto L_10067b68;
  /* 10067b4d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10067b50 push eax */
  push32((uint32_t)(EAX));
  /* 10067b51 call 0x1006990c */
  push32(0x10067b56u); f_1006990c();
  /* 10067b56 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10067b59 pop ecx */
  ECX = (pop32());
  /* 10067b5a pop ecx */
  ECX = (pop32());
  /* 10067b5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10067b5e mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10067b60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10067b63 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10067b66 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10067b67 ret  */
  ESPCHK(0x10067b3fu, _esp0);
  ESP += 4; return;
L_10067b68:;
  /* 10067b68 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10067b6b push eax */
  push32((uint32_t)(EAX));
  /* 10067b6c call 0x10069939 */
  push32(0x10067b71u); f_10069939();
  /* 10067b71 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10067b74 pop ecx */
  ECX = (pop32());
  /* 10067b75 pop ecx */
  ECX = (pop32());
  /* 10067b76 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10067b79 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10067b7b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10067b7c ret  */
  ESPCHK(0x10067b3fu, _esp0);
  ESP += 4; return;
}

/* FUN_10007b7d @ 0x10067b7d (97 bytes, 42 insns) */
void f_10067b7d(void) {
  FTRACE(0x10067b7du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10067b7d push ebp */
  push32((uint32_t)(EBP));
  /* 10067b7e mov ebp, esp */
  EBP = (ESP);
  /* 10067b80 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10067b83 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10067b86 push esi */
  push32((uint32_t)(ESI));
  /* 10067b87 push eax */
  push32((uint32_t)(EAX));
  /* 10067b88 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10067b8b push eax */
  push32((uint32_t)(EAX));
  /* 10067b8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10067b8f push ecx */
  push32((uint32_t)(ECX));
  /* 10067b90 push ecx */
  push32((uint32_t)(ECX));
  /* 10067b91 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10067b93 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10067b96 call 0x100699dd */
  push32(0x10067b9bu); f_100699dd();
  /* 10067b9b mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10067b9e lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10067ba1 push eax */
  push32((uint32_t)(EAX));
  /* 10067ba2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10067ba5 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 10067ba8 push eax */
  push32((uint32_t)(EAX));
  /* 10067ba9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10067bab cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067baf sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10067bb2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10067bb4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10067bb6 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 10067bb9 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10067bbb add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10067bbd push ecx */
  push32((uint32_t)(ECX));
  /* 10067bbe call 0x10069966 */
  push32(0x10067bc3u); f_10069966();
  /* 10067bc3 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10067bc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10067bc8 push eax */
  push32((uint32_t)(EAX));
  /* 10067bc9 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10067bcc push esi */
  push32((uint32_t)(ESI));
  /* 10067bcd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10067bd0 call 0x10067bde */
  push32(0x10067bd5u); f_10067bde();
  /* 10067bd5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10067bd8 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10067bdb pop esi */
  ESI = (pop32());
  /* 10067bdc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10067bdd ret  */
  ESPCHK(0x10067b7du, _esp0);
  ESP += 4; return;
}

/* FUN_10007bde @ 0x10067bde (194 bytes, 91 insns) */
void f_10067bde(void) {
  FTRACE(0x10067bdeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10067bde push ebp */
  push32((uint32_t)(EBP));
  /* 10067bdf mov ebp, esp */
  EBP = (ESP);
  /* 10067be1 push ebx */
  push32((uint32_t)(EBX));
  /* 10067be2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10067be4 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10067be7 push esi */
  push32((uint32_t)(ESI));
  /* 10067be8 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 10067beb push edi */
  push32((uint32_t)(EDI));
  /* 10067bec mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10067bef je 0x10067c0c */
  if (C.zf) goto L_10067c0c;
  /* 10067bf1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10067bf3 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067bf6 setg al */
  AL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 10067bf9 push eax */
  push32((uint32_t)(EAX));
  /* 10067bfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10067bfc cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067bff sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10067c02 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10067c04 push eax */
  push32((uint32_t)(EAX));
  /* 10067c05 call 0x10067e80 */
  push32(0x10067c0au); f_10067e80();
  /* 10067c0a pop ecx */
  ECX = (pop32());
  /* 10067c0b pop ecx */
  ECX = (pop32());
L_10067c0c:;
  /* 10067c0c cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067c0f mov eax, edi */
  EAX = (EDI);
  /* 10067c11 jne 0x10067c19 */
  if (!C.zf) goto L_10067c19;
  /* 10067c13 mov byte ptr [edi], 0x2d */
  w8((uint32_t)(EDI), (0x2du));
  /* 10067c16 lea eax, [edi + 1] */
  EAX = ((uint32_t)(EDI + 0x1));
L_10067c19:;
  /* 10067c19 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067c1c jle 0x10067c30 */
  if ((C.zf||C.sf!=C.of)) goto L_10067c30;
  /* 10067c1e mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 10067c21 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 10067c24 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10067c26 mov eax, ecx */
  EAX = (ECX);
  /* 10067c28 mov cl, byte ptr [0x10070bf4] */
  CL = (r8((uint32_t)(0x10070bf4)));
  /* 10067c2e mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
L_10067c30:;
  /* 10067c30 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10067c32 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10067c35 push 0x1006e1a8 */
  push32((uint32_t)(0x1006e1a8u));
  /* 10067c3a sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10067c3d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10067c3f add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10067c42 push ecx */
  push32((uint32_t)(ECX));
  /* 10067c43 call 0x10069af0 */
  push32(0x10067c48u); f_10069af0();
  /* 10067c48 cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067c4b pop ecx */
  ECX = (pop32());
  /* 10067c4c pop ecx */
  ECX = (pop32());
  /* 10067c4d mov ecx, eax */
  ECX = (EAX);
  /* 10067c4f je 0x10067c54 */
  if (C.zf) goto L_10067c54;
  /* 10067c51 mov byte ptr [ecx], 0x45 */
  w8((uint32_t)(ECX), (0x45u));
L_10067c54:;
  /* 10067c54 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 10067c57 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10067c58 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10067c5b je 0x10067c99 */
  if (C.zf) goto L_10067c99;
  /* 10067c5d mov ebx, dword ptr [esi + 4] */
  EBX = (r32((uint32_t)(ESI + 0x4)));
  /* 10067c60 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10067c61 jns 0x10067c68 */
  if (!C.sf) goto L_10067c68;
  /* 10067c63 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 10067c65 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
L_10067c68:;
  /* 10067c68 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10067c69 cmp ebx, 0x64 */
  { uint32_t _a=(EBX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067c6c jl 0x10067c7f */
  if ((C.sf!=C.of)) goto L_10067c7f;
  /* 10067c6e mov eax, ebx */
  EAX = (EBX);
  /* 10067c70 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10067c72 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10067c73 pop esi */
  ESI = (pop32());
  /* 10067c74 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10067c76 add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10067c78 mov eax, ebx */
  EAX = (EBX);
  /* 10067c7a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10067c7b idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10067c7d mov ebx, edx */
  EBX = (EDX);
L_10067c7f:;
  /* 10067c7f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10067c80 cmp ebx, 0xa */
  { uint32_t _a=(EBX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067c83 jl 0x10067c96 */
  if ((C.sf!=C.of)) goto L_10067c96;
  /* 10067c85 mov eax, ebx */
  EAX = (EBX);
  /* 10067c87 push 0xa */
  push32((uint32_t)(0xau));
  /* 10067c89 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10067c8a pop esi */
  ESI = (pop32());
  /* 10067c8b idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10067c8d add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10067c8f mov eax, ebx */
  EAX = (EBX);
  /* 10067c91 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10067c92 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10067c94 mov ebx, edx */
  EBX = (EDX);
L_10067c96:;
  /* 10067c96 add byte ptr [ecx + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x1))),_b=(BL),_r=_a+_b; w8((uint32_t)(ECX + 0x1), (_r)); fl_add(_a,_b,_r,8); }
L_10067c99:;
  /* 10067c99 mov eax, edi */
  EAX = (EDI);
  /* 10067c9b pop edi */
  EDI = (pop32());
  /* 10067c9c pop esi */
  ESI = (pop32());
  /* 10067c9d pop ebx */
  EBX = (pop32());
  /* 10067c9e pop ebp */
  EBP = (pop32());
  /* 10067c9f ret  */
  ESPCHK(0x10067bdeu, _esp0);
  ESP += 4; return;
}

/* FUN_10007ca0 @ 0x10067ca0 (85 bytes, 37 insns) */
void f_10067ca0(void) {
  FTRACE(0x10067ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10067ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 10067ca1 mov ebp, esp */
  EBP = (ESP);
  /* 10067ca3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10067ca6 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10067ca9 push esi */
  push32((uint32_t)(ESI));
  /* 10067caa push eax */
  push32((uint32_t)(EAX));
  /* 10067cab lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10067cae push eax */
  push32((uint32_t)(EAX));
  /* 10067caf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10067cb2 push ecx */
  push32((uint32_t)(ECX));
  /* 10067cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10067cb4 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10067cb6 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10067cb9 call 0x100699dd */
  push32(0x10067cbeu); f_100699dd();
  /* 10067cbe mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10067cc1 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10067cc4 push eax */
  push32((uint32_t)(EAX));
  /* 10067cc5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10067cc8 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10067cca push eax */
  push32((uint32_t)(EAX));
  /* 10067ccb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10067ccd cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067cd1 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10067cd4 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10067cd7 push eax */
  push32((uint32_t)(EAX));
  /* 10067cd8 call 0x10069966 */
  push32(0x10067cddu); f_10069966();
  /* 10067cdd lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10067ce0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10067ce2 push eax */
  push32((uint32_t)(EAX));
  /* 10067ce3 push esi */
  push32((uint32_t)(ESI));
  /* 10067ce4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10067ce7 call 0x10067cf5 */
  push32(0x10067cecu); f_10067cf5();
  /* 10067cec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10067cef add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10067cf2 pop esi */
  ESI = (pop32());
  /* 10067cf3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10067cf4 ret  */
  ESPCHK(0x10067ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cf5 @ 0x10067cf5 (167 bytes, 73 insns) */
void f_10067cf5(void) {
  FTRACE(0x10067cf5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10067cf5 push ebp */
  push32((uint32_t)(EBP));
  /* 10067cf6 mov ebp, esp */
  EBP = (ESP);
  /* 10067cf8 push ebx */
  push32((uint32_t)(EBX));
  /* 10067cf9 push esi */
  push32((uint32_t)(ESI));
  /* 10067cfa mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10067cfd mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10067d00 push edi */
  push32((uint32_t)(EDI));
  /* 10067d01 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 10067d04 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10067d05 cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10067d09 je 0x10067d25 */
  if (C.zf) goto L_10067d25;
  /* 10067d0b cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067d0e jne 0x10067d25 */
  if (!C.zf) goto L_10067d25;
  /* 10067d10 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10067d12 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067d15 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10067d18 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10067d1a add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10067d1c mov eax, ecx */
  EAX = (ECX);
  /* 10067d1e mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 10067d21 and byte ptr [eax + 1], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1)))&(0x0u); w8((uint32_t)(EAX + 0x1), (_r)); fl_logic(_r,8); }
L_10067d25:;
  /* 10067d25 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067d28 mov edi, ebx */
  EDI = (EBX);
  /* 10067d2a jne 0x10067d32 */
  if (!C.zf) goto L_10067d32;
  /* 10067d2c mov byte ptr [ebx], 0x2d */
  w8((uint32_t)(EBX), (0x2du));
  /* 10067d2f lea edi, [ebx + 1] */
  EDI = ((uint32_t)(EBX + 0x1));
L_10067d32:;
  /* 10067d32 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 10067d35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10067d37 jg 0x10067d49 */
  if ((!C.zf&&C.sf==C.of)) goto L_10067d49;
  /* 10067d39 push 1 */
  push32((uint32_t)(0x1u));
  /* 10067d3b push edi */
  push32((uint32_t)(EDI));
  /* 10067d3c call 0x10067e80 */
  push32(0x10067d41u); f_10067e80();
  /* 10067d41 pop ecx */
  ECX = (pop32());
  /* 10067d42 mov byte ptr [edi], 0x30 */
  w8((uint32_t)(EDI), (0x30u));
  /* 10067d45 pop ecx */
  ECX = (pop32());
  /* 10067d46 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10067d47 jmp 0x10067d4b */
  goto L_10067d4b;
L_10067d49:;
  /* 10067d49 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10067d4b:;
  /* 10067d4b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067d4f jle 0x10067d95 */
  if ((C.zf||C.sf!=C.of)) goto L_10067d95;
  /* 10067d51 push 1 */
  push32((uint32_t)(0x1u));
  /* 10067d53 push edi */
  push32((uint32_t)(EDI));
  /* 10067d54 call 0x10067e80 */
  push32(0x10067d59u); f_10067e80();
  /* 10067d59 mov al, byte ptr [0x10070bf4] */
  AL = (r8((uint32_t)(0x10070bf4)));
  /* 10067d5e pop ecx */
  ECX = (pop32());
  /* 10067d5f mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10067d61 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 10067d64 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10067d65 pop ecx */
  ECX = (pop32());
  /* 10067d66 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10067d68 jge 0x10067d95 */
  if ((C.sf==C.of)) goto L_10067d95;
  /* 10067d6a cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10067d6e je 0x10067d74 */
  if (C.zf) goto L_10067d74;
  /* 10067d70 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 10067d72 jmp 0x10067d7b */
  goto L_10067d7b;
L_10067d74:;
  /* 10067d74 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 10067d76 cmp dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067d79 jl 0x10067d7e */
  if ((C.sf!=C.of)) goto L_10067d7e;
L_10067d7b:;
  /* 10067d7b mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_10067d7e:;
  /* 10067d7e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10067d81 push edi */
  push32((uint32_t)(EDI));
  /* 10067d82 call 0x10067e80 */
  push32(0x10067d87u); f_10067e80();
  /* 10067d87 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10067d8a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10067d8c push edi */
  push32((uint32_t)(EDI));
  /* 10067d8d call 0x10069be0 */
  push32(0x10067d92u); f_10069be0();
  /* 10067d92 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10067d95:;
  /* 10067d95 pop edi */
  EDI = (pop32());
  /* 10067d96 mov eax, ebx */
  EAX = (EBX);
  /* 10067d98 pop esi */
  ESI = (pop32());
  /* 10067d99 pop ebx */
  EBX = (pop32());
  /* 10067d9a pop ebp */
  EBP = (pop32());
  /* 10067d9b ret  */
  ESPCHK(0x10067cf5u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d9c @ 0x10067d9c (147 bytes, 66 insns) */
void f_10067d9c(void) {
  FTRACE(0x10067d9cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10067d9c push ebp */
  push32((uint32_t)(EBP));
  /* 10067d9d mov ebp, esp */
  EBP = (ESP);
  /* 10067d9f sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10067da2 push ebx */
  push32((uint32_t)(EBX));
  /* 10067da3 push esi */
  push32((uint32_t)(ESI));
  /* 10067da4 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10067da7 push edi */
  push32((uint32_t)(EDI));
  /* 10067da8 push eax */
  push32((uint32_t)(EAX));
  /* 10067da9 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10067dac push eax */
  push32((uint32_t)(EAX));
  /* 10067dad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10067db0 push ecx */
  push32((uint32_t)(ECX));
  /* 10067db1 push ecx */
  push32((uint32_t)(ECX));
  /* 10067db2 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10067db4 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10067db7 call 0x100699dd */
  push32(0x10067dbcu); f_100699dd();
  /* 10067dbc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10067dbf mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 10067dc2 lea esi, [eax - 1] */
  ESI = ((uint32_t)(EAX + -0x1));
  /* 10067dc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10067dc7 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067dcb sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10067dce add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10067dd1 mov edi, eax */
  EDI = (EAX);
  /* 10067dd3 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10067dd6 push eax */
  push32((uint32_t)(EAX));
  /* 10067dd7 push ebx */
  push32((uint32_t)(EBX));
  /* 10067dd8 push edi */
  push32((uint32_t)(EDI));
  /* 10067dd9 call 0x10069966 */
  push32(0x10067ddeu); f_10069966();
  /* 10067dde mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10067de1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10067de4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10067de5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067de7 setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 10067dea cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067ded jl 0x10067e15 */
  if ((C.sf!=C.of)) goto L_10067e15;
  /* 10067def cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067df1 jge 0x10067e15 */
  if ((C.sf==C.of)) goto L_10067e15;
  /* 10067df3 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10067df5 je 0x10067e01 */
  if (C.zf) goto L_10067e01;
L_10067df7:;
  /* 10067df7 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10067df9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10067dfa test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10067dfc jne 0x10067df7 */
  if (!C.zf) goto L_10067df7;
  /* 10067dfe and byte ptr [edi - 2], al */
  { uint32_t _r=(r8((uint32_t)(EDI + -0x2)))&(AL); w8((uint32_t)(EDI + -0x2), (_r)); fl_logic(_r,8); }
L_10067e01:;
  /* 10067e01 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10067e04 push 1 */
  push32((uint32_t)(0x1u));
  /* 10067e06 push eax */
  push32((uint32_t)(EAX));
  /* 10067e07 push ebx */
  push32((uint32_t)(EBX));
  /* 10067e08 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10067e0b call 0x10067cf5 */
  push32(0x10067e10u); f_10067cf5();
  /* 10067e10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10067e13 jmp 0x10067e2a */
  goto L_10067e2a;
L_10067e15:;
  /* 10067e15 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10067e18 push 1 */
  push32((uint32_t)(0x1u));
  /* 10067e1a push eax */
  push32((uint32_t)(EAX));
  /* 10067e1b push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10067e1e push ebx */
  push32((uint32_t)(EBX));
  /* 10067e1f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10067e22 call 0x10067bde */
  push32(0x10067e27u); f_10067bde();
  /* 10067e27 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10067e2a:;
  /* 10067e2a pop edi */
  EDI = (pop32());
  /* 10067e2b pop esi */
  ESI = (pop32());
  /* 10067e2c pop ebx */
  EBX = (pop32());
  /* 10067e2d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10067e2e ret  */
  ESPCHK(0x10067d9cu, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x10067e2f (81 bytes, 29 insns) */
void f_10067e2f(void) {
  FTRACE(0x10067e2fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10067e2f push ebp */
  push32((uint32_t)(EBP));
  /* 10067e30 mov ebp, esp */
  EBP = (ESP);
  /* 10067e32 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067e36 je 0x10067e6a */
  if (C.zf) goto L_10067e6a;
  /* 10067e38 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067e3c je 0x10067e6a */
  if (C.zf) goto L_10067e6a;
  /* 10067e3e cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067e42 jne 0x10067e57 */
  if (!C.zf) goto L_10067e57;
  /* 10067e44 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10067e47 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10067e4a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10067e4d call 0x10067ca0 */
  push32(0x10067e52u); f_10067ca0();
  /* 10067e52 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10067e55 pop ebp */
  EBP = (pop32());
  /* 10067e56 ret  */
  ESPCHK(0x10067e2fu, _esp0);
  ESP += 4; return;
L_10067e57:;
  /* 10067e57 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10067e5a push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10067e5d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10067e60 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10067e63 call 0x10067d9c */
  push32(0x10067e68u); f_10067d9c();
  /* 10067e68 jmp 0x10067e7b */
  goto L_10067e7b;
L_10067e6a:;
  /* 10067e6a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10067e6d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10067e70 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10067e73 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10067e76 call 0x10067b7d */
  push32(0x10067e7bu); f_10067b7d();
L_10067e7b:;
  /* 10067e7b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10067e7e pop ebp */
  EBP = (pop32());
  /* 10067e7f ret  */
  ESPCHK(0x10067e2fu, _esp0);
  ESP += 4; return;
}

/* FUN_10007e80 @ 0x10067e80 (37 bytes, 18 insns) */
void f_10067e80(void) {
  FTRACE(0x10067e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10067e80 push edi */
  push32((uint32_t)(EDI));
  /* 10067e81 mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 10067e85 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10067e87 je 0x10067ea3 */
  if (C.zf) goto L_10067ea3;
  /* 10067e89 push esi */
  push32((uint32_t)(ESI));
  /* 10067e8a mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 10067e8e push esi */
  push32((uint32_t)(ESI));
  /* 10067e8f call 0x10069040 */
  push32(0x10067e94u); f_10069040();
  /* 10067e94 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10067e95 push eax */
  push32((uint32_t)(EAX));
  /* 10067e96 push esi */
  push32((uint32_t)(ESI));
  /* 10067e97 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10067e99 push esi */
  push32((uint32_t)(ESI));
  /* 10067e9a call 0x10069c40 */
  push32(0x10067e9fu); f_10069c40();
  /* 10067e9f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10067ea2 pop esi */
  ESI = (pop32());
L_10067ea3:;
  /* 10067ea3 pop edi */
  EDI = (pop32());
  /* 10067ea4 ret  */
  ESPCHK(0x10067e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ea5 @ 0x10067ea5 (45 bytes, 12 insns) */
void f_10067ea5(void) {
  FTRACE(0x10067ea5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10067ea5 mov eax, dword ptr [0x1007066c] */
  EAX = (r32((uint32_t)(0x1007066c)));
  /* 10067eaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10067eac je 0x10067eb0 */
  if (C.zf) goto L_10067eb0;
  /* 10067eae call eax */
  call_ind((uint32_t)(EAX), 0x10067eb0u);
L_10067eb0:;
  /* 10067eb0 push 0x1006f014 */
  push32((uint32_t)(0x1006f014u));
  /* 10067eb5 push 0x1006f008 */
  push32((uint32_t)(0x1006f008u));
  /* 10067eba call 0x10067fa9 */
  push32(0x10067ebfu); f_10067fa9();
  /* 10067ebf push 0x1006f004 */
  push32((uint32_t)(0x1006f004u));
  /* 10067ec4 push 0x1006f000 */
  push32((uint32_t)(0x1006f000u));
  /* 10067ec9 call 0x10067fa9 */
  push32(0x10067eceu); f_10067fa9();
  /* 10067ece add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10067ed1 ret  */
  ESPCHK(0x10067ea5u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10067ed2 (17 bytes, 6 insns) */
void f_10067ed2(void) {
  FTRACE(0x10067ed2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10067ed2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10067ed4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10067ed6 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10067eda call 0x10067ef2 */
  push32(0x10067edfu); f_10067ef2();
  /* 10067edf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10067ee2 ret  */
  ESPCHK(0x10067ed2u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ee3 @ 0x10067ee3 (15 bytes, 6 insns) */
void f_10067ee3(void) {
  FTRACE(0x10067ee3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10067ee3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10067ee5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10067ee7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10067ee9 call 0x10067ef2 */
  push32(0x10067eeeu); f_10067ef2();
  /* 10067eee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10067ef1 ret  */
  ESPCHK(0x10067ee3u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ef2 @ 0x10067ef2 (163 bytes, 53 insns) */
void f_10067ef2(void) {
  FTRACE(0x10067ef2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10067ef2 push edi */
  push32((uint32_t)(EDI));
  /* 10067ef3 call 0x10067f97 */
  push32(0x10067ef8u); f_10067f97();
  /* 10067ef8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10067efa pop edi */
  EDI = (pop32());
  /* 10067efb cmp dword ptr [0x100766a8], edi */
  { uint32_t _a=(r32((uint32_t)(0x100766a8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067f01 jne 0x10067f14 */
  if (!C.zf) goto L_10067f14;
  /* 10067f03 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10067f07 call dword ptr [0x1006e020] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e020))), 0x10067f0du);
  /* 10067f0d push eax */
  push32((uint32_t)(EAX));
  /* 10067f0e call dword ptr [0x1006e01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e01c))), 0x10067f14u);
L_10067f14:;
  /* 10067f14 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067f19 push ebx */
  push32((uint32_t)(EBX));
  /* 10067f1a mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10067f1e mov dword ptr [0x100766a4], edi */
  w32((uint32_t)(0x100766a4), (EDI));
  /* 10067f24 mov byte ptr [0x100766a0], bl */
  w8((uint32_t)(0x100766a0), (BL));
  /* 10067f2a jne 0x10067f68 */
  if (!C.zf) goto L_10067f68;
  /* 10067f2c mov eax, dword ptr [0x10077d50] */
  EAX = (r32((uint32_t)(0x10077d50)));
  /* 10067f31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10067f33 je 0x10067f57 */
  if (C.zf) goto L_10067f57;
  /* 10067f35 mov ecx, dword ptr [0x10077d4c] */
  ECX = (r32((uint32_t)(0x10077d4c)));
  /* 10067f3b push esi */
  push32((uint32_t)(ESI));
  /* 10067f3c lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 10067f3f cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067f41 jb 0x10067f56 */
  if (C.cf) goto L_10067f56;
L_10067f43:;
  /* 10067f43 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10067f45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10067f47 je 0x10067f4b */
  if (C.zf) goto L_10067f4b;
  /* 10067f49 call eax */
  call_ind((uint32_t)(EAX), 0x10067f4bu);
L_10067f4b:;
  /* 10067f4b sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10067f4e cmp esi, dword ptr [0x10077d50] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10077d50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067f54 jae 0x10067f43 */
  if (!C.cf) goto L_10067f43;
L_10067f56:;
  /* 10067f56 pop esi */
  ESI = (pop32());
L_10067f57:;
  /* 10067f57 push 0x1006f020 */
  push32((uint32_t)(0x1006f020u));
  /* 10067f5c push 0x1006f018 */
  push32((uint32_t)(0x1006f018u));
  /* 10067f61 call 0x10067fa9 */
  push32(0x10067f66u); f_10067fa9();
  /* 10067f66 pop ecx */
  ECX = (pop32());
  /* 10067f67 pop ecx */
  ECX = (pop32());
L_10067f68:;
  /* 10067f68 push 0x1006f028 */
  push32((uint32_t)(0x1006f028u));
  /* 10067f6d push 0x1006f024 */
  push32((uint32_t)(0x1006f024u));
  /* 10067f72 call 0x10067fa9 */
  push32(0x10067f77u); f_10067fa9();
  /* 10067f77 pop ecx */
  ECX = (pop32());
  /* 10067f78 pop ecx */
  ECX = (pop32());
  /* 10067f79 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10067f7b pop ebx */
  EBX = (pop32());
  /* 10067f7c je 0x10067f85 */
  if (C.zf) goto L_10067f85;
  /* 10067f7e call 0x10067fa0 */
  push32(0x10067f83u); f_10067fa0();
  /* 10067f83 pop edi */
  EDI = (pop32());
  /* 10067f84 ret  */
  ESPCHK(0x10067ef2u, _esp0);
  ESP += 4; return;
L_10067f85:;
  /* 10067f85 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10067f89 mov dword ptr [0x100766a8], edi */
  w32((uint32_t)(0x100766a8), (EDI));
  /* 10067f8f call dword ptr [0x1006e018] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e018))), 0x10067f95u);
  /* 10067f95 pop edi */
  EDI = (pop32());
  /* 10067f96 ret  */
  ESPCHK(0x10067ef2u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f97 @ 0x10067f97 (9 bytes, 4 insns) */
void f_10067f97(void) {
  FTRACE(0x10067f97u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10067f97 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10067f99 call 0x1006a013 */
  push32(0x10067f9eu); f_1006a013();
  /* 10067f9e pop ecx */
  ECX = (pop32());
  /* 10067f9f ret  */
  ESPCHK(0x10067f97u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fa0 @ 0x10067fa0 (9 bytes, 4 insns) */
void f_10067fa0(void) {
  FTRACE(0x10067fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10067fa0 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10067fa2 call 0x1006a074 */
  push32(0x10067fa7u); f_1006a074();
  /* 10067fa7 pop ecx */
  ECX = (pop32());
  /* 10067fa8 ret  */
  ESPCHK(0x10067fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fa9 @ 0x10067fa9 (26 bytes, 12 insns) */
void f_10067fa9(void) {
  FTRACE(0x10067fa9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10067fa9 push esi */
  push32((uint32_t)(ESI));
  /* 10067faa mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_10067fae:;
  /* 10067fae cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067fb2 jae 0x10067fc1 */
  if (!C.cf) goto L_10067fc1;
  /* 10067fb4 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10067fb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10067fb8 je 0x10067fbc */
  if (C.zf) goto L_10067fbc;
  /* 10067fba call eax */
  call_ind((uint32_t)(EAX), 0x10067fbcu);
L_10067fbc:;
  /* 10067fbc add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10067fbf jmp 0x10067fae */
  goto L_10067fae;
L_10067fc1:;
  /* 10067fc1 pop esi */
  ESI = (pop32());
  /* 10067fc2 ret  */
  ESPCHK(0x10067fa9u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fc3 @ 0x10067fc3 (84 bytes, 32 insns) */
void f_10067fc3(void) {
  FTRACE(0x10067fc3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10067fc3 push esi */
  push32((uint32_t)(ESI));
  /* 10067fc4 call 0x10069f7e */
  push32(0x10067fc9u); f_10069f7e();
  /* 10067fc9 call dword ptr [0x1006e02c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e02c))), 0x10067fcfu);
  /* 10067fcf cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10067fd2 mov dword ptr [0x1007069c], eax */
  w32((uint32_t)(0x1007069c), (EAX));
  /* 10067fd7 je 0x10068013 */
  if (C.zf) goto L_10068013;
  /* 10067fd9 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10067fdb push 1 */
  push32((uint32_t)(0x1u));
  /* 10067fdd call 0x1006a089 */
  push32(0x10067fe2u); f_1006a089();
  /* 10067fe2 mov esi, eax */
  ESI = (EAX);
  /* 10067fe4 pop ecx */
  ECX = (pop32());
  /* 10067fe5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10067fe7 pop ecx */
  ECX = (pop32());
  /* 10067fe8 je 0x10068013 */
  if (C.zf) goto L_10068013;
  /* 10067fea push esi */
  push32((uint32_t)(ESI));
  /* 10067feb push dword ptr [0x1007069c] */
  push32((uint32_t)(r32((uint32_t)(0x1007069c))));
  /* 10067ff1 call dword ptr [0x1006e028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e028))), 0x10067ff7u);
  /* 10067ff7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10067ff9 je 0x10068013 */
  if (C.zf) goto L_10068013;
  /* 10067ffb push esi */
  push32((uint32_t)(ESI));
  /* 10067ffc call 0x10068035 */
  push32(0x10068001u); f_10068035();
  /* 10068001 pop ecx */
  ECX = (pop32());
  /* 10068002 call dword ptr [0x1006e024] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e024))), 0x10068008u);
  /* 10068008 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1006800c push 1 */
  push32((uint32_t)(0x1u));
  /* 1006800e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10068010 pop eax */
  EAX = (pop32());
  /* 10068011 pop esi */
  ESI = (pop32());
  /* 10068012 ret  */
  ESPCHK(0x10067fc3u, _esp0);
  ESP += 4; return;
L_10068013:;
  /* 10068013 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10068015 pop esi */
  ESI = (pop32());
  /* 10068016 ret  */
  ESPCHK(0x10067fc3u, _esp0);
  ESP += 4; return;
}

/* FUN_10008017 @ 0x10068017 (30 bytes, 8 insns) */
void f_10068017(void) {
  FTRACE(0x10068017u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10068017 call 0x10069fa7 */
  push32(0x1006801cu); f_10069fa7();
  /* 1006801c mov eax, dword ptr [0x1007069c] */
  EAX = (r32((uint32_t)(0x1007069c)));
  /* 10068021 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068024 je 0x10068034 */
  if (C.zf) goto L_10068034;
  /* 10068026 push eax */
  push32((uint32_t)(EAX));
  /* 10068027 call dword ptr [0x1006e030] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e030))), 0x1006802du);
  /* 1006802d or dword ptr [0x1007069c], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x1007069c)))|(0xffffffffu); w32((uint32_t)(0x1007069c), (_r)); fl_logic(_r,32); }
L_10068034:;
  /* 10068034 ret  */
  ESPCHK(0x10068017u, _esp0);
  ESP += 4; return;
}

/* FUN_10008035 @ 0x10068035 (19 bytes, 4 insns) */
void f_10068035(void) {
  FTRACE(0x10068035u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10068035 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10068039 mov dword ptr [eax + 0x50], 0x10070cf0 */
  w32((uint32_t)(EAX + 0x50), (0x10070cf0u));
  /* 10068040 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 10068047 ret  */
  ESPCHK(0x10068035u, _esp0);
  ESP += 4; return;
}

/* FUN_10008048 @ 0x10068048 (103 bytes, 38 insns) */
void f_10068048(void) {
  FTRACE(0x10068048u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10068048 push esi */
  push32((uint32_t)(ESI));
  /* 10068049 push edi */
  push32((uint32_t)(EDI));
  /* 1006804a call dword ptr [0x1006e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e03c))), 0x10068050u);
  /* 10068050 push dword ptr [0x1007069c] */
  push32((uint32_t)(r32((uint32_t)(0x1007069c))));
  /* 10068056 mov edi, eax */
  EDI = (EAX);
  /* 10068058 call dword ptr [0x1006e038] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e038))), 0x1006805eu);
  /* 1006805e mov esi, eax */
  ESI = (EAX);
  /* 10068060 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10068062 jne 0x100680a3 */
  if (!C.zf) goto L_100680a3;
  /* 10068064 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10068066 push 1 */
  push32((uint32_t)(0x1u));
  /* 10068068 call 0x1006a089 */
  push32(0x1006806du); f_1006a089();
  /* 1006806d mov esi, eax */
  ESI = (EAX);
  /* 1006806f pop ecx */
  ECX = (pop32());
  /* 10068070 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10068072 pop ecx */
  ECX = (pop32());
  /* 10068073 je 0x1006809b */
  if (C.zf) goto L_1006809b;
  /* 10068075 push esi */
  push32((uint32_t)(ESI));
  /* 10068076 push dword ptr [0x1007069c] */
  push32((uint32_t)(r32((uint32_t)(0x1007069c))));
  /* 1006807c call dword ptr [0x1006e028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e028))), 0x10068082u);
  /* 10068082 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10068084 je 0x1006809b */
  if (C.zf) goto L_1006809b;
  /* 10068086 push esi */
  push32((uint32_t)(ESI));
  /* 10068087 call 0x10068035 */
  push32(0x1006808cu); f_10068035();
  /* 1006808c pop ecx */
  ECX = (pop32());
  /* 1006808d call dword ptr [0x1006e024] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e024))), 0x10068093u);
  /* 10068093 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10068097 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10068099 jmp 0x100680a3 */
  goto L_100680a3;
L_1006809b:;
  /* 1006809b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1006809d call 0x100670b1 */
  push32(0x100680a2u); f_100670b1();
  /* 100680a2 pop ecx */
  ECX = (pop32());
L_100680a3:;
  /* 100680a3 push edi */
  push32((uint32_t)(EDI));
  /* 100680a4 call dword ptr [0x1006e034] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e034))), 0x100680aau);
  /* 100680aa mov eax, esi */
  EAX = (ESI);
  /* 100680ac pop edi */
  EDI = (pop32());
  /* 100680ad pop esi */
  ESI = (pop32());
  /* 100680ae ret  */
  ESPCHK(0x10068048u, _esp0);
  ESP += 4; return;
}

/* FUN_100080af @ 0x100680af (160 bytes, 62 insns) */
void f_100680af(void) {
  FTRACE(0x100680afu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100680af mov eax, dword ptr [0x1007069c] */
  EAX = (r32((uint32_t)(0x1007069c)));
  /* 100680b4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100680b7 je 0x1006814e */
  if (C.zf) goto L_1006814e;
  /* 100680bd push esi */
  push32((uint32_t)(ESI));
  /* 100680be mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100680c2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100680c4 jne 0x100680d3 */
  if (!C.zf) goto L_100680d3;
  /* 100680c6 push eax */
  push32((uint32_t)(EAX));
  /* 100680c7 call dword ptr [0x1006e038] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e038))), 0x100680cdu);
  /* 100680cd mov esi, eax */
  ESI = (EAX);
  /* 100680cf test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100680d1 je 0x1006813f */
  if (C.zf) goto L_1006813f;
L_100680d3:;
  /* 100680d3 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 100680d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100680d8 je 0x100680e1 */
  if (C.zf) goto L_100680e1;
  /* 100680da push eax */
  push32((uint32_t)(EAX));
  /* 100680db call 0x1006a1c6 */
  push32(0x100680e0u); f_1006a1c6();
  /* 100680e0 pop ecx */
  ECX = (pop32());
L_100680e1:;
  /* 100680e1 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 100680e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100680e6 je 0x100680ef */
  if (C.zf) goto L_100680ef;
  /* 100680e8 push eax */
  push32((uint32_t)(EAX));
  /* 100680e9 call 0x1006a1c6 */
  push32(0x100680eeu); f_1006a1c6();
  /* 100680ee pop ecx */
  ECX = (pop32());
L_100680ef:;
  /* 100680ef mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 100680f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100680f4 je 0x100680fd */
  if (C.zf) goto L_100680fd;
  /* 100680f6 push eax */
  push32((uint32_t)(EAX));
  /* 100680f7 call 0x1006a1c6 */
  push32(0x100680fcu); f_1006a1c6();
  /* 100680fc pop ecx */
  ECX = (pop32());
L_100680fd:;
  /* 100680fd mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 10068100 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10068102 je 0x1006810b */
  if (C.zf) goto L_1006810b;
  /* 10068104 push eax */
  push32((uint32_t)(EAX));
  /* 10068105 call 0x1006a1c6 */
  push32(0x1006810au); f_1006a1c6();
  /* 1006810a pop ecx */
  ECX = (pop32());
L_1006810b:;
  /* 1006810b mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 1006810e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10068110 je 0x10068119 */
  if (C.zf) goto L_10068119;
  /* 10068112 push eax */
  push32((uint32_t)(EAX));
  /* 10068113 call 0x1006a1c6 */
  push32(0x10068118u); f_1006a1c6();
  /* 10068118 pop ecx */
  ECX = (pop32());
L_10068119:;
  /* 10068119 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 1006811c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006811e je 0x10068127 */
  if (C.zf) goto L_10068127;
  /* 10068120 push eax */
  push32((uint32_t)(EAX));
  /* 10068121 call 0x1006a1c6 */
  push32(0x10068126u); f_1006a1c6();
  /* 10068126 pop ecx */
  ECX = (pop32());
L_10068127:;
  /* 10068127 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 1006812a cmp eax, 0x10070cf0 */
  { uint32_t _a=(EAX),_b=(0x10070cf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006812f je 0x10068138 */
  if (C.zf) goto L_10068138;
  /* 10068131 push eax */
  push32((uint32_t)(EAX));
  /* 10068132 call 0x1006a1c6 */
  push32(0x10068137u); f_1006a1c6();
  /* 10068137 pop ecx */
  ECX = (pop32());
L_10068138:;
  /* 10068138 push esi */
  push32((uint32_t)(ESI));
  /* 10068139 call 0x1006a1c6 */
  push32(0x1006813eu); f_1006a1c6();
  /* 1006813e pop ecx */
  ECX = (pop32());
L_1006813f:;
  /* 1006813f push 0 */
  push32((uint32_t)(0x0u));
  /* 10068141 push dword ptr [0x1007069c] */
  push32((uint32_t)(r32((uint32_t)(0x1007069c))));
  /* 10068147 call dword ptr [0x1006e028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e028))), 0x1006814du);
  /* 1006814d pop esi */
  ESI = (pop32());
L_1006814e:;
  /* 1006814e ret  */
  ESPCHK(0x100680afu, _esp0);
  ESP += 4; return;
}

/* FUN_1000814f @ 0x1006814f (444 bytes, 150 insns) */
void f_1006814f(void) {
  FTRACE(0x1006814fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006814f push ebp */
  push32((uint32_t)(EBP));
  /* 10068150 mov ebp, esp */
  EBP = (ESP);
  /* 10068152 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10068155 push ebx */
  push32((uint32_t)(EBX));
  /* 10068156 push esi */
  push32((uint32_t)(ESI));
  /* 10068157 push edi */
  push32((uint32_t)(EDI));
  /* 10068158 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1006815d call 0x1006a2af */
  push32(0x10068162u); f_1006a2af();
  /* 10068162 mov esi, eax */
  ESI = (EAX);
  /* 10068164 pop ecx */
  ECX = (pop32());
  /* 10068165 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10068167 jne 0x10068171 */
  if (!C.zf) goto L_10068171;
  /* 10068169 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1006816b call 0x100670b1 */
  push32(0x10068170u); f_100670b1();
  /* 10068170 pop ecx */
  ECX = (pop32());
L_10068171:;
  /* 10068171 mov dword ptr [0x10077c40], esi */
  w32((uint32_t)(0x10077c40), (ESI));
  /* 10068177 mov dword ptr [0x10077d40], 0x20 */
  w32((uint32_t)(0x10077d40), (0x20u));
  /* 10068181 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_10068187:;
  /* 10068187 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068189 jae 0x100681a9 */
  if (!C.cf) goto L_100681a9;
  /* 1006818b and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 1006818f or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 10068192 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 10068196 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 1006819a mov eax, dword ptr [0x10077c40] */
  EAX = (r32((uint32_t)(0x10077c40)));
  /* 1006819f add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100681a2 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100681a7 jmp 0x10068187 */
  goto L_10068187;
L_100681a9:;
  /* 100681a9 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 100681ac push eax */
  push32((uint32_t)(EAX));
  /* 100681ad call dword ptr [0x1006e04c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e04c))), 0x100681b3u);
  /* 100681b3 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100681b8 je 0x1006828f */
  if (C.zf) goto L_1006828f;
  /* 100681be mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 100681c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100681c3 je 0x1006828f */
  if (C.zf) goto L_1006828f;
  /* 100681c9 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 100681cb lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 100681ce lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 100681d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 100681d4 mov eax, 0x800 */
  EAX = (0x800u);
  /* 100681d9 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100681db jl 0x100681df */
  if ((C.sf!=C.of)) goto L_100681df;
  /* 100681dd mov edi, eax */
  EDI = (EAX);
L_100681df:;
  /* 100681df cmp dword ptr [0x10077d40], edi */
  { uint32_t _a=(r32((uint32_t)(0x10077d40))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100681e5 jge 0x1006823d */
  if ((C.sf==C.of)) goto L_1006823d;
  /* 100681e7 mov esi, 0x10077c44 */
  ESI = (0x10077c44u);
L_100681ec:;
  /* 100681ec push 0x480 */
  push32((uint32_t)(0x480u));
  /* 100681f1 call 0x1006a2af */
  push32(0x100681f6u); f_1006a2af();
  /* 100681f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100681f8 pop ecx */
  ECX = (pop32());
  /* 100681f9 je 0x10068237 */
  if (C.zf) goto L_10068237;
  /* 100681fb add dword ptr [0x10077d40], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10077d40))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x10077d40), (_r)); fl_add(_a,_b,_r,32); }
  /* 10068202 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10068204 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_1006820a:;
  /* 1006820a cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006820c jae 0x1006822a */
  if (!C.cf) goto L_1006822a;
  /* 1006820e and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 10068212 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10068215 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10068219 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 1006821d mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1006821f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10068222 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10068228 jmp 0x1006820a */
  goto L_1006820a;
L_1006822a:;
  /* 1006822a add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1006822d cmp dword ptr [0x10077d40], edi */
  { uint32_t _a=(r32((uint32_t)(0x10077d40))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068233 jl 0x100681ec */
  if ((C.sf!=C.of)) goto L_100681ec;
  /* 10068235 jmp 0x1006823d */
  goto L_1006823d;
L_10068237:;
  /* 10068237 mov edi, dword ptr [0x10077d40] */
  EDI = (r32((uint32_t)(0x10077d40)));
L_1006823d:;
  /* 1006823d xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1006823f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10068241 jle 0x1006828f */
  if ((C.zf||C.sf!=C.of)) goto L_1006828f;
L_10068243:;
  /* 10068243 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10068246 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10068248 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006824b je 0x10068285 */
  if (C.zf) goto L_10068285;
  /* 1006824d mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 1006824f test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 10068251 je 0x10068285 */
  if (C.zf) goto L_10068285;
  /* 10068253 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 10068255 jne 0x10068262 */
  if (!C.zf) goto L_10068262;
  /* 10068257 push ecx */
  push32((uint32_t)(ECX));
  /* 10068258 call dword ptr [0x1006e048] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e048))), 0x1006825eu);
  /* 1006825e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10068260 je 0x10068285 */
  if (C.zf) goto L_10068285;
L_10068262:;
  /* 10068262 mov ecx, esi */
  ECX = (ESI);
  /* 10068264 mov eax, esi */
  EAX = (ESI);
  /* 10068266 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10068269 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1006826c mov ecx, dword ptr [ecx*4 + 0x10077c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10077c40)));
  /* 10068273 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10068276 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 10068279 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1006827c mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 1006827e mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10068280 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 10068282 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_10068285:;
  /* 10068285 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 10068289 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1006828a inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1006828b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006828d jl 0x10068243 */
  if ((C.sf!=C.of)) goto L_10068243;
L_1006828f:;
  /* 1006828f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10068291:;
  /* 10068291 mov ecx, dword ptr [0x10077c40] */
  ECX = (r32((uint32_t)(0x10077c40)));
  /* 10068297 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 1006829a cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006829e lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 100682a1 jne 0x100682f0 */
  if (!C.zf) goto L_100682f0;
  /* 100682a3 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100682a5 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 100682a9 jne 0x100682b0 */
  if (!C.zf) goto L_100682b0;
  /* 100682ab push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 100682ad pop eax */
  EAX = (pop32());
  /* 100682ae jmp 0x100682ba */
  goto L_100682ba;
L_100682b0:;
  /* 100682b0 mov eax, ebx */
  EAX = (EBX);
  /* 100682b2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100682b3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 100682b5 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100682b7 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_100682ba:;
  /* 100682ba push eax */
  push32((uint32_t)(EAX));
  /* 100682bb call dword ptr [0x1006e044] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e044))), 0x100682c1u);
  /* 100682c1 mov edi, eax */
  EDI = (EAX);
  /* 100682c3 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100682c6 je 0x100682df */
  if (C.zf) goto L_100682df;
  /* 100682c8 push edi */
  push32((uint32_t)(EDI));
  /* 100682c9 call dword ptr [0x1006e048] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e048))), 0x100682cfu);
  /* 100682cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100682d1 je 0x100682df */
  if (C.zf) goto L_100682df;
  /* 100682d3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 100682d8 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 100682da cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100682dd jne 0x100682e5 */
  if (!C.zf) goto L_100682e5;
L_100682df:;
  /* 100682df or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 100682e3 jmp 0x100682f4 */
  goto L_100682f4;
L_100682e5:;
  /* 100682e5 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100682e8 jne 0x100682f4 */
  if (!C.zf) goto L_100682f4;
  /* 100682ea or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 100682ee jmp 0x100682f4 */
  goto L_100682f4;
L_100682f0:;
  /* 100682f0 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_100682f4:;
  /* 100682f4 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100682f5 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100682f8 jl 0x10068291 */
  if ((C.sf!=C.of)) goto L_10068291;
  /* 100682fa push dword ptr [0x10077d40] */
  push32((uint32_t)(r32((uint32_t)(0x10077d40))));
  /* 10068300 call dword ptr [0x1006e040] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e040))), 0x10068306u);
  /* 10068306 pop edi */
  EDI = (pop32());
  /* 10068307 pop esi */
  ESI = (pop32());
  /* 10068308 pop ebx */
  EBX = (pop32());
  /* 10068309 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1006830a ret  */
  ESPCHK(0x1006814fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000830b @ 0x1006830b (84 bytes, 33 insns) */
void f_1006830b(void) {
  FTRACE(0x1006830bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006830b push ebx */
  push32((uint32_t)(EBX));
  /* 1006830c push esi */
  push32((uint32_t)(ESI));
  /* 1006830d push edi */
  push32((uint32_t)(EDI));
  /* 1006830e mov esi, 0x10077c40 */
  ESI = (0x10077c40u);
L_10068313:;
  /* 10068313 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10068315 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10068317 je 0x10068350 */
  if (C.zf) goto L_10068350;
  /* 10068319 mov edi, eax */
  EDI = (EAX);
  /* 1006831b add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10068320 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068322 jae 0x10068345 */
  if (!C.cf) goto L_10068345;
  /* 10068324 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_10068327:;
  /* 10068327 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006832b je 0x10068334 */
  if (C.zf) goto L_10068334;
  /* 1006832d push ebx */
  push32((uint32_t)(EBX));
  /* 1006832e call dword ptr [0x1006e050] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e050))), 0x10068334u);
L_10068334:;
  /* 10068334 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10068336 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10068339 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006833e add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10068341 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068343 jb 0x10068327 */
  if (C.cf) goto L_10068327;
L_10068345:;
  /* 10068345 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10068347 call 0x1006a1c6 */
  push32(0x1006834cu); f_1006a1c6();
  /* 1006834c and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 1006834f pop ecx */
  ECX = (pop32());
L_10068350:;
  /* 10068350 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10068353 cmp esi, 0x10077d40 */
  { uint32_t _a=(ESI),_b=(0x10077d40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068359 jl 0x10068313 */
  if ((C.sf!=C.of)) goto L_10068313;
  /* 1006835b pop edi */
  EDI = (pop32());
  /* 1006835c pop esi */
  ESI = (pop32());
  /* 1006835d pop ebx */
  EBX = (pop32());
  /* 1006835e ret  */
  ESPCHK(0x1006830bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000835f @ 0x1006835f (185 bytes, 71 insns) */
void f_1006835f(void) {
  FTRACE(0x1006835fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006835f push ebx */
  push32((uint32_t)(EBX));
  /* 10068360 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10068362 cmp dword ptr [0x10077d48], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10077d48))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068368 push esi */
  push32((uint32_t)(ESI));
  /* 10068369 push edi */
  push32((uint32_t)(EDI));
  /* 1006836a jne 0x10068371 */
  if (!C.zf) goto L_10068371;
  /* 1006836c call 0x1006a7c1 */
  push32(0x10068371u); f_1006a7c1();
L_10068371:;
  /* 10068371 mov esi, dword ptr [0x10076658] */
  ESI = (r32((uint32_t)(0x10076658)));
  /* 10068377 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10068379:;
  /* 10068379 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1006837b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006837d je 0x10068391 */
  if (C.zf) goto L_10068391;
  /* 1006837f cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10068381 je 0x10068384 */
  if (C.zf) goto L_10068384;
  /* 10068383 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10068384:;
  /* 10068384 push esi */
  push32((uint32_t)(ESI));
  /* 10068385 call 0x10069040 */
  push32(0x1006838au); f_10069040();
  /* 1006838a pop ecx */
  ECX = (pop32());
  /* 1006838b lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 1006838f jmp 0x10068379 */
  goto L_10068379;
L_10068391:;
  /* 10068391 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 10068398 push eax */
  push32((uint32_t)(EAX));
  /* 10068399 call 0x1006a2af */
  push32(0x1006839eu); f_1006a2af();
  /* 1006839e mov esi, eax */
  ESI = (EAX);
  /* 100683a0 pop ecx */
  ECX = (pop32());
  /* 100683a1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100683a3 mov dword ptr [0x10076688], esi */
  w32((uint32_t)(0x10076688), (ESI));
  /* 100683a9 jne 0x100683b3 */
  if (!C.zf) goto L_100683b3;
  /* 100683ab push 9 */
  push32((uint32_t)(0x9u));
  /* 100683ad call 0x100670b1 */
  push32(0x100683b2u); f_100670b1();
  /* 100683b2 pop ecx */
  ECX = (pop32());
L_100683b3:;
  /* 100683b3 mov edi, dword ptr [0x10076658] */
  EDI = (r32((uint32_t)(0x10076658)));
  /* 100683b9 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100683bb je 0x100683f6 */
  if (C.zf) goto L_100683f6;
  /* 100683bd push ebp */
  push32((uint32_t)(EBP));
L_100683be:;
  /* 100683be push edi */
  push32((uint32_t)(EDI));
  /* 100683bf call 0x10069040 */
  push32(0x100683c4u); f_10069040();
  /* 100683c4 mov ebp, eax */
  EBP = (EAX);
  /* 100683c6 pop ecx */
  ECX = (pop32());
  /* 100683c7 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 100683c8 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100683cb je 0x100683ef */
  if (C.zf) goto L_100683ef;
  /* 100683cd push ebp */
  push32((uint32_t)(EBP));
  /* 100683ce call 0x1006a2af */
  push32(0x100683d3u); f_1006a2af();
  /* 100683d3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100683d5 pop ecx */
  ECX = (pop32());
  /* 100683d6 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 100683d8 jne 0x100683e2 */
  if (!C.zf) goto L_100683e2;
  /* 100683da push 9 */
  push32((uint32_t)(0x9u));
  /* 100683dc call 0x100670b1 */
  push32(0x100683e1u); f_100670b1();
  /* 100683e1 pop ecx */
  ECX = (pop32());
L_100683e2:;
  /* 100683e2 push edi */
  push32((uint32_t)(EDI));
  /* 100683e3 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 100683e5 call 0x10069af0 */
  push32(0x100683eau); f_10069af0();
  /* 100683ea pop ecx */
  ECX = (pop32());
  /* 100683eb add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100683ee pop ecx */
  ECX = (pop32());
L_100683ef:;
  /* 100683ef add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100683f1 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100683f3 jne 0x100683be */
  if (!C.zf) goto L_100683be;
  /* 100683f5 pop ebp */
  EBP = (pop32());
L_100683f6:;
  /* 100683f6 push dword ptr [0x10076658] */
  push32((uint32_t)(r32((uint32_t)(0x10076658))));
  /* 100683fc call 0x1006a1c6 */
  push32(0x10068401u); f_1006a1c6();
  /* 10068401 pop ecx */
  ECX = (pop32());
  /* 10068402 mov dword ptr [0x10076658], ebx */
  w32((uint32_t)(0x10076658), (EBX));
  /* 10068408 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 1006840a pop edi */
  EDI = (pop32());
  /* 1006840b pop esi */
  ESI = (pop32());
  /* 1006840c mov dword ptr [0x10077d44], 1 */
  w32((uint32_t)(0x10077d44), (0x1u));
  /* 10068416 pop ebx */
  EBX = (pop32());
  /* 10068417 ret  */
  ESPCHK(0x1006835fu, _esp0);
  ESP += 4; return;
}

/* FUN_10008418 @ 0x10068418 (153 bytes, 62 insns) */
void f_10068418(void) {
  FTRACE(0x10068418u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10068418 push ebp */
  push32((uint32_t)(EBP));
  /* 10068419 mov ebp, esp */
  EBP = (ESP);
  /* 1006841b push ecx */
  push32((uint32_t)(ECX));
  /* 1006841c push ecx */
  push32((uint32_t)(ECX));
  /* 1006841d push ebx */
  push32((uint32_t)(EBX));
  /* 1006841e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10068420 cmp dword ptr [0x10077d48], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10077d48))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068426 push esi */
  push32((uint32_t)(ESI));
  /* 10068427 push edi */
  push32((uint32_t)(EDI));
  /* 10068428 jne 0x1006842f */
  if (!C.zf) goto L_1006842f;
  /* 1006842a call 0x1006a7c1 */
  push32(0x1006842fu); f_1006a7c1();
L_1006842f:;
  /* 1006842f mov esi, 0x100766ac */
  ESI = (0x100766acu);
  /* 10068434 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10068439 push esi */
  push32((uint32_t)(ESI));
  /* 1006843a push ebx */
  push32((uint32_t)(EBX));
  /* 1006843b call dword ptr [0x1006e054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e054))), 0x10068441u);
  /* 10068441 mov eax, dword ptr [0x10077d54] */
  EAX = (r32((uint32_t)(0x10077d54)));
  /* 10068446 mov dword ptr [0x10076698], esi */
  w32((uint32_t)(0x10076698), (ESI));
  /* 1006844c mov edi, esi */
  EDI = (ESI);
  /* 1006844e cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10068450 je 0x10068454 */
  if (C.zf) goto L_10068454;
  /* 10068452 mov edi, eax */
  EDI = (EAX);
L_10068454:;
  /* 10068454 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10068457 push eax */
  push32((uint32_t)(EAX));
  /* 10068458 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 1006845b push eax */
  push32((uint32_t)(EAX));
  /* 1006845c push ebx */
  push32((uint32_t)(EBX));
  /* 1006845d push ebx */
  push32((uint32_t)(EBX));
  /* 1006845e push edi */
  push32((uint32_t)(EDI));
  /* 1006845f call 0x100684b1 */
  push32(0x10068464u); f_100684b1();
  /* 10068464 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10068467 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1006846a lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 1006846d push eax */
  push32((uint32_t)(EAX));
  /* 1006846e call 0x1006a2af */
  push32(0x10068473u); f_1006a2af();
  /* 10068473 mov esi, eax */
  ESI = (EAX);
  /* 10068475 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10068478 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006847a jne 0x10068484 */
  if (!C.zf) goto L_10068484;
  /* 1006847c push 8 */
  push32((uint32_t)(0x8u));
  /* 1006847e call 0x100670b1 */
  push32(0x10068483u); f_100670b1();
  /* 10068483 pop ecx */
  ECX = (pop32());
L_10068484:;
  /* 10068484 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10068487 push eax */
  push32((uint32_t)(EAX));
  /* 10068488 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 1006848b push eax */
  push32((uint32_t)(EAX));
  /* 1006848c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1006848f lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 10068492 push eax */
  push32((uint32_t)(EAX));
  /* 10068493 push esi */
  push32((uint32_t)(ESI));
  /* 10068494 push edi */
  push32((uint32_t)(EDI));
  /* 10068495 call 0x100684b1 */
  push32(0x1006849au); f_100684b1();
  /* 1006849a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1006849d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100684a0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100684a1 mov dword ptr [0x10076680], esi */
  w32((uint32_t)(0x10076680), (ESI));
  /* 100684a7 pop edi */
  EDI = (pop32());
  /* 100684a8 pop esi */
  ESI = (pop32());
  /* 100684a9 mov dword ptr [0x1007667c], eax */
  w32((uint32_t)(0x1007667c), (EAX));
  /* 100684ae pop ebx */
  EBX = (pop32());
  /* 100684af leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100684b0 ret  */
  ESPCHK(0x10068418u, _esp0);
  ESP += 4; return;
}

/* FUN_100084b1 @ 0x100684b1 (436 bytes, 187 insns) */
void f_100684b1(void) {
  FTRACE(0x100684b1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100684b1 push ebp */
  push32((uint32_t)(EBP));
  /* 100684b2 mov ebp, esp */
  EBP = (ESP);
  /* 100684b4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 100684b7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 100684ba push ebx */
  push32((uint32_t)(EBX));
  /* 100684bb push esi */
  push32((uint32_t)(ESI));
  /* 100684bc and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 100684bf mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 100684c2 push edi */
  push32((uint32_t)(EDI));
  /* 100684c3 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 100684c6 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 100684cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100684cf test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100684d1 je 0x100684db */
  if (C.zf) goto L_100684db;
  /* 100684d3 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 100684d5 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100684d8 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_100684db:;
  /* 100684db cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100684de jne 0x10068524 */
  if (!C.zf) goto L_10068524;
L_100684e0:;
  /* 100684e0 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 100684e3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100684e4 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100684e7 je 0x10068512 */
  if (C.zf) goto L_10068512;
  /* 100684e9 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100684eb je 0x10068512 */
  if (C.zf) goto L_10068512;
  /* 100684ed movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 100684f0 test byte ptr [edx + 0x10076b01], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10076b01)))&(0x4u); fl_logic(_r,8); }
  /* 100684f7 je 0x10068505 */
  if (C.zf) goto L_10068505;
  /* 100684f9 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 100684fb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100684fd je 0x10068505 */
  if (C.zf) goto L_10068505;
  /* 100684ff mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10068501 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10068503 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10068504 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10068505:;
  /* 10068505 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10068507 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10068509 je 0x100684e0 */
  if (C.zf) goto L_100684e0;
  /* 1006850b mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1006850d mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1006850f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10068510 jmp 0x100684e0 */
  goto L_100684e0;
L_10068512:;
  /* 10068512 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10068514 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10068516 je 0x1006851c */
  if (C.zf) goto L_1006851c;
  /* 10068518 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 1006851b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1006851c:;
  /* 1006851c cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006851f jne 0x10068567 */
  if (!C.zf) goto L_10068567;
  /* 10068521 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10068522 jmp 0x10068567 */
  goto L_10068567;
L_10068524:;
  /* 10068524 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10068526 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10068528 je 0x1006852f */
  if (C.zf) goto L_1006852f;
  /* 1006852a mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1006852c mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1006852e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1006852f:;
  /* 1006852f mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10068531 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10068532 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10068535 test byte ptr [ebx + 0x10076b01], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10076b01)))&(0x4u); fl_logic(_r,8); }
  /* 1006853c je 0x1006854a */
  if (C.zf) goto L_1006854a;
  /* 1006853e inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10068540 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10068542 je 0x10068549 */
  if (C.zf) goto L_10068549;
  /* 10068544 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 10068546 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 10068548 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10068549:;
  /* 10068549 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1006854a:;
  /* 1006854a cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006854d je 0x10068558 */
  if (C.zf) goto L_10068558;
  /* 1006854f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10068551 je 0x1006855c */
  if (C.zf) goto L_1006855c;
  /* 10068553 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10068556 jne 0x10068524 */
  if (!C.zf) goto L_10068524;
L_10068558:;
  /* 10068558 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1006855a jne 0x1006855f */
  if (!C.zf) goto L_1006855f;
L_1006855c:;
  /* 1006855c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1006855d jmp 0x10068567 */
  goto L_10068567;
L_1006855f:;
  /* 1006855f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10068561 je 0x10068567 */
  if (C.zf) goto L_10068567;
  /* 10068563 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_10068567:;
  /* 10068567 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_1006856b:;
  /* 1006856b cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006856e je 0x10068654 */
  if (C.zf) goto L_10068654;
L_10068574:;
  /* 10068574 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10068576 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10068579 je 0x10068580 */
  if (C.zf) goto L_10068580;
  /* 1006857b cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006857e jne 0x10068583 */
  if (!C.zf) goto L_10068583;
L_10068580:;
  /* 10068580 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10068581 jmp 0x10068574 */
  goto L_10068574;
L_10068583:;
  /* 10068583 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10068586 je 0x10068654 */
  if (C.zf) goto L_10068654;
  /* 1006858c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1006858e je 0x10068598 */
  if (C.zf) goto L_10068598;
  /* 10068590 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10068592 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10068595 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10068598:;
  /* 10068598 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1006859b inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_1006859d:;
  /* 1006859d mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 100685a4 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_100685a6:;
  /* 100685a6 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100685a9 jne 0x100685af */
  if (!C.zf) goto L_100685af;
  /* 100685ab inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100685ac inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100685ad jmp 0x100685a6 */
  goto L_100685a6;
L_100685af:;
  /* 100685af cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100685b2 jne 0x100685e0 */
  if (!C.zf) goto L_100685e0;
  /* 100685b4 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 100685b7 jne 0x100685de */
  if (!C.zf) goto L_100685de;
  /* 100685b9 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 100685bb cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100685be je 0x100685cd */
  if (C.zf) goto L_100685cd;
  /* 100685c0 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100685c4 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 100685c7 jne 0x100685cd */
  if (!C.zf) goto L_100685cd;
  /* 100685c9 mov eax, edx */
  EAX = (EDX);
  /* 100685cb jmp 0x100685d0 */
  goto L_100685d0;
L_100685cd:;
  /* 100685cd mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_100685d0:;
  /* 100685d0 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 100685d3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100685d5 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100685d8 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 100685db mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_100685de:;
  /* 100685de shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_100685e0:;
  /* 100685e0 mov edx, ebx */
  EDX = (EBX);
  /* 100685e2 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100685e3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 100685e5 je 0x100685f5 */
  if (C.zf) goto L_100685f5;
  /* 100685e7 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_100685e8:;
  /* 100685e8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100685ea je 0x100685f0 */
  if (C.zf) goto L_100685f0;
  /* 100685ec mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 100685ef inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_100685f0:;
  /* 100685f0 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 100685f2 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100685f3 jne 0x100685e8 */
  if (!C.zf) goto L_100685e8;
L_100685f5:;
  /* 100685f5 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 100685f7 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100685f9 je 0x10068645 */
  if (C.zf) goto L_10068645;
  /* 100685fb cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100685ff jne 0x1006860b */
  if (!C.zf) goto L_1006860b;
  /* 10068601 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10068604 je 0x10068645 */
  if (C.zf) goto L_10068645;
  /* 10068606 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10068609 je 0x10068645 */
  if (C.zf) goto L_10068645;
L_1006860b:;
  /* 1006860b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006860f je 0x1006863f */
  if (C.zf) goto L_1006863f;
  /* 10068611 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10068613 je 0x1006862e */
  if (C.zf) goto L_1006862e;
  /* 10068615 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10068618 test byte ptr [ebx + 0x10076b01], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10076b01)))&(0x4u); fl_logic(_r,8); }
  /* 1006861f je 0x10068627 */
  if (C.zf) goto L_10068627;
  /* 10068621 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10068623 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10068624 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10068625 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10068627:;
  /* 10068627 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10068629 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1006862b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1006862c jmp 0x1006863d */
  goto L_1006863d;
L_1006862e:;
  /* 1006862e movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 10068631 test byte ptr [edx + 0x10076b01], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10076b01)))&(0x4u); fl_logic(_r,8); }
  /* 10068638 je 0x1006863d */
  if (C.zf) goto L_1006863d;
  /* 1006863a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1006863b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1006863d:;
  /* 1006863d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1006863f:;
  /* 1006863f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10068640 jmp 0x1006859d */
  goto L_1006859d;
L_10068645:;
  /* 10068645 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10068647 je 0x1006864d */
  if (C.zf) goto L_1006864d;
  /* 10068649 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 1006864c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1006864d:;
  /* 1006864d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1006864f jmp 0x1006856b */
  goto L_1006856b;
L_10068654:;
  /* 10068654 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10068656 je 0x1006865b */
  if (C.zf) goto L_1006865b;
  /* 10068658 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1006865b:;
  /* 1006865b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1006865e pop edi */
  EDI = (pop32());
  /* 1006865f pop esi */
  ESI = (pop32());
  /* 10068660 pop ebx */
  EBX = (pop32());
  /* 10068661 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 10068663 pop ebp */
  EBP = (pop32());
  /* 10068664 ret  */
  ESPCHK(0x100684b1u, _esp0);
  ESP += 4; return;
}

/* FUN_10008665 @ 0x10068665 (306 bytes, 132 insns) */
void f_10068665(void) {
  FTRACE(0x10068665u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10068665 push ecx */
  push32((uint32_t)(ECX));
  /* 10068666 push ecx */
  push32((uint32_t)(ECX));
  /* 10068667 mov eax, dword ptr [0x100767b0] */
  EAX = (r32((uint32_t)(0x100767b0)));
  /* 1006866c push ebx */
  push32((uint32_t)(EBX));
  /* 1006866d push ebp */
  push32((uint32_t)(EBP));
  /* 1006866e mov ebp, dword ptr [0x1006e068] */
  EBP = (r32((uint32_t)(0x1006e068)));
  /* 10068674 push esi */
  push32((uint32_t)(ESI));
  /* 10068675 push edi */
  push32((uint32_t)(EDI));
  /* 10068676 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10068678 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1006867a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1006867c cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006867e jne 0x100686b3 */
  if (!C.zf) goto L_100686b3;
  /* 10068680 call ebp */
  call_ind((uint32_t)(EBP), 0x10068682u);
  /* 10068682 mov esi, eax */
  ESI = (EAX);
  /* 10068684 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068686 je 0x10068694 */
  if (C.zf) goto L_10068694;
  /* 10068688 mov dword ptr [0x100767b0], 1 */
  w32((uint32_t)(0x100767b0), (0x1u));
  /* 10068692 jmp 0x100686bc */
  goto L_100686bc;
L_10068694:;
  /* 10068694 call dword ptr [0x1006e064] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e064))), 0x1006869au);
  /* 1006869a mov edi, eax */
  EDI = (EAX);
  /* 1006869c cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006869e je 0x1006878e */
  if (C.zf) goto L_1006878e;
  /* 100686a4 mov dword ptr [0x100767b0], 2 */
  w32((uint32_t)(0x100767b0), (0x2u));
  /* 100686ae jmp 0x10068742 */
  goto L_10068742;
L_100686b3:;
  /* 100686b3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100686b6 jne 0x1006873d */
  if (!C.zf) goto L_1006873d;
L_100686bc:;
  /* 100686bc cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100686be jne 0x100686cc */
  if (!C.zf) goto L_100686cc;
  /* 100686c0 call ebp */
  call_ind((uint32_t)(EBP), 0x100686c2u);
  /* 100686c2 mov esi, eax */
  ESI = (EAX);
  /* 100686c4 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100686c6 je 0x1006878e */
  if (C.zf) goto L_1006878e;
L_100686cc:;
  /* 100686cc cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100686cf mov eax, esi */
  EAX = (ESI);
  /* 100686d1 je 0x100686e1 */
  if (C.zf) goto L_100686e1;
L_100686d3:;
  /* 100686d3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100686d4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100686d5 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100686d8 jne 0x100686d3 */
  if (!C.zf) goto L_100686d3;
  /* 100686da inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100686db inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100686dc cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100686df jne 0x100686d3 */
  if (!C.zf) goto L_100686d3;
L_100686e1:;
  /* 100686e1 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100686e3 mov edi, dword ptr [0x1006e060] */
  EDI = (r32((uint32_t)(0x1006e060)));
  /* 100686e9 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 100686eb push ebx */
  push32((uint32_t)(EBX));
  /* 100686ec push ebx */
  push32((uint32_t)(EBX));
  /* 100686ed inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100686ee push ebx */
  push32((uint32_t)(EBX));
  /* 100686ef push ebx */
  push32((uint32_t)(EBX));
  /* 100686f0 push eax */
  push32((uint32_t)(EAX));
  /* 100686f1 push esi */
  push32((uint32_t)(ESI));
  /* 100686f2 push ebx */
  push32((uint32_t)(EBX));
  /* 100686f3 push ebx */
  push32((uint32_t)(EBX));
  /* 100686f4 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 100686f8 call edi */
  call_ind((uint32_t)(EDI), 0x100686fau);
  /* 100686fa mov ebp, eax */
  EBP = (EAX);
  /* 100686fc cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100686fe je 0x10068732 */
  if (C.zf) goto L_10068732;
  /* 10068700 push ebp */
  push32((uint32_t)(EBP));
  /* 10068701 call 0x1006a2af */
  push32(0x10068706u); f_1006a2af();
  /* 10068706 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068708 pop ecx */
  ECX = (pop32());
  /* 10068709 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 1006870d je 0x10068732 */
  if (C.zf) goto L_10068732;
  /* 1006870f push ebx */
  push32((uint32_t)(EBX));
  /* 10068710 push ebx */
  push32((uint32_t)(EBX));
  /* 10068711 push ebp */
  push32((uint32_t)(EBP));
  /* 10068712 push eax */
  push32((uint32_t)(EAX));
  /* 10068713 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 10068717 push esi */
  push32((uint32_t)(ESI));
  /* 10068718 push ebx */
  push32((uint32_t)(EBX));
  /* 10068719 push ebx */
  push32((uint32_t)(EBX));
  /* 1006871a call edi */
  call_ind((uint32_t)(EDI), 0x1006871cu);
  /* 1006871c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006871e jne 0x1006872e */
  if (!C.zf) goto L_1006872e;
  /* 10068720 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 10068724 call 0x1006a1c6 */
  push32(0x10068729u); f_1006a1c6();
  /* 10068729 pop ecx */
  ECX = (pop32());
  /* 1006872a mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_1006872e:;
  /* 1006872e mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_10068732:;
  /* 10068732 push esi */
  push32((uint32_t)(ESI));
  /* 10068733 call dword ptr [0x1006e05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e05c))), 0x10068739u);
  /* 10068739 mov eax, ebx */
  EAX = (EBX);
  /* 1006873b jmp 0x10068790 */
  goto L_10068790;
L_1006873d:;
  /* 1006873d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068740 jne 0x1006878e */
  if (!C.zf) goto L_1006878e;
L_10068742:;
  /* 10068742 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068744 jne 0x10068752 */
  if (!C.zf) goto L_10068752;
  /* 10068746 call dword ptr [0x1006e064] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e064))), 0x1006874cu);
  /* 1006874c mov edi, eax */
  EDI = (EAX);
  /* 1006874e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068750 je 0x1006878e */
  if (C.zf) goto L_1006878e;
L_10068752:;
  /* 10068752 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10068754 mov eax, edi */
  EAX = (EDI);
  /* 10068756 je 0x10068762 */
  if (C.zf) goto L_10068762;
L_10068758:;
  /* 10068758 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10068759 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006875b jne 0x10068758 */
  if (!C.zf) goto L_10068758;
  /* 1006875d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1006875e cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10068760 jne 0x10068758 */
  if (!C.zf) goto L_10068758;
L_10068762:;
  /* 10068762 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10068764 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10068765 mov ebp, eax */
  EBP = (EAX);
  /* 10068767 push ebp */
  push32((uint32_t)(EBP));
  /* 10068768 call 0x1006a2af */
  push32(0x1006876du); f_1006a2af();
  /* 1006876d mov esi, eax */
  ESI = (EAX);
  /* 1006876f pop ecx */
  ECX = (pop32());
  /* 10068770 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068772 jne 0x10068778 */
  if (!C.zf) goto L_10068778;
  /* 10068774 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10068776 jmp 0x10068783 */
  goto L_10068783;
L_10068778:;
  /* 10068778 push ebp */
  push32((uint32_t)(EBP));
  /* 10068779 push edi */
  push32((uint32_t)(EDI));
  /* 1006877a push esi */
  push32((uint32_t)(ESI));
  /* 1006877b call 0x1006a7e0 */
  push32(0x10068780u); f_1006a7e0();
  /* 10068780 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10068783:;
  /* 10068783 push edi */
  push32((uint32_t)(EDI));
  /* 10068784 call dword ptr [0x1006e058] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e058))), 0x1006878au);
  /* 1006878a mov eax, esi */
  EAX = (ESI);
  /* 1006878c jmp 0x10068790 */
  goto L_10068790;
L_1006878e:;
  /* 1006878e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10068790:;
  /* 10068790 pop edi */
  EDI = (pop32());
  /* 10068791 pop esi */
  ESI = (pop32());
  /* 10068792 pop ebp */
  EBP = (pop32());
  /* 10068793 pop ebx */
  EBX = (pop32());
  /* 10068794 pop ecx */
  ECX = (pop32());
  /* 10068795 pop ecx */
  ECX = (pop32());
  /* 10068796 ret  */
  ESPCHK(0x10068665u, _esp0);
  ESP += 4; return;
}

/* FUN_10008797 @ 0x10068797 (45 bytes, 17 insns) */
void f_10068797(void) {
  FTRACE(0x10068797u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10068797 push esi */
  push32((uint32_t)(ESI));
  /* 10068798 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1006879c push 0 */
  push32((uint32_t)(0x0u));
  /* 1006879e and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 100687a1 call dword ptr [0x1006e004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e004))), 0x100687a7u);
  /* 100687a7 cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100687ac jne 0x100687c2 */
  if (!C.zf) goto L_100687c2;
  /* 100687ae mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 100687b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100687b3 je 0x100687c2 */
  if (C.zf) goto L_100687c2;
  /* 100687b5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100687b7 mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 100687ba mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 100687bc mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 100687bf mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_100687c2:;
  /* 100687c2 pop esi */
  ESI = (pop32());
  /* 100687c3 ret  */
  ESPCHK(0x10068797u, _esp0);
  ESP += 4; return;
}

/* FUN_100087c4 @ 0x100687c4 (328 bytes, 115 insns) */
void f_100687c4(void) {
  FTRACE(0x100687c4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100687c4 push ebp */
  push32((uint32_t)(EBP));
  /* 100687c5 mov ebp, esp */
  EBP = (ESP);
  /* 100687c7 mov eax, 0x122c */
  EAX = (0x122cu);
  /* 100687cc call 0x1006aed0 */
  push32(0x100687d1u); f_1006aed0();
  /* 100687d1 lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 100687d7 push ebx */
  push32((uint32_t)(EBX));
  /* 100687d8 push eax */
  push32((uint32_t)(EAX));
  /* 100687d9 mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 100687e3 call dword ptr [0x1006e070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e070))), 0x100687e9u);
  /* 100687e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100687eb je 0x10068807 */
  if (C.zf) goto L_10068807;
  /* 100687ed cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100687f4 jne 0x10068807 */
  if (!C.zf) goto L_10068807;
  /* 100687f6 cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100687fd jb 0x10068807 */
  if (C.cf) goto L_10068807;
  /* 100687ff push 1 */
  push32((uint32_t)(0x1u));
  /* 10068801 pop eax */
  EAX = (pop32());
  /* 10068802 jmp 0x10068909 */
  goto L_10068909;
L_10068807:;
  /* 10068807 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 1006880d push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 10068812 push eax */
  push32((uint32_t)(EAX));
  /* 10068813 push 0x1006e1c8 */
  push32((uint32_t)(0x1006e1c8u));
  /* 10068818 call dword ptr [0x1006e06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e06c))), 0x1006881eu);
  /* 1006881e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10068820 je 0x100688f6 */
  if (C.zf) goto L_100688f6;
  /* 10068826 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10068828 lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 1006882e cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10068834 je 0x10068849 */
  if (C.zf) goto L_10068849;
L_10068836:;
  /* 10068836 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10068838 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006883a jl 0x10068844 */
  if ((C.sf!=C.of)) goto L_10068844;
  /* 1006883c cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006883e jg 0x10068844 */
  if ((!C.zf&&C.sf==C.of)) goto L_10068844;
  /* 10068840 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10068842 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_10068844:;
  /* 10068844 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10068845 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10068847 jne 0x10068836 */
  if (!C.zf) goto L_10068836;
L_10068849:;
  /* 10068849 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 1006884f push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10068851 push eax */
  push32((uint32_t)(EAX));
  /* 10068852 push 0x1006e1b0 */
  push32((uint32_t)(0x1006e1b0u));
  /* 10068857 call 0x1006ae90 */
  push32(0x1006885cu); f_1006ae90();
  /* 1006885c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006885f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10068861 jne 0x1006886b */
  if (!C.zf) goto L_1006886b;
  /* 10068863 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 10068869 jmp 0x100688b4 */
  goto L_100688b4;
L_1006886b:;
  /* 1006886b lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 10068871 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10068876 push eax */
  push32((uint32_t)(EAX));
  /* 10068877 push ebx */
  push32((uint32_t)(EBX));
  /* 10068878 call dword ptr [0x1006e054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e054))), 0x1006887eu);
  /* 1006887e cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10068884 lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 1006888a je 0x1006889f */
  if (C.zf) goto L_1006889f;
L_1006888c:;
  /* 1006888c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1006888e cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10068890 jl 0x1006889a */
  if ((C.sf!=C.of)) goto L_1006889a;
  /* 10068892 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10068894 jg 0x1006889a */
  if ((!C.zf&&C.sf==C.of)) goto L_1006889a;
  /* 10068896 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10068898 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_1006889a:;
  /* 1006889a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1006889b cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006889d jne 0x1006888c */
  if (!C.zf) goto L_1006888c;
L_1006889f:;
  /* 1006889f lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 100688a5 push eax */
  push32((uint32_t)(EAX));
  /* 100688a6 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 100688ac push eax */
  push32((uint32_t)(EAX));
  /* 100688ad call 0x1006ae10 */
  push32(0x100688b2u); f_1006ae10();
  /* 100688b2 pop ecx */
  ECX = (pop32());
  /* 100688b3 pop ecx */
  ECX = (pop32());
L_100688b4:;
  /* 100688b4 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100688b6 je 0x100688f6 */
  if (C.zf) goto L_100688f6;
  /* 100688b8 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 100688ba push eax */
  push32((uint32_t)(EAX));
  /* 100688bb call 0x1006ad50 */
  push32(0x100688c0u); f_1006ad50();
  /* 100688c0 pop ecx */
  ECX = (pop32());
  /* 100688c1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100688c3 pop ecx */
  ECX = (pop32());
  /* 100688c4 je 0x100688f6 */
  if (C.zf) goto L_100688f6;
  /* 100688c6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100688c7 mov ecx, eax */
  ECX = (EAX);
  /* 100688c9 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100688cb je 0x100688db */
  if (C.zf) goto L_100688db;
L_100688cd:;
  /* 100688cd cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100688d0 jne 0x100688d6 */
  if (!C.zf) goto L_100688d6;
  /* 100688d2 mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 100688d4 jmp 0x100688d7 */
  goto L_100688d7;
L_100688d6:;
  /* 100688d6 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_100688d7:;
  /* 100688d7 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100688d9 jne 0x100688cd */
  if (!C.zf) goto L_100688cd;
L_100688db:;
  /* 100688db push 0xa */
  push32((uint32_t)(0xau));
  /* 100688dd push ebx */
  push32((uint32_t)(EBX));
  /* 100688de push eax */
  push32((uint32_t)(EAX));
  /* 100688df call 0x1006ab15 */
  push32(0x100688e4u); f_1006ab15();
  /* 100688e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100688e7 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100688ea je 0x10068909 */
  if (C.zf) goto L_10068909;
  /* 100688ec cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100688ef je 0x10068909 */
  if (C.zf) goto L_10068909;
  /* 100688f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100688f4 je 0x10068909 */
  if (C.zf) goto L_10068909;
L_100688f6:;
  /* 100688f6 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 100688f9 push eax */
  push32((uint32_t)(EAX));
  /* 100688fa call 0x10068797 */
  push32(0x100688ffu); f_10068797();
  /* 100688ff cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10068903 pop ecx */
  ECX = (pop32());
  /* 10068904 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10068906 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10068909:;
  /* 10068909 pop ebx */
  EBX = (pop32());
  /* 1006890a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1006890b ret  */
  ESPCHK(0x100687c4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000890c @ 0x1006890c (93 bytes, 30 insns) */
void f_1006890c(void) {
  FTRACE(0x1006890cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006890c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006890e push 0 */
  push32((uint32_t)(0x0u));
  /* 10068910 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068914 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10068919 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 1006891c push eax */
  push32((uint32_t)(EAX));
  /* 1006891d call dword ptr [0x1006e078] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e078))), 0x10068923u);
  /* 10068923 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10068925 mov dword ptr [0x10077c24], eax */
  w32((uint32_t)(0x10077c24), (EAX));
  /* 1006892a je 0x10068962 */
  if (C.zf) goto L_10068962;
  /* 1006892c call 0x100687c4 */
  push32(0x10068931u); f_100687c4();
  /* 10068931 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068934 mov dword ptr [0x10077c28], eax */
  w32((uint32_t)(0x10077c28), (EAX));
  /* 10068939 jne 0x10068948 */
  if (!C.zf) goto L_10068948;
  /* 1006893b push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 10068940 call 0x1006aeff */
  push32(0x10068945u); f_1006aeff();
  /* 10068945 pop ecx */
  ECX = (pop32());
  /* 10068946 jmp 0x10068952 */
  goto L_10068952;
L_10068948:;
  /* 10068948 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006894b jne 0x10068965 */
  if (!C.zf) goto L_10068965;
  /* 1006894d call 0x1006b750 */
  push32(0x10068952u); f_1006b750();
L_10068952:;
  /* 10068952 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10068954 jne 0x10068965 */
  if (!C.zf) goto L_10068965;
  /* 10068956 push dword ptr [0x10077c24] */
  push32((uint32_t)(r32((uint32_t)(0x10077c24))));
  /* 1006895c call dword ptr [0x1006e074] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e074))), 0x10068962u);
L_10068962:;
  /* 10068962 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10068964 ret  */
  ESPCHK(0x1006890cu, _esp0);
  ESP += 4; return;
L_10068965:;
  /* 10068965 push 1 */
  push32((uint32_t)(0x1u));
  /* 10068967 pop eax */
  EAX = (pop32());
  /* 10068968 ret  */
  ESPCHK(0x1006890cu, _esp0);
  ESP += 4; return;
}

/* FUN_10008969 @ 0x10068969 (168 bytes, 56 insns) */
void f_10068969(void) {
  FTRACE(0x10068969u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10068969 mov eax, dword ptr [0x10077c28] */
  EAX = (r32((uint32_t)(0x10077c28)));
  /* 1006896e push esi */
  push32((uint32_t)(ESI));
  /* 1006896f cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068972 push edi */
  push32((uint32_t)(EDI));
  /* 10068973 jne 0x100689db */
  if (!C.zf) goto L_100689db;
  /* 10068975 push ebx */
  push32((uint32_t)(EBX));
  /* 10068976 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10068978 cmp dword ptr [0x100769d8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100769d8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006897e push ebp */
  push32((uint32_t)(EBP));
  /* 1006897f mov ebp, dword ptr [0x1006e080] */
  EBP = (r32((uint32_t)(0x1006e080)));
  /* 10068985 jle 0x100689c7 */
  if ((C.zf||C.sf!=C.of)) goto L_100689c7;
  /* 10068987 mov eax, dword ptr [0x100769dc] */
  EAX = (r32((uint32_t)(0x100769dc)));
  /* 1006898c mov edi, dword ptr [0x1006e07c] */
  EDI = (r32((uint32_t)(0x1006e07c)));
  /* 10068992 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_10068995:;
  /* 10068995 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1006899a push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1006899f push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 100689a1 call edi */
  call_ind((uint32_t)(EDI), 0x100689a3u);
  /* 100689a3 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 100689a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 100689aa push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 100689ac call edi */
  call_ind((uint32_t)(EDI), 0x100689aeu);
  /* 100689ae push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 100689b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 100689b3 push dword ptr [0x10077c24] */
  push32((uint32_t)(r32((uint32_t)(0x10077c24))));
  /* 100689b9 call ebp */
  call_ind((uint32_t)(EBP), 0x100689bbu);
  /* 100689bb add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100689be inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100689bf cmp ebx, dword ptr [0x100769d8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x100769d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100689c5 jl 0x10068995 */
  if ((C.sf!=C.of)) goto L_10068995;
L_100689c7:;
  /* 100689c7 push dword ptr [0x100769dc] */
  push32((uint32_t)(r32((uint32_t)(0x100769dc))));
  /* 100689cd push 0 */
  push32((uint32_t)(0x0u));
  /* 100689cf push dword ptr [0x10077c24] */
  push32((uint32_t)(r32((uint32_t)(0x10077c24))));
  /* 100689d5 call ebp */
  call_ind((uint32_t)(EBP), 0x100689d7u);
  /* 100689d7 pop ebp */
  EBP = (pop32());
  /* 100689d8 pop ebx */
  EBX = (pop32());
  /* 100689d9 jmp 0x10068a02 */
  goto L_10068a02;
L_100689db:;
  /* 100689db cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100689de jne 0x10068a02 */
  if (!C.zf) goto L_10068a02;
  /* 100689e0 mov edi, 0x10070e70 */
  EDI = (0x10070e70u);
  /* 100689e5 mov esi, edi */
  ESI = (EDI);
L_100689e7:;
  /* 100689e7 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 100689ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100689ec je 0x100689fc */
  if (C.zf) goto L_100689fc;
  /* 100689ee push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 100689f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 100689f5 push eax */
  push32((uint32_t)(EAX));
  /* 100689f6 call dword ptr [0x1006e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e07c))), 0x100689fcu);
L_100689fc:;
  /* 100689fc mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 100689fe cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068a00 jne 0x100689e7 */
  if (!C.zf) goto L_100689e7;
L_10068a02:;
  /* 10068a02 push dword ptr [0x10077c24] */
  push32((uint32_t)(r32((uint32_t)(0x10077c24))));
  /* 10068a08 call dword ptr [0x1006e074] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e074))), 0x10068a0eu);
  /* 10068a0e pop edi */
  EDI = (pop32());
  /* 10068a0f pop esi */
  ESI = (pop32());
  /* 10068a10 ret  */
  ESPCHK(0x10068969u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a11 @ 0x10068a11 (57 bytes, 18 insns) */
void f_10068a11(void) {
  FTRACE(0x10068a11u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10068a11 mov eax, dword ptr [0x10076660] */
  EAX = (r32((uint32_t)(0x10076660)));
  /* 10068a16 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068a19 je 0x10068a28 */
  if (C.zf) goto L_10068a28;
  /* 10068a1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10068a1d jne 0x10068a49 */
  if (!C.zf) goto L_10068a49;
  /* 10068a1f cmp dword ptr [0x10076664], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10076664))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068a26 jne 0x10068a49 */
  if (!C.zf) goto L_10068a49;
L_10068a28:;
  /* 10068a28 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10068a2d call 0x10068a4a */
  push32(0x10068a32u); f_10068a4a();
  /* 10068a32 mov eax, dword ptr [0x100767b4] */
  EAX = (r32((uint32_t)(0x100767b4)));
  /* 10068a37 pop ecx */
  ECX = (pop32());
  /* 10068a38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10068a3a je 0x10068a3e */
  if (C.zf) goto L_10068a3e;
  /* 10068a3c call eax */
  call_ind((uint32_t)(EAX), 0x10068a3eu);
L_10068a3e:;
  /* 10068a3e push 0xff */
  push32((uint32_t)(0xffu));
  /* 10068a43 call 0x10068a4a */
  push32(0x10068a48u); f_10068a4a();
  /* 10068a48 pop ecx */
  ECX = (pop32());
L_10068a49:;
  /* 10068a49 ret  */
  ESPCHK(0x10068a11u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a4a @ 0x10068a4a (339 bytes, 100 insns) */
void f_10068a4a(void) {
  FTRACE(0x10068a4au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10068a4a push ebp */
  push32((uint32_t)(EBP));
  /* 10068a4b mov ebp, esp */
  EBP = (ESP);
  /* 10068a4d sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10068a53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10068a56 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10068a58 mov eax, 0x100706c8 */
  EAX = (0x100706c8u);
L_10068a5d:;
  /* 10068a5d cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068a5f je 0x10068a6c */
  if (C.zf) goto L_10068a6c;
  /* 10068a61 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10068a64 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10068a65 cmp eax, 0x10070758 */
  { uint32_t _a=(EAX),_b=(0x10070758u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068a6a jl 0x10068a5d */
  if ((C.sf!=C.of)) goto L_10068a5d;
L_10068a6c:;
  /* 10068a6c push esi */
  push32((uint32_t)(ESI));
  /* 10068a6d mov esi, ecx */
  ESI = (ECX);
  /* 10068a6f shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 10068a72 cmp edx, dword ptr [esi + 0x100706c8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x100706c8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068a78 jne 0x10068b9a */
  if (!C.zf) goto L_10068b9a;
  /* 10068a7e mov eax, dword ptr [0x10076660] */
  EAX = (r32((uint32_t)(0x10076660)));
  /* 10068a83 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068a86 je 0x10068b74 */
  if (C.zf) goto L_10068b74;
  /* 10068a8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10068a8e jne 0x10068a9d */
  if (!C.zf) goto L_10068a9d;
  /* 10068a90 cmp dword ptr [0x10076664], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10076664))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068a97 je 0x10068b74 */
  if (C.zf) goto L_10068b74;
L_10068a9d:;
  /* 10068a9d cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068aa3 je 0x10068b9a */
  if (C.zf) goto L_10068b9a;
  /* 10068aa9 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10068aaf push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10068ab4 push eax */
  push32((uint32_t)(EAX));
  /* 10068ab5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10068ab7 call dword ptr [0x1006e054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e054))), 0x10068abdu);
  /* 10068abd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10068abf jne 0x10068ad4 */
  if (!C.zf) goto L_10068ad4;
  /* 10068ac1 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10068ac7 push 0x1006e4b8 */
  push32((uint32_t)(0x1006e4b8u));
  /* 10068acc push eax */
  push32((uint32_t)(EAX));
  /* 10068acd call 0x10069af0 */
  push32(0x10068ad2u); f_10069af0();
  /* 10068ad2 pop ecx */
  ECX = (pop32());
  /* 10068ad3 pop ecx */
  ECX = (pop32());
L_10068ad4:;
  /* 10068ad4 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10068ada push edi */
  push32((uint32_t)(EDI));
  /* 10068adb push eax */
  push32((uint32_t)(EAX));
  /* 10068adc lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 10068ae2 call 0x10069040 */
  push32(0x10068ae7u); f_10069040();
  /* 10068ae7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10068ae8 pop ecx */
  ECX = (pop32());
  /* 10068ae9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068aec jbe 0x10068b17 */
  if ((C.cf||C.zf)) goto L_10068b17;
  /* 10068aee lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10068af4 push eax */
  push32((uint32_t)(EAX));
  /* 10068af5 call 0x10069040 */
  push32(0x10068afau); f_10069040();
  /* 10068afa mov edi, eax */
  EDI = (EAX);
  /* 10068afc lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10068b02 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10068b05 push 3 */
  push32((uint32_t)(0x3u));
  /* 10068b07 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10068b09 push 0x1006e4b4 */
  push32((uint32_t)(0x1006e4b4u));
  /* 10068b0e push edi */
  push32((uint32_t)(EDI));
  /* 10068b0f call 0x1006be00 */
  push32(0x10068b14u); f_1006be00();
  /* 10068b14 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10068b17:;
  /* 10068b17 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10068b1d push 0x1006e498 */
  push32((uint32_t)(0x1006e498u));
  /* 10068b22 push eax */
  push32((uint32_t)(EAX));
  /* 10068b23 call 0x10069af0 */
  push32(0x10068b28u); f_10069af0();
  /* 10068b28 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10068b2e push edi */
  push32((uint32_t)(EDI));
  /* 10068b2f push eax */
  push32((uint32_t)(EAX));
  /* 10068b30 call 0x10069b00 */
  push32(0x10068b35u); f_10069b00();
  /* 10068b35 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10068b3b push 0x1006e494 */
  push32((uint32_t)(0x1006e494u));
  /* 10068b40 push eax */
  push32((uint32_t)(EAX));
  /* 10068b41 call 0x10069b00 */
  push32(0x10068b46u); f_10069b00();
  /* 10068b46 push dword ptr [esi + 0x100706cc] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x100706cc))));
  /* 10068b4c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10068b52 push eax */
  push32((uint32_t)(EAX));
  /* 10068b53 call 0x10069b00 */
  push32(0x10068b58u); f_10069b00();
  /* 10068b58 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10068b5d lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10068b63 push 0x1006e46c */
  push32((uint32_t)(0x1006e46cu));
  /* 10068b68 push eax */
  push32((uint32_t)(EAX));
  /* 10068b69 call 0x1006bd74 */
  push32(0x10068b6eu); f_1006bd74();
  /* 10068b6e add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10068b71 pop edi */
  EDI = (pop32());
  /* 10068b72 jmp 0x10068b9a */
  goto L_10068b9a;
L_10068b74:;
  /* 10068b74 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10068b77 lea esi, [esi + 0x100706cc] */
  ESI = ((uint32_t)(ESI + 0x100706cc));
  /* 10068b7d push 0 */
  push32((uint32_t)(0x0u));
  /* 10068b7f push eax */
  push32((uint32_t)(EAX));
  /* 10068b80 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10068b82 call 0x10069040 */
  push32(0x10068b87u); f_10069040();
  /* 10068b87 pop ecx */
  ECX = (pop32());
  /* 10068b88 push eax */
  push32((uint32_t)(EAX));
  /* 10068b89 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10068b8b push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10068b8d call dword ptr [0x1006e044] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e044))), 0x10068b93u);
  /* 10068b93 push eax */
  push32((uint32_t)(EAX));
  /* 10068b94 call dword ptr [0x1006e084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e084))), 0x10068b9au);
L_10068b9a:;
  /* 10068b9a pop esi */
  ESI = (pop32());
  /* 10068b9b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10068b9c ret  */
  ESPCHK(0x10068a4au, _esp0);
  ESP += 4; return;
}

/* FUN_10008b9d @ 0x10068b9d (101 bytes, 34 insns) */
void f_10068b9d(void) {
  FTRACE(0x10068b9du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10068b9d push esi */
  push32((uint32_t)(ESI));
  /* 10068b9e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10068ba2 cmp esi, dword ptr [0x10077d40] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10077d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068ba8 jae 0x10068bea */
  if (!C.cf) goto L_10068bea;
  /* 10068baa mov ecx, esi */
  ECX = (ESI);
  /* 10068bac mov eax, esi */
  EAX = (ESI);
  /* 10068bae sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10068bb1 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10068bb4 mov ecx, dword ptr [ecx*4 + 0x10077c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10077c40)));
  /* 10068bbb lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10068bbe test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10068bc3 je 0x10068bea */
  if (C.zf) goto L_10068bea;
  /* 10068bc5 push edi */
  push32((uint32_t)(EDI));
  /* 10068bc6 push esi */
  push32((uint32_t)(ESI));
  /* 10068bc7 call 0x1006c044 */
  push32(0x10068bccu); f_1006c044();
  /* 10068bcc push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10068bd0 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10068bd4 push esi */
  push32((uint32_t)(ESI));
  /* 10068bd5 call 0x10068c02 */
  push32(0x10068bdau); f_10068c02();
  /* 10068bda push esi */
  push32((uint32_t)(ESI));
  /* 10068bdb mov edi, eax */
  EDI = (EAX);
  /* 10068bdd call 0x1006c0a3 */
  push32(0x10068be2u); f_1006c0a3();
  /* 10068be2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10068be5 mov eax, edi */
  EAX = (EDI);
  /* 10068be7 pop edi */
  EDI = (pop32());
  /* 10068be8 pop esi */
  ESI = (pop32());
  /* 10068be9 ret  */
  ESPCHK(0x10068b9du, _esp0);
  ESP += 4; return;
L_10068bea:;
  /* 10068bea call 0x1006bf71 */
  push32(0x10068befu); f_1006bf71();
  /* 10068bef mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10068bf5 call 0x1006bf7a */
  push32(0x10068bfau); f_1006bf7a();
  /* 10068bfa and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10068bfd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10068c00 pop esi */
  ESI = (pop32());
  /* 10068c01 ret  */
  ESPCHK(0x10068b9du, _esp0);
  ESP += 4; return;
}

/* FUN_10008c02 @ 0x10068c02 (115 bytes, 41 insns) */
void f_10068c02(void) {
  FTRACE(0x10068c02u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10068c02 push esi */
  push32((uint32_t)(ESI));
  /* 10068c03 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10068c07 push edi */
  push32((uint32_t)(EDI));
  /* 10068c08 push esi */
  push32((uint32_t)(ESI));
  /* 10068c09 call 0x1006c002 */
  push32(0x10068c0eu); f_1006c002();
  /* 10068c0e cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068c11 pop ecx */
  ECX = (pop32());
  /* 10068c12 jne 0x10068c21 */
  if (!C.zf) goto L_10068c21;
  /* 10068c14 call 0x1006bf71 */
  push32(0x10068c19u); f_1006bf71();
  /* 10068c19 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10068c1f jmp 0x10068c4e */
  goto L_10068c4e;
L_10068c21:;
  /* 10068c21 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 10068c25 push 0 */
  push32((uint32_t)(0x0u));
  /* 10068c27 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10068c2b push eax */
  push32((uint32_t)(EAX));
  /* 10068c2c call dword ptr [0x1006e000] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e000))), 0x10068c32u);
  /* 10068c32 mov edi, eax */
  EDI = (EAX);
  /* 10068c34 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068c37 jne 0x10068c41 */
  if (!C.zf) goto L_10068c41;
  /* 10068c39 call dword ptr [0x1006e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e03c))), 0x10068c3fu);
  /* 10068c3f jmp 0x10068c43 */
  goto L_10068c43;
L_10068c41:;
  /* 10068c41 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10068c43:;
  /* 10068c43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10068c45 je 0x10068c53 */
  if (C.zf) goto L_10068c53;
  /* 10068c47 push eax */
  push32((uint32_t)(EAX));
  /* 10068c48 call 0x1006befe */
  push32(0x10068c4du); f_1006befe();
  /* 10068c4d pop ecx */
  ECX = (pop32());
L_10068c4e:;
  /* 10068c4e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10068c51 jmp 0x10068c72 */
  goto L_10068c72;
L_10068c53:;
  /* 10068c53 mov ecx, esi */
  ECX = (ESI);
  /* 10068c55 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 10068c58 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10068c5b mov eax, esi */
  EAX = (ESI);
  /* 10068c5d mov ecx, dword ptr [ecx*4 + 0x10077c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10077c40)));
  /* 10068c64 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10068c67 and byte ptr [ecx + eax*4 + 4], 0xfd */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0xfdu); w8((uint32_t)(ECX + EAX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 10068c6c lea eax, [ecx + eax*4 + 4] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 10068c70 mov eax, edi */
  EAX = (EDI);
L_10068c72:;
  /* 10068c72 pop edi */
  EDI = (pop32());
  /* 10068c73 pop esi */
  ESI = (pop32());
  /* 10068c74 ret  */
  ESPCHK(0x10068c02u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c75 @ 0x10068c75 (101 bytes, 34 insns) */
void f_10068c75(void) {
  FTRACE(0x10068c75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10068c75 push esi */
  push32((uint32_t)(ESI));
  /* 10068c76 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10068c7a cmp esi, dword ptr [0x10077d40] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10077d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068c80 jae 0x10068cc2 */
  if (!C.cf) goto L_10068cc2;
  /* 10068c82 mov ecx, esi */
  ECX = (ESI);
  /* 10068c84 mov eax, esi */
  EAX = (ESI);
  /* 10068c86 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10068c89 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10068c8c mov ecx, dword ptr [ecx*4 + 0x10077c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10077c40)));
  /* 10068c93 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10068c96 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10068c9b je 0x10068cc2 */
  if (C.zf) goto L_10068cc2;
  /* 10068c9d push edi */
  push32((uint32_t)(EDI));
  /* 10068c9e push esi */
  push32((uint32_t)(ESI));
  /* 10068c9f call 0x1006c044 */
  push32(0x10068ca4u); f_1006c044();
  /* 10068ca4 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10068ca8 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10068cac push esi */
  push32((uint32_t)(ESI));
  /* 10068cad call 0x10068cda */
  push32(0x10068cb2u); f_10068cda();
  /* 10068cb2 push esi */
  push32((uint32_t)(ESI));
  /* 10068cb3 mov edi, eax */
  EDI = (EAX);
  /* 10068cb5 call 0x1006c0a3 */
  push32(0x10068cbau); f_1006c0a3();
  /* 10068cba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10068cbd mov eax, edi */
  EAX = (EDI);
  /* 10068cbf pop edi */
  EDI = (pop32());
  /* 10068cc0 pop esi */
  ESI = (pop32());
  /* 10068cc1 ret  */
  ESPCHK(0x10068c75u, _esp0);
  ESP += 4; return;
L_10068cc2:;
  /* 10068cc2 call 0x1006bf71 */
  push32(0x10068cc7u); f_1006bf71();
  /* 10068cc7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10068ccd call 0x1006bf7a */
  push32(0x10068cd2u); f_1006bf7a();
  /* 10068cd2 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10068cd5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10068cd8 pop esi */
  ESI = (pop32());
  /* 10068cd9 ret  */
  ESPCHK(0x10068c75u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cda @ 0x10068cda (395 bytes, 135 insns) */
void f_10068cda(void) {
  FTRACE(0x10068cdau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10068cda push ebp */
  push32((uint32_t)(EBP));
  /* 10068cdb mov ebp, esp */
  EBP = (ESP);
  /* 10068cdd sub esp, 0x414 */
  { uint32_t _a=(ESP),_b=(0x414u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10068ce3 push ebx */
  push32((uint32_t)(EBX));
  /* 10068ce4 push esi */
  push32((uint32_t)(ESI));
  /* 10068ce5 push edi */
  push32((uint32_t)(EDI));
  /* 10068ce6 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10068ce8 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068ceb mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 10068cee mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 10068cf1 jne 0x10068cfa */
  if (!C.zf) goto L_10068cfa;
L_10068cf3:;
  /* 10068cf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10068cf5 jmp 0x10068e60 */
  goto L_10068e60;
L_10068cfa:;
  /* 10068cfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10068cfd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10068d00 lea ebx, [eax*4 + 0x10077c40] */
  EBX = ((uint32_t)(EAX*4 + 0x10077c40));
  /* 10068d07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10068d0a and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10068d0d lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 10068d10 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10068d12 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 10068d15 test byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 10068d1a je 0x10068d2a */
  if (C.zf) goto L_10068d2a;
  /* 10068d1c push 2 */
  push32((uint32_t)(0x2u));
  /* 10068d1e push edi */
  push32((uint32_t)(EDI));
  /* 10068d1f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10068d22 call 0x10068c02 */
  push32(0x10068d27u); f_10068c02();
  /* 10068d27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10068d2a:;
  /* 10068d2a mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10068d2c add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10068d2e test byte ptr [eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 10068d32 je 0x10068df9 */
  if (C.zf) goto L_10068df9;
  /* 10068d38 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10068d3b cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068d3e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10068d41 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 10068d44 jbe 0x10068e34 */
  if ((C.cf||C.zf)) goto L_10068e34;
L_10068d4a:;
  /* 10068d4a lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
L_10068d50:;
  /* 10068d50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10068d53 sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10068d56 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068d59 jae 0x10068d84 */
  if (!C.cf) goto L_10068d84;
  /* 10068d5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10068d5e inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10068d61 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 10068d63 cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10068d66 jne 0x10068d6f */
  if (!C.zf) goto L_10068d6f;
  /* 10068d68 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 10068d6b mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 10068d6e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10068d6f:;
  /* 10068d6f mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10068d71 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10068d72 mov ecx, eax */
  ECX = (EAX);
  /* 10068d74 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10068d7a sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10068d7c cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068d82 jl 0x10068d50 */
  if ((C.sf!=C.of)) goto L_10068d50;
L_10068d84:;
  /* 10068d84 mov edi, eax */
  EDI = (EAX);
  /* 10068d86 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10068d8c sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10068d8e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10068d91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10068d93 push eax */
  push32((uint32_t)(EAX));
  /* 10068d94 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10068d9a push edi */
  push32((uint32_t)(EDI));
  /* 10068d9b push eax */
  push32((uint32_t)(EAX));
  /* 10068d9c mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10068d9e push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 10068da1 call dword ptr [0x1006e084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e084))), 0x10068da7u);
  /* 10068da7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10068da9 je 0x10068dee */
  if (C.zf) goto L_10068dee;
  /* 10068dab mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10068dae add dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 10068db1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068db3 jl 0x10068dc0 */
  if ((C.sf!=C.of)) goto L_10068dc0;
  /* 10068db5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10068db8 sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10068dbb cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068dbe jb 0x10068d4a */
  if (C.cf) goto L_10068d4a;
L_10068dc0:;
  /* 10068dc0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10068dc2:;
  /* 10068dc2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10068dc5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068dc7 jne 0x10068e5d */
  if (!C.zf) goto L_10068e5d;
  /* 10068dcd cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068dd0 je 0x10068e34 */
  if (C.zf) goto L_10068e34;
  /* 10068dd2 push 5 */
  push32((uint32_t)(0x5u));
  /* 10068dd4 pop esi */
  ESI = (pop32());
  /* 10068dd5 cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068dd8 jne 0x10068e26 */
  if (!C.zf) goto L_10068e26;
  /* 10068dda call 0x1006bf71 */
  push32(0x10068ddfu); f_1006bf71();
  /* 10068ddf mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10068de5 call 0x1006bf7a */
  push32(0x10068deau); f_1006bf7a();
  /* 10068dea mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10068dec jmp 0x10068e2f */
  goto L_10068e2f;
L_10068dee:;
  /* 10068dee call dword ptr [0x1006e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e03c))), 0x10068df4u);
  /* 10068df4 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10068df7 jmp 0x10068dc0 */
  goto L_10068dc0;
L_10068df9:;
  /* 10068df9 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 10068dfc push edi */
  push32((uint32_t)(EDI));
  /* 10068dfd push ecx */
  push32((uint32_t)(ECX));
  /* 10068dfe push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10068e01 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10068e04 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 10068e06 call dword ptr [0x1006e084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e084))), 0x10068e0cu);
  /* 10068e0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10068e0e je 0x10068e1b */
  if (C.zf) goto L_10068e1b;
  /* 10068e10 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10068e13 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 10068e16 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10068e19 jmp 0x10068dc2 */
  goto L_10068dc2;
L_10068e1b:;
  /* 10068e1b call dword ptr [0x1006e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e03c))), 0x10068e21u);
  /* 10068e21 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10068e24 jmp 0x10068dc2 */
  goto L_10068dc2;
L_10068e26:;
  /* 10068e26 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10068e29 call 0x1006befe */
  push32(0x10068e2eu); f_1006befe();
  /* 10068e2e pop ecx */
  ECX = (pop32());
L_10068e2f:;
  /* 10068e2f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10068e32 jmp 0x10068e60 */
  goto L_10068e60;
L_10068e34:;
  /* 10068e34 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10068e36 test byte ptr [eax + esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10068e3b je 0x10068e49 */
  if (C.zf) goto L_10068e49;
  /* 10068e3d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10068e40 cmp byte ptr [eax], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10068e43 je 0x10068cf3 */
  if (C.zf) goto L_10068cf3;
L_10068e49:;
  /* 10068e49 call 0x1006bf71 */
  push32(0x10068e4eu); f_1006bf71();
  /* 10068e4e mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 10068e54 call 0x1006bf7a */
  push32(0x10068e59u); f_1006bf7a();
  /* 10068e59 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 10068e5b jmp 0x10068e2f */
  goto L_10068e2f;
L_10068e5d:;
  /* 10068e5d sub eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10068e60:;
  /* 10068e60 pop edi */
  EDI = (pop32());
  /* 10068e61 pop esi */
  ESI = (pop32());
  /* 10068e62 pop ebx */
  EBX = (pop32());
  /* 10068e63 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10068e64 ret  */
  ESPCHK(0x10068cdau, _esp0);
  ESP += 4; return;
}

/* FUN_10008e65 @ 0x10068e65 (68 bytes, 19 insns) */
void f_10068e65(void) {
  FTRACE(0x10068e65u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10068e65 inc dword ptr [0x100767b8] */
  { uint32_t _r=(r32((uint32_t)(0x100767b8)))+1; w32((uint32_t)(0x100767b8), (_r)); fl_inc(_r,32); }
  /* 10068e6b push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10068e70 call 0x1006a2af */
  push32(0x10068e75u); f_1006a2af();
  /* 10068e75 pop ecx */
  ECX = (pop32());
  /* 10068e76 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10068e7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10068e7c mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10068e7f je 0x10068e8e */
  if (C.zf) goto L_10068e8e;
  /* 10068e81 or dword ptr [ecx + 0xc], 8 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x8u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 10068e85 mov dword ptr [ecx + 0x18], 0x1000 */
  w32((uint32_t)(ECX + 0x18), (0x1000u));
  /* 10068e8c jmp 0x10068e9f */
  goto L_10068e9f;
L_10068e8e:;
  /* 10068e8e or dword ptr [ecx + 0xc], 4 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x4u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 10068e92 lea eax, [ecx + 0x14] */
  EAX = ((uint32_t)(ECX + 0x14));
  /* 10068e95 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10068e98 mov dword ptr [ecx + 0x18], 2 */
  w32((uint32_t)(ECX + 0x18), (0x2u));
L_10068e9f:;
  /* 10068e9f mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 10068ea2 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10068ea6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10068ea8 ret  */
  ESPCHK(0x10068e65u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ea9 @ 0x10068ea9 (41 bytes, 13 insns) */
void f_10068ea9(void) {
  FTRACE(0x10068ea9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10068ea9 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10068ead cmp eax, dword ptr [0x10077d40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10077d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068eb3 jb 0x10068eb8 */
  if (C.cf) goto L_10068eb8;
  /* 10068eb5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10068eb7 ret  */
  ESPCHK(0x10068ea9u, _esp0);
  ESP += 4; return;
L_10068eb8:;
  /* 10068eb8 mov ecx, eax */
  ECX = (EAX);
  /* 10068eba and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10068ebd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10068ec0 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10068ec3 mov ecx, dword ptr [ecx*4 + 0x10077c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10077c40)));
  /* 10068eca mov al, byte ptr [ecx + eax*4 + 4] */
  AL = (r8((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 10068ece and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10068ed1 ret  */
  ESPCHK(0x10068ea9u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f8e @ 0x10068f8e (47 bytes, 17 insns) */
void f_10068f8e(void) {
  FTRACE(0x10068f8eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10068f8e mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10068f92 mov ecx, 0x10070758 */
  ECX = (0x10070758u);
  /* 10068f97 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068f99 jb 0x10068fb2 */
  if (C.cf) goto L_10068fb2;
  /* 10068f9b cmp eax, 0x100709b8 */
  { uint32_t _a=(EAX),_b=(0x100709b8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068fa0 ja 0x10068fb2 */
  if ((!C.cf&&!C.zf)) goto L_10068fb2;
  /* 10068fa2 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10068fa4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10068fa7 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10068faa push eax */
  push32((uint32_t)(EAX));
  /* 10068fab call 0x1006a013 */
  push32(0x10068fb0u); f_1006a013();
  /* 10068fb0 pop ecx */
  ECX = (pop32());
  /* 10068fb1 ret  */
  ESPCHK(0x10068f8eu, _esp0);
  ESP += 4; return;
L_10068fb2:;
  /* 10068fb2 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10068fb5 push eax */
  push32((uint32_t)(EAX));
  /* 10068fb6 call dword ptr [0x1006e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e00c))), 0x10068fbcu);
  /* 10068fbc ret  */
  ESPCHK(0x10068f8eu, _esp0);
  ESP += 4; return;
}

/* FUN_10008fbd @ 0x10068fbd (35 bytes, 13 insns) */
void f_10068fbd(void) {
  FTRACE(0x10068fbdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10068fbd mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10068fc1 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068fc4 jge 0x10068fd1 */
  if ((C.sf==C.of)) goto L_10068fd1;
  /* 10068fc6 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10068fc9 push eax */
  push32((uint32_t)(EAX));
  /* 10068fca call 0x1006a013 */
  push32(0x10068fcfu); f_1006a013();
  /* 10068fcf pop ecx */
  ECX = (pop32());
  /* 10068fd0 ret  */
  ESPCHK(0x10068fbdu, _esp0);
  ESP += 4; return;
L_10068fd1:;
  /* 10068fd1 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10068fd5 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10068fd8 push eax */
  push32((uint32_t)(EAX));
  /* 10068fd9 call dword ptr [0x1006e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e00c))), 0x10068fdfu);
  /* 10068fdf ret  */
  ESPCHK(0x10068fbdu, _esp0);
  ESP += 4; return;
}

/* FUN_10008fe0 @ 0x10068fe0 (47 bytes, 17 insns) */
void f_10068fe0(void) {
  FTRACE(0x10068fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10068fe0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10068fe4 mov ecx, 0x10070758 */
  ECX = (0x10070758u);
  /* 10068fe9 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068feb jb 0x10069004 */
  if (C.cf) goto L_10069004;
  /* 10068fed cmp eax, 0x100709b8 */
  { uint32_t _a=(EAX),_b=(0x100709b8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10068ff2 ja 0x10069004 */
  if ((!C.cf&&!C.zf)) goto L_10069004;
  /* 10068ff4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10068ff6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10068ff9 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10068ffc push eax */
  push32((uint32_t)(EAX));
  /* 10068ffd call 0x1006a074 */
  push32(0x10069002u); f_1006a074();
  /* 10069002 pop ecx */
  ECX = (pop32());
  /* 10069003 ret  */
  ESPCHK(0x10068fe0u, _esp0);
  ESP += 4; return;
L_10069004:;
  /* 10069004 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10069007 push eax */
  push32((uint32_t)(EAX));
  /* 10069008 call dword ptr [0x1006e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e008))), 0x1006900eu);
  /* 1006900e ret  */
  ESPCHK(0x10068fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000900f @ 0x1006900f (35 bytes, 13 insns) */
void f_1006900f(void) {
  FTRACE(0x1006900fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006900f mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10069013 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10069016 jge 0x10069023 */
  if ((C.sf==C.of)) goto L_10069023;
  /* 10069018 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006901b push eax */
  push32((uint32_t)(EAX));
  /* 1006901c call 0x1006a074 */
  push32(0x10069021u); f_1006a074();
  /* 10069021 pop ecx */
  ECX = (pop32());
  /* 10069022 ret  */
  ESPCHK(0x1006900fu, _esp0);
  ESP += 4; return;
L_10069023:;
  /* 10069023 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10069027 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006902a push eax */
  push32((uint32_t)(EAX));
  /* 1006902b call dword ptr [0x1006e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e008))), 0x10069031u);
  /* 10069031 ret  */
  ESPCHK(0x1006900fu, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10069040 (123 bytes, 44 insns) */
void f_10069040(void) {
  FTRACE(0x10069040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10069040 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10069044 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1006904a je 0x10069060 */
  if (C.zf) goto L_10069060;
L_1006904c:;
  /* 1006904c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1006904e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1006904f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10069051 je 0x10069093 */
  if (C.zf) goto L_10069093;
  /* 10069053 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10069059 jne 0x1006904c */
  if (!C.zf) goto L_1006904c;
  /* 1006905b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10069060:;
  /* 10069060 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10069062 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10069067 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10069069 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1006906c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1006906e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10069071 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10069076 je 0x10069060 */
  if (C.zf) goto L_10069060;
  /* 10069078 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1006907b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1006907d je 0x100690b1 */
  if (C.zf) goto L_100690b1;
  /* 1006907f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10069081 je 0x100690a7 */
  if (C.zf) goto L_100690a7;
  /* 10069083 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10069088 je 0x1006909d */
  if (C.zf) goto L_1006909d;
  /* 1006908a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1006908f je 0x10069093 */
  if (C.zf) goto L_10069093;
  /* 10069091 jmp 0x10069060 */
  goto L_10069060;
L_10069093:;
  /* 10069093 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10069096 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1006909a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006909c ret  */
  ESPCHK(0x10069040u, _esp0);
  ESP += 4; return;
L_1006909d:;
  /* 1006909d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 100690a0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100690a4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100690a6 ret  */
  ESPCHK(0x10069040u, _esp0);
  ESP += 4; return;
L_100690a7:;
  /* 100690a7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 100690aa mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100690ae sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100690b0 ret  */
  ESPCHK(0x10069040u, _esp0);
  ESP += 4; return;
L_100690b1:;
  /* 100690b1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 100690b4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100690b8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100690ba ret  */
  ESPCHK(0x10069040u, _esp0);
  ESP += 4; return;
}

/* FUN_100090bb @ 0x100690bb (89 bytes, 39 insns) */
void f_100690bb(void) {
  FTRACE(0x100690bbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100690bb push ebp */
  push32((uint32_t)(EBP));
  /* 100690bc mov ebp, esp */
  EBP = (ESP);
  /* 100690be push ebx */
  push32((uint32_t)(EBX));
  /* 100690bf push esi */
  push32((uint32_t)(ESI));
  /* 100690c0 mov esi, 0x100769c4 */
  ESI = (0x100769c4u);
  /* 100690c5 push edi */
  push32((uint32_t)(EDI));
  /* 100690c6 push esi */
  push32((uint32_t)(ESI));
  /* 100690c7 call dword ptr [0x1006e090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e090))), 0x100690cdu);
  /* 100690cd mov edi, dword ptr [0x1006e08c] */
  EDI = (r32((uint32_t)(0x1006e08c)));
  /* 100690d3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100690d5 cmp dword ptr [0x100769c0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100769c0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100690db je 0x100690eb */
  if (C.zf) goto L_100690eb;
  /* 100690dd push esi */
  push32((uint32_t)(ESI));
  /* 100690de call edi */
  call_ind((uint32_t)(EDI), 0x100690e0u);
  /* 100690e0 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100690e2 call 0x1006a013 */
  push32(0x100690e7u); f_1006a013();
  /* 100690e7 pop ecx */
  ECX = (pop32());
  /* 100690e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 100690ea pop ebx */
  EBX = (pop32());
L_100690eb:;
  /* 100690eb push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100690ee push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100690f1 call 0x10069114 */
  push32(0x100690f6u); f_10069114();
  /* 100690f6 pop ecx */
  ECX = (pop32());
  /* 100690f7 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 100690fa test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100690fc pop ecx */
  ECX = (pop32());
  /* 100690fd je 0x10069109 */
  if (C.zf) goto L_10069109;
  /* 100690ff push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10069101 call 0x1006a074 */
  push32(0x10069106u); f_1006a074();
  /* 10069106 pop ecx */
  ECX = (pop32());
  /* 10069107 jmp 0x1006910c */
  goto L_1006910c;
L_10069109:;
  /* 10069109 push esi */
  push32((uint32_t)(ESI));
  /* 1006910a call edi */
  call_ind((uint32_t)(EDI), 0x1006910cu);
L_1006910c:;
  /* 1006910c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1006910f pop edi */
  EDI = (pop32());
  /* 10069110 pop esi */
  ESI = (pop32());
  /* 10069111 pop ebx */
  EBX = (pop32());
  /* 10069112 pop ebp */
  EBP = (pop32());
  /* 10069113 ret  */
  ESPCHK(0x100690bbu, _esp0);
  ESP += 4; return;
}

/* FUN_10009114 @ 0x10069114 (105 bytes, 38 insns) */
void f_10069114(void) {
  FTRACE(0x10069114u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10069114 push ebp */
  push32((uint32_t)(EBP));
  /* 10069115 mov ebp, esp */
  EBP = (ESP);
  /* 10069117 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006911a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006911c jne 0x10069120 */
  if (!C.zf) goto L_10069120;
  /* 1006911e pop ebp */
  EBP = (pop32());
  /* 1006911f ret  */
  ESPCHK(0x10069114u, _esp0);
  ESP += 4; return;
L_10069120:;
  /* 10069120 cmp dword ptr [0x10076848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10076848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10069127 jne 0x1006913b */
  if (!C.zf) goto L_1006913b;
  /* 10069129 mov cx, word ptr [ebp + 0xc] */
  CX = (r16((uint32_t)(EBP + 0xc)));
  /* 1006912d cmp cx, 0xff */
  { uint32_t _a=(CX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10069132 ja 0x1006916d */
  if ((!C.cf&&!C.zf)) goto L_1006916d;
  /* 10069134 push 1 */
  push32((uint32_t)(0x1u));
  /* 10069136 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10069138 pop eax */
  EAX = (pop32());
  /* 10069139 pop ebp */
  EBP = (pop32());
  /* 1006913a ret  */
  ESPCHK(0x10069114u, _esp0);
  ESP += 4; return;
L_1006913b:;
  /* 1006913b lea ecx, [ebp + 8] */
  ECX = ((uint32_t)(EBP + 0x8));
  /* 1006913e and dword ptr [ebp + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))&(0x0u); w32((uint32_t)(EBP + 0x8), (_r)); fl_logic(_r,32); }
  /* 10069142 push ecx */
  push32((uint32_t)(ECX));
  /* 10069143 push 0 */
  push32((uint32_t)(0x0u));
  /* 10069145 push dword ptr [0x10070bf0] */
  push32((uint32_t)(r32((uint32_t)(0x10070bf0))));
  /* 1006914b push eax */
  push32((uint32_t)(EAX));
  /* 1006914c lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1006914f push 1 */
  push32((uint32_t)(0x1u));
  /* 10069151 push eax */
  push32((uint32_t)(EAX));
  /* 10069152 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10069157 push dword ptr [0x10076858] */
  push32((uint32_t)(r32((uint32_t)(0x10076858))));
  /* 1006915d call dword ptr [0x1006e060] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e060))), 0x10069163u);
  /* 10069163 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10069165 je 0x1006916d */
  if (C.zf) goto L_1006916d;
  /* 10069167 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006916b je 0x1006917b */
  if (C.zf) goto L_1006917b;
L_1006916d:;
  /* 1006916d call 0x1006bf71 */
  push32(0x10069172u); f_1006bf71();
  /* 10069172 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10069178 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1006917b:;
  /* 1006917b pop ebp */
  EBP = (pop32());
  /* 1006917c ret  */
  ESPCHK(0x10069114u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x10069180 (104 bytes, 43 insns) */
void f_10069180(void) {
  FTRACE(0x10069180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10069180 push ebx */
  push32((uint32_t)(EBX));
  /* 10069181 push esi */
  push32((uint32_t)(ESI));
  /* 10069182 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10069186 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10069188 jne 0x100691a2 */
  if (!C.zf) goto L_100691a2;
  /* 1006918a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1006918e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10069192 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10069194 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10069196 mov ebx, eax */
  EBX = (EAX);
  /* 10069198 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1006919c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1006919e mov edx, ebx */
  EDX = (EBX);
  /* 100691a0 jmp 0x100691e3 */
  goto L_100691e3;
L_100691a2:;
  /* 100691a2 mov ecx, eax */
  ECX = (EAX);
  /* 100691a4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 100691a8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 100691ac mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_100691b0:;
  /* 100691b0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 100691b2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 100691b4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 100691b6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 100691b8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100691ba jne 0x100691b0 */
  if (!C.zf) goto L_100691b0;
  /* 100691bc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100691be mov esi, eax */
  ESI = (EAX);
  /* 100691c0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 100691c4 mov ecx, eax */
  ECX = (EAX);
  /* 100691c6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 100691ca mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 100691cc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100691ce jb 0x100691de */
  if (C.cf) goto L_100691de;
  /* 100691d0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100691d4 ja 0x100691de */
  if ((!C.cf&&!C.zf)) goto L_100691de;
  /* 100691d6 jb 0x100691df */
  if (C.cf) goto L_100691df;
  /* 100691d8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100691dc jbe 0x100691df */
  if ((C.cf||C.zf)) goto L_100691df;
L_100691de:;
  /* 100691de dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_100691df:;
  /* 100691df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100691e1 mov eax, esi */
  EAX = (ESI);
L_100691e3:;
  /* 100691e3 pop esi */
  ESI = (pop32());
  /* 100691e4 pop ebx */
  EBX = (pop32());
  /* 100691e5 ret 0x10 */
  ESPCHK(0x10069180u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x100691f0 (117 bytes, 44 insns) */
void f_100691f0(void) {
  FTRACE(0x100691f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100691f0 push ebx */
  push32((uint32_t)(EBX));
  /* 100691f1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 100691f5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100691f7 jne 0x10069211 */
  if (!C.zf) goto L_10069211;
  /* 100691f9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 100691fd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10069201 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10069203 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10069205 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10069209 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1006920b mov eax, edx */
  EAX = (EDX);
  /* 1006920d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1006920f jmp 0x10069261 */
  goto L_10069261;
L_10069211:;
  /* 10069211 mov ecx, eax */
  ECX = (EAX);
  /* 10069213 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 10069217 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1006921b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1006921f:;
  /* 1006921f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10069221 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10069223 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10069225 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10069227 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10069229 jne 0x1006921f */
  if (!C.zf) goto L_1006921f;
  /* 1006922b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1006922d mov ecx, eax */
  ECX = (EAX);
  /* 1006922f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10069233 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 10069234 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10069238 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006923a jb 0x1006924a */
  if (C.cf) goto L_1006924a;
  /* 1006923c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10069240 ja 0x1006924a */
  if ((!C.cf&&!C.zf)) goto L_1006924a;
  /* 10069242 jb 0x10069252 */
  if (C.cf) goto L_10069252;
  /* 10069244 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10069248 jbe 0x10069252 */
  if ((C.cf||C.zf)) goto L_10069252;
L_1006924a:;
  /* 1006924a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006924e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10069252:;
  /* 10069252 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10069256 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006925a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1006925c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1006925e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10069261:;
  /* 10069261 pop ebx */
  EBX = (pop32());
  /* 10069262 ret 0x10 */
  ESPCHK(0x100691f0u, _esp0);
  ESP += 20; return;
}

