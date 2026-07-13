#include "recomp.h"

/* ProcessAI @ 0x10001000 (16 bytes, 3 insns) */
void f_10001000(void) {
  FTRACE(0x10001000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10001000 call dword ptr [0x100164f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f0))), 0x10001006u);
  /* 10001006 mov dword ptr [0x100162a4], eax */
  w32((uint32_t)(0x100162a4), (EAX));
  /* 1000100b jmp 0x10006d40 */
  f_10006d40(); return;
}

/* InitAI @ 0x10001010 (5592 bytes, 1470 insns) */
void f_10001010(void) {
  FTRACE(0x10001010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10001010 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001015 sub esp, 0x60 */
  { uint32_t _a=(ESP),_b=(0x60u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10001018 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000101a je 0x10001078 */
  if (C.zf) goto L_10001078;
  /* 1000101c push 0x1000fee4 */
  push32((uint32_t)(0x1000fee4u));
  /* 10001021 push 0x10016078 */
  push32((uint32_t)(0x10016078u));
  /* 10001026 call eax */
  call_ind((uint32_t)(EAX), 0x10001028u);
  /* 10001028 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 1000102d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001030 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001032 je 0x10001078 */
  if (C.zf) goto L_10001078;
  /* 10001034 push 0x1000fedc */
  push32((uint32_t)(0x1000fedcu));
  /* 10001039 push 0x10016018 */
  push32((uint32_t)(0x10016018u));
  /* 1000103e call eax */
  call_ind((uint32_t)(EAX), 0x10001040u);
  /* 10001040 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001045 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001048 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000104a je 0x10001078 */
  if (C.zf) goto L_10001078;
  /* 1000104c push 0x1000fed4 */
  push32((uint32_t)(0x1000fed4u));
  /* 10001051 push 0x10016070 */
  push32((uint32_t)(0x10016070u));
  /* 10001056 call eax */
  call_ind((uint32_t)(EAX), 0x10001058u);
  /* 10001058 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 1000105d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001060 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001062 je 0x10001078 */
  if (C.zf) goto L_10001078;
  /* 10001064 push 0x1000fecc */
  push32((uint32_t)(0x1000feccu));
  /* 10001069 push 0x10016080 */
  push32((uint32_t)(0x10016080u));
  /* 1000106e call eax */
  call_ind((uint32_t)(EAX), 0x10001070u);
  /* 10001070 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001075 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10001078:;
  /* 10001078 mov ecx, dword ptr [0x100163e8] */
  ECX = (r32((uint32_t)(0x100163e8)));
  /* 1000107e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10001080 je 0x10001096 */
  if (C.zf) goto L_10001096;
  /* 10001082 push 0x1000fec0 */
  push32((uint32_t)(0x1000fec0u));
  /* 10001087 push 0x10013680 */
  push32((uint32_t)(0x10013680u));
  /* 1000108c call ecx */
  call_ind((uint32_t)(ECX), 0x1000108eu);
  /* 1000108e mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001093 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10001096:;
  /* 10001096 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001098 je 0x10001322 */
  if (C.zf) goto L_10001322;
  /* 1000109e push 0x1000feac */
  push32((uint32_t)(0x1000feacu));
  /* 100010a3 push 0x100138f0 */
  push32((uint32_t)(0x100138f0u));
  /* 100010a8 call eax */
  call_ind((uint32_t)(EAX), 0x100010aau);
  /* 100010aa mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 100010af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100010b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100010b4 je 0x10001322 */
  if (C.zf) goto L_10001322;
  /* 100010ba push 0x1000fe98 */
  push32((uint32_t)(0x1000fe98u));
  /* 100010bf push 0x100138e8 */
  push32((uint32_t)(0x100138e8u));
  /* 100010c4 call eax */
  call_ind((uint32_t)(EAX), 0x100010c6u);
  /* 100010c6 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 100010cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100010ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100010d0 je 0x10001322 */
  if (C.zf) goto L_10001322;
  /* 100010d6 push 0x1000fe84 */
  push32((uint32_t)(0x1000fe84u));
  /* 100010db push 0x100138e0 */
  push32((uint32_t)(0x100138e0u));
  /* 100010e0 call eax */
  call_ind((uint32_t)(EAX), 0x100010e2u);
  /* 100010e2 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 100010e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100010ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100010ec je 0x10001322 */
  if (C.zf) goto L_10001322;
  /* 100010f2 push 0x1000fe70 */
  push32((uint32_t)(0x1000fe70u));
  /* 100010f7 push 0x10013928 */
  push32((uint32_t)(0x10013928u));
  /* 100010fc call eax */
  call_ind((uint32_t)(EAX), 0x100010feu);
  /* 100010fe mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001103 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001106 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001108 je 0x10001322 */
  if (C.zf) goto L_10001322;
  /* 1000110e push 0x1000fe5c */
  push32((uint32_t)(0x1000fe5cu));
  /* 10001113 push 0x10013918 */
  push32((uint32_t)(0x10013918u));
  /* 10001118 call eax */
  call_ind((uint32_t)(EAX), 0x1000111au);
  /* 1000111a mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 1000111f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001122 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001124 je 0x10001322 */
  if (C.zf) goto L_10001322;
  /* 1000112a push 0x1000fe48 */
  push32((uint32_t)(0x1000fe48u));
  /* 1000112f push 0x10013910 */
  push32((uint32_t)(0x10013910u));
  /* 10001134 call eax */
  call_ind((uint32_t)(EAX), 0x10001136u);
  /* 10001136 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 1000113b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000113e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001140 je 0x10001322 */
  if (C.zf) goto L_10001322;
  /* 10001146 push 0x1000fe34 */
  push32((uint32_t)(0x1000fe34u));
  /* 1000114b push 0x100136c8 */
  push32((uint32_t)(0x100136c8u));
  /* 10001150 call eax */
  call_ind((uint32_t)(EAX), 0x10001152u);
  /* 10001152 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001157 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000115a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000115c je 0x10001322 */
  if (C.zf) goto L_10001322;
  /* 10001162 push 0x1000fe20 */
  push32((uint32_t)(0x1000fe20u));
  /* 10001167 push 0x100136b8 */
  push32((uint32_t)(0x100136b8u));
  /* 1000116c call eax */
  call_ind((uint32_t)(EAX), 0x1000116eu);
  /* 1000116e mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001173 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001176 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001178 je 0x10001322 */
  if (C.zf) goto L_10001322;
  /* 1000117e push 0x1000fe0c */
  push32((uint32_t)(0x1000fe0cu));
  /* 10001183 push 0x100138b0 */
  push32((uint32_t)(0x100138b0u));
  /* 10001188 call eax */
  call_ind((uint32_t)(EAX), 0x1000118au);
  /* 1000118a mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 1000118f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001192 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001194 je 0x10001322 */
  if (C.zf) goto L_10001322;
  /* 1000119a push 0x1000fdf8 */
  push32((uint32_t)(0x1000fdf8u));
  /* 1000119f push 0x100138a8 */
  push32((uint32_t)(0x100138a8u));
  /* 100011a4 call eax */
  call_ind((uint32_t)(EAX), 0x100011a6u);
  /* 100011a6 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 100011ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100011ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100011b0 je 0x10001322 */
  if (C.zf) goto L_10001322;
  /* 100011b6 push 0x1000fde4 */
  push32((uint32_t)(0x1000fde4u));
  /* 100011bb push 0x100138a0 */
  push32((uint32_t)(0x100138a0u));
  /* 100011c0 call eax */
  call_ind((uint32_t)(EAX), 0x100011c2u);
  /* 100011c2 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 100011c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100011ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100011cc je 0x10001322 */
  if (C.zf) goto L_10001322;
  /* 100011d2 push 0x1000fdd0 */
  push32((uint32_t)(0x1000fdd0u));
  /* 100011d7 push 0x10013898 */
  push32((uint32_t)(0x10013898u));
  /* 100011dc call eax */
  call_ind((uint32_t)(EAX), 0x100011deu);
  /* 100011de mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 100011e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100011e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100011e8 je 0x10001322 */
  if (C.zf) goto L_10001322;
  /* 100011ee push 0x1000feac */
  push32((uint32_t)(0x1000feacu));
  /* 100011f3 push 0x100138f0 */
  push32((uint32_t)(0x100138f0u));
  /* 100011f8 call eax */
  call_ind((uint32_t)(EAX), 0x100011fau);
  /* 100011fa mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 100011ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001202 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001204 je 0x10001322 */
  if (C.zf) goto L_10001322;
  /* 1000120a push 0x1000fe98 */
  push32((uint32_t)(0x1000fe98u));
  /* 1000120f push 0x100138e8 */
  push32((uint32_t)(0x100138e8u));
  /* 10001214 call eax */
  call_ind((uint32_t)(EAX), 0x10001216u);
  /* 10001216 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 1000121b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000121e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001220 je 0x10001322 */
  if (C.zf) goto L_10001322;
  /* 10001226 push 0x1000fe84 */
  push32((uint32_t)(0x1000fe84u));
  /* 1000122b push 0x100138e0 */
  push32((uint32_t)(0x100138e0u));
  /* 10001230 call eax */
  call_ind((uint32_t)(EAX), 0x10001232u);
  /* 10001232 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001237 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000123a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000123c je 0x10001322 */
  if (C.zf) goto L_10001322;
  /* 10001242 push 0x1000fe70 */
  push32((uint32_t)(0x1000fe70u));
  /* 10001247 push 0x10013928 */
  push32((uint32_t)(0x10013928u));
  /* 1000124c call eax */
  call_ind((uint32_t)(EAX), 0x1000124eu);
  /* 1000124e mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001253 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001256 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001258 je 0x10001322 */
  if (C.zf) goto L_10001322;
  /* 1000125e push 0x1000fe5c */
  push32((uint32_t)(0x1000fe5cu));
  /* 10001263 push 0x10013918 */
  push32((uint32_t)(0x10013918u));
  /* 10001268 call eax */
  call_ind((uint32_t)(EAX), 0x1000126au);
  /* 1000126a mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 1000126f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001272 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001274 je 0x10001322 */
  if (C.zf) goto L_10001322;
  /* 1000127a push 0x1000fe48 */
  push32((uint32_t)(0x1000fe48u));
  /* 1000127f push 0x10013910 */
  push32((uint32_t)(0x10013910u));
  /* 10001284 call eax */
  call_ind((uint32_t)(EAX), 0x10001286u);
  /* 10001286 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 1000128b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000128e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001290 je 0x10001322 */
  if (C.zf) goto L_10001322;
  /* 10001296 push 0x1000fe34 */
  push32((uint32_t)(0x1000fe34u));
  /* 1000129b push 0x100136c8 */
  push32((uint32_t)(0x100136c8u));
  /* 100012a0 call eax */
  call_ind((uint32_t)(EAX), 0x100012a2u);
  /* 100012a2 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 100012a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100012aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100012ac je 0x10001322 */
  if (C.zf) goto L_10001322;
  /* 100012ae push 0x1000fe20 */
  push32((uint32_t)(0x1000fe20u));
  /* 100012b3 push 0x100136b8 */
  push32((uint32_t)(0x100136b8u));
  /* 100012b8 call eax */
  call_ind((uint32_t)(EAX), 0x100012bau);
  /* 100012ba mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 100012bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100012c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100012c4 je 0x10001322 */
  if (C.zf) goto L_10001322;
  /* 100012c6 push 0x1000fe0c */
  push32((uint32_t)(0x1000fe0cu));
  /* 100012cb push 0x100138b0 */
  push32((uint32_t)(0x100138b0u));
  /* 100012d0 call eax */
  call_ind((uint32_t)(EAX), 0x100012d2u);
  /* 100012d2 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 100012d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100012da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100012dc je 0x10001322 */
  if (C.zf) goto L_10001322;
  /* 100012de push 0x1000fdf8 */
  push32((uint32_t)(0x1000fdf8u));
  /* 100012e3 push 0x100138a8 */
  push32((uint32_t)(0x100138a8u));
  /* 100012e8 call eax */
  call_ind((uint32_t)(EAX), 0x100012eau);
  /* 100012ea mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 100012ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100012f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100012f4 je 0x10001322 */
  if (C.zf) goto L_10001322;
  /* 100012f6 push 0x1000fde4 */
  push32((uint32_t)(0x1000fde4u));
  /* 100012fb push 0x100138a0 */
  push32((uint32_t)(0x100138a0u));
  /* 10001300 call eax */
  call_ind((uint32_t)(EAX), 0x10001302u);
  /* 10001302 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001307 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000130a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000130c je 0x10001322 */
  if (C.zf) goto L_10001322;
  /* 1000130e push 0x1000fdd0 */
  push32((uint32_t)(0x1000fdd0u));
  /* 10001313 push 0x10013898 */
  push32((uint32_t)(0x10013898u));
  /* 10001318 call eax */
  call_ind((uint32_t)(EAX), 0x1000131au);
  /* 1000131a mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 1000131f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10001322:;
  /* 10001322 mov ecx, dword ptr [0x100163e8] */
  ECX = (r32((uint32_t)(0x100163e8)));
  /* 10001328 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1000132a je 0x10001340 */
  if (C.zf) goto L_10001340;
  /* 1000132c push 0x1000fdc0 */
  push32((uint32_t)(0x1000fdc0u));
  /* 10001331 push 0x10013670 */
  push32((uint32_t)(0x10013670u));
  /* 10001336 call ecx */
  call_ind((uint32_t)(ECX), 0x10001338u);
  /* 10001338 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 1000133d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10001340:;
  /* 10001340 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001342 je 0x100015c7 */
  if (C.zf) goto L_100015c7;
  /* 10001348 push 0x1000fdac */
  push32((uint32_t)(0x1000fdacu));
  /* 1000134d push 0x10013648 */
  push32((uint32_t)(0x10013648u));
  /* 10001352 call eax */
  call_ind((uint32_t)(EAX), 0x10001354u);
  /* 10001354 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001359 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000135c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000135e je 0x100015c7 */
  if (C.zf) goto L_100015c7;
  /* 10001364 push 0x1000fd94 */
  push32((uint32_t)(0x1000fd94u));
  /* 10001369 push 0x10013640 */
  push32((uint32_t)(0x10013640u));
  /* 1000136e call eax */
  call_ind((uint32_t)(EAX), 0x10001370u);
  /* 10001370 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001375 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001378 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000137a je 0x100015c7 */
  if (C.zf) goto L_100015c7;
  /* 10001380 push 0x1000fd7c */
  push32((uint32_t)(0x1000fd7cu));
  /* 10001385 push 0x10013638 */
  push32((uint32_t)(0x10013638u));
  /* 1000138a call eax */
  call_ind((uint32_t)(EAX), 0x1000138cu);
  /* 1000138c mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001391 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001394 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001396 je 0x100015c7 */
  if (C.zf) goto L_100015c7;
  /* 1000139c push 0x1000fd64 */
  push32((uint32_t)(0x1000fd64u));
  /* 100013a1 push 0x10016308 */
  push32((uint32_t)(0x10016308u));
  /* 100013a6 call eax */
  call_ind((uint32_t)(EAX), 0x100013a8u);
  /* 100013a8 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 100013ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100013b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100013b2 je 0x100015c7 */
  if (C.zf) goto L_100015c7;
  /* 100013b8 push 0x1000fd4c */
  push32((uint32_t)(0x1000fd4cu));
  /* 100013bd push 0x10016300 */
  push32((uint32_t)(0x10016300u));
  /* 100013c2 call eax */
  call_ind((uint32_t)(EAX), 0x100013c4u);
  /* 100013c4 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 100013c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100013cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100013ce je 0x100015c7 */
  if (C.zf) goto L_100015c7;
  /* 100013d4 push 0x1000fd34 */
  push32((uint32_t)(0x1000fd34u));
  /* 100013d9 push 0x100162f8 */
  push32((uint32_t)(0x100162f8u));
  /* 100013de call eax */
  call_ind((uint32_t)(EAX), 0x100013e0u);
  /* 100013e0 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 100013e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100013e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100013ea je 0x100015c7 */
  if (C.zf) goto L_100015c7;
  /* 100013f0 push 0x1000fd20 */
  push32((uint32_t)(0x1000fd20u));
  /* 100013f5 push 0x10016380 */
  push32((uint32_t)(0x10016380u));
  /* 100013fa call eax */
  call_ind((uint32_t)(EAX), 0x100013fcu);
  /* 100013fc mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001401 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001404 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001406 je 0x100015c7 */
  if (C.zf) goto L_100015c7;
  /* 1000140c push 0x1000fd08 */
  push32((uint32_t)(0x1000fd08u));
  /* 10001411 push 0x10016378 */
  push32((uint32_t)(0x10016378u));
  /* 10001416 call eax */
  call_ind((uint32_t)(EAX), 0x10001418u);
  /* 10001418 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 1000141d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001420 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001422 je 0x100015c7 */
  if (C.zf) goto L_100015c7;
  /* 10001428 push 0x1000fcf0 */
  push32((uint32_t)(0x1000fcf0u));
  /* 1000142d push 0x100163c8 */
  push32((uint32_t)(0x100163c8u));
  /* 10001432 call eax */
  call_ind((uint32_t)(EAX), 0x10001434u);
  /* 10001434 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001439 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000143c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000143e je 0x100015c7 */
  if (C.zf) goto L_100015c7;
  /* 10001444 push 0x1000fcd8 */
  push32((uint32_t)(0x1000fcd8u));
  /* 10001449 push 0x100163c0 */
  push32((uint32_t)(0x100163c0u));
  /* 1000144e call eax */
  call_ind((uint32_t)(EAX), 0x10001450u);
  /* 10001450 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001455 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001458 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000145a je 0x100015c7 */
  if (C.zf) goto L_100015c7;
  /* 10001460 push 0x1000fcc0 */
  push32((uint32_t)(0x1000fcc0u));
  /* 10001465 push 0x100163b8 */
  push32((uint32_t)(0x100163b8u));
  /* 1000146a call eax */
  call_ind((uint32_t)(EAX), 0x1000146cu);
  /* 1000146c mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001471 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001474 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001476 je 0x100015c7 */
  if (C.zf) goto L_100015c7;
  /* 1000147c push 0x1000fca8 */
  push32((uint32_t)(0x1000fca8u));
  /* 10001481 push 0x100163b0 */
  push32((uint32_t)(0x100163b0u));
  /* 10001486 call eax */
  call_ind((uint32_t)(EAX), 0x10001488u);
  /* 10001488 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 1000148d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001490 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001492 je 0x100015c7 */
  if (C.zf) goto L_100015c7;
  /* 10001498 push 0x1000fdac */
  push32((uint32_t)(0x1000fdacu));
  /* 1000149d push 0x10013648 */
  push32((uint32_t)(0x10013648u));
  /* 100014a2 call eax */
  call_ind((uint32_t)(EAX), 0x100014a4u);
  /* 100014a4 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 100014a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100014ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100014ae je 0x100015c7 */
  if (C.zf) goto L_100015c7;
  /* 100014b4 push 0x1000fd94 */
  push32((uint32_t)(0x1000fd94u));
  /* 100014b9 push 0x10013640 */
  push32((uint32_t)(0x10013640u));
  /* 100014be call eax */
  call_ind((uint32_t)(EAX), 0x100014c0u);
  /* 100014c0 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 100014c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100014c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100014ca je 0x100015c7 */
  if (C.zf) goto L_100015c7;
  /* 100014d0 push 0x1000fd7c */
  push32((uint32_t)(0x1000fd7cu));
  /* 100014d5 push 0x10013638 */
  push32((uint32_t)(0x10013638u));
  /* 100014da call eax */
  call_ind((uint32_t)(EAX), 0x100014dcu);
  /* 100014dc mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 100014e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100014e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100014e6 je 0x100015c7 */
  if (C.zf) goto L_100015c7;
  /* 100014ec push 0x1000fd64 */
  push32((uint32_t)(0x1000fd64u));
  /* 100014f1 push 0x10016308 */
  push32((uint32_t)(0x10016308u));
  /* 100014f6 call eax */
  call_ind((uint32_t)(EAX), 0x100014f8u);
  /* 100014f8 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 100014fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001500 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001502 je 0x100015c7 */
  if (C.zf) goto L_100015c7;
  /* 10001508 push 0x1000fd4c */
  push32((uint32_t)(0x1000fd4cu));
  /* 1000150d push 0x10016300 */
  push32((uint32_t)(0x10016300u));
  /* 10001512 call eax */
  call_ind((uint32_t)(EAX), 0x10001514u);
  /* 10001514 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001519 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000151c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000151e je 0x100015c7 */
  if (C.zf) goto L_100015c7;
  /* 10001524 push 0x1000fd34 */
  push32((uint32_t)(0x1000fd34u));
  /* 10001529 push 0x100162f8 */
  push32((uint32_t)(0x100162f8u));
  /* 1000152e call eax */
  call_ind((uint32_t)(EAX), 0x10001530u);
  /* 10001530 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001535 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001538 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000153a je 0x100015c7 */
  if (C.zf) goto L_100015c7;
  /* 10001540 push 0x1000fd20 */
  push32((uint32_t)(0x1000fd20u));
  /* 10001545 push 0x10016380 */
  push32((uint32_t)(0x10016380u));
  /* 1000154a call eax */
  call_ind((uint32_t)(EAX), 0x1000154cu);
  /* 1000154c mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001551 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001554 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001556 je 0x100015c7 */
  if (C.zf) goto L_100015c7;
  /* 10001558 push 0x1000fd08 */
  push32((uint32_t)(0x1000fd08u));
  /* 1000155d push 0x10016378 */
  push32((uint32_t)(0x10016378u));
  /* 10001562 call eax */
  call_ind((uint32_t)(EAX), 0x10001564u);
  /* 10001564 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001569 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000156c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000156e je 0x100015c7 */
  if (C.zf) goto L_100015c7;
  /* 10001570 push 0x1000fcf0 */
  push32((uint32_t)(0x1000fcf0u));
  /* 10001575 push 0x100163c8 */
  push32((uint32_t)(0x100163c8u));
  /* 1000157a call eax */
  call_ind((uint32_t)(EAX), 0x1000157cu);
  /* 1000157c mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001581 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001584 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001586 je 0x100015c7 */
  if (C.zf) goto L_100015c7;
  /* 10001588 push 0x1000fcd8 */
  push32((uint32_t)(0x1000fcd8u));
  /* 1000158d push 0x100163c0 */
  push32((uint32_t)(0x100163c0u));
  /* 10001592 call eax */
  call_ind((uint32_t)(EAX), 0x10001594u);
  /* 10001594 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001599 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000159c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000159e je 0x100015c7 */
  if (C.zf) goto L_100015c7;
  /* 100015a0 push 0x1000fcc0 */
  push32((uint32_t)(0x1000fcc0u));
  /* 100015a5 push 0x100163b8 */
  push32((uint32_t)(0x100163b8u));
  /* 100015aa call eax */
  call_ind((uint32_t)(EAX), 0x100015acu);
  /* 100015ac mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 100015b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100015b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100015b6 je 0x100015c7 */
  if (C.zf) goto L_100015c7;
  /* 100015b8 push 0x1000fca8 */
  push32((uint32_t)(0x1000fca8u));
  /* 100015bd push 0x100163b0 */
  push32((uint32_t)(0x100163b0u));
  /* 100015c2 call eax */
  call_ind((uint32_t)(EAX), 0x100015c4u);
  /* 100015c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100015c7:;
  /* 100015c7 mov eax, dword ptr [0x100163e8] */
  EAX = (r32((uint32_t)(0x100163e8)));
  /* 100015cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100015ce je 0x100015df */
  if (C.zf) goto L_100015df;
  /* 100015d0 push 0x1000fc94 */
  push32((uint32_t)(0x1000fc94u));
  /* 100015d5 push 0x10015fd0 */
  push32((uint32_t)(0x10015fd0u));
  /* 100015da call eax */
  call_ind((uint32_t)(EAX), 0x100015dcu);
  /* 100015dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100015df:;
  /* 100015df call dword ptr [0x100164f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f0))), 0x100015e5u);
  /* 100015e5 mov dword ptr [0x100162a4], eax */
  w32((uint32_t)(0x100162a4), (EAX));
  /* 100015ea call 0x100026c0 */
  push32(0x100015efu); f_100026c0();
  /* 100015ef mov ecx, eax */
  ECX = (EAX);
  /* 100015f1 mov eax, dword ptr [0x100162a4] */
  EAX = (r32((uint32_t)(0x100162a4)));
  /* 100015f6 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 100015fc mov dword ptr [eax*4 + 0x10015f88], ecx */
  w32((uint32_t)(EAX*4 + 0x10015f88), (ECX));
  /* 10001603 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 10001606 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 10001609 lea edx, [ecx + ecx*4] */
  EDX = ((uint32_t)(ECX + ECX*4));
  /* 1000160c lea eax, [eax + edx*2] */
  EAX = ((uint32_t)(EAX + EDX*2));
  /* 1000160f shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10001612 mov dword ptr [eax + 0x10013ae0], 0 */
  w32((uint32_t)(EAX + 0x10013ae0), (0x0u));
  /* 1000161c mov dword ptr [eax + 0x10013c74], 0 */
  w32((uint32_t)(EAX + 0x10013c74), (0x0u));
  /* 10001626 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 1000162b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000162d je 0x1000163e */
  if (C.zf) goto L_1000163e;
  /* 1000162f push 0x1000fc78 */
  push32((uint32_t)(0x1000fc78u));
  /* 10001634 push 0x100160c0 */
  push32((uint32_t)(0x100160c0u));
  /* 10001639 call eax */
  call_ind((uint32_t)(EAX), 0x1000163bu);
  /* 1000163b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1000163e:;
  /* 1000163e mov eax, dword ptr [0x100163e8] */
  EAX = (r32((uint32_t)(0x100163e8)));
  /* 10001643 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001645 je 0x10001656 */
  if (C.zf) goto L_10001656;
  /* 10001647 push 0x1000fc64 */
  push32((uint32_t)(0x1000fc64u));
  /* 1000164c push 0x10013878 */
  push32((uint32_t)(0x10013878u));
  /* 10001651 call eax */
  call_ind((uint32_t)(EAX), 0x10001653u);
  /* 10001653 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10001656:;
  /* 10001656 push ebp */
  push32((uint32_t)(EBP));
  /* 10001657 push esi */
  push32((uint32_t)(ESI));
  /* 10001658 push edi */
  push32((uint32_t)(EDI));
  /* 10001659 call 0x100026c0 */
  push32(0x1000165eu); f_100026c0();
  /* 1000165e mov edx, eax */
  EDX = (EAX);
  /* 10001660 and eax, 6 */
  { uint32_t _r=(EAX)&(0x6u); EAX = (_r); fl_logic(_r,32); }
  /* 10001663 cmp al, 2 */
  { uint32_t _a=(AL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10001665 lea ebp, [esp + 0xc] */
  EBP = ((uint32_t)(ESP + 0xc));
  /* 10001669 mov edi, 0x1000fec0 */
  EDI = (0x1000fec0u);
  /* 1000166e je 0x10001675 */
  if (C.zf) goto L_10001675;
  /* 10001670 mov edi, 0x1000fc54 */
  EDI = (0x1000fc54u);
L_10001675:;
  /* 10001675 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10001678 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000167a repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1000167c not ecx */
  ECX = (~(ECX));
  /* 1000167e sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10001680 and edx, 0x18 */
  { uint32_t _r=(EDX)&(0x18u); EDX = (_r); fl_logic(_r,32); }
  /* 10001683 mov eax, ecx */
  EAX = (ECX);
  /* 10001685 mov esi, edi */
  ESI = (EDI);
  /* 10001687 mov edi, ebp */
  EDI = (EBP);
  /* 10001689 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1000168c rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1000168e mov ecx, eax */
  ECX = (EAX);
  /* 10001690 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10001693 cmp dl, 8 */
  { uint32_t _a=(DL),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10001696 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 10001698 lea edx, [esp + 0x3c] */
  EDX = ((uint32_t)(ESP + 0x3c));
  /* 1000169c mov edi, 0x1000fc44 */
  EDI = (0x1000fc44u);
  /* 100016a1 je 0x100016a8 */
  if (C.zf) goto L_100016a8;
  /* 100016a3 mov edi, 0x1000fc34 */
  EDI = (0x1000fc34u);
L_100016a8:;
  /* 100016a8 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 100016ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100016ad repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 100016af not ecx */
  ECX = (~(ECX));
  /* 100016b1 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100016b3 mov eax, ecx */
  EAX = (ECX);
  /* 100016b5 mov esi, edi */
  ESI = (EDI);
  /* 100016b7 mov edi, edx */
  EDI = (EDX);
  /* 100016b9 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100016bc rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100016be mov ecx, eax */
  ECX = (EAX);
  /* 100016c0 mov eax, dword ptr [0x100163e8] */
  EAX = (r32((uint32_t)(0x100163e8)));
  /* 100016c5 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 100016c8 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 100016ca pop edi */
  EDI = (pop32());
  /* 100016cb pop esi */
  ESI = (pop32());
  /* 100016cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100016ce pop ebp */
  EBP = (pop32());
  /* 100016cf je 0x100016e0 */
  if (C.zf) goto L_100016e0;
  /* 100016d1 push 0x1000fc20 */
  push32((uint32_t)(0x1000fc20u));
  /* 100016d6 push 0x100136f0 */
  push32((uint32_t)(0x100136f0u));
  /* 100016db call eax */
  call_ind((uint32_t)(EAX), 0x100016ddu);
  /* 100016dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100016e0:;
  /* 100016e0 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 100016e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100016e7 je 0x10001710 */
  if (C.zf) goto L_10001710;
  /* 100016e9 push 0x1000fc08 */
  push32((uint32_t)(0x1000fc08u));
  /* 100016ee push 0x10016250 */
  push32((uint32_t)(0x10016250u));
  /* 100016f3 call eax */
  call_ind((uint32_t)(EAX), 0x100016f5u);
  /* 100016f5 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 100016fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100016fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100016ff je 0x10001710 */
  if (C.zf) goto L_10001710;
  /* 10001701 push 0x1000fbf0 */
  push32((uint32_t)(0x1000fbf0u));
  /* 10001706 push 0x10015fb8 */
  push32((uint32_t)(0x10015fb8u));
  /* 1000170b call eax */
  call_ind((uint32_t)(EAX), 0x1000170du);
  /* 1000170d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10001710:;
  /* 10001710 mov eax, dword ptr [0x100163e8] */
  EAX = (r32((uint32_t)(0x100163e8)));
  /* 10001715 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001717 je 0x10001728 */
  if (C.zf) goto L_10001728;
  /* 10001719 push 0x1000fbdc */
  push32((uint32_t)(0x1000fbdcu));
  /* 1000171e push 0x10013630 */
  push32((uint32_t)(0x10013630u));
  /* 10001723 call eax */
  call_ind((uint32_t)(EAX), 0x10001725u);
  /* 10001725 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10001728:;
  /* 10001728 push 0x1000fbc8 */
  push32((uint32_t)(0x1000fbc8u));
  /* 1000172d call 0x10002690 */
  push32(0x10001732u); f_10002690();
  /* 10001732 mov eax, dword ptr [0x100163e8] */
  EAX = (r32((uint32_t)(0x100163e8)));
  /* 10001737 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000173a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000173c je 0x10001765 */
  if (C.zf) goto L_10001765;
  /* 1000173e push 0x1000fbc8 */
  push32((uint32_t)(0x1000fbc8u));
  /* 10001743 push 0x10013678 */
  push32((uint32_t)(0x10013678u));
  /* 10001748 call eax */
  call_ind((uint32_t)(EAX), 0x1000174au);
  /* 1000174a mov eax, dword ptr [0x100163e8] */
  EAX = (r32((uint32_t)(0x100163e8)));
  /* 1000174f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001752 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001754 je 0x10001765 */
  if (C.zf) goto L_10001765;
  /* 10001756 push 0x1000fbb4 */
  push32((uint32_t)(0x1000fbb4u));
  /* 1000175b push 0x10016180 */
  push32((uint32_t)(0x10016180u));
  /* 10001760 call eax */
  call_ind((uint32_t)(EAX), 0x10001762u);
  /* 10001762 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10001765:;
  /* 10001765 push 0x1000fbb4 */
  push32((uint32_t)(0x1000fbb4u));
  /* 1000176a call dword ptr [0x10016550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016550))), 0x10001770u);
  /* 10001770 mov eax, dword ptr [0x100163e8] */
  EAX = (r32((uint32_t)(0x100163e8)));
  /* 10001775 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001778 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000177a je 0x10001aa7 */
  if (C.zf) goto L_10001aa7;
  /* 10001780 push 0x1000fba0 */
  push32((uint32_t)(0x1000fba0u));
  /* 10001785 push 0x10016150 */
  push32((uint32_t)(0x10016150u));
  /* 1000178a call eax */
  call_ind((uint32_t)(EAX), 0x1000178cu);
  /* 1000178c mov eax, dword ptr [0x100163e8] */
  EAX = (r32((uint32_t)(0x100163e8)));
  /* 10001791 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001794 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001796 je 0x10001aa7 */
  if (C.zf) goto L_10001aa7;
  /* 1000179c push 0x1000fb8c */
  push32((uint32_t)(0x1000fb8cu));
  /* 100017a1 push 0x100160d0 */
  push32((uint32_t)(0x100160d0u));
  /* 100017a6 call eax */
  call_ind((uint32_t)(EAX), 0x100017a8u);
  /* 100017a8 mov eax, dword ptr [0x100163e8] */
  EAX = (r32((uint32_t)(0x100163e8)));
  /* 100017ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100017b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100017b2 je 0x10001aa7 */
  if (C.zf) goto L_10001aa7;
  /* 100017b8 lea ecx, [esp] */
  ECX = ((uint32_t)(ESP));
  /* 100017bc push ecx */
  push32((uint32_t)(ECX));
  /* 100017bd push 0x100163a0 */
  push32((uint32_t)(0x100163a0u));
  /* 100017c2 call eax */
  call_ind((uint32_t)(EAX), 0x100017c4u);
  /* 100017c4 mov eax, dword ptr [0x100163e8] */
  EAX = (r32((uint32_t)(0x100163e8)));
  /* 100017c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100017cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100017ce je 0x10001aa7 */
  if (C.zf) goto L_10001aa7;
  /* 100017d4 push 0x1000fb80 */
  push32((uint32_t)(0x1000fb80u));
  /* 100017d9 push 0x10016320 */
  push32((uint32_t)(0x10016320u));
  /* 100017de call eax */
  call_ind((uint32_t)(EAX), 0x100017e0u);
  /* 100017e0 mov eax, dword ptr [0x100163e8] */
  EAX = (r32((uint32_t)(0x100163e8)));
  /* 100017e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100017e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100017ea je 0x10001aa7 */
  if (C.zf) goto L_10001aa7;
  /* 100017f0 lea edx, [esp + 0x30] */
  EDX = ((uint32_t)(ESP + 0x30));
  /* 100017f4 push edx */
  push32((uint32_t)(EDX));
  /* 100017f5 push 0x10015f70 */
  push32((uint32_t)(0x10015f70u));
  /* 100017fa call eax */
  call_ind((uint32_t)(EAX), 0x100017fcu);
  /* 100017fc mov eax, dword ptr [0x100163e8] */
  EAX = (r32((uint32_t)(0x100163e8)));
  /* 10001801 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001804 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001806 je 0x10001aa7 */
  if (C.zf) goto L_10001aa7;
  /* 1000180c push 0x1000fb74 */
  push32((uint32_t)(0x1000fb74u));
  /* 10001811 push 0x10016360 */
  push32((uint32_t)(0x10016360u));
  /* 10001816 call eax */
  call_ind((uint32_t)(EAX), 0x10001818u);
  /* 10001818 mov eax, dword ptr [0x100163e8] */
  EAX = (r32((uint32_t)(0x100163e8)));
  /* 1000181d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001820 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001822 je 0x10001aa7 */
  if (C.zf) goto L_10001aa7;
  /* 10001828 push 0x1000fb68 */
  push32((uint32_t)(0x1000fb68u));
  /* 1000182d push 0x10013658 */
  push32((uint32_t)(0x10013658u));
  /* 10001832 call eax */
  call_ind((uint32_t)(EAX), 0x10001834u);
  /* 10001834 mov eax, dword ptr [0x100163e8] */
  EAX = (r32((uint32_t)(0x100163e8)));
  /* 10001839 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000183c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000183e je 0x10001aa7 */
  if (C.zf) goto L_10001aa7;
  /* 10001844 push 0x1000fb58 */
  push32((uint32_t)(0x1000fb58u));
  /* 10001849 push 0x100138b8 */
  push32((uint32_t)(0x100138b8u));
  /* 1000184e call eax */
  call_ind((uint32_t)(EAX), 0x10001850u);
  /* 10001850 mov eax, dword ptr [0x100163e8] */
  EAX = (r32((uint32_t)(0x100163e8)));
  /* 10001855 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001858 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000185a je 0x10001aa7 */
  if (C.zf) goto L_10001aa7;
  /* 10001860 push 0x1000fb4c */
  push32((uint32_t)(0x1000fb4cu));
  /* 10001865 push 0x100161e0 */
  push32((uint32_t)(0x100161e0u));
  /* 1000186a call eax */
  call_ind((uint32_t)(EAX), 0x1000186cu);
  /* 1000186c mov eax, dword ptr [0x100163e8] */
  EAX = (r32((uint32_t)(0x100163e8)));
  /* 10001871 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001874 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001876 je 0x10001aa7 */
  if (C.zf) goto L_10001aa7;
  /* 1000187c push 0x1000fb34 */
  push32((uint32_t)(0x1000fb34u));
  /* 10001881 push 0x10016318 */
  push32((uint32_t)(0x10016318u));
  /* 10001886 call eax */
  call_ind((uint32_t)(EAX), 0x10001888u);
  /* 10001888 mov eax, dword ptr [0x100163e8] */
  EAX = (r32((uint32_t)(0x100163e8)));
  /* 1000188d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001890 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001892 je 0x10001aa7 */
  if (C.zf) goto L_10001aa7;
  /* 10001898 push 0x1000fb1c */
  push32((uint32_t)(0x1000fb1cu));
  /* 1000189d push 0x10016268 */
  push32((uint32_t)(0x10016268u));
  /* 100018a2 call eax */
  call_ind((uint32_t)(EAX), 0x100018a4u);
  /* 100018a4 mov eax, dword ptr [0x100163e8] */
  EAX = (r32((uint32_t)(0x100163e8)));
  /* 100018a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100018ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100018ae je 0x10001aa7 */
  if (C.zf) goto L_10001aa7;
  /* 100018b4 push 0x1000fb08 */
  push32((uint32_t)(0x1000fb08u));
  /* 100018b9 push 0x10015fa8 */
  push32((uint32_t)(0x10015fa8u));
  /* 100018be call eax */
  call_ind((uint32_t)(EAX), 0x100018c0u);
  /* 100018c0 mov eax, dword ptr [0x100163e8] */
  EAX = (r32((uint32_t)(0x100163e8)));
  /* 100018c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100018c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100018ca je 0x10001aa7 */
  if (C.zf) goto L_10001aa7;
  /* 100018d0 push 0x1000fafc */
  push32((uint32_t)(0x1000fafcu));
  /* 100018d5 push 0x10015fc8 */
  push32((uint32_t)(0x10015fc8u));
  /* 100018da call eax */
  call_ind((uint32_t)(EAX), 0x100018dcu);
  /* 100018dc mov eax, dword ptr [0x100163e8] */
  EAX = (r32((uint32_t)(0x100163e8)));
  /* 100018e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100018e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100018e6 je 0x10001aa7 */
  if (C.zf) goto L_10001aa7;
  /* 100018ec push 0x1000fae8 */
  push32((uint32_t)(0x1000fae8u));
  /* 100018f1 push 0x10016240 */
  push32((uint32_t)(0x10016240u));
  /* 100018f6 call eax */
  call_ind((uint32_t)(EAX), 0x100018f8u);
  /* 100018f8 mov eax, dword ptr [0x100163e8] */
  EAX = (r32((uint32_t)(0x100163e8)));
  /* 100018fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001900 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001902 je 0x10001aa7 */
  if (C.zf) goto L_10001aa7;
  /* 10001908 push 0x1000fad8 */
  push32((uint32_t)(0x1000fad8u));
  /* 1000190d push 0x10016248 */
  push32((uint32_t)(0x10016248u));
  /* 10001912 call eax */
  call_ind((uint32_t)(EAX), 0x10001914u);
  /* 10001914 mov eax, dword ptr [0x100163e8] */
  EAX = (r32((uint32_t)(0x100163e8)));
  /* 10001919 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000191c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000191e je 0x10001aa7 */
  if (C.zf) goto L_10001aa7;
  /* 10001924 push 0x1000facc */
  push32((uint32_t)(0x1000faccu));
  /* 10001929 push 0x10015fc0 */
  push32((uint32_t)(0x10015fc0u));
  /* 1000192e call eax */
  call_ind((uint32_t)(EAX), 0x10001930u);
  /* 10001930 mov eax, dword ptr [0x100163e8] */
  EAX = (r32((uint32_t)(0x100163e8)));
  /* 10001935 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001938 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000193a je 0x10001aa7 */
  if (C.zf) goto L_10001aa7;
  /* 10001940 push 0x1000fabc */
  push32((uint32_t)(0x1000fabcu));
  /* 10001945 push 0x10015f10 */
  push32((uint32_t)(0x10015f10u));
  /* 1000194a call eax */
  call_ind((uint32_t)(EAX), 0x1000194cu);
  /* 1000194c mov eax, dword ptr [0x100163e8] */
  EAX = (r32((uint32_t)(0x100163e8)));
  /* 10001951 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001954 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001956 je 0x10001aa7 */
  if (C.zf) goto L_10001aa7;
  /* 1000195c push 0x1000faa8 */
  push32((uint32_t)(0x1000faa8u));
  /* 10001961 push 0x100160c8 */
  push32((uint32_t)(0x100160c8u));
  /* 10001966 call eax */
  call_ind((uint32_t)(EAX), 0x10001968u);
  /* 10001968 mov eax, dword ptr [0x100163e8] */
  EAX = (r32((uint32_t)(0x100163e8)));
  /* 1000196d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001970 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001972 je 0x10001aa7 */
  if (C.zf) goto L_10001aa7;
  /* 10001978 push 0x1000fa94 */
  push32((uint32_t)(0x1000fa94u));
  /* 1000197d push 0x10015fd8 */
  push32((uint32_t)(0x10015fd8u));
  /* 10001982 call eax */
  call_ind((uint32_t)(EAX), 0x10001984u);
  /* 10001984 mov eax, dword ptr [0x100163e8] */
  EAX = (r32((uint32_t)(0x100163e8)));
  /* 10001989 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000198c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000198e je 0x10001aa7 */
  if (C.zf) goto L_10001aa7;
  /* 10001994 push 0x1000fa7c */
  push32((uint32_t)(0x1000fa7cu));
  /* 10001999 push 0x10013608 */
  push32((uint32_t)(0x10013608u));
  /* 1000199e call eax */
  call_ind((uint32_t)(EAX), 0x100019a0u);
  /* 100019a0 mov eax, dword ptr [0x100163e8] */
  EAX = (r32((uint32_t)(0x100163e8)));
  /* 100019a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100019a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100019aa je 0x10001aa7 */
  if (C.zf) goto L_10001aa7;
  /* 100019b0 push 0x1000fa70 */
  push32((uint32_t)(0x1000fa70u));
  /* 100019b5 push 0x10013868 */
  push32((uint32_t)(0x10013868u));
  /* 100019ba call eax */
  call_ind((uint32_t)(EAX), 0x100019bcu);
  /* 100019bc mov eax, dword ptr [0x100163e8] */
  EAX = (r32((uint32_t)(0x100163e8)));
  /* 100019c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100019c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100019c6 je 0x10001aa7 */
  if (C.zf) goto L_10001aa7;
  /* 100019cc push 0x1000fa64 */
  push32((uint32_t)(0x1000fa64u));
  /* 100019d1 push 0x100138c8 */
  push32((uint32_t)(0x100138c8u));
  /* 100019d6 call eax */
  call_ind((uint32_t)(EAX), 0x100019d8u);
  /* 100019d8 mov eax, dword ptr [0x100163e8] */
  EAX = (r32((uint32_t)(0x100163e8)));
  /* 100019dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100019e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100019e2 je 0x10001aa7 */
  if (C.zf) goto L_10001aa7;
  /* 100019e8 push 0x1000fa54 */
  push32((uint32_t)(0x1000fa54u));
  /* 100019ed push 0x100161d8 */
  push32((uint32_t)(0x100161d8u));
  /* 100019f2 call eax */
  call_ind((uint32_t)(EAX), 0x100019f4u);
  /* 100019f4 mov eax, dword ptr [0x100163e8] */
  EAX = (r32((uint32_t)(0x100163e8)));
  /* 100019f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100019fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100019fe je 0x10001aa7 */
  if (C.zf) goto L_10001aa7;
  /* 10001a04 push 0x1000fa44 */
  push32((uint32_t)(0x1000fa44u));
  /* 10001a09 push 0x100160e8 */
  push32((uint32_t)(0x100160e8u));
  /* 10001a0e call eax */
  call_ind((uint32_t)(EAX), 0x10001a10u);
  /* 10001a10 mov eax, dword ptr [0x100163e8] */
  EAX = (r32((uint32_t)(0x100163e8)));
  /* 10001a15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001a18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001a1a je 0x10001aa7 */
  if (C.zf) goto L_10001aa7;
  /* 10001a20 push 0x1000fa38 */
  push32((uint32_t)(0x1000fa38u));
  /* 10001a25 push 0x100162c8 */
  push32((uint32_t)(0x100162c8u));
  /* 10001a2a call eax */
  call_ind((uint32_t)(EAX), 0x10001a2cu);
  /* 10001a2c mov eax, dword ptr [0x100163e8] */
  EAX = (r32((uint32_t)(0x100163e8)));
  /* 10001a31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001a34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001a36 je 0x10001aa7 */
  if (C.zf) goto L_10001aa7;
  /* 10001a38 push 0x1000fa2c */
  push32((uint32_t)(0x1000fa2cu));
  /* 10001a3d push 0x100138d8 */
  push32((uint32_t)(0x100138d8u));
  /* 10001a42 call eax */
  call_ind((uint32_t)(EAX), 0x10001a44u);
  /* 10001a44 mov eax, dword ptr [0x100163e8] */
  EAX = (r32((uint32_t)(0x100163e8)));
  /* 10001a49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001a4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001a4e je 0x10001aa7 */
  if (C.zf) goto L_10001aa7;
  /* 10001a50 push 0x1000fa20 */
  push32((uint32_t)(0x1000fa20u));
  /* 10001a55 push 0x10015f80 */
  push32((uint32_t)(0x10015f80u));
  /* 10001a5a call eax */
  call_ind((uint32_t)(EAX), 0x10001a5cu);
  /* 10001a5c mov eax, dword ptr [0x100163e8] */
  EAX = (r32((uint32_t)(0x100163e8)));
  /* 10001a61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001a64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001a66 je 0x10001aa7 */
  if (C.zf) goto L_10001aa7;
  /* 10001a68 push 0x1000fa14 */
  push32((uint32_t)(0x1000fa14u));
  /* 10001a6d push 0x10016388 */
  push32((uint32_t)(0x10016388u));
  /* 10001a72 call eax */
  call_ind((uint32_t)(EAX), 0x10001a74u);
  /* 10001a74 mov eax, dword ptr [0x100163e8] */
  EAX = (r32((uint32_t)(0x100163e8)));
  /* 10001a79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001a7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001a7e je 0x10001aa7 */
  if (C.zf) goto L_10001aa7;
  /* 10001a80 push 0x1000fa08 */
  push32((uint32_t)(0x1000fa08u));
  /* 10001a85 push 0x10015f78 */
  push32((uint32_t)(0x10015f78u));
  /* 10001a8a call eax */
  call_ind((uint32_t)(EAX), 0x10001a8cu);
  /* 10001a8c mov eax, dword ptr [0x100163e8] */
  EAX = (r32((uint32_t)(0x100163e8)));
  /* 10001a91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001a94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001a96 je 0x10001aa7 */
  if (C.zf) goto L_10001aa7;
  /* 10001a98 push 0x1000f9f8 */
  push32((uint32_t)(0x1000f9f8u));
  /* 10001a9d push 0x10013890 */
  push32((uint32_t)(0x10013890u));
  /* 10001aa2 call eax */
  call_ind((uint32_t)(EAX), 0x10001aa4u);
  /* 10001aa4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10001aa7:;
  /* 10001aa7 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001aac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001aae je 0x10001ca7 */
  if (C.zf) goto L_10001ca7;
  /* 10001ab4 push 0x1000f9e4 */
  push32((uint32_t)(0x1000f9e4u));
  /* 10001ab9 push 0x10016368 */
  push32((uint32_t)(0x10016368u));
  /* 10001abe call eax */
  call_ind((uint32_t)(EAX), 0x10001ac0u);
  /* 10001ac0 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001ac5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001ac8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001aca je 0x10001ca7 */
  if (C.zf) goto L_10001ca7;
  /* 10001ad0 push 0x1000f9d0 */
  push32((uint32_t)(0x1000f9d0u));
  /* 10001ad5 push 0x100160f0 */
  push32((uint32_t)(0x100160f0u));
  /* 10001ada call eax */
  call_ind((uint32_t)(EAX), 0x10001adcu);
  /* 10001adc mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001ae1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001ae4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001ae6 je 0x10001ca7 */
  if (C.zf) goto L_10001ca7;
  /* 10001aec push 0x1000f9c8 */
  push32((uint32_t)(0x1000f9c8u));
  /* 10001af1 push 0x10013650 */
  push32((uint32_t)(0x10013650u));
  /* 10001af6 call eax */
  call_ind((uint32_t)(EAX), 0x10001af8u);
  /* 10001af8 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001afd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001b00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001b02 je 0x10001ca7 */
  if (C.zf) goto L_10001ca7;
  /* 10001b08 push 0x1000f9b0 */
  push32((uint32_t)(0x1000f9b0u));
  /* 10001b0d push 0x10016340 */
  push32((uint32_t)(0x10016340u));
  /* 10001b12 call eax */
  call_ind((uint32_t)(EAX), 0x10001b14u);
  /* 10001b14 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001b19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001b1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001b1e je 0x10001ca7 */
  if (C.zf) goto L_10001ca7;
  /* 10001b24 push 0x1000f998 */
  push32((uint32_t)(0x1000f998u));
  /* 10001b29 push 0x10016348 */
  push32((uint32_t)(0x10016348u));
  /* 10001b2e call eax */
  call_ind((uint32_t)(EAX), 0x10001b30u);
  /* 10001b30 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001b35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001b38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001b3a je 0x10001ca7 */
  if (C.zf) goto L_10001ca7;
  /* 10001b40 push 0x1000f980 */
  push32((uint32_t)(0x1000f980u));
  /* 10001b45 push 0x10016330 */
  push32((uint32_t)(0x10016330u));
  /* 10001b4a call eax */
  call_ind((uint32_t)(EAX), 0x10001b4cu);
  /* 10001b4c mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001b51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001b54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001b56 je 0x10001ca7 */
  if (C.zf) goto L_10001ca7;
  /* 10001b5c push 0x1000f968 */
  push32((uint32_t)(0x1000f968u));
  /* 10001b61 push 0x10016338 */
  push32((uint32_t)(0x10016338u));
  /* 10001b66 call eax */
  call_ind((uint32_t)(EAX), 0x10001b68u);
  /* 10001b68 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001b6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001b70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001b72 je 0x10001ca7 */
  if (C.zf) goto L_10001ca7;
  /* 10001b78 push 0x1000f950 */
  push32((uint32_t)(0x1000f950u));
  /* 10001b7d push 0x10016350 */
  push32((uint32_t)(0x10016350u));
  /* 10001b82 call eax */
  call_ind((uint32_t)(EAX), 0x10001b84u);
  /* 10001b84 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001b89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001b8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001b8e je 0x10001ca7 */
  if (C.zf) goto L_10001ca7;
  /* 10001b94 push 0x1000f938 */
  push32((uint32_t)(0x1000f938u));
  /* 10001b99 push 0x10016288 */
  push32((uint32_t)(0x10016288u));
  /* 10001b9e call eax */
  call_ind((uint32_t)(EAX), 0x10001ba0u);
  /* 10001ba0 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001ba5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001ba8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001baa je 0x10001ca7 */
  if (C.zf) goto L_10001ca7;
  /* 10001bb0 push 0x1000f920 */
  push32((uint32_t)(0x1000f920u));
  /* 10001bb5 push 0x10016270 */
  push32((uint32_t)(0x10016270u));
  /* 10001bba call eax */
  call_ind((uint32_t)(EAX), 0x10001bbcu);
  /* 10001bbc mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001bc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001bc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001bc6 je 0x10001ca7 */
  if (C.zf) goto L_10001ca7;
  /* 10001bcc push 0x1000f908 */
  push32((uint32_t)(0x1000f908u));
  /* 10001bd1 push 0x10016278 */
  push32((uint32_t)(0x10016278u));
  /* 10001bd6 call eax */
  call_ind((uint32_t)(EAX), 0x10001bd8u);
  /* 10001bd8 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001bdd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001be0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001be2 je 0x10001ca7 */
  if (C.zf) goto L_10001ca7;
  /* 10001be8 push 0x1000f8f0 */
  push32((uint32_t)(0x1000f8f0u));
  /* 10001bed push 0x10016290 */
  push32((uint32_t)(0x10016290u));
  /* 10001bf2 call eax */
  call_ind((uint32_t)(EAX), 0x10001bf4u);
  /* 10001bf4 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001bf9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001bfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001bfe je 0x10001ca7 */
  if (C.zf) goto L_10001ca7;
  /* 10001c04 push 0x1000f8d8 */
  push32((uint32_t)(0x1000f8d8u));
  /* 10001c09 push 0x10016298 */
  push32((uint32_t)(0x10016298u));
  /* 10001c0e call eax */
  call_ind((uint32_t)(EAX), 0x10001c10u);
  /* 10001c10 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001c15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001c18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001c1a je 0x10001ca7 */
  if (C.zf) goto L_10001ca7;
  /* 10001c20 push 0x1000f8c0 */
  push32((uint32_t)(0x1000f8c0u));
  /* 10001c25 push 0x10013900 */
  push32((uint32_t)(0x10013900u));
  /* 10001c2a call eax */
  call_ind((uint32_t)(EAX), 0x10001c2cu);
  /* 10001c2c mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001c31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001c34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001c36 je 0x10001ca7 */
  if (C.zf) goto L_10001ca7;
  /* 10001c38 push 0x1000f8a8 */
  push32((uint32_t)(0x1000f8a8u));
  /* 10001c3d push 0x10013908 */
  push32((uint32_t)(0x10013908u));
  /* 10001c42 call eax */
  call_ind((uint32_t)(EAX), 0x10001c44u);
  /* 10001c44 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001c49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001c4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001c4e je 0x10001ca7 */
  if (C.zf) goto L_10001ca7;
  /* 10001c50 push 0x1000f890 */
  push32((uint32_t)(0x1000f890u));
  /* 10001c55 push 0x100138f8 */
  push32((uint32_t)(0x100138f8u));
  /* 10001c5a call eax */
  call_ind((uint32_t)(EAX), 0x10001c5cu);
  /* 10001c5c mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001c61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001c64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001c66 je 0x10001ca7 */
  if (C.zf) goto L_10001ca7;
  /* 10001c68 push 0x1000f878 */
  push32((uint32_t)(0x1000f878u));
  /* 10001c6d push 0x10015f68 */
  push32((uint32_t)(0x10015f68u));
  /* 10001c72 call eax */
  call_ind((uint32_t)(EAX), 0x10001c74u);
  /* 10001c74 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001c79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001c7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001c7e je 0x10001ca7 */
  if (C.zf) goto L_10001ca7;
  /* 10001c80 push 0x1000f860 */
  push32((uint32_t)(0x1000f860u));
  /* 10001c85 push 0x10015f58 */
  push32((uint32_t)(0x10015f58u));
  /* 10001c8a call eax */
  call_ind((uint32_t)(EAX), 0x10001c8cu);
  /* 10001c8c mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001c91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001c94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001c96 je 0x10001ca7 */
  if (C.zf) goto L_10001ca7;
  /* 10001c98 push 0x1000f848 */
  push32((uint32_t)(0x1000f848u));
  /* 10001c9d push 0x10015f60 */
  push32((uint32_t)(0x10015f60u));
  /* 10001ca2 call eax */
  call_ind((uint32_t)(EAX), 0x10001ca4u);
  /* 10001ca4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10001ca7:;
  /* 10001ca7 lea eax, [esp] */
  EAX = ((uint32_t)(ESP));
  /* 10001cab push 0x1000f840 */
  push32((uint32_t)(0x1000f840u));
  /* 10001cb0 push eax */
  push32((uint32_t)(EAX));
  /* 10001cb1 call 0x10002f30 */
  push32(0x10001cb6u); f_10002f30();
  /* 10001cb6 push eax */
  push32((uint32_t)(EAX));
  /* 10001cb7 push 0x10016008 */
  push32((uint32_t)(0x10016008u));
  /* 10001cbc call 0x100026a0 */
  push32(0x10001cc1u); f_100026a0();
  /* 10001cc1 lea ecx, [esp + 0x10] */
  ECX = ((uint32_t)(ESP + 0x10));
  /* 10001cc5 push 0x1000f838 */
  push32((uint32_t)(0x1000f838u));
  /* 10001cca push ecx */
  push32((uint32_t)(ECX));
  /* 10001ccb call 0x10002f30 */
  push32(0x10001cd0u); f_10002f30();
  /* 10001cd0 push eax */
  push32((uint32_t)(EAX));
  /* 10001cd1 push 0x10016000 */
  push32((uint32_t)(0x10016000u));
  /* 10001cd6 call 0x100026a0 */
  push32(0x10001cdbu); f_100026a0();
  /* 10001cdb lea edx, [esp + 0x20] */
  EDX = ((uint32_t)(ESP + 0x20));
  /* 10001cdf push 0x1000f830 */
  push32((uint32_t)(0x1000f830u));
  /* 10001ce4 push edx */
  push32((uint32_t)(EDX));
  /* 10001ce5 call 0x10002f30 */
  push32(0x10001ceau); f_10002f30();
  /* 10001cea push eax */
  push32((uint32_t)(EAX));
  /* 10001ceb push 0x10015ff8 */
  push32((uint32_t)(0x10015ff8u));
  /* 10001cf0 call 0x100026a0 */
  push32(0x10001cf5u); f_100026a0();
  /* 10001cf5 lea eax, [esp + 0x30] */
  EAX = ((uint32_t)(ESP + 0x30));
  /* 10001cf9 push 0x1000f828 */
  push32((uint32_t)(0x1000f828u));
  /* 10001cfe push eax */
  push32((uint32_t)(EAX));
  /* 10001cff call 0x10002f30 */
  push32(0x10001d04u); f_10002f30();
  /* 10001d04 push eax */
  push32((uint32_t)(EAX));
  /* 10001d05 push 0x10015ff0 */
  push32((uint32_t)(0x10015ff0u));
  /* 10001d0a call 0x100026a0 */
  push32(0x10001d0fu); f_100026a0();
  /* 10001d0f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001d12 lea ecx, [esp] */
  ECX = ((uint32_t)(ESP));
  /* 10001d16 push 0x1000f820 */
  push32((uint32_t)(0x1000f820u));
  /* 10001d1b push ecx */
  push32((uint32_t)(ECX));
  /* 10001d1c call 0x10002f30 */
  push32(0x10001d21u); f_10002f30();
  /* 10001d21 push eax */
  push32((uint32_t)(EAX));
  /* 10001d22 push 0x10015fe8 */
  push32((uint32_t)(0x10015fe8u));
  /* 10001d27 call 0x100026a0 */
  push32(0x10001d2cu); f_100026a0();
  /* 10001d2c lea edx, [esp + 0x10] */
  EDX = ((uint32_t)(ESP + 0x10));
  /* 10001d30 push 0x1000f818 */
  push32((uint32_t)(0x1000f818u));
  /* 10001d35 push edx */
  push32((uint32_t)(EDX));
  /* 10001d36 call 0x10002f30 */
  push32(0x10001d3bu); f_10002f30();
  /* 10001d3b push eax */
  push32((uint32_t)(EAX));
  /* 10001d3c push 0x10015fe0 */
  push32((uint32_t)(0x10015fe0u));
  /* 10001d41 call 0x100026a0 */
  push32(0x10001d46u); f_100026a0();
  /* 10001d46 lea eax, [esp + 0x20] */
  EAX = ((uint32_t)(ESP + 0x20));
  /* 10001d4a push 0x1000f810 */
  push32((uint32_t)(0x1000f810u));
  /* 10001d4f push eax */
  push32((uint32_t)(EAX));
  /* 10001d50 call 0x10002f30 */
  push32(0x10001d55u); f_10002f30();
  /* 10001d55 push eax */
  push32((uint32_t)(EAX));
  /* 10001d56 push 0x10016120 */
  push32((uint32_t)(0x10016120u));
  /* 10001d5b call 0x100026a0 */
  push32(0x10001d60u); f_100026a0();
  /* 10001d60 lea ecx, [esp + 0x30] */
  ECX = ((uint32_t)(ESP + 0x30));
  /* 10001d64 push 0x1000f808 */
  push32((uint32_t)(0x1000f808u));
  /* 10001d69 push ecx */
  push32((uint32_t)(ECX));
  /* 10001d6a call 0x10002f30 */
  push32(0x10001d6fu); f_10002f30();
  /* 10001d6f push eax */
  push32((uint32_t)(EAX));
  /* 10001d70 push 0x10016118 */
  push32((uint32_t)(0x10016118u));
  /* 10001d75 call 0x100026a0 */
  push32(0x10001d7au); f_100026a0();
  /* 10001d7a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001d7d lea edx, [esp] */
  EDX = ((uint32_t)(ESP));
  /* 10001d81 push 0x1000f800 */
  push32((uint32_t)(0x1000f800u));
  /* 10001d86 push edx */
  push32((uint32_t)(EDX));
  /* 10001d87 call 0x10002f30 */
  push32(0x10001d8cu); f_10002f30();
  /* 10001d8c push eax */
  push32((uint32_t)(EAX));
  /* 10001d8d push 0x10016110 */
  push32((uint32_t)(0x10016110u));
  /* 10001d92 call 0x100026a0 */
  push32(0x10001d97u); f_100026a0();
  /* 10001d97 lea eax, [esp + 0x10] */
  EAX = ((uint32_t)(ESP + 0x10));
  /* 10001d9b push 0x1000f7f8 */
  push32((uint32_t)(0x1000f7f8u));
  /* 10001da0 push eax */
  push32((uint32_t)(EAX));
  /* 10001da1 call 0x10002f30 */
  push32(0x10001da6u); f_10002f30();
  /* 10001da6 push eax */
  push32((uint32_t)(EAX));
  /* 10001da7 push 0x10016108 */
  push32((uint32_t)(0x10016108u));
  /* 10001dac call 0x100026a0 */
  push32(0x10001db1u); f_100026a0();
  /* 10001db1 lea ecx, [esp + 0x20] */
  ECX = ((uint32_t)(ESP + 0x20));
  /* 10001db5 push 0x1000f7f0 */
  push32((uint32_t)(0x1000f7f0u));
  /* 10001dba push ecx */
  push32((uint32_t)(ECX));
  /* 10001dbb call 0x10002f30 */
  push32(0x10001dc0u); f_10002f30();
  /* 10001dc0 push eax */
  push32((uint32_t)(EAX));
  /* 10001dc1 push 0x100160f8 */
  push32((uint32_t)(0x100160f8u));
  /* 10001dc6 call 0x100026a0 */
  push32(0x10001dcbu); f_100026a0();
  /* 10001dcb push 0x1000f7e8 */
  push32((uint32_t)(0x1000f7e8u));
  /* 10001dd0 lea edx, [esp + 0x34] */
  EDX = ((uint32_t)(ESP + 0x34));
  /* 10001dd4 push edx */
  push32((uint32_t)(EDX));
  /* 10001dd5 call 0x10002f30 */
  push32(0x10001ddau); f_10002f30();
  /* 10001dda push eax */
  push32((uint32_t)(EAX));
  /* 10001ddb push 0x10016148 */
  push32((uint32_t)(0x10016148u));
  /* 10001de0 call 0x100026a0 */
  push32(0x10001de5u); f_100026a0();
  /* 10001de5 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001dea add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001ded test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001def je 0x10001f24 */
  if (C.zf) goto L_10001f24;
  /* 10001df5 push 0x1000f7d4 */
  push32((uint32_t)(0x1000f7d4u));
  /* 10001dfa push 0x100136a8 */
  push32((uint32_t)(0x100136a8u));
  /* 10001dff call eax */
  call_ind((uint32_t)(EAX), 0x10001e01u);
  /* 10001e01 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001e06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001e09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001e0b je 0x10001f24 */
  if (C.zf) goto L_10001f24;
  /* 10001e11 push 0x1000f7c0 */
  push32((uint32_t)(0x1000f7c0u));
  /* 10001e16 push 0x100136a0 */
  push32((uint32_t)(0x100136a0u));
  /* 10001e1b call eax */
  call_ind((uint32_t)(EAX), 0x10001e1du);
  /* 10001e1d mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001e22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001e25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001e27 je 0x10001f24 */
  if (C.zf) goto L_10001f24;
  /* 10001e2d push 0x1000f7ac */
  push32((uint32_t)(0x1000f7acu));
  /* 10001e32 push 0x10013698 */
  push32((uint32_t)(0x10013698u));
  /* 10001e37 call eax */
  call_ind((uint32_t)(EAX), 0x10001e39u);
  /* 10001e39 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001e3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001e41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001e43 je 0x10001f24 */
  if (C.zf) goto L_10001f24;
  /* 10001e49 push 0x1000f798 */
  push32((uint32_t)(0x1000f798u));
  /* 10001e4e push 0x10013690 */
  push32((uint32_t)(0x10013690u));
  /* 10001e53 call eax */
  call_ind((uint32_t)(EAX), 0x10001e55u);
  /* 10001e55 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001e5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001e5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001e5f je 0x10001f24 */
  if (C.zf) goto L_10001f24;
  /* 10001e65 push 0x1000f784 */
  push32((uint32_t)(0x1000f784u));
  /* 10001e6a push 0x10013668 */
  push32((uint32_t)(0x10013668u));
  /* 10001e6f call eax */
  call_ind((uint32_t)(EAX), 0x10001e71u);
  /* 10001e71 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001e76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001e79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001e7b je 0x10001f24 */
  if (C.zf) goto L_10001f24;
  /* 10001e81 push 0x1000f770 */
  push32((uint32_t)(0x1000f770u));
  /* 10001e86 push 0x10013660 */
  push32((uint32_t)(0x10013660u));
  /* 10001e8b call eax */
  call_ind((uint32_t)(EAX), 0x10001e8du);
  /* 10001e8d mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001e92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001e95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001e97 je 0x10001f24 */
  if (C.zf) goto L_10001f24;
  /* 10001e9d push 0x1000f75c */
  push32((uint32_t)(0x1000f75cu));
  /* 10001ea2 push 0x10013738 */
  push32((uint32_t)(0x10013738u));
  /* 10001ea7 call eax */
  call_ind((uint32_t)(EAX), 0x10001ea9u);
  /* 10001ea9 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001eae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001eb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001eb3 je 0x10001f24 */
  if (C.zf) goto L_10001f24;
  /* 10001eb5 push 0x1000f748 */
  push32((uint32_t)(0x1000f748u));
  /* 10001eba push 0x10013730 */
  push32((uint32_t)(0x10013730u));
  /* 10001ebf call eax */
  call_ind((uint32_t)(EAX), 0x10001ec1u);
  /* 10001ec1 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001ec6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001ec9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001ecb je 0x10001f24 */
  if (C.zf) goto L_10001f24;
  /* 10001ecd push 0x1000f734 */
  push32((uint32_t)(0x1000f734u));
  /* 10001ed2 push 0x10013728 */
  push32((uint32_t)(0x10013728u));
  /* 10001ed7 call eax */
  call_ind((uint32_t)(EAX), 0x10001ed9u);
  /* 10001ed9 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001ede add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001ee1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001ee3 je 0x10001f24 */
  if (C.zf) goto L_10001f24;
  /* 10001ee5 push 0x1000f720 */
  push32((uint32_t)(0x1000f720u));
  /* 10001eea push 0x10013710 */
  push32((uint32_t)(0x10013710u));
  /* 10001eef call eax */
  call_ind((uint32_t)(EAX), 0x10001ef1u);
  /* 10001ef1 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001ef6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001ef9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001efb je 0x10001f24 */
  if (C.zf) goto L_10001f24;
  /* 10001efd push 0x1000f70c */
  push32((uint32_t)(0x1000f70cu));
  /* 10001f02 push 0x10013708 */
  push32((uint32_t)(0x10013708u));
  /* 10001f07 call eax */
  call_ind((uint32_t)(EAX), 0x10001f09u);
  /* 10001f09 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10001f0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001f11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001f13 je 0x10001f24 */
  if (C.zf) goto L_10001f24;
  /* 10001f15 push 0x1000f6f8 */
  push32((uint32_t)(0x1000f6f8u));
  /* 10001f1a push 0x10013700 */
  push32((uint32_t)(0x10013700u));
  /* 10001f1f call eax */
  call_ind((uint32_t)(EAX), 0x10001f21u);
  /* 10001f21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10001f24:;
  /* 10001f24 lea eax, [esp + 0x30] */
  EAX = ((uint32_t)(ESP + 0x30));
  /* 10001f28 push 0x1000f840 */
  push32((uint32_t)(0x1000f840u));
  /* 10001f2d push eax */
  push32((uint32_t)(EAX));
  /* 10001f2e call 0x10002f30 */
  push32(0x10001f33u); f_10002f30();
  /* 10001f33 push eax */
  push32((uint32_t)(EAX));
  /* 10001f34 push 0x100136d0 */
  push32((uint32_t)(0x100136d0u));
  /* 10001f39 call 0x100026a0 */
  push32(0x10001f3eu); f_100026a0();
  /* 10001f3e lea ecx, [esp + 0x40] */
  ECX = ((uint32_t)(ESP + 0x40));
  /* 10001f42 push 0x1000f838 */
  push32((uint32_t)(0x1000f838u));
  /* 10001f47 push ecx */
  push32((uint32_t)(ECX));
  /* 10001f48 call 0x10002f30 */
  push32(0x10001f4du); f_10002f30();
  /* 10001f4d push eax */
  push32((uint32_t)(EAX));
  /* 10001f4e push 0x100136d8 */
  push32((uint32_t)(0x100136d8u));
  /* 10001f53 call 0x100026a0 */
  push32(0x10001f58u); f_100026a0();
  /* 10001f58 lea edx, [esp + 0x50] */
  EDX = ((uint32_t)(ESP + 0x50));
  /* 10001f5c push 0x1000f830 */
  push32((uint32_t)(0x1000f830u));
  /* 10001f61 push edx */
  push32((uint32_t)(EDX));
  /* 10001f62 call 0x10002f30 */
  push32(0x10001f67u); f_10002f30();
  /* 10001f67 push eax */
  push32((uint32_t)(EAX));
  /* 10001f68 push 0x100136e0 */
  push32((uint32_t)(0x100136e0u));
  /* 10001f6d call 0x100026a0 */
  push32(0x10001f72u); f_100026a0();
  /* 10001f72 lea eax, [esp + 0x60] */
  EAX = ((uint32_t)(ESP + 0x60));
  /* 10001f76 push 0x1000f828 */
  push32((uint32_t)(0x1000f828u));
  /* 10001f7b push eax */
  push32((uint32_t)(EAX));
  /* 10001f7c call 0x10002f30 */
  push32(0x10001f81u); f_10002f30();
  /* 10001f81 push eax */
  push32((uint32_t)(EAX));
  /* 10001f82 push 0x100136e8 */
  push32((uint32_t)(0x100136e8u));
  /* 10001f87 call 0x100026a0 */
  push32(0x10001f8cu); f_100026a0();
  /* 10001f8c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001f8f lea ecx, [esp + 0x30] */
  ECX = ((uint32_t)(ESP + 0x30));
  /* 10001f93 push 0x1000f820 */
  push32((uint32_t)(0x1000f820u));
  /* 10001f98 push ecx */
  push32((uint32_t)(ECX));
  /* 10001f99 call 0x10002f30 */
  push32(0x10001f9eu); f_10002f30();
  /* 10001f9e push eax */
  push32((uint32_t)(EAX));
  /* 10001f9f push 0x100136b0 */
  push32((uint32_t)(0x100136b0u));
  /* 10001fa4 call 0x100026a0 */
  push32(0x10001fa9u); f_100026a0();
  /* 10001fa9 lea edx, [esp + 0x40] */
  EDX = ((uint32_t)(ESP + 0x40));
  /* 10001fad push 0x1000f818 */
  push32((uint32_t)(0x1000f818u));
  /* 10001fb2 push edx */
  push32((uint32_t)(EDX));
  /* 10001fb3 call 0x10002f30 */
  push32(0x10001fb8u); f_10002f30();
  /* 10001fb8 push eax */
  push32((uint32_t)(EAX));
  /* 10001fb9 push 0x100136c0 */
  push32((uint32_t)(0x100136c0u));
  /* 10001fbe call 0x100026a0 */
  push32(0x10001fc3u); f_100026a0();
  /* 10001fc3 lea eax, [esp + 0x50] */
  EAX = ((uint32_t)(ESP + 0x50));
  /* 10001fc7 push 0x1000f810 */
  push32((uint32_t)(0x1000f810u));
  /* 10001fcc push eax */
  push32((uint32_t)(EAX));
  /* 10001fcd call 0x10002f30 */
  push32(0x10001fd2u); f_10002f30();
  /* 10001fd2 push eax */
  push32((uint32_t)(EAX));
  /* 10001fd3 push 0x10013778 */
  push32((uint32_t)(0x10013778u));
  /* 10001fd8 call 0x100026a0 */
  push32(0x10001fddu); f_100026a0();
  /* 10001fdd lea ecx, [esp + 0x60] */
  ECX = ((uint32_t)(ESP + 0x60));
  /* 10001fe1 push 0x1000f808 */
  push32((uint32_t)(0x1000f808u));
  /* 10001fe6 push ecx */
  push32((uint32_t)(ECX));
  /* 10001fe7 call 0x10002f30 */
  push32(0x10001fecu); f_10002f30();
  /* 10001fec push eax */
  push32((uint32_t)(EAX));
  /* 10001fed push 0x10013780 */
  push32((uint32_t)(0x10013780u));
  /* 10001ff2 call 0x100026a0 */
  push32(0x10001ff7u); f_100026a0();
  /* 10001ff7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001ffa lea edx, [esp + 0x30] */
  EDX = ((uint32_t)(ESP + 0x30));
  /* 10001ffe push 0x1000f800 */
  push32((uint32_t)(0x1000f800u));
  /* 10002003 push edx */
  push32((uint32_t)(EDX));
  /* 10002004 call 0x10002f30 */
  push32(0x10002009u); f_10002f30();
  /* 10002009 push eax */
  push32((uint32_t)(EAX));
  /* 1000200a push 0x10013788 */
  push32((uint32_t)(0x10013788u));
  /* 1000200f call 0x100026a0 */
  push32(0x10002014u); f_100026a0();
  /* 10002014 lea eax, [esp + 0x40] */
  EAX = ((uint32_t)(ESP + 0x40));
  /* 10002018 push 0x1000f7f8 */
  push32((uint32_t)(0x1000f7f8u));
  /* 1000201d push eax */
  push32((uint32_t)(EAX));
  /* 1000201e call 0x10002f30 */
  push32(0x10002023u); f_10002f30();
  /* 10002023 push eax */
  push32((uint32_t)(EAX));
  /* 10002024 push 0x10013760 */
  push32((uint32_t)(0x10013760u));
  /* 10002029 call 0x100026a0 */
  push32(0x1000202eu); f_100026a0();
  /* 1000202e lea ecx, [esp + 0x50] */
  ECX = ((uint32_t)(ESP + 0x50));
  /* 10002032 push 0x1000f7f0 */
  push32((uint32_t)(0x1000f7f0u));
  /* 10002037 push ecx */
  push32((uint32_t)(ECX));
  /* 10002038 call 0x10002f30 */
  push32(0x1000203du); f_10002f30();
  /* 1000203d push eax */
  push32((uint32_t)(EAX));
  /* 1000203e push 0x10013768 */
  push32((uint32_t)(0x10013768u));
  /* 10002043 call 0x100026a0 */
  push32(0x10002048u); f_100026a0();
  /* 10002048 push 0x1000f7e8 */
  push32((uint32_t)(0x1000f7e8u));
  /* 1000204d lea edx, [esp + 0x64] */
  EDX = ((uint32_t)(ESP + 0x64));
  /* 10002051 push edx */
  push32((uint32_t)(EDX));
  /* 10002052 call 0x10002f30 */
  push32(0x10002057u); f_10002f30();
  /* 10002057 push eax */
  push32((uint32_t)(EAX));
  /* 10002058 push 0x10013770 */
  push32((uint32_t)(0x10013770u));
  /* 1000205d call 0x100026a0 */
  push32(0x10002062u); f_100026a0();
  /* 10002062 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10002067 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000206a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000206c je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 10002072 push 0x1000f6e8 */
  push32((uint32_t)(0x1000f6e8u));
  /* 10002077 push 0x100161c8 */
  push32((uint32_t)(0x100161c8u));
  /* 1000207c call eax */
  call_ind((uint32_t)(EAX), 0x1000207eu);
  /* 1000207e mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10002083 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002086 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10002088 je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 1000208e push 0x1000f6d4 */
  push32((uint32_t)(0x1000f6d4u));
  /* 10002093 push 0x100161c0 */
  push32((uint32_t)(0x100161c0u));
  /* 10002098 call eax */
  call_ind((uint32_t)(EAX), 0x1000209au);
  /* 1000209a mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 1000209f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100020a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100020a4 je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 100020aa push 0x1000f6c0 */
  push32((uint32_t)(0x1000f6c0u));
  /* 100020af push 0x10016190 */
  push32((uint32_t)(0x10016190u));
  /* 100020b4 call eax */
  call_ind((uint32_t)(EAX), 0x100020b6u);
  /* 100020b6 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 100020bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100020be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100020c0 je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 100020c6 push 0x1000f6ac */
  push32((uint32_t)(0x1000f6acu));
  /* 100020cb push 0x10016188 */
  push32((uint32_t)(0x10016188u));
  /* 100020d0 call eax */
  call_ind((uint32_t)(EAX), 0x100020d2u);
  /* 100020d2 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 100020d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100020da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100020dc je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 100020e2 push 0x1000f698 */
  push32((uint32_t)(0x1000f698u));
  /* 100020e7 push 0x10016198 */
  push32((uint32_t)(0x10016198u));
  /* 100020ec call eax */
  call_ind((uint32_t)(EAX), 0x100020eeu);
  /* 100020ee mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 100020f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100020f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100020f8 je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 100020fe push 0x1000f684 */
  push32((uint32_t)(0x1000f684u));
  /* 10002103 push 0x10016088 */
  push32((uint32_t)(0x10016088u));
  /* 10002108 call eax */
  call_ind((uint32_t)(EAX), 0x1000210au);
  /* 1000210a mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 1000210f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002112 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10002114 je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 1000211a push 0x1000f670 */
  push32((uint32_t)(0x1000f670u));
  /* 1000211f push 0x10016090 */
  push32((uint32_t)(0x10016090u));
  /* 10002124 call eax */
  call_ind((uint32_t)(EAX), 0x10002126u);
  /* 10002126 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 1000212b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000212e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10002130 je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 10002136 push 0x1000f65c */
  push32((uint32_t)(0x1000f65cu));
  /* 1000213b push 0x10016098 */
  push32((uint32_t)(0x10016098u));
  /* 10002140 call eax */
  call_ind((uint32_t)(EAX), 0x10002142u);
  /* 10002142 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10002147 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000214a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000214c je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 10002152 push 0x1000f648 */
  push32((uint32_t)(0x1000f648u));
  /* 10002157 push 0x100160a0 */
  push32((uint32_t)(0x100160a0u));
  /* 1000215c call eax */
  call_ind((uint32_t)(EAX), 0x1000215eu);
  /* 1000215e mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10002163 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002166 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10002168 je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 1000216e push 0x1000f640 */
  push32((uint32_t)(0x1000f640u));
  /* 10002173 push 0x100161a8 */
  push32((uint32_t)(0x100161a8u));
  /* 10002178 call eax */
  call_ind((uint32_t)(EAX), 0x1000217au);
  /* 1000217a mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 1000217f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002182 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10002184 je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 1000218a push 0x1000f638 */
  push32((uint32_t)(0x1000f638u));
  /* 1000218f push 0x10016010 */
  push32((uint32_t)(0x10016010u));
  /* 10002194 call eax */
  call_ind((uint32_t)(EAX), 0x10002196u);
  /* 10002196 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 1000219b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000219e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100021a0 je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 100021a6 push 0x1000f630 */
  push32((uint32_t)(0x1000f630u));
  /* 100021ab push 0x10013948 */
  push32((uint32_t)(0x10013948u));
  /* 100021b0 call eax */
  call_ind((uint32_t)(EAX), 0x100021b2u);
  /* 100021b2 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 100021b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100021ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100021bc je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 100021c2 push 0x1000f628 */
  push32((uint32_t)(0x1000f628u));
  /* 100021c7 push 0x10016068 */
  push32((uint32_t)(0x10016068u));
  /* 100021cc call eax */
  call_ind((uint32_t)(EAX), 0x100021ceu);
  /* 100021ce mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 100021d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100021d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100021d8 je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 100021de push 0x1000f620 */
  push32((uint32_t)(0x1000f620u));
  /* 100021e3 push 0x10016020 */
  push32((uint32_t)(0x10016020u));
  /* 100021e8 call eax */
  call_ind((uint32_t)(EAX), 0x100021eau);
  /* 100021ea mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 100021ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100021f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100021f4 je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 100021fa push 0x1000f618 */
  push32((uint32_t)(0x1000f618u));
  /* 100021ff push 0x10016028 */
  push32((uint32_t)(0x10016028u));
  /* 10002204 call eax */
  call_ind((uint32_t)(EAX), 0x10002206u);
  /* 10002206 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 1000220b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000220e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10002210 je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 10002216 push 0x1000f610 */
  push32((uint32_t)(0x1000f610u));
  /* 1000221b push 0x10016030 */
  push32((uint32_t)(0x10016030u));
  /* 10002220 call eax */
  call_ind((uint32_t)(EAX), 0x10002222u);
  /* 10002222 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10002227 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000222a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000222c je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 10002232 push 0x1000f608 */
  push32((uint32_t)(0x1000f608u));
  /* 10002237 push 0x10016260 */
  push32((uint32_t)(0x10016260u));
  /* 1000223c call eax */
  call_ind((uint32_t)(EAX), 0x1000223eu);
  /* 1000223e mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10002243 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002246 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10002248 je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 1000224e push 0x1000f600 */
  push32((uint32_t)(0x1000f600u));
  /* 10002253 push 0x10016100 */
  push32((uint32_t)(0x10016100u));
  /* 10002258 call eax */
  call_ind((uint32_t)(EAX), 0x1000225au);
  /* 1000225a mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 1000225f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002262 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10002264 je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 1000226a push 0x1000f5f8 */
  push32((uint32_t)(0x1000f5f8u));
  /* 1000226f push 0x10016140 */
  push32((uint32_t)(0x10016140u));
  /* 10002274 call eax */
  call_ind((uint32_t)(EAX), 0x10002276u);
  /* 10002276 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 1000227b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000227e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10002280 je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 10002286 push 0x1000f5f0 */
  push32((uint32_t)(0x1000f5f0u));
  /* 1000228b push 0x100161f8 */
  push32((uint32_t)(0x100161f8u));
  /* 10002290 call eax */
  call_ind((uint32_t)(EAX), 0x10002292u);
  /* 10002292 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10002297 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000229a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000229c je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 100022a2 push 0x1000f5e8 */
  push32((uint32_t)(0x1000f5e8u));
  /* 100022a7 push 0x10016200 */
  push32((uint32_t)(0x10016200u));
  /* 100022ac call eax */
  call_ind((uint32_t)(EAX), 0x100022aeu);
  /* 100022ae mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 100022b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100022b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100022b8 je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 100022be push 0x1000f5e0 */
  push32((uint32_t)(0x1000f5e0u));
  /* 100022c3 push 0x10016158 */
  push32((uint32_t)(0x10016158u));
  /* 100022c8 call eax */
  call_ind((uint32_t)(EAX), 0x100022cau);
  /* 100022ca mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 100022cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100022d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100022d4 je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 100022da push 0x1000f5d8 */
  push32((uint32_t)(0x1000f5d8u));
  /* 100022df push 0x10016168 */
  push32((uint32_t)(0x10016168u));
  /* 100022e4 call eax */
  call_ind((uint32_t)(EAX), 0x100022e6u);
  /* 100022e6 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 100022eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100022ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100022f0 je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 100022f6 push 0x1000f5d0 */
  push32((uint32_t)(0x1000f5d0u));
  /* 100022fb push 0x10016170 */
  push32((uint32_t)(0x10016170u));
  /* 10002300 call eax */
  call_ind((uint32_t)(EAX), 0x10002302u);
  /* 10002302 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10002307 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000230a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000230c je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 10002312 push 0x1000f5c8 */
  push32((uint32_t)(0x1000f5c8u));
  /* 10002317 push 0x10016160 */
  push32((uint32_t)(0x10016160u));
  /* 1000231c call eax */
  call_ind((uint32_t)(EAX), 0x1000231eu);
  /* 1000231e mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10002323 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002326 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10002328 je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 1000232e push 0x1000f5c0 */
  push32((uint32_t)(0x1000f5c0u));
  /* 10002333 push 0x10013940 */
  push32((uint32_t)(0x10013940u));
  /* 10002338 call eax */
  call_ind((uint32_t)(EAX), 0x1000233au);
  /* 1000233a mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 1000233f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002342 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10002344 je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 1000234a push 0x1000f5b8 */
  push32((uint32_t)(0x1000f5b8u));
  /* 1000234f push 0x100138d0 */
  push32((uint32_t)(0x100138d0u));
  /* 10002354 call eax */
  call_ind((uint32_t)(EAX), 0x10002356u);
  /* 10002356 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 1000235b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000235e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10002360 je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 10002366 push 0x1000f5b0 */
  push32((uint32_t)(0x1000f5b0u));
  /* 1000236b push 0x10013790 */
  push32((uint32_t)(0x10013790u));
  /* 10002370 call eax */
  call_ind((uint32_t)(EAX), 0x10002372u);
  /* 10002372 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10002377 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000237a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000237c je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 10002382 push 0x1000f5a8 */
  push32((uint32_t)(0x1000f5a8u));
  /* 10002387 push 0x100160e0 */
  push32((uint32_t)(0x100160e0u));
  /* 1000238c call eax */
  call_ind((uint32_t)(EAX), 0x1000238eu);
  /* 1000238e mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10002393 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002396 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10002398 je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 1000239e push 0x1000f5a0 */
  push32((uint32_t)(0x1000f5a0u));
  /* 100023a3 push 0x10013930 */
  push32((uint32_t)(0x10013930u));
  /* 100023a8 call eax */
  call_ind((uint32_t)(EAX), 0x100023aau);
  /* 100023aa mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 100023af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100023b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100023b4 je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 100023ba push 0x1000f598 */
  push32((uint32_t)(0x1000f598u));
  /* 100023bf push 0x100161e8 */
  push32((uint32_t)(0x100161e8u));
  /* 100023c4 call eax */
  call_ind((uint32_t)(EAX), 0x100023c6u);
  /* 100023c6 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 100023cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100023ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100023d0 je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 100023d6 push 0x1000f590 */
  push32((uint32_t)(0x1000f590u));
  /* 100023db push 0x100161f0 */
  push32((uint32_t)(0x100161f0u));
  /* 100023e0 call eax */
  call_ind((uint32_t)(EAX), 0x100023e2u);
  /* 100023e2 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 100023e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100023ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100023ec je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 100023f2 push 0x1000f588 */
  push32((uint32_t)(0x1000f588u));
  /* 100023f7 push 0x10013860 */
  push32((uint32_t)(0x10013860u));
  /* 100023fc call eax */
  call_ind((uint32_t)(EAX), 0x100023feu);
  /* 100023fe mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10002403 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002406 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10002408 je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 1000240e push 0x1000f580 */
  push32((uint32_t)(0x1000f580u));
  /* 10002413 push 0x10013870 */
  push32((uint32_t)(0x10013870u));
  /* 10002418 call eax */
  call_ind((uint32_t)(EAX), 0x1000241au);
  /* 1000241a mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 1000241f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002422 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10002424 je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 1000242a push 0x1000f578 */
  push32((uint32_t)(0x1000f578u));
  /* 1000242f push 0x10013758 */
  push32((uint32_t)(0x10013758u));
  /* 10002434 call eax */
  call_ind((uint32_t)(EAX), 0x10002436u);
  /* 10002436 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 1000243b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000243e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10002440 je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 10002446 push 0x1000f570 */
  push32((uint32_t)(0x1000f570u));
  /* 1000244b push 0x10013618 */
  push32((uint32_t)(0x10013618u));
  /* 10002450 call eax */
  call_ind((uint32_t)(EAX), 0x10002452u);
  /* 10002452 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10002457 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000245a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000245c je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 10002462 push 0x1000f568 */
  push32((uint32_t)(0x1000f568u));
  /* 10002467 push 0x100136f8 */
  push32((uint32_t)(0x100136f8u));
  /* 1000246c call eax */
  call_ind((uint32_t)(EAX), 0x1000246eu);
  /* 1000246e mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 10002473 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002476 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10002478 je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 1000247e push 0x1000f560 */
  push32((uint32_t)(0x1000f560u));
  /* 10002483 push 0x10013620 */
  push32((uint32_t)(0x10013620u));
  /* 10002488 call eax */
  call_ind((uint32_t)(EAX), 0x1000248au);
  /* 1000248a mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 1000248f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002492 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10002494 je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 1000249a push 0x1000f54c */
  push32((uint32_t)(0x1000f54cu));
  /* 1000249f push 0x100162d8 */
  push32((uint32_t)(0x100162d8u));
  /* 100024a4 call eax */
  call_ind((uint32_t)(EAX), 0x100024a6u);
  /* 100024a6 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 100024ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100024ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100024b0 je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 100024b2 push 0x1000f538 */
  push32((uint32_t)(0x1000f538u));
  /* 100024b7 push 0x100162c0 */
  push32((uint32_t)(0x100162c0u));
  /* 100024bc call eax */
  call_ind((uint32_t)(EAX), 0x100024beu);
  /* 100024be mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 100024c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100024c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100024c8 je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 100024ca push 0x1000f524 */
  push32((uint32_t)(0x1000f524u));
  /* 100024cf push 0x100162d0 */
  push32((uint32_t)(0x100162d0u));
  /* 100024d4 call eax */
  call_ind((uint32_t)(EAX), 0x100024d6u);
  /* 100024d6 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 100024db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100024de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100024e0 je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 100024e2 push 0x1000f510 */
  push32((uint32_t)(0x1000f510u));
  /* 100024e7 push 0x100162b0 */
  push32((uint32_t)(0x100162b0u));
  /* 100024ec call eax */
  call_ind((uint32_t)(EAX), 0x100024eeu);
  /* 100024ee mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 100024f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100024f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100024f8 je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 100024fa push 0x1000f4fc */
  push32((uint32_t)(0x1000f4fcu));
  /* 100024ff push 0x100162b8 */
  push32((uint32_t)(0x100162b8u));
  /* 10002504 call eax */
  call_ind((uint32_t)(EAX), 0x10002506u);
  /* 10002506 mov eax, dword ptr [0x100163ec] */
  EAX = (r32((uint32_t)(0x100163ec)));
  /* 1000250b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000250e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10002510 je 0x10002521 */
  if (C.zf) goto L_10002521;
  /* 10002512 push 0x1000f4e8 */
  push32((uint32_t)(0x1000f4e8u));
  /* 10002517 push 0x100162a8 */
  push32((uint32_t)(0x100162a8u));
  /* 1000251c call eax */
  call_ind((uint32_t)(EAX), 0x1000251eu);
  /* 1000251e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10002521:;
  /* 10002521 push 4 */
  push32((uint32_t)(0x4u));
  /* 10002523 push 4 */
  push32((uint32_t)(0x4u));
  /* 10002525 push 9 */
  push32((uint32_t)(0x9u));
  /* 10002527 call dword ptr [0x10016504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016504))), 0x1000252du);
  /* 1000252d push 6 */
  push32((uint32_t)(0x6u));
  /* 1000252f call dword ptr [0x10016510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016510))), 0x10002535u);
  /* 10002535 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10002537 push 0x1000f4d4 */
  push32((uint32_t)(0x1000f4d4u));
  /* 1000253c push 0 */
  push32((uint32_t)(0x0u));
  /* 1000253e call dword ptr [0x10016514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016514))), 0x10002544u);
  /* 10002544 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10002546 push 0x1000f4c0 */
  push32((uint32_t)(0x1000f4c0u));
  /* 1000254b push 1 */
  push32((uint32_t)(0x1u));
  /* 1000254d call dword ptr [0x10016514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016514))), 0x10002553u);
  /* 10002553 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10002555 push 0x1000f4ac */
  push32((uint32_t)(0x1000f4acu));
  /* 1000255a push 2 */
  push32((uint32_t)(0x2u));
  /* 1000255c call dword ptr [0x10016514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016514))), 0x10002562u);
  /* 10002562 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10002564 push 0x1000f498 */
  push32((uint32_t)(0x1000f498u));
  /* 10002569 push 3 */
  push32((uint32_t)(0x3u));
  /* 1000256b call dword ptr [0x10016514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016514))), 0x10002571u);
  /* 10002571 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002574 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10002576 push 0x1000f484 */
  push32((uint32_t)(0x1000f484u));
  /* 1000257b push 4 */
  push32((uint32_t)(0x4u));
  /* 1000257d call dword ptr [0x10016514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016514))), 0x10002583u);
  /* 10002583 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10002585 push 0x1000f470 */
  push32((uint32_t)(0x1000f470u));
  /* 1000258a push 5 */
  push32((uint32_t)(0x5u));
  /* 1000258c call dword ptr [0x10016514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016514))), 0x10002592u);
  /* 10002592 push 0x1000f464 */
  push32((uint32_t)(0x1000f464u));
  /* 10002597 call dword ptr [0x1001654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001654c))), 0x1000259du);
  /* 1000259d push 0x1000f454 */
  push32((uint32_t)(0x1000f454u));
  /* 100025a2 call dword ptr [0x10016554] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016554))), 0x100025a8u);
  /* 100025a8 push 0x1000f448 */
  push32((uint32_t)(0x1000f448u));
  /* 100025ad call dword ptr [0x1001655c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001655c))), 0x100025b3u);
  /* 100025b3 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 100025b8 call dword ptr [0x10016518] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016518))), 0x100025beu);
  /* 100025be push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100025c0 call dword ptr [0x1001651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001651c))), 0x100025c6u);
  /* 100025c6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100025c8 call dword ptr [0x10016520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016520))), 0x100025ceu);
  /* 100025ce push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 100025d3 call dword ptr [0x10016524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016524))), 0x100025d9u);
  /* 100025d9 push 5 */
  push32((uint32_t)(0x5u));
  /* 100025db call dword ptr [0x10016528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016528))), 0x100025e1u);
  /* 100025e1 add esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100025e7 ret  */
  ESPCHK(0x10001010u, _esp0);
  ESP += 4; return;
}

/* FUN_100025f0 @ 0x100025f0 (20 bytes, 7 insns) */
void f_100025f0(void) {
  FTRACE(0x100025f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100025f0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100025f4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100025f8 push eax */
  push32((uint32_t)(EAX));
  /* 100025f9 push ecx */
  push32((uint32_t)(ECX));
  /* 100025fa call dword ptr [0x10016500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016500))), 0x10002600u);
  /* 10002600 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002603 ret  */
  ESPCHK(0x100025f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002610 @ 0x10002610 (25 bytes, 9 insns) */
void f_10002610(void) {
  FTRACE(0x10002610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10002610 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10002614 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10002618 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1000261c push eax */
  push32((uint32_t)(EAX));
  /* 1000261d push ecx */
  push32((uint32_t)(ECX));
  /* 1000261e push edx */
  push32((uint32_t)(EDX));
  /* 1000261f call dword ptr [0x1001650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001650c))), 0x10002625u);
  /* 10002625 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002628 ret  */
  ESPCHK(0x10002610u, _esp0);
  ESP += 4; return;
}

/* FUN_10002630 @ 0x10002630 (6 bytes, 1 insns) */
void f_10002630(void) {
  FTRACE(0x10002630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10002630 jmp dword ptr [0x10016538] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10016538)))); return;
}

/* FUN_10002640 @ 0x10002640 (20 bytes, 7 insns) */
void f_10002640(void) {
  FTRACE(0x10002640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10002640 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10002644 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10002648 push eax */
  push32((uint32_t)(EAX));
  /* 10002649 push ecx */
  push32((uint32_t)(ECX));
  /* 1000264a call dword ptr [0x10016558] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016558))), 0x10002650u);
  /* 10002650 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002653 ret  */
  ESPCHK(0x10002640u, _esp0);
  ESP += 4; return;
}

/* FUN_10002660 @ 0x10002660 (6 bytes, 1 insns) */
void f_10002660(void) {
  FTRACE(0x10002660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10002660 jmp dword ptr [0x10016564] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10016564)))); return;
}

/* FUN_10002670 @ 0x10002670 (6 bytes, 1 insns) */
void f_10002670(void) {
  FTRACE(0x10002670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10002670 jmp dword ptr [0x10016568] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10016568)))); return;
}

/* FUN_10002680 @ 0x10002680 (6 bytes, 1 insns) */
void f_10002680(void) {
  FTRACE(0x10002680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10002680 jmp dword ptr [0x10016570] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10016570)))); return;
}

/* FUN_10002690 @ 0x10002690 (13 bytes, 5 insns) */
void f_10002690(void) {
  FTRACE(0x10002690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10002690 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10002694 push eax */
  push32((uint32_t)(EAX));
  /* 10002695 call dword ptr [0x10016574] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016574))), 0x1000269bu);
  /* 1000269b pop ecx */
  ECX = (pop32());
  /* 1000269c ret  */
  ESPCHK(0x10002690u, _esp0);
  ESP += 4; return;
}

/* FUN_100026a0 @ 0x100026a0 (20 bytes, 7 insns) */
void f_100026a0(void) {
  FTRACE(0x100026a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100026a0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100026a4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100026a8 push eax */
  push32((uint32_t)(EAX));
  /* 100026a9 push ecx */
  push32((uint32_t)(ECX));
  /* 100026aa call dword ptr [0x10016578] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016578))), 0x100026b0u);
  /* 100026b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100026b3 ret  */
  ESPCHK(0x100026a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100026c0 @ 0x100026c0 (6 bytes, 1 insns) */
void f_100026c0(void) {
  FTRACE(0x100026c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100026c0 jmp dword ptr [0x1001657c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1001657c)))); return;
}

/* FUN_100026d0 @ 0x100026d0 (20 bytes, 7 insns) */
void f_100026d0(void) {
  FTRACE(0x100026d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100026d0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100026d4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100026d8 push eax */
  push32((uint32_t)(EAX));
  /* 100026d9 push ecx */
  push32((uint32_t)(ECX));
  /* 100026da call dword ptr [0x10016258] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016258))), 0x100026e0u);
  /* 100026e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100026e3 ret  */
  ESPCHK(0x100026d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100026f0 @ 0x100026f0 (15 bytes, 5 insns) */
void f_100026f0(void) {
  FTRACE(0x100026f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100026f0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100026f4 push eax */
  push32((uint32_t)(EAX));
  /* 100026f5 call dword ptr [0x100162a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100162a0))), 0x100026fbu);
  /* 100026fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100026fe ret  */
  ESPCHK(0x100026f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002700 @ 0x10002700 (20 bytes, 7 insns) */
void f_10002700(void) {
  FTRACE(0x10002700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10002700 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10002704 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10002708 push eax */
  push32((uint32_t)(EAX));
  /* 10002709 push ecx */
  push32((uint32_t)(ECX));
  /* 1000270a call dword ptr [0x10013720] */
  call_ind((uint32_t)(r32((uint32_t)(0x10013720))), 0x10002710u);
  /* 10002710 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002713 ret  */
  ESPCHK(0x10002700u, _esp0);
  ESP += 4; return;
}

/* FUN_10002720 @ 0x10002720 (13 bytes, 5 insns) */
void f_10002720(void) {
  FTRACE(0x10002720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10002720 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10002724 push eax */
  push32((uint32_t)(EAX));
  /* 10002725 call dword ptr [0x100138c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100138c0))), 0x1000272bu);
  /* 1000272b pop ecx */
  ECX = (pop32());
  /* 1000272c ret  */
  ESPCHK(0x10002720u, _esp0);
  ESP += 4; return;
}

/* FUN_10002730 @ 0x10002730 (15 bytes, 5 insns) */
void f_10002730(void) {
  FTRACE(0x10002730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10002730 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10002734 push eax */
  push32((uint32_t)(EAX));
  /* 10002735 call dword ptr [0x10016580] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016580))), 0x1000273bu);
  /* 1000273b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000273e ret  */
  ESPCHK(0x10002730u, _esp0);
  ESP += 4; return;
}

/* FUN_10002740 @ 0x10002740 (25 bytes, 9 insns) */
void f_10002740(void) {
  FTRACE(0x10002740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10002740 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10002744 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10002748 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1000274c push eax */
  push32((uint32_t)(EAX));
  /* 1000274d push ecx */
  push32((uint32_t)(ECX));
  /* 1000274e push edx */
  push32((uint32_t)(EDX));
  /* 1000274f call dword ptr [0x10015fb0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10015fb0))), 0x10002755u);
  /* 10002755 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002758 ret  */
  ESPCHK(0x10002740u, _esp0);
  ESP += 4; return;
}

/* FUN_10002760 @ 0x10002760 (13 bytes, 5 insns) */
void f_10002760(void) {
  FTRACE(0x10002760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10002760 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10002764 push eax */
  push32((uint32_t)(EAX));
  /* 10002765 call dword ptr [0x10013920] */
  call_ind((uint32_t)(r32((uint32_t)(0x10013920))), 0x1000276bu);
  /* 1000276b pop ecx */
  ECX = (pop32());
  /* 1000276c ret  */
  ESPCHK(0x10002760u, _esp0);
  ESP += 4; return;
}

/* FUN_10002770 @ 0x10002770 (6 bytes, 1 insns) */
void f_10002770(void) {
  FTRACE(0x10002770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10002770 jmp dword ptr [0x10016238] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10016238)))); return;
}

/* FUN_10002780 @ 0x10002780 (6 bytes, 1 insns) */
void f_10002780(void) {
  FTRACE(0x10002780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10002780 jmp dword ptr [0x10013938] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10013938)))); return;
}

/* FUN_10002790 @ 0x10002790 (82 bytes, 28 insns) */
void f_10002790(void) {
  FTRACE(0x10002790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10002790 mov eax, dword ptr [0x100163d0] */
  EAX = (r32((uint32_t)(0x100163d0)));
  /* 10002795 sub esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000279b push esi */
  push32((uint32_t)(ESI));
  /* 1000279c push edi */
  push32((uint32_t)(EDI));
  /* 1000279d mov edi, dword ptr [esp + 0x10c] */
  EDI = (r32((uint32_t)(ESP + 0x10c)));
  /* 100027a4 push edi */
  push32((uint32_t)(EDI));
  /* 100027a5 push eax */
  push32((uint32_t)(EAX));
  /* 100027a6 call dword ptr [0x1000e088] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e088))), 0x100027acu);
  /* 100027ac mov esi, eax */
  ESI = (EAX);
  /* 100027ae test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100027b0 jne 0x100027d7 */
  if (!C.zf) goto L_100027d7;
  /* 100027b2 push edi */
  push32((uint32_t)(EDI));
  /* 100027b3 lea ecx, [esp + 0xc] */
  ECX = ((uint32_t)(ESP + 0xc));
  /* 100027b7 push 0x1000fefc */
  push32((uint32_t)(0x1000fefcu));
  /* 100027bc push ecx */
  push32((uint32_t)(ECX));
  /* 100027bd call 0x10006e70 */
  push32(0x100027c2u); f_10006e70();
  /* 100027c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100027c5 lea edx, [esp + 8] */
  EDX = ((uint32_t)(ESP + 0x8));
  /* 100027c9 push esi */
  push32((uint32_t)(ESI));
  /* 100027ca push 0x1000feec */
  push32((uint32_t)(0x1000feecu));
  /* 100027cf push edx */
  push32((uint32_t)(EDX));
  /* 100027d0 push esi */
  push32((uint32_t)(ESI));
  /* 100027d1 call dword ptr [0x1000e0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e0dc))), 0x100027d7u);
L_100027d7:;
  /* 100027d7 mov eax, esi */
  EAX = (ESI);
  /* 100027d9 pop edi */
  EDI = (pop32());
  /* 100027da pop esi */
  ESI = (pop32());
  /* 100027db add esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100027e1 ret  */
  ESPCHK(0x10002790u, _esp0);
  ESP += 4; return;
}

/* FUN_100027f0 @ 0x100027f0 (1844 bytes, 376 insns) */
void f_100027f0(void) {
  FTRACE(0x100027f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100027f0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100027f4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100027f5 jne 0x10002f1c */
  if (!C.zf) goto L_10002f1c;
  /* 100027fb push 0x10010650 */
  push32((uint32_t)(0x10010650u));
  /* 10002800 call dword ptr [0x1000e004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e004))), 0x10002806u);
  /* 10002806 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10002808 mov dword ptr [0x100163d0], eax */
  w32((uint32_t)(0x100163d0), (EAX));
  /* 1000280d jne 0x10002829 */
  if (!C.zf) goto L_10002829;
  /* 1000280f push eax */
  push32((uint32_t)(EAX));
  /* 10002810 push 0x10010648 */
  push32((uint32_t)(0x10010648u));
  /* 10002815 push 0x10010630 */
  push32((uint32_t)(0x10010630u));
  /* 1000281a push eax */
  push32((uint32_t)(EAX));
  /* 1000281b call dword ptr [0x1000e0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e0dc))), 0x10002821u);
  /* 10002821 mov eax, 1 */
  EAX = (0x1u);
  /* 10002826 ret 0xc */
  ESPCHK(0x100027f0u, _esp0);
  ESP += 16; return;
L_10002829:;
  /* 10002829 push 0x10010620 */
  push32((uint32_t)(0x10010620u));
  /* 1000282e call 0x10002790 */
  push32(0x10002833u); f_10002790();
  /* 10002833 push 0x10010610 */
  push32((uint32_t)(0x10010610u));
  /* 10002838 mov dword ptr [0x100163d4], eax */
  w32((uint32_t)(0x100163d4), (EAX));
  /* 1000283d call 0x10002790 */
  push32(0x10002842u); f_10002790();
  /* 10002842 push 0x10010600 */
  push32((uint32_t)(0x10010600u));
  /* 10002847 mov dword ptr [0x100163d8], eax */
  w32((uint32_t)(0x100163d8), (EAX));
  /* 1000284c call 0x10002790 */
  push32(0x10002851u); f_10002790();
  /* 10002851 push 0x100105f4 */
  push32((uint32_t)(0x100105f4u));
  /* 10002856 mov dword ptr [0x100163dc], eax */
  w32((uint32_t)(0x100163dc), (EAX));
  /* 1000285b call 0x10002790 */
  push32(0x10002860u); f_10002790();
  /* 10002860 push 0x100105e4 */
  push32((uint32_t)(0x100105e4u));
  /* 10002865 mov dword ptr [0x100163e0], eax */
  w32((uint32_t)(0x100163e0), (EAX));
  /* 1000286a call 0x10002790 */
  push32(0x1000286fu); f_10002790();
  /* 1000286f push 0x100105d0 */
  push32((uint32_t)(0x100105d0u));
  /* 10002874 mov dword ptr [0x100163e4], eax */
  w32((uint32_t)(0x100163e4), (EAX));
  /* 10002879 call 0x10002790 */
  push32(0x1000287eu); f_10002790();
  /* 1000287e push 0x100105c0 */
  push32((uint32_t)(0x100105c0u));
  /* 10002883 mov dword ptr [0x100163e8], eax */
  w32((uint32_t)(0x100163e8), (EAX));
  /* 10002888 call 0x10002790 */
  push32(0x1000288du); f_10002790();
  /* 1000288d push 0x100105b0 */
  push32((uint32_t)(0x100105b0u));
  /* 10002892 mov dword ptr [0x100163ec], eax */
  w32((uint32_t)(0x100163ec), (EAX));
  /* 10002897 call 0x10002790 */
  push32(0x1000289cu); f_10002790();
  /* 1000289c push 0x1001059c */
  push32((uint32_t)(0x1001059cu));
  /* 100028a1 mov dword ptr [0x100163f0], eax */
  w32((uint32_t)(0x100163f0), (EAX));
  /* 100028a6 call 0x10002790 */
  push32(0x100028abu); f_10002790();
  /* 100028ab push 0x10010588 */
  push32((uint32_t)(0x10010588u));
  /* 100028b0 mov dword ptr [0x100163f4], eax */
  w32((uint32_t)(0x100163f4), (EAX));
  /* 100028b5 call 0x10002790 */
  push32(0x100028bau); f_10002790();
  /* 100028ba push 0x10010578 */
  push32((uint32_t)(0x10010578u));
  /* 100028bf mov dword ptr [0x100163f8], eax */
  w32((uint32_t)(0x100163f8), (EAX));
  /* 100028c4 call 0x10002790 */
  push32(0x100028c9u); f_10002790();
  /* 100028c9 push 0x10010568 */
  push32((uint32_t)(0x10010568u));
  /* 100028ce mov dword ptr [0x100163fc], eax */
  w32((uint32_t)(0x100163fc), (EAX));
  /* 100028d3 call 0x10002790 */
  push32(0x100028d8u); f_10002790();
  /* 100028d8 push 0x10010558 */
  push32((uint32_t)(0x10010558u));
  /* 100028dd mov dword ptr [0x10016400], eax */
  w32((uint32_t)(0x10016400), (EAX));
  /* 100028e2 call 0x10002790 */
  push32(0x100028e7u); f_10002790();
  /* 100028e7 push 0x10010548 */
  push32((uint32_t)(0x10010548u));
  /* 100028ec mov dword ptr [0x10016404], eax */
  w32((uint32_t)(0x10016404), (EAX));
  /* 100028f1 call 0x10002790 */
  push32(0x100028f6u); f_10002790();
  /* 100028f6 push 0x10010538 */
  push32((uint32_t)(0x10010538u));
  /* 100028fb mov dword ptr [0x10016408], eax */
  w32((uint32_t)(0x10016408), (EAX));
  /* 10002900 call 0x10002790 */
  push32(0x10002905u); f_10002790();
  /* 10002905 push 0x10010528 */
  push32((uint32_t)(0x10010528u));
  /* 1000290a mov dword ptr [0x1001640c], eax */
  w32((uint32_t)(0x1001640c), (EAX));
  /* 1000290f call 0x10002790 */
  push32(0x10002914u); f_10002790();
  /* 10002914 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002917 mov dword ptr [0x10016410], eax */
  w32((uint32_t)(0x10016410), (EAX));
  /* 1000291c push 0x10010518 */
  push32((uint32_t)(0x10010518u));
  /* 10002921 call 0x10002790 */
  push32(0x10002926u); f_10002790();
  /* 10002926 push 0x10010508 */
  push32((uint32_t)(0x10010508u));
  /* 1000292b mov dword ptr [0x10016414], eax */
  w32((uint32_t)(0x10016414), (EAX));
  /* 10002930 call 0x10002790 */
  push32(0x10002935u); f_10002790();
  /* 10002935 push 0x100104f4 */
  push32((uint32_t)(0x100104f4u));
  /* 1000293a mov dword ptr [0x10016418], eax */
  w32((uint32_t)(0x10016418), (EAX));
  /* 1000293f call 0x10002790 */
  push32(0x10002944u); f_10002790();
  /* 10002944 push 0x100104ec */
  push32((uint32_t)(0x100104ecu));
  /* 10002949 mov dword ptr [0x1001641c], eax */
  w32((uint32_t)(0x1001641c), (EAX));
  /* 1000294e call 0x10002790 */
  push32(0x10002953u); f_10002790();
  /* 10002953 push 0x100104dc */
  push32((uint32_t)(0x100104dcu));
  /* 10002958 mov dword ptr [0x10016420], eax */
  w32((uint32_t)(0x10016420), (EAX));
  /* 1000295d call 0x10002790 */
  push32(0x10002962u); f_10002790();
  /* 10002962 push 0x100104cc */
  push32((uint32_t)(0x100104ccu));
  /* 10002967 mov dword ptr [0x10016424], eax */
  w32((uint32_t)(0x10016424), (EAX));
  /* 1000296c call 0x10002790 */
  push32(0x10002971u); f_10002790();
  /* 10002971 push 0x100104c0 */
  push32((uint32_t)(0x100104c0u));
  /* 10002976 mov dword ptr [0x10016428], eax */
  w32((uint32_t)(0x10016428), (EAX));
  /* 1000297b call 0x10002790 */
  push32(0x10002980u); f_10002790();
  /* 10002980 push 0x100104b0 */
  push32((uint32_t)(0x100104b0u));
  /* 10002985 mov dword ptr [0x1001642c], eax */
  w32((uint32_t)(0x1001642c), (EAX));
  /* 1000298a call 0x10002790 */
  push32(0x1000298fu); f_10002790();
  /* 1000298f push 0x100104a8 */
  push32((uint32_t)(0x100104a8u));
  /* 10002994 mov dword ptr [0x10016430], eax */
  w32((uint32_t)(0x10016430), (EAX));
  /* 10002999 call 0x10002790 */
  push32(0x1000299eu); f_10002790();
  /* 1000299e push 0x10010498 */
  push32((uint32_t)(0x10010498u));
  /* 100029a3 mov dword ptr [0x10016448], eax */
  w32((uint32_t)(0x10016448), (EAX));
  /* 100029a8 call 0x10002790 */
  push32(0x100029adu); f_10002790();
  /* 100029ad push 0x10010488 */
  push32((uint32_t)(0x10010488u));
  /* 100029b2 mov dword ptr [0x1001644c], eax */
  w32((uint32_t)(0x1001644c), (EAX));
  /* 100029b7 call 0x10002790 */
  push32(0x100029bcu); f_10002790();
  /* 100029bc push 0x1001047c */
  push32((uint32_t)(0x1001047cu));
  /* 100029c1 mov dword ptr [0x10016450], eax */
  w32((uint32_t)(0x10016450), (EAX));
  /* 100029c6 call 0x10002790 */
  push32(0x100029cbu); f_10002790();
  /* 100029cb push 0x1001046c */
  push32((uint32_t)(0x1001046cu));
  /* 100029d0 mov dword ptr [0x10016454], eax */
  w32((uint32_t)(0x10016454), (EAX));
  /* 100029d5 call 0x10002790 */
  push32(0x100029dau); f_10002790();
  /* 100029da push 0x10010460 */
  push32((uint32_t)(0x10010460u));
  /* 100029df mov dword ptr [0x10016458], eax */
  w32((uint32_t)(0x10016458), (EAX));
  /* 100029e4 call 0x10002790 */
  push32(0x100029e9u); f_10002790();
  /* 100029e9 push 0x10010450 */
  push32((uint32_t)(0x10010450u));
  /* 100029ee mov dword ptr [0x10016474], eax */
  w32((uint32_t)(0x10016474), (EAX));
  /* 100029f3 call 0x10002790 */
  push32(0x100029f8u); f_10002790();
  /* 100029f8 push 0x10010448 */
  push32((uint32_t)(0x10010448u));
  /* 100029fd mov dword ptr [0x1001645c], eax */
  w32((uint32_t)(0x1001645c), (EAX));
  /* 10002a02 call 0x10002790 */
  push32(0x10002a07u); f_10002790();
  /* 10002a07 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002a0a mov dword ptr [0x10016460], eax */
  w32((uint32_t)(0x10016460), (EAX));
  /* 10002a0f push 0x10010438 */
  push32((uint32_t)(0x10010438u));
  /* 10002a14 call 0x10002790 */
  push32(0x10002a19u); f_10002790();
  /* 10002a19 push 0x10010428 */
  push32((uint32_t)(0x10010428u));
  /* 10002a1e mov dword ptr [0x10016464], eax */
  w32((uint32_t)(0x10016464), (EAX));
  /* 10002a23 call 0x10002790 */
  push32(0x10002a28u); f_10002790();
  /* 10002a28 push 0x10010418 */
  push32((uint32_t)(0x10010418u));
  /* 10002a2d mov dword ptr [0x10016468], eax */
  w32((uint32_t)(0x10016468), (EAX));
  /* 10002a32 call 0x10002790 */
  push32(0x10002a37u); f_10002790();
  /* 10002a37 push 0x1001040c */
  push32((uint32_t)(0x1001040cu));
  /* 10002a3c mov dword ptr [0x1001646c], eax */
  w32((uint32_t)(0x1001646c), (EAX));
  /* 10002a41 call 0x10002790 */
  push32(0x10002a46u); f_10002790();
  /* 10002a46 push 0x10010404 */
  push32((uint32_t)(0x10010404u));
  /* 10002a4b mov dword ptr [0x10016470], eax */
  w32((uint32_t)(0x10016470), (EAX));
  /* 10002a50 call 0x10002790 */
  push32(0x10002a55u); f_10002790();
  /* 10002a55 push 0x100103f4 */
  push32((uint32_t)(0x100103f4u));
  /* 10002a5a mov dword ptr [0x10016478], eax */
  w32((uint32_t)(0x10016478), (EAX));
  /* 10002a5f call 0x10002790 */
  push32(0x10002a64u); f_10002790();
  /* 10002a64 push 0x100103e4 */
  push32((uint32_t)(0x100103e4u));
  /* 10002a69 mov dword ptr [0x1001647c], eax */
  w32((uint32_t)(0x1001647c), (EAX));
  /* 10002a6e call 0x10002790 */
  push32(0x10002a73u); f_10002790();
  /* 10002a73 push 0x100103d4 */
  push32((uint32_t)(0x100103d4u));
  /* 10002a78 mov dword ptr [0x10016480], eax */
  w32((uint32_t)(0x10016480), (EAX));
  /* 10002a7d call 0x10002790 */
  push32(0x10002a82u); f_10002790();
  /* 10002a82 push 0x100103c4 */
  push32((uint32_t)(0x100103c4u));
  /* 10002a87 mov dword ptr [0x10016484], eax */
  w32((uint32_t)(0x10016484), (EAX));
  /* 10002a8c call 0x10002790 */
  push32(0x10002a91u); f_10002790();
  /* 10002a91 push 0x100103b8 */
  push32((uint32_t)(0x100103b8u));
  /* 10002a96 mov dword ptr [0x10016488], eax */
  w32((uint32_t)(0x10016488), (EAX));
  /* 10002a9b call 0x10002790 */
  push32(0x10002aa0u); f_10002790();
  /* 10002aa0 push 0x100103ac */
  push32((uint32_t)(0x100103acu));
  /* 10002aa5 mov dword ptr [0x1001648c], eax */
  w32((uint32_t)(0x1001648c), (EAX));
  /* 10002aaa call 0x10002790 */
  push32(0x10002aafu); f_10002790();
  /* 10002aaf push 0x1001039c */
  push32((uint32_t)(0x1001039cu));
  /* 10002ab4 mov dword ptr [0x10016490], eax */
  w32((uint32_t)(0x10016490), (EAX));
  /* 10002ab9 call 0x10002790 */
  push32(0x10002abeu); f_10002790();
  /* 10002abe push 0x10010390 */
  push32((uint32_t)(0x10010390u));
  /* 10002ac3 mov dword ptr [0x10016494], eax */
  w32((uint32_t)(0x10016494), (EAX));
  /* 10002ac8 call 0x10002790 */
  push32(0x10002acdu); f_10002790();
  /* 10002acd push 0x10010384 */
  push32((uint32_t)(0x10010384u));
  /* 10002ad2 mov dword ptr [0x10016498], eax */
  w32((uint32_t)(0x10016498), (EAX));
  /* 10002ad7 call 0x10002790 */
  push32(0x10002adcu); f_10002790();
  /* 10002adc push 0x10010378 */
  push32((uint32_t)(0x10010378u));
  /* 10002ae1 mov dword ptr [0x1001649c], eax */
  w32((uint32_t)(0x1001649c), (EAX));
  /* 10002ae6 call 0x10002790 */
  push32(0x10002aebu); f_10002790();
  /* 10002aeb push 0x1001036c */
  push32((uint32_t)(0x1001036cu));
  /* 10002af0 mov dword ptr [0x100161d0], eax */
  w32((uint32_t)(0x100161d0), (EAX));
  /* 10002af5 call 0x10002790 */
  push32(0x10002afau); f_10002790();
  /* 10002afa add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002afd mov dword ptr [0x100164a0], eax */
  w32((uint32_t)(0x100164a0), (EAX));
  /* 10002b02 push 0x10010360 */
  push32((uint32_t)(0x10010360u));
  /* 10002b07 call 0x10002790 */
  push32(0x10002b0cu); f_10002790();
  /* 10002b0c push 0x10010354 */
  push32((uint32_t)(0x10010354u));
  /* 10002b11 mov dword ptr [0x100164a4], eax */
  w32((uint32_t)(0x100164a4), (EAX));
  /* 10002b16 call 0x10002790 */
  push32(0x10002b1bu); f_10002790();
  /* 10002b1b push 0x10010344 */
  push32((uint32_t)(0x10010344u));
  /* 10002b20 mov dword ptr [0x100164a8], eax */
  w32((uint32_t)(0x100164a8), (EAX));
  /* 10002b25 call 0x10002790 */
  push32(0x10002b2au); f_10002790();
  /* 10002b2a push 0x10010338 */
  push32((uint32_t)(0x10010338u));
  /* 10002b2f mov dword ptr [0x100164ac], eax */
  w32((uint32_t)(0x100164ac), (EAX));
  /* 10002b34 call 0x10002790 */
  push32(0x10002b39u); f_10002790();
  /* 10002b39 push 0x1001032c */
  push32((uint32_t)(0x1001032cu));
  /* 10002b3e mov dword ptr [0x100164b0], eax */
  w32((uint32_t)(0x100164b0), (EAX));
  /* 10002b43 call 0x10002790 */
  push32(0x10002b48u); f_10002790();
  /* 10002b48 mov dword ptr [0x100164b4], eax */
  w32((uint32_t)(0x100164b4), (EAX));
  /* 10002b4d push 0x1001031c */
  push32((uint32_t)(0x1001031cu));
  /* 10002b52 call 0x10002790 */
  push32(0x10002b57u); f_10002790();
  /* 10002b57 push 0x1001030c */
  push32((uint32_t)(0x1001030cu));
  /* 10002b5c mov dword ptr [0x100164b8], eax */
  w32((uint32_t)(0x100164b8), (EAX));
  /* 10002b61 call 0x10002790 */
  push32(0x10002b66u); f_10002790();
  /* 10002b66 push 0x10010300 */
  push32((uint32_t)(0x10010300u));
  /* 10002b6b mov dword ptr [0x100164bc], eax */
  w32((uint32_t)(0x100164bc), (EAX));
  /* 10002b70 call 0x10002790 */
  push32(0x10002b75u); f_10002790();
  /* 10002b75 push 0x100102f8 */
  push32((uint32_t)(0x100102f8u));
  /* 10002b7a mov dword ptr [0x100164c0], eax */
  w32((uint32_t)(0x100164c0), (EAX));
  /* 10002b7f call 0x10002790 */
  push32(0x10002b84u); f_10002790();
  /* 10002b84 push 0x100102e8 */
  push32((uint32_t)(0x100102e8u));
  /* 10002b89 mov dword ptr [0x100164c4], eax */
  w32((uint32_t)(0x100164c4), (EAX));
  /* 10002b8e call 0x10002790 */
  push32(0x10002b93u); f_10002790();
  /* 10002b93 push 0x100102e0 */
  push32((uint32_t)(0x100102e0u));
  /* 10002b98 mov dword ptr [0x100164c8], eax */
  w32((uint32_t)(0x100164c8), (EAX));
  /* 10002b9d call 0x10002790 */
  push32(0x10002ba2u); f_10002790();
  /* 10002ba2 push 0x100102d4 */
  push32((uint32_t)(0x100102d4u));
  /* 10002ba7 mov dword ptr [0x100164cc], eax */
  w32((uint32_t)(0x100164cc), (EAX));
  /* 10002bac call 0x10002790 */
  push32(0x10002bb1u); f_10002790();
  /* 10002bb1 push 0x100102cc */
  push32((uint32_t)(0x100102ccu));
  /* 10002bb6 mov dword ptr [0x100164d0], eax */
  w32((uint32_t)(0x100164d0), (EAX));
  /* 10002bbb call 0x10002790 */
  push32(0x10002bc0u); f_10002790();
  /* 10002bc0 push 0x100102b8 */
  push32((uint32_t)(0x100102b8u));
  /* 10002bc5 mov dword ptr [0x100164d4], eax */
  w32((uint32_t)(0x100164d4), (EAX));
  /* 10002bca call 0x10002790 */
  push32(0x10002bcfu); f_10002790();
  /* 10002bcf push 0x100102ac */
  push32((uint32_t)(0x100102acu));
  /* 10002bd4 mov dword ptr [0x10013628], eax */
  w32((uint32_t)(0x10013628), (EAX));
  /* 10002bd9 call 0x10002790 */
  push32(0x10002bdeu); f_10002790();
  /* 10002bde push 0x100102a0 */
  push32((uint32_t)(0x100102a0u));
  /* 10002be3 mov dword ptr [0x100164e0], eax */
  w32((uint32_t)(0x100164e0), (EAX));
  /* 10002be8 call 0x10002790 */
  push32(0x10002bedu); f_10002790();
  /* 10002bed add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002bf0 mov dword ptr [0x100164dc], eax */
  w32((uint32_t)(0x100164dc), (EAX));
  /* 10002bf5 push 0x1001028c */
  push32((uint32_t)(0x1001028cu));
  /* 10002bfa call 0x10002790 */
  push32(0x10002bffu); f_10002790();
  /* 10002bff push 0x1001027c */
  push32((uint32_t)(0x1001027cu));
  /* 10002c04 mov dword ptr [0x100164e4], eax */
  w32((uint32_t)(0x100164e4), (EAX));
  /* 10002c09 call 0x10002790 */
  push32(0x10002c0eu); f_10002790();
  /* 10002c0e push 0x1001026c */
  push32((uint32_t)(0x1001026cu));
  /* 10002c13 mov dword ptr [0x100164e8], eax */
  w32((uint32_t)(0x100164e8), (EAX));
  /* 10002c18 call 0x10002790 */
  push32(0x10002c1du); f_10002790();
  /* 10002c1d push 0x1001025c */
  push32((uint32_t)(0x1001025cu));
  /* 10002c22 mov dword ptr [0x100164ec], eax */
  w32((uint32_t)(0x100164ec), (EAX));
  /* 10002c27 call 0x10002790 */
  push32(0x10002c2cu); f_10002790();
  /* 10002c2c push 0x10010250 */
  push32((uint32_t)(0x10010250u));
  /* 10002c31 mov dword ptr [0x10016438], eax */
  w32((uint32_t)(0x10016438), (EAX));
  /* 10002c36 call 0x10002790 */
  push32(0x10002c3bu); f_10002790();
  /* 10002c3b push 0x10010240 */
  push32((uint32_t)(0x10010240u));
  /* 10002c40 mov dword ptr [0x10016434], eax */
  w32((uint32_t)(0x10016434), (EAX));
  /* 10002c45 call 0x10002790 */
  push32(0x10002c4au); f_10002790();
  /* 10002c4a push 0x1001022c */
  push32((uint32_t)(0x1001022cu));
  /* 10002c4f mov dword ptr [0x1001643c], eax */
  w32((uint32_t)(0x1001643c), (EAX));
  /* 10002c54 call 0x10002790 */
  push32(0x10002c59u); f_10002790();
  /* 10002c59 push 0x10010214 */
  push32((uint32_t)(0x10010214u));
  /* 10002c5e mov dword ptr [0x10016440], eax */
  w32((uint32_t)(0x10016440), (EAX));
  /* 10002c63 call 0x10002790 */
  push32(0x10002c68u); f_10002790();
  /* 10002c68 push 0x10010204 */
  push32((uint32_t)(0x10010204u));
  /* 10002c6d mov dword ptr [0x10016444], eax */
  w32((uint32_t)(0x10016444), (EAX));
  /* 10002c72 call 0x10002790 */
  push32(0x10002c77u); f_10002790();
  /* 10002c77 push 0x100101ec */
  push32((uint32_t)(0x100101ecu));
  /* 10002c7c mov dword ptr [0x10016508], eax */
  w32((uint32_t)(0x10016508), (EAX));
  /* 10002c81 call 0x10002790 */
  push32(0x10002c86u); f_10002790();
  /* 10002c86 push 0x100101dc */
  push32((uint32_t)(0x100101dcu));
  /* 10002c8b mov dword ptr [0x10016538], eax */
  w32((uint32_t)(0x10016538), (EAX));
  /* 10002c90 call 0x10002790 */
  push32(0x10002c95u); f_10002790();
  /* 10002c95 push 0x100101d4 */
  push32((uint32_t)(0x100101d4u));
  /* 10002c9a mov dword ptr [0x10016500], eax */
  w32((uint32_t)(0x10016500), (EAX));
  /* 10002c9f call 0x10002790 */
  push32(0x10002ca4u); f_10002790();
  /* 10002ca4 push 0x100101c4 */
  push32((uint32_t)(0x100101c4u));
  /* 10002ca9 mov dword ptr [0x1001650c], eax */
  w32((uint32_t)(0x1001650c), (EAX));
  /* 10002cae call 0x10002790 */
  push32(0x10002cb3u); f_10002790();
  /* 10002cb3 push 0x100101b8 */
  push32((uint32_t)(0x100101b8u));
  /* 10002cb8 mov dword ptr [0x10016558], eax */
  w32((uint32_t)(0x10016558), (EAX));
  /* 10002cbd call 0x10002790 */
  push32(0x10002cc2u); f_10002790();
  /* 10002cc2 push 0x100101b0 */
  push32((uint32_t)(0x100101b0u));
  /* 10002cc7 mov dword ptr [0x100164f0], eax */
  w32((uint32_t)(0x100164f0), (EAX));
  /* 10002ccc call 0x10002790 */
  push32(0x10002cd1u); f_10002790();
  /* 10002cd1 push 0x100101a4 */
  push32((uint32_t)(0x100101a4u));
  /* 10002cd6 mov dword ptr [0x100164f4], eax */
  w32((uint32_t)(0x100164f4), (EAX));
  /* 10002cdb call 0x10002790 */
  push32(0x10002ce0u); f_10002790();
  /* 10002ce0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002ce3 mov dword ptr [0x100164f8], eax */
  w32((uint32_t)(0x100164f8), (EAX));
  /* 10002ce8 push 0x10010194 */
  push32((uint32_t)(0x10010194u));
  /* 10002ced call 0x10002790 */
  push32(0x10002cf2u); f_10002790();
  /* 10002cf2 push 0x10010180 */
  push32((uint32_t)(0x10010180u));
  /* 10002cf7 mov dword ptr [0x100164fc], eax */
  w32((uint32_t)(0x100164fc), (EAX));
  /* 10002cfc call 0x10002790 */
  push32(0x10002d01u); f_10002790();
  /* 10002d01 push 0x10010164 */
  push32((uint32_t)(0x10010164u));
  /* 10002d06 mov dword ptr [0x10016504], eax */
  w32((uint32_t)(0x10016504), (EAX));
  /* 10002d0b call 0x10002790 */
  push32(0x10002d10u); f_10002790();
  /* 10002d10 push 0x10010150 */
  push32((uint32_t)(0x10010150u));
  /* 10002d15 mov dword ptr [0x10016510], eax */
  w32((uint32_t)(0x10016510), (EAX));
  /* 10002d1a call 0x10002790 */
  push32(0x10002d1fu); f_10002790();
  /* 10002d1f push 0x10010144 */
  push32((uint32_t)(0x10010144u));
  /* 10002d24 mov dword ptr [0x10016514], eax */
  w32((uint32_t)(0x10016514), (EAX));
  /* 10002d29 call 0x10002790 */
  push32(0x10002d2eu); f_10002790();
  /* 10002d2e push 0x10010134 */
  push32((uint32_t)(0x10010134u));
  /* 10002d33 mov dword ptr [0x1001654c], eax */
  w32((uint32_t)(0x1001654c), (EAX));
  /* 10002d38 call 0x10002790 */
  push32(0x10002d3du); f_10002790();
  /* 10002d3d push 0x10010128 */
  push32((uint32_t)(0x10010128u));
  /* 10002d42 mov dword ptr [0x10016550], eax */
  w32((uint32_t)(0x10016550), (EAX));
  /* 10002d47 call 0x10002790 */
  push32(0x10002d4cu); f_10002790();
  /* 10002d4c push 0x1001011c */
  push32((uint32_t)(0x1001011cu));
  /* 10002d51 mov dword ptr [0x10016554], eax */
  w32((uint32_t)(0x10016554), (EAX));
  /* 10002d56 call 0x10002790 */
  push32(0x10002d5bu); f_10002790();
  /* 10002d5b push 0x10010104 */
  push32((uint32_t)(0x10010104u));
  /* 10002d60 mov dword ptr [0x1001655c], eax */
  w32((uint32_t)(0x1001655c), (EAX));
  /* 10002d65 call 0x10002790 */
  push32(0x10002d6au); f_10002790();
  /* 10002d6a push 0x100100e8 */
  push32((uint32_t)(0x100100e8u));
  /* 10002d6f mov dword ptr [0x10016518], eax */
  w32((uint32_t)(0x10016518), (EAX));
  /* 10002d74 call 0x10002790 */
  push32(0x10002d79u); f_10002790();
  /* 10002d79 push 0x100100cc */
  push32((uint32_t)(0x100100ccu));
  /* 10002d7e mov dword ptr [0x1001651c], eax */
  w32((uint32_t)(0x1001651c), (EAX));
  /* 10002d83 call 0x10002790 */
  push32(0x10002d88u); f_10002790();
  /* 10002d88 push 0x100100b4 */
  push32((uint32_t)(0x100100b4u));
  /* 10002d8d mov dword ptr [0x10016520], eax */
  w32((uint32_t)(0x10016520), (EAX));
  /* 10002d92 call 0x10002790 */
  push32(0x10002d97u); f_10002790();
  /* 10002d97 push 0x1001009c */
  push32((uint32_t)(0x1001009cu));
  /* 10002d9c mov dword ptr [0x10016524], eax */
  w32((uint32_t)(0x10016524), (EAX));
  /* 10002da1 call 0x10002790 */
  push32(0x10002da6u); f_10002790();
  /* 10002da6 push 0x10010090 */
  push32((uint32_t)(0x10010090u));
  /* 10002dab mov dword ptr [0x10016528], eax */
  w32((uint32_t)(0x10016528), (EAX));
  /* 10002db0 call 0x10002790 */
  push32(0x10002db5u); f_10002790();
  /* 10002db5 push 0x10010084 */
  push32((uint32_t)(0x10010084u));
  /* 10002dba mov dword ptr [0x1001652c], eax */
  w32((uint32_t)(0x1001652c), (EAX));
  /* 10002dbf call 0x10002790 */
  push32(0x10002dc4u); f_10002790();
  /* 10002dc4 push 0x10010074 */
  push32((uint32_t)(0x10010074u));
  /* 10002dc9 mov dword ptr [0x10016530], eax */
  w32((uint32_t)(0x10016530), (EAX));
  /* 10002dce call 0x10002790 */
  push32(0x10002dd3u); f_10002790();
  /* 10002dd3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002dd6 mov dword ptr [0x10016534], eax */
  w32((uint32_t)(0x10016534), (EAX));
  /* 10002ddb push 0x10010068 */
  push32((uint32_t)(0x10010068u));
  /* 10002de0 call 0x10002790 */
  push32(0x10002de5u); f_10002790();
  /* 10002de5 push 0x1001005c */
  push32((uint32_t)(0x1001005cu));
  /* 10002dea mov dword ptr [0x1001653c], eax */
  w32((uint32_t)(0x1001653c), (EAX));
  /* 10002def call 0x10002790 */
  push32(0x10002df4u); f_10002790();
  /* 10002df4 push 0x10010050 */
  push32((uint32_t)(0x10010050u));
  /* 10002df9 mov dword ptr [0x10016540], eax */
  w32((uint32_t)(0x10016540), (EAX));
  /* 10002dfe call 0x10002790 */
  push32(0x10002e03u); f_10002790();
  /* 10002e03 push 0x10010040 */
  push32((uint32_t)(0x10010040u));
  /* 10002e08 mov dword ptr [0x10016560], eax */
  w32((uint32_t)(0x10016560), (EAX));
  /* 10002e0d call 0x10002790 */
  push32(0x10002e12u); f_10002790();
  /* 10002e12 push 0x10010034 */
  push32((uint32_t)(0x10010034u));
  /* 10002e17 mov dword ptr [0x10016564], eax */
  w32((uint32_t)(0x10016564), (EAX));
  /* 10002e1c call 0x10002790 */
  push32(0x10002e21u); f_10002790();
  /* 10002e21 push 0x10010028 */
  push32((uint32_t)(0x10010028u));
  /* 10002e26 mov dword ptr [0x10016568], eax */
  w32((uint32_t)(0x10016568), (EAX));
  /* 10002e2b call 0x10002790 */
  push32(0x10002e30u); f_10002790();
  /* 10002e30 push 0x1001001c */
  push32((uint32_t)(0x1001001cu));
  /* 10002e35 mov dword ptr [0x1001656c], eax */
  w32((uint32_t)(0x1001656c), (EAX));
  /* 10002e3a call 0x10002790 */
  push32(0x10002e3fu); f_10002790();
  /* 10002e3f push 0x1001000c */
  push32((uint32_t)(0x1001000cu));
  /* 10002e44 mov dword ptr [0x10016570], eax */
  w32((uint32_t)(0x10016570), (EAX));
  /* 10002e49 call 0x10002790 */
  push32(0x10002e4eu); f_10002790();
  /* 10002e4e push 0x1000fffc */
  push32((uint32_t)(0x1000fffcu));
  /* 10002e53 mov dword ptr [0x10016574], eax */
  w32((uint32_t)(0x10016574), (EAX));
  /* 10002e58 call 0x10002790 */
  push32(0x10002e5du); f_10002790();
  /* 10002e5d push 0x1000ffe8 */
  push32((uint32_t)(0x1000ffe8u));
  /* 10002e62 mov dword ptr [0x1001657c], eax */
  w32((uint32_t)(0x1001657c), (EAX));
  /* 10002e67 call 0x10002790 */
  push32(0x10002e6cu); f_10002790();
  /* 10002e6c mov dword ptr [0x10016578], eax */
  w32((uint32_t)(0x10016578), (EAX));
  /* 10002e71 push 0x1000ffd0 */
  push32((uint32_t)(0x1000ffd0u));
  /* 10002e76 call 0x10002790 */
  push32(0x10002e7bu); f_10002790();
  /* 10002e7b push 0x1000ffb8 */
  push32((uint32_t)(0x1000ffb8u));
  /* 10002e80 mov dword ptr [0x100138c0], eax */
  w32((uint32_t)(0x100138c0), (EAX));
  /* 10002e85 call 0x10002790 */
  push32(0x10002e8au); f_10002790();
  /* 10002e8a push 0x1000ffa8 */
  push32((uint32_t)(0x1000ffa8u));
  /* 10002e8f mov dword ptr [0x10013720], eax */
  w32((uint32_t)(0x10013720), (EAX));
  /* 10002e94 call 0x10002790 */
  push32(0x10002e99u); f_10002790();
  /* 10002e99 push 0x1000ff98 */
  push32((uint32_t)(0x1000ff98u));
  /* 10002e9e mov dword ptr [0x10016580], eax */
  w32((uint32_t)(0x10016580), (EAX));
  /* 10002ea3 call 0x10002790 */
  push32(0x10002ea8u); f_10002790();
  /* 10002ea8 push 0x1000ff88 */
  push32((uint32_t)(0x1000ff88u));
  /* 10002ead mov dword ptr [0x10016544], eax */
  w32((uint32_t)(0x10016544), (EAX));
  /* 10002eb2 call 0x10002790 */
  push32(0x10002eb7u); f_10002790();
  /* 10002eb7 push 0x1000ff78 */
  push32((uint32_t)(0x1000ff78u));
  /* 10002ebc mov dword ptr [0x10016548], eax */
  w32((uint32_t)(0x10016548), (EAX));
  /* 10002ec1 call 0x10002790 */
  push32(0x10002ec6u); f_10002790();
  /* 10002ec6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002ec9 mov dword ptr [0x100162a0], eax */
  w32((uint32_t)(0x100162a0), (EAX));
  /* 10002ece push 0x1000ff68 */
  push32((uint32_t)(0x1000ff68u));
  /* 10002ed3 call 0x10002790 */
  push32(0x10002ed8u); f_10002790();
  /* 10002ed8 push 0x1000ff58 */
  push32((uint32_t)(0x1000ff58u));
  /* 10002edd mov dword ptr [0x10016258], eax */
  w32((uint32_t)(0x10016258), (EAX));
  /* 10002ee2 call 0x10002790 */
  push32(0x10002ee7u); f_10002790();
  /* 10002ee7 push 0x1000ff48 */
  push32((uint32_t)(0x1000ff48u));
  /* 10002eec mov dword ptr [0x10015fb0], eax */
  w32((uint32_t)(0x10015fb0), (EAX));
  /* 10002ef1 call 0x10002790 */
  push32(0x10002ef6u); f_10002790();
  /* 10002ef6 push 0x1000ff38 */
  push32((uint32_t)(0x1000ff38u));
  /* 10002efb mov dword ptr [0x10013920], eax */
  w32((uint32_t)(0x10013920), (EAX));
  /* 10002f00 call 0x10002790 */
  push32(0x10002f05u); f_10002790();
  /* 10002f05 push 0x1000ff24 */
  push32((uint32_t)(0x1000ff24u));
  /* 10002f0a mov dword ptr [0x10016238], eax */
  w32((uint32_t)(0x10016238), (EAX));
  /* 10002f0f call 0x10002790 */
  push32(0x10002f14u); f_10002790();
  /* 10002f14 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002f17 mov dword ptr [0x10013938], eax */
  w32((uint32_t)(0x10013938), (EAX));
L_10002f1c:;
  /* 10002f1c mov eax, 1 */
  EAX = (0x1u);
  /* 10002f21 ret 0xc */
  ESPCHK(0x100027f0u, _esp0);
  ESP += 16; return;
}

/* FUN_10002f30 @ 0x10002f30 (34 bytes, 10 insns) */
void f_10002f30(void) {
  FTRACE(0x10002f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10002f30 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10002f34 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10002f38 push eax */
  push32((uint32_t)(EAX));
  /* 10002f39 push ecx */
  push32((uint32_t)(ECX));
  /* 10002f3a push 0x1001065c */
  push32((uint32_t)(0x1001065cu));
  /* 10002f3f push 0x10013798 */
  push32((uint32_t)(0x10013798u));
  /* 10002f44 call 0x10006e70 */
  push32(0x10002f49u); f_10006e70();
  /* 10002f49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002f4c mov eax, 0x10013798 */
  EAX = (0x10013798u);
  /* 10002f51 ret  */
  ESPCHK(0x10002f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f60 @ 0x10002f60 (45 bytes, 16 insns) */
void f_10002f60(void) {
  FTRACE(0x10002f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10002f60 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10002f64 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10002f68 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10002f6d push eax */
  push32((uint32_t)(EAX));
  /* 10002f6e push ecx */
  push32((uint32_t)(ECX));
  /* 10002f6f call 0x10002740 */
  push32(0x10002f74u); f_10002740();
  /* 10002f74 mov ecx, eax */
  ECX = (EAX);
  /* 10002f76 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10002f7a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002f7d lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10002f80 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10002f83 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10002f86 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10002f89 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10002f8a idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10002f8c ret  */
  ESPCHK(0x10002f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f90 @ 0x10002f90 (171 bytes, 77 insns) */
void f_10002f90(void) {
  FTRACE(0x10002f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10002f90 push ebx */
  push32((uint32_t)(EBX));
  /* 10002f91 push ebp */
  push32((uint32_t)(EBP));
  /* 10002f92 push esi */
  push32((uint32_t)(ESI));
  /* 10002f93 push edi */
  push32((uint32_t)(EDI));
  /* 10002f94 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 10002f98 push edi */
  push32((uint32_t)(EDI));
  /* 10002f99 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10002f9fu);
  /* 10002f9f mov esi, dword ptr [esp + 0x1c] */
  ESI = (r32((uint32_t)(ESP + 0x1c)));
  /* 10002fa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002fa6 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10002fa8 jl 0x10002fb1 */
  if ((C.sf!=C.of)) goto L_10002fb1;
  /* 10002faa pop edi */
  EDI = (pop32());
  /* 10002fab pop esi */
  ESI = (pop32());
  /* 10002fac pop ebp */
  EBP = (pop32());
  /* 10002fad mov al, 1 */
  AL = (0x1u);
  /* 10002faf pop ebx */
  EBX = (pop32());
  /* 10002fb0 ret  */
  ESPCHK(0x10002f90u, _esp0);
  ESP += 4; return;
L_10002fb1:;
  /* 10002fb1 push edi */
  push32((uint32_t)(EDI));
  /* 10002fb2 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10002fb8u);
  /* 10002fb8 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 10002fbc sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10002fbe push esi */
  push32((uint32_t)(ESI));
  /* 10002fbf push edi */
  push32((uint32_t)(EDI));
  /* 10002fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10002fc1 mov dword ptr [esp + 0x24], esi */
  w32((uint32_t)(ESP + 0x24), (ESI));
  /* 10002fc5 call 0x10002f60 */
  push32(0x10002fcau); f_10002f60();
  /* 10002fca push ebp */
  push32((uint32_t)(EBP));
  /* 10002fcb mov ebx, eax */
  EBX = (EAX);
  /* 10002fcd call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10002fd3u);
  /* 10002fd3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002fd6 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10002fd8 jle 0x10003034 */
  if ((C.zf||C.sf!=C.of)) goto L_10003034;
  /* 10002fda cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10002fe0 jle 0x10003034 */
  if ((C.zf||C.sf!=C.of)) goto L_10003034;
  /* 10002fe2 mov eax, 0x45e7b273 */
  EAX = (0x45e7b273u);
  /* 10002fe7 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10002fe9 imul ebx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(EBX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10002feb sar edx, 0xc */
  EDX = (sh_sar((uint32_t)(EDX), (0xcu)&0x1f, 32));
  /* 10002fee mov eax, edx */
  EAX = (EDX);
  /* 10002ff0 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 10002ff3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10002ff5 mov ebx, edx */
  EBX = (EDX);
L_10002ff7:;
  /* 10002ff7 cmp ebx, 0xf */
  { uint32_t _a=(EBX),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10002ffa mov eax, 0xf */
  EAX = (0xfu);
  /* 10002fff jg 0x10003003 */
  if ((!C.zf&&C.sf==C.of)) goto L_10003003;
  /* 10003001 mov eax, ebx */
  EAX = (EBX);
L_10003003:;
  /* 10003003 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003005 jge 0x10003016 */
  if ((C.sf==C.of)) goto L_10003016;
  /* 10003007 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10003009 push ebp */
  push32((uint32_t)(EBP));
  /* 1000300a push edi */
  push32((uint32_t)(EDI));
  /* 1000300b call 0x10002610 */
  push32(0x10003010u); f_10002610();
  /* 10003010 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003013 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10003014 jmp 0x10002ff7 */
  goto L_10002ff7;
L_10003016:;
  /* 10003016 mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1000301a push ecx */
  push32((uint32_t)(ECX));
  /* 1000301b push edi */
  push32((uint32_t)(EDI));
  /* 1000301c push ebp */
  push32((uint32_t)(EBP));
  /* 1000301d call 0x10002f60 */
  push32(0x10003022u); f_10002f60();
  /* 10003022 push eax */
  push32((uint32_t)(EAX));
  /* 10003023 push edi */
  push32((uint32_t)(EDI));
  /* 10003024 push ebp */
  push32((uint32_t)(EBP));
  /* 10003025 call 0x10002610 */
  push32(0x1000302au); f_10002610();
  /* 1000302a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000302d mov al, 1 */
  AL = (0x1u);
  /* 1000302f pop edi */
  EDI = (pop32());
  /* 10003030 pop esi */
  ESI = (pop32());
  /* 10003031 pop ebp */
  EBP = (pop32());
  /* 10003032 pop ebx */
  EBX = (pop32());
  /* 10003033 ret  */
  ESPCHK(0x10002f90u, _esp0);
  ESP += 4; return;
L_10003034:;
  /* 10003034 pop edi */
  EDI = (pop32());
  /* 10003035 pop esi */
  ESI = (pop32());
  /* 10003036 pop ebp */
  EBP = (pop32());
  /* 10003037 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 10003039 pop ebx */
  EBX = (pop32());
  /* 1000303a ret  */
  ESPCHK(0x10002f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003040 @ 0x10003040 (369 bytes, 82 insns) */
void f_10003040(void) {
  FTRACE(0x10003040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10003040 push ebx */
  push32((uint32_t)(EBX));
  /* 10003041 push esi */
  push32((uint32_t)(ESI));
  /* 10003042 call dword ptr [0x100164f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f0))), 0x10003048u);
  /* 10003048 push 0x10016180 */
  push32((uint32_t)(0x10016180u));
  /* 1000304d mov dword ptr [0x100162a4], eax */
  w32((uint32_t)(0x100162a4), (EAX));
  /* 10003052 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10003058u);
  /* 10003058 mov ebx, 1 */
  EBX = (0x1u);
  /* 1000305d mov esi, eax */
  ESI = (EAX);
  /* 1000305f push ebx */
  push32((uint32_t)(EBX));
  /* 10003060 call 0x10002730 */
  push32(0x10003065u); f_10002730();
  /* 10003065 push 4 */
  push32((uint32_t)(0x4u));
  /* 10003067 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10003069 call 0x10002730 */
  push32(0x1000306eu); f_10002730();
  /* 1000306e push 5 */
  push32((uint32_t)(0x5u));
  /* 10003070 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10003072 call 0x10002730 */
  push32(0x10003077u); f_10002730();
  /* 10003077 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10003079 mov eax, dword ptr [0x100162a4] */
  EAX = (r32((uint32_t)(0x100162a4)));
  /* 1000307e push 3 */
  push32((uint32_t)(0x3u));
  /* 10003080 mov dword ptr [0x100161a0], esi */
  w32((uint32_t)(0x100161a0), (ESI));
  /* 10003086 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 10003089 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 1000308c lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 1000308f lea eax, [eax + ecx*2] */
  EAX = ((uint32_t)(EAX + ECX*2));
  /* 10003092 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10003095 mov ecx, dword ptr [eax + 0x10013ae0] */
  ECX = (r32((uint32_t)(EAX + 0x10013ae0)));
  /* 1000309b lea edx, [eax + 0x10013950] */
  EDX = ((uint32_t)(EAX + 0x10013950));
  /* 100030a1 mov dword ptr [0x100161b0], edx */
  w32((uint32_t)(0x100161b0), (EDX));
  /* 100030a7 lea edx, [eax + 0x10013ae4] */
  EDX = ((uint32_t)(EAX + 0x10013ae4));
  /* 100030ad mov dword ptr [0x100165f4], ecx */
  w32((uint32_t)(0x100165f4), (ECX));
  /* 100030b3 mov ecx, dword ptr [eax + 0x10013c74] */
  ECX = (r32((uint32_t)(EAX + 0x10013c74)));
  /* 100030b9 mov dword ptr [0x100161b4], edx */
  w32((uint32_t)(0x100161b4), (EDX));
  /* 100030bf lea edx, [eax + 0x10013c78] */
  EDX = ((uint32_t)(EAX + 0x10013c78));
  /* 100030c5 mov dword ptr [0x100165f8], ecx */
  w32((uint32_t)(0x100165f8), (ECX));
  /* 100030cb mov dword ptr [0x1001623c], edx */
  w32((uint32_t)(0x1001623c), (EDX));
  /* 100030d1 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x100030d7u);
  /* 100030d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 100030d9 mov dword ptr [0x10016280], eax */
  w32((uint32_t)(0x10016280), (EAX));
  /* 100030de call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x100030e4u);
  /* 100030e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 100030e6 mov dword ptr [0x10013610], eax */
  w32((uint32_t)(0x10013610), (EAX));
  /* 100030eb call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x100030f1u);
  /* 100030f1 push 4 */
  push32((uint32_t)(0x4u));
  /* 100030f3 mov dword ptr [0x10016370], eax */
  w32((uint32_t)(0x10016370), (EAX));
  /* 100030f8 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x100030feu);
  /* 100030fe push 5 */
  push32((uint32_t)(0x5u));
  /* 10003100 mov dword ptr [0x10013718], eax */
  w32((uint32_t)(0x10013718), (EAX));
  /* 10003105 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x1000310bu);
  /* 1000310b push ebx */
  push32((uint32_t)(EBX));
  /* 1000310c mov dword ptr [0x100160d8], eax */
  w32((uint32_t)(0x100160d8), (EAX));
  /* 10003111 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10003117u);
  /* 10003117 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000311a mov dword ptr [0x10016328], eax */
  w32((uint32_t)(0x10016328), (EAX));
  /* 1000311f call 0x10002670 */
  push32(0x10003124u); f_10002670();
  /* 10003124 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10003126 jne 0x10003132 */
  if (!C.zf) goto L_10003132;
  /* 10003128 mov dword ptr [0x1000f248], 4 */
  w32((uint32_t)(0x1000f248), (0x4u));
L_10003132:;
  /* 10003132 push 0x1000f114 */
  push32((uint32_t)(0x1000f114u));
  /* 10003137 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10003139 call dword ptr [0x100164fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164fc))), 0x1000313fu);
  /* 1000313f push 0x10016588 */
  push32((uint32_t)(0x10016588u));
  /* 10003144 call 0x10002720 */
  push32(0x10003149u); f_10002720();
  /* 10003149 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1000314b push 0x1000f244 */
  push32((uint32_t)(0x1000f244u));
  /* 10003150 call 0x10002700 */
  push32(0x10003155u); f_10002700();
  /* 10003155 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003158 mov byte ptr [0x10016178], bl */
  w8((uint32_t)(0x10016178), (BL));
  /* 1000315e mov byte ptr [0x1001617a], bl */
  w8((uint32_t)(0x1001617a), (BL));
  /* 10003164 mov byte ptr [0x1001617c], bl */
  w8((uint32_t)(0x1001617c), (BL));
  /* 1000316a mov byte ptr [0x1001617d], bl */
  w8((uint32_t)(0x1001617d), (BL));
  /* 10003170 mov byte ptr [0x10016313], bl */
  w8((uint32_t)(0x10016313), (BL));
  /* 10003176 mov byte ptr [0x10016311], bl */
  w8((uint32_t)(0x10016311), (BL));
  /* 1000317c mov byte ptr [0x10016314], bl */
  w8((uint32_t)(0x10016314), (BL));
  /* 10003182 mov byte ptr [0x10016315], bl */
  w8((uint32_t)(0x10016315), (BL));
  /* 10003188 pop esi */
  ESI = (pop32());
  /* 10003189 mov byte ptr [0x1001617b], 0 */
  w8((uint32_t)(0x1001617b), (0x0u));
  /* 10003190 mov byte ptr [0x10016179], 0 */
  w8((uint32_t)(0x10016179), (0x0u));
  /* 10003197 mov byte ptr [0x10016310], 0 */
  w8((uint32_t)(0x10016310), (0x0u));
  /* 1000319e mov byte ptr [0x10016312], 0 */
  w8((uint32_t)(0x10016312), (0x0u));
  /* 100031a5 mov dword ptr [0x1001663c], 0 */
  w32((uint32_t)(0x1001663c), (0x0u));
  /* 100031af pop ebx */
  EBX = (pop32());
  /* 100031b0 ret  */
  ESPCHK(0x10003040u, _esp0);
  ESP += 4; return;
}

/* FUN_100031c0 @ 0x100031c0 (85 bytes, 29 insns) */
void f_100031c0(void) {
  FTRACE(0x100031c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100031c0 mov eax, dword ptr [0x10015f48] */
  EAX = (r32((uint32_t)(0x10015f48)));
  /* 100031c5 push esi */
  push32((uint32_t)(ESI));
  /* 100031c6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100031c9 jg 0x10003213 */
  if ((!C.zf&&C.sf==C.of)) goto L_10003213;
  /* 100031cb push 0x10013678 */
  push32((uint32_t)(0x10013678u));
  /* 100031d0 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x100031d6u);
  /* 100031d6 mov ecx, eax */
  ECX = (EAX);
  /* 100031d8 mov eax, 0x38e38e39 */
  EAX = (0x38e38e39u);
  /* 100031dd imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100031df sar edx, 3 */
  EDX = (sh_sar((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 100031e2 mov eax, edx */
  EAX = (EDX);
  /* 100031e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100031e7 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100031ea add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100031ec mov esi, edx */
  ESI = (EDX);
  /* 100031ee je 0x10003213 */
  if (C.zf) goto L_10003213;
  /* 100031f0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100031f2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100031f4 push esi */
  push32((uint32_t)(ESI));
  /* 100031f5 push 0x100136f0 */
  push32((uint32_t)(0x100136f0u));
  /* 100031fa call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10003200u);
  /* 10003200 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10003202 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10003204 push esi */
  push32((uint32_t)(ESI));
  /* 10003205 push 0x10013630 */
  push32((uint32_t)(0x10013630u));
  /* 1000320a call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10003210u);
  /* 10003210 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10003213:;
  /* 10003213 pop esi */
  ESI = (pop32());
  /* 10003214 ret  */
  ESPCHK(0x100031c0u, _esp0);
  ESP += 4; return;
}

/* ProcessLandAI @ 0x10003220 (1 bytes, 1 insns) */
void f_10003220(void) {
  FTRACE(0x10003220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10003220 ret  */
  ESPCHK(0x10003220u, _esp0);
  ESP += 4; return;
}

/* FUN_10003230 @ 0x10003230 (157 bytes, 43 insns) */
void f_10003230(void) {
  FTRACE(0x10003230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10003230 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10003232 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10003234 push 0x10016340 */
  push32((uint32_t)(0x10016340u));
  /* 10003239 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000323fu);
  /* 1000323f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10003241 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10003243 push 0x10016348 */
  push32((uint32_t)(0x10016348u));
  /* 10003248 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000324eu);
  /* 1000324e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10003250 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10003252 push 0x10016330 */
  push32((uint32_t)(0x10016330u));
  /* 10003257 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000325du);
  /* 1000325d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000325f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10003261 push 0x10016338 */
  push32((uint32_t)(0x10016338u));
  /* 10003266 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000326cu);
  /* 1000326c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000326e push 0xa */
  push32((uint32_t)(0xau));
  /* 10003270 push 0x10016350 */
  push32((uint32_t)(0x10016350u));
  /* 10003275 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000327bu);
  /* 1000327b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000327d push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1000327f push 0x10016288 */
  push32((uint32_t)(0x10016288u));
  /* 10003284 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000328au);
  /* 1000328a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000328d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000328f push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10003291 push 0x10016270 */
  push32((uint32_t)(0x10016270u));
  /* 10003296 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000329cu);
  /* 1000329c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000329e push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100032a0 push 0x10016278 */
  push32((uint32_t)(0x10016278u));
  /* 100032a5 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100032abu);
  /* 100032ab push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100032ad push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100032af push 0x10016290 */
  push32((uint32_t)(0x10016290u));
  /* 100032b4 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100032bau);
  /* 100032ba push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100032bc push 0xa */
  push32((uint32_t)(0xau));
  /* 100032be push 0x10016298 */
  push32((uint32_t)(0x10016298u));
  /* 100032c3 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100032c9u);
  /* 100032c9 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100032cc ret  */
  ESPCHK(0x10003230u, _esp0);
  ESP += 4; return;
}

/* FUN_100032d0 @ 0x100032d0 (79 bytes, 22 insns) */
void f_100032d0(void) {
  FTRACE(0x100032d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100032d0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100032d2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100032d4 push 0x10013900 */
  push32((uint32_t)(0x10013900u));
  /* 100032d9 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100032dfu);
  /* 100032df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100032e1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100032e3 push 0x10013908 */
  push32((uint32_t)(0x10013908u));
  /* 100032e8 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100032eeu);
  /* 100032ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100032f0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100032f2 push 0x100138f8 */
  push32((uint32_t)(0x100138f8u));
  /* 100032f7 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100032fdu);
  /* 100032fd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100032ff push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10003301 push 0x10015f68 */
  push32((uint32_t)(0x10015f68u));
  /* 10003306 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000330cu);
  /* 1000330c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000330e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10003310 push 0x10015f58 */
  push32((uint32_t)(0x10015f58u));
  /* 10003315 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000331bu);
  /* 1000331b add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000331e ret  */
  ESPCHK(0x100032d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003320 @ 0x10003320 (64 bytes, 18 insns) */
void f_10003320(void) {
  FTRACE(0x10003320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10003320 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10003322 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10003324 push 0x10016088 */
  push32((uint32_t)(0x10016088u));
  /* 10003329 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000332fu);
  /* 1000332f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10003331 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10003333 push 0x10016090 */
  push32((uint32_t)(0x10016090u));
  /* 10003338 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000333eu);
  /* 1000333e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10003340 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10003342 push 0x10016098 */
  push32((uint32_t)(0x10016098u));
  /* 10003347 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000334du);
  /* 1000334d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1000334f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10003351 push 0x100160a0 */
  push32((uint32_t)(0x100160a0u));
  /* 10003356 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000335cu);
  /* 1000335c add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000335f ret  */
  ESPCHK(0x10003320u, _esp0);
  ESP += 4; return;
}

/* FUN_10003360 @ 0x10003360 (3787 bytes, 1079 insns) */
void f_10003360(void) {
  FTRACE(0x10003360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10003360 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10003363 push ebx */
  push32((uint32_t)(EBX));
  /* 10003364 push ebp */
  push32((uint32_t)(EBP));
  /* 10003365 push esi */
  push32((uint32_t)(ESI));
  /* 10003366 push edi */
  push32((uint32_t)(EDI));
  /* 10003367 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 1000336c push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 10003371 call dword ptr [0x10016508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016508))), 0x10003377u);
  /* 10003377 push 0 */
  push32((uint32_t)(0x0u));
  /* 10003379 call 0x10002760 */
  push32(0x1000337eu); f_10002760();
  /* 1000337e push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10003380 push 0 */
  push32((uint32_t)(0x0u));
  /* 10003382 call 0x10002640 */
  push32(0x10003387u); f_10002640();
  /* 10003387 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10003389 push 0 */
  push32((uint32_t)(0x0u));
  /* 1000338b mov dword ptr [esp + 0x40], eax */
  w32((uint32_t)(ESP + 0x40), (EAX));
  /* 1000338f call 0x10002640 */
  push32(0x10003394u); f_10002640();
  /* 10003394 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 10003396 push 0 */
  push32((uint32_t)(0x0u));
  /* 10003398 mov edi, eax */
  EDI = (EAX);
  /* 1000339a call 0x10002640 */
  push32(0x1000339fu); f_10002640();
  /* 1000339f push 0xe */
  push32((uint32_t)(0xeu));
  /* 100033a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 100033a3 mov esi, eax */
  ESI = (EAX);
  /* 100033a5 call 0x10002640 */
  push32(0x100033aau); f_10002640();
  /* 100033aa push 0x10016010 */
  push32((uint32_t)(0x10016010u));
  /* 100033af mov ebx, eax */
  EBX = (EAX);
  /* 100033b1 call dword ptr [0x1001653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001653c))), 0x100033b7u);
  /* 100033b7 sar esi, 2 */
  ESI = (sh_sar((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 100033ba and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 100033bf add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100033c1 mov dword ptr [esp + 0x50], eax */
  w32((uint32_t)(ESP + 0x50), (EAX));
  /* 100033c5 push 0x100162c8 */
  push32((uint32_t)(0x100162c8u));
  /* 100033ca lea eax, [esi + ebx*4] */
  EAX = ((uint32_t)(ESI + EBX*4));
  /* 100033cd mov dword ptr [esp + 0x5c], eax */
  w32((uint32_t)(ESP + 0x5c), (EAX));
  /* 100033d1 call dword ptr [0x10016534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016534))), 0x100033d7u);
  /* 100033d7 push 0x10015fa8 */
  push32((uint32_t)(0x10015fa8u));
  /* 100033dc mov ebx, eax */
  EBX = (EAX);
  /* 100033de call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x100033e4u);
  /* 100033e4 push 0x10015fa8 */
  push32((uint32_t)(0x10015fa8u));
  /* 100033e9 mov ebp, eax */
  EBP = (EAX);
  /* 100033eb call dword ptr [0x10016534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016534))), 0x100033f1u);
  /* 100033f1 push 0x10015fd8 */
  push32((uint32_t)(0x10015fd8u));
  /* 100033f6 mov dword ptr [esp + 0x5c], eax */
  w32((uint32_t)(ESP + 0x5c), (EAX));
  /* 100033fa call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10003400u);
  /* 10003400 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003403 mov edi, eax */
  EDI = (EAX);
  /* 10003405 push 0x10015fd8 */
  push32((uint32_t)(0x10015fd8u));
  /* 1000340a call dword ptr [0x10016534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016534))), 0x10003410u);
  /* 10003410 push 0x100160c8 */
  push32((uint32_t)(0x100160c8u));
  /* 10003415 mov dword ptr [esp + 0x20], eax */
  w32((uint32_t)(ESP + 0x20), (EAX));
  /* 10003419 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x1000341fu);
  /* 1000341f push 0x100160c8 */
  push32((uint32_t)(0x100160c8u));
  /* 10003424 mov esi, eax */
  ESI = (EAX);
  /* 10003426 call dword ptr [0x10016534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016534))), 0x1000342cu);
  /* 1000342c push 0x100162c8 */
  push32((uint32_t)(0x100162c8u));
  /* 10003431 mov dword ptr [esp + 0x24], eax */
  w32((uint32_t)(ESP + 0x24), (EAX));
  /* 10003435 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x1000343bu);
  /* 1000343b mov edx, dword ptr [esp + 0x24] */
  EDX = (r32((uint32_t)(ESP + 0x24)));
  /* 1000343f mov ecx, dword ptr [esp + 0x28] */
  ECX = (r32((uint32_t)(ESP + 0x28)));
  /* 10003443 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10003445 mov edx, dword ptr [esp + 0x2c] */
  EDX = (r32((uint32_t)(ESP + 0x2c)));
  /* 10003449 sub esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000344b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1000344d sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000344f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10003451 sub esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10003453 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10003455 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10003457 push 0x10016010 */
  push32((uint32_t)(0x10016010u));
  /* 1000345c add esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1000345e mov dword ptr [esp + 0x38], esi */
  w32((uint32_t)(ESP + 0x38), (ESI));
  /* 10003462 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10003468u);
  /* 10003468 push 3 */
  push32((uint32_t)(0x3u));
  /* 1000346a mov bl, 1 */
  BL = (0x1u);
  /* 1000346c call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10003472u);
  /* 10003472 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003475 cmp eax, 0xd6d8 */
  { uint32_t _a=(EAX),_b=(0xd6d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000347a jle 0x100034aa */
  if ((C.zf||C.sf!=C.of)) goto L_100034aa;
  /* 1000347c push 1 */
  push32((uint32_t)(0x1u));
  /* 1000347e call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10003484u);
  /* 10003484 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003487 cmp eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000348c jle 0x100034aa */
  if ((C.zf||C.sf!=C.of)) goto L_100034aa;
  /* 1000348e push 4 */
  push32((uint32_t)(0x4u));
  /* 10003490 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10003496u);
  /* 10003496 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003499 cmp eax, 0x1b58 */
  { uint32_t _a=(EAX),_b=(0x1b58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000349e jle 0x100034aa */
  if ((C.zf||C.sf!=C.of)) goto L_100034aa;
  /* 100034a0 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 100034a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100034a6 jne 0x100034aa */
  if (!C.zf) goto L_100034aa;
  /* 100034a8 xor bl, bl */
  { uint32_t _r=(BL)^(BL); BL = (_r); fl_logic(_r,8); }
L_100034aa:;
  /* 100034aa push 0x10016180 */
  push32((uint32_t)(0x10016180u));
  /* 100034af call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x100034b5u);
  /* 100034b5 push 3 */
  push32((uint32_t)(0x3u));
  /* 100034b7 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 100034bb call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x100034c1u);
  /* 100034c1 push 0x100161a8 */
  push32((uint32_t)(0x100161a8u));
  /* 100034c6 mov esi, eax */
  ESI = (EAX);
  /* 100034c8 call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x100034ceu);
  /* 100034ce push 0x10013678 */
  push32((uint32_t)(0x10013678u));
  /* 100034d3 mov byte ptr [esp + 0x22], al */
  w8((uint32_t)(ESP + 0x22), (AL));
  /* 100034d7 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x100034ddu);
  /* 100034dd push 0x100160d0 */
  push32((uint32_t)(0x100160d0u));
  /* 100034e2 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x100034e8u);
  /* 100034e8 push 0x100163a0 */
  push32((uint32_t)(0x100163a0u));
  /* 100034ed mov dword ptr [esp + 0x2c], eax */
  w32((uint32_t)(ESP + 0x2c), (EAX));
  /* 100034f1 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x100034f7u);
  /* 100034f7 push 0x10016320 */
  push32((uint32_t)(0x10016320u));
  /* 100034fc mov edi, eax */
  EDI = (EAX);
  /* 100034fe call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10003504u);
  /* 10003504 push 0x10013678 */
  push32((uint32_t)(0x10013678u));
  /* 10003509 mov ebp, eax */
  EBP = (EAX);
  /* 1000350b call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10003511u);
  /* 10003511 add eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10003513 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10003515 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10003517 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10003519 push 0x10016100 */
  push32((uint32_t)(0x10016100u));
  /* 1000351e mov dword ptr [esp + 0x44], eax */
  w32((uint32_t)(ESP + 0x44), (EAX));
  /* 10003522 mov byte ptr [esp + 0x3f], 1 */
  w8((uint32_t)(ESP + 0x3f), (0x1u));
  /* 10003527 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000352du);
  /* 1000352d push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1000352f push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10003531 push 0x10016140 */
  push32((uint32_t)(0x10016140u));
  /* 10003536 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000353cu);
  /* 1000353c push 0x100138c8 */
  push32((uint32_t)(0x100138c8u));
  /* 10003541 call dword ptr [0x10016534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016534))), 0x10003547u);
  /* 10003547 push 0x100138c8 */
  push32((uint32_t)(0x100138c8u));
  /* 1000354c mov edi, eax */
  EDI = (EAX);
  /* 1000354e call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10003554u);
  /* 10003554 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003557 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10003559 je 0x10003560 */
  if (C.zf) goto L_10003560;
  /* 1000355b mov byte ptr [esp + 0x13], 0 */
  w8((uint32_t)(ESP + 0x13), (0x0u));
L_10003560:;
  /* 10003560 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 10003564 test ebp, ebp */
  { uint32_t _r=(EBP)&(EBP); fl_logic(_r,32); }
  /* 10003566 je 0x10003f2d */
  if (C.zf) goto L_10003f2d;
  /* 1000356c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000356e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10003570 push 1 */
  push32((uint32_t)(0x1u));
  /* 10003572 push 0x10015fc8 */
  push32((uint32_t)(0x10015fc8u));
  /* 10003577 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x1000357du);
  /* 1000357d push 0x10015fc8 */
  push32((uint32_t)(0x10015fc8u));
  /* 10003582 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10003588u);
  /* 10003588 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000358b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000358d je 0x10004223 */
  if (C.zf) goto L_10004223;
  /* 10003593 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10003595 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10003597 push 0x10016368 */
  push32((uint32_t)(0x10016368u));
  /* 1000359c call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100035a2u);
  /* 100035a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100035a5 call dword ptr [0x10016560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016560))), 0x100035abu);
  /* 100035ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100035ad jne 0x100035f0 */
  if (!C.zf) goto L_100035f0;
  /* 100035af cmp esi, 0x2bc */
  { uint32_t _a=(ESI),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100035b5 jle 0x100035dc */
  if ((C.zf||C.sf!=C.of)) goto L_100035dc;
  /* 100035b7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100035b9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100035bb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100035bd push 0x10016180 */
  push32((uint32_t)(0x10016180u));
  /* 100035c2 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x100035c8u);
  /* 100035c8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100035ca push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100035cc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100035ce push 0x10013678 */
  push32((uint32_t)(0x10013678u));
  /* 100035d3 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x100035d9u);
  /* 100035d9 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100035dc:;
  /* 100035dc push 1 */
  push32((uint32_t)(0x1u));
  /* 100035de push 1 */
  push32((uint32_t)(0x1u));
  /* 100035e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 100035e2 call dword ptr [0x10016504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016504))), 0x100035e8u);
  /* 100035e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100035eb jmp 0x100036fe */
  goto L_100036fe;
L_100035f0:;
  /* 100035f0 push 0x10013790 */
  push32((uint32_t)(0x10013790u));
  /* 100035f5 call dword ptr [0x1001653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001653c))), 0x100035fbu);
  /* 100035fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100035fe test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10003600 je 0x1000362a */
  if (C.zf) goto L_1000362a;
  /* 10003602 cmp esi, 0x2ee0 */
  { uint32_t _a=(ESI),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003608 jle 0x10003612 */
  if ((C.zf||C.sf!=C.of)) goto L_10003612;
  /* 1000360a push 6 */
  push32((uint32_t)(0x6u));
  /* 1000360c push 8 */
  push32((uint32_t)(0x8u));
  /* 1000360e push 9 */
  push32((uint32_t)(0x9u));
  /* 10003610 jmp 0x10003650 */
  goto L_10003650;
L_10003612:;
  /* 10003612 cmp esi, 0x1770 */
  { uint32_t _a=(ESI),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003618 jle 0x10003622 */
  if ((C.zf||C.sf!=C.of)) goto L_10003622;
  /* 1000361a push 3 */
  push32((uint32_t)(0x3u));
  /* 1000361c push 5 */
  push32((uint32_t)(0x5u));
  /* 1000361e push 9 */
  push32((uint32_t)(0x9u));
  /* 10003620 jmp 0x10003650 */
  goto L_10003650;
L_10003622:;
  /* 10003622 push 1 */
  push32((uint32_t)(0x1u));
  /* 10003624 push 4 */
  push32((uint32_t)(0x4u));
  /* 10003626 push 9 */
  push32((uint32_t)(0x9u));
  /* 10003628 jmp 0x10003650 */
  goto L_10003650;
L_1000362a:;
  /* 1000362a cmp esi, 0x2ee0 */
  { uint32_t _a=(ESI),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003630 jle 0x1000363a */
  if ((C.zf||C.sf!=C.of)) goto L_1000363a;
  /* 10003632 push 8 */
  push32((uint32_t)(0x8u));
  /* 10003634 push 8 */
  push32((uint32_t)(0x8u));
  /* 10003636 push 9 */
  push32((uint32_t)(0x9u));
  /* 10003638 jmp 0x10003650 */
  goto L_10003650;
L_1000363a:;
  /* 1000363a cmp esi, 0x1770 */
  { uint32_t _a=(ESI),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003640 jle 0x1000364a */
  if ((C.zf||C.sf!=C.of)) goto L_1000364a;
  /* 10003642 push 5 */
  push32((uint32_t)(0x5u));
  /* 10003644 push 5 */
  push32((uint32_t)(0x5u));
  /* 10003646 push 9 */
  push32((uint32_t)(0x9u));
  /* 10003648 jmp 0x10003650 */
  goto L_10003650;
L_1000364a:;
  /* 1000364a push 4 */
  push32((uint32_t)(0x4u));
  /* 1000364c push 4 */
  push32((uint32_t)(0x4u));
  /* 1000364e push 0xa */
  push32((uint32_t)(0xau));
L_10003650:;
  /* 10003650 call dword ptr [0x10016504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016504))), 0x10003656u);
  /* 10003656 mov al, byte ptr [esp + 0x1e] */
  AL = (r8((uint32_t)(ESP + 0x1e)));
  /* 1000365a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000365d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1000365f mov edi, 0x15e */
  EDI = (0x15eu);
  /* 10003664 je 0x1000366b */
  if (C.zf) goto L_1000366b;
  /* 10003666 mov edi, 0x12c */
  EDI = (0x12cu);
L_1000366b:;
  /* 1000366b cmp ebp, 0x19 */
  { uint32_t _a=(EBP),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000366e jge 0x1000368c */
  if ((C.sf==C.of)) goto L_1000368c;
  /* 10003670 cmp esi, 0x12c */
  { uint32_t _a=(ESI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003676 jle 0x1000368c */
  if ((C.zf||C.sf!=C.of)) goto L_1000368c;
  /* 10003678 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000367a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000367c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000367e push 0x10016180 */
  push32((uint32_t)(0x10016180u));
  /* 10003683 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10003689u);
  /* 10003689 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1000368c:;
  /* 1000368c cmp esi, 0xc8 */
  { uint32_t _a=(ESI),_b=(0xc8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003692 jle 0x100036cd */
  if ((C.zf||C.sf!=C.of)) goto L_100036cd;
  /* 10003694 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10003696 je 0x100036b2 */
  if (C.zf) goto L_100036b2;
  /* 10003698 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000369a push 0xe8 */
  push32((uint32_t)(0xe8u));
  /* 1000369f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100036a4 push 0x10016180 */
  push32((uint32_t)(0x10016180u));
  /* 100036a9 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x100036afu);
  /* 100036af add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100036b2:;
  /* 100036b2 cmp esi, 0x12c */
  { uint32_t _a=(ESI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100036b8 jle 0x100036cd */
  if ((C.zf||C.sf!=C.of)) goto L_100036cd;
  /* 100036ba push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100036bc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100036be push edi */
  push32((uint32_t)(EDI));
  /* 100036bf push 0x10013678 */
  push32((uint32_t)(0x10013678u));
  /* 100036c4 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x100036cau);
  /* 100036ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100036cd:;
  /* 100036cd push 0x10016260 */
  push32((uint32_t)(0x10016260u));
  /* 100036d2 call dword ptr [0x1001653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001653c))), 0x100036d8u);
  /* 100036d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100036db test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100036dd je 0x100036fe */
  if (C.zf) goto L_100036fe;
  /* 100036df cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100036e5 jle 0x100036fe */
  if ((C.zf||C.sf!=C.of)) goto L_100036fe;
  /* 100036e7 push 0x100162c8 */
  push32((uint32_t)(0x100162c8u));
  /* 100036ec call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x100036f2u);
  /* 100036f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100036f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100036f7 jle 0x100036fe */
  if ((C.zf||C.sf!=C.of)) goto L_100036fe;
  /* 100036f9 call 0x10003230 */
  push32(0x100036feu); f_10003230();
L_100036fe:;
  /* 100036fe mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 10003702 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10003704 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003707 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10003709 jge 0x1000370f */
  if ((C.sf==C.of)) goto L_1000370f;
  /* 1000370b push 5 */
  push32((uint32_t)(0x5u));
  /* 1000370d jmp 0x10003713 */
  goto L_10003713;
L_1000370f:;
  /* 1000370f add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10003712 push eax */
  push32((uint32_t)(EAX));
L_10003713:;
  /* 10003713 push 0x10015f80 */
  push32((uint32_t)(0x10015f80u));
  /* 10003718 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x1000371eu);
  /* 1000371e mov edi, dword ptr [esp + 0x38] */
  EDI = (r32((uint32_t)(ESP + 0x38)));
  /* 10003722 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003725 cmp edi, 5 */
  { uint32_t _a=(EDI),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003728 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1000372a jge 0x10003740 */
  if ((C.sf==C.of)) goto L_10003740;
  /* 1000372c push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1000372e push 0xc */
  push32((uint32_t)(0xcu));
  /* 10003730 push 0x100138d8 */
  push32((uint32_t)(0x100138d8u));
  /* 10003735 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x1000373bu);
  /* 1000373b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000373e jmp 0x1000377a */
  goto L_1000377a;
L_10003740:;
  /* 10003740 lea ecx, [edi + 6] */
  ECX = ((uint32_t)(EDI + 0x6));
  /* 10003743 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10003745 push ecx */
  push32((uint32_t)(ECX));
  /* 10003746 push 0x100138d8 */
  push32((uint32_t)(0x100138d8u));
  /* 1000374b call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10003751u);
  /* 10003751 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10003753 lea edx, [edi + 9] */
  EDX = ((uint32_t)(EDI + 0x9));
  /* 10003756 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10003758 push edx */
  push32((uint32_t)(EDX));
  /* 10003759 push 0x100138d8 */
  push32((uint32_t)(0x100138d8u));
  /* 1000375e call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10003764u);
  /* 10003764 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10003766 add edi, 0xa */
  { uint32_t _a=(EDI),_b=(0xau),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10003769 push 0xa */
  push32((uint32_t)(0xau));
  /* 1000376b push edi */
  push32((uint32_t)(EDI));
  /* 1000376c push 0x100138d8 */
  push32((uint32_t)(0x100138d8u));
  /* 10003771 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10003777u);
  /* 10003777 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1000377a:;
  /* 1000377a push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1000377c push 0 */
  push32((uint32_t)(0x0u));
  /* 1000377e call 0x10002640 */
  push32(0x10003783u); f_10002640();
  /* 10003783 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003786 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10003788 je 0x100037e7 */
  if (C.zf) goto L_100037e7;
  /* 1000378a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1000378c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1000378e push 0x100162d8 */
  push32((uint32_t)(0x100162d8u));
  /* 10003793 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10003799u);
  /* 10003799 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1000379b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1000379d push 0x100162c0 */
  push32((uint32_t)(0x100162c0u));
  /* 100037a2 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100037a8u);
  /* 100037a8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100037aa push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100037ac push 0x100162d0 */
  push32((uint32_t)(0x100162d0u));
  /* 100037b1 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100037b7u);
  /* 100037b7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100037b9 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100037bb push 0x100162b0 */
  push32((uint32_t)(0x100162b0u));
  /* 100037c0 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100037c6u);
  /* 100037c6 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100037c8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100037ca push 0x100162b8 */
  push32((uint32_t)(0x100162b8u));
  /* 100037cf call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100037d5u);
  /* 100037d5 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100037d7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100037d9 push 0x100162a8 */
  push32((uint32_t)(0x100162a8u));
  /* 100037de call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100037e4u);
  /* 100037e4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100037e7:;
  /* 100037e7 push 0xa */
  push32((uint32_t)(0xau));
  /* 100037e9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100037eb push 3 */
  push32((uint32_t)(0x3u));
  /* 100037ed push 0x10013890 */
  push32((uint32_t)(0x10013890u));
  /* 100037f2 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x100037f8u);
  /* 100037f8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100037fa push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100037fc push 1 */
  push32((uint32_t)(0x1u));
  /* 100037fe push 0x10015fa8 */
  push32((uint32_t)(0x10015fa8u));
  /* 10003803 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10003809u);
  /* 10003809 push 5 */
  push32((uint32_t)(0x5u));
  /* 1000380b push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1000380d push 2 */
  push32((uint32_t)(0x2u));
  /* 1000380f push 0x10015fa8 */
  push32((uint32_t)(0x10015fa8u));
  /* 10003814 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x1000381au);
  /* 1000381a mov esi, dword ptr [esp + 0x4c] */
  ESI = (r32((uint32_t)(ESP + 0x4c)));
  /* 1000381e add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003821 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10003823 jne 0x10003839 */
  if (!C.zf) goto L_10003839;
  /* 10003825 push 5 */
  push32((uint32_t)(0x5u));
  /* 10003827 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10003829 push 3 */
  push32((uint32_t)(0x3u));
  /* 1000382b push 0x10015fa8 */
  push32((uint32_t)(0x10015fa8u));
  /* 10003830 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10003836u);
  /* 10003836 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10003839:;
  /* 10003839 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000383b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000383d push 1 */
  push32((uint32_t)(0x1u));
  /* 1000383f push 0x100161d8 */
  push32((uint32_t)(0x100161d8u));
  /* 10003844 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x1000384au);
  /* 1000384a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000384c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000384e push 1 */
  push32((uint32_t)(0x1u));
  /* 10003850 push 0x10016240 */
  push32((uint32_t)(0x10016240u));
  /* 10003855 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x1000385bu);
  /* 1000385b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1000385d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1000385f push 1 */
  push32((uint32_t)(0x1u));
  /* 10003861 push 0x10015fc0 */
  push32((uint32_t)(0x10015fc0u));
  /* 10003866 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x1000386cu);
  /* 1000386c push 5 */
  push32((uint32_t)(0x5u));
  /* 1000386e push 0xa */
  push32((uint32_t)(0xau));
  /* 10003870 push 2 */
  push32((uint32_t)(0x2u));
  /* 10003872 push 0x100161d8 */
  push32((uint32_t)(0x100161d8u));
  /* 10003877 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x1000387du);
  /* 1000387d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003880 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10003882 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10003884 push 1 */
  push32((uint32_t)(0x1u));
  /* 10003886 push 0x100160c8 */
  push32((uint32_t)(0x100160c8u));
  /* 1000388b call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10003891u);
  /* 10003891 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10003893 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10003895 push 0x10013650 */
  push32((uint32_t)(0x10013650u));
  /* 1000389a call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100038a0u);
  /* 100038a0 push 0x10015f10 */
  push32((uint32_t)(0x10015f10u));
  /* 100038a5 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x100038abu);
  /* 100038ab add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100038ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100038b0 jle 0x100038d7 */
  if ((C.zf||C.sf!=C.of)) goto L_100038d7;
  /* 100038b2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 100038b4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100038b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 100038b8 push 0x10013868 */
  push32((uint32_t)(0x10013868u));
  /* 100038bd call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x100038c3u);
  /* 100038c3 push 3 */
  push32((uint32_t)(0x3u));
  /* 100038c5 push 5 */
  push32((uint32_t)(0x5u));
  /* 100038c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 100038c9 push 0x100160e8 */
  push32((uint32_t)(0x100160e8u));
  /* 100038ce call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x100038d4u);
  /* 100038d4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100038d7:;
  /* 100038d7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100038d9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100038db push 1 */
  push32((uint32_t)(0x1u));
  /* 100038dd push 0x10015f10 */
  push32((uint32_t)(0x10015f10u));
  /* 100038e2 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x100038e8u);
  /* 100038e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100038eb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100038ed jne 0x10003903 */
  if (!C.zf) goto L_10003903;
  /* 100038ef push 0xa */
  push32((uint32_t)(0xau));
  /* 100038f1 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100038f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 100038f5 push 0x10015fd8 */
  push32((uint32_t)(0x10015fd8u));
  /* 100038fa call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10003900u);
  /* 10003900 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10003903:;
  /* 10003903 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10003905 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10003907 push 1 */
  push32((uint32_t)(0x1u));
  /* 10003909 push 0x10013608 */
  push32((uint32_t)(0x10013608u));
  /* 1000390e call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10003914u);
  /* 10003914 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003917 cmp ebp, 0x19 */
  { uint32_t _a=(EBP),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000391a jle 0x10003930 */
  if ((C.zf||C.sf!=C.of)) goto L_10003930;
  /* 1000391c push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1000391e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10003920 push 2 */
  push32((uint32_t)(0x2u));
  /* 10003922 push 0x10015fc8 */
  push32((uint32_t)(0x10015fc8u));
  /* 10003927 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x1000392du);
  /* 1000392d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10003930:;
  /* 10003930 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10003932 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10003934 push 1 */
  push32((uint32_t)(0x1u));
  /* 10003936 push 0x10016248 */
  push32((uint32_t)(0x10016248u));
  /* 1000393b call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10003941u);
  /* 10003941 push 5 */
  push32((uint32_t)(0x5u));
  /* 10003943 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10003945 push 2 */
  push32((uint32_t)(0x2u));
  /* 10003947 push 0x10016248 */
  push32((uint32_t)(0x10016248u));
  /* 1000394c call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10003952u);
  /* 10003952 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10003954 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10003956 push 0x10016068 */
  push32((uint32_t)(0x10016068u));
  /* 1000395b call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10003961u);
  /* 10003961 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10003963 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10003965 push 0x10016020 */
  push32((uint32_t)(0x10016020u));
  /* 1000396a call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10003970u);
  /* 10003970 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10003972 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10003974 push 0x10016028 */
  push32((uint32_t)(0x10016028u));
  /* 10003979 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000397fu);
  /* 1000397f add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003982 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10003984 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10003986 push 0x10016030 */
  push32((uint32_t)(0x10016030u));
  /* 1000398b call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10003991u);
  /* 10003991 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10003993 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10003995 push 0x10016260 */
  push32((uint32_t)(0x10016260u));
  /* 1000399a call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100039a0u);
  /* 100039a0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100039a2 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100039a4 push 0x100161a8 */
  push32((uint32_t)(0x100161a8u));
  /* 100039a9 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100039afu);
  /* 100039af push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100039b1 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100039b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 100039b5 push 0x100162c8 */
  push32((uint32_t)(0x100162c8u));
  /* 100039ba call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x100039c0u);
  /* 100039c0 push 5 */
  push32((uint32_t)(0x5u));
  /* 100039c2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100039c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 100039c6 push 0x100162c8 */
  push32((uint32_t)(0x100162c8u));
  /* 100039cb call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x100039d1u);
  /* 100039d1 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100039d4 push 5 */
  push32((uint32_t)(0x5u));
  /* 100039d6 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100039d8 push 3 */
  push32((uint32_t)(0x3u));
  /* 100039da push 0x100162c8 */
  push32((uint32_t)(0x100162c8u));
  /* 100039df call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x100039e5u);
  /* 100039e5 push 5 */
  push32((uint32_t)(0x5u));
  /* 100039e7 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100039e9 push 5 */
  push32((uint32_t)(0x5u));
  /* 100039eb push 0x100162c8 */
  push32((uint32_t)(0x100162c8u));
  /* 100039f0 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x100039f6u);
  /* 100039f6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100039f8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100039fa push 0x10013948 */
  push32((uint32_t)(0x10013948u));
  /* 100039ff call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10003a05u);
  /* 10003a05 call 0x10002630 */
  push32(0x10003a0au); f_10002630();
  /* 10003a0a push 0x10016260 */
  push32((uint32_t)(0x10016260u));
  /* 10003a0f mov edi, eax */
  EDI = (EAX);
  /* 10003a11 call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x10003a17u);
  /* 10003a17 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003a1a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10003a1c je 0x10003a3f */
  if (C.zf) goto L_10003a3f;
  /* 10003a1e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10003a20 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10003a22 push 0x10013948 */
  push32((uint32_t)(0x10013948u));
  /* 10003a27 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10003a2du);
  /* 10003a2d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10003a2f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10003a31 push 0x10013860 */
  push32((uint32_t)(0x10013860u));
  /* 10003a36 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10003a3cu);
  /* 10003a3c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10003a3f:;
  /* 10003a3f push 0x10013948 */
  push32((uint32_t)(0x10013948u));
  /* 10003a44 call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x10003a4au);
  /* 10003a4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003a4d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10003a4f je 0x10003a77 */
  if (C.zf) goto L_10003a77;
  /* 10003a51 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10003a53 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10003a55 push 0x10013930 */
  push32((uint32_t)(0x10013930u));
  /* 10003a5a call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10003a60u);
  /* 10003a60 push 0xa */
  push32((uint32_t)(0xau));
  /* 10003a62 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10003a64 push 0x10013870 */
  push32((uint32_t)(0x10013870u));
  /* 10003a69 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10003a6fu);
  /* 10003a6f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003a72 call 0x10003320 */
  push32(0x10003a77u); f_10003320();
L_10003a77:;
  /* 10003a77 push 0x100160a0 */
  push32((uint32_t)(0x100160a0u));
  /* 10003a7c call dword ptr [0x1001653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001653c))), 0x10003a82u);
  /* 10003a82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003a85 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10003a87 je 0x10003aae */
  if (C.zf) goto L_10003aae;
  /* 10003a89 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10003a8b push 0xa */
  push32((uint32_t)(0xau));
  /* 10003a8d push 0xa */
  push32((uint32_t)(0xau));
  /* 10003a8f push 0x10013658 */
  push32((uint32_t)(0x10013658u));
  /* 10003a94 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10003a9au);
  /* 10003a9a push 0xa */
  push32((uint32_t)(0xau));
  /* 10003a9c push 3 */
  push32((uint32_t)(0x3u));
  /* 10003a9e push 0xf */
  push32((uint32_t)(0xfu));
  /* 10003aa0 push 0x10013658 */
  push32((uint32_t)(0x10013658u));
  /* 10003aa5 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10003aabu);
  /* 10003aab add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10003aae:;
  /* 10003aae push 0 */
  push32((uint32_t)(0x0u));
  /* 10003ab0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10003ab2 call 0x100025f0 */
  push32(0x10003ab7u); f_100025f0();
  /* 10003ab7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10003ab9 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10003abfu);
  /* 10003abf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003ac2 cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003ac7 jle 0x10003b0b */
  if ((C.zf||C.sf!=C.of)) goto L_10003b0b;
  /* 10003ac9 push 0x10013790 */
  push32((uint32_t)(0x10013790u));
  /* 10003ace call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x10003ad4u);
  /* 10003ad4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003ad7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10003ad9 je 0x10003b0b */
  if (C.zf) goto L_10003b0b;
  /* 10003adb push 1 */
  push32((uint32_t)(0x1u));
  /* 10003add call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10003ae3u);
  /* 10003ae3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003ae6 cmp eax, 0x1d4c */
  { uint32_t _a=(EAX),_b=(0x1d4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003aeb jge 0x10003b0b */
  if ((C.sf==C.of)) goto L_10003b0b;
  /* 10003aed push 0x10013948 */
  push32((uint32_t)(0x10013948u));
  /* 10003af2 call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x10003af8u);
  /* 10003af8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003afb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10003afd jne 0x10003b0b */
  if (!C.zf) goto L_10003b0b;
  /* 10003aff push 1 */
  push32((uint32_t)(0x1u));
  /* 10003b01 push 1 */
  push32((uint32_t)(0x1u));
  /* 10003b03 call 0x100025f0 */
  push32(0x10003b08u); f_100025f0();
  /* 10003b08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10003b0b:;
  /* 10003b0b push 0x10013948 */
  push32((uint32_t)(0x10013948u));
  /* 10003b10 call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x10003b16u);
  /* 10003b16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003b19 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10003b1b je 0x10003c9c */
  if (C.zf) goto L_10003c9c;
  /* 10003b21 push 0x100160e0 */
  push32((uint32_t)(0x100160e0u));
  /* 10003b26 call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x10003b2cu);
  /* 10003b2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003b2f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10003b31 je 0x10003c9c */
  if (C.zf) goto L_10003c9c;
  /* 10003b37 push 0x100161a8 */
  push32((uint32_t)(0x100161a8u));
  /* 10003b3c call dword ptr [0x1001653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001653c))), 0x10003b42u);
  /* 10003b42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003b45 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10003b47 je 0x10003c9c */
  if (C.zf) goto L_10003c9c;
  /* 10003b4d cmp edi, 0xa */
  { uint32_t _a=(EDI),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003b50 je 0x10003b57 */
  if (C.zf) goto L_10003b57;
  /* 10003b52 cmp edi, 0x12 */
  { uint32_t _a=(EDI),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003b55 jne 0x10003b87 */
  if (!C.zf) goto L_10003b87;
L_10003b57:;
  /* 10003b57 push 3 */
  push32((uint32_t)(0x3u));
  /* 10003b59 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10003b5fu);
  /* 10003b5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003b62 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003b67 jle 0x10003b87 */
  if ((C.zf||C.sf!=C.of)) goto L_10003b87;
  /* 10003b69 push 1 */
  push32((uint32_t)(0x1u));
  /* 10003b6b call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10003b71u);
  /* 10003b71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003b74 cmp eax, 0x2008 */
  { uint32_t _a=(EAX),_b=(0x2008u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003b79 jge 0x10003b87 */
  if ((C.sf==C.of)) goto L_10003b87;
  /* 10003b7b push 1 */
  push32((uint32_t)(0x1u));
  /* 10003b7d push 1 */
  push32((uint32_t)(0x1u));
  /* 10003b7f call 0x100025f0 */
  push32(0x10003b84u); f_100025f0();
  /* 10003b84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10003b87:;
  /* 10003b87 push 0x10016010 */
  push32((uint32_t)(0x10016010u));
  /* 10003b8c call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x10003b92u);
  /* 10003b92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003b95 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10003b97 jne 0x10003bc9 */
  if (!C.zf) goto L_10003bc9;
  /* 10003b99 push 3 */
  push32((uint32_t)(0x3u));
  /* 10003b9b call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10003ba1u);
  /* 10003ba1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003ba4 cmp eax, 0xea60 */
  { uint32_t _a=(EAX),_b=(0xea60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003ba9 jle 0x10003bc9 */
  if ((C.zf||C.sf!=C.of)) goto L_10003bc9;
  /* 10003bab push 1 */
  push32((uint32_t)(0x1u));
  /* 10003bad call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10003bb3u);
  /* 10003bb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003bb6 cmp eax, 0x2af8 */
  { uint32_t _a=(EAX),_b=(0x2af8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003bbb jge 0x10003bc9 */
  if ((C.sf==C.of)) goto L_10003bc9;
  /* 10003bbd push 1 */
  push32((uint32_t)(0x1u));
  /* 10003bbf push 1 */
  push32((uint32_t)(0x1u));
  /* 10003bc1 call 0x100025f0 */
  push32(0x10003bc6u); f_100025f0();
  /* 10003bc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10003bc9:;
  /* 10003bc9 push 0x10016010 */
  push32((uint32_t)(0x10016010u));
  /* 10003bce call dword ptr [0x1001653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001653c))), 0x10003bd4u);
  /* 10003bd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003bd7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10003bd9 je 0x10003c9c */
  if (C.zf) goto L_10003c9c;
  /* 10003bdf cmp edi, 0x1c */
  { uint32_t _a=(EDI),_b=(0x1cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003be2 jne 0x10003c22 */
  if (!C.zf) goto L_10003c22;
  /* 10003be4 push 3 */
  push32((uint32_t)(0x3u));
  /* 10003be6 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10003becu);
  /* 10003bec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003bef cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003bf4 jle 0x10003cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_10003cf7;
  /* 10003bfa push 4 */
  push32((uint32_t)(0x4u));
  /* 10003bfc call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10003c02u);
  /* 10003c02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003c05 cmp eax, 0x1c84 */
  { uint32_t _a=(EAX),_b=(0x1c84u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003c0a jle 0x10003cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_10003cf7;
  /* 10003c10 push 1 */
  push32((uint32_t)(0x1u));
  /* 10003c12 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10003c18u);
  /* 10003c18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003c1b cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003c20 jmp 0x10003c8c */
  goto L_10003c8c;
L_10003c22:;
  /* 10003c22 cmp edi, 0x28 */
  { uint32_t _a=(EDI),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003c25 jne 0x10003c65 */
  if (!C.zf) goto L_10003c65;
  /* 10003c27 push 3 */
  push32((uint32_t)(0x3u));
  /* 10003c29 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10003c2fu);
  /* 10003c2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003c32 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003c37 jle 0x10003cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_10003cf7;
  /* 10003c3d push 4 */
  push32((uint32_t)(0x4u));
  /* 10003c3f call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10003c45u);
  /* 10003c45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003c48 cmp eax, 0x2648 */
  { uint32_t _a=(EAX),_b=(0x2648u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003c4d jle 0x10003cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_10003cf7;
  /* 10003c53 push 1 */
  push32((uint32_t)(0x1u));
  /* 10003c55 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10003c5bu);
  /* 10003c5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003c5e cmp eax, 0x5dc0 */
  { uint32_t _a=(EAX),_b=(0x5dc0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003c63 jmp 0x10003c8c */
  goto L_10003c8c;
L_10003c65:;
  /* 10003c65 cmp edi, 0x37 */
  { uint32_t _a=(EDI),_b=(0x37u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003c68 jne 0x10003c9c */
  if (!C.zf) goto L_10003c9c;
  /* 10003c6a push 3 */
  push32((uint32_t)(0x3u));
  /* 10003c6c call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10003c72u);
  /* 10003c72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003c75 cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003c7a jle 0x10003cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_10003cf7;
  /* 10003c7c push 1 */
  push32((uint32_t)(0x1u));
  /* 10003c7e call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10003c84u);
  /* 10003c84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003c87 cmp eax, 0x6590 */
  { uint32_t _a=(EAX),_b=(0x6590u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10003c8c:;
  /* 10003c8c jge 0x10003cf7 */
  if ((C.sf==C.of)) goto L_10003cf7;
  /* 10003c8e push 1 */
  push32((uint32_t)(0x1u));
  /* 10003c90 push 1 */
  push32((uint32_t)(0x1u));
  /* 10003c92 call 0x100025f0 */
  push32(0x10003c97u); f_100025f0();
  /* 10003c97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003c9a jmp 0x10003cf7 */
  goto L_10003cf7;
L_10003c9c:;
  /* 10003c9c cmp edi, 0x5f */
  { uint32_t _a=(EDI),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003c9f jne 0x10003cf7 */
  if (!C.zf) goto L_10003cf7;
  /* 10003ca1 push 0xa */
  push32((uint32_t)(0xau));
  /* 10003ca3 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10003ca5 push 0x10013758 */
  push32((uint32_t)(0x10013758u));
  /* 10003caa call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10003cb0u);
  /* 10003cb0 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10003cb2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10003cb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10003cb6 push 0x10016388 */
  push32((uint32_t)(0x10016388u));
  /* 10003cbb call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10003cc1u);
  /* 10003cc1 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10003cc3 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10003cc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10003cc7 push 0x10016388 */
  push32((uint32_t)(0x10016388u));
  /* 10003ccc call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10003cd2u);
  /* 10003cd2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10003cd4 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10003cd6 push 3 */
  push32((uint32_t)(0x3u));
  /* 10003cd8 push 0x10016388 */
  push32((uint32_t)(0x10016388u));
  /* 10003cdd call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10003ce3u);
  /* 10003ce3 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10003ce5 push 0xa */
  push32((uint32_t)(0xau));
  /* 10003ce7 push 5 */
  push32((uint32_t)(0x5u));
  /* 10003ce9 push 0x10016388 */
  push32((uint32_t)(0x10016388u));
  /* 10003cee call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10003cf4u);
  /* 10003cf4 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10003cf7:;
  /* 10003cf7 cmp ebp, 0x50 */
  { uint32_t _a=(EBP),_b=(0x50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003cfa jle 0x10003d53 */
  if ((C.zf||C.sf!=C.of)) goto L_10003d53;
  /* 10003cfc mov al, byte ptr [esp + 0x13] */
  AL = (r8((uint32_t)(ESP + 0x13)));
  /* 10003d00 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10003d02 je 0x10003d53 */
  if (C.zf) goto L_10003d53;
  /* 10003d04 push 0xa */
  push32((uint32_t)(0xau));
  /* 10003d06 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10003d08 push 1 */
  push32((uint32_t)(0x1u));
  /* 10003d0a push 0x100138c8 */
  push32((uint32_t)(0x100138c8u));
  /* 10003d0f call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10003d15u);
  /* 10003d15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003d18 cmp ebp, 0x5f */
  { uint32_t _a=(EBP),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003d1b jle 0x10003d53 */
  if ((C.zf||C.sf!=C.of)) goto L_10003d53;
  /* 10003d1d push 0xa */
  push32((uint32_t)(0xau));
  /* 10003d1f push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10003d21 push 2 */
  push32((uint32_t)(0x2u));
  /* 10003d23 push 0x100138c8 */
  push32((uint32_t)(0x100138c8u));
  /* 10003d28 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10003d2eu);
  /* 10003d2e push 0xa */
  push32((uint32_t)(0xau));
  /* 10003d30 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10003d32 push 3 */
  push32((uint32_t)(0x3u));
  /* 10003d34 push 0x100138c8 */
  push32((uint32_t)(0x100138c8u));
  /* 10003d39 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10003d3fu);
  /* 10003d3f push 0xa */
  push32((uint32_t)(0xau));
  /* 10003d41 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10003d43 push 4 */
  push32((uint32_t)(0x4u));
  /* 10003d45 push 0x100138c8 */
  push32((uint32_t)(0x100138c8u));
  /* 10003d4a call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10003d50u);
  /* 10003d50 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10003d53:;
  /* 10003d53 mov bl, byte ptr [esp + 0x12] */
  BL = (r8((uint32_t)(ESP + 0x12)));
  /* 10003d57 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10003d59 je 0x10003d97 */
  if (C.zf) goto L_10003d97;
  /* 10003d5b push 0x10016260 */
  push32((uint32_t)(0x10016260u));
  /* 10003d60 call dword ptr [0x1001653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001653c))), 0x10003d66u);
  /* 10003d66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003d69 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10003d6b je 0x10003d97 */
  if (C.zf) goto L_10003d97;
  /* 10003d6d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10003d6f push 1 */
  push32((uint32_t)(0x1u));
  /* 10003d71 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10003d73 push 0x10016150 */
  push32((uint32_t)(0x10016150u));
  /* 10003d78 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10003d7eu);
  /* 10003d7e push 0x10016188 */
  push32((uint32_t)(0x10016188u));
  /* 10003d83 call dword ptr [0x1001653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001653c))), 0x10003d89u);
  /* 10003d89 push 0x100160a0 */
  push32((uint32_t)(0x100160a0u));
  /* 10003d8e call dword ptr [0x1001653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001653c))), 0x10003d94u);
  /* 10003d94 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10003d97:;
  /* 10003d97 push 0x10013608 */
  push32((uint32_t)(0x10013608u));
  /* 10003d9c call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10003da2u);
  /* 10003da2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10003da4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10003da6 push 3 */
  push32((uint32_t)(0x3u));
  /* 10003da8 push 0x100161e0 */
  push32((uint32_t)(0x100161e0u));
  /* 10003dad call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10003db3u);
  /* 10003db3 push 0x100160e0 */
  push32((uint32_t)(0x100160e0u));
  /* 10003db8 call dword ptr [0x1001653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001653c))), 0x10003dbeu);
  /* 10003dbe add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003dc1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10003dc3 je 0x10003dd9 */
  if (C.zf) goto L_10003dd9;
  /* 10003dc5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10003dc7 push 0xa */
  push32((uint32_t)(0xau));
  /* 10003dc9 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10003dcb push 0x100161e0 */
  push32((uint32_t)(0x100161e0u));
  /* 10003dd0 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10003dd6u);
  /* 10003dd6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10003dd9:;
  /* 10003dd9 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10003ddb je 0x10003ec5 */
  if (C.zf) goto L_10003ec5;
  /* 10003de1 push 0x10016260 */
  push32((uint32_t)(0x10016260u));
  /* 10003de6 call dword ptr [0x1001653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001653c))), 0x10003decu);
  /* 10003dec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003def test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10003df1 je 0x10003ec5 */
  if (C.zf) goto L_10003ec5;
  /* 10003df7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10003df9 jne 0x10003e31 */
  if (!C.zf) goto L_10003e31;
  /* 10003dfb push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10003dfd push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10003dff push 2 */
  push32((uint32_t)(0x2u));
  /* 10003e01 push 0x100160c8 */
  push32((uint32_t)(0x100160c8u));
  /* 10003e06 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10003e0cu);
  /* 10003e0c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10003e0e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10003e10 push 3 */
  push32((uint32_t)(0x3u));
  /* 10003e12 push 0x100160c8 */
  push32((uint32_t)(0x100160c8u));
  /* 10003e17 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10003e1du);
  /* 10003e1d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10003e1f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10003e21 push 4 */
  push32((uint32_t)(0x4u));
  /* 10003e23 push 0x100160c8 */
  push32((uint32_t)(0x100160c8u));
  /* 10003e28 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10003e2eu);
  /* 10003e2e add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10003e31:;
  /* 10003e31 push 0x100160d0 */
  push32((uint32_t)(0x100160d0u));
  /* 10003e36 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10003e3cu);
  /* 10003e3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003e3f cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003e42 jle 0x10003e65 */
  if ((C.zf||C.sf!=C.of)) goto L_10003e65;
  /* 10003e44 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10003e46 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10003e48 push 0x100161f8 */
  push32((uint32_t)(0x100161f8u));
  /* 10003e4d call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10003e53u);
  /* 10003e53 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10003e55 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10003e57 push 0x10016200 */
  push32((uint32_t)(0x10016200u));
  /* 10003e5c call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10003e62u);
  /* 10003e62 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10003e65:;
  /* 10003e65 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10003e67 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10003e69 push 0x100160e0 */
  push32((uint32_t)(0x100160e0u));
  /* 10003e6e call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10003e74u);
  /* 10003e74 push 0x100138f8 */
  push32((uint32_t)(0x100138f8u));
  /* 10003e79 call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x10003e7fu);
  /* 10003e7f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003e82 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10003e84 je 0x10003ec5 */
  if (C.zf) goto L_10003ec5;
  /* 10003e86 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10003e88 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10003e8a push 0x10016158 */
  push32((uint32_t)(0x10016158u));
  /* 10003e8f call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10003e95u);
  /* 10003e95 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10003e97 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10003e99 push 0x10016168 */
  push32((uint32_t)(0x10016168u));
  /* 10003e9e call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10003ea4u);
  /* 10003ea4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10003ea6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10003ea8 push 0x10016170 */
  push32((uint32_t)(0x10016170u));
  /* 10003ead call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10003eb3u);
  /* 10003eb3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10003eb5 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10003eb7 push 0x10016160 */
  push32((uint32_t)(0x10016160u));
  /* 10003ebc call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10003ec2u);
  /* 10003ec2 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10003ec5:;
  /* 10003ec5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10003ec7 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10003ec9 push 0x10013790 */
  push32((uint32_t)(0x10013790u));
  /* 10003ece call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10003ed4u);
  /* 10003ed4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10003ed6 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10003ed8 push 0x100138d0 */
  push32((uint32_t)(0x100138d0u));
  /* 10003edd call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10003ee3u);
  /* 10003ee3 push 0x10016240 */
  push32((uint32_t)(0x10016240u));
  /* 10003ee8 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10003eeeu);
  /* 10003eee add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003ef1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003ef4 jle 0x10003f31 */
  if ((C.zf||C.sf!=C.of)) goto L_10003f31;
  /* 10003ef6 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10003efa cmp eax, 0x12c */
  { uint32_t _a=(EAX),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003eff jle 0x10003f31 */
  if ((C.zf||C.sf!=C.of)) goto L_10003f31;
  /* 10003f01 lea ecx, [eax - 0x32] */
  ECX = ((uint32_t)(EAX + -0x32));
  /* 10003f04 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10003f08 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 10003f0b cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003f0d jge 0x10003f26 */
  if ((C.sf==C.of)) goto L_10003f26;
  /* 10003f0f push 0xa */
  push32((uint32_t)(0xau));
  /* 10003f11 push 0xa */
  push32((uint32_t)(0xau));
  /* 10003f13 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10003f18 push 0x100160d0 */
  push32((uint32_t)(0x100160d0u));
  /* 10003f1d call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10003f23u);
  /* 10003f23 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10003f26:;
  /* 10003f26 call 0x100032d0 */
  push32(0x10003f2bu); f_100032d0();
  /* 10003f2b jmp 0x10003f31 */
  goto L_10003f31;
L_10003f2d:;
  /* 10003f2d mov bl, byte ptr [esp + 0x12] */
  BL = (r8((uint32_t)(ESP + 0x12)));
L_10003f31:;
  /* 10003f31 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10003f33 je 0x10003f76 */
  if (C.zf) goto L_10003f76;
  /* 10003f35 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10003f37 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10003f39 push 0x10013620 */
  push32((uint32_t)(0x10013620u));
  /* 10003f3e call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10003f44u);
  /* 10003f44 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10003f46 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10003f48 push 0x100136f8 */
  push32((uint32_t)(0x100136f8u));
  /* 10003f4d call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10003f53u);
  /* 10003f53 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10003f55 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10003f57 push 0x10013618 */
  push32((uint32_t)(0x10013618u));
  /* 10003f5c call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10003f62u);
  /* 10003f62 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10003f64 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10003f66 push 2 */
  push32((uint32_t)(0x2u));
  /* 10003f68 push 0x10016240 */
  push32((uint32_t)(0x10016240u));
  /* 10003f6d call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10003f73u);
  /* 10003f73 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10003f76:;
  /* 10003f76 push 0x10013790 */
  push32((uint32_t)(0x10013790u));
  /* 10003f7b call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x10003f81u);
  /* 10003f81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003f84 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10003f86 je 0x10003fa9 */
  if (C.zf) goto L_10003fa9;
  /* 10003f88 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10003f8a push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10003f8c push 0x100161e8 */
  push32((uint32_t)(0x100161e8u));
  /* 10003f91 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10003f97u);
  /* 10003f97 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10003f99 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10003f9b push 0x100161f0 */
  push32((uint32_t)(0x100161f0u));
  /* 10003fa0 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10003fa6u);
  /* 10003fa6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10003fa9:;
  /* 10003fa9 push 0x10013868 */
  push32((uint32_t)(0x10013868u));
  /* 10003fae call dword ptr [0x10016534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016534))), 0x10003fb4u);
  /* 10003fb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003fb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10003fb9 je 0x10004223 */
  if (C.zf) goto L_10004223;
  /* 10003fbf push 0x10015f10 */
  push32((uint32_t)(0x10015f10u));
  /* 10003fc4 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10003fcau);
  /* 10003fca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003fcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10003fcf je 0x1000402a */
  if (C.zf) goto L_1000402a;
  /* 10003fd1 push 0x10016260 */
  push32((uint32_t)(0x10016260u));
  /* 10003fd6 call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x10003fdcu);
  /* 10003fdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003fdf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10003fe1 jne 0x1000402a */
  if (!C.zf) goto L_1000402a;
  /* 10003fe3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10003fe5 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10003febu);
  /* 10003feb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003fee cmp eax, 0x320 */
  { uint32_t _a=(EAX),_b=(0x320u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003ff3 jle 0x1000402a */
  if ((C.zf||C.sf!=C.of)) goto L_1000402a;
  /* 10003ff5 push 3 */
  push32((uint32_t)(0x3u));
  /* 10003ff7 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10003ffdu);
  /* 10003ffd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004000 cmp eax, 0x1770 */
  { uint32_t _a=(EAX),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004005 jge 0x1000402a */
  if ((C.sf==C.of)) goto L_1000402a;
  /* 10004007 push 4 */
  push32((uint32_t)(0x4u));
  /* 10004009 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x1000400fu);
  /* 1000400f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004012 cmp eax, 0xbb8 */
  { uint32_t _a=(EAX),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004017 jle 0x1000402a */
  if ((C.zf||C.sf!=C.of)) goto L_1000402a;
  /* 10004019 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1000401e push 3 */
  push32((uint32_t)(0x3u));
  /* 10004020 push 4 */
  push32((uint32_t)(0x4u));
  /* 10004022 call 0x10002610 */
  push32(0x10004027u); f_10002610();
  /* 10004027 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1000402a:;
  /* 1000402a push 3 */
  push32((uint32_t)(0x3u));
  /* 1000402c call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10004032u);
  /* 10004032 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004035 cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000403a jge 0x1000405f */
  if ((C.sf==C.of)) goto L_1000405f;
  /* 1000403c push 2 */
  push32((uint32_t)(0x2u));
  /* 1000403e call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10004044u);
  /* 10004044 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004047 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000404c jle 0x1000405f */
  if ((C.zf||C.sf!=C.of)) goto L_1000405f;
  /* 1000404e push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10004053 push 3 */
  push32((uint32_t)(0x3u));
  /* 10004055 push 2 */
  push32((uint32_t)(0x2u));
  /* 10004057 call 0x10002610 */
  push32(0x1000405cu); f_10002610();
  /* 1000405c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1000405f:;
  /* 1000405f push 0x100161e8 */
  push32((uint32_t)(0x100161e8u));
  /* 10004064 call dword ptr [0x1001653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001653c))), 0x1000406au);
  /* 1000406a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000406d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1000406f je 0x10004197 */
  if (C.zf) goto L_10004197;
  /* 10004075 push 0x100161f0 */
  push32((uint32_t)(0x100161f0u));
  /* 1000407a call dword ptr [0x1001653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001653c))), 0x10004080u);
  /* 10004080 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004083 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10004085 je 0x10004197 */
  if (C.zf) goto L_10004197;
  /* 1000408b push 2 */
  push32((uint32_t)(0x2u));
  /* 1000408d call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10004093u);
  /* 10004093 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004096 cmp eax, 0x1adb0 */
  { uint32_t _a=(EAX),_b=(0x1adb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000409b jle 0x100040ae */
  if ((C.zf||C.sf!=C.of)) goto L_100040ae;
  /* 1000409d push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 100040a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 100040a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 100040a6 call 0x10002610 */
  push32(0x100040abu); f_10002610();
  /* 100040ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100040ae:;
  /* 100040ae push 0 */
  push32((uint32_t)(0x0u));
  /* 100040b0 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x100040b6u);
  /* 100040b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100040b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100040bb je 0x100041ba */
  if (C.zf) goto L_100041ba;
  /* 100040c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 100040c3 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x100040c9u);
  /* 100040c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100040cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100040ce je 0x1000413b */
  if (C.zf) goto L_1000413b;
  /* 100040d0 push 4 */
  push32((uint32_t)(0x4u));
  /* 100040d2 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x100040d8u);
  /* 100040d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100040db cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100040e0 jge 0x1000413b */
  if ((C.sf==C.of)) goto L_1000413b;
  /* 100040e2 push 4 */
  push32((uint32_t)(0x4u));
  /* 100040e4 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x100040eau);
  /* 100040ea push 5 */
  push32((uint32_t)(0x5u));
  /* 100040ec mov esi, eax */
  ESI = (EAX);
  /* 100040ee call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x100040f4u);
  /* 100040f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100040f7 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100040f9 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 100040fe jge 0x1000411f */
  if ((C.sf==C.of)) goto L_1000411f;
  /* 10004100 push 5 */
  push32((uint32_t)(0x5u));
  /* 10004102 push 2 */
  push32((uint32_t)(0x2u));
  /* 10004104 call 0x10002610 */
  push32(0x10004109u); f_10002610();
  /* 10004109 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 1000410e push 4 */
  push32((uint32_t)(0x4u));
  /* 10004110 push 2 */
  push32((uint32_t)(0x2u));
  /* 10004112 call 0x10002610 */
  push32(0x10004117u); f_10002610();
  /* 10004117 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000411a jmp 0x100041ba */
  goto L_100041ba;
L_1000411f:;
  /* 1000411f push 4 */
  push32((uint32_t)(0x4u));
  /* 10004121 push 2 */
  push32((uint32_t)(0x2u));
  /* 10004123 call 0x10002610 */
  push32(0x10004128u); f_10002610();
  /* 10004128 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 1000412d push 5 */
  push32((uint32_t)(0x5u));
  /* 1000412f push 2 */
  push32((uint32_t)(0x2u));
  /* 10004131 call 0x10002610 */
  push32(0x10004136u); f_10002610();
  /* 10004136 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004139 jmp 0x100041ba */
  goto L_100041ba;
L_1000413b:;
  /* 1000413b push 5 */
  push32((uint32_t)(0x5u));
  /* 1000413d call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10004143u);
  /* 10004143 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004146 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000414b jge 0x1000416d */
  if ((C.sf==C.of)) goto L_1000416d;
  /* 1000414d push 0 */
  push32((uint32_t)(0x0u));
  /* 1000414f call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10004155u);
  /* 10004155 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004158 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000415a je 0x1000416d */
  if (C.zf) goto L_1000416d;
  /* 1000415c push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10004161 push 5 */
  push32((uint32_t)(0x5u));
  /* 10004163 push 2 */
  push32((uint32_t)(0x2u));
  /* 10004165 call 0x10002610 */
  push32(0x1000416au); f_10002610();
  /* 1000416a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1000416d:;
  /* 1000416d push 5 */
  push32((uint32_t)(0x5u));
  /* 1000416f call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10004175u);
  /* 10004175 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004178 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000417d jge 0x100041ba */
  if ((C.sf==C.of)) goto L_100041ba;
  /* 1000417f push 0 */
  push32((uint32_t)(0x0u));
  /* 10004181 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10004187u);
  /* 10004187 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000418a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000418c je 0x100041ba */
  if (C.zf) goto L_100041ba;
  /* 1000418e push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10004193 push 5 */
  push32((uint32_t)(0x5u));
  /* 10004195 jmp 0x100041b0 */
  goto L_100041b0;
L_10004197:;
  /* 10004197 push 2 */
  push32((uint32_t)(0x2u));
  /* 10004199 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x1000419fu);
  /* 1000419f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100041a2 cmp eax, 0x1adb0 */
  { uint32_t _a=(EAX),_b=(0x1adb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100041a7 jle 0x100041ba */
  if ((C.zf||C.sf!=C.of)) goto L_100041ba;
  /* 100041a9 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 100041ae push 1 */
  push32((uint32_t)(0x1u));
L_100041b0:;
  /* 100041b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 100041b2 call 0x10002610 */
  push32(0x100041b7u); f_10002610();
  /* 100041b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100041ba:;
  /* 100041ba push 0 */
  push32((uint32_t)(0x0u));
  /* 100041bc call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x100041c2u);
  /* 100041c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100041c5 cmp eax, 0x249f0 */
  { uint32_t _a=(EAX),_b=(0x249f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100041ca jle 0x100041dd */
  if ((C.zf||C.sf!=C.of)) goto L_100041dd;
  /* 100041cc push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 100041d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 100041d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 100041d5 call 0x10002610 */
  push32(0x100041dau); f_10002610();
  /* 100041da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100041dd:;
  /* 100041dd push 4 */
  push32((uint32_t)(0x4u));
  /* 100041df call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x100041e5u);
  /* 100041e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100041e8 cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100041ed jle 0x10004200 */
  if ((C.zf||C.sf!=C.of)) goto L_10004200;
  /* 100041ef push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 100041f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100041f6 push 4 */
  push32((uint32_t)(0x4u));
  /* 100041f8 call 0x10002610 */
  push32(0x100041fdu); f_10002610();
  /* 100041fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10004200:;
  /* 10004200 push 5 */
  push32((uint32_t)(0x5u));
  /* 10004202 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10004208u);
  /* 10004208 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000420b cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004210 jle 0x10004223 */
  if ((C.zf||C.sf!=C.of)) goto L_10004223;
  /* 10004212 push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 10004217 push 1 */
  push32((uint32_t)(0x1u));
  /* 10004219 push 5 */
  push32((uint32_t)(0x5u));
  /* 1000421b call 0x10002610 */
  push32(0x10004220u); f_10002610();
  /* 10004220 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10004223:;
  /* 10004223 pop edi */
  EDI = (pop32());
  /* 10004224 pop esi */
  ESI = (pop32());
  /* 10004225 pop ebp */
  EBP = (pop32());
  /* 10004226 pop ebx */
  EBX = (pop32());
  /* 10004227 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000422a ret  */
  ESPCHK(0x10003360u, _esp0);
  ESP += 4; return;
}

/* FUN_10004230 @ 0x10004230 (209 bytes, 56 insns) */
void f_10004230(void) {
  FTRACE(0x10004230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10004230 push 3 */
  push32((uint32_t)(0x3u));
  /* 10004232 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10004238u);
  /* 10004238 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000423b cmp eax, 0x672 */
  { uint32_t _a=(EAX),_b=(0x672u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004240 jle 0x10004300 */
  if ((C.zf||C.sf!=C.of)) goto L_10004300;
  /* 10004246 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10004248 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1000424a push 0x10016340 */
  push32((uint32_t)(0x10016340u));
  /* 1000424f call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10004255u);
  /* 10004255 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10004257 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10004259 push 0x10016348 */
  push32((uint32_t)(0x10016348u));
  /* 1000425e call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10004264u);
  /* 10004264 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10004266 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10004268 push 0x10016330 */
  push32((uint32_t)(0x10016330u));
  /* 1000426d call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10004273u);
  /* 10004273 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10004275 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10004277 push 0x10016338 */
  push32((uint32_t)(0x10016338u));
  /* 1000427c call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10004282u);
  /* 10004282 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10004284 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10004286 push 0x10016350 */
  push32((uint32_t)(0x10016350u));
  /* 1000428b call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10004291u);
  /* 10004291 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10004293 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10004295 push 0x10016288 */
  push32((uint32_t)(0x10016288u));
  /* 1000429a call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100042a0u);
  /* 100042a0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100042a3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100042a5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100042a7 push 0x10016270 */
  push32((uint32_t)(0x10016270u));
  /* 100042ac call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100042b2u);
  /* 100042b2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100042b4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100042b6 push 0x10016278 */
  push32((uint32_t)(0x10016278u));
  /* 100042bb call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100042c1u);
  /* 100042c1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100042c3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100042c5 push 0x10016290 */
  push32((uint32_t)(0x10016290u));
  /* 100042ca call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100042d0u);
  /* 100042d0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100042d2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100042d4 push 0x10016298 */
  push32((uint32_t)(0x10016298u));
  /* 100042d9 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100042dfu);
  /* 100042df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100042e1 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100042e3 push 0x10016250 */
  push32((uint32_t)(0x10016250u));
  /* 100042e8 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100042eeu);
  /* 100042ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100042f0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100042f2 push 0x10015fb8 */
  push32((uint32_t)(0x10015fb8u));
  /* 100042f7 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100042fdu);
  /* 100042fd add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10004300:;
  /* 10004300 ret  */
  ESPCHK(0x10004230u, _esp0);
  ESP += 4; return;
}

/* FUN_10004310 @ 0x10004310 (79 bytes, 22 insns) */
void f_10004310(void) {
  FTRACE(0x10004310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10004310 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10004312 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10004314 push 0x10013900 */
  push32((uint32_t)(0x10013900u));
  /* 10004319 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000431fu);
  /* 1000431f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10004321 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10004323 push 0x10013908 */
  push32((uint32_t)(0x10013908u));
  /* 10004328 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000432eu);
  /* 1000432e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10004330 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10004332 push 0x100138f8 */
  push32((uint32_t)(0x100138f8u));
  /* 10004337 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000433du);
  /* 1000433d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000433f push 0xa */
  push32((uint32_t)(0xau));
  /* 10004341 push 0x10015f68 */
  push32((uint32_t)(0x10015f68u));
  /* 10004346 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000434cu);
  /* 1000434c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000434e push 0xa */
  push32((uint32_t)(0xau));
  /* 10004350 push 0x10015f58 */
  push32((uint32_t)(0x10015f58u));
  /* 10004355 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000435bu);
  /* 1000435b add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000435e ret  */
  ESPCHK(0x10004310u, _esp0);
  ESP += 4; return;
}

/* FUN_10004360 @ 0x10004360 (127 bytes, 35 insns) */
void f_10004360(void) {
  FTRACE(0x10004360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10004360 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10004362 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10004364 push 0x100161c8 */
  push32((uint32_t)(0x100161c8u));
  /* 10004369 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000436fu);
  /* 1000436f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10004371 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10004373 push 0x100161c0 */
  push32((uint32_t)(0x100161c0u));
  /* 10004378 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000437eu);
  /* 1000437e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10004380 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10004382 push 0x10016190 */
  push32((uint32_t)(0x10016190u));
  /* 10004387 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000438du);
  /* 1000438d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1000438f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10004391 push 0x10016188 */
  push32((uint32_t)(0x10016188u));
  /* 10004396 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000439cu);
  /* 1000439c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1000439e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100043a0 push 0x10016088 */
  push32((uint32_t)(0x10016088u));
  /* 100043a5 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100043abu);
  /* 100043ab push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100043ad push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100043af push 0x10016090 */
  push32((uint32_t)(0x10016090u));
  /* 100043b4 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100043bau);
  /* 100043ba add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100043bd push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100043bf push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100043c1 push 0x10016098 */
  push32((uint32_t)(0x10016098u));
  /* 100043c6 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100043ccu);
  /* 100043cc push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100043ce push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100043d0 push 0x100160a0 */
  push32((uint32_t)(0x100160a0u));
  /* 100043d5 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100043dbu);
  /* 100043db add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100043de ret  */
  ESPCHK(0x10004360u, _esp0);
  ESP += 4; return;
}

/* ProcessMiddleSeaAI @ 0x100043e0 (3643 bytes, 1035 insns) */
void f_100043e0(void) {
  FTRACE(0x100043e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100043e0 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100043e3 push ebx */
  push32((uint32_t)(EBX));
  /* 100043e4 push ebp */
  push32((uint32_t)(EBP));
  /* 100043e5 push esi */
  push32((uint32_t)(ESI));
  /* 100043e6 push edi */
  push32((uint32_t)(EDI));
  /* 100043e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 100043e9 call 0x10002760 */
  push32(0x100043eeu); f_10002760();
  /* 100043ee push 0x1000f030 */
  push32((uint32_t)(0x1000f030u));
  /* 100043f3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100043f5 call dword ptr [0x100164fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164fc))), 0x100043fbu);
  /* 100043fb push 0x10016180 */
  push32((uint32_t)(0x10016180u));
  /* 10004400 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10004406u);
  /* 10004406 push 3 */
  push32((uint32_t)(0x3u));
  /* 10004408 mov ebx, eax */
  EBX = (EAX);
  /* 1000440a call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10004410u);
  /* 10004410 mov ebp, eax */
  EBP = (EAX);
  /* 10004412 push 0x100161a8 */
  push32((uint32_t)(0x100161a8u));
  /* 10004417 mov dword ptr [esp + 0x30], ebp */
  w32((uint32_t)(ESP + 0x30), (EBP));
  /* 1000441b call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x10004421u);
  /* 10004421 push 0x10013678 */
  push32((uint32_t)(0x10013678u));
  /* 10004426 mov byte ptr [esp + 0x2f], al */
  w8((uint32_t)(ESP + 0x2f), (AL));
  /* 1000442a call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10004430u);
  /* 10004430 push 0x10016010 */
  push32((uint32_t)(0x10016010u));
  /* 10004435 call dword ptr [0x1001653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001653c))), 0x1000443bu);
  /* 1000443b push 0x100160d0 */
  push32((uint32_t)(0x100160d0u));
  /* 10004440 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10004446u);
  /* 10004446 push 0x100163a0 */
  push32((uint32_t)(0x100163a0u));
  /* 1000444b call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10004451u);
  /* 10004451 push 0x10016320 */
  push32((uint32_t)(0x10016320u));
  /* 10004456 mov esi, eax */
  ESI = (EAX);
  /* 10004458 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x1000445eu);
  /* 1000445e push 0x10013678 */
  push32((uint32_t)(0x10013678u));
  /* 10004463 mov edi, eax */
  EDI = (EAX);
  /* 10004465 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x1000446bu);
  /* 1000446b add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000446d add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004470 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10004472 mov byte ptr [esp + 0x12], 1 */
  w8((uint32_t)(ESP + 0x12), (0x1u));
  /* 10004477 mov dword ptr [esp + 0x14], eax */
  w32((uint32_t)(ESP + 0x14), (EAX));
  /* 1000447b call 0x10002660 */
  push32(0x10004480u); f_10002660();
  /* 10004480 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10004482 jle 0x10004498 */
  if ((C.zf||C.sf!=C.of)) goto L_10004498;
  /* 10004484 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10004486 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10004488 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1000448a push 0x10016318 */
  push32((uint32_t)(0x10016318u));
  /* 1000448f call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10004495u);
  /* 10004495 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10004498:;
  /* 10004498 push 0x100138c8 */
  push32((uint32_t)(0x100138c8u));
  /* 1000449d call dword ptr [0x10016534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016534))), 0x100044a3u);
  /* 100044a3 push 0x100138c8 */
  push32((uint32_t)(0x100138c8u));
  /* 100044a8 mov esi, eax */
  ESI = (EAX);
  /* 100044aa call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x100044b0u);
  /* 100044b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100044b3 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100044b5 je 0x100044bc */
  if (C.zf) goto L_100044bc;
  /* 100044b7 mov byte ptr [esp + 0x12], 0 */
  w8((uint32_t)(ESP + 0x12), (0x0u));
L_100044bc:;
  /* 100044bc test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100044be je 0x10005213 */
  if (C.zf) goto L_10005213;
  /* 100044c4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100044c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100044c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 100044ca push 0x10015fc8 */
  push32((uint32_t)(0x10015fc8u));
  /* 100044cf call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x100044d5u);
  /* 100044d5 push 0x10015fc8 */
  push32((uint32_t)(0x10015fc8u));
  /* 100044da call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x100044e0u);
  /* 100044e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100044e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100044e5 je 0x10005213 */
  if (C.zf) goto L_10005213;
  /* 100044eb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100044ed push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100044ef push 0x10016368 */
  push32((uint32_t)(0x10016368u));
  /* 100044f4 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100044fau);
  /* 100044fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100044fd call dword ptr [0x10016560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016560))), 0x10004503u);
  /* 10004503 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10004505 jne 0x1000455c */
  if (!C.zf) goto L_1000455c;
  /* 10004507 cmp ebp, 0x2bc */
  { uint32_t _a=(EBP),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000450d jle 0x10004534 */
  if ((C.zf||C.sf!=C.of)) goto L_10004534;
  /* 1000450f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10004511 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10004513 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10004515 push 0x10016180 */
  push32((uint32_t)(0x10016180u));
  /* 1000451a call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10004520u);
  /* 10004520 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10004522 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10004524 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10004526 push 0x10013678 */
  push32((uint32_t)(0x10013678u));
  /* 1000452b call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10004531u);
  /* 10004531 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10004534:;
  /* 10004534 cmp ebp, 0x3e8 */
  { uint32_t _a=(EBP),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000453a jle 0x10004548 */
  if ((C.zf||C.sf!=C.of)) goto L_10004548;
  /* 1000453c cmp dword ptr [esp + 0x14], 0x1e */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004541 jle 0x10004548 */
  if ((C.zf||C.sf!=C.of)) goto L_10004548;
  /* 10004543 call 0x10004230 */
  push32(0x10004548u); f_10004230();
L_10004548:;
  /* 10004548 push 1 */
  push32((uint32_t)(0x1u));
  /* 1000454a push 1 */
  push32((uint32_t)(0x1u));
  /* 1000454c push 0 */
  push32((uint32_t)(0x0u));
  /* 1000454e call dword ptr [0x10016504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016504))), 0x10004554u);
  /* 10004554 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004557 jmp 0x1000461f */
  goto L_1000461f;
L_1000455c:;
  /* 1000455c mov eax, dword ptr [0x10016584] */
  EAX = (r32((uint32_t)(0x10016584)));
  /* 10004561 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10004564 je 0x10004578 */
  if (C.zf) goto L_10004578;
  /* 10004566 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10004567 je 0x10004572 */
  if (C.zf) goto L_10004572;
  /* 10004569 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1000456a jne 0x100045a4 */
  if (!C.zf) goto L_100045a4;
  /* 1000456c push 9 */
  push32((uint32_t)(0x9u));
  /* 1000456e push 4 */
  push32((uint32_t)(0x4u));
  /* 10004570 jmp 0x10004599 */
  goto L_10004599;
L_10004572:;
  /* 10004572 push 4 */
  push32((uint32_t)(0x4u));
  /* 10004574 push 9 */
  push32((uint32_t)(0x9u));
  /* 10004576 jmp 0x10004599 */
  goto L_10004599;
L_10004578:;
  /* 10004578 cmp ebp, 0x2ee0 */
  { uint32_t _a=(EBP),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000457e jle 0x1000458f */
  if ((C.zf||C.sf!=C.of)) goto L_1000458f;
  /* 10004580 push 6 */
  push32((uint32_t)(0x6u));
  /* 10004582 push 6 */
  push32((uint32_t)(0x6u));
  /* 10004584 push 9 */
  push32((uint32_t)(0x9u));
  /* 10004586 call dword ptr [0x10016504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016504))), 0x1000458cu);
  /* 1000458c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1000458f:;
  /* 1000458f push 5 */
  push32((uint32_t)(0x5u));
  /* 10004591 cmp ebp, 0x1f40 */
  { uint32_t _a=(EBP),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004597 push 5 */
  push32((uint32_t)(0x5u));
L_10004599:;
  /* 10004599 push 9 */
  push32((uint32_t)(0x9u));
  /* 1000459b call dword ptr [0x10016504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016504))), 0x100045a1u);
  /* 100045a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100045a4:;
  /* 100045a4 mov al, byte ptr [esp + 0x13] */
  AL = (r8((uint32_t)(ESP + 0x13)));
  /* 100045a8 mov esi, 0x1c2 */
  ESI = (0x1c2u);
  /* 100045ad test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100045af je 0x100045b6 */
  if (C.zf) goto L_100045b6;
  /* 100045b1 mov esi, 0x17c */
  ESI = (0x17cu);
L_100045b6:;
  /* 100045b6 cmp ebx, 0x19 */
  { uint32_t _a=(EBX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100045b9 jge 0x100045d7 */
  if ((C.sf==C.of)) goto L_100045d7;
  /* 100045bb cmp ebp, 0x12c */
  { uint32_t _a=(EBP),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100045c1 jle 0x10004613 */
  if ((C.zf||C.sf!=C.of)) goto L_10004613;
  /* 100045c3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100045c5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100045c7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100045c9 push 0x10016180 */
  push32((uint32_t)(0x10016180u));
  /* 100045ce call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x100045d4u);
  /* 100045d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100045d7:;
  /* 100045d7 cmp ebp, 0x12c */
  { uint32_t _a=(EBP),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100045dd jle 0x10004613 */
  if ((C.zf||C.sf!=C.of)) goto L_10004613;
  /* 100045df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100045e1 push 0xe8 */
  push32((uint32_t)(0xe8u));
  /* 100045e6 push esi */
  push32((uint32_t)(ESI));
  /* 100045e7 push 0x10016180 */
  push32((uint32_t)(0x10016180u));
  /* 100045ec call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x100045f2u);
  /* 100045f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100045f5 cmp ebp, 0x190 */
  { uint32_t _a=(EBP),_b=(0x190u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100045fb jle 0x10004613 */
  if ((C.zf||C.sf!=C.of)) goto L_10004613;
  /* 100045fd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100045ff push 0xf4 */
  push32((uint32_t)(0xf4u));
  /* 10004604 push esi */
  push32((uint32_t)(ESI));
  /* 10004605 push 0x10013678 */
  push32((uint32_t)(0x10013678u));
  /* 1000460a call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10004610u);
  /* 10004610 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10004613:;
  /* 10004613 cmp dword ptr [esp + 0x14], 0x1e */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004618 jle 0x1000461f */
  if ((C.zf||C.sf!=C.of)) goto L_1000461f;
  /* 1000461a call 0x10004230 */
  push32(0x1000461fu); f_10004230();
L_1000461f:;
  /* 1000461f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10004621 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10004623 push 1 */
  push32((uint32_t)(0x1u));
  /* 10004625 push 0x10015fa8 */
  push32((uint32_t)(0x10015fa8u));
  /* 1000462a call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10004630u);
  /* 10004630 push 5 */
  push32((uint32_t)(0x5u));
  /* 10004632 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10004634 push 2 */
  push32((uint32_t)(0x2u));
  /* 10004636 push 0x10015fa8 */
  push32((uint32_t)(0x10015fa8u));
  /* 1000463b call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10004641u);
  /* 10004641 push 5 */
  push32((uint32_t)(0x5u));
  /* 10004643 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10004645 push 3 */
  push32((uint32_t)(0x3u));
  /* 10004647 push 0x10015fa8 */
  push32((uint32_t)(0x10015fa8u));
  /* 1000464c call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10004652u);
  /* 10004652 push 0x10016240 */
  push32((uint32_t)(0x10016240u));
  /* 10004657 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x1000465du);
  /* 1000465d add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004660 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004663 jle 0x100046d6 */
  if ((C.zf||C.sf!=C.of)) goto L_100046d6;
  /* 10004665 push 5 */
  push32((uint32_t)(0x5u));
  /* 10004667 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10004669 push 2 */
  push32((uint32_t)(0x2u));
  /* 1000466b push 0x10015fa8 */
  push32((uint32_t)(0x10015fa8u));
  /* 10004670 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10004676u);
  /* 10004676 push 0x10015fa8 */
  push32((uint32_t)(0x10015fa8u));
  /* 1000467b call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10004681u);
  /* 10004681 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004684 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004687 jle 0x1000469d */
  if ((C.zf||C.sf!=C.of)) goto L_1000469d;
  /* 10004689 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1000468b push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1000468d push 1 */
  push32((uint32_t)(0x1u));
  /* 1000468f push 0x100160c8 */
  push32((uint32_t)(0x100160c8u));
  /* 10004694 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x1000469au);
  /* 1000469a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1000469d:;
  /* 1000469d push 0x10015fa8 */
  push32((uint32_t)(0x10015fa8u));
  /* 100046a2 call dword ptr [0x10016534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016534))), 0x100046a8u);
  /* 100046a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100046ab cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100046ae jle 0x100046c4 */
  if ((C.zf||C.sf!=C.of)) goto L_100046c4;
  /* 100046b0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100046b2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100046b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100046b6 push 0x10013868 */
  push32((uint32_t)(0x10013868u));
  /* 100046bb call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x100046c1u);
  /* 100046c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100046c4:;
  /* 100046c4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100046c6 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100046c8 push 0x10016100 */
  push32((uint32_t)(0x10016100u));
  /* 100046cd call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100046d3u);
  /* 100046d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100046d6:;
  /* 100046d6 push 0x10016180 */
  push32((uint32_t)(0x10016180u));
  /* 100046db call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x100046e1u);
  /* 100046e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100046e4 cmp eax, 0x23 */
  { uint32_t _a=(EAX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100046e7 jle 0x100046fd */
  if ((C.zf||C.sf!=C.of)) goto L_100046fd;
  /* 100046e9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100046eb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100046ed push 1 */
  push32((uint32_t)(0x1u));
  /* 100046ef push 0x10013868 */
  push32((uint32_t)(0x10013868u));
  /* 100046f4 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x100046fau);
  /* 100046fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100046fd:;
  /* 100046fd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100046ff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10004701 push 1 */
  push32((uint32_t)(0x1u));
  /* 10004703 push 0x100161d8 */
  push32((uint32_t)(0x100161d8u));
  /* 10004708 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x1000470eu);
  /* 1000470e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10004710 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10004712 push 1 */
  push32((uint32_t)(0x1u));
  /* 10004714 push 0x10016240 */
  push32((uint32_t)(0x10016240u));
  /* 10004719 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x1000471fu);
  /* 1000471f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10004721 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10004723 push 2 */
  push32((uint32_t)(0x2u));
  /* 10004725 push 0x10016240 */
  push32((uint32_t)(0x10016240u));
  /* 1000472a call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10004730u);
  /* 10004730 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10004732 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10004734 push 1 */
  push32((uint32_t)(0x1u));
  /* 10004736 push 0x10015fc0 */
  push32((uint32_t)(0x10015fc0u));
  /* 1000473b call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10004741u);
  /* 10004741 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004744 push 5 */
  push32((uint32_t)(0x5u));
  /* 10004746 push 0xa */
  push32((uint32_t)(0xau));
  /* 10004748 push 2 */
  push32((uint32_t)(0x2u));
  /* 1000474a push 0x100161d8 */
  push32((uint32_t)(0x100161d8u));
  /* 1000474f call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10004755u);
  /* 10004755 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10004757 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10004759 push 0x10013650 */
  push32((uint32_t)(0x10013650u));
  /* 1000475e call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10004764u);
  /* 10004764 push 0x10015f10 */
  push32((uint32_t)(0x10015f10u));
  /* 10004769 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x1000476fu);
  /* 1000476f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004772 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10004774 jle 0x1000478a */
  if ((C.zf||C.sf!=C.of)) goto L_1000478a;
  /* 10004776 push 3 */
  push32((uint32_t)(0x3u));
  /* 10004778 push 5 */
  push32((uint32_t)(0x5u));
  /* 1000477a push 1 */
  push32((uint32_t)(0x1u));
  /* 1000477c push 0x100160e8 */
  push32((uint32_t)(0x100160e8u));
  /* 10004781 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10004787u);
  /* 10004787 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1000478a:;
  /* 1000478a call dword ptr [0x10016560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016560))), 0x10004790u);
  /* 10004790 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10004792 je 0x100047a8 */
  if (C.zf) goto L_100047a8;
  /* 10004794 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10004796 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10004798 push 1 */
  push32((uint32_t)(0x1u));
  /* 1000479a push 0x10015f10 */
  push32((uint32_t)(0x10015f10u));
  /* 1000479f call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x100047a5u);
  /* 100047a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100047a8:;
  /* 100047a8 push 0xa */
  push32((uint32_t)(0xau));
  /* 100047aa push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100047ac push 1 */
  push32((uint32_t)(0x1u));
  /* 100047ae push 0x10015fd8 */
  push32((uint32_t)(0x10015fd8u));
  /* 100047b3 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x100047b9u);
  /* 100047b9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100047bb push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100047bd push 1 */
  push32((uint32_t)(0x1u));
  /* 100047bf push 0x10013608 */
  push32((uint32_t)(0x10013608u));
  /* 100047c4 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x100047cau);
  /* 100047ca add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100047cd cmp ebx, 0x19 */
  { uint32_t _a=(EBX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100047d0 jle 0x100047e6 */
  if ((C.zf||C.sf!=C.of)) goto L_100047e6;
  /* 100047d2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100047d4 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100047d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 100047d8 push 0x10015fc8 */
  push32((uint32_t)(0x10015fc8u));
  /* 100047dd call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x100047e3u);
  /* 100047e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100047e6:;
  /* 100047e6 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100047e8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100047ea push 1 */
  push32((uint32_t)(0x1u));
  /* 100047ec push 0x10016248 */
  push32((uint32_t)(0x10016248u));
  /* 100047f1 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x100047f7u);
  /* 100047f7 push 5 */
  push32((uint32_t)(0x5u));
  /* 100047f9 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100047fb push 2 */
  push32((uint32_t)(0x2u));
  /* 100047fd push 0x10016248 */
  push32((uint32_t)(0x10016248u));
  /* 10004802 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10004808u);
  /* 10004808 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1000480a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1000480c push 0x10016068 */
  push32((uint32_t)(0x10016068u));
  /* 10004811 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10004817u);
  /* 10004817 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10004819 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1000481b push 0x10016260 */
  push32((uint32_t)(0x10016260u));
  /* 10004820 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10004826u);
  /* 10004826 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10004828 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000482a push 0x100161a8 */
  push32((uint32_t)(0x100161a8u));
  /* 1000482f call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10004835u);
  /* 10004835 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004838 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1000483a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1000483c push 0x10016030 */
  push32((uint32_t)(0x10016030u));
  /* 10004841 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10004847u);
  /* 10004847 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10004849 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1000484b push 0x10016020 */
  push32((uint32_t)(0x10016020u));
  /* 10004850 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10004856u);
  /* 10004856 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10004858 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1000485a push 0x10016028 */
  push32((uint32_t)(0x10016028u));
  /* 1000485f call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10004865u);
  /* 10004865 push 0x100160c8 */
  push32((uint32_t)(0x100160c8u));
  /* 1000486a call dword ptr [0x10016534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016534))), 0x10004870u);
  /* 10004870 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004873 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10004875 je 0x10004934 */
  if (C.zf) goto L_10004934;
  /* 1000487b push 0x100161a8 */
  push32((uint32_t)(0x100161a8u));
  /* 10004880 call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x10004886u);
  /* 10004886 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004889 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1000488b jne 0x10004934 */
  if (!C.zf) goto L_10004934;
  /* 10004891 push 1 */
  push32((uint32_t)(0x1u));
  /* 10004893 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10004899u);
  /* 10004899 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000489c cmp eax, 0xe74 */
  { uint32_t _a=(EAX),_b=(0xe74u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100048a1 jle 0x100048c7 */
  if ((C.zf||C.sf!=C.of)) goto L_100048c7;
  /* 100048a3 push 4 */
  push32((uint32_t)(0x4u));
  /* 100048a5 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x100048abu);
  /* 100048ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100048ae cmp eax, 0x157c */
  { uint32_t _a=(EAX),_b=(0x157cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100048b3 jle 0x100048c7 */
  if ((C.zf||C.sf!=C.of)) goto L_100048c7;
  /* 100048b5 push 5 */
  push32((uint32_t)(0x5u));
  /* 100048b7 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x100048bdu);
  /* 100048bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100048c0 cmp eax, 0x20d0 */
  { uint32_t _a=(EAX),_b=(0x20d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100048c5 jg 0x10004934 */
  if ((!C.zf&&C.sf==C.of)) goto L_10004934;
L_100048c7:;
  /* 100048c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 100048c9 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x100048cfu);
  /* 100048cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100048d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100048d4 je 0x1000495b */
  if (C.zf) goto L_1000495b;
  /* 100048da push 5 */
  push32((uint32_t)(0x5u));
  /* 100048dc call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x100048e2u);
  /* 100048e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100048e5 cmp eax, 0x20d0 */
  { uint32_t _a=(EAX),_b=(0x20d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100048ea jle 0x1000495b */
  if ((C.zf||C.sf!=C.of)) goto L_1000495b;
  /* 100048ec push 5 */
  push32((uint32_t)(0x5u));
  /* 100048ee call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x100048f4u);
  /* 100048f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100048f7 cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100048fc jle 0x1000490f */
  if ((C.zf||C.sf!=C.of)) goto L_1000490f;
  /* 100048fe push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10004903 push 1 */
  push32((uint32_t)(0x1u));
  /* 10004905 push 5 */
  push32((uint32_t)(0x5u));
  /* 10004907 call 0x10002610 */
  push32(0x1000490cu); f_10002610();
  /* 1000490c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1000490f:;
  /* 1000490f push 4 */
  push32((uint32_t)(0x4u));
  /* 10004911 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10004917u);
  /* 10004917 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000491a cmp eax, 0x32c8 */
  { uint32_t _a=(EAX),_b=(0x32c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000491f jle 0x1000495b */
  if ((C.zf||C.sf!=C.of)) goto L_1000495b;
  /* 10004921 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10004926 push 1 */
  push32((uint32_t)(0x1u));
  /* 10004928 push 4 */
  push32((uint32_t)(0x4u));
  /* 1000492a call 0x10002610 */
  push32(0x1000492fu); f_10002610();
  /* 1000492f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004932 jmp 0x1000495b */
  goto L_1000495b;
L_10004934:;
  /* 10004934 push 0 */
  push32((uint32_t)(0x0u));
  /* 10004936 push 1 */
  push32((uint32_t)(0x1u));
  /* 10004938 call 0x100025f0 */
  push32(0x1000493du); f_100025f0();
  /* 1000493d push 0 */
  push32((uint32_t)(0x0u));
  /* 1000493f push 4 */
  push32((uint32_t)(0x4u));
  /* 10004941 call 0x100025f0 */
  push32(0x10004946u); f_100025f0();
  /* 10004946 push 0 */
  push32((uint32_t)(0x0u));
  /* 10004948 push 3 */
  push32((uint32_t)(0x3u));
  /* 1000494a call 0x100025f0 */
  push32(0x1000494fu); f_100025f0();
  /* 1000494f push 0 */
  push32((uint32_t)(0x0u));
  /* 10004951 push 1 */
  push32((uint32_t)(0x1u));
  /* 10004953 call 0x100025f0 */
  push32(0x10004958u); f_100025f0();
  /* 10004958 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1000495b:;
  /* 1000495b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000495d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000495f push 0x10013790 */
  push32((uint32_t)(0x10013790u));
  /* 10004964 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000496au);
  /* 1000496a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1000496c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1000496e push 1 */
  push32((uint32_t)(0x1u));
  /* 10004970 push 0x100162c8 */
  push32((uint32_t)(0x100162c8u));
  /* 10004975 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x1000497bu);
  /* 1000497b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1000497d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1000497f push 2 */
  push32((uint32_t)(0x2u));
  /* 10004981 push 0x100162c8 */
  push32((uint32_t)(0x100162c8u));
  /* 10004986 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x1000498cu);
  /* 1000498c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1000498e push 0xa */
  push32((uint32_t)(0xau));
  /* 10004990 push 3 */
  push32((uint32_t)(0x3u));
  /* 10004992 push 0x100162c8 */
  push32((uint32_t)(0x100162c8u));
  /* 10004997 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x1000499du);
  /* 1000499d push 0x10013948 */
  push32((uint32_t)(0x10013948u));
  /* 100049a2 call dword ptr [0x1001653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001653c))), 0x100049a8u);
  /* 100049a8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100049ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100049ad jne 0x100049f8 */
  if (!C.zf) goto L_100049f8;
  /* 100049af push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 100049b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 100049b3 call 0x10002640 */
  push32(0x100049b8u); f_10002640();
  /* 100049b8 mov esi, eax */
  ESI = (EAX);
  /* 100049ba push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 100049bc push 0 */
  push32((uint32_t)(0x0u));
  /* 100049be sar esi, 2 */
  ESI = (sh_sar((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 100049c1 call 0x10002640 */
  push32(0x100049c6u); f_10002640();
  /* 100049c6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 100049c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 100049ca add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100049cc call 0x10002640 */
  push32(0x100049d1u); f_10002640();
  /* 100049d1 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100049d3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100049d6 cmp esi, 6 */
  { uint32_t _a=(ESI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100049d9 jle 0x100049e8 */
  if ((C.zf||C.sf!=C.of)) goto L_100049e8;
  /* 100049db push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100049dd push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100049df push 6 */
  push32((uint32_t)(0x6u));
  /* 100049e1 push 0x10015f80 */
  push32((uint32_t)(0x10015f80u));
  /* 100049e6 jmp 0x10004a03 */
  goto L_10004a03;
L_100049e8:;
  /* 100049e8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100049ea je 0x10004a0c */
  if (C.zf) goto L_10004a0c;
  /* 100049ec push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100049ee push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100049f0 push esi */
  push32((uint32_t)(ESI));
  /* 100049f1 push 0x10015f80 */
  push32((uint32_t)(0x10015f80u));
  /* 100049f6 jmp 0x10004a03 */
  goto L_10004a03;
L_100049f8:;
  /* 100049f8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100049fa push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100049fc push 0xa */
  push32((uint32_t)(0xau));
  /* 100049fe push 0x100138d8 */
  push32((uint32_t)(0x100138d8u));
L_10004a03:;
  /* 10004a03 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10004a09u);
  /* 10004a09 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10004a0c:;
  /* 10004a0c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10004a0e push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10004a10 push 0x10013948 */
  push32((uint32_t)(0x10013948u));
  /* 10004a15 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10004a1bu);
  /* 10004a1b push 0x10016260 */
  push32((uint32_t)(0x10016260u));
  /* 10004a20 call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x10004a26u);
  /* 10004a26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004a29 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10004a2b je 0x10004a4e */
  if (C.zf) goto L_10004a4e;
  /* 10004a2d push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10004a2f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10004a31 push 0x10013948 */
  push32((uint32_t)(0x10013948u));
  /* 10004a36 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10004a3cu);
  /* 10004a3c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10004a3e push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10004a40 push 0x10013860 */
  push32((uint32_t)(0x10013860u));
  /* 10004a45 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10004a4bu);
  /* 10004a4b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10004a4e:;
  /* 10004a4e push 0x10013948 */
  push32((uint32_t)(0x10013948u));
  /* 10004a53 call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x10004a59u);
  /* 10004a59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004a5c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10004a5e je 0x10004a86 */
  if (C.zf) goto L_10004a86;
  /* 10004a60 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10004a62 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10004a64 push 0x10013930 */
  push32((uint32_t)(0x10013930u));
  /* 10004a69 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10004a6fu);
  /* 10004a6f push 0xa */
  push32((uint32_t)(0xau));
  /* 10004a71 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10004a73 push 0x10013870 */
  push32((uint32_t)(0x10013870u));
  /* 10004a78 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10004a7eu);
  /* 10004a7e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004a81 call 0x10003320 */
  push32(0x10004a86u); f_10003320();
L_10004a86:;
  /* 10004a86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10004a88 push 1 */
  push32((uint32_t)(0x1u));
  /* 10004a8a call 0x100025f0 */
  push32(0x10004a8fu); f_100025f0();
  /* 10004a8f push 0 */
  push32((uint32_t)(0x0u));
  /* 10004a91 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10004a97u);
  /* 10004a97 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004a9a cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004a9f jle 0x10004ae3 */
  if ((C.zf||C.sf!=C.of)) goto L_10004ae3;
  /* 10004aa1 push 0x10013790 */
  push32((uint32_t)(0x10013790u));
  /* 10004aa6 call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x10004aacu);
  /* 10004aac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004aaf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10004ab1 je 0x10004ae3 */
  if (C.zf) goto L_10004ae3;
  /* 10004ab3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10004ab5 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10004abbu);
  /* 10004abb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004abe cmp eax, 0x1d4c */
  { uint32_t _a=(EAX),_b=(0x1d4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004ac3 jge 0x10004ae3 */
  if ((C.sf==C.of)) goto L_10004ae3;
  /* 10004ac5 push 0x10013948 */
  push32((uint32_t)(0x10013948u));
  /* 10004aca call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x10004ad0u);
  /* 10004ad0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004ad3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10004ad5 jne 0x10004ae3 */
  if (!C.zf) goto L_10004ae3;
  /* 10004ad7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10004ad9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10004adb call 0x100025f0 */
  push32(0x10004ae0u); f_100025f0();
  /* 10004ae0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10004ae3:;
  /* 10004ae3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10004ae5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10004ae7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10004ae9 push 0x100161e0 */
  push32((uint32_t)(0x100161e0u));
  /* 10004aee call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10004af4u);
  /* 10004af4 push 0x100160e0 */
  push32((uint32_t)(0x100160e0u));
  /* 10004af9 call dword ptr [0x1001653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001653c))), 0x10004affu);
  /* 10004aff add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004b02 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10004b04 je 0x10004b1a */
  if (C.zf) goto L_10004b1a;
  /* 10004b06 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10004b08 push 0xa */
  push32((uint32_t)(0xau));
  /* 10004b0a push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10004b0c push 0x100161e0 */
  push32((uint32_t)(0x100161e0u));
  /* 10004b11 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10004b17u);
  /* 10004b17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10004b1a:;
  /* 10004b1a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10004b1c push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10004b1e push 0x100160e0 */
  push32((uint32_t)(0x100160e0u));
  /* 10004b23 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10004b29u);
  /* 10004b29 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10004b2b push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10004b2d push 0x100160f0 */
  push32((uint32_t)(0x100160f0u));
  /* 10004b32 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10004b38u);
  /* 10004b38 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10004b3a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10004b3c push 0x100162d8 */
  push32((uint32_t)(0x100162d8u));
  /* 10004b41 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10004b47u);
  /* 10004b47 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10004b49 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10004b4b push 0x100162c0 */
  push32((uint32_t)(0x100162c0u));
  /* 10004b50 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10004b56u);
  /* 10004b56 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10004b58 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10004b5a push 0x100162d0 */
  push32((uint32_t)(0x100162d0u));
  /* 10004b5f call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10004b65u);
  /* 10004b65 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10004b67 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10004b69 push 0x100162b0 */
  push32((uint32_t)(0x100162b0u));
  /* 10004b6e call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10004b74u);
  /* 10004b74 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004b77 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10004b79 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10004b7b push 0x100162b8 */
  push32((uint32_t)(0x100162b8u));
  /* 10004b80 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10004b86u);
  /* 10004b86 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10004b88 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10004b8a push 0x100162a8 */
  push32((uint32_t)(0x100162a8u));
  /* 10004b8f call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10004b95u);
  /* 10004b95 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004b98 cmp ebx, 0x23 */
  { uint32_t _a=(EBX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004b9b jle 0x10004bf4 */
  if ((C.zf||C.sf!=C.of)) goto L_10004bf4;
  /* 10004b9d mov al, byte ptr [esp + 0x12] */
  AL = (r8((uint32_t)(ESP + 0x12)));
  /* 10004ba1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10004ba3 je 0x10004bf4 */
  if (C.zf) goto L_10004bf4;
  /* 10004ba5 push 0xa */
  push32((uint32_t)(0xau));
  /* 10004ba7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10004ba9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10004bab push 0x100138c8 */
  push32((uint32_t)(0x100138c8u));
  /* 10004bb0 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10004bb6u);
  /* 10004bb6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004bb9 cmp ebx, 0x3c */
  { uint32_t _a=(EBX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004bbc jle 0x10004bf4 */
  if ((C.zf||C.sf!=C.of)) goto L_10004bf4;
  /* 10004bbe push 0xa */
  push32((uint32_t)(0xau));
  /* 10004bc0 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10004bc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10004bc4 push 0x100138c8 */
  push32((uint32_t)(0x100138c8u));
  /* 10004bc9 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10004bcfu);
  /* 10004bcf push 0xa */
  push32((uint32_t)(0xau));
  /* 10004bd1 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10004bd3 push 3 */
  push32((uint32_t)(0x3u));
  /* 10004bd5 push 0x100138c8 */
  push32((uint32_t)(0x100138c8u));
  /* 10004bda call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10004be0u);
  /* 10004be0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10004be2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10004be4 push 4 */
  push32((uint32_t)(0x4u));
  /* 10004be6 push 0x100138c8 */
  push32((uint32_t)(0x100138c8u));
  /* 10004beb call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10004bf1u);
  /* 10004bf1 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10004bf4:;
  /* 10004bf4 mov bl, byte ptr [esp + 0x13] */
  BL = (r8((uint32_t)(ESP + 0x13)));
  /* 10004bf8 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10004bfa je 0x10004cde */
  if (C.zf) goto L_10004cde;
  /* 10004c00 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10004c02 push 0xa */
  push32((uint32_t)(0xau));
  /* 10004c04 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10004c06 push 0x100138b8 */
  push32((uint32_t)(0x100138b8u));
  /* 10004c0b call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10004c11u);
  /* 10004c11 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10004c13 push 1 */
  push32((uint32_t)(0x1u));
  /* 10004c15 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10004c17 push 0x10016150 */
  push32((uint32_t)(0x10016150u));
  /* 10004c1c call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10004c22u);
  /* 10004c22 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10004c24 push 1 */
  push32((uint32_t)(0x1u));
  /* 10004c26 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10004c28 push 0x10016268 */
  push32((uint32_t)(0x10016268u));
  /* 10004c2d call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10004c33u);
  /* 10004c33 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10004c35 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10004c37 push 0x10013620 */
  push32((uint32_t)(0x10013620u));
  /* 10004c3c call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10004c42u);
  /* 10004c42 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10004c44 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10004c46 push 0x100136f8 */
  push32((uint32_t)(0x100136f8u));
  /* 10004c4b call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10004c51u);
  /* 10004c51 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004c54 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10004c56 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10004c58 push 0x10013618 */
  push32((uint32_t)(0x10013618u));
  /* 10004c5d call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10004c63u);
  /* 10004c63 push 0x10016188 */
  push32((uint32_t)(0x10016188u));
  /* 10004c68 call dword ptr [0x1001653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001653c))), 0x10004c6eu);
  /* 10004c6e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004c71 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10004c73 je 0x10004c89 */
  if (C.zf) goto L_10004c89;
  /* 10004c75 push 0xa */
  push32((uint32_t)(0xau));
  /* 10004c77 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10004c79 push 5 */
  push32((uint32_t)(0x5u));
  /* 10004c7b push 0x10016360 */
  push32((uint32_t)(0x10016360u));
  /* 10004c80 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10004c86u);
  /* 10004c86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10004c89:;
  /* 10004c89 push 0x100160a0 */
  push32((uint32_t)(0x100160a0u));
  /* 10004c8e call dword ptr [0x1001653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001653c))), 0x10004c94u);
  /* 10004c94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004c97 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10004c99 je 0x10004caf */
  if (C.zf) goto L_10004caf;
  /* 10004c9b push 0xa */
  push32((uint32_t)(0xau));
  /* 10004c9d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10004c9f push 0xa */
  push32((uint32_t)(0xau));
  /* 10004ca1 push 0x10013658 */
  push32((uint32_t)(0x10013658u));
  /* 10004ca6 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10004cacu);
  /* 10004cac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10004caf:;
  /* 10004caf call 0x10004360 */
  push32(0x10004cb4u); f_10004360();
L_10004cb4:;
  /* 10004cb4 push 0x10016010 */
  push32((uint32_t)(0x10016010u));
  /* 10004cb9 call dword ptr [0x1001653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001653c))), 0x10004cbfu);
  /* 10004cbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004cc2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10004cc4 je 0x10004d14 */
  if (C.zf) goto L_10004d14;
  /* 10004cc6 push 0x100160f0 */
  push32((uint32_t)(0x100160f0u));
  /* 10004ccb call dword ptr [0x1001653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001653c))), 0x10004cd1u);
  /* 10004cd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004cd4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10004cd6 jne 0x10004d05 */
  if (!C.zf) goto L_10004d05;
  /* 10004cd8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10004cda push 2 */
  push32((uint32_t)(0x2u));
  /* 10004cdc jmp 0x10004d09 */
  goto L_10004d09;
L_10004cde:;
  /* 10004cde push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10004ce0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10004ce2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10004ce4 push 0x10016150 */
  push32((uint32_t)(0x10016150u));
  /* 10004ce9 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10004cefu);
  /* 10004cef push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10004cf1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10004cf3 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10004cf5 push 0x10016268 */
  push32((uint32_t)(0x10016268u));
  /* 10004cfa call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10004d00u);
  /* 10004d00 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004d03 jmp 0x10004cb4 */
  goto L_10004cb4;
L_10004d05:;
  /* 10004d05 push 4 */
  push32((uint32_t)(0x4u));
  /* 10004d07 push 4 */
  push32((uint32_t)(0x4u));
L_10004d09:;
  /* 10004d09 push 8 */
  push32((uint32_t)(0x8u));
  /* 10004d0b call dword ptr [0x10016504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016504))), 0x10004d11u);
  /* 10004d11 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10004d14:;
  /* 10004d14 push 0x100160c8 */
  push32((uint32_t)(0x100160c8u));
  /* 10004d19 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10004d1fu);
  /* 10004d1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004d22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10004d24 je 0x10004d3a */
  if (C.zf) goto L_10004d3a;
  /* 10004d26 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10004d28 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10004d2a push 6 */
  push32((uint32_t)(0x6u));
  /* 10004d2c push 0x100161e0 */
  push32((uint32_t)(0x100161e0u));
  /* 10004d31 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10004d37u);
  /* 10004d37 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10004d3a:;
  /* 10004d3a push 0x100160e0 */
  push32((uint32_t)(0x100160e0u));
  /* 10004d3f call dword ptr [0x1001653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001653c))), 0x10004d45u);
  /* 10004d45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004d48 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10004d4a je 0x10004d60 */
  if (C.zf) goto L_10004d60;
  /* 10004d4c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10004d4e push 0xa */
  push32((uint32_t)(0xau));
  /* 10004d50 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10004d52 push 0x100161e0 */
  push32((uint32_t)(0x100161e0u));
  /* 10004d57 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10004d5du);
  /* 10004d5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10004d60:;
  /* 10004d60 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10004d62 je 0x10004e63 */
  if (C.zf) goto L_10004e63;
  /* 10004d68 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10004d6a push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10004d6c push 2 */
  push32((uint32_t)(0x2u));
  /* 10004d6e push 0x100160c8 */
  push32((uint32_t)(0x100160c8u));
  /* 10004d73 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10004d79u);
  /* 10004d79 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10004d7b push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10004d7d push 3 */
  push32((uint32_t)(0x3u));
  /* 10004d7f push 0x100160c8 */
  push32((uint32_t)(0x100160c8u));
  /* 10004d84 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10004d8au);
  /* 10004d8a push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10004d8c push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10004d8e push 4 */
  push32((uint32_t)(0x4u));
  /* 10004d90 push 0x100160c8 */
  push32((uint32_t)(0x100160c8u));
  /* 10004d95 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10004d9bu);
  /* 10004d9b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10004d9d push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10004d9f push 5 */
  push32((uint32_t)(0x5u));
  /* 10004da1 push 0x100160c8 */
  push32((uint32_t)(0x100160c8u));
  /* 10004da6 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10004dacu);
  /* 10004dac add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004daf push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10004db1 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10004db3 push 6 */
  push32((uint32_t)(0x6u));
  /* 10004db5 push 0x100160c8 */
  push32((uint32_t)(0x100160c8u));
  /* 10004dba call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10004dc0u);
  /* 10004dc0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10004dc2 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10004dc4 push 0x10016010 */
  push32((uint32_t)(0x10016010u));
  /* 10004dc9 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10004dcfu);
  /* 10004dcf push 0x100160d0 */
  push32((uint32_t)(0x100160d0u));
  /* 10004dd4 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10004ddau);
  /* 10004dda add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004ddd cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004de0 jle 0x10004e03 */
  if ((C.zf||C.sf!=C.of)) goto L_10004e03;
  /* 10004de2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10004de4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10004de6 push 0x100161f8 */
  push32((uint32_t)(0x100161f8u));
  /* 10004deb call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10004df1u);
  /* 10004df1 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10004df3 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10004df5 push 0x10016200 */
  push32((uint32_t)(0x10016200u));
  /* 10004dfa call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10004e00u);
  /* 10004e00 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10004e03:;
  /* 10004e03 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10004e05 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10004e07 push 0x100160e0 */
  push32((uint32_t)(0x100160e0u));
  /* 10004e0c call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10004e12u);
  /* 10004e12 push 0x100138f8 */
  push32((uint32_t)(0x100138f8u));
  /* 10004e17 call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x10004e1du);
  /* 10004e1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004e20 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10004e22 je 0x10004e63 */
  if (C.zf) goto L_10004e63;
  /* 10004e24 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10004e26 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10004e28 push 0x10016158 */
  push32((uint32_t)(0x10016158u));
  /* 10004e2d call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10004e33u);
  /* 10004e33 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10004e35 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10004e37 push 0x10016168 */
  push32((uint32_t)(0x10016168u));
  /* 10004e3c call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10004e42u);
  /* 10004e42 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10004e44 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10004e46 push 0x10016170 */
  push32((uint32_t)(0x10016170u));
  /* 10004e4b call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10004e51u);
  /* 10004e51 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10004e53 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10004e55 push 0x10016160 */
  push32((uint32_t)(0x10016160u));
  /* 10004e5a call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10004e60u);
  /* 10004e60 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10004e63:;
  /* 10004e63 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10004e65 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10004e67 push 0x10013790 */
  push32((uint32_t)(0x10013790u));
  /* 10004e6c call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10004e72u);
  /* 10004e72 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10004e74 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10004e76 push 0x100138d0 */
  push32((uint32_t)(0x100138d0u));
  /* 10004e7b call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10004e81u);
  /* 10004e81 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10004e83 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10004e85 push 0x10016140 */
  push32((uint32_t)(0x10016140u));
  /* 10004e8a call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10004e90u);
  /* 10004e90 mov eax, dword ptr [esp + 0x38] */
  EAX = (r32((uint32_t)(ESP + 0x38)));
  /* 10004e94 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004e97 cmp eax, 0x15e */
  { uint32_t _a=(EAX),_b=(0x15eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004e9c jle 0x10004eba */
  if ((C.zf||C.sf!=C.of)) goto L_10004eba;
  /* 10004e9e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10004ea0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10004ea2 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10004ea7 push 0x100160d0 */
  push32((uint32_t)(0x100160d0u));
  /* 10004eac call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10004eb2u);
  /* 10004eb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004eb5 call 0x10004310 */
  push32(0x10004ebau); f_10004310();
L_10004eba:;
  /* 10004eba push 0x10013868 */
  push32((uint32_t)(0x10013868u));
  /* 10004ebf call dword ptr [0x10016534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016534))), 0x10004ec5u);
  /* 10004ec5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004ec8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10004eca je 0x10005213 */
  if (C.zf) goto L_10005213;
  /* 10004ed0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10004ed2 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10004ed8u);
  /* 10004ed8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10004eda mov edi, eax */
  EDI = (EAX);
  /* 10004edc call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10004ee2u);
  /* 10004ee2 push 4 */
  push32((uint32_t)(0x4u));
  /* 10004ee4 mov esi, eax */
  ESI = (EAX);
  /* 10004ee6 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10004eecu);
  /* 10004eec push 5 */
  push32((uint32_t)(0x5u));
  /* 10004eee mov ebp, eax */
  EBP = (EAX);
  /* 10004ef0 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10004ef6u);
  /* 10004ef6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10004ef8 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 10004efc call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10004f02u);
  /* 10004f02 mov ebx, eax */
  EBX = (EAX);
  /* 10004f04 mov eax, dword ptr [esp + 0x2c] */
  EAX = (r32((uint32_t)(ESP + 0x2c)));
  /* 10004f08 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004f0b cmp eax, 0x96 */
  { uint32_t _a=(EAX),_b=(0x96u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004f10 jge 0x10004fa3 */
  if ((C.sf==C.of)) goto L_10004fa3;
  /* 10004f16 cmp esi, 0x1388 */
  { uint32_t _a=(ESI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004f1c jle 0x10004f29 */
  if ((C.zf||C.sf!=C.of)) goto L_10004f29;
  /* 10004f1e push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10004f23 push 3 */
  push32((uint32_t)(0x3u));
  /* 10004f25 push 2 */
  push32((uint32_t)(0x2u));
  /* 10004f27 jmp 0x10004f9b */
  goto L_10004f9b;
L_10004f29:;
  /* 10004f29 cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004f2f jle 0x10004f3c */
  if ((C.zf||C.sf!=C.of)) goto L_10004f3c;
  /* 10004f31 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 10004f36 push 3 */
  push32((uint32_t)(0x3u));
  /* 10004f38 push 2 */
  push32((uint32_t)(0x2u));
  /* 10004f3a jmp 0x10004f9b */
  goto L_10004f9b;
L_10004f3c:;
  /* 10004f3c cmp edi, 0x1388 */
  { uint32_t _a=(EDI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004f42 jle 0x10004f4f */
  if ((C.zf||C.sf!=C.of)) goto L_10004f4f;
  /* 10004f44 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10004f49 push 3 */
  push32((uint32_t)(0x3u));
  /* 10004f4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10004f4d jmp 0x10004f9b */
  goto L_10004f9b;
L_10004f4f:;
  /* 10004f4f cmp edi, 0x3e8 */
  { uint32_t _a=(EDI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004f55 jle 0x10004f62 */
  if ((C.zf||C.sf!=C.of)) goto L_10004f62;
  /* 10004f57 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 10004f5c push 3 */
  push32((uint32_t)(0x3u));
  /* 10004f5e push 0 */
  push32((uint32_t)(0x0u));
  /* 10004f60 jmp 0x10004f9b */
  goto L_10004f9b;
L_10004f62:;
  /* 10004f62 cmp dword ptr [esp + 0x14], 0x7d0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004f6a jle 0x10004f77 */
  if ((C.zf||C.sf!=C.of)) goto L_10004f77;
  /* 10004f6c push 0x320 */
  push32((uint32_t)(0x320u));
  /* 10004f71 push 3 */
  push32((uint32_t)(0x3u));
  /* 10004f73 push 5 */
  push32((uint32_t)(0x5u));
  /* 10004f75 jmp 0x10004f9b */
  goto L_10004f9b;
L_10004f77:;
  /* 10004f77 cmp ebp, 0x7d0 */
  { uint32_t _a=(EBP),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004f7d jle 0x10004f8a */
  if ((C.zf||C.sf!=C.of)) goto L_10004f8a;
  /* 10004f7f push 0x320 */
  push32((uint32_t)(0x320u));
  /* 10004f84 push 3 */
  push32((uint32_t)(0x3u));
  /* 10004f86 push 4 */
  push32((uint32_t)(0x4u));
  /* 10004f88 jmp 0x10004f9b */
  goto L_10004f9b;
L_10004f8a:;
  /* 10004f8a cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004f90 jle 0x10004fa3 */
  if ((C.zf||C.sf!=C.of)) goto L_10004fa3;
  /* 10004f92 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10004f97 push 3 */
  push32((uint32_t)(0x3u));
  /* 10004f99 push 1 */
  push32((uint32_t)(0x1u));
L_10004f9b:;
  /* 10004f9b call 0x10002610 */
  push32(0x10004fa0u); f_10002610();
  /* 10004fa0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10004fa3:;
  /* 10004fa3 push 0x10015f10 */
  push32((uint32_t)(0x10015f10u));
  /* 10004fa8 call dword ptr [0x10016534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016534))), 0x10004faeu);
  /* 10004fae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004fb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10004fb3 je 0x10005003 */
  if (C.zf) goto L_10005003;
  /* 10004fb5 cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004fbb jle 0x10005003 */
  if ((C.zf||C.sf!=C.of)) goto L_10005003;
  /* 10004fbd push 0x10016260 */
  push32((uint32_t)(0x10016260u));
  /* 10004fc2 call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x10004fc8u);
  /* 10004fc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004fcb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10004fcd jne 0x10005003 */
  if (!C.zf) goto L_10005003;
  /* 10004fcf cmp ebp, 0xbb8 */
  { uint32_t _a=(EBP),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004fd5 jle 0x10004fe8 */
  if ((C.zf||C.sf!=C.of)) goto L_10004fe8;
  /* 10004fd7 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10004fdc push 3 */
  push32((uint32_t)(0x3u));
  /* 10004fde push 4 */
  push32((uint32_t)(0x4u));
  /* 10004fe0 call 0x10002610 */
  push32(0x10004fe5u); f_10002610();
  /* 10004fe5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10004fe8:;
  /* 10004fe8 cmp dword ptr [esp + 0x14], 0xfa0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004ff0 jle 0x10005003 */
  if ((C.zf||C.sf!=C.of)) goto L_10005003;
  /* 10004ff2 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10004ff7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10004ff9 push 5 */
  push32((uint32_t)(0x5u));
  /* 10004ffb call 0x10002610 */
  push32(0x10005000u); f_10002610();
  /* 10005000 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10005003:;
  /* 10005003 push 2 */
  push32((uint32_t)(0x2u));
  /* 10005005 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x1000500bu);
  /* 1000500b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000500e cmp eax, 0x1d4c0 */
  { uint32_t _a=(EAX),_b=(0x1d4c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005013 jle 0x10005026 */
  if ((C.zf||C.sf!=C.of)) goto L_10005026;
  /* 10005015 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 1000501a push 1 */
  push32((uint32_t)(0x1u));
  /* 1000501c push 2 */
  push32((uint32_t)(0x2u));
  /* 1000501e call 0x10002610 */
  push32(0x10005023u); f_10002610();
  /* 10005023 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10005026:;
  /* 10005026 push 0 */
  push32((uint32_t)(0x0u));
  /* 10005028 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x1000502eu);
  /* 1000502e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005031 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005036 jle 0x10005049 */
  if ((C.zf||C.sf!=C.of)) goto L_10005049;
  /* 10005038 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 1000503d push 1 */
  push32((uint32_t)(0x1u));
  /* 1000503f push 0 */
  push32((uint32_t)(0x0u));
  /* 10005041 call 0x10002610 */
  push32(0x10005046u); f_10002610();
  /* 10005046 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10005049:;
  /* 10005049 push 0x100161d8 */
  push32((uint32_t)(0x100161d8u));
  /* 1000504e call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10005054u);
  /* 10005054 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005057 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10005059 je 0x100051e0 */
  if (C.zf) goto L_100051e0;
  /* 1000505f push 0x100161a8 */
  push32((uint32_t)(0x100161a8u));
  /* 10005064 call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x1000506au);
  /* 1000506a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000506d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1000506f jne 0x100051e0 */
  if (!C.zf) goto L_100051e0;
  /* 10005075 push 5 */
  push32((uint32_t)(0x5u));
  /* 10005077 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x1000507du);
  /* 1000507d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005080 cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005085 jle 0x10005140 */
  if ((C.zf||C.sf!=C.of)) goto L_10005140;
  /* 1000508b push 0 */
  push32((uint32_t)(0x0u));
  /* 1000508d call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10005093u);
  /* 10005093 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005096 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10005098 je 0x10005140 */
  if (C.zf) goto L_10005140;
  /* 1000509e push 1 */
  push32((uint32_t)(0x1u));
  /* 100050a0 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x100050a6u);
  /* 100050a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100050a9 cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100050ae jge 0x10005140 */
  if ((C.sf==C.of)) goto L_10005140;
  /* 100050b4 push 5 */
  push32((uint32_t)(0x5u));
  /* 100050b6 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x100050bcu);
  /* 100050bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100050bf cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100050c4 jle 0x100050d7 */
  if ((C.zf||C.sf!=C.of)) goto L_100050d7;
  /* 100050c6 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 100050cb push 1 */
  push32((uint32_t)(0x1u));
  /* 100050cd push 5 */
  push32((uint32_t)(0x5u));
  /* 100050cf call 0x10002610 */
  push32(0x100050d4u); f_10002610();
  /* 100050d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100050d7:;
  /* 100050d7 push 4 */
  push32((uint32_t)(0x4u));
  /* 100050d9 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x100050dfu);
  /* 100050df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100050e2 cmp eax, 0x1f40 */
  { uint32_t _a=(EAX),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100050e7 jle 0x100050fa */
  if ((C.zf||C.sf!=C.of)) goto L_100050fa;
  /* 100050e9 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 100050ee push 1 */
  push32((uint32_t)(0x1u));
  /* 100050f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 100050f2 call 0x10002610 */
  push32(0x100050f7u); f_10002610();
  /* 100050f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100050fa:;
  /* 100050fa push 2 */
  push32((uint32_t)(0x2u));
  /* 100050fc call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10005102u);
  /* 10005102 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005105 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000510a jle 0x1000511d */
  if ((C.zf||C.sf!=C.of)) goto L_1000511d;
  /* 1000510c push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 10005111 push 1 */
  push32((uint32_t)(0x1u));
  /* 10005113 push 2 */
  push32((uint32_t)(0x2u));
  /* 10005115 call 0x10002610 */
  push32(0x1000511au); f_10002610();
  /* 1000511a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1000511d:;
  /* 1000511d push 3 */
  push32((uint32_t)(0x3u));
  /* 1000511f call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10005125u);
  /* 10005125 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005128 cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000512d jle 0x10005140 */
  if ((C.zf||C.sf!=C.of)) goto L_10005140;
  /* 1000512f push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 10005134 push 1 */
  push32((uint32_t)(0x1u));
  /* 10005136 push 3 */
  push32((uint32_t)(0x3u));
  /* 10005138 call 0x10002610 */
  push32(0x1000513du); f_10002610();
  /* 1000513d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10005140:;
  /* 10005140 push 5 */
  push32((uint32_t)(0x5u));
  /* 10005142 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10005148u);
  /* 10005148 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000514b cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005150 jle 0x100051e0 */
  if ((C.zf||C.sf!=C.of)) goto L_100051e0;
  /* 10005156 push 1 */
  push32((uint32_t)(0x1u));
  /* 10005158 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x1000515eu);
  /* 1000515e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005161 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10005163 je 0x100051e0 */
  if (C.zf) goto L_100051e0;
  /* 10005165 push 1 */
  push32((uint32_t)(0x1u));
  /* 10005167 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x1000516du);
  /* 1000516d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005170 cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005175 jle 0x100051e0 */
  if ((C.zf||C.sf!=C.of)) goto L_100051e0;
  /* 10005177 push 5 */
  push32((uint32_t)(0x5u));
  /* 10005179 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x1000517fu);
  /* 1000517f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005182 cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005187 jle 0x1000519a */
  if ((C.zf||C.sf!=C.of)) goto L_1000519a;
  /* 10005189 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1000518e push 4 */
  push32((uint32_t)(0x4u));
  /* 10005190 push 5 */
  push32((uint32_t)(0x5u));
  /* 10005192 call 0x10002610 */
  push32(0x10005197u); f_10002610();
  /* 10005197 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1000519a:;
  /* 1000519a push 2 */
  push32((uint32_t)(0x2u));
  /* 1000519c call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x100051a2u);
  /* 100051a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100051a5 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100051aa jle 0x100051bd */
  if ((C.zf||C.sf!=C.of)) goto L_100051bd;
  /* 100051ac push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 100051b1 push 4 */
  push32((uint32_t)(0x4u));
  /* 100051b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 100051b5 call 0x10002610 */
  push32(0x100051bau); f_10002610();
  /* 100051ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100051bd:;
  /* 100051bd push 3 */
  push32((uint32_t)(0x3u));
  /* 100051bf call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x100051c5u);
  /* 100051c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100051c8 cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100051cd jle 0x100051e0 */
  if ((C.zf||C.sf!=C.of)) goto L_100051e0;
  /* 100051cf push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 100051d4 push 4 */
  push32((uint32_t)(0x4u));
  /* 100051d6 push 3 */
  push32((uint32_t)(0x3u));
  /* 100051d8 call 0x10002610 */
  push32(0x100051ddu); f_10002610();
  /* 100051dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100051e0:;
  /* 100051e0 call dword ptr [0x100164f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f0))), 0x100051e6u);
  /* 100051e6 mov ecx, dword ptr [eax*4 + 0x100165fc] */
  ECX = (r32((uint32_t)(EAX*4 + 0x100165fc)));
  /* 100051ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100051ef jne 0x10005213 */
  if (!C.zf) goto L_10005213;
  /* 100051f1 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 100051f6 push 3 */
  push32((uint32_t)(0x3u));
  /* 100051f8 push 5 */
  push32((uint32_t)(0x5u));
  /* 100051fa call 0x10002610 */
  push32(0x100051ffu); f_10002610();
  /* 100051ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005202 call dword ptr [0x100164f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f0))), 0x10005208u);
  /* 10005208 mov dword ptr [eax*4 + 0x100165fc], 1 */
  w32((uint32_t)(EAX*4 + 0x100165fc), (0x1u));
L_10005213:;
  /* 10005213 pop edi */
  EDI = (pop32());
  /* 10005214 pop esi */
  ESI = (pop32());
  /* 10005215 pop ebp */
  EBP = (pop32());
  /* 10005216 pop ebx */
  EBX = (pop32());
  /* 10005217 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000521a ret  */
  ESPCHK(0x100043e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005220 @ 0x10005220 (72 bytes, 22 insns) */
void f_10005220(void) {
  FTRACE(0x10005220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10005220 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005222 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005224 push 1 */
  push32((uint32_t)(0x1u));
  /* 10005226 push 0x10015fc8 */
  push32((uint32_t)(0x10015fc8u));
  /* 1000522b call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10005231u);
  /* 10005231 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005233 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005235 push 1 */
  push32((uint32_t)(0x1u));
  /* 10005237 push 0x10015fa8 */
  push32((uint32_t)(0x10015fa8u));
  /* 1000523c call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10005242u);
  /* 10005242 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005244 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005246 push 1 */
  push32((uint32_t)(0x1u));
  /* 10005248 push 0x10015fc0 */
  push32((uint32_t)(0x10015fc0u));
  /* 1000524d call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10005253u);
  /* 10005253 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005255 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005257 push 1 */
  push32((uint32_t)(0x1u));
  /* 10005259 push 0x10013868 */
  push32((uint32_t)(0x10013868u));
  /* 1000525e call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10005264u);
  /* 10005264 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005267 ret  */
  ESPCHK(0x10005220u, _esp0);
  ESP += 4; return;
}

/* FUN_10005270 @ 0x10005270 (55 bytes, 16 insns) */
void f_10005270(void) {
  FTRACE(0x10005270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10005270 cmp dword ptr [esp + 4], 0x10013678 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0x10013678u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005278 jne 0x100052a4 */
  if (!C.zf) goto L_100052a4;
  /* 1000527a push 0x10016330 */
  push32((uint32_t)(0x10016330u));
  /* 1000527f call dword ptr [0x1001653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001653c))), 0x10005285u);
  /* 10005285 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005288 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1000528a je 0x100052a4 */
  if (C.zf) goto L_100052a4;
  /* 1000528c push 0x10016278 */
  push32((uint32_t)(0x10016278u));
  /* 10005291 call dword ptr [0x1001653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001653c))), 0x10005297u);
  /* 10005297 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000529a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1000529c je 0x100052a4 */
  if (C.zf) goto L_100052a4;
  /* 1000529e mov eax, 1 */
  EAX = (0x1u);
  /* 100052a3 ret  */
  ESPCHK(0x10005270u, _esp0);
  ESP += 4; return;
L_100052a4:;
  /* 100052a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100052a6 ret  */
  ESPCHK(0x10005270u, _esp0);
  ESP += 4; return;
}

/* FUN_100052b0 @ 0x100052b0 (2008 bytes, 535 insns) */
void f_100052b0(void) {
  FTRACE(0x100052b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100052b0 push 0x10016268 */
  push32((uint32_t)(0x10016268u));
  /* 100052b5 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x100052bbu);
  /* 100052bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100052be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100052c0 jne 0x100052d4 */
  if (!C.zf) goto L_100052d4;
  /* 100052c2 push 0x100138b8 */
  push32((uint32_t)(0x100138b8u));
  /* 100052c7 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x100052cdu);
  /* 100052cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100052d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100052d2 je 0x10005304 */
  if (C.zf) goto L_10005304;
L_100052d4:;
  /* 100052d4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100052d6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100052d8 push 0x10013940 */
  push32((uint32_t)(0x10013940u));
  /* 100052dd call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100052e3u);
  /* 100052e3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100052e5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100052e7 push 0x100161e8 */
  push32((uint32_t)(0x100161e8u));
  /* 100052ec call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100052f2u);
  /* 100052f2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100052f4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100052f6 push 0x100161f0 */
  push32((uint32_t)(0x100161f0u));
  /* 100052fb call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005301u);
  /* 10005301 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10005304:;
  /* 10005304 push 0x100163a0 */
  push32((uint32_t)(0x100163a0u));
  /* 10005309 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x1000530fu);
  /* 1000530f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005312 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005315 jg 0x1000533f */
  if ((!C.zf&&C.sf==C.of)) goto L_1000533f;
  /* 10005317 push 0x10016320 */
  push32((uint32_t)(0x10016320u));
  /* 1000531c call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10005322u);
  /* 10005322 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005325 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005328 jg 0x1000533f */
  if ((!C.zf&&C.sf==C.of)) goto L_1000533f;
  /* 1000532a push 0x10013678 */
  push32((uint32_t)(0x10013678u));
  /* 1000532f call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10005335u);
  /* 10005335 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005338 cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000533d jle 0x1000539d */
  if ((C.zf||C.sf!=C.of)) goto L_1000539d;
L_1000533f:;
  /* 1000533f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005341 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10005343 push 0x10013618 */
  push32((uint32_t)(0x10013618u));
  /* 10005348 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000534eu);
  /* 1000534e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005350 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10005352 push 0x10013620 */
  push32((uint32_t)(0x10013620u));
  /* 10005357 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000535du);
  /* 1000535d push 0x100163a0 */
  push32((uint32_t)(0x100163a0u));
  /* 10005362 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10005368u);
  /* 10005368 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000536b cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005370 jg 0x1000538b */
  if ((!C.zf&&C.sf==C.of)) goto L_1000538b;
  /* 10005372 push 0x10016320 */
  push32((uint32_t)(0x10016320u));
  /* 10005377 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x1000537du);
  /* 1000537d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005380 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005383 jg 0x1000538b */
  if ((!C.zf&&C.sf==C.of)) goto L_1000538b;
  /* 10005385 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005387 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10005389 jmp 0x1000538f */
  goto L_1000538f;
L_1000538b:;
  /* 1000538b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000538d push 0x5f */
  push32((uint32_t)(0x5fu));
L_1000538f:;
  /* 1000538f push 0x100136f8 */
  push32((uint32_t)(0x100136f8u));
  /* 10005394 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000539au);
  /* 1000539a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1000539d:;
  /* 1000539d push 0x10013678 */
  push32((uint32_t)(0x10013678u));
  /* 100053a2 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x100053a8u);
  /* 100053a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100053ab cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100053ae jle 0x10005463 */
  if ((C.zf||C.sf!=C.of)) goto L_10005463;
  /* 100053b4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100053b6 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100053b8 push 0x10016340 */
  push32((uint32_t)(0x10016340u));
  /* 100053bd call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100053c3u);
  /* 100053c3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100053c5 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 100053c7 push 0x10016348 */
  push32((uint32_t)(0x10016348u));
  /* 100053cc call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100053d2u);
  /* 100053d2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100053d4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100053d6 push 0x10016330 */
  push32((uint32_t)(0x10016330u));
  /* 100053db call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100053e1u);
  /* 100053e1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100053e3 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100053e5 push 0x10016288 */
  push32((uint32_t)(0x10016288u));
  /* 100053ea call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100053f0u);
  /* 100053f0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100053f2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 100053f4 push 0x10016270 */
  push32((uint32_t)(0x10016270u));
  /* 100053f9 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100053ffu);
  /* 100053ff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005401 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10005403 push 0x10016278 */
  push32((uint32_t)(0x10016278u));
  /* 10005408 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000540eu);
  /* 1000540e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005411 push 0x10013678 */
  push32((uint32_t)(0x10013678u));
  /* 10005416 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x1000541cu);
  /* 1000541c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000541f cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005422 jle 0x10005463 */
  if ((C.zf||C.sf!=C.of)) goto L_10005463;
  /* 10005424 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005426 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10005428 push 0x10016338 */
  push32((uint32_t)(0x10016338u));
  /* 1000542d call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005433u);
  /* 10005433 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005435 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10005437 push 0x10016350 */
  push32((uint32_t)(0x10016350u));
  /* 1000543c call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005442u);
  /* 10005442 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005444 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10005446 push 0x10016290 */
  push32((uint32_t)(0x10016290u));
  /* 1000544b call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005451u);
  /* 10005451 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005453 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10005455 push 0x10016298 */
  push32((uint32_t)(0x10016298u));
  /* 1000545a call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005460u);
  /* 10005460 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10005463:;
  /* 10005463 push 0x100160d0 */
  push32((uint32_t)(0x100160d0u));
  /* 10005468 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x1000546eu);
  /* 1000546e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005471 cmp eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005474 jle 0x1000550b */
  if ((C.zf||C.sf!=C.of)) goto L_1000550b;
  /* 1000547a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000547c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1000547e push 0x10013900 */
  push32((uint32_t)(0x10013900u));
  /* 10005483 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005489u);
  /* 10005489 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000548b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1000548d push 0x10013908 */
  push32((uint32_t)(0x10013908u));
  /* 10005492 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005498u);
  /* 10005498 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000549a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1000549c push 0x100138f8 */
  push32((uint32_t)(0x100138f8u));
  /* 100054a1 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100054a7u);
  /* 100054a7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100054a9 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100054ab push 0x10015f68 */
  push32((uint32_t)(0x10015f68u));
  /* 100054b0 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100054b6u);
  /* 100054b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100054b8 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100054ba push 0x10015f58 */
  push32((uint32_t)(0x10015f58u));
  /* 100054bf call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100054c5u);
  /* 100054c5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100054c7 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100054c9 push 0x10015f60 */
  push32((uint32_t)(0x10015f60u));
  /* 100054ce call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100054d4u);
  /* 100054d4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100054d7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100054d9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100054db push 0x100161f8 */
  push32((uint32_t)(0x100161f8u));
  /* 100054e0 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100054e6u);
  /* 100054e6 push 0x100160d0 */
  push32((uint32_t)(0x100160d0u));
  /* 100054eb call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x100054f1u);
  /* 100054f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100054f4 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100054f7 jle 0x1000550b */
  if ((C.zf||C.sf!=C.of)) goto L_1000550b;
  /* 100054f9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100054fb push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100054fd push 0x10016200 */
  push32((uint32_t)(0x10016200u));
  /* 10005502 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005508u);
  /* 10005508 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1000550b:;
  /* 1000550b push 0x100136f0 */
  push32((uint32_t)(0x100136f0u));
  /* 10005510 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10005516u);
  /* 10005516 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005519 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000551c jle 0x1000553f */
  if ((C.zf||C.sf!=C.of)) goto L_1000553f;
  /* 1000551e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005520 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10005522 push 0x10016250 */
  push32((uint32_t)(0x10016250u));
  /* 10005527 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000552du);
  /* 1000552d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000552f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10005531 push 0x10015fb8 */
  push32((uint32_t)(0x10015fb8u));
  /* 10005536 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000553cu);
  /* 1000553c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1000553f:;
  /* 1000553f push 0x100163a0 */
  push32((uint32_t)(0x100163a0u));
  /* 10005544 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x1000554au);
  /* 1000554a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000554d cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005550 jle 0x10005623 */
  if ((C.zf||C.sf!=C.of)) goto L_10005623;
  /* 10005556 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005558 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1000555a push 0x10016120 */
  push32((uint32_t)(0x10016120u));
  /* 1000555f call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005565u);
  /* 10005565 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005567 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10005569 push 0x10016118 */
  push32((uint32_t)(0x10016118u));
  /* 1000556e call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005574u);
  /* 10005574 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005576 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10005578 push 0x10016110 */
  push32((uint32_t)(0x10016110u));
  /* 1000557d call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005583u);
  /* 10005583 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005585 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10005587 push 0x10016008 */
  push32((uint32_t)(0x10016008u));
  /* 1000558c call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005592u);
  /* 10005592 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005594 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10005596 push 0x10016000 */
  push32((uint32_t)(0x10016000u));
  /* 1000559b call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100055a1u);
  /* 100055a1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100055a3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100055a5 push 0x10015ff8 */
  push32((uint32_t)(0x10015ff8u));
  /* 100055aa call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100055b0u);
  /* 100055b0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100055b3 push 0x100163a0 */
  push32((uint32_t)(0x100163a0u));
  /* 100055b8 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x100055beu);
  /* 100055be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100055c1 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100055c4 jle 0x10005623 */
  if ((C.zf||C.sf!=C.of)) goto L_10005623;
  /* 100055c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100055c8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100055ca push 0x10016108 */
  push32((uint32_t)(0x10016108u));
  /* 100055cf call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100055d5u);
  /* 100055d5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100055d7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100055d9 push 0x100160f8 */
  push32((uint32_t)(0x100160f8u));
  /* 100055de call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100055e4u);
  /* 100055e4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100055e6 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100055e8 push 0x10016148 */
  push32((uint32_t)(0x10016148u));
  /* 100055ed call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100055f3u);
  /* 100055f3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100055f5 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100055f7 push 0x10015ff0 */
  push32((uint32_t)(0x10015ff0u));
  /* 100055fc call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005602u);
  /* 10005602 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005604 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10005606 push 0x10015fe8 */
  push32((uint32_t)(0x10015fe8u));
  /* 1000560b call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005611u);
  /* 10005611 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005613 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10005615 push 0x10015fe0 */
  push32((uint32_t)(0x10015fe0u));
  /* 1000561a call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005620u);
  /* 10005620 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10005623:;
  /* 10005623 push 0x10016320 */
  push32((uint32_t)(0x10016320u));
  /* 10005628 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x1000562eu);
  /* 1000562e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005631 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005634 jle 0x10005706 */
  if ((C.zf||C.sf!=C.of)) goto L_10005706;
  /* 1000563a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000563c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1000563e push 0x10013738 */
  push32((uint32_t)(0x10013738u));
  /* 10005643 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005649u);
  /* 10005649 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000564b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1000564d push 0x10013730 */
  push32((uint32_t)(0x10013730u));
  /* 10005652 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005658u);
  /* 10005658 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000565a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1000565c push 0x10013728 */
  push32((uint32_t)(0x10013728u));
  /* 10005661 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005667u);
  /* 10005667 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005669 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1000566b push 0x100136a8 */
  push32((uint32_t)(0x100136a8u));
  /* 10005670 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005676u);
  /* 10005676 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005678 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1000567a push 0x100136a0 */
  push32((uint32_t)(0x100136a0u));
  /* 1000567f call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005685u);
  /* 10005685 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005687 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10005689 push 0x10013698 */
  push32((uint32_t)(0x10013698u));
  /* 1000568e call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005694u);
  /* 10005694 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005697 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005699 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1000569b push 0x10013690 */
  push32((uint32_t)(0x10013690u));
  /* 100056a0 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100056a6u);
  /* 100056a6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100056a8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100056aa push 0x10013668 */
  push32((uint32_t)(0x10013668u));
  /* 100056af call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100056b5u);
  /* 100056b5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100056b7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100056b9 push 0x10013660 */
  push32((uint32_t)(0x10013660u));
  /* 100056be call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100056c4u);
  /* 100056c4 push 0x10013660 */
  push32((uint32_t)(0x10013660u));
  /* 100056c9 call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x100056cfu);
  /* 100056cf add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100056d2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100056d4 je 0x10005706 */
  if (C.zf) goto L_10005706;
  /* 100056d6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100056d8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100056da push 0x10013710 */
  push32((uint32_t)(0x10013710u));
  /* 100056df call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100056e5u);
  /* 100056e5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100056e7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100056e9 push 0x10013708 */
  push32((uint32_t)(0x10013708u));
  /* 100056ee call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100056f4u);
  /* 100056f4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100056f6 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100056f8 push 0x10013700 */
  push32((uint32_t)(0x10013700u));
  /* 100056fd call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005703u);
  /* 10005703 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10005706:;
  /* 10005706 push 0x10013680 */
  push32((uint32_t)(0x10013680u));
  /* 1000570b call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10005711u);
  /* 10005711 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005714 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005717 jle 0x1000579f */
  if ((C.zf||C.sf!=C.of)) goto L_1000579f;
  /* 1000571d push 0x10013670 */
  push32((uint32_t)(0x10013670u));
  /* 10005722 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10005728u);
  /* 10005728 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000572b cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000572e jge 0x1000579f */
  if ((C.sf==C.of)) goto L_1000579f;
  /* 10005730 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005732 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10005734 push 0x100138f0 */
  push32((uint32_t)(0x100138f0u));
  /* 10005739 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000573fu);
  /* 1000573f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005741 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10005743 push 0x100138e8 */
  push32((uint32_t)(0x100138e8u));
  /* 10005748 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000574eu);
  /* 1000574e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005750 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10005752 push 0x100138e0 */
  push32((uint32_t)(0x100138e0u));
  /* 10005757 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000575du);
  /* 1000575d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000575f push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10005761 push 0x100138a8 */
  push32((uint32_t)(0x100138a8u));
  /* 10005766 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000576cu);
  /* 1000576c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000576e push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10005770 push 0x100138a0 */
  push32((uint32_t)(0x100138a0u));
  /* 10005775 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000577bu);
  /* 1000577b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000577d push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1000577f push 0x10013898 */
  push32((uint32_t)(0x10013898u));
  /* 10005784 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000578au);
  /* 1000578a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000578d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000578f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10005791 push 0x100161f8 */
  push32((uint32_t)(0x100161f8u));
  /* 10005796 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000579cu);
  /* 1000579c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1000579f:;
  /* 1000579f push 0x10013670 */
  push32((uint32_t)(0x10013670u));
  /* 100057a4 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x100057aau);
  /* 100057aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100057ad cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100057b0 jle 0x10005891 */
  if ((C.zf||C.sf!=C.of)) goto L_10005891;
  /* 100057b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100057b8 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100057ba push 0x10013648 */
  push32((uint32_t)(0x10013648u));
  /* 100057bf call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100057c5u);
  /* 100057c5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100057c7 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 100057c9 push 0x10013640 */
  push32((uint32_t)(0x10013640u));
  /* 100057ce call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100057d4u);
  /* 100057d4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100057d6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100057d8 push 0x10013638 */
  push32((uint32_t)(0x10013638u));
  /* 100057dd call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100057e3u);
  /* 100057e3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100057e5 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100057e7 push 0x10016308 */
  push32((uint32_t)(0x10016308u));
  /* 100057ec call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100057f2u);
  /* 100057f2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100057f4 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100057f6 push 0x10016300 */
  push32((uint32_t)(0x10016300u));
  /* 100057fb call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005801u);
  /* 10005801 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005803 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10005805 push 0x100162f8 */
  push32((uint32_t)(0x100162f8u));
  /* 1000580a call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005810u);
  /* 10005810 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005813 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005815 push 0xa */
  push32((uint32_t)(0xau));
  /* 10005817 push 0x10016380 */
  push32((uint32_t)(0x10016380u));
  /* 1000581c call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005822u);
  /* 10005822 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005824 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10005826 push 0x10016378 */
  push32((uint32_t)(0x10016378u));
  /* 1000582b call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005831u);
  /* 10005831 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005833 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10005835 push 0x100163c8 */
  push32((uint32_t)(0x100163c8u));
  /* 1000583a call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005840u);
  /* 10005840 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005842 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10005844 push 0x100163c0 */
  push32((uint32_t)(0x100163c0u));
  /* 10005849 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000584fu);
  /* 1000584f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005851 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10005853 push 0x100163b8 */
  push32((uint32_t)(0x100163b8u));
  /* 10005858 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000585eu);
  /* 1000585e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005860 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10005862 push 0x100163b0 */
  push32((uint32_t)(0x100163b0u));
  /* 10005867 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000586du);
  /* 1000586d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005870 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005872 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10005874 push 0x100161f8 */
  push32((uint32_t)(0x100161f8u));
  /* 10005879 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000587fu);
  /* 1000587f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005881 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10005883 push 0x10016200 */
  push32((uint32_t)(0x10016200u));
  /* 10005888 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000588eu);
  /* 1000588e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10005891:;
  /* 10005891 push 0x10015f70 */
  push32((uint32_t)(0x10015f70u));
  /* 10005896 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x1000589cu);
  /* 1000589c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000589f cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100058a2 jle 0x10005a00 */
  if ((C.zf||C.sf!=C.of)) goto L_10005a00;
  /* 100058a8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100058aa push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100058ac push 0x100136d0 */
  push32((uint32_t)(0x100136d0u));
  /* 100058b1 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100058b7u);
  /* 100058b7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100058b9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100058bb push 0x100136d8 */
  push32((uint32_t)(0x100136d8u));
  /* 100058c0 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100058c6u);
  /* 100058c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100058c8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100058ca push 0x100136e0 */
  push32((uint32_t)(0x100136e0u));
  /* 100058cf call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100058d5u);
  /* 100058d5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100058d7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100058d9 push 0x100136e8 */
  push32((uint32_t)(0x100136e8u));
  /* 100058de call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100058e4u);
  /* 100058e4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100058e6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100058e8 push 0x100136b0 */
  push32((uint32_t)(0x100136b0u));
  /* 100058ed call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100058f3u);
  /* 100058f3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100058f5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100058f7 push 0x100136c0 */
  push32((uint32_t)(0x100136c0u));
  /* 100058fc call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005902u);
  /* 10005902 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005905 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005907 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10005909 push 0x10013778 */
  push32((uint32_t)(0x10013778u));
  /* 1000590e call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005914u);
  /* 10005914 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005916 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10005918 push 0x10013780 */
  push32((uint32_t)(0x10013780u));
  /* 1000591d call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005923u);
  /* 10005923 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005925 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10005927 push 0x10013788 */
  push32((uint32_t)(0x10013788u));
  /* 1000592c call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005932u);
  /* 10005932 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005934 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10005936 push 0x10013760 */
  push32((uint32_t)(0x10013760u));
  /* 1000593b call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005941u);
  /* 10005941 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005943 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10005945 push 0x10013768 */
  push32((uint32_t)(0x10013768u));
  /* 1000594a call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005950u);
  /* 10005950 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005952 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10005954 push 0x10013770 */
  push32((uint32_t)(0x10013770u));
  /* 10005959 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000595fu);
  /* 1000595f add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005962 push 0x10015f70 */
  push32((uint32_t)(0x10015f70u));
  /* 10005967 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x1000596du);
  /* 1000596d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005970 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005973 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005975 jle 0x1000598a */
  if ((C.zf||C.sf!=C.of)) goto L_1000598a;
  /* 10005977 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10005979 push 0x10016018 */
  push32((uint32_t)(0x10016018u));
  /* 1000597e call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005984u);
  /* 10005984 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005986 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10005988 jmp 0x1000599b */
  goto L_1000599b;
L_1000598a:;
  /* 1000598a push 0xf */
  push32((uint32_t)(0xfu));
  /* 1000598c push 0x10016018 */
  push32((uint32_t)(0x10016018u));
  /* 10005991 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005997u);
  /* 10005997 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005999 push 0xf */
  push32((uint32_t)(0xfu));
L_1000599b:;
  /* 1000599b push 0x10016078 */
  push32((uint32_t)(0x10016078u));
  /* 100059a0 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100059a6u);
  /* 100059a6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100059a9 push 0x10016018 */
  push32((uint32_t)(0x10016018u));
  /* 100059ae call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x100059b4u);
  /* 100059b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100059b7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100059b9 je 0x100059df */
  if (C.zf) goto L_100059df;
  /* 100059bb push 0x10016078 */
  push32((uint32_t)(0x10016078u));
  /* 100059c0 call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x100059c6u);
  /* 100059c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100059c9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100059cb je 0x100059df */
  if (C.zf) goto L_100059df;
  /* 100059cd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100059cf push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100059d1 push 0x10016070 */
  push32((uint32_t)(0x10016070u));
  /* 100059d6 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100059dcu);
  /* 100059dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100059df:;
  /* 100059df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100059e1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100059e3 push 0x100161f8 */
  push32((uint32_t)(0x100161f8u));
  /* 100059e8 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100059eeu);
  /* 100059ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100059f0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100059f2 push 0x10016200 */
  push32((uint32_t)(0x10016200u));
  /* 100059f7 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100059fdu);
  /* 100059fd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10005a00:;
  /* 10005a00 push 0x100162f8 */
  push32((uint32_t)(0x100162f8u));
  /* 10005a05 call dword ptr [0x1001653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001653c))), 0x10005a0bu);
  /* 10005a0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005a0e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10005a10 je 0x10005a87 */
  if (C.zf) goto L_10005a87;
  /* 10005a12 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005a14 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10005a16 push 0x10016160 */
  push32((uint32_t)(0x10016160u));
  /* 10005a1b call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005a21u);
  /* 10005a21 push 0x10016160 */
  push32((uint32_t)(0x10016160u));
  /* 10005a26 call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x10005a2cu);
  /* 10005a2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005a2f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10005a31 je 0x10005a87 */
  if (C.zf) goto L_10005a87;
  /* 10005a33 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005a35 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10005a37 push 0x10016170 */
  push32((uint32_t)(0x10016170u));
  /* 10005a3c call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005a42u);
  /* 10005a42 push 0x10016170 */
  push32((uint32_t)(0x10016170u));
  /* 10005a47 call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x10005a4du);
  /* 10005a4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005a50 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10005a52 je 0x10005a87 */
  if (C.zf) goto L_10005a87;
  /* 10005a54 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005a56 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10005a58 push 0x10016168 */
  push32((uint32_t)(0x10016168u));
  /* 10005a5d call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005a63u);
  /* 10005a63 push 0x10016168 */
  push32((uint32_t)(0x10016168u));
  /* 10005a68 call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x10005a6eu);
  /* 10005a6e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005a71 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10005a73 je 0x10005a87 */
  if (C.zf) goto L_10005a87;
  /* 10005a75 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005a77 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10005a79 push 0x10016158 */
  push32((uint32_t)(0x10016158u));
  /* 10005a7e call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005a84u);
  /* 10005a84 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10005a87:;
  /* 10005a87 ret  */
  ESPCHK(0x100052b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a90 @ 0x10005a90 (305 bytes, 86 insns) */
void f_10005a90(void) {
  FTRACE(0x10005a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10005a90 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005a92 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10005a94 push 0x10016368 */
  push32((uint32_t)(0x10016368u));
  /* 10005a99 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005a9fu);
  /* 10005a9f push 0x10015f10 */
  push32((uint32_t)(0x10015f10u));
  /* 10005aa4 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10005aaau);
  /* 10005aaa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005aad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10005aaf je 0x10005ac3 */
  if (C.zf) goto L_10005ac3;
  /* 10005ab1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005ab3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005ab5 push 0x10013650 */
  push32((uint32_t)(0x10013650u));
  /* 10005aba call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005ac0u);
  /* 10005ac0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10005ac3:;
  /* 10005ac3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005ac5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005ac7 push 0x10016068 */
  push32((uint32_t)(0x10016068u));
  /* 10005acc call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005ad2u);
  /* 10005ad2 push 0x10013678 */
  push32((uint32_t)(0x10013678u));
  /* 10005ad7 call 0x10005270 */
  push32(0x10005adcu); f_10005270();
  /* 10005adc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005adf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10005ae1 jne 0x10005af1 */
  if (!C.zf) goto L_10005af1;
  /* 10005ae3 mov eax, dword ptr [0x10015f48] */
  EAX = (r32((uint32_t)(0x10015f48)));
  /* 10005ae8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10005aea je 0x10005b03 */
  if (C.zf) goto L_10005b03;
  /* 10005aec cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005aef je 0x10005b03 */
  if (C.zf) goto L_10005b03;
L_10005af1:;
  /* 10005af1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005af3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10005af5 push 0x10016260 */
  push32((uint32_t)(0x10016260u));
  /* 10005afa call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005b00u);
  /* 10005b00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10005b03:;
  /* 10005b03 push 0x10015fd8 */
  push32((uint32_t)(0x10015fd8u));
  /* 10005b08 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10005b0eu);
  /* 10005b0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005b11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10005b13 je 0x10005b27 */
  if (C.zf) goto L_10005b27;
  /* 10005b15 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005b17 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005b19 push 0x10016030 */
  push32((uint32_t)(0x10016030u));
  /* 10005b1e call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005b24u);
  /* 10005b24 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10005b27:;
  /* 10005b27 push 0x10016140 */
  push32((uint32_t)(0x10016140u));
  /* 10005b2c call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x10005b32u);
  /* 10005b32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005b35 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10005b37 je 0x10005b4b */
  if (C.zf) goto L_10005b4b;
  /* 10005b39 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005b3b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005b3d push 0x10016020 */
  push32((uint32_t)(0x10016020u));
  /* 10005b42 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005b48u);
  /* 10005b48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10005b4b:;
  /* 10005b4b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005b4d push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10005b4f push 0x10016140 */
  push32((uint32_t)(0x10016140u));
  /* 10005b54 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005b5au);
  /* 10005b5a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005b5c push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10005b5e push 0x100160f0 */
  push32((uint32_t)(0x100160f0u));
  /* 10005b63 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005b69u);
  /* 10005b69 push 0x100160c8 */
  push32((uint32_t)(0x100160c8u));
  /* 10005b6e call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10005b74u);
  /* 10005b74 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005b77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10005b79 je 0x10005b8d */
  if (C.zf) goto L_10005b8d;
  /* 10005b7b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005b7d push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10005b7f push 0x100161a8 */
  push32((uint32_t)(0x100161a8u));
  /* 10005b84 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005b8au);
  /* 10005b8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10005b8d:;
  /* 10005b8d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005b8f push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10005b91 push 0x10016010 */
  push32((uint32_t)(0x10016010u));
  /* 10005b96 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005b9cu);
  /* 10005b9c push 0x10016248 */
  push32((uint32_t)(0x10016248u));
  /* 10005ba1 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10005ba7u);
  /* 10005ba7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005baa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10005bac je 0x10005bc0 */
  if (C.zf) goto L_10005bc0;
  /* 10005bae push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005bb0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005bb2 push 0x100138d0 */
  push32((uint32_t)(0x100138d0u));
  /* 10005bb7 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10005bbdu);
  /* 10005bbd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10005bc0:;
  /* 10005bc0 ret  */
  ESPCHK(0x10005a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bd0 @ 0x10005bd0 (536 bytes, 150 insns) */
void f_10005bd0(void) {
  FTRACE(0x10005bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10005bd0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005bd2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005bd4 push 3 */
  push32((uint32_t)(0x3u));
  /* 10005bd6 push 0x10016248 */
  push32((uint32_t)(0x10016248u));
  /* 10005bdb call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10005be1u);
  /* 10005be1 push 0x10015fd8 */
  push32((uint32_t)(0x10015fd8u));
  /* 10005be6 call dword ptr [0x10016534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016534))), 0x10005becu);
  /* 10005bec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005bef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10005bf1 je 0x10005c18 */
  if (C.zf) goto L_10005c18;
  /* 10005bf3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005bf5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005bf7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10005bf9 push 0x10015fc8 */
  push32((uint32_t)(0x10015fc8u));
  /* 10005bfe call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10005c04u);
  /* 10005c04 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005c06 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005c08 push 4 */
  push32((uint32_t)(0x4u));
  /* 10005c0a push 0x10015fc0 */
  push32((uint32_t)(0x10015fc0u));
  /* 10005c0f call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10005c15u);
  /* 10005c15 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10005c18:;
  /* 10005c18 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005c1a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005c1c push 1 */
  push32((uint32_t)(0x1u));
  /* 10005c1e push 0x10015fc8 */
  push32((uint32_t)(0x10015fc8u));
  /* 10005c23 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10005c29u);
  /* 10005c29 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005c2b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005c2d push 1 */
  push32((uint32_t)(0x1u));
  /* 10005c2f push 0x10015fa8 */
  push32((uint32_t)(0x10015fa8u));
  /* 10005c34 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10005c3au);
  /* 10005c3a mov eax, dword ptr [0x100162a4] */
  EAX = (r32((uint32_t)(0x100162a4)));
  /* 10005c3f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005c42 mov ecx, dword ptr [eax*4 + 0x10015f88] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10015f88)));
  /* 10005c49 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10005c4b jne 0x10005c68 */
  if (!C.zf) goto L_10005c68;
  /* 10005c4d call 0x10005220 */
  push32(0x10005c52u); f_10005220();
  /* 10005c52 push 0x10013868 */
  push32((uint32_t)(0x10013868u));
  /* 10005c57 call dword ptr [0x10016534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016534))), 0x10005c5du);
  /* 10005c5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005c60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10005c62 je 0x10005de7 */
  if (C.zf) goto L_10005de7;
L_10005c68:;
  /* 10005c68 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005c6a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005c6c push 1 */
  push32((uint32_t)(0x1u));
  /* 10005c6e push 0x100161d8 */
  push32((uint32_t)(0x100161d8u));
  /* 10005c73 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10005c79u);
  /* 10005c79 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005c7b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005c7d push 2 */
  push32((uint32_t)(0x2u));
  /* 10005c7f push 0x10015fa8 */
  push32((uint32_t)(0x10015fa8u));
  /* 10005c84 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10005c8au);
  /* 10005c8a push 0x10015fa8 */
  push32((uint32_t)(0x10015fa8u));
  /* 10005c8f call dword ptr [0x10016534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016534))), 0x10005c95u);
  /* 10005c95 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005c98 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005c9b jge 0x10005caa */
  if ((C.sf==C.of)) goto L_10005caa;
  /* 10005c9d call 0x10002670 */
  push32(0x10005ca2u); f_10002670();
  /* 10005ca2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10005ca4 jne 0x10005de7 */
  if (!C.zf) goto L_10005de7;
L_10005caa:;
  /* 10005caa push esi */
  push32((uint32_t)(ESI));
  /* 10005cab push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005cad push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005caf push 2 */
  push32((uint32_t)(0x2u));
  /* 10005cb1 push 0x10016240 */
  push32((uint32_t)(0x10016240u));
  /* 10005cb6 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10005cbcu);
  /* 10005cbc push 0x10016240 */
  push32((uint32_t)(0x10016240u));
  /* 10005cc1 call dword ptr [0x10016534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016534))), 0x10005cc7u);
  /* 10005cc7 push 0x10016240 */
  push32((uint32_t)(0x10016240u));
  /* 10005ccc mov esi, eax */
  ESI = (EAX);
  /* 10005cce call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10005cd4u);
  /* 10005cd4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005cd7 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10005cd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10005cdb pop esi */
  ESI = (pop32());
  /* 10005cdc jg 0x10005de7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10005de7;
  /* 10005ce2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005ce4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005ce6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10005ce8 push 0x10015f10 */
  push32((uint32_t)(0x10015f10u));
  /* 10005ced call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10005cf3u);
  /* 10005cf3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005cf6 call 0x10002780 */
  push32(0x10005cfbu); f_10002780();
  /* 10005cfb cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005cfe jge 0x10005d27 */
  if ((C.sf==C.of)) goto L_10005d27;
  /* 10005d00 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005d02 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005d04 push 1 */
  push32((uint32_t)(0x1u));
  /* 10005d06 push 0x10015fd8 */
  push32((uint32_t)(0x10015fd8u));
  /* 10005d0b call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10005d11u);
  /* 10005d11 push 0x10015fd8 */
  push32((uint32_t)(0x10015fd8u));
  /* 10005d16 call dword ptr [0x10016534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016534))), 0x10005d1cu);
  /* 10005d1c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005d1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10005d21 je 0x10005de7 */
  if (C.zf) goto L_10005de7;
L_10005d27:;
  /* 10005d27 call 0x10005220 */
  push32(0x10005d2cu); f_10005220();
  /* 10005d2c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005d2e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005d30 push 4 */
  push32((uint32_t)(0x4u));
  /* 10005d32 push 0x10015fa8 */
  push32((uint32_t)(0x10015fa8u));
  /* 10005d37 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10005d3du);
  /* 10005d3d push 0x10015fa8 */
  push32((uint32_t)(0x10015fa8u));
  /* 10005d42 call dword ptr [0x10016534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016534))), 0x10005d48u);
  /* 10005d48 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005d4b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005d4e jl 0x10005de7 */
  if ((C.sf!=C.of)) goto L_10005de7;
  /* 10005d54 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005d56 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005d58 push 3 */
  push32((uint32_t)(0x3u));
  /* 10005d5a push 0x100160c8 */
  push32((uint32_t)(0x100160c8u));
  /* 10005d5f call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10005d65u);
  /* 10005d65 push 0x10016248 */
  push32((uint32_t)(0x10016248u));
  /* 10005d6a call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10005d70u);
  /* 10005d70 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005d73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10005d75 je 0x10005d8b */
  if (C.zf) goto L_10005d8b;
  /* 10005d77 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005d79 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005d7b push 4 */
  push32((uint32_t)(0x4u));
  /* 10005d7d push 0x100160c8 */
  push32((uint32_t)(0x100160c8u));
  /* 10005d82 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10005d88u);
  /* 10005d88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10005d8b:;
  /* 10005d8b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005d8d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005d8f push 1 */
  push32((uint32_t)(0x1u));
  /* 10005d91 push 0x10013608 */
  push32((uint32_t)(0x10013608u));
  /* 10005d96 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10005d9cu);
  /* 10005d9c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005d9e push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10005da0 push 3 */
  push32((uint32_t)(0x3u));
  /* 10005da2 push 0x10013608 */
  push32((uint32_t)(0x10013608u));
  /* 10005da7 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10005dadu);
  /* 10005dad push 0x100138d0 */
  push32((uint32_t)(0x100138d0u));
  /* 10005db2 call dword ptr [0x1001653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001653c))), 0x10005db8u);
  /* 10005db8 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005dbb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10005dbd je 0x10005dd3 */
  if (C.zf) goto L_10005dd3;
  /* 10005dbf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005dc1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005dc3 push 5 */
  push32((uint32_t)(0x5u));
  /* 10005dc5 push 0x100160c8 */
  push32((uint32_t)(0x100160c8u));
  /* 10005dca call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10005dd0u);
  /* 10005dd0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10005dd3:;
  /* 10005dd3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005dd5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005dd7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10005dd9 push 0x100160e8 */
  push32((uint32_t)(0x100160e8u));
  /* 10005dde call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10005de4u);
  /* 10005de4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10005de7:;
  /* 10005de7 ret  */
  ESPCHK(0x10005bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005df0 @ 0x10005df0 (472 bytes, 137 insns) */
void f_10005df0(void) {
  FTRACE(0x10005df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10005df0 push ecx */
  push32((uint32_t)(ECX));
  /* 10005df1 push 0x10016268 */
  push32((uint32_t)(0x10016268u));
  /* 10005df6 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10005dfcu);
  /* 10005dfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005dff cmp eax, 0x28 */
  { uint32_t _a=(EAX),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005e02 jge 0x10005e17 */
  if ((C.sf==C.of)) goto L_10005e17;
  /* 10005e04 mov eax, dword ptr [0x100162a4] */
  EAX = (r32((uint32_t)(0x100162a4)));
  /* 10005e09 push 0 */
  push32((uint32_t)(0x0u));
  /* 10005e0b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10005e0e push eax */
  push32((uint32_t)(EAX));
  /* 10005e0f call 0x100026d0 */
  push32(0x10005e14u); f_100026d0();
  /* 10005e14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10005e17:;
  /* 10005e17 push 0x10016268 */
  push32((uint32_t)(0x10016268u));
  /* 10005e1c call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10005e22u);
  /* 10005e22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005e25 cmp eax, 0x9c */
  { uint32_t _a=(EAX),_b=(0x9cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005e2a jg 0x10005e3e */
  if ((!C.zf&&C.sf==C.of)) goto L_10005e3e;
  /* 10005e2c push 0x100160c8 */
  push32((uint32_t)(0x100160c8u));
  /* 10005e31 call dword ptr [0x10016534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016534))), 0x10005e37u);
  /* 10005e37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005e3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10005e3c je 0x10005e52 */
  if (C.zf) goto L_10005e52;
L_10005e3e:;
  /* 10005e3e mov ecx, dword ptr [0x100162a4] */
  ECX = (r32((uint32_t)(0x100162a4)));
  /* 10005e44 push 1 */
  push32((uint32_t)(0x1u));
  /* 10005e46 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10005e49 push ecx */
  push32((uint32_t)(ECX));
  /* 10005e4a call 0x100026d0 */
  push32(0x10005e4fu); f_100026d0();
  /* 10005e4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10005e52:;
  /* 10005e52 push esi */
  push32((uint32_t)(ESI));
  /* 10005e53 push edi */
  push32((uint32_t)(EDI));
  /* 10005e54 mov edi, 2 */
  EDI = (0x2u);
L_10005e59:;
  /* 10005e59 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005e5b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10005e5d push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10005e62 push 0x10016180 */
  push32((uint32_t)(0x10016180u));
  /* 10005e67 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10005e6du);
  /* 10005e6d push 0x10013678 */
  push32((uint32_t)(0x10013678u));
  /* 10005e72 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10005e78u);
  /* 10005e78 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005e7b cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005e80 jge 0x10005e9b */
  if ((C.sf==C.of)) goto L_10005e9b;
  /* 10005e82 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005e84 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10005e86 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10005e8b push 0x10013678 */
  push32((uint32_t)(0x10013678u));
  /* 10005e90 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10005e96u);
  /* 10005e96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005e99 jmp 0x10005ec6 */
  goto L_10005ec6;
L_10005e9b:;
  /* 10005e9b push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10005e9d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10005e9f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10005ea4 push 0x10013678 */
  push32((uint32_t)(0x10013678u));
  /* 10005ea9 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10005eafu);
  /* 10005eaf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005eb1 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10005eb3 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10005eb8 push 0x100160d0 */
  push32((uint32_t)(0x100160d0u));
  /* 10005ebd call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10005ec3u);
  /* 10005ec3 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10005ec6:;
  /* 10005ec6 mov edx, dword ptr [0x100162a4] */
  EDX = (r32((uint32_t)(0x100162a4)));
  /* 10005ecc add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10005ecf push edx */
  push32((uint32_t)(EDX));
  /* 10005ed0 call 0x100026f0 */
  push32(0x10005ed5u); f_100026f0();
  /* 10005ed5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005ed8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10005eda jne 0x10005efd */
  if (!C.zf) goto L_10005efd;
  /* 10005edc call 0x10002780 */
  push32(0x10005ee1u); f_10002780();
  /* 10005ee1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005ee4 jge 0x10005efd */
  if ((C.sf==C.of)) goto L_10005efd;
  /* 10005ee6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005ee8 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10005eea push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10005eef push 0x10016268 */
  push32((uint32_t)(0x10016268u));
  /* 10005ef4 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10005efau);
  /* 10005efa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10005efd:;
  /* 10005efd mov al, byte ptr [0x100162a4] */
  AL = (r8((uint32_t)(0x100162a4)));
  /* 10005f02 mov byte ptr [esp + 8], al */
  w8((uint32_t)(ESP + 0x8), (AL));
  /* 10005f06 mov eax, dword ptr [0x100164a8] */
  EAX = (r32((uint32_t)(0x100164a8)));
  /* 10005f0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10005f0d je 0x10005f25 */
  if (C.zf) goto L_10005f25;
  /* 10005f0f mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10005f13 push 1 */
  push32((uint32_t)(0x1u));
  /* 10005f15 push 0x10013878 */
  push32((uint32_t)(0x10013878u));
  /* 10005f1a push ecx */
  push32((uint32_t)(ECX));
  /* 10005f1b call eax */
  call_ind((uint32_t)(EAX), 0x10005f1du);
  /* 10005f1d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005f20 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005f23 jge 0x10005f65 */
  if ((C.sf==C.of)) goto L_10005f65;
L_10005f25:;
  /* 10005f25 push 5 */
  push32((uint32_t)(0x5u));
  /* 10005f27 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10005f2du);
  /* 10005f2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005f30 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005f35 jle 0x10005f65 */
  if ((C.zf||C.sf!=C.of)) goto L_10005f65;
  /* 10005f37 push 4 */
  push32((uint32_t)(0x4u));
  /* 10005f39 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10005f3fu);
  /* 10005f3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005f42 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005f47 jle 0x10005f65 */
  if ((C.zf||C.sf!=C.of)) goto L_10005f65;
  /* 10005f49 mov esi, 0x1e */
  ESI = (0x1eu);
L_10005f4e:;
  /* 10005f4e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005f50 push 0xa */
  push32((uint32_t)(0xau));
  /* 10005f52 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10005f54 push 0x10013878 */
  push32((uint32_t)(0x10013878u));
  /* 10005f59 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10005f5fu);
  /* 10005f5f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005f62 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10005f63 jne 0x10005f4e */
  if (!C.zf) goto L_10005f4e;
L_10005f65:;
  /* 10005f65 push 0x10016010 */
  push32((uint32_t)(0x10016010u));
  /* 10005f6a call dword ptr [0x1001653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001653c))), 0x10005f70u);
  /* 10005f70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005f73 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10005f75 je 0x10005f7b */
  if (C.zf) goto L_10005f7b;
  /* 10005f77 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10005f79 jmp 0x10005f7d */
  goto L_10005f7d;
L_10005f7b:;
  /* 10005f7b push 0x64 */
  push32((uint32_t)(0x64u));
L_10005f7d:;
  /* 10005f7d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10005f7f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10005f84 push 0x100163a0 */
  push32((uint32_t)(0x100163a0u));
  /* 10005f89 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10005f8fu);
  /* 10005f8f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005f92 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005f94 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10005f96 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10005f9b push 0x10013670 */
  push32((uint32_t)(0x10013670u));
  /* 10005fa0 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10005fa6u);
  /* 10005fa6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10005fa8 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10005faa push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10005faf push 0x10015f70 */
  push32((uint32_t)(0x10015f70u));
  /* 10005fb4 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10005fbau);
  /* 10005fba add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005fbd dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10005fbe jne 0x10005e59 */
  if (!C.zf) goto L_10005e59;
  /* 10005fc4 pop edi */
  EDI = (pop32());
  /* 10005fc5 pop esi */
  ESI = (pop32());
  /* 10005fc6 pop ecx */
  ECX = (pop32());
  /* 10005fc7 ret  */
  ESPCHK(0x10005df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fd0 @ 0x10005fd0 (789 bytes, 244 insns) */
void f_10005fd0(void) {
  FTRACE(0x10005fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10005fd0 push ecx */
  push32((uint32_t)(ECX));
  /* 10005fd1 push 0x10013868 */
  push32((uint32_t)(0x10013868u));
  /* 10005fd6 call dword ptr [0x10016534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016534))), 0x10005fdcu);
  /* 10005fdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005fdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10005fe1 je 0x100062e3 */
  if (C.zf) goto L_100062e3;
  /* 10005fe7 call 0x10002670 */
  push32(0x10005fecu); f_10002670();
  /* 10005fec cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005fef jne 0x10006036 */
  if (!C.zf) goto L_10006036;
  /* 10005ff1 mov eax, dword ptr [0x100162a4] */
  EAX = (r32((uint32_t)(0x100162a4)));
  /* 10005ff6 push eax */
  push32((uint32_t)(EAX));
  /* 10005ff7 call 0x100026f0 */
  push32(0x10005ffcu); f_100026f0();
  /* 10005ffc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005fff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10006001 jne 0x100062e3 */
  if (!C.zf) goto L_100062e3;
  /* 10006007 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 1000600c push 3 */
  push32((uint32_t)(0x3u));
  /* 1000600e push 2 */
  push32((uint32_t)(0x2u));
  /* 10006010 call 0x10002610 */
  push32(0x10006015u); f_10002610();
  /* 10006015 push 0x13880 */
  push32((uint32_t)(0x13880u));
  /* 1000601a push 3 */
  push32((uint32_t)(0x3u));
  /* 1000601c push 0 */
  push32((uint32_t)(0x0u));
  /* 1000601e call 0x10002610 */
  push32(0x10006023u); f_10002610();
  /* 10006023 mov ecx, dword ptr [0x100162a4] */
  ECX = (r32((uint32_t)(0x100162a4)));
  /* 10006029 push 1 */
  push32((uint32_t)(0x1u));
  /* 1000602b push ecx */
  push32((uint32_t)(ECX));
  /* 1000602c call 0x100026d0 */
  push32(0x10006031u); f_100026d0();
  /* 10006031 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006034 pop ecx */
  ECX = (pop32());
  /* 10006035 ret  */
  ESPCHK(0x10005fd0u, _esp0);
  ESP += 4; return;
L_10006036:;
  /* 10006036 push 0x10013868 */
  push32((uint32_t)(0x10013868u));
  /* 1000603b call dword ptr [0x10016534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016534))), 0x10006041u);
  /* 10006041 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006044 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10006046 je 0x100062e3 */
  if (C.zf) goto L_100062e3;
  /* 1000604c mov edx, dword ptr [0x100162a4] */
  EDX = (r32((uint32_t)(0x100162a4)));
  /* 10006052 push edx */
  push32((uint32_t)(EDX));
  /* 10006053 call 0x100026f0 */
  push32(0x10006058u); f_100026f0();
  /* 10006058 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000605b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000605d jne 0x100060d2 */
  if (!C.zf) goto L_100060d2;
  /* 1000605f push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10006064 push 3 */
  push32((uint32_t)(0x3u));
  /* 10006066 push 5 */
  push32((uint32_t)(0x5u));
  /* 10006068 call 0x10002610 */
  push32(0x1000606du); f_10002610();
  /* 1000606d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006070 call 0x10002670 */
  push32(0x10006075u); f_10002670();
  /* 10006075 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006078 jne 0x10006099 */
  if (!C.zf) goto L_10006099;
  /* 1000607a push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 1000607f push 0 */
  push32((uint32_t)(0x0u));
  /* 10006081 push 4 */
  push32((uint32_t)(0x4u));
  /* 10006083 call 0x10002610 */
  push32(0x10006088u); f_10002610();
  /* 10006088 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 1000608d push 2 */
  push32((uint32_t)(0x2u));
  /* 1000608f push 4 */
  push32((uint32_t)(0x4u));
  /* 10006091 call 0x10002610 */
  push32(0x10006096u); f_10002610();
  /* 10006096 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10006099:;
  /* 10006099 call 0x10002670 */
  push32(0x1000609eu); f_10002670();
  /* 1000609e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100060a1 jne 0x100060c2 */
  if (!C.zf) goto L_100060c2;
  /* 100060a3 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 100060a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 100060aa push 4 */
  push32((uint32_t)(0x4u));
  /* 100060ac call 0x10002610 */
  push32(0x100060b1u); f_10002610();
  /* 100060b1 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 100060b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 100060b8 push 4 */
  push32((uint32_t)(0x4u));
  /* 100060ba call 0x10002610 */
  push32(0x100060bfu); f_10002610();
  /* 100060bf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100060c2:;
  /* 100060c2 mov eax, dword ptr [0x100162a4] */
  EAX = (r32((uint32_t)(0x100162a4)));
  /* 100060c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 100060c9 push eax */
  push32((uint32_t)(EAX));
  /* 100060ca call 0x100026d0 */
  push32(0x100060cfu); f_100026d0();
  /* 100060cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100060d2:;
  /* 100060d2 push 0x10016260 */
  push32((uint32_t)(0x10016260u));
  /* 100060d7 call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x100060ddu);
  /* 100060dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100060e0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100060e2 je 0x10006154 */
  if (C.zf) goto L_10006154;
  /* 100060e4 push 0x10016140 */
  push32((uint32_t)(0x10016140u));
  /* 100060e9 call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x100060efu);
  /* 100060ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100060f2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100060f4 jne 0x10006154 */
  if (!C.zf) goto L_10006154;
  /* 100060f6 push 0x10015f10 */
  push32((uint32_t)(0x10015f10u));
  /* 100060fb call dword ptr [0x10016534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016534))), 0x10006101u);
  /* 10006101 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006104 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10006106 je 0x10006154 */
  if (C.zf) goto L_10006154;
  /* 10006108 mov eax, dword ptr [0x100164ac] */
  EAX = (r32((uint32_t)(0x100164ac)));
  /* 1000610d mov cl, byte ptr [0x100162a4] */
  CL = (r8((uint32_t)(0x100162a4)));
  /* 10006113 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10006115 mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 10006119 je 0x1000612e */
  if (C.zf) goto L_1000612e;
  /* 1000611b mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 1000611f push 5 */
  push32((uint32_t)(0x5u));
  /* 10006121 push 0x10016140 */
  push32((uint32_t)(0x10016140u));
  /* 10006126 push edx */
  push32((uint32_t)(EDX));
  /* 10006127 call eax */
  call_ind((uint32_t)(EAX), 0x10006129u);
  /* 10006129 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000612c jmp 0x10006130 */
  goto L_10006130;
L_1000612e:;
  /* 1000612e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10006130:;
  /* 10006130 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10006133 push 0 */
  push32((uint32_t)(0x0u));
  /* 10006135 lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 10006138 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 1000613d imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1000613f sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10006142 mov eax, edx */
  EAX = (EDX);
  /* 10006144 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 10006147 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10006149 push edx */
  push32((uint32_t)(EDX));
  /* 1000614a push 5 */
  push32((uint32_t)(0x5u));
  /* 1000614c call 0x10002f90 */
  push32(0x10006151u); f_10002f90();
  /* 10006151 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10006154:;
  /* 10006154 push 0x10016140 */
  push32((uint32_t)(0x10016140u));
  /* 10006159 call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x1000615fu);
  /* 1000615f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006162 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10006164 je 0x10006279 */
  if (C.zf) goto L_10006279;
  /* 1000616a push 0x10016010 */
  push32((uint32_t)(0x10016010u));
  /* 1000616f call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x10006175u);
  /* 10006175 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006178 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1000617a jne 0x10006279 */
  if (!C.zf) goto L_10006279;
  /* 10006180 mov eax, dword ptr [0x100164ac] */
  EAX = (r32((uint32_t)(0x100164ac)));
  /* 10006185 mov cl, byte ptr [0x100162a4] */
  CL = (r8((uint32_t)(0x100162a4)));
  /* 1000618b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000618d mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 10006191 je 0x100061a6 */
  if (C.zf) goto L_100061a6;
  /* 10006193 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 10006197 push 3 */
  push32((uint32_t)(0x3u));
  /* 10006199 push 0x10016010 */
  push32((uint32_t)(0x10016010u));
  /* 1000619e push edx */
  push32((uint32_t)(EDX));
  /* 1000619f call eax */
  call_ind((uint32_t)(EAX), 0x100061a1u);
  /* 100061a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100061a4 jmp 0x100061a8 */
  goto L_100061a8;
L_100061a6:;
  /* 100061a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100061a8:;
  /* 100061a8 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 100061ab push 2 */
  push32((uint32_t)(0x2u));
  /* 100061ad lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 100061b0 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 100061b5 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100061b7 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 100061ba mov eax, edx */
  EAX = (EDX);
  /* 100061bc shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100061bf add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100061c1 push edx */
  push32((uint32_t)(EDX));
  /* 100061c2 push 3 */
  push32((uint32_t)(0x3u));
  /* 100061c4 call 0x10002f90 */
  push32(0x100061c9u); f_10002f90();
  /* 100061c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100061cc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100061ce je 0x10006279 */
  if (C.zf) goto L_10006279;
  /* 100061d4 mov eax, dword ptr [0x100164ac] */
  EAX = (r32((uint32_t)(0x100164ac)));
  /* 100061d9 mov cl, byte ptr [0x100162a4] */
  CL = (r8((uint32_t)(0x100162a4)));
  /* 100061df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100061e1 mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 100061e5 je 0x100061fa */
  if (C.zf) goto L_100061fa;
  /* 100061e7 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 100061eb push 1 */
  push32((uint32_t)(0x1u));
  /* 100061ed push 0x10016010 */
  push32((uint32_t)(0x10016010u));
  /* 100061f2 push edx */
  push32((uint32_t)(EDX));
  /* 100061f3 call eax */
  call_ind((uint32_t)(EAX), 0x100061f5u);
  /* 100061f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100061f8 jmp 0x100061fc */
  goto L_100061fc;
L_100061fa:;
  /* 100061fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100061fc:;
  /* 100061fc lea ecx, [eax*8] */
  ECX = ((uint32_t)(EAX*8));
  /* 10006203 push 2 */
  push32((uint32_t)(0x2u));
  /* 10006205 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10006207 lea eax, [ecx + ecx*2] */
  EAX = ((uint32_t)(ECX + ECX*2));
  /* 1000620a lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1000620d mov eax, 0x51eb851f */
  EAX = (0x51eb851fu);
  /* 10006212 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10006214 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10006217 mov eax, edx */
  EAX = (EDX);
  /* 10006219 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 1000621c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000621e push edx */
  push32((uint32_t)(EDX));
  /* 1000621f push 1 */
  push32((uint32_t)(0x1u));
  /* 10006221 call 0x10002f90 */
  push32(0x10006226u); f_10002f90();
  /* 10006226 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006229 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1000622b je 0x10006279 */
  if (C.zf) goto L_10006279;
  /* 1000622d mov eax, dword ptr [0x100164ac] */
  EAX = (r32((uint32_t)(0x100164ac)));
  /* 10006232 mov cl, byte ptr [0x100162a4] */
  CL = (r8((uint32_t)(0x100162a4)));
  /* 10006238 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000623a mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 1000623e je 0x10006253 */
  if (C.zf) goto L_10006253;
  /* 10006240 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 10006244 push 4 */
  push32((uint32_t)(0x4u));
  /* 10006246 push 0x10016010 */
  push32((uint32_t)(0x10016010u));
  /* 1000624b push edx */
  push32((uint32_t)(EDX));
  /* 1000624c call eax */
  call_ind((uint32_t)(EAX), 0x1000624eu);
  /* 1000624e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006251 jmp 0x10006255 */
  goto L_10006255;
L_10006253:;
  /* 10006253 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10006255:;
  /* 10006255 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10006258 push 2 */
  push32((uint32_t)(0x2u));
  /* 1000625a lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 1000625d mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10006262 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10006264 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10006267 mov eax, edx */
  EAX = (EDX);
  /* 10006269 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 1000626c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000626e push edx */
  push32((uint32_t)(EDX));
  /* 1000626f push 4 */
  push32((uint32_t)(0x4u));
  /* 10006271 call 0x10002f90 */
  push32(0x10006276u); f_10002f90();
  /* 10006276 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10006279:;
  /* 10006279 push 2 */
  push32((uint32_t)(0x2u));
  /* 1000627b call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10006281u);
  /* 10006281 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006284 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006289 jle 0x100062ae */
  if ((C.zf||C.sf!=C.of)) goto L_100062ae;
  /* 1000628b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10006290 push 2 */
  push32((uint32_t)(0x2u));
  /* 10006292 push 0 */
  push32((uint32_t)(0x0u));
  /* 10006294 call 0x10002610 */
  push32(0x10006299u); f_10002610();
  /* 10006299 push 2 */
  push32((uint32_t)(0x2u));
  /* 1000629b call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x100062a1u);
  /* 100062a1 push eax */
  push32((uint32_t)(EAX));
  /* 100062a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 100062a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 100062a6 call 0x10002610 */
  push32(0x100062abu); f_10002610();
  /* 100062ab add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100062ae:;
  /* 100062ae push 0 */
  push32((uint32_t)(0x0u));
  /* 100062b0 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x100062b6u);
  /* 100062b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100062b9 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100062be jle 0x100062e3 */
  if ((C.zf||C.sf!=C.of)) goto L_100062e3;
  /* 100062c0 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 100062c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 100062c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 100062c9 call 0x10002610 */
  push32(0x100062ceu); f_10002610();
  /* 100062ce push 0 */
  push32((uint32_t)(0x0u));
  /* 100062d0 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x100062d6u);
  /* 100062d6 push eax */
  push32((uint32_t)(EAX));
  /* 100062d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 100062d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 100062db call 0x10002610 */
  push32(0x100062e0u); f_10002610();
  /* 100062e0 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100062e3:;
  /* 100062e3 pop ecx */
  ECX = (pop32());
  /* 100062e4 ret  */
  ESPCHK(0x10005fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_100062f0 @ 0x100062f0 (818 bytes, 268 insns) */
void f_100062f0(void) {
  FTRACE(0x100062f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100062f0 push ecx */
  push32((uint32_t)(ECX));
  /* 100062f1 push 4 */
  push32((uint32_t)(0x4u));
  /* 100062f3 push 4 */
  push32((uint32_t)(0x4u));
  /* 100062f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 100062f7 call dword ptr [0x10016504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016504))), 0x100062fdu);
  /* 100062fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006300 call dword ptr [0x10016560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016560))), 0x10006306u);
  /* 10006306 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10006308 je 0x10006620 */
  if (C.zf) goto L_10006620;
  /* 1000630e push 4 */
  push32((uint32_t)(0x4u));
  /* 10006310 push 4 */
  push32((uint32_t)(0x4u));
  /* 10006312 push 9 */
  push32((uint32_t)(0x9u));
  /* 10006314 call dword ptr [0x10016504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016504))), 0x1000631au);
  /* 1000631a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000631d call 0x10002670 */
  push32(0x10006322u); f_10002670();
  /* 10006322 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006325 je 0x10006620 */
  if (C.zf) goto L_10006620;
  /* 1000632b call dword ptr [0x10016560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016560))), 0x10006331u);
  /* 10006331 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10006333 je 0x10006611 */
  if (C.zf) goto L_10006611;
  /* 10006339 push esi */
  push32((uint32_t)(ESI));
  /* 1000633a push edi */
  push32((uint32_t)(EDI));
  /* 1000633b push 4 */
  push32((uint32_t)(0x4u));
  /* 1000633d push 4 */
  push32((uint32_t)(0x4u));
  /* 1000633f push 9 */
  push32((uint32_t)(0x9u));
  /* 10006341 call dword ptr [0x10016504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016504))), 0x10006347u);
  /* 10006347 push 0x100160f0 */
  push32((uint32_t)(0x100160f0u));
  /* 1000634c call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x10006352u);
  /* 10006352 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006355 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10006357 jne 0x100063bf */
  if (!C.zf) goto L_100063bf;
  /* 10006359 mov al, byte ptr [0x100162a4] */
  AL = (r8((uint32_t)(0x100162a4)));
  /* 1000635e mov byte ptr [esp + 8], al */
  w8((uint32_t)(ESP + 0x8), (AL));
  /* 10006362 mov eax, dword ptr [0x100164ac] */
  EAX = (r32((uint32_t)(0x100164ac)));
  /* 10006367 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10006369 je 0x10006380 */
  if (C.zf) goto L_10006380;
  /* 1000636b mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1000636f push 3 */
  push32((uint32_t)(0x3u));
  /* 10006371 push 0x100160f0 */
  push32((uint32_t)(0x100160f0u));
  /* 10006376 push ecx */
  push32((uint32_t)(ECX));
  /* 10006377 call eax */
  call_ind((uint32_t)(EAX), 0x10006379u);
  /* 10006379 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000637c mov esi, eax */
  ESI = (EAX);
  /* 1000637e jmp 0x10006382 */
  goto L_10006382;
L_10006380:;
  /* 10006380 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10006382:;
  /* 10006382 push 3 */
  push32((uint32_t)(0x3u));
  /* 10006384 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x1000638au);
  /* 1000638a lea edx, [esi + esi*4] */
  EDX = ((uint32_t)(ESI + ESI*4));
  /* 1000638d mov edi, eax */
  EDI = (EAX);
  /* 1000638f mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10006394 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006397 lea ecx, [esi + edx*2] */
  ECX = ((uint32_t)(ESI + EDX*2));
  /* 1000639a imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1000639c sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 1000639f mov eax, edx */
  EAX = (EDX);
  /* 100063a1 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100063a4 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100063a6 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100063a8 jge 0x100063b0 */
  if ((C.sf==C.of)) goto L_100063b0;
  /* 100063aa push 4 */
  push32((uint32_t)(0x4u));
  /* 100063ac push 4 */
  push32((uint32_t)(0x4u));
  /* 100063ae jmp 0x100063b4 */
  goto L_100063b4;
L_100063b0:;
  /* 100063b0 push 6 */
  push32((uint32_t)(0x6u));
  /* 100063b2 push 6 */
  push32((uint32_t)(0x6u));
L_100063b4:;
  /* 100063b4 push 9 */
  push32((uint32_t)(0x9u));
  /* 100063b6 call dword ptr [0x10016504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016504))), 0x100063bcu);
  /* 100063bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100063bf:;
  /* 100063bf push 0x10016010 */
  push32((uint32_t)(0x10016010u));
  /* 100063c4 call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x100063cau);
  /* 100063ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100063cd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100063cf jne 0x10006438 */
  if (!C.zf) goto L_10006438;
  /* 100063d1 mov eax, dword ptr [0x100164ac] */
  EAX = (r32((uint32_t)(0x100164ac)));
  /* 100063d6 mov cl, byte ptr [0x100162a4] */
  CL = (r8((uint32_t)(0x100162a4)));
  /* 100063dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100063de mov byte ptr [esp + 8], cl */
  w8((uint32_t)(ESP + 0x8), (CL));
  /* 100063e2 je 0x100063f9 */
  if (C.zf) goto L_100063f9;
  /* 100063e4 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 100063e8 push 3 */
  push32((uint32_t)(0x3u));
  /* 100063ea push 0x10016010 */
  push32((uint32_t)(0x10016010u));
  /* 100063ef push edx */
  push32((uint32_t)(EDX));
  /* 100063f0 call eax */
  call_ind((uint32_t)(EAX), 0x100063f2u);
  /* 100063f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100063f5 mov esi, eax */
  ESI = (EAX);
  /* 100063f7 jmp 0x100063fb */
  goto L_100063fb;
L_100063f9:;
  /* 100063f9 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_100063fb:;
  /* 100063fb push 3 */
  push32((uint32_t)(0x3u));
  /* 100063fd call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10006403u);
  /* 10006403 mov edi, eax */
  EDI = (EAX);
  /* 10006405 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 10006408 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000640b lea ecx, [esi + eax*2] */
  ECX = ((uint32_t)(ESI + EAX*2));
  /* 1000640e mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10006413 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10006415 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10006418 mov ecx, edx */
  ECX = (EDX);
  /* 1000641a shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 1000641d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000641f cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006421 jge 0x10006429 */
  if ((C.sf==C.of)) goto L_10006429;
  /* 10006423 push 9 */
  push32((uint32_t)(0x9u));
  /* 10006425 push 2 */
  push32((uint32_t)(0x2u));
  /* 10006427 jmp 0x1000642d */
  goto L_1000642d;
L_10006429:;
  /* 10006429 push 6 */
  push32((uint32_t)(0x6u));
  /* 1000642b push 6 */
  push32((uint32_t)(0x6u));
L_1000642d:;
  /* 1000642d push 9 */
  push32((uint32_t)(0x9u));
  /* 1000642f call dword ptr [0x10016504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016504))), 0x10006435u);
  /* 10006435 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10006438:;
  /* 10006438 push 0x10016140 */
  push32((uint32_t)(0x10016140u));
  /* 1000643d call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x10006443u);
  /* 10006443 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006446 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10006448 jne 0x100064af */
  if (!C.zf) goto L_100064af;
  /* 1000644a mov eax, dword ptr [0x100164ac] */
  EAX = (r32((uint32_t)(0x100164ac)));
  /* 1000644f mov dl, byte ptr [0x100162a4] */
  DL = (r8((uint32_t)(0x100162a4)));
  /* 10006455 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10006457 mov byte ptr [esp + 8], dl */
  w8((uint32_t)(ESP + 0x8), (DL));
  /* 1000645b je 0x10006472 */
  if (C.zf) goto L_10006472;
  /* 1000645d mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10006461 push 3 */
  push32((uint32_t)(0x3u));
  /* 10006463 push 0x10016140 */
  push32((uint32_t)(0x10016140u));
  /* 10006468 push ecx */
  push32((uint32_t)(ECX));
  /* 10006469 call eax */
  call_ind((uint32_t)(EAX), 0x1000646bu);
  /* 1000646b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000646e mov esi, eax */
  ESI = (EAX);
  /* 10006470 jmp 0x10006474 */
  goto L_10006474;
L_10006472:;
  /* 10006472 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10006474:;
  /* 10006474 push 3 */
  push32((uint32_t)(0x3u));
  /* 10006476 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x1000647cu);
  /* 1000647c lea edx, [esi + esi*2] */
  EDX = ((uint32_t)(ESI + ESI*2));
  /* 1000647f mov edi, eax */
  EDI = (EAX);
  /* 10006481 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10006486 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006489 lea ecx, [esi + edx*4] */
  ECX = ((uint32_t)(ESI + EDX*4));
  /* 1000648c imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1000648e sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10006491 mov eax, edx */
  EAX = (EDX);
  /* 10006493 push 1 */
  push32((uint32_t)(0x1u));
  /* 10006495 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 10006498 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000649a push 9 */
  push32((uint32_t)(0x9u));
  /* 1000649c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000649e jge 0x100064a4 */
  if ((C.sf==C.of)) goto L_100064a4;
  /* 100064a0 push 9 */
  push32((uint32_t)(0x9u));
  /* 100064a2 jmp 0x100064a6 */
  goto L_100064a6;
L_100064a4:;
  /* 100064a4 push 6 */
  push32((uint32_t)(0x6u));
L_100064a6:;
  /* 100064a6 call dword ptr [0x10016504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016504))), 0x100064acu);
  /* 100064ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100064af:;
  /* 100064af push 0x10016330 */
  push32((uint32_t)(0x10016330u));
  /* 100064b4 call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x100064bau);
  /* 100064ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100064bd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100064bf je 0x100064d3 */
  if (C.zf) goto L_100064d3;
  /* 100064c1 push 0x10016278 */
  push32((uint32_t)(0x10016278u));
  /* 100064c6 call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x100064ccu);
  /* 100064cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100064cf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100064d1 jne 0x100064f4 */
  if (!C.zf) goto L_100064f4;
L_100064d3:;
  /* 100064d3 push 3 */
  push32((uint32_t)(0x3u));
  /* 100064d5 call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x100064dbu);
  /* 100064db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100064de cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100064e3 jge 0x100064f4 */
  if ((C.sf==C.of)) goto L_100064f4;
  /* 100064e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 100064e7 push 4 */
  push32((uint32_t)(0x4u));
  /* 100064e9 push 9 */
  push32((uint32_t)(0x9u));
  /* 100064eb call dword ptr [0x10016504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016504))), 0x100064f1u);
  /* 100064f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100064f4:;
  /* 100064f4 push 0x10015fd8 */
  push32((uint32_t)(0x10015fd8u));
  /* 100064f9 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x100064ffu);
  /* 100064ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006502 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10006504 jne 0x10006577 */
  if (!C.zf) goto L_10006577;
  /* 10006506 call 0x10002780 */
  push32(0x1000650bu); f_10002780();
  /* 1000650b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000650e jge 0x10006577 */
  if ((C.sf==C.of)) goto L_10006577;
  /* 10006510 mov eax, dword ptr [0x100164a8] */
  EAX = (r32((uint32_t)(0x100164a8)));
  /* 10006515 mov cl, byte ptr [0x100162a4] */
  CL = (r8((uint32_t)(0x100162a4)));
  /* 1000651b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000651d mov byte ptr [esp + 8], cl */
  w8((uint32_t)(ESP + 0x8), (CL));
  /* 10006521 je 0x10006538 */
  if (C.zf) goto L_10006538;
  /* 10006523 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10006527 push 2 */
  push32((uint32_t)(0x2u));
  /* 10006529 push 0x10015fd8 */
  push32((uint32_t)(0x10015fd8u));
  /* 1000652e push edx */
  push32((uint32_t)(EDX));
  /* 1000652f call eax */
  call_ind((uint32_t)(EAX), 0x10006531u);
  /* 10006531 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006534 mov esi, eax */
  ESI = (EAX);
  /* 10006536 jmp 0x1000653a */
  goto L_1000653a;
L_10006538:;
  /* 10006538 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1000653a:;
  /* 1000653a push 2 */
  push32((uint32_t)(0x2u));
  /* 1000653c call dword ptr [0x1001652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001652c))), 0x10006542u);
  /* 10006542 mov edi, eax */
  EDI = (EAX);
  /* 10006544 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 10006547 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000654a lea ecx, [esi + eax*2] */
  ECX = ((uint32_t)(ESI + EAX*2));
  /* 1000654d mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10006552 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10006554 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10006557 mov ecx, edx */
  ECX = (EDX);
  /* 10006559 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 1000655c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000655e cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006560 jge 0x10006568 */
  if ((C.sf==C.of)) goto L_10006568;
  /* 10006562 push 3 */
  push32((uint32_t)(0x3u));
  /* 10006564 push 5 */
  push32((uint32_t)(0x5u));
  /* 10006566 jmp 0x1000656c */
  goto L_1000656c;
L_10006568:;
  /* 10006568 push 1 */
  push32((uint32_t)(0x1u));
  /* 1000656a push 7 */
  push32((uint32_t)(0x7u));
L_1000656c:;
  /* 1000656c push 9 */
  push32((uint32_t)(0x9u));
  /* 1000656e call dword ptr [0x10016504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016504))), 0x10006574u);
  /* 10006574 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10006577:;
  /* 10006577 push 0x10016260 */
  push32((uint32_t)(0x10016260u));
  /* 1000657c call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x10006582u);
  /* 10006582 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006585 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10006587 pop edi */
  EDI = (pop32());
  /* 10006588 pop esi */
  ESI = (pop32());
  /* 10006589 jne 0x1000659a */
  if (!C.zf) goto L_1000659a;
  /* 1000658b push 1 */
  push32((uint32_t)(0x1u));
  /* 1000658d push 1 */
  push32((uint32_t)(0x1u));
  /* 1000658f push 9 */
  push32((uint32_t)(0x9u));
  /* 10006591 call dword ptr [0x10016504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016504))), 0x10006597u);
  /* 10006597 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1000659a:;
  /* 1000659a push 0x10016068 */
  push32((uint32_t)(0x10016068u));
  /* 1000659f call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x100065a5u);
  /* 100065a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100065a8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100065aa je 0x100065be */
  if (C.zf) goto L_100065be;
  /* 100065ac push 0x10013650 */
  push32((uint32_t)(0x10013650u));
  /* 100065b1 call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x100065b7u);
  /* 100065b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100065ba test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100065bc jne 0x100065cd */
  if (!C.zf) goto L_100065cd;
L_100065be:;
  /* 100065be push 1 */
  push32((uint32_t)(0x1u));
  /* 100065c0 push 4 */
  push32((uint32_t)(0x4u));
  /* 100065c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 100065c4 call dword ptr [0x10016504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016504))), 0x100065cau);
  /* 100065ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100065cd:;
  /* 100065cd push 0x10015f10 */
  push32((uint32_t)(0x10015f10u));
  /* 100065d2 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x100065d8u);
  /* 100065d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100065db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100065dd jne 0x100065ee */
  if (!C.zf) goto L_100065ee;
  /* 100065df push 4 */
  push32((uint32_t)(0x4u));
  /* 100065e1 push 4 */
  push32((uint32_t)(0x4u));
  /* 100065e3 push 6 */
  push32((uint32_t)(0x6u));
  /* 100065e5 call dword ptr [0x10016504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016504))), 0x100065ebu);
  /* 100065eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100065ee:;
  /* 100065ee push 0x10016368 */
  push32((uint32_t)(0x10016368u));
  /* 100065f3 call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x100065f9u);
  /* 100065f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100065fc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100065fe jne 0x10006620 */
  if (!C.zf) goto L_10006620;
  /* 10006600 push 1 */
  push32((uint32_t)(0x1u));
  /* 10006602 push 1 */
  push32((uint32_t)(0x1u));
  /* 10006604 push 9 */
  push32((uint32_t)(0x9u));
  /* 10006606 call dword ptr [0x10016504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016504))), 0x1000660cu);
  /* 1000660c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000660f pop ecx */
  ECX = (pop32());
  /* 10006610 ret  */
  ESPCHK(0x100062f0u, _esp0);
  ESP += 4; return;
L_10006611:;
  /* 10006611 push 3 */
  push32((uint32_t)(0x3u));
  /* 10006613 push 6 */
  push32((uint32_t)(0x6u));
  /* 10006615 push 0 */
  push32((uint32_t)(0x0u));
  /* 10006617 call dword ptr [0x10016504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016504))), 0x1000661du);
  /* 1000661d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10006620:;
  /* 10006620 pop ecx */
  ECX = (pop32());
  /* 10006621 ret  */
  ESPCHK(0x100062f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006630 @ 0x10006630 (174 bytes, 50 insns) */
void f_10006630(void) {
  FTRACE(0x10006630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10006630 push 0x10016588 */
  push32((uint32_t)(0x10016588u));
  /* 10006635 call 0x10002720 */
  push32(0x1000663au); f_10002720();
  /* 1000663a push 0x10016330 */
  push32((uint32_t)(0x10016330u));
  /* 1000663f call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x10006645u);
  /* 10006645 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006648 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1000664a je 0x1000666c */
  if (C.zf) goto L_1000666c;
  /* 1000664c push 0x10016278 */
  push32((uint32_t)(0x10016278u));
  /* 10006651 call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x10006657u);
  /* 10006657 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000665a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1000665c je 0x1000666c */
  if (C.zf) goto L_1000666c;
  /* 1000665e push 0x1000f16c */
  push32((uint32_t)(0x1000f16cu));
  /* 10006663 call 0x10002720 */
  push32(0x10006668u); f_10002720();
  /* 10006668 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000666b ret  */
  ESPCHK(0x10006630u, _esp0);
  ESP += 4; return;
L_1000666c:;
  /* 1000666c mov eax, dword ptr [0x10015f48] */
  EAX = (r32((uint32_t)(0x10015f48)));
  /* 10006671 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006674 je 0x100066d2 */
  if (C.zf) goto L_100066d2;
  /* 10006676 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006679 je 0x100066d2 */
  if (C.zf) goto L_100066d2;
  /* 1000667b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000667e je 0x100066d2 */
  if (C.zf) goto L_100066d2;
  /* 10006680 push 0x10016260 */
  push32((uint32_t)(0x10016260u));
  /* 10006685 call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x1000668bu);
  /* 1000668b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000668e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10006690 je 0x100066b2 */
  if (C.zf) goto L_100066b2;
  /* 10006692 push 0x10016140 */
  push32((uint32_t)(0x10016140u));
  /* 10006697 call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x1000669du);
  /* 1000669d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100066a0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100066a2 jne 0x100066b2 */
  if (!C.zf) goto L_100066b2;
  /* 100066a4 push 0x10016588 */
  push32((uint32_t)(0x10016588u));
  /* 100066a9 call 0x10002720 */
  push32(0x100066aeu); f_10002720();
  /* 100066ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100066b1 ret  */
  ESPCHK(0x10006630u, _esp0);
  ESP += 4; return;
L_100066b2:;
  /* 100066b2 push 0x10016140 */
  push32((uint32_t)(0x10016140u));
  /* 100066b7 call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x100066bdu);
  /* 100066bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100066c0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100066c2 je 0x100066dd */
  if (C.zf) goto L_100066dd;
  /* 100066c4 push 0x1000f1d8 */
  push32((uint32_t)(0x1000f1d8u));
  /* 100066c9 call 0x10002720 */
  push32(0x100066ceu); f_10002720();
  /* 100066ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100066d1 ret  */
  ESPCHK(0x10006630u, _esp0);
  ESP += 4; return;
L_100066d2:;
  /* 100066d2 push 0x1000f1d8 */
  push32((uint32_t)(0x1000f1d8u));
  /* 100066d7 call 0x10002720 */
  push32(0x100066dcu); f_10002720();
  /* 100066dc pop ecx */
  ECX = (pop32());
L_100066dd:;
  /* 100066dd ret  */
  ESPCHK(0x10006630u, _esp0);
  ESP += 4; return;
}

/* FUN_100066e0 @ 0x100066e0 (70 bytes, 22 insns) */
void f_100066e0(void) {
  FTRACE(0x100066e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100066e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 100066e2 call 0x10002760 */
  push32(0x100066e7u); f_10002760();
  /* 100066e7 push 0x10013678 */
  push32((uint32_t)(0x10013678u));
  /* 100066ec call 0x10005270 */
  push32(0x100066f1u); f_10005270();
  /* 100066f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100066f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100066f6 je 0x10006702 */
  if (C.zf) goto L_10006702;
  /* 100066f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 100066fa call 0x10002760 */
  push32(0x100066ffu); f_10002760();
  /* 100066ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10006702:;
  /* 10006702 call 0x10002770 */
  push32(0x10006707u); f_10002770();
  /* 10006707 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10006709 jg 0x1000671d */
  if ((!C.zf&&C.sf==C.of)) goto L_1000671d;
  /* 1000670b push 0x100138c8 */
  push32((uint32_t)(0x100138c8u));
  /* 10006710 call dword ptr [0x10016534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016534))), 0x10006716u);
  /* 10006716 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006719 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000671b jle 0x10006725 */
  if ((C.zf||C.sf!=C.of)) goto L_10006725;
L_1000671d:;
  /* 1000671d push 0 */
  push32((uint32_t)(0x0u));
  /* 1000671f call 0x10002760 */
  push32(0x10006724u); f_10002760();
  /* 10006724 pop ecx */
  ECX = (pop32());
L_10006725:;
  /* 10006725 ret  */
  ESPCHK(0x100066e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006730 @ 0x10006730 (235 bytes, 66 insns) */
void f_10006730(void) {
  FTRACE(0x10006730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10006730 push 0x10016188 */
  push32((uint32_t)(0x10016188u));
  /* 10006735 call dword ptr [0x1001653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001653c))), 0x1000673bu);
  /* 1000673b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000673e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10006740 je 0x10006756 */
  if (C.zf) goto L_10006756;
  /* 10006742 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10006744 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10006746 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10006748 push 0x10016360 */
  push32((uint32_t)(0x10016360u));
  /* 1000674d call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10006753u);
  /* 10006753 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10006756:;
  /* 10006756 push 0x100160a0 */
  push32((uint32_t)(0x100160a0u));
  /* 1000675b call dword ptr [0x1001653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001653c))), 0x10006761u);
  /* 10006761 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006764 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10006766 je 0x1000677c */
  if (C.zf) goto L_1000677c;
  /* 10006768 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1000676a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1000676c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1000676e push 0x10013658 */
  push32((uint32_t)(0x10013658u));
  /* 10006773 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10006779u);
  /* 10006779 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1000677c:;
  /* 1000677c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000677e push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10006780 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10006782 push 0x100138b8 */
  push32((uint32_t)(0x100138b8u));
  /* 10006787 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x1000678du);
  /* 1000678d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000678f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10006791 push 0x100161c8 */
  push32((uint32_t)(0x100161c8u));
  /* 10006796 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000679cu);
  /* 1000679c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000679e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100067a0 push 0x100161c0 */
  push32((uint32_t)(0x100161c0u));
  /* 100067a5 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100067abu);
  /* 100067ab push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100067ad push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100067af push 0x10016190 */
  push32((uint32_t)(0x10016190u));
  /* 100067b4 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100067bau);
  /* 100067ba push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100067bc push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100067be push 0x10016188 */
  push32((uint32_t)(0x10016188u));
  /* 100067c3 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100067c9u);
  /* 100067c9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100067cc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100067ce push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100067d0 push 0x10016198 */
  push32((uint32_t)(0x10016198u));
  /* 100067d5 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100067dbu);
  /* 100067db push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100067dd push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100067df push 0x10016088 */
  push32((uint32_t)(0x10016088u));
  /* 100067e4 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100067eau);
  /* 100067ea push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100067ec push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100067ee push 0x10016090 */
  push32((uint32_t)(0x10016090u));
  /* 100067f3 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100067f9u);
  /* 100067f9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100067fb push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100067fd push 0x10016098 */
  push32((uint32_t)(0x10016098u));
  /* 10006802 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10006808u);
  /* 10006808 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000680a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1000680c push 0x100160a0 */
  push32((uint32_t)(0x100160a0u));
  /* 10006811 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x10006817u);
  /* 10006817 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000681a ret  */
  ESPCHK(0x10006730u, _esp0);
  ESP += 4; return;
}

/* FUN_10006820 @ 0x10006820 (303 bytes, 90 insns) */
void f_10006820(void) {
  FTRACE(0x10006820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10006820 push ecx */
  push32((uint32_t)(ECX));
  /* 10006821 push ebx */
  push32((uint32_t)(EBX));
  /* 10006822 push ebp */
  push32((uint32_t)(EBP));
  /* 10006823 push esi */
  push32((uint32_t)(ESI));
  /* 10006824 push edi */
  push32((uint32_t)(EDI));
  /* 10006825 push 0x100138c8 */
  push32((uint32_t)(0x100138c8u));
  /* 1000682a call dword ptr [0x10016534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016534))), 0x10006830u);
  /* 10006830 push 0x10016240 */
  push32((uint32_t)(0x10016240u));
  /* 10006835 mov ebx, eax */
  EBX = (EAX);
  /* 10006837 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x1000683du);
  /* 1000683d push 0x10016240 */
  push32((uint32_t)(0x10016240u));
  /* 10006842 mov edi, eax */
  EDI = (EAX);
  /* 10006844 call dword ptr [0x10016534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016534))), 0x1000684au);
  /* 1000684a push 0x10015f10 */
  push32((uint32_t)(0x10015f10u));
  /* 1000684f mov ebp, eax */
  EBP = (EAX);
  /* 10006851 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10006857u);
  /* 10006857 push 0x10015f10 */
  push32((uint32_t)(0x10015f10u));
  /* 1000685c mov esi, eax */
  ESI = (EAX);
  /* 1000685e call dword ptr [0x10016534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016534))), 0x10006864u);
  /* 10006864 push 0x100138c8 */
  push32((uint32_t)(0x100138c8u));
  /* 10006869 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 1000686d call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10006873u);
  /* 10006873 mov edx, dword ptr [esp + 0x28] */
  EDX = (r32((uint32_t)(ESP + 0x28)));
  /* 10006877 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000687a sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000687c add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1000687e sub esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10006880 sub esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10006882 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10006884 pop edi */
  EDI = (pop32());
  /* 10006885 pop esi */
  ESI = (pop32());
  /* 10006886 pop ebp */
  EBP = (pop32());
  /* 10006887 pop ebx */
  EBX = (pop32());
  /* 10006888 jne 0x100068f0 */
  if (!C.zf) goto L_100068f0;
  /* 1000688a cmp dword ptr [0x100161a0], 0x28 */
  { uint32_t _a=(r32((uint32_t)(0x100161a0))),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006891 jle 0x100068f0 */
  if ((C.zf||C.sf!=C.of)) goto L_100068f0;
  /* 10006893 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10006895 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10006897 push 4 */
  push32((uint32_t)(0x4u));
  /* 10006899 push 0x100138c8 */
  push32((uint32_t)(0x100138c8u));
  /* 1000689e call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x100068a4u);
  /* 100068a4 push 0x100161a8 */
  push32((uint32_t)(0x100161a8u));
  /* 100068a9 call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x100068afu);
  /* 100068af add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100068b2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100068b4 je 0x100068ca */
  if (C.zf) goto L_100068ca;
  /* 100068b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100068b8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100068ba push 6 */
  push32((uint32_t)(0x6u));
  /* 100068bc push 0x100138c8 */
  push32((uint32_t)(0x100138c8u));
  /* 100068c1 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x100068c7u);
  /* 100068c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100068ca:;
  /* 100068ca push 0x10016010 */
  push32((uint32_t)(0x10016010u));
  /* 100068cf call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x100068d5u);
  /* 100068d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100068d8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100068da je 0x100068f0 */
  if (C.zf) goto L_100068f0;
  /* 100068dc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100068de push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100068e0 push 8 */
  push32((uint32_t)(0x8u));
  /* 100068e2 push 0x100138c8 */
  push32((uint32_t)(0x100138c8u));
  /* 100068e7 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x100068edu);
  /* 100068ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100068f0:;
  /* 100068f0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100068f2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100068f4 push 0x100162d8 */
  push32((uint32_t)(0x100162d8u));
  /* 100068f9 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x100068ffu);
  /* 100068ff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10006901 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10006903 push 0x100162c0 */
  push32((uint32_t)(0x100162c0u));
  /* 10006908 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000690eu);
  /* 1000690e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10006910 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10006912 push 0x100162d0 */
  push32((uint32_t)(0x100162d0u));
  /* 10006917 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000691du);
  /* 1000691d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000691f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10006921 push 0x100162b0 */
  push32((uint32_t)(0x100162b0u));
  /* 10006926 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000692cu);
  /* 1000692c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000692e push 0xf */
  push32((uint32_t)(0xfu));
  /* 10006930 push 0x100162b8 */
  push32((uint32_t)(0x100162b8u));
  /* 10006935 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000693bu);
  /* 1000693b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000693d push 0xa */
  push32((uint32_t)(0xau));
  /* 1000693f push 0x100162a8 */
  push32((uint32_t)(0x100162a8u));
  /* 10006944 call dword ptr [0x100164f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f8))), 0x1000694au);
  /* 1000694a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000694d pop ecx */
  ECX = (pop32());
  /* 1000694e ret  */
  ESPCHK(0x10006820u, _esp0);
  ESP += 4; return;
}

/* FUN_10006950 @ 0x10006950 (517 bytes, 145 insns) */
void f_10006950(void) {
  FTRACE(0x10006950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10006950 push esi */
  push32((uint32_t)(ESI));
  /* 10006951 push 0x10016248 */
  push32((uint32_t)(0x10016248u));
  /* 10006956 call dword ptr [0x10016534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016534))), 0x1000695cu);
  /* 1000695c push 0x10016248 */
  push32((uint32_t)(0x10016248u));
  /* 10006961 mov esi, eax */
  ESI = (EAX);
  /* 10006963 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10006969u);
  /* 10006969 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000696c sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000696e jne 0x10006984 */
  if (!C.zf) goto L_10006984;
  /* 10006970 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10006972 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10006974 push 5 */
  push32((uint32_t)(0x5u));
  /* 10006976 push 0x10016248 */
  push32((uint32_t)(0x10016248u));
  /* 1000697b call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10006981u);
  /* 10006981 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10006984:;
  /* 10006984 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10006986 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10006988 push 1 */
  push32((uint32_t)(0x1u));
  /* 1000698a push 0x10015fa8 */
  push32((uint32_t)(0x10015fa8u));
  /* 1000698f call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10006995u);
  /* 10006995 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10006997 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10006999 push 1 */
  push32((uint32_t)(0x1u));
  /* 1000699b push 0x100161d8 */
  push32((uint32_t)(0x100161d8u));
  /* 100069a0 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x100069a6u);
  /* 100069a6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100069a8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100069aa push 2 */
  push32((uint32_t)(0x2u));
  /* 100069ac push 0x10016240 */
  push32((uint32_t)(0x10016240u));
  /* 100069b1 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x100069b7u);
  /* 100069b7 push 0x10016240 */
  push32((uint32_t)(0x10016240u));
  /* 100069bc call dword ptr [0x10016534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016534))), 0x100069c2u);
  /* 100069c2 push 0x10016240 */
  push32((uint32_t)(0x10016240u));
  /* 100069c7 mov esi, eax */
  ESI = (EAX);
  /* 100069c9 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x100069cfu);
  /* 100069cf add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100069d2 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100069d4 jne 0x10006b53 */
  if (!C.zf) goto L_10006b53;
  /* 100069da push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100069dc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100069de push 1 */
  push32((uint32_t)(0x1u));
  /* 100069e0 push 0x10015f10 */
  push32((uint32_t)(0x10015f10u));
  /* 100069e5 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x100069ebu);
  /* 100069eb push 0x10015f10 */
  push32((uint32_t)(0x10015f10u));
  /* 100069f0 call dword ptr [0x10016534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016534))), 0x100069f6u);
  /* 100069f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100069f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100069fb je 0x10006b53 */
  if (C.zf) goto L_10006b53;
  /* 10006a01 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10006a03 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10006a05 push 1 */
  push32((uint32_t)(0x1u));
  /* 10006a07 push 0x10015fc0 */
  push32((uint32_t)(0x10015fc0u));
  /* 10006a0c call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10006a12u);
  /* 10006a12 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10006a14 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10006a16 push 1 */
  push32((uint32_t)(0x1u));
  /* 10006a18 push 0x10015fc8 */
  push32((uint32_t)(0x10015fc8u));
  /* 10006a1d call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10006a23u);
  /* 10006a23 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10006a25 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10006a27 push 1 */
  push32((uint32_t)(0x1u));
  /* 10006a29 push 0x10013868 */
  push32((uint32_t)(0x10013868u));
  /* 10006a2e call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10006a34u);
  /* 10006a34 push 0x10013868 */
  push32((uint32_t)(0x10013868u));
  /* 10006a39 call dword ptr [0x10016534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016534))), 0x10006a3fu);
  /* 10006a3f add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006a42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10006a44 je 0x10006b53 */
  if (C.zf) goto L_10006b53;
  /* 10006a4a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10006a4c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10006a4e push 1 */
  push32((uint32_t)(0x1u));
  /* 10006a50 push 0x10015fd8 */
  push32((uint32_t)(0x10015fd8u));
  /* 10006a55 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10006a5bu);
  /* 10006a5b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10006a5d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10006a5f push 1 */
  push32((uint32_t)(0x1u));
  /* 10006a61 push 0x100160e8 */
  push32((uint32_t)(0x100160e8u));
  /* 10006a66 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10006a6cu);
  /* 10006a6c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10006a6e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10006a70 push 1 */
  push32((uint32_t)(0x1u));
  /* 10006a72 push 0x10013608 */
  push32((uint32_t)(0x10013608u));
  /* 10006a77 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10006a7du);
  /* 10006a7d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10006a7f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10006a81 push 1 */
  push32((uint32_t)(0x1u));
  /* 10006a83 push 0x100160c8 */
  push32((uint32_t)(0x100160c8u));
  /* 10006a88 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10006a8eu);
  /* 10006a8e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006a91 push 0x10016010 */
  push32((uint32_t)(0x10016010u));
  /* 10006a96 call dword ptr [0x10016540] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016540))), 0x10006a9cu);
  /* 10006a9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006a9f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10006aa1 je 0x10006b53 */
  if (C.zf) goto L_10006b53;
  /* 10006aa7 push 0x10015fa8 */
  push32((uint32_t)(0x10015fa8u));
  /* 10006aac call dword ptr [0x10016534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016534))), 0x10006ab2u);
  /* 10006ab2 push 0x10015fa8 */
  push32((uint32_t)(0x10015fa8u));
  /* 10006ab7 mov esi, eax */
  ESI = (EAX);
  /* 10006ab9 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10006abfu);
  /* 10006abf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006ac2 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10006ac4 jne 0x10006aed */
  if (!C.zf) goto L_10006aed;
  /* 10006ac6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10006ac8 call 0x10002730 */
  push32(0x10006acdu); f_10002730();
  /* 10006acd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006ad0 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006ad3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10006ad5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10006ad7 jge 0x10006add */
  if ((C.sf==C.of)) goto L_10006add;
  /* 10006ad9 push 6 */
  push32((uint32_t)(0x6u));
  /* 10006adb jmp 0x10006adf */
  goto L_10006adf;
L_10006add:;
  /* 10006add push 4 */
  push32((uint32_t)(0x4u));
L_10006adf:;
  /* 10006adf push 0x10015fa8 */
  push32((uint32_t)(0x10015fa8u));
  /* 10006ae4 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10006aeau);
  /* 10006aea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10006aed:;
  /* 10006aed push 0x100160c8 */
  push32((uint32_t)(0x100160c8u));
  /* 10006af2 call dword ptr [0x10016534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016534))), 0x10006af8u);
  /* 10006af8 push 0x100160c8 */
  push32((uint32_t)(0x100160c8u));
  /* 10006afd mov esi, eax */
  ESI = (EAX);
  /* 10006aff call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10006b05u);
  /* 10006b05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006b08 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10006b0a jne 0x10006b20 */
  if (!C.zf) goto L_10006b20;
  /* 10006b0c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10006b0e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10006b10 push 7 */
  push32((uint32_t)(0x7u));
  /* 10006b12 push 0x100160c8 */
  push32((uint32_t)(0x100160c8u));
  /* 10006b17 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10006b1du);
  /* 10006b1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10006b20:;
  /* 10006b20 push 0x10013608 */
  push32((uint32_t)(0x10013608u));
  /* 10006b25 call dword ptr [0x10016534] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016534))), 0x10006b2bu);
  /* 10006b2b push 0x10013608 */
  push32((uint32_t)(0x10013608u));
  /* 10006b30 mov esi, eax */
  ESI = (EAX);
  /* 10006b32 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10006b38u);
  /* 10006b38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006b3b sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10006b3d jne 0x10006b53 */
  if (!C.zf) goto L_10006b53;
  /* 10006b3f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10006b41 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10006b43 push 3 */
  push32((uint32_t)(0x3u));
  /* 10006b45 push 0x10013608 */
  push32((uint32_t)(0x10013608u));
  /* 10006b4a call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10006b50u);
  /* 10006b50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10006b53:;
  /* 10006b53 pop esi */
  ESI = (pop32());
  /* 10006b54 ret  */
  ESPCHK(0x10006950u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b60 @ 0x10006b60 (121 bytes, 36 insns) */
void f_10006b60(void) {
  FTRACE(0x10006b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10006b60 push 1 */
  push32((uint32_t)(0x1u));
  /* 10006b62 call 0x10002760 */
  push32(0x10006b67u); f_10002760();
  /* 10006b67 push 0x10013878 */
  push32((uint32_t)(0x10013878u));
  /* 10006b6c call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10006b72u);
  /* 10006b72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006b75 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006b78 jge 0x10006b8d */
  if ((C.sf==C.of)) goto L_10006b8d;
  /* 10006b7a mov eax, dword ptr [0x100162a4] */
  EAX = (r32((uint32_t)(0x100162a4)));
  /* 10006b7f push 0 */
  push32((uint32_t)(0x0u));
  /* 10006b81 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10006b84 push eax */
  push32((uint32_t)(EAX));
  /* 10006b85 call 0x100026d0 */
  push32(0x10006b8au); f_100026d0();
  /* 10006b8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10006b8d:;
  /* 10006b8d push 0x10013878 */
  push32((uint32_t)(0x10013878u));
  /* 10006b92 call dword ptr [0x10016530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016530))), 0x10006b98u);
  /* 10006b98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006b9b cmp eax, 0x5f */
  { uint32_t _a=(EAX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006b9e jle 0x10006bb4 */
  if ((C.zf||C.sf!=C.of)) goto L_10006bb4;
  /* 10006ba0 mov ecx, dword ptr [0x100162a4] */
  ECX = (r32((uint32_t)(0x100162a4)));
  /* 10006ba6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10006ba8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10006bab push ecx */
  push32((uint32_t)(ECX));
  /* 10006bac call 0x100026d0 */
  push32(0x10006bb1u); f_100026d0();
  /* 10006bb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10006bb4:;
  /* 10006bb4 mov edx, dword ptr [0x100162a4] */
  EDX = (r32((uint32_t)(0x100162a4)));
  /* 10006bba add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10006bbd push edx */
  push32((uint32_t)(EDX));
  /* 10006bbe call 0x100026f0 */
  push32(0x10006bc3u); f_100026f0();
  /* 10006bc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10006bc5 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10006bc8 push eax */
  push32((uint32_t)(EAX));
  /* 10006bc9 call 0x10002760 */
  push32(0x10006bceu); f_10002760();
  /* 10006bce push 0 */
  push32((uint32_t)(0x0u));
  /* 10006bd0 call 0x10002760 */
  push32(0x10006bd5u); f_10002760();
  /* 10006bd5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006bd8 ret  */
  ESPCHK(0x10006b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006be0 @ 0x10006be0 (86 bytes, 20 insns) */
void f_10006be0(void) {
  FTRACE(0x10006be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10006be0 mov eax, dword ptr [0x100162a4] */
  EAX = (r32((uint32_t)(0x100162a4)));
  /* 10006be5 mov ecx, dword ptr [eax*4 + 0x10015f88] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10015f88)));
  /* 10006bec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10006bee je 0x10006bf5 */
  if (C.zf) goto L_10006bf5;
  /* 10006bf0 call 0x100066e0 */
  push32(0x10006bf5u); f_100066e0();
L_10006bf5:;
  /* 10006bf5 call 0x10005df0 */
  push32(0x10006bfau); f_10005df0();
  /* 10006bfa call 0x10006730 */
  push32(0x10006bffu); f_10006730();
  /* 10006bff call 0x10002780 */
  push32(0x10006c04u); f_10002780();
  /* 10006c04 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006c07 jge 0x10006c0e */
  if ((C.sf==C.of)) goto L_10006c0e;
  /* 10006c09 call 0x10006820 */
  push32(0x10006c0eu); f_10006820();
L_10006c0e:;
  /* 10006c0e call 0x10005bd0 */
  push32(0x10006c13u); f_10005bd0();
  /* 10006c13 call 0x10005a90 */
  push32(0x10006c18u); f_10005a90();
  /* 10006c18 call 0x10002780 */
  push32(0x10006c1du); f_10002780();
  /* 10006c1d cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006c20 jge 0x10006c27 */
  if ((C.sf==C.of)) goto L_10006c27;
  /* 10006c22 call 0x100052b0 */
  push32(0x10006c27u); f_100052b0();
L_10006c27:;
  /* 10006c27 call 0x10005fd0 */
  push32(0x10006c2cu); f_10005fd0();
  /* 10006c2c call 0x100062f0 */
  push32(0x10006c31u); f_100062f0();
  /* 10006c31 jmp 0x10006630 */
  f_10006630(); return;
}

/* FUN_10006c40 @ 0x10006c40 (247 bytes, 70 insns) */
void f_10006c40(void) {
  FTRACE(0x10006c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10006c40 push esi */
  push32((uint32_t)(ESI));
  /* 10006c41 push edi */
  push32((uint32_t)(EDI));
  /* 10006c42 call 0x10006b60 */
  push32(0x10006c47u); f_10006b60();
  /* 10006c47 call 0x10006950 */
  push32(0x10006c4cu); f_10006950();
  /* 10006c4c mov edi, 2 */
  EDI = (0x2u);
L_10006c51:;
  /* 10006c51 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10006c53 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10006c55 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10006c5a push 0x10016180 */
  push32((uint32_t)(0x10016180u));
  /* 10006c5f call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10006c65u);
  /* 10006c65 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10006c67 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10006c69 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10006c6e push 0x10013678 */
  push32((uint32_t)(0x10013678u));
  /* 10006c73 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10006c79u);
  /* 10006c79 mov eax, dword ptr [0x100162a4] */
  EAX = (r32((uint32_t)(0x100162a4)));
  /* 10006c7e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10006c81 push eax */
  push32((uint32_t)(EAX));
  /* 10006c82 call 0x100026f0 */
  push32(0x10006c87u); f_100026f0();
  /* 10006c87 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006c8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10006c8c jne 0x10006cac */
  if (!C.zf) goto L_10006cac;
  /* 10006c8e mov esi, 0x64 */
  ESI = (0x64u);
L_10006c93:;
  /* 10006c93 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10006c95 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10006c97 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 10006c99 push 0x10013878 */
  push32((uint32_t)(0x10013878u));
  /* 10006c9e call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10006ca4u);
  /* 10006ca4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006ca7 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10006ca8 jne 0x10006c93 */
  if (!C.zf) goto L_10006c93;
  /* 10006caa jmp 0x10006cc0 */
  goto L_10006cc0;
L_10006cac:;
  /* 10006cac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10006cae push 0xa */
  push32((uint32_t)(0xau));
  /* 10006cb0 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10006cb2 push 0x10016150 */
  push32((uint32_t)(0x10016150u));
  /* 10006cb7 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10006cbdu);
  /* 10006cbd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10006cc0:;
  /* 10006cc0 push 0x10016010 */
  push32((uint32_t)(0x10016010u));
  /* 10006cc5 call dword ptr [0x1001653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001653c))), 0x10006ccbu);
  /* 10006ccb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006cce test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10006cd0 jne 0x10006ce9 */
  if (!C.zf) goto L_10006ce9;
  /* 10006cd2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10006cd4 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10006cd6 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10006cdb push 0x10013680 */
  push32((uint32_t)(0x10013680u));
  /* 10006ce0 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10006ce6u);
  /* 10006ce6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10006ce9:;
  /* 10006ce9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10006ceb push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10006ced push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10006cf2 push 0x10013670 */
  push32((uint32_t)(0x10013670u));
  /* 10006cf7 call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10006cfdu);
  /* 10006cfd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10006cff push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10006d01 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10006d06 push 0x10015f70 */
  push32((uint32_t)(0x10015f70u));
  /* 10006d0b call dword ptr [0x100164f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164f4))), 0x10006d11u);
  /* 10006d11 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006d14 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10006d15 jne 0x10006c51 */
  if (!C.zf) goto L_10006c51;
  /* 10006d1b call 0x10006730 */
  push32(0x10006d20u); f_10006730();
  /* 10006d20 call 0x10005fd0 */
  push32(0x10006d25u); f_10005fd0();
  /* 10006d25 call 0x100062f0 */
  push32(0x10006d2au); f_100062f0();
  /* 10006d2a call 0x100052b0 */
  push32(0x10006d2fu); f_100052b0();
  /* 10006d2f call 0x10005a90 */
  push32(0x10006d34u); f_10005a90();
  /* 10006d34 pop edi */
  EDI = (pop32());
  /* 10006d35 pop esi */
  ESI = (pop32());
  /* 10006d36 ret  */
  ESPCHK(0x10006c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d40 @ 0x10006d40 (279 bytes, 62 insns) [1 switch table(s)] */
void f_10006d40(void) {
  FTRACE(0x10006d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10006d40 call 0x10002680 */
  push32(0x10006d45u); f_10002680();
  /* 10006d45 mov dword ptr [0x10015f48], eax */
  w32((uint32_t)(0x10015f48), (EAX));
  /* 10006d4a call 0x10002660 */
  push32(0x10006d4fu); f_10002660();
  /* 10006d4f mov dword ptr [0x10016358], eax */
  w32((uint32_t)(0x10016358), (EAX));
  /* 10006d54 call 0x10002670 */
  push32(0x10006d59u); f_10002670();
  /* 10006d59 mov dword ptr [0x10013888], eax */
  w32((uint32_t)(0x10013888), (EAX));
  /* 10006d5e call 0x10003040 */
  push32(0x10006d63u); f_10003040();
  /* 10006d63 push 0x1000f114 */
  push32((uint32_t)(0x1000f114u));
  /* 10006d68 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10006d6a call dword ptr [0x100164fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164fc))), 0x10006d70u);
  /* 10006d70 call 0x10006630 */
  push32(0x10006d75u); f_10006630();
  /* 10006d75 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10006d77 push 0x1000f244 */
  push32((uint32_t)(0x1000f244u));
  /* 10006d7c call 0x10002700 */
  push32(0x10006d81u); f_10002700();
  /* 10006d81 mov eax, dword ptr [0x10015f48] */
  EAX = (r32((uint32_t)(0x10015f48)));
  /* 10006d86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006d89 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006d8c ja 0x10006e52 */
  if ((!C.cf&&!C.zf)) goto L_10006e52;
  /* 10006d92 jmp dword ptr [eax*4 + 0x10006e58] */
  switch (EAX) {
    case 0: goto L_10006d99;
    case 1: goto L_10006e15;
    case 2: goto L_10006e1c;
    case 3: goto L_10006e1c;
    case 4: goto L_10006e1c;
    case 5: goto L_10006d99;
    default: x86_unimpl("switch@0x10006d92 out of table"); return;
  }
L_10006d99:;
  /* 10006d99 cmp dword ptr [0x10013888], 3 */
  { uint32_t _a=(r32((uint32_t)(0x10013888))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006da0 jne 0x10006dd2 */
  if (!C.zf) goto L_10006dd2;
  /* 10006da2 push 0x1000f160 */
  push32((uint32_t)(0x1000f160u));
  /* 10006da7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10006da9 call dword ptr [0x100164fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164fc))), 0x10006dafu);
  /* 10006daf push 0x1000f16c */
  push32((uint32_t)(0x1000f16cu));
  /* 10006db4 call 0x10002720 */
  push32(0x10006db9u); f_10002720();
  /* 10006db9 push 5 */
  push32((uint32_t)(0x5u));
  /* 10006dbb push 0x1000f41c */
  push32((uint32_t)(0x1000f41cu));
  /* 10006dc0 call 0x10002700 */
  push32(0x10006dc5u); f_10002700();
  /* 10006dc5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006dc8 call 0x10006c40 */
  push32(0x10006dcdu); f_10006c40();
  /* 10006dcd jmp 0x10006e52 */
  goto L_10006e52;
L_10006dd2:;
  /* 10006dd2 push 0x1000f114 */
  push32((uint32_t)(0x1000f114u));
  /* 10006dd7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10006dd9 call dword ptr [0x100164fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164fc))), 0x10006ddfu);
  /* 10006ddf push 0x10016588 */
  push32((uint32_t)(0x10016588u));
  /* 10006de4 call 0x10002720 */
  push32(0x10006de9u); f_10002720();
  /* 10006de9 mov eax, dword ptr [0x10013888] */
  EAX = (r32((uint32_t)(0x10013888)));
  /* 10006dee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006df1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10006df3 jne 0x10006dff */
  if (!C.zf) goto L_10006dff;
  /* 10006df5 mov dword ptr [0x1000f248], 4 */
  w32((uint32_t)(0x1000f248), (0x4u));
L_10006dff:;
  /* 10006dff push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10006e01 push 0x1000f244 */
  push32((uint32_t)(0x1000f244u));
  /* 10006e06 call 0x10002700 */
  push32(0x10006e0bu); f_10002700();
  /* 10006e0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006e0e call 0x10006be0 */
  push32(0x10006e13u); f_10006be0();
  /* 10006e13 jmp 0x10006e52 */
  goto L_10006e52;
L_10006e15:;
  /* 10006e15 call 0x100043e0 */
  push32(0x10006e1au); f_100043e0();
  /* 10006e1a jmp 0x10006e52 */
  goto L_10006e52;
L_10006e1c:;
  /* 10006e1c push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10006e21 call dword ptr [0x10016518] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016518))), 0x10006e27u);
  /* 10006e27 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10006e2c call dword ptr [0x1001651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1001651c))), 0x10006e32u);
  /* 10006e32 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10006e37 call dword ptr [0x10016520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10016520))), 0x10006e3du);
  /* 10006e3d push 0x1000f07c */
  push32((uint32_t)(0x1000f07cu));
  /* 10006e42 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10006e44 call dword ptr [0x100164fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100164fc))), 0x10006e4au);
  /* 10006e4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006e4d call 0x10003360 */
  push32(0x10006e52u); f_10003360();
L_10006e52:;
  /* 10006e52 jmp 0x100031c0 */
  f_100031c0(); return;
}

/* FUN_10006e70 @ 0x10006e70 (82 bytes, 32 insns) */
void f_10006e70(void) {
  FTRACE(0x10006e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10006e70 push ebp */
  push32((uint32_t)(EBP));
  /* 10006e71 mov ebp, esp */
  EBP = (ESP);
  /* 10006e73 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10006e76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10006e79 push esi */
  push32((uint32_t)(ESI));
  /* 10006e7a mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10006e7d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10006e80 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10006e83 mov dword ptr [ebp - 0x14], 0x42 */
  w32((uint32_t)(EBP + -0x14), (0x42u));
  /* 10006e8a push eax */
  push32((uint32_t)(EAX));
  /* 10006e8b lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10006e8e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10006e91 mov dword ptr [ebp - 0x1c], 0x7fffffff */
  w32((uint32_t)(EBP + -0x1c), (0x7fffffffu));
  /* 10006e98 push eax */
  push32((uint32_t)(EAX));
  /* 10006e99 call 0x100071fc */
  push32(0x10006e9eu); f_100071fc();
  /* 10006e9e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006ea1 dec dword ptr [ebp - 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))-1; w32((uint32_t)(EBP + -0x1c), (_r)); fl_dec(_r,32); }
  /* 10006ea4 mov esi, eax */
  ESI = (EAX);
  /* 10006ea6 js 0x10006eb0 */
  if (C.sf) goto L_10006eb0;
  /* 10006ea8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10006eab and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 10006eae jmp 0x10006ebd */
  goto L_10006ebd;
L_10006eb0:;
  /* 10006eb0 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10006eb3 push eax */
  push32((uint32_t)(EAX));
  /* 10006eb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10006eb6 call 0x100070e4 */
  push32(0x10006ebbu); f_100070e4();
  /* 10006ebb pop ecx */
  ECX = (pop32());
  /* 10006ebc pop ecx */
  ECX = (pop32());
L_10006ebd:;
  /* 10006ebd mov eax, esi */
  EAX = (ESI);
  /* 10006ebf pop esi */
  ESI = (pop32());
  /* 10006ec0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10006ec1 ret  */
  ESPCHK(0x10006e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ec2 @ 0x10006ec2 (23 bytes, 6 insns) */
void f_10006ec2(void) {
  FTRACE(0x10006ec2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10006ec2 call 0x10006eda */
  push32(0x10006ec7u); f_10006eda();
  /* 10006ec7 call 0x10007a56 */
  push32(0x10006eccu); f_10007a56();
  /* 10006ecc mov dword ptr [0x10016650], eax */
  w32((uint32_t)(0x10016650), (EAX));
  /* 10006ed1 call 0x10007a06 */
  push32(0x10006ed6u); f_10007a06();
  /* 10006ed6 fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 10006ed8 ret  */
  ESPCHK(0x10006ec2u, _esp0);
  ESP += 4; return;
}

/* FUN_10006eda @ 0x10006eda (56 bytes, 8 insns) */
void f_10006eda(void) {
  FTRACE(0x10006edau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10006eda mov eax, 0x10007e2f */
  EAX = (0x10007e2fu);
  /* 10006edf mov dword ptr [0x10010688], 0x10007ad9 */
  w32((uint32_t)(0x10010688), (0x10007ad9u));
  /* 10006ee9 mov dword ptr [0x10010684], eax */
  w32((uint32_t)(0x10010684), (EAX));
  /* 10006eee mov dword ptr [0x1001068c], 0x10007b3f */
  w32((uint32_t)(0x1001068c), (0x10007b3fu));
  /* 10006ef8 mov dword ptr [0x10010690], 0x10007a7f */
  w32((uint32_t)(0x10010690), (0x10007a7fu));
  /* 10006f02 mov dword ptr [0x10010694], 0x10007b27 */
  w32((uint32_t)(0x10010694), (0x10007b27u));
  /* 10006f0c mov dword ptr [0x10010698], eax */
  w32((uint32_t)(0x10010698), (EAX));
  /* 10006f11 ret  */
  ESPCHK(0x10006edau, _esp0);
  ESP += 4; return;
}

/* __ftol @ 0x10006f14 (39 bytes, 16 insns) */
void f_10006f14(void) {
  FTRACE(0x10006f14u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10006f14 push ebp */
  push32((uint32_t)(EBP));
  /* 10006f15 mov ebp, esp */
  EBP = (ESP);
  /* 10006f17 add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006f1a wait  */
  /* wait (no observable integer/reg state) */
  /* 10006f1b fnstcw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), C.fcw);
  /* 10006f1e wait  */
  /* wait (no observable integer/reg state) */
  /* 10006f1f mov ax, word ptr [ebp - 2] */
  AX = (r16((uint32_t)(EBP + -0x2)));
  /* 10006f23 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 10006f26 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10006f2a fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 10006f2d fistp qword ptr [ebp - 0xc] */
  { int64_t _q=fpu_to_i64(FPU_ST(0)); w32((uint32_t)(EBP + -0xc),(uint32_t)_q); w32((uint32_t)(EBP + -0xc)+4,(uint32_t)((uint64_t)_q>>32)); }
  (void)fpu_pop();
  /* 10006f30 fldcw word ptr [ebp - 2] */
  C.fcw = r16((uint32_t)(EBP + -0x2));
  /* 10006f33 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10006f36 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10006f39 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10006f3a ret  */
  ESPCHK(0x10006f14u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f3b @ 0x10006f3b (217 bytes, 57 insns) */
void f_10006f3b(void) {
  FTRACE(0x10006f3bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10006f3b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10006f3f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006f42 jne 0x10006fd0 */
  if (!C.zf) goto L_10006fd0;
  /* 10006f48 call dword ptr [0x1000e014] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e014))), 0x10006f4eu);
  /* 10006f4e push 1 */
  push32((uint32_t)(0x1u));
  /* 10006f50 mov dword ptr [0x1001666c], eax */
  w32((uint32_t)(0x1001666c), (EAX));
  /* 10006f55 call 0x1000890c */
  push32(0x10006f5au); f_1000890c();
  /* 10006f5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10006f5c pop ecx */
  ECX = (pop32());
  /* 10006f5d je 0x10006f9b */
  if (C.zf) goto L_10006f9b;
  /* 10006f5f mov eax, dword ptr [0x1001666c] */
  EAX = (r32((uint32_t)(0x1001666c)));
  /* 10006f64 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10006f66 mov cl, byte ptr [0x1001666d] */
  CL = (r8((uint32_t)(0x1001666d)));
  /* 10006f6c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10006f71 shr dword ptr [0x1001666c], 0x10 */
  w32((uint32_t)(0x1001666c), (sh_shr((uint32_t)(r32((uint32_t)(0x1001666c))), (0x10u)&0x1f, 32)));
  /* 10006f78 mov dword ptr [0x10016674], eax */
  w32((uint32_t)(0x10016674), (EAX));
  /* 10006f7d mov dword ptr [0x10016678], ecx */
  w32((uint32_t)(0x10016678), (ECX));
  /* 10006f83 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10006f86 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10006f88 mov dword ptr [0x10016670], eax */
  w32((uint32_t)(0x10016670), (EAX));
  /* 10006f8d call 0x10007fc3 */
  push32(0x10006f92u); f_10007fc3();
  /* 10006f92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10006f94 jne 0x10006f9f */
  if (!C.zf) goto L_10006f9f;
  /* 10006f96 call 0x10008969 */
  push32(0x10006f9bu); f_10008969();
L_10006f9b:;
  /* 10006f9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10006f9d jmp 0x10007011 */
  goto L_10007011;
L_10006f9f:;
  /* 10006f9f call dword ptr [0x1000e010] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e010))), 0x10006fa5u);
  /* 10006fa5 mov dword ptr [0x10017d54], eax */
  w32((uint32_t)(0x10017d54), (EAX));
  /* 10006faa call 0x10008665 */
  push32(0x10006fafu); f_10008665();
  /* 10006faf mov dword ptr [0x10016658], eax */
  w32((uint32_t)(0x10016658), (EAX));
  /* 10006fb4 call 0x1000814f */
  push32(0x10006fb9u); f_1000814f();
  /* 10006fb9 call 0x10008418 */
  push32(0x10006fbeu); f_10008418();
  /* 10006fbe call 0x1000835f */
  push32(0x10006fc3u); f_1000835f();
  /* 10006fc3 call 0x10007ea5 */
  push32(0x10006fc8u); f_10007ea5();
  /* 10006fc8 inc dword ptr [0x10016654] */
  { uint32_t _r=(r32((uint32_t)(0x10016654)))+1; w32((uint32_t)(0x10016654), (_r)); fl_inc(_r,32); }
  /* 10006fce jmp 0x1000700e */
  goto L_1000700e;
L_10006fd0:;
  /* 10006fd0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10006fd2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006fd4 jne 0x10007002 */
  if (!C.zf) goto L_10007002;
  /* 10006fd6 cmp dword ptr [0x10016654], ecx */
  { uint32_t _a=(r32((uint32_t)(0x10016654))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006fdc jle 0x10006f9b */
  if ((C.zf||C.sf!=C.of)) goto L_10006f9b;
  /* 10006fde dec dword ptr [0x10016654] */
  { uint32_t _r=(r32((uint32_t)(0x10016654)))-1; w32((uint32_t)(0x10016654), (_r)); fl_dec(_r,32); }
  /* 10006fe4 cmp dword ptr [0x100166a4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x100166a4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006fea jne 0x10006ff1 */
  if (!C.zf) goto L_10006ff1;
  /* 10006fec call 0x10007ee3 */
  push32(0x10006ff1u); f_10007ee3();
L_10006ff1:;
  /* 10006ff1 call 0x1000830b */
  push32(0x10006ff6u); f_1000830b();
  /* 10006ff6 call 0x10008017 */
  push32(0x10006ffbu); f_10008017();
  /* 10006ffb call 0x10008969 */
  push32(0x10007000u); f_10008969();
  /* 10007000 jmp 0x1000700e */
  goto L_1000700e;
L_10007002:;
  /* 10007002 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007005 jne 0x1000700e */
  if (!C.zf) goto L_1000700e;
  /* 10007007 push ecx */
  push32((uint32_t)(ECX));
  /* 10007008 call 0x100080af */
  push32(0x1000700du); f_100080af();
  /* 1000700d pop ecx */
  ECX = (pop32());
L_1000700e:;
  /* 1000700e push 1 */
  push32((uint32_t)(0x1u));
  /* 10007010 pop eax */
  EAX = (pop32());
L_10007011:;
  /* 10007011 ret 0xc */
  ESPCHK(0x10006f3bu, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10007014 (157 bytes, 73 insns) */
void f_10007014(void) {
  FTRACE(0x10007014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10007014 push ebp */
  push32((uint32_t)(EBP));
  /* 10007015 mov ebp, esp */
  EBP = (ESP);
  /* 10007017 push ebx */
  push32((uint32_t)(EBX));
  /* 10007018 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000701b push esi */
  push32((uint32_t)(ESI));
  /* 1000701c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1000701f push edi */
  push32((uint32_t)(EDI));
  /* 10007020 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 10007023 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10007025 jne 0x10007030 */
  if (!C.zf) goto L_10007030;
  /* 10007027 cmp dword ptr [0x10016654], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10016654))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000702e jmp 0x10007056 */
  goto L_10007056;
L_10007030:;
  /* 10007030 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007033 je 0x1000703a */
  if (C.zf) goto L_1000703a;
  /* 10007035 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007038 jne 0x1000705c */
  if (!C.zf) goto L_1000705c;
L_1000703a:;
  /* 1000703a mov eax, dword ptr [0x10017d58] */
  EAX = (r32((uint32_t)(0x10017d58)));
  /* 1000703f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10007041 je 0x1000704c */
  if (C.zf) goto L_1000704c;
  /* 10007043 push edi */
  push32((uint32_t)(EDI));
  /* 10007044 push esi */
  push32((uint32_t)(ESI));
  /* 10007045 push ebx */
  push32((uint32_t)(EBX));
  /* 10007046 call eax */
  call_ind((uint32_t)(EAX), 0x10007048u);
  /* 10007048 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000704a je 0x10007058 */
  if (C.zf) goto L_10007058;
L_1000704c:;
  /* 1000704c push edi */
  push32((uint32_t)(EDI));
  /* 1000704d push esi */
  push32((uint32_t)(ESI));
  /* 1000704e push ebx */
  push32((uint32_t)(EBX));
  /* 1000704f call 0x10006f3b */
  push32(0x10007054u); f_10006f3b();
  /* 10007054 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_10007056:;
  /* 10007056 jne 0x1000705c */
  if (!C.zf) goto L_1000705c;
L_10007058:;
  /* 10007058 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000705a jmp 0x100070aa */
  goto L_100070aa;
L_1000705c:;
  /* 1000705c push edi */
  push32((uint32_t)(EDI));
  /* 1000705d push esi */
  push32((uint32_t)(ESI));
  /* 1000705e push ebx */
  push32((uint32_t)(EBX));
  /* 1000705f call 0x100027f0 */
  push32(0x10007064u); f_100027f0();
  /* 10007064 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007067 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1000706a jne 0x10007078 */
  if (!C.zf) goto L_10007078;
  /* 1000706c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000706e jne 0x100070a7 */
  if (!C.zf) goto L_100070a7;
  /* 10007070 push edi */
  push32((uint32_t)(EDI));
  /* 10007071 push eax */
  push32((uint32_t)(EAX));
  /* 10007072 push ebx */
  push32((uint32_t)(EBX));
  /* 10007073 call 0x10006f3b */
  push32(0x10007078u); f_10006f3b();
L_10007078:;
  /* 10007078 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1000707a je 0x10007081 */
  if (C.zf) goto L_10007081;
  /* 1000707c cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000707f jne 0x100070a7 */
  if (!C.zf) goto L_100070a7;
L_10007081:;
  /* 10007081 push edi */
  push32((uint32_t)(EDI));
  /* 10007082 push esi */
  push32((uint32_t)(ESI));
  /* 10007083 push ebx */
  push32((uint32_t)(EBX));
  /* 10007084 call 0x10006f3b */
  push32(0x10007089u); f_10006f3b();
  /* 10007089 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000708b jne 0x10007090 */
  if (!C.zf) goto L_10007090;
  /* 1000708d and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_10007090:;
  /* 10007090 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007094 je 0x100070a7 */
  if (C.zf) goto L_100070a7;
  /* 10007096 mov eax, dword ptr [0x10017d58] */
  EAX = (r32((uint32_t)(0x10017d58)));
  /* 1000709b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000709d je 0x100070a7 */
  if (C.zf) goto L_100070a7;
  /* 1000709f push edi */
  push32((uint32_t)(EDI));
  /* 100070a0 push esi */
  push32((uint32_t)(ESI));
  /* 100070a1 push ebx */
  push32((uint32_t)(EBX));
  /* 100070a2 call eax */
  call_ind((uint32_t)(EAX), 0x100070a4u);
  /* 100070a4 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_100070a7:;
  /* 100070a7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_100070aa:;
  /* 100070aa pop edi */
  EDI = (pop32());
  /* 100070ab pop esi */
  ESI = (pop32());
  /* 100070ac pop ebx */
  EBX = (pop32());
  /* 100070ad pop ebp */
  EBP = (pop32());
  /* 100070ae ret 0xc */
  ESPCHK(0x10007014u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x100070b1 (48 bytes, 15 insns) */
void f_100070b1(void) {
  FTRACE(0x100070b1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100070b1 mov eax, dword ptr [0x10016660] */
  EAX = (r32((uint32_t)(0x10016660)));
  /* 100070b6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100070b9 je 0x100070c8 */
  if (C.zf) goto L_100070c8;
  /* 100070bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100070bd jne 0x100070cd */
  if (!C.zf) goto L_100070cd;
  /* 100070bf cmp dword ptr [0x10016664], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10016664))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100070c6 jne 0x100070cd */
  if (!C.zf) goto L_100070cd;
L_100070c8:;
  /* 100070c8 call 0x10008a11 */
  push32(0x100070cdu); f_10008a11();
L_100070cd:;
  /* 100070cd push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 100070d1 call 0x10008a4a */
  push32(0x100070d6u); f_10008a4a();
  /* 100070d6 push 0xff */
  push32((uint32_t)(0xffu));
  /* 100070db call dword ptr [0x10010678] */
  call_ind((uint32_t)(r32((uint32_t)(0x10010678))), 0x100070e1u);
  /* 100070e1 pop ecx */
  ECX = (pop32());
  /* 100070e2 pop ecx */
  ECX = (pop32());
  /* 100070e3 ret  */
  ESPCHK(0x100070b1u, _esp0);
  ESP += 4; return;
}

/* FUN_100070e4 @ 0x100070e4 (280 bytes, 106 insns) */
void f_100070e4(void) {
  FTRACE(0x100070e4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100070e4 push ebp */
  push32((uint32_t)(EBP));
  /* 100070e5 mov ebp, esp */
  EBP = (ESP);
  /* 100070e7 push ebx */
  push32((uint32_t)(EBX));
  /* 100070e8 push esi */
  push32((uint32_t)(ESI));
  /* 100070e9 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 100070ec mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 100070ef mov ebx, dword ptr [esi + 0x10] */
  EBX = (r32((uint32_t)(ESI + 0x10)));
  /* 100070f2 test al, 0x82 */
  { uint32_t _r=(AL)&(0x82u); fl_logic(_r,8); }
  /* 100070f4 je 0x100071f0 */
  if (C.zf) goto L_100071f0;
  /* 100070fa test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 100070fc jne 0x100071f0 */
  if (!C.zf) goto L_100071f0;
  /* 10007102 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 10007104 je 0x1000711c */
  if (C.zf) goto L_1000711c;
  /* 10007106 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1000710a test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 1000710c je 0x100071f0 */
  if (C.zf) goto L_100071f0;
  /* 10007112 mov ecx, dword ptr [esi + 8] */
  ECX = (r32((uint32_t)(ESI + 0x8)));
  /* 10007115 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10007117 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 10007119 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_1000711c:;
  /* 1000711c mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1000711f and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10007123 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 10007127 and al, 0xef */
  { uint32_t _r=(AL)&(0xefu); AL = (_r); fl_logic(_r,8); }
  /* 10007129 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1000712b test ax, 0x10c */
  { uint32_t _r=(AX)&(0x10cu); fl_logic(_r,16); }
  /* 1000712f mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 10007132 jne 0x10007156 */
  if (!C.zf) goto L_10007156;
  /* 10007134 cmp esi, 0x10010778 */
  { uint32_t _a=(ESI),_b=(0x10010778u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000713a je 0x10007144 */
  if (C.zf) goto L_10007144;
  /* 1000713c cmp esi, 0x10010798 */
  { uint32_t _a=(ESI),_b=(0x10010798u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007142 jne 0x1000714f */
  if (!C.zf) goto L_1000714f;
L_10007144:;
  /* 10007144 push ebx */
  push32((uint32_t)(EBX));
  /* 10007145 call 0x10008ea9 */
  push32(0x1000714au); f_10008ea9();
  /* 1000714a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000714c pop ecx */
  ECX = (pop32());
  /* 1000714d jne 0x10007156 */
  if (!C.zf) goto L_10007156;
L_1000714f:;
  /* 1000714f push esi */
  push32((uint32_t)(ESI));
  /* 10007150 call 0x10008e65 */
  push32(0x10007155u); f_10008e65();
  /* 10007155 pop ecx */
  ECX = (pop32());
L_10007156:;
  /* 10007156 test word ptr [esi + 0xc], 0x108 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0x108u); fl_logic(_r,16); }
  /* 1000715c push edi */
  push32((uint32_t)(EDI));
  /* 1000715d je 0x100071c6 */
  if (C.zf) goto L_100071c6;
  /* 1000715f mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 10007162 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 10007164 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10007166 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 10007169 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1000716b mov ecx, dword ptr [esi + 0x18] */
  ECX = (r32((uint32_t)(ESI + 0x18)));
  /* 1000716e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1000716f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10007171 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 10007174 jle 0x10007186 */
  if ((C.zf||C.sf!=C.of)) goto L_10007186;
  /* 10007176 push edi */
  push32((uint32_t)(EDI));
  /* 10007177 push eax */
  push32((uint32_t)(EAX));
  /* 10007178 push ebx */
  push32((uint32_t)(EBX));
  /* 10007179 call 0x10008c75 */
  push32(0x1000717eu); f_10008c75();
  /* 1000717e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10007181 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10007184 jmp 0x100071bc */
  goto L_100071bc;
L_10007186:;
  /* 10007186 cmp ebx, -1 */
  { uint32_t _a=(EBX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007189 je 0x100071a4 */
  if (C.zf) goto L_100071a4;
  /* 1000718b mov ecx, ebx */
  ECX = (EBX);
  /* 1000718d mov eax, ebx */
  EAX = (EBX);
  /* 1000718f sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10007192 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10007195 mov ecx, dword ptr [ecx*4 + 0x10017c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10017c40)));
  /* 1000719c lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1000719f lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 100071a2 jmp 0x100071a9 */
  goto L_100071a9;
L_100071a4:;
  /* 100071a4 mov eax, 0x100106a0 */
  EAX = (0x100106a0u);
L_100071a9:;
  /* 100071a9 test byte ptr [eax + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 100071ad je 0x100071bc */
  if (C.zf) goto L_100071bc;
  /* 100071af push 2 */
  push32((uint32_t)(0x2u));
  /* 100071b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 100071b3 push ebx */
  push32((uint32_t)(EBX));
  /* 100071b4 call 0x10008b9d */
  push32(0x100071b9u); f_10008b9d();
  /* 100071b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100071bc:;
  /* 100071bc mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 100071bf mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 100071c2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 100071c4 jmp 0x100071da */
  goto L_100071da;
L_100071c6:;
  /* 100071c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 100071c8 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 100071cb pop edi */
  EDI = (pop32());
  /* 100071cc push edi */
  push32((uint32_t)(EDI));
  /* 100071cd push eax */
  push32((uint32_t)(EAX));
  /* 100071ce push ebx */
  push32((uint32_t)(EBX));
  /* 100071cf call 0x10008c75 */
  push32(0x100071d4u); f_10008c75();
  /* 100071d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100071d7 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_100071da:;
  /* 100071da cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100071dd pop edi */
  EDI = (pop32());
  /* 100071de je 0x100071e6 */
  if (C.zf) goto L_100071e6;
  /* 100071e0 or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 100071e4 jmp 0x100071f5 */
  goto L_100071f5;
L_100071e6:;
  /* 100071e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100071e9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 100071ee jmp 0x100071f8 */
  goto L_100071f8;
L_100071f0:;
  /* 100071f0 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 100071f2 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_100071f5:;
  /* 100071f5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_100071f8:;
  /* 100071f8 pop esi */
  ESI = (pop32());
  /* 100071f9 pop ebx */
  EBX = (pop32());
  /* 100071fa pop ebp */
  EBP = (pop32());
  /* 100071fb ret  */
  ESPCHK(0x100070e4u, _esp0);
  ESP += 4; return;
}

/* FUN_100071fc @ 0x100071fc (1825 bytes, 595 insns) [1 switch table(s)] */
void f_100071fc(void) {
  FTRACE(0x100071fcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100071fc push ebp */
  push32((uint32_t)(EBP));
  /* 100071fd mov ebp, esp */
  EBP = (ESP);
  /* 100071ff sub esp, 0x248 */
  { uint32_t _a=(ESP),_b=(0x248u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10007205 push ebx */
  push32((uint32_t)(EBX));
  /* 10007206 push esi */
  push32((uint32_t)(ESI));
  /* 10007207 push edi */
  push32((uint32_t)(EDI));
  /* 10007208 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1000720b xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1000720d mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1000720f inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10007210 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10007212 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10007215 mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 10007218 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 1000721b je 0x10007915 */
  if (C.zf) goto L_10007915;
  /* 10007221 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10007224 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10007226 jmp 0x10007230 */
  goto L_10007230;
L_10007228:;
  /* 10007228 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1000722b mov esi, dword ptr [ebp - 0x30] */
  ESI = (r32((uint32_t)(EBP + -0x30)));
  /* 1000722e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_10007230:;
  /* 10007230 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007233 jl 0x10007915 */
  if ((C.sf!=C.of)) goto L_10007915;
  /* 10007239 cmp bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000723c jl 0x10007251 */
  if ((C.sf!=C.of)) goto L_10007251;
  /* 1000723e cmp bl, 0x78 */
  { uint32_t _a=(BL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10007241 jg 0x10007251 */
  if ((!C.zf&&C.sf==C.of)) goto L_10007251;
  /* 10007243 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10007246 mov al, byte ptr [eax + 0x1000e0c8] */
  AL = (r8((uint32_t)(EAX + 0x1000e0c8)));
  /* 1000724c and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1000724f jmp 0x10007253 */
  goto L_10007253;
L_10007251:;
  /* 10007251 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10007253:;
  /* 10007253 movsx eax, byte ptr [esi + eax*8 + 0x1000e0e8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI + EAX*8 + 0x1000e0e8))));
  /* 1000725b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1000725e cmp eax, 7 */
  { uint32_t _a=(EAX),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007261 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10007264 ja 0x10007904 */
  if ((!C.cf&&!C.zf)) goto L_10007904;
  /* 1000726a jmp dword ptr [eax*4 + 0x1000791d] */
  switch (EAX) {
    case 0: goto L_1000739b;
    case 1: goto L_10007271;
    case 2: goto L_1000728c;
    case 3: goto L_100072d8;
    case 4: goto L_1000730f;
    case 5: goto L_10007317;
    case 6: goto L_1000734c;
    case 7: goto L_100073df;
    default: x86_unimpl("switch@0x1000726a out of table"); return;
  }
L_10007271:;
  /* 10007271 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 10007275 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10007278 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1000727b mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1000727e mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10007281 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10007284 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10007287 jmp 0x10007904 */
  goto L_10007904;
L_1000728c:;
  /* 1000728c movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1000728f sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10007292 je 0x100072cf */
  if (C.zf) goto L_100072cf;
  /* 10007294 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10007297 je 0x100072c6 */
  if (C.zf) goto L_100072c6;
  /* 10007299 sub eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000729c je 0x100072bd */
  if (C.zf) goto L_100072bd;
  /* 1000729e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1000729f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100072a0 je 0x100072b4 */
  if (C.zf) goto L_100072b4;
  /* 100072a2 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100072a5 jne 0x10007904 */
  if (!C.zf) goto L_10007904;
  /* 100072ab or dword ptr [ebp - 4], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x8u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100072af jmp 0x10007904 */
  goto L_10007904;
L_100072b4:;
  /* 100072b4 or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100072b8 jmp 0x10007904 */
  goto L_10007904;
L_100072bd:;
  /* 100072bd or dword ptr [ebp - 4], 1 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x1u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100072c1 jmp 0x10007904 */
  goto L_10007904;
L_100072c6:;
  /* 100072c6 or byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))|(0x80u); w8((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,8); }
  /* 100072ca jmp 0x10007904 */
  goto L_10007904;
L_100072cf:;
  /* 100072cf or dword ptr [ebp - 4], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x2u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100072d3 jmp 0x10007904 */
  goto L_10007904;
L_100072d8:;
  /* 100072d8 cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100072db jne 0x10007300 */
  if (!C.zf) goto L_10007300;
  /* 100072dd lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100072e0 push eax */
  push32((uint32_t)(EAX));
  /* 100072e1 call 0x100079db */
  push32(0x100072e6u); f_100079db();
  /* 100072e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100072e8 pop ecx */
  ECX = (pop32());
  /* 100072e9 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 100072ec jge 0x10007904 */
  if ((C.sf==C.of)) goto L_10007904;
  /* 100072f2 or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100072f6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_100072f8:;
  /* 100072f8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 100072fb jmp 0x10007904 */
  goto L_10007904;
L_10007300:;
  /* 10007300 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10007303 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10007306 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10007309 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 1000730d jmp 0x100072f8 */
  goto L_100072f8;
L_1000730f:;
  /* 1000730f mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10007312 jmp 0x10007904 */
  goto L_10007904;
L_10007317:;
  /* 10007317 cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000731a jne 0x1000733a */
  if (!C.zf) goto L_1000733a;
  /* 1000731c lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1000731f push eax */
  push32((uint32_t)(EAX));
  /* 10007320 call 0x100079db */
  push32(0x10007325u); f_100079db();
  /* 10007325 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10007327 pop ecx */
  ECX = (pop32());
  /* 10007328 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1000732b jge 0x10007904 */
  if ((C.sf==C.of)) goto L_10007904;
  /* 10007331 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 10007335 jmp 0x10007904 */
  goto L_10007904;
L_1000733a:;
  /* 1000733a lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 1000733d movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10007340 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 10007344 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10007347 jmp 0x10007904 */
  goto L_10007904;
L_1000734c:;
  /* 1000734c cmp bl, 0x49 */
  { uint32_t _a=(BL),_b=(0x49u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000734f je 0x1000737f */
  if (C.zf) goto L_1000737f;
  /* 10007351 cmp bl, 0x68 */
  { uint32_t _a=(BL),_b=(0x68u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10007354 je 0x10007376 */
  if (C.zf) goto L_10007376;
  /* 10007356 cmp bl, 0x6c */
  { uint32_t _a=(BL),_b=(0x6cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10007359 je 0x1000736d */
  if (C.zf) goto L_1000736d;
  /* 1000735b cmp bl, 0x77 */
  { uint32_t _a=(BL),_b=(0x77u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000735e jne 0x10007904 */
  if (!C.zf) goto L_10007904;
  /* 10007364 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10007368 jmp 0x10007904 */
  goto L_10007904;
L_1000736d:;
  /* 1000736d or dword ptr [ebp - 4], 0x10 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x10u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10007371 jmp 0x10007904 */
  goto L_10007904;
L_10007376:;
  /* 10007376 or dword ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x20u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1000737a jmp 0x10007904 */
  goto L_10007904;
L_1000737f:;
  /* 1000737f cmp byte ptr [edi], 0x36 */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10007382 jne 0x10007398 */
  if (!C.zf) goto L_10007398;
  /* 10007384 cmp byte ptr [edi + 1], 0x34 */
  { uint32_t _a=(r8((uint32_t)(EDI + 0x1))),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10007388 jne 0x10007398 */
  if (!C.zf) goto L_10007398;
  /* 1000738a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1000738b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1000738c or byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x80u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10007390 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 10007393 jmp 0x10007904 */
  goto L_10007904;
L_10007398:;
  /* 10007398 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_1000739b:;
  /* 1000739b mov ecx, dword ptr [0x100109e0] */
  ECX = (r32((uint32_t)(0x100109e0)));
  /* 100073a1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 100073a4 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100073a7 test byte ptr [ecx + eax*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 100073ac je 0x100073c7 */
  if (C.zf) goto L_100073c7;
  /* 100073ae lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100073b1 push eax */
  push32((uint32_t)(EAX));
  /* 100073b2 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100073b5 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100073b8 push eax */
  push32((uint32_t)(EAX));
  /* 100073b9 call 0x1000793d */
  push32(0x100073beu); f_1000793d();
  /* 100073be mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100073c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100073c3 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100073c4 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_100073c7:;
  /* 100073c7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100073ca push eax */
  push32((uint32_t)(EAX));
  /* 100073cb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100073ce movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100073d1 push eax */
  push32((uint32_t)(EAX));
  /* 100073d2 call 0x1000793d */
  push32(0x100073d7u); f_1000793d();
  /* 100073d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100073da jmp 0x10007904 */
  goto L_10007904;
L_100073df:;
  /* 100073df movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100073e2 cmp eax, 0x67 */
  { uint32_t _a=(EAX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100073e5 jg 0x10007607 */
  if ((!C.zf&&C.sf==C.of)) goto L_10007607;
  /* 100073eb cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100073ee jge 0x1000748a */
  if ((C.sf==C.of)) goto L_1000748a;
  /* 100073f4 cmp eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100073f7 jg 0x100074e8 */
  if ((!C.zf&&C.sf==C.of)) goto L_100074e8;
  /* 100073fd je 0x1000767b */
  if (C.zf) goto L_1000767b;
  /* 10007403 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10007406 je 0x100074ab */
  if (C.zf) goto L_100074ab;
  /* 1000740c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1000740d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1000740e je 0x10007480 */
  if (C.zf) goto L_10007480;
  /* 10007410 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10007411 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10007412 je 0x10007480 */
  if (C.zf) goto L_10007480;
  /* 10007414 sub eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10007417 jne 0x10007806 */
  if (!C.zf) goto L_10007806;
  /* 1000741d test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 10007423 jne 0x10007429 */
  if (!C.zf) goto L_10007429;
  /* 10007425 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_10007429:;
  /* 10007429 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 1000742c cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000742f jne 0x10007436 */
  if (!C.zf) goto L_10007436;
  /* 10007431 mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
L_10007436:;
  /* 10007436 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10007439 push eax */
  push32((uint32_t)(EAX));
  /* 1000743a call 0x100079db */
  push32(0x1000743fu); f_100079db();
  /* 1000743f test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 10007445 pop ecx */
  ECX = (pop32());
  /* 10007446 mov ecx, eax */
  ECX = (EAX);
  /* 10007448 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1000744b je 0x1000764f */
  if (C.zf) goto L_1000764f;
  /* 10007451 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10007453 jne 0x1000745e */
  if (!C.zf) goto L_1000745e;
  /* 10007455 mov ecx, dword ptr [0x10010680] */
  ECX = (r32((uint32_t)(0x10010680)));
  /* 1000745b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1000745e:;
  /* 1000745e mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10007465 mov eax, ecx */
  EAX = (ECX);
L_10007467:;
  /* 10007467 mov edx, esi */
  EDX = (ESI);
  /* 10007469 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1000746a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1000746c je 0x10007646 */
  if (C.zf) goto L_10007646;
  /* 10007472 cmp word ptr [eax], 0 */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10007476 je 0x10007646 */
  if (C.zf) goto L_10007646;
  /* 1000747c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1000747d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1000747e jmp 0x10007467 */
  goto L_10007467;
L_10007480:;
  /* 10007480 mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 10007487 add bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a+_b; BL = (_r); fl_add(_a,_b,_r,8); }
L_1000748a:;
  /* 1000748a or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1000748e lea edi, [ebp - 0x248] */
  EDI = ((uint32_t)(EBP + -0x248));
  /* 10007494 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007496 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 10007499 jge 0x1000756e */
  if ((C.sf==C.of)) goto L_1000756e;
  /* 1000749f mov dword ptr [ebp - 0x10], 6 */
  w32((uint32_t)(EBP + -0x10), (0x6u));
  /* 100074a6 jmp 0x1000757c */
  goto L_1000757c;
L_100074ab:;
  /* 100074ab test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 100074b1 jne 0x100074b7 */
  if (!C.zf) goto L_100074b7;
  /* 100074b3 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_100074b7:;
  /* 100074b7 test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 100074bd lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100074c0 push eax */
  push32((uint32_t)(EAX));
  /* 100074c1 je 0x100074fe */
  if (C.zf) goto L_100074fe;
  /* 100074c3 call 0x100079f8 */
  push32(0x100074c8u); f_100079f8();
  /* 100074c8 push eax */
  push32((uint32_t)(EAX));
  /* 100074c9 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 100074cf push eax */
  push32((uint32_t)(EAX));
  /* 100074d0 call 0x100090bb */
  push32(0x100074d5u); f_100090bb();
  /* 100074d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100074d8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 100074db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100074dd jge 0x10007511 */
  if ((C.sf==C.of)) goto L_10007511;
  /* 100074df mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 100074e6 jmp 0x10007511 */
  goto L_10007511;
L_100074e8:;
  /* 100074e8 sub eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100074eb je 0x1000751f */
  if (C.zf) goto L_1000751f;
  /* 100074ed sub eax, 9 */
  { uint32_t _a=(EAX),_b=(0x9u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100074f0 je 0x100074b7 */
  if (C.zf) goto L_100074b7;
  /* 100074f2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100074f3 je 0x100076e1 */
  if (C.zf) goto L_100076e1;
  /* 100074f9 jmp 0x10007806 */
  goto L_10007806;
L_100074fe:;
  /* 100074fe call 0x100079db */
  push32(0x10007503u); f_100079db();
  /* 10007503 pop ecx */
  ECX = (pop32());
  /* 10007504 mov byte ptr [ebp - 0x248], al */
  w8((uint32_t)(EBP + -0x248), (AL));
  /* 1000750a mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10007511:;
  /* 10007511 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 10007517 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1000751a jmp 0x10007806 */
  goto L_10007806;
L_1000751f:;
  /* 1000751f lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10007522 push eax */
  push32((uint32_t)(EAX));
  /* 10007523 call 0x100079db */
  push32(0x10007528u); f_100079db();
  /* 10007528 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000752a pop ecx */
  ECX = (pop32());
  /* 1000752b je 0x10007560 */
  if (C.zf) goto L_10007560;
  /* 1000752d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10007530 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10007532 je 0x10007560 */
  if (C.zf) goto L_10007560;
  /* 10007534 test byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x8u); fl_logic(_r,8); }
  /* 10007538 je 0x10007551 */
  if (C.zf) goto L_10007551;
  /* 1000753a movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 1000753d shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1000753f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10007542 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10007545 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1000754c jmp 0x10007806 */
  goto L_10007806;
L_10007551:;
  /* 10007551 and dword ptr [ebp - 0x24], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x24)))&(0x0u); w32((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,32); }
  /* 10007555 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10007558 movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 1000755b jmp 0x10007803 */
  goto L_10007803;
L_10007560:;
  /* 10007560 mov eax, dword ptr [0x1001067c] */
  EAX = (r32((uint32_t)(0x1001067c)));
  /* 10007565 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10007568 push eax */
  push32((uint32_t)(EAX));
  /* 10007569 jmp 0x100075fc */
  goto L_100075fc;
L_1000756e:;
  /* 1000756e jne 0x1000757c */
  if (!C.zf) goto L_1000757c;
  /* 10007570 cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10007573 jne 0x1000757c */
  if (!C.zf) goto L_1000757c;
  /* 10007575 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1000757c:;
  /* 1000757c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1000757f push dword ptr [ebp - 0x34] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x34))));
  /* 10007582 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10007585 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10007588 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 1000758b mov ecx, dword ptr [eax - 8] */
  ECX = (r32((uint32_t)(EAX + -0x8)));
  /* 1000758e mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
  /* 10007591 mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 10007594 mov dword ptr [ebp - 0x44], eax */
  w32((uint32_t)(EBP + -0x44), (EAX));
  /* 10007597 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1000759a push eax */
  push32((uint32_t)(EAX));
  /* 1000759b lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 100075a1 push eax */
  push32((uint32_t)(EAX));
  /* 100075a2 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 100075a5 push eax */
  push32((uint32_t)(EAX));
  /* 100075a6 call dword ptr [0x10010684] */
  call_ind((uint32_t)(r32((uint32_t)(0x10010684))), 0x100075acu);
  /* 100075ac mov esi, dword ptr [ebp - 4] */
  ESI = (r32((uint32_t)(EBP + -0x4)));
  /* 100075af add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100075b2 and esi, 0x80 */
  { uint32_t _r=(ESI)&(0x80u); ESI = (_r); fl_logic(_r,32); }
  /* 100075b8 je 0x100075ce */
  if (C.zf) goto L_100075ce;
  /* 100075ba cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100075be jne 0x100075ce */
  if (!C.zf) goto L_100075ce;
  /* 100075c0 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 100075c6 push eax */
  push32((uint32_t)(EAX));
  /* 100075c7 call dword ptr [0x10010690] */
  call_ind((uint32_t)(r32((uint32_t)(0x10010690))), 0x100075cdu);
  /* 100075cd pop ecx */
  ECX = (pop32());
L_100075ce:;
  /* 100075ce cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100075d1 jne 0x100075e5 */
  if (!C.zf) goto L_100075e5;
  /* 100075d3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100075d5 jne 0x100075e5 */
  if (!C.zf) goto L_100075e5;
  /* 100075d7 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 100075dd push eax */
  push32((uint32_t)(EAX));
  /* 100075de call dword ptr [0x10010688] */
  call_ind((uint32_t)(r32((uint32_t)(0x10010688))), 0x100075e4u);
  /* 100075e4 pop ecx */
  ECX = (pop32());
L_100075e5:;
  /* 100075e5 cmp byte ptr [ebp - 0x248], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x248))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100075ec jne 0x100075fb */
  if (!C.zf) goto L_100075fb;
  /* 100075ee or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 100075f2 lea edi, [ebp - 0x247] */
  EDI = ((uint32_t)(EBP + -0x247));
  /* 100075f8 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
L_100075fb:;
  /* 100075fb push edi */
  push32((uint32_t)(EDI));
L_100075fc:;
  /* 100075fc call 0x10009040 */
  push32(0x10007601u); f_10009040();
  /* 10007601 pop ecx */
  ECX = (pop32());
  /* 10007602 jmp 0x10007803 */
  goto L_10007803;
L_10007607:;
  /* 10007607 sub eax, 0x69 */
  { uint32_t _a=(EAX),_b=(0x69u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000760a je 0x100076e1 */
  if (C.zf) goto L_100076e1;
  /* 10007610 sub eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10007613 je 0x100076b7 */
  if (C.zf) goto L_100076b7;
  /* 10007619 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1000761a je 0x100076a4 */
  if (C.zf) goto L_100076a4;
  /* 10007620 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10007621 je 0x10007674 */
  if (C.zf) goto L_10007674;
  /* 10007623 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10007626 je 0x10007429 */
  if (C.zf) goto L_10007429;
  /* 1000762c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1000762d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1000762e je 0x100076e5 */
  if (C.zf) goto L_100076e5;
  /* 10007634 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10007637 jne 0x10007806 */
  if (!C.zf) goto L_10007806;
  /* 1000763d mov dword ptr [ebp - 0x2c], 0x27 */
  w32((uint32_t)(EBP + -0x2c), (0x27u));
  /* 10007644 jmp 0x10007682 */
  goto L_10007682;
L_10007646:;
  /* 10007646 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10007648 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1000764a jmp 0x10007803 */
  goto L_10007803;
L_1000764f:;
  /* 1000764f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10007651 jne 0x1000765c */
  if (!C.zf) goto L_1000765c;
  /* 10007653 mov ecx, dword ptr [0x1001067c] */
  ECX = (r32((uint32_t)(0x1001067c)));
  /* 10007659 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1000765c:;
  /* 1000765c mov eax, ecx */
  EAX = (ECX);
L_1000765e:;
  /* 1000765e mov edx, esi */
  EDX = (ESI);
  /* 10007660 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10007661 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10007663 je 0x1000766d */
  if (C.zf) goto L_1000766d;
  /* 10007665 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10007668 je 0x1000766d */
  if (C.zf) goto L_1000766d;
  /* 1000766a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1000766b jmp 0x1000765e */
  goto L_1000765e;
L_1000766d:;
  /* 1000766d sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000766f jmp 0x10007803 */
  goto L_10007803;
L_10007674:;
  /* 10007674 mov dword ptr [ebp - 0x10], 8 */
  w32((uint32_t)(EBP + -0x10), (0x8u));
L_1000767b:;
  /* 1000767b mov dword ptr [ebp - 0x2c], 7 */
  w32((uint32_t)(EBP + -0x2c), (0x7u));
L_10007682:;
  /* 10007682 test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 10007686 mov dword ptr [ebp - 0xc], 0x10 */
  w32((uint32_t)(EBP + -0xc), (0x10u));
  /* 1000768d je 0x100076ec */
  if (C.zf) goto L_100076ec;
  /* 1000768f mov al, byte ptr [ebp - 0x2c] */
  AL = (r8((uint32_t)(EBP + -0x2c)));
  /* 10007692 mov byte ptr [ebp - 0x16], 0x30 */
  w8((uint32_t)(EBP + -0x16), (0x30u));
  /* 10007696 add al, 0x51 */
  { uint32_t _a=(AL),_b=(0x51u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10007698 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 1000769f mov byte ptr [ebp - 0x15], al */
  w8((uint32_t)(EBP + -0x15), (AL));
  /* 100076a2 jmp 0x100076ec */
  goto L_100076ec;
L_100076a4:;
  /* 100076a4 test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 100076a8 mov dword ptr [ebp - 0xc], 8 */
  w32((uint32_t)(EBP + -0xc), (0x8u));
  /* 100076af je 0x100076ec */
  if (C.zf) goto L_100076ec;
  /* 100076b1 or byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x2u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 100076b5 jmp 0x100076ec */
  goto L_100076ec;
L_100076b7:;
  /* 100076b7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100076ba push eax */
  push32((uint32_t)(EAX));
  /* 100076bb call 0x100079db */
  push32(0x100076c0u); f_100079db();
  /* 100076c0 test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 100076c4 pop ecx */
  ECX = (pop32());
  /* 100076c5 je 0x100076d0 */
  if (C.zf) goto L_100076d0;
  /* 100076c7 mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 100076cb mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 100076ce jmp 0x100076d5 */
  goto L_100076d5;
L_100076d0:;
  /* 100076d0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 100076d3 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_100076d5:;
  /* 100076d5 mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 100076dc jmp 0x10007904 */
  goto L_10007904;
L_100076e1:;
  /* 100076e1 or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_100076e5:;
  /* 100076e5 mov dword ptr [ebp - 0xc], 0xa */
  w32((uint32_t)(EBP + -0xc), (0xau));
L_100076ec:;
  /* 100076ec test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 100076f0 je 0x100076fe */
  if (C.zf) goto L_100076fe;
  /* 100076f2 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100076f5 push eax */
  push32((uint32_t)(EAX));
  /* 100076f6 call 0x100079e8 */
  push32(0x100076fbu); f_100079e8();
  /* 100076fb pop ecx */
  ECX = (pop32());
  /* 100076fc jmp 0x1000773f */
  goto L_1000773f;
L_100076fe:;
  /* 100076fe test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 10007702 je 0x10007725 */
  if (C.zf) goto L_10007725;
  /* 10007704 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10007708 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1000770b push eax */
  push32((uint32_t)(EAX));
  /* 1000770c je 0x1000771a */
  if (C.zf) goto L_1000771a;
  /* 1000770e call 0x100079db */
  push32(0x10007713u); f_100079db();
  /* 10007713 pop ecx */
  ECX = (pop32());
  /* 10007714 movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
L_10007717:;
  /* 10007717 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10007718 jmp 0x1000773f */
  goto L_1000773f;
L_1000771a:;
  /* 1000771a call 0x100079db */
  push32(0x1000771fu); f_100079db();
  /* 1000771f pop ecx */
  ECX = (pop32());
  /* 10007720 movzx eax, ax */
  EAX = ((uint32_t)(AX));
  /* 10007723 jmp 0x10007717 */
  goto L_10007717;
L_10007725:;
  /* 10007725 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10007729 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1000772c push eax */
  push32((uint32_t)(EAX));
  /* 1000772d je 0x10007737 */
  if (C.zf) goto L_10007737;
  /* 1000772f call 0x100079db */
  push32(0x10007734u); f_100079db();
  /* 10007734 pop ecx */
  ECX = (pop32());
  /* 10007735 jmp 0x10007717 */
  goto L_10007717;
L_10007737:;
  /* 10007737 call 0x100079db */
  push32(0x1000773cu); f_100079db();
  /* 1000773c pop ecx */
  ECX = (pop32());
  /* 1000773d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_1000773f:;
  /* 1000773f test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10007743 je 0x10007760 */
  if (C.zf) goto L_10007760;
  /* 10007745 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10007747 jg 0x10007760 */
  if ((!C.zf&&C.sf==C.of)) goto L_10007760;
  /* 10007749 jl 0x1000774f */
  if ((C.sf!=C.of)) goto L_1000774f;
  /* 1000774b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000774d jae 0x10007760 */
  if (!C.cf) goto L_10007760;
L_1000774f:;
  /* 1000774f neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10007751 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10007754 mov esi, eax */
  ESI = (EAX);
  /* 10007756 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10007758 or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 1000775c mov edi, edx */
  EDI = (EDX);
  /* 1000775e jmp 0x10007764 */
  goto L_10007764;
L_10007760:;
  /* 10007760 mov esi, eax */
  ESI = (EAX);
  /* 10007762 mov edi, edx */
  EDI = (EDX);
L_10007764:;
  /* 10007764 test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 10007768 jne 0x1000776d */
  if (!C.zf) goto L_1000776d;
  /* 1000776a and edi, 0 */
  { uint32_t _r=(EDI)&(0x0u); EDI = (_r); fl_logic(_r,32); }
L_1000776d:;
  /* 1000776d cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007771 jge 0x1000777c */
  if ((C.sf==C.of)) goto L_1000777c;
  /* 10007773 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1000777a jmp 0x10007780 */
  goto L_10007780;
L_1000777c:;
  /* 1000777c and dword ptr [ebp - 4], 0xfffffff7 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0xfffffff7u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_10007780:;
  /* 10007780 mov eax, esi */
  EAX = (ESI);
  /* 10007782 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 10007784 jne 0x1000778a */
  if (!C.zf) goto L_1000778a;
  /* 10007786 and dword ptr [ebp - 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))&(0x0u); w32((uint32_t)(EBP + -0x1c), (_r)); fl_logic(_r,32); }
L_1000778a:;
  /* 1000778a lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 1000778d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10007790:;
  /* 10007790 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10007793 dec dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))-1; w32((uint32_t)(EBP + -0x10), (_r)); fl_dec(_r,32); }
  /* 10007796 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10007798 jg 0x100077a0 */
  if ((!C.zf&&C.sf==C.of)) goto L_100077a0;
  /* 1000779a mov eax, esi */
  EAX = (ESI);
  /* 1000779c or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 1000779e je 0x100077db */
  if (C.zf) goto L_100077db;
L_100077a0:;
  /* 100077a0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100077a3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100077a4 push edx */
  push32((uint32_t)(EDX));
  /* 100077a5 push eax */
  push32((uint32_t)(EAX));
  /* 100077a6 push edi */
  push32((uint32_t)(EDI));
  /* 100077a7 push esi */
  push32((uint32_t)(ESI));
  /* 100077a8 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 100077ab mov dword ptr [ebp - 0x3c], edx */
  w32((uint32_t)(EBP + -0x3c), (EDX));
  /* 100077ae call 0x100091f0 */
  push32(0x100077b3u); f_100091f0();
  /* 100077b3 push dword ptr [ebp - 0x3c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x3c))));
  /* 100077b6 mov ebx, eax */
  EBX = (EAX);
  /* 100077b8 add ebx, 0x30 */
  { uint32_t _a=(EBX),_b=(0x30u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 100077bb push dword ptr [ebp - 0x40] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x40))));
  /* 100077be push edi */
  push32((uint32_t)(EDI));
  /* 100077bf push esi */
  push32((uint32_t)(ESI));
  /* 100077c0 call 0x10009180 */
  push32(0x100077c5u); f_10009180();
  /* 100077c5 cmp ebx, 0x39 */
  { uint32_t _a=(EBX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100077c8 mov esi, eax */
  ESI = (EAX);
  /* 100077ca mov edi, edx */
  EDI = (EDX);
  /* 100077cc jle 0x100077d1 */
  if ((C.zf||C.sf!=C.of)) goto L_100077d1;
  /* 100077ce add ebx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
L_100077d1:;
  /* 100077d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 100077d4 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 100077d7 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 100077d9 jmp 0x10007790 */
  goto L_10007790;
L_100077db:;
  /* 100077db lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 100077de sub eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100077e1 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 100077e4 test byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x2u); fl_logic(_r,8); }
  /* 100077e8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 100077eb je 0x10007806 */
  if (C.zf) goto L_10007806;
  /* 100077ed mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 100077f0 cmp byte ptr [ecx], 0x30 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100077f3 jne 0x100077f9 */
  if (!C.zf) goto L_100077f9;
  /* 100077f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100077f7 jne 0x10007806 */
  if (!C.zf) goto L_10007806;
L_100077f9:;
  /* 100077f9 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 100077fc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100077fd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10007800 mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_10007803:;
  /* 10007803 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10007806:;
  /* 10007806 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000780a jne 0x10007904 */
  if (!C.zf) goto L_10007904;
  /* 10007810 mov ebx, dword ptr [ebp - 4] */
  EBX = (r32((uint32_t)(EBP + -0x4)));
  /* 10007813 test bl, 0x40 */
  { uint32_t _r=(BL)&(0x40u); fl_logic(_r,8); }
  /* 10007816 je 0x1000783e */
  if (C.zf) goto L_1000783e;
  /* 10007818 test bh, 1 */
  { uint32_t _r=(C.b.b.h)&(0x1u); fl_logic(_r,8); }
  /* 1000781b je 0x10007823 */
  if (C.zf) goto L_10007823;
  /* 1000781d mov byte ptr [ebp - 0x16], 0x2d */
  w8((uint32_t)(EBP + -0x16), (0x2du));
  /* 10007821 jmp 0x10007837 */
  goto L_10007837;
L_10007823:;
  /* 10007823 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 10007826 je 0x1000782e */
  if (C.zf) goto L_1000782e;
  /* 10007828 mov byte ptr [ebp - 0x16], 0x2b */
  w8((uint32_t)(EBP + -0x16), (0x2bu));
  /* 1000782c jmp 0x10007837 */
  goto L_10007837;
L_1000782e:;
  /* 1000782e test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 10007831 je 0x1000783e */
  if (C.zf) goto L_1000783e;
  /* 10007833 mov byte ptr [ebp - 0x16], 0x20 */
  w8((uint32_t)(EBP + -0x16), (0x20u));
L_10007837:;
  /* 10007837 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
L_1000783e:;
  /* 1000783e mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
  /* 10007841 sub esi, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10007844 sub esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10007847 test bl, 0xc */
  { uint32_t _r=(BL)&(0xcu); fl_logic(_r,8); }
  /* 1000784a jne 0x1000785e */
  if (!C.zf) goto L_1000785e;
  /* 1000784c lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1000784f push eax */
  push32((uint32_t)(EAX));
  /* 10007850 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10007853 push esi */
  push32((uint32_t)(ESI));
  /* 10007854 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10007856 call 0x10007972 */
  push32(0x1000785bu); f_10007972();
  /* 1000785b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1000785e:;
  /* 1000785e lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10007861 push eax */
  push32((uint32_t)(EAX));
  /* 10007862 lea eax, [ebp - 0x16] */
  EAX = ((uint32_t)(EBP + -0x16));
  /* 10007865 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10007868 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 1000786b push eax */
  push32((uint32_t)(EAX));
  /* 1000786c call 0x100079a3 */
  push32(0x10007871u); f_100079a3();
  /* 10007871 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10007874 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 10007877 je 0x10007890 */
  if (C.zf) goto L_10007890;
  /* 10007879 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 1000787c jne 0x10007890 */
  if (!C.zf) goto L_10007890;
  /* 1000787e lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10007881 push eax */
  push32((uint32_t)(EAX));
  /* 10007882 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10007885 push esi */
  push32((uint32_t)(ESI));
  /* 10007886 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10007888 call 0x10007972 */
  push32(0x1000788du); f_10007972();
  /* 1000788d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10007890:;
  /* 10007890 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007894 je 0x100078d7 */
  if (C.zf) goto L_100078d7;
  /* 10007896 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000789a jle 0x100078d7 */
  if ((C.zf||C.sf!=C.of)) goto L_100078d7;
  /* 1000789c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1000789f mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 100078a2 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
L_100078a5:;
  /* 100078a5 mov ax, word ptr [ebx] */
  AX = (r16((uint32_t)(EBX)));
  /* 100078a8 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100078a9 push eax */
  push32((uint32_t)(EAX));
  /* 100078aa lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 100078ad push eax */
  push32((uint32_t)(EAX));
  /* 100078ae inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100078af call 0x100090bb */
  push32(0x100078b4u); f_100090bb();
  /* 100078b4 pop ecx */
  ECX = (pop32());
  /* 100078b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100078b7 pop ecx */
  ECX = (pop32());
  /* 100078b8 jle 0x100078ec */
  if ((C.zf||C.sf!=C.of)) goto L_100078ec;
  /* 100078ba lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 100078bd push ecx */
  push32((uint32_t)(ECX));
  /* 100078be push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100078c1 push eax */
  push32((uint32_t)(EAX));
  /* 100078c2 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 100078c5 push eax */
  push32((uint32_t)(EAX));
  /* 100078c6 call 0x100079a3 */
  push32(0x100078cbu); f_100079a3();
  /* 100078cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100078ce mov eax, edi */
  EAX = (EDI);
  /* 100078d0 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100078d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100078d3 jne 0x100078a5 */
  if (!C.zf) goto L_100078a5;
  /* 100078d5 jmp 0x100078ec */
  goto L_100078ec;
L_100078d7:;
  /* 100078d7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100078da push eax */
  push32((uint32_t)(EAX));
  /* 100078db push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100078de push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 100078e1 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 100078e4 call 0x100079a3 */
  push32(0x100078e9u); f_100079a3();
  /* 100078e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100078ec:;
  /* 100078ec test byte ptr [ebp - 4], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x4u); fl_logic(_r,8); }
  /* 100078f0 je 0x10007904 */
  if (C.zf) goto L_10007904;
  /* 100078f2 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100078f5 push eax */
  push32((uint32_t)(EAX));
  /* 100078f6 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100078f9 push esi */
  push32((uint32_t)(ESI));
  /* 100078fa push 0x20 */
  push32((uint32_t)(0x20u));
  /* 100078fc call 0x10007972 */
  push32(0x10007901u); f_10007972();
  /* 10007901 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10007904:;
  /* 10007904 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10007907 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10007909 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1000790a test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 1000790c mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 1000790f jne 0x10007228 */
  if (!C.zf) goto L_10007228;
L_10007915:;
  /* 10007915 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10007918 pop edi */
  EDI = (pop32());
  /* 10007919 pop esi */
  ESI = (pop32());
  /* 1000791a pop ebx */
  EBX = (pop32());
  /* 1000791b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000791c ret  */
  ESPCHK(0x100071fcu, _esp0);
  ESP += 4; return;
}

/* FUN_1000793d @ 0x1000793d (53 bytes, 25 insns) */
void f_1000793d(void) {
  FTRACE(0x1000793du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000793d push ebp */
  push32((uint32_t)(EBP));
  /* 1000793e mov ebp, esp */
  EBP = (ESP);
  /* 10007940 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10007943 dec dword ptr [ecx + 4] */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))-1; w32((uint32_t)(ECX + 0x4), (_r)); fl_dec(_r,32); }
  /* 10007946 js 0x10007956 */
  if (C.sf) goto L_10007956;
  /* 10007948 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1000794a mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1000794d mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1000794f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10007951 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 10007954 jmp 0x10007961 */
  goto L_10007961;
L_10007956:;
  /* 10007956 push ecx */
  push32((uint32_t)(ECX));
  /* 10007957 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1000795a call 0x100070e4 */
  push32(0x1000795fu); f_100070e4();
  /* 1000795f pop ecx */
  ECX = (pop32());
  /* 10007960 pop ecx */
  ECX = (pop32());
L_10007961:;
  /* 10007961 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007964 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10007967 jne 0x1000796e */
  if (!C.zf) goto L_1000796e;
  /* 10007969 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1000796c pop ebp */
  EBP = (pop32());
  /* 1000796d ret  */
  ESPCHK(0x1000793du, _esp0);
  ESP += 4; return;
L_1000796e:;
  /* 1000796e inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 10007970 pop ebp */
  EBP = (pop32());
  /* 10007971 ret  */
  ESPCHK(0x1000793du, _esp0);
  ESP += 4; return;
}

/* FUN_10007972 @ 0x10007972 (49 bytes, 22 insns) */
void f_10007972(void) {
  FTRACE(0x10007972u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10007972 push esi */
  push32((uint32_t)(ESI));
  /* 10007973 push edi */
  push32((uint32_t)(EDI));
  /* 10007974 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10007978 mov eax, edi */
  EAX = (EDI);
  /* 1000797a dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1000797b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000797d jle 0x100079a0 */
  if ((C.zf||C.sf!=C.of)) goto L_100079a0;
  /* 1000797f mov esi, dword ptr [esp + 0x18] */
  ESI = (r32((uint32_t)(ESP + 0x18)));
L_10007983:;
  /* 10007983 push esi */
  push32((uint32_t)(ESI));
  /* 10007984 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10007988 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 1000798c call 0x1000793d */
  push32(0x10007991u); f_1000793d();
  /* 10007991 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10007994 cmp dword ptr [esi], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007997 je 0x100079a0 */
  if (C.zf) goto L_100079a0;
  /* 10007999 mov eax, edi */
  EAX = (EDI);
  /* 1000799b dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1000799c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000799e jg 0x10007983 */
  if ((!C.zf&&C.sf==C.of)) goto L_10007983;
L_100079a0:;
  /* 100079a0 pop edi */
  EDI = (pop32());
  /* 100079a1 pop esi */
  ESI = (pop32());
  /* 100079a2 ret  */
  ESPCHK(0x10007972u, _esp0);
  ESP += 4; return;
}

/* FUN_100079a3 @ 0x100079a3 (56 bytes, 27 insns) */
void f_100079a3(void) {
  FTRACE(0x100079a3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100079a3 push ebx */
  push32((uint32_t)(EBX));
  /* 100079a4 mov ebx, dword ptr [esp + 0xc] */
  EBX = (r32((uint32_t)(ESP + 0xc)));
  /* 100079a8 mov eax, ebx */
  EAX = (EBX);
  /* 100079aa dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100079ab push esi */
  push32((uint32_t)(ESI));
  /* 100079ac push edi */
  push32((uint32_t)(EDI));
  /* 100079ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100079af jle 0x100079d7 */
  if ((C.zf||C.sf!=C.of)) goto L_100079d7;
  /* 100079b1 mov edi, dword ptr [esp + 0x1c] */
  EDI = (r32((uint32_t)(ESP + 0x1c)));
  /* 100079b5 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
L_100079b9:;
  /* 100079b9 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 100079bc push edi */
  push32((uint32_t)(EDI));
  /* 100079bd inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100079be push dword ptr [esp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x1c))));
  /* 100079c2 push eax */
  push32((uint32_t)(EAX));
  /* 100079c3 call 0x1000793d */
  push32(0x100079c8u); f_1000793d();
  /* 100079c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100079cb cmp dword ptr [edi], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100079ce je 0x100079d7 */
  if (C.zf) goto L_100079d7;
  /* 100079d0 mov eax, ebx */
  EAX = (EBX);
  /* 100079d2 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100079d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100079d5 jg 0x100079b9 */
  if ((!C.zf&&C.sf==C.of)) goto L_100079b9;
L_100079d7:;
  /* 100079d7 pop edi */
  EDI = (pop32());
  /* 100079d8 pop esi */
  ESI = (pop32());
  /* 100079d9 pop ebx */
  EBX = (pop32());
  /* 100079da ret  */
  ESPCHK(0x100079a3u, _esp0);
  ESP += 4; return;
}

/* FUN_100079db @ 0x100079db (13 bytes, 5 insns) */
void f_100079db(void) {
  FTRACE(0x100079dbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100079db mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100079df add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 100079e2 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 100079e4 mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 100079e7 ret  */
  ESPCHK(0x100079dbu, _esp0);
  ESP += 4; return;
}

/* FUN_100079e8 @ 0x100079e8 (16 bytes, 6 insns) */
void f_100079e8(void) {
  FTRACE(0x100079e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100079e8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100079ec add dword ptr [eax], 8 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x8u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 100079ef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 100079f1 mov eax, dword ptr [ecx - 8] */
  EAX = (r32((uint32_t)(ECX + -0x8)));
  /* 100079f4 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 100079f7 ret  */
  ESPCHK(0x100079e8u, _esp0);
  ESP += 4; return;
}

/* FUN_100079f8 @ 0x100079f8 (14 bytes, 5 insns) */
void f_100079f8(void) {
  FTRACE(0x100079f8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100079f8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100079fc add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 100079ff mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 10007a01 mov ax, word ptr [eax - 4] */
  AX = (r16((uint32_t)(EAX + -0x4)));
  /* 10007a05 ret  */
  ESPCHK(0x100079f8u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a06 @ 0x10007a06 (18 bytes, 6 insns) */
void f_10007a06(void) {
  FTRACE(0x10007a06u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10007a06 push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 10007a0b push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 10007a10 call 0x1000929a */
  push32(0x10007a15u); f_1000929a();
  /* 10007a15 pop ecx */
  ECX = (pop32());
  /* 10007a16 pop ecx */
  ECX = (pop32());
  /* 10007a17 ret  */
  ESPCHK(0x10007a06u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a18 @ 0x10007a18 (62 bytes, 24 insns) */
void f_10007a18(void) {
  FTRACE(0x10007a18u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10007a18 push ebp */
  push32((uint32_t)(EBP));
  /* 10007a19 mov ebp, esp */
  EBP = (ESP);
  /* 10007a1b sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10007a1e fld qword ptr [0x1000e170] */
  fpu_push(rf64((uint32_t)(0x1000e170)));
  /* 10007a24 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 10007a27 fld qword ptr [0x1000e168] */
  fpu_push(rf64((uint32_t)(0x1000e168)));
  /* 10007a2d fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 10007a30 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 10007a33 fdiv qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x8)));
  /* 10007a36 fmul qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x8)));
  /* 10007a39 fsubr qword ptr [ebp - 0x10] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x10))) - FPU_ST(0);
  /* 10007a3c fstp qword ptr [ebp - 0x18] */
  wf64((uint32_t)(EBP + -0x18), FPU_ST(0));
  (void)fpu_pop();
  /* 10007a3f fld qword ptr [ebp - 0x18] */
  fpu_push(rf64((uint32_t)(EBP + -0x18)));
  /* 10007a42 fcomp qword ptr [0x1000e160] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x1000e160)));
  (void)fpu_pop();
  /* 10007a48 fnstsw ax */
  AX = fpu_status();
  /* 10007a4a sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10007a4b jbe 0x10007a52 */
  if ((C.cf||C.zf)) goto L_10007a52;
  /* 10007a4d push 1 */
  push32((uint32_t)(0x1u));
  /* 10007a4f pop eax */
  EAX = (pop32());
  /* 10007a50 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10007a51 ret  */
  ESPCHK(0x10007a18u, _esp0);
  ESP += 4; return;
L_10007a52:;
  /* 10007a52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10007a54 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10007a55 ret  */
  ESPCHK(0x10007a18u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a56 @ 0x10007a56 (41 bytes, 13 insns) */
void f_10007a56(void) {
  FTRACE(0x10007a56u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10007a56 push 0x1000e194 */
  push32((uint32_t)(0x1000e194u));
  /* 10007a5b call dword ptr [0x1000e004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e004))), 0x10007a61u);
  /* 10007a61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10007a63 je 0x10007a7a */
  if (C.zf) goto L_10007a7a;
  /* 10007a65 push 0x1000e178 */
  push32((uint32_t)(0x1000e178u));
  /* 10007a6a push eax */
  push32((uint32_t)(EAX));
  /* 10007a6b call dword ptr [0x1000e088] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e088))), 0x10007a71u);
  /* 10007a71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10007a73 je 0x10007a7a */
  if (C.zf) goto L_10007a7a;
  /* 10007a75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10007a77 call eax */
  call_ind((uint32_t)(EAX), 0x10007a79u);
  /* 10007a79 ret  */
  ESPCHK(0x10007a56u, _esp0);
  ESP += 4; return;
L_10007a7a:;
  /* 10007a7a jmp 0x10007a18 */
  f_10007a18(); return;
}

/* FUN_10007a7f @ 0x10007a7f (90 bytes, 37 insns) */
void f_10007a7f(void) {
  FTRACE(0x10007a7fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10007a7f push esi */
  push32((uint32_t)(ESI));
  /* 10007a80 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10007a84 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10007a87 push eax */
  push32((uint32_t)(EAX));
  /* 10007a88 call 0x10009440 */
  push32(0x10007a8du); f_10009440();
  /* 10007a8d cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007a90 pop ecx */
  ECX = (pop32());
  /* 10007a91 je 0x10007abf */
  if (C.zf) goto L_10007abf;
L_10007a93:;
  /* 10007a93 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10007a94 cmp dword ptr [0x10010bf0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10010bf0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007a9b jle 0x10007aac */
  if ((C.zf||C.sf!=C.of)) goto L_10007aac;
  /* 10007a9d movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10007aa0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10007aa2 push eax */
  push32((uint32_t)(EAX));
  /* 10007aa3 call 0x100093cb */
  push32(0x10007aa8u); f_100093cb();
  /* 10007aa8 pop ecx */
  ECX = (pop32());
  /* 10007aa9 pop ecx */
  ECX = (pop32());
  /* 10007aaa jmp 0x10007abb */
  goto L_10007abb;
L_10007aac:;
  /* 10007aac movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10007aaf mov ecx, dword ptr [0x100109e0] */
  ECX = (r32((uint32_t)(0x100109e0)));
  /* 10007ab5 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 10007ab8 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_10007abb:;
  /* 10007abb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10007abd jne 0x10007a93 */
  if (!C.zf) goto L_10007a93;
L_10007abf:;
  /* 10007abf mov cl, byte ptr [0x10010bf4] */
  CL = (r8((uint32_t)(0x10010bf4)));
  /* 10007ac5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10007ac7 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 10007ac9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10007aca:;
  /* 10007aca mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 10007acc mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
  /* 10007ace mov al, cl */
  AL = (CL);
  /* 10007ad0 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 10007ad2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10007ad3 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10007ad5 jne 0x10007aca */
  if (!C.zf) goto L_10007aca;
  /* 10007ad7 pop esi */
  ESI = (pop32());
  /* 10007ad8 ret  */
  ESPCHK(0x10007a7fu, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x10007b3f (62 bytes, 29 insns) */
void f_10007b3f(void) {
  FTRACE(0x10007b3fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10007b3f push ebp */
  push32((uint32_t)(EBP));
  /* 10007b40 mov ebp, esp */
  EBP = (ESP);
  /* 10007b42 push ecx */
  push32((uint32_t)(ECX));
  /* 10007b43 push ecx */
  push32((uint32_t)(ECX));
  /* 10007b44 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007b48 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10007b4b je 0x10007b68 */
  if (C.zf) goto L_10007b68;
  /* 10007b4d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10007b50 push eax */
  push32((uint32_t)(EAX));
  /* 10007b51 call 0x1000990c */
  push32(0x10007b56u); f_1000990c();
  /* 10007b56 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10007b59 pop ecx */
  ECX = (pop32());
  /* 10007b5a pop ecx */
  ECX = (pop32());
  /* 10007b5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10007b5e mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10007b60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10007b63 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10007b66 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10007b67 ret  */
  ESPCHK(0x10007b3fu, _esp0);
  ESP += 4; return;
L_10007b68:;
  /* 10007b68 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10007b6b push eax */
  push32((uint32_t)(EAX));
  /* 10007b6c call 0x10009939 */
  push32(0x10007b71u); f_10009939();
  /* 10007b71 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10007b74 pop ecx */
  ECX = (pop32());
  /* 10007b75 pop ecx */
  ECX = (pop32());
  /* 10007b76 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10007b79 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10007b7b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10007b7c ret  */
  ESPCHK(0x10007b3fu, _esp0);
  ESP += 4; return;
}

/* FUN_10007b7d @ 0x10007b7d (97 bytes, 42 insns) */
void f_10007b7d(void) {
  FTRACE(0x10007b7du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10007b7d push ebp */
  push32((uint32_t)(EBP));
  /* 10007b7e mov ebp, esp */
  EBP = (ESP);
  /* 10007b80 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10007b83 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10007b86 push esi */
  push32((uint32_t)(ESI));
  /* 10007b87 push eax */
  push32((uint32_t)(EAX));
  /* 10007b88 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10007b8b push eax */
  push32((uint32_t)(EAX));
  /* 10007b8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10007b8f push ecx */
  push32((uint32_t)(ECX));
  /* 10007b90 push ecx */
  push32((uint32_t)(ECX));
  /* 10007b91 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10007b93 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10007b96 call 0x100099dd */
  push32(0x10007b9bu); f_100099dd();
  /* 10007b9b mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10007b9e lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10007ba1 push eax */
  push32((uint32_t)(EAX));
  /* 10007ba2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10007ba5 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 10007ba8 push eax */
  push32((uint32_t)(EAX));
  /* 10007ba9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10007bab cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007baf sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10007bb2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10007bb4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10007bb6 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 10007bb9 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10007bbb add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10007bbd push ecx */
  push32((uint32_t)(ECX));
  /* 10007bbe call 0x10009966 */
  push32(0x10007bc3u); f_10009966();
  /* 10007bc3 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10007bc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10007bc8 push eax */
  push32((uint32_t)(EAX));
  /* 10007bc9 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10007bcc push esi */
  push32((uint32_t)(ESI));
  /* 10007bcd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10007bd0 call 0x10007bde */
  push32(0x10007bd5u); f_10007bde();
  /* 10007bd5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10007bd8 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10007bdb pop esi */
  ESI = (pop32());
  /* 10007bdc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10007bdd ret  */
  ESPCHK(0x10007b7du, _esp0);
  ESP += 4; return;
}

/* FUN_10007bde @ 0x10007bde (194 bytes, 91 insns) */
void f_10007bde(void) {
  FTRACE(0x10007bdeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10007bde push ebp */
  push32((uint32_t)(EBP));
  /* 10007bdf mov ebp, esp */
  EBP = (ESP);
  /* 10007be1 push ebx */
  push32((uint32_t)(EBX));
  /* 10007be2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10007be4 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10007be7 push esi */
  push32((uint32_t)(ESI));
  /* 10007be8 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 10007beb push edi */
  push32((uint32_t)(EDI));
  /* 10007bec mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10007bef je 0x10007c0c */
  if (C.zf) goto L_10007c0c;
  /* 10007bf1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10007bf3 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007bf6 setg al */
  AL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 10007bf9 push eax */
  push32((uint32_t)(EAX));
  /* 10007bfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10007bfc cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007bff sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10007c02 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10007c04 push eax */
  push32((uint32_t)(EAX));
  /* 10007c05 call 0x10007e80 */
  push32(0x10007c0au); f_10007e80();
  /* 10007c0a pop ecx */
  ECX = (pop32());
  /* 10007c0b pop ecx */
  ECX = (pop32());
L_10007c0c:;
  /* 10007c0c cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007c0f mov eax, edi */
  EAX = (EDI);
  /* 10007c11 jne 0x10007c19 */
  if (!C.zf) goto L_10007c19;
  /* 10007c13 mov byte ptr [edi], 0x2d */
  w8((uint32_t)(EDI), (0x2du));
  /* 10007c16 lea eax, [edi + 1] */
  EAX = ((uint32_t)(EDI + 0x1));
L_10007c19:;
  /* 10007c19 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007c1c jle 0x10007c30 */
  if ((C.zf||C.sf!=C.of)) goto L_10007c30;
  /* 10007c1e mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 10007c21 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 10007c24 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10007c26 mov eax, ecx */
  EAX = (ECX);
  /* 10007c28 mov cl, byte ptr [0x10010bf4] */
  CL = (r8((uint32_t)(0x10010bf4)));
  /* 10007c2e mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
L_10007c30:;
  /* 10007c30 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10007c32 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10007c35 push 0x1000e1a8 */
  push32((uint32_t)(0x1000e1a8u));
  /* 10007c3a sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10007c3d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10007c3f add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10007c42 push ecx */
  push32((uint32_t)(ECX));
  /* 10007c43 call 0x10009af0 */
  push32(0x10007c48u); f_10009af0();
  /* 10007c48 cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007c4b pop ecx */
  ECX = (pop32());
  /* 10007c4c pop ecx */
  ECX = (pop32());
  /* 10007c4d mov ecx, eax */
  ECX = (EAX);
  /* 10007c4f je 0x10007c54 */
  if (C.zf) goto L_10007c54;
  /* 10007c51 mov byte ptr [ecx], 0x45 */
  w8((uint32_t)(ECX), (0x45u));
L_10007c54:;
  /* 10007c54 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 10007c57 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10007c58 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10007c5b je 0x10007c99 */
  if (C.zf) goto L_10007c99;
  /* 10007c5d mov ebx, dword ptr [esi + 4] */
  EBX = (r32((uint32_t)(ESI + 0x4)));
  /* 10007c60 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10007c61 jns 0x10007c68 */
  if (!C.sf) goto L_10007c68;
  /* 10007c63 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 10007c65 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
L_10007c68:;
  /* 10007c68 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10007c69 cmp ebx, 0x64 */
  { uint32_t _a=(EBX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007c6c jl 0x10007c7f */
  if ((C.sf!=C.of)) goto L_10007c7f;
  /* 10007c6e mov eax, ebx */
  EAX = (EBX);
  /* 10007c70 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10007c72 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10007c73 pop esi */
  ESI = (pop32());
  /* 10007c74 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10007c76 add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10007c78 mov eax, ebx */
  EAX = (EBX);
  /* 10007c7a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10007c7b idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10007c7d mov ebx, edx */
  EBX = (EDX);
L_10007c7f:;
  /* 10007c7f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10007c80 cmp ebx, 0xa */
  { uint32_t _a=(EBX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007c83 jl 0x10007c96 */
  if ((C.sf!=C.of)) goto L_10007c96;
  /* 10007c85 mov eax, ebx */
  EAX = (EBX);
  /* 10007c87 push 0xa */
  push32((uint32_t)(0xau));
  /* 10007c89 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10007c8a pop esi */
  ESI = (pop32());
  /* 10007c8b idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10007c8d add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10007c8f mov eax, ebx */
  EAX = (EBX);
  /* 10007c91 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10007c92 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10007c94 mov ebx, edx */
  EBX = (EDX);
L_10007c96:;
  /* 10007c96 add byte ptr [ecx + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x1))),_b=(BL),_r=_a+_b; w8((uint32_t)(ECX + 0x1), (_r)); fl_add(_a,_b,_r,8); }
L_10007c99:;
  /* 10007c99 mov eax, edi */
  EAX = (EDI);
  /* 10007c9b pop edi */
  EDI = (pop32());
  /* 10007c9c pop esi */
  ESI = (pop32());
  /* 10007c9d pop ebx */
  EBX = (pop32());
  /* 10007c9e pop ebp */
  EBP = (pop32());
  /* 10007c9f ret  */
  ESPCHK(0x10007bdeu, _esp0);
  ESP += 4; return;
}

/* FUN_10007ca0 @ 0x10007ca0 (85 bytes, 37 insns) */
void f_10007ca0(void) {
  FTRACE(0x10007ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10007ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 10007ca1 mov ebp, esp */
  EBP = (ESP);
  /* 10007ca3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10007ca6 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10007ca9 push esi */
  push32((uint32_t)(ESI));
  /* 10007caa push eax */
  push32((uint32_t)(EAX));
  /* 10007cab lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10007cae push eax */
  push32((uint32_t)(EAX));
  /* 10007caf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10007cb2 push ecx */
  push32((uint32_t)(ECX));
  /* 10007cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10007cb4 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10007cb6 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10007cb9 call 0x100099dd */
  push32(0x10007cbeu); f_100099dd();
  /* 10007cbe mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10007cc1 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10007cc4 push eax */
  push32((uint32_t)(EAX));
  /* 10007cc5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10007cc8 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10007cca push eax */
  push32((uint32_t)(EAX));
  /* 10007ccb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10007ccd cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007cd1 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10007cd4 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10007cd7 push eax */
  push32((uint32_t)(EAX));
  /* 10007cd8 call 0x10009966 */
  push32(0x10007cddu); f_10009966();
  /* 10007cdd lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10007ce0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10007ce2 push eax */
  push32((uint32_t)(EAX));
  /* 10007ce3 push esi */
  push32((uint32_t)(ESI));
  /* 10007ce4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10007ce7 call 0x10007cf5 */
  push32(0x10007cecu); f_10007cf5();
  /* 10007cec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10007cef add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10007cf2 pop esi */
  ESI = (pop32());
  /* 10007cf3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10007cf4 ret  */
  ESPCHK(0x10007ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cf5 @ 0x10007cf5 (167 bytes, 73 insns) */
void f_10007cf5(void) {
  FTRACE(0x10007cf5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10007cf5 push ebp */
  push32((uint32_t)(EBP));
  /* 10007cf6 mov ebp, esp */
  EBP = (ESP);
  /* 10007cf8 push ebx */
  push32((uint32_t)(EBX));
  /* 10007cf9 push esi */
  push32((uint32_t)(ESI));
  /* 10007cfa mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10007cfd mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10007d00 push edi */
  push32((uint32_t)(EDI));
  /* 10007d01 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 10007d04 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10007d05 cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10007d09 je 0x10007d25 */
  if (C.zf) goto L_10007d25;
  /* 10007d0b cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007d0e jne 0x10007d25 */
  if (!C.zf) goto L_10007d25;
  /* 10007d10 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10007d12 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007d15 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10007d18 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10007d1a add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10007d1c mov eax, ecx */
  EAX = (ECX);
  /* 10007d1e mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 10007d21 and byte ptr [eax + 1], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1)))&(0x0u); w8((uint32_t)(EAX + 0x1), (_r)); fl_logic(_r,8); }
L_10007d25:;
  /* 10007d25 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007d28 mov edi, ebx */
  EDI = (EBX);
  /* 10007d2a jne 0x10007d32 */
  if (!C.zf) goto L_10007d32;
  /* 10007d2c mov byte ptr [ebx], 0x2d */
  w8((uint32_t)(EBX), (0x2du));
  /* 10007d2f lea edi, [ebx + 1] */
  EDI = ((uint32_t)(EBX + 0x1));
L_10007d32:;
  /* 10007d32 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 10007d35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10007d37 jg 0x10007d49 */
  if ((!C.zf&&C.sf==C.of)) goto L_10007d49;
  /* 10007d39 push 1 */
  push32((uint32_t)(0x1u));
  /* 10007d3b push edi */
  push32((uint32_t)(EDI));
  /* 10007d3c call 0x10007e80 */
  push32(0x10007d41u); f_10007e80();
  /* 10007d41 pop ecx */
  ECX = (pop32());
  /* 10007d42 mov byte ptr [edi], 0x30 */
  w8((uint32_t)(EDI), (0x30u));
  /* 10007d45 pop ecx */
  ECX = (pop32());
  /* 10007d46 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10007d47 jmp 0x10007d4b */
  goto L_10007d4b;
L_10007d49:;
  /* 10007d49 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10007d4b:;
  /* 10007d4b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007d4f jle 0x10007d95 */
  if ((C.zf||C.sf!=C.of)) goto L_10007d95;
  /* 10007d51 push 1 */
  push32((uint32_t)(0x1u));
  /* 10007d53 push edi */
  push32((uint32_t)(EDI));
  /* 10007d54 call 0x10007e80 */
  push32(0x10007d59u); f_10007e80();
  /* 10007d59 mov al, byte ptr [0x10010bf4] */
  AL = (r8((uint32_t)(0x10010bf4)));
  /* 10007d5e pop ecx */
  ECX = (pop32());
  /* 10007d5f mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10007d61 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 10007d64 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10007d65 pop ecx */
  ECX = (pop32());
  /* 10007d66 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10007d68 jge 0x10007d95 */
  if ((C.sf==C.of)) goto L_10007d95;
  /* 10007d6a cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10007d6e je 0x10007d74 */
  if (C.zf) goto L_10007d74;
  /* 10007d70 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 10007d72 jmp 0x10007d7b */
  goto L_10007d7b;
L_10007d74:;
  /* 10007d74 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 10007d76 cmp dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007d79 jl 0x10007d7e */
  if ((C.sf!=C.of)) goto L_10007d7e;
L_10007d7b:;
  /* 10007d7b mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_10007d7e:;
  /* 10007d7e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10007d81 push edi */
  push32((uint32_t)(EDI));
  /* 10007d82 call 0x10007e80 */
  push32(0x10007d87u); f_10007e80();
  /* 10007d87 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10007d8a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10007d8c push edi */
  push32((uint32_t)(EDI));
  /* 10007d8d call 0x10009be0 */
  push32(0x10007d92u); f_10009be0();
  /* 10007d92 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10007d95:;
  /* 10007d95 pop edi */
  EDI = (pop32());
  /* 10007d96 mov eax, ebx */
  EAX = (EBX);
  /* 10007d98 pop esi */
  ESI = (pop32());
  /* 10007d99 pop ebx */
  EBX = (pop32());
  /* 10007d9a pop ebp */
  EBP = (pop32());
  /* 10007d9b ret  */
  ESPCHK(0x10007cf5u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d9c @ 0x10007d9c (147 bytes, 66 insns) */
void f_10007d9c(void) {
  FTRACE(0x10007d9cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10007d9c push ebp */
  push32((uint32_t)(EBP));
  /* 10007d9d mov ebp, esp */
  EBP = (ESP);
  /* 10007d9f sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10007da2 push ebx */
  push32((uint32_t)(EBX));
  /* 10007da3 push esi */
  push32((uint32_t)(ESI));
  /* 10007da4 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10007da7 push edi */
  push32((uint32_t)(EDI));
  /* 10007da8 push eax */
  push32((uint32_t)(EAX));
  /* 10007da9 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10007dac push eax */
  push32((uint32_t)(EAX));
  /* 10007dad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10007db0 push ecx */
  push32((uint32_t)(ECX));
  /* 10007db1 push ecx */
  push32((uint32_t)(ECX));
  /* 10007db2 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10007db4 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10007db7 call 0x100099dd */
  push32(0x10007dbcu); f_100099dd();
  /* 10007dbc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10007dbf mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 10007dc2 lea esi, [eax - 1] */
  ESI = ((uint32_t)(EAX + -0x1));
  /* 10007dc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10007dc7 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007dcb sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10007dce add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10007dd1 mov edi, eax */
  EDI = (EAX);
  /* 10007dd3 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10007dd6 push eax */
  push32((uint32_t)(EAX));
  /* 10007dd7 push ebx */
  push32((uint32_t)(EBX));
  /* 10007dd8 push edi */
  push32((uint32_t)(EDI));
  /* 10007dd9 call 0x10009966 */
  push32(0x10007ddeu); f_10009966();
  /* 10007dde mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10007de1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10007de4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10007de5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007de7 setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 10007dea cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007ded jl 0x10007e15 */
  if ((C.sf!=C.of)) goto L_10007e15;
  /* 10007def cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007df1 jge 0x10007e15 */
  if ((C.sf==C.of)) goto L_10007e15;
  /* 10007df3 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10007df5 je 0x10007e01 */
  if (C.zf) goto L_10007e01;
L_10007df7:;
  /* 10007df7 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10007df9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10007dfa test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10007dfc jne 0x10007df7 */
  if (!C.zf) goto L_10007df7;
  /* 10007dfe and byte ptr [edi - 2], al */
  { uint32_t _r=(r8((uint32_t)(EDI + -0x2)))&(AL); w8((uint32_t)(EDI + -0x2), (_r)); fl_logic(_r,8); }
L_10007e01:;
  /* 10007e01 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10007e04 push 1 */
  push32((uint32_t)(0x1u));
  /* 10007e06 push eax */
  push32((uint32_t)(EAX));
  /* 10007e07 push ebx */
  push32((uint32_t)(EBX));
  /* 10007e08 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10007e0b call 0x10007cf5 */
  push32(0x10007e10u); f_10007cf5();
  /* 10007e10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10007e13 jmp 0x10007e2a */
  goto L_10007e2a;
L_10007e15:;
  /* 10007e15 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10007e18 push 1 */
  push32((uint32_t)(0x1u));
  /* 10007e1a push eax */
  push32((uint32_t)(EAX));
  /* 10007e1b push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10007e1e push ebx */
  push32((uint32_t)(EBX));
  /* 10007e1f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10007e22 call 0x10007bde */
  push32(0x10007e27u); f_10007bde();
  /* 10007e27 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10007e2a:;
  /* 10007e2a pop edi */
  EDI = (pop32());
  /* 10007e2b pop esi */
  ESI = (pop32());
  /* 10007e2c pop ebx */
  EBX = (pop32());
  /* 10007e2d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10007e2e ret  */
  ESPCHK(0x10007d9cu, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x10007e2f (81 bytes, 29 insns) */
void f_10007e2f(void) {
  FTRACE(0x10007e2fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10007e2f push ebp */
  push32((uint32_t)(EBP));
  /* 10007e30 mov ebp, esp */
  EBP = (ESP);
  /* 10007e32 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007e36 je 0x10007e6a */
  if (C.zf) goto L_10007e6a;
  /* 10007e38 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007e3c je 0x10007e6a */
  if (C.zf) goto L_10007e6a;
  /* 10007e3e cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007e42 jne 0x10007e57 */
  if (!C.zf) goto L_10007e57;
  /* 10007e44 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10007e47 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10007e4a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10007e4d call 0x10007ca0 */
  push32(0x10007e52u); f_10007ca0();
  /* 10007e52 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10007e55 pop ebp */
  EBP = (pop32());
  /* 10007e56 ret  */
  ESPCHK(0x10007e2fu, _esp0);
  ESP += 4; return;
L_10007e57:;
  /* 10007e57 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10007e5a push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10007e5d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10007e60 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10007e63 call 0x10007d9c */
  push32(0x10007e68u); f_10007d9c();
  /* 10007e68 jmp 0x10007e7b */
  goto L_10007e7b;
L_10007e6a:;
  /* 10007e6a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10007e6d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10007e70 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10007e73 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10007e76 call 0x10007b7d */
  push32(0x10007e7bu); f_10007b7d();
L_10007e7b:;
  /* 10007e7b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10007e7e pop ebp */
  EBP = (pop32());
  /* 10007e7f ret  */
  ESPCHK(0x10007e2fu, _esp0);
  ESP += 4; return;
}

/* FUN_10007e80 @ 0x10007e80 (37 bytes, 18 insns) */
void f_10007e80(void) {
  FTRACE(0x10007e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10007e80 push edi */
  push32((uint32_t)(EDI));
  /* 10007e81 mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 10007e85 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10007e87 je 0x10007ea3 */
  if (C.zf) goto L_10007ea3;
  /* 10007e89 push esi */
  push32((uint32_t)(ESI));
  /* 10007e8a mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 10007e8e push esi */
  push32((uint32_t)(ESI));
  /* 10007e8f call 0x10009040 */
  push32(0x10007e94u); f_10009040();
  /* 10007e94 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10007e95 push eax */
  push32((uint32_t)(EAX));
  /* 10007e96 push esi */
  push32((uint32_t)(ESI));
  /* 10007e97 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10007e99 push esi */
  push32((uint32_t)(ESI));
  /* 10007e9a call 0x10009c40 */
  push32(0x10007e9fu); f_10009c40();
  /* 10007e9f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10007ea2 pop esi */
  ESI = (pop32());
L_10007ea3:;
  /* 10007ea3 pop edi */
  EDI = (pop32());
  /* 10007ea4 ret  */
  ESPCHK(0x10007e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ea5 @ 0x10007ea5 (45 bytes, 12 insns) */
void f_10007ea5(void) {
  FTRACE(0x10007ea5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10007ea5 mov eax, dword ptr [0x1001066c] */
  EAX = (r32((uint32_t)(0x1001066c)));
  /* 10007eaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10007eac je 0x10007eb0 */
  if (C.zf) goto L_10007eb0;
  /* 10007eae call eax */
  call_ind((uint32_t)(EAX), 0x10007eb0u);
L_10007eb0:;
  /* 10007eb0 push 0x1000f014 */
  push32((uint32_t)(0x1000f014u));
  /* 10007eb5 push 0x1000f008 */
  push32((uint32_t)(0x1000f008u));
  /* 10007eba call 0x10007fa9 */
  push32(0x10007ebfu); f_10007fa9();
  /* 10007ebf push 0x1000f004 */
  push32((uint32_t)(0x1000f004u));
  /* 10007ec4 push 0x1000f000 */
  push32((uint32_t)(0x1000f000u));
  /* 10007ec9 call 0x10007fa9 */
  push32(0x10007eceu); f_10007fa9();
  /* 10007ece add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10007ed1 ret  */
  ESPCHK(0x10007ea5u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10007ed2 (17 bytes, 6 insns) */
void f_10007ed2(void) {
  FTRACE(0x10007ed2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10007ed2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10007ed4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10007ed6 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10007eda call 0x10007ef2 */
  push32(0x10007edfu); f_10007ef2();
  /* 10007edf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10007ee2 ret  */
  ESPCHK(0x10007ed2u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ee3 @ 0x10007ee3 (15 bytes, 6 insns) */
void f_10007ee3(void) {
  FTRACE(0x10007ee3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10007ee3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10007ee5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10007ee7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10007ee9 call 0x10007ef2 */
  push32(0x10007eeeu); f_10007ef2();
  /* 10007eee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10007ef1 ret  */
  ESPCHK(0x10007ee3u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ef2 @ 0x10007ef2 (163 bytes, 53 insns) */
void f_10007ef2(void) {
  FTRACE(0x10007ef2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10007ef2 push edi */
  push32((uint32_t)(EDI));
  /* 10007ef3 call 0x10007f97 */
  push32(0x10007ef8u); f_10007f97();
  /* 10007ef8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10007efa pop edi */
  EDI = (pop32());
  /* 10007efb cmp dword ptr [0x100166a8], edi */
  { uint32_t _a=(r32((uint32_t)(0x100166a8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007f01 jne 0x10007f14 */
  if (!C.zf) goto L_10007f14;
  /* 10007f03 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10007f07 call dword ptr [0x1000e020] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e020))), 0x10007f0du);
  /* 10007f0d push eax */
  push32((uint32_t)(EAX));
  /* 10007f0e call dword ptr [0x1000e01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e01c))), 0x10007f14u);
L_10007f14:;
  /* 10007f14 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007f19 push ebx */
  push32((uint32_t)(EBX));
  /* 10007f1a mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10007f1e mov dword ptr [0x100166a4], edi */
  w32((uint32_t)(0x100166a4), (EDI));
  /* 10007f24 mov byte ptr [0x100166a0], bl */
  w8((uint32_t)(0x100166a0), (BL));
  /* 10007f2a jne 0x10007f68 */
  if (!C.zf) goto L_10007f68;
  /* 10007f2c mov eax, dword ptr [0x10017d50] */
  EAX = (r32((uint32_t)(0x10017d50)));
  /* 10007f31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10007f33 je 0x10007f57 */
  if (C.zf) goto L_10007f57;
  /* 10007f35 mov ecx, dword ptr [0x10017d4c] */
  ECX = (r32((uint32_t)(0x10017d4c)));
  /* 10007f3b push esi */
  push32((uint32_t)(ESI));
  /* 10007f3c lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 10007f3f cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007f41 jb 0x10007f56 */
  if (C.cf) goto L_10007f56;
L_10007f43:;
  /* 10007f43 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10007f45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10007f47 je 0x10007f4b */
  if (C.zf) goto L_10007f4b;
  /* 10007f49 call eax */
  call_ind((uint32_t)(EAX), 0x10007f4bu);
L_10007f4b:;
  /* 10007f4b sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10007f4e cmp esi, dword ptr [0x10017d50] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10017d50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007f54 jae 0x10007f43 */
  if (!C.cf) goto L_10007f43;
L_10007f56:;
  /* 10007f56 pop esi */
  ESI = (pop32());
L_10007f57:;
  /* 10007f57 push 0x1000f020 */
  push32((uint32_t)(0x1000f020u));
  /* 10007f5c push 0x1000f018 */
  push32((uint32_t)(0x1000f018u));
  /* 10007f61 call 0x10007fa9 */
  push32(0x10007f66u); f_10007fa9();
  /* 10007f66 pop ecx */
  ECX = (pop32());
  /* 10007f67 pop ecx */
  ECX = (pop32());
L_10007f68:;
  /* 10007f68 push 0x1000f028 */
  push32((uint32_t)(0x1000f028u));
  /* 10007f6d push 0x1000f024 */
  push32((uint32_t)(0x1000f024u));
  /* 10007f72 call 0x10007fa9 */
  push32(0x10007f77u); f_10007fa9();
  /* 10007f77 pop ecx */
  ECX = (pop32());
  /* 10007f78 pop ecx */
  ECX = (pop32());
  /* 10007f79 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10007f7b pop ebx */
  EBX = (pop32());
  /* 10007f7c je 0x10007f85 */
  if (C.zf) goto L_10007f85;
  /* 10007f7e call 0x10007fa0 */
  push32(0x10007f83u); f_10007fa0();
  /* 10007f83 pop edi */
  EDI = (pop32());
  /* 10007f84 ret  */
  ESPCHK(0x10007ef2u, _esp0);
  ESP += 4; return;
L_10007f85:;
  /* 10007f85 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10007f89 mov dword ptr [0x100166a8], edi */
  w32((uint32_t)(0x100166a8), (EDI));
  /* 10007f8f call dword ptr [0x1000e018] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e018))), 0x10007f95u);
  /* 10007f95 pop edi */
  EDI = (pop32());
  /* 10007f96 ret  */
  ESPCHK(0x10007ef2u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f97 @ 0x10007f97 (9 bytes, 4 insns) */
void f_10007f97(void) {
  FTRACE(0x10007f97u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10007f97 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10007f99 call 0x1000a013 */
  push32(0x10007f9eu); f_1000a013();
  /* 10007f9e pop ecx */
  ECX = (pop32());
  /* 10007f9f ret  */
  ESPCHK(0x10007f97u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fa0 @ 0x10007fa0 (9 bytes, 4 insns) */
void f_10007fa0(void) {
  FTRACE(0x10007fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10007fa0 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10007fa2 call 0x1000a074 */
  push32(0x10007fa7u); f_1000a074();
  /* 10007fa7 pop ecx */
  ECX = (pop32());
  /* 10007fa8 ret  */
  ESPCHK(0x10007fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fa9 @ 0x10007fa9 (26 bytes, 12 insns) */
void f_10007fa9(void) {
  FTRACE(0x10007fa9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10007fa9 push esi */
  push32((uint32_t)(ESI));
  /* 10007faa mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_10007fae:;
  /* 10007fae cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007fb2 jae 0x10007fc1 */
  if (!C.cf) goto L_10007fc1;
  /* 10007fb4 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10007fb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10007fb8 je 0x10007fbc */
  if (C.zf) goto L_10007fbc;
  /* 10007fba call eax */
  call_ind((uint32_t)(EAX), 0x10007fbcu);
L_10007fbc:;
  /* 10007fbc add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10007fbf jmp 0x10007fae */
  goto L_10007fae;
L_10007fc1:;
  /* 10007fc1 pop esi */
  ESI = (pop32());
  /* 10007fc2 ret  */
  ESPCHK(0x10007fa9u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fc3 @ 0x10007fc3 (84 bytes, 32 insns) */
void f_10007fc3(void) {
  FTRACE(0x10007fc3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10007fc3 push esi */
  push32((uint32_t)(ESI));
  /* 10007fc4 call 0x10009f7e */
  push32(0x10007fc9u); f_10009f7e();
  /* 10007fc9 call dword ptr [0x1000e02c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e02c))), 0x10007fcfu);
  /* 10007fcf cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007fd2 mov dword ptr [0x1001069c], eax */
  w32((uint32_t)(0x1001069c), (EAX));
  /* 10007fd7 je 0x10008013 */
  if (C.zf) goto L_10008013;
  /* 10007fd9 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10007fdb push 1 */
  push32((uint32_t)(0x1u));
  /* 10007fdd call 0x1000a089 */
  push32(0x10007fe2u); f_1000a089();
  /* 10007fe2 mov esi, eax */
  ESI = (EAX);
  /* 10007fe4 pop ecx */
  ECX = (pop32());
  /* 10007fe5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10007fe7 pop ecx */
  ECX = (pop32());
  /* 10007fe8 je 0x10008013 */
  if (C.zf) goto L_10008013;
  /* 10007fea push esi */
  push32((uint32_t)(ESI));
  /* 10007feb push dword ptr [0x1001069c] */
  push32((uint32_t)(r32((uint32_t)(0x1001069c))));
  /* 10007ff1 call dword ptr [0x1000e028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e028))), 0x10007ff7u);
  /* 10007ff7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10007ff9 je 0x10008013 */
  if (C.zf) goto L_10008013;
  /* 10007ffb push esi */
  push32((uint32_t)(ESI));
  /* 10007ffc call 0x10008035 */
  push32(0x10008001u); f_10008035();
  /* 10008001 pop ecx */
  ECX = (pop32());
  /* 10008002 call dword ptr [0x1000e024] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e024))), 0x10008008u);
  /* 10008008 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1000800c push 1 */
  push32((uint32_t)(0x1u));
  /* 1000800e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10008010 pop eax */
  EAX = (pop32());
  /* 10008011 pop esi */
  ESI = (pop32());
  /* 10008012 ret  */
  ESPCHK(0x10007fc3u, _esp0);
  ESP += 4; return;
L_10008013:;
  /* 10008013 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10008015 pop esi */
  ESI = (pop32());
  /* 10008016 ret  */
  ESPCHK(0x10007fc3u, _esp0);
  ESP += 4; return;
}

/* FUN_10008017 @ 0x10008017 (30 bytes, 8 insns) */
void f_10008017(void) {
  FTRACE(0x10008017u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10008017 call 0x10009fa7 */
  push32(0x1000801cu); f_10009fa7();
  /* 1000801c mov eax, dword ptr [0x1001069c] */
  EAX = (r32((uint32_t)(0x1001069c)));
  /* 10008021 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008024 je 0x10008034 */
  if (C.zf) goto L_10008034;
  /* 10008026 push eax */
  push32((uint32_t)(EAX));
  /* 10008027 call dword ptr [0x1000e030] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e030))), 0x1000802du);
  /* 1000802d or dword ptr [0x1001069c], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x1001069c)))|(0xffffffffu); w32((uint32_t)(0x1001069c), (_r)); fl_logic(_r,32); }
L_10008034:;
  /* 10008034 ret  */
  ESPCHK(0x10008017u, _esp0);
  ESP += 4; return;
}

/* FUN_10008035 @ 0x10008035 (19 bytes, 4 insns) */
void f_10008035(void) {
  FTRACE(0x10008035u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10008035 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10008039 mov dword ptr [eax + 0x50], 0x10010cf0 */
  w32((uint32_t)(EAX + 0x50), (0x10010cf0u));
  /* 10008040 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 10008047 ret  */
  ESPCHK(0x10008035u, _esp0);
  ESP += 4; return;
}

/* FUN_10008048 @ 0x10008048 (103 bytes, 38 insns) */
void f_10008048(void) {
  FTRACE(0x10008048u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10008048 push esi */
  push32((uint32_t)(ESI));
  /* 10008049 push edi */
  push32((uint32_t)(EDI));
  /* 1000804a call dword ptr [0x1000e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e03c))), 0x10008050u);
  /* 10008050 push dword ptr [0x1001069c] */
  push32((uint32_t)(r32((uint32_t)(0x1001069c))));
  /* 10008056 mov edi, eax */
  EDI = (EAX);
  /* 10008058 call dword ptr [0x1000e038] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e038))), 0x1000805eu);
  /* 1000805e mov esi, eax */
  ESI = (EAX);
  /* 10008060 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10008062 jne 0x100080a3 */
  if (!C.zf) goto L_100080a3;
  /* 10008064 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10008066 push 1 */
  push32((uint32_t)(0x1u));
  /* 10008068 call 0x1000a089 */
  push32(0x1000806du); f_1000a089();
  /* 1000806d mov esi, eax */
  ESI = (EAX);
  /* 1000806f pop ecx */
  ECX = (pop32());
  /* 10008070 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10008072 pop ecx */
  ECX = (pop32());
  /* 10008073 je 0x1000809b */
  if (C.zf) goto L_1000809b;
  /* 10008075 push esi */
  push32((uint32_t)(ESI));
  /* 10008076 push dword ptr [0x1001069c] */
  push32((uint32_t)(r32((uint32_t)(0x1001069c))));
  /* 1000807c call dword ptr [0x1000e028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e028))), 0x10008082u);
  /* 10008082 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10008084 je 0x1000809b */
  if (C.zf) goto L_1000809b;
  /* 10008086 push esi */
  push32((uint32_t)(ESI));
  /* 10008087 call 0x10008035 */
  push32(0x1000808cu); f_10008035();
  /* 1000808c pop ecx */
  ECX = (pop32());
  /* 1000808d call dword ptr [0x1000e024] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e024))), 0x10008093u);
  /* 10008093 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10008097 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10008099 jmp 0x100080a3 */
  goto L_100080a3;
L_1000809b:;
  /* 1000809b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1000809d call 0x100070b1 */
  push32(0x100080a2u); f_100070b1();
  /* 100080a2 pop ecx */
  ECX = (pop32());
L_100080a3:;
  /* 100080a3 push edi */
  push32((uint32_t)(EDI));
  /* 100080a4 call dword ptr [0x1000e034] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e034))), 0x100080aau);
  /* 100080aa mov eax, esi */
  EAX = (ESI);
  /* 100080ac pop edi */
  EDI = (pop32());
  /* 100080ad pop esi */
  ESI = (pop32());
  /* 100080ae ret  */
  ESPCHK(0x10008048u, _esp0);
  ESP += 4; return;
}

/* FUN_100080af @ 0x100080af (160 bytes, 62 insns) */
void f_100080af(void) {
  FTRACE(0x100080afu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100080af mov eax, dword ptr [0x1001069c] */
  EAX = (r32((uint32_t)(0x1001069c)));
  /* 100080b4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100080b7 je 0x1000814e */
  if (C.zf) goto L_1000814e;
  /* 100080bd push esi */
  push32((uint32_t)(ESI));
  /* 100080be mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100080c2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100080c4 jne 0x100080d3 */
  if (!C.zf) goto L_100080d3;
  /* 100080c6 push eax */
  push32((uint32_t)(EAX));
  /* 100080c7 call dword ptr [0x1000e038] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e038))), 0x100080cdu);
  /* 100080cd mov esi, eax */
  ESI = (EAX);
  /* 100080cf test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100080d1 je 0x1000813f */
  if (C.zf) goto L_1000813f;
L_100080d3:;
  /* 100080d3 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 100080d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100080d8 je 0x100080e1 */
  if (C.zf) goto L_100080e1;
  /* 100080da push eax */
  push32((uint32_t)(EAX));
  /* 100080db call 0x1000a1c6 */
  push32(0x100080e0u); f_1000a1c6();
  /* 100080e0 pop ecx */
  ECX = (pop32());
L_100080e1:;
  /* 100080e1 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 100080e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100080e6 je 0x100080ef */
  if (C.zf) goto L_100080ef;
  /* 100080e8 push eax */
  push32((uint32_t)(EAX));
  /* 100080e9 call 0x1000a1c6 */
  push32(0x100080eeu); f_1000a1c6();
  /* 100080ee pop ecx */
  ECX = (pop32());
L_100080ef:;
  /* 100080ef mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 100080f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100080f4 je 0x100080fd */
  if (C.zf) goto L_100080fd;
  /* 100080f6 push eax */
  push32((uint32_t)(EAX));
  /* 100080f7 call 0x1000a1c6 */
  push32(0x100080fcu); f_1000a1c6();
  /* 100080fc pop ecx */
  ECX = (pop32());
L_100080fd:;
  /* 100080fd mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 10008100 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10008102 je 0x1000810b */
  if (C.zf) goto L_1000810b;
  /* 10008104 push eax */
  push32((uint32_t)(EAX));
  /* 10008105 call 0x1000a1c6 */
  push32(0x1000810au); f_1000a1c6();
  /* 1000810a pop ecx */
  ECX = (pop32());
L_1000810b:;
  /* 1000810b mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 1000810e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10008110 je 0x10008119 */
  if (C.zf) goto L_10008119;
  /* 10008112 push eax */
  push32((uint32_t)(EAX));
  /* 10008113 call 0x1000a1c6 */
  push32(0x10008118u); f_1000a1c6();
  /* 10008118 pop ecx */
  ECX = (pop32());
L_10008119:;
  /* 10008119 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 1000811c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000811e je 0x10008127 */
  if (C.zf) goto L_10008127;
  /* 10008120 push eax */
  push32((uint32_t)(EAX));
  /* 10008121 call 0x1000a1c6 */
  push32(0x10008126u); f_1000a1c6();
  /* 10008126 pop ecx */
  ECX = (pop32());
L_10008127:;
  /* 10008127 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 1000812a cmp eax, 0x10010cf0 */
  { uint32_t _a=(EAX),_b=(0x10010cf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000812f je 0x10008138 */
  if (C.zf) goto L_10008138;
  /* 10008131 push eax */
  push32((uint32_t)(EAX));
  /* 10008132 call 0x1000a1c6 */
  push32(0x10008137u); f_1000a1c6();
  /* 10008137 pop ecx */
  ECX = (pop32());
L_10008138:;
  /* 10008138 push esi */
  push32((uint32_t)(ESI));
  /* 10008139 call 0x1000a1c6 */
  push32(0x1000813eu); f_1000a1c6();
  /* 1000813e pop ecx */
  ECX = (pop32());
L_1000813f:;
  /* 1000813f push 0 */
  push32((uint32_t)(0x0u));
  /* 10008141 push dword ptr [0x1001069c] */
  push32((uint32_t)(r32((uint32_t)(0x1001069c))));
  /* 10008147 call dword ptr [0x1000e028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e028))), 0x1000814du);
  /* 1000814d pop esi */
  ESI = (pop32());
L_1000814e:;
  /* 1000814e ret  */
  ESPCHK(0x100080afu, _esp0);
  ESP += 4; return;
}

/* FUN_1000814f @ 0x1000814f (444 bytes, 150 insns) */
void f_1000814f(void) {
  FTRACE(0x1000814fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000814f push ebp */
  push32((uint32_t)(EBP));
  /* 10008150 mov ebp, esp */
  EBP = (ESP);
  /* 10008152 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10008155 push ebx */
  push32((uint32_t)(EBX));
  /* 10008156 push esi */
  push32((uint32_t)(ESI));
  /* 10008157 push edi */
  push32((uint32_t)(EDI));
  /* 10008158 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1000815d call 0x1000a2af */
  push32(0x10008162u); f_1000a2af();
  /* 10008162 mov esi, eax */
  ESI = (EAX);
  /* 10008164 pop ecx */
  ECX = (pop32());
  /* 10008165 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10008167 jne 0x10008171 */
  if (!C.zf) goto L_10008171;
  /* 10008169 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1000816b call 0x100070b1 */
  push32(0x10008170u); f_100070b1();
  /* 10008170 pop ecx */
  ECX = (pop32());
L_10008171:;
  /* 10008171 mov dword ptr [0x10017c40], esi */
  w32((uint32_t)(0x10017c40), (ESI));
  /* 10008177 mov dword ptr [0x10017d40], 0x20 */
  w32((uint32_t)(0x10017d40), (0x20u));
  /* 10008181 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_10008187:;
  /* 10008187 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008189 jae 0x100081a9 */
  if (!C.cf) goto L_100081a9;
  /* 1000818b and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 1000818f or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 10008192 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 10008196 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 1000819a mov eax, dword ptr [0x10017c40] */
  EAX = (r32((uint32_t)(0x10017c40)));
  /* 1000819f add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100081a2 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100081a7 jmp 0x10008187 */
  goto L_10008187;
L_100081a9:;
  /* 100081a9 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 100081ac push eax */
  push32((uint32_t)(EAX));
  /* 100081ad call dword ptr [0x1000e04c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e04c))), 0x100081b3u);
  /* 100081b3 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100081b8 je 0x1000828f */
  if (C.zf) goto L_1000828f;
  /* 100081be mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 100081c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100081c3 je 0x1000828f */
  if (C.zf) goto L_1000828f;
  /* 100081c9 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 100081cb lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 100081ce lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 100081d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 100081d4 mov eax, 0x800 */
  EAX = (0x800u);
  /* 100081d9 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100081db jl 0x100081df */
  if ((C.sf!=C.of)) goto L_100081df;
  /* 100081dd mov edi, eax */
  EDI = (EAX);
L_100081df:;
  /* 100081df cmp dword ptr [0x10017d40], edi */
  { uint32_t _a=(r32((uint32_t)(0x10017d40))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100081e5 jge 0x1000823d */
  if ((C.sf==C.of)) goto L_1000823d;
  /* 100081e7 mov esi, 0x10017c44 */
  ESI = (0x10017c44u);
L_100081ec:;
  /* 100081ec push 0x480 */
  push32((uint32_t)(0x480u));
  /* 100081f1 call 0x1000a2af */
  push32(0x100081f6u); f_1000a2af();
  /* 100081f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100081f8 pop ecx */
  ECX = (pop32());
  /* 100081f9 je 0x10008237 */
  if (C.zf) goto L_10008237;
  /* 100081fb add dword ptr [0x10017d40], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10017d40))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x10017d40), (_r)); fl_add(_a,_b,_r,32); }
  /* 10008202 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10008204 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_1000820a:;
  /* 1000820a cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000820c jae 0x1000822a */
  if (!C.cf) goto L_1000822a;
  /* 1000820e and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 10008212 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10008215 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10008219 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 1000821d mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1000821f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10008222 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10008228 jmp 0x1000820a */
  goto L_1000820a;
L_1000822a:;
  /* 1000822a add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1000822d cmp dword ptr [0x10017d40], edi */
  { uint32_t _a=(r32((uint32_t)(0x10017d40))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008233 jl 0x100081ec */
  if ((C.sf!=C.of)) goto L_100081ec;
  /* 10008235 jmp 0x1000823d */
  goto L_1000823d;
L_10008237:;
  /* 10008237 mov edi, dword ptr [0x10017d40] */
  EDI = (r32((uint32_t)(0x10017d40)));
L_1000823d:;
  /* 1000823d xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1000823f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10008241 jle 0x1000828f */
  if ((C.zf||C.sf!=C.of)) goto L_1000828f;
L_10008243:;
  /* 10008243 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10008246 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10008248 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000824b je 0x10008285 */
  if (C.zf) goto L_10008285;
  /* 1000824d mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 1000824f test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 10008251 je 0x10008285 */
  if (C.zf) goto L_10008285;
  /* 10008253 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 10008255 jne 0x10008262 */
  if (!C.zf) goto L_10008262;
  /* 10008257 push ecx */
  push32((uint32_t)(ECX));
  /* 10008258 call dword ptr [0x1000e048] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e048))), 0x1000825eu);
  /* 1000825e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10008260 je 0x10008285 */
  if (C.zf) goto L_10008285;
L_10008262:;
  /* 10008262 mov ecx, esi */
  ECX = (ESI);
  /* 10008264 mov eax, esi */
  EAX = (ESI);
  /* 10008266 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10008269 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1000826c mov ecx, dword ptr [ecx*4 + 0x10017c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10017c40)));
  /* 10008273 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10008276 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 10008279 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1000827c mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 1000827e mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10008280 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 10008282 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_10008285:;
  /* 10008285 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 10008289 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1000828a inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1000828b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000828d jl 0x10008243 */
  if ((C.sf!=C.of)) goto L_10008243;
L_1000828f:;
  /* 1000828f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10008291:;
  /* 10008291 mov ecx, dword ptr [0x10017c40] */
  ECX = (r32((uint32_t)(0x10017c40)));
  /* 10008297 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 1000829a cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000829e lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 100082a1 jne 0x100082f0 */
  if (!C.zf) goto L_100082f0;
  /* 100082a3 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100082a5 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 100082a9 jne 0x100082b0 */
  if (!C.zf) goto L_100082b0;
  /* 100082ab push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 100082ad pop eax */
  EAX = (pop32());
  /* 100082ae jmp 0x100082ba */
  goto L_100082ba;
L_100082b0:;
  /* 100082b0 mov eax, ebx */
  EAX = (EBX);
  /* 100082b2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100082b3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 100082b5 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100082b7 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_100082ba:;
  /* 100082ba push eax */
  push32((uint32_t)(EAX));
  /* 100082bb call dword ptr [0x1000e044] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e044))), 0x100082c1u);
  /* 100082c1 mov edi, eax */
  EDI = (EAX);
  /* 100082c3 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100082c6 je 0x100082df */
  if (C.zf) goto L_100082df;
  /* 100082c8 push edi */
  push32((uint32_t)(EDI));
  /* 100082c9 call dword ptr [0x1000e048] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e048))), 0x100082cfu);
  /* 100082cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100082d1 je 0x100082df */
  if (C.zf) goto L_100082df;
  /* 100082d3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 100082d8 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 100082da cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100082dd jne 0x100082e5 */
  if (!C.zf) goto L_100082e5;
L_100082df:;
  /* 100082df or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 100082e3 jmp 0x100082f4 */
  goto L_100082f4;
L_100082e5:;
  /* 100082e5 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100082e8 jne 0x100082f4 */
  if (!C.zf) goto L_100082f4;
  /* 100082ea or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 100082ee jmp 0x100082f4 */
  goto L_100082f4;
L_100082f0:;
  /* 100082f0 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_100082f4:;
  /* 100082f4 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100082f5 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100082f8 jl 0x10008291 */
  if ((C.sf!=C.of)) goto L_10008291;
  /* 100082fa push dword ptr [0x10017d40] */
  push32((uint32_t)(r32((uint32_t)(0x10017d40))));
  /* 10008300 call dword ptr [0x1000e040] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e040))), 0x10008306u);
  /* 10008306 pop edi */
  EDI = (pop32());
  /* 10008307 pop esi */
  ESI = (pop32());
  /* 10008308 pop ebx */
  EBX = (pop32());
  /* 10008309 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000830a ret  */
  ESPCHK(0x1000814fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000830b @ 0x1000830b (84 bytes, 33 insns) */
void f_1000830b(void) {
  FTRACE(0x1000830bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000830b push ebx */
  push32((uint32_t)(EBX));
  /* 1000830c push esi */
  push32((uint32_t)(ESI));
  /* 1000830d push edi */
  push32((uint32_t)(EDI));
  /* 1000830e mov esi, 0x10017c40 */
  ESI = (0x10017c40u);
L_10008313:;
  /* 10008313 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10008315 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10008317 je 0x10008350 */
  if (C.zf) goto L_10008350;
  /* 10008319 mov edi, eax */
  EDI = (EAX);
  /* 1000831b add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10008320 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008322 jae 0x10008345 */
  if (!C.cf) goto L_10008345;
  /* 10008324 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_10008327:;
  /* 10008327 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000832b je 0x10008334 */
  if (C.zf) goto L_10008334;
  /* 1000832d push ebx */
  push32((uint32_t)(EBX));
  /* 1000832e call dword ptr [0x1000e050] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e050))), 0x10008334u);
L_10008334:;
  /* 10008334 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10008336 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10008339 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000833e add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10008341 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008343 jb 0x10008327 */
  if (C.cf) goto L_10008327;
L_10008345:;
  /* 10008345 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10008347 call 0x1000a1c6 */
  push32(0x1000834cu); f_1000a1c6();
  /* 1000834c and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 1000834f pop ecx */
  ECX = (pop32());
L_10008350:;
  /* 10008350 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10008353 cmp esi, 0x10017d40 */
  { uint32_t _a=(ESI),_b=(0x10017d40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008359 jl 0x10008313 */
  if ((C.sf!=C.of)) goto L_10008313;
  /* 1000835b pop edi */
  EDI = (pop32());
  /* 1000835c pop esi */
  ESI = (pop32());
  /* 1000835d pop ebx */
  EBX = (pop32());
  /* 1000835e ret  */
  ESPCHK(0x1000830bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000835f @ 0x1000835f (185 bytes, 71 insns) */
void f_1000835f(void) {
  FTRACE(0x1000835fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000835f push ebx */
  push32((uint32_t)(EBX));
  /* 10008360 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10008362 cmp dword ptr [0x10017d48], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10017d48))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008368 push esi */
  push32((uint32_t)(ESI));
  /* 10008369 push edi */
  push32((uint32_t)(EDI));
  /* 1000836a jne 0x10008371 */
  if (!C.zf) goto L_10008371;
  /* 1000836c call 0x1000a7c1 */
  push32(0x10008371u); f_1000a7c1();
L_10008371:;
  /* 10008371 mov esi, dword ptr [0x10016658] */
  ESI = (r32((uint32_t)(0x10016658)));
  /* 10008377 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10008379:;
  /* 10008379 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1000837b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000837d je 0x10008391 */
  if (C.zf) goto L_10008391;
  /* 1000837f cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10008381 je 0x10008384 */
  if (C.zf) goto L_10008384;
  /* 10008383 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10008384:;
  /* 10008384 push esi */
  push32((uint32_t)(ESI));
  /* 10008385 call 0x10009040 */
  push32(0x1000838au); f_10009040();
  /* 1000838a pop ecx */
  ECX = (pop32());
  /* 1000838b lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 1000838f jmp 0x10008379 */
  goto L_10008379;
L_10008391:;
  /* 10008391 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 10008398 push eax */
  push32((uint32_t)(EAX));
  /* 10008399 call 0x1000a2af */
  push32(0x1000839eu); f_1000a2af();
  /* 1000839e mov esi, eax */
  ESI = (EAX);
  /* 100083a0 pop ecx */
  ECX = (pop32());
  /* 100083a1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100083a3 mov dword ptr [0x10016688], esi */
  w32((uint32_t)(0x10016688), (ESI));
  /* 100083a9 jne 0x100083b3 */
  if (!C.zf) goto L_100083b3;
  /* 100083ab push 9 */
  push32((uint32_t)(0x9u));
  /* 100083ad call 0x100070b1 */
  push32(0x100083b2u); f_100070b1();
  /* 100083b2 pop ecx */
  ECX = (pop32());
L_100083b3:;
  /* 100083b3 mov edi, dword ptr [0x10016658] */
  EDI = (r32((uint32_t)(0x10016658)));
  /* 100083b9 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100083bb je 0x100083f6 */
  if (C.zf) goto L_100083f6;
  /* 100083bd push ebp */
  push32((uint32_t)(EBP));
L_100083be:;
  /* 100083be push edi */
  push32((uint32_t)(EDI));
  /* 100083bf call 0x10009040 */
  push32(0x100083c4u); f_10009040();
  /* 100083c4 mov ebp, eax */
  EBP = (EAX);
  /* 100083c6 pop ecx */
  ECX = (pop32());
  /* 100083c7 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 100083c8 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100083cb je 0x100083ef */
  if (C.zf) goto L_100083ef;
  /* 100083cd push ebp */
  push32((uint32_t)(EBP));
  /* 100083ce call 0x1000a2af */
  push32(0x100083d3u); f_1000a2af();
  /* 100083d3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100083d5 pop ecx */
  ECX = (pop32());
  /* 100083d6 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 100083d8 jne 0x100083e2 */
  if (!C.zf) goto L_100083e2;
  /* 100083da push 9 */
  push32((uint32_t)(0x9u));
  /* 100083dc call 0x100070b1 */
  push32(0x100083e1u); f_100070b1();
  /* 100083e1 pop ecx */
  ECX = (pop32());
L_100083e2:;
  /* 100083e2 push edi */
  push32((uint32_t)(EDI));
  /* 100083e3 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 100083e5 call 0x10009af0 */
  push32(0x100083eau); f_10009af0();
  /* 100083ea pop ecx */
  ECX = (pop32());
  /* 100083eb add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100083ee pop ecx */
  ECX = (pop32());
L_100083ef:;
  /* 100083ef add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100083f1 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100083f3 jne 0x100083be */
  if (!C.zf) goto L_100083be;
  /* 100083f5 pop ebp */
  EBP = (pop32());
L_100083f6:;
  /* 100083f6 push dword ptr [0x10016658] */
  push32((uint32_t)(r32((uint32_t)(0x10016658))));
  /* 100083fc call 0x1000a1c6 */
  push32(0x10008401u); f_1000a1c6();
  /* 10008401 pop ecx */
  ECX = (pop32());
  /* 10008402 mov dword ptr [0x10016658], ebx */
  w32((uint32_t)(0x10016658), (EBX));
  /* 10008408 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 1000840a pop edi */
  EDI = (pop32());
  /* 1000840b pop esi */
  ESI = (pop32());
  /* 1000840c mov dword ptr [0x10017d44], 1 */
  w32((uint32_t)(0x10017d44), (0x1u));
  /* 10008416 pop ebx */
  EBX = (pop32());
  /* 10008417 ret  */
  ESPCHK(0x1000835fu, _esp0);
  ESP += 4; return;
}

/* FUN_10008418 @ 0x10008418 (153 bytes, 62 insns) */
void f_10008418(void) {
  FTRACE(0x10008418u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10008418 push ebp */
  push32((uint32_t)(EBP));
  /* 10008419 mov ebp, esp */
  EBP = (ESP);
  /* 1000841b push ecx */
  push32((uint32_t)(ECX));
  /* 1000841c push ecx */
  push32((uint32_t)(ECX));
  /* 1000841d push ebx */
  push32((uint32_t)(EBX));
  /* 1000841e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10008420 cmp dword ptr [0x10017d48], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10017d48))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008426 push esi */
  push32((uint32_t)(ESI));
  /* 10008427 push edi */
  push32((uint32_t)(EDI));
  /* 10008428 jne 0x1000842f */
  if (!C.zf) goto L_1000842f;
  /* 1000842a call 0x1000a7c1 */
  push32(0x1000842fu); f_1000a7c1();
L_1000842f:;
  /* 1000842f mov esi, 0x100166ac */
  ESI = (0x100166acu);
  /* 10008434 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10008439 push esi */
  push32((uint32_t)(ESI));
  /* 1000843a push ebx */
  push32((uint32_t)(EBX));
  /* 1000843b call dword ptr [0x1000e054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e054))), 0x10008441u);
  /* 10008441 mov eax, dword ptr [0x10017d54] */
  EAX = (r32((uint32_t)(0x10017d54)));
  /* 10008446 mov dword ptr [0x10016698], esi */
  w32((uint32_t)(0x10016698), (ESI));
  /* 1000844c mov edi, esi */
  EDI = (ESI);
  /* 1000844e cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10008450 je 0x10008454 */
  if (C.zf) goto L_10008454;
  /* 10008452 mov edi, eax */
  EDI = (EAX);
L_10008454:;
  /* 10008454 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10008457 push eax */
  push32((uint32_t)(EAX));
  /* 10008458 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 1000845b push eax */
  push32((uint32_t)(EAX));
  /* 1000845c push ebx */
  push32((uint32_t)(EBX));
  /* 1000845d push ebx */
  push32((uint32_t)(EBX));
  /* 1000845e push edi */
  push32((uint32_t)(EDI));
  /* 1000845f call 0x100084b1 */
  push32(0x10008464u); f_100084b1();
  /* 10008464 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10008467 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1000846a lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 1000846d push eax */
  push32((uint32_t)(EAX));
  /* 1000846e call 0x1000a2af */
  push32(0x10008473u); f_1000a2af();
  /* 10008473 mov esi, eax */
  ESI = (EAX);
  /* 10008475 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10008478 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000847a jne 0x10008484 */
  if (!C.zf) goto L_10008484;
  /* 1000847c push 8 */
  push32((uint32_t)(0x8u));
  /* 1000847e call 0x100070b1 */
  push32(0x10008483u); f_100070b1();
  /* 10008483 pop ecx */
  ECX = (pop32());
L_10008484:;
  /* 10008484 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10008487 push eax */
  push32((uint32_t)(EAX));
  /* 10008488 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 1000848b push eax */
  push32((uint32_t)(EAX));
  /* 1000848c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1000848f lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 10008492 push eax */
  push32((uint32_t)(EAX));
  /* 10008493 push esi */
  push32((uint32_t)(ESI));
  /* 10008494 push edi */
  push32((uint32_t)(EDI));
  /* 10008495 call 0x100084b1 */
  push32(0x1000849au); f_100084b1();
  /* 1000849a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1000849d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100084a0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100084a1 mov dword ptr [0x10016680], esi */
  w32((uint32_t)(0x10016680), (ESI));
  /* 100084a7 pop edi */
  EDI = (pop32());
  /* 100084a8 pop esi */
  ESI = (pop32());
  /* 100084a9 mov dword ptr [0x1001667c], eax */
  w32((uint32_t)(0x1001667c), (EAX));
  /* 100084ae pop ebx */
  EBX = (pop32());
  /* 100084af leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100084b0 ret  */
  ESPCHK(0x10008418u, _esp0);
  ESP += 4; return;
}

/* FUN_100084b1 @ 0x100084b1 (436 bytes, 187 insns) */
void f_100084b1(void) {
  FTRACE(0x100084b1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100084b1 push ebp */
  push32((uint32_t)(EBP));
  /* 100084b2 mov ebp, esp */
  EBP = (ESP);
  /* 100084b4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 100084b7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 100084ba push ebx */
  push32((uint32_t)(EBX));
  /* 100084bb push esi */
  push32((uint32_t)(ESI));
  /* 100084bc and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 100084bf mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 100084c2 push edi */
  push32((uint32_t)(EDI));
  /* 100084c3 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 100084c6 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 100084cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100084cf test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100084d1 je 0x100084db */
  if (C.zf) goto L_100084db;
  /* 100084d3 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 100084d5 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100084d8 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_100084db:;
  /* 100084db cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100084de jne 0x10008524 */
  if (!C.zf) goto L_10008524;
L_100084e0:;
  /* 100084e0 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 100084e3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100084e4 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100084e7 je 0x10008512 */
  if (C.zf) goto L_10008512;
  /* 100084e9 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100084eb je 0x10008512 */
  if (C.zf) goto L_10008512;
  /* 100084ed movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 100084f0 test byte ptr [edx + 0x10016b01], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10016b01)))&(0x4u); fl_logic(_r,8); }
  /* 100084f7 je 0x10008505 */
  if (C.zf) goto L_10008505;
  /* 100084f9 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 100084fb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100084fd je 0x10008505 */
  if (C.zf) goto L_10008505;
  /* 100084ff mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10008501 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10008503 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10008504 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10008505:;
  /* 10008505 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10008507 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10008509 je 0x100084e0 */
  if (C.zf) goto L_100084e0;
  /* 1000850b mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1000850d mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1000850f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10008510 jmp 0x100084e0 */
  goto L_100084e0;
L_10008512:;
  /* 10008512 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10008514 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10008516 je 0x1000851c */
  if (C.zf) goto L_1000851c;
  /* 10008518 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 1000851b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1000851c:;
  /* 1000851c cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000851f jne 0x10008567 */
  if (!C.zf) goto L_10008567;
  /* 10008521 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10008522 jmp 0x10008567 */
  goto L_10008567;
L_10008524:;
  /* 10008524 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10008526 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10008528 je 0x1000852f */
  if (C.zf) goto L_1000852f;
  /* 1000852a mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1000852c mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1000852e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1000852f:;
  /* 1000852f mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10008531 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10008532 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10008535 test byte ptr [ebx + 0x10016b01], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10016b01)))&(0x4u); fl_logic(_r,8); }
  /* 1000853c je 0x1000854a */
  if (C.zf) goto L_1000854a;
  /* 1000853e inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10008540 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10008542 je 0x10008549 */
  if (C.zf) goto L_10008549;
  /* 10008544 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 10008546 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 10008548 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10008549:;
  /* 10008549 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1000854a:;
  /* 1000854a cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000854d je 0x10008558 */
  if (C.zf) goto L_10008558;
  /* 1000854f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10008551 je 0x1000855c */
  if (C.zf) goto L_1000855c;
  /* 10008553 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10008556 jne 0x10008524 */
  if (!C.zf) goto L_10008524;
L_10008558:;
  /* 10008558 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1000855a jne 0x1000855f */
  if (!C.zf) goto L_1000855f;
L_1000855c:;
  /* 1000855c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1000855d jmp 0x10008567 */
  goto L_10008567;
L_1000855f:;
  /* 1000855f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10008561 je 0x10008567 */
  if (C.zf) goto L_10008567;
  /* 10008563 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_10008567:;
  /* 10008567 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_1000856b:;
  /* 1000856b cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000856e je 0x10008654 */
  if (C.zf) goto L_10008654;
L_10008574:;
  /* 10008574 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10008576 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10008579 je 0x10008580 */
  if (C.zf) goto L_10008580;
  /* 1000857b cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000857e jne 0x10008583 */
  if (!C.zf) goto L_10008583;
L_10008580:;
  /* 10008580 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10008581 jmp 0x10008574 */
  goto L_10008574;
L_10008583:;
  /* 10008583 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10008586 je 0x10008654 */
  if (C.zf) goto L_10008654;
  /* 1000858c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1000858e je 0x10008598 */
  if (C.zf) goto L_10008598;
  /* 10008590 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10008592 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10008595 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10008598:;
  /* 10008598 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1000859b inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_1000859d:;
  /* 1000859d mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 100085a4 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_100085a6:;
  /* 100085a6 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100085a9 jne 0x100085af */
  if (!C.zf) goto L_100085af;
  /* 100085ab inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100085ac inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100085ad jmp 0x100085a6 */
  goto L_100085a6;
L_100085af:;
  /* 100085af cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100085b2 jne 0x100085e0 */
  if (!C.zf) goto L_100085e0;
  /* 100085b4 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 100085b7 jne 0x100085de */
  if (!C.zf) goto L_100085de;
  /* 100085b9 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 100085bb cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100085be je 0x100085cd */
  if (C.zf) goto L_100085cd;
  /* 100085c0 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100085c4 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 100085c7 jne 0x100085cd */
  if (!C.zf) goto L_100085cd;
  /* 100085c9 mov eax, edx */
  EAX = (EDX);
  /* 100085cb jmp 0x100085d0 */
  goto L_100085d0;
L_100085cd:;
  /* 100085cd mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_100085d0:;
  /* 100085d0 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 100085d3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100085d5 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100085d8 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 100085db mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_100085de:;
  /* 100085de shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_100085e0:;
  /* 100085e0 mov edx, ebx */
  EDX = (EBX);
  /* 100085e2 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100085e3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 100085e5 je 0x100085f5 */
  if (C.zf) goto L_100085f5;
  /* 100085e7 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_100085e8:;
  /* 100085e8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100085ea je 0x100085f0 */
  if (C.zf) goto L_100085f0;
  /* 100085ec mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 100085ef inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_100085f0:;
  /* 100085f0 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 100085f2 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100085f3 jne 0x100085e8 */
  if (!C.zf) goto L_100085e8;
L_100085f5:;
  /* 100085f5 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 100085f7 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100085f9 je 0x10008645 */
  if (C.zf) goto L_10008645;
  /* 100085fb cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100085ff jne 0x1000860b */
  if (!C.zf) goto L_1000860b;
  /* 10008601 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10008604 je 0x10008645 */
  if (C.zf) goto L_10008645;
  /* 10008606 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10008609 je 0x10008645 */
  if (C.zf) goto L_10008645;
L_1000860b:;
  /* 1000860b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000860f je 0x1000863f */
  if (C.zf) goto L_1000863f;
  /* 10008611 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10008613 je 0x1000862e */
  if (C.zf) goto L_1000862e;
  /* 10008615 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10008618 test byte ptr [ebx + 0x10016b01], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10016b01)))&(0x4u); fl_logic(_r,8); }
  /* 1000861f je 0x10008627 */
  if (C.zf) goto L_10008627;
  /* 10008621 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10008623 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10008624 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10008625 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10008627:;
  /* 10008627 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10008629 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1000862b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1000862c jmp 0x1000863d */
  goto L_1000863d;
L_1000862e:;
  /* 1000862e movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 10008631 test byte ptr [edx + 0x10016b01], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10016b01)))&(0x4u); fl_logic(_r,8); }
  /* 10008638 je 0x1000863d */
  if (C.zf) goto L_1000863d;
  /* 1000863a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1000863b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1000863d:;
  /* 1000863d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1000863f:;
  /* 1000863f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10008640 jmp 0x1000859d */
  goto L_1000859d;
L_10008645:;
  /* 10008645 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10008647 je 0x1000864d */
  if (C.zf) goto L_1000864d;
  /* 10008649 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 1000864c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1000864d:;
  /* 1000864d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1000864f jmp 0x1000856b */
  goto L_1000856b;
L_10008654:;
  /* 10008654 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10008656 je 0x1000865b */
  if (C.zf) goto L_1000865b;
  /* 10008658 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1000865b:;
  /* 1000865b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1000865e pop edi */
  EDI = (pop32());
  /* 1000865f pop esi */
  ESI = (pop32());
  /* 10008660 pop ebx */
  EBX = (pop32());
  /* 10008661 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 10008663 pop ebp */
  EBP = (pop32());
  /* 10008664 ret  */
  ESPCHK(0x100084b1u, _esp0);
  ESP += 4; return;
}

/* FUN_10008665 @ 0x10008665 (306 bytes, 132 insns) */
void f_10008665(void) {
  FTRACE(0x10008665u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10008665 push ecx */
  push32((uint32_t)(ECX));
  /* 10008666 push ecx */
  push32((uint32_t)(ECX));
  /* 10008667 mov eax, dword ptr [0x100167b0] */
  EAX = (r32((uint32_t)(0x100167b0)));
  /* 1000866c push ebx */
  push32((uint32_t)(EBX));
  /* 1000866d push ebp */
  push32((uint32_t)(EBP));
  /* 1000866e mov ebp, dword ptr [0x1000e068] */
  EBP = (r32((uint32_t)(0x1000e068)));
  /* 10008674 push esi */
  push32((uint32_t)(ESI));
  /* 10008675 push edi */
  push32((uint32_t)(EDI));
  /* 10008676 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10008678 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1000867a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1000867c cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000867e jne 0x100086b3 */
  if (!C.zf) goto L_100086b3;
  /* 10008680 call ebp */
  call_ind((uint32_t)(EBP), 0x10008682u);
  /* 10008682 mov esi, eax */
  ESI = (EAX);
  /* 10008684 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008686 je 0x10008694 */
  if (C.zf) goto L_10008694;
  /* 10008688 mov dword ptr [0x100167b0], 1 */
  w32((uint32_t)(0x100167b0), (0x1u));
  /* 10008692 jmp 0x100086bc */
  goto L_100086bc;
L_10008694:;
  /* 10008694 call dword ptr [0x1000e064] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e064))), 0x1000869au);
  /* 1000869a mov edi, eax */
  EDI = (EAX);
  /* 1000869c cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000869e je 0x1000878e */
  if (C.zf) goto L_1000878e;
  /* 100086a4 mov dword ptr [0x100167b0], 2 */
  w32((uint32_t)(0x100167b0), (0x2u));
  /* 100086ae jmp 0x10008742 */
  goto L_10008742;
L_100086b3:;
  /* 100086b3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100086b6 jne 0x1000873d */
  if (!C.zf) goto L_1000873d;
L_100086bc:;
  /* 100086bc cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100086be jne 0x100086cc */
  if (!C.zf) goto L_100086cc;
  /* 100086c0 call ebp */
  call_ind((uint32_t)(EBP), 0x100086c2u);
  /* 100086c2 mov esi, eax */
  ESI = (EAX);
  /* 100086c4 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100086c6 je 0x1000878e */
  if (C.zf) goto L_1000878e;
L_100086cc:;
  /* 100086cc cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100086cf mov eax, esi */
  EAX = (ESI);
  /* 100086d1 je 0x100086e1 */
  if (C.zf) goto L_100086e1;
L_100086d3:;
  /* 100086d3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100086d4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100086d5 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100086d8 jne 0x100086d3 */
  if (!C.zf) goto L_100086d3;
  /* 100086da inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100086db inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100086dc cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100086df jne 0x100086d3 */
  if (!C.zf) goto L_100086d3;
L_100086e1:;
  /* 100086e1 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100086e3 mov edi, dword ptr [0x1000e060] */
  EDI = (r32((uint32_t)(0x1000e060)));
  /* 100086e9 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 100086eb push ebx */
  push32((uint32_t)(EBX));
  /* 100086ec push ebx */
  push32((uint32_t)(EBX));
  /* 100086ed inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100086ee push ebx */
  push32((uint32_t)(EBX));
  /* 100086ef push ebx */
  push32((uint32_t)(EBX));
  /* 100086f0 push eax */
  push32((uint32_t)(EAX));
  /* 100086f1 push esi */
  push32((uint32_t)(ESI));
  /* 100086f2 push ebx */
  push32((uint32_t)(EBX));
  /* 100086f3 push ebx */
  push32((uint32_t)(EBX));
  /* 100086f4 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 100086f8 call edi */
  call_ind((uint32_t)(EDI), 0x100086fau);
  /* 100086fa mov ebp, eax */
  EBP = (EAX);
  /* 100086fc cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100086fe je 0x10008732 */
  if (C.zf) goto L_10008732;
  /* 10008700 push ebp */
  push32((uint32_t)(EBP));
  /* 10008701 call 0x1000a2af */
  push32(0x10008706u); f_1000a2af();
  /* 10008706 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008708 pop ecx */
  ECX = (pop32());
  /* 10008709 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 1000870d je 0x10008732 */
  if (C.zf) goto L_10008732;
  /* 1000870f push ebx */
  push32((uint32_t)(EBX));
  /* 10008710 push ebx */
  push32((uint32_t)(EBX));
  /* 10008711 push ebp */
  push32((uint32_t)(EBP));
  /* 10008712 push eax */
  push32((uint32_t)(EAX));
  /* 10008713 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 10008717 push esi */
  push32((uint32_t)(ESI));
  /* 10008718 push ebx */
  push32((uint32_t)(EBX));
  /* 10008719 push ebx */
  push32((uint32_t)(EBX));
  /* 1000871a call edi */
  call_ind((uint32_t)(EDI), 0x1000871cu);
  /* 1000871c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000871e jne 0x1000872e */
  if (!C.zf) goto L_1000872e;
  /* 10008720 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 10008724 call 0x1000a1c6 */
  push32(0x10008729u); f_1000a1c6();
  /* 10008729 pop ecx */
  ECX = (pop32());
  /* 1000872a mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_1000872e:;
  /* 1000872e mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_10008732:;
  /* 10008732 push esi */
  push32((uint32_t)(ESI));
  /* 10008733 call dword ptr [0x1000e05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e05c))), 0x10008739u);
  /* 10008739 mov eax, ebx */
  EAX = (EBX);
  /* 1000873b jmp 0x10008790 */
  goto L_10008790;
L_1000873d:;
  /* 1000873d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008740 jne 0x1000878e */
  if (!C.zf) goto L_1000878e;
L_10008742:;
  /* 10008742 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008744 jne 0x10008752 */
  if (!C.zf) goto L_10008752;
  /* 10008746 call dword ptr [0x1000e064] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e064))), 0x1000874cu);
  /* 1000874c mov edi, eax */
  EDI = (EAX);
  /* 1000874e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008750 je 0x1000878e */
  if (C.zf) goto L_1000878e;
L_10008752:;
  /* 10008752 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10008754 mov eax, edi */
  EAX = (EDI);
  /* 10008756 je 0x10008762 */
  if (C.zf) goto L_10008762;
L_10008758:;
  /* 10008758 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10008759 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000875b jne 0x10008758 */
  if (!C.zf) goto L_10008758;
  /* 1000875d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1000875e cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10008760 jne 0x10008758 */
  if (!C.zf) goto L_10008758;
L_10008762:;
  /* 10008762 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10008764 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10008765 mov ebp, eax */
  EBP = (EAX);
  /* 10008767 push ebp */
  push32((uint32_t)(EBP));
  /* 10008768 call 0x1000a2af */
  push32(0x1000876du); f_1000a2af();
  /* 1000876d mov esi, eax */
  ESI = (EAX);
  /* 1000876f pop ecx */
  ECX = (pop32());
  /* 10008770 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008772 jne 0x10008778 */
  if (!C.zf) goto L_10008778;
  /* 10008774 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10008776 jmp 0x10008783 */
  goto L_10008783;
L_10008778:;
  /* 10008778 push ebp */
  push32((uint32_t)(EBP));
  /* 10008779 push edi */
  push32((uint32_t)(EDI));
  /* 1000877a push esi */
  push32((uint32_t)(ESI));
  /* 1000877b call 0x1000a7e0 */
  push32(0x10008780u); f_1000a7e0();
  /* 10008780 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10008783:;
  /* 10008783 push edi */
  push32((uint32_t)(EDI));
  /* 10008784 call dword ptr [0x1000e058] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e058))), 0x1000878au);
  /* 1000878a mov eax, esi */
  EAX = (ESI);
  /* 1000878c jmp 0x10008790 */
  goto L_10008790;
L_1000878e:;
  /* 1000878e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10008790:;
  /* 10008790 pop edi */
  EDI = (pop32());
  /* 10008791 pop esi */
  ESI = (pop32());
  /* 10008792 pop ebp */
  EBP = (pop32());
  /* 10008793 pop ebx */
  EBX = (pop32());
  /* 10008794 pop ecx */
  ECX = (pop32());
  /* 10008795 pop ecx */
  ECX = (pop32());
  /* 10008796 ret  */
  ESPCHK(0x10008665u, _esp0);
  ESP += 4; return;
}

/* FUN_10008797 @ 0x10008797 (45 bytes, 17 insns) */
void f_10008797(void) {
  FTRACE(0x10008797u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10008797 push esi */
  push32((uint32_t)(ESI));
  /* 10008798 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1000879c push 0 */
  push32((uint32_t)(0x0u));
  /* 1000879e and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 100087a1 call dword ptr [0x1000e004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e004))), 0x100087a7u);
  /* 100087a7 cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100087ac jne 0x100087c2 */
  if (!C.zf) goto L_100087c2;
  /* 100087ae mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 100087b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100087b3 je 0x100087c2 */
  if (C.zf) goto L_100087c2;
  /* 100087b5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100087b7 mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 100087ba mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 100087bc mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 100087bf mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_100087c2:;
  /* 100087c2 pop esi */
  ESI = (pop32());
  /* 100087c3 ret  */
  ESPCHK(0x10008797u, _esp0);
  ESP += 4; return;
}

/* FUN_100087c4 @ 0x100087c4 (328 bytes, 115 insns) */
void f_100087c4(void) {
  FTRACE(0x100087c4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100087c4 push ebp */
  push32((uint32_t)(EBP));
  /* 100087c5 mov ebp, esp */
  EBP = (ESP);
  /* 100087c7 mov eax, 0x122c */
  EAX = (0x122cu);
  /* 100087cc call 0x1000aed0 */
  push32(0x100087d1u); f_1000aed0();
  /* 100087d1 lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 100087d7 push ebx */
  push32((uint32_t)(EBX));
  /* 100087d8 push eax */
  push32((uint32_t)(EAX));
  /* 100087d9 mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 100087e3 call dword ptr [0x1000e070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e070))), 0x100087e9u);
  /* 100087e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100087eb je 0x10008807 */
  if (C.zf) goto L_10008807;
  /* 100087ed cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100087f4 jne 0x10008807 */
  if (!C.zf) goto L_10008807;
  /* 100087f6 cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100087fd jb 0x10008807 */
  if (C.cf) goto L_10008807;
  /* 100087ff push 1 */
  push32((uint32_t)(0x1u));
  /* 10008801 pop eax */
  EAX = (pop32());
  /* 10008802 jmp 0x10008909 */
  goto L_10008909;
L_10008807:;
  /* 10008807 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 1000880d push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 10008812 push eax */
  push32((uint32_t)(EAX));
  /* 10008813 push 0x1000e1c8 */
  push32((uint32_t)(0x1000e1c8u));
  /* 10008818 call dword ptr [0x1000e06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e06c))), 0x1000881eu);
  /* 1000881e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10008820 je 0x100088f6 */
  if (C.zf) goto L_100088f6;
  /* 10008826 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10008828 lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 1000882e cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10008834 je 0x10008849 */
  if (C.zf) goto L_10008849;
L_10008836:;
  /* 10008836 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10008838 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000883a jl 0x10008844 */
  if ((C.sf!=C.of)) goto L_10008844;
  /* 1000883c cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000883e jg 0x10008844 */
  if ((!C.zf&&C.sf==C.of)) goto L_10008844;
  /* 10008840 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10008842 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_10008844:;
  /* 10008844 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10008845 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10008847 jne 0x10008836 */
  if (!C.zf) goto L_10008836;
L_10008849:;
  /* 10008849 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 1000884f push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10008851 push eax */
  push32((uint32_t)(EAX));
  /* 10008852 push 0x1000e1b0 */
  push32((uint32_t)(0x1000e1b0u));
  /* 10008857 call 0x1000ae90 */
  push32(0x1000885cu); f_1000ae90();
  /* 1000885c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000885f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10008861 jne 0x1000886b */
  if (!C.zf) goto L_1000886b;
  /* 10008863 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 10008869 jmp 0x100088b4 */
  goto L_100088b4;
L_1000886b:;
  /* 1000886b lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 10008871 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10008876 push eax */
  push32((uint32_t)(EAX));
  /* 10008877 push ebx */
  push32((uint32_t)(EBX));
  /* 10008878 call dword ptr [0x1000e054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e054))), 0x1000887eu);
  /* 1000887e cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10008884 lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 1000888a je 0x1000889f */
  if (C.zf) goto L_1000889f;
L_1000888c:;
  /* 1000888c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1000888e cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10008890 jl 0x1000889a */
  if ((C.sf!=C.of)) goto L_1000889a;
  /* 10008892 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10008894 jg 0x1000889a */
  if ((!C.zf&&C.sf==C.of)) goto L_1000889a;
  /* 10008896 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10008898 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_1000889a:;
  /* 1000889a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1000889b cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000889d jne 0x1000888c */
  if (!C.zf) goto L_1000888c;
L_1000889f:;
  /* 1000889f lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 100088a5 push eax */
  push32((uint32_t)(EAX));
  /* 100088a6 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 100088ac push eax */
  push32((uint32_t)(EAX));
  /* 100088ad call 0x1000ae10 */
  push32(0x100088b2u); f_1000ae10();
  /* 100088b2 pop ecx */
  ECX = (pop32());
  /* 100088b3 pop ecx */
  ECX = (pop32());
L_100088b4:;
  /* 100088b4 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100088b6 je 0x100088f6 */
  if (C.zf) goto L_100088f6;
  /* 100088b8 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 100088ba push eax */
  push32((uint32_t)(EAX));
  /* 100088bb call 0x1000ad50 */
  push32(0x100088c0u); f_1000ad50();
  /* 100088c0 pop ecx */
  ECX = (pop32());
  /* 100088c1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100088c3 pop ecx */
  ECX = (pop32());
  /* 100088c4 je 0x100088f6 */
  if (C.zf) goto L_100088f6;
  /* 100088c6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100088c7 mov ecx, eax */
  ECX = (EAX);
  /* 100088c9 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100088cb je 0x100088db */
  if (C.zf) goto L_100088db;
L_100088cd:;
  /* 100088cd cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100088d0 jne 0x100088d6 */
  if (!C.zf) goto L_100088d6;
  /* 100088d2 mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 100088d4 jmp 0x100088d7 */
  goto L_100088d7;
L_100088d6:;
  /* 100088d6 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_100088d7:;
  /* 100088d7 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100088d9 jne 0x100088cd */
  if (!C.zf) goto L_100088cd;
L_100088db:;
  /* 100088db push 0xa */
  push32((uint32_t)(0xau));
  /* 100088dd push ebx */
  push32((uint32_t)(EBX));
  /* 100088de push eax */
  push32((uint32_t)(EAX));
  /* 100088df call 0x1000ab15 */
  push32(0x100088e4u); f_1000ab15();
  /* 100088e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100088e7 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100088ea je 0x10008909 */
  if (C.zf) goto L_10008909;
  /* 100088ec cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100088ef je 0x10008909 */
  if (C.zf) goto L_10008909;
  /* 100088f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100088f4 je 0x10008909 */
  if (C.zf) goto L_10008909;
L_100088f6:;
  /* 100088f6 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 100088f9 push eax */
  push32((uint32_t)(EAX));
  /* 100088fa call 0x10008797 */
  push32(0x100088ffu); f_10008797();
  /* 100088ff cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10008903 pop ecx */
  ECX = (pop32());
  /* 10008904 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10008906 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10008909:;
  /* 10008909 pop ebx */
  EBX = (pop32());
  /* 1000890a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000890b ret  */
  ESPCHK(0x100087c4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000890c @ 0x1000890c (93 bytes, 30 insns) */
void f_1000890c(void) {
  FTRACE(0x1000890cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000890c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000890e push 0 */
  push32((uint32_t)(0x0u));
  /* 10008910 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008914 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10008919 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 1000891c push eax */
  push32((uint32_t)(EAX));
  /* 1000891d call dword ptr [0x1000e078] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e078))), 0x10008923u);
  /* 10008923 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10008925 mov dword ptr [0x10017c24], eax */
  w32((uint32_t)(0x10017c24), (EAX));
  /* 1000892a je 0x10008962 */
  if (C.zf) goto L_10008962;
  /* 1000892c call 0x100087c4 */
  push32(0x10008931u); f_100087c4();
  /* 10008931 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008934 mov dword ptr [0x10017c28], eax */
  w32((uint32_t)(0x10017c28), (EAX));
  /* 10008939 jne 0x10008948 */
  if (!C.zf) goto L_10008948;
  /* 1000893b push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 10008940 call 0x1000aeff */
  push32(0x10008945u); f_1000aeff();
  /* 10008945 pop ecx */
  ECX = (pop32());
  /* 10008946 jmp 0x10008952 */
  goto L_10008952;
L_10008948:;
  /* 10008948 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000894b jne 0x10008965 */
  if (!C.zf) goto L_10008965;
  /* 1000894d call 0x1000b750 */
  push32(0x10008952u); f_1000b750();
L_10008952:;
  /* 10008952 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10008954 jne 0x10008965 */
  if (!C.zf) goto L_10008965;
  /* 10008956 push dword ptr [0x10017c24] */
  push32((uint32_t)(r32((uint32_t)(0x10017c24))));
  /* 1000895c call dword ptr [0x1000e074] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e074))), 0x10008962u);
L_10008962:;
  /* 10008962 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10008964 ret  */
  ESPCHK(0x1000890cu, _esp0);
  ESP += 4; return;
L_10008965:;
  /* 10008965 push 1 */
  push32((uint32_t)(0x1u));
  /* 10008967 pop eax */
  EAX = (pop32());
  /* 10008968 ret  */
  ESPCHK(0x1000890cu, _esp0);
  ESP += 4; return;
}

/* FUN_10008969 @ 0x10008969 (168 bytes, 56 insns) */
void f_10008969(void) {
  FTRACE(0x10008969u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10008969 mov eax, dword ptr [0x10017c28] */
  EAX = (r32((uint32_t)(0x10017c28)));
  /* 1000896e push esi */
  push32((uint32_t)(ESI));
  /* 1000896f cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008972 push edi */
  push32((uint32_t)(EDI));
  /* 10008973 jne 0x100089db */
  if (!C.zf) goto L_100089db;
  /* 10008975 push ebx */
  push32((uint32_t)(EBX));
  /* 10008976 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10008978 cmp dword ptr [0x100169d8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100169d8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000897e push ebp */
  push32((uint32_t)(EBP));
  /* 1000897f mov ebp, dword ptr [0x1000e080] */
  EBP = (r32((uint32_t)(0x1000e080)));
  /* 10008985 jle 0x100089c7 */
  if ((C.zf||C.sf!=C.of)) goto L_100089c7;
  /* 10008987 mov eax, dword ptr [0x100169dc] */
  EAX = (r32((uint32_t)(0x100169dc)));
  /* 1000898c mov edi, dword ptr [0x1000e07c] */
  EDI = (r32((uint32_t)(0x1000e07c)));
  /* 10008992 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_10008995:;
  /* 10008995 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1000899a push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1000899f push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 100089a1 call edi */
  call_ind((uint32_t)(EDI), 0x100089a3u);
  /* 100089a3 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 100089a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 100089aa push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 100089ac call edi */
  call_ind((uint32_t)(EDI), 0x100089aeu);
  /* 100089ae push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 100089b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 100089b3 push dword ptr [0x10017c24] */
  push32((uint32_t)(r32((uint32_t)(0x10017c24))));
  /* 100089b9 call ebp */
  call_ind((uint32_t)(EBP), 0x100089bbu);
  /* 100089bb add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100089be inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100089bf cmp ebx, dword ptr [0x100169d8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x100169d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100089c5 jl 0x10008995 */
  if ((C.sf!=C.of)) goto L_10008995;
L_100089c7:;
  /* 100089c7 push dword ptr [0x100169dc] */
  push32((uint32_t)(r32((uint32_t)(0x100169dc))));
  /* 100089cd push 0 */
  push32((uint32_t)(0x0u));
  /* 100089cf push dword ptr [0x10017c24] */
  push32((uint32_t)(r32((uint32_t)(0x10017c24))));
  /* 100089d5 call ebp */
  call_ind((uint32_t)(EBP), 0x100089d7u);
  /* 100089d7 pop ebp */
  EBP = (pop32());
  /* 100089d8 pop ebx */
  EBX = (pop32());
  /* 100089d9 jmp 0x10008a02 */
  goto L_10008a02;
L_100089db:;
  /* 100089db cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100089de jne 0x10008a02 */
  if (!C.zf) goto L_10008a02;
  /* 100089e0 mov edi, 0x10010e70 */
  EDI = (0x10010e70u);
  /* 100089e5 mov esi, edi */
  ESI = (EDI);
L_100089e7:;
  /* 100089e7 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 100089ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100089ec je 0x100089fc */
  if (C.zf) goto L_100089fc;
  /* 100089ee push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 100089f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 100089f5 push eax */
  push32((uint32_t)(EAX));
  /* 100089f6 call dword ptr [0x1000e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e07c))), 0x100089fcu);
L_100089fc:;
  /* 100089fc mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 100089fe cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008a00 jne 0x100089e7 */
  if (!C.zf) goto L_100089e7;
L_10008a02:;
  /* 10008a02 push dword ptr [0x10017c24] */
  push32((uint32_t)(r32((uint32_t)(0x10017c24))));
  /* 10008a08 call dword ptr [0x1000e074] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e074))), 0x10008a0eu);
  /* 10008a0e pop edi */
  EDI = (pop32());
  /* 10008a0f pop esi */
  ESI = (pop32());
  /* 10008a10 ret  */
  ESPCHK(0x10008969u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a11 @ 0x10008a11 (57 bytes, 18 insns) */
void f_10008a11(void) {
  FTRACE(0x10008a11u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10008a11 mov eax, dword ptr [0x10016660] */
  EAX = (r32((uint32_t)(0x10016660)));
  /* 10008a16 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008a19 je 0x10008a28 */
  if (C.zf) goto L_10008a28;
  /* 10008a1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10008a1d jne 0x10008a49 */
  if (!C.zf) goto L_10008a49;
  /* 10008a1f cmp dword ptr [0x10016664], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10016664))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008a26 jne 0x10008a49 */
  if (!C.zf) goto L_10008a49;
L_10008a28:;
  /* 10008a28 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10008a2d call 0x10008a4a */
  push32(0x10008a32u); f_10008a4a();
  /* 10008a32 mov eax, dword ptr [0x100167b4] */
  EAX = (r32((uint32_t)(0x100167b4)));
  /* 10008a37 pop ecx */
  ECX = (pop32());
  /* 10008a38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10008a3a je 0x10008a3e */
  if (C.zf) goto L_10008a3e;
  /* 10008a3c call eax */
  call_ind((uint32_t)(EAX), 0x10008a3eu);
L_10008a3e:;
  /* 10008a3e push 0xff */
  push32((uint32_t)(0xffu));
  /* 10008a43 call 0x10008a4a */
  push32(0x10008a48u); f_10008a4a();
  /* 10008a48 pop ecx */
  ECX = (pop32());
L_10008a49:;
  /* 10008a49 ret  */
  ESPCHK(0x10008a11u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a4a @ 0x10008a4a (339 bytes, 100 insns) */
void f_10008a4a(void) {
  FTRACE(0x10008a4au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10008a4a push ebp */
  push32((uint32_t)(EBP));
  /* 10008a4b mov ebp, esp */
  EBP = (ESP);
  /* 10008a4d sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10008a53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10008a56 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10008a58 mov eax, 0x100106c8 */
  EAX = (0x100106c8u);
L_10008a5d:;
  /* 10008a5d cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008a5f je 0x10008a6c */
  if (C.zf) goto L_10008a6c;
  /* 10008a61 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10008a64 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10008a65 cmp eax, 0x10010758 */
  { uint32_t _a=(EAX),_b=(0x10010758u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008a6a jl 0x10008a5d */
  if ((C.sf!=C.of)) goto L_10008a5d;
L_10008a6c:;
  /* 10008a6c push esi */
  push32((uint32_t)(ESI));
  /* 10008a6d mov esi, ecx */
  ESI = (ECX);
  /* 10008a6f shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 10008a72 cmp edx, dword ptr [esi + 0x100106c8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x100106c8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008a78 jne 0x10008b9a */
  if (!C.zf) goto L_10008b9a;
  /* 10008a7e mov eax, dword ptr [0x10016660] */
  EAX = (r32((uint32_t)(0x10016660)));
  /* 10008a83 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008a86 je 0x10008b74 */
  if (C.zf) goto L_10008b74;
  /* 10008a8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10008a8e jne 0x10008a9d */
  if (!C.zf) goto L_10008a9d;
  /* 10008a90 cmp dword ptr [0x10016664], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10016664))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008a97 je 0x10008b74 */
  if (C.zf) goto L_10008b74;
L_10008a9d:;
  /* 10008a9d cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008aa3 je 0x10008b9a */
  if (C.zf) goto L_10008b9a;
  /* 10008aa9 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10008aaf push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10008ab4 push eax */
  push32((uint32_t)(EAX));
  /* 10008ab5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10008ab7 call dword ptr [0x1000e054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e054))), 0x10008abdu);
  /* 10008abd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10008abf jne 0x10008ad4 */
  if (!C.zf) goto L_10008ad4;
  /* 10008ac1 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10008ac7 push 0x1000e4b8 */
  push32((uint32_t)(0x1000e4b8u));
  /* 10008acc push eax */
  push32((uint32_t)(EAX));
  /* 10008acd call 0x10009af0 */
  push32(0x10008ad2u); f_10009af0();
  /* 10008ad2 pop ecx */
  ECX = (pop32());
  /* 10008ad3 pop ecx */
  ECX = (pop32());
L_10008ad4:;
  /* 10008ad4 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10008ada push edi */
  push32((uint32_t)(EDI));
  /* 10008adb push eax */
  push32((uint32_t)(EAX));
  /* 10008adc lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 10008ae2 call 0x10009040 */
  push32(0x10008ae7u); f_10009040();
  /* 10008ae7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10008ae8 pop ecx */
  ECX = (pop32());
  /* 10008ae9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008aec jbe 0x10008b17 */
  if ((C.cf||C.zf)) goto L_10008b17;
  /* 10008aee lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10008af4 push eax */
  push32((uint32_t)(EAX));
  /* 10008af5 call 0x10009040 */
  push32(0x10008afau); f_10009040();
  /* 10008afa mov edi, eax */
  EDI = (EAX);
  /* 10008afc lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10008b02 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10008b05 push 3 */
  push32((uint32_t)(0x3u));
  /* 10008b07 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10008b09 push 0x1000e4b4 */
  push32((uint32_t)(0x1000e4b4u));
  /* 10008b0e push edi */
  push32((uint32_t)(EDI));
  /* 10008b0f call 0x1000be00 */
  push32(0x10008b14u); f_1000be00();
  /* 10008b14 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10008b17:;
  /* 10008b17 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10008b1d push 0x1000e498 */
  push32((uint32_t)(0x1000e498u));
  /* 10008b22 push eax */
  push32((uint32_t)(EAX));
  /* 10008b23 call 0x10009af0 */
  push32(0x10008b28u); f_10009af0();
  /* 10008b28 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10008b2e push edi */
  push32((uint32_t)(EDI));
  /* 10008b2f push eax */
  push32((uint32_t)(EAX));
  /* 10008b30 call 0x10009b00 */
  push32(0x10008b35u); f_10009b00();
  /* 10008b35 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10008b3b push 0x1000e494 */
  push32((uint32_t)(0x1000e494u));
  /* 10008b40 push eax */
  push32((uint32_t)(EAX));
  /* 10008b41 call 0x10009b00 */
  push32(0x10008b46u); f_10009b00();
  /* 10008b46 push dword ptr [esi + 0x100106cc] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x100106cc))));
  /* 10008b4c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10008b52 push eax */
  push32((uint32_t)(EAX));
  /* 10008b53 call 0x10009b00 */
  push32(0x10008b58u); f_10009b00();
  /* 10008b58 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10008b5d lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10008b63 push 0x1000e46c */
  push32((uint32_t)(0x1000e46cu));
  /* 10008b68 push eax */
  push32((uint32_t)(EAX));
  /* 10008b69 call 0x1000bd74 */
  push32(0x10008b6eu); f_1000bd74();
  /* 10008b6e add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10008b71 pop edi */
  EDI = (pop32());
  /* 10008b72 jmp 0x10008b9a */
  goto L_10008b9a;
L_10008b74:;
  /* 10008b74 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10008b77 lea esi, [esi + 0x100106cc] */
  ESI = ((uint32_t)(ESI + 0x100106cc));
  /* 10008b7d push 0 */
  push32((uint32_t)(0x0u));
  /* 10008b7f push eax */
  push32((uint32_t)(EAX));
  /* 10008b80 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10008b82 call 0x10009040 */
  push32(0x10008b87u); f_10009040();
  /* 10008b87 pop ecx */
  ECX = (pop32());
  /* 10008b88 push eax */
  push32((uint32_t)(EAX));
  /* 10008b89 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10008b8b push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10008b8d call dword ptr [0x1000e044] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e044))), 0x10008b93u);
  /* 10008b93 push eax */
  push32((uint32_t)(EAX));
  /* 10008b94 call dword ptr [0x1000e084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e084))), 0x10008b9au);
L_10008b9a:;
  /* 10008b9a pop esi */
  ESI = (pop32());
  /* 10008b9b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10008b9c ret  */
  ESPCHK(0x10008a4au, _esp0);
  ESP += 4; return;
}

/* FUN_10008b9d @ 0x10008b9d (101 bytes, 34 insns) */
void f_10008b9d(void) {
  FTRACE(0x10008b9du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10008b9d push esi */
  push32((uint32_t)(ESI));
  /* 10008b9e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10008ba2 cmp esi, dword ptr [0x10017d40] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10017d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008ba8 jae 0x10008bea */
  if (!C.cf) goto L_10008bea;
  /* 10008baa mov ecx, esi */
  ECX = (ESI);
  /* 10008bac mov eax, esi */
  EAX = (ESI);
  /* 10008bae sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10008bb1 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10008bb4 mov ecx, dword ptr [ecx*4 + 0x10017c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10017c40)));
  /* 10008bbb lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10008bbe test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10008bc3 je 0x10008bea */
  if (C.zf) goto L_10008bea;
  /* 10008bc5 push edi */
  push32((uint32_t)(EDI));
  /* 10008bc6 push esi */
  push32((uint32_t)(ESI));
  /* 10008bc7 call 0x1000c044 */
  push32(0x10008bccu); f_1000c044();
  /* 10008bcc push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10008bd0 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10008bd4 push esi */
  push32((uint32_t)(ESI));
  /* 10008bd5 call 0x10008c02 */
  push32(0x10008bdau); f_10008c02();
  /* 10008bda push esi */
  push32((uint32_t)(ESI));
  /* 10008bdb mov edi, eax */
  EDI = (EAX);
  /* 10008bdd call 0x1000c0a3 */
  push32(0x10008be2u); f_1000c0a3();
  /* 10008be2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10008be5 mov eax, edi */
  EAX = (EDI);
  /* 10008be7 pop edi */
  EDI = (pop32());
  /* 10008be8 pop esi */
  ESI = (pop32());
  /* 10008be9 ret  */
  ESPCHK(0x10008b9du, _esp0);
  ESP += 4; return;
L_10008bea:;
  /* 10008bea call 0x1000bf71 */
  push32(0x10008befu); f_1000bf71();
  /* 10008bef mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10008bf5 call 0x1000bf7a */
  push32(0x10008bfau); f_1000bf7a();
  /* 10008bfa and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10008bfd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10008c00 pop esi */
  ESI = (pop32());
  /* 10008c01 ret  */
  ESPCHK(0x10008b9du, _esp0);
  ESP += 4; return;
}

/* FUN_10008c02 @ 0x10008c02 (115 bytes, 41 insns) */
void f_10008c02(void) {
  FTRACE(0x10008c02u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10008c02 push esi */
  push32((uint32_t)(ESI));
  /* 10008c03 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10008c07 push edi */
  push32((uint32_t)(EDI));
  /* 10008c08 push esi */
  push32((uint32_t)(ESI));
  /* 10008c09 call 0x1000c002 */
  push32(0x10008c0eu); f_1000c002();
  /* 10008c0e cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008c11 pop ecx */
  ECX = (pop32());
  /* 10008c12 jne 0x10008c21 */
  if (!C.zf) goto L_10008c21;
  /* 10008c14 call 0x1000bf71 */
  push32(0x10008c19u); f_1000bf71();
  /* 10008c19 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10008c1f jmp 0x10008c4e */
  goto L_10008c4e;
L_10008c21:;
  /* 10008c21 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 10008c25 push 0 */
  push32((uint32_t)(0x0u));
  /* 10008c27 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10008c2b push eax */
  push32((uint32_t)(EAX));
  /* 10008c2c call dword ptr [0x1000e000] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e000))), 0x10008c32u);
  /* 10008c32 mov edi, eax */
  EDI = (EAX);
  /* 10008c34 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008c37 jne 0x10008c41 */
  if (!C.zf) goto L_10008c41;
  /* 10008c39 call dword ptr [0x1000e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e03c))), 0x10008c3fu);
  /* 10008c3f jmp 0x10008c43 */
  goto L_10008c43;
L_10008c41:;
  /* 10008c41 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10008c43:;
  /* 10008c43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10008c45 je 0x10008c53 */
  if (C.zf) goto L_10008c53;
  /* 10008c47 push eax */
  push32((uint32_t)(EAX));
  /* 10008c48 call 0x1000befe */
  push32(0x10008c4du); f_1000befe();
  /* 10008c4d pop ecx */
  ECX = (pop32());
L_10008c4e:;
  /* 10008c4e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10008c51 jmp 0x10008c72 */
  goto L_10008c72;
L_10008c53:;
  /* 10008c53 mov ecx, esi */
  ECX = (ESI);
  /* 10008c55 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 10008c58 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10008c5b mov eax, esi */
  EAX = (ESI);
  /* 10008c5d mov ecx, dword ptr [ecx*4 + 0x10017c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10017c40)));
  /* 10008c64 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10008c67 and byte ptr [ecx + eax*4 + 4], 0xfd */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0xfdu); w8((uint32_t)(ECX + EAX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 10008c6c lea eax, [ecx + eax*4 + 4] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 10008c70 mov eax, edi */
  EAX = (EDI);
L_10008c72:;
  /* 10008c72 pop edi */
  EDI = (pop32());
  /* 10008c73 pop esi */
  ESI = (pop32());
  /* 10008c74 ret  */
  ESPCHK(0x10008c02u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c75 @ 0x10008c75 (101 bytes, 34 insns) */
void f_10008c75(void) {
  FTRACE(0x10008c75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10008c75 push esi */
  push32((uint32_t)(ESI));
  /* 10008c76 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10008c7a cmp esi, dword ptr [0x10017d40] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10017d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008c80 jae 0x10008cc2 */
  if (!C.cf) goto L_10008cc2;
  /* 10008c82 mov ecx, esi */
  ECX = (ESI);
  /* 10008c84 mov eax, esi */
  EAX = (ESI);
  /* 10008c86 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10008c89 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10008c8c mov ecx, dword ptr [ecx*4 + 0x10017c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10017c40)));
  /* 10008c93 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10008c96 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10008c9b je 0x10008cc2 */
  if (C.zf) goto L_10008cc2;
  /* 10008c9d push edi */
  push32((uint32_t)(EDI));
  /* 10008c9e push esi */
  push32((uint32_t)(ESI));
  /* 10008c9f call 0x1000c044 */
  push32(0x10008ca4u); f_1000c044();
  /* 10008ca4 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10008ca8 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10008cac push esi */
  push32((uint32_t)(ESI));
  /* 10008cad call 0x10008cda */
  push32(0x10008cb2u); f_10008cda();
  /* 10008cb2 push esi */
  push32((uint32_t)(ESI));
  /* 10008cb3 mov edi, eax */
  EDI = (EAX);
  /* 10008cb5 call 0x1000c0a3 */
  push32(0x10008cbau); f_1000c0a3();
  /* 10008cba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10008cbd mov eax, edi */
  EAX = (EDI);
  /* 10008cbf pop edi */
  EDI = (pop32());
  /* 10008cc0 pop esi */
  ESI = (pop32());
  /* 10008cc1 ret  */
  ESPCHK(0x10008c75u, _esp0);
  ESP += 4; return;
L_10008cc2:;
  /* 10008cc2 call 0x1000bf71 */
  push32(0x10008cc7u); f_1000bf71();
  /* 10008cc7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10008ccd call 0x1000bf7a */
  push32(0x10008cd2u); f_1000bf7a();
  /* 10008cd2 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10008cd5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10008cd8 pop esi */
  ESI = (pop32());
  /* 10008cd9 ret  */
  ESPCHK(0x10008c75u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cda @ 0x10008cda (395 bytes, 135 insns) */
void f_10008cda(void) {
  FTRACE(0x10008cdau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10008cda push ebp */
  push32((uint32_t)(EBP));
  /* 10008cdb mov ebp, esp */
  EBP = (ESP);
  /* 10008cdd sub esp, 0x414 */
  { uint32_t _a=(ESP),_b=(0x414u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10008ce3 push ebx */
  push32((uint32_t)(EBX));
  /* 10008ce4 push esi */
  push32((uint32_t)(ESI));
  /* 10008ce5 push edi */
  push32((uint32_t)(EDI));
  /* 10008ce6 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10008ce8 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008ceb mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 10008cee mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 10008cf1 jne 0x10008cfa */
  if (!C.zf) goto L_10008cfa;
L_10008cf3:;
  /* 10008cf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10008cf5 jmp 0x10008e60 */
  goto L_10008e60;
L_10008cfa:;
  /* 10008cfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10008cfd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10008d00 lea ebx, [eax*4 + 0x10017c40] */
  EBX = ((uint32_t)(EAX*4 + 0x10017c40));
  /* 10008d07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10008d0a and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10008d0d lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 10008d10 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10008d12 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 10008d15 test byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 10008d1a je 0x10008d2a */
  if (C.zf) goto L_10008d2a;
  /* 10008d1c push 2 */
  push32((uint32_t)(0x2u));
  /* 10008d1e push edi */
  push32((uint32_t)(EDI));
  /* 10008d1f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10008d22 call 0x10008c02 */
  push32(0x10008d27u); f_10008c02();
  /* 10008d27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10008d2a:;
  /* 10008d2a mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10008d2c add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10008d2e test byte ptr [eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 10008d32 je 0x10008df9 */
  if (C.zf) goto L_10008df9;
  /* 10008d38 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10008d3b cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008d3e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10008d41 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 10008d44 jbe 0x10008e34 */
  if ((C.cf||C.zf)) goto L_10008e34;
L_10008d4a:;
  /* 10008d4a lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
L_10008d50:;
  /* 10008d50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10008d53 sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10008d56 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008d59 jae 0x10008d84 */
  if (!C.cf) goto L_10008d84;
  /* 10008d5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10008d5e inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10008d61 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 10008d63 cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10008d66 jne 0x10008d6f */
  if (!C.zf) goto L_10008d6f;
  /* 10008d68 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 10008d6b mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 10008d6e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10008d6f:;
  /* 10008d6f mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10008d71 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10008d72 mov ecx, eax */
  ECX = (EAX);
  /* 10008d74 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10008d7a sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10008d7c cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008d82 jl 0x10008d50 */
  if ((C.sf!=C.of)) goto L_10008d50;
L_10008d84:;
  /* 10008d84 mov edi, eax */
  EDI = (EAX);
  /* 10008d86 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10008d8c sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10008d8e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10008d91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10008d93 push eax */
  push32((uint32_t)(EAX));
  /* 10008d94 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10008d9a push edi */
  push32((uint32_t)(EDI));
  /* 10008d9b push eax */
  push32((uint32_t)(EAX));
  /* 10008d9c mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10008d9e push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 10008da1 call dword ptr [0x1000e084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e084))), 0x10008da7u);
  /* 10008da7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10008da9 je 0x10008dee */
  if (C.zf) goto L_10008dee;
  /* 10008dab mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10008dae add dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 10008db1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008db3 jl 0x10008dc0 */
  if ((C.sf!=C.of)) goto L_10008dc0;
  /* 10008db5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10008db8 sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10008dbb cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008dbe jb 0x10008d4a */
  if (C.cf) goto L_10008d4a;
L_10008dc0:;
  /* 10008dc0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10008dc2:;
  /* 10008dc2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10008dc5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008dc7 jne 0x10008e5d */
  if (!C.zf) goto L_10008e5d;
  /* 10008dcd cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008dd0 je 0x10008e34 */
  if (C.zf) goto L_10008e34;
  /* 10008dd2 push 5 */
  push32((uint32_t)(0x5u));
  /* 10008dd4 pop esi */
  ESI = (pop32());
  /* 10008dd5 cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008dd8 jne 0x10008e26 */
  if (!C.zf) goto L_10008e26;
  /* 10008dda call 0x1000bf71 */
  push32(0x10008ddfu); f_1000bf71();
  /* 10008ddf mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10008de5 call 0x1000bf7a */
  push32(0x10008deau); f_1000bf7a();
  /* 10008dea mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10008dec jmp 0x10008e2f */
  goto L_10008e2f;
L_10008dee:;
  /* 10008dee call dword ptr [0x1000e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e03c))), 0x10008df4u);
  /* 10008df4 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10008df7 jmp 0x10008dc0 */
  goto L_10008dc0;
L_10008df9:;
  /* 10008df9 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 10008dfc push edi */
  push32((uint32_t)(EDI));
  /* 10008dfd push ecx */
  push32((uint32_t)(ECX));
  /* 10008dfe push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10008e01 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10008e04 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 10008e06 call dword ptr [0x1000e084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e084))), 0x10008e0cu);
  /* 10008e0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10008e0e je 0x10008e1b */
  if (C.zf) goto L_10008e1b;
  /* 10008e10 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10008e13 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 10008e16 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10008e19 jmp 0x10008dc2 */
  goto L_10008dc2;
L_10008e1b:;
  /* 10008e1b call dword ptr [0x1000e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e03c))), 0x10008e21u);
  /* 10008e21 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10008e24 jmp 0x10008dc2 */
  goto L_10008dc2;
L_10008e26:;
  /* 10008e26 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10008e29 call 0x1000befe */
  push32(0x10008e2eu); f_1000befe();
  /* 10008e2e pop ecx */
  ECX = (pop32());
L_10008e2f:;
  /* 10008e2f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10008e32 jmp 0x10008e60 */
  goto L_10008e60;
L_10008e34:;
  /* 10008e34 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10008e36 test byte ptr [eax + esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10008e3b je 0x10008e49 */
  if (C.zf) goto L_10008e49;
  /* 10008e3d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10008e40 cmp byte ptr [eax], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10008e43 je 0x10008cf3 */
  if (C.zf) goto L_10008cf3;
L_10008e49:;
  /* 10008e49 call 0x1000bf71 */
  push32(0x10008e4eu); f_1000bf71();
  /* 10008e4e mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 10008e54 call 0x1000bf7a */
  push32(0x10008e59u); f_1000bf7a();
  /* 10008e59 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 10008e5b jmp 0x10008e2f */
  goto L_10008e2f;
L_10008e5d:;
  /* 10008e5d sub eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10008e60:;
  /* 10008e60 pop edi */
  EDI = (pop32());
  /* 10008e61 pop esi */
  ESI = (pop32());
  /* 10008e62 pop ebx */
  EBX = (pop32());
  /* 10008e63 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10008e64 ret  */
  ESPCHK(0x10008cdau, _esp0);
  ESP += 4; return;
}

/* FUN_10008e65 @ 0x10008e65 (68 bytes, 19 insns) */
void f_10008e65(void) {
  FTRACE(0x10008e65u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10008e65 inc dword ptr [0x100167b8] */
  { uint32_t _r=(r32((uint32_t)(0x100167b8)))+1; w32((uint32_t)(0x100167b8), (_r)); fl_inc(_r,32); }
  /* 10008e6b push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10008e70 call 0x1000a2af */
  push32(0x10008e75u); f_1000a2af();
  /* 10008e75 pop ecx */
  ECX = (pop32());
  /* 10008e76 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10008e7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10008e7c mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10008e7f je 0x10008e8e */
  if (C.zf) goto L_10008e8e;
  /* 10008e81 or dword ptr [ecx + 0xc], 8 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x8u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 10008e85 mov dword ptr [ecx + 0x18], 0x1000 */
  w32((uint32_t)(ECX + 0x18), (0x1000u));
  /* 10008e8c jmp 0x10008e9f */
  goto L_10008e9f;
L_10008e8e:;
  /* 10008e8e or dword ptr [ecx + 0xc], 4 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x4u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 10008e92 lea eax, [ecx + 0x14] */
  EAX = ((uint32_t)(ECX + 0x14));
  /* 10008e95 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10008e98 mov dword ptr [ecx + 0x18], 2 */
  w32((uint32_t)(ECX + 0x18), (0x2u));
L_10008e9f:;
  /* 10008e9f mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 10008ea2 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10008ea6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10008ea8 ret  */
  ESPCHK(0x10008e65u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ea9 @ 0x10008ea9 (41 bytes, 13 insns) */
void f_10008ea9(void) {
  FTRACE(0x10008ea9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10008ea9 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10008ead cmp eax, dword ptr [0x10017d40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10017d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008eb3 jb 0x10008eb8 */
  if (C.cf) goto L_10008eb8;
  /* 10008eb5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10008eb7 ret  */
  ESPCHK(0x10008ea9u, _esp0);
  ESP += 4; return;
L_10008eb8:;
  /* 10008eb8 mov ecx, eax */
  ECX = (EAX);
  /* 10008eba and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10008ebd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10008ec0 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10008ec3 mov ecx, dword ptr [ecx*4 + 0x10017c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10017c40)));
  /* 10008eca mov al, byte ptr [ecx + eax*4 + 4] */
  AL = (r8((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 10008ece and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10008ed1 ret  */
  ESPCHK(0x10008ea9u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f8e @ 0x10008f8e (47 bytes, 17 insns) */
void f_10008f8e(void) {
  FTRACE(0x10008f8eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10008f8e mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10008f92 mov ecx, 0x10010758 */
  ECX = (0x10010758u);
  /* 10008f97 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008f99 jb 0x10008fb2 */
  if (C.cf) goto L_10008fb2;
  /* 10008f9b cmp eax, 0x100109b8 */
  { uint32_t _a=(EAX),_b=(0x100109b8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008fa0 ja 0x10008fb2 */
  if ((!C.cf&&!C.zf)) goto L_10008fb2;
  /* 10008fa2 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10008fa4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10008fa7 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10008faa push eax */
  push32((uint32_t)(EAX));
  /* 10008fab call 0x1000a013 */
  push32(0x10008fb0u); f_1000a013();
  /* 10008fb0 pop ecx */
  ECX = (pop32());
  /* 10008fb1 ret  */
  ESPCHK(0x10008f8eu, _esp0);
  ESP += 4; return;
L_10008fb2:;
  /* 10008fb2 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10008fb5 push eax */
  push32((uint32_t)(EAX));
  /* 10008fb6 call dword ptr [0x1000e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e00c))), 0x10008fbcu);
  /* 10008fbc ret  */
  ESPCHK(0x10008f8eu, _esp0);
  ESP += 4; return;
}

/* FUN_10008fbd @ 0x10008fbd (35 bytes, 13 insns) */
void f_10008fbd(void) {
  FTRACE(0x10008fbdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10008fbd mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10008fc1 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008fc4 jge 0x10008fd1 */
  if ((C.sf==C.of)) goto L_10008fd1;
  /* 10008fc6 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10008fc9 push eax */
  push32((uint32_t)(EAX));
  /* 10008fca call 0x1000a013 */
  push32(0x10008fcfu); f_1000a013();
  /* 10008fcf pop ecx */
  ECX = (pop32());
  /* 10008fd0 ret  */
  ESPCHK(0x10008fbdu, _esp0);
  ESP += 4; return;
L_10008fd1:;
  /* 10008fd1 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10008fd5 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10008fd8 push eax */
  push32((uint32_t)(EAX));
  /* 10008fd9 call dword ptr [0x1000e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e00c))), 0x10008fdfu);
  /* 10008fdf ret  */
  ESPCHK(0x10008fbdu, _esp0);
  ESP += 4; return;
}

/* FUN_10008fe0 @ 0x10008fe0 (47 bytes, 17 insns) */
void f_10008fe0(void) {
  FTRACE(0x10008fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10008fe0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10008fe4 mov ecx, 0x10010758 */
  ECX = (0x10010758u);
  /* 10008fe9 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008feb jb 0x10009004 */
  if (C.cf) goto L_10009004;
  /* 10008fed cmp eax, 0x100109b8 */
  { uint32_t _a=(EAX),_b=(0x100109b8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10008ff2 ja 0x10009004 */
  if ((!C.cf&&!C.zf)) goto L_10009004;
  /* 10008ff4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10008ff6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10008ff9 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10008ffc push eax */
  push32((uint32_t)(EAX));
  /* 10008ffd call 0x1000a074 */
  push32(0x10009002u); f_1000a074();
  /* 10009002 pop ecx */
  ECX = (pop32());
  /* 10009003 ret  */
  ESPCHK(0x10008fe0u, _esp0);
  ESP += 4; return;
L_10009004:;
  /* 10009004 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10009007 push eax */
  push32((uint32_t)(EAX));
  /* 10009008 call dword ptr [0x1000e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e008))), 0x1000900eu);
  /* 1000900e ret  */
  ESPCHK(0x10008fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000900f @ 0x1000900f (35 bytes, 13 insns) */
void f_1000900f(void) {
  FTRACE(0x1000900fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000900f mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10009013 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10009016 jge 0x10009023 */
  if ((C.sf==C.of)) goto L_10009023;
  /* 10009018 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000901b push eax */
  push32((uint32_t)(EAX));
  /* 1000901c call 0x1000a074 */
  push32(0x10009021u); f_1000a074();
  /* 10009021 pop ecx */
  ECX = (pop32());
  /* 10009022 ret  */
  ESPCHK(0x1000900fu, _esp0);
  ESP += 4; return;
L_10009023:;
  /* 10009023 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10009027 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000902a push eax */
  push32((uint32_t)(EAX));
  /* 1000902b call dword ptr [0x1000e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e008))), 0x10009031u);
  /* 10009031 ret  */
  ESPCHK(0x1000900fu, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10009040 (123 bytes, 44 insns) */
void f_10009040(void) {
  FTRACE(0x10009040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10009040 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10009044 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1000904a je 0x10009060 */
  if (C.zf) goto L_10009060;
L_1000904c:;
  /* 1000904c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1000904e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1000904f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10009051 je 0x10009093 */
  if (C.zf) goto L_10009093;
  /* 10009053 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10009059 jne 0x1000904c */
  if (!C.zf) goto L_1000904c;
  /* 1000905b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10009060:;
  /* 10009060 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10009062 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10009067 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10009069 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1000906c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1000906e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10009071 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10009076 je 0x10009060 */
  if (C.zf) goto L_10009060;
  /* 10009078 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1000907b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1000907d je 0x100090b1 */
  if (C.zf) goto L_100090b1;
  /* 1000907f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10009081 je 0x100090a7 */
  if (C.zf) goto L_100090a7;
  /* 10009083 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10009088 je 0x1000909d */
  if (C.zf) goto L_1000909d;
  /* 1000908a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1000908f je 0x10009093 */
  if (C.zf) goto L_10009093;
  /* 10009091 jmp 0x10009060 */
  goto L_10009060;
L_10009093:;
  /* 10009093 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10009096 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1000909a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000909c ret  */
  ESPCHK(0x10009040u, _esp0);
  ESP += 4; return;
L_1000909d:;
  /* 1000909d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 100090a0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100090a4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100090a6 ret  */
  ESPCHK(0x10009040u, _esp0);
  ESP += 4; return;
L_100090a7:;
  /* 100090a7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 100090aa mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100090ae sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100090b0 ret  */
  ESPCHK(0x10009040u, _esp0);
  ESP += 4; return;
L_100090b1:;
  /* 100090b1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 100090b4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100090b8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100090ba ret  */
  ESPCHK(0x10009040u, _esp0);
  ESP += 4; return;
}

/* FUN_100090bb @ 0x100090bb (89 bytes, 39 insns) */
void f_100090bb(void) {
  FTRACE(0x100090bbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100090bb push ebp */
  push32((uint32_t)(EBP));
  /* 100090bc mov ebp, esp */
  EBP = (ESP);
  /* 100090be push ebx */
  push32((uint32_t)(EBX));
  /* 100090bf push esi */
  push32((uint32_t)(ESI));
  /* 100090c0 mov esi, 0x100169c4 */
  ESI = (0x100169c4u);
  /* 100090c5 push edi */
  push32((uint32_t)(EDI));
  /* 100090c6 push esi */
  push32((uint32_t)(ESI));
  /* 100090c7 call dword ptr [0x1000e090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e090))), 0x100090cdu);
  /* 100090cd mov edi, dword ptr [0x1000e08c] */
  EDI = (r32((uint32_t)(0x1000e08c)));
  /* 100090d3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100090d5 cmp dword ptr [0x100169c0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100169c0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100090db je 0x100090eb */
  if (C.zf) goto L_100090eb;
  /* 100090dd push esi */
  push32((uint32_t)(ESI));
  /* 100090de call edi */
  call_ind((uint32_t)(EDI), 0x100090e0u);
  /* 100090e0 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100090e2 call 0x1000a013 */
  push32(0x100090e7u); f_1000a013();
  /* 100090e7 pop ecx */
  ECX = (pop32());
  /* 100090e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 100090ea pop ebx */
  EBX = (pop32());
L_100090eb:;
  /* 100090eb push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100090ee push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100090f1 call 0x10009114 */
  push32(0x100090f6u); f_10009114();
  /* 100090f6 pop ecx */
  ECX = (pop32());
  /* 100090f7 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 100090fa test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100090fc pop ecx */
  ECX = (pop32());
  /* 100090fd je 0x10009109 */
  if (C.zf) goto L_10009109;
  /* 100090ff push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10009101 call 0x1000a074 */
  push32(0x10009106u); f_1000a074();
  /* 10009106 pop ecx */
  ECX = (pop32());
  /* 10009107 jmp 0x1000910c */
  goto L_1000910c;
L_10009109:;
  /* 10009109 push esi */
  push32((uint32_t)(ESI));
  /* 1000910a call edi */
  call_ind((uint32_t)(EDI), 0x1000910cu);
L_1000910c:;
  /* 1000910c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1000910f pop edi */
  EDI = (pop32());
  /* 10009110 pop esi */
  ESI = (pop32());
  /* 10009111 pop ebx */
  EBX = (pop32());
  /* 10009112 pop ebp */
  EBP = (pop32());
  /* 10009113 ret  */
  ESPCHK(0x100090bbu, _esp0);
  ESP += 4; return;
}

/* FUN_10009114 @ 0x10009114 (105 bytes, 38 insns) */
void f_10009114(void) {
  FTRACE(0x10009114u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10009114 push ebp */
  push32((uint32_t)(EBP));
  /* 10009115 mov ebp, esp */
  EBP = (ESP);
  /* 10009117 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000911a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000911c jne 0x10009120 */
  if (!C.zf) goto L_10009120;
  /* 1000911e pop ebp */
  EBP = (pop32());
  /* 1000911f ret  */
  ESPCHK(0x10009114u, _esp0);
  ESP += 4; return;
L_10009120:;
  /* 10009120 cmp dword ptr [0x10016848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10016848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10009127 jne 0x1000913b */
  if (!C.zf) goto L_1000913b;
  /* 10009129 mov cx, word ptr [ebp + 0xc] */
  CX = (r16((uint32_t)(EBP + 0xc)));
  /* 1000912d cmp cx, 0xff */
  { uint32_t _a=(CX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10009132 ja 0x1000916d */
  if ((!C.cf&&!C.zf)) goto L_1000916d;
  /* 10009134 push 1 */
  push32((uint32_t)(0x1u));
  /* 10009136 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10009138 pop eax */
  EAX = (pop32());
  /* 10009139 pop ebp */
  EBP = (pop32());
  /* 1000913a ret  */
  ESPCHK(0x10009114u, _esp0);
  ESP += 4; return;
L_1000913b:;
  /* 1000913b lea ecx, [ebp + 8] */
  ECX = ((uint32_t)(EBP + 0x8));
  /* 1000913e and dword ptr [ebp + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))&(0x0u); w32((uint32_t)(EBP + 0x8), (_r)); fl_logic(_r,32); }
  /* 10009142 push ecx */
  push32((uint32_t)(ECX));
  /* 10009143 push 0 */
  push32((uint32_t)(0x0u));
  /* 10009145 push dword ptr [0x10010bf0] */
  push32((uint32_t)(r32((uint32_t)(0x10010bf0))));
  /* 1000914b push eax */
  push32((uint32_t)(EAX));
  /* 1000914c lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1000914f push 1 */
  push32((uint32_t)(0x1u));
  /* 10009151 push eax */
  push32((uint32_t)(EAX));
  /* 10009152 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10009157 push dword ptr [0x10016858] */
  push32((uint32_t)(r32((uint32_t)(0x10016858))));
  /* 1000915d call dword ptr [0x1000e060] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000e060))), 0x10009163u);
  /* 10009163 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10009165 je 0x1000916d */
  if (C.zf) goto L_1000916d;
  /* 10009167 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000916b je 0x1000917b */
  if (C.zf) goto L_1000917b;
L_1000916d:;
  /* 1000916d call 0x1000bf71 */
  push32(0x10009172u); f_1000bf71();
  /* 10009172 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10009178 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1000917b:;
  /* 1000917b pop ebp */
  EBP = (pop32());
  /* 1000917c ret  */
  ESPCHK(0x10009114u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x10009180 (104 bytes, 43 insns) */
void f_10009180(void) {
  FTRACE(0x10009180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10009180 push ebx */
  push32((uint32_t)(EBX));
  /* 10009181 push esi */
  push32((uint32_t)(ESI));
  /* 10009182 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10009186 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10009188 jne 0x100091a2 */
  if (!C.zf) goto L_100091a2;
  /* 1000918a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1000918e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10009192 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10009194 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10009196 mov ebx, eax */
  EBX = (EAX);
  /* 10009198 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1000919c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1000919e mov edx, ebx */
  EDX = (EBX);
  /* 100091a0 jmp 0x100091e3 */
  goto L_100091e3;
L_100091a2:;
  /* 100091a2 mov ecx, eax */
  ECX = (EAX);
  /* 100091a4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 100091a8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 100091ac mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_100091b0:;
  /* 100091b0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 100091b2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 100091b4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 100091b6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 100091b8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100091ba jne 0x100091b0 */
  if (!C.zf) goto L_100091b0;
  /* 100091bc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100091be mov esi, eax */
  ESI = (EAX);
  /* 100091c0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 100091c4 mov ecx, eax */
  ECX = (EAX);
  /* 100091c6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 100091ca mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 100091cc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100091ce jb 0x100091de */
  if (C.cf) goto L_100091de;
  /* 100091d0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100091d4 ja 0x100091de */
  if ((!C.cf&&!C.zf)) goto L_100091de;
  /* 100091d6 jb 0x100091df */
  if (C.cf) goto L_100091df;
  /* 100091d8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100091dc jbe 0x100091df */
  if ((C.cf||C.zf)) goto L_100091df;
L_100091de:;
  /* 100091de dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_100091df:;
  /* 100091df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100091e1 mov eax, esi */
  EAX = (ESI);
L_100091e3:;
  /* 100091e3 pop esi */
  ESI = (pop32());
  /* 100091e4 pop ebx */
  EBX = (pop32());
  /* 100091e5 ret 0x10 */
  ESPCHK(0x10009180u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x100091f0 (117 bytes, 44 insns) */
void f_100091f0(void) {
  FTRACE(0x100091f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100091f0 push ebx */
  push32((uint32_t)(EBX));
  /* 100091f1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 100091f5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100091f7 jne 0x10009211 */
  if (!C.zf) goto L_10009211;
  /* 100091f9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 100091fd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10009201 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10009203 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10009205 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10009209 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1000920b mov eax, edx */
  EAX = (EDX);
  /* 1000920d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1000920f jmp 0x10009261 */
  goto L_10009261;
L_10009211:;
  /* 10009211 mov ecx, eax */
  ECX = (EAX);
  /* 10009213 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 10009217 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1000921b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1000921f:;
  /* 1000921f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10009221 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10009223 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10009225 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10009227 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10009229 jne 0x1000921f */
  if (!C.zf) goto L_1000921f;
  /* 1000922b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1000922d mov ecx, eax */
  ECX = (EAX);
  /* 1000922f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10009233 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 10009234 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10009238 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000923a jb 0x1000924a */
  if (C.cf) goto L_1000924a;
  /* 1000923c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10009240 ja 0x1000924a */
  if ((!C.cf&&!C.zf)) goto L_1000924a;
  /* 10009242 jb 0x10009252 */
  if (C.cf) goto L_10009252;
  /* 10009244 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10009248 jbe 0x10009252 */
  if ((C.cf||C.zf)) goto L_10009252;
L_1000924a:;
  /* 1000924a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000924e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10009252:;
  /* 10009252 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10009256 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000925a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1000925c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1000925e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10009261:;
  /* 10009261 pop ebx */
  EBX = (pop32());
  /* 10009262 ret 0x10 */
  ESPCHK(0x100091f0u, _esp0);
  ESP += 20; return;
}

